/*
** Automatically generated from `thread.mvar.m'
** by the Mercury compiler,
** version rotd-2015-02-20
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


/* :- module thread.mvar. */
/* :- implementation. */

/*
INIT mercury__thread__mvar__init
ENDINIT
*/

#include "thread.mvar.mih"


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
#include "term_conversion.mih"
#include "term_io.mih"
#include "thread.mih"
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
#include "thread.semaphore.mih"




#line 96 "thread.mvar.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__thread__mvar__mutvar__pti_mutvar_1__pseudo_1;

#line 99 "thread.mvar.c"
static const MR_PseudoTypeInfo mercury__thread__mvar__thread__mvar__field_types_mvar_1_0[3];

#line 102 "thread.mvar.c"
static const MR_DuFunctorDesc mercury__thread__mvar__thread__mvar__du_functor_desc_mvar_1_0;

#line 105 "thread.mvar.c"
static const MR_DuFunctorDescPtr mercury__thread__mvar__thread__mvar__du_stag_ordered_mvar_1_0[1];

#line 108 "thread.mvar.c"
static const MR_DuPtagLayout mercury__thread__mvar__thread__mvar__du_ptag_ordered_mvar_1[1];

#line 111 "thread.mvar.c"
static const MR_DuFunctorDescPtr mercury__thread__mvar__thread__mvar__du_name_ordered_mvar_1[1];

#line 114 "thread.mvar.c"
static const MR_Integer mercury__thread__mvar__thread__mvar__functor_number_map_mvar_1[1];

#line 117 "thread.mvar.c"
static MR_bool MR_CALL 
mercury__thread__mvar____Unify____mvar_1_0_10001(
#line 120 "thread.mvar.c"
  MR_Box mercury__thread__mvar__wrapper_arg_1,
#line 122 "thread.mvar.c"
  MR_Box mercury__thread__mvar__wrapper_arg_2,
#line 124 "thread.mvar.c"
  MR_Box mercury__thread__mvar__wrapper_arg_3);

#line 127 "thread.mvar.c"
static void MR_CALL 
mercury__thread__mvar____Compare____mvar_1_0_10001(
#line 130 "thread.mvar.c"
  MR_Box mercury__thread__mvar__wrapper_arg_1,
#line 132 "thread.mvar.c"
  MR_Box * mercury__thread__mvar__wrapper_arg_2,
#line 134 "thread.mvar.c"
  MR_Box mercury__thread__mvar__wrapper_arg_3,
#line 136 "thread.mvar.c"
  MR_Box mercury__thread__mvar__wrapper_arg_4);

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__thread__mvar__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);


static /* final */ const MR_Box mercury__thread__mvar_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__thread__mvar_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__thread__mvar_scalar_common_3[2][5];




static /* final */ const MR_Box mercury__thread__mvar_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__thread__mvar_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__thread__mvar_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__thread__mvar_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__thread__mvar_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__thread__mvar_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "thread.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "thread.semaphore.mh"
#include "thread.semaphore.mh"
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
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
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
#include "builtin.mh"
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
#include "private_builtin.mh"
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
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "thread.semaphore.mh"
#include "thread.mh"
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



#line 522 "thread.mvar.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__thread__mvar__mutvar__pti_mutvar_1__pseudo_1 = {
  &mercury__mutvar__mutvar__type_ctor_info_mutvar_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 530 "thread.mvar.c"
static const MR_PseudoTypeInfo mercury__thread__mvar__thread__mvar__field_types_mvar_1_0[3] = {
  (MR_PseudoTypeInfo) &mercury__thread__semaphore__thread__semaphore__type_ctor_info_semaphore_0,
  (MR_PseudoTypeInfo) &mercury__thread__semaphore__thread__semaphore__type_ctor_info_semaphore_0,
  (MR_PseudoTypeInfo) &mercury__thread__mvar__mutvar__pti_mutvar_1__pseudo_1
};

#line 537 "thread.mvar.c"
static const MR_DuFunctorDesc mercury__thread__mvar__thread__mvar__du_functor_desc_mvar_1_0 = {
  (MR_String) "mvar",
  (MR_Integer) 3,
  (MR_Integer) 4,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__thread__mvar__thread__mvar__field_types_mvar_1_0,
  NULL,
  NULL,
  NULL
};

#line 552 "thread.mvar.c"
static const MR_DuFunctorDescPtr mercury__thread__mvar__thread__mvar__du_stag_ordered_mvar_1_0[1] = {
  &mercury__thread__mvar__thread__mvar__du_functor_desc_mvar_1_0
};

#line 557 "thread.mvar.c"
static const MR_DuPtagLayout mercury__thread__mvar__thread__mvar__du_ptag_ordered_mvar_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__thread__mvar__thread__mvar__du_stag_ordered_mvar_1_0
  }
};

