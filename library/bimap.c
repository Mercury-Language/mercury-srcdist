/*
** Automatically generated from `bimap.m'
** by the Mercury compiler,
** version rotd-2015-03-24
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


/* :- module bimap. */
/* :- implementation. */

/*
INIT mercury__bimap__init
ENDINIT
*/

#include "bimap.mih"


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




#line 94 "bimap.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__bimap__tree234__pti_tree234_2__pseudo_1__pseudo_2;

#line 97 "bimap.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__bimap__tree234__pti_tree234_2__pseudo_2__pseudo_1;

#line 100 "bimap.c"
static const MR_PseudoTypeInfo mercury__bimap__bimap__field_types_bimap_2_0[2];

#line 103 "bimap.c"
static const MR_DuFunctorDesc mercury__bimap__bimap__du_functor_desc_bimap_2_0;

#line 106 "bimap.c"
static const MR_DuFunctorDescPtr mercury__bimap__bimap__du_stag_ordered_bimap_2_0[1];

#line 109 "bimap.c"
static const MR_DuPtagLayout mercury__bimap__bimap__du_ptag_ordered_bimap_2[1];

#line 112 "bimap.c"
static const MR_DuFunctorDescPtr mercury__bimap__bimap__du_name_ordered_bimap_2[1];

#line 115 "bimap.c"
static const MR_Integer mercury__bimap__bimap__functor_number_map_bimap_2[1];

#line 118 "bimap.c"
static MR_bool MR_CALL 
mercury__bimap____Unify____bimap_2_0_10001(
#line 121 "bimap.c"
  MR_Box mercury__bimap__wrapper_arg_1,
#line 123 "bimap.c"
  MR_Box mercury__bimap__wrapper_arg_2,
#line 125 "bimap.c"
  MR_Box mercury__bimap__wrapper_arg_3,
#line 127 "bimap.c"
  MR_Box mercury__bimap__wrapper_arg_4);

#line 130 "bimap.c"
static void MR_CALL 
mercury__bimap____Compare____bimap_2_0_10001(
#line 133 "bimap.c"
  MR_Box mercury__bimap__wrapper_arg_1,
#line 135 "bimap.c"
  MR_Box mercury__bimap__wrapper_arg_2,
#line 137 "bimap.c"
  MR_Box * mercury__bimap__wrapper_arg_3,
#line 139 "bimap.c"
  MR_Box mercury__bimap__wrapper_arg_4,
#line 141 "bimap.c"
  MR_Box mercury__bimap__wrapper_arg_5);

#line 41 "tree234.int"
static void MR_CALL 
mercury__bimap__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(
#line 41 "tree234.int"
  MR_Word mercury__bimap__V_53_53,
#line 41 "tree234.int"
  MR_Word mercury__bimap__V_54_54,
#line 41 "tree234.int"
  MR_Word mercury__bimap__V_55_55,
#line 41 "tree234.int"
  MR_Word mercury__bimap__V_56_56,
#line 41 "tree234.int"
  MR_Word mercury__bimap__HeadVar__2_2,
#line 41 "tree234.int"
  MR_Box mercury__bimap__HeadVar__3_3,
#line 41 "tree234.int"
  MR_Box * mercury__bimap__HeadVar__4_4);

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__bimap__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 212 "map.opt"
static void MR_CALL 
mercury__bimap__IntroducedFrom__pred__foldl__212__1_8_p_0(
#line 212 "map.opt"
  MR_Word mercury__bimap__TypeInfo_for_K_29,
#line 212 "map.opt"
  MR_Word mercury__bimap__TypeInfo_for_V_30,
#line 212 "map.opt"
  MR_Word mercury__bimap__TypeInfo_for_A_31,
#line 212 "map.opt"
  MR_Word mercury__bimap__F_5_5,
#line 212 "map.opt"
  MR_Box mercury__bimap__HeadVar__5_21,
#line 212 "map.opt"
  MR_Box mercury__bimap__HeadVar__6_22,
#line 212 "map.opt"
  MR_Box mercury__bimap__HeadVar__7_23,
#line 212 "map.opt"
  MR_Box * mercury__bimap__HeadVar__8_24);


static /* final */ const MR_Box mercury__bimap_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__bimap_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__bimap_scalar_common_3[2][5];

static /* final */ const MR_Box mercury__bimap_scalar_common_4[3][2];




static /* final */ const MR_Box mercury__bimap_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__bimap_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__bimap_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__bimap_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__bimap_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__bimap_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__bimap_scalar_common_4[3][2] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "version_array.mh"
#include "version_array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "exception.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "dir.mh"
#include "dir.mh"
#include "table_builtin.mh"
#include "table_builtin.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "benchmarking.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "dir.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"
#include "rtti_implementation.mh"
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "time.mh"
#include "time.mh"
#include "table_builtin.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "construct.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "time.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"
#include "stm_builtin.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "store.mh"
#include "store.mh"
#include "store.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "bitmap.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"
#include "char.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "float.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"
#include "math.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "int.mh"
#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "pretty_printer.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "version_array.mh"
#include "version_array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "version_array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"
#include "type_desc.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "builtin.mh"
#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "private_builtin.mh"
#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "dir.mh"
#include "dir.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "table_builtin.mh"
#include "table_builtin.mh"
#include "time.mh"
#include "time.mh"
#include "version_array.mh"
#include "version_array.mh"



#line 568 "bimap.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__bimap__tree234__pti_tree234_2__pseudo_1__pseudo_2 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 577 "bimap.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__bimap__tree234__pti_tree234_2__pseudo_2__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 2,
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 586 "bimap.c"
static const MR_PseudoTypeInfo mercury__bimap__bimap__field_types_bimap_2_0[2] = {
  (MR_PseudoTypeInfo) &mercury__bimap__tree234__pti_tree234_2__pseudo_1__pseudo_2,
  (MR_PseudoTypeInfo) &mercury__bimap__tree234__pti_tree234_2__pseudo_2__pseudo_1
};

#line 592 "bimap.c"
static const MR_DuFunctorDesc mercury__bimap__bimap__du_functor_desc_bimap_2_0 = {
  (MR_String) "bimap",
  (MR_Integer) 2,
  (MR_Integer) 3,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__bimap__bimap__field_types_bimap_2_0,
  NULL,
  NULL,
  NULL
};

#line 607 "bimap.c"
static const MR_DuFunctorDescPtr mercury__bimap__bimap__du_stag_ordered_bimap_2_0[1] = {
  &mercury__bimap__bimap__du_functor_desc_bimap_2_0
};

#line 612 "bimap.c"
static const MR_DuPtagLayout mercury__bimap__bimap__du_ptag_ordered_bimap_2[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__bimap__bimap__du_stag_ordered_bimap_2_0
  }
};

#line 621 "bimap.c"
static const MR_DuFunctorDescPtr mercury__bimap__bimap__du_name_ordered_bimap_2[1] = {
  &mercury__bimap__bimap__du_functor_desc_bimap_2_0
};

#line 626 "bimap.c"
static const MR_Integer mercury__bimap__bimap__functor_number_map_bimap_2[1] = {
  (MR_Integer) 0
};

#line 631 "bimap.c"
const MR_TypeCtorInfo_Struct mercury__bimap__bimap__type_ctor_info_bimap_2 = {
  (MR_Integer) 2,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__bimap____Unify____bimap_2_0_10001)),
  ((MR_Box) (mercury__bimap____Compare____bimap_2_0_10001)),
  (MR_String) "bimap",
  (MR_String) "bimap",
  {     mercury__bimap__bimap__du_name_ordered_bimap_2 },
  {     mercury__bimap__bimap__du_ptag_ordered_bimap_2 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__bimap__bimap__functor_number_map_bimap_2
};

#line 648 "bimap.c"
static MR_bool MR_CALL 
mercury__bimap____Unify____bimap_2_0_10001(
#line 651 "bimap.c"
  MR_Box mercury__bimap__wrapper_arg_1,
#line 653 "bimap.c"
  MR_Box mercury__bimap__wrapper_arg_2,
#line 655 "bimap.c"
  MR_Box mercury__bimap__wrapper_arg_3,
#line 657 "bimap.c"
  MR_Box mercury__bimap__wrapper_arg_4)
#line 659 "bimap.c"
{
#line 661 "bimap.c"
  {
#line 663 "bimap.c"
    MR_bool mercury__bimap__succeeded;

#line 666 "bimap.c"
    {
#line 668 "bimap.c"
      mercury__bimap__succeeded = mercury__bimap____Unify____bimap_2_0(((MR_Word) mercury__bimap__wrapper_arg_1), ((MR_Word) mercury__bimap__wrapper_arg_2), ((MR_Word) mercury__bimap__wrapper_arg_3), ((MR_Word) mercury__bimap__wrapper_arg_4));
    }
#line 671 "bimap.c"
    return mercury__bimap__succeeded;
#line 673 "bimap.c"
  }
#line 675 "bimap.c"
}

#line 678 "bimap.c"
static void MR_CALL 
mercury__bimap____Compare____bimap_2_0_10001(
#line 681 "bimap.c"
  MR_Box mercury__bimap__wrapper_arg_1,
#line 683 "bimap.c"
  MR_Box mercury__bimap__wrapper_arg_2,
#line 685 "bimap.c"
  MR_Box * mercury__bimap__wrapper_arg_3,
#line 687 "bimap.c"
  MR_Box mercury__bimap__wrapper_arg_4,
#line 689 "bimap.c"
  MR_Box mercury__bimap__wrapper_arg_5)
#line 691 "bimap.c"
{
#line 693 "bimap.c"
  {
#line 695 "bimap.c"
    MR_Word mercury__bimap__conv0_HeadVar__1_1;

#line 698 "bimap.c"
    {
#line 700 "bimap.c"
      mercury__bimap____Compare____bimap_2_0(((MR_Word) mercury__bimap__wrapper_arg_1), ((MR_Word) mercury__bimap__wrapper_arg_2), &mercury__bimap__conv0_HeadVar__1_1, ((MR_Word) mercury__bimap__wrapper_arg_4), ((MR_Word) mercury__bimap__wrapper_arg_5));
    }
#line 703 "bimap.c"
    *mercury__bimap__wrapper_arg_3 = ((MR_Box) (mercury__bimap__conv0_HeadVar__1_1));
#line 705 "bimap.c"
  }
#line 707 "bimap.c"
}

#line 41 "tree234.int"
static void MR_CALL 
mercury__bimap__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(
#line 41 "tree234.int"
  MR_Word mercury__bimap__V_53_53,
#line 41 "tree234.int"
  MR_Word mercury__bimap__V_54_54,
#line 41 "tree234.int"
  MR_Word mercury__bimap__V_55_55,
#line 41 "tree234.int"
  MR_Word mercury__bimap__V_56_56,
#line 41 "tree234.int"
  MR_Word mercury__bimap__HeadVar__2_2,
#line 41 "tree234.int"
  MR_Box mercury__bimap__HeadVar__3_3,
#line 41 "tree234.int"
  MR_Box * mercury__bimap__HeadVar__4_4)
#line 41 "tree234.int"
{
#line 104 "tree234.opt"
  while (MR_TRUE)
#line 104 "tree234.opt"
    {
#line 104 "tree234.opt"
      /* tailcall optimized into a loop */
#line 104 "tree234.opt"
      {
#line 104 "tree234.opt"
        MR_bool mercury__bimap__succeeded;

#line 104 "tree234.opt"
        if ((mercury__bimap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 104 "tree234.opt"
          *mercury__bimap__HeadVar__4_4 = mercury__bimap__HeadVar__3_3;
#line 104 "tree234.opt"
        else
#line 104 "tree234.opt"
        if (((MR_tag((MR_Word) mercury__bimap__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3))))
#line 116 "tree234.opt"
          {
#line 116 "tree234.opt"
            MR_Box mercury__bimap__K0_37_32 = (MR_hl_field(MR_mktag(3), mercury__bimap__HeadVar__2_2, (MR_Integer) 0));
#line 116 "tree234.opt"
            MR_Box mercury__bimap__V0_38_33 = (MR_hl_field(MR_mktag(3), mercury__bimap__HeadVar__2_2, (MR_Integer) 1));
#line 116 "tree234.opt"
            MR_Box mercury__bimap__K1_39_34 = (MR_hl_field(MR_mktag(3), mercury__bimap__HeadVar__2_2, (MR_Integer) 2));
#line 116 "tree234.opt"
            MR_Box mercury__bimap__V1_40_35 = (MR_hl_field(MR_mktag(3), mercury__bimap__HeadVar__2_2, (MR_Integer) 3));
#line 116 "tree234.opt"
            MR_Box mercury__bimap__K2_41_36 = (MR_hl_field(MR_mktag(3), mercury__bimap__HeadVar__2_2, (MR_Integer) 4));
#line 116 "tree234.opt"
            MR_Box mercury__bimap__V2_42_37 = (MR_hl_field(MR_mktag(3), mercury__bimap__HeadVar__2_2, (MR_Integer) 5));
#line 116 "tree234.opt"
            MR_Word mercury__bimap__T0_43_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__bimap__HeadVar__2_2, (MR_Integer) 6)));
#line 116 "tree234.opt"
            MR_Word mercury__bimap__T1_44_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__bimap__HeadVar__2_2, (MR_Integer) 7)));
#line 116 "tree234.opt"
            MR_Word mercury__bimap__T2_45_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__bimap__HeadVar__2_2, (MR_Integer) 8)));
#line 116 "tree234.opt"
            MR_Word mercury__bimap__T3_46_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__bimap__HeadVar__2_2, (MR_Integer) 9)));
#line 116 "tree234.opt"
            MR_Box mercury__bimap__STATE_VARIABLE_A_50_50_44;
#line 116 "tree234.opt"
            MR_Box mercury__bimap__STATE_VARIABLE_A_51_51_45;
#line 116 "tree234.opt"
            MR_Box mercury__bimap__STATE_VARIABLE_A_52_52_46;
#line 116 "tree234.opt"
            MR_Box mercury__bimap__STATE_VARIABLE_A_53_53_47;
#line 116 "tree234.opt"
            MR_Box mercury__bimap__STATE_VARIABLE_A_54_54_48;
#line 116 "tree234.opt"
            MR_Box mercury__bimap__STATE_VARIABLE_A_55_55_49;
#line 212 "map.opt"
            MR_Box MR_CALL (* mercury__bimap__func_0)(MR_Box, MR_Box, MR_Box, MR_Box);

#line 117 "tree234.opt"
            {
#line 117 "tree234.opt"
              mercury__bimap__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(mercury__bimap__V_53_53, mercury__bimap__V_54_54, mercury__bimap__V_55_55, mercury__bimap__V_56_56, mercury__bimap__T0_43_38, mercury__bimap__HeadVar__3_3, &mercury__bimap__STATE_VARIABLE_A_50_50_44);
            }
#line 212 "map.opt"
            mercury__bimap__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__bimap__V_56_56, (MR_Integer) 1)));
#line 212 "map.opt"
            {
#line 212 "map.opt"
              mercury__bimap__STATE_VARIABLE_A_51_51_45 = mercury__bimap__func_0(((MR_Box) mercury__bimap__V_56_56), mercury__bimap__K0_37_32, mercury__bimap__V0_38_33, mercury__bimap__STATE_VARIABLE_A_50_50_44);
            }
#line 119 "tree234.opt"
            {
#line 119 "tree234.opt"
              mercury__bimap__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(mercury__bimap__V_53_53, mercury__bimap__V_54_54, mercury__bimap__V_55_55, mercury__bimap__V_56_56, mercury__bimap__T1_44_39, mercury__bimap__STATE_VARIABLE_A_51_51_45, &mercury__bimap__STATE_VARIABLE_A_52_52_46);
            }
#line 120 "tree234.opt"
            {
#line 120 "tree234.opt"
              mercury__bimap__IntroducedFrom__pred__foldl__212__1_8_p_0(mercury__bimap__V_53_53, mercury__bimap__V_54_54, mercury__bimap__V_55_55, mercury__bimap__V_56_56, mercury__bimap__K1_39_34, mercury__bimap__V1_40_35, mercury__bimap__STATE_VARIABLE_A_52_52_46, &mercury__bimap__STATE_VARIABLE_A_53_53_47);
            }
#line 121 "tree234.opt"
            {
#line 121 "tree234.opt"
              mercury__bimap__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(mercury__bimap__V_53_53, mercury__bimap__V_54_54, mercury__bimap__V_55_55, mercury__bimap__V_56_56, mercury__bimap__T2_45_40, mercury__bimap__STATE_VARIABLE_A_53_53_47, &mercury__bimap__STATE_VARIABLE_A_54_54_48);
            }
#line 122 "tree234.opt"
            {
#line 122 "tree234.opt"
              mercury__bimap__IntroducedFrom__pred__foldl__212__1_8_p_0(mercury__bimap__V_53_53, mercury__bimap__V_54_54, mercury__bimap__V_55_55, mercury__bimap__V_56_56, mercury__bimap__K2_41_36, mercury__bimap__V2_42_37, mercury__bimap__STATE_VARIABLE_A_54_54_48, &mercury__bimap__STATE_VARIABLE_A_55_55_49);
            }
#line 123 "tree234.opt"
            /* direct tailcall eliminated */
#line 123 "tree234.opt"
            {
#line 123 "tree234.opt"
              MR_Word mercury__bimap__HeadVar__2__tmp_copy_2 = mercury__bimap__T3_46_41;
#line 123 "tree234.opt"
              MR_Box mercury__bimap__HeadVar__3__tmp_copy_3 = mercury__bimap__STATE_VARIABLE_A_55_55_49;

#line 123 "tree234.opt"
              mercury__bimap__HeadVar__3_3 = mercury__bimap__HeadVar__3__tmp_copy_3;
#line 123 "tree234.opt"
              mercury__bimap__HeadVar__2_2 = mercury__bimap__HeadVar__2__tmp_copy_2;
#line 123 "tree234.opt"
            }
#line 123 "tree234.opt"
            continue;
#line 116 "tree234.opt"
          }
#line 104 "tree234.opt"
        else
#line 104 "tree234.opt"
        if (((MR_tag((MR_Word) mercury__bimap__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 110 "tree234.opt"
          {
#line 110 "tree234.opt"
            MR_Box mercury__bimap__K0_21_18 = (MR_hl_field(MR_mktag(2), mercury__bimap__HeadVar__2_2, (MR_Integer) 0));
#line 110 "tree234.opt"
            MR_Box mercury__bimap__V0_22_19 = (MR_hl_field(MR_mktag(2), mercury__bimap__HeadVar__2_2, (MR_Integer) 1));
#line 110 "tree234.opt"
            MR_Box mercury__bimap__K1_23_20 = (MR_hl_field(MR_mktag(2), mercury__bimap__HeadVar__2_2, (MR_Integer) 2));
#line 110 "tree234.opt"
            MR_Box mercury__bimap__V1_24_21 = (MR_hl_field(MR_mktag(2), mercury__bimap__HeadVar__2_2, (MR_Integer) 3));
#line 110 "tree234.opt"
            MR_Word mercury__bimap__T0_25_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__bimap__HeadVar__2_2, (MR_Integer) 4)));
#line 110 "tree234.opt"
            MR_Word mercury__bimap__T1_26_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__bimap__HeadVar__2_2, (MR_Integer) 5)));
#line 110 "tree234.opt"
            MR_Word mercury__bimap__T2_27_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__bimap__HeadVar__2_2, (MR_Integer) 6)));
#line 110 "tree234.opt"
            MR_Box mercury__bimap__STATE_VARIABLE_A_31_31_27;
#line 110 "tree234.opt"
            MR_Box mercury__bimap__STATE_VARIABLE_A_32_32_28;
#line 110 "tree234.opt"
            MR_Box mercury__bimap__STATE_VARIABLE_A_33_33_29;
#line 110 "tree234.opt"
            MR_Box mercury__bimap__STATE_VARIABLE_A_34_34_30;

#line 111 "tree234.opt"
            {
#line 111 "tree234.opt"
              mercury__bimap__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(mercury__bimap__V_53_53, mercury__bimap__V_54_54, mercury__bimap__V_55_55, mercury__bimap__V_56_56, mercury__bimap__T0_25_22, mercury__bimap__HeadVar__3_3, &mercury__bimap__STATE_VARIABLE_A_31_31_27);
            }
#line 112 "tree234.opt"
            {
#line 112 "tree234.opt"
              mercury__bimap__IntroducedFrom__pred__foldl__212__1_8_p_0(mercury__bimap__V_53_53, mercury__bimap__V_54_54, mercury__bimap__V_55_55, mercury__bimap__V_56_56, mercury__bimap__K0_21_18, mercury__bimap__V0_22_19, mercury__bimap__STATE_VARIABLE_A_31_31_27, &mercury__bimap__STATE_VARIABLE_A_32_32_28);
            }
#line 113 "tree234.opt"
            {
#line 113 "tree234.opt"
              mercury__bimap__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(mercury__bimap__V_53_53, mercury__bimap__V_54_54, mercury__bimap__V_55_55, mercury__bimap__V_56_56, mercury__bimap__T1_26_23, mercury__bimap__STATE_VARIABLE_A_32_32_28, &mercury__bimap__STATE_VARIABLE_A_33_33_29);
            }
#line 114 "tree234.opt"
            {
#line 114 "tree234.opt"
              mercury__bimap__IntroducedFrom__pred__foldl__212__1_8_p_0(mercury__bimap__V_53_53, mercury__bimap__V_54_54, mercury__bimap__V_55_55, mercury__bimap__V_56_56, mercury__bimap__K1_23_20, mercury__bimap__V1_24_21, mercury__bimap__STATE_VARIABLE_A_33_33_29, &mercury__bimap__STATE_VARIABLE_A_34_34_30);
            }
#line 115 "tree234.opt"
            /* direct tailcall eliminated */
#line 115 "tree234.opt"
            {
#line 115 "tree234.opt"
              MR_Word mercury__bimap__HeadVar__2__tmp_copy_2 = mercury__bimap__T2_27_24;
#line 115 "tree234.opt"
              MR_Box mercury__bimap__HeadVar__3__tmp_copy_3 = mercury__bimap__STATE_VARIABLE_A_34_34_30;

#line 115 "tree234.opt"
              mercury__bimap__HeadVar__3_3 = mercury__bimap__HeadVar__3__tmp_copy_3;
#line 115 "tree234.opt"
              mercury__bimap__HeadVar__2_2 = mercury__bimap__HeadVar__2__tmp_copy_2;
#line 115 "tree234.opt"
            }
#line 115 "tree234.opt"
            continue;
#line 110 "tree234.opt"
          }
#line 104 "tree234.opt"
        else
#line 106 "tree234.opt"
          {
#line 106 "tree234.opt"
            MR_Box mercury__bimap__K_10_9 = (MR_hl_field(MR_mktag(1), mercury__bimap__HeadVar__2_2, (MR_Integer) 0));
#line 106 "tree234.opt"
            MR_Box mercury__bimap__V_11_10 = (MR_hl_field(MR_mktag(1), mercury__bimap__HeadVar__2_2, (MR_Integer) 1));
#line 106 "tree234.opt"
            MR_Word mercury__bimap__T0_12_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bimap__HeadVar__2_2, (MR_Integer) 2)));
#line 106 "tree234.opt"
            MR_Word mercury__bimap__T1_13_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bimap__HeadVar__2_2, (MR_Integer) 3)));
#line 106 "tree234.opt"
            MR_Box mercury__bimap__STATE_VARIABLE_A_17_17_15;
#line 106 "tree234.opt"
            MR_Box mercury__bimap__STATE_VARIABLE_A_18_18_16;

#line 107 "tree234.opt"
            {
#line 107 "tree234.opt"
              mercury__bimap__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(mercury__bimap__V_53_53, mercury__bimap__V_54_54, mercury__bimap__V_55_55, mercury__bimap__V_56_56, mercury__bimap__T0_12_11, mercury__bimap__HeadVar__3_3, &mercury__bimap__STATE_VARIABLE_A_17_17_15);
            }
#line 108 "tree234.opt"
            {
#line 108 "tree234.opt"
              mercury__bimap__IntroducedFrom__pred__foldl__212__1_8_p_0(mercury__bimap__V_53_53, mercury__bimap__V_54_54, mercury__bimap__V_55_55, mercury__bimap__V_56_56, mercury__bimap__K_10_9, mercury__bimap__V_11_10, mercury__bimap__STATE_VARIABLE_A_17_17_15, &mercury__bimap__STATE_VARIABLE_A_18_18_16);
            }
#line 109 "tree234.opt"
            /* direct tailcall eliminated */
#line 109 "tree234.opt"
            {
#line 109 "tree234.opt"
              MR_Word mercury__bimap__HeadVar__2__tmp_copy_2 = mercury__bimap__T1_13_12;
#line 109 "tree234.opt"
              MR_Box mercury__bimap__HeadVar__3__tmp_copy_3 = mercury__bimap__STATE_VARIABLE_A_18_18_16;

#line 109 "tree234.opt"
              mercury__bimap__HeadVar__3_3 = mercury__bimap__HeadVar__3__tmp_copy_3;
#line 109 "tree234.opt"
              mercury__bimap__HeadVar__2_2 = mercury__bimap__HeadVar__2__tmp_copy_2;
#line 109 "tree234.opt"
            }
#line 109 "tree234.opt"
            continue;
#line 106 "tree234.opt"
          }
#line 104 "tree234.opt"
      }
#line 104 "tree234.opt"
      break;
#line 104 "tree234.opt"
    }
#line 41 "tree234.int"
}

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__bimap__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 13 "ops.opt"
{
#line 38 "ops.opt"
  {
#line 38 "ops.opt"
    MR_bool mercury__bimap__succeeded;

#line 38 "ops.opt"
    return (MR_Integer) 1200;
#line 38 "ops.opt"
  }
#line 13 "ops.opt"
}

#line 212 "map.opt"
static void MR_CALL 
mercury__bimap__IntroducedFrom__pred__foldl__212__1_8_p_0(
#line 212 "map.opt"
  MR_Word mercury__bimap__TypeInfo_for_K_29,
#line 212 "map.opt"
  MR_Word mercury__bimap__TypeInfo_for_V_30,
#line 212 "map.opt"
  MR_Word mercury__bimap__TypeInfo_for_A_31,
#line 212 "map.opt"
  MR_Word mercury__bimap__F_5_5,
#line 212 "map.opt"
  MR_Box mercury__bimap__HeadVar__5_21,
#line 212 "map.opt"
  MR_Box mercury__bimap__HeadVar__6_22,
#line 212 "map.opt"
  MR_Box mercury__bimap__HeadVar__7_23,
#line 212 "map.opt"
  MR_Box * mercury__bimap__HeadVar__8_24)
#line 212 "map.opt"
{
#line 212 "map.opt"
  {
#line 212 "map.opt"
    MR_bool mercury__bimap__succeeded;
#line 212 "map.opt"
    MR_Box MR_CALL (* mercury__bimap__func_0)(MR_Box, MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__bimap__F_5_5, (MR_Integer) 1)));

#line 212 "map.opt"
    {
#line 212 "map.opt"
      *mercury__bimap__HeadVar__8_24 = mercury__bimap__func_0(((MR_Box) mercury__bimap__F_5_5), mercury__bimap__HeadVar__5_21, mercury__bimap__HeadVar__6_22, mercury__bimap__HeadVar__7_23);
    }
#line 212 "map.opt"
  }
#line 212 "map.opt"
}

#line 349 "bimap.m"
void MR_CALL 
mercury__bimap____Compare____bimap_2_0(
#line 349 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_11,
#line 349 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_12,
#line 349 "bimap.m"
  MR_Word * mercury__bimap__HeadVar__1_1,
#line 349 "bimap.m"
  MR_Word mercury__bimap__HeadVar__2_2,
#line 349 "bimap.m"
  MR_Word mercury__bimap__HeadVar__3_3)
#line 349 "bimap.m"
{
#line 349 "bimap.m"
  {
#line 349 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 349 "bimap.m"
    MR_Integer mercury__bimap__CastX_9 = (MR_Integer) mercury__bimap__HeadVar__2_2;
#line 349 "bimap.m"
    MR_Integer mercury__bimap__CastY_10 = (MR_Integer) mercury__bimap__HeadVar__3_3;

#line 349 "bimap.m"
    mercury__bimap__succeeded = (mercury__bimap__CastX_9 == mercury__bimap__CastY_10);
#line 349 "bimap.m"
    if (mercury__bimap__succeeded)
#line 1042 "bimap.c"
      *mercury__bimap__HeadVar__1_1 = (MR_Integer) 0;
#line 349 "bimap.m"
    else
#line 349 "bimap.m"
      {
#line 349 "bimap.m"
        MR_Word mercury__bimap__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 0)));
#line 349 "bimap.m"
        MR_Word mercury__bimap__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 1)));
#line 349 "bimap.m"
        MR_Word mercury__bimap__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__3_3, (MR_Integer) 0)));
#line 349 "bimap.m"
        MR_Word mercury__bimap__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__3_3, (MR_Integer) 1)));
#line 349 "bimap.m"
        MR_Word mercury__bimap__V_8_8;

#line 349 "bimap.m"
        {
#line 349 "bimap.m"
          mercury__tree234____Compare____tree234_2_0(mercury__bimap__TypeInfo_for_K_11, mercury__bimap__TypeInfo_for_V_12, &mercury__bimap__V_8_8, mercury__bimap__V_4_4, mercury__bimap__V_6_6);
        }
#line 1064 "bimap.c"
        mercury__bimap__succeeded = (mercury__bimap__V_8_8 == (MR_Integer) 0);
#line 349 "bimap.m"
        mercury__bimap__succeeded = !(mercury__bimap__succeeded);
#line 349 "bimap.m"
        if (mercury__bimap__succeeded)
