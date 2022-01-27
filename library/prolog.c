/*
** Automatically generated from `prolog.m'
** by the Mercury compiler,
** version 14.01-beta-2014-02-06, configured for x86_64-apple-darwin13.0.0.
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


/* :- module prolog. */
/* :- implementation. */

/*
INIT mercury__prolog__init
ENDINIT
*/

#include "prolog.mih"


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




#line 86 "prolog.c"
static const MR_FA_TypeInfo_Struct1 mercury__prolog__list__ti_list_1univ__type_ctor_info_univ_0;

#line 89 "prolog.c"
static const MR_FA_TypeInfo_Struct2 mercury__prolog__pair__ti_pair_2builtin__type_ctor_info_string_0list__ti_list_1univ__type_ctor_info_univ_0;

#line 92 "prolog.c"
static MR_bool MR_CALL 
mercury__prolog____Unify____univ_result_0_0_10001(
#line 95 "prolog.c"
  MR_Box mercury__prolog__wrapper_arg_1,
#line 97 "prolog.c"
  MR_Box mercury__prolog__wrapper_arg_2);

#line 100 "prolog.c"
static void MR_CALL 
mercury__prolog____Compare____univ_result_0_0_10001(
#line 103 "prolog.c"
  MR_Box * mercury__prolog__wrapper_arg_1,
#line 105 "prolog.c"
  MR_Box mercury__prolog__wrapper_arg_2,
#line 107 "prolog.c"
  MR_Box mercury__prolog__wrapper_arg_3);

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__prolog__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);


static /* final */ const MR_Box mercury__prolog_scalar_common_1[1][2];

static /* final */ const MR_Box mercury__prolog_scalar_common_2[2][3];

static /* final */ const MR_Box mercury__prolog_scalar_common_3[1][4];

static /* final */ const MR_Box mercury__prolog_scalar_common_4[2][5];




static /* final */ const MR_Box mercury__prolog_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__univ__univ__type_ctor_info_univ_0))
  },
};

static /* final */ const MR_Box mercury__prolog_scalar_common_2[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__prolog_scalar_common_1[0]))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__prolog_scalar_common_3[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__prolog_scalar_common_2[1])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__prolog_scalar_common_4[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__prolog_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__prolog_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
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
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
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



#line 492 "prolog.c"
static const MR_FA_TypeInfo_Struct1 mercury__prolog__list__ti_list_1univ__type_ctor_info_univ_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__univ__univ__type_ctor_info_univ_0
  }
};

#line 500 "prolog.c"
static const MR_FA_TypeInfo_Struct2 mercury__prolog__pair__ti_pair_2builtin__type_ctor_info_string_0list__ti_list_1univ__type_ctor_info_univ_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &mercury__prolog__list__ti_list_1univ__type_ctor_info_univ_0
  }
};

#line 509 "prolog.c"
const MR_TypeCtorInfo_Struct mercury__prolog__prolog__type_ctor_info_univ_result_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__prolog____Unify____univ_result_0_0_10001)),
  ((MR_Box) (mercury__prolog____Compare____univ_result_0_0_10001)),
  (MR_String) "prolog",
  (MR_String) "univ_result",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__prolog__pair__ti_pair_2builtin__type_ctor_info_string_0list__ti_list_1univ__type_ctor_info_univ_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 530 "prolog.c"
static MR_bool MR_CALL 
mercury__prolog____Unify____univ_result_0_0_10001(
#line 533 "prolog.c"
  MR_Box mercury__prolog__wrapper_arg_1,
#line 535 "prolog.c"
  MR_Box mercury__prolog__wrapper_arg_2)
#line 537 "prolog.c"
{
#line 539 "prolog.c"
  {
#line 541 "prolog.c"
    MR_bool mercury__prolog__succeeded;

#line 544 "prolog.c"
    {
#line 546 "prolog.c"
      mercury__prolog__succeeded = mercury__prolog____Unify____univ_result_0_0(((MR_Word) mercury__prolog__wrapper_arg_1), ((MR_Word) mercury__prolog__wrapper_arg_2));
    }
#line 549 "prolog.c"
    return mercury__prolog__succeeded;
#line 551 "prolog.c"
  }
#line 553 "prolog.c"
}

#line 556 "prolog.c"
static void MR_CALL 
mercury__prolog____Compare____univ_result_0_0_10001(
#line 559 "prolog.c"
  MR_Box * mercury__prolog__wrapper_arg_1,
#line 561 "prolog.c"
  MR_Box mercury__prolog__wrapper_arg_2,
#line 563 "prolog.c"
  MR_Box mercury__prolog__wrapper_arg_3)