#line 566 "thread.mvar.c"
static const MR_DuFunctorDescPtr mercury__thread__mvar__thread__mvar__du_name_ordered_mvar_1[1] = {
  &mercury__thread__mvar__thread__mvar__du_functor_desc_mvar_1_0
};

#line 571 "thread.mvar.c"
static const MR_Integer mercury__thread__mvar__thread__mvar__functor_number_map_mvar_1[1] = {
  (MR_Integer) 0
};

#line 576 "thread.mvar.c"
const MR_TypeCtorInfo_Struct mercury__thread__mvar__thread__mvar__type_ctor_info_mvar_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__thread__mvar____Unify____mvar_1_0_10001)),
  ((MR_Box) (mercury__thread__mvar____Compare____mvar_1_0_10001)),
  (MR_String) "thread.mvar",
  (MR_String) "mvar",
  {
    mercury__thread__mvar__thread__mvar__du_name_ordered_mvar_1
  },
  {
    mercury__thread__mvar__thread__mvar__du_ptag_ordered_mvar_1
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__thread__mvar__thread__mvar__functor_number_map_mvar_1
};

#line 597 "thread.mvar.c"
static MR_bool MR_CALL 
mercury__thread__mvar____Unify____mvar_1_0_10001(
#line 600 "thread.mvar.c"
  MR_Box mercury__thread__mvar__wrapper_arg_1,
#line 602 "thread.mvar.c"
  MR_Box mercury__thread__mvar__wrapper_arg_2,
#line 604 "thread.mvar.c"
  MR_Box mercury__thread__mvar__wrapper_arg_3)
#line 606 "thread.mvar.c"
{
#line 608 "thread.mvar.c"
  {
#line 610 "thread.mvar.c"
    MR_bool mercury__thread__mvar__succeeded;

#line 613 "thread.mvar.c"
    {
#line 615 "thread.mvar.c"
      mercury__thread__mvar__succeeded = mercury__thread__mvar____Unify____mvar_1_0(((MR_Word) mercury__thread__mvar__wrapper_arg_1), ((MR_Word) mercury__thread__mvar__wrapper_arg_2), ((MR_Word) mercury__thread__mvar__wrapper_arg_3));
    }
#line 618 "thread.mvar.c"
    return mercury__thread__mvar__succeeded;
#line 620 "thread.mvar.c"
  }
#line 622 "thread.mvar.c"
}

#line 625 "thread.mvar.c"
static void MR_CALL 
mercury__thread__mvar____Compare____mvar_1_0_10001(
#line 628 "thread.mvar.c"
  MR_Box mercury__thread__mvar__wrapper_arg_1,
#line 630 "thread.mvar.c"
  MR_Box * mercury__thread__mvar__wrapper_arg_2,
#line 632 "thread.mvar.c"
  MR_Box mercury__thread__mvar__wrapper_arg_3,
#line 634 "thread.mvar.c"
  MR_Box mercury__thread__mvar__wrapper_arg_4)
#line 636 "thread.mvar.c"
{
#line 638 "thread.mvar.c"
  {
#line 640 "thread.mvar.c"
    MR_Word mercury__thread__mvar__conv0_HeadVar__1_1;

#line 643 "thread.mvar.c"
    {
#line 645 "thread.mvar.c"
      mercury__thread__mvar____Compare____mvar_1_0(((MR_Word) mercury__thread__mvar__wrapper_arg_1), &mercury__thread__mvar__conv0_HeadVar__1_1, ((MR_Word) mercury__thread__mvar__wrapper_arg_3), ((MR_Word) mercury__thread__mvar__wrapper_arg_4));
    }
#line 648 "thread.mvar.c"
    *mercury__thread__mvar__wrapper_arg_2 = ((MR_Box) (mercury__thread__mvar__conv0_HeadVar__1_1));
#line 650 "thread.mvar.c"
  }
#line 652 "thread.mvar.c"
}

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__thread__mvar__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 13 "ops.opt"
{
#line 38 "ops.opt"
  {
#line 38 "ops.opt"
    MR_bool mercury__thread__mvar__succeeded;

#line 38 "ops.opt"
    return (MR_Integer) 1200;
#line 38 "ops.opt"
  }
#line 13 "ops.opt"
}

#line 88 "thread.mvar.m"
void MR_CALL 
mercury__thread__mvar____Compare____mvar_1_0(
#line 88 "thread.mvar.m"
  MR_Word mercury__thread__mvar__TypeInfo_for_T_14,
#line 88 "thread.mvar.m"
  MR_Word * mercury__thread__mvar__HeadVar__1_1,
#line 88 "thread.mvar.m"
  MR_Word mercury__thread__mvar__HeadVar__2_2,
#line 88 "thread.mvar.m"
  MR_Word mercury__thread__mvar__HeadVar__3_3)
