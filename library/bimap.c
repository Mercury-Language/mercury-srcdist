/*
** Automatically generated from `bimap.m'
** by the Mercury compiler,
** version rotd-2013-03-21, configured for x86_64-apple-darwin12.2.1.
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
#include "char.mih"
#include "construct.mih"
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
#include "term_io.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "stream.string_writer.mih"




#line 86 "bimap.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__bimap__tree234__pti_tree234_2__pseudo_1__pseudo_2;

#line 89 "bimap.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__bimap__tree234__pti_tree234_2__pseudo_2__pseudo_1;

#line 92 "bimap.c"
static const MR_PseudoTypeInfo mercury__bimap__bimap__field_types_bimap_2_0[2];

#line 95 "bimap.c"
static const MR_DuFunctorDesc mercury__bimap__bimap__du_functor_desc_bimap_2_0;

#line 98 "bimap.c"
static const MR_DuFunctorDescPtr mercury__bimap__bimap__du_stag_ordered_bimap_2_0[1];

#line 101 "bimap.c"
static const MR_DuPtagLayout mercury__bimap__bimap__du_ptag_ordered_bimap_2[1];

#line 104 "bimap.c"
static const MR_DuFunctorDescPtr mercury__bimap__bimap__du_name_ordered_bimap_2[1];

#line 107 "bimap.c"
static const MR_Integer mercury__bimap__bimap__functor_number_map_bimap_2[1];

#line 110 "bimap.c"
static MR_bool MR_CALL 
mercury__bimap____Unify____bimap_2_0_10001(
#line 113 "bimap.c"
  MR_Box mercury__bimap__wrapper_arg_1,
#line 115 "bimap.c"
  MR_Box mercury__bimap__wrapper_arg_2,
#line 117 "bimap.c"
  MR_Box mercury__bimap__wrapper_arg_3,
#line 119 "bimap.c"
  MR_Box mercury__bimap__wrapper_arg_4);

#line 122 "bimap.c"
static void MR_CALL 
mercury__bimap____Compare____bimap_2_0_10001(
#line 125 "bimap.c"
  MR_Box mercury__bimap__wrapper_arg_1,
#line 127 "bimap.c"
  MR_Box mercury__bimap__wrapper_arg_2,
#line 129 "bimap.c"
  MR_Box * mercury__bimap__wrapper_arg_3,
#line 131 "bimap.c"
  MR_Box mercury__bimap__wrapper_arg_4,
#line 133 "bimap.c"
  MR_Box mercury__bimap__wrapper_arg_5);

#line 39 "tree234.int"
static void MR_CALL 
mercury__bimap__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_55_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(
#line 39 "tree234.int"
  MR_Word mercury__bimap__V_53_53,
#line 39 "tree234.int"
  MR_Word mercury__bimap__V_54_54,
#line 39 "tree234.int"
  MR_Word mercury__bimap__V_55_55,
#line 39 "tree234.int"
  MR_Word mercury__bimap__V_56_56,
#line 39 "tree234.int"
  MR_Word mercury__bimap__HeadVar__2_2,
#line 39 "tree234.int"
  MR_Box mercury__bimap__HeadVar__3_3,
#line 39 "tree234.int"
  MR_Box * mercury__bimap__HeadVar__4_4);

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__bimap__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 190 "map.opt"
static void MR_CALL 
mercury__bimap__IntroducedFrom__pred__foldl__190__1_8_p_0(
#line 190 "map.opt"
  MR_Word mercury__bimap__TypeInfo_for_K_29,
#line 190 "map.opt"
  MR_Word mercury__bimap__TypeInfo_for_V_30,
#line 190 "map.opt"
  MR_Word mercury__bimap__TypeInfo_for_A_31,
#line 190 "map.opt"
  MR_Word mercury__bimap__F_5_5,
#line 190 "map.opt"
  MR_Box mercury__bimap__HeadVar__5_21,
#line 190 "map.opt"
  MR_Box mercury__bimap__HeadVar__6_22,
#line 190 "map.opt"
  MR_Box mercury__bimap__HeadVar__7_23,
#line 190 "map.opt"
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
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
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
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
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
#include "private_builtin.mh"
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



#line 558 "bimap.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__bimap__tree234__pti_tree234_2__pseudo_1__pseudo_2 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 567 "bimap.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__bimap__tree234__pti_tree234_2__pseudo_2__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 2,
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 576 "bimap.c"
static const MR_PseudoTypeInfo mercury__bimap__bimap__field_types_bimap_2_0[2] = {
  (MR_PseudoTypeInfo) &mercury__bimap__tree234__pti_tree234_2__pseudo_1__pseudo_2,
  (MR_PseudoTypeInfo) &mercury__bimap__tree234__pti_tree234_2__pseudo_2__pseudo_1
};

#line 582 "bimap.c"
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

#line 597 "bimap.c"
static const MR_DuFunctorDescPtr mercury__bimap__bimap__du_stag_ordered_bimap_2_0[1] = {
  &mercury__bimap__bimap__du_functor_desc_bimap_2_0
};

#line 602 "bimap.c"
static const MR_DuPtagLayout mercury__bimap__bimap__du_ptag_ordered_bimap_2[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__bimap__bimap__du_stag_ordered_bimap_2_0
  }
};

#line 611 "bimap.c"
static const MR_DuFunctorDescPtr mercury__bimap__bimap__du_name_ordered_bimap_2[1] = {
  &mercury__bimap__bimap__du_functor_desc_bimap_2_0
};

#line 616 "bimap.c"
static const MR_Integer mercury__bimap__bimap__functor_number_map_bimap_2[1] = {
  (MR_Integer) 0
};

#line 621 "bimap.c"
const MR_TypeCtorInfo_Struct mercury__bimap__bimap__type_ctor_info_bimap_2 = {
  (MR_Integer) 2,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__bimap____Unify____bimap_2_0_10001)),
  ((MR_Box) (mercury__bimap____Compare____bimap_2_0_10001)),
  (MR_String) "bimap",
  (MR_String) "bimap",
  {
    mercury__bimap__bimap__du_name_ordered_bimap_2
  },
  {
    mercury__bimap__bimap__du_ptag_ordered_bimap_2
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__bimap__bimap__functor_number_map_bimap_2
};

#line 642 "bimap.c"
static MR_bool MR_CALL 
mercury__bimap____Unify____bimap_2_0_10001(
#line 645 "bimap.c"
  MR_Box mercury__bimap__wrapper_arg_1,
#line 647 "bimap.c"
  MR_Box mercury__bimap__wrapper_arg_2,
#line 649 "bimap.c"
  MR_Box mercury__bimap__wrapper_arg_3,
#line 651 "bimap.c"
  MR_Box mercury__bimap__wrapper_arg_4)
#line 653 "bimap.c"
{
#line 655 "bimap.c"
  {
#line 657 "bimap.c"
    MR_bool mercury__bimap__succeeded;

#line 660 "bimap.c"
    {
#line 662 "bimap.c"
      mercury__bimap__succeeded = mercury__bimap____Unify____bimap_2_0(((MR_Word) mercury__bimap__wrapper_arg_1), ((MR_Word) mercury__bimap__wrapper_arg_2), ((MR_Word) mercury__bimap__wrapper_arg_3), ((MR_Word) mercury__bimap__wrapper_arg_4));
    }
#line 665 "bimap.c"
    return mercury__bimap__succeeded;
#line 667 "bimap.c"
  }
#line 669 "bimap.c"
}

#line 672 "bimap.c"
static void MR_CALL 
mercury__bimap____Compare____bimap_2_0_10001(
#line 675 "bimap.c"
  MR_Box mercury__bimap__wrapper_arg_1,
#line 677 "bimap.c"
  MR_Box mercury__bimap__wrapper_arg_2,
#line 679 "bimap.c"
  MR_Box * mercury__bimap__wrapper_arg_3,
#line 681 "bimap.c"
  MR_Box mercury__bimap__wrapper_arg_4,
#line 683 "bimap.c"
  MR_Box mercury__bimap__wrapper_arg_5)
#line 685 "bimap.c"
{
#line 687 "bimap.c"
  {
#line 689 "bimap.c"
    MR_Word mercury__bimap__conv0_HeadVar__1_1;

#line 692 "bimap.c"
    {
#line 694 "bimap.c"
      mercury__bimap____Compare____bimap_2_0(((MR_Word) mercury__bimap__wrapper_arg_1), ((MR_Word) mercury__bimap__wrapper_arg_2), &mercury__bimap__conv0_HeadVar__1_1, ((MR_Word) mercury__bimap__wrapper_arg_4), ((MR_Word) mercury__bimap__wrapper_arg_5));
    }
#line 697 "bimap.c"
    *mercury__bimap__wrapper_arg_3 = ((MR_Box) (mercury__bimap__conv0_HeadVar__1_1));
#line 699 "bimap.c"
  }
#line 701 "bimap.c"
}

#line 39 "tree234.int"
static void MR_CALL 
mercury__bimap__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_55_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(
#line 39 "tree234.int"
  MR_Word mercury__bimap__V_53_53,
#line 39 "tree234.int"
  MR_Word mercury__bimap__V_54_54,
#line 39 "tree234.int"
  MR_Word mercury__bimap__V_55_55,
#line 39 "tree234.int"
  MR_Word mercury__bimap__V_56_56,
#line 39 "tree234.int"
  MR_Word mercury__bimap__HeadVar__2_2,
#line 39 "tree234.int"
  MR_Box mercury__bimap__HeadVar__3_3,
#line 39 "tree234.int"
  MR_Box * mercury__bimap__HeadVar__4_4)
#line 39 "tree234.int"
{
#line 103 "tree234.opt"
  while (MR_TRUE)
#line 103 "tree234.opt"
    {
#line 103 "tree234.opt"
      /* tailcall optimized into a loop */
#line 103 "tree234.opt"
      {
#line 103 "tree234.opt"
        MR_bool mercury__bimap__succeeded;

#line 103 "tree234.opt"
        if ((mercury__bimap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 103 "tree234.opt"
          *mercury__bimap__HeadVar__4_4 = mercury__bimap__HeadVar__3_3;
#line 103 "tree234.opt"
        else
#line 103 "tree234.opt"
          if (((MR_tag((MR_Word) mercury__bimap__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3))))
#line 115 "tree234.opt"
            {
#line 115 "tree234.opt"
              MR_Box mercury__bimap__K0_37_32 = (MR_hl_field(MR_mktag(3), mercury__bimap__HeadVar__2_2, (MR_Integer) 0));
#line 115 "tree234.opt"
              MR_Box mercury__bimap__V0_38_33 = (MR_hl_field(MR_mktag(3), mercury__bimap__HeadVar__2_2, (MR_Integer) 1));
#line 115 "tree234.opt"
              MR_Box mercury__bimap__K1_39_34 = (MR_hl_field(MR_mktag(3), mercury__bimap__HeadVar__2_2, (MR_Integer) 2));
#line 115 "tree234.opt"
              MR_Box mercury__bimap__V1_40_35 = (MR_hl_field(MR_mktag(3), mercury__bimap__HeadVar__2_2, (MR_Integer) 3));
#line 115 "tree234.opt"
              MR_Box mercury__bimap__K2_41_36 = (MR_hl_field(MR_mktag(3), mercury__bimap__HeadVar__2_2, (MR_Integer) 4));
#line 115 "tree234.opt"
              MR_Box mercury__bimap__V2_42_37 = (MR_hl_field(MR_mktag(3), mercury__bimap__HeadVar__2_2, (MR_Integer) 5));
#line 115 "tree234.opt"
              MR_Word mercury__bimap__T0_43_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__bimap__HeadVar__2_2, (MR_Integer) 6)));
#line 115 "tree234.opt"
              MR_Word mercury__bimap__T1_44_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__bimap__HeadVar__2_2, (MR_Integer) 7)));
#line 115 "tree234.opt"
              MR_Word mercury__bimap__T2_45_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__bimap__HeadVar__2_2, (MR_Integer) 8)));
#line 115 "tree234.opt"
              MR_Word mercury__bimap__T3_46_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__bimap__HeadVar__2_2, (MR_Integer) 9)));
#line 115 "tree234.opt"
              MR_Box mercury__bimap__STATE_VARIABLE_A_50_50_44;
#line 115 "tree234.opt"
              MR_Box mercury__bimap__STATE_VARIABLE_A_51_51_45;
#line 115 "tree234.opt"
              MR_Box mercury__bimap__STATE_VARIABLE_A_52_52_46;
#line 115 "tree234.opt"
              MR_Box mercury__bimap__STATE_VARIABLE_A_53_53_47;
#line 115 "tree234.opt"
              MR_Box mercury__bimap__STATE_VARIABLE_A_54_54_48;
#line 115 "tree234.opt"
              MR_Box mercury__bimap__STATE_VARIABLE_A_55_55_49;
#line 190 "map.opt"
              MR_Box MR_CALL (* mercury__bimap__func_0)(MR_Box, MR_Box, MR_Box, MR_Box);

#line 116 "tree234.opt"
              {
#line 116 "tree234.opt"
                mercury__bimap__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_55_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(mercury__bimap__V_53_53, mercury__bimap__V_54_54, mercury__bimap__V_55_55, mercury__bimap__V_56_56, mercury__bimap__T0_43_38, mercury__bimap__HeadVar__3_3, &mercury__bimap__STATE_VARIABLE_A_50_50_44);
              }
#line 190 "map.opt"
              mercury__bimap__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__bimap__V_56_56, (MR_Integer) 1)));
#line 190 "map.opt"
              {
#line 190 "map.opt"
                mercury__bimap__STATE_VARIABLE_A_51_51_45 = mercury__bimap__func_0(((MR_Box) mercury__bimap__V_56_56), mercury__bimap__K0_37_32, mercury__bimap__V0_38_33, mercury__bimap__STATE_VARIABLE_A_50_50_44);
              }
#line 118 "tree234.opt"
              {
#line 118 "tree234.opt"
                mercury__bimap__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_55_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(mercury__bimap__V_53_53, mercury__bimap__V_54_54, mercury__bimap__V_55_55, mercury__bimap__V_56_56, mercury__bimap__T1_44_39, mercury__bimap__STATE_VARIABLE_A_51_51_45, &mercury__bimap__STATE_VARIABLE_A_52_52_46);
              }
#line 119 "tree234.opt"
              {
#line 119 "tree234.opt"
                mercury__bimap__IntroducedFrom__pred__foldl__190__1_8_p_0(mercury__bimap__V_53_53, mercury__bimap__V_54_54, mercury__bimap__V_55_55, mercury__bimap__V_56_56, mercury__bimap__K1_39_34, mercury__bimap__V1_40_35, mercury__bimap__STATE_VARIABLE_A_52_52_46, &mercury__bimap__STATE_VARIABLE_A_53_53_47);
              }
#line 120 "tree234.opt"
              {
#line 120 "tree234.opt"
                mercury__bimap__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_55_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(mercury__bimap__V_53_53, mercury__bimap__V_54_54, mercury__bimap__V_55_55, mercury__bimap__V_56_56, mercury__bimap__T2_45_40, mercury__bimap__STATE_VARIABLE_A_53_53_47, &mercury__bimap__STATE_VARIABLE_A_54_54_48);
              }
#line 121 "tree234.opt"
              {
#line 121 "tree234.opt"
                mercury__bimap__IntroducedFrom__pred__foldl__190__1_8_p_0(mercury__bimap__V_53_53, mercury__bimap__V_54_54, mercury__bimap__V_55_55, mercury__bimap__V_56_56, mercury__bimap__K2_41_36, mercury__bimap__V2_42_37, mercury__bimap__STATE_VARIABLE_A_54_54_48, &mercury__bimap__STATE_VARIABLE_A_55_55_49);
              }
#line 122 "tree234.opt"
              /* direct tailcall eliminated */
#line 122 "tree234.opt"
              {
#line 122 "tree234.opt"
                MR_Word mercury__bimap__HeadVar__2__tmp_copy_2 = mercury__bimap__T3_46_41;
#line 122 "tree234.opt"
                MR_Box mercury__bimap__HeadVar__3__tmp_copy_3 = mercury__bimap__STATE_VARIABLE_A_55_55_49;

#line 122 "tree234.opt"
                mercury__bimap__HeadVar__3_3 = mercury__bimap__HeadVar__3__tmp_copy_3;
#line 122 "tree234.opt"
                mercury__bimap__HeadVar__2_2 = mercury__bimap__HeadVar__2__tmp_copy_2;
#line 122 "tree234.opt"
              }
#line 122 "tree234.opt"
              continue;
#line 115 "tree234.opt"
            }
#line 103 "tree234.opt"
          else
#line 103 "tree234.opt"
            if (((MR_tag((MR_Word) mercury__bimap__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 109 "tree234.opt"
              {
#line 109 "tree234.opt"
                MR_Box mercury__bimap__K0_21_18 = (MR_hl_field(MR_mktag(2), mercury__bimap__HeadVar__2_2, (MR_Integer) 0));
#line 109 "tree234.opt"
                MR_Box mercury__bimap__V0_22_19 = (MR_hl_field(MR_mktag(2), mercury__bimap__HeadVar__2_2, (MR_Integer) 1));
#line 109 "tree234.opt"
                MR_Box mercury__bimap__K1_23_20 = (MR_hl_field(MR_mktag(2), mercury__bimap__HeadVar__2_2, (MR_Integer) 2));
#line 109 "tree234.opt"
                MR_Box mercury__bimap__V1_24_21 = (MR_hl_field(MR_mktag(2), mercury__bimap__HeadVar__2_2, (MR_Integer) 3));
#line 109 "tree234.opt"
                MR_Word mercury__bimap__T0_25_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__bimap__HeadVar__2_2, (MR_Integer) 4)));
#line 109 "tree234.opt"
                MR_Word mercury__bimap__T1_26_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__bimap__HeadVar__2_2, (MR_Integer) 5)));
#line 109 "tree234.opt"
                MR_Word mercury__bimap__T2_27_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__bimap__HeadVar__2_2, (MR_Integer) 6)));
#line 109 "tree234.opt"
                MR_Box mercury__bimap__STATE_VARIABLE_A_31_31_27;
#line 109 "tree234.opt"
                MR_Box mercury__bimap__STATE_VARIABLE_A_32_32_28;
#line 109 "tree234.opt"
                MR_Box mercury__bimap__STATE_VARIABLE_A_33_33_29;
#line 109 "tree234.opt"
                MR_Box mercury__bimap__STATE_VARIABLE_A_34_34_30;

#line 110 "tree234.opt"
                {
#line 110 "tree234.opt"
                  mercury__bimap__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_55_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(mercury__bimap__V_53_53, mercury__bimap__V_54_54, mercury__bimap__V_55_55, mercury__bimap__V_56_56, mercury__bimap__T0_25_22, mercury__bimap__HeadVar__3_3, &mercury__bimap__STATE_VARIABLE_A_31_31_27);
                }
#line 111 "tree234.opt"
                {
#line 111 "tree234.opt"
                  mercury__bimap__IntroducedFrom__pred__foldl__190__1_8_p_0(mercury__bimap__V_53_53, mercury__bimap__V_54_54, mercury__bimap__V_55_55, mercury__bimap__V_56_56, mercury__bimap__K0_21_18, mercury__bimap__V0_22_19, mercury__bimap__STATE_VARIABLE_A_31_31_27, &mercury__bimap__STATE_VARIABLE_A_32_32_28);
                }
#line 112 "tree234.opt"
                {
#line 112 "tree234.opt"
                  mercury__bimap__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_55_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(mercury__bimap__V_53_53, mercury__bimap__V_54_54, mercury__bimap__V_55_55, mercury__bimap__V_56_56, mercury__bimap__T1_26_23, mercury__bimap__STATE_VARIABLE_A_32_32_28, &mercury__bimap__STATE_VARIABLE_A_33_33_29);
                }
#line 113 "tree234.opt"
                {
#line 113 "tree234.opt"
                  mercury__bimap__IntroducedFrom__pred__foldl__190__1_8_p_0(mercury__bimap__V_53_53, mercury__bimap__V_54_54, mercury__bimap__V_55_55, mercury__bimap__V_56_56, mercury__bimap__K1_23_20, mercury__bimap__V1_24_21, mercury__bimap__STATE_VARIABLE_A_33_33_29, &mercury__bimap__STATE_VARIABLE_A_34_34_30);
                }
#line 114 "tree234.opt"
                /* direct tailcall eliminated */
#line 114 "tree234.opt"
                {
#line 114 "tree234.opt"
                  MR_Word mercury__bimap__HeadVar__2__tmp_copy_2 = mercury__bimap__T2_27_24;
#line 114 "tree234.opt"
                  MR_Box mercury__bimap__HeadVar__3__tmp_copy_3 = mercury__bimap__STATE_VARIABLE_A_34_34_30;

#line 114 "tree234.opt"
                  mercury__bimap__HeadVar__3_3 = mercury__bimap__HeadVar__3__tmp_copy_3;
#line 114 "tree234.opt"
                  mercury__bimap__HeadVar__2_2 = mercury__bimap__HeadVar__2__tmp_copy_2;
#line 114 "tree234.opt"
                }
#line 114 "tree234.opt"
                continue;
#line 109 "tree234.opt"
              }
#line 103 "tree234.opt"
            else
#line 105 "tree234.opt"
              {
#line 105 "tree234.opt"
                MR_Box mercury__bimap__K_10_9 = (MR_hl_field(MR_mktag(1), mercury__bimap__HeadVar__2_2, (MR_Integer) 0));
#line 105 "tree234.opt"
                MR_Box mercury__bimap__V_11_10 = (MR_hl_field(MR_mktag(1), mercury__bimap__HeadVar__2_2, (MR_Integer) 1));
#line 105 "tree234.opt"
                MR_Word mercury__bimap__T0_12_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bimap__HeadVar__2_2, (MR_Integer) 2)));
#line 105 "tree234.opt"
                MR_Word mercury__bimap__T1_13_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bimap__HeadVar__2_2, (MR_Integer) 3)));
#line 105 "tree234.opt"
                MR_Box mercury__bimap__STATE_VARIABLE_A_17_17_15;
#line 105 "tree234.opt"
                MR_Box mercury__bimap__STATE_VARIABLE_A_18_18_16;

#line 106 "tree234.opt"
                {
#line 106 "tree234.opt"
                  mercury__bimap__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_55_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(mercury__bimap__V_53_53, mercury__bimap__V_54_54, mercury__bimap__V_55_55, mercury__bimap__V_56_56, mercury__bimap__T0_12_11, mercury__bimap__HeadVar__3_3, &mercury__bimap__STATE_VARIABLE_A_17_17_15);
                }
#line 107 "tree234.opt"
                {
#line 107 "tree234.opt"
                  mercury__bimap__IntroducedFrom__pred__foldl__190__1_8_p_0(mercury__bimap__V_53_53, mercury__bimap__V_54_54, mercury__bimap__V_55_55, mercury__bimap__V_56_56, mercury__bimap__K_10_9, mercury__bimap__V_11_10, mercury__bimap__STATE_VARIABLE_A_17_17_15, &mercury__bimap__STATE_VARIABLE_A_18_18_16);
                }
#line 108 "tree234.opt"
                /* direct tailcall eliminated */
#line 108 "tree234.opt"
                {
#line 108 "tree234.opt"
                  MR_Word mercury__bimap__HeadVar__2__tmp_copy_2 = mercury__bimap__T1_13_12;
#line 108 "tree234.opt"
                  MR_Box mercury__bimap__HeadVar__3__tmp_copy_3 = mercury__bimap__STATE_VARIABLE_A_18_18_16;

#line 108 "tree234.opt"
                  mercury__bimap__HeadVar__3_3 = mercury__bimap__HeadVar__3__tmp_copy_3;
#line 108 "tree234.opt"
                  mercury__bimap__HeadVar__2_2 = mercury__bimap__HeadVar__2__tmp_copy_2;
#line 108 "tree234.opt"
                }
#line 108 "tree234.opt"
                continue;
#line 105 "tree234.opt"
              }
#line 103 "tree234.opt"
      }
#line 103 "tree234.opt"
      break;
#line 103 "tree234.opt"
    }
#line 39 "tree234.int"
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

#line 190 "map.opt"
static void MR_CALL 
mercury__bimap__IntroducedFrom__pred__foldl__190__1_8_p_0(
#line 190 "map.opt"
  MR_Word mercury__bimap__TypeInfo_for_K_29,
#line 190 "map.opt"
  MR_Word mercury__bimap__TypeInfo_for_V_30,
#line 190 "map.opt"
  MR_Word mercury__bimap__TypeInfo_for_A_31,
#line 190 "map.opt"
  MR_Word mercury__bimap__F_5_5,
#line 190 "map.opt"
  MR_Box mercury__bimap__HeadVar__5_21,
#line 190 "map.opt"
  MR_Box mercury__bimap__HeadVar__6_22,
#line 190 "map.opt"
  MR_Box mercury__bimap__HeadVar__7_23,
#line 190 "map.opt"
  MR_Box * mercury__bimap__HeadVar__8_24)
#line 190 "map.opt"
{
#line 190 "map.opt"
  {
#line 190 "map.opt"
    MR_bool mercury__bimap__succeeded;
#line 190 "map.opt"
    MR_Box MR_CALL (* mercury__bimap__func_0)(MR_Box, MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__bimap__F_5_5, (MR_Integer) 1)));

#line 190 "map.opt"
    {
#line 190 "map.opt"
      *mercury__bimap__HeadVar__8_24 = mercury__bimap__func_0(((MR_Box) mercury__bimap__F_5_5), mercury__bimap__HeadVar__5_21, mercury__bimap__HeadVar__6_22, mercury__bimap__HeadVar__7_23);
    }
#line 190 "map.opt"
  }
#line 190 "map.opt"
}

#line 336 "bimap.m"
void MR_CALL 
mercury__bimap____Compare____bimap_2_0(
#line 336 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_11,
#line 336 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_12,
#line 336 "bimap.m"
  MR_Word * mercury__bimap__HeadVar__1_1,
#line 336 "bimap.m"
  MR_Word mercury__bimap__HeadVar__2_2,
#line 336 "bimap.m"
  MR_Word mercury__bimap__HeadVar__3_3)
#line 336 "bimap.m"
{
#line 336 "bimap.m"
  {
#line 336 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 336 "bimap.m"
    MR_Integer mercury__bimap__CastX_9 = (MR_Integer) mercury__bimap__HeadVar__2_2;
#line 336 "bimap.m"
    MR_Integer mercury__bimap__CastY_10 = (MR_Integer) mercury__bimap__HeadVar__3_3;

#line 336 "bimap.m"
    mercury__bimap__succeeded = (mercury__bimap__CastX_9 == mercury__bimap__CastY_10);
#line 336 "bimap.m"
    if (mercury__bimap__succeeded)
#line 1036 "bimap.c"
      *mercury__bimap__HeadVar__1_1 = (MR_Integer) 0;
#line 336 "bimap.m"
    else
#line 336 "bimap.m"
      {
#line 336 "bimap.m"
        MR_Word mercury__bimap__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 0)));
#line 336 "bimap.m"
        MR_Word mercury__bimap__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 1)));
#line 336 "bimap.m"
        MR_Word mercury__bimap__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__3_3, (MR_Integer) 0)));
#line 336 "bimap.m"
        MR_Word mercury__bimap__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__3_3, (MR_Integer) 1)));
#line 336 "bimap.m"
        MR_Word mercury__bimap__V_8_8;

#line 336 "bimap.m"
        {
#line 336 "bimap.m"
          mercury__tree234____Compare____tree234_2_0(mercury__bimap__TypeInfo_for_K_11, mercury__bimap__TypeInfo_for_V_12, &mercury__bimap__V_8_8, mercury__bimap__V_4_4, mercury__bimap__V_6_6);
        }
#line 1058 "bimap.c"
        mercury__bimap__succeeded = (mercury__bimap__V_8_8 == (MR_Integer) 0);
#line 336 "bimap.m"
        mercury__bimap__succeeded = !(mercury__bimap__succeeded);
#line 336 "bimap.m"
        if (mercury__bimap__succeeded)
#line 336 "bimap.m"
          *mercury__bimap__HeadVar__1_1 = mercury__bimap__V_8_8;
#line 336 "bimap.m"
        else
#line 336 "bimap.m"
          {
#line 336 "bimap.m"
            mercury__tree234____Compare____tree234_2_0(mercury__bimap__TypeInfo_for_V_12, mercury__bimap__TypeInfo_for_K_11, mercury__bimap__HeadVar__1_1, mercury__bimap__V_5_5, mercury__bimap__V_7_7);
#line 336 "bimap.m"
            return;
          }
#line 336 "bimap.m"
      }
#line 336 "bimap.m"
  }
#line 336 "bimap.m"
}

#line 336 "bimap.m"
MR_bool MR_CALL 
mercury__bimap____Unify____bimap_2_0(
#line 336 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_9,
#line 336 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_10,
#line 336 "bimap.m"
  MR_Word mercury__bimap__HeadVar__1_1,
#line 336 "bimap.m"
  MR_Word mercury__bimap__HeadVar__2_2)
