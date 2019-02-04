/*
** Automatically generated from `term_conversion.m'
** by the Mercury compiler,
** version rotd-2017-06-13
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


/* :- module term_conversion. */
/* :- implementation. */

/*
INIT mercury__term_conversion__init
ENDINIT
*/

#include "term_conversion.mih"


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
#include "term_io.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "uint.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "stream.string_writer.mih"
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"




static const MR_PseudoTypeInfo mercury__term_conversion__term_conversion__field_types_term_to_type_arg_context_0_0[3];

static const MR_DuFunctorDesc mercury__term_conversion__term_conversion__du_functor_desc_term_to_type_arg_context_0_0;

static const MR_DuFunctorDescPtr mercury__term_conversion__term_conversion__du_stag_ordered_term_to_type_arg_context_0_0[1];

static const MR_DuPtagLayout mercury__term_conversion__term_conversion__du_ptag_ordered_term_to_type_arg_context_0[1];

static const MR_DuFunctorDescPtr mercury__term_conversion__term_conversion__du_name_ordered_term_to_type_arg_context_0[1];

static const MR_Integer mercury__term_conversion__term_conversion__functor_number_map_term_to_type_arg_context_0[1];

static const MR_FA_TypeInfo_Struct1 mercury__term_conversion__list__ti_list_1term_conversion__type_ctor_info_term_to_type_arg_context_0;

static const MR_FA_PseudoTypeInfo_Struct1 mercury__term_conversion__term__pti_term_1__pseudo_1;

static const MR_PseudoTypeInfo mercury__term_conversion__term_conversion__field_types_term_to_type_error_1_0[4];

static const MR_DuFunctorDesc mercury__term_conversion__term_conversion__du_functor_desc_term_to_type_error_1_0;

static const MR_FA_PseudoTypeInfo_Struct1 mercury__term_conversion__term__pti_var_1__pseudo_1;

static const MR_PseudoTypeInfo mercury__term_conversion__term_conversion__field_types_term_to_type_error_1_1[2];

static const MR_DuFunctorDesc mercury__term_conversion__term_conversion__du_functor_desc_term_to_type_error_1_1;

static const MR_DuFunctorDescPtr mercury__term_conversion__term_conversion__du_stag_ordered_term_to_type_error_1_0[1];

static const MR_DuFunctorDescPtr mercury__term_conversion__term_conversion__du_stag_ordered_term_to_type_error_1_1[1];

static const MR_DuPtagLayout mercury__term_conversion__term_conversion__du_ptag_ordered_term_to_type_error_1[2];

static const MR_DuFunctorDescPtr mercury__term_conversion__term_conversion__du_name_ordered_term_to_type_error_1[2];

static const MR_Integer mercury__term_conversion__term_conversion__functor_number_map_term_to_type_error_1[2];

static const MR_PseudoTypeInfo mercury__term_conversion__term_conversion__field_types_term_to_type_result_2_0[1];

static const MR_DuFunctorDesc mercury__term_conversion__term_conversion__du_functor_desc_term_to_type_result_2_0;

static const MR_FA_PseudoTypeInfo_Struct1 mercury__term_conversion__term_conversion__pti_term_to_type_error_1__pseudo_2;

static const MR_PseudoTypeInfo mercury__term_conversion__term_conversion__field_types_term_to_type_result_2_1[1];

static const MR_DuFunctorDesc mercury__term_conversion__term_conversion__du_functor_desc_term_to_type_result_2_1;

static const MR_DuFunctorDescPtr mercury__term_conversion__term_conversion__du_stag_ordered_term_to_type_result_2_0[1];

static const MR_DuFunctorDescPtr mercury__term_conversion__term_conversion__du_stag_ordered_term_to_type_result_2_1[1];

static const MR_DuPtagLayout mercury__term_conversion__term_conversion__du_ptag_ordered_term_to_type_result_2[2];

static const MR_DuFunctorDescPtr mercury__term_conversion__term_conversion__du_name_ordered_term_to_type_result_2[2];

static const MR_Integer mercury__term_conversion__term_conversion__functor_number_map_term_to_type_result_2[2];

static const MR_FA_PseudoTypeInfo_Struct2 mercury__term_conversion__term_conversion__pti_term_to_type_result_2__pseudo_1__plain_term__type_ctor_info_generic_0;

static MR_bool MR_CALL 
mercury__term_conversion____Unify____term_to_type_arg_context_0_0_10001(
  MR_Box mercury__term_conversion__wrapper_arg_1,
  MR_Box mercury__term_conversion__wrapper_arg_2);

static void MR_CALL 
mercury__term_conversion____Compare____term_to_type_arg_context_0_0_10001(
  MR_Box * mercury__term_conversion__wrapper_arg_1,
  MR_Box mercury__term_conversion__wrapper_arg_2,
  MR_Box mercury__term_conversion__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__term_conversion____Unify____term_to_type_context_0_0_10001(
  MR_Box mercury__term_conversion__wrapper_arg_1,
  MR_Box mercury__term_conversion__wrapper_arg_2);

static void MR_CALL 
mercury__term_conversion____Compare____term_to_type_context_0_0_10001(
  MR_Box * mercury__term_conversion__wrapper_arg_1,
  MR_Box mercury__term_conversion__wrapper_arg_2,
  MR_Box mercury__term_conversion__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__term_conversion____Unify____term_to_type_error_1_0_10001(
  MR_Box mercury__term_conversion__wrapper_arg_1,
  MR_Box mercury__term_conversion__wrapper_arg_2,
  MR_Box mercury__term_conversion__wrapper_arg_3);

static void MR_CALL 
mercury__term_conversion____Compare____term_to_type_error_1_0_10001(
  MR_Box mercury__term_conversion__wrapper_arg_1,
  MR_Box * mercury__term_conversion__wrapper_arg_2,
  MR_Box mercury__term_conversion__wrapper_arg_3,
  MR_Box mercury__term_conversion__wrapper_arg_4);

static MR_bool MR_CALL 
mercury__term_conversion____Unify____term_to_type_result_2_0_10001(
  MR_Box mercury__term_conversion__wrapper_arg_1,
  MR_Box mercury__term_conversion__wrapper_arg_2,
  MR_Box mercury__term_conversion__wrapper_arg_3,
  MR_Box mercury__term_conversion__wrapper_arg_4);

static void MR_CALL 
mercury__term_conversion____Compare____term_to_type_result_2_0_10001(
  MR_Box mercury__term_conversion__wrapper_arg_1,
  MR_Box mercury__term_conversion__wrapper_arg_2,
  MR_Box * mercury__term_conversion__wrapper_arg_3,
  MR_Box mercury__term_conversion__wrapper_arg_4,
  MR_Box mercury__term_conversion__wrapper_arg_5);

static MR_bool MR_CALL 
mercury__term_conversion____Unify____term_to_type_result_1_0_10001(
  MR_Box mercury__term_conversion__wrapper_arg_1,
  MR_Box mercury__term_conversion__wrapper_arg_2,
  MR_Box mercury__term_conversion__wrapper_arg_3);

static void MR_CALL 
mercury__term_conversion____Compare____term_to_type_result_1_0_10001(
  MR_Box mercury__term_conversion__wrapper_arg_1,
  MR_Box * mercury__term_conversion__wrapper_arg_2,
  MR_Box mercury__term_conversion__wrapper_arg_3,
  MR_Box mercury__term_conversion__wrapper_arg_4);

static MR_Word MR_CALL 
mercury__term_conversion__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_55_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_f_in__version_array_0(
  MR_Word mercury__term_conversion__TypeInfo_for_T1_1_16,
  MR_Box mercury__term_conversion__V_7_7,
  MR_Word mercury__term_conversion__V_8_8,
  MR_Integer mercury__term_conversion__V_9_9);

static void MR_CALL 
mercury__term_conversion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_54_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_3_p_in__list_0(
  MR_Word mercury__term_conversion__Var_15,
  MR_Word mercury__term_conversion__HeadVar__2_2,
  MR_Word * mercury__term_conversion__HeadVar__3_3);

static MR_Integer MR_CALL 
mercury__term_conversion__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static void MR_CALL 
mercury__term_conversion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_p_0(
  MR_Word mercury__term_conversion__Context_4,
  MR_Word mercury__term_conversion__TypeInfo_5,
  MR_Word * mercury__term_conversion__Term_6);

static void MR_CALL 
mercury__term_conversion__univ_list_to_term_list_2_p_0(
  MR_Word mercury__term_conversion__TypeInfo_for_T_7,
  MR_Word mercury__term_conversion__HeadVar__1_1,
  MR_Word * mercury__term_conversion__HeadVar__2_2);

static MR_bool MR_CALL 
mercury__term_conversion__univ_to_term_special_case_6_p_0(
  MR_Word mercury__term_conversion__TypeInfo_for_T_78,
  MR_String mercury__term_conversion__ModuleName_7,
  MR_String mercury__term_conversion__TypeCtorName_8,
  MR_Word mercury__term_conversion__TypeArgs_9,
  MR_Word mercury__term_conversion__Univ_10,
  MR_Word mercury__term_conversion__Context_11,
  MR_Word * mercury__term_conversion__Term_12);

static MR_bool MR_CALL 
mercury__term_conversion__term_list_to_univ_list_7_p_0(
  MR_Word mercury__term_conversion__TypeInfo_for_T_33,
  MR_Word mercury__term_conversion__HeadVar__1_1,
  MR_Word mercury__term_conversion__HeadVar__2_2,
  MR_Word mercury__term_conversion__Functor_3,
  MR_Integer mercury__term_conversion__ArgNum_4,
  MR_Word mercury__term_conversion__PrevContext_5,
  MR_Word mercury__term_conversion__TermContext_6,
  MR_Word * mercury__term_conversion__HeadVar__7_7);

static MR_bool MR_CALL 
mercury__term_conversion__term_to_univ_special_case_6_p_0(
  MR_Word mercury__term_conversion__TypeInfo_for_T_151,
  MR_String mercury__term_conversion__ModuleName_7,
  MR_String mercury__term_conversion__TypeCtorName_8,
  MR_Word mercury__term_conversion__TypeArgs_9,
  MR_Word mercury__term_conversion__Term_10,
  MR_Word mercury__term_conversion__PrevContext_11,
  MR_Word * mercury__term_conversion__Result_12);

static void MR_CALL 
mercury__term_conversion__try_term_to_univ_2_4_p_0(
  MR_Word mercury__term_conversion__TypeInfo_for_T_34,
  MR_Word mercury__term_conversion__Term_5,
  MR_Word mercury__term_conversion__Type_6,
  MR_Word mercury__term_conversion__Context_7,
  MR_Word * mercury__term_conversion__Result_8);


static /* final */ const MR_Box mercury__term_conversion_scalar_common_1[2][2];

static /* final */ const MR_Box mercury__term_conversion_scalar_common_2[1][3];

static /* final */ const MR_Box mercury__term_conversion_scalar_common_3[1][4];

static /* final */ const MR_Box mercury__term_conversion_scalar_common_4[2][5];

static /* final */ const MR_Box mercury__term_conversion_scalar_common_6[6][1];


/* sealed */ struct mercury__term_conversion__vector_common_type_5_0_s {
  const MR_String mercury__term_conversion__vector_common_type_5_0__vct_5_f_0;
  const MR_Integer mercury__term_conversion__vector_common_type_5_0__vct_5_f_1;
};

static /* final */ const struct mercury__term_conversion__vector_common_type_5_0_s mercury__term_conversion_vector_common_5[18];



static /* final */ const MR_Box mercury__term_conversion_scalar_common_1[2][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__term_conversion__term_conversion__type_ctor_info_term_to_type_arg_context_0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box mercury__term_conversion_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__term_conversion_scalar_common_3[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__term_conversion_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__term_conversion_scalar_common_4[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__term_conversion_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__term_conversion_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__term_conversion_scalar_common_6[6][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "univ"))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "type_info"))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "array"))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "version_array"))
  },
};


static /* final */ const struct mercury__term_conversion__vector_common_type_5_0_s mercury__term_conversion_vector_common_5[18] = {
  /* row 0 */
  {
    (MR_String) "float",
    (MR_Integer) 0
  },
  /* row 1 */
  {
    (MR_String) "int",
    (MR_Integer) 1
  },
  /* row 2 */
  {
    (MR_String) "string",
    (MR_Integer) 2
  },
  /* row 3 */
  {
    (MR_String) "uint",
    (MR_Integer) 3
  },
  /* row 4 */
  {
    (MR_String) "character",
    (MR_Integer) 0
  },
  /* row 5 */
  {
    (MR_String) "float",
    (MR_Integer) 1
  },
  /* row 6 */
  {
    (MR_String) "int",
    (MR_Integer) 2
  },
  /* row 7 */
  {
    (MR_String) "string",
    (MR_Integer) 3
  },
  /* row 8 */
  {
    (MR_String) "uint",
    (MR_Integer) 4
  },
  /* row 9 */
  {
    (MR_String) "character",
    (MR_Integer) 0
  },
  /* row 10 */
  {
    (MR_String) "float",
    (MR_Integer) 1
  },
  /* row 11 */
  {
    (MR_String) "int",
    (MR_Integer) 2
  },
  /* row 12 */
  {
    (MR_String) "string",
    (MR_Integer) 3
  },
  /* row 13 */
  {
    (MR_String) "uint",
    (MR_Integer) 4
  },
  /* row 14 */
  {
    (MR_String) "bitmap",
    (MR_Integer) 0
  },
  /* row 15 */
  {
    (MR_String) "builtin",
    (MR_Integer) 1
  },
  /* row 16 */
  {
    (MR_String) "type_desc",
    (MR_Integer) 2
  },
  /* row 17 */
  {
    (MR_String) "univ",
    (MR_Integer) 3
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
#include "uint.mh"
#include "version_array.mh"



static const MR_PseudoTypeInfo mercury__term_conversion__term_conversion__field_types_term_to_type_arg_context_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_const_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

static const MR_DuFunctorDesc mercury__term_conversion__term_conversion__du_functor_desc_term_to_type_arg_context_0_0 = {
  (MR_String) "arg_context",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__term_conversion__term_conversion__field_types_term_to_type_arg_context_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__term_conversion__term_conversion__du_stag_ordered_term_to_type_arg_context_0_0[1] = {
  &mercury__term_conversion__term_conversion__du_functor_desc_term_to_type_arg_context_0_0
};

static const MR_DuPtagLayout mercury__term_conversion__term_conversion__du_ptag_ordered_term_to_type_arg_context_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__term_conversion__term_conversion__du_stag_ordered_term_to_type_arg_context_0_0
  }
};

static const MR_DuFunctorDescPtr mercury__term_conversion__term_conversion__du_name_ordered_term_to_type_arg_context_0[1] = {
  &mercury__term_conversion__term_conversion__du_functor_desc_term_to_type_arg_context_0_0
};

static const MR_Integer mercury__term_conversion__term_conversion__functor_number_map_term_to_type_arg_context_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__term_conversion__term_conversion__type_ctor_info_term_to_type_arg_context_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__term_conversion____Unify____term_to_type_arg_context_0_0_10001)),
  ((MR_Box) (mercury__term_conversion____Compare____term_to_type_arg_context_0_0_10001)),
  (MR_String) "term_conversion",
  (MR_String) "term_to_type_arg_context",
  {     mercury__term_conversion__term_conversion__du_name_ordered_term_to_type_arg_context_0 },
  {     mercury__term_conversion__term_conversion__du_ptag_ordered_term_to_type_arg_context_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__term_conversion__term_conversion__functor_number_map_term_to_type_arg_context_0
};

static const MR_FA_TypeInfo_Struct1 mercury__term_conversion__list__ti_list_1term_conversion__type_ctor_info_term_to_type_arg_context_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__term_conversion__term_conversion__type_ctor_info_term_to_type_arg_context_0
  }
};

const MR_TypeCtorInfo_Struct mercury__term_conversion__term_conversion__type_ctor_info_term_to_type_context_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__term_conversion____Unify____term_to_type_context_0_0_10001)),
  ((MR_Box) (mercury__term_conversion____Compare____term_to_type_context_0_0_10001)),
  (MR_String) "term_conversion",
  (MR_String) "term_to_type_context",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__term_conversion__list__ti_list_1term_conversion__type_ctor_info_term_to_type_arg_context_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__term_conversion__term__pti_term_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_PseudoTypeInfo mercury__term_conversion__term_conversion__field_types_term_to_type_error_1_0[4] = {
  (MR_PseudoTypeInfo) &mercury__term_conversion__term__pti_term_1__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__type_desc__type_desc__type_ctor_info_type_desc_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &mercury__term_conversion__list__ti_list_1term_conversion__type_ctor_info_term_to_type_arg_context_0
};

static const MR_DuFunctorDesc mercury__term_conversion__term_conversion__du_functor_desc_term_to_type_error_1_0 = {
  (MR_String) "type_error",
  (MR_Integer) 4,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__term_conversion__term_conversion__field_types_term_to_type_error_1_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__term_conversion__term__pti_var_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_PseudoTypeInfo mercury__term_conversion__term_conversion__field_types_term_to_type_error_1_1[2] = {
  (MR_PseudoTypeInfo) &mercury__term_conversion__term__pti_var_1__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__term_conversion__list__ti_list_1term_conversion__type_ctor_info_term_to_type_arg_context_0
};

static const MR_DuFunctorDesc mercury__term_conversion__term_conversion__du_functor_desc_term_to_type_error_1_1 = {
  (MR_String) "mode_error",
  (MR_Integer) 2,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__term_conversion__term_conversion__field_types_term_to_type_error_1_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__term_conversion__term_conversion__du_stag_ordered_term_to_type_error_1_0[1] = {
  &mercury__term_conversion__term_conversion__du_functor_desc_term_to_type_error_1_0
};

static const MR_DuFunctorDescPtr mercury__term_conversion__term_conversion__du_stag_ordered_term_to_type_error_1_1[1] = {
  &mercury__term_conversion__term_conversion__du_functor_desc_term_to_type_error_1_1
};

static const MR_DuPtagLayout mercury__term_conversion__term_conversion__du_ptag_ordered_term_to_type_error_1[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__term_conversion__term_conversion__du_stag_ordered_term_to_type_error_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__term_conversion__term_conversion__du_stag_ordered_term_to_type_error_1_1
  }
};

static const MR_DuFunctorDescPtr mercury__term_conversion__term_conversion__du_name_ordered_term_to_type_error_1[2] = {
  &mercury__term_conversion__term_conversion__du_functor_desc_term_to_type_error_1_1,
  &mercury__term_conversion__term_conversion__du_functor_desc_term_to_type_error_1_0
};

static const MR_Integer mercury__term_conversion__term_conversion__functor_number_map_term_to_type_error_1[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__term_conversion__term_conversion__type_ctor_info_term_to_type_error_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__term_conversion____Unify____term_to_type_error_1_0_10001)),
  ((MR_Box) (mercury__term_conversion____Compare____term_to_type_error_1_0_10001)),
  (MR_String) "term_conversion",
  (MR_String) "term_to_type_error",
  {     mercury__term_conversion__term_conversion__du_name_ordered_term_to_type_error_1 },
  {     mercury__term_conversion__term_conversion__du_ptag_ordered_term_to_type_error_1 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__term_conversion__term_conversion__functor_number_map_term_to_type_error_1
};