#line 349 "bimap.m"
          *mercury__bimap__HeadVar__1_1 = mercury__bimap__V_8_8;
#line 349 "bimap.m"
        else
#line 349 "bimap.m"
          {
#line 349 "bimap.m"
            mercury__tree234____Compare____tree234_2_0(mercury__bimap__TypeInfo_for_V_12, mercury__bimap__TypeInfo_for_K_11, mercury__bimap__HeadVar__1_1, mercury__bimap__V_5_5, mercury__bimap__V_7_7);
#line 349 "bimap.m"
            return;
          }
#line 349 "bimap.m"
      }
#line 349 "bimap.m"
  }
#line 349 "bimap.m"
}

#line 349 "bimap.m"
MR_bool MR_CALL 
mercury__bimap____Unify____bimap_2_0(
#line 349 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_9,
#line 349 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_10,
#line 349 "bimap.m"
  MR_Word mercury__bimap__HeadVar__1_1,
#line 349 "bimap.m"
  MR_Word mercury__bimap__HeadVar__2_2)
#line 349 "bimap.m"
{
#line 349 "bimap.m"
  {
#line 349 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 349 "bimap.m"
    MR_Integer mercury__bimap__CastX_7 = (MR_Integer) mercury__bimap__HeadVar__1_1;
#line 349 "bimap.m"
    MR_Integer mercury__bimap__CastY_8 = (MR_Integer) mercury__bimap__HeadVar__2_2;

#line 349 "bimap.m"
    mercury__bimap__succeeded = (mercury__bimap__CastX_7 == mercury__bimap__CastY_8);
#line 349 "bimap.m"
    if (mercury__bimap__succeeded)
#line 349 "bimap.m"
      mercury__bimap__succeeded = MR_TRUE;
#line 349 "bimap.m"
    else
#line 349 "bimap.m"
      {
#line 349 "bimap.m"
        MR_Word mercury__bimap__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 0)));
#line 349 "bimap.m"
        MR_Word mercury__bimap__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 1)));
#line 349 "bimap.m"
        MR_Word mercury__bimap__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 0)));
#line 349 "bimap.m"
        MR_Word mercury__bimap__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 1)));

#line 1129 "bimap.c"
        {
#line 1131 "bimap.c"
          mercury__bimap__succeeded = mercury__tree234____Unify____tree234_2_0(mercury__bimap__TypeInfo_for_K_9, mercury__bimap__TypeInfo_for_V_10, mercury__bimap__V_3_3, mercury__bimap__V_5_5);
        }
#line 349 "bimap.m"
        if (mercury__bimap__succeeded)
#line 1136 "bimap.c"
          {
#line 1138 "bimap.c"
            return mercury__bimap__succeeded = mercury__tree234____Unify____tree234_2_0(mercury__bimap__TypeInfo_for_V_10, mercury__bimap__TypeInfo_for_K_9, mercury__bimap__V_4_4, mercury__bimap__V_6_6);
          }
#line 349 "bimap.m"
      }
#line 349 "bimap.m"
    return mercury__bimap__succeeded;
#line 349 "bimap.m"
  }
#line 349 "bimap.m"
}

#line 681 "bimap.m"
void MR_CALL 
mercury__bimap__map_values_func_2_4_p_0(
#line 681 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_21,
#line 681 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_22,
#line 681 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_W_23,
#line 681 "bimap.m"
  MR_Word mercury__bimap__HeadVar__1_1,
#line 681 "bimap.m"
  MR_Word mercury__bimap__HeadVar__2_2,
#line 681 "bimap.m"
  MR_Word mercury__bimap__STATE_VARIABLE_List_0_3,
#line 681 "bimap.m"
  MR_Word * mercury__bimap__STATE_VARIABLE_List_4)
#line 681 "bimap.m"
{
#line 684 "bimap.m"
  while (MR_TRUE)
#line 684 "bimap.m"
    {
#line 684 "bimap.m"
      /* tailcall optimized into a loop */
#line 684 "bimap.m"
      {
#line 684 "bimap.m"
        MR_bool mercury__bimap__succeeded;

#line 684 "bimap.m"
        if ((mercury__bimap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 684 "bimap.m"
          *mercury__bimap__STATE_VARIABLE_List_4 = mercury__bimap__STATE_VARIABLE_List_0_3;
#line 684 "bimap.m"
        else
#line 685 "bimap.m"
          {
#line 685 "bimap.m"
            MR_Box mercury__bimap__Key_10;
#line 685 "bimap.m"
            MR_Box mercury__bimap__Value0_11;
#line 685 "bimap.m"
            MR_Word mercury__bimap__Tail0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bimap__HeadVar__2_2, (MR_Integer) 1)));
#line 685 "bimap.m"
            MR_Box mercury__bimap__Value_14;
#line 685 "bimap.m"
            MR_Word mercury__bimap__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bimap__HeadVar__2_2, (MR_Integer) 0)));
#line 685 "bimap.m"
            MR_Word mercury__bimap__STATE_VARIABLE_List_18_18;
#line 685 "bimap.m"
            MR_Word mercury__bimap__V_19_19;
#line 686 "bimap.m"
            MR_Box MR_CALL (* mercury__bimap__func_0)(MR_Box, MR_Box, MR_Box);

#line 685 "bimap.m"
            mercury__bimap__Key_10 = (MR_hl_field(MR_mktag(0), mercury__bimap__V_17_17, (MR_Integer) 0));
#line 685 "bimap.m"
            mercury__bimap__Value0_11 = (MR_hl_field(MR_mktag(0), mercury__bimap__V_17_17, (MR_Integer) 1));
#line 686 "bimap.m"
            mercury__bimap__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 1)));
#line 686 "bimap.m"
            {
#line 686 "bimap.m"
              mercury__bimap__Value_14 = mercury__bimap__func_0(((MR_Box) mercury__bimap__HeadVar__1_1), mercury__bimap__Key_10, mercury__bimap__Value0_11);
            }
#line 687 "bimap.m"
            {
#line 687 "bimap.m"
              mercury__bimap__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 687 "bimap.m"
              MR_hl_field(MR_mktag(0), mercury__bimap__V_19_19, 0) = mercury__bimap__Key_10;
#line 687 "bimap.m"
              MR_hl_field(MR_mktag(0), mercury__bimap__V_19_19, 1) = mercury__bimap__Value_14;
#line 687 "bimap.m"
            }
#line 687 "bimap.m"
            {
#line 687 "bimap.m"
              mercury__bimap__STATE_VARIABLE_List_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 687 "bimap.m"
              MR_hl_field(MR_mktag(1), mercury__bimap__STATE_VARIABLE_List_18_18, 0) = ((MR_Box) (mercury__bimap__V_19_19));
#line 687 "bimap.m"
              MR_hl_field(MR_mktag(1), mercury__bimap__STATE_VARIABLE_List_18_18, 1) = ((MR_Box) (mercury__bimap__STATE_VARIABLE_List_0_3));
#line 687 "bimap.m"
            }
#line 688 "bimap.m"
            /* direct tailcall eliminated */
#line 688 "bimap.m"
            {
#line 688 "bimap.m"
              MR_Word mercury__bimap__HeadVar__2__tmp_copy_2 = mercury__bimap__Tail0_12;
#line 688 "bimap.m"
              MR_Word mercury__bimap__STATE_VARIABLE_List_0__tmp_copy_3 = mercury__bimap__STATE_VARIABLE_List_18_18;

#line 688 "bimap.m"
              mercury__bimap__STATE_VARIABLE_List_0_3 = mercury__bimap__STATE_VARIABLE_List_0__tmp_copy_3;
#line 688 "bimap.m"
              mercury__bimap__HeadVar__2_2 = mercury__bimap__HeadVar__2__tmp_copy_2;
#line 688 "bimap.m"
            }
#line 688 "bimap.m"
            continue;
#line 685 "bimap.m"
          }
#line 684 "bimap.m"
      }
#line 684 "bimap.m"
      break;
#line 684 "bimap.m"
    }
#line 681 "bimap.m"
}

#line 672 "bimap.m"
void MR_CALL 
mercury__bimap__map_values_2_4_p_0(
#line 672 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_21,
#line 672 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_22,
#line 672 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_W_23,
#line 672 "bimap.m"
  MR_Word mercury__bimap__HeadVar__1_1,
#line 672 "bimap.m"
  MR_Word mercury__bimap__HeadVar__2_2,
#line 672 "bimap.m"
  MR_Word mercury__bimap__STATE_VARIABLE_List_0_3,
#line 672 "bimap.m"
  MR_Word * mercury__bimap__STATE_VARIABLE_List_4)
#line 672 "bimap.m"
{
#line 675 "bimap.m"
  while (MR_TRUE)
#line 675 "bimap.m"
    {
#line 675 "bimap.m"
      /* tailcall optimized into a loop */
#line 675 "bimap.m"
      {
#line 675 "bimap.m"
        MR_bool mercury__bimap__succeeded;

#line 675 "bimap.m"
        if ((mercury__bimap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 675 "bimap.m"
          *mercury__bimap__STATE_VARIABLE_List_4 = mercury__bimap__STATE_VARIABLE_List_0_3;
#line 675 "bimap.m"
        else
#line 676 "bimap.m"
          {
#line 676 "bimap.m"
            MR_Box mercury__bimap__Key_10;
#line 676 "bimap.m"
            MR_Box mercury__bimap__Value0_11;
#line 676 "bimap.m"
            MR_Word mercury__bimap__Tail0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bimap__HeadVar__2_2, (MR_Integer) 1)));
#line 676 "bimap.m"
            MR_Box mercury__bimap__Value_14;
#line 676 "bimap.m"
            MR_Word mercury__bimap__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bimap__HeadVar__2_2, (MR_Integer) 0)));
#line 676 "bimap.m"
            MR_Word mercury__bimap__STATE_VARIABLE_List_18_18;
#line 676 "bimap.m"
            MR_Word mercury__bimap__V_19_19;
#line 677 "bimap.m"
            void MR_CALL (* mercury__bimap__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 676 "bimap.m"
            mercury__bimap__Key_10 = (MR_hl_field(MR_mktag(0), mercury__bimap__V_17_17, (MR_Integer) 0));
#line 676 "bimap.m"
            mercury__bimap__Value0_11 = (MR_hl_field(MR_mktag(0), mercury__bimap__V_17_17, (MR_Integer) 1));
#line 677 "bimap.m"
            mercury__bimap__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 1)));
#line 677 "bimap.m"
            {
#line 677 "bimap.m"
              mercury__bimap__func_0(((MR_Box) mercury__bimap__HeadVar__1_1), mercury__bimap__Key_10, mercury__bimap__Value0_11, &mercury__bimap__Value_14);
            }
#line 678 "bimap.m"
            {
#line 678 "bimap.m"
              mercury__bimap__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 678 "bimap.m"
              MR_hl_field(MR_mktag(0), mercury__bimap__V_19_19, 0) = mercury__bimap__Key_10;
#line 678 "bimap.m"
              MR_hl_field(MR_mktag(0), mercury__bimap__V_19_19, 1) = mercury__bimap__Value_14;
#line 678 "bimap.m"
            }
#line 678 "bimap.m"
            {
#line 678 "bimap.m"
              mercury__bimap__STATE_VARIABLE_List_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 678 "bimap.m"
              MR_hl_field(MR_mktag(1), mercury__bimap__STATE_VARIABLE_List_18_18, 0) = ((MR_Box) (mercury__bimap__V_19_19));
#line 678 "bimap.m"
              MR_hl_field(MR_mktag(1), mercury__bimap__STATE_VARIABLE_List_18_18, 1) = ((MR_Box) (mercury__bimap__STATE_VARIABLE_List_0_3));
#line 678 "bimap.m"
            }
#line 679 "bimap.m"
            /* direct tailcall eliminated */
#line 679 "bimap.m"
            {
#line 679 "bimap.m"
              MR_Word mercury__bimap__HeadVar__2__tmp_copy_2 = mercury__bimap__Tail0_12;
#line 679 "bimap.m"
              MR_Word mercury__bimap__STATE_VARIABLE_List_0__tmp_copy_3 = mercury__bimap__STATE_VARIABLE_List_18_18;

#line 679 "bimap.m"
              mercury__bimap__STATE_VARIABLE_List_0_3 = mercury__bimap__STATE_VARIABLE_List_0__tmp_copy_3;
#line 679 "bimap.m"
              mercury__bimap__HeadVar__2_2 = mercury__bimap__HeadVar__2__tmp_copy_2;
#line 679 "bimap.m"
            }
#line 679 "bimap.m"
            continue;
#line 676 "bimap.m"
          }
#line 675 "bimap.m"
      }
#line 675 "bimap.m"
      break;
#line 675 "bimap.m"
    }
#line 672 "bimap.m"
}

#line 662 "bimap.m"
void MR_CALL 
mercury__bimap__map_keys_func_2_4_p_0(
#line 662 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_21,
#line 662 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_22,
#line 662 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_L_23,
#line 662 "bimap.m"
  MR_Word mercury__bimap__HeadVar__1_1,
#line 662 "bimap.m"
  MR_Word mercury__bimap__HeadVar__2_2,
#line 662 "bimap.m"
  MR_Word mercury__bimap__STATE_VARIABLE_List_0_3,
#line 662 "bimap.m"
  MR_Word * mercury__bimap__STATE_VARIABLE_List_4)
#line 662 "bimap.m"
{
#line 666 "bimap.m"
  while (MR_TRUE)
#line 666 "bimap.m"
    {
#line 666 "bimap.m"
      /* tailcall optimized into a loop */
#line 666 "bimap.m"
      {
#line 666 "bimap.m"
        MR_bool mercury__bimap__succeeded;

#line 666 "bimap.m"
        if ((mercury__bimap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 666 "bimap.m"
          *mercury__bimap__STATE_VARIABLE_List_4 = mercury__bimap__STATE_VARIABLE_List_0_3;
#line 666 "bimap.m"
        else
#line 667 "bimap.m"
          {
#line 667 "bimap.m"
            MR_Box mercury__bimap__Key0_10;
#line 667 "bimap.m"
            MR_Box mercury__bimap__Value_11;
#line 667 "bimap.m"
            MR_Word mercury__bimap__Tail0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bimap__HeadVar__2_2, (MR_Integer) 1)));
#line 667 "bimap.m"
            MR_Box mercury__bimap__Key_14;
#line 667 "bimap.m"
            MR_Word mercury__bimap__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bimap__HeadVar__2_2, (MR_Integer) 0)));
#line 667 "bimap.m"
            MR_Word mercury__bimap__STATE_VARIABLE_List_18_18;
#line 667 "bimap.m"
            MR_Word mercury__bimap__V_19_19;
#line 668 "bimap.m"
            MR_Box MR_CALL (* mercury__bimap__func_0)(MR_Box, MR_Box, MR_Box);

#line 667 "bimap.m"
            mercury__bimap__Key0_10 = (MR_hl_field(MR_mktag(0), mercury__bimap__V_17_17, (MR_Integer) 0));
#line 667 "bimap.m"
            mercury__bimap__Value_11 = (MR_hl_field(MR_mktag(0), mercury__bimap__V_17_17, (MR_Integer) 1));
#line 668 "bimap.m"
            mercury__bimap__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 1)));
#line 668 "bimap.m"
            {
#line 668 "bimap.m"
              mercury__bimap__Key_14 = mercury__bimap__func_0(((MR_Box) mercury__bimap__HeadVar__1_1), mercury__bimap__Value_11, mercury__bimap__Key0_10);
            }
#line 669 "bimap.m"
            {
#line 669 "bimap.m"
              mercury__bimap__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 669 "bimap.m"
              MR_hl_field(MR_mktag(0), mercury__bimap__V_19_19, 0) = mercury__bimap__Key_14;
#line 669 "bimap.m"
              MR_hl_field(MR_mktag(0), mercury__bimap__V_19_19, 1) = mercury__bimap__Value_11;
#line 669 "bimap.m"
            }
#line 669 "bimap.m"
            {
#line 669 "bimap.m"
              mercury__bimap__STATE_VARIABLE_List_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 669 "bimap.m"
              MR_hl_field(MR_mktag(1), mercury__bimap__STATE_VARIABLE_List_18_18, 0) = ((MR_Box) (mercury__bimap__V_19_19));
#line 669 "bimap.m"
              MR_hl_field(MR_mktag(1), mercury__bimap__STATE_VARIABLE_List_18_18, 1) = ((MR_Box) (mercury__bimap__STATE_VARIABLE_List_0_3));
#line 669 "bimap.m"
            }
#line 670 "bimap.m"
            /* direct tailcall eliminated */
#line 670 "bimap.m"
            {
#line 670 "bimap.m"
              MR_Word mercury__bimap__HeadVar__2__tmp_copy_2 = mercury__bimap__Tail0_12;
#line 670 "bimap.m"
              MR_Word mercury__bimap__STATE_VARIABLE_List_0__tmp_copy_3 = mercury__bimap__STATE_VARIABLE_List_18_18;

#line 670 "bimap.m"
              mercury__bimap__STATE_VARIABLE_List_0_3 = mercury__bimap__STATE_VARIABLE_List_0__tmp_copy_3;
#line 670 "bimap.m"
              mercury__bimap__HeadVar__2_2 = mercury__bimap__HeadVar__2__tmp_copy_2;
#line 670 "bimap.m"
            }
#line 670 "bimap.m"
            continue;
#line 667 "bimap.m"
          }
#line 666 "bimap.m"
      }
#line 666 "bimap.m"
      break;
#line 666 "bimap.m"
    }
#line 662 "bimap.m"
}

#line 652 "bimap.m"
void MR_CALL 
mercury__bimap__map_keys_2_4_p_0(
#line 652 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_21,
#line 652 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_22,
#line 652 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_L_23,
#line 652 "bimap.m"
  MR_Word mercury__bimap__HeadVar__1_1,
#line 652 "bimap.m"
  MR_Word mercury__bimap__HeadVar__2_2,
#line 652 "bimap.m"
  MR_Word mercury__bimap__STATE_VARIABLE_List_0_3,
#line 652 "bimap.m"
  MR_Word * mercury__bimap__STATE_VARIABLE_List_4)
#line 652 "bimap.m"
{
#line 656 "bimap.m"
  while (MR_TRUE)
#line 656 "bimap.m"
    {
#line 656 "bimap.m"
      /* tailcall optimized into a loop */
#line 656 "bimap.m"
      {
#line 656 "bimap.m"
        MR_bool mercury__bimap__succeeded;

#line 656 "bimap.m"
        if ((mercury__bimap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 656 "bimap.m"
          *mercury__bimap__STATE_VARIABLE_List_4 = mercury__bimap__STATE_VARIABLE_List_0_3;
#line 656 "bimap.m"
        else
#line 657 "bimap.m"
          {
#line 657 "bimap.m"
            MR_Box mercury__bimap__Key0_10;
#line 657 "bimap.m"
            MR_Box mercury__bimap__Value_11;
#line 657 "bimap.m"
            MR_Word mercury__bimap__Tail0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bimap__HeadVar__2_2, (MR_Integer) 1)));
#line 657 "bimap.m"
            MR_Box mercury__bimap__Key_14;
#line 657 "bimap.m"
            MR_Word mercury__bimap__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bimap__HeadVar__2_2, (MR_Integer) 0)));
#line 657 "bimap.m"
            MR_Word mercury__bimap__STATE_VARIABLE_List_18_18;
#line 657 "bimap.m"
            MR_Word mercury__bimap__V_19_19;
#line 658 "bimap.m"
            void MR_CALL (* mercury__bimap__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 657 "bimap.m"
            mercury__bimap__Key0_10 = (MR_hl_field(MR_mktag(0), mercury__bimap__V_17_17, (MR_Integer) 0));
#line 657 "bimap.m"
            mercury__bimap__Value_11 = (MR_hl_field(MR_mktag(0), mercury__bimap__V_17_17, (MR_Integer) 1));
#line 658 "bimap.m"
            mercury__bimap__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 1)));
#line 658 "bimap.m"
            {
#line 658 "bimap.m"
              mercury__bimap__func_0(((MR_Box) mercury__bimap__HeadVar__1_1), mercury__bimap__Value_11, mercury__bimap__Key0_10, &mercury__bimap__Key_14);
            }
#line 659 "bimap.m"
            {
#line 659 "bimap.m"
              mercury__bimap__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 659 "bimap.m"
              MR_hl_field(MR_mktag(0), mercury__bimap__V_19_19, 0) = mercury__bimap__Key_14;
#line 659 "bimap.m"
              MR_hl_field(MR_mktag(0), mercury__bimap__V_19_19, 1) = mercury__bimap__Value_11;
#line 659 "bimap.m"
            }
#line 659 "bimap.m"
            {
#line 659 "bimap.m"
              mercury__bimap__STATE_VARIABLE_List_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 659 "bimap.m"
              MR_hl_field(MR_mktag(1), mercury__bimap__STATE_VARIABLE_List_18_18, 0) = ((MR_Box) (mercury__bimap__V_19_19));
#line 659 "bimap.m"
              MR_hl_field(MR_mktag(1), mercury__bimap__STATE_VARIABLE_List_18_18, 1) = ((MR_Box) (mercury__bimap__STATE_VARIABLE_List_0_3));
#line 659 "bimap.m"
            }
#line 660 "bimap.m"
            /* direct tailcall eliminated */
#line 660 "bimap.m"
            {
#line 660 "bimap.m"
              MR_Word mercury__bimap__HeadVar__2__tmp_copy_2 = mercury__bimap__Tail0_12;
#line 660 "bimap.m"
              MR_Word mercury__bimap__STATE_VARIABLE_List_0__tmp_copy_3 = mercury__bimap__STATE_VARIABLE_List_18_18;

#line 660 "bimap.m"
              mercury__bimap__STATE_VARIABLE_List_0_3 = mercury__bimap__STATE_VARIABLE_List_0__tmp_copy_3;
#line 660 "bimap.m"
              mercury__bimap__HeadVar__2_2 = mercury__bimap__HeadVar__2__tmp_copy_2;
#line 660 "bimap.m"
            }
#line 660 "bimap.m"
            continue;
#line 657 "bimap.m"
          }
#line 656 "bimap.m"
      }
#line 656 "bimap.m"
      break;
#line 656 "bimap.m"
    }
#line 652 "bimap.m"
}

#line 576 "bimap.m"
void MR_CALL 
mercury__bimap__overlay_2_3_p_0(
#line 576 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_16,
#line 576 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_17,
#line 576 "bimap.m"
  MR_Word mercury__bimap__HeadVar__1_1,
#line 576 "bimap.m"
  MR_Word mercury__bimap__STATE_VARIABLE_BM_0_2,
#line 576 "bimap.m"
  MR_Word * mercury__bimap__STATE_VARIABLE_BM_3)
#line 576 "bimap.m"
{
#line 579 "bimap.m"
  while (MR_TRUE)
#line 579 "bimap.m"
    {
#line 579 "bimap.m"
      /* tailcall optimized into a loop */
#line 579 "bimap.m"
      {
#line 579 "bimap.m"
        MR_bool mercury__bimap__succeeded;

#line 579 "bimap.m"
        if ((mercury__bimap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 579 "bimap.m"
          *mercury__bimap__STATE_VARIABLE_BM_3 = mercury__bimap__STATE_VARIABLE_BM_0_2;
#line 579 "bimap.m"
        else
#line 580 "bimap.m"
          {
#line 580 "bimap.m"
            MR_Box mercury__bimap__Key_7;
#line 580 "bimap.m"
            MR_Box mercury__bimap__Value_8;
#line 580 "bimap.m"
            MR_Word mercury__bimap__KeysValues_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bimap__HeadVar__1_1, (MR_Integer) 1)));
#line 580 "bimap.m"
            MR_Word mercury__bimap__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bimap__HeadVar__1_1, (MR_Integer) 0)));
#line 580 "bimap.m"
            MR_Word mercury__bimap__STATE_VARIABLE_BM_14_14;

#line 580 "bimap.m"
            mercury__bimap__Key_7 = (MR_hl_field(MR_mktag(0), mercury__bimap__V_13_13, (MR_Integer) 0));
#line 580 "bimap.m"
            mercury__bimap__Value_8 = (MR_hl_field(MR_mktag(0), mercury__bimap__V_13_13, (MR_Integer) 1));
#line 581 "bimap.m"
            {
#line 581 "bimap.m"
              mercury__bimap__set_4_p_0(mercury__bimap__TypeInfo_for_K_16, mercury__bimap__TypeInfo_for_V_17, mercury__bimap__Key_7, mercury__bimap__Value_8, mercury__bimap__STATE_VARIABLE_BM_0_2, &mercury__bimap__STATE_VARIABLE_BM_14_14);
            }
#line 582 "bimap.m"
            /* direct tailcall eliminated */
#line 582 "bimap.m"
            {
#line 582 "bimap.m"
              MR_Word mercury__bimap__HeadVar__1__tmp_copy_1 = mercury__bimap__KeysValues_9;
#line 582 "bimap.m"
              MR_Word mercury__bimap__STATE_VARIABLE_BM_0__tmp_copy_2 = mercury__bimap__STATE_VARIABLE_BM_14_14;

#line 582 "bimap.m"
              mercury__bimap__STATE_VARIABLE_BM_0_2 = mercury__bimap__STATE_VARIABLE_BM_0__tmp_copy_2;
#line 582 "bimap.m"
              mercury__bimap__HeadVar__1_1 = mercury__bimap__HeadVar__1__tmp_copy_1;
#line 582 "bimap.m"
            }
#line 582 "bimap.m"
            continue;
#line 580 "bimap.m"
          }
#line 579 "bimap.m"
      }
#line 579 "bimap.m"
      break;
#line 579 "bimap.m"
    }
#line 576 "bimap.m"
}

#line 339 "bimap.m"
MR_Word MR_CALL 
mercury__bimap__reverse_map_1_f_0(
#line 339 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_5,
#line 339 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_6,
#line 339 "bimap.m"
  MR_Word mercury__bimap__HeadVar__1_1)
#line 339 "bimap.m"
{
#line 704 "bimap.m"
  {
#line 704 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 704 "bimap.m"
    MR_Word mercury__bimap__Reverse_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 1)));
#line 704 "bimap.m"
    MR_Word mercury__bimap__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 0)));

#line 704 "bimap.m"
    return mercury__bimap__Reverse_4;
#line 704 "bimap.m"
  }
#line 339 "bimap.m"
}

#line 335 "bimap.m"
MR_Word MR_CALL 
mercury__bimap__forward_map_1_f_0(
#line 335 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_5,
#line 335 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_6,
#line 335 "bimap.m"
  MR_Word mercury__bimap__HeadVar__1_1)
#line 335 "bimap.m"
{
#line 702 "bimap.m"
  {
#line 702 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 702 "bimap.m"
    MR_Word mercury__bimap__Forward_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 0)));
#line 702 "bimap.m"
    MR_Word mercury__bimap__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 1)));

#line 702 "bimap.m"
    return mercury__bimap__Forward_3;
#line 702 "bimap.m"
  }
#line 335 "bimap.m"
}

#line 330 "bimap.m"
MR_bool MR_CALL 
mercury__bimap__foldl3_8_p_7(
#line 330 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_24,
#line 330 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_25,
#line 330 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_A_26,
#line 330 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_B_27,
#line 330 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_C_28,
#line 330 "bimap.m"
  MR_Word mercury__bimap__Pred_9,
#line 330 "bimap.m"
  MR_Word mercury__bimap__HeadVar__2_2,
#line 330 "bimap.m"
  MR_Box mercury__bimap__STATE_VARIABLE_A_0_15,
#line 330 "bimap.m"
  MR_Box * mercury__bimap__STATE_VARIABLE_A_16,
#line 330 "bimap.m"
  MR_Box mercury__bimap__STATE_VARIABLE_B_0_17,
#line 330 "bimap.m"
  MR_Box * mercury__bimap__STATE_VARIABLE_B_18,
#line 330 "bimap.m"
  MR_Box mercury__bimap__STATE_VARIABLE_C_0_19,
#line 330 "bimap.m"
  MR_Box * mercury__bimap__STATE_VARIABLE_C_20)
#line 330 "bimap.m"
{
#line 699 "bimap.m"
  {
#line 699 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 699 "bimap.m"
    MR_Word mercury__bimap__Forward_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 0)));
#line 699 "bimap.m"
    MR_Word mercury__bimap__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 1)));

#line 223 "map.opt"
    {
#line 223 "map.opt"
      return mercury__bimap__succeeded = mercury__tree234__foldl3_8_p_7(mercury__bimap__TypeInfo_for_K_24, mercury__bimap__TypeInfo_for_V_25, mercury__bimap__TypeInfo_for_A_26, mercury__bimap__TypeInfo_for_B_27, mercury__bimap__TypeInfo_for_C_28, mercury__bimap__Pred_9, mercury__bimap__Forward_10, mercury__bimap__STATE_VARIABLE_A_0_15, mercury__bimap__STATE_VARIABLE_A_16, mercury__bimap__STATE_VARIABLE_B_0_17, mercury__bimap__STATE_VARIABLE_B_18, mercury__bimap__STATE_VARIABLE_C_0_19, mercury__bimap__STATE_VARIABLE_C_20);
    }
#line 699 "bimap.m"
    return mercury__bimap__succeeded;
#line 699 "bimap.m"
  }
#line 330 "bimap.m"
}

