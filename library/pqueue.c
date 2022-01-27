/*
** Automatically generated from `pqueue.m'
** by the Mercury compiler,
** version 13.05.2-beta-2013-10-31, configured for x86_64-apple-darwin12.4.0.
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


/* :- module pqueue. */
/* :- implementation. */

/*
INIT mercury__pqueue__init
ENDINIT
*/

#include "pqueue.mih"


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




#line 86 "pqueue.c"
static const MR_DuFunctorDesc mercury__pqueue__pqueue__du_functor_desc_pqueue_2_0;

#line 89 "pqueue.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__pqueue__pqueue__pti_pqueue_2__pseudo_1__pseudo_2;

#line 92 "pqueue.c"
static const MR_PseudoTypeInfo mercury__pqueue__pqueue__field_types_pqueue_2_1[5];

#line 95 "pqueue.c"
static const MR_DuFunctorDesc mercury__pqueue__pqueue__du_functor_desc_pqueue_2_1;

#line 98 "pqueue.c"
static const MR_DuFunctorDescPtr mercury__pqueue__pqueue__du_stag_ordered_pqueue_2_0[1];

#line 101 "pqueue.c"
static const MR_DuFunctorDescPtr mercury__pqueue__pqueue__du_stag_ordered_pqueue_2_1[1];

#line 104 "pqueue.c"
static const MR_DuPtagLayout mercury__pqueue__pqueue__du_ptag_ordered_pqueue_2[2];

#line 107 "pqueue.c"
static const MR_DuFunctorDescPtr mercury__pqueue__pqueue__du_name_ordered_pqueue_2[2];

#line 110 "pqueue.c"
static const MR_Integer mercury__pqueue__pqueue__functor_number_map_pqueue_2[2];

#line 113 "pqueue.c"
static MR_bool MR_CALL 
mercury__pqueue____Unify____pqueue_2_0_10001(
#line 116 "pqueue.c"
  MR_Box mercury__pqueue__wrapper_arg_1,
#line 118 "pqueue.c"
  MR_Box mercury__pqueue__wrapper_arg_2,
#line 120 "pqueue.c"
  MR_Box mercury__pqueue__wrapper_arg_3,
#line 122 "pqueue.c"
  MR_Box mercury__pqueue__wrapper_arg_4);

#line 125 "pqueue.c"
static void MR_CALL 
mercury__pqueue____Compare____pqueue_2_0_10001(
#line 128 "pqueue.c"
  MR_Box mercury__pqueue__wrapper_arg_1,
#line 130 "pqueue.c"
  MR_Box mercury__pqueue__wrapper_arg_2,
#line 132 "pqueue.c"
  MR_Box * mercury__pqueue__wrapper_arg_3,
#line 134 "pqueue.c"
  MR_Box mercury__pqueue__wrapper_arg_4,
#line 136 "pqueue.c"
  MR_Box mercury__pqueue__wrapper_arg_5);

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__pqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 127 "pqueue.m"
static void MR_CALL 
mercury__pqueue__insert_2_6_p_0(
#line 127 "pqueue.m"
  MR_Word mercury__pqueue__TypeInfo_for_K_48,
#line 127 "pqueue.m"
  MR_Word mercury__pqueue__TypeInfo_for_V_49,
#line 127 "pqueue.m"
  MR_Box mercury__pqueue__K_1,
#line 127 "pqueue.m"
  MR_Box mercury__pqueue__V_2,
#line 127 "pqueue.m"
  MR_Word mercury__pqueue__HeadVar__3_3,
#line 127 "pqueue.m"
  MR_Word mercury__pqueue__HeadVar__4_4,
#line 127 "pqueue.m"
  MR_Word * mercury__pqueue__HeadVar__5_5,
#line 127 "pqueue.m"
  MR_Word * mercury__pqueue__HeadVar__6_6);


static /* final */ const MR_Box mercury__pqueue_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__pqueue_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__pqueue_scalar_common_3[2][5];




static /* final */ const MR_Box mercury__pqueue_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__pqueue_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__pqueue_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__pqueue_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__pqueue_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__pqueue_scalar_common_2[0])),
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
#include "table_builtin.mh"
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



#line 525 "pqueue.c"
static const MR_DuFunctorDesc mercury__pqueue__pqueue__du_functor_desc_pqueue_2_0 = {
  (MR_String) "empty",
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

#line 540 "pqueue.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__pqueue__pqueue__pti_pqueue_2__pseudo_1__pseudo_2 = {
  &mercury__pqueue__pqueue__type_ctor_info_pqueue_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 549 "pqueue.c"
static const MR_PseudoTypeInfo mercury__pqueue__pqueue__field_types_pqueue_2_1[5] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 2,
  (MR_PseudoTypeInfo) &mercury__pqueue__pqueue__pti_pqueue_2__pseudo_1__pseudo_2,
  (MR_PseudoTypeInfo) &mercury__pqueue__pqueue__pti_pqueue_2__pseudo_1__pseudo_2
};

#line 558 "pqueue.c"
static const MR_DuFunctorDesc mercury__pqueue__pqueue__du_functor_desc_pqueue_2_1 = {
  (MR_String) "pqueue",
  (MR_Integer) 5,
  (MR_Integer) 30,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__pqueue__pqueue__field_types_pqueue_2_1,
  NULL,
  NULL,
  NULL
};

#line 573 "pqueue.c"
static const MR_DuFunctorDescPtr mercury__pqueue__pqueue__du_stag_ordered_pqueue_2_0[1] = {
  &mercury__pqueue__pqueue__du_functor_desc_pqueue_2_0
};

#line 578 "pqueue.c"
static const MR_DuFunctorDescPtr mercury__pqueue__pqueue__du_stag_ordered_pqueue_2_1[1] = {
  &mercury__pqueue__pqueue__du_functor_desc_pqueue_2_1
};

#line 583 "pqueue.c"
static const MR_DuPtagLayout mercury__pqueue__pqueue__du_ptag_ordered_pqueue_2[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mercury__pqueue__pqueue__du_stag_ordered_pqueue_2_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__pqueue__pqueue__du_stag_ordered_pqueue_2_1
  }
};

#line 597 "pqueue.c"
static const MR_DuFunctorDescPtr mercury__pqueue__pqueue__du_name_ordered_pqueue_2[2] = {
  &mercury__pqueue__pqueue__du_functor_desc_pqueue_2_0,
  &mercury__pqueue__pqueue__du_functor_desc_pqueue_2_1
};

#line 603 "pqueue.c"
static const MR_Integer mercury__pqueue__pqueue__functor_number_map_pqueue_2[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 609 "pqueue.c"
const MR_TypeCtorInfo_Struct mercury__pqueue__pqueue__type_ctor_info_pqueue_2 = {
  (MR_Integer) 2,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__pqueue____Unify____pqueue_2_0_10001)),
  ((MR_Box) (mercury__pqueue____Compare____pqueue_2_0_10001)),
  (MR_String) "pqueue",
  (MR_String) "pqueue",
  {
    mercury__pqueue__pqueue__du_name_ordered_pqueue_2
  },
  {
    mercury__pqueue__pqueue__du_ptag_ordered_pqueue_2
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__pqueue__pqueue__functor_number_map_pqueue_2
};

#line 630 "pqueue.c"
static MR_bool MR_CALL 
mercury__pqueue____Unify____pqueue_2_0_10001(
#line 633 "pqueue.c"
  MR_Box mercury__pqueue__wrapper_arg_1,
#line 635 "pqueue.c"
  MR_Box mercury__pqueue__wrapper_arg_2,
#line 637 "pqueue.c"
  MR_Box mercury__pqueue__wrapper_arg_3,
#line 639 "pqueue.c"
  MR_Box mercury__pqueue__wrapper_arg_4)
#line 641 "pqueue.c"
{
#line 643 "pqueue.c"
  {
#line 645 "pqueue.c"
    MR_bool mercury__pqueue__succeeded;

#line 648 "pqueue.c"
    {
#line 650 "pqueue.c"
      mercury__pqueue__succeeded = mercury__pqueue____Unify____pqueue_2_0(((MR_Word) mercury__pqueue__wrapper_arg_1), ((MR_Word) mercury__pqueue__wrapper_arg_2), ((MR_Word) mercury__pqueue__wrapper_arg_3), ((MR_Word) mercury__pqueue__wrapper_arg_4));
    }
#line 653 "pqueue.c"
    return mercury__pqueue__succeeded;
#line 655 "pqueue.c"
  }
#line 657 "pqueue.c"
}

#line 660 "pqueue.c"
static void MR_CALL 
mercury__pqueue____Compare____pqueue_2_0_10001(
#line 663 "pqueue.c"
  MR_Box mercury__pqueue__wrapper_arg_1,
#line 665 "pqueue.c"
  MR_Box mercury__pqueue__wrapper_arg_2,
#line 667 "pqueue.c"
  MR_Box * mercury__pqueue__wrapper_arg_3,
#line 669 "pqueue.c"
  MR_Box mercury__pqueue__wrapper_arg_4,
#line 671 "pqueue.c"
  MR_Box mercury__pqueue__wrapper_arg_5)
