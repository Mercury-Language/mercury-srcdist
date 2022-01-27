/*
** Automatically generated from `thread.barrier.m'
** by the Mercury compiler,
** version rotd-2014-12-18
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


/* :- module thread.barrier. */
/* :- implementation. */

/*
INIT mercury__thread__barrier__init
ENDINIT
*/

#include "thread.barrier.mih"


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
#include "thread.mvar.mih"
#include "thread.semaphore.mih"




#line 94 "thread.barrier.c"
static const MR_FA_TypeInfo_Struct1 mercury__thread__barrier__thread__mvar__ti_mvar_1builtin__type_ctor_info_int_0;

#line 97 "thread.barrier.c"
static const MR_FA_TypeInfo_Struct1 mercury__thread__barrier__thread__mvar__ti_mvar_1thread__barrier__type_ctor_info_why_can_we_go_0;

#line 100 "thread.barrier.c"
static const MR_PseudoTypeInfo mercury__thread__barrier__thread__barrier__field_types_barrier_0_0[2];

#line 103 "thread.barrier.c"
static const MR_ConstString mercury__thread__barrier__thread__barrier__field_names_barrier_0_0[2];

#line 106 "thread.barrier.c"
static const MR_DuFunctorDesc mercury__thread__barrier__thread__barrier__du_functor_desc_barrier_0_0;

#line 109 "thread.barrier.c"
static const MR_DuFunctorDescPtr mercury__thread__barrier__thread__barrier__du_stag_ordered_barrier_0_0[1];

#line 112 "thread.barrier.c"
static const MR_DuPtagLayout mercury__thread__barrier__thread__barrier__du_ptag_ordered_barrier_0[1];

#line 115 "thread.barrier.c"
static const MR_DuFunctorDescPtr mercury__thread__barrier__thread__barrier__du_name_ordered_barrier_0[1];

#line 118 "thread.barrier.c"
static const MR_Integer mercury__thread__barrier__thread__barrier__functor_number_map_barrier_0[1];

#line 121 "thread.barrier.c"
static const MR_EnumFunctorDesc mercury__thread__barrier__thread__barrier__enum_functor_desc_why_can_we_go_0_0;

#line 124 "thread.barrier.c"
static const MR_EnumFunctorDesc mercury__thread__barrier__thread__barrier__enum_functor_desc_why_can_we_go_0_1;

#line 127 "thread.barrier.c"
static const MR_EnumFunctorDescPtr mercury__thread__barrier__thread__barrier__enum_value_ordered_why_can_we_go_0[2];

#line 130 "thread.barrier.c"
static const MR_EnumFunctorDescPtr mercury__thread__barrier__thread__barrier__enum_name_ordered_why_can_we_go_0[2];

#line 133 "thread.barrier.c"
static const MR_Integer mercury__thread__barrier__thread__barrier__functor_number_map_why_can_we_go_0[2];

#line 136 "thread.barrier.c"
static MR_bool MR_CALL 
mercury__thread__barrier____Unify____barrier_0_0_10001(
#line 139 "thread.barrier.c"
  MR_Box mercury__thread__barrier__wrapper_arg_1,
#line 141 "thread.barrier.c"
  MR_Box mercury__thread__barrier__wrapper_arg_2);

#line 144 "thread.barrier.c"
static void MR_CALL 
mercury__thread__barrier____Compare____barrier_0_0_10001(
#line 147 "thread.barrier.c"
  MR_Box * mercury__thread__barrier__wrapper_arg_1,
#line 149 "thread.barrier.c"
  MR_Box mercury__thread__barrier__wrapper_arg_2,
#line 151 "thread.barrier.c"
  MR_Box mercury__thread__barrier__wrapper_arg_3);

#line 154 "thread.barrier.c"
static MR_bool MR_CALL 
mercury__thread__barrier____Unify____why_can_we_go_0_0_10001(
#line 157 "thread.barrier.c"
  MR_Box mercury__thread__barrier__wrapper_arg_1,
#line 159 "thread.barrier.c"
  MR_Box mercury__thread__barrier__wrapper_arg_2);

#line 162 "thread.barrier.c"
static void MR_CALL 
mercury__thread__barrier____Compare____why_can_we_go_0_0_10001(
#line 165 "thread.barrier.c"
  MR_Box * mercury__thread__barrier__wrapper_arg_1,
#line 167 "thread.barrier.c"
  MR_Box mercury__thread__barrier__wrapper_arg_2,
#line 169 "thread.barrier.c"
  MR_Box mercury__thread__barrier__wrapper_arg_3);

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__thread__barrier__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);


static /* final */ const MR_Box mercury__thread__barrier_scalar_common_1[2][2];

static /* final */ const MR_Box mercury__thread__barrier_scalar_common_2[1][3];

static /* final */ const MR_Box mercury__thread__barrier_scalar_common_3[1][4];

static /* final */ const MR_Box mercury__thread__barrier_scalar_common_4[2][5];