#line 88 "thread.mvar.m"
{
#line 88 "thread.mvar.m"
  {
#line 88 "thread.mvar.m"
    MR_bool mercury__thread__mvar__succeeded;
#line 88 "thread.mvar.m"
    MR_Integer mercury__thread__mvar__CastX_12 = (MR_Integer) mercury__thread__mvar__HeadVar__2_2;
#line 88 "thread.mvar.m"
    MR_Integer mercury__thread__mvar__CastY_13 = (MR_Integer) mercury__thread__mvar__HeadVar__3_3;

#line 88 "thread.mvar.m"
    mercury__thread__mvar__succeeded = (mercury__thread__mvar__CastX_12 == mercury__thread__mvar__CastY_13);
#line 88 "thread.mvar.m"
    if (mercury__thread__mvar__succeeded)
#line 698 "thread.mvar.c"
      *mercury__thread__mvar__HeadVar__1_1 = (MR_Integer) 0;
#line 88 "thread.mvar.m"
    else
#line 88 "thread.mvar.m"
      {
#line 88 "thread.mvar.m"
        MR_Box mercury__thread__mvar__V_4_4 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__thread__mvar__HeadVar__2_2, (MR_Integer) 0)));
#line 88 "thread.mvar.m"
        MR_Box mercury__thread__mvar__V_5_5 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__thread__mvar__HeadVar__2_2, (MR_Integer) 1)));
#line 88 "thread.mvar.m"
        MR_Word mercury__thread__mvar__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__mvar__HeadVar__2_2, (MR_Integer) 2)));
#line 88 "thread.mvar.m"
        MR_Box mercury__thread__mvar__V_7_7 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__thread__mvar__HeadVar__3_3, (MR_Integer) 0)));
#line 88 "thread.mvar.m"
        MR_Box mercury__thread__mvar__V_8_8 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__thread__mvar__HeadVar__3_3, (MR_Integer) 1)));
#line 88 "thread.mvar.m"
        MR_Word mercury__thread__mvar__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__mvar__HeadVar__3_3, (MR_Integer) 2)));
#line 88 "thread.mvar.m"
        MR_Word mercury__thread__mvar__V_10_10;

#line 88 "thread.mvar.m"
        {
#line 88 "thread.mvar.m"
          mercury__thread__semaphore____Compare____semaphore_0_0(&mercury__thread__mvar__V_10_10, mercury__thread__mvar__V_4_4, mercury__thread__mvar__V_7_7);
        }
#line 724 "thread.mvar.c"
        mercury__thread__mvar__succeeded = (mercury__thread__mvar__V_10_10 == (MR_Integer) 0);
#line 88 "thread.mvar.m"
        mercury__thread__mvar__succeeded = !(mercury__thread__mvar__succeeded);
#line 88 "thread.mvar.m"
        if (mercury__thread__mvar__succeeded)
#line 88 "thread.mvar.m"
          *mercury__thread__mvar__HeadVar__1_1 = mercury__thread__mvar__V_10_10;
#line 88 "thread.mvar.m"
        else
#line 88 "thread.mvar.m"
          {
#line 88 "thread.mvar.m"
            MR_Word mercury__thread__mvar__V_11_11;

#line 88 "thread.mvar.m"
            {
#line 88 "thread.mvar.m"
              mercury__thread__semaphore____Compare____semaphore_0_0(&mercury__thread__mvar__V_11_11, mercury__thread__mvar__V_5_5, mercury__thread__mvar__V_8_8);
            }
#line 744 "thread.mvar.c"
            mercury__thread__mvar__succeeded = (mercury__thread__mvar__V_11_11 == (MR_Integer) 0);
#line 88 "thread.mvar.m"
            mercury__thread__mvar__succeeded = !(mercury__thread__mvar__succeeded);
#line 88 "thread.mvar.m"
            if (mercury__thread__mvar__succeeded)
#line 88 "thread.mvar.m"
              *mercury__thread__mvar__HeadVar__1_1 = mercury__thread__mvar__V_11_11;
#line 88 "thread.mvar.m"
            else
#line 88 "thread.mvar.m"
              {
#line 88 "thread.mvar.m"
                mercury__mutvar____Compare____mutvar_1_0(mercury__thread__mvar__TypeInfo_for_T_14, mercury__thread__mvar__HeadVar__1_1, mercury__thread__mvar__V_6_6, mercury__thread__mvar__V_9_9);
#line 88 "thread.mvar.m"
                return;
              }
#line 88 "thread.mvar.m"
          }