#line 673 "pqueue.c"
{
#line 675 "pqueue.c"
  {
#line 677 "pqueue.c"
    MR_Word mercury__pqueue__conv0_HeadVar__1_1;

#line 680 "pqueue.c"
    {
#line 682 "pqueue.c"
      mercury__pqueue____Compare____pqueue_2_0(((MR_Word) mercury__pqueue__wrapper_arg_1), ((MR_Word) mercury__pqueue__wrapper_arg_2), &mercury__pqueue__conv0_HeadVar__1_1, ((MR_Word) mercury__pqueue__wrapper_arg_4), ((MR_Word) mercury__pqueue__wrapper_arg_5));
    }
#line 685 "pqueue.c"
    *mercury__pqueue__wrapper_arg_3 = ((MR_Box) (mercury__pqueue__conv0_HeadVar__1_1));
#line 687 "pqueue.c"
  }
#line 689 "pqueue.c"
}

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__pqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 13 "ops.opt"
{
#line 38 "ops.opt"
  {
#line 38 "ops.opt"
    MR_bool mercury__pqueue__succeeded;

#line 38 "ops.opt"
    return (MR_Integer) 1200;
#line 38 "ops.opt"
  }
#line 13 "ops.opt"
}

#line 96 "pqueue.m"
void MR_CALL 
mercury__pqueue____Compare____pqueue_2_0(
#line 96 "pqueue.m"
  MR_Word mercury__pqueue__TypeInfo_for_K_30,
#line 96 "pqueue.m"
  MR_Word mercury__pqueue__TypeInfo_for_V_31,
#line 96 "pqueue.m"
  MR_Word * mercury__pqueue__HeadVar__1_1,
#line 96 "pqueue.m"
  MR_Word mercury__pqueue__HeadVar__2_2,
#line 96 "pqueue.m"
  MR_Word mercury__pqueue__HeadVar__3_3)
#line 96 "pqueue.m"
{
#line 96 "pqueue.m"
  while (MR_TRUE)
#line 96 "pqueue.m"
    {
#line 96 "pqueue.m"
      /* tailcall optimized into a loop */
#line 96 "pqueue.m"
      {
#line 96 "pqueue.m"
        MR_bool mercury__pqueue__succeeded;
#line 96 "pqueue.m"
        MR_Integer mercury__pqueue__CastX_28 = (MR_Integer) mercury__pqueue__HeadVar__2_2;
#line 96 "pqueue.m"
        MR_Integer mercury__pqueue__CastY_29 = (MR_Integer) mercury__pqueue__HeadVar__3_3;

#line 96 "pqueue.m"
        mercury__pqueue__succeeded = (mercury__pqueue__CastX_28 == mercury__pqueue__CastY_29);
#line 96 "pqueue.m"
        if (mercury__pqueue__succeeded)
#line 743 "pqueue.c"
          *mercury__pqueue__HeadVar__1_1 = (MR_Integer) 0;
#line 96 "pqueue.m"
        else
#line 96 "pqueue.m"
          if ((mercury__pqueue__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 96 "pqueue.m"
            if ((mercury__pqueue__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 96 "pqueue.m"
              *mercury__pqueue__HeadVar__1_1 = (MR_Integer) 0;
#line 96 "pqueue.m"
            else
#line 755 "pqueue.c"
              *mercury__pqueue__HeadVar__1_1 = (MR_Integer) 1;
#line 96 "pqueue.m"
          else
#line 96 "pqueue.m"
            {
#line 96 "pqueue.m"
              MR_Word mercury__pqueue__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__2_2, (MR_Integer) 4)));
#line 96 "pqueue.m"
              MR_Word mercury__pqueue__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__2_2, (MR_Integer) 3)));
#line 96 "pqueue.m"
              MR_Box mercury__pqueue__V_39_39 = (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__2_2, (MR_Integer) 2));
#line 96 "pqueue.m"
              MR_Box mercury__pqueue__V_40_40 = (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__2_2, (MR_Integer) 1));
#line 96 "pqueue.m"
              MR_Integer mercury__pqueue__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__2_2, (MR_Integer) 0)));

#line 96 "pqueue.m"
              if ((mercury__pqueue__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 774 "pqueue.c"
                *mercury__pqueue__HeadVar__1_1 = (MR_Integer) 2;
#line 96 "pqueue.m"
              else
#line 96 "pqueue.m"
                {
#line 96 "pqueue.m"
                  MR_Integer mercury__pqueue__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__3_3, (MR_Integer) 0)));
#line 96 "pqueue.m"
                  MR_Box mercury__pqueue__V_20_20 = (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__3_3, (MR_Integer) 1));
#line 96 "pqueue.m"
                  MR_Box mercury__pqueue__V_21_21 = (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__3_3, (MR_Integer) 2));
#line 96 "pqueue.m"
                  MR_Word mercury__pqueue__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__3_3, (MR_Integer) 3)));
#line 96 "pqueue.m"
                  MR_Word mercury__pqueue__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__3_3, (MR_Integer) 4)));
#line 96 "pqueue.m"
                  MR_Word mercury__pqueue__V_24_24;

#line 66 "private_builtin.opt"
                  mercury__pqueue__succeeded = (mercury__pqueue__V_41_41 < mercury__pqueue__V_19_19);
#line 69 "private_builtin.opt"
                  if (mercury__pqueue__succeeded)
#line 68 "private_builtin.opt"
                    mercury__pqueue__V_24_24 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                  else
#line 74 "private_builtin.opt"
                    {
#line 71 "private_builtin.opt"
                      mercury__pqueue__succeeded = (mercury__pqueue__V_41_41 == mercury__pqueue__V_19_19);
#line 74 "private_builtin.opt"
                      if (mercury__pqueue__succeeded)
#line 73 "private_builtin.opt"
                        mercury__pqueue__V_24_24 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                      else
#line 75 "private_builtin.opt"
                        mercury__pqueue__V_24_24 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                    }
#line 815 "pqueue.c"
                  mercury__pqueue__succeeded = (mercury__pqueue__V_24_24 == (MR_Integer) 0);
#line 96 "pqueue.m"
                  mercury__pqueue__succeeded = !(mercury__pqueue__succeeded);
#line 96 "pqueue.m"
                  if (mercury__pqueue__succeeded)
#line 96 "pqueue.m"
                    *mercury__pqueue__HeadVar__1_1 = mercury__pqueue__V_24_24;
#line 96 "pqueue.m"
                  else
#line 96 "pqueue.m"
                    {
#line 96 "pqueue.m"
                      MR_Word mercury__pqueue__V_25_25;

#line 96 "pqueue.m"
                      {
#line 96 "pqueue.m"
                        mercury__builtin__compare_3_p_0(mercury__pqueue__TypeInfo_for_K_30, &mercury__pqueue__V_25_25, mercury__pqueue__V_40_40, mercury__pqueue__V_20_20);
                      }
#line 835 "pqueue.c"
                      mercury__pqueue__succeeded = (mercury__pqueue__V_25_25 == (MR_Integer) 0);
#line 96 "pqueue.m"
                      mercury__pqueue__succeeded = !(mercury__pqueue__succeeded);
#line 96 "pqueue.m"
                      if (mercury__pqueue__succeeded)
#line 96 "pqueue.m"
                        *mercury__pqueue__HeadVar__1_1 = mercury__pqueue__V_25_25;
#line 96 "pqueue.m"
                      else
#line 96 "pqueue.m"
                        {
#line 96 "pqueue.m"
                          MR_Word mercury__pqueue__V_26_26;

#line 96 "pqueue.m"
                          {
#line 96 "pqueue.m"
                            mercury__builtin__compare_3_p_0(mercury__pqueue__TypeInfo_for_V_31, &mercury__pqueue__V_26_26, mercury__pqueue__V_39_39, mercury__pqueue__V_21_21);
                          }
#line 855 "pqueue.c"
                          mercury__pqueue__succeeded = (mercury__pqueue__V_26_26 == (MR_Integer) 0);
#line 96 "pqueue.m"
                          mercury__pqueue__succeeded = !(mercury__pqueue__succeeded);
#line 96 "pqueue.m"
                          if (mercury__pqueue__succeeded)
#line 96 "pqueue.m"
                            *mercury__pqueue__HeadVar__1_1 = mercury__pqueue__V_26_26;
#line 96 "pqueue.m"
                          else
#line 96 "pqueue.m"
                            {
#line 96 "pqueue.m"
                              MR_Word mercury__pqueue__V_27_27;

#line 96 "pqueue.m"
                              {
#line 96 "pqueue.m"
                                mercury__pqueue____Compare____pqueue_2_0(mercury__pqueue__TypeInfo_for_K_30, mercury__pqueue__TypeInfo_for_V_31, &mercury__pqueue__V_27_27, mercury__pqueue__V_38_38, mercury__pqueue__V_22_22);
                              }
#line 875 "pqueue.c"
                              mercury__pqueue__succeeded = (mercury__pqueue__V_27_27 == (MR_Integer) 0);
#line 96 "pqueue.m"
                              mercury__pqueue__succeeded = !(mercury__pqueue__succeeded);
#line 96 "pqueue.m"
                              if (mercury__pqueue__succeeded)
#line 96 "pqueue.m"
                                *mercury__pqueue__HeadVar__1_1 = mercury__pqueue__V_27_27;
#line 96 "pqueue.m"
                              else
#line 96 "pqueue.m"
                                {
#line 96 "pqueue.m"
                                  /* direct tailcall eliminated */
#line 96 "pqueue.m"
                                  {
#line 96 "pqueue.m"
                                    MR_Word mercury__pqueue__HeadVar__2__tmp_copy_2 = mercury__pqueue__V_37_37;
#line 96 "pqueue.m"
                                    MR_Word mercury__pqueue__HeadVar__3__tmp_copy_3 = mercury__pqueue__V_23_23;

#line 96 "pqueue.m"
                                    mercury__pqueue__HeadVar__3_3 = mercury__pqueue__HeadVar__3__tmp_copy_3;
#line 96 "pqueue.m"
                                    mercury__pqueue__HeadVar__2_2 = mercury__pqueue__HeadVar__2__tmp_copy_2;
#line 96 "pqueue.m"
                                  }
#line 96 "pqueue.m"
                                  continue;
#line 96 "pqueue.m"
                                }
#line 96 "pqueue.m"
                            }
#line 96 "pqueue.m"
                        }
#line 96 "pqueue.m"
                    }
