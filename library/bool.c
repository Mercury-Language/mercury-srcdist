/*
** Automatically generated from `bool.m'
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


/* :- module bool. */
/* :- implementation. */

/*
INIT mercury__bool__init
ENDINIT
*/

#include "bool.mih"
#include "bool.mh"


#include "array.mih"
#include "assoc_list.mih"
#include "benchmarking.mih"
#include "bitmap.mih"
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




#line 86 "bool.c"
static const MR_EnumFunctorDesc mercury__bool__bool__enum_functor_desc_bool_0_0;

#line 89 "bool.c"
static const MR_EnumFunctorDesc mercury__bool__bool__enum_functor_desc_bool_0_1;

#line 92 "bool.c"
static const MR_EnumFunctorDescPtr mercury__bool__bool__enum_value_ordered_bool_0[2];

#line 95 "bool.c"
static const MR_EnumFunctorDescPtr mercury__bool__bool__enum_name_ordered_bool_0[2];

#line 98 "bool.c"
static const MR_Integer mercury__bool__bool__functor_number_map_bool_0[2];

#line 101 "bool.c"
static MR_bool MR_CALL 
mercury__bool____Unify____bool_0_0_10001(
#line 104 "bool.c"
  MR_Box mercury__bool__wrapper_arg_1,
#line 106 "bool.c"
  MR_Box mercury__bool__wrapper_arg_2);

#line 109 "bool.c"
static void MR_CALL 
mercury__bool____Compare____bool_0_0_10001(
#line 112 "bool.c"
  MR_Box * mercury__bool__wrapper_arg_1,
#line 114 "bool.c"
  MR_Box mercury__bool__wrapper_arg_2,
#line 116 "bool.c"
  MR_Box mercury__bool__wrapper_arg_3);

#line 119 "bool.c"
static MR_Box MR_CALL 
mercury__bool__ClassMethod_for_enum__enum____bool__bool__arity0______enum__to_int_1_1_f_0_10001(
#line 122 "bool.c"
  MR_Box mercury__bool__closure_arg,
#line 124 "bool.c"
  MR_Box mercury__bool__wrapper_arg_1);

#line 127 "bool.c"
static MR_bool MR_CALL 
mercury__bool__ClassMethod_for_enum__enum____bool__bool__arity0______enum__from_int_1_1_f_0_10001(
#line 130 "bool.c"
  MR_Box mercury__bool__closure_arg,
#line 132 "bool.c"
  MR_Box mercury__bool__wrapper_arg_1,
#line 134 "bool.c"
  MR_Box * mercury__bool__wrapper_arg_2);

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__bool__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 144 "bool.m"
static MR_Word MR_CALL 
mercury__bool__return_yes_0_f_0(void);

#line 143 "bool.m"
static MR_Word MR_CALL 
mercury__bool__return_no_0_f_0(void);


static /* final */ const MR_Box mercury__bool_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__bool_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__bool_scalar_common_3[2][5];




static /* final */ const MR_Box mercury__bool_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__bool_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__bool_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__bool_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__bool_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__bool_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "bool.mh"
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

#line 147 "bool.m"
MR_Word 
ML_bool_return_yes(void)
#line 147 "bool.m"
{
#line 147 "bool.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mercury__bool__return_yes_0_f_0();
	return ret_value;
}

#line 145 "bool.m"
MR_Word 
ML_bool_return_no(void)
#line 145 "bool.m"
{
#line 145 "bool.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mercury__bool__return_no_0_f_0();
	return ret_value;
}


#line 531 "bool.c"
static const MR_EnumFunctorDesc mercury__bool__bool__enum_functor_desc_bool_0_0 = {
  (MR_String) "no",
  (MR_Integer) 0
};

#line 537 "bool.c"
static const MR_EnumFunctorDesc mercury__bool__bool__enum_functor_desc_bool_0_1 = {
  (MR_String) "yes",
  (MR_Integer) 1
};

