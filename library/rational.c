/*
** Automatically generated from `rational.m'
** by the Mercury compiler,
** version rotd-14.01.1-2014-05-28, configured for x86_64-apple-darwin13.1.0.
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


/* :- module rational. */
/* :- implementation. */

/*
INIT mercury__rational__init
ENDINIT
*/

#include "rational.mih"


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




#line 86 "rational.c"
static const MR_PseudoTypeInfo mercury__rational__rational__field_types_rational_0_0[2];

#line 89 "rational.c"
static const MR_DuFunctorDesc mercury__rational__rational__du_functor_desc_rational_0_0;

#line 92 "rational.c"
static const MR_DuFunctorDescPtr mercury__rational__rational__du_stag_ordered_rational_0_0[1];

#line 95 "rational.c"
static const MR_DuPtagLayout mercury__rational__rational__du_ptag_ordered_rational_0[1];

#line 98 "rational.c"
static const MR_DuFunctorDescPtr mercury__rational__rational__du_name_ordered_rational_0[1];

#line 101 "rational.c"
static const MR_Integer mercury__rational__rational__functor_number_map_rational_0[1];

#line 104 "rational.c"
static MR_bool MR_CALL 
mercury__rational____Unify____rational_0_0_10001(
#line 107 "rational.c"
  MR_Box mercury__rational__wrapper_arg_1,
#line 109 "rational.c"
  MR_Box mercury__rational__wrapper_arg_2);

#line 112 "rational.c"
static void MR_CALL 
mercury__rational____Compare____rational_0_0_10001(
#line 115 "rational.c"
  MR_Box * mercury__rational__wrapper_arg_1,
#line 117 "rational.c"
  MR_Box mercury__rational__wrapper_arg_2,
#line 119 "rational.c"
  MR_Box mercury__rational__wrapper_arg_3);

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__rational__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 181 "rational.m"
static MR_Word MR_CALL 
mercury__rational__gcd_2_2_f_0(
#line 181 "rational.m"
  MR_Word mercury__rational__A_4,
#line 181 "rational.m"
  MR_Word mercury__rational__B_5);


static /* final */ const MR_Box mercury__rational_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__rational_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__rational_scalar_common_3[2][5];

static /* final */ const MR_Box mercury__rational_scalar_common_4[5][2];




static /* final */ const MR_Box mercury__rational_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__rational_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__rational_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__rational_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__rational_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__rational_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__rational_scalar_common_4[5][2] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__rational_scalar_common_4[0])))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__rational_scalar_common_4[1])),
    ((MR_Box) (&mercury__rational_scalar_common_4[1]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__rational_scalar_common_4[2])),
    ((MR_Box) (&mercury__rational_scalar_common_4[1]))
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
#include "table_builtin.mh"
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
#include "type_desc.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
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



#line 526 "rational.c"
static const MR_PseudoTypeInfo mercury__rational__rational__field_types_rational_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__integer__integer__type_ctor_info_integer_0,
  (MR_PseudoTypeInfo) &mercury__integer__integer__type_ctor_info_integer_0
};

#line 532 "rational.c"
static const MR_DuFunctorDesc mercury__rational__rational__du_functor_desc_rational_0_0 = {
  (MR_String) "r",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__rational__rational__field_types_rational_0_0,
  NULL,
  NULL,
  NULL
};

#line 547 "rational.c"
static const MR_DuFunctorDescPtr mercury__rational__rational__du_stag_ordered_rational_0_0[1] = {
  &mercury__rational__rational__du_functor_desc_rational_0_0
};

#line 552 "rational.c"
static const MR_DuPtagLayout mercury__rational__rational__du_ptag_ordered_rational_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__rational__rational__du_stag_ordered_rational_0_0
  }
};

#line 561 "rational.c"
static const MR_DuFunctorDescPtr mercury__rational__rational__du_name_ordered_rational_0[1] = {
  &mercury__rational__rational__du_functor_desc_rational_0_0
};

#line 566 "rational.c"
static const MR_Integer mercury__rational__rational__functor_number_map_rational_0[1] = {
  (MR_Integer) 0
};

#line 571 "rational.c"
const MR_TypeCtorInfo_Struct mercury__rational__rational__type_ctor_info_rational_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__rational____Unify____rational_0_0_10001)),
  ((MR_Box) (mercury__rational____Compare____rational_0_0_10001)),
  (MR_String) "rational",
  (MR_String) "rational",
  {
    mercury__rational__rational__du_name_ordered_rational_0
  },
  {
    mercury__rational__rational__du_ptag_ordered_rational_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__rational__rational__functor_number_map_rational_0
};

#line 592 "rational.c"
static MR_bool MR_CALL 
mercury__rational____Unify____rational_0_0_10001(
#line 595 "rational.c"
  MR_Box mercury__rational__wrapper_arg_1,
#line 597 "rational.c"
  MR_Box mercury__rational__wrapper_arg_2)
#line 599 "rational.c"
{
#line 601 "rational.c"
  {
#line 603 "rational.c"
    MR_bool mercury__rational__succeeded;

#line 606 "rational.c"
    {
#line 608 "rational.c"
      mercury__rational__succeeded = mercury__rational____Unify____rational_0_0(((MR_Word) mercury__rational__wrapper_arg_1), ((MR_Word) mercury__rational__wrapper_arg_2));
    }
#line 611 "rational.c"
    return mercury__rational__succeeded;
#line 613 "rational.c"
  }
#line 615 "rational.c"
}

#line 618 "rational.c"
static void MR_CALL 
mercury__rational____Compare____rational_0_0_10001(
#line 621 "rational.c"
  MR_Box * mercury__rational__wrapper_arg_1,
#line 623 "rational.c"
  MR_Box mercury__rational__wrapper_arg_2,
#line 625 "rational.c"
  MR_Box mercury__rational__wrapper_arg_3)
#line 627 "rational.c"
{
#line 629 "rational.c"
  {
#line 631 "rational.c"
    MR_Word mercury__rational__conv0_HeadVar__1_1;

#line 634 "rational.c"
    {
#line 636 "rational.c"
      mercury__rational____Compare____rational_0_0(&mercury__rational__conv0_HeadVar__1_1, ((MR_Word) mercury__rational__wrapper_arg_2), ((MR_Word) mercury__rational__wrapper_arg_3));
    }
#line 639 "rational.c"
    *mercury__rational__wrapper_arg_1 = ((MR_Box) (mercury__rational__conv0_HeadVar__1_1));
#line 641 "rational.c"
  }
#line 643 "rational.c"
}

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__rational__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 13 "ops.opt"
{
#line 38 "ops.opt"
  {
#line 38 "ops.opt"
    MR_bool mercury__rational__succeeded;

#line 38 "ops.opt"
    return (MR_Integer) 1200;
#line 38 "ops.opt"
  }
#line 13 "ops.opt"
}

#line 93 "rational.m"
void MR_CALL 
mercury__rational____Compare____rational_0_0(
#line 93 "rational.m"
  MR_Word * mercury__rational__HeadVar__1_1,
#line 93 "rational.m"
  MR_Word mercury__rational__HeadVar__2_2,
#line 93 "rational.m"
  MR_Word mercury__rational__HeadVar__3_3)
#line 93 "rational.m"
{
#line 93 "rational.m"
  {
#line 93 "rational.m"
    MR_bool mercury__rational__succeeded;
#line 93 "rational.m"
    MR_Integer mercury__rational__CastX_9 = (MR_Integer) mercury__rational__HeadVar__2_2;
#line 93 "rational.m"
    MR_Integer mercury__rational__CastY_10 = (MR_Integer) mercury__rational__HeadVar__3_3;

#line 93 "rational.m"
    mercury__rational__succeeded = (mercury__rational__CastX_9 == mercury__rational__CastY_10);
#line 93 "rational.m"
    if (mercury__rational__succeeded)
#line 687 "rational.c"
      *mercury__rational__HeadVar__1_1 = (MR_Integer) 0;
#line 93 "rational.m"
    else
#line 93 "rational.m"
      {
#line 93 "rational.m"
        MR_Word mercury__rational__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rational__HeadVar__2_2, (MR_Integer) 0)));
#line 93 "rational.m"
        MR_Word mercury__rational__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rational__HeadVar__2_2, (MR_Integer) 1)));
#line 93 "rational.m"
        MR_Word mercury__rational__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rational__HeadVar__3_3, (MR_Integer) 0)));
#line 93 "rational.m"
        MR_Word mercury__rational__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rational__HeadVar__3_3, (MR_Integer) 1)));
#line 93 "rational.m"
        MR_Word mercury__rational__V_8_8;