#line 96 "pqueue.m"
                }
#line 96 "pqueue.m"
            }
#line 96 "pqueue.m"
      }
#line 96 "pqueue.m"
      break;
#line 96 "pqueue.m"
    }
#line 96 "pqueue.m"
}

#line 96 "pqueue.m"
MR_bool MR_CALL 
mercury__pqueue____Unify____pqueue_2_0(
#line 96 "pqueue.m"
  MR_Word mercury__pqueue__TypeInfo_for_K_17,
#line 96 "pqueue.m"
  MR_Word mercury__pqueue__TypeInfo_for_V_18,
#line 96 "pqueue.m"
  MR_Word mercury__pqueue__HeadVar__1_1,
#line 96 "pqueue.m"
  MR_Word mercury__pqueue__HeadVar__2_2)
#line 96 "pqueue.m"
{
#line 96 "pqueue.m"
  while (MR_TRUE)
#line 96 "pqueue.m"
    {
#line 96 "pqueue.m"
      /* tailcall optimized into a loop */
#line 96 "pqueue.m"
      {
#line 96 "pqueue.m"
        MR_bool mercury__pqueue__succeeded;
#line 96 "pqueue.m"
        MR_Integer mercury__pqueue__CastX_15 = (MR_Integer) mercury__pqueue__HeadVar__1_1;
#line 96 "pqueue.m"
        MR_Integer mercury__pqueue__CastY_16 = (MR_Integer) mercury__pqueue__HeadVar__2_2;

#line 96 "pqueue.m"
        mercury__pqueue__succeeded = (mercury__pqueue__CastX_15 == mercury__pqueue__CastY_16);
#line 96 "pqueue.m"
        if (mercury__pqueue__succeeded)
#line 96 "pqueue.m"
          mercury__pqueue__succeeded = MR_TRUE;
#line 96 "pqueue.m"
        else
#line 96 "pqueue.m"
          if ((mercury__pqueue__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 96 "pqueue.m"
            {
#line 96 "pqueue.m"
              MR_Integer mercury__pqueue__CastX_3 = (MR_Integer) mercury__pqueue__HeadVar__1_1;
#line 96 "pqueue.m"
              MR_Integer mercury__pqueue__CastY_4 = (MR_Integer) mercury__pqueue__HeadVar__2_2;

#line 96 "pqueue.m"
              mercury__pqueue__succeeded = (mercury__pqueue__CastY_4 == mercury__pqueue__CastX_3);
#line 96 "pqueue.m"
            }
#line 96 "pqueue.m"
          else
#line 96 "pqueue.m"
            {
#line 96 "pqueue.m"
              MR_Integer mercury__pqueue__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__1_1, (MR_Integer) 0)));
#line 96 "pqueue.m"
              MR_Box mercury__pqueue__V_6_6 = (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__1_1, (MR_Integer) 1));
#line 96 "pqueue.m"
              MR_Box mercury__pqueue__V_7_7 = (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__1_1, (MR_Integer) 2));
#line 96 "pqueue.m"
              MR_Word mercury__pqueue__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__1_1, (MR_Integer) 3)));
#line 96 "pqueue.m"
              MR_Word mercury__pqueue__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__1_1, (MR_Integer) 4)));
#line 96 "pqueue.m"
              MR_Integer mercury__pqueue__V_10_10;
#line 96 "pqueue.m"
              MR_Box mercury__pqueue__V_11_11;
#line 96 "pqueue.m"
              MR_Box mercury__pqueue__V_12_12;
#line 96 "pqueue.m"
              MR_Word mercury__pqueue__V_13_13;
#line 96 "pqueue.m"
              MR_Word mercury__pqueue__V_14_14;

#line 96 "pqueue.m"
              mercury__pqueue__succeeded = ((MR_tag((MR_Word) mercury__pqueue__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 96 "pqueue.m"
              if (mercury__pqueue__succeeded)
#line 96 "pqueue.m"
                {
#line 96 "pqueue.m"
                  mercury__pqueue__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__2_2, (MR_Integer) 0)));
#line 96 "pqueue.m"
                  mercury__pqueue__V_11_11 = (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__2_2, (MR_Integer) 1));
#line 96 "pqueue.m"
                  mercury__pqueue__V_12_12 = (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__2_2, (MR_Integer) 2));
#line 96 "pqueue.m"
                  mercury__pqueue__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__2_2, (MR_Integer) 3)));
#line 96 "pqueue.m"
                  mercury__pqueue__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__2_2, (MR_Integer) 4)));
#line 1015 "pqueue.c"
                  mercury__pqueue__succeeded = (mercury__pqueue__V_5_5 == mercury__pqueue__V_10_10);
#line 96 "pqueue.m"
                  if (mercury__pqueue__succeeded)
#line 96 "pqueue.m"
                    {
#line 1021 "pqueue.c"
                      {
#line 1023 "pqueue.c"
                        mercury__pqueue__succeeded = mercury__builtin__unify_2_p_0(mercury__pqueue__TypeInfo_for_K_17, mercury__pqueue__V_6_6, mercury__pqueue__V_11_11);
                      }
#line 96 "pqueue.m"
                      if (mercury__pqueue__succeeded)
#line 96 "pqueue.m"
                        {
#line 1030 "pqueue.c"
                          {
#line 1032 "pqueue.c"
                            mercury__pqueue__succeeded = mercury__builtin__unify_2_p_0(mercury__pqueue__TypeInfo_for_V_18, mercury__pqueue__V_7_7, mercury__pqueue__V_12_12);
                          }
#line 96 "pqueue.m"
                          if (mercury__pqueue__succeeded)
#line 96 "pqueue.m"
                            {
#line 1039 "pqueue.c"
                              {
#line 1041 "pqueue.c"
                                mercury__pqueue__succeeded = mercury__pqueue____Unify____pqueue_2_0(mercury__pqueue__TypeInfo_for_K_17, mercury__pqueue__TypeInfo_for_V_18, mercury__pqueue__V_8_8, mercury__pqueue__V_13_13);
                              }
#line 96 "pqueue.m"
                              if (mercury__pqueue__succeeded)
#line 1046 "pqueue.c"
                                {
#line 1048 "pqueue.c"
                                  /* direct tailcall eliminated */
#line 1050 "pqueue.c"
                                  {
#line 1052 "pqueue.c"
                                    MR_Word mercury__pqueue__HeadVar__1__tmp_copy_1 = mercury__pqueue__V_9_9;
#line 1054 "pqueue.c"
                                    MR_Word mercury__pqueue__HeadVar__2__tmp_copy_2 = mercury__pqueue__V_14_14;

#line 1057 "pqueue.c"
                                    mercury__pqueue__HeadVar__2_2 = mercury__pqueue__HeadVar__2__tmp_copy_2;
#line 1059 "pqueue.c"
                                    mercury__pqueue__HeadVar__1_1 = mercury__pqueue__HeadVar__1__tmp_copy_1;
#line 1061 "pqueue.c"
                                  }
#line 1063 "pqueue.c"
                                  continue;
#line 1065 "pqueue.c"
                                }
#line 96 "pqueue.m"
                            }
#line 96 "pqueue.m"
                        }
#line 96 "pqueue.m"
                    }