#line 543 "bool.c"
static const MR_EnumFunctorDescPtr mercury__bool__bool__enum_value_ordered_bool_0[2] = {
  &mercury__bool__bool__enum_functor_desc_bool_0_0,
  &mercury__bool__bool__enum_functor_desc_bool_0_1
};

#line 549 "bool.c"
static const MR_EnumFunctorDescPtr mercury__bool__bool__enum_name_ordered_bool_0[2] = {
  &mercury__bool__bool__enum_functor_desc_bool_0_0,
  &mercury__bool__bool__enum_functor_desc_bool_0_1
};

#line 555 "bool.c"
static const MR_Integer mercury__bool__bool__functor_number_map_bool_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 561 "bool.c"
const MR_TypeCtorInfo_Struct mercury__bool__bool__type_ctor_info_bool_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__bool____Unify____bool_0_0_10001)),
  ((MR_Box) (mercury__bool____Compare____bool_0_0_10001)),
  (MR_String) "bool",
  (MR_String) "bool",
  {
    mercury__bool__bool__enum_name_ordered_bool_0
  },
  {
    mercury__bool__bool__enum_value_ordered_bool_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__bool__bool__functor_number_map_bool_0
};

#line 582 "bool.c"
const MR_BaseTypeclassInfo base_typeclass_info_enum__enum__arity1__bool__bool__arity0__[7] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (mercury__bool__ClassMethod_for_enum__enum____bool__bool__arity0______enum__to_int_1_1_f_0_10001)),
  ((MR_Box) (mercury__bool__ClassMethod_for_enum__enum____bool__bool__arity0______enum__from_int_1_1_f_0_10001))
};

#line 593 "bool.c"
static MR_bool MR_CALL 
mercury__bool____Unify____bool_0_0_10001(
#line 596 "bool.c"
  MR_Box mercury__bool__wrapper_arg_1,
#line 598 "bool.c"
  MR_Box mercury__bool__wrapper_arg_2)
#line 600 "bool.c"
{
#line 602 "bool.c"
  {
#line 604 "bool.c"
    MR_bool mercury__bool__succeeded;

#line 607 "bool.c"
    {
#line 609 "bool.c"
      mercury__bool__succeeded = mercury__bool____Unify____bool_0_0(((MR_Word) mercury__bool__wrapper_arg_1), ((MR_Word) mercury__bool__wrapper_arg_2));
    }
#line 612 "bool.c"
    return mercury__bool__succeeded;
#line 614 "bool.c"
  }
#line 616 "bool.c"
}

#line 619 "bool.c"
static void MR_CALL 
mercury__bool____Compare____bool_0_0_10001(
#line 622 "bool.c"
  MR_Box * mercury__bool__wrapper_arg_1,
#line 624 "bool.c"
  MR_Box mercury__bool__wrapper_arg_2,
#line 626 "bool.c"
  MR_Box mercury__bool__wrapper_arg_3)
#line 628 "bool.c"
{
#line 630 "bool.c"
  {
#line 632 "bool.c"
    MR_Word mercury__bool__conv0_HeadVar__1_1;

#line 635 "bool.c"
    {
#line 637 "bool.c"
      mercury__bool____Compare____bool_0_0(&mercury__bool__conv0_HeadVar__1_1, ((MR_Word) mercury__bool__wrapper_arg_2), ((MR_Word) mercury__bool__wrapper_arg_3));
    }
#line 640 "bool.c"
    *mercury__bool__wrapper_arg_1 = ((MR_Box) (mercury__bool__conv0_HeadVar__1_1));
#line 642 "bool.c"
  }
#line 644 "bool.c"
}

#line 647 "bool.c"
static MR_Box MR_CALL 
mercury__bool__ClassMethod_for_enum__enum____bool__bool__arity0______enum__to_int_1_1_f_0_10001(
#line 650 "bool.c"
  MR_Box mercury__bool__closure_arg,
#line 652 "bool.c"
  MR_Box mercury__bool__wrapper_arg_1)
