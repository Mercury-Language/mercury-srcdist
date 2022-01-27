/*
** Automatically generated from `eqvclass.m'
** by the Mercury compiler,
** version 2015-10-27
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


/* :- module eqvclass. */
/* :- implementation. */

/*
INIT mercury__eqvclass__init
ENDINIT
*/

#include "eqvclass.mih"


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




#line 95 "eqvclass.c"
static const MR_VA_PseudoTypeInfo_Struct2 mercury__eqvclass____vpti_func_2__pseudo_1__pseudo_2;

#line 98 "eqvclass.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__eqvclass__set_ordlist__pti_set_ordlist_1__pseudo_1;

#line 101 "eqvclass.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__eqvclass__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1;

#line 104 "eqvclass.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__eqvclass__tree234__pti_tree234_2__pseudo_1__plain_builtin__type_ctor_info_int_0;

#line 107 "eqvclass.c"
static const MR_PseudoTypeInfo mercury__eqvclass__eqvclass__field_types_eqvclass_1_0[3];

#line 110 "eqvclass.c"
static const MR_ConstString mercury__eqvclass__eqvclass__field_names_eqvclass_1_0[3];

#line 113 "eqvclass.c"
static const MR_DuFunctorDesc mercury__eqvclass__eqvclass__du_functor_desc_eqvclass_1_0;

#line 116 "eqvclass.c"
static const MR_DuFunctorDescPtr mercury__eqvclass__eqvclass__du_stag_ordered_eqvclass_1_0[1];

#line 119 "eqvclass.c"
static const MR_DuPtagLayout mercury__eqvclass__eqvclass__du_ptag_ordered_eqvclass_1[1];

#line 122 "eqvclass.c"
static const MR_DuFunctorDescPtr mercury__eqvclass__eqvclass__du_name_ordered_eqvclass_1[1];

#line 125 "eqvclass.c"
static const MR_Integer mercury__eqvclass__eqvclass__functor_number_map_eqvclass_1[1];

#line 128 "eqvclass.c"
static MR_bool MR_CALL 
mercury__eqvclass____Unify____eqvclass_1_0_10001(
#line 131 "eqvclass.c"
  MR_Box mercury__eqvclass__wrapper_arg_1,
#line 133 "eqvclass.c"
  MR_Box mercury__eqvclass__wrapper_arg_2,
#line 135 "eqvclass.c"
  MR_Box mercury__eqvclass__wrapper_arg_3);

#line 138 "eqvclass.c"
static void MR_CALL 
mercury__eqvclass____Compare____eqvclass_1_0_10001(
#line 141 "eqvclass.c"
  MR_Box mercury__eqvclass__wrapper_arg_1,
#line 143 "eqvclass.c"
  MR_Box * mercury__eqvclass__wrapper_arg_2,
#line 145 "eqvclass.c"
  MR_Box mercury__eqvclass__wrapper_arg_3,
#line 147 "eqvclass.c"
  MR_Box mercury__eqvclass__wrapper_arg_4);

#line 150 "eqvclass.c"
static MR_bool MR_CALL 
mercury__eqvclass____Unify____partition_id_0_0_10001(
#line 153 "eqvclass.c"
  MR_Box mercury__eqvclass__wrapper_arg_1,
#line 155 "eqvclass.c"
  MR_Box mercury__eqvclass__wrapper_arg_2);

#line 158 "eqvclass.c"
static void MR_CALL 
mercury__eqvclass____Compare____partition_id_0_0_10001(
#line 161 "eqvclass.c"
  MR_Box * mercury__eqvclass__wrapper_arg_1,
#line 163 "eqvclass.c"
  MR_Box mercury__eqvclass__wrapper_arg_2,
#line 165 "eqvclass.c"
  MR_Box mercury__eqvclass__wrapper_arg_3);

#line 196 "list.int"
static void MR_CALL 
mercury__eqvclass__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_52_95_95_104_111_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_10_p_in__list_0(
#line 196 "list.int"
  MR_Word mercury__eqvclass__V_51_51,
#line 196 "list.int"
  MR_Word mercury__eqvclass__V_52_52,
#line 196 "list.int"
  MR_Word mercury__eqvclass__V_53_53,
#line 196 "list.int"
  MR_Integer mercury__eqvclass__V_54_54,
#line 196 "list.int"
  MR_Word mercury__eqvclass__HeadVar__2_2,
#line 196 "list.int"
  MR_Word mercury__eqvclass__HeadVar__3_3,
#line 196 "list.int"
  MR_Word * mercury__eqvclass__HeadVar__4_4,
#line 196 "list.int"
  MR_Word mercury__eqvclass__HeadVar__5_5,
#line 196 "list.int"
  MR_Word * mercury__eqvclass__HeadVar__6_6,
#line 196 "list.int"
  MR_Word mercury__eqvclass__HeadVar__7_7,
#line 196 "list.int"
  MR_Word * mercury__eqvclass__HeadVar__8_8,
#line 196 "list.int"
  MR_Word mercury__eqvclass__HeadVar__9_9,
#line 196 "list.int"
  MR_Word * mercury__eqvclass__HeadVar__10_10);

#line 18 "ops.opt"
static MR_Integer MR_CALL 
mercury__eqvclass__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 467 "eqvclass.m"
static void MR_CALL 
mercury__eqvclass__make_partition_4_p_0(
#line 467 "eqvclass.m"
  MR_Word mercury__eqvclass__TypeInfo_for_T_17,
#line 467 "eqvclass.m"
  MR_Word mercury__eqvclass__HeadVar__1_1,
#line 467 "eqvclass.m"
  MR_Integer mercury__eqvclass__HeadVar__2_2,
#line 467 "eqvclass.m"
  MR_Word mercury__eqvclass__STATE_VARIABLE_ElementMap_0_3,
#line 467 "eqvclass.m"
  MR_Word * mercury__eqvclass__STATE_VARIABLE_ElementMap_4);

#line 383 "eqvclass.m"
static MR_bool MR_CALL 
mercury__eqvclass__same_eqvclass_list_2_3_p_0(
#line 383 "eqvclass.m"
  MR_Word mercury__eqvclass__TypeInfo_for_T_10,
#line 383 "eqvclass.m"
  MR_Word mercury__eqvclass__ElementMap_1,
#line 383 "eqvclass.m"
  MR_Word mercury__eqvclass__HeadVar__2_2,
#line 383 "eqvclass.m"
  MR_Integer mercury__eqvclass__Id_3);

#line 363 "eqvclass.m"
static void MR_CALL 
mercury__eqvclass__change_partition_4_p_0(
#line 363 "eqvclass.m"
  MR_Word mercury__eqvclass__TypeInfo_for_T_17,
#line 363 "eqvclass.m"
  MR_Word mercury__eqvclass__HeadVar__1_1,
#line 363 "eqvclass.m"
  MR_Integer mercury__eqvclass__HeadVar__2_2,
#line 363 "eqvclass.m"
  MR_Word mercury__eqvclass__STATE_VARIABLE_ElementMap_0_3,
#line 363 "eqvclass.m"
  MR_Word * mercury__eqvclass__STATE_VARIABLE_ElementMap_4);

#line 340 "eqvclass.m"
static void MR_CALL 
mercury__eqvclass__add_equivalence_4_p_0(
#line 340 "eqvclass.m"
  MR_Word mercury__eqvclass__TypeInfo_for_T_24,
#line 340 "eqvclass.m"
  MR_Integer mercury__eqvclass__IdA_5,
#line 340 "eqvclass.m"
  MR_Integer mercury__eqvclass__IdB_6,
#line 340 "eqvclass.m"
  MR_Word mercury__eqvclass__EqvClass0_7,
#line 340 "eqvclass.m"
  MR_Word * mercury__eqvclass__EqvClass_8);

#line 501 "eqvclass.m"
static void MR_CALL 
mercury__eqvclass__divide_equivalence_classes_2_f_0_1(
#line 501 "eqvclass.m"
  MR_Box mercury__eqvclass__closure_arg,
#line 501 "eqvclass.m"
  MR_Box mercury__eqvclass__wrapper_arg_1,
#line 501 "eqvclass.m"
  MR_Box mercury__eqvclass__wrapper_arg_2,
#line 501 "eqvclass.m"
  MR_Box mercury__eqvclass__wrapper_arg_3,
#line 501 "eqvclass.m"
  MR_Box * mercury__eqvclass__wrapper_arg_4,
#line 501 "eqvclass.m"
  MR_Box mercury__eqvclass__wrapper_arg_5,
#line 501 "eqvclass.m"
  MR_Box * mercury__eqvclass__wrapper_arg_6,
#line 501 "eqvclass.m"
  MR_Box mercury__eqvclass__wrapper_arg_7,
#line 501 "eqvclass.m"
  MR_Box * mercury__eqvclass__wrapper_arg_8);


static /* final */ const MR_Box mercury__eqvclass_scalar_common_1[2][3];

static /* final */ const MR_Box mercury__eqvclass_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__eqvclass_scalar_common_3[2][5];

static /* final */ const MR_Integer mercury__eqvclass_scalar_common_4[1][3];

static /* final */ const MR_Box mercury__eqvclass_scalar_common_5[1][14];




static /* final */ const MR_Box mercury__eqvclass_scalar_common_1[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (((MR_Box) ((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box mercury__eqvclass_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__eqvclass_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__eqvclass_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__eqvclass_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__eqvclass_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Integer mercury__eqvclass_scalar_common_4[1][3] = {
  /* row 0 */
  {
    (MR_Integer) 2,
    (MR_Integer) 33,
    (MR_Integer) 65
  },
};

static /* final */ const MR_Box mercury__eqvclass_scalar_common_5[1][14] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&mercury__eqvclass_scalar_common_4[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 11)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__eqvclass____vpti_func_2__pseudo_1__pseudo_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__eqvclass__set_ordlist__pti_set_ordlist_1__pseudo_1)),
    ((MR_Box) (&mercury__counter__counter__type_ctor_info_counter_0)),
    ((MR_Box) (&mercury__counter__counter__type_ctor_info_counter_0)),
    ((MR_Box) (&mercury__eqvclass__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1)),
    ((MR_Box) (&mercury__eqvclass__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1)),
    ((MR_Box) (&mercury__eqvclass__tree234__pti_tree234_2__pseudo_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__eqvclass__tree234__pti_tree234_2__pseudo_1__plain_builtin__type_ctor_info_int_0))
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



#line 392 "eqvclass.c"
static const MR_VA_PseudoTypeInfo_Struct2 mercury__eqvclass____vpti_func_2__pseudo_1__pseudo_2 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 402 "eqvclass.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__eqvclass__set_ordlist__pti_set_ordlist_1__pseudo_1 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 410 "eqvclass.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__eqvclass__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &mercury__eqvclass__set_ordlist__pti_set_ordlist_1__pseudo_1
  }
};

#line 419 "eqvclass.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__eqvclass__tree234__pti_tree234_2__pseudo_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 428 "eqvclass.c"
static const MR_PseudoTypeInfo mercury__eqvclass__eqvclass__field_types_eqvclass_1_0[3] = {
  (MR_PseudoTypeInfo) &mercury__counter__counter__type_ctor_info_counter_0,
  (MR_PseudoTypeInfo) &mercury__eqvclass__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__eqvclass__tree234__pti_tree234_2__pseudo_1__plain_builtin__type_ctor_info_int_0
};

#line 435 "eqvclass.c"
static const MR_ConstString mercury__eqvclass__eqvclass__field_names_eqvclass_1_0[3] = {
  (MR_String) "next_id",
  (MR_String) "partitions",
  (MR_String) "keys"
};

#line 442 "eqvclass.c"
static const MR_DuFunctorDesc mercury__eqvclass__eqvclass__du_functor_desc_eqvclass_1_0 = {
  (MR_String) "eqvclass",
  (MR_Integer) 3,
  (MR_Integer) 6,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__eqvclass__eqvclass__field_types_eqvclass_1_0,
  mercury__eqvclass__eqvclass__field_names_eqvclass_1_0,
  NULL,
  NULL
};

#line 457 "eqvclass.c"
static const MR_DuFunctorDescPtr mercury__eqvclass__eqvclass__du_stag_ordered_eqvclass_1_0[1] = {
  &mercury__eqvclass__eqvclass__du_functor_desc_eqvclass_1_0
};

#line 462 "eqvclass.c"
static const MR_DuPtagLayout mercury__eqvclass__eqvclass__du_ptag_ordered_eqvclass_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__eqvclass__eqvclass__du_stag_ordered_eqvclass_1_0
  }
};

#line 471 "eqvclass.c"
static const MR_DuFunctorDescPtr mercury__eqvclass__eqvclass__du_name_ordered_eqvclass_1[1] = {
  &mercury__eqvclass__eqvclass__du_functor_desc_eqvclass_1_0
};

#line 476 "eqvclass.c"
static const MR_Integer mercury__eqvclass__eqvclass__functor_number_map_eqvclass_1[1] = {
  (MR_Integer) 0
};

#line 481 "eqvclass.c"
const MR_TypeCtorInfo_Struct mercury__eqvclass__eqvclass__type_ctor_info_eqvclass_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__eqvclass____Unify____eqvclass_1_0_10001)),
  ((MR_Box) (mercury__eqvclass____Compare____eqvclass_1_0_10001)),
  (MR_String) "eqvclass",
  (MR_String) "eqvclass",
  {     mercury__eqvclass__eqvclass__du_name_ordered_eqvclass_1 },
  {     mercury__eqvclass__eqvclass__du_ptag_ordered_eqvclass_1 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__eqvclass__eqvclass__functor_number_map_eqvclass_1
};

#line 498 "eqvclass.c"
const MR_TypeCtorInfo_Struct mercury__eqvclass__eqvclass__type_ctor_info_partition_id_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__eqvclass____Unify____partition_id_0_0_10001)),
  ((MR_Box) (mercury__eqvclass____Compare____partition_id_0_0_10001)),
  (MR_String) "eqvclass",
  (MR_String) "partition_id",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 515 "eqvclass.c"
static MR_bool MR_CALL 
mercury__eqvclass____Unify____eqvclass_1_0_10001(
#line 518 "eqvclass.c"
  MR_Box mercury__eqvclass__wrapper_arg_1,
#line 520 "eqvclass.c"
  MR_Box mercury__eqvclass__wrapper_arg_2,
#line 522 "eqvclass.c"
  MR_Box mercury__eqvclass__wrapper_arg_3)
#line 524 "eqvclass.c"
{
#line 526 "eqvclass.c"
  {
#line 528 "eqvclass.c"
    MR_bool mercury__eqvclass__succeeded;

#line 531 "eqvclass.c"
    {
#line 533 "eqvclass.c"
      mercury__eqvclass__succeeded = mercury__eqvclass____Unify____eqvclass_1_0(((MR_Word) mercury__eqvclass__wrapper_arg_1), ((MR_Word) mercury__eqvclass__wrapper_arg_2), ((MR_Word) mercury__eqvclass__wrapper_arg_3));
    }
#line 536 "eqvclass.c"
    return mercury__eqvclass__succeeded;
#line 538 "eqvclass.c"
  }
#line 540 "eqvclass.c"
}

#line 543 "eqvclass.c"
static void MR_CALL 
mercury__eqvclass____Compare____eqvclass_1_0_10001(
#line 546 "eqvclass.c"
  MR_Box mercury__eqvclass__wrapper_arg_1,
#line 548 "eqvclass.c"
  MR_Box * mercury__eqvclass__wrapper_arg_2,
#line 550 "eqvclass.c"
  MR_Box mercury__eqvclass__wrapper_arg_3,
#line 552 "eqvclass.c"
  MR_Box mercury__eqvclass__wrapper_arg_4)
#line 554 "eqvclass.c"
{
#line 556 "eqvclass.c"
  {
#line 558 "eqvclass.c"
    MR_Word mercury__eqvclass__conv0_HeadVar__1_1;

#line 561 "eqvclass.c"
    {
#line 563 "eqvclass.c"
      mercury__eqvclass____Compare____eqvclass_1_0(((MR_Word) mercury__eqvclass__wrapper_arg_1), &mercury__eqvclass__conv0_HeadVar__1_1, ((MR_Word) mercury__eqvclass__wrapper_arg_3), ((MR_Word) mercury__eqvclass__wrapper_arg_4));
    }
#line 566 "eqvclass.c"
    *mercury__eqvclass__wrapper_arg_2 = ((MR_Box) (mercury__eqvclass__conv0_HeadVar__1_1));
#line 568 "eqvclass.c"
  }
#line 570 "eqvclass.c"
}

#line 573 "eqvclass.c"
static MR_bool MR_CALL 
mercury__eqvclass____Unify____partition_id_0_0_10001(
#line 576 "eqvclass.c"
  MR_Box mercury__eqvclass__wrapper_arg_1,
#line 578 "eqvclass.c"
  MR_Box mercury__eqvclass__wrapper_arg_2)
#line 580 "eqvclass.c"
{
#line 582 "eqvclass.c"
  {
#line 584 "eqvclass.c"
    MR_bool mercury__eqvclass__succeeded;

#line 587 "eqvclass.c"
    {
#line 589 "eqvclass.c"
      mercury__eqvclass__succeeded = mercury__eqvclass____Unify____partition_id_0_0(((MR_Integer) mercury__eqvclass__wrapper_arg_1), ((MR_Integer) mercury__eqvclass__wrapper_arg_2));
    }
#line 592 "eqvclass.c"
    return mercury__eqvclass__succeeded;
#line 594 "eqvclass.c"
  }
#line 596 "eqvclass.c"
}

#line 599 "eqvclass.c"
static void MR_CALL 
mercury__eqvclass____Compare____partition_id_0_0_10001(
#line 602 "eqvclass.c"
  MR_Box * mercury__eqvclass__wrapper_arg_1,
#line 604 "eqvclass.c"
  MR_Box mercury__eqvclass__wrapper_arg_2,
#line 606 "eqvclass.c"
  MR_Box mercury__eqvclass__wrapper_arg_3)
#line 608 "eqvclass.c"
{
#line 610 "eqvclass.c"
  {
#line 612 "eqvclass.c"
    MR_Word mercury__eqvclass__conv0_HeadVar__1_1;

#line 615 "eqvclass.c"
    {
#line 617 "eqvclass.c"
      mercury__eqvclass____Compare____partition_id_0_0(&mercury__eqvclass__conv0_HeadVar__1_1, ((MR_Integer) mercury__eqvclass__wrapper_arg_2), ((MR_Integer) mercury__eqvclass__wrapper_arg_3));
    }
#line 620 "eqvclass.c"
    *mercury__eqvclass__wrapper_arg_1 = ((MR_Box) (mercury__eqvclass__conv0_HeadVar__1_1));
#line 622 "eqvclass.c"
  }
#line 624 "eqvclass.c"
}

#line 196 "list.int"
static void MR_CALL 
mercury__eqvclass__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_52_95_95_104_111_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_10_p_in__list_0(
#line 196 "list.int"
  MR_Word mercury__eqvclass__V_51_51,
#line 196 "list.int"
  MR_Word mercury__eqvclass__V_52_52,
#line 196 "list.int"
  MR_Word mercury__eqvclass__V_53_53,
#line 196 "list.int"
  MR_Integer mercury__eqvclass__V_54_54,
#line 196 "list.int"
  MR_Word mercury__eqvclass__HeadVar__2_2,
#line 196 "list.int"
  MR_Word mercury__eqvclass__HeadVar__3_3,
#line 196 "list.int"
  MR_Word * mercury__eqvclass__HeadVar__4_4,
#line 196 "list.int"
  MR_Word mercury__eqvclass__HeadVar__5_5,
#line 196 "list.int"
  MR_Word * mercury__eqvclass__HeadVar__6_6,
#line 196 "list.int"
  MR_Word mercury__eqvclass__HeadVar__7_7,
#line 196 "list.int"
  MR_Word * mercury__eqvclass__HeadVar__8_8,
#line 196 "list.int"
  MR_Word mercury__eqvclass__HeadVar__9_9,
#line 196 "list.int"
  MR_Word * mercury__eqvclass__HeadVar__10_10)
#line 196 "list.int"
{
#line 441 "list.opt"
  while (MR_TRUE)
#line 441 "list.opt"
    {
#line 441 "list.opt"
      /* tailcall optimized into a loop */
#line 441 "list.opt"
      {
#line 441 "list.opt"
        MR_bool mercury__eqvclass__succeeded;

#line 441 "list.opt"
        if ((mercury__eqvclass__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 441 "list.opt"
          {
#line 441 "list.opt"
            *mercury__eqvclass__HeadVar__10_10 = mercury__eqvclass__HeadVar__9_9;
#line 441 "list.opt"
            *mercury__eqvclass__HeadVar__8_8 = mercury__eqvclass__HeadVar__7_7;
#line 441 "list.opt"
            *mercury__eqvclass__HeadVar__6_6 = mercury__eqvclass__HeadVar__5_5;
#line 441 "list.opt"
            *mercury__eqvclass__HeadVar__4_4 = mercury__eqvclass__HeadVar__3_3;
#line 441 "list.opt"
          }
#line 441 "list.opt"
        else
#line 446 "list.opt"
          {
#line 446 "list.opt"
            MR_Box mercury__eqvclass__V_25_21 = (MR_hl_field(MR_mktag(1), mercury__eqvclass__HeadVar__2_2, (MR_Integer) 0));
#line 446 "list.opt"
            MR_Word mercury__eqvclass__V_26_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__eqvclass__HeadVar__2_2, (MR_Integer) 1)));
#line 446 "list.opt"
            MR_Word mercury__eqvclass__V_39_31;
#line 446 "list.opt"
            MR_Word mercury__eqvclass__V_40_32;
#line 446 "list.opt"
            MR_Word mercury__eqvclass__V_41_33;
#line 446 "list.opt"
            MR_Word mercury__eqvclass__V_42_34;

#line 447 "list.opt"
            {
#line 447 "list.opt"
              mercury__eqvclass__divide_equivalence_classes_3_11_p_0(mercury__eqvclass__V_51_51, mercury__eqvclass__V_52_52, mercury__eqvclass__V_53_53, mercury__eqvclass__V_54_54, mercury__eqvclass__V_25_21, mercury__eqvclass__HeadVar__3_3, &mercury__eqvclass__V_39_31, mercury__eqvclass__HeadVar__5_5, &mercury__eqvclass__V_40_32, mercury__eqvclass__HeadVar__7_7, &mercury__eqvclass__V_41_33, mercury__eqvclass__HeadVar__9_9, &mercury__eqvclass__V_42_34);
            }
#line 448 "list.opt"
            /* direct tailcall eliminated */
#line 448 "list.opt"
            {
#line 448 "list.opt"
              MR_Word mercury__eqvclass__HeadVar__2__tmp_copy_2 = mercury__eqvclass__V_26_22;
#line 448 "list.opt"
              MR_Word mercury__eqvclass__HeadVar__3__tmp_copy_3 = mercury__eqvclass__V_39_31;
#line 448 "list.opt"
              MR_Word mercury__eqvclass__HeadVar__5__tmp_copy_5 = mercury__eqvclass__V_40_32;
#line 448 "list.opt"
              MR_Word mercury__eqvclass__HeadVar__7__tmp_copy_7 = mercury__eqvclass__V_41_33;
#line 448 "list.opt"
              MR_Word mercury__eqvclass__HeadVar__9__tmp_copy_9 = mercury__eqvclass__V_42_34;

#line 448 "list.opt"
              mercury__eqvclass__HeadVar__9_9 = mercury__eqvclass__HeadVar__9__tmp_copy_9;
#line 448 "list.opt"
              mercury__eqvclass__HeadVar__7_7 = mercury__eqvclass__HeadVar__7__tmp_copy_7;
#line 448 "list.opt"
              mercury__eqvclass__HeadVar__5_5 = mercury__eqvclass__HeadVar__5__tmp_copy_5;
#line 448 "list.opt"
              mercury__eqvclass__HeadVar__3_3 = mercury__eqvclass__HeadVar__3__tmp_copy_3;
#line 448 "list.opt"
              mercury__eqvclass__HeadVar__2_2 = mercury__eqvclass__HeadVar__2__tmp_copy_2;
#line 448 "list.opt"
            }
#line 448 "list.opt"
            continue;
#line 446 "list.opt"
          }
#line 441 "list.opt"
      }
#line 441 "list.opt"
      break;
#line 441 "list.opt"
    }
#line 196 "list.int"
}

#line 18 "ops.opt"
static MR_Integer MR_CALL 
mercury__eqvclass__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 18 "ops.opt"
{
#line 47 "ops.opt"
  {
#line 47 "ops.opt"
    MR_bool mercury__eqvclass__succeeded;

#line 47 "ops.opt"
    return (MR_Integer) 1200;
#line 47 "ops.opt"
  }
#line 18 "ops.opt"
}

#line 171 "eqvclass.m"
void MR_CALL 
mercury__eqvclass____Compare____partition_id_0_0(
#line 171 "eqvclass.m"
  MR_Word * mercury__eqvclass__HeadVar__1_1,
#line 171 "eqvclass.m"
  MR_Integer mercury__eqvclass__HeadVar__2_2,
#line 171 "eqvclass.m"
  MR_Integer mercury__eqvclass__HeadVar__3_3)
#line 171 "eqvclass.m"
{
#line 171 "eqvclass.m"
  {
#line 171 "eqvclass.m"
    MR_bool mercury__eqvclass__succeeded;
#line 171 "eqvclass.m"
    MR_Integer mercury__eqvclass__Cast_HeadVar1_4 = mercury__eqvclass__HeadVar__2_2;
#line 171 "eqvclass.m"
    MR_Integer mercury__eqvclass__Cast_HeadVar2_5 = mercury__eqvclass__HeadVar__3_3;

#line 69 "private_builtin.opt"
    mercury__eqvclass__succeeded = (mercury__eqvclass__Cast_HeadVar1_4 < mercury__eqvclass__Cast_HeadVar2_5);
#line 72 "private_builtin.opt"
    if (mercury__eqvclass__succeeded)
#line 71 "private_builtin.opt"
      *mercury__eqvclass__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "private_builtin.opt"
    else
#line 77 "private_builtin.opt"
      {
#line 74 "private_builtin.opt"
        mercury__eqvclass__succeeded = (mercury__eqvclass__Cast_HeadVar1_4 == mercury__eqvclass__Cast_HeadVar2_5);
#line 77 "private_builtin.opt"
        if (mercury__eqvclass__succeeded)
#line 76 "private_builtin.opt"
          *mercury__eqvclass__HeadVar__1_1 = (MR_Integer) 0;
#line 77 "private_builtin.opt"
        else
#line 78 "private_builtin.opt"
          *mercury__eqvclass__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "private_builtin.opt"
      }
#line 171 "eqvclass.m"
  }
#line 171 "eqvclass.m"
}

#line 171 "eqvclass.m"
MR_bool MR_CALL 
mercury__eqvclass____Unify____partition_id_0_0(
#line 171 "eqvclass.m"
  MR_Integer mercury__eqvclass__HeadVar__1_1,
#line 171 "eqvclass.m"
  MR_Integer mercury__eqvclass__HeadVar__2_2)
#line 171 "eqvclass.m"
{
#line 171 "eqvclass.m"
  {
#line 171 "eqvclass.m"
    MR_bool mercury__eqvclass__succeeded;
#line 171 "eqvclass.m"
    MR_Integer mercury__eqvclass__Cast_HeadVar1_3 = mercury__eqvclass__HeadVar__1_1;
#line 171 "eqvclass.m"
    MR_Integer mercury__eqvclass__Cast_HeadVar2_4 = mercury__eqvclass__HeadVar__2_2;

#line 171 "eqvclass.m"
    mercury__eqvclass__succeeded = (mercury__eqvclass__Cast_HeadVar1_3 == mercury__eqvclass__Cast_HeadVar2_4);
#line 171 "eqvclass.m"
    return mercury__eqvclass__succeeded;
#line 171 "eqvclass.m"
  }
#line 171 "eqvclass.m"
}

#line 164 "eqvclass.m"
void MR_CALL 
mercury__eqvclass____Compare____eqvclass_1_0(
#line 164 "eqvclass.m"
  MR_Word mercury__eqvclass__TypeInfo_for_T_14,
#line 164 "eqvclass.m"
  MR_Word * mercury__eqvclass__HeadVar__1_1,
#line 164 "eqvclass.m"
  MR_Word mercury__eqvclass__HeadVar__2_2,
#line 164 "eqvclass.m"
  MR_Word mercury__eqvclass__HeadVar__3_3)
#line 164 "eqvclass.m"
{
#line 164 "eqvclass.m"
  {
#line 164 "eqvclass.m"
    MR_bool mercury__eqvclass__succeeded;
#line 164 "eqvclass.m"
    MR_Integer mercury__eqvclass__CastX_12 = (MR_Integer) mercury__eqvclass__HeadVar__2_2;
#line 164 "eqvclass.m"
    MR_Integer mercury__eqvclass__CastY_13 = (MR_Integer) mercury__eqvclass__HeadVar__3_3;

#line 164 "eqvclass.m"
    mercury__eqvclass__succeeded = (mercury__eqvclass__CastX_12 == mercury__eqvclass__CastY_13);
#line 164 "eqvclass.m"
    if (mercury__eqvclass__succeeded)
#line 862 "eqvclass.c"
      *mercury__eqvclass__HeadVar__1_1 = (MR_Integer) 0;
#line 164 "eqvclass.m"
    else
#line 164 "eqvclass.m"
      {
#line 164 "eqvclass.m"
        MR_Word mercury__eqvclass__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__HeadVar__2_2, (MR_Integer) 0)));
