/*
** Automatically generated from `pair.m'
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


/* :- module pair. */
/* :- implementation. */

/*
INIT mercury__pair__init
ENDINIT
*/

#include "pair.mih"


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




#line 85 "pair.c"
static const MR_PseudoTypeInfo mercury__pair__pair__field_types_pair_2_0[2];

#line 88 "pair.c"
static const MR_DuFunctorDesc mercury__pair__pair__du_functor_desc_pair_2_0;

#line 91 "pair.c"
static const MR_DuFunctorDescPtr mercury__pair__pair__du_stag_ordered_pair_2_0[1];

#line 94 "pair.c"
static const MR_DuPtagLayout mercury__pair__pair__du_ptag_ordered_pair_2[1];

#line 97 "pair.c"
static const MR_DuFunctorDescPtr mercury__pair__pair__du_name_ordered_pair_2[1];

#line 100 "pair.c"
static const MR_Integer mercury__pair__pair__functor_number_map_pair_2[1];

#line 103 "pair.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__pair__pair__pti_pair_2__pseudo_1__pseudo_1;

#line 106 "pair.c"
static MR_bool MR_CALL 
mercury__pair____Unify____pair_2_0_10001(
#line 109 "pair.c"
  MR_Box mercury__pair__wrapper_arg_1,
#line 111 "pair.c"
  MR_Box mercury__pair__wrapper_arg_2,
#line 113 "pair.c"
  MR_Box mercury__pair__wrapper_arg_3,
#line 115 "pair.c"
  MR_Box mercury__pair__wrapper_arg_4);

#line 118 "pair.c"
static void MR_CALL 
mercury__pair____Compare____pair_2_0_10001(
#line 121 "pair.c"
  MR_Box mercury__pair__wrapper_arg_1,
#line 123 "pair.c"
  MR_Box mercury__pair__wrapper_arg_2,
#line 125 "pair.c"
  MR_Box * mercury__pair__wrapper_arg_3,
#line 127 "pair.c"
  MR_Box mercury__pair__wrapper_arg_4,
#line 129 "pair.c"
  MR_Box mercury__pair__wrapper_arg_5);

#line 132 "pair.c"
static MR_bool MR_CALL 
mercury__pair____Unify____pair_1_0_10001(
#line 135 "pair.c"
  MR_Box mercury__pair__wrapper_arg_1,
#line 137 "pair.c"
  MR_Box mercury__pair__wrapper_arg_2,
#line 139 "pair.c"
  MR_Box mercury__pair__wrapper_arg_3);

#line 142 "pair.c"
static void MR_CALL 
mercury__pair____Compare____pair_1_0_10001(
#line 145 "pair.c"
  MR_Box mercury__pair__wrapper_arg_1,
#line 147 "pair.c"
  MR_Box * mercury__pair__wrapper_arg_2,
#line 149 "pair.c"
  MR_Box mercury__pair__wrapper_arg_3,
#line 151 "pair.c"
  MR_Box mercury__pair__wrapper_arg_4);

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__pair__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);


static /* final */ const MR_Box mercury__pair_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__pair_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__pair_scalar_common_3[2][5];




static /* final */ const MR_Box mercury__pair_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__pair_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__pair_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__pair_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__pair_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__pair_scalar_common_2[0])),
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



#line 520 "pair.c"
static const MR_PseudoTypeInfo mercury__pair__pair__field_types_pair_2_0[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 2
};

#line 526 "pair.c"
static const MR_DuFunctorDesc mercury__pair__pair__du_functor_desc_pair_2_0 = {
  (MR_String) "-",
  (MR_Integer) 2,
  (MR_Integer) 3,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__pair__pair__field_types_pair_2_0,
  NULL,
  NULL,
  NULL
};

#line 541 "pair.c"
static const MR_DuFunctorDescPtr mercury__pair__pair__du_stag_ordered_pair_2_0[1] = {
  &mercury__pair__pair__du_functor_desc_pair_2_0
};

#line 546 "pair.c"
static const MR_DuPtagLayout mercury__pair__pair__du_ptag_ordered_pair_2[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__pair__pair__du_stag_ordered_pair_2_0
  }
};

#line 555 "pair.c"
static const MR_DuFunctorDescPtr mercury__pair__pair__du_name_ordered_pair_2[1] = {
  &mercury__pair__pair__du_functor_desc_pair_2_0
};

