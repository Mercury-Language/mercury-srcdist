/*
** Automatically generated from `char.m'
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


/* :- module char. */
/* :- implementation. */

/*
INIT mercury__char__init
ENDINIT
*/

#include "char.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "benchmarking.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
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




#line 85 "char.c"
static MR_bool MR_CALL 
mercury__char____Unify____char_0_0_10001(
#line 88 "char.c"
  MR_Box mercury__char__wrapper_arg_1,
#line 90 "char.c"
  MR_Box mercury__char__wrapper_arg_2);

#line 93 "char.c"
static void MR_CALL 
mercury__char____Compare____char_0_0_10001(
#line 96 "char.c"
  MR_Box * mercury__char__wrapper_arg_1,
#line 98 "char.c"
  MR_Box mercury__char__wrapper_arg_2,
#line 100 "char.c"
  MR_Box mercury__char__wrapper_arg_3);

#line 103 "char.c"
static MR_Box MR_CALL 
mercury__char__ClassMethod_for_enum__enum____character__arity0______enum__to_int_1_1_f_0_10001(
#line 106 "char.c"
  MR_Box mercury__char__closure_arg,
#line 108 "char.c"
  MR_Box mercury__char__wrapper_arg_1);

#line 111 "char.c"
static MR_bool MR_CALL 
mercury__char__ClassMethod_for_enum__enum____character__arity0______enum__from_int_1_1_f_0_10001(
#line 114 "char.c"
  MR_Box mercury__char__closure_arg,
#line 116 "char.c"
  MR_Box mercury__char__wrapper_arg_1,
#line 118 "char.c"
  MR_Box * mercury__char__wrapper_arg_2);

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__char__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);


static /* final */ const MR_Box mercury__char_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__char_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__char_scalar_common_3[2][5];




static /* final */ const MR_Box mercury__char_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__char_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__char_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__char_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__char_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__char_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



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



#line 479 "char.c"
const MR_TypeCtorInfo_Struct mercury__char__char__type_ctor_info_char_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__char____Unify____char_0_0_10001)),
  ((MR_Box) (mercury__char____Compare____char_0_0_10001)),
  (MR_String) "char",
  (MR_String) "char",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_character_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 500 "char.c"
const MR_BaseTypeclassInfo base_typeclass_info_enum__enum__arity1__character__arity0__[7] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (mercury__char__ClassMethod_for_enum__enum____character__arity0______enum__to_int_1_1_f_0_10001)),
  ((MR_Box) (mercury__char__ClassMethod_for_enum__enum____character__arity0______enum__from_int_1_1_f_0_10001))
};

#line 511 "char.c"
static MR_bool MR_CALL 
mercury__char____Unify____char_0_0_10001(
#line 514 "char.c"
  MR_Box mercury__char__wrapper_arg_1,
#line 516 "char.c"
  MR_Box mercury__char__wrapper_arg_2)
#line 518 "char.c"
{
#line 520 "char.c"
  {
#line 522 "char.c"
    MR_bool mercury__char__succeeded;

#line 525 "char.c"
    {
#line 527 "char.c"
      mercury__char__succeeded = mercury__char____Unify____char_0_0(((MR_Char) (MR_Word) mercury__char__wrapper_arg_1), ((MR_Char) (MR_Word) mercury__char__wrapper_arg_2));
    }
#line 530 "char.c"
    return mercury__char__succeeded;
#line 532 "char.c"
  }
#line 534 "char.c"
}

#line 537 "char.c"
static void MR_CALL 
mercury__char____Compare____char_0_0_10001(
#line 540 "char.c"
  MR_Box * mercury__char__wrapper_arg_1,
#line 542 "char.c"
  MR_Box mercury__char__wrapper_arg_2,
#line 544 "char.c"
  MR_Box mercury__char__wrapper_arg_3)
#line 546 "char.c"
{
#line 548 "char.c"
  {
#line 550 "char.c"
    MR_Word mercury__char__conv0_HeadVar__1_1;

#line 553 "char.c"
    {
#line 555 "char.c"
      mercury__char____Compare____char_0_0(&mercury__char__conv0_HeadVar__1_1, ((MR_Char) (MR_Word) mercury__char__wrapper_arg_2), ((MR_Char) (MR_Word) mercury__char__wrapper_arg_3));
    }
#line 558 "char.c"
    *mercury__char__wrapper_arg_1 = ((MR_Box) (mercury__char__conv0_HeadVar__1_1));
#line 560 "char.c"
  }
#line 562 "char.c"
}

#line 565 "char.c"
static MR_Box MR_CALL 
mercury__char__ClassMethod_for_enum__enum____character__arity0______enum__to_int_1_1_f_0_10001(
#line 568 "char.c"
  MR_Box mercury__char__closure_arg,
#line 570 "char.c"
  MR_Box mercury__char__wrapper_arg_1)
#line 572 "char.c"
{
#line 574 "char.c"
  {
#line 576 "char.c"
    MR_Box mercury__char__wrapper_arg_2;
#line 578 "char.c"
    MR_Box mercury__char__closure;
#line 580 "char.c"
    MR_Integer mercury__char__conv0_Y_4;

#line 583 "char.c"
    mercury__char__closure = mercury__char__closure_arg;
#line 585 "char.c"
    {
#line 587 "char.c"
      mercury__char__conv0_Y_4 = mercury__char__ClassMethod_for_enum__enum____character__arity0______enum__to_int_1_1_f_0(((MR_Char) (MR_Word) mercury__char__wrapper_arg_1));
    }
#line 590 "char.c"
    mercury__char__wrapper_arg_2 = ((MR_Box) (mercury__char__conv0_Y_4));
#line 592 "char.c"
    return mercury__char__wrapper_arg_2;
#line 594 "char.c"
  }
#line 596 "char.c"
}

#line 599 "char.c"
static MR_bool MR_CALL 
mercury__char__ClassMethod_for_enum__enum____character__arity0______enum__from_int_1_1_f_0_10001(
#line 602 "char.c"
  MR_Box mercury__char__closure_arg,
#line 604 "char.c"
  MR_Box mercury__char__wrapper_arg_1,
#line 606 "char.c"
  MR_Box * mercury__char__wrapper_arg_2)
#line 608 "char.c"
{
#line 610 "char.c"
  {
#line 612 "char.c"
    MR_bool mercury__char__succeeded;
#line 614 "char.c"
    MR_Box mercury__char__closure;
#line 616 "char.c"
    MR_Char mercury__char__conv0_Y_4;

#line 619 "char.c"
    mercury__char__closure = mercury__char__closure_arg;
#line 621 "char.c"
    {
#line 623 "char.c"
      mercury__char__succeeded = mercury__char__ClassMethod_for_enum__enum____character__arity0______enum__from_int_1_1_f_0(((MR_Integer) mercury__char__wrapper_arg_1), &mercury__char__conv0_Y_4);
    }
#line 626 "char.c"
    if (mercury__char__succeeded)
#line 628 "char.c"
      {
#line 630 "char.c"
        *mercury__char__wrapper_arg_2 = ((MR_Box) (MR_Word) (mercury__char__conv0_Y_4));
#line 632 "char.c"
        mercury__char__succeeded = MR_TRUE;
#line 634 "char.c"
      }
#line 636 "char.c"
    return mercury__char__succeeded;
#line 638 "char.c"
  }
#line 640 "char.c"
}

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__char__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 13 "ops.opt"
{
#line 38 "ops.opt"
  {
#line 38 "ops.opt"
    MR_bool mercury__char__succeeded;

#line 38 "ops.opt"
    return (MR_Integer) 1200;
#line 38 "ops.opt"
  }
#line 13 "ops.opt"
}

#line 221 "char.m"
MR_bool MR_CALL 
mercury__char__ClassMethod_for_enum__enum____character__arity0______enum__from_int_1_1_f_0(
#line 221 "char.m"
  MR_Integer mercury__char__X_3,
#line 221 "char.m"
  MR_Char * mercury__char__Y_4)
#line 221 "char.m"
{
#line 556 "char.m"
  {
#line 556 "char.m"
    MR_bool mercury__char__succeeded;

#line 560 "char.m"
{
#define MR_PROC_LABEL mercury__char__ClassMethod_for_enum__enum____character__arity0______enum__from_int_1_1_f_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int =  mercury__char__X_3 ;
		{
#line 560 "char.m"

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);

#line 689 "char.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__char__Y_4  = Character;
#line 560 "char.m"
	}
mercury__char__succeeded  = SUCCESS_INDICATOR;
}
#line 556 "char.m"
    return mercury__char__succeeded;
#line 556 "char.m"
  }
#line 221 "char.m"
}

#line 220 "char.m"
MR_Integer MR_CALL 
mercury__char__ClassMethod_for_enum__enum____character__arity0______enum__to_int_1_1_f_0(
#line 220 "char.m"
  MR_Char mercury__char__X_3)
#line 220 "char.m"
{
#line 537 "char.m"
  {
#line 537 "char.m"
    MR_bool mercury__char__succeeded;
#line 537 "char.m"
    MR_Integer mercury__char__Y_4;

#line 541 "char.m"
{
#define MR_PROC_LABEL mercury__char__ClassMethod_for_enum__enum____character__arity0______enum__to_int_1_1_f_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__char__X_3 ;
		{
#line 541 "char.m"

    Int = (MR_UnsignedChar) Character;

#line 733 "char.c"

		;}
#undef MR_PROC_LABEL
	 mercury__char__Y_4  = Int;
#line 541 "char.m"
}
#line 537 "char.m"
    return mercury__char__Y_4;
#line 537 "char.m"
  }
#line 220 "char.m"
}

#line 36 "char.m"
void MR_CALL 
mercury__char____Compare____char_0_0(
#line 36 "char.m"
  MR_Word * mercury__char__HeadVar__1_1,
#line 36 "char.m"
  MR_Char mercury__char__HeadVar__2_2,
#line 36 "char.m"
  MR_Char mercury__char__HeadVar__3_3)
#line 36 "char.m"
{
#line 36 "char.m"
  {
#line 36 "char.m"
    MR_bool mercury__char__succeeded;
#line 36 "char.m"
    MR_Char mercury__char__Cast_HeadVar1_4 = mercury__char__HeadVar__2_2;
#line 36 "char.m"
    MR_Char mercury__char__Cast_HeadVar2_5 = mercury__char__HeadVar__3_3;
#line 36 "char.m"
    MR_Integer mercury__char__XI_7_10;
#line 36 "char.m"
    MR_Integer mercury__char__YI_8_11;

#line 541 "char.m"
{
#define MR_PROC_LABEL mercury__char____Compare____char_0_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__char__Cast_HeadVar1_4 ;
		{
#line 541 "char.m"

    Int = (MR_UnsignedChar) Character;

#line 784 "char.c"

		;}
#undef MR_PROC_LABEL
	 mercury__char__XI_7_10  = Int;
#line 541 "char.m"
}
#line 541 "char.m"
{
#define MR_PROC_LABEL mercury__char____Compare____char_0_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__char__Cast_HeadVar2_5 ;
		{
#line 541 "char.m"

    Int = (MR_UnsignedChar) Character;

#line 804 "char.c"

		;}
#undef MR_PROC_LABEL
	 mercury__char__YI_8_11  = Int;
#line 541 "char.m"
}
#line 84 "private_builtin.opt"
    mercury__char__succeeded = (mercury__char__XI_7_10 < mercury__char__YI_8_11);
#line 87 "private_builtin.opt"
    if (mercury__char__succeeded)
#line 86 "private_builtin.opt"
      *mercury__char__HeadVar__1_1 = (MR_Integer) 1;
#line 87 "private_builtin.opt"
    else
#line 92 "private_builtin.opt"
      {
#line 89 "private_builtin.opt"
        mercury__char__succeeded = (mercury__char__XI_7_10 == mercury__char__YI_8_11);
#line 92 "private_builtin.opt"
        if (mercury__char__succeeded)
#line 91 "private_builtin.opt"
          *mercury__char__HeadVar__1_1 = (MR_Integer) 0;
#line 92 "private_builtin.opt"
        else
#line 93 "private_builtin.opt"
          *mercury__char__HeadVar__1_1 = (MR_Integer) 2;
#line 92 "private_builtin.opt"
      }
#line 36 "char.m"
  }
#line 36 "char.m"
}

#line 36 "char.m"
MR_bool MR_CALL 
mercury__char____Unify____char_0_0(
#line 36 "char.m"
  MR_Char mercury__char__HeadVar__1_1,
#line 36 "char.m"
  MR_Char mercury__char__HeadVar__2_2)
#line 36 "char.m"
{
#line 36 "char.m"
  {
#line 36 "char.m"
    MR_bool mercury__char__succeeded;
#line 36 "char.m"
    MR_Char mercury__char__Cast_HeadVar1_3 = mercury__char__HeadVar__1_1;
#line 36 "char.m"
    MR_Char mercury__char__Cast_HeadVar2_4 = mercury__char__HeadVar__2_2;

#line 36 "char.m"
    mercury__char__succeeded = (mercury__char__Cast_HeadVar1_3 == mercury__char__Cast_HeadVar2_4);
#line 36 "char.m"
    return mercury__char__succeeded;
#line 36 "char.m"
  }
#line 36 "char.m"
}

#line 208 "char.m"
MR_bool MR_CALL 
mercury__char__is_noncharacter_1_p_0(
#line 208 "char.m"
  MR_Char mercury__char__Char_2)
#line 208 "char.m"
{
#line 719 "char.m"
  {
#line 719 "char.m"
    MR_bool mercury__char__succeeded;
#line 719 "char.m"
    MR_Integer mercury__char__Int_3;

#line 541 "char.m"
{
#define MR_PROC_LABEL mercury__char__is_noncharacter_1_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__char__Char_2 ;
		{
#line 541 "char.m"

    Int = (MR_UnsignedChar) Character;

#line 892 "char.c"

		;}
#undef MR_PROC_LABEL
	 mercury__char__Int_3  = Int;
#line 541 "char.m"
}
#line 721 "char.m"
    {
#line 721 "char.m"
      MR_Integer mercury__char__V_7_7;

#line 721 "char.m"
      mercury__char__succeeded = ((MR_Integer) 64976 <= mercury__char__Int_3);
#line 721 "char.m"
      if (mercury__char__succeeded)
#line 721 "char.m"
        {
#line 721 "char.m"
          mercury__char__V_7_7 = (MR_Integer) 65007;
#line 721 "char.m"
          mercury__char__succeeded = (mercury__char__Int_3 <= mercury__char__V_7_7);
#line 721 "char.m"
        }
#line 721 "char.m"
    }
#line 722 "char.m"
    if (!(mercury__char__succeeded))
#line 722 "char.m"
      {
#line 722 "char.m"
        MR_Integer mercury__char__V_4_4 = (mercury__char__Int_3 & (MR_Integer) 65534);

#line 722 "char.m"
        mercury__char__succeeded = (mercury__char__V_4_4 == (MR_Integer) 65534);
#line 722 "char.m"
      }
#line 719 "char.m"
    return mercury__char__succeeded;
#line 719 "char.m"
  }
#line 208 "char.m"
}

#line 201 "char.m"
MR_bool MR_CALL 
mercury__char__is_surrogate_1_p_0(
#line 201 "char.m"
  MR_Char mercury__char__Char_2)
#line 201 "char.m"
{
#line 714 "char.m"
  {
#line 714 "char.m"
    MR_bool mercury__char__succeeded;
#line 714 "char.m"
    MR_Integer mercury__char__Int_3;
#line 714 "char.m"
    MR_Integer mercury__char__V_5_5;

#line 541 "char.m"
{
#define MR_PROC_LABEL mercury__char__is_surrogate_1_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__char__Char_2 ;
		{
#line 541 "char.m"

    Int = (MR_UnsignedChar) Character;

#line 965 "char.c"

		;}
#undef MR_PROC_LABEL
	 mercury__char__Int_3  = Int;
#line 541 "char.m"
}
#line 716 "char.m"
    mercury__char__succeeded = (mercury__char__Int_3 >= (MR_Integer) 55296);
#line 714 "char.m"
    if (mercury__char__succeeded)
#line 714 "char.m"
      {
#line 717 "char.m"
        mercury__char__V_5_5 = (MR_Integer) 57343;
#line 717 "char.m"
        mercury__char__succeeded = (mercury__char__Int_3 <= mercury__char__V_5_5);
#line 714 "char.m"
      }
#line 714 "char.m"
    return mercury__char__succeeded;
#line 714 "char.m"
  }
#line 201 "char.m"
}

#line 195 "char.m"
MR_bool MR_CALL 
mercury__char__to_utf16_2_p_0(
#line 195 "char.m"
  MR_Char mercury__char__Char_3,
#line 195 "char.m"
  MR_Word * mercury__char__CodeUnits_4)
#line 195 "char.m"
{
#line 694 "char.m"
  {
#line 694 "char.m"
    MR_bool mercury__char__succeeded;
#line 694 "char.m"
    MR_Integer mercury__char__Int_5;

#line 541 "char.m"
{
#define MR_PROC_LABEL mercury__char__to_utf16_2_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__char__Char_3 ;
		{
#line 541 "char.m"

    Int = (MR_UnsignedChar) Character;

#line 1020 "char.c"

		;}
#undef MR_PROC_LABEL
	 mercury__char__Int_5  = Int;
#line 541 "char.m"
}
#line 696 "char.m"
    mercury__char__succeeded = (mercury__char__Int_5 < (MR_Integer) 55296);
#line 699 "char.m"
    if (mercury__char__succeeded)
#line 698 "char.m"
      {
#line 698 "char.m"
        MR_Word mercury__char__V_10_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 698 "char.m"
        {
#line 698 "char.m"
          MR_Word base;
#line 698 "char.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 698 "char.m"
          *mercury__char__CodeUnits_4 = base;
#line 698 "char.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__char__Int_5));
#line 698 "char.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__char__V_10_10));
#line 698 "char.m"
        }
#line 698 "char.m"
        mercury__char__succeeded = MR_TRUE;
#line 698 "char.m"
      }
#line 699 "char.m"
    else
#line 702 "char.m"
      {
#line 699 "char.m"
        mercury__char__succeeded = (mercury__char__Int_5 <= (MR_Integer) 57343);
#line 702 "char.m"
        if (mercury__char__succeeded)
#line 701 "char.m"
          mercury__char__succeeded = MR_FALSE;
#line 702 "char.m"
        else
#line 704 "char.m"
          {
#line 702 "char.m"
            mercury__char__succeeded = (mercury__char__Int_5 <= (MR_Integer) 65535);
#line 704 "char.m"
            if (mercury__char__succeeded)
#line 703 "char.m"
              {
#line 703 "char.m"
                MR_Word mercury__char__V_13_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 703 "char.m"
                {
#line 703 "char.m"
                  MR_Word base;
#line 703 "char.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 703 "char.m"
                  *mercury__char__CodeUnits_4 = base;
#line 703 "char.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__char__Int_5));
#line 703 "char.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__char__V_13_13));
#line 703 "char.m"
                }
#line 703 "char.m"
                mercury__char__succeeded = MR_TRUE;
#line 703 "char.m"
              }
#line 704 "char.m"
            else
#line 709 "char.m"
              {
#line 709 "char.m"
                MR_Integer mercury__char__U_6;
#line 709 "char.m"
                MR_Integer mercury__char__A_7;
#line 709 "char.m"
                MR_Integer mercury__char__B_8;
#line 709 "char.m"
                MR_Integer mercury__char__V_15_15;
#line 709 "char.m"
                MR_Integer mercury__char__V_16_16;
#line 709 "char.m"
                MR_Integer mercury__char__V_17_17;
#line 709 "char.m"
                MR_Integer mercury__char__V_18_18;
#line 709 "char.m"
                MR_Integer mercury__char__V_19_19;
#line 709 "char.m"
                MR_Integer mercury__char__V_20_20;
#line 709 "char.m"
                MR_Integer mercury__char__V_21_21;
#line 709 "char.m"
                MR_Word mercury__char__V_22_22;
#line 709 "char.m"
                MR_Word mercury__char__V_23_23;

#line 704 "char.m"
                mercury__char__succeeded = (mercury__char__Int_5 <= (MR_Integer) 1114111);
#line 709 "char.m"
                if (mercury__char__succeeded)
#line 709 "char.m"
                  {
#line 705 "char.m"
                    mercury__char__V_15_15 = (MR_Integer) 65536;
#line 705 "char.m"
                    mercury__char__U_6 = (mercury__char__Int_5 - mercury__char__V_15_15);
#line 706 "char.m"
                    mercury__char__V_16_16 = (MR_Integer) 55296;
#line 706 "char.m"
                    mercury__char__V_18_18 = (MR_Integer) 10;
#line 706 "char.m"
                    {
#line 706 "char.m"
                      mercury__char__V_17_17 = mercury__int__f_62_62_2_f_0(mercury__char__U_6, mercury__char__V_18_18);
                    }
#line 706 "char.m"
                    mercury__char__A_7 = (mercury__char__V_16_16 | mercury__char__V_17_17);
#line 707 "char.m"
                    mercury__char__V_19_19 = (MR_Integer) 56320;
#line 707 "char.m"
                    mercury__char__V_21_21 = (MR_Integer) 1023;
#line 707 "char.m"
                    mercury__char__V_20_20 = (mercury__char__U_6 & mercury__char__V_21_21);
#line 707 "char.m"
                    mercury__char__B_8 = (mercury__char__V_19_19 | mercury__char__V_20_20);
#line 708 "char.m"
                    mercury__char__V_23_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 708 "char.m"
                    {
#line 708 "char.m"
                      mercury__char__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 708 "char.m"
                      MR_hl_field(MR_mktag(1), mercury__char__V_22_22, 0) = ((MR_Box) (mercury__char__B_8));
#line 708 "char.m"
                      MR_hl_field(MR_mktag(1), mercury__char__V_22_22, 1) = ((MR_Box) (mercury__char__V_23_23));
#line 708 "char.m"
                    }
#line 708 "char.m"
                    {
#line 708 "char.m"
                      MR_Word base;
#line 708 "char.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 708 "char.m"
                      *mercury__char__CodeUnits_4 = base;
#line 708 "char.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__char__A_7));
#line 708 "char.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__char__V_22_22));
#line 708 "char.m"
                    }
#line 708 "char.m"
                    mercury__char__succeeded = MR_TRUE;
#line 709 "char.m"
                  }
#line 709 "char.m"
              }
#line 704 "char.m"
          }
#line 702 "char.m"
      }
#line 694 "char.m"
    return mercury__char__succeeded;
#line 694 "char.m"
  }
#line 195 "char.m"
}