static /* final */ const MR_Box mercury__thread__barrier_scalar_common_1[2][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__thread__mvar__thread__mvar__type_ctor_info_mvar_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__thread__mvar__thread__mvar__type_ctor_info_mvar_1)),
    ((MR_Box) (&mercury__thread__barrier__thread__barrier__type_ctor_info_why_can_we_go_0))
  },
};

static /* final */ const MR_Box mercury__thread__barrier_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__thread__barrier_scalar_common_3[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__thread__barrier_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__thread__barrier_scalar_common_4[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__thread__barrier_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__thread__barrier_scalar_common_3[0])),
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
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
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
#include "type_desc.mh"
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
#include "thread.semaphore.mh"
#include "thread.semaphore.mh"



#line 572 "thread.barrier.c"
static const MR_FA_TypeInfo_Struct1 mercury__thread__barrier__thread__mvar__ti_mvar_1builtin__type_ctor_info_int_0 = {
  &mercury__thread__mvar__thread__mvar__type_ctor_info_mvar_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 580 "thread.barrier.c"
static const MR_FA_TypeInfo_Struct1 mercury__thread__barrier__thread__mvar__ti_mvar_1thread__barrier__type_ctor_info_why_can_we_go_0 = {
  &mercury__thread__mvar__thread__mvar__type_ctor_info_mvar_1,
  {
    (MR_TypeInfo) &mercury__thread__barrier__thread__barrier__type_ctor_info_why_can_we_go_0
  }
};

#line 588 "thread.barrier.c"
static const MR_PseudoTypeInfo mercury__thread__barrier__thread__barrier__field_types_barrier_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__thread__barrier__thread__mvar__ti_mvar_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__thread__barrier__thread__mvar__ti_mvar_1thread__barrier__type_ctor_info_why_can_we_go_0
};

#line 594 "thread.barrier.c"
static const MR_ConstString mercury__thread__barrier__thread__barrier__field_names_barrier_0_0[2] = {
  (MR_String) "b_waiting_for",
  (MR_String) "b_go"
};

#line 600 "thread.barrier.c"
static const MR_DuFunctorDesc mercury__thread__barrier__thread__barrier__du_functor_desc_barrier_0_0 = {
  (MR_String) "barrier",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__thread__barrier__thread__barrier__field_types_barrier_0_0,
  mercury__thread__barrier__thread__barrier__field_names_barrier_0_0,
  NULL,
  NULL
};

#line 615 "thread.barrier.c"
static const MR_DuFunctorDescPtr mercury__thread__barrier__thread__barrier__du_stag_ordered_barrier_0_0[1] = {
  &mercury__thread__barrier__thread__barrier__du_functor_desc_barrier_0_0
};

#line 620 "thread.barrier.c"
static const MR_DuPtagLayout mercury__thread__barrier__thread__barrier__du_ptag_ordered_barrier_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__thread__barrier__thread__barrier__du_stag_ordered_barrier_0_0
  }
};

#line 629 "thread.barrier.c"
static const MR_DuFunctorDescPtr mercury__thread__barrier__thread__barrier__du_name_ordered_barrier_0[1] = {
  &mercury__thread__barrier__thread__barrier__du_functor_desc_barrier_0_0
};

#line 634 "thread.barrier.c"
static const MR_Integer mercury__thread__barrier__thread__barrier__functor_number_map_barrier_0[1] = {
  (MR_Integer) 0
};

#line 639 "thread.barrier.c"
const MR_TypeCtorInfo_Struct mercury__thread__barrier__thread__barrier__type_ctor_info_barrier_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__thread__barrier____Unify____barrier_0_0_10001)),
  ((MR_Box) (mercury__thread__barrier____Compare____barrier_0_0_10001)),
  (MR_String) "thread.barrier",
  (MR_String) "barrier",
  {
    mercury__thread__barrier__thread__barrier__du_name_ordered_barrier_0
  },
  {
    mercury__thread__barrier__thread__barrier__du_ptag_ordered_barrier_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__thread__barrier__thread__barrier__functor_number_map_barrier_0
};

#line 660 "thread.barrier.c"
static const MR_EnumFunctorDesc mercury__thread__barrier__thread__barrier__enum_functor_desc_why_can_we_go_0_0 = {
  (MR_String) "can_go_normal",
  (MR_Integer) 0
};

#line 666 "thread.barrier.c"
static const MR_EnumFunctorDesc mercury__thread__barrier__thread__barrier__enum_functor_desc_why_can_we_go_0_1 = {
  (MR_String) "can_go_release_called",
  (MR_Integer) 1
};

#line 672 "thread.barrier.c"
static const MR_EnumFunctorDescPtr mercury__thread__barrier__thread__barrier__enum_value_ordered_why_can_we_go_0[2] = {
  &mercury__thread__barrier__thread__barrier__enum_functor_desc_why_can_we_go_0_0,
  &mercury__thread__barrier__thread__barrier__enum_functor_desc_why_can_we_go_0_1
};

#line 678 "thread.barrier.c"
static const MR_EnumFunctorDescPtr mercury__thread__barrier__thread__barrier__enum_name_ordered_why_can_we_go_0[2] = {
  &mercury__thread__barrier__thread__barrier__enum_functor_desc_why_can_we_go_0_0,
  &mercury__thread__barrier__thread__barrier__enum_functor_desc_why_can_we_go_0_1
};