#line 88 "thread.mvar.m"
      }
#line 88 "thread.mvar.m"
  }
#line 88 "thread.mvar.m"
}

#line 88 "thread.mvar.m"
MR_bool MR_CALL 
mercury__thread__mvar____Unify____mvar_1_0(
#line 88 "thread.mvar.m"
  MR_Word mercury__thread__mvar__TypeInfo_for_T_11,
#line 88 "thread.mvar.m"
  MR_Word mercury__thread__mvar__HeadVar__1_1,
#line 88 "thread.mvar.m"
  MR_Word mercury__thread__mvar__HeadVar__2_2)
#line 88 "thread.mvar.m"
{
#line 88 "thread.mvar.m"
  {
#line 88 "thread.mvar.m"
    MR_bool mercury__thread__mvar__succeeded;
#line 88 "thread.mvar.m"
    MR_Integer mercury__thread__mvar__CastX_9 = (MR_Integer) mercury__thread__mvar__HeadVar__1_1;
#line 88 "thread.mvar.m"
    MR_Integer mercury__thread__mvar__CastY_10 = (MR_Integer) mercury__thread__mvar__HeadVar__2_2;

#line 88 "thread.mvar.m"
    mercury__thread__mvar__succeeded = (mercury__thread__mvar__CastX_9 == mercury__thread__mvar__CastY_10);
#line 88 "thread.mvar.m"
    if (mercury__thread__mvar__succeeded)
#line 88 "thread.mvar.m"
      mercury__thread__mvar__succeeded = MR_TRUE;
#line 88 "thread.mvar.m"
    else
#line 88 "thread.mvar.m"
      {
#line 88 "thread.mvar.m"
        MR_Box mercury__thread__mvar__V_3_3 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__thread__mvar__HeadVar__1_1, (MR_Integer) 0)));
#line 88 "thread.mvar.m"
        MR_Box mercury__thread__mvar__V_4_4 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__thread__mvar__HeadVar__1_1, (MR_Integer) 1)));
#line 88 "thread.mvar.m"
        MR_Word mercury__thread__mvar__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__mvar__HeadVar__1_1, (MR_Integer) 2)));
#line 88 "thread.mvar.m"
        MR_Box mercury__thread__mvar__V_6_6 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__thread__mvar__HeadVar__2_2, (MR_Integer) 0)));
#line 88 "thread.mvar.m"
        MR_Box mercury__thread__mvar__V_7_7 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__thread__mvar__HeadVar__2_2, (MR_Integer) 1)));
#line 88 "thread.mvar.m"
        MR_Word mercury__thread__mvar__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__mvar__HeadVar__2_2, (MR_Integer) 2)));

#line 813 "thread.mvar.c"
        {
#line 815 "thread.mvar.c"
          mercury__thread__mvar__succeeded = mercury__thread__semaphore____Unify____semaphore_0_0(mercury__thread__mvar__V_3_3, mercury__thread__mvar__V_6_6);
        }
#line 88 "thread.mvar.m"
        if (mercury__thread__mvar__succeeded)
#line 88 "thread.mvar.m"
          {
#line 822 "thread.mvar.c"
            {
#line 824 "thread.mvar.c"
              mercury__thread__mvar__succeeded = mercury__thread__semaphore____Unify____semaphore_0_0(mercury__thread__mvar__V_4_4, mercury__thread__mvar__V_7_7);
            }
#line 88 "thread.mvar.m"
            if (mercury__thread__mvar__succeeded)
#line 829 "thread.mvar.c"
              {
#line 831 "thread.mvar.c"
                return mercury__thread__mvar__succeeded = mercury__mutvar____Unify____mutvar_1_0(mercury__thread__mvar__TypeInfo_for_T_11, mercury__thread__mvar__V_5_5, mercury__thread__mvar__V_8_8);
              }
#line 88 "thread.mvar.m"
          }
#line 88 "thread.mvar.m"
      }
#line 88 "thread.mvar.m"
    return mercury__thread__mvar__succeeded;
#line 88 "thread.mvar.m"
  }
#line 88 "thread.mvar.m"
}

#line 75 "thread.mvar.m"
void MR_CALL 
mercury__thread__mvar__read_4_p_0(
#line 75 "thread.mvar.m"
  MR_Word mercury__thread__mvar__TypeInfo_for_T_14,
#line 75 "thread.mvar.m"
  MR_Word mercury__thread__mvar__HeadVar__1_1,
#line 75 "thread.mvar.m"
  MR_Box * mercury__thread__mvar__Data_8)
