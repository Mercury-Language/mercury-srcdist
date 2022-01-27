/*
** Automatically generated from `math.m'
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


/* :- module math. */
/* :- implementation. */

/*
INIT mercury__math__init
ENDINIT
*/

#include "math.mih"


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




#line 93 "math.c"
static const MR_Integer mercury__math__math__functor_number_map_domain_error_0[1];

#line 96 "math.c"
static const MR_NotagFunctorDesc mercury__math__math__notag_functor_desc_domain_error_0;

#line 99 "math.c"
static const MR_DuFunctorDesc mercury__math__math__du_functor_desc_quadratic_roots_0_0;

#line 102 "math.c"
static const MR_PseudoTypeInfo mercury__math__math__field_types_quadratic_roots_0_1[1];

#line 105 "math.c"
static const MR_DuFunctorDesc mercury__math__math__du_functor_desc_quadratic_roots_0_1;

#line 108 "math.c"
static const MR_PseudoTypeInfo mercury__math__math__field_types_quadratic_roots_0_2[2];

#line 111 "math.c"
static const MR_DuFunctorDesc mercury__math__math__du_functor_desc_quadratic_roots_0_2;

#line 114 "math.c"
static const MR_DuFunctorDescPtr mercury__math__math__du_stag_ordered_quadratic_roots_0_0[1];

#line 117 "math.c"
static const MR_DuFunctorDescPtr mercury__math__math__du_stag_ordered_quadratic_roots_0_1[1];

#line 120 "math.c"
static const MR_DuFunctorDescPtr mercury__math__math__du_stag_ordered_quadratic_roots_0_2[1];

#line 123 "math.c"
static const MR_DuPtagLayout mercury__math__math__du_ptag_ordered_quadratic_roots_0[3];

#line 126 "math.c"
static const MR_DuFunctorDescPtr mercury__math__math__du_name_ordered_quadratic_roots_0[3];

#line 129 "math.c"
static const MR_Integer mercury__math__math__functor_number_map_quadratic_roots_0[3];

#line 132 "math.c"
static MR_bool MR_CALL 
mercury__math____Unify____domain_error_0_0_10001(
#line 135 "math.c"
  MR_Box mercury__math__wrapper_arg_1,
#line 137 "math.c"
  MR_Box mercury__math__wrapper_arg_2);

#line 140 "math.c"
static void MR_CALL 
mercury__math____Compare____domain_error_0_0_10001(
#line 143 "math.c"
  MR_Box * mercury__math__wrapper_arg_1,
#line 145 "math.c"
  MR_Box mercury__math__wrapper_arg_2,
#line 147 "math.c"
  MR_Box mercury__math__wrapper_arg_3);

#line 150 "math.c"
static MR_bool MR_CALL 
mercury__math____Unify____quadratic_roots_0_0_10001(
#line 153 "math.c"
  MR_Box mercury__math__wrapper_arg_1,
#line 155 "math.c"
  MR_Box mercury__math__wrapper_arg_2);

#line 158 "math.c"
static void MR_CALL 
mercury__math____Compare____quadratic_roots_0_0_10001(
#line 161 "math.c"
  MR_Box * mercury__math__wrapper_arg_1,
#line 163 "math.c"
  MR_Box mercury__math__wrapper_arg_2,
#line 165 "math.c"
  MR_Box mercury__math__wrapper_arg_3);

#line 18 "ops.opt"
static MR_Integer MR_CALL 
mercury__math__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 271 "math.m"
static MR_bool MR_CALL 
mercury__math__math_domain_checks_0_p_0(void);


static /* final */ const MR_Box mercury__math_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__math_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__math_scalar_common_3[2][5];




static /* final */ const MR_Box mercury__math_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__math_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__math_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__math_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__math_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__math_scalar_common_2[0])),
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



#line 251 "math.c"
static const MR_Integer mercury__math__math__functor_number_map_domain_error_0[1] = {
  (MR_Integer) 0
};

#line 256 "math.c"
static const MR_NotagFunctorDesc mercury__math__math__notag_functor_desc_domain_error_0 = {
  (MR_String) "domain_error",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  NULL
};

#line 263 "math.c"
const MR_TypeCtorInfo_Struct mercury__math__math__type_ctor_info_domain_error_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__math____Unify____domain_error_0_0_10001)),
  ((MR_Box) (mercury__math____Compare____domain_error_0_0_10001)),
  (MR_String) "math",
  (MR_String) "domain_error",
  {     &mercury__math__math__notag_functor_desc_domain_error_0 },
  {     &mercury__math__math__notag_functor_desc_domain_error_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__math__math__functor_number_map_domain_error_0
};

#line 280 "math.c"
static const MR_DuFunctorDesc mercury__math__math__du_functor_desc_quadratic_roots_0_0 = {
  (MR_String) "no_roots",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 295 "math.c"
static const MR_PseudoTypeInfo mercury__math__math__field_types_quadratic_roots_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
};

#line 300 "math.c"
static const MR_DuFunctorDesc mercury__math__math__du_functor_desc_quadratic_roots_0_1 = {
  (MR_String) "one_root",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__math__math__field_types_quadratic_roots_0_1,
  NULL,
  NULL,
  NULL
};

#line 315 "math.c"
static const MR_PseudoTypeInfo mercury__math__math__field_types_quadratic_roots_0_2[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
};

#line 321 "math.c"
static const MR_DuFunctorDesc mercury__math__math__du_functor_desc_quadratic_roots_0_2 = {
  (MR_String) "two_roots",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mercury__math__math__field_types_quadratic_roots_0_2,
  NULL,
  NULL,
  NULL
};

#line 336 "math.c"
static const MR_DuFunctorDescPtr mercury__math__math__du_stag_ordered_quadratic_roots_0_0[1] = {
  &mercury__math__math__du_functor_desc_quadratic_roots_0_0
};

#line 341 "math.c"
static const MR_DuFunctorDescPtr mercury__math__math__du_stag_ordered_quadratic_roots_0_1[1] = {
  &mercury__math__math__du_functor_desc_quadratic_roots_0_1
};

#line 346 "math.c"
static const MR_DuFunctorDescPtr mercury__math__math__du_stag_ordered_quadratic_roots_0_2[1] = {
  &mercury__math__math__du_functor_desc_quadratic_roots_0_2
};

#line 351 "math.c"
static const MR_DuPtagLayout mercury__math__math__du_ptag_ordered_quadratic_roots_0[3] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mercury__math__math__du_stag_ordered_quadratic_roots_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__math__math__du_stag_ordered_quadratic_roots_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__math__math__du_stag_ordered_quadratic_roots_0_2
  }
};

#line 370 "math.c"
static const MR_DuFunctorDescPtr mercury__math__math__du_name_ordered_quadratic_roots_0[3] = {
  &mercury__math__math__du_functor_desc_quadratic_roots_0_0,
  &mercury__math__math__du_functor_desc_quadratic_roots_0_1,
  &mercury__math__math__du_functor_desc_quadratic_roots_0_2
};

#line 377 "math.c"
static const MR_Integer mercury__math__math__functor_number_map_quadratic_roots_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

#line 384 "math.c"
const MR_TypeCtorInfo_Struct mercury__math__math__type_ctor_info_quadratic_roots_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__math____Unify____quadratic_roots_0_0_10001)),
  ((MR_Box) (mercury__math____Compare____quadratic_roots_0_0_10001)),
  (MR_String) "math",
  (MR_String) "quadratic_roots",
  {     mercury__math__math__du_name_ordered_quadratic_roots_0 },
  {     mercury__math__math__du_ptag_ordered_quadratic_roots_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mercury__math__math__functor_number_map_quadratic_roots_0
};

#line 401 "math.c"
static MR_bool MR_CALL 
mercury__math____Unify____domain_error_0_0_10001(
#line 404 "math.c"
  MR_Box mercury__math__wrapper_arg_1,
#line 406 "math.c"
  MR_Box mercury__math__wrapper_arg_2)
#line 408 "math.c"
{
#line 410 "math.c"
  {
#line 412 "math.c"
    MR_bool mercury__math__succeeded;

#line 415 "math.c"
    {
#line 417 "math.c"
      mercury__math__succeeded = mercury__math____Unify____domain_error_0_0(((MR_Word) mercury__math__wrapper_arg_1), ((MR_Word) mercury__math__wrapper_arg_2));
    }
#line 420 "math.c"
    return mercury__math__succeeded;
#line 422 "math.c"
  }
#line 424 "math.c"
}

#line 427 "math.c"
static void MR_CALL 
mercury__math____Compare____domain_error_0_0_10001(
#line 430 "math.c"
  MR_Box * mercury__math__wrapper_arg_1,
#line 432 "math.c"
  MR_Box mercury__math__wrapper_arg_2,
#line 434 "math.c"
  MR_Box mercury__math__wrapper_arg_3)
#line 436 "math.c"
{
#line 438 "math.c"
  {
#line 440 "math.c"
    MR_Word mercury__math__conv0_HeadVar__1_1;

#line 443 "math.c"
    {
#line 445 "math.c"
      mercury__math____Compare____domain_error_0_0(&mercury__math__conv0_HeadVar__1_1, ((MR_Word) mercury__math__wrapper_arg_2), ((MR_Word) mercury__math__wrapper_arg_3));
    }
#line 448 "math.c"
    *mercury__math__wrapper_arg_1 = ((MR_Box) (mercury__math__conv0_HeadVar__1_1));
#line 450 "math.c"
  }
#line 452 "math.c"
}

#line 455 "math.c"
static MR_bool MR_CALL 
mercury__math____Unify____quadratic_roots_0_0_10001(
#line 458 "math.c"
  MR_Box mercury__math__wrapper_arg_1,
#line 460 "math.c"
  MR_Box mercury__math__wrapper_arg_2)
#line 462 "math.c"
{
#line 464 "math.c"
  {
#line 466 "math.c"
    MR_bool mercury__math__succeeded;

#line 469 "math.c"
    {
#line 471 "math.c"
      mercury__math__succeeded = mercury__math____Unify____quadratic_roots_0_0(((MR_Word) mercury__math__wrapper_arg_1), ((MR_Word) mercury__math__wrapper_arg_2));
    }
#line 474 "math.c"
    return mercury__math__succeeded;
#line 476 "math.c"
  }
#line 478 "math.c"
}

#line 481 "math.c"
static void MR_CALL 
mercury__math____Compare____quadratic_roots_0_0_10001(
#line 484 "math.c"
  MR_Box * mercury__math__wrapper_arg_1,
#line 486 "math.c"
  MR_Box mercury__math__wrapper_arg_2,
#line 488 "math.c"
  MR_Box mercury__math__wrapper_arg_3)
#line 490 "math.c"
{
#line 492 "math.c"
  {
#line 494 "math.c"
    MR_Word mercury__math__conv0_HeadVar__1_1;

#line 497 "math.c"
    {
#line 499 "math.c"
      mercury__math____Compare____quadratic_roots_0_0(&mercury__math__conv0_HeadVar__1_1, ((MR_Word) mercury__math__wrapper_arg_2), ((MR_Word) mercury__math__wrapper_arg_3));
    }
#line 502 "math.c"
    *mercury__math__wrapper_arg_1 = ((MR_Box) (mercury__math__conv0_HeadVar__1_1));
#line 504 "math.c"
  }
#line 506 "math.c"
}