#line 164 "eqvclass.m"
        MR_Word mercury__eqvclass__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__HeadVar__2_2, (MR_Integer) 1)));
#line 164 "eqvclass.m"
        MR_Word mercury__eqvclass__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__HeadVar__2_2, (MR_Integer) 2)));
#line 164 "eqvclass.m"
        MR_Word mercury__eqvclass__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__HeadVar__3_3, (MR_Integer) 0)));
#line 164 "eqvclass.m"
        MR_Word mercury__eqvclass__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__HeadVar__3_3, (MR_Integer) 1)));
#line 164 "eqvclass.m"
        MR_Word mercury__eqvclass__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__HeadVar__3_3, (MR_Integer) 2)));
#line 164 "eqvclass.m"
        MR_Word mercury__eqvclass__V_10_10;
#line 164 "eqvclass.m"
        MR_Integer mercury__eqvclass__V_24_24 = (MR_Integer) mercury__eqvclass__V_4_4;
#line 164 "eqvclass.m"
        MR_Integer mercury__eqvclass__V_25_25 = (MR_Integer) mercury__eqvclass__V_7_7;

#line 69 "private_builtin.opt"
        mercury__eqvclass__succeeded = (mercury__eqvclass__V_24_24 < mercury__eqvclass__V_25_25);
#line 72 "private_builtin.opt"
        if (mercury__eqvclass__succeeded)
#line 71 "private_builtin.opt"
          mercury__eqvclass__V_10_10 = (MR_Integer) 1;
#line 72 "private_builtin.opt"
        else
#line 77 "private_builtin.opt"
          {
#line 74 "private_builtin.opt"
            mercury__eqvclass__succeeded = (mercury__eqvclass__V_24_24 == mercury__eqvclass__V_25_25);
#line 77 "private_builtin.opt"
            if (mercury__eqvclass__succeeded)
#line 76 "private_builtin.opt"
              mercury__eqvclass__V_10_10 = (MR_Integer) 0;
#line 77 "private_builtin.opt"
            else
#line 78 "private_builtin.opt"
              mercury__eqvclass__V_10_10 = (MR_Integer) 2;
#line 77 "private_builtin.opt"
          }
#line 909 "eqvclass.c"
        mercury__eqvclass__succeeded = (mercury__eqvclass__V_10_10 == (MR_Integer) 0);
#line 164 "eqvclass.m"
        mercury__eqvclass__succeeded = !(mercury__eqvclass__succeeded);
#line 164 "eqvclass.m"
        if (mercury__eqvclass__succeeded)
#line 164 "eqvclass.m"
          *mercury__eqvclass__HeadVar__1_1 = mercury__eqvclass__V_10_10;
#line 164 "eqvclass.m"
        else
#line 164 "eqvclass.m"
          {
#line 164 "eqvclass.m"
            MR_Word mercury__eqvclass__V_11_11;
#line 164 "eqvclass.m"
            MR_Word mercury__eqvclass__TypeCtorInfo_16_16 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 164 "eqvclass.m"
            MR_Word mercury__eqvclass__TypeCtorInfo_17_17 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
#line 164 "eqvclass.m"
            MR_Word mercury__eqvclass__TypeInfo_18_18;

#line 930 "eqvclass.c"
            {
#line 932 "eqvclass.c"
              mercury__eqvclass__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 934 "eqvclass.c"
              MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_18_18, 0) = ((MR_Box) (mercury__eqvclass__TypeCtorInfo_17_17));
#line 936 "eqvclass.c"
              MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_18_18, 1) = ((MR_Box) (mercury__eqvclass__TypeInfo_for_T_14));
#line 938 "eqvclass.c"
            }
#line 164 "eqvclass.m"
            {
#line 164 "eqvclass.m"
              mercury__tree234____Compare____tree234_2_0(mercury__eqvclass__TypeCtorInfo_16_16, mercury__eqvclass__TypeInfo_18_18, &mercury__eqvclass__V_11_11, mercury__eqvclass__V_5_5, mercury__eqvclass__V_8_8);
            }
#line 945 "eqvclass.c"
            mercury__eqvclass__succeeded = (mercury__eqvclass__V_11_11 == (MR_Integer) 0);
#line 164 "eqvclass.m"
            mercury__eqvclass__succeeded = !(mercury__eqvclass__succeeded);
#line 164 "eqvclass.m"
            if (mercury__eqvclass__succeeded)
#line 164 "eqvclass.m"
              *mercury__eqvclass__HeadVar__1_1 = mercury__eqvclass__V_11_11;
#line 164 "eqvclass.m"
            else
#line 164 "eqvclass.m"
              {
#line 164 "eqvclass.m"
                MR_Word mercury__eqvclass__TypeCtorInfo_21_21 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;

#line 164 "eqvclass.m"
                {
#line 164 "eqvclass.m"
                  mercury__tree234____Compare____tree234_2_0(mercury__eqvclass__TypeInfo_for_T_14, mercury__eqvclass__TypeCtorInfo_21_21, mercury__eqvclass__HeadVar__1_1, mercury__eqvclass__V_6_6, mercury__eqvclass__V_9_9);
#line 164 "eqvclass.m"
                  return;
                }
#line 164 "eqvclass.m"
              }
#line 164 "eqvclass.m"
          }
#line 164 "eqvclass.m"
      }
#line 164 "eqvclass.m"
  }
#line 164 "eqvclass.m"
}

#line 164 "eqvclass.m"
MR_bool MR_CALL 
mercury__eqvclass____Unify____eqvclass_1_0(
#line 164 "eqvclass.m"
  MR_Word mercury__eqvclass__TypeInfo_for_T_11,
#line 164 "eqvclass.m"
  MR_Word mercury__eqvclass__HeadVar__1_1,
#line 164 "eqvclass.m"
  MR_Word mercury__eqvclass__HeadVar__2_2)
#line 164 "eqvclass.m"
{
#line 164 "eqvclass.m"
  {
#line 164 "eqvclass.m"
    MR_bool mercury__eqvclass__succeeded;
#line 164 "eqvclass.m"
    MR_Integer mercury__eqvclass__CastX_9 = (MR_Integer) mercury__eqvclass__HeadVar__1_1;
#line 164 "eqvclass.m"
    MR_Integer mercury__eqvclass__CastY_10 = (MR_Integer) mercury__eqvclass__HeadVar__2_2;

#line 164 "eqvclass.m"
    mercury__eqvclass__succeeded = (mercury__eqvclass__CastX_9 == mercury__eqvclass__CastY_10);
#line 164 "eqvclass.m"
    if (mercury__eqvclass__succeeded)
#line 164 "eqvclass.m"
      mercury__eqvclass__succeeded = MR_TRUE;
#line 164 "eqvclass.m"
    else
#line 164 "eqvclass.m"
      {
#line 164 "eqvclass.m"
        MR_Word mercury__eqvclass__TypeCtorInfo_13_13;
#line 164 "eqvclass.m"
        MR_Word mercury__eqvclass__TypeCtorInfo_14_14;
#line 164 "eqvclass.m"
        MR_Word mercury__eqvclass__TypeInfo_15_15;
#line 164 "eqvclass.m"
        MR_Word mercury__eqvclass__TypeCtorInfo_18_18;
#line 164 "eqvclass.m"
        MR_Word mercury__eqvclass__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__HeadVar__1_1, (MR_Integer) 0)));
#line 164 "eqvclass.m"
        MR_Word mercury__eqvclass__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__HeadVar__1_1, (MR_Integer) 1)));
#line 164 "eqvclass.m"
        MR_Word mercury__eqvclass__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__HeadVar__1_1, (MR_Integer) 2)));
#line 164 "eqvclass.m"
        MR_Word mercury__eqvclass__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__HeadVar__2_2, (MR_Integer) 0)));
#line 164 "eqvclass.m"
        MR_Word mercury__eqvclass__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__HeadVar__2_2, (MR_Integer) 1)));
#line 164 "eqvclass.m"
        MR_Word mercury__eqvclass__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__HeadVar__2_2, (MR_Integer) 2)));
#line 164 "eqvclass.m"
        MR_Integer mercury__eqvclass__V_21_21 = (MR_Integer) mercury__eqvclass__V_3_3;
#line 164 "eqvclass.m"
        MR_Integer mercury__eqvclass__V_22_22 = (MR_Integer) mercury__eqvclass__V_6_6;

#line 1033 "eqvclass.c"
        mercury__eqvclass__succeeded = (mercury__eqvclass__V_21_21 == mercury__eqvclass__V_22_22);
#line 164 "eqvclass.m"
        if (mercury__eqvclass__succeeded)
#line 164 "eqvclass.m"
          {
#line 1039 "eqvclass.c"
            mercury__eqvclass__TypeCtorInfo_13_13 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1041 "eqvclass.c"
            mercury__eqvclass__TypeCtorInfo_14_14 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
#line 1043 "eqvclass.c"
            {
#line 1045 "eqvclass.c"
              mercury__eqvclass__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1047 "eqvclass.c"
              MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_15_15, 0) = ((MR_Box) (mercury__eqvclass__TypeCtorInfo_14_14));
#line 1049 "eqvclass.c"
              MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_15_15, 1) = ((MR_Box) (mercury__eqvclass__TypeInfo_for_T_11));
#line 1051 "eqvclass.c"
            }
#line 1053 "eqvclass.c"
            {
#line 1055 "eqvclass.c"
              mercury__eqvclass__succeeded = mercury__tree234____Unify____tree234_2_0(mercury__eqvclass__TypeCtorInfo_13_13, mercury__eqvclass__TypeInfo_15_15, mercury__eqvclass__V_4_4, mercury__eqvclass__V_7_7);
            }
#line 164 "eqvclass.m"
            if (mercury__eqvclass__succeeded)
#line 164 "eqvclass.m"
              {
#line 1062 "eqvclass.c"
                mercury__eqvclass__TypeCtorInfo_18_18 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1064 "eqvclass.c"
                {
#line 1066 "eqvclass.c"
                  return mercury__eqvclass__succeeded = mercury__tree234____Unify____tree234_2_0(mercury__eqvclass__TypeInfo_for_T_11, mercury__eqvclass__TypeCtorInfo_18_18, mercury__eqvclass__V_5_5, mercury__eqvclass__V_8_8);
                }
#line 164 "eqvclass.m"
              }
#line 164 "eqvclass.m"
          }
#line 164 "eqvclass.m"
      }
#line 164 "eqvclass.m"
    return mercury__eqvclass__succeeded;
#line 164 "eqvclass.m"
  }
#line 164 "eqvclass.m"
}

#line 525 "eqvclass.m"
void MR_CALL 
mercury__eqvclass__divide_equivalence_classes_3_11_p_0(
#line 525 "eqvclass.m"
  MR_Word mercury__eqvclass__TypeInfo_for_T_45,
#line 525 "eqvclass.m"
  MR_Word mercury__eqvclass__TypeInfo_for_U_46,
#line 525 "eqvclass.m"
  MR_Word mercury__eqvclass__F_12,
#line 525 "eqvclass.m"
  MR_Integer mercury__eqvclass__MainId_13,
#line 525 "eqvclass.m"
  MR_Box mercury__eqvclass__Item_14,
#line 525 "eqvclass.m"
  MR_Word mercury__eqvclass__STATE_VARIABLE_Map_0_26,
#line 525 "eqvclass.m"
  MR_Word * mercury__eqvclass__STATE_VARIABLE_Map_27,
#line 525 "eqvclass.m"
  MR_Word mercury__eqvclass__STATE_VARIABLE_Counter_0_28,
#line 525 "eqvclass.m"
  MR_Word * mercury__eqvclass__STATE_VARIABLE_Counter_29,
#line 525 "eqvclass.m"
  MR_Word mercury__eqvclass__STATE_VARIABLE_Partitions_0_30,
#line 525 "eqvclass.m"
  MR_Word * mercury__eqvclass__STATE_VARIABLE_Partitions_31,
#line 525 "eqvclass.m"
  MR_Word mercury__eqvclass__STATE_VARIABLE_Keys_0_32,
#line 525 "eqvclass.m"
  MR_Word * mercury__eqvclass__STATE_VARIABLE_Keys_33)
#line 525 "eqvclass.m"
{
#line 532 "eqvclass.m"
  {
#line 532 "eqvclass.m"
    MR_bool mercury__eqvclass__succeeded;
#line 532 "eqvclass.m"
    MR_Box mercury__eqvclass__Value_19;
#line 533 "eqvclass.m"
    MR_Box MR_CALL (* mercury__eqvclass__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__eqvclass__F_12, (MR_Integer) 1)));
#line 548 "eqvclass.m"
    MR_Integer mercury__eqvclass__Id_20;
#line 534 "eqvclass.m"
    MR_Word mercury__eqvclass__TypeCtorInfo_47_47;
#line 452 "map.opt"
    MR_Box mercury__eqvclass__conv1_Id_20;

#line 533 "eqvclass.m"
    {
#line 533 "eqvclass.m"
      mercury__eqvclass__Value_19 = mercury__eqvclass__func_0(((MR_Box) mercury__eqvclass__F_12), mercury__eqvclass__Item_14);
    }
#line 1133 "eqvclass.c"
    mercury__eqvclass__TypeCtorInfo_47_47 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 452 "map.opt"
    {
#line 452 "map.opt"
      mercury__eqvclass__succeeded = mercury__tree234__search_3_p_0(mercury__eqvclass__TypeInfo_for_U_46, mercury__eqvclass__TypeCtorInfo_47_47, mercury__eqvclass__STATE_VARIABLE_Map_0_26, mercury__eqvclass__Value_19, &mercury__eqvclass__conv1_Id_20);
    }
#line 452 "map.opt"
    if (mercury__eqvclass__succeeded)
#line 452 "map.opt"
      {
#line 452 "map.opt"
        mercury__eqvclass__Id_20 = ((MR_Integer) mercury__eqvclass__conv1_Id_20);
#line 452 "map.opt"
        mercury__eqvclass__succeeded = MR_TRUE;
#line 452 "map.opt"
      }
#line 548 "eqvclass.m"
    if (mercury__eqvclass__succeeded)
#line 537 "eqvclass.m"
      {
#line 535 "eqvclass.m"
        mercury__eqvclass__succeeded = (mercury__eqvclass__Id_20 == mercury__eqvclass__MainId_13);
#line 537 "eqvclass.m"
        if (mercury__eqvclass__succeeded)
#line 536 "eqvclass.m"
          {
#line 536 "eqvclass.m"
            *mercury__eqvclass__STATE_VARIABLE_Keys_33 = mercury__eqvclass__STATE_VARIABLE_Keys_0_32;
#line 536 "eqvclass.m"
            *mercury__eqvclass__STATE_VARIABLE_Partitions_31 = mercury__eqvclass__STATE_VARIABLE_Partitions_0_30;
#line 536 "eqvclass.m"
          }
#line 537 "eqvclass.m"
        else
#line 538 "eqvclass.m"
          {
#line 538 "eqvclass.m"
            MR_Word mercury__eqvclass__TypeCtorInfo_48_48 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 538 "eqvclass.m"
            MR_Word mercury__eqvclass__TypeCtorInfo_49_49 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
#line 538 "eqvclass.m"
            MR_Word mercury__eqvclass__TypeInfo_50_50;
#line 538 "eqvclass.m"
            MR_Word mercury__eqvclass__MainSet0_21;
#line 538 "eqvclass.m"
            MR_Word mercury__eqvclass__MainSet_22;
#line 538 "eqvclass.m"
            MR_Word mercury__eqvclass__Set0_23;
#line 538 "eqvclass.m"
            MR_Word mercury__eqvclass__Set_24;
#line 538 "eqvclass.m"
            MR_Word mercury__eqvclass__STATE_VARIABLE_Partitions_34_34;
#line 538 "eqvclass.m"
            MR_Word mercury__eqvclass__V_11_66;
#line 538 "eqvclass.m"
            MR_Word mercury__eqvclass__V_4_67;
#line 538 "eqvclass.m"
            MR_Word mercury__eqvclass__V_5_68;
#line 538 "eqvclass.m"
            MR_Word mercury__eqvclass__V_6_69;
#line 538 "eqvclass.m"
            MR_Word mercury__eqvclass__V_5_74;
#line 538 "eqvclass.m"
            MR_Word mercury__eqvclass__V_6_75;
#line 538 "eqvclass.m"
            MR_Box mercury__eqvclass__conv2_MainSet0_21;
#line 540 "eqvclass.m"
            MR_Word mercury__eqvclass__conv3_STATE_VARIABLE_Partitions_34_34;
#line 542 "eqvclass.m"
            MR_Box mercury__eqvclass__conv4_Set0_23;
#line 544 "eqvclass.m"
            MR_Word mercury__eqvclass__conv5_STATE_VARIABLE_Partitions_31;

#line 1207 "eqvclass.c"
            {
#line 1209 "eqvclass.c"
              mercury__eqvclass__TypeInfo_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1211 "eqvclass.c"
              MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_50_50, 0) = ((MR_Box) (mercury__eqvclass__TypeCtorInfo_49_49));
#line 1213 "eqvclass.c"
              MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_50_50, 1) = ((MR_Box) (mercury__eqvclass__TypeInfo_for_T_45));
#line 1215 "eqvclass.c"
            }
#line 538 "eqvclass.m"
            {
#line 538 "eqvclass.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__eqvclass__TypeInfo_50_50, (MR_Word) mercury__eqvclass__STATE_VARIABLE_Partitions_0_30, mercury__eqvclass__MainId_13, &mercury__eqvclass__conv2_MainSet0_21);
            }
#line 538 "eqvclass.m"
            mercury__eqvclass__MainSet0_21 = ((MR_Word) mercury__eqvclass__conv2_MainSet0_21);
#line 45 "set_ordlist.opt"
            mercury__eqvclass__V_11_66 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 44 "set_ordlist.opt"
            {
#line 44 "set_ordlist.opt"
              mercury__eqvclass__V_5_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 44 "set_ordlist.opt"
              MR_hl_field(MR_mktag(1), mercury__eqvclass__V_5_68, 0) = mercury__eqvclass__Item_14;
#line 44 "set_ordlist.opt"
              MR_hl_field(MR_mktag(1), mercury__eqvclass__V_5_68, 1) = ((MR_Box) (mercury__eqvclass__V_11_66));
#line 44 "set_ordlist.opt"
            }
#line 59 "set_ordlist.opt"
            mercury__eqvclass__V_4_67 = (MR_Word) mercury__eqvclass__MainSet0_21;
#line 60 "set_ordlist.opt"
            {
#line 60 "set_ordlist.opt"
              mercury__set_ordlist__difference_loop_3_p_0(mercury__eqvclass__TypeInfo_for_T_45, mercury__eqvclass__V_4_67, mercury__eqvclass__V_5_68, &mercury__eqvclass__V_6_69);
            }
#line 59 "set_ordlist.opt"
            mercury__eqvclass__MainSet_22 = (MR_Word) mercury__eqvclass__V_6_69;
#line 540 "eqvclass.m"
            {
#line 540 "eqvclass.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mercury__eqvclass__TypeInfo_50_50, mercury__eqvclass__MainId_13, ((MR_Box) (mercury__eqvclass__MainSet_22)), (MR_Word) mercury__eqvclass__STATE_VARIABLE_Partitions_0_30, &mercury__eqvclass__conv3_STATE_VARIABLE_Partitions_34_34);
            }
#line 540 "eqvclass.m"
            mercury__eqvclass__STATE_VARIABLE_Partitions_34_34 = (MR_Word) mercury__eqvclass__conv3_STATE_VARIABLE_Partitions_34_34;
#line 542 "eqvclass.m"
            {
#line 542 "eqvclass.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__eqvclass__TypeInfo_50_50, (MR_Word) mercury__eqvclass__STATE_VARIABLE_Partitions_34_34, mercury__eqvclass__Id_20, &mercury__eqvclass__conv4_Set0_23);
            }
#line 542 "eqvclass.m"
            mercury__eqvclass__Set0_23 = ((MR_Word) mercury__eqvclass__conv4_Set0_23);
#line 175 "set_ordlist.opt"
            mercury__eqvclass__V_5_74 = (MR_Word) mercury__eqvclass__Set0_23;
#line 176 "set_ordlist.opt"
            {
#line 176 "set_ordlist.opt"
              mercury__set_ordlist__insert_loop_3_p_0(mercury__eqvclass__TypeInfo_for_T_45, mercury__eqvclass__V_5_74, mercury__eqvclass__Item_14, &mercury__eqvclass__V_6_75);
            }
#line 175 "set_ordlist.opt"
            mercury__eqvclass__Set_24 = (MR_Word) mercury__eqvclass__V_6_75;
#line 544 "eqvclass.m"
            {
#line 544 "eqvclass.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mercury__eqvclass__TypeInfo_50_50, mercury__eqvclass__Id_20, ((MR_Box) (mercury__eqvclass__Set_24)), (MR_Word) mercury__eqvclass__STATE_VARIABLE_Partitions_34_34, &mercury__eqvclass__conv5_STATE_VARIABLE_Partitions_31);
            }
#line 544 "eqvclass.m"
            *mercury__eqvclass__STATE_VARIABLE_Partitions_31 = (MR_Word) mercury__eqvclass__conv5_STATE_VARIABLE_Partitions_31;
#line 546 "eqvclass.m"
            {
#line 546 "eqvclass.m"
              mercury__map__det_update_4_p_0(mercury__eqvclass__TypeInfo_for_T_45, mercury__eqvclass__TypeCtorInfo_48_48, mercury__eqvclass__Item_14, ((MR_Box) (mercury__eqvclass__Id_20)), mercury__eqvclass__STATE_VARIABLE_Keys_0_32, mercury__eqvclass__STATE_VARIABLE_Keys_33);
            }
#line 538 "eqvclass.m"
          }
#line 537 "eqvclass.m"
        *mercury__eqvclass__STATE_VARIABLE_Counter_29 = mercury__eqvclass__STATE_VARIABLE_Counter_0_28;
#line 537 "eqvclass.m"
        *mercury__eqvclass__STATE_VARIABLE_Map_27 = mercury__eqvclass__STATE_VARIABLE_Map_0_26;
#line 537 "eqvclass.m"
      }
#line 548 "eqvclass.m"
    else
#line 549 "eqvclass.m"
      {
#line 549 "eqvclass.m"
        MR_Word mercury__eqvclass__TypeCtorInfo_51_51;
#line 549 "eqvclass.m"
        MR_Word mercury__eqvclass__TypeCtorInfo_52_52;
#line 549 "eqvclass.m"
        MR_Word mercury__eqvclass__TypeInfo_53_53;
#line 549 "eqvclass.m"
        MR_Integer mercury__eqvclass__NewId_25 = (MR_Integer) mercury__eqvclass__STATE_VARIABLE_Counter_0_28;
#line 549 "eqvclass.m"
        MR_Word mercury__eqvclass__STATE_VARIABLE_Partitions_39_39;
#line 549 "eqvclass.m"
        MR_Word mercury__eqvclass__MainSet0_42;
#line 549 "eqvclass.m"
        MR_Word mercury__eqvclass__MainSet_43;
#line 549 "eqvclass.m"
        MR_Word mercury__eqvclass__Set_44;
#line 549 "eqvclass.m"
        MR_Integer mercury__eqvclass__V_5_77 = (mercury__eqvclass__NewId_25 + (MR_Integer) 1);
#line 549 "eqvclass.m"
        MR_Word mercury__eqvclass__V_11_88;
#line 549 "eqvclass.m"
        MR_Word mercury__eqvclass__V_4_89;
#line 549 "eqvclass.m"
        MR_Word mercury__eqvclass__V_5_90;
#line 549 "eqvclass.m"
        MR_Word mercury__eqvclass__V_6_91;
#line 552 "eqvclass.m"
        MR_Box mercury__eqvclass__conv6_MainSet0_42;
#line 554 "eqvclass.m"
        MR_Word mercury__eqvclass__conv7_STATE_VARIABLE_Partitions_39_39;
#line 557 "eqvclass.m"
        MR_Word mercury__eqvclass__conv8_STATE_VARIABLE_Partitions_31;

#line 9 "counter.opt"
        *mercury__eqvclass__STATE_VARIABLE_Counter_29 = (MR_Word) mercury__eqvclass__V_5_77;
#line 1327 "eqvclass.c"
        mercury__eqvclass__TypeCtorInfo_51_51 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 550 "eqvclass.m"
        {
#line 550 "eqvclass.m"
          mercury__map__det_insert_4_p_0(mercury__eqvclass__TypeInfo_for_U_46, mercury__eqvclass__TypeCtorInfo_51_51, mercury__eqvclass__Value_19, ((MR_Box) (mercury__eqvclass__NewId_25)), mercury__eqvclass__STATE_VARIABLE_Map_0_26, mercury__eqvclass__STATE_VARIABLE_Map_27);
        }
#line 1334 "eqvclass.c"
        mercury__eqvclass__TypeCtorInfo_52_52 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
#line 1336 "eqvclass.c"
        {
#line 1338 "eqvclass.c"
          mercury__eqvclass__TypeInfo_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1340 "eqvclass.c"
          MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_53_53, 0) = ((MR_Box) (mercury__eqvclass__TypeCtorInfo_52_52));
#line 1342 "eqvclass.c"
          MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_53_53, 1) = ((MR_Box) (mercury__eqvclass__TypeInfo_for_T_45));
#line 1344 "eqvclass.c"
        }
#line 552 "eqvclass.m"
        {
#line 552 "eqvclass.m"
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__eqvclass__TypeInfo_53_53, (MR_Word) mercury__eqvclass__STATE_VARIABLE_Partitions_0_30, mercury__eqvclass__MainId_13, &mercury__eqvclass__conv6_MainSet0_42);
        }
#line 552 "eqvclass.m"
        mercury__eqvclass__MainSet0_42 = ((MR_Word) mercury__eqvclass__conv6_MainSet0_42);
#line 45 "set_ordlist.opt"
        mercury__eqvclass__V_11_88 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 44 "set_ordlist.opt"
        {
#line 44 "set_ordlist.opt"
          mercury__eqvclass__V_5_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 44 "set_ordlist.opt"
          MR_hl_field(MR_mktag(1), mercury__eqvclass__V_5_90, 0) = mercury__eqvclass__Item_14;
#line 44 "set_ordlist.opt"
          MR_hl_field(MR_mktag(1), mercury__eqvclass__V_5_90, 1) = ((MR_Box) (mercury__eqvclass__V_11_88));
#line 44 "set_ordlist.opt"
        }
#line 59 "set_ordlist.opt"
        mercury__eqvclass__V_4_89 = (MR_Word) mercury__eqvclass__MainSet0_42;
#line 60 "set_ordlist.opt"
        {
#line 60 "set_ordlist.opt"
          mercury__set_ordlist__difference_loop_3_p_0(mercury__eqvclass__TypeInfo_for_T_45, mercury__eqvclass__V_4_89, mercury__eqvclass__V_5_90, &mercury__eqvclass__V_6_91);
        }
#line 59 "set_ordlist.opt"
        mercury__eqvclass__MainSet_43 = (MR_Word) mercury__eqvclass__V_6_91;
#line 554 "eqvclass.m"
        {
#line 554 "eqvclass.m"
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mercury__eqvclass__TypeInfo_53_53, mercury__eqvclass__MainId_13, ((MR_Box) (mercury__eqvclass__MainSet_43)), (MR_Word) mercury__eqvclass__STATE_VARIABLE_Partitions_0_30, &mercury__eqvclass__conv7_STATE_VARIABLE_Partitions_39_39);
        }
#line 554 "eqvclass.m"
        mercury__eqvclass__STATE_VARIABLE_Partitions_39_39 = (MR_Word) mercury__eqvclass__conv7_STATE_VARIABLE_Partitions_39_39;
#line 556 "eqvclass.m"
        {
#line 556 "eqvclass.m"
          mercury__eqvclass__Set_44 = mercury__set__make_singleton_set_1_f_0(mercury__eqvclass__TypeInfo_for_T_45, mercury__eqvclass__Item_14);
        }
#line 557 "eqvclass.m"
        {
#line 557 "eqvclass.m"
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mercury__eqvclass__TypeInfo_53_53, mercury__eqvclass__NewId_25, ((MR_Box) (mercury__eqvclass__Set_44)), (MR_Word) mercury__eqvclass__STATE_VARIABLE_Partitions_39_39, &mercury__eqvclass__conv8_STATE_VARIABLE_Partitions_31);
        }
#line 557 "eqvclass.m"
        *mercury__eqvclass__STATE_VARIABLE_Partitions_31 = (MR_Word) mercury__eqvclass__conv8_STATE_VARIABLE_Partitions_31;