#line 684 "thread.barrier.c"
static const MR_Integer mercury__thread__barrier__thread__barrier__functor_number_map_why_can_we_go_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 690 "thread.barrier.c"
const MR_TypeCtorInfo_Struct mercury__thread__barrier__thread__barrier__type_ctor_info_why_can_we_go_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__thread__barrier____Unify____why_can_we_go_0_0_10001)),
  ((MR_Box) (mercury__thread__barrier____Compare____why_can_we_go_0_0_10001)),
  (MR_String) "thread.barrier",
  (MR_String) "why_can_we_go",
  {
    mercury__thread__barrier__thread__barrier__enum_name_ordered_why_can_we_go_0
  },
  {
    mercury__thread__barrier__thread__barrier__enum_value_ordered_why_can_we_go_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__thread__barrier__thread__barrier__functor_number_map_why_can_we_go_0
};

#line 711 "thread.barrier.c"
static MR_bool MR_CALL 
mercury__thread__barrier____Unify____barrier_0_0_10001(
#line 714 "thread.barrier.c"
  MR_Box mercury__thread__barrier__wrapper_arg_1,
#line 716 "thread.barrier.c"
  MR_Box mercury__thread__barrier__wrapper_arg_2)
#line 718 "thread.barrier.c"
{
#line 720 "thread.barrier.c"
  {
#line 722 "thread.barrier.c"
    MR_bool mercury__thread__barrier__succeeded;

#line 725 "thread.barrier.c"
    {
#line 727 "thread.barrier.c"
      mercury__thread__barrier__succeeded = mercury__thread__barrier____Unify____barrier_0_0(((MR_Word) mercury__thread__barrier__wrapper_arg_1), ((MR_Word) mercury__thread__barrier__wrapper_arg_2));
    }
#line 730 "thread.barrier.c"
    return mercury__thread__barrier__succeeded;
#line 732 "thread.barrier.c"
  }
#line 734 "thread.barrier.c"
}

#line 737 "thread.barrier.c"
static void MR_CALL 
mercury__thread__barrier____Compare____barrier_0_0_10001(
#line 740 "thread.barrier.c"
  MR_Box * mercury__thread__barrier__wrapper_arg_1,
#line 742 "thread.barrier.c"
  MR_Box mercury__thread__barrier__wrapper_arg_2,
#line 744 "thread.barrier.c"
  MR_Box mercury__thread__barrier__wrapper_arg_3)
#line 746 "thread.barrier.c"
{
#line 748 "thread.barrier.c"
  {
#line 750 "thread.barrier.c"
    MR_Word mercury__thread__barrier__conv0_HeadVar__1_1;

#line 753 "thread.barrier.c"
    {
#line 755 "thread.barrier.c"
      mercury__thread__barrier____Compare____barrier_0_0(&mercury__thread__barrier__conv0_HeadVar__1_1, ((MR_Word) mercury__thread__barrier__wrapper_arg_2), ((MR_Word) mercury__thread__barrier__wrapper_arg_3));
    }
#line 758 "thread.barrier.c"
    *mercury__thread__barrier__wrapper_arg_1 = ((MR_Box) (mercury__thread__barrier__conv0_HeadVar__1_1));
#line 760 "thread.barrier.c"
  }
#line 762 "thread.barrier.c"
}

#line 765 "thread.barrier.c"
static MR_bool MR_CALL 
mercury__thread__barrier____Unify____why_can_we_go_0_0_10001(
#line 768 "thread.barrier.c"
  MR_Box mercury__thread__barrier__wrapper_arg_1,
#line 770 "thread.barrier.c"
  MR_Box mercury__thread__barrier__wrapper_arg_2)
#line 772 "thread.barrier.c"
{
#line 774 "thread.barrier.c"
  {
#line 776 "thread.barrier.c"
    MR_bool mercury__thread__barrier__succeeded;

#line 779 "thread.barrier.c"
    {
#line 781 "thread.barrier.c"
      mercury__thread__barrier__succeeded = mercury__thread__barrier____Unify____why_can_we_go_0_0(((MR_Word) mercury__thread__barrier__wrapper_arg_1), ((MR_Word) mercury__thread__barrier__wrapper_arg_2));
    }
#line 784 "thread.barrier.c"
    return mercury__thread__barrier__succeeded;
#line 786 "thread.barrier.c"
  }
#line 788 "thread.barrier.c"
}

#line 791 "thread.barrier.c"
static void MR_CALL 
mercury__thread__barrier____Compare____why_can_we_go_0_0_10001(
#line 794 "thread.barrier.c"
  MR_Box * mercury__thread__barrier__wrapper_arg_1,
#line 796 "thread.barrier.c"
  MR_Box mercury__thread__barrier__wrapper_arg_2,
#line 798 "thread.barrier.c"
  MR_Box mercury__thread__barrier__wrapper_arg_3)