#line 96 "pqueue.m"
                }
#line 96 "pqueue.m"
            }
#line 96 "pqueue.m"
        return mercury__pqueue__succeeded;
#line 96 "pqueue.m"
      }
#line 96 "pqueue.m"
      break;
#line 96 "pqueue.m"
    }
#line 96 "pqueue.m"
}

#line 158 "pqueue.m"
void MR_CALL 
mercury__pqueue__remove_2_3_p_0(
#line 158 "pqueue.m"
  MR_Word mercury__pqueue__TypeInfo_for_K_36,
#line 158 "pqueue.m"
  MR_Word mercury__pqueue__TypeInfo_for_V_37,
#line 158 "pqueue.m"
  MR_Word mercury__pqueue__HeadVar__1_1,
#line 158 "pqueue.m"
  MR_Word mercury__pqueue__HeadVar__2_2,
#line 158 "pqueue.m"
  MR_Word * mercury__pqueue__HeadVar__3_3)
#line 158 "pqueue.m"
{
#line 161 "pqueue.m"
  {
#line 161 "pqueue.m"
    MR_bool mercury__pqueue__succeeded;

#line 161 "pqueue.m"
    if ((mercury__pqueue__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 161 "pqueue.m"
      if ((mercury__pqueue__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 161 "pqueue.m"
        *mercury__pqueue__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 161 "pqueue.m"
      else
#line 162 "pqueue.m"
        *mercury__pqueue__HeadVar__3_3 = mercury__pqueue__HeadVar__2_2;
#line 161 "pqueue.m"
    else
#line 161 "pqueue.m"
      {
#line 161 "pqueue.m"
        MR_Word mercury__pqueue__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__1_1, (MR_Integer) 4)));
#line 161 "pqueue.m"
        MR_Word mercury__pqueue__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__1_1, (MR_Integer) 3)));
#line 161 "pqueue.m"
        MR_Box mercury__pqueue__V_40_40 = (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__1_1, (MR_Integer) 2));
#line 161 "pqueue.m"
        MR_Box mercury__pqueue__V_41_41 = (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__1_1, (MR_Integer) 1));
#line 161 "pqueue.m"
        MR_Integer mercury__pqueue__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__1_1, (MR_Integer) 0)));

#line 161 "pqueue.m"
        if ((mercury__pqueue__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 163 "pqueue.m"
          *mercury__pqueue__HeadVar__3_3 = mercury__pqueue__HeadVar__1_1;
#line 161 "pqueue.m"
        else
#line 164 "pqueue.m"
          {
#line 164 "pqueue.m"
            MR_Integer mercury__pqueue__D1_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__2_2, (MR_Integer) 0)));
#line 164 "pqueue.m"
            MR_Box mercury__pqueue__K1_20 = (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__2_2, (MR_Integer) 1));
#line 164 "pqueue.m"
            MR_Box mercury__pqueue__V1_21 = (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__2_2, (MR_Integer) 2));
#line 164 "pqueue.m"
            MR_Word mercury__pqueue__L1_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__2_2, (MR_Integer) 3)));
#line 164 "pqueue.m"
            MR_Word mercury__pqueue__R1_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__2_2, (MR_Integer) 4)));
#line 164 "pqueue.m"
            MR_Word mercury__pqueue__CMP_25;

#line 165 "pqueue.m"
            {
#line 165 "pqueue.m"
              mercury__builtin__compare_3_p_0(mercury__pqueue__TypeInfo_for_K_36, &mercury__pqueue__CMP_25, mercury__pqueue__V_41_41, mercury__pqueue__K1_20);
            }
#line 166 "pqueue.m"
            mercury__pqueue__succeeded = (mercury__pqueue__CMP_25 == (MR_Integer) 1);
#line 171 "pqueue.m"
            if (mercury__pqueue__succeeded)
#line 167 "pqueue.m"
              {
#line 167 "pqueue.m"
                MR_Integer mercury__pqueue__D0M1_26 = (mercury__pqueue__V_42_42 - (MR_Integer) 1);
#line 167 "pqueue.m"
                MR_Integer mercury__pqueue__D_27;
#line 167 "pqueue.m"
                MR_Word mercury__pqueue__PQ0_28;

#line 75 "int.opt"
                mercury__pqueue__succeeded = (mercury__pqueue__D0M1_26 > mercury__pqueue__D1_19);
#line 78 "int.opt"
                if (mercury__pqueue__succeeded)
#line 77 "int.opt"
                  mercury__pqueue__D_27 = mercury__pqueue__D0M1_26;
#line 78 "int.opt"
                else
#line 79 "int.opt"
                  mercury__pqueue__D_27 = mercury__pqueue__D1_19;
#line 169 "pqueue.m"
                {
#line 169 "pqueue.m"
                  mercury__pqueue__remove_2_3_p_0(mercury__pqueue__TypeInfo_for_K_36, mercury__pqueue__TypeInfo_for_V_37, mercury__pqueue__V_39_39, mercury__pqueue__V_38_38, &mercury__pqueue__PQ0_28);
                }
#line 170 "pqueue.m"
                {
#line 170 "pqueue.m"
                  MR_Word base;
#line 170 "pqueue.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 170 "pqueue.m"
                  *mercury__pqueue__HeadVar__3_3 = base;
#line 170 "pqueue.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__pqueue__D_27));
#line 170 "pqueue.m"
                  MR_hl_field(MR_mktag(1), base, 1) = mercury__pqueue__V_41_41;
#line 170 "pqueue.m"
                  MR_hl_field(MR_mktag(1), base, 2) = mercury__pqueue__V_40_40;
#line 170 "pqueue.m"
                  MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__pqueue__PQ0_28));
#line 170 "pqueue.m"
                  MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (mercury__pqueue__HeadVar__2_2));
#line 170 "pqueue.m"
                }
#line 167 "pqueue.m"
              }
#line 171 "pqueue.m"
            else
#line 172 "pqueue.m"
              {
#line 172 "pqueue.m"
                MR_Integer mercury__pqueue__D1M1_29 = (mercury__pqueue__V_42_42 - (MR_Integer) 1);
#line 172 "pqueue.m"
                MR_Word mercury__pqueue__PQ1_30;
#line 172 "pqueue.m"
                MR_Integer mercury__pqueue__D_35;

#line 75 "int.opt"
                mercury__pqueue__succeeded = (mercury__pqueue__D1M1_29 > mercury__pqueue__D1_19);
#line 78 "int.opt"
                if (mercury__pqueue__succeeded)
#line 77 "int.opt"
                  mercury__pqueue__D_35 = mercury__pqueue__D1M1_29;
#line 78 "int.opt"
                else
#line 79 "int.opt"
                  mercury__pqueue__D_35 = mercury__pqueue__D1_19;
#line 174 "pqueue.m"
                {
#line 174 "pqueue.m"
                  mercury__pqueue__remove_2_3_p_0(mercury__pqueue__TypeInfo_for_K_36, mercury__pqueue__TypeInfo_for_V_37, mercury__pqueue__L1_22, mercury__pqueue__R1_23, &mercury__pqueue__PQ1_30);
                }
#line 175 "pqueue.m"
                {
#line 175 "pqueue.m"
                  MR_Word base;
#line 175 "pqueue.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 175 "pqueue.m"
                  *mercury__pqueue__HeadVar__3_3 = base;
#line 175 "pqueue.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__pqueue__D_35));
#line 175 "pqueue.m"
                  MR_hl_field(MR_mktag(1), base, 1) = mercury__pqueue__K1_20;
#line 175 "pqueue.m"
                  MR_hl_field(MR_mktag(1), base, 2) = mercury__pqueue__V1_21;
#line 175 "pqueue.m"
                  MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__pqueue__PQ1_30));
#line 175 "pqueue.m"
                  MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (mercury__pqueue__HeadVar__1_1));
#line 175 "pqueue.m"
                }
#line 172 "pqueue.m"
              }
#line 164 "pqueue.m"
          }
#line 161 "pqueue.m"
      }
#line 161 "pqueue.m"
  }
#line 158 "pqueue.m"
}

#line 127 "pqueue.m"
static void MR_CALL 
mercury__pqueue__insert_2_6_p_0(
#line 127 "pqueue.m"
  MR_Word mercury__pqueue__TypeInfo_for_K_48,
#line 127 "pqueue.m"
  MR_Word mercury__pqueue__TypeInfo_for_V_49,
#line 127 "pqueue.m"
  MR_Box mercury__pqueue__K_1,
#line 127 "pqueue.m"
  MR_Box mercury__pqueue__V_2,
#line 127 "pqueue.m"
  MR_Word mercury__pqueue__HeadVar__3_3,
#line 127 "pqueue.m"
  MR_Word mercury__pqueue__HeadVar__4_4,
#line 127 "pqueue.m"
  MR_Word * mercury__pqueue__HeadVar__5_5,
#line 127 "pqueue.m"
  MR_Word * mercury__pqueue__HeadVar__6_6)