#line 18 "ops.opt"
static MR_Integer MR_CALL 
mercury__math__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 18 "ops.opt"
{
#line 47 "ops.opt"
  {
#line 47 "ops.opt"
    MR_bool mercury__math__succeeded;

#line 47 "ops.opt"
    return (MR_Integer) 1200;
#line 47 "ops.opt"
  }
#line 18 "ops.opt"
}

#line 89 "math.m"
void MR_CALL 
mercury__math____Compare____quadratic_roots_0_0(
#line 89 "math.m"
  MR_Word * mercury__math__HeadVar__1_1,
#line 89 "math.m"
  MR_Word mercury__math__HeadVar__2_2,
#line 89 "math.m"
  MR_Word mercury__math__HeadVar__3_3)
#line 89 "math.m"
{
#line 89 "math.m"
  {
#line 89 "math.m"
    MR_bool mercury__math__succeeded;
#line 89 "math.m"
    MR_Integer mercury__math__CastX_23 = (MR_Integer) mercury__math__HeadVar__2_2;
#line 89 "math.m"
    MR_Integer mercury__math__CastY_24 = (MR_Integer) mercury__math__HeadVar__3_3;

#line 89 "math.m"
    mercury__math__succeeded = (mercury__math__CastX_23 == mercury__math__CastY_24);
#line 89 "math.m"
    if (mercury__math__succeeded)
#line 550 "math.c"
      *mercury__math__HeadVar__1_1 = (MR_Integer) 0;
#line 89 "math.m"
    else
#line 89 "math.m"
#line 89 "math.m"
      switch (MR_tag((MR_Word) mercury__math__HeadVar__2_2)) {
#line 89 "math.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 89 "math.m"
        case (MR_Integer) 0:
#line 89 "math.m"
#line 89 "math.m"
          switch (MR_tag((MR_Word) mercury__math__HeadVar__3_3)) {
#line 89 "math.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 89 "math.m"
            case (MR_Integer) 0:
#line 89 "math.m"
              *mercury__math__HeadVar__1_1 = (MR_Integer) 0;
#line 89 "math.m"
              break;
#line 89 "math.m"
            case (MR_Integer) 1:
#line 574 "math.c"
              *mercury__math__HeadVar__1_1 = (MR_Integer) 1;
#line 89 "math.m"
              break;
#line 89 "math.m"
            case (MR_Integer) 2:
#line 580 "math.c"
              *mercury__math__HeadVar__1_1 = (MR_Integer) 1;
#line 89 "math.m"
              break;
#line 89 "math.m"
          }
#line 89 "math.m"
          break;
#line 89 "math.m"
        case (MR_Integer) 1:
#line 89 "math.m"
          {
#line 89 "math.m"
            MR_Float mercury__math__V_28_28 = MR_unbox_float((MR_hl_field(MR_mktag(1), mercury__math__HeadVar__2_2, (MR_Integer) 0)));

#line 89 "math.m"
#line 89 "math.m"
            switch (MR_tag((MR_Word) mercury__math__HeadVar__3_3)) {
#line 89 "math.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 89 "math.m"
              case (MR_Integer) 0:
#line 602 "math.c"
                *mercury__math__HeadVar__1_1 = (MR_Integer) 2;
#line 89 "math.m"
                break;
#line 89 "math.m"
              case (MR_Integer) 1:
#line 89 "math.m"
                {
#line 89 "math.m"
                  MR_Float mercury__math__V_9_9 = MR_unbox_float((MR_hl_field(MR_mktag(1), mercury__math__HeadVar__3_3, (MR_Integer) 0)));

#line 53 "private_builtin.opt"
                  mercury__math__succeeded = (mercury__math__V_28_28 < mercury__math__V_9_9);
#line 56 "private_builtin.opt"
                  if (mercury__math__succeeded)
#line 55 "private_builtin.opt"
                    *mercury__math__HeadVar__1_1 = (MR_Integer) 1;
#line 56 "private_builtin.opt"
                  else
#line 61 "private_builtin.opt"
                    {
#line 58 "private_builtin.opt"
                      mercury__math__succeeded = (mercury__math__V_28_28 > mercury__math__V_9_9);
#line 61 "private_builtin.opt"
                      if (mercury__math__succeeded)
#line 60 "private_builtin.opt"
                        *mercury__math__HeadVar__1_1 = (MR_Integer) 2;
#line 61 "private_builtin.opt"
                      else
#line 62 "private_builtin.opt"
                        *mercury__math__HeadVar__1_1 = (MR_Integer) 0;
#line 61 "private_builtin.opt"
                    }
#line 89 "math.m"
                }
#line 89 "math.m"
                break;
#line 89 "math.m"
              case (MR_Integer) 2:
#line 641 "math.c"
                *mercury__math__HeadVar__1_1 = (MR_Integer) 1;
#line 89 "math.m"
                break;
#line 89 "math.m"
            }
#line 89 "math.m"
          }
#line 89 "math.m"
          break;
#line 89 "math.m"
        case (MR_Integer) 2:
#line 89 "math.m"
          {
#line 89 "math.m"
            MR_Float mercury__math__V_29_29 = MR_unbox_float((MR_hl_field(MR_mktag(2), mercury__math__HeadVar__2_2, (MR_Integer) 1)));
#line 89 "math.m"
            MR_Float mercury__math__V_30_30 = MR_unbox_float((MR_hl_field(MR_mktag(2), mercury__math__HeadVar__2_2, (MR_Integer) 0)));

#line 89 "math.m"
#line 89 "math.m"
            switch (MR_tag((MR_Word) mercury__math__HeadVar__3_3)) {
#line 89 "math.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 89 "math.m"
              case (MR_Integer) 0:
#line 667 "math.c"
                *mercury__math__HeadVar__1_1 = (MR_Integer) 2;
#line 89 "math.m"
                break;
#line 89 "math.m"
              case (MR_Integer) 1:
#line 673 "math.c"
                *mercury__math__HeadVar__1_1 = (MR_Integer) 2;
#line 89 "math.m"
                break;
#line 89 "math.m"
              case (MR_Integer) 2:
#line 89 "math.m"
                {
#line 89 "math.m"
                  MR_Float mercury__math__V_20_20 = MR_unbox_float((MR_hl_field(MR_mktag(2), mercury__math__HeadVar__3_3, (MR_Integer) 0)));
#line 89 "math.m"
                  MR_Float mercury__math__V_21_21 = MR_unbox_float((MR_hl_field(MR_mktag(2), mercury__math__HeadVar__3_3, (MR_Integer) 1)));
#line 89 "math.m"
                  MR_Word mercury__math__V_22_22;

#line 53 "private_builtin.opt"
                  mercury__math__succeeded = (mercury__math__V_30_30 < mercury__math__V_20_20);
#line 56 "private_builtin.opt"
                  if (mercury__math__succeeded)
#line 55 "private_builtin.opt"
                    mercury__math__V_22_22 = (MR_Integer) 1;
#line 56 "private_builtin.opt"
                  else
#line 61 "private_builtin.opt"
                    {
#line 58 "private_builtin.opt"
                      mercury__math__succeeded = (mercury__math__V_30_30 > mercury__math__V_20_20);
#line 61 "private_builtin.opt"
                      if (mercury__math__succeeded)
#line 60 "private_builtin.opt"
                        mercury__math__V_22_22 = (MR_Integer) 2;
#line 61 "private_builtin.opt"
                      else
#line 62 "private_builtin.opt"
                        mercury__math__V_22_22 = (MR_Integer) 0;
#line 61 "private_builtin.opt"
                    }
#line 710 "math.c"
                  mercury__math__succeeded = (mercury__math__V_22_22 == (MR_Integer) 0);
#line 89 "math.m"
                  mercury__math__succeeded = !(mercury__math__succeeded);
#line 89 "math.m"
                  if (mercury__math__succeeded)
#line 89 "math.m"
                    *mercury__math__HeadVar__1_1 = mercury__math__V_22_22;
#line 89 "math.m"
                  else
#line 56 "private_builtin.opt"
                    {
#line 53 "private_builtin.opt"
                      mercury__math__succeeded = (mercury__math__V_29_29 < mercury__math__V_21_21);
#line 56 "private_builtin.opt"
                      if (mercury__math__succeeded)
#line 55 "private_builtin.opt"
                        *mercury__math__HeadVar__1_1 = (MR_Integer) 1;
#line 56 "private_builtin.opt"
                      else
#line 61 "private_builtin.opt"
                        {
#line 58 "private_builtin.opt"
                          mercury__math__succeeded = (mercury__math__V_29_29 > mercury__math__V_21_21);
#line 61 "private_builtin.opt"
                          if (mercury__math__succeeded)
#line 60 "private_builtin.opt"
                            *mercury__math__HeadVar__1_1 = (MR_Integer) 2;
#line 61 "private_builtin.opt"
                          else
#line 62 "private_builtin.opt"
                            *mercury__math__HeadVar__1_1 = (MR_Integer) 0;
#line 61 "private_builtin.opt"
                        }
#line 56 "private_builtin.opt"
                    }
#line 89 "math.m"
                }
#line 89 "math.m"
                break;
#line 89 "math.m"
            }
#line 89 "math.m"
          }
#line 89 "math.m"
          break;
#line 89 "math.m"
      }
#line 89 "math.m"
  }
#line 89 "math.m"
}

#line 89 "math.m"
MR_bool MR_CALL 
mercury__math____Unify____quadratic_roots_0_0(
#line 89 "math.m"
  MR_Word mercury__math__HeadVar__1_1,
#line 89 "math.m"
  MR_Word mercury__math__HeadVar__2_2)
