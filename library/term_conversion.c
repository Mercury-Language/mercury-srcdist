/*
** Automatically generated from `term_conversion.m'
** by the Mercury compiler,
** version 2017-08-10
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

static MR_Word MR_CALL 
mercury__term_conversion__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_55_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_f_in__version_array_0(
  MR_Word TypeInfo_for_T1_1_16,
  MR_Box V_7_7,
  MR_Word V_8_8,
  MR_Integer V_9_9);

static MR_Integer MR_CALL 
mercury__term_conversion__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static void MR_CALL 
mercury__term_conversion__univ_list_to_term_list_2_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static MR_bool MR_CALL 
mercury__term_conversion__univ_to_term_special_case_6_p_0(
  MR_Word TypeInfo_for_T_78,
  MR_String ModuleName_7,
  MR_String TypeCtorName_8,
  MR_Word TypeArgs_9,
  MR_Word Univ_10,
  MR_Word Context_11,
  MR_Word * Term_12);

static void MR_CALL 
mercury__term_conversion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_54_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_3_p_in__list_0(
  MR_Word Var_15,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
mercury__term_conversion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_p_0(
  MR_Word Context_4,
  MR_Word TypeInfo_5,
  MR_Word * Term_6);

static MR_bool MR_CALL 
mercury__term_conversion__term_list_to_univ_list_7_p_0(
  MR_Word TypeInfo_for_T_33,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word Functor_3,
  MR_Integer ArgNum_4,
  MR_Word PrevContext_5,
  MR_Word TermContext_6,
  MR_Word * HeadVar__7_7);

static MR_bool MR_CALL 
mercury__term_conversion__term_to_univ_special_case_6_p_0(
  MR_Word TypeInfo_for_T_151,
  MR_String ModuleName_7,
  MR_String TypeCtorName_8,
  MR_Word TypeArgs_9,
  MR_Word Term_10,
  MR_Word PrevContext_11,
  MR_Word * Result_12);

static void MR_CALL 
mercury__term_conversion__try_term_to_univ_2_4_p_0(
  MR_Word TypeInfo_for_T_34,
  MR_Word Term_5,
  MR_Word Type_6,
  MR_Word Context_7,
  MR_Word * Result_8);

static MR_bool MR_CALL 
mercury__term_conversion____Unify____term_to_type_arg_context_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__term_conversion____Compare____term_to_type_arg_context_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__term_conversion____Unify____term_to_type_context_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__term_conversion____Compare____term_to_type_context_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__term_conversion____Unify____term_to_type_error_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__term_conversion____Compare____term_to_type_error_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mercury__term_conversion____Unify____term_to_type_result_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static void MR_CALL 
mercury__term_conversion____Compare____term_to_type_result_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5);

static MR_bool MR_CALL 
mercury__term_conversion____Unify____term_to_type_result_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__term_conversion____Compare____term_to_type_result_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);


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
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "univ"))
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
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__term_conversion__term_conversion__field_types_term_to_type_arg_context_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__term_conversion__term_conversion__du_stag_ordered_term_to_type_arg_context_0_0[1] = {
  &mercury__term_conversion__term_conversion__du_functor_desc_term_to_type_arg_context_0_0
};

static const MR_DuPtagLayout mercury__term_conversion__term_conversion__du_ptag_ordered_term_to_type_arg_context_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
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
  MR_TYPECTOR_REP_DU,
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
  MR_TYPECTOR_REP_EQUIV_GROUND,
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
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__term_conversion__term_conversion__field_types_term_to_type_error_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
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
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__term_conversion__term_conversion__field_types_term_to_type_error_1_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
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
    MR_SECTAG_NONE,
    mercury__term_conversion__term_conversion__du_stag_ordered_term_to_type_error_1_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
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
  MR_TYPECTOR_REP_DU,
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
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__term_conversion__term_conversion__field_types_term_to_type_result_2_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
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
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__term_conversion__term_conversion__field_types_term_to_type_result_2_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
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
    MR_SECTAG_NONE,
    mercury__term_conversion__term_conversion__du_stag_ordered_term_to_type_result_2_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
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
  MR_TYPECTOR_REP_DU,
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
  MR_TYPECTOR_REP_EQUIV,
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

static MR_Word MR_CALL 
mercury__term_conversion__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_55_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_f_in__version_array_0(
  MR_Word TypeInfo_for_T1_1_16,
  MR_Box V_7_7,
  MR_Word V_8_8,
  MR_Integer V_9_9)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool succeeded = ((MR_Integer) 0 <= V_9_9);
      MR_Word V_5_10;

      if (succeeded)
      {
        MR_Word V_11_12;
        MR_Integer V_13_13;
        MR_Box V_12_14;

        V_12_14 = mercury__version_array__lookup_2_f_0(TypeInfo_for_T1_1_16, V_7_7, V_9_9);
        {
          V_11_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), V_11_12, 0) = V_12_14;
          MR_hl_field(MR_mktag(1), V_11_12, 1) = ((MR_Box) (V_8_8));
        }
        V_13_13 = (V_9_9 - (MR_Integer) 1);
        /* direct tailcall eliminated */
        {
          MR_Word next_value_of_V_8_8 = V_11_12;
          MR_Integer next_value_of_V_9_9 = V_13_13;

          V_8_8 = next_value_of_V_8_8;
          V_9_9 = next_value_of_V_9_9;
        }
        continue;
      }
      else
        V_5_10 = V_8_8;
      return V_5_10;
    }
    break;
  }
}

static MR_Integer MR_CALL 
mercury__term_conversion__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  {
    return (MR_Integer) 1200;
  }
}

void MR_CALL 
mercury__term_conversion____Compare____term_to_type_result_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word TypeCtorInfo_7_7 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__term_conversion____Compare____term_to_type_result_2_0(TypeInfo_for_T_6, TypeCtorInfo_7_7, HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

void MR_CALL 
mercury__term_conversion____Compare____term_to_type_result_2_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word TypeInfo_for_U_15,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_13 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word ArgY1_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));

        mercury__term_conversion____Compare____term_to_type_error_1_0(TypeInfo_for_U_15, HeadVar__1_1, Var_18, ArgY1_11);
      }
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    }
    else
    {
      MR_Box Var_19 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        MR_Box ArgY1_5 = (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0));

        mercury__builtin__compare_3_p_0(TypeInfo_for_T_14, HeadVar__1_1, Var_19, ArgY1_5);
      }
    }
  }
}

MR_bool MR_CALL 
mercury__term_conversion____Unify____term_to_type_result_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_6_6 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__term_conversion____Unify____term_to_type_result_2_0(TypeInfo_for_T_5, TypeCtorInfo_6_6, Cast_HeadVar1_3, Cast_HeadVar2_4);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__term_conversion____Unify____term_to_type_result_2_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word TypeInfo_for_U_10,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_8 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word ArgX1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_6;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        ArgY1_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
        succeeded = mercury__term_conversion____Unify____term_to_type_error_1_0(TypeInfo_for_U_10, ArgX1_5, ArgY1_6);
      }
    }
    else
    {
      MR_Box ArgX1_3 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0));
      MR_Box ArgY1_4;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        ArgY1_4 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_9, ArgX1_3, ArgY1_4);
      }
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__term_conversion____Compare____term_to_type_error_1_0(
  MR_Word TypeInfo_for_T_34,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_32 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_33 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_32 == CastY_33);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word ArgY1_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ArgY2_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
        MR_Word Var_31;
        MR_Integer Var_49 = (MR_Integer) Var_44;
        MR_Integer Var_50 = (MR_Integer) ArgY1_28;

        succeeded = (Var_49 < Var_50);
        if (succeeded)
          Var_31 = (MR_Integer) 1;
        else
        {
          succeeded = (Var_49 == Var_50);
          if (succeeded)
            Var_31 = (MR_Integer) 0;
          else
            Var_31 = (MR_Integer) 2;
        }
        succeeded = (Var_31 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_31;
        else
        {
          MR_Word TypeInfo_37_37 = (MR_Word) &mercury__term_conversion_scalar_common_1[0];

          mercury__builtin__compare_3_p_0(TypeInfo_37_37, HeadVar__1_1, ((MR_Box) (Var_43)), ((MR_Box) (ArgY2_30)));
        }
      }
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    }
    else
    {
      MR_Word Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Word Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
        MR_Word ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
        MR_Word ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3)));
        MR_Word Var_12;

        mercury__term____Compare____term_1_0(TypeInfo_for_T_34, &Var_12, Var_48, ArgY1_5);
        succeeded = (Var_12 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_12;
        else
        {
          MR_Word Var_13;

          mercury__type_desc____Compare____type_desc_0_0(&Var_13, Var_47, ArgY2_7);
          succeeded = (Var_13 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_13;
          else
          {
            MR_Word Var_14;

            mercury__term____Compare____context_0_0(&Var_14, Var_46, ArgY3_9);
            succeeded = (Var_14 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
              *HeadVar__1_1 = Var_14;
            else
            {
              MR_Word TypeInfo_42_42 = (MR_Word) &mercury__term_conversion_scalar_common_1[0];

              mercury__builtin__compare_3_p_0(TypeInfo_42_42, HeadVar__1_1, ((MR_Box) (Var_45)), ((MR_Box) (ArgY4_11)));
            }
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
mercury__term_conversion____Unify____term_to_type_error_1_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_15 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_16 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_15 == CastY_16);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word TypeInfo_20_20;
      MR_Word ArgX1_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_12;
      MR_Word ArgX2_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_14;
      MR_Integer Var_26;
      MR_Integer Var_27;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        ArgY1_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
        ArgY2_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
        Var_26 = (MR_Integer) ArgX1_11;
        Var_27 = (MR_Integer) ArgY1_12;
        succeeded = (Var_26 == Var_27);
        if (succeeded)
        {
          TypeInfo_20_20 = (MR_Word) &mercury__term_conversion_scalar_common_1[0];
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_20_20, ((MR_Box) (ArgX2_13)), ((MR_Box) (ArgY2_14)));
        }
      }
    }
    else
    {
      MR_Word TypeInfo_25_25;
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4;
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6;
      MR_Word ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Word ArgY3_8;
      MR_Word ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)));
      MR_Word ArgY4_10;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
        ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
        ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
        ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
        succeeded = mercury__term____Unify____term_1_0(TypeInfo_for_T_17, ArgX1_3, ArgY1_4);
        if (succeeded)
        {
          succeeded = mercury__type_desc____Unify____type_desc_0_0(ArgX2_5, ArgY2_6);
          if (succeeded)
          {
            succeeded = mercury__term____Unify____context_0_0(ArgX3_7, ArgY3_8);
            if (succeeded)
            {
              TypeInfo_25_25 = (MR_Word) &mercury__term_conversion_scalar_common_1[0];
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_25_25, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
            }
          }
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__term_conversion____Compare____term_to_type_context_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word TypeInfo_6_6 = (MR_Word) &mercury__term_conversion_scalar_common_1[0];
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0(TypeInfo_6_6, HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
mercury__term_conversion____Unify____term_to_type_context_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_5_5 = (MR_Word) &mercury__term_conversion_scalar_common_1[0];
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_5_5, ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
mercury__term_conversion____Compare____term_to_type_arg_context_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_13 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Integer ArgX2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Integer ArgY2_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      MR_Word Var_10;

      mercury__term____Compare____const_0_0(&Var_10, ArgX1_4, ArgY1_5);
      succeeded = (Var_10 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_10;
      else
      {
        MR_Word Var_11;

        succeeded = (ArgX2_6 < ArgY2_7);
        if (succeeded)
          Var_11 = (MR_Integer) 1;
        else
        {
          succeeded = (ArgX2_6 == ArgY2_7);
          if (succeeded)
            Var_11 = (MR_Integer) 0;
          else
            Var_11 = (MR_Integer) 2;
        }
        succeeded = (Var_11 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_11;
        else
          mercury__term____Compare____context_0_0(HeadVar__1_1, ArgX3_8, ArgY3_9);
      }
    }
  }
}

MR_bool MR_CALL 
mercury__term_conversion____Unify____term_to_type_arg_context_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_10 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Integer ArgX2_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Integer ArgY2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Word ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));

      succeeded = mercury__term____Unify____const_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        succeeded = (ArgX2_5 == ArgY2_6);
        if (succeeded)
          succeeded = mercury__term____Unify____context_0_0(ArgX3_7, ArgY3_8);
      }
    }
    return succeeded;
  }
}