#line 654 "bool.c"
{
#line 656 "bool.c"
  {
#line 658 "bool.c"
    MR_Box mercury__bool__wrapper_arg_2;
#line 660 "bool.c"
    MR_Box mercury__bool__closure;
#line 662 "bool.c"
    MR_Integer mercury__bool__conv0_HeadVar__2_2;

#line 665 "bool.c"
    mercury__bool__closure = mercury__bool__closure_arg;
#line 667 "bool.c"
    {
#line 669 "bool.c"
      mercury__bool__conv0_HeadVar__2_2 = mercury__bool__ClassMethod_for_enum__enum____bool__bool__arity0______enum__to_int_1_1_f_0(((MR_Word) mercury__bool__wrapper_arg_1));
    }
#line 672 "bool.c"
    mercury__bool__wrapper_arg_2 = ((MR_Box) (mercury__bool__conv0_HeadVar__2_2));
#line 674 "bool.c"
    return mercury__bool__wrapper_arg_2;
#line 676 "bool.c"
  }
#line 678 "bool.c"
}

#line 681 "bool.c"
static MR_bool MR_CALL 
mercury__bool__ClassMethod_for_enum__enum____bool__bool__arity0______enum__from_int_1_1_f_0_10001(
#line 684 "bool.c"
  MR_Box mercury__bool__closure_arg,
#line 686 "bool.c"
  MR_Box mercury__bool__wrapper_arg_1,
#line 688 "bool.c"
  MR_Box * mercury__bool__wrapper_arg_2)
#line 690 "bool.c"
{
#line 692 "bool.c"
  {
#line 694 "bool.c"
    MR_bool mercury__bool__succeeded;
#line 696 "bool.c"
    MR_Box mercury__bool__closure;
#line 698 "bool.c"
    MR_Word mercury__bool__conv0_Bool_3;

#line 701 "bool.c"
    mercury__bool__closure = mercury__bool__closure_arg;
#line 703 "bool.c"
    {
#line 705 "bool.c"
      mercury__bool__succeeded = mercury__bool__ClassMethod_for_enum__enum____bool__bool__arity0______enum__from_int_1_1_f_0(((MR_Integer) mercury__bool__wrapper_arg_1), &mercury__bool__conv0_Bool_3);
    }
#line 708 "bool.c"
    if (mercury__bool__succeeded)
#line 710 "bool.c"
      {
#line 712 "bool.c"
        *mercury__bool__wrapper_arg_2 = ((MR_Box) (mercury__bool__conv0_Bool_3));
#line 714 "bool.c"
        mercury__bool__succeeded = MR_TRUE;
#line 716 "bool.c"
      }
#line 718 "bool.c"
    return mercury__bool__succeeded;
#line 720 "bool.c"
  }
#line 722 "bool.c"
}

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__bool__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 13 "ops.opt"
{
#line 38 "ops.opt"
  {
#line 38 "ops.opt"
    MR_bool mercury__bool__succeeded;

#line 38 "ops.opt"
    return (MR_Integer) 1200;
#line 38 "ops.opt"
  }
#line 13 "ops.opt"
}

#line 94 "bool.m"
MR_bool MR_CALL 
mercury__bool__ClassMethod_for_enum__enum____bool__bool__arity0______enum__from_int_1_1_f_0(
#line 94 "bool.m"
  MR_Integer mercury__bool__HeadVar__1_1,
#line 94 "bool.m"
  MR_Word * mercury__bool__Bool_3)
