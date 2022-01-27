/*
** Automatically generated from `construct.m'
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


/* :- module construct. */
/* :- implementation. */

/*
INIT mercury__construct__init
ENDINIT
*/

#include "construct.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "benchmarking.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
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




#line 85 "construct.c"
static MR_bool MR_CALL 
mercury__construct____Unify____functor_number_lex_0_0_10001(
#line 88 "construct.c"
  MR_Box mercury__construct__wrapper_arg_1,
#line 90 "construct.c"
  MR_Box mercury__construct__wrapper_arg_2);

#line 93 "construct.c"
static void MR_CALL 
mercury__construct____Compare____functor_number_lex_0_0_10001(
#line 96 "construct.c"
  MR_Box * mercury__construct__wrapper_arg_1,
#line 98 "construct.c"
  MR_Box mercury__construct__wrapper_arg_2,
#line 100 "construct.c"
  MR_Box mercury__construct__wrapper_arg_3);

#line 103 "construct.c"
static MR_bool MR_CALL 
mercury__construct____Unify____functor_number_ordinal_0_0_10001(
#line 106 "construct.c"
  MR_Box mercury__construct__wrapper_arg_1,
#line 108 "construct.c"
  MR_Box mercury__construct__wrapper_arg_2);

#line 111 "construct.c"
static void MR_CALL 
mercury__construct____Compare____functor_number_ordinal_0_0_10001(
#line 114 "construct.c"
  MR_Box * mercury__construct__wrapper_arg_1,
#line 116 "construct.c"
  MR_Box mercury__construct__wrapper_arg_2,
#line 118 "construct.c"
  MR_Box mercury__construct__wrapper_arg_3);

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__construct__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 323 "list.int"
static MR_Word MR_CALL 
mercury__construct__map__ho7_2_f_in__list_0(
#line 323 "list.int"
  MR_Word mercury__construct__HeadVar__2_2);

#line 323 "list.int"
static MR_Word MR_CALL 
mercury__construct__map__ho6_2_f_in__list_0(
#line 323 "list.int"
  MR_Word mercury__construct__HeadVar__2_2);

#line 323 "list.int"
static MR_Word MR_CALL 
mercury__construct__map__ho5_2_f_in__list_0(
#line 323 "list.int"
  MR_Word mercury__construct__HeadVar__2_2);


static /* final */ const MR_Box mercury__construct_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__construct_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__construct_scalar_common_3[2][5];




static /* final */ const MR_Box mercury__construct_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__construct_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__construct_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__construct_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__construct_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__construct_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



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



#line 495 "construct.c"
const MR_TypeCtorInfo_Struct mercury__construct__construct__type_ctor_info_functor_number_lex_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__construct____Unify____functor_number_lex_0_0_10001)),
  ((MR_Box) (mercury__construct____Compare____functor_number_lex_0_0_10001)),
  (MR_String) "construct",
  (MR_String) "functor_number_lex",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 516 "construct.c"
const MR_TypeCtorInfo_Struct mercury__construct__construct__type_ctor_info_functor_number_ordinal_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__construct____Unify____functor_number_ordinal_0_0_10001)),
  ((MR_Box) (mercury__construct____Compare____functor_number_ordinal_0_0_10001)),
  (MR_String) "construct",
  (MR_String) "functor_number_ordinal",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 537 "construct.c"
static MR_bool MR_CALL 
mercury__construct____Unify____functor_number_lex_0_0_10001(
#line 540 "construct.c"
  MR_Box mercury__construct__wrapper_arg_1,
#line 542 "construct.c"
  MR_Box mercury__construct__wrapper_arg_2)
#line 544 "construct.c"
{
#line 546 "construct.c"
  {
#line 548 "construct.c"
    MR_bool mercury__construct__succeeded;

#line 551 "construct.c"
    {
#line 553 "construct.c"
      mercury__construct__succeeded = mercury__construct____Unify____functor_number_lex_0_0(((MR_Integer) mercury__construct__wrapper_arg_1), ((MR_Integer) mercury__construct__wrapper_arg_2));
    }
#line 556 "construct.c"
    return mercury__construct__succeeded;
#line 558 "construct.c"
  }
#line 560 "construct.c"
}

#line 563 "construct.c"
static void MR_CALL 
mercury__construct____Compare____functor_number_lex_0_0_10001(
#line 566 "construct.c"
  MR_Box * mercury__construct__wrapper_arg_1,
#line 568 "construct.c"
  MR_Box mercury__construct__wrapper_arg_2,
#line 570 "construct.c"
  MR_Box mercury__construct__wrapper_arg_3)
#line 572 "construct.c"
{
#line 574 "construct.c"
  {
#line 576 "construct.c"
    MR_Word mercury__construct__conv0_HeadVar__1_1;

#line 579 "construct.c"
    {
#line 581 "construct.c"
      mercury__construct____Compare____functor_number_lex_0_0(&mercury__construct__conv0_HeadVar__1_1, ((MR_Integer) mercury__construct__wrapper_arg_2), ((MR_Integer) mercury__construct__wrapper_arg_3));
    }
#line 584 "construct.c"
    *mercury__construct__wrapper_arg_1 = ((MR_Box) (mercury__construct__conv0_HeadVar__1_1));
#line 586 "construct.c"
  }
#line 588 "construct.c"
}

#line 591 "construct.c"
static MR_bool MR_CALL 
mercury__construct____Unify____functor_number_ordinal_0_0_10001(
#line 594 "construct.c"
  MR_Box mercury__construct__wrapper_arg_1,
#line 596 "construct.c"
  MR_Box mercury__construct__wrapper_arg_2)
#line 598 "construct.c"
{
#line 600 "construct.c"
  {
#line 602 "construct.c"
    MR_bool mercury__construct__succeeded;

#line 605 "construct.c"
    {
#line 607 "construct.c"
      mercury__construct__succeeded = mercury__construct____Unify____functor_number_ordinal_0_0(((MR_Integer) mercury__construct__wrapper_arg_1), ((MR_Integer) mercury__construct__wrapper_arg_2));
    }
#line 610 "construct.c"
    return mercury__construct__succeeded;
#line 612 "construct.c"
  }
#line 614 "construct.c"
}

#line 617 "construct.c"
static void MR_CALL 
mercury__construct____Compare____functor_number_ordinal_0_0_10001(
#line 620 "construct.c"
  MR_Box * mercury__construct__wrapper_arg_1,
#line 622 "construct.c"
  MR_Box mercury__construct__wrapper_arg_2,
#line 624 "construct.c"
  MR_Box mercury__construct__wrapper_arg_3)
#line 626 "construct.c"
{
#line 628 "construct.c"
  {
#line 630 "construct.c"
    MR_Word mercury__construct__conv0_HeadVar__1_1;

#line 633 "construct.c"
    {
#line 635 "construct.c"
      mercury__construct____Compare____functor_number_ordinal_0_0(&mercury__construct__conv0_HeadVar__1_1, ((MR_Integer) mercury__construct__wrapper_arg_2), ((MR_Integer) mercury__construct__wrapper_arg_3));
    }
#line 638 "construct.c"
    *mercury__construct__wrapper_arg_1 = ((MR_Box) (mercury__construct__conv0_HeadVar__1_1));
#line 640 "construct.c"
  }
#line 642 "construct.c"
}

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__construct__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 13 "ops.opt"
{
#line 38 "ops.opt"
  {
#line 38 "ops.opt"
    MR_bool mercury__construct__succeeded;

#line 38 "ops.opt"
    return (MR_Integer) 1200;
#line 38 "ops.opt"
  }
#line 13 "ops.opt"
}

#line 323 "list.int"
static MR_Word MR_CALL 
mercury__construct__map__ho7_2_f_in__list_0(
#line 323 "list.int"
  MR_Word mercury__construct__HeadVar__2_2)
#line 323 "list.int"
{
#line 170 "list.opt"
  {
#line 170 "list.opt"
    MR_bool mercury__construct__succeeded;
#line 170 "list.opt"
    MR_Word mercury__construct__HeadVar__3_3;

#line 170 "list.opt"
    if ((mercury__construct__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 170 "list.opt"
      mercury__construct__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 170 "list.opt"
    else
#line 171 "list.opt"
      {
#line 171 "list.opt"
        MR_String mercury__construct__H_6_6 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__construct__HeadVar__2_2, (MR_Integer) 0)));
#line 171 "list.opt"
        MR_Word mercury__construct__T_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__construct__HeadVar__2_2, (MR_Integer) 1)));
#line 171 "list.opt"
        MR_Word mercury__construct__V_8_8;
#line 171 "list.opt"
        MR_Word mercury__construct__V_9_9;

#line 363 "construct.m"
{
#define MR_PROC_LABEL mercury__construct__map__ho7_2_f_in__list_0

	MR_String S;
	MR_bool SUCCESS_INDICATOR;

	S =  mercury__construct__H_6_6 ;
		{
#line 363 "construct.m"

    SUCCESS_INDICATOR = (S == NULL);

#line 706 "construct.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 363 "construct.m"
	}
mercury__construct__succeeded  = SUCCESS_INDICATOR;
}
#line 356 "construct.m"
        if (mercury__construct__succeeded)
#line 356 "construct.m"
          mercury__construct__V_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 356 "construct.m"
        else
#line 356 "construct.m"
          {
#line 356 "construct.m"
            mercury__construct__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 356 "construct.m"
            MR_hl_field(MR_mktag(1), mercury__construct__V_8_8, 0) = ((MR_Box) (mercury__construct__H_6_6));
#line 356 "construct.m"
          }
#line 173 "list.opt"
        {
#line 173 "list.opt"
          mercury__construct__V_9_9 = mercury__construct__map__ho7_2_f_in__list_0(mercury__construct__T_7_7);
        }
#line 171 "list.opt"
        {
#line 171 "list.opt"
          mercury__construct__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 171 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__construct__HeadVar__3_3, 0) = ((MR_Box) (mercury__construct__V_8_8));
