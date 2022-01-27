/*
** Automatically generated from `varset.m'
** by the Mercury compiler,
** version rotd-2015-09-18
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


/* :- module varset. */
/* :- implementation. */

/*
INIT mercury__varset__init
ENDINIT
*/

#include "varset.mih"


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
#include "version_array.mih"
#include "stream.string_writer.mih"
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"




#line 93 "varset.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__varset__term__pti_var_supply_1__pseudo_1;

#line 96 "varset.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__varset__term__pti_var_1__pseudo_1;

#line 99 "varset.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__varset__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__plain_builtin__type_ctor_info_string_0;

#line 102 "varset.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__varset__term__pti_term_1__pseudo_1;

#line 105 "varset.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__varset__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_term__pti_term_1__pseudo_1;

#line 108 "varset.c"
static const MR_PseudoTypeInfo mercury__varset__varset__field_types_varset_1_0[3];

#line 111 "varset.c"
static const MR_ConstString mercury__varset__varset__field_names_varset_1_0[3];

#line 114 "varset.c"
static const MR_DuFunctorDesc mercury__varset__varset__du_functor_desc_varset_1_0;

#line 117 "varset.c"
static const MR_DuFunctorDescPtr mercury__varset__varset__du_stag_ordered_varset_1_0[1];

#line 120 "varset.c"
static const MR_DuPtagLayout mercury__varset__varset__du_ptag_ordered_varset_1[1];

#line 123 "varset.c"
static const MR_DuFunctorDescPtr mercury__varset__varset__du_name_ordered_varset_1[1];

#line 126 "varset.c"
static const MR_Integer mercury__varset__varset__functor_number_map_varset_1[1];

#line 129 "varset.c"
static const MR_FA_TypeInfo_Struct1 mercury__varset__varset__ti_varset_1term__type_ctor_info_generic_0;

#line 132 "varset.c"
static MR_bool MR_CALL 
mercury__varset____Unify____varset_1_0_10001(
#line 135 "varset.c"
  MR_Box mercury__varset__wrapper_arg_1,
#line 137 "varset.c"
  MR_Box mercury__varset__wrapper_arg_2,
#line 139 "varset.c"
  MR_Box mercury__varset__wrapper_arg_3);

#line 142 "varset.c"
static void MR_CALL 
mercury__varset____Compare____varset_1_0_10001(
#line 145 "varset.c"
  MR_Box mercury__varset__wrapper_arg_1,
#line 147 "varset.c"
  MR_Box * mercury__varset__wrapper_arg_2,
#line 149 "varset.c"
  MR_Box mercury__varset__wrapper_arg_3,
#line 151 "varset.c"
  MR_Box mercury__varset__wrapper_arg_4);

#line 154 "varset.c"
static MR_bool MR_CALL 
mercury__varset____Unify____varset_0_0_10001(
#line 157 "varset.c"
  MR_Box mercury__varset__wrapper_arg_1,
#line 159 "varset.c"
  MR_Box mercury__varset__wrapper_arg_2);

#line 162 "varset.c"
static void MR_CALL 
mercury__varset____Compare____varset_0_0_10001(
#line 165 "varset.c"
  MR_Box * mercury__varset__wrapper_arg_1,
#line 167 "varset.c"
  MR_Box mercury__varset__wrapper_arg_2,
#line 169 "varset.c"
  MR_Box mercury__varset__wrapper_arg_3);

#line 18 "ops.opt"
static MR_Integer MR_CALL 
mercury__varset__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 733 "varset.m"
static void MR_CALL 
mercury__varset__append_suffix_until_unique_4_p_0(
#line 733 "varset.m"
  MR_String mercury__varset__Trial0_5,
#line 733 "varset.m"
  MR_String mercury__varset__Suffix_6,
#line 733 "varset.m"
  MR_Word mercury__varset__UsedNames_7,
#line 733 "varset.m"
  MR_String * mercury__varset__Final_8);


static /* final */ const MR_Box mercury__varset_scalar_common_1[2][2];

static /* final */ const MR_Box mercury__varset_scalar_common_2[2][3];

static /* final */ const MR_Box mercury__varset_scalar_common_3[1][4];

static /* final */ const MR_Box mercury__varset_scalar_common_4[2][5];

static /* final */ const MR_Box mercury__varset_scalar_common_5[1][1];




static /* final */ const MR_Box mercury__varset_scalar_common_1[2][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box mercury__varset_scalar_common_2[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (((MR_Box) ((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box mercury__varset_scalar_common_3[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__varset_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__varset_scalar_common_4[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__varset_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__varset_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__varset_scalar_common_5[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
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



#line 293 "varset.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__varset__term__pti_var_supply_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_var_supply_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 301 "varset.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__varset__term__pti_var_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 309 "varset.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__varset__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__varset__term__pti_var_1__pseudo_1,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 318 "varset.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__varset__term__pti_term_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 326 "varset.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__varset__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_term__pti_term_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__varset__term__pti_var_1__pseudo_1,
    (MR_PseudoTypeInfo) &mercury__varset__term__pti_term_1__pseudo_1
  }
};

#line 335 "varset.c"
static const MR_PseudoTypeInfo mercury__varset__varset__field_types_varset_1_0[3] = {
  (MR_PseudoTypeInfo) &mercury__varset__term__pti_var_supply_1__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__varset__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__plain_builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__varset__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_term__pti_term_1__pseudo_1
};

#line 342 "varset.c"
static const MR_ConstString mercury__varset__varset__field_names_varset_1_0[3] = {
  (MR_String) "var_supply",
  (MR_String) "var_names",
  (MR_String) "var_values"
};

#line 349 "varset.c"
static const MR_DuFunctorDesc mercury__varset__varset__du_functor_desc_varset_1_0 = {
  (MR_String) "varset",
  (MR_Integer) 3,
  (MR_Integer) 7,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__varset__varset__field_types_varset_1_0,
  mercury__varset__varset__field_names_varset_1_0,
  NULL,
  NULL
};

#line 364 "varset.c"
static const MR_DuFunctorDescPtr mercury__varset__varset__du_stag_ordered_varset_1_0[1] = {
  &mercury__varset__varset__du_functor_desc_varset_1_0
};

#line 369 "varset.c"
static const MR_DuPtagLayout mercury__varset__varset__du_ptag_ordered_varset_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__varset__varset__du_stag_ordered_varset_1_0
  }
};

#line 378 "varset.c"
static const MR_DuFunctorDescPtr mercury__varset__varset__du_name_ordered_varset_1[1] = {
  &mercury__varset__varset__du_functor_desc_varset_1_0
};

#line 383 "varset.c"
static const MR_Integer mercury__varset__varset__functor_number_map_varset_1[1] = {
  (MR_Integer) 0
};

#line 388 "varset.c"
const MR_TypeCtorInfo_Struct mercury__varset__varset__type_ctor_info_varset_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__varset____Unify____varset_1_0_10001)),
  ((MR_Box) (mercury__varset____Compare____varset_1_0_10001)),
  (MR_String) "varset",
  (MR_String) "varset",
  {     mercury__varset__varset__du_name_ordered_varset_1 },
  {     mercury__varset__varset__du_ptag_ordered_varset_1 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__varset__varset__functor_number_map_varset_1
};

#line 405 "varset.c"
static const MR_FA_TypeInfo_Struct1 mercury__varset__varset__ti_varset_1term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 413 "varset.c"
const MR_TypeCtorInfo_Struct mercury__varset__varset__type_ctor_info_varset_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__varset____Unify____varset_0_0_10001)),
  ((MR_Box) (mercury__varset____Compare____varset_0_0_10001)),
  (MR_String) "varset",
  (MR_String) "varset",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__varset__varset__ti_varset_1term__type_ctor_info_generic_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 430 "varset.c"
static MR_bool MR_CALL 
mercury__varset____Unify____varset_1_0_10001(
#line 433 "varset.c"
  MR_Box mercury__varset__wrapper_arg_1,
#line 435 "varset.c"
  MR_Box mercury__varset__wrapper_arg_2,
#line 437 "varset.c"
  MR_Box mercury__varset__wrapper_arg_3)
#line 439 "varset.c"
{
#line 441 "varset.c"
  {
#line 443 "varset.c"
    MR_bool mercury__varset__succeeded;

#line 446 "varset.c"
    {
#line 448 "varset.c"
      mercury__varset__succeeded = mercury__varset____Unify____varset_1_0(((MR_Word) mercury__varset__wrapper_arg_1), ((MR_Word) mercury__varset__wrapper_arg_2), ((MR_Word) mercury__varset__wrapper_arg_3));
    }
#line 451 "varset.c"
    return mercury__varset__succeeded;
#line 453 "varset.c"
  }
#line 455 "varset.c"
}

#line 458 "varset.c"
static void MR_CALL 
mercury__varset____Compare____varset_1_0_10001(
#line 461 "varset.c"
  MR_Box mercury__varset__wrapper_arg_1,
#line 463 "varset.c"
  MR_Box * mercury__varset__wrapper_arg_2,
#line 465 "varset.c"
  MR_Box mercury__varset__wrapper_arg_3,
#line 467 "varset.c"
  MR_Box mercury__varset__wrapper_arg_4)
#line 469 "varset.c"
{
#line 471 "varset.c"
  {
#line 473 "varset.c"
    MR_Word mercury__varset__conv0_HeadVar__1_1;

#line 476 "varset.c"
    {
#line 478 "varset.c"
      mercury__varset____Compare____varset_1_0(((MR_Word) mercury__varset__wrapper_arg_1), &mercury__varset__conv0_HeadVar__1_1, ((MR_Word) mercury__varset__wrapper_arg_3), ((MR_Word) mercury__varset__wrapper_arg_4));
    }
#line 481 "varset.c"
    *mercury__varset__wrapper_arg_2 = ((MR_Box) (mercury__varset__conv0_HeadVar__1_1));
#line 483 "varset.c"
  }
#line 485 "varset.c"
}

#line 488 "varset.c"
static MR_bool MR_CALL 
mercury__varset____Unify____varset_0_0_10001(
#line 491 "varset.c"
  MR_Box mercury__varset__wrapper_arg_1,
#line 493 "varset.c"
  MR_Box mercury__varset__wrapper_arg_2)
#line 495 "varset.c"
{
#line 497 "varset.c"
  {
#line 499 "varset.c"
    MR_bool mercury__varset__succeeded;

#line 502 "varset.c"
    {
#line 504 "varset.c"
      mercury__varset__succeeded = mercury__varset____Unify____varset_0_0(((MR_Word) mercury__varset__wrapper_arg_1), ((MR_Word) mercury__varset__wrapper_arg_2));
    }
#line 507 "varset.c"
    return mercury__varset__succeeded;
#line 509 "varset.c"
  }
#line 511 "varset.c"
}

#line 514 "varset.c"
static void MR_CALL 
mercury__varset____Compare____varset_0_0_10001(
#line 517 "varset.c"
  MR_Box * mercury__varset__wrapper_arg_1,
#line 519 "varset.c"
  MR_Box mercury__varset__wrapper_arg_2,
#line 521 "varset.c"
  MR_Box mercury__varset__wrapper_arg_3)
#line 523 "varset.c"
{
#line 525 "varset.c"
  {
#line 527 "varset.c"
    MR_Word mercury__varset__conv0_HeadVar__1_1;

#line 530 "varset.c"
    {
#line 532 "varset.c"
      mercury__varset____Compare____varset_0_0(&mercury__varset__conv0_HeadVar__1_1, ((MR_Word) mercury__varset__wrapper_arg_2), ((MR_Word) mercury__varset__wrapper_arg_3));
    }
#line 535 "varset.c"
    *mercury__varset__wrapper_arg_1 = ((MR_Box) (mercury__varset__conv0_HeadVar__1_1));
#line 537 "varset.c"
  }
#line 539 "varset.c"
}

#line 18 "ops.opt"
static MR_Integer MR_CALL 
mercury__varset__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 18 "ops.opt"
{
#line 47 "ops.opt"
  {
#line 47 "ops.opt"
    MR_bool mercury__varset__succeeded;

#line 47 "ops.opt"
    return (MR_Integer) 1200;
#line 47 "ops.opt"
  }
#line 18 "ops.opt"
}

#line 315 "varset.m"
void MR_CALL 
mercury__varset____Compare____varset_1_0(
#line 315 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_14,
#line 315 "varset.m"
  MR_Word * mercury__varset__HeadVar__1_1,
#line 315 "varset.m"
  MR_Word mercury__varset__HeadVar__2_2,
#line 315 "varset.m"
  MR_Word mercury__varset__HeadVar__3_3)
#line 315 "varset.m"
{
#line 315 "varset.m"
  {
#line 315 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 315 "varset.m"
    MR_Integer mercury__varset__CastX_12 = (MR_Integer) mercury__varset__HeadVar__2_2;
#line 315 "varset.m"
    MR_Integer mercury__varset__CastY_13 = (MR_Integer) mercury__varset__HeadVar__3_3;

#line 315 "varset.m"
    mercury__varset__succeeded = (mercury__varset__CastX_12 == mercury__varset__CastY_13);
#line 315 "varset.m"
    if (mercury__varset__succeeded)
#line 585 "varset.c"
      *mercury__varset__HeadVar__1_1 = (MR_Integer) 0;
#line 315 "varset.m"
    else
#line 315 "varset.m"
      {
#line 315 "varset.m"
        MR_Word mercury__varset__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__2_2, (MR_Integer) 0)));
#line 315 "varset.m"
        MR_Word mercury__varset__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__2_2, (MR_Integer) 1)));
#line 315 "varset.m"
        MR_Word mercury__varset__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__2_2, (MR_Integer) 2)));
#line 315 "varset.m"
        MR_Word mercury__varset__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__3_3, (MR_Integer) 0)));
#line 315 "varset.m"
        MR_Word mercury__varset__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__3_3, (MR_Integer) 1)));
#line 315 "varset.m"
        MR_Word mercury__varset__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__3_3, (MR_Integer) 2)));
#line 315 "varset.m"
        MR_Word mercury__varset__V_10_10;
#line 315 "varset.m"
        MR_Integer mercury__varset__V_28_28 = (MR_Integer) mercury__varset__V_4_4;
#line 315 "varset.m"
        MR_Integer mercury__varset__V_29_29 = (MR_Integer) mercury__varset__V_7_7;

#line 71 "private_builtin.opt"
        mercury__varset__succeeded = (mercury__varset__V_28_28 < mercury__varset__V_29_29);
#line 74 "private_builtin.opt"
        if (mercury__varset__succeeded)
#line 73 "private_builtin.opt"
          mercury__varset__V_10_10 = (MR_Integer) 1;
#line 74 "private_builtin.opt"
        else
#line 79 "private_builtin.opt"
          {
#line 76 "private_builtin.opt"
            mercury__varset__succeeded = (mercury__varset__V_28_28 == mercury__varset__V_29_29);
#line 79 "private_builtin.opt"
            if (mercury__varset__succeeded)
#line 78 "private_builtin.opt"
              mercury__varset__V_10_10 = (MR_Integer) 0;
#line 79 "private_builtin.opt"
            else
#line 80 "private_builtin.opt"
              mercury__varset__V_10_10 = (MR_Integer) 2;
#line 79 "private_builtin.opt"
          }
#line 632 "varset.c"
        mercury__varset__succeeded = (mercury__varset__V_10_10 == (MR_Integer) 0);
#line 315 "varset.m"
        mercury__varset__succeeded = !(mercury__varset__succeeded);
#line 315 "varset.m"
        if (mercury__varset__succeeded)
#line 315 "varset.m"
          *mercury__varset__HeadVar__1_1 = mercury__varset__V_10_10;
#line 315 "varset.m"
        else
#line 315 "varset.m"
          {
#line 315 "varset.m"
            MR_Word mercury__varset__V_11_11;
#line 315 "varset.m"
            MR_Word mercury__varset__TypeCtorInfo_17_17 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 315 "varset.m"
            MR_Word mercury__varset__TypeInfo_18_18;
#line 315 "varset.m"
            MR_Word mercury__varset__TypeCtorInfo_19_19 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;

#line 653 "varset.c"
            {
#line 655 "varset.c"
              mercury__varset__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 657 "varset.c"
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_18_18, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_17_17));
#line 659 "varset.c"
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_18_18, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_14));
#line 661 "varset.c"
            }
#line 315 "varset.m"
            {
#line 315 "varset.m"
              mercury__tree234____Compare____tree234_2_0(mercury__varset__TypeInfo_18_18, mercury__varset__TypeCtorInfo_19_19, &mercury__varset__V_11_11, (MR_Word) mercury__varset__V_5_5, (MR_Word) mercury__varset__V_8_8);
            }
#line 668 "varset.c"
            mercury__varset__succeeded = (mercury__varset__V_11_11 == (MR_Integer) 0);
#line 315 "varset.m"
            mercury__varset__succeeded = !(mercury__varset__succeeded);
#line 315 "varset.m"
            if (mercury__varset__succeeded)
#line 315 "varset.m"
              *mercury__varset__HeadVar__1_1 = mercury__varset__V_11_11;
#line 315 "varset.m"
            else
#line 315 "varset.m"
              {
#line 315 "varset.m"
                MR_Word mercury__varset__TypeCtorInfo_22_22 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 315 "varset.m"
                MR_Word mercury__varset__TypeInfo_23_23;
#line 315 "varset.m"
                MR_Word mercury__varset__TypeCtorInfo_24_24;
#line 315 "varset.m"
                MR_Word mercury__varset__TypeInfo_25_25;

#line 689 "varset.c"
                {
#line 691 "varset.c"
                  mercury__varset__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 693 "varset.c"
                  MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_23_23, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_22_22));
#line 695 "varset.c"
                  MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_23_23, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_14));
#line 697 "varset.c"
                }
#line 699 "varset.c"
                mercury__varset__TypeCtorInfo_24_24 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 701 "varset.c"
                {
#line 703 "varset.c"
                  mercury__varset__TypeInfo_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 705 "varset.c"
                  MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_25_25, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_24_24));
#line 707 "varset.c"
                  MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_25_25, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_14));
#line 709 "varset.c"
                }
#line 315 "varset.m"
                {
#line 315 "varset.m"
                  mercury__tree234____Compare____tree234_2_0(mercury__varset__TypeInfo_23_23, mercury__varset__TypeInfo_25_25, mercury__varset__HeadVar__1_1, (MR_Word) mercury__varset__V_6_6, (MR_Word) mercury__varset__V_9_9);
#line 315 "varset.m"
                  return;
                }
#line 315 "varset.m"
              }
#line 315 "varset.m"
          }
#line 315 "varset.m"
      }
#line 315 "varset.m"
  }
#line 315 "varset.m"
}

#line 315 "varset.m"
MR_bool MR_CALL 
mercury__varset____Unify____varset_1_0(
#line 315 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_11,
#line 315 "varset.m"
  MR_Word mercury__varset__HeadVar__1_1,
#line 315 "varset.m"
  MR_Word mercury__varset__HeadVar__2_2)
#line 315 "varset.m"
{
#line 315 "varset.m"
  {
#line 315 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 315 "varset.m"
    MR_Integer mercury__varset__CastX_9 = (MR_Integer) mercury__varset__HeadVar__1_1;
#line 315 "varset.m"
    MR_Integer mercury__varset__CastY_10 = (MR_Integer) mercury__varset__HeadVar__2_2;

#line 315 "varset.m"
    mercury__varset__succeeded = (mercury__varset__CastX_9 == mercury__varset__CastY_10);
#line 315 "varset.m"
    if (mercury__varset__succeeded)
#line 315 "varset.m"
      mercury__varset__succeeded = MR_TRUE;
#line 315 "varset.m"
    else
#line 315 "varset.m"
      {
#line 315 "varset.m"
        MR_Word mercury__varset__TypeCtorInfo_14_14;
#line 315 "varset.m"
        MR_Word mercury__varset__TypeCtorInfo_16_16;
#line 315 "varset.m"
        MR_Word mercury__varset__TypeInfo_20_20;
#line 315 "varset.m"
        MR_Word mercury__varset__TypeCtorInfo_21_21;
#line 315 "varset.m"
        MR_Word mercury__varset__TypeInfo_22_22;
#line 315 "varset.m"
        MR_Word mercury__varset__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__1_1, (MR_Integer) 0)));
#line 315 "varset.m"
        MR_Word mercury__varset__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__1_1, (MR_Integer) 1)));
#line 315 "varset.m"
        MR_Word mercury__varset__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__1_1, (MR_Integer) 2)));
#line 315 "varset.m"
        MR_Word mercury__varset__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__2_2, (MR_Integer) 0)));
#line 315 "varset.m"
        MR_Word mercury__varset__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__2_2, (MR_Integer) 1)));
#line 315 "varset.m"
        MR_Word mercury__varset__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__2_2, (MR_Integer) 2)));
#line 315 "varset.m"
        MR_Integer mercury__varset__V_25_25 = (MR_Integer) mercury__varset__V_3_3;
#line 315 "varset.m"
        MR_Integer mercury__varset__V_26_26 = (MR_Integer) mercury__varset__V_6_6;

#line 786 "varset.c"
        mercury__varset__succeeded = (mercury__varset__V_25_25 == mercury__varset__V_26_26);
#line 315 "varset.m"
        if (mercury__varset__succeeded)
#line 315 "varset.m"
          {
#line 792 "varset.c"
            mercury__varset__TypeCtorInfo_14_14 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 794 "varset.c"
            mercury__varset__TypeCtorInfo_16_16 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 796 "varset.c"
            {
#line 798 "varset.c"
              mercury__varset__TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 800 "varset.c"
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_20_20, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_14_14));
#line 802 "varset.c"
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_20_20, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_11));
#line 804 "varset.c"
            }
#line 806 "varset.c"
            {
#line 808 "varset.c"
              mercury__varset__succeeded = mercury__tree234____Unify____tree234_2_0(mercury__varset__TypeInfo_20_20, mercury__varset__TypeCtorInfo_16_16, (MR_Word) mercury__varset__V_4_4, (MR_Word) mercury__varset__V_7_7);
            }
#line 315 "varset.m"
            if (mercury__varset__succeeded)
#line 315 "varset.m"
              {
#line 815 "varset.c"
                mercury__varset__TypeCtorInfo_21_21 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 817 "varset.c"
                {
#line 819 "varset.c"
                  mercury__varset__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 821 "varset.c"
                  MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_22_22, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_21_21));
#line 823 "varset.c"
                  MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_22_22, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_11));
#line 825 "varset.c"
                }
#line 827 "varset.c"
                {
#line 829 "varset.c"
                  return mercury__varset__succeeded = mercury__tree234____Unify____tree234_2_0(mercury__varset__TypeInfo_20_20, mercury__varset__TypeInfo_22_22, (MR_Word) mercury__varset__V_5_5, (MR_Word) mercury__varset__V_8_8);
                }
#line 315 "varset.m"
              }
#line 315 "varset.m"
          }
#line 315 "varset.m"
      }
#line 315 "varset.m"
    return mercury__varset__succeeded;
#line 315 "varset.m"
  }
#line 315 "varset.m"
}

#line 45 "varset.m"
void MR_CALL 
mercury__varset____Compare____varset_0_0(
#line 45 "varset.m"
  MR_Word * mercury__varset__HeadVar__1_1,
#line 45 "varset.m"
  MR_Word mercury__varset__HeadVar__2_2,
#line 45 "varset.m"
  MR_Word mercury__varset__HeadVar__3_3)
#line 45 "varset.m"
{
#line 45 "varset.m"
  {
#line 45 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 45 "varset.m"
    MR_Word mercury__varset__TypeInfo_6_6 = (MR_Word) &mercury__varset_scalar_common_1[0];
#line 45 "varset.m"
    MR_Word mercury__varset__Cast_HeadVar1_4 = mercury__varset__HeadVar__2_2;
#line 45 "varset.m"
    MR_Word mercury__varset__Cast_HeadVar2_5 = mercury__varset__HeadVar__3_3;

#line 45 "varset.m"
    {
#line 45 "varset.m"
      mercury__builtin__compare_3_p_0(mercury__varset__TypeInfo_6_6, mercury__varset__HeadVar__1_1, ((MR_Box) (mercury__varset__Cast_HeadVar1_4)), ((MR_Box) (mercury__varset__Cast_HeadVar2_5)));
#line 45 "varset.m"
      return;
    }
#line 45 "varset.m"
  }
#line 45 "varset.m"
}

