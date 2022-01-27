/*
** Automatically generated from `string.builder.m'
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


/* :- module string.builder. */
/* :- implementation. */

/*
INIT mercury__string__builder__init
ENDINIT
*/

#include "string.builder.mih"


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




#line 94 "string.builder.c"
static const MR_EnumFunctorDesc mercury__string__builder__string__builder__enum_functor_desc_handle_0_0;

#line 97 "string.builder.c"
static const MR_EnumFunctorDescPtr mercury__string__builder__string__builder__enum_value_ordered_handle_0[1];

#line 100 "string.builder.c"
static const MR_EnumFunctorDescPtr mercury__string__builder__string__builder__enum_name_ordered_handle_0[1];

#line 103 "string.builder.c"
static const MR_Integer mercury__string__builder__string__builder__functor_number_map_handle_0[1];

#line 106 "string.builder.c"
static const MR_Integer mercury__string__builder__string__builder__functor_number_map_state_0[1];

#line 109 "string.builder.c"
static const MR_FA_TypeInfo_Struct1 mercury__string__builder__list__ti_list_1builtin__type_ctor_info_string_0;

#line 112 "string.builder.c"
static const MR_NotagFunctorDesc mercury__string__builder__string__builder__notag_functor_desc_state_0;

#line 115 "string.builder.c"
static MR_bool MR_CALL 
mercury__string__builder____Unify____handle_0_0_10001(
#line 118 "string.builder.c"
  MR_Box mercury__string__builder__wrapper_arg_1,
#line 120 "string.builder.c"
  MR_Box mercury__string__builder__wrapper_arg_2);

#line 123 "string.builder.c"
static void MR_CALL 
mercury__string__builder____Compare____handle_0_0_10001(
#line 126 "string.builder.c"
  MR_Box * mercury__string__builder__wrapper_arg_1,
#line 128 "string.builder.c"
  MR_Box mercury__string__builder__wrapper_arg_2,
#line 130 "string.builder.c"
  MR_Box mercury__string__builder__wrapper_arg_3);

#line 133 "string.builder.c"
static MR_bool MR_CALL 
mercury__string__builder____Unify____state_0_0_10001(
#line 136 "string.builder.c"
  MR_Box mercury__string__builder__wrapper_arg_1,
#line 138 "string.builder.c"
  MR_Box mercury__string__builder__wrapper_arg_2);

#line 141 "string.builder.c"
static void MR_CALL 
mercury__string__builder____Compare____state_0_0_10001(
#line 144 "string.builder.c"
  MR_Box * mercury__string__builder__wrapper_arg_1,
#line 146 "string.builder.c"
  MR_Box mercury__string__builder__wrapper_arg_2,
#line 148 "string.builder.c"
  MR_Box mercury__string__builder__wrapper_arg_3);

#line 151 "string.builder.c"
static void MR_CALL 
mercury__string__builder__ClassMethod_for_stream__writer____string__builder__handle__arity0__character__arity0__string__builder__state__arity0______stream__put_4_4_p_0_10001(
#line 154 "string.builder.c"
  MR_Box mercury__string__builder__closure_arg,
#line 156 "string.builder.c"
  MR_Box mercury__string__builder__wrapper_arg_1,
#line 158 "string.builder.c"
  MR_Box mercury__string__builder__wrapper_arg_2,
#line 160 "string.builder.c"
  MR_Box mercury__string__builder__wrapper_arg_3,
#line 162 "string.builder.c"
  MR_Box * mercury__string__builder__wrapper_arg_4);

#line 165 "string.builder.c"
static void MR_CALL 
mercury__string__builder__ClassMethod_for_stream__writer____string__builder__handle__arity0__string__arity0__string__builder__state__arity0______stream__put_4_4_p_0_10001(
#line 168 "string.builder.c"
  MR_Box mercury__string__builder__closure_arg,
#line 170 "string.builder.c"
  MR_Box mercury__string__builder__wrapper_arg_1,
#line 172 "string.builder.c"
  MR_Box mercury__string__builder__wrapper_arg_2,
#line 174 "string.builder.c"
  MR_Box mercury__string__builder__wrapper_arg_3,
#line 176 "string.builder.c"
  MR_Box * mercury__string__builder__wrapper_arg_4);

#line 179 "string.builder.c"
static void MR_CALL 
mercury__string__builder__ClassMethod_for_stream__stream____string__builder__handle__arity0__string__builder__state__arity0______stream__name_4_4_p_0_10001(
#line 182 "string.builder.c"
  MR_Box mercury__string__builder__closure_arg,
#line 184 "string.builder.c"
  MR_Box mercury__string__builder__wrapper_arg_1,
#line 186 "string.builder.c"
  MR_Box * mercury__string__builder__wrapper_arg_2,
#line 188 "string.builder.c"
  MR_Box mercury__string__builder__wrapper_arg_3,
#line 190 "string.builder.c"
  MR_Box * mercury__string__builder__wrapper_arg_4);

#line 193 "string.builder.c"
static void MR_CALL 
mercury__string__builder__ClassMethod_for_stream__output____string__builder__handle__arity0__string__builder__state__arity0______stream__flush_3_3_p_0_10001(
#line 196 "string.builder.c"
  MR_Box mercury__string__builder__closure_arg,
#line 198 "string.builder.c"
  MR_Box mercury__string__builder__wrapper_arg_1,
#line 200 "string.builder.c"
  MR_Box mercury__string__builder__wrapper_arg_2,
#line 202 "string.builder.c"
  MR_Box * mercury__string__builder__wrapper_arg_3);

#line 18 "ops.opt"
static MR_Integer MR_CALL 
mercury__string__builder__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);


static /* final */ const MR_Box mercury__string__builder_scalar_common_1[1][2];

static /* final */ const MR_Box mercury__string__builder_scalar_common_2[1][3];

static /* final */ const MR_Box mercury__string__builder_scalar_common_3[1][4];

static /* final */ const MR_Box mercury__string__builder_scalar_common_4[2][5];