#line 127 "pqueue.m"
{
#line 130 "pqueue.m"
  {
#line 130 "pqueue.m"
    MR_bool mercury__pqueue__succeeded;

#line 130 "pqueue.m"
    if ((mercury__pqueue__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 130 "pqueue.m"
      if ((mercury__pqueue__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 130 "pqueue.m"
        {
#line 130 "pqueue.m"
          MR_Word mercury__pqueue__V_10_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 130 "pqueue.m"
          MR_Word mercury__pqueue__V_11_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 130 "pqueue.m"
          {
#line 130 "pqueue.m"
            MR_Word base;
#line 130 "pqueue.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 130 "pqueue.m"
            *mercury__pqueue__HeadVar__5_5 = base;
#line 130 "pqueue.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_Integer) 0));
#line 130 "pqueue.m"
            MR_hl_field(MR_mktag(1), base, 1) = mercury__pqueue__K_1;
#line 130 "pqueue.m"
            MR_hl_field(MR_mktag(1), base, 2) = mercury__pqueue__V_2;
#line 130 "pqueue.m"
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__pqueue__V_10_10));
#line 130 "pqueue.m"
            MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (mercury__pqueue__V_11_11));
#line 130 "pqueue.m"
          }
#line 130 "pqueue.m"
          *mercury__pqueue__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 130 "pqueue.m"
        }
#line 130 "pqueue.m"
      else
#line 133 "pqueue.m"
        {
#line 133 "pqueue.m"
          MR_Word mercury__pqueue__V_30_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 133 "pqueue.m"
          MR_Word mercury__pqueue__V_31_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 133 "pqueue.m"
          {
#line 133 "pqueue.m"
            MR_Word base;
#line 133 "pqueue.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 133 "pqueue.m"
            *mercury__pqueue__HeadVar__5_5 = base;
#line 133 "pqueue.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_Integer) 0));
#line 133 "pqueue.m"
            MR_hl_field(MR_mktag(1), base, 1) = mercury__pqueue__K_1;
#line 133 "pqueue.m"
            MR_hl_field(MR_mktag(1), base, 2) = mercury__pqueue__V_2;
#line 133 "pqueue.m"
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__pqueue__V_30_30));
#line 133 "pqueue.m"
            MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (mercury__pqueue__V_31_31));
#line 133 "pqueue.m"
          }
#line 133 "pqueue.m"
          *mercury__pqueue__HeadVar__6_6 = mercury__pqueue__HeadVar__4_4;
#line 133 "pqueue.m"
        }
#line 130 "pqueue.m"
    else
#line 130 "pqueue.m"
      {
#line 130 "pqueue.m"
        MR_Integer mercury__pqueue__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__3_3, (MR_Integer) 0)));
#line 131 "pqueue.m"
        MR_Word mercury__pqueue__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__3_3, (MR_Integer) 4)));
#line 131 "pqueue.m"
        MR_Word mercury__pqueue__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__3_3, (MR_Integer) 3)));
#line 131 "pqueue.m"
        MR_Box mercury__pqueue__V_52_52 = (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__3_3, (MR_Integer) 2));
#line 131 "pqueue.m"
        MR_Box mercury__pqueue__V_53_53 = (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__3_3, (MR_Integer) 1));

#line 130 "pqueue.m"
        if ((mercury__pqueue__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 131 "pqueue.m"
          {
#line 131 "pqueue.m"
            MR_Word mercury__pqueue__V_20_20;
#line 131 "pqueue.m"
            MR_Word mercury__pqueue__V_21_21;

#line 131 "pqueue.m"
            *mercury__pqueue__HeadVar__5_5 = mercury__pqueue__HeadVar__3_3;
#line 132 "pqueue.m"
            mercury__pqueue__V_20_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 132 "pqueue.m"
            mercury__pqueue__V_21_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 131 "pqueue.m"
            {
#line 131 "pqueue.m"
              MR_Word base;
#line 131 "pqueue.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 131 "pqueue.m"
              *mercury__pqueue__HeadVar__6_6 = base;
#line 131 "pqueue.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_Integer) 0));
#line 131 "pqueue.m"
              MR_hl_field(MR_mktag(1), base, 1) = mercury__pqueue__K_1;
#line 131 "pqueue.m"
              MR_hl_field(MR_mktag(1), base, 2) = mercury__pqueue__V_2;
#line 131 "pqueue.m"
              MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__pqueue__V_20_20));
#line 131 "pqueue.m"
              MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (mercury__pqueue__V_21_21));
#line 131 "pqueue.m"
            }
#line 131 "pqueue.m"
          }
#line 130 "pqueue.m"
        else
#line 136 "pqueue.m"
          {
#line 136 "pqueue.m"
            MR_Integer mercury__pqueue__D1_39 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__4_4, (MR_Integer) 0)));
#line 136 "pqueue.m"
            MR_Box mercury__pqueue__K1_40 = (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__4_4, (MR_Integer) 1));
#line 136 "pqueue.m"
            MR_Box mercury__pqueue__V1_41 = (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__4_4, (MR_Integer) 2));
#line 136 "pqueue.m"
            MR_Word mercury__pqueue__L1_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__4_4, (MR_Integer) 3)));
#line 136 "pqueue.m"
            MR_Word mercury__pqueue__R1_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__4_4, (MR_Integer) 4)));

#line 137 "pqueue.m"
            mercury__pqueue__succeeded = (mercury__pqueue__V_54_54 > mercury__pqueue__D1_39);
#line 140 "pqueue.m"
            if (mercury__pqueue__succeeded)
#line 138 "pqueue.m"
              {
#line 138 "pqueue.m"
                {
#line 138 "pqueue.m"
                  mercury__pqueue__insert_4_p_0(mercury__pqueue__TypeInfo_for_K_48, mercury__pqueue__TypeInfo_for_V_49, mercury__pqueue__K_1, mercury__pqueue__V_2, mercury__pqueue__HeadVar__4_4, mercury__pqueue__HeadVar__6_6);
                }
#line 139 "pqueue.m"
                *mercury__pqueue__HeadVar__5_5 = mercury__pqueue__HeadVar__3_3;
#line 138 "pqueue.m"
              }
#line 140 "pqueue.m"
            else
#line 141 "pqueue.m"
              {
#line 141 "pqueue.m"
                {
#line 141 "pqueue.m"
                  mercury__pqueue__insert_4_p_0(mercury__pqueue__TypeInfo_for_K_48, mercury__pqueue__TypeInfo_for_V_49, mercury__pqueue__K_1, mercury__pqueue__V_2, mercury__pqueue__HeadVar__3_3, mercury__pqueue__HeadVar__5_5);
                }
#line 142 "pqueue.m"
                *mercury__pqueue__HeadVar__6_6 = mercury__pqueue__HeadVar__4_4;
#line 141 "pqueue.m"
              }
#line 136 "pqueue.m"
          }
#line 130 "pqueue.m"
      }
#line 130 "pqueue.m"
  }
#line 127 "pqueue.m"
}

#line 82 "pqueue.m"
MR_Integer MR_CALL 
mercury__pqueue__length_1_f_0(
#line 82 "pqueue.m"
  MR_Word mercury__pqueue__TypeInfo_for_K_9,
#line 82 "pqueue.m"
  MR_Word mercury__pqueue__TypeInfo_for_V_10,
#line 82 "pqueue.m"
  MR_Word mercury__pqueue__HeadVar__1_1)
#line 82 "pqueue.m"
{
#line 205 "pqueue.m"
  {
#line 205 "pqueue.m"
    MR_bool mercury__pqueue__succeeded;
#line 205 "pqueue.m"
    MR_Integer mercury__pqueue__HeadVar__2_2;

#line 205 "pqueue.m"
    if ((mercury__pqueue__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 205 "pqueue.m"
      mercury__pqueue__HeadVar__2_2 = (MR_Integer) 0;
#line 205 "pqueue.m"
    else
#line 206 "pqueue.m"
      {
#line 206 "pqueue.m"
        MR_Integer mercury__pqueue__D_3 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__1_1, (MR_Integer) 0)));
#line 206 "pqueue.m"
        MR_Box mercury__pqueue__V_4_4 = (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__1_1, (MR_Integer) 1));
#line 206 "pqueue.m"
        MR_Box mercury__pqueue__V_5_5 = (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__1_1, (MR_Integer) 2));
#line 206 "pqueue.m"
        MR_Word mercury__pqueue__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__1_1, (MR_Integer) 3)));
#line 206 "pqueue.m"
        MR_Word mercury__pqueue__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__1_1, (MR_Integer) 4)));

#line 206 "pqueue.m"
        mercury__pqueue__HeadVar__2_2 = (mercury__pqueue__D_3 + (MR_Integer) 1);
#line 206 "pqueue.m"
      }
#line 205 "pqueue.m"
    return mercury__pqueue__HeadVar__2_2;