#line 336 "bimap.m"
{
#line 336 "bimap.m"
  {
#line 336 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 336 "bimap.m"
    MR_Integer mercury__bimap__CastX_7 = (MR_Integer) mercury__bimap__HeadVar__1_1;
#line 336 "bimap.m"
    MR_Integer mercury__bimap__CastY_8 = (MR_Integer) mercury__bimap__HeadVar__2_2;

#line 336 "bimap.m"
    mercury__bimap__succeeded = (mercury__bimap__CastX_7 == mercury__bimap__CastY_8);
#line 336 "bimap.m"
    if (mercury__bimap__succeeded)
#line 336 "bimap.m"
      mercury__bimap__succeeded = MR_TRUE;
#line 336 "bimap.m"
    else
#line 336 "bimap.m"
      {
#line 336 "bimap.m"
        MR_Word mercury__bimap__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 0)));
#line 336 "bimap.m"
        MR_Word mercury__bimap__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 1)));
#line 336 "bimap.m"
        MR_Word mercury__bimap__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 0)));
#line 336 "bimap.m"
        MR_Word mercury__bimap__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 1)));

#line 1123 "bimap.c"
        {
#line 1125 "bimap.c"
          mercury__bimap__succeeded = mercury__tree234____Unify____tree234_2_0(mercury__bimap__TypeInfo_for_K_9, mercury__bimap__TypeInfo_for_V_10, mercury__bimap__V_3_3, mercury__bimap__V_5_5);
        }
#line 336 "bimap.m"
        if (mercury__bimap__succeeded)
#line 1130 "bimap.c"
          {
#line 1132 "bimap.c"
            return mercury__bimap__succeeded = mercury__tree234____Unify____tree234_2_0(mercury__bimap__TypeInfo_for_V_10, mercury__bimap__TypeInfo_for_K_9, mercury__bimap__V_4_4, mercury__bimap__V_6_6);
          }
#line 336 "bimap.m"
      }
#line 336 "bimap.m"
    return mercury__bimap__succeeded;
#line 336 "bimap.m"
  }
#line 336 "bimap.m"
}

#line 659 "bimap.m"
void MR_CALL 
mercury__bimap__map_values_func_2_4_p_0(
#line 659 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_21,
#line 659 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_22,
#line 659 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_W_23,
#line 659 "bimap.m"
  MR_Word mercury__bimap__HeadVar__1_1,
#line 659 "bimap.m"
  MR_Word mercury__bimap__HeadVar__2_2,
#line 659 "bimap.m"
  MR_Word mercury__bimap__STATE_VARIABLE_List_0_3,
#line 659 "bimap.m"
  MR_Word * mercury__bimap__STATE_VARIABLE_List_4)
#line 659 "bimap.m"
{
#line 662 "bimap.m"
  while (MR_TRUE)
#line 662 "bimap.m"
    {
#line 662 "bimap.m"
      /* tailcall optimized into a loop */
#line 662 "bimap.m"
      {
#line 662 "bimap.m"
        MR_bool mercury__bimap__succeeded;

#line 662 "bimap.m"
        if ((mercury__bimap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 662 "bimap.m"
          *mercury__bimap__STATE_VARIABLE_List_4 = mercury__bimap__STATE_VARIABLE_List_0_3;
#line 662 "bimap.m"
        else
#line 663 "bimap.m"
          {
#line 663 "bimap.m"
            MR_Box mercury__bimap__Key_10;
#line 663 "bimap.m"
            MR_Box mercury__bimap__Value0_11;
#line 663 "bimap.m"
            MR_Word mercury__bimap__Tail0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bimap__HeadVar__2_2, (MR_Integer) 1)));
#line 663 "bimap.m"
            MR_Box mercury__bimap__Value_14;
#line 663 "bimap.m"
            MR_Word mercury__bimap__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bimap__HeadVar__2_2, (MR_Integer) 0)));
#line 663 "bimap.m"
            MR_Word mercury__bimap__STATE_VARIABLE_List_18_18;
#line 663 "bimap.m"
            MR_Word mercury__bimap__V_19_19;
#line 664 "bimap.m"
            MR_Box MR_CALL (* mercury__bimap__func_0)(MR_Box, MR_Box, MR_Box);

#line 663 "bimap.m"
            mercury__bimap__Key_10 = (MR_hl_field(MR_mktag(0), mercury__bimap__V_17_17, (MR_Integer) 0));
#line 663 "bimap.m"
            mercury__bimap__Value0_11 = (MR_hl_field(MR_mktag(0), mercury__bimap__V_17_17, (MR_Integer) 1));
#line 664 "bimap.m"
            mercury__bimap__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 1)));
#line 664 "bimap.m"
            {
#line 664 "bimap.m"
              mercury__bimap__Value_14 = mercury__bimap__func_0(((MR_Box) mercury__bimap__HeadVar__1_1), mercury__bimap__Key_10, mercury__bimap__Value0_11);
            }
#line 665 "bimap.m"
            {
#line 665 "bimap.m"
              mercury__bimap__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 665 "bimap.m"
              MR_hl_field(MR_mktag(0), mercury__bimap__V_19_19, 0) = mercury__bimap__Key_10;
#line 665 "bimap.m"
              MR_hl_field(MR_mktag(0), mercury__bimap__V_19_19, 1) = mercury__bimap__Value_14;
#line 665 "bimap.m"
            }
#line 665 "bimap.m"
            {
#line 665 "bimap.m"
              mercury__bimap__STATE_VARIABLE_List_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 665 "bimap.m"
              MR_hl_field(MR_mktag(1), mercury__bimap__STATE_VARIABLE_List_18_18, 0) = ((MR_Box) (mercury__bimap__V_19_19));
#line 665 "bimap.m"
              MR_hl_field(MR_mktag(1), mercury__bimap__STATE_VARIABLE_List_18_18, 1) = ((MR_Box) (mercury__bimap__STATE_VARIABLE_List_0_3));
#line 665 "bimap.m"
            }
#line 666 "bimap.m"
            /* direct tailcall eliminated */
#line 666 "bimap.m"
            {
#line 666 "bimap.m"
              MR_Word mercury__bimap__HeadVar__2__tmp_copy_2 = mercury__bimap__Tail0_12;
#line 666 "bimap.m"
              MR_Word mercury__bimap__STATE_VARIABLE_List_0__tmp_copy_3 = mercury__bimap__STATE_VARIABLE_List_18_18;

#line 666 "bimap.m"
              mercury__bimap__STATE_VARIABLE_List_0_3 = mercury__bimap__STATE_VARIABLE_List_0__tmp_copy_3;
#line 666 "bimap.m"
              mercury__bimap__HeadVar__2_2 = mercury__bimap__HeadVar__2__tmp_copy_2;
#line 666 "bimap.m"
            }
#line 666 "bimap.m"
            continue;
#line 663 "bimap.m"
          }
#line 662 "bimap.m"
      }
#line 662 "bimap.m"
      break;
#line 662 "bimap.m"
    }
#line 659 "bimap.m"
}

#line 650 "bimap.m"
void MR_CALL 
mercury__bimap__map_values_2_4_p_0(
#line 650 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_21,
#line 650 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_22,
#line 650 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_W_23,
#line 650 "bimap.m"
  MR_Word mercury__bimap__HeadVar__1_1,
#line 650 "bimap.m"
  MR_Word mercury__bimap__HeadVar__2_2,
#line 650 "bimap.m"
  MR_Word mercury__bimap__STATE_VARIABLE_List_0_3,
#line 650 "bimap.m"
  MR_Word * mercury__bimap__STATE_VARIABLE_List_4)
#line 650 "bimap.m"
{
#line 653 "bimap.m"
  while (MR_TRUE)
#line 653 "bimap.m"
    {
#line 653 "bimap.m"
      /* tailcall optimized into a loop */
#line 653 "bimap.m"
      {
#line 653 "bimap.m"
        MR_bool mercury__bimap__succeeded;

#line 653 "bimap.m"
        if ((mercury__bimap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 653 "bimap.m"
          *mercury__bimap__STATE_VARIABLE_List_4 = mercury__bimap__STATE_VARIABLE_List_0_3;
#line 653 "bimap.m"
        else
#line 654 "bimap.m"
          {
#line 654 "bimap.m"
            MR_Box mercury__bimap__Key_10;
#line 654 "bimap.m"
            MR_Box mercury__bimap__Value0_11;
#line 654 "bimap.m"
            MR_Word mercury__bimap__Tail0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bimap__HeadVar__2_2, (MR_Integer) 1)));
#line 654 "bimap.m"
            MR_Box mercury__bimap__Value_14;
#line 654 "bimap.m"
            MR_Word mercury__bimap__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bimap__HeadVar__2_2, (MR_Integer) 0)));
#line 654 "bimap.m"
            MR_Word mercury__bimap__STATE_VARIABLE_List_18_18;
#line 654 "bimap.m"
            MR_Word mercury__bimap__V_19_19;
#line 655 "bimap.m"
            void MR_CALL (* mercury__bimap__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 654 "bimap.m"
            mercury__bimap__Key_10 = (MR_hl_field(MR_mktag(0), mercury__bimap__V_17_17, (MR_Integer) 0));
#line 654 "bimap.m"
            mercury__bimap__Value0_11 = (MR_hl_field(MR_mktag(0), mercury__bimap__V_17_17, (MR_Integer) 1));
#line 655 "bimap.m"
            mercury__bimap__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 1)));
#line 655 "bimap.m"
            {
#line 655 "bimap.m"
              mercury__bimap__func_0(((MR_Box) mercury__bimap__HeadVar__1_1), mercury__bimap__Key_10, mercury__bimap__Value0_11, &mercury__bimap__Value_14);
            }
#line 656 "bimap.m"
            {
#line 656 "bimap.m"
              mercury__bimap__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 656 "bimap.m"
              MR_hl_field(MR_mktag(0), mercury__bimap__V_19_19, 0) = mercury__bimap__Key_10;
#line 656 "bimap.m"
              MR_hl_field(MR_mktag(0), mercury__bimap__V_19_19, 1) = mercury__bimap__Value_14;
#line 656 "bimap.m"
            }
#line 656 "bimap.m"
            {
#line 656 "bimap.m"
              mercury__bimap__STATE_VARIABLE_List_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 656 "bimap.m"
              MR_hl_field(MR_mktag(1), mercury__bimap__STATE_VARIABLE_List_18_18, 0) = ((MR_Box) (mercury__bimap__V_19_19));
#line 656 "bimap.m"
              MR_hl_field(MR_mktag(1), mercury__bimap__STATE_VARIABLE_List_18_18, 1) = ((MR_Box) (mercury__bimap__STATE_VARIABLE_List_0_3));
#line 656 "bimap.m"
            }
#line 657 "bimap.m"
            /* direct tailcall eliminated */
#line 657 "bimap.m"
            {
#line 657 "bimap.m"
              MR_Word mercury__bimap__HeadVar__2__tmp_copy_2 = mercury__bimap__Tail0_12;
#line 657 "bimap.m"
              MR_Word mercury__bimap__STATE_VARIABLE_List_0__tmp_copy_3 = mercury__bimap__STATE_VARIABLE_List_18_18;

#line 657 "bimap.m"
              mercury__bimap__STATE_VARIABLE_List_0_3 = mercury__bimap__STATE_VARIABLE_List_0__tmp_copy_3;
#line 657 "bimap.m"
              mercury__bimap__HeadVar__2_2 = mercury__bimap__HeadVar__2__tmp_copy_2;
#line 657 "bimap.m"
            }
#line 657 "bimap.m"
            continue;
#line 654 "bimap.m"
          }
#line 653 "bimap.m"
      }
#line 653 "bimap.m"
      break;
#line 653 "bimap.m"
    }
#line 650 "bimap.m"
}

#line 640 "bimap.m"
void MR_CALL 
mercury__bimap__map_keys_func_2_4_p_0(
#line 640 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_21,
#line 640 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_22,
#line 640 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_L_23,
#line 640 "bimap.m"
  MR_Word mercury__bimap__HeadVar__1_1,
#line 640 "bimap.m"
  MR_Word mercury__bimap__HeadVar__2_2,
#line 640 "bimap.m"
  MR_Word mercury__bimap__STATE_VARIABLE_List_0_3,
#line 640 "bimap.m"
  MR_Word * mercury__bimap__STATE_VARIABLE_List_4)
#line 640 "bimap.m"
{
#line 644 "bimap.m"
  while (MR_TRUE)
#line 644 "bimap.m"
    {
#line 644 "bimap.m"
      /* tailcall optimized into a loop */
#line 644 "bimap.m"
      {
#line 644 "bimap.m"
        MR_bool mercury__bimap__succeeded;

#line 644 "bimap.m"
        if ((mercury__bimap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 644 "bimap.m"
          *mercury__bimap__STATE_VARIABLE_List_4 = mercury__bimap__STATE_VARIABLE_List_0_3;
#line 644 "bimap.m"
        else
#line 645 "bimap.m"
          {
#line 645 "bimap.m"
            MR_Box mercury__bimap__Key0_10;
#line 645 "bimap.m"
            MR_Box mercury__bimap__Value_11;
#line 645 "bimap.m"
            MR_Word mercury__bimap__Tail0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bimap__HeadVar__2_2, (MR_Integer) 1)));
#line 645 "bimap.m"
            MR_Box mercury__bimap__Key_14;
#line 645 "bimap.m"
            MR_Word mercury__bimap__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bimap__HeadVar__2_2, (MR_Integer) 0)));
#line 645 "bimap.m"
            MR_Word mercury__bimap__STATE_VARIABLE_List_18_18;
#line 645 "bimap.m"
            MR_Word mercury__bimap__V_19_19;
#line 646 "bimap.m"
            MR_Box MR_CALL (* mercury__bimap__func_0)(MR_Box, MR_Box, MR_Box);

#line 645 "bimap.m"
            mercury__bimap__Key0_10 = (MR_hl_field(MR_mktag(0), mercury__bimap__V_17_17, (MR_Integer) 0));
#line 645 "bimap.m"
            mercury__bimap__Value_11 = (MR_hl_field(MR_mktag(0), mercury__bimap__V_17_17, (MR_Integer) 1));
#line 646 "bimap.m"
            mercury__bimap__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 1)));
#line 646 "bimap.m"
            {
#line 646 "bimap.m"
              mercury__bimap__Key_14 = mercury__bimap__func_0(((MR_Box) mercury__bimap__HeadVar__1_1), mercury__bimap__Value_11, mercury__bimap__Key0_10);
            }
#line 647 "bimap.m"
            {
#line 647 "bimap.m"
              mercury__bimap__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 647 "bimap.m"
              MR_hl_field(MR_mktag(0), mercury__bimap__V_19_19, 0) = mercury__bimap__Key_14;
#line 647 "bimap.m"
              MR_hl_field(MR_mktag(0), mercury__bimap__V_19_19, 1) = mercury__bimap__Value_11;
#line 647 "bimap.m"
            }
#line 647 "bimap.m"
            {
#line 647 "bimap.m"
              mercury__bimap__STATE_VARIABLE_List_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 647 "bimap.m"
              MR_hl_field(MR_mktag(1), mercury__bimap__STATE_VARIABLE_List_18_18, 0) = ((MR_Box) (mercury__bimap__V_19_19));
#line 647 "bimap.m"
              MR_hl_field(MR_mktag(1), mercury__bimap__STATE_VARIABLE_List_18_18, 1) = ((MR_Box) (mercury__bimap__STATE_VARIABLE_List_0_3));
#line 647 "bimap.m"
            }
#line 648 "bimap.m"
            /* direct tailcall eliminated */
#line 648 "bimap.m"
            {
#line 648 "bimap.m"
              MR_Word mercury__bimap__HeadVar__2__tmp_copy_2 = mercury__bimap__Tail0_12;
#line 648 "bimap.m"
              MR_Word mercury__bimap__STATE_VARIABLE_List_0__tmp_copy_3 = mercury__bimap__STATE_VARIABLE_List_18_18;

#line 648 "bimap.m"
              mercury__bimap__STATE_VARIABLE_List_0_3 = mercury__bimap__STATE_VARIABLE_List_0__tmp_copy_3;
#line 648 "bimap.m"
              mercury__bimap__HeadVar__2_2 = mercury__bimap__HeadVar__2__tmp_copy_2;
#line 648 "bimap.m"
            }
#line 648 "bimap.m"
            continue;
#line 645 "bimap.m"
          }
#line 644 "bimap.m"
      }
#line 644 "bimap.m"
      break;
#line 644 "bimap.m"
    }
#line 640 "bimap.m"
}

#line 630 "bimap.m"
void MR_CALL 
mercury__bimap__map_keys_2_4_p_0(
#line 630 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_21,
#line 630 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_22,
#line 630 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_L_23,
#line 630 "bimap.m"
  MR_Word mercury__bimap__HeadVar__1_1,
#line 630 "bimap.m"
  MR_Word mercury__bimap__HeadVar__2_2,
#line 630 "bimap.m"
  MR_Word mercury__bimap__STATE_VARIABLE_List_0_3,
#line 630 "bimap.m"
  MR_Word * mercury__bimap__STATE_VARIABLE_List_4)
#line 630 "bimap.m"
{
#line 634 "bimap.m"
  while (MR_TRUE)
#line 634 "bimap.m"
    {
#line 634 "bimap.m"
      /* tailcall optimized into a loop */
#line 634 "bimap.m"
      {
#line 634 "bimap.m"
        MR_bool mercury__bimap__succeeded;

#line 634 "bimap.m"
        if ((mercury__bimap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 634 "bimap.m"
          *mercury__bimap__STATE_VARIABLE_List_4 = mercury__bimap__STATE_VARIABLE_List_0_3;
#line 634 "bimap.m"
        else
#line 635 "bimap.m"
          {
#line 635 "bimap.m"
            MR_Box mercury__bimap__Key0_10;
#line 635 "bimap.m"
            MR_Box mercury__bimap__Value_11;
#line 635 "bimap.m"
            MR_Word mercury__bimap__Tail0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bimap__HeadVar__2_2, (MR_Integer) 1)));
#line 635 "bimap.m"
            MR_Box mercury__bimap__Key_14;
#line 635 "bimap.m"
            MR_Word mercury__bimap__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bimap__HeadVar__2_2, (MR_Integer) 0)));
#line 635 "bimap.m"
            MR_Word mercury__bimap__STATE_VARIABLE_List_18_18;
#line 635 "bimap.m"
            MR_Word mercury__bimap__V_19_19;
#line 636 "bimap.m"
            void MR_CALL (* mercury__bimap__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 635 "bimap.m"
            mercury__bimap__Key0_10 = (MR_hl_field(MR_mktag(0), mercury__bimap__V_17_17, (MR_Integer) 0));
#line 635 "bimap.m"
            mercury__bimap__Value_11 = (MR_hl_field(MR_mktag(0), mercury__bimap__V_17_17, (MR_Integer) 1));
#line 636 "bimap.m"
            mercury__bimap__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 1)));
#line 636 "bimap.m"
            {
#line 636 "bimap.m"
              mercury__bimap__func_0(((MR_Box) mercury__bimap__HeadVar__1_1), mercury__bimap__Value_11, mercury__bimap__Key0_10, &mercury__bimap__Key_14);
            }
#line 637 "bimap.m"
            {
#line 637 "bimap.m"
              mercury__bimap__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 637 "bimap.m"
              MR_hl_field(MR_mktag(0), mercury__bimap__V_19_19, 0) = mercury__bimap__Key_14;
#line 637 "bimap.m"
              MR_hl_field(MR_mktag(0), mercury__bimap__V_19_19, 1) = mercury__bimap__Value_11;
#line 637 "bimap.m"
            }
#line 637 "bimap.m"
            {
#line 637 "bimap.m"
              mercury__bimap__STATE_VARIABLE_List_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 637 "bimap.m"
              MR_hl_field(MR_mktag(1), mercury__bimap__STATE_VARIABLE_List_18_18, 0) = ((MR_Box) (mercury__bimap__V_19_19));
#line 637 "bimap.m"
              MR_hl_field(MR_mktag(1), mercury__bimap__STATE_VARIABLE_List_18_18, 1) = ((MR_Box) (mercury__bimap__STATE_VARIABLE_List_0_3));
#line 637 "bimap.m"
            }
#line 638 "bimap.m"
            /* direct tailcall eliminated */
#line 638 "bimap.m"
            {
#line 638 "bimap.m"
              MR_Word mercury__bimap__HeadVar__2__tmp_copy_2 = mercury__bimap__Tail0_12;
#line 638 "bimap.m"
              MR_Word mercury__bimap__STATE_VARIABLE_List_0__tmp_copy_3 = mercury__bimap__STATE_VARIABLE_List_18_18;

#line 638 "bimap.m"
              mercury__bimap__STATE_VARIABLE_List_0_3 = mercury__bimap__STATE_VARIABLE_List_0__tmp_copy_3;
#line 638 "bimap.m"
              mercury__bimap__HeadVar__2_2 = mercury__bimap__HeadVar__2__tmp_copy_2;
#line 638 "bimap.m"
            }
#line 638 "bimap.m"
            continue;
#line 635 "bimap.m"
          }
#line 634 "bimap.m"
      }
#line 634 "bimap.m"
      break;
#line 634 "bimap.m"
    }
#line 630 "bimap.m"
}

#line 558 "bimap.m"
void MR_CALL 
mercury__bimap__overlay_2_3_p_0(
#line 558 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_16,
#line 558 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_17,
#line 558 "bimap.m"
  MR_Word mercury__bimap__HeadVar__1_1,
#line 558 "bimap.m"
  MR_Word mercury__bimap__STATE_VARIABLE_BM_0_2,
#line 558 "bimap.m"
  MR_Word * mercury__bimap__STATE_VARIABLE_BM_3)
#line 558 "bimap.m"
{
#line 561 "bimap.m"
  while (MR_TRUE)
#line 561 "bimap.m"
    {
#line 561 "bimap.m"
      /* tailcall optimized into a loop */
#line 561 "bimap.m"
      {
#line 561 "bimap.m"
        MR_bool mercury__bimap__succeeded;

#line 561 "bimap.m"
        if ((mercury__bimap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 561 "bimap.m"
          *mercury__bimap__STATE_VARIABLE_BM_3 = mercury__bimap__STATE_VARIABLE_BM_0_2;
#line 561 "bimap.m"
        else
#line 562 "bimap.m"
          {
#line 562 "bimap.m"
            MR_Box mercury__bimap__Key_7;
#line 562 "bimap.m"
            MR_Box mercury__bimap__Value_8;
#line 562 "bimap.m"
            MR_Word mercury__bimap__KeysValues_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bimap__HeadVar__1_1, (MR_Integer) 1)));
#line 562 "bimap.m"
            MR_Word mercury__bimap__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bimap__HeadVar__1_1, (MR_Integer) 0)));
#line 562 "bimap.m"
            MR_Word mercury__bimap__STATE_VARIABLE_BM_14_14;

#line 562 "bimap.m"
            mercury__bimap__Key_7 = (MR_hl_field(MR_mktag(0), mercury__bimap__V_13_13, (MR_Integer) 0));
#line 562 "bimap.m"
            mercury__bimap__Value_8 = (MR_hl_field(MR_mktag(0), mercury__bimap__V_13_13, (MR_Integer) 1));
#line 563 "bimap.m"
            {
#line 563 "bimap.m"
              mercury__bimap__set_4_p_0(mercury__bimap__TypeInfo_for_K_16, mercury__bimap__TypeInfo_for_V_17, mercury__bimap__Key_7, mercury__bimap__Value_8, mercury__bimap__STATE_VARIABLE_BM_0_2, &mercury__bimap__STATE_VARIABLE_BM_14_14);
            }
#line 564 "bimap.m"
            /* direct tailcall eliminated */
#line 564 "bimap.m"
            {
#line 564 "bimap.m"
              MR_Word mercury__bimap__HeadVar__1__tmp_copy_1 = mercury__bimap__KeysValues_9;
#line 564 "bimap.m"
              MR_Word mercury__bimap__STATE_VARIABLE_BM_0__tmp_copy_2 = mercury__bimap__STATE_VARIABLE_BM_14_14;

#line 564 "bimap.m"
              mercury__bimap__STATE_VARIABLE_BM_0_2 = mercury__bimap__STATE_VARIABLE_BM_0__tmp_copy_2;
#line 564 "bimap.m"
              mercury__bimap__HeadVar__1_1 = mercury__bimap__HeadVar__1__tmp_copy_1;
#line 564 "bimap.m"
            }
#line 564 "bimap.m"
            continue;
#line 562 "bimap.m"
          }
#line 561 "bimap.m"
      }
#line 561 "bimap.m"
      break;
#line 561 "bimap.m"
    }
#line 558 "bimap.m"
}

#line 326 "bimap.m"
MR_Word MR_CALL 
mercury__bimap__reverse_map_1_f_0(
#line 326 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_5,
#line 326 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_6,
#line 326 "bimap.m"
  MR_Word mercury__bimap__HeadVar__1_1)
#line 326 "bimap.m"
{
#line 682 "bimap.m"
  {
#line 682 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 682 "bimap.m"
    MR_Word mercury__bimap__Reverse_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 1)));
#line 682 "bimap.m"
    MR_Word mercury__bimap__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 0)));

#line 682 "bimap.m"
    return mercury__bimap__Reverse_4;
#line 682 "bimap.m"
  }
#line 326 "bimap.m"
}

#line 322 "bimap.m"
MR_Word MR_CALL 
mercury__bimap__forward_map_1_f_0(
#line 322 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_5,
#line 322 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_6,
#line 322 "bimap.m"
  MR_Word mercury__bimap__HeadVar__1_1)
#line 322 "bimap.m"
{
#line 680 "bimap.m"
  {
#line 680 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 680 "bimap.m"
    MR_Word mercury__bimap__Forward_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 0)));
#line 680 "bimap.m"
    MR_Word mercury__bimap__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 1)));

#line 680 "bimap.m"
    return mercury__bimap__Forward_3;
#line 680 "bimap.m"
  }
#line 322 "bimap.m"
}

#line 317 "bimap.m"
MR_bool MR_CALL 
mercury__bimap__foldl3_8_p_7(
#line 317 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_24,
#line 317 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_25,
#line 317 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_A_26,
#line 317 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_B_27,
#line 317 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_C_28,
#line 317 "bimap.m"
  MR_Word mercury__bimap__Pred_9,
#line 317 "bimap.m"
  MR_Word mercury__bimap__HeadVar__2_2,
#line 317 "bimap.m"
  MR_Box mercury__bimap__STATE_VARIABLE_A_0_15,
#line 317 "bimap.m"
  MR_Box * mercury__bimap__STATE_VARIABLE_A_16,
#line 317 "bimap.m"
  MR_Box mercury__bimap__STATE_VARIABLE_B_0_17,
#line 317 "bimap.m"
  MR_Box * mercury__bimap__STATE_VARIABLE_B_18,
#line 317 "bimap.m"
  MR_Box mercury__bimap__STATE_VARIABLE_C_0_19,
#line 317 "bimap.m"
  MR_Box * mercury__bimap__STATE_VARIABLE_C_20)
#line 317 "bimap.m"
{
#line 677 "bimap.m"
  {
#line 677 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 677 "bimap.m"
    MR_Word mercury__bimap__Forward_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 0)));
#line 677 "bimap.m"
    MR_Word mercury__bimap__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 1)));

#line 201 "map.opt"
    {
#line 201 "map.opt"
      return mercury__bimap__succeeded = mercury__tree234__foldl3_8_p_7(mercury__bimap__TypeInfo_for_K_24, mercury__bimap__TypeInfo_for_V_25, mercury__bimap__TypeInfo_for_A_26, mercury__bimap__TypeInfo_for_B_27, mercury__bimap__TypeInfo_for_C_28, mercury__bimap__Pred_9, mercury__bimap__Forward_10, mercury__bimap__STATE_VARIABLE_A_0_15, mercury__bimap__STATE_VARIABLE_A_16, mercury__bimap__STATE_VARIABLE_B_0_17, mercury__bimap__STATE_VARIABLE_B_18, mercury__bimap__STATE_VARIABLE_C_0_19, mercury__bimap__STATE_VARIABLE_C_20);
    }
#line 677 "bimap.m"
    return mercury__bimap__succeeded;
#line 677 "bimap.m"
  }
#line 317 "bimap.m"
}

#line 315 "bimap.m"
MR_bool MR_CALL 
mercury__bimap__foldl3_8_p_6(
#line 315 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_24,
#line 315 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_25,
#line 315 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_A_26,
#line 315 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_B_27,
#line 315 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_C_28,
#line 315 "bimap.m"
  MR_Word mercury__bimap__Pred_9,
#line 315 "bimap.m"
  MR_Word mercury__bimap__HeadVar__2_2,
#line 315 "bimap.m"
  MR_Box mercury__bimap__STATE_VARIABLE_A_0_15,
#line 315 "bimap.m"
  MR_Box * mercury__bimap__STATE_VARIABLE_A_16,
#line 315 "bimap.m"
  MR_Box mercury__bimap__STATE_VARIABLE_B_0_17,
#line 315 "bimap.m"
  MR_Box * mercury__bimap__STATE_VARIABLE_B_18,
#line 315 "bimap.m"
  MR_Box mercury__bimap__STATE_VARIABLE_C_0_19,
#line 315 "bimap.m"
  MR_Box * mercury__bimap__STATE_VARIABLE_C_20)