#line 800 "thread.barrier.c"
{
#line 802 "thread.barrier.c"
  {
#line 804 "thread.barrier.c"
    MR_Word mercury__thread__barrier__conv0_HeadVar__1_1;

#line 807 "thread.barrier.c"
    {
#line 809 "thread.barrier.c"
      mercury__thread__barrier____Compare____why_can_we_go_0_0(&mercury__thread__barrier__conv0_HeadVar__1_1, ((MR_Word) mercury__thread__barrier__wrapper_arg_2), ((MR_Word) mercury__thread__barrier__wrapper_arg_3));
    }
#line 812 "thread.barrier.c"
    *mercury__thread__barrier__wrapper_arg_1 = ((MR_Box) (mercury__thread__barrier__conv0_HeadVar__1_1));
#line 814 "thread.barrier.c"
  }
#line 816 "thread.barrier.c"
}

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__thread__barrier__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 13 "ops.opt"
{
#line 38 "ops.opt"
  {
#line 38 "ops.opt"
    MR_bool mercury__thread__barrier__succeeded;

#line 38 "ops.opt"
    return (MR_Integer) 1200;
#line 38 "ops.opt"
  }
#line 13 "ops.opt"
}

#line 91 "thread.barrier.m"
void MR_CALL 
mercury__thread__barrier____Compare____why_can_we_go_0_0(
#line 91 "thread.barrier.m"
  MR_Word * mercury__thread__barrier__HeadVar__1_1,
#line 91 "thread.barrier.m"
  MR_Word mercury__thread__barrier__HeadVar__2_2,
#line 91 "thread.barrier.m"
  MR_Word mercury__thread__barrier__HeadVar__3_3)
#line 91 "thread.barrier.m"
{
#line 91 "thread.barrier.m"
  {
#line 91 "thread.barrier.m"
    MR_bool mercury__thread__barrier__succeeded;
#line 91 "thread.barrier.m"
    MR_Integer mercury__thread__barrier__Cast_HeadVar1_4 = (MR_Integer) mercury__thread__barrier__HeadVar__2_2;
#line 91 "thread.barrier.m"
    MR_Integer mercury__thread__barrier__Cast_HeadVar2_5 = (MR_Integer) mercury__thread__barrier__HeadVar__3_3;

#line 66 "private_builtin.opt"
    mercury__thread__barrier__succeeded = (mercury__thread__barrier__Cast_HeadVar1_4 < mercury__thread__barrier__Cast_HeadVar2_5);
#line 69 "private_builtin.opt"
    if (mercury__thread__barrier__succeeded)
#line 68 "private_builtin.opt"
      *mercury__thread__barrier__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
    else
#line 74 "private_builtin.opt"
      {
#line 71 "private_builtin.opt"
        mercury__thread__barrier__succeeded = (mercury__thread__barrier__Cast_HeadVar1_4 == mercury__thread__barrier__Cast_HeadVar2_5);
#line 74 "private_builtin.opt"
        if (mercury__thread__barrier__succeeded)
#line 73 "private_builtin.opt"
          *mercury__thread__barrier__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
        else
#line 75 "private_builtin.opt"
          *mercury__thread__barrier__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
      }
#line 91 "thread.barrier.m"
  }
#line 91 "thread.barrier.m"
}

#line 91 "thread.barrier.m"
MR_bool MR_CALL 
mercury__thread__barrier____Unify____why_can_we_go_0_0(
#line 91 "thread.barrier.m"
  MR_Word mercury__thread__barrier__HeadVar__2_1,
#line 91 "thread.barrier.m"
  MR_Word mercury__thread__barrier__HeadVar__2_2)
#line 91 "thread.barrier.m"
{
#line 892 "thread.barrier.c"
  {
#line 894 "thread.barrier.c"
    MR_bool mercury__thread__barrier__succeeded = (mercury__thread__barrier__HeadVar__2_1 == mercury__thread__barrier__HeadVar__2_2);

#line 897 "thread.barrier.c"
    return mercury__thread__barrier__succeeded;
#line 899 "thread.barrier.c"
  }
#line 91 "thread.barrier.m"
}

#line 78 "thread.barrier.m"
void MR_CALL 
mercury__thread__barrier____Compare____barrier_0_0(
#line 78 "thread.barrier.m"
  MR_Word * mercury__thread__barrier__HeadVar__1_1,
#line 78 "thread.barrier.m"
  MR_Word mercury__thread__barrier__HeadVar__2_2,
#line 78 "thread.barrier.m"
  MR_Word mercury__thread__barrier__HeadVar__3_3)
#line 78 "thread.barrier.m"
{
#line 78 "thread.barrier.m"
  {
#line 78 "thread.barrier.m"
    MR_bool mercury__thread__barrier__succeeded;
#line 78 "thread.barrier.m"
    MR_Integer mercury__thread__barrier__CastX_9 = (MR_Integer) mercury__thread__barrier__HeadVar__2_2;
#line 78 "thread.barrier.m"
    MR_Integer mercury__thread__barrier__CastY_10 = (MR_Integer) mercury__thread__barrier__HeadVar__3_3;

#line 78 "thread.barrier.m"
    mercury__thread__barrier__succeeded = (mercury__thread__barrier__CastX_9 == mercury__thread__barrier__CastY_10);
#line 78 "thread.barrier.m"
    if (mercury__thread__barrier__succeeded)
#line 928 "thread.barrier.c"
      *mercury__thread__barrier__HeadVar__1_1 = (MR_Integer) 0;
#line 78 "thread.barrier.m"
    else
#line 78 "thread.barrier.m"
      {
#line 78 "thread.barrier.m"
        MR_Word mercury__thread__barrier__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__barrier__HeadVar__2_2, (MR_Integer) 0)));
