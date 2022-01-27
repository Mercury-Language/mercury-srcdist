/*
** Automatically generated from `version_store.m'
** by the Mercury compiler,
** version rotd-2015-09-28
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


/* :- module version_store. */
/* :- implementation. */

/*
INIT mercury__version_store__init
ENDINIT
*/

#include "version_store.mih"


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
#include "counter.mih"
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




#line 95 "version_store.c"
static const MR_Integer mercury__version_store__version_store__functor_number_map_mutvar_2[1];

#line 98 "version_store.c"
static const MR_NotagFunctorDesc mercury__version_store__version_store__notag_functor_desc_mutvar_2;

#line 101 "version_store.c"
static const MR_EnumFunctorDesc mercury__version_store__version_store__enum_functor_desc_some_version_store_type_0_0;

#line 104 "version_store.c"
static const MR_EnumFunctorDescPtr mercury__version_store__version_store__enum_value_ordered_some_version_store_type_0[1];

#line 107 "version_store.c"
static const MR_EnumFunctorDescPtr mercury__version_store__version_store__enum_name_ordered_some_version_store_type_0[1];

#line 110 "version_store.c"
static const MR_Integer mercury__version_store__version_store__functor_number_map_some_version_store_type_0[1];

#line 113 "version_store.c"
static const MR_Integer mercury__version_store__version_store__functor_number_map_version_store_1[1];

#line 116 "version_store.c"
static const MR_FA_TypeInfo_Struct1 mercury__version_store__version_array__ti_version_array_1univ__type_ctor_info_univ_0;

#line 119 "version_store.c"
static const MR_NotagFunctorDesc mercury__version_store__version_store__notag_functor_desc_version_store_1;

#line 122 "version_store.c"
static MR_bool MR_CALL 
mercury__version_store____Unify____mutvar_2_0_10001(
#line 125 "version_store.c"
  MR_Box mercury__version_store__wrapper_arg_1,
#line 127 "version_store.c"
  MR_Box mercury__version_store__wrapper_arg_2,
#line 129 "version_store.c"
  MR_Box mercury__version_store__wrapper_arg_3,
#line 131 "version_store.c"
  MR_Box mercury__version_store__wrapper_arg_4);

#line 134 "version_store.c"
static void MR_CALL 
mercury__version_store____Compare____mutvar_2_0_10001(
#line 137 "version_store.c"
  MR_Box mercury__version_store__wrapper_arg_1,
#line 139 "version_store.c"
  MR_Box mercury__version_store__wrapper_arg_2,
#line 141 "version_store.c"
  MR_Box * mercury__version_store__wrapper_arg_3,
#line 143 "version_store.c"
  MR_Box mercury__version_store__wrapper_arg_4,
#line 145 "version_store.c"
  MR_Box mercury__version_store__wrapper_arg_5);

#line 148 "version_store.c"
static MR_bool MR_CALL 
mercury__version_store____Unify____some_version_store_type_0_0_10001(
#line 151 "version_store.c"
  MR_Box mercury__version_store__wrapper_arg_1,
#line 153 "version_store.c"
  MR_Box mercury__version_store__wrapper_arg_2);

#line 156 "version_store.c"
static void MR_CALL 
mercury__version_store____Compare____some_version_store_type_0_0_10001(
#line 159 "version_store.c"
  MR_Box * mercury__version_store__wrapper_arg_1,
#line 161 "version_store.c"
  MR_Box mercury__version_store__wrapper_arg_2,
#line 163 "version_store.c"
  MR_Box mercury__version_store__wrapper_arg_3);

#line 166 "version_store.c"
static MR_bool MR_CALL 
mercury__version_store____Unify____version_store_1_0_10001(
#line 169 "version_store.c"
  MR_Box mercury__version_store__wrapper_arg_1,
#line 171 "version_store.c"
  MR_Box mercury__version_store__wrapper_arg_2,
#line 173 "version_store.c"
  MR_Box mercury__version_store__wrapper_arg_3);

#line 176 "version_store.c"
static void MR_CALL 
mercury__version_store____Compare____version_store_1_0_10001(
#line 179 "version_store.c"
  MR_Box mercury__version_store__wrapper_arg_1,
#line 181 "version_store.c"
  MR_Box * mercury__version_store__wrapper_arg_2,
#line 183 "version_store.c"
  MR_Box mercury__version_store__wrapper_arg_3,
#line 185 "version_store.c"
  MR_Box mercury__version_store__wrapper_arg_4);

#line 18 "ops.opt"
static MR_Integer MR_CALL 
mercury__version_store__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);


static /* final */ const MR_Box mercury__version_store_scalar_common_1[1][2];

static /* final */ const MR_Box mercury__version_store_scalar_common_2[1][3];

static /* final */ const MR_Box mercury__version_store_scalar_common_3[1][4];

static /* final */ const MR_Box mercury__version_store_scalar_common_4[2][5];




static /* final */ const MR_Box mercury__version_store_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__version_array__version_array__type_ctor_info_version_array_1)),
    ((MR_Box) (&mercury__univ__univ__type_ctor_info_univ_0))
  },
};

static /* final */ const MR_Box mercury__version_store_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__version_store_scalar_common_3[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__version_store_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__version_store_scalar_common_4[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__version_store_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__version_store_scalar_common_3[0])),
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



#line 277 "version_store.c"
static const MR_Integer mercury__version_store__version_store__functor_number_map_mutvar_2[1] = {
  (MR_Integer) 0
};

#line 282 "version_store.c"
static const MR_NotagFunctorDesc mercury__version_store__version_store__notag_functor_desc_mutvar_2 = {
  (MR_String) "mutvar",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL
};

#line 289 "version_store.c"
const MR_TypeCtorInfo_Struct mercury__version_store__version_store__type_ctor_info_mutvar_2 = {
  (MR_Integer) 2,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__version_store____Unify____mutvar_2_0_10001)),
  ((MR_Box) (mercury__version_store____Compare____mutvar_2_0_10001)),
  (MR_String) "version_store",
  (MR_String) "mutvar",
  {     &mercury__version_store__version_store__notag_functor_desc_mutvar_2 },
  {     &mercury__version_store__version_store__notag_functor_desc_mutvar_2 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__version_store__version_store__functor_number_map_mutvar_2
};

#line 306 "version_store.c"
static const MR_EnumFunctorDesc mercury__version_store__version_store__enum_functor_desc_some_version_store_type_0_0 = {
  (MR_String) "some_version_store_type",
  (MR_Integer) 0
};

#line 312 "version_store.c"
static const MR_EnumFunctorDescPtr mercury__version_store__version_store__enum_value_ordered_some_version_store_type_0[1] = {
  &mercury__version_store__version_store__enum_functor_desc_some_version_store_type_0_0
};

#line 317 "version_store.c"
static const MR_EnumFunctorDescPtr mercury__version_store__version_store__enum_name_ordered_some_version_store_type_0[1] = {
  &mercury__version_store__version_store__enum_functor_desc_some_version_store_type_0_0
};

#line 322 "version_store.c"
static const MR_Integer mercury__version_store__version_store__functor_number_map_some_version_store_type_0[1] = {
  (MR_Integer) 0
};

#line 327 "version_store.c"
const MR_TypeCtorInfo_Struct mercury__version_store__version_store__type_ctor_info_some_version_store_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (mercury__version_store____Unify____some_version_store_type_0_0_10001)),
  ((MR_Box) (mercury__version_store____Compare____some_version_store_type_0_0_10001)),
  (MR_String) "version_store",
  (MR_String) "some_version_store_type",
  {     mercury__version_store__version_store__enum_name_ordered_some_version_store_type_0 },
  {     mercury__version_store__version_store__enum_value_ordered_some_version_store_type_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__version_store__version_store__functor_number_map_some_version_store_type_0
};

#line 344 "version_store.c"
static const MR_Integer mercury__version_store__version_store__functor_number_map_version_store_1[1] = {
  (MR_Integer) 0
};

#line 349 "version_store.c"
static const MR_FA_TypeInfo_Struct1 mercury__version_store__version_array__ti_version_array_1univ__type_ctor_info_univ_0 = {
  &mercury__version_array__version_array__type_ctor_info_version_array_1,
  {
    (MR_TypeInfo) &mercury__univ__univ__type_ctor_info_univ_0
  }
};

#line 357 "version_store.c"
static const MR_NotagFunctorDesc mercury__version_store__version_store__notag_functor_desc_version_store_1 = {
  (MR_String) "version_store",
  (MR_PseudoTypeInfo) &mercury__version_store__version_array__ti_version_array_1univ__type_ctor_info_univ_0,
  NULL
};

#line 364 "version_store.c"
const MR_TypeCtorInfo_Struct mercury__version_store__version_store__type_ctor_info_version_store_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__version_store____Unify____version_store_1_0_10001)),
  ((MR_Box) (mercury__version_store____Compare____version_store_1_0_10001)),
  (MR_String) "version_store",
  (MR_String) "version_store",
  {     &mercury__version_store__version_store__notag_functor_desc_version_store_1 },
  {     &mercury__version_store__version_store__notag_functor_desc_version_store_1 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__version_store__version_store__functor_number_map_version_store_1
};

#line 381 "version_store.c"
static MR_bool MR_CALL 
mercury__version_store____Unify____mutvar_2_0_10001(
#line 384 "version_store.c"
  MR_Box mercury__version_store__wrapper_arg_1,
#line 386 "version_store.c"
  MR_Box mercury__version_store__wrapper_arg_2,
#line 388 "version_store.c"
  MR_Box mercury__version_store__wrapper_arg_3,
#line 390 "version_store.c"
  MR_Box mercury__version_store__wrapper_arg_4)