#line 559 "eqvclass.m"
        {
#line 559 "eqvclass.m"
          mercury__map__det_update_4_p_0(mercury__eqvclass__TypeInfo_for_T_45, mercury__eqvclass__TypeCtorInfo_51_51, mercury__eqvclass__Item_14, ((MR_Box) (mercury__eqvclass__NewId_25)), mercury__eqvclass__STATE_VARIABLE_Keys_0_32, mercury__eqvclass__STATE_VARIABLE_Keys_33);
#line 559 "eqvclass.m"
          return;
        }
#line 549 "eqvclass.m"
      }
#line 532 "eqvclass.m"
  }
#line 525 "eqvclass.m"
}

#line 505 "eqvclass.m"
void MR_CALL 
mercury__eqvclass__divide_equivalence_classes_2_9_p_0(
#line 505 "eqvclass.m"
  MR_Word mercury__eqvclass__TypeInfo_for_T_34,
#line 505 "eqvclass.m"
  MR_Word mercury__eqvclass__TypeInfo_for_U_35,
#line 505 "eqvclass.m"
  MR_Word mercury__eqvclass__F_10,
#line 505 "eqvclass.m"
  MR_Integer mercury__eqvclass__Id_11,
#line 505 "eqvclass.m"
  MR_Word mercury__eqvclass__ItemSet_12,
#line 505 "eqvclass.m"
  MR_Word mercury__eqvclass__STATE_VARIABLE_Counter_0_23,
#line 505 "eqvclass.m"
  MR_Word * mercury__eqvclass__STATE_VARIABLE_Counter_24,
#line 505 "eqvclass.m"
  MR_Word mercury__eqvclass__STATE_VARIABLE_Partitions_0_25,
#line 505 "eqvclass.m"
  MR_Word * mercury__eqvclass__STATE_VARIABLE_Partitions_26,
#line 505 "eqvclass.m"
  MR_Word mercury__eqvclass__STATE_VARIABLE_Keys_0_27,
#line 505 "eqvclass.m"
  MR_Word * mercury__eqvclass__STATE_VARIABLE_Keys_28)
#line 505 "eqvclass.m"
{
#line 511 "eqvclass.m"
  {
#line 511 "eqvclass.m"
    MR_bool mercury__eqvclass__succeeded;
#line 511 "eqvclass.m"
    MR_Word mercury__eqvclass__ItemList_16 = (MR_Word) mercury__eqvclass__ItemSet_12;

#line 516 "eqvclass.m"
    if ((mercury__eqvclass__ItemList_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 514 "eqvclass.m"
      {
#line 515 "eqvclass.m"
        {
#line 515 "eqvclass.m"
          mercury__require__error_1_p_0((MR_String) "divide_equivalence_classes_2: empty partition");
#line 515 "eqvclass.m"
          return;
        }
#line 514 "eqvclass.m"
      }
#line 516 "eqvclass.m"
    else
#line 517 "eqvclass.m"
      {
#line 517 "eqvclass.m"
        MR_Word mercury__eqvclass__TypeCtorInfo_36_36;
#line 517 "eqvclass.m"
        MR_Box mercury__eqvclass__Item_17 = (MR_hl_field(MR_mktag(1), mercury__eqvclass__ItemList_16, (MR_Integer) 0));
#line 517 "eqvclass.m"
        MR_Word mercury__eqvclass__Items_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__eqvclass__ItemList_16, (MR_Integer) 1)));
#line 517 "eqvclass.m"
        MR_Box mercury__eqvclass__MainValue_19;
#line 517 "eqvclass.m"
        MR_Word mercury__eqvclass__Map0_20;
#line 517 "eqvclass.m"
        MR_Word mercury__eqvclass__Map1_21;
#line 518 "eqvclass.m"
        MR_Box MR_CALL (* mercury__eqvclass__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__eqvclass__F_10, (MR_Integer) 1)));
#line 521 "eqvclass.m"
        MR_Word mercury__eqvclass___Map_22;

#line 518 "eqvclass.m"
        {
#line 518 "eqvclass.m"
          mercury__eqvclass__MainValue_19 = mercury__eqvclass__func_0(((MR_Box) mercury__eqvclass__F_10), mercury__eqvclass__Item_17);
        }
#line 1480 "eqvclass.c"
        mercury__eqvclass__TypeCtorInfo_36_36 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 243 "tree234.opt"
        mercury__eqvclass__Map0_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 520 "eqvclass.m"
        {
#line 520 "eqvclass.m"
          mercury__map__det_insert_4_p_0(mercury__eqvclass__TypeInfo_for_U_35, mercury__eqvclass__TypeCtorInfo_36_36, mercury__eqvclass__MainValue_19, ((MR_Box) (mercury__eqvclass__Id_11)), mercury__eqvclass__Map0_20, &mercury__eqvclass__Map1_21);
        }
#line 521 "eqvclass.m"
        {
#line 521 "eqvclass.m"
          mercury__eqvclass__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_52_95_95_104_111_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_10_p_in__list_0(mercury__eqvclass__TypeInfo_for_T_34, mercury__eqvclass__TypeInfo_for_U_35, mercury__eqvclass__F_10, mercury__eqvclass__Id_11, mercury__eqvclass__Items_18, mercury__eqvclass__Map1_21, &mercury__eqvclass___Map_22, mercury__eqvclass__STATE_VARIABLE_Counter_0_23, mercury__eqvclass__STATE_VARIABLE_Counter_24, mercury__eqvclass__STATE_VARIABLE_Partitions_0_25, mercury__eqvclass__STATE_VARIABLE_Partitions_26, mercury__eqvclass__STATE_VARIABLE_Keys_0_27, mercury__eqvclass__STATE_VARIABLE_Keys_28);
        }
#line 517 "eqvclass.m"
      }
#line 511 "eqvclass.m"
  }
#line 505 "eqvclass.m"
}

#line 467 "eqvclass.m"
static void MR_CALL 
mercury__eqvclass__make_partition_4_p_0(
#line 467 "eqvclass.m"
  MR_Word mercury__eqvclass__TypeInfo_for_T_17,
#line 467 "eqvclass.m"
  MR_Word mercury__eqvclass__HeadVar__1_1,
#line 467 "eqvclass.m"
  MR_Integer mercury__eqvclass__HeadVar__2_2,
#line 467 "eqvclass.m"
  MR_Word mercury__eqvclass__STATE_VARIABLE_ElementMap_0_3,
#line 467 "eqvclass.m"
  MR_Word * mercury__eqvclass__STATE_VARIABLE_ElementMap_4)
#line 467 "eqvclass.m"
{
#line 470 "eqvclass.m"
  while (MR_TRUE)
#line 470 "eqvclass.m"
    {
#line 470 "eqvclass.m"
      /* tailcall optimized into a loop */
#line 470 "eqvclass.m"
      {
#line 470 "eqvclass.m"
        MR_bool mercury__eqvclass__succeeded;

#line 470 "eqvclass.m"
        if ((mercury__eqvclass__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 470 "eqvclass.m"
          *mercury__eqvclass__STATE_VARIABLE_ElementMap_4 = mercury__eqvclass__STATE_VARIABLE_ElementMap_0_3;
#line 470 "eqvclass.m"
        else
#line 471 "eqvclass.m"
          {
#line 471 "eqvclass.m"
            MR_Word mercury__eqvclass__TypeCtorInfo_18_18 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 471 "eqvclass.m"
            MR_Box mercury__eqvclass__Element_9 = (MR_hl_field(MR_mktag(1), mercury__eqvclass__HeadVar__1_1, (MR_Integer) 0));
#line 471 "eqvclass.m"
            MR_Word mercury__eqvclass__Elements_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__eqvclass__HeadVar__1_1, (MR_Integer) 1)));
#line 471 "eqvclass.m"
            MR_Word mercury__eqvclass__STATE_VARIABLE_ElementMap_15_15;

#line 472 "eqvclass.m"
            {
#line 472 "eqvclass.m"
              mercury__map__det_insert_4_p_0(mercury__eqvclass__TypeInfo_for_T_17, mercury__eqvclass__TypeCtorInfo_18_18, mercury__eqvclass__Element_9, ((MR_Box) (mercury__eqvclass__HeadVar__2_2)), mercury__eqvclass__STATE_VARIABLE_ElementMap_0_3, &mercury__eqvclass__STATE_VARIABLE_ElementMap_15_15);
            }
#line 473 "eqvclass.m"
            /* direct tailcall eliminated */
#line 473 "eqvclass.m"
            {
#line 473 "eqvclass.m"
              MR_Word mercury__eqvclass__HeadVar__1__tmp_copy_1 = mercury__eqvclass__Elements_10;
#line 473 "eqvclass.m"
              MR_Word mercury__eqvclass__STATE_VARIABLE_ElementMap_0__tmp_copy_3 = mercury__eqvclass__STATE_VARIABLE_ElementMap_15_15;

#line 473 "eqvclass.m"
              mercury__eqvclass__STATE_VARIABLE_ElementMap_0_3 = mercury__eqvclass__STATE_VARIABLE_ElementMap_0__tmp_copy_3;
#line 473 "eqvclass.m"
              mercury__eqvclass__HeadVar__1_1 = mercury__eqvclass__HeadVar__1__tmp_copy_1;
#line 473 "eqvclass.m"
            }
#line 473 "eqvclass.m"
            continue;
#line 471 "eqvclass.m"
          }
#line 470 "eqvclass.m"
      }
#line 470 "eqvclass.m"
      break;
#line 470 "eqvclass.m"
    }
#line 467 "eqvclass.m"
}

#line 418 "eqvclass.m"
void MR_CALL 
mercury__eqvclass__partition_ids_2_p_0(
#line 418 "eqvclass.m"
  MR_Word mercury__eqvclass__TypeInfo_for_T_8,
#line 418 "eqvclass.m"
  MR_Word mercury__eqvclass__EqvClass0_3,
#line 418 "eqvclass.m"
  MR_Word * mercury__eqvclass__Ids_4)
#line 418 "eqvclass.m"
{
#line 421 "eqvclass.m"
  {
#line 421 "eqvclass.m"
    MR_bool mercury__eqvclass__succeeded;
#line 421 "eqvclass.m"
    MR_Word mercury__eqvclass__TypeCtorInfo_9_9 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 421 "eqvclass.m"
    MR_Word mercury__eqvclass__TypeCtorInfo_10_10 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
#line 421 "eqvclass.m"
    MR_Word mercury__eqvclass__TypeInfo_11_11;
#line 421 "eqvclass.m"
    MR_Word mercury__eqvclass__PartitionMap0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_3, (MR_Integer) 1)));
#line 421 "eqvclass.m"
    MR_Word mercury__eqvclass__V_5_16;
#line 422 "eqvclass.m"
    MR_Word mercury__eqvclass__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_3, (MR_Integer) 0)));
#line 422 "eqvclass.m"
    MR_Word mercury__eqvclass__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_3, (MR_Integer) 2)));

#line 1607 "eqvclass.c"
    {
#line 1609 "eqvclass.c"
      mercury__eqvclass__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1611 "eqvclass.c"
      MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_11_11, 0) = ((MR_Box) (mercury__eqvclass__TypeCtorInfo_10_10));
#line 1613 "eqvclass.c"
      MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_11_11, 1) = ((MR_Box) (mercury__eqvclass__TypeInfo_for_T_8));
#line 1615 "eqvclass.c"
    }
#line 251 "tree234.opt"
    mercury__eqvclass__V_5_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 252 "tree234.opt"
    {
#line 252 "tree234.opt"
      mercury__tree234__keys_acc_3_p_0(mercury__eqvclass__TypeCtorInfo_9_9, mercury__eqvclass__TypeInfo_11_11, mercury__eqvclass__PartitionMap0_5, mercury__eqvclass__V_5_16, mercury__eqvclass__Ids_4);
#line 252 "tree234.opt"
      return;
    }
#line 421 "eqvclass.m"
  }
#line 418 "eqvclass.m"
}

#line 408 "eqvclass.m"
void MR_CALL 
mercury__eqvclass__partitions_3_p_0(
#line 408 "eqvclass.m"
  MR_Word mercury__eqvclass__TypeInfo_for_T_10,
#line 408 "eqvclass.m"
  MR_Word mercury__eqvclass__HeadVar__1_1,
#line 408 "eqvclass.m"
  MR_Word mercury__eqvclass__HeadVar__2_2,
#line 408 "eqvclass.m"
  MR_Word * mercury__eqvclass__HeadVar__3_3)
#line 408 "eqvclass.m"
{
#line 411 "eqvclass.m"
  {
#line 411 "eqvclass.m"
    MR_bool mercury__eqvclass__succeeded;

#line 411 "eqvclass.m"
    if ((mercury__eqvclass__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 411 "eqvclass.m"
      *mercury__eqvclass__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 411 "eqvclass.m"
    else
#line 412 "eqvclass.m"
      {
#line 412 "eqvclass.m"
        MR_Integer mercury__eqvclass__Id_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__eqvclass__HeadVar__2_2, (MR_Integer) 0)));
#line 412 "eqvclass.m"
        MR_Word mercury__eqvclass__Ids_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__eqvclass__HeadVar__2_2, (MR_Integer) 1)));
#line 412 "eqvclass.m"
        MR_Word mercury__eqvclass__Partition_8;
#line 412 "eqvclass.m"
        MR_Word mercury__eqvclass__Partitions_9;
#line 412 "eqvclass.m"
        MR_Word mercury__eqvclass__PartitionMap0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__HeadVar__1_1, (MR_Integer) 1)));
#line 431 "eqvclass.m"
        MR_Word mercury__eqvclass__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__HeadVar__1_1, (MR_Integer) 0)));
#line 431 "eqvclass.m"
        MR_Word mercury__eqvclass__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__HeadVar__1_1, (MR_Integer) 2)));
#line 434 "eqvclass.m"
        MR_Word mercury__eqvclass__PartitionPrime_15;
#line 432 "eqvclass.m"
        MR_Word mercury__eqvclass__TypeCtorInfo_14_20 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
#line 432 "eqvclass.m"
        MR_Word mercury__eqvclass__TypeInfo_15_21;
#line 452 "map.opt"
        MR_Box mercury__eqvclass__conv0_PartitionPrime_15;

#line 1680 "eqvclass.c"
        {
#line 1682 "eqvclass.c"
          mercury__eqvclass__TypeInfo_15_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1684 "eqvclass.c"
          MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_15_21, 0) = ((MR_Box) (mercury__eqvclass__TypeCtorInfo_14_20));
#line 1686 "eqvclass.c"
          MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_15_21, 1) = ((MR_Box) (mercury__eqvclass__TypeInfo_for_T_10));
#line 1688 "eqvclass.c"
        }
#line 452 "map.opt"
        {
#line 452 "map.opt"
          mercury__eqvclass__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__eqvclass__TypeInfo_15_21, (MR_Word) mercury__eqvclass__PartitionMap0_14, mercury__eqvclass__Id_6, &mercury__eqvclass__conv0_PartitionPrime_15);
        }
#line 452 "map.opt"
        if (mercury__eqvclass__succeeded)
#line 452 "map.opt"
          {
#line 452 "map.opt"
            mercury__eqvclass__PartitionPrime_15 = ((MR_Word) mercury__eqvclass__conv0_PartitionPrime_15);
#line 452 "map.opt"
            mercury__eqvclass__succeeded = MR_TRUE;
#line 452 "map.opt"
          }
#line 434 "eqvclass.m"
        if (mercury__eqvclass__succeeded)
#line 433 "eqvclass.m"
          mercury__eqvclass__Partition_8 = mercury__eqvclass__PartitionPrime_15;
#line 434 "eqvclass.m"
        else
#line 435 "eqvclass.m"
          {
#line 435 "eqvclass.m"
            {
#line 435 "eqvclass.m"
              mercury__require__error_1_p_0((MR_String) "partition id not known to equivalence class");
#line 435 "eqvclass.m"
              return;
            }
#line 435 "eqvclass.m"
          }
#line 414 "eqvclass.m"
        {
#line 414 "eqvclass.m"
          mercury__eqvclass__partitions_3_p_0(mercury__eqvclass__TypeInfo_for_T_10, mercury__eqvclass__HeadVar__1_1, mercury__eqvclass__Ids_7, &mercury__eqvclass__Partitions_9);
        }
#line 412 "eqvclass.m"
        {
#line 412 "eqvclass.m"
          MR_Word base;
#line 412 "eqvclass.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 412 "eqvclass.m"
          *mercury__eqvclass__HeadVar__3_3 = base;
#line 412 "eqvclass.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__eqvclass__Partition_8));
#line 412 "eqvclass.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__eqvclass__Partitions_9));
#line 412 "eqvclass.m"
        }
#line 412 "eqvclass.m"
      }
#line 411 "eqvclass.m"
  }
#line 408 "eqvclass.m"
}

#line 383 "eqvclass.m"
static MR_bool MR_CALL 
mercury__eqvclass__same_eqvclass_list_2_3_p_0(
#line 383 "eqvclass.m"
  MR_Word mercury__eqvclass__TypeInfo_for_T_10,
#line 383 "eqvclass.m"
  MR_Word mercury__eqvclass__ElementMap_1,
#line 383 "eqvclass.m"
  MR_Word mercury__eqvclass__HeadVar__2_2,
#line 383 "eqvclass.m"
  MR_Integer mercury__eqvclass__Id_3)
#line 383 "eqvclass.m"
{
#line 386 "eqvclass.m"
  while (MR_TRUE)
#line 386 "eqvclass.m"
    {
#line 386 "eqvclass.m"
      /* tailcall optimized into a loop */
#line 386 "eqvclass.m"
      {
#line 386 "eqvclass.m"
        MR_bool mercury__eqvclass__succeeded;

#line 386 "eqvclass.m"
        if ((mercury__eqvclass__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 386 "eqvclass.m"
          mercury__eqvclass__succeeded = MR_TRUE;
#line 386 "eqvclass.m"
        else
#line 387 "eqvclass.m"
          {
#line 387 "eqvclass.m"
            MR_Word mercury__eqvclass__TypeCtorInfo_11_11 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 387 "eqvclass.m"
            MR_Box mercury__eqvclass__Element_7 = (MR_hl_field(MR_mktag(1), mercury__eqvclass__HeadVar__2_2, (MR_Integer) 0));
#line 387 "eqvclass.m"
            MR_Word mercury__eqvclass__Elements_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__eqvclass__HeadVar__2_2, (MR_Integer) 1)));
#line 387 "eqvclass.m"
            MR_Integer mercury__eqvclass__V_12_12;
#line 452 "map.opt"
            MR_Box mercury__eqvclass__conv0_V_12_12;

#line 452 "map.opt"
            {
#line 452 "map.opt"
              mercury__eqvclass__succeeded = mercury__tree234__search_3_p_0(mercury__eqvclass__TypeInfo_for_T_10, mercury__eqvclass__TypeCtorInfo_11_11, mercury__eqvclass__ElementMap_1, mercury__eqvclass__Element_7, &mercury__eqvclass__conv0_V_12_12);
            }
#line 452 "map.opt"
            if (mercury__eqvclass__succeeded)
#line 452 "map.opt"
              {
#line 452 "map.opt"
                mercury__eqvclass__V_12_12 = ((MR_Integer) mercury__eqvclass__conv0_V_12_12);
#line 452 "map.opt"
                mercury__eqvclass__succeeded = MR_TRUE;
#line 452 "map.opt"
              }
#line 387 "eqvclass.m"
            if (mercury__eqvclass__succeeded)
#line 387 "eqvclass.m"
              {
#line 388 "eqvclass.m"
                mercury__eqvclass__succeeded = (mercury__eqvclass__Id_3 == mercury__eqvclass__V_12_12);
#line 387 "eqvclass.m"
                if (mercury__eqvclass__succeeded)
#line 389 "eqvclass.m"
                  {
#line 389 "eqvclass.m"
                    /* direct tailcall eliminated */
#line 389 "eqvclass.m"
                    {
#line 389 "eqvclass.m"
                      MR_Word mercury__eqvclass__HeadVar__2__tmp_copy_2 = mercury__eqvclass__Elements_8;

#line 389 "eqvclass.m"
                      mercury__eqvclass__HeadVar__2_2 = mercury__eqvclass__HeadVar__2__tmp_copy_2;
#line 389 "eqvclass.m"
                    }
#line 389 "eqvclass.m"
                    continue;
#line 389 "eqvclass.m"
                  }
#line 387 "eqvclass.m"
              }
#line 387 "eqvclass.m"
          }
#line 386 "eqvclass.m"
        return mercury__eqvclass__succeeded;
#line 386 "eqvclass.m"
      }
#line 386 "eqvclass.m"
      break;
#line 386 "eqvclass.m"
    }
#line 383 "eqvclass.m"
}

#line 363 "eqvclass.m"
static void MR_CALL 
mercury__eqvclass__change_partition_4_p_0(
#line 363 "eqvclass.m"
  MR_Word mercury__eqvclass__TypeInfo_for_T_17,
#line 363 "eqvclass.m"
  MR_Word mercury__eqvclass__HeadVar__1_1,
#line 363 "eqvclass.m"
  MR_Integer mercury__eqvclass__HeadVar__2_2,
#line 363 "eqvclass.m"
  MR_Word mercury__eqvclass__STATE_VARIABLE_ElementMap_0_3,
#line 363 "eqvclass.m"
  MR_Word * mercury__eqvclass__STATE_VARIABLE_ElementMap_4)
#line 363 "eqvclass.m"
{
#line 366 "eqvclass.m"
  while (MR_TRUE)
#line 366 "eqvclass.m"
    {
#line 366 "eqvclass.m"
      /* tailcall optimized into a loop */
#line 366 "eqvclass.m"
      {
#line 366 "eqvclass.m"
        MR_bool mercury__eqvclass__succeeded;

#line 366 "eqvclass.m"
        if ((mercury__eqvclass__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 366 "eqvclass.m"
          *mercury__eqvclass__STATE_VARIABLE_ElementMap_4 = mercury__eqvclass__STATE_VARIABLE_ElementMap_0_3;
#line 366 "eqvclass.m"
        else
#line 367 "eqvclass.m"
          {
#line 367 "eqvclass.m"
            MR_Word mercury__eqvclass__TypeCtorInfo_18_18 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 367 "eqvclass.m"
            MR_Box mercury__eqvclass__Element_9 = (MR_hl_field(MR_mktag(1), mercury__eqvclass__HeadVar__1_1, (MR_Integer) 0));
#line 367 "eqvclass.m"
            MR_Word mercury__eqvclass__Elements_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__eqvclass__HeadVar__1_1, (MR_Integer) 1)));
#line 367 "eqvclass.m"
            MR_Word mercury__eqvclass__STATE_VARIABLE_ElementMap_15_15;

#line 476 "map.opt"
            {
#line 476 "map.opt"
              mercury__tree234__set_4_p_0(mercury__eqvclass__TypeInfo_for_T_17, mercury__eqvclass__TypeCtorInfo_18_18, mercury__eqvclass__Element_9, ((MR_Box) (mercury__eqvclass__HeadVar__2_2)), mercury__eqvclass__STATE_VARIABLE_ElementMap_0_3, &mercury__eqvclass__STATE_VARIABLE_ElementMap_15_15);
            }
#line 369 "eqvclass.m"
            /* direct tailcall eliminated */
#line 369 "eqvclass.m"
            {
#line 369 "eqvclass.m"
              MR_Word mercury__eqvclass__HeadVar__1__tmp_copy_1 = mercury__eqvclass__Elements_10;
#line 369 "eqvclass.m"
              MR_Word mercury__eqvclass__STATE_VARIABLE_ElementMap_0__tmp_copy_3 = mercury__eqvclass__STATE_VARIABLE_ElementMap_15_15;

#line 369 "eqvclass.m"
              mercury__eqvclass__STATE_VARIABLE_ElementMap_0_3 = mercury__eqvclass__STATE_VARIABLE_ElementMap_0__tmp_copy_3;
#line 369 "eqvclass.m"
              mercury__eqvclass__HeadVar__1_1 = mercury__eqvclass__HeadVar__1__tmp_copy_1;
#line 369 "eqvclass.m"
            }
#line 369 "eqvclass.m"
            continue;
#line 367 "eqvclass.m"
          }
#line 366 "eqvclass.m"
      }
#line 366 "eqvclass.m"
      break;
#line 366 "eqvclass.m"
    }
#line 363 "eqvclass.m"
}

#line 340 "eqvclass.m"
static void MR_CALL 
mercury__eqvclass__add_equivalence_4_p_0(
#line 340 "eqvclass.m"
  MR_Word mercury__eqvclass__TypeInfo_for_T_24,
#line 340 "eqvclass.m"
  MR_Integer mercury__eqvclass__IdA_5,
#line 340 "eqvclass.m"
  MR_Integer mercury__eqvclass__IdB_6,
#line 340 "eqvclass.m"
  MR_Word mercury__eqvclass__EqvClass0_7,
#line 340 "eqvclass.m"
  MR_Word * mercury__eqvclass__EqvClass_8)
#line 340 "eqvclass.m"
{
#line 343 "eqvclass.m"
  {
#line 343 "eqvclass.m"
    MR_bool mercury__eqvclass__succeeded;
#line 343 "eqvclass.m"
    MR_Word mercury__eqvclass__TypeCtorInfo_25_25 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 343 "eqvclass.m"
    MR_Word mercury__eqvclass__TypeCtorInfo_26_26 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
#line 343 "eqvclass.m"
    MR_Word mercury__eqvclass__TypeInfo_27_27;
#line 343 "eqvclass.m"
    MR_Word mercury__eqvclass__NextId0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 0)));
#line 343 "eqvclass.m"
    MR_Word mercury__eqvclass__PartitionMap0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 1)));
#line 343 "eqvclass.m"
    MR_Word mercury__eqvclass__ElementMap0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 2)));
#line 343 "eqvclass.m"
    MR_Word mercury__eqvclass__PartitionA_12;
#line 343 "eqvclass.m"
    MR_Word mercury__eqvclass__PartitionB_13;
#line 343 "eqvclass.m"
    MR_Word mercury__eqvclass__PartitionMap_16;
#line 343 "eqvclass.m"
    MR_Word mercury__eqvclass__ElementMap_18;
#line 345 "eqvclass.m"
    MR_Box mercury__eqvclass__conv0_PartitionA_12;
#line 346 "eqvclass.m"
    MR_Box mercury__eqvclass__conv1_PartitionB_13;
#line 348 "eqvclass.m"
    MR_Integer mercury__eqvclass__V_20_20;
#line 348 "eqvclass.m"
    MR_Integer mercury__eqvclass__V_21_21;
#line 348 "eqvclass.m"
    MR_Word mercury__eqvclass__V_3_33;
#line 348 "eqvclass.m"
    MR_Word mercury__eqvclass__V_3_42;

#line 1974 "eqvclass.c"
    {
#line 1976 "eqvclass.c"
      mercury__eqvclass__TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1978 "eqvclass.c"
      MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_27_27, 0) = ((MR_Box) (mercury__eqvclass__TypeCtorInfo_26_26));
#line 1980 "eqvclass.c"
      MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_27_27, 1) = ((MR_Box) (mercury__eqvclass__TypeInfo_for_T_24));
#line 1982 "eqvclass.c"
    }
#line 345 "eqvclass.m"
    {
#line 345 "eqvclass.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__eqvclass__TypeInfo_27_27, (MR_Word) mercury__eqvclass__PartitionMap0_10, mercury__eqvclass__IdA_5, &mercury__eqvclass__conv0_PartitionA_12);
    }
#line 345 "eqvclass.m"
    mercury__eqvclass__PartitionA_12 = ((MR_Word) mercury__eqvclass__conv0_PartitionA_12);
#line 346 "eqvclass.m"
    {
#line 346 "eqvclass.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__eqvclass__TypeInfo_27_27, (MR_Word) mercury__eqvclass__PartitionMap0_10, mercury__eqvclass__IdB_6, &mercury__eqvclass__conv1_PartitionB_13);
    }
#line 346 "eqvclass.m"
    mercury__eqvclass__PartitionB_13 = ((MR_Word) mercury__eqvclass__conv1_PartitionB_13);
#line 36 "set_ordlist.opt"
    mercury__eqvclass__V_3_33 = (MR_Word) mercury__eqvclass__PartitionA_12;
#line 600 "list.opt"
    {
#line 600 "list.opt"
      mercury__list__length_acc_3_p_0(mercury__eqvclass__TypeInfo_for_T_24, mercury__eqvclass__V_3_33, (MR_Integer) 0, &mercury__eqvclass__V_20_20);
    }
#line 36 "set_ordlist.opt"
    mercury__eqvclass__V_3_42 = (MR_Word) mercury__eqvclass__PartitionB_13;
#line 600 "list.opt"
    {
#line 600 "list.opt"
      mercury__list__length_acc_3_p_0(mercury__eqvclass__TypeInfo_for_T_24, mercury__eqvclass__V_3_42, (MR_Integer) 0, &mercury__eqvclass__V_21_21);
    }