#line 89 "math.m"
{
#line 89 "math.m"
  {
#line 89 "math.m"
    MR_bool mercury__math__succeeded;
#line 89 "math.m"
    MR_Integer mercury__math__CastX_11 = (MR_Integer) mercury__math__HeadVar__1_1;
#line 89 "math.m"
    MR_Integer mercury__math__CastY_12 = (MR_Integer) mercury__math__HeadVar__2_2;

#line 89 "math.m"
    mercury__math__succeeded = (mercury__math__CastX_11 == mercury__math__CastY_12);
#line 89 "math.m"
    if (mercury__math__succeeded)
#line 89 "math.m"
      mercury__math__succeeded = MR_TRUE;
#line 89 "math.m"
    else
#line 89 "math.m"
#line 89 "math.m"
      switch (MR_tag((MR_Word) mercury__math__HeadVar__1_1)) {
#line 89 "math.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 89 "math.m"
        case (MR_Integer) 0:
#line 89 "math.m"
          {
#line 89 "math.m"
            MR_Integer mercury__math__CastX_3 = (MR_Integer) mercury__math__HeadVar__1_1;
#line 89 "math.m"
            MR_Integer mercury__math__CastY_4 = (MR_Integer) mercury__math__HeadVar__2_2;

#line 89 "math.m"
            mercury__math__succeeded = (mercury__math__CastY_4 == mercury__math__CastX_3);
#line 89 "math.m"
          }
#line 89 "math.m"
          break;
#line 89 "math.m"
        case (MR_Integer) 1:
#line 89 "math.m"
          {
#line 89 "math.m"
            MR_Float mercury__math__V_5_5 = MR_unbox_float((MR_hl_field(MR_mktag(1), mercury__math__HeadVar__1_1, (MR_Integer) 0)));
#line 89 "math.m"
            MR_Float mercury__math__V_6_6;

#line 89 "math.m"
            mercury__math__succeeded = ((MR_tag((MR_Word) mercury__math__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 89 "math.m"
            if (mercury__math__succeeded)
#line 89 "math.m"
              {
#line 89 "math.m"
                mercury__math__V_6_6 = MR_unbox_float((MR_hl_field(MR_mktag(1), mercury__math__HeadVar__2_2, (MR_Integer) 0)));
#line 826 "math.c"
                mercury__math__succeeded = (mercury__math__V_5_5 == mercury__math__V_6_6);
#line 89 "math.m"
              }
#line 89 "math.m"
          }
#line 89 "math.m"
          break;
#line 89 "math.m"
        case (MR_Integer) 2:
#line 89 "math.m"
          {
#line 89 "math.m"
            MR_Float mercury__math__V_7_7 = MR_unbox_float((MR_hl_field(MR_mktag(2), mercury__math__HeadVar__1_1, (MR_Integer) 0)));
#line 89 "math.m"
            MR_Float mercury__math__V_8_8 = MR_unbox_float((MR_hl_field(MR_mktag(2), mercury__math__HeadVar__1_1, (MR_Integer) 1)));
#line 89 "math.m"
            MR_Float mercury__math__V_9_9;
#line 89 "math.m"
            MR_Float mercury__math__V_10_10;

#line 89 "math.m"
            mercury__math__succeeded = ((MR_tag((MR_Word) mercury__math__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 89 "math.m"
            if (mercury__math__succeeded)
#line 89 "math.m"
              {
#line 89 "math.m"
                mercury__math__V_9_9 = MR_unbox_float((MR_hl_field(MR_mktag(2), mercury__math__HeadVar__2_2, (MR_Integer) 0)));
#line 89 "math.m"
                mercury__math__V_10_10 = MR_unbox_float((MR_hl_field(MR_mktag(2), mercury__math__HeadVar__2_2, (MR_Integer) 1)));
#line 857 "math.c"
                mercury__math__succeeded = (mercury__math__V_7_7 == mercury__math__V_9_9);
#line 89 "math.m"
                if (mercury__math__succeeded)
#line 861 "math.c"
                  mercury__math__succeeded = (mercury__math__V_8_8 == mercury__math__V_10_10);
#line 89 "math.m"
              }
#line 89 "math.m"
          }
#line 89 "math.m"
          break;
#line 89 "math.m"
      }
#line 89 "math.m"
    return mercury__math__succeeded;
#line 89 "math.m"
  }
#line 89 "math.m"
}

#line 37 "math.m"
void MR_CALL 
mercury__math____Compare____domain_error_0_0(
#line 37 "math.m"
  MR_Word * mercury__math__HeadVar__1_1,
#line 37 "math.m"
  MR_Word mercury__math__HeadVar__2_2,
#line 37 "math.m"
  MR_Word mercury__math__HeadVar__3_3)
#line 37 "math.m"
{
#line 37 "math.m"
  {
#line 37 "math.m"
    MR_bool mercury__math__succeeded;
#line 37 "math.m"
    MR_Integer mercury__math__CastX_6 = (MR_Integer) mercury__math__HeadVar__2_2;
#line 37 "math.m"
    MR_Integer mercury__math__CastY_7 = (MR_Integer) mercury__math__HeadVar__3_3;

#line 37 "math.m"
    mercury__math__succeeded = (mercury__math__CastX_6 == mercury__math__CastY_7);
#line 37 "math.m"
    if (mercury__math__succeeded)
#line 902 "math.c"
      *mercury__math__HeadVar__1_1 = (MR_Integer) 0;
#line 37 "math.m"
    else
#line 37 "math.m"
      {
#line 37 "math.m"
        MR_String mercury__math__V_4_4 = (MR_String) mercury__math__HeadVar__2_2;
#line 37 "math.m"
        MR_String mercury__math__V_5_5 = (MR_String) mercury__math__HeadVar__3_3;
#line 37 "math.m"
        MR_Integer mercury__math__V_7_12;

#line 100 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__math____Compare____domain_error_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__math__V_4_4 ;
	S2 =  mercury__math__V_5_5 ;
		{
#line 100 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 930 "math.c"

		;}
#undef MR_PROC_LABEL
	 mercury__math__V_7_12  = Res;
#line 100 "private_builtin.opt"
}
#line 87 "private_builtin.opt"
        mercury__math__succeeded = (mercury__math__V_7_12 < (MR_Integer) 0);
#line 90 "private_builtin.opt"
        if (mercury__math__succeeded)
#line 89 "private_builtin.opt"
          *mercury__math__HeadVar__1_1 = (MR_Integer) 1;
#line 90 "private_builtin.opt"
        else
#line 95 "private_builtin.opt"
          {
#line 92 "private_builtin.opt"
            mercury__math__succeeded = (mercury__math__V_7_12 == (MR_Integer) 0);
#line 95 "private_builtin.opt"
            if (mercury__math__succeeded)
#line 94 "private_builtin.opt"
              *mercury__math__HeadVar__1_1 = (MR_Integer) 0;
#line 95 "private_builtin.opt"
            else
#line 96 "private_builtin.opt"
              *mercury__math__HeadVar__1_1 = (MR_Integer) 2;
#line 95 "private_builtin.opt"
          }
#line 37 "math.m"
      }
#line 37 "math.m"
  }
#line 37 "math.m"
}

#line 37 "math.m"
MR_bool MR_CALL 
mercury__math____Unify____domain_error_0_0(
#line 37 "math.m"
  MR_Word mercury__math__HeadVar__1_1,
#line 37 "math.m"
  MR_Word mercury__math__HeadVar__2_2)
#line 37 "math.m"
{
#line 37 "math.m"
  {
#line 37 "math.m"
    MR_bool mercury__math__succeeded;
#line 37 "math.m"
    MR_Integer mercury__math__CastX_5 = (MR_Integer) mercury__math__HeadVar__1_1;
#line 37 "math.m"
    MR_Integer mercury__math__CastY_6 = (MR_Integer) mercury__math__HeadVar__2_2;

#line 37 "math.m"
    mercury__math__succeeded = (mercury__math__CastX_5 == mercury__math__CastY_6);
#line 37 "math.m"
    if (mercury__math__succeeded)
#line 37 "math.m"
      mercury__math__succeeded = MR_TRUE;
#line 37 "math.m"
    else
#line 37 "math.m"
      {
#line 37 "math.m"
        MR_String mercury__math__V_3_3 = (MR_String) mercury__math__HeadVar__1_1;
#line 37 "math.m"
        MR_String mercury__math__V_4_4 = (MR_String) mercury__math__HeadVar__2_2;

#line 999 "math.c"
        mercury__math__succeeded = (strcmp(mercury__math__V_3_3, mercury__math__V_4_4) == 0);
#line 37 "math.m"
      }
#line 37 "math.m"
    return mercury__math__succeeded;
#line 37 "math.m"
  }
#line 37 "math.m"
}

#line 271 "math.m"
static MR_bool MR_CALL 
mercury__math__math_domain_checks_0_p_0(void)
#line 271 "math.m"
{
#line 273 "math.m"
  {
#line 273 "math.m"
    MR_bool mercury__math__succeeded;

#line 277 "math.m"
{
#define MR_PROC_LABEL mercury__math__math_domain_checks_0_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 277 "math.m"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif

#line 1035 "math.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 277 "math.m"
	}
mercury__math__succeeded  = SUCCESS_INDICATOR;
}
#line 273 "math.m"
    return mercury__math__succeeded;
#line 273 "math.m"
  }
#line 271 "math.m"
}

#line 222 "math.m"
MR_Float MR_CALL 
mercury__math__fma_3_f_0(
#line 222 "math.m"
  MR_Float mercury__math__X_1,
#line 222 "math.m"
  MR_Float mercury__math__Y_2,
#line 222 "math.m"
  MR_Float mercury__math__Z_3)
#line 222 "math.m"
{
#line 1037 "math.m"
  {
#line 1037 "math.m"
    MR_bool mercury__math__succeeded;
#line 1037 "math.m"
    MR_Float mercury__math__FMA_4;

#line 1041 "math.m"
{
#define MR_PROC_LABEL mercury__math__fma_3_f_0

	MR_Float X;
	MR_Float Y;
	MR_Float Z;
	MR_Float FMA;

	X =  mercury__math__X_1 ;
	Y =  mercury__math__Y_2 ;
	Z =  mercury__math__Z_3 ;
		{
#line 1041 "math.m"

#if defined(MR_HAVE_FMA)
    FMA = fma(X, Y, Z);
#else
    MR_fatal_error("math.fma not supported");
#endif

#line 1090 "math.c"

		;}
#undef MR_PROC_LABEL
	 mercury__math__FMA_4  = FMA;
#line 1041 "math.m"
}
#line 1037 "math.m"
    return mercury__math__FMA_4;
#line 1037 "math.m"
  }
#line 222 "math.m"
}

#line 213 "math.m"
MR_bool MR_CALL 
mercury__math__have_fma_0_p_0(void)
#line 213 "math.m"
{
#line 1022 "math.m"
  {
#line 1022 "math.m"
    MR_bool mercury__math__succeeded;

#line 1026 "math.m"
{
#define MR_PROC_LABEL mercury__math__have_fma_0_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 1026 "math.m"

#if defined(MR_HAVE_FMA)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif

#line 1129 "math.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 1026 "math.m"
	}
mercury__math__succeeded  = SUCCESS_INDICATOR;
}
#line 1022 "math.m"
    return mercury__math__succeeded;
#line 1022 "math.m"
  }
#line 213 "math.m"
}

#line 203 "math.m"
MR_Float MR_CALL 
mercury__math__tanh_1_f_0(
#line 203 "math.m"
  MR_Float mercury__math__X_1)
#line 203 "math.m"
{
#line 991 "math.m"
  {
#line 991 "math.m"
    MR_bool mercury__math__succeeded;
#line 991 "math.m"
    MR_Float mercury__math__Tanh_2;

#line 995 "math.m"
{
#define MR_PROC_LABEL mercury__math__tanh_1_f_0

	MR_Float X;
	MR_Float Tanh;

	X =  mercury__math__X_1 ;
		{
#line 995 "math.m"

    Tanh = tanh(X);

#line 1172 "math.c"

		;}
#undef MR_PROC_LABEL
	 mercury__math__Tanh_2  = Tanh;
#line 995 "math.m"
}
#line 991 "math.m"
    return mercury__math__Tanh_2;
#line 991 "math.m"
  }
#line 203 "math.m"
}

#line 199 "math.m"
MR_Float MR_CALL 
mercury__math__cosh_1_f_0(
#line 199 "math.m"
  MR_Float mercury__math__X_1)
#line 199 "math.m"
{
#line 962 "math.m"
  {
#line 962 "math.m"
    MR_bool mercury__math__succeeded;
#line 962 "math.m"
    MR_Float mercury__math__Cosh_2;

#line 966 "math.m"
{
#define MR_PROC_LABEL mercury__math__cosh_1_f_0

	MR_Float X;
	MR_Float Cosh;

	X =  mercury__math__X_1 ;
		{
#line 966 "math.m"

    Cosh = cosh(X);

#line 1213 "math.c"

		;}
#undef MR_PROC_LABEL
	 mercury__math__Cosh_2  = Cosh;
#line 966 "math.m"
}
#line 962 "math.m"
    return mercury__math__Cosh_2;
#line 962 "math.m"
  }
#line 199 "math.m"
}

#line 195 "math.m"
MR_Float MR_CALL 
mercury__math__sinh_1_f_0(
#line 195 "math.m"
  MR_Float mercury__math__X_1)
#line 195 "math.m"
{
#line 933 "math.m"
  {
#line 933 "math.m"
    MR_bool mercury__math__succeeded;
#line 933 "math.m"
    MR_Float mercury__math__Sinh_2;

#line 937 "math.m"
{
#define MR_PROC_LABEL mercury__math__sinh_1_f_0

	MR_Float X;
	MR_Float Sinh;

	X =  mercury__math__X_1 ;
		{
#line 937 "math.m"

    Sinh = sinh(X);

#line 1254 "math.c"

		;}
#undef MR_PROC_LABEL
	 mercury__math__Sinh_2  = Sinh;
#line 937 "math.m"
}
#line 933 "math.m"
    return mercury__math__Sinh_2;
#line 933 "math.m"
  }
#line 195 "math.m"
}

#line 186 "math.m"
MR_Float MR_CALL 
mercury__math__atan2_2_f_0(
#line 186 "math.m"
  MR_Float mercury__math__Y_1,
#line 186 "math.m"
  MR_Float mercury__math__X_2)
#line 186 "math.m"
{
#line 907 "math.m"
  {
#line 907 "math.m"
    MR_bool mercury__math__succeeded;
#line 907 "math.m"
    MR_Float mercury__math__ATan2_3;

#line 911 "math.m"
{
#define MR_PROC_LABEL mercury__math__atan2_2_f_0

	MR_Float Y;
	MR_Float X;
	MR_Float ATan2;

	Y =  mercury__math__Y_1 ;
	X =  mercury__math__X_2 ;
		{
#line 911 "math.m"

    ATan2 = atan2(Y, X);

#line 1299 "math.c"

		;}
#undef MR_PROC_LABEL
	 mercury__math__ATan2_3  = ATan2;
#line 911 "math.m"
}
#line 907 "math.m"
    return mercury__math__ATan2_3;
#line 907 "math.m"
  }
#line 186 "math.m"
}

#line 181 "math.m"
MR_Float MR_CALL 
mercury__math__atan_1_f_0(
#line 181 "math.m"
  MR_Float mercury__math__X_1)
#line 181 "math.m"
{
#line 881 "math.m"
  {
#line 881 "math.m"
    MR_bool mercury__math__succeeded;
#line 881 "math.m"
    MR_Float mercury__math__ATan_2;

#line 885 "math.m"
{
#define MR_PROC_LABEL mercury__math__atan_1_f_0

	MR_Float X;
	MR_Float ATan;

	X =  mercury__math__X_1 ;
		{
#line 885 "math.m"

    ATan = atan(X);

#line 1340 "math.c"

		;}
#undef MR_PROC_LABEL
	 mercury__math__ATan_2  = ATan;
#line 885 "math.m"
}
#line 881 "math.m"
    return mercury__math__ATan_2;
#line 881 "math.m"
  }
#line 181 "math.m"
}

#line 176 "math.m"
MR_Float MR_CALL 
mercury__math__unchecked_acos_1_f_0(
#line 176 "math.m"
  MR_Float mercury__math__X_1)
#line 176 "math.m"
{
#line 855 "math.m"
  {
#line 855 "math.m"
    MR_bool mercury__math__succeeded;
#line 855 "math.m"
    MR_Float mercury__math__ACos_2;

#line 859 "math.m"
{
#define MR_PROC_LABEL mercury__math__unchecked_acos_1_f_0

	MR_Float X;
	MR_Float ACos;

	X =  mercury__math__X_1 ;
		{
#line 859 "math.m"

    ACos = acos(X);

#line 1381 "math.c"

		;}
#undef MR_PROC_LABEL
	 mercury__math__ACos_2  = ACos;
#line 859 "math.m"
}
#line 855 "math.m"
    return mercury__math__ACos_2;
#line 855 "math.m"
  }
#line 176 "math.m"
}

#line 175 "math.m"
MR_Float MR_CALL 
mercury__math__acos_1_f_0(
#line 175 "math.m"
  MR_Float mercury__math__X_3)
#line 175 "math.m"
{
#line 851 "math.m"
  {
#line 851 "math.m"
    MR_bool mercury__math__succeeded;
#line 851 "math.m"
    MR_Float mercury__math__ACos_4;

#line 277 "math.m"
{
#define MR_PROC_LABEL mercury__math__acos_1_f_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 277 "math.m"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif

#line 1424 "math.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 277 "math.m"
	}
mercury__math__succeeded  = SUCCESS_INDICATOR;
}
#line 845 "math.m"
    if (mercury__math__succeeded)
#line 845 "math.m"
      {
#line 846 "math.m"
        mercury__math__succeeded = (mercury__math__X_3 < ((MR_Float) -1.0000000000000000));
#line 847 "math.m"
        if (!(mercury__math__succeeded))
#line 847 "math.m"
          {
#line 847 "math.m"
            mercury__math__succeeded = (mercury__math__X_3 > ((MR_Float) 1.0000000000000000));
#line 847 "math.m"
          }
#line 845 "math.m"
      }
#line 851 "math.m"
    if (mercury__math__succeeded)
#line 850 "math.m"
      {
#line 850 "math.m"
        MR_Word mercury__math__TypeCtorInfo_9_9 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
#line 850 "math.m"
        MR_Word mercury__math__V_7_7 = (MR_Word) ((MR_Box) ((MR_String) "math.acos"));

#line 850 "math.m"
        {
#line 850 "math.m"
          mercury__exception__throw_1_p_0(mercury__math__TypeCtorInfo_9_9, ((MR_Box) (mercury__math__V_7_7)));
        }
#line 850 "math.m"
      }
#line 851 "math.m"
    else
#line 855 "math.m"
      {
#line 859 "math.m"
{
#define MR_PROC_LABEL mercury__math__acos_1_f_0

	MR_Float X;
	MR_Float ACos;

	X =  mercury__math__X_3 ;
		{
#line 859 "math.m"

    ACos = acos(X);

#line 1482 "math.c"

		;}
#undef MR_PROC_LABEL
	 mercury__math__ACos_4  = ACos;
#line 859 "math.m"
}
#line 855 "math.m"
      }
#line 851 "math.m"
    return mercury__math__ACos_4;
#line 851 "math.m"
  }
#line 175 "math.m"
}

#line 168 "math.m"
MR_Float MR_CALL 
mercury__math__unchecked_asin_1_f_0(
#line 168 "math.m"
  MR_Float mercury__math__X_1)
#line 168 "math.m"
{
#line 817 "math.m"
  {
#line 817 "math.m"
    MR_bool mercury__math__succeeded;
#line 817 "math.m"
    MR_Float mercury__math__ASin_2;

#line 821 "math.m"
{
#define MR_PROC_LABEL mercury__math__unchecked_asin_1_f_0

	MR_Float X;
	MR_Float ASin;

	X =  mercury__math__X_1 ;
		{
#line 821 "math.m"

    ASin = asin(X);

#line 1525 "math.c"

		;}
#undef MR_PROC_LABEL
	 mercury__math__ASin_2  = ASin;
#line 821 "math.m"
}
#line 817 "math.m"
    return mercury__math__ASin_2;
#line 817 "math.m"
  }
#line 168 "math.m"
}

#line 167 "math.m"
MR_Float MR_CALL 
mercury__math__asin_1_f_0(
#line 167 "math.m"
  MR_Float mercury__math__X_3)
#line 167 "math.m"
{
#line 813 "math.m"
  {
#line 813 "math.m"
    MR_bool mercury__math__succeeded;
#line 813 "math.m"
    MR_Float mercury__math__ASin_4;

#line 277 "math.m"
{
#define MR_PROC_LABEL mercury__math__asin_1_f_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 277 "math.m"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif

#line 1568 "math.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 277 "math.m"
	}
mercury__math__succeeded  = SUCCESS_INDICATOR;
}
#line 807 "math.m"
    if (mercury__math__succeeded)
#line 807 "math.m"
      {
#line 808 "math.m"
        mercury__math__succeeded = (mercury__math__X_3 < ((MR_Float) -1.0000000000000000));
#line 809 "math.m"
        if (!(mercury__math__succeeded))
#line 809 "math.m"
          {
#line 809 "math.m"
            mercury__math__succeeded = (mercury__math__X_3 > ((MR_Float) 1.0000000000000000));
#line 809 "math.m"
          }
#line 807 "math.m"
      }
#line 813 "math.m"
    if (mercury__math__succeeded)
#line 812 "math.m"
      {
#line 812 "math.m"
        MR_Word mercury__math__TypeCtorInfo_9_9 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
#line 812 "math.m"
        MR_Word mercury__math__V_7_7 = (MR_Word) ((MR_Box) ((MR_String) "math.asin"));

#line 812 "math.m"
        {
#line 812 "math.m"
          mercury__exception__throw_1_p_0(mercury__math__TypeCtorInfo_9_9, ((MR_Box) (mercury__math__V_7_7)));
        }
#line 812 "math.m"
      }
#line 813 "math.m"
    else
#line 817 "math.m"
      {
#line 821 "math.m"
{
#define MR_PROC_LABEL mercury__math__asin_1_f_0

	MR_Float X;
	MR_Float ASin;

	X =  mercury__math__X_3 ;
		{
#line 821 "math.m"

    ASin = asin(X);

#line 1626 "math.c"

		;}
#undef MR_PROC_LABEL
	 mercury__math__ASin_4  = ASin;
#line 821 "math.m"
}
#line 817 "math.m"
      }
#line 813 "math.m"
    return mercury__math__ASin_4;
#line 813 "math.m"
  }
#line 167 "math.m"
}

#line 160 "math.m"
MR_Float MR_CALL 
mercury__math__tan_1_f_0(
#line 160 "math.m"
  MR_Float mercury__math__X_1)
#line 160 "math.m"
{
#line 779 "math.m"
  {
#line 779 "math.m"
    MR_bool mercury__math__succeeded;
#line 779 "math.m"
    MR_Float mercury__math__Tan_2;

#line 783 "math.m"
{
#define MR_PROC_LABEL mercury__math__tan_1_f_0

	MR_Float X;
	MR_Float Tan;

	X =  mercury__math__X_1 ;
		{
#line 783 "math.m"

    Tan = tan(X);

#line 1669 "math.c"

		;}
#undef MR_PROC_LABEL
	 mercury__math__Tan_2  = Tan;
#line 783 "math.m"
}
#line 779 "math.m"
    return mercury__math__Tan_2;
#line 779 "math.m"
  }
#line 160 "math.m"
}

#line 156 "math.m"
MR_Float MR_CALL 
mercury__math__cos_1_f_0(
#line 156 "math.m"
  MR_Float mercury__math__X_1)
#line 156 "math.m"
{
#line 753 "math.m"
  {
#line 753 "math.m"
    MR_bool mercury__math__succeeded;
#line 753 "math.m"
    MR_Float mercury__math__Cos_2;

#line 757 "math.m"
{
#define MR_PROC_LABEL mercury__math__cos_1_f_0

	MR_Float X;
	MR_Float Cos;

	X =  mercury__math__X_1 ;
		{
#line 757 "math.m"

    Cos = cos(X);

#line 1710 "math.c"

		;}
#undef MR_PROC_LABEL
	 mercury__math__Cos_2  = Cos;
#line 757 "math.m"
}
#line 753 "math.m"
    return mercury__math__Cos_2;
#line 753 "math.m"
  }
#line 156 "math.m"
}

#line 152 "math.m"
MR_Float MR_CALL 
mercury__math__sin_1_f_0(
#line 152 "math.m"
  MR_Float mercury__math__X_1)
#line 152 "math.m"
{
#line 727 "math.m"
  {
#line 727 "math.m"
    MR_bool mercury__math__succeeded;
#line 727 "math.m"
    MR_Float mercury__math__Sin_2;

#line 731 "math.m"
{
#define MR_PROC_LABEL mercury__math__sin_1_f_0

	MR_Float X;
	MR_Float Sin;

	X =  mercury__math__X_1 ;
		{
#line 731 "math.m"

    Sin = sin(X);

#line 1751 "math.c"

		;}
#undef MR_PROC_LABEL
	 mercury__math__Sin_2  = Sin;
#line 731 "math.m"
}
#line 727 "math.m"
    return mercury__math__Sin_2;
#line 727 "math.m"
  }
#line 152 "math.m"
}

#line 143 "math.m"
MR_Float MR_CALL 
mercury__math__unchecked_log_2_f_0(
#line 143 "math.m"
  MR_Float mercury__math__B_1,
#line 143 "math.m"
  MR_Float mercury__math__X_2)
#line 143 "math.m"
{
#line 710 "math.m"
  {
#line 710 "math.m"
    MR_bool mercury__math__succeeded;
#line 710 "math.m"
    MR_Float mercury__math__Log_3;

#line 714 "math.m"
{
#define MR_PROC_LABEL mercury__math__unchecked_log_2_f_0

	MR_Float B;
	MR_Float X;
	MR_Float Log;

	B =  mercury__math__B_1 ;
	X =  mercury__math__X_2 ;
		{
#line 714 "math.m"

    Log = log(X) / log(B);

#line 1796 "math.c"

		;}
#undef MR_PROC_LABEL
	 mercury__math__Log_3  = Log;
#line 714 "math.m"
}
#line 710 "math.m"
    return mercury__math__Log_3;
#line 710 "math.m"
  }
#line 143 "math.m"
}

#line 142 "math.m"
MR_Float MR_CALL 
mercury__math__log_2_f_0(
#line 142 "math.m"
  MR_Float mercury__math__B_4,
#line 142 "math.m"
  MR_Float mercury__math__X_5)
#line 142 "math.m"
{
#line 706 "math.m"
  {
#line 706 "math.m"
    MR_bool mercury__math__succeeded;
#line 706 "math.m"
    MR_Float mercury__math__Log_6;

#line 277 "math.m"
{
#define MR_PROC_LABEL mercury__math__log_2_f_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 277 "math.m"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif

#line 1841 "math.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 277 "math.m"
	}
mercury__math__succeeded  = SUCCESS_INDICATOR;
}
#line 699 "math.m"
    if (mercury__math__succeeded)
#line 699 "math.m"
      {
#line 700 "math.m"
        mercury__math__succeeded = (mercury__math__X_5 <= ((MR_Float) 0.0000000000000000));
#line 701 "math.m"
        if (!(mercury__math__succeeded))
#line 701 "math.m"
          {
#line 701 "math.m"
            mercury__math__succeeded = (mercury__math__B_4 <= ((MR_Float) 0.0000000000000000));
#line 701 "math.m"
            if (!(mercury__math__succeeded))
#line 702 "math.m"
              mercury__math__succeeded = (mercury__math__B_4 == ((MR_Float) 1.0000000000000000));
#line 701 "math.m"
          }
#line 699 "math.m"
      }
#line 706 "math.m"
    if (mercury__math__succeeded)
#line 705 "math.m"
      {
#line 705 "math.m"
        MR_Word mercury__math__TypeCtorInfo_11_11 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
#line 705 "math.m"
        MR_Word mercury__math__V_9_9 = (MR_Word) ((MR_Box) ((MR_String) "math.log"));

#line 705 "math.m"
        {
#line 705 "math.m"
          mercury__exception__throw_1_p_0(mercury__math__TypeCtorInfo_11_11, ((MR_Box) (mercury__math__V_9_9)));
        }
#line 705 "math.m"
      }
#line 706 "math.m"
    else
#line 710 "math.m"
      {
#line 714 "math.m"
{
#define MR_PROC_LABEL mercury__math__log_2_f_0

	MR_Float B;
	MR_Float X;
	MR_Float Log;

	B =  mercury__math__B_4 ;
	X =  mercury__math__X_5 ;
		{
#line 714 "math.m"

    Log = log(X) / log(B);

#line 1905 "math.c"

		;}
#undef MR_PROC_LABEL
	 mercury__math__Log_6  = Log;
#line 714 "math.m"
}
#line 710 "math.m"
      }
#line 706 "math.m"
    return mercury__math__Log_6;
#line 706 "math.m"
  }
#line 142 "math.m"
}

