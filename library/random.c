/*
** Automatically generated from `random.m'
** by the Mercury compiler,
** version rotd-2014-09-01
** configured for x86_64-apple-darwin13.3.0.
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


/* :- module random. */
/* :- implementation. */

/*
INIT mercury__random__init
ENDINIT
*/

#include "random.mih"


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




#line 86 "random.c"
static const MR_Integer mercury__random__random__functor_number_map_supply_0[1];

#line 89 "random.c"
static const MR_NotagFunctorDesc mercury__random__random__notag_functor_desc_supply_0;

#line 92 "random.c"
static MR_bool MR_CALL 
mercury__random____Unify____supply_0_0_10001(
#line 95 "random.c"
  MR_Box mercury__random__wrapper_arg_1,
#line 97 "random.c"
  MR_Box mercury__random__wrapper_arg_2);

#line 100 "random.c"
static void MR_CALL 
mercury__random____Compare____supply_0_0_10001(
#line 103 "random.c"
  MR_Box * mercury__random__wrapper_arg_1,
#line 105 "random.c"
  MR_Box mercury__random__wrapper_arg_2,
#line 107 "random.c"
  MR_Box mercury__random__wrapper_arg_3);

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__random__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);


static /* final */ const MR_Box mercury__random_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__random_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__random_scalar_common_3[2][5];




static /* final */ const MR_Box mercury__random_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__random_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__random_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__random_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__random_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__random_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



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
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
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



#line 476 "random.c"
static const MR_Integer mercury__random__random__functor_number_map_supply_0[1] = {
  (MR_Integer) 0
};

#line 481 "random.c"
static const MR_NotagFunctorDesc mercury__random__random__notag_functor_desc_supply_0 = {
  (MR_String) "rs",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL
};

#line 488 "random.c"
const MR_TypeCtorInfo_Struct mercury__random__random__type_ctor_info_supply_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__random____Unify____supply_0_0_10001)),
  ((MR_Box) (mercury__random____Compare____supply_0_0_10001)),
  (MR_String) "random",
  (MR_String) "supply",
  {
    &mercury__random__random__notag_functor_desc_supply_0
  },
  {
    &mercury__random__random__notag_functor_desc_supply_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__random__random__functor_number_map_supply_0
};

#line 509 "random.c"
static MR_bool MR_CALL 
mercury__random____Unify____supply_0_0_10001(
#line 512 "random.c"
  MR_Box mercury__random__wrapper_arg_1,
#line 514 "random.c"
  MR_Box mercury__random__wrapper_arg_2)
#line 516 "random.c"
{
#line 518 "random.c"
  {
#line 520 "random.c"
    MR_bool mercury__random__succeeded;

#line 523 "random.c"
    {
#line 525 "random.c"
      mercury__random__succeeded = mercury__random____Unify____supply_0_0(((MR_Word) mercury__random__wrapper_arg_1), ((MR_Word) mercury__random__wrapper_arg_2));
    }
#line 528 "random.c"
    return mercury__random__succeeded;
#line 530 "random.c"
  }
#line 532 "random.c"
}

#line 535 "random.c"
static void MR_CALL 
mercury__random____Compare____supply_0_0_10001(
#line 538 "random.c"
  MR_Box * mercury__random__wrapper_arg_1,
#line 540 "random.c"
  MR_Box mercury__random__wrapper_arg_2,
#line 542 "random.c"
  MR_Box mercury__random__wrapper_arg_3)
#line 544 "random.c"
{
#line 546 "random.c"
  {
#line 548 "random.c"
    MR_Word mercury__random__conv0_HeadVar__1_1;

#line 551 "random.c"
    {
#line 553 "random.c"
      mercury__random____Compare____supply_0_0(&mercury__random__conv0_HeadVar__1_1, ((MR_Word) mercury__random__wrapper_arg_2), ((MR_Word) mercury__random__wrapper_arg_3));
    }
#line 556 "random.c"
    *mercury__random__wrapper_arg_1 = ((MR_Box) (mercury__random__conv0_HeadVar__1_1));
#line 558 "random.c"
  }
#line 560 "random.c"
}

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__random__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 13 "ops.opt"
{
#line 38 "ops.opt"
  {
#line 38 "ops.opt"
    MR_bool mercury__random__succeeded;

#line 38 "ops.opt"
    return (MR_Integer) 1200;
#line 38 "ops.opt"
  }
#line 13 "ops.opt"
}

#line 130 "random.m"
void MR_CALL 
mercury__random____Compare____supply_0_0(
#line 130 "random.m"
  MR_Word * mercury__random__HeadVar__1_1,
#line 130 "random.m"
  MR_Word mercury__random__HeadVar__2_2,
#line 130 "random.m"
  MR_Word mercury__random__HeadVar__3_3)
#line 130 "random.m"
{
#line 130 "random.m"
  {
#line 130 "random.m"
    MR_bool mercury__random__succeeded;
#line 130 "random.m"
    MR_Integer mercury__random__CastX_6 = (MR_Integer) mercury__random__HeadVar__2_2;
#line 130 "random.m"
    MR_Integer mercury__random__CastY_7 = (MR_Integer) mercury__random__HeadVar__3_3;

#line 130 "random.m"
    mercury__random__succeeded = (mercury__random__CastX_6 == mercury__random__CastY_7);
#line 130 "random.m"
    if (mercury__random__succeeded)
#line 604 "random.c"
      *mercury__random__HeadVar__1_1 = (MR_Integer) 0;
#line 130 "random.m"
    else
#line 130 "random.m"
      {
#line 130 "random.m"
        MR_Integer mercury__random__V_4_4 = (MR_Integer) mercury__random__HeadVar__2_2;
#line 130 "random.m"
        MR_Integer mercury__random__V_5_5 = (MR_Integer) mercury__random__HeadVar__3_3;

#line 66 "private_builtin.opt"
        mercury__random__succeeded = (mercury__random__V_4_4 < mercury__random__V_5_5);
#line 69 "private_builtin.opt"
        if (mercury__random__succeeded)
#line 68 "private_builtin.opt"
          *mercury__random__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
        else
#line 74 "private_builtin.opt"
          {
#line 71 "private_builtin.opt"
            mercury__random__succeeded = (mercury__random__V_4_4 == mercury__random__V_5_5);
#line 74 "private_builtin.opt"
            if (mercury__random__succeeded)
#line 73 "private_builtin.opt"
              *mercury__random__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
            else
#line 75 "private_builtin.opt"
              *mercury__random__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
          }
#line 130 "random.m"
      }
#line 130 "random.m"
  }
#line 130 "random.m"
}