#line 205 "pqueue.m"
  }
#line 82 "pqueue.m"
}

#line 76 "pqueue.m"
MR_Word MR_CALL 
mercury__pqueue__from_assoc_list_1_f_0(
#line 76 "pqueue.m"
  MR_Word mercury__pqueue__TypeInfo_for_K_5,
#line 76 "pqueue.m"
  MR_Word mercury__pqueue__TypeInfo_for_V_6,
#line 76 "pqueue.m"
  MR_Word mercury__pqueue__List_3)
#line 76 "pqueue.m"
{
#line 201 "pqueue.m"
  {
#line 201 "pqueue.m"
    MR_bool mercury__pqueue__succeeded;
#line 201 "pqueue.m"
    MR_Word mercury__pqueue__PQueue_4;

#line 201 "pqueue.m"
    {
#line 201 "pqueue.m"
      mercury__pqueue__assoc_list_to_pqueue_2_p_0(mercury__pqueue__TypeInfo_for_K_5, mercury__pqueue__TypeInfo_for_V_6, mercury__pqueue__List_3, &mercury__pqueue__PQueue_4);
    }
#line 201 "pqueue.m"
    return mercury__pqueue__PQueue_4;
#line 201 "pqueue.m"
  }
#line 76 "pqueue.m"
}

#line 71 "pqueue.m"
void MR_CALL 
mercury__pqueue__assoc_list_to_pqueue_2_p_0(
#line 71 "pqueue.m"
  MR_Word mercury__pqueue__TypeInfo_for_K_10,
#line 71 "pqueue.m"
  MR_Word mercury__pqueue__TypeInfo_for_V_11,
#line 71 "pqueue.m"
  MR_Word mercury__pqueue__HeadVar__1_1,
#line 71 "pqueue.m"
  MR_Word * mercury__pqueue__Q_2)
#line 71 "pqueue.m"
{
#line 194 "pqueue.m"
  {
#line 194 "pqueue.m"
    MR_bool mercury__pqueue__succeeded;

#line 194 "pqueue.m"
    if ((mercury__pqueue__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 105 "pqueue.m"
      *mercury__pqueue__Q_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 194 "pqueue.m"
    else
#line 196 "pqueue.m"
      {
#line 196 "pqueue.m"
        MR_Box mercury__pqueue__K_4;
#line 196 "pqueue.m"
        MR_Box mercury__pqueue__V_5;
#line 196 "pqueue.m"
        MR_Word mercury__pqueue__L_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__1_1, (MR_Integer) 1)));
#line 196 "pqueue.m"
        MR_Word mercury__pqueue__Q0_8;
#line 196 "pqueue.m"
        MR_Word mercury__pqueue__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__1_1, (MR_Integer) 0)));

#line 196 "pqueue.m"
        mercury__pqueue__K_4 = (MR_hl_field(MR_mktag(0), mercury__pqueue__V_9_9, (MR_Integer) 0));
#line 196 "pqueue.m"
        mercury__pqueue__V_5 = (MR_hl_field(MR_mktag(0), mercury__pqueue__V_9_9, (MR_Integer) 1));
#line 197 "pqueue.m"
        {
#line 197 "pqueue.m"
          mercury__pqueue__assoc_list_to_pqueue_2_p_0(mercury__pqueue__TypeInfo_for_K_10, mercury__pqueue__TypeInfo_for_V_11, mercury__pqueue__L_6, &mercury__pqueue__Q0_8);
        }
#line 198 "pqueue.m"
        {
#line 198 "pqueue.m"
          mercury__pqueue__insert_4_p_0(mercury__pqueue__TypeInfo_for_K_10, mercury__pqueue__TypeInfo_for_V_11, mercury__pqueue__K_4, mercury__pqueue__V_5, mercury__pqueue__Q0_8, mercury__pqueue__Q_2);
#line 198 "pqueue.m"
          return;
        }
#line 196 "pqueue.m"
      }
#line 194 "pqueue.m"
  }
#line 71 "pqueue.m"
}

#line 70 "pqueue.m"
MR_Word MR_CALL 
mercury__pqueue__assoc_list_to_pqueue_1_f_0(
#line 70 "pqueue.m"
  MR_Word mercury__pqueue__TypeInfo_for_K_5,
#line 70 "pqueue.m"
  MR_Word mercury__pqueue__TypeInfo_for_V_6,
#line 70 "pqueue.m"
  MR_Word mercury__pqueue__AL_3)
#line 70 "pqueue.m"
{
#line 192 "pqueue.m"
  {
#line 192 "pqueue.m"
    MR_bool mercury__pqueue__succeeded;
#line 192 "pqueue.m"
    MR_Word mercury__pqueue__PQ2_4;

#line 192 "pqueue.m"
    {
#line 192 "pqueue.m"
      mercury__pqueue__assoc_list_to_pqueue_2_p_0(mercury__pqueue__TypeInfo_for_K_5, mercury__pqueue__TypeInfo_for_V_6, mercury__pqueue__AL_3, &mercury__pqueue__PQ2_4);
    }
#line 192 "pqueue.m"
    return mercury__pqueue__PQ2_4;
#line 192 "pqueue.m"
  }
#line 70 "pqueue.m"
}

#line 65 "pqueue.m"
void MR_CALL 
mercury__pqueue__to_assoc_list_2_p_0(
#line 65 "pqueue.m"
  MR_Word mercury__pqueue__TypeInfo_for_K_10,
#line 65 "pqueue.m"
  MR_Word mercury__pqueue__TypeInfo_for_V_11,
#line 65 "pqueue.m"
  MR_Word mercury__pqueue__Q0_3,
#line 65 "pqueue.m"
  MR_Word * mercury__pqueue__L_4)
#line 65 "pqueue.m"
{
#line 187 "pqueue.m"
  {
#line 187 "pqueue.m"
    MR_bool mercury__pqueue__succeeded = ((MR_tag((MR_Word) mercury__pqueue__Q0_3)) == (MR_mktag((MR_Integer) 1)));
#line 187 "pqueue.m"
    MR_Box mercury__pqueue__K_5;
#line 187 "pqueue.m"
    MR_Box mercury__pqueue__V_6;
#line 187 "pqueue.m"
    MR_Word mercury__pqueue__Q1_7;
#line 155 "pqueue.m"
    MR_Word mercury__pqueue__L0_16;
#line 155 "pqueue.m"
    MR_Word mercury__pqueue__R0_17;
#line 155 "pqueue.m"
    MR_Integer mercury__pqueue__V_15_15;

#line 155 "pqueue.m"
    if (mercury__pqueue__succeeded)
#line 155 "pqueue.m"
      {
#line 155 "pqueue.m"
        mercury__pqueue__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__pqueue__Q0_3, (MR_Integer) 0)));
#line 155 "pqueue.m"
        mercury__pqueue__K_5 = (MR_hl_field(MR_mktag(1), mercury__pqueue__Q0_3, (MR_Integer) 1));
#line 155 "pqueue.m"
        mercury__pqueue__V_6 = (MR_hl_field(MR_mktag(1), mercury__pqueue__Q0_3, (MR_Integer) 2));
#line 155 "pqueue.m"
        mercury__pqueue__L0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__Q0_3, (MR_Integer) 3)));
#line 155 "pqueue.m"
        mercury__pqueue__R0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__Q0_3, (MR_Integer) 4)));
#line 156 "pqueue.m"
        {
#line 156 "pqueue.m"
          mercury__pqueue__remove_2_3_p_0(mercury__pqueue__TypeInfo_for_K_10, mercury__pqueue__TypeInfo_for_V_11, mercury__pqueue__L0_16, mercury__pqueue__R0_17, &mercury__pqueue__Q1_7);
        }
#line 156 "pqueue.m"
        mercury__pqueue__succeeded = MR_TRUE;
#line 155 "pqueue.m"
      }
#line 187 "pqueue.m"
    if (mercury__pqueue__succeeded)
#line 185 "pqueue.m"
      {
#line 185 "pqueue.m"
        MR_Word mercury__pqueue__L0_8;
#line 185 "pqueue.m"
        MR_Word mercury__pqueue__V_9_9;

#line 185 "pqueue.m"
        {
#line 185 "pqueue.m"
          mercury__pqueue__to_assoc_list_2_p_0(mercury__pqueue__TypeInfo_for_K_10, mercury__pqueue__TypeInfo_for_V_11, mercury__pqueue__Q1_7, &mercury__pqueue__L0_8);
        }
#line 186 "pqueue.m"
        {
#line 186 "pqueue.m"
          mercury__pqueue__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 186 "pqueue.m"
          MR_hl_field(MR_mktag(0), mercury__pqueue__V_9_9, 0) = mercury__pqueue__K_5;
#line 186 "pqueue.m"
          MR_hl_field(MR_mktag(0), mercury__pqueue__V_9_9, 1) = mercury__pqueue__V_6;
#line 186 "pqueue.m"
        }
#line 186 "pqueue.m"
        {
#line 186 "pqueue.m"
          MR_Word base;
#line 186 "pqueue.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 186 "pqueue.m"
          *mercury__pqueue__L_4 = base;
#line 186 "pqueue.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__pqueue__V_9_9));
#line 186 "pqueue.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__pqueue__L0_8));
#line 186 "pqueue.m"
        }
#line 185 "pqueue.m"
      }