#line 136 "math.m"
MR_Float MR_CALL 
mercury__math__unchecked_log2_1_f_0(
#line 136 "math.m"
  MR_Float mercury__math__X_1)
#line 136 "math.m"
{
#line 676 "math.m"
  {
#line 676 "math.m"
    MR_bool mercury__math__succeeded;
#line 676 "math.m"
    MR_Float mercury__math__Log2_2;

#line 680 "math.m"
{
#define MR_PROC_LABEL mercury__math__unchecked_log2_1_f_0

	MR_Float X;
	MR_Float Log2;

	X =  mercury__math__X_1 ;
		{
#line 680 "math.m"

    Log2 = log(X) / ML_FLOAT_LN2;

#line 1948 "math.c"

		;}
#undef MR_PROC_LABEL
	 mercury__math__Log2_2  = Log2;
#line 680 "math.m"
}
#line 676 "math.m"
    return mercury__math__Log2_2;
#line 676 "math.m"
  }
#line 136 "math.m"
}

#line 135 "math.m"
MR_Float MR_CALL 
mercury__math__log2_1_f_0(
#line 135 "math.m"
  MR_Float mercury__math__X_3)
#line 135 "math.m"
{
#line 672 "math.m"
  {
#line 672 "math.m"
    MR_bool mercury__math__succeeded;
#line 672 "math.m"
    MR_Float mercury__math__Log_4;
#line 670 "math.m"
    MR_Float mercury__math__V_5_5;

#line 277 "math.m"
{
#define MR_PROC_LABEL mercury__math__log2_1_f_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 277 "math.m"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif

#line 1993 "math.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 277 "math.m"
	}
mercury__math__succeeded  = SUCCESS_INDICATOR;
}
#line 670 "math.m"
    if (mercury__math__succeeded)
#line 670 "math.m"
      {
#line 670 "math.m"
        mercury__math__V_5_5 = (MR_Float) 0.0000000000000000;
#line 670 "math.m"
        mercury__math__succeeded = (mercury__math__X_3 <= mercury__math__V_5_5);
#line 670 "math.m"
      }
#line 672 "math.m"
    if (mercury__math__succeeded)
#line 671 "math.m"
      {
#line 671 "math.m"
        MR_Word mercury__math__TypeCtorInfo_8_8 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
#line 671 "math.m"
        MR_Word mercury__math__V_6_6 = (MR_Word) ((MR_Box) ((MR_String) "math.log2"));

#line 671 "math.m"
        {
#line 671 "math.m"
          mercury__exception__throw_1_p_0(mercury__math__TypeCtorInfo_8_8, ((MR_Box) (mercury__math__V_6_6)));
        }
#line 671 "math.m"
      }
#line 672 "math.m"
    else
#line 676 "math.m"
      {
#line 680 "math.m"
{
#define MR_PROC_LABEL mercury__math__log2_1_f_0

	MR_Float X;
	MR_Float Log2;

	X =  mercury__math__X_3 ;
		{
#line 680 "math.m"

    Log2 = log(X) / ML_FLOAT_LN2;

#line 2045 "math.c"

		;}
#undef MR_PROC_LABEL
	 mercury__math__Log_4  = Log2;
#line 680 "math.m"
}
#line 676 "math.m"
      }
#line 672 "math.m"
    return mercury__math__Log_4;
#line 672 "math.m"
  }