static /* final */ const MR_Box mercury__string__builder_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box mercury__string__builder_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__string__builder_scalar_common_3[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__string__builder_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__string__builder_scalar_common_4[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__string__builder_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__string__builder_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "array.mh"
#include "benchmarking.mh"
#include "bitmap.mh"
#include "builtin.mh"
#include "char.mh"
#include "construct.mh"
#include "dir.mh"
#include "exception.mh"
#include "float.mh"
#include "int.mh"
#include "io.mh"
#include "math.mh"
#include "pretty_printer.mh"
#include "private_builtin.mh"
#include "rtti_implementation.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "string.mh"
#include "table_builtin.mh"
#include "time.mh"
#include "type_desc.mh"
#include "version_array.mh"



#line 294 "string.builder.c"
static const MR_EnumFunctorDesc mercury__string__builder__string__builder__enum_functor_desc_handle_0_0 = {
  (MR_String) "handle",
  (MR_Integer) 0
};

#line 300 "string.builder.c"
static const MR_EnumFunctorDescPtr mercury__string__builder__string__builder__enum_value_ordered_handle_0[1] = {
  &mercury__string__builder__string__builder__enum_functor_desc_handle_0_0
};

#line 305 "string.builder.c"
static const MR_EnumFunctorDescPtr mercury__string__builder__string__builder__enum_name_ordered_handle_0[1] = {
  &mercury__string__builder__string__builder__enum_functor_desc_handle_0_0
};

#line 310 "string.builder.c"
static const MR_Integer mercury__string__builder__string__builder__functor_number_map_handle_0[1] = {
  (MR_Integer) 0
};

#line 315 "string.builder.c"
const MR_TypeCtorInfo_Struct mercury__string__builder__string__builder__type_ctor_info_handle_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (mercury__string__builder____Unify____handle_0_0_10001)),
  ((MR_Box) (mercury__string__builder____Compare____handle_0_0_10001)),
  (MR_String) "string.builder",
  (MR_String) "handle",
  {     mercury__string__builder__string__builder__enum_name_ordered_handle_0 },
  {     mercury__string__builder__string__builder__enum_value_ordered_handle_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__string__builder__string__builder__functor_number_map_handle_0
};

#line 332 "string.builder.c"
static const MR_Integer mercury__string__builder__string__builder__functor_number_map_state_0[1] = {
  (MR_Integer) 0
};

#line 337 "string.builder.c"
static const MR_FA_TypeInfo_Struct1 mercury__string__builder__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 345 "string.builder.c"
static const MR_NotagFunctorDesc mercury__string__builder__string__builder__notag_functor_desc_state_0 = {
  (MR_String) "state",
  (MR_PseudoTypeInfo) &mercury__string__builder__list__ti_list_1builtin__type_ctor_info_string_0,
  NULL
};

#line 352 "string.builder.c"
const MR_TypeCtorInfo_Struct mercury__string__builder__string__builder__type_ctor_info_state_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__string__builder____Unify____state_0_0_10001)),
  ((MR_Box) (mercury__string__builder____Compare____state_0_0_10001)),
  (MR_String) "string.builder",
  (MR_String) "state",
  {     &mercury__string__builder__string__builder__notag_functor_desc_state_0 },
  {     &mercury__string__builder__string__builder__notag_functor_desc_state_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__string__builder__string__builder__functor_number_map_state_0
};

#line 369 "string.builder.c"
const MR_BaseTypeclassInfo base_typeclass_info_stream__writer__arity3__string__builder__handle__arity0__character__arity0__string__builder__state__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 3)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (mercury__string__builder__ClassMethod_for_stream__writer____string__builder__handle__arity0__character__arity0__string__builder__state__arity0______stream__put_4_4_p_0_10001))
};

#line 379 "string.builder.c"
const MR_BaseTypeclassInfo base_typeclass_info_stream__writer__arity3__string__builder__handle__arity0__string__arity0__string__builder__state__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 3)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (mercury__string__builder__ClassMethod_for_stream__writer____string__builder__handle__arity0__string__arity0__string__builder__state__arity0______stream__put_4_4_p_0_10001))
};

#line 389 "string.builder.c"
const MR_BaseTypeclassInfo base_typeclass_info_stream__stream__arity2__string__builder__handle__arity0__string__builder__state__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (mercury__string__builder__ClassMethod_for_stream__stream____string__builder__handle__arity0__string__builder__state__arity0______stream__name_4_4_p_0_10001))
};

#line 399 "string.builder.c"
const MR_BaseTypeclassInfo base_typeclass_info_stream__output__arity2__string__builder__handle__arity0__string__builder__state__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (mercury__string__builder__ClassMethod_for_stream__output____string__builder__handle__arity0__string__builder__state__arity0______stream__flush_3_3_p_0_10001))
};

#line 409 "string.builder.c"
static MR_bool MR_CALL 
mercury__string__builder____Unify____handle_0_0_10001(
#line 412 "string.builder.c"
  MR_Box mercury__string__builder__wrapper_arg_1,
#line 414 "string.builder.c"
  MR_Box mercury__string__builder__wrapper_arg_2)
#line 416 "string.builder.c"
{
#line 418 "string.builder.c"
  {
#line 420 "string.builder.c"
    MR_bool mercury__string__builder__succeeded;

#line 423 "string.builder.c"
    {
#line 425 "string.builder.c"
      mercury__string__builder__succeeded = mercury__string__builder____Unify____handle_0_0();
    }
#line 428 "string.builder.c"
    return mercury__string__builder__succeeded;
#line 430 "string.builder.c"
  }
#line 432 "string.builder.c"
}

#line 435 "string.builder.c"
static void MR_CALL 
mercury__string__builder____Compare____handle_0_0_10001(
#line 438 "string.builder.c"
  MR_Box * mercury__string__builder__wrapper_arg_1,
#line 440 "string.builder.c"
  MR_Box mercury__string__builder__wrapper_arg_2,
#line 442 "string.builder.c"
  MR_Box mercury__string__builder__wrapper_arg_3)