#line 190 "char.m"
MR_bool MR_CALL 
mercury__char__to_utf8_2_p_0(
#line 190 "char.m"
  MR_Char mercury__char__Char_3,
#line 190 "char.m"
  MR_Word * mercury__char__CodeUnits_4)
#line 190 "char.m"
{
#line 669 "char.m"
  {
#line 669 "char.m"
    MR_bool mercury__char__succeeded;
#line 669 "char.m"
    MR_Integer mercury__char__Int_5;

#line 541 "char.m"
{
#define MR_PROC_LABEL mercury__char__to_utf8_2_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__char__Char_3 ;
		{
#line 541 "char.m"

    Int = (MR_UnsignedChar) Character;

#line 1225 "char.c"

		;}
#undef MR_PROC_LABEL
	 mercury__char__Int_5  = Int;
#line 541 "char.m"
}
#line 671 "char.m"
    mercury__char__succeeded = (mercury__char__Int_5 <= (MR_Integer) 127);
#line 673 "char.m"
    if (mercury__char__succeeded)
#line 672 "char.m"
      {
#line 672 "char.m"
        MR_Word mercury__char__V_11_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 672 "char.m"
        {
#line 672 "char.m"
          MR_Word base;
#line 672 "char.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 672 "char.m"
          *mercury__char__CodeUnits_4 = base;
#line 672 "char.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__char__Int_5));
#line 672 "char.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__char__V_11_11));
#line 672 "char.m"
        }
#line 672 "char.m"
        mercury__char__succeeded = MR_TRUE;
#line 672 "char.m"
      }
#line 673 "char.m"
    else
#line 677 "char.m"
      {
#line 673 "char.m"
        mercury__char__succeeded = (mercury__char__Int_5 <= (MR_Integer) 2047);
#line 677 "char.m"
        if (mercury__char__succeeded)
#line 674 "char.m"
          {
#line 674 "char.m"
            MR_Integer mercury__char__A_6;
#line 674 "char.m"
            MR_Integer mercury__char__B_7;
#line 674 "char.m"
            MR_Integer mercury__char__V_14_14;
#line 674 "char.m"
            MR_Integer mercury__char__V_15_15;
#line 674 "char.m"
            MR_Integer mercury__char__V_19_19;
#line 674 "char.m"
            MR_Word mercury__char__V_21_21;
#line 674 "char.m"
            MR_Word mercury__char__V_22_22;

#line 674 "char.m"
            {
#line 674 "char.m"
              mercury__char__V_15_15 = mercury__int__f_62_62_2_f_0(mercury__char__Int_5, (MR_Integer) 6);
            }
#line 674 "char.m"
            mercury__char__V_14_14 = (mercury__char__V_15_15 & (MR_Integer) 31);
#line 674 "char.m"
            mercury__char__A_6 = ((MR_Integer) 192 | mercury__char__V_14_14);
#line 675 "char.m"
            mercury__char__V_19_19 = (mercury__char__Int_5 & (MR_Integer) 63);
#line 675 "char.m"
            mercury__char__B_7 = ((MR_Integer) 128 | mercury__char__V_19_19);
#line 676 "char.m"
            mercury__char__V_22_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 676 "char.m"
            {
#line 676 "char.m"
              mercury__char__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 676 "char.m"
              MR_hl_field(MR_mktag(1), mercury__char__V_21_21, 0) = ((MR_Box) (mercury__char__B_7));
#line 676 "char.m"
              MR_hl_field(MR_mktag(1), mercury__char__V_21_21, 1) = ((MR_Box) (mercury__char__V_22_22));
#line 676 "char.m"
            }
#line 676 "char.m"
            {
#line 676 "char.m"
              MR_Word base;
#line 676 "char.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 676 "char.m"
              *mercury__char__CodeUnits_4 = base;
#line 676 "char.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__char__A_6));
#line 676 "char.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__char__V_21_21));
#line 676 "char.m"
            }
#line 674 "char.m"
            mercury__char__succeeded = MR_TRUE;
#line 674 "char.m"
          }
#line 677 "char.m"
        else
#line 683 "char.m"
          {
#line 677 "char.m"
            mercury__char__succeeded = (mercury__char__Int_5 <= (MR_Integer) 65535);
#line 683 "char.m"
            if (mercury__char__succeeded)
#line 678 "char.m"
              {
#line 678 "char.m"
                MR_Integer mercury__char__C_8;
#line 678 "char.m"
                MR_Integer mercury__char__V_24_24;
#line 678 "char.m"
                MR_Integer mercury__char__V_25_25;
#line 678 "char.m"
                MR_Integer mercury__char__V_26_26;
#line 678 "char.m"
                MR_Integer mercury__char__V_27_27;
#line 678 "char.m"
                MR_Integer mercury__char__V_28_28;
#line 678 "char.m"
                MR_Integer mercury__char__V_29_29;
#line 678 "char.m"
                MR_Integer mercury__char__V_30_30;
#line 678 "char.m"
                MR_Integer mercury__char__V_31_31;
#line 678 "char.m"
                MR_Integer mercury__char__V_32_32;
#line 678 "char.m"
                MR_Integer mercury__char__V_33_33;
#line 678 "char.m"
                MR_Integer mercury__char__V_34_34;
#line 678 "char.m"
                MR_Integer mercury__char__V_35_35;
#line 678 "char.m"
                MR_Integer mercury__char__V_36_36;
#line 678 "char.m"
                MR_Word mercury__char__V_37_37;
#line 678 "char.m"
                MR_Word mercury__char__V_38_38;
#line 678 "char.m"
                MR_Word mercury__char__V_39_39;
#line 678 "char.m"
                MR_Integer mercury__char__A_63;
#line 678 "char.m"
                MR_Integer mercury__char__B_64;
#line 714 "char.m"
                MR_Integer mercury__char__Int_76;
#line 714 "char.m"
                MR_Integer mercury__char__V_78_78;

#line 541 "char.m"
{
#define MR_PROC_LABEL mercury__char__to_utf8_2_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__char__Char_3 ;
		{
#line 541 "char.m"

    Int = (MR_UnsignedChar) Character;

#line 1393 "char.c"

		;}
#undef MR_PROC_LABEL
	 mercury__char__Int_76  = Int;
#line 541 "char.m"
}
#line 716 "char.m"
                mercury__char__succeeded = (mercury__char__Int_76 >= (MR_Integer) 55296);
#line 714 "char.m"
                if (mercury__char__succeeded)
#line 714 "char.m"
                  {
#line 717 "char.m"
                    mercury__char__V_78_78 = (MR_Integer) 57343;
#line 717 "char.m"
                    mercury__char__succeeded = (mercury__char__Int_76 <= mercury__char__V_78_78);
#line 714 "char.m"
                  }
#line 678 "char.m"
                mercury__char__succeeded = !(mercury__char__succeeded);
#line 678 "char.m"
                if (mercury__char__succeeded)
#line 678 "char.m"
                  {
#line 679 "char.m"
                    mercury__char__V_24_24 = (MR_Integer) 224;
#line 679 "char.m"
                    mercury__char__V_27_27 = (MR_Integer) 12;
#line 679 "char.m"
                    {
#line 679 "char.m"
                      mercury__char__V_26_26 = mercury__int__f_62_62_2_f_0(mercury__char__Int_5, mercury__char__V_27_27);
                    }
#line 679 "char.m"
                    mercury__char__V_28_28 = (MR_Integer) 15;
#line 679 "char.m"
                    mercury__char__V_25_25 = (mercury__char__V_26_26 & mercury__char__V_28_28);
#line 679 "char.m"
                    mercury__char__A_63 = (mercury__char__V_24_24 | mercury__char__V_25_25);
#line 680 "char.m"
                    mercury__char__V_29_29 = (MR_Integer) 128;
#line 680 "char.m"
                    mercury__char__V_32_32 = (MR_Integer) 6;
#line 680 "char.m"
                    {
#line 680 "char.m"
                      mercury__char__V_31_31 = mercury__int__f_62_62_2_f_0(mercury__char__Int_5, mercury__char__V_32_32);
                    }
#line 680 "char.m"
                    mercury__char__V_33_33 = (MR_Integer) 63;
#line 680 "char.m"
                    mercury__char__V_30_30 = (mercury__char__V_31_31 & mercury__char__V_33_33);
#line 680 "char.m"
                    mercury__char__B_64 = (mercury__char__V_29_29 | mercury__char__V_30_30);
#line 681 "char.m"
                    mercury__char__V_34_34 = (MR_Integer) 128;
#line 681 "char.m"
                    mercury__char__V_36_36 = (MR_Integer) 63;
#line 681 "char.m"
                    mercury__char__V_35_35 = (mercury__char__Int_5 & mercury__char__V_36_36);
#line 681 "char.m"
                    mercury__char__C_8 = (mercury__char__V_34_34 | mercury__char__V_35_35);
#line 682 "char.m"
                    mercury__char__V_39_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 682 "char.m"
                    {
#line 682 "char.m"
                      mercury__char__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 682 "char.m"
                      MR_hl_field(MR_mktag(1), mercury__char__V_38_38, 0) = ((MR_Box) (mercury__char__C_8));
#line 682 "char.m"
                      MR_hl_field(MR_mktag(1), mercury__char__V_38_38, 1) = ((MR_Box) (mercury__char__V_39_39));
#line 682 "char.m"
                    }
#line 682 "char.m"
                    {
#line 682 "char.m"
                      mercury__char__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 682 "char.m"
                      MR_hl_field(MR_mktag(1), mercury__char__V_37_37, 0) = ((MR_Box) (mercury__char__B_64));
#line 682 "char.m"
                      MR_hl_field(MR_mktag(1), mercury__char__V_37_37, 1) = ((MR_Box) (mercury__char__V_38_38));
#line 682 "char.m"
                    }
#line 682 "char.m"
                    {
#line 682 "char.m"
                      MR_Word base;
#line 682 "char.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 682 "char.m"
                      *mercury__char__CodeUnits_4 = base;
#line 682 "char.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__char__A_63));
#line 682 "char.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__char__V_37_37));
#line 682 "char.m"
                    }
#line 682 "char.m"
                    mercury__char__succeeded = MR_TRUE;
#line 678 "char.m"
                  }
#line 678 "char.m"
              }
#line 683 "char.m"
            else
#line 689 "char.m"
              {
#line 689 "char.m"
                MR_Integer mercury__char__D_9;
#line 689 "char.m"
                MR_Integer mercury__char__V_41_41;
#line 689 "char.m"
                MR_Integer mercury__char__V_42_42;
#line 689 "char.m"
                MR_Integer mercury__char__V_43_43;
#line 689 "char.m"
                MR_Integer mercury__char__V_44_44;
#line 689 "char.m"
                MR_Integer mercury__char__V_45_45;
#line 689 "char.m"
                MR_Integer mercury__char__V_46_46;
#line 689 "char.m"
                MR_Integer mercury__char__V_47_47;
#line 689 "char.m"
                MR_Integer mercury__char__V_48_48;
#line 689 "char.m"
                MR_Integer mercury__char__V_49_49;
#line 689 "char.m"
                MR_Integer mercury__char__V_50_50;
#line 689 "char.m"
                MR_Integer mercury__char__V_51_51;
#line 689 "char.m"
                MR_Integer mercury__char__V_52_52;
#line 689 "char.m"
                MR_Integer mercury__char__V_53_53;
#line 689 "char.m"
                MR_Integer mercury__char__V_54_54;
#line 689 "char.m"
                MR_Integer mercury__char__V_55_55;
#line 689 "char.m"
                MR_Integer mercury__char__V_56_56;
#line 689 "char.m"
                MR_Integer mercury__char__V_57_57;
#line 689 "char.m"
                MR_Integer mercury__char__V_58_58;
#line 689 "char.m"
                MR_Word mercury__char__V_59_59;
#line 689 "char.m"
                MR_Word mercury__char__V_60_60;
#line 689 "char.m"
                MR_Word mercury__char__V_61_61;
#line 689 "char.m"
                MR_Word mercury__char__V_62_62;
#line 689 "char.m"
                MR_Integer mercury__char__A_65;
#line 689 "char.m"
                MR_Integer mercury__char__B_66;
#line 689 "char.m"
                MR_Integer mercury__char__C_67;

#line 683 "char.m"
                mercury__char__succeeded = (mercury__char__Int_5 <= (MR_Integer) 1114111);
#line 689 "char.m"
                if (mercury__char__succeeded)
#line 689 "char.m"
                  {
#line 684 "char.m"
                    mercury__char__V_41_41 = (MR_Integer) 240;
#line 684 "char.m"
                    mercury__char__V_44_44 = (MR_Integer) 18;
#line 684 "char.m"
                    {
#line 684 "char.m"
                      mercury__char__V_43_43 = mercury__int__f_62_62_2_f_0(mercury__char__Int_5, mercury__char__V_44_44);
                    }
#line 684 "char.m"
                    mercury__char__V_45_45 = (MR_Integer) 7;
#line 684 "char.m"
                    mercury__char__V_42_42 = (mercury__char__V_43_43 & mercury__char__V_45_45);
#line 684 "char.m"
                    mercury__char__A_65 = (mercury__char__V_41_41 | mercury__char__V_42_42);
#line 685 "char.m"
                    mercury__char__V_46_46 = (MR_Integer) 128;
#line 685 "char.m"
                    mercury__char__V_49_49 = (MR_Integer) 12;
#line 685 "char.m"
                    {
#line 685 "char.m"
                      mercury__char__V_48_48 = mercury__int__f_62_62_2_f_0(mercury__char__Int_5, mercury__char__V_49_49);
                    }
#line 685 "char.m"
                    mercury__char__V_50_50 = (MR_Integer) 63;
#line 685 "char.m"
                    mercury__char__V_47_47 = (mercury__char__V_48_48 & mercury__char__V_50_50);
#line 685 "char.m"
                    mercury__char__B_66 = (mercury__char__V_46_46 | mercury__char__V_47_47);
#line 686 "char.m"
                    mercury__char__V_51_51 = (MR_Integer) 128;
#line 686 "char.m"
                    mercury__char__V_54_54 = (MR_Integer) 6;
#line 686 "char.m"
                    {
#line 686 "char.m"
                      mercury__char__V_53_53 = mercury__int__f_62_62_2_f_0(mercury__char__Int_5, mercury__char__V_54_54);
                    }
#line 686 "char.m"
                    mercury__char__V_55_55 = (MR_Integer) 63;
#line 686 "char.m"
                    mercury__char__V_52_52 = (mercury__char__V_53_53 & mercury__char__V_55_55);
#line 686 "char.m"
                    mercury__char__C_67 = (mercury__char__V_51_51 | mercury__char__V_52_52);
#line 687 "char.m"
                    mercury__char__V_56_56 = (MR_Integer) 128;
#line 687 "char.m"
                    mercury__char__V_58_58 = (MR_Integer) 63;
#line 687 "char.m"
                    mercury__char__V_57_57 = (mercury__char__Int_5 & mercury__char__V_58_58);
#line 687 "char.m"
                    mercury__char__D_9 = (mercury__char__V_56_56 | mercury__char__V_57_57);
#line 688 "char.m"
                    mercury__char__V_62_62 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 688 "char.m"
                    {
#line 688 "char.m"
                      mercury__char__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 688 "char.m"
                      MR_hl_field(MR_mktag(1), mercury__char__V_61_61, 0) = ((MR_Box) (mercury__char__D_9));
#line 688 "char.m"
                      MR_hl_field(MR_mktag(1), mercury__char__V_61_61, 1) = ((MR_Box) (mercury__char__V_62_62));
#line 688 "char.m"
                    }
#line 688 "char.m"
                    {
#line 688 "char.m"
                      mercury__char__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 688 "char.m"
                      MR_hl_field(MR_mktag(1), mercury__char__V_60_60, 0) = ((MR_Box) (mercury__char__C_67));
#line 688 "char.m"
                      MR_hl_field(MR_mktag(1), mercury__char__V_60_60, 1) = ((MR_Box) (mercury__char__V_61_61));
#line 688 "char.m"
                    }
#line 688 "char.m"
                    {
#line 688 "char.m"
                      mercury__char__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 688 "char.m"
                      MR_hl_field(MR_mktag(1), mercury__char__V_59_59, 0) = ((MR_Box) (mercury__char__B_66));
#line 688 "char.m"
                      MR_hl_field(MR_mktag(1), mercury__char__V_59_59, 1) = ((MR_Box) (mercury__char__V_60_60));
#line 688 "char.m"
                    }
#line 688 "char.m"
                    {
#line 688 "char.m"
                      MR_Word base;
#line 688 "char.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 688 "char.m"
                      *mercury__char__CodeUnits_4 = base;
#line 688 "char.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__char__A_65));
#line 688 "char.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__char__V_59_59));
#line 688 "char.m"
                    }
#line 688 "char.m"
                    mercury__char__succeeded = MR_TRUE;
#line 689 "char.m"
                  }
#line 689 "char.m"
              }
#line 683 "char.m"
          }
#line 677 "char.m"
      }
#line 669 "char.m"
    return mercury__char__succeeded;
#line 669 "char.m"
  }
#line 190 "char.m"
}

#line 185 "char.m"
MR_Word MR_CALL 
mercury__char__char_to_doc_1_f_0(
#line 185 "char.m"
  MR_Char mercury__char__C_3)