#line 93 "rational.m"
        {
#line 93 "rational.m"
          mercury__integer____Compare____integer_0_0(&mercury__rational__V_8_8, mercury__rational__V_4_4, mercury__rational__V_6_6);
        }
#line 709 "rational.c"
        mercury__rational__succeeded = (mercury__rational__V_8_8 == (MR_Integer) 0);
#line 93 "rational.m"
        mercury__rational__succeeded = !(mercury__rational__succeeded);
#line 93 "rational.m"
        if (mercury__rational__succeeded)
#line 93 "rational.m"
          *mercury__rational__HeadVar__1_1 = mercury__rational__V_8_8;
#line 93 "rational.m"
        else
#line 93 "rational.m"
          {
#line 93 "rational.m"
            mercury__integer____Compare____integer_0_0(mercury__rational__HeadVar__1_1, mercury__rational__V_5_5, mercury__rational__V_7_7);
#line 93 "rational.m"
            return;
          }
#line 93 "rational.m"
      }
#line 93 "rational.m"
  }
#line 93 "rational.m"
}

#line 93 "rational.m"
MR_bool MR_CALL 
mercury__rational____Unify____rational_0_0(
#line 93 "rational.m"
  MR_Word mercury__rational__HeadVar__1_1,
#line 93 "rational.m"
  MR_Word mercury__rational__HeadVar__2_2)
#line 93 "rational.m"
{
#line 93 "rational.m"
  {
#line 93 "rational.m"
    MR_bool mercury__rational__succeeded;
#line 93 "rational.m"
    MR_Integer mercury__rational__CastX_7 = (MR_Integer) mercury__rational__HeadVar__1_1;
#line 93 "rational.m"
    MR_Integer mercury__rational__CastY_8 = (MR_Integer) mercury__rational__HeadVar__2_2;

#line 93 "rational.m"
    mercury__rational__succeeded = (mercury__rational__CastX_7 == mercury__rational__CastY_8);
#line 93 "rational.m"
    if (mercury__rational__succeeded)
#line 93 "rational.m"
      mercury__rational__succeeded = MR_TRUE;
#line 93 "rational.m"
    else
#line 93 "rational.m"
      {
#line 93 "rational.m"
        MR_Word mercury__rational__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rational__HeadVar__1_1, (MR_Integer) 0)));
#line 93 "rational.m"
        MR_Word mercury__rational__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rational__HeadVar__1_1, (MR_Integer) 1)));
#line 93 "rational.m"
        MR_Word mercury__rational__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rational__HeadVar__2_2, (MR_Integer) 0)));
#line 93 "rational.m"
        MR_Word mercury__rational__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rational__HeadVar__2_2, (MR_Integer) 1)));

#line 770 "rational.c"
        {
#line 772 "rational.c"
          mercury__rational__succeeded = mercury__integer____Unify____integer_0_0(mercury__rational__V_3_3, mercury__rational__V_5_5);
        }
#line 93 "rational.m"
        if (mercury__rational__succeeded)
#line 777 "rational.c"
          {
#line 779 "rational.c"
            return mercury__rational__succeeded = mercury__integer____Unify____integer_0_0(mercury__rational__V_4_4, mercury__rational__V_6_6);
          }
#line 93 "rational.m"
      }
#line 93 "rational.m"
    return mercury__rational__succeeded;
#line 93 "rational.m"
  }
#line 93 "rational.m"
}

#line 201 "rational.m"
MR_Word MR_CALL 
mercury__rational__cmp_2_f_0(
#line 201 "rational.m"
  MR_Word mercury__rational__R1_4,
#line 201 "rational.m"
  MR_Word mercury__rational__R2_5)
#line 201 "rational.m"
{
#line 203 "rational.m"
  {
#line 203 "rational.m"
    MR_bool mercury__rational__succeeded;
#line 203 "rational.m"
    MR_Word mercury__rational__Cmp_6;
#line 203 "rational.m"
    MR_Word mercury__rational__Diff_7;
#line 203 "rational.m"
    MR_Word mercury__rational__V_10_10;
#line 203 "rational.m"
    MR_Word mercury__rational__Num_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rational__R2_5, (MR_Integer) 0)));
#line 203 "rational.m"
    MR_Word mercury__rational__Den_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rational__R2_5, (MR_Integer) 1)));
#line 203 "rational.m"
    MR_Word mercury__rational__V_13_13;
#line 203 "rational.m"
    MR_Integer mercury__rational__S_3_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__rational__Num_11, (MR_Integer) 0)));
#line 203 "rational.m"
    MR_Word mercury__rational__Digits0_4_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rational__Num_11, (MR_Integer) 1)));
#line 203 "rational.m"
    MR_Integer mercury__rational__V_6_18 = ((MR_Integer) 0 - mercury__rational__S_3_16);
#line 203 "rational.m"
    MR_Word mercury__rational__Digits_5_19;
#line 215 "rational.m"
    MR_Word mercury__rational__V_21_21;
#line 215 "rational.m"
    MR_Word mercury__rational__V_22_22;
#line 215 "rational.m"
    MR_Word mercury__rational__V_3_25;
#line 215 "rational.m"
    MR_Word mercury__rational__V_20_20;

#line 123 "integer.opt"
    {
#line 123 "integer.opt"
      mercury__integer__neg_list_2_p_0(mercury__rational__Digits0_4_17, &mercury__rational__Digits_5_19);
    }
#line 121 "integer.opt"
    {
#line 121 "integer.opt"
      mercury__rational__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 121 "integer.opt"
      MR_hl_field(MR_mktag(0), mercury__rational__V_13_13, 0) = ((MR_Box) (mercury__rational__V_6_18));
#line 121 "integer.opt"
      MR_hl_field(MR_mktag(0), mercury__rational__V_13_13, 1) = ((MR_Box) (mercury__rational__Digits_5_19));
#line 121 "integer.opt"
    }
#line 131 "rational.m"
    {
#line 131 "rational.m"
      mercury__rational__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 131 "rational.m"
      MR_hl_field(MR_mktag(0), mercury__rational__V_10_10, 0) = ((MR_Box) (mercury__rational__V_13_13));
#line 131 "rational.m"
      MR_hl_field(MR_mktag(0), mercury__rational__V_10_10, 1) = ((MR_Box) (mercury__rational__Den_12));
#line 131 "rational.m"
    }
#line 139 "rational.m"
    {
#line 139 "rational.m"
      mercury__rational__Diff_7 = mercury__rational__f_plus_2_f_0(mercury__rational__R1_4, mercury__rational__V_10_10);
    }
#line 215 "rational.m"
    mercury__rational__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rational__Diff_7, (MR_Integer) 0)));
#line 215 "rational.m"
    mercury__rational__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rational__Diff_7, (MR_Integer) 1)));
#line 104 "integer.opt"
    mercury__rational__V_3_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 102 "integer.opt"
    mercury__rational__V_22_22 = (MR_Word) &mercury__rational_scalar_common_4[2];
#line 215 "rational.m"
    {
#line 215 "rational.m"
      mercury__rational__succeeded = mercury__integer____Unify____integer_0_0(mercury__rational__V_21_21, mercury__rational__V_22_22);
    }
#line 207 "rational.m"
    if (mercury__rational__succeeded)
#line 206 "rational.m"
      mercury__rational__Cmp_6 = (MR_Integer) 0;
#line 207 "rational.m"
    else
#line 209 "rational.m"
      {
#line 219 "rational.m"
        MR_Word mercury__rational__Num_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rational__Diff_7, (MR_Integer) 0)));
#line 219 "rational.m"
        MR_Word mercury__rational__V_28_28 = (MR_Word) &mercury__rational_scalar_common_4[2];
#line 219 "rational.m"
        MR_Word mercury__rational__V_3_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 219 "rational.m"
        MR_Word mercury__rational__C_5_33;
#line 219 "rational.m"
        MR_Word mercury__rational__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rational__Diff_7, (MR_Integer) 1)));

#line 129 "integer.opt"
        {
#line 129 "integer.opt"
          mercury__integer____Compare____integer_0_0(&mercury__rational__C_5_33, mercury__rational__Num_26, mercury__rational__V_28_28);
        }
#line 39 "integer.opt"
        mercury__rational__succeeded = (mercury__rational__C_5_33 == (MR_Integer) 1);
#line 209 "rational.m"
        if (mercury__rational__succeeded)
#line 208 "rational.m"
          mercury__rational__Cmp_6 = (MR_Integer) 1;
#line 209 "rational.m"
        else
#line 210 "rational.m"
          mercury__rational__Cmp_6 = (MR_Integer) 2;
#line 209 "rational.m"
      }
#line 203 "rational.m"
    return mercury__rational__Cmp_6;
#line 203 "rational.m"
  }
#line 201 "rational.m"
}