#line 444 "string.builder.c"
{
#line 446 "string.builder.c"
  {
#line 448 "string.builder.c"
    MR_Word mercury__string__builder__conv0_HeadVar__1_1;

#line 451 "string.builder.c"
    {
#line 453 "string.builder.c"
      mercury__string__builder____Compare____handle_0_0(&mercury__string__builder__conv0_HeadVar__1_1);
    }
#line 456 "string.builder.c"
    *mercury__string__builder__wrapper_arg_1 = ((MR_Box) (mercury__string__builder__conv0_HeadVar__1_1));
#line 458 "string.builder.c"
  }
#line 460 "string.builder.c"
}

#line 463 "string.builder.c"
static MR_bool MR_CALL 
mercury__string__builder____Unify____state_0_0_10001(
#line 466 "string.builder.c"
  MR_Box mercury__string__builder__wrapper_arg_1,
#line 468 "string.builder.c"
  MR_Box mercury__string__builder__wrapper_arg_2)
#line 470 "string.builder.c"
{
#line 472 "string.builder.c"
  {
#line 474 "string.builder.c"
    MR_bool mercury__string__builder__succeeded;

#line 477 "string.builder.c"
    {
#line 479 "string.builder.c"
      mercury__string__builder__succeeded = mercury__string__builder____Unify____state_0_0(((MR_Word) mercury__string__builder__wrapper_arg_1), ((MR_Word) mercury__string__builder__wrapper_arg_2));
    }
#line 482 "string.builder.c"
    return mercury__string__builder__succeeded;
#line 484 "string.builder.c"
  }
#line 486 "string.builder.c"
}

#line 489 "string.builder.c"
static void MR_CALL 
mercury__string__builder____Compare____state_0_0_10001(
#line 492 "string.builder.c"
  MR_Box * mercury__string__builder__wrapper_arg_1,
#line 494 "string.builder.c"
  MR_Box mercury__string__builder__wrapper_arg_2,
#line 496 "string.builder.c"
  MR_Box mercury__string__builder__wrapper_arg_3)
#line 498 "string.builder.c"
{
#line 500 "string.builder.c"
  {
#line 502 "string.builder.c"
    MR_Word mercury__string__builder__conv0_HeadVar__1_1;

#line 505 "string.builder.c"
    {
#line 507 "string.builder.c"
      mercury__string__builder____Compare____state_0_0(&mercury__string__builder__conv0_HeadVar__1_1, ((MR_Word) mercury__string__builder__wrapper_arg_2), ((MR_Word) mercury__string__builder__wrapper_arg_3));
    }
#line 510 "string.builder.c"
    *mercury__string__builder__wrapper_arg_1 = ((MR_Box) (mercury__string__builder__conv0_HeadVar__1_1));
#line 512 "string.builder.c"
  }
#line 514 "string.builder.c"
}

#line 517 "string.builder.c"
static void MR_CALL 
mercury__string__builder__ClassMethod_for_stream__writer____string__builder__handle__arity0__character__arity0__string__builder__state__arity0______stream__put_4_4_p_0_10001(
#line 520 "string.builder.c"
  MR_Box mercury__string__builder__closure_arg,
#line 522 "string.builder.c"
  MR_Box mercury__string__builder__wrapper_arg_1,
#line 524 "string.builder.c"
  MR_Box mercury__string__builder__wrapper_arg_2,
#line 526 "string.builder.c"
  MR_Box mercury__string__builder__wrapper_arg_3,
#line 528 "string.builder.c"
  MR_Box * mercury__string__builder__wrapper_arg_4)
#line 530 "string.builder.c"
{
#line 532 "string.builder.c"
  {
#line 534 "string.builder.c"
    MR_Box mercury__string__builder__closure;
#line 536 "string.builder.c"
    MR_Word mercury__string__builder__conv0_STATE_VARIABLE_State_11;

#line 539 "string.builder.c"
    mercury__string__builder__closure = mercury__string__builder__closure_arg;
#line 541 "string.builder.c"
    {
#line 543 "string.builder.c"
      mercury__string__builder__ClassMethod_for_stream__writer____string__builder__handle__arity0__character__arity0__string__builder__state__arity0______stream__put_4_4_p_0(((MR_Char) (MR_Word) mercury__string__builder__wrapper_arg_2), ((MR_Word) mercury__string__builder__wrapper_arg_3), &mercury__string__builder__conv0_STATE_VARIABLE_State_11);
    }
#line 546 "string.builder.c"
    *mercury__string__builder__wrapper_arg_4 = ((MR_Box) (mercury__string__builder__conv0_STATE_VARIABLE_State_11));
#line 548 "string.builder.c"
  }
#line 550 "string.builder.c"
}

#line 553 "string.builder.c"
static void MR_CALL 
mercury__string__builder__ClassMethod_for_stream__writer____string__builder__handle__arity0__string__arity0__string__builder__state__arity0______stream__put_4_4_p_0_10001(
#line 556 "string.builder.c"
  MR_Box mercury__string__builder__closure_arg,
#line 558 "string.builder.c"
  MR_Box mercury__string__builder__wrapper_arg_1,
#line 560 "string.builder.c"
  MR_Box mercury__string__builder__wrapper_arg_2,
#line 562 "string.builder.c"
  MR_Box mercury__string__builder__wrapper_arg_3,
#line 564 "string.builder.c"
  MR_Box * mercury__string__builder__wrapper_arg_4)
#line 566 "string.builder.c"
{
#line 568 "string.builder.c"
  {
#line 570 "string.builder.c"
    MR_Box mercury__string__builder__closure;
#line 572 "string.builder.c"
    MR_Word mercury__string__builder__conv0_STATE_VARIABLE_State_12;

#line 575 "string.builder.c"
    mercury__string__builder__closure = mercury__string__builder__closure_arg;
#line 577 "string.builder.c"
    {
#line 579 "string.builder.c"
      mercury__string__builder__ClassMethod_for_stream__writer____string__builder__handle__arity0__string__arity0__string__builder__state__arity0______stream__put_4_4_p_0(((MR_String) mercury__string__builder__wrapper_arg_2), ((MR_Word) mercury__string__builder__wrapper_arg_3), &mercury__string__builder__conv0_STATE_VARIABLE_State_12);
    }
#line 582 "string.builder.c"
    *mercury__string__builder__wrapper_arg_4 = ((MR_Box) (mercury__string__builder__conv0_STATE_VARIABLE_State_12));
#line 584 "string.builder.c"
  }
#line 586 "string.builder.c"
}