#line 328 "bimap.m"
MR_bool MR_CALL 
mercury__bimap__foldl3_8_p_6(
#line 328 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_24,
#line 328 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_25,
#line 328 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_A_26,
#line 328 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_B_27,
#line 328 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_C_28,
#line 328 "bimap.m"
  MR_Word mercury__bimap__Pred_9,
#line 328 "bimap.m"
  MR_Word mercury__bimap__HeadVar__2_2,
#line 328 "bimap.m"
  MR_Box mercury__bimap__STATE_VARIABLE_A_0_15,
#line 328 "bimap.m"
  MR_Box * mercury__bimap__STATE_VARIABLE_A_16,
#line 328 "bimap.m"
  MR_Box mercury__bimap__STATE_VARIABLE_B_0_17,
#line 328 "bimap.m"
  MR_Box * mercury__bimap__STATE_VARIABLE_B_18,
#line 328 "bimap.m"
  MR_Box mercury__bimap__STATE_VARIABLE_C_0_19,
#line 328 "bimap.m"
  MR_Box * mercury__bimap__STATE_VARIABLE_C_20)
#line 328 "bimap.m"
{
#line 699 "bimap.m"
  {
#line 699 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 699 "bimap.m"
    MR_Word mercury__bimap__Forward_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 0)));
#line 699 "bimap.m"
    MR_Word mercury__bimap__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 1)));

#line 223 "map.opt"
    {
#line 223 "map.opt"
      return mercury__bimap__succeeded = mercury__tree234__foldl3_8_p_6(mercury__bimap__TypeInfo_for_K_24, mercury__bimap__TypeInfo_for_V_25, mercury__bimap__TypeInfo_for_A_26, mercury__bimap__TypeInfo_for_B_27, mercury__bimap__TypeInfo_for_C_28, mercury__bimap__Pred_9, mercury__bimap__Forward_10, mercury__bimap__STATE_VARIABLE_A_0_15, mercury__bimap__STATE_VARIABLE_A_16, mercury__bimap__STATE_VARIABLE_B_0_17, mercury__bimap__STATE_VARIABLE_B_18, mercury__bimap__STATE_VARIABLE_C_0_19, mercury__bimap__STATE_VARIABLE_C_20);
    }
#line 699 "bimap.m"
    return mercury__bimap__succeeded;
#line 699 "bimap.m"
  }
#line 328 "bimap.m"
}

#line 326 "bimap.m"
MR_bool MR_CALL 
mercury__bimap__foldl3_8_p_5(
#line 326 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_24,
#line 326 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_25,
#line 326 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_A_26,
#line 326 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_B_27,
#line 326 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_C_28,
#line 326 "bimap.m"
  MR_Word mercury__bimap__Pred_9,
#line 326 "bimap.m"
  MR_Word mercury__bimap__HeadVar__2_2,
#line 326 "bimap.m"
  MR_Box mercury__bimap__STATE_VARIABLE_A_0_15,
#line 326 "bimap.m"
  MR_Box * mercury__bimap__STATE_VARIABLE_A_16,
#line 326 "bimap.m"
  MR_Box mercury__bimap__STATE_VARIABLE_B_0_17,
#line 326 "bimap.m"
  MR_Box * mercury__bimap__STATE_VARIABLE_B_18,
#line 326 "bimap.m"
  MR_Box mercury__bimap__STATE_VARIABLE_C_0_19,
#line 326 "bimap.m"
  MR_Box * mercury__bimap__STATE_VARIABLE_C_20)
#line 326 "bimap.m"
{
#line 699 "bimap.m"
  {
#line 699 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 699 "bimap.m"
    MR_Word mercury__bimap__Forward_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 0)));
#line 699 "bimap.m"
    MR_Word mercury__bimap__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 1)));

#line 223 "map.opt"
    {
#line 223 "map.opt"
      return mercury__bimap__succeeded = mercury__tree234__foldl3_8_p_5(mercury__bimap__TypeInfo_for_K_24, mercury__bimap__TypeInfo_for_V_25, mercury__bimap__TypeInfo_for_A_26, mercury__bimap__TypeInfo_for_B_27, mercury__bimap__TypeInfo_for_C_28, mercury__bimap__Pred_9, mercury__bimap__Forward_10, mercury__bimap__STATE_VARIABLE_A_0_15, mercury__bimap__STATE_VARIABLE_A_16, mercury__bimap__STATE_VARIABLE_B_0_17, mercury__bimap__STATE_VARIABLE_B_18, mercury__bimap__STATE_VARIABLE_C_0_19, mercury__bimap__STATE_VARIABLE_C_20);
    }
#line 699 "bimap.m"
    return mercury__bimap__succeeded;
#line 699 "bimap.m"
  }
#line 326 "bimap.m"
}

#line 324 "bimap.m"
void MR_CALL 
mercury__bimap__foldl3_8_p_4(
#line 324 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_24,
#line 324 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_25,
#line 324 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_A_26,
#line 324 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_B_27,
#line 324 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_C_28,
#line 324 "bimap.m"
  MR_Word mercury__bimap__Pred_9,
#line 324 "bimap.m"
  MR_Word mercury__bimap__HeadVar__2_2,
#line 324 "bimap.m"
  MR_Box mercury__bimap__STATE_VARIABLE_A_0_15,
#line 324 "bimap.m"
  MR_Box * mercury__bimap__STATE_VARIABLE_A_16,
#line 324 "bimap.m"
  MR_Box mercury__bimap__STATE_VARIABLE_B_0_17,
#line 324 "bimap.m"
  MR_Box * mercury__bimap__STATE_VARIABLE_B_18,
#line 324 "bimap.m"
  MR_Box mercury__bimap__STATE_VARIABLE_C_0_19,
#line 324 "bimap.m"
  MR_Box * mercury__bimap__STATE_VARIABLE_C_20)
#line 324 "bimap.m"
{
#line 699 "bimap.m"
  {
#line 699 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 699 "bimap.m"
    MR_Word mercury__bimap__Forward_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 0)));
#line 699 "bimap.m"
    MR_Word mercury__bimap__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 1)));

#line 223 "map.opt"
    {
#line 223 "map.opt"
      mercury__tree234__foldl3_8_p_4(mercury__bimap__TypeInfo_for_K_24, mercury__bimap__TypeInfo_for_V_25, mercury__bimap__TypeInfo_for_A_26, mercury__bimap__TypeInfo_for_B_27, mercury__bimap__TypeInfo_for_C_28, mercury__bimap__Pred_9, mercury__bimap__Forward_10, mercury__bimap__STATE_VARIABLE_A_0_15, mercury__bimap__STATE_VARIABLE_A_16, mercury__bimap__STATE_VARIABLE_B_0_17, mercury__bimap__STATE_VARIABLE_B_18, mercury__bimap__STATE_VARIABLE_C_0_19, mercury__bimap__STATE_VARIABLE_C_20);
#line 223 "map.opt"
      return;
    }
#line 699 "bimap.m"
  }
#line 324 "bimap.m"
}

#line 322 "bimap.m"
void MR_CALL 
mercury__bimap__foldl3_8_p_3(
#line 322 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_24,
#line 322 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_25,
#line 322 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_A_26,
#line 322 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_B_27,
#line 322 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_C_28,
#line 322 "bimap.m"
  MR_Word mercury__bimap__Pred_9,
#line 322 "bimap.m"
  MR_Word mercury__bimap__HeadVar__2_2,
#line 322 "bimap.m"
  MR_Box mercury__bimap__STATE_VARIABLE_A_0_15,
#line 322 "bimap.m"
  MR_Box * mercury__bimap__STATE_VARIABLE_A_16,
#line 322 "bimap.m"
  MR_Box mercury__bimap__STATE_VARIABLE_B_0_17,
#line 322 "bimap.m"
  MR_Box * mercury__bimap__STATE_VARIABLE_B_18,
#line 322 "bimap.m"
  MR_Box mercury__bimap__STATE_VARIABLE_C_0_19,
#line 322 "bimap.m"
  MR_Box * mercury__bimap__STATE_VARIABLE_C_20)
#line 322 "bimap.m"
{
#line 699 "bimap.m"
  {
#line 699 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 699 "bimap.m"
    MR_Word mercury__bimap__Forward_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 0)));
#line 699 "bimap.m"
    MR_Word mercury__bimap__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 1)));

#line 223 "map.opt"
    {
#line 223 "map.opt"
      mercury__tree234__foldl3_8_p_3(mercury__bimap__TypeInfo_for_K_24, mercury__bimap__TypeInfo_for_V_25, mercury__bimap__TypeInfo_for_A_26, mercury__bimap__TypeInfo_for_B_27, mercury__bimap__TypeInfo_for_C_28, mercury__bimap__Pred_9, mercury__bimap__Forward_10, mercury__bimap__STATE_VARIABLE_A_0_15, mercury__bimap__STATE_VARIABLE_A_16, mercury__bimap__STATE_VARIABLE_B_0_17, mercury__bimap__STATE_VARIABLE_B_18, mercury__bimap__STATE_VARIABLE_C_0_19, mercury__bimap__STATE_VARIABLE_C_20);
#line 223 "map.opt"
      return;
    }
#line 699 "bimap.m"
  }
#line 322 "bimap.m"
}

#line 320 "bimap.m"
void MR_CALL 
mercury__bimap__foldl3_8_p_2(
#line 320 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_24,
#line 320 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_25,
#line 320 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_A_26,
#line 320 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_B_27,
#line 320 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_C_28,
#line 320 "bimap.m"
  MR_Word mercury__bimap__Pred_9,
#line 320 "bimap.m"
  MR_Word mercury__bimap__HeadVar__2_2,
#line 320 "bimap.m"
  MR_Box mercury__bimap__STATE_VARIABLE_A_0_15,
#line 320 "bimap.m"
  MR_Box * mercury__bimap__STATE_VARIABLE_A_16,
#line 320 "bimap.m"
  MR_Box mercury__bimap__STATE_VARIABLE_B_0_17,
#line 320 "bimap.m"
  MR_Box * mercury__bimap__STATE_VARIABLE_B_18,
#line 320 "bimap.m"
  MR_Box mercury__bimap__STATE_VARIABLE_C_0_19,
#line 320 "bimap.m"
  MR_Box * mercury__bimap__STATE_VARIABLE_C_20)
#line 320 "bimap.m"
{
#line 699 "bimap.m"
  {
#line 699 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 699 "bimap.m"
    MR_Word mercury__bimap__Forward_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 0)));
#line 699 "bimap.m"
    MR_Word mercury__bimap__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 1)));

#line 223 "map.opt"
    {
#line 223 "map.opt"
      mercury__tree234__foldl3_8_p_2(mercury__bimap__TypeInfo_for_K_24, mercury__bimap__TypeInfo_for_V_25, mercury__bimap__TypeInfo_for_A_26, mercury__bimap__TypeInfo_for_B_27, mercury__bimap__TypeInfo_for_C_28, mercury__bimap__Pred_9, mercury__bimap__Forward_10, mercury__bimap__STATE_VARIABLE_A_0_15, mercury__bimap__STATE_VARIABLE_A_16, mercury__bimap__STATE_VARIABLE_B_0_17, mercury__bimap__STATE_VARIABLE_B_18, mercury__bimap__STATE_VARIABLE_C_0_19, mercury__bimap__STATE_VARIABLE_C_20);
#line 223 "map.opt"
      return;
    }
#line 699 "bimap.m"
  }
#line 320 "bimap.m"
}

#line 318 "bimap.m"
void MR_CALL 
mercury__bimap__foldl3_8_p_1(
#line 318 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_24,
#line 318 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_25,
#line 318 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_A_26,
#line 318 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_B_27,
#line 318 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_C_28,
#line 318 "bimap.m"
  MR_Word mercury__bimap__Pred_9,
#line 318 "bimap.m"
  MR_Word mercury__bimap__HeadVar__2_2,
#line 318 "bimap.m"
  MR_Box mercury__bimap__STATE_VARIABLE_A_0_15,
#line 318 "bimap.m"
  MR_Box * mercury__bimap__STATE_VARIABLE_A_16,
#line 318 "bimap.m"
  MR_Box mercury__bimap__STATE_VARIABLE_B_0_17,
#line 318 "bimap.m"
  MR_Box * mercury__bimap__STATE_VARIABLE_B_18,
#line 318 "bimap.m"
  MR_Box mercury__bimap__STATE_VARIABLE_C_0_19,
#line 318 "bimap.m"
  MR_Box * mercury__bimap__STATE_VARIABLE_C_20)
#line 318 "bimap.m"
{
#line 699 "bimap.m"
  {
#line 699 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 699 "bimap.m"
    MR_Word mercury__bimap__Forward_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 0)));
#line 699 "bimap.m"
    MR_Word mercury__bimap__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 1)));

#line 223 "map.opt"
    {
#line 223 "map.opt"
      mercury__tree234__foldl3_8_p_1(mercury__bimap__TypeInfo_for_K_24, mercury__bimap__TypeInfo_for_V_25, mercury__bimap__TypeInfo_for_A_26, mercury__bimap__TypeInfo_for_B_27, mercury__bimap__TypeInfo_for_C_28, mercury__bimap__Pred_9, mercury__bimap__Forward_10, mercury__bimap__STATE_VARIABLE_A_0_15, mercury__bimap__STATE_VARIABLE_A_16, mercury__bimap__STATE_VARIABLE_B_0_17, mercury__bimap__STATE_VARIABLE_B_18, mercury__bimap__STATE_VARIABLE_C_0_19, mercury__bimap__STATE_VARIABLE_C_20);
#line 223 "map.opt"
      return;
    }
#line 699 "bimap.m"
  }
#line 318 "bimap.m"
}

#line 316 "bimap.m"
void MR_CALL 
mercury__bimap__foldl3_8_p_0(
#line 316 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_24,
#line 316 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_25,
#line 316 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_A_26,
#line 316 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_B_27,
#line 316 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_C_28,
#line 316 "bimap.m"
  MR_Word mercury__bimap__Pred_9,
#line 316 "bimap.m"
  MR_Word mercury__bimap__HeadVar__2_2,
#line 316 "bimap.m"
  MR_Box mercury__bimap__STATE_VARIABLE_A_0_15,
#line 316 "bimap.m"
  MR_Box * mercury__bimap__STATE_VARIABLE_A_16,
#line 316 "bimap.m"
  MR_Box mercury__bimap__STATE_VARIABLE_B_0_17,
#line 316 "bimap.m"
  MR_Box * mercury__bimap__STATE_VARIABLE_B_18,
#line 316 "bimap.m"
  MR_Box mercury__bimap__STATE_VARIABLE_C_0_19,
#line 316 "bimap.m"
  MR_Box * mercury__bimap__STATE_VARIABLE_C_20)
#line 316 "bimap.m"
{
#line 699 "bimap.m"
  {
#line 699 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 699 "bimap.m"
    MR_Word mercury__bimap__Forward_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 0)));
#line 699 "bimap.m"
    MR_Word mercury__bimap__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 1)));

#line 223 "map.opt"
    {
#line 223 "map.opt"
      mercury__tree234__foldl3_8_p_0(mercury__bimap__TypeInfo_for_K_24, mercury__bimap__TypeInfo_for_V_25, mercury__bimap__TypeInfo_for_A_26, mercury__bimap__TypeInfo_for_B_27, mercury__bimap__TypeInfo_for_C_28, mercury__bimap__Pred_9, mercury__bimap__Forward_10, mercury__bimap__STATE_VARIABLE_A_0_15, mercury__bimap__STATE_VARIABLE_A_16, mercury__bimap__STATE_VARIABLE_B_0_17, mercury__bimap__STATE_VARIABLE_B_18, mercury__bimap__STATE_VARIABLE_C_0_19, mercury__bimap__STATE_VARIABLE_C_20);
#line 223 "map.opt"
      return;
    }
#line 699 "bimap.m"
  }
#line 316 "bimap.m"
}

#line 306 "bimap.m"
MR_bool MR_CALL 
mercury__bimap__foldl2_6_p_6(
#line 306 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_18,
#line 306 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_19,
#line 306 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_A_20,
#line 306 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_B_21,
#line 306 "bimap.m"
  MR_Word mercury__bimap__Pred_7,
#line 306 "bimap.m"
  MR_Word mercury__bimap__HeadVar__2_2,
#line 306 "bimap.m"
  MR_Box mercury__bimap__STATE_VARIABLE_A_0_12,
#line 306 "bimap.m"
  MR_Box * mercury__bimap__STATE_VARIABLE_A_13,
#line 306 "bimap.m"
  MR_Box mercury__bimap__STATE_VARIABLE_B_0_14,
#line 306 "bimap.m"
  MR_Box * mercury__bimap__STATE_VARIABLE_B_15)
#line 306 "bimap.m"
{
#line 696 "bimap.m"
  {
#line 696 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 696 "bimap.m"
    MR_Word mercury__bimap__Forward_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 0)));
#line 696 "bimap.m"
    MR_Word mercury__bimap__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 1)));

#line 221 "map.opt"
    {
#line 221 "map.opt"
      return mercury__bimap__succeeded = mercury__tree234__foldl2_6_p_6(mercury__bimap__TypeInfo_for_K_18, mercury__bimap__TypeInfo_for_V_19, mercury__bimap__TypeInfo_for_A_20, mercury__bimap__TypeInfo_for_B_21, mercury__bimap__Pred_7, mercury__bimap__Forward_8, mercury__bimap__STATE_VARIABLE_A_0_12, mercury__bimap__STATE_VARIABLE_A_13, mercury__bimap__STATE_VARIABLE_B_0_14, mercury__bimap__STATE_VARIABLE_B_15);
    }
#line 696 "bimap.m"
    return mercury__bimap__succeeded;
#line 696 "bimap.m"
  }
#line 306 "bimap.m"
}

#line 304 "bimap.m"
MR_bool MR_CALL 
mercury__bimap__foldl2_6_p_5(
#line 304 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_18,
#line 304 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_19,
#line 304 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_A_20,
#line 304 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_B_21,
#line 304 "bimap.m"
  MR_Word mercury__bimap__Pred_7,
#line 304 "bimap.m"
  MR_Word mercury__bimap__HeadVar__2_2,
#line 304 "bimap.m"
  MR_Box mercury__bimap__STATE_VARIABLE_A_0_12,
#line 304 "bimap.m"
  MR_Box * mercury__bimap__STATE_VARIABLE_A_13,
#line 304 "bimap.m"
  MR_Box mercury__bimap__STATE_VARIABLE_B_0_14,
#line 304 "bimap.m"
  MR_Box * mercury__bimap__STATE_VARIABLE_B_15)
#line 304 "bimap.m"
{
#line 696 "bimap.m"
  {
#line 696 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 696 "bimap.m"
    MR_Word mercury__bimap__Forward_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 0)));
#line 696 "bimap.m"
    MR_Word mercury__bimap__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 1)));

#line 221 "map.opt"
    {
#line 221 "map.opt"
      return mercury__bimap__succeeded = mercury__tree234__foldl2_6_p_5(mercury__bimap__TypeInfo_for_K_18, mercury__bimap__TypeInfo_for_V_19, mercury__bimap__TypeInfo_for_A_20, mercury__bimap__TypeInfo_for_B_21, mercury__bimap__Pred_7, mercury__bimap__Forward_8, mercury__bimap__STATE_VARIABLE_A_0_12, mercury__bimap__STATE_VARIABLE_A_13, mercury__bimap__STATE_VARIABLE_B_0_14, mercury__bimap__STATE_VARIABLE_B_15);
    }
#line 696 "bimap.m"
    return mercury__bimap__succeeded;
#line 696 "bimap.m"
  }
#line 304 "bimap.m"
}

#line 302 "bimap.m"
MR_bool MR_CALL 
mercury__bimap__foldl2_6_p_4(
#line 302 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_18,
#line 302 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_19,
#line 302 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_A_20,
#line 302 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_B_21,
#line 302 "bimap.m"
  MR_Word mercury__bimap__Pred_7,
#line 302 "bimap.m"
  MR_Word mercury__bimap__HeadVar__2_2,
#line 302 "bimap.m"
  MR_Box mercury__bimap__STATE_VARIABLE_A_0_12,
#line 302 "bimap.m"
  MR_Box * mercury__bimap__STATE_VARIABLE_A_13,
#line 302 "bimap.m"
  MR_Box mercury__bimap__STATE_VARIABLE_B_0_14,
#line 302 "bimap.m"
  MR_Box * mercury__bimap__STATE_VARIABLE_B_15)
#line 302 "bimap.m"
{
#line 696 "bimap.m"
  {
#line 696 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 696 "bimap.m"
    MR_Word mercury__bimap__Forward_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 0)));
#line 696 "bimap.m"
    MR_Word mercury__bimap__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 1)));

#line 221 "map.opt"
    {
#line 221 "map.opt"
      return mercury__bimap__succeeded = mercury__tree234__foldl2_6_p_4(mercury__bimap__TypeInfo_for_K_18, mercury__bimap__TypeInfo_for_V_19, mercury__bimap__TypeInfo_for_A_20, mercury__bimap__TypeInfo_for_B_21, mercury__bimap__Pred_7, mercury__bimap__Forward_8, mercury__bimap__STATE_VARIABLE_A_0_12, mercury__bimap__STATE_VARIABLE_A_13, mercury__bimap__STATE_VARIABLE_B_0_14, mercury__bimap__STATE_VARIABLE_B_15);
    }
#line 696 "bimap.m"
    return mercury__bimap__succeeded;
#line 696 "bimap.m"
  }
#line 302 "bimap.m"
}

#line 300 "bimap.m"
void MR_CALL 
mercury__bimap__foldl2_6_p_3(
#line 300 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_18,
#line 300 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_19,
#line 300 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_A_20,
#line 300 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_B_21,
#line 300 "bimap.m"
  MR_Word mercury__bimap__Pred_7,
#line 300 "bimap.m"
  MR_Word mercury__bimap__HeadVar__2_2,
#line 300 "bimap.m"
  MR_Box mercury__bimap__STATE_VARIABLE_A_0_12,
#line 300 "bimap.m"
  MR_Box * mercury__bimap__STATE_VARIABLE_A_13,
#line 300 "bimap.m"
  MR_Box mercury__bimap__STATE_VARIABLE_B_0_14,
#line 300 "bimap.m"
  MR_Box * mercury__bimap__STATE_VARIABLE_B_15)
#line 300 "bimap.m"
{
#line 696 "bimap.m"
  {
#line 696 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 696 "bimap.m"
    MR_Word mercury__bimap__Forward_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 0)));
#line 696 "bimap.m"
    MR_Word mercury__bimap__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 1)));

#line 221 "map.opt"
    {
#line 221 "map.opt"
      mercury__tree234__foldl2_6_p_3(mercury__bimap__TypeInfo_for_K_18, mercury__bimap__TypeInfo_for_V_19, mercury__bimap__TypeInfo_for_A_20, mercury__bimap__TypeInfo_for_B_21, mercury__bimap__Pred_7, mercury__bimap__Forward_8, mercury__bimap__STATE_VARIABLE_A_0_12, mercury__bimap__STATE_VARIABLE_A_13, mercury__bimap__STATE_VARIABLE_B_0_14, mercury__bimap__STATE_VARIABLE_B_15);
#line 221 "map.opt"
      return;
    }
#line 696 "bimap.m"
  }
#line 300 "bimap.m"
}

#line 298 "bimap.m"
void MR_CALL 
mercury__bimap__foldl2_6_p_2(
#line 298 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_18,
#line 298 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_19,
#line 298 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_A_20,
#line 298 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_B_21,
#line 298 "bimap.m"
  MR_Word mercury__bimap__Pred_7,
#line 298 "bimap.m"
  MR_Word mercury__bimap__HeadVar__2_2,
#line 298 "bimap.m"
  MR_Box mercury__bimap__STATE_VARIABLE_A_0_12,
#line 298 "bimap.m"
  MR_Box * mercury__bimap__STATE_VARIABLE_A_13,
#line 298 "bimap.m"
  MR_Box mercury__bimap__STATE_VARIABLE_B_0_14,
#line 298 "bimap.m"
  MR_Box * mercury__bimap__STATE_VARIABLE_B_15)
#line 298 "bimap.m"
{
#line 696 "bimap.m"
  {
#line 696 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 696 "bimap.m"
    MR_Word mercury__bimap__Forward_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 0)));
#line 696 "bimap.m"
    MR_Word mercury__bimap__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 1)));

#line 221 "map.opt"
    {
#line 221 "map.opt"
      mercury__tree234__foldl2_6_p_2(mercury__bimap__TypeInfo_for_K_18, mercury__bimap__TypeInfo_for_V_19, mercury__bimap__TypeInfo_for_A_20, mercury__bimap__TypeInfo_for_B_21, mercury__bimap__Pred_7, mercury__bimap__Forward_8, mercury__bimap__STATE_VARIABLE_A_0_12, mercury__bimap__STATE_VARIABLE_A_13, mercury__bimap__STATE_VARIABLE_B_0_14, mercury__bimap__STATE_VARIABLE_B_15);
#line 221 "map.opt"
      return;
    }
#line 696 "bimap.m"
  }
#line 298 "bimap.m"
}

#line 296 "bimap.m"
void MR_CALL 
mercury__bimap__foldl2_6_p_1(
#line 296 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_18,
#line 296 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_19,
#line 296 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_A_20,
#line 296 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_B_21,
#line 296 "bimap.m"
  MR_Word mercury__bimap__Pred_7,
#line 296 "bimap.m"
  MR_Word mercury__bimap__HeadVar__2_2,
#line 296 "bimap.m"
  MR_Box mercury__bimap__STATE_VARIABLE_A_0_12,
#line 296 "bimap.m"
  MR_Box * mercury__bimap__STATE_VARIABLE_A_13,
#line 296 "bimap.m"
  MR_Box mercury__bimap__STATE_VARIABLE_B_0_14,
#line 296 "bimap.m"
  MR_Box * mercury__bimap__STATE_VARIABLE_B_15)
#line 296 "bimap.m"
{
#line 696 "bimap.m"
  {
#line 696 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 696 "bimap.m"
    MR_Word mercury__bimap__Forward_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 0)));
#line 696 "bimap.m"
    MR_Word mercury__bimap__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 1)));

#line 221 "map.opt"
    {
#line 221 "map.opt"
      mercury__tree234__foldl2_6_p_1(mercury__bimap__TypeInfo_for_K_18, mercury__bimap__TypeInfo_for_V_19, mercury__bimap__TypeInfo_for_A_20, mercury__bimap__TypeInfo_for_B_21, mercury__bimap__Pred_7, mercury__bimap__Forward_8, mercury__bimap__STATE_VARIABLE_A_0_12, mercury__bimap__STATE_VARIABLE_A_13, mercury__bimap__STATE_VARIABLE_B_0_14, mercury__bimap__STATE_VARIABLE_B_15);
#line 221 "map.opt"
      return;
    }
#line 696 "bimap.m"
  }
#line 296 "bimap.m"
}

#line 294 "bimap.m"
void MR_CALL 
mercury__bimap__foldl2_6_p_0(
#line 294 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_18,
#line 294 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_19,
#line 294 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_A_20,
#line 294 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_B_21,
#line 294 "bimap.m"
  MR_Word mercury__bimap__Pred_7,
#line 294 "bimap.m"
  MR_Word mercury__bimap__HeadVar__2_2,
#line 294 "bimap.m"
  MR_Box mercury__bimap__STATE_VARIABLE_A_0_12,
#line 294 "bimap.m"
  MR_Box * mercury__bimap__STATE_VARIABLE_A_13,
#line 294 "bimap.m"
  MR_Box mercury__bimap__STATE_VARIABLE_B_0_14,
#line 294 "bimap.m"
  MR_Box * mercury__bimap__STATE_VARIABLE_B_15)
#line 294 "bimap.m"
{
#line 696 "bimap.m"
  {
#line 696 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 696 "bimap.m"
    MR_Word mercury__bimap__Forward_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 0)));
#line 696 "bimap.m"
    MR_Word mercury__bimap__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 1)));

#line 221 "map.opt"
    {
#line 221 "map.opt"
      mercury__tree234__foldl2_6_p_0(mercury__bimap__TypeInfo_for_K_18, mercury__bimap__TypeInfo_for_V_19, mercury__bimap__TypeInfo_for_A_20, mercury__bimap__TypeInfo_for_B_21, mercury__bimap__Pred_7, mercury__bimap__Forward_8, mercury__bimap__STATE_VARIABLE_A_0_12, mercury__bimap__STATE_VARIABLE_A_13, mercury__bimap__STATE_VARIABLE_B_0_14, mercury__bimap__STATE_VARIABLE_B_15);
#line 221 "map.opt"
      return;
    }
#line 696 "bimap.m"
  }
#line 294 "bimap.m"
}

#line 286 "bimap.m"
MR_bool MR_CALL 
mercury__bimap__foldl_4_p_5(
#line 286 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_12,
#line 286 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_13,
#line 286 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_A_14,
#line 286 "bimap.m"
  MR_Word mercury__bimap__Pred_5,
#line 286 "bimap.m"
  MR_Word mercury__bimap__HeadVar__2_2,
#line 286 "bimap.m"
  MR_Box mercury__bimap__STATE_VARIABLE_List_0_9,
#line 286 "bimap.m"
  MR_Box * mercury__bimap__STATE_VARIABLE_List_10)
#line 286 "bimap.m"
{
#line 693 "bimap.m"
  {
#line 693 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 693 "bimap.m"
    MR_Word mercury__bimap__Forward_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 0)));
#line 693 "bimap.m"
    MR_Word mercury__bimap__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 1)));

#line 219 "map.opt"
    {
#line 219 "map.opt"
      return mercury__bimap__succeeded = mercury__tree234__foldl_4_p_5(mercury__bimap__TypeInfo_for_K_12, mercury__bimap__TypeInfo_for_V_13, mercury__bimap__TypeInfo_for_A_14, mercury__bimap__Pred_5, mercury__bimap__Forward_6, mercury__bimap__STATE_VARIABLE_List_0_9, mercury__bimap__STATE_VARIABLE_List_10);
    }
#line 693 "bimap.m"
    return mercury__bimap__succeeded;
#line 693 "bimap.m"
  }
#line 286 "bimap.m"
}

