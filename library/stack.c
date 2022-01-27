/*
** Automatically generated from `stack.m'
** by the Mercury compiler,
** version 14.01.2-beta-2015-02-18, configured for x86_64-apple-darwin13.4.0.
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


/* :- module stack. */
/* :- implementation. */

/*
INIT mercury__stack__init
ENDINIT
*/

#include "stack.mih"


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




#line 86 "stack.c"
static const MR_Integer mercury__stack__stack__functor_number_map_stack_1[1];

#line 89 "stack.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__stack__list__pti_list_1__pseudo_1;

#line 92 "stack.c"
static const MR_NotagFunctorDesc mercury__stack__stack__notag_functor_desc_stack_1;

#line 95 "stack.c"
static MR_bool MR_CALL 
mercury__stack____Unify____stack_1_0_10001(
#line 98 "stack.c"
  MR_Box mercury__stack__wrapper_arg_1,
#line 100 "stack.c"
  MR_Box mercury__stack__wrapper_arg_2,
#line 102 "stack.c"
  MR_Box mercury__stack__wrapper_arg_3);

#line 105 "stack.c"
static void MR_CALL 
mercury__stack____Compare____stack_1_0_10001(
#line 108 "stack.c"
  MR_Box mercury__stack__wrapper_arg_1,
#line 110 "stack.c"
  MR_Box * mercury__stack__wrapper_arg_2,
#line 112 "stack.c"
  MR_Box mercury__stack__wrapper_arg_3,
#line 114 "stack.c"
  MR_Box mercury__stack__wrapper_arg_4);

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__stack__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);


static /* final */ const MR_Box mercury__stack_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__stack_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__stack_scalar_common_3[2][5];




static /* final */ const MR_Box mercury__stack_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__stack_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__stack_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__stack_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__stack_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__stack_scalar_common_2[0])),
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



#line 483 "stack.c"
static const MR_Integer mercury__stack__stack__functor_number_map_stack_1[1] = {
  (MR_Integer) 0
};

#line 488 "stack.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__stack__list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 496 "stack.c"
static const MR_NotagFunctorDesc mercury__stack__stack__notag_functor_desc_stack_1 = {
  (MR_String) "stack",
  (MR_PseudoTypeInfo) &mercury__stack__list__pti_list_1__pseudo_1,
  NULL
};

#line 503 "stack.c"
const MR_TypeCtorInfo_Struct mercury__stack__stack__type_ctor_info_stack_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG,
  ((MR_Box) (mercury__stack____Unify____stack_1_0_10001)),
  ((MR_Box) (mercury__stack____Compare____stack_1_0_10001)),
  (MR_String) "stack",
  (MR_String) "stack",
  {
    &mercury__stack__stack__notag_functor_desc_stack_1
  },
  {
    &mercury__stack__stack__notag_functor_desc_stack_1
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__stack__stack__functor_number_map_stack_1
};

#line 524 "stack.c"
static MR_bool MR_CALL 
mercury__stack____Unify____stack_1_0_10001(
#line 527 "stack.c"
  MR_Box mercury__stack__wrapper_arg_1,
#line 529 "stack.c"
  MR_Box mercury__stack__wrapper_arg_2,
#line 531 "stack.c"
  MR_Box mercury__stack__wrapper_arg_3)
#line 533 "stack.c"
{
#line 535 "stack.c"
  {
#line 537 "stack.c"
    MR_bool mercury__stack__succeeded;

#line 540 "stack.c"
    {
#line 542 "stack.c"
      mercury__stack__succeeded = mercury__stack____Unify____stack_1_0(((MR_Word) mercury__stack__wrapper_arg_1), ((MR_Word) mercury__stack__wrapper_arg_2), ((MR_Word) mercury__stack__wrapper_arg_3));
    }
#line 545 "stack.c"
    return mercury__stack__succeeded;
#line 547 "stack.c"
  }
#line 549 "stack.c"
}