#line 130 "random.m"
MR_bool MR_CALL 
mercury__random____Unify____supply_0_0(
#line 130 "random.m"
  MR_Word mercury__random__HeadVar__1_1,
#line 130 "random.m"
  MR_Word mercury__random__HeadVar__2_2)
#line 130 "random.m"
{
#line 130 "random.m"
  {
#line 130 "random.m"
    MR_bool mercury__random__succeeded;
#line 130 "random.m"
    MR_Integer mercury__random__CastX_5 = (MR_Integer) mercury__random__HeadVar__1_1;
#line 130 "random.m"
    MR_Integer mercury__random__CastY_6 = (MR_Integer) mercury__random__HeadVar__2_2;

#line 130 "random.m"
    mercury__random__succeeded = (mercury__random__CastX_5 == mercury__random__CastY_6);
#line 130 "random.m"
    if (mercury__random__succeeded)
#line 130 "random.m"
      mercury__random__succeeded = MR_TRUE;
#line 130 "random.m"
    else
#line 130 "random.m"
      {
#line 130 "random.m"
        MR_Integer mercury__random__V_3_3 = (MR_Integer) mercury__random__HeadVar__1_1;
#line 130 "random.m"
        MR_Integer mercury__random__V_4_4 = (MR_Integer) mercury__random__HeadVar__2_2;

#line 677 "random.c"
        mercury__random__succeeded = (mercury__random__V_3_3 == mercury__random__V_4_4);
#line 130 "random.m"
      }
#line 130 "random.m"
    return mercury__random__succeeded;
#line 130 "random.m"
  }
#line 130 "random.m"
}

#line 212 "random.m"
void MR_CALL 
mercury__random__test_2_4_p_1(
#line 212 "random.m"
  MR_Integer mercury__random__N_5,
#line 212 "random.m"
  MR_Word * mercury__random__Is_6,
#line 212 "random.m"
  MR_Word mercury__random__STATE_VARIABLE_RS_0_11,
#line 212 "random.m"
  MR_Word * mercury__random__STATE_VARIABLE_RS_12)
#line 212 "random.m"
{
#line 220 "random.m"
  {
#line 220 "random.m"
    MR_bool mercury__random__succeeded = (mercury__random__N_5 > (MR_Integer) 0);

#line 220 "random.m"
    if (mercury__random__succeeded)
#line 216 "random.m"
      {
#line 216 "random.m"
        MR_Integer mercury__random__N1_8 = (mercury__random__N_5 - (MR_Integer) 1);
#line 216 "random.m"
        MR_Integer mercury__random__I_9;
#line 216 "random.m"
        MR_Word mercury__random__Is0_10;
#line 216 "random.m"
        MR_Word mercury__random__STATE_VARIABLE_RS_15_15;

#line 217 "random.m"
        {
#line 217 "random.m"
          mercury__random__random_3_p_1(&mercury__random__I_9, mercury__random__STATE_VARIABLE_RS_0_11, &mercury__random__STATE_VARIABLE_RS_15_15);
        }
#line 218 "random.m"
        {
#line 218 "random.m"
          mercury__random__test_2_4_p_1(mercury__random__N1_8, &mercury__random__Is0_10, mercury__random__STATE_VARIABLE_RS_15_15, mercury__random__STATE_VARIABLE_RS_12);
        }
#line 219 "random.m"
        {
#line 219 "random.m"
          MR_Word base;
#line 219 "random.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 219 "random.m"
          *mercury__random__Is_6 = base;
#line 219 "random.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__random__I_9));
#line 219 "random.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__random__Is0_10));
#line 219 "random.m"
        }
#line 216 "random.m"
      }
#line 220 "random.m"
    else
#line 221 "random.m"
      {
#line 221 "random.m"
        *mercury__random__Is_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 221 "random.m"
        *mercury__random__STATE_VARIABLE_RS_12 = mercury__random__STATE_VARIABLE_RS_0_11;
#line 221 "random.m"
      }
#line 220 "random.m"
  }
#line 212 "random.m"
}

#line 211 "random.m"
void MR_CALL 
mercury__random__test_2_4_p_0(
#line 211 "random.m"
  MR_Integer mercury__random__N_5,
#line 211 "random.m"
  MR_Word * mercury__random__Is_6,
#line 211 "random.m"
  MR_Word mercury__random__STATE_VARIABLE_RS_0_11,
#line 211 "random.m"
  MR_Word * mercury__random__STATE_VARIABLE_RS_12)