MR_Word MR_CALL 
mercury__term_conversion__univ_to_term_1_f_0(
  MR_Word TypeInfo_5_5,
  MR_Word Univ_3)
{
  {
    MR_Word Term_4;

    mercury__term_conversion__univ_to_term_2_p_0(TypeInfo_5_5, Univ_3, &Term_4);
    return Term_4;
  }
}

MR_Word MR_CALL 
mercury__term_conversion__type_to_term_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word TypeInfo_6_6,
  MR_Box Var_3)
{
  {
    MR_Word Term_4;
    MR_Word Univ_9;

    mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_5, Var_3, &Univ_9);
    mercury__term_conversion__univ_to_term_2_p_0(TypeInfo_6_6, Univ_9, &Term_4);
    return Term_4;
  }
}

static void MR_CALL 
mercury__term_conversion__univ_list_to_term_list_2_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  else
  {
    MR_Word Value_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word Values_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word Term_5;
    MR_Word Terms_6;

    mercury__term_conversion__univ_to_term_2_p_0(TypeInfo_for_T_7, Value_3, &Term_5);
    mercury__term_conversion__univ_list_to_term_list_2_p_0(TypeInfo_for_T_7, Values_4, &Terms_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Term_5));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Terms_6));
    }
  }
}

static MR_bool MR_CALL 
mercury__term_conversion__univ_to_term_special_case_6_p_0(
  MR_Word TypeInfo_for_T_78,
  MR_String ModuleName_7,
  MR_String TypeCtorName_8,
  MR_Word TypeArgs_9,
  MR_Word Univ_10,
  MR_Word Context_11,
  MR_Word * Term_12)
{
  {
    MR_bool succeeded;

    if ((TypeArgs_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Integer lo_0 = (MR_Integer) 0;
      MR_Integer hi_1 = (MR_Integer) 3;
      MR_Integer mid_2;
      MR_Integer result_3;

      /* binary string jump switch */
      do
      {
        mid_2 = (((lo_0 + hi_1)) / (MR_Integer) 2);
        result_3 = MR_strcmp(ModuleName_7, ((&mercury__term_conversion_vector_common_5[14 + mid_2]))->mercury__term_conversion__vector_common_type_5_0__vct_5_f_0);
        if ((result_3 == (MR_Integer) 0))
        {
          switch (((&mercury__term_conversion_vector_common_5[14 + mid_2]))->mercury__term_conversion__vector_common_type_5_0__vct_5_f_1) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                /* case "bitmap" */
                {
                  MR_Word TypeCtorInfo_87_87;
                  MR_Box Bitmap_25;
                  MR_String BitmapStr_26;
                  MR_Word Var_46;
                  MR_Word Var_47;
                  MR_Box conv7_Bitmap_25;

                  succeeded = (strcmp(TypeCtorName_8, (MR_String) "bitmap") == 0);
                  if (succeeded)
                  {
                    TypeCtorInfo_87_87 = (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_0;
                    mercury__univ__det_univ_to_type_2_p_0(TypeCtorInfo_87_87, Univ_10, &conv7_Bitmap_25);
                    Bitmap_25 = ((MR_Box) conv7_Bitmap_25);
                    BitmapStr_26 = mercury__bitmap__to_string_1_f_0(Bitmap_25);
                    Var_47 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    {
                      Var_46 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), Var_46, 0) = ((MR_Box) (BitmapStr_26));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      *Term_12 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_46));
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_47));
                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Context_11));
                    }
                    succeeded = MR_TRUE;
                  }
                }
              }
              break;
            case (MR_Integer) 1:
              {
                /* case "builtin" */
                {
                  MR_Word Functor_15;
                  MR_Word Var_72;
                  MR_Integer lo_4 = (MR_Integer) 0;
                  MR_Integer hi_5 = (MR_Integer) 4;
                  MR_Integer mid_6;
                  MR_Integer result_7;

                  /* binary string jump switch */
                  do
                  {
                    mid_6 = (((lo_4 + hi_5)) / (MR_Integer) 2);
                    result_7 = MR_strcmp(TypeCtorName_8, ((&mercury__term_conversion_vector_common_5[9 + mid_6]))->mercury__term_conversion__vector_common_type_5_0__vct_5_f_0);
                    if ((result_7 == (MR_Integer) 0))
                    {
                      switch (((&mercury__term_conversion_vector_common_5[9 + mid_6]))->mercury__term_conversion__vector_common_type_5_0__vct_5_f_1) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            /* case "character" */
                            {
                              MR_Word TypeCtorInfo_79_79 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
                              MR_Char Char_13;
                              MR_String CharName_14;
                              MR_Box conv6_Char_13;

                              mercury__univ__det_univ_to_type_2_p_0(TypeCtorInfo_79_79, Univ_10, &conv6_Char_13);
                              Char_13 = ((MR_Char) (MR_Word) conv6_Char_13);
                              mercury__string__char_to_string_2_p_0(Char_13, &CharName_14);
                              {
                                Functor_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                MR_hl_field(MR_mktag(0), Functor_15, 0) = ((MR_Box) (CharName_14));
                              }
                              succeeded = MR_TRUE;
                            }
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            /* case "float" */
                            {
                              MR_Word TypeCtorInfo_83_83 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0;
                              MR_Float Float_19;
                              MR_Box conv5_Float_19;

                              mercury__univ__det_univ_to_type_2_p_0(TypeCtorInfo_83_83, Univ_10, &conv5_Float_19);
                              Float_19 = MR_unbox_float(conv5_Float_19);
                              {
                                Functor_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(3), Functor_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                                MR_hl_field(MR_mktag(3), Functor_15, 1) = MR_box_float(Float_19);
                              }
                              succeeded = MR_TRUE;
                            }
                          }
                          break;
                        case (MR_Integer) 2:
                          {
                            /* case "int" */
                            {
                              MR_Word TypeCtorInfo_81_81 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
                              MR_Integer Int_17;
                              MR_Word Var_69;
                              MR_Box conv4_Int_17;

                              mercury__univ__det_univ_to_type_2_p_0(TypeCtorInfo_81_81, Univ_10, &conv4_Int_17);
                              Int_17 = ((MR_Integer) conv4_Int_17);
                              Var_69 = mercury__integer__integer_1_f_0(Int_17);
                              {
                                Functor_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Functor_15, 0) = ((MR_Box) ((MR_Integer) 2));
                                MR_hl_field(MR_mktag(1), Functor_15, 1) = ((MR_Box) (Var_69));
                                MR_hl_field(MR_mktag(1), Functor_15, 2) = ((MR_Box) ((MR_Integer) 0));
                                MR_hl_field(MR_mktag(1), Functor_15, 3) = ((MR_Box) ((MR_Integer) 0));
                              }
                              succeeded = MR_TRUE;
                            }
                          }
                          break;
                        case (MR_Integer) 3:
                          {
                            /* case "string" */
                            {
                              MR_Word TypeCtorInfo_80_80 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
                              MR_String String_16;
                              MR_Box conv3_String_16;

                              mercury__univ__det_univ_to_type_2_p_0(TypeCtorInfo_80_80, Univ_10, &conv3_String_16);
                              String_16 = ((MR_String) conv3_String_16);
                              {
                                Functor_15 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(2), Functor_15, 0) = ((MR_Box) (String_16));
                              }
                              succeeded = MR_TRUE;
                            }
                          }
                          break;
                        case (MR_Integer) 4:
                          {
                            /* case "uint" */
                            {
                              MR_Word TypeCtorInfo_82_82 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_uint_0;
                              MR_Unsigned UInt_18;
                              MR_Word Var_65;
                              MR_Box conv2_UInt_18;

                              mercury__univ__det_univ_to_type_2_p_0(TypeCtorInfo_82_82, Univ_10, &conv2_UInt_18);
                              UInt_18 = ((MR_Unsigned) conv2_UInt_18);
                              Var_65 = mercury__integer__from_uint_1_f_0(UInt_18);
                              {
                                Functor_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Functor_15, 0) = ((MR_Box) ((MR_Integer) 2));
                                MR_hl_field(MR_mktag(1), Functor_15, 1) = ((MR_Box) (Var_65));
                                MR_hl_field(MR_mktag(1), Functor_15, 2) = ((MR_Box) ((MR_Integer) 1));
                                MR_hl_field(MR_mktag(1), Functor_15, 3) = ((MR_Box) ((MR_Integer) 0));
                              }
                              succeeded = MR_TRUE;
                            }
                          }
                          break;
                      }
                      /* jump out of search loop */
                      goto label_0;
                    }
                    else
                    if ((result_7 < (MR_Integer) 0))
                      hi_5 = (mid_6 - (MR_Integer) 1);
                    else
                      lo_4 = (mid_6 + (MR_Integer) 1);
                  }
                  while ((lo_4 <= hi_5));
                  succeeded = MR_FALSE;
                label_0:;
                  if (succeeded)
                  {
                    Var_72 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      *Term_12 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Functor_15));
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_72));
                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Context_11));
                    }
                    succeeded = MR_TRUE;
                  }
                }
              }
              break;
            case (MR_Integer) 2:
              {
                /* case "type_desc" */
                {
                  MR_Word TypeCtorInfo_84_84;
                  MR_Word TypeInfo_20;
                  MR_Word SubTerm_21;
                  MR_Word Var_60;
                  MR_String Var_61;
                  MR_Word Var_62;
                  MR_Word Var_63;
                  MR_Box conv1_TypeInfo_20;

                  succeeded = (strcmp(TypeCtorName_8, (MR_String) "type_desc") == 0);
                  if (succeeded)
                  {
                    TypeCtorInfo_84_84 = (MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_desc_0;
                    mercury__univ__det_univ_to_type_2_p_0(TypeCtorInfo_84_84, Univ_10, &conv1_TypeInfo_20);
                    TypeInfo_20 = ((MR_Word) conv1_TypeInfo_20);
                    mercury__term_conversion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_p_0(Context_11, TypeInfo_20, &SubTerm_21);
                    Var_61 = (MR_String) "type_info";
                    Var_63 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    Var_60 = (MR_Word) &mercury__term_conversion_scalar_common_6[3];
                    {
                      Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (SubTerm_21));
                      MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (Var_63));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      *Term_12 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_60));
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_62));
                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Context_11));
                    }
                    succeeded = MR_TRUE;
                  }
                }
              }
              break;
            case (MR_Integer) 3:
              {
                /* case "univ" */
                {
                  MR_Word TypeCtorInfo_85_85;
                  MR_Word TypeInfo_86_86;
                  MR_Word NestedUniv_22;
                  MR_Word ValueTerm_23;
                  MR_Word TypeTerm_24;
                  MR_Box Var_48;
                  MR_Word Var_49;
                  MR_Word Var_50;
                  MR_String Var_51;
                  MR_Word Var_52;
                  MR_Word Var_53;
                  MR_Word Var_54;
                  MR_String Var_55;
                  MR_Word Var_56;
                  MR_Word Var_57;
                  MR_Word Var_58;
                  MR_Word Var_59;
                  MR_Box conv0_NestedUniv_22;

                  succeeded = (strcmp(TypeCtorName_8, (MR_String) "univ") == 0);
                  if (succeeded)
                  {
                    TypeCtorInfo_85_85 = (MR_Word) &mercury__univ__univ__type_ctor_info_univ_0;
                    mercury__univ__det_univ_to_type_2_p_0(TypeCtorInfo_85_85, Univ_10, &conv0_NestedUniv_22);
                    NestedUniv_22 = ((MR_Word) conv0_NestedUniv_22);
                    Var_48 = mercury__univ__univ_value_1_f_0(&TypeInfo_86_86, NestedUniv_22);
                    mercury__term_conversion__type_to_term_2_p_0(TypeInfo_86_86, TypeInfo_for_T_78, Var_48, &ValueTerm_23);
                    Var_49 = mercury__univ__univ_type_1_f_0(NestedUniv_22);
                    mercury__term_conversion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_p_0(Context_11, Var_49, &TypeTerm_24);
                    Var_51 = (MR_String) "univ";
                    Var_55 = (MR_String) ":";
                    Var_58 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    Var_59 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    Var_50 = (MR_Word) &mercury__term_conversion_scalar_common_6[2];
                    Var_54 = (MR_Word) &mercury__term_conversion_scalar_common_6[1];
                    {
                      Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (TypeTerm_24));
                      MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (Var_58));
                    }
                    {
                      Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (ValueTerm_23));
                      MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (Var_57));
                    }
                    {
                      Var_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_53, 0) = ((MR_Box) (Var_54));
                      MR_hl_field(MR_mktag(0), Var_53, 1) = ((MR_Box) (Var_56));
                      MR_hl_field(MR_mktag(0), Var_53, 2) = ((MR_Box) (Context_11));
                    }
                    {
                      Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (Var_53));
                      MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (Var_59));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      *Term_12 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_50));
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_52));
                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Context_11));
                    }
                    succeeded = MR_TRUE;
                  }
                }
              }
              break;
          }
          /* jump out of search loop */
          goto label_1;
        }
        else
        if ((result_3 < (MR_Integer) 0))
          hi_1 = (mid_2 - (MR_Integer) 1);
        else
          lo_0 = (mid_2 + (MR_Integer) 1);
      }
      while ((lo_0 <= hi_1));
      succeeded = MR_FALSE;
    label_1:;
    }
    else
    {
      MR_Word Var_100 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeArgs_9, (MR_Integer) 1)));
      MR_Word Var_101 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeArgs_9, (MR_Integer) 0)));

      succeeded = (Var_100 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (succeeded)
      {
        if ((strcmp(ModuleName_7, (MR_String) "array") == 0))
        {
          MR_Word TypeInfo_88_88;
          MR_Word TypeCtorInfo_89_89;
          MR_Word TypeInfo_90_90;
          MR_Word TypeCtorInfo_91_91;
          MR_Word TypeInfo_92_92;
          MR_Word List_29;
          MR_ArrayPtr Array_30;
          MR_Word ArgsTerm_31;
          MR_Word Var_42;
          MR_String Var_43;
          MR_Word Var_44;
          MR_Word Var_45;
          MR_Box Elem_28;
          MR_Box conv8_Array_30;

          succeeded = (strcmp(TypeCtorName_8, (MR_String) "array") == 0);
          if (succeeded)
          {
            mercury__type_desc__has_type_2_p_0(&TypeInfo_88_88, Var_101);
            TypeCtorInfo_89_89 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
            TypeCtorInfo_91_91 = (MR_Word) &mercury__array__array__type_ctor_info_array_1;
            {
              TypeInfo_90_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), TypeInfo_90_90, 0) = ((MR_Box) (TypeCtorInfo_89_89));
              MR_hl_field(MR_mktag(0), TypeInfo_90_90, 1) = ((MR_Box) (TypeInfo_88_88));
            }
            {
              TypeInfo_92_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), TypeInfo_92_92, 0) = ((MR_Box) (TypeCtorInfo_91_91));
              MR_hl_field(MR_mktag(0), TypeInfo_92_92, 1) = ((MR_Box) (TypeInfo_88_88));
            }
            mercury__univ__det_univ_to_type_2_p_0(TypeInfo_92_92, Univ_10, &conv8_Array_30);
            Array_30 = ((MR_ArrayPtr) conv8_Array_30);
            mercury__array__to_list_2_p_0(TypeInfo_88_88, (MR_ArrayPtr) Array_30, &List_29);
            mercury__term_conversion__type_to_term_2_p_0(TypeInfo_90_90, TypeInfo_for_T_78, ((MR_Box) (List_29)), &ArgsTerm_31);
            Var_43 = (MR_String) "array";
            Var_45 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            Var_42 = (MR_Word) &mercury__term_conversion_scalar_common_6[4];
            {
              Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (ArgsTerm_31));
              MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (Var_45));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              *Term_12 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_42));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_44));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Context_11));
            }
            succeeded = MR_TRUE;
          }
        }
        else
        if ((strcmp(ModuleName_7, (MR_String) "version_array") == 0))
        {
          MR_Word TypeInfo_93_93;
          MR_Word TypeCtorInfo_94_94;
          MR_Word TypeInfo_95_95;
          MR_Word TypeCtorInfo_96_96;
          MR_Word TypeInfo_97_97;
          MR_Word Var_35;
          MR_String Var_36;
          MR_Word Var_37;
          MR_Word Var_38;
          MR_Word List_75;
          MR_Box Array_76;
          MR_Word ArgsTerm_77;
          MR_Box Elem_74;
          MR_Box conv9_Array_76;

          succeeded = (strcmp(TypeCtorName_8, (MR_String) "version_array") == 0);
          if (succeeded)
          {
            mercury__type_desc__has_type_2_p_0(&TypeInfo_93_93, Var_101);
            TypeCtorInfo_94_94 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
            TypeCtorInfo_96_96 = (MR_Word) &mercury__version_array__version_array__type_ctor_info_version_array_1;
            {
              TypeInfo_95_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), TypeInfo_95_95, 0) = ((MR_Box) (TypeCtorInfo_94_94));
              MR_hl_field(MR_mktag(0), TypeInfo_95_95, 1) = ((MR_Box) (TypeInfo_93_93));
            }
            {
              TypeInfo_97_97 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), TypeInfo_97_97, 0) = ((MR_Box) (TypeCtorInfo_96_96));
              MR_hl_field(MR_mktag(0), TypeInfo_97_97, 1) = ((MR_Box) (TypeInfo_93_93));
            }
            mercury__univ__det_univ_to_type_2_p_0(TypeInfo_97_97, Univ_10, &conv9_Array_76);
            Array_76 = ((MR_Box) conv9_Array_76);
            List_75 = mercury__version_array__to_list_1_f_0(TypeInfo_93_93, Array_76);
            mercury__term_conversion__type_to_term_2_p_0(TypeInfo_95_95, TypeInfo_for_T_78, ((MR_Box) (List_75)), &ArgsTerm_77);
            Var_36 = (MR_String) "version_array";
            Var_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            Var_35 = (MR_Word) &mercury__term_conversion_scalar_common_6[5];
            {
              Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (ArgsTerm_77));
              MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (Var_38));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              *Term_12 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_35));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_37));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Context_11));
            }
            succeeded = MR_TRUE;
          }
        }
        else
          succeeded = MR_FALSE;
      }
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__term_conversion__univ_to_term_2_p_0(
  MR_Word TypeInfo_28_28,
  MR_Word Univ_3,
  MR_Word * Term_4)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_6_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), Univ_3, (MR_Integer) 0)));
    MR_Word Context_5 = (MR_Word) &mercury__term_conversion_scalar_common_1[1];
    MR_Word Type_6;
    MR_Box V_4_34 = (MR_hl_field(MR_mktag(0), Univ_3, (MR_Integer) 1));
    MR_Box Var_36;
    MR_Integer Var_7;

