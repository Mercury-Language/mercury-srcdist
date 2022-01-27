/*
** Automatically generated from `thread.channel.m'
** by the Mercury compiler,
** version rotd-2014-12-12
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


/* :- module thread.channel. */
/* :- implementation. */

/*
INIT mercury__thread__channel__init
ENDINIT
*/

#include "thread.channel.mih"


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




#line 94 "thread.channel.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__thread__channel__thread__channel__pti_item_1__pseudo_1;

#line 97 "thread.channel.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__thread__channel__thread__mvar__pti_mvar_1__pseudo_thread__channel__pti_item_1__pseudo_1;

#line 100 "thread.channel.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__thread__channel__thread__mvar__pti_mvar_1__pseudo_thread__mvar__pti_mvar_1__pseudo_thread__channel__pti_item_1__pseudo_1;

#line 103 "thread.channel.c"
static const MR_PseudoTypeInfo mercury__thread__channel__thread__channel__field_types_channel_1_0[2];

#line 106 "thread.channel.c"
static const MR_DuFunctorDesc mercury__thread__channel__thread__channel__du_functor_desc_channel_1_0;

#line 109 "thread.channel.c"
static const MR_DuFunctorDescPtr mercury__thread__channel__thread__channel__du_stag_ordered_channel_1_0[1];

#line 112 "thread.channel.c"
static const MR_DuPtagLayout mercury__thread__channel__thread__channel__du_ptag_ordered_channel_1[1];

#line 115 "thread.channel.c"
static const MR_DuFunctorDescPtr mercury__thread__channel__thread__channel__du_name_ordered_channel_1[1];

#line 118 "thread.channel.c"
static const MR_Integer mercury__thread__channel__thread__channel__functor_number_map_channel_1[1];

#line 121 "thread.channel.c"
static const MR_PseudoTypeInfo mercury__thread__channel__thread__channel__field_types_item_1_0[2];

#line 124 "thread.channel.c"
static const MR_DuFunctorDesc mercury__thread__channel__thread__channel__du_functor_desc_item_1_0;

#line 127 "thread.channel.c"
static const MR_DuFunctorDescPtr mercury__thread__channel__thread__channel__du_stag_ordered_item_1_0[1];

#line 130 "thread.channel.c"
static const MR_DuPtagLayout mercury__thread__channel__thread__channel__du_ptag_ordered_item_1[1];

#line 133 "thread.channel.c"
static const MR_DuFunctorDescPtr mercury__thread__channel__thread__channel__du_name_ordered_item_1[1];

#line 136 "thread.channel.c"
static const MR_Integer mercury__thread__channel__thread__channel__functor_number_map_item_1[1];

#line 139 "thread.channel.c"
static MR_bool MR_CALL 
mercury__thread__channel____Unify____channel_1_0_10001(
#line 142 "thread.channel.c"
  MR_Box mercury__thread__channel__wrapper_arg_1,
#line 144 "thread.channel.c"
  MR_Box mercury__thread__channel__wrapper_arg_2,
#line 146 "thread.channel.c"
  MR_Box mercury__thread__channel__wrapper_arg_3);

#line 149 "thread.channel.c"
static void MR_CALL 
mercury__thread__channel____Compare____channel_1_0_10001(
#line 152 "thread.channel.c"
  MR_Box mercury__thread__channel__wrapper_arg_1,
#line 154 "thread.channel.c"
  MR_Box * mercury__thread__channel__wrapper_arg_2,
#line 156 "thread.channel.c"
  MR_Box mercury__thread__channel__wrapper_arg_3,
#line 158 "thread.channel.c"
  MR_Box mercury__thread__channel__wrapper_arg_4);

#line 161 "thread.channel.c"
static MR_bool MR_CALL 
mercury__thread__channel____Unify____item_1_0_10001(
#line 164 "thread.channel.c"
  MR_Box mercury__thread__channel__wrapper_arg_1,
#line 166 "thread.channel.c"
  MR_Box mercury__thread__channel__wrapper_arg_2,
#line 168 "thread.channel.c"
  MR_Box mercury__thread__channel__wrapper_arg_3);

#line 171 "thread.channel.c"
static void MR_CALL 
mercury__thread__channel____Compare____item_1_0_10001(
#line 174 "thread.channel.c"
  MR_Box mercury__thread__channel__wrapper_arg_1,
#line 176 "thread.channel.c"
  MR_Box * mercury__thread__channel__wrapper_arg_2,
#line 178 "thread.channel.c"
  MR_Box mercury__thread__channel__wrapper_arg_3,
#line 180 "thread.channel.c"
  MR_Box mercury__thread__channel__wrapper_arg_4);

#line 183 "thread.channel.c"
static MR_bool MR_CALL 
mercury__thread__channel____Unify____stream_1_0_10001(
#line 186 "thread.channel.c"
  MR_Box mercury__thread__channel__wrapper_arg_1,
#line 188 "thread.channel.c"
  MR_Box mercury__thread__channel__wrapper_arg_2,
#line 190 "thread.channel.c"
  MR_Box mercury__thread__channel__wrapper_arg_3);

#line 193 "thread.channel.c"
static void MR_CALL 
mercury__thread__channel____Compare____stream_1_0_10001(
#line 196 "thread.channel.c"
  MR_Box mercury__thread__channel__wrapper_arg_1,
#line 198 "thread.channel.c"
  MR_Box * mercury__thread__channel__wrapper_arg_2,
#line 200 "thread.channel.c"
  MR_Box mercury__thread__channel__wrapper_arg_3,
#line 202 "thread.channel.c"
  MR_Box mercury__thread__channel__wrapper_arg_4);

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__thread__channel__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);


static /* final */ const MR_Box mercury__thread__channel_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__thread__channel_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__thread__channel_scalar_common_3[2][5];




static /* final */ const MR_Box mercury__thread__channel_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__thread__channel_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__thread__channel_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__thread__channel_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__thread__channel_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__thread__channel_scalar_common_2[0])),
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



#line 588 "thread.channel.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__thread__channel__thread__channel__pti_item_1__pseudo_1 = {
  &mercury__thread__channel__thread__channel__type_ctor_info_item_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 596 "thread.channel.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__thread__channel__thread__mvar__pti_mvar_1__pseudo_thread__channel__pti_item_1__pseudo_1 = {
  &mercury__thread__mvar__thread__mvar__type_ctor_info_mvar_1,
  {
    (MR_PseudoTypeInfo) &mercury__thread__channel__thread__channel__pti_item_1__pseudo_1
  }
};

#line 604 "thread.channel.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__thread__channel__thread__mvar__pti_mvar_1__pseudo_thread__mvar__pti_mvar_1__pseudo_thread__channel__pti_item_1__pseudo_1 = {
  &mercury__thread__mvar__thread__mvar__type_ctor_info_mvar_1,
  {
    (MR_PseudoTypeInfo) &mercury__thread__channel__thread__mvar__pti_mvar_1__pseudo_thread__channel__pti_item_1__pseudo_1
  }
};

#line 612 "thread.channel.c"
static const MR_PseudoTypeInfo mercury__thread__channel__thread__channel__field_types_channel_1_0[2] = {
  (MR_PseudoTypeInfo) &mercury__thread__channel__thread__mvar__pti_mvar_1__pseudo_thread__mvar__pti_mvar_1__pseudo_thread__channel__pti_item_1__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__thread__channel__thread__mvar__pti_mvar_1__pseudo_thread__mvar__pti_mvar_1__pseudo_thread__channel__pti_item_1__pseudo_1
};

#line 618 "thread.channel.c"
static const MR_DuFunctorDesc mercury__thread__channel__thread__channel__du_functor_desc_channel_1_0 = {
  (MR_String) "channel",
  (MR_Integer) 2,
  (MR_Integer) 3,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__thread__channel__thread__channel__field_types_channel_1_0,
  NULL,
  NULL,
  NULL
};

#line 633 "thread.channel.c"
static const MR_DuFunctorDescPtr mercury__thread__channel__thread__channel__du_stag_ordered_channel_1_0[1] = {
  &mercury__thread__channel__thread__channel__du_functor_desc_channel_1_0
};

#line 638 "thread.channel.c"
static const MR_DuPtagLayout mercury__thread__channel__thread__channel__du_ptag_ordered_channel_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__thread__channel__thread__channel__du_stag_ordered_channel_1_0
  }
};

#line 647 "thread.channel.c"
static const MR_DuFunctorDescPtr mercury__thread__channel__thread__channel__du_name_ordered_channel_1[1] = {
  &mercury__thread__channel__thread__channel__du_functor_desc_channel_1_0
};

#line 652 "thread.channel.c"
static const MR_Integer mercury__thread__channel__thread__channel__functor_number_map_channel_1[1] = {
  (MR_Integer) 0
};

#line 657 "thread.channel.c"
const MR_TypeCtorInfo_Struct mercury__thread__channel__thread__channel__type_ctor_info_channel_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__thread__channel____Unify____channel_1_0_10001)),
  ((MR_Box) (mercury__thread__channel____Compare____channel_1_0_10001)),
  (MR_String) "thread.channel",
  (MR_String) "channel",
  {
    mercury__thread__channel__thread__channel__du_name_ordered_channel_1
  },
  {
    mercury__thread__channel__thread__channel__du_ptag_ordered_channel_1
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__thread__channel__thread__channel__functor_number_map_channel_1
};