#line 315 "bimap.m"
{
#line 677 "bimap.m"
  {
#line 677 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 677 "bimap.m"
    MR_Word mercury__bimap__Forward_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 0)));
#line 677 "bimap.m"
    MR_Word mercury__bimap__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 1)));

#line 201 "map.opt"
    {
#line 201 "map.opt"
      return mercury__bimap__succeeded = mercury__tree234__foldl3_8_p_6(mercury__bimap__TypeInfo_for_K_24, mercury__bimap__TypeInfo_for_V_25, mercury__bimap__TypeInfo_for_A_26, mercury__bimap__TypeInfo_for_B_27, mercury__bimap__TypeInfo_for_C_28, mercury__bimap__Pred_9, mercury__bimap__Forward_10, mercury__bimap__STATE_VARIABLE_A_0_15, mercury__bimap__STATE_VARIABLE_A_16, mercury__bimap__STATE_VARIABLE_B_0_17, mercury__bimap__STATE_VARIABLE_B_18, mercury__bimap__STATE_VARIABLE_C_0_19, mercury__bimap__STATE_VARIABLE_C_20);
    }
#line 677 "bimap.m"
    return mercury__bimap__succeeded;
#line 677 "bimap.m"
  }
#line 315 "bimap.m"
}

#line 313 "bimap.m"
MR_bool MR_CALL 
mercury__bimap__foldl3_8_p_5(
#line 313 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_24,
#line 313 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_25,
#line 313 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_A_26,
#line 313 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_B_27,
#line 313 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_C_28,
#line 313 "bimap.m"
  MR_Word mercury__bimap__Pred_9,
#line 313 "bimap.m"
  MR_Word mercury__bimap__HeadVar__2_2,
#line 313 "bimap.m"
  MR_Box mercury__bimap__STATE_VARIABLE_A_0_15,
#line 313 "bimap.m"
  MR_Box * mercury__bimap__STATE_VARIABLE_A_16,
#line 313 "bimap.m"
  MR_Box mercury__bimap__STATE_VARIABLE_B_0_17,
#line 313 "bimap.m"
  MR_Box * mercury__bimap__STATE_VARIABLE_B_18,
#line 313 "bimap.m"
  MR_Box mercury__bimap__STATE_VARIABLE_C_0_19,
#line 313 "bimap.m"
  MR_Box * mercury__bimap__STATE_VARIABLE_C_20)
#line 313 "bimap.m"
{
#line 677 "bimap.m"
  {
#line 677 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 677 "bimap.m"
    MR_Word mercury__bimap__Forward_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 0)));
#line 677 "bimap.m"
    MR_Word mercury__bimap__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 1)));

#line 201 "map.opt"
    {
#line 201 "map.opt"
      return mercury__bimap__succeeded = mercury__tree234__foldl3_8_p_5(mercury__bimap__TypeInfo_for_K_24, mercury__bimap__TypeInfo_for_V_25, mercury__bimap__TypeInfo_for_A_26, mercury__bimap__TypeInfo_for_B_27, mercury__bimap__TypeInfo_for_C_28, mercury__bimap__Pred_9, mercury__bimap__Forward_10, mercury__bimap__STATE_VARIABLE_A_0_15, mercury__bimap__STATE_VARIABLE_A_16, mercury__bimap__STATE_VARIABLE_B_0_17, mercury__bimap__STATE_VARIABLE_B_18, mercury__bimap__STATE_VARIABLE_C_0_19, mercury__bimap__STATE_VARIABLE_C_20);
    }
#line 677 "bimap.m"
    return mercury__bimap__succeeded;
#line 677 "bimap.m"
  }
#line 313 "bimap.m"
}

#line 311 "bimap.m"
void MR_CALL 
mercury__bimap__foldl3_8_p_4(
#line 311 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_24,
#line 311 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_25,
#line 311 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_A_26,
#line 311 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_B_27,
#line 311 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_C_28,
#line 311 "bimap.m"
  MR_Word mercury__bimap__Pred_9,
#line 311 "bimap.m"
  MR_Word mercury__bimap__HeadVar__2_2,
#line 311 "bimap.m"
  MR_Box mercury__bimap__STATE_VARIABLE_A_0_15,
#line 311 "bimap.m"
  MR_Box * mercury__bimap__STATE_VARIABLE_A_16,
#line 311 "bimap.m"
  MR_Box mercury__bimap__STATE_VARIABLE_B_0_17,
#line 311 "bimap.m"
  MR_Box * mercury__bimap__STATE_VARIABLE_B_18,
#line 311 "bimap.m"
  MR_Box mercury__bimap__STATE_VARIABLE_C_0_19,
#line 311 "bimap.m"
  MR_Box * mercury__bimap__STATE_VARIABLE_C_20)
#line 311 "bimap.m"
{
#line 677 "bimap.m"
  {
#line 677 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 677 "bimap.m"
    MR_Word mercury__bimap__Forward_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 0)));
#line 677 "bimap.m"
    MR_Word mercury__bimap__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 1)));

#line 201 "map.opt"
    {
#line 201 "map.opt"
      mercury__tree234__foldl3_8_p_4(mercury__bimap__TypeInfo_for_K_24, mercury__bimap__TypeInfo_for_V_25, mercury__bimap__TypeInfo_for_A_26, mercury__bimap__TypeInfo_for_B_27, mercury__bimap__TypeInfo_for_C_28, mercury__bimap__Pred_9, mercury__bimap__Forward_10, mercury__bimap__STATE_VARIABLE_A_0_15, mercury__bimap__STATE_VARIABLE_A_16, mercury__bimap__STATE_VARIABLE_B_0_17, mercury__bimap__STATE_VARIABLE_B_18, mercury__bimap__STATE_VARIABLE_C_0_19, mercury__bimap__STATE_VARIABLE_C_20);
#line 201 "map.opt"
      return;
    }
#line 677 "bimap.m"
  }
#line 311 "bimap.m"
}

#line 309 "bimap.m"
void MR_CALL 
mercury__bimap__foldl3_8_p_3(
#line 309 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_24,
#line 309 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_25,
#line 309 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_A_26,
#line 309 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_B_27,
#line 309 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_C_28,
#line 309 "bimap.m"
  MR_Word mercury__bimap__Pred_9,
#line 309 "bimap.m"
  MR_Word mercury__bimap__HeadVar__2_2,
#line 309 "bimap.m"
  MR_Box mercury__bimap__STATE_VARIABLE_A_0_15,
#line 309 "bimap.m"
  MR_Box * mercury__bimap__STATE_VARIABLE_A_16,
#line 309 "bimap.m"
  MR_Box mercury__bimap__STATE_VARIABLE_B_0_17,
#line 309 "bimap.m"
  MR_Box * mercury__bimap__STATE_VARIABLE_B_18,
#line 309 "bimap.m"
  MR_Box mercury__bimap__STATE_VARIABLE_C_0_19,
#line 309 "bimap.m"
  MR_Box * mercury__bimap__STATE_VARIABLE_C_20)
#line 309 "bimap.m"
{
#line 677 "bimap.m"
  {
#line 677 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 677 "bimap.m"
    MR_Word mercury__bimap__Forward_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 0)));
#line 677 "bimap.m"
    MR_Word mercury__bimap__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 1)));

#line 201 "map.opt"
    {
#line 201 "map.opt"
      mercury__tree234__foldl3_8_p_3(mercury__bimap__TypeInfo_for_K_24, mercury__bimap__TypeInfo_for_V_25, mercury__bimap__TypeInfo_for_A_26, mercury__bimap__TypeInfo_for_B_27, mercury__bimap__TypeInfo_for_C_28, mercury__bimap__Pred_9, mercury__bimap__Forward_10, mercury__bimap__STATE_VARIABLE_A_0_15, mercury__bimap__STATE_VARIABLE_A_16, mercury__bimap__STATE_VARIABLE_B_0_17, mercury__bimap__STATE_VARIABLE_B_18, mercury__bimap__STATE_VARIABLE_C_0_19, mercury__bimap__STATE_VARIABLE_C_20);
#line 201 "map.opt"
      return;
    }
#line 677 "bimap.m"
  }
#line 309 "bimap.m"
}

#line 307 "bimap.m"
void MR_CALL 
mercury__bimap__foldl3_8_p_2(
#line 307 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_24,
#line 307 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_25,
#line 307 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_A_26,
#line 307 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_B_27,
#line 307 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_C_28,
#line 307 "bimap.m"
  MR_Word mercury__bimap__Pred_9,
#line 307 "bimap.m"
  MR_Word mercury__bimap__HeadVar__2_2,
#line 307 "bimap.m"
  MR_Box mercury__bimap__STATE_VARIABLE_A_0_15,
#line 307 "bimap.m"
  MR_Box * mercury__bimap__STATE_VARIABLE_A_16,
#line 307 "bimap.m"
  MR_Box mercury__bimap__STATE_VARIABLE_B_0_17,
#line 307 "bimap.m"
  MR_Box * mercury__bimap__STATE_VARIABLE_B_18,
#line 307 "bimap.m"
  MR_Box mercury__bimap__STATE_VARIABLE_C_0_19,
#line 307 "bimap.m"
  MR_Box * mercury__bimap__STATE_VARIABLE_C_20)
#line 307 "bimap.m"
{
#line 677 "bimap.m"
  {
#line 677 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 677 "bimap.m"
    MR_Word mercury__bimap__Forward_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 0)));
#line 677 "bimap.m"
    MR_Word mercury__bimap__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 1)));

#line 201 "map.opt"
    {
#line 201 "map.opt"
      mercury__tree234__foldl3_8_p_2(mercury__bimap__TypeInfo_for_K_24, mercury__bimap__TypeInfo_for_V_25, mercury__bimap__TypeInfo_for_A_26, mercury__bimap__TypeInfo_for_B_27, mercury__bimap__TypeInfo_for_C_28, mercury__bimap__Pred_9, mercury__bimap__Forward_10, mercury__bimap__STATE_VARIABLE_A_0_15, mercury__bimap__STATE_VARIABLE_A_16, mercury__bimap__STATE_VARIABLE_B_0_17, mercury__bimap__STATE_VARIABLE_B_18, mercury__bimap__STATE_VARIABLE_C_0_19, mercury__bimap__STATE_VARIABLE_C_20);
#line 201 "map.opt"
      return;
    }
#line 677 "bimap.m"
  }
#line 307 "bimap.m"
}

#line 305 "bimap.m"
void MR_CALL 
mercury__bimap__foldl3_8_p_1(
#line 305 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_24,
#line 305 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_25,
#line 305 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_A_26,
#line 305 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_B_27,
#line 305 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_C_28,
#line 305 "bimap.m"
  MR_Word mercury__bimap__Pred_9,
#line 305 "bimap.m"
  MR_Word mercury__bimap__HeadVar__2_2,
#line 305 "bimap.m"
  MR_Box mercury__bimap__STATE_VARIABLE_A_0_15,
#line 305 "bimap.m"
  MR_Box * mercury__bimap__STATE_VARIABLE_A_16,
#line 305 "bimap.m"
  MR_Box mercury__bimap__STATE_VARIABLE_B_0_17,
#line 305 "bimap.m"
  MR_Box * mercury__bimap__STATE_VARIABLE_B_18,
#line 305 "bimap.m"
  MR_Box mercury__bimap__STATE_VARIABLE_C_0_19,
#line 305 "bimap.m"
  MR_Box * mercury__bimap__STATE_VARIABLE_C_20)
#line 305 "bimap.m"
{
#line 677 "bimap.m"
  {
#line 677 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 677 "bimap.m"
    MR_Word mercury__bimap__Forward_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 0)));
#line 677 "bimap.m"
    MR_Word mercury__bimap__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 1)));

#line 201 "map.opt"
    {
#line 201 "map.opt"
      mercury__tree234__foldl3_8_p_1(mercury__bimap__TypeInfo_for_K_24, mercury__bimap__TypeInfo_for_V_25, mercury__bimap__TypeInfo_for_A_26, mercury__bimap__TypeInfo_for_B_27, mercury__bimap__TypeInfo_for_C_28, mercury__bimap__Pred_9, mercury__bimap__Forward_10, mercury__bimap__STATE_VARIABLE_A_0_15, mercury__bimap__STATE_VARIABLE_A_16, mercury__bimap__STATE_VARIABLE_B_0_17, mercury__bimap__STATE_VARIABLE_B_18, mercury__bimap__STATE_VARIABLE_C_0_19, mercury__bimap__STATE_VARIABLE_C_20);
#line 201 "map.opt"
      return;
    }
#line 677 "bimap.m"
  }
#line 305 "bimap.m"
}

#line 303 "bimap.m"
void MR_CALL 
mercury__bimap__foldl3_8_p_0(
#line 303 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_24,
#line 303 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_25,
#line 303 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_A_26,
#line 303 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_B_27,
#line 303 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_C_28,
#line 303 "bimap.m"
  MR_Word mercury__bimap__Pred_9,
#line 303 "bimap.m"
  MR_Word mercury__bimap__HeadVar__2_2,
#line 303 "bimap.m"
  MR_Box mercury__bimap__STATE_VARIABLE_A_0_15,
#line 303 "bimap.m"
  MR_Box * mercury__bimap__STATE_VARIABLE_A_16,
#line 303 "bimap.m"
  MR_Box mercury__bimap__STATE_VARIABLE_B_0_17,
#line 303 "bimap.m"
  MR_Box * mercury__bimap__STATE_VARIABLE_B_18,
#line 303 "bimap.m"
  MR_Box mercury__bimap__STATE_VARIABLE_C_0_19,
#line 303 "bimap.m"
  MR_Box * mercury__bimap__STATE_VARIABLE_C_20)
#line 303 "bimap.m"
{
#line 677 "bimap.m"
  {
#line 677 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 677 "bimap.m"
    MR_Word mercury__bimap__Forward_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 0)));
#line 677 "bimap.m"
    MR_Word mercury__bimap__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 1)));

#line 201 "map.opt"
    {
#line 201 "map.opt"
      mercury__tree234__foldl3_8_p_0(mercury__bimap__TypeInfo_for_K_24, mercury__bimap__TypeInfo_for_V_25, mercury__bimap__TypeInfo_for_A_26, mercury__bimap__TypeInfo_for_B_27, mercury__bimap__TypeInfo_for_C_28, mercury__bimap__Pred_9, mercury__bimap__Forward_10, mercury__bimap__STATE_VARIABLE_A_0_15, mercury__bimap__STATE_VARIABLE_A_16, mercury__bimap__STATE_VARIABLE_B_0_17, mercury__bimap__STATE_VARIABLE_B_18, mercury__bimap__STATE_VARIABLE_C_0_19, mercury__bimap__STATE_VARIABLE_C_20);
#line 201 "map.opt"
      return;
    }
#line 677 "bimap.m"
  }
#line 303 "bimap.m"
}

#line 293 "bimap.m"
MR_bool MR_CALL 
mercury__bimap__foldl2_6_p_6(
#line 293 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_18,
#line 293 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_19,
#line 293 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_A_20,
#line 293 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_B_21,
#line 293 "bimap.m"
  MR_Word mercury__bimap__Pred_7,
#line 293 "bimap.m"
  MR_Word mercury__bimap__HeadVar__2_2,
#line 293 "bimap.m"
  MR_Box mercury__bimap__STATE_VARIABLE_A_0_12,
#line 293 "bimap.m"
  MR_Box * mercury__bimap__STATE_VARIABLE_A_13,
#line 293 "bimap.m"
  MR_Box mercury__bimap__STATE_VARIABLE_B_0_14,
#line 293 "bimap.m"
  MR_Box * mercury__bimap__STATE_VARIABLE_B_15)
#line 293 "bimap.m"
{
#line 674 "bimap.m"
  {
#line 674 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 674 "bimap.m"
    MR_Word mercury__bimap__Forward_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 0)));
#line 674 "bimap.m"
    MR_Word mercury__bimap__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 1)));

#line 199 "map.opt"
    {
#line 199 "map.opt"
      return mercury__bimap__succeeded = mercury__tree234__foldl2_6_p_6(mercury__bimap__TypeInfo_for_K_18, mercury__bimap__TypeInfo_for_V_19, mercury__bimap__TypeInfo_for_A_20, mercury__bimap__TypeInfo_for_B_21, mercury__bimap__Pred_7, mercury__bimap__Forward_8, mercury__bimap__STATE_VARIABLE_A_0_12, mercury__bimap__STATE_VARIABLE_A_13, mercury__bimap__STATE_VARIABLE_B_0_14, mercury__bimap__STATE_VARIABLE_B_15);
    }
#line 674 "bimap.m"
    return mercury__bimap__succeeded;
#line 674 "bimap.m"
  }
#line 293 "bimap.m"
}

#line 291 "bimap.m"
MR_bool MR_CALL 
mercury__bimap__foldl2_6_p_5(
#line 291 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_18,
#line 291 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_19,
#line 291 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_A_20,
#line 291 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_B_21,
#line 291 "bimap.m"
  MR_Word mercury__bimap__Pred_7,
#line 291 "bimap.m"
  MR_Word mercury__bimap__HeadVar__2_2,
#line 291 "bimap.m"
  MR_Box mercury__bimap__STATE_VARIABLE_A_0_12,
#line 291 "bimap.m"
  MR_Box * mercury__bimap__STATE_VARIABLE_A_13,
#line 291 "bimap.m"
  MR_Box mercury__bimap__STATE_VARIABLE_B_0_14,
#line 291 "bimap.m"
  MR_Box * mercury__bimap__STATE_VARIABLE_B_15)
#line 291 "bimap.m"
{
#line 674 "bimap.m"
  {
#line 674 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 674 "bimap.m"
    MR_Word mercury__bimap__Forward_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 0)));
#line 674 "bimap.m"
    MR_Word mercury__bimap__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 1)));

#line 199 "map.opt"
    {
#line 199 "map.opt"
      return mercury__bimap__succeeded = mercury__tree234__foldl2_6_p_5(mercury__bimap__TypeInfo_for_K_18, mercury__bimap__TypeInfo_for_V_19, mercury__bimap__TypeInfo_for_A_20, mercury__bimap__TypeInfo_for_B_21, mercury__bimap__Pred_7, mercury__bimap__Forward_8, mercury__bimap__STATE_VARIABLE_A_0_12, mercury__bimap__STATE_VARIABLE_A_13, mercury__bimap__STATE_VARIABLE_B_0_14, mercury__bimap__STATE_VARIABLE_B_15);
    }
#line 674 "bimap.m"
    return mercury__bimap__succeeded;
#line 674 "bimap.m"
  }
#line 291 "bimap.m"
}

#line 289 "bimap.m"
MR_bool MR_CALL 
mercury__bimap__foldl2_6_p_4(
#line 289 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_18,
#line 289 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_19,
#line 289 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_A_20,
#line 289 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_B_21,
#line 289 "bimap.m"
  MR_Word mercury__bimap__Pred_7,
#line 289 "bimap.m"
  MR_Word mercury__bimap__HeadVar__2_2,
#line 289 "bimap.m"
  MR_Box mercury__bimap__STATE_VARIABLE_A_0_12,
#line 289 "bimap.m"
  MR_Box * mercury__bimap__STATE_VARIABLE_A_13,
#line 289 "bimap.m"
  MR_Box mercury__bimap__STATE_VARIABLE_B_0_14,
#line 289 "bimap.m"
  MR_Box * mercury__bimap__STATE_VARIABLE_B_15)
#line 289 "bimap.m"
{
#line 674 "bimap.m"
  {
#line 674 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 674 "bimap.m"
    MR_Word mercury__bimap__Forward_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 0)));
#line 674 "bimap.m"
    MR_Word mercury__bimap__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 1)));

#line 199 "map.opt"
    {
#line 199 "map.opt"
      return mercury__bimap__succeeded = mercury__tree234__foldl2_6_p_4(mercury__bimap__TypeInfo_for_K_18, mercury__bimap__TypeInfo_for_V_19, mercury__bimap__TypeInfo_for_A_20, mercury__bimap__TypeInfo_for_B_21, mercury__bimap__Pred_7, mercury__bimap__Forward_8, mercury__bimap__STATE_VARIABLE_A_0_12, mercury__bimap__STATE_VARIABLE_A_13, mercury__bimap__STATE_VARIABLE_B_0_14, mercury__bimap__STATE_VARIABLE_B_15);
    }
#line 674 "bimap.m"
    return mercury__bimap__succeeded;
#line 674 "bimap.m"
  }
#line 289 "bimap.m"
}

#line 287 "bimap.m"
void MR_CALL 
mercury__bimap__foldl2_6_p_3(
#line 287 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_18,
#line 287 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_19,
#line 287 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_A_20,
#line 287 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_B_21,
#line 287 "bimap.m"
  MR_Word mercury__bimap__Pred_7,
#line 287 "bimap.m"
  MR_Word mercury__bimap__HeadVar__2_2,
#line 287 "bimap.m"
  MR_Box mercury__bimap__STATE_VARIABLE_A_0_12,
#line 287 "bimap.m"
  MR_Box * mercury__bimap__STATE_VARIABLE_A_13,
#line 287 "bimap.m"
  MR_Box mercury__bimap__STATE_VARIABLE_B_0_14,
#line 287 "bimap.m"
  MR_Box * mercury__bimap__STATE_VARIABLE_B_15)
#line 287 "bimap.m"
{
#line 674 "bimap.m"
  {
#line 674 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 674 "bimap.m"
    MR_Word mercury__bimap__Forward_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 0)));
#line 674 "bimap.m"
    MR_Word mercury__bimap__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 1)));

#line 199 "map.opt"
    {
#line 199 "map.opt"
      mercury__tree234__foldl2_6_p_3(mercury__bimap__TypeInfo_for_K_18, mercury__bimap__TypeInfo_for_V_19, mercury__bimap__TypeInfo_for_A_20, mercury__bimap__TypeInfo_for_B_21, mercury__bimap__Pred_7, mercury__bimap__Forward_8, mercury__bimap__STATE_VARIABLE_A_0_12, mercury__bimap__STATE_VARIABLE_A_13, mercury__bimap__STATE_VARIABLE_B_0_14, mercury__bimap__STATE_VARIABLE_B_15);
#line 199 "map.opt"
      return;
    }
#line 674 "bimap.m"
  }
#line 287 "bimap.m"
}

#line 285 "bimap.m"
void MR_CALL 
mercury__bimap__foldl2_6_p_2(
#line 285 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_18,
#line 285 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_19,
#line 285 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_A_20,
#line 285 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_B_21,
#line 285 "bimap.m"
  MR_Word mercury__bimap__Pred_7,
#line 285 "bimap.m"
  MR_Word mercury__bimap__HeadVar__2_2,
#line 285 "bimap.m"
  MR_Box mercury__bimap__STATE_VARIABLE_A_0_12,
#line 285 "bimap.m"
  MR_Box * mercury__bimap__STATE_VARIABLE_A_13,
#line 285 "bimap.m"
  MR_Box mercury__bimap__STATE_VARIABLE_B_0_14,
#line 285 "bimap.m"
  MR_Box * mercury__bimap__STATE_VARIABLE_B_15)
#line 285 "bimap.m"
{
#line 674 "bimap.m"
  {
#line 674 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 674 "bimap.m"
    MR_Word mercury__bimap__Forward_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 0)));
#line 674 "bimap.m"
    MR_Word mercury__bimap__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 1)));

#line 199 "map.opt"
    {
#line 199 "map.opt"
      mercury__tree234__foldl2_6_p_2(mercury__bimap__TypeInfo_for_K_18, mercury__bimap__TypeInfo_for_V_19, mercury__bimap__TypeInfo_for_A_20, mercury__bimap__TypeInfo_for_B_21, mercury__bimap__Pred_7, mercury__bimap__Forward_8, mercury__bimap__STATE_VARIABLE_A_0_12, mercury__bimap__STATE_VARIABLE_A_13, mercury__bimap__STATE_VARIABLE_B_0_14, mercury__bimap__STATE_VARIABLE_B_15);
#line 199 "map.opt"
      return;
    }
#line 674 "bimap.m"
  }
#line 285 "bimap.m"
}

#line 283 "bimap.m"
void MR_CALL 
mercury__bimap__foldl2_6_p_1(
#line 283 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_18,
#line 283 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_19,
#line 283 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_A_20,
#line 283 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_B_21,
#line 283 "bimap.m"
  MR_Word mercury__bimap__Pred_7,
#line 283 "bimap.m"
  MR_Word mercury__bimap__HeadVar__2_2,
#line 283 "bimap.m"
  MR_Box mercury__bimap__STATE_VARIABLE_A_0_12,
#line 283 "bimap.m"
  MR_Box * mercury__bimap__STATE_VARIABLE_A_13,
#line 283 "bimap.m"
  MR_Box mercury__bimap__STATE_VARIABLE_B_0_14,
#line 283 "bimap.m"
  MR_Box * mercury__bimap__STATE_VARIABLE_B_15)
#line 283 "bimap.m"
{
#line 674 "bimap.m"
  {
#line 674 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 674 "bimap.m"
    MR_Word mercury__bimap__Forward_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 0)));
#line 674 "bimap.m"
    MR_Word mercury__bimap__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 1)));

#line 199 "map.opt"
    {
#line 199 "map.opt"
      mercury__tree234__foldl2_6_p_1(mercury__bimap__TypeInfo_for_K_18, mercury__bimap__TypeInfo_for_V_19, mercury__bimap__TypeInfo_for_A_20, mercury__bimap__TypeInfo_for_B_21, mercury__bimap__Pred_7, mercury__bimap__Forward_8, mercury__bimap__STATE_VARIABLE_A_0_12, mercury__bimap__STATE_VARIABLE_A_13, mercury__bimap__STATE_VARIABLE_B_0_14, mercury__bimap__STATE_VARIABLE_B_15);
#line 199 "map.opt"
      return;
    }
#line 674 "bimap.m"
  }
#line 283 "bimap.m"
}

#line 281 "bimap.m"
void MR_CALL 
mercury__bimap__foldl2_6_p_0(
#line 281 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_18,
#line 281 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_19,
#line 281 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_A_20,
#line 281 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_B_21,
#line 281 "bimap.m"
  MR_Word mercury__bimap__Pred_7,
#line 281 "bimap.m"
  MR_Word mercury__bimap__HeadVar__2_2,
#line 281 "bimap.m"
  MR_Box mercury__bimap__STATE_VARIABLE_A_0_12,
#line 281 "bimap.m"
  MR_Box * mercury__bimap__STATE_VARIABLE_A_13,
#line 281 "bimap.m"
  MR_Box mercury__bimap__STATE_VARIABLE_B_0_14,
#line 281 "bimap.m"
  MR_Box * mercury__bimap__STATE_VARIABLE_B_15)
#line 281 "bimap.m"
{
#line 674 "bimap.m"
  {
#line 674 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 674 "bimap.m"
    MR_Word mercury__bimap__Forward_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 0)));
#line 674 "bimap.m"
    MR_Word mercury__bimap__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 1)));

#line 199 "map.opt"
    {
#line 199 "map.opt"
      mercury__tree234__foldl2_6_p_0(mercury__bimap__TypeInfo_for_K_18, mercury__bimap__TypeInfo_for_V_19, mercury__bimap__TypeInfo_for_A_20, mercury__bimap__TypeInfo_for_B_21, mercury__bimap__Pred_7, mercury__bimap__Forward_8, mercury__bimap__STATE_VARIABLE_A_0_12, mercury__bimap__STATE_VARIABLE_A_13, mercury__bimap__STATE_VARIABLE_B_0_14, mercury__bimap__STATE_VARIABLE_B_15);
#line 199 "map.opt"
      return;
    }
#line 674 "bimap.m"
  }
#line 281 "bimap.m"
}

#line 273 "bimap.m"
MR_bool MR_CALL 
mercury__bimap__foldl_4_p_5(
#line 273 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_12,
#line 273 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_13,
#line 273 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_A_14,
#line 273 "bimap.m"
  MR_Word mercury__bimap__Pred_5,
#line 273 "bimap.m"
  MR_Word mercury__bimap__HeadVar__2_2,
#line 273 "bimap.m"
  MR_Box mercury__bimap__STATE_VARIABLE_List_0_9,
#line 273 "bimap.m"
  MR_Box * mercury__bimap__STATE_VARIABLE_List_10)
#line 273 "bimap.m"
{
#line 671 "bimap.m"
  {
#line 671 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 671 "bimap.m"
    MR_Word mercury__bimap__Forward_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 0)));
#line 671 "bimap.m"
    MR_Word mercury__bimap__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 1)));

#line 197 "map.opt"
    {
#line 197 "map.opt"
      return mercury__bimap__succeeded = mercury__tree234__foldl_4_p_5(mercury__bimap__TypeInfo_for_K_12, mercury__bimap__TypeInfo_for_V_13, mercury__bimap__TypeInfo_for_A_14, mercury__bimap__Pred_5, mercury__bimap__Forward_6, mercury__bimap__STATE_VARIABLE_List_0_9, mercury__bimap__STATE_VARIABLE_List_10);
    }