#line 75 "thread.mvar.m"
{
#line 164 "thread.mvar.m"
  {
#line 164 "thread.mvar.m"
    MR_bool mercury__thread__mvar__succeeded;
#line 164 "thread.mvar.m"
    MR_Box mercury__thread__mvar__Full_5 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__thread__mvar__HeadVar__1_1, (MR_Integer) 0)));
#line 164 "thread.mvar.m"
    MR_Word mercury__thread__mvar__Ref_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__mvar__HeadVar__1_1, (MR_Integer) 2)));
#line 164 "thread.mvar.m"
    MR_Box mercury__thread__mvar___Empty_6 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__thread__mvar__HeadVar__1_1, (MR_Integer) 1)));

#line 166 "thread.mvar.m"
    {
#line 166 "thread.mvar.m"
      mercury__thread__semaphore__wait_3_p_0(mercury__thread__mvar__Full_5);
    }
#line 167 "thread.mvar.m"
    {
#line 167 "thread.mvar.m"
      mercury__mutvar__get_mutvar_2_p_0(mercury__thread__mvar__TypeInfo_for_T_14, mercury__thread__mvar__Ref_7, mercury__thread__mvar__Data_8);
    }
#line 168 "thread.mvar.m"
    {
#line 168 "thread.mvar.m"
      mercury__thread__semaphore__signal_3_p_0(mercury__thread__mvar__Full_5);
#line 168 "thread.mvar.m"
      return;
    }
#line 164 "thread.mvar.m"
  }
#line 75 "thread.mvar.m"
}

#line 69 "thread.mvar.m"
void MR_CALL 
mercury__thread__mvar__try_put_5_p_0(
#line 69 "thread.mvar.m"
  MR_Word mercury__thread__mvar__TypeInfo_for_T_16,
#line 69 "thread.mvar.m"
  MR_Word mercury__thread__mvar__HeadVar__1_1,
#line 69 "thread.mvar.m"
  MR_Box mercury__thread__mvar__Data_9,
#line 69 "thread.mvar.m"
  MR_Word * mercury__thread__mvar__Success_10)
#line 69 "thread.mvar.m"
{
#line 150 "thread.mvar.m"
  {
#line 150 "thread.mvar.m"
    MR_bool mercury__thread__mvar__succeeded;
#line 150 "thread.mvar.m"
    MR_Box mercury__thread__mvar__Full_6 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__thread__mvar__HeadVar__1_1, (MR_Integer) 0)));
#line 150 "thread.mvar.m"
    MR_Box mercury__thread__mvar__Empty_7 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__thread__mvar__HeadVar__1_1, (MR_Integer) 1)));
#line 150 "thread.mvar.m"
    MR_Word mercury__thread__mvar__Ref_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__mvar__HeadVar__1_1, (MR_Integer) 2)));

#line 152 "thread.mvar.m"
    {
#line 152 "thread.mvar.m"
      mercury__thread__semaphore__try_wait_4_p_0(mercury__thread__mvar__Empty_7, mercury__thread__mvar__Success_10);
    }
#line 157 "thread.mvar.m"
    if ((*mercury__thread__mvar__Success_10 == (MR_Integer) 0))
#line 158 "thread.mvar.m"
      {
#line 158 "thread.mvar.m"
      }
#line 157 "thread.mvar.m"
    else
#line 154 "thread.mvar.m"
      {
#line 155 "thread.mvar.m"
        {
#line 155 "thread.mvar.m"
          mercury__mutvar__set_mutvar_2_p_0(mercury__thread__mvar__TypeInfo_for_T_16, mercury__thread__mvar__Ref_8, mercury__thread__mvar__Data_9);
        }
#line 156 "thread.mvar.m"
        {
#line 156 "thread.mvar.m"
          mercury__thread__semaphore__signal_3_p_0(mercury__thread__mvar__Full_6);
#line 156 "thread.mvar.m"
          return;
        }
#line 154 "thread.mvar.m"
      }
#line 150 "thread.mvar.m"
  }
#line 69 "thread.mvar.m"
}

#line 64 "thread.mvar.m"
void MR_CALL 
mercury__thread__mvar__put_4_p_0(
#line 64 "thread.mvar.m"
  MR_Word mercury__thread__mvar__TypeInfo_for_T_14,
#line 64 "thread.mvar.m"
  MR_Word mercury__thread__mvar__HeadVar__1_1,
#line 64 "thread.mvar.m"
  MR_Box mercury__thread__mvar__Data_8)
#line 64 "thread.mvar.m"
{
#line 141 "thread.mvar.m"
  {
#line 141 "thread.mvar.m"
    MR_bool mercury__thread__mvar__succeeded;
#line 141 "thread.mvar.m"
    MR_Box mercury__thread__mvar__Full_5 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__thread__mvar__HeadVar__1_1, (MR_Integer) 0)));
