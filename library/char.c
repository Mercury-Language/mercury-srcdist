/*
** Automatically generated from `char.m'
** by the Mercury compiler,
** version rotd-2014-12-08
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
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"




#line 90 "char.c"
static MR_bool MR_CALL 
mercury__char____Unify____char_0_0_10001(
#line 93 "char.c"
  MR_Box mercury__char__wrapper_arg_1,
#line 95 "char.c"
  MR_Box mercury__char__wrapper_arg_2);

#line 98 "char.c"
static void MR_CALL 
mercury__char____Compare____char_0_0_10001(
#line 101 "char.c"
  MR_Box * mercury__char__wrapper_arg_1,
#line 103 "char.c"
  MR_Box mercury__char__wrapper_arg_2,
#line 105 "char.c"
  MR_Box mercury__char__wrapper_arg_3);

#line 108 "char.c"
static MR_Box MR_CALL 
mercury__char__ClassMethod_for_enum__enum____character__arity0______enum__to_int_1_1_f_0_10001(
#line 111 "char.c"
  MR_Box mercury__char__closure_arg,
#line 113 "char.c"
  MR_Box mercury__char__wrapper_arg_1);

#line 116 "char.c"
static MR_bool MR_CALL 
mercury__char__ClassMethod_for_enum__enum____character__arity0______enum__from_int_1_1_f_0_10001(
#line 119 "char.c"
  MR_Box mercury__char__closure_arg,
#line 121 "char.c"
  MR_Box mercury__char__wrapper_arg_1,
#line 123 "char.c"
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
#include "table_builtin.mh"
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



#line 484 "char.c"
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

#line 505 "char.c"
const MR_BaseTypeclassInfo base_typeclass_info_enum__enum__arity1__character__arity0__[7] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (mercury__char__ClassMethod_for_enum__enum____character__arity0______enum__to_int_1_1_f_0_10001)),
  ((MR_Box) (mercury__char__ClassMethod_for_enum__enum____character__arity0______enum__from_int_1_1_f_0_10001))
};

#line 516 "char.c"
static MR_bool MR_CALL 
mercury__char____Unify____char_0_0_10001(
#line 519 "char.c"
  MR_Box mercury__char__wrapper_arg_1,
#line 521 "char.c"
  MR_Box mercury__char__wrapper_arg_2)
#line 523 "char.c"
{
#line 525 "char.c"
  {
#line 527 "char.c"
    MR_bool mercury__char__succeeded;

#line 530 "char.c"
    {
#line 532 "char.c"
      mercury__char__succeeded = mercury__char____Unify____char_0_0(((MR_Char) (MR_Word) mercury__char__wrapper_arg_1), ((MR_Char) (MR_Word) mercury__char__wrapper_arg_2));
    }
#line 535 "char.c"
    return mercury__char__succeeded;
#line 537 "char.c"
  }
#line 539 "char.c"
}

#line 542 "char.c"
static void MR_CALL 
mercury__char____Compare____char_0_0_10001(
#line 545 "char.c"
  MR_Box * mercury__char__wrapper_arg_1,
#line 547 "char.c"
  MR_Box mercury__char__wrapper_arg_2,
#line 549 "char.c"
  MR_Box mercury__char__wrapper_arg_3)
#line 551 "char.c"
{
#line 553 "char.c"
  {
#line 555 "char.c"
    MR_Word mercury__char__conv0_HeadVar__1_1;

#line 558 "char.c"
    {
#line 560 "char.c"
      mercury__char____Compare____char_0_0(&mercury__char__conv0_HeadVar__1_1, ((MR_Char) (MR_Word) mercury__char__wrapper_arg_2), ((MR_Char) (MR_Word) mercury__char__wrapper_arg_3));
    }
#line 563 "char.c"
    *mercury__char__wrapper_arg_1 = ((MR_Box) (mercury__char__conv0_HeadVar__1_1));
#line 565 "char.c"
  }
#line 567 "char.c"
}

#line 570 "char.c"
static MR_Box MR_CALL 
mercury__char__ClassMethod_for_enum__enum____character__arity0______enum__to_int_1_1_f_0_10001(
#line 573 "char.c"
  MR_Box mercury__char__closure_arg,
#line 575 "char.c"
  MR_Box mercury__char__wrapper_arg_1)
#line 577 "char.c"
{
#line 579 "char.c"
  {
#line 581 "char.c"
    MR_Box mercury__char__wrapper_arg_2;
#line 583 "char.c"
    MR_Box mercury__char__closure;
#line 585 "char.c"
    MR_Integer mercury__char__conv0_Y_4;

#line 588 "char.c"
    mercury__char__closure = mercury__char__closure_arg;
#line 590 "char.c"
    {
#line 592 "char.c"
      mercury__char__conv0_Y_4 = mercury__char__ClassMethod_for_enum__enum____character__arity0______enum__to_int_1_1_f_0(((MR_Char) (MR_Word) mercury__char__wrapper_arg_1));
    }
#line 595 "char.c"
    mercury__char__wrapper_arg_2 = ((MR_Box) (mercury__char__conv0_Y_4));
#line 597 "char.c"
    return mercury__char__wrapper_arg_2;
#line 599 "char.c"
  }
#line 601 "char.c"
}

#line 604 "char.c"
static MR_bool MR_CALL 
mercury__char__ClassMethod_for_enum__enum____character__arity0______enum__from_int_1_1_f_0_10001(
#line 607 "char.c"
  MR_Box mercury__char__closure_arg,
#line 609 "char.c"
  MR_Box mercury__char__wrapper_arg_1,
#line 611 "char.c"
  MR_Box * mercury__char__wrapper_arg_2)
#line 613 "char.c"
{
#line 615 "char.c"
  {
#line 617 "char.c"
    MR_bool mercury__char__succeeded;
#line 619 "char.c"
    MR_Box mercury__char__closure;
#line 621 "char.c"
    MR_Char mercury__char__conv0_Y_4;

#line 624 "char.c"
    mercury__char__closure = mercury__char__closure_arg;
#line 626 "char.c"
    {
#line 628 "char.c"
      mercury__char__succeeded = mercury__char__ClassMethod_for_enum__enum____character__arity0______enum__from_int_1_1_f_0(((MR_Integer) mercury__char__wrapper_arg_1), &mercury__char__conv0_Y_4);
    }
#line 631 "char.c"
    if (mercury__char__succeeded)
#line 633 "char.c"
      {
#line 635 "char.c"
        *mercury__char__wrapper_arg_2 = ((MR_Box) (MR_Word) (mercury__char__conv0_Y_4));
#line 637 "char.c"
        mercury__char__succeeded = MR_TRUE;
#line 639 "char.c"
      }
#line 641 "char.c"
    return mercury__char__succeeded;
#line 643 "char.c"
  }
#line 645 "char.c"
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

#line 332 "char.m"
MR_bool MR_CALL 
mercury__char__ClassMethod_for_enum__enum____character__arity0______enum__from_int_1_1_f_0(
#line 332 "char.m"
  MR_Integer mercury__char__X_3,
#line 332 "char.m"
  MR_Char * mercury__char__Y_4)
#line 332 "char.m"
{
#line 831 "char.m"
  {
#line 831 "char.m"
    MR_bool mercury__char__succeeded;

#line 835 "char.m"
{
#define MR_PROC_LABEL mercury__char__ClassMethod_for_enum__enum____character__arity0______enum__from_int_1_1_f_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int =  mercury__char__X_3 ;
		{
#line 835 "char.m"

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);

#line 694 "char.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__char__Y_4  = Character;
#line 835 "char.m"
	}
mercury__char__succeeded  = SUCCESS_INDICATOR;
}
#line 831 "char.m"
    return mercury__char__succeeded;
#line 831 "char.m"
  }
#line 332 "char.m"
}

#line 331 "char.m"
MR_Integer MR_CALL 
mercury__char__ClassMethod_for_enum__enum____character__arity0______enum__to_int_1_1_f_0(
#line 331 "char.m"
  MR_Char mercury__char__X_3)
#line 331 "char.m"
{
#line 812 "char.m"
  {
#line 812 "char.m"
    MR_bool mercury__char__succeeded;
#line 812 "char.m"
    MR_Integer mercury__char__Y_4;

#line 816 "char.m"
{
#define MR_PROC_LABEL mercury__char__ClassMethod_for_enum__enum____character__arity0______enum__to_int_1_1_f_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__char__X_3 ;
		{
#line 816 "char.m"

    Int = (MR_UnsignedChar) Character;

#line 738 "char.c"

		;}
#undef MR_PROC_LABEL
	 mercury__char__Y_4  = Int;
#line 816 "char.m"
}
#line 812 "char.m"
    return mercury__char__Y_4;
#line 812 "char.m"
  }
#line 331 "char.m"
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

#line 816 "char.m"
{
#define MR_PROC_LABEL mercury__char____Compare____char_0_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__char__Cast_HeadVar1_4 ;
		{
#line 816 "char.m"

    Int = (MR_UnsignedChar) Character;

#line 789 "char.c"

		;}
#undef MR_PROC_LABEL
	 mercury__char__XI_7_10  = Int;
#line 816 "char.m"
}
#line 816 "char.m"
{
#define MR_PROC_LABEL mercury__char____Compare____char_0_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__char__Cast_HeadVar2_5 ;
		{
#line 816 "char.m"

    Int = (MR_UnsignedChar) Character;

#line 809 "char.c"

		;}
#undef MR_PROC_LABEL
	 mercury__char__YI_8_11  = Int;
#line 816 "char.m"
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

#line 719 "char.m"
MR_bool MR_CALL 
mercury__char__int_to_extended_digit_2_p_1(
#line 719 "char.m"
  MR_Integer * mercury__char__HeadVar__1_1,
#line 719 "char.m"
  MR_Char mercury__char__HeadVar__2_2)
#line 719 "char.m"
{
#line 721 "char.m"
  {
#line 721 "char.m"
    MR_bool mercury__char__succeeded;

#line 721 "char.m"
    if ((mercury__char__HeadVar__2_2 == (MR_Char) 48))
#line 721 "char.m"
      {
#line 721 "char.m"
        *mercury__char__HeadVar__1_1 = (MR_Integer) 0;
#line 721 "char.m"
        mercury__char__succeeded = MR_TRUE;
#line 721 "char.m"
      }
#line 721 "char.m"
    else
#line 721 "char.m"
      if ((mercury__char__HeadVar__2_2 == (MR_Char) 49))
#line 722 "char.m"
        {
#line 722 "char.m"
          *mercury__char__HeadVar__1_1 = (MR_Integer) 1;
#line 722 "char.m"
          mercury__char__succeeded = MR_TRUE;
#line 722 "char.m"
        }
#line 721 "char.m"
      else
#line 721 "char.m"
        if ((mercury__char__HeadVar__2_2 == (MR_Char) 50))
#line 723 "char.m"
          {
#line 723 "char.m"
            *mercury__char__HeadVar__1_1 = (MR_Integer) 2;
#line 723 "char.m"
            mercury__char__succeeded = MR_TRUE;
#line 723 "char.m"
          }
#line 721 "char.m"
        else
#line 721 "char.m"
          if ((mercury__char__HeadVar__2_2 == (MR_Char) 51))
#line 724 "char.m"
            {
#line 724 "char.m"
              *mercury__char__HeadVar__1_1 = (MR_Integer) 3;
#line 724 "char.m"
              mercury__char__succeeded = MR_TRUE;
#line 724 "char.m"
            }
#line 721 "char.m"
          else
#line 721 "char.m"
            if ((mercury__char__HeadVar__2_2 == (MR_Char) 52))
#line 725 "char.m"
              {
#line 725 "char.m"
                *mercury__char__HeadVar__1_1 = (MR_Integer) 4;
#line 725 "char.m"
                mercury__char__succeeded = MR_TRUE;
#line 725 "char.m"
              }
#line 721 "char.m"
            else
#line 721 "char.m"
              if ((mercury__char__HeadVar__2_2 == (MR_Char) 53))
#line 726 "char.m"
                {
#line 726 "char.m"
                  *mercury__char__HeadVar__1_1 = (MR_Integer) 5;
#line 726 "char.m"
                  mercury__char__succeeded = MR_TRUE;
#line 726 "char.m"
                }
#line 721 "char.m"
              else
#line 721 "char.m"
                if ((mercury__char__HeadVar__2_2 == (MR_Char) 54))
#line 727 "char.m"
                  {
#line 727 "char.m"
                    *mercury__char__HeadVar__1_1 = (MR_Integer) 6;
#line 727 "char.m"
                    mercury__char__succeeded = MR_TRUE;
#line 727 "char.m"
                  }
#line 721 "char.m"
                else
#line 721 "char.m"
                  if ((mercury__char__HeadVar__2_2 == (MR_Char) 55))
#line 728 "char.m"
                    {
#line 728 "char.m"
                      *mercury__char__HeadVar__1_1 = (MR_Integer) 7;
#line 728 "char.m"
                      mercury__char__succeeded = MR_TRUE;
#line 728 "char.m"
                    }
#line 721 "char.m"
                  else
#line 721 "char.m"
                    if ((mercury__char__HeadVar__2_2 == (MR_Char) 56))
#line 729 "char.m"
                      {
#line 729 "char.m"
                        *mercury__char__HeadVar__1_1 = (MR_Integer) 8;
#line 729 "char.m"
                        mercury__char__succeeded = MR_TRUE;
#line 729 "char.m"
                      }
#line 721 "char.m"
                    else
#line 721 "char.m"
                      if ((mercury__char__HeadVar__2_2 == (MR_Char) 57))
#line 730 "char.m"
                        {
#line 730 "char.m"
                          *mercury__char__HeadVar__1_1 = (MR_Integer) 9;
#line 730 "char.m"
                          mercury__char__succeeded = MR_TRUE;
#line 730 "char.m"
                        }
#line 721 "char.m"
                      else
#line 721 "char.m"
                        if ((mercury__char__HeadVar__2_2 == (MR_Char) 65))
#line 731 "char.m"
                          {
#line 731 "char.m"
                            *mercury__char__HeadVar__1_1 = (MR_Integer) 10;
#line 731 "char.m"
                            mercury__char__succeeded = MR_TRUE;
#line 731 "char.m"
                          }
#line 721 "char.m"
                        else
#line 721 "char.m"
                          if ((mercury__char__HeadVar__2_2 == (MR_Char) 66))
#line 732 "char.m"
                            {
#line 732 "char.m"
                              *mercury__char__HeadVar__1_1 = (MR_Integer) 11;
#line 732 "char.m"
                              mercury__char__succeeded = MR_TRUE;
#line 732 "char.m"
                            }
#line 721 "char.m"
                          else
#line 721 "char.m"
                            if ((mercury__char__HeadVar__2_2 == (MR_Char) 67))
#line 733 "char.m"
                              {
#line 733 "char.m"
                                *mercury__char__HeadVar__1_1 = (MR_Integer) 12;
#line 733 "char.m"
                                mercury__char__succeeded = MR_TRUE;
#line 733 "char.m"
                              }
#line 721 "char.m"
                            else
#line 721 "char.m"
                              if ((mercury__char__HeadVar__2_2 == (MR_Char) 68))
#line 734 "char.m"
                                {
#line 734 "char.m"
                                  *mercury__char__HeadVar__1_1 = (MR_Integer) 13;
#line 734 "char.m"
                                  mercury__char__succeeded = MR_TRUE;
#line 734 "char.m"
                                }
#line 721 "char.m"
                              else
#line 721 "char.m"
                                if ((mercury__char__HeadVar__2_2 == (MR_Char) 69))
#line 735 "char.m"
                                  {
#line 735 "char.m"
                                    *mercury__char__HeadVar__1_1 = (MR_Integer) 14;
#line 735 "char.m"
                                    mercury__char__succeeded = MR_TRUE;
#line 735 "char.m"
                                  }
#line 721 "char.m"
                                else
#line 721 "char.m"
                                  if ((mercury__char__HeadVar__2_2 == (MR_Char) 70))
#line 736 "char.m"
                                    {
#line 736 "char.m"
                                      *mercury__char__HeadVar__1_1 = (MR_Integer) 15;
#line 736 "char.m"
                                      mercury__char__succeeded = MR_TRUE;
#line 736 "char.m"
                                    }
#line 721 "char.m"
                                  else
#line 721 "char.m"
                                    if ((mercury__char__HeadVar__2_2 == (MR_Char) 71))
#line 737 "char.m"
                                      {
#line 737 "char.m"
                                        *mercury__char__HeadVar__1_1 = (MR_Integer) 16;
#line 737 "char.m"
                                        mercury__char__succeeded = MR_TRUE;
#line 737 "char.m"
                                      }
#line 721 "char.m"
                                    else
#line 721 "char.m"
                                      if ((mercury__char__HeadVar__2_2 == (MR_Char) 72))
#line 738 "char.m"
                                        {
#line 738 "char.m"
                                          *mercury__char__HeadVar__1_1 = (MR_Integer) 17;
#line 738 "char.m"
                                          mercury__char__succeeded = MR_TRUE;
#line 738 "char.m"
                                        }
#line 721 "char.m"
                                      else
#line 721 "char.m"
                                        if ((mercury__char__HeadVar__2_2 == (MR_Char) 73))
#line 739 "char.m"
                                          {
#line 739 "char.m"
                                            *mercury__char__HeadVar__1_1 = (MR_Integer) 18;
#line 739 "char.m"
                                            mercury__char__succeeded = MR_TRUE;
#line 739 "char.m"
                                          }
#line 721 "char.m"
                                        else
#line 721 "char.m"
                                          if ((mercury__char__HeadVar__2_2 == (MR_Char) 74))
#line 740 "char.m"
                                            {
#line 740 "char.m"
                                              *mercury__char__HeadVar__1_1 = (MR_Integer) 19;
#line 740 "char.m"
                                              mercury__char__succeeded = MR_TRUE;
#line 740 "char.m"
                                            }
#line 721 "char.m"
                                          else
#line 721 "char.m"
                                            if ((mercury__char__HeadVar__2_2 == (MR_Char) 75))
#line 741 "char.m"
                                              {
#line 741 "char.m"
                                                *mercury__char__HeadVar__1_1 = (MR_Integer) 20;
#line 741 "char.m"
                                                mercury__char__succeeded = MR_TRUE;
#line 741 "char.m"
                                              }
#line 721 "char.m"
                                            else
#line 721 "char.m"
                                              if ((mercury__char__HeadVar__2_2 == (MR_Char) 76))
#line 742 "char.m"
                                                {
#line 742 "char.m"
                                                  *mercury__char__HeadVar__1_1 = (MR_Integer) 21;
#line 742 "char.m"
                                                  mercury__char__succeeded = MR_TRUE;
#line 742 "char.m"
                                                }
#line 721 "char.m"
                                              else
#line 721 "char.m"
                                                if ((mercury__char__HeadVar__2_2 == (MR_Char) 77))
#line 743 "char.m"
                                                  {
#line 743 "char.m"
                                                    *mercury__char__HeadVar__1_1 = (MR_Integer) 22;
#line 743 "char.m"
                                                    mercury__char__succeeded = MR_TRUE;
#line 743 "char.m"
                                                  }
#line 721 "char.m"
                                                else
#line 721 "char.m"
                                                  if ((mercury__char__HeadVar__2_2 == (MR_Char) 78))
#line 744 "char.m"
                                                    {
#line 744 "char.m"
                                                      *mercury__char__HeadVar__1_1 = (MR_Integer) 23;
#line 744 "char.m"
                                                      mercury__char__succeeded = MR_TRUE;
#line 744 "char.m"
                                                    }
#line 721 "char.m"
                                                  else
#line 721 "char.m"
                                                    if ((mercury__char__HeadVar__2_2 == (MR_Char) 79))
#line 745 "char.m"
                                                      {
#line 745 "char.m"
                                                        *mercury__char__HeadVar__1_1 = (MR_Integer) 24;
#line 745 "char.m"
                                                        mercury__char__succeeded = MR_TRUE;
#line 745 "char.m"
                                                      }
#line 721 "char.m"
                                                    else
#line 721 "char.m"
                                                      if ((mercury__char__HeadVar__2_2 == (MR_Char) 80))
#line 746 "char.m"
                                                        {
#line 746 "char.m"
                                                          *mercury__char__HeadVar__1_1 = (MR_Integer) 25;
#line 746 "char.m"
                                                          mercury__char__succeeded = MR_TRUE;
#line 746 "char.m"
                                                        }
#line 721 "char.m"
                                                      else
#line 721 "char.m"
                                                        if ((mercury__char__HeadVar__2_2 == (MR_Char) 81))
#line 747 "char.m"
                                                          {
#line 747 "char.m"
                                                            *mercury__char__HeadVar__1_1 = (MR_Integer) 26;
#line 747 "char.m"
                                                            mercury__char__succeeded = MR_TRUE;
#line 747 "char.m"
                                                          }
#line 721 "char.m"
                                                        else
#line 721 "char.m"
                                                          if ((mercury__char__HeadVar__2_2 == (MR_Char) 82))
#line 748 "char.m"
                                                            {
#line 748 "char.m"
                                                              *mercury__char__HeadVar__1_1 = (MR_Integer) 27;
#line 748 "char.m"
                                                              mercury__char__succeeded = MR_TRUE;
#line 748 "char.m"
                                                            }
#line 721 "char.m"
                                                          else
#line 721 "char.m"
                                                            if ((mercury__char__HeadVar__2_2 == (MR_Char) 83))
#line 749 "char.m"
                                                              {
#line 749 "char.m"
                                                                *mercury__char__HeadVar__1_1 = (MR_Integer) 28;
#line 749 "char.m"
                                                                mercury__char__succeeded = MR_TRUE;
#line 749 "char.m"
                                                              }
#line 721 "char.m"
                                                            else
#line 721 "char.m"
                                                              if ((mercury__char__HeadVar__2_2 == (MR_Char) 84))
#line 750 "char.m"
                                                                {
#line 750 "char.m"
                                                                  *mercury__char__HeadVar__1_1 = (MR_Integer) 29;
#line 750 "char.m"
                                                                  mercury__char__succeeded = MR_TRUE;
#line 750 "char.m"
                                                                }
#line 721 "char.m"
                                                              else
#line 721 "char.m"
                                                                if ((mercury__char__HeadVar__2_2 == (MR_Char) 85))
#line 751 "char.m"
                                                                  {
#line 751 "char.m"
                                                                    *mercury__char__HeadVar__1_1 = (MR_Integer) 30;
#line 751 "char.m"
                                                                    mercury__char__succeeded = MR_TRUE;
#line 751 "char.m"
                                                                  }
#line 721 "char.m"
                                                                else
#line 721 "char.m"
                                                                  if ((mercury__char__HeadVar__2_2 == (MR_Char) 86))
#line 752 "char.m"
                                                                    {
#line 752 "char.m"
                                                                      *mercury__char__HeadVar__1_1 = (MR_Integer) 31;
#line 752 "char.m"
                                                                      mercury__char__succeeded = MR_TRUE;
#line 752 "char.m"
                                                                    }
#line 721 "char.m"
                                                                  else
#line 721 "char.m"
                                                                    if ((mercury__char__HeadVar__2_2 == (MR_Char) 87))
#line 753 "char.m"
                                                                      {
#line 753 "char.m"
                                                                        *mercury__char__HeadVar__1_1 = (MR_Integer) 32;
#line 753 "char.m"
                                                                        mercury__char__succeeded = MR_TRUE;
#line 753 "char.m"
                                                                      }
#line 721 "char.m"
                                                                    else
#line 721 "char.m"
                                                                      if ((mercury__char__HeadVar__2_2 == (MR_Char) 88))
#line 754 "char.m"
                                                                        {
#line 754 "char.m"
                                                                          *mercury__char__HeadVar__1_1 = (MR_Integer) 33;
#line 754 "char.m"
                                                                          mercury__char__succeeded = MR_TRUE;
#line 754 "char.m"
                                                                        }
#line 721 "char.m"
                                                                      else
#line 721 "char.m"
                                                                        if ((mercury__char__HeadVar__2_2 == (MR_Char) 89))
#line 755 "char.m"
                                                                          {
#line 755 "char.m"
                                                                            *mercury__char__HeadVar__1_1 = (MR_Integer) 34;
#line 755 "char.m"
                                                                            mercury__char__succeeded = MR_TRUE;
#line 755 "char.m"
                                                                          }
#line 721 "char.m"
                                                                        else
#line 721 "char.m"
                                                                          if ((mercury__char__HeadVar__2_2 == (MR_Char) 90))
#line 756 "char.m"
                                                                            {
#line 756 "char.m"
                                                                              *mercury__char__HeadVar__1_1 = (MR_Integer) 35;
#line 756 "char.m"
                                                                              mercury__char__succeeded = MR_TRUE;
#line 756 "char.m"
                                                                            }
#line 721 "char.m"
                                                                          else
#line 721 "char.m"
                                                                            mercury__char__succeeded = MR_FALSE;
#line 721 "char.m"
    return mercury__char__succeeded;
#line 721 "char.m"
  }
#line 719 "char.m"
}

#line 718 "char.m"
MR_bool MR_CALL 
mercury__char__int_to_extended_digit_2_p_0(
#line 718 "char.m"
  MR_Integer mercury__char__HeadVar__1_1,
#line 718 "char.m"
  MR_Char * mercury__char__HeadVar__2_2)
#line 718 "char.m"
{
#line 721 "char.m"
  {
#line 721 "char.m"
    MR_bool mercury__char__succeeded;

#line 721 "char.m"
    if ((mercury__char__HeadVar__1_1 == (MR_Integer) 0))
#line 721 "char.m"
      {
#line 721 "char.m"
        *mercury__char__HeadVar__2_2 = (MR_Char) 48;
#line 721 "char.m"
        mercury__char__succeeded = MR_TRUE;
#line 721 "char.m"
      }
#line 721 "char.m"
    else
#line 721 "char.m"
      if ((mercury__char__HeadVar__1_1 == (MR_Integer) 1))
#line 722 "char.m"
        {
#line 722 "char.m"
          *mercury__char__HeadVar__2_2 = (MR_Char) 49;
#line 722 "char.m"
          mercury__char__succeeded = MR_TRUE;
#line 722 "char.m"
        }
#line 721 "char.m"
      else
#line 721 "char.m"
        if ((mercury__char__HeadVar__1_1 == (MR_Integer) 2))
#line 723 "char.m"
          {
#line 723 "char.m"
            *mercury__char__HeadVar__2_2 = (MR_Char) 50;
#line 723 "char.m"
            mercury__char__succeeded = MR_TRUE;
#line 723 "char.m"
          }
#line 721 "char.m"
        else
#line 721 "char.m"
          if ((mercury__char__HeadVar__1_1 == (MR_Integer) 3))
#line 724 "char.m"
            {
#line 724 "char.m"
              *mercury__char__HeadVar__2_2 = (MR_Char) 51;
#line 724 "char.m"
              mercury__char__succeeded = MR_TRUE;
#line 724 "char.m"
            }
#line 721 "char.m"
          else
#line 721 "char.m"
            if ((mercury__char__HeadVar__1_1 == (MR_Integer) 4))
#line 725 "char.m"
              {
#line 725 "char.m"
                *mercury__char__HeadVar__2_2 = (MR_Char) 52;
#line 725 "char.m"
                mercury__char__succeeded = MR_TRUE;
#line 725 "char.m"
              }
#line 721 "char.m"
            else
#line 721 "char.m"
              if ((mercury__char__HeadVar__1_1 == (MR_Integer) 5))
#line 726 "char.m"
                {
#line 726 "char.m"
                  *mercury__char__HeadVar__2_2 = (MR_Char) 53;
#line 726 "char.m"
                  mercury__char__succeeded = MR_TRUE;
#line 726 "char.m"
                }
#line 721 "char.m"
              else
#line 721 "char.m"
                if ((mercury__char__HeadVar__1_1 == (MR_Integer) 6))
#line 727 "char.m"
                  {
#line 727 "char.m"
                    *mercury__char__HeadVar__2_2 = (MR_Char) 54;
#line 727 "char.m"
                    mercury__char__succeeded = MR_TRUE;
#line 727 "char.m"
                  }
#line 721 "char.m"
                else
#line 721 "char.m"
                  if ((mercury__char__HeadVar__1_1 == (MR_Integer) 7))
#line 728 "char.m"
                    {
#line 728 "char.m"
                      *mercury__char__HeadVar__2_2 = (MR_Char) 55;
#line 728 "char.m"
                      mercury__char__succeeded = MR_TRUE;
#line 728 "char.m"
                    }
#line 721 "char.m"
                  else
#line 721 "char.m"
                    if ((mercury__char__HeadVar__1_1 == (MR_Integer) 8))
#line 729 "char.m"
                      {
#line 729 "char.m"
                        *mercury__char__HeadVar__2_2 = (MR_Char) 56;
#line 729 "char.m"
                        mercury__char__succeeded = MR_TRUE;
#line 729 "char.m"
                      }
#line 721 "char.m"
                    else
#line 721 "char.m"
                      if ((mercury__char__HeadVar__1_1 == (MR_Integer) 9))
#line 730 "char.m"
                        {
#line 730 "char.m"
                          *mercury__char__HeadVar__2_2 = (MR_Char) 57;
#line 730 "char.m"
                          mercury__char__succeeded = MR_TRUE;
#line 730 "char.m"
                        }
#line 721 "char.m"
                      else
#line 721 "char.m"
                        if ((mercury__char__HeadVar__1_1 == (MR_Integer) 10))
#line 731 "char.m"
                          {
#line 731 "char.m"
                            *mercury__char__HeadVar__2_2 = (MR_Char) 65;
#line 731 "char.m"
                            mercury__char__succeeded = MR_TRUE;
#line 731 "char.m"
                          }
#line 721 "char.m"
                        else
#line 721 "char.m"
                          if ((mercury__char__HeadVar__1_1 == (MR_Integer) 11))
#line 732 "char.m"
                            {
#line 732 "char.m"
                              *mercury__char__HeadVar__2_2 = (MR_Char) 66;
#line 732 "char.m"
                              mercury__char__succeeded = MR_TRUE;
#line 732 "char.m"
                            }
#line 721 "char.m"
                          else
#line 721 "char.m"
                            if ((mercury__char__HeadVar__1_1 == (MR_Integer) 12))
#line 733 "char.m"
                              {
#line 733 "char.m"
                                *mercury__char__HeadVar__2_2 = (MR_Char) 67;
#line 733 "char.m"
                                mercury__char__succeeded = MR_TRUE;
#line 733 "char.m"
                              }
#line 721 "char.m"
                            else
#line 721 "char.m"
                              if ((mercury__char__HeadVar__1_1 == (MR_Integer) 13))
#line 734 "char.m"
                                {
#line 734 "char.m"
                                  *mercury__char__HeadVar__2_2 = (MR_Char) 68;
#line 734 "char.m"
                                  mercury__char__succeeded = MR_TRUE;
#line 734 "char.m"
                                }
#line 721 "char.m"
                              else
#line 721 "char.m"
                                if ((mercury__char__HeadVar__1_1 == (MR_Integer) 14))
#line 735 "char.m"
                                  {
#line 735 "char.m"
                                    *mercury__char__HeadVar__2_2 = (MR_Char) 69;
#line 735 "char.m"
                                    mercury__char__succeeded = MR_TRUE;
#line 735 "char.m"
                                  }
#line 721 "char.m"
                                else
#line 721 "char.m"
                                  if ((mercury__char__HeadVar__1_1 == (MR_Integer) 15))
#line 736 "char.m"
                                    {
#line 736 "char.m"
                                      *mercury__char__HeadVar__2_2 = (MR_Char) 70;
#line 736 "char.m"
                                      mercury__char__succeeded = MR_TRUE;
#line 736 "char.m"
                                    }
#line 721 "char.m"
                                  else
#line 721 "char.m"
                                    if ((mercury__char__HeadVar__1_1 == (MR_Integer) 16))
#line 737 "char.m"
                                      {
#line 737 "char.m"
                                        *mercury__char__HeadVar__2_2 = (MR_Char) 71;
#line 737 "char.m"
                                        mercury__char__succeeded = MR_TRUE;
#line 737 "char.m"
                                      }
#line 721 "char.m"
                                    else
#line 721 "char.m"
                                      if ((mercury__char__HeadVar__1_1 == (MR_Integer) 17))
#line 738 "char.m"
                                        {
#line 738 "char.m"
                                          *mercury__char__HeadVar__2_2 = (MR_Char) 72;
#line 738 "char.m"
                                          mercury__char__succeeded = MR_TRUE;
#line 738 "char.m"
                                        }
#line 721 "char.m"
                                      else
#line 721 "char.m"
                                        if ((mercury__char__HeadVar__1_1 == (MR_Integer) 18))
#line 739 "char.m"
                                          {
#line 739 "char.m"
                                            *mercury__char__HeadVar__2_2 = (MR_Char) 73;
#line 739 "char.m"
                                            mercury__char__succeeded = MR_TRUE;
#line 739 "char.m"
                                          }
#line 721 "char.m"
                                        else
#line 721 "char.m"
                                          if ((mercury__char__HeadVar__1_1 == (MR_Integer) 19))
#line 740 "char.m"
                                            {
#line 740 "char.m"
                                              *mercury__char__HeadVar__2_2 = (MR_Char) 74;
#line 740 "char.m"
                                              mercury__char__succeeded = MR_TRUE;
#line 740 "char.m"
                                            }
#line 721 "char.m"
                                          else
#line 721 "char.m"
                                            if ((mercury__char__HeadVar__1_1 == (MR_Integer) 20))
#line 741 "char.m"
                                              {
#line 741 "char.m"
                                                *mercury__char__HeadVar__2_2 = (MR_Char) 75;
#line 741 "char.m"
                                                mercury__char__succeeded = MR_TRUE;
#line 741 "char.m"
                                              }
#line 721 "char.m"
                                            else
#line 721 "char.m"
                                              if ((mercury__char__HeadVar__1_1 == (MR_Integer) 21))
#line 742 "char.m"
                                                {
#line 742 "char.m"
                                                  *mercury__char__HeadVar__2_2 = (MR_Char) 76;
#line 742 "char.m"
                                                  mercury__char__succeeded = MR_TRUE;
#line 742 "char.m"
                                                }
#line 721 "char.m"
                                              else
#line 721 "char.m"
                                                if ((mercury__char__HeadVar__1_1 == (MR_Integer) 22))
#line 743 "char.m"
                                                  {
#line 743 "char.m"
                                                    *mercury__char__HeadVar__2_2 = (MR_Char) 77;
#line 743 "char.m"
                                                    mercury__char__succeeded = MR_TRUE;
#line 743 "char.m"
                                                  }
#line 721 "char.m"
                                                else
#line 721 "char.m"
                                                  if ((mercury__char__HeadVar__1_1 == (MR_Integer) 23))
#line 744 "char.m"
                                                    {
#line 744 "char.m"
                                                      *mercury__char__HeadVar__2_2 = (MR_Char) 78;
#line 744 "char.m"
                                                      mercury__char__succeeded = MR_TRUE;
#line 744 "char.m"
                                                    }
#line 721 "char.m"
                                                  else
#line 721 "char.m"
                                                    if ((mercury__char__HeadVar__1_1 == (MR_Integer) 24))
#line 745 "char.m"
                                                      {
#line 745 "char.m"
                                                        *mercury__char__HeadVar__2_2 = (MR_Char) 79;
#line 745 "char.m"
                                                        mercury__char__succeeded = MR_TRUE;
#line 745 "char.m"
                                                      }
#line 721 "char.m"
                                                    else
#line 721 "char.m"
                                                      if ((mercury__char__HeadVar__1_1 == (MR_Integer) 25))
#line 746 "char.m"
                                                        {
#line 746 "char.m"
                                                          *mercury__char__HeadVar__2_2 = (MR_Char) 80;
#line 746 "char.m"
                                                          mercury__char__succeeded = MR_TRUE;
#line 746 "char.m"
                                                        }
#line 721 "char.m"
                                                      else
#line 721 "char.m"
                                                        if ((mercury__char__HeadVar__1_1 == (MR_Integer) 26))
#line 747 "char.m"
                                                          {
#line 747 "char.m"
                                                            *mercury__char__HeadVar__2_2 = (MR_Char) 81;
#line 747 "char.m"
                                                            mercury__char__succeeded = MR_TRUE;
#line 747 "char.m"
                                                          }
#line 721 "char.m"
                                                        else
#line 721 "char.m"
                                                          if ((mercury__char__HeadVar__1_1 == (MR_Integer) 27))
#line 748 "char.m"
                                                            {
#line 748 "char.m"
                                                              *mercury__char__HeadVar__2_2 = (MR_Char) 82;
#line 748 "char.m"
                                                              mercury__char__succeeded = MR_TRUE;
#line 748 "char.m"
                                                            }
#line 721 "char.m"
                                                          else
#line 721 "char.m"
                                                            if ((mercury__char__HeadVar__1_1 == (MR_Integer) 28))
#line 749 "char.m"
                                                              {
#line 749 "char.m"
                                                                *mercury__char__HeadVar__2_2 = (MR_Char) 83;
#line 749 "char.m"
                                                                mercury__char__succeeded = MR_TRUE;
#line 749 "char.m"
                                                              }
#line 721 "char.m"
                                                            else
#line 721 "char.m"
                                                              if ((mercury__char__HeadVar__1_1 == (MR_Integer) 29))
#line 750 "char.m"
                                                                {
#line 750 "char.m"
                                                                  *mercury__char__HeadVar__2_2 = (MR_Char) 84;
#line 750 "char.m"
                                                                  mercury__char__succeeded = MR_TRUE;
#line 750 "char.m"
                                                                }
#line 721 "char.m"
                                                              else
#line 721 "char.m"
                                                                if ((mercury__char__HeadVar__1_1 == (MR_Integer) 30))
#line 751 "char.m"
                                                                  {
#line 751 "char.m"
                                                                    *mercury__char__HeadVar__2_2 = (MR_Char) 85;
#line 751 "char.m"
                                                                    mercury__char__succeeded = MR_TRUE;
#line 751 "char.m"
                                                                  }
#line 721 "char.m"
                                                                else
#line 721 "char.m"
                                                                  if ((mercury__char__HeadVar__1_1 == (MR_Integer) 31))
#line 752 "char.m"
                                                                    {
#line 752 "char.m"
                                                                      *mercury__char__HeadVar__2_2 = (MR_Char) 86;
#line 752 "char.m"
                                                                      mercury__char__succeeded = MR_TRUE;
#line 752 "char.m"
                                                                    }
#line 721 "char.m"
                                                                  else
#line 721 "char.m"
                                                                    if ((mercury__char__HeadVar__1_1 == (MR_Integer) 32))
#line 753 "char.m"
                                                                      {
#line 753 "char.m"
                                                                        *mercury__char__HeadVar__2_2 = (MR_Char) 87;
#line 753 "char.m"
                                                                        mercury__char__succeeded = MR_TRUE;
#line 753 "char.m"
                                                                      }
#line 721 "char.m"
                                                                    else
#line 721 "char.m"
                                                                      if ((mercury__char__HeadVar__1_1 == (MR_Integer) 33))
#line 754 "char.m"
                                                                        {
#line 754 "char.m"
                                                                          *mercury__char__HeadVar__2_2 = (MR_Char) 88;
#line 754 "char.m"
                                                                          mercury__char__succeeded = MR_TRUE;
#line 754 "char.m"
                                                                        }
#line 721 "char.m"
                                                                      else
#line 721 "char.m"
                                                                        if ((mercury__char__HeadVar__1_1 == (MR_Integer) 34))
#line 755 "char.m"
                                                                          {
#line 755 "char.m"
                                                                            *mercury__char__HeadVar__2_2 = (MR_Char) 89;
#line 755 "char.m"
                                                                            mercury__char__succeeded = MR_TRUE;
#line 755 "char.m"
                                                                          }
#line 721 "char.m"
                                                                        else
#line 721 "char.m"
                                                                          if ((mercury__char__HeadVar__1_1 == (MR_Integer) 35))
#line 756 "char.m"
                                                                            {
#line 756 "char.m"
                                                                              *mercury__char__HeadVar__2_2 = (MR_Char) 90;
#line 756 "char.m"
                                                                              mercury__char__succeeded = MR_TRUE;
#line 756 "char.m"
                                                                            }
#line 721 "char.m"
                                                                          else
#line 721 "char.m"
                                                                            mercury__char__succeeded = MR_FALSE;
#line 721 "char.m"
    return mercury__char__succeeded;
#line 721 "char.m"
  }
#line 718 "char.m"
}

#line 319 "char.m"
void MR_CALL 
mercury__char__det_int_to_digit_2_p_0(
#line 319 "char.m"
  MR_Integer mercury__char__Int_3,
#line 319 "char.m"
  MR_Char * mercury__char__Digit_4)
#line 319 "char.m"
{
#line 713 "char.m"
  {
#line 713 "char.m"
    MR_bool mercury__char__succeeded;
#line 713 "char.m"
    MR_Char mercury__char__Digit1_5;

#line 711 "char.m"
    {
#line 711 "char.m"
      mercury__char__succeeded = mercury__char__int_to_extended_digit_2_p_0(mercury__char__Int_3, &mercury__char__Digit1_5);
    }
#line 713 "char.m"
    if (mercury__char__succeeded)
#line 712 "char.m"
      *mercury__char__Digit_4 = mercury__char__Digit1_5;
#line 713 "char.m"
    else
#line 714 "char.m"
      {
#line 714 "char.m"
        {
#line 714 "char.m"
          mercury__require__error_1_p_0((MR_String) "char.int_to_digit failed");
#line 714 "char.m"
          return;
        }
#line 714 "char.m"
      }
#line 713 "char.m"
  }
#line 319 "char.m"
}

#line 317 "char.m"
MR_Char MR_CALL 
mercury__char__det_int_to_digit_1_f_0(
#line 317 "char.m"
  MR_Integer mercury__char__N_3)
#line 317 "char.m"
{
#line 713 "char.m"
  {
#line 713 "char.m"
    MR_bool mercury__char__succeeded;
#line 713 "char.m"
    MR_Char mercury__char__C_4;
#line 713 "char.m"
    MR_Char mercury__char__Digit1_7;

#line 711 "char.m"
    {
#line 711 "char.m"
      mercury__char__succeeded = mercury__char__int_to_extended_digit_2_p_0(mercury__char__N_3, &mercury__char__Digit1_7);
    }
#line 713 "char.m"
    if (mercury__char__succeeded)
#line 712 "char.m"
      mercury__char__C_4 = mercury__char__Digit1_7;
#line 713 "char.m"
    else
#line 714 "char.m"
      {
#line 714 "char.m"
        {
#line 714 "char.m"
          mercury__require__error_1_p_0((MR_String) "char.int_to_digit failed");
        }
#line 714 "char.m"
      }
#line 713 "char.m"
    return mercury__char__C_4;
#line 713 "char.m"
  }
#line 317 "char.m"
}

#line 307 "char.m"
MR_bool MR_CALL 
mercury__char__int_to_digit_2_p_1(
#line 307 "char.m"
  MR_Integer * mercury__char__Int_3,
#line 307 "char.m"
  MR_Char mercury__char__Digit_4)
#line 307 "char.m"
{
#line 759 "char.m"
  {
#line 759 "char.m"
    MR_bool mercury__char__succeeded;

#line 759 "char.m"
    {
#line 759 "char.m"
      return mercury__char__succeeded = mercury__char__int_to_extended_digit_2_p_1(mercury__char__Int_3, mercury__char__Digit_4);
    }
#line 759 "char.m"
    return mercury__char__succeeded;
#line 759 "char.m"
  }
#line 307 "char.m"
}

#line 306 "char.m"
MR_bool MR_CALL 
mercury__char__int_to_digit_2_p_0(
#line 306 "char.m"
  MR_Integer mercury__char__Int_3,
#line 306 "char.m"
  MR_Char * mercury__char__Digit_4)
#line 306 "char.m"
{
#line 759 "char.m"
  {
#line 759 "char.m"
    MR_bool mercury__char__succeeded;

#line 759 "char.m"
    {
#line 759 "char.m"
      return mercury__char__succeeded = mercury__char__int_to_extended_digit_2_p_0(mercury__char__Int_3, mercury__char__Digit_4);
    }
#line 759 "char.m"
    return mercury__char__succeeded;
#line 759 "char.m"
  }
#line 306 "char.m"
}

#line 289 "char.m"
MR_bool MR_CALL 
mercury__char__digit_to_int_2_p_0(
#line 289 "char.m"
  MR_Char mercury__char__Digit_3,
#line 289 "char.m"
  MR_Integer * mercury__char__Int_4)
#line 289 "char.m"
{
#line 764 "char.m"
  {
#line 764 "char.m"
    MR_bool mercury__char__succeeded;
#line 764 "char.m"
    MR_Char mercury__char__Upper_5;

#line 762 "char.m"
    {
#line 762 "char.m"
      mercury__char__succeeded = mercury__char__lower_upper_2_p_0(mercury__char__Digit_3, &mercury__char__Upper_5);
    }
#line 764 "char.m"
    if (mercury__char__succeeded)
#line 763 "char.m"
      {
#line 763 "char.m"
        return mercury__char__succeeded = mercury__char__int_to_extended_digit_2_p_1(mercury__char__Int_4, mercury__char__Upper_5);
      }
#line 764 "char.m"
    else
#line 765 "char.m"
      {
#line 765 "char.m"
        return mercury__char__succeeded = mercury__char__int_to_extended_digit_2_p_1(mercury__char__Int_4, mercury__char__Digit_3);
      }
#line 764 "char.m"
    return mercury__char__succeeded;
#line 764 "char.m"
  }
#line 289 "char.m"
}

#line 283 "char.m"
MR_bool MR_CALL 
mercury__char__int_to_hex_char_2_p_0(
#line 283 "char.m"
  MR_Integer mercury__char__Int_3,
#line 283 "char.m"
  MR_Char * mercury__char__Char_4)
#line 283 "char.m"
{
#line 688 "char.m"
  {
#line 688 "char.m"
    MR_bool mercury__char__succeeded;

#line 688 "char.m"
    {
#line 688 "char.m"
      return mercury__char__succeeded = mercury__char__int_to_hex_digit_2_p_0(mercury__char__Int_3, mercury__char__Char_4);
    }
#line 688 "char.m"
    return mercury__char__succeeded;
#line 688 "char.m"
  }
#line 283 "char.m"
}

#line 275 "char.m"
MR_bool MR_CALL 
mercury__char__is_hex_digit_2_p_0(
#line 275 "char.m"
  MR_Char mercury__char__Digit_3,
#line 275 "char.m"
  MR_Integer * mercury__char__Int_4)
#line 275 "char.m"
{
#line 591 "char.m"
  {
#line 591 "char.m"
    MR_bool mercury__char__succeeded;

#line 591 "char.m"
    {
#line 591 "char.m"
      return mercury__char__succeeded = mercury__char__hex_digit_to_int_2_p_0(mercury__char__Digit_3, mercury__char__Int_4);
    }
#line 591 "char.m"
    return mercury__char__succeeded;
#line 591 "char.m"
  }
#line 275 "char.m"
}

#line 266 "char.m"
MR_bool MR_CALL 
mercury__char__is_noncharacter_1_p_0(
#line 266 "char.m"
  MR_Char mercury__char__Char_2)
#line 266 "char.m"
{
#line 994 "char.m"
  {
#line 994 "char.m"
    MR_bool mercury__char__succeeded;
#line 994 "char.m"
    MR_Integer mercury__char__Int_3;

#line 816 "char.m"
{
#define MR_PROC_LABEL mercury__char__is_noncharacter_1_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__char__Char_2 ;
		{
#line 816 "char.m"

    Int = (MR_UnsignedChar) Character;

#line 2039 "char.c"

		;}
#undef MR_PROC_LABEL
	 mercury__char__Int_3  = Int;
#line 816 "char.m"
}
#line 996 "char.m"
    {
#line 996 "char.m"
      MR_Integer mercury__char__V_7_7;

#line 996 "char.m"
      mercury__char__succeeded = ((MR_Integer) 64976 <= mercury__char__Int_3);
#line 996 "char.m"
      if (mercury__char__succeeded)
#line 996 "char.m"
        {
#line 996 "char.m"
          mercury__char__V_7_7 = (MR_Integer) 65007;
#line 996 "char.m"
          mercury__char__succeeded = (mercury__char__Int_3 <= mercury__char__V_7_7);
#line 996 "char.m"
        }
#line 996 "char.m"
    }
#line 997 "char.m"
    if (!(mercury__char__succeeded))
#line 997 "char.m"
      {
#line 997 "char.m"
        MR_Integer mercury__char__V_4_4 = (mercury__char__Int_3 & (MR_Integer) 65534);

#line 997 "char.m"
        mercury__char__succeeded = (mercury__char__V_4_4 == (MR_Integer) 65534);
#line 997 "char.m"
      }
#line 994 "char.m"
    return mercury__char__succeeded;
#line 994 "char.m"
  }
#line 266 "char.m"
}

#line 259 "char.m"
MR_bool MR_CALL 
mercury__char__is_surrogate_1_p_0(
#line 259 "char.m"
  MR_Char mercury__char__Char_2)
#line 259 "char.m"
{
#line 989 "char.m"
  {
#line 989 "char.m"
    MR_bool mercury__char__succeeded;
#line 989 "char.m"
    MR_Integer mercury__char__Int_3;
#line 989 "char.m"
    MR_Integer mercury__char__V_5_5;

#line 816 "char.m"
{
#define MR_PROC_LABEL mercury__char__is_surrogate_1_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__char__Char_2 ;
		{
#line 816 "char.m"

    Int = (MR_UnsignedChar) Character;

#line 2112 "char.c"

		;}
#undef MR_PROC_LABEL
	 mercury__char__Int_3  = Int;
#line 816 "char.m"
}
#line 991 "char.m"
    mercury__char__succeeded = (mercury__char__Int_3 >= (MR_Integer) 55296);
#line 989 "char.m"
    if (mercury__char__succeeded)
#line 989 "char.m"
      {
#line 992 "char.m"
        mercury__char__V_5_5 = (MR_Integer) 57343;
#line 992 "char.m"
        mercury__char__succeeded = (mercury__char__Int_3 <= mercury__char__V_5_5);
#line 989 "char.m"
      }
#line 989 "char.m"
    return mercury__char__succeeded;
#line 989 "char.m"
  }
#line 259 "char.m"
}

#line 253 "char.m"
MR_bool MR_CALL 
mercury__char__to_utf16_2_p_0(
#line 253 "char.m"
  MR_Char mercury__char__Char_3,
#line 253 "char.m"
  MR_Word * mercury__char__CodeUnits_4)
#line 253 "char.m"
{
#line 969 "char.m"
  {
#line 969 "char.m"
    MR_bool mercury__char__succeeded;
#line 969 "char.m"
    MR_Integer mercury__char__Int_5;

#line 816 "char.m"
{
#define MR_PROC_LABEL mercury__char__to_utf16_2_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__char__Char_3 ;
		{
#line 816 "char.m"

    Int = (MR_UnsignedChar) Character;

#line 2167 "char.c"

		;}
#undef MR_PROC_LABEL
	 mercury__char__Int_5  = Int;
#line 816 "char.m"
}
#line 971 "char.m"
    mercury__char__succeeded = (mercury__char__Int_5 < (MR_Integer) 55296);
#line 974 "char.m"
    if (mercury__char__succeeded)
#line 973 "char.m"
      {
#line 973 "char.m"
        MR_Word mercury__char__V_10_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 973 "char.m"
        {
#line 973 "char.m"
          MR_Word base;
#line 973 "char.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 973 "char.m"
          *mercury__char__CodeUnits_4 = base;
#line 973 "char.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__char__Int_5));
#line 973 "char.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__char__V_10_10));
#line 973 "char.m"
        }
#line 973 "char.m"
        mercury__char__succeeded = MR_TRUE;
#line 973 "char.m"
      }
#line 974 "char.m"
    else
#line 977 "char.m"
      {
#line 974 "char.m"
        mercury__char__succeeded = (mercury__char__Int_5 <= (MR_Integer) 57343);
#line 977 "char.m"
        if (mercury__char__succeeded)
#line 976 "char.m"
          mercury__char__succeeded = MR_FALSE;
#line 977 "char.m"
        else
#line 979 "char.m"
          {
#line 977 "char.m"
            mercury__char__succeeded = (mercury__char__Int_5 <= (MR_Integer) 65535);
#line 979 "char.m"
            if (mercury__char__succeeded)
#line 978 "char.m"
              {
#line 978 "char.m"
                MR_Word mercury__char__V_13_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 978 "char.m"
                {
#line 978 "char.m"
                  MR_Word base;
#line 978 "char.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 978 "char.m"
                  *mercury__char__CodeUnits_4 = base;
#line 978 "char.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__char__Int_5));
#line 978 "char.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__char__V_13_13));
#line 978 "char.m"
                }
#line 978 "char.m"
                mercury__char__succeeded = MR_TRUE;
#line 978 "char.m"
              }
#line 979 "char.m"
            else
#line 984 "char.m"
              {
#line 984 "char.m"
                MR_Integer mercury__char__U_6;
#line 984 "char.m"
                MR_Integer mercury__char__A_7;
#line 984 "char.m"
                MR_Integer mercury__char__B_8;
#line 984 "char.m"
                MR_Integer mercury__char__V_15_15;
#line 984 "char.m"
                MR_Integer mercury__char__V_16_16;
#line 984 "char.m"
                MR_Integer mercury__char__V_17_17;
#line 984 "char.m"
                MR_Integer mercury__char__V_18_18;
#line 984 "char.m"
                MR_Integer mercury__char__V_19_19;
#line 984 "char.m"
                MR_Integer mercury__char__V_20_20;
#line 984 "char.m"
                MR_Integer mercury__char__V_21_21;
#line 984 "char.m"
                MR_Word mercury__char__V_22_22;
#line 984 "char.m"
                MR_Word mercury__char__V_23_23;

#line 979 "char.m"
                mercury__char__succeeded = (mercury__char__Int_5 <= (MR_Integer) 1114111);
#line 984 "char.m"
                if (mercury__char__succeeded)
#line 984 "char.m"
                  {
#line 980 "char.m"
                    mercury__char__V_15_15 = (MR_Integer) 65536;
#line 980 "char.m"
                    mercury__char__U_6 = (mercury__char__Int_5 - mercury__char__V_15_15);
#line 981 "char.m"
                    mercury__char__V_16_16 = (MR_Integer) 55296;
#line 981 "char.m"
                    mercury__char__V_18_18 = (MR_Integer) 10;
#line 981 "char.m"
                    {
#line 981 "char.m"
                      mercury__char__V_17_17 = mercury__int__f_62_62_2_f_0(mercury__char__U_6, mercury__char__V_18_18);
                    }
#line 981 "char.m"
                    mercury__char__A_7 = (mercury__char__V_16_16 | mercury__char__V_17_17);
#line 982 "char.m"
                    mercury__char__V_19_19 = (MR_Integer) 56320;
#line 982 "char.m"
                    mercury__char__V_21_21 = (MR_Integer) 1023;
#line 982 "char.m"
                    mercury__char__V_20_20 = (mercury__char__U_6 & mercury__char__V_21_21);
#line 982 "char.m"
                    mercury__char__B_8 = (mercury__char__V_19_19 | mercury__char__V_20_20);
#line 983 "char.m"
                    mercury__char__V_23_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 983 "char.m"
                    {
#line 983 "char.m"
                      mercury__char__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 983 "char.m"
                      MR_hl_field(MR_mktag(1), mercury__char__V_22_22, 0) = ((MR_Box) (mercury__char__B_8));
#line 983 "char.m"
                      MR_hl_field(MR_mktag(1), mercury__char__V_22_22, 1) = ((MR_Box) (mercury__char__V_23_23));
#line 983 "char.m"
                    }
#line 983 "char.m"
                    {
#line 983 "char.m"
                      MR_Word base;
#line 983 "char.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 983 "char.m"
                      *mercury__char__CodeUnits_4 = base;
#line 983 "char.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__char__A_7));
#line 983 "char.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__char__V_22_22));
#line 983 "char.m"
                    }
#line 983 "char.m"
                    mercury__char__succeeded = MR_TRUE;
#line 984 "char.m"
                  }
#line 984 "char.m"
              }
#line 979 "char.m"
          }
#line 977 "char.m"
      }
#line 969 "char.m"
    return mercury__char__succeeded;
#line 969 "char.m"
  }
#line 253 "char.m"
}

#line 248 "char.m"
MR_bool MR_CALL 
mercury__char__to_utf8_2_p_0(
#line 248 "char.m"
  MR_Char mercury__char__Char_3,
#line 248 "char.m"
  MR_Word * mercury__char__CodeUnits_4)
#line 248 "char.m"
{
#line 944 "char.m"
  {
#line 944 "char.m"
    MR_bool mercury__char__succeeded;
#line 944 "char.m"
    MR_Integer mercury__char__Int_5;

#line 816 "char.m"
{
#define MR_PROC_LABEL mercury__char__to_utf8_2_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__char__Char_3 ;
		{
#line 816 "char.m"

    Int = (MR_UnsignedChar) Character;

#line 2372 "char.c"

		;}
#undef MR_PROC_LABEL
	 mercury__char__Int_5  = Int;
#line 816 "char.m"
}
#line 946 "char.m"
    mercury__char__succeeded = (mercury__char__Int_5 <= (MR_Integer) 127);
#line 948 "char.m"
    if (mercury__char__succeeded)
#line 947 "char.m"
      {
#line 947 "char.m"
        MR_Word mercury__char__V_11_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 947 "char.m"
        {
#line 947 "char.m"
          MR_Word base;
#line 947 "char.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 947 "char.m"
          *mercury__char__CodeUnits_4 = base;
#line 947 "char.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__char__Int_5));
#line 947 "char.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__char__V_11_11));
#line 947 "char.m"
        }
#line 947 "char.m"
        mercury__char__succeeded = MR_TRUE;
#line 947 "char.m"
      }
#line 948 "char.m"
    else
#line 952 "char.m"
      {
#line 948 "char.m"
        mercury__char__succeeded = (mercury__char__Int_5 <= (MR_Integer) 2047);
#line 952 "char.m"
        if (mercury__char__succeeded)
#line 949 "char.m"
          {
#line 949 "char.m"
            MR_Integer mercury__char__A_6;
#line 949 "char.m"
            MR_Integer mercury__char__B_7;
#line 949 "char.m"
            MR_Integer mercury__char__V_14_14;
#line 949 "char.m"
            MR_Integer mercury__char__V_15_15;
#line 949 "char.m"
            MR_Integer mercury__char__V_19_19;
#line 949 "char.m"
            MR_Word mercury__char__V_21_21;
#line 949 "char.m"
            MR_Word mercury__char__V_22_22;

#line 949 "char.m"
            {
#line 949 "char.m"
              mercury__char__V_15_15 = mercury__int__f_62_62_2_f_0(mercury__char__Int_5, (MR_Integer) 6);
            }
#line 949 "char.m"
            mercury__char__V_14_14 = (mercury__char__V_15_15 & (MR_Integer) 31);
#line 949 "char.m"
            mercury__char__A_6 = ((MR_Integer) 192 | mercury__char__V_14_14);
#line 950 "char.m"
            mercury__char__V_19_19 = (mercury__char__Int_5 & (MR_Integer) 63);
#line 950 "char.m"
            mercury__char__B_7 = ((MR_Integer) 128 | mercury__char__V_19_19);
#line 951 "char.m"
            mercury__char__V_22_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 951 "char.m"
            {
#line 951 "char.m"
              mercury__char__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 951 "char.m"
              MR_hl_field(MR_mktag(1), mercury__char__V_21_21, 0) = ((MR_Box) (mercury__char__B_7));
#line 951 "char.m"
              MR_hl_field(MR_mktag(1), mercury__char__V_21_21, 1) = ((MR_Box) (mercury__char__V_22_22));
#line 951 "char.m"
            }
#line 951 "char.m"
            {
#line 951 "char.m"
              MR_Word base;
#line 951 "char.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 951 "char.m"
              *mercury__char__CodeUnits_4 = base;
#line 951 "char.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__char__A_6));
#line 951 "char.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__char__V_21_21));
#line 951 "char.m"
            }
#line 949 "char.m"
            mercury__char__succeeded = MR_TRUE;
#line 949 "char.m"
          }
#line 952 "char.m"
        else
#line 958 "char.m"
          {
#line 952 "char.m"
            mercury__char__succeeded = (mercury__char__Int_5 <= (MR_Integer) 65535);
#line 958 "char.m"
            if (mercury__char__succeeded)
#line 953 "char.m"
              {
#line 953 "char.m"
                MR_Integer mercury__char__C_8;
#line 953 "char.m"
                MR_Integer mercury__char__V_24_24;
#line 953 "char.m"
                MR_Integer mercury__char__V_25_25;
#line 953 "char.m"
                MR_Integer mercury__char__V_26_26;
#line 953 "char.m"
                MR_Integer mercury__char__V_27_27;
#line 953 "char.m"
                MR_Integer mercury__char__V_28_28;
#line 953 "char.m"
                MR_Integer mercury__char__V_29_29;
#line 953 "char.m"
                MR_Integer mercury__char__V_30_30;
#line 953 "char.m"
                MR_Integer mercury__char__V_31_31;
#line 953 "char.m"
                MR_Integer mercury__char__V_32_32;
#line 953 "char.m"
                MR_Integer mercury__char__V_33_33;
#line 953 "char.m"
                MR_Integer mercury__char__V_34_34;
#line 953 "char.m"
                MR_Integer mercury__char__V_35_35;
#line 953 "char.m"
                MR_Integer mercury__char__V_36_36;
#line 953 "char.m"
                MR_Word mercury__char__V_37_37;
#line 953 "char.m"
                MR_Word mercury__char__V_38_38;
#line 953 "char.m"
                MR_Word mercury__char__V_39_39;
#line 953 "char.m"
                MR_Integer mercury__char__A_63;
#line 953 "char.m"
                MR_Integer mercury__char__B_64;
#line 989 "char.m"
                MR_Integer mercury__char__Int_76;
#line 989 "char.m"
                MR_Integer mercury__char__V_78_78;

#line 816 "char.m"
{
#define MR_PROC_LABEL mercury__char__to_utf8_2_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__char__Char_3 ;
		{
#line 816 "char.m"

    Int = (MR_UnsignedChar) Character;

#line 2540 "char.c"

		;}
#undef MR_PROC_LABEL
	 mercury__char__Int_76  = Int;
#line 816 "char.m"
}
#line 991 "char.m"
                mercury__char__succeeded = (mercury__char__Int_76 >= (MR_Integer) 55296);
#line 989 "char.m"
                if (mercury__char__succeeded)
#line 989 "char.m"
                  {
#line 992 "char.m"
                    mercury__char__V_78_78 = (MR_Integer) 57343;
#line 992 "char.m"
                    mercury__char__succeeded = (mercury__char__Int_76 <= mercury__char__V_78_78);
#line 989 "char.m"
                  }
#line 953 "char.m"
                mercury__char__succeeded = !(mercury__char__succeeded);
#line 953 "char.m"
                if (mercury__char__succeeded)
#line 953 "char.m"
                  {
#line 954 "char.m"
                    mercury__char__V_24_24 = (MR_Integer) 224;
#line 954 "char.m"
                    mercury__char__V_27_27 = (MR_Integer) 12;
#line 954 "char.m"
                    {
#line 954 "char.m"
                      mercury__char__V_26_26 = mercury__int__f_62_62_2_f_0(mercury__char__Int_5, mercury__char__V_27_27);
                    }
#line 954 "char.m"
                    mercury__char__V_28_28 = (MR_Integer) 15;
#line 954 "char.m"
                    mercury__char__V_25_25 = (mercury__char__V_26_26 & mercury__char__V_28_28);
#line 954 "char.m"
                    mercury__char__A_63 = (mercury__char__V_24_24 | mercury__char__V_25_25);
#line 955 "char.m"
                    mercury__char__V_29_29 = (MR_Integer) 128;
#line 955 "char.m"
                    mercury__char__V_32_32 = (MR_Integer) 6;
#line 955 "char.m"
                    {
#line 955 "char.m"
                      mercury__char__V_31_31 = mercury__int__f_62_62_2_f_0(mercury__char__Int_5, mercury__char__V_32_32);
                    }
#line 955 "char.m"
                    mercury__char__V_33_33 = (MR_Integer) 63;
#line 955 "char.m"
                    mercury__char__V_30_30 = (mercury__char__V_31_31 & mercury__char__V_33_33);
#line 955 "char.m"
                    mercury__char__B_64 = (mercury__char__V_29_29 | mercury__char__V_30_30);
#line 956 "char.m"
                    mercury__char__V_34_34 = (MR_Integer) 128;
#line 956 "char.m"
                    mercury__char__V_36_36 = (MR_Integer) 63;
#line 956 "char.m"
                    mercury__char__V_35_35 = (mercury__char__Int_5 & mercury__char__V_36_36);
#line 956 "char.m"
                    mercury__char__C_8 = (mercury__char__V_34_34 | mercury__char__V_35_35);
#line 957 "char.m"
                    mercury__char__V_39_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 957 "char.m"
                    {
#line 957 "char.m"
                      mercury__char__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 957 "char.m"
                      MR_hl_field(MR_mktag(1), mercury__char__V_38_38, 0) = ((MR_Box) (mercury__char__C_8));
#line 957 "char.m"
                      MR_hl_field(MR_mktag(1), mercury__char__V_38_38, 1) = ((MR_Box) (mercury__char__V_39_39));
#line 957 "char.m"
                    }
#line 957 "char.m"
                    {
#line 957 "char.m"
                      mercury__char__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 957 "char.m"
                      MR_hl_field(MR_mktag(1), mercury__char__V_37_37, 0) = ((MR_Box) (mercury__char__B_64));
#line 957 "char.m"
                      MR_hl_field(MR_mktag(1), mercury__char__V_37_37, 1) = ((MR_Box) (mercury__char__V_38_38));
#line 957 "char.m"
                    }
#line 957 "char.m"
                    {
#line 957 "char.m"
                      MR_Word base;
#line 957 "char.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 957 "char.m"
                      *mercury__char__CodeUnits_4 = base;
#line 957 "char.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__char__A_63));
#line 957 "char.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__char__V_37_37));
#line 957 "char.m"
                    }
#line 957 "char.m"
                    mercury__char__succeeded = MR_TRUE;
#line 953 "char.m"
                  }
#line 953 "char.m"
              }
#line 958 "char.m"
            else
#line 964 "char.m"
              {
#line 964 "char.m"
                MR_Integer mercury__char__D_9;
#line 964 "char.m"
                MR_Integer mercury__char__V_41_41;
#line 964 "char.m"
                MR_Integer mercury__char__V_42_42;
#line 964 "char.m"
                MR_Integer mercury__char__V_43_43;
#line 964 "char.m"
                MR_Integer mercury__char__V_44_44;
#line 964 "char.m"
                MR_Integer mercury__char__V_45_45;
#line 964 "char.m"
                MR_Integer mercury__char__V_46_46;
#line 964 "char.m"
                MR_Integer mercury__char__V_47_47;
#line 964 "char.m"
                MR_Integer mercury__char__V_48_48;
#line 964 "char.m"
                MR_Integer mercury__char__V_49_49;
#line 964 "char.m"
                MR_Integer mercury__char__V_50_50;
#line 964 "char.m"
                MR_Integer mercury__char__V_51_51;
#line 964 "char.m"
                MR_Integer mercury__char__V_52_52;
#line 964 "char.m"
                MR_Integer mercury__char__V_53_53;
#line 964 "char.m"
                MR_Integer mercury__char__V_54_54;
#line 964 "char.m"
                MR_Integer mercury__char__V_55_55;
#line 964 "char.m"
                MR_Integer mercury__char__V_56_56;
#line 964 "char.m"
                MR_Integer mercury__char__V_57_57;
#line 964 "char.m"
                MR_Integer mercury__char__V_58_58;
#line 964 "char.m"
                MR_Word mercury__char__V_59_59;
#line 964 "char.m"
                MR_Word mercury__char__V_60_60;
#line 964 "char.m"
                MR_Word mercury__char__V_61_61;
#line 964 "char.m"
                MR_Word mercury__char__V_62_62;
#line 964 "char.m"
                MR_Integer mercury__char__A_65;
#line 964 "char.m"
                MR_Integer mercury__char__B_66;
#line 964 "char.m"
                MR_Integer mercury__char__C_67;

#line 958 "char.m"
                mercury__char__succeeded = (mercury__char__Int_5 <= (MR_Integer) 1114111);
#line 964 "char.m"
                if (mercury__char__succeeded)
#line 964 "char.m"
                  {
#line 959 "char.m"
                    mercury__char__V_41_41 = (MR_Integer) 240;
#line 959 "char.m"
                    mercury__char__V_44_44 = (MR_Integer) 18;
#line 959 "char.m"
                    {
#line 959 "char.m"
                      mercury__char__V_43_43 = mercury__int__f_62_62_2_f_0(mercury__char__Int_5, mercury__char__V_44_44);
                    }
#line 959 "char.m"
                    mercury__char__V_45_45 = (MR_Integer) 7;
#line 959 "char.m"
                    mercury__char__V_42_42 = (mercury__char__V_43_43 & mercury__char__V_45_45);
#line 959 "char.m"
                    mercury__char__A_65 = (mercury__char__V_41_41 | mercury__char__V_42_42);
#line 960 "char.m"
                    mercury__char__V_46_46 = (MR_Integer) 128;
#line 960 "char.m"
                    mercury__char__V_49_49 = (MR_Integer) 12;
#line 960 "char.m"
                    {
#line 960 "char.m"
                      mercury__char__V_48_48 = mercury__int__f_62_62_2_f_0(mercury__char__Int_5, mercury__char__V_49_49);
                    }
#line 960 "char.m"
                    mercury__char__V_50_50 = (MR_Integer) 63;
#line 960 "char.m"
                    mercury__char__V_47_47 = (mercury__char__V_48_48 & mercury__char__V_50_50);
#line 960 "char.m"
                    mercury__char__B_66 = (mercury__char__V_46_46 | mercury__char__V_47_47);
#line 961 "char.m"
                    mercury__char__V_51_51 = (MR_Integer) 128;
#line 961 "char.m"
                    mercury__char__V_54_54 = (MR_Integer) 6;
#line 961 "char.m"
                    {
#line 961 "char.m"
                      mercury__char__V_53_53 = mercury__int__f_62_62_2_f_0(mercury__char__Int_5, mercury__char__V_54_54);
                    }
#line 961 "char.m"
                    mercury__char__V_55_55 = (MR_Integer) 63;
#line 961 "char.m"
                    mercury__char__V_52_52 = (mercury__char__V_53_53 & mercury__char__V_55_55);
#line 961 "char.m"
                    mercury__char__C_67 = (mercury__char__V_51_51 | mercury__char__V_52_52);
#line 962 "char.m"
                    mercury__char__V_56_56 = (MR_Integer) 128;
#line 962 "char.m"
                    mercury__char__V_58_58 = (MR_Integer) 63;
#line 962 "char.m"
                    mercury__char__V_57_57 = (mercury__char__Int_5 & mercury__char__V_58_58);
#line 962 "char.m"
                    mercury__char__D_9 = (mercury__char__V_56_56 | mercury__char__V_57_57);
#line 963 "char.m"
                    mercury__char__V_62_62 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 963 "char.m"
                    {
#line 963 "char.m"
                      mercury__char__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 963 "char.m"
                      MR_hl_field(MR_mktag(1), mercury__char__V_61_61, 0) = ((MR_Box) (mercury__char__D_9));
#line 963 "char.m"
                      MR_hl_field(MR_mktag(1), mercury__char__V_61_61, 1) = ((MR_Box) (mercury__char__V_62_62));
#line 963 "char.m"
                    }
#line 963 "char.m"
                    {
#line 963 "char.m"
                      mercury__char__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 963 "char.m"
                      MR_hl_field(MR_mktag(1), mercury__char__V_60_60, 0) = ((MR_Box) (mercury__char__C_67));
#line 963 "char.m"
                      MR_hl_field(MR_mktag(1), mercury__char__V_60_60, 1) = ((MR_Box) (mercury__char__V_61_61));
#line 963 "char.m"
                    }
#line 963 "char.m"
                    {
#line 963 "char.m"
                      mercury__char__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 963 "char.m"
                      MR_hl_field(MR_mktag(1), mercury__char__V_59_59, 0) = ((MR_Box) (mercury__char__B_66));
#line 963 "char.m"
                      MR_hl_field(MR_mktag(1), mercury__char__V_59_59, 1) = ((MR_Box) (mercury__char__V_60_60));
#line 963 "char.m"
                    }
#line 963 "char.m"
                    {
#line 963 "char.m"
                      MR_Word base;
#line 963 "char.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 963 "char.m"
                      *mercury__char__CodeUnits_4 = base;
#line 963 "char.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__char__A_65));
#line 963 "char.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__char__V_59_59));
#line 963 "char.m"
                    }
#line 963 "char.m"
                    mercury__char__succeeded = MR_TRUE;
#line 964 "char.m"
                  }
#line 964 "char.m"
              }
#line 958 "char.m"
          }
#line 952 "char.m"
      }
#line 944 "char.m"
    return mercury__char__succeeded;
#line 944 "char.m"
  }
#line 248 "char.m"
}

#line 243 "char.m"
MR_Word MR_CALL 
mercury__char__char_to_doc_1_f_0(
#line 243 "char.m"
  MR_Char mercury__char__C_3)
#line 243 "char.m"
{
#line 1000 "char.m"
  {
#line 1000 "char.m"
    MR_bool mercury__char__succeeded;
#line 1000 "char.m"
    MR_Word mercury__char__HeadVar__2_2;
#line 1000 "char.m"
    MR_String mercury__char__V_4_4;

#line 1000 "char.m"
    {
#line 1000 "char.m"
      mercury__char__V_4_4 = mercury__term_io__quoted_char_1_f_0(mercury__char__C_3);
    }
#line 1000 "char.m"
    {
#line 1000 "char.m"
      mercury__char__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1000 "char.m"
      MR_hl_field(MR_mktag(1), mercury__char__HeadVar__2_2, 0) = ((MR_Box) (mercury__char__V_4_4));
#line 1000 "char.m"
    }
#line 1000 "char.m"
    return mercury__char__HeadVar__2_2;
#line 1000 "char.m"
  }
#line 243 "char.m"
}

#line 239 "char.m"
MR_Integer MR_CALL 
mercury__char__det_base_digit_to_int_2_f_0(
#line 239 "char.m"
  MR_Integer mercury__char__Base_4,
#line 239 "char.m"
  MR_Char mercury__char__Digit_5)
#line 239 "char.m"
{
#line 638 "char.m"
  {
#line 638 "char.m"
    MR_bool mercury__char__succeeded;
#line 638 "char.m"
    MR_Integer mercury__char__Int_6;
#line 638 "char.m"
    MR_Integer mercury__char__Int0_7;

#line 636 "char.m"
    {
#line 636 "char.m"
      mercury__char__succeeded = mercury__char__base_digit_to_int_3_p_0(mercury__char__Base_4, mercury__char__Digit_5, &mercury__char__Int0_7);
    }
#line 638 "char.m"
    if (mercury__char__succeeded)
#line 637 "char.m"
      mercury__char__Int_6 = mercury__char__Int0_7;
#line 638 "char.m"
    else
#line 639 "char.m"
      {
#line 639 "char.m"
        {
#line 639 "char.m"
          mercury__require__error_1_p_0((MR_String) "char.base_digit_to_int failed");
        }
#line 639 "char.m"
      }
#line 638 "char.m"
    return mercury__char__Int_6;
#line 638 "char.m"
  }
#line 239 "char.m"
}

#line 235 "char.m"
MR_bool MR_CALL 
mercury__char__base_digit_to_int_3_p_0(
#line 235 "char.m"
  MR_Integer mercury__char__Base_4,
#line 235 "char.m"
  MR_Char mercury__char__Digit_5,
#line 235 "char.m"
  MR_Integer * mercury__char__Int_6)
#line 235 "char.m"
{
#line 631 "char.m"
  {
#line 631 "char.m"
    MR_bool mercury__char__succeeded = (mercury__char__Base_4 > (MR_Integer) 1);
#line 624 "char.m"
    MR_Integer mercury__char__V_9_9;

#line 624 "char.m"
    if (mercury__char__succeeded)
#line 624 "char.m"
      {
#line 624 "char.m"
        mercury__char__V_9_9 = (MR_Integer) 37;
#line 624 "char.m"
        mercury__char__succeeded = (mercury__char__Base_4 < mercury__char__V_9_9);
#line 624 "char.m"
      }
#line 631 "char.m"
    if (mercury__char__succeeded)
#line 629 "char.m"
      {
#line 627 "char.m"
        MR_Char mercury__char__Upper_7;

#line 625 "char.m"
        {
#line 625 "char.m"
          mercury__char__succeeded = mercury__char__lower_upper_2_p_0(mercury__char__Digit_5, &mercury__char__Upper_7);
        }
#line 627 "char.m"
        if (mercury__char__succeeded)
#line 626 "char.m"
          {
#line 626 "char.m"
            mercury__char__succeeded = mercury__char__int_to_extended_digit_2_p_1(mercury__char__Int_6, mercury__char__Upper_7);
          }
#line 627 "char.m"
        else
#line 628 "char.m"
          {
#line 628 "char.m"
            mercury__char__succeeded = mercury__char__int_to_extended_digit_2_p_1(mercury__char__Int_6, mercury__char__Digit_5);
          }
#line 629 "char.m"
        if (mercury__char__succeeded)
#line 630 "char.m"
          mercury__char__succeeded = (*mercury__char__Int_6 < mercury__char__Base_4);
#line 629 "char.m"
      }
#line 631 "char.m"
    else
#line 632 "char.m"
      {
#line 632 "char.m"
        {
#line 632 "char.m"
          mercury__require__error_1_p_0((MR_String) "char.base_digit_to_int: invalid base");
        }
#line 632 "char.m"
        mercury__char__succeeded = MR_TRUE;
#line 632 "char.m"
      }
#line 631 "char.m"
    return mercury__char__succeeded;
#line 631 "char.m"
  }
#line 235 "char.m"
}

#line 228 "char.m"
MR_Integer MR_CALL 
mercury__char__det_hex_digit_to_int_1_f_0(
#line 228 "char.m"
  MR_Char mercury__char__Digit_3)
#line 228 "char.m"
{
#line 619 "char.m"
  {
#line 619 "char.m"
    MR_bool mercury__char__succeeded;
#line 619 "char.m"
    MR_Integer mercury__char__Int_4;
#line 619 "char.m"
    MR_Integer mercury__char__Int0_5;

#line 617 "char.m"
    {
#line 617 "char.m"
      mercury__char__succeeded = mercury__char__hex_digit_to_int_2_p_0(mercury__char__Digit_3, &mercury__char__Int0_5);
    }
#line 619 "char.m"
    if (mercury__char__succeeded)
#line 618 "char.m"
      mercury__char__Int_4 = mercury__char__Int0_5;
#line 619 "char.m"
    else
#line 620 "char.m"
      {
#line 620 "char.m"
        {
#line 620 "char.m"
          mercury__require__error_1_p_0((MR_String) "char.hex_digit_to_int failed");
        }
#line 620 "char.m"
      }
#line 619 "char.m"
    return mercury__char__Int_4;
#line 619 "char.m"
  }
#line 228 "char.m"
}

#line 224 "char.m"
MR_bool MR_CALL 
mercury__char__hex_digit_to_int_2_p_0(
#line 224 "char.m"
  MR_Char mercury__char__HeadVar__1_1,
#line 224 "char.m"
  MR_Integer * mercury__char__HeadVar__2_2)
#line 224 "char.m"
{
#line 593 "char.m"
  {
#line 593 "char.m"
    MR_bool mercury__char__succeeded;

#line 593 "char.m"
    if ((mercury__char__HeadVar__1_1 == (MR_Char) 48))
#line 593 "char.m"
      {
#line 593 "char.m"
        *mercury__char__HeadVar__2_2 = (MR_Integer) 0;
#line 593 "char.m"
        mercury__char__succeeded = MR_TRUE;
#line 593 "char.m"
      }
#line 593 "char.m"
    else
#line 593 "char.m"
      if ((mercury__char__HeadVar__1_1 == (MR_Char) 49))
#line 594 "char.m"
        {
#line 594 "char.m"
          *mercury__char__HeadVar__2_2 = (MR_Integer) 1;
#line 594 "char.m"
          mercury__char__succeeded = MR_TRUE;
#line 594 "char.m"
        }
#line 593 "char.m"
      else
#line 593 "char.m"
        if ((mercury__char__HeadVar__1_1 == (MR_Char) 50))
#line 595 "char.m"
          {
#line 595 "char.m"
            *mercury__char__HeadVar__2_2 = (MR_Integer) 2;
#line 595 "char.m"
            mercury__char__succeeded = MR_TRUE;
#line 595 "char.m"
          }
#line 593 "char.m"
        else
#line 593 "char.m"
          if ((mercury__char__HeadVar__1_1 == (MR_Char) 51))
#line 596 "char.m"
            {
#line 596 "char.m"
              *mercury__char__HeadVar__2_2 = (MR_Integer) 3;
#line 596 "char.m"
              mercury__char__succeeded = MR_TRUE;
#line 596 "char.m"
            }
#line 593 "char.m"
          else
#line 593 "char.m"
            if ((mercury__char__HeadVar__1_1 == (MR_Char) 52))
#line 597 "char.m"
              {
#line 597 "char.m"
                *mercury__char__HeadVar__2_2 = (MR_Integer) 4;
#line 597 "char.m"
                mercury__char__succeeded = MR_TRUE;
#line 597 "char.m"
              }
#line 593 "char.m"
            else
#line 593 "char.m"
              if ((mercury__char__HeadVar__1_1 == (MR_Char) 53))
#line 598 "char.m"
                {
#line 598 "char.m"
                  *mercury__char__HeadVar__2_2 = (MR_Integer) 5;
#line 598 "char.m"
                  mercury__char__succeeded = MR_TRUE;
#line 598 "char.m"
                }
#line 593 "char.m"
              else
#line 593 "char.m"
                if ((mercury__char__HeadVar__1_1 == (MR_Char) 54))
#line 599 "char.m"
                  {
#line 599 "char.m"
                    *mercury__char__HeadVar__2_2 = (MR_Integer) 6;
#line 599 "char.m"
                    mercury__char__succeeded = MR_TRUE;
#line 599 "char.m"
                  }
#line 593 "char.m"
                else
#line 593 "char.m"
                  if ((mercury__char__HeadVar__1_1 == (MR_Char) 55))
#line 600 "char.m"
                    {
#line 600 "char.m"
                      *mercury__char__HeadVar__2_2 = (MR_Integer) 7;
#line 600 "char.m"
                      mercury__char__succeeded = MR_TRUE;
#line 600 "char.m"
                    }
#line 593 "char.m"
                  else
#line 593 "char.m"
                    if ((mercury__char__HeadVar__1_1 == (MR_Char) 56))
#line 601 "char.m"
                      {
#line 601 "char.m"
                        *mercury__char__HeadVar__2_2 = (MR_Integer) 8;
#line 601 "char.m"
                        mercury__char__succeeded = MR_TRUE;
#line 601 "char.m"
                      }
#line 593 "char.m"
                    else
#line 593 "char.m"
                      if ((mercury__char__HeadVar__1_1 == (MR_Char) 57))
#line 602 "char.m"
                        {
#line 602 "char.m"
                          *mercury__char__HeadVar__2_2 = (MR_Integer) 9;
#line 602 "char.m"
                          mercury__char__succeeded = MR_TRUE;
#line 602 "char.m"
                        }
#line 593 "char.m"
                      else
#line 593 "char.m"
                        if ((mercury__char__HeadVar__1_1 == (MR_Char) 65))
#line 609 "char.m"
                          {
#line 609 "char.m"
                            *mercury__char__HeadVar__2_2 = (MR_Integer) 10;
#line 609 "char.m"
                            mercury__char__succeeded = MR_TRUE;
#line 609 "char.m"
                          }
#line 593 "char.m"
                        else
#line 593 "char.m"
                          if ((mercury__char__HeadVar__1_1 == (MR_Char) 66))
#line 610 "char.m"
                            {
#line 610 "char.m"
                              *mercury__char__HeadVar__2_2 = (MR_Integer) 11;
#line 610 "char.m"
                              mercury__char__succeeded = MR_TRUE;
#line 610 "char.m"
                            }
#line 593 "char.m"
                          else
#line 593 "char.m"
                            if ((mercury__char__HeadVar__1_1 == (MR_Char) 67))
#line 611 "char.m"
                              {
#line 611 "char.m"
                                *mercury__char__HeadVar__2_2 = (MR_Integer) 12;
#line 611 "char.m"
                                mercury__char__succeeded = MR_TRUE;
#line 611 "char.m"
                              }
#line 593 "char.m"
                            else
#line 593 "char.m"
                              if ((mercury__char__HeadVar__1_1 == (MR_Char) 68))
#line 612 "char.m"
                                {
#line 612 "char.m"
                                  *mercury__char__HeadVar__2_2 = (MR_Integer) 13;
#line 612 "char.m"
                                  mercury__char__succeeded = MR_TRUE;
#line 612 "char.m"
                                }
#line 593 "char.m"
                              else
#line 593 "char.m"
                                if ((mercury__char__HeadVar__1_1 == (MR_Char) 69))
#line 613 "char.m"
                                  {
#line 613 "char.m"
                                    *mercury__char__HeadVar__2_2 = (MR_Integer) 14;
#line 613 "char.m"
                                    mercury__char__succeeded = MR_TRUE;
#line 613 "char.m"
                                  }
#line 593 "char.m"
                                else
#line 593 "char.m"
                                  if ((mercury__char__HeadVar__1_1 == (MR_Char) 70))
#line 614 "char.m"
                                    {
#line 614 "char.m"
                                      *mercury__char__HeadVar__2_2 = (MR_Integer) 15;
#line 614 "char.m"
                                      mercury__char__succeeded = MR_TRUE;
#line 614 "char.m"
                                    }
#line 593 "char.m"
                                  else
#line 593 "char.m"
                                    if ((mercury__char__HeadVar__1_1 == (MR_Char) 97))
#line 603 "char.m"
                                      {
#line 603 "char.m"
                                        *mercury__char__HeadVar__2_2 = (MR_Integer) 10;
#line 603 "char.m"
                                        mercury__char__succeeded = MR_TRUE;
#line 603 "char.m"
                                      }
#line 593 "char.m"
                                    else
#line 593 "char.m"
                                      if ((mercury__char__HeadVar__1_1 == (MR_Char) 98))
#line 604 "char.m"
                                        {
#line 604 "char.m"
                                          *mercury__char__HeadVar__2_2 = (MR_Integer) 11;
#line 604 "char.m"
                                          mercury__char__succeeded = MR_TRUE;
#line 604 "char.m"
                                        }
#line 593 "char.m"
                                      else
#line 593 "char.m"
                                        if ((mercury__char__HeadVar__1_1 == (MR_Char) 99))
#line 605 "char.m"
                                          {
#line 605 "char.m"
                                            *mercury__char__HeadVar__2_2 = (MR_Integer) 12;
#line 605 "char.m"
                                            mercury__char__succeeded = MR_TRUE;
#line 605 "char.m"
                                          }
#line 593 "char.m"
                                        else
#line 593 "char.m"
                                          if ((mercury__char__HeadVar__1_1 == (MR_Char) 100))
#line 606 "char.m"
                                            {
#line 606 "char.m"
                                              *mercury__char__HeadVar__2_2 = (MR_Integer) 13;
#line 606 "char.m"
                                              mercury__char__succeeded = MR_TRUE;
#line 606 "char.m"
                                            }
#line 593 "char.m"
                                          else
#line 593 "char.m"
                                            if ((mercury__char__HeadVar__1_1 == (MR_Char) 101))
#line 607 "char.m"
                                              {
#line 607 "char.m"
                                                *mercury__char__HeadVar__2_2 = (MR_Integer) 14;
#line 607 "char.m"
                                                mercury__char__succeeded = MR_TRUE;
#line 607 "char.m"
                                              }
#line 593 "char.m"
                                            else
#line 593 "char.m"
                                              if ((mercury__char__HeadVar__1_1 == (MR_Char) 102))
#line 608 "char.m"
                                                {
#line 608 "char.m"
                                                  *mercury__char__HeadVar__2_2 = (MR_Integer) 15;
#line 608 "char.m"
                                                  mercury__char__succeeded = MR_TRUE;
#line 608 "char.m"
                                                }
#line 593 "char.m"
                                              else
#line 593 "char.m"
                                                mercury__char__succeeded = MR_FALSE;
#line 593 "char.m"
    return mercury__char__succeeded;
#line 593 "char.m"
  }
#line 224 "char.m"
}

#line 218 "char.m"
MR_Integer MR_CALL 
mercury__char__det_decimal_digit_to_int_1_f_0(
#line 218 "char.m"
  MR_Char mercury__char__Digit_3)
#line 218 "char.m"
{
#line 586 "char.m"
  {
#line 586 "char.m"
    MR_bool mercury__char__succeeded;
#line 586 "char.m"
    MR_Integer mercury__char__Int_4;
#line 586 "char.m"
    MR_Integer mercury__char__Int0_5;

#line 584 "char.m"
    {
#line 584 "char.m"
      mercury__char__succeeded = mercury__char__decimal_digit_to_int_2_p_0(mercury__char__Digit_3, &mercury__char__Int0_5);
    }
#line 586 "char.m"
    if (mercury__char__succeeded)
#line 585 "char.m"
      mercury__char__Int_4 = mercury__char__Int0_5;
#line 586 "char.m"
    else
#line 587 "char.m"
      {
#line 587 "char.m"
        {
#line 587 "char.m"
          mercury__require__error_1_p_0((MR_String) "char.decimal_digit_to_int failed");
        }
#line 587 "char.m"
      }
#line 586 "char.m"
    return mercury__char__Int_4;
#line 586 "char.m"
  }
#line 218 "char.m"
}

#line 214 "char.m"
MR_bool MR_CALL 
mercury__char__decimal_digit_to_int_2_p_0(
#line 214 "char.m"
  MR_Char mercury__char__HeadVar__1_1,
#line 214 "char.m"
  MR_Integer * mercury__char__HeadVar__2_2)
#line 214 "char.m"
{
#line 572 "char.m"
  {
#line 572 "char.m"
    MR_bool mercury__char__succeeded;

#line 572 "char.m"
    if ((mercury__char__HeadVar__1_1 == (MR_Char) 48))
#line 572 "char.m"
      {
#line 572 "char.m"
        *mercury__char__HeadVar__2_2 = (MR_Integer) 0;
#line 572 "char.m"
        mercury__char__succeeded = MR_TRUE;
#line 572 "char.m"
      }
#line 572 "char.m"
    else
#line 572 "char.m"
      if ((mercury__char__HeadVar__1_1 == (MR_Char) 49))
#line 573 "char.m"
        {
#line 573 "char.m"
          *mercury__char__HeadVar__2_2 = (MR_Integer) 1;
#line 573 "char.m"
          mercury__char__succeeded = MR_TRUE;
#line 573 "char.m"
        }
#line 572 "char.m"
      else
#line 572 "char.m"
        if ((mercury__char__HeadVar__1_1 == (MR_Char) 50))
#line 574 "char.m"
          {
#line 574 "char.m"
            *mercury__char__HeadVar__2_2 = (MR_Integer) 2;
#line 574 "char.m"
            mercury__char__succeeded = MR_TRUE;
#line 574 "char.m"
          }
#line 572 "char.m"
        else
#line 572 "char.m"
          if ((mercury__char__HeadVar__1_1 == (MR_Char) 51))
#line 575 "char.m"
            {
#line 575 "char.m"
              *mercury__char__HeadVar__2_2 = (MR_Integer) 3;
#line 575 "char.m"
              mercury__char__succeeded = MR_TRUE;
#line 575 "char.m"
            }
#line 572 "char.m"
          else
#line 572 "char.m"
            if ((mercury__char__HeadVar__1_1 == (MR_Char) 52))
#line 576 "char.m"
              {
#line 576 "char.m"
                *mercury__char__HeadVar__2_2 = (MR_Integer) 4;
#line 576 "char.m"
                mercury__char__succeeded = MR_TRUE;
#line 576 "char.m"
              }
#line 572 "char.m"
            else
#line 572 "char.m"
              if ((mercury__char__HeadVar__1_1 == (MR_Char) 53))
#line 577 "char.m"
                {
#line 577 "char.m"
                  *mercury__char__HeadVar__2_2 = (MR_Integer) 5;
#line 577 "char.m"
                  mercury__char__succeeded = MR_TRUE;
#line 577 "char.m"
                }
#line 572 "char.m"
              else
#line 572 "char.m"
                if ((mercury__char__HeadVar__1_1 == (MR_Char) 54))
#line 578 "char.m"
                  {
#line 578 "char.m"
                    *mercury__char__HeadVar__2_2 = (MR_Integer) 6;
#line 578 "char.m"
                    mercury__char__succeeded = MR_TRUE;
#line 578 "char.m"
                  }
#line 572 "char.m"
                else
#line 572 "char.m"
                  if ((mercury__char__HeadVar__1_1 == (MR_Char) 55))
#line 579 "char.m"
                    {
#line 579 "char.m"
                      *mercury__char__HeadVar__2_2 = (MR_Integer) 7;
#line 579 "char.m"
                      mercury__char__succeeded = MR_TRUE;
#line 579 "char.m"
                    }
#line 572 "char.m"
                  else
#line 572 "char.m"
                    if ((mercury__char__HeadVar__1_1 == (MR_Char) 56))
#line 580 "char.m"
                      {
#line 580 "char.m"
                        *mercury__char__HeadVar__2_2 = (MR_Integer) 8;
#line 580 "char.m"
                        mercury__char__succeeded = MR_TRUE;
#line 580 "char.m"
                      }
#line 572 "char.m"
                    else
#line 572 "char.m"
                      if ((mercury__char__HeadVar__1_1 == (MR_Char) 57))
#line 581 "char.m"
                        {
#line 581 "char.m"
                          *mercury__char__HeadVar__2_2 = (MR_Integer) 9;
#line 581 "char.m"
                          mercury__char__succeeded = MR_TRUE;
#line 581 "char.m"
                        }
#line 572 "char.m"
                      else
#line 572 "char.m"
                        mercury__char__succeeded = MR_FALSE;
#line 572 "char.m"
    return mercury__char__succeeded;
#line 572 "char.m"
  }
#line 214 "char.m"
}

#line 209 "char.m"
MR_Integer MR_CALL 
mercury__char__det_octal_digit_to_int_1_f_0(
#line 209 "char.m"
  MR_Char mercury__char__Digit_3)
#line 209 "char.m"
{
#line 568 "char.m"
  {
#line 568 "char.m"
    MR_bool mercury__char__succeeded;
#line 568 "char.m"
    MR_Integer mercury__char__Int_4;
#line 568 "char.m"
    MR_Integer mercury__char__Int0_5;

#line 566 "char.m"
    {
#line 566 "char.m"
      mercury__char__succeeded = mercury__char__octal_digit_to_int_2_p_0(mercury__char__Digit_3, &mercury__char__Int0_5);
    }
#line 568 "char.m"
    if (mercury__char__succeeded)
#line 567 "char.m"
      mercury__char__Int_4 = mercury__char__Int0_5;
#line 568 "char.m"
    else
#line 569 "char.m"
      {
#line 569 "char.m"
        {
#line 569 "char.m"
          mercury__require__error_1_p_0((MR_String) "char.octal_digit_to_int failed");
        }
#line 569 "char.m"
      }
#line 568 "char.m"
    return mercury__char__Int_4;
#line 568 "char.m"
  }
#line 209 "char.m"
}

#line 205 "char.m"
MR_bool MR_CALL 
mercury__char__octal_digit_to_int_2_p_0(
#line 205 "char.m"
  MR_Char mercury__char__HeadVar__1_1,
#line 205 "char.m"
  MR_Integer * mercury__char__HeadVar__2_2)
#line 205 "char.m"
{
#line 556 "char.m"
  {
#line 556 "char.m"
    MR_bool mercury__char__succeeded;

#line 556 "char.m"
    if ((mercury__char__HeadVar__1_1 == (MR_Char) 48))
#line 556 "char.m"
      {
#line 556 "char.m"
        *mercury__char__HeadVar__2_2 = (MR_Integer) 0;
#line 556 "char.m"
        mercury__char__succeeded = MR_TRUE;
#line 556 "char.m"
      }
#line 556 "char.m"
    else
#line 556 "char.m"
      if ((mercury__char__HeadVar__1_1 == (MR_Char) 49))
#line 557 "char.m"
        {
#line 557 "char.m"
          *mercury__char__HeadVar__2_2 = (MR_Integer) 1;
#line 557 "char.m"
          mercury__char__succeeded = MR_TRUE;
#line 557 "char.m"
        }
#line 556 "char.m"
      else
#line 556 "char.m"
        if ((mercury__char__HeadVar__1_1 == (MR_Char) 50))
#line 558 "char.m"
          {
#line 558 "char.m"
            *mercury__char__HeadVar__2_2 = (MR_Integer) 2;
#line 558 "char.m"
            mercury__char__succeeded = MR_TRUE;
#line 558 "char.m"
          }
#line 556 "char.m"
        else
#line 556 "char.m"
          if ((mercury__char__HeadVar__1_1 == (MR_Char) 51))
#line 559 "char.m"
            {
#line 559 "char.m"
              *mercury__char__HeadVar__2_2 = (MR_Integer) 3;
#line 559 "char.m"
              mercury__char__succeeded = MR_TRUE;
#line 559 "char.m"
            }
#line 556 "char.m"
          else
#line 556 "char.m"
            if ((mercury__char__HeadVar__1_1 == (MR_Char) 52))
#line 560 "char.m"
              {
#line 560 "char.m"
                *mercury__char__HeadVar__2_2 = (MR_Integer) 4;
#line 560 "char.m"
                mercury__char__succeeded = MR_TRUE;
#line 560 "char.m"
              }
#line 556 "char.m"
            else
#line 556 "char.m"
              if ((mercury__char__HeadVar__1_1 == (MR_Char) 53))
#line 561 "char.m"
                {
#line 561 "char.m"
                  *mercury__char__HeadVar__2_2 = (MR_Integer) 5;
#line 561 "char.m"
                  mercury__char__succeeded = MR_TRUE;
#line 561 "char.m"
                }
#line 556 "char.m"
              else
#line 556 "char.m"
                if ((mercury__char__HeadVar__1_1 == (MR_Char) 54))
#line 562 "char.m"
                  {
#line 562 "char.m"
                    *mercury__char__HeadVar__2_2 = (MR_Integer) 6;
#line 562 "char.m"
                    mercury__char__succeeded = MR_TRUE;
#line 562 "char.m"
                  }
#line 556 "char.m"
                else
#line 556 "char.m"
                  if ((mercury__char__HeadVar__1_1 == (MR_Char) 55))
#line 563 "char.m"
                    {
#line 563 "char.m"
                      *mercury__char__HeadVar__2_2 = (MR_Integer) 7;
#line 563 "char.m"
                      mercury__char__succeeded = MR_TRUE;
#line 563 "char.m"
                    }
#line 556 "char.m"
                  else
#line 556 "char.m"
                    mercury__char__succeeded = MR_FALSE;
#line 556 "char.m"
    return mercury__char__succeeded;
#line 556 "char.m"
  }
#line 205 "char.m"
}

#line 200 "char.m"
MR_Integer MR_CALL 
mercury__char__det_binary_digit_to_int_1_f_0(
#line 200 "char.m"
  MR_Char mercury__char__Digit_3)
#line 200 "char.m"
{
#line 552 "char.m"
  {
#line 552 "char.m"
    MR_bool mercury__char__succeeded;
#line 552 "char.m"
    MR_Integer mercury__char__Int_4;
#line 552 "char.m"
    MR_Integer mercury__char__Int0_5;

#line 546 "char.m"
    if ((mercury__char__Digit_3 == (MR_Char) 48))
#line 546 "char.m"
      {
#line 546 "char.m"
        mercury__char__Int0_5 = (MR_Integer) 0;
#line 546 "char.m"
        mercury__char__succeeded = MR_TRUE;
#line 546 "char.m"
      }
#line 546 "char.m"
    else
#line 546 "char.m"
      if ((mercury__char__Digit_3 == (MR_Char) 49))
#line 547 "char.m"
        {
#line 547 "char.m"
          mercury__char__Int0_5 = (MR_Integer) 1;
#line 547 "char.m"
          mercury__char__succeeded = MR_TRUE;
#line 547 "char.m"
        }
#line 546 "char.m"
      else
#line 546 "char.m"
        mercury__char__succeeded = MR_FALSE;
#line 552 "char.m"
    if (mercury__char__succeeded)
#line 551 "char.m"
      mercury__char__Int_4 = mercury__char__Int0_5;
#line 552 "char.m"
    else
#line 553 "char.m"
      {
#line 553 "char.m"
        {
#line 553 "char.m"
          mercury__require__error_1_p_0((MR_String) "char.binary_digit_to_int failed");
        }
#line 553 "char.m"
      }
#line 552 "char.m"
    return mercury__char__Int_4;
#line 552 "char.m"
  }
#line 200 "char.m"
}

#line 196 "char.m"
MR_bool MR_CALL 
mercury__char__binary_digit_to_int_2_p_0(
#line 196 "char.m"
  MR_Char mercury__char__HeadVar__1_1,
#line 196 "char.m"
  MR_Integer * mercury__char__HeadVar__2_2)
#line 196 "char.m"
{
#line 546 "char.m"
  {
#line 546 "char.m"
    MR_bool mercury__char__succeeded;

#line 546 "char.m"
    if ((mercury__char__HeadVar__1_1 == (MR_Char) 48))
#line 546 "char.m"
      {
#line 546 "char.m"
        *mercury__char__HeadVar__2_2 = (MR_Integer) 0;
#line 546 "char.m"
        mercury__char__succeeded = MR_TRUE;
#line 546 "char.m"
      }
#line 546 "char.m"
    else
#line 546 "char.m"
      if ((mercury__char__HeadVar__1_1 == (MR_Char) 49))
#line 547 "char.m"
        {
#line 547 "char.m"
          *mercury__char__HeadVar__2_2 = (MR_Integer) 1;
#line 547 "char.m"
          mercury__char__succeeded = MR_TRUE;
#line 547 "char.m"
        }
#line 546 "char.m"
      else
#line 546 "char.m"
        mercury__char__succeeded = MR_FALSE;
#line 546 "char.m"
    return mercury__char__succeeded;
#line 546 "char.m"
  }
#line 196 "char.m"
}

#line 191 "char.m"
MR_Char MR_CALL 
mercury__char__det_base_int_to_digit_2_f_0(
#line 191 "char.m"
  MR_Integer mercury__char__Base_4,
#line 191 "char.m"
  MR_Integer mercury__char__Int_5)
#line 191 "char.m"
{
#line 701 "char.m"
  {
#line 701 "char.m"
    MR_bool mercury__char__succeeded;
#line 701 "char.m"
    MR_Char mercury__char__Digit_6;
#line 701 "char.m"
    MR_Char mercury__char__Digit0_7;

#line 699 "char.m"
    {
#line 699 "char.m"
      mercury__char__succeeded = mercury__char__base_int_to_digit_3_p_0(mercury__char__Base_4, mercury__char__Int_5, &mercury__char__Digit0_7);
    }
#line 701 "char.m"
    if (mercury__char__succeeded)
#line 700 "char.m"
      mercury__char__Digit_6 = mercury__char__Digit0_7;
#line 701 "char.m"
    else
#line 702 "char.m"
      {
#line 702 "char.m"
        {
#line 702 "char.m"
          mercury__require__error_1_p_0((MR_String) "char.base_int_to_digit failed");
        }
#line 702 "char.m"
      }
#line 701 "char.m"
    return mercury__char__Digit_6;
#line 701 "char.m"
  }
#line 191 "char.m"
}

#line 187 "char.m"
MR_bool MR_CALL 
mercury__char__base_int_to_digit_3_p_0(
#line 187 "char.m"
  MR_Integer mercury__char__Base_4,
#line 187 "char.m"
  MR_Integer mercury__char__Int_5,
#line 187 "char.m"
  MR_Char * mercury__char__Digit_6)
#line 187 "char.m"
{
#line 694 "char.m"
  {
#line 694 "char.m"
    MR_bool mercury__char__succeeded = (mercury__char__Base_4 > (MR_Integer) 1);
#line 691 "char.m"
    MR_Integer mercury__char__V_8_8;

#line 691 "char.m"
    if (mercury__char__succeeded)
#line 691 "char.m"
      {
#line 691 "char.m"
        mercury__char__V_8_8 = (MR_Integer) 37;
#line 691 "char.m"
        mercury__char__succeeded = (mercury__char__Base_4 < mercury__char__V_8_8);
#line 691 "char.m"
      }
#line 694 "char.m"
    if (mercury__char__succeeded)
#line 692 "char.m"
      {
#line 692 "char.m"
        mercury__char__succeeded = (mercury__char__Int_5 < mercury__char__Base_4);
#line 692 "char.m"
        if (mercury__char__succeeded)
#line 693 "char.m"
          {
#line 693 "char.m"
            return mercury__char__succeeded = mercury__char__int_to_extended_digit_2_p_0(mercury__char__Int_5, mercury__char__Digit_6);
          }
#line 692 "char.m"
      }
#line 694 "char.m"
    else
#line 695 "char.m"
      {
#line 695 "char.m"
        {
#line 695 "char.m"
          mercury__require__error_1_p_0((MR_String) "char.base_int_to_digit: invalid base");
        }
#line 695 "char.m"
        mercury__char__succeeded = MR_TRUE;
#line 695 "char.m"
      }
#line 694 "char.m"
    return mercury__char__succeeded;
#line 694 "char.m"
  }
#line 187 "char.m"
}

#line 180 "char.m"
MR_bool MR_CALL 
mercury__char__int_to_hex_digit_2_p_0(
#line 180 "char.m"
  MR_Integer mercury__char__HeadVar__1_1,
#line 180 "char.m"
  MR_Char * mercury__char__HeadVar__2_2)
#line 180 "char.m"
{
#line 670 "char.m"
  {
#line 670 "char.m"
    MR_bool mercury__char__succeeded;

#line 670 "char.m"
    if ((mercury__char__HeadVar__1_1 == (MR_Integer) 0))
#line 670 "char.m"
      {
#line 670 "char.m"
        *mercury__char__HeadVar__2_2 = (MR_Char) 48;
#line 670 "char.m"
        mercury__char__succeeded = MR_TRUE;
#line 670 "char.m"
      }
#line 670 "char.m"
    else
#line 670 "char.m"
      if ((mercury__char__HeadVar__1_1 == (MR_Integer) 1))
#line 671 "char.m"
        {
#line 671 "char.m"
          *mercury__char__HeadVar__2_2 = (MR_Char) 49;
#line 671 "char.m"
          mercury__char__succeeded = MR_TRUE;
#line 671 "char.m"
        }
#line 670 "char.m"
      else
#line 670 "char.m"
        if ((mercury__char__HeadVar__1_1 == (MR_Integer) 2))
#line 672 "char.m"
          {
#line 672 "char.m"
            *mercury__char__HeadVar__2_2 = (MR_Char) 50;
#line 672 "char.m"
            mercury__char__succeeded = MR_TRUE;
#line 672 "char.m"
          }
#line 670 "char.m"
        else
#line 670 "char.m"
          if ((mercury__char__HeadVar__1_1 == (MR_Integer) 3))
#line 673 "char.m"
            {
#line 673 "char.m"
              *mercury__char__HeadVar__2_2 = (MR_Char) 51;
#line 673 "char.m"
              mercury__char__succeeded = MR_TRUE;
#line 673 "char.m"
            }
#line 670 "char.m"
          else
#line 670 "char.m"
            if ((mercury__char__HeadVar__1_1 == (MR_Integer) 4))
#line 674 "char.m"
              {
#line 674 "char.m"
                *mercury__char__HeadVar__2_2 = (MR_Char) 52;
#line 674 "char.m"
                mercury__char__succeeded = MR_TRUE;
#line 674 "char.m"
              }
#line 670 "char.m"
            else
#line 670 "char.m"
              if ((mercury__char__HeadVar__1_1 == (MR_Integer) 5))
#line 675 "char.m"
                {
#line 675 "char.m"
                  *mercury__char__HeadVar__2_2 = (MR_Char) 53;
#line 675 "char.m"
                  mercury__char__succeeded = MR_TRUE;
#line 675 "char.m"
                }
#line 670 "char.m"
              else
#line 670 "char.m"
                if ((mercury__char__HeadVar__1_1 == (MR_Integer) 6))
#line 676 "char.m"
                  {
#line 676 "char.m"
                    *mercury__char__HeadVar__2_2 = (MR_Char) 54;
#line 676 "char.m"
                    mercury__char__succeeded = MR_TRUE;
#line 676 "char.m"
                  }
#line 670 "char.m"
                else
#line 670 "char.m"
                  if ((mercury__char__HeadVar__1_1 == (MR_Integer) 7))
#line 677 "char.m"
                    {
#line 677 "char.m"
                      *mercury__char__HeadVar__2_2 = (MR_Char) 55;
#line 677 "char.m"
                      mercury__char__succeeded = MR_TRUE;
#line 677 "char.m"
                    }
#line 670 "char.m"
                  else
#line 670 "char.m"
                    if ((mercury__char__HeadVar__1_1 == (MR_Integer) 8))
#line 678 "char.m"
                      {
#line 678 "char.m"
                        *mercury__char__HeadVar__2_2 = (MR_Char) 56;
#line 678 "char.m"
                        mercury__char__succeeded = MR_TRUE;
#line 678 "char.m"
                      }
#line 670 "char.m"
                    else
#line 670 "char.m"
                      if ((mercury__char__HeadVar__1_1 == (MR_Integer) 9))
#line 679 "char.m"
                        {
#line 679 "char.m"
                          *mercury__char__HeadVar__2_2 = (MR_Char) 57;
#line 679 "char.m"
                          mercury__char__succeeded = MR_TRUE;
#line 679 "char.m"
                        }
#line 670 "char.m"
                      else
#line 670 "char.m"
                        if ((mercury__char__HeadVar__1_1 == (MR_Integer) 10))
#line 680 "char.m"
                          {
#line 680 "char.m"
                            *mercury__char__HeadVar__2_2 = (MR_Char) 65;
#line 680 "char.m"
                            mercury__char__succeeded = MR_TRUE;
#line 680 "char.m"
                          }
#line 670 "char.m"
                        else
#line 670 "char.m"
                          if ((mercury__char__HeadVar__1_1 == (MR_Integer) 11))
#line 681 "char.m"
                            {
#line 681 "char.m"
                              *mercury__char__HeadVar__2_2 = (MR_Char) 66;
#line 681 "char.m"
                              mercury__char__succeeded = MR_TRUE;
#line 681 "char.m"
                            }
#line 670 "char.m"
                          else
#line 670 "char.m"
                            if ((mercury__char__HeadVar__1_1 == (MR_Integer) 12))
#line 682 "char.m"
                              {
#line 682 "char.m"
                                *mercury__char__HeadVar__2_2 = (MR_Char) 67;
#line 682 "char.m"
                                mercury__char__succeeded = MR_TRUE;
#line 682 "char.m"
                              }
#line 670 "char.m"
                            else
#line 670 "char.m"
                              if ((mercury__char__HeadVar__1_1 == (MR_Integer) 13))
#line 683 "char.m"
                                {
#line 683 "char.m"
                                  *mercury__char__HeadVar__2_2 = (MR_Char) 68;
#line 683 "char.m"
                                  mercury__char__succeeded = MR_TRUE;
#line 683 "char.m"
                                }
#line 670 "char.m"
                              else
#line 670 "char.m"
                                if ((mercury__char__HeadVar__1_1 == (MR_Integer) 14))
#line 684 "char.m"
                                  {
#line 684 "char.m"
                                    *mercury__char__HeadVar__2_2 = (MR_Char) 69;
#line 684 "char.m"
                                    mercury__char__succeeded = MR_TRUE;
#line 684 "char.m"
                                  }
#line 670 "char.m"
                                else
#line 670 "char.m"
                                  if ((mercury__char__HeadVar__1_1 == (MR_Integer) 15))
#line 685 "char.m"
                                    {
#line 685 "char.m"
                                      *mercury__char__HeadVar__2_2 = (MR_Char) 70;
#line 685 "char.m"
                                      mercury__char__succeeded = MR_TRUE;
#line 685 "char.m"
                                    }
#line 670 "char.m"
                                  else
#line 670 "char.m"
                                    mercury__char__succeeded = MR_FALSE;
#line 670 "char.m"
    return mercury__char__succeeded;
#line 670 "char.m"
  }
#line 180 "char.m"
}

#line 175 "char.m"
MR_bool MR_CALL 
mercury__char__int_to_decimal_digit_2_p_0(
#line 175 "char.m"
  MR_Integer mercury__char__HeadVar__1_1,
#line 175 "char.m"
  MR_Char * mercury__char__HeadVar__2_2)
#line 175 "char.m"
{
#line 659 "char.m"
  {
#line 659 "char.m"
    MR_bool mercury__char__succeeded;

#line 659 "char.m"
    if ((mercury__char__HeadVar__1_1 == (MR_Integer) 0))
#line 659 "char.m"
      {
#line 659 "char.m"
        *mercury__char__HeadVar__2_2 = (MR_Char) 48;
#line 659 "char.m"
        mercury__char__succeeded = MR_TRUE;
#line 659 "char.m"
      }
#line 659 "char.m"
    else
#line 659 "char.m"
      if ((mercury__char__HeadVar__1_1 == (MR_Integer) 1))
#line 660 "char.m"
        {
#line 660 "char.m"
          *mercury__char__HeadVar__2_2 = (MR_Char) 49;
#line 660 "char.m"
          mercury__char__succeeded = MR_TRUE;
#line 660 "char.m"
        }
#line 659 "char.m"
      else
#line 659 "char.m"
        if ((mercury__char__HeadVar__1_1 == (MR_Integer) 2))
#line 661 "char.m"
          {
#line 661 "char.m"
            *mercury__char__HeadVar__2_2 = (MR_Char) 50;
#line 661 "char.m"
            mercury__char__succeeded = MR_TRUE;
#line 661 "char.m"
          }
#line 659 "char.m"
        else
#line 659 "char.m"
          if ((mercury__char__HeadVar__1_1 == (MR_Integer) 3))
#line 662 "char.m"
            {
#line 662 "char.m"
              *mercury__char__HeadVar__2_2 = (MR_Char) 51;
#line 662 "char.m"
              mercury__char__succeeded = MR_TRUE;
#line 662 "char.m"
            }
#line 659 "char.m"
          else
#line 659 "char.m"
            if ((mercury__char__HeadVar__1_1 == (MR_Integer) 4))
#line 663 "char.m"
              {
#line 663 "char.m"
                *mercury__char__HeadVar__2_2 = (MR_Char) 52;
#line 663 "char.m"
                mercury__char__succeeded = MR_TRUE;
#line 663 "char.m"
              }
#line 659 "char.m"
            else
#line 659 "char.m"
              if ((mercury__char__HeadVar__1_1 == (MR_Integer) 5))
#line 664 "char.m"
                {
#line 664 "char.m"
                  *mercury__char__HeadVar__2_2 = (MR_Char) 53;
#line 664 "char.m"
                  mercury__char__succeeded = MR_TRUE;
#line 664 "char.m"
                }
#line 659 "char.m"
              else
#line 659 "char.m"
                if ((mercury__char__HeadVar__1_1 == (MR_Integer) 6))
#line 665 "char.m"
                  {
#line 665 "char.m"
                    *mercury__char__HeadVar__2_2 = (MR_Char) 54;
#line 665 "char.m"
                    mercury__char__succeeded = MR_TRUE;
#line 665 "char.m"
                  }
#line 659 "char.m"
                else
#line 659 "char.m"
                  if ((mercury__char__HeadVar__1_1 == (MR_Integer) 7))
#line 666 "char.m"
                    {
#line 666 "char.m"
                      *mercury__char__HeadVar__2_2 = (MR_Char) 55;
#line 666 "char.m"
                      mercury__char__succeeded = MR_TRUE;
#line 666 "char.m"
                    }
#line 659 "char.m"
                  else
#line 659 "char.m"
                    if ((mercury__char__HeadVar__1_1 == (MR_Integer) 8))
#line 667 "char.m"
                      {
#line 667 "char.m"
                        *mercury__char__HeadVar__2_2 = (MR_Char) 56;
#line 667 "char.m"
                        mercury__char__succeeded = MR_TRUE;
#line 667 "char.m"
                      }
#line 659 "char.m"
                    else
#line 659 "char.m"
                      if ((mercury__char__HeadVar__1_1 == (MR_Integer) 9))
#line 668 "char.m"
                        {
#line 668 "char.m"
                          *mercury__char__HeadVar__2_2 = (MR_Char) 57;
#line 668 "char.m"
                          mercury__char__succeeded = MR_TRUE;
#line 668 "char.m"
                        }
#line 659 "char.m"
                      else
#line 659 "char.m"
                        mercury__char__succeeded = MR_FALSE;
#line 659 "char.m"
    return mercury__char__succeeded;
#line 659 "char.m"
  }
#line 175 "char.m"
}

#line 171 "char.m"
MR_bool MR_CALL 
mercury__char__int_to_octal_digit_2_p_0(
#line 171 "char.m"
  MR_Integer mercury__char__HeadVar__1_1,
#line 171 "char.m"
  MR_Char * mercury__char__HeadVar__2_2)
#line 171 "char.m"
{
#line 650 "char.m"
  {
#line 650 "char.m"
    MR_bool mercury__char__succeeded;

#line 650 "char.m"
    if ((mercury__char__HeadVar__1_1 == (MR_Integer) 0))
#line 650 "char.m"
      {
#line 650 "char.m"
        *mercury__char__HeadVar__2_2 = (MR_Char) 48;
#line 650 "char.m"
        mercury__char__succeeded = MR_TRUE;
#line 650 "char.m"
      }
#line 650 "char.m"
    else
#line 650 "char.m"
      if ((mercury__char__HeadVar__1_1 == (MR_Integer) 1))
#line 651 "char.m"
        {
#line 651 "char.m"
          *mercury__char__HeadVar__2_2 = (MR_Char) 49;
#line 651 "char.m"
          mercury__char__succeeded = MR_TRUE;
#line 651 "char.m"
        }
#line 650 "char.m"
      else
#line 650 "char.m"
        if ((mercury__char__HeadVar__1_1 == (MR_Integer) 2))
#line 652 "char.m"
          {
#line 652 "char.m"
            *mercury__char__HeadVar__2_2 = (MR_Char) 50;
#line 652 "char.m"
            mercury__char__succeeded = MR_TRUE;
#line 652 "char.m"
          }
#line 650 "char.m"
        else
#line 650 "char.m"
          if ((mercury__char__HeadVar__1_1 == (MR_Integer) 3))
#line 653 "char.m"
            {
#line 653 "char.m"
              *mercury__char__HeadVar__2_2 = (MR_Char) 51;
#line 653 "char.m"
              mercury__char__succeeded = MR_TRUE;
#line 653 "char.m"
            }
#line 650 "char.m"
          else
#line 650 "char.m"
            if ((mercury__char__HeadVar__1_1 == (MR_Integer) 4))
#line 654 "char.m"
              {
#line 654 "char.m"
                *mercury__char__HeadVar__2_2 = (MR_Char) 52;
#line 654 "char.m"
                mercury__char__succeeded = MR_TRUE;
#line 654 "char.m"
              }
#line 650 "char.m"
            else
#line 650 "char.m"
              if ((mercury__char__HeadVar__1_1 == (MR_Integer) 5))
#line 655 "char.m"
                {
#line 655 "char.m"
                  *mercury__char__HeadVar__2_2 = (MR_Char) 53;
#line 655 "char.m"
                  mercury__char__succeeded = MR_TRUE;
#line 655 "char.m"
                }
#line 650 "char.m"
              else
#line 650 "char.m"
                if ((mercury__char__HeadVar__1_1 == (MR_Integer) 6))
#line 656 "char.m"
                  {
#line 656 "char.m"
                    *mercury__char__HeadVar__2_2 = (MR_Char) 54;
#line 656 "char.m"
                    mercury__char__succeeded = MR_TRUE;
#line 656 "char.m"
                  }
#line 650 "char.m"
                else
#line 650 "char.m"
                  if ((mercury__char__HeadVar__1_1 == (MR_Integer) 7))
#line 657 "char.m"
                    {
#line 657 "char.m"
                      *mercury__char__HeadVar__2_2 = (MR_Char) 55;
#line 657 "char.m"
                      mercury__char__succeeded = MR_TRUE;
#line 657 "char.m"
                    }
#line 650 "char.m"
                  else
#line 650 "char.m"
                    mercury__char__succeeded = MR_FALSE;
#line 650 "char.m"
    return mercury__char__succeeded;
#line 650 "char.m"
  }
#line 171 "char.m"
}

#line 167 "char.m"
MR_bool MR_CALL 
mercury__char__int_to_binary_digit_2_p_0(
#line 167 "char.m"
  MR_Integer mercury__char__HeadVar__1_1,
#line 167 "char.m"
  MR_Char * mercury__char__HeadVar__2_2)
#line 167 "char.m"
{
#line 647 "char.m"
  {
#line 647 "char.m"
    MR_bool mercury__char__succeeded;

#line 647 "char.m"
    if ((mercury__char__HeadVar__1_1 == (MR_Integer) 0))
#line 647 "char.m"
      {
#line 647 "char.m"
        *mercury__char__HeadVar__2_2 = (MR_Char) 48;
#line 647 "char.m"
        mercury__char__succeeded = MR_TRUE;
#line 647 "char.m"
      }
#line 647 "char.m"
    else
#line 647 "char.m"
      if ((mercury__char__HeadVar__1_1 == (MR_Integer) 1))
#line 648 "char.m"
        {
#line 648 "char.m"
          *mercury__char__HeadVar__2_2 = (MR_Char) 49;
#line 648 "char.m"
          mercury__char__succeeded = MR_TRUE;
#line 648 "char.m"
        }
#line 647 "char.m"
      else
#line 647 "char.m"
        mercury__char__succeeded = MR_FALSE;
#line 647 "char.m"
    return mercury__char__succeeded;
#line 647 "char.m"
  }
#line 167 "char.m"
}

#line 162 "char.m"
MR_bool MR_CALL 
mercury__char__is_base_digit_2_p_0(
#line 162 "char.m"
  MR_Integer mercury__char__Base_3,
#line 162 "char.m"
  MR_Char mercury__char__Digit_4)
#line 162 "char.m"
{
#line 537 "char.m"
  {
#line 537 "char.m"
    MR_bool mercury__char__succeeded = ((MR_Integer) 2 <= mercury__char__Base_3);
#line 535 "char.m"
    MR_Integer mercury__char__V_7_7;

#line 535 "char.m"
    if (mercury__char__succeeded)
#line 535 "char.m"
      {
#line 535 "char.m"
        mercury__char__V_7_7 = (MR_Integer) 36;
#line 535 "char.m"
        mercury__char__succeeded = (mercury__char__Base_3 <= mercury__char__V_7_7);
#line 535 "char.m"
      }
#line 537 "char.m"
    if (mercury__char__succeeded)
#line 536 "char.m"
      {
#line 536 "char.m"
        MR_Integer mercury__char___Int_5;

#line 536 "char.m"
        {
#line 536 "char.m"
          mercury__char__succeeded = mercury__char__base_digit_to_int_3_p_0(mercury__char__Base_3, mercury__char__Digit_4, &mercury__char___Int_5);
        }
#line 536 "char.m"
      }
#line 537 "char.m"
    else
#line 538 "char.m"
      {
#line 538 "char.m"
        {
#line 538 "char.m"
          mercury__require__error_1_p_0((MR_String) "char.is_base_digit: invalid base");
        }
#line 538 "char.m"
        mercury__char__succeeded = MR_TRUE;
#line 538 "char.m"
      }
#line 537 "char.m"
    return mercury__char__succeeded;
#line 537 "char.m"
  }
#line 162 "char.m"
}

#line 156 "char.m"
MR_bool MR_CALL 
mercury__char__is_hex_digit_1_p_0(
#line 156 "char.m"
  MR_Char mercury__char__HeadVar__1_1)
#line 156 "char.m"
{
#line 511 "char.m"
  {
#line 511 "char.m"
    MR_bool mercury__char__succeeded;

#line 511 "char.m"
    if ((mercury__char__HeadVar__1_1 == (MR_Char) 48))
#line 511 "char.m"
      mercury__char__succeeded = MR_TRUE;
#line 511 "char.m"
    else
#line 511 "char.m"
      if ((mercury__char__HeadVar__1_1 == (MR_Char) 49))
#line 512 "char.m"
        mercury__char__succeeded = MR_TRUE;
#line 511 "char.m"
      else
#line 511 "char.m"
        if ((mercury__char__HeadVar__1_1 == (MR_Char) 50))
#line 513 "char.m"
          mercury__char__succeeded = MR_TRUE;
#line 511 "char.m"
        else
#line 511 "char.m"
          if ((mercury__char__HeadVar__1_1 == (MR_Char) 51))
#line 514 "char.m"
            mercury__char__succeeded = MR_TRUE;
#line 511 "char.m"
          else
#line 511 "char.m"
            if ((mercury__char__HeadVar__1_1 == (MR_Char) 52))
#line 515 "char.m"
              mercury__char__succeeded = MR_TRUE;
#line 511 "char.m"
            else
#line 511 "char.m"
              if ((mercury__char__HeadVar__1_1 == (MR_Char) 53))
#line 516 "char.m"
                mercury__char__succeeded = MR_TRUE;
#line 511 "char.m"
              else
#line 511 "char.m"
                if ((mercury__char__HeadVar__1_1 == (MR_Char) 54))
#line 517 "char.m"
                  mercury__char__succeeded = MR_TRUE;
#line 511 "char.m"
                else
#line 511 "char.m"
                  if ((mercury__char__HeadVar__1_1 == (MR_Char) 55))
#line 518 "char.m"
                    mercury__char__succeeded = MR_TRUE;
#line 511 "char.m"
                  else
#line 511 "char.m"
                    if ((mercury__char__HeadVar__1_1 == (MR_Char) 56))
#line 519 "char.m"
                      mercury__char__succeeded = MR_TRUE;
#line 511 "char.m"
                    else
#line 511 "char.m"
                      if ((mercury__char__HeadVar__1_1 == (MR_Char) 57))
#line 520 "char.m"
                        mercury__char__succeeded = MR_TRUE;
#line 511 "char.m"
                      else
#line 511 "char.m"
                        if ((mercury__char__HeadVar__1_1 == (MR_Char) 65))
#line 527 "char.m"
                          mercury__char__succeeded = MR_TRUE;
#line 511 "char.m"
                        else
#line 511 "char.m"
                          if ((mercury__char__HeadVar__1_1 == (MR_Char) 66))
#line 528 "char.m"
                            mercury__char__succeeded = MR_TRUE;
#line 511 "char.m"
                          else
#line 511 "char.m"
                            if ((mercury__char__HeadVar__1_1 == (MR_Char) 67))
#line 529 "char.m"
                              mercury__char__succeeded = MR_TRUE;
#line 511 "char.m"
                            else
#line 511 "char.m"
                              if ((mercury__char__HeadVar__1_1 == (MR_Char) 68))
#line 530 "char.m"
                                mercury__char__succeeded = MR_TRUE;
#line 511 "char.m"
                              else
#line 511 "char.m"
                                if ((mercury__char__HeadVar__1_1 == (MR_Char) 69))
#line 531 "char.m"
                                  mercury__char__succeeded = MR_TRUE;
#line 511 "char.m"
                                else
#line 511 "char.m"
                                  if ((mercury__char__HeadVar__1_1 == (MR_Char) 70))
#line 532 "char.m"
                                    mercury__char__succeeded = MR_TRUE;
#line 511 "char.m"
                                  else
#line 511 "char.m"
                                    if ((mercury__char__HeadVar__1_1 == (MR_Char) 97))
#line 521 "char.m"
                                      mercury__char__succeeded = MR_TRUE;
#line 511 "char.m"
                                    else
#line 511 "char.m"
                                      if ((mercury__char__HeadVar__1_1 == (MR_Char) 98))
#line 522 "char.m"
                                        mercury__char__succeeded = MR_TRUE;
#line 511 "char.m"
                                      else
#line 511 "char.m"
                                        if ((mercury__char__HeadVar__1_1 == (MR_Char) 99))
#line 523 "char.m"
                                          mercury__char__succeeded = MR_TRUE;
#line 511 "char.m"
                                        else
#line 511 "char.m"
                                          if ((mercury__char__HeadVar__1_1 == (MR_Char) 100))
#line 524 "char.m"
                                            mercury__char__succeeded = MR_TRUE;
#line 511 "char.m"
                                          else
#line 511 "char.m"
                                            if ((mercury__char__HeadVar__1_1 == (MR_Char) 101))
#line 525 "char.m"
                                              mercury__char__succeeded = MR_TRUE;
#line 511 "char.m"
                                            else
#line 511 "char.m"
                                              if ((mercury__char__HeadVar__1_1 == (MR_Char) 102))
#line 526 "char.m"
                                                mercury__char__succeeded = MR_TRUE;
#line 511 "char.m"
                                              else
#line 511 "char.m"
                                                mercury__char__succeeded = MR_FALSE;
#line 511 "char.m"
    return mercury__char__succeeded;
#line 511 "char.m"
  }
#line 156 "char.m"
}

#line 151 "char.m"
MR_bool MR_CALL 
mercury__char__is_decimal_digit_1_p_0(
#line 151 "char.m"
  MR_Char mercury__char__HeadVar__1_1)
#line 151 "char.m"
{
#line 498 "char.m"
  {
#line 498 "char.m"
    MR_bool mercury__char__succeeded;

#line 498 "char.m"
    if ((mercury__char__HeadVar__1_1 == (MR_Char) 48))
#line 498 "char.m"
      mercury__char__succeeded = MR_TRUE;
#line 498 "char.m"
    else
#line 498 "char.m"
      if ((mercury__char__HeadVar__1_1 == (MR_Char) 49))
#line 499 "char.m"
        mercury__char__succeeded = MR_TRUE;
#line 498 "char.m"
      else
#line 498 "char.m"
        if ((mercury__char__HeadVar__1_1 == (MR_Char) 50))
#line 500 "char.m"
          mercury__char__succeeded = MR_TRUE;
#line 498 "char.m"
        else
#line 498 "char.m"
          if ((mercury__char__HeadVar__1_1 == (MR_Char) 51))
#line 501 "char.m"
            mercury__char__succeeded = MR_TRUE;
#line 498 "char.m"
          else
#line 498 "char.m"
            if ((mercury__char__HeadVar__1_1 == (MR_Char) 52))
#line 502 "char.m"
              mercury__char__succeeded = MR_TRUE;
#line 498 "char.m"
            else
#line 498 "char.m"
              if ((mercury__char__HeadVar__1_1 == (MR_Char) 53))
#line 503 "char.m"
                mercury__char__succeeded = MR_TRUE;
#line 498 "char.m"
              else
#line 498 "char.m"
                if ((mercury__char__HeadVar__1_1 == (MR_Char) 54))
#line 504 "char.m"
                  mercury__char__succeeded = MR_TRUE;
#line 498 "char.m"
                else
#line 498 "char.m"
                  if ((mercury__char__HeadVar__1_1 == (MR_Char) 55))
#line 505 "char.m"
                    mercury__char__succeeded = MR_TRUE;
#line 498 "char.m"
                  else
#line 498 "char.m"
                    if ((mercury__char__HeadVar__1_1 == (MR_Char) 56))
#line 506 "char.m"
                      mercury__char__succeeded = MR_TRUE;
#line 498 "char.m"
                    else
#line 498 "char.m"
                      if ((mercury__char__HeadVar__1_1 == (MR_Char) 57))
#line 507 "char.m"
                        mercury__char__succeeded = MR_TRUE;
#line 498 "char.m"
                      else
#line 498 "char.m"
                        mercury__char__succeeded = MR_FALSE;
#line 498 "char.m"
    return mercury__char__succeeded;
#line 498 "char.m"
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
#line 489 "char.m"
  {
#line 489 "char.m"
    MR_bool mercury__char__succeeded;

#line 489 "char.m"
    if ((mercury__char__HeadVar__1_1 == (MR_Char) 48))
#line 489 "char.m"
      mercury__char__succeeded = MR_TRUE;
#line 489 "char.m"
    else
#line 489 "char.m"
      if ((mercury__char__HeadVar__1_1 == (MR_Char) 49))
#line 490 "char.m"
        mercury__char__succeeded = MR_TRUE;
#line 489 "char.m"
      else
#line 489 "char.m"
        if ((mercury__char__HeadVar__1_1 == (MR_Char) 50))
#line 491 "char.m"
          mercury__char__succeeded = MR_TRUE;
#line 489 "char.m"
        else
#line 489 "char.m"
          if ((mercury__char__HeadVar__1_1 == (MR_Char) 51))
#line 492 "char.m"
            mercury__char__succeeded = MR_TRUE;
#line 489 "char.m"
          else
#line 489 "char.m"
            if ((mercury__char__HeadVar__1_1 == (MR_Char) 52))
#line 493 "char.m"
              mercury__char__succeeded = MR_TRUE;
#line 489 "char.m"
            else
#line 489 "char.m"
              if ((mercury__char__HeadVar__1_1 == (MR_Char) 53))
#line 494 "char.m"
                mercury__char__succeeded = MR_TRUE;
#line 489 "char.m"
              else
#line 489 "char.m"
                if ((mercury__char__HeadVar__1_1 == (MR_Char) 54))
#line 495 "char.m"
                  mercury__char__succeeded = MR_TRUE;
#line 489 "char.m"
                else
#line 489 "char.m"
                  if ((mercury__char__HeadVar__1_1 == (MR_Char) 55))
#line 496 "char.m"
                    mercury__char__succeeded = MR_TRUE;
#line 489 "char.m"
                  else
#line 489 "char.m"
                    mercury__char__succeeded = MR_FALSE;
#line 489 "char.m"
    return mercury__char__succeeded;
#line 489 "char.m"
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
#line 486 "char.m"
  {
#line 486 "char.m"
    MR_bool mercury__char__succeeded;

#line 486 "char.m"
    if ((mercury__char__HeadVar__1_1 == (MR_Char) 48))
#line 486 "char.m"
      mercury__char__succeeded = MR_TRUE;
#line 486 "char.m"
    else
#line 486 "char.m"
      if ((mercury__char__HeadVar__1_1 == (MR_Char) 49))
#line 487 "char.m"
        mercury__char__succeeded = MR_TRUE;
#line 486 "char.m"
      else
#line 486 "char.m"
        mercury__char__succeeded = MR_FALSE;
#line 486 "char.m"
    return mercury__char__succeeded;
#line 486 "char.m"
  }
#line 142 "char.m"
}

#line 138 "char.m"
MR_bool MR_CALL 
mercury__char__is_digit_1_p_0(
#line 138 "char.m"
  MR_Char mercury__char__D_2)
#line 138 "char.m"
{
#line 498 "char.m"
  {
#line 498 "char.m"
    MR_bool mercury__char__succeeded;

#line 498 "char.m"
    if ((mercury__char__D_2 == (MR_Char) 48))
#line 498 "char.m"
      mercury__char__succeeded = MR_TRUE;
#line 498 "char.m"
    else
#line 498 "char.m"
      if ((mercury__char__D_2 == (MR_Char) 49))
#line 499 "char.m"
        mercury__char__succeeded = MR_TRUE;
#line 498 "char.m"
      else
#line 498 "char.m"
        if ((mercury__char__D_2 == (MR_Char) 50))
#line 500 "char.m"
          mercury__char__succeeded = MR_TRUE;
#line 498 "char.m"
        else
#line 498 "char.m"
          if ((mercury__char__D_2 == (MR_Char) 51))
#line 501 "char.m"
            mercury__char__succeeded = MR_TRUE;
#line 498 "char.m"
          else
#line 498 "char.m"
            if ((mercury__char__D_2 == (MR_Char) 52))
#line 502 "char.m"
              mercury__char__succeeded = MR_TRUE;
#line 498 "char.m"
            else
#line 498 "char.m"
              if ((mercury__char__D_2 == (MR_Char) 53))
#line 503 "char.m"
                mercury__char__succeeded = MR_TRUE;
#line 498 "char.m"
              else
#line 498 "char.m"
                if ((mercury__char__D_2 == (MR_Char) 54))
#line 504 "char.m"
                  mercury__char__succeeded = MR_TRUE;
#line 498 "char.m"
                else
#line 498 "char.m"
                  if ((mercury__char__D_2 == (MR_Char) 55))
#line 505 "char.m"
                    mercury__char__succeeded = MR_TRUE;
#line 498 "char.m"
                  else
#line 498 "char.m"
                    if ((mercury__char__D_2 == (MR_Char) 56))
#line 506 "char.m"
                      mercury__char__succeeded = MR_TRUE;
#line 498 "char.m"
                    else
#line 498 "char.m"
                      if ((mercury__char__D_2 == (MR_Char) 57))
#line 507 "char.m"
                        mercury__char__succeeded = MR_TRUE;
#line 498 "char.m"
                      else
#line 498 "char.m"
                        mercury__char__succeeded = MR_FALSE;
#line 498 "char.m"
    return mercury__char__succeeded;
#line 498 "char.m"
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
#line 373 "char.m"
  {
#line 373 "char.m"
    MR_bool mercury__char__succeeded;

#line 373 "char.m"
    if ((mercury__char__Char_2 == (MR_Char) 48))
#line 373 "char.m"
      mercury__char__succeeded = MR_TRUE;
#line 373 "char.m"
    else
#line 373 "char.m"
      if ((mercury__char__Char_2 == (MR_Char) 49))
#line 374 "char.m"
        mercury__char__succeeded = MR_TRUE;
#line 373 "char.m"
      else
#line 373 "char.m"
        if ((mercury__char__Char_2 == (MR_Char) 50))
#line 375 "char.m"
          mercury__char__succeeded = MR_TRUE;
#line 373 "char.m"
        else
#line 373 "char.m"
          if ((mercury__char__Char_2 == (MR_Char) 51))
#line 376 "char.m"
            mercury__char__succeeded = MR_TRUE;
#line 373 "char.m"
          else
#line 373 "char.m"
            if ((mercury__char__Char_2 == (MR_Char) 52))
#line 377 "char.m"
              mercury__char__succeeded = MR_TRUE;
#line 373 "char.m"
            else
#line 373 "char.m"
              if ((mercury__char__Char_2 == (MR_Char) 53))
#line 378 "char.m"
                mercury__char__succeeded = MR_TRUE;
#line 373 "char.m"
              else
#line 373 "char.m"
                if ((mercury__char__Char_2 == (MR_Char) 54))
#line 379 "char.m"
                  mercury__char__succeeded = MR_TRUE;
#line 373 "char.m"
                else
#line 373 "char.m"
                  if ((mercury__char__Char_2 == (MR_Char) 55))
#line 380 "char.m"
                    mercury__char__succeeded = MR_TRUE;
#line 373 "char.m"
                  else
#line 373 "char.m"
                    if ((mercury__char__Char_2 == (MR_Char) 56))
#line 381 "char.m"
                      mercury__char__succeeded = MR_TRUE;
#line 373 "char.m"
                    else
#line 373 "char.m"
                      if ((mercury__char__Char_2 == (MR_Char) 57))
#line 382 "char.m"
                        mercury__char__succeeded = MR_TRUE;
#line 373 "char.m"
                      else
#line 373 "char.m"
                        if ((mercury__char__Char_2 == (MR_Char) 65))
#line 409 "char.m"
                          mercury__char__succeeded = MR_TRUE;
#line 373 "char.m"
                        else
#line 373 "char.m"
                          if ((mercury__char__Char_2 == (MR_Char) 66))
#line 410 "char.m"
                            mercury__char__succeeded = MR_TRUE;
#line 373 "char.m"
                          else
#line 373 "char.m"
                            if ((mercury__char__Char_2 == (MR_Char) 67))
#line 411 "char.m"
                              mercury__char__succeeded = MR_TRUE;
#line 373 "char.m"
                            else
#line 373 "char.m"
                              if ((mercury__char__Char_2 == (MR_Char) 68))
#line 412 "char.m"
                                mercury__char__succeeded = MR_TRUE;
#line 373 "char.m"
                              else
#line 373 "char.m"
                                if ((mercury__char__Char_2 == (MR_Char) 69))
#line 413 "char.m"
                                  mercury__char__succeeded = MR_TRUE;
#line 373 "char.m"
                                else
#line 373 "char.m"
                                  if ((mercury__char__Char_2 == (MR_Char) 70))
#line 414 "char.m"
                                    mercury__char__succeeded = MR_TRUE;
#line 373 "char.m"
                                  else
#line 373 "char.m"
                                    if ((mercury__char__Char_2 == (MR_Char) 71))
#line 415 "char.m"
                                      mercury__char__succeeded = MR_TRUE;
#line 373 "char.m"
                                    else
#line 373 "char.m"
                                      if ((mercury__char__Char_2 == (MR_Char) 72))
#line 416 "char.m"
                                        mercury__char__succeeded = MR_TRUE;
#line 373 "char.m"
                                      else
#line 373 "char.m"
                                        if ((mercury__char__Char_2 == (MR_Char) 73))
#line 417 "char.m"
                                          mercury__char__succeeded = MR_TRUE;
#line 373 "char.m"
                                        else
#line 373 "char.m"
                                          if ((mercury__char__Char_2 == (MR_Char) 74))
#line 418 "char.m"
                                            mercury__char__succeeded = MR_TRUE;
#line 373 "char.m"
                                          else
#line 373 "char.m"
                                            if ((mercury__char__Char_2 == (MR_Char) 75))
#line 419 "char.m"
                                              mercury__char__succeeded = MR_TRUE;
#line 373 "char.m"
                                            else
#line 373 "char.m"
                                              if ((mercury__char__Char_2 == (MR_Char) 76))
#line 420 "char.m"
                                                mercury__char__succeeded = MR_TRUE;
#line 373 "char.m"
                                              else
#line 373 "char.m"
                                                if ((mercury__char__Char_2 == (MR_Char) 77))
#line 421 "char.m"
                                                  mercury__char__succeeded = MR_TRUE;
#line 373 "char.m"
                                                else
#line 373 "char.m"
                                                  if ((mercury__char__Char_2 == (MR_Char) 78))
#line 422 "char.m"
                                                    mercury__char__succeeded = MR_TRUE;
#line 373 "char.m"
                                                  else
#line 373 "char.m"
                                                    if ((mercury__char__Char_2 == (MR_Char) 79))
#line 423 "char.m"
                                                      mercury__char__succeeded = MR_TRUE;
#line 373 "char.m"
                                                    else
#line 373 "char.m"
                                                      if ((mercury__char__Char_2 == (MR_Char) 80))
#line 424 "char.m"
                                                        mercury__char__succeeded = MR_TRUE;
#line 373 "char.m"
                                                      else
#line 373 "char.m"
                                                        if ((mercury__char__Char_2 == (MR_Char) 81))
#line 425 "char.m"
                                                          mercury__char__succeeded = MR_TRUE;
#line 373 "char.m"
                                                        else
#line 373 "char.m"
                                                          if ((mercury__char__Char_2 == (MR_Char) 82))
#line 426 "char.m"
                                                            mercury__char__succeeded = MR_TRUE;
#line 373 "char.m"
                                                          else
#line 373 "char.m"
                                                            if ((mercury__char__Char_2 == (MR_Char) 83))
#line 427 "char.m"
                                                              mercury__char__succeeded = MR_TRUE;
#line 373 "char.m"
                                                            else
#line 373 "char.m"
                                                              if ((mercury__char__Char_2 == (MR_Char) 84))
#line 428 "char.m"
                                                                mercury__char__succeeded = MR_TRUE;
#line 373 "char.m"
                                                              else
#line 373 "char.m"
                                                                if ((mercury__char__Char_2 == (MR_Char) 85))
#line 429 "char.m"
                                                                  mercury__char__succeeded = MR_TRUE;
#line 373 "char.m"
                                                                else
#line 373 "char.m"
                                                                  if ((mercury__char__Char_2 == (MR_Char) 86))
#line 430 "char.m"
                                                                    mercury__char__succeeded = MR_TRUE;
#line 373 "char.m"
                                                                  else
#line 373 "char.m"
                                                                    if ((mercury__char__Char_2 == (MR_Char) 87))
#line 431 "char.m"
                                                                      mercury__char__succeeded = MR_TRUE;
#line 373 "char.m"
                                                                    else
#line 373 "char.m"
                                                                      if ((mercury__char__Char_2 == (MR_Char) 88))
#line 432 "char.m"
                                                                        mercury__char__succeeded = MR_TRUE;
#line 373 "char.m"
                                                                      else
#line 373 "char.m"
                                                                        if ((mercury__char__Char_2 == (MR_Char) 89))
#line 433 "char.m"
                                                                          mercury__char__succeeded = MR_TRUE;
#line 373 "char.m"
                                                                        else
#line 373 "char.m"
                                                                          if ((mercury__char__Char_2 == (MR_Char) 90))
#line 434 "char.m"
                                                                            mercury__char__succeeded = MR_TRUE;
#line 373 "char.m"
                                                                          else
#line 373 "char.m"
                                                                            if ((mercury__char__Char_2 == (MR_Char) 95))
#line 435 "char.m"
                                                                              mercury__char__succeeded = MR_TRUE;
#line 373 "char.m"
                                                                            else
#line 373 "char.m"
                                                                              if ((mercury__char__Char_2 == (MR_Char) 97))
#line 383 "char.m"
                                                                                mercury__char__succeeded = MR_TRUE;
#line 373 "char.m"
                                                                              else
#line 373 "char.m"
                                                                                if ((mercury__char__Char_2 == (MR_Char) 98))
#line 384 "char.m"
                                                                                  mercury__char__succeeded = MR_TRUE;
#line 373 "char.m"
                                                                                else
#line 373 "char.m"
                                                                                  if ((mercury__char__Char_2 == (MR_Char) 99))
#line 385 "char.m"
                                                                                    mercury__char__succeeded = MR_TRUE;
#line 373 "char.m"
                                                                                  else
#line 373 "char.m"
                                                                                    if ((mercury__char__Char_2 == (MR_Char) 100))
#line 386 "char.m"
                                                                                      mercury__char__succeeded = MR_TRUE;
#line 373 "char.m"
                                                                                    else
#line 373 "char.m"
                                                                                      if ((mercury__char__Char_2 == (MR_Char) 101))
#line 387 "char.m"
                                                                                        mercury__char__succeeded = MR_TRUE;
#line 373 "char.m"
                                                                                      else
#line 373 "char.m"
                                                                                        if ((mercury__char__Char_2 == (MR_Char) 102))
#line 388 "char.m"
                                                                                          mercury__char__succeeded = MR_TRUE;
#line 373 "char.m"
                                                                                        else
#line 373 "char.m"
                                                                                          if ((mercury__char__Char_2 == (MR_Char) 103))
#line 389 "char.m"
                                                                                            mercury__char__succeeded = MR_TRUE;
#line 373 "char.m"
                                                                                          else
#line 373 "char.m"
                                                                                            if ((mercury__char__Char_2 == (MR_Char) 104))
#line 390 "char.m"
                                                                                              mercury__char__succeeded = MR_TRUE;
#line 373 "char.m"
                                                                                            else
#line 373 "char.m"
                                                                                              if ((mercury__char__Char_2 == (MR_Char) 105))
#line 391 "char.m"
                                                                                                mercury__char__succeeded = MR_TRUE;
#line 373 "char.m"
                                                                                              else
#line 373 "char.m"
                                                                                                if ((mercury__char__Char_2 == (MR_Char) 106))
#line 392 "char.m"
                                                                                                  mercury__char__succeeded = MR_TRUE;
#line 373 "char.m"
                                                                                                else
#line 373 "char.m"
                                                                                                  if ((mercury__char__Char_2 == (MR_Char) 107))
#line 393 "char.m"
                                                                                                    mercury__char__succeeded = MR_TRUE;
#line 373 "char.m"
                                                                                                  else
#line 373 "char.m"
                                                                                                    if ((mercury__char__Char_2 == (MR_Char) 108))
#line 394 "char.m"
                                                                                                      mercury__char__succeeded = MR_TRUE;
#line 373 "char.m"
                                                                                                    else
#line 373 "char.m"
                                                                                                      if ((mercury__char__Char_2 == (MR_Char) 109))
#line 395 "char.m"
                                                                                                        mercury__char__succeeded = MR_TRUE;
#line 373 "char.m"
                                                                                                      else
#line 373 "char.m"
                                                                                                        if ((mercury__char__Char_2 == (MR_Char) 110))
#line 396 "char.m"
                                                                                                          mercury__char__succeeded = MR_TRUE;
#line 373 "char.m"
                                                                                                        else
#line 373 "char.m"
                                                                                                          if ((mercury__char__Char_2 == (MR_Char) 111))
#line 397 "char.m"
                                                                                                            mercury__char__succeeded = MR_TRUE;
#line 373 "char.m"
                                                                                                          else
#line 373 "char.m"
                                                                                                            if ((mercury__char__Char_2 == (MR_Char) 112))
#line 398 "char.m"
                                                                                                              mercury__char__succeeded = MR_TRUE;
#line 373 "char.m"
                                                                                                            else
#line 373 "char.m"
                                                                                                              if ((mercury__char__Char_2 == (MR_Char) 113))
#line 399 "char.m"
                                                                                                                mercury__char__succeeded = MR_TRUE;
#line 373 "char.m"
                                                                                                              else
#line 373 "char.m"
                                                                                                                if ((mercury__char__Char_2 == (MR_Char) 114))
#line 400 "char.m"
                                                                                                                  mercury__char__succeeded = MR_TRUE;
#line 373 "char.m"
                                                                                                                else
#line 373 "char.m"
                                                                                                                  if ((mercury__char__Char_2 == (MR_Char) 115))
#line 401 "char.m"
                                                                                                                    mercury__char__succeeded = MR_TRUE;
#line 373 "char.m"
                                                                                                                  else
#line 373 "char.m"
                                                                                                                    if ((mercury__char__Char_2 == (MR_Char) 116))
#line 402 "char.m"
                                                                                                                      mercury__char__succeeded = MR_TRUE;
#line 373 "char.m"
                                                                                                                    else
#line 373 "char.m"
                                                                                                                      if ((mercury__char__Char_2 == (MR_Char) 117))
#line 403 "char.m"
                                                                                                                        mercury__char__succeeded = MR_TRUE;
#line 373 "char.m"
                                                                                                                      else
#line 373 "char.m"
                                                                                                                        if ((mercury__char__Char_2 == (MR_Char) 118))
#line 404 "char.m"
                                                                                                                          mercury__char__succeeded = MR_TRUE;
#line 373 "char.m"
                                                                                                                        else
#line 373 "char.m"
                                                                                                                          if ((mercury__char__Char_2 == (MR_Char) 119))
#line 405 "char.m"
                                                                                                                            mercury__char__succeeded = MR_TRUE;
#line 373 "char.m"
                                                                                                                          else
#line 373 "char.m"
                                                                                                                            if ((mercury__char__Char_2 == (MR_Char) 120))
#line 406 "char.m"
                                                                                                                              mercury__char__succeeded = MR_TRUE;
#line 373 "char.m"
                                                                                                                            else
#line 373 "char.m"
                                                                                                                              if ((mercury__char__Char_2 == (MR_Char) 121))
#line 407 "char.m"
                                                                                                                                mercury__char__succeeded = MR_TRUE;
#line 373 "char.m"
                                                                                                                              else
#line 373 "char.m"
                                                                                                                                if ((mercury__char__Char_2 == (MR_Char) 122))
#line 408 "char.m"
                                                                                                                                  mercury__char__succeeded = MR_TRUE;
#line 373 "char.m"
                                                                                                                                else
#line 373 "char.m"
                                                                                                                                  mercury__char__succeeded = MR_FALSE;
#line 373 "char.m"
    return mercury__char__succeeded;
#line 373 "char.m"
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
#line 365 "char.m"
  {
#line 365 "char.m"
    MR_bool mercury__char__succeeded = (mercury__char__Char_2 == (MR_Char) 95);

#line 365 "char.m"
    if (mercury__char__succeeded)
#line 364 "char.m"
      mercury__char__succeeded = MR_TRUE;
#line 365 "char.m"
    else
#line 347 "char.m"
      {
#line 445 "char.m"
        MR_Char mercury__char__V_5_5;

#line 445 "char.m"
        {
#line 445 "char.m"
          mercury__char__succeeded = mercury__char__lower_upper_2_p_0(mercury__char__Char_2, &mercury__char__V_5_5);
        }
#line 347 "char.m"
        if (mercury__char__succeeded)
#line 346 "char.m"
          mercury__char__succeeded = MR_TRUE;
#line 347 "char.m"
        else
#line 448 "char.m"
          {
#line 448 "char.m"
            MR_Char mercury__char__V_7_7;

#line 448 "char.m"
            {
#line 448 "char.m"
              mercury__char__succeeded = mercury__char__lower_upper_2_p_1(&mercury__char__V_7_7, mercury__char__Char_2);
            }
#line 448 "char.m"
          }
#line 347 "char.m"
      }
#line 365 "char.m"
    return mercury__char__succeeded;
#line 365 "char.m"
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
#line 356 "char.m"
  {
#line 356 "char.m"
    MR_bool mercury__char__succeeded;
#line 445 "char.m"
    MR_Char mercury__char__V_5_5;

#line 445 "char.m"
    {
#line 445 "char.m"
      mercury__char__succeeded = mercury__char__lower_upper_2_p_0(mercury__char__Char_2, &mercury__char__V_5_5);
    }
#line 347 "char.m"
    if (mercury__char__succeeded)
#line 346 "char.m"
      mercury__char__succeeded = MR_TRUE;
#line 347 "char.m"
    else
#line 448 "char.m"
      {
#line 448 "char.m"
        MR_Char mercury__char__V_7_7;

#line 448 "char.m"
        {
#line 448 "char.m"
          mercury__char__succeeded = mercury__char__lower_upper_2_p_1(&mercury__char__V_7_7, mercury__char__Char_2);
        }
#line 448 "char.m"
      }
#line 356 "char.m"
    if (mercury__char__succeeded)
#line 355 "char.m"
      mercury__char__succeeded = MR_TRUE;
#line 356 "char.m"
    else
#line 498 "char.m"
      if ((mercury__char__Char_2 == (MR_Char) 48))
#line 498 "char.m"
        mercury__char__succeeded = MR_TRUE;
#line 498 "char.m"
      else
#line 498 "char.m"
        if ((mercury__char__Char_2 == (MR_Char) 49))
#line 499 "char.m"
          mercury__char__succeeded = MR_TRUE;
#line 498 "char.m"
        else
#line 498 "char.m"
          if ((mercury__char__Char_2 == (MR_Char) 50))
#line 500 "char.m"
            mercury__char__succeeded = MR_TRUE;
#line 498 "char.m"
          else
#line 498 "char.m"
            if ((mercury__char__Char_2 == (MR_Char) 51))
#line 501 "char.m"
              mercury__char__succeeded = MR_TRUE;
#line 498 "char.m"
            else
#line 498 "char.m"
              if ((mercury__char__Char_2 == (MR_Char) 52))
#line 502 "char.m"
                mercury__char__succeeded = MR_TRUE;
#line 498 "char.m"
              else
#line 498 "char.m"
                if ((mercury__char__Char_2 == (MR_Char) 53))
#line 503 "char.m"
                  mercury__char__succeeded = MR_TRUE;
#line 498 "char.m"
                else
#line 498 "char.m"
                  if ((mercury__char__Char_2 == (MR_Char) 54))
#line 504 "char.m"
                    mercury__char__succeeded = MR_TRUE;
#line 498 "char.m"
                  else
#line 498 "char.m"
                    if ((mercury__char__Char_2 == (MR_Char) 55))
#line 505 "char.m"
                      mercury__char__succeeded = MR_TRUE;
#line 498 "char.m"
                    else
#line 498 "char.m"
                      if ((mercury__char__Char_2 == (MR_Char) 56))
#line 506 "char.m"
                        mercury__char__succeeded = MR_TRUE;
#line 498 "char.m"
                      else
#line 498 "char.m"
                        if ((mercury__char__Char_2 == (MR_Char) 57))
#line 507 "char.m"
                          mercury__char__succeeded = MR_TRUE;
#line 498 "char.m"
                        else
#line 498 "char.m"
                          mercury__char__succeeded = MR_FALSE;
#line 356 "char.m"
    return mercury__char__succeeded;
#line 356 "char.m"
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
#line 347 "char.m"
  {
#line 347 "char.m"
    MR_bool mercury__char__succeeded;
#line 445 "char.m"
    MR_Char mercury__char__V_4_4;

#line 445 "char.m"
    {
#line 445 "char.m"
      mercury__char__succeeded = mercury__char__lower_upper_2_p_0(mercury__char__Char_2, &mercury__char__V_4_4);
    }
#line 347 "char.m"
    if (mercury__char__succeeded)
#line 346 "char.m"
      mercury__char__succeeded = MR_TRUE;
#line 347 "char.m"
    else
#line 448 "char.m"
      {
#line 448 "char.m"
        MR_Char mercury__char__V_6_6;

#line 448 "char.m"
        {
#line 448 "char.m"
          mercury__char__succeeded = mercury__char__lower_upper_2_p_1(&mercury__char__V_6_6, mercury__char__Char_2);
        }
#line 448 "char.m"
      }
#line 347 "char.m"
    return mercury__char__succeeded;
#line 347 "char.m"
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
#line 445 "char.m"
  {
#line 445 "char.m"
    MR_bool mercury__char__succeeded;
#line 445 "char.m"
    MR_Char mercury__char__V_3_3;

#line 445 "char.m"
    {
#line 445 "char.m"
      mercury__char__succeeded = mercury__char__lower_upper_2_p_0(mercury__char__Lower_2, &mercury__char__V_3_3);
    }
#line 445 "char.m"
    return mercury__char__succeeded;
#line 445 "char.m"
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
#line 448 "char.m"
  {
#line 448 "char.m"
    MR_bool mercury__char__succeeded;
#line 448 "char.m"
    MR_Char mercury__char__V_3_3;

#line 448 "char.m"
    {
#line 448 "char.m"
      mercury__char__succeeded = mercury__char__lower_upper_2_p_1(&mercury__char__V_3_3, mercury__char__Upper_2);
    }
#line 448 "char.m"
    return mercury__char__succeeded;
#line 448 "char.m"
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
#line 337 "char.m"
  {
#line 337 "char.m"
    MR_bool mercury__char__succeeded;

#line 337 "char.m"
    if ((mercury__char__HeadVar__1_1 == (MR_Char) 9))
#line 338 "char.m"
      mercury__char__succeeded = MR_TRUE;
#line 337 "char.m"
    else
#line 337 "char.m"
      if ((mercury__char__HeadVar__1_1 == (MR_Char) 10))
#line 339 "char.m"
        mercury__char__succeeded = MR_TRUE;
#line 337 "char.m"
      else
#line 337 "char.m"
        if ((mercury__char__HeadVar__1_1 == (MR_Char) 11))
#line 342 "char.m"
          mercury__char__succeeded = MR_TRUE;
#line 337 "char.m"
        else
#line 337 "char.m"
          if ((mercury__char__HeadVar__1_1 == (MR_Char) 12))
#line 341 "char.m"
            mercury__char__succeeded = MR_TRUE;
#line 337 "char.m"
          else
#line 337 "char.m"
            if ((mercury__char__HeadVar__1_1 == (MR_Char) 13))
#line 340 "char.m"
              mercury__char__succeeded = MR_TRUE;
#line 337 "char.m"
            else
#line 337 "char.m"
              if ((mercury__char__HeadVar__1_1 == (MR_Char) 32))
#line 337 "char.m"
                mercury__char__succeeded = MR_TRUE;
#line 337 "char.m"
              else
#line 337 "char.m"
                mercury__char__succeeded = MR_FALSE;
#line 337 "char.m"
    return mercury__char__succeeded;
#line 337 "char.m"
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
#line 770 "char.m"
  {
#line 770 "char.m"
    MR_bool mercury__char__succeeded;

#line 770 "char.m"
    if ((mercury__char__HeadVar__2_2 == (MR_Char) 65))
#line 770 "char.m"
      {
#line 770 "char.m"
        *mercury__char__HeadVar__1_1 = (MR_Char) 97;
#line 770 "char.m"
        mercury__char__succeeded = MR_TRUE;
#line 770 "char.m"
      }
#line 770 "char.m"
    else
#line 770 "char.m"
      if ((mercury__char__HeadVar__2_2 == (MR_Char) 66))
#line 771 "char.m"
        {
#line 771 "char.m"
          *mercury__char__HeadVar__1_1 = (MR_Char) 98;
#line 771 "char.m"
          mercury__char__succeeded = MR_TRUE;
#line 771 "char.m"
        }
#line 770 "char.m"
      else
#line 770 "char.m"
        if ((mercury__char__HeadVar__2_2 == (MR_Char) 67))
#line 772 "char.m"
          {
#line 772 "char.m"
            *mercury__char__HeadVar__1_1 = (MR_Char) 99;
#line 772 "char.m"
            mercury__char__succeeded = MR_TRUE;
#line 772 "char.m"
          }
#line 770 "char.m"
        else
#line 770 "char.m"
          if ((mercury__char__HeadVar__2_2 == (MR_Char) 68))
#line 773 "char.m"
            {
#line 773 "char.m"
              *mercury__char__HeadVar__1_1 = (MR_Char) 100;
#line 773 "char.m"
              mercury__char__succeeded = MR_TRUE;
#line 773 "char.m"
            }
#line 770 "char.m"
          else
#line 770 "char.m"
            if ((mercury__char__HeadVar__2_2 == (MR_Char) 69))
#line 774 "char.m"
              {
#line 774 "char.m"
                *mercury__char__HeadVar__1_1 = (MR_Char) 101;
#line 774 "char.m"
                mercury__char__succeeded = MR_TRUE;
#line 774 "char.m"
              }
#line 770 "char.m"
            else
#line 770 "char.m"
              if ((mercury__char__HeadVar__2_2 == (MR_Char) 70))
#line 775 "char.m"
                {
#line 775 "char.m"
                  *mercury__char__HeadVar__1_1 = (MR_Char) 102;
#line 775 "char.m"
                  mercury__char__succeeded = MR_TRUE;
#line 775 "char.m"
                }
#line 770 "char.m"
              else
#line 770 "char.m"
                if ((mercury__char__HeadVar__2_2 == (MR_Char) 71))
#line 776 "char.m"
                  {
#line 776 "char.m"
                    *mercury__char__HeadVar__1_1 = (MR_Char) 103;
#line 776 "char.m"
                    mercury__char__succeeded = MR_TRUE;
#line 776 "char.m"
                  }
#line 770 "char.m"
                else
#line 770 "char.m"
                  if ((mercury__char__HeadVar__2_2 == (MR_Char) 72))
#line 777 "char.m"
                    {
#line 777 "char.m"
                      *mercury__char__HeadVar__1_1 = (MR_Char) 104;
#line 777 "char.m"
                      mercury__char__succeeded = MR_TRUE;
#line 777 "char.m"
                    }
#line 770 "char.m"
                  else
#line 770 "char.m"
                    if ((mercury__char__HeadVar__2_2 == (MR_Char) 73))
#line 778 "char.m"
                      {
#line 778 "char.m"
                        *mercury__char__HeadVar__1_1 = (MR_Char) 105;
#line 778 "char.m"
                        mercury__char__succeeded = MR_TRUE;
#line 778 "char.m"
                      }
#line 770 "char.m"
                    else
#line 770 "char.m"
                      if ((mercury__char__HeadVar__2_2 == (MR_Char) 74))
#line 779 "char.m"
                        {
#line 779 "char.m"
                          *mercury__char__HeadVar__1_1 = (MR_Char) 106;
#line 779 "char.m"
                          mercury__char__succeeded = MR_TRUE;
#line 779 "char.m"
                        }
#line 770 "char.m"
                      else
#line 770 "char.m"
                        if ((mercury__char__HeadVar__2_2 == (MR_Char) 75))
#line 780 "char.m"
                          {
#line 780 "char.m"
                            *mercury__char__HeadVar__1_1 = (MR_Char) 107;
#line 780 "char.m"
                            mercury__char__succeeded = MR_TRUE;
#line 780 "char.m"
                          }
#line 770 "char.m"
                        else
#line 770 "char.m"
                          if ((mercury__char__HeadVar__2_2 == (MR_Char) 76))
#line 781 "char.m"
                            {
#line 781 "char.m"
                              *mercury__char__HeadVar__1_1 = (MR_Char) 108;
#line 781 "char.m"
                              mercury__char__succeeded = MR_TRUE;
#line 781 "char.m"
                            }
#line 770 "char.m"
                          else
#line 770 "char.m"
                            if ((mercury__char__HeadVar__2_2 == (MR_Char) 77))
#line 782 "char.m"
                              {
#line 782 "char.m"
                                *mercury__char__HeadVar__1_1 = (MR_Char) 109;
#line 782 "char.m"
                                mercury__char__succeeded = MR_TRUE;
#line 782 "char.m"
                              }
#line 770 "char.m"
                            else
#line 770 "char.m"
                              if ((mercury__char__HeadVar__2_2 == (MR_Char) 78))
#line 783 "char.m"
                                {
#line 783 "char.m"
                                  *mercury__char__HeadVar__1_1 = (MR_Char) 110;
#line 783 "char.m"
                                  mercury__char__succeeded = MR_TRUE;
#line 783 "char.m"
                                }
#line 770 "char.m"
                              else
#line 770 "char.m"
                                if ((mercury__char__HeadVar__2_2 == (MR_Char) 79))
#line 784 "char.m"
                                  {
#line 784 "char.m"
                                    *mercury__char__HeadVar__1_1 = (MR_Char) 111;
#line 784 "char.m"
                                    mercury__char__succeeded = MR_TRUE;
#line 784 "char.m"
                                  }
#line 770 "char.m"
                                else
#line 770 "char.m"
                                  if ((mercury__char__HeadVar__2_2 == (MR_Char) 80))
#line 785 "char.m"
                                    {
#line 785 "char.m"
                                      *mercury__char__HeadVar__1_1 = (MR_Char) 112;
#line 785 "char.m"
                                      mercury__char__succeeded = MR_TRUE;
#line 785 "char.m"
                                    }
#line 770 "char.m"
                                  else
#line 770 "char.m"
                                    if ((mercury__char__HeadVar__2_2 == (MR_Char) 81))
#line 786 "char.m"
                                      {
#line 786 "char.m"
                                        *mercury__char__HeadVar__1_1 = (MR_Char) 113;
#line 786 "char.m"
                                        mercury__char__succeeded = MR_TRUE;
#line 786 "char.m"
                                      }
#line 770 "char.m"
                                    else
#line 770 "char.m"
                                      if ((mercury__char__HeadVar__2_2 == (MR_Char) 82))
#line 787 "char.m"
                                        {
#line 787 "char.m"
                                          *mercury__char__HeadVar__1_1 = (MR_Char) 114;
#line 787 "char.m"
                                          mercury__char__succeeded = MR_TRUE;
#line 787 "char.m"
                                        }
#line 770 "char.m"
                                      else
#line 770 "char.m"
                                        if ((mercury__char__HeadVar__2_2 == (MR_Char) 83))
#line 788 "char.m"
                                          {
#line 788 "char.m"
                                            *mercury__char__HeadVar__1_1 = (MR_Char) 115;
#line 788 "char.m"
                                            mercury__char__succeeded = MR_TRUE;
#line 788 "char.m"
                                          }
#line 770 "char.m"
                                        else
#line 770 "char.m"
                                          if ((mercury__char__HeadVar__2_2 == (MR_Char) 84))
#line 789 "char.m"
                                            {
#line 789 "char.m"
                                              *mercury__char__HeadVar__1_1 = (MR_Char) 116;
#line 789 "char.m"
                                              mercury__char__succeeded = MR_TRUE;
#line 789 "char.m"
                                            }
#line 770 "char.m"
                                          else
#line 770 "char.m"
                                            if ((mercury__char__HeadVar__2_2 == (MR_Char) 85))
#line 790 "char.m"
                                              {
#line 790 "char.m"
                                                *mercury__char__HeadVar__1_1 = (MR_Char) 117;
#line 790 "char.m"
                                                mercury__char__succeeded = MR_TRUE;
#line 790 "char.m"
                                              }
#line 770 "char.m"
                                            else
#line 770 "char.m"
                                              if ((mercury__char__HeadVar__2_2 == (MR_Char) 86))
#line 791 "char.m"
                                                {
#line 791 "char.m"
                                                  *mercury__char__HeadVar__1_1 = (MR_Char) 118;
#line 791 "char.m"
                                                  mercury__char__succeeded = MR_TRUE;
#line 791 "char.m"
                                                }
#line 770 "char.m"
                                              else
#line 770 "char.m"
                                                if ((mercury__char__HeadVar__2_2 == (MR_Char) 87))
#line 792 "char.m"
                                                  {
#line 792 "char.m"
                                                    *mercury__char__HeadVar__1_1 = (MR_Char) 119;
#line 792 "char.m"
                                                    mercury__char__succeeded = MR_TRUE;
#line 792 "char.m"
                                                  }
#line 770 "char.m"
                                                else
#line 770 "char.m"
                                                  if ((mercury__char__HeadVar__2_2 == (MR_Char) 88))
#line 793 "char.m"
                                                    {
#line 793 "char.m"
                                                      *mercury__char__HeadVar__1_1 = (MR_Char) 120;
#line 793 "char.m"
                                                      mercury__char__succeeded = MR_TRUE;
#line 793 "char.m"
                                                    }
#line 770 "char.m"
                                                  else
#line 770 "char.m"
                                                    if ((mercury__char__HeadVar__2_2 == (MR_Char) 89))
#line 794 "char.m"
                                                      {
#line 794 "char.m"
                                                        *mercury__char__HeadVar__1_1 = (MR_Char) 121;
#line 794 "char.m"
                                                        mercury__char__succeeded = MR_TRUE;
#line 794 "char.m"
                                                      }
#line 770 "char.m"
                                                    else
#line 770 "char.m"
                                                      if ((mercury__char__HeadVar__2_2 == (MR_Char) 90))
#line 795 "char.m"
                                                        {
#line 795 "char.m"
                                                          *mercury__char__HeadVar__1_1 = (MR_Char) 122;
#line 795 "char.m"
                                                          mercury__char__succeeded = MR_TRUE;
#line 795 "char.m"
                                                        }
#line 770 "char.m"
                                                      else
#line 770 "char.m"
                                                        mercury__char__succeeded = MR_FALSE;
#line 770 "char.m"
    return mercury__char__succeeded;
#line 770 "char.m"
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
#line 770 "char.m"
  {
#line 770 "char.m"
    MR_bool mercury__char__succeeded;

#line 770 "char.m"
    if ((mercury__char__HeadVar__1_1 == (MR_Char) 97))
#line 770 "char.m"
      {
#line 770 "char.m"
        *mercury__char__HeadVar__2_2 = (MR_Char) 65;
#line 770 "char.m"
        mercury__char__succeeded = MR_TRUE;
#line 770 "char.m"
      }
#line 770 "char.m"
    else
#line 770 "char.m"
      if ((mercury__char__HeadVar__1_1 == (MR_Char) 98))
#line 771 "char.m"
        {
#line 771 "char.m"
          *mercury__char__HeadVar__2_2 = (MR_Char) 66;
#line 771 "char.m"
          mercury__char__succeeded = MR_TRUE;
#line 771 "char.m"
        }
#line 770 "char.m"
      else
#line 770 "char.m"
        if ((mercury__char__HeadVar__1_1 == (MR_Char) 99))
#line 772 "char.m"
          {
#line 772 "char.m"
            *mercury__char__HeadVar__2_2 = (MR_Char) 67;
#line 772 "char.m"
            mercury__char__succeeded = MR_TRUE;
#line 772 "char.m"
          }
#line 770 "char.m"
        else
#line 770 "char.m"
          if ((mercury__char__HeadVar__1_1 == (MR_Char) 100))
#line 773 "char.m"
            {
#line 773 "char.m"
              *mercury__char__HeadVar__2_2 = (MR_Char) 68;
#line 773 "char.m"
              mercury__char__succeeded = MR_TRUE;
#line 773 "char.m"
            }
#line 770 "char.m"
          else
#line 770 "char.m"
            if ((mercury__char__HeadVar__1_1 == (MR_Char) 101))
#line 774 "char.m"
              {
#line 774 "char.m"
                *mercury__char__HeadVar__2_2 = (MR_Char) 69;
#line 774 "char.m"
                mercury__char__succeeded = MR_TRUE;
#line 774 "char.m"
              }
#line 770 "char.m"
            else
#line 770 "char.m"
              if ((mercury__char__HeadVar__1_1 == (MR_Char) 102))
#line 775 "char.m"
                {
#line 775 "char.m"
                  *mercury__char__HeadVar__2_2 = (MR_Char) 70;
#line 775 "char.m"
                  mercury__char__succeeded = MR_TRUE;
#line 775 "char.m"
                }
#line 770 "char.m"
              else
#line 770 "char.m"
                if ((mercury__char__HeadVar__1_1 == (MR_Char) 103))
#line 776 "char.m"
                  {
#line 776 "char.m"
                    *mercury__char__HeadVar__2_2 = (MR_Char) 71;
#line 776 "char.m"
                    mercury__char__succeeded = MR_TRUE;
#line 776 "char.m"
                  }
#line 770 "char.m"
                else
#line 770 "char.m"
                  if ((mercury__char__HeadVar__1_1 == (MR_Char) 104))
#line 777 "char.m"
                    {
#line 777 "char.m"
                      *mercury__char__HeadVar__2_2 = (MR_Char) 72;
#line 777 "char.m"
                      mercury__char__succeeded = MR_TRUE;
#line 777 "char.m"
                    }
#line 770 "char.m"
                  else
#line 770 "char.m"
                    if ((mercury__char__HeadVar__1_1 == (MR_Char) 105))
#line 778 "char.m"
                      {
#line 778 "char.m"
                        *mercury__char__HeadVar__2_2 = (MR_Char) 73;
#line 778 "char.m"
                        mercury__char__succeeded = MR_TRUE;
#line 778 "char.m"
                      }
#line 770 "char.m"
                    else
#line 770 "char.m"
                      if ((mercury__char__HeadVar__1_1 == (MR_Char) 106))
#line 779 "char.m"
                        {
#line 779 "char.m"
                          *mercury__char__HeadVar__2_2 = (MR_Char) 74;
#line 779 "char.m"
                          mercury__char__succeeded = MR_TRUE;
#line 779 "char.m"
                        }
#line 770 "char.m"
                      else
#line 770 "char.m"
                        if ((mercury__char__HeadVar__1_1 == (MR_Char) 107))
#line 780 "char.m"
                          {
#line 780 "char.m"
                            *mercury__char__HeadVar__2_2 = (MR_Char) 75;
#line 780 "char.m"
                            mercury__char__succeeded = MR_TRUE;
#line 780 "char.m"
                          }
#line 770 "char.m"
                        else
#line 770 "char.m"
                          if ((mercury__char__HeadVar__1_1 == (MR_Char) 108))
#line 781 "char.m"
                            {
#line 781 "char.m"
                              *mercury__char__HeadVar__2_2 = (MR_Char) 76;
#line 781 "char.m"
                              mercury__char__succeeded = MR_TRUE;
#line 781 "char.m"
                            }
#line 770 "char.m"
                          else
#line 770 "char.m"
                            if ((mercury__char__HeadVar__1_1 == (MR_Char) 109))
#line 782 "char.m"
                              {
#line 782 "char.m"
                                *mercury__char__HeadVar__2_2 = (MR_Char) 77;
#line 782 "char.m"
                                mercury__char__succeeded = MR_TRUE;
#line 782 "char.m"
                              }
#line 770 "char.m"
                            else
#line 770 "char.m"
                              if ((mercury__char__HeadVar__1_1 == (MR_Char) 110))
#line 783 "char.m"
                                {
#line 783 "char.m"
                                  *mercury__char__HeadVar__2_2 = (MR_Char) 78;
#line 783 "char.m"
                                  mercury__char__succeeded = MR_TRUE;
#line 783 "char.m"
                                }
#line 770 "char.m"
                              else
#line 770 "char.m"
                                if ((mercury__char__HeadVar__1_1 == (MR_Char) 111))
#line 784 "char.m"
                                  {
#line 784 "char.m"
                                    *mercury__char__HeadVar__2_2 = (MR_Char) 79;
#line 784 "char.m"
                                    mercury__char__succeeded = MR_TRUE;
#line 784 "char.m"
                                  }
#line 770 "char.m"
                                else
#line 770 "char.m"
                                  if ((mercury__char__HeadVar__1_1 == (MR_Char) 112))
#line 785 "char.m"
                                    {
#line 785 "char.m"
                                      *mercury__char__HeadVar__2_2 = (MR_Char) 80;
#line 785 "char.m"
                                      mercury__char__succeeded = MR_TRUE;
#line 785 "char.m"
                                    }
#line 770 "char.m"
                                  else
#line 770 "char.m"
                                    if ((mercury__char__HeadVar__1_1 == (MR_Char) 113))
#line 786 "char.m"
                                      {
#line 786 "char.m"
                                        *mercury__char__HeadVar__2_2 = (MR_Char) 81;
#line 786 "char.m"
                                        mercury__char__succeeded = MR_TRUE;
#line 786 "char.m"
                                      }
#line 770 "char.m"
                                    else
#line 770 "char.m"
                                      if ((mercury__char__HeadVar__1_1 == (MR_Char) 114))
#line 787 "char.m"
                                        {
#line 787 "char.m"
                                          *mercury__char__HeadVar__2_2 = (MR_Char) 82;
#line 787 "char.m"
                                          mercury__char__succeeded = MR_TRUE;
#line 787 "char.m"
                                        }
#line 770 "char.m"
                                      else
#line 770 "char.m"
                                        if ((mercury__char__HeadVar__1_1 == (MR_Char) 115))
#line 788 "char.m"
                                          {
#line 788 "char.m"
                                            *mercury__char__HeadVar__2_2 = (MR_Char) 83;
#line 788 "char.m"
                                            mercury__char__succeeded = MR_TRUE;
#line 788 "char.m"
                                          }
#line 770 "char.m"
                                        else
#line 770 "char.m"
                                          if ((mercury__char__HeadVar__1_1 == (MR_Char) 116))
#line 789 "char.m"
                                            {
#line 789 "char.m"
                                              *mercury__char__HeadVar__2_2 = (MR_Char) 84;
#line 789 "char.m"
                                              mercury__char__succeeded = MR_TRUE;
#line 789 "char.m"
                                            }
#line 770 "char.m"
                                          else
#line 770 "char.m"
                                            if ((mercury__char__HeadVar__1_1 == (MR_Char) 117))
#line 790 "char.m"
                                              {
#line 790 "char.m"
                                                *mercury__char__HeadVar__2_2 = (MR_Char) 85;
#line 790 "char.m"
                                                mercury__char__succeeded = MR_TRUE;
#line 790 "char.m"
                                              }
#line 770 "char.m"
                                            else
#line 770 "char.m"
                                              if ((mercury__char__HeadVar__1_1 == (MR_Char) 118))
#line 791 "char.m"
                                                {
#line 791 "char.m"
                                                  *mercury__char__HeadVar__2_2 = (MR_Char) 86;
#line 791 "char.m"
                                                  mercury__char__succeeded = MR_TRUE;
#line 791 "char.m"
                                                }
#line 770 "char.m"
                                              else
#line 770 "char.m"
                                                if ((mercury__char__HeadVar__1_1 == (MR_Char) 119))
#line 792 "char.m"
                                                  {
#line 792 "char.m"
                                                    *mercury__char__HeadVar__2_2 = (MR_Char) 87;
#line 792 "char.m"
                                                    mercury__char__succeeded = MR_TRUE;
#line 792 "char.m"
                                                  }
#line 770 "char.m"
                                                else
#line 770 "char.m"
                                                  if ((mercury__char__HeadVar__1_1 == (MR_Char) 120))
#line 793 "char.m"
                                                    {
#line 793 "char.m"
                                                      *mercury__char__HeadVar__2_2 = (MR_Char) 88;
#line 793 "char.m"
                                                      mercury__char__succeeded = MR_TRUE;
#line 793 "char.m"
                                                    }
#line 770 "char.m"
                                                  else
#line 770 "char.m"
                                                    if ((mercury__char__HeadVar__1_1 == (MR_Char) 121))
#line 794 "char.m"
                                                      {
#line 794 "char.m"
                                                        *mercury__char__HeadVar__2_2 = (MR_Char) 89;
#line 794 "char.m"
                                                        mercury__char__succeeded = MR_TRUE;
#line 794 "char.m"
                                                      }
#line 770 "char.m"
                                                    else
#line 770 "char.m"
                                                      if ((mercury__char__HeadVar__1_1 == (MR_Char) 122))
#line 795 "char.m"
                                                        {
#line 795 "char.m"
                                                          *mercury__char__HeadVar__2_2 = (MR_Char) 90;
#line 795 "char.m"
                                                          mercury__char__succeeded = MR_TRUE;
#line 795 "char.m"
                                                        }
#line 770 "char.m"
                                                      else
#line 770 "char.m"
                                                        mercury__char__succeeded = MR_FALSE;
#line 770 "char.m"
    return mercury__char__succeeded;
#line 770 "char.m"
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
#line 460 "char.m"
  {
#line 460 "char.m"
    MR_bool mercury__char__succeeded;
#line 460 "char.m"
    MR_Char mercury__char__LowerChar_5;

#line 458 "char.m"
    {
#line 458 "char.m"
      mercury__char__succeeded = mercury__char__lower_upper_2_p_1(&mercury__char__LowerChar_5, mercury__char__Char_3);
    }
#line 460 "char.m"
    if (mercury__char__succeeded)
#line 459 "char.m"
      *mercury__char__Lower_4 = mercury__char__LowerChar_5;
#line 460 "char.m"
    else
#line 461 "char.m"
      *mercury__char__Lower_4 = mercury__char__Char_3;
#line 460 "char.m"
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
#line 460 "char.m"
  {
#line 460 "char.m"
    MR_bool mercury__char__succeeded;
#line 460 "char.m"
    MR_Char mercury__char__C2_4;
#line 460 "char.m"
    MR_Char mercury__char__LowerChar_7;

#line 458 "char.m"
    {
#line 458 "char.m"
      mercury__char__succeeded = mercury__char__lower_upper_2_p_1(&mercury__char__LowerChar_7, mercury__char__C1_3);
    }
#line 460 "char.m"
    if (mercury__char__succeeded)
#line 459 "char.m"
      mercury__char__C2_4 = mercury__char__LowerChar_7;
#line 460 "char.m"
    else
#line 461 "char.m"
      mercury__char__C2_4 = mercury__char__C1_3;
#line 460 "char.m"
    return mercury__char__C2_4;
#line 460 "char.m"
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
#line 470 "char.m"
  {
#line 470 "char.m"
    MR_bool mercury__char__succeeded;
#line 470 "char.m"
    MR_Char mercury__char__UpperChar_5;

#line 468 "char.m"
    {
#line 468 "char.m"
      mercury__char__succeeded = mercury__char__lower_upper_2_p_0(mercury__char__Char_3, &mercury__char__UpperChar_5);
    }
#line 470 "char.m"
    if (mercury__char__succeeded)
#line 469 "char.m"
      *mercury__char__Upper_4 = mercury__char__UpperChar_5;
#line 470 "char.m"
    else
#line 471 "char.m"
      *mercury__char__Upper_4 = mercury__char__Char_3;
#line 470 "char.m"
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
#line 470 "char.m"
  {
#line 470 "char.m"
    MR_bool mercury__char__succeeded;
#line 470 "char.m"
    MR_Char mercury__char__C2_4;
#line 470 "char.m"
    MR_Char mercury__char__UpperChar_7;

#line 468 "char.m"
    {
#line 468 "char.m"
      mercury__char__succeeded = mercury__char__lower_upper_2_p_0(mercury__char__C1_3, &mercury__char__UpperChar_7);
    }
#line 470 "char.m"
    if (mercury__char__succeeded)
#line 469 "char.m"
      mercury__char__C2_4 = mercury__char__UpperChar_7;
#line 470 "char.m"
    else
#line 471 "char.m"
      mercury__char__C2_4 = mercury__char__C1_3;
#line 470 "char.m"
    return mercury__char__C2_4;
#line 470 "char.m"
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
#line 911 "char.m"
  {
#line 911 "char.m"
    MR_bool mercury__char__succeeded;

#line 911 "char.m"
    *mercury__char__HeadVar__1_1 = (MR_Integer) 0;
#line 911 "char.m"
  }
#line 82 "char.m"
}

#line 81 "char.m"
MR_Integer MR_CALL 
mercury__char__min_char_value_0_f_0(void)
#line 81 "char.m"
{
#line 911 "char.m"
  {
#line 911 "char.m"
    MR_bool mercury__char__succeeded;

#line 911 "char.m"
    return (MR_Integer) 0;
#line 911 "char.m"
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
#line 918 "char.m"
  {
#line 918 "char.m"
    MR_bool mercury__char__succeeded;

#line 922 "char.m"
{
#define MR_PROC_LABEL mercury__char__max_char_value_1_p_0

	MR_Integer Max;

		{
#line 922 "char.m"

    Max = 0x10ffff;

#line 6471 "char.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__char__Max_1  = Max;
#line 922 "char.m"
}
#line 918 "char.m"
  }
#line 77 "char.m"
}

#line 76 "char.m"
MR_Integer MR_CALL 
mercury__char__max_char_value_0_f_0(void)
#line 76 "char.m"
{
#line 918 "char.m"
  {
#line 918 "char.m"
    MR_bool mercury__char__succeeded;
#line 918 "char.m"
    MR_Integer mercury__char__N_2;

#line 922 "char.m"
{
#define MR_PROC_LABEL mercury__char__max_char_value_0_f_0

	MR_Integer Max;

		{
#line 922 "char.m"

    Max = 0x10ffff;

#line 6506 "char.c"

		;}
#undef MR_PROC_LABEL
	 mercury__char__N_2  = Max;
#line 922 "char.m"
}
#line 918 "char.m"
    return mercury__char__N_2;
#line 918 "char.m"
  }
#line 76 "char.m"
}

#line 72 "char.m"
void MR_CALL 
mercury__char__det_from_int_2_p_0(
#line 72 "char.m"
  MR_Integer mercury__char__Int_3,
#line 72 "char.m"
  MR_Char * mercury__char__Char_4)
#line 72 "char.m"
{
#line 805 "char.m"
  {
#line 805 "char.m"
    MR_bool mercury__char__succeeded;
#line 805 "char.m"
    MR_Char mercury__char__CharPrime_5;

#line 835 "char.m"
{
#define MR_PROC_LABEL mercury__char__det_from_int_2_p_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int =  mercury__char__Int_3 ;
		{
#line 835 "char.m"

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);

#line 6551 "char.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__char__CharPrime_5  = Character;
#line 835 "char.m"
	}
mercury__char__succeeded  = SUCCESS_INDICATOR;
}
#line 805 "char.m"
    if (mercury__char__succeeded)
#line 804 "char.m"
      *mercury__char__Char_4 = mercury__char__CharPrime_5;
#line 805 "char.m"
    else
#line 806 "char.m"
      {
#line 806 "char.m"
        {
#line 806 "char.m"
          mercury__require__error_1_p_0((MR_String) "char.det_from_int: conversion failed");
#line 806 "char.m"
          return;
        }
#line 806 "char.m"
      }
#line 805 "char.m"
  }
#line 72 "char.m"
}

#line 71 "char.m"
MR_Char MR_CALL 
mercury__char__det_from_int_1_f_0(
#line 71 "char.m"
  MR_Integer mercury__char__Int_3)
#line 71 "char.m"
{
#line 805 "char.m"
  {
#line 805 "char.m"
    MR_bool mercury__char__succeeded;
#line 805 "char.m"
    MR_Char mercury__char__Char_4;
#line 805 "char.m"
    MR_Char mercury__char__CharPrime_7;

#line 835 "char.m"
{
#define MR_PROC_LABEL mercury__char__det_from_int_1_f_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int =  mercury__char__Int_3 ;
		{
#line 835 "char.m"

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);

#line 6614 "char.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__char__CharPrime_7  = Character;
#line 835 "char.m"
	}
mercury__char__succeeded  = SUCCESS_INDICATOR;
}
#line 805 "char.m"
    if (mercury__char__succeeded)
#line 804 "char.m"
      mercury__char__Char_4 = mercury__char__CharPrime_7;
#line 805 "char.m"
    else
#line 806 "char.m"
      {
#line 806 "char.m"
        {
#line 806 "char.m"
          mercury__require__error_1_p_0((MR_String) "char.det_from_int: conversion failed");
        }
#line 806 "char.m"
      }
#line 805 "char.m"
    return mercury__char__Char_4;
#line 805 "char.m"
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
#line 831 "char.m"
  {
#line 831 "char.m"
    MR_bool mercury__char__succeeded;

#line 835 "char.m"
{
#define MR_PROC_LABEL mercury__char__from_int_2_p_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int =  mercury__char__Int_3 ;
		{
#line 835 "char.m"

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);

#line 6675 "char.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__char__Char_4  = Character;
#line 835 "char.m"
	}
mercury__char__succeeded  = SUCCESS_INDICATOR;
}
#line 831 "char.m"
    return mercury__char__succeeded;
#line 831 "char.m"
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
#line 831 "char.m"
  {
#line 831 "char.m"
    MR_bool mercury__char__succeeded;

#line 835 "char.m"
{
#define MR_PROC_LABEL mercury__char__to_int_2_p_2

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int =  mercury__char__Int_2 ;
		{
#line 835 "char.m"

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);

#line 6721 "char.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__char__Character_1  = Character;
#line 835 "char.m"
	}
mercury__char__succeeded  = SUCCESS_INDICATOR;
}
#line 831 "char.m"
    return mercury__char__succeeded;
#line 831 "char.m"
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
#line 823 "char.m"
  {
#line 823 "char.m"
    MR_bool mercury__char__succeeded;

#line 827 "char.m"
{
#define MR_PROC_LABEL mercury__char__to_int_2_p_1

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Character =  mercury__char__Character_1 ;
	Int =  mercury__char__Int_2 ;
		{
#line 827 "char.m"

    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);

#line 6767 "char.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 827 "char.m"
	}
mercury__char__succeeded  = SUCCESS_INDICATOR;
}
#line 823 "char.m"
    return mercury__char__succeeded;
#line 823 "char.m"
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
#line 812 "char.m"
  {
#line 812 "char.m"
    MR_bool mercury__char__succeeded;

#line 816 "char.m"
{
#define MR_PROC_LABEL mercury__char__to_int_2_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__char__Character_1 ;
		{
#line 816 "char.m"

    Int = (MR_UnsignedChar) Character;

#line 6810 "char.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__char__Int_2  = Int;
#line 816 "char.m"
}
#line 812 "char.m"
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
#line 812 "char.m"
  {
#line 812 "char.m"
    MR_bool mercury__char__succeeded;
#line 812 "char.m"
    MR_Integer mercury__char__N_4;

#line 816 "char.m"
{
#define MR_PROC_LABEL mercury__char__to_int_1_f_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__char__C_3 ;
		{
#line 816 "char.m"

    Int = (MR_UnsignedChar) Character;

#line 6849 "char.c"

		;}
#undef MR_PROC_LABEL
	 mercury__char__N_4  = Int;
#line 816 "char.m"
}
#line 812 "char.m"
    return mercury__char__N_4;
#line 812 "char.m"
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