#line 211 "random.m"
{
#line 220 "random.m"
  {
#line 220 "random.m"
    MR_bool mercury__random__succeeded = (mercury__random__N_5 > (MR_Integer) 0);

#line 220 "random.m"
    if (mercury__random__succeeded)
#line 216 "random.m"
      {
#line 216 "random.m"
        MR_Integer mercury__random__N1_8 = (mercury__random__N_5 - (MR_Integer) 1);
#line 216 "random.m"
        MR_Integer mercury__random__I_9;
#line 216 "random.m"
        MR_Word mercury__random__Is0_10;
#line 216 "random.m"
        MR_Word mercury__random__STATE_VARIABLE_RS_15_15;

#line 217 "random.m"
        {
#line 217 "random.m"
          mercury__random__random_3_p_0(&mercury__random__I_9, mercury__random__STATE_VARIABLE_RS_0_11, &mercury__random__STATE_VARIABLE_RS_15_15);
        }
#line 218 "random.m"
        {
#line 218 "random.m"
          mercury__random__test_2_4_p_0(mercury__random__N1_8, &mercury__random__Is0_10, mercury__random__STATE_VARIABLE_RS_15_15, mercury__random__STATE_VARIABLE_RS_12);
        }
#line 219 "random.m"
        {
#line 219 "random.m"
          MR_Word base;
#line 219 "random.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 219 "random.m"
          *mercury__random__Is_6 = base;
#line 219 "random.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__random__I_9));
#line 219 "random.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__random__Is0_10));
#line 219 "random.m"
        }
#line 216 "random.m"
      }
#line 220 "random.m"
    else
#line 221 "random.m"
      {
#line 221 "random.m"
        *mercury__random__Is_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 221 "random.m"
        *mercury__random__STATE_VARIABLE_RS_12 = mercury__random__STATE_VARIABLE_RS_0_11;
#line 221 "random.m"
      }
#line 220 "random.m"
  }
#line 211 "random.m"
}

#line 187 "random.m"
void MR_CALL 
mercury__random__perform_sampling_6_p_1(
#line 187 "random.m"
  MR_Word mercury__random__TypeInfo_for_T_30,
#line 187 "random.m"
  MR_Integer mercury__random__I_7,
#line 187 "random.m"
  MR_ArrayPtr mercury__random__STATE_VARIABLE_Record_0_15,
#line 187 "random.m"
  MR_Word mercury__random__STATE_VARIABLE_Order_0_16,
#line 187 "random.m"
  MR_Word * mercury__random__STATE_VARIABLE_Order_17,
#line 187 "random.m"
  MR_Word mercury__random__STATE_VARIABLE_RS_0_18,
#line 187 "random.m"
  MR_Word * mercury__random__STATE_VARIABLE_RS_19)
#line 187 "random.m"
{
#line 192 "random.m"
  while (MR_TRUE)
#line 192 "random.m"
    {
#line 192 "random.m"
      /* tailcall optimized into a loop */
#line 192 "random.m"
      {
#line 192 "random.m"
        MR_bool mercury__random__succeeded = (mercury__random__I_7 <= (MR_Integer) 0);

#line 192 "random.m"
        if (mercury__random__succeeded)
#line 191 "random.m"
          {
#line 191 "random.m"
            *mercury__random__STATE_VARIABLE_RS_19 = mercury__random__STATE_VARIABLE_RS_0_18;
#line 191 "random.m"
            *mercury__random__STATE_VARIABLE_Order_17 = mercury__random__STATE_VARIABLE_Order_0_16;
#line 191 "random.m"
          }
#line 192 "random.m"
        else
#line 193 "random.m"
          {
#line 193 "random.m"
            MR_Integer mercury__random__I1_11 = (mercury__random__I_7 - (MR_Integer) 1);
#line 193 "random.m"
            MR_Integer mercury__random__Index_12;
#line 193 "random.m"
            MR_Box mercury__random__Next_13;
#line 193 "random.m"
            MR_Box mercury__random__MaxImage_14;
#line 193 "random.m"
            MR_Word mercury__random__STATE_VARIABLE_RS_23_23;
#line 193 "random.m"
            MR_Word mercury__random__STATE_VARIABLE_Order_24_24;
#line 193 "random.m"
            MR_ArrayPtr mercury__random__STATE_VARIABLE_Record_25_25;
#line 193 "random.m"
            MR_ArrayPtr mercury__random__STATE_VARIABLE_Record_26_29;

#line 194 "random.m"
            {
#line 194 "random.m"
              mercury__random__random_5_p_1((MR_Integer) 0, mercury__random__I_7, &mercury__random__Index_12, mercury__random__STATE_VARIABLE_RS_0_18, &mercury__random__STATE_VARIABLE_RS_23_23);
            }
#line 195 "random.m"
            {
#line 195 "random.m"
              mercury__array__lookup_3_p_0(mercury__random__TypeInfo_for_T_30, mercury__random__STATE_VARIABLE_Record_0_15, mercury__random__Index_12, &mercury__random__Next_13);
            }
#line 196 "random.m"
            {
#line 196 "random.m"
              mercury__array__lookup_3_p_0(mercury__random__TypeInfo_for_T_30, mercury__random__STATE_VARIABLE_Record_0_15, mercury__random__I1_11, &mercury__random__MaxImage_14);
            }
#line 197 "random.m"
            {
#line 197 "random.m"
              mercury__random__STATE_VARIABLE_Order_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 197 "random.m"
              MR_hl_field(MR_mktag(1), mercury__random__STATE_VARIABLE_Order_24_24, 0) = mercury__random__Next_13;
#line 197 "random.m"
              MR_hl_field(MR_mktag(1), mercury__random__STATE_VARIABLE_Order_24_24, 1) = ((MR_Box) (mercury__random__STATE_VARIABLE_Order_0_16));
#line 197 "random.m"
            }
#line 198 "random.m"
            {
#line 198 "random.m"
              mercury__array__set_4_p_0(mercury__random__TypeInfo_for_T_30, mercury__random__Index_12, mercury__random__MaxImage_14, mercury__random__STATE_VARIABLE_Record_0_15, &mercury__random__STATE_VARIABLE_Record_25_25);
            }
#line 199 "random.m"
            {
#line 199 "random.m"
              mercury__array__set_4_p_0(mercury__random__TypeInfo_for_T_30, mercury__random__I1_11, mercury__random__Next_13, mercury__random__STATE_VARIABLE_Record_25_25, &mercury__random__STATE_VARIABLE_Record_26_29);
            }
#line 200 "random.m"
            /* direct tailcall eliminated */
#line 200 "random.m"
            {
#line 200 "random.m"
              MR_Integer mercury__random__I__tmp_copy_7 = mercury__random__I1_11;
#line 200 "random.m"
              MR_ArrayPtr mercury__random__STATE_VARIABLE_Record_0__tmp_copy_15 = mercury__random__STATE_VARIABLE_Record_26_29;
#line 200 "random.m"
              MR_Word mercury__random__STATE_VARIABLE_Order_0__tmp_copy_16 = mercury__random__STATE_VARIABLE_Order_24_24;
#line 200 "random.m"
              MR_Word mercury__random__STATE_VARIABLE_RS_0__tmp_copy_18 = mercury__random__STATE_VARIABLE_RS_23_23;

#line 200 "random.m"
              mercury__random__STATE_VARIABLE_RS_0_18 = mercury__random__STATE_VARIABLE_RS_0__tmp_copy_18;
#line 200 "random.m"
              mercury__random__STATE_VARIABLE_Order_0_16 = mercury__random__STATE_VARIABLE_Order_0__tmp_copy_16;
#line 200 "random.m"
              mercury__random__STATE_VARIABLE_Record_0_15 = mercury__random__STATE_VARIABLE_Record_0__tmp_copy_15;
#line 200 "random.m"
              mercury__random__I_7 = mercury__random__I__tmp_copy_7;
#line 200 "random.m"
            }
#line 200 "random.m"
            continue;
#line 193 "random.m"
          }
#line 192 "random.m"
      }
#line 192 "random.m"
      break;
#line 192 "random.m"
    }
#line 187 "random.m"
}