#line 171 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__construct__HeadVar__3_3, 1) = ((MR_Box) (mercury__construct__V_9_9));
#line 171 "list.opt"
        }
#line 171 "list.opt"
      }
#line 170 "list.opt"
    return mercury__construct__HeadVar__3_3;
#line 170 "list.opt"
  }
#line 323 "list.int"
}

#line 323 "list.int"
static MR_Word MR_CALL 
mercury__construct__map__ho6_2_f_in__list_0(
#line 323 "list.int"
  MR_Word mercury__construct__HeadVar__2_2)
#line 323 "list.int"
{
#line 170 "list.opt"
  {
#line 170 "list.opt"
    MR_bool mercury__construct__succeeded;
#line 170 "list.opt"
    MR_Word mercury__construct__HeadVar__3_3;

#line 170 "list.opt"
    if ((mercury__construct__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 170 "list.opt"
      mercury__construct__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 170 "list.opt"
    else
#line 171 "list.opt"
      {
#line 171 "list.opt"
        MR_Word mercury__construct__TypeInfo_6_15;
#line 171 "list.opt"
        MR_Word mercury__construct__H_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__construct__HeadVar__2_2, (MR_Integer) 0)));
#line 171 "list.opt"
        MR_Word mercury__construct__T_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__construct__HeadVar__2_2, (MR_Integer) 1)));
#line 171 "list.opt"
        MR_Word mercury__construct__V_8_8;
#line 171 "list.opt"
        MR_Word mercury__construct__V_9_9;
#line 12 "univ.opt"
        MR_Box mercury__construct__V_4_14;
#line 56 "type_desc.opt"
        MR_Box mercury__construct__V_16_16;

#line 12 "univ.opt"
        mercury__construct__TypeInfo_6_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__construct__H_6_6, (MR_Integer) 0)));
#line 12 "univ.opt"
        mercury__construct__V_4_14 = (MR_hl_field(MR_mktag(0), mercury__construct__H_6_6, (MR_Integer) 1));
#line 56 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__construct__map__ho6_2_f_in__list_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__construct__TypeInfo_6_15 ;
		{
#line 56 "type_desc.opt"
{
    TypeInfo = TypeInfo_for_T;

    /*
    ** We used to collapse equivalences for efficiency here, but that's not
    ** always desirable, due to the reverse mode of make_type/2, and efficiency
    ** of type_infos probably isn't very important anyway.
    */
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}
#line 820 "construct.c"

		;}
#undef MR_PROC_LABEL
	 mercury__construct__V_8_8  = TypeInfo;
#line 56 "type_desc.opt"
}
#line 173 "list.opt"
        {
#line 173 "list.opt"
          mercury__construct__V_9_9 = mercury__construct__map__ho6_2_f_in__list_0(mercury__construct__T_7_7);
        }
#line 171 "list.opt"
        {
#line 171 "list.opt"
          mercury__construct__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 171 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__construct__HeadVar__3_3, 0) = ((MR_Box) (mercury__construct__V_8_8));
#line 171 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__construct__HeadVar__3_3, 1) = ((MR_Box) (mercury__construct__V_9_9));
#line 171 "list.opt"
        }
#line 171 "list.opt"
      }
#line 170 "list.opt"
    return mercury__construct__HeadVar__3_3;
#line 170 "list.opt"
  }
#line 323 "list.int"
}

#line 323 "list.int"
static MR_Word MR_CALL 
mercury__construct__map__ho5_2_f_in__list_0(
#line 323 "list.int"
  MR_Word mercury__construct__HeadVar__2_2)
#line 323 "list.int"
{
#line 170 "list.opt"
  {
#line 170 "list.opt"
    MR_bool mercury__construct__succeeded;
#line 170 "list.opt"
    MR_Word mercury__construct__HeadVar__3_3;

#line 170 "list.opt"
    if ((mercury__construct__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 170 "list.opt"
      mercury__construct__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 170 "list.opt"
    else
#line 171 "list.opt"
      {
#line 171 "list.opt"
        MR_Word mercury__construct__H_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__construct__HeadVar__2_2, (MR_Integer) 0)));
#line 171 "list.opt"
        MR_Word mercury__construct__T_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__construct__HeadVar__2_2, (MR_Integer) 1)));
#line 171 "list.opt"
        MR_Word mercury__construct__V_8_8;
#line 171 "list.opt"
        MR_Word mercury__construct__V_9_9;

#line 172 "list.opt"
        {
#line 172 "list.opt"
          mercury__construct__V_8_8 = mercury__type_desc__det_ground_pseudo_type_desc_to_type_desc_1_f_0(mercury__construct__H_6_6);
        }
#line 173 "list.opt"
        {
#line 173 "list.opt"
          mercury__construct__V_9_9 = mercury__construct__map__ho5_2_f_in__list_0(mercury__construct__T_7_7);
        }
#line 171 "list.opt"
        {
#line 171 "list.opt"
          mercury__construct__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 171 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__construct__HeadVar__3_3, 0) = ((MR_Box) (mercury__construct__V_8_8));
#line 171 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__construct__HeadVar__3_3, 1) = ((MR_Box) (mercury__construct__V_9_9));
#line 171 "list.opt"
        }
#line 171 "list.opt"
      }
#line 170 "list.opt"
    return mercury__construct__HeadVar__3_3;
#line 170 "list.opt"
  }
#line 323 "list.int"
}

#line 32 "construct.m"
void MR_CALL 
mercury__construct____Compare____functor_number_ordinal_0_0(
#line 32 "construct.m"
  MR_Word * mercury__construct__HeadVar__1_1,
#line 32 "construct.m"
  MR_Integer mercury__construct__HeadVar__2_2,
#line 32 "construct.m"
  MR_Integer mercury__construct__HeadVar__3_3)
#line 32 "construct.m"
{
#line 32 "construct.m"
  {
#line 32 "construct.m"
    MR_bool mercury__construct__succeeded;
#line 32 "construct.m"
    MR_Integer mercury__construct__Cast_HeadVar1_4 = mercury__construct__HeadVar__2_2;
#line 32 "construct.m"
    MR_Integer mercury__construct__Cast_HeadVar2_5 = mercury__construct__HeadVar__3_3;

#line 66 "private_builtin.opt"
    mercury__construct__succeeded = (mercury__construct__Cast_HeadVar1_4 < mercury__construct__Cast_HeadVar2_5);
#line 69 "private_builtin.opt"
    if (mercury__construct__succeeded)
#line 68 "private_builtin.opt"
      *mercury__construct__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
    else
#line 74 "private_builtin.opt"
      {
#line 71 "private_builtin.opt"
        mercury__construct__succeeded = (mercury__construct__Cast_HeadVar1_4 == mercury__construct__Cast_HeadVar2_5);
#line 74 "private_builtin.opt"
        if (mercury__construct__succeeded)
#line 73 "private_builtin.opt"
          *mercury__construct__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
        else
#line 75 "private_builtin.opt"
          *mercury__construct__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
      }
#line 32 "construct.m"
  }
#line 32 "construct.m"
}

#line 32 "construct.m"
MR_bool MR_CALL 
mercury__construct____Unify____functor_number_ordinal_0_0(
#line 32 "construct.m"
  MR_Integer mercury__construct__HeadVar__1_1,
#line 32 "construct.m"
  MR_Integer mercury__construct__HeadVar__2_2)
#line 32 "construct.m"
{
#line 32 "construct.m"
  {
#line 32 "construct.m"
    MR_bool mercury__construct__succeeded;
#line 32 "construct.m"
    MR_Integer mercury__construct__Cast_HeadVar1_3 = mercury__construct__HeadVar__1_1;
#line 32 "construct.m"
    MR_Integer mercury__construct__Cast_HeadVar2_4 = mercury__construct__HeadVar__2_2;

#line 32 "construct.m"
    mercury__construct__succeeded = (mercury__construct__Cast_HeadVar1_3 == mercury__construct__Cast_HeadVar2_4);
#line 32 "construct.m"
    return mercury__construct__succeeded;
#line 32 "construct.m"
  }
#line 32 "construct.m"
}

#line 33 "construct.m"
void MR_CALL 
mercury__construct____Compare____functor_number_lex_0_0(
#line 33 "construct.m"
  MR_Word * mercury__construct__HeadVar__1_1,
#line 33 "construct.m"
  MR_Integer mercury__construct__HeadVar__2_2,
#line 33 "construct.m"
  MR_Integer mercury__construct__HeadVar__3_3)
#line 33 "construct.m"
{
#line 33 "construct.m"
  {
#line 33 "construct.m"
    MR_bool mercury__construct__succeeded;
#line 33 "construct.m"
    MR_Integer mercury__construct__Cast_HeadVar1_4 = mercury__construct__HeadVar__2_2;
#line 33 "construct.m"
    MR_Integer mercury__construct__Cast_HeadVar2_5 = mercury__construct__HeadVar__3_3;

#line 66 "private_builtin.opt"
    mercury__construct__succeeded = (mercury__construct__Cast_HeadVar1_4 < mercury__construct__Cast_HeadVar2_5);
#line 69 "private_builtin.opt"
    if (mercury__construct__succeeded)
#line 68 "private_builtin.opt"
      *mercury__construct__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
    else
#line 74 "private_builtin.opt"
      {
#line 71 "private_builtin.opt"
        mercury__construct__succeeded = (mercury__construct__Cast_HeadVar1_4 == mercury__construct__Cast_HeadVar2_5);
#line 74 "private_builtin.opt"
        if (mercury__construct__succeeded)
#line 73 "private_builtin.opt"
          *mercury__construct__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
        else
#line 75 "private_builtin.opt"
          *mercury__construct__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
      }
#line 33 "construct.m"
  }
#line 33 "construct.m"
}

#line 33 "construct.m"
MR_bool MR_CALL 
mercury__construct____Unify____functor_number_lex_0_0(
#line 33 "construct.m"
  MR_Integer mercury__construct__HeadVar__1_1,
#line 33 "construct.m"
  MR_Integer mercury__construct__HeadVar__2_2)