#line 392 "version_store.c"
{
#line 394 "version_store.c"
  {
#line 396 "version_store.c"
    MR_bool mercury__version_store__succeeded;

#line 399 "version_store.c"
    {
#line 401 "version_store.c"
      mercury__version_store__succeeded = mercury__version_store____Unify____mutvar_2_0(((MR_Word) mercury__version_store__wrapper_arg_1), ((MR_Word) mercury__version_store__wrapper_arg_2), ((MR_Word) mercury__version_store__wrapper_arg_3), ((MR_Word) mercury__version_store__wrapper_arg_4));
    }
#line 404 "version_store.c"
    return mercury__version_store__succeeded;
#line 406 "version_store.c"
  }
#line 408 "version_store.c"
}

#line 411 "version_store.c"
static void MR_CALL 
mercury__version_store____Compare____mutvar_2_0_10001(
#line 414 "version_store.c"
  MR_Box mercury__version_store__wrapper_arg_1,
#line 416 "version_store.c"
  MR_Box mercury__version_store__wrapper_arg_2,
#line 418 "version_store.c"
  MR_Box * mercury__version_store__wrapper_arg_3,
#line 420 "version_store.c"
  MR_Box mercury__version_store__wrapper_arg_4,
#line 422 "version_store.c"
  MR_Box mercury__version_store__wrapper_arg_5)
#line 424 "version_store.c"
{
#line 426 "version_store.c"
  {
#line 428 "version_store.c"
    MR_Word mercury__version_store__conv0_HeadVar__1_1;

#line 431 "version_store.c"
    {
#line 433 "version_store.c"
      mercury__version_store____Compare____mutvar_2_0(((MR_Word) mercury__version_store__wrapper_arg_1), ((MR_Word) mercury__version_store__wrapper_arg_2), &mercury__version_store__conv0_HeadVar__1_1, ((MR_Word) mercury__version_store__wrapper_arg_4), ((MR_Word) mercury__version_store__wrapper_arg_5));
    }
#line 436 "version_store.c"
    *mercury__version_store__wrapper_arg_3 = ((MR_Box) (mercury__version_store__conv0_HeadVar__1_1));
#line 438 "version_store.c"
  }
#line 440 "version_store.c"
}

#line 443 "version_store.c"
static MR_bool MR_CALL 
mercury__version_store____Unify____some_version_store_type_0_0_10001(
#line 446 "version_store.c"
  MR_Box mercury__version_store__wrapper_arg_1,
#line 448 "version_store.c"
  MR_Box mercury__version_store__wrapper_arg_2)
#line 450 "version_store.c"
{
#line 452 "version_store.c"
  {
#line 454 "version_store.c"
    MR_bool mercury__version_store__succeeded;

#line 457 "version_store.c"
    {
#line 459 "version_store.c"
      mercury__version_store__succeeded = mercury__version_store____Unify____some_version_store_type_0_0();
    }
#line 462 "version_store.c"
    return mercury__version_store__succeeded;
#line 464 "version_store.c"
  }
#line 466 "version_store.c"
}

#line 469 "version_store.c"
static void MR_CALL 
mercury__version_store____Compare____some_version_store_type_0_0_10001(
#line 472 "version_store.c"
  MR_Box * mercury__version_store__wrapper_arg_1,
#line 474 "version_store.c"
  MR_Box mercury__version_store__wrapper_arg_2,
#line 476 "version_store.c"
  MR_Box mercury__version_store__wrapper_arg_3)
#line 478 "version_store.c"
{
#line 480 "version_store.c"
  {
#line 482 "version_store.c"
    MR_Word mercury__version_store__conv0_HeadVar__1_1;

#line 485 "version_store.c"
    {
#line 487 "version_store.c"
      mercury__version_store____Compare____some_version_store_type_0_0(&mercury__version_store__conv0_HeadVar__1_1);
    }
#line 490 "version_store.c"
    *mercury__version_store__wrapper_arg_1 = ((MR_Box) (mercury__version_store__conv0_HeadVar__1_1));
#line 492 "version_store.c"
  }
#line 494 "version_store.c"
}

#line 497 "version_store.c"
static MR_bool MR_CALL 
mercury__version_store____Unify____version_store_1_0_10001(
#line 500 "version_store.c"
  MR_Box mercury__version_store__wrapper_arg_1,
#line 502 "version_store.c"
  MR_Box mercury__version_store__wrapper_arg_2,
#line 504 "version_store.c"
  MR_Box mercury__version_store__wrapper_arg_3)
#line 506 "version_store.c"
{
#line 508 "version_store.c"
  {
#line 510 "version_store.c"
    MR_bool mercury__version_store__succeeded;

#line 513 "version_store.c"
    {
#line 515 "version_store.c"
      mercury__version_store__succeeded = mercury__version_store____Unify____version_store_1_0(((MR_Word) mercury__version_store__wrapper_arg_1), ((MR_Word) mercury__version_store__wrapper_arg_2), ((MR_Word) mercury__version_store__wrapper_arg_3));
    }
#line 518 "version_store.c"
    return mercury__version_store__succeeded;
#line 520 "version_store.c"
  }
#line 522 "version_store.c"
}

#line 525 "version_store.c"
static void MR_CALL 
mercury__version_store____Compare____version_store_1_0_10001(
#line 528 "version_store.c"
  MR_Box mercury__version_store__wrapper_arg_1,
#line 530 "version_store.c"
  MR_Box * mercury__version_store__wrapper_arg_2,
#line 532 "version_store.c"
  MR_Box mercury__version_store__wrapper_arg_3,
#line 534 "version_store.c"
  MR_Box mercury__version_store__wrapper_arg_4)
#line 536 "version_store.c"
{
#line 538 "version_store.c"
  {
#line 540 "version_store.c"
    MR_Word mercury__version_store__conv0_HeadVar__1_1;

#line 543 "version_store.c"
    {
#line 545 "version_store.c"
      mercury__version_store____Compare____version_store_1_0(((MR_Word) mercury__version_store__wrapper_arg_1), &mercury__version_store__conv0_HeadVar__1_1, ((MR_Word) mercury__version_store__wrapper_arg_3), ((MR_Word) mercury__version_store__wrapper_arg_4));
    }
#line 548 "version_store.c"
    *mercury__version_store__wrapper_arg_2 = ((MR_Box) (mercury__version_store__conv0_HeadVar__1_1));
#line 550 "version_store.c"
  }
#line 552 "version_store.c"
}

#line 18 "ops.opt"
static MR_Integer MR_CALL 
mercury__version_store__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 18 "ops.opt"
{
#line 47 "ops.opt"
  {
#line 47 "ops.opt"
    MR_bool mercury__version_store__succeeded;

#line 47 "ops.opt"
    return (MR_Integer) 1200;
#line 47 "ops.opt"
  }
#line 18 "ops.opt"
}

#line 117 "version_store.m"
void MR_CALL 
mercury__version_store__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_118_101_114_115_105_111_110_95_115_116_111_114_101_95_95_115_111_109_101_95_118_101_114_115_105_111_110_95_115_116_111_114_101_95_116_121_112_101_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
#line 117 "version_store.m"
  MR_Word * mercury__version_store__HeadVar__1_1)
#line 117 "version_store.m"
{
#line 117 "version_store.m"
  {
#line 117 "version_store.m"
    MR_bool mercury__version_store__succeeded;

#line 117 "version_store.m"
    *mercury__version_store__HeadVar__1_1 = (MR_Integer) 0;
#line 117 "version_store.m"
  }
#line 117 "version_store.m"
}

#line 117 "version_store.m"
MR_bool MR_CALL 
mercury__version_store__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_118_101_114_115_105_111_110_95_115_116_111_114_101_95_95_115_111_109_101_95_118_101_114_115_105_111_110_95_115_116_111_114_101_95_116_121_112_101_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0(void)
#line 117 "version_store.m"
{
#line 117 "version_store.m"
  {
#line 117 "version_store.m"
    return MR_TRUE;
#line 117 "version_store.m"
  }
#line 117 "version_store.m"
}

#line 115 "version_store.m"
void MR_CALL 
mercury__version_store____Compare____version_store_1_0(
#line 115 "version_store.m"
  MR_Word mercury__version_store__TypeInfo_for_S_8,
#line 115 "version_store.m"
  MR_Word * mercury__version_store__HeadVar__1_1,
#line 115 "version_store.m"
  MR_Word mercury__version_store__HeadVar__2_2,
#line 115 "version_store.m"
  MR_Word mercury__version_store__HeadVar__3_3)