#line 186 "random.m"
void MR_CALL 
mercury__random__perform_sampling_6_p_0(
#line 186 "random.m"
  MR_Word mercury__random__TypeInfo_for_T_30,
#line 186 "random.m"
  MR_Integer mercury__random__I_7,
#line 186 "random.m"
  MR_ArrayPtr mercury__random__STATE_VARIABLE_Record_0_15,
#line 186 "random.m"
  MR_Word mercury__random__STATE_VARIABLE_Order_0_16,
#line 186 "random.m"
  MR_Word * mercury__random__STATE_VARIABLE_Order_17,
#line 186 "random.m"
  MR_Word mercury__random__STATE_VARIABLE_RS_0_18,
#line 186 "random.m"
  MR_Word * mercury__random__STATE_VARIABLE_RS_19)
#line 186 "random.m"
{
#line 192 "random.m"
  while (MR_TRUE)
#line 192 "random.m"
    {
#line 192 "random.m"
      /* tailcall optimized into a loop */
#line 192 "random.m"
      {
#line 192 "random.m"
        MR_bool mercury__random__succeeded = (mercury__random__I_7 <= (MR_Integer) 0);

#line 192 "random.m"
        if (mercury__random__succeeded)
#line 191 "random.m"
          {
#line 191 "random.m"
            *mercury__random__STATE_VARIABLE_RS_19 = mercury__random__STATE_VARIABLE_RS_0_18;
#line 191 "random.m"
            *mercury__random__STATE_VARIABLE_Order_17 = mercury__random__STATE_VARIABLE_Order_0_16;
#line 191 "random.m"
          }
#line 192 "random.m"
        else
#line 193 "random.m"
          {
#line 193 "random.m"
            MR_Integer mercury__random__I1_11 = (mercury__random__I_7 - (MR_Integer) 1);
#line 193 "random.m"
            MR_Integer mercury__random__Index_12;
#line 193 "random.m"
            MR_Box mercury__random__Next_13;
#line 193 "random.m"
            MR_Box mercury__random__MaxImage_14;
#line 193 "random.m"
            MR_Word mercury__random__STATE_VARIABLE_RS_23_23;
#line 193 "random.m"
            MR_Word mercury__random__STATE_VARIABLE_Order_24_24;
#line 193 "random.m"
            MR_ArrayPtr mercury__random__STATE_VARIABLE_Record_25_25;
#line 193 "random.m"
            MR_ArrayPtr mercury__random__STATE_VARIABLE_Record_26_29;

#line 194 "random.m"
            {
#line 194 "random.m"
              mercury__random__random_5_p_0((MR_Integer) 0, mercury__random__I_7, &mercury__random__Index_12, mercury__random__STATE_VARIABLE_RS_0_18, &mercury__random__STATE_VARIABLE_RS_23_23);
            }
#line 195 "random.m"
            {
#line 195 "random.m"
              mercury__array__lookup_3_p_0(mercury__random__TypeInfo_for_T_30, mercury__random__STATE_VARIABLE_Record_0_15, mercury__random__Index_12, &mercury__random__Next_13);
            }
#line 196 "random.m"
            {
#line 196 "random.m"
              mercury__array__lookup_3_p_0(mercury__random__TypeInfo_for_T_30, mercury__random__STATE_VARIABLE_Record_0_15, mercury__random__I1_11, &mercury__random__MaxImage_14);
            }
#line 197 "random.m"
            {
#line 197 "random.m"
              mercury__random__STATE_VARIABLE_Order_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 197 "random.m"
              MR_hl_field(MR_mktag(1), mercury__random__STATE_VARIABLE_Order_24_24, 0) = mercury__random__Next_13;
#line 197 "random.m"
              MR_hl_field(MR_mktag(1), mercury__random__STATE_VARIABLE_Order_24_24, 1) = ((MR_Box) (mercury__random__STATE_VARIABLE_Order_0_16));
#line 197 "random.m"
            }
#line 198 "random.m"
            {
#line 198 "random.m"
              mercury__array__set_4_p_0(mercury__random__TypeInfo_for_T_30, mercury__random__Index_12, mercury__random__MaxImage_14, mercury__random__STATE_VARIABLE_Record_0_15, &mercury__random__STATE_VARIABLE_Record_25_25);
            }
#line 199 "random.m"
            {
#line 199 "random.m"
              mercury__array__set_4_p_0(mercury__random__TypeInfo_for_T_30, mercury__random__I1_11, mercury__random__Next_13, mercury__random__STATE_VARIABLE_Record_25_25, &mercury__random__STATE_VARIABLE_Record_26_29);
            }
#line 200 "random.m"
            /* direct tailcall eliminated */
#line 200 "random.m"
            {
#line 200 "random.m"
              MR_Integer mercury__random__I__tmp_copy_7 = mercury__random__I1_11;
#line 200 "random.m"
              MR_ArrayPtr mercury__random__STATE_VARIABLE_Record_0__tmp_copy_15 = mercury__random__STATE_VARIABLE_Record_26_29;
#line 200 "random.m"
              MR_Word mercury__random__STATE_VARIABLE_Order_0__tmp_copy_16 = mercury__random__STATE_VARIABLE_Order_24_24;
#line 200 "random.m"
              MR_Word mercury__random__STATE_VARIABLE_RS_0__tmp_copy_18 = mercury__random__STATE_VARIABLE_RS_23_23;

#line 200 "random.m"
              mercury__random__STATE_VARIABLE_RS_0_18 = mercury__random__STATE_VARIABLE_RS_0__tmp_copy_18;
#line 200 "random.m"
              mercury__random__STATE_VARIABLE_Order_0_16 = mercury__random__STATE_VARIABLE_Order_0__tmp_copy_16;
#line 200 "random.m"
              mercury__random__STATE_VARIABLE_Record_0_15 = mercury__random__STATE_VARIABLE_Record_0__tmp_copy_15;
#line 200 "random.m"
              mercury__random__I_7 = mercury__random__I__tmp_copy_7;
#line 200 "random.m"
            }
#line 200 "random.m"
            continue;
#line 193 "random.m"
          }
#line 192 "random.m"
      }
#line 192 "random.m"
      break;
#line 192 "random.m"
    }
#line 186 "random.m"
}