static const MR_PseudoTypeInfo mercury__term_conversion__term_conversion__field_types_term_to_type_result_2_0[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

static const MR_DuFunctorDesc mercury__term_conversion__term_conversion__du_functor_desc_term_to_type_result_2_0 = {
  (MR_String) "ok",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__term_conversion__term_conversion__field_types_term_to_type_result_2_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__term_conversion__term_conversion__pti_term_to_type_error_1__pseudo_2 = {
  &mercury__term_conversion__term_conversion__type_ctor_info_term_to_type_error_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

static const MR_PseudoTypeInfo mercury__term_conversion__term_conversion__field_types_term_to_type_result_2_1[1] = {
  (MR_PseudoTypeInfo) &mercury__term_conversion__term_conversion__pti_term_to_type_error_1__pseudo_2
};

static const MR_DuFunctorDesc mercury__term_conversion__term_conversion__du_functor_desc_term_to_type_result_2_1 = {
  (MR_String) "error",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__term_conversion__term_conversion__field_types_term_to_type_result_2_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__term_conversion__term_conversion__du_stag_ordered_term_to_type_result_2_0[1] = {
  &mercury__term_conversion__term_conversion__du_functor_desc_term_to_type_result_2_0
};

static const MR_DuFunctorDescPtr mercury__term_conversion__term_conversion__du_stag_ordered_term_to_type_result_2_1[1] = {
  &mercury__term_conversion__term_conversion__du_functor_desc_term_to_type_result_2_1
};

static const MR_DuPtagLayout mercury__term_conversion__term_conversion__du_ptag_ordered_term_to_type_result_2[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__term_conversion__term_conversion__du_stag_ordered_term_to_type_result_2_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__term_conversion__term_conversion__du_stag_ordered_term_to_type_result_2_1
  }
};

static const MR_DuFunctorDescPtr mercury__term_conversion__term_conversion__du_name_ordered_term_to_type_result_2[2] = {
  &mercury__term_conversion__term_conversion__du_functor_desc_term_to_type_result_2_1,
  &mercury__term_conversion__term_conversion__du_functor_desc_term_to_type_result_2_0
};

static const MR_Integer mercury__term_conversion__term_conversion__functor_number_map_term_to_type_result_2[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__term_conversion__term_conversion__type_ctor_info_term_to_type_result_2 = {
  (MR_Integer) 2,
  (MR_Integer) 17,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__term_conversion____Unify____term_to_type_result_2_0_10001)),
  ((MR_Box) (mercury__term_conversion____Compare____term_to_type_result_2_0_10001)),
  (MR_String) "term_conversion",
  (MR_String) "term_to_type_result",
  {     mercury__term_conversion__term_conversion__du_name_ordered_term_to_type_result_2 },
  {     mercury__term_conversion__term_conversion__du_ptag_ordered_term_to_type_result_2 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__term_conversion__term_conversion__functor_number_map_term_to_type_result_2
};

static const MR_FA_PseudoTypeInfo_Struct2 mercury__term_conversion__term_conversion__pti_term_to_type_result_2__pseudo_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term_conversion__term_conversion__type_ctor_info_term_to_type_result_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

const MR_TypeCtorInfo_Struct mercury__term_conversion__term_conversion__type_ctor_info_term_to_type_result_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__term_conversion____Unify____term_to_type_result_1_0_10001)),
  ((MR_Box) (mercury__term_conversion____Compare____term_to_type_result_1_0_10001)),
  (MR_String) "term_conversion",
  (MR_String) "term_to_type_result",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__term_conversion__term_conversion__pti_term_to_type_result_2__pseudo_1__plain_term__type_ctor_info_generic_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static MR_bool MR_CALL 
mercury__term_conversion____Unify____term_to_type_arg_context_0_0_10001(
  MR_Box mercury__term_conversion__wrapper_arg_1,
  MR_Box mercury__term_conversion__wrapper_arg_2)
{
  {
    MR_bool mercury__term_conversion__succeeded;

    {
      mercury__term_conversion__succeeded = mercury__term_conversion____Unify____term_to_type_arg_context_0_0(((MR_Word) mercury__term_conversion__wrapper_arg_1), ((MR_Word) mercury__term_conversion__wrapper_arg_2));
    }
    return mercury__term_conversion__succeeded;
  }
}

static void MR_CALL 
mercury__term_conversion____Compare____term_to_type_arg_context_0_0_10001(
  MR_Box * mercury__term_conversion__wrapper_arg_1,
  MR_Box mercury__term_conversion__wrapper_arg_2,
  MR_Box mercury__term_conversion__wrapper_arg_3)
{
  {
    MR_Word mercury__term_conversion__conv0_HeadVar__1_1;

    {
      mercury__term_conversion____Compare____term_to_type_arg_context_0_0(&mercury__term_conversion__conv0_HeadVar__1_1, ((MR_Word) mercury__term_conversion__wrapper_arg_2), ((MR_Word) mercury__term_conversion__wrapper_arg_3));
    }
    *mercury__term_conversion__wrapper_arg_1 = ((MR_Box) (mercury__term_conversion__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__term_conversion____Unify____term_to_type_context_0_0_10001(
  MR_Box mercury__term_conversion__wrapper_arg_1,
  MR_Box mercury__term_conversion__wrapper_arg_2)
{
  {
    MR_bool mercury__term_conversion__succeeded;

    {
      mercury__term_conversion__succeeded = mercury__term_conversion____Unify____term_to_type_context_0_0(((MR_Word) mercury__term_conversion__wrapper_arg_1), ((MR_Word) mercury__term_conversion__wrapper_arg_2));
    }
    return mercury__term_conversion__succeeded;
  }
}

static void MR_CALL 
mercury__term_conversion____Compare____term_to_type_context_0_0_10001(
  MR_Box * mercury__term_conversion__wrapper_arg_1,
  MR_Box mercury__term_conversion__wrapper_arg_2,
  MR_Box mercury__term_conversion__wrapper_arg_3)
{
  {
    MR_Word mercury__term_conversion__conv0_HeadVar__1_1;

    {
      mercury__term_conversion____Compare____term_to_type_context_0_0(&mercury__term_conversion__conv0_HeadVar__1_1, ((MR_Word) mercury__term_conversion__wrapper_arg_2), ((MR_Word) mercury__term_conversion__wrapper_arg_3));
    }
    *mercury__term_conversion__wrapper_arg_1 = ((MR_Box) (mercury__term_conversion__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__term_conversion____Unify____term_to_type_error_1_0_10001(
  MR_Box mercury__term_conversion__wrapper_arg_1,
  MR_Box mercury__term_conversion__wrapper_arg_2,
  MR_Box mercury__term_conversion__wrapper_arg_3)
{
  {
    MR_bool mercury__term_conversion__succeeded;

    {
      mercury__term_conversion__succeeded = mercury__term_conversion____Unify____term_to_type_error_1_0(((MR_Word) mercury__term_conversion__wrapper_arg_1), ((MR_Word) mercury__term_conversion__wrapper_arg_2), ((MR_Word) mercury__term_conversion__wrapper_arg_3));
    }
    return mercury__term_conversion__succeeded;
  }
}

static void MR_CALL 
mercury__term_conversion____Compare____term_to_type_error_1_0_10001(
  MR_Box mercury__term_conversion__wrapper_arg_1,
  MR_Box * mercury__term_conversion__wrapper_arg_2,
  MR_Box mercury__term_conversion__wrapper_arg_3,
  MR_Box mercury__term_conversion__wrapper_arg_4)
{
  {
    MR_Word mercury__term_conversion__conv0_HeadVar__1_1;

    {
      mercury__term_conversion____Compare____term_to_type_error_1_0(((MR_Word) mercury__term_conversion__wrapper_arg_1), &mercury__term_conversion__conv0_HeadVar__1_1, ((MR_Word) mercury__term_conversion__wrapper_arg_3), ((MR_Word) mercury__term_conversion__wrapper_arg_4));
    }
    *mercury__term_conversion__wrapper_arg_2 = ((MR_Box) (mercury__term_conversion__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__term_conversion____Unify____term_to_type_result_2_0_10001(
  MR_Box mercury__term_conversion__wrapper_arg_1,
  MR_Box mercury__term_conversion__wrapper_arg_2,
  MR_Box mercury__term_conversion__wrapper_arg_3,
  MR_Box mercury__term_conversion__wrapper_arg_4)
{
  {
    MR_bool mercury__term_conversion__succeeded;

    {
      mercury__term_conversion__succeeded = mercury__term_conversion____Unify____term_to_type_result_2_0(((MR_Word) mercury__term_conversion__wrapper_arg_1), ((MR_Word) mercury__term_conversion__wrapper_arg_2), ((MR_Word) mercury__term_conversion__wrapper_arg_3), ((MR_Word) mercury__term_conversion__wrapper_arg_4));
    }
    return mercury__term_conversion__succeeded;
  }
}

static void MR_CALL 
mercury__term_conversion____Compare____term_to_type_result_2_0_10001(
  MR_Box mercury__term_conversion__wrapper_arg_1,
  MR_Box mercury__term_conversion__wrapper_arg_2,
  MR_Box * mercury__term_conversion__wrapper_arg_3,
  MR_Box mercury__term_conversion__wrapper_arg_4,
  MR_Box mercury__term_conversion__wrapper_arg_5)
{
  {
    MR_Word mercury__term_conversion__conv0_HeadVar__1_1;

    {
      mercury__term_conversion____Compare____term_to_type_result_2_0(((MR_Word) mercury__term_conversion__wrapper_arg_1), ((MR_Word) mercury__term_conversion__wrapper_arg_2), &mercury__term_conversion__conv0_HeadVar__1_1, ((MR_Word) mercury__term_conversion__wrapper_arg_4), ((MR_Word) mercury__term_conversion__wrapper_arg_5));
    }
    *mercury__term_conversion__wrapper_arg_3 = ((MR_Box) (mercury__term_conversion__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__term_conversion____Unify____term_to_type_result_1_0_10001(
  MR_Box mercury__term_conversion__wrapper_arg_1,
  MR_Box mercury__term_conversion__wrapper_arg_2,
  MR_Box mercury__term_conversion__wrapper_arg_3)
{
  {
    MR_bool mercury__term_conversion__succeeded;

    {
      mercury__term_conversion__succeeded = mercury__term_conversion____Unify____term_to_type_result_1_0(((MR_Word) mercury__term_conversion__wrapper_arg_1), ((MR_Word) mercury__term_conversion__wrapper_arg_2), ((MR_Word) mercury__term_conversion__wrapper_arg_3));
    }
    return mercury__term_conversion__succeeded;
  }
}

static void MR_CALL 
mercury__term_conversion____Compare____term_to_type_result_1_0_10001(
  MR_Box mercury__term_conversion__wrapper_arg_1,
  MR_Box * mercury__term_conversion__wrapper_arg_2,
  MR_Box mercury__term_conversion__wrapper_arg_3,
  MR_Box mercury__term_conversion__wrapper_arg_4)
{
  {
    MR_Word mercury__term_conversion__conv0_HeadVar__1_1;

    {
      mercury__term_conversion____Compare____term_to_type_result_1_0(((MR_Word) mercury__term_conversion__wrapper_arg_1), &mercury__term_conversion__conv0_HeadVar__1_1, ((MR_Word) mercury__term_conversion__wrapper_arg_3), ((MR_Word) mercury__term_conversion__wrapper_arg_4));
    }
    *mercury__term_conversion__wrapper_arg_2 = ((MR_Box) (mercury__term_conversion__conv0_HeadVar__1_1));
  }
}

static MR_Word MR_CALL 
mercury__term_conversion__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_55_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_f_in__version_array_0(
  MR_Word mercury__term_conversion__TypeInfo_for_T1_1_16,
  MR_Box mercury__term_conversion__V_7_7,
  MR_Word mercury__term_conversion__V_8_8,
  MR_Integer mercury__term_conversion__V_9_9)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__term_conversion__succeeded = ((MR_Integer) 0 <= mercury__term_conversion__V_9_9);
        MR_Word mercury__term_conversion__V_5_10;

        if (mercury__term_conversion__succeeded)
          {
            MR_Word mercury__term_conversion__V_11_12;
            MR_Integer mercury__term_conversion__V_13_13;
            MR_Box mercury__term_conversion__V_12_14;

            {
              mercury__term_conversion__V_12_14 = mercury__version_array__lookup_2_f_0(mercury__term_conversion__TypeInfo_for_T1_1_16, mercury__term_conversion__V_7_7, mercury__term_conversion__V_9_9);
            }
            {
              mercury__term_conversion__V_11_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__term_conversion__V_11_12, 0) = mercury__term_conversion__V_12_14;
              MR_hl_field(MR_mktag(1), mercury__term_conversion__V_11_12, 1) = ((MR_Box) (mercury__term_conversion__V_8_8));
            }
            mercury__term_conversion__V_13_13 = (mercury__term_conversion__V_9_9 - (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Word mercury__term_conversion__next_value_of_V_8_8 = mercury__term_conversion__V_11_12;
              MR_Integer mercury__term_conversion__next_value_of_V_9_9 = mercury__term_conversion__V_13_13;

              mercury__term_conversion__V_9_9 = mercury__term_conversion__next_value_of_V_9_9;
              mercury__term_conversion__V_8_8 = mercury__term_conversion__next_value_of_V_8_8;
            }
            continue;
          }
        else
          mercury__term_conversion__V_5_10 = mercury__term_conversion__V_8_8;
        return mercury__term_conversion__V_5_10;
      }
      break;
    }
}

static void MR_CALL 
mercury__term_conversion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_54_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_3_p_in__list_0(
  MR_Word mercury__term_conversion__Var_15,
  MR_Word mercury__term_conversion__HeadVar__2_2,
  MR_Word * mercury__term_conversion__HeadVar__3_3)
{
  {
    MR_bool mercury__term_conversion__succeeded;

    if ((mercury__term_conversion__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__term_conversion__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word mercury__term_conversion__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_conversion__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mercury__term_conversion__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_conversion__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mercury__term_conversion__V_8_8;
        MR_Word mercury__term_conversion__V_9_9;

        {
          mercury__term_conversion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_p_0(mercury__term_conversion__Var_15, mercury__term_conversion__V_6_6, &mercury__term_conversion__V_8_8);
        }
        {
          mercury__term_conversion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_54_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_3_p_in__list_0(mercury__term_conversion__Var_15, mercury__term_conversion__V_7_7, &mercury__term_conversion__V_9_9);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *mercury__term_conversion__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term_conversion__V_8_8));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term_conversion__V_9_9));
        }
      }
  }
}

static MR_Integer MR_CALL 
mercury__term_conversion__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  {
    MR_bool mercury__term_conversion__succeeded;

    return (MR_Integer) 1200;
  }
}

static void MR_CALL 
mercury__term_conversion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_p_0(
  MR_Word mercury__term_conversion__Context_4,
  MR_Word mercury__term_conversion__TypeInfo_5,
  MR_Word * mercury__term_conversion__Term_6)
{
  {
    MR_bool mercury__term_conversion__succeeded;
    MR_Word mercury__term_conversion__TypeCtor_7;
    MR_Word mercury__term_conversion__ArgTypes_8;
    MR_String mercury__term_conversion__TypeName_9;
    MR_String mercury__term_conversion__ModuleName_10;
    MR_Word mercury__term_conversion__ArgTerms_11;
    MR_String mercury__term_conversion__V_5_32;
    MR_Integer mercury__term_conversion__V_6_33;
    MR_String mercury__term_conversion__V_5_36;
    MR_Integer mercury__term_conversion__V_6_37;

{
#define MR_PROC_LABEL mercury__term_conversion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_p_0

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc =  mercury__term_conversion__TypeInfo_5 ;
		{
{
    MR_TypeCtorDesc type_ctor_desc;
    MR_TypeInfo     type_info;

    MR_save_transient_registers();

    type_info = (MR_TypeInfo) TypeDesc;
    MR_type_ctor_and_args(type_info, MR_TRUE, &type_ctor_desc, &ArgTypes);
    TypeCtorDesc = (MR_Word) type_ctor_desc;

    MR_restore_transient_registers();
}

		;}
#undef MR_PROC_LABEL
	 mercury__term_conversion__TypeCtor_7  = TypeCtorDesc;
	 mercury__term_conversion__ArgTypes_8  = ArgTypes;
}
{
#define MR_PROC_LABEL mercury__term_conversion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_p_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc =  mercury__term_conversion__TypeCtor_7 ;
		{
{
    MR_TypeCtorDesc type_ctor_desc;

    type_ctor_desc = (MR_TypeCtorDesc) TypeCtorDesc;

    if (MR_TYPECTOR_DESC_IS_VARIABLE_ARITY(type_ctor_desc)) {
        TypeCtorModuleName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_MODULE_NAME(type_ctor_desc);
        TypeCtorName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_NAME(type_ctor_desc);
        TypeCtorArity = MR_TYPECTOR_DESC_GET_VA_ARITY(type_ctor_desc);
    } else {
        MR_TypeCtorInfo type_ctor_info;

        type_ctor_info =
            MR_TYPECTOR_DESC_GET_FIXED_ARITY_TYPE_CTOR_INFO(type_ctor_desc);

        /*
        ** We cast away the const-ness of the module and type names,
        ** because MR_String is defined as char *, not const char *.
        */

        TypeCtorModuleName = (MR_String) (MR_Integer)
            MR_type_ctor_module_name(type_ctor_info);
        TypeCtorName = (MR_String) (MR_Integer)
            MR_type_ctor_name(type_ctor_info);
        TypeCtorArity = type_ctor_info->MR_type_ctor_arity;
    }
}

		;}
#undef MR_PROC_LABEL
	 mercury__term_conversion__V_5_32  = TypeCtorModuleName;
	 mercury__term_conversion__TypeName_9  = TypeCtorName;
	 mercury__term_conversion__V_6_33  = TypeCtorArity;
}
{
#define MR_PROC_LABEL mercury__term_conversion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_p_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc =  mercury__term_conversion__TypeCtor_7 ;
		{
{
    MR_TypeCtorDesc type_ctor_desc;

    type_ctor_desc = (MR_TypeCtorDesc) TypeCtorDesc;

    if (MR_TYPECTOR_DESC_IS_VARIABLE_ARITY(type_ctor_desc)) {
        TypeCtorModuleName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_MODULE_NAME(type_ctor_desc);
        TypeCtorName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_NAME(type_ctor_desc);
        TypeCtorArity = MR_TYPECTOR_DESC_GET_VA_ARITY(type_ctor_desc);
    } else {
        MR_TypeCtorInfo type_ctor_info;

        type_ctor_info =
            MR_TYPECTOR_DESC_GET_FIXED_ARITY_TYPE_CTOR_INFO(type_ctor_desc);

        /*
        ** We cast away the const-ness of the module and type names,
        ** because MR_String is defined as char *, not const char *.
        */

        TypeCtorModuleName = (MR_String) (MR_Integer)
            MR_type_ctor_module_name(type_ctor_info);
        TypeCtorName = (MR_String) (MR_Integer)
            MR_type_ctor_name(type_ctor_info);
        TypeCtorArity = type_ctor_info->MR_type_ctor_arity;
    }
}

		;}
#undef MR_PROC_LABEL
	 mercury__term_conversion__V_5_36  = TypeCtorModuleName;
	 mercury__term_conversion__ModuleName_10  = TypeCtorName;
	 mercury__term_conversion__V_6_37  = TypeCtorArity;
}
    {
      mercury__term_conversion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_54_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_3_p_in__list_0(mercury__term_conversion__Context_4, mercury__term_conversion__ArgTypes_8, &mercury__term_conversion__ArgTerms_11);
    }
    mercury__term_conversion__succeeded = (strcmp(mercury__term_conversion__ModuleName_10, (MR_String) "builtin") == 0);
    if (mercury__term_conversion__succeeded)
      {
        MR_Word mercury__term_conversion__Var_15;

        {
          mercury__term_conversion__Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__term_conversion__Var_15, 0) = ((MR_Box) (mercury__term_conversion__TypeName_9));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          *mercury__term_conversion__Term_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term_conversion__Var_15));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__term_conversion__ArgTerms_11));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__term_conversion__Context_4));
        }
      }
    else
      {
        MR_Word mercury__term_conversion__Arg1_12;
        MR_Word mercury__term_conversion__Arg2_13;
        MR_Word mercury__term_conversion__Var_16;
        MR_Word mercury__term_conversion__Var_17;
        MR_Word mercury__term_conversion__Var_18;
        MR_Word mercury__term_conversion__Var_19;
        MR_Word mercury__term_conversion__Var_21;
        MR_Word mercury__term_conversion__Var_22;
        MR_Word mercury__term_conversion__Var_23;

        {
          mercury__term_conversion__Var_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__term_conversion__Var_16, 0) = ((MR_Box) (mercury__term_conversion__ModuleName_10));
        }
        mercury__term_conversion__Var_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          mercury__term_conversion__Arg1_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__term_conversion__Arg1_12, 0) = ((MR_Box) (mercury__term_conversion__Var_16));
          MR_hl_field(MR_mktag(0), mercury__term_conversion__Arg1_12, 1) = ((MR_Box) (mercury__term_conversion__Var_17));
          MR_hl_field(MR_mktag(0), mercury__term_conversion__Arg1_12, 2) = ((MR_Box) (mercury__term_conversion__Context_4));
        }
        {
          mercury__term_conversion__Var_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__term_conversion__Var_18, 0) = ((MR_Box) (mercury__term_conversion__TypeName_9));
        }
        {
          mercury__term_conversion__Arg2_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__term_conversion__Arg2_13, 0) = ((MR_Box) (mercury__term_conversion__Var_18));
          MR_hl_field(MR_mktag(0), mercury__term_conversion__Arg2_13, 1) = ((MR_Box) (mercury__term_conversion__ArgTerms_11));
          MR_hl_field(MR_mktag(0), mercury__term_conversion__Arg2_13, 2) = ((MR_Box) (mercury__term_conversion__Context_4));
        }
        mercury__term_conversion__Var_19 = (MR_Word) &mercury__term_conversion_scalar_common_6[2];
        mercury__term_conversion__Var_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          mercury__term_conversion__Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__term_conversion__Var_22, 0) = ((MR_Box) (mercury__term_conversion__Arg2_13));
          MR_hl_field(MR_mktag(1), mercury__term_conversion__Var_22, 1) = ((MR_Box) (mercury__term_conversion__Var_23));
        }
        {
          mercury__term_conversion__Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__term_conversion__Var_21, 0) = ((MR_Box) (mercury__term_conversion__Arg1_12));
          MR_hl_field(MR_mktag(1), mercury__term_conversion__Var_21, 1) = ((MR_Box) (mercury__term_conversion__Var_22));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          *mercury__term_conversion__Term_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term_conversion__Var_19));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__term_conversion__Var_21));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__term_conversion__Context_4));
        }
      }
  }
}