#line 181 "rational.m"
static MR_Word MR_CALL 
mercury__rational__gcd_2_2_f_0(
#line 181 "rational.m"
  MR_Word mercury__rational__A_4,
#line 181 "rational.m"
  MR_Word mercury__rational__B_5)
#line 181 "rational.m"
{
#line 183 "rational.m"
  while (MR_TRUE)
#line 183 "rational.m"
    {
#line 183 "rational.m"
      /* tailcall optimized into a loop */
#line 183 "rational.m"
      {
#line 183 "rational.m"
        MR_bool mercury__rational__succeeded;
#line 183 "rational.m"
        MR_Word mercury__rational__HeadVar__3_3;
#line 183 "rational.m"
        MR_Word mercury__rational__V_7_7 = (MR_Word) &mercury__rational_scalar_common_4[2];
#line 183 "rational.m"
        MR_Word mercury__rational__V_3_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 183 "rational.m"
        {
#line 183 "rational.m"
          mercury__rational__succeeded = mercury__integer____Unify____integer_0_0(mercury__rational__B_5, mercury__rational__V_7_7);
        }
#line 183 "rational.m"
        if (mercury__rational__succeeded)
#line 183 "rational.m"
          mercury__rational__HeadVar__3_3 = mercury__rational__A_4;
#line 183 "rational.m"
        else
#line 183 "rational.m"
          {
#line 183 "rational.m"
            MR_Word mercury__rational__V_6_6;
#line 127 "integer.opt"
            MR_Word mercury__rational___Quot_7_17;

#line 127 "integer.opt"
            {
#line 127 "integer.opt"
              mercury__integer__big_quot_rem_4_p_0(mercury__rational__A_4, mercury__rational__B_5, &mercury__rational___Quot_7_17, &mercury__rational__V_6_6);
            }
#line 183 "rational.m"
            /* direct tailcall eliminated */
#line 183 "rational.m"
            {
#line 183 "rational.m"
              MR_Word mercury__rational__A__tmp_copy_4 = mercury__rational__B_5;
#line 183 "rational.m"
              MR_Word mercury__rational__B__tmp_copy_5 = mercury__rational__V_6_6;

#line 183 "rational.m"
              mercury__rational__B_5 = mercury__rational__B__tmp_copy_5;
#line 183 "rational.m"
              mercury__rational__A_4 = mercury__rational__A__tmp_copy_4;
#line 183 "rational.m"
            }
#line 183 "rational.m"
            continue;
#line 183 "rational.m"
          }
#line 183 "rational.m"
        return mercury__rational__HeadVar__3_3;
#line 183 "rational.m"
      }
#line 183 "rational.m"
      break;
#line 183 "rational.m"
    }
#line 181 "rational.m"
}

#line 163 "rational.m"
MR_Word MR_CALL 
mercury__rational__rational_norm_2_f_0(
#line 163 "rational.m"
  MR_Word mercury__rational__Num_4,
#line 163 "rational.m"
  MR_Word mercury__rational__Den_5)
#line 163 "rational.m"
{
#line 168 "rational.m"
  {
#line 168 "rational.m"
    MR_bool mercury__rational__succeeded;
#line 168 "rational.m"
    MR_Word mercury__rational__Rat_6;
#line 166 "rational.m"
    MR_Word mercury__rational__V_16_16 = (MR_Word) &mercury__rational_scalar_common_4[2];
#line 166 "rational.m"
    MR_Word mercury__rational__V_3_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 166 "rational.m"
    {
#line 166 "rational.m"
      mercury__rational__succeeded = mercury__integer____Unify____integer_0_0(mercury__rational__Den_5, mercury__rational__V_16_16);
    }
#line 168 "rational.m"
    if (mercury__rational__succeeded)
#line 167 "rational.m"
      {
#line 167 "rational.m"
        {
#line 167 "rational.m"
          mercury__require__error_1_p_0((MR_String) "rational.rational_norm: division by zero");
        }
#line 167 "rational.m"
      }
#line 168 "rational.m"
    else
#line 170 "rational.m"
      {
#line 170 "rational.m"
        MR_Word mercury__rational__V_17_17 = (MR_Word) &mercury__rational_scalar_common_4[2];
#line 168 "rational.m"
        MR_Word mercury__rational__V_3_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 168 "rational.m"
        {
#line 168 "rational.m"
          mercury__rational__succeeded = mercury__integer____Unify____integer_0_0(mercury__rational__Num_4, mercury__rational__V_17_17);
        }
#line 170 "rational.m"
        if (mercury__rational__succeeded)
#line 169 "rational.m"
          {
#line 169 "rational.m"
            MR_Word mercury__rational__V_12_12 = (MR_Word) &mercury__rational_scalar_common_4[1];
#line 169 "rational.m"
            MR_Word mercury__rational__V_3_28 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__rational_scalar_common_4[0]);
#line 169 "rational.m"
            MR_Word mercury__rational__V_5_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 169 "rational.m"
            mercury__rational__Rat_6 = (MR_Word) &mercury__rational_scalar_common_4[4];
#line 169 "rational.m"
          }
#line 170 "rational.m"
        else
#line 171 "rational.m"
          {
#line 171 "rational.m"
            MR_Word mercury__rational__G_7;
#line 171 "rational.m"
            MR_Word mercury__rational__Num2_8;
#line 171 "rational.m"
            MR_Word mercury__rational__Den2_9;
#line 171 "rational.m"
            MR_Word mercury__rational__V_13_13;
#line 171 "rational.m"
            MR_Word mercury__rational__V_14_14;
#line 171 "rational.m"
            MR_Word mercury__rational__V_15_15;
#line 171 "rational.m"
            MR_Word mercury__rational__V_33_33;
#line 171 "rational.m"
            MR_Word mercury__rational__V_34_34;
#line 195 "rational.m"
            MR_Word mercury__rational__V_42_42;
#line 196 "rational.m"
            MR_Word mercury__rational__V_3_45;
#line 125 "integer.opt"
            MR_Word mercury__rational___Rem_7_84;
#line 125 "integer.opt"
            MR_Word mercury__rational___Rem_7_91;

#line 96 "integer.opt"
            {
#line 96 "integer.opt"
              mercury__rational__V_33_33 = mercury__integer__big_abs_1_f_0(mercury__rational__Num_4);
            }
#line 96 "integer.opt"
            {
#line 96 "integer.opt"
              mercury__rational__V_34_34 = mercury__integer__big_abs_1_f_0(mercury__rational__Den_5);
            }
#line 179 "rational.m"
            {
#line 179 "rational.m"
              mercury__rational__G_7 = mercury__rational__gcd_2_2_f_0(mercury__rational__V_33_33, mercury__rational__V_34_34);
            }
#line 104 "integer.opt"
            mercury__rational__V_3_45 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 102 "integer.opt"
            mercury__rational__V_42_42 = (MR_Word) &mercury__rational_scalar_common_4[2];
#line 196 "rational.m"
            {
#line 196 "rational.m"
              mercury__rational__succeeded = mercury__integer____Unify____integer_0_0(mercury__rational__Den_5, mercury__rational__V_42_42);
            }
#line 195 "rational.m"
            if (mercury__rational__succeeded)
#line 102 "integer.opt"
              mercury__rational__V_13_13 = mercury__rational__V_42_42;
#line 195 "rational.m"
            else
#line 195 "rational.m"
              {
#line 197 "rational.m"
                MR_Word mercury__rational__V_40_40 = (MR_Word) &mercury__rational_scalar_common_4[2];
#line 197 "rational.m"
                MR_Word mercury__rational__V_3_49 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 197 "rational.m"
                MR_Word mercury__rational__C_5_52;

#line 129 "integer.opt"
                {
#line 129 "integer.opt"
                  mercury__integer____Compare____integer_0_0(&mercury__rational__C_5_52, mercury__rational__Den_5, mercury__rational__V_40_40);
                }
#line 39 "integer.opt"
                mercury__rational__succeeded = (mercury__rational__C_5_52 == (MR_Integer) 1);
#line 195 "rational.m"
                if (mercury__rational__succeeded)
#line 197 "rational.m"
                  {
#line 197 "rational.m"
                    MR_Word mercury__rational__V_5_61 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 197 "rational.m"
                    MR_Word mercury__rational__Digits0_4_65 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__rational_scalar_common_4[0]);
#line 197 "rational.m"
                    MR_Word mercury__rational__Digits_5_67;

#line 123 "integer.opt"
                    {
#line 123 "integer.opt"
                      mercury__integer__neg_list_2_p_0(mercury__rational__Digits0_4_65, &mercury__rational__Digits_5_67);
                    }
#line 121 "integer.opt"
                    {
#line 121 "integer.opt"
                      mercury__rational__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 121 "integer.opt"
                      MR_hl_field(MR_mktag(0), mercury__rational__V_13_13, 0) = ((MR_Box) ((MR_Integer) -1));
#line 121 "integer.opt"
                      MR_hl_field(MR_mktag(0), mercury__rational__V_13_13, 1) = ((MR_Box) (mercury__rational__Digits_5_67));
#line 121 "integer.opt"
                    }
#line 197 "rational.m"
                  }
#line 195 "rational.m"
                else
#line 105 "integer.opt"
                  {
#line 105 "integer.opt"
                    MR_Word mercury__rational__V_3_70 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__rational_scalar_common_4[0]);
#line 105 "integer.opt"
                    MR_Word mercury__rational__V_5_72 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 109 "integer.opt"
                    mercury__rational__V_13_13 = (MR_Word) &mercury__rational_scalar_common_4[1];
#line 105 "integer.opt"
                  }
#line 195 "rational.m"
              }
#line 80 "integer.opt"
            {
#line 80 "integer.opt"
              mercury__rational__Num2_8 = mercury__integer__big_mul_2_f_0(mercury__rational__Num_4, mercury__rational__V_13_13);
            }
#line 96 "integer.opt"
            {
#line 96 "integer.opt"
              mercury__rational__Den2_9 = mercury__integer__big_abs_1_f_0(mercury__rational__Den_5);
            }
#line 125 "integer.opt"
            {
#line 125 "integer.opt"
              mercury__integer__big_quot_rem_4_p_0(mercury__rational__Num2_8, mercury__rational__G_7, &mercury__rational__V_14_14, &mercury__rational___Rem_7_84);
            }
#line 125 "integer.opt"
            {
#line 125 "integer.opt"
              mercury__integer__big_quot_rem_4_p_0(mercury__rational__Den2_9, mercury__rational__G_7, &mercury__rational__V_15_15, &mercury__rational___Rem_7_91);
            }
#line 174 "rational.m"
            {
#line 174 "rational.m"
              mercury__rational__Rat_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 174 "rational.m"
              MR_hl_field(MR_mktag(0), mercury__rational__Rat_6, 0) = ((MR_Box) (mercury__rational__V_14_14));
#line 174 "rational.m"
              MR_hl_field(MR_mktag(0), mercury__rational__Rat_6, 1) = ((MR_Box) (mercury__rational__V_15_15));
#line 174 "rational.m"
            }
#line 171 "rational.m"
          }