#line 552 "stack.c"
static void MR_CALL 
mercury__stack____Compare____stack_1_0_10001(
#line 555 "stack.c"
  MR_Box mercury__stack__wrapper_arg_1,
#line 557 "stack.c"
  MR_Box * mercury__stack__wrapper_arg_2,
#line 559 "stack.c"
  MR_Box mercury__stack__wrapper_arg_3,
#line 561 "stack.c"
  MR_Box mercury__stack__wrapper_arg_4)
#line 563 "stack.c"
{
#line 565 "stack.c"
  {
#line 567 "stack.c"
    MR_Word mercury__stack__conv0_HeadVar__1_1;

#line 570 "stack.c"
    {
#line 572 "stack.c"
      mercury__stack____Compare____stack_1_0(((MR_Word) mercury__stack__wrapper_arg_1), &mercury__stack__conv0_HeadVar__1_1, ((MR_Word) mercury__stack__wrapper_arg_3), ((MR_Word) mercury__stack__wrapper_arg_4));
    }
#line 575 "stack.c"
    *mercury__stack__wrapper_arg_2 = ((MR_Box) (mercury__stack__conv0_HeadVar__1_1));
#line 577 "stack.c"
  }
#line 579 "stack.c"
}

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__stack__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 13 "ops.opt"
{
#line 38 "ops.opt"
  {
#line 38 "ops.opt"
    MR_bool mercury__stack__succeeded;

#line 38 "ops.opt"
    return (MR_Integer) 1200;
#line 38 "ops.opt"
  }
#line 13 "ops.opt"
}

#line 39 "stack.m"
MR_bool MR_CALL 
mercury__stack__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_102_117_108_108_95_95_91_49_44_32_50_93_95_48_1_p_0(void)
#line 39 "stack.m"
{
#line 92 "builtin.opt"
  {
#line 92 "builtin.opt"
    MR_bool mercury__stack__succeeded;

#line 92 "builtin.opt"
{
#define MR_PROC_LABEL mercury__stack__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_102_117_108_108_95_95_91_49_44_32_50_93_95_48_1_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 92 "builtin.opt"

    SUCCESS_INDICATOR = MR_FALSE;

#line 620 "stack.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 92 "builtin.opt"
	}
mercury__stack__succeeded  = SUCCESS_INDICATOR;
}
#line 92 "builtin.opt"
    return mercury__stack__succeeded;
#line 92 "builtin.opt"
  }
#line 39 "stack.m"
}

#line 92 "stack.m"
void MR_CALL 
mercury__stack____Compare____stack_1_0(
#line 92 "stack.m"
  MR_Word mercury__stack__TypeInfo_for_T_8,
#line 92 "stack.m"
  MR_Word * mercury__stack__HeadVar__1_1,
#line 92 "stack.m"
  MR_Word mercury__stack__HeadVar__2_2,
#line 92 "stack.m"
  MR_Word mercury__stack__HeadVar__3_3)
#line 92 "stack.m"
{
#line 92 "stack.m"
  {
#line 92 "stack.m"
    MR_bool mercury__stack__succeeded;
#line 92 "stack.m"
    MR_Integer mercury__stack__CastX_6 = (MR_Integer) mercury__stack__HeadVar__2_2;
#line 92 "stack.m"
    MR_Integer mercury__stack__CastY_7 = (MR_Integer) mercury__stack__HeadVar__3_3;

#line 92 "stack.m"
    mercury__stack__succeeded = (mercury__stack__CastX_6 == mercury__stack__CastY_7);
#line 92 "stack.m"
    if (mercury__stack__succeeded)
#line 662 "stack.c"
      *mercury__stack__HeadVar__1_1 = (MR_Integer) 0;
#line 92 "stack.m"
    else
#line 92 "stack.m"
      {
#line 92 "stack.m"
        MR_Word mercury__stack__V_4_4 = (MR_Word) mercury__stack__HeadVar__2_2;
#line 92 "stack.m"
        MR_Word mercury__stack__V_5_5 = (MR_Word) mercury__stack__HeadVar__3_3;

#line 92 "stack.m"
        {
#line 92 "stack.m"
          mercury__list____Compare____list_1_0(mercury__stack__TypeInfo_for_T_8, mercury__stack__HeadVar__1_1, mercury__stack__V_4_4, mercury__stack__V_5_5);
#line 92 "stack.m"
          return;
        }
#line 92 "stack.m"
      }
#line 92 "stack.m"
  }
#line 92 "stack.m"
}