#line 33 "construct.m"
{
#line 33 "construct.m"
  {
#line 33 "construct.m"
    MR_bool mercury__construct__succeeded;
#line 33 "construct.m"
    MR_Integer mercury__construct__Cast_HeadVar1_3 = mercury__construct__HeadVar__1_1;
#line 33 "construct.m"
    MR_Integer mercury__construct__Cast_HeadVar2_4 = mercury__construct__HeadVar__2_2;

#line 33 "construct.m"
    mercury__construct__succeeded = (mercury__construct__Cast_HeadVar1_3 == mercury__construct__Cast_HeadVar2_4);
#line 33 "construct.m"
    return mercury__construct__succeeded;
#line 33 "construct.m"
  }
#line 33 "construct.m"
}

#line 1072 "construct.m"
MR_Word MR_CALL 
mercury__construct__construct_tuple_2_3_f_0(
#line 1072 "construct.m"
  MR_Word mercury__construct__Args_1,
#line 1072 "construct.m"
  MR_Word mercury__construct__ArgTypes_2,
#line 1072 "construct.m"
  MR_Integer mercury__construct__Arity_3)
#line 1072 "construct.m"
{
#line 1074 "construct.m"
  {
#line 1074 "construct.m"
    MR_bool mercury__construct__succeeded;
#line 1074 "construct.m"
    MR_Word mercury__construct__Term_4;

#line 1077 "construct.m"
{
#define MR_PROC_LABEL mercury__construct__construct_tuple_2_3_f_0

	MR_Word Args;
	MR_Word ArgTypes;
	MR_Integer Arity;
	MR_Word Term;

	Args =  mercury__construct__Args_1 ;
	ArgTypes =  mercury__construct__ArgTypes_2 ;
	Arity =  mercury__construct__Arity_3 ;
		{
#line 1077 "construct.m"
{
    MR_TypeInfo type_info;
    MR_Word     new_data;
    int         i;
    MR_Word     arg_data;
    MR_TypeInfo arg_type_info;
    int         size;

    /*
    ** Construct a type_info for the tuple.
    */
    MR_save_transient_registers();
    type_info = MR_make_type(Arity, MR_TYPECTOR_DESC_MAKE_TUPLE(Arity),
        ArgTypes);
    MR_restore_transient_registers();

    /*
    ** Create the tuple.
    */
    if (Arity == 0) {
        new_data = (MR_Word) NULL;
    } else {
        MR_offset_incr_hp_msg(new_data, MR_SIZE_SLOT_SIZE,
            MR_SIZE_SLOT_SIZE + Arity, MR_ALLOC_ID,
            "<created by construct.construct_tuple/1>");

        size = MR_cell_size(Arity);
        for (i = 0; i < Arity; i++) {
            arg_data = MR_field(MR_UNIV_TAG, MR_list_head(Args),
                MR_UNIV_OFFSET_FOR_DATA);
            arg_type_info = (MR_TypeInfo) MR_field(MR_UNIV_TAG,
                MR_list_head(Args), MR_UNIV_OFFSET_FOR_TYPEINFO);
            MR_field(MR_mktag(0), new_data, i) = arg_data;
            size += MR_term_size(arg_type_info, arg_data);
            Args = MR_list_tail(Args);
        }

        MR_define_size_slot(MR_mktag(0), new_data, size);
    }

    /*
    ** Create a univ.
    */
    MR_new_univ_on_hp(Term, type_info, new_data);
}
#line 1136 "construct.c"

		;}
#undef MR_PROC_LABEL
	 mercury__construct__Term_4  = Term;
#line 1077 "construct.m"
}
#line 1074 "construct.m"
    return mercury__construct__Term_4;
#line 1074 "construct.m"
  }
#line 1072 "construct.m"
}

#line 543 "construct.m"
MR_bool MR_CALL 
mercury__construct__find_functor_2_6_p_0(
#line 543 "construct.m"
  MR_Word mercury__construct__TypeInfo_7,
#line 543 "construct.m"
  MR_String mercury__construct__Functor_8,
#line 543 "construct.m"
  MR_Integer mercury__construct__Arity_9,
#line 543 "construct.m"
  MR_Integer mercury__construct__Num0_10,
#line 543 "construct.m"
  MR_Integer * mercury__construct__FunctorNumber_11,
#line 543 "construct.m"
  MR_Word * mercury__construct__ArgTypes_12)
#line 543 "construct.m"
{
#line 546 "construct.m"
  while (MR_TRUE)
#line 546 "construct.m"
    {
#line 546 "construct.m"
      /* tailcall optimized into a loop */
#line 546 "construct.m"
      {
#line 546 "construct.m"
        MR_bool mercury__construct__succeeded = (mercury__construct__Num0_10 >= (MR_Integer) 0);
#line 546 "construct.m"
        MR_Integer mercury__construct__Num_13;
#line 546 "construct.m"
        MR_Integer mercury__construct__V_16_16;
#line 553 "construct.m"
        MR_Word mercury__construct__ArgPseudoTypes_14;
#line 549 "construct.m"
        MR_String mercury__construct__V_22_22;
#line 549 "construct.m"
        MR_Integer mercury__construct__V_23_23;

#line 546 "construct.m"
        if (mercury__construct__succeeded)
#line 546 "construct.m"
          {
#line 548 "construct.m"
            mercury__construct__V_16_16 = (MR_Integer) 1;
#line 548 "construct.m"
            mercury__construct__Num_13 = (mercury__construct__Num0_10 - mercury__construct__V_16_16);
#line 171 "construct.m"
            {
#line 171 "construct.m"
              mercury__construct__succeeded = mercury__construct__get_functor_internal_5_p_0(mercury__construct__TypeInfo_7, mercury__construct__Num_13, &mercury__construct__V_22_22, &mercury__construct__V_23_23, &mercury__construct__ArgPseudoTypes_14);
            }
#line 549 "construct.m"
            if (mercury__construct__succeeded)
#line 549 "construct.m"
              {
#line 549 "construct.m"
                mercury__construct__succeeded = (strcmp(mercury__construct__Functor_8, mercury__construct__V_22_22) == 0);
#line 549 "construct.m"
                if (mercury__construct__succeeded)
#line 549 "construct.m"
                  mercury__construct__succeeded = (mercury__construct__Arity_9 == mercury__construct__V_23_23);
#line 549 "construct.m"
              }
#line 553 "construct.m"
            if (mercury__construct__succeeded)
#line 551 "construct.m"
              {
#line 550 "construct.m"
                {
#line 550 "construct.m"
                  *mercury__construct__ArgTypes_12 = mercury__construct__map__ho5_2_f_in__list_0(mercury__construct__ArgPseudoTypes_14);
                }
#line 552 "construct.m"
                *mercury__construct__FunctorNumber_11 = mercury__construct__Num_13;
#line 551 "construct.m"
                mercury__construct__succeeded = MR_TRUE;
#line 551 "construct.m"
              }
#line 553 "construct.m"
            else
#line 554 "construct.m"
              {
#line 554 "construct.m"
                /* direct tailcall eliminated */
#line 554 "construct.m"
                {
#line 554 "construct.m"
                  MR_Integer mercury__construct__Num0__tmp_copy_10 = mercury__construct__Num_13;

#line 554 "construct.m"
                  mercury__construct__Num0_10 = mercury__construct__Num0__tmp_copy_10;
#line 554 "construct.m"
                }
#line 554 "construct.m"
                continue;
#line 554 "construct.m"
              }
#line 546 "construct.m"
          }
#line 546 "construct.m"
        return mercury__construct__succeeded;
#line 546 "construct.m"
      }
#line 546 "construct.m"
      break;
#line 546 "construct.m"
    }
#line 543 "construct.m"
}

#line 358 "construct.m"
MR_bool MR_CALL 
mercury__construct__null_1_p_0(
#line 358 "construct.m"
  MR_String mercury__construct__S_1)
#line 358 "construct.m"
{
#line 360 "construct.m"
  {
#line 360 "construct.m"
    MR_bool mercury__construct__succeeded;

#line 363 "construct.m"
{
#define MR_PROC_LABEL mercury__construct__null_1_p_0

	MR_String S;
	MR_bool SUCCESS_INDICATOR;

	S =  mercury__construct__S_1 ;
		{
#line 363 "construct.m"

    SUCCESS_INDICATOR = (S == NULL);

#line 1285 "construct.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 363 "construct.m"
	}
mercury__construct__succeeded  = SUCCESS_INDICATOR;
}
#line 360 "construct.m"
    return mercury__construct__succeeded;
#line 360 "construct.m"
  }
#line 358 "construct.m"
}

#line 354 "construct.m"
MR_Word MR_CALL 
mercury__construct__null_to_no_1_f_0(
#line 354 "construct.m"
  MR_String mercury__construct__S_3)
#line 354 "construct.m"
{
#line 356 "construct.m"
  {
#line 356 "construct.m"
    MR_bool mercury__construct__succeeded;
#line 356 "construct.m"
    MR_Word mercury__construct__HeadVar__2_2;

#line 363 "construct.m"
{
#define MR_PROC_LABEL mercury__construct__null_to_no_1_f_0

	MR_String S;
	MR_bool SUCCESS_INDICATOR;

	S =  mercury__construct__S_3 ;
		{
#line 363 "construct.m"

    SUCCESS_INDICATOR = (S == NULL);

#line 1328 "construct.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 363 "construct.m"
	}
mercury__construct__succeeded  = SUCCESS_INDICATOR;
}
#line 356 "construct.m"
    if (mercury__construct__succeeded)
#line 356 "construct.m"
      mercury__construct__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 356 "construct.m"
    else
#line 356 "construct.m"
      {
#line 356 "construct.m"
        mercury__construct__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 356 "construct.m"
        MR_hl_field(MR_mktag(1), mercury__construct__HeadVar__2_2, 0) = ((MR_Box) (mercury__construct__S_3));
#line 356 "construct.m"
      }
#line 356 "construct.m"
    return mercury__construct__HeadVar__2_2;
#line 356 "construct.m"
  }
#line 354 "construct.m"
}