#line 170 "rational.m"
      }
#line 168 "rational.m"
    return mercury__rational__Rat_6;
#line 168 "rational.m"
  }
#line 163 "rational.m"
}

#line 68 "rational.m"
MR_Word MR_CALL 
mercury__rational__zero_0_f_0(void)
#line 68 "rational.m"
{
#line 127 "rational.m"
  {
#line 127 "rational.m"
    MR_bool mercury__rational__succeeded;
#line 127 "rational.m"
    MR_Word mercury__rational__HeadVar__1_1 = (MR_Word) &mercury__rational_scalar_common_4[4];
#line 127 "rational.m"
    MR_Word mercury__rational__V_2_2 = (MR_Word) &mercury__rational_scalar_common_4[2];
#line 127 "rational.m"
    MR_Word mercury__rational__V_3_3 = (MR_Word) &mercury__rational_scalar_common_4[1];
#line 127 "rational.m"
    MR_Word mercury__rational__V_3_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 127 "rational.m"
    MR_Word mercury__rational__V_3_8 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__rational_scalar_common_4[0]);
#line 127 "rational.m"
    MR_Word mercury__rational__V_5_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 127 "rational.m"
    return mercury__rational__HeadVar__1_1;
#line 127 "rational.m"
  }
#line 68 "rational.m"
}

#line 66 "rational.m"
MR_Word MR_CALL 
mercury__rational__one_0_f_0(void)
#line 66 "rational.m"
{
#line 125 "rational.m"
  {
#line 125 "rational.m"
    MR_bool mercury__rational__succeeded;
#line 125 "rational.m"
    MR_Word mercury__rational__HeadVar__1_1 = (MR_Word) &mercury__rational_scalar_common_4[3];
#line 125 "rational.m"
    MR_Word mercury__rational__V_2_2 = (MR_Word) &mercury__rational_scalar_common_4[1];
#line 125 "rational.m"
    MR_Word mercury__rational__V_5_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 125 "rational.m"
    MR_Word mercury__rational__V_3_11 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__rational_scalar_common_4[0]);

#line 125 "rational.m"
    return mercury__rational__HeadVar__1_1;
#line 125 "rational.m"
  }
#line 66 "rational.m"
}

#line 64 "rational.m"
MR_Word MR_CALL 
mercury__rational__reciprocal_1_f_0(
#line 64 "rational.m"
  MR_Word mercury__rational__HeadVar__1_1)
#line 64 "rational.m"
{
#line 150 "rational.m"
  {
#line 150 "rational.m"
    MR_bool mercury__rational__succeeded;
#line 150 "rational.m"
    MR_Word mercury__rational__HeadVar__2_2;
#line 150 "rational.m"
    MR_Word mercury__rational__Num_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rational__HeadVar__1_1, (MR_Integer) 0)));
#line 150 "rational.m"
    MR_Word mercury__rational__Den_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rational__HeadVar__1_1, (MR_Integer) 1)));
#line 151 "rational.m"
    MR_Word mercury__rational__V_10_10 = (MR_Word) &mercury__rational_scalar_common_4[2];
#line 151 "rational.m"
    MR_Word mercury__rational__V_3_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 151 "rational.m"
    {
#line 151 "rational.m"
      mercury__rational__succeeded = mercury__integer____Unify____integer_0_0(mercury__rational__Num_3, mercury__rational__V_10_10);
    }
#line 150 "rational.m"
    if (mercury__rational__succeeded)
#line 152 "rational.m"
      {
#line 152 "rational.m"
        MR_Word mercury__rational__TypeCtorInfo_9_9 = (MR_Word) &mercury__rational__rational__type_ctor_info_rational_0;
#line 150 "rational.m"
        MR_Box mercury__rational__conv0_HeadVar__2_2;

#line 150 "rational.m"
        {
#line 150 "rational.m"
          mercury__rational__conv0_HeadVar__2_2 = mercury__require__func_error_1_f_0(mercury__rational__TypeCtorInfo_9_9, (MR_String) "rational.reciprocal: division by zero");
        }
#line 150 "rational.m"
        mercury__rational__HeadVar__2_2 = ((MR_Word) mercury__rational__conv0_HeadVar__2_2);
#line 152 "rational.m"
      }
#line 150 "rational.m"
    else
#line 154 "rational.m"
      {
#line 154 "rational.m"
        MR_Word mercury__rational__V_6_6;
#line 154 "rational.m"
        MR_Word mercury__rational__V_7_7;
#line 154 "rational.m"
        MR_Word mercury__rational__V_8_8;
#line 195 "rational.m"
        MR_Word mercury__rational__V_17_17 = (MR_Word) &mercury__rational_scalar_common_4[2];
#line 196 "rational.m"
        MR_Word mercury__rational__V_3_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 196 "rational.m"
        {
#line 196 "rational.m"
          mercury__rational__succeeded = mercury__integer____Unify____integer_0_0(mercury__rational__Num_3, mercury__rational__V_17_17);
        }
#line 195 "rational.m"
        if (mercury__rational__succeeded)
#line 102 "integer.opt"
          mercury__rational__V_7_7 = mercury__rational__V_17_17;
#line 195 "rational.m"
        else
#line 195 "rational.m"
          {
#line 197 "rational.m"
            MR_Word mercury__rational__V_15_15 = (MR_Word) &mercury__rational_scalar_common_4[2];
#line 197 "rational.m"
            MR_Word mercury__rational__V_3_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 197 "rational.m"
            MR_Word mercury__rational__C_5_27;

#line 129 "integer.opt"
            {
#line 129 "integer.opt"
              mercury__integer____Compare____integer_0_0(&mercury__rational__C_5_27, mercury__rational__Num_3, mercury__rational__V_15_15);
            }
#line 39 "integer.opt"
            mercury__rational__succeeded = (mercury__rational__C_5_27 == (MR_Integer) 1);
#line 195 "rational.m"
            if (mercury__rational__succeeded)
#line 197 "rational.m"
              {
#line 197 "rational.m"
                MR_Word mercury__rational__V_5_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 197 "rational.m"
                MR_Word mercury__rational__Digits0_4_40 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__rational_scalar_common_4[0]);
#line 197 "rational.m"
                MR_Word mercury__rational__Digits_5_42;

#line 123 "integer.opt"
                {
#line 123 "integer.opt"
                  mercury__integer__neg_list_2_p_0(mercury__rational__Digits0_4_40, &mercury__rational__Digits_5_42);
                }
#line 121 "integer.opt"
                {
#line 121 "integer.opt"
                  mercury__rational__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 121 "integer.opt"
                  MR_hl_field(MR_mktag(0), mercury__rational__V_7_7, 0) = ((MR_Box) ((MR_Integer) -1));
#line 121 "integer.opt"
                  MR_hl_field(MR_mktag(0), mercury__rational__V_7_7, 1) = ((MR_Box) (mercury__rational__Digits_5_42));
#line 121 "integer.opt"
                }
#line 197 "rational.m"
              }
#line 195 "rational.m"
            else
#line 105 "integer.opt"
              {
#line 105 "integer.opt"
                MR_Word mercury__rational__V_3_45 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__rational_scalar_common_4[0]);
#line 105 "integer.opt"
                MR_Word mercury__rational__V_5_47 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 109 "integer.opt"
                mercury__rational__V_7_7 = (MR_Word) &mercury__rational_scalar_common_4[1];
#line 105 "integer.opt"
              }