#line 115 "version_store.m"
{
#line 115 "version_store.m"
  {
#line 115 "version_store.m"
    MR_bool mercury__version_store__succeeded;
#line 115 "version_store.m"
    MR_Integer mercury__version_store__CastX_6 = (MR_Integer) mercury__version_store__HeadVar__2_2;
#line 115 "version_store.m"
    MR_Integer mercury__version_store__CastY_7 = (MR_Integer) mercury__version_store__HeadVar__3_3;

#line 115 "version_store.m"
    mercury__version_store__succeeded = (mercury__version_store__CastX_6 == mercury__version_store__CastY_7);
#line 115 "version_store.m"
    if (mercury__version_store__succeeded)
#line 631 "version_store.c"
      *mercury__version_store__HeadVar__1_1 = (MR_Integer) 0;
#line 115 "version_store.m"
    else
#line 115 "version_store.m"
      {
#line 115 "version_store.m"
        MR_Word mercury__version_store__TypeInfo_9_9 = (MR_Word) &mercury__version_store_scalar_common_1[0];
#line 115 "version_store.m"
        MR_Box mercury__version_store__V_4_4 = (MR_Box) mercury__version_store__HeadVar__2_2;
#line 115 "version_store.m"
        MR_Box mercury__version_store__V_5_5 = (MR_Box) mercury__version_store__HeadVar__3_3;

#line 115 "version_store.m"
        {
#line 115 "version_store.m"
          mercury__builtin__compare_3_p_0(mercury__version_store__TypeInfo_9_9, mercury__version_store__HeadVar__1_1, ((MR_Box) (mercury__version_store__V_4_4)), ((MR_Box) (mercury__version_store__V_5_5)));
#line 115 "version_store.m"
          return;
        }
#line 115 "version_store.m"
      }
#line 115 "version_store.m"
  }
#line 115 "version_store.m"
}

#line 115 "version_store.m"
MR_bool MR_CALL 
mercury__version_store____Unify____version_store_1_0(
#line 115 "version_store.m"
  MR_Word mercury__version_store__TypeInfo_for_S_7,
#line 115 "version_store.m"
  MR_Word mercury__version_store__HeadVar__1_1,
#line 115 "version_store.m"
  MR_Word mercury__version_store__HeadVar__2_2)
#line 115 "version_store.m"
{
#line 115 "version_store.m"
  {
#line 115 "version_store.m"
    MR_bool mercury__version_store__succeeded;
#line 115 "version_store.m"
    MR_Integer mercury__version_store__CastX_5 = (MR_Integer) mercury__version_store__HeadVar__1_1;
#line 115 "version_store.m"
    MR_Integer mercury__version_store__CastY_6 = (MR_Integer) mercury__version_store__HeadVar__2_2;

#line 115 "version_store.m"
    mercury__version_store__succeeded = (mercury__version_store__CastX_5 == mercury__version_store__CastY_6);
#line 115 "version_store.m"
    if (mercury__version_store__succeeded)
#line 115 "version_store.m"
      mercury__version_store__succeeded = MR_TRUE;
#line 115 "version_store.m"
    else
#line 115 "version_store.m"
      {
#line 115 "version_store.m"
        MR_Word mercury__version_store__TypeCtorInfo_8_8 = (MR_Word) &mercury__univ__univ__type_ctor_info_univ_0;
#line 115 "version_store.m"
        MR_Box mercury__version_store__V_3_3 = (MR_Box) mercury__version_store__HeadVar__1_1;
#line 115 "version_store.m"
        MR_Box mercury__version_store__V_4_4 = (MR_Box) mercury__version_store__HeadVar__2_2;

#line 695 "version_store.c"
        {
#line 697 "version_store.c"
          return mercury__version_store__succeeded = mercury__version_array____Unify____version_array_1_0(mercury__version_store__TypeCtorInfo_8_8, mercury__version_store__V_3_3, mercury__version_store__V_4_4);
        }
#line 115 "version_store.m"
      }
#line 115 "version_store.m"
    return mercury__version_store__succeeded;
#line 115 "version_store.m"
  }
#line 115 "version_store.m"
}

#line 117 "version_store.m"
void MR_CALL 
mercury__version_store____Compare____some_version_store_type_0_0(
#line 117 "version_store.m"
  MR_Word * mercury__version_store__HeadVar__1_1)
#line 117 "version_store.m"
{
#line 117 "version_store.m"
  {
#line 117 "version_store.m"
    MR_bool mercury__version_store__succeeded;

#line 117 "version_store.m"
    {
#line 117 "version_store.m"
      mercury__version_store__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_118_101_114_115_105_111_110_95_115_116_111_114_101_95_95_115_111_109_101_95_118_101_114_115_105_111_110_95_115_116_111_114_101_95_116_121_112_101_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(mercury__version_store__HeadVar__1_1);
#line 117 "version_store.m"
      return;
    }
#line 117 "version_store.m"
  }
#line 117 "version_store.m"
}

#line 117 "version_store.m"
MR_bool MR_CALL 
mercury__version_store____Unify____some_version_store_type_0_0(void)
#line 117 "version_store.m"
{
#line 117 "version_store.m"
  {
#line 117 "version_store.m"
    MR_bool mercury__version_store__succeeded;

#line 117 "version_store.m"
    {
#line 117 "version_store.m"
      return mercury__version_store__succeeded = mercury__version_store__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_118_101_114_115_105_111_110_95_115_116_111_114_101_95_95_115_111_109_101_95_118_101_114_115_105_111_110_95_115_116_111_114_101_95_116_121_112_101_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0();
    }
#line 117 "version_store.m"
    return mercury__version_store__succeeded;
#line 117 "version_store.m"
  }
#line 117 "version_store.m"
}

#line 116 "version_store.m"
void MR_CALL 
mercury__version_store____Compare____mutvar_2_0(
#line 116 "version_store.m"
  MR_Word mercury__version_store__TypeInfo_for_T_8,
#line 116 "version_store.m"
  MR_Word mercury__version_store__TypeInfo_for_S_9,
#line 116 "version_store.m"
  MR_Word * mercury__version_store__HeadVar__1_1,
#line 116 "version_store.m"
  MR_Word mercury__version_store__HeadVar__2_2,
#line 116 "version_store.m"
  MR_Word mercury__version_store__HeadVar__3_3)
#line 116 "version_store.m"
{
#line 116 "version_store.m"
  {
#line 116 "version_store.m"
    MR_bool mercury__version_store__succeeded;
#line 116 "version_store.m"
    MR_Integer mercury__version_store__CastX_6 = (MR_Integer) mercury__version_store__HeadVar__2_2;
#line 116 "version_store.m"
    MR_Integer mercury__version_store__CastY_7 = (MR_Integer) mercury__version_store__HeadVar__3_3;

#line 116 "version_store.m"
    mercury__version_store__succeeded = (mercury__version_store__CastX_6 == mercury__version_store__CastY_7);
#line 116 "version_store.m"
    if (mercury__version_store__succeeded)
#line 783 "version_store.c"
      *mercury__version_store__HeadVar__1_1 = (MR_Integer) 0;
#line 116 "version_store.m"
    else
#line 116 "version_store.m"
      {
#line 116 "version_store.m"
        MR_Integer mercury__version_store__V_4_4 = (MR_Integer) mercury__version_store__HeadVar__2_2;
#line 116 "version_store.m"
        MR_Integer mercury__version_store__V_5_5 = (MR_Integer) mercury__version_store__HeadVar__3_3;

#line 69 "private_builtin.opt"
        mercury__version_store__succeeded = (mercury__version_store__V_4_4 < mercury__version_store__V_5_5);
#line 72 "private_builtin.opt"
        if (mercury__version_store__succeeded)
#line 71 "private_builtin.opt"
          *mercury__version_store__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "private_builtin.opt"
        else
#line 77 "private_builtin.opt"
          {
#line 74 "private_builtin.opt"
            mercury__version_store__succeeded = (mercury__version_store__V_4_4 == mercury__version_store__V_5_5);
#line 77 "private_builtin.opt"
            if (mercury__version_store__succeeded)
#line 76 "private_builtin.opt"
              *mercury__version_store__HeadVar__1_1 = (MR_Integer) 0;
#line 77 "private_builtin.opt"
            else
#line 78 "private_builtin.opt"
              *mercury__version_store__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "private_builtin.opt"
          }
#line 116 "version_store.m"
      }
#line 116 "version_store.m"
  }
#line 116 "version_store.m"
}

#line 116 "version_store.m"
MR_bool MR_CALL 
mercury__version_store____Unify____mutvar_2_0(
#line 116 "version_store.m"
  MR_Word mercury__version_store__TypeInfo_for_T_7,
#line 116 "version_store.m"
  MR_Word mercury__version_store__TypeInfo_for_S_8,
#line 116 "version_store.m"
  MR_Word mercury__version_store__HeadVar__1_1,
#line 116 "version_store.m"
  MR_Word mercury__version_store__HeadVar__2_2)
#line 116 "version_store.m"
{
#line 116 "version_store.m"
  {
#line 116 "version_store.m"
    MR_bool mercury__version_store__succeeded;
#line 116 "version_store.m"
    MR_Integer mercury__version_store__CastX_5 = (MR_Integer) mercury__version_store__HeadVar__1_1;
#line 116 "version_store.m"
    MR_Integer mercury__version_store__CastY_6 = (MR_Integer) mercury__version_store__HeadVar__2_2;

#line 116 "version_store.m"
    mercury__version_store__succeeded = (mercury__version_store__CastX_5 == mercury__version_store__CastY_6);
#line 116 "version_store.m"
    if (mercury__version_store__succeeded)
#line 116 "version_store.m"
      mercury__version_store__succeeded = MR_TRUE;
#line 116 "version_store.m"
    else
#line 116 "version_store.m"
      {
#line 116 "version_store.m"
        MR_Integer mercury__version_store__V_3_3 = (MR_Integer) mercury__version_store__HeadVar__1_1;
#line 116 "version_store.m"
        MR_Integer mercury__version_store__V_4_4 = (MR_Integer) mercury__version_store__HeadVar__2_2;

#line 860 "version_store.c"
        mercury__version_store__succeeded = (mercury__version_store__V_3_3 == mercury__version_store__V_4_4);
#line 116 "version_store.m"
      }
#line 116 "version_store.m"
    return mercury__version_store__succeeded;
#line 116 "version_store.m"
  }
#line 116 "version_store.m"
}