#line 560 "pair.c"
static const MR_Integer mercury__pair__pair__functor_number_map_pair_2[1] = {
  (MR_Integer) 0
};

#line 565 "pair.c"
const MR_TypeCtorInfo_Struct mercury__pair__pair__type_ctor_info_pair_2 = {
  (MR_Integer) 2,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__pair____Unify____pair_2_0_10001)),
  ((MR_Box) (mercury__pair____Compare____pair_2_0_10001)),
  (MR_String) "pair",
  (MR_String) "pair",
  {
    mercury__pair__pair__du_name_ordered_pair_2
  },
  {
    mercury__pair__pair__du_ptag_ordered_pair_2
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__pair__pair__functor_number_map_pair_2
};

#line 586 "pair.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__pair__pair__pti_pair_2__pseudo_1__pseudo_1 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 595 "pair.c"
const MR_TypeCtorInfo_Struct mercury__pair__pair__type_ctor_info_pair_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__pair____Unify____pair_1_0_10001)),
  ((MR_Box) (mercury__pair____Compare____pair_1_0_10001)),
  (MR_String) "pair",
  (MR_String) "pair",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__pair__pair__pti_pair_2__pseudo_1__pseudo_1
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 616 "pair.c"
static MR_bool MR_CALL 
mercury__pair____Unify____pair_2_0_10001(
#line 619 "pair.c"
  MR_Box mercury__pair__wrapper_arg_1,
#line 621 "pair.c"
  MR_Box mercury__pair__wrapper_arg_2,
#line 623 "pair.c"
  MR_Box mercury__pair__wrapper_arg_3,
#line 625 "pair.c"
  MR_Box mercury__pair__wrapper_arg_4)
#line 627 "pair.c"
{
#line 629 "pair.c"
  {
#line 631 "pair.c"
    MR_bool mercury__pair__succeeded;

#line 634 "pair.c"
    {
#line 636 "pair.c"
      mercury__pair__succeeded = mercury__pair____Unify____pair_2_0(((MR_Word) mercury__pair__wrapper_arg_1), ((MR_Word) mercury__pair__wrapper_arg_2), ((MR_Word) mercury__pair__wrapper_arg_3), ((MR_Word) mercury__pair__wrapper_arg_4));
    }
#line 639 "pair.c"
    return mercury__pair__succeeded;
#line 641 "pair.c"
  }
#line 643 "pair.c"
}

#line 646 "pair.c"
static void MR_CALL 
mercury__pair____Compare____pair_2_0_10001(
#line 649 "pair.c"
  MR_Box mercury__pair__wrapper_arg_1,
#line 651 "pair.c"
  MR_Box mercury__pair__wrapper_arg_2,
#line 653 "pair.c"
  MR_Box * mercury__pair__wrapper_arg_3,
#line 655 "pair.c"
  MR_Box mercury__pair__wrapper_arg_4,
#line 657 "pair.c"
  MR_Box mercury__pair__wrapper_arg_5)
#line 659 "pair.c"
{
#line 661 "pair.c"
  {
#line 663 "pair.c"
    MR_Word mercury__pair__conv0_HeadVar__1_1;

#line 666 "pair.c"
    {
#line 668 "pair.c"
      mercury__pair____Compare____pair_2_0(((MR_Word) mercury__pair__wrapper_arg_1), ((MR_Word) mercury__pair__wrapper_arg_2), &mercury__pair__conv0_HeadVar__1_1, ((MR_Word) mercury__pair__wrapper_arg_4), ((MR_Word) mercury__pair__wrapper_arg_5));
    }
#line 671 "pair.c"
    *mercury__pair__wrapper_arg_3 = ((MR_Box) (mercury__pair__conv0_HeadVar__1_1));
#line 673 "pair.c"
  }
#line 675 "pair.c"
}

#line 678 "pair.c"
static MR_bool MR_CALL 
mercury__pair____Unify____pair_1_0_10001(
#line 681 "pair.c"
  MR_Box mercury__pair__wrapper_arg_1,
#line 683 "pair.c"
  MR_Box mercury__pair__wrapper_arg_2,
#line 685 "pair.c"
  MR_Box mercury__pair__wrapper_arg_3)