#line 94 "bool.m"
{
#line 101 "bool.m"
  {
#line 101 "bool.m"
    MR_bool mercury__bool__succeeded;

#line 101 "bool.m"
    if ((mercury__bool__HeadVar__1_1 == (MR_Integer) 0))
#line 101 "bool.m"
      {
#line 101 "bool.m"
        *mercury__bool__Bool_3 = (MR_Integer) 0;
#line 101 "bool.m"
        mercury__bool__succeeded = MR_TRUE;
#line 101 "bool.m"
      }
#line 101 "bool.m"
    else
#line 101 "bool.m"
      if ((mercury__bool__HeadVar__1_1 == (MR_Integer) 1))
#line 102 "bool.m"
        {
#line 102 "bool.m"
          *mercury__bool__Bool_3 = (MR_Integer) 1;
#line 102 "bool.m"
          mercury__bool__succeeded = MR_TRUE;
#line 102 "bool.m"
        }
#line 101 "bool.m"
      else
#line 101 "bool.m"
        mercury__bool__succeeded = MR_FALSE;
#line 101 "bool.m"
    return mercury__bool__succeeded;
#line 101 "bool.m"
  }
#line 94 "bool.m"
}

#line 93 "bool.m"
MR_Integer MR_CALL 
mercury__bool__ClassMethod_for_enum__enum____bool__bool__arity0______enum__to_int_1_1_f_0(
#line 93 "bool.m"
  MR_Word mercury__bool__Bool_3)
#line 93 "bool.m"
{
#line 101 "bool.m"
  {
#line 101 "bool.m"
    MR_bool mercury__bool__succeeded;
#line 101 "bool.m"
    MR_Integer mercury__bool__HeadVar__2_2;

#line 101 "bool.m"
    if ((mercury__bool__Bool_3 == (MR_Integer) 0))
#line 101 "bool.m"
      mercury__bool__HeadVar__2_2 = (MR_Integer) 0;
#line 101 "bool.m"
    else
#line 102 "bool.m"
      mercury__bool__HeadVar__2_2 = (MR_Integer) 1;
#line 101 "bool.m"
    return mercury__bool__HeadVar__2_2;
#line 101 "bool.m"
  }
#line 93 "bool.m"
}

#line 30 "bool.m"
void MR_CALL 
mercury__bool____Compare____bool_0_0(
#line 30 "bool.m"
  MR_Word * mercury__bool__HeadVar__1_1,
#line 30 "bool.m"
  MR_Word mercury__bool__HeadVar__2_2,
#line 30 "bool.m"
  MR_Word mercury__bool__HeadVar__3_3)
#line 30 "bool.m"
{
#line 30 "bool.m"
  {
#line 30 "bool.m"
    MR_bool mercury__bool__succeeded;
#line 30 "bool.m"
    MR_Integer mercury__bool__Cast_HeadVar1_4 = (MR_Integer) mercury__bool__HeadVar__2_2;
#line 30 "bool.m"
    MR_Integer mercury__bool__Cast_HeadVar2_5 = (MR_Integer) mercury__bool__HeadVar__3_3;

#line 66 "private_builtin.opt"
    mercury__bool__succeeded = (mercury__bool__Cast_HeadVar1_4 < mercury__bool__Cast_HeadVar2_5);
#line 69 "private_builtin.opt"
    if (mercury__bool__succeeded)
#line 68 "private_builtin.opt"
      *mercury__bool__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
    else
#line 74 "private_builtin.opt"
      {
#line 71 "private_builtin.opt"
        mercury__bool__succeeded = (mercury__bool__Cast_HeadVar1_4 == mercury__bool__Cast_HeadVar2_5);
#line 74 "private_builtin.opt"
        if (mercury__bool__succeeded)
#line 73 "private_builtin.opt"
          *mercury__bool__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
        else
#line 75 "private_builtin.opt"
          *mercury__bool__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
      }
#line 30 "bool.m"
  }
#line 30 "bool.m"
}

#line 30 "bool.m"
MR_bool MR_CALL 
mercury__bool____Unify____bool_0_0(
#line 30 "bool.m"
  MR_Word mercury__bool__HeadVar__2_1,
#line 30 "bool.m"
  MR_Word mercury__bool__HeadVar__2_2)