#line 185 "char.m"
{
#line 725 "char.m"
  {
#line 725 "char.m"
    MR_bool mercury__char__succeeded;
#line 725 "char.m"
    MR_Word mercury__char__HeadVar__2_2;
#line 725 "char.m"
    MR_String mercury__char__V_4_4;

#line 725 "char.m"
    {
#line 725 "char.m"
      mercury__char__V_4_4 = mercury__term_io__quoted_char_1_f_0(mercury__char__C_3);
    }
#line 725 "char.m"
    {
#line 725 "char.m"
      mercury__char__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 725 "char.m"
      MR_hl_field(MR_mktag(1), mercury__char__HeadVar__2_2, 0) = ((MR_Box) (mercury__char__V_4_4));
#line 725 "char.m"
    }
#line 725 "char.m"
    return mercury__char__HeadVar__2_2;
#line 725 "char.m"
  }
#line 185 "char.m"
}

#line 181 "char.m"
void MR_CALL 
mercury__char__det_int_to_digit_2_p_0(
#line 181 "char.m"
  MR_Integer mercury__char__Int_3,
#line 181 "char.m"
  MR_Char * mercury__char__Digit_4)
#line 181 "char.m"
{
#line 445 "char.m"
  {
#line 445 "char.m"
    MR_bool mercury__char__succeeded;
#line 445 "char.m"
    MR_Char mercury__char__Digit1_5;

#line 443 "char.m"
    {
#line 443 "char.m"
      mercury__char__succeeded = mercury__char__int_to_digit_2_p_0(mercury__char__Int_3, &mercury__char__Digit1_5);
    }
#line 445 "char.m"
    if (mercury__char__succeeded)
#line 444 "char.m"
      *mercury__char__Digit_4 = mercury__char__Digit1_5;
#line 445 "char.m"
    else
#line 446 "char.m"
      {
#line 446 "char.m"
        {
#line 446 "char.m"
          mercury__require__error_1_p_0((MR_String) "char.int_to_digit failed");
#line 446 "char.m"
          return;
        }
#line 446 "char.m"
      }
#line 445 "char.m"
  }
#line 181 "char.m"
}

#line 180 "char.m"
MR_Char MR_CALL 
mercury__char__det_int_to_digit_1_f_0(
#line 180 "char.m"
  MR_Integer mercury__char__N_3)
#line 180 "char.m"
{
#line 445 "char.m"
  {
#line 445 "char.m"
    MR_bool mercury__char__succeeded;
#line 445 "char.m"
    MR_Char mercury__char__C_4;
#line 445 "char.m"
    MR_Char mercury__char__Digit1_7;

#line 443 "char.m"
    {
#line 443 "char.m"
      mercury__char__succeeded = mercury__char__int_to_digit_2_p_0(mercury__char__N_3, &mercury__char__Digit1_7);
    }
#line 445 "char.m"
    if (mercury__char__succeeded)
#line 444 "char.m"
      mercury__char__C_4 = mercury__char__Digit1_7;
#line 445 "char.m"
    else
#line 446 "char.m"
      {
#line 446 "char.m"
        {
#line 446 "char.m"
          mercury__require__error_1_p_0((MR_String) "char.int_to_digit failed");
        }
#line 446 "char.m"
      }
#line 445 "char.m"
    return mercury__char__C_4;
#line 445 "char.m"
  }
#line 180 "char.m"
}

#line 175 "char.m"
MR_bool MR_CALL 
mercury__char__int_to_digit_2_p_1(
#line 175 "char.m"
  MR_Integer * mercury__char__HeadVar__1_1,
#line 175 "char.m"
  MR_Char mercury__char__HeadVar__2_2)
#line 175 "char.m"
{
#line 449 "char.m"
  {
#line 449 "char.m"
    MR_bool mercury__char__succeeded;

#line 449 "char.m"
    if ((mercury__char__HeadVar__2_2 == (MR_Char) 48))
#line 449 "char.m"
      {
#line 449 "char.m"
        *mercury__char__HeadVar__1_1 = (MR_Integer) 0;
#line 449 "char.m"
        mercury__char__succeeded = MR_TRUE;
#line 449 "char.m"
      }
#line 449 "char.m"
    else
#line 449 "char.m"
      if ((mercury__char__HeadVar__2_2 == (MR_Char) 49))
#line 450 "char.m"
        {
#line 450 "char.m"
          *mercury__char__HeadVar__1_1 = (MR_Integer) 1;
#line 450 "char.m"
          mercury__char__succeeded = MR_TRUE;
#line 450 "char.m"
        }
#line 449 "char.m"
      else
#line 449 "char.m"
        if ((mercury__char__HeadVar__2_2 == (MR_Char) 50))
#line 451 "char.m"
          {
#line 451 "char.m"
            *mercury__char__HeadVar__1_1 = (MR_Integer) 2;
#line 451 "char.m"
            mercury__char__succeeded = MR_TRUE;
#line 451 "char.m"
          }
#line 449 "char.m"
        else
#line 449 "char.m"
          if ((mercury__char__HeadVar__2_2 == (MR_Char) 51))
#line 452 "char.m"
            {
#line 452 "char.m"
              *mercury__char__HeadVar__1_1 = (MR_Integer) 3;
#line 452 "char.m"
              mercury__char__succeeded = MR_TRUE;
#line 452 "char.m"
            }
#line 449 "char.m"
          else
#line 449 "char.m"
            if ((mercury__char__HeadVar__2_2 == (MR_Char) 52))
#line 453 "char.m"
              {
#line 453 "char.m"
                *mercury__char__HeadVar__1_1 = (MR_Integer) 4;
#line 453 "char.m"
                mercury__char__succeeded = MR_TRUE;
#line 453 "char.m"
              }
#line 449 "char.m"
            else
#line 449 "char.m"
              if ((mercury__char__HeadVar__2_2 == (MR_Char) 53))
#line 454 "char.m"
                {
#line 454 "char.m"
                  *mercury__char__HeadVar__1_1 = (MR_Integer) 5;
#line 454 "char.m"
                  mercury__char__succeeded = MR_TRUE;
#line 454 "char.m"
                }
#line 449 "char.m"
              else
#line 449 "char.m"
                if ((mercury__char__HeadVar__2_2 == (MR_Char) 54))
#line 455 "char.m"
                  {
#line 455 "char.m"
                    *mercury__char__HeadVar__1_1 = (MR_Integer) 6;
#line 455 "char.m"
                    mercury__char__succeeded = MR_TRUE;
#line 455 "char.m"
                  }
#line 449 "char.m"
                else
#line 449 "char.m"
                  if ((mercury__char__HeadVar__2_2 == (MR_Char) 55))
#line 456 "char.m"
                    {
#line 456 "char.m"
                      *mercury__char__HeadVar__1_1 = (MR_Integer) 7;
#line 456 "char.m"
                      mercury__char__succeeded = MR_TRUE;
#line 456 "char.m"
                    }
#line 449 "char.m"
                  else
#line 449 "char.m"
                    if ((mercury__char__HeadVar__2_2 == (MR_Char) 56))
#line 457 "char.m"
                      {
#line 457 "char.m"
                        *mercury__char__HeadVar__1_1 = (MR_Integer) 8;
#line 457 "char.m"
                        mercury__char__succeeded = MR_TRUE;
#line 457 "char.m"
                      }
#line 449 "char.m"
                    else
#line 449 "char.m"
                      if ((mercury__char__HeadVar__2_2 == (MR_Char) 57))
#line 458 "char.m"
                        {
#line 458 "char.m"
                          *mercury__char__HeadVar__1_1 = (MR_Integer) 9;
#line 458 "char.m"
                          mercury__char__succeeded = MR_TRUE;
#line 458 "char.m"
                        }
#line 449 "char.m"
                      else
#line 449 "char.m"
                        if ((mercury__char__HeadVar__2_2 == (MR_Char) 65))
#line 459 "char.m"
                          {
#line 459 "char.m"
                            *mercury__char__HeadVar__1_1 = (MR_Integer) 10;
#line 459 "char.m"
                            mercury__char__succeeded = MR_TRUE;
#line 459 "char.m"
                          }
#line 449 "char.m"
                        else
#line 449 "char.m"
                          if ((mercury__char__HeadVar__2_2 == (MR_Char) 66))
#line 460 "char.m"
                            {
#line 460 "char.m"
                              *mercury__char__HeadVar__1_1 = (MR_Integer) 11;
#line 460 "char.m"
                              mercury__char__succeeded = MR_TRUE;
#line 460 "char.m"
                            }
#line 449 "char.m"
                          else
#line 449 "char.m"
                            if ((mercury__char__HeadVar__2_2 == (MR_Char) 67))
#line 461 "char.m"
                              {
#line 461 "char.m"
                                *mercury__char__HeadVar__1_1 = (MR_Integer) 12;
#line 461 "char.m"
                                mercury__char__succeeded = MR_TRUE;
#line 461 "char.m"
                              }
#line 449 "char.m"
                            else
#line 449 "char.m"
                              if ((mercury__char__HeadVar__2_2 == (MR_Char) 68))
#line 462 "char.m"
                                {
#line 462 "char.m"
                                  *mercury__char__HeadVar__1_1 = (MR_Integer) 13;
#line 462 "char.m"
                                  mercury__char__succeeded = MR_TRUE;
#line 462 "char.m"
                                }
#line 449 "char.m"
                              else
#line 449 "char.m"
                                if ((mercury__char__HeadVar__2_2 == (MR_Char) 69))
#line 463 "char.m"
                                  {
#line 463 "char.m"
                                    *mercury__char__HeadVar__1_1 = (MR_Integer) 14;
#line 463 "char.m"
                                    mercury__char__succeeded = MR_TRUE;
#line 463 "char.m"
                                  }
#line 449 "char.m"
                                else
#line 449 "char.m"
                                  if ((mercury__char__HeadVar__2_2 == (MR_Char) 70))
#line 464 "char.m"
                                    {
#line 464 "char.m"
                                      *mercury__char__HeadVar__1_1 = (MR_Integer) 15;
#line 464 "char.m"
                                      mercury__char__succeeded = MR_TRUE;
#line 464 "char.m"
                                    }
#line 449 "char.m"
                                  else
#line 449 "char.m"
                                    if ((mercury__char__HeadVar__2_2 == (MR_Char) 71))
#line 465 "char.m"
                                      {
#line 465 "char.m"
                                        *mercury__char__HeadVar__1_1 = (MR_Integer) 16;
#line 465 "char.m"
                                        mercury__char__succeeded = MR_TRUE;
#line 465 "char.m"
                                      }
#line 449 "char.m"
                                    else
#line 449 "char.m"
                                      if ((mercury__char__HeadVar__2_2 == (MR_Char) 72))
#line 466 "char.m"
                                        {
#line 466 "char.m"
                                          *mercury__char__HeadVar__1_1 = (MR_Integer) 17;
#line 466 "char.m"
                                          mercury__char__succeeded = MR_TRUE;
#line 466 "char.m"
                                        }
#line 449 "char.m"
                                      else
#line 449 "char.m"
                                        if ((mercury__char__HeadVar__2_2 == (MR_Char) 73))
#line 467 "char.m"
                                          {
#line 467 "char.m"
                                            *mercury__char__HeadVar__1_1 = (MR_Integer) 18;
#line 467 "char.m"
                                            mercury__char__succeeded = MR_TRUE;
#line 467 "char.m"
                                          }
#line 449 "char.m"
                                        else
#line 449 "char.m"
                                          if ((mercury__char__HeadVar__2_2 == (MR_Char) 74))
#line 468 "char.m"
                                            {
#line 468 "char.m"
                                              *mercury__char__HeadVar__1_1 = (MR_Integer) 19;
#line 468 "char.m"
                                              mercury__char__succeeded = MR_TRUE;
#line 468 "char.m"
                                            }
#line 449 "char.m"
                                          else
#line 449 "char.m"
                                            if ((mercury__char__HeadVar__2_2 == (MR_Char) 75))
#line 469 "char.m"
                                              {
#line 469 "char.m"
                                                *mercury__char__HeadVar__1_1 = (MR_Integer) 20;
#line 469 "char.m"
                                                mercury__char__succeeded = MR_TRUE;
#line 469 "char.m"
                                              }
#line 449 "char.m"
                                            else
#line 449 "char.m"
                                              if ((mercury__char__HeadVar__2_2 == (MR_Char) 76))
#line 470 "char.m"
                                                {
#line 470 "char.m"
                                                  *mercury__char__HeadVar__1_1 = (MR_Integer) 21;
#line 470 "char.m"
                                                  mercury__char__succeeded = MR_TRUE;
#line 470 "char.m"
                                                }
#line 449 "char.m"
                                              else
#line 449 "char.m"
                                                if ((mercury__char__HeadVar__2_2 == (MR_Char) 77))
#line 471 "char.m"
                                                  {
#line 471 "char.m"
                                                    *mercury__char__HeadVar__1_1 = (MR_Integer) 22;
#line 471 "char.m"
                                                    mercury__char__succeeded = MR_TRUE;
#line 471 "char.m"
                                                  }
#line 449 "char.m"
                                                else
#line 449 "char.m"
                                                  if ((mercury__char__HeadVar__2_2 == (MR_Char) 78))
#line 472 "char.m"
                                                    {
#line 472 "char.m"
                                                      *mercury__char__HeadVar__1_1 = (MR_Integer) 23;
#line 472 "char.m"
                                                      mercury__char__succeeded = MR_TRUE;
#line 472 "char.m"
                                                    }
#line 449 "char.m"
                                                  else
#line 449 "char.m"
                                                    if ((mercury__char__HeadVar__2_2 == (MR_Char) 79))
#line 473 "char.m"
                                                      {
#line 473 "char.m"
                                                        *mercury__char__HeadVar__1_1 = (MR_Integer) 24;
#line 473 "char.m"
                                                        mercury__char__succeeded = MR_TRUE;
#line 473 "char.m"
                                                      }
#line 449 "char.m"
                                                    else
#line 449 "char.m"
                                                      if ((mercury__char__HeadVar__2_2 == (MR_Char) 80))
#line 474 "char.m"
                                                        {
#line 474 "char.m"
                                                          *mercury__char__HeadVar__1_1 = (MR_Integer) 25;
#line 474 "char.m"
                                                          mercury__char__succeeded = MR_TRUE;
#line 474 "char.m"
                                                        }
#line 449 "char.m"
                                                      else
#line 449 "char.m"
                                                        if ((mercury__char__HeadVar__2_2 == (MR_Char) 81))
#line 475 "char.m"
                                                          {
#line 475 "char.m"
                                                            *mercury__char__HeadVar__1_1 = (MR_Integer) 26;
#line 475 "char.m"
                                                            mercury__char__succeeded = MR_TRUE;
#line 475 "char.m"
                                                          }
#line 449 "char.m"
                                                        else
#line 449 "char.m"
                                                          if ((mercury__char__HeadVar__2_2 == (MR_Char) 82))
#line 476 "char.m"
                                                            {
#line 476 "char.m"
                                                              *mercury__char__HeadVar__1_1 = (MR_Integer) 27;
#line 476 "char.m"
                                                              mercury__char__succeeded = MR_TRUE;
#line 476 "char.m"
                                                            }
#line 449 "char.m"
                                                          else
#line 449 "char.m"
                                                            if ((mercury__char__HeadVar__2_2 == (MR_Char) 83))
#line 477 "char.m"
                                                              {
#line 477 "char.m"
                                                                *mercury__char__HeadVar__1_1 = (MR_Integer) 28;
#line 477 "char.m"
                                                                mercury__char__succeeded = MR_TRUE;
#line 477 "char.m"
                                                              }
#line 449 "char.m"
                                                            else
#line 449 "char.m"
                                                              if ((mercury__char__HeadVar__2_2 == (MR_Char) 84))
#line 478 "char.m"
                                                                {
#line 478 "char.m"
                                                                  *mercury__char__HeadVar__1_1 = (MR_Integer) 29;
#line 478 "char.m"
                                                                  mercury__char__succeeded = MR_TRUE;
#line 478 "char.m"
                                                                }
#line 449 "char.m"
                                                              else
#line 449 "char.m"
                                                                if ((mercury__char__HeadVar__2_2 == (MR_Char) 85))
#line 479 "char.m"
                                                                  {
#line 479 "char.m"
                                                                    *mercury__char__HeadVar__1_1 = (MR_Integer) 30;
#line 479 "char.m"
                                                                    mercury__char__succeeded = MR_TRUE;
#line 479 "char.m"
                                                                  }
#line 449 "char.m"
                                                                else
#line 449 "char.m"
                                                                  if ((mercury__char__HeadVar__2_2 == (MR_Char) 86))
#line 480 "char.m"
                                                                    {
#line 480 "char.m"
                                                                      *mercury__char__HeadVar__1_1 = (MR_Integer) 31;
#line 480 "char.m"
                                                                      mercury__char__succeeded = MR_TRUE;
#line 480 "char.m"
                                                                    }
#line 449 "char.m"
                                                                  else
#line 449 "char.m"
                                                                    if ((mercury__char__HeadVar__2_2 == (MR_Char) 87))
#line 481 "char.m"
                                                                      {
#line 481 "char.m"
                                                                        *mercury__char__HeadVar__1_1 = (MR_Integer) 32;
#line 481 "char.m"
                                                                        mercury__char__succeeded = MR_TRUE;
#line 481 "char.m"
                                                                      }
#line 449 "char.m"
                                                                    else
#line 449 "char.m"
                                                                      if ((mercury__char__HeadVar__2_2 == (MR_Char) 88))
#line 482 "char.m"
                                                                        {
#line 482 "char.m"
                                                                          *mercury__char__HeadVar__1_1 = (MR_Integer) 33;
#line 482 "char.m"
                                                                          mercury__char__succeeded = MR_TRUE;
#line 482 "char.m"
                                                                        }
#line 449 "char.m"
                                                                      else
#line 449 "char.m"
                                                                        if ((mercury__char__HeadVar__2_2 == (MR_Char) 89))
#line 483 "char.m"
                                                                          {
#line 483 "char.m"
                                                                            *mercury__char__HeadVar__1_1 = (MR_Integer) 34;
#line 483 "char.m"
                                                                            mercury__char__succeeded = MR_TRUE;
#line 483 "char.m"
                                                                          }
#line 449 "char.m"
                                                                        else
#line 449 "char.m"
                                                                          if ((mercury__char__HeadVar__2_2 == (MR_Char) 90))
#line 484 "char.m"
                                                                            {
#line 484 "char.m"
                                                                              *mercury__char__HeadVar__1_1 = (MR_Integer) 35;
#line 484 "char.m"
                                                                              mercury__char__succeeded = MR_TRUE;
#line 484 "char.m"
                                                                            }
#line 449 "char.m"
                                                                          else
#line 449 "char.m"
                                                                            mercury__char__succeeded = MR_FALSE;
#line 449 "char.m"
    return mercury__char__succeeded;
#line 449 "char.m"
  }
#line 175 "char.m"
}

#line 174 "char.m"
MR_bool MR_CALL 
mercury__char__int_to_digit_2_p_0(
#line 174 "char.m"
  MR_Integer mercury__char__HeadVar__1_1,
#line 174 "char.m"
  MR_Char * mercury__char__HeadVar__2_2)