#line 678 "thread.channel.c"
static const MR_PseudoTypeInfo mercury__thread__channel__thread__channel__field_types_item_1_0[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mercury__thread__channel__thread__mvar__pti_mvar_1__pseudo_thread__channel__pti_item_1__pseudo_1
};

#line 684 "thread.channel.c"
static const MR_DuFunctorDesc mercury__thread__channel__thread__channel__du_functor_desc_item_1_0 = {
  (MR_String) "item",
  (MR_Integer) 2,
  (MR_Integer) 3,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__thread__channel__thread__channel__field_types_item_1_0,
  NULL,
  NULL,
  NULL
};

#line 699 "thread.channel.c"
static const MR_DuFunctorDescPtr mercury__thread__channel__thread__channel__du_stag_ordered_item_1_0[1] = {
  &mercury__thread__channel__thread__channel__du_functor_desc_item_1_0
};

#line 704 "thread.channel.c"
static const MR_DuPtagLayout mercury__thread__channel__thread__channel__du_ptag_ordered_item_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__thread__channel__thread__channel__du_stag_ordered_item_1_0
  }
};

#line 713 "thread.channel.c"
static const MR_DuFunctorDescPtr mercury__thread__channel__thread__channel__du_name_ordered_item_1[1] = {
  &mercury__thread__channel__thread__channel__du_functor_desc_item_1_0
};

#line 718 "thread.channel.c"
static const MR_Integer mercury__thread__channel__thread__channel__functor_number_map_item_1[1] = {
  (MR_Integer) 0
};

#line 723 "thread.channel.c"
const MR_TypeCtorInfo_Struct mercury__thread__channel__thread__channel__type_ctor_info_item_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__thread__channel____Unify____item_1_0_10001)),
  ((MR_Box) (mercury__thread__channel____Compare____item_1_0_10001)),
  (MR_String) "thread.channel",
  (MR_String) "item",
  {
    mercury__thread__channel__thread__channel__du_name_ordered_item_1
  },
  {
    mercury__thread__channel__thread__channel__du_ptag_ordered_item_1
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__thread__channel__thread__channel__functor_number_map_item_1
};

#line 744 "thread.channel.c"
const MR_TypeCtorInfo_Struct mercury__thread__channel__thread__channel__type_ctor_info_stream_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__thread__channel____Unify____stream_1_0_10001)),
  ((MR_Box) (mercury__thread__channel____Compare____stream_1_0_10001)),
  (MR_String) "thread.channel",
  (MR_String) "stream",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__thread__channel__thread__mvar__pti_mvar_1__pseudo_thread__channel__pti_item_1__pseudo_1
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 765 "thread.channel.c"
static MR_bool MR_CALL 
mercury__thread__channel____Unify____channel_1_0_10001(
#line 768 "thread.channel.c"
  MR_Box mercury__thread__channel__wrapper_arg_1,
#line 770 "thread.channel.c"
  MR_Box mercury__thread__channel__wrapper_arg_2,
#line 772 "thread.channel.c"
  MR_Box mercury__thread__channel__wrapper_arg_3)
#line 774 "thread.channel.c"
{
#line 776 "thread.channel.c"
  {
#line 778 "thread.channel.c"
    MR_bool mercury__thread__channel__succeeded;

#line 781 "thread.channel.c"
    {
#line 783 "thread.channel.c"
      mercury__thread__channel__succeeded = mercury__thread__channel____Unify____channel_1_0(((MR_Word) mercury__thread__channel__wrapper_arg_1), ((MR_Word) mercury__thread__channel__wrapper_arg_2), ((MR_Word) mercury__thread__channel__wrapper_arg_3));
    }
#line 786 "thread.channel.c"
    return mercury__thread__channel__succeeded;
#line 788 "thread.channel.c"
  }
#line 790 "thread.channel.c"
}

#line 793 "thread.channel.c"
static void MR_CALL 
mercury__thread__channel____Compare____channel_1_0_10001(
#line 796 "thread.channel.c"
  MR_Box mercury__thread__channel__wrapper_arg_1,
#line 798 "thread.channel.c"
  MR_Box * mercury__thread__channel__wrapper_arg_2,
#line 800 "thread.channel.c"
  MR_Box mercury__thread__channel__wrapper_arg_3,
#line 802 "thread.channel.c"
  MR_Box mercury__thread__channel__wrapper_arg_4)
#line 804 "thread.channel.c"
{
#line 806 "thread.channel.c"
  {
#line 808 "thread.channel.c"
    MR_Word mercury__thread__channel__conv0_HeadVar__1_1;

#line 811 "thread.channel.c"
    {
#line 813 "thread.channel.c"
      mercury__thread__channel____Compare____channel_1_0(((MR_Word) mercury__thread__channel__wrapper_arg_1), &mercury__thread__channel__conv0_HeadVar__1_1, ((MR_Word) mercury__thread__channel__wrapper_arg_3), ((MR_Word) mercury__thread__channel__wrapper_arg_4));
    }
#line 816 "thread.channel.c"
    *mercury__thread__channel__wrapper_arg_2 = ((MR_Box) (mercury__thread__channel__conv0_HeadVar__1_1));
#line 818 "thread.channel.c"
  }
#line 820 "thread.channel.c"
}

#line 823 "thread.channel.c"
static MR_bool MR_CALL 
mercury__thread__channel____Unify____item_1_0_10001(
#line 826 "thread.channel.c"
  MR_Box mercury__thread__channel__wrapper_arg_1,
#line 828 "thread.channel.c"
  MR_Box mercury__thread__channel__wrapper_arg_2,
#line 830 "thread.channel.c"
  MR_Box mercury__thread__channel__wrapper_arg_3)
#line 832 "thread.channel.c"
{
#line 834 "thread.channel.c"
  {
#line 836 "thread.channel.c"
    MR_bool mercury__thread__channel__succeeded;

#line 839 "thread.channel.c"
    {
#line 841 "thread.channel.c"
      mercury__thread__channel__succeeded = mercury__thread__channel____Unify____item_1_0(((MR_Word) mercury__thread__channel__wrapper_arg_1), ((MR_Word) mercury__thread__channel__wrapper_arg_2), ((MR_Word) mercury__thread__channel__wrapper_arg_3));
    }
#line 844 "thread.channel.c"
    return mercury__thread__channel__succeeded;
#line 846 "thread.channel.c"
  }
#line 848 "thread.channel.c"
}

#line 851 "thread.channel.c"
static void MR_CALL 
mercury__thread__channel____Compare____item_1_0_10001(
#line 854 "thread.channel.c"
  MR_Box mercury__thread__channel__wrapper_arg_1,
#line 856 "thread.channel.c"
  MR_Box * mercury__thread__channel__wrapper_arg_2,
#line 858 "thread.channel.c"
  MR_Box mercury__thread__channel__wrapper_arg_3,
#line 860 "thread.channel.c"
  MR_Box mercury__thread__channel__wrapper_arg_4)
#line 862 "thread.channel.c"
{
#line 864 "thread.channel.c"
  {
#line 866 "thread.channel.c"
    MR_Word mercury__thread__channel__conv0_HeadVar__1_1;

#line 869 "thread.channel.c"
    {
#line 871 "thread.channel.c"
      mercury__thread__channel____Compare____item_1_0(((MR_Word) mercury__thread__channel__wrapper_arg_1), &mercury__thread__channel__conv0_HeadVar__1_1, ((MR_Word) mercury__thread__channel__wrapper_arg_3), ((MR_Word) mercury__thread__channel__wrapper_arg_4));
    }
#line 874 "thread.channel.c"
    *mercury__thread__channel__wrapper_arg_2 = ((MR_Box) (mercury__thread__channel__conv0_HeadVar__1_1));
#line 876 "thread.channel.c"
  }
#line 878 "thread.channel.c"
}

#line 881 "thread.channel.c"
static MR_bool MR_CALL 
mercury__thread__channel____Unify____stream_1_0_10001(
#line 884 "thread.channel.c"
  MR_Box mercury__thread__channel__wrapper_arg_1,
#line 886 "thread.channel.c"
  MR_Box mercury__thread__channel__wrapper_arg_2,
#line 888 "thread.channel.c"
  MR_Box mercury__thread__channel__wrapper_arg_3)
#line 890 "thread.channel.c"
{
#line 892 "thread.channel.c"
  {
#line 894 "thread.channel.c"
    MR_bool mercury__thread__channel__succeeded;

#line 897 "thread.channel.c"
    {
#line 899 "thread.channel.c"
      mercury__thread__channel__succeeded = mercury__thread__channel____Unify____stream_1_0(((MR_Word) mercury__thread__channel__wrapper_arg_1), ((MR_Word) mercury__thread__channel__wrapper_arg_2), ((MR_Word) mercury__thread__channel__wrapper_arg_3));
    }
#line 902 "thread.channel.c"
    return mercury__thread__channel__succeeded;
#line 904 "thread.channel.c"
  }
#line 906 "thread.channel.c"
}

#line 909 "thread.channel.c"
static void MR_CALL 
mercury__thread__channel____Compare____stream_1_0_10001(
#line 912 "thread.channel.c"
  MR_Box mercury__thread__channel__wrapper_arg_1,
#line 914 "thread.channel.c"
  MR_Box * mercury__thread__channel__wrapper_arg_2,
#line 916 "thread.channel.c"
  MR_Box mercury__thread__channel__wrapper_arg_3,
#line 918 "thread.channel.c"
  MR_Box mercury__thread__channel__wrapper_arg_4)