#line 30 "bool.m"
{
#line 874 "bool.c"
  {
#line 876 "bool.c"
    MR_bool mercury__bool__succeeded = (mercury__bool__HeadVar__2_1 == mercury__bool__HeadVar__2_2);

#line 879 "bool.c"
    return mercury__bool__succeeded;
#line 881 "bool.c"
  }
#line 30 "bool.m"
}

#line 144 "bool.m"
static MR_Word MR_CALL 
mercury__bool__return_yes_0_f_0(void)
#line 144 "bool.m"
{
#line 151 "bool.m"
  {
#line 151 "bool.m"
    MR_bool mercury__bool__succeeded;

#line 151 "bool.m"
    return (MR_Integer) 1;
#line 151 "bool.m"
  }
#line 144 "bool.m"
}

#line 143 "bool.m"
static MR_Word MR_CALL 
mercury__bool__return_no_0_f_0(void)
#line 143 "bool.m"
{
#line 150 "bool.m"
  {
#line 150 "bool.m"
    MR_bool mercury__bool__succeeded;

#line 150 "bool.m"
    return (MR_Integer) 0;
#line 150 "bool.m"
  }
#line 143 "bool.m"
}

#line 69 "bool.m"
MR_Word MR_CALL 
mercury__bool__pred_to_bool_1_f_0(
#line 69 "bool.m"
  MR_Word mercury__bool__P_3)
#line 69 "bool.m"
{
#line 153 "bool.m"
  {
#line 153 "bool.m"
    MR_bool mercury__bool__succeeded;
#line 153 "bool.m"
    MR_Word mercury__bool__HeadVar__2_2;
#line 153 "bool.m"
    MR_bool MR_CALL (* mercury__bool__func_0)(MR_Box) = ((MR_bool MR_CALL (*)(MR_Box)) (MR_hl_field(MR_mktag(0), mercury__bool__P_3, (MR_Integer) 1)));

#line 153 "bool.m"
    {
#line 153 "bool.m"
      mercury__bool__succeeded = mercury__bool__func_0(((MR_Box) mercury__bool__P_3));
    }
#line 153 "bool.m"
    if (mercury__bool__succeeded)
#line 153 "bool.m"
      mercury__bool__HeadVar__2_2 = (MR_Integer) 1;
#line 153 "bool.m"
    else
#line 153 "bool.m"
      mercury__bool__HeadVar__2_2 = (MR_Integer) 0;
#line 153 "bool.m"
    return mercury__bool__HeadVar__2_2;
#line 153 "bool.m"
  }
#line 69 "bool.m"
}

#line 65 "bool.m"
MR_Word MR_CALL 
mercury__bool__xor_2_f_0(
#line 65 "bool.m"
  MR_Word mercury__bool__HeadVar__1_1,
#line 65 "bool.m"
  MR_Word mercury__bool__HeadVar__2_2)
#line 65 "bool.m"
{
#line 155 "bool.m"
  {
#line 155 "bool.m"
    MR_bool mercury__bool__succeeded;
#line 155 "bool.m"
    MR_Word mercury__bool__HeadVar__3_3;

#line 155 "bool.m"
    if ((mercury__bool__HeadVar__1_1 == (MR_Integer) 0))
#line 155 "bool.m"
      if ((mercury__bool__HeadVar__2_2 == (MR_Integer) 0))
#line 155 "bool.m"
        mercury__bool__HeadVar__3_3 = (MR_Integer) 0;
#line 155 "bool.m"
      else
#line 156 "bool.m"
        mercury__bool__HeadVar__3_3 = (MR_Integer) 1;
#line 155 "bool.m"
    else
#line 155 "bool.m"
      if ((mercury__bool__HeadVar__2_2 == (MR_Integer) 0))
#line 157 "bool.m"
        mercury__bool__HeadVar__3_3 = (MR_Integer) 1;
#line 155 "bool.m"
      else
#line 158 "bool.m"
        mercury__bool__HeadVar__3_3 = (MR_Integer) 0;
#line 155 "bool.m"
    return mercury__bool__HeadVar__3_3;
#line 155 "bool.m"
  }
#line 65 "bool.m"
}