#line 92 "stack.m"
MR_bool MR_CALL 
mercury__stack____Unify____stack_1_0(
#line 92 "stack.m"
  MR_Word mercury__stack__TypeInfo_for_T_7,
#line 92 "stack.m"
  MR_Word mercury__stack__HeadVar__1_1,
#line 92 "stack.m"
  MR_Word mercury__stack__HeadVar__2_2)
#line 92 "stack.m"
{
#line 92 "stack.m"
  {
#line 92 "stack.m"
    MR_bool mercury__stack__succeeded;
#line 92 "stack.m"
    MR_Integer mercury__stack__CastX_5 = (MR_Integer) mercury__stack__HeadVar__1_1;
#line 92 "stack.m"
    MR_Integer mercury__stack__CastY_6 = (MR_Integer) mercury__stack__HeadVar__2_2;

#line 92 "stack.m"
    mercury__stack__succeeded = (mercury__stack__CastX_5 == mercury__stack__CastY_6);
#line 92 "stack.m"
    if (mercury__stack__succeeded)
#line 92 "stack.m"
      mercury__stack__succeeded = MR_TRUE;
#line 92 "stack.m"
    else
#line 92 "stack.m"
      {
#line 92 "stack.m"
        MR_Word mercury__stack__V_3_3 = (MR_Word) mercury__stack__HeadVar__1_1;
#line 92 "stack.m"
        MR_Word mercury__stack__V_4_4 = (MR_Word) mercury__stack__HeadVar__2_2;

#line 722 "stack.c"
        {
#line 724 "stack.c"
          return mercury__stack__succeeded = mercury__list____Unify____list_1_0(mercury__stack__TypeInfo_for_T_7, mercury__stack__V_3_3, mercury__stack__V_4_4);
        }
#line 92 "stack.m"
      }
#line 92 "stack.m"
    return mercury__stack__succeeded;
#line 92 "stack.m"
  }
#line 92 "stack.m"
}

#line 81 "stack.m"
MR_Integer MR_CALL 
mercury__stack__depth_1_f_0(
#line 81 "stack.m"
  MR_Word mercury__stack__TypeInfo_for_T_5,
#line 81 "stack.m"
  MR_Word mercury__stack__Stack_3)
#line 81 "stack.m"
{
#line 149 "stack.m"
  {
#line 149 "stack.m"
    MR_bool mercury__stack__succeeded;
#line 149 "stack.m"
    MR_Integer mercury__stack__Depth_4;
#line 149 "stack.m"
    MR_Word mercury__stack__Elems_8 = (MR_Word) mercury__stack__Stack_3;

#line 78 "list.opt"
    {
#line 78 "list.opt"
      mercury__list__length_2_3_p_0(mercury__stack__TypeInfo_for_T_5, mercury__stack__Elems_8, (MR_Integer) 0, &mercury__stack__Depth_4);
    }
#line 149 "stack.m"
    return mercury__stack__Depth_4;
#line 149 "stack.m"
  }
#line 81 "stack.m"
}

#line 80 "stack.m"
void MR_CALL 
mercury__stack__depth_2_p_0(
#line 80 "stack.m"
  MR_Word mercury__stack__TypeInfo_for_T_6,
#line 80 "stack.m"
  MR_Word mercury__stack__Stack_3,
#line 80 "stack.m"
  MR_Integer * mercury__stack__Depth_4)