#line 687 "pair.c"
{
#line 689 "pair.c"
  {
#line 691 "pair.c"
    MR_bool mercury__pair__succeeded;

#line 694 "pair.c"
    {
#line 696 "pair.c"
      mercury__pair__succeeded = mercury__pair____Unify____pair_1_0(((MR_Word) mercury__pair__wrapper_arg_1), ((MR_Word) mercury__pair__wrapper_arg_2), ((MR_Word) mercury__pair__wrapper_arg_3));
    }
#line 699 "pair.c"
    return mercury__pair__succeeded;
#line 701 "pair.c"
  }
#line 703 "pair.c"
}

#line 706 "pair.c"
static void MR_CALL 
mercury__pair____Compare____pair_1_0_10001(
#line 709 "pair.c"
  MR_Box mercury__pair__wrapper_arg_1,
#line 711 "pair.c"
  MR_Box * mercury__pair__wrapper_arg_2,
#line 713 "pair.c"
  MR_Box mercury__pair__wrapper_arg_3,
#line 715 "pair.c"
  MR_Box mercury__pair__wrapper_arg_4)
#line 717 "pair.c"
{
#line 719 "pair.c"
  {
#line 721 "pair.c"
    MR_Word mercury__pair__conv0_HeadVar__1_1;

#line 724 "pair.c"
    {
#line 726 "pair.c"
      mercury__pair____Compare____pair_1_0(((MR_Word) mercury__pair__wrapper_arg_1), &mercury__pair__conv0_HeadVar__1_1, ((MR_Word) mercury__pair__wrapper_arg_3), ((MR_Word) mercury__pair__wrapper_arg_4));
    }
#line 729 "pair.c"
    *mercury__pair__wrapper_arg_2 = ((MR_Box) (mercury__pair__conv0_HeadVar__1_1));
#line 731 "pair.c"
  }
#line 733 "pair.c"
}

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__pair__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 13 "ops.opt"
{
#line 38 "ops.opt"
  {
#line 38 "ops.opt"
    MR_bool mercury__pair__succeeded;

#line 38 "ops.opt"
    return (MR_Integer) 1200;
#line 38 "ops.opt"
  }
#line 13 "ops.opt"
}

#line 21 "pair.m"
void MR_CALL 
mercury__pair____Compare____pair_2_0(
#line 21 "pair.m"
  MR_Word mercury__pair__TypeInfo_for_T1_11,
#line 21 "pair.m"
  MR_Word mercury__pair__TypeInfo_for_T2_12,
#line 21 "pair.m"
  MR_Word * mercury__pair__HeadVar__1_1,
#line 21 "pair.m"
  MR_Word mercury__pair__HeadVar__2_2,
#line 21 "pair.m"
  MR_Word mercury__pair__HeadVar__3_3)
#line 21 "pair.m"
{
#line 21 "pair.m"
  {
#line 21 "pair.m"
    MR_bool mercury__pair__succeeded;
#line 21 "pair.m"
    MR_Integer mercury__pair__CastX_9 = (MR_Integer) mercury__pair__HeadVar__2_2;
#line 21 "pair.m"
    MR_Integer mercury__pair__CastY_10 = (MR_Integer) mercury__pair__HeadVar__3_3;

#line 21 "pair.m"
    mercury__pair__succeeded = (mercury__pair__CastX_9 == mercury__pair__CastY_10);
#line 21 "pair.m"
    if (mercury__pair__succeeded)
#line 781 "pair.c"
      *mercury__pair__HeadVar__1_1 = (MR_Integer) 0;
#line 21 "pair.m"
    else
#line 21 "pair.m"
      {
#line 21 "pair.m"
        MR_Box mercury__pair__V_4_4 = (MR_hl_field(MR_mktag(0), mercury__pair__HeadVar__2_2, (MR_Integer) 0));
#line 21 "pair.m"
        MR_Box mercury__pair__V_5_5 = (MR_hl_field(MR_mktag(0), mercury__pair__HeadVar__2_2, (MR_Integer) 1));
#line 21 "pair.m"
        MR_Box mercury__pair__V_6_6 = (MR_hl_field(MR_mktag(0), mercury__pair__HeadVar__3_3, (MR_Integer) 0));
#line 21 "pair.m"
        MR_Box mercury__pair__V_7_7 = (MR_hl_field(MR_mktag(0), mercury__pair__HeadVar__3_3, (MR_Integer) 1));
#line 21 "pair.m"
        MR_Word mercury__pair__V_8_8;

#line 21 "pair.m"
        {
#line 21 "pair.m"
          mercury__builtin__compare_3_p_0(mercury__pair__TypeInfo_for_T1_11, &mercury__pair__V_8_8, mercury__pair__V_4_4, mercury__pair__V_6_6);
        }
#line 803 "pair.c"
        mercury__pair__succeeded = (mercury__pair__V_8_8 == (MR_Integer) 0);
#line 21 "pair.m"
        mercury__pair__succeeded = !(mercury__pair__succeeded);
#line 21 "pair.m"
        if (mercury__pair__succeeded)
#line 21 "pair.m"
          *mercury__pair__HeadVar__1_1 = mercury__pair__V_8_8;
#line 21 "pair.m"
        else
#line 21 "pair.m"
          {
#line 21 "pair.m"
            mercury__builtin__compare_3_p_0(mercury__pair__TypeInfo_for_T2_12, mercury__pair__HeadVar__1_1, mercury__pair__V_5_5, mercury__pair__V_7_7);
#line 21 "pair.m"
            return;
          }
#line 21 "pair.m"
      }
#line 21 "pair.m"
  }
#line 21 "pair.m"
}