#line 61 "bool.m"
void MR_CALL 
mercury__bool__not_2_p_0(
#line 61 "bool.m"
  MR_Word mercury__bool__HeadVar__1_1,
#line 61 "bool.m"
  MR_Word * mercury__bool__HeadVar__2_2)
#line 61 "bool.m"
{
#line 140 "bool.m"
  {
#line 140 "bool.m"
    MR_bool mercury__bool__succeeded;

#line 140 "bool.m"
    if ((mercury__bool__HeadVar__1_1 == (MR_Integer) 0))
#line 140 "bool.m"
      *mercury__bool__HeadVar__2_2 = (MR_Integer) 1;
#line 140 "bool.m"
    else
#line 141 "bool.m"
      *mercury__bool__HeadVar__2_2 = (MR_Integer) 0;
#line 140 "bool.m"
  }
#line 61 "bool.m"
}

#line 60 "bool.m"
MR_Word MR_CALL 
mercury__bool__not_1_f_0(
#line 60 "bool.m"
  MR_Word mercury__bool__X_3)
#line 60 "bool.m"
{
#line 140 "bool.m"
  {
#line 140 "bool.m"
    MR_bool mercury__bool__succeeded;
#line 140 "bool.m"
    MR_Word mercury__bool__Result_4;

#line 140 "bool.m"
    if ((mercury__bool__X_3 == (MR_Integer) 0))
#line 140 "bool.m"
      mercury__bool__Result_4 = (MR_Integer) 1;
#line 140 "bool.m"
    else
#line 141 "bool.m"
      mercury__bool__Result_4 = (MR_Integer) 0;
#line 140 "bool.m"
    return mercury__bool__Result_4;
#line 140 "bool.m"
  }
#line 60 "bool.m"
}

#line 56 "bool.m"
void MR_CALL 
mercury__bool__and_list_2_p_0(
#line 56 "bool.m"
  MR_Word mercury__bool__HeadVar__1_1,
#line 56 "bool.m"
  MR_Word * mercury__bool__HeadVar__2_2)
#line 56 "bool.m"
{
#line 128 "bool.m"
  while (MR_TRUE)
#line 128 "bool.m"
    {
#line 128 "bool.m"
      /* tailcall optimized into a loop */
#line 128 "bool.m"
      {
#line 128 "bool.m"
        MR_bool mercury__bool__succeeded;

#line 128 "bool.m"
        if ((mercury__bool__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 128 "bool.m"
          *mercury__bool__HeadVar__2_2 = (MR_Integer) 1;
#line 128 "bool.m"
        else
#line 129 "bool.m"
          {
#line 129 "bool.m"
            MR_Word mercury__bool__Bool_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bool__HeadVar__1_1, (MR_Integer) 0)));
#line 129 "bool.m"
            MR_Word mercury__bool__Bools_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bool__HeadVar__1_1, (MR_Integer) 1)));

#line 133 "bool.m"
            if ((mercury__bool__Bool_3 == (MR_Integer) 0))
#line 132 "bool.m"
              *mercury__bool__HeadVar__2_2 = (MR_Integer) 0;
#line 133 "bool.m"
            else
#line 135 "bool.m"
              {
#line 135 "bool.m"
                /* direct tailcall eliminated */
#line 135 "bool.m"
                {
#line 135 "bool.m"
                  MR_Word mercury__bool__HeadVar__1__tmp_copy_1 = mercury__bool__Bools_4;

#line 135 "bool.m"
                  mercury__bool__HeadVar__1_1 = mercury__bool__HeadVar__1__tmp_copy_1;
#line 135 "bool.m"
                }
#line 135 "bool.m"
                continue;
#line 135 "bool.m"
              }