void MR_CALL 
mercury__term_conversion____Compare____term_to_type_result_2_0(
  MR_Word mercury__term_conversion__TypeInfo_for_T_14,
  MR_Word mercury__term_conversion__TypeInfo_for_U_15,
  MR_Word * mercury__term_conversion__HeadVar__1_1,
  MR_Word mercury__term_conversion__HeadVar__2_2,
  MR_Word mercury__term_conversion__HeadVar__3_3)
{
  {
    MR_bool mercury__term_conversion__succeeded;
    MR_Integer mercury__term_conversion__CastX_12 = (MR_Integer) mercury__term_conversion__HeadVar__2_2;
    MR_Integer mercury__term_conversion__CastY_13 = (MR_Integer) mercury__term_conversion__HeadVar__3_3;

    mercury__term_conversion__succeeded = (mercury__term_conversion__CastX_12 == mercury__term_conversion__CastY_13);
    if (mercury__term_conversion__succeeded)
      *mercury__term_conversion__HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) mercury__term_conversion__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word mercury__term_conversion__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_conversion__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) mercury__term_conversion__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word mercury__term_conversion__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_conversion__HeadVar__3_3, (MR_Integer) 0)));

            {
              mercury__term_conversion____Compare____term_to_type_error_1_0(mercury__term_conversion__TypeInfo_for_U_15, mercury__term_conversion__HeadVar__1_1, mercury__term_conversion__Var_18, mercury__term_conversion__Var_11);
            }
          }
        else
          *mercury__term_conversion__HeadVar__1_1 = (MR_Integer) 2;
      }
    else
      {
        MR_Box mercury__term_conversion__Var_19 = (MR_hl_field(MR_mktag(0), mercury__term_conversion__HeadVar__2_2, (MR_Integer) 0));

        if (((MR_tag((MR_Word) mercury__term_conversion__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
          *mercury__term_conversion__HeadVar__1_1 = (MR_Integer) 1;
        else
          {
            MR_Box mercury__term_conversion__Var_5 = (MR_hl_field(MR_mktag(0), mercury__term_conversion__HeadVar__3_3, (MR_Integer) 0));

            {
              mercury__builtin__compare_3_p_0(mercury__term_conversion__TypeInfo_for_T_14, mercury__term_conversion__HeadVar__1_1, mercury__term_conversion__Var_19, mercury__term_conversion__Var_5);
            }
          }
      }
  }
}

MR_bool MR_CALL 
mercury__term_conversion____Unify____term_to_type_result_2_0(
  MR_Word mercury__term_conversion__TypeInfo_for_T_9,
  MR_Word mercury__term_conversion__TypeInfo_for_U_10,
  MR_Word mercury__term_conversion__HeadVar__1_1,
  MR_Word mercury__term_conversion__HeadVar__2_2)
{
  {
    MR_bool mercury__term_conversion__succeeded;
    MR_Integer mercury__term_conversion__CastX_7 = (MR_Integer) mercury__term_conversion__HeadVar__1_1;
    MR_Integer mercury__term_conversion__CastY_8 = (MR_Integer) mercury__term_conversion__HeadVar__2_2;

    mercury__term_conversion__succeeded = (mercury__term_conversion__CastX_7 == mercury__term_conversion__CastY_8);
    if (mercury__term_conversion__succeeded)
      mercury__term_conversion__succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) mercury__term_conversion__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word mercury__term_conversion__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_conversion__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mercury__term_conversion__Var_6;

        mercury__term_conversion__succeeded = ((MR_tag((MR_Word) mercury__term_conversion__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (mercury__term_conversion__succeeded)
          {
            mercury__term_conversion__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_conversion__HeadVar__2_2, (MR_Integer) 0)));
            {
              mercury__term_conversion__succeeded = mercury__term_conversion____Unify____term_to_type_error_1_0(mercury__term_conversion__TypeInfo_for_U_10, mercury__term_conversion__Var_5, mercury__term_conversion__Var_6);
            }
          }
      }
    else
      {
        MR_Box mercury__term_conversion__Var_3 = (MR_hl_field(MR_mktag(0), mercury__term_conversion__HeadVar__1_1, (MR_Integer) 0));
        MR_Box mercury__term_conversion__Var_4;

        mercury__term_conversion__succeeded = ((MR_tag((MR_Word) mercury__term_conversion__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
        if (mercury__term_conversion__succeeded)
          {
            mercury__term_conversion__Var_4 = (MR_hl_field(MR_mktag(0), mercury__term_conversion__HeadVar__2_2, (MR_Integer) 0));
            {
              mercury__term_conversion__succeeded = mercury__builtin__unify_2_p_0(mercury__term_conversion__TypeInfo_for_T_9, mercury__term_conversion__Var_3, mercury__term_conversion__Var_4);
            }
          }
      }
    return mercury__term_conversion__succeeded;
  }
}

void MR_CALL 
mercury__term_conversion____Compare____term_to_type_result_1_0(
  MR_Word mercury__term_conversion__TypeInfo_for_T_6,
  MR_Word * mercury__term_conversion__HeadVar__1_1,
  MR_Word mercury__term_conversion__HeadVar__2_2,
  MR_Word mercury__term_conversion__HeadVar__3_3)
{
  {
    MR_bool mercury__term_conversion__succeeded;
    MR_Word mercury__term_conversion__TypeCtorInfo_7_7 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
    MR_Word mercury__term_conversion__Cast_HeadVar1_4 = mercury__term_conversion__HeadVar__2_2;
    MR_Word mercury__term_conversion__Cast_HeadVar2_5 = mercury__term_conversion__HeadVar__3_3;

    {
      mercury__term_conversion____Compare____term_to_type_result_2_0(mercury__term_conversion__TypeInfo_for_T_6, mercury__term_conversion__TypeCtorInfo_7_7, mercury__term_conversion__HeadVar__1_1, mercury__term_conversion__Cast_HeadVar1_4, mercury__term_conversion__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
mercury__term_conversion____Unify____term_to_type_result_1_0(
  MR_Word mercury__term_conversion__TypeInfo_for_T_5,
  MR_Word mercury__term_conversion__HeadVar__1_1,
  MR_Word mercury__term_conversion__HeadVar__2_2)
{
  {
    MR_bool mercury__term_conversion__succeeded;
    MR_Word mercury__term_conversion__TypeCtorInfo_6_6 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
    MR_Word mercury__term_conversion__Cast_HeadVar1_3 = mercury__term_conversion__HeadVar__1_1;
    MR_Word mercury__term_conversion__Cast_HeadVar2_4 = mercury__term_conversion__HeadVar__2_2;

    {
      mercury__term_conversion__succeeded = mercury__term_conversion____Unify____term_to_type_result_2_0(mercury__term_conversion__TypeInfo_for_T_5, mercury__term_conversion__TypeCtorInfo_6_6, mercury__term_conversion__Cast_HeadVar1_3, mercury__term_conversion__Cast_HeadVar2_4);
    }
    return mercury__term_conversion__succeeded;
  }
}

void MR_CALL 
mercury__term_conversion____Compare____term_to_type_error_1_0(
  MR_Word mercury__term_conversion__TypeInfo_for_T_34,
  MR_Word * mercury__term_conversion__HeadVar__1_1,
  MR_Word mercury__term_conversion__HeadVar__2_2,
  MR_Word mercury__term_conversion__HeadVar__3_3)
{
  {
    MR_bool mercury__term_conversion__succeeded;
    MR_Integer mercury__term_conversion__CastX_32 = (MR_Integer) mercury__term_conversion__HeadVar__2_2;
    MR_Integer mercury__term_conversion__CastY_33 = (MR_Integer) mercury__term_conversion__HeadVar__3_3;

    mercury__term_conversion__succeeded = (mercury__term_conversion__CastX_32 == mercury__term_conversion__CastY_33);
    if (mercury__term_conversion__succeeded)
      *mercury__term_conversion__HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) mercury__term_conversion__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word mercury__term_conversion__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_conversion__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mercury__term_conversion__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_conversion__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) mercury__term_conversion__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word mercury__term_conversion__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_conversion__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word mercury__term_conversion__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_conversion__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word mercury__term_conversion__Var_31;
            MR_Integer mercury__term_conversion__Var_49 = (MR_Integer) mercury__term_conversion__Var_44;
            MR_Integer mercury__term_conversion__Var_50 = (MR_Integer) mercury__term_conversion__Var_29;

            mercury__term_conversion__succeeded = (mercury__term_conversion__Var_49 < mercury__term_conversion__Var_50);
            if (mercury__term_conversion__succeeded)
              mercury__term_conversion__Var_31 = (MR_Integer) 1;
            else
              {
                mercury__term_conversion__succeeded = (mercury__term_conversion__Var_49 == mercury__term_conversion__Var_50);
                if (mercury__term_conversion__succeeded)
                  mercury__term_conversion__Var_31 = (MR_Integer) 0;
                else
                  mercury__term_conversion__Var_31 = (MR_Integer) 2;
              }
            mercury__term_conversion__succeeded = (mercury__term_conversion__Var_31 == (MR_Integer) 0);
            mercury__term_conversion__succeeded = !(mercury__term_conversion__succeeded);
            if (mercury__term_conversion__succeeded)
              *mercury__term_conversion__HeadVar__1_1 = mercury__term_conversion__Var_31;
            else
              {
                MR_Word mercury__term_conversion__TypeInfo_37_37 = (MR_Word) &mercury__term_conversion_scalar_common_1[0];

                {
                  mercury__builtin__compare_3_p_0(mercury__term_conversion__TypeInfo_37_37, mercury__term_conversion__HeadVar__1_1, ((MR_Box) (mercury__term_conversion__Var_43)), ((MR_Box) (mercury__term_conversion__Var_30)));
                }
              }
          }
        else
          *mercury__term_conversion__HeadVar__1_1 = (MR_Integer) 2;
      }
    else
      {
        MR_Word mercury__term_conversion__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word mercury__term_conversion__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word mercury__term_conversion__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mercury__term_conversion__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) mercury__term_conversion__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
          *mercury__term_conversion__HeadVar__1_1 = (MR_Integer) 1;
        else
          {
            MR_Word mercury__term_conversion__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word mercury__term_conversion__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word mercury__term_conversion__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__HeadVar__3_3, (MR_Integer) 2)));
            MR_Word mercury__term_conversion__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__HeadVar__3_3, (MR_Integer) 3)));
            MR_Word mercury__term_conversion__Var_12;

            {
              mercury__term____Compare____term_1_0(mercury__term_conversion__TypeInfo_for_T_34, &mercury__term_conversion__Var_12, mercury__term_conversion__Var_48, mercury__term_conversion__Var_8);
            }
            mercury__term_conversion__succeeded = (mercury__term_conversion__Var_12 == (MR_Integer) 0);
            mercury__term_conversion__succeeded = !(mercury__term_conversion__succeeded);
            if (mercury__term_conversion__succeeded)
              *mercury__term_conversion__HeadVar__1_1 = mercury__term_conversion__Var_12;
            else
              {
                MR_Word mercury__term_conversion__Var_13;

                {
                  mercury__type_desc____Compare____type_desc_0_0(&mercury__term_conversion__Var_13, mercury__term_conversion__Var_47, mercury__term_conversion__Var_9);
                }
                mercury__term_conversion__succeeded = (mercury__term_conversion__Var_13 == (MR_Integer) 0);
                mercury__term_conversion__succeeded = !(mercury__term_conversion__succeeded);
                if (mercury__term_conversion__succeeded)
                  *mercury__term_conversion__HeadVar__1_1 = mercury__term_conversion__Var_13;
                else
                  {
                    MR_Word mercury__term_conversion__Var_14;

                    {
                      mercury__term____Compare____context_0_0(&mercury__term_conversion__Var_14, mercury__term_conversion__Var_46, mercury__term_conversion__Var_10);
                    }
                    mercury__term_conversion__succeeded = (mercury__term_conversion__Var_14 == (MR_Integer) 0);
                    mercury__term_conversion__succeeded = !(mercury__term_conversion__succeeded);
                    if (mercury__term_conversion__succeeded)
                      *mercury__term_conversion__HeadVar__1_1 = mercury__term_conversion__Var_14;
                    else
                      {
                        MR_Word mercury__term_conversion__TypeInfo_42_42 = (MR_Word) &mercury__term_conversion_scalar_common_1[0];

                        {
                          mercury__builtin__compare_3_p_0(mercury__term_conversion__TypeInfo_42_42, mercury__term_conversion__HeadVar__1_1, ((MR_Box) (mercury__term_conversion__Var_45)), ((MR_Box) (mercury__term_conversion__Var_11)));
                        }
                      }
                  }
              }
          }
      }
  }
}

MR_bool MR_CALL 
mercury__term_conversion____Unify____term_to_type_error_1_0(
  MR_Word mercury__term_conversion__TypeInfo_for_T_17,
  MR_Word mercury__term_conversion__HeadVar__1_1,
  MR_Word mercury__term_conversion__HeadVar__2_2)
{
  {
    MR_bool mercury__term_conversion__succeeded;
    MR_Integer mercury__term_conversion__CastX_15 = (MR_Integer) mercury__term_conversion__HeadVar__1_1;
    MR_Integer mercury__term_conversion__CastY_16 = (MR_Integer) mercury__term_conversion__HeadVar__2_2;

    mercury__term_conversion__succeeded = (mercury__term_conversion__CastX_15 == mercury__term_conversion__CastY_16);
    if (mercury__term_conversion__succeeded)
      mercury__term_conversion__succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) mercury__term_conversion__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word mercury__term_conversion__TypeInfo_20_20;
        MR_Word mercury__term_conversion__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_conversion__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mercury__term_conversion__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_conversion__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mercury__term_conversion__Var_13;
        MR_Word mercury__term_conversion__Var_14;
        MR_Integer mercury__term_conversion__Var_26;
        MR_Integer mercury__term_conversion__Var_27;

        mercury__term_conversion__succeeded = ((MR_tag((MR_Word) mercury__term_conversion__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (mercury__term_conversion__succeeded)
          {
            mercury__term_conversion__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_conversion__HeadVar__2_2, (MR_Integer) 0)));
            mercury__term_conversion__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_conversion__HeadVar__2_2, (MR_Integer) 1)));
            mercury__term_conversion__Var_26 = (MR_Integer) mercury__term_conversion__Var_11;
            mercury__term_conversion__Var_27 = (MR_Integer) mercury__term_conversion__Var_13;
            mercury__term_conversion__succeeded = (mercury__term_conversion__Var_26 == mercury__term_conversion__Var_27);
            if (mercury__term_conversion__succeeded)
              {
                mercury__term_conversion__TypeInfo_20_20 = (MR_Word) &mercury__term_conversion_scalar_common_1[0];
                {
                  mercury__term_conversion__succeeded = mercury__builtin__unify_2_p_0(mercury__term_conversion__TypeInfo_20_20, ((MR_Box) (mercury__term_conversion__Var_12)), ((MR_Box) (mercury__term_conversion__Var_14)));
                }
              }
          }
      }
    else
      {
        MR_Word mercury__term_conversion__TypeInfo_25_25;
        MR_Word mercury__term_conversion__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mercury__term_conversion__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mercury__term_conversion__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word mercury__term_conversion__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word mercury__term_conversion__Var_7;
        MR_Word mercury__term_conversion__Var_8;
        MR_Word mercury__term_conversion__Var_9;
        MR_Word mercury__term_conversion__Var_10;

        mercury__term_conversion__succeeded = ((MR_tag((MR_Word) mercury__term_conversion__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
        if (mercury__term_conversion__succeeded)
          {
            mercury__term_conversion__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__HeadVar__2_2, (MR_Integer) 0)));
            mercury__term_conversion__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__HeadVar__2_2, (MR_Integer) 1)));
            mercury__term_conversion__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__HeadVar__2_2, (MR_Integer) 2)));
            mercury__term_conversion__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__HeadVar__2_2, (MR_Integer) 3)));
            {
              mercury__term_conversion__succeeded = mercury__term____Unify____term_1_0(mercury__term_conversion__TypeInfo_for_T_17, mercury__term_conversion__Var_3, mercury__term_conversion__Var_7);
            }
            if (mercury__term_conversion__succeeded)
              {
                {
                  mercury__term_conversion__succeeded = mercury__type_desc____Unify____type_desc_0_0(mercury__term_conversion__Var_4, mercury__term_conversion__Var_8);
                }
                if (mercury__term_conversion__succeeded)
                  {
                    {
                      mercury__term_conversion__succeeded = mercury__term____Unify____context_0_0(mercury__term_conversion__Var_5, mercury__term_conversion__Var_9);
                    }
                    if (mercury__term_conversion__succeeded)
                      {
                        mercury__term_conversion__TypeInfo_25_25 = (MR_Word) &mercury__term_conversion_scalar_common_1[0];
                        {
                          mercury__term_conversion__succeeded = mercury__builtin__unify_2_p_0(mercury__term_conversion__TypeInfo_25_25, ((MR_Box) (mercury__term_conversion__Var_6)), ((MR_Box) (mercury__term_conversion__Var_10)));
                        }
                      }
                  }
              }
          }
      }
    return mercury__term_conversion__succeeded;
  }
}

void MR_CALL 
mercury__term_conversion____Compare____term_to_type_context_0_0(
  MR_Word * mercury__term_conversion__HeadVar__1_1,
  MR_Word mercury__term_conversion__HeadVar__2_2,
  MR_Word mercury__term_conversion__HeadVar__3_3)
{
  {
    MR_bool mercury__term_conversion__succeeded;
    MR_Word mercury__term_conversion__TypeInfo_6_6 = (MR_Word) &mercury__term_conversion_scalar_common_1[0];
    MR_Word mercury__term_conversion__Cast_HeadVar1_4 = mercury__term_conversion__HeadVar__2_2;
    MR_Word mercury__term_conversion__Cast_HeadVar2_5 = mercury__term_conversion__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0(mercury__term_conversion__TypeInfo_6_6, mercury__term_conversion__HeadVar__1_1, ((MR_Box) (mercury__term_conversion__Cast_HeadVar1_4)), ((MR_Box) (mercury__term_conversion__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
mercury__term_conversion____Unify____term_to_type_context_0_0(
  MR_Word mercury__term_conversion__HeadVar__1_1,
  MR_Word mercury__term_conversion__HeadVar__2_2)
{
  {
    MR_bool mercury__term_conversion__succeeded;
    MR_Word mercury__term_conversion__TypeInfo_5_5 = (MR_Word) &mercury__term_conversion_scalar_common_1[0];
    MR_Word mercury__term_conversion__Cast_HeadVar1_3 = mercury__term_conversion__HeadVar__1_1;
    MR_Word mercury__term_conversion__Cast_HeadVar2_4 = mercury__term_conversion__HeadVar__2_2;

    {
      mercury__term_conversion__succeeded = mercury__builtin__unify_2_p_0(mercury__term_conversion__TypeInfo_5_5, ((MR_Box) (mercury__term_conversion__Cast_HeadVar1_3)), ((MR_Box) (mercury__term_conversion__Cast_HeadVar2_4)));
    }
    return mercury__term_conversion__succeeded;
  }
}

void MR_CALL 
mercury__term_conversion____Compare____term_to_type_arg_context_0_0(
  MR_Word * mercury__term_conversion__HeadVar__1_1,
  MR_Word mercury__term_conversion__HeadVar__2_2,
  MR_Word mercury__term_conversion__HeadVar__3_3)
{
  {
    MR_bool mercury__term_conversion__succeeded;
    MR_Integer mercury__term_conversion__CastX_12 = (MR_Integer) mercury__term_conversion__HeadVar__2_2;
    MR_Integer mercury__term_conversion__CastY_13 = (MR_Integer) mercury__term_conversion__HeadVar__3_3;

    mercury__term_conversion__succeeded = (mercury__term_conversion__CastX_12 == mercury__term_conversion__CastY_13);
    if (mercury__term_conversion__succeeded)
      *mercury__term_conversion__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word mercury__term_conversion__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer mercury__term_conversion__Var_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__term_conversion__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mercury__term_conversion__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word mercury__term_conversion__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__HeadVar__3_3, (MR_Integer) 0)));
        MR_Integer mercury__term_conversion__Var_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__term_conversion__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word mercury__term_conversion__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word mercury__term_conversion__Var_10;

        {
          mercury__term____Compare____const_0_0(&mercury__term_conversion__Var_10, mercury__term_conversion__Var_4, mercury__term_conversion__Var_7);
        }
        mercury__term_conversion__succeeded = (mercury__term_conversion__Var_10 == (MR_Integer) 0);
        mercury__term_conversion__succeeded = !(mercury__term_conversion__succeeded);
        if (mercury__term_conversion__succeeded)
          *mercury__term_conversion__HeadVar__1_1 = mercury__term_conversion__Var_10;
        else
          {
            MR_Word mercury__term_conversion__Var_11;

            mercury__term_conversion__succeeded = (mercury__term_conversion__Var_5 < mercury__term_conversion__Var_8);
            if (mercury__term_conversion__succeeded)
              mercury__term_conversion__Var_11 = (MR_Integer) 1;
            else
              {
                mercury__term_conversion__succeeded = (mercury__term_conversion__Var_5 == mercury__term_conversion__Var_8);
                if (mercury__term_conversion__succeeded)
                  mercury__term_conversion__Var_11 = (MR_Integer) 0;
                else
                  mercury__term_conversion__Var_11 = (MR_Integer) 2;
              }
            mercury__term_conversion__succeeded = (mercury__term_conversion__Var_11 == (MR_Integer) 0);
            mercury__term_conversion__succeeded = !(mercury__term_conversion__succeeded);
            if (mercury__term_conversion__succeeded)
              *mercury__term_conversion__HeadVar__1_1 = mercury__term_conversion__Var_11;
            else
              {
                mercury__term____Compare____context_0_0(mercury__term_conversion__HeadVar__1_1, mercury__term_conversion__Var_6, mercury__term_conversion__Var_9);
              }
          }
      }
  }
}

MR_bool MR_CALL 
mercury__term_conversion____Unify____term_to_type_arg_context_0_0(
  MR_Word mercury__term_conversion__HeadVar__1_1,
  MR_Word mercury__term_conversion__HeadVar__2_2)
{
  {
    MR_bool mercury__term_conversion__succeeded;
    MR_Integer mercury__term_conversion__CastX_9 = (MR_Integer) mercury__term_conversion__HeadVar__1_1;
    MR_Integer mercury__term_conversion__CastY_10 = (MR_Integer) mercury__term_conversion__HeadVar__2_2;

    mercury__term_conversion__succeeded = (mercury__term_conversion__CastX_9 == mercury__term_conversion__CastY_10);
    if (mercury__term_conversion__succeeded)
      mercury__term_conversion__succeeded = MR_TRUE;
    else
      {
        MR_Word mercury__term_conversion__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__HeadVar__1_1, (MR_Integer) 0)));
        MR_Integer mercury__term_conversion__Var_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__term_conversion__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mercury__term_conversion__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word mercury__term_conversion__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer mercury__term_conversion__Var_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__term_conversion__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mercury__term_conversion__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__HeadVar__2_2, (MR_Integer) 2)));

        {
          mercury__term_conversion__succeeded = mercury__term____Unify____const_0_0(mercury__term_conversion__Var_3, mercury__term_conversion__Var_6);
        }
        if (mercury__term_conversion__succeeded)
          {
            mercury__term_conversion__succeeded = (mercury__term_conversion__Var_4 == mercury__term_conversion__Var_7);
            if (mercury__term_conversion__succeeded)
              {
                mercury__term_conversion__succeeded = mercury__term____Unify____context_0_0(mercury__term_conversion__Var_5, mercury__term_conversion__Var_8);
              }
          }
      }
    return mercury__term_conversion__succeeded;
  }
}

static void MR_CALL 
mercury__term_conversion__univ_list_to_term_list_2_p_0(
  MR_Word mercury__term_conversion__TypeInfo_for_T_7,
  MR_Word mercury__term_conversion__HeadVar__1_1,
  MR_Word * mercury__term_conversion__HeadVar__2_2)
{
  {
    MR_bool mercury__term_conversion__succeeded;

    if ((mercury__term_conversion__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__term_conversion__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word mercury__term_conversion__Value_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_conversion__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mercury__term_conversion__Values_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_conversion__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mercury__term_conversion__Term_5;
        MR_Word mercury__term_conversion__Terms_6;

        {
          mercury__term_conversion__univ_to_term_2_p_0(mercury__term_conversion__TypeInfo_for_T_7, mercury__term_conversion__Value_3, &mercury__term_conversion__Term_5);
        }
        {
          mercury__term_conversion__univ_list_to_term_list_2_p_0(mercury__term_conversion__TypeInfo_for_T_7, mercury__term_conversion__Values_4, &mercury__term_conversion__Terms_6);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *mercury__term_conversion__HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term_conversion__Term_5));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term_conversion__Terms_6));
        }
      }
  }
}