#line 920 "thread.channel.c"
{
#line 922 "thread.channel.c"
  {
#line 924 "thread.channel.c"
    MR_Word mercury__thread__channel__conv0_HeadVar__1_1;

#line 927 "thread.channel.c"
    {
#line 929 "thread.channel.c"
      mercury__thread__channel____Compare____stream_1_0(((MR_Word) mercury__thread__channel__wrapper_arg_1), &mercury__thread__channel__conv0_HeadVar__1_1, ((MR_Word) mercury__thread__channel__wrapper_arg_3), ((MR_Word) mercury__thread__channel__wrapper_arg_4));
    }
#line 932 "thread.channel.c"
    *mercury__thread__channel__wrapper_arg_2 = ((MR_Box) (mercury__thread__channel__conv0_HeadVar__1_1));
#line 934 "thread.channel.c"
  }
#line 936 "thread.channel.c"
}

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__thread__channel__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 13 "ops.opt"
{
#line 38 "ops.opt"
  {
#line 38 "ops.opt"
    MR_bool mercury__thread__channel__succeeded;

#line 38 "ops.opt"
    return (MR_Integer) 1200;
#line 38 "ops.opt"
  }
#line 13 "ops.opt"
}

#line 76 "thread.channel.m"
void MR_CALL 
mercury__thread__channel____Compare____stream_1_0(
#line 76 "thread.channel.m"
  MR_Word mercury__thread__channel__TypeInfo_for_T_6,
#line 76 "thread.channel.m"
  MR_Word * mercury__thread__channel__HeadVar__1_1,
#line 76 "thread.channel.m"
  MR_Word mercury__thread__channel__HeadVar__2_2,
#line 76 "thread.channel.m"
  MR_Word mercury__thread__channel__HeadVar__3_3)
#line 76 "thread.channel.m"
{
#line 76 "thread.channel.m"
  {
#line 76 "thread.channel.m"
    MR_bool mercury__thread__channel__succeeded;
#line 76 "thread.channel.m"
    MR_Word mercury__thread__channel__TypeCtorInfo_7_7 = (MR_Word) &mercury__thread__channel__thread__channel__type_ctor_info_item_1;
#line 76 "thread.channel.m"
    MR_Word mercury__thread__channel__TypeInfo_8_8;
#line 76 "thread.channel.m"
    MR_Word mercury__thread__channel__Cast_HeadVar1_4 = mercury__thread__channel__HeadVar__2_2;
#line 76 "thread.channel.m"
    MR_Word mercury__thread__channel__Cast_HeadVar2_5 = mercury__thread__channel__HeadVar__3_3;

#line 982 "thread.channel.c"
    {
#line 984 "thread.channel.c"
      mercury__thread__channel__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 986 "thread.channel.c"
      MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_8_8, 0) = ((MR_Box) (mercury__thread__channel__TypeCtorInfo_7_7));
#line 988 "thread.channel.c"
      MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_8_8, 1) = ((MR_Box) (mercury__thread__channel__TypeInfo_for_T_6));
#line 990 "thread.channel.c"
    }
#line 76 "thread.channel.m"
    {
#line 76 "thread.channel.m"
      mercury__thread__mvar____Compare____mvar_1_0(mercury__thread__channel__TypeInfo_8_8, mercury__thread__channel__HeadVar__1_1, (MR_Word) mercury__thread__channel__Cast_HeadVar1_4, (MR_Word) mercury__thread__channel__Cast_HeadVar2_5);
#line 76 "thread.channel.m"
      return;
    }
#line 76 "thread.channel.m"
  }
#line 76 "thread.channel.m"
}

#line 76 "thread.channel.m"
MR_bool MR_CALL 
mercury__thread__channel____Unify____stream_1_0(
#line 76 "thread.channel.m"
  MR_Word mercury__thread__channel__TypeInfo_for_T_5,
#line 76 "thread.channel.m"
  MR_Word mercury__thread__channel__HeadVar__1_1,
#line 76 "thread.channel.m"
  MR_Word mercury__thread__channel__HeadVar__2_2)
#line 76 "thread.channel.m"
{
#line 76 "thread.channel.m"
  {
#line 76 "thread.channel.m"
    MR_bool mercury__thread__channel__succeeded;
#line 76 "thread.channel.m"
    MR_Word mercury__thread__channel__TypeCtorInfo_6_6 = (MR_Word) &mercury__thread__channel__thread__channel__type_ctor_info_item_1;
#line 76 "thread.channel.m"
    MR_Word mercury__thread__channel__TypeInfo_7_7;
#line 76 "thread.channel.m"
    MR_Word mercury__thread__channel__Cast_HeadVar1_3 = mercury__thread__channel__HeadVar__1_1;
#line 76 "thread.channel.m"
    MR_Word mercury__thread__channel__Cast_HeadVar2_4 = mercury__thread__channel__HeadVar__2_2;

#line 1028 "thread.channel.c"
    {
#line 1030 "thread.channel.c"
      mercury__thread__channel__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1032 "thread.channel.c"
      MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_7_7, 0) = ((MR_Box) (mercury__thread__channel__TypeCtorInfo_6_6));
#line 1034 "thread.channel.c"
      MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_7_7, 1) = ((MR_Box) (mercury__thread__channel__TypeInfo_for_T_5));
#line 1036 "thread.channel.c"
    }
#line 76 "thread.channel.m"
    {
#line 76 "thread.channel.m"
      return mercury__thread__channel__succeeded = mercury__thread__mvar____Unify____mvar_1_0(mercury__thread__channel__TypeInfo_7_7, (MR_Word) mercury__thread__channel__Cast_HeadVar1_3, (MR_Word) mercury__thread__channel__Cast_HeadVar2_4);
    }
#line 76 "thread.channel.m"
    return mercury__thread__channel__succeeded;
#line 76 "thread.channel.m"
  }
#line 76 "thread.channel.m"
}

#line 78 "thread.channel.m"
void MR_CALL 
mercury__thread__channel____Compare____item_1_0(
#line 78 "thread.channel.m"
  MR_Word mercury__thread__channel__TypeInfo_for_T_11,
#line 78 "thread.channel.m"
  MR_Word * mercury__thread__channel__HeadVar__1_1,
#line 78 "thread.channel.m"
  MR_Word mercury__thread__channel__HeadVar__2_2,
#line 78 "thread.channel.m"
  MR_Word mercury__thread__channel__HeadVar__3_3)
#line 78 "thread.channel.m"
{
#line 78 "thread.channel.m"
  {
#line 78 "thread.channel.m"
    MR_bool mercury__thread__channel__succeeded;
#line 78 "thread.channel.m"
    MR_Integer mercury__thread__channel__CastX_9 = (MR_Integer) mercury__thread__channel__HeadVar__2_2;
#line 78 "thread.channel.m"
    MR_Integer mercury__thread__channel__CastY_10 = (MR_Integer) mercury__thread__channel__HeadVar__3_3;

#line 78 "thread.channel.m"
    mercury__thread__channel__succeeded = (mercury__thread__channel__CastX_9 == mercury__thread__channel__CastY_10);
#line 78 "thread.channel.m"
    if (mercury__thread__channel__succeeded)
#line 1076 "thread.channel.c"
      *mercury__thread__channel__HeadVar__1_1 = (MR_Integer) 0;
#line 78 "thread.channel.m"
    else
#line 78 "thread.channel.m"
      {
#line 78 "thread.channel.m"
        MR_Box mercury__thread__channel__V_4_4 = (MR_hl_field(MR_mktag(0), mercury__thread__channel__HeadVar__2_2, (MR_Integer) 0));
#line 78 "thread.channel.m"
        MR_Word mercury__thread__channel__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__channel__HeadVar__2_2, (MR_Integer) 1)));
#line 78 "thread.channel.m"
        MR_Box mercury__thread__channel__V_6_6 = (MR_hl_field(MR_mktag(0), mercury__thread__channel__HeadVar__3_3, (MR_Integer) 0));
#line 78 "thread.channel.m"
        MR_Word mercury__thread__channel__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__channel__HeadVar__3_3, (MR_Integer) 1)));
#line 78 "thread.channel.m"
        MR_Word mercury__thread__channel__V_8_8;

#line 78 "thread.channel.m"
        {
#line 78 "thread.channel.m"
          mercury__builtin__compare_3_p_0(mercury__thread__channel__TypeInfo_for_T_11, &mercury__thread__channel__V_8_8, mercury__thread__channel__V_4_4, mercury__thread__channel__V_6_6);
        }
#line 1098 "thread.channel.c"
        mercury__thread__channel__succeeded = (mercury__thread__channel__V_8_8 == (MR_Integer) 0);
#line 78 "thread.channel.m"
        mercury__thread__channel__succeeded = !(mercury__thread__channel__succeeded);
#line 78 "thread.channel.m"
        if (mercury__thread__channel__succeeded)
#line 78 "thread.channel.m"
          *mercury__thread__channel__HeadVar__1_1 = mercury__thread__channel__V_8_8;
#line 78 "thread.channel.m"
        else
#line 78 "thread.channel.m"
          {
#line 78 "thread.channel.m"
            MR_Word mercury__thread__channel__TypeCtorInfo_12_12 = (MR_Word) &mercury__thread__channel__thread__channel__type_ctor_info_item_1;
#line 78 "thread.channel.m"
            MR_Word mercury__thread__channel__TypeInfo_13_13;

#line 1115 "thread.channel.c"
            {
#line 1117 "thread.channel.c"
              mercury__thread__channel__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1119 "thread.channel.c"
              MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_13_13, 0) = ((MR_Box) (mercury__thread__channel__TypeCtorInfo_12_12));
#line 1121 "thread.channel.c"
              MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_13_13, 1) = ((MR_Box) (mercury__thread__channel__TypeInfo_for_T_11));