#line 589 "string.builder.c"
static void MR_CALL 
mercury__string__builder__ClassMethod_for_stream__stream____string__builder__handle__arity0__string__builder__state__arity0______stream__name_4_4_p_0_10001(
#line 592 "string.builder.c"
  MR_Box mercury__string__builder__closure_arg,
#line 594 "string.builder.c"
  MR_Box mercury__string__builder__wrapper_arg_1,
#line 596 "string.builder.c"
  MR_Box * mercury__string__builder__wrapper_arg_2,
#line 598 "string.builder.c"
  MR_Box mercury__string__builder__wrapper_arg_3,
#line 600 "string.builder.c"
  MR_Box * mercury__string__builder__wrapper_arg_4)
#line 602 "string.builder.c"
{
#line 604 "string.builder.c"
  {
#line 606 "string.builder.c"
    MR_Box mercury__string__builder__closure;
#line 608 "string.builder.c"
    MR_String mercury__string__builder__conv1_HeadVar__2_2;
#line 610 "string.builder.c"
    MR_Word mercury__string__builder__conv0_STATE_VARIABLE_State_8;

#line 613 "string.builder.c"
    mercury__string__builder__closure = mercury__string__builder__closure_arg;
#line 615 "string.builder.c"
    {
#line 617 "string.builder.c"
      mercury__string__builder__ClassMethod_for_stream__stream____string__builder__handle__arity0__string__builder__state__arity0______stream__name_4_4_p_0(&mercury__string__builder__conv1_HeadVar__2_2, ((MR_Word) mercury__string__builder__wrapper_arg_3), &mercury__string__builder__conv0_STATE_VARIABLE_State_8);
    }
#line 620 "string.builder.c"
    *mercury__string__builder__wrapper_arg_2 = ((MR_Box) (mercury__string__builder__conv1_HeadVar__2_2));
#line 622 "string.builder.c"
    *mercury__string__builder__wrapper_arg_4 = ((MR_Box) (mercury__string__builder__conv0_STATE_VARIABLE_State_8));
#line 624 "string.builder.c"
  }
#line 626 "string.builder.c"
}

#line 629 "string.builder.c"
static void MR_CALL 
mercury__string__builder__ClassMethod_for_stream__output____string__builder__handle__arity0__string__builder__state__arity0______stream__flush_3_3_p_0_10001(
#line 632 "string.builder.c"
  MR_Box mercury__string__builder__closure_arg,
#line 634 "string.builder.c"
  MR_Box mercury__string__builder__wrapper_arg_1,
#line 636 "string.builder.c"
  MR_Box mercury__string__builder__wrapper_arg_2,
#line 638 "string.builder.c"
  MR_Box * mercury__string__builder__wrapper_arg_3)
#line 640 "string.builder.c"
{
#line 642 "string.builder.c"
  {
#line 644 "string.builder.c"
    MR_Box mercury__string__builder__closure;
#line 646 "string.builder.c"
    MR_Word mercury__string__builder__conv0_STATE_VARIABLE_State_7;

#line 649 "string.builder.c"
    mercury__string__builder__closure = mercury__string__builder__closure_arg;
#line 651 "string.builder.c"
    {
#line 653 "string.builder.c"
      mercury__string__builder__ClassMethod_for_stream__output____string__builder__handle__arity0__string__builder__state__arity0______stream__flush_3_3_p_0(((MR_Word) mercury__string__builder__wrapper_arg_2), &mercury__string__builder__conv0_STATE_VARIABLE_State_7);
    }
#line 656 "string.builder.c"
    *mercury__string__builder__wrapper_arg_3 = ((MR_Box) (mercury__string__builder__conv0_STATE_VARIABLE_State_7));
#line 658 "string.builder.c"
  }
#line 660 "string.builder.c"
}

#line 78 "string.builder.m"
void MR_CALL 
mercury__string__builder__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_115_116_114_101_97_109_95_95_119_114_105_116_101_114_95_95_95_95_115_116_114_105_110_103_95_95_98_117_105_108_100_101_114_95_95_104_97_110_100_108_101_95_95_97_114_105_116_121_48_95_95_115_116_114_105_110_103_95_95_97_114_105_116_121_48_95_95_115_116_114_105_110_103_95_95_98_117_105_108_100_101_114_95_95_115_116_97_116_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_115_116_114_101_97_109_95_95_112_117_116_95_52_95_95_91_49_93_95_48_4_p_0(
#line 78 "string.builder.m"
  MR_String mercury__string__builder__String_6,
#line 78 "string.builder.m"
  MR_Word mercury__string__builder__STATE_VARIABLE_State_0_11,
#line 78 "string.builder.m"
  MR_Word * mercury__string__builder__STATE_VARIABLE_State_12)