#line 285 "bimap.m"
MR_bool MR_CALL 
mercury__bimap__foldl_4_p_4(
#line 285 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_12,
#line 285 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_13,
#line 285 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_A_14,
#line 285 "bimap.m"
  MR_Word mercury__bimap__Pred_5,
#line 285 "bimap.m"
  MR_Word mercury__bimap__HeadVar__2_2,
#line 285 "bimap.m"
  MR_Box mercury__bimap__STATE_VARIABLE_List_0_9,
#line 285 "bimap.m"
  MR_Box * mercury__bimap__STATE_VARIABLE_List_10)
#line 285 "bimap.m"
{
#line 693 "bimap.m"
  {
#line 693 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 693 "bimap.m"
    MR_Word mercury__bimap__Forward_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 0)));
#line 693 "bimap.m"
    MR_Word mercury__bimap__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 1)));

#line 219 "map.opt"
    {
#line 219 "map.opt"
      return mercury__bimap__succeeded = mercury__tree234__foldl_4_p_4(mercury__bimap__TypeInfo_for_K_12, mercury__bimap__TypeInfo_for_V_13, mercury__bimap__TypeInfo_for_A_14, mercury__bimap__Pred_5, mercury__bimap__Forward_6, mercury__bimap__STATE_VARIABLE_List_0_9, mercury__bimap__STATE_VARIABLE_List_10);
    }
#line 693 "bimap.m"
    return mercury__bimap__succeeded;
#line 693 "bimap.m"
  }
#line 285 "bimap.m"
}

#line 284 "bimap.m"
MR_bool MR_CALL 
mercury__bimap__foldl_4_p_3(
#line 284 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_12,
#line 284 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_13,
#line 284 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_A_14,
#line 284 "bimap.m"
  MR_Word mercury__bimap__Pred_5,
#line 284 "bimap.m"
  MR_Word mercury__bimap__HeadVar__2_2,
#line 284 "bimap.m"
  MR_Box mercury__bimap__STATE_VARIABLE_List_0_9,
#line 284 "bimap.m"
  MR_Box * mercury__bimap__STATE_VARIABLE_List_10)
#line 284 "bimap.m"
{
#line 693 "bimap.m"
  {
#line 693 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 693 "bimap.m"
    MR_Word mercury__bimap__Forward_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 0)));
#line 693 "bimap.m"
    MR_Word mercury__bimap__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 1)));

#line 219 "map.opt"
    {
#line 219 "map.opt"
      return mercury__bimap__succeeded = mercury__tree234__foldl_4_p_3(mercury__bimap__TypeInfo_for_K_12, mercury__bimap__TypeInfo_for_V_13, mercury__bimap__TypeInfo_for_A_14, mercury__bimap__Pred_5, mercury__bimap__Forward_6, mercury__bimap__STATE_VARIABLE_List_0_9, mercury__bimap__STATE_VARIABLE_List_10);
    }
#line 693 "bimap.m"
    return mercury__bimap__succeeded;
#line 693 "bimap.m"
  }
#line 284 "bimap.m"
}

#line 283 "bimap.m"
void MR_CALL 
mercury__bimap__foldl_4_p_2(
#line 283 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_12,
#line 283 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_13,
#line 283 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_A_14,
#line 283 "bimap.m"
  MR_Word mercury__bimap__Pred_5,
#line 283 "bimap.m"
  MR_Word mercury__bimap__HeadVar__2_2,
#line 283 "bimap.m"
  MR_Box mercury__bimap__STATE_VARIABLE_List_0_9,
#line 283 "bimap.m"
  MR_Box * mercury__bimap__STATE_VARIABLE_List_10)
#line 283 "bimap.m"
{
#line 693 "bimap.m"
  {
#line 693 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 693 "bimap.m"
    MR_Word mercury__bimap__Forward_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 0)));
#line 693 "bimap.m"
    MR_Word mercury__bimap__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 1)));

#line 219 "map.opt"
    {
#line 219 "map.opt"
      mercury__tree234__foldl_4_p_2(mercury__bimap__TypeInfo_for_K_12, mercury__bimap__TypeInfo_for_V_13, mercury__bimap__TypeInfo_for_A_14, mercury__bimap__Pred_5, mercury__bimap__Forward_6, mercury__bimap__STATE_VARIABLE_List_0_9, mercury__bimap__STATE_VARIABLE_List_10);
#line 219 "map.opt"
      return;
    }
#line 693 "bimap.m"
  }
#line 283 "bimap.m"
}

#line 282 "bimap.m"
void MR_CALL 
mercury__bimap__foldl_4_p_1(
#line 282 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_12,
#line 282 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_13,
#line 282 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_A_14,
#line 282 "bimap.m"
  MR_Word mercury__bimap__Pred_5,
#line 282 "bimap.m"
  MR_Word mercury__bimap__HeadVar__2_2,
#line 282 "bimap.m"
  MR_Box mercury__bimap__STATE_VARIABLE_List_0_9,
#line 282 "bimap.m"
  MR_Box * mercury__bimap__STATE_VARIABLE_List_10)
#line 282 "bimap.m"
{
#line 693 "bimap.m"
  {
#line 693 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 693 "bimap.m"
    MR_Word mercury__bimap__Forward_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 0)));
#line 693 "bimap.m"
    MR_Word mercury__bimap__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 1)));

#line 219 "map.opt"
    {
#line 219 "map.opt"
      mercury__tree234__foldl_4_p_1(mercury__bimap__TypeInfo_for_K_12, mercury__bimap__TypeInfo_for_V_13, mercury__bimap__TypeInfo_for_A_14, mercury__bimap__Pred_5, mercury__bimap__Forward_6, mercury__bimap__STATE_VARIABLE_List_0_9, mercury__bimap__STATE_VARIABLE_List_10);
#line 219 "map.opt"
      return;
    }
#line 693 "bimap.m"
  }
#line 282 "bimap.m"
}

#line 281 "bimap.m"
void MR_CALL 
mercury__bimap__foldl_4_p_0(
#line 281 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_12,
#line 281 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_13,
#line 281 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_A_14,
#line 281 "bimap.m"
  MR_Word mercury__bimap__Pred_5,
#line 281 "bimap.m"
  MR_Word mercury__bimap__HeadVar__2_2,
#line 281 "bimap.m"
  MR_Box mercury__bimap__STATE_VARIABLE_List_0_9,
#line 281 "bimap.m"
  MR_Box * mercury__bimap__STATE_VARIABLE_List_10)
#line 281 "bimap.m"
{
#line 693 "bimap.m"
  {
#line 693 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 693 "bimap.m"
    MR_Word mercury__bimap__Forward_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 0)));
#line 693 "bimap.m"
    MR_Word mercury__bimap__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 1)));

#line 219 "map.opt"
    {
#line 219 "map.opt"
      mercury__tree234__foldl_4_p_0(mercury__bimap__TypeInfo_for_K_12, mercury__bimap__TypeInfo_for_V_13, mercury__bimap__TypeInfo_for_A_14, mercury__bimap__Pred_5, mercury__bimap__Forward_6, mercury__bimap__STATE_VARIABLE_List_0_9, mercury__bimap__STATE_VARIABLE_List_10);
#line 219 "map.opt"
      return;
    }
#line 693 "bimap.m"
  }
#line 281 "bimap.m"
}

#line 279 "bimap.m"
MR_Box MR_CALL 
mercury__bimap__foldl_3_f_0(
#line 279 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_9,
#line 279 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_10,
#line 279 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_A_11,
#line 279 "bimap.m"
  MR_Word mercury__bimap__Func_5,
#line 279 "bimap.m"
  MR_Word mercury__bimap__HeadVar__2_2,
#line 279 "bimap.m"
  MR_Box mercury__bimap__List0_8)
#line 279 "bimap.m"
{
#line 690 "bimap.m"
  {
#line 690 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 690 "bimap.m"
    MR_Box mercury__bimap__HeadVar__4_4;
#line 690 "bimap.m"
    MR_Word mercury__bimap__Forward_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 0)));
#line 690 "bimap.m"
    MR_Word mercury__bimap__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 1)));

#line 219 "map.opt"
    {
#line 219 "map.opt"
      mercury__bimap__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(mercury__bimap__TypeInfo_for_K_9, mercury__bimap__TypeInfo_for_V_10, mercury__bimap__TypeInfo_for_A_11, mercury__bimap__Func_5, mercury__bimap__Forward_6, mercury__bimap__List0_8, &mercury__bimap__HeadVar__4_4);
    }
#line 690 "bimap.m"
    return mercury__bimap__HeadVar__4_4;
#line 690 "bimap.m"
  }
#line 279 "bimap.m"
}

#line 273 "bimap.m"
void MR_CALL 
mercury__bimap__map_values_3_p_0(
#line 273 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_10,
#line 273 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_11,
#line 273 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_W_12,
#line 273 "bimap.m"
  MR_Word mercury__bimap__ValueMap_4,
#line 273 "bimap.m"
  MR_Word mercury__bimap__BM0_5,
#line 273 "bimap.m"
  MR_Word * mercury__bimap__BM_6)
#line 273 "bimap.m"
{
#line 642 "bimap.m"
  {
#line 642 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 642 "bimap.m"
    MR_Word mercury__bimap__L0_7;
#line 642 "bimap.m"
    MR_Word mercury__bimap__L_8;
#line 642 "bimap.m"
    MR_Word mercury__bimap__V_9_9;
#line 642 "bimap.m"
    MR_Word mercury__bimap__Forward_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__BM0_5, (MR_Integer) 0)));
#line 642 "bimap.m"
    MR_Word mercury__bimap__V_5_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 642 "bimap.m"
    MR_Word mercury__bimap__V_25_25;
#line 642 "bimap.m"
    MR_Word mercury__bimap__Forward_28;
#line 642 "bimap.m"
    MR_Word mercury__bimap__Reverse_29;
#line 591 "bimap.m"
    MR_Word mercury__bimap__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__BM0_5, (MR_Integer) 1)));

#line 86 "tree234.opt"
    {
#line 86 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__bimap__TypeInfo_for_K_10, mercury__bimap__TypeInfo_for_V_11, mercury__bimap__Forward_14, mercury__bimap__V_5_20, &mercury__bimap__L0_7);
    }
#line 644 "bimap.m"
    mercury__bimap__V_9_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 644 "bimap.m"
    {
#line 644 "bimap.m"
      mercury__bimap__map_values_2_4_p_0(mercury__bimap__TypeInfo_for_K_10, mercury__bimap__TypeInfo_for_V_11, mercury__bimap__TypeInfo_for_W_12, mercury__bimap__ValueMap_4, mercury__bimap__L0_7, mercury__bimap__V_9_9, &mercury__bimap__L_8);
    }
#line 48 "tree234.opt"
    mercury__bimap__Forward_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 48 "tree234.opt"
    mercury__bimap__Reverse_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 360 "bimap.m"
    mercury__bimap__V_25_25 = (MR_Word) &mercury__bimap_scalar_common_4[2];
#line 604 "bimap.m"
    {
#line 604 "bimap.m"
      mercury__bimap__det_insert_from_assoc_list_3_p_0(mercury__bimap__TypeInfo_for_K_10, mercury__bimap__TypeInfo_for_W_12, mercury__bimap__L_8, mercury__bimap__V_25_25, mercury__bimap__BM_6);
#line 604 "bimap.m"
      return;
    }
#line 642 "bimap.m"
  }
#line 273 "bimap.m"
}

#line 272 "bimap.m"
MR_Word MR_CALL 
mercury__bimap__map_values_2_f_0(
#line 272 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_10,
#line 272 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_11,
#line 272 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_W_12,
#line 272 "bimap.m"
  MR_Word mercury__bimap__ValueMap_4,
#line 272 "bimap.m"
  MR_Word mercury__bimap__BM0_5)
#line 272 "bimap.m"
{
#line 647 "bimap.m"
  {
#line 647 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 647 "bimap.m"
    MR_Word mercury__bimap__BM_6;
#line 647 "bimap.m"
    MR_Word mercury__bimap__L0_7;
#line 647 "bimap.m"
    MR_Word mercury__bimap__L_8;
#line 647 "bimap.m"
    MR_Word mercury__bimap__V_9_9;
#line 647 "bimap.m"
    MR_Word mercury__bimap__Forward_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__BM0_5, (MR_Integer) 0)));
#line 647 "bimap.m"
    MR_Word mercury__bimap__V_5_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 647 "bimap.m"
    MR_Word mercury__bimap__V_25_25;
#line 647 "bimap.m"
    MR_Word mercury__bimap__Forward_28;
#line 647 "bimap.m"
    MR_Word mercury__bimap__Reverse_29;
#line 591 "bimap.m"
    MR_Word mercury__bimap__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__BM0_5, (MR_Integer) 1)));

#line 86 "tree234.opt"
    {
#line 86 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__bimap__TypeInfo_for_K_10, mercury__bimap__TypeInfo_for_V_11, mercury__bimap__Forward_14, mercury__bimap__V_5_20, &mercury__bimap__L0_7);
    }
#line 649 "bimap.m"
    mercury__bimap__V_9_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 649 "bimap.m"
    {
#line 649 "bimap.m"
      mercury__bimap__map_values_func_2_4_p_0(mercury__bimap__TypeInfo_for_K_10, mercury__bimap__TypeInfo_for_V_11, mercury__bimap__TypeInfo_for_W_12, mercury__bimap__ValueMap_4, mercury__bimap__L0_7, mercury__bimap__V_9_9, &mercury__bimap__L_8);
    }
#line 48 "tree234.opt"
    mercury__bimap__Forward_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 48 "tree234.opt"
    mercury__bimap__Reverse_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 360 "bimap.m"
    mercury__bimap__V_25_25 = (MR_Word) &mercury__bimap_scalar_common_4[2];
#line 604 "bimap.m"
    {
#line 604 "bimap.m"
      mercury__bimap__det_insert_from_assoc_list_3_p_0(mercury__bimap__TypeInfo_for_K_10, mercury__bimap__TypeInfo_for_W_12, mercury__bimap__L_8, mercury__bimap__V_25_25, &mercury__bimap__BM_6);
    }
#line 647 "bimap.m"
    return mercury__bimap__BM_6;
#line 647 "bimap.m"
  }
#line 272 "bimap.m"
}

#line 266 "bimap.m"
void MR_CALL 
mercury__bimap__map_keys_3_p_0(
#line 266 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_10,
#line 266 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_11,
#line 266 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_L_12,
#line 266 "bimap.m"
  MR_Word mercury__bimap__KeyMap_4,
#line 266 "bimap.m"
  MR_Word mercury__bimap__BM0_5,
#line 266 "bimap.m"
  MR_Word * mercury__bimap__BM_6)
#line 266 "bimap.m"
{
#line 632 "bimap.m"
  {
#line 632 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 632 "bimap.m"
    MR_Word mercury__bimap__L0_7;
#line 632 "bimap.m"
    MR_Word mercury__bimap__L_8;
#line 632 "bimap.m"
    MR_Word mercury__bimap__V_9_9;
#line 632 "bimap.m"
    MR_Word mercury__bimap__Forward_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__BM0_5, (MR_Integer) 0)));
#line 632 "bimap.m"
    MR_Word mercury__bimap__V_5_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 632 "bimap.m"
    MR_Word mercury__bimap__V_25_25;
#line 632 "bimap.m"
    MR_Word mercury__bimap__Forward_28;
#line 632 "bimap.m"
    MR_Word mercury__bimap__Reverse_29;
#line 591 "bimap.m"
    MR_Word mercury__bimap__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__BM0_5, (MR_Integer) 1)));

#line 86 "tree234.opt"
    {
#line 86 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__bimap__TypeInfo_for_K_11, mercury__bimap__TypeInfo_for_V_10, mercury__bimap__Forward_14, mercury__bimap__V_5_20, &mercury__bimap__L0_7);
    }
#line 634 "bimap.m"
    mercury__bimap__V_9_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 634 "bimap.m"
    {
#line 634 "bimap.m"
      mercury__bimap__map_keys_2_4_p_0(mercury__bimap__TypeInfo_for_V_10, mercury__bimap__TypeInfo_for_K_11, mercury__bimap__TypeInfo_for_L_12, mercury__bimap__KeyMap_4, mercury__bimap__L0_7, mercury__bimap__V_9_9, &mercury__bimap__L_8);
    }
#line 48 "tree234.opt"
    mercury__bimap__Forward_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 48 "tree234.opt"
    mercury__bimap__Reverse_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 360 "bimap.m"
    mercury__bimap__V_25_25 = (MR_Word) &mercury__bimap_scalar_common_4[1];
#line 604 "bimap.m"
    {
#line 604 "bimap.m"
      mercury__bimap__det_insert_from_assoc_list_3_p_0(mercury__bimap__TypeInfo_for_L_12, mercury__bimap__TypeInfo_for_V_10, mercury__bimap__L_8, mercury__bimap__V_25_25, mercury__bimap__BM_6);
#line 604 "bimap.m"
      return;
    }
#line 632 "bimap.m"
  }
#line 266 "bimap.m"
}

#line 265 "bimap.m"
MR_Word MR_CALL 
mercury__bimap__map_keys_2_f_0(
#line 265 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_10,
#line 265 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_11,
#line 265 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_L_12,
#line 265 "bimap.m"
  MR_Word mercury__bimap__KeyMap_4,
#line 265 "bimap.m"
  MR_Word mercury__bimap__BM0_5)
#line 265 "bimap.m"
{
#line 637 "bimap.m"
  {
#line 637 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 637 "bimap.m"
    MR_Word mercury__bimap__BM_6;
#line 637 "bimap.m"
    MR_Word mercury__bimap__L0_7;
#line 637 "bimap.m"
    MR_Word mercury__bimap__L_8;
#line 637 "bimap.m"
    MR_Word mercury__bimap__V_9_9;
#line 637 "bimap.m"
    MR_Word mercury__bimap__Forward_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__BM0_5, (MR_Integer) 0)));
#line 637 "bimap.m"
    MR_Word mercury__bimap__V_5_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 637 "bimap.m"
    MR_Word mercury__bimap__V_25_25;
#line 637 "bimap.m"
    MR_Word mercury__bimap__Forward_28;
#line 637 "bimap.m"
    MR_Word mercury__bimap__Reverse_29;
#line 591 "bimap.m"
    MR_Word mercury__bimap__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__BM0_5, (MR_Integer) 1)));

#line 86 "tree234.opt"
    {
#line 86 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__bimap__TypeInfo_for_K_11, mercury__bimap__TypeInfo_for_V_10, mercury__bimap__Forward_14, mercury__bimap__V_5_20, &mercury__bimap__L0_7);
    }
#line 639 "bimap.m"
    mercury__bimap__V_9_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 639 "bimap.m"
    {
#line 639 "bimap.m"
      mercury__bimap__map_keys_func_2_4_p_0(mercury__bimap__TypeInfo_for_V_10, mercury__bimap__TypeInfo_for_K_11, mercury__bimap__TypeInfo_for_L_12, mercury__bimap__KeyMap_4, mercury__bimap__L0_7, mercury__bimap__V_9_9, &mercury__bimap__L_8);
    }
#line 48 "tree234.opt"
    mercury__bimap__Forward_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 48 "tree234.opt"
    mercury__bimap__Reverse_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 360 "bimap.m"
    mercury__bimap__V_25_25 = (MR_Word) &mercury__bimap_scalar_common_4[1];
#line 604 "bimap.m"
    {
#line 604 "bimap.m"
      mercury__bimap__det_insert_from_assoc_list_3_p_0(mercury__bimap__TypeInfo_for_L_12, mercury__bimap__TypeInfo_for_V_10, mercury__bimap__L_8, mercury__bimap__V_25_25, &mercury__bimap__BM_6);
    }
#line 637 "bimap.m"
    return mercury__bimap__BM_6;
#line 637 "bimap.m"
  }
#line 265 "bimap.m"
}

#line 259 "bimap.m"
void MR_CALL 
mercury__bimap__apply_reverse_map_to_list_3_p_0(
#line 259 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_8,
#line 259 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_9,
#line 259 "bimap.m"
  MR_Word mercury__bimap__HeadVar__1_1,
#line 259 "bimap.m"
  MR_Word mercury__bimap__Vs_6,
#line 259 "bimap.m"
  MR_Word * mercury__bimap__Ks_7)
#line 259 "bimap.m"
{
#line 629 "bimap.m"
  {
#line 629 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 629 "bimap.m"
    MR_Word mercury__bimap__Reverse_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 1)));
#line 629 "bimap.m"
    MR_Word mercury__bimap__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 0)));

#line 630 "bimap.m"
    {
#line 630 "bimap.m"
      mercury__map__apply_to_list_3_p_0(mercury__bimap__TypeInfo_for_V_9, mercury__bimap__TypeInfo_for_K_8, mercury__bimap__Vs_6, mercury__bimap__Reverse_5, mercury__bimap__Ks_7);
#line 630 "bimap.m"
      return;
    }
#line 629 "bimap.m"
  }
#line 259 "bimap.m"
}

#line 258 "bimap.m"
MR_Word MR_CALL 
mercury__bimap__apply_reverse_map_to_list_2_f_0(
#line 258 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_7,
#line 258 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_8,
#line 258 "bimap.m"
  MR_Word mercury__bimap__BM_4,
#line 258 "bimap.m"
  MR_Word mercury__bimap__Vs_5)
#line 258 "bimap.m"
{
#line 629 "bimap.m"
  {
#line 629 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 629 "bimap.m"
    MR_Word mercury__bimap__Ks_6;
#line 629 "bimap.m"
    MR_Word mercury__bimap__Reverse_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__BM_4, (MR_Integer) 1)));
#line 629 "bimap.m"
    MR_Word mercury__bimap__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__BM_4, (MR_Integer) 0)));

#line 630 "bimap.m"
    {
#line 630 "bimap.m"
      mercury__map__apply_to_list_3_p_0(mercury__bimap__TypeInfo_for_V_8, mercury__bimap__TypeInfo_for_K_7, mercury__bimap__Vs_5, mercury__bimap__Reverse_12, &mercury__bimap__Ks_6);
    }
#line 629 "bimap.m"
    return mercury__bimap__Ks_6;
#line 629 "bimap.m"
  }
#line 258 "bimap.m"
}

#line 255 "bimap.m"
void MR_CALL 
mercury__bimap__apply_forward_map_to_list_3_p_0(
#line 255 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_8,
#line 255 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_9,
#line 255 "bimap.m"
  MR_Word mercury__bimap__HeadVar__1_1,
#line 255 "bimap.m"
  MR_Word mercury__bimap__Ks_6,
#line 255 "bimap.m"
  MR_Word * mercury__bimap__Vs_7)
#line 255 "bimap.m"
{
#line 623 "bimap.m"
  {
#line 623 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 623 "bimap.m"
    MR_Word mercury__bimap__Forward_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 0)));
#line 623 "bimap.m"
    MR_Word mercury__bimap__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 1)));

#line 624 "bimap.m"
    {
#line 624 "bimap.m"
      mercury__map__apply_to_list_3_p_0(mercury__bimap__TypeInfo_for_K_8, mercury__bimap__TypeInfo_for_V_9, mercury__bimap__Ks_6, mercury__bimap__Forward_4, mercury__bimap__Vs_7);
#line 624 "bimap.m"
      return;
    }
#line 623 "bimap.m"
  }
#line 255 "bimap.m"
}

#line 254 "bimap.m"
MR_Word MR_CALL 
mercury__bimap__apply_forward_map_to_list_2_f_0(
#line 254 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_7,
#line 254 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_8,
#line 254 "bimap.m"
  MR_Word mercury__bimap__BM_4,
#line 254 "bimap.m"
  MR_Word mercury__bimap__Ks_5)
#line 254 "bimap.m"
{
#line 623 "bimap.m"
  {
#line 623 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 623 "bimap.m"
    MR_Word mercury__bimap__Vs_6;
#line 623 "bimap.m"
    MR_Word mercury__bimap__Forward_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__BM_4, (MR_Integer) 0)));
#line 623 "bimap.m"
    MR_Word mercury__bimap__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__BM_4, (MR_Integer) 1)));

#line 624 "bimap.m"
    {
#line 624 "bimap.m"
      mercury__map__apply_to_list_3_p_0(mercury__bimap__TypeInfo_for_K_7, mercury__bimap__TypeInfo_for_V_8, mercury__bimap__Ks_5, mercury__bimap__Forward_11, &mercury__bimap__Vs_6);
    }
#line 623 "bimap.m"
    return mercury__bimap__Vs_6;
#line 623 "bimap.m"
  }
#line 254 "bimap.m"
}

#line 251 "bimap.m"
void MR_CALL 
mercury__bimap__det_from_corresponding_lists_3_p_0(
#line 251 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_8,
#line 251 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_9,
#line 251 "bimap.m"
  MR_Word mercury__bimap__Ks_4,
#line 251 "bimap.m"
  MR_Word mercury__bimap__Vs_5,
#line 251 "bimap.m"
  MR_Word * mercury__bimap__BM_6)
#line 251 "bimap.m"
{
#line 616 "bimap.m"
  {
#line 616 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 616 "bimap.m"
    MR_Word mercury__bimap__L_7;
#line 616 "bimap.m"
    MR_Word mercury__bimap__V_12_12;
#line 616 "bimap.m"
    MR_Word mercury__bimap__Forward_15;
#line 616 "bimap.m"
    MR_Word mercury__bimap__Reverse_16;

#line 617 "bimap.m"
    {
#line 617 "bimap.m"
      mercury__assoc_list__from_corresponding_lists_3_p_0(mercury__bimap__TypeInfo_for_K_8, mercury__bimap__TypeInfo_for_V_9, mercury__bimap__Ks_4, mercury__bimap__Vs_5, &mercury__bimap__L_7);
    }
#line 48 "tree234.opt"
    mercury__bimap__Forward_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 48 "tree234.opt"
    mercury__bimap__Reverse_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 360 "bimap.m"
    mercury__bimap__V_12_12 = (MR_Word) &mercury__bimap_scalar_common_4[0];
#line 604 "bimap.m"
    {
#line 604 "bimap.m"
      mercury__bimap__det_insert_from_assoc_list_3_p_0(mercury__bimap__TypeInfo_for_K_8, mercury__bimap__TypeInfo_for_V_9, mercury__bimap__L_7, mercury__bimap__V_12_12, mercury__bimap__BM_6);
#line 604 "bimap.m"
      return;
    }
#line 616 "bimap.m"
  }
#line 251 "bimap.m"
}

#line 250 "bimap.m"
MR_Word MR_CALL 
mercury__bimap__det_from_corresponding_lists_2_f_0(
#line 250 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_7,
#line 250 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_8,
#line 250 "bimap.m"
  MR_Word mercury__bimap__Ks_4,
#line 250 "bimap.m"
  MR_Word mercury__bimap__Vs_5)
#line 250 "bimap.m"
{
#line 616 "bimap.m"
  {
#line 616 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 616 "bimap.m"
    MR_Word mercury__bimap__BM_6;
#line 616 "bimap.m"
    MR_Word mercury__bimap__L_12;
#line 616 "bimap.m"
    MR_Word mercury__bimap__V_15_15;
#line 616 "bimap.m"
    MR_Word mercury__bimap__Forward_18;
#line 616 "bimap.m"
    MR_Word mercury__bimap__Reverse_19;

#line 617 "bimap.m"
    {
#line 617 "bimap.m"
      mercury__assoc_list__from_corresponding_lists_3_p_0(mercury__bimap__TypeInfo_for_K_7, mercury__bimap__TypeInfo_for_V_8, mercury__bimap__Ks_4, mercury__bimap__Vs_5, &mercury__bimap__L_12);
    }
#line 48 "tree234.opt"
    mercury__bimap__Forward_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 48 "tree234.opt"
    mercury__bimap__Reverse_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 360 "bimap.m"
    mercury__bimap__V_15_15 = (MR_Word) &mercury__bimap_scalar_common_4[0];
#line 604 "bimap.m"
    {
#line 604 "bimap.m"
      mercury__bimap__det_insert_from_assoc_list_3_p_0(mercury__bimap__TypeInfo_for_K_7, mercury__bimap__TypeInfo_for_V_8, mercury__bimap__L_12, mercury__bimap__V_15_15, &mercury__bimap__BM_6);
    }
#line 616 "bimap.m"
    return mercury__bimap__BM_6;
#line 616 "bimap.m"
  }
#line 250 "bimap.m"
}

#line 244 "bimap.m"
MR_bool MR_CALL 
mercury__bimap__from_corresponding_lists_3_p_0(
#line 244 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_8,
#line 244 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_9,
#line 244 "bimap.m"
  MR_Word mercury__bimap__Ks_4,
#line 244 "bimap.m"
  MR_Word mercury__bimap__Vs_5,
#line 244 "bimap.m"
  MR_Word * mercury__bimap__BM_6)
#line 244 "bimap.m"
{
#line 609 "bimap.m"
  {
#line 609 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 609 "bimap.m"
    MR_Word mercury__bimap__L_7;
#line 609 "bimap.m"
    MR_Word mercury__bimap__V_12_12;
#line 609 "bimap.m"
    MR_Word mercury__bimap__Forward_15;
#line 609 "bimap.m"
    MR_Word mercury__bimap__Reverse_16;

#line 610 "bimap.m"
    {
#line 610 "bimap.m"
      mercury__assoc_list__from_corresponding_lists_3_p_0(mercury__bimap__TypeInfo_for_K_8, mercury__bimap__TypeInfo_for_V_9, mercury__bimap__Ks_4, mercury__bimap__Vs_5, &mercury__bimap__L_7);
    }
#line 48 "tree234.opt"
    mercury__bimap__Forward_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 48 "tree234.opt"
    mercury__bimap__Reverse_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 360 "bimap.m"
    mercury__bimap__V_12_12 = (MR_Word) &mercury__bimap_scalar_common_4[0];
#line 598 "bimap.m"
    {
#line 598 "bimap.m"
      return mercury__bimap__succeeded = mercury__bimap__insert_from_assoc_list_3_p_0(mercury__bimap__TypeInfo_for_K_8, mercury__bimap__TypeInfo_for_V_9, mercury__bimap__L_7, mercury__bimap__V_12_12, mercury__bimap__BM_6);
    }
#line 609 "bimap.m"
    return mercury__bimap__succeeded;
#line 609 "bimap.m"
  }
#line 244 "bimap.m"
}