#line 141 "thread.mvar.m"
    MR_Box mercury__thread__mvar__Empty_6 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__thread__mvar__HeadVar__1_1, (MR_Integer) 1)));
#line 141 "thread.mvar.m"
    MR_Word mercury__thread__mvar__Ref_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__mvar__HeadVar__1_1, (MR_Integer) 2)));

#line 143 "thread.mvar.m"
    {
#line 143 "thread.mvar.m"
      mercury__thread__semaphore__wait_3_p_0(mercury__thread__mvar__Empty_6);
    }
#line 144 "thread.mvar.m"
    {
#line 144 "thread.mvar.m"
      mercury__mutvar__set_mutvar_2_p_0(mercury__thread__mvar__TypeInfo_for_T_14, mercury__thread__mvar__Ref_7, mercury__thread__mvar__Data_8);
    }
#line 145 "thread.mvar.m"
    {
#line 145 "thread.mvar.m"
      mercury__thread__semaphore__signal_3_p_0(mercury__thread__mvar__Full_5);
#line 145 "thread.mvar.m"
      return;
    }
#line 141 "thread.mvar.m"
  }
#line 64 "thread.mvar.m"
}

#line 59 "thread.mvar.m"
void MR_CALL 
mercury__thread__mvar__try_take_4_p_0(
#line 59 "thread.mvar.m"
  MR_Word mercury__thread__mvar__TypeInfo_for_T_16,
#line 59 "thread.mvar.m"
  MR_Word mercury__thread__mvar__HeadVar__1_1,
#line 59 "thread.mvar.m"
  MR_Word * mercury__thread__mvar__MaybeData_8)
#line 59 "thread.mvar.m"
{
#line 123 "thread.mvar.m"
  {
#line 123 "thread.mvar.m"
    MR_bool mercury__thread__mvar__succeeded;
#line 123 "thread.mvar.m"
    MR_Box mercury__thread__mvar__Full_5 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__thread__mvar__HeadVar__1_1, (MR_Integer) 0)));
#line 123 "thread.mvar.m"
    MR_Box mercury__thread__mvar__Empty_6 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__thread__mvar__HeadVar__1_1, (MR_Integer) 1)));
#line 123 "thread.mvar.m"
    MR_Word mercury__thread__mvar__Ref_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__mvar__HeadVar__1_1, (MR_Integer) 2)));
#line 125 "thread.mvar.m"
    MR_Word mercury__thread__mvar__Success_10;

#line 125 "thread.mvar.m"
    {
#line 125 "thread.mvar.m"
      mercury__thread__semaphore__try_wait_4_p_0(mercury__thread__mvar__Full_5, &mercury__thread__mvar__Success_10);
    }
#line 133 "thread.mvar.m"
    if ((mercury__thread__mvar__Success_10 == (MR_Integer) 0))
#line 135 "thread.mvar.m"
      *mercury__thread__mvar__MaybeData_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 133 "thread.mvar.m"
    else
#line 127 "thread.mvar.m"
      {
#line 127 "thread.mvar.m"
        MR_Box mercury__thread__mvar__Data_11;

#line 128 "thread.mvar.m"
        {
#line 128 "thread.mvar.m"
          mercury__mutvar__get_mutvar_2_p_0(mercury__thread__mvar__TypeInfo_for_T_16, mercury__thread__mvar__Ref_7, &mercury__thread__mvar__Data_11);
        }
#line 130 "thread.mvar.m"
        {
#line 130 "thread.mvar.m"
          mercury__mutvar__clear_mutvar_1_p_0(mercury__thread__mvar__TypeInfo_for_T_16, mercury__thread__mvar__Ref_7);
        }
#line 131 "thread.mvar.m"
        {
#line 131 "thread.mvar.m"
          mercury__thread__semaphore__signal_3_p_0(mercury__thread__mvar__Empty_6);
        }
#line 132 "thread.mvar.m"
        {
#line 132 "thread.mvar.m"
          MR_Word base;
#line 132 "thread.mvar.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 132 "thread.mvar.m"
          *mercury__thread__mvar__MaybeData_8 = base;
#line 132 "thread.mvar.m"
          MR_hl_field(MR_mktag(1), base, 0) = mercury__thread__mvar__Data_11;
#line 132 "thread.mvar.m"
        }
#line 127 "thread.mvar.m"
      }
#line 123 "thread.mvar.m"
  }
#line 59 "thread.mvar.m"
}

#line 53 "thread.mvar.m"
void MR_CALL 
mercury__thread__mvar__take_4_p_0(
#line 53 "thread.mvar.m"
  MR_Word mercury__thread__mvar__TypeInfo_for_T_14,
#line 53 "thread.mvar.m"
  MR_Word mercury__thread__mvar__HeadVar__1_1,
#line 53 "thread.mvar.m"
  MR_Box * mercury__thread__mvar__Data_8)