{
#define MR_PROC_LABEL mercury__term_conversion__univ_to_term_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  TypeInfo_6_35 ;
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
	 Type_6  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__term_conversion__univ_to_term_2_p_0

	MR_Word TypeInfo;
	MR_Integer Functors;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo =  Type_6 ;
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
	 Var_7  = Functors;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      MR_Word TypeInfo_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), Univ_3, (MR_Integer) 0)));
      MR_String FunctorString_8;
      MR_Word FunctorArgs_10;
      MR_Word TermArgs_11;
      MR_Box Var_18 = (MR_hl_field(MR_mktag(0), Univ_3, (MR_Integer) 1));
      MR_Word Var_20;
      MR_Integer _FunctorArity_9;

      mercury__deconstruct__deconstruct_5_p_1(TypeInfo_29_29, Var_18, (MR_Integer) 1, &FunctorString_8, &_FunctorArity_9, &FunctorArgs_10);
      mercury__term_conversion__univ_list_to_term_list_2_p_0(TypeInfo_28_28, FunctorArgs_10, &TermArgs_11);
      {
        Var_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (FunctorString_8));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        *Term_4 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_20));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (TermArgs_11));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Context_5));
      }
    }
    else
    {
      MR_Word SpecialCaseTerm_16;
      MR_Word TypeCtor_12;
      MR_Word TypeArgs_13;
      MR_String ModuleName_14;
      MR_String TypeCtorName_15;
      MR_String V_5_41;
      MR_Integer V_6_42;
      MR_String V_5_45;
      MR_Integer V_6_46;

{
#define MR_PROC_LABEL mercury__term_conversion__univ_to_term_2_p_0

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc =  Type_6 ;
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
	 TypeCtor_12  = TypeCtorDesc;
	 TypeArgs_13  = ArgTypes;
}
{
#define MR_PROC_LABEL mercury__term_conversion__univ_to_term_2_p_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc =  TypeCtor_12 ;
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
	 ModuleName_14  = TypeCtorModuleName;
	 V_5_41  = TypeCtorName;
	 V_6_42  = TypeCtorArity;
}
{
#define MR_PROC_LABEL mercury__term_conversion__univ_to_term_2_p_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc =  TypeCtor_12 ;
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
	 V_5_45  = TypeCtorModuleName;
	 TypeCtorName_15  = TypeCtorName;
	 V_6_46  = TypeCtorArity;
}
      succeeded = mercury__term_conversion__univ_to_term_special_case_6_p_0(TypeInfo_28_28, ModuleName_14, TypeCtorName_15, TypeArgs_13, Univ_3, Context_5, &SpecialCaseTerm_16);
      if (succeeded)
        *Term_4 = SpecialCaseTerm_16;
      else
      {
        MR_Word TypeInfo_6_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), Univ_3, (MR_Integer) 0)));
        MR_String Message_17;
        MR_String Var_22;
        MR_String Var_23;
        MR_Word Var_24;
        MR_Box V_4_49 = (MR_hl_field(MR_mktag(0), Univ_3, (MR_Integer) 1));
        MR_Box Var_51;