#line 80 "stack.m"
{
#line 149 "stack.m"
  {
#line 149 "stack.m"
    MR_bool mercury__stack__succeeded;
#line 149 "stack.m"
    MR_Word mercury__stack__Elems_5 = (MR_Word) mercury__stack__Stack_3;

#line 78 "list.opt"
    {
#line 78 "list.opt"
      mercury__list__length_2_3_p_0(mercury__stack__TypeInfo_for_T_6, mercury__stack__Elems_5, (MR_Integer) 0, mercury__stack__Depth_4);
#line 78 "list.opt"
      return;
    }
#line 149 "stack.m"
  }
#line 80 "stack.m"
}

#line 75 "stack.m"
void MR_CALL 
mercury__stack__det_pop_3_p_0(
#line 75 "stack.m"
  MR_Word mercury__stack__TypeInfo_for_T_13,
#line 75 "stack.m"
  MR_Box * mercury__stack__Elem_4,
#line 75 "stack.m"
  MR_Word mercury__stack__STATE_VARIABLE_Stack_0_7,
#line 75 "stack.m"
  MR_Word * mercury__stack__STATE_VARIABLE_Stack_8)
#line 75 "stack.m"
{
#line 141 "stack.m"
  {
#line 141 "stack.m"
    MR_bool mercury__stack__succeeded;
#line 141 "stack.m"
    MR_Word mercury__stack__V_14_14 = (MR_Word) mercury__stack__STATE_VARIABLE_Stack_0_7;

#line 141 "stack.m"
    if ((mercury__stack__V_14_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 142 "stack.m"
      {
#line 143 "stack.m"
        {
#line 143 "stack.m"
          mercury__require__error_1_p_0((MR_String) "stack.det_pop: pop from empty stack");
#line 143 "stack.m"
          return;
        }
#line 142 "stack.m"
      }
#line 141 "stack.m"
    else
#line 139 "stack.m"
      {
#line 139 "stack.m"
        MR_Word mercury__stack__Elems_6;

#line 139 "stack.m"
        *mercury__stack__Elem_4 = (MR_hl_field(MR_mktag(1), mercury__stack__V_14_14, (MR_Integer) 0));
#line 139 "stack.m"
        mercury__stack__Elems_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__stack__V_14_14, (MR_Integer) 1)));
#line 140 "stack.m"
        *mercury__stack__STATE_VARIABLE_Stack_8 = (MR_Word) mercury__stack__Elems_6;
#line 139 "stack.m"
      }
#line 141 "stack.m"
  }
#line 75 "stack.m"
}

#line 70 "stack.m"
MR_bool MR_CALL 
mercury__stack__pop_3_p_0(
#line 70 "stack.m"
  MR_Word mercury__stack__TypeInfo_for_T_11,
#line 70 "stack.m"
  MR_Box * mercury__stack__Elem_4,
#line 70 "stack.m"
  MR_Word mercury__stack__STATE_VARIABLE_Stack_0_7,
#line 70 "stack.m"
  MR_Word * mercury__stack__STATE_VARIABLE_Stack_8)
#line 70 "stack.m"
{
#line 133 "stack.m"
  {
#line 133 "stack.m"
    MR_bool mercury__stack__succeeded;
#line 133 "stack.m"
    MR_Word mercury__stack__Elems_6;
#line 133 "stack.m"
    MR_Word mercury__stack__V_9_9 = (MR_Word) mercury__stack__STATE_VARIABLE_Stack_0_7;

#line 134 "stack.m"
    mercury__stack__succeeded = ((MR_tag((MR_Word) mercury__stack__V_9_9)) == (MR_mktag((MR_Integer) 1)));
#line 134 "stack.m"
    if (mercury__stack__succeeded)
#line 134 "stack.m"
      {
#line 134 "stack.m"
        *mercury__stack__Elem_4 = (MR_hl_field(MR_mktag(1), mercury__stack__V_9_9, (MR_Integer) 0));
#line 134 "stack.m"
        mercury__stack__Elems_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__stack__V_9_9, (MR_Integer) 1)));
#line 135 "stack.m"
        *mercury__stack__STATE_VARIABLE_Stack_8 = (MR_Word) mercury__stack__Elems_6;