#line 78 "thread.barrier.m"
        MR_Word mercury__thread__barrier__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__barrier__HeadVar__2_2, (MR_Integer) 1)));
#line 78 "thread.barrier.m"
        MR_Word mercury__thread__barrier__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__barrier__HeadVar__3_3, (MR_Integer) 0)));
#line 78 "thread.barrier.m"
        MR_Word mercury__thread__barrier__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__barrier__HeadVar__3_3, (MR_Integer) 1)));
#line 78 "thread.barrier.m"
        MR_Word mercury__thread__barrier__V_8_8;
#line 78 "thread.barrier.m"
        MR_Word mercury__thread__barrier__TypeInfo_11_11 = (MR_Word) &mercury__thread__barrier_scalar_common_1[0];

#line 78 "thread.barrier.m"
        {
#line 78 "thread.barrier.m"
          mercury__builtin__compare_3_p_0(mercury__thread__barrier__TypeInfo_11_11, &mercury__thread__barrier__V_8_8, ((MR_Box) (mercury__thread__barrier__V_4_4)), ((MR_Box) (mercury__thread__barrier__V_6_6)));
        }
#line 952 "thread.barrier.c"
        mercury__thread__barrier__succeeded = (mercury__thread__barrier__V_8_8 == (MR_Integer) 0);
#line 78 "thread.barrier.m"
        mercury__thread__barrier__succeeded = !(mercury__thread__barrier__succeeded);
#line 78 "thread.barrier.m"
        if (mercury__thread__barrier__succeeded)
#line 78 "thread.barrier.m"
          *mercury__thread__barrier__HeadVar__1_1 = mercury__thread__barrier__V_8_8;
#line 78 "thread.barrier.m"
        else
#line 78 "thread.barrier.m"
          {
#line 78 "thread.barrier.m"
            MR_Word mercury__thread__barrier__TypeInfo_12_12 = (MR_Word) &mercury__thread__barrier_scalar_common_1[1];

#line 78 "thread.barrier.m"
            {
#line 78 "thread.barrier.m"
              mercury__builtin__compare_3_p_0(mercury__thread__barrier__TypeInfo_12_12, mercury__thread__barrier__HeadVar__1_1, ((MR_Box) (mercury__thread__barrier__V_5_5)), ((MR_Box) (mercury__thread__barrier__V_7_7)));
#line 78 "thread.barrier.m"
              return;
            }
#line 78 "thread.barrier.m"
          }
#line 78 "thread.barrier.m"
      }
#line 78 "thread.barrier.m"
  }
#line 78 "thread.barrier.m"
}

#line 78 "thread.barrier.m"
MR_bool MR_CALL 
mercury__thread__barrier____Unify____barrier_0_0(
#line 78 "thread.barrier.m"
  MR_Word mercury__thread__barrier__HeadVar__1_1,
#line 78 "thread.barrier.m"
  MR_Word mercury__thread__barrier__HeadVar__2_2)
#line 78 "thread.barrier.m"
{
#line 78 "thread.barrier.m"
  {
#line 78 "thread.barrier.m"
    MR_bool mercury__thread__barrier__succeeded;
#line 78 "thread.barrier.m"
    MR_Integer mercury__thread__barrier__CastX_7 = (MR_Integer) mercury__thread__barrier__HeadVar__1_1;
#line 78 "thread.barrier.m"
    MR_Integer mercury__thread__barrier__CastY_8 = (MR_Integer) mercury__thread__barrier__HeadVar__2_2;

#line 78 "thread.barrier.m"
    mercury__thread__barrier__succeeded = (mercury__thread__barrier__CastX_7 == mercury__thread__barrier__CastY_8);
#line 78 "thread.barrier.m"
    if (mercury__thread__barrier__succeeded)
#line 78 "thread.barrier.m"
      mercury__thread__barrier__succeeded = MR_TRUE;
#line 78 "thread.barrier.m"
    else
#line 78 "thread.barrier.m"
      {
#line 78 "thread.barrier.m"
        MR_Word mercury__thread__barrier__TypeInfo_9_9 = (MR_Word) &mercury__thread__barrier_scalar_common_1[0];
#line 78 "thread.barrier.m"
        MR_Word mercury__thread__barrier__TypeInfo_10_10;
#line 78 "thread.barrier.m"
        MR_Word mercury__thread__barrier__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__barrier__HeadVar__1_1, (MR_Integer) 0)));
#line 78 "thread.barrier.m"
        MR_Word mercury__thread__barrier__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__barrier__HeadVar__1_1, (MR_Integer) 1)));