#line 261 "construct.m"
MR_bool MR_CALL 
mercury__construct__get_functor_with_names_internal_6_p_0(
#line 261 "construct.m"
  MR_Word mercury__construct__TypeDesc_1,
#line 261 "construct.m"
  MR_Integer mercury__construct__FunctorNumber_2,
#line 261 "construct.m"
  MR_String * mercury__construct__FunctorName_3,
#line 261 "construct.m"
  MR_Integer * mercury__construct__Arity_4,
#line 261 "construct.m"
  MR_Word * mercury__construct__PseudoTypeInfoList_5,
#line 261 "construct.m"
  MR_Word * mercury__construct__ArgNameList_6)
#line 261 "construct.m"
{
#line 285 "construct.m"
  {
#line 285 "construct.m"
    MR_bool mercury__construct__succeeded;

#line 290 "construct.m"
{
#define MR_PROC_LABEL mercury__construct__get_functor_with_names_internal_6_p_0

	MR_Word TypeDesc;
	MR_Integer FunctorNumber;
	MR_String FunctorName;
	MR_Integer Arity;
	MR_Word PseudoTypeInfoList;
	MR_Word ArgNameList;
	MR_bool SUCCESS_INDICATOR;

	TypeDesc =  mercury__construct__TypeDesc_1 ;
	FunctorNumber =  mercury__construct__FunctorNumber_2 ;
		{
#line 290 "construct.m"
{
    MR_TypeInfo         type_info;
    MR_Construct_Info   construct_info;
    int                 arity;
    MR_bool             success;

    type_info = (MR_TypeInfo) TypeDesc;

        /*
        ** If type_info is an equivalence type, expand it.
        */
    MR_save_transient_registers();
    type_info = MR_collapse_equivalences(type_info);
    MR_restore_transient_registers();

        /*
        ** Get information for this functor number and
        ** store in construct_info. If this is a discriminated union
        ** type and if the functor number is in range, we
        ** succeed.
        */
    MR_save_transient_registers();
    success = MR_get_functors_check_range(FunctorNumber, type_info,
        &construct_info);
    MR_restore_transient_registers();

        /*
        ** Get the functor name and arity, construct the list
        ** of type_infos for arguments.
        */

    if (success) {
        MR_make_aligned_string(FunctorName, construct_info.functor_name);
        arity = construct_info.arity;
        Arity = arity;

        if (MR_TYPE_CTOR_INFO_IS_TUPLE(
            MR_TYPEINFO_GET_TYPE_CTOR_INFO(type_info)))
        {
            int i;

            MR_save_transient_registers();
            PseudoTypeInfoList = MR_type_params_vector_to_list(Arity,
                MR_TYPEINFO_GET_VAR_ARITY_ARG_VECTOR(type_info));
            ArgNameList = MR_list_empty();
            for (i = 0; i < Arity; i++) {
                ArgNameList = MR_string_list_cons_msg((MR_Word) NULL,
                    ArgNameList, MR_ALLOC_ID);
            }
            MR_restore_transient_registers();
        } else {
            MR_save_transient_registers();
            PseudoTypeInfoList =
                MR_pseudo_type_info_vector_to_pseudo_type_info_list(arity,
                    MR_TYPEINFO_GET_FIXED_ARITY_ARG_VECTOR(type_info),
                    construct_info.arg_pseudo_type_infos);
            ArgNameList = MR_arg_name_vector_to_list(arity,
                construct_info.arg_names);
            MR_restore_transient_registers();
        }
    }
    SUCCESS_INDICATOR = success;
}
#line 1459 "construct.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__construct__FunctorName_3  = FunctorName;
	 *mercury__construct__Arity_4  = Arity;
	 *mercury__construct__PseudoTypeInfoList_5  = PseudoTypeInfoList;
	 *mercury__construct__ArgNameList_6  = ArgNameList;
#line 290 "construct.m"
	}
mercury__construct__succeeded  = SUCCESS_INDICATOR;
}
#line 285 "construct.m"
    return mercury__construct__succeeded;
#line 285 "construct.m"
  }
#line 261 "construct.m"
}

#line 180 "construct.m"
MR_bool MR_CALL 
mercury__construct__get_functor_internal_5_p_0(
#line 180 "construct.m"
  MR_Word mercury__construct__TypeDesc_1,
#line 180 "construct.m"
  MR_Integer mercury__construct__FunctorNumber_2,
#line 180 "construct.m"
  MR_String * mercury__construct__FunctorName_3,
#line 180 "construct.m"
  MR_Integer * mercury__construct__Arity_4,
#line 180 "construct.m"
  MR_Word * mercury__construct__PseudoTypeInfoList_5)
#line 180 "construct.m"
{
#line 203 "construct.m"
  {
#line 203 "construct.m"
    MR_bool mercury__construct__succeeded;

#line 207 "construct.m"
{
#define MR_PROC_LABEL mercury__construct__get_functor_internal_5_p_0

	MR_Word TypeDesc;
	MR_Integer FunctorNumber;
	MR_String FunctorName;
	MR_Integer Arity;
	MR_Word PseudoTypeInfoList;
	MR_bool SUCCESS_INDICATOR;

	TypeDesc =  mercury__construct__TypeDesc_1 ;
	FunctorNumber =  mercury__construct__FunctorNumber_2 ;
		{
#line 207 "construct.m"
{
    MR_TypeInfo         type_info;
    MR_Construct_Info   construct_info;
    int                 arity;
    MR_bool             success;

    type_info = (MR_TypeInfo) TypeDesc;

        /*
        ** If type_info is an equivalence type, expand it.
        */
    MR_save_transient_registers();
    type_info = MR_collapse_equivalences(type_info);
    MR_restore_transient_registers();

        /*
        ** Get information for this functor number and store in construct_info.
        ** If this is a discriminated union type and if the functor number
        ** is in range, we succeed.
        */
    MR_save_transient_registers();
    success = MR_get_functors_check_range(FunctorNumber, type_info,
        &construct_info);
    MR_restore_transient_registers();

        /*
        ** Get the functor name and arity, construct the list
        ** of type_infos for arguments.
        */

    if (success) {
        MR_make_aligned_string(FunctorName, construct_info.functor_name);
        arity = construct_info.arity;
        Arity = arity;

        if (MR_TYPE_CTOR_INFO_IS_TUPLE(
            MR_TYPEINFO_GET_TYPE_CTOR_INFO(type_info)))
        {
            MR_save_transient_registers();
            PseudoTypeInfoList = MR_type_params_vector_to_list(Arity,
                MR_TYPEINFO_GET_VAR_ARITY_ARG_VECTOR(type_info));
            MR_restore_transient_registers();
        } else {
            MR_save_transient_registers();
            PseudoTypeInfoList =
                MR_pseudo_type_info_vector_to_pseudo_type_info_list(arity,
                    MR_TYPEINFO_GET_FIXED_ARITY_ARG_VECTOR(type_info),
                    construct_info.arg_pseudo_type_infos);
            MR_restore_transient_registers();
        }
    }
    SUCCESS_INDICATOR = success;
}
#line 1567 "construct.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__construct__FunctorName_3  = FunctorName;
	 *mercury__construct__Arity_4  = Arity;
	 *mercury__construct__PseudoTypeInfoList_5  = PseudoTypeInfoList;
#line 207 "construct.m"
	}
mercury__construct__succeeded  = SUCCESS_INDICATOR;
}
#line 203 "construct.m"
    return mercury__construct__succeeded;
#line 203 "construct.m"
  }
#line 180 "construct.m"
}

#line 120 "construct.m"
MR_Word MR_CALL 
mercury__construct__construct_tuple_1_f_0(
#line 120 "construct.m"
  MR_Word mercury__construct__Args_3)
#line 120 "construct.m"
{
#line 1069 "construct.m"
  {
#line 1069 "construct.m"
    MR_bool mercury__construct__succeeded;
#line 1069 "construct.m"
    MR_Word mercury__construct__HeadVar__2_2;
#line 1069 "construct.m"
    MR_Word mercury__construct__TypeCtorInfo_7_7 = (MR_Word) &mercury__univ__univ__type_ctor_info_univ_0;
#line 1069 "construct.m"
    MR_Word mercury__construct__V_4_4;
#line 1069 "construct.m"
    MR_Integer mercury__construct__V_6_6;

#line 1070 "construct.m"
    {
#line 1070 "construct.m"
      mercury__construct__V_4_4 = mercury__construct__map__ho6_2_f_in__list_0(mercury__construct__Args_3);
    }
#line 78 "list.opt"
    {
#line 78 "list.opt"
      mercury__list__length_2_3_p_0(mercury__construct__TypeCtorInfo_7_7, mercury__construct__Args_3, (MR_Integer) 0, &mercury__construct__V_6_6);
    }
#line 1069 "construct.m"
    {
#line 1069 "construct.m"
      return mercury__construct__HeadVar__2_2 = mercury__construct__construct_tuple_2_3_f_0(mercury__construct__Args_3, mercury__construct__V_4_4, mercury__construct__V_6_6);
    }
#line 1069 "construct.m"
    return mercury__construct__HeadVar__2_2;
#line 1069 "construct.m"
  }
#line 120 "construct.m"
}

#line 114 "construct.m"
MR_bool MR_CALL 
mercury__construct__construct_3_f_0(
#line 114 "construct.m"
  MR_Word mercury__construct__TypeDesc_1,
#line 114 "construct.m"
  MR_Integer mercury__construct__FunctorNumber_2,
#line 114 "construct.m"
  MR_Word mercury__construct__ArgList_3,
#line 114 "construct.m"
  MR_Word * mercury__construct__Term_4)