#line 135 "stack.m"
        mercury__stack__succeeded = MR_TRUE;
#line 134 "stack.m"
      }
#line 133 "stack.m"
    return mercury__stack__succeeded;
#line 133 "stack.m"
  }
#line 70 "stack.m"
}

#line 64 "stack.m"
MR_Box MR_CALL 
mercury__stack__det_top_1_f_0(
#line 64 "stack.m"
  MR_Word mercury__stack__TypeInfo_for_T_5,
#line 64 "stack.m"
  MR_Word mercury__stack__Stack_3)
#line 64 "stack.m"
{
#line 128 "stack.m"
  {
#line 128 "stack.m"
    MR_bool mercury__stack__succeeded;
#line 128 "stack.m"
    MR_Box mercury__stack__X_4;
#line 128 "stack.m"
    MR_Word mercury__stack__V_12_12 = (MR_Word) mercury__stack__Stack_3;

#line 128 "stack.m"
    if ((mercury__stack__V_12_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 129 "stack.m"
      {
#line 130 "stack.m"
        {
#line 130 "stack.m"
          mercury__require__error_1_p_0((MR_String) "stack.det_top: top of empty stack");
        }
#line 129 "stack.m"
      }
#line 128 "stack.m"
    else
#line 127 "stack.m"
      {
#line 127 "stack.m"
        MR_Word mercury__stack__V_8_8;

#line 127 "stack.m"
        mercury__stack__X_4 = (MR_hl_field(MR_mktag(1), mercury__stack__V_12_12, (MR_Integer) 0));
#line 127 "stack.m"
        mercury__stack__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__stack__V_12_12, (MR_Integer) 1)));
#line 127 "stack.m"
      }
#line 128 "stack.m"
    return mercury__stack__X_4;
#line 128 "stack.m"
  }
#line 64 "stack.m"
}

#line 63 "stack.m"
void MR_CALL 
mercury__stack__det_top_2_p_0(
#line 63 "stack.m"
  MR_Word mercury__stack__TypeInfo_for_T_9,
#line 63 "stack.m"
  MR_Word mercury__stack__Stack_3,
#line 63 "stack.m"
  MR_Box * mercury__stack__Elem_4)
#line 63 "stack.m"
{
#line 128 "stack.m"
  {
#line 128 "stack.m"
    MR_bool mercury__stack__succeeded;
#line 128 "stack.m"
    MR_Word mercury__stack__V_10_10 = (MR_Word) mercury__stack__Stack_3;

#line 128 "stack.m"
    if ((mercury__stack__V_10_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 129 "stack.m"
      {
#line 130 "stack.m"
        {
#line 130 "stack.m"
          mercury__require__error_1_p_0((MR_String) "stack.det_top: top of empty stack");
#line 130 "stack.m"
          return;
        }
#line 129 "stack.m"
      }
#line 128 "stack.m"
    else
#line 127 "stack.m"
      {
#line 127 "stack.m"
        MR_Word mercury__stack__V_5_5;

#line 127 "stack.m"
        *mercury__stack__Elem_4 = (MR_hl_field(MR_mktag(1), mercury__stack__V_10_10, (MR_Integer) 0));
#line 127 "stack.m"
        mercury__stack__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__stack__V_10_10, (MR_Integer) 1)));
#line 127 "stack.m"
      }
#line 128 "stack.m"
  }
#line 63 "stack.m"
}

#line 58 "stack.m"
MR_bool MR_CALL 
mercury__stack__top_2_p_0(
#line 58 "stack.m"
  MR_Word mercury__stack__TypeInfo_for_T_6,
#line 58 "stack.m"
  MR_Word mercury__stack__HeadVar__1_1,
#line 58 "stack.m"
  MR_Box * mercury__stack__Elem_3)