#line 45 "varset.m"
MR_bool MR_CALL 
mercury__varset____Unify____varset_0_0(
#line 45 "varset.m"
  MR_Word mercury__varset__HeadVar__1_1,
#line 45 "varset.m"
  MR_Word mercury__varset__HeadVar__2_2)
#line 45 "varset.m"
{
#line 45 "varset.m"
  {
#line 45 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 45 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_5_5 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 45 "varset.m"
    MR_Word mercury__varset__Cast_HeadVar1_3 = mercury__varset__HeadVar__1_1;
#line 45 "varset.m"
    MR_Word mercury__varset__Cast_HeadVar2_4 = mercury__varset__HeadVar__2_2;

#line 45 "varset.m"
    {
#line 45 "varset.m"
      return mercury__varset__succeeded = mercury__varset____Unify____varset_1_0(mercury__varset__TypeCtorInfo_5_5, mercury__varset__Cast_HeadVar1_3, mercury__varset__Cast_HeadVar2_4);
    }
#line 45 "varset.m"
    return mercury__varset__succeeded;
#line 45 "varset.m"
  }
#line 45 "varset.m"
}

#line 773 "varset.m"
void MR_CALL 
mercury__varset__copy_var_names_4_p_0(
#line 773 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_20,
#line 773 "varset.m"
  MR_Word mercury__varset__HeadVar__1_1,
#line 773 "varset.m"
  MR_Word mercury__varset__HeadVar__2_2,
#line 773 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_NewVarSet_0_3,
#line 773 "varset.m"
  MR_Word * mercury__varset__STATE_VARIABLE_NewVarSet_4)
#line 773 "varset.m"
{
#line 776 "varset.m"
  while (MR_TRUE)
#line 776 "varset.m"
    {
#line 776 "varset.m"
      /* tailcall optimized into a loop */
#line 776 "varset.m"
      {
#line 776 "varset.m"
        MR_bool mercury__varset__succeeded;

#line 776 "varset.m"
        if ((mercury__varset__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 776 "varset.m"
          *mercury__varset__STATE_VARIABLE_NewVarSet_4 = mercury__varset__STATE_VARIABLE_NewVarSet_0_3;
#line 776 "varset.m"
        else
#line 777 "varset.m"
          {
#line 777 "varset.m"
            MR_Word mercury__varset__OldVar_9;
#line 777 "varset.m"
            MR_String mercury__varset__Name_10;
#line 777 "varset.m"
            MR_Word mercury__varset__Rest_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__varset__HeadVar__1_1, (MR_Integer) 1)));
#line 777 "varset.m"
            MR_Word mercury__varset__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__varset__HeadVar__1_1, (MR_Integer) 0)));
#line 777 "varset.m"
            MR_Word mercury__varset__STATE_VARIABLE_NewVarSet_18_18;
#line 780 "varset.m"
            MR_Word mercury__varset__NewVar_14;
#line 778 "varset.m"
            MR_Word mercury__varset__TypeCtorInfo_21_21;
#line 778 "varset.m"
            MR_Word mercury__varset__TypeInfo_22_22;
#line 452 "map.opt"
            MR_Box mercury__varset__conv0_NewVar_14;

#line 777 "varset.m"
            mercury__varset__OldVar_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__V_17_17, (MR_Integer) 0)));
#line 777 "varset.m"
            mercury__varset__Name_10 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__varset__V_17_17, (MR_Integer) 1)));
#line 968 "varset.c"
            mercury__varset__TypeCtorInfo_21_21 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 970 "varset.c"
            {
#line 972 "varset.c"
              mercury__varset__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 974 "varset.c"
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_22_22, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_21_21));
#line 976 "varset.c"
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_22_22, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_20));
#line 978 "varset.c"
            }
#line 452 "map.opt"
            {
#line 452 "map.opt"
              mercury__varset__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__varset__TypeInfo_for_T_20, mercury__varset__TypeInfo_22_22, mercury__varset__TypeInfo_22_22, (MR_Word) mercury__varset__HeadVar__2_2, mercury__varset__OldVar_9, &mercury__varset__conv0_NewVar_14);
            }
#line 452 "map.opt"
            if (mercury__varset__succeeded)
#line 452 "map.opt"
              {
#line 452 "map.opt"
                mercury__varset__NewVar_14 = ((MR_Word) mercury__varset__conv0_NewVar_14);
#line 452 "map.opt"
                mercury__varset__succeeded = MR_TRUE;
#line 452 "map.opt"
              }
#line 780 "varset.m"
            if (mercury__varset__succeeded)
#line 779 "varset.m"
              {
#line 779 "varset.m"
                mercury__varset__name_var_4_p_0(mercury__varset__TypeInfo_for_T_20, mercury__varset__NewVar_14, mercury__varset__Name_10, mercury__varset__STATE_VARIABLE_NewVarSet_0_3, &mercury__varset__STATE_VARIABLE_NewVarSet_18_18);
              }
#line 780 "varset.m"
            else
#line 780 "varset.m"
              mercury__varset__STATE_VARIABLE_NewVarSet_18_18 = mercury__varset__STATE_VARIABLE_NewVarSet_0_3;
#line 783 "varset.m"
            /* direct tailcall eliminated */
#line 783 "varset.m"
            {
#line 783 "varset.m"
              MR_Word mercury__varset__HeadVar__1__tmp_copy_1 = mercury__varset__Rest_11;
#line 783 "varset.m"
              MR_Word mercury__varset__STATE_VARIABLE_NewVarSet_0__tmp_copy_3 = mercury__varset__STATE_VARIABLE_NewVarSet_18_18;

#line 783 "varset.m"
              mercury__varset__STATE_VARIABLE_NewVarSet_0_3 = mercury__varset__STATE_VARIABLE_NewVarSet_0__tmp_copy_3;
#line 783 "varset.m"
              mercury__varset__HeadVar__1_1 = mercury__varset__HeadVar__1__tmp_copy_1;
#line 783 "varset.m"
            }
#line 783 "varset.m"
            continue;
#line 777 "varset.m"
          }
#line 776 "varset.m"
      }
#line 776 "varset.m"
      break;
#line 776 "varset.m"
    }
#line 773 "varset.m"
}

#line 733 "varset.m"
static void MR_CALL 
mercury__varset__append_suffix_until_unique_4_p_0(
#line 733 "varset.m"
  MR_String mercury__varset__Trial0_5,
#line 733 "varset.m"
  MR_String mercury__varset__Suffix_6,
#line 733 "varset.m"
  MR_Word mercury__varset__UsedNames_7,
#line 733 "varset.m"
  MR_String * mercury__varset__Final_8)
#line 733 "varset.m"
{
#line 740 "varset.m"
  while (MR_TRUE)
#line 740 "varset.m"
    {
#line 740 "varset.m"
      /* tailcall optimized into a loop */
#line 740 "varset.m"
      {
#line 740 "varset.m"
        MR_bool mercury__varset__succeeded;
#line 737 "varset.m"
        MR_Word mercury__varset__TypeCtorInfo_10_10 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;

#line 737 "varset.m"
        {
#line 737 "varset.m"
          mercury__varset__succeeded = mercury__set__member_2_p_0(mercury__varset__TypeCtorInfo_10_10, ((MR_Box) (mercury__varset__Trial0_5)), mercury__varset__UsedNames_7);
        }
#line 740 "varset.m"
        if (mercury__varset__succeeded)
#line 738 "varset.m"
          {
#line 738 "varset.m"
            MR_String mercury__varset__Trial1_9;

#line 738 "varset.m"
            {
#line 738 "varset.m"
              mercury__string__append_3_p_2(mercury__varset__Trial0_5, mercury__varset__Suffix_6, &mercury__varset__Trial1_9);
            }
#line 739 "varset.m"
            /* direct tailcall eliminated */
#line 739 "varset.m"
            {
#line 739 "varset.m"
              MR_String mercury__varset__Trial0__tmp_copy_5 = mercury__varset__Trial1_9;

#line 739 "varset.m"
              mercury__varset__Trial0_5 = mercury__varset__Trial0__tmp_copy_5;
#line 739 "varset.m"
            }
#line 739 "varset.m"
            continue;
#line 738 "varset.m"
          }
#line 740 "varset.m"
        else
#line 741 "varset.m"
          *mercury__varset__Final_8 = mercury__varset__Trial0_5;
#line 740 "varset.m"
      }
#line 740 "varset.m"
      break;
#line 740 "varset.m"
    }
#line 733 "varset.m"
}

#line 709 "varset.m"
void MR_CALL 
mercury__varset__ensure_unique_names_loop_6_p_0(
#line 709 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_35,
#line 709 "varset.m"
  MR_Word mercury__varset__HeadVar__1_1,
#line 709 "varset.m"
  MR_String mercury__varset__Suffix_2,
#line 709 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_UsedNames_0_3,
#line 709 "varset.m"
  MR_Word mercury__varset__OldVarNames_4,
#line 709 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_VarNames_0_5,
#line 709 "varset.m"
  MR_Word * mercury__varset__STATE_VARIABLE_VarNames_6)
#line 709 "varset.m"
{
#line 713 "varset.m"
  while (MR_TRUE)
#line 713 "varset.m"
    {
#line 713 "varset.m"
      /* tailcall optimized into a loop */
#line 713 "varset.m"
      {
#line 713 "varset.m"
        MR_bool mercury__varset__succeeded;

#line 713 "varset.m"
        if ((mercury__varset__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 713 "varset.m"
          *mercury__varset__STATE_VARIABLE_VarNames_6 = mercury__varset__STATE_VARIABLE_VarNames_0_5;
#line 713 "varset.m"
        else
#line 715 "varset.m"
          {
#line 715 "varset.m"
            MR_Word mercury__varset__TypeCtorInfo_40_40;
#line 715 "varset.m"
            MR_Word mercury__varset__TypeCtorInfo_41_41;
#line 715 "varset.m"
            MR_Word mercury__varset__TypeInfo_42_42;
#line 715 "varset.m"
            MR_Word mercury__varset__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__varset__HeadVar__1_1, (MR_Integer) 0)));
#line 715 "varset.m"
            MR_Word mercury__varset__Vars_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__varset__HeadVar__1_1, (MR_Integer) 1)));
#line 715 "varset.m"
            MR_String mercury__varset__TrialName_21;
#line 715 "varset.m"
            MR_String mercury__varset__FinalName_22;
#line 715 "varset.m"
            MR_Word mercury__varset__STATE_VARIABLE_UsedNames_31_31;
#line 715 "varset.m"
            MR_Word mercury__varset__STATE_VARIABLE_VarNames_32_32;
#line 715 "varset.m"
            MR_Word mercury__varset__V_5_81;
#line 715 "varset.m"
            MR_Word mercury__varset__V_6_82;
#line 723 "varset.m"
            MR_String mercury__varset__OldName_19;
#line 716 "varset.m"
            MR_Word mercury__varset__TypeCtorInfo_36_36 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 716 "varset.m"
            MR_Word mercury__varset__TypeInfo_37_37;
#line 716 "varset.m"
            MR_Word mercury__varset__TypeCtorInfo_38_38 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 452 "map.opt"
            MR_Box mercury__varset__conv0_OldName_19;

#line 1176 "varset.c"
            {
#line 1178 "varset.c"
              mercury__varset__TypeInfo_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1180 "varset.c"
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_37_37, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_36_36));
#line 1182 "varset.c"
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_37_37, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_35));
#line 1184 "varset.c"
            }
#line 452 "map.opt"
            {
#line 452 "map.opt"
              mercury__varset__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__varset__TypeInfo_for_T_35, mercury__varset__TypeInfo_37_37, mercury__varset__TypeCtorInfo_38_38, mercury__varset__OldVarNames_4, mercury__varset__Var_13, &mercury__varset__conv0_OldName_19);
            }
#line 452 "map.opt"
            if (mercury__varset__succeeded)
#line 452 "map.opt"
              {
#line 452 "map.opt"
                mercury__varset__OldName_19 = ((MR_String) mercury__varset__conv0_OldName_19);
#line 452 "map.opt"
                mercury__varset__succeeded = MR_TRUE;
#line 452 "map.opt"
              }
#line 723 "varset.m"
            if (mercury__varset__succeeded)
#line 720 "varset.m"
              {
#line 717 "varset.m"
                MR_Word mercury__varset__TypeCtorInfo_39_39 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;

#line 717 "varset.m"
                {
#line 717 "varset.m"
                  mercury__varset__succeeded = mercury__set__member_2_p_0(mercury__varset__TypeCtorInfo_39_39, ((MR_Box) (mercury__varset__OldName_19)), mercury__varset__STATE_VARIABLE_UsedNames_0_3);
                }
#line 720 "varset.m"
                if (mercury__varset__succeeded)
#line 718 "varset.m"
                  {
#line 718 "varset.m"
                    MR_Integer mercury__varset__VarNum_20 = (MR_Integer) mercury__varset__Var_13;
#line 718 "varset.m"
                    MR_String mercury__varset__V_26_26;
#line 718 "varset.m"
                    MR_String mercury__varset__V_28_28;

#line 554 "string.opt"
                    {
#line 554 "string.opt"
                      mercury__string__int_to_base_string_3_p_0(mercury__varset__VarNum_20, (MR_Integer) 10, &mercury__varset__V_28_28);
                    }
#line 159 "string.opt"
                    {
#line 159 "string.opt"
                      mercury__string__append_3_p_2((MR_String) "_", mercury__varset__V_28_28, &mercury__varset__V_26_26);
                    }
#line 159 "string.opt"
                    {
#line 159 "string.opt"
                      mercury__string__append_3_p_2(mercury__varset__OldName_19, mercury__varset__V_26_26, &mercury__varset__TrialName_21);
                    }
#line 718 "varset.m"
                  }
#line 720 "varset.m"
                else
#line 721 "varset.m"
                  mercury__varset__TrialName_21 = mercury__varset__OldName_19;
#line 720 "varset.m"
              }
#line 723 "varset.m"
            else
#line 724 "varset.m"
              {
#line 724 "varset.m"
                MR_String mercury__varset__V_30_30;
#line 724 "varset.m"
                MR_Integer mercury__varset__VarNum_34 = (MR_Integer) mercury__varset__Var_13;

#line 554 "string.opt"
                {
#line 554 "string.opt"
                  mercury__string__int_to_base_string_3_p_0(mercury__varset__VarNum_34, (MR_Integer) 10, &mercury__varset__V_30_30);
                }
#line 159 "string.opt"
                {
#line 159 "string.opt"
                  mercury__string__append_3_p_2((MR_String) "Var_", mercury__varset__V_30_30, &mercury__varset__TrialName_21);
                }
#line 724 "varset.m"
              }
#line 727 "varset.m"
            {
#line 727 "varset.m"
              mercury__varset__append_suffix_until_unique_4_p_0(mercury__varset__TrialName_21, mercury__varset__Suffix_2, mercury__varset__STATE_VARIABLE_UsedNames_0_3, &mercury__varset__FinalName_22);
            }
#line 1273 "varset.c"
            mercury__varset__TypeCtorInfo_40_40 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 175 "set_ordlist.opt"
            mercury__varset__V_5_81 = (MR_Word) mercury__varset__STATE_VARIABLE_UsedNames_0_3;
#line 176 "set_ordlist.opt"
            {
#line 176 "set_ordlist.opt"
              mercury__set_ordlist__insert_loop_3_p_0(mercury__varset__TypeCtorInfo_40_40, mercury__varset__V_5_81, ((MR_Box) (mercury__varset__FinalName_22)), &mercury__varset__V_6_82);
            }
#line 175 "set_ordlist.opt"
            mercury__varset__STATE_VARIABLE_UsedNames_31_31 = (MR_Word) mercury__varset__V_6_82;
#line 1284 "varset.c"
            mercury__varset__TypeCtorInfo_41_41 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 1286 "varset.c"
            {
#line 1288 "varset.c"
              mercury__varset__TypeInfo_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1290 "varset.c"
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_42_42, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_41_41));
#line 1292 "varset.c"
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_42_42, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_35));
#line 1294 "varset.c"
            }
#line 729 "varset.m"
            {
#line 729 "varset.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__varset__TypeInfo_for_T_35, mercury__varset__TypeInfo_42_42, mercury__varset__TypeCtorInfo_40_40, mercury__varset__Var_13, ((MR_Box) (mercury__varset__FinalName_22)), mercury__varset__STATE_VARIABLE_VarNames_0_5, &mercury__varset__STATE_VARIABLE_VarNames_32_32);
            }
#line 730 "varset.m"
            /* direct tailcall eliminated */
#line 730 "varset.m"
            {
#line 730 "varset.m"
              MR_Word mercury__varset__HeadVar__1__tmp_copy_1 = mercury__varset__Vars_14;
#line 730 "varset.m"
              MR_Word mercury__varset__STATE_VARIABLE_UsedNames_0__tmp_copy_3 = mercury__varset__STATE_VARIABLE_UsedNames_31_31;
#line 730 "varset.m"
              MR_Word mercury__varset__STATE_VARIABLE_VarNames_0__tmp_copy_5 = mercury__varset__STATE_VARIABLE_VarNames_32_32;

#line 730 "varset.m"
              mercury__varset__STATE_VARIABLE_VarNames_0_5 = mercury__varset__STATE_VARIABLE_VarNames_0__tmp_copy_5;
#line 730 "varset.m"
              mercury__varset__STATE_VARIABLE_UsedNames_0_3 = mercury__varset__STATE_VARIABLE_UsedNames_0__tmp_copy_3;
#line 730 "varset.m"
              mercury__varset__HeadVar__1_1 = mercury__varset__HeadVar__1__tmp_copy_1;
#line 730 "varset.m"
            }
#line 730 "varset.m"
            continue;
#line 715 "varset.m"
          }
#line 713 "varset.m"
      }
#line 713 "varset.m"
      break;
#line 713 "varset.m"
    }
#line 709 "varset.m"
}

#line 651 "varset.m"
void MR_CALL 
mercury__varset__merge_subst_without_names_loop_6_p_0(
#line 651 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_26,
#line 651 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_SupplyB_0_14,
#line 651 "varset.m"
  MR_Word mercury__varset__MaxSupplyB_8,
#line 651 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_Supply_0_15,
#line 651 "varset.m"
  MR_Word * mercury__varset__STATE_VARIABLE_Supply_16,
#line 651 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_Subst_0_17,
#line 651 "varset.m"
  MR_Word * mercury__varset__STATE_VARIABLE_Subst_18)
#line 651 "varset.m"
{
#line 659 "varset.m"
  while (MR_TRUE)
#line 659 "varset.m"
    {
#line 659 "varset.m"
      /* tailcall optimized into a loop */
#line 659 "varset.m"
      {
#line 659 "varset.m"
        MR_bool mercury__varset__succeeded;
#line 657 "varset.m"
        MR_Integer mercury__varset__V_33_33 = (MR_Integer) mercury__varset__STATE_VARIABLE_SupplyB_0_14;
#line 657 "varset.m"
        MR_Integer mercury__varset__V_34_34 = (MR_Integer) mercury__varset__MaxSupplyB_8;

#line 657 "varset.m"
        mercury__varset__succeeded = (mercury__varset__V_33_33 == mercury__varset__V_34_34);
#line 659 "varset.m"
        if (mercury__varset__succeeded)
#line 658 "varset.m"
          {
#line 658 "varset.m"
            *mercury__varset__STATE_VARIABLE_Subst_18 = mercury__varset__STATE_VARIABLE_Subst_0_17;
#line 658 "varset.m"
            *mercury__varset__STATE_VARIABLE_Supply_16 = mercury__varset__STATE_VARIABLE_Supply_0_15;
#line 658 "varset.m"
          }
#line 659 "varset.m"
        else
#line 660 "varset.m"
          {
#line 660 "varset.m"
            MR_Word mercury__varset__TypeCtorInfo_27_27;
#line 660 "varset.m"
            MR_Word mercury__varset__TypeInfo_28_28;
#line 660 "varset.m"
            MR_Word mercury__varset__TypeCtorInfo_29_29;
#line 660 "varset.m"
            MR_Word mercury__varset__TypeInfo_30_30;
#line 660 "varset.m"
            MR_Word mercury__varset__Var_11;
#line 660 "varset.m"
            MR_Word mercury__varset__VarB_12;
#line 660 "varset.m"
            MR_Word mercury__varset__Replacement_13;
#line 660 "varset.m"
            MR_Word mercury__varset__STATE_VARIABLE_Supply_19_19;
#line 660 "varset.m"
            MR_Word mercury__varset__V_21_21;
#line 660 "varset.m"
            MR_Word mercury__varset__STATE_VARIABLE_Subst_22_22;
#line 660 "varset.m"
            MR_Word mercury__varset__STATE_VARIABLE_SupplyB_20_25;
#line 660 "varset.m"
            MR_Integer mercury__varset__V_4_35;
#line 660 "varset.m"
            MR_Integer mercury__varset__V_5_36 = (MR_Integer) mercury__varset__STATE_VARIABLE_Supply_0_15;
#line 660 "varset.m"
            MR_Integer mercury__varset__V_4_38;
#line 660 "varset.m"
            MR_Integer mercury__varset__V_5_39;
#line 663 "varset.m"
            MR_Word mercury__varset__conv0_STATE_VARIABLE_Subst_22_22;

#line 132 "term.opt"
            mercury__varset__V_4_35 = (mercury__varset__V_5_36 + (MR_Integer) 1);
#line 131 "term.opt"
            mercury__varset__Var_11 = (MR_Word) mercury__varset__V_4_35;
#line 131 "term.opt"
            mercury__varset__STATE_VARIABLE_Supply_19_19 = (MR_Word) mercury__varset__V_4_35;
#line 131 "term.opt"
            mercury__varset__V_5_39 = (MR_Integer) mercury__varset__STATE_VARIABLE_SupplyB_0_14;
#line 132 "term.opt"
            mercury__varset__V_4_38 = (mercury__varset__V_5_39 + (MR_Integer) 1);
#line 131 "term.opt"
            mercury__varset__VarB_12 = (MR_Word) mercury__varset__V_4_38;
#line 131 "term.opt"
            mercury__varset__STATE_VARIABLE_SupplyB_20_25 = (MR_Word) mercury__varset__V_4_38;
#line 119 "term.opt"
            mercury__varset__V_21_21 = (MR_Word) &mercury__varset_scalar_common_1[1];
#line 662 "varset.m"
            {
#line 662 "varset.m"
              mercury__varset__Replacement_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 662 "varset.m"
              MR_hl_field(MR_mktag(1), mercury__varset__Replacement_13, 0) = ((MR_Box) (mercury__varset__Var_11));
#line 662 "varset.m"
              MR_hl_field(MR_mktag(1), mercury__varset__Replacement_13, 1) = ((MR_Box) (mercury__varset__V_21_21));
#line 662 "varset.m"
            }
#line 1442 "varset.c"
            mercury__varset__TypeCtorInfo_27_27 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 1444 "varset.c"
            {
#line 1446 "varset.c"
              mercury__varset__TypeInfo_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1448 "varset.c"
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_28_28, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_27_27));
#line 1450 "varset.c"
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_28_28, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_26));
#line 1452 "varset.c"
            }
#line 1454 "varset.c"
            mercury__varset__TypeCtorInfo_29_29 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 1456 "varset.c"
            {
#line 1458 "varset.c"
              mercury__varset__TypeInfo_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1460 "varset.c"
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_30_30, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_29_29));
#line 1462 "varset.c"
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_30_30, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_26));
#line 1464 "varset.c"
            }
#line 663 "varset.m"
            {
#line 663 "varset.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__varset__TypeInfo_for_T_26, mercury__varset__TypeInfo_28_28, mercury__varset__TypeInfo_30_30, mercury__varset__VarB_12, ((MR_Box) (mercury__varset__Replacement_13)), (MR_Word) mercury__varset__STATE_VARIABLE_Subst_0_17, &mercury__varset__conv0_STATE_VARIABLE_Subst_22_22);
            }
#line 663 "varset.m"
            mercury__varset__STATE_VARIABLE_Subst_22_22 = (MR_Word) mercury__varset__conv0_STATE_VARIABLE_Subst_22_22;
#line 664 "varset.m"
            /* direct tailcall eliminated */