#line 195 "rational.m"
          }
#line 80 "integer.opt"
        {
#line 80 "integer.opt"
          mercury__rational__V_6_6 = mercury__integer__big_mul_2_f_0(mercury__rational__V_7_7, mercury__rational__Den_4);
        }
#line 96 "integer.opt"
        {
#line 96 "integer.opt"
          mercury__rational__V_8_8 = mercury__integer__big_abs_1_f_0(mercury__rational__Num_3);
        }
#line 150 "rational.m"
        {
#line 150 "rational.m"
          mercury__rational__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 150 "rational.m"
          MR_hl_field(MR_mktag(0), mercury__rational__HeadVar__2_2, 0) = ((MR_Box) (mercury__rational__V_6_6));
#line 150 "rational.m"
          MR_hl_field(MR_mktag(0), mercury__rational__HeadVar__2_2, 1) = ((MR_Box) (mercury__rational__V_8_8));
#line 150 "rational.m"
        }
#line 154 "rational.m"
      }
#line 150 "rational.m"
    return mercury__rational__HeadVar__2_2;
#line 150 "rational.m"
  }
#line 64 "rational.m"
}

#line 62 "rational.m"
MR_Word MR_CALL 
mercury__rational__abs_1_f_0(
#line 62 "rational.m"
  MR_Word mercury__rational__HeadVar__1_1)
#line 62 "rational.m"
{
#line 161 "rational.m"
  {
#line 161 "rational.m"
    MR_bool mercury__rational__succeeded;
#line 161 "rational.m"
    MR_Word mercury__rational__HeadVar__2_2;
#line 161 "rational.m"
    MR_Word mercury__rational__Num_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rational__HeadVar__1_1, (MR_Integer) 0)));
#line 161 "rational.m"
    MR_Word mercury__rational__Den_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rational__HeadVar__1_1, (MR_Integer) 1)));
#line 161 "rational.m"
    MR_Word mercury__rational__V_5_5;

#line 96 "integer.opt"
    {
#line 96 "integer.opt"
      mercury__rational__V_5_5 = mercury__integer__big_abs_1_f_0(mercury__rational__Num_3);
    }
#line 161 "rational.m"
    {
#line 161 "rational.m"
      mercury__rational__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 161 "rational.m"
      MR_hl_field(MR_mktag(0), mercury__rational__HeadVar__2_2, 0) = ((MR_Box) (mercury__rational__V_5_5));
#line 161 "rational.m"
      MR_hl_field(MR_mktag(0), mercury__rational__HeadVar__2_2, 1) = ((MR_Box) (mercury__rational__Den_4));
#line 161 "rational.m"
    }
#line 161 "rational.m"
    return mercury__rational__HeadVar__2_2;
#line 161 "rational.m"
  }
#line 62 "rational.m"
}

#line 60 "rational.m"
MR_Word MR_CALL 
mercury__rational__denom_1_f_0(
#line 60 "rational.m"
  MR_Word mercury__rational__HeadVar__1_1)
#line 60 "rational.m"
{
#line 159 "rational.m"
  {
#line 159 "rational.m"
    MR_bool mercury__rational__succeeded;
#line 159 "rational.m"
    MR_Word mercury__rational__Den_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rational__HeadVar__1_1, (MR_Integer) 1)));
#line 159 "rational.m"
    MR_Word mercury__rational__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rational__HeadVar__1_1, (MR_Integer) 0)));

#line 159 "rational.m"
    return mercury__rational__Den_4;
#line 159 "rational.m"
  }
#line 60 "rational.m"
}

#line 58 "rational.m"
MR_Word MR_CALL 
mercury__rational__numer_1_f_0(
#line 58 "rational.m"
  MR_Word mercury__rational__HeadVar__1_1)
#line 58 "rational.m"
{
#line 157 "rational.m"
  {
#line 157 "rational.m"
    MR_bool mercury__rational__succeeded;
#line 157 "rational.m"
    MR_Word mercury__rational__Num_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rational__HeadVar__1_1, (MR_Integer) 0)));
#line 157 "rational.m"
    MR_Word mercury__rational__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rational__HeadVar__1_1, (MR_Integer) 1)));

#line 157 "rational.m"
    return mercury__rational__Num_3;
#line 157 "rational.m"
  }
#line 58 "rational.m"
}

#line 56 "rational.m"
MR_Word MR_CALL 
mercury__rational__f_slash_2_f_0(
#line 56 "rational.m"
  MR_Word mercury__rational__R1_4,
#line 56 "rational.m"
  MR_Word mercury__rational__R2_5)
#line 56 "rational.m"
{
#line 148 "rational.m"
  {
#line 148 "rational.m"
    MR_bool mercury__rational__succeeded;
#line 148 "rational.m"
    MR_Word mercury__rational__HeadVar__3_3;
#line 148 "rational.m"
    MR_Word mercury__rational__V_6_6;

#line 148 "rational.m"
    {
#line 148 "rational.m"
      mercury__rational__V_6_6 = mercury__rational__reciprocal_1_f_0(mercury__rational__R2_5);
    }
#line 148 "rational.m"
    {
#line 148 "rational.m"
      return mercury__rational__HeadVar__3_3 = mercury__rational__f_times_2_f_0(mercury__rational__R1_4, mercury__rational__V_6_6);
    }
#line 148 "rational.m"
    return mercury__rational__HeadVar__3_3;
#line 148 "rational.m"
  }
#line 56 "rational.m"
}

#line 54 "rational.m"
MR_Word MR_CALL 
mercury__rational__f_times_2_f_0(
#line 54 "rational.m"
  MR_Word mercury__rational__HeadVar__1_1,
#line 54 "rational.m"
  MR_Word mercury__rational__HeadVar__2_2)
#line 54 "rational.m"
{
#line 142 "rational.m"
  {
#line 142 "rational.m"
    MR_bool mercury__rational__succeeded;
#line 142 "rational.m"
    MR_Word mercury__rational__HeadVar__3_3;
#line 142 "rational.m"
    MR_Word mercury__rational__An_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rational__HeadVar__1_1, (MR_Integer) 0)));
#line 142 "rational.m"
    MR_Word mercury__rational__Ad_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rational__HeadVar__1_1, (MR_Integer) 1)));
#line 142 "rational.m"
    MR_Word mercury__rational__Bn_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rational__HeadVar__2_2, (MR_Integer) 0)));
#line 142 "rational.m"
    MR_Word mercury__rational__Bd_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rational__HeadVar__2_2, (MR_Integer) 1)));
#line 142 "rational.m"
    MR_Word mercury__rational__Numer_8;
#line 142 "rational.m"
    MR_Word mercury__rational__Denom_9;
#line 142 "rational.m"
    MR_Word mercury__rational__G1_10;
#line 142 "rational.m"
    MR_Word mercury__rational__G2_11;
#line 142 "rational.m"
    MR_Word mercury__rational__V_12_12;
#line 142 "rational.m"
    MR_Word mercury__rational__V_13_13;
#line 142 "rational.m"
    MR_Word mercury__rational__V_14_14;
#line 142 "rational.m"
    MR_Word mercury__rational__V_15_15;
#line 142 "rational.m"
    MR_Word mercury__rational__V_18_18;
#line 142 "rational.m"
    MR_Word mercury__rational__V_19_19;
#line 142 "rational.m"
    MR_Word mercury__rational__V_26_26;
#line 142 "rational.m"
    MR_Word mercury__rational__V_27_27;
#line 125 "integer.opt"
    MR_Word mercury__rational___Rem_7_38;
#line 125 "integer.opt"
    MR_Word mercury__rational___Rem_7_45;