#line 348 "eqvclass.m"
    mercury__eqvclass__succeeded = (mercury__eqvclass__V_20_20 < mercury__eqvclass__V_21_21);
#line 354 "eqvclass.m"
    if (mercury__eqvclass__succeeded)
#line 349 "eqvclass.m"
      {
#line 349 "eqvclass.m"
        MR_Word mercury__eqvclass__TypeInfo_for_K_63;
#line 349 "eqvclass.m"
        MR_Word mercury__eqvclass__PartitionMap1_14;
#line 349 "eqvclass.m"
        MR_Word mercury__eqvclass__Partition_15;
#line 349 "eqvclass.m"
        MR_Word mercury__eqvclass__ElementsA_17;
#line 349 "eqvclass.m"
        MR_Word mercury__eqvclass__V_4_56;
#line 349 "eqvclass.m"
        MR_Word mercury__eqvclass__V_5_57;
#line 349 "eqvclass.m"
        MR_Word mercury__eqvclass__V_6_58;
#line 79 "tree234.opt"
        MR_Word mercury__eqvclass__V_7_52;

#line 79 "tree234.opt"
        {
#line 79 "tree234.opt"
          mercury__tree234__delete_2_4_p_0(mercury__eqvclass__TypeCtorInfo_25_25, mercury__eqvclass__TypeInfo_27_27, mercury__eqvclass__PartitionMap0_10, ((MR_Box) (mercury__eqvclass__IdA_5)), &mercury__eqvclass__PartitionMap1_14, &mercury__eqvclass__V_7_52);
        }
#line 276 "set_ordlist.opt"
        mercury__eqvclass__V_4_56 = (MR_Word) mercury__eqvclass__PartitionB_13;
#line 276 "set_ordlist.opt"
        mercury__eqvclass__V_5_57 = (MR_Word) mercury__eqvclass__PartitionA_12;
#line 277 "set_ordlist.opt"
        {
#line 277 "set_ordlist.opt"
          mercury__list__merge_and_remove_dups_3_p_0(mercury__eqvclass__TypeInfo_for_T_24, mercury__eqvclass__V_4_56, mercury__eqvclass__V_5_57, &mercury__eqvclass__V_6_58);
        }
#line 276 "set_ordlist.opt"
        mercury__eqvclass__Partition_15 = (MR_Word) mercury__eqvclass__V_6_58;
#line 2051 "eqvclass.c"
        mercury__eqvclass__TypeInfo_for_K_63 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 476 "map.opt"
        {
#line 476 "map.opt"
          mercury__tree234__set_4_p_0(mercury__eqvclass__TypeInfo_for_K_63, mercury__eqvclass__TypeInfo_27_27, ((MR_Box) (mercury__eqvclass__IdB_6)), ((MR_Box) (mercury__eqvclass__Partition_15)), mercury__eqvclass__PartitionMap1_14, &mercury__eqvclass__PartitionMap_16);
        }
#line 271 "set_ordlist.opt"
        mercury__eqvclass__ElementsA_17 = (MR_Word) mercury__eqvclass__PartitionA_12;
#line 353 "eqvclass.m"
        {
#line 353 "eqvclass.m"
          mercury__eqvclass__change_partition_4_p_0(mercury__eqvclass__TypeInfo_for_T_24, mercury__eqvclass__ElementsA_17, mercury__eqvclass__IdB_6, mercury__eqvclass__ElementMap0_11, &mercury__eqvclass__ElementMap_18);
        }
#line 349 "eqvclass.m"
      }
#line 354 "eqvclass.m"
    else
#line 355 "eqvclass.m"
      {
#line 355 "eqvclass.m"
        MR_Word mercury__eqvclass__TypeInfo_for_K_84;
#line 355 "eqvclass.m"
        MR_Word mercury__eqvclass__ElementsB_19;
#line 355 "eqvclass.m"
        MR_Word mercury__eqvclass__PartitionMap1_22;
#line 355 "eqvclass.m"
        MR_Word mercury__eqvclass__Partition_23;
#line 355 "eqvclass.m"
        MR_Word mercury__eqvclass__V_4_77;
#line 355 "eqvclass.m"
        MR_Word mercury__eqvclass__V_5_78;
#line 355 "eqvclass.m"
        MR_Word mercury__eqvclass__V_6_79;
#line 79 "tree234.opt"
        MR_Word mercury__eqvclass__V_7_73;

#line 79 "tree234.opt"
        {
#line 79 "tree234.opt"
          mercury__tree234__delete_2_4_p_0(mercury__eqvclass__TypeCtorInfo_25_25, mercury__eqvclass__TypeInfo_27_27, mercury__eqvclass__PartitionMap0_10, ((MR_Box) (mercury__eqvclass__IdB_6)), &mercury__eqvclass__PartitionMap1_22, &mercury__eqvclass__V_7_73);
        }
#line 276 "set_ordlist.opt"
        mercury__eqvclass__V_4_77 = (MR_Word) mercury__eqvclass__PartitionA_12;
#line 276 "set_ordlist.opt"
        mercury__eqvclass__V_5_78 = (MR_Word) mercury__eqvclass__PartitionB_13;
#line 277 "set_ordlist.opt"
        {
#line 277 "set_ordlist.opt"
          mercury__list__merge_and_remove_dups_3_p_0(mercury__eqvclass__TypeInfo_for_T_24, mercury__eqvclass__V_4_77, mercury__eqvclass__V_5_78, &mercury__eqvclass__V_6_79);
        }
#line 276 "set_ordlist.opt"
        mercury__eqvclass__Partition_23 = (MR_Word) mercury__eqvclass__V_6_79;
#line 2104 "eqvclass.c"
        mercury__eqvclass__TypeInfo_for_K_84 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 476 "map.opt"
        {
#line 476 "map.opt"
          mercury__tree234__set_4_p_0(mercury__eqvclass__TypeInfo_for_K_84, mercury__eqvclass__TypeInfo_27_27, ((MR_Box) (mercury__eqvclass__IdA_5)), ((MR_Box) (mercury__eqvclass__Partition_23)), mercury__eqvclass__PartitionMap1_22, &mercury__eqvclass__PartitionMap_16);
        }
#line 271 "set_ordlist.opt"
        mercury__eqvclass__ElementsB_19 = (MR_Word) mercury__eqvclass__PartitionB_13;
#line 359 "eqvclass.m"
        {
#line 359 "eqvclass.m"
          mercury__eqvclass__change_partition_4_p_0(mercury__eqvclass__TypeInfo_for_T_24, mercury__eqvclass__ElementsB_19, mercury__eqvclass__IdA_5, mercury__eqvclass__ElementMap0_11, &mercury__eqvclass__ElementMap_18);
        }
#line 355 "eqvclass.m"
      }
#line 361 "eqvclass.m"
    {
#line 361 "eqvclass.m"
      MR_Word base;
#line 361 "eqvclass.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 361 "eqvclass.m"
      *mercury__eqvclass__EqvClass_8 = base;
#line 361 "eqvclass.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__eqvclass__NextId0_9));
#line 361 "eqvclass.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__eqvclass__PartitionMap_16));
#line 361 "eqvclass.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__eqvclass__ElementMap_18));
#line 361 "eqvclass.m"
    }
#line 343 "eqvclass.m"
  }
#line 340 "eqvclass.m"
}

#line 214 "eqvclass.m"
void MR_CALL 
mercury__eqvclass__add_element_4_p_0(
#line 214 "eqvclass.m"
  MR_Word mercury__eqvclass__TypeInfo_for_T_18,
#line 214 "eqvclass.m"
  MR_Box mercury__eqvclass__Element_5,
#line 214 "eqvclass.m"
  MR_Integer * mercury__eqvclass__Id_6,
#line 214 "eqvclass.m"
  MR_Word mercury__eqvclass__STATE_VARIABLE_EqvClass_0_15,
#line 214 "eqvclass.m"
  MR_Word * mercury__eqvclass__STATE_VARIABLE_EqvClass_16)
#line 214 "eqvclass.m"
{
#line 217 "eqvclass.m"
  {
#line 217 "eqvclass.m"
    MR_bool mercury__eqvclass__succeeded;
#line 217 "eqvclass.m"
    MR_Word mercury__eqvclass__TypeCtorInfo_19_19;
#line 217 "eqvclass.m"
    MR_Word mercury__eqvclass__TypeCtorInfo_20_20;
#line 217 "eqvclass.m"
    MR_Word mercury__eqvclass__TypeInfo_21_21;
#line 217 "eqvclass.m"
    MR_Word mercury__eqvclass__Counter0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__STATE_VARIABLE_EqvClass_0_15, (MR_Integer) 0)));
#line 217 "eqvclass.m"
    MR_Word mercury__eqvclass__PartitionMap0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__STATE_VARIABLE_EqvClass_0_15, (MR_Integer) 1)));
#line 217 "eqvclass.m"
    MR_Word mercury__eqvclass__ElementMap0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__STATE_VARIABLE_EqvClass_0_15, (MR_Integer) 2)));
#line 217 "eqvclass.m"
    MR_Word mercury__eqvclass__Counter_11;
#line 217 "eqvclass.m"
    MR_Word mercury__eqvclass__ElementMap_12;
#line 217 "eqvclass.m"
    MR_Word mercury__eqvclass__Partition_13;
#line 217 "eqvclass.m"
    MR_Word mercury__eqvclass__PartitionMap_14;
#line 217 "eqvclass.m"
    MR_Integer mercury__eqvclass__V_5_23;
#line 217 "eqvclass.m"
    MR_Word mercury__eqvclass__V_4_30;
#line 217 "eqvclass.m"
    MR_Word mercury__eqvclass__V_5_31;
#line 222 "eqvclass.m"
    MR_Word mercury__eqvclass__conv0_PartitionMap_14;

#line 9 "counter.opt"
    *mercury__eqvclass__Id_6 = (MR_Integer) mercury__eqvclass__Counter0_8;
#line 10 "counter.opt"
    mercury__eqvclass__V_5_23 = (*mercury__eqvclass__Id_6 + (MR_Integer) 1);
#line 9 "counter.opt"
    mercury__eqvclass__Counter_11 = (MR_Word) mercury__eqvclass__V_5_23;
#line 2195 "eqvclass.c"
    mercury__eqvclass__TypeCtorInfo_19_19 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 220 "eqvclass.m"
    {
#line 220 "eqvclass.m"
      mercury__map__det_insert_4_p_0(mercury__eqvclass__TypeInfo_for_T_18, mercury__eqvclass__TypeCtorInfo_19_19, mercury__eqvclass__Element_5, ((MR_Box) (*mercury__eqvclass__Id_6)), mercury__eqvclass__ElementMap0_10, &mercury__eqvclass__ElementMap_12);
    }
#line 256 "set_ordlist.opt"
    mercury__eqvclass__V_5_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 255 "set_ordlist.opt"
    {
#line 255 "set_ordlist.opt"
      mercury__eqvclass__V_4_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 255 "set_ordlist.opt"
      MR_hl_field(MR_mktag(1), mercury__eqvclass__V_4_30, 0) = mercury__eqvclass__Element_5;
#line 255 "set_ordlist.opt"
      MR_hl_field(MR_mktag(1), mercury__eqvclass__V_4_30, 1) = ((MR_Box) (mercury__eqvclass__V_5_31));
#line 255 "set_ordlist.opt"
    }
#line 254 "set_ordlist.opt"
    mercury__eqvclass__Partition_13 = (MR_Word) mercury__eqvclass__V_4_30;
#line 2216 "eqvclass.c"
    mercury__eqvclass__TypeCtorInfo_20_20 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
#line 2218 "eqvclass.c"
    {
#line 2220 "eqvclass.c"
      mercury__eqvclass__TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2222 "eqvclass.c"
      MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_21_21, 0) = ((MR_Box) (mercury__eqvclass__TypeCtorInfo_20_20));
#line 2224 "eqvclass.c"
      MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_21_21, 1) = ((MR_Box) (mercury__eqvclass__TypeInfo_for_T_18));
#line 2226 "eqvclass.c"
    }
#line 222 "eqvclass.m"
    {
#line 222 "eqvclass.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mercury__eqvclass__TypeInfo_21_21, *mercury__eqvclass__Id_6, ((MR_Box) (mercury__eqvclass__Partition_13)), (MR_Word) mercury__eqvclass__PartitionMap0_9, &mercury__eqvclass__conv0_PartitionMap_14);
    }
#line 222 "eqvclass.m"
    mercury__eqvclass__PartitionMap_14 = (MR_Word) mercury__eqvclass__conv0_PartitionMap_14;
#line 223 "eqvclass.m"
    {
#line 223 "eqvclass.m"
      MR_Word base;
#line 223 "eqvclass.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 223 "eqvclass.m"
      *mercury__eqvclass__STATE_VARIABLE_EqvClass_16 = base;
#line 223 "eqvclass.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__eqvclass__Counter_11));
#line 223 "eqvclass.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__eqvclass__PartitionMap_14));
#line 223 "eqvclass.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__eqvclass__ElementMap_12));
#line 223 "eqvclass.m"
    }
#line 217 "eqvclass.m"
  }
#line 214 "eqvclass.m"
}

#line 501 "eqvclass.m"
static void MR_CALL 
mercury__eqvclass__divide_equivalence_classes_2_f_0_1(
#line 501 "eqvclass.m"
  MR_Box mercury__eqvclass__closure_arg,
#line 501 "eqvclass.m"
  MR_Box mercury__eqvclass__wrapper_arg_1,
#line 501 "eqvclass.m"
  MR_Box mercury__eqvclass__wrapper_arg_2,
#line 501 "eqvclass.m"
  MR_Box mercury__eqvclass__wrapper_arg_3,
#line 501 "eqvclass.m"
  MR_Box * mercury__eqvclass__wrapper_arg_4,
#line 501 "eqvclass.m"
  MR_Box mercury__eqvclass__wrapper_arg_5,
#line 501 "eqvclass.m"
  MR_Box * mercury__eqvclass__wrapper_arg_6,
#line 501 "eqvclass.m"
  MR_Box mercury__eqvclass__wrapper_arg_7,
#line 501 "eqvclass.m"
  MR_Box * mercury__eqvclass__wrapper_arg_8)
#line 501 "eqvclass.m"
{
#line 501 "eqvclass.m"
  {
#line 501 "eqvclass.m"
    MR_Box mercury__eqvclass__closure = mercury__eqvclass__closure_arg;
#line 501 "eqvclass.m"
    MR_Word mercury__eqvclass__conv2_STATE_VARIABLE_Counter_24;
#line 501 "eqvclass.m"
    MR_Word mercury__eqvclass__conv1_STATE_VARIABLE_Partitions_26;
#line 501 "eqvclass.m"
    MR_Word mercury__eqvclass__conv0_STATE_VARIABLE_Keys_28;

#line 501 "eqvclass.m"
    {
#line 501 "eqvclass.m"
      mercury__eqvclass__divide_equivalence_classes_2_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__closure, (MR_Integer) 5))), ((MR_Integer) mercury__eqvclass__wrapper_arg_1), ((MR_Word) mercury__eqvclass__wrapper_arg_2), ((MR_Word) mercury__eqvclass__wrapper_arg_3), &mercury__eqvclass__conv2_STATE_VARIABLE_Counter_24, ((MR_Word) mercury__eqvclass__wrapper_arg_5), &mercury__eqvclass__conv1_STATE_VARIABLE_Partitions_26, ((MR_Word) mercury__eqvclass__wrapper_arg_7), &mercury__eqvclass__conv0_STATE_VARIABLE_Keys_28);
    }
#line 501 "eqvclass.m"
    *mercury__eqvclass__wrapper_arg_4 = ((MR_Box) (mercury__eqvclass__conv2_STATE_VARIABLE_Counter_24));
#line 501 "eqvclass.m"
    *mercury__eqvclass__wrapper_arg_6 = ((MR_Box) (mercury__eqvclass__conv1_STATE_VARIABLE_Partitions_26));
#line 501 "eqvclass.m"
    *mercury__eqvclass__wrapper_arg_8 = ((MR_Box) (mercury__eqvclass__conv0_STATE_VARIABLE_Keys_28));
#line 501 "eqvclass.m"
  }
#line 501 "eqvclass.m"
}

#line 150 "eqvclass.m"
MR_Word MR_CALL 
mercury__eqvclass__divide_equivalence_classes_2_f_0(
#line 150 "eqvclass.m"
  MR_Word mercury__eqvclass__TypeInfo_for_T_15,
#line 150 "eqvclass.m"
  MR_Word mercury__eqvclass__TypeInfo_for_U_16,
#line 150 "eqvclass.m"
  MR_Word mercury__eqvclass__F_4,
#line 150 "eqvclass.m"
  MR_Word mercury__eqvclass__E0_5)
#line 150 "eqvclass.m"
{
#line 499 "eqvclass.m"
  {
#line 499 "eqvclass.m"
    MR_bool mercury__eqvclass__succeeded;
#line 499 "eqvclass.m"
    MR_Word mercury__eqvclass__E_6;
#line 499 "eqvclass.m"
    MR_Word mercury__eqvclass__TypeCtorInfo_25_25;
#line 499 "eqvclass.m"
    MR_Word mercury__eqvclass__TypeCtorInfo_26_26;
#line 499 "eqvclass.m"
    MR_Word mercury__eqvclass__TypeInfo_27_27;
#line 499 "eqvclass.m"
    MR_Word mercury__eqvclass__TypeCtorInfo_29_29;
#line 499 "eqvclass.m"
    MR_Word mercury__eqvclass__TypeInfo_30_30;
#line 499 "eqvclass.m"
    MR_Word mercury__eqvclass__TypeInfo_31_31;
#line 499 "eqvclass.m"
    MR_Word mercury__eqvclass__TypeInfo_for_K_40;
#line 499 "eqvclass.m"
    MR_Word mercury__eqvclass__TypeInfo_for_A_41;
#line 499 "eqvclass.m"
    MR_Word mercury__eqvclass__Counter0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__E0_5, (MR_Integer) 0)));
#line 499 "eqvclass.m"
    MR_Word mercury__eqvclass__Partitions0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__E0_5, (MR_Integer) 1)));
#line 499 "eqvclass.m"
    MR_Word mercury__eqvclass__Keys0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__E0_5, (MR_Integer) 2)));
#line 499 "eqvclass.m"
    MR_Word mercury__eqvclass__Counter_10;
#line 499 "eqvclass.m"
    MR_Word mercury__eqvclass__Partitions_11;
#line 499 "eqvclass.m"
    MR_Word mercury__eqvclass__Keys_12;
#line 499 "eqvclass.m"
    MR_Word mercury__eqvclass__V_13_13;
#line 196 "map.opt"
    MR_Box mercury__eqvclass__conv5_Counter_10;
#line 196 "map.opt"
    MR_Box mercury__eqvclass__conv4_Partitions_11;
#line 196 "map.opt"
    MR_Box mercury__eqvclass__conv3_Keys_12;

#line 501 "eqvclass.m"
    {
#line 501 "eqvclass.m"
      mercury__eqvclass__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 501 "eqvclass.m"
      MR_hl_field(MR_mktag(0), mercury__eqvclass__V_13_13, 0) = ((MR_Box) (&mercury__eqvclass_scalar_common_5[0]));
#line 501 "eqvclass.m"
      MR_hl_field(MR_mktag(0), mercury__eqvclass__V_13_13, 1) = ((MR_Box) (mercury__eqvclass__divide_equivalence_classes_2_f_0_1));
#line 501 "eqvclass.m"
      MR_hl_field(MR_mktag(0), mercury__eqvclass__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 501 "eqvclass.m"
      MR_hl_field(MR_mktag(0), mercury__eqvclass__V_13_13, 3) = ((MR_Box) (mercury__eqvclass__TypeInfo_for_T_15));
#line 501 "eqvclass.m"
      MR_hl_field(MR_mktag(0), mercury__eqvclass__V_13_13, 4) = ((MR_Box) (mercury__eqvclass__TypeInfo_for_U_16));
#line 501 "eqvclass.m"
      MR_hl_field(MR_mktag(0), mercury__eqvclass__V_13_13, 5) = ((MR_Box) (mercury__eqvclass__F_4));
#line 501 "eqvclass.m"
    }
#line 2380 "eqvclass.c"
    mercury__eqvclass__TypeCtorInfo_25_25 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 2382 "eqvclass.c"
    mercury__eqvclass__TypeCtorInfo_26_26 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
#line 2384 "eqvclass.c"
    {
#line 2386 "eqvclass.c"
      mercury__eqvclass__TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2388 "eqvclass.c"
      MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_27_27, 0) = ((MR_Box) (mercury__eqvclass__TypeCtorInfo_26_26));
#line 2390 "eqvclass.c"
      MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_27_27, 1) = ((MR_Box) (mercury__eqvclass__TypeInfo_for_T_15));
#line 2392 "eqvclass.c"
    }
#line 2394 "eqvclass.c"
    mercury__eqvclass__TypeCtorInfo_29_29 = (MR_Word) &mercury__tree234__tree234__type_ctor_info_tree234_2;
#line 2396 "eqvclass.c"
    {
#line 2398 "eqvclass.c"
      mercury__eqvclass__TypeInfo_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2400 "eqvclass.c"
      MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_30_30, 0) = ((MR_Box) (mercury__eqvclass__TypeCtorInfo_29_29));
#line 2402 "eqvclass.c"
      MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_30_30, 1) = ((MR_Box) (mercury__eqvclass__TypeCtorInfo_25_25));
#line 2404 "eqvclass.c"
      MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_30_30, 2) = ((MR_Box) (mercury__eqvclass__TypeInfo_27_27));
#line 2406 "eqvclass.c"
    }
#line 2408 "eqvclass.c"
    {
#line 2410 "eqvclass.c"
      mercury__eqvclass__TypeInfo_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2412 "eqvclass.c"
      MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_31_31, 0) = ((MR_Box) (mercury__eqvclass__TypeCtorInfo_29_29));
#line 2414 "eqvclass.c"
      MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_31_31, 1) = ((MR_Box) (mercury__eqvclass__TypeInfo_for_T_15));
#line 2416 "eqvclass.c"
      MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_31_31, 2) = ((MR_Box) (mercury__eqvclass__TypeCtorInfo_25_25));
#line 2418 "eqvclass.c"
    }
#line 2420 "eqvclass.c"
    mercury__eqvclass__TypeInfo_for_K_40 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 2422 "eqvclass.c"
    mercury__eqvclass__TypeInfo_for_A_41 = (MR_Word) &mercury__counter__counter__type_ctor_info_counter_0;
#line 196 "map.opt"
    {
#line 196 "map.opt"
      mercury__tree234__foldl3_8_p_0(mercury__eqvclass__TypeInfo_for_K_40, mercury__eqvclass__TypeInfo_27_27, mercury__eqvclass__TypeInfo_for_A_41, mercury__eqvclass__TypeInfo_30_30, mercury__eqvclass__TypeInfo_31_31, mercury__eqvclass__V_13_13, mercury__eqvclass__Partitions0_8, ((MR_Box) (mercury__eqvclass__Counter0_7)), &mercury__eqvclass__conv5_Counter_10, ((MR_Box) (mercury__eqvclass__Partitions0_8)), &mercury__eqvclass__conv4_Partitions_11, ((MR_Box) (mercury__eqvclass__Keys0_9)), &mercury__eqvclass__conv3_Keys_12);
    }
#line 196 "map.opt"
    mercury__eqvclass__Counter_10 = ((MR_Word) mercury__eqvclass__conv5_Counter_10);
#line 196 "map.opt"
    mercury__eqvclass__Partitions_11 = ((MR_Word) mercury__eqvclass__conv4_Partitions_11);
#line 196 "map.opt"
    mercury__eqvclass__Keys_12 = ((MR_Word) mercury__eqvclass__conv3_Keys_12);
#line 503 "eqvclass.m"
    {
#line 503 "eqvclass.m"
      mercury__eqvclass__E_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 503 "eqvclass.m"
      MR_hl_field(MR_mktag(0), mercury__eqvclass__E_6, 0) = ((MR_Box) (mercury__eqvclass__Counter_10));
#line 503 "eqvclass.m"
      MR_hl_field(MR_mktag(0), mercury__eqvclass__E_6, 1) = ((MR_Box) (mercury__eqvclass__Partitions_11));
#line 503 "eqvclass.m"
      MR_hl_field(MR_mktag(0), mercury__eqvclass__E_6, 2) = ((MR_Box) (mercury__eqvclass__Keys_12));
#line 503 "eqvclass.m"
    }
#line 499 "eqvclass.m"
    return mercury__eqvclass__E_6;
#line 499 "eqvclass.m"
  }
#line 150 "eqvclass.m"
}

#line 142 "eqvclass.m"
void MR_CALL 
mercury__eqvclass__remove_equivalent_elements_3_p_0(
#line 142 "eqvclass.m"
  MR_Word mercury__eqvclass__TypeInfo_for_T_9,
#line 142 "eqvclass.m"
  MR_Box mercury__eqvclass__X_4,
#line 142 "eqvclass.m"
  MR_Word mercury__eqvclass__STATE_VARIABLE_EqvClass_0_6,
#line 142 "eqvclass.m"
  MR_Word * mercury__eqvclass__STATE_VARIABLE_EqvClass_7)
#line 142 "eqvclass.m"
{
#line 487 "eqvclass.m"
  {
#line 487 "eqvclass.m"
    MR_bool mercury__eqvclass__succeeded;

#line 487 "eqvclass.m"
    {
#line 487 "eqvclass.m"
      *mercury__eqvclass__STATE_VARIABLE_EqvClass_7 = mercury__eqvclass__remove_equivalent_elements_2_f_0(mercury__eqvclass__TypeInfo_for_T_9, mercury__eqvclass__STATE_VARIABLE_EqvClass_0_6, mercury__eqvclass__X_4);
    }
#line 487 "eqvclass.m"
  }
#line 142 "eqvclass.m"
}

#line 141 "eqvclass.m"
MR_Word MR_CALL 
mercury__eqvclass__remove_equivalent_elements_2_f_0(
#line 141 "eqvclass.m"
  MR_Word mercury__eqvclass__TypeInfo_for_T_13,
#line 141 "eqvclass.m"
  MR_Word mercury__eqvclass__HeadVar__1_1,
#line 141 "eqvclass.m"
  MR_Box mercury__eqvclass__X_7)
#line 141 "eqvclass.m"
{
#line 490 "eqvclass.m"
  {
#line 490 "eqvclass.m"
    MR_bool mercury__eqvclass__succeeded;
#line 490 "eqvclass.m"
    MR_Word mercury__eqvclass__HeadVar__3_3;
#line 490 "eqvclass.m"
    MR_Word mercury__eqvclass__Id_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__HeadVar__1_1, (MR_Integer) 0)));
#line 490 "eqvclass.m"
    MR_Word mercury__eqvclass__P0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__HeadVar__1_1, (MR_Integer) 1)));
#line 490 "eqvclass.m"
    MR_Word mercury__eqvclass__E0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__HeadVar__1_1, (MR_Integer) 2)));
#line 490 "eqvclass.m"
    MR_Word mercury__eqvclass__P_8;
#line 490 "eqvclass.m"
    MR_Word mercury__eqvclass__E_9;
#line 494 "eqvclass.m"
    MR_Integer mercury__eqvclass__Partition_10;
#line 491 "eqvclass.m"
    MR_Word mercury__eqvclass__TypeCtorInfo_14_14 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 452 "map.opt"
    MR_Box mercury__eqvclass__conv0_Partition_10;

#line 452 "map.opt"
    {
#line 452 "map.opt"
      mercury__eqvclass__succeeded = mercury__tree234__search_3_p_0(mercury__eqvclass__TypeInfo_for_T_13, mercury__eqvclass__TypeCtorInfo_14_14, mercury__eqvclass__E0_6, mercury__eqvclass__X_7, &mercury__eqvclass__conv0_Partition_10);
    }
#line 452 "map.opt"
    if (mercury__eqvclass__succeeded)
#line 452 "map.opt"
      {
#line 452 "map.opt"
        mercury__eqvclass__Partition_10 = ((MR_Integer) mercury__eqvclass__conv0_Partition_10);
#line 452 "map.opt"
        mercury__eqvclass__succeeded = MR_TRUE;
#line 452 "map.opt"
      }
#line 494 "eqvclass.m"
    if (mercury__eqvclass__succeeded)
#line 492 "eqvclass.m"
      {
#line 492 "eqvclass.m"
        MR_Word mercury__eqvclass__TypeCtorInfo_15_15 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 492 "eqvclass.m"
        MR_Word mercury__eqvclass__TypeCtorInfo_16_16 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
#line 492 "eqvclass.m"
        MR_Word mercury__eqvclass__TypeInfo_17_17;
#line 492 "eqvclass.m"
        MR_Word mercury__eqvclass__Eq_11;
#line 492 "eqvclass.m"
        MR_Word mercury__eqvclass__V_12_12;
#line 492 "eqvclass.m"
        MR_Box mercury__eqvclass__conv1_Eq_11;

#line 2548 "eqvclass.c"
        {
#line 2550 "eqvclass.c"
          mercury__eqvclass__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2552 "eqvclass.c"
          MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_17_17, 0) = ((MR_Box) (mercury__eqvclass__TypeCtorInfo_16_16));
#line 2554 "eqvclass.c"
          MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_17_17, 1) = ((MR_Box) (mercury__eqvclass__TypeInfo_for_T_13));