#line 664 "varset.m"
            {
#line 664 "varset.m"
              MR_Word mercury__varset__STATE_VARIABLE_SupplyB_0__tmp_copy_14 = mercury__varset__STATE_VARIABLE_SupplyB_20_25;
#line 664 "varset.m"
              MR_Word mercury__varset__STATE_VARIABLE_Supply_0__tmp_copy_15 = mercury__varset__STATE_VARIABLE_Supply_19_19;
#line 664 "varset.m"
              MR_Word mercury__varset__STATE_VARIABLE_Subst_0__tmp_copy_17 = mercury__varset__STATE_VARIABLE_Subst_22_22;

#line 664 "varset.m"
              mercury__varset__STATE_VARIABLE_Subst_0_17 = mercury__varset__STATE_VARIABLE_Subst_0__tmp_copy_17;
#line 664 "varset.m"
              mercury__varset__STATE_VARIABLE_Supply_0_15 = mercury__varset__STATE_VARIABLE_Supply_0__tmp_copy_15;
#line 664 "varset.m"
              mercury__varset__STATE_VARIABLE_SupplyB_0_14 = mercury__varset__STATE_VARIABLE_SupplyB_0__tmp_copy_14;
#line 664 "varset.m"
            }
#line 664 "varset.m"
            continue;
#line 660 "varset.m"
          }
#line 659 "varset.m"
      }
#line 659 "varset.m"
      break;
#line 659 "varset.m"
    }
#line 651 "varset.m"
}

#line 618 "varset.m"
void MR_CALL 
mercury__varset__merge_subst_loop_9_p_0(
#line 618 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_36,
#line 618 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_SupplyB_0_20,
#line 618 "varset.m"
  MR_Word mercury__varset__MaxSupplyB_11,
#line 618 "varset.m"
  MR_Word mercury__varset__NamesB_12,
#line 618 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_Supply_0_21,
#line 618 "varset.m"
  MR_Word * mercury__varset__STATE_VARIABLE_Supply_22,
#line 618 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_Names_0_23,
#line 618 "varset.m"
  MR_Word * mercury__varset__STATE_VARIABLE_Names_24,
#line 618 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_Subst_0_25,
#line 618 "varset.m"
  MR_Word * mercury__varset__STATE_VARIABLE_Subst_26)
#line 618 "varset.m"
{
#line 628 "varset.m"
  while (MR_TRUE)
#line 628 "varset.m"
    {
#line 628 "varset.m"
      /* tailcall optimized into a loop */
#line 628 "varset.m"
      {
#line 628 "varset.m"
        MR_bool mercury__varset__succeeded;
#line 626 "varset.m"
        MR_Integer mercury__varset__V_49_49 = (MR_Integer) mercury__varset__STATE_VARIABLE_SupplyB_0_20;
#line 626 "varset.m"
        MR_Integer mercury__varset__V_50_50 = (MR_Integer) mercury__varset__MaxSupplyB_11;

#line 626 "varset.m"
        mercury__varset__succeeded = (mercury__varset__V_49_49 == mercury__varset__V_50_50);
#line 628 "varset.m"
        if (mercury__varset__succeeded)
#line 627 "varset.m"
          {
#line 627 "varset.m"
            *mercury__varset__STATE_VARIABLE_Subst_26 = mercury__varset__STATE_VARIABLE_Subst_0_25;
#line 627 "varset.m"
            *mercury__varset__STATE_VARIABLE_Names_24 = mercury__varset__STATE_VARIABLE_Names_0_23;
#line 627 "varset.m"
            *mercury__varset__STATE_VARIABLE_Supply_22 = mercury__varset__STATE_VARIABLE_Supply_0_21;
#line 627 "varset.m"
          }
#line 628 "varset.m"
        else
#line 629 "varset.m"
          {
#line 629 "varset.m"
            MR_Word mercury__varset__TypeCtorInfo_43_43;
#line 629 "varset.m"
            MR_Word mercury__varset__TypeInfo_44_44;
#line 629 "varset.m"
            MR_Word mercury__varset__TypeCtorInfo_45_45;
#line 629 "varset.m"
            MR_Word mercury__varset__TypeInfo_46_46;
#line 629 "varset.m"
            MR_Word mercury__varset__Var_16;
#line 629 "varset.m"
            MR_Word mercury__varset__VarB_17;
#line 629 "varset.m"
            MR_Word mercury__varset__Replacement_19;
#line 629 "varset.m"
            MR_Word mercury__varset__STATE_VARIABLE_Supply_27_27;
#line 629 "varset.m"
            MR_Word mercury__varset__STATE_VARIABLE_Names_29_29;
#line 629 "varset.m"
            MR_Word mercury__varset__V_30_30;
#line 629 "varset.m"
            MR_Word mercury__varset__STATE_VARIABLE_Subst_31_31;
#line 629 "varset.m"
            MR_Word mercury__varset__STATE_VARIABLE_SupplyB_28_35;
#line 629 "varset.m"
            MR_Integer mercury__varset__V_4_51;
#line 629 "varset.m"
            MR_Integer mercury__varset__V_5_52 = (MR_Integer) mercury__varset__STATE_VARIABLE_Supply_0_21;
#line 629 "varset.m"
            MR_Integer mercury__varset__V_4_54;
#line 629 "varset.m"
            MR_Integer mercury__varset__V_5_55;
#line 633 "varset.m"
            MR_Word mercury__varset__TypeInfo_38_38;
#line 633 "varset.m"
            MR_String mercury__varset__NameB_18;
#line 631 "varset.m"
            MR_Word mercury__varset__TypeCtorInfo_37_37;
#line 631 "varset.m"
            MR_Word mercury__varset__TypeCtorInfo_39_39;
#line 452 "map.opt"
            MR_Box mercury__varset__conv0_NameB_18;
#line 637 "varset.m"
            MR_Word mercury__varset__conv1_STATE_VARIABLE_Subst_31_31;

#line 132 "term.opt"
            mercury__varset__V_4_51 = (mercury__varset__V_5_52 + (MR_Integer) 1);
#line 131 "term.opt"
            mercury__varset__Var_16 = (MR_Word) mercury__varset__V_4_51;
#line 131 "term.opt"
            mercury__varset__STATE_VARIABLE_Supply_27_27 = (MR_Word) mercury__varset__V_4_51;
#line 131 "term.opt"
            mercury__varset__V_5_55 = (MR_Integer) mercury__varset__STATE_VARIABLE_SupplyB_0_20;
#line 132 "term.opt"
            mercury__varset__V_4_54 = (mercury__varset__V_5_55 + (MR_Integer) 1);
#line 131 "term.opt"
            mercury__varset__VarB_17 = (MR_Word) mercury__varset__V_4_54;
#line 131 "term.opt"
            mercury__varset__STATE_VARIABLE_SupplyB_28_35 = (MR_Word) mercury__varset__V_4_54;
#line 1622 "varset.c"
            mercury__varset__TypeCtorInfo_37_37 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 1624 "varset.c"
            mercury__varset__TypeCtorInfo_39_39 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1626 "varset.c"
            {
#line 1628 "varset.c"
              mercury__varset__TypeInfo_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1630 "varset.c"
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_38_38, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_37_37));
#line 1632 "varset.c"
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_38_38, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_36));
#line 1634 "varset.c"
            }
#line 452 "map.opt"
            {
#line 452 "map.opt"
              mercury__varset__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__varset__TypeInfo_for_T_36, mercury__varset__TypeInfo_38_38, mercury__varset__TypeCtorInfo_39_39, mercury__varset__NamesB_12, mercury__varset__VarB_17, &mercury__varset__conv0_NameB_18);
            }
#line 452 "map.opt"
            if (mercury__varset__succeeded)
#line 452 "map.opt"
              {
#line 452 "map.opt"
                mercury__varset__NameB_18 = ((MR_String) mercury__varset__conv0_NameB_18);
#line 452 "map.opt"
                mercury__varset__succeeded = MR_TRUE;
#line 452 "map.opt"
              }
#line 633 "varset.m"
            if (mercury__varset__succeeded)
#line 632 "varset.m"
              {
#line 632 "varset.m"
                MR_Word mercury__varset__TypeCtorInfo_42_42 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;

#line 632 "varset.m"
                {
#line 632 "varset.m"
                  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__varset__TypeInfo_for_T_36, mercury__varset__TypeInfo_38_38, mercury__varset__TypeCtorInfo_42_42, mercury__varset__Var_16, ((MR_Box) (mercury__varset__NameB_18)), mercury__varset__STATE_VARIABLE_Names_0_23, &mercury__varset__STATE_VARIABLE_Names_29_29);
                }
#line 632 "varset.m"
              }
#line 633 "varset.m"
            else
#line 633 "varset.m"
              mercury__varset__STATE_VARIABLE_Names_29_29 = mercury__varset__STATE_VARIABLE_Names_0_23;
#line 119 "term.opt"
            mercury__varset__V_30_30 = (MR_Word) &mercury__varset_scalar_common_1[1];
#line 636 "varset.m"
            {
#line 636 "varset.m"
              mercury__varset__Replacement_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 636 "varset.m"
              MR_hl_field(MR_mktag(1), mercury__varset__Replacement_19, 0) = ((MR_Box) (mercury__varset__Var_16));
#line 636 "varset.m"
              MR_hl_field(MR_mktag(1), mercury__varset__Replacement_19, 1) = ((MR_Box) (mercury__varset__V_30_30));
#line 636 "varset.m"
            }
#line 1681 "varset.c"
            mercury__varset__TypeCtorInfo_43_43 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 1683 "varset.c"
            {
#line 1685 "varset.c"
              mercury__varset__TypeInfo_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1687 "varset.c"
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_44_44, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_43_43));
#line 1689 "varset.c"
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_44_44, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_36));
#line 1691 "varset.c"
            }
#line 1693 "varset.c"
            mercury__varset__TypeCtorInfo_45_45 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 1695 "varset.c"
            {
#line 1697 "varset.c"
              mercury__varset__TypeInfo_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1699 "varset.c"
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_46_46, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_45_45));
#line 1701 "varset.c"
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_46_46, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_36));
#line 1703 "varset.c"
            }
#line 637 "varset.m"
            {
#line 637 "varset.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__varset__TypeInfo_for_T_36, mercury__varset__TypeInfo_44_44, mercury__varset__TypeInfo_46_46, mercury__varset__VarB_17, ((MR_Box) (mercury__varset__Replacement_19)), (MR_Word) mercury__varset__STATE_VARIABLE_Subst_0_25, &mercury__varset__conv1_STATE_VARIABLE_Subst_31_31);
            }
#line 637 "varset.m"
            mercury__varset__STATE_VARIABLE_Subst_31_31 = (MR_Word) mercury__varset__conv1_STATE_VARIABLE_Subst_31_31;
#line 638 "varset.m"
            /* direct tailcall eliminated */
#line 638 "varset.m"
            {
#line 638 "varset.m"
              MR_Word mercury__varset__STATE_VARIABLE_SupplyB_0__tmp_copy_20 = mercury__varset__STATE_VARIABLE_SupplyB_28_35;
#line 638 "varset.m"
              MR_Word mercury__varset__STATE_VARIABLE_Supply_0__tmp_copy_21 = mercury__varset__STATE_VARIABLE_Supply_27_27;
#line 638 "varset.m"
              MR_Word mercury__varset__STATE_VARIABLE_Names_0__tmp_copy_23 = mercury__varset__STATE_VARIABLE_Names_29_29;
#line 638 "varset.m"
              MR_Word mercury__varset__STATE_VARIABLE_Subst_0__tmp_copy_25 = mercury__varset__STATE_VARIABLE_Subst_31_31;

#line 638 "varset.m"
              mercury__varset__STATE_VARIABLE_Subst_0_25 = mercury__varset__STATE_VARIABLE_Subst_0__tmp_copy_25;
#line 638 "varset.m"
              mercury__varset__STATE_VARIABLE_Names_0_23 = mercury__varset__STATE_VARIABLE_Names_0__tmp_copy_23;
#line 638 "varset.m"
              mercury__varset__STATE_VARIABLE_Supply_0_21 = mercury__varset__STATE_VARIABLE_Supply_0__tmp_copy_21;
#line 638 "varset.m"
              mercury__varset__STATE_VARIABLE_SupplyB_0_20 = mercury__varset__STATE_VARIABLE_SupplyB_0__tmp_copy_20;
#line 638 "varset.m"
            }
#line 638 "varset.m"
            continue;
#line 629 "varset.m"
          }
#line 628 "varset.m"
      }
#line 628 "varset.m"
      break;
#line 628 "varset.m"
    }
#line 618 "varset.m"
}

#line 588 "varset.m"
void MR_CALL 
mercury__varset__merge_renaming_without_names_loop_6_p_0(
#line 588 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_24,
#line 588 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_SupplyB_0_13,
#line 588 "varset.m"
  MR_Word mercury__varset__MaxSupplyB_8,
#line 588 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_Supply_0_14,
#line 588 "varset.m"
  MR_Word * mercury__varset__STATE_VARIABLE_Supply_15,
#line 588 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_Renaming_0_16,
#line 588 "varset.m"
  MR_Word * mercury__varset__STATE_VARIABLE_Renaming_17)
#line 588 "varset.m"
{
#line 596 "varset.m"
  while (MR_TRUE)
#line 596 "varset.m"
    {
#line 596 "varset.m"
      /* tailcall optimized into a loop */
#line 596 "varset.m"
      {
#line 596 "varset.m"
        MR_bool mercury__varset__succeeded;
#line 594 "varset.m"
        MR_Integer mercury__varset__V_29_29 = (MR_Integer) mercury__varset__STATE_VARIABLE_SupplyB_0_13;
#line 594 "varset.m"
        MR_Integer mercury__varset__V_30_30 = (MR_Integer) mercury__varset__MaxSupplyB_8;

#line 594 "varset.m"
        mercury__varset__succeeded = (mercury__varset__V_29_29 == mercury__varset__V_30_30);
#line 596 "varset.m"
        if (mercury__varset__succeeded)
#line 595 "varset.m"
          {
#line 595 "varset.m"
            *mercury__varset__STATE_VARIABLE_Renaming_17 = mercury__varset__STATE_VARIABLE_Renaming_0_16;
#line 595 "varset.m"
            *mercury__varset__STATE_VARIABLE_Supply_15 = mercury__varset__STATE_VARIABLE_Supply_0_14;
#line 595 "varset.m"
          }
#line 596 "varset.m"
        else
#line 597 "varset.m"
          {
#line 597 "varset.m"
            MR_Word mercury__varset__TypeCtorInfo_25_25;
#line 597 "varset.m"
            MR_Word mercury__varset__TypeInfo_26_26;
#line 597 "varset.m"
            MR_Word mercury__varset__Var_11;
#line 597 "varset.m"
            MR_Word mercury__varset__VarB_12;
#line 597 "varset.m"
            MR_Word mercury__varset__STATE_VARIABLE_Supply_18_18;
#line 597 "varset.m"
            MR_Word mercury__varset__STATE_VARIABLE_Renaming_20_20;
#line 597 "varset.m"
            MR_Word mercury__varset__STATE_VARIABLE_SupplyB_19_23;
#line 597 "varset.m"
            MR_Integer mercury__varset__V_4_31;
#line 597 "varset.m"
            MR_Integer mercury__varset__V_5_32 = (MR_Integer) mercury__varset__STATE_VARIABLE_Supply_0_14;
#line 597 "varset.m"
            MR_Integer mercury__varset__V_4_34;
#line 597 "varset.m"
            MR_Integer mercury__varset__V_5_35;
#line 599 "varset.m"
            MR_Word mercury__varset__conv0_STATE_VARIABLE_Renaming_20_20;

#line 132 "term.opt"
            mercury__varset__V_4_31 = (mercury__varset__V_5_32 + (MR_Integer) 1);
#line 131 "term.opt"
            mercury__varset__Var_11 = (MR_Word) mercury__varset__V_4_31;
#line 131 "term.opt"
            mercury__varset__STATE_VARIABLE_Supply_18_18 = (MR_Word) mercury__varset__V_4_31;
#line 131 "term.opt"
            mercury__varset__V_5_35 = (MR_Integer) mercury__varset__STATE_VARIABLE_SupplyB_0_13;
#line 132 "term.opt"
            mercury__varset__V_4_34 = (mercury__varset__V_5_35 + (MR_Integer) 1);
#line 131 "term.opt"
            mercury__varset__VarB_12 = (MR_Word) mercury__varset__V_4_34;
#line 131 "term.opt"
            mercury__varset__STATE_VARIABLE_SupplyB_19_23 = (MR_Word) mercury__varset__V_4_34;
#line 1837 "varset.c"
            mercury__varset__TypeCtorInfo_25_25 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 1839 "varset.c"
            {
#line 1841 "varset.c"
              mercury__varset__TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1843 "varset.c"
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_26_26, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_25_25));
#line 1845 "varset.c"
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_26_26, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_24));
#line 1847 "varset.c"
            }
#line 599 "varset.m"
            {
#line 599 "varset.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__varset__TypeInfo_for_T_24, mercury__varset__TypeInfo_26_26, mercury__varset__TypeInfo_26_26, mercury__varset__VarB_12, ((MR_Box) (mercury__varset__Var_11)), (MR_Word) mercury__varset__STATE_VARIABLE_Renaming_0_16, &mercury__varset__conv0_STATE_VARIABLE_Renaming_20_20);
            }
#line 599 "varset.m"
            mercury__varset__STATE_VARIABLE_Renaming_20_20 = (MR_Word) mercury__varset__conv0_STATE_VARIABLE_Renaming_20_20;
#line 600 "varset.m"
            /* direct tailcall eliminated */
#line 600 "varset.m"
            {
#line 600 "varset.m"
              MR_Word mercury__varset__STATE_VARIABLE_SupplyB_0__tmp_copy_13 = mercury__varset__STATE_VARIABLE_SupplyB_19_23;
#line 600 "varset.m"
              MR_Word mercury__varset__STATE_VARIABLE_Supply_0__tmp_copy_14 = mercury__varset__STATE_VARIABLE_Supply_18_18;
#line 600 "varset.m"
              MR_Word mercury__varset__STATE_VARIABLE_Renaming_0__tmp_copy_16 = mercury__varset__STATE_VARIABLE_Renaming_20_20;

#line 600 "varset.m"
              mercury__varset__STATE_VARIABLE_Renaming_0_16 = mercury__varset__STATE_VARIABLE_Renaming_0__tmp_copy_16;
#line 600 "varset.m"
              mercury__varset__STATE_VARIABLE_Supply_0_14 = mercury__varset__STATE_VARIABLE_Supply_0__tmp_copy_14;
#line 600 "varset.m"
              mercury__varset__STATE_VARIABLE_SupplyB_0_13 = mercury__varset__STATE_VARIABLE_SupplyB_0__tmp_copy_13;
#line 600 "varset.m"
            }
#line 600 "varset.m"
            continue;
#line 597 "varset.m"
          }
#line 596 "varset.m"
      }
#line 596 "varset.m"
      break;
#line 596 "varset.m"
    }
#line 588 "varset.m"
}

#line 556 "varset.m"
void MR_CALL 
mercury__varset__merge_renaming_loop_9_p_0(
#line 556 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_34,
#line 556 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_SupplyB_0_19,
#line 556 "varset.m"
  MR_Word mercury__varset__MaxSupplyB_11,
#line 556 "varset.m"
  MR_Word mercury__varset__NamesB_12,
#line 556 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_Supply_0_20,
#line 556 "varset.m"
  MR_Word * mercury__varset__STATE_VARIABLE_Supply_21,
#line 556 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_Names_0_22,
#line 556 "varset.m"
  MR_Word * mercury__varset__STATE_VARIABLE_Names_23,
#line 556 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_Renaming_0_24,
#line 556 "varset.m"
  MR_Word * mercury__varset__STATE_VARIABLE_Renaming_25)
#line 556 "varset.m"
{
#line 566 "varset.m"
  while (MR_TRUE)
#line 566 "varset.m"
    {
#line 566 "varset.m"
      /* tailcall optimized into a loop */
#line 566 "varset.m"
      {
#line 566 "varset.m"
        MR_bool mercury__varset__succeeded;
#line 564 "varset.m"
        MR_Integer mercury__varset__V_45_45 = (MR_Integer) mercury__varset__STATE_VARIABLE_SupplyB_0_19;
#line 564 "varset.m"
        MR_Integer mercury__varset__V_46_46 = (MR_Integer) mercury__varset__MaxSupplyB_11;

#line 564 "varset.m"
        mercury__varset__succeeded = (mercury__varset__V_45_45 == mercury__varset__V_46_46);
#line 566 "varset.m"
        if (mercury__varset__succeeded)
#line 565 "varset.m"
          {
#line 565 "varset.m"
            *mercury__varset__STATE_VARIABLE_Renaming_25 = mercury__varset__STATE_VARIABLE_Renaming_0_24;
#line 565 "varset.m"
            *mercury__varset__STATE_VARIABLE_Names_23 = mercury__varset__STATE_VARIABLE_Names_0_22;
#line 565 "varset.m"
            *mercury__varset__STATE_VARIABLE_Supply_21 = mercury__varset__STATE_VARIABLE_Supply_0_20;
#line 565 "varset.m"
          }
#line 566 "varset.m"
        else
#line 567 "varset.m"
          {
#line 567 "varset.m"
            MR_Word mercury__varset__TypeCtorInfo_41_41;
#line 567 "varset.m"
            MR_Word mercury__varset__TypeInfo_42_42;
#line 567 "varset.m"
            MR_Word mercury__varset__Var_16;
#line 567 "varset.m"
            MR_Word mercury__varset__VarB_17;
#line 567 "varset.m"
            MR_Word mercury__varset__STATE_VARIABLE_Supply_26_26;
#line 567 "varset.m"
            MR_Word mercury__varset__STATE_VARIABLE_Names_28_28;
#line 567 "varset.m"
            MR_Word mercury__varset__STATE_VARIABLE_Renaming_29_29;
#line 567 "varset.m"
            MR_Word mercury__varset__STATE_VARIABLE_SupplyB_27_33;
#line 567 "varset.m"
            MR_Integer mercury__varset__V_4_47;
#line 567 "varset.m"
            MR_Integer mercury__varset__V_5_48 = (MR_Integer) mercury__varset__STATE_VARIABLE_Supply_0_20;
#line 567 "varset.m"
            MR_Integer mercury__varset__V_4_50;
#line 567 "varset.m"
            MR_Integer mercury__varset__V_5_51;
#line 571 "varset.m"
            MR_Word mercury__varset__TypeInfo_36_36;
#line 571 "varset.m"
            MR_String mercury__varset__NameB_18;
#line 569 "varset.m"
            MR_Word mercury__varset__TypeCtorInfo_35_35;
#line 569 "varset.m"
            MR_Word mercury__varset__TypeCtorInfo_37_37;
#line 452 "map.opt"
            MR_Box mercury__varset__conv0_NameB_18;
#line 574 "varset.m"
            MR_Word mercury__varset__conv1_STATE_VARIABLE_Renaming_29_29;

#line 132 "term.opt"
            mercury__varset__V_4_47 = (mercury__varset__V_5_48 + (MR_Integer) 1);
#line 131 "term.opt"
            mercury__varset__Var_16 = (MR_Word) mercury__varset__V_4_47;
#line 131 "term.opt"
            mercury__varset__STATE_VARIABLE_Supply_26_26 = (MR_Word) mercury__varset__V_4_47;
#line 131 "term.opt"
            mercury__varset__V_5_51 = (MR_Integer) mercury__varset__STATE_VARIABLE_SupplyB_0_19;
#line 132 "term.opt"
            mercury__varset__V_4_50 = (mercury__varset__V_5_51 + (MR_Integer) 1);
#line 131 "term.opt"
            mercury__varset__VarB_17 = (MR_Word) mercury__varset__V_4_50;
#line 131 "term.opt"
            mercury__varset__STATE_VARIABLE_SupplyB_27_33 = (MR_Word) mercury__varset__V_4_50;
#line 1997 "varset.c"
            mercury__varset__TypeCtorInfo_35_35 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 1999 "varset.c"
            mercury__varset__TypeCtorInfo_37_37 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 2001 "varset.c"
            {
#line 2003 "varset.c"
              mercury__varset__TypeInfo_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2005 "varset.c"
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_36_36, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_35_35));
#line 2007 "varset.c"
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_36_36, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_34));
#line 2009 "varset.c"
            }
#line 452 "map.opt"
            {
#line 452 "map.opt"
              mercury__varset__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__varset__TypeInfo_for_T_34, mercury__varset__TypeInfo_36_36, mercury__varset__TypeCtorInfo_37_37, mercury__varset__NamesB_12, mercury__varset__VarB_17, &mercury__varset__conv0_NameB_18);
            }
#line 452 "map.opt"
            if (mercury__varset__succeeded)