#line 1123 "thread.channel.c"
            }
#line 78 "thread.channel.m"
            {
#line 78 "thread.channel.m"
              mercury__thread__mvar____Compare____mvar_1_0(mercury__thread__channel__TypeInfo_13_13, mercury__thread__channel__HeadVar__1_1, (MR_Word) mercury__thread__channel__V_5_5, (MR_Word) mercury__thread__channel__V_7_7);
#line 78 "thread.channel.m"
              return;
            }
#line 78 "thread.channel.m"
          }
#line 78 "thread.channel.m"
      }
#line 78 "thread.channel.m"
  }
#line 78 "thread.channel.m"
}

#line 78 "thread.channel.m"
MR_bool MR_CALL 
mercury__thread__channel____Unify____item_1_0(
#line 78 "thread.channel.m"
  MR_Word mercury__thread__channel__TypeInfo_for_T_9,
#line 78 "thread.channel.m"
  MR_Word mercury__thread__channel__HeadVar__1_1,
#line 78 "thread.channel.m"
  MR_Word mercury__thread__channel__HeadVar__2_2)
#line 78 "thread.channel.m"
{
#line 78 "thread.channel.m"
  {
#line 78 "thread.channel.m"
    MR_bool mercury__thread__channel__succeeded;
#line 78 "thread.channel.m"
    MR_Integer mercury__thread__channel__CastX_7 = (MR_Integer) mercury__thread__channel__HeadVar__1_1;
#line 78 "thread.channel.m"
    MR_Integer mercury__thread__channel__CastY_8 = (MR_Integer) mercury__thread__channel__HeadVar__2_2;

#line 78 "thread.channel.m"
    mercury__thread__channel__succeeded = (mercury__thread__channel__CastX_7 == mercury__thread__channel__CastY_8);
#line 78 "thread.channel.m"
    if (mercury__thread__channel__succeeded)
#line 78 "thread.channel.m"
      mercury__thread__channel__succeeded = MR_TRUE;
#line 78 "thread.channel.m"
    else
#line 78 "thread.channel.m"
      {
#line 78 "thread.channel.m"
        MR_Word mercury__thread__channel__TypeCtorInfo_10_10;
#line 78 "thread.channel.m"
        MR_Word mercury__thread__channel__TypeInfo_11_11;
#line 78 "thread.channel.m"
        MR_Box mercury__thread__channel__V_3_3 = (MR_hl_field(MR_mktag(0), mercury__thread__channel__HeadVar__1_1, (MR_Integer) 0));
#line 78 "thread.channel.m"
        MR_Word mercury__thread__channel__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__channel__HeadVar__1_1, (MR_Integer) 1)));
#line 78 "thread.channel.m"
        MR_Box mercury__thread__channel__V_5_5 = (MR_hl_field(MR_mktag(0), mercury__thread__channel__HeadVar__2_2, (MR_Integer) 0));
#line 78 "thread.channel.m"
        MR_Word mercury__thread__channel__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__channel__HeadVar__2_2, (MR_Integer) 1)));

#line 1184 "thread.channel.c"
        {
#line 1186 "thread.channel.c"
          mercury__thread__channel__succeeded = mercury__builtin__unify_2_p_0(mercury__thread__channel__TypeInfo_for_T_9, mercury__thread__channel__V_3_3, mercury__thread__channel__V_5_5);
        }
#line 78 "thread.channel.m"
        if (mercury__thread__channel__succeeded)
#line 78 "thread.channel.m"
          {
#line 1193 "thread.channel.c"
            mercury__thread__channel__TypeCtorInfo_10_10 = (MR_Word) &mercury__thread__channel__thread__channel__type_ctor_info_item_1;
#line 1195 "thread.channel.c"
            {
#line 1197 "thread.channel.c"
              mercury__thread__channel__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1199 "thread.channel.c"
              MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_11_11, 0) = ((MR_Box) (mercury__thread__channel__TypeCtorInfo_10_10));
#line 1201 "thread.channel.c"
              MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_11_11, 1) = ((MR_Box) (mercury__thread__channel__TypeInfo_for_T_9));
#line 1203 "thread.channel.c"
            }
#line 1205 "thread.channel.c"
            {
#line 1207 "thread.channel.c"
              return mercury__thread__channel__succeeded = mercury__thread__mvar____Unify____mvar_1_0(mercury__thread__channel__TypeInfo_11_11, (MR_Word) mercury__thread__channel__V_4_4, (MR_Word) mercury__thread__channel__V_6_6);
            }
#line 78 "thread.channel.m"
          }
#line 78 "thread.channel.m"
      }
#line 78 "thread.channel.m"
    return mercury__thread__channel__succeeded;
#line 78 "thread.channel.m"
  }
#line 78 "thread.channel.m"
}

#line 70 "thread.channel.m"
void MR_CALL 
mercury__thread__channel____Compare____channel_1_0(
#line 70 "thread.channel.m"
  MR_Word mercury__thread__channel__TypeInfo_for_T_11,
#line 70 "thread.channel.m"
  MR_Word * mercury__thread__channel__HeadVar__1_1,
#line 70 "thread.channel.m"
  MR_Word mercury__thread__channel__HeadVar__2_2,
#line 70 "thread.channel.m"
  MR_Word mercury__thread__channel__HeadVar__3_3)
#line 70 "thread.channel.m"
{
#line 70 "thread.channel.m"
  {
#line 70 "thread.channel.m"
    MR_bool mercury__thread__channel__succeeded;
#line 70 "thread.channel.m"
    MR_Integer mercury__thread__channel__CastX_9 = (MR_Integer) mercury__thread__channel__HeadVar__2_2;
#line 70 "thread.channel.m"
    MR_Integer mercury__thread__channel__CastY_10 = (MR_Integer) mercury__thread__channel__HeadVar__3_3;

#line 70 "thread.channel.m"
    mercury__thread__channel__succeeded = (mercury__thread__channel__CastX_9 == mercury__thread__channel__CastY_10);
#line 70 "thread.channel.m"
    if (mercury__thread__channel__succeeded)
#line 1247 "thread.channel.c"
      *mercury__thread__channel__HeadVar__1_1 = (MR_Integer) 0;
#line 70 "thread.channel.m"
    else
#line 70 "thread.channel.m"
      {
#line 70 "thread.channel.m"
        MR_Word mercury__thread__channel__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__channel__HeadVar__2_2, (MR_Integer) 0)));
#line 70 "thread.channel.m"
        MR_Word mercury__thread__channel__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__channel__HeadVar__2_2, (MR_Integer) 1)));
#line 70 "thread.channel.m"
        MR_Word mercury__thread__channel__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__channel__HeadVar__3_3, (MR_Integer) 0)));
#line 70 "thread.channel.m"
        MR_Word mercury__thread__channel__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__channel__HeadVar__3_3, (MR_Integer) 1)));
#line 70 "thread.channel.m"
        MR_Word mercury__thread__channel__V_8_8;
#line 70 "thread.channel.m"
        MR_Word mercury__thread__channel__TypeCtorInfo_12_12 = (MR_Word) &mercury__thread__channel__thread__channel__type_ctor_info_item_1;
#line 70 "thread.channel.m"
        MR_Word mercury__thread__channel__TypeInfo_13_13;
#line 70 "thread.channel.m"
        MR_Word mercury__thread__channel__TypeCtorInfo_14_14 = (MR_Word) &mercury__thread__mvar__thread__mvar__type_ctor_info_mvar_1;
#line 70 "thread.channel.m"
        MR_Word mercury__thread__channel__TypeInfo_15_15;

#line 1272 "thread.channel.c"
        {
#line 1274 "thread.channel.c"
          mercury__thread__channel__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1276 "thread.channel.c"
          MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_13_13, 0) = ((MR_Box) (mercury__thread__channel__TypeCtorInfo_12_12));
#line 1278 "thread.channel.c"
          MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_13_13, 1) = ((MR_Box) (mercury__thread__channel__TypeInfo_for_T_11));
#line 1280 "thread.channel.c"
        }
#line 1282 "thread.channel.c"
        {
#line 1284 "thread.channel.c"
          mercury__thread__channel__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1286 "thread.channel.c"
          MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_15_15, 0) = ((MR_Box) (mercury__thread__channel__TypeCtorInfo_14_14));
#line 1288 "thread.channel.c"
          MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_15_15, 1) = ((MR_Box) (mercury__thread__channel__TypeInfo_13_13));
#line 1290 "thread.channel.c"
        }
#line 70 "thread.channel.m"
        {
#line 70 "thread.channel.m"
          mercury__thread__mvar____Compare____mvar_1_0(mercury__thread__channel__TypeInfo_15_15, &mercury__thread__channel__V_8_8, (MR_Word) mercury__thread__channel__V_4_4, (MR_Word) mercury__thread__channel__V_6_6);
        }
#line 1297 "thread.channel.c"
        mercury__thread__channel__succeeded = (mercury__thread__channel__V_8_8 == (MR_Integer) 0);
#line 70 "thread.channel.m"
        mercury__thread__channel__succeeded = !(mercury__thread__channel__succeeded);
#line 70 "thread.channel.m"
        if (mercury__thread__channel__succeeded)
#line 70 "thread.channel.m"
          *mercury__thread__channel__HeadVar__1_1 = mercury__thread__channel__V_8_8;