#line 114 "construct.m"
{
#line 558 "construct.m"
  {
#line 558 "construct.m"
    MR_bool mercury__construct__succeeded;

#line 561 "construct.m"
{
#define MR_PROC_LABEL mercury__construct__construct_3_f_0

	MR_Word TypeDesc;
	MR_Integer FunctorNumber;
	MR_Word ArgList;
	MR_Word Term;
	MR_bool SUCCESS_INDICATOR;

	TypeDesc =  mercury__construct__TypeDesc_1 ;
	FunctorNumber =  mercury__construct__FunctorNumber_2 ;
	ArgList =  mercury__construct__ArgList_3 ;
		{
#line 561 "construct.m"
{
    MR_TypeInfo         type_info;
    MR_TypeCtorInfo     type_ctor_info;
    MR_Word             new_data;
    MR_Construct_Info   construct_info;
    MR_bool             success;

    type_info = (MR_TypeInfo) TypeDesc;

    /* If type_info is an equivalence type, expand it. */
    MR_save_transient_registers();
    type_info = MR_collapse_equivalences(type_info);
    MR_restore_transient_registers();

    /* Check range of FunctorNum, get info for this functor. */
    MR_save_transient_registers();
    success =
        MR_get_functors_check_range(FunctorNumber, type_info, &construct_info)
        && MR_typecheck_arguments(type_info, construct_info.arity, ArgList,
            construct_info.arg_pseudo_type_infos);
    MR_restore_transient_registers();

    /* Build the new term in `new_data'. */
    if (success) {
        type_ctor_info = MR_TYPEINFO_GET_TYPE_CTOR_INFO(type_info);

        if (MR_type_ctor_rep(type_ctor_info) != construct_info.type_ctor_rep) {
            MR_fatal_error("construct.construct: type_ctor_rep mismatch");
        }

        switch (MR_type_ctor_rep(type_ctor_info)) {

        case MR_TYPECTOR_REP_ENUM:
        case MR_TYPECTOR_REP_ENUM_USEREQ:
            new_data = construct_info.functor_info.enum_functor_desc->
                MR_enum_functor_ordinal;
            break;
        
        case MR_TYPECTOR_REP_FOREIGN_ENUM:
        case MR_TYPECTOR_REP_FOREIGN_ENUM_USEREQ:
            new_data = construct_info.functor_info.foreign_enum_functor_desc->
                MR_foreign_enum_functor_value;
            break;

        case MR_TYPECTOR_REP_NOTAG:
        case MR_TYPECTOR_REP_NOTAG_USEREQ:
        case MR_TYPECTOR_REP_NOTAG_GROUND:
        case MR_TYPECTOR_REP_NOTAG_GROUND_USEREQ:
            if (MR_list_is_empty(ArgList)) {
                MR_fatal_error("notag arg list is empty");
            }

            if (! MR_list_is_empty(MR_list_tail(ArgList))) {
                MR_fatal_error("notag arg list is too long");
            }

            new_data = MR_field(MR_UNIV_TAG, MR_list_head(ArgList),
                MR_UNIV_OFFSET_FOR_DATA);
            break;

        case MR_TYPECTOR_REP_RESERVED_ADDR:
        case MR_TYPECTOR_REP_RESERVED_ADDR_USEREQ:
        /*
        ** First check whether the functor we want is one of the
        ** reserved addresses.
        */
        {
            int                                 i;
            MR_ReservedAddrTypeLayout           ra_layout;
            int                                 total_reserved_addrs;
            const MR_ReservedAddrFunctorDesc    *functor_desc;

            ra_layout = MR_type_ctor_layout(type_ctor_info).
                MR_layout_reserved_addr;
            total_reserved_addrs = ra_layout->MR_ra_num_res_numeric_addrs
                + ra_layout->MR_ra_num_res_symbolic_addrs;

            for (i = 0; i < total_reserved_addrs; i++) {
                functor_desc = ra_layout->MR_ra_constants[i];
                if (functor_desc->MR_ra_functor_ordinal == FunctorNumber) {
                    new_data = (MR_Word)
                    functor_desc->MR_ra_functor_reserved_addr;

                    /* `break' here would just exit the `for' loop */
                    goto end_of_main_switch;
                }
            }
        }

        /*
        ** Otherwise, it is not one of the reserved addresses,
        ** so handle it like a normal DU type.
        */

        /* fall through */

        case MR_TYPECTOR_REP_DU:
        case MR_TYPECTOR_REP_DU_USEREQ:
            {
                const MR_DuFunctorDesc  *functor_desc;
                const MR_DuArgLocn      *arg_locns;
                MR_Word                 arg_list;
                MR_Word                 ptag;
                MR_Word                 arity;
                MR_Word                 arg_data;
                MR_TypeInfo             arg_type_info;
                int                     args_size;
                int                     alloc_size;
                int                     size;
                int                     i;

                functor_desc = construct_info.functor_info.du_functor_desc;
                arg_locns = functor_desc->MR_du_functor_arg_locns;
                if (functor_desc->MR_du_functor_exist_info != NULL) {
                    MR_fatal_error("not yet implemented: construction "
                        "of terms containing existential types");
                }

                arg_list = ArgList;
                ptag = functor_desc->MR_du_functor_primary;
                switch (functor_desc->MR_du_functor_sectag_locn) {

                case MR_SECTAG_LOCAL:
                    new_data = (MR_Word) MR_mkword(ptag,
                        MR_mkbody((MR_Word)
                            functor_desc->MR_du_functor_secondary));
                    break;

                case MR_SECTAG_REMOTE:
                    arity = functor_desc->MR_du_functor_orig_arity;
                    args_size = MR_cell_size_for_args(arity, arg_locns);
                    alloc_size = MR_SIZE_SLOT_SIZE + 1 + args_size;

                    MR_tag_offset_incr_hp_msg(new_data, ptag,
                        MR_SIZE_SLOT_SIZE, alloc_size,
                        MR_ALLOC_ID, "<created by construct.construct/3>");

                    /*
                    ** Ensure words holding packed arguments are zeroed before
                    ** filling them in.
                    */
                  #ifndef MR_BOEHM_GC
                    if (arg_locns != NULL) {
                        MR_memset(new_data, 0, alloc_size * sizeof(MR_Word));
                    }
                  #endif

                    size = MR_cell_size(args_size);
                    MR_field(ptag, new_data, 0) =
                        functor_desc->MR_du_functor_secondary;
                    for (i = 0; i < arity; i++) {
                        arg_data = MR_field(MR_UNIV_TAG,
                            MR_list_head(arg_list),
                            MR_UNIV_OFFSET_FOR_DATA);
                        arg_type_info = (MR_TypeInfo) MR_field(MR_UNIV_TAG,
                            MR_list_head(arg_list),
                            MR_UNIV_OFFSET_FOR_TYPEINFO);
                        if (arg_locns == NULL) {
                            MR_field(ptag, new_data, 1 + i) = arg_data;
                        } else {
                            const MR_DuArgLocn *locn = &arg_locns[i];

                            if (locn->MR_arg_bits == -1) {
                              #ifdef MR_BOXED_FLOAT
                                MR_memcpy(
                                    &MR_field(ptag, new_data,
                                        1 + locn->MR_arg_offset),
                                    (MR_Word *) arg_data, sizeof(MR_Float));
                              #else
                                MR_fatal_error(
                                    "construct(): double precision float");
                              #endif
                            } else {
                                MR_field(ptag, new_data,
                                    1 + locn->MR_arg_offset)
                                    |= (arg_data << locn->MR_arg_shift);
                            }
                        }
                        size += MR_term_size(arg_type_info, arg_data);
                        arg_list = MR_list_tail(arg_list);
                    }

                    MR_define_size_slot(ptag, new_data, size);
                    break;

                case MR_SECTAG_NONE:
                    arity = functor_desc->MR_du_functor_orig_arity;
                    args_size = MR_cell_size_for_args(arity, arg_locns);
                    alloc_size = MR_SIZE_SLOT_SIZE + args_size;

                    MR_tag_offset_incr_hp_msg(new_data, ptag,
                        MR_SIZE_SLOT_SIZE, alloc_size,
                        MR_ALLOC_ID, "<created by construct.construct/3>");

                    /*
                    ** Ensure words holding packed arguments are zeroed before
                    ** filling them in.
                    */
                  #ifndef MR_BOEHM_GC
                    if (arg_locns != NULL) {
                        MR_memset(new_data, 0, alloc_size * sizeof(MR_Word));
                    }
                  #endif

                    size = MR_cell_size(args_size);
                    for (i = 0; i < arity; i++) {
                        arg_data = MR_field(MR_UNIV_TAG,
                            MR_list_head(arg_list),
                            MR_UNIV_OFFSET_FOR_DATA);
                        arg_type_info = (MR_TypeInfo) MR_field(MR_UNIV_TAG,
                            MR_list_head(arg_list),
                            MR_UNIV_OFFSET_FOR_TYPEINFO);
                        if (arg_locns == NULL) {
                            MR_field(ptag, new_data, i) = arg_data;
                        } else {
                            const MR_DuArgLocn *locn = &arg_locns[i];

                            if (locn->MR_arg_bits == -1) {
                              #ifdef MR_BOXED_FLOAT
                                MR_memcpy(&MR_field(ptag, new_data,
                                    locn->MR_arg_offset),
                                    (MR_Word *) arg_data, sizeof(MR_Float));
                              #else
                                MR_fatal_error(
                                    "construct(): double-precision float");
                              #endif
                            } else {
                                MR_field(ptag, new_data, locn->MR_arg_offset)
                                    |= (arg_data << locn->MR_arg_shift);
                            }
                        }
                        size += MR_term_size(arg_type_info, arg_data);
                        arg_list = MR_list_tail(arg_list);
                    }

                    MR_define_size_slot(ptag, new_data, size);
                    break;

                case MR_SECTAG_NONE_DIRECT_ARG:
                    arity = functor_desc->MR_du_functor_orig_arity;
                    if (arity != 1) {
                        MR_fatal_error(
                            "construct(): direct_arg_tag arity != 1");
                    }

                    arg_data = MR_field(MR_UNIV_TAG, MR_list_head(arg_list),
                        MR_UNIV_OFFSET_FOR_DATA);
                    new_data = (MR_Word) MR_mkword(MR_mktag(ptag), arg_data);
                    arg_list = MR_list_tail(arg_list);
                    break;

                case MR_SECTAG_VARIABLE:
                    new_data = (MR_Word) 0;     /* avoid a warning */
                    MR_fatal_error("construct(): cannot construct variable");

#ifdef MR_INCLUDE_SWITCH_DEFAULTS
                default:
                    new_data = (MR_Word) 0;     /* avoid a warning */
                    MR_fatal_error("construct(): unrecognised sectag locn");
#endif

                }

                if (! MR_list_is_empty(arg_list)) {
                    MR_fatal_error("excess arguments in construct.construct");
                }
            }
            break;

        case MR_TYPECTOR_REP_TUPLE:
            {
                int         arity;
                int         i;
                int         size;
                MR_Word     arg_list;
                MR_Word     arg_data;
                MR_TypeInfo arg_type_info;

                arity = MR_TYPEINFO_GET_VAR_ARITY_ARITY(type_info);

                if (arity == 0) {
                    new_data = (MR_Word) NULL;
                } else {
                    MR_offset_incr_hp_msg(new_data, MR_SIZE_SLOT_SIZE,
                        MR_SIZE_SLOT_SIZE + arity, MR_ALLOC_ID,
                        "<created by construct.construct/3>");

                    size = MR_cell_size(arity);
                    arg_list = ArgList;
                    for (i = 0; i < arity; i++) {
                        arg_data = MR_field(MR_UNIV_TAG,
                            MR_list_head(arg_list),
                            MR_UNIV_OFFSET_FOR_DATA);
                        arg_type_info = (MR_TypeInfo) MR_field(MR_UNIV_TAG,
                            MR_list_head(arg_list),
                            MR_UNIV_OFFSET_FOR_TYPEINFO);
                        MR_field(MR_mktag(0), new_data, i) = arg_data;
                        size += MR_term_size(arg_type_info, arg_data);
                        arg_list = MR_list_tail(arg_list);
                    }

                    MR_define_size_slot(MR_mktag(0), new_data, size);
                    if (! MR_list_is_empty(arg_list)) {
                        MR_fatal_error(
                            "excess arguments in construct.construct");
                    }
                }
            }
            break;

        case MR_TYPECTOR_REP_DUMMY:
            /*
            ** The value of the dummy type will never be looked at,
            ** so it doesn't matter what new_data is set to.
            */
            new_data = (MR_Word) 0;
            break;

        case MR_TYPECTOR_REP_INT:
            /* ints don't have functor ordinals. */
            MR_fatal_error(
                "cannot construct int with construct.construct");
            break;

        case MR_TYPECTOR_REP_FLOAT:
            /* floats don't have functor ordinals. */
            MR_fatal_error(
                "cannot construct floats with construct.construct");
            break;

        case MR_TYPECTOR_REP_CHAR:
            /* chars don't have functor ordinals. */
            MR_fatal_error(
                "cannot construct chars with construct.construct");
            break;

        case MR_TYPECTOR_REP_STRING:
            /* strings don't have functor ordinals. */
            MR_fatal_error(
                "cannot construct strings with construct.construct");
            break;

        case MR_TYPECTOR_REP_BITMAP:
            /* bitmaps don't have functor ordinals. */
            MR_fatal_error(
                "cannot construct bitmaps with construct.construct");
            break;

        case MR_TYPECTOR_REP_EQUIV:
        case MR_TYPECTOR_REP_EQUIV_GROUND:
            /* These should be eliminated by MR_collapse_equivalences above. */
            MR_fatal_error("equiv type in construct.construct");
            break;

        case MR_TYPECTOR_REP_VOID:
            MR_fatal_error(
                "cannot construct void values with construct.construct");
            break;

        case MR_TYPECTOR_REP_FUNC:
            MR_fatal_error(
                "cannot construct functions with construct.construct");
            break;

        case MR_TYPECTOR_REP_PRED:
            MR_fatal_error(
                "cannot construct predicates with construct.construct");
            break;

        case MR_TYPECTOR_REP_SUBGOAL:
            MR_fatal_error(
                "cannot construct subgoals with construct.construct");
            break;

        case MR_TYPECTOR_REP_TYPEDESC:
            MR_fatal_error(
                "cannot construct type_descs with construct.construct");
            break;

        case MR_TYPECTOR_REP_TYPECTORDESC:
            MR_fatal_error(
                "cannot construct type_descs with construct.construct");
            break;

        case MR_TYPECTOR_REP_PSEUDOTYPEDESC:
            MR_fatal_error(
                "cannot construct pseudotype_descs with construct.construct");
            break;

        case MR_TYPECTOR_REP_TYPEINFO:
            MR_fatal_error(
                "cannot construct type_infos with construct.construct");
            break;

        case MR_TYPECTOR_REP_TYPECTORINFO:
            MR_fatal_error(
                "cannot construct type_ctor_infos with construct.construct");
            break;

        case MR_TYPECTOR_REP_TYPECLASSINFO:
            MR_fatal_error(
                "cannot construct type_class_infos with construct.construct");
            break;

        case MR_TYPECTOR_REP_BASETYPECLASSINFO:
            MR_fatal_error(
                "cannot construct base_type_class_infos "
                "with construct.construct");
            break;

        case MR_TYPECTOR_REP_SUCCIP:
            MR_fatal_error(
                "cannot construct succips with construct.construct");
            break;

        case MR_TYPECTOR_REP_HP:
            MR_fatal_error(
                "cannot construct hps with construct.construct");
            break;

        case MR_TYPECTOR_REP_CURFR:
            MR_fatal_error(
                "cannot construct curfrs with construct.construct");
            break;

        case MR_TYPECTOR_REP_MAXFR:
            MR_fatal_error(
                "cannot construct maxfrs with construct.construct");
            break;

        case MR_TYPECTOR_REP_REDOFR:
            MR_fatal_error(
                "cannot construct redofrs with construct.construct");
            break;

        case MR_TYPECTOR_REP_REDOIP:
            MR_fatal_error(
                "cannot construct redoips with construct.construct");
            break;

        case MR_TYPECTOR_REP_TRAIL_PTR:
            MR_fatal_error(
                "cannot construct trail_ptrs with construct.construct");
            break;

        case MR_TYPECTOR_REP_TICKET:
            MR_fatal_error(
                "cannot construct tickets with construct.construct");
            break;

        case MR_TYPECTOR_REP_C_POINTER:
        case MR_TYPECTOR_REP_STABLE_C_POINTER:
            MR_fatal_error(
                "cannot construct c_pointers with construct.construct");
            break;

        case MR_TYPECTOR_REP_ARRAY:
            MR_fatal_error(
                "cannot construct arrays with construct.construct");
            break;

        case MR_TYPECTOR_REP_REFERENCE:
            MR_fatal_error(
                "cannot construct references with construct.construct");
            break;

        case MR_TYPECTOR_REP_FOREIGN:
        case MR_TYPECTOR_REP_STABLE_FOREIGN:
            MR_fatal_error(
                "cannot construct values of foreign types "
                "with construct.construct");
            break;

        case MR_TYPECTOR_REP_UNKNOWN:
            MR_fatal_error(
                "cannot construct values of unknown types "
                "with construct.construct");
            break;

#ifdef MR_INCLUDE_SWITCH_DEFAULTS

        default:
            new_data = (MR_Word) 0;     /* avoid a warning */
            MR_fatal_error("bad type_ctor_rep in construct.construct");

#endif
        }

    end_of_main_switch:

        /*
        ** Create a univ.
        */

        MR_new_univ_on_hp(Term, type_info, new_data);
    }

    SUCCESS_INDICATOR = success;
}
#line 2160 "construct.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__construct__Term_4  = Term;
#line 561 "construct.m"
	}
mercury__construct__succeeded  = SUCCESS_INDICATOR;
}
#line 558 "construct.m"
    return mercury__construct__succeeded;
#line 558 "construct.m"
  }
#line 114 "construct.m"
}