static MR_bool MR_CALL 
mercury__term_conversion__univ_to_term_special_case_6_p_0(
  MR_Word mercury__term_conversion__TypeInfo_for_T_78,
  MR_String mercury__term_conversion__ModuleName_7,
  MR_String mercury__term_conversion__TypeCtorName_8,
  MR_Word mercury__term_conversion__TypeArgs_9,
  MR_Word mercury__term_conversion__Univ_10,
  MR_Word mercury__term_conversion__Context_11,
  MR_Word * mercury__term_conversion__Term_12)
{
  {
    MR_bool mercury__term_conversion__succeeded;

    if ((mercury__term_conversion__TypeArgs_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Integer mercury__term_conversion__lo_0;
        MR_Integer mercury__term_conversion__hi_1;
        MR_Integer mercury__term_conversion__mid_2;
        MR_Integer mercury__term_conversion__result_3;

        /* binary string jump switch */
        mercury__term_conversion__lo_0 = (MR_Integer) 0;
        mercury__term_conversion__hi_1 = (MR_Integer) 3;
        do
          {
            mercury__term_conversion__mid_2 = (((mercury__term_conversion__lo_0 + mercury__term_conversion__hi_1)) / (MR_Integer) 2);
            mercury__term_conversion__result_3 = MR_strcmp(mercury__term_conversion__ModuleName_7, ((&mercury__term_conversion_vector_common_5[14 + mercury__term_conversion__mid_2]))->mercury__term_conversion__vector_common_type_5_0__vct_5_f_0);
            if ((mercury__term_conversion__result_3 == (MR_Integer) 0))
              {
                switch (((&mercury__term_conversion_vector_common_5[14 + mercury__term_conversion__mid_2]))->mercury__term_conversion__vector_common_type_5_0__vct_5_f_1) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      /* case "bitmap" */
                      {
                        MR_Word mercury__term_conversion__TypeCtorInfo_87_87;
                        MR_Box mercury__term_conversion__Bitmap_25;
                        MR_String mercury__term_conversion__BitmapStr_26;
                        MR_Word mercury__term_conversion__Var_46;
                        MR_Word mercury__term_conversion__Var_47;
                        MR_Box mercury__term_conversion__conv7_Bitmap_25;

                        mercury__term_conversion__succeeded = (strcmp(mercury__term_conversion__TypeCtorName_8, (MR_String) "bitmap") == 0);
                        if (mercury__term_conversion__succeeded)
                          {
                            mercury__term_conversion__TypeCtorInfo_87_87 = (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_0;
                            {
                              mercury__univ__det_univ_to_type_2_p_0(mercury__term_conversion__TypeCtorInfo_87_87, mercury__term_conversion__Univ_10, &mercury__term_conversion__conv7_Bitmap_25);
                            }
                            mercury__term_conversion__Bitmap_25 = ((MR_Box) mercury__term_conversion__conv7_Bitmap_25);
                            {
                              mercury__term_conversion__BitmapStr_26 = mercury__bitmap__to_string_1_f_0(mercury__term_conversion__Bitmap_25);
                            }
                            mercury__term_conversion__Var_47 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                            {
                              mercury__term_conversion__Var_46 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(2), mercury__term_conversion__Var_46, 0) = ((MR_Box) (mercury__term_conversion__BitmapStr_26));
                            }
                            {
                              MR_Word base;
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                              *mercury__term_conversion__Term_12 = base;
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term_conversion__Var_46));
                              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__term_conversion__Var_47));
                              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__term_conversion__Context_11));
                            }
                            mercury__term_conversion__succeeded = MR_TRUE;
                          }
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      /* case "builtin" */
                      {
                        MR_Word mercury__term_conversion__Functor_15;
                        MR_Word mercury__term_conversion__Var_72;
                        MR_Integer mercury__term_conversion__lo_4;
                        MR_Integer mercury__term_conversion__hi_5;
                        MR_Integer mercury__term_conversion__mid_6;
                        MR_Integer mercury__term_conversion__result_7;

                        /* binary string jump switch */
                        mercury__term_conversion__lo_4 = (MR_Integer) 0;
                        mercury__term_conversion__hi_5 = (MR_Integer) 4;
                        do
                          {
                            mercury__term_conversion__mid_6 = (((mercury__term_conversion__lo_4 + mercury__term_conversion__hi_5)) / (MR_Integer) 2);
                            mercury__term_conversion__result_7 = MR_strcmp(mercury__term_conversion__TypeCtorName_8, ((&mercury__term_conversion_vector_common_5[9 + mercury__term_conversion__mid_6]))->mercury__term_conversion__vector_common_type_5_0__vct_5_f_0);
                            if ((mercury__term_conversion__result_7 == (MR_Integer) 0))
                              {
                                switch (((&mercury__term_conversion_vector_common_5[9 + mercury__term_conversion__mid_6]))->mercury__term_conversion__vector_common_type_5_0__vct_5_f_1) {
                                  default: /*NOTREACHED*/ MR_assert(0);
                                  case (MR_Integer) 0:
                                    {
                                      /* case "character" */
                                      {
                                        MR_Word mercury__term_conversion__TypeCtorInfo_79_79 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
                                        MR_Char mercury__term_conversion__Char_13;
                                        MR_String mercury__term_conversion__CharName_14;
                                        MR_Box mercury__term_conversion__conv6_Char_13;

                                        {
                                          mercury__univ__det_univ_to_type_2_p_0(mercury__term_conversion__TypeCtorInfo_79_79, mercury__term_conversion__Univ_10, &mercury__term_conversion__conv6_Char_13);
                                        }
                                        mercury__term_conversion__Char_13 = ((MR_Char) (MR_Word) mercury__term_conversion__conv6_Char_13);
                                        {
                                          mercury__string__char_to_string_2_p_0(mercury__term_conversion__Char_13, &mercury__term_conversion__CharName_14);
                                        }
                                        {
                                          mercury__term_conversion__Functor_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                          MR_hl_field(MR_mktag(0), mercury__term_conversion__Functor_15, 0) = ((MR_Box) (mercury__term_conversion__CharName_14));
                                        }
                                        mercury__term_conversion__succeeded = MR_TRUE;
                                      }
                                    }
                                    break;
                                  case (MR_Integer) 1:
                                    {
                                      /* case "float" */
                                      {
                                        MR_Word mercury__term_conversion__TypeCtorInfo_83_83 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0;
                                        MR_Float mercury__term_conversion__Float_19;
                                        MR_Box mercury__term_conversion__conv5_Float_19;

                                        {
                                          mercury__univ__det_univ_to_type_2_p_0(mercury__term_conversion__TypeCtorInfo_83_83, mercury__term_conversion__Univ_10, &mercury__term_conversion__conv5_Float_19);
                                        }
                                        mercury__term_conversion__Float_19 = MR_unbox_float(mercury__term_conversion__conv5_Float_19);
                                        {
                                          mercury__term_conversion__Functor_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                          MR_hl_field(MR_mktag(3), mercury__term_conversion__Functor_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                                          MR_hl_field(MR_mktag(3), mercury__term_conversion__Functor_15, 1) = MR_box_float(mercury__term_conversion__Float_19);
                                        }
                                        mercury__term_conversion__succeeded = MR_TRUE;
                                      }
                                    }
                                    break;
                                  case (MR_Integer) 2:
                                    {
                                      /* case "int" */
                                      {
                                        MR_Word mercury__term_conversion__TypeCtorInfo_81_81 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
                                        MR_Integer mercury__term_conversion__Int_17;
                                        MR_Word mercury__term_conversion__Var_69;
                                        MR_Box mercury__term_conversion__conv4_Int_17;

                                        {
                                          mercury__univ__det_univ_to_type_2_p_0(mercury__term_conversion__TypeCtorInfo_81_81, mercury__term_conversion__Univ_10, &mercury__term_conversion__conv4_Int_17);
                                        }
                                        mercury__term_conversion__Int_17 = ((MR_Integer) mercury__term_conversion__conv4_Int_17);
                                        {
                                          mercury__term_conversion__Var_69 = mercury__integer__integer_1_f_0(mercury__term_conversion__Int_17);
                                        }
                                        {
                                          mercury__term_conversion__Functor_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                          MR_hl_field(MR_mktag(1), mercury__term_conversion__Functor_15, 0) = ((MR_Box) ((MR_Integer) 2));
                                          MR_hl_field(MR_mktag(1), mercury__term_conversion__Functor_15, 1) = ((MR_Box) (mercury__term_conversion__Var_69));
                                          MR_hl_field(MR_mktag(1), mercury__term_conversion__Functor_15, 2) = ((MR_Box) ((MR_Integer) 0));
                                          MR_hl_field(MR_mktag(1), mercury__term_conversion__Functor_15, 3) = ((MR_Box) ((MR_Integer) 0));
                                        }
                                        mercury__term_conversion__succeeded = MR_TRUE;
                                      }
                                    }
                                    break;
                                  case (MR_Integer) 3:
                                    {
                                      /* case "string" */
                                      {
                                        MR_Word mercury__term_conversion__TypeCtorInfo_80_80 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
                                        MR_String mercury__term_conversion__String_16;
                                        MR_Box mercury__term_conversion__conv3_String_16;

                                        {
                                          mercury__univ__det_univ_to_type_2_p_0(mercury__term_conversion__TypeCtorInfo_80_80, mercury__term_conversion__Univ_10, &mercury__term_conversion__conv3_String_16);
                                        }
                                        mercury__term_conversion__String_16 = ((MR_String) mercury__term_conversion__conv3_String_16);
                                        {
                                          mercury__term_conversion__Functor_15 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                          MR_hl_field(MR_mktag(2), mercury__term_conversion__Functor_15, 0) = ((MR_Box) (mercury__term_conversion__String_16));
                                        }
                                        mercury__term_conversion__succeeded = MR_TRUE;
                                      }
                                    }
                                    break;
                                  case (MR_Integer) 4:
                                    {
                                      /* case "uint" */
                                      {
                                        MR_Word mercury__term_conversion__TypeCtorInfo_82_82 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_uint_0;
                                        MR_Unsigned mercury__term_conversion__UInt_18;
                                        MR_Word mercury__term_conversion__Var_65;
                                        MR_Box mercury__term_conversion__conv2_UInt_18;

                                        {
                                          mercury__univ__det_univ_to_type_2_p_0(mercury__term_conversion__TypeCtorInfo_82_82, mercury__term_conversion__Univ_10, &mercury__term_conversion__conv2_UInt_18);
                                        }
                                        mercury__term_conversion__UInt_18 = ((MR_Unsigned) mercury__term_conversion__conv2_UInt_18);
                                        {
                                          mercury__term_conversion__Var_65 = mercury__integer__from_uint_1_f_0(mercury__term_conversion__UInt_18);
                                        }
                                        {
                                          mercury__term_conversion__Functor_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                          MR_hl_field(MR_mktag(1), mercury__term_conversion__Functor_15, 0) = ((MR_Box) ((MR_Integer) 2));
                                          MR_hl_field(MR_mktag(1), mercury__term_conversion__Functor_15, 1) = ((MR_Box) (mercury__term_conversion__Var_65));
                                          MR_hl_field(MR_mktag(1), mercury__term_conversion__Functor_15, 2) = ((MR_Box) ((MR_Integer) 1));
                                          MR_hl_field(MR_mktag(1), mercury__term_conversion__Functor_15, 3) = ((MR_Box) ((MR_Integer) 0));
                                        }
                                        mercury__term_conversion__succeeded = MR_TRUE;
                                      }
                                    }
                                    break;
                                }
                                /* jump out of search loop */
                                goto label_0;
                              }
                            else
                            if ((mercury__term_conversion__result_7 < (MR_Integer) 0))
                              mercury__term_conversion__hi_5 = (mercury__term_conversion__mid_6 - (MR_Integer) 1);
                            else
                              mercury__term_conversion__lo_4 = (mercury__term_conversion__mid_6 + (MR_Integer) 1);
                          }
                        while ((mercury__term_conversion__lo_4 <= mercury__term_conversion__hi_5));
                        mercury__term_conversion__succeeded = MR_FALSE;
                      label_0:;
                        if (mercury__term_conversion__succeeded)
                          {
                            mercury__term_conversion__Var_72 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                            {
                              MR_Word base;
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                              *mercury__term_conversion__Term_12 = base;
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term_conversion__Functor_15));
                              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__term_conversion__Var_72));
                              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__term_conversion__Context_11));
                            }
                            mercury__term_conversion__succeeded = MR_TRUE;
                          }
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      /* case "type_desc" */
                      {
                        MR_Word mercury__term_conversion__TypeCtorInfo_84_84;
                        MR_Word mercury__term_conversion__TypeInfo_20;
                        MR_Word mercury__term_conversion__SubTerm_21;
                        MR_Word mercury__term_conversion__Var_60;
                        MR_String mercury__term_conversion__Var_61;
                        MR_Word mercury__term_conversion__Var_62;
                        MR_Word mercury__term_conversion__Var_63;
                        MR_Box mercury__term_conversion__conv1_TypeInfo_20;

                        mercury__term_conversion__succeeded = (strcmp(mercury__term_conversion__TypeCtorName_8, (MR_String) "type_desc") == 0);
                        if (mercury__term_conversion__succeeded)
                          {
                            mercury__term_conversion__TypeCtorInfo_84_84 = (MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_desc_0;
                            {
                              mercury__univ__det_univ_to_type_2_p_0(mercury__term_conversion__TypeCtorInfo_84_84, mercury__term_conversion__Univ_10, &mercury__term_conversion__conv1_TypeInfo_20);
                            }
                            mercury__term_conversion__TypeInfo_20 = ((MR_Word) mercury__term_conversion__conv1_TypeInfo_20);
                            {
                              mercury__term_conversion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_p_0(mercury__term_conversion__Context_11, mercury__term_conversion__TypeInfo_20, &mercury__term_conversion__SubTerm_21);
                            }
                            mercury__term_conversion__Var_61 = (MR_String) "type_info";
                            mercury__term_conversion__Var_63 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                            mercury__term_conversion__Var_60 = (MR_Word) &mercury__term_conversion_scalar_common_6[3];
                            {
                              mercury__term_conversion__Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), mercury__term_conversion__Var_62, 0) = ((MR_Box) (mercury__term_conversion__SubTerm_21));
                              MR_hl_field(MR_mktag(1), mercury__term_conversion__Var_62, 1) = ((MR_Box) (mercury__term_conversion__Var_63));
                            }
                            {
                              MR_Word base;
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                              *mercury__term_conversion__Term_12 = base;
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term_conversion__Var_60));
                              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__term_conversion__Var_62));
                              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__term_conversion__Context_11));
                            }
                            mercury__term_conversion__succeeded = MR_TRUE;
                          }
                      }
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      /* case "univ" */
                      {
                        MR_Word mercury__term_conversion__TypeCtorInfo_85_85;
                        MR_Word mercury__term_conversion__TypeInfo_86_86;
                        MR_Word mercury__term_conversion__NestedUniv_22;
                        MR_Word mercury__term_conversion__ValueTerm_23;
                        MR_Word mercury__term_conversion__TypeTerm_24;
                        MR_Box mercury__term_conversion__Var_48;
                        MR_Word mercury__term_conversion__Var_49;
                        MR_Word mercury__term_conversion__Var_50;
                        MR_String mercury__term_conversion__Var_51;
                        MR_Word mercury__term_conversion__Var_52;
                        MR_Word mercury__term_conversion__Var_53;
                        MR_Word mercury__term_conversion__Var_54;
                        MR_String mercury__term_conversion__Var_55;
                        MR_Word mercury__term_conversion__Var_56;
                        MR_Word mercury__term_conversion__Var_57;
                        MR_Word mercury__term_conversion__Var_58;
                        MR_Word mercury__term_conversion__Var_59;
                        MR_Box mercury__term_conversion__conv0_NestedUniv_22;

                        mercury__term_conversion__succeeded = (strcmp(mercury__term_conversion__TypeCtorName_8, (MR_String) "univ") == 0);
                        if (mercury__term_conversion__succeeded)
                          {
                            mercury__term_conversion__TypeCtorInfo_85_85 = (MR_Word) &mercury__univ__univ__type_ctor_info_univ_0;
                            {
                              mercury__univ__det_univ_to_type_2_p_0(mercury__term_conversion__TypeCtorInfo_85_85, mercury__term_conversion__Univ_10, &mercury__term_conversion__conv0_NestedUniv_22);
                            }
                            mercury__term_conversion__NestedUniv_22 = ((MR_Word) mercury__term_conversion__conv0_NestedUniv_22);
                            {
                              mercury__term_conversion__Var_48 = mercury__univ__univ_value_1_f_0(&mercury__term_conversion__TypeInfo_86_86, mercury__term_conversion__NestedUniv_22);
                            }
                            {
                              mercury__term_conversion__type_to_term_2_p_0(mercury__term_conversion__TypeInfo_86_86, mercury__term_conversion__TypeInfo_for_T_78, mercury__term_conversion__Var_48, &mercury__term_conversion__ValueTerm_23);
                            }
                            {
                              mercury__term_conversion__Var_49 = mercury__univ__univ_type_1_f_0(mercury__term_conversion__NestedUniv_22);
                            }
                            {
                              mercury__term_conversion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_p_0(mercury__term_conversion__Context_11, mercury__term_conversion__Var_49, &mercury__term_conversion__TypeTerm_24);
                            }
                            mercury__term_conversion__Var_51 = (MR_String) "univ";
                            mercury__term_conversion__Var_55 = (MR_String) ":";
                            mercury__term_conversion__Var_58 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                            mercury__term_conversion__Var_59 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                            mercury__term_conversion__Var_50 = (MR_Word) &mercury__term_conversion_scalar_common_6[1];
                            mercury__term_conversion__Var_54 = (MR_Word) &mercury__term_conversion_scalar_common_6[2];
                            {
                              mercury__term_conversion__Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), mercury__term_conversion__Var_57, 0) = ((MR_Box) (mercury__term_conversion__TypeTerm_24));
                              MR_hl_field(MR_mktag(1), mercury__term_conversion__Var_57, 1) = ((MR_Box) (mercury__term_conversion__Var_58));
                            }
                            {
                              mercury__term_conversion__Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), mercury__term_conversion__Var_56, 0) = ((MR_Box) (mercury__term_conversion__ValueTerm_23));
                              MR_hl_field(MR_mktag(1), mercury__term_conversion__Var_56, 1) = ((MR_Box) (mercury__term_conversion__Var_57));
                            }
                            {
                              mercury__term_conversion__Var_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), mercury__term_conversion__Var_53, 0) = ((MR_Box) (mercury__term_conversion__Var_54));
                              MR_hl_field(MR_mktag(0), mercury__term_conversion__Var_53, 1) = ((MR_Box) (mercury__term_conversion__Var_56));
                              MR_hl_field(MR_mktag(0), mercury__term_conversion__Var_53, 2) = ((MR_Box) (mercury__term_conversion__Context_11));
                            }
                            {
                              mercury__term_conversion__Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), mercury__term_conversion__Var_52, 0) = ((MR_Box) (mercury__term_conversion__Var_53));
                              MR_hl_field(MR_mktag(1), mercury__term_conversion__Var_52, 1) = ((MR_Box) (mercury__term_conversion__Var_59));
                            }
                            {
                              MR_Word base;
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                              *mercury__term_conversion__Term_12 = base;
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term_conversion__Var_50));
                              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__term_conversion__Var_52));
                              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__term_conversion__Context_11));
                            }
                            mercury__term_conversion__succeeded = MR_TRUE;
                          }
                      }
                    }
                    break;
                }
                /* jump out of search loop */
                goto label_1;
              }
            else
            if ((mercury__term_conversion__result_3 < (MR_Integer) 0))
              mercury__term_conversion__hi_1 = (mercury__term_conversion__mid_2 - (MR_Integer) 1);
            else
              mercury__term_conversion__lo_0 = (mercury__term_conversion__mid_2 + (MR_Integer) 1);
          }
        while ((mercury__term_conversion__lo_0 <= mercury__term_conversion__hi_1));
        mercury__term_conversion__succeeded = MR_FALSE;
      label_1:;
      }
    else
      {
        MR_Word mercury__term_conversion__Var_100 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_conversion__TypeArgs_9, (MR_Integer) 1)));
        MR_Word mercury__term_conversion__Var_101 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_conversion__TypeArgs_9, (MR_Integer) 0)));

        mercury__term_conversion__succeeded = (mercury__term_conversion__Var_100 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (mercury__term_conversion__succeeded)
          {
            if ((strcmp(mercury__term_conversion__ModuleName_7, (MR_String) "array") == 0))
              {
                MR_Word mercury__term_conversion__TypeInfo_88_88;
                MR_Word mercury__term_conversion__TypeCtorInfo_89_89;
                MR_Word mercury__term_conversion__TypeInfo_90_90;
                MR_Word mercury__term_conversion__TypeCtorInfo_91_91;
                MR_Word mercury__term_conversion__TypeInfo_92_92;
                MR_Word mercury__term_conversion__List_29;
                MR_ArrayPtr mercury__term_conversion__Array_30;
                MR_Word mercury__term_conversion__ArgsTerm_31;
                MR_Word mercury__term_conversion__Var_42;
                MR_String mercury__term_conversion__Var_43;
                MR_Word mercury__term_conversion__Var_44;
                MR_Word mercury__term_conversion__Var_45;
                MR_Box mercury__term_conversion__Elem_28;
                MR_Box mercury__term_conversion__conv8_Array_30;

                mercury__term_conversion__succeeded = (strcmp(mercury__term_conversion__TypeCtorName_8, (MR_String) "array") == 0);
                if (mercury__term_conversion__succeeded)
                  {
                    {
                      mercury__type_desc__has_type_2_p_0(&mercury__term_conversion__TypeInfo_88_88, mercury__term_conversion__Var_101);
                    }
                    mercury__term_conversion__TypeCtorInfo_89_89 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
                    mercury__term_conversion__TypeCtorInfo_91_91 = (MR_Word) &mercury__array__array__type_ctor_info_array_1;
                    {
                      mercury__term_conversion__TypeInfo_90_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), mercury__term_conversion__TypeInfo_90_90, 0) = ((MR_Box) (mercury__term_conversion__TypeCtorInfo_89_89));
                      MR_hl_field(MR_mktag(0), mercury__term_conversion__TypeInfo_90_90, 1) = ((MR_Box) (mercury__term_conversion__TypeInfo_88_88));
                    }
                    {
                      mercury__term_conversion__TypeInfo_92_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), mercury__term_conversion__TypeInfo_92_92, 0) = ((MR_Box) (mercury__term_conversion__TypeCtorInfo_91_91));
                      MR_hl_field(MR_mktag(0), mercury__term_conversion__TypeInfo_92_92, 1) = ((MR_Box) (mercury__term_conversion__TypeInfo_88_88));
                    }
                    {
                      mercury__univ__det_univ_to_type_2_p_0(mercury__term_conversion__TypeInfo_92_92, mercury__term_conversion__Univ_10, &mercury__term_conversion__conv8_Array_30);
                    }
                    mercury__term_conversion__Array_30 = ((MR_ArrayPtr) mercury__term_conversion__conv8_Array_30);
                    {
                      mercury__array__to_list_2_p_0(mercury__term_conversion__TypeInfo_88_88, (MR_ArrayPtr) mercury__term_conversion__Array_30, &mercury__term_conversion__List_29);
                    }
                    {
                      mercury__term_conversion__type_to_term_2_p_0(mercury__term_conversion__TypeInfo_90_90, mercury__term_conversion__TypeInfo_for_T_78, ((MR_Box) (mercury__term_conversion__List_29)), &mercury__term_conversion__ArgsTerm_31);
                    }
                    mercury__term_conversion__Var_43 = (MR_String) "array";
                    mercury__term_conversion__Var_45 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    mercury__term_conversion__Var_42 = (MR_Word) &mercury__term_conversion_scalar_common_6[4];
                    {
                      mercury__term_conversion__Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), mercury__term_conversion__Var_44, 0) = ((MR_Box) (mercury__term_conversion__ArgsTerm_31));
                      MR_hl_field(MR_mktag(1), mercury__term_conversion__Var_44, 1) = ((MR_Box) (mercury__term_conversion__Var_45));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      *mercury__term_conversion__Term_12 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term_conversion__Var_42));
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__term_conversion__Var_44));
                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__term_conversion__Context_11));
                    }
                    mercury__term_conversion__succeeded = MR_TRUE;
                  }
              }
            else
            if ((strcmp(mercury__term_conversion__ModuleName_7, (MR_String) "version_array") == 0))
              {
                MR_Word mercury__term_conversion__TypeInfo_93_93;
                MR_Word mercury__term_conversion__TypeCtorInfo_94_94;
                MR_Word mercury__term_conversion__TypeInfo_95_95;
                MR_Word mercury__term_conversion__TypeCtorInfo_96_96;
                MR_Word mercury__term_conversion__TypeInfo_97_97;
                MR_Word mercury__term_conversion__Var_35;
                MR_String mercury__term_conversion__Var_36;
                MR_Word mercury__term_conversion__Var_37;
                MR_Word mercury__term_conversion__Var_38;
                MR_Word mercury__term_conversion__List_75;
                MR_Box mercury__term_conversion__Array_76;
                MR_Word mercury__term_conversion__ArgsTerm_77;
                MR_Box mercury__term_conversion__Elem_74;
                MR_Box mercury__term_conversion__conv9_Array_76;

                mercury__term_conversion__succeeded = (strcmp(mercury__term_conversion__TypeCtorName_8, (MR_String) "version_array") == 0);
                if (mercury__term_conversion__succeeded)
                  {
                    {
                      mercury__type_desc__has_type_2_p_0(&mercury__term_conversion__TypeInfo_93_93, mercury__term_conversion__Var_101);
                    }
                    mercury__term_conversion__TypeCtorInfo_94_94 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
                    mercury__term_conversion__TypeCtorInfo_96_96 = (MR_Word) &mercury__version_array__version_array__type_ctor_info_version_array_1;
                    {
                      mercury__term_conversion__TypeInfo_95_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), mercury__term_conversion__TypeInfo_95_95, 0) = ((MR_Box) (mercury__term_conversion__TypeCtorInfo_94_94));
                      MR_hl_field(MR_mktag(0), mercury__term_conversion__TypeInfo_95_95, 1) = ((MR_Box) (mercury__term_conversion__TypeInfo_93_93));
                    }
                    {
                      mercury__term_conversion__TypeInfo_97_97 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), mercury__term_conversion__TypeInfo_97_97, 0) = ((MR_Box) (mercury__term_conversion__TypeCtorInfo_96_96));
                      MR_hl_field(MR_mktag(0), mercury__term_conversion__TypeInfo_97_97, 1) = ((MR_Box) (mercury__term_conversion__TypeInfo_93_93));
                    }
                    {
                      mercury__univ__det_univ_to_type_2_p_0(mercury__term_conversion__TypeInfo_97_97, mercury__term_conversion__Univ_10, &mercury__term_conversion__conv9_Array_76);
                    }
                    mercury__term_conversion__Array_76 = ((MR_Box) mercury__term_conversion__conv9_Array_76);
                    {
                      mercury__term_conversion__List_75 = mercury__version_array__to_list_1_f_0(mercury__term_conversion__TypeInfo_93_93, mercury__term_conversion__Array_76);
                    }
                    {
                      mercury__term_conversion__type_to_term_2_p_0(mercury__term_conversion__TypeInfo_95_95, mercury__term_conversion__TypeInfo_for_T_78, ((MR_Box) (mercury__term_conversion__List_75)), &mercury__term_conversion__ArgsTerm_77);
                    }
                    mercury__term_conversion__Var_36 = (MR_String) "version_array";
                    mercury__term_conversion__Var_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    mercury__term_conversion__Var_35 = (MR_Word) &mercury__term_conversion_scalar_common_6[5];
                    {
                      mercury__term_conversion__Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), mercury__term_conversion__Var_37, 0) = ((MR_Box) (mercury__term_conversion__ArgsTerm_77));
                      MR_hl_field(MR_mktag(1), mercury__term_conversion__Var_37, 1) = ((MR_Box) (mercury__term_conversion__Var_38));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      *mercury__term_conversion__Term_12 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term_conversion__Var_35));
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__term_conversion__Var_37));
                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__term_conversion__Context_11));
                    }
                    mercury__term_conversion__succeeded = MR_TRUE;
                  }
              }
            else
              mercury__term_conversion__succeeded = MR_FALSE;
          }
      }
    return mercury__term_conversion__succeeded;
  }
}