#line 150 "version_store.m"
MR_Word MR_CALL 
mercury__version_store__resize_2_f_0(
#line 150 "version_store.m"
  MR_Word mercury__version_store__TypeInfo_for_S_9,
#line 150 "version_store.m"
  MR_Word mercury__version_store__HeadVar__1_1,
#line 150 "version_store.m"
  MR_Integer mercury__version_store__N_5)
#line 150 "version_store.m"
{
#line 152 "version_store.m"
  {
#line 152 "version_store.m"
    MR_bool mercury__version_store__succeeded;
#line 152 "version_store.m"
    MR_Word mercury__version_store__HeadVar__3_3;
#line 152 "version_store.m"
    MR_Word mercury__version_store__TypeCtorInfo_11_11 = (MR_Word) &mercury__unit__unit__type_ctor_info_unit_0;
#line 152 "version_store.m"
    MR_Box mercury__version_store__VA_4 = (MR_Box) mercury__version_store__HeadVar__1_1;
#line 152 "version_store.m"
    MR_Box mercury__version_store__V_6_6;
#line 152 "version_store.m"
    MR_Word mercury__version_store__V_7_7;
#line 273 "version_array.opt"
    MR_Word mercury__version_store__TypeCtorInfo_10_14;

#line 152 "version_store.m"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 13 "univ.opt"
    {
#line 13 "univ.opt"
      mercury__univ__type_to_univ_2_p_0(mercury__version_store__TypeCtorInfo_11_11, ((MR_Box) ((MR_Integer) 0)), &mercury__version_store__V_7_7);
    }
#line 273 "version_array.opt"
{
#define MR_PROC_LABEL mercury__version_store__resize_2_f_0

	struct ML_va * VA0;
	MR_Integer N;
	MR_Word X;
	struct ML_va * VA;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_store__VA_4 , VA0);
	N =  mercury__version_store__N_5 ;
	X = (MR_Word) ((MR_Box) (mercury__version_store__V_7_7)) ;
		{
#line 273 "version_array.opt"

    VA = ML_va_resize_dolock(VA0, N, X, MR_ALLOC_ID);

#line 923 "version_store.c"

		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, mercury__version_store__V_6_6 );
#line 273 "version_array.opt"
}
#line 152 "version_store.m"
    mercury__version_store__HeadVar__3_3 = (MR_Word) mercury__version_store__V_6_6;
#line 152 "version_store.m"
    return mercury__version_store__HeadVar__3_3;
#line 152 "version_store.m"
  }
#line 150 "version_store.m"
}

#line 146 "version_store.m"
MR_Integer MR_CALL 
mercury__version_store__size_1_f_0(
#line 146 "version_store.m"
  MR_Word mercury__version_store__TypeInfo_for_S_4,
#line 146 "version_store.m"
  MR_Word mercury__version_store__HeadVar__1_1)
#line 146 "version_store.m"
{
#line 148 "version_store.m"
  {
#line 148 "version_store.m"
    MR_bool mercury__version_store__succeeded;
#line 148 "version_store.m"
    MR_Integer mercury__version_store__HeadVar__2_2;
#line 148 "version_store.m"
    MR_Box mercury__version_store__VA_3 = (MR_Box) mercury__version_store__HeadVar__1_1;
#line 277 "version_array.opt"
    MR_Word mercury__version_store__TypeCtorInfo_5_6;

#line 277 "version_array.opt"
{
#define MR_PROC_LABEL mercury__version_store__size_1_f_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_store__VA_3 , VA);
		{
#line 277 "version_array.opt"

    N = ML_va_size_dolock(VA);

#line 972 "version_store.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_store__HeadVar__2_2  = N;
#line 277 "version_array.opt"
}
#line 148 "version_store.m"
    return mercury__version_store__HeadVar__2_2;
#line 148 "version_store.m"
  }
#line 146 "version_store.m"
}

#line 96 "version_store.m"
void MR_CALL 
mercury__version_store__unsafe_rewind_2_p_0(
#line 96 "version_store.m"
  MR_Word mercury__version_store__TypeInfo_for_T_4,
#line 96 "version_store.m"
  MR_Word mercury__version_store__VS_3,
#line 96 "version_store.m"
  MR_Word * mercury__version_store__HeadVar__2_2)
#line 96 "version_store.m"
{
#line 181 "version_store.m"
  {
#line 181 "version_store.m"
    MR_bool mercury__version_store__succeeded;
#line 181 "version_store.m"
    MR_Box mercury__version_store__VA_5 = (MR_Box) mercury__version_store__VS_3;
#line 181 "version_store.m"
    MR_Box mercury__version_store__V_6_6;
#line 308 "version_array.opt"
    MR_Word mercury__version_store__TypeCtorInfo_6_8;

#line 308 "version_array.opt"
{
#define MR_PROC_LABEL mercury__version_store__unsafe_rewind_2_p_0

	struct ML_va * VA0;
	struct ML_va * VA;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_store__VA_5 , VA0);
		{
#line 308 "version_array.opt"

    VA = ML_va_rewind_dolock(VA0, MR_ALLOC_ID);

#line 1021 "version_store.c"

		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, mercury__version_store__V_6_6 );
#line 308 "version_array.opt"
}
#line 181 "version_store.m"
    *mercury__version_store__HeadVar__2_2 = (MR_Word) mercury__version_store__V_6_6;
#line 181 "version_store.m"
  }
#line 96 "version_store.m"
}

#line 95 "version_store.m"
MR_Word MR_CALL 
mercury__version_store__unsafe_rewind_1_f_0(
#line 95 "version_store.m"
  MR_Word mercury__version_store__TypeInfo_for_T_5,
#line 95 "version_store.m"
  MR_Word mercury__version_store__HeadVar__1_1)
#line 95 "version_store.m"
{
#line 181 "version_store.m"
  {
#line 181 "version_store.m"
    MR_bool mercury__version_store__succeeded;
#line 181 "version_store.m"
    MR_Word mercury__version_store__HeadVar__2_2;
#line 181 "version_store.m"
    MR_Box mercury__version_store__VA_3 = (MR_Box) mercury__version_store__HeadVar__1_1;
#line 181 "version_store.m"
    MR_Box mercury__version_store__V_4_4;
#line 308 "version_array.opt"
    MR_Word mercury__version_store__TypeCtorInfo_6_7;

#line 308 "version_array.opt"
{
#define MR_PROC_LABEL mercury__version_store__unsafe_rewind_1_f_0

	struct ML_va * VA0;
	struct ML_va * VA;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_store__VA_3 , VA0);
		{
#line 308 "version_array.opt"

    VA = ML_va_rewind_dolock(VA0, MR_ALLOC_ID);

#line 1070 "version_store.c"

		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, mercury__version_store__V_4_4 );
#line 308 "version_array.opt"
}
#line 181 "version_store.m"
    mercury__version_store__HeadVar__2_2 = (MR_Word) mercury__version_store__V_4_4;
#line 181 "version_store.m"
    return mercury__version_store__HeadVar__2_2;
#line 181 "version_store.m"
  }
#line 95 "version_store.m"
}

#line 84 "version_store.m"
void MR_CALL 
mercury__version_store__set_mutvar_4_p_0(
#line 84 "version_store.m"
  MR_Word mercury__version_store__TypeInfo_for_T_8,
#line 84 "version_store.m"
  MR_Word mercury__version_store__TypeInfo_for_S_9,
#line 84 "version_store.m"
  MR_Word mercury__version_store__Mutvar_5,
#line 84 "version_store.m"
  MR_Box mercury__version_store__X_6,
#line 84 "version_store.m"
  MR_Word mercury__version_store__VS_7,
#line 84 "version_store.m"
  MR_Word * mercury__version_store__HeadVar__4_4)
#line 84 "version_store.m"
{
#line 172 "version_store.m"
  {
#line 172 "version_store.m"
    MR_bool mercury__version_store__succeeded;
#line 172 "version_store.m"
    MR_Word mercury__version_store__TypeCtorInfo_12_15;
#line 172 "version_store.m"
    MR_Box mercury__version_store__VA_11 = (MR_Box) mercury__version_store__VS_7;
#line 172 "version_store.m"
    MR_Integer mercury__version_store__I_12 = (MR_Integer) mercury__version_store__Mutvar_5;
#line 172 "version_store.m"
    MR_Box mercury__version_store__V_13_13;
#line 172 "version_store.m"
    MR_Word mercury__version_store__V_14_14;

#line 13 "univ.opt"
    {
#line 13 "univ.opt"
      mercury__univ__type_to_univ_2_p_1(mercury__version_store__TypeInfo_for_T_8, mercury__version_store__X_6, &mercury__version_store__V_14_14);
    }
#line 1123 "version_store.c"
    mercury__version_store__TypeCtorInfo_12_15 = (MR_Word) &mercury__univ__univ__type_ctor_info_univ_0;
#line 205 "version_array.opt"
    {
#line 205 "version_array.opt"
      mercury__version_array__set_4_p_0(mercury__version_store__TypeCtorInfo_12_15, mercury__version_store__I_12, ((MR_Box) (mercury__version_store__V_14_14)), mercury__version_store__VA_11, &mercury__version_store__V_13_13);
    }
#line 173 "version_store.m"
    *mercury__version_store__HeadVar__4_4 = (MR_Word) mercury__version_store__V_13_13;
#line 172 "version_store.m"
  }
#line 84 "version_store.m"
}