#line 58 "stack.m"
{
#line 120 "stack.m"
  {
#line 120 "stack.m"
    MR_bool mercury__stack__succeeded;
#line 120 "stack.m"
    MR_Word mercury__stack__V_5_5 = (MR_Word) mercury__stack__HeadVar__1_1;
#line 120 "stack.m"
    MR_Word mercury__stack__V_4_4;

#line 120 "stack.m"
    mercury__stack__succeeded = ((MR_tag((MR_Word) mercury__stack__V_5_5)) == (MR_mktag((MR_Integer) 1)));
#line 120 "stack.m"
    if (mercury__stack__succeeded)
#line 120 "stack.m"
      {
#line 120 "stack.m"
        *mercury__stack__Elem_3 = (MR_hl_field(MR_mktag(1), mercury__stack__V_5_5, (MR_Integer) 0));
#line 120 "stack.m"
        mercury__stack__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__stack__V_5_5, (MR_Integer) 1)));
#line 120 "stack.m"
      }
#line 120 "stack.m"
    return mercury__stack__succeeded;
#line 120 "stack.m"
  }
#line 58 "stack.m"
}

#line 53 "stack.m"
MR_Word MR_CALL 
mercury__stack__push_list_2_f_0(
#line 53 "stack.m"
  MR_Word mercury__stack__TypeInfo_for_T_9,
#line 53 "stack.m"
  MR_Word mercury__stack__STATE_VARIABLE_Stack_0_6,
#line 53 "stack.m"
  MR_Word mercury__stack__Xs_5)
#line 53 "stack.m"
{
#line 113 "stack.m"
  {
#line 113 "stack.m"
    MR_bool mercury__stack__succeeded;
#line 113 "stack.m"
    MR_Word mercury__stack__STATE_VARIABLE_Stack_7;

#line 113 "stack.m"
    {
#line 113 "stack.m"
      mercury__stack__push_list_3_p_0(mercury__stack__TypeInfo_for_T_9, mercury__stack__Xs_5, mercury__stack__STATE_VARIABLE_Stack_0_6, &mercury__stack__STATE_VARIABLE_Stack_7);
    }
#line 113 "stack.m"
    return mercury__stack__STATE_VARIABLE_Stack_7;
#line 113 "stack.m"
  }
#line 53 "stack.m"
}

#line 52 "stack.m"
void MR_CALL 
mercury__stack__push_list_3_p_0(
#line 52 "stack.m"
  MR_Word mercury__stack__TypeInfo_for_T_14,
#line 52 "stack.m"
  MR_Word mercury__stack__HeadVar__1_1,
#line 52 "stack.m"
  MR_Word mercury__stack__STATE_VARIABLE_Stack_0_2,
#line 52 "stack.m"
  MR_Word * mercury__stack__STATE_VARIABLE_Stack_3)