#line 21 "pair.m"
MR_bool MR_CALL 
mercury__pair____Unify____pair_2_0(
#line 21 "pair.m"
  MR_Word mercury__pair__TypeInfo_for_T1_9,
#line 21 "pair.m"
  MR_Word mercury__pair__TypeInfo_for_T2_10,
#line 21 "pair.m"
  MR_Word mercury__pair__HeadVar__1_1,
#line 21 "pair.m"
  MR_Word mercury__pair__HeadVar__2_2)
#line 21 "pair.m"
{
#line 21 "pair.m"
  {
#line 21 "pair.m"
    MR_bool mercury__pair__succeeded;
#line 21 "pair.m"
    MR_Integer mercury__pair__CastX_7 = (MR_Integer) mercury__pair__HeadVar__1_1;
#line 21 "pair.m"
    MR_Integer mercury__pair__CastY_8 = (MR_Integer) mercury__pair__HeadVar__2_2;

#line 21 "pair.m"
    mercury__pair__succeeded = (mercury__pair__CastX_7 == mercury__pair__CastY_8);
#line 21 "pair.m"
    if (mercury__pair__succeeded)
#line 21 "pair.m"
      mercury__pair__succeeded = MR_TRUE;
#line 21 "pair.m"
    else
#line 21 "pair.m"
      {
#line 21 "pair.m"
        MR_Box mercury__pair__V_3_3 = (MR_hl_field(MR_mktag(0), mercury__pair__HeadVar__1_1, (MR_Integer) 0));
#line 21 "pair.m"
        MR_Box mercury__pair__V_4_4 = (MR_hl_field(MR_mktag(0), mercury__pair__HeadVar__1_1, (MR_Integer) 1));
#line 21 "pair.m"
        MR_Box mercury__pair__V_5_5 = (MR_hl_field(MR_mktag(0), mercury__pair__HeadVar__2_2, (MR_Integer) 0));
#line 21 "pair.m"
        MR_Box mercury__pair__V_6_6 = (MR_hl_field(MR_mktag(0), mercury__pair__HeadVar__2_2, (MR_Integer) 1));

#line 868 "pair.c"
        {
#line 870 "pair.c"
          mercury__pair__succeeded = mercury__builtin__unify_2_p_0(mercury__pair__TypeInfo_for_T1_9, mercury__pair__V_3_3, mercury__pair__V_5_5);
        }
#line 21 "pair.m"
        if (mercury__pair__succeeded)
#line 875 "pair.c"
          {
#line 877 "pair.c"
            return mercury__pair__succeeded = mercury__builtin__unify_2_p_0(mercury__pair__TypeInfo_for_T2_10, mercury__pair__V_4_4, mercury__pair__V_6_6);
          }
#line 21 "pair.m"
      }
#line 21 "pair.m"
    return mercury__pair__succeeded;
#line 21 "pair.m"
  }
#line 21 "pair.m"
}