#line 174 "char.m"
{
#line 449 "char.m"
  {
#line 449 "char.m"
    MR_bool mercury__char__succeeded;

#line 449 "char.m"
    if ((mercury__char__HeadVar__1_1 == (MR_Integer) 0))
#line 449 "char.m"
      {
#line 449 "char.m"
        *mercury__char__HeadVar__2_2 = (MR_Char) 48;
#line 449 "char.m"
        mercury__char__succeeded = MR_TRUE;
#line 449 "char.m"
      }
#line 449 "char.m"
    else
#line 449 "char.m"
      if ((mercury__char__HeadVar__1_1 == (MR_Integer) 1))
#line 450 "char.m"
        {
#line 450 "char.m"
          *mercury__char__HeadVar__2_2 = (MR_Char) 49;
#line 450 "char.m"
          mercury__char__succeeded = MR_TRUE;
#line 450 "char.m"
        }
#line 449 "char.m"
      else
#line 449 "char.m"
        if ((mercury__char__HeadVar__1_1 == (MR_Integer) 2))
#line 451 "char.m"
          {
#line 451 "char.m"
            *mercury__char__HeadVar__2_2 = (MR_Char) 50;
#line 451 "char.m"
            mercury__char__succeeded = MR_TRUE;
#line 451 "char.m"
          }
#line 449 "char.m"
        else
#line 449 "char.m"
          if ((mercury__char__HeadVar__1_1 == (MR_Integer) 3))
#line 452 "char.m"
            {
#line 452 "char.m"
              *mercury__char__HeadVar__2_2 = (MR_Char) 51;
#line 452 "char.m"
              mercury__char__succeeded = MR_TRUE;
#line 452 "char.m"
            }
#line 449 "char.m"
          else
#line 449 "char.m"
            if ((mercury__char__HeadVar__1_1 == (MR_Integer) 4))
#line 453 "char.m"
              {
#line 453 "char.m"
                *mercury__char__HeadVar__2_2 = (MR_Char) 52;
#line 453 "char.m"
                mercury__char__succeeded = MR_TRUE;
#line 453 "char.m"
              }
#line 449 "char.m"
            else
#line 449 "char.m"
              if ((mercury__char__HeadVar__1_1 == (MR_Integer) 5))
#line 454 "char.m"
                {
#line 454 "char.m"
                  *mercury__char__HeadVar__2_2 = (MR_Char) 53;
#line 454 "char.m"
                  mercury__char__succeeded = MR_TRUE;
#line 454 "char.m"
                }
#line 449 "char.m"
              else
#line 449 "char.m"
                if ((mercury__char__HeadVar__1_1 == (MR_Integer) 6))
#line 455 "char.m"
                  {
#line 455 "char.m"
                    *mercury__char__HeadVar__2_2 = (MR_Char) 54;
#line 455 "char.m"
                    mercury__char__succeeded = MR_TRUE;
#line 455 "char.m"
                  }
#line 449 "char.m"
                else
#line 449 "char.m"
                  if ((mercury__char__HeadVar__1_1 == (MR_Integer) 7))
#line 456 "char.m"
                    {
#line 456 "char.m"
                      *mercury__char__HeadVar__2_2 = (MR_Char) 55;
#line 456 "char.m"
                      mercury__char__succeeded = MR_TRUE;
#line 456 "char.m"
                    }
#line 449 "char.m"
                  else
#line 449 "char.m"
                    if ((mercury__char__HeadVar__1_1 == (MR_Integer) 8))
#line 457 "char.m"
                      {
#line 457 "char.m"
                        *mercury__char__HeadVar__2_2 = (MR_Char) 56;
#line 457 "char.m"
                        mercury__char__succeeded = MR_TRUE;
#line 457 "char.m"
                      }
#line 449 "char.m"
                    else
#line 449 "char.m"
                      if ((mercury__char__HeadVar__1_1 == (MR_Integer) 9))
#line 458 "char.m"
                        {
#line 458 "char.m"
                          *mercury__char__HeadVar__2_2 = (MR_Char) 57;
#line 458 "char.m"
                          mercury__char__succeeded = MR_TRUE;
#line 458 "char.m"
                        }
#line 449 "char.m"
                      else
#line 449 "char.m"
                        if ((mercury__char__HeadVar__1_1 == (MR_Integer) 10))
#line 459 "char.m"
                          {
#line 459 "char.m"
                            *mercury__char__HeadVar__2_2 = (MR_Char) 65;
#line 459 "char.m"
                            mercury__char__succeeded = MR_TRUE;
#line 459 "char.m"
                          }
#line 449 "char.m"
                        else
#line 449 "char.m"
                          if ((mercury__char__HeadVar__1_1 == (MR_Integer) 11))
#line 460 "char.m"
                            {
#line 460 "char.m"
                              *mercury__char__HeadVar__2_2 = (MR_Char) 66;
#line 460 "char.m"
                              mercury__char__succeeded = MR_TRUE;
#line 460 "char.m"
                            }
#line 449 "char.m"
                          else
#line 449 "char.m"
                            if ((mercury__char__HeadVar__1_1 == (MR_Integer) 12))
#line 461 "char.m"
                              {
#line 461 "char.m"
                                *mercury__char__HeadVar__2_2 = (MR_Char) 67;
#line 461 "char.m"
                                mercury__char__succeeded = MR_TRUE;
#line 461 "char.m"
                              }
#line 449 "char.m"
                            else
#line 449 "char.m"
                              if ((mercury__char__HeadVar__1_1 == (MR_Integer) 13))
#line 462 "char.m"
                                {
#line 462 "char.m"
                                  *mercury__char__HeadVar__2_2 = (MR_Char) 68;
#line 462 "char.m"
                                  mercury__char__succeeded = MR_TRUE;
#line 462 "char.m"
                                }
#line 449 "char.m"
                              else
#line 449 "char.m"
                                if ((mercury__char__HeadVar__1_1 == (MR_Integer) 14))
#line 463 "char.m"
                                  {
#line 463 "char.m"
                                    *mercury__char__HeadVar__2_2 = (MR_Char) 69;
#line 463 "char.m"
                                    mercury__char__succeeded = MR_TRUE;
#line 463 "char.m"
                                  }
#line 449 "char.m"
                                else
#line 449 "char.m"
                                  if ((mercury__char__HeadVar__1_1 == (MR_Integer) 15))
#line 464 "char.m"
                                    {
#line 464 "char.m"
                                      *mercury__char__HeadVar__2_2 = (MR_Char) 70;
#line 464 "char.m"
                                      mercury__char__succeeded = MR_TRUE;
#line 464 "char.m"
                                    }
#line 449 "char.m"
                                  else
#line 449 "char.m"
                                    if ((mercury__char__HeadVar__1_1 == (MR_Integer) 16))
#line 465 "char.m"
                                      {
#line 465 "char.m"
                                        *mercury__char__HeadVar__2_2 = (MR_Char) 71;
#line 465 "char.m"
                                        mercury__char__succeeded = MR_TRUE;
#line 465 "char.m"
                                      }
#line 449 "char.m"
                                    else
#line 449 "char.m"
                                      if ((mercury__char__HeadVar__1_1 == (MR_Integer) 17))
#line 466 "char.m"
                                        {
#line 466 "char.m"
                                          *mercury__char__HeadVar__2_2 = (MR_Char) 72;
#line 466 "char.m"
                                          mercury__char__succeeded = MR_TRUE;
#line 466 "char.m"
                                        }
#line 449 "char.m"
                                      else
#line 449 "char.m"
                                        if ((mercury__char__HeadVar__1_1 == (MR_Integer) 18))
#line 467 "char.m"
                                          {
#line 467 "char.m"
                                            *mercury__char__HeadVar__2_2 = (MR_Char) 73;
#line 467 "char.m"
                                            mercury__char__succeeded = MR_TRUE;
#line 467 "char.m"
                                          }
#line 449 "char.m"
                                        else
#line 449 "char.m"
                                          if ((mercury__char__HeadVar__1_1 == (MR_Integer) 19))
#line 468 "char.m"
                                            {
#line 468 "char.m"
                                              *mercury__char__HeadVar__2_2 = (MR_Char) 74;
#line 468 "char.m"
                                              mercury__char__succeeded = MR_TRUE;
#line 468 "char.m"
                                            }
#line 449 "char.m"
                                          else
#line 449 "char.m"
                                            if ((mercury__char__HeadVar__1_1 == (MR_Integer) 20))
#line 469 "char.m"
                                              {
#line 469 "char.m"
                                                *mercury__char__HeadVar__2_2 = (MR_Char) 75;
#line 469 "char.m"
                                                mercury__char__succeeded = MR_TRUE;
#line 469 "char.m"
                                              }
#line 449 "char.m"
                                            else
#line 449 "char.m"
                                              if ((mercury__char__HeadVar__1_1 == (MR_Integer) 21))
#line 470 "char.m"
                                                {
#line 470 "char.m"
                                                  *mercury__char__HeadVar__2_2 = (MR_Char) 76;
#line 470 "char.m"
                                                  mercury__char__succeeded = MR_TRUE;
#line 470 "char.m"
                                                }
#line 449 "char.m"
                                              else
#line 449 "char.m"
                                                if ((mercury__char__HeadVar__1_1 == (MR_Integer) 22))
#line 471 "char.m"
                                                  {
#line 471 "char.m"
                                                    *mercury__char__HeadVar__2_2 = (MR_Char) 77;
#line 471 "char.m"
                                                    mercury__char__succeeded = MR_TRUE;
#line 471 "char.m"
                                                  }
#line 449 "char.m"
                                                else
#line 449 "char.m"
                                                  if ((mercury__char__HeadVar__1_1 == (MR_Integer) 23))
#line 472 "char.m"
                                                    {
#line 472 "char.m"
                                                      *mercury__char__HeadVar__2_2 = (MR_Char) 78;
#line 472 "char.m"
                                                      mercury__char__succeeded = MR_TRUE;
#line 472 "char.m"
                                                    }
#line 449 "char.m"
                                                  else
#line 449 "char.m"
                                                    if ((mercury__char__HeadVar__1_1 == (MR_Integer) 24))
#line 473 "char.m"
                                                      {
#line 473 "char.m"
                                                        *mercury__char__HeadVar__2_2 = (MR_Char) 79;
#line 473 "char.m"
                                                        mercury__char__succeeded = MR_TRUE;
#line 473 "char.m"
                                                      }
#line 449 "char.m"
                                                    else
#line 449 "char.m"
                                                      if ((mercury__char__HeadVar__1_1 == (MR_Integer) 25))
#line 474 "char.m"
                                                        {
#line 474 "char.m"
                                                          *mercury__char__HeadVar__2_2 = (MR_Char) 80;
#line 474 "char.m"
                                                          mercury__char__succeeded = MR_TRUE;
#line 474 "char.m"
                                                        }
#line 449 "char.m"
                                                      else
#line 449 "char.m"
                                                        if ((mercury__char__HeadVar__1_1 == (MR_Integer) 26))
#line 475 "char.m"
                                                          {
#line 475 "char.m"
                                                            *mercury__char__HeadVar__2_2 = (MR_Char) 81;
#line 475 "char.m"
                                                            mercury__char__succeeded = MR_TRUE;
#line 475 "char.m"
                                                          }
#line 449 "char.m"
                                                        else
#line 449 "char.m"
                                                          if ((mercury__char__HeadVar__1_1 == (MR_Integer) 27))
#line 476 "char.m"
                                                            {
#line 476 "char.m"
                                                              *mercury__char__HeadVar__2_2 = (MR_Char) 82;
#line 476 "char.m"
                                                              mercury__char__succeeded = MR_TRUE;
#line 476 "char.m"
                                                            }
#line 449 "char.m"
                                                          else
#line 449 "char.m"
                                                            if ((mercury__char__HeadVar__1_1 == (MR_Integer) 28))
#line 477 "char.m"
                                                              {
#line 477 "char.m"
                                                                *mercury__char__HeadVar__2_2 = (MR_Char) 83;
#line 477 "char.m"
                                                                mercury__char__succeeded = MR_TRUE;
#line 477 "char.m"
                                                              }
#line 449 "char.m"
                                                            else
#line 449 "char.m"
                                                              if ((mercury__char__HeadVar__1_1 == (MR_Integer) 29))
#line 478 "char.m"
                                                                {
#line 478 "char.m"
                                                                  *mercury__char__HeadVar__2_2 = (MR_Char) 84;
#line 478 "char.m"
                                                                  mercury__char__succeeded = MR_TRUE;
#line 478 "char.m"
                                                                }
#line 449 "char.m"
                                                              else
#line 449 "char.m"
                                                                if ((mercury__char__HeadVar__1_1 == (MR_Integer) 30))
#line 479 "char.m"
                                                                  {
#line 479 "char.m"
                                                                    *mercury__char__HeadVar__2_2 = (MR_Char) 85;
#line 479 "char.m"
                                                                    mercury__char__succeeded = MR_TRUE;
#line 479 "char.m"
                                                                  }
#line 449 "char.m"
                                                                else
#line 449 "char.m"
                                                                  if ((mercury__char__HeadVar__1_1 == (MR_Integer) 31))
#line 480 "char.m"
                                                                    {
#line 480 "char.m"
                                                                      *mercury__char__HeadVar__2_2 = (MR_Char) 86;
#line 480 "char.m"
                                                                      mercury__char__succeeded = MR_TRUE;
#line 480 "char.m"
                                                                    }
#line 449 "char.m"
                                                                  else
#line 449 "char.m"
                                                                    if ((mercury__char__HeadVar__1_1 == (MR_Integer) 32))
#line 481 "char.m"
                                                                      {
#line 481 "char.m"
                                                                        *mercury__char__HeadVar__2_2 = (MR_Char) 87;
#line 481 "char.m"
                                                                        mercury__char__succeeded = MR_TRUE;
#line 481 "char.m"
                                                                      }
#line 449 "char.m"
                                                                    else
#line 449 "char.m"
                                                                      if ((mercury__char__HeadVar__1_1 == (MR_Integer) 33))
#line 482 "char.m"
                                                                        {
#line 482 "char.m"
                                                                          *mercury__char__HeadVar__2_2 = (MR_Char) 88;
#line 482 "char.m"
                                                                          mercury__char__succeeded = MR_TRUE;
#line 482 "char.m"
                                                                        }
#line 449 "char.m"
                                                                      else
#line 449 "char.m"
                                                                        if ((mercury__char__HeadVar__1_1 == (MR_Integer) 34))
#line 483 "char.m"
                                                                          {
#line 483 "char.m"
                                                                            *mercury__char__HeadVar__2_2 = (MR_Char) 89;
#line 483 "char.m"
                                                                            mercury__char__succeeded = MR_TRUE;
#line 483 "char.m"
                                                                          }
#line 449 "char.m"
                                                                        else
#line 449 "char.m"
                                                                          if ((mercury__char__HeadVar__1_1 == (MR_Integer) 35))
#line 484 "char.m"
                                                                            {
#line 484 "char.m"
                                                                              *mercury__char__HeadVar__2_2 = (MR_Char) 90;
#line 484 "char.m"
                                                                              mercury__char__succeeded = MR_TRUE;
#line 484 "char.m"
                                                                            }
#line 449 "char.m"
                                                                          else
#line 449 "char.m"
                                                                            mercury__char__succeeded = MR_FALSE;
#line 449 "char.m"
    return mercury__char__succeeded;
#line 449 "char.m"
  }
#line 174 "char.m"
}

#line 165 "char.m"
MR_bool MR_CALL 
mercury__char__digit_to_int_2_p_0(
#line 165 "char.m"
  MR_Char mercury__char__Digit_3,
#line 165 "char.m"
  MR_Integer * mercury__char__Int_4)
#line 165 "char.m"
{
#line 489 "char.m"
  {
#line 489 "char.m"
    MR_bool mercury__char__succeeded;
#line 489 "char.m"
    MR_Char mercury__char__Upper_5;

#line 487 "char.m"
    {
#line 487 "char.m"
      mercury__char__succeeded = mercury__char__lower_upper_2_p_0(mercury__char__Digit_3, &mercury__char__Upper_5);
    }
#line 489 "char.m"
    if (mercury__char__succeeded)
#line 488 "char.m"
      {
#line 488 "char.m"
        return mercury__char__succeeded = mercury__char__int_to_digit_2_p_1(mercury__char__Int_4, mercury__char__Upper_5);
      }
#line 489 "char.m"
    else
#line 490 "char.m"
      {
#line 490 "char.m"
        return mercury__char__succeeded = mercury__char__int_to_digit_2_p_1(mercury__char__Int_4, mercury__char__Digit_3);
      }
#line 489 "char.m"
    return mercury__char__succeeded;
#line 489 "char.m"
  }
#line 165 "char.m"
}

#line 160 "char.m"
MR_bool MR_CALL 
mercury__char__int_to_hex_char_2_p_0(
#line 160 "char.m"
  MR_Integer mercury__char__HeadVar__1_1,
#line 160 "char.m"
  MR_Char * mercury__char__HeadVar__2_2)
#line 160 "char.m"
{
#line 420 "char.m"
  {
#line 420 "char.m"
    MR_bool mercury__char__succeeded;

#line 420 "char.m"
    if ((mercury__char__HeadVar__1_1 == (MR_Integer) 0))
#line 420 "char.m"
      {
#line 420 "char.m"
        *mercury__char__HeadVar__2_2 = (MR_Char) 48;
#line 420 "char.m"
        mercury__char__succeeded = MR_TRUE;
#line 420 "char.m"
      }
#line 420 "char.m"
    else
#line 420 "char.m"
      if ((mercury__char__HeadVar__1_1 == (MR_Integer) 1))
#line 421 "char.m"
        {
#line 421 "char.m"
          *mercury__char__HeadVar__2_2 = (MR_Char) 49;
#line 421 "char.m"
          mercury__char__succeeded = MR_TRUE;
#line 421 "char.m"
        }
#line 420 "char.m"
      else
#line 420 "char.m"
        if ((mercury__char__HeadVar__1_1 == (MR_Integer) 2))
#line 422 "char.m"
          {
#line 422 "char.m"
            *mercury__char__HeadVar__2_2 = (MR_Char) 50;
#line 422 "char.m"
            mercury__char__succeeded = MR_TRUE;
#line 422 "char.m"
          }
#line 420 "char.m"
        else
#line 420 "char.m"
          if ((mercury__char__HeadVar__1_1 == (MR_Integer) 3))
#line 423 "char.m"
            {
#line 423 "char.m"
              *mercury__char__HeadVar__2_2 = (MR_Char) 51;
#line 423 "char.m"
              mercury__char__succeeded = MR_TRUE;
#line 423 "char.m"
            }
#line 420 "char.m"
          else
#line 420 "char.m"
            if ((mercury__char__HeadVar__1_1 == (MR_Integer) 4))
#line 424 "char.m"
              {
#line 424 "char.m"
                *mercury__char__HeadVar__2_2 = (MR_Char) 52;
#line 424 "char.m"
                mercury__char__succeeded = MR_TRUE;
#line 424 "char.m"
              }
#line 420 "char.m"
            else
#line 420 "char.m"
              if ((mercury__char__HeadVar__1_1 == (MR_Integer) 5))
#line 425 "char.m"
                {
#line 425 "char.m"
                  *mercury__char__HeadVar__2_2 = (MR_Char) 53;
#line 425 "char.m"
                  mercury__char__succeeded = MR_TRUE;
#line 425 "char.m"
                }
#line 420 "char.m"
              else
#line 420 "char.m"
                if ((mercury__char__HeadVar__1_1 == (MR_Integer) 6))
#line 426 "char.m"
                  {
#line 426 "char.m"
                    *mercury__char__HeadVar__2_2 = (MR_Char) 54;
#line 426 "char.m"
                    mercury__char__succeeded = MR_TRUE;
#line 426 "char.m"
                  }
#line 420 "char.m"
                else
#line 420 "char.m"
                  if ((mercury__char__HeadVar__1_1 == (MR_Integer) 7))
#line 427 "char.m"
                    {
#line 427 "char.m"
                      *mercury__char__HeadVar__2_2 = (MR_Char) 55;
#line 427 "char.m"
                      mercury__char__succeeded = MR_TRUE;
#line 427 "char.m"
                    }
#line 420 "char.m"
                  else
#line 420 "char.m"
                    if ((mercury__char__HeadVar__1_1 == (MR_Integer) 8))
#line 428 "char.m"
                      {
#line 428 "char.m"
                        *mercury__char__HeadVar__2_2 = (MR_Char) 56;
#line 428 "char.m"
                        mercury__char__succeeded = MR_TRUE;
#line 428 "char.m"
                      }
#line 420 "char.m"
                    else
#line 420 "char.m"
                      if ((mercury__char__HeadVar__1_1 == (MR_Integer) 9))
#line 429 "char.m"
                        {
#line 429 "char.m"
                          *mercury__char__HeadVar__2_2 = (MR_Char) 57;
#line 429 "char.m"
                          mercury__char__succeeded = MR_TRUE;
#line 429 "char.m"
                        }
#line 420 "char.m"
                      else
#line 420 "char.m"
                        if ((mercury__char__HeadVar__1_1 == (MR_Integer) 10))
#line 430 "char.m"
                          {
#line 430 "char.m"
                            *mercury__char__HeadVar__2_2 = (MR_Char) 65;
#line 430 "char.m"
                            mercury__char__succeeded = MR_TRUE;
#line 430 "char.m"
                          }
#line 420 "char.m"
                        else
#line 420 "char.m"
                          if ((mercury__char__HeadVar__1_1 == (MR_Integer) 11))
#line 431 "char.m"
                            {
#line 431 "char.m"
                              *mercury__char__HeadVar__2_2 = (MR_Char) 66;
#line 431 "char.m"
                              mercury__char__succeeded = MR_TRUE;
#line 431 "char.m"
                            }
#line 420 "char.m"
                          else
#line 420 "char.m"
                            if ((mercury__char__HeadVar__1_1 == (MR_Integer) 12))
#line 432 "char.m"
                              {
#line 432 "char.m"
                                *mercury__char__HeadVar__2_2 = (MR_Char) 67;
#line 432 "char.m"
                                mercury__char__succeeded = MR_TRUE;
#line 432 "char.m"
                              }
#line 420 "char.m"
                            else
#line 420 "char.m"
                              if ((mercury__char__HeadVar__1_1 == (MR_Integer) 13))
#line 433 "char.m"
                                {
#line 433 "char.m"
                                  *mercury__char__HeadVar__2_2 = (MR_Char) 68;
#line 433 "char.m"
                                  mercury__char__succeeded = MR_TRUE;
#line 433 "char.m"
                                }
#line 420 "char.m"
                              else
#line 420 "char.m"
                                if ((mercury__char__HeadVar__1_1 == (MR_Integer) 14))
#line 434 "char.m"
                                  {
#line 434 "char.m"
                                    *mercury__char__HeadVar__2_2 = (MR_Char) 69;
#line 434 "char.m"
                                    mercury__char__succeeded = MR_TRUE;
#line 434 "char.m"
                                  }
#line 420 "char.m"
                                else
#line 420 "char.m"
                                  if ((mercury__char__HeadVar__1_1 == (MR_Integer) 15))
#line 435 "char.m"
                                    {
#line 435 "char.m"
                                      *mercury__char__HeadVar__2_2 = (MR_Char) 70;
#line 435 "char.m"
                                      mercury__char__succeeded = MR_TRUE;
#line 435 "char.m"
                                    }
#line 420 "char.m"
                                  else
#line 420 "char.m"
                                    mercury__char__succeeded = MR_FALSE;
#line 420 "char.m"
    return mercury__char__succeeded;
#line 420 "char.m"
  }
#line 160 "char.m"
}