#line 78 "thread.barrier.m"
        MR_Word mercury__thread__barrier__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__barrier__HeadVar__2_2, (MR_Integer) 0)));
#line 78 "thread.barrier.m"
        MR_Word mercury__thread__barrier__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__barrier__HeadVar__2_2, (MR_Integer) 1)));

#line 1024 "thread.barrier.c"
        {
#line 1026 "thread.barrier.c"
          mercury__thread__barrier__succeeded = mercury__builtin__unify_2_p_0(mercury__thread__barrier__TypeInfo_9_9, ((MR_Box) (mercury__thread__barrier__V_3_3)), ((MR_Box) (mercury__thread__barrier__V_5_5)));
        }
#line 78 "thread.barrier.m"
        if (mercury__thread__barrier__succeeded)
#line 78 "thread.barrier.m"
          {
#line 1033 "thread.barrier.c"
            mercury__thread__barrier__TypeInfo_10_10 = (MR_Word) &mercury__thread__barrier_scalar_common_1[1];
#line 1035 "thread.barrier.c"
            {
#line 1037 "thread.barrier.c"
              return mercury__thread__barrier__succeeded = mercury__builtin__unify_2_p_0(mercury__thread__barrier__TypeInfo_10_10, ((MR_Box) (mercury__thread__barrier__V_4_4)), ((MR_Box) (mercury__thread__barrier__V_6_6)));
            }
#line 78 "thread.barrier.m"
          }
#line 78 "thread.barrier.m"
      }
#line 78 "thread.barrier.m"
    return mercury__thread__barrier__succeeded;
#line 78 "thread.barrier.m"
  }
#line 78 "thread.barrier.m"
}

#line 56 "thread.barrier.m"
void MR_CALL 
mercury__thread__barrier__release_3_p_0(
#line 56 "thread.barrier.m"
  MR_Word mercury__thread__barrier__HeadVar__1_1)
#line 56 "thread.barrier.m"
{
#line 140 "thread.barrier.m"
  {
#line 140 "thread.barrier.m"
    MR_bool mercury__thread__barrier__succeeded;
#line 140 "thread.barrier.m"
    MR_Word mercury__thread__barrier__TypeCtorInfo_15_15 = (MR_Word) &mercury__thread__barrier__thread__barrier__type_ctor_info_why_can_we_go_0;
#line 140 "thread.barrier.m"
    MR_Word mercury__thread__barrier__TypeCtorInfo_16_16;
#line 140 "thread.barrier.m"
    MR_Word mercury__thread__barrier__WaitingOn_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__barrier__HeadVar__1_1, (MR_Integer) 0)));
#line 140 "thread.barrier.m"
    MR_Word mercury__thread__barrier__Go_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__barrier__HeadVar__1_1, (MR_Integer) 1)));
#line 154 "thread.barrier.m"
    MR_Integer mercury__thread__barrier___N_7;
#line 154 "thread.barrier.m"
    MR_Box mercury__thread__barrier__conv0__N_7;

#line 142 "thread.barrier.m"
    {
#line 142 "thread.barrier.m"
      mercury__thread__mvar__put_4_p_0(mercury__thread__barrier__TypeCtorInfo_15_15, mercury__thread__barrier__Go_5, ((MR_Box) ((MR_Integer) 1)));
    }
#line 1080 "thread.barrier.c"
    mercury__thread__barrier__TypeCtorInfo_16_16 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 154 "thread.barrier.m"
    {
#line 154 "thread.barrier.m"
      mercury__thread__mvar__take_4_p_0(mercury__thread__barrier__TypeCtorInfo_16_16, mercury__thread__barrier__WaitingOn_4, &mercury__thread__barrier__conv0__N_7);
    }
#line 154 "thread.barrier.m"
    mercury__thread__barrier___N_7 = ((MR_Integer) mercury__thread__barrier__conv0__N_7);
#line 155 "thread.barrier.m"
    {
#line 155 "thread.barrier.m"
      mercury__thread__mvar__put_4_p_0(mercury__thread__barrier__TypeCtorInfo_16_16, mercury__thread__barrier__WaitingOn_4, ((MR_Box) ((MR_Integer) 0)));
#line 155 "thread.barrier.m"
      return;
    }
#line 140 "thread.barrier.m"
  }
#line 56 "thread.barrier.m"
}

#line 47 "thread.barrier.m"
void MR_CALL 
mercury__thread__barrier__wait_3_p_0(
#line 47 "thread.barrier.m"
  MR_Word mercury__thread__barrier__HeadVar__1_1)
#line 47 "thread.barrier.m"
{
#line 104 "thread.barrier.m"
  {
#line 104 "thread.barrier.m"
    MR_bool mercury__thread__barrier__succeeded;
#line 104 "thread.barrier.m"
    MR_Word mercury__thread__barrier__TypeCtorInfo_30_30 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 104 "thread.barrier.m"
    MR_Word mercury__thread__barrier__WaitingOn_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__barrier__HeadVar__1_1, (MR_Integer) 0)));
#line 104 "thread.barrier.m"
    MR_Word mercury__thread__barrier__Go_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__barrier__HeadVar__1_1, (MR_Integer) 1)));