{
#define MR_PROC_LABEL mercury__term_conversion__univ_to_term_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  TypeInfo_6_50 ;
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
	 Var_24  = TypeInfo;
}
        Var_23 = mercury__type_desc__type_name_1_f_0(Var_24);
        mercury__string__append_3_p_2(Var_23, (MR_String) "\'", &Var_22);
        mercury__string__append_3_p_2((MR_String) "unknown type \140", Var_22, &Message_17);
        {
          mercury__require__unexpected_3_p_0((MR_String) "term_conversion", (MR_String) "predicate \140term_conversion.univ_to_term\'/2", Message_17);
          return;
        }
      }
    }
  }
}

void MR_CALL 
mercury__term_conversion__type_to_term_2_p_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word TypeInfo_7_7,
  MR_Box Val_3,
  MR_Word * Term_4)
{
  {
    MR_Word Univ_5;

    mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_6, Val_3, &Univ_5);
    mercury__term_conversion__univ_to_term_2_p_0(TypeInfo_7_7, Univ_5, Term_4);
  }
}

static void MR_CALL 
mercury__term_conversion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_54_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_3_p_in__list_0(
  MR_Word Var_15,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  else
  {
    MR_Word V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
    MR_Word V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
    MR_Word V_8_8;
    MR_Word V_9_9;

    mercury__term_conversion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_p_0(Var_15, V_6_6, &V_8_8);
    mercury__term_conversion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_54_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_3_p_in__list_0(Var_15, V_7_7, &V_9_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (V_8_8));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (V_9_9));
    }
  }
}

static void MR_CALL 
mercury__term_conversion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_p_0(
  MR_Word Context_4,
  MR_Word TypeInfo_5,
  MR_Word * Term_6)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtor_7;
    MR_Word ArgTypes_8;
    MR_String TypeName_9;
    MR_String ModuleName_10;
    MR_Word ArgTerms_11;
    MR_String V_5_32;
    MR_Integer V_6_33;
    MR_String V_5_36;
    MR_Integer V_6_37;

{
#define MR_PROC_LABEL mercury__term_conversion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_p_0

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc =  TypeInfo_5 ;
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
	 TypeCtor_7  = TypeCtorDesc;
	 ArgTypes_8  = ArgTypes;
}
{
#define MR_PROC_LABEL mercury__term_conversion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_p_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc =  TypeCtor_7 ;
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
	 V_5_32  = TypeCtorModuleName;
	 TypeName_9  = TypeCtorName;
	 V_6_33  = TypeCtorArity;
}
{
#define MR_PROC_LABEL mercury__term_conversion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_p_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc =  TypeCtor_7 ;
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
	 V_5_36  = TypeCtorModuleName;
	 ModuleName_10  = TypeCtorName;
	 V_6_37  = TypeCtorArity;
}
    mercury__term_conversion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_54_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_3_p_in__list_0(Context_4, ArgTypes_8, &ArgTerms_11);
    succeeded = (strcmp(ModuleName_10, (MR_String) "builtin") == 0);
    if (succeeded)
    {
      MR_Word Var_15;

      {
        Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (TypeName_9));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        *Term_6 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_15));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ArgTerms_11));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Context_4));
      }
    }
    else
    {
      MR_Word Arg1_12;
      MR_Word Arg2_13;
      MR_Word Var_16;
      MR_Word Var_17;
      MR_Word Var_18;
      MR_Word Var_19;
      MR_Word Var_21;
      MR_Word Var_22;
      MR_Word Var_23;

      {
        Var_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (ModuleName_10));
      }
      Var_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      {
        Arg1_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Arg1_12, 0) = ((MR_Box) (Var_16));
        MR_hl_field(MR_mktag(0), Arg1_12, 1) = ((MR_Box) (Var_17));
        MR_hl_field(MR_mktag(0), Arg1_12, 2) = ((MR_Box) (Context_4));
      }
      {
        Var_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (TypeName_9));
      }
      {
        Arg2_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Arg2_13, 0) = ((MR_Box) (Var_18));
        MR_hl_field(MR_mktag(0), Arg2_13, 1) = ((MR_Box) (ArgTerms_11));
        MR_hl_field(MR_mktag(0), Arg2_13, 2) = ((MR_Box) (Context_4));
      }
      Var_19 = (MR_Word) &mercury__term_conversion_scalar_common_6[1];
      Var_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      {
        Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (Arg2_13));
        MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (Var_23));
      }
      {
        Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (Arg1_12));
        MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (Var_22));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        *Term_6 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_19));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_21));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Context_4));
      }
    }
  }
}

MR_Box MR_CALL 
mercury__term_conversion__det_term_to_type_1_f_0(
  MR_Word TypeInfo_5_5,
  MR_Word TypeInfo_for_T_6,
  MR_Word Term_3)
{
  {
    MR_Box X_4;

    mercury__term_conversion__det_term_to_type_2_p_0(TypeInfo_5_5, TypeInfo_for_T_6, Term_3, &X_4);
    return X_4;
  }
}