#line 452 "map.opt"
              {
#line 452 "map.opt"
                mercury__varset__NameB_18 = ((MR_String) mercury__varset__conv0_NameB_18);
#line 452 "map.opt"
                mercury__varset__succeeded = MR_TRUE;
#line 452 "map.opt"
              }
#line 571 "varset.m"
            if (mercury__varset__succeeded)
#line 570 "varset.m"
              {
#line 570 "varset.m"
                MR_Word mercury__varset__TypeCtorInfo_40_40 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;

#line 570 "varset.m"
                {
#line 570 "varset.m"
                  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__varset__TypeInfo_for_T_34, mercury__varset__TypeInfo_36_36, mercury__varset__TypeCtorInfo_40_40, mercury__varset__Var_16, ((MR_Box) (mercury__varset__NameB_18)), mercury__varset__STATE_VARIABLE_Names_0_22, &mercury__varset__STATE_VARIABLE_Names_28_28);
                }
#line 570 "varset.m"
              }
#line 571 "varset.m"
            else
#line 571 "varset.m"
              mercury__varset__STATE_VARIABLE_Names_28_28 = mercury__varset__STATE_VARIABLE_Names_0_22;
#line 2044 "varset.c"
            mercury__varset__TypeCtorInfo_41_41 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 2046 "varset.c"
            {
#line 2048 "varset.c"
              mercury__varset__TypeInfo_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2050 "varset.c"
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_42_42, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_41_41));
#line 2052 "varset.c"
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_42_42, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_34));
#line 2054 "varset.c"
            }
#line 574 "varset.m"
            {
#line 574 "varset.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__varset__TypeInfo_for_T_34, mercury__varset__TypeInfo_42_42, mercury__varset__TypeInfo_42_42, mercury__varset__VarB_17, ((MR_Box) (mercury__varset__Var_16)), (MR_Word) mercury__varset__STATE_VARIABLE_Renaming_0_24, &mercury__varset__conv1_STATE_VARIABLE_Renaming_29_29);
            }
#line 574 "varset.m"
            mercury__varset__STATE_VARIABLE_Renaming_29_29 = (MR_Word) mercury__varset__conv1_STATE_VARIABLE_Renaming_29_29;
#line 575 "varset.m"
            /* direct tailcall eliminated */
#line 575 "varset.m"
            {
#line 575 "varset.m"
              MR_Word mercury__varset__STATE_VARIABLE_SupplyB_0__tmp_copy_19 = mercury__varset__STATE_VARIABLE_SupplyB_27_33;
#line 575 "varset.m"
              MR_Word mercury__varset__STATE_VARIABLE_Supply_0__tmp_copy_20 = mercury__varset__STATE_VARIABLE_Supply_26_26;
#line 575 "varset.m"
              MR_Word mercury__varset__STATE_VARIABLE_Names_0__tmp_copy_22 = mercury__varset__STATE_VARIABLE_Names_28_28;
#line 575 "varset.m"
              MR_Word mercury__varset__STATE_VARIABLE_Renaming_0__tmp_copy_24 = mercury__varset__STATE_VARIABLE_Renaming_29_29;

#line 575 "varset.m"
              mercury__varset__STATE_VARIABLE_Renaming_0_24 = mercury__varset__STATE_VARIABLE_Renaming_0__tmp_copy_24;
#line 575 "varset.m"
              mercury__varset__STATE_VARIABLE_Names_0_22 = mercury__varset__STATE_VARIABLE_Names_0__tmp_copy_22;
#line 575 "varset.m"
              mercury__varset__STATE_VARIABLE_Supply_0_20 = mercury__varset__STATE_VARIABLE_Supply_0__tmp_copy_20;
#line 575 "varset.m"
              mercury__varset__STATE_VARIABLE_SupplyB_0_19 = mercury__varset__STATE_VARIABLE_SupplyB_0__tmp_copy_19;
#line 575 "varset.m"
            }
#line 575 "varset.m"
            continue;
#line 567 "varset.m"
          }
#line 566 "varset.m"
      }
#line 566 "varset.m"
      break;
#line 566 "varset.m"
    }
#line 556 "varset.m"
}

#line 500 "varset.m"
void MR_CALL 
mercury__varset__bind_vars_loop_3_p_0(
#line 500 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_16,
#line 500 "varset.m"
  MR_Word mercury__varset__HeadVar__1_1,
#line 500 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_VarSet_0_2,
#line 500 "varset.m"
  MR_Word * mercury__varset__STATE_VARIABLE_VarSet_3)
#line 500 "varset.m"
{
#line 503 "varset.m"
  while (MR_TRUE)
#line 503 "varset.m"
    {
#line 503 "varset.m"
      /* tailcall optimized into a loop */
#line 503 "varset.m"
      {
#line 503 "varset.m"
        MR_bool mercury__varset__succeeded;

#line 503 "varset.m"
        if ((mercury__varset__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 503 "varset.m"
          *mercury__varset__STATE_VARIABLE_VarSet_3 = mercury__varset__STATE_VARIABLE_VarSet_0_2;
#line 503 "varset.m"
        else
#line 504 "varset.m"
          {
#line 504 "varset.m"
            MR_Word mercury__varset__Var_7;
#line 504 "varset.m"
            MR_Word mercury__varset__Value_8;
#line 504 "varset.m"
            MR_Word mercury__varset__VarsValues_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__varset__HeadVar__1_1, (MR_Integer) 1)));
#line 504 "varset.m"
            MR_Word mercury__varset__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__varset__HeadVar__1_1, (MR_Integer) 0)));
#line 504 "varset.m"
            MR_Word mercury__varset__STATE_VARIABLE_VarSet_14_14;

#line 504 "varset.m"
            mercury__varset__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__V_13_13, (MR_Integer) 0)));
#line 504 "varset.m"
            mercury__varset__Value_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__V_13_13, (MR_Integer) 1)));
#line 505 "varset.m"
            {
#line 505 "varset.m"
              mercury__varset__bind_var_4_p_0(mercury__varset__TypeInfo_for_T_16, mercury__varset__Var_7, mercury__varset__Value_8, mercury__varset__STATE_VARIABLE_VarSet_0_2, &mercury__varset__STATE_VARIABLE_VarSet_14_14);
            }
#line 506 "varset.m"
            /* direct tailcall eliminated */
#line 506 "varset.m"
            {
#line 506 "varset.m"
              MR_Word mercury__varset__HeadVar__1__tmp_copy_1 = mercury__varset__VarsValues_9;
#line 506 "varset.m"
              MR_Word mercury__varset__STATE_VARIABLE_VarSet_0__tmp_copy_2 = mercury__varset__STATE_VARIABLE_VarSet_14_14;

#line 506 "varset.m"
              mercury__varset__STATE_VARIABLE_VarSet_0_2 = mercury__varset__STATE_VARIABLE_VarSet_0__tmp_copy_2;
#line 506 "varset.m"
              mercury__varset__HeadVar__1_1 = mercury__varset__HeadVar__1__tmp_copy_1;
#line 506 "varset.m"
            }
#line 506 "varset.m"
            continue;
#line 504 "varset.m"
          }
#line 503 "varset.m"
      }
#line 503 "varset.m"
      break;
#line 503 "varset.m"
    }
#line 500 "varset.m"
}

#line 431 "varset.m"
void MR_CALL 
mercury__varset__vars_loop_4_p_0(
#line 431 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_14,
#line 431 "varset.m"
  MR_Word mercury__varset__Cur_5,
#line 431 "varset.m"
  MR_Word mercury__varset__Max_6,
#line 431 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_RevVars_0_10,
#line 431 "varset.m"
  MR_Word * mercury__varset__STATE_VARIABLE_RevVars_11)
#line 431 "varset.m"
{
#line 437 "varset.m"
  while (MR_TRUE)
#line 437 "varset.m"
    {
#line 437 "varset.m"
      /* tailcall optimized into a loop */
#line 437 "varset.m"
      {
#line 437 "varset.m"
        MR_bool mercury__varset__succeeded;
#line 435 "varset.m"
        MR_Integer mercury__varset__V_17_17 = (MR_Integer) mercury__varset__Cur_5;
#line 435 "varset.m"
        MR_Integer mercury__varset__V_18_18 = (MR_Integer) mercury__varset__Max_6;

#line 435 "varset.m"
        mercury__varset__succeeded = (mercury__varset__V_17_17 == mercury__varset__V_18_18);
#line 437 "varset.m"
        if (mercury__varset__succeeded)
#line 437 "varset.m"
          *mercury__varset__STATE_VARIABLE_RevVars_11 = mercury__varset__STATE_VARIABLE_RevVars_0_10;
#line 437 "varset.m"
        else
#line 438 "varset.m"
          {
#line 438 "varset.m"
            MR_Word mercury__varset__Var_8;
#line 438 "varset.m"
            MR_Word mercury__varset__Next_9;
#line 438 "varset.m"
            MR_Word mercury__varset__STATE_VARIABLE_RevVars_12_12;
#line 438 "varset.m"
            MR_Integer mercury__varset__V_4_19;
#line 438 "varset.m"
            MR_Integer mercury__varset__V_5_20 = (MR_Integer) mercury__varset__Cur_5;

#line 132 "term.opt"
            mercury__varset__V_4_19 = (mercury__varset__V_5_20 + (MR_Integer) 1);
#line 131 "term.opt"
            mercury__varset__Var_8 = (MR_Word) mercury__varset__V_4_19;
#line 131 "term.opt"
            mercury__varset__Next_9 = (MR_Word) mercury__varset__V_4_19;
#line 439 "varset.m"
            {
#line 439 "varset.m"
              mercury__varset__STATE_VARIABLE_RevVars_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 439 "varset.m"
              MR_hl_field(MR_mktag(1), mercury__varset__STATE_VARIABLE_RevVars_12_12, 0) = ((MR_Box) (mercury__varset__Var_8));
#line 439 "varset.m"
              MR_hl_field(MR_mktag(1), mercury__varset__STATE_VARIABLE_RevVars_12_12, 1) = ((MR_Box) (mercury__varset__STATE_VARIABLE_RevVars_0_10));
#line 439 "varset.m"
            }
#line 440 "varset.m"
            /* direct tailcall eliminated */
#line 440 "varset.m"
            {
#line 440 "varset.m"
              MR_Word mercury__varset__Cur__tmp_copy_5 = mercury__varset__Next_9;
#line 440 "varset.m"
              MR_Word mercury__varset__STATE_VARIABLE_RevVars_0__tmp_copy_10 = mercury__varset__STATE_VARIABLE_RevVars_12_12;

#line 440 "varset.m"
              mercury__varset__STATE_VARIABLE_RevVars_0_10 = mercury__varset__STATE_VARIABLE_RevVars_0__tmp_copy_10;
#line 440 "varset.m"
              mercury__varset__Cur_5 = mercury__varset__Cur__tmp_copy_5;
#line 440 "varset.m"
            }
#line 440 "varset.m"
            continue;
#line 438 "varset.m"
          }
#line 437 "varset.m"
      }
#line 437 "varset.m"
      break;
#line 437 "varset.m"
    }
#line 431 "varset.m"
}

#line 375 "varset.m"
void MR_CALL 
mercury__varset__new_vars_loop_5_p_0(
#line 375 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_24,
#line 375 "varset.m"
  MR_Integer mercury__varset__NumVars_6,
#line 375 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_RevNewVars_0_10,
#line 375 "varset.m"
  MR_Word * mercury__varset__STATE_VARIABLE_RevNewVars_11,
#line 375 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_VarSet_0_12,
#line 375 "varset.m"
  MR_Word * mercury__varset__STATE_VARIABLE_VarSet_13)
#line 375 "varset.m"
{
#line 383 "varset.m"
  while (MR_TRUE)
#line 383 "varset.m"
    {
#line 383 "varset.m"
      /* tailcall optimized into a loop */
#line 383 "varset.m"
      {
#line 383 "varset.m"
        MR_bool mercury__varset__succeeded = (mercury__varset__NumVars_6 > (MR_Integer) 0);

#line 383 "varset.m"
        if (mercury__varset__succeeded)
#line 380 "varset.m"
          {
#line 380 "varset.m"
            MR_Word mercury__varset__Var_9;
#line 380 "varset.m"
            MR_Word mercury__varset__STATE_VARIABLE_VarSet_15_15;
#line 380 "varset.m"
            MR_Word mercury__varset__STATE_VARIABLE_RevNewVars_16_16;
#line 380 "varset.m"
            MR_Integer mercury__varset__V_17_17;
#line 380 "varset.m"
            MR_Word mercury__varset__MaxId0_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_12, (MR_Integer) 0)));
#line 380 "varset.m"
            MR_Word mercury__varset__MaxId_30;
#line 380 "varset.m"
            MR_Word mercury__varset__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_12, (MR_Integer) 1)));
#line 380 "varset.m"
            MR_Word mercury__varset__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_12, (MR_Integer) 2)));
#line 380 "varset.m"
            MR_Integer mercury__varset__V_4_37;
#line 380 "varset.m"
            MR_Integer mercury__varset__V_5_38 = (MR_Integer) mercury__varset__MaxId0_29;

#line 132 "term.opt"
            mercury__varset__V_4_37 = (mercury__varset__V_5_38 + (MR_Integer) 1);
#line 131 "term.opt"
            mercury__varset__Var_9 = (MR_Word) mercury__varset__V_4_37;
#line 131 "term.opt"
            mercury__varset__MaxId_30 = (MR_Word) mercury__varset__V_4_37;
#line 343 "varset.m"
            {
#line 343 "varset.m"
              mercury__varset__STATE_VARIABLE_VarSet_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 343 "varset.m"
              MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_15_15, 0) = ((MR_Box) (mercury__varset__MaxId_30));
#line 343 "varset.m"
              MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_15_15, 1) = ((MR_Box) (mercury__varset__V_32_32));
#line 343 "varset.m"
              MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_15_15, 2) = ((MR_Box) (mercury__varset__V_33_33));
#line 343 "varset.m"
            }
#line 381 "varset.m"
            {
#line 381 "varset.m"
              mercury__varset__STATE_VARIABLE_RevNewVars_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 381 "varset.m"
              MR_hl_field(MR_mktag(1), mercury__varset__STATE_VARIABLE_RevNewVars_16_16, 0) = ((MR_Box) (mercury__varset__Var_9));
#line 381 "varset.m"
              MR_hl_field(MR_mktag(1), mercury__varset__STATE_VARIABLE_RevNewVars_16_16, 1) = ((MR_Box) (mercury__varset__STATE_VARIABLE_RevNewVars_0_10));
#line 381 "varset.m"
            }
#line 382 "varset.m"
            mercury__varset__V_17_17 = (mercury__varset__NumVars_6 - (MR_Integer) 1);
#line 382 "varset.m"
            /* direct tailcall eliminated */
#line 382 "varset.m"
            {
#line 382 "varset.m"
              MR_Integer mercury__varset__NumVars__tmp_copy_6 = mercury__varset__V_17_17;
#line 382 "varset.m"
              MR_Word mercury__varset__STATE_VARIABLE_RevNewVars_0__tmp_copy_10 = mercury__varset__STATE_VARIABLE_RevNewVars_16_16;
#line 382 "varset.m"
              MR_Word mercury__varset__STATE_VARIABLE_VarSet_0__tmp_copy_12 = mercury__varset__STATE_VARIABLE_VarSet_15_15;

#line 382 "varset.m"
              mercury__varset__STATE_VARIABLE_VarSet_0_12 = mercury__varset__STATE_VARIABLE_VarSet_0__tmp_copy_12;
#line 382 "varset.m"
              mercury__varset__STATE_VARIABLE_RevNewVars_0_10 = mercury__varset__STATE_VARIABLE_RevNewVars_0__tmp_copy_10;
#line 382 "varset.m"
              mercury__varset__NumVars_6 = mercury__varset__NumVars__tmp_copy_6;
#line 382 "varset.m"
            }
#line 382 "varset.m"
            continue;
#line 380 "varset.m"
          }
#line 383 "varset.m"
        else
#line 385 "varset.m"
          {
#line 383 "varset.m"
            mercury__varset__succeeded = (mercury__varset__NumVars_6 == (MR_Integer) 0);
#line 385 "varset.m"
            if (mercury__varset__succeeded)
#line 384 "varset.m"
              {
#line 384 "varset.m"
              }
#line 385 "varset.m"
            else
#line 386 "varset.m"
              {
#line 386 "varset.m"
                {
#line 386 "varset.m"
                  mercury__require__unexpected_3_p_0((MR_String) "varset", (MR_String) "predicate \140varset.new_vars_loop\'/5", (MR_String) "invalid call");
#line 386 "varset.m"
                  return;
                }
#line 386 "varset.m"
              }
#line 385 "varset.m"
            *mercury__varset__STATE_VARIABLE_VarSet_13 = mercury__varset__STATE_VARIABLE_VarSet_0_12;
#line 385 "varset.m"
            *mercury__varset__STATE_VARIABLE_RevNewVars_11 = mercury__varset__STATE_VARIABLE_RevNewVars_0_10;
#line 385 "varset.m"
          }
#line 383 "varset.m"
      }
#line 383 "varset.m"
      break;
#line 383 "varset.m"
    }
#line 375 "varset.m"
}

#line 304 "varset.m"
MR_Integer MR_CALL 
mercury__varset__num_allocated_1_f_0(
#line 304 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_6,
#line 304 "varset.m"
  MR_Word mercury__varset__HeadVar__1_1)
#line 304 "varset.m"
{
#line 800 "varset.m"
  {
#line 800 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 800 "varset.m"
    MR_Integer mercury__varset__HeadVar__2_2;
#line 800 "varset.m"
    MR_Word mercury__varset__VarSupply_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__1_1, (MR_Integer) 0)));
#line 800 "varset.m"
    MR_Word mercury__varset__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__1_1, (MR_Integer) 1)));
#line 800 "varset.m"
    MR_Word mercury__varset__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__1_1, (MR_Integer) 2)));

#line 237 "term.opt"
    mercury__varset__HeadVar__2_2 = (MR_Integer) mercury__varset__VarSupply_3;
#line 800 "varset.m"
    return mercury__varset__HeadVar__2_2;
#line 800 "varset.m"
  }
#line 304 "varset.m"
}

#line 302 "varset.m"
MR_Word MR_CALL 
mercury__varset__max_var_1_f_0(
#line 302 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_6,
#line 302 "varset.m"
  MR_Word mercury__varset__HeadVar__1_1)
#line 302 "varset.m"
{
#line 798 "varset.m"
  {
#line 798 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 798 "varset.m"
    MR_Word mercury__varset__HeadVar__2_2;
#line 798 "varset.m"
    MR_Word mercury__varset__VarSupply_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__1_1, (MR_Integer) 0)));
#line 798 "varset.m"
    MR_Integer mercury__varset__V_3_7 = (MR_Integer) mercury__varset__VarSupply_3;
#line 798 "varset.m"
    MR_Word mercury__varset__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__1_1, (MR_Integer) 1)));
#line 798 "varset.m"
    MR_Word mercury__varset__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__1_1, (MR_Integer) 2)));

#line 235 "term.opt"
    mercury__varset__HeadVar__2_2 = (MR_Word) mercury__varset__V_3_7;
#line 798 "varset.m"
    return mercury__varset__HeadVar__2_2;
#line 798 "varset.m"
  }
#line 302 "varset.m"
}

#line 287 "varset.m"
void MR_CALL 
mercury__varset__coerce_2_p_0(
#line 287 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_7,
#line 287 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_U_8,
#line 287 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_VarSet_0_4,
#line 287 "varset.m"
  MR_Word * mercury__varset__STATE_VARIABLE_VarSet_5)
#line 287 "varset.m"
{
#line 794 "varset.m"
  {
#line 794 "varset.m"
    MR_bool mercury__varset__succeeded;

#line 794 "varset.m"
    *mercury__varset__STATE_VARIABLE_VarSet_5 = mercury__varset__STATE_VARIABLE_VarSet_0_4;
#line 794 "varset.m"
  }
#line 287 "varset.m"
}

#line 286 "varset.m"
MR_Word MR_CALL 
mercury__varset__coerce_1_f_0(
#line 286 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_7,
#line 286 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_U_8,
#line 286 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_VarSet_0_4)
#line 286 "varset.m"
{
#line 794 "varset.m"
  {
#line 794 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 794 "varset.m"
    MR_Word mercury__varset__STATE_VARIABLE_VarSet_5 = mercury__varset__STATE_VARIABLE_VarSet_0_4;

#line 794 "varset.m"
    return mercury__varset__STATE_VARIABLE_VarSet_5;
#line 794 "varset.m"
  }
#line 286 "varset.m"
}

#line 281 "varset.m"
void MR_CALL 
mercury__varset__squash_4_p_0(
#line 281 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_15,
#line 281 "varset.m"
  MR_Word mercury__varset__OldVarSet_5,
#line 281 "varset.m"
  MR_Word mercury__varset__KeptVars_6,
#line 281 "varset.m"
  MR_Word * mercury__varset__NewVarSet_7,
#line 281 "varset.m"
  MR_Word * mercury__varset__Subst_8)
#line 281 "varset.m"
{
#line 757 "varset.m"
  {
#line 757 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 757 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_16_16 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 757 "varset.m"
    MR_Word mercury__varset__TypeInfo_10_61;
#line 757 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_11_62;
#line 757 "varset.m"
    MR_Integer mercury__varset__NumVars_9;
#line 757 "varset.m"
    MR_Word mercury__varset__NewVarSet0_10;
#line 757 "varset.m"
    MR_Word mercury__varset__NewVars0_11;
#line 757 "varset.m"
    MR_Word mercury__varset__NewVarSet1_12;
#line 757 "varset.m"
    MR_Word mercury__varset__NewVars_13;
#line 757 "varset.m"
    MR_Word mercury__varset__VarNames_14;
#line 757 "varset.m"
    MR_Word mercury__varset__VarSupply_22;
#line 757 "varset.m"
    MR_Word mercury__varset__Names_23;
#line 757 "varset.m"
    MR_Word mercury__varset__Values_24;
#line 757 "varset.m"
    MR_Word mercury__varset__RevNewVars_38;
#line 757 "varset.m"
    MR_Word mercury__varset__V_39_39;
#line 757 "varset.m"
    MR_Integer mercury__varset__V_5_48;
#line 757 "varset.m"
    MR_Word mercury__varset__VarNames_57;
#line 757 "varset.m"
    MR_Word mercury__varset__V_5_67;
#line 757 "varset.m"
    MR_Word mercury__varset__V_7_73;
#line 757 "varset.m"
    MR_Word mercury__varset__V_5_76;
#line 373 "varset.m"
    MR_Word mercury__varset__conv0_NewVars0_11;
#line 695 "varset.m"
    MR_Word mercury__varset__V_58_58;
#line 695 "varset.m"
    MR_Word mercury__varset__V_59_59;
#line 409 "tree234.opt"
    MR_Word mercury__varset__conv1_VarNames_14;
#line 245 "map.opt"
    MR_Word mercury__varset__conv2_V_7_73;
#line 70 "tree234.opt"
    MR_Word mercury__varset__conv3_Subst_8;

#line 2604 "varset.c"
    {
#line 2606 "varset.c"
      mercury__varset__TypeInfo_10_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2608 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_10_61, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_16_16));
#line 2610 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_10_61, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_15));
#line 2612 "varset.c"
    }
#line 600 "list.opt"
    {
#line 600 "list.opt"
      mercury__list__length_acc_3_p_0(mercury__varset__TypeInfo_10_61, (MR_Word) mercury__varset__KeptVars_6, (MR_Integer) 0, &mercury__varset__NumVars_9);
    }
#line 144 "term.opt"
    mercury__varset__VarSupply_22 = (MR_Word) ((MR_Box) ((MR_Integer) 0));
#line 243 "tree234.opt"
    mercury__varset__Names_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 243 "tree234.opt"
    mercury__varset__Values_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 331 "varset.m"
    mercury__varset__NewVarSet0_10 = (MR_Word) &mercury__varset_scalar_common_2[1];
#line 371 "varset.m"
    mercury__varset__V_39_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 371 "varset.m"
    {
#line 371 "varset.m"
      mercury__varset__new_vars_loop_5_p_0(mercury__varset__TypeInfo_for_T_15, mercury__varset__NumVars_9, mercury__varset__V_39_39, &mercury__varset__RevNewVars_38, mercury__varset__NewVarSet0_10, &mercury__varset__NewVarSet1_12);
    }
#line 373 "varset.m"
    {
#line 373 "varset.m"
      mercury__list__reverse_2_p_0(mercury__varset__TypeInfo_10_61, (MR_Word) mercury__varset__RevNewVars_38, &mercury__varset__conv0_NewVars0_11);
    }
#line 373 "varset.m"
    mercury__varset__NewVars0_11 = (MR_Word) mercury__varset__conv0_NewVars0_11;
#line 600 "list.opt"
    {
#line 600 "list.opt"
      mercury__list__length_acc_3_p_0(mercury__varset__TypeInfo_10_61, (MR_Word) mercury__varset__NewVars0_11, (MR_Integer) 0, &mercury__varset__V_5_48);
    }
#line 925 "list.opt"
    {
#line 925 "list.opt"
      mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_115_111_114_116_95_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__varset__TypeInfo_for_T_15, mercury__varset__TypeInfo_10_61, mercury__varset__V_5_48, mercury__varset__NewVars0_11, &mercury__varset__NewVars_13);
    }