#line 135 "math.m"
}

#line 129 "math.m"
MR_Float MR_CALL 
mercury__math__unchecked_log10_1_f_0(
#line 129 "math.m"
  MR_Float mercury__math__X_1)
#line 129 "math.m"
{
#line 647 "math.m"
  {
#line 647 "math.m"
    MR_bool mercury__math__succeeded;
#line 647 "math.m"
    MR_Float mercury__math__Log10_2;

#line 651 "math.m"
{
#define MR_PROC_LABEL mercury__math__unchecked_log10_1_f_0

	MR_Float X;
	MR_Float Log10;

	X =  mercury__math__X_1 ;
		{
#line 651 "math.m"

    Log10 = log10(X);

#line 2088 "math.c"

		;}
#undef MR_PROC_LABEL
	 mercury__math__Log10_2  = Log10;
#line 651 "math.m"
}
#line 647 "math.m"
    return mercury__math__Log10_2;
#line 647 "math.m"
  }
#line 129 "math.m"
}

#line 128 "math.m"
MR_Float MR_CALL 
mercury__math__log10_1_f_0(
#line 128 "math.m"
  MR_Float mercury__math__X_3)
#line 128 "math.m"
{
#line 643 "math.m"
  {
#line 643 "math.m"
    MR_bool mercury__math__succeeded;
#line 643 "math.m"
    MR_Float mercury__math__Log_4;
#line 641 "math.m"
    MR_Float mercury__math__V_5_5;

#line 277 "math.m"
{
#define MR_PROC_LABEL mercury__math__log10_1_f_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 277 "math.m"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif

#line 2133 "math.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 277 "math.m"
	}
mercury__math__succeeded  = SUCCESS_INDICATOR;
}
#line 641 "math.m"
    if (mercury__math__succeeded)
#line 641 "math.m"
      {
#line 641 "math.m"
        mercury__math__V_5_5 = (MR_Float) 0.0000000000000000;
#line 641 "math.m"
        mercury__math__succeeded = (mercury__math__X_3 <= mercury__math__V_5_5);
#line 641 "math.m"
      }
#line 643 "math.m"
    if (mercury__math__succeeded)
#line 642 "math.m"
      {
#line 642 "math.m"
        MR_Word mercury__math__TypeCtorInfo_8_8 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
#line 642 "math.m"
        MR_Word mercury__math__V_6_6 = (MR_Word) ((MR_Box) ((MR_String) "math.log10"));

#line 642 "math.m"
        {
#line 642 "math.m"
          mercury__exception__throw_1_p_0(mercury__math__TypeCtorInfo_8_8, ((MR_Box) (mercury__math__V_6_6)));
        }
#line 642 "math.m"
      }
#line 643 "math.m"
    else
#line 647 "math.m"
      {
#line 651 "math.m"
{
#define MR_PROC_LABEL mercury__math__log10_1_f_0

	MR_Float X;
	MR_Float Log10;

	X =  mercury__math__X_3 ;
		{
#line 651 "math.m"

    Log10 = log10(X);

#line 2185 "math.c"

		;}
#undef MR_PROC_LABEL
	 mercury__math__Log_4  = Log10;
#line 651 "math.m"
}
#line 647 "math.m"
      }
#line 643 "math.m"
    return mercury__math__Log_4;
#line 643 "math.m"
  }