#line 671 "bimap.m"
    return mercury__bimap__succeeded;
#line 671 "bimap.m"
  }
#line 273 "bimap.m"
}

#line 272 "bimap.m"
MR_bool MR_CALL 
mercury__bimap__foldl_4_p_4(
#line 272 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_12,
#line 272 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_13,
#line 272 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_A_14,
#line 272 "bimap.m"
  MR_Word mercury__bimap__Pred_5,
#line 272 "bimap.m"
  MR_Word mercury__bimap__HeadVar__2_2,
#line 272 "bimap.m"
  MR_Box mercury__bimap__STATE_VARIABLE_List_0_9,
#line 272 "bimap.m"
  MR_Box * mercury__bimap__STATE_VARIABLE_List_10)
#line 272 "bimap.m"
{
#line 671 "bimap.m"
  {
#line 671 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 671 "bimap.m"
    MR_Word mercury__bimap__Forward_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 0)));
#line 671 "bimap.m"
    MR_Word mercury__bimap__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 1)));

#line 197 "map.opt"
    {
#line 197 "map.opt"
      return mercury__bimap__succeeded = mercury__tree234__foldl_4_p_4(mercury__bimap__TypeInfo_for_K_12, mercury__bimap__TypeInfo_for_V_13, mercury__bimap__TypeInfo_for_A_14, mercury__bimap__Pred_5, mercury__bimap__Forward_6, mercury__bimap__STATE_VARIABLE_List_0_9, mercury__bimap__STATE_VARIABLE_List_10);
    }
#line 671 "bimap.m"
    return mercury__bimap__succeeded;
#line 671 "bimap.m"
  }
#line 272 "bimap.m"
}

#line 271 "bimap.m"
MR_bool MR_CALL 
mercury__bimap__foldl_4_p_3(
#line 271 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_12,
#line 271 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_13,
#line 271 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_A_14,
#line 271 "bimap.m"
  MR_Word mercury__bimap__Pred_5,
#line 271 "bimap.m"
  MR_Word mercury__bimap__HeadVar__2_2,
#line 271 "bimap.m"
  MR_Box mercury__bimap__STATE_VARIABLE_List_0_9,
#line 271 "bimap.m"
  MR_Box * mercury__bimap__STATE_VARIABLE_List_10)
#line 271 "bimap.m"
{
#line 671 "bimap.m"
  {
#line 671 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 671 "bimap.m"
    MR_Word mercury__bimap__Forward_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 0)));
#line 671 "bimap.m"
    MR_Word mercury__bimap__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 1)));

#line 197 "map.opt"
    {
#line 197 "map.opt"
      return mercury__bimap__succeeded = mercury__tree234__foldl_4_p_3(mercury__bimap__TypeInfo_for_K_12, mercury__bimap__TypeInfo_for_V_13, mercury__bimap__TypeInfo_for_A_14, mercury__bimap__Pred_5, mercury__bimap__Forward_6, mercury__bimap__STATE_VARIABLE_List_0_9, mercury__bimap__STATE_VARIABLE_List_10);
    }
#line 671 "bimap.m"
    return mercury__bimap__succeeded;
#line 671 "bimap.m"
  }
#line 271 "bimap.m"
}

#line 270 "bimap.m"
void MR_CALL 
mercury__bimap__foldl_4_p_2(
#line 270 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_12,
#line 270 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_13,
#line 270 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_A_14,
#line 270 "bimap.m"
  MR_Word mercury__bimap__Pred_5,
#line 270 "bimap.m"
  MR_Word mercury__bimap__HeadVar__2_2,
#line 270 "bimap.m"
  MR_Box mercury__bimap__STATE_VARIABLE_List_0_9,
#line 270 "bimap.m"
  MR_Box * mercury__bimap__STATE_VARIABLE_List_10)
#line 270 "bimap.m"
{
#line 671 "bimap.m"
  {
#line 671 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 671 "bimap.m"
    MR_Word mercury__bimap__Forward_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 0)));
#line 671 "bimap.m"
    MR_Word mercury__bimap__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 1)));

#line 197 "map.opt"
    {
#line 197 "map.opt"
      mercury__tree234__foldl_4_p_2(mercury__bimap__TypeInfo_for_K_12, mercury__bimap__TypeInfo_for_V_13, mercury__bimap__TypeInfo_for_A_14, mercury__bimap__Pred_5, mercury__bimap__Forward_6, mercury__bimap__STATE_VARIABLE_List_0_9, mercury__bimap__STATE_VARIABLE_List_10);
#line 197 "map.opt"
      return;
    }
#line 671 "bimap.m"
  }
#line 270 "bimap.m"
}

#line 269 "bimap.m"
void MR_CALL 
mercury__bimap__foldl_4_p_1(
#line 269 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_12,
#line 269 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_13,
#line 269 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_A_14,
#line 269 "bimap.m"
  MR_Word mercury__bimap__Pred_5,
#line 269 "bimap.m"
  MR_Word mercury__bimap__HeadVar__2_2,
#line 269 "bimap.m"
  MR_Box mercury__bimap__STATE_VARIABLE_List_0_9,
#line 269 "bimap.m"
  MR_Box * mercury__bimap__STATE_VARIABLE_List_10)
#line 269 "bimap.m"
{
#line 671 "bimap.m"
  {
#line 671 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 671 "bimap.m"
    MR_Word mercury__bimap__Forward_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 0)));
#line 671 "bimap.m"
    MR_Word mercury__bimap__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 1)));

#line 197 "map.opt"
    {
#line 197 "map.opt"
      mercury__tree234__foldl_4_p_1(mercury__bimap__TypeInfo_for_K_12, mercury__bimap__TypeInfo_for_V_13, mercury__bimap__TypeInfo_for_A_14, mercury__bimap__Pred_5, mercury__bimap__Forward_6, mercury__bimap__STATE_VARIABLE_List_0_9, mercury__bimap__STATE_VARIABLE_List_10);
#line 197 "map.opt"
      return;
    }
#line 671 "bimap.m"
  }
#line 269 "bimap.m"
}

#line 268 "bimap.m"
void MR_CALL 
mercury__bimap__foldl_4_p_0(
#line 268 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_12,
#line 268 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_13,
#line 268 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_A_14,
#line 268 "bimap.m"
  MR_Word mercury__bimap__Pred_5,
#line 268 "bimap.m"
  MR_Word mercury__bimap__HeadVar__2_2,
#line 268 "bimap.m"
  MR_Box mercury__bimap__STATE_VARIABLE_List_0_9,
#line 268 "bimap.m"
  MR_Box * mercury__bimap__STATE_VARIABLE_List_10)
#line 268 "bimap.m"
{
#line 671 "bimap.m"
  {
#line 671 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 671 "bimap.m"
    MR_Word mercury__bimap__Forward_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 0)));
#line 671 "bimap.m"
    MR_Word mercury__bimap__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 1)));

#line 197 "map.opt"
    {
#line 197 "map.opt"
      mercury__tree234__foldl_4_p_0(mercury__bimap__TypeInfo_for_K_12, mercury__bimap__TypeInfo_for_V_13, mercury__bimap__TypeInfo_for_A_14, mercury__bimap__Pred_5, mercury__bimap__Forward_6, mercury__bimap__STATE_VARIABLE_List_0_9, mercury__bimap__STATE_VARIABLE_List_10);
#line 197 "map.opt"
      return;
    }
#line 671 "bimap.m"
  }
#line 268 "bimap.m"
}

#line 266 "bimap.m"
MR_Box MR_CALL 
mercury__bimap__foldl_3_f_0(
#line 266 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_9,
#line 266 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_10,
#line 266 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_A_11,
#line 266 "bimap.m"
  MR_Word mercury__bimap__Func_5,
#line 266 "bimap.m"
  MR_Word mercury__bimap__HeadVar__2_2,
#line 266 "bimap.m"
  MR_Box mercury__bimap__List0_8)
#line 266 "bimap.m"
{
#line 668 "bimap.m"
  {
#line 668 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 668 "bimap.m"
    MR_Box mercury__bimap__HeadVar__4_4;
#line 668 "bimap.m"
    MR_Word mercury__bimap__Forward_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 0)));
#line 668 "bimap.m"
    MR_Word mercury__bimap__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__2_2, (MR_Integer) 1)));

#line 197 "map.opt"
    {
#line 197 "map.opt"
      mercury__bimap__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_55_95_95_91_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__tree234_0(mercury__bimap__TypeInfo_for_K_9, mercury__bimap__TypeInfo_for_V_10, mercury__bimap__TypeInfo_for_A_11, mercury__bimap__Func_5, mercury__bimap__Forward_6, mercury__bimap__List0_8, &mercury__bimap__HeadVar__4_4);
    }
#line 668 "bimap.m"
    return mercury__bimap__HeadVar__4_4;
#line 668 "bimap.m"
  }
#line 266 "bimap.m"
}

#line 260 "bimap.m"
void MR_CALL 
mercury__bimap__map_values_3_p_0(
#line 260 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_10,
#line 260 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_11,
#line 260 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_W_12,
#line 260 "bimap.m"
  MR_Word mercury__bimap__ValueMap_4,
#line 260 "bimap.m"
  MR_Word mercury__bimap__BM0_5,
#line 260 "bimap.m"
  MR_Word * mercury__bimap__BM_6)
#line 260 "bimap.m"
{
#line 620 "bimap.m"
  {
#line 620 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 620 "bimap.m"
    MR_Word mercury__bimap__L0_7;
#line 620 "bimap.m"
    MR_Word mercury__bimap__L_8;
#line 620 "bimap.m"
    MR_Word mercury__bimap__V_9_9;
#line 620 "bimap.m"
    MR_Word mercury__bimap__Forward_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__BM0_5, (MR_Integer) 0)));
#line 620 "bimap.m"
    MR_Word mercury__bimap__V_5_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 620 "bimap.m"
    MR_Word mercury__bimap__V_25_25;
#line 620 "bimap.m"
    MR_Word mercury__bimap__Forward_28;
#line 620 "bimap.m"
    MR_Word mercury__bimap__Reverse_29;
#line 569 "bimap.m"
    MR_Word mercury__bimap__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__BM0_5, (MR_Integer) 1)));

#line 85 "tree234.opt"
    {
#line 85 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__bimap__TypeInfo_for_K_10, mercury__bimap__TypeInfo_for_V_11, mercury__bimap__Forward_14, mercury__bimap__V_5_20, &mercury__bimap__L0_7);
    }
#line 622 "bimap.m"
    mercury__bimap__V_9_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 622 "bimap.m"
    {
#line 622 "bimap.m"
      mercury__bimap__map_values_2_4_p_0(mercury__bimap__TypeInfo_for_K_10, mercury__bimap__TypeInfo_for_V_11, mercury__bimap__TypeInfo_for_W_12, mercury__bimap__ValueMap_4, mercury__bimap__L0_7, mercury__bimap__V_9_9, &mercury__bimap__L_8);
    }
#line 47 "tree234.opt"
    mercury__bimap__Forward_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 47 "tree234.opt"
    mercury__bimap__Reverse_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 347 "bimap.m"
    mercury__bimap__V_25_25 = (MR_Word) &mercury__bimap_scalar_common_4[2];
#line 582 "bimap.m"
    {
#line 582 "bimap.m"
      mercury__bimap__det_insert_from_assoc_list_3_p_0(mercury__bimap__TypeInfo_for_K_10, mercury__bimap__TypeInfo_for_W_12, mercury__bimap__L_8, mercury__bimap__V_25_25, mercury__bimap__BM_6);
#line 582 "bimap.m"
      return;
    }
#line 620 "bimap.m"
  }
#line 260 "bimap.m"
}

#line 259 "bimap.m"
MR_Word MR_CALL 
mercury__bimap__map_values_2_f_0(
#line 259 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_10,
#line 259 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_11,
#line 259 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_W_12,
#line 259 "bimap.m"
  MR_Word mercury__bimap__ValueMap_4,
#line 259 "bimap.m"
  MR_Word mercury__bimap__BM0_5)
#line 259 "bimap.m"
{
#line 625 "bimap.m"
  {
#line 625 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 625 "bimap.m"
    MR_Word mercury__bimap__BM_6;
#line 625 "bimap.m"
    MR_Word mercury__bimap__L0_7;
#line 625 "bimap.m"
    MR_Word mercury__bimap__L_8;
#line 625 "bimap.m"
    MR_Word mercury__bimap__V_9_9;
#line 625 "bimap.m"
    MR_Word mercury__bimap__Forward_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__BM0_5, (MR_Integer) 0)));
#line 625 "bimap.m"
    MR_Word mercury__bimap__V_5_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 625 "bimap.m"
    MR_Word mercury__bimap__V_25_25;
#line 625 "bimap.m"
    MR_Word mercury__bimap__Forward_28;
#line 625 "bimap.m"
    MR_Word mercury__bimap__Reverse_29;
#line 569 "bimap.m"
    MR_Word mercury__bimap__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__BM0_5, (MR_Integer) 1)));

#line 85 "tree234.opt"
    {
#line 85 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__bimap__TypeInfo_for_K_10, mercury__bimap__TypeInfo_for_V_11, mercury__bimap__Forward_14, mercury__bimap__V_5_20, &mercury__bimap__L0_7);
    }
#line 627 "bimap.m"
    mercury__bimap__V_9_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 627 "bimap.m"
    {
#line 627 "bimap.m"
      mercury__bimap__map_values_func_2_4_p_0(mercury__bimap__TypeInfo_for_K_10, mercury__bimap__TypeInfo_for_V_11, mercury__bimap__TypeInfo_for_W_12, mercury__bimap__ValueMap_4, mercury__bimap__L0_7, mercury__bimap__V_9_9, &mercury__bimap__L_8);
    }
#line 47 "tree234.opt"
    mercury__bimap__Forward_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 47 "tree234.opt"
    mercury__bimap__Reverse_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 347 "bimap.m"
    mercury__bimap__V_25_25 = (MR_Word) &mercury__bimap_scalar_common_4[2];
#line 582 "bimap.m"
    {
#line 582 "bimap.m"
      mercury__bimap__det_insert_from_assoc_list_3_p_0(mercury__bimap__TypeInfo_for_K_10, mercury__bimap__TypeInfo_for_W_12, mercury__bimap__L_8, mercury__bimap__V_25_25, &mercury__bimap__BM_6);
    }
#line 625 "bimap.m"
    return mercury__bimap__BM_6;
#line 625 "bimap.m"
  }
#line 259 "bimap.m"
}

#line 253 "bimap.m"
void MR_CALL 
mercury__bimap__map_keys_3_p_0(
#line 253 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_10,
#line 253 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_11,
#line 253 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_L_12,
#line 253 "bimap.m"
  MR_Word mercury__bimap__KeyMap_4,
#line 253 "bimap.m"
  MR_Word mercury__bimap__BM0_5,
#line 253 "bimap.m"
  MR_Word * mercury__bimap__BM_6)
#line 253 "bimap.m"
{
#line 610 "bimap.m"
  {
#line 610 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 610 "bimap.m"
    MR_Word mercury__bimap__L0_7;
#line 610 "bimap.m"
    MR_Word mercury__bimap__L_8;
#line 610 "bimap.m"
    MR_Word mercury__bimap__V_9_9;
#line 610 "bimap.m"
    MR_Word mercury__bimap__Forward_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__BM0_5, (MR_Integer) 0)));
#line 610 "bimap.m"
    MR_Word mercury__bimap__V_5_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 610 "bimap.m"
    MR_Word mercury__bimap__V_25_25;
#line 610 "bimap.m"
    MR_Word mercury__bimap__Forward_28;
#line 610 "bimap.m"
    MR_Word mercury__bimap__Reverse_29;
#line 569 "bimap.m"
    MR_Word mercury__bimap__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__BM0_5, (MR_Integer) 1)));

#line 85 "tree234.opt"
    {
#line 85 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__bimap__TypeInfo_for_K_11, mercury__bimap__TypeInfo_for_V_10, mercury__bimap__Forward_14, mercury__bimap__V_5_20, &mercury__bimap__L0_7);
    }
#line 612 "bimap.m"
    mercury__bimap__V_9_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 612 "bimap.m"
    {
#line 612 "bimap.m"
      mercury__bimap__map_keys_2_4_p_0(mercury__bimap__TypeInfo_for_V_10, mercury__bimap__TypeInfo_for_K_11, mercury__bimap__TypeInfo_for_L_12, mercury__bimap__KeyMap_4, mercury__bimap__L0_7, mercury__bimap__V_9_9, &mercury__bimap__L_8);
    }
#line 47 "tree234.opt"
    mercury__bimap__Forward_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 47 "tree234.opt"
    mercury__bimap__Reverse_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 347 "bimap.m"
    mercury__bimap__V_25_25 = (MR_Word) &mercury__bimap_scalar_common_4[1];
#line 582 "bimap.m"
    {
#line 582 "bimap.m"
      mercury__bimap__det_insert_from_assoc_list_3_p_0(mercury__bimap__TypeInfo_for_L_12, mercury__bimap__TypeInfo_for_V_10, mercury__bimap__L_8, mercury__bimap__V_25_25, mercury__bimap__BM_6);
#line 582 "bimap.m"
      return;
    }
#line 610 "bimap.m"
  }
#line 253 "bimap.m"
}

#line 252 "bimap.m"
MR_Word MR_CALL 
mercury__bimap__map_keys_2_f_0(
#line 252 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_10,
#line 252 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_11,
#line 252 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_L_12,
#line 252 "bimap.m"
  MR_Word mercury__bimap__KeyMap_4,
#line 252 "bimap.m"
  MR_Word mercury__bimap__BM0_5)
#line 252 "bimap.m"
{
#line 615 "bimap.m"
  {
#line 615 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 615 "bimap.m"
    MR_Word mercury__bimap__BM_6;
#line 615 "bimap.m"
    MR_Word mercury__bimap__L0_7;
#line 615 "bimap.m"
    MR_Word mercury__bimap__L_8;
#line 615 "bimap.m"
    MR_Word mercury__bimap__V_9_9;
#line 615 "bimap.m"
    MR_Word mercury__bimap__Forward_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__BM0_5, (MR_Integer) 0)));
#line 615 "bimap.m"
    MR_Word mercury__bimap__V_5_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 615 "bimap.m"
    MR_Word mercury__bimap__V_25_25;
#line 615 "bimap.m"
    MR_Word mercury__bimap__Forward_28;
#line 615 "bimap.m"
    MR_Word mercury__bimap__Reverse_29;
#line 569 "bimap.m"
    MR_Word mercury__bimap__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__BM0_5, (MR_Integer) 1)));

#line 85 "tree234.opt"
    {
#line 85 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__bimap__TypeInfo_for_K_11, mercury__bimap__TypeInfo_for_V_10, mercury__bimap__Forward_14, mercury__bimap__V_5_20, &mercury__bimap__L0_7);
    }
#line 617 "bimap.m"
    mercury__bimap__V_9_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 617 "bimap.m"
    {
#line 617 "bimap.m"
      mercury__bimap__map_keys_func_2_4_p_0(mercury__bimap__TypeInfo_for_V_10, mercury__bimap__TypeInfo_for_K_11, mercury__bimap__TypeInfo_for_L_12, mercury__bimap__KeyMap_4, mercury__bimap__L0_7, mercury__bimap__V_9_9, &mercury__bimap__L_8);
    }
#line 47 "tree234.opt"
    mercury__bimap__Forward_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 47 "tree234.opt"
    mercury__bimap__Reverse_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 347 "bimap.m"
    mercury__bimap__V_25_25 = (MR_Word) &mercury__bimap_scalar_common_4[1];
#line 582 "bimap.m"
    {
#line 582 "bimap.m"
      mercury__bimap__det_insert_from_assoc_list_3_p_0(mercury__bimap__TypeInfo_for_L_12, mercury__bimap__TypeInfo_for_V_10, mercury__bimap__L_8, mercury__bimap__V_25_25, &mercury__bimap__BM_6);
    }
#line 615 "bimap.m"
    return mercury__bimap__BM_6;
#line 615 "bimap.m"
  }
#line 252 "bimap.m"
}

#line 246 "bimap.m"
void MR_CALL 
mercury__bimap__apply_reverse_map_to_list_3_p_0(
#line 246 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_8,
#line 246 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_9,
#line 246 "bimap.m"
  MR_Word mercury__bimap__HeadVar__1_1,
#line 246 "bimap.m"
  MR_Word mercury__bimap__Vs_6,
#line 246 "bimap.m"
  MR_Word * mercury__bimap__Ks_7)
#line 246 "bimap.m"
{
#line 607 "bimap.m"
  {
#line 607 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 607 "bimap.m"
    MR_Word mercury__bimap__Reverse_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 1)));
#line 607 "bimap.m"
    MR_Word mercury__bimap__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 0)));

#line 608 "bimap.m"
    {
#line 608 "bimap.m"
      mercury__map__apply_to_list_3_p_0(mercury__bimap__TypeInfo_for_V_9, mercury__bimap__TypeInfo_for_K_8, mercury__bimap__Vs_6, mercury__bimap__Reverse_5, mercury__bimap__Ks_7);
#line 608 "bimap.m"
      return;
    }
#line 607 "bimap.m"
  }
#line 246 "bimap.m"
}

#line 245 "bimap.m"
MR_Word MR_CALL 
mercury__bimap__apply_reverse_map_to_list_2_f_0(
#line 245 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_7,
#line 245 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_8,
#line 245 "bimap.m"
  MR_Word mercury__bimap__BM_4,
#line 245 "bimap.m"
  MR_Word mercury__bimap__Vs_5)
#line 245 "bimap.m"
{
#line 607 "bimap.m"
  {
#line 607 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 607 "bimap.m"
    MR_Word mercury__bimap__Ks_6;
#line 607 "bimap.m"
    MR_Word mercury__bimap__Reverse_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__BM_4, (MR_Integer) 1)));
#line 607 "bimap.m"
    MR_Word mercury__bimap__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__BM_4, (MR_Integer) 0)));

#line 608 "bimap.m"
    {
#line 608 "bimap.m"
      mercury__map__apply_to_list_3_p_0(mercury__bimap__TypeInfo_for_V_8, mercury__bimap__TypeInfo_for_K_7, mercury__bimap__Vs_5, mercury__bimap__Reverse_12, &mercury__bimap__Ks_6);
    }
#line 607 "bimap.m"
    return mercury__bimap__Ks_6;
#line 607 "bimap.m"
  }
#line 245 "bimap.m"
}

#line 242 "bimap.m"
void MR_CALL 
mercury__bimap__apply_forward_map_to_list_3_p_0(
#line 242 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_8,
#line 242 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_9,
#line 242 "bimap.m"
  MR_Word mercury__bimap__HeadVar__1_1,
#line 242 "bimap.m"
  MR_Word mercury__bimap__Ks_6,
#line 242 "bimap.m"
  MR_Word * mercury__bimap__Vs_7)
#line 242 "bimap.m"
{
#line 601 "bimap.m"
  {
#line 601 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 601 "bimap.m"
    MR_Word mercury__bimap__Forward_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 0)));
#line 601 "bimap.m"
    MR_Word mercury__bimap__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 1)));

#line 602 "bimap.m"
    {
#line 602 "bimap.m"
      mercury__map__apply_to_list_3_p_0(mercury__bimap__TypeInfo_for_K_8, mercury__bimap__TypeInfo_for_V_9, mercury__bimap__Ks_6, mercury__bimap__Forward_4, mercury__bimap__Vs_7);
#line 602 "bimap.m"
      return;
    }
#line 601 "bimap.m"
  }
#line 242 "bimap.m"
}

#line 241 "bimap.m"
MR_Word MR_CALL 
mercury__bimap__apply_forward_map_to_list_2_f_0(
#line 241 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_7,
#line 241 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_8,
#line 241 "bimap.m"
  MR_Word mercury__bimap__BM_4,
#line 241 "bimap.m"
  MR_Word mercury__bimap__Ks_5)
#line 241 "bimap.m"
{
#line 601 "bimap.m"
  {
#line 601 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 601 "bimap.m"
    MR_Word mercury__bimap__Vs_6;
#line 601 "bimap.m"
    MR_Word mercury__bimap__Forward_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__BM_4, (MR_Integer) 0)));
#line 601 "bimap.m"
    MR_Word mercury__bimap__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__BM_4, (MR_Integer) 1)));

#line 602 "bimap.m"
    {
#line 602 "bimap.m"
      mercury__map__apply_to_list_3_p_0(mercury__bimap__TypeInfo_for_K_7, mercury__bimap__TypeInfo_for_V_8, mercury__bimap__Ks_5, mercury__bimap__Forward_11, &mercury__bimap__Vs_6);
    }
#line 601 "bimap.m"
    return mercury__bimap__Vs_6;
#line 601 "bimap.m"
  }
#line 241 "bimap.m"
}

#line 238 "bimap.m"
void MR_CALL 
mercury__bimap__det_from_corresponding_lists_3_p_0(
#line 238 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_8,
#line 238 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_9,
#line 238 "bimap.m"
  MR_Word mercury__bimap__Ks_4,
#line 238 "bimap.m"
  MR_Word mercury__bimap__Vs_5,
#line 238 "bimap.m"
  MR_Word * mercury__bimap__BM_6)
#line 238 "bimap.m"
{
#line 594 "bimap.m"
  {
#line 594 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 594 "bimap.m"
    MR_Word mercury__bimap__L_7;
#line 594 "bimap.m"
    MR_Word mercury__bimap__V_12_12;
#line 594 "bimap.m"
    MR_Word mercury__bimap__Forward_15;
#line 594 "bimap.m"
    MR_Word mercury__bimap__Reverse_16;

#line 595 "bimap.m"
    {
#line 595 "bimap.m"
      mercury__assoc_list__from_corresponding_lists_3_p_0(mercury__bimap__TypeInfo_for_K_8, mercury__bimap__TypeInfo_for_V_9, mercury__bimap__Ks_4, mercury__bimap__Vs_5, &mercury__bimap__L_7);
    }
#line 47 "tree234.opt"
    mercury__bimap__Forward_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 47 "tree234.opt"
    mercury__bimap__Reverse_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 347 "bimap.m"
    mercury__bimap__V_12_12 = (MR_Word) &mercury__bimap_scalar_common_4[0];
#line 582 "bimap.m"
    {
#line 582 "bimap.m"
      mercury__bimap__det_insert_from_assoc_list_3_p_0(mercury__bimap__TypeInfo_for_K_8, mercury__bimap__TypeInfo_for_V_9, mercury__bimap__L_7, mercury__bimap__V_12_12, mercury__bimap__BM_6);
#line 582 "bimap.m"
      return;
    }
#line 594 "bimap.m"
  }
#line 238 "bimap.m"
}

#line 237 "bimap.m"
MR_Word MR_CALL 
mercury__bimap__det_from_corresponding_lists_2_f_0(
#line 237 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_7,
#line 237 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_8,
#line 237 "bimap.m"
  MR_Word mercury__bimap__Ks_4,
#line 237 "bimap.m"
  MR_Word mercury__bimap__Vs_5)
#line 237 "bimap.m"
{
#line 594 "bimap.m"
  {
#line 594 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 594 "bimap.m"
    MR_Word mercury__bimap__BM_6;
#line 594 "bimap.m"
    MR_Word mercury__bimap__L_12;
#line 594 "bimap.m"
    MR_Word mercury__bimap__V_15_15;
#line 594 "bimap.m"
    MR_Word mercury__bimap__Forward_18;
#line 594 "bimap.m"
    MR_Word mercury__bimap__Reverse_19;

#line 595 "bimap.m"
    {
#line 595 "bimap.m"
      mercury__assoc_list__from_corresponding_lists_3_p_0(mercury__bimap__TypeInfo_for_K_7, mercury__bimap__TypeInfo_for_V_8, mercury__bimap__Ks_4, mercury__bimap__Vs_5, &mercury__bimap__L_12);
    }
#line 47 "tree234.opt"
    mercury__bimap__Forward_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 47 "tree234.opt"
    mercury__bimap__Reverse_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 347 "bimap.m"
    mercury__bimap__V_15_15 = (MR_Word) &mercury__bimap_scalar_common_4[0];
#line 582 "bimap.m"
    {
#line 582 "bimap.m"
      mercury__bimap__det_insert_from_assoc_list_3_p_0(mercury__bimap__TypeInfo_for_K_7, mercury__bimap__TypeInfo_for_V_8, mercury__bimap__L_12, mercury__bimap__V_15_15, &mercury__bimap__BM_6);
    }
#line 594 "bimap.m"
    return mercury__bimap__BM_6;
#line 594 "bimap.m"
  }
#line 237 "bimap.m"
}

#line 231 "bimap.m"
MR_bool MR_CALL 
mercury__bimap__from_corresponding_lists_3_p_0(
#line 231 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_8,
#line 231 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_9,
#line 231 "bimap.m"
  MR_Word mercury__bimap__Ks_4,
#line 231 "bimap.m"
  MR_Word mercury__bimap__Vs_5,
#line 231 "bimap.m"
  MR_Word * mercury__bimap__BM_6)