#line 104 "thread.barrier.m"
    MR_Integer mercury__thread__barrier__N_7;
#line 104 "thread.barrier.m"
    MR_Integer mercury__thread__barrier__StillWaitingFor_8;
#line 105 "thread.barrier.m"
    MR_Box mercury__thread__barrier__conv0_N_7;

#line 105 "thread.barrier.m"
    {
#line 105 "thread.barrier.m"
      mercury__thread__mvar__take_4_p_0(mercury__thread__barrier__TypeCtorInfo_30_30, mercury__thread__barrier__WaitingOn_4, &mercury__thread__barrier__conv0_N_7);
    }
#line 105 "thread.barrier.m"
    mercury__thread__barrier__N_7 = ((MR_Integer) mercury__thread__barrier__conv0_N_7);
#line 106 "thread.barrier.m"
    mercury__thread__barrier__StillWaitingFor_8 = (mercury__thread__barrier__N_7 - (MR_Integer) 1);
#line 108 "thread.barrier.m"
    mercury__thread__barrier__succeeded = (mercury__thread__barrier__StillWaitingFor_8 > (MR_Integer) 0);
#line 117 "thread.barrier.m"
    if (mercury__thread__barrier__succeeded)
#line 112 "thread.barrier.m"
      {
#line 112 "thread.barrier.m"
        MR_Word mercury__thread__barrier__TypeCtorInfo_31_31;
#line 112 "thread.barrier.m"
        MR_Word mercury__thread__barrier__WhyGo_9;
#line 115 "thread.barrier.m"
        MR_Box mercury__thread__barrier__conv1_WhyGo_9;

#line 112 "thread.barrier.m"
        {
#line 112 "thread.barrier.m"
          mercury__thread__mvar__put_4_p_0(mercury__thread__barrier__TypeCtorInfo_30_30, mercury__thread__barrier__WaitingOn_4, ((MR_Box) (mercury__thread__barrier__StillWaitingFor_8)));
        }
#line 1152 "thread.barrier.c"
        mercury__thread__barrier__TypeCtorInfo_31_31 = (MR_Word) &mercury__thread__barrier__thread__barrier__type_ctor_info_why_can_we_go_0;
#line 115 "thread.barrier.m"
        {
#line 115 "thread.barrier.m"
          mercury__thread__mvar__take_4_p_0(mercury__thread__barrier__TypeCtorInfo_31_31, mercury__thread__barrier__Go_5, &mercury__thread__barrier__conv1_WhyGo_9);
        }
#line 115 "thread.barrier.m"
        mercury__thread__barrier__WhyGo_9 = ((MR_Word) mercury__thread__barrier__conv1_WhyGo_9);
#line 116 "thread.barrier.m"
        {
#line 116 "thread.barrier.m"
          mercury__thread__mvar__put_4_p_0(mercury__thread__barrier__TypeCtorInfo_31_31, mercury__thread__barrier__Go_5, ((MR_Box) (mercury__thread__barrier__WhyGo_9)));
#line 116 "thread.barrier.m"
          return;
        }
#line 112 "thread.barrier.m"
      }
#line 117 "thread.barrier.m"
    else