#line 78 "string.builder.m"
{
#line 78 "string.builder.m"
  {
#line 78 "string.builder.m"
    MR_bool mercury__string__builder__succeeded;
#line 78 "string.builder.m"
    MR_Word mercury__string__builder__TypeCtorInfo_14_14 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 78 "string.builder.m"
    MR_Word mercury__string__builder__StringList0_8 = (MR_Word) mercury__string__builder__STATE_VARIABLE_State_0_11;
#line 78 "string.builder.m"
    MR_String mercury__string__builder__UniqueString_9;
#line 78 "string.builder.m"
    MR_Word mercury__string__builder__StringList_10;
#line 47 "builtin.opt"
    MR_Box mercury__string__builder__conv0_Copy;

#line 47 "builtin.opt"
{
#define MR_PROC_LABEL mercury__string__builder__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_115_116_114_101_97_109_95_95_119_114_105_116_101_114_95_95_95_95_115_116_114_105_110_103_95_95_98_117_105_108_100_101_114_95_95_104_97_110_100_108_101_95_95_97_114_105_116_121_48_95_95_115_116_114_105_110_103_95_95_97_114_105_116_121_48_95_95_115_116_114_105_110_103_95_95_98_117_105_108_100_101_114_95_95_115_116_97_116_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_115_116_114_101_97_109_95_95_112_117_116_95_52_95_95_91_49_93_95_48_4_p_0

	MR_Word TypeInfo_for_T;
	MR_Word Value;
	MR_Word Copy;

	TypeInfo_for_T =  mercury__string__builder__TypeCtorInfo_14_14 ;
	Value = (MR_Word) ((MR_Box) (mercury__string__builder__String_6)) ;
		{
#line 47 "builtin.opt"

    MR_save_transient_registers();
    Copy = MR_deep_copy(Value, (MR_TypeInfo) TypeInfo_for_T, NULL, NULL);
    MR_restore_transient_registers();

#line 706 "string.builder.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__builder__conv0_Copy  = (MR_Box) Copy;
#line 47 "builtin.opt"
    mercury__string__builder__UniqueString_9 = ((MR_String) mercury__string__builder__conv0_Copy);
#line 47 "builtin.opt"
}
#line 81 "string.builder.m"
    {
#line 81 "string.builder.m"
      mercury__string__builder__StringList_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 81 "string.builder.m"
      MR_hl_field(MR_mktag(1), mercury__string__builder__StringList_10, 0) = ((MR_Box) (mercury__string__builder__UniqueString_9));
#line 81 "string.builder.m"
      MR_hl_field(MR_mktag(1), mercury__string__builder__StringList_10, 1) = ((MR_Box) (mercury__string__builder__StringList0_8));
#line 81 "string.builder.m"
    }
#line 82 "string.builder.m"
    *mercury__string__builder__STATE_VARIABLE_State_12 = (MR_Word) mercury__string__builder__StringList_10;
#line 78 "string.builder.m"
  }
#line 78 "string.builder.m"
}

#line 88 "string.builder.m"
void MR_CALL 
mercury__string__builder__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_115_116_114_101_97_109_95_95_119_114_105_116_101_114_95_95_95_95_115_116_114_105_110_103_95_95_98_117_105_108_100_101_114_95_95_104_97_110_100_108_101_95_95_97_114_105_116_121_48_95_95_99_104_97_114_97_99_116_101_114_95_95_97_114_105_116_121_48_95_95_115_116_114_105_110_103_95_95_98_117_105_108_100_101_114_95_95_115_116_97_116_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_115_116_114_101_97_109_95_95_112_117_116_95_52_95_95_91_49_93_95_48_4_p_0(
#line 88 "string.builder.m"
  MR_Char mercury__string__builder__Char_6,
#line 88 "string.builder.m"
  MR_Word mercury__string__builder__STATE_VARIABLE_State_0_10,
#line 88 "string.builder.m"
  MR_Word * mercury__string__builder__STATE_VARIABLE_State_11)
#line 88 "string.builder.m"
{
#line 88 "string.builder.m"
  {
#line 88 "string.builder.m"
    MR_bool mercury__string__builder__succeeded;
#line 88 "string.builder.m"
    MR_Word mercury__string__builder__StringList0_8 = (MR_Word) mercury__string__builder__STATE_VARIABLE_State_0_10;
#line 88 "string.builder.m"
    MR_Word mercury__string__builder__StringList_9;
#line 88 "string.builder.m"
    MR_String mercury__string__builder__V_12_12;
#line 88 "string.builder.m"
    MR_Word mercury__string__builder__V_5_20;
#line 88 "string.builder.m"
    MR_Word mercury__string__builder__V_6_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 215 "string.opt"
    {
#line 215 "string.opt"
      mercury__string__builder__V_5_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 215 "string.opt"
      MR_hl_field(MR_mktag(1), mercury__string__builder__V_5_20, 0) = ((MR_Box) (MR_Word) (mercury__string__builder__Char_6));
#line 215 "string.opt"
      MR_hl_field(MR_mktag(1), mercury__string__builder__V_5_20, 1) = ((MR_Box) (mercury__string__builder__V_6_21));
#line 215 "string.opt"
    }
#line 217 "string.opt"
    {
#line 217 "string.opt"
      mercury__string__to_char_list_2_p_1(&mercury__string__builder__V_12_12, mercury__string__builder__V_5_20);
    }
#line 90 "string.builder.m"
    {
#line 90 "string.builder.m"
      mercury__string__builder__StringList_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 90 "string.builder.m"
      MR_hl_field(MR_mktag(1), mercury__string__builder__StringList_9, 0) = ((MR_Box) (mercury__string__builder__V_12_12));
#line 90 "string.builder.m"
      MR_hl_field(MR_mktag(1), mercury__string__builder__StringList_9, 1) = ((MR_Box) (mercury__string__builder__StringList0_8));
#line 90 "string.builder.m"
    }
#line 91 "string.builder.m"
    *mercury__string__builder__STATE_VARIABLE_State_11 = (MR_Word) mercury__string__builder__StringList_9;
#line 88 "string.builder.m"
  }
#line 88 "string.builder.m"
}

#line 68 "string.builder.m"
void MR_CALL 
mercury__string__builder__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_115_116_114_101_97_109_95_95_115_116_114_101_97_109_95_95_95_95_115_116_114_105_110_103_95_95_98_117_105_108_100_101_114_95_95_104_97_110_100_108_101_95_95_97_114_105_116_121_48_95_95_115_116_114_105_110_103_95_95_98_117_105_108_100_101_114_95_95_115_116_97_116_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_115_116_114_101_97_109_95_95_110_97_109_101_95_52_95_95_91_49_93_95_48_4_p_0(
#line 68 "string.builder.m"
  MR_String * mercury__string__builder__HeadVar__2_2,
#line 68 "string.builder.m"
  MR_Word mercury__string__builder__STATE_VARIABLE_State_0_7,
#line 68 "string.builder.m"
  MR_Word * mercury__string__builder__STATE_VARIABLE_State_8)
#line 68 "string.builder.m"
{
#line 68 "string.builder.m"
  {
#line 68 "string.builder.m"
    MR_bool mercury__string__builder__succeeded;

#line 68 "string.builder.m"
    *mercury__string__builder__HeadVar__2_2 = (MR_String) "<<string builder stream>>";
#line 68 "string.builder.m"
    *mercury__string__builder__STATE_VARIABLE_State_8 = mercury__string__builder__STATE_VARIABLE_State_0_7;
#line 68 "string.builder.m"
  }
#line 68 "string.builder.m"
}

#line 73 "string.builder.m"
void MR_CALL 
mercury__string__builder__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_115_116_114_101_97_109_95_95_111_117_116_112_117_116_95_95_95_95_115_116_114_105_110_103_95_95_98_117_105_108_100_101_114_95_95_104_97_110_100_108_101_95_95_97_114_105_116_121_48_95_95_115_116_114_105_110_103_95_95_98_117_105_108_100_101_114_95_95_115_116_97_116_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_115_116_114_101_97_109_95_95_102_108_117_115_104_95_51_95_95_91_49_93_95_48_3_p_0(
#line 73 "string.builder.m"
  MR_Word mercury__string__builder__STATE_VARIABLE_State_0_6,
#line 73 "string.builder.m"
  MR_Word * mercury__string__builder__STATE_VARIABLE_State_7)
#line 73 "string.builder.m"
{
#line 73 "string.builder.m"
  {
#line 73 "string.builder.m"
    MR_bool mercury__string__builder__succeeded;

#line 73 "string.builder.m"
    *mercury__string__builder__STATE_VARIABLE_State_7 = mercury__string__builder__STATE_VARIABLE_State_0_6;
#line 73 "string.builder.m"
  }
#line 73 "string.builder.m"
}

#line 18 "ops.opt"
static MR_Integer MR_CALL 
mercury__string__builder__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 18 "ops.opt"
{
#line 47 "ops.opt"
  {
#line 47 "ops.opt"
    MR_bool mercury__string__builder__succeeded;

#line 47 "ops.opt"
    return (MR_Integer) 1200;
#line 47 "ops.opt"
  }
#line 18 "ops.opt"
}

#line 38 "string.builder.m"
void MR_CALL 
mercury__string__builder__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_115_116_114_105_110_103_95_95_98_117_105_108_100_101_114_95_95_104_97_110_100_108_101_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
#line 38 "string.builder.m"
  MR_Word * mercury__string__builder__HeadVar__1_1)