#line 242 "bimap.m"
MR_bool MR_CALL 
mercury__bimap__from_corresponding_lists_2_f_0(
#line 242 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_7,
#line 242 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_8,
#line 242 "bimap.m"
  MR_Word mercury__bimap__Ks_4,
#line 242 "bimap.m"
  MR_Word mercury__bimap__Vs_5,
#line 242 "bimap.m"
  MR_Word * mercury__bimap__BM_6)
#line 242 "bimap.m"
{
#line 609 "bimap.m"
  {
#line 609 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 609 "bimap.m"
    MR_Word mercury__bimap__L_12;
#line 609 "bimap.m"
    MR_Word mercury__bimap__V_15_15;
#line 609 "bimap.m"
    MR_Word mercury__bimap__Forward_18;
#line 609 "bimap.m"
    MR_Word mercury__bimap__Reverse_19;

#line 610 "bimap.m"
    {
#line 610 "bimap.m"
      mercury__assoc_list__from_corresponding_lists_3_p_0(mercury__bimap__TypeInfo_for_K_7, mercury__bimap__TypeInfo_for_V_8, mercury__bimap__Ks_4, mercury__bimap__Vs_5, &mercury__bimap__L_12);
    }
#line 48 "tree234.opt"
    mercury__bimap__Forward_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 48 "tree234.opt"
    mercury__bimap__Reverse_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 360 "bimap.m"
    mercury__bimap__V_15_15 = (MR_Word) &mercury__bimap_scalar_common_4[0];
#line 598 "bimap.m"
    {
#line 598 "bimap.m"
      return mercury__bimap__succeeded = mercury__bimap__insert_from_assoc_list_3_p_0(mercury__bimap__TypeInfo_for_K_7, mercury__bimap__TypeInfo_for_V_8, mercury__bimap__L_12, mercury__bimap__V_15_15, mercury__bimap__BM_6);
    }
#line 609 "bimap.m"
    return mercury__bimap__succeeded;
#line 609 "bimap.m"
  }
#line 242 "bimap.m"
}

#line 236 "bimap.m"
void MR_CALL 
mercury__bimap__det_from_assoc_list_2_p_0(
#line 236 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_6,
#line 236 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_7,
#line 236 "bimap.m"
  MR_Word mercury__bimap__L_3,
#line 236 "bimap.m"
  MR_Word * mercury__bimap__Bimap_4)
#line 236 "bimap.m"
{
#line 603 "bimap.m"
  {
#line 603 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 603 "bimap.m"
    MR_Word mercury__bimap__V_5_5 = (MR_Word) &mercury__bimap_scalar_common_4[0];
#line 603 "bimap.m"
    MR_Word mercury__bimap__Forward_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 603 "bimap.m"
    MR_Word mercury__bimap__Reverse_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 604 "bimap.m"
    {
#line 604 "bimap.m"
      mercury__bimap__det_insert_from_assoc_list_3_p_0(mercury__bimap__TypeInfo_for_K_6, mercury__bimap__TypeInfo_for_V_7, mercury__bimap__L_3, mercury__bimap__V_5_5, mercury__bimap__Bimap_4);
#line 604 "bimap.m"
      return;
    }
#line 603 "bimap.m"
  }
#line 236 "bimap.m"
}

#line 235 "bimap.m"
MR_Word MR_CALL 
mercury__bimap__det_from_assoc_list_1_f_0(
#line 235 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_5,
#line 235 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_6,
#line 235 "bimap.m"
  MR_Word mercury__bimap__L_3)
#line 235 "bimap.m"
{
#line 603 "bimap.m"
  {
#line 603 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 603 "bimap.m"
    MR_Word mercury__bimap__Bimap_4;
#line 603 "bimap.m"
    MR_Word mercury__bimap__V_9_9 = (MR_Word) &mercury__bimap_scalar_common_4[0];
#line 603 "bimap.m"
    MR_Word mercury__bimap__Forward_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 603 "bimap.m"
    MR_Word mercury__bimap__Reverse_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 604 "bimap.m"
    {
#line 604 "bimap.m"
      mercury__bimap__det_insert_from_assoc_list_3_p_0(mercury__bimap__TypeInfo_for_K_5, mercury__bimap__TypeInfo_for_V_6, mercury__bimap__L_3, mercury__bimap__V_9_9, &mercury__bimap__Bimap_4);
    }
#line 603 "bimap.m"
    return mercury__bimap__Bimap_4;
#line 603 "bimap.m"
  }
#line 235 "bimap.m"
}

#line 229 "bimap.m"
MR_bool MR_CALL 
mercury__bimap__from_assoc_list_2_p_0(
#line 229 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_6,
#line 229 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_7,
#line 229 "bimap.m"
  MR_Word mercury__bimap__L_3,
#line 229 "bimap.m"
  MR_Word * mercury__bimap__Bimap_4)
#line 229 "bimap.m"
{
#line 597 "bimap.m"
  {
#line 597 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 597 "bimap.m"
    MR_Word mercury__bimap__V_5_5 = (MR_Word) &mercury__bimap_scalar_common_4[0];
#line 597 "bimap.m"
    MR_Word mercury__bimap__Forward_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 597 "bimap.m"
    MR_Word mercury__bimap__Reverse_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 598 "bimap.m"
    {
#line 598 "bimap.m"
      return mercury__bimap__succeeded = mercury__bimap__insert_from_assoc_list_3_p_0(mercury__bimap__TypeInfo_for_K_6, mercury__bimap__TypeInfo_for_V_7, mercury__bimap__L_3, mercury__bimap__V_5_5, mercury__bimap__Bimap_4);
    }
#line 597 "bimap.m"
    return mercury__bimap__succeeded;
#line 597 "bimap.m"
  }
#line 229 "bimap.m"
}

#line 228 "bimap.m"
MR_bool MR_CALL 
mercury__bimap__from_assoc_list_1_f_0(
#line 228 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_5,
#line 228 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_6,
#line 228 "bimap.m"
  MR_Word mercury__bimap__AL_3,
#line 228 "bimap.m"
  MR_Word * mercury__bimap__BM_4)
#line 228 "bimap.m"
{
#line 597 "bimap.m"
  {
#line 597 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 597 "bimap.m"
    MR_Word mercury__bimap__V_9_9 = (MR_Word) &mercury__bimap_scalar_common_4[0];
#line 597 "bimap.m"
    MR_Word mercury__bimap__Forward_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 597 "bimap.m"
    MR_Word mercury__bimap__Reverse_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 598 "bimap.m"
    {
#line 598 "bimap.m"
      return mercury__bimap__succeeded = mercury__bimap__insert_from_assoc_list_3_p_0(mercury__bimap__TypeInfo_for_K_5, mercury__bimap__TypeInfo_for_V_6, mercury__bimap__AL_3, mercury__bimap__V_9_9, mercury__bimap__BM_4);
    }
#line 597 "bimap.m"
    return mercury__bimap__succeeded;
#line 597 "bimap.m"
  }
#line 228 "bimap.m"
}

#line 222 "bimap.m"
void MR_CALL 
mercury__bimap__to_assoc_list_2_p_0(
#line 222 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_6,
#line 222 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_7,
#line 222 "bimap.m"
  MR_Word mercury__bimap__HeadVar__1_1,
#line 222 "bimap.m"
  MR_Word * mercury__bimap__L_5)
#line 222 "bimap.m"
{
#line 591 "bimap.m"
  {
#line 591 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 591 "bimap.m"
    MR_Word mercury__bimap__Forward_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 0)));
#line 591 "bimap.m"
    MR_Word mercury__bimap__V_5_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 591 "bimap.m"
    MR_Word mercury__bimap__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 1)));

#line 86 "tree234.opt"
    {
#line 86 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__bimap__TypeInfo_for_K_6, mercury__bimap__TypeInfo_for_V_7, mercury__bimap__Forward_3, mercury__bimap__V_5_12, mercury__bimap__L_5);
#line 86 "tree234.opt"
      return;
    }
#line 591 "bimap.m"
  }
#line 222 "bimap.m"
}

#line 221 "bimap.m"
MR_Word MR_CALL 
mercury__bimap__to_assoc_list_1_f_0(
#line 221 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_5,
#line 221 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_6,
#line 221 "bimap.m"
  MR_Word mercury__bimap__BM_3)
#line 221 "bimap.m"
{
#line 591 "bimap.m"
  {
#line 591 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 591 "bimap.m"
    MR_Word mercury__bimap__AL_4;
#line 591 "bimap.m"
    MR_Word mercury__bimap__Forward_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__BM_3, (MR_Integer) 0)));
#line 591 "bimap.m"
    MR_Word mercury__bimap__V_5_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 591 "bimap.m"
    MR_Word mercury__bimap__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__BM_3, (MR_Integer) 1)));

#line 86 "tree234.opt"
    {
#line 86 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__bimap__TypeInfo_for_K_5, mercury__bimap__TypeInfo_for_V_6, mercury__bimap__Forward_8, mercury__bimap__V_5_14, &mercury__bimap__AL_4);
    }
#line 591 "bimap.m"
    return mercury__bimap__AL_4;
#line 591 "bimap.m"
  }
#line 221 "bimap.m"
}

#line 217 "bimap.m"
MR_Integer MR_CALL 
mercury__bimap__count_1_f_0(
#line 217 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_7,
#line 217 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_8,
#line 217 "bimap.m"
  MR_Word mercury__bimap__BM_3)
#line 217 "bimap.m"
{
#line 584 "bimap.m"
  {
#line 584 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 584 "bimap.m"
    MR_Integer mercury__bimap__Count_4;
#line 584 "bimap.m"
    MR_Word mercury__bimap__Forward_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__BM_3, (MR_Integer) 0)));
#line 585 "bimap.m"
    MR_Word mercury__bimap__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__BM_3, (MR_Integer) 1)));

#line 167 "map.opt"
    {
#line 167 "map.opt"
      mercury__tree234__count_2_p_0(mercury__bimap__TypeInfo_for_K_7, mercury__bimap__TypeInfo_for_V_8, mercury__bimap__Forward_5, &mercury__bimap__Count_4);
    }
#line 584 "bimap.m"
    return mercury__bimap__Count_4;
#line 584 "bimap.m"
  }
#line 217 "bimap.m"
}

#line 212 "bimap.m"
void MR_CALL 
mercury__bimap__overlay_3_p_0(
#line 212 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_8,
#line 212 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_9,
#line 212 "bimap.m"
  MR_Word mercury__bimap__BMA_4,
#line 212 "bimap.m"
  MR_Word mercury__bimap__BMB_5,
#line 212 "bimap.m"
  MR_Word * mercury__bimap__BM_6)
#line 212 "bimap.m"
{
#line 572 "bimap.m"
  {
#line 572 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 572 "bimap.m"
    MR_Word mercury__bimap__KVBs_7;
#line 572 "bimap.m"
    MR_Word mercury__bimap__Forward_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__BMB_5, (MR_Integer) 0)));
#line 572 "bimap.m"
    MR_Word mercury__bimap__V_5_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 591 "bimap.m"
    MR_Word mercury__bimap__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__BMB_5, (MR_Integer) 1)));

#line 86 "tree234.opt"
    {
#line 86 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__bimap__TypeInfo_for_K_8, mercury__bimap__TypeInfo_for_V_9, mercury__bimap__Forward_11, mercury__bimap__V_5_17, &mercury__bimap__KVBs_7);
    }
#line 574 "bimap.m"
    {
#line 574 "bimap.m"
      mercury__bimap__overlay_2_3_p_0(mercury__bimap__TypeInfo_for_K_8, mercury__bimap__TypeInfo_for_V_9, mercury__bimap__KVBs_7, mercury__bimap__BMA_4, mercury__bimap__BM_6);
#line 574 "bimap.m"
      return;
    }
#line 572 "bimap.m"
  }
#line 212 "bimap.m"
}

#line 211 "bimap.m"
MR_Word MR_CALL 
mercury__bimap__overlay_2_f_0(
#line 211 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_7,
#line 211 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_8,
#line 211 "bimap.m"
  MR_Word mercury__bimap__BMA_4,
#line 211 "bimap.m"
  MR_Word mercury__bimap__BMB_5)
#line 211 "bimap.m"
{
#line 572 "bimap.m"
  {
#line 572 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 572 "bimap.m"
    MR_Word mercury__bimap__BM_6;
#line 572 "bimap.m"
    MR_Word mercury__bimap__KVBs_12;
#line 572 "bimap.m"
    MR_Word mercury__bimap__Forward_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__BMB_5, (MR_Integer) 0)));
#line 572 "bimap.m"
    MR_Word mercury__bimap__V_5_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 591 "bimap.m"
    MR_Word mercury__bimap__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__BMB_5, (MR_Integer) 1)));

#line 86 "tree234.opt"
    {
#line 86 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__bimap__TypeInfo_for_K_7, mercury__bimap__TypeInfo_for_V_8, mercury__bimap__Forward_14, mercury__bimap__V_5_20, &mercury__bimap__KVBs_12);
    }
#line 574 "bimap.m"
    {
#line 574 "bimap.m"
      mercury__bimap__overlay_2_3_p_0(mercury__bimap__TypeInfo_for_K_7, mercury__bimap__TypeInfo_for_V_8, mercury__bimap__KVBs_12, mercury__bimap__BMA_4, &mercury__bimap__BM_6);
    }
#line 572 "bimap.m"
    return mercury__bimap__BM_6;
#line 572 "bimap.m"
  }
#line 211 "bimap.m"
}

#line 204 "bimap.m"
void MR_CALL 
mercury__bimap__delete_values_3_p_0(
#line 204 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_14,
#line 204 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_15,
#line 204 "bimap.m"
  MR_Word mercury__bimap__HeadVar__1_1,
#line 204 "bimap.m"
  MR_Word mercury__bimap__STATE_VARIABLE_BM_0_2,
#line 204 "bimap.m"
  MR_Word * mercury__bimap__STATE_VARIABLE_BM_3)
#line 204 "bimap.m"
{
#line 564 "bimap.m"
  while (MR_TRUE)
#line 564 "bimap.m"
    {
#line 564 "bimap.m"
      /* tailcall optimized into a loop */
#line 564 "bimap.m"
      {
#line 564 "bimap.m"
        MR_bool mercury__bimap__succeeded;

#line 564 "bimap.m"
        if ((mercury__bimap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 564 "bimap.m"
          *mercury__bimap__STATE_VARIABLE_BM_3 = mercury__bimap__STATE_VARIABLE_BM_0_2;
#line 564 "bimap.m"
        else
#line 565 "bimap.m"
          {
#line 565 "bimap.m"
            MR_Box mercury__bimap__Value_7 = (MR_hl_field(MR_mktag(1), mercury__bimap__HeadVar__1_1, (MR_Integer) 0));
#line 565 "bimap.m"
            MR_Word mercury__bimap__Values_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bimap__HeadVar__1_1, (MR_Integer) 1)));
#line 565 "bimap.m"
            MR_Word mercury__bimap__STATE_VARIABLE_BM_12_12;
#line 565 "bimap.m"
            MR_Word mercury__bimap__Forward0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_0_2, (MR_Integer) 0)));
#line 565 "bimap.m"
            MR_Word mercury__bimap__Reverse0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_0_2, (MR_Integer) 1)));
#line 549 "bimap.m"
            MR_Box mercury__bimap__K_22;

#line 41 "map.opt"
            {
#line 41 "map.opt"
              mercury__bimap__succeeded = mercury__tree234__search_3_p_0(mercury__bimap__TypeInfo_for_V_14, mercury__bimap__TypeInfo_for_K_15, mercury__bimap__Reverse0_21, mercury__bimap__Value_7, &mercury__bimap__K_22);
            }
#line 549 "bimap.m"
            if (mercury__bimap__succeeded)
#line 546 "bimap.m"
              {
#line 546 "bimap.m"
                MR_Word mercury__bimap__Forward_23;
#line 546 "bimap.m"
                MR_Word mercury__bimap__Reverse_24;
#line 61 "tree234.opt"
                MR_Word mercury__bimap__V_7_35;
#line 61 "tree234.opt"
                MR_Word mercury__bimap__V_7_42;

#line 61 "tree234.opt"
                {
#line 61 "tree234.opt"
                  mercury__tree234__delete_2_4_p_0(mercury__bimap__TypeInfo_for_K_15, mercury__bimap__TypeInfo_for_V_14, mercury__bimap__Forward0_20, mercury__bimap__K_22, &mercury__bimap__Forward_23, &mercury__bimap__V_7_35);
                }
#line 61 "tree234.opt"
                {
#line 61 "tree234.opt"
                  mercury__tree234__delete_2_4_p_0(mercury__bimap__TypeInfo_for_V_14, mercury__bimap__TypeInfo_for_K_15, mercury__bimap__Reverse0_21, mercury__bimap__Value_7, &mercury__bimap__Reverse_24, &mercury__bimap__V_7_42);
                }
#line 548 "bimap.m"
                {
#line 548 "bimap.m"
                  mercury__bimap__STATE_VARIABLE_BM_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 548 "bimap.m"
                  MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_12_12, 0) = ((MR_Box) (mercury__bimap__Forward_23));
#line 548 "bimap.m"
                  MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_12_12, 1) = ((MR_Box) (mercury__bimap__Reverse_24));
#line 548 "bimap.m"
                }
#line 546 "bimap.m"
              }
#line 549 "bimap.m"
            else
#line 549 "bimap.m"
              mercury__bimap__STATE_VARIABLE_BM_12_12 = mercury__bimap__STATE_VARIABLE_BM_0_2;
#line 567 "bimap.m"
            /* direct tailcall eliminated */
#line 567 "bimap.m"
            {
#line 567 "bimap.m"
              MR_Word mercury__bimap__HeadVar__1__tmp_copy_1 = mercury__bimap__Values_8;
#line 567 "bimap.m"
              MR_Word mercury__bimap__STATE_VARIABLE_BM_0__tmp_copy_2 = mercury__bimap__STATE_VARIABLE_BM_12_12;

#line 567 "bimap.m"
              mercury__bimap__STATE_VARIABLE_BM_0_2 = mercury__bimap__STATE_VARIABLE_BM_0__tmp_copy_2;
#line 567 "bimap.m"
              mercury__bimap__HeadVar__1_1 = mercury__bimap__HeadVar__1__tmp_copy_1;
#line 567 "bimap.m"
            }
#line 567 "bimap.m"
            continue;
#line 565 "bimap.m"
          }
#line 564 "bimap.m"
      }
#line 564 "bimap.m"
      break;
#line 564 "bimap.m"
    }
#line 204 "bimap.m"
}

#line 203 "bimap.m"
MR_Word MR_CALL 
mercury__bimap__delete_values_2_f_0(
#line 203 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_7,
#line 203 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_8,
#line 203 "bimap.m"
  MR_Word mercury__bimap__BM0_4,
#line 203 "bimap.m"
  MR_Word mercury__bimap__Vs_5)
#line 203 "bimap.m"
{
#line 562 "bimap.m"
  {
#line 562 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 562 "bimap.m"
    MR_Word mercury__bimap__BM_6;

#line 562 "bimap.m"
    {
#line 562 "bimap.m"
      mercury__bimap__delete_values_3_p_0(mercury__bimap__TypeInfo_for_V_8, mercury__bimap__TypeInfo_for_K_7, mercury__bimap__Vs_5, mercury__bimap__BM0_4, &mercury__bimap__BM_6);
    }
#line 562 "bimap.m"
    return mercury__bimap__BM_6;
#line 562 "bimap.m"
  }
#line 203 "bimap.m"
}

#line 198 "bimap.m"
void MR_CALL 
mercury__bimap__delete_keys_3_p_0(
#line 198 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_14,
#line 198 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_15,
#line 198 "bimap.m"
  MR_Word mercury__bimap__HeadVar__1_1,
#line 198 "bimap.m"
  MR_Word mercury__bimap__STATE_VARIABLE_BM_0_2,
#line 198 "bimap.m"
  MR_Word * mercury__bimap__STATE_VARIABLE_BM_3)
#line 198 "bimap.m"
{
#line 556 "bimap.m"
  while (MR_TRUE)
#line 556 "bimap.m"
    {
#line 556 "bimap.m"
      /* tailcall optimized into a loop */
#line 556 "bimap.m"
      {
#line 556 "bimap.m"
        MR_bool mercury__bimap__succeeded;

#line 556 "bimap.m"
        if ((mercury__bimap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 556 "bimap.m"
          *mercury__bimap__STATE_VARIABLE_BM_3 = mercury__bimap__STATE_VARIABLE_BM_0_2;
#line 556 "bimap.m"
        else
#line 557 "bimap.m"
          {
#line 557 "bimap.m"
            MR_Box mercury__bimap__Key_7 = (MR_hl_field(MR_mktag(1), mercury__bimap__HeadVar__1_1, (MR_Integer) 0));
#line 557 "bimap.m"
            MR_Word mercury__bimap__Keys_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bimap__HeadVar__1_1, (MR_Integer) 1)));
#line 557 "bimap.m"
            MR_Word mercury__bimap__STATE_VARIABLE_BM_12_12;
#line 557 "bimap.m"
            MR_Word mercury__bimap__Forward0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_0_2, (MR_Integer) 0)));
#line 557 "bimap.m"
            MR_Word mercury__bimap__Reverse0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_0_2, (MR_Integer) 1)));
#line 536 "bimap.m"
            MR_Box mercury__bimap__V_22;

#line 41 "map.opt"
            {
#line 41 "map.opt"
              mercury__bimap__succeeded = mercury__tree234__search_3_p_0(mercury__bimap__TypeInfo_for_K_14, mercury__bimap__TypeInfo_for_V_15, mercury__bimap__Forward0_20, mercury__bimap__Key_7, &mercury__bimap__V_22);
            }
#line 536 "bimap.m"
            if (mercury__bimap__succeeded)
#line 533 "bimap.m"
              {
#line 533 "bimap.m"
                MR_Word mercury__bimap__Forward_23;
#line 533 "bimap.m"
                MR_Word mercury__bimap__Reverse_24;
#line 61 "tree234.opt"
                MR_Word mercury__bimap__V_7_35;
#line 61 "tree234.opt"
                MR_Word mercury__bimap__V_7_42;

#line 61 "tree234.opt"
                {
#line 61 "tree234.opt"
                  mercury__tree234__delete_2_4_p_0(mercury__bimap__TypeInfo_for_K_14, mercury__bimap__TypeInfo_for_V_15, mercury__bimap__Forward0_20, mercury__bimap__Key_7, &mercury__bimap__Forward_23, &mercury__bimap__V_7_35);
                }
#line 61 "tree234.opt"
                {
#line 61 "tree234.opt"
                  mercury__tree234__delete_2_4_p_0(mercury__bimap__TypeInfo_for_V_15, mercury__bimap__TypeInfo_for_K_14, mercury__bimap__Reverse0_21, mercury__bimap__V_22, &mercury__bimap__Reverse_24, &mercury__bimap__V_7_42);
                }
#line 535 "bimap.m"
                {
#line 535 "bimap.m"
                  mercury__bimap__STATE_VARIABLE_BM_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 535 "bimap.m"
                  MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_12_12, 0) = ((MR_Box) (mercury__bimap__Forward_23));
#line 535 "bimap.m"
                  MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_12_12, 1) = ((MR_Box) (mercury__bimap__Reverse_24));
#line 535 "bimap.m"
                }
#line 533 "bimap.m"
              }
#line 536 "bimap.m"
            else
#line 536 "bimap.m"
              mercury__bimap__STATE_VARIABLE_BM_12_12 = mercury__bimap__STATE_VARIABLE_BM_0_2;
#line 559 "bimap.m"
            /* direct tailcall eliminated */
#line 559 "bimap.m"
            {
#line 559 "bimap.m"
              MR_Word mercury__bimap__HeadVar__1__tmp_copy_1 = mercury__bimap__Keys_8;
#line 559 "bimap.m"
              MR_Word mercury__bimap__STATE_VARIABLE_BM_0__tmp_copy_2 = mercury__bimap__STATE_VARIABLE_BM_12_12;

#line 559 "bimap.m"
              mercury__bimap__STATE_VARIABLE_BM_0_2 = mercury__bimap__STATE_VARIABLE_BM_0__tmp_copy_2;
#line 559 "bimap.m"
              mercury__bimap__HeadVar__1_1 = mercury__bimap__HeadVar__1__tmp_copy_1;
#line 559 "bimap.m"
            }
#line 559 "bimap.m"
            continue;
#line 557 "bimap.m"
          }
#line 556 "bimap.m"
      }
#line 556 "bimap.m"
      break;
#line 556 "bimap.m"
    }
#line 198 "bimap.m"
}

#line 197 "bimap.m"
MR_Word MR_CALL 
mercury__bimap__delete_keys_2_f_0(
#line 197 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_7,
#line 197 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_8,
#line 197 "bimap.m"
  MR_Word mercury__bimap__BM0_4,
#line 197 "bimap.m"
  MR_Word mercury__bimap__Ks_5)
#line 197 "bimap.m"
{
#line 554 "bimap.m"
  {
#line 554 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 554 "bimap.m"
    MR_Word mercury__bimap__BM_6;

#line 554 "bimap.m"
    {
#line 554 "bimap.m"
      mercury__bimap__delete_keys_3_p_0(mercury__bimap__TypeInfo_for_K_7, mercury__bimap__TypeInfo_for_V_8, mercury__bimap__Ks_5, mercury__bimap__BM0_4, &mercury__bimap__BM_6);
    }
#line 554 "bimap.m"
    return mercury__bimap__BM_6;
#line 554 "bimap.m"
  }
#line 197 "bimap.m"
}

#line 193 "bimap.m"
void MR_CALL 
mercury__bimap__delete_value_3_p_0(
#line 193 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_14,
#line 193 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_15,
#line 193 "bimap.m"
  MR_Box mercury__bimap__V_4,
#line 193 "bimap.m"
  MR_Word mercury__bimap__STATE_VARIABLE_BM_0_11,
#line 193 "bimap.m"
  MR_Word * mercury__bimap__STATE_VARIABLE_BM_12)
#line 193 "bimap.m"
{
#line 543 "bimap.m"
  {
#line 543 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 543 "bimap.m"
    MR_Word mercury__bimap__Forward0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_0_11, (MR_Integer) 0)));
#line 543 "bimap.m"
    MR_Word mercury__bimap__Reverse0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_0_11, (MR_Integer) 1)));
#line 549 "bimap.m"
    MR_Box mercury__bimap__K_8;

#line 41 "map.opt"
    {
#line 41 "map.opt"
      mercury__bimap__succeeded = mercury__tree234__search_3_p_0(mercury__bimap__TypeInfo_for_V_14, mercury__bimap__TypeInfo_for_K_15, mercury__bimap__Reverse0_7, mercury__bimap__V_4, &mercury__bimap__K_8);
    }
#line 549 "bimap.m"
    if (mercury__bimap__succeeded)
#line 546 "bimap.m"
      {
#line 546 "bimap.m"
        MR_Word mercury__bimap__Forward_9;
#line 546 "bimap.m"
        MR_Word mercury__bimap__Reverse_10;
#line 61 "tree234.opt"
        MR_Word mercury__bimap__V_7_25;
#line 61 "tree234.opt"
        MR_Word mercury__bimap__V_7_32;

#line 61 "tree234.opt"
        {
#line 61 "tree234.opt"
          mercury__tree234__delete_2_4_p_0(mercury__bimap__TypeInfo_for_K_15, mercury__bimap__TypeInfo_for_V_14, mercury__bimap__Forward0_6, mercury__bimap__K_8, &mercury__bimap__Forward_9, &mercury__bimap__V_7_25);
        }
#line 61 "tree234.opt"
        {
#line 61 "tree234.opt"
          mercury__tree234__delete_2_4_p_0(mercury__bimap__TypeInfo_for_V_14, mercury__bimap__TypeInfo_for_K_15, mercury__bimap__Reverse0_7, mercury__bimap__V_4, &mercury__bimap__Reverse_10, &mercury__bimap__V_7_32);
        }
#line 548 "bimap.m"
        {
#line 548 "bimap.m"
          MR_Word base;
#line 548 "bimap.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 548 "bimap.m"
          *mercury__bimap__STATE_VARIABLE_BM_12 = base;
#line 548 "bimap.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__bimap__Forward_9));
#line 548 "bimap.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__bimap__Reverse_10));
#line 548 "bimap.m"
        }
#line 546 "bimap.m"
      }
#line 549 "bimap.m"
    else
#line 549 "bimap.m"
      *mercury__bimap__STATE_VARIABLE_BM_12 = mercury__bimap__STATE_VARIABLE_BM_0_11;
#line 543 "bimap.m"
  }
#line 193 "bimap.m"
}

#line 192 "bimap.m"
MR_Word MR_CALL 
mercury__bimap__delete_value_2_f_0(
#line 192 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_9,
#line 192 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_10,
#line 192 "bimap.m"
  MR_Word mercury__bimap__STATE_VARIABLE_BM_0_6,
#line 192 "bimap.m"
  MR_Box mercury__bimap__V_5)
#line 192 "bimap.m"
{
#line 543 "bimap.m"
  {
#line 543 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 543 "bimap.m"
    MR_Word mercury__bimap__STATE_VARIABLE_BM_7;
#line 543 "bimap.m"
    MR_Word mercury__bimap__Forward0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_0_6, (MR_Integer) 0)));