#line 2556 "eqvclass.c"
        }
#line 492 "eqvclass.m"
        {
#line 492 "eqvclass.m"
          mercury__map__det_remove_4_p_0(mercury__eqvclass__TypeCtorInfo_15_15, mercury__eqvclass__TypeInfo_17_17, ((MR_Box) (mercury__eqvclass__Partition_10)), &mercury__eqvclass__conv1_Eq_11, mercury__eqvclass__P0_5, &mercury__eqvclass__P_8);
        }
#line 492 "eqvclass.m"
        mercury__eqvclass__Eq_11 = ((MR_Word) mercury__eqvclass__conv1_Eq_11);
#line 271 "set_ordlist.opt"
        mercury__eqvclass__V_12_12 = (MR_Word) mercury__eqvclass__Eq_11;
#line 493 "eqvclass.m"
        {
#line 493 "eqvclass.m"
          mercury__map__delete_list_3_p_0(mercury__eqvclass__TypeInfo_for_T_13, mercury__eqvclass__TypeCtorInfo_15_15, mercury__eqvclass__V_12_12, mercury__eqvclass__E0_6, &mercury__eqvclass__E_9);
        }
#line 492 "eqvclass.m"
      }
#line 494 "eqvclass.m"
    else
#line 495 "eqvclass.m"
      {
#line 495 "eqvclass.m"
        mercury__eqvclass__P_8 = mercury__eqvclass__P0_5;
#line 496 "eqvclass.m"
        mercury__eqvclass__E_9 = mercury__eqvclass__E0_6;
#line 495 "eqvclass.m"
      }
#line 490 "eqvclass.m"
    {
#line 490 "eqvclass.m"
      mercury__eqvclass__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 490 "eqvclass.m"
      MR_hl_field(MR_mktag(0), mercury__eqvclass__HeadVar__3_3, 0) = ((MR_Box) (mercury__eqvclass__Id_4));
#line 490 "eqvclass.m"
      MR_hl_field(MR_mktag(0), mercury__eqvclass__HeadVar__3_3, 1) = ((MR_Box) (mercury__eqvclass__P_8));
#line 490 "eqvclass.m"
      MR_hl_field(MR_mktag(0), mercury__eqvclass__HeadVar__3_3, 2) = ((MR_Box) (mercury__eqvclass__E_9));
#line 490 "eqvclass.m"
    }
#line 490 "eqvclass.m"
    return mercury__eqvclass__HeadVar__3_3;
#line 490 "eqvclass.m"
  }
#line 141 "eqvclass.m"
}

#line 136 "eqvclass.m"
MR_Box MR_CALL 
mercury__eqvclass__get_minimum_element_2_f_0(
#line 136 "eqvclass.m"
  MR_Word mercury__eqvclass__TypeInfo_for_T_8,
#line 136 "eqvclass.m"
  MR_Word mercury__eqvclass__EqvClass_4,
#line 136 "eqvclass.m"
  MR_Box mercury__eqvclass__X_5)
#line 136 "eqvclass.m"
{
#line 482 "eqvclass.m"
  {
#line 482 "eqvclass.m"
    MR_bool mercury__eqvclass__succeeded;
#line 482 "eqvclass.m"
    MR_Box mercury__eqvclass__HeadVar__3_3;
#line 482 "eqvclass.m"
    MR_Word mercury__eqvclass__V_6_6;
#line 482 "eqvclass.m"
    MR_Word mercury__eqvclass__V_7_7;

#line 484 "eqvclass.m"
    {
#line 484 "eqvclass.m"
      mercury__eqvclass__V_7_7 = mercury__eqvclass__get_equivalent_elements_2_f_0(mercury__eqvclass__TypeInfo_for_T_8, mercury__eqvclass__EqvClass_4, mercury__eqvclass__X_5);
    }
#line 271 "set_ordlist.opt"
    mercury__eqvclass__V_6_6 = (MR_Word) mercury__eqvclass__V_7_7;
#line 483 "eqvclass.m"
    {
#line 483 "eqvclass.m"
      return mercury__eqvclass__HeadVar__3_3 = mercury__list__det_head_1_f_0(mercury__eqvclass__TypeInfo_for_T_8, mercury__eqvclass__V_6_6);
    }
#line 482 "eqvclass.m"
    return mercury__eqvclass__HeadVar__3_3;
#line 482 "eqvclass.m"
  }
#line 136 "eqvclass.m"
}

#line 131 "eqvclass.m"
MR_Word MR_CALL 
mercury__eqvclass__get_equivalent_elements_2_f_0(
#line 131 "eqvclass.m"
  MR_Word mercury__eqvclass__TypeInfo_for_T_10,
#line 131 "eqvclass.m"
  MR_Word mercury__eqvclass__HeadVar__1_1,
#line 131 "eqvclass.m"
  MR_Box mercury__eqvclass__X_7)
#line 131 "eqvclass.m"
{
#line 475 "eqvclass.m"
  {
#line 475 "eqvclass.m"
    MR_bool mercury__eqvclass__succeeded;
#line 475 "eqvclass.m"
    MR_Word mercury__eqvclass__HeadVar__3_3;
#line 475 "eqvclass.m"
    MR_Word mercury__eqvclass__PartitionMap_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__HeadVar__1_1, (MR_Integer) 1)));
#line 475 "eqvclass.m"
    MR_Word mercury__eqvclass__ElementMap_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__HeadVar__1_1, (MR_Integer) 2)));
#line 475 "eqvclass.m"
    MR_Word mercury__eqvclass__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__HeadVar__1_1, (MR_Integer) 0)));
#line 475 "eqvclass.m"
    MR_Word mercury__eqvclass__Eqv_8;
#line 476 "eqvclass.m"
    MR_Word mercury__eqvclass__TypeCtorInfo_11_11 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 476 "eqvclass.m"
    MR_Word mercury__eqvclass__TypeCtorInfo_12_12 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
#line 476 "eqvclass.m"
    MR_Word mercury__eqvclass__TypeInfo_13_13;
#line 476 "eqvclass.m"
    MR_Integer mercury__eqvclass__V_9_9;
#line 452 "map.opt"
    MR_Box mercury__eqvclass__conv0_V_9_9;
#line 452 "map.opt"
    MR_Box mercury__eqvclass__conv1_Eqv_8;

#line 2682 "eqvclass.c"
    {
#line 2684 "eqvclass.c"
      mercury__eqvclass__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2686 "eqvclass.c"
      MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_13_13, 0) = ((MR_Box) (mercury__eqvclass__TypeCtorInfo_12_12));
#line 2688 "eqvclass.c"
      MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_13_13, 1) = ((MR_Box) (mercury__eqvclass__TypeInfo_for_T_10));
#line 2690 "eqvclass.c"
    }
#line 452 "map.opt"
    {
#line 452 "map.opt"
      mercury__eqvclass__succeeded = mercury__tree234__search_3_p_0(mercury__eqvclass__TypeInfo_for_T_10, mercury__eqvclass__TypeCtorInfo_11_11, mercury__eqvclass__ElementMap_6, mercury__eqvclass__X_7, &mercury__eqvclass__conv0_V_9_9);
    }
#line 452 "map.opt"
    if (mercury__eqvclass__succeeded)
#line 452 "map.opt"
      {
#line 452 "map.opt"
        mercury__eqvclass__V_9_9 = ((MR_Integer) mercury__eqvclass__conv0_V_9_9);
#line 452 "map.opt"
        mercury__eqvclass__succeeded = MR_TRUE;
#line 452 "map.opt"
      }
#line 476 "eqvclass.m"
    if (mercury__eqvclass__succeeded)
#line 476 "eqvclass.m"
      {
#line 452 "map.opt"
        {
#line 452 "map.opt"
          mercury__eqvclass__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__eqvclass__TypeInfo_13_13, (MR_Word) mercury__eqvclass__PartitionMap_5, mercury__eqvclass__V_9_9, &mercury__eqvclass__conv1_Eqv_8);
        }
#line 452 "map.opt"
        if (mercury__eqvclass__succeeded)
#line 452 "map.opt"
          {
#line 452 "map.opt"
            mercury__eqvclass__Eqv_8 = ((MR_Word) mercury__eqvclass__conv1_Eqv_8);
#line 452 "map.opt"
            mercury__eqvclass__succeeded = MR_TRUE;
#line 452 "map.opt"
          }
#line 476 "eqvclass.m"
      }
#line 475 "eqvclass.m"
    if (mercury__eqvclass__succeeded)
#line 477 "eqvclass.m"
      mercury__eqvclass__HeadVar__3_3 = mercury__eqvclass__Eqv_8;
#line 475 "eqvclass.m"
    else
#line 254 "set_ordlist.opt"
      {
#line 254 "set_ordlist.opt"
        MR_Word mercury__eqvclass__V_4_33;
#line 254 "set_ordlist.opt"
        MR_Word mercury__eqvclass__V_5_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 255 "set_ordlist.opt"
        {
#line 255 "set_ordlist.opt"
          mercury__eqvclass__V_4_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 255 "set_ordlist.opt"
          MR_hl_field(MR_mktag(1), mercury__eqvclass__V_4_33, 0) = mercury__eqvclass__X_7;
#line 255 "set_ordlist.opt"
          MR_hl_field(MR_mktag(1), mercury__eqvclass__V_4_33, 1) = ((MR_Box) (mercury__eqvclass__V_5_34));
#line 255 "set_ordlist.opt"
        }
#line 254 "set_ordlist.opt"
        mercury__eqvclass__HeadVar__3_3 = (MR_Word) mercury__eqvclass__V_4_33;
#line 254 "set_ordlist.opt"
      }
#line 475 "eqvclass.m"
    return mercury__eqvclass__HeadVar__3_3;
#line 475 "eqvclass.m"
  }
#line 131 "eqvclass.m"
}

#line 125 "eqvclass.m"
void MR_CALL 
mercury__eqvclass__partition_list_to_eqvclass_2_p_0(
#line 125 "eqvclass.m"
  MR_Word mercury__eqvclass__TypeInfo_for_T_18,
#line 125 "eqvclass.m"
  MR_Word mercury__eqvclass__HeadVar__1_1,
#line 125 "eqvclass.m"
  MR_Word * mercury__eqvclass__EqvClass_2)
#line 125 "eqvclass.m"
{
#line 448 "eqvclass.m"
  {
#line 448 "eqvclass.m"
    MR_bool mercury__eqvclass__succeeded;

#line 448 "eqvclass.m"
    if ((mercury__eqvclass__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 176 "eqvclass.m"
      {
#line 176 "eqvclass.m"
        MR_Word mercury__eqvclass__PartitionMap_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 176 "eqvclass.m"
        MR_Word mercury__eqvclass__ElementMap_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 176 "eqvclass.m"
        MR_Word mercury__eqvclass__V_25_25 = (MR_Word) ((MR_Box) ((MR_Integer) 0));

#line 179 "eqvclass.m"
        *mercury__eqvclass__EqvClass_2 = (MR_Word) &mercury__eqvclass_scalar_common_1[1];
#line 176 "eqvclass.m"
      }
#line 448 "eqvclass.m"
    else
#line 450 "eqvclass.m"
      {
#line 450 "eqvclass.m"
        MR_Word mercury__eqvclass__Partition_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__eqvclass__HeadVar__1_1, (MR_Integer) 0)));
#line 450 "eqvclass.m"
        MR_Word mercury__eqvclass__Ps_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__eqvclass__HeadVar__1_1, (MR_Integer) 1)));
#line 450 "eqvclass.m"
        MR_Word mercury__eqvclass__EqvClass0_7;
#line 450 "eqvclass.m"
        MR_Word mercury__eqvclass__Counter0_8;
#line 450 "eqvclass.m"
        MR_Word mercury__eqvclass__PartitionMap0_9;
#line 450 "eqvclass.m"
        MR_Word mercury__eqvclass__ElementMap0_10;
#line 450 "eqvclass.m"
        MR_Word mercury__eqvclass__Elements_11;
#line 450 "eqvclass.m"
        MR_Word mercury__eqvclass__Counter_12;
#line 450 "eqvclass.m"
        MR_Word mercury__eqvclass__ElementMap_13;
#line 450 "eqvclass.m"
        MR_Word mercury__eqvclass__PartitionMap_14;

#line 451 "eqvclass.m"
        {
#line 451 "eqvclass.m"
          mercury__eqvclass__partition_list_to_eqvclass_2_p_0(mercury__eqvclass__TypeInfo_for_T_18, mercury__eqvclass__Ps_5, &mercury__eqvclass__EqvClass0_7);
        }
#line 452 "eqvclass.m"
        mercury__eqvclass__Counter0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 0)));
#line 452 "eqvclass.m"
        mercury__eqvclass__PartitionMap0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 1)));
#line 452 "eqvclass.m"
        mercury__eqvclass__ElementMap0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 2)));
#line 271 "set_ordlist.opt"
        mercury__eqvclass__Elements_11 = (MR_Word) mercury__eqvclass__Partition_4;
#line 459 "eqvclass.m"
        if ((mercury__eqvclass__Elements_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 455 "eqvclass.m"
          {
#line 456 "eqvclass.m"
            mercury__eqvclass__Counter_12 = mercury__eqvclass__Counter0_8;
#line 457 "eqvclass.m"
            mercury__eqvclass__ElementMap_13 = mercury__eqvclass__ElementMap0_10;
#line 458 "eqvclass.m"
            mercury__eqvclass__PartitionMap_14 = mercury__eqvclass__PartitionMap0_9;
#line 455 "eqvclass.m"
          }
#line 459 "eqvclass.m"
        else
#line 460 "eqvclass.m"
          {
#line 460 "eqvclass.m"
            MR_Word mercury__eqvclass__TypeCtorInfo_20_20;
#line 460 "eqvclass.m"
            MR_Word mercury__eqvclass__TypeInfo_21_21;
#line 460 "eqvclass.m"
            MR_Integer mercury__eqvclass__Id_17 = (MR_Integer) mercury__eqvclass__Counter0_8;
#line 460 "eqvclass.m"
            MR_Integer mercury__eqvclass__V_5_37 = (mercury__eqvclass__Id_17 + (MR_Integer) 1);
#line 463 "eqvclass.m"
            MR_Word mercury__eqvclass__conv0_PartitionMap_14;

#line 9 "counter.opt"
            mercury__eqvclass__Counter_12 = (MR_Word) mercury__eqvclass__V_5_37;
#line 462 "eqvclass.m"
            {
#line 462 "eqvclass.m"
              mercury__eqvclass__make_partition_4_p_0(mercury__eqvclass__TypeInfo_for_T_18, mercury__eqvclass__Elements_11, mercury__eqvclass__Id_17, mercury__eqvclass__ElementMap0_10, &mercury__eqvclass__ElementMap_13);
            }
#line 2865 "eqvclass.c"
            mercury__eqvclass__TypeCtorInfo_20_20 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
#line 2867 "eqvclass.c"
            {
#line 2869 "eqvclass.c"
              mercury__eqvclass__TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2871 "eqvclass.c"
              MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_21_21, 0) = ((MR_Box) (mercury__eqvclass__TypeCtorInfo_20_20));
#line 2873 "eqvclass.c"
              MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_21_21, 1) = ((MR_Box) (mercury__eqvclass__TypeInfo_for_T_18));
#line 2875 "eqvclass.c"
            }
#line 463 "eqvclass.m"
            {
#line 463 "eqvclass.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mercury__eqvclass__TypeInfo_21_21, mercury__eqvclass__Id_17, ((MR_Box) (mercury__eqvclass__Partition_4)), (MR_Word) mercury__eqvclass__PartitionMap0_9, &mercury__eqvclass__conv0_PartitionMap_14);
            }
#line 463 "eqvclass.m"
            mercury__eqvclass__PartitionMap_14 = (MR_Word) mercury__eqvclass__conv0_PartitionMap_14;
#line 460 "eqvclass.m"
          }
#line 465 "eqvclass.m"
        {
#line 465 "eqvclass.m"
          MR_Word base;
#line 465 "eqvclass.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 465 "eqvclass.m"
          *mercury__eqvclass__EqvClass_2 = base;
#line 465 "eqvclass.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__eqvclass__Counter_12));
#line 465 "eqvclass.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__eqvclass__PartitionMap_14));
#line 465 "eqvclass.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__eqvclass__ElementMap_13));
#line 465 "eqvclass.m"
        }
#line 450 "eqvclass.m"
      }
#line 448 "eqvclass.m"
  }
#line 125 "eqvclass.m"
}

#line 124 "eqvclass.m"
MR_Word MR_CALL 
mercury__eqvclass__partition_list_to_eqvclass_1_f_0(
#line 124 "eqvclass.m"
  MR_Word mercury__eqvclass__TypeInfo_for_T_5,
#line 124 "eqvclass.m"
  MR_Word mercury__eqvclass__Xs_3)
#line 124 "eqvclass.m"
{
#line 446 "eqvclass.m"
  {
#line 446 "eqvclass.m"
    MR_bool mercury__eqvclass__succeeded;
#line 446 "eqvclass.m"
    MR_Word mercury__eqvclass__EqvClass_4;

#line 446 "eqvclass.m"
    {
#line 446 "eqvclass.m"
      mercury__eqvclass__partition_list_to_eqvclass_2_p_0(mercury__eqvclass__TypeInfo_for_T_5, mercury__eqvclass__Xs_3, &mercury__eqvclass__EqvClass_4);
    }
#line 446 "eqvclass.m"
    return mercury__eqvclass__EqvClass_4;
#line 446 "eqvclass.m"
  }
#line 124 "eqvclass.m"
}

#line 119 "eqvclass.m"
void MR_CALL 
mercury__eqvclass__partition_set_to_eqvclass_2_p_0(
#line 119 "eqvclass.m"
  MR_Word mercury__eqvclass__TypeInfo_for_T_6,
#line 119 "eqvclass.m"
  MR_Word mercury__eqvclass__SetSet_3,
#line 119 "eqvclass.m"
  MR_Word * mercury__eqvclass__EqvClass_4)
#line 119 "eqvclass.m"
{
#line 441 "eqvclass.m"
  {
#line 441 "eqvclass.m"
    MR_bool mercury__eqvclass__succeeded;
#line 441 "eqvclass.m"
    MR_Word mercury__eqvclass__ListSet_5 = (MR_Word) mercury__eqvclass__SetSet_3;

#line 443 "eqvclass.m"
    {
#line 443 "eqvclass.m"
      mercury__eqvclass__partition_list_to_eqvclass_2_p_0(mercury__eqvclass__TypeInfo_for_T_6, mercury__eqvclass__ListSet_5, mercury__eqvclass__EqvClass_4);
#line 443 "eqvclass.m"
      return;
    }
#line 441 "eqvclass.m"
  }
#line 119 "eqvclass.m"
}

#line 118 "eqvclass.m"
MR_Word MR_CALL 
mercury__eqvclass__partition_set_to_eqvclass_1_f_0(
#line 118 "eqvclass.m"
  MR_Word mercury__eqvclass__TypeInfo_for_T_5,
#line 118 "eqvclass.m"
  MR_Word mercury__eqvclass__Set_3)
#line 118 "eqvclass.m"
{
#line 441 "eqvclass.m"
  {
#line 441 "eqvclass.m"
    MR_bool mercury__eqvclass__succeeded;
#line 441 "eqvclass.m"
    MR_Word mercury__eqvclass__EqvClass_4;
#line 441 "eqvclass.m"
    MR_Word mercury__eqvclass__ListSet_8 = (MR_Word) mercury__eqvclass__Set_3;

#line 443 "eqvclass.m"
    {
#line 443 "eqvclass.m"
      mercury__eqvclass__partition_list_to_eqvclass_2_p_0(mercury__eqvclass__TypeInfo_for_T_5, mercury__eqvclass__ListSet_8, &mercury__eqvclass__EqvClass_4);
    }
#line 441 "eqvclass.m"
    return mercury__eqvclass__EqvClass_4;
#line 441 "eqvclass.m"
  }
#line 118 "eqvclass.m"
}

#line 113 "eqvclass.m"
void MR_CALL 
mercury__eqvclass__partition_list_2_p_0(
#line 113 "eqvclass.m"
  MR_Word mercury__eqvclass__TypeInfo_for_T_6,
#line 113 "eqvclass.m"
  MR_Word mercury__eqvclass__EqvClass_3,
#line 113 "eqvclass.m"
  MR_Word * mercury__eqvclass__PartitionList_4)
#line 113 "eqvclass.m"
{
#line 402 "eqvclass.m"
  {
#line 402 "eqvclass.m"
    MR_bool mercury__eqvclass__succeeded;
#line 402 "eqvclass.m"
    MR_Word mercury__eqvclass__TypeCtorInfo_9_12 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 402 "eqvclass.m"
    MR_Word mercury__eqvclass__TypeCtorInfo_10_13 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
#line 402 "eqvclass.m"
    MR_Word mercury__eqvclass__TypeInfo_11_14;
#line 402 "eqvclass.m"
    MR_Word mercury__eqvclass__Ids_5;
#line 402 "eqvclass.m"
    MR_Word mercury__eqvclass__PartitionMap0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass_3, (MR_Integer) 1)));
#line 402 "eqvclass.m"
    MR_Word mercury__eqvclass__V_5_19;
#line 422 "eqvclass.m"
    MR_Word mercury__eqvclass__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass_3, (MR_Integer) 0)));
#line 422 "eqvclass.m"
    MR_Word mercury__eqvclass__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass_3, (MR_Integer) 2)));

#line 3029 "eqvclass.c"
    {
#line 3031 "eqvclass.c"
      mercury__eqvclass__TypeInfo_11_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3033 "eqvclass.c"
      MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_11_14, 0) = ((MR_Box) (mercury__eqvclass__TypeCtorInfo_10_13));
#line 3035 "eqvclass.c"
      MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_11_14, 1) = ((MR_Box) (mercury__eqvclass__TypeInfo_for_T_6));
#line 3037 "eqvclass.c"
    }
#line 251 "tree234.opt"
    mercury__eqvclass__V_5_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 252 "tree234.opt"
    {
#line 252 "tree234.opt"
      mercury__tree234__keys_acc_3_p_0(mercury__eqvclass__TypeCtorInfo_9_12, mercury__eqvclass__TypeInfo_11_14, mercury__eqvclass__PartitionMap0_9, mercury__eqvclass__V_5_19, &mercury__eqvclass__Ids_5);
    }
#line 404 "eqvclass.m"
    {
#line 404 "eqvclass.m"
      mercury__eqvclass__partitions_3_p_0(mercury__eqvclass__TypeInfo_for_T_6, mercury__eqvclass__EqvClass_3, mercury__eqvclass__Ids_5, mercury__eqvclass__PartitionList_4);
#line 404 "eqvclass.m"
      return;
    }
#line 402 "eqvclass.m"
  }
#line 113 "eqvclass.m"
}

#line 112 "eqvclass.m"
MR_Word MR_CALL 
mercury__eqvclass__partition_list_1_f_0(
#line 112 "eqvclass.m"
  MR_Word mercury__eqvclass__TypeInfo_for_T_5,
#line 112 "eqvclass.m"
  MR_Word mercury__eqvclass__EqvClass_3)
#line 112 "eqvclass.m"
{
#line 402 "eqvclass.m"
  {
#line 402 "eqvclass.m"
    MR_bool mercury__eqvclass__succeeded;
#line 402 "eqvclass.m"
    MR_Word mercury__eqvclass__Xs_4;
#line 402 "eqvclass.m"
    MR_Word mercury__eqvclass__TypeCtorInfo_9_14 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 402 "eqvclass.m"
    MR_Word mercury__eqvclass__TypeCtorInfo_10_15 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
#line 402 "eqvclass.m"
    MR_Word mercury__eqvclass__TypeInfo_11_16;
#line 402 "eqvclass.m"
    MR_Word mercury__eqvclass__Ids_8;
#line 402 "eqvclass.m"
    MR_Word mercury__eqvclass__PartitionMap0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass_3, (MR_Integer) 1)));
#line 402 "eqvclass.m"
    MR_Word mercury__eqvclass__V_5_21;
#line 422 "eqvclass.m"
    MR_Word mercury__eqvclass__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass_3, (MR_Integer) 0)));
#line 422 "eqvclass.m"
    MR_Word mercury__eqvclass__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass_3, (MR_Integer) 2)));

#line 3090 "eqvclass.c"
    {
#line 3092 "eqvclass.c"
      mercury__eqvclass__TypeInfo_11_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3094 "eqvclass.c"
      MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_11_16, 0) = ((MR_Box) (mercury__eqvclass__TypeCtorInfo_10_15));
#line 3096 "eqvclass.c"
      MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_11_16, 1) = ((MR_Box) (mercury__eqvclass__TypeInfo_for_T_5));
#line 3098 "eqvclass.c"
    }
#line 251 "tree234.opt"
    mercury__eqvclass__V_5_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 252 "tree234.opt"
    {
#line 252 "tree234.opt"
      mercury__tree234__keys_acc_3_p_0(mercury__eqvclass__TypeCtorInfo_9_14, mercury__eqvclass__TypeInfo_11_16, mercury__eqvclass__PartitionMap0_11, mercury__eqvclass__V_5_21, &mercury__eqvclass__Ids_8);
    }
#line 404 "eqvclass.m"
    {
#line 404 "eqvclass.m"
      mercury__eqvclass__partitions_3_p_0(mercury__eqvclass__TypeInfo_for_T_5, mercury__eqvclass__EqvClass_3, mercury__eqvclass__Ids_8, &mercury__eqvclass__Xs_4);
    }
#line 402 "eqvclass.m"
    return mercury__eqvclass__Xs_4;
#line 402 "eqvclass.m"
  }
#line 112 "eqvclass.m"
}

#line 108 "eqvclass.m"
void MR_CALL 
mercury__eqvclass__partition_set_2_p_0(
#line 108 "eqvclass.m"
  MR_Word mercury__eqvclass__TypeInfo_for_T_7,
#line 108 "eqvclass.m"
  MR_Word mercury__eqvclass__EqvClass0_3,
#line 108 "eqvclass.m"
  MR_Word * mercury__eqvclass__PartitionSet_4)
#line 108 "eqvclass.m"
{
#line 394 "eqvclass.m"
  {
#line 394 "eqvclass.m"
    MR_bool mercury__eqvclass__succeeded;
#line 394 "eqvclass.m"
    MR_Word mercury__eqvclass__TypeInfo_9_9;
#line 394 "eqvclass.m"
    MR_Word mercury__eqvclass__TypeCtorInfo_9_15 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 394 "eqvclass.m"
    MR_Word mercury__eqvclass__TypeCtorInfo_10_16 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
#line 394 "eqvclass.m"
    MR_Word mercury__eqvclass__Ids_5;
#line 394 "eqvclass.m"
    MR_Word mercury__eqvclass__PartitionList_6;
#line 394 "eqvclass.m"
    MR_Word mercury__eqvclass__PartitionMap0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_3, (MR_Integer) 1)));
#line 394 "eqvclass.m"
    MR_Word mercury__eqvclass__V_5_22;
#line 394 "eqvclass.m"
    MR_Word mercury__eqvclass__V_4_27;
#line 394 "eqvclass.m"
    MR_Integer mercury__eqvclass__V_5_30;
#line 422 "eqvclass.m"
    MR_Word mercury__eqvclass__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_3, (MR_Integer) 0)));
#line 422 "eqvclass.m"
    MR_Word mercury__eqvclass__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_3, (MR_Integer) 2)));
#line 1105 "list.opt"
    MR_Word mercury__eqvclass__conv0_V_4_27;

#line 3159 "eqvclass.c"
    {
#line 3161 "eqvclass.c"
      mercury__eqvclass__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3163 "eqvclass.c"
      MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_9_9, 0) = ((MR_Box) (mercury__eqvclass__TypeCtorInfo_10_16));
#line 3165 "eqvclass.c"
      MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_9_9, 1) = ((MR_Box) (mercury__eqvclass__TypeInfo_for_T_7));
#line 3167 "eqvclass.c"
    }
#line 251 "tree234.opt"
    mercury__eqvclass__V_5_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 252 "tree234.opt"
    {
#line 252 "tree234.opt"
      mercury__tree234__keys_acc_3_p_0(mercury__eqvclass__TypeCtorInfo_9_15, mercury__eqvclass__TypeInfo_9_9, mercury__eqvclass__PartitionMap0_12, mercury__eqvclass__V_5_22, &mercury__eqvclass__Ids_5);
    }
#line 396 "eqvclass.m"
    {
#line 396 "eqvclass.m"
      mercury__eqvclass__partitions_3_p_0(mercury__eqvclass__TypeInfo_for_T_7, mercury__eqvclass__EqvClass0_3, mercury__eqvclass__Ids_5, &mercury__eqvclass__PartitionList_6);
    }