#line 154 "char.m"
MR_bool MR_CALL 
mercury__char__is_hex_digit_2_p_0(
#line 154 "char.m"
  MR_Char mercury__char__HeadVar__1_1,
#line 154 "char.m"
  MR_Integer * mercury__char__HeadVar__2_2)
#line 154 "char.m"
{
#line 397 "char.m"
  {
#line 397 "char.m"
    MR_bool mercury__char__succeeded;

#line 397 "char.m"
    if ((mercury__char__HeadVar__1_1 == (MR_Char) 48))
#line 397 "char.m"
      {
#line 397 "char.m"
        *mercury__char__HeadVar__2_2 = (MR_Integer) 0;
#line 397 "char.m"
        mercury__char__succeeded = MR_TRUE;
#line 397 "char.m"
      }
#line 397 "char.m"
    else
#line 397 "char.m"
      if ((mercury__char__HeadVar__1_1 == (MR_Char) 49))
#line 398 "char.m"
        {
#line 398 "char.m"
          *mercury__char__HeadVar__2_2 = (MR_Integer) 1;
#line 398 "char.m"
          mercury__char__succeeded = MR_TRUE;
#line 398 "char.m"
        }
#line 397 "char.m"
      else
#line 397 "char.m"
        if ((mercury__char__HeadVar__1_1 == (MR_Char) 50))
#line 399 "char.m"
          {
#line 399 "char.m"
            *mercury__char__HeadVar__2_2 = (MR_Integer) 2;
#line 399 "char.m"
            mercury__char__succeeded = MR_TRUE;
#line 399 "char.m"
          }
#line 397 "char.m"
        else
#line 397 "char.m"
          if ((mercury__char__HeadVar__1_1 == (MR_Char) 51))
#line 400 "char.m"
            {
#line 400 "char.m"
              *mercury__char__HeadVar__2_2 = (MR_Integer) 3;
#line 400 "char.m"
              mercury__char__succeeded = MR_TRUE;
#line 400 "char.m"
            }
#line 397 "char.m"
          else
#line 397 "char.m"
            if ((mercury__char__HeadVar__1_1 == (MR_Char) 52))
#line 401 "char.m"
              {
#line 401 "char.m"
                *mercury__char__HeadVar__2_2 = (MR_Integer) 4;
#line 401 "char.m"
                mercury__char__succeeded = MR_TRUE;
#line 401 "char.m"
              }
#line 397 "char.m"
            else
#line 397 "char.m"
              if ((mercury__char__HeadVar__1_1 == (MR_Char) 53))
#line 402 "char.m"
                {
#line 402 "char.m"
                  *mercury__char__HeadVar__2_2 = (MR_Integer) 5;
#line 402 "char.m"
                  mercury__char__succeeded = MR_TRUE;
#line 402 "char.m"
                }
#line 397 "char.m"
              else
#line 397 "char.m"
                if ((mercury__char__HeadVar__1_1 == (MR_Char) 54))
#line 403 "char.m"
                  {
#line 403 "char.m"
                    *mercury__char__HeadVar__2_2 = (MR_Integer) 6;
#line 403 "char.m"
                    mercury__char__succeeded = MR_TRUE;
#line 403 "char.m"
                  }
#line 397 "char.m"
                else
#line 397 "char.m"
                  if ((mercury__char__HeadVar__1_1 == (MR_Char) 55))
#line 404 "char.m"
                    {
#line 404 "char.m"
                      *mercury__char__HeadVar__2_2 = (MR_Integer) 7;
#line 404 "char.m"
                      mercury__char__succeeded = MR_TRUE;
#line 404 "char.m"
                    }
#line 397 "char.m"
                  else
#line 397 "char.m"
                    if ((mercury__char__HeadVar__1_1 == (MR_Char) 56))
#line 405 "char.m"
                      {
#line 405 "char.m"
                        *mercury__char__HeadVar__2_2 = (MR_Integer) 8;
#line 405 "char.m"
                        mercury__char__succeeded = MR_TRUE;
#line 405 "char.m"
                      }
#line 397 "char.m"
                    else
#line 397 "char.m"
                      if ((mercury__char__HeadVar__1_1 == (MR_Char) 57))
#line 406 "char.m"
                        {
#line 406 "char.m"
                          *mercury__char__HeadVar__2_2 = (MR_Integer) 9;
#line 406 "char.m"
                          mercury__char__succeeded = MR_TRUE;
#line 406 "char.m"
                        }
#line 397 "char.m"
                      else
#line 397 "char.m"
                        if ((mercury__char__HeadVar__1_1 == (MR_Char) 65))
#line 413 "char.m"
                          {
#line 413 "char.m"
                            *mercury__char__HeadVar__2_2 = (MR_Integer) 10;
#line 413 "char.m"
                            mercury__char__succeeded = MR_TRUE;
#line 413 "char.m"
                          }
#line 397 "char.m"
                        else
#line 397 "char.m"
                          if ((mercury__char__HeadVar__1_1 == (MR_Char) 66))
#line 414 "char.m"
                            {
#line 414 "char.m"
                              *mercury__char__HeadVar__2_2 = (MR_Integer) 11;
#line 414 "char.m"
                              mercury__char__succeeded = MR_TRUE;
#line 414 "char.m"
                            }
#line 397 "char.m"
                          else
#line 397 "char.m"
                            if ((mercury__char__HeadVar__1_1 == (MR_Char) 67))
#line 415 "char.m"
                              {
#line 415 "char.m"
                                *mercury__char__HeadVar__2_2 = (MR_Integer) 12;
#line 415 "char.m"
                                mercury__char__succeeded = MR_TRUE;
#line 415 "char.m"
                              }
#line 397 "char.m"
                            else
#line 397 "char.m"
                              if ((mercury__char__HeadVar__1_1 == (MR_Char) 68))
#line 416 "char.m"
                                {
#line 416 "char.m"
                                  *mercury__char__HeadVar__2_2 = (MR_Integer) 13;
#line 416 "char.m"
                                  mercury__char__succeeded = MR_TRUE;
#line 416 "char.m"
                                }
#line 397 "char.m"
                              else
#line 397 "char.m"
                                if ((mercury__char__HeadVar__1_1 == (MR_Char) 69))
#line 417 "char.m"
                                  {
#line 417 "char.m"
                                    *mercury__char__HeadVar__2_2 = (MR_Integer) 14;
#line 417 "char.m"
                                    mercury__char__succeeded = MR_TRUE;
#line 417 "char.m"
                                  }
#line 397 "char.m"
                                else
#line 397 "char.m"
                                  if ((mercury__char__HeadVar__1_1 == (MR_Char) 70))
#line 418 "char.m"
                                    {
#line 418 "char.m"
                                      *mercury__char__HeadVar__2_2 = (MR_Integer) 15;
#line 418 "char.m"
                                      mercury__char__succeeded = MR_TRUE;
#line 418 "char.m"
                                    }
#line 397 "char.m"
                                  else
#line 397 "char.m"
                                    if ((mercury__char__HeadVar__1_1 == (MR_Char) 97))
#line 407 "char.m"
                                      {
#line 407 "char.m"
                                        *mercury__char__HeadVar__2_2 = (MR_Integer) 10;
#line 407 "char.m"
                                        mercury__char__succeeded = MR_TRUE;
#line 407 "char.m"
                                      }
#line 397 "char.m"
                                    else
#line 397 "char.m"
                                      if ((mercury__char__HeadVar__1_1 == (MR_Char) 98))
#line 408 "char.m"
                                        {
#line 408 "char.m"
                                          *mercury__char__HeadVar__2_2 = (MR_Integer) 11;
#line 408 "char.m"
                                          mercury__char__succeeded = MR_TRUE;
#line 408 "char.m"
                                        }
#line 397 "char.m"
                                      else
#line 397 "char.m"
                                        if ((mercury__char__HeadVar__1_1 == (MR_Char) 99))
#line 409 "char.m"
                                          {
#line 409 "char.m"
                                            *mercury__char__HeadVar__2_2 = (MR_Integer) 12;
#line 409 "char.m"
                                            mercury__char__succeeded = MR_TRUE;
#line 409 "char.m"
                                          }
#line 397 "char.m"
                                        else
#line 397 "char.m"
                                          if ((mercury__char__HeadVar__1_1 == (MR_Char) 100))
#line 410 "char.m"
                                            {
#line 410 "char.m"
                                              *mercury__char__HeadVar__2_2 = (MR_Integer) 13;
#line 410 "char.m"
                                              mercury__char__succeeded = MR_TRUE;
#line 410 "char.m"
                                            }
#line 397 "char.m"
                                          else
#line 397 "char.m"
                                            if ((mercury__char__HeadVar__1_1 == (MR_Char) 101))
#line 411 "char.m"
                                              {
#line 411 "char.m"
                                                *mercury__char__HeadVar__2_2 = (MR_Integer) 14;
#line 411 "char.m"
                                                mercury__char__succeeded = MR_TRUE;
#line 411 "char.m"
                                              }
#line 397 "char.m"
                                            else
#line 397 "char.m"
                                              if ((mercury__char__HeadVar__1_1 == (MR_Char) 102))
#line 412 "char.m"
                                                {
#line 412 "char.m"
                                                  *mercury__char__HeadVar__2_2 = (MR_Integer) 15;
#line 412 "char.m"
                                                  mercury__char__succeeded = MR_TRUE;
#line 412 "char.m"
                                                }
#line 397 "char.m"
                                              else
#line 397 "char.m"
                                                mercury__char__succeeded = MR_FALSE;
#line 397 "char.m"
    return mercury__char__succeeded;
#line 397 "char.m"
  }
#line 154 "char.m"
}

#line 151 "char.m"
MR_bool MR_CALL 
mercury__char__is_hex_digit_1_p_0(
#line 151 "char.m"
  MR_Char mercury__char__X_2)
#line 151 "char.m"
{
#line 395 "char.m"
  {
#line 395 "char.m"
    MR_bool mercury__char__succeeded;
#line 395 "char.m"
    MR_Integer mercury__char__V_3_3;

#line 395 "char.m"
    {
#line 395 "char.m"
      mercury__char__succeeded = mercury__char__is_hex_digit_2_p_0(mercury__char__X_2, &mercury__char__V_3_3);
    }
#line 395 "char.m"
    return mercury__char__succeeded;
#line 395 "char.m"
  }
#line 151 "char.m"
}

#line 146 "char.m"
MR_bool MR_CALL 
mercury__char__is_octal_digit_1_p_0(
#line 146 "char.m"
  MR_Char mercury__char__HeadVar__1_1)
#line 146 "char.m"
{
#line 375 "char.m"
  {
#line 375 "char.m"
    MR_bool mercury__char__succeeded;

#line 375 "char.m"
    if ((mercury__char__HeadVar__1_1 == (MR_Char) 48))
#line 375 "char.m"
      mercury__char__succeeded = MR_TRUE;
#line 375 "char.m"
    else
#line 375 "char.m"
      if ((mercury__char__HeadVar__1_1 == (MR_Char) 49))
#line 376 "char.m"
        mercury__char__succeeded = MR_TRUE;
#line 375 "char.m"
      else
#line 375 "char.m"
        if ((mercury__char__HeadVar__1_1 == (MR_Char) 50))
#line 377 "char.m"
          mercury__char__succeeded = MR_TRUE;
#line 375 "char.m"
        else
#line 375 "char.m"
          if ((mercury__char__HeadVar__1_1 == (MR_Char) 51))
#line 378 "char.m"
            mercury__char__succeeded = MR_TRUE;
#line 375 "char.m"
          else
#line 375 "char.m"
            if ((mercury__char__HeadVar__1_1 == (MR_Char) 52))
#line 379 "char.m"
              mercury__char__succeeded = MR_TRUE;
#line 375 "char.m"
            else
#line 375 "char.m"
              if ((mercury__char__HeadVar__1_1 == (MR_Char) 53))
#line 380 "char.m"
                mercury__char__succeeded = MR_TRUE;
#line 375 "char.m"
              else
#line 375 "char.m"
                if ((mercury__char__HeadVar__1_1 == (MR_Char) 54))
#line 381 "char.m"
                  mercury__char__succeeded = MR_TRUE;
#line 375 "char.m"
                else
#line 375 "char.m"
                  if ((mercury__char__HeadVar__1_1 == (MR_Char) 55))
#line 382 "char.m"
                    mercury__char__succeeded = MR_TRUE;
#line 375 "char.m"
                  else
#line 375 "char.m"
                    mercury__char__succeeded = MR_FALSE;
#line 375 "char.m"
    return mercury__char__succeeded;
#line 375 "char.m"
  }
#line 146 "char.m"
}

#line 142 "char.m"
MR_bool MR_CALL 
mercury__char__is_binary_digit_1_p_0(
#line 142 "char.m"
  MR_Char mercury__char__HeadVar__1_1)
#line 142 "char.m"
{
#line 372 "char.m"
  {
#line 372 "char.m"
    MR_bool mercury__char__succeeded;

#line 372 "char.m"
    if ((mercury__char__HeadVar__1_1 == (MR_Char) 48))
#line 372 "char.m"
      mercury__char__succeeded = MR_TRUE;
#line 372 "char.m"
    else
#line 372 "char.m"
      if ((mercury__char__HeadVar__1_1 == (MR_Char) 49))
#line 373 "char.m"
        mercury__char__succeeded = MR_TRUE;
#line 372 "char.m"
      else
#line 372 "char.m"
        mercury__char__succeeded = MR_FALSE;
#line 372 "char.m"
    return mercury__char__succeeded;
#line 372 "char.m"
  }
#line 142 "char.m"
}

#line 138 "char.m"
MR_bool MR_CALL 
mercury__char__is_digit_1_p_0(
#line 138 "char.m"
  MR_Char mercury__char__HeadVar__1_1)
#line 138 "char.m"
{
#line 384 "char.m"
  {
#line 384 "char.m"
    MR_bool mercury__char__succeeded;

#line 384 "char.m"
    if ((mercury__char__HeadVar__1_1 == (MR_Char) 48))
#line 384 "char.m"
      mercury__char__succeeded = MR_TRUE;
#line 384 "char.m"
    else
#line 384 "char.m"
      if ((mercury__char__HeadVar__1_1 == (MR_Char) 49))
#line 385 "char.m"
        mercury__char__succeeded = MR_TRUE;
#line 384 "char.m"
      else
#line 384 "char.m"
        if ((mercury__char__HeadVar__1_1 == (MR_Char) 50))
#line 386 "char.m"
          mercury__char__succeeded = MR_TRUE;
#line 384 "char.m"
        else
#line 384 "char.m"
          if ((mercury__char__HeadVar__1_1 == (MR_Char) 51))
#line 387 "char.m"
            mercury__char__succeeded = MR_TRUE;
#line 384 "char.m"
          else
#line 384 "char.m"
            if ((mercury__char__HeadVar__1_1 == (MR_Char) 52))
#line 388 "char.m"
              mercury__char__succeeded = MR_TRUE;
#line 384 "char.m"
            else
#line 384 "char.m"
              if ((mercury__char__HeadVar__1_1 == (MR_Char) 53))
#line 389 "char.m"
                mercury__char__succeeded = MR_TRUE;
#line 384 "char.m"
              else
#line 384 "char.m"
                if ((mercury__char__HeadVar__1_1 == (MR_Char) 54))
#line 390 "char.m"
                  mercury__char__succeeded = MR_TRUE;
#line 384 "char.m"
                else
#line 384 "char.m"
                  if ((mercury__char__HeadVar__1_1 == (MR_Char) 55))
#line 391 "char.m"
                    mercury__char__succeeded = MR_TRUE;
#line 384 "char.m"
                  else
#line 384 "char.m"
                    if ((mercury__char__HeadVar__1_1 == (MR_Char) 56))
#line 392 "char.m"
                      mercury__char__succeeded = MR_TRUE;
#line 384 "char.m"
                    else
#line 384 "char.m"
                      if ((mercury__char__HeadVar__1_1 == (MR_Char) 57))
#line 393 "char.m"
                        mercury__char__succeeded = MR_TRUE;
#line 384 "char.m"
                      else
#line 384 "char.m"
                        mercury__char__succeeded = MR_FALSE;
#line 384 "char.m"
    return mercury__char__succeeded;
#line 384 "char.m"
  }
#line 138 "char.m"
}

#line 134 "char.m"
MR_bool MR_CALL 
mercury__char__is_alnum_or_underscore_1_p_0(
#line 134 "char.m"
  MR_Char mercury__char__Char_2)