#line 70 "thread.channel.m"
        else
#line 70 "thread.channel.m"
          {
#line 70 "thread.channel.m"
            MR_Word mercury__thread__channel__TypeCtorInfo_17_17 = (MR_Word) &mercury__thread__channel__thread__channel__type_ctor_info_item_1;
#line 70 "thread.channel.m"
            MR_Word mercury__thread__channel__TypeInfo_18_18;
#line 70 "thread.channel.m"
            MR_Word mercury__thread__channel__TypeCtorInfo_19_19 = (MR_Word) &mercury__thread__mvar__thread__mvar__type_ctor_info_mvar_1;
#line 70 "thread.channel.m"
            MR_Word mercury__thread__channel__TypeInfo_20_20;

#line 1318 "thread.channel.c"
            {
#line 1320 "thread.channel.c"
              mercury__thread__channel__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1322 "thread.channel.c"
              MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_18_18, 0) = ((MR_Box) (mercury__thread__channel__TypeCtorInfo_17_17));
#line 1324 "thread.channel.c"
              MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_18_18, 1) = ((MR_Box) (mercury__thread__channel__TypeInfo_for_T_11));
#line 1326 "thread.channel.c"
            }
#line 1328 "thread.channel.c"
            {
#line 1330 "thread.channel.c"
              mercury__thread__channel__TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1332 "thread.channel.c"
              MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_20_20, 0) = ((MR_Box) (mercury__thread__channel__TypeCtorInfo_19_19));
#line 1334 "thread.channel.c"
              MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_20_20, 1) = ((MR_Box) (mercury__thread__channel__TypeInfo_18_18));
#line 1336 "thread.channel.c"
            }
#line 70 "thread.channel.m"
            {
#line 70 "thread.channel.m"
              mercury__thread__mvar____Compare____mvar_1_0(mercury__thread__channel__TypeInfo_20_20, mercury__thread__channel__HeadVar__1_1, (MR_Word) mercury__thread__channel__V_5_5, (MR_Word) mercury__thread__channel__V_7_7);
#line 70 "thread.channel.m"
              return;
            }
#line 70 "thread.channel.m"
          }
#line 70 "thread.channel.m"
      }
#line 70 "thread.channel.m"
  }
#line 70 "thread.channel.m"
}

#line 70 "thread.channel.m"
MR_bool MR_CALL 
mercury__thread__channel____Unify____channel_1_0(
#line 70 "thread.channel.m"
  MR_Word mercury__thread__channel__TypeInfo_for_T_9,
#line 70 "thread.channel.m"
  MR_Word mercury__thread__channel__HeadVar__1_1,
#line 70 "thread.channel.m"
  MR_Word mercury__thread__channel__HeadVar__2_2)
#line 70 "thread.channel.m"
{
#line 70 "thread.channel.m"
  {
#line 70 "thread.channel.m"
    MR_bool mercury__thread__channel__succeeded;
#line 70 "thread.channel.m"
    MR_Integer mercury__thread__channel__CastX_7 = (MR_Integer) mercury__thread__channel__HeadVar__1_1;
#line 70 "thread.channel.m"
    MR_Integer mercury__thread__channel__CastY_8 = (MR_Integer) mercury__thread__channel__HeadVar__2_2;

#line 70 "thread.channel.m"
    mercury__thread__channel__succeeded = (mercury__thread__channel__CastX_7 == mercury__thread__channel__CastY_8);
#line 70 "thread.channel.m"
    if (mercury__thread__channel__succeeded)
#line 70 "thread.channel.m"
      mercury__thread__channel__succeeded = MR_TRUE;
#line 70 "thread.channel.m"
    else
#line 70 "thread.channel.m"
      {
#line 70 "thread.channel.m"
        MR_Word mercury__thread__channel__TypeCtorInfo_10_10 = (MR_Word) &mercury__thread__channel__thread__channel__type_ctor_info_item_1;
#line 70 "thread.channel.m"
        MR_Word mercury__thread__channel__TypeCtorInfo_12_12 = (MR_Word) &mercury__thread__mvar__thread__mvar__type_ctor_info_mvar_1;
#line 70 "thread.channel.m"
        MR_Word mercury__thread__channel__TypeInfo_16_16;
#line 70 "thread.channel.m"
        MR_Word mercury__thread__channel__TypeInfo_18_18;
#line 70 "thread.channel.m"
        MR_Word mercury__thread__channel__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__channel__HeadVar__1_1, (MR_Integer) 0)));
#line 70 "thread.channel.m"
        MR_Word mercury__thread__channel__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__channel__HeadVar__1_1, (MR_Integer) 1)));
#line 70 "thread.channel.m"
        MR_Word mercury__thread__channel__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__channel__HeadVar__2_2, (MR_Integer) 0)));
#line 70 "thread.channel.m"
        MR_Word mercury__thread__channel__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__channel__HeadVar__2_2, (MR_Integer) 1)));

#line 1401 "thread.channel.c"
        {
#line 1403 "thread.channel.c"
          mercury__thread__channel__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1405 "thread.channel.c"
          MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_16_16, 0) = ((MR_Box) (mercury__thread__channel__TypeCtorInfo_10_10));
#line 1407 "thread.channel.c"
          MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_16_16, 1) = ((MR_Box) (mercury__thread__channel__TypeInfo_for_T_9));
#line 1409 "thread.channel.c"
        }
#line 1411 "thread.channel.c"
        {
#line 1413 "thread.channel.c"
          mercury__thread__channel__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1415 "thread.channel.c"
          MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_18_18, 0) = ((MR_Box) (mercury__thread__channel__TypeCtorInfo_12_12));
#line 1417 "thread.channel.c"
          MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_18_18, 1) = ((MR_Box) (mercury__thread__channel__TypeInfo_16_16));
#line 1419 "thread.channel.c"
        }
#line 1421 "thread.channel.c"
        {
#line 1423 "thread.channel.c"
          mercury__thread__channel__succeeded = mercury__thread__mvar____Unify____mvar_1_0(mercury__thread__channel__TypeInfo_18_18, (MR_Word) mercury__thread__channel__V_3_3, (MR_Word) mercury__thread__channel__V_5_5);
        }
#line 70 "thread.channel.m"
        if (mercury__thread__channel__succeeded)
#line 1428 "thread.channel.c"
          {
#line 1430 "thread.channel.c"
            return mercury__thread__channel__succeeded = mercury__thread__mvar____Unify____mvar_1_0(mercury__thread__channel__TypeInfo_18_18, (MR_Word) mercury__thread__channel__V_4_4, (MR_Word) mercury__thread__channel__V_6_6);
          }
#line 70 "thread.channel.m"
      }
#line 70 "thread.channel.m"
    return mercury__thread__channel__succeeded;
#line 70 "thread.channel.m"
  }
#line 70 "thread.channel.m"
}

#line 59 "thread.channel.m"
void MR_CALL 
mercury__thread__channel__untake_4_p_0(
#line 59 "thread.channel.m"
  MR_Word mercury__thread__channel__TypeInfo_for_T_18,
#line 59 "thread.channel.m"
  MR_Word mercury__thread__channel__HeadVar__1_1,
#line 59 "thread.channel.m"
  MR_Box mercury__thread__channel__Val_7)
#line 59 "thread.channel.m"
{
#line 121 "thread.channel.m"
  {
#line 121 "thread.channel.m"
    MR_bool mercury__thread__channel__succeeded;
#line 121 "thread.channel.m"
    MR_Word mercury__thread__channel__TypeCtorInfo_19_19 = (MR_Word) &mercury__thread__channel__thread__channel__type_ctor_info_item_1;
#line 121 "thread.channel.m"
    MR_Word mercury__thread__channel__TypeInfo_20_20;
#line 121 "thread.channel.m"
    MR_Word mercury__thread__channel__TypeCtorInfo_21_21;
#line 121 "thread.channel.m"
    MR_Word mercury__thread__channel__TypeInfo_22_22;
#line 121 "thread.channel.m"
    MR_Word mercury__thread__channel__Read_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__channel__HeadVar__1_1, (MR_Integer) 0)));
#line 121 "thread.channel.m"
    MR_Word mercury__thread__channel__NewHead_9;
#line 121 "thread.channel.m"
    MR_Word mercury__thread__channel__Head_10;
#line 121 "thread.channel.m"
    MR_Word mercury__thread__channel__V_15_15;
#line 121 "thread.channel.m"
    MR_Word mercury__thread__channel___Write_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__channel__HeadVar__1_1, (MR_Integer) 1)));
#line 122 "thread.channel.m"
    MR_Word mercury__thread__channel__conv0_NewHead_9;
#line 123 "thread.channel.m"
    MR_Box mercury__thread__channel__conv1_Head_10;

#line 1480 "thread.channel.c"
    {
#line 1482 "thread.channel.c"
      mercury__thread__channel__TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1484 "thread.channel.c"
      MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_20_20, 0) = ((MR_Box) (mercury__thread__channel__TypeCtorInfo_19_19));
#line 1486 "thread.channel.c"
      MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_20_20, 1) = ((MR_Box) (mercury__thread__channel__TypeInfo_for_T_18));
#line 1488 "thread.channel.c"
    }
#line 122 "thread.channel.m"
    {
#line 122 "thread.channel.m"
      mercury__thread__mvar__init_3_p_0(mercury__thread__channel__TypeInfo_20_20, &mercury__thread__channel__conv0_NewHead_9);
    }