#line 129 "bool.m"
          }
#line 128 "bool.m"
      }
#line 128 "bool.m"
      break;
#line 128 "bool.m"
    }
#line 56 "bool.m"
}

#line 55 "bool.m"
MR_Word MR_CALL 
mercury__bool__and_list_1_f_0(
#line 55 "bool.m"
  MR_Word mercury__bool__List_3)
#line 55 "bool.m"
{
#line 126 "bool.m"
  {
#line 126 "bool.m"
    MR_bool mercury__bool__succeeded;
#line 126 "bool.m"
    MR_Word mercury__bool__Result_4;

#line 126 "bool.m"
    {
#line 126 "bool.m"
      mercury__bool__and_list_2_p_0(mercury__bool__List_3, &mercury__bool__Result_4);
    }
#line 126 "bool.m"
    return mercury__bool__Result_4;
#line 126 "bool.m"
  }
#line 55 "bool.m"
}

#line 50 "bool.m"
void MR_CALL 
mercury__bool__and_3_p_0(
#line 50 "bool.m"
  MR_Word mercury__bool__HeadVar__1_1,
#line 50 "bool.m"
  MR_Word mercury__bool__Bool_2,
#line 50 "bool.m"
  MR_Word * mercury__bool__HeadVar__3_3)
#line 50 "bool.m"
{
#line 123 "bool.m"
  {
#line 123 "bool.m"
    MR_bool mercury__bool__succeeded;

#line 123 "bool.m"
    if ((mercury__bool__HeadVar__1_1 == (MR_Integer) 0))
#line 123 "bool.m"
      *mercury__bool__HeadVar__3_3 = (MR_Integer) 0;
#line 123 "bool.m"
    else
#line 124 "bool.m"
      *mercury__bool__HeadVar__3_3 = mercury__bool__Bool_2;
#line 123 "bool.m"
  }
#line 50 "bool.m"
}

#line 49 "bool.m"
MR_Word MR_CALL 
mercury__bool__and_2_f_0(
#line 49 "bool.m"
  MR_Word mercury__bool__X_4,
#line 49 "bool.m"
  MR_Word mercury__bool__Y_5)
#line 49 "bool.m"
{
#line 123 "bool.m"
  {
#line 123 "bool.m"
    MR_bool mercury__bool__succeeded;
#line 123 "bool.m"
    MR_Word mercury__bool__Result_6;

#line 123 "bool.m"
    if ((mercury__bool__X_4 == (MR_Integer) 0))
#line 123 "bool.m"
      mercury__bool__Result_6 = (MR_Integer) 0;
#line 123 "bool.m"
    else
#line 124 "bool.m"
      mercury__bool__Result_6 = mercury__bool__Y_5;
#line 123 "bool.m"
    return mercury__bool__Result_6;
#line 123 "bool.m"
  }
#line 49 "bool.m"
}

#line 45 "bool.m"
void MR_CALL 
mercury__bool__or_list_2_p_0(
#line 45 "bool.m"
  MR_Word mercury__bool__HeadVar__1_1,
#line 45 "bool.m"
  MR_Word * mercury__bool__HeadVar__2_2)
#line 45 "bool.m"
{
#line 111 "bool.m"
  while (MR_TRUE)
#line 111 "bool.m"
    {
#line 111 "bool.m"
      /* tailcall optimized into a loop */
#line 111 "bool.m"
      {
#line 111 "bool.m"
        MR_bool mercury__bool__succeeded;

#line 111 "bool.m"
        if ((mercury__bool__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 111 "bool.m"
          *mercury__bool__HeadVar__2_2 = (MR_Integer) 0;
#line 111 "bool.m"
        else
#line 112 "bool.m"
          {
#line 112 "bool.m"
            MR_Word mercury__bool__Bool_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bool__HeadVar__1_1, (MR_Integer) 0)));
#line 112 "bool.m"
            MR_Word mercury__bool__Bools_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__bool__HeadVar__1_1, (MR_Integer) 1)));