#line 38 "string.builder.m"
{
#line 38 "string.builder.m"
  {
#line 38 "string.builder.m"
    MR_bool mercury__string__builder__succeeded;

#line 38 "string.builder.m"
    *mercury__string__builder__HeadVar__1_1 = (MR_Integer) 0;
#line 38 "string.builder.m"
  }
#line 38 "string.builder.m"
}

#line 38 "string.builder.m"
MR_bool MR_CALL 
mercury__string__builder__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_115_116_114_105_110_103_95_95_98_117_105_108_100_101_114_95_95_104_97_110_100_108_101_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0(void)
#line 38 "string.builder.m"
{
#line 38 "string.builder.m"
  {
#line 38 "string.builder.m"
    return MR_TRUE;
#line 38 "string.builder.m"
  }
#line 38 "string.builder.m"
}

#line 78 "string.builder.m"
void MR_CALL 
mercury__string__builder__ClassMethod_for_stream__writer____string__builder__handle__arity0__string__arity0__string__builder__state__arity0______stream__put_4_4_p_0(
#line 78 "string.builder.m"
  MR_String mercury__string__builder__String_6,
#line 78 "string.builder.m"
  MR_Word mercury__string__builder__STATE_VARIABLE_State_0_11,
#line 78 "string.builder.m"
  MR_Word * mercury__string__builder__STATE_VARIABLE_State_12)
#line 78 "string.builder.m"
{
#line 78 "string.builder.m"
  {
#line 78 "string.builder.m"
    MR_bool mercury__string__builder__succeeded;

#line 78 "string.builder.m"
    {
#line 78 "string.builder.m"
      mercury__string__builder__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_115_116_114_101_97_109_95_95_119_114_105_116_101_114_95_95_95_95_115_116_114_105_110_103_95_95_98_117_105_108_100_101_114_95_95_104_97_110_100_108_101_95_95_97_114_105_116_121_48_95_95_115_116_114_105_110_103_95_95_97_114_105_116_121_48_95_95_115_116_114_105_110_103_95_95_98_117_105_108_100_101_114_95_95_115_116_97_116_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_115_116_114_101_97_109_95_95_112_117_116_95_52_95_95_91_49_93_95_48_4_p_0(mercury__string__builder__String_6, mercury__string__builder__STATE_VARIABLE_State_0_11, mercury__string__builder__STATE_VARIABLE_State_12);
    }
#line 78 "string.builder.m"
  }
#line 78 "string.builder.m"
}

#line 88 "string.builder.m"
void MR_CALL 
mercury__string__builder__ClassMethod_for_stream__writer____string__builder__handle__arity0__character__arity0__string__builder__state__arity0______stream__put_4_4_p_0(
#line 88 "string.builder.m"
  MR_Char mercury__string__builder__Char_6,
#line 88 "string.builder.m"
  MR_Word mercury__string__builder__STATE_VARIABLE_State_0_10,
#line 88 "string.builder.m"
  MR_Word * mercury__string__builder__STATE_VARIABLE_State_11)