#line 565 "prolog.c"
{
#line 567 "prolog.c"
  {
#line 569 "prolog.c"
    MR_Word mercury__prolog__conv0_HeadVar__1_1;

#line 572 "prolog.c"
    {
#line 574 "prolog.c"
      mercury__prolog____Compare____univ_result_0_0(&mercury__prolog__conv0_HeadVar__1_1, ((MR_Word) mercury__prolog__wrapper_arg_2), ((MR_Word) mercury__prolog__wrapper_arg_3));
    }
#line 577 "prolog.c"
    *mercury__prolog__wrapper_arg_1 = ((MR_Box) (mercury__prolog__conv0_HeadVar__1_1));
#line 579 "prolog.c"
  }
#line 581 "prolog.c"
}

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__prolog__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 13 "ops.opt"
{
#line 38 "ops.opt"
  {
#line 38 "ops.opt"
    MR_bool mercury__prolog__succeeded;

#line 38 "ops.opt"
    return (MR_Integer) 1200;
#line 38 "ops.opt"
  }
#line 13 "ops.opt"
}

#line 70 "prolog.m"
void MR_CALL 
mercury__prolog____Compare____univ_result_0_0(
#line 70 "prolog.m"
  MR_Word * mercury__prolog__HeadVar__1_1,
#line 70 "prolog.m"
  MR_Word mercury__prolog__HeadVar__2_2,
#line 70 "prolog.m"
  MR_Word mercury__prolog__HeadVar__3_3)
#line 70 "prolog.m"
{
#line 70 "prolog.m"
  {
#line 70 "prolog.m"
    MR_bool mercury__prolog__succeeded;
#line 70 "prolog.m"
    MR_Word mercury__prolog__TypeInfo_6_6 = (MR_Word) &mercury__prolog_scalar_common_2[0];
#line 70 "prolog.m"
    MR_Word mercury__prolog__Cast_HeadVar1_4 = mercury__prolog__HeadVar__2_2;
#line 70 "prolog.m"
    MR_Word mercury__prolog__Cast_HeadVar2_5 = mercury__prolog__HeadVar__3_3;

#line 70 "prolog.m"
    {
#line 70 "prolog.m"
      mercury__builtin__compare_3_p_0(mercury__prolog__TypeInfo_6_6, mercury__prolog__HeadVar__1_1, ((MR_Box) (mercury__prolog__Cast_HeadVar1_4)), ((MR_Box) (mercury__prolog__Cast_HeadVar2_5)));
#line 70 "prolog.m"
      return;
    }
#line 70 "prolog.m"
  }
#line 70 "prolog.m"
}

#line 70 "prolog.m"
MR_bool MR_CALL 
mercury__prolog____Unify____univ_result_0_0(
#line 70 "prolog.m"
  MR_Word mercury__prolog__HeadVar__1_1,
#line 70 "prolog.m"
  MR_Word mercury__prolog__HeadVar__2_2)
#line 70 "prolog.m"
{
#line 70 "prolog.m"
  {
#line 70 "prolog.m"
    MR_bool mercury__prolog__succeeded;
#line 70 "prolog.m"
    MR_Word mercury__prolog__TypeInfo_5_5 = (MR_Word) &mercury__prolog_scalar_common_2[0];
#line 70 "prolog.m"
    MR_Word mercury__prolog__Cast_HeadVar1_3 = mercury__prolog__HeadVar__1_1;
#line 70 "prolog.m"
    MR_Word mercury__prolog__Cast_HeadVar2_4 = mercury__prolog__HeadVar__2_2;

#line 70 "prolog.m"
    {
#line 70 "prolog.m"
      return mercury__prolog__succeeded = mercury__builtin__unify_2_p_0(mercury__prolog__TypeInfo_5_5, ((MR_Box) (mercury__prolog__Cast_HeadVar1_3)), ((MR_Box) (mercury__prolog__Cast_HeadVar2_4)));
    }
#line 70 "prolog.m"
    return mercury__prolog__succeeded;
#line 70 "prolog.m"
  }
#line 70 "prolog.m"
}

#line 83 "prolog.m"
void MR_CALL 
mercury__prolog__det_arg_3_p_0(
#line 83 "prolog.m"
  MR_Word mercury__prolog__TypeInfo_for_T_9,
#line 83 "prolog.m"
  MR_Integer mercury__prolog__ArgumentIndex_4,
#line 83 "prolog.m"
  MR_Box mercury__prolog__Type_5,
#line 83 "prolog.m"
  MR_Word * mercury__prolog__Argument_6)