#line 101 "construct.m"
MR_bool MR_CALL 
mercury__construct__find_functor_5_p_0(
#line 101 "construct.m"
  MR_Word mercury__construct__Type_6,
#line 101 "construct.m"
  MR_String mercury__construct__Functor_7,
#line 101 "construct.m"
  MR_Integer mercury__construct__Arity_8,
#line 101 "construct.m"
  MR_Integer * mercury__construct__FunctorNumber_9,
#line 101 "construct.m"
  MR_Word * mercury__construct__ArgTypes_10)
#line 101 "construct.m"
{
#line 539 "construct.m"
  {
#line 539 "construct.m"
    MR_bool mercury__construct__succeeded;
#line 539 "construct.m"
    MR_Integer mercury__construct__N_11;

#line 155 "construct.m"
{
#define MR_PROC_LABEL mercury__construct__find_functor_5_p_0

	MR_Word TypeInfo;
	MR_Integer Functors;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo =  mercury__construct__Type_6 ;
		{
#line 155 "construct.m"
{
    MR_save_transient_registers();
    Functors = MR_get_num_functors((MR_TypeInfo) TypeInfo);
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = (Functors >= 0);
}
#line 2216 "construct.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__construct__N_11  = Functors;
#line 155 "construct.m"
	}
mercury__construct__succeeded  = SUCCESS_INDICATOR;
}
#line 539 "construct.m"
    if (mercury__construct__succeeded)
#line 541 "construct.m"
      {
#line 541 "construct.m"
        return mercury__construct__succeeded = mercury__construct__find_functor_2_6_p_0(mercury__construct__Type_6, mercury__construct__Functor_7, mercury__construct__Arity_8, mercury__construct__N_11, mercury__construct__FunctorNumber_9, mercury__construct__ArgTypes_10);
      }
#line 539 "construct.m"
    return mercury__construct__succeeded;
#line 539 "construct.m"
  }
#line 101 "construct.m"
}