#line 83 "version_store.m"
MR_Word MR_CALL 
mercury__version_store__set_3_f_0(
#line 83 "version_store.m"
  MR_Word mercury__version_store__TypeInfo_for_S_8,
#line 83 "version_store.m"
  MR_Word mercury__version_store__TypeInfo_for_T_9,
#line 83 "version_store.m"
  MR_Word mercury__version_store__VS_5,
#line 83 "version_store.m"
  MR_Word mercury__version_store__Mutvar_6,
#line 83 "version_store.m"
  MR_Box mercury__version_store__X_7)
#line 83 "version_store.m"
{
#line 172 "version_store.m"
  {
#line 172 "version_store.m"
    MR_bool mercury__version_store__succeeded;
#line 172 "version_store.m"
    MR_Word mercury__version_store__HeadVar__4_4;
#line 172 "version_store.m"
    MR_Word mercury__version_store__TypeCtorInfo_12_15;
#line 172 "version_store.m"
    MR_Box mercury__version_store__VA_11 = (MR_Box) mercury__version_store__VS_5;
#line 172 "version_store.m"
    MR_Integer mercury__version_store__I_12 = (MR_Integer) mercury__version_store__Mutvar_6;
#line 172 "version_store.m"
    MR_Box mercury__version_store__V_13_13;
#line 172 "version_store.m"
    MR_Word mercury__version_store__V_14_14;

#line 13 "univ.opt"
    {
#line 13 "univ.opt"
      mercury__univ__type_to_univ_2_p_1(mercury__version_store__TypeInfo_for_T_9, mercury__version_store__X_7, &mercury__version_store__V_14_14);
    }
#line 1174 "version_store.c"
    mercury__version_store__TypeCtorInfo_12_15 = (MR_Word) &mercury__univ__univ__type_ctor_info_univ_0;
#line 205 "version_array.opt"
    {
#line 205 "version_array.opt"
      mercury__version_array__set_4_p_0(mercury__version_store__TypeCtorInfo_12_15, mercury__version_store__I_12, ((MR_Box) (mercury__version_store__V_14_14)), mercury__version_store__VA_11, &mercury__version_store__V_13_13);
    }
#line 173 "version_store.m"
    mercury__version_store__HeadVar__4_4 = (MR_Word) mercury__version_store__V_13_13;
#line 172 "version_store.m"
    return mercury__version_store__HeadVar__4_4;
#line 172 "version_store.m"
  }
#line 83 "version_store.m"
}

#line 77 "version_store.m"
MR_Word MR_CALL 
mercury__version_store__f_101_108_101_109_32_58_61_3_f_0(
#line 77 "version_store.m"
  MR_Word mercury__version_store__TypeInfo_for_T_10,
#line 77 "version_store.m"
  MR_Word mercury__version_store__TypeInfo_for_S_11,
#line 77 "version_store.m"
  MR_Word mercury__version_store__HeadVar__1_1,
#line 77 "version_store.m"
  MR_Word mercury__version_store__HeadVar__2_2,
#line 77 "version_store.m"
  MR_Box mercury__version_store__X_7)
#line 77 "version_store.m"
{
#line 172 "version_store.m"
  {
#line 172 "version_store.m"
    MR_bool mercury__version_store__succeeded;
#line 172 "version_store.m"
    MR_Word mercury__version_store__HeadVar__4_4;
#line 172 "version_store.m"
    MR_Word mercury__version_store__TypeCtorInfo_12_12;
#line 172 "version_store.m"
    MR_Box mercury__version_store__VA_5 = (MR_Box) mercury__version_store__HeadVar__2_2;
#line 172 "version_store.m"
    MR_Integer mercury__version_store__I_6 = (MR_Integer) mercury__version_store__HeadVar__1_1;
#line 172 "version_store.m"
    MR_Box mercury__version_store__V_8_8;
#line 172 "version_store.m"
    MR_Word mercury__version_store__V_9_9;

#line 13 "univ.opt"
    {
#line 13 "univ.opt"
      mercury__univ__type_to_univ_2_p_1(mercury__version_store__TypeInfo_for_T_10, mercury__version_store__X_7, &mercury__version_store__V_9_9);
    }
#line 1227 "version_store.c"
    mercury__version_store__TypeCtorInfo_12_12 = (MR_Word) &mercury__univ__univ__type_ctor_info_univ_0;
#line 205 "version_array.opt"
    {
#line 205 "version_array.opt"
      mercury__version_array__set_4_p_0(mercury__version_store__TypeCtorInfo_12_12, mercury__version_store__I_6, ((MR_Box) (mercury__version_store__V_9_9)), mercury__version_store__VA_5, &mercury__version_store__V_8_8);
    }
#line 173 "version_store.m"
    mercury__version_store__HeadVar__4_4 = (MR_Word) mercury__version_store__V_8_8;
#line 172 "version_store.m"
    return mercury__version_store__HeadVar__4_4;
#line 172 "version_store.m"
  }
#line 77 "version_store.m"
}

#line 71 "version_store.m"
void MR_CALL 
mercury__version_store__get_mutvar_4_p_0(
#line 71 "version_store.m"
  MR_Word mercury__version_store__TypeInfo_for_T_7,
#line 71 "version_store.m"
  MR_Word mercury__version_store__TypeInfo_for_S_8,
#line 71 "version_store.m"
  MR_Word mercury__version_store__Mutvar_5,
#line 71 "version_store.m"
  MR_Box * mercury__version_store__HeadVar__2_2,
#line 71 "version_store.m"
  MR_Word mercury__version_store__VS_6,
#line 71 "version_store.m"
  MR_Word * mercury__version_store__VS_4)
#line 71 "version_store.m"
{
#line 168 "version_store.m"
  {
#line 168 "version_store.m"
    MR_bool mercury__version_store__succeeded;
#line 168 "version_store.m"
    MR_Word mercury__version_store__TypeCtorInfo_10_13 = (MR_Word) &mercury__univ__univ__type_ctor_info_univ_0;
#line 168 "version_store.m"
    MR_Box mercury__version_store__VA_10 = (MR_Box) mercury__version_store__VS_6;
#line 168 "version_store.m"
    MR_Integer mercury__version_store__I_11 = (MR_Integer) mercury__version_store__Mutvar_5;
#line 168 "version_store.m"
    MR_Word mercury__version_store__UnivX_12;
#line 163 "version_store.m"
    MR_Box mercury__version_store__conv0_UnivX_12;

#line 163 "version_store.m"
    {
#line 163 "version_store.m"
      mercury__version_store__conv0_UnivX_12 = mercury__version_array__lookup_2_f_0(mercury__version_store__TypeCtorInfo_10_13, mercury__version_store__VA_10, mercury__version_store__I_11);
    }
#line 163 "version_store.m"
    mercury__version_store__UnivX_12 = ((MR_Word) mercury__version_store__conv0_UnivX_12);
#line 164 "version_store.m"
    {
#line 164 "version_store.m"
      mercury__univ__det_univ_to_type_2_p_0(mercury__version_store__TypeInfo_for_T_7, mercury__version_store__UnivX_12, mercury__version_store__HeadVar__2_2);
    }
#line 168 "version_store.m"
    *mercury__version_store__VS_4 = mercury__version_store__VS_6;
#line 168 "version_store.m"
  }
#line 71 "version_store.m"
}

#line 70 "version_store.m"
MR_Box MR_CALL 
mercury__version_store__lookup_2_f_0(
#line 70 "version_store.m"
  MR_Word mercury__version_store__TypeInfo_for_S_6,
#line 70 "version_store.m"
  MR_Word mercury__version_store__TypeInfo_for_T_7,
#line 70 "version_store.m"
  MR_Word mercury__version_store__VS_4,
#line 70 "version_store.m"
  MR_Word mercury__version_store__Mutvar_5)
#line 70 "version_store.m"
{
#line 162 "version_store.m"
  {
#line 162 "version_store.m"
    MR_bool mercury__version_store__succeeded;
#line 162 "version_store.m"
    MR_Box mercury__version_store__HeadVar__3_3;
#line 162 "version_store.m"
    MR_Word mercury__version_store__TypeCtorInfo_10_12 = (MR_Word) &mercury__univ__univ__type_ctor_info_univ_0;
#line 162 "version_store.m"
    MR_Box mercury__version_store__VA_9 = (MR_Box) mercury__version_store__VS_4;
#line 162 "version_store.m"
    MR_Integer mercury__version_store__I_10 = (MR_Integer) mercury__version_store__Mutvar_5;
#line 162 "version_store.m"
    MR_Word mercury__version_store__UnivX_11;
#line 163 "version_store.m"
    MR_Box mercury__version_store__conv0_UnivX_11;

#line 163 "version_store.m"
    {
#line 163 "version_store.m"
      mercury__version_store__conv0_UnivX_11 = mercury__version_array__lookup_2_f_0(mercury__version_store__TypeCtorInfo_10_12, mercury__version_store__VA_9, mercury__version_store__I_10);
    }
#line 163 "version_store.m"
    mercury__version_store__UnivX_11 = ((MR_Word) mercury__version_store__conv0_UnivX_11);
#line 164 "version_store.m"
    {
#line 164 "version_store.m"
      mercury__univ__det_univ_to_type_2_p_0(mercury__version_store__TypeInfo_for_T_7, mercury__version_store__UnivX_11, &mercury__version_store__HeadVar__3_3);
    }
#line 162 "version_store.m"
    return mercury__version_store__HeadVar__3_3;
#line 162 "version_store.m"
  }
#line 70 "version_store.m"
}