#line 134 "char.m"
{
#line 262 "char.m"
  {
#line 262 "char.m"
    MR_bool mercury__char__succeeded;

#line 262 "char.m"
    if ((mercury__char__Char_2 == (MR_Char) 48))
#line 262 "char.m"
      mercury__char__succeeded = MR_TRUE;
#line 262 "char.m"
    else
#line 262 "char.m"
      if ((mercury__char__Char_2 == (MR_Char) 49))
#line 263 "char.m"
        mercury__char__succeeded = MR_TRUE;
#line 262 "char.m"
      else
#line 262 "char.m"
        if ((mercury__char__Char_2 == (MR_Char) 50))
#line 264 "char.m"
          mercury__char__succeeded = MR_TRUE;
#line 262 "char.m"
        else
#line 262 "char.m"
          if ((mercury__char__Char_2 == (MR_Char) 51))
#line 265 "char.m"
            mercury__char__succeeded = MR_TRUE;
#line 262 "char.m"
          else
#line 262 "char.m"
            if ((mercury__char__Char_2 == (MR_Char) 52))
#line 266 "char.m"
              mercury__char__succeeded = MR_TRUE;
#line 262 "char.m"
            else
#line 262 "char.m"
              if ((mercury__char__Char_2 == (MR_Char) 53))
#line 267 "char.m"
                mercury__char__succeeded = MR_TRUE;
#line 262 "char.m"
              else
#line 262 "char.m"
                if ((mercury__char__Char_2 == (MR_Char) 54))
#line 268 "char.m"
                  mercury__char__succeeded = MR_TRUE;
#line 262 "char.m"
                else
#line 262 "char.m"
                  if ((mercury__char__Char_2 == (MR_Char) 55))
#line 269 "char.m"
                    mercury__char__succeeded = MR_TRUE;
#line 262 "char.m"
                  else
#line 262 "char.m"
                    if ((mercury__char__Char_2 == (MR_Char) 56))
#line 270 "char.m"
                      mercury__char__succeeded = MR_TRUE;
#line 262 "char.m"
                    else
#line 262 "char.m"
                      if ((mercury__char__Char_2 == (MR_Char) 57))
#line 271 "char.m"
                        mercury__char__succeeded = MR_TRUE;
#line 262 "char.m"
                      else
#line 262 "char.m"
                        if ((mercury__char__Char_2 == (MR_Char) 65))
#line 298 "char.m"
                          mercury__char__succeeded = MR_TRUE;
#line 262 "char.m"
                        else
#line 262 "char.m"
                          if ((mercury__char__Char_2 == (MR_Char) 66))
#line 299 "char.m"
                            mercury__char__succeeded = MR_TRUE;
#line 262 "char.m"
                          else
#line 262 "char.m"
                            if ((mercury__char__Char_2 == (MR_Char) 67))
#line 300 "char.m"
                              mercury__char__succeeded = MR_TRUE;
#line 262 "char.m"
                            else
#line 262 "char.m"
                              if ((mercury__char__Char_2 == (MR_Char) 68))
#line 301 "char.m"
                                mercury__char__succeeded = MR_TRUE;
#line 262 "char.m"
                              else
#line 262 "char.m"
                                if ((mercury__char__Char_2 == (MR_Char) 69))
#line 302 "char.m"
                                  mercury__char__succeeded = MR_TRUE;
#line 262 "char.m"
                                else
#line 262 "char.m"
                                  if ((mercury__char__Char_2 == (MR_Char) 70))
#line 303 "char.m"
                                    mercury__char__succeeded = MR_TRUE;
#line 262 "char.m"
                                  else
#line 262 "char.m"
                                    if ((mercury__char__Char_2 == (MR_Char) 71))
#line 304 "char.m"
                                      mercury__char__succeeded = MR_TRUE;
#line 262 "char.m"
                                    else
#line 262 "char.m"
                                      if ((mercury__char__Char_2 == (MR_Char) 72))
#line 305 "char.m"
                                        mercury__char__succeeded = MR_TRUE;
#line 262 "char.m"
                                      else
#line 262 "char.m"
                                        if ((mercury__char__Char_2 == (MR_Char) 73))
#line 306 "char.m"
                                          mercury__char__succeeded = MR_TRUE;
#line 262 "char.m"
                                        else
#line 262 "char.m"
                                          if ((mercury__char__Char_2 == (MR_Char) 74))
#line 307 "char.m"
                                            mercury__char__succeeded = MR_TRUE;
#line 262 "char.m"
                                          else
#line 262 "char.m"
                                            if ((mercury__char__Char_2 == (MR_Char) 75))
#line 308 "char.m"
                                              mercury__char__succeeded = MR_TRUE;
#line 262 "char.m"
                                            else
#line 262 "char.m"
                                              if ((mercury__char__Char_2 == (MR_Char) 76))
#line 309 "char.m"
                                                mercury__char__succeeded = MR_TRUE;
#line 262 "char.m"
                                              else
#line 262 "char.m"
                                                if ((mercury__char__Char_2 == (MR_Char) 77))
#line 310 "char.m"
                                                  mercury__char__succeeded = MR_TRUE;
#line 262 "char.m"
                                                else
#line 262 "char.m"
                                                  if ((mercury__char__Char_2 == (MR_Char) 78))
#line 311 "char.m"
                                                    mercury__char__succeeded = MR_TRUE;
#line 262 "char.m"
                                                  else
#line 262 "char.m"
                                                    if ((mercury__char__Char_2 == (MR_Char) 79))
#line 312 "char.m"
                                                      mercury__char__succeeded = MR_TRUE;
#line 262 "char.m"
                                                    else
#line 262 "char.m"
                                                      if ((mercury__char__Char_2 == (MR_Char) 80))
#line 313 "char.m"
                                                        mercury__char__succeeded = MR_TRUE;
#line 262 "char.m"
                                                      else
#line 262 "char.m"
                                                        if ((mercury__char__Char_2 == (MR_Char) 81))
#line 314 "char.m"
                                                          mercury__char__succeeded = MR_TRUE;
#line 262 "char.m"
                                                        else
#line 262 "char.m"
                                                          if ((mercury__char__Char_2 == (MR_Char) 82))
#line 315 "char.m"
                                                            mercury__char__succeeded = MR_TRUE;
#line 262 "char.m"
                                                          else
#line 262 "char.m"
                                                            if ((mercury__char__Char_2 == (MR_Char) 83))
#line 316 "char.m"
                                                              mercury__char__succeeded = MR_TRUE;
#line 262 "char.m"
                                                            else
#line 262 "char.m"
                                                              if ((mercury__char__Char_2 == (MR_Char) 84))
#line 317 "char.m"
                                                                mercury__char__succeeded = MR_TRUE;
#line 262 "char.m"
                                                              else
#line 262 "char.m"
                                                                if ((mercury__char__Char_2 == (MR_Char) 85))
#line 318 "char.m"
                                                                  mercury__char__succeeded = MR_TRUE;
#line 262 "char.m"
                                                                else
#line 262 "char.m"
                                                                  if ((mercury__char__Char_2 == (MR_Char) 86))
#line 319 "char.m"
                                                                    mercury__char__succeeded = MR_TRUE;
#line 262 "char.m"
                                                                  else
#line 262 "char.m"
                                                                    if ((mercury__char__Char_2 == (MR_Char) 87))
#line 320 "char.m"
                                                                      mercury__char__succeeded = MR_TRUE;
#line 262 "char.m"
                                                                    else
#line 262 "char.m"
                                                                      if ((mercury__char__Char_2 == (MR_Char) 88))
#line 321 "char.m"
                                                                        mercury__char__succeeded = MR_TRUE;
#line 262 "char.m"
                                                                      else
#line 262 "char.m"
                                                                        if ((mercury__char__Char_2 == (MR_Char) 89))
#line 322 "char.m"
                                                                          mercury__char__succeeded = MR_TRUE;
#line 262 "char.m"
                                                                        else
#line 262 "char.m"
                                                                          if ((mercury__char__Char_2 == (MR_Char) 90))
#line 323 "char.m"
                                                                            mercury__char__succeeded = MR_TRUE;
#line 262 "char.m"
                                                                          else
#line 262 "char.m"
                                                                            if ((mercury__char__Char_2 == (MR_Char) 95))
#line 324 "char.m"
                                                                              mercury__char__succeeded = MR_TRUE;
#line 262 "char.m"
                                                                            else
#line 262 "char.m"
                                                                              if ((mercury__char__Char_2 == (MR_Char) 97))
#line 272 "char.m"
                                                                                mercury__char__succeeded = MR_TRUE;
#line 262 "char.m"
                                                                              else
#line 262 "char.m"
                                                                                if ((mercury__char__Char_2 == (MR_Char) 98))
#line 273 "char.m"
                                                                                  mercury__char__succeeded = MR_TRUE;
#line 262 "char.m"
                                                                                else
#line 262 "char.m"
                                                                                  if ((mercury__char__Char_2 == (MR_Char) 99))
#line 274 "char.m"
                                                                                    mercury__char__succeeded = MR_TRUE;
#line 262 "char.m"
                                                                                  else
#line 262 "char.m"
                                                                                    if ((mercury__char__Char_2 == (MR_Char) 100))
#line 275 "char.m"
                                                                                      mercury__char__succeeded = MR_TRUE;
#line 262 "char.m"
                                                                                    else
#line 262 "char.m"
                                                                                      if ((mercury__char__Char_2 == (MR_Char) 101))
#line 276 "char.m"
                                                                                        mercury__char__succeeded = MR_TRUE;
#line 262 "char.m"
                                                                                      else
#line 262 "char.m"
                                                                                        if ((mercury__char__Char_2 == (MR_Char) 102))
#line 277 "char.m"
                                                                                          mercury__char__succeeded = MR_TRUE;
#line 262 "char.m"
                                                                                        else
#line 262 "char.m"
                                                                                          if ((mercury__char__Char_2 == (MR_Char) 103))
#line 278 "char.m"
                                                                                            mercury__char__succeeded = MR_TRUE;
#line 262 "char.m"
                                                                                          else
#line 262 "char.m"
                                                                                            if ((mercury__char__Char_2 == (MR_Char) 104))
#line 279 "char.m"
                                                                                              mercury__char__succeeded = MR_TRUE;
#line 262 "char.m"
                                                                                            else
#line 262 "char.m"
                                                                                              if ((mercury__char__Char_2 == (MR_Char) 105))
#line 280 "char.m"
                                                                                                mercury__char__succeeded = MR_TRUE;
#line 262 "char.m"
                                                                                              else
#line 262 "char.m"
                                                                                                if ((mercury__char__Char_2 == (MR_Char) 106))
#line 281 "char.m"
                                                                                                  mercury__char__succeeded = MR_TRUE;
#line 262 "char.m"
                                                                                                else
#line 262 "char.m"
                                                                                                  if ((mercury__char__Char_2 == (MR_Char) 107))
#line 282 "char.m"
                                                                                                    mercury__char__succeeded = MR_TRUE;
#line 262 "char.m"
                                                                                                  else
#line 262 "char.m"
                                                                                                    if ((mercury__char__Char_2 == (MR_Char) 108))
#line 283 "char.m"
                                                                                                      mercury__char__succeeded = MR_TRUE;
#line 262 "char.m"
                                                                                                    else
#line 262 "char.m"
                                                                                                      if ((mercury__char__Char_2 == (MR_Char) 109))
#line 284 "char.m"
                                                                                                        mercury__char__succeeded = MR_TRUE;
#line 262 "char.m"
                                                                                                      else
#line 262 "char.m"
                                                                                                        if ((mercury__char__Char_2 == (MR_Char) 110))
#line 285 "char.m"
                                                                                                          mercury__char__succeeded = MR_TRUE;
#line 262 "char.m"
                                                                                                        else
#line 262 "char.m"
                                                                                                          if ((mercury__char__Char_2 == (MR_Char) 111))
#line 286 "char.m"
                                                                                                            mercury__char__succeeded = MR_TRUE;
#line 262 "char.m"
                                                                                                          else
#line 262 "char.m"
                                                                                                            if ((mercury__char__Char_2 == (MR_Char) 112))
#line 287 "char.m"
                                                                                                              mercury__char__succeeded = MR_TRUE;
#line 262 "char.m"
                                                                                                            else
#line 262 "char.m"
                                                                                                              if ((mercury__char__Char_2 == (MR_Char) 113))
#line 288 "char.m"
                                                                                                                mercury__char__succeeded = MR_TRUE;
#line 262 "char.m"
                                                                                                              else
#line 262 "char.m"
                                                                                                                if ((mercury__char__Char_2 == (MR_Char) 114))
#line 289 "char.m"
                                                                                                                  mercury__char__succeeded = MR_TRUE;
#line 262 "char.m"
                                                                                                                else
#line 262 "char.m"
                                                                                                                  if ((mercury__char__Char_2 == (MR_Char) 115))
#line 290 "char.m"
                                                                                                                    mercury__char__succeeded = MR_TRUE;
#line 262 "char.m"
                                                                                                                  else
#line 262 "char.m"
                                                                                                                    if ((mercury__char__Char_2 == (MR_Char) 116))
#line 291 "char.m"
                                                                                                                      mercury__char__succeeded = MR_TRUE;
#line 262 "char.m"
                                                                                                                    else
#line 262 "char.m"
                                                                                                                      if ((mercury__char__Char_2 == (MR_Char) 117))
#line 292 "char.m"
                                                                                                                        mercury__char__succeeded = MR_TRUE;
#line 262 "char.m"
                                                                                                                      else
#line 262 "char.m"
                                                                                                                        if ((mercury__char__Char_2 == (MR_Char) 118))
#line 293 "char.m"
                                                                                                                          mercury__char__succeeded = MR_TRUE;
#line 262 "char.m"
                                                                                                                        else
#line 262 "char.m"
                                                                                                                          if ((mercury__char__Char_2 == (MR_Char) 119))
#line 294 "char.m"
                                                                                                                            mercury__char__succeeded = MR_TRUE;
#line 262 "char.m"
                                                                                                                          else
#line 262 "char.m"
                                                                                                                            if ((mercury__char__Char_2 == (MR_Char) 120))
#line 295 "char.m"
                                                                                                                              mercury__char__succeeded = MR_TRUE;
#line 262 "char.m"
                                                                                                                            else
#line 262 "char.m"
                                                                                                                              if ((mercury__char__Char_2 == (MR_Char) 121))
#line 296 "char.m"
                                                                                                                                mercury__char__succeeded = MR_TRUE;
#line 262 "char.m"
                                                                                                                              else
#line 262 "char.m"
                                                                                                                                if ((mercury__char__Char_2 == (MR_Char) 122))
#line 297 "char.m"
                                                                                                                                  mercury__char__succeeded = MR_TRUE;
#line 262 "char.m"
                                                                                                                                else
#line 262 "char.m"
                                                                                                                                  mercury__char__succeeded = MR_FALSE;
#line 262 "char.m"
    return mercury__char__succeeded;
#line 262 "char.m"
  }
#line 134 "char.m"
}

#line 129 "char.m"
MR_bool MR_CALL 
mercury__char__is_alpha_or_underscore_1_p_0(
#line 129 "char.m"
  MR_Char mercury__char__Char_2)
#line 129 "char.m"
{
#line 254 "char.m"
  {
#line 254 "char.m"
    MR_bool mercury__char__succeeded = (mercury__char__Char_2 == (MR_Char) 95);

#line 254 "char.m"
    if (mercury__char__succeeded)
#line 253 "char.m"
      mercury__char__succeeded = MR_TRUE;
#line 254 "char.m"
    else
#line 236 "char.m"
      {
#line 334 "char.m"
        MR_Char mercury__char__V_5_5;

#line 334 "char.m"
        {
#line 334 "char.m"
          mercury__char__succeeded = mercury__char__lower_upper_2_p_0(mercury__char__Char_2, &mercury__char__V_5_5);
        }
#line 236 "char.m"
        if (mercury__char__succeeded)
#line 235 "char.m"
          mercury__char__succeeded = MR_TRUE;
#line 236 "char.m"
        else
#line 337 "char.m"
          {
#line 337 "char.m"
            MR_Char mercury__char__V_7_7;

#line 337 "char.m"
            {
#line 337 "char.m"
              mercury__char__succeeded = mercury__char__lower_upper_2_p_1(&mercury__char__V_7_7, mercury__char__Char_2);
            }
#line 337 "char.m"
          }
#line 236 "char.m"
      }
#line 254 "char.m"
    return mercury__char__succeeded;
#line 254 "char.m"
  }
#line 129 "char.m"
}

#line 124 "char.m"
MR_bool MR_CALL 
mercury__char__is_alnum_1_p_0(
#line 124 "char.m"
  MR_Char mercury__char__Char_2)
#line 124 "char.m"
{
#line 245 "char.m"
  {
#line 245 "char.m"
    MR_bool mercury__char__succeeded;
#line 334 "char.m"
    MR_Char mercury__char__V_5_5;

#line 334 "char.m"
    {
#line 334 "char.m"
      mercury__char__succeeded = mercury__char__lower_upper_2_p_0(mercury__char__Char_2, &mercury__char__V_5_5);
    }
#line 236 "char.m"
    if (mercury__char__succeeded)
#line 235 "char.m"
      mercury__char__succeeded = MR_TRUE;
#line 236 "char.m"
    else
#line 337 "char.m"
      {
#line 337 "char.m"
        MR_Char mercury__char__V_7_7;

#line 337 "char.m"
        {
#line 337 "char.m"
          mercury__char__succeeded = mercury__char__lower_upper_2_p_1(&mercury__char__V_7_7, mercury__char__Char_2);
        }
#line 337 "char.m"
      }
#line 245 "char.m"
    if (mercury__char__succeeded)
#line 244 "char.m"
      mercury__char__succeeded = MR_TRUE;
#line 245 "char.m"
    else
#line 384 "char.m"
      if ((mercury__char__Char_2 == (MR_Char) 48))
#line 384 "char.m"
        mercury__char__succeeded = MR_TRUE;
#line 384 "char.m"
      else
#line 384 "char.m"
        if ((mercury__char__Char_2 == (MR_Char) 49))
#line 385 "char.m"
          mercury__char__succeeded = MR_TRUE;
#line 384 "char.m"
        else
#line 384 "char.m"
          if ((mercury__char__Char_2 == (MR_Char) 50))
#line 386 "char.m"
            mercury__char__succeeded = MR_TRUE;
#line 384 "char.m"
          else
#line 384 "char.m"
            if ((mercury__char__Char_2 == (MR_Char) 51))
#line 387 "char.m"
              mercury__char__succeeded = MR_TRUE;
#line 384 "char.m"
            else
#line 384 "char.m"
              if ((mercury__char__Char_2 == (MR_Char) 52))
#line 388 "char.m"
                mercury__char__succeeded = MR_TRUE;
#line 384 "char.m"
              else
#line 384 "char.m"
                if ((mercury__char__Char_2 == (MR_Char) 53))
#line 389 "char.m"
                  mercury__char__succeeded = MR_TRUE;
#line 384 "char.m"
                else
#line 384 "char.m"
                  if ((mercury__char__Char_2 == (MR_Char) 54))
#line 390 "char.m"
                    mercury__char__succeeded = MR_TRUE;
#line 384 "char.m"
                  else
#line 384 "char.m"
                    if ((mercury__char__Char_2 == (MR_Char) 55))
#line 391 "char.m"
                      mercury__char__succeeded = MR_TRUE;
#line 384 "char.m"
                    else
#line 384 "char.m"
                      if ((mercury__char__Char_2 == (MR_Char) 56))
#line 392 "char.m"
                        mercury__char__succeeded = MR_TRUE;
#line 384 "char.m"
                      else
#line 384 "char.m"
                        if ((mercury__char__Char_2 == (MR_Char) 57))
#line 393 "char.m"
                          mercury__char__succeeded = MR_TRUE;
#line 384 "char.m"
                        else
#line 384 "char.m"
                          mercury__char__succeeded = MR_FALSE;
#line 245 "char.m"
    return mercury__char__succeeded;
#line 245 "char.m"
  }
#line 124 "char.m"
}

#line 119 "char.m"
MR_bool MR_CALL 
mercury__char__is_alpha_1_p_0(
#line 119 "char.m"
  MR_Char mercury__char__Char_2)