#line 133 "random.m"
void MR_CALL 
mercury__random__params_3_p_0(
#line 133 "random.m"
  MR_Integer * mercury__random__HeadVar__1_1,
#line 133 "random.m"
  MR_Integer * mercury__random__HeadVar__2_2,
#line 133 "random.m"
  MR_Integer * mercury__random__HeadVar__3_3)
#line 133 "random.m"
{
#line 135 "random.m"
  {
#line 135 "random.m"
    MR_bool mercury__random__succeeded;

#line 135 "random.m"
    *mercury__random__HeadVar__1_1 = (MR_Integer) 9301;
#line 135 "random.m"
    *mercury__random__HeadVar__2_2 = (MR_Integer) 49297;
#line 135 "random.m"
    *mercury__random__HeadVar__3_3 = (MR_Integer) 233280;
#line 135 "random.m"
  }
#line 133 "random.m"
}

#line 121 "random.m"
void MR_CALL 
mercury__random__test_4_p_0(
#line 121 "random.m"
  MR_Integer mercury__random__Seed_5,
#line 121 "random.m"
  MR_Integer mercury__random__N_6,
#line 121 "random.m"
  MR_Word * mercury__random__Nums_7,
#line 121 "random.m"
  MR_Integer * mercury__random__Max_8)
#line 121 "random.m"
{
#line 205 "random.m"
  {
#line 205 "random.m"
    MR_bool mercury__random__succeeded;
#line 205 "random.m"
    MR_Word mercury__random__TypeCtorInfo_5_14 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 205 "random.m"
    MR_Word mercury__random__RS1_10;
#line 205 "random.m"
    MR_Integer mercury__random__RS_13;
#line 54 "builtin.opt"
    MR_Box mercury__random__conv0_Copy;
#line 208 "random.m"
    MR_Word mercury__random___RS2_11;

#line 54 "builtin.opt"
{
#define MR_PROC_LABEL mercury__random__test_4_p_0

	MR_Word TypeInfo_for_T;
	MR_Word Value;
	MR_Word Copy;

	TypeInfo_for_T =  mercury__random__TypeCtorInfo_5_14 ;
	Value = (MR_Word) ((MR_Box) (mercury__random__Seed_5)) ;
		{
#line 54 "builtin.opt"

    MR_save_transient_registers();
    Copy = MR_deep_copy(Value, (MR_TypeInfo) TypeInfo_for_T, NULL, NULL);
    MR_restore_transient_registers();

#line 1168 "random.c"

		;}
#undef MR_PROC_LABEL
	 mercury__random__conv0_Copy  = (MR_Box) Copy;
#line 54 "builtin.opt"
    mercury__random__RS_13 = ((MR_Integer) mercury__random__conv0_Copy);
#line 54 "builtin.opt"
}
#line 137 "random.m"
    mercury__random__RS1_10 = (MR_Word) mercury__random__RS_13;
#line 160 "random.m"
    *mercury__random__Max_8 = (MR_Integer) 233279;
#line 208 "random.m"
    {
#line 208 "random.m"
      mercury__random__test_2_4_p_0(mercury__random__N_6, mercury__random__Nums_7, mercury__random__RS1_10, &mercury__random___RS2_11);
    }
#line 205 "random.m"
  }
#line 121 "random.m"
}

#line 108 "random.m"
void MR_CALL 
mercury__random__permutation_4_p_1(
#line 108 "random.m"
  MR_Word mercury__random__TypeInfo_for_T_14,
#line 108 "random.m"
  MR_Word mercury__random__List0_5,
#line 108 "random.m"
  MR_Word * mercury__random__List_6,
#line 108 "random.m"
  MR_Word mercury__random__STATE_VARIABLE_RS_0_10,
#line 108 "random.m"
  MR_Word * mercury__random__STATE_VARIABLE_RS_11)