#line 125 "integer.opt"
    MR_Word mercury__rational___Rem_7_55;
#line 125 "integer.opt"
    MR_Word mercury__rational___Rem_7_62;

#line 96 "integer.opt"
    {
#line 96 "integer.opt"
      mercury__rational__V_18_18 = mercury__integer__big_abs_1_f_0(mercury__rational__An_4);
    }
#line 96 "integer.opt"
    {
#line 96 "integer.opt"
      mercury__rational__V_19_19 = mercury__integer__big_abs_1_f_0(mercury__rational__Bd_7);
    }
#line 179 "rational.m"
    {
#line 179 "rational.m"
      mercury__rational__G1_10 = mercury__rational__gcd_2_2_f_0(mercury__rational__V_18_18, mercury__rational__V_19_19);
    }
#line 96 "integer.opt"
    {
#line 96 "integer.opt"
      mercury__rational__V_26_26 = mercury__integer__big_abs_1_f_0(mercury__rational__Ad_5);
    }
#line 96 "integer.opt"
    {
#line 96 "integer.opt"
      mercury__rational__V_27_27 = mercury__integer__big_abs_1_f_0(mercury__rational__Bn_6);
    }
#line 179 "rational.m"
    {
#line 179 "rational.m"
      mercury__rational__G2_11 = mercury__rational__gcd_2_2_f_0(mercury__rational__V_26_26, mercury__rational__V_27_27);
    }
#line 125 "integer.opt"
    {
#line 125 "integer.opt"
      mercury__integer__big_quot_rem_4_p_0(mercury__rational__An_4, mercury__rational__G1_10, &mercury__rational__V_12_12, &mercury__rational___Rem_7_38);
    }
#line 125 "integer.opt"
    {
#line 125 "integer.opt"
      mercury__integer__big_quot_rem_4_p_0(mercury__rational__Bn_6, mercury__rational__G2_11, &mercury__rational__V_13_13, &mercury__rational___Rem_7_45);
    }
#line 80 "integer.opt"
    {
#line 80 "integer.opt"
      mercury__rational__Numer_8 = mercury__integer__big_mul_2_f_0(mercury__rational__V_12_12, mercury__rational__V_13_13);
    }
#line 125 "integer.opt"
    {
#line 125 "integer.opt"
      mercury__integer__big_quot_rem_4_p_0(mercury__rational__Ad_5, mercury__rational__G2_11, &mercury__rational__V_14_14, &mercury__rational___Rem_7_55);
    }
#line 125 "integer.opt"
    {
#line 125 "integer.opt"
      mercury__integer__big_quot_rem_4_p_0(mercury__rational__Bd_7, mercury__rational__G1_10, &mercury__rational__V_15_15, &mercury__rational___Rem_7_62);
    }
#line 80 "integer.opt"
    {
#line 80 "integer.opt"
      mercury__rational__Denom_9 = mercury__integer__big_mul_2_f_0(mercury__rational__V_14_14, mercury__rational__V_15_15);
    }
#line 142 "rational.m"
    {
#line 142 "rational.m"
      return mercury__rational__HeadVar__3_3 = mercury__rational__rational_norm_2_f_0(mercury__rational__Numer_8, mercury__rational__Denom_9);
    }
#line 142 "rational.m"
    return mercury__rational__HeadVar__3_3;
#line 142 "rational.m"
  }
#line 54 "rational.m"
}

#line 52 "rational.m"
MR_Word MR_CALL 
mercury__rational__f_minus_2_f_0(
#line 52 "rational.m"
  MR_Word mercury__rational__R1_4,
#line 52 "rational.m"
  MR_Word mercury__rational__R2_5)
#line 52 "rational.m"
{
#line 139 "rational.m"
  {
#line 139 "rational.m"
    MR_bool mercury__rational__succeeded;
#line 139 "rational.m"
    MR_Word mercury__rational__HeadVar__3_3;
#line 139 "rational.m"
    MR_Word mercury__rational__V_6_6;
#line 139 "rational.m"
    MR_Word mercury__rational__Num_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rational__R2_5, (MR_Integer) 0)));
#line 139 "rational.m"
    MR_Word mercury__rational__Den_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rational__R2_5, (MR_Integer) 1)));
#line 139 "rational.m"
    MR_Word mercury__rational__V_9_9;
#line 139 "rational.m"
    MR_Integer mercury__rational__S_3_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__rational__Num_7, (MR_Integer) 0)));
#line 139 "rational.m"
    MR_Word mercury__rational__Digits0_4_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rational__Num_7, (MR_Integer) 1)));
#line 139 "rational.m"
    MR_Integer mercury__rational__V_6_14 = ((MR_Integer) 0 - mercury__rational__S_3_12);
#line 139 "rational.m"
    MR_Word mercury__rational__Digits_5_15;

#line 123 "integer.opt"
    {
#line 123 "integer.opt"
      mercury__integer__neg_list_2_p_0(mercury__rational__Digits0_4_13, &mercury__rational__Digits_5_15);
    }
#line 121 "integer.opt"
    {
#line 121 "integer.opt"
      mercury__rational__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 121 "integer.opt"
      MR_hl_field(MR_mktag(0), mercury__rational__V_9_9, 0) = ((MR_Box) (mercury__rational__V_6_14));
#line 121 "integer.opt"
      MR_hl_field(MR_mktag(0), mercury__rational__V_9_9, 1) = ((MR_Box) (mercury__rational__Digits_5_15));
#line 121 "integer.opt"
    }
#line 131 "rational.m"
    {
#line 131 "rational.m"
      mercury__rational__V_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 131 "rational.m"
      MR_hl_field(MR_mktag(0), mercury__rational__V_6_6, 0) = ((MR_Box) (mercury__rational__V_9_9));
#line 131 "rational.m"
      MR_hl_field(MR_mktag(0), mercury__rational__V_6_6, 1) = ((MR_Box) (mercury__rational__Den_8));
#line 131 "rational.m"
    }
#line 139 "rational.m"
    {
#line 139 "rational.m"
      return mercury__rational__HeadVar__3_3 = mercury__rational__f_plus_2_f_0(mercury__rational__R1_4, mercury__rational__V_6_6);
    }
#line 139 "rational.m"
    return mercury__rational__HeadVar__3_3;
#line 139 "rational.m"
  }
#line 52 "rational.m"
}

#line 50 "rational.m"
MR_Word MR_CALL 
mercury__rational__f_plus_2_f_0(
#line 50 "rational.m"
  MR_Word mercury__rational__HeadVar__1_1,
#line 50 "rational.m"
  MR_Word mercury__rational__HeadVar__2_2)
#line 50 "rational.m"
{
#line 133 "rational.m"
  {
#line 133 "rational.m"
    MR_bool mercury__rational__succeeded;
#line 133 "rational.m"
    MR_Word mercury__rational__HeadVar__3_3;
#line 133 "rational.m"
    MR_Word mercury__rational__An_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rational__HeadVar__1_1, (MR_Integer) 0)));
#line 133 "rational.m"
    MR_Word mercury__rational__Ad_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rational__HeadVar__1_1, (MR_Integer) 1)));
#line 133 "rational.m"
    MR_Word mercury__rational__Bn_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rational__HeadVar__2_2, (MR_Integer) 0)));
#line 133 "rational.m"
    MR_Word mercury__rational__Bd_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rational__HeadVar__2_2, (MR_Integer) 1)));
#line 133 "rational.m"
    MR_Word mercury__rational__Numer_8;
#line 133 "rational.m"
    MR_Word mercury__rational__M_9;
#line 133 "rational.m"
    MR_Word mercury__rational__CA_10;
#line 133 "rational.m"
    MR_Word mercury__rational__CB_11;
#line 133 "rational.m"
    MR_Word mercury__rational__V_12_12;
#line 133 "rational.m"
    MR_Word mercury__rational__V_13_13;
#line 187 "rational.m"
    MR_Word mercury__rational__V_19_19 = (MR_Word) &mercury__rational_scalar_common_4[2];
#line 188 "rational.m"
    MR_Word mercury__rational__V_3_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 125 "integer.opt"
    MR_Word mercury__rational___Rem_7_57;
#line 125 "integer.opt"
    MR_Word mercury__rational___Rem_7_64;

#line 188 "rational.m"
    {
#line 188 "rational.m"
      mercury__rational__succeeded = mercury__integer____Unify____integer_0_0(mercury__rational__Ad_5, mercury__rational__V_19_19);
    }
#line 187 "rational.m"
    if (mercury__rational__succeeded)
#line 102 "integer.opt"
      mercury__rational__M_9 = mercury__rational__V_19_19;
#line 187 "rational.m"
    else