#line 695 "varset.m"
    mercury__varset__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__OldVarSet_5, (MR_Integer) 0)));
#line 695 "varset.m"
    mercury__varset__VarNames_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__OldVarSet_5, (MR_Integer) 1)));
#line 695 "varset.m"
    mercury__varset__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__OldVarSet_5, (MR_Integer) 2)));
#line 2657 "varset.c"
    mercury__varset__TypeCtorInfo_11_62 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 408 "tree234.opt"
    mercury__varset__V_5_67 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 409 "tree234.opt"
    {
#line 409 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__varset__TypeInfo_10_61, mercury__varset__TypeCtorInfo_11_62, (MR_Word) mercury__varset__VarNames_57, (MR_Word) mercury__varset__V_5_67, &mercury__varset__conv1_VarNames_14);
    }
#line 409 "tree234.opt"
    mercury__varset__VarNames_14 = (MR_Word) mercury__varset__conv1_VarNames_14;
#line 245 "map.opt"
    {
#line 245 "map.opt"
      mercury__assoc_list__from_corresponding_lists_3_p_0(mercury__varset__TypeInfo_10_61, mercury__varset__TypeInfo_10_61, (MR_Word) mercury__varset__KeptVars_6, mercury__varset__NewVars_13, &mercury__varset__conv2_V_7_73);
    }
#line 245 "map.opt"
    mercury__varset__V_7_73 = (MR_Word) mercury__varset__conv2_V_7_73;
#line 69 "tree234.opt"
    mercury__varset__V_5_76 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 70 "tree234.opt"
    {
#line 70 "tree234.opt"
      mercury__tree234__assoc_list_to_tree234_acc_3_p_0(mercury__varset__TypeInfo_10_61, mercury__varset__TypeInfo_10_61, (MR_Word) mercury__varset__V_7_73, (MR_Word) mercury__varset__V_5_76, &mercury__varset__conv3_Subst_8);
    }
#line 70 "tree234.opt"
    *mercury__varset__Subst_8 = (MR_Word) mercury__varset__conv3_Subst_8;
#line 771 "varset.m"
    {
#line 771 "varset.m"
      mercury__varset__copy_var_names_4_p_0(mercury__varset__TypeInfo_for_T_15, mercury__varset__VarNames_14, *mercury__varset__Subst_8, mercury__varset__NewVarSet1_12, mercury__varset__NewVarSet_7);
#line 771 "varset.m"
      return;
    }
#line 757 "varset.m"
  }
#line 281 "varset.m"
}

#line 273 "varset.m"
void MR_CALL 
mercury__varset__select_3_p_0(
#line 273 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_14,
#line 273 "varset.m"
  MR_Word mercury__varset__Vars_4,
#line 273 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_VarSet_0_11,
#line 273 "varset.m"
  MR_Word * mercury__varset__STATE_VARIABLE_VarSet_12)
#line 273 "varset.m"
{
#line 749 "varset.m"
  {
#line 749 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 749 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_15_15 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 749 "varset.m"
    MR_Word mercury__varset__TypeInfo_16_16;
#line 749 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_17_17;
#line 749 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_18_18;
#line 749 "varset.m"
    MR_Word mercury__varset__TypeInfo_19_19;
#line 749 "varset.m"
    MR_Word mercury__varset__Supply_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_11, (MR_Integer) 0)));
#line 749 "varset.m"
    MR_Word mercury__varset__VarNameMap0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_11, (MR_Integer) 1)));
#line 749 "varset.m"
    MR_Word mercury__varset__Values0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_11, (MR_Integer) 2)));
#line 749 "varset.m"
    MR_Word mercury__varset__VarNameMap_9;
#line 749 "varset.m"
    MR_Word mercury__varset__Values_10;
#line 749 "varset.m"
    MR_Word mercury__varset__V_7_23;
#line 749 "varset.m"
    MR_Word mercury__varset__V_8_24;
#line 749 "varset.m"
    MR_Word mercury__varset__V_7_33;
#line 749 "varset.m"
    MR_Word mercury__varset__V_8_34;
#line 463 "map.opt"
    MR_Word mercury__varset__conv0_Values_10;

#line 2744 "varset.c"
    {
#line 2746 "varset.c"
      mercury__varset__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2748 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_16_16, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_15_15));
#line 2750 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_16_16, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_14));
#line 2752 "varset.c"
    }
#line 2754 "varset.c"
    mercury__varset__TypeCtorInfo_17_17 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 271 "set_ordlist.opt"
    mercury__varset__V_7_23 = (MR_Word) mercury__varset__Vars_4;
#line 243 "tree234.opt"
    mercury__varset__V_8_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 463 "map.opt"
    {
#line 463 "map.opt"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_108_101_99_116_95_108_111_111_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__varset__TypeInfo_for_T_14, mercury__varset__TypeInfo_16_16, mercury__varset__TypeCtorInfo_17_17, mercury__varset__V_7_23, mercury__varset__VarNameMap0_7, mercury__varset__V_8_24, &mercury__varset__VarNameMap_9);
    }
#line 2765 "varset.c"
    mercury__varset__TypeCtorInfo_18_18 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 2767 "varset.c"
    {
#line 2769 "varset.c"
      mercury__varset__TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2771 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_19_19, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_18_18));
#line 2773 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_19_19, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_14));
#line 2775 "varset.c"
    }
#line 271 "set_ordlist.opt"
    mercury__varset__V_7_33 = (MR_Word) mercury__varset__Vars_4;
#line 243 "tree234.opt"
    mercury__varset__V_8_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 463 "map.opt"
    {
#line 463 "map.opt"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_108_101_99_116_95_108_111_111_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__varset__TypeInfo_for_T_14, mercury__varset__TypeInfo_16_16, mercury__varset__TypeInfo_19_19, mercury__varset__V_7_33, (MR_Word) mercury__varset__Values0_8, (MR_Word) mercury__varset__V_8_34, &mercury__varset__conv0_Values_10);
    }
#line 463 "map.opt"
    mercury__varset__Values_10 = (MR_Word) mercury__varset__conv0_Values_10;
#line 753 "varset.m"
    {
#line 753 "varset.m"
      MR_Word base;
#line 753 "varset.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 753 "varset.m"
      *mercury__varset__STATE_VARIABLE_VarSet_12 = base;
#line 753 "varset.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__varset__Supply_6));
#line 753 "varset.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__varset__VarNameMap_9));
#line 753 "varset.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__varset__Values_10));
#line 753 "varset.m"
    }
#line 749 "varset.m"
  }
#line 273 "varset.m"
}

#line 272 "varset.m"
MR_Word MR_CALL 
mercury__varset__select_2_f_0(
#line 272 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_9,
#line 272 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_VarSet_0_6,
#line 272 "varset.m"
  MR_Word mercury__varset__Vars_5)
#line 272 "varset.m"
{
#line 747 "varset.m"
  {
#line 747 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 747 "varset.m"
    MR_Word mercury__varset__STATE_VARIABLE_VarSet_7;

#line 747 "varset.m"
    {
#line 747 "varset.m"
      mercury__varset__select_3_p_0(mercury__varset__TypeInfo_for_T_9, mercury__varset__Vars_5, mercury__varset__STATE_VARIABLE_VarSet_0_6, &mercury__varset__STATE_VARIABLE_VarSet_7);
    }
#line 747 "varset.m"
    return mercury__varset__STATE_VARIABLE_VarSet_7;
#line 747 "varset.m"
  }
#line 272 "varset.m"
}

#line 264 "varset.m"
void MR_CALL 
mercury__varset__ensure_unique_names_4_p_0(
#line 264 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_20,
#line 264 "varset.m"
  MR_Word mercury__varset__AllVars_5,
#line 264 "varset.m"
  MR_String mercury__varset__Suffix_6,
#line 264 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_VarSet_0_10,
#line 264 "varset.m"
  MR_Word * mercury__varset__STATE_VARIABLE_VarSet_11)
#line 264 "varset.m"
{
#line 703 "varset.m"
  {
#line 703 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 703 "varset.m"
    MR_Word mercury__varset__VarNames0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_10, (MR_Integer) 1)));
#line 703 "varset.m"
    MR_Word mercury__varset__VarNames_9;
#line 703 "varset.m"
    MR_Word mercury__varset__V_12_12 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 703 "varset.m"
    MR_Word mercury__varset__V_13_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 703 "varset.m"
    MR_Word mercury__varset__V_2_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 704 "varset.m"
    MR_Word mercury__varset__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_10, (MR_Integer) 0)));
#line 704 "varset.m"
    MR_Word mercury__varset__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_10, (MR_Integer) 2)));
#line 707 "varset.m"
    MR_Word mercury__varset__V_17_17;
#line 707 "varset.m"
    MR_Word mercury__varset__V_19_19;
#line 707 "varset.m"
    MR_Word mercury__varset__V_18_18;

#line 705 "varset.m"
    {
#line 705 "varset.m"
      mercury__varset__ensure_unique_names_loop_6_p_0(mercury__varset__TypeInfo_for_T_20, mercury__varset__AllVars_5, mercury__varset__Suffix_6, mercury__varset__V_12_12, mercury__varset__VarNames0_8, mercury__varset__V_13_13, &mercury__varset__VarNames_9);
    }
#line 707 "varset.m"
    mercury__varset__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_10, (MR_Integer) 0)));
#line 707 "varset.m"
    mercury__varset__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_10, (MR_Integer) 1)));
#line 707 "varset.m"
    mercury__varset__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_10, (MR_Integer) 2)));
#line 707 "varset.m"
    {
#line 707 "varset.m"
      MR_Word base;
#line 707 "varset.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 707 "varset.m"
      *mercury__varset__STATE_VARIABLE_VarSet_11 = base;
#line 707 "varset.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__varset__V_17_17));
#line 707 "varset.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__varset__VarNames_9));
#line 707 "varset.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__varset__V_19_19));
#line 707 "varset.m"
    }
#line 703 "varset.m"
  }
#line 264 "varset.m"
}

#line 262 "varset.m"
MR_Word MR_CALL 
mercury__varset__ensure_unique_names_3_f_0(
#line 262 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_11,
#line 262 "varset.m"
  MR_Word mercury__varset__AllVars_5,
#line 262 "varset.m"
  MR_String mercury__varset__Suffix_6,
#line 262 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_VarSet_0_8)
#line 262 "varset.m"
{
#line 701 "varset.m"
  {
#line 701 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 701 "varset.m"
    MR_Word mercury__varset__STATE_VARIABLE_VarSet_9;

#line 701 "varset.m"
    {
#line 701 "varset.m"
      mercury__varset__ensure_unique_names_4_p_0(mercury__varset__TypeInfo_for_T_11, mercury__varset__AllVars_5, mercury__varset__Suffix_6, mercury__varset__STATE_VARIABLE_VarSet_0_8, &mercury__varset__STATE_VARIABLE_VarSet_9);
    }
#line 701 "varset.m"
    return mercury__varset__STATE_VARIABLE_VarSet_9;
#line 701 "varset.m"
  }
#line 262 "varset.m"
}

#line 253 "varset.m"
void MR_CALL 
mercury__varset__var_name_list_2_p_0(
#line 253 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_8,
#line 253 "varset.m"
  MR_Word mercury__varset__VarSet_3,
#line 253 "varset.m"
  MR_Word * mercury__varset__VarNameList_4)
#line 253 "varset.m"
{
#line 694 "varset.m"
  {
#line 694 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 694 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_9_9 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 694 "varset.m"
    MR_Word mercury__varset__TypeInfo_10_10;
#line 694 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_11_11;
#line 694 "varset.m"
    MR_Word mercury__varset__VarNames_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_3, (MR_Integer) 1)));
#line 694 "varset.m"
    MR_Word mercury__varset__V_5_16;
#line 695 "varset.m"
    MR_Word mercury__varset__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_3, (MR_Integer) 0)));
#line 695 "varset.m"
    MR_Word mercury__varset__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_3, (MR_Integer) 2)));
#line 409 "tree234.opt"
    MR_Word mercury__varset__conv0_VarNameList_4;

#line 2975 "varset.c"
    {
#line 2977 "varset.c"
      mercury__varset__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2979 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_10_10, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_9_9));
#line 2981 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_10_10, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_8));
#line 2983 "varset.c"
    }
#line 2985 "varset.c"
    mercury__varset__TypeCtorInfo_11_11 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 408 "tree234.opt"
    mercury__varset__V_5_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 409 "tree234.opt"
    {
#line 409 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__varset__TypeInfo_10_10, mercury__varset__TypeCtorInfo_11_11, (MR_Word) mercury__varset__VarNames_5, (MR_Word) mercury__varset__V_5_16, &mercury__varset__conv0_VarNameList_4);
    }
#line 409 "tree234.opt"
    *mercury__varset__VarNameList_4 = (MR_Word) mercury__varset__conv0_VarNameList_4;
#line 694 "varset.m"
  }
#line 253 "varset.m"
}

#line 252 "varset.m"
MR_Word MR_CALL 
mercury__varset__var_name_list_1_f_0(
#line 252 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_5,
#line 252 "varset.m"
  MR_Word mercury__varset__VarSet_3)
#line 252 "varset.m"
{
#line 694 "varset.m"
  {
#line 694 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 694 "varset.m"
    MR_Word mercury__varset__VarNameList_4;
#line 694 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_9_11 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 694 "varset.m"
    MR_Word mercury__varset__TypeInfo_10_12;
#line 694 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_11_13;
#line 694 "varset.m"
    MR_Word mercury__varset__VarNames_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_3, (MR_Integer) 1)));
#line 694 "varset.m"
    MR_Word mercury__varset__V_5_18;
#line 695 "varset.m"
    MR_Word mercury__varset__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_3, (MR_Integer) 0)));
#line 695 "varset.m"
    MR_Word mercury__varset__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_3, (MR_Integer) 2)));
#line 409 "tree234.opt"
    MR_Word mercury__varset__conv0_VarNameList_4;

#line 3033 "varset.c"
    {
#line 3035 "varset.c"
      mercury__varset__TypeInfo_10_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3037 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_10_12, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_9_11));
#line 3039 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_10_12, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_5));
#line 3041 "varset.c"
    }
#line 3043 "varset.c"
    mercury__varset__TypeCtorInfo_11_13 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 408 "tree234.opt"
    mercury__varset__V_5_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 409 "tree234.opt"
    {
#line 409 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__varset__TypeInfo_10_12, mercury__varset__TypeCtorInfo_11_13, (MR_Word) mercury__varset__VarNames_8, (MR_Word) mercury__varset__V_5_18, &mercury__varset__conv0_VarNameList_4);
    }
#line 409 "tree234.opt"
    mercury__varset__VarNameList_4 = (MR_Word) mercury__varset__conv0_VarNameList_4;
#line 694 "varset.m"
    return mercury__varset__VarNameList_4;
#line 694 "varset.m"
  }
#line 252 "varset.m"
}

#line 245 "varset.m"
void MR_CALL 
mercury__varset__create_name_var_map_2_p_0(
#line 245 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_10,
#line 245 "varset.m"
  MR_Word mercury__varset__VarSet_3,
#line 245 "varset.m"
  MR_Word * mercury__varset__NameVars_4)
#line 245 "varset.m"
{
#line 683 "varset.m"
  {
#line 683 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 683 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_11_11 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 683 "varset.m"
    MR_Word mercury__varset__TypeInfo_12_12;
#line 683 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_13_13;
#line 683 "varset.m"
    MR_Word mercury__varset__VarNames_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_3, (MR_Integer) 1)));
#line 683 "varset.m"
    MR_Word mercury__varset__Vars_6;
#line 683 "varset.m"
    MR_Word mercury__varset__Names_7;
#line 683 "varset.m"
    MR_Word mercury__varset__V_5_18;
#line 683 "varset.m"
    MR_Word mercury__varset__V_5_24;
#line 683 "varset.m"
    MR_Word mercury__varset__V_7_29;
#line 683 "varset.m"
    MR_Word mercury__varset__V_5_32;
#line 684 "varset.m"
    MR_Word mercury__varset__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_3, (MR_Integer) 0)));
#line 684 "varset.m"
    MR_Word mercury__varset__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_3, (MR_Integer) 2)));
#line 252 "tree234.opt"
    MR_Word mercury__varset__conv0_Vars_6;

#line 3103 "varset.c"
    {
#line 3105 "varset.c"
      mercury__varset__TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3107 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_12_12, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_11_11));
#line 3109 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_12_12, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_10));
#line 3111 "varset.c"
    }
#line 3113 "varset.c"
    mercury__varset__TypeCtorInfo_13_13 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 251 "tree234.opt"
    mercury__varset__V_5_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 252 "tree234.opt"
    {
#line 252 "tree234.opt"
      mercury__tree234__keys_acc_3_p_0(mercury__varset__TypeInfo_12_12, mercury__varset__TypeCtorInfo_13_13, (MR_Word) mercury__varset__VarNames_5, (MR_Word) mercury__varset__V_5_18, &mercury__varset__conv0_Vars_6);
    }
#line 252 "tree234.opt"
    mercury__varset__Vars_6 = (MR_Word) mercury__varset__conv0_Vars_6;
#line 415 "tree234.opt"
    mercury__varset__V_5_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 416 "tree234.opt"
    {
#line 416 "tree234.opt"
      mercury__tree234__values_acc_3_p_0(mercury__varset__TypeInfo_12_12, mercury__varset__TypeCtorInfo_13_13, (MR_Word) mercury__varset__VarNames_5, mercury__varset__V_5_24, &mercury__varset__Names_7);
    }
#line 245 "map.opt"
    {
#line 245 "map.opt"
      mercury__assoc_list__from_corresponding_lists_3_p_0(mercury__varset__TypeCtorInfo_13_13, mercury__varset__TypeInfo_12_12, mercury__varset__Names_7, mercury__varset__Vars_6, &mercury__varset__V_7_29);
    }
#line 69 "tree234.opt"
    mercury__varset__V_5_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 70 "tree234.opt"
    {
#line 70 "tree234.opt"
      mercury__tree234__assoc_list_to_tree234_acc_3_p_0(mercury__varset__TypeCtorInfo_13_13, mercury__varset__TypeInfo_12_12, mercury__varset__V_7_29, mercury__varset__V_5_32, mercury__varset__NameVars_4);
#line 70 "tree234.opt"
      return;
    }
#line 683 "varset.m"
  }
#line 245 "varset.m"
}

#line 244 "varset.m"
MR_Word MR_CALL 
mercury__varset__create_name_var_map_1_f_0(
#line 244 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_5,
#line 244 "varset.m"
  MR_Word mercury__varset__VarSet_3)
#line 244 "varset.m"
{
#line 681 "varset.m"
  {
#line 681 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 681 "varset.m"
    MR_Word mercury__varset__NameVars_4;

#line 681 "varset.m"
    {
#line 681 "varset.m"
      mercury__varset__create_name_var_map_2_p_0(mercury__varset__TypeInfo_for_T_5, mercury__varset__VarSet_3, &mercury__varset__NameVars_4);
    }
#line 681 "varset.m"
    return mercury__varset__NameVars_4;
#line 681 "varset.m"
  }
#line 244 "varset.m"
}

#line 233 "varset.m"
void MR_CALL 
mercury__varset__merge_without_names_5_p_0(
#line 233 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_12,
#line 233 "varset.m"
  MR_Word mercury__varset__VarSetA_6,
#line 233 "varset.m"
  MR_Word mercury__varset__VarSetB_7,
#line 233 "varset.m"
  MR_Word mercury__varset__TermList0_8,
#line 233 "varset.m"
  MR_Word * mercury__varset__VarSet_9,
#line 233 "varset.m"
  MR_Word * mercury__varset__TermList_10)
#line 233 "varset.m"
{
#line 674 "varset.m"
  {
#line 674 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 674 "varset.m"
    MR_Word mercury__varset__Renaming_11;

#line 675 "varset.m"
    {
#line 675 "varset.m"
      mercury__varset__merge_renaming_without_names_4_p_0(mercury__varset__TypeInfo_for_T_12, mercury__varset__VarSetA_6, mercury__varset__VarSetB_7, mercury__varset__VarSet_9, &mercury__varset__Renaming_11);
    }
#line 676 "varset.m"
    {
#line 676 "varset.m"
      mercury__term__apply_renaming_in_terms_3_p_0(mercury__varset__TypeInfo_for_T_12, mercury__varset__Renaming_11, mercury__varset__TermList0_8, mercury__varset__TermList_10);
#line 676 "varset.m"
      return;
    }
#line 674 "varset.m"
  }
#line 233 "varset.m"
}

#line 225 "varset.m"
void MR_CALL 
mercury__varset__merge_5_p_0(
#line 225 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_12,
#line 225 "varset.m"
  MR_Word mercury__varset__VarSetA_6,
#line 225 "varset.m"
  MR_Word mercury__varset__VarSetB_7,
#line 225 "varset.m"
  MR_Word mercury__varset__TermList0_8,
#line 225 "varset.m"
  MR_Word * mercury__varset__VarSet_9,
#line 225 "varset.m"
  MR_Word * mercury__varset__TermList_10)
#line 225 "varset.m"
{
#line 670 "varset.m"
  {
#line 670 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 670 "varset.m"
    MR_Word mercury__varset__Renaming_11;

#line 671 "varset.m"
    {
#line 671 "varset.m"
      mercury__varset__merge_renaming_4_p_0(mercury__varset__TypeInfo_for_T_12, mercury__varset__VarSetA_6, mercury__varset__VarSetB_7, mercury__varset__VarSet_9, &mercury__varset__Renaming_11);
    }
#line 672 "varset.m"
    {
#line 672 "varset.m"
      mercury__term__apply_renaming_in_terms_3_p_0(mercury__varset__TypeInfo_for_T_12, mercury__varset__Renaming_11, mercury__varset__TermList0_8, mercury__varset__TermList_10);
#line 672 "varset.m"
      return;
    }
#line 670 "varset.m"
  }
#line 225 "varset.m"
}

#line 216 "varset.m"
void MR_CALL 
mercury__varset__merge_subst_without_names_4_p_0(
#line 216 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_18,
#line 216 "varset.m"
  MR_Word mercury__varset__VarSetA_5,
#line 216 "varset.m"
  MR_Word mercury__varset__VarSetB_6,
#line 216 "varset.m"
  MR_Word * mercury__varset__VarSet_7,
#line 216 "varset.m"
  MR_Word * mercury__varset__Subst_8)
#line 216 "varset.m"
{
#line 642 "varset.m"
  {
#line 642 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 642 "varset.m"
    MR_Word mercury__varset__SupplyB_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSetB_6, (MR_Integer) 0)));
#line 642 "varset.m"
    MR_Word mercury__varset__SupplyB0_12 = (MR_Word) ((MR_Box) ((MR_Integer) 0));
#line 642 "varset.m"
    MR_Word mercury__varset__SupplyA_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSetA_5, (MR_Integer) 0)));
#line 642 "varset.m"
    MR_Word mercury__varset__NamesA_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSetA_5, (MR_Integer) 1)));
#line 642 "varset.m"
    MR_Word mercury__varset__ValuesA_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSetA_5, (MR_Integer) 2)));
#line 642 "varset.m"
    MR_Word mercury__varset__Subst0_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 642 "varset.m"
    MR_Word mercury__varset__Supply_17;
#line 643 "varset.m"
    MR_Word mercury__varset___NamesB_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSetB_6, (MR_Integer) 1)));
#line 643 "varset.m"
    MR_Word mercury__varset___ValuesB_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSetB_6, (MR_Integer) 2)));

#line 647 "varset.m"
    {
#line 647 "varset.m"
      mercury__varset__merge_subst_without_names_loop_6_p_0(mercury__varset__TypeInfo_for_T_18, mercury__varset__SupplyB0_12, mercury__varset__SupplyB_9, mercury__varset__SupplyA_13, &mercury__varset__Supply_17, mercury__varset__Subst0_16, mercury__varset__Subst_8);
    }