#line 108 "random.m"
{
#line 179 "random.m"
  {
#line 179 "random.m"
    MR_bool mercury__random__succeeded;
#line 179 "random.m"
    MR_ArrayPtr mercury__random__Samples_8;
#line 179 "random.m"
    MR_Integer mercury__random__Len_9;
#line 179 "random.m"
    MR_Word mercury__random__V_12_12;
#line 258 "array.opt"
    MR_Word mercury__random__TypeInfo_for_T_19;

#line 202 "array.opt"
    {
#line 202 "array.opt"
      mercury__array__from_list_2_p_0(mercury__random__TypeInfo_for_T_14, mercury__random__List0_5, &mercury__random__Samples_8);
    }
#line 258 "array.opt"
{
#define MR_PROC_LABEL mercury__random__permutation_4_p_1

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__random__Samples_8 , Array);
		{
#line 258 "array.opt"

    Max = Array->size;

#line 1237 "random.c"

		;}
#undef MR_PROC_LABEL
	 mercury__random__Len_9  = Max;
#line 258 "array.opt"
}
#line 182 "random.m"
    mercury__random__V_12_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 182 "random.m"
    {
#line 182 "random.m"
      mercury__random__perform_sampling_6_p_1(mercury__random__TypeInfo_for_T_14, mercury__random__Len_9, mercury__random__Samples_8, mercury__random__V_12_12, mercury__random__List_6, mercury__random__STATE_VARIABLE_RS_0_10, mercury__random__STATE_VARIABLE_RS_11);
#line 182 "random.m"
      return;
    }
#line 179 "random.m"
  }
#line 108 "random.m"
}

#line 107 "random.m"
void MR_CALL 
mercury__random__permutation_4_p_0(
#line 107 "random.m"
  MR_Word mercury__random__TypeInfo_for_T_14,
#line 107 "random.m"
  MR_Word mercury__random__List0_5,
#line 107 "random.m"
  MR_Word * mercury__random__List_6,
#line 107 "random.m"
  MR_Word mercury__random__STATE_VARIABLE_RS_0_10,
#line 107 "random.m"
  MR_Word * mercury__random__STATE_VARIABLE_RS_11)
#line 107 "random.m"
{
#line 179 "random.m"
  {
#line 179 "random.m"
    MR_bool mercury__random__succeeded;
#line 179 "random.m"
    MR_ArrayPtr mercury__random__Samples_8;
#line 179 "random.m"
    MR_Integer mercury__random__Len_9;
#line 179 "random.m"
    MR_Word mercury__random__V_12_12;
#line 258 "array.opt"
    MR_Word mercury__random__TypeInfo_for_T_19;

#line 202 "array.opt"
    {
#line 202 "array.opt"
      mercury__array__from_list_2_p_0(mercury__random__TypeInfo_for_T_14, mercury__random__List0_5, &mercury__random__Samples_8);
    }
#line 258 "array.opt"
{
#define MR_PROC_LABEL mercury__random__permutation_4_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__random__Samples_8 , Array);
		{
#line 258 "array.opt"

    Max = Array->size;

#line 1304 "random.c"

		;}
#undef MR_PROC_LABEL
	 mercury__random__Len_9  = Max;
#line 258 "array.opt"
}
#line 182 "random.m"
    mercury__random__V_12_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 182 "random.m"
    {
#line 182 "random.m"
      mercury__random__perform_sampling_6_p_0(mercury__random__TypeInfo_for_T_14, mercury__random__Len_9, mercury__random__Samples_8, mercury__random__V_12_12, mercury__random__List_6, mercury__random__STATE_VARIABLE_RS_0_10, mercury__random__STATE_VARIABLE_RS_11);
#line 182 "random.m"
      return;
    }
#line 179 "random.m"
  }
#line 107 "random.m"
}

#line 100 "random.m"
void MR_CALL 
mercury__random__randcount_3_p_1(
#line 100 "random.m"
  MR_Integer * mercury__random__M_4,
#line 100 "random.m"
  MR_Word mercury__random__RS_5,
#line 100 "random.m"
  MR_Word * mercury__random__RS_3)
#line 100 "random.m"
{
#line 162 "random.m"
  {
#line 162 "random.m"
    MR_bool mercury__random__succeeded;

#line 162 "random.m"
    *mercury__random__RS_3 = mercury__random__RS_5;
#line 135 "random.m"
    *mercury__random__M_4 = (MR_Integer) 233280;
#line 162 "random.m"
  }
#line 100 "random.m"
}

#line 99 "random.m"
void MR_CALL 
mercury__random__randcount_3_p_0(
#line 99 "random.m"
  MR_Integer * mercury__random__M_4,
#line 99 "random.m"
  MR_Word mercury__random__RS_5,
#line 99 "random.m"
  MR_Word * mercury__random__RS_3)
#line 99 "random.m"
{
#line 162 "random.m"
  {
#line 162 "random.m"
    MR_bool mercury__random__succeeded;

#line 162 "random.m"
    *mercury__random__RS_3 = mercury__random__RS_5;
#line 135 "random.m"
    *mercury__random__M_4 = (MR_Integer) 233280;
#line 162 "random.m"
  }
#line 99 "random.m"
}

#line 91 "random.m"
void MR_CALL 
mercury__random__randmax_3_p_1(
#line 91 "random.m"
  MR_Integer * mercury__random__M1_4,
#line 91 "random.m"
  MR_Word mercury__random__RS_5,
#line 91 "random.m"
  MR_Word * mercury__random__RS_3)
#line 91 "random.m"
{
#line 158 "random.m"
  {
#line 158 "random.m"
    MR_bool mercury__random__succeeded;

#line 158 "random.m"
    *mercury__random__RS_3 = mercury__random__RS_5;
#line 160 "random.m"
    *mercury__random__M1_4 = (MR_Integer) 233279;
#line 158 "random.m"
  }
#line 91 "random.m"
}