#line 83 "prolog.m"
{
#line 117 "prolog.m"
  {
#line 117 "prolog.m"
    MR_bool mercury__prolog__succeeded;
#line 117 "prolog.m"
    MR_Word mercury__prolog__Arg_7;
#line 110 "prolog.m"
    MR_Word mercury__prolog__TypeInfo_12_17;
#line 110 "prolog.m"
    MR_Box mercury__prolog__Arg_13;
#line 110 "prolog.m"
    MR_Integer mercury__prolog__V_15_15 = (mercury__prolog__ArgumentIndex_4 - (MR_Integer) 1);

#line 111 "prolog.m"
    {
#line 111 "prolog.m"
      mercury__prolog__succeeded = mercury__deconstruct__arg_4_p_1(mercury__prolog__TypeInfo_for_T_9, &mercury__prolog__TypeInfo_12_17, mercury__prolog__Type_5, (MR_Integer) 1, mercury__prolog__V_15_15, &mercury__prolog__Arg_13);
    }
#line 110 "prolog.m"
    if (mercury__prolog__succeeded)
#line 110 "prolog.m"
      {
#line 112 "prolog.m"
        {
#line 112 "prolog.m"
          mercury__univ__type_to_univ_2_p_1(mercury__prolog__TypeInfo_12_17, mercury__prolog__Arg_13, &mercury__prolog__Arg_7);
        }
#line 112 "prolog.m"
        mercury__prolog__succeeded = MR_TRUE;
#line 110 "prolog.m"
      }
#line 117 "prolog.m"
    if (mercury__prolog__succeeded)
#line 116 "prolog.m"
      *mercury__prolog__Argument_6 = mercury__prolog__Arg_7;
#line 117 "prolog.m"
    else
#line 118 "prolog.m"
      {
#line 118 "prolog.m"
        {
#line 118 "prolog.m"
          mercury__require__error_1_p_0((MR_String) "det_arg: arg failed");
#line 118 "prolog.m"
          return;
        }
#line 118 "prolog.m"
      }
#line 117 "prolog.m"
  }
#line 83 "prolog.m"
}

#line 78 "prolog.m"
MR_bool MR_CALL 
mercury__prolog__arg_3_p_0(
#line 78 "prolog.m"
  MR_Word mercury__prolog__TypeInfo_for_T_11,
#line 78 "prolog.m"
  MR_Integer mercury__prolog__ArgumentIndex_4,
#line 78 "prolog.m"
  MR_Box mercury__prolog__Type_5,
#line 78 "prolog.m"
  MR_Word * mercury__prolog__Univ_6)
#line 78 "prolog.m"
{
#line 110 "prolog.m"
  {
#line 110 "prolog.m"
    MR_bool mercury__prolog__succeeded;
#line 110 "prolog.m"
    MR_Word mercury__prolog__TypeInfo_12_12;
#line 110 "prolog.m"
    MR_Box mercury__prolog__Arg_7;
#line 110 "prolog.m"
    MR_Integer mercury__prolog__V_9_9 = (mercury__prolog__ArgumentIndex_4 - (MR_Integer) 1);

#line 111 "prolog.m"
    {
#line 111 "prolog.m"
      mercury__prolog__succeeded = mercury__deconstruct__arg_4_p_1(mercury__prolog__TypeInfo_for_T_11, &mercury__prolog__TypeInfo_12_12, mercury__prolog__Type_5, (MR_Integer) 1, mercury__prolog__V_9_9, &mercury__prolog__Arg_7);
    }
#line 110 "prolog.m"
    if (mercury__prolog__succeeded)
#line 110 "prolog.m"
      {
#line 112 "prolog.m"
        {
#line 112 "prolog.m"
          mercury__univ__type_to_univ_2_p_1(mercury__prolog__TypeInfo_12_12, mercury__prolog__Arg_7, mercury__prolog__Univ_6);
        }
#line 112 "prolog.m"
        mercury__prolog__succeeded = MR_TRUE;
#line 110 "prolog.m"
      }
#line 110 "prolog.m"
    return mercury__prolog__succeeded;
#line 110 "prolog.m"
  }
#line 78 "prolog.m"
}

#line 62 "prolog.m"
void MR_CALL 
mercury__prolog__f_61_46_46_2_p_0(
#line 62 "prolog.m"
  MR_Word mercury__prolog__TypeInfo_for_T_8,
#line 62 "prolog.m"
  MR_Box mercury__prolog__Term_3,
#line 62 "prolog.m"
  MR_Word * mercury__prolog__HeadVar__2_2)
#line 62 "prolog.m"
{
#line 105 "prolog.m"
  {
#line 105 "prolog.m"
    MR_bool mercury__prolog__succeeded;
#line 105 "prolog.m"
    MR_String mercury__prolog__Functor_4;
#line 105 "prolog.m"
    MR_Word mercury__prolog__Args_5;
#line 106 "prolog.m"
    MR_Integer mercury__prolog___Arity_6;

#line 106 "prolog.m"
    {
#line 106 "prolog.m"
      mercury__deconstruct__deconstruct_5_p_1(mercury__prolog__TypeInfo_for_T_8, mercury__prolog__Term_3, (MR_Integer) 1, &mercury__prolog__Functor_4, &mercury__prolog___Arity_6, &mercury__prolog__Args_5);
    }
#line 105 "prolog.m"
    {
#line 105 "prolog.m"
      MR_Word base;
#line 105 "prolog.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 105 "prolog.m"
      *mercury__prolog__HeadVar__2_2 = base;
#line 105 "prolog.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__prolog__Functor_4));
#line 105 "prolog.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__prolog__Args_5));
#line 105 "prolog.m"
    }
#line 105 "prolog.m"
  }
#line 62 "prolog.m"
}