#line 187 "rational.m"
      {
#line 187 "rational.m"
        MR_Word mercury__rational__V_20_20 = (MR_Word) &mercury__rational_scalar_common_4[2];
#line 189 "rational.m"
        MR_Word mercury__rational__V_3_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 189 "rational.m"
        {
#line 189 "rational.m"
          mercury__rational__succeeded = mercury__integer____Unify____integer_0_0(mercury__rational__Bd_7, mercury__rational__V_20_20);
        }
#line 187 "rational.m"
        if (mercury__rational__succeeded)
#line 102 "integer.opt"
          mercury__rational__M_9 = mercury__rational__V_20_20;
#line 187 "rational.m"
        else
#line 190 "rational.m"
          {
#line 190 "rational.m"
            MR_Word mercury__rational__V_16_16;
#line 190 "rational.m"
            MR_Word mercury__rational__V_17_17;
#line 190 "rational.m"
            MR_Word mercury__rational__V_18_18;
#line 190 "rational.m"
            MR_Word mercury__rational__V_33_33;
#line 190 "rational.m"
            MR_Word mercury__rational__V_34_34;
#line 125 "integer.opt"
            MR_Word mercury__rational___Rem_7_45;

#line 96 "integer.opt"
            {
#line 96 "integer.opt"
              mercury__rational__V_33_33 = mercury__integer__big_abs_1_f_0(mercury__rational__Ad_5);
            }
#line 96 "integer.opt"
            {
#line 96 "integer.opt"
              mercury__rational__V_34_34 = mercury__integer__big_abs_1_f_0(mercury__rational__Bd_7);
            }
#line 179 "rational.m"
            {
#line 179 "rational.m"
              mercury__rational__V_18_18 = mercury__rational__gcd_2_2_f_0(mercury__rational__V_33_33, mercury__rational__V_34_34);
            }
#line 125 "integer.opt"
            {
#line 125 "integer.opt"
              mercury__integer__big_quot_rem_4_p_0(mercury__rational__Ad_5, mercury__rational__V_18_18, &mercury__rational__V_17_17, &mercury__rational___Rem_7_45);
            }
#line 80 "integer.opt"
            {
#line 80 "integer.opt"
              mercury__rational__V_16_16 = mercury__integer__big_mul_2_f_0(mercury__rational__V_17_17, mercury__rational__Bd_7);
            }
#line 96 "integer.opt"
            {
#line 96 "integer.opt"
              mercury__rational__M_9 = mercury__integer__big_abs_1_f_0(mercury__rational__V_16_16);
            }
#line 190 "rational.m"
          }
#line 187 "rational.m"
      }
#line 125 "integer.opt"
    {
#line 125 "integer.opt"
      mercury__integer__big_quot_rem_4_p_0(mercury__rational__M_9, mercury__rational__Ad_5, &mercury__rational__CA_10, &mercury__rational___Rem_7_57);
    }
#line 125 "integer.opt"
    {
#line 125 "integer.opt"
      mercury__integer__big_quot_rem_4_p_0(mercury__rational__M_9, mercury__rational__Bd_7, &mercury__rational__CB_11, &mercury__rational___Rem_7_64);
    }
#line 80 "integer.opt"
    {
#line 80 "integer.opt"
      mercury__rational__V_12_12 = mercury__integer__big_mul_2_f_0(mercury__rational__An_4, mercury__rational__CA_10);
    }
#line 80 "integer.opt"
    {
#line 80 "integer.opt"
      mercury__rational__V_13_13 = mercury__integer__big_mul_2_f_0(mercury__rational__Bn_6, mercury__rational__CB_11);
    }
#line 75 "integer.opt"
    {
#line 75 "integer.opt"
      mercury__rational__Numer_8 = mercury__integer__big_plus_2_f_0(mercury__rational__V_12_12, mercury__rational__V_13_13);
    }
#line 133 "rational.m"
    {
#line 133 "rational.m"
      return mercury__rational__HeadVar__3_3 = mercury__rational__rational_norm_2_f_0(mercury__rational__Numer_8, mercury__rational__M_9);
    }
#line 133 "rational.m"
    return mercury__rational__HeadVar__3_3;
#line 133 "rational.m"
  }
#line 50 "rational.m"
}

#line 48 "rational.m"
MR_Word MR_CALL 
mercury__rational__f_minus_1_f_0(
#line 48 "rational.m"
  MR_Word mercury__rational__HeadVar__1_1)
#line 48 "rational.m"
{
#line 131 "rational.m"
  {
#line 131 "rational.m"
    MR_bool mercury__rational__succeeded;
#line 131 "rational.m"
    MR_Word mercury__rational__HeadVar__2_2;
#line 131 "rational.m"
    MR_Word mercury__rational__Num_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rational__HeadVar__1_1, (MR_Integer) 0)));
#line 131 "rational.m"
    MR_Word mercury__rational__Den_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rational__HeadVar__1_1, (MR_Integer) 1)));
#line 131 "rational.m"
    MR_Word mercury__rational__V_5_5;
#line 131 "rational.m"
    MR_Integer mercury__rational__S_3_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__rational__Num_3, (MR_Integer) 0)));
#line 131 "rational.m"
    MR_Word mercury__rational__Digits0_4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rational__Num_3, (MR_Integer) 1)));
#line 131 "rational.m"
    MR_Integer mercury__rational__V_6_10 = ((MR_Integer) 0 - mercury__rational__S_3_8);
#line 131 "rational.m"
    MR_Word mercury__rational__Digits_5_11;

#line 123 "integer.opt"
    {
#line 123 "integer.opt"
      mercury__integer__neg_list_2_p_0(mercury__rational__Digits0_4_9, &mercury__rational__Digits_5_11);
    }
#line 121 "integer.opt"
    {
#line 121 "integer.opt"
      mercury__rational__V_5_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 121 "integer.opt"
      MR_hl_field(MR_mktag(0), mercury__rational__V_5_5, 0) = ((MR_Box) (mercury__rational__V_6_10));
#line 121 "integer.opt"
      MR_hl_field(MR_mktag(0), mercury__rational__V_5_5, 1) = ((MR_Box) (mercury__rational__Digits_5_11));
#line 121 "integer.opt"
    }
#line 131 "rational.m"
    {
#line 131 "rational.m"
      mercury__rational__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 131 "rational.m"
      MR_hl_field(MR_mktag(0), mercury__rational__HeadVar__2_2, 0) = ((MR_Box) (mercury__rational__V_5_5));
#line 131 "rational.m"
      MR_hl_field(MR_mktag(0), mercury__rational__HeadVar__2_2, 1) = ((MR_Box) (mercury__rational__Den_4));
#line 131 "rational.m"
    }
#line 131 "rational.m"
    return mercury__rational__HeadVar__2_2;
#line 131 "rational.m"
  }
#line 48 "rational.m"
}

#line 46 "rational.m"
MR_Word MR_CALL 
mercury__rational__f_plus_1_f_0(
#line 46 "rational.m"
  MR_Word mercury__rational__Rat_3)
#line 46 "rational.m"
{
#line 129 "rational.m"
  {
#line 129 "rational.m"
    MR_bool mercury__rational__succeeded;
#line 129 "rational.m"
    MR_Word mercury__rational__Rat_2 = mercury__rational__Rat_3;

#line 129 "rational.m"
    return mercury__rational__Rat_2;
#line 129 "rational.m"
  }
#line 46 "rational.m"
}

#line 42 "rational.m"
MR_Word MR_CALL 
mercury__rational__from_integers_2_f_0(
#line 42 "rational.m"
  MR_Word mercury__rational__Num_4,
#line 42 "rational.m"
  MR_Word mercury__rational__Den_5)
#line 42 "rational.m"
{
#line 118 "rational.m"
  {
#line 118 "rational.m"
    MR_bool mercury__rational__succeeded;
#line 118 "rational.m"
    MR_Word mercury__rational__HeadVar__3_3;

#line 118 "rational.m"
    {
#line 118 "rational.m"
      return mercury__rational__HeadVar__3_3 = mercury__rational__rational_norm_2_f_0(mercury__rational__Num_4, mercury__rational__Den_5);
    }
#line 118 "rational.m"
    return mercury__rational__HeadVar__3_3;
#line 118 "rational.m"
  }
#line 42 "rational.m"
}

#line 40 "rational.m"
MR_Word MR_CALL 
mercury__rational__from_integer_1_f_0(
#line 40 "rational.m"
  MR_Word mercury__rational__Integer_3)