#line 90 "random.m"
void MR_CALL 
mercury__random__randmax_3_p_0(
#line 90 "random.m"
  MR_Integer * mercury__random__M1_4,
#line 90 "random.m"
  MR_Word mercury__random__RS_5,
#line 90 "random.m"
  MR_Word * mercury__random__RS_3)
#line 90 "random.m"
{
#line 158 "random.m"
  {
#line 158 "random.m"
    MR_bool mercury__random__succeeded;

#line 158 "random.m"
    *mercury__random__RS_3 = mercury__random__RS_5;
#line 160 "random.m"
    *mercury__random__M1_4 = (MR_Integer) 233279;
#line 158 "random.m"
  }
#line 90 "random.m"
}

#line 83 "random.m"
void MR_CALL 
mercury__random__random_5_p_1(
#line 83 "random.m"
  MR_Integer mercury__random__Low_6,
#line 83 "random.m"
  MR_Integer mercury__random__Range_7,
#line 83 "random.m"
  MR_Integer * mercury__random__Num_8,
#line 83 "random.m"
  MR_Word mercury__random__STATE_VARIABLE_RandomSupply_0_12,
#line 83 "random.m"
  MR_Word * mercury__random__STATE_VARIABLE_RandomSupply_13)
#line 83 "random.m"
{
#line 151 "random.m"
  {
#line 151 "random.m"
    MR_bool mercury__random__succeeded;
#line 151 "random.m"
    MR_Integer mercury__random__R_10;
#line 151 "random.m"
    MR_Integer mercury__random__V_16_16;
#line 151 "random.m"
    MR_Integer mercury__random__V_17_17;

#line 152 "random.m"
    {
#line 152 "random.m"
      mercury__random__random_3_p_1(&mercury__random__R_10, mercury__random__STATE_VARIABLE_RandomSupply_0_12, mercury__random__STATE_VARIABLE_RandomSupply_13);
    }
#line 156 "random.m"
    mercury__random__V_17_17 = (mercury__random__Range_7 * mercury__random__R_10);
#line 105 "int.opt"
    mercury__random__V_16_16 = (mercury__random__V_17_17 / (MR_Integer) 233280);
#line 156 "random.m"
    *mercury__random__Num_8 = (mercury__random__Low_6 + mercury__random__V_16_16);
#line 151 "random.m"
  }
#line 83 "random.m"
}

#line 82 "random.m"
void MR_CALL 
mercury__random__random_5_p_0(
#line 82 "random.m"
  MR_Integer mercury__random__Low_6,
#line 82 "random.m"
  MR_Integer mercury__random__Range_7,
#line 82 "random.m"
  MR_Integer * mercury__random__Num_8,
#line 82 "random.m"
  MR_Word mercury__random__STATE_VARIABLE_RandomSupply_0_12,
#line 82 "random.m"
  MR_Word * mercury__random__STATE_VARIABLE_RandomSupply_13)
#line 82 "random.m"
{
#line 151 "random.m"
  {
#line 151 "random.m"
    MR_bool mercury__random__succeeded;
#line 151 "random.m"
    MR_Integer mercury__random__R_10;
#line 151 "random.m"
    MR_Integer mercury__random__V_16_16;
#line 151 "random.m"
    MR_Integer mercury__random__V_17_17;

#line 152 "random.m"
    {
#line 152 "random.m"
      mercury__random__random_3_p_0(&mercury__random__R_10, mercury__random__STATE_VARIABLE_RandomSupply_0_12, mercury__random__STATE_VARIABLE_RandomSupply_13);
    }
#line 156 "random.m"
    mercury__random__V_17_17 = (mercury__random__Range_7 * mercury__random__R_10);
#line 105 "int.opt"
    mercury__random__V_16_16 = (mercury__random__V_17_17 / (MR_Integer) 233280);
#line 156 "random.m"
    *mercury__random__Num_8 = (mercury__random__Low_6 + mercury__random__V_16_16);
#line 151 "random.m"
  }
#line 82 "random.m"
}

#line 73 "random.m"
void MR_CALL 
mercury__random__random_3_p_1(
#line 73 "random.m"
  MR_Integer * mercury__random__I_4,
#line 73 "random.m"
  MR_Word mercury__random__HeadVar__2_2,
#line 73 "random.m"
  MR_Word * mercury__random__HeadVar__3_3)
#line 73 "random.m"
{
#line 140 "random.m"
  {
#line 140 "random.m"
    MR_bool mercury__random__succeeded;
#line 140 "random.m"
    MR_Word mercury__random__TypeCtorInfo_13_13;
#line 140 "random.m"
    MR_Integer mercury__random__RS_6;
#line 140 "random.m"
    MR_Integer mercury__random__I0_7 = (MR_Integer) mercury__random__HeadVar__2_2;
#line 140 "random.m"
    MR_Integer mercury__random__V_11_11;
#line 140 "random.m"
    MR_Integer mercury__random__V_12_12 = (mercury__random__I0_7 * (MR_Integer) 9301);
#line 140 "random.m"
    MR_Integer mercury__random__V_6_17;
#line 140 "random.m"
    MR_Integer mercury__random__V_7_18;
#line 59 "builtin.opt"
    MR_Box mercury__random__conv0_Copy;

#line 143 "random.m"
    mercury__random__V_11_11 = (mercury__random__V_12_12 + (MR_Integer) 49297);
#line 113 "int.opt"
    {
#line 113 "int.opt"
      mercury__random__V_7_18 = mercury__int__div_2_f_0(mercury__random__V_11_11, (MR_Integer) 233280);
    }
#line 112 "int.opt"
    mercury__random__V_6_17 = (mercury__random__V_7_18 * (MR_Integer) 233280);
#line 111 "int.opt"
    *mercury__random__I_4 = (mercury__random__V_11_11 - mercury__random__V_6_17);
#line 1552 "random.c"
    mercury__random__TypeCtorInfo_13_13 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 59 "builtin.opt"
{
#define MR_PROC_LABEL mercury__random__random_3_p_1

	MR_Word TypeInfo_for_T;
	MR_Word Value;
	MR_Word Copy;

	TypeInfo_for_T =  mercury__random__TypeCtorInfo_13_13 ;
	Value = (MR_Word) ((MR_Box) (*mercury__random__I_4)) ;
		{
#line 59 "builtin.opt"

    MR_save_transient_registers();
    Copy = MR_deep_copy(Value, (MR_TypeInfo) TypeInfo_for_T, NULL, NULL);
    MR_restore_transient_registers();

#line 1571 "random.c"

		;}
#undef MR_PROC_LABEL
	 mercury__random__conv0_Copy  = (MR_Box) Copy;
#line 59 "builtin.opt"
    mercury__random__RS_6 = ((MR_Integer) mercury__random__conv0_Copy);
#line 59 "builtin.opt"
}
#line 140 "random.m"
    *mercury__random__HeadVar__3_3 = (MR_Word) mercury__random__RS_6;
#line 140 "random.m"
  }
#line 73 "random.m"
}