void MR_CALL 
mercury__term_conversion__det_term_to_type_2_p_0(
  MR_Word TypeInfo_19_19,
  MR_Word TypeInfo_for_T_20,
  MR_Word Term_3,
  MR_Box * X_4)
{
  {
    MR_bool succeeded;
    MR_Box XPrime_5;
    MR_Word Var_23;

    mercury__term_conversion__try_term_to_type_2_p_0(TypeInfo_19_19, TypeInfo_for_T_20, Term_3, &Var_23);
    succeeded = ((MR_tag((MR_Word) Var_23)) == (MR_mktag((MR_Integer) 0)));
    if (succeeded)
    {
      XPrime_5 = (MR_hl_field(MR_mktag(0), Var_23, (MR_Integer) 0));
      *X_4 = XPrime_5;
    }
    else
    {
      MR_Word V_3_25;
      MR_Word V_2_24;
      MR_Word V_4_26;

      succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        V_2_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 0)));
        V_3_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 1)));
        V_4_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 2)));
        succeeded = mercury__term__is_ground_list_1_p_0(TypeInfo_19_19, V_3_25);
      }
      succeeded = !(succeeded);
      if (succeeded)
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "term_conversion", (MR_String) "predicate \140term_conversion.det_term_to_type\'/2", (MR_String) "the term is not ground");
          return;
        }
      }
      else
      {
        MR_String Message_6;
        MR_String Var_11;
        MR_String Var_13;
        MR_String Var_14;
        MR_Word Var_15;

{
#define MR_PROC_LABEL mercury__term_conversion__det_term_to_type_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  TypeInfo_for_T_20 ;
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
	 Var_15  = TypeInfo;
}
        Var_14 = mercury__type_desc__type_name_1_f_0(Var_15);
        mercury__string__append_3_p_2(Var_14, (MR_String) "\'", &Var_13);
        mercury__string__append_3_p_2((MR_String) " for type \140", Var_13, &Var_11);
        mercury__string__append_3_p_2((MR_String) "type error:\nthe term is not a valid term", Var_11, &Message_6);
        {
          mercury__require__unexpected_3_p_0((MR_String) "term_conversion", (MR_String) "predicate \140term_conversion.det_term_to_type\'/2", Message_6);
          return;
        }
      }
    }
  }
}

MR_bool MR_CALL 
mercury__term_conversion__term_to_type_2_p_0(
  MR_Word TypeInfo_for_U_6,
  MR_Word TypeInfo_for_T_7,
  MR_Word Term_3,
  MR_Box * Val_4)
{
  {
    MR_bool succeeded;
    MR_Word Var_5;

    mercury__term_conversion__try_term_to_type_2_p_0(TypeInfo_for_U_6, TypeInfo_for_T_7, Term_3, &Var_5);
    succeeded = ((MR_tag((MR_Word) Var_5)) == (MR_mktag((MR_Integer) 0)));
    if (succeeded)
      *Val_4 = (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 0));
    return succeeded;
  }
}

MR_Word MR_CALL 
mercury__term_conversion__try_term_to_type_1_f_0(
  MR_Word TypeInfo_for_U_5,
  MR_Word TypeInfo_for_T_6,
  MR_Word Term_3)
{
  {
    MR_Word Result_4;

    mercury__term_conversion__try_term_to_type_2_p_0(TypeInfo_for_U_5, TypeInfo_for_T_6, Term_3, &Result_4);
    return Result_4;
  }
}

void MR_CALL 
mercury__term_conversion__try_term_to_type_2_p_0(
  MR_Word TypeInfo_for_U_11,
  MR_Word TypeInfo_for_T_12,
  MR_Word Term_3,
  MR_Word * Result_4)
{
  {
    MR_Word UnivResult_6;
    MR_Word Var_10;
    MR_Word Var_17;
    MR_Box ValTypedVar_5;

{
#define MR_PROC_LABEL mercury__term_conversion__try_term_to_type_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  TypeInfo_for_T_12 ;
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
	 Var_10  = TypeInfo;
}
    Var_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__term_conversion__try_term_to_univ_2_4_p_0(TypeInfo_for_U_11, Term_3, Var_10, Var_17, &UnivResult_6);
    if (((MR_tag((MR_Word) UnivResult_6)) == (MR_mktag((MR_Integer) 1))))
      *Result_4 = UnivResult_6;
    else
    {
      MR_Word Univ_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), UnivResult_6, (MR_Integer) 0)));
      MR_Box Val_8;

      mercury__univ__det_univ_to_type_2_p_0(TypeInfo_for_T_12, Univ_7, &Val_8);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *Result_4 = base;
        MR_hl_field(MR_mktag(0), base, 0) = Val_8;
      }
    }
  }
}