#line 543 "bimap.m"
    MR_Word mercury__bimap__Reverse0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_0_6, (MR_Integer) 1)));
#line 549 "bimap.m"
    MR_Box mercury__bimap__K_17;

#line 41 "map.opt"
    {
#line 41 "map.opt"
      mercury__bimap__succeeded = mercury__tree234__search_3_p_0(mercury__bimap__TypeInfo_for_V_10, mercury__bimap__TypeInfo_for_K_9, mercury__bimap__Reverse0_16, mercury__bimap__V_5, &mercury__bimap__K_17);
    }
#line 549 "bimap.m"
    if (mercury__bimap__succeeded)
#line 546 "bimap.m"
      {
#line 546 "bimap.m"
        MR_Word mercury__bimap__Forward_18;
#line 546 "bimap.m"
        MR_Word mercury__bimap__Reverse_19;
#line 61 "tree234.opt"
        MR_Word mercury__bimap__V_7_30;
#line 61 "tree234.opt"
        MR_Word mercury__bimap__V_7_37;

#line 61 "tree234.opt"
        {
#line 61 "tree234.opt"
          mercury__tree234__delete_2_4_p_0(mercury__bimap__TypeInfo_for_K_9, mercury__bimap__TypeInfo_for_V_10, mercury__bimap__Forward0_15, mercury__bimap__K_17, &mercury__bimap__Forward_18, &mercury__bimap__V_7_30);
        }
#line 61 "tree234.opt"
        {
#line 61 "tree234.opt"
          mercury__tree234__delete_2_4_p_0(mercury__bimap__TypeInfo_for_V_10, mercury__bimap__TypeInfo_for_K_9, mercury__bimap__Reverse0_16, mercury__bimap__V_5, &mercury__bimap__Reverse_19, &mercury__bimap__V_7_37);
        }
#line 548 "bimap.m"
        {
#line 548 "bimap.m"
          mercury__bimap__STATE_VARIABLE_BM_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 548 "bimap.m"
          MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_7, 0) = ((MR_Box) (mercury__bimap__Forward_18));
#line 548 "bimap.m"
          MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_7, 1) = ((MR_Box) (mercury__bimap__Reverse_19));
#line 548 "bimap.m"
        }
#line 546 "bimap.m"
      }
#line 549 "bimap.m"
    else
#line 549 "bimap.m"
      mercury__bimap__STATE_VARIABLE_BM_7 = mercury__bimap__STATE_VARIABLE_BM_0_6;
#line 543 "bimap.m"
    return mercury__bimap__STATE_VARIABLE_BM_7;
#line 543 "bimap.m"
  }
#line 192 "bimap.m"
}

#line 187 "bimap.m"
void MR_CALL 
mercury__bimap__delete_key_3_p_0(
#line 187 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_14,
#line 187 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_15,
#line 187 "bimap.m"
  MR_Box mercury__bimap__K_4,
#line 187 "bimap.m"
  MR_Word mercury__bimap__STATE_VARIABLE_BM_0_11,
#line 187 "bimap.m"
  MR_Word * mercury__bimap__STATE_VARIABLE_BM_12)
#line 187 "bimap.m"
{
#line 530 "bimap.m"
  {
#line 530 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 530 "bimap.m"
    MR_Word mercury__bimap__Forward0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_0_11, (MR_Integer) 0)));
#line 530 "bimap.m"
    MR_Word mercury__bimap__Reverse0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_0_11, (MR_Integer) 1)));
#line 536 "bimap.m"
    MR_Box mercury__bimap__V_8;

#line 41 "map.opt"
    {
#line 41 "map.opt"
      mercury__bimap__succeeded = mercury__tree234__search_3_p_0(mercury__bimap__TypeInfo_for_K_14, mercury__bimap__TypeInfo_for_V_15, mercury__bimap__Forward0_6, mercury__bimap__K_4, &mercury__bimap__V_8);
    }
#line 536 "bimap.m"
    if (mercury__bimap__succeeded)
#line 533 "bimap.m"
      {
#line 533 "bimap.m"
        MR_Word mercury__bimap__Forward_9;
#line 533 "bimap.m"
        MR_Word mercury__bimap__Reverse_10;
#line 61 "tree234.opt"
        MR_Word mercury__bimap__V_7_25;
#line 61 "tree234.opt"
        MR_Word mercury__bimap__V_7_32;

#line 61 "tree234.opt"
        {
#line 61 "tree234.opt"
          mercury__tree234__delete_2_4_p_0(mercury__bimap__TypeInfo_for_K_14, mercury__bimap__TypeInfo_for_V_15, mercury__bimap__Forward0_6, mercury__bimap__K_4, &mercury__bimap__Forward_9, &mercury__bimap__V_7_25);
        }
#line 61 "tree234.opt"
        {
#line 61 "tree234.opt"
          mercury__tree234__delete_2_4_p_0(mercury__bimap__TypeInfo_for_V_15, mercury__bimap__TypeInfo_for_K_14, mercury__bimap__Reverse0_7, mercury__bimap__V_8, &mercury__bimap__Reverse_10, &mercury__bimap__V_7_32);
        }
#line 535 "bimap.m"
        {
#line 535 "bimap.m"
          MR_Word base;
#line 535 "bimap.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 535 "bimap.m"
          *mercury__bimap__STATE_VARIABLE_BM_12 = base;
#line 535 "bimap.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__bimap__Forward_9));
#line 535 "bimap.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__bimap__Reverse_10));
#line 535 "bimap.m"
        }
#line 533 "bimap.m"
      }
#line 536 "bimap.m"
    else
#line 536 "bimap.m"
      *mercury__bimap__STATE_VARIABLE_BM_12 = mercury__bimap__STATE_VARIABLE_BM_0_11;
#line 530 "bimap.m"
  }
#line 187 "bimap.m"
}

#line 186 "bimap.m"
MR_Word MR_CALL 
mercury__bimap__delete_key_2_f_0(
#line 186 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_9,
#line 186 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_10,
#line 186 "bimap.m"
  MR_Word mercury__bimap__STATE_VARIABLE_BM_0_6,
#line 186 "bimap.m"
  MR_Box mercury__bimap__K_5)
#line 186 "bimap.m"
{
#line 530 "bimap.m"
  {
#line 530 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 530 "bimap.m"
    MR_Word mercury__bimap__STATE_VARIABLE_BM_7;
#line 530 "bimap.m"
    MR_Word mercury__bimap__Forward0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_0_6, (MR_Integer) 0)));
#line 530 "bimap.m"
    MR_Word mercury__bimap__Reverse0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_0_6, (MR_Integer) 1)));
#line 536 "bimap.m"
    MR_Box mercury__bimap__V_17;

#line 41 "map.opt"
    {
#line 41 "map.opt"
      mercury__bimap__succeeded = mercury__tree234__search_3_p_0(mercury__bimap__TypeInfo_for_K_9, mercury__bimap__TypeInfo_for_V_10, mercury__bimap__Forward0_15, mercury__bimap__K_5, &mercury__bimap__V_17);
    }
#line 536 "bimap.m"
    if (mercury__bimap__succeeded)
#line 533 "bimap.m"
      {
#line 533 "bimap.m"
        MR_Word mercury__bimap__Forward_18;
#line 533 "bimap.m"
        MR_Word mercury__bimap__Reverse_19;
#line 61 "tree234.opt"
        MR_Word mercury__bimap__V_7_30;
#line 61 "tree234.opt"
        MR_Word mercury__bimap__V_7_37;

#line 61 "tree234.opt"
        {
#line 61 "tree234.opt"
          mercury__tree234__delete_2_4_p_0(mercury__bimap__TypeInfo_for_K_9, mercury__bimap__TypeInfo_for_V_10, mercury__bimap__Forward0_15, mercury__bimap__K_5, &mercury__bimap__Forward_18, &mercury__bimap__V_7_30);
        }
#line 61 "tree234.opt"
        {
#line 61 "tree234.opt"
          mercury__tree234__delete_2_4_p_0(mercury__bimap__TypeInfo_for_V_10, mercury__bimap__TypeInfo_for_K_9, mercury__bimap__Reverse0_16, mercury__bimap__V_17, &mercury__bimap__Reverse_19, &mercury__bimap__V_7_37);
        }
#line 535 "bimap.m"
        {
#line 535 "bimap.m"
          mercury__bimap__STATE_VARIABLE_BM_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 535 "bimap.m"
          MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_7, 0) = ((MR_Box) (mercury__bimap__Forward_18));
#line 535 "bimap.m"
          MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_7, 1) = ((MR_Box) (mercury__bimap__Reverse_19));
#line 535 "bimap.m"
        }
#line 533 "bimap.m"
      }
#line 536 "bimap.m"
    else
#line 536 "bimap.m"
      mercury__bimap__STATE_VARIABLE_BM_7 = mercury__bimap__STATE_VARIABLE_BM_0_6;
#line 530 "bimap.m"
    return mercury__bimap__STATE_VARIABLE_BM_7;
#line 530 "bimap.m"
  }
#line 186 "bimap.m"
}

#line 180 "bimap.m"
void MR_CALL 
mercury__bimap__set_from_corresponding_lists_4_p_0(
#line 180 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_29,
#line 180 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_30,
#line 180 "bimap.m"
  MR_Word mercury__bimap__HeadVar__1_1,
#line 180 "bimap.m"
  MR_Word mercury__bimap__HeadVar__2_2,
#line 180 "bimap.m"
  MR_Word mercury__bimap__STATE_VARIABLE_BM_0_3,
#line 180 "bimap.m"
  MR_Word * mercury__bimap__STATE_VARIABLE_BM_4)
#line 180 "bimap.m"
{
#line 517 "bimap.m"
  while (MR_TRUE)
#line 517 "bimap.m"
    {
#line 517 "bimap.m"
      /* tailcall optimized into a loop */
#line 517 "bimap.m"
      {
#line 517 "bimap.m"
        MR_bool mercury__bimap__succeeded;

#line 517 "bimap.m"
        if ((mercury__bimap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 517 "bimap.m"
          if ((mercury__bimap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 517 "bimap.m"
            *mercury__bimap__STATE_VARIABLE_BM_4 = mercury__bimap__STATE_VARIABLE_BM_0_3;
#line 517 "bimap.m"
          else
#line 518 "bimap.m"
            {
#line 519 "bimap.m"
              {
#line 519 "bimap.m"
                mercury__require__error_1_p_0((MR_String) "bimap.set_from_corresponding_lists: length mismatch");
#line 519 "bimap.m"
                return;
              }
#line 518 "bimap.m"
            }
#line 517 "bimap.m"
        else
#line 517 "bimap.m"
          {
#line 517 "bimap.m"
            MR_Word mercury__bimap__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bimap__HeadVar__1_1, (MR_Integer) 1)));
#line 517 "bimap.m"
            MR_Box mercury__bimap__V_32_32 = (MR_hl_field(MR_mktag(1), mercury__bimap__HeadVar__1_1, (MR_Integer) 0));

#line 517 "bimap.m"
            if ((mercury__bimap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 520 "bimap.m"
              {
#line 521 "bimap.m"
                {
#line 521 "bimap.m"
                  mercury__require__error_1_p_0((MR_String) "bimap.set_from_corresponding_lists: length mismatch");
#line 521 "bimap.m"
                  return;
                }
#line 520 "bimap.m"
              }
#line 517 "bimap.m"
            else
#line 523 "bimap.m"
              {
#line 523 "bimap.m"
                MR_Box mercury__bimap__Value_22 = (MR_hl_field(MR_mktag(1), mercury__bimap__HeadVar__2_2, (MR_Integer) 0));
#line 523 "bimap.m"
                MR_Word mercury__bimap__Values_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bimap__HeadVar__2_2, (MR_Integer) 1)));
#line 523 "bimap.m"
                MR_Word mercury__bimap__STATE_VARIABLE_BM_27_27;

#line 524 "bimap.m"
                {
#line 524 "bimap.m"
                  mercury__bimap__set_4_p_0(mercury__bimap__TypeInfo_for_K_29, mercury__bimap__TypeInfo_for_V_30, mercury__bimap__V_32_32, mercury__bimap__Value_22, mercury__bimap__STATE_VARIABLE_BM_0_3, &mercury__bimap__STATE_VARIABLE_BM_27_27);
                }
#line 525 "bimap.m"
                /* direct tailcall eliminated */
#line 525 "bimap.m"
                {
#line 525 "bimap.m"
                  MR_Word mercury__bimap__HeadVar__1__tmp_copy_1 = mercury__bimap__V_31_31;
#line 525 "bimap.m"
                  MR_Word mercury__bimap__HeadVar__2__tmp_copy_2 = mercury__bimap__Values_23;
#line 525 "bimap.m"
                  MR_Word mercury__bimap__STATE_VARIABLE_BM_0__tmp_copy_3 = mercury__bimap__STATE_VARIABLE_BM_27_27;

#line 525 "bimap.m"
                  mercury__bimap__STATE_VARIABLE_BM_0_3 = mercury__bimap__STATE_VARIABLE_BM_0__tmp_copy_3;
#line 525 "bimap.m"
                  mercury__bimap__HeadVar__2_2 = mercury__bimap__HeadVar__2__tmp_copy_2;
#line 525 "bimap.m"
                  mercury__bimap__HeadVar__1_1 = mercury__bimap__HeadVar__1__tmp_copy_1;
#line 525 "bimap.m"
                }
#line 525 "bimap.m"
                continue;
#line 523 "bimap.m"
              }
#line 517 "bimap.m"
          }
#line 517 "bimap.m"
      }
#line 517 "bimap.m"
      break;
#line 517 "bimap.m"
    }
#line 180 "bimap.m"
}

#line 178 "bimap.m"
MR_Word MR_CALL 
mercury__bimap__set_from_corresponding_lists_3_f_0(
#line 178 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_9,
#line 178 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_10,
#line 178 "bimap.m"
  MR_Word mercury__bimap__Ks_5,
#line 178 "bimap.m"
  MR_Word mercury__bimap__Vs_6,
#line 178 "bimap.m"
  MR_Word mercury__bimap__BM0_7)
#line 178 "bimap.m"
{
#line 515 "bimap.m"
  {
#line 515 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 515 "bimap.m"
    MR_Word mercury__bimap__BM_8;

#line 515 "bimap.m"
    {
#line 515 "bimap.m"
      mercury__bimap__set_from_corresponding_lists_4_p_0(mercury__bimap__TypeInfo_for_K_9, mercury__bimap__TypeInfo_for_V_10, mercury__bimap__Ks_5, mercury__bimap__Vs_6, mercury__bimap__BM0_7, &mercury__bimap__BM_8);
    }
#line 515 "bimap.m"
    return mercury__bimap__BM_8;
#line 515 "bimap.m"
  }
#line 178 "bimap.m"
}

#line 171 "bimap.m"
void MR_CALL 
mercury__bimap__set_from_assoc_list_3_p_0(
#line 171 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_16,
#line 171 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_17,
#line 171 "bimap.m"
  MR_Word mercury__bimap__HeadVar__1_1,
#line 171 "bimap.m"
  MR_Word mercury__bimap__STATE_VARIABLE_BM_0_2,
#line 171 "bimap.m"
  MR_Word * mercury__bimap__STATE_VARIABLE_BM_3)
#line 171 "bimap.m"
{
#line 509 "bimap.m"
  while (MR_TRUE)
#line 509 "bimap.m"
    {
#line 509 "bimap.m"
      /* tailcall optimized into a loop */
#line 509 "bimap.m"
      {
#line 509 "bimap.m"
        MR_bool mercury__bimap__succeeded;

#line 509 "bimap.m"
        if ((mercury__bimap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 509 "bimap.m"
          *mercury__bimap__STATE_VARIABLE_BM_3 = mercury__bimap__STATE_VARIABLE_BM_0_2;
#line 509 "bimap.m"
        else
#line 510 "bimap.m"
          {
#line 510 "bimap.m"
            MR_Box mercury__bimap__Key_7;
#line 510 "bimap.m"
            MR_Box mercury__bimap__Value_8;
#line 510 "bimap.m"
            MR_Word mercury__bimap__KeysValues_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bimap__HeadVar__1_1, (MR_Integer) 1)));
#line 510 "bimap.m"
            MR_Word mercury__bimap__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bimap__HeadVar__1_1, (MR_Integer) 0)));
#line 510 "bimap.m"
            MR_Word mercury__bimap__STATE_VARIABLE_BM_14_14;

#line 510 "bimap.m"
            mercury__bimap__Key_7 = (MR_hl_field(MR_mktag(0), mercury__bimap__V_13_13, (MR_Integer) 0));
#line 510 "bimap.m"
            mercury__bimap__Value_8 = (MR_hl_field(MR_mktag(0), mercury__bimap__V_13_13, (MR_Integer) 1));
#line 511 "bimap.m"
            {
#line 511 "bimap.m"
              mercury__bimap__set_4_p_0(mercury__bimap__TypeInfo_for_K_16, mercury__bimap__TypeInfo_for_V_17, mercury__bimap__Key_7, mercury__bimap__Value_8, mercury__bimap__STATE_VARIABLE_BM_0_2, &mercury__bimap__STATE_VARIABLE_BM_14_14);
            }
#line 512 "bimap.m"
            /* direct tailcall eliminated */
#line 512 "bimap.m"
            {
#line 512 "bimap.m"
              MR_Word mercury__bimap__HeadVar__1__tmp_copy_1 = mercury__bimap__KeysValues_9;
#line 512 "bimap.m"
              MR_Word mercury__bimap__STATE_VARIABLE_BM_0__tmp_copy_2 = mercury__bimap__STATE_VARIABLE_BM_14_14;

#line 512 "bimap.m"
              mercury__bimap__STATE_VARIABLE_BM_0_2 = mercury__bimap__STATE_VARIABLE_BM_0__tmp_copy_2;
#line 512 "bimap.m"
              mercury__bimap__HeadVar__1_1 = mercury__bimap__HeadVar__1__tmp_copy_1;
#line 512 "bimap.m"
            }
#line 512 "bimap.m"
            continue;
#line 510 "bimap.m"
          }
#line 509 "bimap.m"
      }
#line 509 "bimap.m"
      break;
#line 509 "bimap.m"
    }
#line 171 "bimap.m"
}

#line 169 "bimap.m"
MR_Word MR_CALL 
mercury__bimap__set_from_assoc_list_2_f_0(
#line 169 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_7,
#line 169 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_8,
#line 169 "bimap.m"
  MR_Word mercury__bimap__KVs_4,
#line 169 "bimap.m"
  MR_Word mercury__bimap__BM0_5)
#line 169 "bimap.m"
{
#line 507 "bimap.m"
  {
#line 507 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 507 "bimap.m"
    MR_Word mercury__bimap__BM_6;

#line 507 "bimap.m"
    {
#line 507 "bimap.m"
      mercury__bimap__set_from_assoc_list_3_p_0(mercury__bimap__TypeInfo_for_K_7, mercury__bimap__TypeInfo_for_V_8, mercury__bimap__KVs_4, mercury__bimap__BM0_5, &mercury__bimap__BM_6);
    }
#line 507 "bimap.m"
    return mercury__bimap__BM_6;
#line 507 "bimap.m"
  }
#line 169 "bimap.m"
}

#line 162 "bimap.m"
void MR_CALL 
mercury__bimap__det_insert_from_corresponding_lists_4_p_0(
#line 162 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_29,
#line 162 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_30,
#line 162 "bimap.m"
  MR_Word mercury__bimap__HeadVar__1_1,
#line 162 "bimap.m"
  MR_Word mercury__bimap__HeadVar__2_2,
#line 162 "bimap.m"
  MR_Word mercury__bimap__STATE_VARIABLE_BM_0_3,
#line 162 "bimap.m"
  MR_Word * mercury__bimap__STATE_VARIABLE_BM_4)
#line 162 "bimap.m"
{
#line 496 "bimap.m"
  while (MR_TRUE)
#line 496 "bimap.m"
    {
#line 496 "bimap.m"
      /* tailcall optimized into a loop */
#line 496 "bimap.m"
      {
#line 496 "bimap.m"
        MR_bool mercury__bimap__succeeded;

#line 496 "bimap.m"
        if ((mercury__bimap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 496 "bimap.m"
          if ((mercury__bimap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 496 "bimap.m"
            *mercury__bimap__STATE_VARIABLE_BM_4 = mercury__bimap__STATE_VARIABLE_BM_0_3;
#line 496 "bimap.m"
          else
#line 497 "bimap.m"
            {
#line 498 "bimap.m"
              {
#line 498 "bimap.m"
                mercury__require__error_1_p_0((MR_String) "bimap.det_insert_from_corresponding_lists: length mismatch");
#line 498 "bimap.m"
                return;
              }
#line 497 "bimap.m"
            }
#line 496 "bimap.m"
        else
#line 496 "bimap.m"
          {
#line 496 "bimap.m"
            MR_Word mercury__bimap__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bimap__HeadVar__1_1, (MR_Integer) 1)));
#line 496 "bimap.m"
            MR_Box mercury__bimap__V_32_32 = (MR_hl_field(MR_mktag(1), mercury__bimap__HeadVar__1_1, (MR_Integer) 0));

#line 496 "bimap.m"
            if ((mercury__bimap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 499 "bimap.m"
              {
#line 500 "bimap.m"
                {
#line 500 "bimap.m"
                  mercury__require__error_1_p_0((MR_String) "bimap.det_insert_from_corresponding_lists: length mismatch");
#line 500 "bimap.m"
                  return;
                }
#line 499 "bimap.m"
              }
#line 496 "bimap.m"
            else
#line 502 "bimap.m"
              {
#line 502 "bimap.m"
                MR_Box mercury__bimap__Value_22 = (MR_hl_field(MR_mktag(1), mercury__bimap__HeadVar__2_2, (MR_Integer) 0));
#line 502 "bimap.m"
                MR_Word mercury__bimap__Values_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bimap__HeadVar__2_2, (MR_Integer) 1)));
#line 502 "bimap.m"
                MR_Word mercury__bimap__STATE_VARIABLE_BM_27_27;
#line 502 "bimap.m"
                MR_Word mercury__bimap__Forward0_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_0_3, (MR_Integer) 0)));
#line 502 "bimap.m"
                MR_Word mercury__bimap__Reverse0_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_0_3, (MR_Integer) 1)));
#line 502 "bimap.m"
                MR_Word mercury__bimap__Forward_40;
#line 502 "bimap.m"
                MR_Word mercury__bimap__Reverse_41;

#line 433 "bimap.m"
                {
#line 433 "bimap.m"
                  mercury__map__det_insert_4_p_0(mercury__bimap__TypeInfo_for_K_29, mercury__bimap__TypeInfo_for_V_30, mercury__bimap__V_32_32, mercury__bimap__Value_22, mercury__bimap__Forward0_38, &mercury__bimap__Forward_40);
                }
#line 434 "bimap.m"
                {
#line 434 "bimap.m"
                  mercury__map__det_insert_4_p_0(mercury__bimap__TypeInfo_for_V_30, mercury__bimap__TypeInfo_for_K_29, mercury__bimap__Value_22, mercury__bimap__V_32_32, mercury__bimap__Reverse0_39, &mercury__bimap__Reverse_41);
                }
#line 435 "bimap.m"
                {
#line 435 "bimap.m"
                  mercury__bimap__STATE_VARIABLE_BM_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 435 "bimap.m"
                  MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_27_27, 0) = ((MR_Box) (mercury__bimap__Forward_40));
#line 435 "bimap.m"
                  MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_27_27, 1) = ((MR_Box) (mercury__bimap__Reverse_41));
#line 435 "bimap.m"
                }
#line 504 "bimap.m"
                /* direct tailcall eliminated */
#line 504 "bimap.m"
                {
#line 504 "bimap.m"
                  MR_Word mercury__bimap__HeadVar__1__tmp_copy_1 = mercury__bimap__V_31_31;
#line 504 "bimap.m"
                  MR_Word mercury__bimap__HeadVar__2__tmp_copy_2 = mercury__bimap__Values_23;
#line 504 "bimap.m"
                  MR_Word mercury__bimap__STATE_VARIABLE_BM_0__tmp_copy_3 = mercury__bimap__STATE_VARIABLE_BM_27_27;

#line 504 "bimap.m"
                  mercury__bimap__STATE_VARIABLE_BM_0_3 = mercury__bimap__STATE_VARIABLE_BM_0__tmp_copy_3;
#line 504 "bimap.m"
                  mercury__bimap__HeadVar__2_2 = mercury__bimap__HeadVar__2__tmp_copy_2;
#line 504 "bimap.m"
                  mercury__bimap__HeadVar__1_1 = mercury__bimap__HeadVar__1__tmp_copy_1;
#line 504 "bimap.m"
                }
#line 504 "bimap.m"
                continue;
#line 502 "bimap.m"
              }
#line 496 "bimap.m"
          }
#line 496 "bimap.m"
      }
#line 496 "bimap.m"
      break;
#line 496 "bimap.m"
    }
#line 162 "bimap.m"
}

#line 160 "bimap.m"
MR_Word MR_CALL 
mercury__bimap__det_insert_from_corresponding_lists_3_f_0(
#line 160 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_11,
#line 160 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_12,
#line 160 "bimap.m"
  MR_Word mercury__bimap__Ks_5,
#line 160 "bimap.m"
  MR_Word mercury__bimap__Vs_6,
#line 160 "bimap.m"
  MR_Word mercury__bimap__STATE_VARIABLE_BM_0_8)
#line 160 "bimap.m"
{
#line 494 "bimap.m"
  {
#line 494 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 494 "bimap.m"
    MR_Word mercury__bimap__STATE_VARIABLE_BM_9;

#line 494 "bimap.m"
    {
#line 494 "bimap.m"
      mercury__bimap__det_insert_from_corresponding_lists_4_p_0(mercury__bimap__TypeInfo_for_K_11, mercury__bimap__TypeInfo_for_V_12, mercury__bimap__Ks_5, mercury__bimap__Vs_6, mercury__bimap__STATE_VARIABLE_BM_0_8, &mercury__bimap__STATE_VARIABLE_BM_9);
    }
#line 494 "bimap.m"
    return mercury__bimap__STATE_VARIABLE_BM_9;
#line 494 "bimap.m"
  }
#line 160 "bimap.m"
}

#line 153 "bimap.m"
void MR_CALL 
mercury__bimap__det_insert_from_assoc_list_3_p_0(
#line 153 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_16,
#line 153 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_17,
#line 153 "bimap.m"
  MR_Word mercury__bimap__HeadVar__1_1,
#line 153 "bimap.m"
  MR_Word mercury__bimap__STATE_VARIABLE_BM_0_2,
#line 153 "bimap.m"
  MR_Word * mercury__bimap__STATE_VARIABLE_BM_3)
#line 153 "bimap.m"
{
#line 488 "bimap.m"
  while (MR_TRUE)
#line 488 "bimap.m"
    {
#line 488 "bimap.m"
      /* tailcall optimized into a loop */
#line 488 "bimap.m"
      {
#line 488 "bimap.m"
        MR_bool mercury__bimap__succeeded;

#line 488 "bimap.m"
        if ((mercury__bimap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 488 "bimap.m"
          *mercury__bimap__STATE_VARIABLE_BM_3 = mercury__bimap__STATE_VARIABLE_BM_0_2;
#line 488 "bimap.m"
        else
#line 489 "bimap.m"
          {
#line 489 "bimap.m"
            MR_Box mercury__bimap__Key_7;
#line 489 "bimap.m"
            MR_Box mercury__bimap__Value_8;
#line 489 "bimap.m"
            MR_Word mercury__bimap__KeysValues_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bimap__HeadVar__1_1, (MR_Integer) 1)));
#line 489 "bimap.m"
            MR_Word mercury__bimap__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bimap__HeadVar__1_1, (MR_Integer) 0)));
#line 489 "bimap.m"
            MR_Word mercury__bimap__STATE_VARIABLE_BM_14_14;
#line 489 "bimap.m"
            MR_Word mercury__bimap__Forward0_23;
#line 489 "bimap.m"
            MR_Word mercury__bimap__Reverse0_24;
#line 489 "bimap.m"
            MR_Word mercury__bimap__Forward_25;
#line 489 "bimap.m"
            MR_Word mercury__bimap__Reverse_26;

#line 489 "bimap.m"
            mercury__bimap__Key_7 = (MR_hl_field(MR_mktag(0), mercury__bimap__V_13_13, (MR_Integer) 0));
#line 489 "bimap.m"
            mercury__bimap__Value_8 = (MR_hl_field(MR_mktag(0), mercury__bimap__V_13_13, (MR_Integer) 1));
#line 432 "bimap.m"
            mercury__bimap__Forward0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_0_2, (MR_Integer) 0)));
#line 432 "bimap.m"
            mercury__bimap__Reverse0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_0_2, (MR_Integer) 1)));
#line 433 "bimap.m"
            {
#line 433 "bimap.m"
              mercury__map__det_insert_4_p_0(mercury__bimap__TypeInfo_for_K_16, mercury__bimap__TypeInfo_for_V_17, mercury__bimap__Key_7, mercury__bimap__Value_8, mercury__bimap__Forward0_23, &mercury__bimap__Forward_25);
            }
#line 434 "bimap.m"
            {
#line 434 "bimap.m"
              mercury__map__det_insert_4_p_0(mercury__bimap__TypeInfo_for_V_17, mercury__bimap__TypeInfo_for_K_16, mercury__bimap__Value_8, mercury__bimap__Key_7, mercury__bimap__Reverse0_24, &mercury__bimap__Reverse_26);
            }
#line 435 "bimap.m"
            {
#line 435 "bimap.m"
              mercury__bimap__STATE_VARIABLE_BM_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 435 "bimap.m"
              MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_14_14, 0) = ((MR_Box) (mercury__bimap__Forward_25));