#line 55 "prolog.m"
MR_bool MR_CALL 
mercury__prolog__f_92_61_61_2_p_0(
#line 55 "prolog.m"
  MR_Word mercury__prolog__TypeInfo_for_T_5,
#line 55 "prolog.m"
  MR_Box mercury__prolog__X_3,
#line 55 "prolog.m"
  MR_Box mercury__prolog__Y_4)
#line 55 "prolog.m"
{
#line 100 "prolog.m"
  {
#line 100 "prolog.m"
    MR_bool mercury__prolog__succeeded;

#line 100 "prolog.m"
    {
#line 100 "prolog.m"
      mercury__prolog__succeeded = mercury__builtin__unify_2_p_0(mercury__prolog__TypeInfo_for_T_5, mercury__prolog__X_3, mercury__prolog__Y_4);
    }
#line 100 "prolog.m"
    mercury__prolog__succeeded = !(mercury__prolog__succeeded);
#line 100 "prolog.m"
    return mercury__prolog__succeeded;
#line 100 "prolog.m"
  }
#line 55 "prolog.m"
}

#line 52 "prolog.m"
MR_bool MR_CALL 
mercury__prolog__f_61_61_2_p_0(
#line 52 "prolog.m"
  MR_Word mercury__prolog__TypeInfo_for_T_4,
#line 52 "prolog.m"
  MR_Box mercury__prolog__X_3,
#line 52 "prolog.m"
  MR_Box mercury__prolog__X_2)
#line 52 "prolog.m"
{
#line 99 "prolog.m"
  {
#line 99 "prolog.m"
    MR_bool mercury__prolog__succeeded;

#line 99 "prolog.m"
    {
#line 99 "prolog.m"
      return mercury__prolog__succeeded = mercury__builtin__unify_2_p_0(mercury__prolog__TypeInfo_for_T_4, mercury__prolog__X_2, mercury__prolog__X_3);
    }
#line 99 "prolog.m"
    return mercury__prolog__succeeded;
#line 99 "prolog.m"
  }
#line 52 "prolog.m"
}

#line 36 "prolog.m"
MR_bool MR_CALL 
mercury__prolog__f_61_92_61_2_p_0(
#line 36 "prolog.m"
  MR_Word mercury__prolog__TypeInfo_for_T_5,
#line 36 "prolog.m"
  MR_Box mercury__prolog__X_3,
#line 36 "prolog.m"
  MR_Box mercury__prolog__Y_4)
#line 36 "prolog.m"
{
#line 103 "prolog.m"
  {
#line 103 "prolog.m"
    MR_bool mercury__prolog__succeeded;

#line 103 "prolog.m"
    {
#line 103 "prolog.m"
      mercury__prolog__succeeded = mercury__builtin__unify_2_p_0(mercury__prolog__TypeInfo_for_T_5, mercury__prolog__X_3, mercury__prolog__Y_4);
    }
#line 103 "prolog.m"
    mercury__prolog__succeeded = !(mercury__prolog__succeeded);
#line 103 "prolog.m"
    return mercury__prolog__succeeded;
#line 103 "prolog.m"
  }
#line 36 "prolog.m"
}

#line 33 "prolog.m"
MR_bool MR_CALL 
mercury__prolog__f_61_58_61_2_p_0(
#line 33 "prolog.m"
  MR_Word mercury__prolog__TypeInfo_for_T_4,
#line 33 "prolog.m"
  MR_Box mercury__prolog__X_3,
#line 33 "prolog.m"
  MR_Box mercury__prolog__X_2)
#line 33 "prolog.m"
{
#line 102 "prolog.m"
  {
#line 102 "prolog.m"
    MR_bool mercury__prolog__succeeded;

#line 102 "prolog.m"
    {
#line 102 "prolog.m"
      return mercury__prolog__succeeded = mercury__builtin__unify_2_p_0(mercury__prolog__TypeInfo_for_T_4, mercury__prolog__X_2, mercury__prolog__X_3);
    }
#line 102 "prolog.m"
    return mercury__prolog__succeeded;
#line 102 "prolog.m"
  }
#line 33 "prolog.m"
}

void mercury__prolog__init(void)
{
}

void mercury__prolog__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__prolog__prolog__type_ctor_info_univ_result_0);
}

void mercury__prolog__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module prolog. */