#line 92 "construct.m"
MR_bool MR_CALL 
mercury__construct__get_functor_lex_2_f_0(
#line 92 "construct.m"
  MR_Word mercury__construct__TypeDesc_1,
#line 92 "construct.m"
  MR_Integer mercury__construct__Ordinal_2,
#line 92 "construct.m"
  MR_Integer * mercury__construct__FunctorNumber_3)
#line 92 "construct.m"
{
#line 506 "construct.m"
  {
#line 506 "construct.m"
    MR_bool mercury__construct__succeeded;

#line 509 "construct.m"
{
#define MR_PROC_LABEL mercury__construct__get_functor_lex_2_f_0

	MR_Word TypeDesc;
	MR_Integer Ordinal;
	MR_Integer FunctorNumber;
	MR_bool SUCCESS_INDICATOR;

	TypeDesc =  mercury__construct__TypeDesc_1 ;
	Ordinal =  mercury__construct__Ordinal_2 ;
		{
#line 509 "construct.m"
{
    MR_TypeInfo         type_info;
    MR_TypeCtorInfo     type_ctor_info;
    MR_Construct_Info   construct_info;
    MR_bool             success;
    int                 num_functors;

    type_info = (MR_TypeInfo) TypeDesc;

    /*
    ** Get information for this functor number and store in construct_info.
    ** If this is a discriminated union type and if the functor number is
    ** in range, we succeed.
    */
    MR_save_transient_registers();
    type_info = MR_collapse_equivalences(type_info);
    num_functors = MR_get_num_functors(type_info);
    MR_restore_transient_registers();
    type_ctor_info = MR_TYPEINFO_GET_TYPE_CTOR_INFO(type_info);
    if (Ordinal < 0 || Ordinal >= num_functors
            || !type_ctor_info->MR_type_ctor_functor_number_map)
    {
        SUCCESS_INDICATOR = MR_FALSE; 
    } else {
        FunctorNumber =
            type_ctor_info->MR_type_ctor_functor_number_map[Ordinal];
        SUCCESS_INDICATOR = MR_TRUE; 
    }
}
#line 2298 "construct.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__construct__FunctorNumber_3  = FunctorNumber;
#line 509 "construct.m"
	}
mercury__construct__succeeded  = SUCCESS_INDICATOR;
}
#line 506 "construct.m"
    return mercury__construct__succeeded;
#line 506 "construct.m"
  }
#line 92 "construct.m"
}

#line 82 "construct.m"
MR_bool MR_CALL 
mercury__construct__get_functor_ordinal_3_p_0(
#line 82 "construct.m"
  MR_Word mercury__construct__TypeDesc_1,
#line 82 "construct.m"
  MR_Integer mercury__construct__FunctorNumber_2,
#line 82 "construct.m"
  MR_Integer * mercury__construct__Ordinal_3)
#line 82 "construct.m"
{
#line 404 "construct.m"
  {
#line 404 "construct.m"
    MR_bool mercury__construct__succeeded;

#line 407 "construct.m"
{
#define MR_PROC_LABEL mercury__construct__get_functor_ordinal_3_p_0

	MR_Word TypeDesc;
	MR_Integer FunctorNumber;
	MR_Integer Ordinal;
	MR_bool SUCCESS_INDICATOR;

	TypeDesc =  mercury__construct__TypeDesc_1 ;
	FunctorNumber =  mercury__construct__FunctorNumber_2 ;
		{
#line 407 "construct.m"
{
    MR_TypeInfo         type_info;
    MR_Construct_Info   construct_info;
    MR_bool             success;

    type_info = (MR_TypeInfo) TypeDesc;

    /*
    ** Get information for this functor number and store in construct_info.
    ** If this is a discriminated union type and if the functor number is
    ** in range, we succeed.
    */
    MR_save_transient_registers();
    success = MR_get_functors_check_range(FunctorNumber, type_info,
        &construct_info);
    MR_restore_transient_registers();

    if (success) {
        switch (construct_info.type_ctor_rep) {

        case MR_TYPECTOR_REP_ENUM:
        case MR_TYPECTOR_REP_ENUM_USEREQ:
            Ordinal = construct_info.functor_info.
                enum_functor_desc->MR_enum_functor_ordinal;
            break;
        
        case MR_TYPECTOR_REP_FOREIGN_ENUM:
        case MR_TYPECTOR_REP_FOREIGN_ENUM_USEREQ:
            Ordinal = construct_info.functor_info.
                foreign_enum_functor_desc->MR_foreign_enum_functor_ordinal;
            break;

        case MR_TYPECTOR_REP_DUMMY:
        case MR_TYPECTOR_REP_NOTAG:
        case MR_TYPECTOR_REP_NOTAG_USEREQ:
        case MR_TYPECTOR_REP_NOTAG_GROUND:
        case MR_TYPECTOR_REP_NOTAG_GROUND_USEREQ:
        case MR_TYPECTOR_REP_TUPLE:
            Ordinal = 0;
            break;

        case MR_TYPECTOR_REP_DU:
        case MR_TYPECTOR_REP_DU_USEREQ:
        case MR_TYPECTOR_REP_RESERVED_ADDR:
        case MR_TYPECTOR_REP_RESERVED_ADDR_USEREQ:
            Ordinal = construct_info.functor_info.
                du_functor_desc->MR_du_functor_ordinal;
            break;

        case MR_TYPECTOR_REP_EQUIV:
        case MR_TYPECTOR_REP_EQUIV_GROUND:
        case MR_TYPECTOR_REP_FUNC:
        case MR_TYPECTOR_REP_PRED:
        case MR_TYPECTOR_REP_INT:
        case MR_TYPECTOR_REP_FLOAT:
        case MR_TYPECTOR_REP_CHAR:
        case MR_TYPECTOR_REP_STRING:
        case MR_TYPECTOR_REP_BITMAP:
        case MR_TYPECTOR_REP_SUBGOAL:
        case MR_TYPECTOR_REP_VOID:
        case MR_TYPECTOR_REP_C_POINTER:
        case MR_TYPECTOR_REP_STABLE_C_POINTER:
        case MR_TYPECTOR_REP_TYPEINFO:
        case MR_TYPECTOR_REP_TYPECTORINFO:
        case MR_TYPECTOR_REP_TYPECLASSINFO:
        case MR_TYPECTOR_REP_BASETYPECLASSINFO:
        case MR_TYPECTOR_REP_TYPEDESC:
        case MR_TYPECTOR_REP_TYPECTORDESC:
        case MR_TYPECTOR_REP_PSEUDOTYPEDESC:
        case MR_TYPECTOR_REP_ARRAY:
        case MR_TYPECTOR_REP_REFERENCE:
        case MR_TYPECTOR_REP_SUCCIP:
        case MR_TYPECTOR_REP_HP:
        case MR_TYPECTOR_REP_CURFR:
        case MR_TYPECTOR_REP_MAXFR:
        case MR_TYPECTOR_REP_REDOFR:
        case MR_TYPECTOR_REP_REDOIP:
        case MR_TYPECTOR_REP_TRAIL_PTR:
        case MR_TYPECTOR_REP_TICKET:
        case MR_TYPECTOR_REP_FOREIGN:
        case MR_TYPECTOR_REP_STABLE_FOREIGN:
        case MR_TYPECTOR_REP_UNKNOWN:
            success = MR_FALSE;

        }
    }
    SUCCESS_INDICATOR = success;
}
#line 2432 "construct.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__construct__Ordinal_3  = Ordinal;
#line 407 "construct.m"
	}
mercury__construct__succeeded  = SUCCESS_INDICATOR;
}
#line 404 "construct.m"
    return mercury__construct__succeeded;
#line 404 "construct.m"
  }
#line 82 "construct.m"
}

#line 80 "construct.m"
MR_bool MR_CALL 
mercury__construct__get_functor_ordinal_2_f_0(
#line 80 "construct.m"
  MR_Word mercury__construct__TypeDesc_4,
#line 80 "construct.m"
  MR_Integer mercury__construct__FunctorNumber_5,
#line 80 "construct.m"
  MR_Integer * mercury__construct__Ordinal_6)