static MR_bool MR_CALL 
mercury__term_conversion__term_list_to_univ_list_7_p_0(
  MR_Word mercury__term_conversion__TypeInfo_for_T_33,
  MR_Word mercury__term_conversion__HeadVar__1_1,
  MR_Word mercury__term_conversion__HeadVar__2_2,
  MR_Word mercury__term_conversion__Functor_3,
  MR_Integer mercury__term_conversion__ArgNum_4,
  MR_Word mercury__term_conversion__PrevContext_5,
  MR_Word mercury__term_conversion__TermContext_6,
  MR_Word * mercury__term_conversion__HeadVar__7_7)
{
  {
    MR_bool mercury__term_conversion__succeeded;

    if ((mercury__term_conversion__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word mercury__term_conversion__Var_12;

        mercury__term_conversion__succeeded = (mercury__term_conversion__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (mercury__term_conversion__succeeded)
          {
            mercury__term_conversion__Var_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            *mercury__term_conversion__HeadVar__7_7 = (MR_Word) &mercury__term_conversion_scalar_common_6[0];
            mercury__term_conversion__succeeded = MR_TRUE;
          }
      }
    else
      {
        MR_Word mercury__term_conversion__ArgTerm_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_conversion__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mercury__term_conversion__ArgTerms_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_conversion__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mercury__term_conversion__Type_15;
        MR_Word mercury__term_conversion__Types_16;
        MR_Word mercury__term_conversion__ArgContext_22;
        MR_Word mercury__term_conversion__NewContext_23;
        MR_Word mercury__term_conversion__ArgResult_24;

        mercury__term_conversion__succeeded = ((MR_tag((MR_Word) mercury__term_conversion__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (mercury__term_conversion__succeeded)
          {
            mercury__term_conversion__Type_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_conversion__HeadVar__2_2, (MR_Integer) 0)));
            mercury__term_conversion__Types_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_conversion__HeadVar__2_2, (MR_Integer) 1)));
            {
              mercury__term_conversion__ArgContext_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__term_conversion__ArgContext_22, 0) = ((MR_Box) (mercury__term_conversion__Functor_3));
              MR_hl_field(MR_mktag(0), mercury__term_conversion__ArgContext_22, 1) = ((MR_Box) (mercury__term_conversion__ArgNum_4));
              MR_hl_field(MR_mktag(0), mercury__term_conversion__ArgContext_22, 2) = ((MR_Box) (mercury__term_conversion__TermContext_6));
            }
            {
              mercury__term_conversion__NewContext_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__term_conversion__NewContext_23, 0) = ((MR_Box) (mercury__term_conversion__ArgContext_22));
              MR_hl_field(MR_mktag(1), mercury__term_conversion__NewContext_23, 1) = ((MR_Box) (mercury__term_conversion__PrevContext_5));
            }
            {
              mercury__term_conversion__try_term_to_univ_2_4_p_0(mercury__term_conversion__TypeInfo_for_T_33, mercury__term_conversion__ArgTerm_13, mercury__term_conversion__Type_15, mercury__term_conversion__NewContext_23, &mercury__term_conversion__ArgResult_24);
            }
            if (((MR_tag((MR_Word) mercury__term_conversion__ArgResult_24)) == (MR_mktag((MR_Integer) 1))))
              {
                *mercury__term_conversion__HeadVar__7_7 = (MR_Word) mercury__term_conversion__ArgResult_24;
                mercury__term_conversion__succeeded = MR_TRUE;
              }
            else
              {
                MR_Word mercury__term_conversion__Arg_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__ArgResult_24, (MR_Integer) 0)));
                MR_Word mercury__term_conversion__RestResult_26;
                MR_Integer mercury__term_conversion__Var_29 = (mercury__term_conversion__ArgNum_4 + (MR_Integer) 1);

                {
                  mercury__term_conversion__succeeded = mercury__term_conversion__term_list_to_univ_list_7_p_0(mercury__term_conversion__TypeInfo_for_T_33, mercury__term_conversion__ArgTerms_14, mercury__term_conversion__Types_16, mercury__term_conversion__Functor_3, mercury__term_conversion__Var_29, mercury__term_conversion__PrevContext_5, mercury__term_conversion__TermContext_6, &mercury__term_conversion__RestResult_26);
                }
                if (mercury__term_conversion__succeeded)
                  {
                    if (((MR_tag((MR_Word) mercury__term_conversion__RestResult_26)) == (MR_mktag((MR_Integer) 1))))
                      *mercury__term_conversion__HeadVar__7_7 = mercury__term_conversion__RestResult_26;
                    else
                      {
                        MR_Word mercury__term_conversion__Rest_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__RestResult_26, (MR_Integer) 0)));
                        MR_Word mercury__term_conversion__Var_31;

                        {
                          mercury__term_conversion__Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), mercury__term_conversion__Var_31, 0) = ((MR_Box) (mercury__term_conversion__Arg_25));
                          MR_hl_field(MR_mktag(1), mercury__term_conversion__Var_31, 1) = ((MR_Box) (mercury__term_conversion__Rest_27));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                          *mercury__term_conversion__HeadVar__7_7 = base;
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term_conversion__Var_31));
                        }
                      }
                    mercury__term_conversion__succeeded = MR_TRUE;
                  }
              }
          }
      }
    return mercury__term_conversion__succeeded;
  }
}