#line 600 "list.opt"
    {
#line 600 "list.opt"
      mercury__list__length_acc_3_p_0(mercury__eqvclass__TypeInfo_9_9, (MR_Word) mercury__eqvclass__PartitionList_6, (MR_Integer) 0, &mercury__eqvclass__V_5_30);
    }
#line 1105 "list.opt"
    {
#line 1105 "list.opt"
      mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__eqvclass__TypeInfo_9_9, mercury__eqvclass__V_5_30, (MR_Word) mercury__eqvclass__PartitionList_6, &mercury__eqvclass__conv0_V_4_27);
    }
#line 1105 "list.opt"
    mercury__eqvclass__V_4_27 = (MR_Word) mercury__eqvclass__conv0_V_4_27;
#line 214 "set_ordlist.opt"
    *mercury__eqvclass__PartitionSet_4 = (MR_Word) mercury__eqvclass__V_4_27;
#line 394 "eqvclass.m"
  }
#line 108 "eqvclass.m"
}

#line 107 "eqvclass.m"
MR_Word MR_CALL 
mercury__eqvclass__partition_set_1_f_0(
#line 107 "eqvclass.m"
  MR_Word mercury__eqvclass__TypeInfo_for_T_5,
#line 107 "eqvclass.m"
  MR_Word mercury__eqvclass__EqvClass_3)
#line 107 "eqvclass.m"
{
#line 392 "eqvclass.m"
  {
#line 392 "eqvclass.m"
    MR_bool mercury__eqvclass__succeeded;
#line 392 "eqvclass.m"
    MR_Word mercury__eqvclass__S_4;

#line 392 "eqvclass.m"
    {
#line 392 "eqvclass.m"
      mercury__eqvclass__partition_set_2_p_0(mercury__eqvclass__TypeInfo_for_T_5, mercury__eqvclass__EqvClass_3, &mercury__eqvclass__S_4);
    }
#line 392 "eqvclass.m"
    return mercury__eqvclass__S_4;
#line 392 "eqvclass.m"
  }
#line 107 "eqvclass.m"
}

#line 103 "eqvclass.m"
MR_bool MR_CALL 
mercury__eqvclass__same_eqvclass_list_2_p_0(
#line 103 "eqvclass.m"
  MR_Word mercury__eqvclass__TypeInfo_for_T_11,
#line 103 "eqvclass.m"
  MR_Word mercury__eqvclass__EqvClass_1,
#line 103 "eqvclass.m"
  MR_Word mercury__eqvclass__HeadVar__2_2)
#line 103 "eqvclass.m"
{
#line 377 "eqvclass.m"
  {
#line 377 "eqvclass.m"
    MR_bool mercury__eqvclass__succeeded;

#line 377 "eqvclass.m"
    if ((mercury__eqvclass__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 377 "eqvclass.m"
      mercury__eqvclass__succeeded = MR_TRUE;
#line 377 "eqvclass.m"
    else
#line 378 "eqvclass.m"
      {
#line 378 "eqvclass.m"
        MR_Word mercury__eqvclass__TypeCtorInfo_12_12 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 378 "eqvclass.m"
        MR_Box mercury__eqvclass__Element_5 = (MR_hl_field(MR_mktag(1), mercury__eqvclass__HeadVar__2_2, (MR_Integer) 0));
#line 378 "eqvclass.m"
        MR_Word mercury__eqvclass__Elements_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__eqvclass__HeadVar__2_2, (MR_Integer) 1)));
#line 378 "eqvclass.m"
        MR_Word mercury__eqvclass__ElementMap_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass_1, (MR_Integer) 2)));
#line 378 "eqvclass.m"
        MR_Integer mercury__eqvclass__Id_8;
#line 379 "eqvclass.m"
        MR_Word mercury__eqvclass__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass_1, (MR_Integer) 0)));
#line 379 "eqvclass.m"
        MR_Word mercury__eqvclass__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass_1, (MR_Integer) 1)));
#line 452 "map.opt"
        MR_Box mercury__eqvclass__conv0_Id_8;

#line 452 "map.opt"
        {
#line 452 "map.opt"
          mercury__eqvclass__succeeded = mercury__tree234__search_3_p_0(mercury__eqvclass__TypeInfo_for_T_11, mercury__eqvclass__TypeCtorInfo_12_12, mercury__eqvclass__ElementMap_7, mercury__eqvclass__Element_5, &mercury__eqvclass__conv0_Id_8);
        }
#line 452 "map.opt"
        if (mercury__eqvclass__succeeded)
#line 452 "map.opt"
          {
#line 452 "map.opt"
            mercury__eqvclass__Id_8 = ((MR_Integer) mercury__eqvclass__conv0_Id_8);
#line 452 "map.opt"
            mercury__eqvclass__succeeded = MR_TRUE;
#line 452 "map.opt"
          }
#line 378 "eqvclass.m"
        if (mercury__eqvclass__succeeded)
#line 381 "eqvclass.m"
          {
#line 381 "eqvclass.m"
            return mercury__eqvclass__succeeded = mercury__eqvclass__same_eqvclass_list_2_3_p_0(mercury__eqvclass__TypeInfo_for_T_11, mercury__eqvclass__ElementMap_7, mercury__eqvclass__Elements_6, mercury__eqvclass__Id_8);
          }
#line 378 "eqvclass.m"
      }
#line 377 "eqvclass.m"
    return mercury__eqvclass__succeeded;
#line 377 "eqvclass.m"
  }
#line 103 "eqvclass.m"
}

#line 99 "eqvclass.m"
MR_bool MR_CALL 
mercury__eqvclass__same_eqvclass_3_p_0(
#line 99 "eqvclass.m"
  MR_Word mercury__eqvclass__TypeInfo_for_T_12,
#line 99 "eqvclass.m"
  MR_Word mercury__eqvclass__EqvClass0_4,
#line 99 "eqvclass.m"
  MR_Box mercury__eqvclass__Element1_5,
#line 99 "eqvclass.m"
  MR_Box mercury__eqvclass__Element2_6)
#line 99 "eqvclass.m"
{
#line 371 "eqvclass.m"
  {
#line 371 "eqvclass.m"
    MR_bool mercury__eqvclass__succeeded;
#line 371 "eqvclass.m"
    MR_Word mercury__eqvclass__TypeCtorInfo_13_13 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 371 "eqvclass.m"
    MR_Word mercury__eqvclass__ElementMap0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_4, (MR_Integer) 2)));
#line 371 "eqvclass.m"
    MR_Integer mercury__eqvclass__Id1_8;
#line 371 "eqvclass.m"
    MR_Integer mercury__eqvclass__Id2_9;
#line 372 "eqvclass.m"
    MR_Word mercury__eqvclass__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_4, (MR_Integer) 0)));
#line 372 "eqvclass.m"
    MR_Word mercury__eqvclass__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_4, (MR_Integer) 1)));
#line 452 "map.opt"
    MR_Box mercury__eqvclass__conv0_Id1_8;
#line 452 "map.opt"
    MR_Box mercury__eqvclass__conv1_Id2_9;

#line 452 "map.opt"
    {
#line 452 "map.opt"
      mercury__eqvclass__succeeded = mercury__tree234__search_3_p_0(mercury__eqvclass__TypeInfo_for_T_12, mercury__eqvclass__TypeCtorInfo_13_13, mercury__eqvclass__ElementMap0_7, mercury__eqvclass__Element1_5, &mercury__eqvclass__conv0_Id1_8);
    }
#line 452 "map.opt"
    if (mercury__eqvclass__succeeded)
#line 452 "map.opt"
      {
#line 452 "map.opt"
        mercury__eqvclass__Id1_8 = ((MR_Integer) mercury__eqvclass__conv0_Id1_8);
#line 452 "map.opt"
        mercury__eqvclass__succeeded = MR_TRUE;
#line 452 "map.opt"
      }
#line 371 "eqvclass.m"
    if (mercury__eqvclass__succeeded)
#line 371 "eqvclass.m"
      {
#line 452 "map.opt"
        {
#line 452 "map.opt"
          mercury__eqvclass__succeeded = mercury__tree234__search_3_p_0(mercury__eqvclass__TypeInfo_for_T_12, mercury__eqvclass__TypeCtorInfo_13_13, mercury__eqvclass__ElementMap0_7, mercury__eqvclass__Element2_6, &mercury__eqvclass__conv1_Id2_9);
        }
#line 452 "map.opt"
        if (mercury__eqvclass__succeeded)
#line 452 "map.opt"
          {
#line 452 "map.opt"
            mercury__eqvclass__Id2_9 = ((MR_Integer) mercury__eqvclass__conv1_Id2_9);
#line 452 "map.opt"
            mercury__eqvclass__succeeded = MR_TRUE;
#line 452 "map.opt"
          }
#line 371 "eqvclass.m"
        if (mercury__eqvclass__succeeded)
#line 375 "eqvclass.m"
          mercury__eqvclass__succeeded = (mercury__eqvclass__Id1_8 == mercury__eqvclass__Id2_9);
#line 371 "eqvclass.m"
      }
#line 371 "eqvclass.m"
    return mercury__eqvclass__succeeded;
#line 371 "eqvclass.m"
  }
#line 99 "eqvclass.m"
}

#line 94 "eqvclass.m"
void MR_CALL 
mercury__eqvclass__new_equivalence_4_p_0(
#line 94 "eqvclass.m"
  MR_Word mercury__eqvclass__TypeInfo_for_T_56,
#line 94 "eqvclass.m"
  MR_Box mercury__eqvclass__ElementA_5,
#line 94 "eqvclass.m"
  MR_Box mercury__eqvclass__ElementB_6,
#line 94 "eqvclass.m"
  MR_Word mercury__eqvclass__EqvClass0_7,
#line 94 "eqvclass.m"
  MR_Word * mercury__eqvclass__EqvClass_8)
#line 94 "eqvclass.m"
{
#line 286 "eqvclass.m"
  {
#line 286 "eqvclass.m"
    MR_bool mercury__eqvclass__succeeded;
#line 286 "eqvclass.m"
    MR_Word mercury__eqvclass__ElementMap0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 2)));
#line 290 "eqvclass.m"
    MR_Word mercury__eqvclass__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 0)));
#line 290 "eqvclass.m"
    MR_Word mercury__eqvclass__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 1)));
#line 307 "eqvclass.m"
    MR_Integer mercury__eqvclass__IdA_10;
#line 291 "eqvclass.m"
    MR_Word mercury__eqvclass__TypeCtorInfo_57_57 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 452 "map.opt"
    MR_Box mercury__eqvclass__conv0_IdA_10;

#line 452 "map.opt"
    {
#line 452 "map.opt"
      mercury__eqvclass__succeeded = mercury__tree234__search_3_p_0(mercury__eqvclass__TypeInfo_for_T_56, mercury__eqvclass__TypeCtorInfo_57_57, mercury__eqvclass__ElementMap0_9, mercury__eqvclass__ElementA_5, &mercury__eqvclass__conv0_IdA_10);
    }
#line 452 "map.opt"
    if (mercury__eqvclass__succeeded)
#line 452 "map.opt"
      {
#line 452 "map.opt"
        mercury__eqvclass__IdA_10 = ((MR_Integer) mercury__eqvclass__conv0_IdA_10);
#line 452 "map.opt"
        mercury__eqvclass__succeeded = MR_TRUE;
#line 452 "map.opt"
      }
#line 307 "eqvclass.m"
    if (mercury__eqvclass__succeeded)
#line 298 "eqvclass.m"
      {
#line 298 "eqvclass.m"
        MR_Integer mercury__eqvclass__IdB_11;
#line 292 "eqvclass.m"
        MR_Word mercury__eqvclass__TypeCtorInfo_58_58 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 452 "map.opt"
        MR_Box mercury__eqvclass__conv1_IdB_11;

#line 452 "map.opt"
        {
#line 452 "map.opt"
          mercury__eqvclass__succeeded = mercury__tree234__search_3_p_0(mercury__eqvclass__TypeInfo_for_T_56, mercury__eqvclass__TypeCtorInfo_58_58, mercury__eqvclass__ElementMap0_9, mercury__eqvclass__ElementB_6, &mercury__eqvclass__conv1_IdB_11);
        }
#line 452 "map.opt"
        if (mercury__eqvclass__succeeded)
#line 452 "map.opt"
          {
#line 452 "map.opt"
            mercury__eqvclass__IdB_11 = ((MR_Integer) mercury__eqvclass__conv1_IdB_11);
#line 452 "map.opt"
            mercury__eqvclass__succeeded = MR_TRUE;
#line 452 "map.opt"
          }
#line 298 "eqvclass.m"
        if (mercury__eqvclass__succeeded)
#line 295 "eqvclass.m"
          {
#line 293 "eqvclass.m"
            mercury__eqvclass__succeeded = (mercury__eqvclass__IdA_10 == mercury__eqvclass__IdB_11);
#line 295 "eqvclass.m"
            if (mercury__eqvclass__succeeded)
#line 294 "eqvclass.m"
              {
#line 294 "eqvclass.m"
                {
#line 294 "eqvclass.m"
                  mercury__require__error_1_p_0((MR_String) "two elements are already equivalent");
#line 294 "eqvclass.m"
                  return;
                }
#line 294 "eqvclass.m"
              }
#line 295 "eqvclass.m"
            else
#line 296 "eqvclass.m"
              {
#line 296 "eqvclass.m"
                mercury__eqvclass__add_equivalence_4_p_0(mercury__eqvclass__TypeInfo_for_T_56, mercury__eqvclass__IdA_10, mercury__eqvclass__IdB_11, mercury__eqvclass__EqvClass0_7, mercury__eqvclass__EqvClass_8);
#line 296 "eqvclass.m"
                return;
              }
#line 295 "eqvclass.m"
          }
#line 298 "eqvclass.m"
        else
#line 299 "eqvclass.m"
          {
#line 299 "eqvclass.m"
            MR_Word mercury__eqvclass__TypeCtorInfo_59_59 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 299 "eqvclass.m"
            MR_Word mercury__eqvclass__TypeCtorInfo_60_60 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
#line 299 "eqvclass.m"
            MR_Word mercury__eqvclass__TypeInfo_61_61;
#line 299 "eqvclass.m"
            MR_Word mercury__eqvclass__PartitionMap0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 1)));
#line 299 "eqvclass.m"
            MR_Word mercury__eqvclass__PartitionA_13;
#line 299 "eqvclass.m"
            MR_Word mercury__eqvclass__Partition_14;
#line 299 "eqvclass.m"
            MR_Word mercury__eqvclass__PartitionMap_15;
#line 299 "eqvclass.m"
            MR_Word mercury__eqvclass__ElementMap_16;
#line 299 "eqvclass.m"
            MR_Word mercury__eqvclass__NextId0_17;
#line 299 "eqvclass.m"
            MR_Word mercury__eqvclass__V_5_82;
#line 299 "eqvclass.m"
            MR_Word mercury__eqvclass__V_6_83;
#line 299 "eqvclass.m"
            MR_Word mercury__eqvclass__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 0)));
#line 299 "eqvclass.m"
            MR_Word mercury__eqvclass__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 2)));
#line 300 "eqvclass.m"
            MR_Box mercury__eqvclass__conv2_PartitionA_13;
#line 302 "eqvclass.m"
            MR_Word mercury__eqvclass__conv3_PartitionMap_15;
#line 304 "eqvclass.m"
            MR_Word mercury__eqvclass__V_46_46;
#line 304 "eqvclass.m"
            MR_Word mercury__eqvclass__V_47_47;

#line 3523 "eqvclass.c"
            {
#line 3525 "eqvclass.c"
              mercury__eqvclass__TypeInfo_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3527 "eqvclass.c"
              MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_61_61, 0) = ((MR_Box) (mercury__eqvclass__TypeCtorInfo_60_60));
#line 3529 "eqvclass.c"
              MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_61_61, 1) = ((MR_Box) (mercury__eqvclass__TypeInfo_for_T_56));
#line 3531 "eqvclass.c"
            }
#line 300 "eqvclass.m"
            {
#line 300 "eqvclass.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__eqvclass__TypeInfo_61_61, (MR_Word) mercury__eqvclass__PartitionMap0_12, mercury__eqvclass__IdA_10, &mercury__eqvclass__conv2_PartitionA_13);
            }
#line 300 "eqvclass.m"
            mercury__eqvclass__PartitionA_13 = ((MR_Word) mercury__eqvclass__conv2_PartitionA_13);
#line 175 "set_ordlist.opt"
            mercury__eqvclass__V_5_82 = (MR_Word) mercury__eqvclass__PartitionA_13;
#line 176 "set_ordlist.opt"
            {
#line 176 "set_ordlist.opt"
              mercury__set_ordlist__insert_loop_3_p_0(mercury__eqvclass__TypeInfo_for_T_56, mercury__eqvclass__V_5_82, mercury__eqvclass__ElementB_6, &mercury__eqvclass__V_6_83);
            }
#line 175 "set_ordlist.opt"
            mercury__eqvclass__Partition_14 = (MR_Word) mercury__eqvclass__V_6_83;
#line 302 "eqvclass.m"
            {
#line 302 "eqvclass.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mercury__eqvclass__TypeInfo_61_61, mercury__eqvclass__IdA_10, ((MR_Box) (mercury__eqvclass__Partition_14)), (MR_Word) mercury__eqvclass__PartitionMap0_12, &mercury__eqvclass__conv3_PartitionMap_15);
            }
#line 302 "eqvclass.m"
            mercury__eqvclass__PartitionMap_15 = (MR_Word) mercury__eqvclass__conv3_PartitionMap_15;
#line 303 "eqvclass.m"
            {
#line 303 "eqvclass.m"
              mercury__map__det_insert_4_p_0(mercury__eqvclass__TypeInfo_for_T_56, mercury__eqvclass__TypeCtorInfo_59_59, mercury__eqvclass__ElementB_6, ((MR_Box) (mercury__eqvclass__IdA_10)), mercury__eqvclass__ElementMap0_9, &mercury__eqvclass__ElementMap_16);
            }
#line 304 "eqvclass.m"
            mercury__eqvclass__NextId0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 0)));
#line 304 "eqvclass.m"
            mercury__eqvclass__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 1)));
#line 304 "eqvclass.m"
            mercury__eqvclass__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 2)));
#line 305 "eqvclass.m"
            {
#line 305 "eqvclass.m"
              MR_Word base;
#line 305 "eqvclass.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 305 "eqvclass.m"
              *mercury__eqvclass__EqvClass_8 = base;
#line 305 "eqvclass.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__eqvclass__NextId0_17));
#line 305 "eqvclass.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__eqvclass__PartitionMap_15));
#line 305 "eqvclass.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__eqvclass__ElementMap_16));
#line 305 "eqvclass.m"
            }
#line 299 "eqvclass.m"
          }
#line 298 "eqvclass.m"
      }
#line 307 "eqvclass.m"
    else
#line 316 "eqvclass.m"
      {
#line 316 "eqvclass.m"
        MR_Word mercury__eqvclass__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 1)));
#line 316 "eqvclass.m"
        MR_Word mercury__eqvclass__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 0)));
#line 309 "eqvclass.m"
        MR_Word mercury__eqvclass__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 2)));
#line 316 "eqvclass.m"
        MR_Integer mercury__eqvclass__IdB_36;
#line 308 "eqvclass.m"
        MR_Word mercury__eqvclass__TypeCtorInfo_62_62 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 452 "map.opt"
        MR_Box mercury__eqvclass__conv4_IdB_36;

#line 452 "map.opt"
        {
#line 452 "map.opt"
          mercury__eqvclass__succeeded = mercury__tree234__search_3_p_0(mercury__eqvclass__TypeInfo_for_T_56, mercury__eqvclass__TypeCtorInfo_62_62, mercury__eqvclass__ElementMap0_9, mercury__eqvclass__ElementB_6, &mercury__eqvclass__conv4_IdB_36);
        }
#line 452 "map.opt"
        if (mercury__eqvclass__succeeded)
#line 452 "map.opt"
          {
#line 452 "map.opt"
            mercury__eqvclass__IdB_36 = ((MR_Integer) mercury__eqvclass__conv4_IdB_36);
#line 452 "map.opt"
            mercury__eqvclass__succeeded = MR_TRUE;
#line 452 "map.opt"
          }
#line 316 "eqvclass.m"
        if (mercury__eqvclass__succeeded)
#line 309 "eqvclass.m"
          {
#line 309 "eqvclass.m"
            MR_Word mercury__eqvclass__TypeCtorInfo_63_63 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 309 "eqvclass.m"
            MR_Word mercury__eqvclass__TypeCtorInfo_64_64 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
#line 309 "eqvclass.m"
            MR_Word mercury__eqvclass__TypeInfo_65_65;
#line 309 "eqvclass.m"
            MR_Word mercury__eqvclass__PartitionB_18;
#line 309 "eqvclass.m"
            MR_Word mercury__eqvclass__Partition_27;
#line 309 "eqvclass.m"
            MR_Word mercury__eqvclass__PartitionMap_28;
#line 309 "eqvclass.m"
            MR_Word mercury__eqvclass__ElementMap_29;
#line 309 "eqvclass.m"
            MR_Word mercury__eqvclass__NextId0_30;
#line 309 "eqvclass.m"
            MR_Word mercury__eqvclass__V_5_91;
#line 309 "eqvclass.m"
            MR_Word mercury__eqvclass__V_6_92;
#line 310 "eqvclass.m"
            MR_Box mercury__eqvclass__conv5_PartitionB_18;
#line 312 "eqvclass.m"
            MR_Word mercury__eqvclass__conv6_PartitionMap_28;
#line 314 "eqvclass.m"
            MR_Word mercury__eqvclass__V_50_50;
#line 314 "eqvclass.m"
            MR_Word mercury__eqvclass__V_51_51;

#line 3652 "eqvclass.c"
            {
#line 3654 "eqvclass.c"
              mercury__eqvclass__TypeInfo_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3656 "eqvclass.c"
              MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_65_65, 0) = ((MR_Box) (mercury__eqvclass__TypeCtorInfo_64_64));
#line 3658 "eqvclass.c"
              MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_65_65, 1) = ((MR_Box) (mercury__eqvclass__TypeInfo_for_T_56));
#line 3660 "eqvclass.c"
            }
#line 310 "eqvclass.m"
            {
#line 310 "eqvclass.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__eqvclass__TypeInfo_65_65, (MR_Word) mercury__eqvclass__V_70_70, mercury__eqvclass__IdB_36, &mercury__eqvclass__conv5_PartitionB_18);
            }
#line 310 "eqvclass.m"
            mercury__eqvclass__PartitionB_18 = ((MR_Word) mercury__eqvclass__conv5_PartitionB_18);
#line 175 "set_ordlist.opt"
            mercury__eqvclass__V_5_91 = (MR_Word) mercury__eqvclass__PartitionB_18;
#line 176 "set_ordlist.opt"
            {
#line 176 "set_ordlist.opt"
              mercury__set_ordlist__insert_loop_3_p_0(mercury__eqvclass__TypeInfo_for_T_56, mercury__eqvclass__V_5_91, mercury__eqvclass__ElementA_5, &mercury__eqvclass__V_6_92);
            }
#line 175 "set_ordlist.opt"
            mercury__eqvclass__Partition_27 = (MR_Word) mercury__eqvclass__V_6_92;
#line 312 "eqvclass.m"
            {
#line 312 "eqvclass.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mercury__eqvclass__TypeInfo_65_65, mercury__eqvclass__IdB_36, ((MR_Box) (mercury__eqvclass__Partition_27)), (MR_Word) mercury__eqvclass__V_70_70, &mercury__eqvclass__conv6_PartitionMap_28);
            }
#line 312 "eqvclass.m"
            mercury__eqvclass__PartitionMap_28 = (MR_Word) mercury__eqvclass__conv6_PartitionMap_28;
#line 313 "eqvclass.m"
            {
#line 313 "eqvclass.m"
              mercury__map__det_insert_4_p_0(mercury__eqvclass__TypeInfo_for_T_56, mercury__eqvclass__TypeCtorInfo_63_63, mercury__eqvclass__ElementA_5, ((MR_Box) (mercury__eqvclass__IdB_36)), mercury__eqvclass__ElementMap0_9, &mercury__eqvclass__ElementMap_29);
            }
#line 314 "eqvclass.m"
            mercury__eqvclass__NextId0_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 0)));
#line 314 "eqvclass.m"
            mercury__eqvclass__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 1)));
#line 314 "eqvclass.m"
            mercury__eqvclass__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 2)));
#line 315 "eqvclass.m"
            {
#line 315 "eqvclass.m"
              MR_Word base;
#line 315 "eqvclass.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 315 "eqvclass.m"
              *mercury__eqvclass__EqvClass_8 = base;
#line 315 "eqvclass.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__eqvclass__NextId0_30));
#line 315 "eqvclass.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__eqvclass__PartitionMap_28));
#line 315 "eqvclass.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__eqvclass__ElementMap_29));
#line 315 "eqvclass.m"
            }
#line 309 "eqvclass.m"
          }
#line 316 "eqvclass.m"
        else
#line 317 "eqvclass.m"
          {
#line 317 "eqvclass.m"
            MR_Word mercury__eqvclass__TypeCtorInfo_66_66;
#line 317 "eqvclass.m"
            MR_Word mercury__eqvclass__TypeCtorInfo_67_67;
#line 317 "eqvclass.m"
            MR_Word mercury__eqvclass__TypeInfo_68_68;
#line 317 "eqvclass.m"
            MR_Integer mercury__eqvclass__Id_19 = (MR_Integer) mercury__eqvclass__V_71_71;
#line 317 "eqvclass.m"
            MR_Word mercury__eqvclass__NextId_20;
#line 317 "eqvclass.m"
            MR_Word mercury__eqvclass__ElementMap1_21;
#line 317 "eqvclass.m"
            MR_Word mercury__eqvclass__V_23_23;
#line 317 "eqvclass.m"
            MR_Word mercury__eqvclass__V_24_24;
#line 317 "eqvclass.m"
            MR_Word mercury__eqvclass__V_25_25;
#line 317 "eqvclass.m"
            MR_Word mercury__eqvclass__PartitionMap0_31;
#line 317 "eqvclass.m"
            MR_Word mercury__eqvclass__Partition_32;
#line 317 "eqvclass.m"
            MR_Word mercury__eqvclass__PartitionMap_33;
#line 317 "eqvclass.m"
            MR_Word mercury__eqvclass__ElementMap_34;
#line 317 "eqvclass.m"
            MR_Integer mercury__eqvclass__V_5_94 = (mercury__eqvclass__Id_19 + (MR_Integer) 1);
#line 321 "eqvclass.m"
            MR_Word mercury__eqvclass__V_54_54;
#line 321 "eqvclass.m"
            MR_Word mercury__eqvclass__V_55_55;
#line 323 "eqvclass.m"
            MR_Word mercury__eqvclass__conv7_PartitionMap_33;

#line 9 "counter.opt"
            mercury__eqvclass__NextId_20 = (MR_Word) mercury__eqvclass__V_5_94;
#line 3755 "eqvclass.c"
            mercury__eqvclass__TypeCtorInfo_66_66 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 319 "eqvclass.m"
            {
#line 319 "eqvclass.m"
              mercury__map__det_insert_4_p_0(mercury__eqvclass__TypeInfo_for_T_56, mercury__eqvclass__TypeCtorInfo_66_66, mercury__eqvclass__ElementA_5, ((MR_Box) (mercury__eqvclass__Id_19)), mercury__eqvclass__ElementMap0_9, &mercury__eqvclass__ElementMap1_21);
            }
#line 320 "eqvclass.m"
            {
#line 320 "eqvclass.m"
              mercury__map__det_insert_4_p_0(mercury__eqvclass__TypeInfo_for_T_56, mercury__eqvclass__TypeCtorInfo_66_66, mercury__eqvclass__ElementB_6, ((MR_Box) (mercury__eqvclass__Id_19)), mercury__eqvclass__ElementMap1_21, &mercury__eqvclass__ElementMap_34);
            }
#line 321 "eqvclass.m"
            mercury__eqvclass__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 0)));
#line 321 "eqvclass.m"
            mercury__eqvclass__PartitionMap0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 1)));
#line 321 "eqvclass.m"
            mercury__eqvclass__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 2)));
#line 322 "eqvclass.m"
            mercury__eqvclass__V_25_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 322 "eqvclass.m"
            {
#line 322 "eqvclass.m"
              mercury__eqvclass__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 322 "eqvclass.m"
              MR_hl_field(MR_mktag(1), mercury__eqvclass__V_24_24, 0) = mercury__eqvclass__ElementB_6;
#line 322 "eqvclass.m"
              MR_hl_field(MR_mktag(1), mercury__eqvclass__V_24_24, 1) = ((MR_Box) (mercury__eqvclass__V_25_25));
#line 322 "eqvclass.m"
            }