#line 52 "stack.m"
{
#line 115 "stack.m"
  while (MR_TRUE)
#line 115 "stack.m"
    {
#line 115 "stack.m"
      /* tailcall optimized into a loop */
#line 115 "stack.m"
      {
#line 115 "stack.m"
        MR_bool mercury__stack__succeeded;

#line 115 "stack.m"
        if ((mercury__stack__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 115 "stack.m"
          *mercury__stack__STATE_VARIABLE_Stack_3 = mercury__stack__STATE_VARIABLE_Stack_0_2;
#line 115 "stack.m"
        else
#line 116 "stack.m"
          {
#line 116 "stack.m"
            MR_Box mercury__stack__Elem_7 = (MR_hl_field(MR_mktag(1), mercury__stack__HeadVar__1_1, (MR_Integer) 0));
#line 116 "stack.m"
            MR_Word mercury__stack__Elems_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__stack__HeadVar__1_1, (MR_Integer) 1)));
#line 116 "stack.m"
            MR_Word mercury__stack__STATE_VARIABLE_Stack_12_12;
#line 116 "stack.m"
            MR_Word mercury__stack__Elems_19 = (MR_Word) mercury__stack__STATE_VARIABLE_Stack_0_2;
#line 116 "stack.m"
            MR_Word mercury__stack__V_21_21;

#line 110 "stack.m"
            {
#line 110 "stack.m"
              mercury__stack__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 110 "stack.m"
              MR_hl_field(MR_mktag(1), mercury__stack__V_21_21, 0) = mercury__stack__Elem_7;
#line 110 "stack.m"
              MR_hl_field(MR_mktag(1), mercury__stack__V_21_21, 1) = ((MR_Box) (mercury__stack__Elems_19));
#line 110 "stack.m"
            }
#line 110 "stack.m"
            mercury__stack__STATE_VARIABLE_Stack_12_12 = (MR_Word) mercury__stack__V_21_21;
#line 118 "stack.m"
            /* direct tailcall eliminated */
#line 118 "stack.m"
            {
#line 118 "stack.m"
              MR_Word mercury__stack__HeadVar__1__tmp_copy_1 = mercury__stack__Elems_8;
#line 118 "stack.m"
              MR_Word mercury__stack__STATE_VARIABLE_Stack_0__tmp_copy_2 = mercury__stack__STATE_VARIABLE_Stack_12_12;

#line 118 "stack.m"
              mercury__stack__STATE_VARIABLE_Stack_0_2 = mercury__stack__STATE_VARIABLE_Stack_0__tmp_copy_2;
#line 118 "stack.m"
              mercury__stack__HeadVar__1_1 = mercury__stack__HeadVar__1__tmp_copy_1;
#line 118 "stack.m"
            }
#line 118 "stack.m"
            continue;
#line 116 "stack.m"
          }
#line 115 "stack.m"
      }
#line 115 "stack.m"
      break;
#line 115 "stack.m"
    }
#line 52 "stack.m"
}

#line 46 "stack.m"
MR_Word MR_CALL 
mercury__stack__push_2_f_0(
#line 46 "stack.m"
  MR_Word mercury__stack__TypeInfo_for_T_9,
#line 46 "stack.m"
  MR_Word mercury__stack__STATE_VARIABLE_Stack_0_6,
#line 46 "stack.m"
  MR_Box mercury__stack__X_5)
#line 46 "stack.m"
{
#line 108 "stack.m"
  {
#line 108 "stack.m"
    MR_bool mercury__stack__succeeded;
#line 108 "stack.m"
    MR_Word mercury__stack__STATE_VARIABLE_Stack_7;
#line 108 "stack.m"
    MR_Word mercury__stack__Elems_14 = (MR_Word) mercury__stack__STATE_VARIABLE_Stack_0_6;
#line 108 "stack.m"
    MR_Word mercury__stack__V_16_16;

#line 110 "stack.m"
    {
#line 110 "stack.m"
      mercury__stack__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 110 "stack.m"
      MR_hl_field(MR_mktag(1), mercury__stack__V_16_16, 0) = mercury__stack__X_5;
#line 110 "stack.m"
      MR_hl_field(MR_mktag(1), mercury__stack__V_16_16, 1) = ((MR_Box) (mercury__stack__Elems_14));
#line 110 "stack.m"
    }
#line 110 "stack.m"
    mercury__stack__STATE_VARIABLE_Stack_7 = (MR_Word) mercury__stack__V_16_16;
#line 108 "stack.m"
    return mercury__stack__STATE_VARIABLE_Stack_7;
#line 108 "stack.m"
  }
#line 46 "stack.m"
}

#line 45 "stack.m"
void MR_CALL 
mercury__stack__push_3_p_0(
#line 45 "stack.m"
  MR_Word mercury__stack__TypeInfo_for_T_11,
#line 45 "stack.m"
  MR_Box mercury__stack__Elem_4,
#line 45 "stack.m"
  MR_Word mercury__stack__STATE_VARIABLE_Stack_0_7,
#line 45 "stack.m"
  MR_Word * mercury__stack__STATE_VARIABLE_Stack_8)