#line 231 "bimap.m"
{
#line 587 "bimap.m"
  {
#line 587 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 587 "bimap.m"
    MR_Word mercury__bimap__L_7;
#line 587 "bimap.m"
    MR_Word mercury__bimap__V_12_12;
#line 587 "bimap.m"
    MR_Word mercury__bimap__Forward_15;
#line 587 "bimap.m"
    MR_Word mercury__bimap__Reverse_16;

#line 588 "bimap.m"
    {
#line 588 "bimap.m"
      mercury__assoc_list__from_corresponding_lists_3_p_0(mercury__bimap__TypeInfo_for_K_8, mercury__bimap__TypeInfo_for_V_9, mercury__bimap__Ks_4, mercury__bimap__Vs_5, &mercury__bimap__L_7);
    }
#line 47 "tree234.opt"
    mercury__bimap__Forward_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 47 "tree234.opt"
    mercury__bimap__Reverse_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 347 "bimap.m"
    mercury__bimap__V_12_12 = (MR_Word) &mercury__bimap_scalar_common_4[0];
#line 576 "bimap.m"
    {
#line 576 "bimap.m"
      return mercury__bimap__succeeded = mercury__bimap__insert_from_assoc_list_3_p_0(mercury__bimap__TypeInfo_for_K_8, mercury__bimap__TypeInfo_for_V_9, mercury__bimap__L_7, mercury__bimap__V_12_12, mercury__bimap__BM_6);
    }
#line 587 "bimap.m"
    return mercury__bimap__succeeded;
#line 587 "bimap.m"
  }
#line 231 "bimap.m"
}

#line 229 "bimap.m"
MR_bool MR_CALL 
mercury__bimap__from_corresponding_lists_2_f_0(
#line 229 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_7,
#line 229 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_8,
#line 229 "bimap.m"
  MR_Word mercury__bimap__Ks_4,
#line 229 "bimap.m"
  MR_Word mercury__bimap__Vs_5,
#line 229 "bimap.m"
  MR_Word * mercury__bimap__BM_6)
#line 229 "bimap.m"
{
#line 587 "bimap.m"
  {
#line 587 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 587 "bimap.m"
    MR_Word mercury__bimap__L_12;
#line 587 "bimap.m"
    MR_Word mercury__bimap__V_15_15;
#line 587 "bimap.m"
    MR_Word mercury__bimap__Forward_18;
#line 587 "bimap.m"
    MR_Word mercury__bimap__Reverse_19;

#line 588 "bimap.m"
    {
#line 588 "bimap.m"
      mercury__assoc_list__from_corresponding_lists_3_p_0(mercury__bimap__TypeInfo_for_K_7, mercury__bimap__TypeInfo_for_V_8, mercury__bimap__Ks_4, mercury__bimap__Vs_5, &mercury__bimap__L_12);
    }
#line 47 "tree234.opt"
    mercury__bimap__Forward_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 47 "tree234.opt"
    mercury__bimap__Reverse_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 347 "bimap.m"
    mercury__bimap__V_15_15 = (MR_Word) &mercury__bimap_scalar_common_4[0];
#line 576 "bimap.m"
    {
#line 576 "bimap.m"
      return mercury__bimap__succeeded = mercury__bimap__insert_from_assoc_list_3_p_0(mercury__bimap__TypeInfo_for_K_7, mercury__bimap__TypeInfo_for_V_8, mercury__bimap__L_12, mercury__bimap__V_15_15, mercury__bimap__BM_6);
    }
#line 587 "bimap.m"
    return mercury__bimap__succeeded;
#line 587 "bimap.m"
  }
#line 229 "bimap.m"
}

#line 223 "bimap.m"
void MR_CALL 
mercury__bimap__det_from_assoc_list_2_p_0(
#line 223 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_6,
#line 223 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_7,
#line 223 "bimap.m"
  MR_Word mercury__bimap__L_3,
#line 223 "bimap.m"
  MR_Word * mercury__bimap__Bimap_4)
#line 223 "bimap.m"
{
#line 581 "bimap.m"
  {
#line 581 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 581 "bimap.m"
    MR_Word mercury__bimap__V_5_5 = (MR_Word) &mercury__bimap_scalar_common_4[0];
#line 581 "bimap.m"
    MR_Word mercury__bimap__Forward_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 581 "bimap.m"
    MR_Word mercury__bimap__Reverse_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 582 "bimap.m"
    {
#line 582 "bimap.m"
      mercury__bimap__det_insert_from_assoc_list_3_p_0(mercury__bimap__TypeInfo_for_K_6, mercury__bimap__TypeInfo_for_V_7, mercury__bimap__L_3, mercury__bimap__V_5_5, mercury__bimap__Bimap_4);
#line 582 "bimap.m"
      return;
    }
#line 581 "bimap.m"
  }
#line 223 "bimap.m"
}

#line 222 "bimap.m"
MR_Word MR_CALL 
mercury__bimap__det_from_assoc_list_1_f_0(
#line 222 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_5,
#line 222 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_6,
#line 222 "bimap.m"
  MR_Word mercury__bimap__L_3)
#line 222 "bimap.m"
{
#line 581 "bimap.m"
  {
#line 581 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 581 "bimap.m"
    MR_Word mercury__bimap__Bimap_4;
#line 581 "bimap.m"
    MR_Word mercury__bimap__V_9_9 = (MR_Word) &mercury__bimap_scalar_common_4[0];
#line 581 "bimap.m"
    MR_Word mercury__bimap__Forward_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 581 "bimap.m"
    MR_Word mercury__bimap__Reverse_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 582 "bimap.m"
    {
#line 582 "bimap.m"
      mercury__bimap__det_insert_from_assoc_list_3_p_0(mercury__bimap__TypeInfo_for_K_5, mercury__bimap__TypeInfo_for_V_6, mercury__bimap__L_3, mercury__bimap__V_9_9, &mercury__bimap__Bimap_4);
    }
#line 581 "bimap.m"
    return mercury__bimap__Bimap_4;
#line 581 "bimap.m"
  }
#line 222 "bimap.m"
}

#line 216 "bimap.m"
MR_bool MR_CALL 
mercury__bimap__from_assoc_list_2_p_0(
#line 216 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_6,
#line 216 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_7,
#line 216 "bimap.m"
  MR_Word mercury__bimap__L_3,
#line 216 "bimap.m"
  MR_Word * mercury__bimap__Bimap_4)
#line 216 "bimap.m"
{
#line 575 "bimap.m"
  {
#line 575 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 575 "bimap.m"
    MR_Word mercury__bimap__V_5_5 = (MR_Word) &mercury__bimap_scalar_common_4[0];
#line 575 "bimap.m"
    MR_Word mercury__bimap__Forward_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 575 "bimap.m"
    MR_Word mercury__bimap__Reverse_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 576 "bimap.m"
    {
#line 576 "bimap.m"
      return mercury__bimap__succeeded = mercury__bimap__insert_from_assoc_list_3_p_0(mercury__bimap__TypeInfo_for_K_6, mercury__bimap__TypeInfo_for_V_7, mercury__bimap__L_3, mercury__bimap__V_5_5, mercury__bimap__Bimap_4);
    }
#line 575 "bimap.m"
    return mercury__bimap__succeeded;
#line 575 "bimap.m"
  }
#line 216 "bimap.m"
}

#line 215 "bimap.m"
MR_bool MR_CALL 
mercury__bimap__from_assoc_list_1_f_0(
#line 215 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_5,
#line 215 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_6,
#line 215 "bimap.m"
  MR_Word mercury__bimap__AL_3,
#line 215 "bimap.m"
  MR_Word * mercury__bimap__BM_4)
#line 215 "bimap.m"
{
#line 575 "bimap.m"
  {
#line 575 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 575 "bimap.m"
    MR_Word mercury__bimap__V_9_9 = (MR_Word) &mercury__bimap_scalar_common_4[0];
#line 575 "bimap.m"
    MR_Word mercury__bimap__Forward_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 575 "bimap.m"
    MR_Word mercury__bimap__Reverse_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 576 "bimap.m"
    {
#line 576 "bimap.m"
      return mercury__bimap__succeeded = mercury__bimap__insert_from_assoc_list_3_p_0(mercury__bimap__TypeInfo_for_K_5, mercury__bimap__TypeInfo_for_V_6, mercury__bimap__AL_3, mercury__bimap__V_9_9, mercury__bimap__BM_4);
    }
#line 575 "bimap.m"
    return mercury__bimap__succeeded;
#line 575 "bimap.m"
  }
#line 215 "bimap.m"
}

#line 209 "bimap.m"
void MR_CALL 
mercury__bimap__to_assoc_list_2_p_0(
#line 209 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_6,
#line 209 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_7,
#line 209 "bimap.m"
  MR_Word mercury__bimap__HeadVar__1_1,
#line 209 "bimap.m"
  MR_Word * mercury__bimap__L_5)
#line 209 "bimap.m"
{
#line 569 "bimap.m"
  {
#line 569 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 569 "bimap.m"
    MR_Word mercury__bimap__Forward_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 0)));
#line 569 "bimap.m"
    MR_Word mercury__bimap__V_5_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 569 "bimap.m"
    MR_Word mercury__bimap__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 1)));

#line 85 "tree234.opt"
    {
#line 85 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__bimap__TypeInfo_for_K_6, mercury__bimap__TypeInfo_for_V_7, mercury__bimap__Forward_3, mercury__bimap__V_5_12, mercury__bimap__L_5);
#line 85 "tree234.opt"
      return;
    }
#line 569 "bimap.m"
  }
#line 209 "bimap.m"
}

#line 208 "bimap.m"
MR_Word MR_CALL 
mercury__bimap__to_assoc_list_1_f_0(
#line 208 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_5,
#line 208 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_6,
#line 208 "bimap.m"
  MR_Word mercury__bimap__BM_3)
#line 208 "bimap.m"
{
#line 569 "bimap.m"
  {
#line 569 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 569 "bimap.m"
    MR_Word mercury__bimap__AL_4;
#line 569 "bimap.m"
    MR_Word mercury__bimap__Forward_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__BM_3, (MR_Integer) 0)));
#line 569 "bimap.m"
    MR_Word mercury__bimap__V_5_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 569 "bimap.m"
    MR_Word mercury__bimap__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__BM_3, (MR_Integer) 1)));

#line 85 "tree234.opt"
    {
#line 85 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__bimap__TypeInfo_for_K_5, mercury__bimap__TypeInfo_for_V_6, mercury__bimap__Forward_8, mercury__bimap__V_5_14, &mercury__bimap__AL_4);
    }
#line 569 "bimap.m"
    return mercury__bimap__AL_4;
#line 569 "bimap.m"
  }
#line 208 "bimap.m"
}

#line 203 "bimap.m"
void MR_CALL 
mercury__bimap__overlay_3_p_0(
#line 203 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_8,
#line 203 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_9,
#line 203 "bimap.m"
  MR_Word mercury__bimap__BMA_4,
#line 203 "bimap.m"
  MR_Word mercury__bimap__BMB_5,
#line 203 "bimap.m"
  MR_Word * mercury__bimap__BM_6)
#line 203 "bimap.m"
{
#line 554 "bimap.m"
  {
#line 554 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 554 "bimap.m"
    MR_Word mercury__bimap__KVBs_7;
#line 554 "bimap.m"
    MR_Word mercury__bimap__Forward_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__BMB_5, (MR_Integer) 0)));
#line 554 "bimap.m"
    MR_Word mercury__bimap__V_5_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 569 "bimap.m"
    MR_Word mercury__bimap__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__BMB_5, (MR_Integer) 1)));

#line 85 "tree234.opt"
    {
#line 85 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__bimap__TypeInfo_for_K_8, mercury__bimap__TypeInfo_for_V_9, mercury__bimap__Forward_11, mercury__bimap__V_5_17, &mercury__bimap__KVBs_7);
    }
#line 556 "bimap.m"
    {
#line 556 "bimap.m"
      mercury__bimap__overlay_2_3_p_0(mercury__bimap__TypeInfo_for_K_8, mercury__bimap__TypeInfo_for_V_9, mercury__bimap__KVBs_7, mercury__bimap__BMA_4, mercury__bimap__BM_6);
#line 556 "bimap.m"
      return;
    }
#line 554 "bimap.m"
  }
#line 203 "bimap.m"
}

#line 202 "bimap.m"
MR_Word MR_CALL 
mercury__bimap__overlay_2_f_0(
#line 202 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_7,
#line 202 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_8,
#line 202 "bimap.m"
  MR_Word mercury__bimap__BMA_4,
#line 202 "bimap.m"
  MR_Word mercury__bimap__BMB_5)
#line 202 "bimap.m"
{
#line 554 "bimap.m"
  {
#line 554 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 554 "bimap.m"
    MR_Word mercury__bimap__BM_6;
#line 554 "bimap.m"
    MR_Word mercury__bimap__KVBs_12;
#line 554 "bimap.m"
    MR_Word mercury__bimap__Forward_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__BMB_5, (MR_Integer) 0)));
#line 554 "bimap.m"
    MR_Word mercury__bimap__V_5_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 569 "bimap.m"
    MR_Word mercury__bimap__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__BMB_5, (MR_Integer) 1)));

#line 85 "tree234.opt"
    {
#line 85 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__bimap__TypeInfo_for_K_7, mercury__bimap__TypeInfo_for_V_8, mercury__bimap__Forward_14, mercury__bimap__V_5_20, &mercury__bimap__KVBs_12);
    }
#line 556 "bimap.m"
    {
#line 556 "bimap.m"
      mercury__bimap__overlay_2_3_p_0(mercury__bimap__TypeInfo_for_K_7, mercury__bimap__TypeInfo_for_V_8, mercury__bimap__KVBs_12, mercury__bimap__BMA_4, &mercury__bimap__BM_6);
    }
#line 554 "bimap.m"
    return mercury__bimap__BM_6;
#line 554 "bimap.m"
  }
#line 202 "bimap.m"
}

#line 195 "bimap.m"
void MR_CALL 
mercury__bimap__delete_values_3_p_0(
#line 195 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_14,
#line 195 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_15,
#line 195 "bimap.m"
  MR_Word mercury__bimap__HeadVar__1_1,
#line 195 "bimap.m"
  MR_Word mercury__bimap__STATE_VARIABLE_BM_0_2,
#line 195 "bimap.m"
  MR_Word * mercury__bimap__STATE_VARIABLE_BM_3)
#line 195 "bimap.m"
{
#line 546 "bimap.m"
  while (MR_TRUE)
#line 546 "bimap.m"
    {
#line 546 "bimap.m"
      /* tailcall optimized into a loop */
#line 546 "bimap.m"
      {
#line 546 "bimap.m"
        MR_bool mercury__bimap__succeeded;

#line 546 "bimap.m"
        if ((mercury__bimap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 546 "bimap.m"
          *mercury__bimap__STATE_VARIABLE_BM_3 = mercury__bimap__STATE_VARIABLE_BM_0_2;
#line 546 "bimap.m"
        else
#line 547 "bimap.m"
          {
#line 547 "bimap.m"
            MR_Box mercury__bimap__Value_7 = (MR_hl_field(MR_mktag(1), mercury__bimap__HeadVar__1_1, (MR_Integer) 0));
#line 547 "bimap.m"
            MR_Word mercury__bimap__Values_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bimap__HeadVar__1_1, (MR_Integer) 1)));
#line 547 "bimap.m"
            MR_Word mercury__bimap__STATE_VARIABLE_BM_12_12;
#line 547 "bimap.m"
            MR_Word mercury__bimap__Forward0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_0_2, (MR_Integer) 0)));
#line 547 "bimap.m"
            MR_Word mercury__bimap__Reverse0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_0_2, (MR_Integer) 1)));
#line 531 "bimap.m"
            MR_Box mercury__bimap__K_22;

#line 37 "map.opt"
            {
#line 37 "map.opt"
              mercury__bimap__succeeded = mercury__tree234__search_3_p_0(mercury__bimap__TypeInfo_for_V_14, mercury__bimap__TypeInfo_for_K_15, mercury__bimap__Reverse0_21, mercury__bimap__Value_7, &mercury__bimap__K_22);
            }
#line 531 "bimap.m"
            if (mercury__bimap__succeeded)
#line 528 "bimap.m"
              {
#line 528 "bimap.m"
                MR_Word mercury__bimap__Forward_23;
#line 528 "bimap.m"
                MR_Word mercury__bimap__Reverse_24;
#line 60 "tree234.opt"
                MR_Word mercury__bimap__V_7_35;
#line 60 "tree234.opt"
                MR_Word mercury__bimap__V_7_42;

#line 60 "tree234.opt"
                {
#line 60 "tree234.opt"
                  mercury__tree234__delete_2_4_p_0(mercury__bimap__TypeInfo_for_K_15, mercury__bimap__TypeInfo_for_V_14, mercury__bimap__Forward0_20, mercury__bimap__K_22, &mercury__bimap__Forward_23, &mercury__bimap__V_7_35);
                }
#line 60 "tree234.opt"
                {
#line 60 "tree234.opt"
                  mercury__tree234__delete_2_4_p_0(mercury__bimap__TypeInfo_for_V_14, mercury__bimap__TypeInfo_for_K_15, mercury__bimap__Reverse0_21, mercury__bimap__Value_7, &mercury__bimap__Reverse_24, &mercury__bimap__V_7_42);
                }
#line 530 "bimap.m"
                {
#line 530 "bimap.m"
                  mercury__bimap__STATE_VARIABLE_BM_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 530 "bimap.m"
                  MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_12_12, 0) = ((MR_Box) (mercury__bimap__Forward_23));
#line 530 "bimap.m"
                  MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_12_12, 1) = ((MR_Box) (mercury__bimap__Reverse_24));
#line 530 "bimap.m"
                }
#line 528 "bimap.m"
              }
#line 531 "bimap.m"
            else
#line 530 "bimap.m"
              mercury__bimap__STATE_VARIABLE_BM_12_12 = mercury__bimap__STATE_VARIABLE_BM_0_2;
#line 549 "bimap.m"
            /* direct tailcall eliminated */
#line 549 "bimap.m"
            {
#line 549 "bimap.m"
              MR_Word mercury__bimap__HeadVar__1__tmp_copy_1 = mercury__bimap__Values_8;
#line 549 "bimap.m"
              MR_Word mercury__bimap__STATE_VARIABLE_BM_0__tmp_copy_2 = mercury__bimap__STATE_VARIABLE_BM_12_12;

#line 549 "bimap.m"
              mercury__bimap__STATE_VARIABLE_BM_0_2 = mercury__bimap__STATE_VARIABLE_BM_0__tmp_copy_2;
#line 549 "bimap.m"
              mercury__bimap__HeadVar__1_1 = mercury__bimap__HeadVar__1__tmp_copy_1;
#line 549 "bimap.m"
            }
#line 549 "bimap.m"
            continue;
#line 547 "bimap.m"
          }
#line 546 "bimap.m"
      }
#line 546 "bimap.m"
      break;
#line 546 "bimap.m"
    }
#line 195 "bimap.m"
}

#line 194 "bimap.m"
MR_Word MR_CALL 
mercury__bimap__delete_values_2_f_0(
#line 194 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_7,
#line 194 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_8,
#line 194 "bimap.m"
  MR_Word mercury__bimap__BM0_4,
#line 194 "bimap.m"
  MR_Word mercury__bimap__Vs_5)
#line 194 "bimap.m"
{
#line 544 "bimap.m"
  {
#line 544 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 544 "bimap.m"
    MR_Word mercury__bimap__BM_6;

#line 544 "bimap.m"
    {
#line 544 "bimap.m"
      mercury__bimap__delete_values_3_p_0(mercury__bimap__TypeInfo_for_V_8, mercury__bimap__TypeInfo_for_K_7, mercury__bimap__Vs_5, mercury__bimap__BM0_4, &mercury__bimap__BM_6);
    }
#line 544 "bimap.m"
    return mercury__bimap__BM_6;
#line 544 "bimap.m"
  }
#line 194 "bimap.m"
}

#line 189 "bimap.m"
void MR_CALL 
mercury__bimap__delete_keys_3_p_0(
#line 189 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_14,
#line 189 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_15,
#line 189 "bimap.m"
  MR_Word mercury__bimap__HeadVar__1_1,
#line 189 "bimap.m"
  MR_Word mercury__bimap__STATE_VARIABLE_BM_0_2,
#line 189 "bimap.m"
  MR_Word * mercury__bimap__STATE_VARIABLE_BM_3)
#line 189 "bimap.m"
{
#line 538 "bimap.m"
  while (MR_TRUE)
#line 538 "bimap.m"
    {
#line 538 "bimap.m"
      /* tailcall optimized into a loop */
#line 538 "bimap.m"
      {
#line 538 "bimap.m"
        MR_bool mercury__bimap__succeeded;

#line 538 "bimap.m"
        if ((mercury__bimap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 538 "bimap.m"
          *mercury__bimap__STATE_VARIABLE_BM_3 = mercury__bimap__STATE_VARIABLE_BM_0_2;
#line 538 "bimap.m"
        else
#line 539 "bimap.m"
          {
#line 539 "bimap.m"
            MR_Box mercury__bimap__Key_7 = (MR_hl_field(MR_mktag(1), mercury__bimap__HeadVar__1_1, (MR_Integer) 0));
#line 539 "bimap.m"
            MR_Word mercury__bimap__Keys_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bimap__HeadVar__1_1, (MR_Integer) 1)));
#line 539 "bimap.m"
            MR_Word mercury__bimap__STATE_VARIABLE_BM_12_12;
#line 539 "bimap.m"
            MR_Word mercury__bimap__Forward0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_0_2, (MR_Integer) 0)));
#line 539 "bimap.m"
            MR_Word mercury__bimap__Reverse0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_0_2, (MR_Integer) 1)));
#line 518 "bimap.m"
            MR_Box mercury__bimap__V_22;

#line 37 "map.opt"
            {
#line 37 "map.opt"
              mercury__bimap__succeeded = mercury__tree234__search_3_p_0(mercury__bimap__TypeInfo_for_K_14, mercury__bimap__TypeInfo_for_V_15, mercury__bimap__Forward0_20, mercury__bimap__Key_7, &mercury__bimap__V_22);
            }
#line 518 "bimap.m"
            if (mercury__bimap__succeeded)
#line 515 "bimap.m"
              {
#line 515 "bimap.m"
                MR_Word mercury__bimap__Forward_23;
#line 515 "bimap.m"
                MR_Word mercury__bimap__Reverse_24;
#line 60 "tree234.opt"
                MR_Word mercury__bimap__V_7_35;
#line 60 "tree234.opt"
                MR_Word mercury__bimap__V_7_42;

#line 60 "tree234.opt"
                {
#line 60 "tree234.opt"
                  mercury__tree234__delete_2_4_p_0(mercury__bimap__TypeInfo_for_K_14, mercury__bimap__TypeInfo_for_V_15, mercury__bimap__Forward0_20, mercury__bimap__Key_7, &mercury__bimap__Forward_23, &mercury__bimap__V_7_35);
                }
#line 60 "tree234.opt"
                {
#line 60 "tree234.opt"
                  mercury__tree234__delete_2_4_p_0(mercury__bimap__TypeInfo_for_V_15, mercury__bimap__TypeInfo_for_K_14, mercury__bimap__Reverse0_21, mercury__bimap__V_22, &mercury__bimap__Reverse_24, &mercury__bimap__V_7_42);
                }
#line 517 "bimap.m"
                {
#line 517 "bimap.m"
                  mercury__bimap__STATE_VARIABLE_BM_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 517 "bimap.m"
                  MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_12_12, 0) = ((MR_Box) (mercury__bimap__Forward_23));
#line 517 "bimap.m"
                  MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_12_12, 1) = ((MR_Box) (mercury__bimap__Reverse_24));
#line 517 "bimap.m"
                }
#line 515 "bimap.m"
              }
#line 518 "bimap.m"
            else
#line 517 "bimap.m"
              mercury__bimap__STATE_VARIABLE_BM_12_12 = mercury__bimap__STATE_VARIABLE_BM_0_2;
#line 541 "bimap.m"
            /* direct tailcall eliminated */
#line 541 "bimap.m"
            {
#line 541 "bimap.m"
              MR_Word mercury__bimap__HeadVar__1__tmp_copy_1 = mercury__bimap__Keys_8;
#line 541 "bimap.m"
              MR_Word mercury__bimap__STATE_VARIABLE_BM_0__tmp_copy_2 = mercury__bimap__STATE_VARIABLE_BM_12_12;

#line 541 "bimap.m"
              mercury__bimap__STATE_VARIABLE_BM_0_2 = mercury__bimap__STATE_VARIABLE_BM_0__tmp_copy_2;
#line 541 "bimap.m"
              mercury__bimap__HeadVar__1_1 = mercury__bimap__HeadVar__1__tmp_copy_1;
#line 541 "bimap.m"
            }
#line 541 "bimap.m"
            continue;
#line 539 "bimap.m"
          }
#line 538 "bimap.m"
      }
#line 538 "bimap.m"
      break;
#line 538 "bimap.m"
    }
#line 189 "bimap.m"
}

#line 188 "bimap.m"
MR_Word MR_CALL 
mercury__bimap__delete_keys_2_f_0(
#line 188 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_7,
#line 188 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_8,
#line 188 "bimap.m"
  MR_Word mercury__bimap__BM0_4,
#line 188 "bimap.m"
  MR_Word mercury__bimap__Ks_5)
#line 188 "bimap.m"
{
#line 536 "bimap.m"
  {
#line 536 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 536 "bimap.m"
    MR_Word mercury__bimap__BM_6;

#line 536 "bimap.m"
    {
#line 536 "bimap.m"
      mercury__bimap__delete_keys_3_p_0(mercury__bimap__TypeInfo_for_K_7, mercury__bimap__TypeInfo_for_V_8, mercury__bimap__Ks_5, mercury__bimap__BM0_4, &mercury__bimap__BM_6);
    }
#line 536 "bimap.m"
    return mercury__bimap__BM_6;
#line 536 "bimap.m"
  }
#line 188 "bimap.m"
}

#line 184 "bimap.m"
void MR_CALL 
mercury__bimap__delete_value_3_p_0(
#line 184 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_14,
#line 184 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_15,
#line 184 "bimap.m"
  MR_Box mercury__bimap__V_4,
#line 184 "bimap.m"
  MR_Word mercury__bimap__STATE_VARIABLE_BM_0_11,
#line 184 "bimap.m"
  MR_Word * mercury__bimap__STATE_VARIABLE_BM_12)
#line 184 "bimap.m"
{
#line 525 "bimap.m"
  {
#line 525 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 525 "bimap.m"
    MR_Word mercury__bimap__Forward0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_0_11, (MR_Integer) 0)));
#line 525 "bimap.m"
    MR_Word mercury__bimap__Reverse0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_0_11, (MR_Integer) 1)));
#line 531 "bimap.m"
    MR_Box mercury__bimap__K_8;

#line 37 "map.opt"
    {
#line 37 "map.opt"
      mercury__bimap__succeeded = mercury__tree234__search_3_p_0(mercury__bimap__TypeInfo_for_V_14, mercury__bimap__TypeInfo_for_K_15, mercury__bimap__Reverse0_7, mercury__bimap__V_4, &mercury__bimap__K_8);
    }
#line 531 "bimap.m"
    if (mercury__bimap__succeeded)
#line 528 "bimap.m"
      {
#line 528 "bimap.m"
        MR_Word mercury__bimap__Forward_9;
#line 528 "bimap.m"
        MR_Word mercury__bimap__Reverse_10;
#line 60 "tree234.opt"
        MR_Word mercury__bimap__V_7_25;
#line 60 "tree234.opt"
        MR_Word mercury__bimap__V_7_32;

#line 60 "tree234.opt"
        {
#line 60 "tree234.opt"
          mercury__tree234__delete_2_4_p_0(mercury__bimap__TypeInfo_for_K_15, mercury__bimap__TypeInfo_for_V_14, mercury__bimap__Forward0_6, mercury__bimap__K_8, &mercury__bimap__Forward_9, &mercury__bimap__V_7_25);
        }
#line 60 "tree234.opt"
        {
#line 60 "tree234.opt"
          mercury__tree234__delete_2_4_p_0(mercury__bimap__TypeInfo_for_V_14, mercury__bimap__TypeInfo_for_K_15, mercury__bimap__Reverse0_7, mercury__bimap__V_4, &mercury__bimap__Reverse_10, &mercury__bimap__V_7_32);
        }
#line 530 "bimap.m"
        {
#line 530 "bimap.m"
          MR_Word base;
#line 530 "bimap.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 530 "bimap.m"
          *mercury__bimap__STATE_VARIABLE_BM_12 = base;
#line 530 "bimap.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__bimap__Forward_9));
#line 530 "bimap.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__bimap__Reverse_10));
#line 530 "bimap.m"
        }
#line 528 "bimap.m"
      }
#line 531 "bimap.m"
    else
#line 530 "bimap.m"
      *mercury__bimap__STATE_VARIABLE_BM_12 = mercury__bimap__STATE_VARIABLE_BM_0_11;
#line 525 "bimap.m"
  }