#line 53 "thread.mvar.m"
{
#line 112 "thread.mvar.m"
  {
#line 112 "thread.mvar.m"
    MR_bool mercury__thread__mvar__succeeded;
#line 112 "thread.mvar.m"
    MR_Box mercury__thread__mvar__Full_5 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__thread__mvar__HeadVar__1_1, (MR_Integer) 0)));
#line 112 "thread.mvar.m"
    MR_Box mercury__thread__mvar__Empty_6 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__thread__mvar__HeadVar__1_1, (MR_Integer) 1)));
#line 112 "thread.mvar.m"
    MR_Word mercury__thread__mvar__Ref_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__mvar__HeadVar__1_1, (MR_Integer) 2)));

#line 114 "thread.mvar.m"
    {
#line 114 "thread.mvar.m"
      mercury__thread__semaphore__wait_3_p_0(mercury__thread__mvar__Full_5);
    }
#line 115 "thread.mvar.m"
    {
#line 115 "thread.mvar.m"
      mercury__mutvar__get_mutvar_2_p_0(mercury__thread__mvar__TypeInfo_for_T_14, mercury__thread__mvar__Ref_7, mercury__thread__mvar__Data_8);
    }
#line 117 "thread.mvar.m"
    {
#line 117 "thread.mvar.m"
      mercury__mutvar__clear_mutvar_1_p_0(mercury__thread__mvar__TypeInfo_for_T_14, mercury__thread__mvar__Ref_7);
    }
#line 118 "thread.mvar.m"
    {
#line 118 "thread.mvar.m"
      mercury__thread__semaphore__signal_3_p_0(mercury__thread__mvar__Empty_6);
#line 118 "thread.mvar.m"
      return;
    }
#line 112 "thread.mvar.m"
  }
#line 53 "thread.mvar.m"
}

#line 47 "thread.mvar.m"
MR_Word MR_CALL 
mercury__thread__mvar__init_0_f_0(
#line 47 "thread.mvar.m"
  MR_Word mercury__thread__mvar__TypeInfo_for_T_3)
#line 47 "thread.mvar.m"
{
#line 102 "thread.mvar.m"
  {
#line 102 "thread.mvar.m"
    MR_bool mercury__thread__mvar__succeeded;
#line 102 "thread.mvar.m"
    MR_Word mercury__thread__mvar__Mvar_2;
#line 102 "thread.mvar.m"
    MR_Box mercury__thread__mvar__Full_4;
#line 102 "thread.mvar.m"
    MR_Box mercury__thread__mvar__Empty_5;
#line 102 "thread.mvar.m"
    MR_Word mercury__thread__mvar__Ref_6;

#line 103 "thread.mvar.m"
    {
#line 103 "thread.mvar.m"
      mercury__thread__semaphore__impure_init_2_p_0((MR_Integer) 0, &mercury__thread__mvar__Full_4);
    }
#line 104 "thread.mvar.m"
    {
#line 104 "thread.mvar.m"
      mercury__thread__semaphore__impure_init_2_p_0((MR_Integer) 1, &mercury__thread__mvar__Empty_5);
    }
#line 105 "thread.mvar.m"
    {
#line 105 "thread.mvar.m"
      mercury__mutvar__new_mutvar0_1_p_0(mercury__thread__mvar__TypeInfo_for_T_3, &mercury__thread__mvar__Ref_6);
    }
#line 102 "thread.mvar.m"
    {
#line 102 "thread.mvar.m"
      mercury__thread__mvar__Mvar_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 102 "thread.mvar.m"
      MR_hl_field(MR_mktag(0), mercury__thread__mvar__Mvar_2, 0) = ((MR_Box) (mercury__thread__mvar__Full_4));
#line 102 "thread.mvar.m"
      MR_hl_field(MR_mktag(0), mercury__thread__mvar__Mvar_2, 1) = ((MR_Box) (mercury__thread__mvar__Empty_5));
#line 102 "thread.mvar.m"
      MR_hl_field(MR_mktag(0), mercury__thread__mvar__Mvar_2, 2) = ((MR_Box) (mercury__thread__mvar__Ref_6));
#line 102 "thread.mvar.m"
    }
#line 102 "thread.mvar.m"
    return mercury__thread__mvar__Mvar_2;
#line 102 "thread.mvar.m"
  }
#line 47 "thread.mvar.m"
}

#line 41 "thread.mvar.m"
MR_Word MR_CALL 
mercury__thread__mvar__impure_init_0_f_0(
#line 41 "thread.mvar.m"
  MR_Word mercury__thread__mvar__TypeInfo_for_T_7)