#line 322 "eqvclass.m"
            {
#line 322 "eqvclass.m"
              mercury__eqvclass__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 322 "eqvclass.m"
              MR_hl_field(MR_mktag(1), mercury__eqvclass__V_23_23, 0) = mercury__eqvclass__ElementA_5;
#line 322 "eqvclass.m"
              MR_hl_field(MR_mktag(1), mercury__eqvclass__V_23_23, 1) = ((MR_Box) (mercury__eqvclass__V_24_24));
#line 322 "eqvclass.m"
            }
#line 322 "eqvclass.m"
            {
#line 322 "eqvclass.m"
              mercury__set__list_to_set_2_p_0(mercury__eqvclass__TypeInfo_for_T_56, mercury__eqvclass__V_23_23, &mercury__eqvclass__Partition_32);
            }
#line 3800 "eqvclass.c"
            mercury__eqvclass__TypeCtorInfo_67_67 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
#line 3802 "eqvclass.c"
            {
#line 3804 "eqvclass.c"
              mercury__eqvclass__TypeInfo_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3806 "eqvclass.c"
              MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_68_68, 0) = ((MR_Box) (mercury__eqvclass__TypeCtorInfo_67_67));
#line 3808 "eqvclass.c"
              MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_68_68, 1) = ((MR_Box) (mercury__eqvclass__TypeInfo_for_T_56));
#line 3810 "eqvclass.c"
            }
#line 323 "eqvclass.m"
            {
#line 323 "eqvclass.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mercury__eqvclass__TypeInfo_68_68, mercury__eqvclass__Id_19, ((MR_Box) (mercury__eqvclass__Partition_32)), (MR_Word) mercury__eqvclass__PartitionMap0_31, &mercury__eqvclass__conv7_PartitionMap_33);
            }
#line 323 "eqvclass.m"
            mercury__eqvclass__PartitionMap_33 = (MR_Word) mercury__eqvclass__conv7_PartitionMap_33;
#line 324 "eqvclass.m"
            {
#line 324 "eqvclass.m"
              MR_Word base;
#line 324 "eqvclass.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 324 "eqvclass.m"
              *mercury__eqvclass__EqvClass_8 = base;
#line 324 "eqvclass.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__eqvclass__NextId_20));
#line 324 "eqvclass.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__eqvclass__PartitionMap_33));
#line 324 "eqvclass.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__eqvclass__ElementMap_34));
#line 324 "eqvclass.m"
            }
#line 317 "eqvclass.m"
          }
#line 316 "eqvclass.m"
      }
#line 286 "eqvclass.m"
  }
#line 94 "eqvclass.m"
}

#line 93 "eqvclass.m"
MR_Word MR_CALL 
mercury__eqvclass__new_equivalence_3_f_0(
#line 93 "eqvclass.m"
  MR_Word mercury__eqvclass__TypeInfo_for_T_11,
#line 93 "eqvclass.m"
  MR_Word mercury__eqvclass__STATE_VARIABLE_EqvClass_0_8,
#line 93 "eqvclass.m"
  MR_Box mercury__eqvclass__X_6,
#line 93 "eqvclass.m"
  MR_Box mercury__eqvclass__Y_7)
#line 93 "eqvclass.m"
{
#line 284 "eqvclass.m"
  {
#line 284 "eqvclass.m"
    MR_bool mercury__eqvclass__succeeded;
#line 284 "eqvclass.m"
    MR_Word mercury__eqvclass__STATE_VARIABLE_EqvClass_9;

#line 284 "eqvclass.m"
    {
#line 284 "eqvclass.m"
      mercury__eqvclass__new_equivalence_4_p_0(mercury__eqvclass__TypeInfo_for_T_11, mercury__eqvclass__X_6, mercury__eqvclass__Y_7, mercury__eqvclass__STATE_VARIABLE_EqvClass_0_8, &mercury__eqvclass__STATE_VARIABLE_EqvClass_9);
    }
#line 284 "eqvclass.m"
    return mercury__eqvclass__STATE_VARIABLE_EqvClass_9;
#line 284 "eqvclass.m"
  }
#line 93 "eqvclass.m"
}

#line 87 "eqvclass.m"
void MR_CALL 
mercury__eqvclass__ensure_corresponding_equivalences_4_p_0(
#line 87 "eqvclass.m"
  MR_Word mercury__eqvclass__TypeInfo_for_T_29,
#line 87 "eqvclass.m"
  MR_Word mercury__eqvclass__HeadVar__1_1,
#line 87 "eqvclass.m"
  MR_Word mercury__eqvclass__HeadVar__2_2,
#line 87 "eqvclass.m"
  MR_Word mercury__eqvclass__STATE_VARIABLE_EqvClass_0_3,
#line 87 "eqvclass.m"
  MR_Word * mercury__eqvclass__STATE_VARIABLE_EqvClass_4)
#line 87 "eqvclass.m"
{
#line 328 "eqvclass.m"
  while (MR_TRUE)
#line 328 "eqvclass.m"
    {
#line 328 "eqvclass.m"
      /* tailcall optimized into a loop */
#line 328 "eqvclass.m"
      {
#line 328 "eqvclass.m"
        MR_bool mercury__eqvclass__succeeded;

#line 328 "eqvclass.m"
        if ((mercury__eqvclass__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 328 "eqvclass.m"
          if ((mercury__eqvclass__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 328 "eqvclass.m"
            *mercury__eqvclass__STATE_VARIABLE_EqvClass_4 = mercury__eqvclass__STATE_VARIABLE_EqvClass_0_3;
#line 328 "eqvclass.m"
          else
#line 329 "eqvclass.m"
            {
#line 330 "eqvclass.m"
              {
#line 330 "eqvclass.m"
                mercury__require__error_1_p_0((MR_String) "eqvclass.ensure_corresponding_equivalences: list mismatch");
#line 330 "eqvclass.m"
                return;
              }
#line 329 "eqvclass.m"
            }
#line 328 "eqvclass.m"
        else
#line 328 "eqvclass.m"
          {
#line 328 "eqvclass.m"
            MR_Word mercury__eqvclass__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__eqvclass__HeadVar__1_1, (MR_Integer) 1)));
#line 328 "eqvclass.m"
            MR_Box mercury__eqvclass__V_31_31 = (MR_hl_field(MR_mktag(1), mercury__eqvclass__HeadVar__1_1, (MR_Integer) 0));

#line 328 "eqvclass.m"
            if ((mercury__eqvclass__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 331 "eqvclass.m"
              {
#line 332 "eqvclass.m"
                {
#line 332 "eqvclass.m"
                  mercury__require__error_1_p_0((MR_String) "eqvclass.ensure_corresponding_equivalences: list mismatch");
#line 332 "eqvclass.m"
                  return;
                }
#line 331 "eqvclass.m"
              }
#line 328 "eqvclass.m"
            else
#line 333 "eqvclass.m"
              {
#line 333 "eqvclass.m"
                MR_Box mercury__eqvclass__H2_22 = (MR_hl_field(MR_mktag(1), mercury__eqvclass__HeadVar__2_2, (MR_Integer) 0));
#line 333 "eqvclass.m"
                MR_Word mercury__eqvclass__T2_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__eqvclass__HeadVar__2_2, (MR_Integer) 1)));
#line 333 "eqvclass.m"
                MR_Word mercury__eqvclass__STATE_VARIABLE_EqvClass_27_27;

#line 334 "eqvclass.m"
                {
#line 334 "eqvclass.m"
                  mercury__eqvclass__ensure_equivalence_4_p_0(mercury__eqvclass__TypeInfo_for_T_29, mercury__eqvclass__V_31_31, mercury__eqvclass__H2_22, mercury__eqvclass__STATE_VARIABLE_EqvClass_0_3, &mercury__eqvclass__STATE_VARIABLE_EqvClass_27_27);
                }
#line 335 "eqvclass.m"
                /* direct tailcall eliminated */
#line 335 "eqvclass.m"
                {
#line 335 "eqvclass.m"
                  MR_Word mercury__eqvclass__HeadVar__1__tmp_copy_1 = mercury__eqvclass__V_30_30;
#line 335 "eqvclass.m"
                  MR_Word mercury__eqvclass__HeadVar__2__tmp_copy_2 = mercury__eqvclass__T2_23;
#line 335 "eqvclass.m"
                  MR_Word mercury__eqvclass__STATE_VARIABLE_EqvClass_0__tmp_copy_3 = mercury__eqvclass__STATE_VARIABLE_EqvClass_27_27;

#line 335 "eqvclass.m"
                  mercury__eqvclass__STATE_VARIABLE_EqvClass_0_3 = mercury__eqvclass__STATE_VARIABLE_EqvClass_0__tmp_copy_3;
#line 335 "eqvclass.m"
                  mercury__eqvclass__HeadVar__2_2 = mercury__eqvclass__HeadVar__2__tmp_copy_2;
#line 335 "eqvclass.m"
                  mercury__eqvclass__HeadVar__1_1 = mercury__eqvclass__HeadVar__1__tmp_copy_1;
#line 335 "eqvclass.m"
                }
#line 335 "eqvclass.m"
                continue;
#line 333 "eqvclass.m"
              }
#line 328 "eqvclass.m"
          }
#line 328 "eqvclass.m"
      }
#line 328 "eqvclass.m"
      break;
#line 328 "eqvclass.m"
    }
#line 87 "eqvclass.m"
}

#line 85 "eqvclass.m"
MR_Word MR_CALL 
mercury__eqvclass__ensure_corresponding_equivalences_3_f_0(
#line 85 "eqvclass.m"
  MR_Word mercury__eqvclass__TypeInfo_for_T_9,
#line 85 "eqvclass.m"
  MR_Word mercury__eqvclass__L1_5,
#line 85 "eqvclass.m"
  MR_Word mercury__eqvclass__L2_6,
#line 85 "eqvclass.m"
  MR_Word mercury__eqvclass__EqvClass0_7)
#line 85 "eqvclass.m"
{
#line 338 "eqvclass.m"
  {
#line 338 "eqvclass.m"
    MR_bool mercury__eqvclass__succeeded;
#line 338 "eqvclass.m"
    MR_Word mercury__eqvclass__EqvClass_8;

#line 338 "eqvclass.m"
    {
#line 338 "eqvclass.m"
      mercury__eqvclass__ensure_corresponding_equivalences_4_p_0(mercury__eqvclass__TypeInfo_for_T_9, mercury__eqvclass__L1_5, mercury__eqvclass__L2_6, mercury__eqvclass__EqvClass0_7, &mercury__eqvclass__EqvClass_8);
    }
#line 338 "eqvclass.m"
    return mercury__eqvclass__EqvClass_8;
#line 338 "eqvclass.m"
  }
#line 85 "eqvclass.m"
}

#line 82 "eqvclass.m"
void MR_CALL 
mercury__eqvclass__ensure_equivalence_4_p_0(
#line 82 "eqvclass.m"
  MR_Word mercury__eqvclass__TypeInfo_for_T_55,
#line 82 "eqvclass.m"
  MR_Box mercury__eqvclass__ElementA_5,
#line 82 "eqvclass.m"
  MR_Box mercury__eqvclass__ElementB_6,
#line 82 "eqvclass.m"
  MR_Word mercury__eqvclass__EqvClass0_7,
#line 82 "eqvclass.m"
  MR_Word * mercury__eqvclass__EqvClass_8)
#line 82 "eqvclass.m"
{
#line 228 "eqvclass.m"
  {
#line 228 "eqvclass.m"
    MR_bool mercury__eqvclass__succeeded;
#line 228 "eqvclass.m"
    MR_Word mercury__eqvclass__ElementMap0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 2)));
#line 243 "eqvclass.m"
    MR_Word mercury__eqvclass__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 0)));
#line 243 "eqvclass.m"
    MR_Word mercury__eqvclass__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 1)));
#line 260 "eqvclass.m"
    MR_Integer mercury__eqvclass__IdA_10;
#line 244 "eqvclass.m"
    MR_Word mercury__eqvclass__TypeCtorInfo_56_56 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 452 "map.opt"
    MR_Box mercury__eqvclass__conv0_IdA_10;

#line 452 "map.opt"
    {
#line 452 "map.opt"
      mercury__eqvclass__succeeded = mercury__tree234__search_3_p_0(mercury__eqvclass__TypeInfo_for_T_55, mercury__eqvclass__TypeCtorInfo_56_56, mercury__eqvclass__ElementMap0_9, mercury__eqvclass__ElementA_5, &mercury__eqvclass__conv0_IdA_10);
    }
#line 452 "map.opt"
    if (mercury__eqvclass__succeeded)
#line 452 "map.opt"
      {
#line 452 "map.opt"
        mercury__eqvclass__IdA_10 = ((MR_Integer) mercury__eqvclass__conv0_IdA_10);
#line 452 "map.opt"
        mercury__eqvclass__succeeded = MR_TRUE;
#line 452 "map.opt"
      }
#line 260 "eqvclass.m"
    if (mercury__eqvclass__succeeded)
#line 251 "eqvclass.m"
      {
#line 251 "eqvclass.m"
        MR_Integer mercury__eqvclass__IdB_11;
#line 245 "eqvclass.m"
        MR_Word mercury__eqvclass__TypeCtorInfo_57_57 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 452 "map.opt"
        MR_Box mercury__eqvclass__conv1_IdB_11;

#line 452 "map.opt"
        {
#line 452 "map.opt"
          mercury__eqvclass__succeeded = mercury__tree234__search_3_p_0(mercury__eqvclass__TypeInfo_for_T_55, mercury__eqvclass__TypeCtorInfo_57_57, mercury__eqvclass__ElementMap0_9, mercury__eqvclass__ElementB_6, &mercury__eqvclass__conv1_IdB_11);
        }
#line 452 "map.opt"
        if (mercury__eqvclass__succeeded)
#line 452 "map.opt"
          {
#line 452 "map.opt"
            mercury__eqvclass__IdB_11 = ((MR_Integer) mercury__eqvclass__conv1_IdB_11);
#line 452 "map.opt"
            mercury__eqvclass__succeeded = MR_TRUE;
#line 452 "map.opt"
          }
#line 251 "eqvclass.m"
        if (mercury__eqvclass__succeeded)
#line 248 "eqvclass.m"
          {
#line 246 "eqvclass.m"
            mercury__eqvclass__succeeded = (mercury__eqvclass__IdA_10 == mercury__eqvclass__IdB_11);
#line 248 "eqvclass.m"
            if (mercury__eqvclass__succeeded)
#line 247 "eqvclass.m"
              *mercury__eqvclass__EqvClass_8 = mercury__eqvclass__EqvClass0_7;
#line 248 "eqvclass.m"
            else
#line 249 "eqvclass.m"
              {
#line 249 "eqvclass.m"
                mercury__eqvclass__add_equivalence_4_p_0(mercury__eqvclass__TypeInfo_for_T_55, mercury__eqvclass__IdA_10, mercury__eqvclass__IdB_11, mercury__eqvclass__EqvClass0_7, mercury__eqvclass__EqvClass_8);
#line 249 "eqvclass.m"
                return;
              }
#line 248 "eqvclass.m"
          }
#line 251 "eqvclass.m"
        else
#line 252 "eqvclass.m"
          {
#line 252 "eqvclass.m"
            MR_Word mercury__eqvclass__TypeCtorInfo_58_58 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 252 "eqvclass.m"
            MR_Word mercury__eqvclass__TypeCtorInfo_59_59 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
#line 252 "eqvclass.m"
            MR_Word mercury__eqvclass__TypeInfo_60_60;
#line 252 "eqvclass.m"
            MR_Word mercury__eqvclass__PartitionMap0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 1)));
#line 252 "eqvclass.m"
            MR_Word mercury__eqvclass__PartitionA_13;
#line 252 "eqvclass.m"
            MR_Word mercury__eqvclass__Partition_14;
#line 252 "eqvclass.m"
            MR_Word mercury__eqvclass__PartitionMap_15;
#line 252 "eqvclass.m"
            MR_Word mercury__eqvclass__ElementMap_16;
#line 252 "eqvclass.m"
            MR_Word mercury__eqvclass__NextId0_17;
#line 252 "eqvclass.m"
            MR_Word mercury__eqvclass__V_5_81;
#line 252 "eqvclass.m"
            MR_Word mercury__eqvclass__V_6_82;
#line 252 "eqvclass.m"
            MR_Word mercury__eqvclass__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 0)));
#line 252 "eqvclass.m"
            MR_Word mercury__eqvclass__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 2)));
#line 253 "eqvclass.m"
            MR_Box mercury__eqvclass__conv2_PartitionA_13;
#line 255 "eqvclass.m"
            MR_Word mercury__eqvclass__conv3_PartitionMap_15;
#line 257 "eqvclass.m"
            MR_Word mercury__eqvclass__V_45_45;
#line 257 "eqvclass.m"
            MR_Word mercury__eqvclass__V_46_46;

#line 4158 "eqvclass.c"
            {
#line 4160 "eqvclass.c"
              mercury__eqvclass__TypeInfo_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4162 "eqvclass.c"
              MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_60_60, 0) = ((MR_Box) (mercury__eqvclass__TypeCtorInfo_59_59));
#line 4164 "eqvclass.c"
              MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_60_60, 1) = ((MR_Box) (mercury__eqvclass__TypeInfo_for_T_55));
#line 4166 "eqvclass.c"
            }
#line 253 "eqvclass.m"
            {
#line 253 "eqvclass.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__eqvclass__TypeInfo_60_60, (MR_Word) mercury__eqvclass__PartitionMap0_12, mercury__eqvclass__IdA_10, &mercury__eqvclass__conv2_PartitionA_13);
            }
#line 253 "eqvclass.m"
            mercury__eqvclass__PartitionA_13 = ((MR_Word) mercury__eqvclass__conv2_PartitionA_13);
#line 175 "set_ordlist.opt"
            mercury__eqvclass__V_5_81 = (MR_Word) mercury__eqvclass__PartitionA_13;
#line 176 "set_ordlist.opt"
            {
#line 176 "set_ordlist.opt"
              mercury__set_ordlist__insert_loop_3_p_0(mercury__eqvclass__TypeInfo_for_T_55, mercury__eqvclass__V_5_81, mercury__eqvclass__ElementB_6, &mercury__eqvclass__V_6_82);
            }
#line 175 "set_ordlist.opt"
            mercury__eqvclass__Partition_14 = (MR_Word) mercury__eqvclass__V_6_82;
#line 255 "eqvclass.m"
            {
#line 255 "eqvclass.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mercury__eqvclass__TypeInfo_60_60, mercury__eqvclass__IdA_10, ((MR_Box) (mercury__eqvclass__Partition_14)), (MR_Word) mercury__eqvclass__PartitionMap0_12, &mercury__eqvclass__conv3_PartitionMap_15);
            }
#line 255 "eqvclass.m"
            mercury__eqvclass__PartitionMap_15 = (MR_Word) mercury__eqvclass__conv3_PartitionMap_15;
#line 256 "eqvclass.m"
            {
#line 256 "eqvclass.m"
              mercury__map__det_insert_4_p_0(mercury__eqvclass__TypeInfo_for_T_55, mercury__eqvclass__TypeCtorInfo_58_58, mercury__eqvclass__ElementB_6, ((MR_Box) (mercury__eqvclass__IdA_10)), mercury__eqvclass__ElementMap0_9, &mercury__eqvclass__ElementMap_16);
            }
#line 257 "eqvclass.m"
            mercury__eqvclass__NextId0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 0)));
#line 257 "eqvclass.m"
            mercury__eqvclass__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 1)));
#line 257 "eqvclass.m"
            mercury__eqvclass__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 2)));
#line 258 "eqvclass.m"
            {
#line 258 "eqvclass.m"
              MR_Word base;
#line 258 "eqvclass.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 258 "eqvclass.m"
              *mercury__eqvclass__EqvClass_8 = base;
#line 258 "eqvclass.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__eqvclass__NextId0_17));
#line 258 "eqvclass.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__eqvclass__PartitionMap_15));
#line 258 "eqvclass.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__eqvclass__ElementMap_16));
#line 258 "eqvclass.m"
            }
#line 252 "eqvclass.m"
          }
#line 251 "eqvclass.m"
      }
#line 260 "eqvclass.m"
    else
#line 269 "eqvclass.m"
      {
#line 269 "eqvclass.m"
        MR_Word mercury__eqvclass__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 1)));
#line 269 "eqvclass.m"
        MR_Word mercury__eqvclass__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 0)));
#line 262 "eqvclass.m"
        MR_Word mercury__eqvclass__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 2)));
#line 269 "eqvclass.m"
        MR_Integer mercury__eqvclass__IdB_35;
#line 261 "eqvclass.m"
        MR_Word mercury__eqvclass__TypeCtorInfo_61_61 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 452 "map.opt"
        MR_Box mercury__eqvclass__conv4_IdB_35;

#line 452 "map.opt"
        {
#line 452 "map.opt"
          mercury__eqvclass__succeeded = mercury__tree234__search_3_p_0(mercury__eqvclass__TypeInfo_for_T_55, mercury__eqvclass__TypeCtorInfo_61_61, mercury__eqvclass__ElementMap0_9, mercury__eqvclass__ElementB_6, &mercury__eqvclass__conv4_IdB_35);
        }
#line 452 "map.opt"
        if (mercury__eqvclass__succeeded)
#line 452 "map.opt"
          {
#line 452 "map.opt"
            mercury__eqvclass__IdB_35 = ((MR_Integer) mercury__eqvclass__conv4_IdB_35);
#line 452 "map.opt"
            mercury__eqvclass__succeeded = MR_TRUE;
#line 452 "map.opt"
          }
#line 269 "eqvclass.m"
        if (mercury__eqvclass__succeeded)
#line 262 "eqvclass.m"
          {
#line 262 "eqvclass.m"
            MR_Word mercury__eqvclass__TypeCtorInfo_62_62 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 262 "eqvclass.m"
            MR_Word mercury__eqvclass__TypeCtorInfo_63_63 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
#line 262 "eqvclass.m"
            MR_Word mercury__eqvclass__TypeInfo_64_64;
#line 262 "eqvclass.m"
            MR_Word mercury__eqvclass__PartitionB_18;
#line 262 "eqvclass.m"
            MR_Word mercury__eqvclass__Partition_26;
#line 262 "eqvclass.m"
            MR_Word mercury__eqvclass__PartitionMap_27;
#line 262 "eqvclass.m"
            MR_Word mercury__eqvclass__ElementMap_28;
#line 262 "eqvclass.m"
            MR_Word mercury__eqvclass__NextId0_29;
#line 262 "eqvclass.m"
            MR_Word mercury__eqvclass__V_5_90;
#line 262 "eqvclass.m"
            MR_Word mercury__eqvclass__V_6_91;
#line 263 "eqvclass.m"
            MR_Box mercury__eqvclass__conv5_PartitionB_18;
#line 265 "eqvclass.m"
            MR_Word mercury__eqvclass__conv6_PartitionMap_27;
#line 267 "eqvclass.m"
            MR_Word mercury__eqvclass__V_49_49;
#line 267 "eqvclass.m"
            MR_Word mercury__eqvclass__V_50_50;

#line 4287 "eqvclass.c"
            {
#line 4289 "eqvclass.c"
              mercury__eqvclass__TypeInfo_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4291 "eqvclass.c"
              MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_64_64, 0) = ((MR_Box) (mercury__eqvclass__TypeCtorInfo_63_63));
#line 4293 "eqvclass.c"
              MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_64_64, 1) = ((MR_Box) (mercury__eqvclass__TypeInfo_for_T_55));
#line 4295 "eqvclass.c"
            }
#line 263 "eqvclass.m"
            {
#line 263 "eqvclass.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__eqvclass__TypeInfo_64_64, (MR_Word) mercury__eqvclass__V_69_69, mercury__eqvclass__IdB_35, &mercury__eqvclass__conv5_PartitionB_18);
            }
#line 263 "eqvclass.m"
            mercury__eqvclass__PartitionB_18 = ((MR_Word) mercury__eqvclass__conv5_PartitionB_18);
#line 175 "set_ordlist.opt"
            mercury__eqvclass__V_5_90 = (MR_Word) mercury__eqvclass__PartitionB_18;
#line 176 "set_ordlist.opt"
            {
#line 176 "set_ordlist.opt"
              mercury__set_ordlist__insert_loop_3_p_0(mercury__eqvclass__TypeInfo_for_T_55, mercury__eqvclass__V_5_90, mercury__eqvclass__ElementA_5, &mercury__eqvclass__V_6_91);
            }
#line 175 "set_ordlist.opt"
            mercury__eqvclass__Partition_26 = (MR_Word) mercury__eqvclass__V_6_91;
#line 265 "eqvclass.m"
            {
#line 265 "eqvclass.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mercury__eqvclass__TypeInfo_64_64, mercury__eqvclass__IdB_35, ((MR_Box) (mercury__eqvclass__Partition_26)), (MR_Word) mercury__eqvclass__V_69_69, &mercury__eqvclass__conv6_PartitionMap_27);
            }
#line 265 "eqvclass.m"
            mercury__eqvclass__PartitionMap_27 = (MR_Word) mercury__eqvclass__conv6_PartitionMap_27;
#line 266 "eqvclass.m"
            {
#line 266 "eqvclass.m"
              mercury__map__det_insert_4_p_0(mercury__eqvclass__TypeInfo_for_T_55, mercury__eqvclass__TypeCtorInfo_62_62, mercury__eqvclass__ElementA_5, ((MR_Box) (mercury__eqvclass__IdB_35)), mercury__eqvclass__ElementMap0_9, &mercury__eqvclass__ElementMap_28);
            }
#line 267 "eqvclass.m"
            mercury__eqvclass__NextId0_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 0)));
#line 267 "eqvclass.m"
            mercury__eqvclass__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 1)));
#line 267 "eqvclass.m"
            mercury__eqvclass__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 2)));
#line 268 "eqvclass.m"
            {
#line 268 "eqvclass.m"
              MR_Word base;
#line 268 "eqvclass.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 268 "eqvclass.m"
              *mercury__eqvclass__EqvClass_8 = base;
#line 268 "eqvclass.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__eqvclass__NextId0_29));
#line 268 "eqvclass.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__eqvclass__PartitionMap_27));
#line 268 "eqvclass.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__eqvclass__ElementMap_28));
#line 268 "eqvclass.m"
            }
#line 262 "eqvclass.m"
          }
#line 269 "eqvclass.m"
        else
#line 270 "eqvclass.m"
          {
#line 270 "eqvclass.m"
            MR_Word mercury__eqvclass__TypeCtorInfo_65_65;
#line 270 "eqvclass.m"
            MR_Word mercury__eqvclass__TypeCtorInfo_66_66;
#line 270 "eqvclass.m"
            MR_Word mercury__eqvclass__TypeInfo_67_67;
#line 270 "eqvclass.m"
            MR_Integer mercury__eqvclass__Id_19 = (MR_Integer) mercury__eqvclass__V_70_70;
#line 270 "eqvclass.m"
            MR_Word mercury__eqvclass__NextId_20;
#line 270 "eqvclass.m"
            MR_Word mercury__eqvclass__ElementMap1_21;
#line 270 "eqvclass.m"
            MR_Word mercury__eqvclass__V_22_22;
#line 270 "eqvclass.m"
            MR_Word mercury__eqvclass__V_23_23;
#line 270 "eqvclass.m"
            MR_Word mercury__eqvclass__V_24_24;
#line 270 "eqvclass.m"
            MR_Word mercury__eqvclass__PartitionMap0_30;
#line 270 "eqvclass.m"
            MR_Word mercury__eqvclass__Partition_31;
#line 270 "eqvclass.m"
            MR_Word mercury__eqvclass__PartitionMap_32;
#line 270 "eqvclass.m"
            MR_Word mercury__eqvclass__ElementMap_33;
#line 270 "eqvclass.m"
            MR_Integer mercury__eqvclass__V_5_93 = (mercury__eqvclass__Id_19 + (MR_Integer) 1);
#line 276 "eqvclass.m"
            MR_Word mercury__eqvclass__V_53_53;
#line 276 "eqvclass.m"
            MR_Word mercury__eqvclass__V_54_54;
#line 278 "eqvclass.m"
            MR_Word mercury__eqvclass__conv7_PartitionMap_32;

#line 9 "counter.opt"
            mercury__eqvclass__NextId_20 = (MR_Word) mercury__eqvclass__V_5_93;
#line 4390 "eqvclass.c"
            mercury__eqvclass__TypeCtorInfo_65_65 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 272 "eqvclass.m"
            {
#line 272 "eqvclass.m"
              mercury__map__det_insert_4_p_0(mercury__eqvclass__TypeInfo_for_T_55, mercury__eqvclass__TypeCtorInfo_65_65, mercury__eqvclass__ElementA_5, ((MR_Box) (mercury__eqvclass__Id_19)), mercury__eqvclass__ElementMap0_9, &mercury__eqvclass__ElementMap1_21);
            }
#line 275 "eqvclass.m"
            {
#line 275 "eqvclass.m"
              mercury__map__set_4_p_0(mercury__eqvclass__TypeInfo_for_T_55, mercury__eqvclass__TypeCtorInfo_65_65, mercury__eqvclass__ElementB_6, ((MR_Box) (mercury__eqvclass__Id_19)), mercury__eqvclass__ElementMap1_21, &mercury__eqvclass__ElementMap_33);
            }
#line 276 "eqvclass.m"
            mercury__eqvclass__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 0)));