#line 435 "bimap.m"
              MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_14_14, 1) = ((MR_Box) (mercury__bimap__Reverse_26));
#line 435 "bimap.m"
            }
#line 491 "bimap.m"
            /* direct tailcall eliminated */
#line 491 "bimap.m"
            {
#line 491 "bimap.m"
              MR_Word mercury__bimap__HeadVar__1__tmp_copy_1 = mercury__bimap__KeysValues_9;
#line 491 "bimap.m"
              MR_Word mercury__bimap__STATE_VARIABLE_BM_0__tmp_copy_2 = mercury__bimap__STATE_VARIABLE_BM_14_14;

#line 491 "bimap.m"
              mercury__bimap__STATE_VARIABLE_BM_0_2 = mercury__bimap__STATE_VARIABLE_BM_0__tmp_copy_2;
#line 491 "bimap.m"
              mercury__bimap__HeadVar__1_1 = mercury__bimap__HeadVar__1__tmp_copy_1;
#line 491 "bimap.m"
            }
#line 491 "bimap.m"
            continue;
#line 489 "bimap.m"
          }
#line 488 "bimap.m"
      }
#line 488 "bimap.m"
      break;
#line 488 "bimap.m"
    }
#line 153 "bimap.m"
}

#line 151 "bimap.m"
MR_Word MR_CALL 
mercury__bimap__det_insert_from_assoc_list_2_f_0(
#line 151 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_9,
#line 151 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_10,
#line 151 "bimap.m"
  MR_Word mercury__bimap__KVs_4,
#line 151 "bimap.m"
  MR_Word mercury__bimap__STATE_VARIABLE_BM_0_6)
#line 151 "bimap.m"
{
#line 486 "bimap.m"
  {
#line 486 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 486 "bimap.m"
    MR_Word mercury__bimap__STATE_VARIABLE_BM_7;

#line 486 "bimap.m"
    {
#line 486 "bimap.m"
      mercury__bimap__det_insert_from_assoc_list_3_p_0(mercury__bimap__TypeInfo_for_K_9, mercury__bimap__TypeInfo_for_V_10, mercury__bimap__KVs_4, mercury__bimap__STATE_VARIABLE_BM_0_6, &mercury__bimap__STATE_VARIABLE_BM_7);
    }
#line 486 "bimap.m"
    return mercury__bimap__STATE_VARIABLE_BM_7;
#line 486 "bimap.m"
  }
#line 151 "bimap.m"
}

#line 145 "bimap.m"
MR_bool MR_CALL 
mercury__bimap__insert_from_assoc_list_3_p_0(
#line 145 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_16,
#line 145 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_17,
#line 145 "bimap.m"
  MR_Word mercury__bimap__HeadVar__1_1,
#line 145 "bimap.m"
  MR_Word mercury__bimap__STATE_VARIABLE_BM_0_2,
#line 145 "bimap.m"
  MR_Word * mercury__bimap__STATE_VARIABLE_BM_3)
#line 145 "bimap.m"
{
#line 480 "bimap.m"
  while (MR_TRUE)
#line 480 "bimap.m"
    {
#line 480 "bimap.m"
      /* tailcall optimized into a loop */
#line 480 "bimap.m"
      {
#line 480 "bimap.m"
        MR_bool mercury__bimap__succeeded;

#line 480 "bimap.m"
        if ((mercury__bimap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 480 "bimap.m"
          {
#line 480 "bimap.m"
            *mercury__bimap__STATE_VARIABLE_BM_3 = mercury__bimap__STATE_VARIABLE_BM_0_2;
#line 480 "bimap.m"
            mercury__bimap__succeeded = MR_TRUE;
#line 480 "bimap.m"
          }
#line 480 "bimap.m"
        else
#line 481 "bimap.m"
          {
#line 481 "bimap.m"
            MR_Box mercury__bimap__Key_7;
#line 481 "bimap.m"
            MR_Box mercury__bimap__Value_8;
#line 481 "bimap.m"
            MR_Word mercury__bimap__KeyValues_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bimap__HeadVar__1_1, (MR_Integer) 1)));
#line 481 "bimap.m"
            MR_Word mercury__bimap__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bimap__HeadVar__1_1, (MR_Integer) 0)));
#line 481 "bimap.m"
            MR_Word mercury__bimap__STATE_VARIABLE_BM_14_14;
#line 481 "bimap.m"
            MR_Word mercury__bimap__STATE_VARIABLE_Forward_0_22;
#line 481 "bimap.m"
            MR_Word mercury__bimap__STATE_VARIABLE_Reverse_0_23;
#line 481 "bimap.m"
            MR_Word mercury__bimap__STATE_VARIABLE_Forward_24;
#line 481 "bimap.m"
            MR_Word mercury__bimap__STATE_VARIABLE_Reverse_25;

#line 481 "bimap.m"
            mercury__bimap__Key_7 = (MR_hl_field(MR_mktag(0), mercury__bimap__V_13_13, (MR_Integer) 0));
#line 481 "bimap.m"
            mercury__bimap__Value_8 = (MR_hl_field(MR_mktag(0), mercury__bimap__V_13_13, (MR_Integer) 1));
#line 424 "bimap.m"
            mercury__bimap__STATE_VARIABLE_Forward_0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_0_2, (MR_Integer) 0)));
#line 424 "bimap.m"
            mercury__bimap__STATE_VARIABLE_Reverse_0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_0_2, (MR_Integer) 1)));
#line 75 "map.opt"
            {
#line 75 "map.opt"
              mercury__bimap__succeeded = mercury__tree234__insert_4_p_0(mercury__bimap__TypeInfo_for_K_16, mercury__bimap__TypeInfo_for_V_17, mercury__bimap__Key_7, mercury__bimap__Value_8, mercury__bimap__STATE_VARIABLE_Forward_0_22, &mercury__bimap__STATE_VARIABLE_Forward_24);
            }
#line 481 "bimap.m"
            if (mercury__bimap__succeeded)
#line 481 "bimap.m"
              {
#line 75 "map.opt"
                {
#line 75 "map.opt"
                  mercury__bimap__succeeded = mercury__tree234__insert_4_p_0(mercury__bimap__TypeInfo_for_V_17, mercury__bimap__TypeInfo_for_K_16, mercury__bimap__Value_8, mercury__bimap__Key_7, mercury__bimap__STATE_VARIABLE_Reverse_0_23, &mercury__bimap__STATE_VARIABLE_Reverse_25);
                }
#line 481 "bimap.m"
                if (mercury__bimap__succeeded)
#line 481 "bimap.m"
                  {
#line 424 "bimap.m"
                    {
#line 424 "bimap.m"
                      mercury__bimap__STATE_VARIABLE_BM_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 424 "bimap.m"
                      MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_14_14, 0) = ((MR_Box) (mercury__bimap__STATE_VARIABLE_Forward_24));
#line 424 "bimap.m"
                      MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_14_14, 1) = ((MR_Box) (mercury__bimap__STATE_VARIABLE_Reverse_25));
#line 424 "bimap.m"
                    }
#line 483 "bimap.m"
                    /* direct tailcall eliminated */
#line 483 "bimap.m"
                    {
#line 483 "bimap.m"
                      MR_Word mercury__bimap__HeadVar__1__tmp_copy_1 = mercury__bimap__KeyValues_9;
#line 483 "bimap.m"
                      MR_Word mercury__bimap__STATE_VARIABLE_BM_0__tmp_copy_2 = mercury__bimap__STATE_VARIABLE_BM_14_14;

#line 483 "bimap.m"
                      mercury__bimap__STATE_VARIABLE_BM_0_2 = mercury__bimap__STATE_VARIABLE_BM_0__tmp_copy_2;
#line 483 "bimap.m"
                      mercury__bimap__HeadVar__1_1 = mercury__bimap__HeadVar__1__tmp_copy_1;
#line 483 "bimap.m"
                    }
#line 483 "bimap.m"
                    continue;
#line 481 "bimap.m"
                  }
#line 481 "bimap.m"
              }
#line 481 "bimap.m"
          }
#line 480 "bimap.m"
        return mercury__bimap__succeeded;
#line 480 "bimap.m"
      }
#line 480 "bimap.m"
      break;
#line 480 "bimap.m"
    }
#line 145 "bimap.m"
}

#line 143 "bimap.m"
MR_bool MR_CALL 
mercury__bimap__insert_from_assoc_list_2_f_0(
#line 143 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_7,
#line 143 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_8,
#line 143 "bimap.m"
  MR_Word mercury__bimap__List_4,
#line 143 "bimap.m"
  MR_Word mercury__bimap__BM0_5,
#line 143 "bimap.m"
  MR_Word * mercury__bimap__BM_6)
#line 143 "bimap.m"
{
#line 478 "bimap.m"
  {
#line 478 "bimap.m"
    MR_bool mercury__bimap__succeeded;

#line 478 "bimap.m"
    {
#line 478 "bimap.m"
      return mercury__bimap__succeeded = mercury__bimap__insert_from_assoc_list_3_p_0(mercury__bimap__TypeInfo_for_K_7, mercury__bimap__TypeInfo_for_V_8, mercury__bimap__List_4, mercury__bimap__BM0_5, mercury__bimap__BM_6);
    }
#line 478 "bimap.m"
    return mercury__bimap__succeeded;
#line 478 "bimap.m"
  }
#line 143 "bimap.m"
}

#line 137 "bimap.m"
void MR_CALL 
mercury__bimap__set_4_p_0(
#line 137 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_21,
#line 137 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_22,
#line 137 "bimap.m"
  MR_Box mercury__bimap__K_5,
#line 137 "bimap.m"
  MR_Box mercury__bimap__V_6,
#line 137 "bimap.m"
  MR_Word mercury__bimap__HeadVar__3_3,
#line 137 "bimap.m"
  MR_Word * mercury__bimap__HeadVar__4_4)
#line 137 "bimap.m"
{
#line 455 "bimap.m"
  {
#line 455 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 455 "bimap.m"
    MR_Word mercury__bimap__STATE_VARIABLE_Forward_0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__3_3, (MR_Integer) 0)));
#line 455 "bimap.m"
    MR_Word mercury__bimap__STATE_VARIABLE_Reverse_0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__3_3, (MR_Integer) 1)));
#line 455 "bimap.m"
    MR_Word mercury__bimap__STATE_VARIABLE_Forward_13;
#line 455 "bimap.m"
    MR_Word mercury__bimap__STATE_VARIABLE_Reverse_14;
#line 455 "bimap.m"
    MR_Word mercury__bimap__STATE_VARIABLE_Forward_15_15;
#line 455 "bimap.m"
    MR_Word mercury__bimap__STATE_VARIABLE_Reverse_16_16;
#line 463 "bimap.m"
    MR_Box mercury__bimap__KVal_9;
#line 473 "bimap.m"
    MR_Box mercury__bimap__VKey_10;

#line 41 "map.opt"
    {
#line 41 "map.opt"
      mercury__bimap__succeeded = mercury__tree234__search_3_p_0(mercury__bimap__TypeInfo_for_K_21, mercury__bimap__TypeInfo_for_V_22, mercury__bimap__STATE_VARIABLE_Forward_0_11, mercury__bimap__K_5, &mercury__bimap__KVal_9);
    }
#line 463 "bimap.m"
    if (mercury__bimap__succeeded)
#line 460 "bimap.m"
      {
#line 457 "bimap.m"
        {
#line 457 "bimap.m"
          mercury__bimap__succeeded = mercury__builtin__unify_2_p_0(mercury__bimap__TypeInfo_for_V_22, mercury__bimap__V_6, mercury__bimap__KVal_9);
        }
#line 457 "bimap.m"
        mercury__bimap__succeeded = !(mercury__bimap__succeeded);
#line 460 "bimap.m"
        if (mercury__bimap__succeeded)
#line 458 "bimap.m"
          {
#line 61 "tree234.opt"
            MR_Word mercury__bimap__V_7_32;

#line 458 "bimap.m"
            {
#line 458 "bimap.m"
              mercury__map__det_update_4_p_0(mercury__bimap__TypeInfo_for_K_21, mercury__bimap__TypeInfo_for_V_22, mercury__bimap__K_5, mercury__bimap__V_6, mercury__bimap__STATE_VARIABLE_Forward_0_11, &mercury__bimap__STATE_VARIABLE_Forward_15_15);
            }
#line 61 "tree234.opt"
            {
#line 61 "tree234.opt"
              mercury__tree234__delete_2_4_p_0(mercury__bimap__TypeInfo_for_V_22, mercury__bimap__TypeInfo_for_K_21, mercury__bimap__STATE_VARIABLE_Reverse_0_12, mercury__bimap__KVal_9, &mercury__bimap__STATE_VARIABLE_Reverse_16_16, &mercury__bimap__V_7_32);
            }
#line 458 "bimap.m"
          }
#line 460 "bimap.m"
        else
#line 461 "bimap.m"
          {
#line 461 "bimap.m"
            mercury__bimap__STATE_VARIABLE_Reverse_16_16 = mercury__bimap__STATE_VARIABLE_Reverse_0_12;
#line 461 "bimap.m"
            mercury__bimap__STATE_VARIABLE_Forward_15_15 = mercury__bimap__STATE_VARIABLE_Forward_0_11;
#line 461 "bimap.m"
          }
#line 460 "bimap.m"
      }
#line 463 "bimap.m"
    else
#line 464 "bimap.m"
      {
#line 464 "bimap.m"
        {
#line 464 "bimap.m"
          mercury__map__det_insert_4_p_0(mercury__bimap__TypeInfo_for_K_21, mercury__bimap__TypeInfo_for_V_22, mercury__bimap__K_5, mercury__bimap__V_6, mercury__bimap__STATE_VARIABLE_Forward_0_11, &mercury__bimap__STATE_VARIABLE_Forward_15_15);
        }
#line 464 "bimap.m"
        mercury__bimap__STATE_VARIABLE_Reverse_16_16 = mercury__bimap__STATE_VARIABLE_Reverse_0_12;
#line 464 "bimap.m"
      }
#line 41 "map.opt"
    {
#line 41 "map.opt"
      mercury__bimap__succeeded = mercury__tree234__search_3_p_0(mercury__bimap__TypeInfo_for_V_22, mercury__bimap__TypeInfo_for_K_21, mercury__bimap__STATE_VARIABLE_Reverse_16_16, mercury__bimap__V_6, &mercury__bimap__VKey_10);
    }
#line 473 "bimap.m"
    if (mercury__bimap__succeeded)
#line 470 "bimap.m"
      {
#line 467 "bimap.m"
        {
#line 467 "bimap.m"
          mercury__bimap__succeeded = mercury__builtin__unify_2_p_0(mercury__bimap__TypeInfo_for_K_21, mercury__bimap__K_5, mercury__bimap__VKey_10);
        }
#line 467 "bimap.m"
        mercury__bimap__succeeded = !(mercury__bimap__succeeded);
#line 470 "bimap.m"
        if (mercury__bimap__succeeded)
#line 468 "bimap.m"
          {
#line 61 "tree234.opt"
            MR_Word mercury__bimap__V_7_42;

#line 468 "bimap.m"
            {
#line 468 "bimap.m"
              mercury__map__det_update_4_p_0(mercury__bimap__TypeInfo_for_V_22, mercury__bimap__TypeInfo_for_K_21, mercury__bimap__V_6, mercury__bimap__K_5, mercury__bimap__STATE_VARIABLE_Reverse_16_16, &mercury__bimap__STATE_VARIABLE_Reverse_14);
            }
#line 61 "tree234.opt"
            {
#line 61 "tree234.opt"
              mercury__tree234__delete_2_4_p_0(mercury__bimap__TypeInfo_for_K_21, mercury__bimap__TypeInfo_for_V_22, mercury__bimap__STATE_VARIABLE_Forward_15_15, mercury__bimap__VKey_10, &mercury__bimap__STATE_VARIABLE_Forward_13, &mercury__bimap__V_7_42);
            }
#line 468 "bimap.m"
          }
#line 470 "bimap.m"
        else
#line 471 "bimap.m"
          {
#line 471 "bimap.m"
            mercury__bimap__STATE_VARIABLE_Reverse_14 = mercury__bimap__STATE_VARIABLE_Reverse_16_16;
#line 471 "bimap.m"
            mercury__bimap__STATE_VARIABLE_Forward_13 = mercury__bimap__STATE_VARIABLE_Forward_15_15;
#line 471 "bimap.m"
          }
#line 470 "bimap.m"
      }
#line 473 "bimap.m"
    else
#line 474 "bimap.m"
      {
#line 474 "bimap.m"
        {
#line 474 "bimap.m"
          mercury__map__det_insert_4_p_0(mercury__bimap__TypeInfo_for_V_22, mercury__bimap__TypeInfo_for_K_21, mercury__bimap__V_6, mercury__bimap__K_5, mercury__bimap__STATE_VARIABLE_Reverse_16_16, &mercury__bimap__STATE_VARIABLE_Reverse_14);
        }
#line 474 "bimap.m"
        mercury__bimap__STATE_VARIABLE_Forward_13 = mercury__bimap__STATE_VARIABLE_Forward_15_15;
#line 474 "bimap.m"
      }
#line 455 "bimap.m"
    {
#line 455 "bimap.m"
      MR_Word base;
#line 455 "bimap.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 455 "bimap.m"
      *mercury__bimap__HeadVar__4_4 = base;
#line 455 "bimap.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__bimap__STATE_VARIABLE_Forward_13));
#line 455 "bimap.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__bimap__STATE_VARIABLE_Reverse_14));
#line 455 "bimap.m"
    }
#line 455 "bimap.m"
  }
#line 137 "bimap.m"
}

#line 136 "bimap.m"
MR_Word MR_CALL 
mercury__bimap__set_3_f_0(
#line 136 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_11,
#line 136 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_12,
#line 136 "bimap.m"
  MR_Word mercury__bimap__STATE_VARIABLE_BM_0_8,
#line 136 "bimap.m"
  MR_Box mercury__bimap__K_6,
#line 136 "bimap.m"
  MR_Box mercury__bimap__V_7)
#line 136 "bimap.m"
{
#line 453 "bimap.m"
  {
#line 453 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 453 "bimap.m"
    MR_Word mercury__bimap__STATE_VARIABLE_BM_9;

#line 453 "bimap.m"
    {
#line 453 "bimap.m"
      mercury__bimap__set_4_p_0(mercury__bimap__TypeInfo_for_K_11, mercury__bimap__TypeInfo_for_V_12, mercury__bimap__K_6, mercury__bimap__V_7, mercury__bimap__STATE_VARIABLE_BM_0_8, &mercury__bimap__STATE_VARIABLE_BM_9);
    }
#line 453 "bimap.m"
    return mercury__bimap__STATE_VARIABLE_BM_9;
#line 453 "bimap.m"
  }
#line 136 "bimap.m"
}

#line 127 "bimap.m"
void MR_CALL 
mercury__bimap__search_insert_5_p_0(
#line 127 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_18,
#line 127 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_19,
#line 127 "bimap.m"
  MR_Box mercury__bimap__K_6,
#line 127 "bimap.m"
  MR_Box mercury__bimap__V_7,
#line 127 "bimap.m"
  MR_Word * mercury__bimap__MaybeOldV_8,
#line 127 "bimap.m"
  MR_Word mercury__bimap__STATE_VARIABLE_Bimap_0_15,
#line 127 "bimap.m"
  MR_Word * mercury__bimap__STATE_VARIABLE_Bimap_16)
#line 127 "bimap.m"
{
#line 437 "bimap.m"
  {
#line 437 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 437 "bimap.m"
    MR_Word mercury__bimap__Forward0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_Bimap_0_15, (MR_Integer) 0)));
#line 437 "bimap.m"
    MR_Word mercury__bimap__Reverse0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_Bimap_0_15, (MR_Integer) 1)));
#line 437 "bimap.m"
    MR_Word mercury__bimap__Forward_12;

#line 93 "map.opt"
    {
#line 93 "map.opt"
      mercury__tree234__search_insert_5_p_0(mercury__bimap__TypeInfo_for_K_18, mercury__bimap__TypeInfo_for_V_19, mercury__bimap__K_6, mercury__bimap__V_7, mercury__bimap__MaybeOldV_8, mercury__bimap__Forward0_10, &mercury__bimap__Forward_12);
    }
#line 444 "bimap.m"
    if ((*mercury__bimap__MaybeOldV_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 445 "bimap.m"
      {
#line 445 "bimap.m"
        MR_Word mercury__bimap__Reverse_14;

#line 448 "bimap.m"
        {
#line 448 "bimap.m"
          mercury__map__det_insert_4_p_0(mercury__bimap__TypeInfo_for_V_19, mercury__bimap__TypeInfo_for_K_18, mercury__bimap__V_7, mercury__bimap__K_6, mercury__bimap__Reverse0_11, &mercury__bimap__Reverse_14);
        }
#line 449 "bimap.m"
        {
#line 449 "bimap.m"
          MR_Word base;
#line 449 "bimap.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 449 "bimap.m"
          *mercury__bimap__STATE_VARIABLE_Bimap_16 = base;
#line 449 "bimap.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__bimap__Forward_12));
#line 449 "bimap.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__bimap__Reverse_14));
#line 449 "bimap.m"
        }
#line 445 "bimap.m"
      }
#line 444 "bimap.m"
    else
#line 441 "bimap.m"
      *mercury__bimap__STATE_VARIABLE_Bimap_16 = mercury__bimap__STATE_VARIABLE_Bimap_0_15;
#line 437 "bimap.m"
  }
#line 127 "bimap.m"
}

#line 116 "bimap.m"
void MR_CALL 
mercury__bimap__det_insert_4_p_0(
#line 116 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_15,
#line 116 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_16,
#line 116 "bimap.m"
  MR_Box mercury__bimap__K_5,
#line 116 "bimap.m"
  MR_Box mercury__bimap__V_6,
#line 116 "bimap.m"
  MR_Word mercury__bimap__STATE_VARIABLE_Bimap_0_12,
#line 116 "bimap.m"
  MR_Word * mercury__bimap__STATE_VARIABLE_Bimap_13)
#line 116 "bimap.m"
{
#line 431 "bimap.m"
  {
#line 431 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 431 "bimap.m"
    MR_Word mercury__bimap__Forward0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_Bimap_0_12, (MR_Integer) 0)));
#line 431 "bimap.m"
    MR_Word mercury__bimap__Reverse0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_Bimap_0_12, (MR_Integer) 1)));
#line 431 "bimap.m"
    MR_Word mercury__bimap__Forward_10;
#line 431 "bimap.m"
    MR_Word mercury__bimap__Reverse_11;

#line 433 "bimap.m"
    {
#line 433 "bimap.m"
      mercury__map__det_insert_4_p_0(mercury__bimap__TypeInfo_for_K_15, mercury__bimap__TypeInfo_for_V_16, mercury__bimap__K_5, mercury__bimap__V_6, mercury__bimap__Forward0_8, &mercury__bimap__Forward_10);
    }
#line 434 "bimap.m"
    {
#line 434 "bimap.m"
      mercury__map__det_insert_4_p_0(mercury__bimap__TypeInfo_for_V_16, mercury__bimap__TypeInfo_for_K_15, mercury__bimap__V_6, mercury__bimap__K_5, mercury__bimap__Reverse0_9, &mercury__bimap__Reverse_11);
    }
#line 435 "bimap.m"
    {
#line 435 "bimap.m"
      MR_Word base;
#line 435 "bimap.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 435 "bimap.m"
      *mercury__bimap__STATE_VARIABLE_Bimap_13 = base;
#line 435 "bimap.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__bimap__Forward_10));
#line 435 "bimap.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__bimap__Reverse_11));
#line 435 "bimap.m"
    }
#line 431 "bimap.m"
  }
#line 116 "bimap.m"
}

#line 115 "bimap.m"
MR_Word MR_CALL 
mercury__bimap__det_insert_3_f_0(
#line 115 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_11,
#line 115 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_12,
#line 115 "bimap.m"
  MR_Word mercury__bimap__STATE_VARIABLE_BM_0_8,
#line 115 "bimap.m"
  MR_Box mercury__bimap__K_6,
#line 115 "bimap.m"
  MR_Box mercury__bimap__V_7)
#line 115 "bimap.m"
{
#line 431 "bimap.m"
  {
#line 431 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 431 "bimap.m"
    MR_Word mercury__bimap__STATE_VARIABLE_BM_9;
#line 431 "bimap.m"
    MR_Word mercury__bimap__Forward0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_0_8, (MR_Integer) 0)));
#line 431 "bimap.m"
    MR_Word mercury__bimap__Reverse0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_0_8, (MR_Integer) 1)));
#line 431 "bimap.m"
    MR_Word mercury__bimap__Forward_20;
#line 431 "bimap.m"
    MR_Word mercury__bimap__Reverse_21;

#line 433 "bimap.m"
    {
#line 433 "bimap.m"
      mercury__map__det_insert_4_p_0(mercury__bimap__TypeInfo_for_K_11, mercury__bimap__TypeInfo_for_V_12, mercury__bimap__K_6, mercury__bimap__V_7, mercury__bimap__Forward0_18, &mercury__bimap__Forward_20);
    }
#line 434 "bimap.m"
    {
#line 434 "bimap.m"
      mercury__map__det_insert_4_p_0(mercury__bimap__TypeInfo_for_V_12, mercury__bimap__TypeInfo_for_K_11, mercury__bimap__V_7, mercury__bimap__K_6, mercury__bimap__Reverse0_19, &mercury__bimap__Reverse_21);
    }
#line 435 "bimap.m"
    {
#line 435 "bimap.m"
      mercury__bimap__STATE_VARIABLE_BM_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 435 "bimap.m"
      MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_9, 0) = ((MR_Box) (mercury__bimap__Forward_20));
#line 435 "bimap.m"
      MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_9, 1) = ((MR_Box) (mercury__bimap__Reverse_21));
#line 435 "bimap.m"
    }
#line 431 "bimap.m"
    return mercury__bimap__STATE_VARIABLE_BM_9;
#line 431 "bimap.m"
  }
#line 115 "bimap.m"
}

#line 109 "bimap.m"
MR_bool MR_CALL 
mercury__bimap__insert_4_p_0(
#line 109 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_15,
#line 109 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_16,
#line 109 "bimap.m"
  MR_Box mercury__bimap__K_5,
#line 109 "bimap.m"
  MR_Box mercury__bimap__V_6,
#line 109 "bimap.m"
  MR_Word mercury__bimap__HeadVar__3_3,
#line 109 "bimap.m"
  MR_Word * mercury__bimap__HeadVar__4_4)
#line 109 "bimap.m"
{
#line 424 "bimap.m"
  {
#line 424 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 424 "bimap.m"
    MR_Word mercury__bimap__STATE_VARIABLE_Forward_0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__3_3, (MR_Integer) 0)));
#line 424 "bimap.m"
    MR_Word mercury__bimap__STATE_VARIABLE_Reverse_0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__3_3, (MR_Integer) 1)));
#line 424 "bimap.m"
    MR_Word mercury__bimap__STATE_VARIABLE_Forward_11;
#line 424 "bimap.m"
    MR_Word mercury__bimap__STATE_VARIABLE_Reverse_12;

#line 75 "map.opt"
    {
#line 75 "map.opt"
      mercury__bimap__succeeded = mercury__tree234__insert_4_p_0(mercury__bimap__TypeInfo_for_K_15, mercury__bimap__TypeInfo_for_V_16, mercury__bimap__K_5, mercury__bimap__V_6, mercury__bimap__STATE_VARIABLE_Forward_0_9, &mercury__bimap__STATE_VARIABLE_Forward_11);
    }
#line 424 "bimap.m"
    if (mercury__bimap__succeeded)
#line 424 "bimap.m"
      {
#line 75 "map.opt"
        {
#line 75 "map.opt"
          mercury__bimap__succeeded = mercury__tree234__insert_4_p_0(mercury__bimap__TypeInfo_for_V_16, mercury__bimap__TypeInfo_for_K_15, mercury__bimap__V_6, mercury__bimap__K_5, mercury__bimap__STATE_VARIABLE_Reverse_0_10, &mercury__bimap__STATE_VARIABLE_Reverse_12);
        }
#line 424 "bimap.m"
        if (mercury__bimap__succeeded)
#line 424 "bimap.m"
          {
#line 424 "bimap.m"
            {
#line 424 "bimap.m"
              MR_Word base;
#line 424 "bimap.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 424 "bimap.m"
              *mercury__bimap__HeadVar__4_4 = base;
#line 424 "bimap.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__bimap__STATE_VARIABLE_Forward_11));
#line 424 "bimap.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__bimap__STATE_VARIABLE_Reverse_12));
#line 424 "bimap.m"
            }
#line 424 "bimap.m"
            mercury__bimap__succeeded = MR_TRUE;
#line 424 "bimap.m"
          }
#line 424 "bimap.m"
      }
#line 424 "bimap.m"
    return mercury__bimap__succeeded;
#line 424 "bimap.m"
  }
#line 109 "bimap.m"
}

#line 108 "bimap.m"
MR_bool MR_CALL 
mercury__bimap__insert_3_f_0(
#line 108 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_11,
#line 108 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_12,
#line 108 "bimap.m"
  MR_Word mercury__bimap__STATE_VARIABLE_BM_0_8,
#line 108 "bimap.m"
  MR_Box mercury__bimap__K_6,
#line 108 "bimap.m"
  MR_Box mercury__bimap__V_7,
#line 108 "bimap.m"
  MR_Word * mercury__bimap__STATE_VARIABLE_BM_9)
#line 108 "bimap.m"
{
#line 424 "bimap.m"
  {
#line 424 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 424 "bimap.m"
    MR_Word mercury__bimap__STATE_VARIABLE_Forward_0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_0_8, (MR_Integer) 0)));