#line 121 "thread.barrier.m"
      {
#line 117 "thread.barrier.m"
        mercury__thread__barrier__succeeded = (mercury__thread__barrier__StillWaitingFor_8 == (MR_Integer) 0);
#line 121 "thread.barrier.m"
        if (mercury__thread__barrier__succeeded)
#line 119 "thread.barrier.m"
          {
#line 119 "thread.barrier.m"
            MR_Word mercury__thread__barrier__TypeCtorInfo_32_32 = (MR_Word) &mercury__thread__barrier__thread__barrier__type_ctor_info_why_can_we_go_0;

#line 119 "thread.barrier.m"
            {
#line 119 "thread.barrier.m"
              mercury__thread__mvar__put_4_p_0(mercury__thread__barrier__TypeCtorInfo_32_32, mercury__thread__barrier__Go_5, ((MR_Box) ((MR_Integer) 0)));
            }
#line 120 "thread.barrier.m"
            {
#line 120 "thread.barrier.m"
              mercury__thread__mvar__put_4_p_0(mercury__thread__barrier__TypeCtorInfo_30_30, mercury__thread__barrier__WaitingOn_4, ((MR_Box) (mercury__thread__barrier__StillWaitingFor_8)));
#line 120 "thread.barrier.m"
              return;
            }
#line 119 "thread.barrier.m"
          }
#line 121 "thread.barrier.m"
        else
#line 122 "thread.barrier.m"
          {
#line 122 "thread.barrier.m"
            MR_Word mercury__thread__barrier__TypeCtorInfo_33_33;
#line 122 "thread.barrier.m"
            MR_Word mercury__thread__barrier__WhyGo_28;
#line 129 "thread.barrier.m"
            MR_Box mercury__thread__barrier__conv2_WhyGo_28;

#line 122 "thread.barrier.m"
            {
#line 122 "thread.barrier.m"
              mercury__thread__mvar__put_4_p_0(mercury__thread__barrier__TypeCtorInfo_30_30, mercury__thread__barrier__WaitingOn_4, ((MR_Box) ((MR_Integer) 0)));
            }
#line 1213 "thread.barrier.c"
            mercury__thread__barrier__TypeCtorInfo_33_33 = (MR_Word) &mercury__thread__barrier__thread__barrier__type_ctor_info_why_can_we_go_0;
#line 129 "thread.barrier.m"
            {
#line 129 "thread.barrier.m"
              mercury__thread__mvar__take_4_p_0(mercury__thread__barrier__TypeCtorInfo_33_33, mercury__thread__barrier__Go_5, &mercury__thread__barrier__conv2_WhyGo_28);
            }
#line 129 "thread.barrier.m"
            mercury__thread__barrier__WhyGo_28 = ((MR_Word) mercury__thread__barrier__conv2_WhyGo_28);
#line 130 "thread.barrier.m"
            {
#line 130 "thread.barrier.m"
              mercury__thread__mvar__put_4_p_0(mercury__thread__barrier__TypeCtorInfo_33_33, mercury__thread__barrier__Go_5, ((MR_Box) (mercury__thread__barrier__WhyGo_28)));
            }
#line 135 "thread.barrier.m"
            if ((mercury__thread__barrier__WhyGo_28 == (MR_Integer) 0))
#line 132 "thread.barrier.m"
              {
#line 133 "thread.barrier.m"
                {
#line 133 "thread.barrier.m"
                  mercury__require__unexpected_3_p_0((MR_String) "thread.barrier.m", (MR_String) "predicate \140thread.barrier.wait\'/3", (MR_String) "Too many threads called barrier/3 on this barrier.");
#line 133 "thread.barrier.m"
                  return;
                }
#line 132 "thread.barrier.m"
              }
#line 135 "thread.barrier.m"
            else
#line 136 "thread.barrier.m"
              {
#line 136 "thread.barrier.m"
              }
#line 122 "thread.barrier.m"
          }
#line 121 "thread.barrier.m"
      }
#line 104 "thread.barrier.m"
  }
#line 47 "thread.barrier.m"
}

#line 39 "thread.barrier.m"
void MR_CALL 
mercury__thread__barrier__init_4_p_0(
#line 39 "thread.barrier.m"
  MR_Integer mercury__thread__barrier__N_5,
#line 39 "thread.barrier.m"
  MR_Word * mercury__thread__barrier__HeadVar__2_2)
#line 39 "thread.barrier.m"
{
#line 97 "thread.barrier.m"
  {
#line 97 "thread.barrier.m"
    MR_bool mercury__thread__barrier__succeeded;
#line 97 "thread.barrier.m"
    MR_Word mercury__thread__barrier__TypeCtorInfo_14_14 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 97 "thread.barrier.m"
    MR_Word mercury__thread__barrier__TypeCtorInfo_15_15;
#line 97 "thread.barrier.m"
    MR_Word mercury__thread__barrier__WaitingOn_6;
#line 97 "thread.barrier.m"
    MR_Word mercury__thread__barrier__Go_7;

#line 98 "thread.barrier.m"
    {
#line 98 "thread.barrier.m"
      mercury__thread__mvar__init_3_p_0(mercury__thread__barrier__TypeCtorInfo_14_14, &mercury__thread__barrier__WaitingOn_6);
    }
#line 1282 "thread.barrier.c"
    mercury__thread__barrier__TypeCtorInfo_15_15 = (MR_Word) &mercury__thread__barrier__thread__barrier__type_ctor_info_why_can_we_go_0;
#line 99 "thread.barrier.m"
    {
#line 99 "thread.barrier.m"
      mercury__thread__mvar__init_3_p_0(mercury__thread__barrier__TypeCtorInfo_15_15, &mercury__thread__barrier__Go_7);
    }
#line 97 "thread.barrier.m"
    {
#line 97 "thread.barrier.m"
      MR_Word base;
#line 97 "thread.barrier.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 97 "thread.barrier.m"
      *mercury__thread__barrier__HeadVar__2_2 = base;
#line 97 "thread.barrier.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__thread__barrier__WaitingOn_6));
#line 97 "thread.barrier.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__thread__barrier__Go_7));
#line 97 "thread.barrier.m"
    }
#line 100 "thread.barrier.m"
    {
#line 100 "thread.barrier.m"
      mercury__thread__mvar__put_4_p_0(mercury__thread__barrier__TypeCtorInfo_14_14, mercury__thread__barrier__WaitingOn_6, ((MR_Box) (mercury__thread__barrier__N_5)));
#line 100 "thread.barrier.m"
      return;
    }
#line 97 "thread.barrier.m"
  }
#line 39 "thread.barrier.m"
}

void mercury__thread__barrier__init(void)
{
}

void mercury__thread__barrier__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__thread__barrier__thread__barrier__type_ctor_info_barrier_0);
	MR_register_type_ctor_info(&mercury__thread__barrier__thread__barrier__type_ctor_info_why_can_we_go_0);
}

void mercury__thread__barrier__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module thread.barrier. */