#line 122 "thread.channel.m"
    mercury__thread__channel__NewHead_9 = (MR_Word) mercury__thread__channel__conv0_NewHead_9;
#line 1497 "thread.channel.c"
    mercury__thread__channel__TypeCtorInfo_21_21 = (MR_Word) &mercury__thread__mvar__thread__mvar__type_ctor_info_mvar_1;
#line 1499 "thread.channel.c"
    {
#line 1501 "thread.channel.c"
      mercury__thread__channel__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1503 "thread.channel.c"
      MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_22_22, 0) = ((MR_Box) (mercury__thread__channel__TypeCtorInfo_21_21));
#line 1505 "thread.channel.c"
      MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_22_22, 1) = ((MR_Box) (mercury__thread__channel__TypeInfo_20_20));
#line 1507 "thread.channel.c"
    }
#line 123 "thread.channel.m"
    {
#line 123 "thread.channel.m"
      mercury__thread__mvar__take_4_p_0(mercury__thread__channel__TypeInfo_22_22, (MR_Word) mercury__thread__channel__Read_5, &mercury__thread__channel__conv1_Head_10);
    }
#line 123 "thread.channel.m"
    mercury__thread__channel__Head_10 = ((MR_Word) mercury__thread__channel__conv1_Head_10);
#line 124 "thread.channel.m"
    {
#line 124 "thread.channel.m"
      mercury__thread__channel__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 124 "thread.channel.m"
      MR_hl_field(MR_mktag(0), mercury__thread__channel__V_15_15, 0) = mercury__thread__channel__Val_7;
#line 124 "thread.channel.m"
      MR_hl_field(MR_mktag(0), mercury__thread__channel__V_15_15, 1) = ((MR_Box) (mercury__thread__channel__Head_10));
#line 124 "thread.channel.m"
    }
#line 124 "thread.channel.m"
    {
#line 124 "thread.channel.m"
      mercury__thread__mvar__put_4_p_0(mercury__thread__channel__TypeInfo_20_20, (MR_Word) mercury__thread__channel__NewHead_9, ((MR_Box) (mercury__thread__channel__V_15_15)));
    }
#line 125 "thread.channel.m"
    {
#line 125 "thread.channel.m"
      mercury__thread__mvar__put_4_p_0(mercury__thread__channel__TypeInfo_22_22, (MR_Word) mercury__thread__channel__Read_5, ((MR_Box) (mercury__thread__channel__NewHead_9)));
#line 125 "thread.channel.m"
      return;
    }
#line 121 "thread.channel.m"
  }
#line 59 "thread.channel.m"
}

#line 54 "thread.channel.m"
void MR_CALL 
mercury__thread__channel__duplicate_4_p_0(
#line 54 "thread.channel.m"
  MR_Word mercury__thread__channel__TypeInfo_for_T_16,
#line 54 "thread.channel.m"
  MR_Word mercury__thread__channel__HeadVar__1_1,
#line 54 "thread.channel.m"
  MR_Word * mercury__thread__channel__HeadVar__2_2)
#line 54 "thread.channel.m"
{
#line 115 "thread.channel.m"
  {
#line 115 "thread.channel.m"
    MR_bool mercury__thread__channel__succeeded;
#line 115 "thread.channel.m"
    MR_Word mercury__thread__channel__TypeCtorInfo_17_17 = (MR_Word) &mercury__thread__channel__thread__channel__type_ctor_info_item_1;
#line 115 "thread.channel.m"
    MR_Word mercury__thread__channel__TypeInfo_18_18;
#line 115 "thread.channel.m"
    MR_Word mercury__thread__channel__TypeCtorInfo_19_19 = (MR_Word) &mercury__thread__mvar__thread__mvar__type_ctor_info_mvar_1;
#line 115 "thread.channel.m"
    MR_Word mercury__thread__channel__TypeInfo_20_20;
#line 115 "thread.channel.m"
    MR_Word mercury__thread__channel__Write_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__channel__HeadVar__1_1, (MR_Integer) 1)));
#line 115 "thread.channel.m"
    MR_Word mercury__thread__channel__NewRead_7;
#line 115 "thread.channel.m"
    MR_Word mercury__thread__channel__Hole_9;
#line 115 "thread.channel.m"
    MR_Word mercury__thread__channel___Read_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__channel__HeadVar__1_1, (MR_Integer) 0)));
#line 116 "thread.channel.m"
    MR_Word mercury__thread__channel__conv0_NewRead_7;
#line 117 "thread.channel.m"
    MR_Box mercury__thread__channel__conv1_Hole_9;

#line 1579 "thread.channel.c"
    {
#line 1581 "thread.channel.c"
      mercury__thread__channel__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1583 "thread.channel.c"
      MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_18_18, 0) = ((MR_Box) (mercury__thread__channel__TypeCtorInfo_17_17));
#line 1585 "thread.channel.c"
      MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_18_18, 1) = ((MR_Box) (mercury__thread__channel__TypeInfo_for_T_16));
#line 1587 "thread.channel.c"
    }
#line 1589 "thread.channel.c"
    {
#line 1591 "thread.channel.c"
      mercury__thread__channel__TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1593 "thread.channel.c"
      MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_20_20, 0) = ((MR_Box) (mercury__thread__channel__TypeCtorInfo_19_19));
#line 1595 "thread.channel.c"
      MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_20_20, 1) = ((MR_Box) (mercury__thread__channel__TypeInfo_18_18));
#line 1597 "thread.channel.c"
    }
#line 116 "thread.channel.m"
    {
#line 116 "thread.channel.m"
      mercury__thread__mvar__init_3_p_0(mercury__thread__channel__TypeInfo_20_20, &mercury__thread__channel__conv0_NewRead_7);
    }
#line 116 "thread.channel.m"
    mercury__thread__channel__NewRead_7 = (MR_Word) mercury__thread__channel__conv0_NewRead_7;
#line 115 "thread.channel.m"
    {
#line 115 "thread.channel.m"
      MR_Word base;
#line 115 "thread.channel.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 115 "thread.channel.m"
      *mercury__thread__channel__HeadVar__2_2 = base;
#line 115 "thread.channel.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__thread__channel__NewRead_7));
#line 115 "thread.channel.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__thread__channel__Write_6));
#line 115 "thread.channel.m"
    }
#line 117 "thread.channel.m"
    {
#line 117 "thread.channel.m"
      mercury__thread__mvar__take_4_p_0(mercury__thread__channel__TypeInfo_20_20, (MR_Word) mercury__thread__channel__Write_6, &mercury__thread__channel__conv1_Hole_9);
    }
#line 117 "thread.channel.m"
    mercury__thread__channel__Hole_9 = ((MR_Word) mercury__thread__channel__conv1_Hole_9);
#line 118 "thread.channel.m"
    {
#line 118 "thread.channel.m"
      mercury__thread__mvar__put_4_p_0(mercury__thread__channel__TypeInfo_20_20, (MR_Word) mercury__thread__channel__Write_6, ((MR_Box) (mercury__thread__channel__Hole_9)));
    }
#line 119 "thread.channel.m"
    {
#line 119 "thread.channel.m"
      mercury__thread__mvar__put_4_p_0(mercury__thread__channel__TypeInfo_20_20, (MR_Word) mercury__thread__channel__NewRead_7, ((MR_Box) (mercury__thread__channel__Hole_9)));
#line 119 "thread.channel.m"
      return;
    }
#line 115 "thread.channel.m"
  }
#line 54 "thread.channel.m"
}

#line 49 "thread.channel.m"
void MR_CALL 
mercury__thread__channel__try_take_4_p_0(
#line 49 "thread.channel.m"
  MR_Word mercury__thread__channel__TypeInfo_for_T_19,
#line 49 "thread.channel.m"
  MR_Word mercury__thread__channel__HeadVar__1_1,
#line 49 "thread.channel.m"
  MR_Word * mercury__thread__channel__MaybeVal_7)
#line 49 "thread.channel.m"
{
#line 102 "thread.channel.m"
  {
#line 102 "thread.channel.m"
    MR_bool mercury__thread__channel__succeeded;
#line 102 "thread.channel.m"
    MR_Word mercury__thread__channel__TypeCtorInfo_20_20 = (MR_Word) &mercury__thread__channel__thread__channel__type_ctor_info_item_1;
#line 102 "thread.channel.m"
    MR_Word mercury__thread__channel__TypeInfo_21_21;
#line 102 "thread.channel.m"
    MR_Word mercury__thread__channel__TypeCtorInfo_22_22 = (MR_Word) &mercury__thread__mvar__thread__mvar__type_ctor_info_mvar_1;
#line 102 "thread.channel.m"
    MR_Word mercury__thread__channel__TypeInfo_23_23;
#line 102 "thread.channel.m"
    MR_Word mercury__thread__channel__Read_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__channel__HeadVar__1_1, (MR_Integer) 0)));
#line 102 "thread.channel.m"
    MR_Word mercury__thread__channel__Head_9;
#line 102 "thread.channel.m"
    MR_Word mercury__thread__channel__MaybeItem_10;
#line 102 "thread.channel.m"
    MR_Word mercury__thread__channel__NewHead_12;
#line 102 "thread.channel.m"
    MR_Word mercury__thread__channel___Write_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__channel__HeadVar__1_1, (MR_Integer) 1)));
#line 103 "thread.channel.m"
    MR_Box mercury__thread__channel__conv0_Head_9;
#line 104 "thread.channel.m"
    MR_Word mercury__thread__channel__conv1_MaybeItem_10;