#line 128 "math.m"
}

#line 122 "math.m"
MR_Float MR_CALL 
mercury__math__unchecked_ln_1_f_0(
#line 122 "math.m"
  MR_Float mercury__math__X_1)
#line 122 "math.m"
{
#line 614 "math.m"
  {
#line 614 "math.m"
    MR_bool mercury__math__succeeded;
#line 614 "math.m"
    MR_Float mercury__math__Log_2;

#line 618 "math.m"
{
#define MR_PROC_LABEL mercury__math__unchecked_ln_1_f_0

	MR_Float X;
	MR_Float Log;

	X =  mercury__math__X_1 ;
		{
#line 618 "math.m"

    Log = log(X);

#line 2228 "math.c"

		;}
#undef MR_PROC_LABEL
	 mercury__math__Log_2  = Log;
#line 618 "math.m"
}
#line 614 "math.m"
    return mercury__math__Log_2;
#line 614 "math.m"
  }
#line 122 "math.m"
}

#line 121 "math.m"
MR_Float MR_CALL 
mercury__math__ln_1_f_0(
#line 121 "math.m"
  MR_Float mercury__math__X_3)
#line 121 "math.m"
{
#line 610 "math.m"
  {
#line 610 "math.m"
    MR_bool mercury__math__succeeded;
#line 610 "math.m"
    MR_Float mercury__math__Log_4;
#line 608 "math.m"
    MR_Float mercury__math__V_5_5;

#line 277 "math.m"
{
#define MR_PROC_LABEL mercury__math__ln_1_f_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 277 "math.m"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif

#line 2273 "math.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 277 "math.m"
	}
mercury__math__succeeded  = SUCCESS_INDICATOR;
}
#line 608 "math.m"
    if (mercury__math__succeeded)
#line 608 "math.m"
      {
#line 608 "math.m"
        mercury__math__V_5_5 = (MR_Float) 0.0000000000000000;
#line 608 "math.m"
        mercury__math__succeeded = (mercury__math__X_3 <= mercury__math__V_5_5);
#line 608 "math.m"
      }
#line 610 "math.m"
    if (mercury__math__succeeded)
#line 609 "math.m"
      {
#line 609 "math.m"
        MR_Word mercury__math__TypeCtorInfo_8_8 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
#line 609 "math.m"
        MR_Word mercury__math__V_6_6 = (MR_Word) ((MR_Box) ((MR_String) "math.ln"));

#line 609 "math.m"
        {
#line 609 "math.m"
          mercury__exception__throw_1_p_0(mercury__math__TypeCtorInfo_8_8, ((MR_Box) (mercury__math__V_6_6)));
        }
#line 609 "math.m"
      }
#line 610 "math.m"
    else
#line 614 "math.m"
      {
#line 618 "math.m"
{
#define MR_PROC_LABEL mercury__math__ln_1_f_0

	MR_Float X;
	MR_Float Log;

	X =  mercury__math__X_3 ;
		{
#line 618 "math.m"

    Log = log(X);

#line 2325 "math.c"

		;}
#undef MR_PROC_LABEL
	 mercury__math__Log_4  = Log;
#line 618 "math.m"
}
#line 614 "math.m"
      }
#line 610 "math.m"
    return mercury__math__Log_4;
#line 610 "math.m"
  }
#line 121 "math.m"
}

#line 115 "math.m"
MR_Float MR_CALL 
mercury__math__exp_1_f_0(
#line 115 "math.m"
  MR_Float mercury__math__X_1)
#line 115 "math.m"
{
#line 581 "math.m"
  {
#line 581 "math.m"
    MR_bool mercury__math__succeeded;
#line 581 "math.m"
    MR_Float mercury__math__Exp_2;

#line 585 "math.m"
{
#define MR_PROC_LABEL mercury__math__exp_1_f_0

	MR_Float X;
	MR_Float Exp;

	X =  mercury__math__X_1 ;
		{
#line 585 "math.m"

    Exp = exp(X);

#line 2368 "math.c"

		;}
#undef MR_PROC_LABEL
	 mercury__math__Exp_2  = Exp;
#line 585 "math.m"
}
#line 581 "math.m"
    return mercury__math__Exp_2;
#line 581 "math.m"
  }
#line 115 "math.m"
}

#line 111 "math.m"
MR_Float MR_CALL 
mercury__math__unchecked_pow_2_f_0(
#line 111 "math.m"
  MR_Float mercury__math__X_1,
#line 111 "math.m"
  MR_Float mercury__math__Y_2)
#line 111 "math.m"
{
#line 552 "math.m"
  {
#line 552 "math.m"
    MR_bool mercury__math__succeeded;
#line 552 "math.m"
    MR_Float mercury__math__Res_3;

#line 556 "math.m"
{
#define MR_PROC_LABEL mercury__math__unchecked_pow_2_f_0

	MR_Float X;
	MR_Float Y;
	MR_Float Res;

	X =  mercury__math__X_1 ;
	Y =  mercury__math__Y_2 ;
		{
#line 556 "math.m"

    Res = pow(X, Y);

#line 2413 "math.c"

		;}
#undef MR_PROC_LABEL
	 mercury__math__Res_3  = Res;
#line 556 "math.m"
}
#line 552 "math.m"
    return mercury__math__Res_3;
#line 552 "math.m"
  }
#line 111 "math.m"
}

#line 110 "math.m"
MR_Float MR_CALL 
mercury__math__pow_2_f_0(
#line 110 "math.m"
  MR_Float mercury__math__X_4,
#line 110 "math.m"
  MR_Float mercury__math__Y_5)
#line 110 "math.m"
{
#line 542 "math.m"
  {
#line 542 "math.m"
    MR_bool mercury__math__succeeded;
#line 542 "math.m"
    MR_Float mercury__math__Res_6;
#line 540 "math.m"
    MR_Float mercury__math__V_7_7;

#line 277 "math.m"
{
#define MR_PROC_LABEL mercury__math__pow_2_f_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 277 "math.m"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif

#line 2460 "math.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 277 "math.m"
	}
mercury__math__succeeded  = SUCCESS_INDICATOR;
}
#line 540 "math.m"
    if (mercury__math__succeeded)
#line 540 "math.m"
      {
#line 540 "math.m"
        mercury__math__V_7_7 = (MR_Float) 0.0000000000000000;
#line 540 "math.m"
        mercury__math__succeeded = (mercury__math__X_4 < mercury__math__V_7_7);
#line 540 "math.m"
      }
#line 542 "math.m"
    if (mercury__math__succeeded)
#line 541 "math.m"
      {
#line 541 "math.m"
        MR_Word mercury__math__TypeCtorInfo_13_13 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
#line 541 "math.m"
        MR_Word mercury__math__V_8_8 = (MR_Word) ((MR_Box) ((MR_String) "math.pow"));

#line 541 "math.m"
        {
#line 541 "math.m"
          mercury__exception__throw_1_p_0(mercury__math__TypeCtorInfo_13_13, ((MR_Box) (mercury__math__V_8_8)));
        }
#line 541 "math.m"
      }
#line 542 "math.m"
    else
#line 548 "math.m"
      {
#line 542 "math.m"
        mercury__math__succeeded = (mercury__math__X_4 == ((MR_Float) 0.0000000000000000));
#line 548 "math.m"
        if (mercury__math__succeeded)
#line 545 "math.m"
          {
#line 543 "math.m"
            mercury__math__succeeded = (mercury__math__Y_5 <= ((MR_Float) 0.0000000000000000));
#line 545 "math.m"
            if (mercury__math__succeeded)
#line 544 "math.m"
              {
#line 544 "math.m"
                MR_Word mercury__math__TypeCtorInfo_14_14 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
#line 544 "math.m"
                MR_Word mercury__math__V_11_11 = (MR_Word) ((MR_Box) ((MR_String) "math.pow"));

#line 544 "math.m"
                {
#line 544 "math.m"
                  mercury__exception__throw_1_p_0(mercury__math__TypeCtorInfo_14_14, ((MR_Box) (mercury__math__V_11_11)));
                }
#line 544 "math.m"
              }
#line 545 "math.m"
            else
#line 546 "math.m"
              mercury__math__Res_6 = (MR_Float) 0.0000000000000000;
#line 545 "math.m"
          }
#line 548 "math.m"
        else
#line 552 "math.m"
          {
#line 556 "math.m"
{
#define MR_PROC_LABEL mercury__math__pow_2_f_0

	MR_Float X;
	MR_Float Y;
	MR_Float Res;

	X =  mercury__math__X_4 ;
	Y =  mercury__math__Y_5 ;
		{
#line 556 "math.m"

    Res = pow(X, Y);

#line 2548 "math.c"

		;}
#undef MR_PROC_LABEL
	 mercury__math__Res_6  = Res;
#line 556 "math.m"
}
#line 552 "math.m"
          }
#line 548 "math.m"
      }
#line 542 "math.m"
    return mercury__math__Res_6;
#line 542 "math.m"
  }
#line 110 "math.m"
}

#line 99 "math.m"
MR_Word MR_CALL 
mercury__math__solve_quadratic_3_f_0(
#line 99 "math.m"
  MR_Float mercury__math__A_5,
#line 99 "math.m"
  MR_Float mercury__math__B_6,
#line 99 "math.m"
  MR_Float mercury__math__C_7)