#line 649 "varset.m"
    {
#line 649 "varset.m"
      MR_Word base;
#line 649 "varset.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 649 "varset.m"
      *mercury__varset__VarSet_7 = base;
#line 649 "varset.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__varset__Supply_17));
#line 649 "varset.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__varset__NamesA_14));
#line 649 "varset.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__varset__ValuesA_15));
#line 649 "varset.m"
    }
#line 642 "varset.m"
  }
#line 216 "varset.m"
}

#line 205 "varset.m"
void MR_CALL 
mercury__varset__merge_subst_4_p_0(
#line 205 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_19,
#line 205 "varset.m"
  MR_Word mercury__varset__VarSetA_5,
#line 205 "varset.m"
  MR_Word mercury__varset__VarSetB_6,
#line 205 "varset.m"
  MR_Word * mercury__varset__VarSet_7,
#line 205 "varset.m"
  MR_Word * mercury__varset__Subst_8)
#line 205 "varset.m"
{
#line 609 "varset.m"
  {
#line 609 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 609 "varset.m"
    MR_Word mercury__varset__SupplyB_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSetB_6, (MR_Integer) 0)));
#line 609 "varset.m"
    MR_Word mercury__varset__NamesB_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSetB_6, (MR_Integer) 1)));
#line 609 "varset.m"
    MR_Word mercury__varset__SupplyB0_12 = (MR_Word) ((MR_Box) ((MR_Integer) 0));
#line 609 "varset.m"
    MR_Word mercury__varset__SupplyA_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSetA_5, (MR_Integer) 0)));
#line 609 "varset.m"
    MR_Word mercury__varset__NamesA_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSetA_5, (MR_Integer) 1)));
#line 609 "varset.m"
    MR_Word mercury__varset__ValuesA_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSetA_5, (MR_Integer) 2)));
#line 609 "varset.m"
    MR_Word mercury__varset__Subst0_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 609 "varset.m"
    MR_Word mercury__varset__Supply_17;
#line 609 "varset.m"
    MR_Word mercury__varset__Names_18;
#line 610 "varset.m"
    MR_Word mercury__varset___ValuesB_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSetB_6, (MR_Integer) 2)));

#line 614 "varset.m"
    {
#line 614 "varset.m"
      mercury__varset__merge_subst_loop_9_p_0(mercury__varset__TypeInfo_for_T_19, mercury__varset__SupplyB0_12, mercury__varset__SupplyB_9, mercury__varset__NamesB_10, mercury__varset__SupplyA_13, &mercury__varset__Supply_17, mercury__varset__NamesA_14, &mercury__varset__Names_18, mercury__varset__Subst0_16, mercury__varset__Subst_8);
    }
#line 616 "varset.m"
    {
#line 616 "varset.m"
      MR_Word base;
#line 616 "varset.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 616 "varset.m"
      *mercury__varset__VarSet_7 = base;
#line 616 "varset.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__varset__Supply_17));
#line 616 "varset.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__varset__Names_18));
#line 616 "varset.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__varset__ValuesA_15));
#line 616 "varset.m"
    }
#line 609 "varset.m"
  }
#line 205 "varset.m"
}

#line 196 "varset.m"
void MR_CALL 
mercury__varset__merge_renaming_without_names_4_p_0(
#line 196 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_18,
#line 196 "varset.m"
  MR_Word mercury__varset__VarSetA_5,
#line 196 "varset.m"
  MR_Word mercury__varset__VarSetB_6,
#line 196 "varset.m"
  MR_Word * mercury__varset__VarSet_7,
#line 196 "varset.m"
  MR_Word * mercury__varset__Renaming_8)
#line 196 "varset.m"
{
#line 579 "varset.m"
  {
#line 579 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 579 "varset.m"
    MR_Word mercury__varset__SupplyB_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSetB_6, (MR_Integer) 0)));
#line 579 "varset.m"
    MR_Word mercury__varset__SupplyB0_12 = (MR_Word) ((MR_Box) ((MR_Integer) 0));
#line 579 "varset.m"
    MR_Word mercury__varset__SupplyA_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSetA_5, (MR_Integer) 0)));
#line 579 "varset.m"
    MR_Word mercury__varset__NamesA_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSetA_5, (MR_Integer) 1)));
#line 579 "varset.m"
    MR_Word mercury__varset__ValuesA_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSetA_5, (MR_Integer) 2)));
#line 579 "varset.m"
    MR_Word mercury__varset__Renaming0_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 579 "varset.m"
    MR_Word mercury__varset__Supply_17;
#line 580 "varset.m"
    MR_Word mercury__varset___NamesB_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSetB_6, (MR_Integer) 1)));
#line 580 "varset.m"
    MR_Word mercury__varset___ValuesB_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSetB_6, (MR_Integer) 2)));

#line 584 "varset.m"
    {
#line 584 "varset.m"
      mercury__varset__merge_renaming_without_names_loop_6_p_0(mercury__varset__TypeInfo_for_T_18, mercury__varset__SupplyB0_12, mercury__varset__SupplyB_9, mercury__varset__SupplyA_13, &mercury__varset__Supply_17, mercury__varset__Renaming0_16, mercury__varset__Renaming_8);
    }
#line 586 "varset.m"
    {
#line 586 "varset.m"
      MR_Word base;
#line 586 "varset.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 586 "varset.m"
      *mercury__varset__VarSet_7 = base;
#line 586 "varset.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__varset__Supply_17));
#line 586 "varset.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__varset__NamesA_14));
#line 586 "varset.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__varset__ValuesA_15));
#line 586 "varset.m"
    }
#line 579 "varset.m"
  }
#line 196 "varset.m"
}

#line 188 "varset.m"
void MR_CALL 
mercury__varset__merge_renaming_4_p_0(
#line 188 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_19,
#line 188 "varset.m"
  MR_Word mercury__varset__VarSetA_5,
#line 188 "varset.m"
  MR_Word mercury__varset__VarSetB_6,
#line 188 "varset.m"
  MR_Word * mercury__varset__VarSet_7,
#line 188 "varset.m"
  MR_Word * mercury__varset__Renaming_8)
#line 188 "varset.m"
{
#line 547 "varset.m"
  {
#line 547 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 547 "varset.m"
    MR_Word mercury__varset__SupplyB_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSetB_6, (MR_Integer) 0)));
#line 547 "varset.m"
    MR_Word mercury__varset__NamesB_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSetB_6, (MR_Integer) 1)));
#line 547 "varset.m"
    MR_Word mercury__varset__SupplyB0_12 = (MR_Word) ((MR_Box) ((MR_Integer) 0));
#line 547 "varset.m"
    MR_Word mercury__varset__SupplyA_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSetA_5, (MR_Integer) 0)));
#line 547 "varset.m"
    MR_Word mercury__varset__NamesA_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSetA_5, (MR_Integer) 1)));
#line 547 "varset.m"
    MR_Word mercury__varset__ValuesA_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSetA_5, (MR_Integer) 2)));
#line 547 "varset.m"
    MR_Word mercury__varset__Renaming0_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 547 "varset.m"
    MR_Word mercury__varset__Supply_17;
#line 547 "varset.m"
    MR_Word mercury__varset__Names_18;
#line 548 "varset.m"
    MR_Word mercury__varset___ValuesB_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSetB_6, (MR_Integer) 2)));

#line 552 "varset.m"
    {
#line 552 "varset.m"
      mercury__varset__merge_renaming_loop_9_p_0(mercury__varset__TypeInfo_for_T_19, mercury__varset__SupplyB0_12, mercury__varset__SupplyB_9, mercury__varset__NamesB_10, mercury__varset__SupplyA_13, &mercury__varset__Supply_17, mercury__varset__NamesA_14, &mercury__varset__Names_18, mercury__varset__Renaming0_16, mercury__varset__Renaming_8);
    }
#line 554 "varset.m"
    {
#line 554 "varset.m"
      MR_Word base;
#line 554 "varset.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 554 "varset.m"
      *mercury__varset__VarSet_7 = base;
#line 554 "varset.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__varset__Supply_17));
#line 554 "varset.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__varset__Names_18));
#line 554 "varset.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__varset__ValuesA_15));
#line 554 "varset.m"
    }
#line 547 "varset.m"
  }
#line 188 "varset.m"
}

#line 176 "varset.m"
void MR_CALL 
mercury__varset__set_bindings_3_p_0(
#line 176 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_12,
#line 176 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_VarSet_0_6,
#line 176 "varset.m"
  MR_Word mercury__varset__Values_5,
#line 176 "varset.m"
  MR_Word * mercury__varset__STATE_VARIABLE_VarSet_7)
#line 176 "varset.m"
{
#line 534 "varset.m"
  {
#line 534 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 534 "varset.m"
    MR_Word mercury__varset__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_6, (MR_Integer) 0)));
#line 534 "varset.m"
    MR_Word mercury__varset__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_6, (MR_Integer) 1)));
#line 534 "varset.m"
    MR_Word mercury__varset__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_6, (MR_Integer) 2)));

#line 534 "varset.m"
    {
#line 534 "varset.m"
      MR_Word base;
#line 534 "varset.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 534 "varset.m"
      *mercury__varset__STATE_VARIABLE_VarSet_7 = base;
#line 534 "varset.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__varset__V_9_9));
#line 534 "varset.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__varset__V_10_10));
#line 534 "varset.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__varset__Values_5));
#line 534 "varset.m"
    }
#line 534 "varset.m"
  }
#line 176 "varset.m"
}

#line 175 "varset.m"
MR_Word MR_CALL 
mercury__varset__set_bindings_2_f_0(
#line 175 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_9,
#line 175 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_VarSet_0_6,
#line 175 "varset.m"
  MR_Word mercury__varset__Values_5)
#line 175 "varset.m"
{
#line 534 "varset.m"
  {
#line 534 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 534 "varset.m"
    MR_Word mercury__varset__STATE_VARIABLE_VarSet_7;
#line 534 "varset.m"
    MR_Word mercury__varset__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_6, (MR_Integer) 0)));
#line 534 "varset.m"
    MR_Word mercury__varset__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_6, (MR_Integer) 1)));
#line 534 "varset.m"
    MR_Word mercury__varset__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_6, (MR_Integer) 2)));

#line 534 "varset.m"
    {
#line 534 "varset.m"
      mercury__varset__STATE_VARIABLE_VarSet_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 534 "varset.m"
      MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_7, 0) = ((MR_Box) (mercury__varset__V_15_15));
#line 534 "varset.m"
      MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_7, 1) = ((MR_Box) (mercury__varset__V_16_16));
#line 534 "varset.m"
      MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_7, 2) = ((MR_Box) (mercury__varset__Values_5));
#line 534 "varset.m"
    }
#line 534 "varset.m"
    return mercury__varset__STATE_VARIABLE_VarSet_7;
#line 534 "varset.m"
  }
#line 175 "varset.m"
}

#line 169 "varset.m"
void MR_CALL 
mercury__varset__get_bindings_2_p_0(
#line 169 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_7,
#line 169 "varset.m"
  MR_Word mercury__varset__VarSet_3,
#line 169 "varset.m"
  MR_Word * mercury__varset__Values_4)
#line 169 "varset.m"
{
#line 528 "varset.m"
  {
#line 528 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 528 "varset.m"
    MR_Word mercury__varset__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_3, (MR_Integer) 0)));
#line 528 "varset.m"
    MR_Word mercury__varset__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_3, (MR_Integer) 1)));

#line 528 "varset.m"
    *mercury__varset__Values_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_3, (MR_Integer) 2)));
#line 528 "varset.m"
  }
#line 169 "varset.m"
}

#line 168 "varset.m"
MR_Word MR_CALL 
mercury__varset__get_bindings_1_f_0(
#line 168 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_5,
#line 168 "varset.m"
  MR_Word mercury__varset__VarSet_3)
#line 168 "varset.m"
{
#line 528 "varset.m"
  {
#line 528 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 528 "varset.m"
    MR_Word mercury__varset__Values_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_3, (MR_Integer) 2)));
#line 528 "varset.m"
    MR_Word mercury__varset__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_3, (MR_Integer) 0)));
#line 528 "varset.m"
    MR_Word mercury__varset__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_3, (MR_Integer) 1)));

#line 528 "varset.m"
    return mercury__varset__Values_4;
#line 528 "varset.m"
  }
#line 168 "varset.m"
}

#line 164 "varset.m"
void MR_CALL 
mercury__varset__lookup_vars_2_p_0(
#line 164 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_7,
#line 164 "varset.m"
  MR_Word mercury__varset__VarSet_3,
#line 164 "varset.m"
  MR_Word * mercury__varset__Values_4)
#line 164 "varset.m"
{
#line 520 "varset.m"
  {
#line 520 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 520 "varset.m"
    MR_Word mercury__varset__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_3, (MR_Integer) 0)));
#line 520 "varset.m"
    MR_Word mercury__varset__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_3, (MR_Integer) 1)));

#line 520 "varset.m"
    *mercury__varset__Values_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_3, (MR_Integer) 2)));
#line 520 "varset.m"
  }
#line 164 "varset.m"
}

#line 163 "varset.m"
MR_Word MR_CALL 
mercury__varset__lookup_vars_1_f_0(
#line 163 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_5,
#line 163 "varset.m"
  MR_Word mercury__varset__VarSet_3)
#line 163 "varset.m"
{
#line 520 "varset.m"
  {
#line 520 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 520 "varset.m"
    MR_Word mercury__varset__Values_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_3, (MR_Integer) 2)));
#line 520 "varset.m"
    MR_Word mercury__varset__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_3, (MR_Integer) 0)));
#line 520 "varset.m"
    MR_Word mercury__varset__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_3, (MR_Integer) 1)));

#line 520 "varset.m"
    return mercury__varset__Values_4;
#line 520 "varset.m"
  }
#line 163 "varset.m"
}

#line 156 "varset.m"
MR_bool MR_CALL 
mercury__varset__search_var_3_p_0(
#line 156 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_10,
#line 156 "varset.m"
  MR_Word mercury__varset__VarSet_4,
#line 156 "varset.m"
  MR_Word mercury__varset__Var_5,
#line 156 "varset.m"
  MR_Word * mercury__varset__Value_6)
#line 156 "varset.m"
{
#line 510 "varset.m"
  {
#line 510 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 510 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_11_11 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 510 "varset.m"
    MR_Word mercury__varset__TypeInfo_12_12;
#line 510 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_13_13 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 510 "varset.m"
    MR_Word mercury__varset__TypeInfo_14_14;
#line 510 "varset.m"
    MR_Word mercury__varset__Values_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_4, (MR_Integer) 2)));
#line 511 "varset.m"
    MR_Word mercury__varset__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_4, (MR_Integer) 0)));
#line 511 "varset.m"
    MR_Word mercury__varset__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_4, (MR_Integer) 1)));
#line 452 "map.opt"
    MR_Box mercury__varset__conv0_Value_6;

#line 3750 "varset.c"
    {
#line 3752 "varset.c"
      mercury__varset__TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3754 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_12_12, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_11_11));
#line 3756 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_12_12, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_10));
#line 3758 "varset.c"
    }
#line 3760 "varset.c"
    {
#line 3762 "varset.c"
      mercury__varset__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3764 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_14_14, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_13_13));
#line 3766 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_14_14, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_10));
#line 3768 "varset.c"
    }
#line 452 "map.opt"
    {
#line 452 "map.opt"
      mercury__varset__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__varset__TypeInfo_for_T_10, mercury__varset__TypeInfo_12_12, mercury__varset__TypeInfo_14_14, (MR_Word) mercury__varset__Values_7, mercury__varset__Var_5, &mercury__varset__conv0_Value_6);
    }
#line 452 "map.opt"
    if (mercury__varset__succeeded)
#line 452 "map.opt"
      {
#line 452 "map.opt"
        *mercury__varset__Value_6 = ((MR_Word) mercury__varset__conv0_Value_6);
#line 452 "map.opt"
        mercury__varset__succeeded = MR_TRUE;
#line 452 "map.opt"
      }
#line 510 "varset.m"
    return mercury__varset__succeeded;
#line 510 "varset.m"
  }
#line 156 "varset.m"
}

#line 151 "varset.m"
void MR_CALL 
mercury__varset__bind_vars_3_p_0(
#line 151 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_10,
#line 151 "varset.m"
  MR_Word mercury__varset__Subst_4,
#line 151 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_VarSet_0_7,
#line 151 "varset.m"
  MR_Word * mercury__varset__STATE_VARIABLE_VarSet_8)
#line 151 "varset.m"
{
#line 496 "varset.m"
  {
#line 496 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 496 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_11_11 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 496 "varset.m"
    MR_Word mercury__varset__TypeInfo_12_12;
#line 496 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_13_13;
#line 496 "varset.m"
    MR_Word mercury__varset__TypeInfo_14_14;
#line 496 "varset.m"
    MR_Word mercury__varset__VarsValues_6;
#line 496 "varset.m"
    MR_Word mercury__varset__V_5_19;
#line 409 "tree234.opt"
    MR_Word mercury__varset__conv0_VarsValues_6;

#line 3824 "varset.c"
    {
#line 3826 "varset.c"
      mercury__varset__TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3828 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_12_12, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_11_11));
#line 3830 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_12_12, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_10));
#line 3832 "varset.c"
    }
#line 3834 "varset.c"
    mercury__varset__TypeCtorInfo_13_13 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 3836 "varset.c"
    {
#line 3838 "varset.c"
      mercury__varset__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3840 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_14_14, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_13_13));
#line 3842 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_14_14, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_10));
#line 3844 "varset.c"
    }
#line 408 "tree234.opt"
    mercury__varset__V_5_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 409 "tree234.opt"
    {
#line 409 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__varset__TypeInfo_12_12, mercury__varset__TypeInfo_14_14, (MR_Word) mercury__varset__Subst_4, (MR_Word) mercury__varset__V_5_19, &mercury__varset__conv0_VarsValues_6);
    }
#line 409 "tree234.opt"
    mercury__varset__VarsValues_6 = (MR_Word) mercury__varset__conv0_VarsValues_6;
#line 498 "varset.m"
    {
#line 498 "varset.m"
      mercury__varset__bind_vars_loop_3_p_0(mercury__varset__TypeInfo_for_T_10, mercury__varset__VarsValues_6, mercury__varset__STATE_VARIABLE_VarSet_0_7, mercury__varset__STATE_VARIABLE_VarSet_8);
#line 498 "varset.m"
      return;
    }
#line 496 "varset.m"
  }
#line 151 "varset.m"
}

#line 150 "varset.m"
MR_Word MR_CALL 
mercury__varset__bind_vars_2_f_0(
#line 150 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_9,
#line 150 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_VarSet_0_6,
#line 150 "varset.m"
  MR_Word mercury__varset__Subst_5)
#line 150 "varset.m"
{
#line 496 "varset.m"
  {
#line 496 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 496 "varset.m"
    MR_Word mercury__varset__STATE_VARIABLE_VarSet_7;
#line 496 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_11_16 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 496 "varset.m"
    MR_Word mercury__varset__TypeInfo_12_17;
#line 496 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_13_18;
#line 496 "varset.m"
    MR_Word mercury__varset__TypeInfo_14_19;
#line 496 "varset.m"
    MR_Word mercury__varset__VarsValues_14;
#line 496 "varset.m"
    MR_Word mercury__varset__V_5_24;
#line 409 "tree234.opt"
    MR_Word mercury__varset__conv0_VarsValues_14;

#line 3899 "varset.c"
    {
#line 3901 "varset.c"
      mercury__varset__TypeInfo_12_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3903 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_12_17, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_11_16));
#line 3905 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_12_17, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_9));
#line 3907 "varset.c"
    }
#line 3909 "varset.c"
    mercury__varset__TypeCtorInfo_13_18 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 3911 "varset.c"
    {
#line 3913 "varset.c"
      mercury__varset__TypeInfo_14_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3915 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_14_19, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_13_18));
#line 3917 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_14_19, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_9));
#line 3919 "varset.c"
    }
#line 408 "tree234.opt"
    mercury__varset__V_5_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 409 "tree234.opt"
    {
#line 409 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__varset__TypeInfo_12_17, mercury__varset__TypeInfo_14_19, (MR_Word) mercury__varset__Subst_5, (MR_Word) mercury__varset__V_5_24, &mercury__varset__conv0_VarsValues_14);
    }
#line 409 "tree234.opt"
    mercury__varset__VarsValues_14 = (MR_Word) mercury__varset__conv0_VarsValues_14;
#line 498 "varset.m"
    {
#line 498 "varset.m"
      mercury__varset__bind_vars_loop_3_p_0(mercury__varset__TypeInfo_for_T_9, mercury__varset__VarsValues_14, mercury__varset__STATE_VARIABLE_VarSet_0_6, &mercury__varset__STATE_VARIABLE_VarSet_7);
    }
#line 496 "varset.m"
    return mercury__varset__STATE_VARIABLE_VarSet_7;
#line 496 "varset.m"
  }
#line 150 "varset.m"
}

#line 145 "varset.m"
void MR_CALL 
mercury__varset__bind_var_4_p_0(
#line 145 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_18,
#line 145 "varset.m"
  MR_Word mercury__varset__Var_5,
#line 145 "varset.m"
  MR_Word mercury__varset__Value_6,
#line 145 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_VarSet_0_10,
#line 145 "varset.m"
  MR_Word * mercury__varset__STATE_VARIABLE_VarSet_11)
#line 145 "varset.m"
{
#line 486 "varset.m"
  {
#line 486 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 486 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_19_19 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 486 "varset.m"
    MR_Word mercury__varset__TypeInfo_20_20;
#line 486 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_21_21;
#line 486 "varset.m"
    MR_Word mercury__varset__TypeInfo_22_22;
#line 486 "varset.m"
    MR_Word mercury__varset__Values0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_10, (MR_Integer) 2)));
#line 486 "varset.m"
    MR_Word mercury__varset__Values_9;
#line 487 "varset.m"
    MR_Word mercury__varset__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_10, (MR_Integer) 0)));
#line 487 "varset.m"
    MR_Word mercury__varset__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_10, (MR_Integer) 1)));
#line 476 "map.opt"
    MR_Word mercury__varset__conv0_Values_9;
#line 489 "varset.m"
    MR_Word mercury__varset__V_15_15;
#line 489 "varset.m"
    MR_Word mercury__varset__V_16_16;
#line 489 "varset.m"
    MR_Word mercury__varset__V_17_17;

#line 3986 "varset.c"
    {
#line 3988 "varset.c"
      mercury__varset__TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3990 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_20_20, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_19_19));
#line 3992 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_20_20, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_18));
#line 3994 "varset.c"
    }
#line 3996 "varset.c"
    mercury__varset__TypeCtorInfo_21_21 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 3998 "varset.c"
    {
#line 4000 "varset.c"
      mercury__varset__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4002 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_22_22, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_21_21));
#line 4004 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_22_22, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_18));
#line 4006 "varset.c"
    }
#line 476 "map.opt"
    {
#line 476 "map.opt"
      mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__varset__TypeInfo_for_T_18, mercury__varset__TypeInfo_20_20, mercury__varset__TypeInfo_22_22, mercury__varset__Var_5, ((MR_Box) (mercury__varset__Value_6)), (MR_Word) mercury__varset__Values0_8, &mercury__varset__conv0_Values_9);
    }
#line 476 "map.opt"
    mercury__varset__Values_9 = (MR_Word) mercury__varset__conv0_Values_9;
#line 489 "varset.m"
    mercury__varset__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_10, (MR_Integer) 0)));
#line 489 "varset.m"
    mercury__varset__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_10, (MR_Integer) 1)));
#line 489 "varset.m"
    mercury__varset__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_10, (MR_Integer) 2)));
#line 489 "varset.m"
    {
#line 489 "varset.m"
      MR_Word base;
#line 489 "varset.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 489 "varset.m"
      *mercury__varset__STATE_VARIABLE_VarSet_11 = base;
#line 489 "varset.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__varset__V_15_15));
#line 489 "varset.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__varset__V_16_16));
#line 489 "varset.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__varset__Values_9));
#line 489 "varset.m"
    }
#line 486 "varset.m"
  }
#line 145 "varset.m"
}

#line 144 "varset.m"
MR_Word MR_CALL 
mercury__varset__bind_var_3_f_0(
#line 144 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_11,
#line 144 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_VarSet_0_8,
#line 144 "varset.m"
  MR_Word mercury__varset__Var_6,
#line 144 "varset.m"
  MR_Word mercury__varset__Value_7)