static MR_bool MR_CALL 
mercury__term_conversion__term_list_to_univ_list_7_p_0(
  MR_Word TypeInfo_for_T_33,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word Functor_3,
  MR_Integer ArgNum_4,
  MR_Word PrevContext_5,
  MR_Word TermContext_6,
  MR_Word * HeadVar__7_7)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word Var_12;

      succeeded = (HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (succeeded)
      {
        Var_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *HeadVar__7_7 = (MR_Word) &mercury__term_conversion_scalar_common_6[0];
        succeeded = MR_TRUE;
      }
    }
    else
    {
      MR_Word ArgTerm_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgTerms_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word Type_15;
      MR_Word Types_16;
      MR_Word ArgContext_22;
      MR_Word NewContext_23;
      MR_Word ArgResult_24;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Type_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
        Types_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
        {
          ArgContext_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ArgContext_22, 0) = ((MR_Box) (Functor_3));
          MR_hl_field(MR_mktag(0), ArgContext_22, 1) = ((MR_Box) (ArgNum_4));
          MR_hl_field(MR_mktag(0), ArgContext_22, 2) = ((MR_Box) (TermContext_6));
        }
        {
          NewContext_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), NewContext_23, 0) = ((MR_Box) (ArgContext_22));
          MR_hl_field(MR_mktag(1), NewContext_23, 1) = ((MR_Box) (PrevContext_5));
        }
        mercury__term_conversion__try_term_to_univ_2_4_p_0(TypeInfo_for_T_33, ArgTerm_13, Type_15, NewContext_23, &ArgResult_24);
        if (((MR_tag((MR_Word) ArgResult_24)) == (MR_mktag((MR_Integer) 1))))
        {
          *HeadVar__7_7 = (MR_Word) ArgResult_24;
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Word Arg_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgResult_24, (MR_Integer) 0)));
          MR_Word RestResult_26;
          MR_Integer Var_29 = (ArgNum_4 + (MR_Integer) 1);

          succeeded = mercury__term_conversion__term_list_to_univ_list_7_p_0(TypeInfo_for_T_33, ArgTerms_14, Types_16, Functor_3, Var_29, PrevContext_5, TermContext_6, &RestResult_26);
          if (succeeded)
          {
            if (((MR_tag((MR_Word) RestResult_26)) == (MR_mktag((MR_Integer) 1))))
              *HeadVar__7_7 = RestResult_26;
            else
            {
              MR_Word Rest_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), RestResult_26, (MR_Integer) 0)));
              MR_Word Var_31;

              {
                Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Arg_25));
                MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Rest_27));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                *HeadVar__7_7 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_31));
              }
            }
            succeeded = MR_TRUE;
          }
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
mercury__term_conversion__term_to_univ_special_case_6_p_0(
  MR_Word TypeInfo_for_T_151,
  MR_String ModuleName_7,
  MR_String TypeCtorName_8,
  MR_Word TypeArgs_9,
  MR_Word Term_10,
  MR_Word PrevContext_11,
  MR_Word * Result_12)
{
  {
    MR_bool succeeded;
    MR_Word Var_190 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_10, (MR_Integer) 2)));
    MR_Word Var_191 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_10, (MR_Integer) 1)));
    MR_Word Var_192 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_10, (MR_Integer) 0)));

    if ((TypeArgs_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((strcmp(ModuleName_7, (MR_String) "univ") == 0))
      {
        MR_Word TypeCtorInfo_176_176;
        MR_Word ArgTerm_38;
        MR_Word ValueTerm_40;
        MR_Word TypeTerm_41;
        MR_String Var_50;
        MR_Word Var_52;
        MR_Word Var_53;
        MR_String Var_54;
        MR_Word Var_55;
        MR_Word Var_56;
        MR_Word Var_57;
        MR_Word Var_74;
        MR_Word Univ_146;
        MR_Word Var_185;
        MR_Word Var_186;
        MR_String Var_193;
        MR_Word Var_42;
        MR_Word Var_184;
        MR_Integer lo_0;
        MR_Integer hi_1;
        MR_Integer mid_2;
        MR_Integer result_3;

        succeeded = (strcmp(TypeCtorName_8, (MR_String) "univ") == 0);
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) Var_192)) == (MR_mktag((MR_Integer) 0)));
          if (succeeded)
          {
            Var_50 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_192, (MR_Integer) 0)));
            succeeded = (strcmp(Var_50, (MR_String) "univ") == 0);
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) Var_191)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                ArgTerm_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_191, (MR_Integer) 0)));
                Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_191, (MR_Integer) 1)));
                succeeded = (Var_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) ArgTerm_38)) == (MR_mktag((MR_Integer) 0)));
                  if (succeeded)
                  {
                    Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgTerm_38, (MR_Integer) 0)));
                    Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgTerm_38, (MR_Integer) 1)));
                    Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgTerm_38, (MR_Integer) 2)));
                    succeeded = ((MR_tag((MR_Word) Var_53)) == (MR_mktag((MR_Integer) 0)));
                    if (succeeded)
                    {
                      Var_54 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_53, (MR_Integer) 0)));
                      succeeded = (strcmp(Var_54, (MR_String) ":") == 0);
                      if (succeeded)
                      {
                        succeeded = ((MR_tag((MR_Word) Var_55)) == (MR_mktag((MR_Integer) 1)));
                        if (succeeded)
                        {
                          ValueTerm_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_55, (MR_Integer) 0)));
                          Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_55, (MR_Integer) 1)));
                          succeeded = ((MR_tag((MR_Word) Var_56)) == (MR_mktag((MR_Integer) 1)));
                          if (succeeded)
                          {
                            TypeTerm_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_56, (MR_Integer) 0)));
                            Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_56, (MR_Integer) 1)));
                            succeeded = (Var_57 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            if (succeeded)
                            {
                              succeeded = ((MR_tag((MR_Word) TypeTerm_41)) == (MR_mktag((MR_Integer) 0)));
                              if (succeeded)
                              {
                                Var_186 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeTerm_41, (MR_Integer) 0)));
                                Var_185 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeTerm_41, (MR_Integer) 1)));
                                Var_184 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeTerm_41, (MR_Integer) 2)));
                                succeeded = (Var_185 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                if (succeeded)
                                {
                                  succeeded = ((MR_tag((MR_Word) Var_186)) == (MR_mktag((MR_Integer) 0)));
                                  if (succeeded)
                                  {
                                    Var_193 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_186, (MR_Integer) 0)));
                                    /* binary string jump switch */
                                    lo_0 = (MR_Integer) 0;
                                    hi_1 = (MR_Integer) 3;
                                    do
                                    {
                                      mid_2 = (((lo_0 + hi_1)) / (MR_Integer) 2);
                                      result_3 = MR_strcmp(Var_193, ((&mercury__term_conversion_vector_common_5[0 + mid_2]))->mercury__term_conversion__vector_common_type_5_0__vct_5_f_0);
                                      if ((result_3 == (MR_Integer) 0))
                                      {
                                        switch (((&mercury__term_conversion_vector_common_5[0 + mid_2]))->mercury__term_conversion__vector_common_type_5_0__vct_5_f_1) {
                                          default: /*NOTREACHED*/ MR_assert(0);
                                          case (MR_Integer) 0:
                                            {
                                              /* case "float" */
                                              {
                                                MR_Word TypeCtorInfo_175_175;
                                                MR_Word Var_61;
                                                MR_Word Var_62;
                                                MR_Float Float_141;
                                                MR_Word Var_48;

                                                succeeded = ((MR_tag((MR_Word) ValueTerm_40)) == (MR_mktag((MR_Integer) 0)));
                                                if (succeeded)
                                                {
                                                  Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ValueTerm_40, (MR_Integer) 0)));
                                                  Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ValueTerm_40, (MR_Integer) 1)));
                                                  Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ValueTerm_40, (MR_Integer) 2)));
                                                  succeeded = ((((MR_tag((MR_Word) Var_61)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_61, (MR_Integer) 0)))) == (MR_Integer) 0)));
                                                  if (succeeded)
                                                  {
                                                    Float_141 = MR_unbox_float((MR_hl_field(MR_mktag(3), Var_61, (MR_Integer) 1)));
                                                    succeeded = (Var_62 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                    if (succeeded)
                                                    {
                                                      TypeCtorInfo_175_175 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0;
                                                      Univ_146 = mercury__univ__univ_1_f_0(TypeCtorInfo_175_175, MR_box_float(Float_141));
                                                      succeeded = MR_TRUE;
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
                                                MR_Word TypeCtorInfo_172_172;
                                                MR_Integer Int_138;

                                                succeeded = mercury__term__term_to_int_2_p_0(TypeInfo_for_T_151, ValueTerm_40, &Int_138);
                                                if (succeeded)
                                                {
                                                  TypeCtorInfo_172_172 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
                                                  Univ_146 = mercury__univ__univ_1_f_0(TypeCtorInfo_172_172, ((MR_Box) (Int_138)));
                                                  succeeded = MR_TRUE;
                                                }
                                              }
                                            }
                                            break;
                                          case (MR_Integer) 2:
                                            {
                                              /* case "string" */
                                              {
                                                MR_Word TypeCtorInfo_174_174;
                                                MR_Word Var_66;
                                                MR_Word Var_67;
                                                MR_String String_140;
                                                MR_Word Var_46;

                                                succeeded = ((MR_tag((MR_Word) ValueTerm_40)) == (MR_mktag((MR_Integer) 0)));
                                                if (succeeded)
                                                {
                                                  Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ValueTerm_40, (MR_Integer) 0)));
                                                  Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ValueTerm_40, (MR_Integer) 1)));
                                                  Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ValueTerm_40, (MR_Integer) 2)));
                                                  succeeded = ((MR_tag((MR_Word) Var_66)) == (MR_mktag((MR_Integer) 2)));
                                                  if (succeeded)
                                                  {
                                                    String_140 = ((MR_String) (MR_hl_field(MR_mktag(2), Var_66, (MR_Integer) 0)));
                                                    succeeded = (Var_67 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                    if (succeeded)
                                                    {
                                                      TypeCtorInfo_174_174 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
                                                      Univ_146 = mercury__univ__univ_1_f_0(TypeCtorInfo_174_174, ((MR_Box) (String_140)));
                                                      succeeded = MR_TRUE;
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
                                                MR_Word TypeCtorInfo_173_173;
                                                MR_Unsigned UInt_139;

                                                succeeded = mercury__term__term_to_uint_2_p_0(TypeInfo_for_T_151, ValueTerm_40, &UInt_139);
                                                if (succeeded)
                                                {
                                                  TypeCtorInfo_173_173 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_uint_0;
                                                  Univ_146 = mercury__univ__univ_1_f_0(TypeCtorInfo_173_173, ((MR_Box) (UInt_139)));
                                                  succeeded = MR_TRUE;
                                                }
                                              }
                                            }
                                            break;
                                        }
                                        /* jump out of search loop */
                                        goto label_0;
                                      }
                                      else
                                      if ((result_3 < (MR_Integer) 0))
                                        hi_1 = (mid_2 - (MR_Integer) 1);
                                      else
                                        lo_0 = (mid_2 + (MR_Integer) 1);
                                    }
                                    while ((lo_0 <= hi_1));
                                    succeeded = MR_FALSE;
                                  label_0:;
                                    if (succeeded)
                                    {
                                      TypeCtorInfo_176_176 = (MR_Word) &mercury__univ__univ__type_ctor_info_univ_0;
                                      Var_74 = mercury__univ__univ_1_f_0(TypeCtorInfo_176_176, ((MR_Box) (Univ_146)));
                                      {
                                        MR_Word base;
                                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                        *Result_12 = base;
                                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_74));
                                      }
                                      succeeded = MR_TRUE;
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
      if ((strcmp(ModuleName_7, (MR_String) "bitmap") == 0))
      {
        MR_Word TypeCtorInfo_157_157;
        MR_Box Var_103;
        MR_Word Univ_113;
        MR_String String_114;

        succeeded = (strcmp(TypeCtorName_8, (MR_String) "bitmap") == 0);
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) Var_192)) == (MR_mktag((MR_Integer) 2)));
          if (succeeded)
          {
            String_114 = ((MR_String) (MR_hl_field(MR_mktag(2), Var_192, (MR_Integer) 0)));
            succeeded = (Var_191 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (succeeded)
            {
              succeeded = mercury__bitmap__from_string_1_f_0(String_114, &Var_103);
              if (succeeded)
              {
                TypeCtorInfo_157_157 = (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_0;
                mercury__univ__type_to_univ_2_p_1(TypeCtorInfo_157_157, ((MR_Box) (Var_103)), &Univ_113);
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  *Result_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Univ_113));
                }
                succeeded = MR_TRUE;
              }
            }
          }
        }
      }
      else
      if ((strcmp(ModuleName_7, (MR_String) "builtin") == 0))
      {
        MR_Word Univ_17;
        MR_Integer lo_4;
        MR_Integer hi_5;
        MR_Integer mid_6;
        MR_Integer result_7;

        succeeded = (Var_191 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (succeeded)
        {
          /* binary string jump switch */
          lo_4 = (MR_Integer) 0;
          hi_5 = (MR_Integer) 4;
          do
          {
            mid_6 = (((lo_4 + hi_5)) / (MR_Integer) 2);
            result_7 = MR_strcmp(TypeCtorName_8, ((&mercury__term_conversion_vector_common_5[4 + mid_6]))->mercury__term_conversion__vector_common_type_5_0__vct_5_f_0);
            if ((result_7 == (MR_Integer) 0))
            {
              switch (((&mercury__term_conversion_vector_common_5[4 + mid_6]))->mercury__term_conversion__vector_common_type_5_0__vct_5_f_1) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    /* case "character" */
                    {
                      MR_Word TypeCtorInfo_152_152;
                      MR_String FunctorName_15;
                      MR_Char Char_16;
                      MR_String Var_109;

                      succeeded = ((MR_tag((MR_Word) Var_192)) == (MR_mktag((MR_Integer) 0)));
                      if (succeeded)
                      {
                        FunctorName_15 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_192, (MR_Integer) 0)));
                        Var_109 = (MR_String) "";
                        succeeded = mercury__string__first_char_3_p_1(FunctorName_15, &Char_16, Var_109);
                        if (succeeded)
                        {
                          TypeCtorInfo_152_152 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
                          mercury__univ__type_to_univ_2_p_0(TypeCtorInfo_152_152, ((MR_Box) (MR_Word) (Char_16)), &Univ_17);
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    /* case "float" */
                    {
                      MR_Word TypeCtorInfo_156_156;
                      MR_Float Float_23;

                      succeeded = ((((MR_tag((MR_Word) Var_192)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_192, (MR_Integer) 0)))) == (MR_Integer) 0)));
                      if (succeeded)
                      {
                        Float_23 = MR_unbox_float((MR_hl_field(MR_mktag(3), Var_192, (MR_Integer) 1)));
                        TypeCtorInfo_156_156 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0;
                        mercury__univ__type_to_univ_2_p_1(TypeCtorInfo_156_156, MR_box_float(Float_23), &Univ_17);
                        succeeded = MR_TRUE;
                      }
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    /* case "int" */
                    {
                      MR_Word TypeCtorInfo_154_154;
                      MR_Word Integer_20;
                      MR_Integer Int_21;
                      MR_Word Var_107;
                      MR_Word Var_108;
                      MR_Word _Base_19;

                      succeeded = ((MR_tag((MR_Word) Var_192)) == (MR_mktag((MR_Integer) 1)));
                      if (succeeded)
                      {
                        _Base_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_192, (MR_Integer) 0)));
                        Integer_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_192, (MR_Integer) 1)));
                        Var_107 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_192, (MR_Integer) 2)));
                        Var_108 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_192, (MR_Integer) 3)));
                        succeeded = (Var_107 == (MR_Integer) 0);
                        if (succeeded)
                        {
                          succeeded = (Var_108 == (MR_Integer) 0);
                          if (succeeded)
                          {
                            succeeded = mercury__integer__to_int_2_p_0(Integer_20, &Int_21);
                            if (succeeded)
                            {
                              TypeCtorInfo_154_154 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
                              mercury__univ__type_to_univ_2_p_1(TypeCtorInfo_154_154, ((MR_Box) (Int_21)), &Univ_17);
                              succeeded = MR_TRUE;
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
                      MR_Word TypeCtorInfo_153_153;
                      MR_String String_18;

                      succeeded = ((MR_tag((MR_Word) Var_192)) == (MR_mktag((MR_Integer) 2)));
                      if (succeeded)
                      {
                        String_18 = ((MR_String) (MR_hl_field(MR_mktag(2), Var_192, (MR_Integer) 0)));
                        TypeCtorInfo_153_153 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
                        mercury__univ__type_to_univ_2_p_1(TypeCtorInfo_153_153, ((MR_Box) (String_18)), &Univ_17);
                        succeeded = MR_TRUE;
                      }
                    }
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    /* case "uint" */
                    {
                      MR_Word TypeCtorInfo_155_155;
                      MR_Unsigned UInt_22;
                      MR_Word Var_105;
                      MR_Word Var_106;
                      MR_Word Integer_112;
                      MR_Word _Base_110;

                      succeeded = ((MR_tag((MR_Word) Var_192)) == (MR_mktag((MR_Integer) 1)));
                      if (succeeded)
                      {
                        _Base_110 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_192, (MR_Integer) 0)));
                        Integer_112 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_192, (MR_Integer) 1)));
                        Var_105 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_192, (MR_Integer) 2)));
                        Var_106 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_192, (MR_Integer) 3)));
                        succeeded = (Var_105 == (MR_Integer) 1);
                        if (succeeded)
                        {
                          succeeded = (Var_106 == (MR_Integer) 0);
                          if (succeeded)
                          {
                            succeeded = mercury__integer__to_uint_2_p_0(Integer_112, &UInt_22);
                            if (succeeded)
                            {
                              TypeCtorInfo_155_155 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_uint_0;
                              mercury__univ__type_to_univ_2_p_1(TypeCtorInfo_155_155, ((MR_Box) (UInt_22)), &Univ_17);
                              succeeded = MR_TRUE;
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
            if ((result_7 < (MR_Integer) 0))
              hi_5 = (mid_6 - (MR_Integer) 1);
            else
              lo_4 = (mid_6 + (MR_Integer) 1);
          }
          while ((lo_4 <= hi_5));
          succeeded = MR_FALSE;
        label_1:;
          if (succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *Result_12 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Univ_17));
            }
            succeeded = MR_TRUE;
          }
        }
      }
      else
        succeeded = MR_FALSE;
    else
    {
      MR_Word Var_182 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeArgs_9, (MR_Integer) 1)));
      MR_Word Var_183 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeArgs_9, (MR_Integer) 0)));
      MR_Word Var_194;
      MR_Word Var_195;
      MR_String Var_196;

      succeeded = (Var_182 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Var_191)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          Var_195 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_191, (MR_Integer) 0)));
          Var_194 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_191, (MR_Integer) 1)));
          succeeded = ((MR_tag((MR_Word) Var_192)) == (MR_mktag((MR_Integer) 0)));
          if (succeeded)
          {
            Var_196 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_192, (MR_Integer) 0)));
            succeeded = (Var_194 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (succeeded)
            {
              if ((strcmp(ModuleName_7, (MR_String) "array") == 0))
              {
                MR_Word TypeInfo_158_158;
                MR_Word TypeCtorInfo_159_159;
                MR_Word TypeInfo_160_160;
                MR_Word ListType_29;
                MR_Word ArgContext_30;
                MR_Word NewContext_31;
                MR_Word ArgResult_32;
                MR_Integer Var_97;
                MR_Box Elem_28;
                MR_Word Var_93;

                succeeded = (strcmp(TypeCtorName_8, (MR_String) "array") == 0);
                if (succeeded)
                {
                  succeeded = (strcmp(Var_196, (MR_String) "array") == 0);
                  if (succeeded)
                  {
                    mercury__type_desc__has_type_2_p_0(&TypeInfo_158_158, Var_183);
                    TypeCtorInfo_159_159 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
                    {
                      TypeInfo_160_160 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), TypeInfo_160_160, 0) = ((MR_Box) (TypeCtorInfo_159_159));
                      MR_hl_field(MR_mktag(0), TypeInfo_160_160, 1) = ((MR_Box) (TypeInfo_158_158));
                    }
                    ListType_29 = mercury__type_desc__type_of_1_f_0(TypeInfo_160_160);
                    Var_97 = (MR_Integer) 1;
                    {
                      ArgContext_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), ArgContext_30, 0) = ((MR_Box) (Var_192));
                      MR_hl_field(MR_mktag(0), ArgContext_30, 1) = ((MR_Box) (Var_97));
                      MR_hl_field(MR_mktag(0), ArgContext_30, 2) = ((MR_Box) (Var_190));
                    }
                    {
                      NewContext_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), NewContext_31, 0) = ((MR_Box) (ArgContext_30));
                      MR_hl_field(MR_mktag(1), NewContext_31, 1) = ((MR_Box) (PrevContext_11));
                    }
                    mercury__term_conversion__try_term_to_univ_2_4_p_0(TypeInfo_for_T_151, Var_195, ListType_29, NewContext_31, &ArgResult_32);
                    if (((MR_tag((MR_Word) ArgResult_32)) == (MR_mktag((MR_Integer) 1))))
                      *Result_12 = ArgResult_32;
                    else
                    {
                      MR_Word TypeInfo_161_161;
                      MR_Word TypeInfo_162_162;
                      MR_Word TypeCtorInfo_163_163;
                      MR_Word TypeInfo_164_164;
                      MR_Word ListUniv_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgResult_32, (MR_Integer) 0)));
                      MR_Word List_35;
                      MR_ArrayPtr Array_36;
                      MR_Word Var_100;
                      MR_Box Elem2_34;
                      MR_Box conv0_List_35;
                      MR_ArrayPtr conv1_Array_36;

                      mercury__type_desc__has_type_2_p_0(&TypeInfo_161_161, Var_183);
                      {
                        TypeInfo_162_162 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), TypeInfo_162_162, 0) = ((MR_Box) (TypeCtorInfo_159_159));
                        MR_hl_field(MR_mktag(0), TypeInfo_162_162, 1) = ((MR_Box) (TypeInfo_161_161));
                      }
                      mercury__univ__det_univ_to_type_2_p_0(TypeInfo_162_162, ListUniv_33, &conv0_List_35);
                      List_35 = ((MR_Word) conv0_List_35);
                      conv1_Array_36 = mercury__array__array_1_f_0(TypeInfo_161_161, List_35);
                      Array_36 = (MR_ArrayPtr) conv1_Array_36;
                      TypeCtorInfo_163_163 = (MR_Word) &mercury__array__array__type_ctor_info_array_1;
                      {
                        TypeInfo_164_164 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), TypeInfo_164_164, 0) = ((MR_Box) (TypeCtorInfo_163_163));
                        MR_hl_field(MR_mktag(0), TypeInfo_164_164, 1) = ((MR_Box) (TypeInfo_161_161));
                      }
                      Var_100 = mercury__univ__univ_1_f_0(TypeInfo_164_164, ((MR_Box) (Array_36)));
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                        *Result_12 = base;
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_100));
                      }
                    }
                    succeeded = MR_TRUE;
                  }
                }
              }
              else
              if ((strcmp(ModuleName_7, (MR_String) "version_array") == 0))
              {
                MR_Word TypeInfo_165_165;
                MR_Word TypeCtorInfo_166_166;
                MR_Word TypeInfo_167_167;
                MR_Integer Var_84;
                MR_Word ListType_129;
                MR_Word ArgContext_130;
                MR_Word NewContext_131;
                MR_Word ArgResult_132;
                MR_Box Elem_128;
                MR_Word Var_80;

                succeeded = (strcmp(TypeCtorName_8, (MR_String) "version_array") == 0);
                if (succeeded)
                {
                  succeeded = (strcmp(Var_196, (MR_String) "version_array") == 0);
                  if (succeeded)
                  {
                    mercury__type_desc__has_type_2_p_0(&TypeInfo_165_165, Var_183);
                    TypeCtorInfo_166_166 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
                    {
                      TypeInfo_167_167 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), TypeInfo_167_167, 0) = ((MR_Box) (TypeCtorInfo_166_166));
                      MR_hl_field(MR_mktag(0), TypeInfo_167_167, 1) = ((MR_Box) (TypeInfo_165_165));
                    }
                    ListType_129 = mercury__type_desc__type_of_1_f_0(TypeInfo_167_167);
                    Var_84 = (MR_Integer) 1;
                    {
                      ArgContext_130 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), ArgContext_130, 0) = ((MR_Box) (Var_192));
                      MR_hl_field(MR_mktag(0), ArgContext_130, 1) = ((MR_Box) (Var_84));
                      MR_hl_field(MR_mktag(0), ArgContext_130, 2) = ((MR_Box) (Var_190));
                    }
                    {
                      NewContext_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), NewContext_131, 0) = ((MR_Box) (ArgContext_130));
                      MR_hl_field(MR_mktag(1), NewContext_131, 1) = ((MR_Box) (PrevContext_11));
                    }
                    mercury__term_conversion__try_term_to_univ_2_4_p_0(TypeInfo_for_T_151, Var_195, ListType_129, NewContext_131, &ArgResult_132);
                    if (((MR_tag((MR_Word) ArgResult_132)) == (MR_mktag((MR_Integer) 1))))
                      *Result_12 = ArgResult_132;
                    else
                    {
                      MR_Word TypeInfo_168_168;
                      MR_Word TypeInfo_169_169;
                      MR_Word TypeCtorInfo_170_170;
                      MR_Word TypeInfo_171_171;
                      MR_Word Var_87;
                      MR_Word ListUniv_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgResult_132, (MR_Integer) 0)));
                      MR_Word List_117;
                      MR_Box Array_118;
                      MR_Box Elem2_116;
                      MR_Box conv2_List_117;

                      mercury__type_desc__has_type_2_p_0(&TypeInfo_168_168, Var_183);
                      {
                        TypeInfo_169_169 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), TypeInfo_169_169, 0) = ((MR_Box) (TypeCtorInfo_166_166));
                        MR_hl_field(MR_mktag(0), TypeInfo_169_169, 1) = ((MR_Box) (TypeInfo_168_168));
                      }
                      mercury__univ__det_univ_to_type_2_p_0(TypeInfo_169_169, ListUniv_115, &conv2_List_117);
                      List_117 = ((MR_Word) conv2_List_117);
                      Array_118 = mercury__version_array__version_array_1_f_0(TypeInfo_168_168, List_117);
                      TypeCtorInfo_170_170 = (MR_Word) &mercury__version_array__version_array__type_ctor_info_version_array_1;
                      {
                        TypeInfo_171_171 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), TypeInfo_171_171, 0) = ((MR_Box) (TypeCtorInfo_170_170));
                        MR_hl_field(MR_mktag(0), TypeInfo_171_171, 1) = ((MR_Box) (TypeInfo_168_168));
                      }
                      Var_87 = mercury__univ__univ_1_f_0(TypeInfo_171_171, ((MR_Box) (Array_118)));
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                        *Result_12 = base;
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_87));
                      }
                    }
                    succeeded = MR_TRUE;
                  }
                }
              }
              else
                succeeded = MR_FALSE;
            }
          }
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
mercury__term_conversion__try_term_to_univ_2_4_p_0(
  MR_Word TypeInfo_for_T_34,
  MR_Word Term_5,
  MR_Word Type_6,
  MR_Word Context_7,
  MR_Word * Result_8)
{
  {
    MR_bool succeeded;

    if (((MR_tag((MR_Word) Term_5)) == (MR_mktag((MR_Integer) 0))))
    {
      MR_Word Functor_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 0)));
      MR_Word ArgTerms_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 1)));
      MR_Word TermContext_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 2)));
      MR_Word SpecialCaseResult_18;
      MR_Word TypeCtor_14;
      MR_Word TypeArgs_15;
      MR_String ModuleName_16;
      MR_String TypeCtorName_17;
      MR_String V_5_40;
      MR_Integer V_6_41;
      MR_String V_5_44;
      MR_Integer V_6_45;