#line 184 "bimap.m"
}

#line 183 "bimap.m"
MR_Word MR_CALL 
mercury__bimap__delete_value_2_f_0(
#line 183 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_9,
#line 183 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_10,
#line 183 "bimap.m"
  MR_Word mercury__bimap__STATE_VARIABLE_BM_0_6,
#line 183 "bimap.m"
  MR_Box mercury__bimap__V_5)
#line 183 "bimap.m"
{
#line 525 "bimap.m"
  {
#line 525 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 525 "bimap.m"
    MR_Word mercury__bimap__STATE_VARIABLE_BM_7;
#line 525 "bimap.m"
    MR_Word mercury__bimap__Forward0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_0_6, (MR_Integer) 0)));
#line 525 "bimap.m"
    MR_Word mercury__bimap__Reverse0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_0_6, (MR_Integer) 1)));
#line 531 "bimap.m"
    MR_Box mercury__bimap__K_17;

#line 37 "map.opt"
    {
#line 37 "map.opt"
      mercury__bimap__succeeded = mercury__tree234__search_3_p_0(mercury__bimap__TypeInfo_for_V_10, mercury__bimap__TypeInfo_for_K_9, mercury__bimap__Reverse0_16, mercury__bimap__V_5, &mercury__bimap__K_17);
    }
#line 531 "bimap.m"
    if (mercury__bimap__succeeded)
#line 528 "bimap.m"
      {
#line 528 "bimap.m"
        MR_Word mercury__bimap__Forward_18;
#line 528 "bimap.m"
        MR_Word mercury__bimap__Reverse_19;
#line 60 "tree234.opt"
        MR_Word mercury__bimap__V_7_30;
#line 60 "tree234.opt"
        MR_Word mercury__bimap__V_7_37;

#line 60 "tree234.opt"
        {
#line 60 "tree234.opt"
          mercury__tree234__delete_2_4_p_0(mercury__bimap__TypeInfo_for_K_9, mercury__bimap__TypeInfo_for_V_10, mercury__bimap__Forward0_15, mercury__bimap__K_17, &mercury__bimap__Forward_18, &mercury__bimap__V_7_30);
        }
#line 60 "tree234.opt"
        {
#line 60 "tree234.opt"
          mercury__tree234__delete_2_4_p_0(mercury__bimap__TypeInfo_for_V_10, mercury__bimap__TypeInfo_for_K_9, mercury__bimap__Reverse0_16, mercury__bimap__V_5, &mercury__bimap__Reverse_19, &mercury__bimap__V_7_37);
        }
#line 530 "bimap.m"
        {
#line 530 "bimap.m"
          mercury__bimap__STATE_VARIABLE_BM_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 530 "bimap.m"
          MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_7, 0) = ((MR_Box) (mercury__bimap__Forward_18));
#line 530 "bimap.m"
          MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_7, 1) = ((MR_Box) (mercury__bimap__Reverse_19));
#line 530 "bimap.m"
        }
#line 528 "bimap.m"
      }
#line 531 "bimap.m"
    else
#line 530 "bimap.m"
      mercury__bimap__STATE_VARIABLE_BM_7 = mercury__bimap__STATE_VARIABLE_BM_0_6;
#line 525 "bimap.m"
    return mercury__bimap__STATE_VARIABLE_BM_7;
#line 525 "bimap.m"
  }
#line 183 "bimap.m"
}

#line 178 "bimap.m"
void MR_CALL 
mercury__bimap__delete_key_3_p_0(
#line 178 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_14,
#line 178 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_15,
#line 178 "bimap.m"
  MR_Box mercury__bimap__K_4,
#line 178 "bimap.m"
  MR_Word mercury__bimap__STATE_VARIABLE_BM_0_11,
#line 178 "bimap.m"
  MR_Word * mercury__bimap__STATE_VARIABLE_BM_12)
#line 178 "bimap.m"
{
#line 512 "bimap.m"
  {
#line 512 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 512 "bimap.m"
    MR_Word mercury__bimap__Forward0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_0_11, (MR_Integer) 0)));
#line 512 "bimap.m"
    MR_Word mercury__bimap__Reverse0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_0_11, (MR_Integer) 1)));
#line 518 "bimap.m"
    MR_Box mercury__bimap__V_8;

#line 37 "map.opt"
    {
#line 37 "map.opt"
      mercury__bimap__succeeded = mercury__tree234__search_3_p_0(mercury__bimap__TypeInfo_for_K_14, mercury__bimap__TypeInfo_for_V_15, mercury__bimap__Forward0_6, mercury__bimap__K_4, &mercury__bimap__V_8);
    }
#line 518 "bimap.m"
    if (mercury__bimap__succeeded)
#line 515 "bimap.m"
      {
#line 515 "bimap.m"
        MR_Word mercury__bimap__Forward_9;
#line 515 "bimap.m"
        MR_Word mercury__bimap__Reverse_10;
#line 60 "tree234.opt"
        MR_Word mercury__bimap__V_7_25;
#line 60 "tree234.opt"
        MR_Word mercury__bimap__V_7_32;

#line 60 "tree234.opt"
        {
#line 60 "tree234.opt"
          mercury__tree234__delete_2_4_p_0(mercury__bimap__TypeInfo_for_K_14, mercury__bimap__TypeInfo_for_V_15, mercury__bimap__Forward0_6, mercury__bimap__K_4, &mercury__bimap__Forward_9, &mercury__bimap__V_7_25);
        }
#line 60 "tree234.opt"
        {
#line 60 "tree234.opt"
          mercury__tree234__delete_2_4_p_0(mercury__bimap__TypeInfo_for_V_15, mercury__bimap__TypeInfo_for_K_14, mercury__bimap__Reverse0_7, mercury__bimap__V_8, &mercury__bimap__Reverse_10, &mercury__bimap__V_7_32);
        }
#line 517 "bimap.m"
        {
#line 517 "bimap.m"
          MR_Word base;
#line 517 "bimap.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 517 "bimap.m"
          *mercury__bimap__STATE_VARIABLE_BM_12 = base;
#line 517 "bimap.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__bimap__Forward_9));
#line 517 "bimap.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__bimap__Reverse_10));
#line 517 "bimap.m"
        }
#line 515 "bimap.m"
      }
#line 518 "bimap.m"
    else
#line 517 "bimap.m"
      *mercury__bimap__STATE_VARIABLE_BM_12 = mercury__bimap__STATE_VARIABLE_BM_0_11;
#line 512 "bimap.m"
  }
#line 178 "bimap.m"
}

#line 177 "bimap.m"
MR_Word MR_CALL 
mercury__bimap__delete_key_2_f_0(
#line 177 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_9,
#line 177 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_10,
#line 177 "bimap.m"
  MR_Word mercury__bimap__STATE_VARIABLE_BM_0_6,
#line 177 "bimap.m"
  MR_Box mercury__bimap__K_5)
#line 177 "bimap.m"
{
#line 512 "bimap.m"
  {
#line 512 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 512 "bimap.m"
    MR_Word mercury__bimap__STATE_VARIABLE_BM_7;
#line 512 "bimap.m"
    MR_Word mercury__bimap__Forward0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_0_6, (MR_Integer) 0)));
#line 512 "bimap.m"
    MR_Word mercury__bimap__Reverse0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_0_6, (MR_Integer) 1)));
#line 518 "bimap.m"
    MR_Box mercury__bimap__V_17;

#line 37 "map.opt"
    {
#line 37 "map.opt"
      mercury__bimap__succeeded = mercury__tree234__search_3_p_0(mercury__bimap__TypeInfo_for_K_9, mercury__bimap__TypeInfo_for_V_10, mercury__bimap__Forward0_15, mercury__bimap__K_5, &mercury__bimap__V_17);
    }
#line 518 "bimap.m"
    if (mercury__bimap__succeeded)
#line 515 "bimap.m"
      {
#line 515 "bimap.m"
        MR_Word mercury__bimap__Forward_18;
#line 515 "bimap.m"
        MR_Word mercury__bimap__Reverse_19;
#line 60 "tree234.opt"
        MR_Word mercury__bimap__V_7_30;
#line 60 "tree234.opt"
        MR_Word mercury__bimap__V_7_37;

#line 60 "tree234.opt"
        {
#line 60 "tree234.opt"
          mercury__tree234__delete_2_4_p_0(mercury__bimap__TypeInfo_for_K_9, mercury__bimap__TypeInfo_for_V_10, mercury__bimap__Forward0_15, mercury__bimap__K_5, &mercury__bimap__Forward_18, &mercury__bimap__V_7_30);
        }
#line 60 "tree234.opt"
        {
#line 60 "tree234.opt"
          mercury__tree234__delete_2_4_p_0(mercury__bimap__TypeInfo_for_V_10, mercury__bimap__TypeInfo_for_K_9, mercury__bimap__Reverse0_16, mercury__bimap__V_17, &mercury__bimap__Reverse_19, &mercury__bimap__V_7_37);
        }
#line 517 "bimap.m"
        {
#line 517 "bimap.m"
          mercury__bimap__STATE_VARIABLE_BM_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 517 "bimap.m"
          MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_7, 0) = ((MR_Box) (mercury__bimap__Forward_18));
#line 517 "bimap.m"
          MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_7, 1) = ((MR_Box) (mercury__bimap__Reverse_19));
#line 517 "bimap.m"
        }
#line 515 "bimap.m"
      }
#line 518 "bimap.m"
    else
#line 517 "bimap.m"
      mercury__bimap__STATE_VARIABLE_BM_7 = mercury__bimap__STATE_VARIABLE_BM_0_6;
#line 512 "bimap.m"
    return mercury__bimap__STATE_VARIABLE_BM_7;
#line 512 "bimap.m"
  }
#line 177 "bimap.m"
}

#line 171 "bimap.m"
void MR_CALL 
mercury__bimap__set_from_corresponding_lists_4_p_0(
#line 171 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_29,
#line 171 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_30,
#line 171 "bimap.m"
  MR_Word mercury__bimap__HeadVar__1_1,
#line 171 "bimap.m"
  MR_Word mercury__bimap__HeadVar__2_2,
#line 171 "bimap.m"
  MR_Word mercury__bimap__STATE_VARIABLE_BM_0_3,
#line 171 "bimap.m"
  MR_Word * mercury__bimap__STATE_VARIABLE_BM_4)
#line 171 "bimap.m"
{
#line 499 "bimap.m"
  while (MR_TRUE)
#line 499 "bimap.m"
    {
#line 499 "bimap.m"
      /* tailcall optimized into a loop */
#line 499 "bimap.m"
      {
#line 499 "bimap.m"
        MR_bool mercury__bimap__succeeded;

#line 499 "bimap.m"
        if ((mercury__bimap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 499 "bimap.m"
          if ((mercury__bimap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 499 "bimap.m"
            *mercury__bimap__STATE_VARIABLE_BM_4 = mercury__bimap__STATE_VARIABLE_BM_0_3;
#line 499 "bimap.m"
          else
#line 500 "bimap.m"
            {
#line 501 "bimap.m"
              {
#line 501 "bimap.m"
                mercury__require__error_1_p_0((MR_String) "bimap.set_from_corresponding_lists: length mismatch");
#line 501 "bimap.m"
                return;
              }
#line 500 "bimap.m"
            }
#line 499 "bimap.m"
        else
#line 499 "bimap.m"
          {
#line 499 "bimap.m"
            MR_Word mercury__bimap__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bimap__HeadVar__1_1, (MR_Integer) 1)));
#line 499 "bimap.m"
            MR_Box mercury__bimap__V_32_32 = (MR_hl_field(MR_mktag(1), mercury__bimap__HeadVar__1_1, (MR_Integer) 0));

#line 499 "bimap.m"
            if ((mercury__bimap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 502 "bimap.m"
              {
#line 503 "bimap.m"
                {
#line 503 "bimap.m"
                  mercury__require__error_1_p_0((MR_String) "bimap.set_from_corresponding_lists: length mismatch");
#line 503 "bimap.m"
                  return;
                }
#line 502 "bimap.m"
              }
#line 499 "bimap.m"
            else
#line 505 "bimap.m"
              {
#line 505 "bimap.m"
                MR_Box mercury__bimap__Value_22 = (MR_hl_field(MR_mktag(1), mercury__bimap__HeadVar__2_2, (MR_Integer) 0));
#line 505 "bimap.m"
                MR_Word mercury__bimap__Values_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bimap__HeadVar__2_2, (MR_Integer) 1)));
#line 505 "bimap.m"
                MR_Word mercury__bimap__STATE_VARIABLE_BM_27_27;

#line 506 "bimap.m"
                {
#line 506 "bimap.m"
                  mercury__bimap__set_4_p_0(mercury__bimap__TypeInfo_for_K_29, mercury__bimap__TypeInfo_for_V_30, mercury__bimap__V_32_32, mercury__bimap__Value_22, mercury__bimap__STATE_VARIABLE_BM_0_3, &mercury__bimap__STATE_VARIABLE_BM_27_27);
                }
#line 507 "bimap.m"
                /* direct tailcall eliminated */
#line 507 "bimap.m"
                {
#line 507 "bimap.m"
                  MR_Word mercury__bimap__HeadVar__1__tmp_copy_1 = mercury__bimap__V_31_31;
#line 507 "bimap.m"
                  MR_Word mercury__bimap__HeadVar__2__tmp_copy_2 = mercury__bimap__Values_23;
#line 507 "bimap.m"
                  MR_Word mercury__bimap__STATE_VARIABLE_BM_0__tmp_copy_3 = mercury__bimap__STATE_VARIABLE_BM_27_27;

#line 507 "bimap.m"
                  mercury__bimap__STATE_VARIABLE_BM_0_3 = mercury__bimap__STATE_VARIABLE_BM_0__tmp_copy_3;
#line 507 "bimap.m"
                  mercury__bimap__HeadVar__2_2 = mercury__bimap__HeadVar__2__tmp_copy_2;
#line 507 "bimap.m"
                  mercury__bimap__HeadVar__1_1 = mercury__bimap__HeadVar__1__tmp_copy_1;
#line 507 "bimap.m"
                }
#line 507 "bimap.m"
                continue;
#line 505 "bimap.m"
              }
#line 499 "bimap.m"
          }
#line 499 "bimap.m"
      }
#line 499 "bimap.m"
      break;
#line 499 "bimap.m"
    }
#line 171 "bimap.m"
}

#line 169 "bimap.m"
MR_Word MR_CALL 
mercury__bimap__set_from_corresponding_lists_3_f_0(
#line 169 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_9,
#line 169 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_10,
#line 169 "bimap.m"
  MR_Word mercury__bimap__Ks_5,
#line 169 "bimap.m"
  MR_Word mercury__bimap__Vs_6,
#line 169 "bimap.m"
  MR_Word mercury__bimap__BM0_7)
#line 169 "bimap.m"
{
#line 497 "bimap.m"
  {
#line 497 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 497 "bimap.m"
    MR_Word mercury__bimap__BM_8;

#line 497 "bimap.m"
    {
#line 497 "bimap.m"
      mercury__bimap__set_from_corresponding_lists_4_p_0(mercury__bimap__TypeInfo_for_K_9, mercury__bimap__TypeInfo_for_V_10, mercury__bimap__Ks_5, mercury__bimap__Vs_6, mercury__bimap__BM0_7, &mercury__bimap__BM_8);
    }
#line 497 "bimap.m"
    return mercury__bimap__BM_8;
#line 497 "bimap.m"
  }
#line 169 "bimap.m"
}

#line 162 "bimap.m"
void MR_CALL 
mercury__bimap__set_from_assoc_list_3_p_0(
#line 162 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_16,
#line 162 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_17,
#line 162 "bimap.m"
  MR_Word mercury__bimap__HeadVar__1_1,
#line 162 "bimap.m"
  MR_Word mercury__bimap__STATE_VARIABLE_BM_0_2,
#line 162 "bimap.m"
  MR_Word * mercury__bimap__STATE_VARIABLE_BM_3)
#line 162 "bimap.m"
{
#line 491 "bimap.m"
  while (MR_TRUE)
#line 491 "bimap.m"
    {
#line 491 "bimap.m"
      /* tailcall optimized into a loop */
#line 491 "bimap.m"
      {
#line 491 "bimap.m"
        MR_bool mercury__bimap__succeeded;

#line 491 "bimap.m"
        if ((mercury__bimap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 491 "bimap.m"
          *mercury__bimap__STATE_VARIABLE_BM_3 = mercury__bimap__STATE_VARIABLE_BM_0_2;
#line 491 "bimap.m"
        else
#line 492 "bimap.m"
          {
#line 492 "bimap.m"
            MR_Box mercury__bimap__Key_7;
#line 492 "bimap.m"
            MR_Box mercury__bimap__Value_8;
#line 492 "bimap.m"
            MR_Word mercury__bimap__KeysValues_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bimap__HeadVar__1_1, (MR_Integer) 1)));
#line 492 "bimap.m"
            MR_Word mercury__bimap__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bimap__HeadVar__1_1, (MR_Integer) 0)));
#line 492 "bimap.m"
            MR_Word mercury__bimap__STATE_VARIABLE_BM_14_14;

#line 492 "bimap.m"
            mercury__bimap__Key_7 = (MR_hl_field(MR_mktag(0), mercury__bimap__V_13_13, (MR_Integer) 0));
#line 492 "bimap.m"
            mercury__bimap__Value_8 = (MR_hl_field(MR_mktag(0), mercury__bimap__V_13_13, (MR_Integer) 1));
#line 493 "bimap.m"
            {
#line 493 "bimap.m"
              mercury__bimap__set_4_p_0(mercury__bimap__TypeInfo_for_K_16, mercury__bimap__TypeInfo_for_V_17, mercury__bimap__Key_7, mercury__bimap__Value_8, mercury__bimap__STATE_VARIABLE_BM_0_2, &mercury__bimap__STATE_VARIABLE_BM_14_14);
            }
#line 494 "bimap.m"
            /* direct tailcall eliminated */
#line 494 "bimap.m"
            {
#line 494 "bimap.m"
              MR_Word mercury__bimap__HeadVar__1__tmp_copy_1 = mercury__bimap__KeysValues_9;
#line 494 "bimap.m"
              MR_Word mercury__bimap__STATE_VARIABLE_BM_0__tmp_copy_2 = mercury__bimap__STATE_VARIABLE_BM_14_14;

#line 494 "bimap.m"
              mercury__bimap__STATE_VARIABLE_BM_0_2 = mercury__bimap__STATE_VARIABLE_BM_0__tmp_copy_2;
#line 494 "bimap.m"
              mercury__bimap__HeadVar__1_1 = mercury__bimap__HeadVar__1__tmp_copy_1;
#line 494 "bimap.m"
            }
#line 494 "bimap.m"
            continue;
#line 492 "bimap.m"
          }
#line 491 "bimap.m"
      }
#line 491 "bimap.m"
      break;
#line 491 "bimap.m"
    }
#line 162 "bimap.m"
}

#line 160 "bimap.m"
MR_Word MR_CALL 
mercury__bimap__set_from_assoc_list_2_f_0(
#line 160 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_7,
#line 160 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_8,
#line 160 "bimap.m"
  MR_Word mercury__bimap__KVs_4,
#line 160 "bimap.m"
  MR_Word mercury__bimap__BM0_5)
#line 160 "bimap.m"
{
#line 489 "bimap.m"
  {
#line 489 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 489 "bimap.m"
    MR_Word mercury__bimap__BM_6;

#line 489 "bimap.m"
    {
#line 489 "bimap.m"
      mercury__bimap__set_from_assoc_list_3_p_0(mercury__bimap__TypeInfo_for_K_7, mercury__bimap__TypeInfo_for_V_8, mercury__bimap__KVs_4, mercury__bimap__BM0_5, &mercury__bimap__BM_6);
    }
#line 489 "bimap.m"
    return mercury__bimap__BM_6;
#line 489 "bimap.m"
  }
#line 160 "bimap.m"
}

#line 153 "bimap.m"
void MR_CALL 
mercury__bimap__det_insert_from_corresponding_lists_4_p_0(
#line 153 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_29,
#line 153 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_30,
#line 153 "bimap.m"
  MR_Word mercury__bimap__HeadVar__1_1,
#line 153 "bimap.m"
  MR_Word mercury__bimap__HeadVar__2_2,
#line 153 "bimap.m"
  MR_Word mercury__bimap__STATE_VARIABLE_BM_0_3,
#line 153 "bimap.m"
  MR_Word * mercury__bimap__STATE_VARIABLE_BM_4)
#line 153 "bimap.m"
{
#line 478 "bimap.m"
  while (MR_TRUE)
#line 478 "bimap.m"
    {
#line 478 "bimap.m"
      /* tailcall optimized into a loop */
#line 478 "bimap.m"
      {
#line 478 "bimap.m"
        MR_bool mercury__bimap__succeeded;

#line 478 "bimap.m"
        if ((mercury__bimap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 478 "bimap.m"
          if ((mercury__bimap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 478 "bimap.m"
            *mercury__bimap__STATE_VARIABLE_BM_4 = mercury__bimap__STATE_VARIABLE_BM_0_3;
#line 478 "bimap.m"
          else
#line 479 "bimap.m"
            {
#line 480 "bimap.m"
              {
#line 480 "bimap.m"
                mercury__require__error_1_p_0((MR_String) "bimap.det_insert_from_corresponding_lists: length mismatch");
#line 480 "bimap.m"
                return;
              }
#line 479 "bimap.m"
            }
#line 478 "bimap.m"
        else
#line 478 "bimap.m"
          {
#line 478 "bimap.m"
            MR_Word mercury__bimap__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bimap__HeadVar__1_1, (MR_Integer) 1)));
#line 478 "bimap.m"
            MR_Box mercury__bimap__V_32_32 = (MR_hl_field(MR_mktag(1), mercury__bimap__HeadVar__1_1, (MR_Integer) 0));

#line 478 "bimap.m"
            if ((mercury__bimap__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 481 "bimap.m"
              {
#line 482 "bimap.m"
                {
#line 482 "bimap.m"
                  mercury__require__error_1_p_0((MR_String) "bimap.det_insert_from_corresponding_lists: length mismatch");
#line 482 "bimap.m"
                  return;
                }
#line 481 "bimap.m"
              }
#line 478 "bimap.m"
            else
#line 484 "bimap.m"
              {
#line 484 "bimap.m"
                MR_Box mercury__bimap__Value_22 = (MR_hl_field(MR_mktag(1), mercury__bimap__HeadVar__2_2, (MR_Integer) 0));
#line 484 "bimap.m"
                MR_Word mercury__bimap__Values_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bimap__HeadVar__2_2, (MR_Integer) 1)));
#line 484 "bimap.m"
                MR_Word mercury__bimap__STATE_VARIABLE_BM_27_27;
#line 484 "bimap.m"
                MR_Word mercury__bimap__Forward0_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_0_3, (MR_Integer) 0)));
#line 484 "bimap.m"
                MR_Word mercury__bimap__Reverse0_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_0_3, (MR_Integer) 1)));
#line 484 "bimap.m"
                MR_Word mercury__bimap__Forward_40;
#line 484 "bimap.m"
                MR_Word mercury__bimap__Reverse_41;

#line 415 "bimap.m"
                {
#line 415 "bimap.m"
                  mercury__map__det_insert_4_p_0(mercury__bimap__TypeInfo_for_K_29, mercury__bimap__TypeInfo_for_V_30, mercury__bimap__V_32_32, mercury__bimap__Value_22, mercury__bimap__Forward0_38, &mercury__bimap__Forward_40);
                }
#line 416 "bimap.m"
                {
#line 416 "bimap.m"
                  mercury__map__det_insert_4_p_0(mercury__bimap__TypeInfo_for_V_30, mercury__bimap__TypeInfo_for_K_29, mercury__bimap__Value_22, mercury__bimap__V_32_32, mercury__bimap__Reverse0_39, &mercury__bimap__Reverse_41);
                }
#line 417 "bimap.m"
                {
#line 417 "bimap.m"
                  mercury__bimap__STATE_VARIABLE_BM_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 417 "bimap.m"
                  MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_27_27, 0) = ((MR_Box) (mercury__bimap__Forward_40));
#line 417 "bimap.m"
                  MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_27_27, 1) = ((MR_Box) (mercury__bimap__Reverse_41));
#line 417 "bimap.m"
                }
#line 486 "bimap.m"
                /* direct tailcall eliminated */
#line 486 "bimap.m"
                {
#line 486 "bimap.m"
                  MR_Word mercury__bimap__HeadVar__1__tmp_copy_1 = mercury__bimap__V_31_31;
#line 486 "bimap.m"
                  MR_Word mercury__bimap__HeadVar__2__tmp_copy_2 = mercury__bimap__Values_23;
#line 486 "bimap.m"
                  MR_Word mercury__bimap__STATE_VARIABLE_BM_0__tmp_copy_3 = mercury__bimap__STATE_VARIABLE_BM_27_27;

#line 486 "bimap.m"
                  mercury__bimap__STATE_VARIABLE_BM_0_3 = mercury__bimap__STATE_VARIABLE_BM_0__tmp_copy_3;
#line 486 "bimap.m"
                  mercury__bimap__HeadVar__2_2 = mercury__bimap__HeadVar__2__tmp_copy_2;
#line 486 "bimap.m"
                  mercury__bimap__HeadVar__1_1 = mercury__bimap__HeadVar__1__tmp_copy_1;
#line 486 "bimap.m"
                }
#line 486 "bimap.m"
                continue;
#line 484 "bimap.m"
              }
#line 478 "bimap.m"
          }
#line 478 "bimap.m"
      }
#line 478 "bimap.m"
      break;
#line 478 "bimap.m"
    }
#line 153 "bimap.m"
}

#line 151 "bimap.m"
MR_Word MR_CALL 
mercury__bimap__det_insert_from_corresponding_lists_3_f_0(
#line 151 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_11,
#line 151 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_12,
#line 151 "bimap.m"
  MR_Word mercury__bimap__Ks_5,
#line 151 "bimap.m"
  MR_Word mercury__bimap__Vs_6,
#line 151 "bimap.m"
  MR_Word mercury__bimap__STATE_VARIABLE_BM_0_8)
#line 151 "bimap.m"
{
#line 476 "bimap.m"
  {
#line 476 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 476 "bimap.m"
    MR_Word mercury__bimap__STATE_VARIABLE_BM_9;

#line 476 "bimap.m"
    {
#line 476 "bimap.m"
      mercury__bimap__det_insert_from_corresponding_lists_4_p_0(mercury__bimap__TypeInfo_for_K_11, mercury__bimap__TypeInfo_for_V_12, mercury__bimap__Ks_5, mercury__bimap__Vs_6, mercury__bimap__STATE_VARIABLE_BM_0_8, &mercury__bimap__STATE_VARIABLE_BM_9);
    }
#line 476 "bimap.m"
    return mercury__bimap__STATE_VARIABLE_BM_9;
#line 476 "bimap.m"
  }
#line 151 "bimap.m"
}

#line 144 "bimap.m"
void MR_CALL 
mercury__bimap__det_insert_from_assoc_list_3_p_0(
#line 144 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_16,
#line 144 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_17,
#line 144 "bimap.m"
  MR_Word mercury__bimap__HeadVar__1_1,
#line 144 "bimap.m"
  MR_Word mercury__bimap__STATE_VARIABLE_BM_0_2,
#line 144 "bimap.m"
  MR_Word * mercury__bimap__STATE_VARIABLE_BM_3)
#line 144 "bimap.m"
{
#line 470 "bimap.m"
  while (MR_TRUE)
#line 470 "bimap.m"
    {
#line 470 "bimap.m"
      /* tailcall optimized into a loop */
#line 470 "bimap.m"
      {
#line 470 "bimap.m"
        MR_bool mercury__bimap__succeeded;

#line 470 "bimap.m"
        if ((mercury__bimap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 470 "bimap.m"
          *mercury__bimap__STATE_VARIABLE_BM_3 = mercury__bimap__STATE_VARIABLE_BM_0_2;
#line 470 "bimap.m"
        else
#line 471 "bimap.m"
          {
#line 471 "bimap.m"
            MR_Box mercury__bimap__Key_7;
#line 471 "bimap.m"
            MR_Box mercury__bimap__Value_8;
#line 471 "bimap.m"
            MR_Word mercury__bimap__KeysValues_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bimap__HeadVar__1_1, (MR_Integer) 1)));
#line 471 "bimap.m"
            MR_Word mercury__bimap__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bimap__HeadVar__1_1, (MR_Integer) 0)));
#line 471 "bimap.m"
            MR_Word mercury__bimap__STATE_VARIABLE_BM_14_14;
#line 471 "bimap.m"
            MR_Word mercury__bimap__Forward0_23;
#line 471 "bimap.m"
            MR_Word mercury__bimap__Reverse0_24;
#line 471 "bimap.m"
            MR_Word mercury__bimap__Forward_25;
#line 471 "bimap.m"
            MR_Word mercury__bimap__Reverse_26;

#line 471 "bimap.m"
            mercury__bimap__Key_7 = (MR_hl_field(MR_mktag(0), mercury__bimap__V_13_13, (MR_Integer) 0));