#line 99 "math.m"
{
#line 505 "math.m"
  {
#line 505 "math.m"
    MR_bool mercury__math__succeeded;
#line 505 "math.m"
    MR_Word mercury__math__Roots_8;
#line 505 "math.m"
    MR_Float mercury__math__DSquared_9;
#line 505 "math.m"
    MR_Word mercury__math__CmpD_10;
#line 505 "math.m"
    MR_Float mercury__math__V_17_17 = (mercury__math__B_6 * mercury__math__B_6);
#line 505 "math.m"
    MR_Float mercury__math__V_19_19;
#line 505 "math.m"
    MR_Float mercury__math__V_20_20 = (((MR_Float) 4.0000000000000000) * mercury__math__A_5);

#line 508 "math.m"
    mercury__math__V_19_19 = (mercury__math__V_20_20 * mercury__math__C_7);
#line 508 "math.m"
    mercury__math__DSquared_9 = (mercury__math__V_17_17 - mercury__math__V_19_19);
#line 53 "private_builtin.opt"
    mercury__math__succeeded = (mercury__math__DSquared_9 < ((MR_Float) 0.0000000000000000));
#line 56 "private_builtin.opt"
    if (mercury__math__succeeded)
#line 55 "private_builtin.opt"
      mercury__math__CmpD_10 = (MR_Integer) 1;
#line 56 "private_builtin.opt"
    else
#line 61 "private_builtin.opt"
      {
#line 58 "private_builtin.opt"
        mercury__math__succeeded = (mercury__math__DSquared_9 > ((MR_Float) 0.0000000000000000));
#line 61 "private_builtin.opt"
        if (mercury__math__succeeded)
#line 60 "private_builtin.opt"
          mercury__math__CmpD_10 = (MR_Integer) 2;
#line 61 "private_builtin.opt"
        else
#line 62 "private_builtin.opt"
          mercury__math__CmpD_10 = (MR_Integer) 0;
#line 61 "private_builtin.opt"
      }
#line 513 "math.m"
#line 513 "math.m"
    switch (mercury__math__CmpD_10) {
#line 513 "math.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 513 "math.m"
      case (MR_Integer) 1:
#line 512 "math.m"
        mercury__math__Roots_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 513 "math.m"
        break;
#line 513 "math.m"
      case (MR_Integer) 0:
#line 514 "math.m"
        {
#line 514 "math.m"
          MR_Float mercury__math__Root_11;
#line 514 "math.m"
          MR_Float mercury__math__V_30_30 = (((MR_Float) -0.50000000000000000) * mercury__math__B_6);

#line 93 "float.opt"
{
#define MR_PROC_LABEL mercury__math__solve_quadratic_3_f_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 93 "float.opt"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif

#line 2655 "math.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 93 "float.opt"
	}
mercury__math__succeeded  = SUCCESS_INDICATOR;
}
#line 28 "float.opt"
          if (mercury__math__succeeded)
#line 29 "float.opt"
            mercury__math__succeeded = (mercury__math__A_5 == ((MR_Float) 0.0000000000000000));
#line 34 "float.opt"
          if (mercury__math__succeeded)
#line 31 "float.opt"
            {
#line 31 "float.opt"
              MR_Word mercury__math__TypeCtorInfo_9_42 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
#line 31 "float.opt"
              MR_Word mercury__math__V_7_40 = (MR_Word) ((MR_Box) ((MR_String) "float.\'/\': division by zero"));

#line 33 "float.opt"
              {
#line 33 "float.opt"
                mercury__exception__throw_1_p_0(mercury__math__TypeCtorInfo_9_42, ((MR_Box) (mercury__math__V_7_40)));
              }
#line 31 "float.opt"
            }
#line 34 "float.opt"
          else
#line 35 "float.opt"
            mercury__math__Root_11 = (mercury__math__V_30_30 / mercury__math__A_5);
#line 516 "math.m"
          {
#line 516 "math.m"
            mercury__math__Roots_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 516 "math.m"
            MR_hl_field(MR_mktag(1), mercury__math__Roots_8, 0) = MR_box_float(mercury__math__Root_11);
#line 516 "math.m"
          }
#line 514 "math.m"
        }
#line 513 "math.m"
        break;
#line 513 "math.m"
      case (MR_Integer) 2:
#line 518 "math.m"
        {
#line 518 "math.m"
          MR_Float mercury__math__D_12;
#line 518 "math.m"
          MR_Word mercury__math__CmpB_13;
#line 518 "math.m"
          MR_Float mercury__math__Root1_15;
#line 518 "math.m"
          MR_Float mercury__math__Root2_16;

#line 519 "math.m"
          {
#line 519 "math.m"
            mercury__math__D_12 = mercury__math__sqrt_1_f_0(mercury__math__DSquared_9);
          }
#line 53 "private_builtin.opt"
          mercury__math__succeeded = (mercury__math__B_6 < ((MR_Float) 0.0000000000000000));
#line 56 "private_builtin.opt"
          if (mercury__math__succeeded)
#line 55 "private_builtin.opt"
            mercury__math__CmpB_13 = (MR_Integer) 1;
#line 56 "private_builtin.opt"
          else
#line 61 "private_builtin.opt"
            {
#line 58 "private_builtin.opt"
              mercury__math__succeeded = (mercury__math__B_6 > ((MR_Float) 0.0000000000000000));
#line 61 "private_builtin.opt"
              if (mercury__math__succeeded)
#line 60 "private_builtin.opt"
                mercury__math__CmpB_13 = (MR_Integer) 2;
#line 61 "private_builtin.opt"
              else
#line 62 "private_builtin.opt"
                mercury__math__CmpB_13 = (MR_Integer) 0;
#line 61 "private_builtin.opt"
            }
#line 526 "math.m"
#line 526 "math.m"
          switch (mercury__math__CmpB_13) {
#line 526 "math.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 526 "math.m"
            case (MR_Integer) 1:
#line 522 "math.m"
              {
#line 522 "math.m"
                MR_Float mercury__math__Q_14;
#line 522 "math.m"
                MR_Float mercury__math__V_29_29 = (mercury__math__B_6 - mercury__math__D_12);

#line 523 "math.m"
                mercury__math__Q_14 = (((MR_Float) -0.50000000000000000) * mercury__math__V_29_29);
#line 93 "float.opt"
{
#define MR_PROC_LABEL mercury__math__solve_quadratic_3_f_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 93 "float.opt"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif

#line 2771 "math.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 93 "float.opt"
	}
mercury__math__succeeded  = SUCCESS_INDICATOR;
}
#line 28 "float.opt"
                if (mercury__math__succeeded)
#line 29 "float.opt"
                  mercury__math__succeeded = (mercury__math__A_5 == ((MR_Float) 0.0000000000000000));
#line 34 "float.opt"
                if (mercury__math__succeeded)
#line 31 "float.opt"
                  {
#line 31 "float.opt"
                    MR_Word mercury__math__TypeCtorInfo_9_51 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
#line 31 "float.opt"
                    MR_Word mercury__math__V_7_49 = (MR_Word) ((MR_Box) ((MR_String) "float.\'/\': division by zero"));

#line 33 "float.opt"
                    {
#line 33 "float.opt"
                      mercury__exception__throw_1_p_0(mercury__math__TypeCtorInfo_9_51, ((MR_Box) (mercury__math__V_7_49)));
                    }
#line 31 "float.opt"
                  }
#line 34 "float.opt"
                else
#line 35 "float.opt"
                  mercury__math__Root1_15 = (mercury__math__Q_14 / mercury__math__A_5);
#line 93 "float.opt"
{
#define MR_PROC_LABEL mercury__math__solve_quadratic_3_f_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 93 "float.opt"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif

#line 2819 "math.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 93 "float.opt"
	}
mercury__math__succeeded  = SUCCESS_INDICATOR;
}
#line 28 "float.opt"
                if (mercury__math__succeeded)
#line 29 "float.opt"
                  mercury__math__succeeded = (mercury__math__Q_14 == ((MR_Float) 0.0000000000000000));
#line 34 "float.opt"
                if (mercury__math__succeeded)
#line 31 "float.opt"
                  {
#line 31 "float.opt"
                    MR_Word mercury__math__TypeCtorInfo_9_57 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
#line 31 "float.opt"
                    MR_Word mercury__math__V_7_55 = (MR_Word) ((MR_Box) ((MR_String) "float.\'/\': division by zero"));

#line 33 "float.opt"
                    {
#line 33 "float.opt"
                      mercury__exception__throw_1_p_0(mercury__math__TypeCtorInfo_9_57, ((MR_Box) (mercury__math__V_7_55)));
                    }
#line 31 "float.opt"
                  }
#line 34 "float.opt"
                else
#line 35 "float.opt"
                  mercury__math__Root2_16 = (mercury__math__C_7 / mercury__math__Q_14);
#line 522 "math.m"
              }
#line 526 "math.m"
              break;
#line 526 "math.m"
            case (MR_Integer) 0:
#line 527 "math.m"
              {
#line 527 "math.m"
                MR_Float mercury__math__V_26_26 = (((MR_Float) -0.50000000000000000) * mercury__math__D_12);

#line 93 "float.opt"
{
#define MR_PROC_LABEL mercury__math__solve_quadratic_3_f_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 93 "float.opt"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif

#line 2878 "math.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 93 "float.opt"
	}
mercury__math__succeeded  = SUCCESS_INDICATOR;
}
#line 28 "float.opt"
                if (mercury__math__succeeded)
#line 29 "float.opt"
                  mercury__math__succeeded = (mercury__math__A_5 == ((MR_Float) 0.0000000000000000));
#line 34 "float.opt"
                if (mercury__math__succeeded)
#line 31 "float.opt"
                  {
#line 31 "float.opt"
                    MR_Word mercury__math__TypeCtorInfo_9_63 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
#line 31 "float.opt"
                    MR_Word mercury__math__V_7_61 = (MR_Word) ((MR_Box) ((MR_String) "float.\'/\': division by zero"));

#line 33 "float.opt"
                    {
#line 33 "float.opt"
                      mercury__exception__throw_1_p_0(mercury__math__TypeCtorInfo_9_63, ((MR_Box) (mercury__math__V_7_61)));
                    }
#line 31 "float.opt"
                  }
#line 34 "float.opt"
                else
#line 35 "float.opt"
                  mercury__math__Root1_15 = (mercury__math__V_26_26 / mercury__math__A_5);
#line 529 "math.m"
                mercury__math__Root2_16 = (((MR_Float) 0.0000000000000000) - mercury__math__Root1_15);
#line 527 "math.m"
              }
#line 526 "math.m"
              break;
#line 526 "math.m"
            case (MR_Integer) 2:
#line 531 "math.m"
              {
#line 531 "math.m"
                MR_Float mercury__math__V_25_25 = (mercury__math__B_6 + mercury__math__D_12);
#line 531 "math.m"
                MR_Float mercury__math__Q_32 = (((MR_Float) -0.50000000000000000) * mercury__math__V_25_25);

#line 93 "float.opt"
{
#define MR_PROC_LABEL mercury__math__solve_quadratic_3_f_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 93 "float.opt"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif

#line 2941 "math.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 93 "float.opt"
	}
mercury__math__succeeded  = SUCCESS_INDICATOR;
}
#line 28 "float.opt"
                if (mercury__math__succeeded)
#line 29 "float.opt"
                  mercury__math__succeeded = (mercury__math__A_5 == ((MR_Float) 0.0000000000000000));
#line 34 "float.opt"
                if (mercury__math__succeeded)
#line 31 "float.opt"
                  {
#line 31 "float.opt"
                    MR_Word mercury__math__TypeCtorInfo_9_69 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
#line 31 "float.opt"
                    MR_Word mercury__math__V_7_67 = (MR_Word) ((MR_Box) ((MR_String) "float.\'/\': division by zero"));

#line 33 "float.opt"
                    {
#line 33 "float.opt"
                      mercury__exception__throw_1_p_0(mercury__math__TypeCtorInfo_9_69, ((MR_Box) (mercury__math__V_7_67)));
                    }
#line 31 "float.opt"
                  }
#line 34 "float.opt"
                else
#line 35 "float.opt"
                  mercury__math__Root1_15 = (mercury__math__Q_32 / mercury__math__A_5);
#line 93 "float.opt"
{
#define MR_PROC_LABEL mercury__math__solve_quadratic_3_f_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 93 "float.opt"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif

#line 2989 "math.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 93 "float.opt"
	}
mercury__math__succeeded  = SUCCESS_INDICATOR;
}
#line 28 "float.opt"
                if (mercury__math__succeeded)
#line 29 "float.opt"
                  mercury__math__succeeded = (mercury__math__Q_32 == ((MR_Float) 0.0000000000000000));
#line 34 "float.opt"
                if (mercury__math__succeeded)