static MR_bool MR_CALL 
mercury__term_conversion__term_to_univ_special_case_6_p_0(
  MR_Word mercury__term_conversion__TypeInfo_for_T_151,
  MR_String mercury__term_conversion__ModuleName_7,
  MR_String mercury__term_conversion__TypeCtorName_8,
  MR_Word mercury__term_conversion__TypeArgs_9,
  MR_Word mercury__term_conversion__Term_10,
  MR_Word mercury__term_conversion__PrevContext_11,
  MR_Word * mercury__term_conversion__Result_12)
{
  {
    MR_bool mercury__term_conversion__succeeded;
    MR_Word mercury__term_conversion__Var_190 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__Term_10, (MR_Integer) 2)));
    MR_Word mercury__term_conversion__Var_191 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__Term_10, (MR_Integer) 1)));
    MR_Word mercury__term_conversion__Var_192 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__Term_10, (MR_Integer) 0)));

    if ((mercury__term_conversion__TypeArgs_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((strcmp(mercury__term_conversion__ModuleName_7, (MR_String) "univ") == 0))
        {
          MR_Word mercury__term_conversion__TypeCtorInfo_176_176;
          MR_Word mercury__term_conversion__ArgTerm_38;
          MR_Word mercury__term_conversion__ValueTerm_40;
          MR_Word mercury__term_conversion__TypeTerm_41;
          MR_String mercury__term_conversion__Var_50;
          MR_Word mercury__term_conversion__Var_52;
          MR_Word mercury__term_conversion__Var_53;
          MR_String mercury__term_conversion__Var_54;
          MR_Word mercury__term_conversion__Var_55;
          MR_Word mercury__term_conversion__Var_56;
          MR_Word mercury__term_conversion__Var_57;
          MR_Word mercury__term_conversion__Var_74;
          MR_Word mercury__term_conversion__Univ_146;
          MR_Word mercury__term_conversion__Var_185;
          MR_Word mercury__term_conversion__Var_186;
          MR_String mercury__term_conversion__Var_193;
          MR_Word mercury__term_conversion__Var_42;
          MR_Word mercury__term_conversion__Var_184;
          MR_Integer mercury__term_conversion__lo_0;
          MR_Integer mercury__term_conversion__hi_1;
          MR_Integer mercury__term_conversion__mid_2;
          MR_Integer mercury__term_conversion__result_3;

          mercury__term_conversion__succeeded = (strcmp(mercury__term_conversion__TypeCtorName_8, (MR_String) "univ") == 0);
          if (mercury__term_conversion__succeeded)
            {
              mercury__term_conversion__succeeded = ((MR_tag((MR_Word) mercury__term_conversion__Var_192)) == (MR_mktag((MR_Integer) 0)));
              if (mercury__term_conversion__succeeded)
                {
                  mercury__term_conversion__Var_50 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_conversion__Var_192, (MR_Integer) 0)));
                  mercury__term_conversion__succeeded = (strcmp(mercury__term_conversion__Var_50, (MR_String) "univ") == 0);
                  if (mercury__term_conversion__succeeded)
                    {
                      mercury__term_conversion__succeeded = ((MR_tag((MR_Word) mercury__term_conversion__Var_191)) == (MR_mktag((MR_Integer) 1)));
                      if (mercury__term_conversion__succeeded)
                        {
                          mercury__term_conversion__ArgTerm_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_conversion__Var_191, (MR_Integer) 0)));
                          mercury__term_conversion__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_conversion__Var_191, (MR_Integer) 1)));
                          mercury__term_conversion__succeeded = (mercury__term_conversion__Var_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          if (mercury__term_conversion__succeeded)
                            {
                              mercury__term_conversion__succeeded = ((MR_tag((MR_Word) mercury__term_conversion__ArgTerm_38)) == (MR_mktag((MR_Integer) 0)));
                              if (mercury__term_conversion__succeeded)
                                {
                                  mercury__term_conversion__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__ArgTerm_38, (MR_Integer) 0)));
                                  mercury__term_conversion__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__ArgTerm_38, (MR_Integer) 1)));
                                  mercury__term_conversion__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__ArgTerm_38, (MR_Integer) 2)));
                                  mercury__term_conversion__succeeded = ((MR_tag((MR_Word) mercury__term_conversion__Var_53)) == (MR_mktag((MR_Integer) 0)));
                                  if (mercury__term_conversion__succeeded)
                                    {
                                      mercury__term_conversion__Var_54 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_conversion__Var_53, (MR_Integer) 0)));
                                      mercury__term_conversion__succeeded = (strcmp(mercury__term_conversion__Var_54, (MR_String) ":") == 0);
                                      if (mercury__term_conversion__succeeded)
                                        {
                                          mercury__term_conversion__succeeded = ((MR_tag((MR_Word) mercury__term_conversion__Var_55)) == (MR_mktag((MR_Integer) 1)));
                                          if (mercury__term_conversion__succeeded)
                                            {
                                              mercury__term_conversion__ValueTerm_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_conversion__Var_55, (MR_Integer) 0)));
                                              mercury__term_conversion__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_conversion__Var_55, (MR_Integer) 1)));
                                              mercury__term_conversion__succeeded = ((MR_tag((MR_Word) mercury__term_conversion__Var_56)) == (MR_mktag((MR_Integer) 1)));
                                              if (mercury__term_conversion__succeeded)
                                                {
                                                  mercury__term_conversion__TypeTerm_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_conversion__Var_56, (MR_Integer) 0)));
                                                  mercury__term_conversion__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_conversion__Var_56, (MR_Integer) 1)));
                                                  mercury__term_conversion__succeeded = (mercury__term_conversion__Var_57 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  if (mercury__term_conversion__succeeded)
                                                    {
                                                      mercury__term_conversion__succeeded = ((MR_tag((MR_Word) mercury__term_conversion__TypeTerm_41)) == (MR_mktag((MR_Integer) 0)));
                                                      if (mercury__term_conversion__succeeded)
                                                        {
                                                          mercury__term_conversion__Var_186 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__TypeTerm_41, (MR_Integer) 0)));
                                                          mercury__term_conversion__Var_185 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__TypeTerm_41, (MR_Integer) 1)));
                                                          mercury__term_conversion__Var_184 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__TypeTerm_41, (MR_Integer) 2)));
                                                          mercury__term_conversion__succeeded = (mercury__term_conversion__Var_185 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                          if (mercury__term_conversion__succeeded)
                                                            {
                                                              mercury__term_conversion__succeeded = ((MR_tag((MR_Word) mercury__term_conversion__Var_186)) == (MR_mktag((MR_Integer) 0)));
                                                              if (mercury__term_conversion__succeeded)
                                                                {
                                                                  mercury__term_conversion__Var_193 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_conversion__Var_186, (MR_Integer) 0)));
                                                                  /* binary string jump switch */
                                                                  mercury__term_conversion__lo_0 = (MR_Integer) 0;
                                                                  mercury__term_conversion__hi_1 = (MR_Integer) 3;
                                                                  do
                                                                    {
                                                                      mercury__term_conversion__mid_2 = (((mercury__term_conversion__lo_0 + mercury__term_conversion__hi_1)) / (MR_Integer) 2);
                                                                      mercury__term_conversion__result_3 = MR_strcmp(mercury__term_conversion__Var_193, ((&mercury__term_conversion_vector_common_5[0 + mercury__term_conversion__mid_2]))->mercury__term_conversion__vector_common_type_5_0__vct_5_f_0);
                                                                      if ((mercury__term_conversion__result_3 == (MR_Integer) 0))
                                                                        {
                                                                          switch (((&mercury__term_conversion_vector_common_5[0 + mercury__term_conversion__mid_2]))->mercury__term_conversion__vector_common_type_5_0__vct_5_f_1) {
                                                                            default: /*NOTREACHED*/ MR_assert(0);
                                                                            case (MR_Integer) 0:
                                                                              {
                                                                                /* case "float" */
                                                                                {
                                                                                  MR_Word mercury__term_conversion__TypeCtorInfo_175_175;
                                                                                  MR_Word mercury__term_conversion__Var_61;
                                                                                  MR_Word mercury__term_conversion__Var_62;
                                                                                  MR_Float mercury__term_conversion__Float_141;
                                                                                  MR_Word mercury__term_conversion__Var_48;

                                                                                  mercury__term_conversion__succeeded = ((MR_tag((MR_Word) mercury__term_conversion__ValueTerm_40)) == (MR_mktag((MR_Integer) 0)));
                                                                                  if (mercury__term_conversion__succeeded)
                                                                                    {
                                                                                      mercury__term_conversion__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__ValueTerm_40, (MR_Integer) 0)));
                                                                                      mercury__term_conversion__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__ValueTerm_40, (MR_Integer) 1)));
                                                                                      mercury__term_conversion__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__ValueTerm_40, (MR_Integer) 2)));
                                                                                      mercury__term_conversion__succeeded = ((((MR_tag((MR_Word) mercury__term_conversion__Var_61)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term_conversion__Var_61, (MR_Integer) 0)))) == (MR_Integer) 0)));
                                                                                      if (mercury__term_conversion__succeeded)
                                                                                        {
                                                                                          mercury__term_conversion__Float_141 = MR_unbox_float((MR_hl_field(MR_mktag(3), mercury__term_conversion__Var_61, (MR_Integer) 1)));
                                                                                          mercury__term_conversion__succeeded = (mercury__term_conversion__Var_62 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                                                          if (mercury__term_conversion__succeeded)
                                                                                            {
                                                                                              mercury__term_conversion__TypeCtorInfo_175_175 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0;
                                                                                              {
                                                                                                mercury__term_conversion__Univ_146 = mercury__univ__univ_1_f_0(mercury__term_conversion__TypeCtorInfo_175_175, MR_box_float(mercury__term_conversion__Float_141));
                                                                                              }
                                                                                              mercury__term_conversion__succeeded = MR_TRUE;
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                              }
                                                                              break;
                                                                            case (MR_Integer) 1:
                                                                              {
                                                                                /* case "int" */
                                                                                {
                                                                                  MR_Word mercury__term_conversion__TypeCtorInfo_172_172;
                                                                                  MR_Integer mercury__term_conversion__Int_138;

                                                                                  {
                                                                                    mercury__term_conversion__succeeded = mercury__term__term_to_int_2_p_0(mercury__term_conversion__TypeInfo_for_T_151, mercury__term_conversion__ValueTerm_40, &mercury__term_conversion__Int_138);
                                                                                  }
                                                                                  if (mercury__term_conversion__succeeded)
                                                                                    {
                                                                                      mercury__term_conversion__TypeCtorInfo_172_172 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
                                                                                      {
                                                                                        mercury__term_conversion__Univ_146 = mercury__univ__univ_1_f_0(mercury__term_conversion__TypeCtorInfo_172_172, ((MR_Box) (mercury__term_conversion__Int_138)));
                                                                                      }
                                                                                      mercury__term_conversion__succeeded = MR_TRUE;
                                                                                    }
                                                                                }
                                                                              }
                                                                              break;
                                                                            case (MR_Integer) 2:
                                                                              {
                                                                                /* case "string" */
                                                                                {
                                                                                  MR_Word mercury__term_conversion__TypeCtorInfo_174_174;
                                                                                  MR_Word mercury__term_conversion__Var_66;
                                                                                  MR_Word mercury__term_conversion__Var_67;
                                                                                  MR_String mercury__term_conversion__String_140;
                                                                                  MR_Word mercury__term_conversion__Var_46;

                                                                                  mercury__term_conversion__succeeded = ((MR_tag((MR_Word) mercury__term_conversion__ValueTerm_40)) == (MR_mktag((MR_Integer) 0)));
                                                                                  if (mercury__term_conversion__succeeded)
                                                                                    {
                                                                                      mercury__term_conversion__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__ValueTerm_40, (MR_Integer) 0)));
                                                                                      mercury__term_conversion__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__ValueTerm_40, (MR_Integer) 1)));
                                                                                      mercury__term_conversion__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__ValueTerm_40, (MR_Integer) 2)));
                                                                                      mercury__term_conversion__succeeded = ((MR_tag((MR_Word) mercury__term_conversion__Var_66)) == (MR_mktag((MR_Integer) 2)));
                                                                                      if (mercury__term_conversion__succeeded)
                                                                                        {
                                                                                          mercury__term_conversion__String_140 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__term_conversion__Var_66, (MR_Integer) 0)));
                                                                                          mercury__term_conversion__succeeded = (mercury__term_conversion__Var_67 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                                                          if (mercury__term_conversion__succeeded)
                                                                                            {
                                                                                              mercury__term_conversion__TypeCtorInfo_174_174 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
                                                                                              {
                                                                                                mercury__term_conversion__Univ_146 = mercury__univ__univ_1_f_0(mercury__term_conversion__TypeCtorInfo_174_174, ((MR_Box) (mercury__term_conversion__String_140)));
                                                                                              }
                                                                                              mercury__term_conversion__succeeded = MR_TRUE;
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                              }
                                                                              break;
                                                                            case (MR_Integer) 3:
                                                                              {
                                                                                /* case "uint" */
                                                                                {
                                                                                  MR_Word mercury__term_conversion__TypeCtorInfo_173_173;
                                                                                  MR_Unsigned mercury__term_conversion__UInt_139;

                                                                                  {
                                                                                    mercury__term_conversion__succeeded = mercury__term__term_to_uint_2_p_0(mercury__term_conversion__TypeInfo_for_T_151, mercury__term_conversion__ValueTerm_40, &mercury__term_conversion__UInt_139);
                                                                                  }
                                                                                  if (mercury__term_conversion__succeeded)
                                                                                    {
                                                                                      mercury__term_conversion__TypeCtorInfo_173_173 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_uint_0;
                                                                                      {
                                                                                        mercury__term_conversion__Univ_146 = mercury__univ__univ_1_f_0(mercury__term_conversion__TypeCtorInfo_173_173, ((MR_Box) (mercury__term_conversion__UInt_139)));
                                                                                      }
                                                                                      mercury__term_conversion__succeeded = MR_TRUE;
                                                                                    }
                                                                                }
                                                                              }
                                                                              break;
                                                                          }
                                                                          /* jump out of search loop */
                                                                          goto label_0;
                                                                        }
                                                                      else
                                                                      if ((mercury__term_conversion__result_3 < (MR_Integer) 0))
                                                                        mercury__term_conversion__hi_1 = (mercury__term_conversion__mid_2 - (MR_Integer) 1);
                                                                      else
                                                                        mercury__term_conversion__lo_0 = (mercury__term_conversion__mid_2 + (MR_Integer) 1);
                                                                    }
                                                                  while ((mercury__term_conversion__lo_0 <= mercury__term_conversion__hi_1));
                                                                  mercury__term_conversion__succeeded = MR_FALSE;
                                                                label_0:;
                                                                  if (mercury__term_conversion__succeeded)
                                                                    {
                                                                      mercury__term_conversion__TypeCtorInfo_176_176 = (MR_Word) &mercury__univ__univ__type_ctor_info_univ_0;
                                                                      {
                                                                        mercury__term_conversion__Var_74 = mercury__univ__univ_1_f_0(mercury__term_conversion__TypeCtorInfo_176_176, ((MR_Box) (mercury__term_conversion__Univ_146)));
                                                                      }
                                                                      {
                                                                        MR_Word base;
                                                                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                                                        *mercury__term_conversion__Result_12 = base;
                                                                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term_conversion__Var_74));
                                                                      }
                                                                      mercury__term_conversion__succeeded = MR_TRUE;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
      else
      if ((strcmp(mercury__term_conversion__ModuleName_7, (MR_String) "bitmap") == 0))
        {
          MR_Word mercury__term_conversion__TypeCtorInfo_157_157;
          MR_Box mercury__term_conversion__Var_103;
          MR_Word mercury__term_conversion__Univ_113;
          MR_String mercury__term_conversion__String_114;

          mercury__term_conversion__succeeded = (strcmp(mercury__term_conversion__TypeCtorName_8, (MR_String) "bitmap") == 0);
          if (mercury__term_conversion__succeeded)
            {
              mercury__term_conversion__succeeded = ((MR_tag((MR_Word) mercury__term_conversion__Var_192)) == (MR_mktag((MR_Integer) 2)));
              if (mercury__term_conversion__succeeded)
                {
                  mercury__term_conversion__String_114 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__term_conversion__Var_192, (MR_Integer) 0)));
                  mercury__term_conversion__succeeded = (mercury__term_conversion__Var_191 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  if (mercury__term_conversion__succeeded)
                    {
                      {
                        mercury__term_conversion__succeeded = mercury__bitmap__from_string_1_f_0(mercury__term_conversion__String_114, &mercury__term_conversion__Var_103);
                      }
                      if (mercury__term_conversion__succeeded)
                        {
                          mercury__term_conversion__TypeCtorInfo_157_157 = (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_0;
                          {
                            mercury__univ__type_to_univ_2_p_1(mercury__term_conversion__TypeCtorInfo_157_157, ((MR_Box) (mercury__term_conversion__Var_103)), &mercury__term_conversion__Univ_113);
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                            *mercury__term_conversion__Result_12 = base;
                            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term_conversion__Univ_113));
                          }
                          mercury__term_conversion__succeeded = MR_TRUE;
                        }
                    }
                }
            }
        }
      else
      if ((strcmp(mercury__term_conversion__ModuleName_7, (MR_String) "builtin") == 0))
        {
          MR_Word mercury__term_conversion__Univ_17;
          MR_Integer mercury__term_conversion__lo_4;
          MR_Integer mercury__term_conversion__hi_5;
          MR_Integer mercury__term_conversion__mid_6;
          MR_Integer mercury__term_conversion__result_7;

          mercury__term_conversion__succeeded = (mercury__term_conversion__Var_191 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          if (mercury__term_conversion__succeeded)
            {
              /* binary string jump switch */
              mercury__term_conversion__lo_4 = (MR_Integer) 0;
              mercury__term_conversion__hi_5 = (MR_Integer) 4;
              do
                {
                  mercury__term_conversion__mid_6 = (((mercury__term_conversion__lo_4 + mercury__term_conversion__hi_5)) / (MR_Integer) 2);
                  mercury__term_conversion__result_7 = MR_strcmp(mercury__term_conversion__TypeCtorName_8, ((&mercury__term_conversion_vector_common_5[4 + mercury__term_conversion__mid_6]))->mercury__term_conversion__vector_common_type_5_0__vct_5_f_0);
                  if ((mercury__term_conversion__result_7 == (MR_Integer) 0))
                    {
                      switch (((&mercury__term_conversion_vector_common_5[4 + mercury__term_conversion__mid_6]))->mercury__term_conversion__vector_common_type_5_0__vct_5_f_1) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            /* case "character" */
                            {
                              MR_Word mercury__term_conversion__TypeCtorInfo_152_152;
                              MR_String mercury__term_conversion__FunctorName_15;
                              MR_Char mercury__term_conversion__Char_16;
                              MR_String mercury__term_conversion__Var_109;

                              mercury__term_conversion__succeeded = ((MR_tag((MR_Word) mercury__term_conversion__Var_192)) == (MR_mktag((MR_Integer) 0)));
                              if (mercury__term_conversion__succeeded)
                                {
                                  mercury__term_conversion__FunctorName_15 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_conversion__Var_192, (MR_Integer) 0)));
                                  mercury__term_conversion__Var_109 = (MR_String) "";
                                  {
                                    mercury__term_conversion__succeeded = mercury__string__first_char_3_p_1(mercury__term_conversion__FunctorName_15, &mercury__term_conversion__Char_16, mercury__term_conversion__Var_109);
                                  }
                                  if (mercury__term_conversion__succeeded)
                                    {
                                      mercury__term_conversion__TypeCtorInfo_152_152 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
                                      {
                                        mercury__univ__type_to_univ_2_p_0(mercury__term_conversion__TypeCtorInfo_152_152, ((MR_Box) (MR_Word) (mercury__term_conversion__Char_16)), &mercury__term_conversion__Univ_17);
                                      }
                                      mercury__term_conversion__succeeded = MR_TRUE;
                                    }
                                }
                            }
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            /* case "float" */
                            {
                              MR_Word mercury__term_conversion__TypeCtorInfo_156_156;
                              MR_Float mercury__term_conversion__Float_23;

                              mercury__term_conversion__succeeded = ((((MR_tag((MR_Word) mercury__term_conversion__Var_192)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term_conversion__Var_192, (MR_Integer) 0)))) == (MR_Integer) 0)));
                              if (mercury__term_conversion__succeeded)
                                {
                                  mercury__term_conversion__Float_23 = MR_unbox_float((MR_hl_field(MR_mktag(3), mercury__term_conversion__Var_192, (MR_Integer) 1)));
                                  mercury__term_conversion__TypeCtorInfo_156_156 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0;
                                  {
                                    mercury__univ__type_to_univ_2_p_1(mercury__term_conversion__TypeCtorInfo_156_156, MR_box_float(mercury__term_conversion__Float_23), &mercury__term_conversion__Univ_17);
                                  }
                                  mercury__term_conversion__succeeded = MR_TRUE;
                                }
                            }
                          }
                          break;
                        case (MR_Integer) 2:
                          {
                            /* case "int" */
                            {
                              MR_Word mercury__term_conversion__TypeCtorInfo_154_154;
                              MR_Word mercury__term_conversion__Integer_20;
                              MR_Integer mercury__term_conversion__Int_21;
                              MR_Word mercury__term_conversion__Var_107;
                              MR_Word mercury__term_conversion__Var_108;
                              MR_Word mercury__term_conversion___Base_19;

                              mercury__term_conversion__succeeded = ((MR_tag((MR_Word) mercury__term_conversion__Var_192)) == (MR_mktag((MR_Integer) 1)));
                              if (mercury__term_conversion__succeeded)
                                {
                                  mercury__term_conversion___Base_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_conversion__Var_192, (MR_Integer) 0)));
                                  mercury__term_conversion__Integer_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_conversion__Var_192, (MR_Integer) 1)));
                                  mercury__term_conversion__Var_107 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_conversion__Var_192, (MR_Integer) 2)));
                                  mercury__term_conversion__Var_108 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_conversion__Var_192, (MR_Integer) 3)));
                                  mercury__term_conversion__succeeded = (mercury__term_conversion__Var_107 == (MR_Integer) 0);
                                  if (mercury__term_conversion__succeeded)
                                    {
                                      mercury__term_conversion__succeeded = (mercury__term_conversion__Var_108 == (MR_Integer) 0);
                                      if (mercury__term_conversion__succeeded)
                                        {
                                          {
                                            mercury__term_conversion__succeeded = mercury__integer__to_int_2_p_0(mercury__term_conversion__Integer_20, &mercury__term_conversion__Int_21);
                                          }
                                          if (mercury__term_conversion__succeeded)
                                            {
                                              mercury__term_conversion__TypeCtorInfo_154_154 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
                                              {
                                                mercury__univ__type_to_univ_2_p_1(mercury__term_conversion__TypeCtorInfo_154_154, ((MR_Box) (mercury__term_conversion__Int_21)), &mercury__term_conversion__Univ_17);
                                              }
                                              mercury__term_conversion__succeeded = MR_TRUE;
                                            }
                                        }
                                    }
                                }
                            }
                          }
                          break;
                        case (MR_Integer) 3:
                          {
                            /* case "string" */
                            {
                              MR_Word mercury__term_conversion__TypeCtorInfo_153_153;
                              MR_String mercury__term_conversion__String_18;

                              mercury__term_conversion__succeeded = ((MR_tag((MR_Word) mercury__term_conversion__Var_192)) == (MR_mktag((MR_Integer) 2)));
                              if (mercury__term_conversion__succeeded)
                                {
                                  mercury__term_conversion__String_18 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__term_conversion__Var_192, (MR_Integer) 0)));
                                  mercury__term_conversion__TypeCtorInfo_153_153 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
                                  {
                                    mercury__univ__type_to_univ_2_p_1(mercury__term_conversion__TypeCtorInfo_153_153, ((MR_Box) (mercury__term_conversion__String_18)), &mercury__term_conversion__Univ_17);
                                  }
                                  mercury__term_conversion__succeeded = MR_TRUE;
                                }
                            }
                          }
                          break;
                        case (MR_Integer) 4:
                          {
                            /* case "uint" */
                            {
                              MR_Word mercury__term_conversion__TypeCtorInfo_155_155;
                              MR_Unsigned mercury__term_conversion__UInt_22;
                              MR_Word mercury__term_conversion__Var_105;
                              MR_Word mercury__term_conversion__Var_106;
                              MR_Word mercury__term_conversion__Integer_112;
                              MR_Word mercury__term_conversion___Base_110;

                              mercury__term_conversion__succeeded = ((MR_tag((MR_Word) mercury__term_conversion__Var_192)) == (MR_mktag((MR_Integer) 1)));
                              if (mercury__term_conversion__succeeded)
                                {
                                  mercury__term_conversion___Base_110 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_conversion__Var_192, (MR_Integer) 0)));
                                  mercury__term_conversion__Integer_112 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_conversion__Var_192, (MR_Integer) 1)));
                                  mercury__term_conversion__Var_105 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_conversion__Var_192, (MR_Integer) 2)));
                                  mercury__term_conversion__Var_106 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_conversion__Var_192, (MR_Integer) 3)));
                                  mercury__term_conversion__succeeded = (mercury__term_conversion__Var_105 == (MR_Integer) 1);
                                  if (mercury__term_conversion__succeeded)
                                    {
                                      mercury__term_conversion__succeeded = (mercury__term_conversion__Var_106 == (MR_Integer) 0);
                                      if (mercury__term_conversion__succeeded)
                                        {
                                          {
                                            mercury__term_conversion__succeeded = mercury__integer__to_uint_2_p_0(mercury__term_conversion__Integer_112, &mercury__term_conversion__UInt_22);
                                          }
                                          if (mercury__term_conversion__succeeded)
                                            {
                                              mercury__term_conversion__TypeCtorInfo_155_155 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_uint_0;
                                              {
                                                mercury__univ__type_to_univ_2_p_1(mercury__term_conversion__TypeCtorInfo_155_155, ((MR_Box) (mercury__term_conversion__UInt_22)), &mercury__term_conversion__Univ_17);
                                              }
                                              mercury__term_conversion__succeeded = MR_TRUE;
                                            }
                                        }
                                    }
                                }
                            }
                          }
                          break;
                      }
                      /* jump out of search loop */
                      goto label_1;
                    }
                  else
                  if ((mercury__term_conversion__result_7 < (MR_Integer) 0))
                    mercury__term_conversion__hi_5 = (mercury__term_conversion__mid_6 - (MR_Integer) 1);
                  else
                    mercury__term_conversion__lo_4 = (mercury__term_conversion__mid_6 + (MR_Integer) 1);
                }
              while ((mercury__term_conversion__lo_4 <= mercury__term_conversion__hi_5));
              mercury__term_conversion__succeeded = MR_FALSE;
            label_1:;
              if (mercury__term_conversion__succeeded)
                {
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    *mercury__term_conversion__Result_12 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term_conversion__Univ_17));
                  }
                  mercury__term_conversion__succeeded = MR_TRUE;
                }
            }
        }
      else
        mercury__term_conversion__succeeded = MR_FALSE;
    else
      {
        MR_Word mercury__term_conversion__Var_182 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_conversion__TypeArgs_9, (MR_Integer) 1)));
        MR_Word mercury__term_conversion__Var_183 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_conversion__TypeArgs_9, (MR_Integer) 0)));
        MR_Word mercury__term_conversion__Var_194;
        MR_Word mercury__term_conversion__Var_195;
        MR_String mercury__term_conversion__Var_196;

        mercury__term_conversion__succeeded = (mercury__term_conversion__Var_182 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (mercury__term_conversion__succeeded)
          {
            mercury__term_conversion__succeeded = ((MR_tag((MR_Word) mercury__term_conversion__Var_191)) == (MR_mktag((MR_Integer) 1)));
            if (mercury__term_conversion__succeeded)
              {
                mercury__term_conversion__Var_195 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_conversion__Var_191, (MR_Integer) 0)));
                mercury__term_conversion__Var_194 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_conversion__Var_191, (MR_Integer) 1)));
                mercury__term_conversion__succeeded = ((MR_tag((MR_Word) mercury__term_conversion__Var_192)) == (MR_mktag((MR_Integer) 0)));
                if (mercury__term_conversion__succeeded)
                  {
                    mercury__term_conversion__Var_196 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_conversion__Var_192, (MR_Integer) 0)));
                    mercury__term_conversion__succeeded = (mercury__term_conversion__Var_194 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (mercury__term_conversion__succeeded)
                      {
                        if ((strcmp(mercury__term_conversion__ModuleName_7, (MR_String) "array") == 0))
                          {
                            MR_Word mercury__term_conversion__TypeInfo_158_158;
                            MR_Word mercury__term_conversion__TypeCtorInfo_159_159;
                            MR_Word mercury__term_conversion__TypeInfo_160_160;
                            MR_Word mercury__term_conversion__ListType_29;
                            MR_Word mercury__term_conversion__ArgContext_30;
                            MR_Word mercury__term_conversion__NewContext_31;
                            MR_Word mercury__term_conversion__ArgResult_32;
                            MR_Integer mercury__term_conversion__Var_97;
                            MR_Box mercury__term_conversion__Elem_28;
                            MR_Word mercury__term_conversion__Var_93;

                            mercury__term_conversion__succeeded = (strcmp(mercury__term_conversion__TypeCtorName_8, (MR_String) "array") == 0);
                            if (mercury__term_conversion__succeeded)
                              {
                                mercury__term_conversion__succeeded = (strcmp(mercury__term_conversion__Var_196, (MR_String) "array") == 0);
                                if (mercury__term_conversion__succeeded)
                                  {
                                    {
                                      mercury__type_desc__has_type_2_p_0(&mercury__term_conversion__TypeInfo_158_158, mercury__term_conversion__Var_183);
                                    }
                                    mercury__term_conversion__TypeCtorInfo_159_159 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
                                    {
                                      mercury__term_conversion__TypeInfo_160_160 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                      MR_hl_field(MR_mktag(0), mercury__term_conversion__TypeInfo_160_160, 0) = ((MR_Box) (mercury__term_conversion__TypeCtorInfo_159_159));
                                      MR_hl_field(MR_mktag(0), mercury__term_conversion__TypeInfo_160_160, 1) = ((MR_Box) (mercury__term_conversion__TypeInfo_158_158));
                                    }
                                    {
                                      mercury__term_conversion__ListType_29 = mercury__type_desc__type_of_1_f_0(mercury__term_conversion__TypeInfo_160_160);
                                    }
                                    mercury__term_conversion__Var_97 = (MR_Integer) 1;
                                    {
                                      mercury__term_conversion__ArgContext_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                                      MR_hl_field(MR_mktag(0), mercury__term_conversion__ArgContext_30, 0) = ((MR_Box) (mercury__term_conversion__Var_192));
                                      MR_hl_field(MR_mktag(0), mercury__term_conversion__ArgContext_30, 1) = ((MR_Box) (mercury__term_conversion__Var_97));
                                      MR_hl_field(MR_mktag(0), mercury__term_conversion__ArgContext_30, 2) = ((MR_Box) (mercury__term_conversion__Var_190));
                                    }
                                    {
                                      mercury__term_conversion__NewContext_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                      MR_hl_field(MR_mktag(1), mercury__term_conversion__NewContext_31, 0) = ((MR_Box) (mercury__term_conversion__ArgContext_30));
                                      MR_hl_field(MR_mktag(1), mercury__term_conversion__NewContext_31, 1) = ((MR_Box) (mercury__term_conversion__PrevContext_11));
                                    }
                                    {
                                      mercury__term_conversion__try_term_to_univ_2_4_p_0(mercury__term_conversion__TypeInfo_for_T_151, mercury__term_conversion__Var_195, mercury__term_conversion__ListType_29, mercury__term_conversion__NewContext_31, &mercury__term_conversion__ArgResult_32);
                                    }
                                    if (((MR_tag((MR_Word) mercury__term_conversion__ArgResult_32)) == (MR_mktag((MR_Integer) 1))))
                                      *mercury__term_conversion__Result_12 = mercury__term_conversion__ArgResult_32;
                                    else
                                      {
                                        MR_Word mercury__term_conversion__TypeInfo_161_161;
                                        MR_Word mercury__term_conversion__TypeInfo_162_162;
                                        MR_Word mercury__term_conversion__TypeCtorInfo_163_163;
                                        MR_Word mercury__term_conversion__TypeInfo_164_164;
                                        MR_Word mercury__term_conversion__ListUniv_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__ArgResult_32, (MR_Integer) 0)));
                                        MR_Word mercury__term_conversion__List_35;
                                        MR_ArrayPtr mercury__term_conversion__Array_36;
                                        MR_Word mercury__term_conversion__Var_100;
                                        MR_Box mercury__term_conversion__Elem2_34;
                                        MR_Box mercury__term_conversion__conv0_List_35;
                                        MR_ArrayPtr mercury__term_conversion__conv1_Array_36;

                                        {
                                          mercury__type_desc__has_type_2_p_0(&mercury__term_conversion__TypeInfo_161_161, mercury__term_conversion__Var_183);
                                        }
                                        {
                                          mercury__term_conversion__TypeInfo_162_162 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                          MR_hl_field(MR_mktag(0), mercury__term_conversion__TypeInfo_162_162, 0) = ((MR_Box) (mercury__term_conversion__TypeCtorInfo_159_159));
                                          MR_hl_field(MR_mktag(0), mercury__term_conversion__TypeInfo_162_162, 1) = ((MR_Box) (mercury__term_conversion__TypeInfo_161_161));
                                        }
                                        {
                                          mercury__univ__det_univ_to_type_2_p_0(mercury__term_conversion__TypeInfo_162_162, mercury__term_conversion__ListUniv_33, &mercury__term_conversion__conv0_List_35);
                                        }
                                        mercury__term_conversion__List_35 = ((MR_Word) mercury__term_conversion__conv0_List_35);
                                        {
                                          mercury__term_conversion__conv1_Array_36 = mercury__array__array_1_f_0(mercury__term_conversion__TypeInfo_161_161, mercury__term_conversion__List_35);
                                        }
                                        mercury__term_conversion__Array_36 = (MR_ArrayPtr) mercury__term_conversion__conv1_Array_36;
                                        mercury__term_conversion__TypeCtorInfo_163_163 = (MR_Word) &mercury__array__array__type_ctor_info_array_1;
                                        {
                                          mercury__term_conversion__TypeInfo_164_164 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                          MR_hl_field(MR_mktag(0), mercury__term_conversion__TypeInfo_164_164, 0) = ((MR_Box) (mercury__term_conversion__TypeCtorInfo_163_163));
                                          MR_hl_field(MR_mktag(0), mercury__term_conversion__TypeInfo_164_164, 1) = ((MR_Box) (mercury__term_conversion__TypeInfo_161_161));
                                        }
                                        {
                                          mercury__term_conversion__Var_100 = mercury__univ__univ_1_f_0(mercury__term_conversion__TypeInfo_164_164, ((MR_Box) (mercury__term_conversion__Array_36)));
                                        }
                                        {
                                          MR_Word base;
                                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                          *mercury__term_conversion__Result_12 = base;
                                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term_conversion__Var_100));
                                        }
                                      }
                                    mercury__term_conversion__succeeded = MR_TRUE;
                                  }
                              }
                          }
                        else
                        if ((strcmp(mercury__term_conversion__ModuleName_7, (MR_String) "version_array") == 0))
                          {
                            MR_Word mercury__term_conversion__TypeInfo_165_165;
                            MR_Word mercury__term_conversion__TypeCtorInfo_166_166;
                            MR_Word mercury__term_conversion__TypeInfo_167_167;
                            MR_Integer mercury__term_conversion__Var_84;
                            MR_Word mercury__term_conversion__ListType_129;
                            MR_Word mercury__term_conversion__ArgContext_130;
                            MR_Word mercury__term_conversion__NewContext_131;
                            MR_Word mercury__term_conversion__ArgResult_132;
                            MR_Box mercury__term_conversion__Elem_128;
                            MR_Word mercury__term_conversion__Var_80;

                            mercury__term_conversion__succeeded = (strcmp(mercury__term_conversion__TypeCtorName_8, (MR_String) "version_array") == 0);
                            if (mercury__term_conversion__succeeded)
                              {
                                mercury__term_conversion__succeeded = (strcmp(mercury__term_conversion__Var_196, (MR_String) "version_array") == 0);
                                if (mercury__term_conversion__succeeded)
                                  {
                                    {
                                      mercury__type_desc__has_type_2_p_0(&mercury__term_conversion__TypeInfo_165_165, mercury__term_conversion__Var_183);
                                    }
                                    mercury__term_conversion__TypeCtorInfo_166_166 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
                                    {
                                      mercury__term_conversion__TypeInfo_167_167 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                      MR_hl_field(MR_mktag(0), mercury__term_conversion__TypeInfo_167_167, 0) = ((MR_Box) (mercury__term_conversion__TypeCtorInfo_166_166));
                                      MR_hl_field(MR_mktag(0), mercury__term_conversion__TypeInfo_167_167, 1) = ((MR_Box) (mercury__term_conversion__TypeInfo_165_165));
                                    }
                                    {
                                      mercury__term_conversion__ListType_129 = mercury__type_desc__type_of_1_f_0(mercury__term_conversion__TypeInfo_167_167);
                                    }
                                    mercury__term_conversion__Var_84 = (MR_Integer) 1;
                                    {
                                      mercury__term_conversion__ArgContext_130 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                                      MR_hl_field(MR_mktag(0), mercury__term_conversion__ArgContext_130, 0) = ((MR_Box) (mercury__term_conversion__Var_192));
                                      MR_hl_field(MR_mktag(0), mercury__term_conversion__ArgContext_130, 1) = ((MR_Box) (mercury__term_conversion__Var_84));
                                      MR_hl_field(MR_mktag(0), mercury__term_conversion__ArgContext_130, 2) = ((MR_Box) (mercury__term_conversion__Var_190));
                                    }
                                    {
                                      mercury__term_conversion__NewContext_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                      MR_hl_field(MR_mktag(1), mercury__term_conversion__NewContext_131, 0) = ((MR_Box) (mercury__term_conversion__ArgContext_130));
                                      MR_hl_field(MR_mktag(1), mercury__term_conversion__NewContext_131, 1) = ((MR_Box) (mercury__term_conversion__PrevContext_11));
                                    }
                                    {
                                      mercury__term_conversion__try_term_to_univ_2_4_p_0(mercury__term_conversion__TypeInfo_for_T_151, mercury__term_conversion__Var_195, mercury__term_conversion__ListType_129, mercury__term_conversion__NewContext_131, &mercury__term_conversion__ArgResult_132);
                                    }
                                    if (((MR_tag((MR_Word) mercury__term_conversion__ArgResult_132)) == (MR_mktag((MR_Integer) 1))))
                                      *mercury__term_conversion__Result_12 = mercury__term_conversion__ArgResult_132;
                                    else
                                      {
                                        MR_Word mercury__term_conversion__TypeInfo_168_168;
                                        MR_Word mercury__term_conversion__TypeInfo_169_169;
                                        MR_Word mercury__term_conversion__TypeCtorInfo_170_170;
                                        MR_Word mercury__term_conversion__TypeInfo_171_171;
                                        MR_Word mercury__term_conversion__Var_87;
                                        MR_Word mercury__term_conversion__ListUniv_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__ArgResult_132, (MR_Integer) 0)));
                                        MR_Word mercury__term_conversion__List_117;
                                        MR_Box mercury__term_conversion__Array_118;
                                        MR_Box mercury__term_conversion__Elem2_116;
                                        MR_Box mercury__term_conversion__conv2_List_117;

                                        {
                                          mercury__type_desc__has_type_2_p_0(&mercury__term_conversion__TypeInfo_168_168, mercury__term_conversion__Var_183);
                                        }
                                        {
                                          mercury__term_conversion__TypeInfo_169_169 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                          MR_hl_field(MR_mktag(0), mercury__term_conversion__TypeInfo_169_169, 0) = ((MR_Box) (mercury__term_conversion__TypeCtorInfo_166_166));
                                          MR_hl_field(MR_mktag(0), mercury__term_conversion__TypeInfo_169_169, 1) = ((MR_Box) (mercury__term_conversion__TypeInfo_168_168));
                                        }
                                        {
                                          mercury__univ__det_univ_to_type_2_p_0(mercury__term_conversion__TypeInfo_169_169, mercury__term_conversion__ListUniv_115, &mercury__term_conversion__conv2_List_117);
                                        }
                                        mercury__term_conversion__List_117 = ((MR_Word) mercury__term_conversion__conv2_List_117);
                                        {
                                          mercury__term_conversion__Array_118 = mercury__version_array__version_array_1_f_0(mercury__term_conversion__TypeInfo_168_168, mercury__term_conversion__List_117);
                                        }
                                        mercury__term_conversion__TypeCtorInfo_170_170 = (MR_Word) &mercury__version_array__version_array__type_ctor_info_version_array_1;
                                        {
                                          mercury__term_conversion__TypeInfo_171_171 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                          MR_hl_field(MR_mktag(0), mercury__term_conversion__TypeInfo_171_171, 0) = ((MR_Box) (mercury__term_conversion__TypeCtorInfo_170_170));
                                          MR_hl_field(MR_mktag(0), mercury__term_conversion__TypeInfo_171_171, 1) = ((MR_Box) (mercury__term_conversion__TypeInfo_168_168));
                                        }
                                        {
                                          mercury__term_conversion__Var_87 = mercury__univ__univ_1_f_0(mercury__term_conversion__TypeInfo_171_171, ((MR_Box) (mercury__term_conversion__Array_118)));
                                        }
                                        {
                                          MR_Word base;
                                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                          *mercury__term_conversion__Result_12 = base;
                                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term_conversion__Var_87));
                                        }
                                      }
                                    mercury__term_conversion__succeeded = MR_TRUE;
                                  }
                              }
                          }
                        else
                          mercury__term_conversion__succeeded = MR_FALSE;
                      }
                  }
              }
          }
      }
    return mercury__term_conversion__succeeded;
  }
}