#line 471 "bimap.m"
            mercury__bimap__Value_8 = (MR_hl_field(MR_mktag(0), mercury__bimap__V_13_13, (MR_Integer) 1));
#line 414 "bimap.m"
            mercury__bimap__Forward0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_0_2, (MR_Integer) 0)));
#line 414 "bimap.m"
            mercury__bimap__Reverse0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_0_2, (MR_Integer) 1)));
#line 415 "bimap.m"
            {
#line 415 "bimap.m"
              mercury__map__det_insert_4_p_0(mercury__bimap__TypeInfo_for_K_16, mercury__bimap__TypeInfo_for_V_17, mercury__bimap__Key_7, mercury__bimap__Value_8, mercury__bimap__Forward0_23, &mercury__bimap__Forward_25);
            }
#line 416 "bimap.m"
            {
#line 416 "bimap.m"
              mercury__map__det_insert_4_p_0(mercury__bimap__TypeInfo_for_V_17, mercury__bimap__TypeInfo_for_K_16, mercury__bimap__Value_8, mercury__bimap__Key_7, mercury__bimap__Reverse0_24, &mercury__bimap__Reverse_26);
            }
#line 417 "bimap.m"
            {
#line 417 "bimap.m"
              mercury__bimap__STATE_VARIABLE_BM_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 417 "bimap.m"
              MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_14_14, 0) = ((MR_Box) (mercury__bimap__Forward_25));
#line 417 "bimap.m"
              MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_14_14, 1) = ((MR_Box) (mercury__bimap__Reverse_26));
#line 417 "bimap.m"
            }
#line 473 "bimap.m"
            /* direct tailcall eliminated */
#line 473 "bimap.m"
            {
#line 473 "bimap.m"
              MR_Word mercury__bimap__HeadVar__1__tmp_copy_1 = mercury__bimap__KeysValues_9;
#line 473 "bimap.m"
              MR_Word mercury__bimap__STATE_VARIABLE_BM_0__tmp_copy_2 = mercury__bimap__STATE_VARIABLE_BM_14_14;

#line 473 "bimap.m"
              mercury__bimap__STATE_VARIABLE_BM_0_2 = mercury__bimap__STATE_VARIABLE_BM_0__tmp_copy_2;
#line 473 "bimap.m"
              mercury__bimap__HeadVar__1_1 = mercury__bimap__HeadVar__1__tmp_copy_1;
#line 473 "bimap.m"
            }
#line 473 "bimap.m"
            continue;
#line 471 "bimap.m"
          }
#line 470 "bimap.m"
      }
#line 470 "bimap.m"
      break;
#line 470 "bimap.m"
    }
#line 144 "bimap.m"
}

#line 142 "bimap.m"
MR_Word MR_CALL 
mercury__bimap__det_insert_from_assoc_list_2_f_0(
#line 142 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_9,
#line 142 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_10,
#line 142 "bimap.m"
  MR_Word mercury__bimap__KVs_4,
#line 142 "bimap.m"
  MR_Word mercury__bimap__STATE_VARIABLE_BM_0_6)
#line 142 "bimap.m"
{
#line 468 "bimap.m"
  {
#line 468 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 468 "bimap.m"
    MR_Word mercury__bimap__STATE_VARIABLE_BM_7;

#line 468 "bimap.m"
    {
#line 468 "bimap.m"
      mercury__bimap__det_insert_from_assoc_list_3_p_0(mercury__bimap__TypeInfo_for_K_9, mercury__bimap__TypeInfo_for_V_10, mercury__bimap__KVs_4, mercury__bimap__STATE_VARIABLE_BM_0_6, &mercury__bimap__STATE_VARIABLE_BM_7);
    }
#line 468 "bimap.m"
    return mercury__bimap__STATE_VARIABLE_BM_7;
#line 468 "bimap.m"
  }
#line 142 "bimap.m"
}

#line 136 "bimap.m"
MR_bool MR_CALL 
mercury__bimap__insert_from_assoc_list_3_p_0(
#line 136 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_16,
#line 136 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_17,
#line 136 "bimap.m"
  MR_Word mercury__bimap__HeadVar__1_1,
#line 136 "bimap.m"
  MR_Word mercury__bimap__STATE_VARIABLE_BM_0_2,
#line 136 "bimap.m"
  MR_Word * mercury__bimap__STATE_VARIABLE_BM_3)
#line 136 "bimap.m"
{
#line 462 "bimap.m"
  while (MR_TRUE)
#line 462 "bimap.m"
    {
#line 462 "bimap.m"
      /* tailcall optimized into a loop */
#line 462 "bimap.m"
      {
#line 462 "bimap.m"
        MR_bool mercury__bimap__succeeded;

#line 462 "bimap.m"
        if ((mercury__bimap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 462 "bimap.m"
          {
#line 462 "bimap.m"
            *mercury__bimap__STATE_VARIABLE_BM_3 = mercury__bimap__STATE_VARIABLE_BM_0_2;
#line 462 "bimap.m"
            mercury__bimap__succeeded = MR_TRUE;
#line 462 "bimap.m"
          }
#line 462 "bimap.m"
        else
#line 463 "bimap.m"
          {
#line 463 "bimap.m"
            MR_Box mercury__bimap__Key_7;
#line 463 "bimap.m"
            MR_Box mercury__bimap__Value_8;
#line 463 "bimap.m"
            MR_Word mercury__bimap__KeyValues_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bimap__HeadVar__1_1, (MR_Integer) 1)));
#line 463 "bimap.m"
            MR_Word mercury__bimap__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bimap__HeadVar__1_1, (MR_Integer) 0)));
#line 463 "bimap.m"
            MR_Word mercury__bimap__STATE_VARIABLE_BM_14_14;
#line 463 "bimap.m"
            MR_Word mercury__bimap__STATE_VARIABLE_Forward_0_22;
#line 463 "bimap.m"
            MR_Word mercury__bimap__STATE_VARIABLE_Reverse_0_23;
#line 463 "bimap.m"
            MR_Word mercury__bimap__STATE_VARIABLE_Forward_24;
#line 463 "bimap.m"
            MR_Word mercury__bimap__STATE_VARIABLE_Reverse_25;

#line 463 "bimap.m"
            mercury__bimap__Key_7 = (MR_hl_field(MR_mktag(0), mercury__bimap__V_13_13, (MR_Integer) 0));
#line 463 "bimap.m"
            mercury__bimap__Value_8 = (MR_hl_field(MR_mktag(0), mercury__bimap__V_13_13, (MR_Integer) 1));
#line 406 "bimap.m"
            mercury__bimap__STATE_VARIABLE_Forward_0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_0_2, (MR_Integer) 0)));
#line 406 "bimap.m"
            mercury__bimap__STATE_VARIABLE_Reverse_0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_0_2, (MR_Integer) 1)));
#line 53 "map.opt"
            {
#line 53 "map.opt"
              mercury__bimap__succeeded = mercury__tree234__insert_4_p_0(mercury__bimap__TypeInfo_for_K_16, mercury__bimap__TypeInfo_for_V_17, mercury__bimap__Key_7, mercury__bimap__Value_8, mercury__bimap__STATE_VARIABLE_Forward_0_22, &mercury__bimap__STATE_VARIABLE_Forward_24);
            }
#line 463 "bimap.m"
            if (mercury__bimap__succeeded)
#line 463 "bimap.m"
              {
#line 53 "map.opt"
                {
#line 53 "map.opt"
                  mercury__bimap__succeeded = mercury__tree234__insert_4_p_0(mercury__bimap__TypeInfo_for_V_17, mercury__bimap__TypeInfo_for_K_16, mercury__bimap__Value_8, mercury__bimap__Key_7, mercury__bimap__STATE_VARIABLE_Reverse_0_23, &mercury__bimap__STATE_VARIABLE_Reverse_25);
                }
#line 463 "bimap.m"
                if (mercury__bimap__succeeded)
#line 463 "bimap.m"
                  {
#line 406 "bimap.m"
                    {
#line 406 "bimap.m"
                      mercury__bimap__STATE_VARIABLE_BM_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 406 "bimap.m"
                      MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_14_14, 0) = ((MR_Box) (mercury__bimap__STATE_VARIABLE_Forward_24));
#line 406 "bimap.m"
                      MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_14_14, 1) = ((MR_Box) (mercury__bimap__STATE_VARIABLE_Reverse_25));
#line 406 "bimap.m"
                    }
#line 465 "bimap.m"
                    /* direct tailcall eliminated */
#line 465 "bimap.m"
                    {
#line 465 "bimap.m"
                      MR_Word mercury__bimap__HeadVar__1__tmp_copy_1 = mercury__bimap__KeyValues_9;
#line 465 "bimap.m"
                      MR_Word mercury__bimap__STATE_VARIABLE_BM_0__tmp_copy_2 = mercury__bimap__STATE_VARIABLE_BM_14_14;

#line 465 "bimap.m"
                      mercury__bimap__STATE_VARIABLE_BM_0_2 = mercury__bimap__STATE_VARIABLE_BM_0__tmp_copy_2;
#line 465 "bimap.m"
                      mercury__bimap__HeadVar__1_1 = mercury__bimap__HeadVar__1__tmp_copy_1;
#line 465 "bimap.m"
                    }
#line 465 "bimap.m"
                    continue;
#line 463 "bimap.m"
                  }
#line 463 "bimap.m"
              }
#line 463 "bimap.m"
          }
#line 462 "bimap.m"
        return mercury__bimap__succeeded;
#line 462 "bimap.m"
      }
#line 462 "bimap.m"
      break;
#line 462 "bimap.m"
    }
#line 136 "bimap.m"
}

#line 134 "bimap.m"
MR_bool MR_CALL 
mercury__bimap__insert_from_assoc_list_2_f_0(
#line 134 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_7,
#line 134 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_8,
#line 134 "bimap.m"
  MR_Word mercury__bimap__List_4,
#line 134 "bimap.m"
  MR_Word mercury__bimap__BM0_5,
#line 134 "bimap.m"
  MR_Word * mercury__bimap__BM_6)
#line 134 "bimap.m"
{
#line 460 "bimap.m"
  {
#line 460 "bimap.m"
    MR_bool mercury__bimap__succeeded;

#line 460 "bimap.m"
    {
#line 460 "bimap.m"
      return mercury__bimap__succeeded = mercury__bimap__insert_from_assoc_list_3_p_0(mercury__bimap__TypeInfo_for_K_7, mercury__bimap__TypeInfo_for_V_8, mercury__bimap__List_4, mercury__bimap__BM0_5, mercury__bimap__BM_6);
    }
#line 460 "bimap.m"
    return mercury__bimap__succeeded;
#line 460 "bimap.m"
  }
#line 134 "bimap.m"
}

#line 128 "bimap.m"
void MR_CALL 
mercury__bimap__set_4_p_0(
#line 128 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_21,
#line 128 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_22,
#line 128 "bimap.m"
  MR_Box mercury__bimap__K_5,
#line 128 "bimap.m"
  MR_Box mercury__bimap__V_6,
#line 128 "bimap.m"
  MR_Word mercury__bimap__HeadVar__3_3,
#line 128 "bimap.m"
  MR_Word * mercury__bimap__HeadVar__4_4)
#line 128 "bimap.m"
{
#line 437 "bimap.m"
  {
#line 437 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 437 "bimap.m"
    MR_Word mercury__bimap__STATE_VARIABLE_Forward_0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__3_3, (MR_Integer) 0)));
#line 437 "bimap.m"
    MR_Word mercury__bimap__STATE_VARIABLE_Reverse_0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__3_3, (MR_Integer) 1)));
#line 437 "bimap.m"
    MR_Word mercury__bimap__STATE_VARIABLE_Forward_13;
#line 437 "bimap.m"
    MR_Word mercury__bimap__STATE_VARIABLE_Reverse_14;
#line 437 "bimap.m"
    MR_Word mercury__bimap__STATE_VARIABLE_Forward_15_15;
#line 437 "bimap.m"
    MR_Word mercury__bimap__STATE_VARIABLE_Reverse_16_16;
#line 445 "bimap.m"
    MR_Box mercury__bimap__KVal_9;
#line 455 "bimap.m"
    MR_Box mercury__bimap__VKey_10;

#line 37 "map.opt"
    {
#line 37 "map.opt"
      mercury__bimap__succeeded = mercury__tree234__search_3_p_0(mercury__bimap__TypeInfo_for_K_21, mercury__bimap__TypeInfo_for_V_22, mercury__bimap__STATE_VARIABLE_Forward_0_11, mercury__bimap__K_5, &mercury__bimap__KVal_9);
    }
#line 445 "bimap.m"
    if (mercury__bimap__succeeded)
#line 442 "bimap.m"
      {
#line 439 "bimap.m"
        {
#line 439 "bimap.m"
          mercury__bimap__succeeded = mercury__builtin__unify_2_p_0(mercury__bimap__TypeInfo_for_V_22, mercury__bimap__V_6, mercury__bimap__KVal_9);
        }
#line 439 "bimap.m"
        mercury__bimap__succeeded = !(mercury__bimap__succeeded);
#line 442 "bimap.m"
        if (mercury__bimap__succeeded)
#line 440 "bimap.m"
          {
#line 60 "tree234.opt"
            MR_Word mercury__bimap__V_7_32;

#line 440 "bimap.m"
            {
#line 440 "bimap.m"
              mercury__map__det_update_4_p_0(mercury__bimap__TypeInfo_for_K_21, mercury__bimap__TypeInfo_for_V_22, mercury__bimap__K_5, mercury__bimap__V_6, mercury__bimap__STATE_VARIABLE_Forward_0_11, &mercury__bimap__STATE_VARIABLE_Forward_15_15);
            }
#line 60 "tree234.opt"
            {
#line 60 "tree234.opt"
              mercury__tree234__delete_2_4_p_0(mercury__bimap__TypeInfo_for_V_22, mercury__bimap__TypeInfo_for_K_21, mercury__bimap__STATE_VARIABLE_Reverse_0_12, mercury__bimap__KVal_9, &mercury__bimap__STATE_VARIABLE_Reverse_16_16, &mercury__bimap__V_7_32);
            }
#line 440 "bimap.m"
          }
#line 442 "bimap.m"
        else
#line 443 "bimap.m"
          {
#line 443 "bimap.m"
            mercury__bimap__STATE_VARIABLE_Reverse_16_16 = mercury__bimap__STATE_VARIABLE_Reverse_0_12;
#line 443 "bimap.m"
            mercury__bimap__STATE_VARIABLE_Forward_15_15 = mercury__bimap__STATE_VARIABLE_Forward_0_11;
#line 443 "bimap.m"
          }
#line 442 "bimap.m"
      }
#line 445 "bimap.m"
    else
#line 446 "bimap.m"
      {
#line 446 "bimap.m"
        {
#line 446 "bimap.m"
          mercury__map__det_insert_4_p_0(mercury__bimap__TypeInfo_for_K_21, mercury__bimap__TypeInfo_for_V_22, mercury__bimap__K_5, mercury__bimap__V_6, mercury__bimap__STATE_VARIABLE_Forward_0_11, &mercury__bimap__STATE_VARIABLE_Forward_15_15);
        }
#line 446 "bimap.m"
        mercury__bimap__STATE_VARIABLE_Reverse_16_16 = mercury__bimap__STATE_VARIABLE_Reverse_0_12;
#line 446 "bimap.m"
      }
#line 37 "map.opt"
    {
#line 37 "map.opt"
      mercury__bimap__succeeded = mercury__tree234__search_3_p_0(mercury__bimap__TypeInfo_for_V_22, mercury__bimap__TypeInfo_for_K_21, mercury__bimap__STATE_VARIABLE_Reverse_16_16, mercury__bimap__V_6, &mercury__bimap__VKey_10);
    }
#line 455 "bimap.m"
    if (mercury__bimap__succeeded)
#line 452 "bimap.m"
      {
#line 449 "bimap.m"
        {
#line 449 "bimap.m"
          mercury__bimap__succeeded = mercury__builtin__unify_2_p_0(mercury__bimap__TypeInfo_for_K_21, mercury__bimap__K_5, mercury__bimap__VKey_10);
        }
#line 449 "bimap.m"
        mercury__bimap__succeeded = !(mercury__bimap__succeeded);
#line 452 "bimap.m"
        if (mercury__bimap__succeeded)
#line 450 "bimap.m"
          {
#line 60 "tree234.opt"
            MR_Word mercury__bimap__V_7_42;

#line 450 "bimap.m"
            {
#line 450 "bimap.m"
              mercury__map__det_update_4_p_0(mercury__bimap__TypeInfo_for_V_22, mercury__bimap__TypeInfo_for_K_21, mercury__bimap__V_6, mercury__bimap__K_5, mercury__bimap__STATE_VARIABLE_Reverse_16_16, &mercury__bimap__STATE_VARIABLE_Reverse_14);
            }
#line 60 "tree234.opt"
            {
#line 60 "tree234.opt"
              mercury__tree234__delete_2_4_p_0(mercury__bimap__TypeInfo_for_K_21, mercury__bimap__TypeInfo_for_V_22, mercury__bimap__STATE_VARIABLE_Forward_15_15, mercury__bimap__VKey_10, &mercury__bimap__STATE_VARIABLE_Forward_13, &mercury__bimap__V_7_42);
            }
#line 450 "bimap.m"
          }
#line 452 "bimap.m"
        else
#line 453 "bimap.m"
          {
#line 453 "bimap.m"
            mercury__bimap__STATE_VARIABLE_Reverse_14 = mercury__bimap__STATE_VARIABLE_Reverse_16_16;
#line 453 "bimap.m"
            mercury__bimap__STATE_VARIABLE_Forward_13 = mercury__bimap__STATE_VARIABLE_Forward_15_15;
#line 453 "bimap.m"
          }
#line 452 "bimap.m"
      }
#line 455 "bimap.m"
    else
#line 456 "bimap.m"
      {
#line 456 "bimap.m"
        {
#line 456 "bimap.m"
          mercury__map__det_insert_4_p_0(mercury__bimap__TypeInfo_for_V_22, mercury__bimap__TypeInfo_for_K_21, mercury__bimap__V_6, mercury__bimap__K_5, mercury__bimap__STATE_VARIABLE_Reverse_16_16, &mercury__bimap__STATE_VARIABLE_Reverse_14);
        }
#line 456 "bimap.m"
        mercury__bimap__STATE_VARIABLE_Forward_13 = mercury__bimap__STATE_VARIABLE_Forward_15_15;
#line 456 "bimap.m"
      }
#line 437 "bimap.m"
    {
#line 437 "bimap.m"
      MR_Word base;
#line 437 "bimap.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 437 "bimap.m"
      *mercury__bimap__HeadVar__4_4 = base;
#line 437 "bimap.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__bimap__STATE_VARIABLE_Forward_13));
#line 437 "bimap.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__bimap__STATE_VARIABLE_Reverse_14));
#line 437 "bimap.m"
    }
#line 437 "bimap.m"
  }
#line 128 "bimap.m"
}

#line 127 "bimap.m"
MR_Word MR_CALL 
mercury__bimap__set_3_f_0(
#line 127 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_11,
#line 127 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_12,
#line 127 "bimap.m"
  MR_Word mercury__bimap__STATE_VARIABLE_BM_0_8,
#line 127 "bimap.m"
  MR_Box mercury__bimap__K_6,
#line 127 "bimap.m"
  MR_Box mercury__bimap__V_7)
#line 127 "bimap.m"
{
#line 435 "bimap.m"
  {
#line 435 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 435 "bimap.m"
    MR_Word mercury__bimap__STATE_VARIABLE_BM_9;

#line 435 "bimap.m"
    {
#line 435 "bimap.m"
      mercury__bimap__set_4_p_0(mercury__bimap__TypeInfo_for_K_11, mercury__bimap__TypeInfo_for_V_12, mercury__bimap__K_6, mercury__bimap__V_7, mercury__bimap__STATE_VARIABLE_BM_0_8, &mercury__bimap__STATE_VARIABLE_BM_9);
    }
#line 435 "bimap.m"
    return mercury__bimap__STATE_VARIABLE_BM_9;
#line 435 "bimap.m"
  }
#line 127 "bimap.m"
}

#line 118 "bimap.m"
void MR_CALL 
mercury__bimap__search_insert_5_p_0(
#line 118 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_18,
#line 118 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_19,
#line 118 "bimap.m"
  MR_Box mercury__bimap__K_6,
#line 118 "bimap.m"
  MR_Box mercury__bimap__V_7,
#line 118 "bimap.m"
  MR_Word * mercury__bimap__MaybeOldV_8,
#line 118 "bimap.m"
  MR_Word mercury__bimap__STATE_VARIABLE_Bimap_0_15,
#line 118 "bimap.m"
  MR_Word * mercury__bimap__STATE_VARIABLE_Bimap_16)
#line 118 "bimap.m"
{
#line 419 "bimap.m"
  {
#line 419 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 419 "bimap.m"
    MR_Word mercury__bimap__Forward0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_Bimap_0_15, (MR_Integer) 0)));
#line 419 "bimap.m"
    MR_Word mercury__bimap__Reverse0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_Bimap_0_15, (MR_Integer) 1)));
#line 419 "bimap.m"
    MR_Word mercury__bimap__Forward_12;

#line 71 "map.opt"
    {
#line 71 "map.opt"
      mercury__tree234__search_insert_5_p_0(mercury__bimap__TypeInfo_for_K_18, mercury__bimap__TypeInfo_for_V_19, mercury__bimap__K_6, mercury__bimap__V_7, mercury__bimap__MaybeOldV_8, mercury__bimap__Forward0_10, &mercury__bimap__Forward_12);
    }
#line 426 "bimap.m"
    if ((*mercury__bimap__MaybeOldV_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 427 "bimap.m"
      {
#line 427 "bimap.m"
        MR_Word mercury__bimap__Reverse_14;

#line 430 "bimap.m"
        {
#line 430 "bimap.m"
          mercury__map__det_insert_4_p_0(mercury__bimap__TypeInfo_for_V_19, mercury__bimap__TypeInfo_for_K_18, mercury__bimap__V_7, mercury__bimap__K_6, mercury__bimap__Reverse0_11, &mercury__bimap__Reverse_14);
        }
#line 431 "bimap.m"
        {
#line 431 "bimap.m"
          MR_Word base;
#line 431 "bimap.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 431 "bimap.m"
          *mercury__bimap__STATE_VARIABLE_Bimap_16 = base;
#line 431 "bimap.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__bimap__Forward_12));
#line 431 "bimap.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__bimap__Reverse_14));
#line 431 "bimap.m"
        }
#line 427 "bimap.m"
      }
#line 426 "bimap.m"
    else
#line 423 "bimap.m"
      *mercury__bimap__STATE_VARIABLE_Bimap_16 = mercury__bimap__STATE_VARIABLE_Bimap_0_15;
#line 419 "bimap.m"
  }
#line 118 "bimap.m"
}

#line 107 "bimap.m"
void MR_CALL 
mercury__bimap__det_insert_4_p_0(
#line 107 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_15,
#line 107 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_16,
#line 107 "bimap.m"
  MR_Box mercury__bimap__K_5,
#line 107 "bimap.m"
  MR_Box mercury__bimap__V_6,
#line 107 "bimap.m"
  MR_Word mercury__bimap__STATE_VARIABLE_Bimap_0_12,
#line 107 "bimap.m"
  MR_Word * mercury__bimap__STATE_VARIABLE_Bimap_13)
#line 107 "bimap.m"
{
#line 413 "bimap.m"
  {
#line 413 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 413 "bimap.m"
    MR_Word mercury__bimap__Forward0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_Bimap_0_12, (MR_Integer) 0)));
#line 413 "bimap.m"
    MR_Word mercury__bimap__Reverse0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_Bimap_0_12, (MR_Integer) 1)));
#line 413 "bimap.m"
    MR_Word mercury__bimap__Forward_10;
#line 413 "bimap.m"
    MR_Word mercury__bimap__Reverse_11;

#line 415 "bimap.m"
    {
#line 415 "bimap.m"
      mercury__map__det_insert_4_p_0(mercury__bimap__TypeInfo_for_K_15, mercury__bimap__TypeInfo_for_V_16, mercury__bimap__K_5, mercury__bimap__V_6, mercury__bimap__Forward0_8, &mercury__bimap__Forward_10);
    }
#line 416 "bimap.m"
    {
#line 416 "bimap.m"
      mercury__map__det_insert_4_p_0(mercury__bimap__TypeInfo_for_V_16, mercury__bimap__TypeInfo_for_K_15, mercury__bimap__V_6, mercury__bimap__K_5, mercury__bimap__Reverse0_9, &mercury__bimap__Reverse_11);
    }
#line 417 "bimap.m"
    {
#line 417 "bimap.m"
      MR_Word base;
#line 417 "bimap.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 417 "bimap.m"
      *mercury__bimap__STATE_VARIABLE_Bimap_13 = base;
#line 417 "bimap.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__bimap__Forward_10));
#line 417 "bimap.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__bimap__Reverse_11));
#line 417 "bimap.m"
    }
#line 413 "bimap.m"
  }
#line 107 "bimap.m"
}

#line 106 "bimap.m"
MR_Word MR_CALL 
mercury__bimap__det_insert_3_f_0(
#line 106 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_11,
#line 106 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_12,
#line 106 "bimap.m"
  MR_Word mercury__bimap__STATE_VARIABLE_BM_0_8,
#line 106 "bimap.m"
  MR_Box mercury__bimap__K_6,
#line 106 "bimap.m"
  MR_Box mercury__bimap__V_7)
#line 106 "bimap.m"
{
#line 413 "bimap.m"
  {
#line 413 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 413 "bimap.m"
    MR_Word mercury__bimap__STATE_VARIABLE_BM_9;
#line 413 "bimap.m"
    MR_Word mercury__bimap__Forward0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_0_8, (MR_Integer) 0)));
#line 413 "bimap.m"
    MR_Word mercury__bimap__Reverse0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_0_8, (MR_Integer) 1)));
#line 413 "bimap.m"
    MR_Word mercury__bimap__Forward_20;
#line 413 "bimap.m"
    MR_Word mercury__bimap__Reverse_21;

#line 415 "bimap.m"
    {
#line 415 "bimap.m"
      mercury__map__det_insert_4_p_0(mercury__bimap__TypeInfo_for_K_11, mercury__bimap__TypeInfo_for_V_12, mercury__bimap__K_6, mercury__bimap__V_7, mercury__bimap__Forward0_18, &mercury__bimap__Forward_20);
    }
#line 416 "bimap.m"
    {
#line 416 "bimap.m"
      mercury__map__det_insert_4_p_0(mercury__bimap__TypeInfo_for_V_12, mercury__bimap__TypeInfo_for_K_11, mercury__bimap__V_7, mercury__bimap__K_6, mercury__bimap__Reverse0_19, &mercury__bimap__Reverse_21);
    }
#line 417 "bimap.m"
    {
#line 417 "bimap.m"
      mercury__bimap__STATE_VARIABLE_BM_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 417 "bimap.m"
      MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_9, 0) = ((MR_Box) (mercury__bimap__Forward_20));
#line 417 "bimap.m"
      MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_9, 1) = ((MR_Box) (mercury__bimap__Reverse_21));
#line 417 "bimap.m"
    }
#line 413 "bimap.m"
    return mercury__bimap__STATE_VARIABLE_BM_9;
#line 413 "bimap.m"
  }
#line 106 "bimap.m"
}

#line 100 "bimap.m"
MR_bool MR_CALL 
mercury__bimap__insert_4_p_0(
#line 100 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_15,
#line 100 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_16,
#line 100 "bimap.m"
  MR_Box mercury__bimap__K_5,
#line 100 "bimap.m"
  MR_Box mercury__bimap__V_6,
#line 100 "bimap.m"
  MR_Word mercury__bimap__HeadVar__3_3,
#line 100 "bimap.m"
  MR_Word * mercury__bimap__HeadVar__4_4)
#line 100 "bimap.m"
{
#line 406 "bimap.m"
  {
#line 406 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 406 "bimap.m"
    MR_Word mercury__bimap__STATE_VARIABLE_Forward_0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__3_3, (MR_Integer) 0)));
#line 406 "bimap.m"
    MR_Word mercury__bimap__STATE_VARIABLE_Reverse_0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__3_3, (MR_Integer) 1)));
#line 406 "bimap.m"
    MR_Word mercury__bimap__STATE_VARIABLE_Forward_11;
#line 406 "bimap.m"
    MR_Word mercury__bimap__STATE_VARIABLE_Reverse_12;

#line 53 "map.opt"
    {
#line 53 "map.opt"
      mercury__bimap__succeeded = mercury__tree234__insert_4_p_0(mercury__bimap__TypeInfo_for_K_15, mercury__bimap__TypeInfo_for_V_16, mercury__bimap__K_5, mercury__bimap__V_6, mercury__bimap__STATE_VARIABLE_Forward_0_9, &mercury__bimap__STATE_VARIABLE_Forward_11);
    }
#line 406 "bimap.m"
    if (mercury__bimap__succeeded)