#line 23 "pair.m"
void MR_CALL 
mercury__pair____Compare____pair_1_0(
#line 23 "pair.m"
  MR_Word mercury__pair__TypeInfo_for_T_6,
#line 23 "pair.m"
  MR_Word * mercury__pair__HeadVar__1_1,
#line 23 "pair.m"
  MR_Word mercury__pair__HeadVar__2_2,
#line 23 "pair.m"
  MR_Word mercury__pair__HeadVar__3_3)
#line 23 "pair.m"
{
#line 23 "pair.m"
  {
#line 23 "pair.m"
    MR_bool mercury__pair__succeeded;
#line 23 "pair.m"
    MR_Word mercury__pair__Cast_HeadVar1_4 = mercury__pair__HeadVar__2_2;
#line 23 "pair.m"
    MR_Word mercury__pair__Cast_HeadVar2_5 = mercury__pair__HeadVar__3_3;

#line 23 "pair.m"
    {
#line 23 "pair.m"
      mercury__pair____Compare____pair_2_0(mercury__pair__TypeInfo_for_T_6, mercury__pair__TypeInfo_for_T_6, mercury__pair__HeadVar__1_1, mercury__pair__Cast_HeadVar1_4, mercury__pair__Cast_HeadVar2_5);
#line 23 "pair.m"
      return;
    }
#line 23 "pair.m"
  }
#line 23 "pair.m"
}

#line 23 "pair.m"
MR_bool MR_CALL 
mercury__pair____Unify____pair_1_0(
#line 23 "pair.m"
  MR_Word mercury__pair__TypeInfo_for_T_5,
#line 23 "pair.m"
  MR_Word mercury__pair__HeadVar__1_1,
#line 23 "pair.m"
  MR_Word mercury__pair__HeadVar__2_2)
#line 23 "pair.m"
{
#line 23 "pair.m"
  {
#line 23 "pair.m"
    MR_bool mercury__pair__succeeded;
#line 23 "pair.m"
    MR_Word mercury__pair__Cast_HeadVar1_3 = mercury__pair__HeadVar__1_1;
#line 23 "pair.m"
    MR_Word mercury__pair__Cast_HeadVar2_4 = mercury__pair__HeadVar__2_2;

#line 23 "pair.m"
    {
#line 23 "pair.m"
      return mercury__pair__succeeded = mercury__pair____Unify____pair_2_0(mercury__pair__TypeInfo_for_T_5, mercury__pair__TypeInfo_for_T_5, mercury__pair__Cast_HeadVar1_3, mercury__pair__Cast_HeadVar2_4);
    }
#line 23 "pair.m"
    return mercury__pair__succeeded;
#line 23 "pair.m"
  }
#line 23 "pair.m"
}

#line 39 "pair.m"
MR_Word MR_CALL 
mercury__pair__pair_2_f_0(
#line 39 "pair.m"
  MR_Word mercury__pair__TypeInfo_for_T1_6,
#line 39 "pair.m"
  MR_Word mercury__pair__TypeInfo_for_T2_7,
#line 39 "pair.m"
  MR_Box mercury__pair__X_4,
#line 39 "pair.m"
  MR_Box mercury__pair__Y_5)
#line 39 "pair.m"
{
#line 54 "pair.m"
  {
#line 54 "pair.m"
    MR_bool mercury__pair__succeeded;
#line 54 "pair.m"
    MR_Word mercury__pair__HeadVar__3_3;

#line 54 "pair.m"
    {
#line 54 "pair.m"
      mercury__pair__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 54 "pair.m"
      MR_hl_field(MR_mktag(0), mercury__pair__HeadVar__3_3, 0) = mercury__pair__X_4;
#line 54 "pair.m"
      MR_hl_field(MR_mktag(0), mercury__pair__HeadVar__3_3, 1) = mercury__pair__Y_5;
#line 54 "pair.m"
    }
#line 54 "pair.m"
    return mercury__pair__HeadVar__3_3;
#line 54 "pair.m"
  }
#line 39 "pair.m"
}

#line 37 "pair.m"
void MR_CALL 
mercury__pair__snd_2_p_0(
#line 37 "pair.m"
  MR_Word mercury__pair__TypeInfo_for_X_5,
#line 37 "pair.m"
  MR_Word mercury__pair__TypeInfo_for_Y_6,
#line 37 "pair.m"
  MR_Word mercury__pair__P_3,
#line 37 "pair.m"
  MR_Box * mercury__pair__X_4)