static void MR_CALL 
mercury__term_conversion__try_term_to_univ_2_4_p_0(
  MR_Word mercury__term_conversion__TypeInfo_for_T_34,
  MR_Word mercury__term_conversion__Term_5,
  MR_Word mercury__term_conversion__Type_6,
  MR_Word mercury__term_conversion__Context_7,
  MR_Word * mercury__term_conversion__Result_8)
{
  {
    MR_bool mercury__term_conversion__succeeded;

    if (((MR_tag((MR_Word) mercury__term_conversion__Term_5)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word mercury__term_conversion__Functor_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__Term_5, (MR_Integer) 0)));
        MR_Word mercury__term_conversion__ArgTerms_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__Term_5, (MR_Integer) 1)));
        MR_Word mercury__term_conversion__TermContext_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__Term_5, (MR_Integer) 2)));
        MR_Word mercury__term_conversion__SpecialCaseResult_18;
        MR_Word mercury__term_conversion__TypeCtor_14;
        MR_Word mercury__term_conversion__TypeArgs_15;
        MR_String mercury__term_conversion__ModuleName_16;
        MR_String mercury__term_conversion__TypeCtorName_17;
        MR_String mercury__term_conversion__V_5_40;
        MR_Integer mercury__term_conversion__V_6_41;
        MR_String mercury__term_conversion__V_5_44;
        MR_Integer mercury__term_conversion__V_6_45;

{
#define MR_PROC_LABEL mercury__term_conversion__try_term_to_univ_2_4_p_0

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc =  mercury__term_conversion__Type_6 ;
		{
{
    MR_TypeCtorDesc type_ctor_desc;
    MR_TypeInfo     type_info;

    MR_save_transient_registers();

    type_info = (MR_TypeInfo) TypeDesc;
    MR_type_ctor_and_args(type_info, MR_TRUE, &type_ctor_desc, &ArgTypes);
    TypeCtorDesc = (MR_Word) type_ctor_desc;

    MR_restore_transient_registers();
}

		;}
#undef MR_PROC_LABEL
	 mercury__term_conversion__TypeCtor_14  = TypeCtorDesc;
	 mercury__term_conversion__TypeArgs_15  = ArgTypes;
}
{
#define MR_PROC_LABEL mercury__term_conversion__try_term_to_univ_2_4_p_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc =  mercury__term_conversion__TypeCtor_14 ;
		{
{
    MR_TypeCtorDesc type_ctor_desc;

    type_ctor_desc = (MR_TypeCtorDesc) TypeCtorDesc;

    if (MR_TYPECTOR_DESC_IS_VARIABLE_ARITY(type_ctor_desc)) {
        TypeCtorModuleName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_MODULE_NAME(type_ctor_desc);
        TypeCtorName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_NAME(type_ctor_desc);
        TypeCtorArity = MR_TYPECTOR_DESC_GET_VA_ARITY(type_ctor_desc);
    } else {
        MR_TypeCtorInfo type_ctor_info;

        type_ctor_info =
            MR_TYPECTOR_DESC_GET_FIXED_ARITY_TYPE_CTOR_INFO(type_ctor_desc);

        /*
        ** We cast away the const-ness of the module and type names,
        ** because MR_String is defined as char *, not const char *.
        */

        TypeCtorModuleName = (MR_String) (MR_Integer)
            MR_type_ctor_module_name(type_ctor_info);
        TypeCtorName = (MR_String) (MR_Integer)
            MR_type_ctor_name(type_ctor_info);
        TypeCtorArity = type_ctor_info->MR_type_ctor_arity;
    }
}

		;}
#undef MR_PROC_LABEL
	 mercury__term_conversion__ModuleName_16  = TypeCtorModuleName;
	 mercury__term_conversion__V_5_40  = TypeCtorName;
	 mercury__term_conversion__V_6_41  = TypeCtorArity;
}
{
#define MR_PROC_LABEL mercury__term_conversion__try_term_to_univ_2_4_p_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc =  mercury__term_conversion__TypeCtor_14 ;
		{
{
    MR_TypeCtorDesc type_ctor_desc;

    type_ctor_desc = (MR_TypeCtorDesc) TypeCtorDesc;

    if (MR_TYPECTOR_DESC_IS_VARIABLE_ARITY(type_ctor_desc)) {
        TypeCtorModuleName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_MODULE_NAME(type_ctor_desc);
        TypeCtorName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_NAME(type_ctor_desc);
        TypeCtorArity = MR_TYPECTOR_DESC_GET_VA_ARITY(type_ctor_desc);
    } else {
        MR_TypeCtorInfo type_ctor_info;

        type_ctor_info =
            MR_TYPECTOR_DESC_GET_FIXED_ARITY_TYPE_CTOR_INFO(type_ctor_desc);

        /*
        ** We cast away the const-ness of the module and type names,
        ** because MR_String is defined as char *, not const char *.
        */

        TypeCtorModuleName = (MR_String) (MR_Integer)
            MR_type_ctor_module_name(type_ctor_info);
        TypeCtorName = (MR_String) (MR_Integer)
            MR_type_ctor_name(type_ctor_info);
        TypeCtorArity = type_ctor_info->MR_type_ctor_arity;
    }
}

		;}
#undef MR_PROC_LABEL
	 mercury__term_conversion__V_5_44  = TypeCtorModuleName;
	 mercury__term_conversion__TypeCtorName_17  = TypeCtorName;
	 mercury__term_conversion__V_6_45  = TypeCtorArity;
}
        {
          mercury__term_conversion__succeeded = mercury__term_conversion__term_to_univ_special_case_6_p_0(mercury__term_conversion__TypeInfo_for_T_34, mercury__term_conversion__ModuleName_16, mercury__term_conversion__TypeCtorName_17, mercury__term_conversion__TypeArgs_15, mercury__term_conversion__Term_5, mercury__term_conversion__Context_7, &mercury__term_conversion__SpecialCaseResult_18);
        }
        if (mercury__term_conversion__succeeded)
          *mercury__term_conversion__Result_8 = mercury__term_conversion__SpecialCaseResult_18;
        else
          {
            MR_Integer mercury__term_conversion__FunctorNumber_21;
            MR_Word mercury__term_conversion__ArgsResult_23;
            MR_Word mercury__term_conversion__TypeCtorInfo_35_35;
            MR_Word mercury__term_conversion__TypeInfo_36_36;
            MR_String mercury__term_conversion__FunctorName_19;
            MR_Integer mercury__term_conversion__Arity_20;
            MR_Word mercury__term_conversion__ArgTypes_22;
            MR_Integer mercury__term_conversion__Var_28;
            MR_Integer mercury__term_conversion__V_5_48;
            MR_Integer mercury__term_conversion__V_11_54;

            mercury__term_conversion__succeeded = ((MR_tag((MR_Word) mercury__term_conversion__Functor_11)) == (MR_mktag((MR_Integer) 0)));
            if (mercury__term_conversion__succeeded)
              {
                mercury__term_conversion__FunctorName_19 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term_conversion__Functor_11, (MR_Integer) 0)));
                mercury__term_conversion__TypeCtorInfo_35_35 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
                mercury__term_conversion__V_5_48 = (MR_Integer) 0;
                {
                  mercury__term_conversion__TypeInfo_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__term_conversion__TypeInfo_36_36, 0) = ((MR_Box) (mercury__term_conversion__TypeCtorInfo_35_35));
                  MR_hl_field(MR_mktag(0), mercury__term_conversion__TypeInfo_36_36, 1) = ((MR_Box) (mercury__term_conversion__TypeInfo_for_T_34));
                }
                {
                  mercury__list__length_acc_3_p_0(mercury__term_conversion__TypeInfo_36_36, (MR_Word) mercury__term_conversion__ArgTerms_12, mercury__term_conversion__V_5_48, &mercury__term_conversion__Arity_20);
                }
{
#define MR_PROC_LABEL mercury__term_conversion__try_term_to_univ_2_4_p_0

	MR_Word TypeInfo;
	MR_Integer Functors;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo =  mercury__term_conversion__Type_6 ;
		{
{
    MR_save_transient_registers();
    Functors = MR_get_num_functors((MR_TypeInfo) TypeInfo);
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = (Functors >= 0);
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__term_conversion__V_11_54  = Functors;
	}
mercury__term_conversion__succeeded  = SUCCESS_INDICATOR;
}
                if (mercury__term_conversion__succeeded)
                  {
                    {
                      mercury__term_conversion__succeeded = mercury__construct__find_functor_2_6_p_0(mercury__term_conversion__Type_6, mercury__term_conversion__FunctorName_19, mercury__term_conversion__Arity_20, mercury__term_conversion__V_11_54, &mercury__term_conversion__FunctorNumber_21, &mercury__term_conversion__ArgTypes_22);
                    }
                    if (mercury__term_conversion__succeeded)
                      {
                        mercury__term_conversion__Var_28 = (MR_Integer) 1;
                        {
                          mercury__term_conversion__succeeded = mercury__term_conversion__term_list_to_univ_list_7_p_0(mercury__term_conversion__TypeInfo_for_T_34, mercury__term_conversion__ArgTerms_12, mercury__term_conversion__ArgTypes_22, mercury__term_conversion__Functor_11, mercury__term_conversion__Var_28, mercury__term_conversion__Context_7, mercury__term_conversion__TermContext_13, &mercury__term_conversion__ArgsResult_23);
                        }
                      }
                  }
              }
            if (mercury__term_conversion__succeeded)
              if (((MR_tag((MR_Word) mercury__term_conversion__ArgsResult_23)) == (MR_mktag((MR_Integer) 1))))
                *mercury__term_conversion__Result_8 = (MR_Word) mercury__term_conversion__ArgsResult_23;
              else
                {
                  MR_Word mercury__term_conversion__ArgValues_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__ArgsResult_23, (MR_Integer) 0)));
                  MR_Word mercury__term_conversion__Value_25;

                  {
                    mercury__term_conversion__succeeded = mercury__construct__construct_3_f_0(mercury__term_conversion__Type_6, mercury__term_conversion__FunctorNumber_21, mercury__term_conversion__ArgValues_24, &mercury__term_conversion__Value_25);
                  }
                  if (mercury__term_conversion__succeeded)
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                      *mercury__term_conversion__Result_8 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term_conversion__Value_25));
                    }
                  else
                    {
                      {
                        mercury__require__unexpected_3_p_0((MR_String) "term_conversion", (MR_String) "predicate \140term_conversion.try_term_to_univ_2\'/4", (MR_String) "construct/3 failed");
                        return;
                      }
                    }
                }
            else
              {
                MR_Word mercury__term_conversion__TypeCtorInfo_37_37 = (MR_Word) &mercury__term_conversion__term_conversion__type_ctor_info_term_to_type_arg_context_0;
                MR_Word mercury__term_conversion__RevContext_27;
                MR_Word mercury__term_conversion__Var_32;

                {
                  mercury__list__reverse_2_p_0(mercury__term_conversion__TypeCtorInfo_37_37, mercury__term_conversion__Context_7, &mercury__term_conversion__RevContext_27);
                }
                {
                  mercury__term_conversion__Var_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__term_conversion__Var_32, 0) = ((MR_Box) (mercury__term_conversion__Term_5));
                  MR_hl_field(MR_mktag(0), mercury__term_conversion__Var_32, 1) = ((MR_Box) (mercury__term_conversion__Type_6));
                  MR_hl_field(MR_mktag(0), mercury__term_conversion__Var_32, 2) = ((MR_Box) (mercury__term_conversion__TermContext_13));
                  MR_hl_field(MR_mktag(0), mercury__term_conversion__Var_32, 3) = ((MR_Box) (mercury__term_conversion__RevContext_27));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *mercury__term_conversion__Result_8 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term_conversion__Var_32));
                }
              }
          }
      }
    else
      {
        MR_Word mercury__term_conversion__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_conversion__Term_5, (MR_Integer) 0)));
        MR_Word mercury__term_conversion__Var_33;
        MR_Word mercury__term_conversion__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term_conversion__Term_5, (MR_Integer) 1)));

        {
          mercury__term_conversion__Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__term_conversion__Var_33, 0) = ((MR_Box) (mercury__term_conversion__Var_9));
          MR_hl_field(MR_mktag(1), mercury__term_conversion__Var_33, 1) = ((MR_Box) (mercury__term_conversion__Context_7));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *mercury__term_conversion__Result_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term_conversion__Var_33));
        }
      }
  }
}