#line 64 "version_store.m"
MR_Box MR_CALL 
mercury__version_store__elem_2_f_0(
#line 64 "version_store.m"
  MR_Word mercury__version_store__TypeInfo_for_T_8,
#line 64 "version_store.m"
  MR_Word mercury__version_store__TypeInfo_for_S_9,
#line 64 "version_store.m"
  MR_Word mercury__version_store__HeadVar__1_1,
#line 64 "version_store.m"
  MR_Word mercury__version_store__HeadVar__2_2)
#line 64 "version_store.m"
{
#line 162 "version_store.m"
  {
#line 162 "version_store.m"
    MR_bool mercury__version_store__succeeded;
#line 162 "version_store.m"
    MR_Box mercury__version_store__X_6;
#line 162 "version_store.m"
    MR_Word mercury__version_store__TypeCtorInfo_10_10 = (MR_Word) &mercury__univ__univ__type_ctor_info_univ_0;
#line 162 "version_store.m"
    MR_Box mercury__version_store__VA_4 = (MR_Box) mercury__version_store__HeadVar__2_2;
#line 162 "version_store.m"
    MR_Integer mercury__version_store__I_5 = (MR_Integer) mercury__version_store__HeadVar__1_1;
#line 162 "version_store.m"
    MR_Word mercury__version_store__UnivX_7;
#line 163 "version_store.m"
    MR_Box mercury__version_store__conv0_UnivX_7;

#line 163 "version_store.m"
    {
#line 163 "version_store.m"
      mercury__version_store__conv0_UnivX_7 = mercury__version_array__lookup_2_f_0(mercury__version_store__TypeCtorInfo_10_10, mercury__version_store__VA_4, mercury__version_store__I_5);
    }
#line 163 "version_store.m"
    mercury__version_store__UnivX_7 = ((MR_Word) mercury__version_store__conv0_UnivX_7);
#line 164 "version_store.m"
    {
#line 164 "version_store.m"
      mercury__univ__det_univ_to_type_2_p_0(mercury__version_store__TypeInfo_for_T_8, mercury__version_store__UnivX_7, &mercury__version_store__X_6);
    }
#line 162 "version_store.m"
    return mercury__version_store__X_6;
#line 162 "version_store.m"
  }
#line 64 "version_store.m"
}

#line 58 "version_store.m"
void MR_CALL 
mercury__version_store__copy_mutvar_4_p_0(
#line 58 "version_store.m"
  MR_Word mercury__version_store__TypeInfo_for_T_10,
#line 58 "version_store.m"
  MR_Word mercury__version_store__TypeInfo_for_S_11,
#line 58 "version_store.m"
  MR_Word mercury__version_store__Mutvar0_5,
#line 58 "version_store.m"
  MR_Word * mercury__version_store__Mutvar_6,
#line 58 "version_store.m"
  MR_Word mercury__version_store__VS0_7,
#line 58 "version_store.m"
  MR_Word * mercury__version_store__VS_8)
#line 58 "version_store.m"
{
#line 156 "version_store.m"
  {
#line 156 "version_store.m"
    MR_bool mercury__version_store__succeeded;
#line 156 "version_store.m"
    MR_Word mercury__version_store__TypeCtorInfo_10_16 = (MR_Word) &mercury__univ__univ__type_ctor_info_univ_0;
#line 156 "version_store.m"
    MR_Box mercury__version_store__X_9;
#line 156 "version_store.m"
    MR_Box mercury__version_store__VA_13 = (MR_Box) mercury__version_store__VS0_7;
#line 156 "version_store.m"
    MR_Integer mercury__version_store__I_14 = (MR_Integer) mercury__version_store__Mutvar0_5;
#line 156 "version_store.m"
    MR_Word mercury__version_store__UnivX_15;
#line 163 "version_store.m"
    MR_Box mercury__version_store__conv0_UnivX_15;

#line 163 "version_store.m"
    {
#line 163 "version_store.m"
      mercury__version_store__conv0_UnivX_15 = mercury__version_array__lookup_2_f_0(mercury__version_store__TypeCtorInfo_10_16, mercury__version_store__VA_13, mercury__version_store__I_14);
    }
#line 163 "version_store.m"
    mercury__version_store__UnivX_15 = ((MR_Word) mercury__version_store__conv0_UnivX_15);
#line 164 "version_store.m"
    {
#line 164 "version_store.m"
      mercury__univ__det_univ_to_type_2_p_0(mercury__version_store__TypeInfo_for_T_10, mercury__version_store__UnivX_15, &mercury__version_store__X_9);
    }
#line 158 "version_store.m"
    {
#line 158 "version_store.m"
      mercury__version_store__new_mutvar_4_p_0(mercury__version_store__TypeInfo_for_T_10, mercury__version_store__TypeInfo_for_S_11, mercury__version_store__X_9, mercury__version_store__Mutvar_6, mercury__version_store__VS0_7, mercury__version_store__VS_8);
#line 158 "version_store.m"
      return;
    }
#line 156 "version_store.m"
  }
#line 58 "version_store.m"
}

#line 52 "version_store.m"
void MR_CALL 
mercury__version_store__new_cyclic_mutvar_4_p_0(
#line 52 "version_store.m"
  MR_Word mercury__version_store__TypeInfo_for_T_22,
#line 52 "version_store.m"
  MR_Word mercury__version_store__TypeInfo_for_S_23,
#line 52 "version_store.m"
  MR_Word mercury__version_store__F_5,
#line 52 "version_store.m"
  MR_Word * mercury__version_store__Mutvar_6,
#line 52 "version_store.m"
  MR_Word mercury__version_store__VS0_7,
#line 52 "version_store.m"
  MR_Word * mercury__version_store__VS_8)