#line 276 "eqvclass.m"
            mercury__eqvclass__PartitionMap0_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 1)));
#line 276 "eqvclass.m"
            mercury__eqvclass__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 2)));
#line 277 "eqvclass.m"
            mercury__eqvclass__V_24_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 277 "eqvclass.m"
            {
#line 277 "eqvclass.m"
              mercury__eqvclass__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 277 "eqvclass.m"
              MR_hl_field(MR_mktag(1), mercury__eqvclass__V_23_23, 0) = mercury__eqvclass__ElementB_6;
#line 277 "eqvclass.m"
              MR_hl_field(MR_mktag(1), mercury__eqvclass__V_23_23, 1) = ((MR_Box) (mercury__eqvclass__V_24_24));
#line 277 "eqvclass.m"
            }
#line 277 "eqvclass.m"
            {
#line 277 "eqvclass.m"
              mercury__eqvclass__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 277 "eqvclass.m"
              MR_hl_field(MR_mktag(1), mercury__eqvclass__V_22_22, 0) = mercury__eqvclass__ElementA_5;
#line 277 "eqvclass.m"
              MR_hl_field(MR_mktag(1), mercury__eqvclass__V_22_22, 1) = ((MR_Box) (mercury__eqvclass__V_23_23));
#line 277 "eqvclass.m"
            }
#line 277 "eqvclass.m"
            {
#line 277 "eqvclass.m"
              mercury__set__list_to_set_2_p_0(mercury__eqvclass__TypeInfo_for_T_55, mercury__eqvclass__V_22_22, &mercury__eqvclass__Partition_31);
            }
#line 4435 "eqvclass.c"
            mercury__eqvclass__TypeCtorInfo_66_66 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
#line 4437 "eqvclass.c"
            {
#line 4439 "eqvclass.c"
              mercury__eqvclass__TypeInfo_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4441 "eqvclass.c"
              MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_67_67, 0) = ((MR_Box) (mercury__eqvclass__TypeCtorInfo_66_66));
#line 4443 "eqvclass.c"
              MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_67_67, 1) = ((MR_Box) (mercury__eqvclass__TypeInfo_for_T_55));
#line 4445 "eqvclass.c"
            }
#line 278 "eqvclass.m"
            {
#line 278 "eqvclass.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mercury__eqvclass__TypeInfo_67_67, mercury__eqvclass__Id_19, ((MR_Box) (mercury__eqvclass__Partition_31)), (MR_Word) mercury__eqvclass__PartitionMap0_30, &mercury__eqvclass__conv7_PartitionMap_32);
            }
#line 278 "eqvclass.m"
            mercury__eqvclass__PartitionMap_32 = (MR_Word) mercury__eqvclass__conv7_PartitionMap_32;
#line 279 "eqvclass.m"
            {
#line 279 "eqvclass.m"
              MR_Word base;
#line 279 "eqvclass.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 279 "eqvclass.m"
              *mercury__eqvclass__EqvClass_8 = base;
#line 279 "eqvclass.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__eqvclass__NextId_20));
#line 279 "eqvclass.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__eqvclass__PartitionMap_32));
#line 279 "eqvclass.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__eqvclass__ElementMap_33));
#line 279 "eqvclass.m"
            }
#line 270 "eqvclass.m"
          }
#line 269 "eqvclass.m"
      }
#line 228 "eqvclass.m"
  }
#line 82 "eqvclass.m"
}

#line 81 "eqvclass.m"
MR_Word MR_CALL 
mercury__eqvclass__ensure_equivalence_3_f_0(
#line 81 "eqvclass.m"
  MR_Word mercury__eqvclass__TypeInfo_for_T_11,
#line 81 "eqvclass.m"
  MR_Word mercury__eqvclass__STATE_VARIABLE_EqvClass_0_8,
#line 81 "eqvclass.m"
  MR_Box mercury__eqvclass__X_6,
#line 81 "eqvclass.m"
  MR_Box mercury__eqvclass__Y_7)
#line 81 "eqvclass.m"
{
#line 226 "eqvclass.m"
  {
#line 226 "eqvclass.m"
    MR_bool mercury__eqvclass__succeeded;
#line 226 "eqvclass.m"
    MR_Word mercury__eqvclass__STATE_VARIABLE_EqvClass_9;

#line 226 "eqvclass.m"
    {
#line 226 "eqvclass.m"
      mercury__eqvclass__ensure_equivalence_4_p_0(mercury__eqvclass__TypeInfo_for_T_11, mercury__eqvclass__X_6, mercury__eqvclass__Y_7, mercury__eqvclass__STATE_VARIABLE_EqvClass_0_8, &mercury__eqvclass__STATE_VARIABLE_EqvClass_9);
    }
#line 226 "eqvclass.m"
    return mercury__eqvclass__STATE_VARIABLE_EqvClass_9;
#line 226 "eqvclass.m"
  }
#line 81 "eqvclass.m"
}

#line 76 "eqvclass.m"
void MR_CALL 
mercury__eqvclass__new_element_3_p_0(
#line 76 "eqvclass.m"
  MR_Word mercury__eqvclass__TypeInfo_for_T_15,
#line 76 "eqvclass.m"
  MR_Box mercury__eqvclass__Element_4,
#line 76 "eqvclass.m"
  MR_Word mercury__eqvclass__STATE_VARIABLE_EqvClass_0_9,
#line 76 "eqvclass.m"
  MR_Word * mercury__eqvclass__STATE_VARIABLE_EqvClass_10)
#line 76 "eqvclass.m"
{
#line 206 "eqvclass.m"
  {
#line 206 "eqvclass.m"
    MR_bool mercury__eqvclass__succeeded;
#line 206 "eqvclass.m"
    MR_Word mercury__eqvclass__ElementMap0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__STATE_VARIABLE_EqvClass_0_9, (MR_Integer) 2)));
#line 207 "eqvclass.m"
    MR_Word mercury__eqvclass__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__STATE_VARIABLE_EqvClass_0_9, (MR_Integer) 0)));
#line 207 "eqvclass.m"
    MR_Word mercury__eqvclass__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__STATE_VARIABLE_EqvClass_0_9, (MR_Integer) 1)));
#line 208 "eqvclass.m"
    MR_Word mercury__eqvclass__TypeCtorInfo_16_16 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 452 "map.opt"
    MR_Integer mercury__eqvclass___OldId_7;
#line 452 "map.opt"
    MR_Box mercury__eqvclass__conv0__OldId_7;

#line 452 "map.opt"
    {
#line 452 "map.opt"
      mercury__eqvclass__succeeded = mercury__tree234__search_3_p_0(mercury__eqvclass__TypeInfo_for_T_15, mercury__eqvclass__TypeCtorInfo_16_16, mercury__eqvclass__ElementMap0_6, mercury__eqvclass__Element_4, &mercury__eqvclass__conv0__OldId_7);
    }
#line 452 "map.opt"
    if (mercury__eqvclass__succeeded)
#line 452 "map.opt"
      {
#line 452 "map.opt"
        mercury__eqvclass___OldId_7 = ((MR_Integer) mercury__eqvclass__conv0__OldId_7);
#line 452 "map.opt"
        mercury__eqvclass__succeeded = MR_TRUE;
#line 452 "map.opt"
      }
#line 210 "eqvclass.m"
    if (mercury__eqvclass__succeeded)
#line 209 "eqvclass.m"
      {
#line 209 "eqvclass.m"
        {
#line 209 "eqvclass.m"
          mercury__require__error_1_p_0((MR_String) "new element is already in equivalence class");
#line 209 "eqvclass.m"
          return;
        }
#line 209 "eqvclass.m"
      }
#line 210 "eqvclass.m"
    else
#line 211 "eqvclass.m"
      {
#line 211 "eqvclass.m"
        MR_Integer mercury__eqvclass__V_8_8;

#line 211 "eqvclass.m"
        {
#line 211 "eqvclass.m"
          mercury__eqvclass__add_element_4_p_0(mercury__eqvclass__TypeInfo_for_T_15, mercury__eqvclass__Element_4, &mercury__eqvclass__V_8_8, mercury__eqvclass__STATE_VARIABLE_EqvClass_0_9, mercury__eqvclass__STATE_VARIABLE_EqvClass_10);
        }
#line 211 "eqvclass.m"
      }
#line 206 "eqvclass.m"
  }
#line 76 "eqvclass.m"
}

#line 75 "eqvclass.m"
MR_Word MR_CALL 
mercury__eqvclass__new_element_2_f_0(
#line 75 "eqvclass.m"
  MR_Word mercury__eqvclass__TypeInfo_for_T_9,
#line 75 "eqvclass.m"
  MR_Word mercury__eqvclass__STATE_VARIABLE_EqvClass_0_6,
#line 75 "eqvclass.m"
  MR_Box mercury__eqvclass__X_5)
#line 75 "eqvclass.m"
{
#line 206 "eqvclass.m"
  {
#line 206 "eqvclass.m"
    MR_bool mercury__eqvclass__succeeded;
#line 206 "eqvclass.m"
    MR_Word mercury__eqvclass__STATE_VARIABLE_EqvClass_7;
#line 206 "eqvclass.m"
    MR_Word mercury__eqvclass__ElementMap0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__STATE_VARIABLE_EqvClass_0_6, (MR_Integer) 2)));
#line 207 "eqvclass.m"
    MR_Word mercury__eqvclass__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__STATE_VARIABLE_EqvClass_0_6, (MR_Integer) 0)));
#line 207 "eqvclass.m"
    MR_Word mercury__eqvclass__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__STATE_VARIABLE_EqvClass_0_6, (MR_Integer) 1)));
#line 208 "eqvclass.m"
    MR_Word mercury__eqvclass__TypeCtorInfo_16_21 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 452 "map.opt"
    MR_Integer mercury__eqvclass___OldId_15;
#line 452 "map.opt"
    MR_Box mercury__eqvclass__conv0__OldId_15;

#line 452 "map.opt"
    {
#line 452 "map.opt"
      mercury__eqvclass__succeeded = mercury__tree234__search_3_p_0(mercury__eqvclass__TypeInfo_for_T_9, mercury__eqvclass__TypeCtorInfo_16_21, mercury__eqvclass__ElementMap0_14, mercury__eqvclass__X_5, &mercury__eqvclass__conv0__OldId_15);
    }
#line 452 "map.opt"
    if (mercury__eqvclass__succeeded)
#line 452 "map.opt"
      {
#line 452 "map.opt"
        mercury__eqvclass___OldId_15 = ((MR_Integer) mercury__eqvclass__conv0__OldId_15);
#line 452 "map.opt"
        mercury__eqvclass__succeeded = MR_TRUE;
#line 452 "map.opt"
      }
#line 210 "eqvclass.m"
    if (mercury__eqvclass__succeeded)
#line 209 "eqvclass.m"
      {
#line 209 "eqvclass.m"
        {
#line 209 "eqvclass.m"
          mercury__require__error_1_p_0((MR_String) "new element is already in equivalence class");
        }
#line 209 "eqvclass.m"
      }
#line 210 "eqvclass.m"
    else
#line 211 "eqvclass.m"
      {
#line 211 "eqvclass.m"
        MR_Integer mercury__eqvclass__V_16_16;

#line 211 "eqvclass.m"
        {
#line 211 "eqvclass.m"
          mercury__eqvclass__add_element_4_p_0(mercury__eqvclass__TypeInfo_for_T_9, mercury__eqvclass__X_5, &mercury__eqvclass__V_16_16, mercury__eqvclass__STATE_VARIABLE_EqvClass_0_6, &mercury__eqvclass__STATE_VARIABLE_EqvClass_7);
        }
#line 211 "eqvclass.m"
      }
#line 206 "eqvclass.m"
    return mercury__eqvclass__STATE_VARIABLE_EqvClass_7;
#line 206 "eqvclass.m"
  }
#line 75 "eqvclass.m"
}

#line 68 "eqvclass.m"
void MR_CALL 
mercury__eqvclass__ensure_element_3_p_0(
#line 68 "eqvclass.m"
  MR_Word mercury__eqvclass__TypeInfo_for_T_10,
#line 68 "eqvclass.m"
  MR_Box mercury__eqvclass__Element_4,
#line 68 "eqvclass.m"
  MR_Word mercury__eqvclass__STATE_VARIABLE_EqvClass_0_7,
#line 68 "eqvclass.m"
  MR_Word * mercury__eqvclass__STATE_VARIABLE_EqvClass_8)
#line 68 "eqvclass.m"
{
#line 195 "eqvclass.m"
  {
#line 195 "eqvclass.m"
    MR_bool mercury__eqvclass__succeeded;
#line 195 "eqvclass.m"
    MR_Word mercury__eqvclass__ElementMap_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__STATE_VARIABLE_EqvClass_0_7, (MR_Integer) 2)));
#line 196 "eqvclass.m"
    MR_Word mercury__eqvclass__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__STATE_VARIABLE_EqvClass_0_7, (MR_Integer) 0)));
#line 196 "eqvclass.m"
    MR_Word mercury__eqvclass__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__STATE_VARIABLE_EqvClass_0_7, (MR_Integer) 1)));
#line 197 "eqvclass.m"
    MR_Word mercury__eqvclass__TypeCtorInfo_16_21 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 452 "map.opt"
    MR_Integer mercury__eqvclass__OldId_17;
#line 452 "map.opt"
    MR_Box mercury__eqvclass__conv0_OldId_17;

#line 452 "map.opt"
    {
#line 452 "map.opt"
      mercury__eqvclass__succeeded = mercury__tree234__search_3_p_0(mercury__eqvclass__TypeInfo_for_T_10, mercury__eqvclass__TypeCtorInfo_16_21, mercury__eqvclass__ElementMap_16, mercury__eqvclass__Element_4, &mercury__eqvclass__conv0_OldId_17);
    }
#line 452 "map.opt"
    if (mercury__eqvclass__succeeded)
#line 452 "map.opt"
      {
#line 452 "map.opt"
        mercury__eqvclass__OldId_17 = ((MR_Integer) mercury__eqvclass__conv0_OldId_17);
#line 452 "map.opt"
        mercury__eqvclass__succeeded = MR_TRUE;
#line 452 "map.opt"
      }
#line 199 "eqvclass.m"
    if (mercury__eqvclass__succeeded)
#line 198 "eqvclass.m"
      *mercury__eqvclass__STATE_VARIABLE_EqvClass_8 = mercury__eqvclass__STATE_VARIABLE_EqvClass_0_7;
#line 199 "eqvclass.m"
    else
#line 200 "eqvclass.m"
      {
#line 200 "eqvclass.m"
        MR_Integer mercury__eqvclass__V_25_25;

#line 200 "eqvclass.m"
        {
#line 200 "eqvclass.m"
          mercury__eqvclass__add_element_4_p_0(mercury__eqvclass__TypeInfo_for_T_10, mercury__eqvclass__Element_4, &mercury__eqvclass__V_25_25, mercury__eqvclass__STATE_VARIABLE_EqvClass_0_7, mercury__eqvclass__STATE_VARIABLE_EqvClass_8);
        }
#line 200 "eqvclass.m"
      }
#line 195 "eqvclass.m"
  }
#line 68 "eqvclass.m"
}

#line 67 "eqvclass.m"
MR_Word MR_CALL 
mercury__eqvclass__ensure_element_2_f_0(
#line 67 "eqvclass.m"
  MR_Word mercury__eqvclass__TypeInfo_for_T_9,
#line 67 "eqvclass.m"
  MR_Word mercury__eqvclass__STATE_VARIABLE_EqvClass_0_6,
#line 67 "eqvclass.m"
  MR_Box mercury__eqvclass__X_5)
#line 67 "eqvclass.m"
{
#line 195 "eqvclass.m"
  {
#line 195 "eqvclass.m"
    MR_bool mercury__eqvclass__succeeded;
#line 195 "eqvclass.m"
    MR_Word mercury__eqvclass__STATE_VARIABLE_EqvClass_7;
#line 195 "eqvclass.m"
    MR_Word mercury__eqvclass__ElementMap_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__STATE_VARIABLE_EqvClass_0_6, (MR_Integer) 2)));
#line 196 "eqvclass.m"
    MR_Word mercury__eqvclass__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__STATE_VARIABLE_EqvClass_0_6, (MR_Integer) 0)));
#line 196 "eqvclass.m"
    MR_Word mercury__eqvclass__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__STATE_VARIABLE_EqvClass_0_6, (MR_Integer) 1)));
#line 197 "eqvclass.m"
    MR_Word mercury__eqvclass__TypeCtorInfo_16_26 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 452 "map.opt"
    MR_Integer mercury__eqvclass__OldId_22;
#line 452 "map.opt"
    MR_Box mercury__eqvclass__conv0_OldId_22;

#line 452 "map.opt"
    {
#line 452 "map.opt"
      mercury__eqvclass__succeeded = mercury__tree234__search_3_p_0(mercury__eqvclass__TypeInfo_for_T_9, mercury__eqvclass__TypeCtorInfo_16_26, mercury__eqvclass__ElementMap_21, mercury__eqvclass__X_5, &mercury__eqvclass__conv0_OldId_22);
    }
#line 452 "map.opt"
    if (mercury__eqvclass__succeeded)
#line 452 "map.opt"
      {
#line 452 "map.opt"
        mercury__eqvclass__OldId_22 = ((MR_Integer) mercury__eqvclass__conv0_OldId_22);
#line 452 "map.opt"
        mercury__eqvclass__succeeded = MR_TRUE;
#line 452 "map.opt"
      }
#line 199 "eqvclass.m"
    if (mercury__eqvclass__succeeded)
#line 198 "eqvclass.m"
      mercury__eqvclass__STATE_VARIABLE_EqvClass_7 = mercury__eqvclass__STATE_VARIABLE_EqvClass_0_6;
#line 199 "eqvclass.m"
    else
#line 200 "eqvclass.m"
      {
#line 200 "eqvclass.m"
        MR_Integer mercury__eqvclass__V_30_30;

#line 200 "eqvclass.m"
        {
#line 200 "eqvclass.m"
          mercury__eqvclass__add_element_4_p_0(mercury__eqvclass__TypeInfo_for_T_9, mercury__eqvclass__X_5, &mercury__eqvclass__V_30_30, mercury__eqvclass__STATE_VARIABLE_EqvClass_0_6, &mercury__eqvclass__STATE_VARIABLE_EqvClass_7);
        }
#line 200 "eqvclass.m"
      }
#line 195 "eqvclass.m"
    return mercury__eqvclass__STATE_VARIABLE_EqvClass_7;
#line 195 "eqvclass.m"
  }
#line 67 "eqvclass.m"
}

#line 60 "eqvclass.m"
void MR_CALL 
mercury__eqvclass__ensure_element_partition_id_4_p_0(
#line 60 "eqvclass.m"
  MR_Word mercury__eqvclass__TypeInfo_for_T_15,
#line 60 "eqvclass.m"
  MR_Box mercury__eqvclass__Element_5,
#line 60 "eqvclass.m"
  MR_Integer * mercury__eqvclass__Id_6,
#line 60 "eqvclass.m"
  MR_Word mercury__eqvclass__STATE_VARIABLE_EqvClass_0_10,
#line 60 "eqvclass.m"
  MR_Word * mercury__eqvclass__STATE_VARIABLE_EqvClass_11)
#line 60 "eqvclass.m"
{
#line 195 "eqvclass.m"
  {
#line 195 "eqvclass.m"
    MR_bool mercury__eqvclass__succeeded;
#line 195 "eqvclass.m"
    MR_Word mercury__eqvclass__ElementMap_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__STATE_VARIABLE_EqvClass_0_10, (MR_Integer) 2)));
#line 196 "eqvclass.m"
    MR_Word mercury__eqvclass__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__STATE_VARIABLE_EqvClass_0_10, (MR_Integer) 0)));
#line 196 "eqvclass.m"
    MR_Word mercury__eqvclass__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__STATE_VARIABLE_EqvClass_0_10, (MR_Integer) 1)));
#line 199 "eqvclass.m"
    MR_Integer mercury__eqvclass__OldId_9;
#line 197 "eqvclass.m"
    MR_Word mercury__eqvclass__TypeCtorInfo_16_16 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 452 "map.opt"
    MR_Box mercury__eqvclass__conv0_OldId_9;

#line 452 "map.opt"
    {
#line 452 "map.opt"
      mercury__eqvclass__succeeded = mercury__tree234__search_3_p_0(mercury__eqvclass__TypeInfo_for_T_15, mercury__eqvclass__TypeCtorInfo_16_16, mercury__eqvclass__ElementMap_8, mercury__eqvclass__Element_5, &mercury__eqvclass__conv0_OldId_9);
    }
#line 452 "map.opt"
    if (mercury__eqvclass__succeeded)
#line 452 "map.opt"
      {
#line 452 "map.opt"
        mercury__eqvclass__OldId_9 = ((MR_Integer) mercury__eqvclass__conv0_OldId_9);
#line 452 "map.opt"
        mercury__eqvclass__succeeded = MR_TRUE;
#line 452 "map.opt"
      }
#line 199 "eqvclass.m"
    if (mercury__eqvclass__succeeded)
#line 198 "eqvclass.m"
      {
#line 198 "eqvclass.m"
        *mercury__eqvclass__Id_6 = mercury__eqvclass__OldId_9;
#line 198 "eqvclass.m"
        *mercury__eqvclass__STATE_VARIABLE_EqvClass_11 = mercury__eqvclass__STATE_VARIABLE_EqvClass_0_10;
#line 198 "eqvclass.m"
      }
#line 199 "eqvclass.m"
    else
#line 200 "eqvclass.m"
      {
#line 200 "eqvclass.m"
        mercury__eqvclass__add_element_4_p_0(mercury__eqvclass__TypeInfo_for_T_15, mercury__eqvclass__Element_5, mercury__eqvclass__Id_6, mercury__eqvclass__STATE_VARIABLE_EqvClass_0_10, mercury__eqvclass__STATE_VARIABLE_EqvClass_11);
#line 200 "eqvclass.m"
        return;
      }
#line 195 "eqvclass.m"
  }
#line 60 "eqvclass.m"
}

#line 53 "eqvclass.m"
MR_bool MR_CALL 
mercury__eqvclass__partition_id_3_p_0(
#line 53 "eqvclass.m"
  MR_Word mercury__eqvclass__TypeInfo_for_T_10,
#line 53 "eqvclass.m"
  MR_Word mercury__eqvclass__EqvClass_4,
#line 53 "eqvclass.m"
  MR_Box mercury__eqvclass__Element_5,
#line 53 "eqvclass.m"
  MR_Integer * mercury__eqvclass__PartitionId_6)
#line 53 "eqvclass.m"
{
#line 185 "eqvclass.m"
  {
#line 185 "eqvclass.m"
    MR_bool mercury__eqvclass__succeeded;
#line 185 "eqvclass.m"
    MR_Word mercury__eqvclass__TypeCtorInfo_11_11 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 185 "eqvclass.m"
    MR_Word mercury__eqvclass__ElementMap_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass_4, (MR_Integer) 2)));
#line 186 "eqvclass.m"
    MR_Word mercury__eqvclass__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass_4, (MR_Integer) 0)));
#line 186 "eqvclass.m"
    MR_Word mercury__eqvclass__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass_4, (MR_Integer) 1)));
#line 452 "map.opt"
    MR_Box mercury__eqvclass__conv0_PartitionId_6;

#line 452 "map.opt"
    {
#line 452 "map.opt"
      mercury__eqvclass__succeeded = mercury__tree234__search_3_p_0(mercury__eqvclass__TypeInfo_for_T_10, mercury__eqvclass__TypeCtorInfo_11_11, mercury__eqvclass__ElementMap_7, mercury__eqvclass__Element_5, &mercury__eqvclass__conv0_PartitionId_6);
    }
#line 452 "map.opt"
    if (mercury__eqvclass__succeeded)
#line 452 "map.opt"
      {
#line 452 "map.opt"
        *mercury__eqvclass__PartitionId_6 = ((MR_Integer) mercury__eqvclass__conv0_PartitionId_6);
#line 452 "map.opt"
        mercury__eqvclass__succeeded = MR_TRUE;
#line 452 "map.opt"
      }
#line 185 "eqvclass.m"
    return mercury__eqvclass__succeeded;
#line 185 "eqvclass.m"
  }
#line 53 "eqvclass.m"
}

#line 36 "eqvclass.m"
MR_bool MR_CALL 
mercury__eqvclass__is_member_2_p_0(
#line 36 "eqvclass.m"
  MR_Word mercury__eqvclass__TypeInfo_for_T_9,
#line 36 "eqvclass.m"
  MR_Word mercury__eqvclass__EqvClass_3,
#line 36 "eqvclass.m"
  MR_Box mercury__eqvclass__Element_4)
#line 36 "eqvclass.m"
{
#line 181 "eqvclass.m"
  {
#line 181 "eqvclass.m"
    MR_bool mercury__eqvclass__succeeded;
#line 181 "eqvclass.m"
    MR_Word mercury__eqvclass__TypeCtorInfo_10_10 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 181 "eqvclass.m"
    MR_Word mercury__eqvclass__ElementMap_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass_3, (MR_Integer) 2)));
#line 182 "eqvclass.m"
    MR_Word mercury__eqvclass__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass_3, (MR_Integer) 0)));
#line 182 "eqvclass.m"
    MR_Word mercury__eqvclass__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass_3, (MR_Integer) 1)));
#line 452 "map.opt"
    MR_Integer mercury__eqvclass__V_6_6;
#line 452 "map.opt"
    MR_Box mercury__eqvclass__conv0_V_6_6;

#line 452 "map.opt"
    {
#line 452 "map.opt"
      mercury__eqvclass__succeeded = mercury__tree234__search_3_p_0(mercury__eqvclass__TypeInfo_for_T_9, mercury__eqvclass__TypeCtorInfo_10_10, mercury__eqvclass__ElementMap_5, mercury__eqvclass__Element_4, &mercury__eqvclass__conv0_V_6_6);
    }
#line 452 "map.opt"
    if (mercury__eqvclass__succeeded)
#line 452 "map.opt"
      {
#line 452 "map.opt"
        mercury__eqvclass__V_6_6 = ((MR_Integer) mercury__eqvclass__conv0_V_6_6);
#line 452 "map.opt"
        mercury__eqvclass__succeeded = MR_TRUE;
#line 452 "map.opt"
      }
#line 181 "eqvclass.m"
    return mercury__eqvclass__succeeded;
#line 181 "eqvclass.m"
  }
#line 36 "eqvclass.m"
}

#line 32 "eqvclass.m"
void MR_CALL 
mercury__eqvclass__init_1_p_0(
#line 32 "eqvclass.m"
  MR_Word mercury__eqvclass__TypeInfo_for_T_7,
#line 32 "eqvclass.m"
  MR_Word * mercury__eqvclass__EqvClass_2)
#line 32 "eqvclass.m"
{
#line 176 "eqvclass.m"
  {
#line 176 "eqvclass.m"
    MR_bool mercury__eqvclass__succeeded;
#line 176 "eqvclass.m"
    MR_Word mercury__eqvclass__PartitionMap_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 176 "eqvclass.m"
    MR_Word mercury__eqvclass__ElementMap_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 176 "eqvclass.m"
    MR_Word mercury__eqvclass__V_5_5 = (MR_Word) ((MR_Box) ((MR_Integer) 0));

#line 179 "eqvclass.m"
    *mercury__eqvclass__EqvClass_2 = (MR_Word) &mercury__eqvclass_scalar_common_1[1];
#line 176 "eqvclass.m"
  }
#line 32 "eqvclass.m"
}

#line 31 "eqvclass.m"
MR_Word MR_CALL 
mercury__eqvclass__init_0_f_0(
#line 31 "eqvclass.m"
  MR_Word mercury__eqvclass__TypeInfo_for_T_3)
#line 31 "eqvclass.m"
{
#line 176 "eqvclass.m"
  {
#line 176 "eqvclass.m"
    MR_bool mercury__eqvclass__succeeded;
#line 176 "eqvclass.m"
    MR_Word mercury__eqvclass__EqvClass_2 = (MR_Word) &mercury__eqvclass_scalar_common_1[1];
#line 176 "eqvclass.m"
    MR_Word mercury__eqvclass__PartitionMap_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 176 "eqvclass.m"
    MR_Word mercury__eqvclass__ElementMap_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 176 "eqvclass.m"
    MR_Word mercury__eqvclass__V_7_7 = (MR_Word) ((MR_Box) ((MR_Integer) 0));

#line 176 "eqvclass.m"
    return mercury__eqvclass__EqvClass_2;
#line 176 "eqvclass.m"
  }
#line 31 "eqvclass.m"
}

void mercury__eqvclass__init(void)
{
}

void mercury__eqvclass__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__eqvclass__eqvclass__type_ctor_info_eqvclass_1);
	MR_register_type_ctor_info(&mercury__eqvclass__eqvclass__type_ctor_info_partition_id_0);
}

void mercury__eqvclass__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module eqvclass. */