#line 41 "thread.mvar.m"
{
#line 102 "thread.mvar.m"
  {
#line 102 "thread.mvar.m"
    MR_bool mercury__thread__mvar__succeeded;
#line 102 "thread.mvar.m"
    MR_Word mercury__thread__mvar__HeadVar__1_1;
#line 102 "thread.mvar.m"
    MR_Box mercury__thread__mvar__Full_2;
#line 102 "thread.mvar.m"
    MR_Box mercury__thread__mvar__Empty_3;
#line 102 "thread.mvar.m"
    MR_Word mercury__thread__mvar__Ref_4;

#line 103 "thread.mvar.m"
    {
#line 103 "thread.mvar.m"
      mercury__thread__semaphore__impure_init_2_p_0((MR_Integer) 0, &mercury__thread__mvar__Full_2);
    }
#line 104 "thread.mvar.m"
    {
#line 104 "thread.mvar.m"
      mercury__thread__semaphore__impure_init_2_p_0((MR_Integer) 1, &mercury__thread__mvar__Empty_3);
    }
#line 105 "thread.mvar.m"
    {
#line 105 "thread.mvar.m"
      mercury__mutvar__new_mutvar0_1_p_0(mercury__thread__mvar__TypeInfo_for_T_7, &mercury__thread__mvar__Ref_4);
    }
#line 102 "thread.mvar.m"
    {
#line 102 "thread.mvar.m"
      mercury__thread__mvar__HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 102 "thread.mvar.m"
      MR_hl_field(MR_mktag(0), mercury__thread__mvar__HeadVar__1_1, 0) = ((MR_Box) (mercury__thread__mvar__Full_2));
#line 102 "thread.mvar.m"
      MR_hl_field(MR_mktag(0), mercury__thread__mvar__HeadVar__1_1, 1) = ((MR_Box) (mercury__thread__mvar__Empty_3));
#line 102 "thread.mvar.m"
      MR_hl_field(MR_mktag(0), mercury__thread__mvar__HeadVar__1_1, 2) = ((MR_Box) (mercury__thread__mvar__Ref_4));
#line 102 "thread.mvar.m"
    }
#line 102 "thread.mvar.m"
    return mercury__thread__mvar__HeadVar__1_1;
#line 102 "thread.mvar.m"
  }
#line 41 "thread.mvar.m"
}

#line 37 "thread.mvar.m"
void MR_CALL 
mercury__thread__mvar__init_3_p_0(
#line 37 "thread.mvar.m"
  MR_Word mercury__thread__mvar__TypeInfo_for_T_8,
#line 37 "thread.mvar.m"
  MR_Word * mercury__thread__mvar__Mvar_4)
#line 37 "thread.mvar.m"
{
#line 97 "thread.mvar.m"
  {
#line 97 "thread.mvar.m"
    MR_bool mercury__thread__mvar__succeeded;
#line 102 "thread.mvar.m"
    MR_Box mercury__thread__mvar__Full_9;
#line 102 "thread.mvar.m"
    MR_Box mercury__thread__mvar__Empty_10;
#line 102 "thread.mvar.m"
    MR_Word mercury__thread__mvar__Ref_11;

#line 103 "thread.mvar.m"
    {
#line 103 "thread.mvar.m"
      mercury__thread__semaphore__impure_init_2_p_0((MR_Integer) 0, &mercury__thread__mvar__Full_9);
    }
#line 104 "thread.mvar.m"
    {
#line 104 "thread.mvar.m"
      mercury__thread__semaphore__impure_init_2_p_0((MR_Integer) 1, &mercury__thread__mvar__Empty_10);
    }
#line 105 "thread.mvar.m"
    {
#line 105 "thread.mvar.m"
      mercury__mutvar__new_mutvar0_1_p_0(mercury__thread__mvar__TypeInfo_for_T_8, &mercury__thread__mvar__Ref_11);
    }
#line 102 "thread.mvar.m"
    {
#line 102 "thread.mvar.m"
      MR_Word base;
#line 102 "thread.mvar.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 102 "thread.mvar.m"
      *mercury__thread__mvar__Mvar_4 = base;
#line 102 "thread.mvar.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__thread__mvar__Full_9));
#line 102 "thread.mvar.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__thread__mvar__Empty_10));
#line 102 "thread.mvar.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__thread__mvar__Ref_11));
#line 102 "thread.mvar.m"
    }
#line 97 "thread.mvar.m"
  }
#line 37 "thread.mvar.m"
}

void mercury__thread__mvar__init(void)
{
}

void mercury__thread__mvar__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__thread__mvar__thread__mvar__type_ctor_info_mvar_1);
}

void mercury__thread__mvar__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module thread.mvar. */