#line 1682 "thread.channel.c"
    {
#line 1684 "thread.channel.c"
      mercury__thread__channel__TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1686 "thread.channel.c"
      MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_21_21, 0) = ((MR_Box) (mercury__thread__channel__TypeCtorInfo_20_20));
#line 1688 "thread.channel.c"
      MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_21_21, 1) = ((MR_Box) (mercury__thread__channel__TypeInfo_for_T_19));
#line 1690 "thread.channel.c"
    }
#line 1692 "thread.channel.c"
    {
#line 1694 "thread.channel.c"
      mercury__thread__channel__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1696 "thread.channel.c"
      MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_23_23, 0) = ((MR_Box) (mercury__thread__channel__TypeCtorInfo_22_22));
#line 1698 "thread.channel.c"
      MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_23_23, 1) = ((MR_Box) (mercury__thread__channel__TypeInfo_21_21));
#line 1700 "thread.channel.c"
    }
#line 103 "thread.channel.m"
    {
#line 103 "thread.channel.m"
      mercury__thread__mvar__take_4_p_0(mercury__thread__channel__TypeInfo_23_23, (MR_Word) mercury__thread__channel__Read_5, &mercury__thread__channel__conv0_Head_9);
    }
#line 103 "thread.channel.m"
    mercury__thread__channel__Head_9 = ((MR_Word) mercury__thread__channel__conv0_Head_9);
#line 104 "thread.channel.m"
    {
#line 104 "thread.channel.m"
      mercury__thread__mvar__try_take_4_p_0(mercury__thread__channel__TypeInfo_21_21, (MR_Word) mercury__thread__channel__Head_9, &mercury__thread__channel__conv1_MaybeItem_10);
    }
#line 104 "thread.channel.m"
    mercury__thread__channel__MaybeItem_10 = (MR_Word) mercury__thread__channel__conv1_MaybeItem_10;
#line 108 "thread.channel.m"
    if ((mercury__thread__channel__MaybeItem_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 109 "thread.channel.m"
      {
#line 110 "thread.channel.m"
        *mercury__thread__channel__MaybeVal_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 111 "thread.channel.m"
        mercury__thread__channel__NewHead_12 = mercury__thread__channel__Head_9;
#line 109 "thread.channel.m"
      }
#line 108 "thread.channel.m"
    else
#line 106 "thread.channel.m"
      {
#line 106 "thread.channel.m"
        MR_Box mercury__thread__channel__Val_11;
#line 106 "thread.channel.m"
        MR_Word mercury__thread__channel__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__thread__channel__MaybeItem_10, (MR_Integer) 0)));

#line 106 "thread.channel.m"
        mercury__thread__channel__Val_11 = (MR_hl_field(MR_mktag(0), mercury__thread__channel__V_17_17, (MR_Integer) 0));
#line 106 "thread.channel.m"
        mercury__thread__channel__NewHead_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__channel__V_17_17, (MR_Integer) 1)));
#line 107 "thread.channel.m"
        {
#line 107 "thread.channel.m"
          MR_Word base;
#line 107 "thread.channel.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 107 "thread.channel.m"
          *mercury__thread__channel__MaybeVal_7 = base;
#line 107 "thread.channel.m"
          MR_hl_field(MR_mktag(1), base, 0) = mercury__thread__channel__Val_11;
#line 107 "thread.channel.m"
        }
#line 106 "thread.channel.m"
      }
#line 113 "thread.channel.m"
    {
#line 113 "thread.channel.m"
      mercury__thread__mvar__put_4_p_0(mercury__thread__channel__TypeInfo_23_23, (MR_Word) mercury__thread__channel__Read_5, ((MR_Box) (mercury__thread__channel__NewHead_12)));
#line 113 "thread.channel.m"
      return;
    }
#line 102 "thread.channel.m"
  }
#line 49 "thread.channel.m"
}

#line 44 "thread.channel.m"
void MR_CALL 
mercury__thread__channel__take_4_p_0(
#line 44 "thread.channel.m"
  MR_Word mercury__thread__channel__TypeInfo_for_T_17,
#line 44 "thread.channel.m"
  MR_Word mercury__thread__channel__HeadVar__1_1,
#line 44 "thread.channel.m"
  MR_Box * mercury__thread__channel__Val_7)
#line 44 "thread.channel.m"
{
#line 97 "thread.channel.m"
  {
#line 97 "thread.channel.m"
    MR_bool mercury__thread__channel__succeeded;
#line 97 "thread.channel.m"
    MR_Word mercury__thread__channel__TypeCtorInfo_18_18 = (MR_Word) &mercury__thread__channel__thread__channel__type_ctor_info_item_1;
#line 97 "thread.channel.m"
    MR_Word mercury__thread__channel__TypeInfo_19_19;
#line 97 "thread.channel.m"
    MR_Word mercury__thread__channel__TypeCtorInfo_20_20 = (MR_Word) &mercury__thread__mvar__thread__mvar__type_ctor_info_mvar_1;
#line 97 "thread.channel.m"
    MR_Word mercury__thread__channel__TypeInfo_21_21;
#line 97 "thread.channel.m"
    MR_Word mercury__thread__channel__Read_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__channel__HeadVar__1_1, (MR_Integer) 0)));
#line 97 "thread.channel.m"
    MR_Word mercury__thread__channel__Head_9;
#line 97 "thread.channel.m"
    MR_Word mercury__thread__channel__NewHead_10;
#line 97 "thread.channel.m"
    MR_Word mercury__thread__channel__V_14_14;
#line 97 "thread.channel.m"
    MR_Word mercury__thread__channel___Write_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__channel__HeadVar__1_1, (MR_Integer) 1)));
#line 98 "thread.channel.m"
    MR_Box mercury__thread__channel__conv0_Head_9;
#line 99 "thread.channel.m"
    MR_Box mercury__thread__channel__conv1_V_14_14;

#line 1803 "thread.channel.c"
    {
#line 1805 "thread.channel.c"
      mercury__thread__channel__TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1807 "thread.channel.c"
      MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_19_19, 0) = ((MR_Box) (mercury__thread__channel__TypeCtorInfo_18_18));
#line 1809 "thread.channel.c"
      MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_19_19, 1) = ((MR_Box) (mercury__thread__channel__TypeInfo_for_T_17));
#line 1811 "thread.channel.c"
    }
#line 1813 "thread.channel.c"
    {
#line 1815 "thread.channel.c"
      mercury__thread__channel__TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1817 "thread.channel.c"
      MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_21_21, 0) = ((MR_Box) (mercury__thread__channel__TypeCtorInfo_20_20));
#line 1819 "thread.channel.c"
      MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_21_21, 1) = ((MR_Box) (mercury__thread__channel__TypeInfo_19_19));
#line 1821 "thread.channel.c"
    }
#line 98 "thread.channel.m"
    {
#line 98 "thread.channel.m"
      mercury__thread__mvar__take_4_p_0(mercury__thread__channel__TypeInfo_21_21, (MR_Word) mercury__thread__channel__Read_5, &mercury__thread__channel__conv0_Head_9);
    }
#line 98 "thread.channel.m"
    mercury__thread__channel__Head_9 = ((MR_Word) mercury__thread__channel__conv0_Head_9);
#line 99 "thread.channel.m"
    {
#line 99 "thread.channel.m"
      mercury__thread__mvar__take_4_p_0(mercury__thread__channel__TypeInfo_19_19, (MR_Word) mercury__thread__channel__Head_9, &mercury__thread__channel__conv1_V_14_14);
    }
#line 99 "thread.channel.m"
    mercury__thread__channel__V_14_14 = ((MR_Word) mercury__thread__channel__conv1_V_14_14);
#line 99 "thread.channel.m"
    *mercury__thread__channel__Val_7 = (MR_hl_field(MR_mktag(0), mercury__thread__channel__V_14_14, (MR_Integer) 0));
#line 99 "thread.channel.m"
    mercury__thread__channel__NewHead_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__channel__V_14_14, (MR_Integer) 1)));
#line 100 "thread.channel.m"
    {
#line 100 "thread.channel.m"
      mercury__thread__mvar__put_4_p_0(mercury__thread__channel__TypeInfo_21_21, (MR_Word) mercury__thread__channel__Read_5, ((MR_Box) (mercury__thread__channel__NewHead_10)));
#line 100 "thread.channel.m"
      return;
    }
#line 97 "thread.channel.m"
  }
#line 44 "thread.channel.m"
}

#line 39 "thread.channel.m"
void MR_CALL 
mercury__thread__channel__put_4_p_0(
#line 39 "thread.channel.m"
  MR_Word mercury__thread__channel__TypeInfo_for_T_18,
#line 39 "thread.channel.m"
  MR_Word mercury__thread__channel__HeadVar__1_1,
#line 39 "thread.channel.m"
  MR_Box mercury__thread__channel__Val_7)
#line 39 "thread.channel.m"
{
#line 91 "thread.channel.m"
  {
#line 91 "thread.channel.m"
    MR_bool mercury__thread__channel__succeeded;
#line 91 "thread.channel.m"
    MR_Word mercury__thread__channel__TypeCtorInfo_19_19 = (MR_Word) &mercury__thread__channel__thread__channel__type_ctor_info_item_1;
#line 91 "thread.channel.m"
    MR_Word mercury__thread__channel__TypeInfo_20_20;
#line 91 "thread.channel.m"
    MR_Word mercury__thread__channel__TypeCtorInfo_21_21;
#line 91 "thread.channel.m"
    MR_Word mercury__thread__channel__TypeInfo_22_22;
#line 91 "thread.channel.m"
    MR_Word mercury__thread__channel__Write_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__channel__HeadVar__1_1, (MR_Integer) 1)));