void MR_CALL 
mercury__term_conversion__univ_to_term_2_p_0(
  MR_Word mercury__term_conversion__TypeInfo_28_28,
  MR_Word mercury__term_conversion__Univ_3,
  MR_Word * mercury__term_conversion__Term_4)
{
  {
    MR_bool mercury__term_conversion__succeeded;
    MR_Word mercury__term_conversion__TypeInfo_6_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__Univ_3, (MR_Integer) 0)));
    MR_Word mercury__term_conversion__Context_5 = (MR_Word) &mercury__term_conversion_scalar_common_1[1];
    MR_Word mercury__term_conversion__Type_6;
    MR_Box mercury__term_conversion__V_4_34 = (MR_hl_field(MR_mktag(0), mercury__term_conversion__Univ_3, (MR_Integer) 1));
    MR_Box mercury__term_conversion__Var_36;
    MR_Integer mercury__term_conversion__Var_7;

{
#define MR_PROC_LABEL mercury__term_conversion__univ_to_term_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term_conversion__TypeInfo_6_35 ;
		{
{
    TypeInfo = TypeInfo_for_T;

    /*
    ** We used to collapse equivalences for efficiency here, but that's not
    ** always desirable, due to the reverse mode of make_type/2, and efficiency
    ** of type_infos probably isn't very important anyway.
    */
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}

		;}
#undef MR_PROC_LABEL
	 mercury__term_conversion__Type_6  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__term_conversion__univ_to_term_2_p_0

	MR_Word TypeInfo;
	MR_Integer Functors;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo =  mercury__term_conversion__Type_6 ;
		{
{
    MR_save_transient_registers();
    Functors = MR_get_num_functors((MR_TypeInfo) TypeInfo);
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = (Functors >= 0);
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__term_conversion__Var_7  = Functors;
	}
mercury__term_conversion__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__term_conversion__succeeded)
      {
        MR_Word mercury__term_conversion__TypeInfo_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__Univ_3, (MR_Integer) 0)));
        MR_String mercury__term_conversion__FunctorString_8;
        MR_Word mercury__term_conversion__FunctorArgs_10;
        MR_Word mercury__term_conversion__TermArgs_11;
        MR_Box mercury__term_conversion__Var_18 = (MR_hl_field(MR_mktag(0), mercury__term_conversion__Univ_3, (MR_Integer) 1));
        MR_Word mercury__term_conversion__Var_20;
        MR_Integer mercury__term_conversion___FunctorArity_9;

        {
          mercury__deconstruct__deconstruct_5_p_1(mercury__term_conversion__TypeInfo_29_29, mercury__term_conversion__Var_18, (MR_Integer) 1, &mercury__term_conversion__FunctorString_8, &mercury__term_conversion___FunctorArity_9, &mercury__term_conversion__FunctorArgs_10);
        }
        {
          mercury__term_conversion__univ_list_to_term_list_2_p_0(mercury__term_conversion__TypeInfo_28_28, mercury__term_conversion__FunctorArgs_10, &mercury__term_conversion__TermArgs_11);
        }
        {
          mercury__term_conversion__Var_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__term_conversion__Var_20, 0) = ((MR_Box) (mercury__term_conversion__FunctorString_8));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          *mercury__term_conversion__Term_4 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term_conversion__Var_20));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__term_conversion__TermArgs_11));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__term_conversion__Context_5));
        }
      }
    else
      {
        MR_Word mercury__term_conversion__SpecialCaseTerm_16;
        MR_Word mercury__term_conversion__TypeCtor_12;
        MR_Word mercury__term_conversion__TypeArgs_13;
        MR_String mercury__term_conversion__ModuleName_14;
        MR_String mercury__term_conversion__TypeCtorName_15;
        MR_String mercury__term_conversion__V_5_41;
        MR_Integer mercury__term_conversion__V_6_42;
        MR_String mercury__term_conversion__V_5_45;
        MR_Integer mercury__term_conversion__V_6_46;

{
#define MR_PROC_LABEL mercury__term_conversion__univ_to_term_2_p_0

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc =  mercury__term_conversion__Type_6 ;
		{
{
    MR_TypeCtorDesc type_ctor_desc;
    MR_TypeInfo     type_info;

    MR_save_transient_registers();

    type_info = (MR_TypeInfo) TypeDesc;
    MR_type_ctor_and_args(type_info, MR_TRUE, &type_ctor_desc, &ArgTypes);
    TypeCtorDesc = (MR_Word) type_ctor_desc;

    MR_restore_transient_registers();
}

		;}
#undef MR_PROC_LABEL
	 mercury__term_conversion__TypeCtor_12  = TypeCtorDesc;
	 mercury__term_conversion__TypeArgs_13  = ArgTypes;
}
{
#define MR_PROC_LABEL mercury__term_conversion__univ_to_term_2_p_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc =  mercury__term_conversion__TypeCtor_12 ;
		{
{
    MR_TypeCtorDesc type_ctor_desc;

    type_ctor_desc = (MR_TypeCtorDesc) TypeCtorDesc;

    if (MR_TYPECTOR_DESC_IS_VARIABLE_ARITY(type_ctor_desc)) {
        TypeCtorModuleName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_MODULE_NAME(type_ctor_desc);
        TypeCtorName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_NAME(type_ctor_desc);
        TypeCtorArity = MR_TYPECTOR_DESC_GET_VA_ARITY(type_ctor_desc);
    } else {
        MR_TypeCtorInfo type_ctor_info;

        type_ctor_info =
            MR_TYPECTOR_DESC_GET_FIXED_ARITY_TYPE_CTOR_INFO(type_ctor_desc);

        /*
        ** We cast away the const-ness of the module and type names,
        ** because MR_String is defined as char *, not const char *.
        */

        TypeCtorModuleName = (MR_String) (MR_Integer)
            MR_type_ctor_module_name(type_ctor_info);
        TypeCtorName = (MR_String) (MR_Integer)
            MR_type_ctor_name(type_ctor_info);
        TypeCtorArity = type_ctor_info->MR_type_ctor_arity;
    }
}

		;}
#undef MR_PROC_LABEL
	 mercury__term_conversion__ModuleName_14  = TypeCtorModuleName;
	 mercury__term_conversion__V_5_41  = TypeCtorName;
	 mercury__term_conversion__V_6_42  = TypeCtorArity;
}
{
#define MR_PROC_LABEL mercury__term_conversion__univ_to_term_2_p_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc =  mercury__term_conversion__TypeCtor_12 ;
		{
{
    MR_TypeCtorDesc type_ctor_desc;

    type_ctor_desc = (MR_TypeCtorDesc) TypeCtorDesc;

    if (MR_TYPECTOR_DESC_IS_VARIABLE_ARITY(type_ctor_desc)) {
        TypeCtorModuleName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_MODULE_NAME(type_ctor_desc);
        TypeCtorName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_NAME(type_ctor_desc);
        TypeCtorArity = MR_TYPECTOR_DESC_GET_VA_ARITY(type_ctor_desc);
    } else {
        MR_TypeCtorInfo type_ctor_info;

        type_ctor_info =
            MR_TYPECTOR_DESC_GET_FIXED_ARITY_TYPE_CTOR_INFO(type_ctor_desc);

        /*
        ** We cast away the const-ness of the module and type names,
        ** because MR_String is defined as char *, not const char *.
        */

        TypeCtorModuleName = (MR_String) (MR_Integer)
            MR_type_ctor_module_name(type_ctor_info);
        TypeCtorName = (MR_String) (MR_Integer)
            MR_type_ctor_name(type_ctor_info);
        TypeCtorArity = type_ctor_info->MR_type_ctor_arity;
    }
}

		;}
#undef MR_PROC_LABEL
	 mercury__term_conversion__V_5_45  = TypeCtorModuleName;
	 mercury__term_conversion__TypeCtorName_15  = TypeCtorName;
	 mercury__term_conversion__V_6_46  = TypeCtorArity;
}
        {
          mercury__term_conversion__succeeded = mercury__term_conversion__univ_to_term_special_case_6_p_0(mercury__term_conversion__TypeInfo_28_28, mercury__term_conversion__ModuleName_14, mercury__term_conversion__TypeCtorName_15, mercury__term_conversion__TypeArgs_13, mercury__term_conversion__Univ_3, mercury__term_conversion__Context_5, &mercury__term_conversion__SpecialCaseTerm_16);
        }
        if (mercury__term_conversion__succeeded)
          *mercury__term_conversion__Term_4 = mercury__term_conversion__SpecialCaseTerm_16;
        else
          {
            MR_Word mercury__term_conversion__TypeInfo_6_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__Univ_3, (MR_Integer) 0)));
            MR_String mercury__term_conversion__Message_17;
            MR_String mercury__term_conversion__Var_22;
            MR_String mercury__term_conversion__Var_23;
            MR_Word mercury__term_conversion__Var_24;
            MR_Box mercury__term_conversion__V_4_49 = (MR_hl_field(MR_mktag(0), mercury__term_conversion__Univ_3, (MR_Integer) 1));
            MR_Box mercury__term_conversion__Var_51;

{
#define MR_PROC_LABEL mercury__term_conversion__univ_to_term_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term_conversion__TypeInfo_6_50 ;
		{
{
    TypeInfo = TypeInfo_for_T;

    /*
    ** We used to collapse equivalences for efficiency here, but that's not
    ** always desirable, due to the reverse mode of make_type/2, and efficiency
    ** of type_infos probably isn't very important anyway.
    */
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}

		;}
#undef MR_PROC_LABEL
	 mercury__term_conversion__Var_24  = TypeInfo;
}
            {
              mercury__term_conversion__Var_23 = mercury__type_desc__type_name_1_f_0(mercury__term_conversion__Var_24);
            }
            {
              mercury__string__append_3_p_2(mercury__term_conversion__Var_23, (MR_String) "\'", &mercury__term_conversion__Var_22);
            }
            {
              mercury__string__append_3_p_2((MR_String) "unknown type \140", mercury__term_conversion__Var_22, &mercury__term_conversion__Message_17);
            }
            {
              mercury__require__unexpected_3_p_0((MR_String) "term_conversion", (MR_String) "predicate \140term_conversion.univ_to_term\'/2", mercury__term_conversion__Message_17);
              return;
            }
          }
      }
  }
}

MR_Word MR_CALL 
mercury__term_conversion__univ_to_term_1_f_0(
  MR_Word mercury__term_conversion__TypeInfo_5_5,
  MR_Word mercury__term_conversion__Univ_3)
{
  {
    MR_bool mercury__term_conversion__succeeded;
    MR_Word mercury__term_conversion__Term_4;

    {
      mercury__term_conversion__univ_to_term_2_p_0(mercury__term_conversion__TypeInfo_5_5, mercury__term_conversion__Univ_3, &mercury__term_conversion__Term_4);
    }
    return mercury__term_conversion__Term_4;
  }
}

void MR_CALL 
mercury__term_conversion__type_to_term_2_p_0(
  MR_Word mercury__term_conversion__TypeInfo_for_T_6,
  MR_Word mercury__term_conversion__TypeInfo_7_7,
  MR_Box mercury__term_conversion__Val_3,
  MR_Word * mercury__term_conversion__Term_4)
{
  {
    MR_bool mercury__term_conversion__succeeded;
    MR_Word mercury__term_conversion__Univ_5;

    {
      mercury__univ__type_to_univ_2_p_1(mercury__term_conversion__TypeInfo_for_T_6, mercury__term_conversion__Val_3, &mercury__term_conversion__Univ_5);
    }
    {
      mercury__term_conversion__univ_to_term_2_p_0(mercury__term_conversion__TypeInfo_7_7, mercury__term_conversion__Univ_5, mercury__term_conversion__Term_4);
    }
  }
}

MR_Word MR_CALL 
mercury__term_conversion__type_to_term_1_f_0(
  MR_Word mercury__term_conversion__TypeInfo_for_T_5,
  MR_Word mercury__term_conversion__TypeInfo_6_6,
  MR_Box mercury__term_conversion__Var_3)
{
  {
    MR_bool mercury__term_conversion__succeeded;
    MR_Word mercury__term_conversion__Term_4;
    MR_Word mercury__term_conversion__Univ_9;

    {
      mercury__univ__type_to_univ_2_p_1(mercury__term_conversion__TypeInfo_for_T_5, mercury__term_conversion__Var_3, &mercury__term_conversion__Univ_9);
    }
    {
      mercury__term_conversion__univ_to_term_2_p_0(mercury__term_conversion__TypeInfo_6_6, mercury__term_conversion__Univ_9, &mercury__term_conversion__Term_4);
    }
    return mercury__term_conversion__Term_4;
  }
}

void MR_CALL 
mercury__term_conversion__det_term_to_type_2_p_0(
  MR_Word mercury__term_conversion__TypeInfo_19_19,
  MR_Word mercury__term_conversion__TypeInfo_for_T_20,
  MR_Word mercury__term_conversion__Term_3,
  MR_Box * mercury__term_conversion__X_4)
{
  {
    MR_bool mercury__term_conversion__succeeded;
    MR_Box mercury__term_conversion__XPrime_5;
    MR_Word mercury__term_conversion__Var_23;

    {
      mercury__term_conversion__try_term_to_type_2_p_0(mercury__term_conversion__TypeInfo_19_19, mercury__term_conversion__TypeInfo_for_T_20, mercury__term_conversion__Term_3, &mercury__term_conversion__Var_23);
    }
    mercury__term_conversion__succeeded = ((MR_tag((MR_Word) mercury__term_conversion__Var_23)) == (MR_mktag((MR_Integer) 0)));
    if (mercury__term_conversion__succeeded)
      {
        mercury__term_conversion__XPrime_5 = (MR_hl_field(MR_mktag(0), mercury__term_conversion__Var_23, (MR_Integer) 0));
        *mercury__term_conversion__X_4 = mercury__term_conversion__XPrime_5;
      }
    else
      {
        MR_Word mercury__term_conversion__V_3_25;
        MR_Word mercury__term_conversion__V_2_24;
        MR_Word mercury__term_conversion__V_4_26;

        mercury__term_conversion__succeeded = ((MR_tag((MR_Word) mercury__term_conversion__Term_3)) == (MR_mktag((MR_Integer) 0)));
        if (mercury__term_conversion__succeeded)
          {
            mercury__term_conversion__V_2_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__Term_3, (MR_Integer) 0)));
            mercury__term_conversion__V_3_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__Term_3, (MR_Integer) 1)));
            mercury__term_conversion__V_4_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__Term_3, (MR_Integer) 2)));
            {
              mercury__term_conversion__succeeded = mercury__term__is_ground_list_1_p_0(mercury__term_conversion__TypeInfo_19_19, mercury__term_conversion__V_3_25);
            }
          }
        mercury__term_conversion__succeeded = !(mercury__term_conversion__succeeded);
        if (mercury__term_conversion__succeeded)
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "term_conversion", (MR_String) "predicate \140term_conversion.det_term_to_type\'/2", (MR_String) "the term is not ground");
              return;
            }
          }
        else
          {
            MR_String mercury__term_conversion__Message_6;
            MR_String mercury__term_conversion__Var_11;
            MR_String mercury__term_conversion__Var_13;
            MR_String mercury__term_conversion__Var_14;
            MR_Word mercury__term_conversion__Var_15;

{
#define MR_PROC_LABEL mercury__term_conversion__det_term_to_type_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term_conversion__TypeInfo_for_T_20 ;
		{
{
    TypeInfo = TypeInfo_for_T;

    /*
    ** We used to collapse equivalences for efficiency here, but that's not
    ** always desirable, due to the reverse mode of make_type/2, and efficiency
    ** of type_infos probably isn't very important anyway.
    */
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}

		;}
#undef MR_PROC_LABEL
	 mercury__term_conversion__Var_15  = TypeInfo;
}
            {
              mercury__term_conversion__Var_14 = mercury__type_desc__type_name_1_f_0(mercury__term_conversion__Var_15);
            }
            {
              mercury__string__append_3_p_2(mercury__term_conversion__Var_14, (MR_String) "\'", &mercury__term_conversion__Var_13);
            }
            {
              mercury__string__append_3_p_2((MR_String) " for type \140", mercury__term_conversion__Var_13, &mercury__term_conversion__Var_11);
            }
            {
              mercury__string__append_3_p_2((MR_String) "type error:\nthe term is not a valid term", mercury__term_conversion__Var_11, &mercury__term_conversion__Message_6);
            }
            {
              mercury__require__unexpected_3_p_0((MR_String) "term_conversion", (MR_String) "predicate \140term_conversion.det_term_to_type\'/2", mercury__term_conversion__Message_6);
              return;
            }
          }
      }
  }
}

MR_Box MR_CALL 
mercury__term_conversion__det_term_to_type_1_f_0(
  MR_Word mercury__term_conversion__TypeInfo_5_5,
  MR_Word mercury__term_conversion__TypeInfo_for_T_6,
  MR_Word mercury__term_conversion__Term_3)
{
  {
    MR_bool mercury__term_conversion__succeeded;
    MR_Box mercury__term_conversion__X_4;

    {
      mercury__term_conversion__det_term_to_type_2_p_0(mercury__term_conversion__TypeInfo_5_5, mercury__term_conversion__TypeInfo_for_T_6, mercury__term_conversion__Term_3, &mercury__term_conversion__X_4);
    }
    return mercury__term_conversion__X_4;
  }
}

MR_bool MR_CALL 
mercury__term_conversion__term_to_type_2_p_0(
  MR_Word mercury__term_conversion__TypeInfo_for_U_6,
  MR_Word mercury__term_conversion__TypeInfo_for_T_7,
  MR_Word mercury__term_conversion__Term_3,
  MR_Box * mercury__term_conversion__Val_4)
{
  {
    MR_bool mercury__term_conversion__succeeded;
    MR_Word mercury__term_conversion__Var_5;

    {
      mercury__term_conversion__try_term_to_type_2_p_0(mercury__term_conversion__TypeInfo_for_U_6, mercury__term_conversion__TypeInfo_for_T_7, mercury__term_conversion__Term_3, &mercury__term_conversion__Var_5);
    }
    mercury__term_conversion__succeeded = ((MR_tag((MR_Word) mercury__term_conversion__Var_5)) == (MR_mktag((MR_Integer) 0)));
    if (mercury__term_conversion__succeeded)
      *mercury__term_conversion__Val_4 = (MR_hl_field(MR_mktag(0), mercury__term_conversion__Var_5, (MR_Integer) 0));
    return mercury__term_conversion__succeeded;
  }
}

void MR_CALL 
mercury__term_conversion__try_term_to_type_2_p_0(
  MR_Word mercury__term_conversion__TypeInfo_for_U_11,
  MR_Word mercury__term_conversion__TypeInfo_for_T_12,
  MR_Word mercury__term_conversion__Term_3,
  MR_Word * mercury__term_conversion__Result_4)
{
  {
    MR_bool mercury__term_conversion__succeeded;
    MR_Word mercury__term_conversion__UnivResult_6;
    MR_Word mercury__term_conversion__Var_10;
    MR_Word mercury__term_conversion__Var_17;
    MR_Box mercury__term_conversion__ValTypedVar_5;

{
#define MR_PROC_LABEL mercury__term_conversion__try_term_to_type_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term_conversion__TypeInfo_for_T_12 ;
		{
{
    TypeInfo = TypeInfo_for_T;

    /*
    ** We used to collapse equivalences for efficiency here, but that's not
    ** always desirable, due to the reverse mode of make_type/2, and efficiency
    ** of type_infos probably isn't very important anyway.
    */
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}

		;}
#undef MR_PROC_LABEL
	 mercury__term_conversion__Var_10  = TypeInfo;
}
    mercury__term_conversion__Var_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__term_conversion__try_term_to_univ_2_4_p_0(mercury__term_conversion__TypeInfo_for_U_11, mercury__term_conversion__Term_3, mercury__term_conversion__Var_10, mercury__term_conversion__Var_17, &mercury__term_conversion__UnivResult_6);
    }
    if (((MR_tag((MR_Word) mercury__term_conversion__UnivResult_6)) == (MR_mktag((MR_Integer) 1))))
      *mercury__term_conversion__Result_4 = mercury__term_conversion__UnivResult_6;
    else
      {
        MR_Word mercury__term_conversion__Univ_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term_conversion__UnivResult_6, (MR_Integer) 0)));
        MR_Box mercury__term_conversion__Val_8;

        {
          mercury__univ__det_univ_to_type_2_p_0(mercury__term_conversion__TypeInfo_for_T_12, mercury__term_conversion__Univ_7, &mercury__term_conversion__Val_8);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *mercury__term_conversion__Result_4 = base;
          MR_hl_field(MR_mktag(0), base, 0) = mercury__term_conversion__Val_8;
        }
      }
  }
}

MR_Word MR_CALL 
mercury__term_conversion__try_term_to_type_1_f_0(
  MR_Word mercury__term_conversion__TypeInfo_for_U_5,
  MR_Word mercury__term_conversion__TypeInfo_for_T_6,
  MR_Word mercury__term_conversion__Term_3)
{
  {
    MR_bool mercury__term_conversion__succeeded;
    MR_Word mercury__term_conversion__Result_4;

    {
      mercury__term_conversion__try_term_to_type_2_p_0(mercury__term_conversion__TypeInfo_for_U_5, mercury__term_conversion__TypeInfo_for_T_6, mercury__term_conversion__Term_3, &mercury__term_conversion__Result_4);
    }
    return mercury__term_conversion__Result_4;
  }
}

void mercury__term_conversion__init(void)
{
}

void mercury__term_conversion__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__term_conversion__term_conversion__type_ctor_info_term_to_type_arg_context_0);
	MR_register_type_ctor_info(&mercury__term_conversion__term_conversion__type_ctor_info_term_to_type_context_0);
	MR_register_type_ctor_info(&mercury__term_conversion__term_conversion__type_ctor_info_term_to_type_error_1);
	MR_register_type_ctor_info(&mercury__term_conversion__term_conversion__type_ctor_info_term_to_type_result_2);
	MR_register_type_ctor_info(&mercury__term_conversion__term_conversion__type_ctor_info_term_to_type_result_1);
}

void mercury__term_conversion__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__term_conversion__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module term_conversion. */