#line 80 "construct.m"
{
#line 404 "construct.m"
  {
#line 404 "construct.m"
    MR_bool mercury__construct__succeeded;

#line 407 "construct.m"
{
#define MR_PROC_LABEL mercury__construct__get_functor_ordinal_2_f_0

	MR_Word TypeDesc;
	MR_Integer FunctorNumber;
	MR_Integer Ordinal;
	MR_bool SUCCESS_INDICATOR;

	TypeDesc =  mercury__construct__TypeDesc_4 ;
	FunctorNumber =  mercury__construct__FunctorNumber_5 ;
		{
#line 407 "construct.m"
{
    MR_TypeInfo         type_info;
    MR_Construct_Info   construct_info;
    MR_bool             success;

    type_info = (MR_TypeInfo) TypeDesc;

    /*
    ** Get information for this functor number and store in construct_info.
    ** If this is a discriminated union type and if the functor number is
    ** in range, we succeed.
    */
    MR_save_transient_registers();
    success = MR_get_functors_check_range(FunctorNumber, type_info,
        &construct_info);
    MR_restore_transient_registers();

    if (success) {
        switch (construct_info.type_ctor_rep) {

        case MR_TYPECTOR_REP_ENUM:
        case MR_TYPECTOR_REP_ENUM_USEREQ:
            Ordinal = construct_info.functor_info.
                enum_functor_desc->MR_enum_functor_ordinal;
            break;
        
        case MR_TYPECTOR_REP_FOREIGN_ENUM:
        case MR_TYPECTOR_REP_FOREIGN_ENUM_USEREQ:
            Ordinal = construct_info.functor_info.
                foreign_enum_functor_desc->MR_foreign_enum_functor_ordinal;
            break;

        case MR_TYPECTOR_REP_DUMMY:
        case MR_TYPECTOR_REP_NOTAG:
        case MR_TYPECTOR_REP_NOTAG_USEREQ:
        case MR_TYPECTOR_REP_NOTAG_GROUND:
        case MR_TYPECTOR_REP_NOTAG_GROUND_USEREQ:
        case MR_TYPECTOR_REP_TUPLE:
            Ordinal = 0;
            break;

        case MR_TYPECTOR_REP_DU:
        case MR_TYPECTOR_REP_DU_USEREQ:
        case MR_TYPECTOR_REP_RESERVED_ADDR:
        case MR_TYPECTOR_REP_RESERVED_ADDR_USEREQ:
            Ordinal = construct_info.functor_info.
                du_functor_desc->MR_du_functor_ordinal;
            break;

        case MR_TYPECTOR_REP_EQUIV:
        case MR_TYPECTOR_REP_EQUIV_GROUND:
        case MR_TYPECTOR_REP_FUNC:
        case MR_TYPECTOR_REP_PRED:
        case MR_TYPECTOR_REP_INT:
        case MR_TYPECTOR_REP_FLOAT:
        case MR_TYPECTOR_REP_CHAR:
        case MR_TYPECTOR_REP_STRING:
        case MR_TYPECTOR_REP_BITMAP:
        case MR_TYPECTOR_REP_SUBGOAL:
        case MR_TYPECTOR_REP_VOID:
        case MR_TYPECTOR_REP_C_POINTER:
        case MR_TYPECTOR_REP_STABLE_C_POINTER:
        case MR_TYPECTOR_REP_TYPEINFO:
        case MR_TYPECTOR_REP_TYPECTORINFO:
        case MR_TYPECTOR_REP_TYPECLASSINFO:
        case MR_TYPECTOR_REP_BASETYPECLASSINFO:
        case MR_TYPECTOR_REP_TYPEDESC:
        case MR_TYPECTOR_REP_TYPECTORDESC:
        case MR_TYPECTOR_REP_PSEUDOTYPEDESC:
        case MR_TYPECTOR_REP_ARRAY:
        case MR_TYPECTOR_REP_REFERENCE:
        case MR_TYPECTOR_REP_SUCCIP:
        case MR_TYPECTOR_REP_HP:
        case MR_TYPECTOR_REP_CURFR:
        case MR_TYPECTOR_REP_MAXFR:
        case MR_TYPECTOR_REP_REDOFR:
        case MR_TYPECTOR_REP_REDOIP:
        case MR_TYPECTOR_REP_TRAIL_PTR:
        case MR_TYPECTOR_REP_TICKET:
        case MR_TYPECTOR_REP_FOREIGN:
        case MR_TYPECTOR_REP_STABLE_FOREIGN:
        case MR_TYPECTOR_REP_UNKNOWN:
            success = MR_FALSE;

        }
    }
    SUCCESS_INDICATOR = success;
}
#line 2566 "construct.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__construct__Ordinal_6  = Ordinal;
#line 407 "construct.m"
	}
mercury__construct__succeeded  = SUCCESS_INDICATOR;
}
#line 404 "construct.m"
    return mercury__construct__succeeded;
#line 404 "construct.m"
  }
#line 80 "construct.m"
}

#line 69 "construct.m"
MR_bool MR_CALL 
mercury__construct__get_functor_with_names_6_p_0(
#line 69 "construct.m"
  MR_Word mercury__construct__TypeDesc_7,
#line 69 "construct.m"
  MR_Integer mercury__construct__I_8,
#line 69 "construct.m"
  MR_String * mercury__construct__Functor_9,
#line 69 "construct.m"
  MR_Integer * mercury__construct__Arity_10,
#line 69 "construct.m"
  MR_Word * mercury__construct__PseudoTypeInfoList_11,
#line 69 "construct.m"
  MR_Word * mercury__construct__ArgNameList_12)
#line 69 "construct.m"
{
#line 175 "construct.m"
  {
#line 175 "construct.m"
    MR_bool mercury__construct__succeeded;
#line 175 "construct.m"
    MR_Word mercury__construct__ArgNameList0_13;

#line 176 "construct.m"
    {
#line 176 "construct.m"
      mercury__construct__succeeded = mercury__construct__get_functor_with_names_internal_6_p_0(mercury__construct__TypeDesc_7, mercury__construct__I_8, mercury__construct__Functor_9, mercury__construct__Arity_10, mercury__construct__PseudoTypeInfoList_11, &mercury__construct__ArgNameList0_13);
    }
#line 175 "construct.m"
    if (mercury__construct__succeeded)
#line 175 "construct.m"
      {
#line 178 "construct.m"
        {
#line 178 "construct.m"
          *mercury__construct__ArgNameList_12 = mercury__construct__map__ho7_2_f_in__list_0(mercury__construct__ArgNameList0_13);
        }
#line 178 "construct.m"
        mercury__construct__succeeded = MR_TRUE;
#line 175 "construct.m"
      }
#line 175 "construct.m"
    return mercury__construct__succeeded;
#line 175 "construct.m"
  }
#line 69 "construct.m"
}

#line 57 "construct.m"
MR_bool MR_CALL 
mercury__construct__get_functor_5_p_0(
#line 57 "construct.m"
  MR_Word mercury__construct__TypeDesc_6,
#line 57 "construct.m"
  MR_Integer mercury__construct__FunctorNumber_7,
#line 57 "construct.m"
  MR_String * mercury__construct__FunctorName_8,
#line 57 "construct.m"
  MR_Integer * mercury__construct__Arity_9,
#line 57 "construct.m"
  MR_Word * mercury__construct__PseudoTypeInfoList_10)
#line 57 "construct.m"
{
#line 171 "construct.m"
  {
#line 171 "construct.m"
    MR_bool mercury__construct__succeeded;

#line 171 "construct.m"
    {
#line 171 "construct.m"
      return mercury__construct__succeeded = mercury__construct__get_functor_internal_5_p_0(mercury__construct__TypeDesc_6, mercury__construct__FunctorNumber_7, mercury__construct__FunctorName_8, mercury__construct__Arity_9, mercury__construct__PseudoTypeInfoList_10);
    }
#line 171 "construct.m"
    return mercury__construct__succeeded;
#line 171 "construct.m"
  }
#line 57 "construct.m"
}

#line 47 "construct.m"
MR_Integer MR_CALL 
mercury__construct__det_num_functors_1_f_0(
#line 47 "construct.m"
  MR_Word mercury__construct__TypeInfo_3)
#line 47 "construct.m"
{
#line 145 "construct.m"
  {
#line 145 "construct.m"
    MR_bool mercury__construct__succeeded;
#line 145 "construct.m"
    MR_Integer mercury__construct__HeadVar__2_2;
#line 145 "construct.m"
    MR_Integer mercury__construct__N_4;

#line 155 "construct.m"
{
#define MR_PROC_LABEL mercury__construct__det_num_functors_1_f_0

	MR_Word TypeInfo;
	MR_Integer Functors;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo =  mercury__construct__TypeInfo_3 ;
		{
#line 155 "construct.m"
{
    MR_save_transient_registers();
    Functors = MR_get_num_functors((MR_TypeInfo) TypeInfo);
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = (Functors >= 0);
}
#line 2697 "construct.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__construct__N_4  = Functors;
#line 155 "construct.m"
	}
mercury__construct__succeeded  = SUCCESS_INDICATOR;
}
#line 145 "construct.m"
    if (mercury__construct__succeeded)
#line 145 "construct.m"
      mercury__construct__HeadVar__2_2 = mercury__construct__N_4;
#line 145 "construct.m"
    else
#line 148 "construct.m"
      {
#line 148 "construct.m"
        MR_Word mercury__construct__TypeCtorInfo_6_6 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 145 "construct.m"
        MR_Box mercury__construct__conv0_HeadVar__2_2;

#line 145 "construct.m"
        {
#line 145 "construct.m"
          mercury__construct__conv0_HeadVar__2_2 = mercury__require__func_error_1_f_0(mercury__construct__TypeCtorInfo_6_6, (MR_String) "construct.det_num_functors: type does not have functors");
        }
#line 145 "construct.m"
        mercury__construct__HeadVar__2_2 = ((MR_Integer) mercury__construct__conv0_HeadVar__2_2);
#line 148 "construct.m"
      }
#line 145 "construct.m"
    return mercury__construct__HeadVar__2_2;
#line 145 "construct.m"
  }
#line 47 "construct.m"
}

#line 45 "construct.m"
MR_bool MR_CALL 
mercury__construct__num_functors_1_f_0(
#line 45 "construct.m"
  MR_Word mercury__construct__TypeInfo_1,
#line 45 "construct.m"
  MR_Integer * mercury__construct__Functors_2)
#line 45 "construct.m"
{
#line 152 "construct.m"
  {
#line 152 "construct.m"
    MR_bool mercury__construct__succeeded;

#line 155 "construct.m"
{
#define MR_PROC_LABEL mercury__construct__num_functors_1_f_0

	MR_Word TypeInfo;
	MR_Integer Functors;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo =  mercury__construct__TypeInfo_1 ;
		{
#line 155 "construct.m"
{
    MR_save_transient_registers();
    Functors = MR_get_num_functors((MR_TypeInfo) TypeInfo);
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = (Functors >= 0);
}
#line 2767 "construct.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__construct__Functors_2  = Functors;
#line 155 "construct.m"
	}
mercury__construct__succeeded  = SUCCESS_INDICATOR;
}
#line 152 "construct.m"
    return mercury__construct__succeeded;
#line 152 "construct.m"
  }
#line 45 "construct.m"
}

void mercury__construct__init(void)
{
}

void mercury__construct__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__construct__construct__type_ctor_info_functor_number_lex_0);
	MR_register_type_ctor_info(&mercury__construct__construct__type_ctor_info_functor_number_ordinal_0);
}

void mercury__construct__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module construct. */
