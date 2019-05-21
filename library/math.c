/*
** Automatically generated from `math.m'
** by the Mercury compiler,
** version rotd-2017-07-24
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
#include "uint.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "stream.string_writer.mih"
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"




static const MR_Integer mercury__math__math__functor_number_map_domain_error_0[1];

static const MR_NotagFunctorDesc mercury__math__math__notag_functor_desc_domain_error_0;

static const MR_DuFunctorDesc mercury__math__math__du_functor_desc_quadratic_roots_0_0;

static const MR_PseudoTypeInfo mercury__math__math__field_types_quadratic_roots_0_1[1];

static const MR_DuFunctorDesc mercury__math__math__du_functor_desc_quadratic_roots_0_1;

static const MR_PseudoTypeInfo mercury__math__math__field_types_quadratic_roots_0_2[2];

static const MR_DuFunctorDesc mercury__math__math__du_functor_desc_quadratic_roots_0_2;

static const MR_DuFunctorDescPtr mercury__math__math__du_stag_ordered_quadratic_roots_0_0[1];

static const MR_DuFunctorDescPtr mercury__math__math__du_stag_ordered_quadratic_roots_0_1[1];

static const MR_DuFunctorDescPtr mercury__math__math__du_stag_ordered_quadratic_roots_0_2[1];

static const MR_DuPtagLayout mercury__math__math__du_ptag_ordered_quadratic_roots_0[3];

static const MR_DuFunctorDescPtr mercury__math__math__du_name_ordered_quadratic_roots_0[3];

static const MR_Integer mercury__math__math__functor_number_map_quadratic_roots_0[3];

static MR_Integer MR_CALL 
mercury__math__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static MR_bool MR_CALL 
mercury__math__math_domain_checks_0_p_0(void);

static MR_bool MR_CALL 
mercury__math____Unify____domain_error_0_0_10001(
  MR_Box mercury__math__wrapper_arg_1,
  MR_Box mercury__math__wrapper_arg_2);

static void MR_CALL 
mercury__math____Compare____domain_error_0_0_10001(
  MR_Box * mercury__math__wrapper_arg_1,
  MR_Box mercury__math__wrapper_arg_2,
  MR_Box mercury__math__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__math____Unify____quadratic_roots_0_0_10001(
  MR_Box mercury__math__wrapper_arg_1,
  MR_Box mercury__math__wrapper_arg_2);

static void MR_CALL 
mercury__math____Compare____quadratic_roots_0_0_10001(
  MR_Box * mercury__math__wrapper_arg_1,
  MR_Box mercury__math__wrapper_arg_2,
  MR_Box mercury__math__wrapper_arg_3);


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
#include "uint.mh"
#include "version_array.mh"



static const MR_Integer mercury__math__math__functor_number_map_domain_error_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc mercury__math__math__notag_functor_desc_domain_error_0 = {
  (MR_String) "domain_error",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mercury__math__math__type_ctor_info_domain_error_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_NOTAG_GROUND,
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

static const MR_DuFunctorDesc mercury__math__math__du_functor_desc_quadratic_roots_0_0 = {
  (MR_String) "no_roots",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__math__math__field_types_quadratic_roots_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
};

static const MR_DuFunctorDesc mercury__math__math__du_functor_desc_quadratic_roots_0_1 = {
  (MR_String) "one_root",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__math__math__field_types_quadratic_roots_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__math__math__field_types_quadratic_roots_0_2[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
};

static const MR_DuFunctorDesc mercury__math__math__du_functor_desc_quadratic_roots_0_2 = {
  (MR_String) "two_roots",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mercury__math__math__field_types_quadratic_roots_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__math__math__du_stag_ordered_quadratic_roots_0_0[1] = {
  &mercury__math__math__du_functor_desc_quadratic_roots_0_0
};

static const MR_DuFunctorDescPtr mercury__math__math__du_stag_ordered_quadratic_roots_0_1[1] = {
  &mercury__math__math__du_functor_desc_quadratic_roots_0_1
};

static const MR_DuFunctorDescPtr mercury__math__math__du_stag_ordered_quadratic_roots_0_2[1] = {
  &mercury__math__math__du_functor_desc_quadratic_roots_0_2
};

static const MR_DuPtagLayout mercury__math__math__du_ptag_ordered_quadratic_roots_0[3] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_LOCAL,
    mercury__math__math__du_stag_ordered_quadratic_roots_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__math__math__du_stag_ordered_quadratic_roots_0_1
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__math__math__du_stag_ordered_quadratic_roots_0_2
  }
};

static const MR_DuFunctorDescPtr mercury__math__math__du_name_ordered_quadratic_roots_0[3] = {
  &mercury__math__math__du_functor_desc_quadratic_roots_0_0,
  &mercury__math__math__du_functor_desc_quadratic_roots_0_1,
  &mercury__math__math__du_functor_desc_quadratic_roots_0_2
};

static const MR_Integer mercury__math__math__functor_number_map_quadratic_roots_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct mercury__math__math__type_ctor_info_quadratic_roots_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 3,
  MR_TYPECTOR_REP_DU,
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

static MR_Integer MR_CALL 
mercury__math__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  {
    MR_bool mercury__math__succeeded;

    return (MR_Integer) 1200;
  }
}

void MR_CALL 
mercury__math____Compare____quadratic_roots_0_0(
  MR_Word * mercury__math__HeadVar__1_1,
  MR_Word mercury__math__HeadVar__2_2,
  MR_Word mercury__math__HeadVar__3_3)
{
  {
    MR_bool mercury__math__succeeded;
    MR_Integer mercury__math__CastX_23 = (MR_Integer) mercury__math__HeadVar__2_2;
    MR_Integer mercury__math__CastY_24 = (MR_Integer) mercury__math__HeadVar__3_3;

    mercury__math__succeeded = (mercury__math__CastX_23 == mercury__math__CastY_24);
    if (mercury__math__succeeded)
      *mercury__math__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) mercury__math__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_tag((MR_Word) mercury__math__HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *mercury__math__HeadVar__1_1 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              *mercury__math__HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 2:
              *mercury__math__HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Float mercury__math__Var_28 = MR_unbox_float((MR_hl_field(MR_mktag(1), mercury__math__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mercury__math__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *mercury__math__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Float mercury__math__ArgY1_9 = MR_unbox_float((MR_hl_field(MR_mktag(1), mercury__math__HeadVar__3_3, (MR_Integer) 0)));

                  mercury__math__succeeded = (mercury__math__Var_28 < mercury__math__ArgY1_9);
                  if (mercury__math__succeeded)
                    *mercury__math__HeadVar__1_1 = (MR_Integer) 1;
                  else
                    {
                      mercury__math__succeeded = (mercury__math__Var_28 > mercury__math__ArgY1_9);
                      if (mercury__math__succeeded)
                        *mercury__math__HeadVar__1_1 = (MR_Integer) 2;
                      else
                        *mercury__math__HeadVar__1_1 = (MR_Integer) 0;
                    }
                }
                break;
              case (MR_Integer) 2:
                *mercury__math__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Float mercury__math__Var_29 = MR_unbox_float((MR_hl_field(MR_mktag(2), mercury__math__HeadVar__2_2, (MR_Integer) 1)));
            MR_Float mercury__math__Var_30 = MR_unbox_float((MR_hl_field(MR_mktag(2), mercury__math__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mercury__math__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *mercury__math__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *mercury__math__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Float mercury__math__ArgY1_19 = MR_unbox_float((MR_hl_field(MR_mktag(2), mercury__math__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Float mercury__math__ArgY2_21 = MR_unbox_float((MR_hl_field(MR_mktag(2), mercury__math__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word mercury__math__Var_22;

                  mercury__math__succeeded = (mercury__math__Var_30 < mercury__math__ArgY1_19);
                  if (mercury__math__succeeded)
                    mercury__math__Var_22 = (MR_Integer) 1;
                  else
                    {
                      mercury__math__succeeded = (mercury__math__Var_30 > mercury__math__ArgY1_19);
                      if (mercury__math__succeeded)
                        mercury__math__Var_22 = (MR_Integer) 2;
                      else
                        mercury__math__Var_22 = (MR_Integer) 0;
                    }
                  mercury__math__succeeded = (mercury__math__Var_22 == (MR_Integer) 0);
                  mercury__math__succeeded = !(mercury__math__succeeded);
                  if (mercury__math__succeeded)
                    *mercury__math__HeadVar__1_1 = mercury__math__Var_22;
                  else
                    {
                      mercury__math__succeeded = (mercury__math__Var_29 < mercury__math__ArgY2_21);
                      if (mercury__math__succeeded)
                        *mercury__math__HeadVar__1_1 = (MR_Integer) 1;
                      else
                        {
                          mercury__math__succeeded = (mercury__math__Var_29 > mercury__math__ArgY2_21);
                          if (mercury__math__succeeded)
                            *mercury__math__HeadVar__1_1 = (MR_Integer) 2;
                          else
                            *mercury__math__HeadVar__1_1 = (MR_Integer) 0;
                        }
                    }
                }
                break;
            }
          }
          break;
      }
  }
}

MR_bool MR_CALL 
mercury__math____Unify____quadratic_roots_0_0(
  MR_Word mercury__math__HeadVar__1_1,
  MR_Word mercury__math__HeadVar__2_2)
{
  {
    MR_bool mercury__math__succeeded;
    MR_Integer mercury__math__CastX_11 = (MR_Integer) mercury__math__HeadVar__1_1;
    MR_Integer mercury__math__CastY_12 = (MR_Integer) mercury__math__HeadVar__2_2;

    mercury__math__succeeded = (mercury__math__CastX_11 == mercury__math__CastY_12);
    if (mercury__math__succeeded)
      mercury__math__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) mercury__math__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer mercury__math__CastX_3 = (MR_Integer) mercury__math__HeadVar__1_1;
            MR_Integer mercury__math__CastY_4 = (MR_Integer) mercury__math__HeadVar__2_2;

            mercury__math__succeeded = (mercury__math__CastY_4 == mercury__math__CastX_3);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Float mercury__math__ArgX1_5 = MR_unbox_float((MR_hl_field(MR_mktag(1), mercury__math__HeadVar__1_1, (MR_Integer) 0)));
            MR_Float mercury__math__ArgY1_6;

            mercury__math__succeeded = ((MR_tag((MR_Word) mercury__math__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (mercury__math__succeeded)
              {
                mercury__math__ArgY1_6 = MR_unbox_float((MR_hl_field(MR_mktag(1), mercury__math__HeadVar__2_2, (MR_Integer) 0)));
                mercury__math__succeeded = (mercury__math__ArgX1_5 == mercury__math__ArgY1_6);
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Float mercury__math__ArgX1_7 = MR_unbox_float((MR_hl_field(MR_mktag(2), mercury__math__HeadVar__1_1, (MR_Integer) 0)));
            MR_Float mercury__math__ArgY1_8;
            MR_Float mercury__math__ArgX2_9 = MR_unbox_float((MR_hl_field(MR_mktag(2), mercury__math__HeadVar__1_1, (MR_Integer) 1)));
            MR_Float mercury__math__ArgY2_10;

            mercury__math__succeeded = ((MR_tag((MR_Word) mercury__math__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (mercury__math__succeeded)
              {
                mercury__math__ArgY1_8 = MR_unbox_float((MR_hl_field(MR_mktag(2), mercury__math__HeadVar__2_2, (MR_Integer) 0)));
                mercury__math__ArgY2_10 = MR_unbox_float((MR_hl_field(MR_mktag(2), mercury__math__HeadVar__2_2, (MR_Integer) 1)));
                mercury__math__succeeded = (mercury__math__ArgX1_7 == mercury__math__ArgY1_8);
                if (mercury__math__succeeded)
                  mercury__math__succeeded = (mercury__math__ArgX2_9 == mercury__math__ArgY2_10);
              }
          }
          break;
      }
    return mercury__math__succeeded;
  }
}

void MR_CALL 
mercury__math____Compare____domain_error_0_0(
  MR_Word * mercury__math__HeadVar__1_1,
  MR_Word mercury__math__HeadVar__2_2,
  MR_Word mercury__math__HeadVar__3_3)
{
  {
    MR_bool mercury__math__succeeded;
    MR_Integer mercury__math__CastX_6 = (MR_Integer) mercury__math__HeadVar__2_2;
    MR_Integer mercury__math__CastY_7 = (MR_Integer) mercury__math__HeadVar__3_3;

    mercury__math__succeeded = (mercury__math__CastX_6 == mercury__math__CastY_7);
    if (mercury__math__succeeded)
      *mercury__math__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_String mercury__math__ArgX1_4 = (MR_String) mercury__math__HeadVar__2_2;
        MR_String mercury__math__ArgY1_5 = (MR_String) mercury__math__HeadVar__3_3;
        MR_Integer mercury__math__V_7_12;

{
#define MR_PROC_LABEL mercury__math____Compare____domain_error_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__math__ArgX1_4 ;
	S2 =  mercury__math__ArgY1_5 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 mercury__math__V_7_12  = Res;
}
        mercury__math__succeeded = (mercury__math__V_7_12 < (MR_Integer) 0);
        if (mercury__math__succeeded)
          *mercury__math__HeadVar__1_1 = (MR_Integer) 1;
        else
          {
            mercury__math__succeeded = (mercury__math__V_7_12 == (MR_Integer) 0);
            if (mercury__math__succeeded)
              *mercury__math__HeadVar__1_1 = (MR_Integer) 0;
            else
              *mercury__math__HeadVar__1_1 = (MR_Integer) 2;
          }
      }
  }
}

MR_bool MR_CALL 
mercury__math____Unify____domain_error_0_0(
  MR_Word mercury__math__HeadVar__1_1,
  MR_Word mercury__math__HeadVar__2_2)
{
  {
    MR_bool mercury__math__succeeded;
    MR_Integer mercury__math__CastX_5 = (MR_Integer) mercury__math__HeadVar__1_1;
    MR_Integer mercury__math__CastY_6 = (MR_Integer) mercury__math__HeadVar__2_2;

    mercury__math__succeeded = (mercury__math__CastX_5 == mercury__math__CastY_6);
    if (mercury__math__succeeded)
      mercury__math__succeeded = MR_TRUE;
    else
      {
        MR_String mercury__math__ArgX1_3 = (MR_String) mercury__math__HeadVar__1_1;
        MR_String mercury__math__ArgY1_4 = (MR_String) mercury__math__HeadVar__2_2;

        mercury__math__succeeded = (strcmp(mercury__math__ArgX1_3, mercury__math__ArgY1_4) == 0);
      }
    return mercury__math__succeeded;
  }
}

static MR_bool MR_CALL 
mercury__math__math_domain_checks_0_p_0(void)
{
  {
    MR_bool mercury__math__succeeded;

{
#define MR_PROC_LABEL mercury__math__math_domain_checks_0_p_0

	MR_bool SUCCESS_INDICATOR;

		{

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__math__succeeded  = SUCCESS_INDICATOR;
}
    return mercury__math__succeeded;
  }
}

MR_Float MR_CALL 
mercury__math__fma_3_f_0(
  MR_Float mercury__math__X_1,
  MR_Float mercury__math__Y_2,
  MR_Float mercury__math__Z_3)
{
  {
    MR_bool mercury__math__succeeded;
    MR_Float mercury__math__FMA_4;

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

#if defined(MR_HAVE_FMA)
    FMA = fma(X, Y, Z);
#else
    MR_fatal_error("math.fma not supported");
#endif


		;}
#undef MR_PROC_LABEL
	 mercury__math__FMA_4  = FMA;
}
    return mercury__math__FMA_4;
  }
}

MR_bool MR_CALL 
mercury__math__have_fma_0_p_0(void)
{
  {
    MR_bool mercury__math__succeeded;

{
#define MR_PROC_LABEL mercury__math__have_fma_0_p_0

	MR_bool SUCCESS_INDICATOR;

		{

#if defined(MR_HAVE_FMA)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__math__succeeded  = SUCCESS_INDICATOR;
}
    return mercury__math__succeeded;
  }
}

MR_Float MR_CALL 
mercury__math__tanh_1_f_0(
  MR_Float mercury__math__X_1)
{
  {
    MR_bool mercury__math__succeeded;
    MR_Float mercury__math__Tanh_2;

{
#define MR_PROC_LABEL mercury__math__tanh_1_f_0

	MR_Float X;
	MR_Float Tanh;

	X =  mercury__math__X_1 ;
		{

    Tanh = tanh(X);


		;}
#undef MR_PROC_LABEL
	 mercury__math__Tanh_2  = Tanh;
}
    return mercury__math__Tanh_2;
  }
}

MR_Float MR_CALL 
mercury__math__cosh_1_f_0(
  MR_Float mercury__math__X_1)
{
  {
    MR_bool mercury__math__succeeded;
    MR_Float mercury__math__Cosh_2;

{
#define MR_PROC_LABEL mercury__math__cosh_1_f_0

	MR_Float X;
	MR_Float Cosh;

	X =  mercury__math__X_1 ;
		{

    Cosh = cosh(X);


		;}
#undef MR_PROC_LABEL
	 mercury__math__Cosh_2  = Cosh;
}
    return mercury__math__Cosh_2;
  }
}

MR_Float MR_CALL 
mercury__math__sinh_1_f_0(
  MR_Float mercury__math__X_1)
{
  {
    MR_bool mercury__math__succeeded;
    MR_Float mercury__math__Sinh_2;

{
#define MR_PROC_LABEL mercury__math__sinh_1_f_0

	MR_Float X;
	MR_Float Sinh;

	X =  mercury__math__X_1 ;
		{

    Sinh = sinh(X);


		;}
#undef MR_PROC_LABEL
	 mercury__math__Sinh_2  = Sinh;
}
    return mercury__math__Sinh_2;
  }
}

MR_Float MR_CALL 
mercury__math__atan2_2_f_0(
  MR_Float mercury__math__Y_1,
  MR_Float mercury__math__X_2)
{
  {
    MR_bool mercury__math__succeeded;
    MR_Float mercury__math__ATan2_3;

{
#define MR_PROC_LABEL mercury__math__atan2_2_f_0

	MR_Float Y;
	MR_Float X;
	MR_Float ATan2;

	Y =  mercury__math__Y_1 ;
	X =  mercury__math__X_2 ;
		{

    ATan2 = atan2(Y, X);


		;}
#undef MR_PROC_LABEL
	 mercury__math__ATan2_3  = ATan2;
}
    return mercury__math__ATan2_3;
  }
}

MR_Float MR_CALL 
mercury__math__atan_1_f_0(
  MR_Float mercury__math__X_1)
{
  {
    MR_bool mercury__math__succeeded;
    MR_Float mercury__math__ATan_2;

{
#define MR_PROC_LABEL mercury__math__atan_1_f_0

	MR_Float X;
	MR_Float ATan;

	X =  mercury__math__X_1 ;
		{

    ATan = atan(X);


		;}
#undef MR_PROC_LABEL
	 mercury__math__ATan_2  = ATan;
}
    return mercury__math__ATan_2;
  }
}

MR_Float MR_CALL 
mercury__math__unchecked_acos_1_f_0(
  MR_Float mercury__math__X_1)
{
  {
    MR_bool mercury__math__succeeded;
    MR_Float mercury__math__ACos_2;

{
#define MR_PROC_LABEL mercury__math__unchecked_acos_1_f_0

	MR_Float X;
	MR_Float ACos;

	X =  mercury__math__X_1 ;
		{

    ACos = acos(X);


		;}
#undef MR_PROC_LABEL
	 mercury__math__ACos_2  = ACos;
}
    return mercury__math__ACos_2;
  }
}

MR_Float MR_CALL 
mercury__math__acos_1_f_0(
  MR_Float mercury__math__X_3)
{
  {
    MR_bool mercury__math__succeeded;
    MR_Float mercury__math__ACos_4;

{
#define MR_PROC_LABEL mercury__math__acos_1_f_0

	MR_bool SUCCESS_INDICATOR;

		{

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__math__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__math__succeeded)
      {
        mercury__math__succeeded = (mercury__math__X_3 < ((MR_Float) -1.0000000000000000));
        if (!(mercury__math__succeeded))
          {
            mercury__math__succeeded = (mercury__math__X_3 > ((MR_Float) 1.0000000000000000));
          }
      }
    if (mercury__math__succeeded)
      {
        MR_Word mercury__math__TypeCtorInfo_9_9 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
        MR_Word mercury__math__Var_7 = (MR_Word) ((MR_Box) ((MR_String) "math.acos"));

        {
          mercury__exception__throw_1_p_0(mercury__math__TypeCtorInfo_9_9, ((MR_Box) (mercury__math__Var_7)));
        }
      }
    else
      {
{
#define MR_PROC_LABEL mercury__math__acos_1_f_0

	MR_Float X;
	MR_Float ACos;

	X =  mercury__math__X_3 ;
		{

    ACos = acos(X);


		;}
#undef MR_PROC_LABEL
	 mercury__math__ACos_4  = ACos;
}
      }
    return mercury__math__ACos_4;
  }
}

MR_Float MR_CALL 
mercury__math__unchecked_asin_1_f_0(
  MR_Float mercury__math__X_1)
{
  {
    MR_bool mercury__math__succeeded;
    MR_Float mercury__math__ASin_2;

{
#define MR_PROC_LABEL mercury__math__unchecked_asin_1_f_0

	MR_Float X;
	MR_Float ASin;

	X =  mercury__math__X_1 ;
		{

    ASin = asin(X);


		;}
#undef MR_PROC_LABEL
	 mercury__math__ASin_2  = ASin;
}
    return mercury__math__ASin_2;
  }
}

MR_Float MR_CALL 
mercury__math__asin_1_f_0(
  MR_Float mercury__math__X_3)
{
  {
    MR_bool mercury__math__succeeded;
    MR_Float mercury__math__ASin_4;

{
#define MR_PROC_LABEL mercury__math__asin_1_f_0

	MR_bool SUCCESS_INDICATOR;

		{

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__math__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__math__succeeded)
      {
        mercury__math__succeeded = (mercury__math__X_3 < ((MR_Float) -1.0000000000000000));
        if (!(mercury__math__succeeded))
          {
            mercury__math__succeeded = (mercury__math__X_3 > ((MR_Float) 1.0000000000000000));
          }
      }
    if (mercury__math__succeeded)
      {
        MR_Word mercury__math__TypeCtorInfo_9_9 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
        MR_Word mercury__math__Var_7 = (MR_Word) ((MR_Box) ((MR_String) "math.asin"));

        {
          mercury__exception__throw_1_p_0(mercury__math__TypeCtorInfo_9_9, ((MR_Box) (mercury__math__Var_7)));
        }
      }
    else
      {
{
#define MR_PROC_LABEL mercury__math__asin_1_f_0

	MR_Float X;
	MR_Float ASin;

	X =  mercury__math__X_3 ;
		{

    ASin = asin(X);


		;}
#undef MR_PROC_LABEL
	 mercury__math__ASin_4  = ASin;
}
      }
    return mercury__math__ASin_4;
  }
}

MR_Float MR_CALL 
mercury__math__tan_1_f_0(
  MR_Float mercury__math__X_1)
{
  {
    MR_bool mercury__math__succeeded;
    MR_Float mercury__math__Tan_2;

{
#define MR_PROC_LABEL mercury__math__tan_1_f_0

	MR_Float X;
	MR_Float Tan;

	X =  mercury__math__X_1 ;
		{

    Tan = tan(X);


		;}
#undef MR_PROC_LABEL
	 mercury__math__Tan_2  = Tan;
}
    return mercury__math__Tan_2;
  }
}

MR_Float MR_CALL 
mercury__math__cos_1_f_0(
  MR_Float mercury__math__X_1)
{
  {
    MR_bool mercury__math__succeeded;
    MR_Float mercury__math__Cos_2;

{
#define MR_PROC_LABEL mercury__math__cos_1_f_0

	MR_Float X;
	MR_Float Cos;

	X =  mercury__math__X_1 ;
		{

    Cos = cos(X);


		;}
#undef MR_PROC_LABEL
	 mercury__math__Cos_2  = Cos;
}
    return mercury__math__Cos_2;
  }
}

MR_Float MR_CALL 
mercury__math__sin_1_f_0(
  MR_Float mercury__math__X_1)
{
  {
    MR_bool mercury__math__succeeded;
    MR_Float mercury__math__Sin_2;

{
#define MR_PROC_LABEL mercury__math__sin_1_f_0

	MR_Float X;
	MR_Float Sin;

	X =  mercury__math__X_1 ;
		{

    Sin = sin(X);


		;}
#undef MR_PROC_LABEL
	 mercury__math__Sin_2  = Sin;
}
    return mercury__math__Sin_2;
  }
}

MR_Float MR_CALL 
mercury__math__unchecked_log_2_f_0(
  MR_Float mercury__math__B_1,
  MR_Float mercury__math__X_2)
{
  {
    MR_bool mercury__math__succeeded;
    MR_Float mercury__math__Log_3;

{
#define MR_PROC_LABEL mercury__math__unchecked_log_2_f_0

	MR_Float B;
	MR_Float X;
	MR_Float Log;

	B =  mercury__math__B_1 ;
	X =  mercury__math__X_2 ;
		{

    Log = log(X) / log(B);


		;}
#undef MR_PROC_LABEL
	 mercury__math__Log_3  = Log;
}
    return mercury__math__Log_3;
  }
}

MR_Float MR_CALL 
mercury__math__log_2_f_0(
  MR_Float mercury__math__B_4,
  MR_Float mercury__math__X_5)
{
  {
    MR_bool mercury__math__succeeded;
    MR_Float mercury__math__Log_6;

{
#define MR_PROC_LABEL mercury__math__log_2_f_0

	MR_bool SUCCESS_INDICATOR;

		{

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__math__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__math__succeeded)
      {
        mercury__math__succeeded = (mercury__math__X_5 <= ((MR_Float) 0.0000000000000000));
        if (!(mercury__math__succeeded))
          {
            mercury__math__succeeded = (mercury__math__B_4 <= ((MR_Float) 0.0000000000000000));
            if (!(mercury__math__succeeded))
              mercury__math__succeeded = (mercury__math__B_4 == ((MR_Float) 1.0000000000000000));
          }
      }
    if (mercury__math__succeeded)
      {
        MR_Word mercury__math__TypeCtorInfo_11_11 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
        MR_Word mercury__math__Var_9 = (MR_Word) ((MR_Box) ((MR_String) "math.log"));

        {
          mercury__exception__throw_1_p_0(mercury__math__TypeCtorInfo_11_11, ((MR_Box) (mercury__math__Var_9)));
        }
      }
    else
      {
{
#define MR_PROC_LABEL mercury__math__log_2_f_0

	MR_Float B;
	MR_Float X;
	MR_Float Log;

	B =  mercury__math__B_4 ;
	X =  mercury__math__X_5 ;
		{

    Log = log(X) / log(B);


		;}
#undef MR_PROC_LABEL
	 mercury__math__Log_6  = Log;
}
      }
    return mercury__math__Log_6;
  }
}

MR_Float MR_CALL 
mercury__math__unchecked_log2_1_f_0(
  MR_Float mercury__math__X_1)
{
  {
    MR_bool mercury__math__succeeded;
    MR_Float mercury__math__Log2_2;

{
#define MR_PROC_LABEL mercury__math__unchecked_log2_1_f_0

	MR_Float X;
	MR_Float Log2;

	X =  mercury__math__X_1 ;
		{

    Log2 = log(X) / ML_FLOAT_LN2;


		;}
#undef MR_PROC_LABEL
	 mercury__math__Log2_2  = Log2;
}
    return mercury__math__Log2_2;
  }
}

MR_Float MR_CALL 
mercury__math__log2_1_f_0(
  MR_Float mercury__math__X_3)
{
  {
    MR_bool mercury__math__succeeded;
    MR_Float mercury__math__Log_4;
    MR_Float mercury__math__Var_5;

{
#define MR_PROC_LABEL mercury__math__log2_1_f_0

	MR_bool SUCCESS_INDICATOR;

		{

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__math__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__math__succeeded)
      {
        mercury__math__Var_5 = (MR_Float) 0.0000000000000000;
        mercury__math__succeeded = (mercury__math__X_3 <= mercury__math__Var_5);
      }
    if (mercury__math__succeeded)
      {
        MR_Word mercury__math__TypeCtorInfo_8_8 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
        MR_Word mercury__math__Var_6 = (MR_Word) ((MR_Box) ((MR_String) "math.log2"));

        {
          mercury__exception__throw_1_p_0(mercury__math__TypeCtorInfo_8_8, ((MR_Box) (mercury__math__Var_6)));
        }
      }
    else
      {
{
#define MR_PROC_LABEL mercury__math__log2_1_f_0

	MR_Float X;
	MR_Float Log2;

	X =  mercury__math__X_3 ;
		{

    Log2 = log(X) / ML_FLOAT_LN2;


		;}
#undef MR_PROC_LABEL
	 mercury__math__Log_4  = Log2;
}
      }
    return mercury__math__Log_4;
  }
}

MR_Float MR_CALL 
mercury__math__unchecked_log10_1_f_0(
  MR_Float mercury__math__X_1)
{
  {
    MR_bool mercury__math__succeeded;
    MR_Float mercury__math__Log10_2;

{
#define MR_PROC_LABEL mercury__math__unchecked_log10_1_f_0

	MR_Float X;
	MR_Float Log10;

	X =  mercury__math__X_1 ;
		{

    Log10 = log10(X);


		;}
#undef MR_PROC_LABEL
	 mercury__math__Log10_2  = Log10;
}
    return mercury__math__Log10_2;
  }
}

MR_Float MR_CALL 
mercury__math__log10_1_f_0(
  MR_Float mercury__math__X_3)
{
  {
    MR_bool mercury__math__succeeded;
    MR_Float mercury__math__Log_4;
    MR_Float mercury__math__Var_5;

{
#define MR_PROC_LABEL mercury__math__log10_1_f_0

	MR_bool SUCCESS_INDICATOR;

		{

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__math__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__math__succeeded)
      {
        mercury__math__Var_5 = (MR_Float) 0.0000000000000000;
        mercury__math__succeeded = (mercury__math__X_3 <= mercury__math__Var_5);
      }
    if (mercury__math__succeeded)
      {
        MR_Word mercury__math__TypeCtorInfo_8_8 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
        MR_Word mercury__math__Var_6 = (MR_Word) ((MR_Box) ((MR_String) "math.log10"));

        {
          mercury__exception__throw_1_p_0(mercury__math__TypeCtorInfo_8_8, ((MR_Box) (mercury__math__Var_6)));
        }
      }
    else
      {
{
#define MR_PROC_LABEL mercury__math__log10_1_f_0

	MR_Float X;
	MR_Float Log10;

	X =  mercury__math__X_3 ;
		{

    Log10 = log10(X);


		;}
#undef MR_PROC_LABEL
	 mercury__math__Log_4  = Log10;
}
      }
    return mercury__math__Log_4;
  }
}

MR_Float MR_CALL 
mercury__math__unchecked_ln_1_f_0(
  MR_Float mercury__math__X_1)
{
  {
    MR_bool mercury__math__succeeded;
    MR_Float mercury__math__Log_2;

{
#define MR_PROC_LABEL mercury__math__unchecked_ln_1_f_0

	MR_Float X;
	MR_Float Log;

	X =  mercury__math__X_1 ;
		{

    Log = log(X);


		;}
#undef MR_PROC_LABEL
	 mercury__math__Log_2  = Log;
}
    return mercury__math__Log_2;
  }
}

MR_Float MR_CALL 
mercury__math__ln_1_f_0(
  MR_Float mercury__math__X_3)
{
  {
    MR_bool mercury__math__succeeded;
    MR_Float mercury__math__Log_4;
    MR_Float mercury__math__Var_5;

{
#define MR_PROC_LABEL mercury__math__ln_1_f_0

	MR_bool SUCCESS_INDICATOR;

		{

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__math__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__math__succeeded)
      {
        mercury__math__Var_5 = (MR_Float) 0.0000000000000000;
        mercury__math__succeeded = (mercury__math__X_3 <= mercury__math__Var_5);
      }
    if (mercury__math__succeeded)
      {
        MR_Word mercury__math__TypeCtorInfo_8_8 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
        MR_Word mercury__math__Var_6 = (MR_Word) ((MR_Box) ((MR_String) "math.ln"));

        {
          mercury__exception__throw_1_p_0(mercury__math__TypeCtorInfo_8_8, ((MR_Box) (mercury__math__Var_6)));
        }
      }
    else
      {
{
#define MR_PROC_LABEL mercury__math__ln_1_f_0

	MR_Float X;
	MR_Float Log;

	X =  mercury__math__X_3 ;
		{

    Log = log(X);


		;}
#undef MR_PROC_LABEL
	 mercury__math__Log_4  = Log;
}
      }
    return mercury__math__Log_4;
  }
}

MR_Float MR_CALL 
mercury__math__exp_1_f_0(
  MR_Float mercury__math__X_1)
{
  {
    MR_bool mercury__math__succeeded;
    MR_Float mercury__math__Exp_2;

{
#define MR_PROC_LABEL mercury__math__exp_1_f_0

	MR_Float X;
	MR_Float Exp;

	X =  mercury__math__X_1 ;
		{

    Exp = exp(X);


		;}
#undef MR_PROC_LABEL
	 mercury__math__Exp_2  = Exp;
}
    return mercury__math__Exp_2;
  }
}

MR_Float MR_CALL 
mercury__math__unchecked_pow_2_f_0(
  MR_Float mercury__math__X_1,
  MR_Float mercury__math__Y_2)
{
  {
    MR_bool mercury__math__succeeded;
    MR_Float mercury__math__Res_3;

{
#define MR_PROC_LABEL mercury__math__unchecked_pow_2_f_0

	MR_Float X;
	MR_Float Y;
	MR_Float Res;

	X =  mercury__math__X_1 ;
	Y =  mercury__math__Y_2 ;
		{

    Res = pow(X, Y);


		;}
#undef MR_PROC_LABEL
	 mercury__math__Res_3  = Res;
}
    return mercury__math__Res_3;
  }
}

MR_Float MR_CALL 
mercury__math__pow_2_f_0(
  MR_Float mercury__math__X_4,
  MR_Float mercury__math__Y_5)
{
  {
    MR_bool mercury__math__succeeded;
    MR_Float mercury__math__Res_6;
    MR_Float mercury__math__Var_7;

{
#define MR_PROC_LABEL mercury__math__pow_2_f_0

	MR_bool SUCCESS_INDICATOR;

		{

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__math__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__math__succeeded)
      {
        mercury__math__Var_7 = (MR_Float) 0.0000000000000000;
        mercury__math__succeeded = (mercury__math__X_4 < mercury__math__Var_7);
      }
    if (mercury__math__succeeded)
      {
        MR_Word mercury__math__TypeCtorInfo_13_13 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
        MR_Word mercury__math__Var_8 = (MR_Word) ((MR_Box) ((MR_String) "math.pow"));

        {
          mercury__exception__throw_1_p_0(mercury__math__TypeCtorInfo_13_13, ((MR_Box) (mercury__math__Var_8)));
        }
      }
    else
      {
        mercury__math__succeeded = (mercury__math__X_4 == ((MR_Float) 0.0000000000000000));
        if (mercury__math__succeeded)
          {
            mercury__math__succeeded = (mercury__math__Y_5 <= ((MR_Float) 0.0000000000000000));
            if (mercury__math__succeeded)
              {
                MR_Word mercury__math__TypeCtorInfo_14_14 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
                MR_Word mercury__math__Var_11 = (MR_Word) ((MR_Box) ((MR_String) "math.pow"));

                {
                  mercury__exception__throw_1_p_0(mercury__math__TypeCtorInfo_14_14, ((MR_Box) (mercury__math__Var_11)));
                }
              }
            else
              mercury__math__Res_6 = (MR_Float) 0.0000000000000000;
          }
        else
          {
{
#define MR_PROC_LABEL mercury__math__pow_2_f_0

	MR_Float X;
	MR_Float Y;
	MR_Float Res;

	X =  mercury__math__X_4 ;
	Y =  mercury__math__Y_5 ;
		{

    Res = pow(X, Y);


		;}
#undef MR_PROC_LABEL
	 mercury__math__Res_6  = Res;
}
          }
      }
    return mercury__math__Res_6;
  }
}

MR_Word MR_CALL 
mercury__math__solve_quadratic_3_f_0(
  MR_Float mercury__math__A_5,
  MR_Float mercury__math__B_6,
  MR_Float mercury__math__C_7)
{
  {
    MR_bool mercury__math__succeeded;
    MR_Word mercury__math__Roots_8;
    MR_Float mercury__math__DSquared_9;
    MR_Word mercury__math__CmpD_10;
    MR_Float mercury__math__Var_17 = (mercury__math__B_6 * mercury__math__B_6);
    MR_Float mercury__math__Var_19;
    MR_Float mercury__math__Var_20 = (((MR_Float) 4.0000000000000000) * mercury__math__A_5);

    mercury__math__Var_19 = (mercury__math__Var_20 * mercury__math__C_7);
    mercury__math__DSquared_9 = (mercury__math__Var_17 - mercury__math__Var_19);
    mercury__math__succeeded = (mercury__math__DSquared_9 < ((MR_Float) 0.0000000000000000));
    if (mercury__math__succeeded)
      mercury__math__CmpD_10 = (MR_Integer) 1;
    else
      {
        mercury__math__succeeded = (mercury__math__DSquared_9 > ((MR_Float) 0.0000000000000000));
        if (mercury__math__succeeded)
          mercury__math__CmpD_10 = (MR_Integer) 2;
        else
          mercury__math__CmpD_10 = (MR_Integer) 0;
      }
    switch (mercury__math__CmpD_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        mercury__math__Roots_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 0:
        {
          MR_Float mercury__math__Root_11;
          MR_Float mercury__math__Var_30 = (((MR_Float) -0.50000000000000000) * mercury__math__B_6);

{
#define MR_PROC_LABEL mercury__math__solve_quadratic_3_f_0

	MR_bool SUCCESS_INDICATOR;

		{

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__math__succeeded  = SUCCESS_INDICATOR;
}
          if (mercury__math__succeeded)
            mercury__math__succeeded = (mercury__math__A_5 == ((MR_Float) 0.0000000000000000));
          if (mercury__math__succeeded)
            {
              MR_Word mercury__math__TypeCtorInfo_9_42 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
              MR_Word mercury__math__V_7_40 = (MR_Word) ((MR_Box) ((MR_String) "float.\'/\': division by zero"));

              {
                mercury__exception__throw_1_p_0(mercury__math__TypeCtorInfo_9_42, ((MR_Box) (mercury__math__V_7_40)));
              }
            }
          else
            mercury__math__Root_11 = (mercury__math__Var_30 / mercury__math__A_5);
          {
            mercury__math__Roots_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mercury__math__Roots_8, 0) = MR_box_float(mercury__math__Root_11);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Float mercury__math__D_12;
          MR_Word mercury__math__CmpB_13;
          MR_Float mercury__math__Root1_15;
          MR_Float mercury__math__Root2_16;

          {
            mercury__math__D_12 = mercury__math__sqrt_1_f_0(mercury__math__DSquared_9);
          }
          mercury__math__succeeded = (mercury__math__B_6 < ((MR_Float) 0.0000000000000000));
          if (mercury__math__succeeded)
            mercury__math__CmpB_13 = (MR_Integer) 1;
          else
            {
              mercury__math__succeeded = (mercury__math__B_6 > ((MR_Float) 0.0000000000000000));
              if (mercury__math__succeeded)
                mercury__math__CmpB_13 = (MR_Integer) 2;
              else
                mercury__math__CmpB_13 = (MR_Integer) 0;
            }
          switch (mercury__math__CmpB_13) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Float mercury__math__Q_14;
                MR_Float mercury__math__Var_29 = (mercury__math__B_6 - mercury__math__D_12);

                mercury__math__Q_14 = (((MR_Float) -0.50000000000000000) * mercury__math__Var_29);
{
#define MR_PROC_LABEL mercury__math__solve_quadratic_3_f_0

	MR_bool SUCCESS_INDICATOR;

		{

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__math__succeeded  = SUCCESS_INDICATOR;
}
                if (mercury__math__succeeded)
                  mercury__math__succeeded = (mercury__math__A_5 == ((MR_Float) 0.0000000000000000));
                if (mercury__math__succeeded)
                  {
                    MR_Word mercury__math__TypeCtorInfo_9_51 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
                    MR_Word mercury__math__V_7_49 = (MR_Word) ((MR_Box) ((MR_String) "float.\'/\': division by zero"));

                    {
                      mercury__exception__throw_1_p_0(mercury__math__TypeCtorInfo_9_51, ((MR_Box) (mercury__math__V_7_49)));
                    }
                  }
                else
                  mercury__math__Root1_15 = (mercury__math__Q_14 / mercury__math__A_5);
{
#define MR_PROC_LABEL mercury__math__solve_quadratic_3_f_0

	MR_bool SUCCESS_INDICATOR;

		{

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__math__succeeded  = SUCCESS_INDICATOR;
}
                if (mercury__math__succeeded)
                  mercury__math__succeeded = (mercury__math__Q_14 == ((MR_Float) 0.0000000000000000));
                if (mercury__math__succeeded)
                  {
                    MR_Word mercury__math__TypeCtorInfo_9_57 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
                    MR_Word mercury__math__V_7_55 = (MR_Word) ((MR_Box) ((MR_String) "float.\'/\': division by zero"));

                    {
                      mercury__exception__throw_1_p_0(mercury__math__TypeCtorInfo_9_57, ((MR_Box) (mercury__math__V_7_55)));
                    }
                  }
                else
                  mercury__math__Root2_16 = (mercury__math__C_7 / mercury__math__Q_14);
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Float mercury__math__Var_26 = (((MR_Float) -0.50000000000000000) * mercury__math__D_12);

{
#define MR_PROC_LABEL mercury__math__solve_quadratic_3_f_0

	MR_bool SUCCESS_INDICATOR;

		{

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__math__succeeded  = SUCCESS_INDICATOR;
}
                if (mercury__math__succeeded)
                  mercury__math__succeeded = (mercury__math__A_5 == ((MR_Float) 0.0000000000000000));
                if (mercury__math__succeeded)
                  {
                    MR_Word mercury__math__TypeCtorInfo_9_63 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
                    MR_Word mercury__math__V_7_61 = (MR_Word) ((MR_Box) ((MR_String) "float.\'/\': division by zero"));

                    {
                      mercury__exception__throw_1_p_0(mercury__math__TypeCtorInfo_9_63, ((MR_Box) (mercury__math__V_7_61)));
                    }
                  }
                else
                  mercury__math__Root1_15 = (mercury__math__Var_26 / mercury__math__A_5);
                mercury__math__Root2_16 = (((MR_Float) 0.0000000000000000) - mercury__math__Root1_15);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Float mercury__math__Var_25 = (mercury__math__B_6 + mercury__math__D_12);
                MR_Float mercury__math__Q_32 = (((MR_Float) -0.50000000000000000) * mercury__math__Var_25);

{
#define MR_PROC_LABEL mercury__math__solve_quadratic_3_f_0

	MR_bool SUCCESS_INDICATOR;

		{

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__math__succeeded  = SUCCESS_INDICATOR;
}
                if (mercury__math__succeeded)
                  mercury__math__succeeded = (mercury__math__A_5 == ((MR_Float) 0.0000000000000000));
                if (mercury__math__succeeded)
                  {
                    MR_Word mercury__math__TypeCtorInfo_9_69 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
                    MR_Word mercury__math__V_7_67 = (MR_Word) ((MR_Box) ((MR_String) "float.\'/\': division by zero"));

                    {
                      mercury__exception__throw_1_p_0(mercury__math__TypeCtorInfo_9_69, ((MR_Box) (mercury__math__V_7_67)));
                    }
                  }
                else
                  mercury__math__Root1_15 = (mercury__math__Q_32 / mercury__math__A_5);
{
#define MR_PROC_LABEL mercury__math__solve_quadratic_3_f_0

	MR_bool SUCCESS_INDICATOR;

		{

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__math__succeeded  = SUCCESS_INDICATOR;
}
                if (mercury__math__succeeded)
                  mercury__math__succeeded = (mercury__math__Q_32 == ((MR_Float) 0.0000000000000000));
                if (mercury__math__succeeded)
                  {
                    MR_Word mercury__math__TypeCtorInfo_9_75 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
                    MR_Word mercury__math__V_7_73 = (MR_Word) ((MR_Box) ((MR_String) "float.\'/\': division by zero"));

                    {
                      mercury__exception__throw_1_p_0(mercury__math__TypeCtorInfo_9_75, ((MR_Box) (mercury__math__V_7_73)));
                    }
                  }
                else
                  mercury__math__Root2_16 = (mercury__math__C_7 / mercury__math__Q_32);
              }
              break;
          }
          {
            mercury__math__Roots_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), mercury__math__Roots_8, 0) = MR_box_float(mercury__math__Root1_15);
            MR_hl_field(MR_mktag(2), mercury__math__Roots_8, 1) = MR_box_float(mercury__math__Root2_16);
          }
        }
        break;
    }
    return mercury__math__Roots_8;
  }
}

MR_Float MR_CALL 
mercury__math__unchecked_sqrt_1_f_0(
  MR_Float mercury__math__X_1)
{
  {
    MR_bool mercury__math__succeeded;
    MR_Float mercury__math__SquareRoot_2;

{
#define MR_PROC_LABEL mercury__math__unchecked_sqrt_1_f_0

	MR_Float X;
	MR_Float SquareRoot;

	X =  mercury__math__X_1 ;
		{

    SquareRoot = sqrt(X);


		;}
#undef MR_PROC_LABEL
	 mercury__math__SquareRoot_2  = SquareRoot;
}
    return mercury__math__SquareRoot_2;
  }
}

MR_Float MR_CALL 
mercury__math__sqrt_1_f_0(
  MR_Float mercury__math__X_3)
{
  {
    MR_bool mercury__math__succeeded;
    MR_Float mercury__math__SquareRoot_4;
    MR_Float mercury__math__Var_5;

{
#define MR_PROC_LABEL mercury__math__sqrt_1_f_0

	MR_bool SUCCESS_INDICATOR;

		{

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__math__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__math__succeeded)
      {
        mercury__math__Var_5 = (MR_Float) 0.0000000000000000;
        mercury__math__succeeded = (mercury__math__X_3 < mercury__math__Var_5);
      }
    if (mercury__math__succeeded)
      {
        MR_Word mercury__math__TypeCtorInfo_8_8 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
        MR_Word mercury__math__Var_6 = (MR_Word) ((MR_Box) ((MR_String) "math.sqrt"));

        {
          mercury__exception__throw_1_p_0(mercury__math__TypeCtorInfo_8_8, ((MR_Box) (mercury__math__Var_6)));
        }
      }
    else
      {
{
#define MR_PROC_LABEL mercury__math__sqrt_1_f_0

	MR_Float X;
	MR_Float SquareRoot;

	X =  mercury__math__X_3 ;
		{

    SquareRoot = sqrt(X);


		;}
#undef MR_PROC_LABEL
	 mercury__math__SquareRoot_4  = SquareRoot;
}
      }
    return mercury__math__SquareRoot_4;
  }
}

MR_Float MR_CALL 
mercury__math__truncate_1_f_0(
  MR_Float mercury__math__X_3)
{
  {
    MR_bool mercury__math__succeeded = (mercury__math__X_3 < ((MR_Float) 0.0000000000000000));
    MR_Float mercury__math__HeadVar__2_2;

    if (mercury__math__succeeded)
      {
{
#define MR_PROC_LABEL mercury__math__truncate_1_f_0

	MR_Float Num;
	MR_Float Ceil;

	Num =  mercury__math__X_3 ;
		{

    Ceil = ceil(Num);


		;}
#undef MR_PROC_LABEL
	 mercury__math__HeadVar__2_2  = Ceil;
}
      }
    else
      {
{
#define MR_PROC_LABEL mercury__math__truncate_1_f_0

	MR_Float Num;
	MR_Float Floor;

	Num =  mercury__math__X_3 ;
		{

    Floor = floor(Num);


		;}
#undef MR_PROC_LABEL
	 mercury__math__HeadVar__2_2  = Floor;
}
      }
    return mercury__math__HeadVar__2_2;
  }
}

MR_Float MR_CALL 
mercury__math__round_1_f_0(
  MR_Float mercury__math__Num_1)
{
  {
    MR_bool mercury__math__succeeded;
    MR_Float mercury__math__Rounded_2;

{
#define MR_PROC_LABEL mercury__math__round_1_f_0

	MR_Float Num;
	MR_Float Rounded;

	Num =  mercury__math__Num_1 ;
		{

    Rounded = floor(Num+0.5);


		;}
#undef MR_PROC_LABEL
	 mercury__math__Rounded_2  = Rounded;
}
    return mercury__math__Rounded_2;
  }
}

MR_Float MR_CALL 
mercury__math__floor_1_f_0(
  MR_Float mercury__math__Num_1)
{
  {
    MR_bool mercury__math__succeeded;
    MR_Float mercury__math__Floor_2;

{
#define MR_PROC_LABEL mercury__math__floor_1_f_0

	MR_Float Num;
	MR_Float Floor;

	Num =  mercury__math__Num_1 ;
		{

    Floor = floor(Num);


		;}
#undef MR_PROC_LABEL
	 mercury__math__Floor_2  = Floor;
}
    return mercury__math__Floor_2;
  }
}

MR_Float MR_CALL 
mercury__math__ceiling_1_f_0(
  MR_Float mercury__math__Num_1)
{
  {
    MR_bool mercury__math__succeeded;
    MR_Float mercury__math__Ceil_2;

{
#define MR_PROC_LABEL mercury__math__ceiling_1_f_0

	MR_Float Num;
	MR_Float Ceil;

	Num =  mercury__math__Num_1 ;
		{

    Ceil = ceil(Num);


		;}
#undef MR_PROC_LABEL
	 mercury__math__Ceil_2  = Ceil;
}
    return mercury__math__Ceil_2;
  }
}

MR_Float MR_CALL 
mercury__math__e_0_f_0(void)
{
  {
    MR_bool mercury__math__succeeded;
    MR_Float mercury__math__E_1;

{
#define MR_PROC_LABEL mercury__math__e_0_f_0

	MR_Float E;

		{

    E = ML_FLOAT_E;


		;}
#undef MR_PROC_LABEL
	 mercury__math__E_1  = E;
}
    return mercury__math__E_1;
  }
}

MR_Float MR_CALL 
mercury__math__pi_0_f_0(void)
{
  {
    MR_bool mercury__math__succeeded;
    MR_Float mercury__math__Pi_1;

{
#define MR_PROC_LABEL mercury__math__pi_0_f_0

	MR_Float Pi;

		{

    Pi = ML_FLOAT_PI;


		;}
#undef MR_PROC_LABEL
	 mercury__math__Pi_1  = Pi;
}
    return mercury__math__Pi_1;
  }
}

static MR_bool MR_CALL 
mercury__math____Unify____domain_error_0_0_10001(
  MR_Box mercury__math__wrapper_arg_1,
  MR_Box mercury__math__wrapper_arg_2)
{
  {
    MR_bool mercury__math__succeeded;

    {
      mercury__math__succeeded = mercury__math____Unify____domain_error_0_0(((MR_Word) mercury__math__wrapper_arg_1), ((MR_Word) mercury__math__wrapper_arg_2));
    }
    return mercury__math__succeeded;
  }
}

static void MR_CALL 
mercury__math____Compare____domain_error_0_0_10001(
  MR_Box * mercury__math__wrapper_arg_1,
  MR_Box mercury__math__wrapper_arg_2,
  MR_Box mercury__math__wrapper_arg_3)
{
  {
    MR_Word mercury__math__conv0_HeadVar__1_1;

    {
      mercury__math____Compare____domain_error_0_0(&mercury__math__conv0_HeadVar__1_1, ((MR_Word) mercury__math__wrapper_arg_2), ((MR_Word) mercury__math__wrapper_arg_3));
    }
    *mercury__math__wrapper_arg_1 = ((MR_Box) (mercury__math__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__math____Unify____quadratic_roots_0_0_10001(
  MR_Box mercury__math__wrapper_arg_1,
  MR_Box mercury__math__wrapper_arg_2)
{
  {
    MR_bool mercury__math__succeeded;

    {
      mercury__math__succeeded = mercury__math____Unify____quadratic_roots_0_0(((MR_Word) mercury__math__wrapper_arg_1), ((MR_Word) mercury__math__wrapper_arg_2));
    }
    return mercury__math__succeeded;
  }
}

static void MR_CALL 
mercury__math____Compare____quadratic_roots_0_0_10001(
  MR_Box * mercury__math__wrapper_arg_1,
  MR_Box mercury__math__wrapper_arg_2,
  MR_Box mercury__math__wrapper_arg_3)
{
  {
    MR_Word mercury__math__conv0_HeadVar__1_1;

    {
      mercury__math____Compare____quadratic_roots_0_0(&mercury__math__conv0_HeadVar__1_1, ((MR_Word) mercury__math__wrapper_arg_2), ((MR_Word) mercury__math__wrapper_arg_3));
    }
    *mercury__math__wrapper_arg_1 = ((MR_Box) (mercury__math__conv0_HeadVar__1_1));
  }
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

// Ensure everything is compiled with the same grade.
const char *mercury__math__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module math. */