#line 406 "bimap.m"
      {
#line 53 "map.opt"
        {
#line 53 "map.opt"
          mercury__bimap__succeeded = mercury__tree234__insert_4_p_0(mercury__bimap__TypeInfo_for_V_16, mercury__bimap__TypeInfo_for_K_15, mercury__bimap__V_6, mercury__bimap__K_5, mercury__bimap__STATE_VARIABLE_Reverse_0_10, &mercury__bimap__STATE_VARIABLE_Reverse_12);
        }
#line 406 "bimap.m"
        if (mercury__bimap__succeeded)
#line 406 "bimap.m"
          {
#line 406 "bimap.m"
            {
#line 406 "bimap.m"
              MR_Word base;
#line 406 "bimap.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 406 "bimap.m"
              *mercury__bimap__HeadVar__4_4 = base;
#line 406 "bimap.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__bimap__STATE_VARIABLE_Forward_11));
#line 406 "bimap.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__bimap__STATE_VARIABLE_Reverse_12));
#line 406 "bimap.m"
            }
#line 406 "bimap.m"
            mercury__bimap__succeeded = MR_TRUE;
#line 406 "bimap.m"
          }
#line 406 "bimap.m"
      }
#line 406 "bimap.m"
    return mercury__bimap__succeeded;
#line 406 "bimap.m"
  }
#line 100 "bimap.m"
}

#line 99 "bimap.m"
MR_bool MR_CALL 
mercury__bimap__insert_3_f_0(
#line 99 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_11,
#line 99 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_12,
#line 99 "bimap.m"
  MR_Word mercury__bimap__STATE_VARIABLE_BM_0_8,
#line 99 "bimap.m"
  MR_Box mercury__bimap__K_6,
#line 99 "bimap.m"
  MR_Box mercury__bimap__V_7,
#line 99 "bimap.m"
  MR_Word * mercury__bimap__STATE_VARIABLE_BM_9)
#line 99 "bimap.m"
{
#line 406 "bimap.m"
  {
#line 406 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 406 "bimap.m"
    MR_Word mercury__bimap__STATE_VARIABLE_Forward_0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_0_8, (MR_Integer) 0)));
#line 406 "bimap.m"
    MR_Word mercury__bimap__STATE_VARIABLE_Reverse_0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__STATE_VARIABLE_BM_0_8, (MR_Integer) 1)));
#line 406 "bimap.m"
    MR_Word mercury__bimap__STATE_VARIABLE_Forward_19;
#line 406 "bimap.m"
    MR_Word mercury__bimap__STATE_VARIABLE_Reverse_20;

#line 53 "map.opt"
    {
#line 53 "map.opt"
      mercury__bimap__succeeded = mercury__tree234__insert_4_p_0(mercury__bimap__TypeInfo_for_K_11, mercury__bimap__TypeInfo_for_V_12, mercury__bimap__K_6, mercury__bimap__V_7, mercury__bimap__STATE_VARIABLE_Forward_0_17, &mercury__bimap__STATE_VARIABLE_Forward_19);
    }
#line 406 "bimap.m"
    if (mercury__bimap__succeeded)
#line 406 "bimap.m"
      {
#line 53 "map.opt"
        {
#line 53 "map.opt"
          mercury__bimap__succeeded = mercury__tree234__insert_4_p_0(mercury__bimap__TypeInfo_for_V_12, mercury__bimap__TypeInfo_for_K_11, mercury__bimap__V_7, mercury__bimap__K_6, mercury__bimap__STATE_VARIABLE_Reverse_0_18, &mercury__bimap__STATE_VARIABLE_Reverse_20);
        }
#line 406 "bimap.m"
        if (mercury__bimap__succeeded)
#line 406 "bimap.m"
          {
#line 406 "bimap.m"
            {
#line 406 "bimap.m"
              MR_Word base;
#line 406 "bimap.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 406 "bimap.m"
              *mercury__bimap__STATE_VARIABLE_BM_9 = base;
#line 406 "bimap.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__bimap__STATE_VARIABLE_Forward_19));
#line 406 "bimap.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__bimap__STATE_VARIABLE_Reverse_20));
#line 406 "bimap.m"
            }
#line 406 "bimap.m"
            mercury__bimap__succeeded = MR_TRUE;
#line 406 "bimap.m"
          }
#line 406 "bimap.m"
      }
#line 406 "bimap.m"
    return mercury__bimap__succeeded;
#line 406 "bimap.m"
  }
#line 99 "bimap.m"
}

#line 94 "bimap.m"
MR_bool MR_CALL 
mercury__bimap__contains_value_2_p_0(
#line 94 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_6,
#line 94 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_7,
#line 94 "bimap.m"
  MR_Word mercury__bimap__HeadVar__1_1,
#line 94 "bimap.m"
  MR_Box mercury__bimap__V_5)
#line 94 "bimap.m"
{
#line 376 "bimap.m"
  {
#line 376 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 376 "bimap.m"
    MR_Word mercury__bimap__Reverse_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 1)));
#line 376 "bimap.m"
    MR_Word mercury__bimap__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 0)));
#line 37 "map.opt"
    MR_Box mercury__bimap__V_5_10;

#line 37 "map.opt"
    {
#line 37 "map.opt"
      mercury__bimap__succeeded = mercury__tree234__search_3_p_0(mercury__bimap__TypeInfo_for_V_7, mercury__bimap__TypeInfo_for_K_6, mercury__bimap__Reverse_4, mercury__bimap__V_5, &mercury__bimap__V_5_10);
    }
#line 376 "bimap.m"
    return mercury__bimap__succeeded;
#line 376 "bimap.m"
  }
#line 94 "bimap.m"
}

#line 90 "bimap.m"
MR_bool MR_CALL 
mercury__bimap__contains_key_2_p_0(
#line 90 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_6,
#line 90 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_7,
#line 90 "bimap.m"
  MR_Word mercury__bimap__HeadVar__1_1,
#line 90 "bimap.m"
  MR_Box mercury__bimap__K_5)
#line 90 "bimap.m"
{
#line 373 "bimap.m"
  {
#line 373 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 373 "bimap.m"
    MR_Word mercury__bimap__Forward_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 0)));
#line 373 "bimap.m"
    MR_Word mercury__bimap__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 1)));
#line 37 "map.opt"
    MR_Box mercury__bimap__V_5_10;

#line 37 "map.opt"
    {
#line 37 "map.opt"
      mercury__bimap__succeeded = mercury__tree234__search_3_p_0(mercury__bimap__TypeInfo_for_K_6, mercury__bimap__TypeInfo_for_V_7, mercury__bimap__Forward_3, mercury__bimap__K_5, &mercury__bimap__V_5_10);
    }
#line 373 "bimap.m"
    return mercury__bimap__succeeded;
#line 373 "bimap.m"
  }
#line 90 "bimap.m"
}

#line 86 "bimap.m"
void MR_CALL 
mercury__bimap__coordinates_2_p_0(
#line 86 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_6,
#line 86 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_7,
#line 86 "bimap.m"
  MR_Word mercury__bimap__HeadVar__1_1,
#line 86 "bimap.m"
  MR_Word * mercury__bimap__Cs_5)
#line 86 "bimap.m"
{
#line 400 "bimap.m"
  {
#line 400 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 400 "bimap.m"
    MR_Word mercury__bimap__Reverse_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 1)));
#line 400 "bimap.m"
    MR_Word mercury__bimap__V_5_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 400 "bimap.m"
    MR_Word mercury__bimap__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 0)));

#line 69 "tree234.opt"
    {
#line 69 "tree234.opt"
      mercury__tree234__keys_acc_3_p_0(mercury__bimap__TypeInfo_for_V_7, mercury__bimap__TypeInfo_for_K_6, mercury__bimap__Reverse_4, mercury__bimap__V_5_12, mercury__bimap__Cs_5);
#line 69 "tree234.opt"
      return;
    }
#line 400 "bimap.m"
  }
#line 86 "bimap.m"
}

#line 85 "bimap.m"
MR_Word MR_CALL 
mercury__bimap__coordinates_1_f_0(
#line 85 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_5,
#line 85 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_6,
#line 85 "bimap.m"
  MR_Word mercury__bimap__BM_3)
#line 85 "bimap.m"
{
#line 400 "bimap.m"
  {
#line 400 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 400 "bimap.m"
    MR_Word mercury__bimap__Vs_4;
#line 400 "bimap.m"
    MR_Word mercury__bimap__Reverse_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__BM_3, (MR_Integer) 1)));
#line 400 "bimap.m"
    MR_Word mercury__bimap__V_5_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 400 "bimap.m"
    MR_Word mercury__bimap__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__BM_3, (MR_Integer) 0)));

#line 69 "tree234.opt"
    {
#line 69 "tree234.opt"
      mercury__tree234__keys_acc_3_p_0(mercury__bimap__TypeInfo_for_V_6, mercury__bimap__TypeInfo_for_K_5, mercury__bimap__Reverse_9, mercury__bimap__V_5_14, &mercury__bimap__Vs_4);
    }
#line 400 "bimap.m"
    return mercury__bimap__Vs_4;
#line 400 "bimap.m"
  }
#line 85 "bimap.m"
}

#line 81 "bimap.m"
void MR_CALL 
mercury__bimap__ordinates_2_p_0(
#line 81 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_6,
#line 81 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_7,
#line 81 "bimap.m"
  MR_Word mercury__bimap__HeadVar__1_1,
#line 81 "bimap.m"
  MR_Word * mercury__bimap__Os_5)
#line 81 "bimap.m"
{
#line 394 "bimap.m"
  {
#line 394 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 394 "bimap.m"
    MR_Word mercury__bimap__Forward_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 0)));
#line 394 "bimap.m"
    MR_Word mercury__bimap__V_5_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 394 "bimap.m"
    MR_Word mercury__bimap__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 1)));

#line 69 "tree234.opt"
    {
#line 69 "tree234.opt"
      mercury__tree234__keys_acc_3_p_0(mercury__bimap__TypeInfo_for_K_6, mercury__bimap__TypeInfo_for_V_7, mercury__bimap__Forward_3, mercury__bimap__V_5_12, mercury__bimap__Os_5);
#line 69 "tree234.opt"
      return;
    }
#line 394 "bimap.m"
  }
#line 81 "bimap.m"
}

#line 80 "bimap.m"
MR_Word MR_CALL 
mercury__bimap__ordinates_1_f_0(
#line 80 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_5,
#line 80 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_6,
#line 80 "bimap.m"
  MR_Word mercury__bimap__BM_3)
#line 80 "bimap.m"
{
#line 394 "bimap.m"
  {
#line 394 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 394 "bimap.m"
    MR_Word mercury__bimap__Ks_4;
#line 394 "bimap.m"
    MR_Word mercury__bimap__Forward_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__BM_3, (MR_Integer) 0)));
#line 394 "bimap.m"
    MR_Word mercury__bimap__V_5_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 394 "bimap.m"
    MR_Word mercury__bimap__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__BM_3, (MR_Integer) 1)));

#line 69 "tree234.opt"
    {
#line 69 "tree234.opt"
      mercury__tree234__keys_acc_3_p_0(mercury__bimap__TypeInfo_for_K_5, mercury__bimap__TypeInfo_for_V_6, mercury__bimap__Forward_8, mercury__bimap__V_5_14, &mercury__bimap__Ks_4);
    }
#line 394 "bimap.m"
    return mercury__bimap__Ks_4;
#line 394 "bimap.m"
  }
#line 80 "bimap.m"
}

#line 76 "bimap.m"
void MR_CALL 
mercury__bimap__reverse_lookup_3_p_0(
#line 76 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_8,
#line 76 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_9,
#line 76 "bimap.m"
  MR_Word mercury__bimap__HeadVar__1_1,
#line 76 "bimap.m"
  MR_Box * mercury__bimap__K_6,
#line 76 "bimap.m"
  MR_Box mercury__bimap__V_7)
#line 76 "bimap.m"
{
#line 388 "bimap.m"
  {
#line 388 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 388 "bimap.m"
    MR_Word mercury__bimap__Reverse_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 1)));
#line 388 "bimap.m"
    MR_Word mercury__bimap__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 0)));

#line 389 "bimap.m"
    {
#line 389 "bimap.m"
      mercury__map__lookup_3_p_0(mercury__bimap__TypeInfo_for_V_9, mercury__bimap__TypeInfo_for_K_8, mercury__bimap__Reverse_5, mercury__bimap__V_7, mercury__bimap__K_6);
#line 389 "bimap.m"
      return;
    }
#line 388 "bimap.m"
  }
#line 76 "bimap.m"
}

#line 75 "bimap.m"
MR_Box MR_CALL 
mercury__bimap__reverse_lookup_2_f_0(
#line 75 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_7,
#line 75 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_8,
#line 75 "bimap.m"
  MR_Word mercury__bimap__BM_4,
#line 75 "bimap.m"
  MR_Box mercury__bimap__V_5)
#line 75 "bimap.m"
{
#line 388 "bimap.m"
  {
#line 388 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 388 "bimap.m"
    MR_Box mercury__bimap__K_6;
#line 388 "bimap.m"
    MR_Word mercury__bimap__Reverse_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__BM_4, (MR_Integer) 1)));
#line 388 "bimap.m"
    MR_Word mercury__bimap__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__BM_4, (MR_Integer) 0)));

#line 389 "bimap.m"
    {
#line 389 "bimap.m"
      mercury__map__lookup_3_p_0(mercury__bimap__TypeInfo_for_V_8, mercury__bimap__TypeInfo_for_K_7, mercury__bimap__Reverse_12, mercury__bimap__V_5, &mercury__bimap__K_6);
    }
#line 388 "bimap.m"
    return mercury__bimap__K_6;
#line 388 "bimap.m"
  }
#line 75 "bimap.m"
}

#line 70 "bimap.m"
void MR_CALL 
mercury__bimap__lookup_3_p_0(
#line 70 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_8,
#line 70 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_9,
#line 70 "bimap.m"
  MR_Word mercury__bimap__HeadVar__1_1,
#line 70 "bimap.m"
  MR_Box mercury__bimap__K_6,
#line 70 "bimap.m"
  MR_Box * mercury__bimap__V_7)
#line 70 "bimap.m"
{
#line 382 "bimap.m"
  {
#line 382 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 382 "bimap.m"
    MR_Word mercury__bimap__Forward_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 0)));
#line 382 "bimap.m"
    MR_Word mercury__bimap__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 1)));

#line 383 "bimap.m"
    {
#line 383 "bimap.m"
      mercury__map__lookup_3_p_0(mercury__bimap__TypeInfo_for_K_8, mercury__bimap__TypeInfo_for_V_9, mercury__bimap__Forward_4, mercury__bimap__K_6, mercury__bimap__V_7);
#line 383 "bimap.m"
      return;
    }
#line 382 "bimap.m"
  }
#line 70 "bimap.m"
}

#line 69 "bimap.m"
MR_Box MR_CALL 
mercury__bimap__lookup_2_f_0(
#line 69 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_7,
#line 69 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_8,
#line 69 "bimap.m"
  MR_Word mercury__bimap__BM_4,
#line 69 "bimap.m"
  MR_Box mercury__bimap__K_5)
#line 69 "bimap.m"
{
#line 382 "bimap.m"
  {
#line 382 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 382 "bimap.m"
    MR_Box mercury__bimap__V_6;
#line 382 "bimap.m"
    MR_Word mercury__bimap__Forward_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__BM_4, (MR_Integer) 0)));
#line 382 "bimap.m"
    MR_Word mercury__bimap__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__BM_4, (MR_Integer) 1)));

#line 383 "bimap.m"
    {
#line 383 "bimap.m"
      mercury__map__lookup_3_p_0(mercury__bimap__TypeInfo_for_K_7, mercury__bimap__TypeInfo_for_V_8, mercury__bimap__Forward_11, mercury__bimap__K_5, &mercury__bimap__V_6);
    }
#line 382 "bimap.m"
    return mercury__bimap__V_6;
#line 382 "bimap.m"
  }
#line 69 "bimap.m"
}

#line 64 "bimap.m"
MR_bool MR_CALL 
mercury__bimap__reverse_search_3_p_0(
#line 64 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_8,
#line 64 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_9,
#line 64 "bimap.m"
  MR_Word mercury__bimap__HeadVar__1_1,
#line 64 "bimap.m"
  MR_Box * mercury__bimap__K_6,
#line 64 "bimap.m"
  MR_Box mercury__bimap__V_7)
#line 64 "bimap.m"
{
#line 370 "bimap.m"
  {
#line 370 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 370 "bimap.m"
    MR_Word mercury__bimap__Reverse_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 1)));
#line 370 "bimap.m"
    MR_Word mercury__bimap__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 0)));

#line 37 "map.opt"
    {
#line 37 "map.opt"
      return mercury__bimap__succeeded = mercury__tree234__search_3_p_0(mercury__bimap__TypeInfo_for_V_9, mercury__bimap__TypeInfo_for_K_8, mercury__bimap__Reverse_5, mercury__bimap__V_7, mercury__bimap__K_6);
    }
#line 370 "bimap.m"
    return mercury__bimap__succeeded;
#line 370 "bimap.m"
  }
#line 64 "bimap.m"
}

#line 63 "bimap.m"
MR_bool MR_CALL 
mercury__bimap__reverse_search_2_f_0(
#line 63 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_7,
#line 63 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_8,
#line 63 "bimap.m"
  MR_Word mercury__bimap__BM_4,
#line 63 "bimap.m"
  MR_Box mercury__bimap__V_5,
#line 63 "bimap.m"
  MR_Box * mercury__bimap__K_6)
#line 63 "bimap.m"
{
#line 370 "bimap.m"
  {
#line 370 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 370 "bimap.m"
    MR_Word mercury__bimap__Reverse_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__BM_4, (MR_Integer) 1)));
#line 370 "bimap.m"
    MR_Word mercury__bimap__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__BM_4, (MR_Integer) 0)));

#line 37 "map.opt"
    {
#line 37 "map.opt"
      return mercury__bimap__succeeded = mercury__tree234__search_3_p_0(mercury__bimap__TypeInfo_for_V_8, mercury__bimap__TypeInfo_for_K_7, mercury__bimap__Reverse_12, mercury__bimap__V_5, mercury__bimap__K_6);
    }
#line 370 "bimap.m"
    return mercury__bimap__succeeded;
#line 370 "bimap.m"
  }
#line 63 "bimap.m"
}

#line 59 "bimap.m"
MR_bool MR_CALL 
mercury__bimap__forward_search_3_p_0(
#line 59 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_8,
#line 59 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_9,
#line 59 "bimap.m"
  MR_Word mercury__bimap__HeadVar__1_1,
#line 59 "bimap.m"
  MR_Box mercury__bimap__K_6,
#line 59 "bimap.m"
  MR_Box * mercury__bimap__V_7)
#line 59 "bimap.m"
{
#line 364 "bimap.m"
  {
#line 364 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 364 "bimap.m"
    MR_Word mercury__bimap__Forward_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 0)));
#line 364 "bimap.m"
    MR_Word mercury__bimap__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 1)));

#line 37 "map.opt"
    {
#line 37 "map.opt"
      return mercury__bimap__succeeded = mercury__tree234__search_3_p_0(mercury__bimap__TypeInfo_for_K_8, mercury__bimap__TypeInfo_for_V_9, mercury__bimap__Forward_4, mercury__bimap__K_6, mercury__bimap__V_7);
    }
#line 364 "bimap.m"
    return mercury__bimap__succeeded;
#line 364 "bimap.m"
  }
#line 59 "bimap.m"
}

#line 58 "bimap.m"
MR_bool MR_CALL 
mercury__bimap__forward_search_2_f_0(
#line 58 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_7,
#line 58 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_8,
#line 58 "bimap.m"
  MR_Word mercury__bimap__BM_4,
#line 58 "bimap.m"
  MR_Box mercury__bimap__K_5,
#line 58 "bimap.m"
  MR_Box * mercury__bimap__V_6)
#line 58 "bimap.m"
{
#line 364 "bimap.m"
  {
#line 364 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 364 "bimap.m"
    MR_Word mercury__bimap__Forward_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__BM_4, (MR_Integer) 0)));
#line 364 "bimap.m"
    MR_Word mercury__bimap__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__BM_4, (MR_Integer) 1)));

#line 37 "map.opt"
    {
#line 37 "map.opt"
      return mercury__bimap__succeeded = mercury__tree234__search_3_p_0(mercury__bimap__TypeInfo_for_K_7, mercury__bimap__TypeInfo_for_V_8, mercury__bimap__Forward_11, mercury__bimap__K_5, mercury__bimap__V_6);
    }
#line 364 "bimap.m"
    return mercury__bimap__succeeded;
#line 364 "bimap.m"
  }
#line 58 "bimap.m"
}

#line 54 "bimap.m"
MR_bool MR_CALL 
mercury__bimap__search_3_p_1(
#line 54 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_8,
#line 54 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_9,
#line 54 "bimap.m"
  MR_Word mercury__bimap__HeadVar__1_1,
#line 54 "bimap.m"
  MR_Box * mercury__bimap__K_6,
#line 54 "bimap.m"
  MR_Box mercury__bimap__V_7)
#line 54 "bimap.m"
{
#line 357 "bimap.m"
  {
#line 357 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 357 "bimap.m"
    MR_Word mercury__bimap__Forward_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 0)));
#line 357 "bimap.m"
    MR_Word mercury__bimap__Reverse_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 1)));
#line 357 "bimap.m"
    MR_Box mercury__bimap__V_11_11;

#line 37 "map.opt"
    {
#line 37 "map.opt"
      mercury__bimap__succeeded = mercury__tree234__search_3_p_0(mercury__bimap__TypeInfo_for_V_9, mercury__bimap__TypeInfo_for_K_8, mercury__bimap__Reverse_5, mercury__bimap__V_7, mercury__bimap__K_6);
    }
#line 357 "bimap.m"
    if (mercury__bimap__succeeded)
#line 357 "bimap.m"
      {
#line 37 "map.opt"
        {
#line 37 "map.opt"
          mercury__bimap__succeeded = mercury__tree234__search_3_p_0(mercury__bimap__TypeInfo_for_K_8, mercury__bimap__TypeInfo_for_V_9, mercury__bimap__Forward_4, *mercury__bimap__K_6, &mercury__bimap__V_11_11);
        }
#line 357 "bimap.m"
        if (mercury__bimap__succeeded)
#line 358 "bimap.m"
          {
#line 358 "bimap.m"
            return mercury__bimap__succeeded = mercury__builtin__unify_2_p_0(mercury__bimap__TypeInfo_for_V_9, mercury__bimap__V_7, mercury__bimap__V_11_11);
          }
#line 357 "bimap.m"
      }
#line 357 "bimap.m"
    return mercury__bimap__succeeded;
#line 357 "bimap.m"
  }
#line 54 "bimap.m"
}

#line 53 "bimap.m"
MR_bool MR_CALL 
mercury__bimap__search_3_p_0(
#line 53 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_K_8,
#line 53 "bimap.m"
  MR_Word mercury__bimap__TypeInfo_for_V_9,
#line 53 "bimap.m"
  MR_Word mercury__bimap__HeadVar__1_1,
#line 53 "bimap.m"
  MR_Box mercury__bimap__K_6,
#line 53 "bimap.m"
  MR_Box * mercury__bimap__V_7)
#line 53 "bimap.m"
{
#line 357 "bimap.m"
  {
#line 357 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 357 "bimap.m"
    MR_Word mercury__bimap__Forward_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 0)));
#line 357 "bimap.m"
    MR_Word mercury__bimap__Reverse_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 1)));
#line 357 "bimap.m"
    MR_Box mercury__bimap__V_10_10;

#line 37 "map.opt"
    {
#line 37 "map.opt"
      mercury__bimap__succeeded = mercury__tree234__search_3_p_0(mercury__bimap__TypeInfo_for_K_8, mercury__bimap__TypeInfo_for_V_9, mercury__bimap__Forward_4, mercury__bimap__K_6, mercury__bimap__V_7);
    }
#line 357 "bimap.m"
    if (mercury__bimap__succeeded)
#line 357 "bimap.m"
      {
#line 37 "map.opt"
        {
#line 37 "map.opt"
          mercury__bimap__succeeded = mercury__tree234__search_3_p_0(mercury__bimap__TypeInfo_for_V_9, mercury__bimap__TypeInfo_for_K_8, mercury__bimap__Reverse_5, *mercury__bimap__V_7, &mercury__bimap__V_10_10);
        }
#line 357 "bimap.m"
        if (mercury__bimap__succeeded)
#line 359 "bimap.m"
          {
#line 359 "bimap.m"
            return mercury__bimap__succeeded = mercury__builtin__unify_2_p_0(mercury__bimap__TypeInfo_for_K_8, mercury__bimap__K_6, mercury__bimap__V_10_10);
          }
#line 357 "bimap.m"
      }
#line 357 "bimap.m"
    return mercury__bimap__succeeded;
#line 357 "bimap.m"
  }
#line 53 "bimap.m"
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
#line 354 "bimap.m"
  {
#line 354 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 354 "bimap.m"
    MR_Word mercury__bimap__Forward_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 0)));
#line 354 "bimap.m"
    MR_Word mercury__bimap__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__bimap__HeadVar__1_1, (MR_Integer) 1)));

#line 52 "tree234.opt"
    mercury__bimap__succeeded = (mercury__bimap__Forward_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 354 "bimap.m"
    return mercury__bimap__succeeded;
#line 354 "bimap.m"
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
#line 349 "bimap.m"
  {
#line 349 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 349 "bimap.m"
    MR_Word mercury__bimap__B_6;
#line 349 "bimap.m"
    MR_Word mercury__bimap__Forward_7;
#line 349 "bimap.m"
    MR_Word mercury__bimap__Reverse_8;
#line 349 "bimap.m"
    MR_Word mercury__bimap__V_6_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 349 "bimap.m"
    MR_Word mercury__bimap__V_7_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 349 "bimap.m"
    MR_Word mercury__bimap__V_6_25;
#line 349 "bimap.m"
    MR_Word mercury__bimap__V_7_26;

#line 48 "tree234.opt"
    {
#line 48 "tree234.opt"
      mercury__bimap__Forward_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 48 "tree234.opt"
      MR_hl_field(MR_mktag(1), mercury__bimap__Forward_7, 0) = mercury__bimap__K_4;
#line 48 "tree234.opt"
      MR_hl_field(MR_mktag(1), mercury__bimap__Forward_7, 1) = mercury__bimap__V_5;
#line 48 "tree234.opt"
      MR_hl_field(MR_mktag(1), mercury__bimap__Forward_7, 2) = ((MR_Box) (mercury__bimap__V_6_16));
#line 48 "tree234.opt"
      MR_hl_field(MR_mktag(1), mercury__bimap__Forward_7, 3) = ((MR_Box) (mercury__bimap__V_7_17));
#line 48 "tree234.opt"
    }
#line 49 "tree234.opt"
    mercury__bimap__V_6_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 50 "tree234.opt"
    mercury__bimap__V_7_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 48 "tree234.opt"
    {
#line 48 "tree234.opt"
      mercury__bimap__Reverse_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 48 "tree234.opt"
      MR_hl_field(MR_mktag(1), mercury__bimap__Reverse_8, 0) = mercury__bimap__V_5;
#line 48 "tree234.opt"
      MR_hl_field(MR_mktag(1), mercury__bimap__Reverse_8, 1) = mercury__bimap__K_4;
#line 48 "tree234.opt"
      MR_hl_field(MR_mktag(1), mercury__bimap__Reverse_8, 2) = ((MR_Box) (mercury__bimap__V_6_25));
#line 48 "tree234.opt"
      MR_hl_field(MR_mktag(1), mercury__bimap__Reverse_8, 3) = ((MR_Box) (mercury__bimap__V_7_26));
#line 48 "tree234.opt"
    }
#line 352 "bimap.m"
    {
#line 352 "bimap.m"
      mercury__bimap__B_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 352 "bimap.m"
      MR_hl_field(MR_mktag(0), mercury__bimap__B_6, 0) = ((MR_Box) (mercury__bimap__Forward_7));
#line 352 "bimap.m"
      MR_hl_field(MR_mktag(0), mercury__bimap__B_6, 1) = ((MR_Box) (mercury__bimap__Reverse_8));
#line 352 "bimap.m"
    }
#line 349 "bimap.m"
    return mercury__bimap__B_6;
#line 349 "bimap.m"
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
#line 344 "bimap.m"
  {
#line 344 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 344 "bimap.m"
    MR_Word mercury__bimap__Forward_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 344 "bimap.m"
    MR_Word mercury__bimap__Reverse_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 347 "bimap.m"
    *mercury__bimap__B_2 = (MR_Word) &mercury__bimap_scalar_common_4[0];
#line 344 "bimap.m"
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
#line 344 "bimap.m"
  {
#line 344 "bimap.m"
    MR_bool mercury__bimap__succeeded;
#line 344 "bimap.m"
    MR_Word mercury__bimap__BM_2 = (MR_Word) &mercury__bimap_scalar_common_4[0];
#line 344 "bimap.m"
    MR_Word mercury__bimap__Forward_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 344 "bimap.m"
    MR_Word mercury__bimap__Reverse_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 344 "bimap.m"
    return mercury__bimap__BM_2;
#line 344 "bimap.m"
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