#line 88 "string.builder.m"
{
#line 88 "string.builder.m"
  {
#line 88 "string.builder.m"
    MR_bool mercury__string__builder__succeeded;

#line 88 "string.builder.m"
    {
#line 88 "string.builder.m"
      mercury__string__builder__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_115_116_114_101_97_109_95_95_119_114_105_116_101_114_95_95_95_95_115_116_114_105_110_103_95_95_98_117_105_108_100_101_114_95_95_104_97_110_100_108_101_95_95_97_114_105_116_121_48_95_95_99_104_97_114_97_99_116_101_114_95_95_97_114_105_116_121_48_95_95_115_116_114_105_110_103_95_95_98_117_105_108_100_101_114_95_95_115_116_97_116_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_115_116_114_101_97_109_95_95_112_117_116_95_52_95_95_91_49_93_95_48_4_p_0(mercury__string__builder__Char_6, mercury__string__builder__STATE_VARIABLE_State_0_10, mercury__string__builder__STATE_VARIABLE_State_11);
    }
#line 88 "string.builder.m"
  }
#line 88 "string.builder.m"
}

#line 68 "string.builder.m"
void MR_CALL 
mercury__string__builder__ClassMethod_for_stream__stream____string__builder__handle__arity0__string__builder__state__arity0______stream__name_4_4_p_0(
#line 68 "string.builder.m"
  MR_String * mercury__string__builder__HeadVar__2_2,
#line 68 "string.builder.m"
  MR_Word mercury__string__builder__STATE_VARIABLE_State_0_7,
#line 68 "string.builder.m"
  MR_Word * mercury__string__builder__STATE_VARIABLE_State_8)
#line 68 "string.builder.m"
{
#line 68 "string.builder.m"
  {
#line 68 "string.builder.m"
    MR_bool mercury__string__builder__succeeded;

#line 68 "string.builder.m"
    {
#line 68 "string.builder.m"
      mercury__string__builder__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_115_116_114_101_97_109_95_95_115_116_114_101_97_109_95_95_95_95_115_116_114_105_110_103_95_95_98_117_105_108_100_101_114_95_95_104_97_110_100_108_101_95_95_97_114_105_116_121_48_95_95_115_116_114_105_110_103_95_95_98_117_105_108_100_101_114_95_95_115_116_97_116_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_115_116_114_101_97_109_95_95_110_97_109_101_95_52_95_95_91_49_93_95_48_4_p_0(mercury__string__builder__HeadVar__2_2, mercury__string__builder__STATE_VARIABLE_State_0_7, mercury__string__builder__STATE_VARIABLE_State_8);
    }
#line 68 "string.builder.m"
  }
#line 68 "string.builder.m"
}

#line 73 "string.builder.m"
void MR_CALL 
mercury__string__builder__ClassMethod_for_stream__output____string__builder__handle__arity0__string__builder__state__arity0______stream__flush_3_3_p_0(
#line 73 "string.builder.m"
  MR_Word mercury__string__builder__STATE_VARIABLE_State_0_6,
#line 73 "string.builder.m"
  MR_Word * mercury__string__builder__STATE_VARIABLE_State_7)
#line 73 "string.builder.m"
{
#line 73 "string.builder.m"
  {
#line 73 "string.builder.m"
    MR_bool mercury__string__builder__succeeded;

#line 73 "string.builder.m"
    {
#line 73 "string.builder.m"
      mercury__string__builder__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_115_116_114_101_97_109_95_95_111_117_116_112_117_116_95_95_95_95_115_116_114_105_110_103_95_95_98_117_105_108_100_101_114_95_95_104_97_110_100_108_101_95_95_97_114_105_116_121_48_95_95_115_116_114_105_110_103_95_95_98_117_105_108_100_101_114_95_95_115_116_97_116_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_115_116_114_101_97_109_95_95_102_108_117_115_104_95_51_95_95_91_49_93_95_48_3_p_0(mercury__string__builder__STATE_VARIABLE_State_0_6, mercury__string__builder__STATE_VARIABLE_State_7);
    }
#line 73 "string.builder.m"
  }
#line 73 "string.builder.m"
}

#line 61 "string.builder.m"
void MR_CALL 
mercury__string__builder____Compare____state_0_0(
#line 61 "string.builder.m"
  MR_Word * mercury__string__builder__HeadVar__1_1,
#line 61 "string.builder.m"
  MR_Word mercury__string__builder__HeadVar__2_2,
#line 61 "string.builder.m"
  MR_Word mercury__string__builder__HeadVar__3_3)
#line 61 "string.builder.m"
{
#line 61 "string.builder.m"
  {
#line 61 "string.builder.m"
    MR_bool mercury__string__builder__succeeded;
#line 61 "string.builder.m"
    MR_Integer mercury__string__builder__CastX_6 = (MR_Integer) mercury__string__builder__HeadVar__2_2;
#line 61 "string.builder.m"
    MR_Integer mercury__string__builder__CastY_7 = (MR_Integer) mercury__string__builder__HeadVar__3_3;

#line 61 "string.builder.m"
    mercury__string__builder__succeeded = (mercury__string__builder__CastX_6 == mercury__string__builder__CastY_7);
#line 61 "string.builder.m"
    if (mercury__string__builder__succeeded)
#line 1012 "string.builder.c"
      *mercury__string__builder__HeadVar__1_1 = (MR_Integer) 0;
#line 61 "string.builder.m"
    else
#line 61 "string.builder.m"
      {
#line 61 "string.builder.m"
        MR_Word mercury__string__builder__TypeInfo_8_8 = (MR_Word) &mercury__string__builder_scalar_common_1[0];
#line 61 "string.builder.m"
        MR_Word mercury__string__builder__V_4_4 = (MR_Word) mercury__string__builder__HeadVar__2_2;
#line 61 "string.builder.m"
        MR_Word mercury__string__builder__V_5_5 = (MR_Word) mercury__string__builder__HeadVar__3_3;

#line 61 "string.builder.m"
        {
#line 61 "string.builder.m"
          mercury__builtin__compare_3_p_0(mercury__string__builder__TypeInfo_8_8, mercury__string__builder__HeadVar__1_1, ((MR_Box) (mercury__string__builder__V_4_4)), ((MR_Box) (mercury__string__builder__V_5_5)));
        }
#line 61 "string.builder.m"
      }
#line 61 "string.builder.m"
  }
#line 61 "string.builder.m"
}