#line 144 "varset.m"
{
#line 484 "varset.m"
  {
#line 484 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 484 "varset.m"
    MR_Word mercury__varset__STATE_VARIABLE_VarSet_9;

#line 484 "varset.m"
    {
#line 484 "varset.m"
      mercury__varset__bind_var_4_p_0(mercury__varset__TypeInfo_for_T_11, mercury__varset__Var_6, mercury__varset__Value_7, mercury__varset__STATE_VARIABLE_VarSet_0_8, &mercury__varset__STATE_VARIABLE_VarSet_9);
    }
#line 484 "varset.m"
    return mercury__varset__STATE_VARIABLE_VarSet_9;
#line 484 "varset.m"
  }
#line 144 "varset.m"
}

#line 137 "varset.m"
MR_bool MR_CALL 
mercury__varset__search_name_3_p_0(
#line 137 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_10,
#line 137 "varset.m"
  MR_Word mercury__varset__VarSet_4,
#line 137 "varset.m"
  MR_Word mercury__varset__Var_5,
#line 137 "varset.m"
  MR_String * mercury__varset__Name_6)
#line 137 "varset.m"
{
#line 477 "varset.m"
  {
#line 477 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 477 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_11_11 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 477 "varset.m"
    MR_Word mercury__varset__TypeInfo_12_12;
#line 477 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_13_13 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 477 "varset.m"
    MR_Word mercury__varset__Names_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_4, (MR_Integer) 1)));
#line 478 "varset.m"
    MR_Word mercury__varset__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_4, (MR_Integer) 0)));
#line 478 "varset.m"
    MR_Word mercury__varset__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_4, (MR_Integer) 2)));
#line 452 "map.opt"
    MR_Box mercury__varset__conv0_Name_6;

#line 4106 "varset.c"
    {
#line 4108 "varset.c"
      mercury__varset__TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4110 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_12_12, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_11_11));
#line 4112 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_12_12, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_10));
#line 4114 "varset.c"
    }
#line 452 "map.opt"
    {
#line 452 "map.opt"
      mercury__varset__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__varset__TypeInfo_for_T_10, mercury__varset__TypeInfo_12_12, mercury__varset__TypeCtorInfo_13_13, mercury__varset__Names_8, mercury__varset__Var_5, &mercury__varset__conv0_Name_6);
    }
#line 452 "map.opt"
    if (mercury__varset__succeeded)
#line 452 "map.opt"
      {
#line 452 "map.opt"
        *mercury__varset__Name_6 = ((MR_String) mercury__varset__conv0_Name_6);
#line 452 "map.opt"
        mercury__varset__succeeded = MR_TRUE;
#line 452 "map.opt"
      }
#line 477 "varset.m"
    return mercury__varset__succeeded;
#line 477 "varset.m"
  }
#line 137 "varset.m"
}

#line 131 "varset.m"
void MR_CALL 
mercury__varset__lookup_name_4_p_0(
#line 131 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_12,
#line 131 "varset.m"
  MR_Word mercury__varset__VarSet_5,
#line 131 "varset.m"
  MR_Word mercury__varset__Id_6,
#line 131 "varset.m"
  MR_String mercury__varset__Prefix_7,
#line 131 "varset.m"
  MR_String * mercury__varset__Name_8)
#line 131 "varset.m"
{
#line 472 "varset.m"
  {
#line 472 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 472 "varset.m"
    MR_String mercury__varset__NamePrime_9;
#line 477 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_11_19 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 477 "varset.m"
    MR_Word mercury__varset__TypeInfo_12_20;
#line 477 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_13_21 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 477 "varset.m"
    MR_Word mercury__varset__Names_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_5, (MR_Integer) 1)));
#line 478 "varset.m"
    MR_Word mercury__varset__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_5, (MR_Integer) 0)));
#line 478 "varset.m"
    MR_Word mercury__varset__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_5, (MR_Integer) 2)));
#line 452 "map.opt"
    MR_Box mercury__varset__conv0_NamePrime_9;

#line 4174 "varset.c"
    {
#line 4176 "varset.c"
      mercury__varset__TypeInfo_12_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4178 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_12_20, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_11_19));
#line 4180 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_12_20, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_12));
#line 4182 "varset.c"
    }
#line 452 "map.opt"
    {
#line 452 "map.opt"
      mercury__varset__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__varset__TypeInfo_for_T_12, mercury__varset__TypeInfo_12_20, mercury__varset__TypeCtorInfo_13_21, mercury__varset__Names_17, mercury__varset__Id_6, &mercury__varset__conv0_NamePrime_9);
    }
#line 452 "map.opt"
    if (mercury__varset__succeeded)
#line 452 "map.opt"
      {
#line 452 "map.opt"
        mercury__varset__NamePrime_9 = ((MR_String) mercury__varset__conv0_NamePrime_9);
#line 452 "map.opt"
        mercury__varset__succeeded = MR_TRUE;
#line 452 "map.opt"
      }
#line 472 "varset.m"
    if (mercury__varset__succeeded)
#line 471 "varset.m"
      *mercury__varset__Name_8 = mercury__varset__NamePrime_9;
#line 472 "varset.m"
    else
#line 473 "varset.m"
      {
#line 473 "varset.m"
        MR_Integer mercury__varset__VarNum_10 = (MR_Integer) mercury__varset__Id_6;
#line 473 "varset.m"
        MR_String mercury__varset__V_11_11;

#line 554 "string.opt"
        {
#line 554 "string.opt"
          mercury__string__int_to_base_string_3_p_0(mercury__varset__VarNum_10, (MR_Integer) 10, &mercury__varset__V_11_11);
        }
#line 159 "string.opt"
        {
#line 159 "string.opt"
          mercury__string__append_3_p_2(mercury__varset__Prefix_7, mercury__varset__V_11_11, mercury__varset__Name_8);
#line 159 "string.opt"
          return;
        }
#line 473 "varset.m"
      }
#line 472 "varset.m"
  }
#line 131 "varset.m"
}

#line 130 "varset.m"
MR_String MR_CALL 
mercury__varset__lookup_name_3_f_0(
#line 130 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_9,
#line 130 "varset.m"
  MR_Word mercury__varset__VarSet_5,
#line 130 "varset.m"
  MR_Word mercury__varset__Id_6,
#line 130 "varset.m"
  MR_String mercury__varset__Prefix_7)
#line 130 "varset.m"
{
#line 467 "varset.m"
  {
#line 467 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 467 "varset.m"
    MR_String mercury__varset__Name_8;

#line 467 "varset.m"
    {
#line 467 "varset.m"
      mercury__varset__lookup_name_4_p_0(mercury__varset__TypeInfo_for_T_9, mercury__varset__VarSet_5, mercury__varset__Id_6, mercury__varset__Prefix_7, &mercury__varset__Name_8);
    }
#line 467 "varset.m"
    return mercury__varset__Name_8;
#line 467 "varset.m"
  }
#line 130 "varset.m"
}

#line 125 "varset.m"
void MR_CALL 
mercury__varset__lookup_name_3_p_0(
#line 125 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_11,
#line 125 "varset.m"
  MR_Word mercury__varset__VarSet_4,
#line 125 "varset.m"
  MR_Word mercury__varset__Var_5,
#line 125 "varset.m"
  MR_String * mercury__varset__Name_6)
#line 125 "varset.m"
{
#line 461 "varset.m"
  {
#line 461 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 461 "varset.m"
    MR_String mercury__varset__NamePrime_7;
#line 477 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_11_18 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 477 "varset.m"
    MR_Word mercury__varset__TypeInfo_12_19;
#line 477 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_13_20 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 477 "varset.m"
    MR_Word mercury__varset__Names_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_4, (MR_Integer) 1)));
#line 478 "varset.m"
    MR_Word mercury__varset__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_4, (MR_Integer) 0)));
#line 478 "varset.m"
    MR_Word mercury__varset__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_4, (MR_Integer) 2)));
#line 452 "map.opt"
    MR_Box mercury__varset__conv0_NamePrime_7;

#line 4297 "varset.c"
    {
#line 4299 "varset.c"
      mercury__varset__TypeInfo_12_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4301 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_12_19, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_11_18));
#line 4303 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_12_19, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_11));
#line 4305 "varset.c"
    }
#line 452 "map.opt"
    {
#line 452 "map.opt"
      mercury__varset__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__varset__TypeInfo_for_T_11, mercury__varset__TypeInfo_12_19, mercury__varset__TypeCtorInfo_13_20, mercury__varset__Names_16, mercury__varset__Var_5, &mercury__varset__conv0_NamePrime_7);
    }
#line 452 "map.opt"
    if (mercury__varset__succeeded)
#line 452 "map.opt"
      {
#line 452 "map.opt"
        mercury__varset__NamePrime_7 = ((MR_String) mercury__varset__conv0_NamePrime_7);
#line 452 "map.opt"
        mercury__varset__succeeded = MR_TRUE;
#line 452 "map.opt"
      }
#line 461 "varset.m"
    if (mercury__varset__succeeded)
#line 460 "varset.m"
      *mercury__varset__Name_6 = mercury__varset__NamePrime_7;
#line 461 "varset.m"
    else
#line 462 "varset.m"
      {
#line 462 "varset.m"
        MR_Integer mercury__varset__VarNum_8 = (MR_Integer) mercury__varset__Var_5;
#line 462 "varset.m"
        MR_String mercury__varset__V_10_10;

#line 554 "string.opt"
        {
#line 554 "string.opt"
          mercury__string__int_to_base_string_3_p_0(mercury__varset__VarNum_8, (MR_Integer) 10, &mercury__varset__V_10_10);
        }
#line 159 "string.opt"
        {
#line 159 "string.opt"
          mercury__string__append_3_p_2((MR_String) "V_", mercury__varset__V_10_10, mercury__varset__Name_6);
#line 159 "string.opt"
          return;
        }
#line 462 "varset.m"
      }
#line 461 "varset.m"
  }
#line 125 "varset.m"
}

#line 124 "varset.m"
MR_String MR_CALL 
mercury__varset__lookup_name_2_f_0(
#line 124 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_7,
#line 124 "varset.m"
  MR_Word mercury__varset__VarSet_4,
#line 124 "varset.m"
  MR_Word mercury__varset__Var_5)
#line 124 "varset.m"
{
#line 456 "varset.m"
  {
#line 456 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 456 "varset.m"
    MR_String mercury__varset__Name_6;

#line 456 "varset.m"
    {
#line 456 "varset.m"
      mercury__varset__lookup_name_3_p_0(mercury__varset__TypeInfo_for_T_7, mercury__varset__VarSet_4, mercury__varset__Var_5, &mercury__varset__Name_6);
    }
#line 456 "varset.m"
    return mercury__varset__Name_6;
#line 456 "varset.m"
  }
#line 124 "varset.m"
}

#line 118 "varset.m"
void MR_CALL 
mercury__varset__name_var_4_p_0(
#line 118 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_18,
#line 118 "varset.m"
  MR_Word mercury__varset__Var_5,
#line 118 "varset.m"
  MR_String mercury__varset__Name_6,
#line 118 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_VarSet_0_10,
#line 118 "varset.m"
  MR_Word * mercury__varset__STATE_VARIABLE_VarSet_11)
#line 118 "varset.m"
{
#line 448 "varset.m"
  {
#line 448 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 448 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_19_19 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 448 "varset.m"
    MR_Word mercury__varset__TypeInfo_20_20;
#line 448 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_21_21;
#line 448 "varset.m"
    MR_Word mercury__varset__Names0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_10, (MR_Integer) 1)));
#line 448 "varset.m"
    MR_Word mercury__varset__Names_9;
#line 449 "varset.m"
    MR_Word mercury__varset__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_10, (MR_Integer) 0)));
#line 449 "varset.m"
    MR_Word mercury__varset__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_10, (MR_Integer) 2)));
#line 451 "varset.m"
    MR_Word mercury__varset__V_15_15;
#line 451 "varset.m"
    MR_Word mercury__varset__V_17_17;
#line 451 "varset.m"
    MR_Word mercury__varset__V_16_16;

#line 4424 "varset.c"
    {
#line 4426 "varset.c"
      mercury__varset__TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4428 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_20_20, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_19_19));
#line 4430 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_20_20, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_18));
#line 4432 "varset.c"
    }
#line 4434 "varset.c"
    mercury__varset__TypeCtorInfo_21_21 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 476 "map.opt"
    {
#line 476 "map.opt"
      mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__varset__TypeInfo_for_T_18, mercury__varset__TypeInfo_20_20, mercury__varset__TypeCtorInfo_21_21, mercury__varset__Var_5, ((MR_Box) (mercury__varset__Name_6)), mercury__varset__Names0_8, &mercury__varset__Names_9);
    }
#line 451 "varset.m"
    mercury__varset__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_10, (MR_Integer) 0)));
#line 451 "varset.m"
    mercury__varset__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_10, (MR_Integer) 1)));
#line 451 "varset.m"
    mercury__varset__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_10, (MR_Integer) 2)));
#line 451 "varset.m"
    {
#line 451 "varset.m"
      MR_Word base;
#line 451 "varset.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 451 "varset.m"
      *mercury__varset__STATE_VARIABLE_VarSet_11 = base;
#line 451 "varset.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__varset__V_15_15));
#line 451 "varset.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__varset__Names_9));
#line 451 "varset.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__varset__V_17_17));
#line 451 "varset.m"
    }
#line 448 "varset.m"
  }
#line 118 "varset.m"
}

#line 117 "varset.m"
MR_Word MR_CALL 
mercury__varset__name_var_3_f_0(
#line 117 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_11,
#line 117 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_VarSet_0_8,
#line 117 "varset.m"
  MR_Word mercury__varset__Var_6,
#line 117 "varset.m"
  MR_String mercury__varset__Name_7)
#line 117 "varset.m"
{
#line 446 "varset.m"
  {
#line 446 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 446 "varset.m"
    MR_Word mercury__varset__STATE_VARIABLE_VarSet_9;

#line 446 "varset.m"
    {
#line 446 "varset.m"
      mercury__varset__name_var_4_p_0(mercury__varset__TypeInfo_for_T_11, mercury__varset__Var_6, mercury__varset__Name_7, mercury__varset__STATE_VARIABLE_VarSet_0_8, &mercury__varset__STATE_VARIABLE_VarSet_9);
    }
#line 446 "varset.m"
    return mercury__varset__STATE_VARIABLE_VarSet_9;
#line 446 "varset.m"
  }
#line 117 "varset.m"
}

#line 111 "varset.m"
void MR_CALL 
mercury__varset__vars_2_p_0(
#line 111 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_11,
#line 111 "varset.m"
  MR_Word mercury__varset__VarSet_3,
#line 111 "varset.m"
  MR_Word * mercury__varset__Vars_4)
#line 111 "varset.m"
{
#line 425 "varset.m"
  {
#line 425 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 425 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_12_12;
#line 425 "varset.m"
    MR_Word mercury__varset__TypeInfo_13_13;
#line 425 "varset.m"
    MR_Word mercury__varset__MaxId_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_3, (MR_Integer) 0)));
#line 425 "varset.m"
    MR_Word mercury__varset__N0_6 = (MR_Word) ((MR_Box) ((MR_Integer) 0));
#line 425 "varset.m"
    MR_Word mercury__varset__RevVars_7;
#line 425 "varset.m"
    MR_Word mercury__varset__V_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 426 "varset.m"
    MR_Word mercury__varset__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_3, (MR_Integer) 1)));
#line 426 "varset.m"
    MR_Word mercury__varset__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_3, (MR_Integer) 2)));
#line 429 "varset.m"
    MR_Word mercury__varset__conv0_Vars_4;

#line 428 "varset.m"
    {
#line 428 "varset.m"
      mercury__varset__vars_loop_4_p_0(mercury__varset__TypeInfo_for_T_11, mercury__varset__N0_6, mercury__varset__MaxId_5, mercury__varset__V_8_8, &mercury__varset__RevVars_7);
    }
#line 4539 "varset.c"
    mercury__varset__TypeCtorInfo_12_12 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 4541 "varset.c"
    {
#line 4543 "varset.c"
      mercury__varset__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4545 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_13_13, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_12_12));
#line 4547 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_13_13, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_11));
#line 4549 "varset.c"
    }
#line 429 "varset.m"
    {
#line 429 "varset.m"
      mercury__list__reverse_2_p_0(mercury__varset__TypeInfo_13_13, (MR_Word) mercury__varset__RevVars_7, &mercury__varset__conv0_Vars_4);
    }
#line 429 "varset.m"
    *mercury__varset__Vars_4 = (MR_Word) mercury__varset__conv0_Vars_4;
#line 425 "varset.m"
  }
#line 111 "varset.m"
}

#line 110 "varset.m"
MR_Word MR_CALL 
mercury__varset__vars_1_f_0(
#line 110 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_5,
#line 110 "varset.m"
  MR_Word mercury__varset__VarSet_3)
#line 110 "varset.m"
{
#line 423 "varset.m"
  {
#line 423 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 423 "varset.m"
    MR_Word mercury__varset__Vars_4;

#line 423 "varset.m"
    {
#line 423 "varset.m"
      mercury__varset__vars_2_p_0(mercury__varset__TypeInfo_for_T_5, mercury__varset__VarSet_3, &mercury__varset__Vars_4);
    }
#line 423 "varset.m"
    return mercury__varset__Vars_4;
#line 423 "varset.m"
  }
#line 110 "varset.m"
}

#line 103 "varset.m"
void MR_CALL 
mercury__varset__delete_sorted_vars_3_p_0(
#line 103 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_14,
#line 103 "varset.m"
  MR_Word mercury__varset__DeleteVars_4,
#line 103 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_VarSet_0_11,
#line 103 "varset.m"
  MR_Word * mercury__varset__STATE_VARIABLE_VarSet_12)
#line 103 "varset.m"
{
#line 414 "varset.m"
  {
#line 414 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 414 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_15_15 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 414 "varset.m"
    MR_Word mercury__varset__TypeInfo_16_16;
#line 414 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_17_17;
#line 414 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_18_18;
#line 414 "varset.m"
    MR_Word mercury__varset__TypeInfo_19_19;
#line 414 "varset.m"
    MR_Word mercury__varset__MaxId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_11, (MR_Integer) 0)));
#line 414 "varset.m"
    MR_Word mercury__varset__Names0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_11, (MR_Integer) 1)));
#line 414 "varset.m"
    MR_Word mercury__varset__Values0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_11, (MR_Integer) 2)));
#line 414 "varset.m"
    MR_Word mercury__varset__Names_9;
#line 414 "varset.m"
    MR_Word mercury__varset__Values_10;
#line 416 "varset.m"
    MR_Word mercury__varset__conv0_Names_9;
#line 417 "varset.m"
    MR_Word mercury__varset__conv1_Values_10;

#line 4633 "varset.c"
    {
#line 4635 "varset.c"
      mercury__varset__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4637 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_16_16, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_15_15));
#line 4639 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_16_16, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_14));
#line 4641 "varset.c"
    }
#line 4643 "varset.c"
    mercury__varset__TypeCtorInfo_17_17 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 416 "varset.m"
    {
#line 416 "varset.m"
      mercury__map__delete_sorted_list_3_p_0(mercury__varset__TypeInfo_16_16, mercury__varset__TypeCtorInfo_17_17, (MR_Word) mercury__varset__DeleteVars_4, (MR_Word) mercury__varset__Names0_7, &mercury__varset__conv0_Names_9);
    }
#line 416 "varset.m"
    mercury__varset__Names_9 = (MR_Word) mercury__varset__conv0_Names_9;
#line 4652 "varset.c"
    mercury__varset__TypeCtorInfo_18_18 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 4654 "varset.c"
    {
#line 4656 "varset.c"
      mercury__varset__TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4658 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_19_19, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_18_18));
#line 4660 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_19_19, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_14));
#line 4662 "varset.c"
    }
#line 417 "varset.m"
    {
#line 417 "varset.m"
      mercury__map__delete_sorted_list_3_p_0(mercury__varset__TypeInfo_16_16, mercury__varset__TypeInfo_19_19, (MR_Word) mercury__varset__DeleteVars_4, (MR_Word) mercury__varset__Values0_8, &mercury__varset__conv1_Values_10);
    }
#line 417 "varset.m"
    mercury__varset__Values_10 = (MR_Word) mercury__varset__conv1_Values_10;
#line 418 "varset.m"
    {
#line 418 "varset.m"
      MR_Word base;
#line 418 "varset.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 418 "varset.m"
      *mercury__varset__STATE_VARIABLE_VarSet_12 = base;
#line 418 "varset.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__varset__MaxId_6));
#line 418 "varset.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__varset__Names_9));
#line 418 "varset.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__varset__Values_10));
#line 418 "varset.m"
    }
#line 414 "varset.m"
  }
#line 103 "varset.m"
}

#line 102 "varset.m"
MR_Word MR_CALL 
mercury__varset__delete_sorted_vars_2_f_0(
#line 102 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_9,
#line 102 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_VarSet_0_6,
#line 102 "varset.m"
  MR_Word mercury__varset__DeleteVars_5)
#line 102 "varset.m"
{
#line 412 "varset.m"
  {
#line 412 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 412 "varset.m"
    MR_Word mercury__varset__STATE_VARIABLE_VarSet_7;

#line 412 "varset.m"
    {
#line 412 "varset.m"
      mercury__varset__delete_sorted_vars_3_p_0(mercury__varset__TypeInfo_for_T_9, mercury__varset__DeleteVars_5, mercury__varset__STATE_VARIABLE_VarSet_0_6, &mercury__varset__STATE_VARIABLE_VarSet_7);
    }
#line 412 "varset.m"
    return mercury__varset__STATE_VARIABLE_VarSet_7;
#line 412 "varset.m"
  }
#line 102 "varset.m"
}

#line 95 "varset.m"
void MR_CALL 
mercury__varset__delete_vars_3_p_0(
#line 95 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_14,
#line 95 "varset.m"
  MR_Word mercury__varset__DeleteVars_4,
#line 95 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_VarSet_0_11,
#line 95 "varset.m"
  MR_Word * mercury__varset__STATE_VARIABLE_VarSet_12)
#line 95 "varset.m"
{
#line 405 "varset.m"
  {
#line 405 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 405 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_15_15 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 405 "varset.m"
    MR_Word mercury__varset__TypeInfo_16_16;
#line 405 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_17_17;
#line 405 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_18_18;
#line 405 "varset.m"
    MR_Word mercury__varset__TypeInfo_19_19;
#line 405 "varset.m"
    MR_Word mercury__varset__MaxId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_11, (MR_Integer) 0)));
#line 405 "varset.m"
    MR_Word mercury__varset__Names0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_11, (MR_Integer) 1)));
#line 405 "varset.m"
    MR_Word mercury__varset__Values0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_11, (MR_Integer) 2)));
#line 405 "varset.m"
    MR_Word mercury__varset__Names_9;
#line 405 "varset.m"
    MR_Word mercury__varset__Values_10;
#line 407 "varset.m"
    MR_Word mercury__varset__conv0_Names_9;
#line 408 "varset.m"
    MR_Word mercury__varset__conv1_Values_10;

#line 4764 "varset.c"
    {
#line 4766 "varset.c"
      mercury__varset__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4768 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_16_16, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_15_15));
#line 4770 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_16_16, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_14));
#line 4772 "varset.c"
    }
#line 4774 "varset.c"
    mercury__varset__TypeCtorInfo_17_17 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 407 "varset.m"
    {
#line 407 "varset.m"
      mercury__map__delete_list_3_p_0(mercury__varset__TypeInfo_16_16, mercury__varset__TypeCtorInfo_17_17, (MR_Word) mercury__varset__DeleteVars_4, (MR_Word) mercury__varset__Names0_7, &mercury__varset__conv0_Names_9);
    }
#line 407 "varset.m"
    mercury__varset__Names_9 = (MR_Word) mercury__varset__conv0_Names_9;
#line 4783 "varset.c"
    mercury__varset__TypeCtorInfo_18_18 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 4785 "varset.c"
    {
#line 4787 "varset.c"
      mercury__varset__TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4789 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_19_19, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_18_18));
#line 4791 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_19_19, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_14));
#line 4793 "varset.c"
    }
#line 408 "varset.m"
    {
#line 408 "varset.m"
      mercury__map__delete_list_3_p_0(mercury__varset__TypeInfo_16_16, mercury__varset__TypeInfo_19_19, (MR_Word) mercury__varset__DeleteVars_4, (MR_Word) mercury__varset__Values0_8, &mercury__varset__conv1_Values_10);
    }