{
#define MR_PROC_LABEL mercury__term_conversion__try_term_to_univ_2_4_p_0

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc =  Type_6 ;
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
	 TypeCtor_14  = TypeCtorDesc;
	 TypeArgs_15  = ArgTypes;
}
{
#define MR_PROC_LABEL mercury__term_conversion__try_term_to_univ_2_4_p_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc =  TypeCtor_14 ;
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
	 ModuleName_16  = TypeCtorModuleName;
	 V_5_40  = TypeCtorName;
	 V_6_41  = TypeCtorArity;
}
{
#define MR_PROC_LABEL mercury__term_conversion__try_term_to_univ_2_4_p_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc =  TypeCtor_14 ;
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
	 V_5_44  = TypeCtorModuleName;
	 TypeCtorName_17  = TypeCtorName;
	 V_6_45  = TypeCtorArity;
}
      succeeded = mercury__term_conversion__term_to_univ_special_case_6_p_0(TypeInfo_for_T_34, ModuleName_16, TypeCtorName_17, TypeArgs_15, Term_5, Context_7, &SpecialCaseResult_18);
      if (succeeded)
        *Result_8 = SpecialCaseResult_18;
      else
      {
        MR_Integer FunctorNumber_21;
        MR_Word ArgsResult_23;
        MR_Word TypeCtorInfo_35_35;
        MR_Word TypeInfo_36_36;
        MR_String FunctorName_19;
        MR_Integer Arity_20;
        MR_Word ArgTypes_22;
        MR_Integer Var_28;
        MR_Integer V_5_48;
        MR_Integer V_11_54;

        succeeded = ((MR_tag((MR_Word) Functor_11)) == (MR_mktag((MR_Integer) 0)));
        if (succeeded)
        {
          FunctorName_19 = ((MR_String) (MR_hl_field(MR_mktag(0), Functor_11, (MR_Integer) 0)));
          TypeCtorInfo_35_35 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
          V_5_48 = (MR_Integer) 0;
          {
            TypeInfo_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TypeInfo_36_36, 0) = ((MR_Box) (TypeCtorInfo_35_35));
            MR_hl_field(MR_mktag(0), TypeInfo_36_36, 1) = ((MR_Box) (TypeInfo_for_T_34));
          }
          mercury__list__length_acc_3_p_0(TypeInfo_36_36, (MR_Word) ArgTerms_12, V_5_48, &Arity_20);
{
#define MR_PROC_LABEL mercury__term_conversion__try_term_to_univ_2_4_p_0

	MR_Word TypeInfo;
	MR_Integer Functors;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo =  Type_6 ;
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
	 V_11_54  = Functors;
	}
succeeded  = SUCCESS_INDICATOR;
}
          if (succeeded)
          {
            succeeded = mercury__construct__find_functor_2_6_p_0(Type_6, FunctorName_19, Arity_20, V_11_54, &FunctorNumber_21, &ArgTypes_22);
            if (succeeded)
            {
              Var_28 = (MR_Integer) 1;
              succeeded = mercury__term_conversion__term_list_to_univ_list_7_p_0(TypeInfo_for_T_34, ArgTerms_12, ArgTypes_22, Functor_11, Var_28, Context_7, TermContext_13, &ArgsResult_23);
            }
          }
        }
        if (succeeded)
          if (((MR_tag((MR_Word) ArgsResult_23)) == (MR_mktag((MR_Integer) 1))))
            *Result_8 = (MR_Word) ArgsResult_23;
          else
          {
            MR_Word ArgValues_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgsResult_23, (MR_Integer) 0)));
            MR_Word Value_25;

            succeeded = mercury__construct__construct_3_f_0(Type_6, FunctorNumber_21, ArgValues_24, &Value_25);
            if (succeeded)
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                *Result_8 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Value_25));
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
          MR_Word TypeCtorInfo_37_37 = (MR_Word) &mercury__term_conversion__term_conversion__type_ctor_info_term_to_type_arg_context_0;
          MR_Word RevContext_27;
          MR_Word Var_32;

          mercury__list__reverse_2_p_0(TypeCtorInfo_37_37, Context_7, &RevContext_27);
          {
            Var_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (Term_5));
            MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) (Type_6));
            MR_hl_field(MR_mktag(0), Var_32, 2) = ((MR_Box) (TermContext_13));
            MR_hl_field(MR_mktag(0), Var_32, 3) = ((MR_Box) (RevContext_27));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *Result_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_32));
          }
        }
      }
    }
    else
    {
      MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), Term_5, (MR_Integer) 0)));
      MR_Word Var_33;
      MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), Term_5, (MR_Integer) 1)));

      {
        Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Var_9));
        MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (Context_7));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *Result_8 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_33));
      }
    }
  }
}