#line 116 "bool.m"
            if ((mercury__bool__Bool_3 == (MR_Integer) 0))
#line 118 "bool.m"
              {
#line 118 "bool.m"
                /* direct tailcall eliminated */
#line 118 "bool.m"
                {
#line 118 "bool.m"
                  MR_Word mercury__bool__HeadVar__1__tmp_copy_1 = mercury__bool__Bools_4;

#line 118 "bool.m"
                  mercury__bool__HeadVar__1_1 = mercury__bool__HeadVar__1__tmp_copy_1;
#line 118 "bool.m"
                }
#line 118 "bool.m"
                continue;
#line 118 "bool.m"
              }
#line 116 "bool.m"
            else
#line 115 "bool.m"
              *mercury__bool__HeadVar__2_2 = (MR_Integer) 1;
#line 112 "bool.m"
          }
#line 111 "bool.m"
      }
#line 111 "bool.m"
      break;
#line 111 "bool.m"
    }
#line 45 "bool.m"
}

#line 44 "bool.m"
MR_Word MR_CALL 
mercury__bool__or_list_1_f_0(
#line 44 "bool.m"
  MR_Word mercury__bool__List_3)
#line 44 "bool.m"
{
#line 109 "bool.m"
  {
#line 109 "bool.m"
    MR_bool mercury__bool__succeeded;
#line 109 "bool.m"
    MR_Word mercury__bool__Result_4;

#line 109 "bool.m"
    {
#line 109 "bool.m"
      mercury__bool__or_list_2_p_0(mercury__bool__List_3, &mercury__bool__Result_4);
    }
#line 109 "bool.m"
    return mercury__bool__Result_4;
#line 109 "bool.m"
  }
#line 44 "bool.m"
}

#line 39 "bool.m"
void MR_CALL 
mercury__bool__or_3_p_0(
#line 39 "bool.m"
  MR_Word mercury__bool__HeadVar__1_1,
#line 39 "bool.m"
  MR_Word mercury__bool__Bool_2,
#line 39 "bool.m"
  MR_Word * mercury__bool__HeadVar__3_3)
#line 39 "bool.m"
{
#line 106 "bool.m"
  {
#line 106 "bool.m"
    MR_bool mercury__bool__succeeded;

#line 106 "bool.m"
    if ((mercury__bool__HeadVar__1_1 == (MR_Integer) 0))
#line 107 "bool.m"
      *mercury__bool__HeadVar__3_3 = mercury__bool__Bool_2;
#line 106 "bool.m"
    else
#line 106 "bool.m"
      *mercury__bool__HeadVar__3_3 = (MR_Integer) 1;
#line 106 "bool.m"
  }
#line 39 "bool.m"
}

#line 38 "bool.m"
MR_Word MR_CALL 
mercury__bool__or_2_f_0(
#line 38 "bool.m"
  MR_Word mercury__bool__X_4,
#line 38 "bool.m"
  MR_Word mercury__bool__Y_5)
#line 38 "bool.m"
{
#line 106 "bool.m"
  {
#line 106 "bool.m"
    MR_bool mercury__bool__succeeded;
#line 106 "bool.m"
    MR_Word mercury__bool__Result_6;

#line 106 "bool.m"
    if ((mercury__bool__X_4 == (MR_Integer) 0))
#line 107 "bool.m"
      mercury__bool__Result_6 = mercury__bool__Y_5;
#line 106 "bool.m"
    else
#line 106 "bool.m"
      mercury__bool__Result_6 = (MR_Integer) 1;
#line 106 "bool.m"
    return mercury__bool__Result_6;
#line 106 "bool.m"
  }
#line 38 "bool.m"
}

void mercury__bool__init(void)
{
}

void mercury__bool__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__bool__bool__type_ctor_info_bool_0);
}

void mercury__bool__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module bool. */