#line 72 "random.m"
void MR_CALL 
mercury__random__random_3_p_0(
#line 72 "random.m"
  MR_Integer * mercury__random__I_4,
#line 72 "random.m"
  MR_Word mercury__random__HeadVar__2_2,
#line 72 "random.m"
  MR_Word * mercury__random__HeadVar__3_3)
#line 72 "random.m"
{
#line 140 "random.m"
  {
#line 140 "random.m"
    MR_bool mercury__random__succeeded;
#line 140 "random.m"
    MR_Word mercury__random__TypeCtorInfo_13_13;
#line 140 "random.m"
    MR_Integer mercury__random__RS_6;
#line 140 "random.m"
    MR_Integer mercury__random__I0_7 = (MR_Integer) mercury__random__HeadVar__2_2;
#line 140 "random.m"
    MR_Integer mercury__random__V_11_11;
#line 140 "random.m"
    MR_Integer mercury__random__V_12_12 = (mercury__random__I0_7 * (MR_Integer) 9301);
#line 140 "random.m"
    MR_Integer mercury__random__V_6_17;
#line 140 "random.m"
    MR_Integer mercury__random__V_7_18;
#line 59 "builtin.opt"
    MR_Box mercury__random__conv0_Copy;

#line 143 "random.m"
    mercury__random__V_11_11 = (mercury__random__V_12_12 + (MR_Integer) 49297);
#line 113 "int.opt"
    {
#line 113 "int.opt"
      mercury__random__V_7_18 = mercury__int__div_2_f_0(mercury__random__V_11_11, (MR_Integer) 233280);
    }
#line 112 "int.opt"
    mercury__random__V_6_17 = (mercury__random__V_7_18 * (MR_Integer) 233280);
#line 111 "int.opt"
    *mercury__random__I_4 = (mercury__random__V_11_11 - mercury__random__V_6_17);
#line 1630 "random.c"
    mercury__random__TypeCtorInfo_13_13 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 59 "builtin.opt"
{
#define MR_PROC_LABEL mercury__random__random_3_p_0

	MR_Word TypeInfo_for_T;
	MR_Word Value;
	MR_Word Copy;

	TypeInfo_for_T =  mercury__random__TypeCtorInfo_13_13 ;
	Value = (MR_Word) ((MR_Box) (*mercury__random__I_4)) ;
		{
#line 59 "builtin.opt"

    MR_save_transient_registers();
    Copy = MR_deep_copy(Value, (MR_TypeInfo) TypeInfo_for_T, NULL, NULL);
    MR_restore_transient_registers();

#line 1649 "random.c"

		;}
#undef MR_PROC_LABEL
	 mercury__random__conv0_Copy  = (MR_Box) Copy;
#line 59 "builtin.opt"
    mercury__random__RS_6 = ((MR_Integer) mercury__random__conv0_Copy);
#line 59 "builtin.opt"
}
#line 140 "random.m"
    *mercury__random__HeadVar__3_3 = (MR_Word) mercury__random__RS_6;
#line 140 "random.m"
  }
#line 72 "random.m"
}

#line 65 "random.m"
void MR_CALL 
mercury__random__init_2_p_0(
#line 65 "random.m"
  MR_Integer mercury__random__I0_3,
#line 65 "random.m"
  MR_Word * mercury__random__HeadVar__2_2)
#line 65 "random.m"
{
#line 137 "random.m"
  {
#line 137 "random.m"
    MR_bool mercury__random__succeeded;
#line 137 "random.m"
    MR_Word mercury__random__TypeCtorInfo_5_5 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 137 "random.m"
    MR_Integer mercury__random__RS_4;
#line 54 "builtin.opt"
    MR_Box mercury__random__conv0_Copy;

#line 54 "builtin.opt"
{
#define MR_PROC_LABEL mercury__random__init_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word Value;
	MR_Word Copy;

	TypeInfo_for_T =  mercury__random__TypeCtorInfo_5_5 ;
	Value = (MR_Word) ((MR_Box) (mercury__random__I0_3)) ;
		{
#line 54 "builtin.opt"

    MR_save_transient_registers();
    Copy = MR_deep_copy(Value, (MR_TypeInfo) TypeInfo_for_T, NULL, NULL);
    MR_restore_transient_registers();

#line 1702 "random.c"

		;}
#undef MR_PROC_LABEL
	 mercury__random__conv0_Copy  = (MR_Box) Copy;
#line 54 "builtin.opt"
    mercury__random__RS_4 = ((MR_Integer) mercury__random__conv0_Copy);
#line 54 "builtin.opt"
}
#line 137 "random.m"
    *mercury__random__HeadVar__2_2 = (MR_Word) mercury__random__RS_4;
#line 137 "random.m"
  }
#line 65 "random.m"
}

void mercury__random__init(void)
{
}

void mercury__random__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__random__random__type_ctor_info_supply_0);
}

void mercury__random__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module random. */