#line 31 "float.opt"
                  {
#line 31 "float.opt"
                    MR_Word mercury__math__TypeCtorInfo_9_75 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
#line 31 "float.opt"
                    MR_Word mercury__math__V_7_73 = (MR_Word) ((MR_Box) ((MR_String) "float.\'/\': division by zero"));

#line 33 "float.opt"
                    {
#line 33 "float.opt"
                      mercury__exception__throw_1_p_0(mercury__math__TypeCtorInfo_9_75, ((MR_Box) (mercury__math__V_7_73)));
                    }
#line 31 "float.opt"
                  }
#line 34 "float.opt"
                else
#line 35 "float.opt"
                  mercury__math__Root2_16 = (mercury__math__C_7 / mercury__math__Q_32);
#line 531 "math.m"
              }
#line 526 "math.m"
              break;
#line 526 "math.m"
          }
#line 536 "math.m"
          {
#line 536 "math.m"
            mercury__math__Roots_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 536 "math.m"
            MR_hl_field(MR_mktag(2), mercury__math__Roots_8, 0) = MR_box_float(mercury__math__Root1_15);
#line 536 "math.m"
            MR_hl_field(MR_mktag(2), mercury__math__Roots_8, 1) = MR_box_float(mercury__math__Root2_16);
#line 536 "math.m"
          }
#line 518 "math.m"
        }
#line 513 "math.m"
        break;
#line 513 "math.m"
    }
#line 505 "math.m"
    return mercury__math__Roots_8;
#line 505 "math.m"
  }
#line 99 "math.m"
}

#line 87 "math.m"
MR_Float MR_CALL 
mercury__math__unchecked_sqrt_1_f_0(
#line 87 "math.m"
  MR_Float mercury__math__X_1)
#line 87 "math.m"
{
#line 476 "math.m"
  {
#line 476 "math.m"
    MR_bool mercury__math__succeeded;
#line 476 "math.m"
    MR_Float mercury__math__SquareRoot_2;

#line 480 "math.m"
{
#define MR_PROC_LABEL mercury__math__unchecked_sqrt_1_f_0

	MR_Float X;
	MR_Float SquareRoot;

	X =  mercury__math__X_1 ;
		{
#line 480 "math.m"

    SquareRoot = sqrt(X);

#line 3078 "math.c"

		;}
#undef MR_PROC_LABEL
	 mercury__math__SquareRoot_2  = SquareRoot;
#line 480 "math.m"
}
#line 476 "math.m"
    return mercury__math__SquareRoot_2;
#line 476 "math.m"
  }
#line 87 "math.m"
}

#line 86 "math.m"
MR_Float MR_CALL 
mercury__math__sqrt_1_f_0(
#line 86 "math.m"
  MR_Float mercury__math__X_3)
#line 86 "math.m"
{
#line 472 "math.m"
  {
#line 472 "math.m"
    MR_bool mercury__math__succeeded;
#line 472 "math.m"
    MR_Float mercury__math__SquareRoot_4;
#line 470 "math.m"
    MR_Float mercury__math__V_5_5;

#line 277 "math.m"
{
#define MR_PROC_LABEL mercury__math__sqrt_1_f_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 277 "math.m"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif

#line 3123 "math.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 277 "math.m"
	}
mercury__math__succeeded  = SUCCESS_INDICATOR;
}
#line 470 "math.m"
    if (mercury__math__succeeded)
#line 470 "math.m"
      {
#line 470 "math.m"
        mercury__math__V_5_5 = (MR_Float) 0.0000000000000000;
#line 470 "math.m"
        mercury__math__succeeded = (mercury__math__X_3 < mercury__math__V_5_5);
#line 470 "math.m"
      }
#line 472 "math.m"
    if (mercury__math__succeeded)
#line 471 "math.m"
      {
#line 471 "math.m"
        MR_Word mercury__math__TypeCtorInfo_8_8 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
#line 471 "math.m"
        MR_Word mercury__math__V_6_6 = (MR_Word) ((MR_Box) ((MR_String) "math.sqrt"));

#line 471 "math.m"
        {
#line 471 "math.m"
          mercury__exception__throw_1_p_0(mercury__math__TypeCtorInfo_8_8, ((MR_Box) (mercury__math__V_6_6)));
        }
#line 471 "math.m"
      }
#line 472 "math.m"
    else
#line 476 "math.m"
      {
#line 480 "math.m"
{
#define MR_PROC_LABEL mercury__math__sqrt_1_f_0

	MR_Float X;
	MR_Float SquareRoot;

	X =  mercury__math__X_3 ;
		{
#line 480 "math.m"

    SquareRoot = sqrt(X);

#line 3175 "math.c"

		;}
#undef MR_PROC_LABEL
	 mercury__math__SquareRoot_4  = SquareRoot;
#line 480 "math.m"
}
#line 476 "math.m"
      }
#line 472 "math.m"
    return mercury__math__SquareRoot_4;
#line 472 "math.m"
  }
#line 86 "math.m"
}

#line 75 "math.m"
MR_Float MR_CALL 
mercury__math__truncate_1_f_0(
#line 75 "math.m"
  MR_Float mercury__math__X_3)
#line 75 "math.m"
{
#line 467 "math.m"
  {
#line 467 "math.m"
    MR_bool mercury__math__succeeded = (mercury__math__X_3 < ((MR_Float) 0.0000000000000000));
#line 467 "math.m"
    MR_Float mercury__math__HeadVar__2_2;

#line 467 "math.m"
    if (mercury__math__succeeded)
#line 374 "math.m"
      {
#line 378 "math.m"
{
#define MR_PROC_LABEL mercury__math__truncate_1_f_0

	MR_Float Num;
	MR_Float Ceil;

	Num =  mercury__math__X_3 ;
		{
#line 378 "math.m"

    Ceil = ceil(Num);

#line 3222 "math.c"

		;}
#undef MR_PROC_LABEL
	 mercury__math__HeadVar__2_2  = Ceil;
#line 378 "math.m"
}
#line 374 "math.m"
      }
#line 467 "math.m"
    else
#line 406 "math.m"
      {
#line 410 "math.m"
{
#define MR_PROC_LABEL mercury__math__truncate_1_f_0

	MR_Float Num;
	MR_Float Floor;

	Num =  mercury__math__X_3 ;
		{
#line 410 "math.m"

    Floor = floor(Num);

#line 3248 "math.c"

		;}
#undef MR_PROC_LABEL
	 mercury__math__HeadVar__2_2  = Floor;
#line 410 "math.m"
}
#line 406 "math.m"
      }
#line 467 "math.m"
    return mercury__math__HeadVar__2_2;
#line 467 "math.m"
  }
#line 75 "math.m"
}

#line 70 "math.m"
MR_Float MR_CALL 
mercury__math__round_1_f_0(
#line 70 "math.m"
  MR_Float mercury__math__Num_1)
#line 70 "math.m"
{
#line 438 "math.m"
  {
#line 438 "math.m"
    MR_bool mercury__math__succeeded;
#line 438 "math.m"
    MR_Float mercury__math__Rounded_2;

#line 442 "math.m"
{
#define MR_PROC_LABEL mercury__math__round_1_f_0

	MR_Float Num;
	MR_Float Rounded;

	Num =  mercury__math__Num_1 ;
		{
#line 442 "math.m"

    Rounded = floor(Num+0.5);

#line 3291 "math.c"

		;}
#undef MR_PROC_LABEL
	 mercury__math__Rounded_2  = Rounded;
#line 442 "math.m"
}
#line 438 "math.m"
    return mercury__math__Rounded_2;
#line 438 "math.m"
  }
#line 70 "math.m"
}

#line 65 "math.m"
MR_Float MR_CALL 
mercury__math__floor_1_f_0(
#line 65 "math.m"
  MR_Float mercury__math__Num_1)
#line 65 "math.m"
{
#line 406 "math.m"
  {
#line 406 "math.m"
    MR_bool mercury__math__succeeded;
#line 406 "math.m"
    MR_Float mercury__math__Floor_2;

#line 410 "math.m"
{
#define MR_PROC_LABEL mercury__math__floor_1_f_0

	MR_Float Num;
	MR_Float Floor;

	Num =  mercury__math__Num_1 ;
		{
#line 410 "math.m"

    Floor = floor(Num);

#line 3332 "math.c"

		;}
#undef MR_PROC_LABEL
	 mercury__math__Floor_2  = Floor;
#line 410 "math.m"
}
#line 406 "math.m"
    return mercury__math__Floor_2;
#line 406 "math.m"
  }
#line 65 "math.m"
}

#line 60 "math.m"
MR_Float MR_CALL 
mercury__math__ceiling_1_f_0(
#line 60 "math.m"
  MR_Float mercury__math__Num_1)
#line 60 "math.m"
{
#line 374 "math.m"
  {
#line 374 "math.m"
    MR_bool mercury__math__succeeded;
#line 374 "math.m"
    MR_Float mercury__math__Ceil_2;

#line 378 "math.m"
{
#define MR_PROC_LABEL mercury__math__ceiling_1_f_0

	MR_Float Num;
	MR_Float Ceil;

	Num =  mercury__math__Num_1 ;
		{
#line 378 "math.m"

    Ceil = ceil(Num);

#line 3373 "math.c"

		;}
#undef MR_PROC_LABEL
	 mercury__math__Ceil_2  = Ceil;
#line 378 "math.m"
}
#line 374 "math.m"
    return mercury__math__Ceil_2;
#line 374 "math.m"
  }
#line 60 "math.m"
}

#line 50 "math.m"
MR_Float MR_CALL 
mercury__math__e_0_f_0(void)
#line 50 "math.m"
{
#line 348 "math.m"
  {
#line 348 "math.m"
    MR_bool mercury__math__succeeded;
#line 348 "math.m"
    MR_Float mercury__math__E_1;

#line 352 "math.m"
{
#define MR_PROC_LABEL mercury__math__e_0_f_0

	MR_Float E;

		{
#line 352 "math.m"

    E = ML_FLOAT_E;

#line 3410 "math.c"

		;}
#undef MR_PROC_LABEL
	 mercury__math__E_1  = E;
#line 352 "math.m"
}
#line 348 "math.m"
    return mercury__math__E_1;
#line 348 "math.m"
  }
#line 50 "math.m"
}

#line 46 "math.m"
MR_Float MR_CALL 
mercury__math__pi_0_f_0(void)
#line 46 "math.m"
{
#line 315 "math.m"
  {
#line 315 "math.m"
    MR_bool mercury__math__succeeded;
#line 315 "math.m"
    MR_Float mercury__math__Pi_1;

#line 319 "math.m"
{
#define MR_PROC_LABEL mercury__math__pi_0_f_0

	MR_Float Pi;

		{
#line 319 "math.m"

    Pi = ML_FLOAT_PI;

#line 3447 "math.c"

		;}
#undef MR_PROC_LABEL
	 mercury__math__Pi_1  = Pi;
#line 319 "math.m"
}
#line 315 "math.m"
    return mercury__math__Pi_1;
#line 315 "math.m"
  }
#line 46 "math.m"
}

void mercury__math__init(void)
{
}

void mercury__math__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__math__math__type_ctor_info_domain_error_0);
	MR_register_type_ctor_info(&mercury__math__math__type_ctor_info_quadratic_roots_0);
}

void mercury__math__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module math. */