#line 408 "varset.m"
    mercury__varset__Values_10 = (MR_Word) mercury__varset__conv1_Values_10;
#line 409 "varset.m"
    {
#line 409 "varset.m"
      MR_Word base;
#line 409 "varset.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 409 "varset.m"
      *mercury__varset__STATE_VARIABLE_VarSet_12 = base;
#line 409 "varset.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__varset__MaxId_6));
#line 409 "varset.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__varset__Names_9));
#line 409 "varset.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__varset__Values_10));
#line 409 "varset.m"
    }
#line 405 "varset.m"
  }
#line 95 "varset.m"
}

#line 94 "varset.m"
MR_Word MR_CALL 
mercury__varset__delete_vars_2_f_0(
#line 94 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_9,
#line 94 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_VarSet_0_6,
#line 94 "varset.m"
  MR_Word mercury__varset__DeleteVars_5)
#line 94 "varset.m"
{
#line 403 "varset.m"
  {
#line 403 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 403 "varset.m"
    MR_Word mercury__varset__STATE_VARIABLE_VarSet_7;

#line 403 "varset.m"
    {
#line 403 "varset.m"
      mercury__varset__delete_vars_3_p_0(mercury__varset__TypeInfo_for_T_9, mercury__varset__DeleteVars_5, mercury__varset__STATE_VARIABLE_VarSet_0_6, &mercury__varset__STATE_VARIABLE_VarSet_7);
    }
#line 403 "varset.m"
    return mercury__varset__STATE_VARIABLE_VarSet_7;
#line 403 "varset.m"
  }
#line 94 "varset.m"
}

#line 90 "varset.m"
void MR_CALL 
mercury__varset__delete_var_3_p_0(
#line 90 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_14,
#line 90 "varset.m"
  MR_Word mercury__varset__DeleteVar_4,
#line 90 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_VarSet_0_11,
#line 90 "varset.m"
  MR_Word * mercury__varset__STATE_VARIABLE_VarSet_12)
#line 90 "varset.m"
{
#line 394 "varset.m"
  {
#line 394 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 394 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_15_15 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 394 "varset.m"
    MR_Word mercury__varset__TypeInfo_16_16;
#line 394 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_17_17;
#line 394 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_18_18;
#line 394 "varset.m"
    MR_Word mercury__varset__TypeInfo_19_19;
#line 394 "varset.m"
    MR_Word mercury__varset__MaxId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_11, (MR_Integer) 0)));
#line 394 "varset.m"
    MR_Word mercury__varset__Names0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_11, (MR_Integer) 1)));
#line 394 "varset.m"
    MR_Word mercury__varset__Values0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_11, (MR_Integer) 2)));
#line 394 "varset.m"
    MR_Word mercury__varset__Names_9;
#line 394 "varset.m"
    MR_Word mercury__varset__Values_10;
#line 79 "tree234.opt"
    MR_Word mercury__varset__V_7_26;
#line 79 "tree234.opt"
    MR_Word mercury__varset__conv0_Names_9;
#line 79 "tree234.opt"
    MR_Word mercury__varset__V_7_33;
#line 79 "tree234.opt"
    MR_Word mercury__varset__conv1_Values_10;

#line 4899 "varset.c"
    {
#line 4901 "varset.c"
      mercury__varset__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4903 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_16_16, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_15_15));
#line 4905 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_16_16, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_14));
#line 4907 "varset.c"
    }
#line 4909 "varset.c"
    mercury__varset__TypeCtorInfo_17_17 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 79 "tree234.opt"
    {
#line 79 "tree234.opt"
      mercury__tree234__delete_2_4_p_0(mercury__varset__TypeInfo_16_16, mercury__varset__TypeCtorInfo_17_17, (MR_Word) mercury__varset__Names0_7, ((MR_Box) (mercury__varset__DeleteVar_4)), &mercury__varset__conv0_Names_9, &mercury__varset__V_7_26);
    }
#line 79 "tree234.opt"
    mercury__varset__Names_9 = (MR_Word) mercury__varset__conv0_Names_9;
#line 4918 "varset.c"
    mercury__varset__TypeCtorInfo_18_18 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 4920 "varset.c"
    {
#line 4922 "varset.c"
      mercury__varset__TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4924 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_19_19, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_18_18));
#line 4926 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_19_19, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_14));
#line 4928 "varset.c"
    }
#line 79 "tree234.opt"
    {
#line 79 "tree234.opt"
      mercury__tree234__delete_2_4_p_0(mercury__varset__TypeInfo_16_16, mercury__varset__TypeInfo_19_19, (MR_Word) mercury__varset__Values0_8, ((MR_Box) (mercury__varset__DeleteVar_4)), &mercury__varset__conv1_Values_10, &mercury__varset__V_7_33);
    }
#line 79 "tree234.opt"
    mercury__varset__Values_10 = (MR_Word) mercury__varset__conv1_Values_10;
#line 398 "varset.m"
    {
#line 398 "varset.m"
      MR_Word base;
#line 398 "varset.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 398 "varset.m"
      *mercury__varset__STATE_VARIABLE_VarSet_12 = base;
#line 398 "varset.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__varset__MaxId_6));
#line 398 "varset.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__varset__Names_9));
#line 398 "varset.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__varset__Values_10));
#line 398 "varset.m"
    }
#line 394 "varset.m"
  }
#line 90 "varset.m"
}

#line 89 "varset.m"
MR_Word MR_CALL 
mercury__varset__delete_var_2_f_0(
#line 89 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_9,
#line 89 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_VarSet_0_6,
#line 89 "varset.m"
  MR_Word mercury__varset__DeleteVar_5)
#line 89 "varset.m"
{
#line 392 "varset.m"
  {
#line 392 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 392 "varset.m"
    MR_Word mercury__varset__STATE_VARIABLE_VarSet_7;

#line 392 "varset.m"
    {
#line 392 "varset.m"
      mercury__varset__delete_var_3_p_0(mercury__varset__TypeInfo_for_T_9, mercury__varset__DeleteVar_5, mercury__varset__STATE_VARIABLE_VarSet_0_6, &mercury__varset__STATE_VARIABLE_VarSet_7);
    }
#line 392 "varset.m"
    return mercury__varset__STATE_VARIABLE_VarSet_7;
#line 392 "varset.m"
  }
#line 89 "varset.m"
}

#line 82 "varset.m"
void MR_CALL 
mercury__varset__new_vars_4_p_0(
#line 82 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_13,
#line 82 "varset.m"
  MR_Integer mercury__varset__NumVars_5,
#line 82 "varset.m"
  MR_Word * mercury__varset__NewVars_6,
#line 82 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_VarSet_0_9,
#line 82 "varset.m"
  MR_Word * mercury__varset__STATE_VARIABLE_VarSet_10)
#line 82 "varset.m"
{
#line 370 "varset.m"
  {
#line 370 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 370 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_14_14;
#line 370 "varset.m"
    MR_Word mercury__varset__TypeInfo_15_15;
#line 370 "varset.m"
    MR_Word mercury__varset__RevNewVars_8;
#line 370 "varset.m"
    MR_Word mercury__varset__V_11_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 373 "varset.m"
    MR_Word mercury__varset__conv0_NewVars_6;

#line 371 "varset.m"
    {
#line 371 "varset.m"
      mercury__varset__new_vars_loop_5_p_0(mercury__varset__TypeInfo_for_T_13, mercury__varset__NumVars_5, mercury__varset__V_11_11, &mercury__varset__RevNewVars_8, mercury__varset__STATE_VARIABLE_VarSet_0_9, mercury__varset__STATE_VARIABLE_VarSet_10);
    }
#line 5023 "varset.c"
    mercury__varset__TypeCtorInfo_14_14 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 5025 "varset.c"
    {
#line 5027 "varset.c"
      mercury__varset__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5029 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_15_15, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_14_14));
#line 5031 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_15_15, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_13));
#line 5033 "varset.c"
    }
#line 373 "varset.m"
    {
#line 373 "varset.m"
      mercury__list__reverse_2_p_0(mercury__varset__TypeInfo_15_15, (MR_Word) mercury__varset__RevNewVars_8, &mercury__varset__conv0_NewVars_6);
    }
#line 373 "varset.m"
    *mercury__varset__NewVars_6 = (MR_Word) mercury__varset__conv0_NewVars_6;
#line 370 "varset.m"
  }
#line 82 "varset.m"
}

#line 77 "varset.m"
void MR_CALL 
mercury__varset__new_maybe_named_var_4_p_0(
#line 77 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_17,
#line 77 "varset.m"
  MR_Word mercury__varset__MaybeName_5,
#line 77 "varset.m"
  MR_Word * mercury__varset__Var_6,
#line 77 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_VarSet_0_14,
#line 77 "varset.m"
  MR_Word * mercury__varset__STATE_VARIABLE_VarSet_15)
#line 77 "varset.m"
{
#line 358 "varset.m"
  {
#line 358 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 358 "varset.m"
    MR_Word mercury__varset__MaxId0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_14, (MR_Integer) 0)));
#line 358 "varset.m"
    MR_Word mercury__varset__Names0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_14, (MR_Integer) 1)));
#line 358 "varset.m"
    MR_Word mercury__varset__Values_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_14, (MR_Integer) 2)));
#line 358 "varset.m"
    MR_Word mercury__varset__MaxId_11;
#line 358 "varset.m"
    MR_Word mercury__varset__Names_12;
#line 358 "varset.m"
    MR_Integer mercury__varset__V_4_21;
#line 358 "varset.m"
    MR_Integer mercury__varset__V_5_22 = (MR_Integer) mercury__varset__MaxId0_8;

#line 132 "term.opt"
    mercury__varset__V_4_21 = (mercury__varset__V_5_22 + (MR_Integer) 1);
#line 131 "term.opt"
    *mercury__varset__Var_6 = (MR_Word) mercury__varset__V_4_21;
#line 131 "term.opt"
    mercury__varset__MaxId_11 = (MR_Word) mercury__varset__V_4_21;
#line 364 "varset.m"
    if ((mercury__varset__MaybeName_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 363 "varset.m"
      mercury__varset__Names_12 = mercury__varset__Names0_9;
#line 364 "varset.m"
    else
#line 365 "varset.m"
      {
#line 365 "varset.m"
        MR_Word mercury__varset__TypeCtorInfo_18_18 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 365 "varset.m"
        MR_Word mercury__varset__TypeInfo_19_19;
#line 365 "varset.m"
        MR_Word mercury__varset__TypeCtorInfo_20_20;
#line 365 "varset.m"
        MR_String mercury__varset__Name_13 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__varset__MaybeName_5, (MR_Integer) 0)));

#line 5104 "varset.c"
        {
#line 5106 "varset.c"
          mercury__varset__TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5108 "varset.c"
          MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_19_19, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_18_18));
#line 5110 "varset.c"
          MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_19_19, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_17));
#line 5112 "varset.c"
        }
#line 5114 "varset.c"
        mercury__varset__TypeCtorInfo_20_20 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 476 "map.opt"
        {
#line 476 "map.opt"
          mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__varset__TypeInfo_for_T_17, mercury__varset__TypeInfo_19_19, mercury__varset__TypeCtorInfo_20_20, *mercury__varset__Var_6, ((MR_Box) (mercury__varset__Name_13)), mercury__varset__Names0_9, &mercury__varset__Names_12);
        }
#line 365 "varset.m"
      }
#line 368 "varset.m"
    {
#line 368 "varset.m"
      MR_Word base;
#line 368 "varset.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 368 "varset.m"
      *mercury__varset__STATE_VARIABLE_VarSet_15 = base;
#line 368 "varset.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__varset__MaxId_11));
#line 368 "varset.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__varset__Names_12));
#line 368 "varset.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__varset__Values_10));
#line 368 "varset.m"
    }
#line 358 "varset.m"
  }
#line 77 "varset.m"
}

#line 72 "varset.m"
void MR_CALL 
mercury__varset__new_uniquely_named_var_4_p_0(
#line 72 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_24,
#line 72 "varset.m"
  MR_String mercury__varset__Name_5,
#line 72 "varset.m"
  MR_Word * mercury__varset__Var_6,
#line 72 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_VarSet_0_14,
#line 72 "varset.m"
  MR_Word * mercury__varset__STATE_VARIABLE_VarSet_15)
#line 72 "varset.m"
{
#line 351 "varset.m"
  {
#line 351 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 351 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_25_25;
#line 351 "varset.m"
    MR_Word mercury__varset__TypeInfo_26_26;
#line 351 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_27_27;
#line 351 "varset.m"
    MR_Word mercury__varset__MaxId0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_14, (MR_Integer) 0)));
#line 351 "varset.m"
    MR_Word mercury__varset__Names0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_14, (MR_Integer) 1)));
#line 351 "varset.m"
    MR_Word mercury__varset__Values_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_14, (MR_Integer) 2)));
#line 351 "varset.m"
    MR_Word mercury__varset__MaxId_11;
#line 351 "varset.m"
    MR_Integer mercury__varset__N_12;
#line 351 "varset.m"
    MR_Word mercury__varset__Names_13;
#line 351 "varset.m"
    MR_String mercury__varset__V_16_16;
#line 351 "varset.m"
    MR_String mercury__varset__V_28_28;
#line 351 "varset.m"
    MR_Word mercury__varset__V_34_34;
#line 351 "varset.m"
    MR_String mercury__varset__V_36_36;
#line 351 "varset.m"
    MR_String mercury__varset__V_37_37;
#line 351 "varset.m"
    MR_Integer mercury__varset__V_5_45 = (MR_Integer) mercury__varset__MaxId0_8;
#line 351 "varset.m"
    MR_Word mercury__varset__V_7_51;
#line 351 "varset.m"
    MR_Word mercury__varset__V_8_52;
#line 351 "varset.m"
    MR_Word mercury__varset__V_7_62;
#line 351 "varset.m"
    MR_Word mercury__varset__V_8_63;

#line 132 "term.opt"
    mercury__varset__N_12 = (mercury__varset__V_5_45 + (MR_Integer) 1);
#line 131 "term.opt"
    *mercury__varset__Var_6 = (MR_Word) mercury__varset__N_12;
#line 131 "term.opt"
    mercury__varset__MaxId_11 = (MR_Word) mercury__varset__N_12;
#line 5208 "varset.c"
    mercury__varset__V_34_34 = (MR_Word) &mercury__varset_scalar_common_5[0];
#line 63 "string.format.opt"
    mercury__varset__V_7_51 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 64 "string.format.opt"
    mercury__varset__V_8_52 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 65 "string.format.opt"
    {
#line 65 "string.format.opt"
      mercury__string__format__format_signed_int_component_5_p_0(mercury__varset__V_34_34, mercury__varset__V_7_51, mercury__varset__V_8_52, mercury__varset__N_12, &mercury__varset__V_28_28);
    }
#line 159 "string.opt"
    {
#line 159 "string.opt"
      mercury__string__append_3_p_2((MR_String) "_", mercury__varset__V_28_28, &mercury__varset__V_36_36);
    }
#line 83 "string.format.opt"
    mercury__varset__V_7_62 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 84 "string.format.opt"
    mercury__varset__V_8_63 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 85 "string.format.opt"
    {
#line 85 "string.format.opt"
      mercury__string__format__format_string_component_5_p_0(mercury__varset__V_34_34, mercury__varset__V_7_62, mercury__varset__V_8_63, mercury__varset__Name_5, &mercury__varset__V_37_37);
    }
#line 159 "string.opt"
    {
#line 159 "string.opt"
      mercury__string__append_3_p_2(mercury__varset__V_37_37, mercury__varset__V_36_36, &mercury__varset__V_16_16);
    }
#line 5238 "varset.c"
    mercury__varset__TypeCtorInfo_25_25 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 5240 "varset.c"
    {
#line 5242 "varset.c"
      mercury__varset__TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5244 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_26_26, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_25_25));
#line 5246 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_26_26, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_24));
#line 5248 "varset.c"
    }
#line 5250 "varset.c"
    mercury__varset__TypeCtorInfo_27_27 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 476 "map.opt"
    {
#line 476 "map.opt"
      mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__varset__TypeInfo_for_T_24, mercury__varset__TypeInfo_26_26, mercury__varset__TypeCtorInfo_27_27, *mercury__varset__Var_6, ((MR_Box) (mercury__varset__V_16_16)), mercury__varset__Names0_9, &mercury__varset__Names_13);
    }
#line 356 "varset.m"
    {
#line 356 "varset.m"
      MR_Word base;
#line 356 "varset.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 356 "varset.m"
      *mercury__varset__STATE_VARIABLE_VarSet_15 = base;
#line 356 "varset.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__varset__MaxId_11));
#line 356 "varset.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__varset__Names_13));
#line 356 "varset.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__varset__Values_10));
#line 356 "varset.m"
    }
#line 351 "varset.m"
  }
#line 72 "varset.m"
}

#line 66 "varset.m"
void MR_CALL 
mercury__varset__new_named_var_4_p_0(
#line 66 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_16,
#line 66 "varset.m"
  MR_String mercury__varset__Name_5,
#line 66 "varset.m"
  MR_Word * mercury__varset__Var_6,
#line 66 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_VarSet_0_13,
#line 66 "varset.m"
  MR_Word * mercury__varset__STATE_VARIABLE_VarSet_14)
#line 66 "varset.m"
{
#line 345 "varset.m"
  {
#line 345 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 345 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_17_17;
#line 345 "varset.m"
    MR_Word mercury__varset__TypeInfo_18_18;
#line 345 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_19_19;
#line 345 "varset.m"
    MR_Word mercury__varset__MaxId0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_13, (MR_Integer) 0)));
#line 345 "varset.m"
    MR_Word mercury__varset__Names0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_13, (MR_Integer) 1)));
#line 345 "varset.m"
    MR_Word mercury__varset__Values_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_13, (MR_Integer) 2)));
#line 345 "varset.m"
    MR_Word mercury__varset__MaxId_11;
#line 345 "varset.m"
    MR_Word mercury__varset__Names_12;
#line 345 "varset.m"
    MR_Integer mercury__varset__V_4_20;
#line 345 "varset.m"
    MR_Integer mercury__varset__V_5_21 = (MR_Integer) mercury__varset__MaxId0_8;

#line 132 "term.opt"
    mercury__varset__V_4_20 = (mercury__varset__V_5_21 + (MR_Integer) 1);
#line 131 "term.opt"
    *mercury__varset__Var_6 = (MR_Word) mercury__varset__V_4_20;
#line 131 "term.opt"
    mercury__varset__MaxId_11 = (MR_Word) mercury__varset__V_4_20;
#line 5324 "varset.c"
    mercury__varset__TypeCtorInfo_17_17 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 5326 "varset.c"
    {
#line 5328 "varset.c"
      mercury__varset__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5330 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_18_18, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_17_17));
#line 5332 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_18_18, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_16));
#line 5334 "varset.c"
    }
#line 5336 "varset.c"
    mercury__varset__TypeCtorInfo_19_19 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 476 "map.opt"
    {
#line 476 "map.opt"
      mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__varset__TypeInfo_for_T_16, mercury__varset__TypeInfo_18_18, mercury__varset__TypeCtorInfo_19_19, *mercury__varset__Var_6, ((MR_Box) (mercury__varset__Name_5)), mercury__varset__Names0_9, &mercury__varset__Names_12);
    }
#line 349 "varset.m"
    {
#line 349 "varset.m"
      MR_Word base;
#line 349 "varset.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 349 "varset.m"
      *mercury__varset__STATE_VARIABLE_VarSet_14 = base;
#line 349 "varset.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__varset__MaxId_11));
#line 349 "varset.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__varset__Names_12));
#line 349 "varset.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__varset__Values_10));
#line 349 "varset.m"
    }
#line 345 "varset.m"
  }
#line 66 "varset.m"
}

#line 62 "varset.m"
void MR_CALL 
mercury__varset__new_var_3_p_0(
#line 62 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_16,
#line 62 "varset.m"
  MR_Word * mercury__varset__Var_4,
#line 62 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_VarSet_0_8,
#line 62 "varset.m"
  MR_Word * mercury__varset__STATE_VARIABLE_VarSet_9)
#line 62 "varset.m"
{
#line 340 "varset.m"
  {
#line 340 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 340 "varset.m"
    MR_Word mercury__varset__MaxId0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_8, (MR_Integer) 0)));
#line 340 "varset.m"
    MR_Word mercury__varset__MaxId_7;
#line 340 "varset.m"
    MR_Word mercury__varset__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_8, (MR_Integer) 1)));
#line 340 "varset.m"
    MR_Word mercury__varset__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_8, (MR_Integer) 2)));
#line 340 "varset.m"
    MR_Integer mercury__varset__V_4_17;
#line 340 "varset.m"
    MR_Integer mercury__varset__V_5_18 = (MR_Integer) mercury__varset__MaxId0_6;

#line 132 "term.opt"
    mercury__varset__V_4_17 = (mercury__varset__V_5_18 + (MR_Integer) 1);
#line 131 "term.opt"
    *mercury__varset__Var_4 = (MR_Word) mercury__varset__V_4_17;
#line 131 "term.opt"
    mercury__varset__MaxId_7 = (MR_Word) mercury__varset__V_4_17;
#line 343 "varset.m"
    {
#line 343 "varset.m"
      MR_Word base;
#line 343 "varset.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 343 "varset.m"
      *mercury__varset__STATE_VARIABLE_VarSet_9 = base;
#line 343 "varset.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__varset__MaxId_7));
#line 343 "varset.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__varset__V_11_11));
#line 343 "varset.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__varset__V_12_12));
#line 343 "varset.m"
    }
#line 340 "varset.m"
  }
#line 62 "varset.m"
}

#line 56 "varset.m"
MR_bool MR_CALL 
mercury__varset__is_empty_1_p_0(
#line 56 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_5,
#line 56 "varset.m"
  MR_Word mercury__varset__HeadVar__1_1)
#line 56 "varset.m"
{
#line 335 "varset.m"
  {
#line 335 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 335 "varset.m"
    MR_Word mercury__varset__VarSupply_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__1_1, (MR_Integer) 0)));
#line 335 "varset.m"
    MR_Integer mercury__varset__V_2_6 = (MR_Integer) mercury__varset__VarSupply_2;
#line 335 "varset.m"
    MR_Word mercury__varset__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__1_1, (MR_Integer) 1)));
#line 335 "varset.m"
    MR_Word mercury__varset__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__1_1, (MR_Integer) 2)));

#line 145 "term.opt"
    mercury__varset__succeeded = (mercury__varset__V_2_6 == (MR_Integer) 0);
#line 335 "varset.m"
    return mercury__varset__succeeded;
#line 335 "varset.m"
  }
#line 56 "varset.m"
}

#line 52 "varset.m"
void MR_CALL 
mercury__varset__init_1_p_0(
#line 52 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_6,
#line 52 "varset.m"
  MR_Word * mercury__varset__VarSet_2)
#line 52 "varset.m"
{
#line 327 "varset.m"
  {
#line 327 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 327 "varset.m"
    MR_Word mercury__varset__VarSupply_3 = (MR_Word) ((MR_Box) ((MR_Integer) 0));
#line 327 "varset.m"
    MR_Word mercury__varset__Names_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 327 "varset.m"
    MR_Word mercury__varset__Values_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 331 "varset.m"
    *mercury__varset__VarSet_2 = (MR_Word) &mercury__varset_scalar_common_2[1];
#line 327 "varset.m"
  }
#line 52 "varset.m"
}

#line 51 "varset.m"
MR_Word MR_CALL 
mercury__varset__init_0_f_0(
#line 51 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_3)
#line 51 "varset.m"
{
#line 327 "varset.m"
  {
#line 327 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 327 "varset.m"
    MR_Word mercury__varset__VarSet_2 = (MR_Word) &mercury__varset_scalar_common_2[1];
#line 327 "varset.m"
    MR_Word mercury__varset__VarSupply_5 = (MR_Word) ((MR_Box) ((MR_Integer) 0));
#line 327 "varset.m"
    MR_Word mercury__varset__Names_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 327 "varset.m"
    MR_Word mercury__varset__Values_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 327 "varset.m"
    return mercury__varset__VarSet_2;
#line 327 "varset.m"
  }
#line 51 "varset.m"
}

void mercury__varset__init(void)
{
}

void mercury__varset__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__varset__varset__type_ctor_info_varset_1);
	MR_register_type_ctor_info(&mercury__varset__varset__type_ctor_info_varset_0);
}

void mercury__varset__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module varset. */