#line 424 "bimap.m"
    MR_Word mercury__bimap__STATE_VARIABLE_Reverse_0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_0_8, (MR_Integer) 1)));
#line 424 "bimap.m"
    MR_Word mercury__bimap__STATE_VARIABLE_Forward_19;
#line 424 "bimap.m"
    MR_Word mercury__bimap__STATE_VARIABLE_Reverse_20;

#line 75 "map.opt"
    {
#line 75 "map.opt"
      mercury__bimap__succeeded = mercury__tree234__insert_4_p_0(mercury__bimap__TypeInfo_for_K_11, mercury__bimap__TypeInfo_for_V_12, mercury__bimap__K_6, mercury__bimap__V_7, mercury__bimap__STATE_VARIABLE_Forward_0_17, &mercury__bimap__STATE_VARIABLE_Forward_19);
    }
#line 424 "bimap.m"
    if (mercury__bimap__succeeded)
#line 424 "bimap.m"
      {
#line 75 "map.opt"
        {
#line 75 "map.opt"
          mercury__bimap__succeeded = mercury__tree234__insert_4_p_0(mercury__bimap__TypeInfo_for_V_12, mercury__bimap__TypeInfo_for_K_11, mercury__bimap__V_7, mercury__bimap__K_6, mercury__bimap__STATE_VARIABLE_Reverse_0_18, &mercury__bimap__STATE_VARIABLE_Reverse_20);
        }
#line 424 "bimap.m"
        if (mercury__bimap__succeeded)
#line 424 "bimap.m"
          {
#line 424 "bimap.m"
            {
#line 424 "bimap.m"
              MR_Word base;
#line 424 "bimap.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 424 "bimap.m"
              *mercury__bimap__STATE_VARIABLE_BM_9 = base;
#line 424 "bimap.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__bimap__STATE_VARIABLE_Forward_19));
#line 424 "bimap.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__bimap__STATE_VARIABLE_Reverse_20));
#line 424 "bimap.m"
            }
#line 424 "bimap.m"
            mercury__bimap__succeeded = MR_TRUE;
#line 424 "bimap.m"
          }
#line 424 "bimap.m"
      }
#line 424 "bimap.m"
    return mercury__bimap__succeeded;
#line 424 "bimap.m"
  }
#line 108 "bimap.m"
}

#line 103 "bimap.m"
MR_bool MR_CALL 
mercury__bimap__contains_value_2_p_0(
#line 103 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_6,
#line 103 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_7,
#line 103 "bimap.m"
  MR_Word mercury__bimap__HeadVar__1_1,
#line 103 "bimap.m"
  MR_Box mercury__bimap__V_5)
#line 103 "bimap.m"
{
#line 394 "bimap.m"
  {
#line 394 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 394 "bimap.m"
    MR_Word mercury__bimap__Reverse_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 1)));
#line 394 "bimap.m"
    MR_Word mercury__bimap__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 0)));
#line 41 "map.opt"
    MR_Box mercury__bimap__V_5_10;

#line 41 "map.opt"
    {
#line 41 "map.opt"
      mercury__bimap__succeeded = mercury__tree234__search_3_p_0(mercury__bimap__TypeInfo_for_V_7, mercury__bimap__TypeInfo_for_K_6, mercury__bimap__Reverse_4, mercury__bimap__V_5, &mercury__bimap__V_5_10);
    }
#line 394 "bimap.m"
    return mercury__bimap__succeeded;
#line 394 "bimap.m"
  }
#line 103 "bimap.m"
}

#line 99 "bimap.m"
MR_bool MR_CALL 
mercury__bimap__contains_key_2_p_0(
#line 99 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_6,
#line 99 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_7,
#line 99 "bimap.m"
  MR_Word mercury__bimap__HeadVar__1_1,
#line 99 "bimap.m"
  MR_Box mercury__bimap__K_5)
#line 99 "bimap.m"
{
#line 391 "bimap.m"
  {
#line 391 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 391 "bimap.m"
    MR_Word mercury__bimap__Forward_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 0)));
#line 391 "bimap.m"
    MR_Word mercury__bimap__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 1)));
#line 41 "map.opt"
    MR_Box mercury__bimap__V_5_10;

#line 41 "map.opt"
    {
#line 41 "map.opt"
      mercury__bimap__succeeded = mercury__tree234__search_3_p_0(mercury__bimap__TypeInfo_for_K_6, mercury__bimap__TypeInfo_for_V_7, mercury__bimap__Forward_3, mercury__bimap__K_5, &mercury__bimap__V_5_10);
    }
#line 391 "bimap.m"
    return mercury__bimap__succeeded;
#line 391 "bimap.m"
  }
#line 99 "bimap.m"
}

#line 95 "bimap.m"
void MR_CALL 
mercury__bimap__coordinates_2_p_0(
#line 95 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_6,
#line 95 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_7,
#line 95 "bimap.m"
  MR_Word mercury__bimap__HeadVar__1_1,
#line 95 "bimap.m"
  MR_Word * mercury__bimap__Cs_5)
#line 95 "bimap.m"
{
#line 418 "bimap.m"
  {
#line 418 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 418 "bimap.m"
    MR_Word mercury__bimap__Reverse_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 1)));
#line 418 "bimap.m"
    MR_Word mercury__bimap__V_5_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 418 "bimap.m"
    MR_Word mercury__bimap__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 0)));

#line 70 "tree234.opt"
    {
#line 70 "tree234.opt"
      mercury__tree234__keys_acc_3_p_0(mercury__bimap__TypeInfo_for_V_7, mercury__bimap__TypeInfo_for_K_6, mercury__bimap__Reverse_4, mercury__bimap__V_5_12, mercury__bimap__Cs_5);
#line 70 "tree234.opt"
      return;
    }
#line 418 "bimap.m"
  }
#line 95 "bimap.m"
}

#line 94 "bimap.m"
MR_Word MR_CALL 
mercury__bimap__coordinates_1_f_0(
#line 94 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_5,
#line 94 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_6,
#line 94 "bimap.m"
  MR_Word mercury__bimap__BM_3)
#line 94 "bimap.m"
{
#line 418 "bimap.m"
  {
#line 418 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 418 "bimap.m"
    MR_Word mercury__bimap__Vs_4;
#line 418 "bimap.m"
    MR_Word mercury__bimap__Reverse_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__BM_3, (MR_Integer) 1)));
#line 418 "bimap.m"
    MR_Word mercury__bimap__V_5_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 418 "bimap.m"
    MR_Word mercury__bimap__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__BM_3, (MR_Integer) 0)));

#line 70 "tree234.opt"
    {
#line 70 "tree234.opt"
      mercury__tree234__keys_acc_3_p_0(mercury__bimap__TypeInfo_for_V_6, mercury__bimap__TypeInfo_for_K_5, mercury__bimap__Reverse_9, mercury__bimap__V_5_14, &mercury__bimap__Vs_4);
    }
#line 418 "bimap.m"
    return mercury__bimap__Vs_4;
#line 418 "bimap.m"
  }
#line 94 "bimap.m"
}

#line 90 "bimap.m"
void MR_CALL 
mercury__bimap__ordinates_2_p_0(
#line 90 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_6,
#line 90 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_7,
#line 90 "bimap.m"
  MR_Word mercury__bimap__HeadVar__1_1,
#line 90 "bimap.m"
  MR_Word * mercury__bimap__Os_5)
#line 90 "bimap.m"
{
#line 412 "bimap.m"
  {
#line 412 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 412 "bimap.m"
    MR_Word mercury__bimap__Forward_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 0)));
#line 412 "bimap.m"
    MR_Word mercury__bimap__V_5_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 412 "bimap.m"
    MR_Word mercury__bimap__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 1)));

#line 70 "tree234.opt"
    {
#line 70 "tree234.opt"
      mercury__tree234__keys_acc_3_p_0(mercury__bimap__TypeInfo_for_K_6, mercury__bimap__TypeInfo_for_V_7, mercury__bimap__Forward_3, mercury__bimap__V_5_12, mercury__bimap__Os_5);
#line 70 "tree234.opt"
      return;
    }
#line 412 "bimap.m"
  }
#line 90 "bimap.m"
}

#line 89 "bimap.m"
MR_Word MR_CALL 
mercury__bimap__ordinates_1_f_0(
#line 89 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_5,
#line 89 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_6,
#line 89 "bimap.m"
  MR_Word mercury__bimap__BM_3)
#line 89 "bimap.m"
{
#line 412 "bimap.m"
  {
#line 412 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 412 "bimap.m"
    MR_Word mercury__bimap__Ks_4;
#line 412 "bimap.m"
    MR_Word mercury__bimap__Forward_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__BM_3, (MR_Integer) 0)));
#line 412 "bimap.m"
    MR_Word mercury__bimap__V_5_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 412 "bimap.m"
    MR_Word mercury__bimap__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__BM_3, (MR_Integer) 1)));

#line 70 "tree234.opt"
    {
#line 70 "tree234.opt"
      mercury__tree234__keys_acc_3_p_0(mercury__bimap__TypeInfo_for_K_5, mercury__bimap__TypeInfo_for_V_6, mercury__bimap__Forward_8, mercury__bimap__V_5_14, &mercury__bimap__Ks_4);
    }
#line 412 "bimap.m"
    return mercury__bimap__Ks_4;
#line 412 "bimap.m"
  }
#line 89 "bimap.m"
}

#line 85 "bimap.m"
void MR_CALL 
mercury__bimap__reverse_lookup_3_p_0(
#line 85 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_8,
#line 85 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_9,
#line 85 "bimap.m"
  MR_Word mercury__bimap__HeadVar__1_1,
#line 85 "bimap.m"
  MR_Box * mercury__bimap__K_6,
#line 85 "bimap.m"
  MR_Box mercury__bimap__V_7)
#line 85 "bimap.m"
{
#line 406 "bimap.m"
  {
#line 406 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 406 "bimap.m"
    MR_Word mercury__bimap__Reverse_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 1)));
#line 406 "bimap.m"
    MR_Word mercury__bimap__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 0)));

#line 407 "bimap.m"
    {
#line 407 "bimap.m"
      mercury__map__lookup_3_p_0(mercury__bimap__TypeInfo_for_V_9, mercury__bimap__TypeInfo_for_K_8, mercury__bimap__Reverse_5, mercury__bimap__V_7, mercury__bimap__K_6);
#line 407 "bimap.m"
      return;
    }
#line 406 "bimap.m"
  }
#line 85 "bimap.m"
}

#line 84 "bimap.m"
MR_Box MR_CALL 
mercury__bimap__reverse_lookup_2_f_0(
#line 84 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_7,
#line 84 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_8,
#line 84 "bimap.m"
  MR_Word mercury__bimap__BM_4,
#line 84 "bimap.m"
  MR_Box mercury__bimap__V_5)
#line 84 "bimap.m"
{
#line 406 "bimap.m"
  {
#line 406 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 406 "bimap.m"
    MR_Box mercury__bimap__K_6;
#line 406 "bimap.m"
    MR_Word mercury__bimap__Reverse_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__BM_4, (MR_Integer) 1)));
#line 406 "bimap.m"
    MR_Word mercury__bimap__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__BM_4, (MR_Integer) 0)));

#line 407 "bimap.m"
    {
#line 407 "bimap.m"
      mercury__map__lookup_3_p_0(mercury__bimap__TypeInfo_for_V_8, mercury__bimap__TypeInfo_for_K_7, mercury__bimap__Reverse_12, mercury__bimap__V_5, &mercury__bimap__K_6);
    }
#line 406 "bimap.m"
    return mercury__bimap__K_6;
#line 406 "bimap.m"
  }
#line 84 "bimap.m"
}

#line 79 "bimap.m"
void MR_CALL 
mercury__bimap__lookup_3_p_0(
#line 79 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_8,
#line 79 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_9,
#line 79 "bimap.m"
  MR_Word mercury__bimap__HeadVar__1_1,
#line 79 "bimap.m"
  MR_Box mercury__bimap__K_6,
#line 79 "bimap.m"
  MR_Box * mercury__bimap__V_7)
#line 79 "bimap.m"
{
#line 400 "bimap.m"
  {
#line 400 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 400 "bimap.m"
    MR_Word mercury__bimap__Forward_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 0)));
#line 400 "bimap.m"
    MR_Word mercury__bimap__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 1)));

#line 401 "bimap.m"
    {
#line 401 "bimap.m"
      mercury__map__lookup_3_p_0(mercury__bimap__TypeInfo_for_K_8, mercury__bimap__TypeInfo_for_V_9, mercury__bimap__Forward_4, mercury__bimap__K_6, mercury__bimap__V_7);
#line 401 "bimap.m"
      return;
    }
#line 400 "bimap.m"
  }
#line 79 "bimap.m"
}

#line 78 "bimap.m"
MR_Box MR_CALL 
mercury__bimap__lookup_2_f_0(
#line 78 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_7,
#line 78 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_8,
#line 78 "bimap.m"
  MR_Word mercury__bimap__BM_4,
#line 78 "bimap.m"
  MR_Box mercury__bimap__K_5)
#line 78 "bimap.m"
{
#line 400 "bimap.m"
  {
#line 400 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 400 "bimap.m"
    MR_Box mercury__bimap__V_6;
#line 400 "bimap.m"
    MR_Word mercury__bimap__Forward_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__BM_4, (MR_Integer) 0)));
#line 400 "bimap.m"
    MR_Word mercury__bimap__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__BM_4, (MR_Integer) 1)));

#line 401 "bimap.m"
    {
#line 401 "bimap.m"
      mercury__map__lookup_3_p_0(mercury__bimap__TypeInfo_for_K_7, mercury__bimap__TypeInfo_for_V_8, mercury__bimap__Forward_11, mercury__bimap__K_5, &mercury__bimap__V_6);
    }
#line 400 "bimap.m"
    return mercury__bimap__V_6;
#line 400 "bimap.m"
  }
#line 78 "bimap.m"
}

#line 73 "bimap.m"
MR_bool MR_CALL 
mercury__bimap__reverse_search_3_p_0(
#line 73 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_8,
#line 73 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_9,
#line 73 "bimap.m"
  MR_Word mercury__bimap__HeadVar__1_1,
#line 73 "bimap.m"
  MR_Box * mercury__bimap__K_6,
#line 73 "bimap.m"
  MR_Box mercury__bimap__V_7)
#line 73 "bimap.m"
{
#line 388 "bimap.m"
  {
#line 388 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 388 "bimap.m"
    MR_Word mercury__bimap__Reverse_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 1)));
#line 388 "bimap.m"
    MR_Word mercury__bimap__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 0)));

#line 41 "map.opt"
    {
#line 41 "map.opt"
      return mercury__bimap__succeeded = mercury__tree234__search_3_p_0(mercury__bimap__TypeInfo_for_V_9, mercury__bimap__TypeInfo_for_K_8, mercury__bimap__Reverse_5, mercury__bimap__V_7, mercury__bimap__K_6);
    }
#line 388 "bimap.m"
    return mercury__bimap__succeeded;
#line 388 "bimap.m"
  }
#line 73 "bimap.m"
}

#line 72 "bimap.m"
MR_bool MR_CALL 
mercury__bimap__reverse_search_2_f_0(
#line 72 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_7,
#line 72 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_8,
#line 72 "bimap.m"
  MR_Word mercury__bimap__BM_4,
#line 72 "bimap.m"
  MR_Box mercury__bimap__V_5,
#line 72 "bimap.m"
  MR_Box * mercury__bimap__K_6)
#line 72 "bimap.m"
{
#line 388 "bimap.m"
  {
#line 388 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 388 "bimap.m"
    MR_Word mercury__bimap__Reverse_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__BM_4, (MR_Integer) 1)));
#line 388 "bimap.m"
    MR_Word mercury__bimap__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__BM_4, (MR_Integer) 0)));

#line 41 "map.opt"
    {
#line 41 "map.opt"
      return mercury__bimap__succeeded = mercury__tree234__search_3_p_0(mercury__bimap__TypeInfo_for_V_8, mercury__bimap__TypeInfo_for_K_7, mercury__bimap__Reverse_12, mercury__bimap__V_5, mercury__bimap__K_6);
    }
#line 388 "bimap.m"
    return mercury__bimap__succeeded;
#line 388 "bimap.m"
  }
#line 72 "bimap.m"
}

#line 68 "bimap.m"
MR_bool MR_CALL 
mercury__bimap__forward_search_3_p_0(
#line 68 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_8,
#line 68 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_9,
#line 68 "bimap.m"
  MR_Word mercury__bimap__HeadVar__1_1,
#line 68 "bimap.m"
  MR_Box mercury__bimap__K_6,
#line 68 "bimap.m"
  MR_Box * mercury__bimap__V_7)
#line 68 "bimap.m"
{
#line 382 "bimap.m"
  {
#line 382 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 382 "bimap.m"
    MR_Word mercury__bimap__Forward_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 0)));
#line 382 "bimap.m"
    MR_Word mercury__bimap__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 1)));

#line 41 "map.opt"
    {
#line 41 "map.opt"
      return mercury__bimap__succeeded = mercury__tree234__search_3_p_0(mercury__bimap__TypeInfo_for_K_8, mercury__bimap__TypeInfo_for_V_9, mercury__bimap__Forward_4, mercury__bimap__K_6, mercury__bimap__V_7);
    }
#line 382 "bimap.m"
    return mercury__bimap__succeeded;
#line 382 "bimap.m"
  }
#line 68 "bimap.m"
}

#line 67 "bimap.m"
MR_bool MR_CALL 
mercury__bimap__forward_search_2_f_0(
#line 67 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_7,
#line 67 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_8,
#line 67 "bimap.m"
  MR_Word mercury__bimap__BM_4,
#line 67 "bimap.m"
  MR_Box mercury__bimap__K_5,
#line 67 "bimap.m"
  MR_Box * mercury__bimap__V_6)
#line 67 "bimap.m"
{
#line 382 "bimap.m"
  {
#line 382 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 382 "bimap.m"
    MR_Word mercury__bimap__Forward_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__BM_4, (MR_Integer) 0)));
#line 382 "bimap.m"
    MR_Word mercury__bimap__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__BM_4, (MR_Integer) 1)));

#line 41 "map.opt"
    {
#line 41 "map.opt"
      return mercury__bimap__succeeded = mercury__tree234__search_3_p_0(mercury__bimap__TypeInfo_for_K_7, mercury__bimap__TypeInfo_for_V_8, mercury__bimap__Forward_11, mercury__bimap__K_5, mercury__bimap__V_6);
    }
#line 382 "bimap.m"
    return mercury__bimap__succeeded;
#line 382 "bimap.m"
  }
#line 67 "bimap.m"
}

#line 63 "bimap.m"
MR_bool MR_CALL 
mercury__bimap__search_3_p_1(
#line 63 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_8,
#line 63 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_9,
#line 63 "bimap.m"
  MR_Word mercury__bimap__HeadVar__1_1,
#line 63 "bimap.m"
  MR_Box * mercury__bimap__K_6,
#line 63 "bimap.m"
  MR_Box mercury__bimap__V_7)
#line 63 "bimap.m"
{
#line 375 "bimap.m"
  {
#line 375 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 375 "bimap.m"
    MR_Word mercury__bimap__Forward_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 0)));
#line 375 "bimap.m"
    MR_Word mercury__bimap__Reverse_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 1)));
#line 375 "bimap.m"
    MR_Box mercury__bimap__V_11_11;

#line 41 "map.opt"
    {
#line 41 "map.opt"
      mercury__bimap__succeeded = mercury__tree234__search_3_p_0(mercury__bimap__TypeInfo_for_V_9, mercury__bimap__TypeInfo_for_K_8, mercury__bimap__Reverse_5, mercury__bimap__V_7, mercury__bimap__K_6);
    }
#line 375 "bimap.m"
    if (mercury__bimap__succeeded)
#line 375 "bimap.m"
      {
#line 41 "map.opt"
        {
#line 41 "map.opt"
          mercury__bimap__succeeded = mercury__tree234__search_3_p_0(mercury__bimap__TypeInfo_for_K_8, mercury__bimap__TypeInfo_for_V_9, mercury__bimap__Forward_4, *mercury__bimap__K_6, &mercury__bimap__V_11_11);
        }
#line 375 "bimap.m"
        if (mercury__bimap__succeeded)
#line 376 "bimap.m"
          {
#line 376 "bimap.m"
            return mercury__bimap__succeeded = mercury__builtin__unify_2_p_0(mercury__bimap__TypeInfo_for_V_9, mercury__bimap__V_7, mercury__bimap__V_11_11);
          }
#line 375 "bimap.m"
      }
#line 375 "bimap.m"
    return mercury__bimap__succeeded;
#line 375 "bimap.m"
  }
#line 63 "bimap.m"
}

#line 62 "bimap.m"
MR_bool MR_CALL 
mercury__bimap__search_3_p_0(
#line 62 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_8,
#line 62 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_9,
#line 62 "bimap.m"
  MR_Word mercury__bimap__HeadVar__1_1,
#line 62 "bimap.m"
  MR_Box mercury__bimap__K_6,
#line 62 "bimap.m"
  MR_Box * mercury__bimap__V_7)
#line 62 "bimap.m"
{
#line 375 "bimap.m"
  {
#line 375 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 375 "bimap.m"
    MR_Word mercury__bimap__Forward_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 0)));
#line 375 "bimap.m"
    MR_Word mercury__bimap__Reverse_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 1)));
#line 375 "bimap.m"
    MR_Box mercury__bimap__V_10_10;

#line 41 "map.opt"
    {
#line 41 "map.opt"
      mercury__bimap__succeeded = mercury__tree234__search_3_p_0(mercury__bimap__TypeInfo_for_K_8, mercury__bimap__TypeInfo_for_V_9, mercury__bimap__Forward_4, mercury__bimap__K_6, mercury__bimap__V_7);
    }
#line 375 "bimap.m"
    if (mercury__bimap__succeeded)
#line 375 "bimap.m"
      {
#line 41 "map.opt"
        {
#line 41 "map.opt"
          mercury__bimap__succeeded = mercury__tree234__search_3_p_0(mercury__bimap__TypeInfo_for_V_9, mercury__bimap__TypeInfo_for_K_8, mercury__bimap__Reverse_5, *mercury__bimap__V_7, &mercury__bimap__V_10_10);
        }
#line 375 "bimap.m"
        if (mercury__bimap__succeeded)
#line 377 "bimap.m"
          {
#line 377 "bimap.m"
            return mercury__bimap__succeeded = mercury__builtin__unify_2_p_0(mercury__bimap__TypeInfo_for_K_8, mercury__bimap__K_6, mercury__bimap__V_10_10);
          }
#line 375 "bimap.m"
      }
#line 375 "bimap.m"
    return mercury__bimap__succeeded;
#line 375 "bimap.m"
  }
#line 62 "bimap.m"
}

#line 56 "bimap.m"
MR_bool MR_CALL 
mercury__bimap__equal_2_p_0(
#line 56 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_9,
#line 56 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_10,
#line 56 "bimap.m"
  MR_Word mercury__bimap__BMA_3,
#line 56 "bimap.m"
  MR_Word mercury__bimap__BMB_4)
#line 56 "bimap.m"
{
#line 370 "bimap.m"
  {
#line 370 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 370 "bimap.m"
    MR_Word mercury__bimap__ForwardA_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__BMA_3, (MR_Integer) 0)));
#line 370 "bimap.m"
    MR_Word mercury__bimap__ForwardB_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__BMB_4, (MR_Integer) 0)));
#line 371 "bimap.m"
    MR_Word mercury__bimap___ReverseA_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__BMA_3, (MR_Integer) 1)));
#line 372 "bimap.m"
    MR_Word mercury__bimap___ReverseB_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__BMB_4, (MR_Integer) 1)));

#line 33 "map.opt"
    {
#line 33 "map.opt"
      return mercury__bimap__succeeded = mercury__tree234__equal_2_p_0(mercury__bimap__TypeInfo_for_K_9, mercury__bimap__TypeInfo_for_V_10, mercury__bimap__ForwardA_5, mercury__bimap__ForwardB_7);
    }
#line 370 "bimap.m"
    return mercury__bimap__succeeded;
#line 370 "bimap.m"
  }
#line 56 "bimap.m"
}

#line 47 "bimap.m"
MR_bool MR_CALL 
mercury__bimap__is_empty_1_p_0(
#line 47 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_4,
#line 47 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_5,
#line 47 "bimap.m"
  MR_Word mercury__bimap__HeadVar__1_1)
#line 47 "bimap.m"
{
#line 367 "bimap.m"
  {
#line 367 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 367 "bimap.m"
    MR_Word mercury__bimap__Forward_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 0)));
#line 367 "bimap.m"
    MR_Word mercury__bimap__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 1)));

#line 53 "tree234.opt"
    mercury__bimap__succeeded = (mercury__bimap__Forward_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 367 "bimap.m"
    return mercury__bimap__succeeded;
#line 367 "bimap.m"
  }
#line 47 "bimap.m"
}

#line 43 "bimap.m"
MR_Word MR_CALL 
mercury__bimap__singleton_2_f_0(
#line 43 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_9,
#line 43 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_10,
#line 43 "bimap.m"
  MR_Box mercury__bimap__K_4,
#line 43 "bimap.m"
  MR_Box mercury__bimap__V_5)
#line 43 "bimap.m"
{
#line 362 "bimap.m"
  {
#line 362 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 362 "bimap.m"
    MR_Word mercury__bimap__B_6;
#line 362 "bimap.m"
    MR_Word mercury__bimap__Forward_7;
#line 362 "bimap.m"
    MR_Word mercury__bimap__Reverse_8;
#line 362 "bimap.m"
    MR_Word mercury__bimap__V_6_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 362 "bimap.m"
    MR_Word mercury__bimap__V_7_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 362 "bimap.m"
    MR_Word mercury__bimap__V_6_25;
#line 362 "bimap.m"
    MR_Word mercury__bimap__V_7_26;

#line 49 "tree234.opt"
    {
#line 49 "tree234.opt"
      mercury__bimap__Forward_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 49 "tree234.opt"
      MR_hl_field(MR_mktag(1), mercury__bimap__Forward_7, 0) = mercury__bimap__K_4;
#line 49 "tree234.opt"
      MR_hl_field(MR_mktag(1), mercury__bimap__Forward_7, 1) = mercury__bimap__V_5;
#line 49 "tree234.opt"
      MR_hl_field(MR_mktag(1), mercury__bimap__Forward_7, 2) = ((MR_Box) (mercury__bimap__V_6_16));
#line 49 "tree234.opt"
      MR_hl_field(MR_mktag(1), mercury__bimap__Forward_7, 3) = ((MR_Box) (mercury__bimap__V_7_17));
#line 49 "tree234.opt"
    }
#line 50 "tree234.opt"
    mercury__bimap__V_6_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 51 "tree234.opt"
    mercury__bimap__V_7_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 49 "tree234.opt"
    {
#line 49 "tree234.opt"
      mercury__bimap__Reverse_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 49 "tree234.opt"
      MR_hl_field(MR_mktag(1), mercury__bimap__Reverse_8, 0) = mercury__bimap__V_5;
#line 49 "tree234.opt"
      MR_hl_field(MR_mktag(1), mercury__bimap__Reverse_8, 1) = mercury__bimap__K_4;
#line 49 "tree234.opt"
      MR_hl_field(MR_mktag(1), mercury__bimap__Reverse_8, 2) = ((MR_Box) (mercury__bimap__V_6_25));
#line 49 "tree234.opt"
      MR_hl_field(MR_mktag(1), mercury__bimap__Reverse_8, 3) = ((MR_Box) (mercury__bimap__V_7_26));
#line 49 "tree234.opt"
    }
#line 365 "bimap.m"
    {
#line 365 "bimap.m"
      mercury__bimap__B_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 365 "bimap.m"
      MR_hl_field(MR_mktag(0), mercury__bimap__B_6, 0) = ((MR_Box) (mercury__bimap__Forward_7));
#line 365 "bimap.m"
      MR_hl_field(MR_mktag(0), mercury__bimap__B_6, 1) = ((MR_Box) (mercury__bimap__Reverse_8));
#line 365 "bimap.m"
    }
#line 362 "bimap.m"
    return mercury__bimap__B_6;
#line 362 "bimap.m"
  }
#line 43 "bimap.m"
}

#line 39 "bimap.m"
void MR_CALL 
mercury__bimap__init_1_p_0(
#line 39 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_5,
#line 39 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_6,
#line 39 "bimap.m"
  MR_Word * mercury__bimap__B_2)
#line 39 "bimap.m"
{
#line 357 "bimap.m"
  {
#line 357 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 357 "bimap.m"
    MR_Word mercury__bimap__Forward_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 357 "bimap.m"
    MR_Word mercury__bimap__Reverse_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 360 "bimap.m"
    *mercury__bimap__B_2 = (MR_Word) &mercury__bimap_scalar_common_4[0];
#line 357 "bimap.m"
  }
#line 39 "bimap.m"
}

#line 38 "bimap.m"
MR_Word MR_CALL 
mercury__bimap__init_0_f_0(
#line 38 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_3,
#line 38 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_4)
#line 38 "bimap.m"
{
#line 357 "bimap.m"
  {
#line 357 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 357 "bimap.m"
    MR_Word mercury__bimap__BM_2 = (MR_Word) &mercury__bimap_scalar_common_4[0];
#line 357 "bimap.m"
    MR_Word mercury__bimap__Forward_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 357 "bimap.m"
    MR_Word mercury__bimap__Reverse_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 357 "bimap.m"
    return mercury__bimap__BM_2;
#line 357 "bimap.m"
  }
#line 38 "bimap.m"
}

void mercury__bimap__init(void)
{
}

void mercury__bimap__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__bimap__bimap__type_ctor_info_bimap_2);
}

void mercury__bimap__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module bimap. */