#line 45 "stack.m"
{
#line 108 "stack.m"
  {
#line 108 "stack.m"
    MR_bool mercury__stack__succeeded;
#line 108 "stack.m"
    MR_Word mercury__stack__Elems_6 = (MR_Word) mercury__stack__STATE_VARIABLE_Stack_0_7;
#line 108 "stack.m"
    MR_Word mercury__stack__V_10_10;

#line 110 "stack.m"
    {
#line 110 "stack.m"
      mercury__stack__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 110 "stack.m"
      MR_hl_field(MR_mktag(1), mercury__stack__V_10_10, 0) = mercury__stack__Elem_4;
#line 110 "stack.m"
      MR_hl_field(MR_mktag(1), mercury__stack__V_10_10, 1) = ((MR_Box) (mercury__stack__Elems_6));
#line 110 "stack.m"
    }
#line 110 "stack.m"
    *mercury__stack__STATE_VARIABLE_Stack_8 = (MR_Word) mercury__stack__V_10_10;
#line 108 "stack.m"
  }
#line 45 "stack.m"
}

#line 39 "stack.m"
MR_bool MR_CALL 
mercury__stack__is_full_1_p_0(
#line 39 "stack.m"
  MR_Word mercury__stack__TypeInfo_for_T_3,
#line 39 "stack.m"
  MR_Word mercury__stack__HeadVar__1_2)
#line 39 "stack.m"
{
#line 92 "builtin.opt"
  {
#line 92 "builtin.opt"
    MR_bool mercury__stack__succeeded;

#line 92 "builtin.opt"
    {
#line 92 "builtin.opt"
      return mercury__stack__succeeded = mercury__stack__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_102_117_108_108_95_95_91_49_44_32_50_93_95_48_1_p_0();
    }
#line 92 "builtin.opt"
    return mercury__stack__succeeded;
#line 92 "builtin.opt"
  }
#line 39 "stack.m"
}

#line 33 "stack.m"
MR_bool MR_CALL 
mercury__stack__is_empty_1_p_0(
#line 33 "stack.m"
  MR_Word mercury__stack__TypeInfo_for_T_3,
#line 33 "stack.m"
  MR_Word mercury__stack__HeadVar__1_1)
#line 33 "stack.m"
{
#line 100 "stack.m"
  {
#line 100 "stack.m"
    MR_bool mercury__stack__succeeded;
#line 100 "stack.m"
    MR_Word mercury__stack__V_2_2 = (MR_Word) mercury__stack__HeadVar__1_1;

#line 100 "stack.m"
    mercury__stack__succeeded = (mercury__stack__V_2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 100 "stack.m"
    return mercury__stack__succeeded;
#line 100 "stack.m"
  }
#line 33 "stack.m"
}

#line 29 "stack.m"
MR_Word MR_CALL 
mercury__stack__init_0_f_0(
#line 29 "stack.m"
  MR_Word mercury__stack__TypeInfo_for_T_3)
#line 29 "stack.m"
{
#line 98 "stack.m"
  {
#line 98 "stack.m"
    MR_bool mercury__stack__succeeded;
#line 98 "stack.m"
    MR_Word mercury__stack__Stack_2 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 98 "stack.m"
    MR_Word mercury__stack__V_4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 98 "stack.m"
    return mercury__stack__Stack_2;
#line 98 "stack.m"
  }
#line 29 "stack.m"
}

#line 28 "stack.m"
void MR_CALL 
mercury__stack__init_1_p_0(
#line 28 "stack.m"
  MR_Word mercury__stack__TypeInfo_for_T_3,
#line 28 "stack.m"
  MR_Word * mercury__stack__HeadVar__1_1)
#line 28 "stack.m"
{
#line 98 "stack.m"
  {
#line 98 "stack.m"
    MR_bool mercury__stack__succeeded;
#line 98 "stack.m"
    MR_Word mercury__stack__V_2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 98 "stack.m"
    *mercury__stack__HeadVar__1_1 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 98 "stack.m"
  }
#line 28 "stack.m"
}

void mercury__stack__init(void)
{
}

void mercury__stack__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__stack__stack__type_ctor_info_stack_1);
}

void mercury__stack__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module stack. */