#line 119 "char.m"
{
#line 236 "char.m"
  {
#line 236 "char.m"
    MR_bool mercury__char__succeeded;
#line 334 "char.m"
    MR_Char mercury__char__V_4_4;

#line 334 "char.m"
    {
#line 334 "char.m"
      mercury__char__succeeded = mercury__char__lower_upper_2_p_0(mercury__char__Char_2, &mercury__char__V_4_4);
    }
#line 236 "char.m"
    if (mercury__char__succeeded)
#line 235 "char.m"
      mercury__char__succeeded = MR_TRUE;
#line 236 "char.m"
    else
#line 337 "char.m"
      {
#line 337 "char.m"
        MR_Char mercury__char__V_6_6;

#line 337 "char.m"
        {
#line 337 "char.m"
          mercury__char__succeeded = mercury__char__lower_upper_2_p_1(&mercury__char__V_6_6, mercury__char__Char_2);
        }
#line 337 "char.m"
      }
#line 236 "char.m"
    return mercury__char__succeeded;
#line 236 "char.m"
  }
#line 119 "char.m"
}

#line 115 "char.m"
MR_bool MR_CALL 
mercury__char__is_lower_1_p_0(
#line 115 "char.m"
  MR_Char mercury__char__Lower_2)
#line 115 "char.m"
{
#line 334 "char.m"
  {
#line 334 "char.m"
    MR_bool mercury__char__succeeded;
#line 334 "char.m"
    MR_Char mercury__char__V_3_3;

#line 334 "char.m"
    {
#line 334 "char.m"
      mercury__char__succeeded = mercury__char__lower_upper_2_p_0(mercury__char__Lower_2, &mercury__char__V_3_3);
    }
#line 334 "char.m"
    return mercury__char__succeeded;
#line 334 "char.m"
  }
#line 115 "char.m"
}

#line 111 "char.m"
MR_bool MR_CALL 
mercury__char__is_upper_1_p_0(
#line 111 "char.m"
  MR_Char mercury__char__Upper_2)
#line 111 "char.m"
{
#line 337 "char.m"
  {
#line 337 "char.m"
    MR_bool mercury__char__succeeded;
#line 337 "char.m"
    MR_Char mercury__char__V_3_3;

#line 337 "char.m"
    {
#line 337 "char.m"
      mercury__char__succeeded = mercury__char__lower_upper_2_p_1(&mercury__char__V_3_3, mercury__char__Upper_2);
    }
#line 337 "char.m"
    return mercury__char__succeeded;
#line 337 "char.m"
  }
#line 111 "char.m"
}

#line 107 "char.m"
MR_bool MR_CALL 
mercury__char__is_whitespace_1_p_0(
#line 107 "char.m"
  MR_Char mercury__char__HeadVar__1_1)
#line 107 "char.m"
{
#line 226 "char.m"
  {
#line 226 "char.m"
    MR_bool mercury__char__succeeded;

#line 226 "char.m"
    if ((mercury__char__HeadVar__1_1 == (MR_Char) 9))
#line 227 "char.m"
      mercury__char__succeeded = MR_TRUE;
#line 226 "char.m"
    else
#line 226 "char.m"
      if ((mercury__char__HeadVar__1_1 == (MR_Char) 10))
#line 228 "char.m"
        mercury__char__succeeded = MR_TRUE;
#line 226 "char.m"
      else
#line 226 "char.m"
        if ((mercury__char__HeadVar__1_1 == (MR_Char) 11))
#line 231 "char.m"
          mercury__char__succeeded = MR_TRUE;
#line 226 "char.m"
        else
#line 226 "char.m"
          if ((mercury__char__HeadVar__1_1 == (MR_Char) 12))
#line 230 "char.m"
            mercury__char__succeeded = MR_TRUE;
#line 226 "char.m"
          else
#line 226 "char.m"
            if ((mercury__char__HeadVar__1_1 == (MR_Char) 13))
#line 229 "char.m"
              mercury__char__succeeded = MR_TRUE;
#line 226 "char.m"
            else
#line 226 "char.m"
              if ((mercury__char__HeadVar__1_1 == (MR_Char) 32))
#line 226 "char.m"
                mercury__char__succeeded = MR_TRUE;
#line 226 "char.m"
              else
#line 226 "char.m"
                mercury__char__succeeded = MR_FALSE;
#line 226 "char.m"
    return mercury__char__succeeded;
#line 226 "char.m"
  }
#line 107 "char.m"
}

#line 102 "char.m"
MR_bool MR_CALL 
mercury__char__lower_upper_2_p_1(
#line 102 "char.m"
  MR_Char * mercury__char__HeadVar__1_1,
#line 102 "char.m"
  MR_Char mercury__char__HeadVar__2_2)
#line 102 "char.m"
{
#line 495 "char.m"
  {
#line 495 "char.m"
    MR_bool mercury__char__succeeded;

#line 495 "char.m"
    if ((mercury__char__HeadVar__2_2 == (MR_Char) 65))
#line 495 "char.m"
      {
#line 495 "char.m"
        *mercury__char__HeadVar__1_1 = (MR_Char) 97;
#line 495 "char.m"
        mercury__char__succeeded = MR_TRUE;
#line 495 "char.m"
      }
#line 495 "char.m"
    else
#line 495 "char.m"
      if ((mercury__char__HeadVar__2_2 == (MR_Char) 66))
#line 496 "char.m"
        {
#line 496 "char.m"
          *mercury__char__HeadVar__1_1 = (MR_Char) 98;
#line 496 "char.m"
          mercury__char__succeeded = MR_TRUE;
#line 496 "char.m"
        }
#line 495 "char.m"
      else
#line 495 "char.m"
        if ((mercury__char__HeadVar__2_2 == (MR_Char) 67))
#line 497 "char.m"
          {
#line 497 "char.m"
            *mercury__char__HeadVar__1_1 = (MR_Char) 99;
#line 497 "char.m"
            mercury__char__succeeded = MR_TRUE;
#line 497 "char.m"
          }
#line 495 "char.m"
        else
#line 495 "char.m"
          if ((mercury__char__HeadVar__2_2 == (MR_Char) 68))
#line 498 "char.m"
            {
#line 498 "char.m"
              *mercury__char__HeadVar__1_1 = (MR_Char) 100;
#line 498 "char.m"
              mercury__char__succeeded = MR_TRUE;
#line 498 "char.m"
            }
#line 495 "char.m"
          else
#line 495 "char.m"
            if ((mercury__char__HeadVar__2_2 == (MR_Char) 69))
#line 499 "char.m"
              {
#line 499 "char.m"
                *mercury__char__HeadVar__1_1 = (MR_Char) 101;
#line 499 "char.m"
                mercury__char__succeeded = MR_TRUE;
#line 499 "char.m"
              }
#line 495 "char.m"
            else
#line 495 "char.m"
              if ((mercury__char__HeadVar__2_2 == (MR_Char) 70))
#line 500 "char.m"
                {
#line 500 "char.m"
                  *mercury__char__HeadVar__1_1 = (MR_Char) 102;
#line 500 "char.m"
                  mercury__char__succeeded = MR_TRUE;
#line 500 "char.m"
                }
#line 495 "char.m"
              else
#line 495 "char.m"
                if ((mercury__char__HeadVar__2_2 == (MR_Char) 71))
#line 501 "char.m"
                  {
#line 501 "char.m"
                    *mercury__char__HeadVar__1_1 = (MR_Char) 103;
#line 501 "char.m"
                    mercury__char__succeeded = MR_TRUE;
#line 501 "char.m"
                  }
#line 495 "char.m"
                else
#line 495 "char.m"
                  if ((mercury__char__HeadVar__2_2 == (MR_Char) 72))
#line 502 "char.m"
                    {
#line 502 "char.m"
                      *mercury__char__HeadVar__1_1 = (MR_Char) 104;
#line 502 "char.m"
                      mercury__char__succeeded = MR_TRUE;
#line 502 "char.m"
                    }
#line 495 "char.m"
                  else
#line 495 "char.m"
                    if ((mercury__char__HeadVar__2_2 == (MR_Char) 73))
#line 503 "char.m"
                      {
#line 503 "char.m"
                        *mercury__char__HeadVar__1_1 = (MR_Char) 105;
#line 503 "char.m"
                        mercury__char__succeeded = MR_TRUE;
#line 503 "char.m"
                      }
#line 495 "char.m"
                    else
#line 495 "char.m"
                      if ((mercury__char__HeadVar__2_2 == (MR_Char) 74))
#line 504 "char.m"
                        {
#line 504 "char.m"
                          *mercury__char__HeadVar__1_1 = (MR_Char) 106;
#line 504 "char.m"
                          mercury__char__succeeded = MR_TRUE;
#line 504 "char.m"
                        }
#line 495 "char.m"
                      else
#line 495 "char.m"
                        if ((mercury__char__HeadVar__2_2 == (MR_Char) 75))
#line 505 "char.m"
                          {
#line 505 "char.m"
                            *mercury__char__HeadVar__1_1 = (MR_Char) 107;
#line 505 "char.m"
                            mercury__char__succeeded = MR_TRUE;
#line 505 "char.m"
                          }
#line 495 "char.m"
                        else
#line 495 "char.m"
                          if ((mercury__char__HeadVar__2_2 == (MR_Char) 76))
#line 506 "char.m"
                            {
#line 506 "char.m"
                              *mercury__char__HeadVar__1_1 = (MR_Char) 108;
#line 506 "char.m"
                              mercury__char__succeeded = MR_TRUE;
#line 506 "char.m"
                            }
#line 495 "char.m"
                          else
#line 495 "char.m"
                            if ((mercury__char__HeadVar__2_2 == (MR_Char) 77))
#line 507 "char.m"
                              {
#line 507 "char.m"
                                *mercury__char__HeadVar__1_1 = (MR_Char) 109;
#line 507 "char.m"
                                mercury__char__succeeded = MR_TRUE;
#line 507 "char.m"
                              }
#line 495 "char.m"
                            else
#line 495 "char.m"
                              if ((mercury__char__HeadVar__2_2 == (MR_Char) 78))
#line 508 "char.m"
                                {
#line 508 "char.m"
                                  *mercury__char__HeadVar__1_1 = (MR_Char) 110;
#line 508 "char.m"
                                  mercury__char__succeeded = MR_TRUE;
#line 508 "char.m"
                                }
#line 495 "char.m"
                              else
#line 495 "char.m"
                                if ((mercury__char__HeadVar__2_2 == (MR_Char) 79))
#line 509 "char.m"
                                  {
#line 509 "char.m"
                                    *mercury__char__HeadVar__1_1 = (MR_Char) 111;
#line 509 "char.m"
                                    mercury__char__succeeded = MR_TRUE;
#line 509 "char.m"
                                  }
#line 495 "char.m"
                                else
#line 495 "char.m"
                                  if ((mercury__char__HeadVar__2_2 == (MR_Char) 80))
#line 510 "char.m"
                                    {
#line 510 "char.m"
                                      *mercury__char__HeadVar__1_1 = (MR_Char) 112;
#line 510 "char.m"
                                      mercury__char__succeeded = MR_TRUE;
#line 510 "char.m"
                                    }
#line 495 "char.m"
                                  else
#line 495 "char.m"
                                    if ((mercury__char__HeadVar__2_2 == (MR_Char) 81))
#line 511 "char.m"
                                      {
#line 511 "char.m"
                                        *mercury__char__HeadVar__1_1 = (MR_Char) 113;
#line 511 "char.m"
                                        mercury__char__succeeded = MR_TRUE;
#line 511 "char.m"
                                      }
#line 495 "char.m"
                                    else
#line 495 "char.m"
                                      if ((mercury__char__HeadVar__2_2 == (MR_Char) 82))
#line 512 "char.m"
                                        {
#line 512 "char.m"
                                          *mercury__char__HeadVar__1_1 = (MR_Char) 114;
#line 512 "char.m"
                                          mercury__char__succeeded = MR_TRUE;
#line 512 "char.m"
                                        }
#line 495 "char.m"
                                      else
#line 495 "char.m"
                                        if ((mercury__char__HeadVar__2_2 == (MR_Char) 83))
#line 513 "char.m"
                                          {
#line 513 "char.m"
                                            *mercury__char__HeadVar__1_1 = (MR_Char) 115;
#line 513 "char.m"
                                            mercury__char__succeeded = MR_TRUE;
#line 513 "char.m"
                                          }
#line 495 "char.m"
                                        else
#line 495 "char.m"
                                          if ((mercury__char__HeadVar__2_2 == (MR_Char) 84))
#line 514 "char.m"
                                            {
#line 514 "char.m"
                                              *mercury__char__HeadVar__1_1 = (MR_Char) 116;
#line 514 "char.m"
                                              mercury__char__succeeded = MR_TRUE;
#line 514 "char.m"
                                            }
#line 495 "char.m"
                                          else
#line 495 "char.m"
                                            if ((mercury__char__HeadVar__2_2 == (MR_Char) 85))
#line 515 "char.m"
                                              {
#line 515 "char.m"
                                                *mercury__char__HeadVar__1_1 = (MR_Char) 117;
#line 515 "char.m"
                                                mercury__char__succeeded = MR_TRUE;
#line 515 "char.m"
                                              }
#line 495 "char.m"
                                            else
#line 495 "char.m"
                                              if ((mercury__char__HeadVar__2_2 == (MR_Char) 86))
#line 516 "char.m"
                                                {
#line 516 "char.m"
                                                  *mercury__char__HeadVar__1_1 = (MR_Char) 118;
#line 516 "char.m"
                                                  mercury__char__succeeded = MR_TRUE;
#line 516 "char.m"
                                                }
#line 495 "char.m"
                                              else
#line 495 "char.m"
                                                if ((mercury__char__HeadVar__2_2 == (MR_Char) 87))
#line 517 "char.m"
                                                  {
#line 517 "char.m"
                                                    *mercury__char__HeadVar__1_1 = (MR_Char) 119;
#line 517 "char.m"
                                                    mercury__char__succeeded = MR_TRUE;
#line 517 "char.m"
                                                  }
#line 495 "char.m"
                                                else
#line 495 "char.m"
                                                  if ((mercury__char__HeadVar__2_2 == (MR_Char) 88))
#line 518 "char.m"
                                                    {
#line 518 "char.m"
                                                      *mercury__char__HeadVar__1_1 = (MR_Char) 120;
#line 518 "char.m"
                                                      mercury__char__succeeded = MR_TRUE;
#line 518 "char.m"
                                                    }
#line 495 "char.m"
                                                  else
#line 495 "char.m"
                                                    if ((mercury__char__HeadVar__2_2 == (MR_Char) 89))
#line 519 "char.m"
                                                      {
#line 519 "char.m"
                                                        *mercury__char__HeadVar__1_1 = (MR_Char) 121;
#line 519 "char.m"
                                                        mercury__char__succeeded = MR_TRUE;
#line 519 "char.m"
                                                      }
#line 495 "char.m"
                                                    else
#line 495 "char.m"
                                                      if ((mercury__char__HeadVar__2_2 == (MR_Char) 90))
#line 520 "char.m"
                                                        {
#line 520 "char.m"
                                                          *mercury__char__HeadVar__1_1 = (MR_Char) 122;
#line 520 "char.m"
                                                          mercury__char__succeeded = MR_TRUE;
#line 520 "char.m"
                                                        }
#line 495 "char.m"
                                                      else
#line 495 "char.m"
                                                        mercury__char__succeeded = MR_FALSE;
#line 495 "char.m"
    return mercury__char__succeeded;
#line 495 "char.m"
  }
#line 102 "char.m"
}

#line 101 "char.m"
MR_bool MR_CALL 
mercury__char__lower_upper_2_p_0(
#line 101 "char.m"
  MR_Char mercury__char__HeadVar__1_1,
#line 101 "char.m"
  MR_Char * mercury__char__HeadVar__2_2)