#line 52 "version_store.m"
{
#line 136 "version_store.m"
  {
#line 136 "version_store.m"
    MR_bool mercury__version_store__succeeded;
#line 136 "version_store.m"
    MR_Word mercury__version_store__TypeCtorInfo_24_24 = (MR_Word) &mercury__counter__counter__type_ctor_info_counter_0;
#line 136 "version_store.m"
    MR_Word mercury__version_store__TypeCtorInfo_10_29 = (MR_Word) &mercury__univ__univ__type_ctor_info_univ_0;
#line 136 "version_store.m"
    MR_Word mercury__version_store__TypeCtorInfo_12_49;
#line 136 "version_store.m"
    MR_Word mercury__version_store__TypeCtorInfo_12_61;
#line 136 "version_store.m"
    MR_Word mercury__version_store__Counter0_9;
#line 136 "version_store.m"
    MR_Integer mercury__version_store__I_10;
#line 136 "version_store.m"
    MR_Word mercury__version_store__Counter_11;
#line 136 "version_store.m"
    MR_Integer mercury__version_store__Size0_12;
#line 136 "version_store.m"
    MR_Word mercury__version_store__VS1_13;
#line 136 "version_store.m"
    MR_Word mercury__version_store__V_14_14 = (MR_Word) ((MR_Box) ((MR_Integer) 0));
#line 136 "version_store.m"
    MR_Word mercury__version_store__V_18_18;
#line 136 "version_store.m"
    MR_Box mercury__version_store__V_19_19;
#line 136 "version_store.m"
    MR_Box mercury__version_store__VA_26 = (MR_Box) mercury__version_store__VS0_7;
#line 136 "version_store.m"
    MR_Word mercury__version_store__UnivX_28;
#line 136 "version_store.m"
    MR_Integer mercury__version_store__V_5_31;
#line 136 "version_store.m"
    MR_Box mercury__version_store__VA_33;
#line 136 "version_store.m"
    MR_Box mercury__version_store__VA_45;
#line 136 "version_store.m"
    MR_Integer mercury__version_store__I_46;
#line 136 "version_store.m"
    MR_Box mercury__version_store__V_47_47;
#line 136 "version_store.m"
    MR_Word mercury__version_store__V_48_48;
#line 136 "version_store.m"
    MR_Box mercury__version_store__VA_57;
#line 136 "version_store.m"
    MR_Integer mercury__version_store__I_58;
#line 136 "version_store.m"
    MR_Box mercury__version_store__V_59_59;
#line 136 "version_store.m"
    MR_Word mercury__version_store__V_60_60;
#line 163 "version_store.m"
    MR_Box mercury__version_store__conv0_UnivX_28;
#line 164 "version_store.m"
    MR_Box mercury__version_store__conv1_Counter0_9;
#line 277 "version_array.opt"
    MR_Word mercury__version_store__TypeCtorInfo_5_68;
#line 144 "version_store.m"
    MR_Box MR_CALL (* mercury__version_store__func_2)(MR_Box, MR_Box);

#line 163 "version_store.m"
    {
#line 163 "version_store.m"
      mercury__version_store__conv0_UnivX_28 = mercury__version_array__lookup_2_f_0(mercury__version_store__TypeCtorInfo_10_29, mercury__version_store__VA_26, (MR_Integer) 0);
    }
#line 163 "version_store.m"
    mercury__version_store__UnivX_28 = ((MR_Word) mercury__version_store__conv0_UnivX_28);
#line 164 "version_store.m"
    {
#line 164 "version_store.m"
      mercury__univ__det_univ_to_type_2_p_0(mercury__version_store__TypeCtorInfo_24_24, mercury__version_store__UnivX_28, &mercury__version_store__conv1_Counter0_9);
    }
#line 164 "version_store.m"
    mercury__version_store__Counter0_9 = ((MR_Word) mercury__version_store__conv1_Counter0_9);
#line 9 "counter.opt"
    mercury__version_store__I_10 = (MR_Integer) mercury__version_store__Counter0_9;
#line 10 "counter.opt"
    mercury__version_store__V_5_31 = (mercury__version_store__I_10 + (MR_Integer) 1);
#line 9 "counter.opt"
    mercury__version_store__Counter_11 = (MR_Word) mercury__version_store__V_5_31;
#line 139 "version_store.m"
    *mercury__version_store__Mutvar_6 = (MR_Word) mercury__version_store__I_10;
#line 148 "version_store.m"
    mercury__version_store__VA_33 = (MR_Box) mercury__version_store__VS0_7;
#line 277 "version_array.opt"
{
#define MR_PROC_LABEL mercury__version_store__new_cyclic_mutvar_4_p_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_store__VA_33 , VA);
		{
#line 277 "version_array.opt"

    N = ML_va_size_dolock(VA);

#line 1565 "version_store.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_store__Size0_12  = N;
#line 277 "version_array.opt"
}
#line 141 "version_store.m"
    mercury__version_store__succeeded = (mercury__version_store__I_10 >= mercury__version_store__Size0_12);
#line 141 "version_store.m"
    if (mercury__version_store__succeeded)
#line 141 "version_store.m"
      {
#line 141 "version_store.m"
        MR_Word mercury__version_store__TypeCtorInfo_11_41 = (MR_Word) &mercury__unit__unit__type_ctor_info_unit_0;
#line 141 "version_store.m"
        MR_Integer mercury__version_store__V_16_16 = (mercury__version_store__Size0_12 + mercury__version_store__Size0_12);
#line 141 "version_store.m"
        MR_Box mercury__version_store__VA_36 = (MR_Box) mercury__version_store__VS0_7;
#line 141 "version_store.m"
        MR_Box mercury__version_store__V_37_37;
#line 141 "version_store.m"
        MR_Word mercury__version_store__V_38_38;
#line 273 "version_array.opt"
        MR_Word mercury__version_store__TypeCtorInfo_10_69;

#line 152 "version_store.m"
        mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 13 "univ.opt"
        {
#line 13 "univ.opt"
          mercury__univ__type_to_univ_2_p_0(mercury__version_store__TypeCtorInfo_11_41, ((MR_Box) ((MR_Integer) 0)), &mercury__version_store__V_38_38);
        }
#line 273 "version_array.opt"
{
#define MR_PROC_LABEL mercury__version_store__new_cyclic_mutvar_4_p_0

	struct ML_va * VA0;
	MR_Integer N;
	MR_Word X;
	struct ML_va * VA;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_store__VA_36 , VA0);
	N =  mercury__version_store__V_16_16 ;
	X = (MR_Word) ((MR_Box) (mercury__version_store__V_38_38)) ;
		{
#line 273 "version_array.opt"

    VA = ML_va_resize_dolock(VA0, N, X, MR_ALLOC_ID);

#line 1615 "version_store.c"

		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, mercury__version_store__V_37_37 );
#line 273 "version_array.opt"
}
#line 152 "version_store.m"
        mercury__version_store__VS1_13 = (MR_Word) mercury__version_store__V_37_37;
#line 141 "version_store.m"
      }
#line 141 "version_store.m"
    else
#line 142 "version_store.m"
      mercury__version_store__VS1_13 = mercury__version_store__VS0_7;
#line 172 "version_store.m"
    mercury__version_store__I_46 = (MR_Integer) mercury__version_store__V_14_14;
#line 172 "version_store.m"
    mercury__version_store__VA_45 = (MR_Box) mercury__version_store__VS1_13;
#line 13 "univ.opt"
    {
#line 13 "univ.opt"
      mercury__univ__type_to_univ_2_p_1(mercury__version_store__TypeCtorInfo_24_24, ((MR_Box) (mercury__version_store__Counter_11)), &mercury__version_store__V_48_48);
    }
#line 1639 "version_store.c"
    mercury__version_store__TypeCtorInfo_12_49 = (MR_Word) &mercury__univ__univ__type_ctor_info_univ_0;
#line 205 "version_array.opt"
    {
#line 205 "version_array.opt"
      mercury__version_array__set_4_p_0(mercury__version_store__TypeCtorInfo_12_49, mercury__version_store__I_46, ((MR_Box) (mercury__version_store__V_48_48)), mercury__version_store__VA_45, &mercury__version_store__V_47_47);
    }
#line 173 "version_store.m"
    mercury__version_store__V_18_18 = (MR_Word) mercury__version_store__V_47_47;
#line 144 "version_store.m"
    mercury__version_store__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__version_store__F_5, (MR_Integer) 1)));
#line 144 "version_store.m"
    {
#line 144 "version_store.m"
      mercury__version_store__V_19_19 = mercury__version_store__func_2(((MR_Box) mercury__version_store__F_5), ((MR_Box) (*mercury__version_store__Mutvar_6)));
    }
#line 172 "version_store.m"
    mercury__version_store__I_58 = (MR_Integer) *mercury__version_store__Mutvar_6;
#line 172 "version_store.m"
    mercury__version_store__VA_57 = (MR_Box) mercury__version_store__V_18_18;
#line 13 "univ.opt"
    {
#line 13 "univ.opt"
      mercury__univ__type_to_univ_2_p_1(mercury__version_store__TypeInfo_for_T_22, mercury__version_store__V_19_19, &mercury__version_store__V_60_60);
    }
#line 1664 "version_store.c"
    mercury__version_store__TypeCtorInfo_12_61 = (MR_Word) &mercury__univ__univ__type_ctor_info_univ_0;
#line 205 "version_array.opt"
    {
#line 205 "version_array.opt"
      mercury__version_array__set_4_p_0(mercury__version_store__TypeCtorInfo_12_61, mercury__version_store__I_58, ((MR_Box) (mercury__version_store__V_60_60)), mercury__version_store__VA_57, &mercury__version_store__V_59_59);
    }
#line 173 "version_store.m"
    *mercury__version_store__VS_8 = (MR_Word) mercury__version_store__V_59_59;
#line 136 "version_store.m"
  }
#line 52 "version_store.m"
}

#line 45 "version_store.m"
void MR_CALL 
mercury__version_store__new_mutvar_4_p_0(
#line 45 "version_store.m"
  MR_Word mercury__version_store__TypeInfo_for_T_15,
#line 45 "version_store.m"
  MR_Word mercury__version_store__TypeInfo_for_S_16,
#line 45 "version_store.m"
  MR_Box mercury__version_store__X_5,
#line 45 "version_store.m"
  MR_Word * mercury__version_store__Mutvar_6,
#line 45 "version_store.m"
  MR_Word mercury__version_store__VS0_7,
#line 45 "version_store.m"
  MR_Word * mercury__version_store__VS_8)