#line 187 "pqueue.m"
    else
#line 188 "pqueue.m"
      *mercury__pqueue__L_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 187 "pqueue.m"
  }
#line 65 "pqueue.m"
}

#line 64 "pqueue.m"
MR_Word MR_CALL 
mercury__pqueue__to_assoc_list_1_f_0(
#line 64 "pqueue.m"
  MR_Word mercury__pqueue__TypeInfo_for_K_5,
#line 64 "pqueue.m"
  MR_Word mercury__pqueue__TypeInfo_for_V_6,
#line 64 "pqueue.m"
  MR_Word mercury__pqueue__PQ_3)
#line 64 "pqueue.m"
{
#line 181 "pqueue.m"
  {
#line 181 "pqueue.m"
    MR_bool mercury__pqueue__succeeded;
#line 181 "pqueue.m"
    MR_Word mercury__pqueue__AL_4;

#line 181 "pqueue.m"
    {
#line 181 "pqueue.m"
      mercury__pqueue__to_assoc_list_2_p_0(mercury__pqueue__TypeInfo_for_K_5, mercury__pqueue__TypeInfo_for_V_6, mercury__pqueue__PQ_3, &mercury__pqueue__AL_4);
    }
#line 181 "pqueue.m"
    return mercury__pqueue__AL_4;
#line 181 "pqueue.m"
  }
#line 64 "pqueue.m"
}

#line 58 "pqueue.m"
void MR_CALL 
mercury__pqueue__det_remove_4_p_0(
#line 58 "pqueue.m"
  MR_Word mercury__pqueue__TypeInfo_for_K_15,
#line 58 "pqueue.m"
  MR_Word mercury__pqueue__TypeInfo_for_V_16,
#line 58 "pqueue.m"
  MR_Box * mercury__pqueue__K_5,
#line 58 "pqueue.m"
  MR_Box * mercury__pqueue__V_6,
#line 58 "pqueue.m"
  MR_Word mercury__pqueue__STATE_VARIABLE_PQ_0_10,
#line 58 "pqueue.m"
  MR_Word * mercury__pqueue__STATE_VARIABLE_PQ_11)
#line 58 "pqueue.m"
{
#line 151 "pqueue.m"
  {
#line 151 "pqueue.m"
    MR_bool mercury__pqueue__succeeded = ((MR_tag((MR_Word) mercury__pqueue__STATE_VARIABLE_PQ_0_10)) == (MR_mktag((MR_Integer) 1)));
#line 151 "pqueue.m"
    MR_Box mercury__pqueue__K0_8;
#line 151 "pqueue.m"
    MR_Box mercury__pqueue__V0_9;
#line 151 "pqueue.m"
    MR_Word mercury__pqueue__STATE_VARIABLE_PQ_12_12;
#line 155 "pqueue.m"
    MR_Word mercury__pqueue__L0_21;
#line 155 "pqueue.m"
    MR_Word mercury__pqueue__R0_22;
#line 155 "pqueue.m"
    MR_Integer mercury__pqueue__V_20_20;

#line 155 "pqueue.m"
    if (mercury__pqueue__succeeded)
#line 155 "pqueue.m"
      {
#line 155 "pqueue.m"
        mercury__pqueue__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__pqueue__STATE_VARIABLE_PQ_0_10, (MR_Integer) 0)));
#line 155 "pqueue.m"
        mercury__pqueue__K0_8 = (MR_hl_field(MR_mktag(1), mercury__pqueue__STATE_VARIABLE_PQ_0_10, (MR_Integer) 1));
#line 155 "pqueue.m"
        mercury__pqueue__V0_9 = (MR_hl_field(MR_mktag(1), mercury__pqueue__STATE_VARIABLE_PQ_0_10, (MR_Integer) 2));
#line 155 "pqueue.m"
        mercury__pqueue__L0_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__STATE_VARIABLE_PQ_0_10, (MR_Integer) 3)));
#line 155 "pqueue.m"
        mercury__pqueue__R0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__STATE_VARIABLE_PQ_0_10, (MR_Integer) 4)));
#line 156 "pqueue.m"
        {
#line 156 "pqueue.m"
          mercury__pqueue__remove_2_3_p_0(mercury__pqueue__TypeInfo_for_K_15, mercury__pqueue__TypeInfo_for_V_16, mercury__pqueue__L0_21, mercury__pqueue__R0_22, &mercury__pqueue__STATE_VARIABLE_PQ_12_12);
        }
#line 156 "pqueue.m"
        mercury__pqueue__succeeded = MR_TRUE;
#line 155 "pqueue.m"
      }
#line 151 "pqueue.m"
    if (mercury__pqueue__succeeded)
#line 149 "pqueue.m"
      {
#line 149 "pqueue.m"
        *mercury__pqueue__STATE_VARIABLE_PQ_11 = mercury__pqueue__STATE_VARIABLE_PQ_12_12;
#line 149 "pqueue.m"
        *mercury__pqueue__K_5 = mercury__pqueue__K0_8;
#line 150 "pqueue.m"
        *mercury__pqueue__V_6 = mercury__pqueue__V0_9;
#line 149 "pqueue.m"
      }
#line 151 "pqueue.m"
    else
#line 152 "pqueue.m"
      {
#line 152 "pqueue.m"
        {
#line 152 "pqueue.m"
          mercury__require__error_1_p_0((MR_String) "pqueue.det_remove/4: empty priority queue");
#line 152 "pqueue.m"
          return;
        }
#line 152 "pqueue.m"
      }
#line 151 "pqueue.m"
  }
#line 58 "pqueue.m"
}

#line 53 "pqueue.m"
MR_bool MR_CALL 
mercury__pqueue__remove_4_p_0(
#line 53 "pqueue.m"
  MR_Word mercury__pqueue__TypeInfo_for_K_11,
#line 53 "pqueue.m"
  MR_Word mercury__pqueue__TypeInfo_for_V_12,
#line 53 "pqueue.m"
  MR_Box * mercury__pqueue__K_5,
#line 53 "pqueue.m"
  MR_Box * mercury__pqueue__V_6,
#line 53 "pqueue.m"
  MR_Word mercury__pqueue__HeadVar__3_3,
#line 53 "pqueue.m"
  MR_Word * mercury__pqueue__PQ_10)
#line 53 "pqueue.m"
{
#line 155 "pqueue.m"
  {
#line 155 "pqueue.m"
    MR_bool mercury__pqueue__succeeded = ((MR_tag((MR_Word) mercury__pqueue__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 155 "pqueue.m"
    MR_Word mercury__pqueue__L0_8;
#line 155 "pqueue.m"
    MR_Word mercury__pqueue__R0_9;
#line 155 "pqueue.m"
    MR_Integer mercury__pqueue__V_7_7;

#line 155 "pqueue.m"
    if (mercury__pqueue__succeeded)
#line 155 "pqueue.m"
      {
#line 155 "pqueue.m"
        mercury__pqueue__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__3_3, (MR_Integer) 0)));
#line 155 "pqueue.m"
        *mercury__pqueue__K_5 = (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__3_3, (MR_Integer) 1));
#line 155 "pqueue.m"
        *mercury__pqueue__V_6 = (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__3_3, (MR_Integer) 2));
#line 155 "pqueue.m"
        mercury__pqueue__L0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__3_3, (MR_Integer) 3)));
#line 155 "pqueue.m"
        mercury__pqueue__R0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__3_3, (MR_Integer) 4)));
#line 156 "pqueue.m"
        {
#line 156 "pqueue.m"
          mercury__pqueue__remove_2_3_p_0(mercury__pqueue__TypeInfo_for_K_11, mercury__pqueue__TypeInfo_for_V_12, mercury__pqueue__L0_8, mercury__pqueue__R0_9, mercury__pqueue__PQ_10);
        }
#line 156 "pqueue.m"
        mercury__pqueue__succeeded = MR_TRUE;
#line 155 "pqueue.m"
      }
#line 155 "pqueue.m"
    return mercury__pqueue__succeeded;
#line 155 "pqueue.m"
  }
#line 53 "pqueue.m"
}

#line 47 "pqueue.m"
void MR_CALL 
mercury__pqueue__insert_4_p_0(
#line 47 "pqueue.m"
  MR_Word mercury__pqueue__TypeInfo_for_K_25,
#line 47 "pqueue.m"
  MR_Word mercury__pqueue__TypeInfo_for_V_26,
#line 47 "pqueue.m"
  MR_Box mercury__pqueue__K_1,
#line 47 "pqueue.m"
  MR_Box mercury__pqueue__V_2,
#line 47 "pqueue.m"
  MR_Word mercury__pqueue__HeadVar__3_3,
#line 47 "pqueue.m"
  MR_Word * mercury__pqueue__HeadVar__4_4)