#line 40 "rational.m"
{
#line 116 "rational.m"
  {
#line 116 "rational.m"
    MR_bool mercury__rational__succeeded;
#line 116 "rational.m"
    MR_Word mercury__rational__HeadVar__2_2;
#line 116 "rational.m"
    MR_Word mercury__rational__V_4_4 = (MR_Word) &mercury__rational_scalar_common_4[1];
#line 116 "rational.m"
    MR_Word mercury__rational__V_3_7 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__rational_scalar_common_4[0]);
#line 116 "rational.m"
    MR_Word mercury__rational__V_5_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 116 "rational.m"
    {
#line 116 "rational.m"
      return mercury__rational__HeadVar__2_2 = mercury__rational__rational_norm_2_f_0(mercury__rational__Integer_3, mercury__rational__V_4_4);
    }
#line 116 "rational.m"
    return mercury__rational__HeadVar__2_2;
#line 116 "rational.m"
  }
#line 40 "rational.m"
}

#line 38 "rational.m"
MR_Word MR_CALL 
mercury__rational__rational_2_f_0(
#line 38 "rational.m"
  MR_Integer mercury__rational__Num_4,
#line 38 "rational.m"
  MR_Integer mercury__rational__Den_5)
#line 38 "rational.m"
{
#line 114 "rational.m"
  {
#line 114 "rational.m"
    MR_bool mercury__rational__succeeded;
#line 114 "rational.m"
    MR_Word mercury__rational__HeadVar__3_3;
#line 114 "rational.m"
    MR_Word mercury__rational__V_6_6;
#line 114 "rational.m"
    MR_Word mercury__rational__V_7_7;

#line 58 "integer.opt"
    {
#line 58 "integer.opt"
      mercury__rational__V_6_6 = mercury__integer__int_to_integer_1_f_0(mercury__rational__Num_4);
    }
#line 58 "integer.opt"
    {
#line 58 "integer.opt"
      mercury__rational__V_7_7 = mercury__integer__int_to_integer_1_f_0(mercury__rational__Den_5);
    }
#line 114 "rational.m"
    {
#line 114 "rational.m"
      return mercury__rational__HeadVar__3_3 = mercury__rational__rational_norm_2_f_0(mercury__rational__V_6_6, mercury__rational__V_7_7);
    }
#line 114 "rational.m"
    return mercury__rational__HeadVar__3_3;
#line 114 "rational.m"
  }
#line 38 "rational.m"
}

#line 36 "rational.m"
MR_Word MR_CALL 
mercury__rational__rational_1_f_0(
#line 36 "rational.m"
  MR_Integer mercury__rational__Int_3)
#line 36 "rational.m"
{
#line 112 "rational.m"
  {
#line 112 "rational.m"
    MR_bool mercury__rational__succeeded;
#line 112 "rational.m"
    MR_Word mercury__rational__HeadVar__2_2;
#line 112 "rational.m"
    MR_Word mercury__rational__V_4_4;
#line 112 "rational.m"
    MR_Word mercury__rational__V_5_5;
#line 112 "rational.m"
    MR_Word mercury__rational__V_3_10;
#line 112 "rational.m"
    MR_Word mercury__rational__V_5_12;

#line 58 "integer.opt"
    {
#line 58 "integer.opt"
      mercury__rational__V_4_4 = mercury__integer__int_to_integer_1_f_0(mercury__rational__Int_3);
    }
#line 117 "integer.opt"
    mercury__rational__V_5_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 113 "integer.opt"
    mercury__rational__V_3_10 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__rational_scalar_common_4[0]);
#line 109 "integer.opt"
    mercury__rational__V_5_5 = (MR_Word) &mercury__rational_scalar_common_4[1];
#line 112 "rational.m"
    {
#line 112 "rational.m"
      return mercury__rational__HeadVar__2_2 = mercury__rational__rational_norm_2_f_0(mercury__rational__V_4_4, mercury__rational__V_5_5);
    }
#line 112 "rational.m"
    return mercury__rational__HeadVar__2_2;
#line 112 "rational.m"
  }
#line 36 "rational.m"
}

#line 34 "rational.m"
MR_bool MR_CALL 
mercury__rational__f_greater_or_equal_2_p_0(
#line 34 "rational.m"
  MR_Word mercury__rational__R1_3,
#line 34 "rational.m"
  MR_Word mercury__rational__R2_4)
#line 34 "rational.m"
{
#line 108 "rational.m"
  {
#line 108 "rational.m"
    MR_bool mercury__rational__succeeded;
#line 108 "rational.m"
    MR_Word mercury__rational__Cmp_5;

#line 109 "rational.m"
    {
#line 109 "rational.m"
      mercury__rational__Cmp_5 = mercury__rational__cmp_2_f_0(mercury__rational__R1_3, mercury__rational__R2_4);
    }
#line 110 "rational.m"
    if ((mercury__rational__Cmp_5 == (MR_Integer) 0))
#line 110 "rational.m"
      mercury__rational__succeeded = MR_TRUE;
#line 110 "rational.m"
    else
#line 110 "rational.m"
      if ((mercury__rational__Cmp_5 == (MR_Integer) 2))
#line 110 "rational.m"
        mercury__rational__succeeded = MR_TRUE;
#line 110 "rational.m"
      else
#line 110 "rational.m"
        mercury__rational__succeeded = MR_FALSE;
#line 108 "rational.m"
    return mercury__rational__succeeded;
#line 108 "rational.m"
  }
#line 34 "rational.m"
}

#line 32 "rational.m"
MR_bool MR_CALL 
mercury__rational__f_less_or_equal_2_p_0(
#line 32 "rational.m"
  MR_Word mercury__rational__R1_3,
#line 32 "rational.m"
  MR_Word mercury__rational__R2_4)
#line 32 "rational.m"
{
#line 104 "rational.m"
  {
#line 104 "rational.m"
    MR_bool mercury__rational__succeeded;
#line 104 "rational.m"
    MR_Word mercury__rational__Cmp_5;

#line 105 "rational.m"
    {
#line 105 "rational.m"
      mercury__rational__Cmp_5 = mercury__rational__cmp_2_f_0(mercury__rational__R1_3, mercury__rational__R2_4);
    }
#line 106 "rational.m"
    if ((mercury__rational__Cmp_5 == (MR_Integer) 1))
#line 106 "rational.m"
      mercury__rational__succeeded = MR_TRUE;
#line 106 "rational.m"
    else
#line 106 "rational.m"
      if ((mercury__rational__Cmp_5 == (MR_Integer) 0))
#line 106 "rational.m"
        mercury__rational__succeeded = MR_TRUE;
#line 106 "rational.m"
      else
#line 106 "rational.m"
        mercury__rational__succeeded = MR_FALSE;
#line 104 "rational.m"
    return mercury__rational__succeeded;
#line 104 "rational.m"
  }
#line 32 "rational.m"
}

#line 30 "rational.m"
MR_bool MR_CALL 
mercury__rational__f_greater_than_2_p_0(
#line 30 "rational.m"
  MR_Word mercury__rational__R1_3,
#line 30 "rational.m"
  MR_Word mercury__rational__R2_4)
#line 30 "rational.m"
{
#line 100 "rational.m"
  {
#line 100 "rational.m"
    MR_bool mercury__rational__succeeded;
#line 100 "rational.m"
    MR_Word mercury__rational__Cmp_5;

#line 101 "rational.m"
    {
#line 101 "rational.m"
      mercury__rational__Cmp_5 = mercury__rational__cmp_2_f_0(mercury__rational__R1_3, mercury__rational__R2_4);
    }
#line 102 "rational.m"
    mercury__rational__succeeded = (mercury__rational__Cmp_5 == (MR_Integer) 2);
#line 100 "rational.m"
    return mercury__rational__succeeded;
#line 100 "rational.m"
  }
#line 30 "rational.m"
}

#line 28 "rational.m"
MR_bool MR_CALL 
mercury__rational__f_less_than_2_p_0(
#line 28 "rational.m"
  MR_Word mercury__rational__R1_3,
#line 28 "rational.m"
  MR_Word mercury__rational__R2_4)
#line 28 "rational.m"
{
#line 96 "rational.m"
  {
#line 96 "rational.m"
    MR_bool mercury__rational__succeeded;
#line 96 "rational.m"
    MR_Word mercury__rational__Cmp_5;

#line 97 "rational.m"
    {
#line 97 "rational.m"
      mercury__rational__Cmp_5 = mercury__rational__cmp_2_f_0(mercury__rational__R1_3, mercury__rational__R2_4);
    }
#line 98 "rational.m"
    mercury__rational__succeeded = (mercury__rational__Cmp_5 == (MR_Integer) 1);
#line 96 "rational.m"
    return mercury__rational__succeeded;
#line 96 "rational.m"
  }
#line 28 "rational.m"
}

void mercury__rational__init(void)
{
}

void mercury__rational__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__rational__rational__type_ctor_info_rational_0);
}

void mercury__rational__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module rational. */