#line 45 "version_store.m"
{
#line 131 "version_store.m"
  {
#line 131 "version_store.m"
    MR_bool mercury__version_store__succeeded;
#line 131 "version_store.m"
    MR_Word mercury__version_store__TypeCtorInfo_24_34 = (MR_Word) &mercury__counter__counter__type_ctor_info_counter_0;
#line 131 "version_store.m"
    MR_Word mercury__version_store__TypeCtorInfo_10_39 = (MR_Word) &mercury__univ__univ__type_ctor_info_univ_0;
#line 131 "version_store.m"
    MR_Word mercury__version_store__TypeCtorInfo_12_59;
#line 131 "version_store.m"
    MR_Word mercury__version_store__TypeCtorInfo_12_82;
#line 131 "version_store.m"
    MR_Word mercury__version_store__Counter0_21;
#line 131 "version_store.m"
    MR_Integer mercury__version_store__I_22;
#line 131 "version_store.m"
    MR_Word mercury__version_store__Counter_23;
#line 131 "version_store.m"
    MR_Integer mercury__version_store__Size0_24;
#line 131 "version_store.m"
    MR_Word mercury__version_store__VS1_25;
#line 131 "version_store.m"
    MR_Word mercury__version_store__V_26_26 = (MR_Word) ((MR_Box) ((MR_Integer) 0));
#line 131 "version_store.m"
    MR_Box mercury__version_store__VA_36 = (MR_Box) mercury__version_store__VS0_7;
#line 131 "version_store.m"
    MR_Word mercury__version_store__UnivX_38;
#line 131 "version_store.m"
    MR_Integer mercury__version_store__V_5_41;
#line 131 "version_store.m"
    MR_Box mercury__version_store__VA_43;
#line 131 "version_store.m"
    MR_Box mercury__version_store__VA_55;
#line 131 "version_store.m"
    MR_Integer mercury__version_store__I_56;
#line 131 "version_store.m"
    MR_Word mercury__version_store__V_58_58;
#line 131 "version_store.m"
    MR_Box mercury__version_store__VA_78;
#line 131 "version_store.m"
    MR_Integer mercury__version_store__I_79;
#line 131 "version_store.m"
    MR_Box mercury__version_store__V_80_80;
#line 131 "version_store.m"
    MR_Word mercury__version_store__V_81_81;
#line 163 "version_store.m"
    MR_Box mercury__version_store__conv0_UnivX_38;
#line 164 "version_store.m"
    MR_Box mercury__version_store__conv1_Counter0_21;
#line 277 "version_array.opt"
    MR_Word mercury__version_store__TypeCtorInfo_5_89;

#line 163 "version_store.m"
    {
#line 163 "version_store.m"
      mercury__version_store__conv0_UnivX_38 = mercury__version_array__lookup_2_f_0(mercury__version_store__TypeCtorInfo_10_39, mercury__version_store__VA_36, (MR_Integer) 0);
    }
#line 163 "version_store.m"
    mercury__version_store__UnivX_38 = ((MR_Word) mercury__version_store__conv0_UnivX_38);
#line 164 "version_store.m"
    {
#line 164 "version_store.m"
      mercury__univ__det_univ_to_type_2_p_0(mercury__version_store__TypeCtorInfo_24_34, mercury__version_store__UnivX_38, &mercury__version_store__conv1_Counter0_21);
    }
#line 164 "version_store.m"
    mercury__version_store__Counter0_21 = ((MR_Word) mercury__version_store__conv1_Counter0_21);
#line 9 "counter.opt"
    mercury__version_store__I_22 = (MR_Integer) mercury__version_store__Counter0_21;
#line 10 "counter.opt"
    mercury__version_store__V_5_41 = (mercury__version_store__I_22 + (MR_Integer) 1);
#line 9 "counter.opt"
    mercury__version_store__Counter_23 = (MR_Word) mercury__version_store__V_5_41;
#line 139 "version_store.m"
    *mercury__version_store__Mutvar_6 = (MR_Word) mercury__version_store__I_22;
#line 148 "version_store.m"
    mercury__version_store__VA_43 = (MR_Box) mercury__version_store__VS0_7;
#line 277 "version_array.opt"
{
#define MR_PROC_LABEL mercury__version_store__new_mutvar_4_p_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_store__VA_43 , VA);
		{
#line 277 "version_array.opt"

    N = ML_va_size_dolock(VA);

#line 1785 "version_store.c"

		;}
#undef MR_PROC_LABEL
	 mercury__version_store__Size0_24  = N;
#line 277 "version_array.opt"
}
#line 141 "version_store.m"
    mercury__version_store__succeeded = (mercury__version_store__I_22 >= mercury__version_store__Size0_24);
#line 141 "version_store.m"
    if (mercury__version_store__succeeded)
#line 141 "version_store.m"
      {
#line 141 "version_store.m"
        MR_Word mercury__version_store__TypeCtorInfo_11_51 = (MR_Word) &mercury__unit__unit__type_ctor_info_unit_0;
#line 141 "version_store.m"
        MR_Integer mercury__version_store__V_28_28 = (mercury__version_store__Size0_24 + mercury__version_store__Size0_24);
#line 141 "version_store.m"
        MR_Box mercury__version_store__VA_46 = (MR_Box) mercury__version_store__VS0_7;
#line 141 "version_store.m"
        MR_Box mercury__version_store__V_47_47;
#line 141 "version_store.m"
        MR_Word mercury__version_store__V_48_48;
#line 273 "version_array.opt"
        MR_Word mercury__version_store__TypeCtorInfo_10_90;

#line 152 "version_store.m"
        mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 13 "univ.opt"
        {
#line 13 "univ.opt"
          mercury__univ__type_to_univ_2_p_0(mercury__version_store__TypeCtorInfo_11_51, ((MR_Box) ((MR_Integer) 0)), &mercury__version_store__V_48_48);
        }
#line 273 "version_array.opt"
{
#define MR_PROC_LABEL mercury__version_store__new_mutvar_4_p_0

	struct ML_va * VA0;
	MR_Integer N;
	MR_Word X;
	struct ML_va * VA;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__version_store__VA_46 , VA0);
	N =  mercury__version_store__V_28_28 ;
	X = (MR_Word) ((MR_Box) (mercury__version_store__V_48_48)) ;
		{
#line 273 "version_array.opt"

    VA = ML_va_resize_dolock(VA0, N, X, MR_ALLOC_ID);

#line 1835 "version_store.c"

		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, mercury__version_store__V_47_47 );
#line 273 "version_array.opt"
}
#line 152 "version_store.m"
        mercury__version_store__VS1_25 = (MR_Word) mercury__version_store__V_47_47;
#line 141 "version_store.m"
      }
#line 141 "version_store.m"
    else
#line 142 "version_store.m"
      mercury__version_store__VS1_25 = mercury__version_store__VS0_7;
#line 172 "version_store.m"
    mercury__version_store__I_56 = (MR_Integer) mercury__version_store__V_26_26;
#line 172 "version_store.m"
    mercury__version_store__VA_55 = (MR_Box) mercury__version_store__VS1_25;
#line 13 "univ.opt"
    {
#line 13 "univ.opt"
      mercury__univ__type_to_univ_2_p_1(mercury__version_store__TypeCtorInfo_24_34, ((MR_Box) (mercury__version_store__Counter_23)), &mercury__version_store__V_58_58);
    }
#line 1859 "version_store.c"
    mercury__version_store__TypeCtorInfo_12_59 = (MR_Word) &mercury__univ__univ__type_ctor_info_univ_0;
#line 205 "version_array.opt"
    {
#line 205 "version_array.opt"
      mercury__version_array__set_4_p_0(mercury__version_store__TypeCtorInfo_12_59, mercury__version_store__I_56, ((MR_Box) (mercury__version_store__V_58_58)), mercury__version_store__VA_55, &mercury__version_store__VA_78);
    }
#line 172 "version_store.m"
    mercury__version_store__I_79 = (MR_Integer) *mercury__version_store__Mutvar_6;
#line 13 "univ.opt"
    {
#line 13 "univ.opt"
      mercury__univ__type_to_univ_2_p_1(mercury__version_store__TypeInfo_for_T_15, mercury__version_store__X_5, &mercury__version_store__V_81_81);
    }
#line 1873 "version_store.c"
    mercury__version_store__TypeCtorInfo_12_82 = (MR_Word) &mercury__univ__univ__type_ctor_info_univ_0;
#line 205 "version_array.opt"
    {
#line 205 "version_array.opt"
      mercury__version_array__set_4_p_0(mercury__version_store__TypeCtorInfo_12_82, mercury__version_store__I_79, ((MR_Box) (mercury__version_store__V_81_81)), mercury__version_store__VA_78, &mercury__version_store__V_80_80);
    }
#line 173 "version_store.m"
    *mercury__version_store__VS_8 = (MR_Word) mercury__version_store__V_80_80;
#line 131 "version_store.m"
  }
#line 45 "version_store.m"
}

#line 40 "version_store.m"
MR_Word MR_CALL 
mercury__version_store__init_0_f_0(
#line 40 "version_store.m"
  MR_Word * mercury__version_store__ExistQTypeInfo_for_S_12)
#line 40 "version_store.m"
{
#line 121 "version_store.m"
  {
#line 121 "version_store.m"
    MR_bool mercury__version_store__succeeded;
#line 121 "version_store.m"
    MR_Word mercury__version_store__ExistQHeadVar__1_11;
#line 121 "version_store.m"
    MR_Word mercury__version_store__TypeInfo_for_S_7;
#line 121 "version_store.m"
    MR_Word mercury__version_store__TypeCtorInfo_8_8 = (MR_Word) &mercury__univ__univ__type_ctor_info_univ_0;
#line 121 "version_store.m"
    MR_Word mercury__version_store__TypeCtorInfo_9_9 = (MR_Word) &mercury__counter__counter__type_ctor_info_counter_0;
#line 121 "version_store.m"
    MR_Word mercury__version_store__HeadVar__1_1;
#line 121 "version_store.m"
    MR_Box mercury__version_store__VA_2;
#line 121 "version_store.m"
    MR_Word mercury__version_store__V_4_4;
#line 121 "version_store.m"
    MR_Word mercury__version_store__V_5_5 = (MR_Word) ((MR_Box) ((MR_Integer) 1));

#line 13 "univ.opt"
    {
#line 13 "univ.opt"
      mercury__univ__type_to_univ_2_p_1(mercury__version_store__TypeCtorInfo_9_9, ((MR_Box) (mercury__version_store__V_5_5)), &mercury__version_store__V_4_4);
    }
#line 127 "version_store.m"
    {
#line 127 "version_store.m"
      mercury__version_store__VA_2 = mercury__version_array__init_2_f_0(mercury__version_store__TypeCtorInfo_8_8, (MR_Integer) 256, ((MR_Box) (mercury__version_store__V_4_4)));
    }
#line 121 "version_store.m"
    mercury__version_store__HeadVar__1_1 = (MR_Word) mercury__version_store__VA_2;
#line 1927 "version_store.c"
    mercury__version_store__TypeInfo_for_S_7 = (MR_Word) &mercury__version_store__version_store__type_ctor_info_some_version_store_type_0;
#line 1929 "version_store.c"
    mercury__version_store__ExistQHeadVar__1_11 = mercury__version_store__HeadVar__1_1;
#line 1931 "version_store.c"
    *mercury__version_store__ExistQTypeInfo_for_S_12 = mercury__version_store__TypeInfo_for_S_7;
#line 121 "version_store.m"
    return mercury__version_store__ExistQHeadVar__1_11;
#line 121 "version_store.m"
  }
#line 40 "version_store.m"
}

void mercury__version_store__init(void)
{
}

void mercury__version_store__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__version_store__version_store__type_ctor_info_mutvar_2);
	MR_register_type_ctor_info(&mercury__version_store__version_store__type_ctor_info_some_version_store_type_0);
	MR_register_type_ctor_info(&mercury__version_store__version_store__type_ctor_info_version_store_1);
}

void mercury__version_store__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module version_store. */
