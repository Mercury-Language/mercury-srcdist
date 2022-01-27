/*
** Automatically generated from `thread.channel.m'
** by the Mercury compiler,
** version DEV
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
#include "thread.mvar.mih"
#include "thread.semaphore.mih"




#line 97 "thread.channel.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__thread__channel__thread__channel__pti_item_1__pseudo_1;

#line 100 "thread.channel.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__thread__channel__thread__mvar__pti_mvar_1__pseudo_thread__channel__pti_item_1__pseudo_1;

#line 103 "thread.channel.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__thread__channel__thread__mvar__pti_mvar_1__pseudo_thread__mvar__pti_mvar_1__pseudo_thread__channel__pti_item_1__pseudo_1;

#line 106 "thread.channel.c"
static const MR_PseudoTypeInfo mercury__thread__channel__thread__channel__field_types_channel_1_0[2];

#line 109 "thread.channel.c"
static const MR_DuFunctorDesc mercury__thread__channel__thread__channel__du_functor_desc_channel_1_0;

#line 112 "thread.channel.c"
static const MR_DuFunctorDescPtr mercury__thread__channel__thread__channel__du_stag_ordered_channel_1_0[1];

#line 115 "thread.channel.c"
static const MR_DuPtagLayout mercury__thread__channel__thread__channel__du_ptag_ordered_channel_1[1];

#line 118 "thread.channel.c"
static const MR_DuFunctorDescPtr mercury__thread__channel__thread__channel__du_name_ordered_channel_1[1];

#line 121 "thread.channel.c"
static const MR_Integer mercury__thread__channel__thread__channel__functor_number_map_channel_1[1];

#line 124 "thread.channel.c"
static const MR_PseudoTypeInfo mercury__thread__channel__thread__channel__field_types_item_1_0[2];

#line 127 "thread.channel.c"
static const MR_DuFunctorDesc mercury__thread__channel__thread__channel__du_functor_desc_item_1_0;

#line 130 "thread.channel.c"
static const MR_DuFunctorDescPtr mercury__thread__channel__thread__channel__du_stag_ordered_item_1_0[1];

#line 133 "thread.channel.c"
static const MR_DuPtagLayout mercury__thread__channel__thread__channel__du_ptag_ordered_item_1[1];

#line 136 "thread.channel.c"
static const MR_DuFunctorDescPtr mercury__thread__channel__thread__channel__du_name_ordered_item_1[1];

#line 139 "thread.channel.c"
static const MR_Integer mercury__thread__channel__thread__channel__functor_number_map_item_1[1];

#line 142 "thread.channel.c"
static MR_bool MR_CALL 
mercury__thread__channel____Unify____channel_1_0_10001(
#line 145 "thread.channel.c"
  MR_Box mercury__thread__channel__wrapper_arg_1,
#line 147 "thread.channel.c"
  MR_Box mercury__thread__channel__wrapper_arg_2,
#line 149 "thread.channel.c"
  MR_Box mercury__thread__channel__wrapper_arg_3);

#line 152 "thread.channel.c"
static void MR_CALL 
mercury__thread__channel____Compare____channel_1_0_10001(
#line 155 "thread.channel.c"
  MR_Box mercury__thread__channel__wrapper_arg_1,
#line 157 "thread.channel.c"
  MR_Box * mercury__thread__channel__wrapper_arg_2,
#line 159 "thread.channel.c"
  MR_Box mercury__thread__channel__wrapper_arg_3,
#line 161 "thread.channel.c"
  MR_Box mercury__thread__channel__wrapper_arg_4);

#line 164 "thread.channel.c"
static MR_bool MR_CALL 
mercury__thread__channel____Unify____item_1_0_10001(
#line 167 "thread.channel.c"
  MR_Box mercury__thread__channel__wrapper_arg_1,
#line 169 "thread.channel.c"
  MR_Box mercury__thread__channel__wrapper_arg_2,
#line 171 "thread.channel.c"
  MR_Box mercury__thread__channel__wrapper_arg_3);

#line 174 "thread.channel.c"
static void MR_CALL 
mercury__thread__channel____Compare____item_1_0_10001(
#line 177 "thread.channel.c"
  MR_Box mercury__thread__channel__wrapper_arg_1,
#line 179 "thread.channel.c"
  MR_Box * mercury__thread__channel__wrapper_arg_2,
#line 181 "thread.channel.c"
  MR_Box mercury__thread__channel__wrapper_arg_3,
#line 183 "thread.channel.c"
  MR_Box mercury__thread__channel__wrapper_arg_4);

#line 186 "thread.channel.c"
static MR_bool MR_CALL 
mercury__thread__channel____Unify____stream_1_0_10001(
#line 189 "thread.channel.c"
  MR_Box mercury__thread__channel__wrapper_arg_1,
#line 191 "thread.channel.c"
  MR_Box mercury__thread__channel__wrapper_arg_2,
#line 193 "thread.channel.c"
  MR_Box mercury__thread__channel__wrapper_arg_3);

#line 196 "thread.channel.c"
static void MR_CALL 
mercury__thread__channel____Compare____stream_1_0_10001(
#line 199 "thread.channel.c"
  MR_Box mercury__thread__channel__wrapper_arg_1,
#line 201 "thread.channel.c"
  MR_Box * mercury__thread__channel__wrapper_arg_2,
#line 203 "thread.channel.c"
  MR_Box mercury__thread__channel__wrapper_arg_3,
#line 205 "thread.channel.c"
  MR_Box mercury__thread__channel__wrapper_arg_4);

#line 16 "ops.opt"
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
#include "string.mh"
#include "time.mh"
#include "array.mh"
#include "bitmap.mh"
#include "dir.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "table_builtin.mh"
#include "time.mh"
#include "version_array.mh"
#include "thread.semaphore.mh"
#include "int.mh"
#include "array.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "array.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "type_desc.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "array.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "char.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "construct.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "float.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "time.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "version_array.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "rtti_implementation.mh"
#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "exception.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "stm_builtin.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "store.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "math.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "pretty_printer.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "array.mh"
#include "version_array.mh"
#include "builtin.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "time.mh"
#include "array.mh"
#include "dir.mh"
#include "table_builtin.mh"
#include "benchmarking.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "table_builtin.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "private_builtin.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "bitmap.mh"
#include "version_array.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "thread.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "thread.semaphore.mh"
#include "thread.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



#line 393 "thread.channel.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__thread__channel__thread__channel__pti_item_1__pseudo_1 = {
  &mercury__thread__channel__thread__channel__type_ctor_info_item_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 401 "thread.channel.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__thread__channel__thread__mvar__pti_mvar_1__pseudo_thread__channel__pti_item_1__pseudo_1 = {
  &mercury__thread__mvar__thread__mvar__type_ctor_info_mvar_1,
  {
    (MR_PseudoTypeInfo) &mercury__thread__channel__thread__channel__pti_item_1__pseudo_1
  }
};

#line 409 "thread.channel.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__thread__channel__thread__mvar__pti_mvar_1__pseudo_thread__mvar__pti_mvar_1__pseudo_thread__channel__pti_item_1__pseudo_1 = {
  &mercury__thread__mvar__thread__mvar__type_ctor_info_mvar_1,
  {
    (MR_PseudoTypeInfo) &mercury__thread__channel__thread__mvar__pti_mvar_1__pseudo_thread__channel__pti_item_1__pseudo_1
  }
};

#line 417 "thread.channel.c"
static const MR_PseudoTypeInfo mercury__thread__channel__thread__channel__field_types_channel_1_0[2] = {
  (MR_PseudoTypeInfo) &mercury__thread__channel__thread__mvar__pti_mvar_1__pseudo_thread__mvar__pti_mvar_1__pseudo_thread__channel__pti_item_1__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__thread__channel__thread__mvar__pti_mvar_1__pseudo_thread__mvar__pti_mvar_1__pseudo_thread__channel__pti_item_1__pseudo_1
};

#line 423 "thread.channel.c"
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

#line 438 "thread.channel.c"
static const MR_DuFunctorDescPtr mercury__thread__channel__thread__channel__du_stag_ordered_channel_1_0[1] = {
  &mercury__thread__channel__thread__channel__du_functor_desc_channel_1_0
};

#line 443 "thread.channel.c"
static const MR_DuPtagLayout mercury__thread__channel__thread__channel__du_ptag_ordered_channel_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__thread__channel__thread__channel__du_stag_ordered_channel_1_0
  }
};

#line 452 "thread.channel.c"
static const MR_DuFunctorDescPtr mercury__thread__channel__thread__channel__du_name_ordered_channel_1[1] = {
  &mercury__thread__channel__thread__channel__du_functor_desc_channel_1_0
};

#line 457 "thread.channel.c"
static const MR_Integer mercury__thread__channel__thread__channel__functor_number_map_channel_1[1] = {
  (MR_Integer) 0
};

#line 462 "thread.channel.c"
const MR_TypeCtorInfo_Struct mercury__thread__channel__thread__channel__type_ctor_info_channel_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__thread__channel____Unify____channel_1_0_10001)),
  ((MR_Box) (mercury__thread__channel____Compare____channel_1_0_10001)),
  (MR_String) "thread.channel",
  (MR_String) "channel",
  {     mercury__thread__channel__thread__channel__du_name_ordered_channel_1 },
  {     mercury__thread__channel__thread__channel__du_ptag_ordered_channel_1 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__thread__channel__thread__channel__functor_number_map_channel_1
};

#line 479 "thread.channel.c"
static const MR_PseudoTypeInfo mercury__thread__channel__thread__channel__field_types_item_1_0[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mercury__thread__channel__thread__mvar__pti_mvar_1__pseudo_thread__channel__pti_item_1__pseudo_1
};

#line 485 "thread.channel.c"
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

#line 500 "thread.channel.c"
static const MR_DuFunctorDescPtr mercury__thread__channel__thread__channel__du_stag_ordered_item_1_0[1] = {
  &mercury__thread__channel__thread__channel__du_functor_desc_item_1_0
};

#line 505 "thread.channel.c"
static const MR_DuPtagLayout mercury__thread__channel__thread__channel__du_ptag_ordered_item_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__thread__channel__thread__channel__du_stag_ordered_item_1_0
  }
};

#line 514 "thread.channel.c"
static const MR_DuFunctorDescPtr mercury__thread__channel__thread__channel__du_name_ordered_item_1[1] = {
  &mercury__thread__channel__thread__channel__du_functor_desc_item_1_0
};

#line 519 "thread.channel.c"
static const MR_Integer mercury__thread__channel__thread__channel__functor_number_map_item_1[1] = {
  (MR_Integer) 0
};

#line 524 "thread.channel.c"
const MR_TypeCtorInfo_Struct mercury__thread__channel__thread__channel__type_ctor_info_item_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__thread__channel____Unify____item_1_0_10001)),
  ((MR_Box) (mercury__thread__channel____Compare____item_1_0_10001)),
  (MR_String) "thread.channel",
  (MR_String) "item",
  {     mercury__thread__channel__thread__channel__du_name_ordered_item_1 },
  {     mercury__thread__channel__thread__channel__du_ptag_ordered_item_1 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__thread__channel__thread__channel__functor_number_map_item_1
};

#line 541 "thread.channel.c"
const MR_TypeCtorInfo_Struct mercury__thread__channel__thread__channel__type_ctor_info_stream_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__thread__channel____Unify____stream_1_0_10001)),
  ((MR_Box) (mercury__thread__channel____Compare____stream_1_0_10001)),
  (MR_String) "thread.channel",
  (MR_String) "stream",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__thread__channel__thread__mvar__pti_mvar_1__pseudo_thread__channel__pti_item_1__pseudo_1 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 558 "thread.channel.c"
static MR_bool MR_CALL 
mercury__thread__channel____Unify____channel_1_0_10001(
#line 561 "thread.channel.c"
  MR_Box mercury__thread__channel__wrapper_arg_1,
#line 563 "thread.channel.c"
  MR_Box mercury__thread__channel__wrapper_arg_2,
#line 565 "thread.channel.c"
  MR_Box mercury__thread__channel__wrapper_arg_3)
#line 567 "thread.channel.c"
{
#line 569 "thread.channel.c"
  {
#line 571 "thread.channel.c"
    MR_bool mercury__thread__channel__succeeded;

#line 574 "thread.channel.c"
    {
#line 576 "thread.channel.c"
      mercury__thread__channel__succeeded = mercury__thread__channel____Unify____channel_1_0(((MR_Word) mercury__thread__channel__wrapper_arg_1), ((MR_Word) mercury__thread__channel__wrapper_arg_2), ((MR_Word) mercury__thread__channel__wrapper_arg_3));
    }
#line 579 "thread.channel.c"
    return mercury__thread__channel__succeeded;
#line 581 "thread.channel.c"
  }
#line 583 "thread.channel.c"
}

#line 586 "thread.channel.c"
static void MR_CALL 
mercury__thread__channel____Compare____channel_1_0_10001(
#line 589 "thread.channel.c"
  MR_Box mercury__thread__channel__wrapper_arg_1,
#line 591 "thread.channel.c"
  MR_Box * mercury__thread__channel__wrapper_arg_2,
#line 593 "thread.channel.c"
  MR_Box mercury__thread__channel__wrapper_arg_3,
#line 595 "thread.channel.c"
  MR_Box mercury__thread__channel__wrapper_arg_4)
#line 597 "thread.channel.c"
{
#line 599 "thread.channel.c"
  {
#line 601 "thread.channel.c"
    MR_Word mercury__thread__channel__conv0_HeadVar__1_1;

#line 604 "thread.channel.c"
    {
#line 606 "thread.channel.c"
      mercury__thread__channel____Compare____channel_1_0(((MR_Word) mercury__thread__channel__wrapper_arg_1), &mercury__thread__channel__conv0_HeadVar__1_1, ((MR_Word) mercury__thread__channel__wrapper_arg_3), ((MR_Word) mercury__thread__channel__wrapper_arg_4));
    }
#line 609 "thread.channel.c"
    *mercury__thread__channel__wrapper_arg_2 = ((MR_Box) (mercury__thread__channel__conv0_HeadVar__1_1));
#line 611 "thread.channel.c"
  }
#line 613 "thread.channel.c"
}

#line 616 "thread.channel.c"
static MR_bool MR_CALL 
mercury__thread__channel____Unify____item_1_0_10001(
#line 619 "thread.channel.c"
  MR_Box mercury__thread__channel__wrapper_arg_1,
#line 621 "thread.channel.c"
  MR_Box mercury__thread__channel__wrapper_arg_2,
#line 623 "thread.channel.c"
  MR_Box mercury__thread__channel__wrapper_arg_3)
#line 625 "thread.channel.c"
{
#line 627 "thread.channel.c"
  {
#line 629 "thread.channel.c"
    MR_bool mercury__thread__channel__succeeded;

#line 632 "thread.channel.c"
    {
#line 634 "thread.channel.c"
      mercury__thread__channel__succeeded = mercury__thread__channel____Unify____item_1_0(((MR_Word) mercury__thread__channel__wrapper_arg_1), ((MR_Word) mercury__thread__channel__wrapper_arg_2), ((MR_Word) mercury__thread__channel__wrapper_arg_3));
    }
#line 637 "thread.channel.c"
    return mercury__thread__channel__succeeded;
#line 639 "thread.channel.c"
  }
#line 641 "thread.channel.c"
}

#line 644 "thread.channel.c"
static void MR_CALL 
mercury__thread__channel____Compare____item_1_0_10001(
#line 647 "thread.channel.c"
  MR_Box mercury__thread__channel__wrapper_arg_1,
#line 649 "thread.channel.c"
  MR_Box * mercury__thread__channel__wrapper_arg_2,
#line 651 "thread.channel.c"
  MR_Box mercury__thread__channel__wrapper_arg_3,
#line 653 "thread.channel.c"
  MR_Box mercury__thread__channel__wrapper_arg_4)
#line 655 "thread.channel.c"
{
#line 657 "thread.channel.c"
  {
#line 659 "thread.channel.c"
    MR_Word mercury__thread__channel__conv0_HeadVar__1_1;

#line 662 "thread.channel.c"
    {
#line 664 "thread.channel.c"
      mercury__thread__channel____Compare____item_1_0(((MR_Word) mercury__thread__channel__wrapper_arg_1), &mercury__thread__channel__conv0_HeadVar__1_1, ((MR_Word) mercury__thread__channel__wrapper_arg_3), ((MR_Word) mercury__thread__channel__wrapper_arg_4));
    }
#line 667 "thread.channel.c"
    *mercury__thread__channel__wrapper_arg_2 = ((MR_Box) (mercury__thread__channel__conv0_HeadVar__1_1));
#line 669 "thread.channel.c"
  }
#line 671 "thread.channel.c"
}

#line 674 "thread.channel.c"
static MR_bool MR_CALL 
mercury__thread__channel____Unify____stream_1_0_10001(
#line 677 "thread.channel.c"
  MR_Box mercury__thread__channel__wrapper_arg_1,
#line 679 "thread.channel.c"
  MR_Box mercury__thread__channel__wrapper_arg_2,
#line 681 "thread.channel.c"
  MR_Box mercury__thread__channel__wrapper_arg_3)
#line 683 "thread.channel.c"
{
#line 685 "thread.channel.c"
  {
#line 687 "thread.channel.c"
    MR_bool mercury__thread__channel__succeeded;

#line 690 "thread.channel.c"
    {
#line 692 "thread.channel.c"
      mercury__thread__channel__succeeded = mercury__thread__channel____Unify____stream_1_0(((MR_Word) mercury__thread__channel__wrapper_arg_1), ((MR_Word) mercury__thread__channel__wrapper_arg_2), ((MR_Word) mercury__thread__channel__wrapper_arg_3));
    }
#line 695 "thread.channel.c"
    return mercury__thread__channel__succeeded;
#line 697 "thread.channel.c"
  }
#line 699 "thread.channel.c"
}

#line 702 "thread.channel.c"
static void MR_CALL 
mercury__thread__channel____Compare____stream_1_0_10001(
#line 705 "thread.channel.c"
  MR_Box mercury__thread__channel__wrapper_arg_1,
#line 707 "thread.channel.c"
  MR_Box * mercury__thread__channel__wrapper_arg_2,
#line 709 "thread.channel.c"
  MR_Box mercury__thread__channel__wrapper_arg_3,
#line 711 "thread.channel.c"
  MR_Box mercury__thread__channel__wrapper_arg_4)
#line 713 "thread.channel.c"
{
#line 715 "thread.channel.c"
  {
#line 717 "thread.channel.c"
    MR_Word mercury__thread__channel__conv0_HeadVar__1_1;

#line 720 "thread.channel.c"
    {
#line 722 "thread.channel.c"
      mercury__thread__channel____Compare____stream_1_0(((MR_Word) mercury__thread__channel__wrapper_arg_1), &mercury__thread__channel__conv0_HeadVar__1_1, ((MR_Word) mercury__thread__channel__wrapper_arg_3), ((MR_Word) mercury__thread__channel__wrapper_arg_4));
    }
#line 725 "thread.channel.c"
    *mercury__thread__channel__wrapper_arg_2 = ((MR_Box) (mercury__thread__channel__conv0_HeadVar__1_1));
#line 727 "thread.channel.c"
  }
#line 729 "thread.channel.c"
}

#line 16 "ops.opt"
static MR_Integer MR_CALL 
mercury__thread__channel__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 16 "ops.opt"
{
#line 41 "ops.opt"
  {
#line 41 "ops.opt"
    MR_bool mercury__thread__channel__succeeded;

#line 41 "ops.opt"
    return (MR_Integer) 1200;
#line 41 "ops.opt"
  }
#line 16 "ops.opt"
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

#line 775 "thread.channel.c"
    {
#line 777 "thread.channel.c"
      mercury__thread__channel__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 779 "thread.channel.c"
      MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_8_8, 0) = ((MR_Box) (mercury__thread__channel__TypeCtorInfo_7_7));
#line 781 "thread.channel.c"
      MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_8_8, 1) = ((MR_Box) (mercury__thread__channel__TypeInfo_for_T_6));
#line 783 "thread.channel.c"
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

#line 821 "thread.channel.c"
    {
#line 823 "thread.channel.c"
      mercury__thread__channel__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 825 "thread.channel.c"
      MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_7_7, 0) = ((MR_Box) (mercury__thread__channel__TypeCtorInfo_6_6));
#line 827 "thread.channel.c"
      MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_7_7, 1) = ((MR_Box) (mercury__thread__channel__TypeInfo_for_T_5));
#line 829 "thread.channel.c"
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
#line 869 "thread.channel.c"
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
#line 891 "thread.channel.c"
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

#line 908 "thread.channel.c"
            {
#line 910 "thread.channel.c"
              mercury__thread__channel__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 912 "thread.channel.c"
              MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_13_13, 0) = ((MR_Box) (mercury__thread__channel__TypeCtorInfo_12_12));
#line 914 "thread.channel.c"
              MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_13_13, 1) = ((MR_Box) (mercury__thread__channel__TypeInfo_for_T_11));
#line 916 "thread.channel.c"
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

#line 977 "thread.channel.c"
        {
#line 979 "thread.channel.c"
          mercury__thread__channel__succeeded = mercury__builtin__unify_2_p_0(mercury__thread__channel__TypeInfo_for_T_9, mercury__thread__channel__V_3_3, mercury__thread__channel__V_5_5);
        }
#line 78 "thread.channel.m"
        if (mercury__thread__channel__succeeded)
#line 78 "thread.channel.m"
          {
#line 986 "thread.channel.c"
            mercury__thread__channel__TypeCtorInfo_10_10 = (MR_Word) &mercury__thread__channel__thread__channel__type_ctor_info_item_1;
#line 988 "thread.channel.c"
            {
#line 990 "thread.channel.c"
              mercury__thread__channel__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 992 "thread.channel.c"
              MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_11_11, 0) = ((MR_Box) (mercury__thread__channel__TypeCtorInfo_10_10));
#line 994 "thread.channel.c"
              MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_11_11, 1) = ((MR_Box) (mercury__thread__channel__TypeInfo_for_T_9));
#line 996 "thread.channel.c"
            }
#line 998 "thread.channel.c"
            {
#line 1000 "thread.channel.c"
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
#line 1040 "thread.channel.c"
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

#line 1065 "thread.channel.c"
        {
#line 1067 "thread.channel.c"
          mercury__thread__channel__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1069 "thread.channel.c"
          MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_13_13, 0) = ((MR_Box) (mercury__thread__channel__TypeCtorInfo_12_12));
#line 1071 "thread.channel.c"
          MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_13_13, 1) = ((MR_Box) (mercury__thread__channel__TypeInfo_for_T_11));
#line 1073 "thread.channel.c"
        }
#line 1075 "thread.channel.c"
        {
#line 1077 "thread.channel.c"
          mercury__thread__channel__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1079 "thread.channel.c"
          MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_15_15, 0) = ((MR_Box) (mercury__thread__channel__TypeCtorInfo_14_14));
#line 1081 "thread.channel.c"
          MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_15_15, 1) = ((MR_Box) (mercury__thread__channel__TypeInfo_13_13));
#line 1083 "thread.channel.c"
        }
#line 70 "thread.channel.m"
        {
#line 70 "thread.channel.m"
          mercury__thread__mvar____Compare____mvar_1_0(mercury__thread__channel__TypeInfo_15_15, &mercury__thread__channel__V_8_8, (MR_Word) mercury__thread__channel__V_4_4, (MR_Word) mercury__thread__channel__V_6_6);
        }
#line 1090 "thread.channel.c"
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

#line 1111 "thread.channel.c"
            {
#line 1113 "thread.channel.c"
              mercury__thread__channel__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1115 "thread.channel.c"
              MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_18_18, 0) = ((MR_Box) (mercury__thread__channel__TypeCtorInfo_17_17));
#line 1117 "thread.channel.c"
              MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_18_18, 1) = ((MR_Box) (mercury__thread__channel__TypeInfo_for_T_11));
#line 1119 "thread.channel.c"
            }
#line 1121 "thread.channel.c"
            {
#line 1123 "thread.channel.c"
              mercury__thread__channel__TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1125 "thread.channel.c"
              MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_20_20, 0) = ((MR_Box) (mercury__thread__channel__TypeCtorInfo_19_19));
#line 1127 "thread.channel.c"
              MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_20_20, 1) = ((MR_Box) (mercury__thread__channel__TypeInfo_18_18));
#line 1129 "thread.channel.c"
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

#line 1194 "thread.channel.c"
        {
#line 1196 "thread.channel.c"
          mercury__thread__channel__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1198 "thread.channel.c"
          MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_16_16, 0) = ((MR_Box) (mercury__thread__channel__TypeCtorInfo_10_10));
#line 1200 "thread.channel.c"
          MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_16_16, 1) = ((MR_Box) (mercury__thread__channel__TypeInfo_for_T_9));
#line 1202 "thread.channel.c"
        }
#line 1204 "thread.channel.c"
        {
#line 1206 "thread.channel.c"
          mercury__thread__channel__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1208 "thread.channel.c"
          MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_18_18, 0) = ((MR_Box) (mercury__thread__channel__TypeCtorInfo_12_12));
#line 1210 "thread.channel.c"
          MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_18_18, 1) = ((MR_Box) (mercury__thread__channel__TypeInfo_16_16));
#line 1212 "thread.channel.c"
        }
#line 1214 "thread.channel.c"
        {
#line 1216 "thread.channel.c"
          mercury__thread__channel__succeeded = mercury__thread__mvar____Unify____mvar_1_0(mercury__thread__channel__TypeInfo_18_18, (MR_Word) mercury__thread__channel__V_3_3, (MR_Word) mercury__thread__channel__V_5_5);
        }
#line 70 "thread.channel.m"
        if (mercury__thread__channel__succeeded)
#line 1221 "thread.channel.c"
          {
#line 1223 "thread.channel.c"
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

#line 1273 "thread.channel.c"
    {
#line 1275 "thread.channel.c"
      mercury__thread__channel__TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1277 "thread.channel.c"
      MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_20_20, 0) = ((MR_Box) (mercury__thread__channel__TypeCtorInfo_19_19));
#line 1279 "thread.channel.c"
      MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_20_20, 1) = ((MR_Box) (mercury__thread__channel__TypeInfo_for_T_18));
#line 1281 "thread.channel.c"
    }
#line 122 "thread.channel.m"
    {
#line 122 "thread.channel.m"
      mercury__thread__mvar__init_3_p_0(mercury__thread__channel__TypeInfo_20_20, &mercury__thread__channel__conv0_NewHead_9);
    }
#line 122 "thread.channel.m"
    mercury__thread__channel__NewHead_9 = (MR_Word) mercury__thread__channel__conv0_NewHead_9;
#line 1290 "thread.channel.c"
    mercury__thread__channel__TypeCtorInfo_21_21 = (MR_Word) &mercury__thread__mvar__thread__mvar__type_ctor_info_mvar_1;
#line 1292 "thread.channel.c"
    {
#line 1294 "thread.channel.c"
      mercury__thread__channel__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1296 "thread.channel.c"
      MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_22_22, 0) = ((MR_Box) (mercury__thread__channel__TypeCtorInfo_21_21));
#line 1298 "thread.channel.c"
      MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_22_22, 1) = ((MR_Box) (mercury__thread__channel__TypeInfo_20_20));
#line 1300 "thread.channel.c"
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

#line 1372 "thread.channel.c"
    {
#line 1374 "thread.channel.c"
      mercury__thread__channel__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1376 "thread.channel.c"
      MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_18_18, 0) = ((MR_Box) (mercury__thread__channel__TypeCtorInfo_17_17));
#line 1378 "thread.channel.c"
      MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_18_18, 1) = ((MR_Box) (mercury__thread__channel__TypeInfo_for_T_16));
#line 1380 "thread.channel.c"
    }
#line 1382 "thread.channel.c"
    {
#line 1384 "thread.channel.c"
      mercury__thread__channel__TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1386 "thread.channel.c"
      MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_20_20, 0) = ((MR_Box) (mercury__thread__channel__TypeCtorInfo_19_19));
#line 1388 "thread.channel.c"
      MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_20_20, 1) = ((MR_Box) (mercury__thread__channel__TypeInfo_18_18));
#line 1390 "thread.channel.c"
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

#line 1475 "thread.channel.c"
    {
#line 1477 "thread.channel.c"
      mercury__thread__channel__TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1479 "thread.channel.c"
      MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_21_21, 0) = ((MR_Box) (mercury__thread__channel__TypeCtorInfo_20_20));
#line 1481 "thread.channel.c"
      MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_21_21, 1) = ((MR_Box) (mercury__thread__channel__TypeInfo_for_T_19));
#line 1483 "thread.channel.c"
    }
#line 1485 "thread.channel.c"
    {
#line 1487 "thread.channel.c"
      mercury__thread__channel__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1489 "thread.channel.c"
      MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_23_23, 0) = ((MR_Box) (mercury__thread__channel__TypeCtorInfo_22_22));
#line 1491 "thread.channel.c"
      MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_23_23, 1) = ((MR_Box) (mercury__thread__channel__TypeInfo_21_21));
#line 1493 "thread.channel.c"
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

#line 1596 "thread.channel.c"
    {
#line 1598 "thread.channel.c"
      mercury__thread__channel__TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1600 "thread.channel.c"
      MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_19_19, 0) = ((MR_Box) (mercury__thread__channel__TypeCtorInfo_18_18));
#line 1602 "thread.channel.c"
      MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_19_19, 1) = ((MR_Box) (mercury__thread__channel__TypeInfo_for_T_17));
#line 1604 "thread.channel.c"
    }
#line 1606 "thread.channel.c"
    {
#line 1608 "thread.channel.c"
      mercury__thread__channel__TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1610 "thread.channel.c"
      MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_21_21, 0) = ((MR_Box) (mercury__thread__channel__TypeCtorInfo_20_20));
#line 1612 "thread.channel.c"
      MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_21_21, 1) = ((MR_Box) (mercury__thread__channel__TypeInfo_19_19));
#line 1614 "thread.channel.c"
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

#line 1684 "thread.channel.c"
    {
#line 1686 "thread.channel.c"
      mercury__thread__channel__TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1688 "thread.channel.c"
      MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_20_20, 0) = ((MR_Box) (mercury__thread__channel__TypeCtorInfo_19_19));
#line 1690 "thread.channel.c"
      MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_20_20, 1) = ((MR_Box) (mercury__thread__channel__TypeInfo_for_T_18));
#line 1692 "thread.channel.c"
    }
#line 92 "thread.channel.m"
    {
#line 92 "thread.channel.m"
      mercury__thread__mvar__init_3_p_0(mercury__thread__channel__TypeInfo_20_20, &mercury__thread__channel__conv0_NewHole_9);
    }
#line 92 "thread.channel.m"
    mercury__thread__channel__NewHole_9 = (MR_Word) mercury__thread__channel__conv0_NewHole_9;
#line 1701 "thread.channel.c"
    mercury__thread__channel__TypeCtorInfo_21_21 = (MR_Word) &mercury__thread__mvar__thread__mvar__type_ctor_info_mvar_1;
#line 1703 "thread.channel.c"
    {
#line 1705 "thread.channel.c"
      mercury__thread__channel__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1707 "thread.channel.c"
      MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_22_22, 0) = ((MR_Box) (mercury__thread__channel__TypeCtorInfo_21_21));
#line 1709 "thread.channel.c"
      MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_22_22, 1) = ((MR_Box) (mercury__thread__channel__TypeInfo_20_20));
#line 1711 "thread.channel.c"
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

#line 1781 "thread.channel.c"
    {
#line 1783 "thread.channel.c"
      mercury__thread__channel__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1785 "thread.channel.c"
      MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_17_17, 0) = ((MR_Box) (mercury__thread__channel__TypeCtorInfo_16_16));
#line 1787 "thread.channel.c"
      MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_17_17, 1) = ((MR_Box) (mercury__thread__channel__TypeInfo_for_T_15));
#line 1789 "thread.channel.c"
    }
#line 1791 "thread.channel.c"
    {
#line 1793 "thread.channel.c"
      mercury__thread__channel__TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1795 "thread.channel.c"
      MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_19_19, 0) = ((MR_Box) (mercury__thread__channel__TypeCtorInfo_18_18));
#line 1797 "thread.channel.c"
      MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_19_19, 1) = ((MR_Box) (mercury__thread__channel__TypeInfo_17_17));
#line 1799 "thread.channel.c"
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