#line 61 "string.builder.m"
MR_bool MR_CALL 
mercury__string__builder____Unify____state_0_0(
#line 61 "string.builder.m"
  MR_Word mercury__string__builder__HeadVar__1_1,
#line 61 "string.builder.m"
  MR_Word mercury__string__builder__HeadVar__2_2)
#line 61 "string.builder.m"
{
#line 61 "string.builder.m"
  {
#line 61 "string.builder.m"
    MR_bool mercury__string__builder__succeeded;
#line 61 "string.builder.m"
    MR_Integer mercury__string__builder__CastX_5 = (MR_Integer) mercury__string__builder__HeadVar__1_1;
#line 61 "string.builder.m"
    MR_Integer mercury__string__builder__CastY_6 = (MR_Integer) mercury__string__builder__HeadVar__2_2;

#line 61 "string.builder.m"
    mercury__string__builder__succeeded = (mercury__string__builder__CastX_5 == mercury__string__builder__CastY_6);
#line 61 "string.builder.m"
    if (mercury__string__builder__succeeded)
#line 61 "string.builder.m"
      mercury__string__builder__succeeded = MR_TRUE;
#line 61 "string.builder.m"
    else
#line 61 "string.builder.m"
      {
#line 61 "string.builder.m"
        MR_Word mercury__string__builder__TypeInfo_7_7 = (MR_Word) &mercury__string__builder_scalar_common_1[0];
#line 61 "string.builder.m"
        MR_Word mercury__string__builder__V_3_3 = (MR_Word) mercury__string__builder__HeadVar__1_1;
#line 61 "string.builder.m"
        MR_Word mercury__string__builder__V_4_4 = (MR_Word) mercury__string__builder__HeadVar__2_2;

#line 1072 "string.builder.c"
        {
#line 1074 "string.builder.c"
          mercury__string__builder__succeeded = mercury__builtin__unify_2_p_0(mercury__string__builder__TypeInfo_7_7, ((MR_Box) (mercury__string__builder__V_3_3)), ((MR_Box) (mercury__string__builder__V_4_4)));
        }
#line 61 "string.builder.m"
      }
#line 61 "string.builder.m"
    return mercury__string__builder__succeeded;
#line 61 "string.builder.m"
  }
#line 61 "string.builder.m"
}

#line 38 "string.builder.m"
void MR_CALL 
mercury__string__builder____Compare____handle_0_0(
#line 38 "string.builder.m"
  MR_Word * mercury__string__builder__HeadVar__1_1)
#line 38 "string.builder.m"
{
#line 38 "string.builder.m"
  {
#line 38 "string.builder.m"
    MR_bool mercury__string__builder__succeeded;

#line 38 "string.builder.m"
    {
#line 38 "string.builder.m"
      mercury__string__builder__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_115_116_114_105_110_103_95_95_98_117_105_108_100_101_114_95_95_104_97_110_100_108_101_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(mercury__string__builder__HeadVar__1_1);
    }
#line 38 "string.builder.m"
  }
#line 38 "string.builder.m"
}

#line 38 "string.builder.m"
MR_bool MR_CALL 
mercury__string__builder____Unify____handle_0_0(void)
#line 38 "string.builder.m"
{
#line 38 "string.builder.m"
  {
#line 38 "string.builder.m"
    MR_bool mercury__string__builder__succeeded;

#line 38 "string.builder.m"
    {
#line 38 "string.builder.m"
      mercury__string__builder__succeeded = mercury__string__builder__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_115_116_114_105_110_103_95_95_98_117_105_108_100_101_114_95_95_104_97_110_100_108_101_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0();
    }
#line 38 "string.builder.m"
    return mercury__string__builder__succeeded;
#line 38 "string.builder.m"
  }
#line 38 "string.builder.m"
}

#line 52 "string.builder.m"
MR_String MR_CALL 
mercury__string__builder__to_string_1_f_0(
#line 52 "string.builder.m"
  MR_Word mercury__string__builder__State_3)
#line 52 "string.builder.m"
{
#line 95 "string.builder.m"
  {
#line 95 "string.builder.m"
    MR_bool mercury__string__builder__succeeded;
#line 95 "string.builder.m"
    MR_String mercury__string__builder__String_4;
#line 95 "string.builder.m"
    MR_Word mercury__string__builder__TypeCtorInfo_7_7 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 95 "string.builder.m"
    MR_Word mercury__string__builder__StringList_5 = (MR_Word) mercury__string__builder__State_3;
#line 95 "string.builder.m"
    MR_Word mercury__string__builder__V_6_6;

#line 1046 "list.opt"
    {
#line 1046 "list.opt"
      mercury__list__reverse_2_p_0(mercury__string__builder__TypeCtorInfo_7_7, mercury__string__builder__StringList_5, &mercury__string__builder__V_6_6);
    }
#line 97 "string.builder.m"
    {
#line 97 "string.builder.m"
      mercury__string__builder__String_4 = mercury__string__append_list_1_f_0(mercury__string__builder__V_6_6);
    }
#line 95 "string.builder.m"
    return mercury__string__builder__String_4;
#line 95 "string.builder.m"
  }
#line 52 "string.builder.m"
}

#line 43 "string.builder.m"
MR_Word MR_CALL 
mercury__string__builder__init_0_f_0(void)
#line 43 "string.builder.m"
{
#line 64 "string.builder.m"
  {
#line 64 "string.builder.m"
    MR_bool mercury__string__builder__succeeded;
#line 64 "string.builder.m"
    MR_Word mercury__string__builder__HeadVar__1_1 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 64 "string.builder.m"
    MR_Word mercury__string__builder__V_2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 64 "string.builder.m"
    return mercury__string__builder__HeadVar__1_1;
#line 64 "string.builder.m"
  }
#line 43 "string.builder.m"
}

void mercury__string__builder__init(void)
{
}

void mercury__string__builder__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__string__builder__string__builder__type_ctor_info_handle_0);
	MR_register_type_ctor_info(&mercury__string__builder__string__builder__type_ctor_info_state_0);
}

void mercury__string__builder__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module string.builder. */