#line 101 "char.m"
{
#line 495 "char.m"
  {
#line 495 "char.m"
    MR_bool mercury__char__succeeded;

#line 495 "char.m"
    if ((mercury__char__HeadVar__1_1 == (MR_Char) 97))
#line 495 "char.m"
      {
#line 495 "char.m"
        *mercury__char__HeadVar__2_2 = (MR_Char) 65;
#line 495 "char.m"
        mercury__char__succeeded = MR_TRUE;
#line 495 "char.m"
      }
#line 495 "char.m"
    else
#line 495 "char.m"
      if ((mercury__char__HeadVar__1_1 == (MR_Char) 98))
#line 496 "char.m"
        {
#line 496 "char.m"
          *mercury__char__HeadVar__2_2 = (MR_Char) 66;
#line 496 "char.m"
          mercury__char__succeeded = MR_TRUE;
#line 496 "char.m"
        }
#line 495 "char.m"
      else
#line 495 "char.m"
        if ((mercury__char__HeadVar__1_1 == (MR_Char) 99))
#line 497 "char.m"
          {
#line 497 "char.m"
            *mercury__char__HeadVar__2_2 = (MR_Char) 67;
#line 497 "char.m"
            mercury__char__succeeded = MR_TRUE;
#line 497 "char.m"
          }
#line 495 "char.m"
        else
#line 495 "char.m"
          if ((mercury__char__HeadVar__1_1 == (MR_Char) 100))
#line 498 "char.m"
            {
#line 498 "char.m"
              *mercury__char__HeadVar__2_2 = (MR_Char) 68;
#line 498 "char.m"
              mercury__char__succeeded = MR_TRUE;
#line 498 "char.m"
            }
#line 495 "char.m"
          else
#line 495 "char.m"
            if ((mercury__char__HeadVar__1_1 == (MR_Char) 101))
#line 499 "char.m"
              {
#line 499 "char.m"
                *mercury__char__HeadVar__2_2 = (MR_Char) 69;
#line 499 "char.m"
                mercury__char__succeeded = MR_TRUE;
#line 499 "char.m"
              }
#line 495 "char.m"
            else
#line 495 "char.m"
              if ((mercury__char__HeadVar__1_1 == (MR_Char) 102))
#line 500 "char.m"
                {
#line 500 "char.m"
                  *mercury__char__HeadVar__2_2 = (MR_Char) 70;
#line 500 "char.m"
                  mercury__char__succeeded = MR_TRUE;
#line 500 "char.m"
                }
#line 495 "char.m"
              else
#line 495 "char.m"
                if ((mercury__char__HeadVar__1_1 == (MR_Char) 103))
#line 501 "char.m"
                  {
#line 501 "char.m"
                    *mercury__char__HeadVar__2_2 = (MR_Char) 71;
#line 501 "char.m"
                    mercury__char__succeeded = MR_TRUE;
#line 501 "char.m"
                  }
#line 495 "char.m"
                else
#line 495 "char.m"
                  if ((mercury__char__HeadVar__1_1 == (MR_Char) 104))
#line 502 "char.m"
                    {
#line 502 "char.m"
                      *mercury__char__HeadVar__2_2 = (MR_Char) 72;
#line 502 "char.m"
                      mercury__char__succeeded = MR_TRUE;
#line 502 "char.m"
                    }
#line 495 "char.m"
                  else
#line 495 "char.m"
                    if ((mercury__char__HeadVar__1_1 == (MR_Char) 105))
#line 503 "char.m"
                      {
#line 503 "char.m"
                        *mercury__char__HeadVar__2_2 = (MR_Char) 73;
#line 503 "char.m"
                        mercury__char__succeeded = MR_TRUE;
#line 503 "char.m"
                      }
#line 495 "char.m"
                    else
#line 495 "char.m"
                      if ((mercury__char__HeadVar__1_1 == (MR_Char) 106))
#line 504 "char.m"
                        {
#line 504 "char.m"
                          *mercury__char__HeadVar__2_2 = (MR_Char) 74;
#line 504 "char.m"
                          mercury__char__succeeded = MR_TRUE;
#line 504 "char.m"
                        }
#line 495 "char.m"
                      else
#line 495 "char.m"
                        if ((mercury__char__HeadVar__1_1 == (MR_Char) 107))
#line 505 "char.m"
                          {
#line 505 "char.m"
                            *mercury__char__HeadVar__2_2 = (MR_Char) 75;
#line 505 "char.m"
                            mercury__char__succeeded = MR_TRUE;
#line 505 "char.m"
                          }
#line 495 "char.m"
                        else
#line 495 "char.m"
                          if ((mercury__char__HeadVar__1_1 == (MR_Char) 108))
#line 506 "char.m"
                            {
#line 506 "char.m"
                              *mercury__char__HeadVar__2_2 = (MR_Char) 76;
#line 506 "char.m"
                              mercury__char__succeeded = MR_TRUE;
#line 506 "char.m"
                            }
#line 495 "char.m"
                          else
#line 495 "char.m"
                            if ((mercury__char__HeadVar__1_1 == (MR_Char) 109))
#line 507 "char.m"
                              {
#line 507 "char.m"
                                *mercury__char__HeadVar__2_2 = (MR_Char) 77;
#line 507 "char.m"
                                mercury__char__succeeded = MR_TRUE;
#line 507 "char.m"
                              }
#line 495 "char.m"
                            else
#line 495 "char.m"
                              if ((mercury__char__HeadVar__1_1 == (MR_Char) 110))
#line 508 "char.m"
                                {
#line 508 "char.m"
                                  *mercury__char__HeadVar__2_2 = (MR_Char) 78;
#line 508 "char.m"
                                  mercury__char__succeeded = MR_TRUE;
#line 508 "char.m"
                                }
#line 495 "char.m"
                              else
#line 495 "char.m"
                                if ((mercury__char__HeadVar__1_1 == (MR_Char) 111))
#line 509 "char.m"
                                  {
#line 509 "char.m"
                                    *mercury__char__HeadVar__2_2 = (MR_Char) 79;
#line 509 "char.m"
                                    mercury__char__succeeded = MR_TRUE;
#line 509 "char.m"
                                  }
#line 495 "char.m"
                                else
#line 495 "char.m"
                                  if ((mercury__char__HeadVar__1_1 == (MR_Char) 112))
#line 510 "char.m"
                                    {
#line 510 "char.m"
                                      *mercury__char__HeadVar__2_2 = (MR_Char) 80;
#line 510 "char.m"
                                      mercury__char__succeeded = MR_TRUE;
#line 510 "char.m"
                                    }
#line 495 "char.m"
                                  else
#line 495 "char.m"
                                    if ((mercury__char__HeadVar__1_1 == (MR_Char) 113))
#line 511 "char.m"
                                      {
#line 511 "char.m"
                                        *mercury__char__HeadVar__2_2 = (MR_Char) 81;
#line 511 "char.m"
                                        mercury__char__succeeded = MR_TRUE;
#line 511 "char.m"
                                      }
#line 495 "char.m"
                                    else
#line 495 "char.m"
                                      if ((mercury__char__HeadVar__1_1 == (MR_Char) 114))
#line 512 "char.m"
                                        {
#line 512 "char.m"
                                          *mercury__char__HeadVar__2_2 = (MR_Char) 82;
#line 512 "char.m"
                                          mercury__char__succeeded = MR_TRUE;
#line 512 "char.m"
                                        }
#line 495 "char.m"
                                      else
#line 495 "char.m"
                                        if ((mercury__char__HeadVar__1_1 == (MR_Char) 115))
#line 513 "char.m"
                                          {
#line 513 "char.m"
                                            *mercury__char__HeadVar__2_2 = (MR_Char) 83;
#line 513 "char.m"
                                            mercury__char__succeeded = MR_TRUE;
#line 513 "char.m"
                                          }
#line 495 "char.m"
                                        else
#line 495 "char.m"
                                          if ((mercury__char__HeadVar__1_1 == (MR_Char) 116))
#line 514 "char.m"
                                            {
#line 514 "char.m"
                                              *mercury__char__HeadVar__2_2 = (MR_Char) 84;
#line 514 "char.m"
                                              mercury__char__succeeded = MR_TRUE;
#line 514 "char.m"
                                            }
#line 495 "char.m"
                                          else
#line 495 "char.m"
                                            if ((mercury__char__HeadVar__1_1 == (MR_Char) 117))
#line 515 "char.m"
                                              {
#line 515 "char.m"
                                                *mercury__char__HeadVar__2_2 = (MR_Char) 85;
#line 515 "char.m"
                                                mercury__char__succeeded = MR_TRUE;
#line 515 "char.m"
                                              }
#line 495 "char.m"
                                            else
#line 495 "char.m"
                                              if ((mercury__char__HeadVar__1_1 == (MR_Char) 118))
#line 516 "char.m"
                                                {
#line 516 "char.m"
                                                  *mercury__char__HeadVar__2_2 = (MR_Char) 86;
#line 516 "char.m"
                                                  mercury__char__succeeded = MR_TRUE;
#line 516 "char.m"
                                                }
#line 495 "char.m"
                                              else
#line 495 "char.m"
                                                if ((mercury__char__HeadVar__1_1 == (MR_Char) 119))
#line 517 "char.m"
                                                  {
#line 517 "char.m"
                                                    *mercury__char__HeadVar__2_2 = (MR_Char) 87;
#line 517 "char.m"
                                                    mercury__char__succeeded = MR_TRUE;
#line 517 "char.m"
                                                  }
#line 495 "char.m"
                                                else
#line 495 "char.m"
                                                  if ((mercury__char__HeadVar__1_1 == (MR_Char) 120))
#line 518 "char.m"
                                                    {
#line 518 "char.m"
                                                      *mercury__char__HeadVar__2_2 = (MR_Char) 88;
#line 518 "char.m"
                                                      mercury__char__succeeded = MR_TRUE;
#line 518 "char.m"
                                                    }
#line 495 "char.m"
                                                  else
#line 495 "char.m"
                                                    if ((mercury__char__HeadVar__1_1 == (MR_Char) 121))
#line 519 "char.m"
                                                      {
#line 519 "char.m"
                                                        *mercury__char__HeadVar__2_2 = (MR_Char) 89;
#line 519 "char.m"
                                                        mercury__char__succeeded = MR_TRUE;
#line 519 "char.m"
                                                      }
#line 495 "char.m"
                                                    else
#line 495 "char.m"
                                                      if ((mercury__char__HeadVar__1_1 == (MR_Char) 122))
#line 520 "char.m"
                                                        {
#line 520 "char.m"
                                                          *mercury__char__HeadVar__2_2 = (MR_Char) 90;
#line 520 "char.m"
                                                          mercury__char__succeeded = MR_TRUE;
#line 520 "char.m"
                                                        }
#line 495 "char.m"
                                                      else
#line 495 "char.m"
                                                        mercury__char__succeeded = MR_FALSE;
#line 495 "char.m"
    return mercury__char__succeeded;
#line 495 "char.m"
  }
#line 101 "char.m"
}

#line 94 "char.m"
void MR_CALL 
mercury__char__to_lower_2_p_0(
#line 94 "char.m"
  MR_Char mercury__char__Char_3,
#line 94 "char.m"
  MR_Char * mercury__char__Lower_4)
#line 94 "char.m"
{
#line 349 "char.m"
  {
#line 349 "char.m"
    MR_bool mercury__char__succeeded;
#line 349 "char.m"
    MR_Char mercury__char__LowerChar_5;

#line 347 "char.m"
    {
#line 347 "char.m"
      mercury__char__succeeded = mercury__char__lower_upper_2_p_1(&mercury__char__LowerChar_5, mercury__char__Char_3);
    }
#line 349 "char.m"
    if (mercury__char__succeeded)
#line 348 "char.m"
      *mercury__char__Lower_4 = mercury__char__LowerChar_5;
#line 349 "char.m"
    else
#line 350 "char.m"
      *mercury__char__Lower_4 = mercury__char__Char_3;
#line 349 "char.m"
  }
#line 94 "char.m"
}

#line 93 "char.m"
MR_Char MR_CALL 
mercury__char__to_lower_1_f_0(
#line 93 "char.m"
  MR_Char mercury__char__C1_3)
#line 93 "char.m"
{
#line 349 "char.m"
  {
#line 349 "char.m"
    MR_bool mercury__char__succeeded;
#line 349 "char.m"
    MR_Char mercury__char__C2_4;
#line 349 "char.m"
    MR_Char mercury__char__LowerChar_7;

#line 347 "char.m"
    {
#line 347 "char.m"
      mercury__char__succeeded = mercury__char__lower_upper_2_p_1(&mercury__char__LowerChar_7, mercury__char__C1_3);
    }
#line 349 "char.m"
    if (mercury__char__succeeded)
#line 348 "char.m"
      mercury__char__C2_4 = mercury__char__LowerChar_7;
#line 349 "char.m"
    else
#line 350 "char.m"
      mercury__char__C2_4 = mercury__char__C1_3;
#line 349 "char.m"
    return mercury__char__C2_4;
#line 349 "char.m"
  }
#line 93 "char.m"
}

#line 88 "char.m"
void MR_CALL 
mercury__char__to_upper_2_p_0(
#line 88 "char.m"
  MR_Char mercury__char__Char_3,
#line 88 "char.m"
  MR_Char * mercury__char__Upper_4)
#line 88 "char.m"
{
#line 359 "char.m"
  {
#line 359 "char.m"
    MR_bool mercury__char__succeeded;
#line 359 "char.m"
    MR_Char mercury__char__UpperChar_5;

#line 357 "char.m"
    {
#line 357 "char.m"
      mercury__char__succeeded = mercury__char__lower_upper_2_p_0(mercury__char__Char_3, &mercury__char__UpperChar_5);
    }
#line 359 "char.m"
    if (mercury__char__succeeded)
#line 358 "char.m"
      *mercury__char__Upper_4 = mercury__char__UpperChar_5;
#line 359 "char.m"
    else
#line 360 "char.m"
      *mercury__char__Upper_4 = mercury__char__Char_3;
#line 359 "char.m"
  }
#line 88 "char.m"
}

#line 87 "char.m"
MR_Char MR_CALL 
mercury__char__to_upper_1_f_0(
#line 87 "char.m"
  MR_Char mercury__char__C1_3)
#line 87 "char.m"
{
#line 359 "char.m"
  {
#line 359 "char.m"
    MR_bool mercury__char__succeeded;
#line 359 "char.m"
    MR_Char mercury__char__C2_4;
#line 359 "char.m"
    MR_Char mercury__char__UpperChar_7;

#line 357 "char.m"
    {
#line 357 "char.m"
      mercury__char__succeeded = mercury__char__lower_upper_2_p_0(mercury__char__C1_3, &mercury__char__UpperChar_7);
    }
#line 359 "char.m"
    if (mercury__char__succeeded)
#line 358 "char.m"
      mercury__char__C2_4 = mercury__char__UpperChar_7;
#line 359 "char.m"
    else
#line 360 "char.m"
      mercury__char__C2_4 = mercury__char__C1_3;
#line 359 "char.m"
    return mercury__char__C2_4;
#line 359 "char.m"
  }
#line 87 "char.m"
}

#line 82 "char.m"
void MR_CALL 
mercury__char__min_char_value_1_p_0(
#line 82 "char.m"
  MR_Integer * mercury__char__HeadVar__1_1)
#line 82 "char.m"
{
#line 636 "char.m"
  {
#line 636 "char.m"
    MR_bool mercury__char__succeeded;

#line 636 "char.m"
    *mercury__char__HeadVar__1_1 = (MR_Integer) 0;
#line 636 "char.m"
  }
#line 82 "char.m"
}

#line 81 "char.m"
MR_Integer MR_CALL 
mercury__char__min_char_value_0_f_0(void)
#line 81 "char.m"
{
#line 636 "char.m"
  {
#line 636 "char.m"
    MR_bool mercury__char__succeeded;

#line 636 "char.m"
    return (MR_Integer) 0;
#line 636 "char.m"
  }
#line 81 "char.m"
}

#line 77 "char.m"
void MR_CALL 
mercury__char__max_char_value_1_p_0(
#line 77 "char.m"
  MR_Integer * mercury__char__Max_1)
#line 77 "char.m"
{
#line 643 "char.m"
  {
#line 643 "char.m"
    MR_bool mercury__char__succeeded;

#line 647 "char.m"
{
#define MR_PROC_LABEL mercury__char__max_char_value_1_p_0

	MR_Integer Max;

		{
#line 647 "char.m"

    Max = 0x10ffff;

#line 5050 "char.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__char__Max_1  = Max;
#line 647 "char.m"
}
#line 643 "char.m"
  }
#line 77 "char.m"
}

#line 76 "char.m"
MR_Integer MR_CALL 
mercury__char__max_char_value_0_f_0(void)
#line 76 "char.m"
{
#line 643 "char.m"
  {
#line 643 "char.m"
    MR_bool mercury__char__succeeded;
#line 643 "char.m"
    MR_Integer mercury__char__N_2;

#line 647 "char.m"
{
#define MR_PROC_LABEL mercury__char__max_char_value_0_f_0

	MR_Integer Max;

		{
#line 647 "char.m"

    Max = 0x10ffff;

#line 5085 "char.c"

		;}
#undef MR_PROC_LABEL
	 mercury__char__N_2  = Max;
#line 647 "char.m"
}
#line 643 "char.m"
    return mercury__char__N_2;
#line 643 "char.m"
  }
#line 76 "char.m"
}

#line 72 "char.m"
MR_Char MR_CALL 
mercury__char__det_from_int_1_f_0(
#line 72 "char.m"
  MR_Integer mercury__char__Int_3)
#line 72 "char.m"
{
#line 530 "char.m"
  {
#line 530 "char.m"
    MR_bool mercury__char__succeeded;
#line 530 "char.m"
    MR_Char mercury__char__Char_4;
#line 530 "char.m"
    MR_Char mercury__char__CharPrime_7;

#line 560 "char.m"
{
#define MR_PROC_LABEL mercury__char__det_from_int_1_f_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int =  mercury__char__Int_3 ;
		{
#line 560 "char.m"

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);

#line 5130 "char.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__char__CharPrime_7  = Character;
#line 560 "char.m"
	}
mercury__char__succeeded  = SUCCESS_INDICATOR;
}
#line 530 "char.m"
    if (mercury__char__succeeded)
#line 529 "char.m"
      mercury__char__Char_4 = mercury__char__CharPrime_7;
#line 530 "char.m"
    else
#line 531 "char.m"
      {
#line 531 "char.m"
        {
#line 531 "char.m"
          mercury__require__error_1_p_0((MR_String) "char.det_from_int: conversion failed");
        }
#line 531 "char.m"
      }
#line 530 "char.m"
    return mercury__char__Char_4;
#line 530 "char.m"
  }
#line 72 "char.m"
}

#line 71 "char.m"
void MR_CALL 
mercury__char__det_from_int_2_p_0(
#line 71 "char.m"
  MR_Integer mercury__char__Int_3,
#line 71 "char.m"
  MR_Char * mercury__char__Char_4)
#line 71 "char.m"
{
#line 530 "char.m"
  {
#line 530 "char.m"
    MR_bool mercury__char__succeeded;
#line 530 "char.m"
    MR_Char mercury__char__CharPrime_5;

#line 560 "char.m"
{
#define MR_PROC_LABEL mercury__char__det_from_int_2_p_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int =  mercury__char__Int_3 ;
		{
#line 560 "char.m"

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);

#line 5193 "char.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__char__CharPrime_5  = Character;
#line 560 "char.m"
	}
mercury__char__succeeded  = SUCCESS_INDICATOR;
}
#line 530 "char.m"
    if (mercury__char__succeeded)
#line 529 "char.m"
      *mercury__char__Char_4 = mercury__char__CharPrime_5;
#line 530 "char.m"
    else
#line 531 "char.m"
      {
#line 531 "char.m"
        {
#line 531 "char.m"
          mercury__require__error_1_p_0((MR_String) "char.det_from_int: conversion failed");
#line 531 "char.m"
          return;
        }
#line 531 "char.m"
      }
#line 530 "char.m"
  }
#line 71 "char.m"
}

#line 66 "char.m"
MR_bool MR_CALL 
mercury__char__from_int_2_p_0(
#line 66 "char.m"
  MR_Integer mercury__char__Int_3,
#line 66 "char.m"
  MR_Char * mercury__char__Char_4)
#line 66 "char.m"
{
#line 556 "char.m"
  {
#line 556 "char.m"
    MR_bool mercury__char__succeeded;

#line 560 "char.m"
{
#define MR_PROC_LABEL mercury__char__from_int_2_p_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int =  mercury__char__Int_3 ;
		{
#line 560 "char.m"

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);

#line 5254 "char.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__char__Char_4  = Character;
#line 560 "char.m"
	}
mercury__char__succeeded  = SUCCESS_INDICATOR;
}
#line 556 "char.m"
    return mercury__char__succeeded;
#line 556 "char.m"
  }
#line 66 "char.m"
}

#line 61 "char.m"
MR_bool MR_CALL 
mercury__char__to_int_2_p_2(
#line 61 "char.m"
  MR_Char * mercury__char__Character_1,
#line 61 "char.m"
  MR_Integer mercury__char__Int_2)
#line 61 "char.m"
{
#line 556 "char.m"
  {
#line 556 "char.m"
    MR_bool mercury__char__succeeded;

#line 560 "char.m"
{
#define MR_PROC_LABEL mercury__char__to_int_2_p_2

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int =  mercury__char__Int_2 ;
		{
#line 560 "char.m"

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);

#line 5300 "char.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__char__Character_1  = Character;
#line 560 "char.m"
	}
mercury__char__succeeded  = SUCCESS_INDICATOR;
}
#line 556 "char.m"
    return mercury__char__succeeded;
#line 556 "char.m"
  }
#line 61 "char.m"
}

#line 60 "char.m"
MR_bool MR_CALL 
mercury__char__to_int_2_p_1(
#line 60 "char.m"
  MR_Char mercury__char__Character_1,
#line 60 "char.m"
  MR_Integer mercury__char__Int_2)
#line 60 "char.m"
{
#line 548 "char.m"
  {
#line 548 "char.m"
    MR_bool mercury__char__succeeded;

#line 552 "char.m"
{
#define MR_PROC_LABEL mercury__char__to_int_2_p_1

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Character =  mercury__char__Character_1 ;
	Int =  mercury__char__Int_2 ;
		{
#line 552 "char.m"

    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);

#line 5346 "char.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 552 "char.m"
	}
mercury__char__succeeded  = SUCCESS_INDICATOR;
}
#line 548 "char.m"
    return mercury__char__succeeded;
#line 548 "char.m"
  }
#line 60 "char.m"
}

#line 59 "char.m"
void MR_CALL 
mercury__char__to_int_2_p_0(
#line 59 "char.m"
  MR_Char mercury__char__Character_1,
#line 59 "char.m"
  MR_Integer * mercury__char__Int_2)
#line 59 "char.m"
{
#line 537 "char.m"
  {
#line 537 "char.m"
    MR_bool mercury__char__succeeded;

#line 541 "char.m"
{
#define MR_PROC_LABEL mercury__char__to_int_2_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__char__Character_1 ;
		{
#line 541 "char.m"

    Int = (MR_UnsignedChar) Character;

#line 5389 "char.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__char__Int_2  = Int;
#line 541 "char.m"
}
#line 537 "char.m"
  }
#line 59 "char.m"
}

#line 57 "char.m"
MR_Integer MR_CALL 
mercury__char__to_int_1_f_0(
#line 57 "char.m"
  MR_Char mercury__char__C_3)
#line 57 "char.m"
{
#line 537 "char.m"
  {
#line 537 "char.m"
    MR_bool mercury__char__succeeded;
#line 537 "char.m"
    MR_Integer mercury__char__N_4;

#line 541 "char.m"
{
#define MR_PROC_LABEL mercury__char__to_int_1_f_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__char__C_3 ;
		{
#line 541 "char.m"

    Int = (MR_UnsignedChar) Character;

#line 5428 "char.c"

		;}
#undef MR_PROC_LABEL
	 mercury__char__N_4  = Int;
#line 541 "char.m"
}
#line 537 "char.m"
    return mercury__char__N_4;
#line 537 "char.m"
  }
#line 57 "char.m"
}

void mercury__char__init(void)
{
}

void mercury__char__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__char__char__type_ctor_info_char_0);
}

void mercury__char__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module char. */