static MR_bool MR_CALL 
mercury__term_conversion____Unify____term_to_type_arg_context_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__term_conversion____Unify____term_to_type_arg_context_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mercury__term_conversion____Compare____term_to_type_arg_context_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__term_conversion____Compare____term_to_type_arg_context_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__term_conversion____Unify____term_to_type_context_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__term_conversion____Unify____term_to_type_context_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mercury__term_conversion____Compare____term_to_type_context_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__term_conversion____Compare____term_to_type_context_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__term_conversion____Unify____term_to_type_error_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mercury__term_conversion____Unify____term_to_type_error_1_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    return succeeded;
  }
}

static void MR_CALL 
mercury__term_conversion____Compare____term_to_type_error_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__term_conversion____Compare____term_to_type_error_1_0(((MR_Word) wrapper_arg_1), &conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_3), ((MR_Word) wrapper_arg_4));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__term_conversion____Unify____term_to_type_result_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_bool succeeded;

    succeeded = mercury__term_conversion____Unify____term_to_type_result_2_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3), ((MR_Word) wrapper_arg_4));
    return succeeded;
  }
}

static void MR_CALL 
mercury__term_conversion____Compare____term_to_type_result_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__term_conversion____Compare____term_to_type_result_2_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_4), ((MR_Word) wrapper_arg_5));
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__term_conversion____Unify____term_to_type_result_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mercury__term_conversion____Unify____term_to_type_result_1_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    return succeeded;
  }
}

static void MR_CALL 
mercury__term_conversion____Compare____term_to_type_result_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__term_conversion____Compare____term_to_type_result_1_0(((MR_Word) wrapper_arg_1), &conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_3), ((MR_Word) wrapper_arg_4));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
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