#line 47 "pqueue.m"
{
#line 112 "pqueue.m"
  {
#line 112 "pqueue.m"
    MR_bool mercury__pqueue__succeeded;

#line 112 "pqueue.m"
    if ((mercury__pqueue__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 112 "pqueue.m"
      {
#line 112 "pqueue.m"
        MR_Word mercury__pqueue__V_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 112 "pqueue.m"
        MR_Word mercury__pqueue__V_9_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 112 "pqueue.m"
        {
#line 112 "pqueue.m"
          MR_Word base;
#line 112 "pqueue.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 112 "pqueue.m"
          *mercury__pqueue__HeadVar__4_4 = base;
#line 112 "pqueue.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_Integer) 0));
#line 112 "pqueue.m"
          MR_hl_field(MR_mktag(1), base, 1) = mercury__pqueue__K_1;
#line 112 "pqueue.m"
          MR_hl_field(MR_mktag(1), base, 2) = mercury__pqueue__V_2;
#line 112 "pqueue.m"
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__pqueue__V_8_8));
#line 112 "pqueue.m"
          MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (mercury__pqueue__V_9_9));
#line 112 "pqueue.m"
        }
#line 112 "pqueue.m"
      }
#line 112 "pqueue.m"
    else
#line 113 "pqueue.m"
      {
#line 113 "pqueue.m"
        MR_Integer mercury__pqueue__D0_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__3_3, (MR_Integer) 0)));
#line 113 "pqueue.m"
        MR_Box mercury__pqueue__K0_13 = (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__3_3, (MR_Integer) 1));
#line 113 "pqueue.m"
        MR_Box mercury__pqueue__V0_14 = (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__3_3, (MR_Integer) 2));
#line 113 "pqueue.m"
        MR_Word mercury__pqueue__L0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__3_3, (MR_Integer) 3)));
#line 113 "pqueue.m"
        MR_Word mercury__pqueue__R0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__3_3, (MR_Integer) 4)));
#line 113 "pqueue.m"
        MR_Integer mercury__pqueue__D_18 = (mercury__pqueue__D0_12 + (MR_Integer) 1);
#line 113 "pqueue.m"
        MR_Word mercury__pqueue__CMP_19;
#line 113 "pqueue.m"
        MR_Box mercury__pqueue__K1_20;
#line 113 "pqueue.m"
        MR_Box mercury__pqueue__V1_21;
#line 113 "pqueue.m"
        MR_Word mercury__pqueue__L_22;
#line 113 "pqueue.m"
        MR_Word mercury__pqueue__R_23;

#line 115 "pqueue.m"
        {
#line 115 "pqueue.m"
          mercury__builtin__compare_3_p_0(mercury__pqueue__TypeInfo_for_K_25, &mercury__pqueue__CMP_19, mercury__pqueue__K_1, mercury__pqueue__K0_13);
        }
#line 116 "pqueue.m"
        mercury__pqueue__succeeded = (mercury__pqueue__CMP_19 == (MR_Integer) 1);
#line 120 "pqueue.m"
        if (mercury__pqueue__succeeded)
#line 117 "pqueue.m"
          {
#line 117 "pqueue.m"
            mercury__pqueue__K1_20 = mercury__pqueue__K_1;
#line 118 "pqueue.m"
            mercury__pqueue__V1_21 = mercury__pqueue__V_2;
#line 119 "pqueue.m"
            {
#line 119 "pqueue.m"
              mercury__pqueue__insert_2_6_p_0(mercury__pqueue__TypeInfo_for_K_25, mercury__pqueue__TypeInfo_for_V_26, mercury__pqueue__K0_13, mercury__pqueue__V0_14, mercury__pqueue__L0_15, mercury__pqueue__R0_16, &mercury__pqueue__L_22, &mercury__pqueue__R_23);
            }
#line 117 "pqueue.m"
          }
#line 120 "pqueue.m"
        else
#line 121 "pqueue.m"
          {
#line 121 "pqueue.m"
            mercury__pqueue__K1_20 = mercury__pqueue__K0_13;
#line 122 "pqueue.m"
            mercury__pqueue__V1_21 = mercury__pqueue__V0_14;
#line 123 "pqueue.m"
            {
#line 123 "pqueue.m"
              mercury__pqueue__insert_2_6_p_0(mercury__pqueue__TypeInfo_for_K_25, mercury__pqueue__TypeInfo_for_V_26, mercury__pqueue__K_1, mercury__pqueue__V_2, mercury__pqueue__L0_15, mercury__pqueue__R0_16, &mercury__pqueue__L_22, &mercury__pqueue__R_23);
            }
#line 121 "pqueue.m"
          }
#line 125 "pqueue.m"
        {
#line 125 "pqueue.m"
          MR_Word base;
#line 125 "pqueue.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 125 "pqueue.m"
          *mercury__pqueue__HeadVar__4_4 = base;
#line 125 "pqueue.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__pqueue__D_18));
#line 125 "pqueue.m"
          MR_hl_field(MR_mktag(1), base, 1) = mercury__pqueue__K1_20;
#line 125 "pqueue.m"
          MR_hl_field(MR_mktag(1), base, 2) = mercury__pqueue__V1_21;
#line 125 "pqueue.m"
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__pqueue__L_22));
#line 125 "pqueue.m"
          MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (mercury__pqueue__R_23));
#line 125 "pqueue.m"
        }
#line 113 "pqueue.m"
      }
#line 112 "pqueue.m"
  }
#line 47 "pqueue.m"
}

#line 46 "pqueue.m"
MR_Word MR_CALL 
mercury__pqueue__insert_3_f_0(
#line 46 "pqueue.m"
  MR_Word mercury__pqueue__TypeInfo_for_K_11,
#line 46 "pqueue.m"
  MR_Word mercury__pqueue__TypeInfo_for_V_12,
#line 46 "pqueue.m"
  MR_Word mercury__pqueue__STATE_VARIABLE_PQ_0_8,
#line 46 "pqueue.m"
  MR_Box mercury__pqueue__K_6,
#line 46 "pqueue.m"
  MR_Box mercury__pqueue__V_7)
#line 46 "pqueue.m"
{
#line 110 "pqueue.m"
  {
#line 110 "pqueue.m"
    MR_bool mercury__pqueue__succeeded;
#line 110 "pqueue.m"
    MR_Word mercury__pqueue__STATE_VARIABLE_PQ_9;

#line 110 "pqueue.m"
    {
#line 110 "pqueue.m"
      mercury__pqueue__insert_4_p_0(mercury__pqueue__TypeInfo_for_K_11, mercury__pqueue__TypeInfo_for_V_12, mercury__pqueue__K_6, mercury__pqueue__V_7, mercury__pqueue__STATE_VARIABLE_PQ_0_8, &mercury__pqueue__STATE_VARIABLE_PQ_9);
    }
#line 110 "pqueue.m"
    return mercury__pqueue__STATE_VARIABLE_PQ_9;
#line 110 "pqueue.m"
  }
#line 46 "pqueue.m"
}

#line 41 "pqueue.m"
void MR_CALL 
mercury__pqueue__init_1_p_0(
#line 41 "pqueue.m"
  MR_Word mercury__pqueue__TypeInfo_for_K_2,
#line 41 "pqueue.m"
  MR_Word mercury__pqueue__TypeInfo_for_V_3,
#line 41 "pqueue.m"
  MR_Word * mercury__pqueue__HeadVar__1_1)
#line 41 "pqueue.m"
{
#line 105 "pqueue.m"
  {
#line 105 "pqueue.m"
    MR_bool mercury__pqueue__succeeded;

#line 105 "pqueue.m"
    *mercury__pqueue__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 105 "pqueue.m"
  }
#line 41 "pqueue.m"
}

#line 40 "pqueue.m"
MR_Word MR_CALL 
mercury__pqueue__init_0_f_0(
#line 40 "pqueue.m"
  MR_Word mercury__pqueue__TypeInfo_for_K_3,
#line 40 "pqueue.m"
  MR_Word mercury__pqueue__TypeInfo_for_V_4)
#line 40 "pqueue.m"
{
#line 105 "pqueue.m"
  {
#line 105 "pqueue.m"
    MR_bool mercury__pqueue__succeeded;
#line 105 "pqueue.m"
    MR_Word mercury__pqueue__PQ_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 105 "pqueue.m"
    return mercury__pqueue__PQ_2;
#line 105 "pqueue.m"
  }
#line 40 "pqueue.m"
}

void mercury__pqueue__init(void)
{
}

void mercury__pqueue__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__pqueue__pqueue__type_ctor_info_pqueue_2);
}

void mercury__pqueue__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module pqueue. */