#line 91 "thread.channel.m"
    MR_Word mercury__thread__channel__NewHole_9;
#line 91 "thread.channel.m"
    MR_Word mercury__thread__channel__OldHole_10;
#line 91 "thread.channel.m"
    MR_Word mercury__thread__channel__V_16_16;
#line 91 "thread.channel.m"
    MR_Word mercury__thread__channel___Read_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__channel__HeadVar__1_1, (MR_Integer) 0)));
#line 92 "thread.channel.m"
    MR_Word mercury__thread__channel__conv0_NewHole_9;
#line 93 "thread.channel.m"
    MR_Box mercury__thread__channel__conv1_OldHole_10;

#line 1891 "thread.channel.c"
    {
#line 1893 "thread.channel.c"
      mercury__thread__channel__TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1895 "thread.channel.c"
      MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_20_20, 0) = ((MR_Box) (mercury__thread__channel__TypeCtorInfo_19_19));
#line 1897 "thread.channel.c"
      MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_20_20, 1) = ((MR_Box) (mercury__thread__channel__TypeInfo_for_T_18));
#line 1899 "thread.channel.c"
    }
#line 92 "thread.channel.m"
    {
#line 92 "thread.channel.m"
      mercury__thread__mvar__init_3_p_0(mercury__thread__channel__TypeInfo_20_20, &mercury__thread__channel__conv0_NewHole_9);
    }
#line 92 "thread.channel.m"
    mercury__thread__channel__NewHole_9 = (MR_Word) mercury__thread__channel__conv0_NewHole_9;
#line 1908 "thread.channel.c"
    mercury__thread__channel__TypeCtorInfo_21_21 = (MR_Word) &mercury__thread__mvar__thread__mvar__type_ctor_info_mvar_1;
#line 1910 "thread.channel.c"
    {
#line 1912 "thread.channel.c"
      mercury__thread__channel__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1914 "thread.channel.c"
      MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_22_22, 0) = ((MR_Box) (mercury__thread__channel__TypeCtorInfo_21_21));
#line 1916 "thread.channel.c"
      MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_22_22, 1) = ((MR_Box) (mercury__thread__channel__TypeInfo_20_20));
#line 1918 "thread.channel.c"
    }
#line 93 "thread.channel.m"
    {
#line 93 "thread.channel.m"
      mercury__thread__mvar__take_4_p_0(mercury__thread__channel__TypeInfo_22_22, (MR_Word) mercury__thread__channel__Write_6, &mercury__thread__channel__conv1_OldHole_10);
    }
#line 93 "thread.channel.m"
    mercury__thread__channel__OldHole_10 = ((MR_Word) mercury__thread__channel__conv1_OldHole_10);
#line 94 "thread.channel.m"
    {
#line 94 "thread.channel.m"
      mercury__thread__mvar__put_4_p_0(mercury__thread__channel__TypeInfo_22_22, (MR_Word) mercury__thread__channel__Write_6, ((MR_Box) (mercury__thread__channel__NewHole_9)));
    }
#line 95 "thread.channel.m"
    {
#line 95 "thread.channel.m"
      mercury__thread__channel__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 95 "thread.channel.m"
      MR_hl_field(MR_mktag(0), mercury__thread__channel__V_16_16, 0) = mercury__thread__channel__Val_7;
#line 95 "thread.channel.m"
      MR_hl_field(MR_mktag(0), mercury__thread__channel__V_16_16, 1) = ((MR_Box) (mercury__thread__channel__NewHole_9));
#line 95 "thread.channel.m"
    }
#line 95 "thread.channel.m"
    {
#line 95 "thread.channel.m"
      mercury__thread__mvar__put_4_p_0(mercury__thread__channel__TypeInfo_20_20, (MR_Word) mercury__thread__channel__OldHole_10, ((MR_Box) (mercury__thread__channel__V_16_16)));
#line 95 "thread.channel.m"
      return;
    }
#line 91 "thread.channel.m"
  }
#line 39 "thread.channel.m"
}

#line 35 "thread.channel.m"
void MR_CALL 
mercury__thread__channel__init_3_p_0(
#line 35 "thread.channel.m"
  MR_Word mercury__thread__channel__TypeInfo_for_T_15,
#line 35 "thread.channel.m"
  MR_Word * mercury__thread__channel__HeadVar__1_1)
#line 35 "thread.channel.m"
{
#line 84 "thread.channel.m"
  {
#line 84 "thread.channel.m"
    MR_bool mercury__thread__channel__succeeded;
#line 84 "thread.channel.m"
    MR_Word mercury__thread__channel__TypeCtorInfo_16_16 = (MR_Word) &mercury__thread__channel__thread__channel__type_ctor_info_item_1;
#line 84 "thread.channel.m"
    MR_Word mercury__thread__channel__TypeInfo_17_17;
#line 84 "thread.channel.m"
    MR_Word mercury__thread__channel__TypeCtorInfo_18_18 = (MR_Word) &mercury__thread__mvar__thread__mvar__type_ctor_info_mvar_1;
#line 84 "thread.channel.m"
    MR_Word mercury__thread__channel__TypeInfo_19_19;
#line 84 "thread.channel.m"
    MR_Word mercury__thread__channel__Read_4;
#line 84 "thread.channel.m"
    MR_Word mercury__thread__channel__Write_5;
#line 84 "thread.channel.m"
    MR_Word mercury__thread__channel__Hole_7;
#line 85 "thread.channel.m"
    MR_Word mercury__thread__channel__conv0_Read_4;
#line 86 "thread.channel.m"
    MR_Word mercury__thread__channel__conv1_Write_5;
#line 87 "thread.channel.m"
    MR_Word mercury__thread__channel__conv2_Hole_7;

#line 1988 "thread.channel.c"
    {
#line 1990 "thread.channel.c"
      mercury__thread__channel__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1992 "thread.channel.c"
      MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_17_17, 0) = ((MR_Box) (mercury__thread__channel__TypeCtorInfo_16_16));
#line 1994 "thread.channel.c"
      MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_17_17, 1) = ((MR_Box) (mercury__thread__channel__TypeInfo_for_T_15));
#line 1996 "thread.channel.c"
    }
#line 1998 "thread.channel.c"
    {
#line 2000 "thread.channel.c"
      mercury__thread__channel__TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2002 "thread.channel.c"
      MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_19_19, 0) = ((MR_Box) (mercury__thread__channel__TypeCtorInfo_18_18));
#line 2004 "thread.channel.c"
      MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_19_19, 1) = ((MR_Box) (mercury__thread__channel__TypeInfo_17_17));
#line 2006 "thread.channel.c"
    }
#line 85 "thread.channel.m"
    {
#line 85 "thread.channel.m"
      mercury__thread__mvar__init_3_p_0(mercury__thread__channel__TypeInfo_19_19, &mercury__thread__channel__conv0_Read_4);
    }
#line 85 "thread.channel.m"
    mercury__thread__channel__Read_4 = (MR_Word) mercury__thread__channel__conv0_Read_4;
#line 86 "thread.channel.m"
    {
#line 86 "thread.channel.m"
      mercury__thread__mvar__init_3_p_0(mercury__thread__channel__TypeInfo_19_19, &mercury__thread__channel__conv1_Write_5);
    }
#line 86 "thread.channel.m"
    mercury__thread__channel__Write_5 = (MR_Word) mercury__thread__channel__conv1_Write_5;
#line 84 "thread.channel.m"
    {
#line 84 "thread.channel.m"
      MR_Word base;
#line 84 "thread.channel.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 84 "thread.channel.m"
      *mercury__thread__channel__HeadVar__1_1 = base;
#line 84 "thread.channel.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__thread__channel__Read_4));
#line 84 "thread.channel.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__thread__channel__Write_5));
#line 84 "thread.channel.m"
    }
#line 87 "thread.channel.m"
    {
#line 87 "thread.channel.m"
      mercury__thread__mvar__init_3_p_0(mercury__thread__channel__TypeInfo_17_17, &mercury__thread__channel__conv2_Hole_7);
    }
#line 87 "thread.channel.m"
    mercury__thread__channel__Hole_7 = (MR_Word) mercury__thread__channel__conv2_Hole_7;
#line 88 "thread.channel.m"
    {
#line 88 "thread.channel.m"
      mercury__thread__mvar__put_4_p_0(mercury__thread__channel__TypeInfo_19_19, (MR_Word) mercury__thread__channel__Read_4, ((MR_Box) (mercury__thread__channel__Hole_7)));
    }
#line 89 "thread.channel.m"
    {
#line 89 "thread.channel.m"
      mercury__thread__mvar__put_4_p_0(mercury__thread__channel__TypeInfo_19_19, (MR_Word) mercury__thread__channel__Write_5, ((MR_Box) (mercury__thread__channel__Hole_7)));
#line 89 "thread.channel.m"
      return;
    }
#line 84 "thread.channel.m"
  }
#line 35 "thread.channel.m"
}

void mercury__thread__channel__init(void)
{
}

void mercury__thread__channel__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__thread__channel__thread__channel__type_ctor_info_channel_1);
	MR_register_type_ctor_info(&mercury__thread__channel__thread__channel__type_ctor_info_item_1);
	MR_register_type_ctor_info(&mercury__thread__channel__thread__channel__type_ctor_info_stream_1);
}

void mercury__thread__channel__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module thread.channel. */