#line 37 "pair.m"
{
#line 50 "pair.m"
  {
#line 50 "pair.m"
    MR_bool mercury__pair__succeeded;
#line 50 "pair.m"
    MR_Box mercury__pair___X_8 = (MR_hl_field(MR_mktag(0), mercury__pair__P_3, (MR_Integer) 0));

#line 50 "pair.m"
    *mercury__pair__X_4 = (MR_hl_field(MR_mktag(0), mercury__pair__P_3, (MR_Integer) 1));
#line 50 "pair.m"
  }
#line 37 "pair.m"
}

#line 36 "pair.m"
MR_Box MR_CALL 
mercury__pair__snd_1_f_0(
#line 36 "pair.m"
  MR_Word mercury__pair__TypeInfo_for_X_5,
#line 36 "pair.m"
  MR_Word mercury__pair__TypeInfo_for_Y_6,
#line 36 "pair.m"
  MR_Word mercury__pair__HeadVar__1_1)
#line 36 "pair.m"
{
#line 50 "pair.m"
  {
#line 50 "pair.m"
    MR_bool mercury__pair__succeeded;
#line 50 "pair.m"
    MR_Box mercury__pair__Y_4 = (MR_hl_field(MR_mktag(0), mercury__pair__HeadVar__1_1, (MR_Integer) 1));
#line 50 "pair.m"
    MR_Box mercury__pair___X_3 = (MR_hl_field(MR_mktag(0), mercury__pair__HeadVar__1_1, (MR_Integer) 0));

#line 50 "pair.m"
    return mercury__pair__Y_4;
#line 50 "pair.m"
  }
#line 36 "pair.m"
}

#line 32 "pair.m"
void MR_CALL 
mercury__pair__fst_2_p_0(
#line 32 "pair.m"
  MR_Word mercury__pair__TypeInfo_for_X_5,
#line 32 "pair.m"
  MR_Word mercury__pair__TypeInfo_for_Y_6,
#line 32 "pair.m"
  MR_Word mercury__pair__P_3,
#line 32 "pair.m"
  MR_Box * mercury__pair__X_4)
#line 32 "pair.m"
{
#line 46 "pair.m"
  {
#line 46 "pair.m"
    MR_bool mercury__pair__succeeded;
#line 46 "pair.m"
    MR_Box mercury__pair___Y_8;

#line 46 "pair.m"
    *mercury__pair__X_4 = (MR_hl_field(MR_mktag(0), mercury__pair__P_3, (MR_Integer) 0));
#line 46 "pair.m"
    mercury__pair___Y_8 = (MR_hl_field(MR_mktag(0), mercury__pair__P_3, (MR_Integer) 1));
#line 46 "pair.m"
  }
#line 32 "pair.m"
}

#line 31 "pair.m"
MR_Box MR_CALL 
mercury__pair__fst_1_f_0(
#line 31 "pair.m"
  MR_Word mercury__pair__TypeInfo_for_X_5,
#line 31 "pair.m"
  MR_Word mercury__pair__TypeInfo_for_Y_6,
#line 31 "pair.m"
  MR_Word mercury__pair__HeadVar__1_1)
#line 31 "pair.m"
{
#line 46 "pair.m"
  {
#line 46 "pair.m"
    MR_bool mercury__pair__succeeded;
#line 46 "pair.m"
    MR_Box mercury__pair__X_3 = (MR_hl_field(MR_mktag(0), mercury__pair__HeadVar__1_1, (MR_Integer) 0));
#line 46 "pair.m"
    MR_Box mercury__pair___Y_4 = (MR_hl_field(MR_mktag(0), mercury__pair__HeadVar__1_1, (MR_Integer) 1));

#line 46 "pair.m"
    return mercury__pair__X_3;
#line 46 "pair.m"
  }
#line 31 "pair.m"
}

void mercury__pair__init(void)
{
}

void mercury__pair__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__pair__pair__type_ctor_info_pair_2);
	MR_register_type_ctor_info(&mercury__pair__pair__type_ctor_info_pair_1);
}

void mercury__pair__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module pair. */
