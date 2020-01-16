/*
** Automatically generated from `term_conversion.m'
** by the Mercury compiler,
** version rotd-2020-01-16
** configured for x86_64-pc-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** UNBOXED_INT64S=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


// :- module term_conversion.
// :- implementation.

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
#include "int16.mih"
#include "int32.mih"
#include "int64.mih"
#include "int8.mih"
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
#include "uint16.mih"
#include "uint32.mih"
#include "uint64.mih"
#include "uint8.mih"
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
mercury__term_conversion__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_56_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_f_in__version_array_0(
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
  MR_Word TypeInfo_for_T_118,
  MR_String ModuleName_7,
  MR_String TypeCtorName_8,
  MR_Word TypeArgs_9,
  MR_Word Univ_10,
  MR_Word Context_11,
  MR_Word * Term_12);

static void MR_CALL 
mercury__term_conversion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_55_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_3_p_in__list_0(
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
  MR_Word TypeInfo_for_T_255,
  MR_String ModuleName_7,
  MR_String TypeCtorName_8,
  MR_Word TypeArgs_9,
  MR_Word Term_10,
  MR_Word PrevContext_11,
  MR_Word * Result_12);

static void MR_CALL 
mercury__term_conversion__try_term_to_univ_2_4_p_0(
  MR_Word TypeInfo_for_T_33,
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
};

static /* final */ const struct mercury__term_conversion__vector_common_type_5_0_s mercury__term_conversion_vector_common_5[192];

/* sealed */ struct mercury__term_conversion__vector_common_type_7_0_s {
  const MR_String mercury__term_conversion__vector_common_type_7_0__vct_7_f_0;
  const MR_Integer mercury__term_conversion__vector_common_type_7_0__vct_7_f_1;
};

static /* final */ const struct mercury__term_conversion__vector_common_type_7_0_s mercury__term_conversion_vector_common_7[4];



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
    ((MR_Box) ((MR_Unsigned) 0U))
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


static /* final */ const struct mercury__term_conversion__vector_common_type_5_0_s mercury__term_conversion_vector_common_5[192] = {
  /* row 0 */   {     NULL },
  /* row 1 */   {     (MR_String) "string" },
  /* row 2 */   {     NULL },
  /* row 3 */   {     (MR_String) "uint32" },
  /* row 4 */   {     NULL },
  /* row 5 */   {     NULL },
  /* row 6 */   {     NULL },
  /* row 7 */   {     (MR_String) "int16" },
  /* row 8 */   {     (MR_String) "int" },
  /* row 9 */   {     NULL },
  /* row 10 */   {     NULL },
  /* row 11 */   {     NULL },
  /* row 12 */   {     NULL },
  /* row 13 */   {     (MR_String) "uint8" },
  /* row 14 */   {     NULL },
  /* row 15 */   {     NULL },
  /* row 16 */   {     NULL },
  /* row 17 */   {     NULL },
  /* row 18 */   {     NULL },
  /* row 19 */   {     NULL },
  /* row 20 */   {     (MR_String) "uint" },
  /* row 21 */   {     NULL },
  /* row 22 */   {     NULL },
  /* row 23 */   {     (MR_String) "int8" },
  /* row 24 */   {     NULL },
  /* row 25 */   {     NULL },
  /* row 26 */   {     NULL },
  /* row 27 */   {     NULL },
  /* row 28 */   {     (MR_String) "uint64" },
  /* row 29 */   {     NULL },
  /* row 30 */   {     NULL },
  /* row 31 */   {     NULL },
  /* row 32 */   {     NULL },
  /* row 33 */   {     (MR_String) "uint16" },
  /* row 34 */   {     NULL },
  /* row 35 */   {     (MR_String) "float" },
  /* row 36 */   {     NULL },
  /* row 37 */   {     (MR_String) "int32" },
  /* row 38 */   {     NULL },
  /* row 39 */   {     NULL },
  /* row 40 */   {     NULL },
  /* row 41 */   {     NULL },
  /* row 42 */   {     NULL },
  /* row 43 */   {     NULL },
  /* row 44 */   {     NULL },
  /* row 45 */   {     NULL },
  /* row 46 */   {     NULL },
  /* row 47 */   {     NULL },
  /* row 48 */   {     (MR_String) "int64" },
  /* row 49 */   {     NULL },
  /* row 50 */   {     NULL },
  /* row 51 */   {     NULL },
  /* row 52 */   {     NULL },
  /* row 53 */   {     NULL },
  /* row 54 */   {     NULL },
  /* row 55 */   {     NULL },
  /* row 56 */   {     NULL },
  /* row 57 */   {     NULL },
  /* row 58 */   {     NULL },
  /* row 59 */   {     NULL },
  /* row 60 */   {     NULL },
  /* row 61 */   {     NULL },
  /* row 62 */   {     NULL },
  /* row 63 */   {     NULL },
  /* row 64 */   {     NULL },
  /* row 65 */   {     (MR_String) "string" },
  /* row 66 */   {     NULL },
  /* row 67 */   {     (MR_String) "uint32" },
  /* row 68 */   {     (MR_String) "character" },
  /* row 69 */   {     NULL },
  /* row 70 */   {     NULL },
  /* row 71 */   {     (MR_String) "int16" },
  /* row 72 */   {     (MR_String) "int" },
  /* row 73 */   {     NULL },
  /* row 74 */   {     NULL },
  /* row 75 */   {     NULL },
  /* row 76 */   {     NULL },
  /* row 77 */   {     (MR_String) "uint8" },
  /* row 78 */   {     NULL },
  /* row 79 */   {     NULL },
  /* row 80 */   {     NULL },
  /* row 81 */   {     NULL },
  /* row 82 */   {     NULL },
  /* row 83 */   {     NULL },
  /* row 84 */   {     (MR_String) "uint" },
  /* row 85 */   {     NULL },
  /* row 86 */   {     NULL },
  /* row 87 */   {     (MR_String) "int8" },
  /* row 88 */   {     NULL },
  /* row 89 */   {     NULL },
  /* row 90 */   {     NULL },
  /* row 91 */   {     NULL },
  /* row 92 */   {     (MR_String) "uint64" },
  /* row 93 */   {     NULL },
  /* row 94 */   {     NULL },
  /* row 95 */   {     NULL },
  /* row 96 */   {     NULL },
  /* row 97 */   {     (MR_String) "uint16" },
  /* row 98 */   {     NULL },
  /* row 99 */   {     (MR_String) "float" },
  /* row 100 */   {     NULL },
  /* row 101 */   {     (MR_String) "int32" },
  /* row 102 */   {     NULL },
  /* row 103 */   {     NULL },
  /* row 104 */   {     NULL },
  /* row 105 */   {     NULL },
  /* row 106 */   {     NULL },
  /* row 107 */   {     NULL },
  /* row 108 */   {     NULL },
  /* row 109 */   {     NULL },
  /* row 110 */   {     NULL },
  /* row 111 */   {     NULL },
  /* row 112 */   {     (MR_String) "int64" },
  /* row 113 */   {     NULL },
  /* row 114 */   {     NULL },
  /* row 115 */   {     NULL },
  /* row 116 */   {     NULL },
  /* row 117 */   {     NULL },
  /* row 118 */   {     NULL },
  /* row 119 */   {     NULL },
  /* row 120 */   {     NULL },
  /* row 121 */   {     NULL },
  /* row 122 */   {     NULL },
  /* row 123 */   {     NULL },
  /* row 124 */   {     NULL },
  /* row 125 */   {     NULL },
  /* row 126 */   {     NULL },
  /* row 127 */   {     NULL },
  /* row 128 */   {     NULL },
  /* row 129 */   {     (MR_String) "string" },
  /* row 130 */   {     NULL },
  /* row 131 */   {     (MR_String) "uint32" },
  /* row 132 */   {     (MR_String) "character" },
  /* row 133 */   {     NULL },
  /* row 134 */   {     NULL },
  /* row 135 */   {     (MR_String) "int16" },
  /* row 136 */   {     (MR_String) "int" },
  /* row 137 */   {     NULL },
  /* row 138 */   {     NULL },
  /* row 139 */   {     NULL },
  /* row 140 */   {     NULL },
  /* row 141 */   {     (MR_String) "uint8" },
  /* row 142 */   {     NULL },
  /* row 143 */   {     NULL },
  /* row 144 */   {     NULL },
  /* row 145 */   {     NULL },
  /* row 146 */   {     NULL },
  /* row 147 */   {     NULL },
  /* row 148 */   {     (MR_String) "uint" },
  /* row 149 */   {     NULL },
  /* row 150 */   {     NULL },
  /* row 151 */   {     (MR_String) "int8" },
  /* row 152 */   {     NULL },
  /* row 153 */   {     NULL },
  /* row 154 */   {     NULL },
  /* row 155 */   {     NULL },
  /* row 156 */   {     (MR_String) "uint64" },
  /* row 157 */   {     NULL },
  /* row 158 */   {     NULL },
  /* row 159 */   {     NULL },
  /* row 160 */   {     NULL },
  /* row 161 */   {     (MR_String) "uint16" },
  /* row 162 */   {     NULL },
  /* row 163 */   {     (MR_String) "float" },
  /* row 164 */   {     NULL },
  /* row 165 */   {     (MR_String) "int32" },
  /* row 166 */   {     NULL },
  /* row 167 */   {     NULL },
  /* row 168 */   {     NULL },
  /* row 169 */   {     NULL },
  /* row 170 */   {     NULL },
  /* row 171 */   {     NULL },
  /* row 172 */   {     NULL },
  /* row 173 */   {     NULL },
  /* row 174 */   {     NULL },
  /* row 175 */   {     NULL },
  /* row 176 */   {     (MR_String) "int64" },
  /* row 177 */   {     NULL },
  /* row 178 */   {     NULL },
  /* row 179 */   {     NULL },
  /* row 180 */   {     NULL },
  /* row 181 */   {     NULL },
  /* row 182 */   {     NULL },
  /* row 183 */   {     NULL },
  /* row 184 */   {     NULL },
  /* row 185 */   {     NULL },
  /* row 186 */   {     NULL },
  /* row 187 */   {     NULL },
  /* row 188 */   {     NULL },
  /* row 189 */   {     NULL },
  /* row 190 */   {     NULL },
  /* row 191 */   {     NULL },
};

static /* final */ const struct mercury__term_conversion__vector_common_type_7_0_s mercury__term_conversion_vector_common_7[4] = {
  /* row 0 */
  {
    (MR_String) "bitmap",
    (MR_Integer) 0
  },
  /* row 1 */
  {
    (MR_String) "builtin",
    (MR_Integer) 1
  },
  /* row 2 */
  {
    (MR_String) "type_desc",
    (MR_Integer) 2
  },
  /* row 3 */
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
#include "int16.mh"
#include "int32.mh"
#include "int64.mh"
#include "int8.mh"
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
#include "uint16.mh"
#include "uint32.mh"
#include "uint64.mh"
#include "uint8.mh"
#include "version_array.mh"



static const MR_PseudoTypeInfo mercury__term_conversion__term_conversion__field_types_term_to_type_arg_context_0_0[3] = {
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_const_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0)
};

static const MR_DuFunctorDesc mercury__term_conversion__term_conversion__du_functor_desc_term_to_type_arg_context_0_0 = {
  (MR_String) "arg_context",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__term_conversion__term_conversion__field_types_term_to_type_arg_context_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__term_conversion__term_conversion__du_stag_ordered_term_to_type_arg_context_0_0[1] = {
  &mercury__term_conversion__term_conversion__du_functor_desc_term_to_type_arg_context_0_0
};

static const MR_DuPtagLayout mercury__term_conversion__term_conversion__du_ptag_ordered_term_to_type_arg_context_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__term_conversion__term_conversion__du_stag_ordered_term_to_type_arg_context_0_0,
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__term_conversion____Unify____term_to_type_arg_context_0_0_10001)),
  ((MR_Box) (mercury__term_conversion____Compare____term_to_type_arg_context_0_0_10001)),
  (MR_String) "term_conversion",
  (MR_String) "term_to_type_arg_context",
  {     mercury__term_conversion__term_conversion__du_name_ordered_term_to_type_arg_context_0 },
  {     mercury__term_conversion__term_conversion__du_ptag_ordered_term_to_type_arg_context_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  mercury__term_conversion__term_conversion__functor_number_map_term_to_type_arg_context_0
};

static const MR_FA_TypeInfo_Struct1 mercury__term_conversion__list__ti_list_1term_conversion__type_ctor_info_term_to_type_arg_context_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&mercury__term_conversion__term_conversion__type_ctor_info_term_to_type_arg_context_0)
  }
};

const MR_TypeCtorInfo_Struct mercury__term_conversion__term_conversion__type_ctor_info_term_to_type_context_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__term_conversion____Unify____term_to_type_context_0_0_10001)),
  ((MR_Box) (mercury__term_conversion____Compare____term_to_type_context_0_0_10001)),
  (MR_String) "term_conversion",
  (MR_String) "term_to_type_context",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mercury__term_conversion__list__ti_list_1term_conversion__type_ctor_info_term_to_type_arg_context_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__term_conversion__term__pti_term_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_PseudoTypeInfo mercury__term_conversion__term_conversion__field_types_term_to_type_error_1_0[4] = {
  (MR_PseudoTypeInfo) (&mercury__term_conversion__term__pti_term_1__pseudo_1),
  (MR_PseudoTypeInfo) (&mercury__type_desc__type_desc__type_ctor_info_type_desc_0),
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0),
  (MR_PseudoTypeInfo) (&mercury__term_conversion__list__ti_list_1term_conversion__type_ctor_info_term_to_type_arg_context_0)
};

static const MR_DuFunctorDesc mercury__term_conversion__term_conversion__du_functor_desc_term_to_type_error_1_0 = {
  (MR_String) "type_error",
  INT16_C(4),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__term_conversion__term_conversion__field_types_term_to_type_error_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__term_conversion__term__pti_var_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_PseudoTypeInfo mercury__term_conversion__term_conversion__field_types_term_to_type_error_1_1[2] = {
  (MR_PseudoTypeInfo) (&mercury__term_conversion__term__pti_var_1__pseudo_1),
  (MR_PseudoTypeInfo) (&mercury__term_conversion__list__ti_list_1term_conversion__type_ctor_info_term_to_type_arg_context_0)
};

static const MR_DuFunctorDesc mercury__term_conversion__term_conversion__du_functor_desc_term_to_type_error_1_1 = {
  (MR_String) "mode_error",
  INT16_C(2),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mercury__term_conversion__term_conversion__field_types_term_to_type_error_1_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__term_conversion__term_conversion__du_stag_ordered_term_to_type_error_1_0[1] = {
  &mercury__term_conversion__term_conversion__du_functor_desc_term_to_type_error_1_0
};

static const MR_DuFunctorDescPtr mercury__term_conversion__term_conversion__du_stag_ordered_term_to_type_error_1_1[1] = {
  &mercury__term_conversion__term_conversion__du_functor_desc_term_to_type_error_1_1
};

static const MR_DuPtagLayout mercury__term_conversion__term_conversion__du_ptag_ordered_term_to_type_error_1[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__term_conversion__term_conversion__du_stag_ordered_term_to_type_error_1_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__term_conversion__term_conversion__du_stag_ordered_term_to_type_error_1_1,
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__term_conversion____Unify____term_to_type_error_1_0_10001)),
  ((MR_Box) (mercury__term_conversion____Compare____term_to_type_error_1_0_10001)),
  (MR_String) "term_conversion",
  (MR_String) "term_to_type_error",
  {     mercury__term_conversion__term_conversion__du_name_ordered_term_to_type_error_1 },
  {     mercury__term_conversion__term_conversion__du_ptag_ordered_term_to_type_error_1 },
  (MR_Integer) 2,
  UINT16_C(4),
  mercury__term_conversion__term_conversion__functor_number_map_term_to_type_error_1
};

static const MR_PseudoTypeInfo mercury__term_conversion__term_conversion__field_types_term_to_type_result_2_0[1] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1)
};

static const MR_DuFunctorDesc mercury__term_conversion__term_conversion__du_functor_desc_term_to_type_result_2_0 = {
  (MR_String) "ok",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__term_conversion__term_conversion__field_types_term_to_type_result_2_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__term_conversion__term_conversion__pti_term_to_type_error_1__pseudo_2 = {
  &mercury__term_conversion__term_conversion__type_ctor_info_term_to_type_error_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 2)
  }
};

static const MR_PseudoTypeInfo mercury__term_conversion__term_conversion__field_types_term_to_type_result_2_1[1] = {
  (MR_PseudoTypeInfo) (&mercury__term_conversion__term_conversion__pti_term_to_type_error_1__pseudo_2)
};

static const MR_DuFunctorDesc mercury__term_conversion__term_conversion__du_functor_desc_term_to_type_result_2_1 = {
  (MR_String) "error",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mercury__term_conversion__term_conversion__field_types_term_to_type_result_2_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__term_conversion__term_conversion__du_stag_ordered_term_to_type_result_2_0[1] = {
  &mercury__term_conversion__term_conversion__du_functor_desc_term_to_type_result_2_0
};

static const MR_DuFunctorDescPtr mercury__term_conversion__term_conversion__du_stag_ordered_term_to_type_result_2_1[1] = {
  &mercury__term_conversion__term_conversion__du_functor_desc_term_to_type_result_2_1
};

static const MR_DuPtagLayout mercury__term_conversion__term_conversion__du_ptag_ordered_term_to_type_result_2[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__term_conversion__term_conversion__du_stag_ordered_term_to_type_result_2_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__term_conversion__term_conversion__du_stag_ordered_term_to_type_result_2_1,
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__term_conversion____Unify____term_to_type_result_2_0_10001)),
  ((MR_Box) (mercury__term_conversion____Compare____term_to_type_result_2_0_10001)),
  (MR_String) "term_conversion",
  (MR_String) "term_to_type_result",
  {     mercury__term_conversion__term_conversion__du_name_ordered_term_to_type_result_2 },
  {     mercury__term_conversion__term_conversion__du_ptag_ordered_term_to_type_result_2 },
  (MR_Integer) 2,
  UINT16_C(4),
  mercury__term_conversion__term_conversion__functor_number_map_term_to_type_result_2
};

static const MR_FA_PseudoTypeInfo_Struct2 mercury__term_conversion__term_conversion__pti_term_to_type_result_2__pseudo_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term_conversion__term_conversion__type_ctor_info_term_to_type_result_2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_generic_0)
  }
};

const MR_TypeCtorInfo_Struct mercury__term_conversion__term_conversion__type_ctor_info_term_to_type_result_1 = {
  (MR_Integer) 1,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__term_conversion____Unify____term_to_type_result_1_0_10001)),
  ((MR_Box) (mercury__term_conversion____Compare____term_to_type_result_1_0_10001)),
  (MR_String) "term_conversion",
  (MR_String) "term_to_type_result",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mercury__term_conversion__term_conversion__pti_term_to_type_result_2__pseudo_1__plain_term__type_ctor_info_generic_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static MR_Word MR_CALL 
mercury__term_conversion__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_56_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_f_in__version_array_0(
  MR_Word TypeInfo_for_T1_1_16,
  MR_Box V_7_7,
  MR_Word V_8_8,
  MR_Integer V_9_9)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = ((MR_Integer) 0 <= V_9_9);
    MR_Word V_5_10;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Word V_11_12;
      MR_Integer V_13_13;
      MR_Box V_12_14;
      MR_Word next_value_of_V_8_8;
      MR_Integer next_value_of_V_9_9;

      V_12_14 = mercury__version_array__lookup_2_f_0(TypeInfo_for_T1_1_16, V_7_7, V_9_9);
      {
        V_11_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), V_11_12, 0) = V_12_14;
        MR_hl_field(MR_mktag(1), V_11_12, 1) = ((MR_Box) (V_8_8));
      }
      V_13_13 = (MR_Integer) ((MR_Unsigned) V_9_9 - (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_V_8_8 = V_11_12;
      next_value_of_V_9_9 = V_13_13;
      V_8_8 = next_value_of_V_8_8;
      V_9_9 = next_value_of_V_9_9;
      continue;
    }
    else
      V_5_10 = V_8_8;
    return V_5_10;
    break;
  }
}

static MR_Integer MR_CALL 
mercury__term_conversion__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  return (MR_Integer) 1200;
}

void MR_CALL 
mercury__term_conversion____Compare____term_to_type_result_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__term_conversion____Compare____term_to_type_result_2_0(TypeInfo_for_T_6, (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
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
    MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
    {
      MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
      {
        MR_Word ArgY1_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

        mercury__term_conversion____Compare____term_to_type_error_1_0(TypeInfo_for_U_15, HeadVar__1_1, Var_18, ArgY1_11);
      }
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    }
    else
    {
      MR_Box Var_19 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
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
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__term_conversion____Unify____term_to_type_result_2_0(TypeInfo_for_T_5, (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Cast_HeadVar1_3, Cast_HeadVar2_4);
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
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
    {
      MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_6;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
      if (succeeded)
      {
        ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        succeeded = mercury__term_conversion____Unify____term_to_type_error_1_0(TypeInfo_for_U_10, ArgX1_5, ArgY1_6);
      }
    }
    else
    {
      MR_Box ArgX1_3 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0));
      MR_Box ArgY1_4;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
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
    MR_Integer CastX_32 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_33 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_32 == CastY_33);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
    {
      MR_Word Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
      {
        MR_Word ArgY1_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word ArgY2_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word SubResult1_29;
        MR_Integer Var_49 = (MR_Integer) (Var_44);
        MR_Integer Var_50 = (MR_Integer) (ArgY1_28);

        succeeded = (Var_49 < Var_50);
        if (succeeded)
          SubResult1_29 = (MR_Integer) 1;
        else
        {
          succeeded = (Var_49 == Var_50);
          if (succeeded)
            SubResult1_29 = (MR_Integer) 0;
          else
            SubResult1_29 = (MR_Integer) 2;
        }
        succeeded = (SubResult1_29 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult1_29;
        else
          mercury__builtin__compare_3_p_0((MR_Word) (&mercury__term_conversion_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Var_43)), ((MR_Box) (ArgY2_31)));
      }
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    }
    else
    {
      MR_Word Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
        MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
        MR_Word SubResult1_6;

        mercury__term____Compare____term_1_0(TypeInfo_for_T_34, &SubResult1_6, Var_48, ArgY1_5);
        succeeded = (SubResult1_6 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult1_6;
        else
        {
          MR_Word SubResult2_9;

          mercury__type_desc____Compare____type_desc_0_0(&SubResult2_9, Var_47, ArgY2_8);
          succeeded = (SubResult2_9 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult2_9;
          else
          {
            MR_Word SubResult3_12;

            mercury__term____Compare____context_0_0(&SubResult3_12, Var_46, ArgY3_11);
            succeeded = (SubResult3_12 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult3_12;
            else
              mercury__builtin__compare_3_p_0((MR_Word) (&mercury__term_conversion_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Var_45)), ((MR_Box) (ArgY4_14)));
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
    MR_Integer CastX_15 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_16 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_15 == CastY_16);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
    {
      MR_Word TypeInfo_20_20;
      MR_Word ArgX1_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_12;
      MR_Word ArgX2_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_14;
      MR_Integer Var_26;
      MR_Integer Var_27;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
      if (succeeded)
      {
        ArgY1_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        ArgY2_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        Var_26 = (MR_Integer) (ArgX1_11);
        Var_27 = (MR_Integer) (ArgY1_12);
        succeeded = (Var_26 == Var_27);
        if (succeeded)
        {
          TypeInfo_20_20 = (MR_Word) (&mercury__term_conversion_scalar_common_1[0]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_20_20, ((MR_Box) (ArgX2_13)), ((MR_Box) (ArgY2_14)));
        }
      }
    }
    else
    {
      MR_Word TypeInfo_25_25;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4;
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6;
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8;
      MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY4_10;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
      if (succeeded)
      {
        ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
        ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
        ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
        ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
        succeeded = mercury__term____Unify____term_1_0(TypeInfo_for_T_17, ArgX1_3, ArgY1_4);
        if (succeeded)
        {
          succeeded = mercury__type_desc____Unify____type_desc_0_0(ArgX2_5, ArgY2_6);
          if (succeeded)
          {
            succeeded = mercury__term____Unify____context_0_0(ArgX3_7, ArgY3_8);
            if (succeeded)
            {
              TypeInfo_25_25 = (MR_Word) (&mercury__term_conversion_scalar_common_1[0]);
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
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&mercury__term_conversion_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
mercury__term_conversion____Unify____term_to_type_context_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&mercury__term_conversion_scalar_common_1[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
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
    MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word SubResult1_6;

      mercury__term____Compare____const_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        succeeded = (ArgX2_7 < ArgY2_8);
        if (succeeded)
          SubResult2_9 = (MR_Integer) 1;
        else
        {
          succeeded = (ArgX2_7 == ArgY2_8);
          if (succeeded)
            SubResult2_9 = (MR_Integer) 0;
          else
            SubResult2_9 = (MR_Integer) 2;
        }
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
          mercury__term____Compare____context_0_0(HeadVar__1_1, ArgX3_10, ArgY3_11);
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
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));

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
mercury__term_conversion__univ_list_to_term_list_2_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Value_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Values_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Term_5;
    MR_Word Terms_6;

    mercury__term_conversion__univ_to_term_2_p_0(TypeInfo_for_T_7, Value_3, &Term_5);
    mercury__term_conversion__univ_list_to_term_list_2_p_0(TypeInfo_for_T_7, Values_4, &Terms_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Term_5));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Terms_6));
    }
  }
}

static MR_bool MR_CALL 
mercury__term_conversion__univ_to_term_special_case_6_p_0(
  MR_Word TypeInfo_for_T_118,
  MR_String ModuleName_7,
  MR_String TypeCtorName_8,
  MR_Word TypeArgs_9,
  MR_Word Univ_10,
  MR_Word Context_11,
  MR_Word * Term_12)
{
  {
    MR_bool succeeded;

    if ((TypeArgs_9 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Integer lo_0 = (MR_Integer) 0;
      MR_Integer hi_1 = (MR_Integer) 3;
      MR_Integer mid_2;
      MR_Integer result_3;

      // binary string jump switch
      ;
      do
      {
        mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
        result_3 = MR_strcmp(ModuleName_7, ((&mercury__term_conversion_vector_common_7[0 + mid_2]))->mercury__term_conversion__vector_common_type_7_0__vct_7_f_0);
        if ((result_3 == (MR_Integer) 0))
        {
          switch (((&mercury__term_conversion_vector_common_7[0 + mid_2]))->mercury__term_conversion__vector_common_type_7_0__vct_7_f_1) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                // case "bitmap"
                ;
                {
                  MR_Word TypeCtorInfo_135_135;
                  MR_Box Bitmap_33;
                  MR_String BitmapStr_34;
                  MR_Word Var_54;
                  MR_Word Var_55;
                  MR_Box conv15_Bitmap_33;

                  succeeded = (strcmp(TypeCtorName_8, (MR_String) "bitmap") == 0);
                  if (succeeded)
                  {
                    TypeCtorInfo_135_135 = (MR_Word) (&mercury__bitmap__bitmap__type_ctor_info_bitmap_0);
                    mercury__univ__det_univ_to_type_2_p_0(TypeCtorInfo_135_135, Univ_10, &conv15_Bitmap_33);
                    Bitmap_33 = ((MR_Box) (conv15_Bitmap_33));
                    BitmapStr_34 = mercury__bitmap__to_string_1_f_0(Bitmap_33);
                    Var_55 = (MR_Word) ((MR_Unsigned) 0U);
                    {
                      Var_54 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), Var_54, 0) = ((MR_Box) (BitmapStr_34));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      *Term_12 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_54));
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_55));
                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Context_11));
                    }
                    succeeded = MR_TRUE;
                  }
                }
              }
              break;
            case (MR_Integer) 1:
              {
                // case "builtin"
                ;
                {
                  MR_Word Functor_15;
                  MR_Word Var_112;
                  MR_Integer slot_4 = ((MR_hash_string6(TypeCtorName_8)) & (MR_Integer) 63);
                  MR_String str_5 = ((&mercury__term_conversion_vector_common_5[128 + slot_4]))->mercury__term_conversion__vector_common_type_5_0__vct_5_f_0;

                  // hashed string jump switch
                  ;
                  // compute the hash value of the input string
                  ;
                  // no collisions; no hash chain loop
                  ;
                  // lookup the string for this hash slot
                  ;
                  // did we find a match?
                  ;
                  if ((((str_5 != NULL)) && ((strcmp(str_5, TypeCtorName_8) == 0))))
                  {
                    // we found a match; dispatch to the corresponding code
                    ;
                    switch (slot_4) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 1:
                        {
                          // case "string"
                          ;
                          {
                            MR_String String_16;
                            MR_Box conv9_String_16;

                            mercury__univ__det_univ_to_type_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Univ_10, &conv9_String_16);
                            String_16 = ((MR_String) (conv9_String_16));
                            {
                              Functor_15 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(2), Functor_15, 0) = ((MR_Box) (String_16));
                            }
                            succeeded = MR_TRUE;
                          }
                        }
                        break;
                      case (MR_Integer) 3:
                        {
                          // case "uint32"
                          ;
                          {
                            uint32_t UInt32_24;
                            MR_Word Var_81;
                            MR_Box conv12_UInt32_24;

                            mercury__univ__det_univ_to_type_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint32_0), Univ_10, &conv12_UInt32_24);
                            UInt32_24 = ((uint32_t) (MR_Word) conv12_UInt32_24);
                            Var_81 = mercury__integer__from_uint32_1_f_0(UInt32_24);
                            {
                              Functor_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), Functor_15, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
                              MR_hl_field(MR_mktag(1), Functor_15, 1) = ((MR_Box) (Var_81));
                              MR_hl_field(MR_mktag(1), Functor_15, 2) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 3)) | (MR_Unsigned) ((MR_Integer) 3)));
                            }
                            succeeded = MR_TRUE;
                          }
                        }
                        break;
                      case (MR_Integer) 4:
                        {
                          // case "character"
                          ;
                          {
                            MR_Char Char_13;
                            MR_String CharName_14;
                            MR_Box conv2_Char_13;

                            mercury__univ__det_univ_to_type_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), Univ_10, &conv2_Char_13);
                            Char_13 = ((MR_Char) (MR_Word) conv2_Char_13);
                            mercury__string__char_to_string_2_p_0(Char_13, &CharName_14);
                            {
                              Functor_15 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), Functor_15, 0) = ((MR_Box) (CharName_14));
                            }
                            succeeded = MR_TRUE;
                          }
                        }
                        break;
                      case (MR_Integer) 7:
                        {
                          // case "int16"
                          ;
                          {
                            int16_t Int16_21;
                            MR_Word Var_93;
                            MR_Box conv5_Int16_21;

                            mercury__univ__det_univ_to_type_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int16_0), Univ_10, &conv5_Int16_21);
                            Int16_21 = ((int16_t) (MR_Word) conv5_Int16_21);
                            Var_93 = mercury__integer__from_int16_1_f_0(Int16_21);
                            {
                              Functor_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), Functor_15, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
                              MR_hl_field(MR_mktag(1), Functor_15, 1) = ((MR_Box) (Var_93));
                              MR_hl_field(MR_mktag(1), Functor_15, 2) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 3)) | (MR_Unsigned) ((MR_Integer) 2)));
                            }
                            succeeded = MR_TRUE;
                          }
                        }
                        break;
                      case (MR_Integer) 8:
                        {
                          // case "int"
                          ;
                          {
                            MR_Integer Int_17;
                            MR_Word Var_109;
                            MR_Box conv4_Int_17;

                            mercury__univ__det_univ_to_type_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Univ_10, &conv4_Int_17);
                            Int_17 = ((MR_Integer) (conv4_Int_17));
                            Var_109 = mercury__integer__integer_1_f_0(Int_17);
                            {
                              Functor_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), Functor_15, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
                              MR_hl_field(MR_mktag(1), Functor_15, 1) = ((MR_Box) (Var_109));
                              MR_hl_field(MR_mktag(1), Functor_15, 2) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 3)) | (MR_Unsigned) ((MR_Integer) 0)));
                            }
                            succeeded = MR_TRUE;
                          }
                        }
                        break;
                      case (MR_Integer) 13:
                        {
                          // case "uint8"
                          ;
                          {
                            uint8_t UInt8_20;
                            MR_Word Var_97;
                            MR_Box conv14_UInt8_20;

                            mercury__univ__det_univ_to_type_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint8_0), Univ_10, &conv14_UInt8_20);
                            UInt8_20 = ((uint8_t) (MR_Word) conv14_UInt8_20);
                            Var_97 = mercury__integer__from_uint8_1_f_0(UInt8_20);
                            {
                              Functor_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), Functor_15, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
                              MR_hl_field(MR_mktag(1), Functor_15, 1) = ((MR_Box) (Var_97));
                              MR_hl_field(MR_mktag(1), Functor_15, 2) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 3)) | (MR_Unsigned) ((MR_Integer) 1)));
                            }
                            succeeded = MR_TRUE;
                          }
                        }
                        break;
                      case (MR_Integer) 20:
                        {
                          // case "uint"
                          ;
                          {
                            MR_Unsigned UInt_18;
                            MR_Word Var_105;
                            MR_Box conv10_UInt_18;

                            mercury__univ__det_univ_to_type_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), Univ_10, &conv10_UInt_18);
                            UInt_18 = ((MR_Unsigned) (conv10_UInt_18));
                            Var_105 = mercury__integer__from_uint_1_f_0(UInt_18);
                            {
                              Functor_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), Functor_15, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
                              MR_hl_field(MR_mktag(1), Functor_15, 1) = ((MR_Box) (Var_105));
                              MR_hl_field(MR_mktag(1), Functor_15, 2) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 3)) | (MR_Unsigned) ((MR_Integer) 0)));
                            }
                            succeeded = MR_TRUE;
                          }
                        }
                        break;
                      case (MR_Integer) 23:
                        {
                          // case "int8"
                          ;
                          {
                            int8_t Int8_19;
                            MR_Word Var_101;
                            MR_Box conv8_Int8_19;

                            mercury__univ__det_univ_to_type_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int8_0), Univ_10, &conv8_Int8_19);
                            Int8_19 = ((int8_t) (MR_Word) conv8_Int8_19);
                            Var_101 = mercury__integer__from_int8_1_f_0(Int8_19);
                            {
                              Functor_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), Functor_15, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
                              MR_hl_field(MR_mktag(1), Functor_15, 1) = ((MR_Box) (Var_101));
                              MR_hl_field(MR_mktag(1), Functor_15, 2) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 3)) | (MR_Unsigned) ((MR_Integer) 1)));
                            }
                            succeeded = MR_TRUE;
                          }
                        }
                        break;
                      case (MR_Integer) 28:
                        {
                          // case "uint64"
                          ;
                          {
                            uint64_t UInt64_26;
                            MR_Word Var_73;
                            MR_Box conv13_UInt64_26;

                            mercury__univ__det_univ_to_type_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint64_0), Univ_10, &conv13_UInt64_26);
                            UInt64_26 = MR_unbox_uint64(conv13_UInt64_26);
                            Var_73 = mercury__integer__from_uint64_1_f_0(UInt64_26);
                            {
                              Functor_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), Functor_15, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
                              MR_hl_field(MR_mktag(1), Functor_15, 1) = ((MR_Box) (Var_73));
                              MR_hl_field(MR_mktag(1), Functor_15, 2) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 3)) | (MR_Unsigned) ((MR_Integer) 4)));
                            }
                            succeeded = MR_TRUE;
                          }
                        }
                        break;
                      case (MR_Integer) 33:
                        {
                          // case "uint16"
                          ;
                          {
                            uint16_t UInt16_22;
                            MR_Word Var_89;
                            MR_Box conv11_UInt16_22;

                            mercury__univ__det_univ_to_type_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint16_0), Univ_10, &conv11_UInt16_22);
                            UInt16_22 = ((uint16_t) (MR_Word) conv11_UInt16_22);
                            Var_89 = mercury__integer__from_uint16_1_f_0(UInt16_22);
                            {
                              Functor_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), Functor_15, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
                              MR_hl_field(MR_mktag(1), Functor_15, 1) = ((MR_Box) (Var_89));
                              MR_hl_field(MR_mktag(1), Functor_15, 2) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 3)) | (MR_Unsigned) ((MR_Integer) 2)));
                            }
                            succeeded = MR_TRUE;
                          }
                        }
                        break;
                      case (MR_Integer) 35:
                        {
                          // case "float"
                          ;
                          {
                            MR_Float Float_27;
                            MR_Box conv3_Float_27;

                            mercury__univ__det_univ_to_type_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_float_0), Univ_10, &conv3_Float_27);
                            Float_27 = MR_unbox_float(conv3_Float_27);
                            {
                              Functor_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(3), Functor_15, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                              MR_hl_field(MR_mktag(3), Functor_15, 1) = MR_box_float(Float_27);
                            }
                            succeeded = MR_TRUE;
                          }
                        }
                        break;
                      case (MR_Integer) 37:
                        {
                          // case "int32"
                          ;
                          {
                            int32_t Int32_23;
                            MR_Word Var_85;
                            MR_Box conv6_Int32_23;

                            mercury__univ__det_univ_to_type_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int32_0), Univ_10, &conv6_Int32_23);
                            Int32_23 = ((int32_t) (MR_Word) conv6_Int32_23);
                            Var_85 = mercury__integer__from_int32_1_f_0(Int32_23);
                            {
                              Functor_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), Functor_15, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
                              MR_hl_field(MR_mktag(1), Functor_15, 1) = ((MR_Box) (Var_85));
                              MR_hl_field(MR_mktag(1), Functor_15, 2) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 3)) | (MR_Unsigned) ((MR_Integer) 3)));
                            }
                            succeeded = MR_TRUE;
                          }
                        }
                        break;
                      case (MR_Integer) 48:
                        {
                          // case "int64"
                          ;
                          {
                            int64_t Int64_25;
                            MR_Word Var_77;
                            MR_Box conv7_Int64_25;

                            mercury__univ__det_univ_to_type_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int64_0), Univ_10, &conv7_Int64_25);
                            Int64_25 = MR_unbox_int64(conv7_Int64_25);
                            Var_77 = mercury__integer__from_int64_1_f_0(Int64_25);
                            {
                              Functor_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), Functor_15, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
                              MR_hl_field(MR_mktag(1), Functor_15, 1) = ((MR_Box) (Var_77));
                              MR_hl_field(MR_mktag(1), Functor_15, 2) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 3)) | (MR_Unsigned) ((MR_Integer) 4)));
                            }
                            succeeded = MR_TRUE;
                          }
                        }
                        break;
                    }
                    // jump out of search loop
                    ;
                    goto label_0;
                  }
                  succeeded = MR_FALSE;
                label_0:;
                  if (succeeded)
                  {
                    Var_112 = (MR_Word) ((MR_Unsigned) 0U);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      *Term_12 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Functor_15));
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_112));
                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Context_11));
                    }
                    succeeded = MR_TRUE;
                  }
                }
              }
              break;
            case (MR_Integer) 2:
              {
                // case "type_desc"
                ;
                {
                  MR_Word TypeCtorInfo_132_132;
                  MR_Word TypeInfo_28;
                  MR_Word SubTerm_29;
                  MR_Word Var_68;
                  MR_Word Var_70;
                  MR_Word Var_71;
                  MR_Box conv1_TypeInfo_28;

                  succeeded = (strcmp(TypeCtorName_8, (MR_String) "type_desc") == 0);
                  if (succeeded)
                  {
                    TypeCtorInfo_132_132 = (MR_Word) (&mercury__type_desc__type_desc__type_ctor_info_type_desc_0);
                    mercury__univ__det_univ_to_type_2_p_0(TypeCtorInfo_132_132, Univ_10, &conv1_TypeInfo_28);
                    TypeInfo_28 = ((MR_Word) (conv1_TypeInfo_28));
                    mercury__term_conversion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_p_0(Context_11, TypeInfo_28, &SubTerm_29);
                    Var_71 = (MR_Word) ((MR_Unsigned) 0U);
                    Var_68 = (MR_Word) (&mercury__term_conversion_scalar_common_6[3]);
                    {
                      Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (SubTerm_29));
                      MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) (Var_71));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      *Term_12 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_68));
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_70));
                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Context_11));
                    }
                    succeeded = MR_TRUE;
                  }
                }
              }
              break;
            case (MR_Integer) 3:
              {
                // case "univ"
                ;
                {
                  MR_Word TypeCtorInfo_133_133;
                  MR_Word TypeInfo_134_134;
                  MR_Word NestedUniv_30;
                  MR_Word ValueTerm_31;
                  MR_Word TypeTerm_32;
                  MR_Box Var_56;
                  MR_Word Var_57;
                  MR_Word Var_58;
                  MR_Word Var_60;
                  MR_Word Var_61;
                  MR_Word Var_62;
                  MR_Word Var_64;
                  MR_Word Var_65;
                  MR_Word Var_66;
                  MR_Word Var_67;
                  MR_Box conv0_NestedUniv_30;

                  succeeded = (strcmp(TypeCtorName_8, (MR_String) "univ") == 0);
                  if (succeeded)
                  {
                    TypeCtorInfo_133_133 = (MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0);
                    mercury__univ__det_univ_to_type_2_p_0(TypeCtorInfo_133_133, Univ_10, &conv0_NestedUniv_30);
                    NestedUniv_30 = ((MR_Word) (conv0_NestedUniv_30));
                    Var_56 = mercury__univ__univ_value_1_f_0(&TypeInfo_134_134, NestedUniv_30);
                    mercury__term_conversion__type_to_term_2_p_0(TypeInfo_134_134, TypeInfo_for_T_118, Var_56, &ValueTerm_31);
                    Var_57 = mercury__univ__univ_type_1_f_0(NestedUniv_30);
                    mercury__term_conversion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_p_0(Context_11, Var_57, &TypeTerm_32);
                    Var_66 = (MR_Word) ((MR_Unsigned) 0U);
                    Var_67 = (MR_Word) ((MR_Unsigned) 0U);
                    Var_58 = (MR_Word) (&mercury__term_conversion_scalar_common_6[2]);
                    Var_62 = (MR_Word) (&mercury__term_conversion_scalar_common_6[1]);
                    {
                      Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (TypeTerm_32));
                      MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (Var_66));
                    }
                    {
                      Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (ValueTerm_31));
                      MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (Var_65));
                    }
                    {
                      Var_61 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_61, 0) = ((MR_Box) (Var_62));
                      MR_hl_field(MR_mktag(0), Var_61, 1) = ((MR_Box) (Var_64));
                      MR_hl_field(MR_mktag(0), Var_61, 2) = ((MR_Box) (Context_11));
                    }
                    {
                      Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (Var_61));
                      MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (Var_67));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      *Term_12 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_58));
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_60));
                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Context_11));
                    }
                    succeeded = MR_TRUE;
                  }
                }
              }
              break;
          }
          // jump out of search loop
          ;
          goto label_1;
        }
        else
        if ((result_3 < (MR_Integer) 0))
          hi_1 = (MR_Integer) ((MR_Unsigned) mid_2 - (MR_Unsigned) 1);
        else
          lo_0 = (MR_Integer) ((MR_Unsigned) mid_2 + (MR_Unsigned) 1);
      }
      while ((lo_0 <= hi_1));
      succeeded = MR_FALSE;
    label_1:;
    }
    else
    {
      MR_Word Var_148 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeArgs_9, (MR_Integer) 1))));
      MR_Word Var_149 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeArgs_9, (MR_Integer) 0))));

      succeeded = (Var_148 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        if ((strcmp(ModuleName_7, (MR_String) "array") == 0))
        {
          MR_Word TypeInfo_136_136;
          MR_Word TypeCtorInfo_137_137;
          MR_Word TypeInfo_138_138;
          MR_Word TypeCtorInfo_139_139;
          MR_Word TypeInfo_140_140;
          MR_Word List_37;
          MR_ArrayPtr Array_38;
          MR_Word ArgsTerm_39;
          MR_Word Var_50;
          MR_Word Var_52;
          MR_Word Var_53;
          MR_Box conv16_Array_38;

          succeeded = (strcmp(TypeCtorName_8, (MR_String) "array") == 0);
          if (succeeded)
          {
            mercury__type_desc__has_type_2_p_0(&TypeInfo_136_136, Var_149);
            TypeCtorInfo_137_137 = (MR_Word) (&mercury__list__list__type_ctor_info_list_1);
            TypeCtorInfo_139_139 = (MR_Word) (&mercury__array__array__type_ctor_info_array_1);
            {
              TypeInfo_138_138 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), TypeInfo_138_138, 0) = ((MR_Box) (TypeCtorInfo_137_137));
              MR_hl_field(MR_mktag(0), TypeInfo_138_138, 1) = ((MR_Box) (TypeInfo_136_136));
            }
            {
              TypeInfo_140_140 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), TypeInfo_140_140, 0) = ((MR_Box) (TypeCtorInfo_139_139));
              MR_hl_field(MR_mktag(0), TypeInfo_140_140, 1) = ((MR_Box) (TypeInfo_136_136));
            }
            mercury__univ__det_univ_to_type_2_p_0(TypeInfo_140_140, Univ_10, &conv16_Array_38);
            Array_38 = ((MR_ArrayPtr) (conv16_Array_38));
            mercury__array__to_list_2_p_0(TypeInfo_136_136, (MR_ArrayPtr) (Array_38), &List_37);
            mercury__term_conversion__type_to_term_2_p_0(TypeInfo_138_138, TypeInfo_for_T_118, ((MR_Box) (List_37)), &ArgsTerm_39);
            Var_53 = (MR_Word) ((MR_Unsigned) 0U);
            Var_50 = (MR_Word) (&mercury__term_conversion_scalar_common_6[4]);
            {
              Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (ArgsTerm_39));
              MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (Var_53));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              *Term_12 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_50));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_52));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Context_11));
            }
            succeeded = MR_TRUE;
          }
        }
        else
        if ((strcmp(ModuleName_7, (MR_String) "version_array") == 0))
        {
          MR_Word TypeInfo_141_141;
          MR_Word TypeCtorInfo_142_142;
          MR_Word TypeInfo_143_143;
          MR_Word TypeCtorInfo_144_144;
          MR_Word TypeInfo_145_145;
          MR_Word Var_43;
          MR_Word Var_45;
          MR_Word Var_46;
          MR_Word List_115;
          MR_Box Array_116;
          MR_Word ArgsTerm_117;
          MR_Box conv17_Array_116;

          succeeded = (strcmp(TypeCtorName_8, (MR_String) "version_array") == 0);
          if (succeeded)
          {
            mercury__type_desc__has_type_2_p_0(&TypeInfo_141_141, Var_149);
            TypeCtorInfo_142_142 = (MR_Word) (&mercury__list__list__type_ctor_info_list_1);
            TypeCtorInfo_144_144 = (MR_Word) (&mercury__version_array__version_array__type_ctor_info_version_array_1);
            {
              TypeInfo_143_143 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), TypeInfo_143_143, 0) = ((MR_Box) (TypeCtorInfo_142_142));
              MR_hl_field(MR_mktag(0), TypeInfo_143_143, 1) = ((MR_Box) (TypeInfo_141_141));
            }
            {
              TypeInfo_145_145 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), TypeInfo_145_145, 0) = ((MR_Box) (TypeCtorInfo_144_144));
              MR_hl_field(MR_mktag(0), TypeInfo_145_145, 1) = ((MR_Box) (TypeInfo_141_141));
            }
            mercury__univ__det_univ_to_type_2_p_0(TypeInfo_145_145, Univ_10, &conv17_Array_116);
            Array_116 = ((MR_Box) (conv17_Array_116));
            List_115 = mercury__version_array__to_list_1_f_0(TypeInfo_141_141, Array_116);
            mercury__term_conversion__type_to_term_2_p_0(TypeInfo_143_143, TypeInfo_for_T_118, ((MR_Box) (List_115)), &ArgsTerm_117);
            Var_46 = (MR_Word) ((MR_Unsigned) 0U);
            Var_43 = (MR_Word) (&mercury__term_conversion_scalar_common_6[5]);
            {
              Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (ArgsTerm_117));
              MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (Var_46));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              *Term_12 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_43));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_45));
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
  MR_Word TypeInfo_27_27,
  MR_Word Univ_3,
  MR_Word * Term_4)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_6_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Univ_3, (MR_Integer) 0))));
    MR_Word Type_6;
    MR_Integer Var_7;

{
#define MR_PROC_LABEL mercury__term_conversion__univ_to_term_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  TypeInfo_6_35 ;
		{
{
    TypeInfo = TypeInfo_for_T;

    // We used to collapse equivalences for efficiency here, but that is not
    // always desirable, due to the reverse mode of make_type/2, and efficiency
    // of type_infos probably isn't very important anyway.
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
      MR_Word TypeInfo_28_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Univ_3, (MR_Integer) 0))));
      MR_String FunctorString_8;
      MR_Word FunctorArgs_10;
      MR_Word TermArgs_11;
      MR_Box Var_18 = (MR_hl_field(MR_mktag(0), Univ_3, (MR_Integer) 1));
      MR_Word Var_20;
      MR_Integer _FunctorArity_9;

      mercury__deconstruct__deconstruct_5_p_1(TypeInfo_28_28, Var_18, (MR_Integer) 1, &FunctorString_8, &_FunctorArity_9, &FunctorArgs_10);
      mercury__term_conversion__univ_list_to_term_list_2_p_0(TypeInfo_27_27, FunctorArgs_10, &TermArgs_11);
      {
        Var_20 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (FunctorString_8));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        *Term_4 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_20));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (TermArgs_11));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (&mercury__term_conversion_scalar_common_1[1]));
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

        // We cast away the const-ness of the module and type names,
        // because MR_String is defined as char *, not const char *.

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

        // We cast away the const-ness of the module and type names,
        // because MR_String is defined as char *, not const char *.

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
      succeeded = mercury__term_conversion__univ_to_term_special_case_6_p_0(TypeInfo_27_27, ModuleName_14, TypeCtorName_15, TypeArgs_13, Univ_3, (MR_Word) (&mercury__term_conversion_scalar_common_1[1]), &SpecialCaseTerm_16);
      if (succeeded)
        *Term_4 = SpecialCaseTerm_16;
      else
      {
        MR_Word TypeInfo_6_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Univ_3, (MR_Integer) 0))));
        MR_String Message_17;
        MR_String Var_22;
        MR_String Var_23;
        MR_Word Var_24;

{
#define MR_PROC_LABEL mercury__term_conversion__univ_to_term_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  TypeInfo_6_50 ;
		{
{
    TypeInfo = TypeInfo_for_T;

    // We used to collapse equivalences for efficiency here, but that is not
    // always desirable, due to the reverse mode of make_type/2, and efficiency
    // of type_infos probably isn't very important anyway.
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
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140term_conversion.univ_to_term\'/2", Message_17);
          return;
        }
      }
    }
  }
}

static void MR_CALL 
mercury__term_conversion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_55_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_3_p_in__list_0(
  MR_Word Var_15,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word V_6_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word V_7_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word V_8_8;
    MR_Word V_9_9;

    mercury__term_conversion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_p_0(Var_15, V_6_6, &V_8_8);
    mercury__term_conversion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_55_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_3_p_in__list_0(Var_15, V_7_7, &V_9_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
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

        // We cast away the const-ness of the module and type names,
        // because MR_String is defined as char *, not const char *.

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

        // We cast away the const-ness of the module and type names,
        // because MR_String is defined as char *, not const char *.

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
    mercury__term_conversion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_55_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_3_p_in__list_0(Context_4, ArgTypes_8, &ArgTerms_11);
    succeeded = (strcmp(ModuleName_10, (MR_String) "builtin") == 0);
    if (succeeded)
    {
      MR_Word Var_15;

      {
        Var_15 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (TypeName_9));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
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
      MR_Word Var_18;
      MR_Word Var_21;
      MR_Word Var_22;

      {
        Var_16 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (ModuleName_10));
      }
      {
        Arg1_12 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Arg1_12, 0) = ((MR_Box) (Var_16));
        MR_hl_field(MR_mktag(0), Arg1_12, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Arg1_12, 2) = ((MR_Box) (Context_4));
      }
      {
        Var_18 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (TypeName_9));
      }
      {
        Arg2_13 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Arg2_13, 0) = ((MR_Box) (Var_18));
        MR_hl_field(MR_mktag(0), Arg2_13, 1) = ((MR_Box) (ArgTerms_11));
        MR_hl_field(MR_mktag(0), Arg2_13, 2) = ((MR_Box) (Context_4));
      }
      {
        Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (Arg2_13));
        MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (Arg1_12));
        MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (Var_22));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        *Term_6 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&mercury__term_conversion_scalar_common_6[1]));
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
  MR_Word TypeInfo_17_17,
  MR_Word TypeInfo_for_T_18,
  MR_Word Term_3,
  MR_Box * X_4)
{
  {
    MR_bool succeeded;
    MR_Box XPrime_5;
    MR_Word Var_21;

    mercury__term_conversion__try_term_to_type_2_p_0(TypeInfo_17_17, TypeInfo_for_T_18, Term_3, &Var_21);
    succeeded = ((MR_tag((MR_Word) Var_21)) == (MR_Integer) 0);
    if (succeeded)
    {
      XPrime_5 = (MR_hl_field(MR_mktag(0), Var_21, (MR_Integer) 0));
      *X_4 = XPrime_5;
    }
    else
    {
      MR_Word V_3_23;

      succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0);
      if (succeeded)
      {
        V_3_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 1))));
        succeeded = mercury__term__is_ground_list_1_p_0(TypeInfo_17_17, V_3_23);
      }
      succeeded = !(succeeded);
      if (succeeded)
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140term_conversion.det_term_to_type\'/2", (MR_String) "the term is not ground");
          return;
        }
      else
      {
        MR_String Message_6;
        MR_String Var_10;
        MR_String Var_12;
        MR_String Var_13;
        MR_Word Var_14;

{
#define MR_PROC_LABEL mercury__term_conversion__det_term_to_type_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  TypeInfo_for_T_18 ;
		{
{
    TypeInfo = TypeInfo_for_T;

    // We used to collapse equivalences for efficiency here, but that is not
    // always desirable, due to the reverse mode of make_type/2, and efficiency
    // of type_infos probably isn't very important anyway.
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}

		;}
#undef MR_PROC_LABEL
	 Var_14  = TypeInfo;
}
        Var_13 = mercury__type_desc__type_name_1_f_0(Var_14);
        mercury__string__append_3_p_2(Var_13, (MR_String) "\'", &Var_12);
        mercury__string__append_3_p_2((MR_String) " for type \140", Var_12, &Var_10);
        mercury__string__append_3_p_2((MR_String) "type error:\nthe term is not a valid term", Var_10, &Message_6);
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140term_conversion.det_term_to_type\'/2", Message_6);
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
    succeeded = ((MR_tag((MR_Word) Var_5)) == (MR_Integer) 0);
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

{
#define MR_PROC_LABEL mercury__term_conversion__try_term_to_type_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  TypeInfo_for_T_12 ;
		{
{
    TypeInfo = TypeInfo_for_T;

    // We used to collapse equivalences for efficiency here, but that is not
    // always desirable, due to the reverse mode of make_type/2, and efficiency
    // of type_infos probably isn't very important anyway.
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
    mercury__term_conversion__try_term_to_univ_2_4_p_0(TypeInfo_for_U_11, Term_3, Var_10, (MR_Word) ((MR_Unsigned) 0U), &UnivResult_6);
    if (((MR_tag((MR_Word) UnivResult_6)) == (MR_Integer) 1))
      *Result_4 = UnivResult_6;
    else
    {
      MR_Word Univ_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnivResult_6, (MR_Integer) 0))));
      MR_Box Val_8;

      mercury__univ__det_univ_to_type_2_p_0(TypeInfo_for_T_12, Univ_7, &Val_8);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
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

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      succeeded = (HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        *HeadVar__7_7 = (MR_Word) (&mercury__term_conversion_scalar_common_6[0]);
        succeeded = MR_TRUE;
      }
    }
    else
    {
      MR_Word ArgTerm_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgTerms_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Type_15;
      MR_Word Types_16;
      MR_Word ArgContext_22;
      MR_Word NewContext_23;
      MR_Word ArgResult_24;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Type_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        Types_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        {
          ArgContext_22 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ArgContext_22, 0) = ((MR_Box) (Functor_3));
          MR_hl_field(MR_mktag(0), ArgContext_22, 1) = ((MR_Box) (ArgNum_4));
          MR_hl_field(MR_mktag(0), ArgContext_22, 2) = ((MR_Box) (TermContext_6));
        }
        {
          NewContext_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), NewContext_23, 0) = ((MR_Box) (ArgContext_22));
          MR_hl_field(MR_mktag(1), NewContext_23, 1) = ((MR_Box) (PrevContext_5));
        }
        mercury__term_conversion__try_term_to_univ_2_4_p_0(TypeInfo_for_T_33, ArgTerm_13, Type_15, NewContext_23, &ArgResult_24);
        if (((MR_tag((MR_Word) ArgResult_24)) == (MR_Integer) 1))
        {
          *HeadVar__7_7 = (MR_Word) (ArgResult_24);
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Word Arg_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgResult_24, (MR_Integer) 0))));
          MR_Word RestResult_26;
          MR_Integer Var_29 = (MR_Integer) ((MR_Unsigned) ArgNum_4 + (MR_Unsigned) 1);

          succeeded = mercury__term_conversion__term_list_to_univ_list_7_p_0(TypeInfo_for_T_33, ArgTerms_14, Types_16, Functor_3, Var_29, PrevContext_5, TermContext_6, &RestResult_26);
          if (succeeded)
          {
            if (((MR_tag((MR_Word) RestResult_26)) == (MR_Integer) 1))
              *HeadVar__7_7 = RestResult_26;
            else
            {
              MR_Word Rest_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RestResult_26, (MR_Integer) 0))));
              MR_Word Var_31;

              {
                Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Arg_25));
                MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Rest_27));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
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
  MR_Word TypeInfo_for_T_255,
  MR_String ModuleName_7,
  MR_String TypeCtorName_8,
  MR_Word TypeArgs_9,
  MR_Word Term_10,
  MR_Word PrevContext_11,
  MR_Word * Result_12)
{
  {
    MR_bool succeeded;
    MR_Word Var_310 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_10, (MR_Integer) 2))));
    MR_Word Var_311 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_10, (MR_Integer) 1))));
    MR_Word Var_312 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_10, (MR_Integer) 0))));

    if ((TypeArgs_9 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((strcmp(ModuleName_7, (MR_String) "univ") == 0))
      {
        MR_Word TypeCtorInfo_296_296;
        MR_Word ArgTerm_46;
        MR_Word ValueTerm_48;
        MR_Word TypeTerm_49;
        MR_String Var_66;
        MR_Word Var_68;
        MR_Word Var_69;
        MR_String Var_70;
        MR_Word Var_71;
        MR_Word Var_72;
        MR_Word Var_73;
        MR_Word Var_114;
        MR_Word Univ_242;
        MR_Word Var_305;
        MR_Word Var_306;
        MR_String Var_313;
        MR_Integer slot_0;
        MR_String str_1;

        succeeded = (strcmp(TypeCtorName_8, (MR_String) "univ") == 0);
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) Var_312)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_66 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_312, (MR_Integer) 0))));
            succeeded = (strcmp(Var_66, (MR_String) "univ") == 0);
            if (succeeded)
            {
              succeeded = (Var_311 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                ArgTerm_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_311, (MR_Integer) 0))));
                Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_311, (MR_Integer) 1))));
                succeeded = (Var_68 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) ArgTerm_46)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgTerm_46, (MR_Integer) 0))));
                    Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgTerm_46, (MR_Integer) 1))));
                    succeeded = ((MR_tag((MR_Word) Var_69)) == (MR_Integer) 0);
                    if (succeeded)
                    {
                      Var_70 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_69, (MR_Integer) 0))));
                      succeeded = (strcmp(Var_70, (MR_String) ":") == 0);
                      if (succeeded)
                      {
                        succeeded = (Var_71 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          ValueTerm_48 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_71, (MR_Integer) 0))));
                          Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_71, (MR_Integer) 1))));
                          succeeded = (Var_72 != (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            TypeTerm_49 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_72, (MR_Integer) 0))));
                            Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_72, (MR_Integer) 1))));
                            succeeded = (Var_73 == (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              succeeded = ((MR_tag((MR_Word) TypeTerm_49)) == (MR_Integer) 0);
                              if (succeeded)
                              {
                                Var_306 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeTerm_49, (MR_Integer) 0))));
                                Var_305 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeTerm_49, (MR_Integer) 1))));
                                succeeded = (Var_305 == (MR_Word) ((MR_Unsigned) 0U));
                                if (succeeded)
                                {
                                  succeeded = ((MR_tag((MR_Word) Var_306)) == (MR_Integer) 0);
                                  if (succeeded)
                                  {
                                    Var_313 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_306, (MR_Integer) 0))));
                                    // hashed string jump switch
                                    ;
                                    // compute the hash value of the input string
                                    ;
                                    slot_0 = ((MR_hash_string6(Var_313)) & (MR_Integer) 63);
                                    // no collisions; no hash chain loop
                                    ;
                                    // lookup the string for this hash slot
                                    ;
                                    str_1 = ((&mercury__term_conversion_vector_common_5[0 + slot_0]))->mercury__term_conversion__vector_common_type_5_0__vct_5_f_0;
                                    // did we find a match?
                                    ;
                                    if ((((str_1 != NULL)) && ((strcmp(str_1, Var_313) == 0))))
                                    {
                                      // we found a match; dispatch to the corresponding code
                                      ;
                                      switch (slot_0) {
                                        default: /*NOTREACHED*/ MR_assert(0);
                                        case (MR_Integer) 1:
                                          {
                                            // case "string"
                                            ;
                                            {
                                              MR_Word TypeCtorInfo_294_294;
                                              MR_Word Var_82;
                                              MR_Word Var_83;
                                              MR_String String_228;

                                              succeeded = ((MR_tag((MR_Word) ValueTerm_48)) == (MR_Integer) 0);
                                              if (succeeded)
                                              {
                                                Var_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ValueTerm_48, (MR_Integer) 0))));
                                                Var_83 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ValueTerm_48, (MR_Integer) 1))));
                                                succeeded = ((MR_tag((MR_Word) Var_82)) == (MR_Integer) 2);
                                                if (succeeded)
                                                {
                                                  String_228 = ((MR_String) ((MR_hl_field(MR_mktag(2), Var_82, (MR_Integer) 0))));
                                                  succeeded = (Var_83 == (MR_Word) ((MR_Unsigned) 0U));
                                                  if (succeeded)
                                                  {
                                                    TypeCtorInfo_294_294 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0);
                                                    Univ_242 = mercury__univ__univ_1_f_0(TypeCtorInfo_294_294, ((MR_Box) (String_228)));
                                                    succeeded = MR_TRUE;
                                                  }
                                                }
                                              }
                                            }
                                          }
                                          break;
                                        case (MR_Integer) 3:
                                          {
                                            // case "uint32"
                                            ;
                                            {
                                              MR_Word TypeCtorInfo_291_291;
                                              uint32_t UInt32_225;

                                              succeeded = mercury__term__term_to_uint32_2_p_0(TypeInfo_for_T_255, ValueTerm_48, &UInt32_225);
                                              if (succeeded)
                                              {
                                                TypeCtorInfo_291_291 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint32_0);
                                                Univ_242 = mercury__univ__univ_1_f_0(TypeCtorInfo_291_291, ((MR_Box) (MR_Word) (UInt32_225)));
                                                succeeded = MR_TRUE;
                                              }
                                            }
                                          }
                                          break;
                                        case (MR_Integer) 7:
                                          {
                                            // case "int16"
                                            ;
                                            {
                                              MR_Word TypeCtorInfo_288_288;
                                              int16_t Int16_222;

                                              succeeded = mercury__term__term_to_int16_2_p_0(TypeInfo_for_T_255, ValueTerm_48, &Int16_222);
                                              if (succeeded)
                                              {
                                                TypeCtorInfo_288_288 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int16_0);
                                                Univ_242 = mercury__univ__univ_1_f_0(TypeCtorInfo_288_288, ((MR_Box) (MR_Word) (Int16_222)));
                                                succeeded = MR_TRUE;
                                              }
                                            }
                                          }
                                          break;
                                        case (MR_Integer) 8:
                                          {
                                            // case "int"
                                            ;
                                            {
                                              MR_Word TypeCtorInfo_284_284;
                                              MR_Integer Int_218;

                                              succeeded = mercury__term__term_to_int_2_p_0(TypeInfo_for_T_255, ValueTerm_48, &Int_218);
                                              if (succeeded)
                                              {
                                                TypeCtorInfo_284_284 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0);
                                                Univ_242 = mercury__univ__univ_1_f_0(TypeCtorInfo_284_284, ((MR_Box) (Int_218)));
                                                succeeded = MR_TRUE;
                                              }
                                            }
                                          }
                                          break;
                                        case (MR_Integer) 13:
                                          {
                                            // case "uint8"
                                            ;
                                            {
                                              MR_Word TypeCtorInfo_287_287;
                                              uint8_t UInt8_221;

                                              succeeded = mercury__term__term_to_uint8_2_p_0(TypeInfo_for_T_255, ValueTerm_48, &UInt8_221);
                                              if (succeeded)
                                              {
                                                TypeCtorInfo_287_287 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint8_0);
                                                Univ_242 = mercury__univ__univ_1_f_0(TypeCtorInfo_287_287, ((MR_Box) (MR_Word) (UInt8_221)));
                                                succeeded = MR_TRUE;
                                              }
                                            }
                                          }
                                          break;
                                        case (MR_Integer) 20:
                                          {
                                            // case "uint"
                                            ;
                                            {
                                              MR_Word TypeCtorInfo_285_285;
                                              MR_Unsigned UInt_219;

                                              succeeded = mercury__term__term_to_uint_2_p_0(TypeInfo_for_T_255, ValueTerm_48, &UInt_219);
                                              if (succeeded)
                                              {
                                                TypeCtorInfo_285_285 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0);
                                                Univ_242 = mercury__univ__univ_1_f_0(TypeCtorInfo_285_285, ((MR_Box) (UInt_219)));
                                                succeeded = MR_TRUE;
                                              }
                                            }
                                          }
                                          break;
                                        case (MR_Integer) 23:
                                          {
                                            // case "int8"
                                            ;
                                            {
                                              MR_Word TypeCtorInfo_286_286;
                                              int8_t Int8_220;

                                              succeeded = mercury__term__term_to_int8_2_p_0(TypeInfo_for_T_255, ValueTerm_48, &Int8_220);
                                              if (succeeded)
                                              {
                                                TypeCtorInfo_286_286 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int8_0);
                                                Univ_242 = mercury__univ__univ_1_f_0(TypeCtorInfo_286_286, ((MR_Box) (MR_Word) (Int8_220)));
                                                succeeded = MR_TRUE;
                                              }
                                            }
                                          }
                                          break;
                                        case (MR_Integer) 28:
                                          {
                                            // case "uint64"
                                            ;
                                            {
                                              MR_Word TypeCtorInfo_293_293;
                                              uint64_t UInt64_227;

                                              succeeded = mercury__term__term_to_uint64_2_p_0(TypeInfo_for_T_255, ValueTerm_48, &UInt64_227);
                                              if (succeeded)
                                              {
                                                TypeCtorInfo_293_293 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint64_0);
                                                Univ_242 = mercury__univ__univ_1_f_0(TypeCtorInfo_293_293, MR_box_uint64(UInt64_227));
                                                succeeded = MR_TRUE;
                                              }
                                            }
                                          }
                                          break;
                                        case (MR_Integer) 33:
                                          {
                                            // case "uint16"
                                            ;
                                            {
                                              MR_Word TypeCtorInfo_289_289;
                                              uint16_t UInt16_223;

                                              succeeded = mercury__term__term_to_uint16_2_p_0(TypeInfo_for_T_255, ValueTerm_48, &UInt16_223);
                                              if (succeeded)
                                              {
                                                TypeCtorInfo_289_289 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint16_0);
                                                Univ_242 = mercury__univ__univ_1_f_0(TypeCtorInfo_289_289, ((MR_Box) (MR_Word) (UInt16_223)));
                                                succeeded = MR_TRUE;
                                              }
                                            }
                                          }
                                          break;
                                        case (MR_Integer) 35:
                                          {
                                            // case "float"
                                            ;
                                            {
                                              MR_Word TypeCtorInfo_295_295;
                                              MR_Word Var_77;
                                              MR_Word Var_78;
                                              MR_Float Float_229;

                                              succeeded = ((MR_tag((MR_Word) ValueTerm_48)) == (MR_Integer) 0);
                                              if (succeeded)
                                              {
                                                Var_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ValueTerm_48, (MR_Integer) 0))));
                                                Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ValueTerm_48, (MR_Integer) 1))));
                                                succeeded = ((((MR_tag((MR_Word) Var_77)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_77, (MR_Integer) 0)))) == (MR_Integer) 0)));
                                                if (succeeded)
                                                {
                                                  Float_229 = MR_unbox_float((MR_hl_field(MR_mktag(3), Var_77, (MR_Integer) 1)));
                                                  succeeded = (Var_78 == (MR_Word) ((MR_Unsigned) 0U));
                                                  if (succeeded)
                                                  {
                                                    TypeCtorInfo_295_295 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_float_0);
                                                    Univ_242 = mercury__univ__univ_1_f_0(TypeCtorInfo_295_295, MR_box_float(Float_229));
                                                    succeeded = MR_TRUE;
                                                  }
                                                }
                                              }
                                            }
                                          }
                                          break;
                                        case (MR_Integer) 37:
                                          {
                                            // case "int32"
                                            ;
                                            {
                                              MR_Word TypeCtorInfo_290_290;
                                              int32_t Int32_224;

                                              succeeded = mercury__term__term_to_int32_2_p_0(TypeInfo_for_T_255, ValueTerm_48, &Int32_224);
                                              if (succeeded)
                                              {
                                                TypeCtorInfo_290_290 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int32_0);
                                                Univ_242 = mercury__univ__univ_1_f_0(TypeCtorInfo_290_290, ((MR_Box) (MR_Word) (Int32_224)));
                                                succeeded = MR_TRUE;
                                              }
                                            }
                                          }
                                          break;
                                        case (MR_Integer) 48:
                                          {
                                            // case "int64"
                                            ;
                                            {
                                              MR_Word TypeCtorInfo_292_292;
                                              int64_t Int64_226;

                                              succeeded = mercury__term__term_to_int64_2_p_0(TypeInfo_for_T_255, ValueTerm_48, &Int64_226);
                                              if (succeeded)
                                              {
                                                TypeCtorInfo_292_292 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int64_0);
                                                Univ_242 = mercury__univ__univ_1_f_0(TypeCtorInfo_292_292, MR_box_int64(Int64_226));
                                                succeeded = MR_TRUE;
                                              }
                                            }
                                          }
                                          break;
                                      }
                                      // jump out of search loop
                                      ;
                                      goto label_0;
                                    }
                                    succeeded = MR_FALSE;
                                  label_0:;
                                    if (succeeded)
                                    {
                                      TypeCtorInfo_296_296 = (MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0);
                                      Var_114 = mercury__univ__univ_1_f_0(TypeCtorInfo_296_296, ((MR_Box) (Univ_242)));
                                      {
                                        MR_Word base;
                                        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                                        *Result_12 = base;
                                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_114));
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
        MR_Word TypeCtorInfo_269_269;
        MR_Box Var_143;
        MR_Word Univ_193;
        MR_String String_194;

        succeeded = (strcmp(TypeCtorName_8, (MR_String) "bitmap") == 0);
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) Var_312)) == (MR_Integer) 2);
          if (succeeded)
          {
            String_194 = ((MR_String) ((MR_hl_field(MR_mktag(2), Var_312, (MR_Integer) 0))));
            succeeded = (Var_311 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              succeeded = mercury__bitmap__from_string_1_f_0(String_194, &Var_143);
              if (succeeded)
              {
                TypeCtorInfo_269_269 = (MR_Word) (&mercury__bitmap__bitmap__type_ctor_info_bitmap_0);
                mercury__univ__type_to_univ_2_p_1(TypeCtorInfo_269_269, ((MR_Box) (Var_143)), &Univ_193);
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *Result_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Univ_193));
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
        MR_Integer slot_2;
        MR_String str_3;

        succeeded = (Var_311 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          // hashed string jump switch
          ;
          // compute the hash value of the input string
          ;
          slot_2 = ((MR_hash_string6(TypeCtorName_8)) & (MR_Integer) 63);
          // no collisions; no hash chain loop
          ;
          // lookup the string for this hash slot
          ;
          str_3 = ((&mercury__term_conversion_vector_common_5[64 + slot_2]))->mercury__term_conversion__vector_common_type_5_0__vct_5_f_0;
          // did we find a match?
          ;
          if ((((str_3 != NULL)) && ((strcmp(str_3, TypeCtorName_8) == 0))))
          {
            // we found a match; dispatch to the corresponding code
            ;
            switch (slot_2) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  // case "string"
                  ;
                  {
                    MR_Word TypeCtorInfo_257_257;
                    MR_String String_18;

                    succeeded = ((MR_tag((MR_Word) Var_312)) == (MR_Integer) 2);
                    if (succeeded)
                    {
                      String_18 = ((MR_String) ((MR_hl_field(MR_mktag(2), Var_312, (MR_Integer) 0))));
                      TypeCtorInfo_257_257 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0);
                      mercury__univ__type_to_univ_2_p_1(TypeCtorInfo_257_257, ((MR_Box) (String_18)), &Univ_17);
                      succeeded = MR_TRUE;
                    }
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  // case "uint32"
                  ;
                  {
                    MR_Word TypeCtorInfo_265_265;
                    uint32_t UInt32_28;
                    MR_Word Var_149;
                    MR_Word Var_150;
                    MR_Word Integer_186;

                    succeeded = ((MR_tag((MR_Word) Var_312)) == (MR_Integer) 1);
                    if (succeeded)
                    {
                      Integer_186 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_312, (MR_Integer) 1))));
                      Var_149 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Var_312, (MR_Integer) 2))) >> 3)) & (MR_Integer) 1);
                      Var_150 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Var_312, (MR_Integer) 2))) & (MR_Integer) 7);
                      succeeded = (Var_149 == (MR_Integer) 1);
                      if (succeeded)
                      {
                        succeeded = (Var_150 == (MR_Integer) 3);
                        if (succeeded)
                        {
                          succeeded = mercury__integer__to_uint32_2_p_0(Integer_186, &UInt32_28);
                          if (succeeded)
                          {
                            TypeCtorInfo_265_265 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint32_0);
                            mercury__univ__type_to_univ_2_p_1(TypeCtorInfo_265_265, ((MR_Box) (MR_Word) (UInt32_28)), &Univ_17);
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                    }
                  }
                }
                break;
              case (MR_Integer) 4:
                {
                  // case "character"
                  ;
                  {
                    MR_Word TypeCtorInfo_256_256;
                    MR_String FunctorName_15;
                    MR_Char Char_16;
                    MR_String Var_165;

                    succeeded = ((MR_tag((MR_Word) Var_312)) == (MR_Integer) 0);
                    if (succeeded)
                    {
                      FunctorName_15 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_312, (MR_Integer) 0))));
                      Var_165 = (MR_String) "";
                      succeeded = mercury__string__first_char_3_p_1(FunctorName_15, &Char_16, Var_165);
                      if (succeeded)
                      {
                        TypeCtorInfo_256_256 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0);
                        mercury__univ__type_to_univ_2_p_0(TypeCtorInfo_256_256, ((MR_Box) (MR_Word) (Char_16)), &Univ_17);
                        succeeded = MR_TRUE;
                      }
                    }
                  }
                }
                break;
              case (MR_Integer) 7:
                {
                  // case "int16"
                  ;
                  {
                    MR_Word TypeCtorInfo_262_262;
                    int16_t Int16_25;
                    MR_Word Var_155;
                    MR_Word Var_156;
                    MR_Word Integer_177;

                    succeeded = ((MR_tag((MR_Word) Var_312)) == (MR_Integer) 1);
                    if (succeeded)
                    {
                      Integer_177 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_312, (MR_Integer) 1))));
                      Var_155 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Var_312, (MR_Integer) 2))) >> 3)) & (MR_Integer) 1);
                      Var_156 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Var_312, (MR_Integer) 2))) & (MR_Integer) 7);
                      succeeded = (Var_155 == (MR_Integer) 0);
                      if (succeeded)
                      {
                        succeeded = (Var_156 == (MR_Integer) 2);
                        if (succeeded)
                        {
                          succeeded = mercury__integer__to_int16_2_p_0(Integer_177, &Int16_25);
                          if (succeeded)
                          {
                            TypeCtorInfo_262_262 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int16_0);
                            mercury__univ__type_to_univ_2_p_1(TypeCtorInfo_262_262, ((MR_Box) (MR_Word) (Int16_25)), &Univ_17);
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                    }
                  }
                }
                break;
              case (MR_Integer) 8:
                {
                  // case "int"
                  ;
                  {
                    MR_Word TypeCtorInfo_258_258;
                    MR_Word Integer_20;
                    MR_Integer Int_21;
                    MR_Word Var_163;
                    MR_Word Var_164;

                    succeeded = ((MR_tag((MR_Word) Var_312)) == (MR_Integer) 1);
                    if (succeeded)
                    {
                      Integer_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_312, (MR_Integer) 1))));
                      Var_163 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Var_312, (MR_Integer) 2))) >> 3)) & (MR_Integer) 1);
                      Var_164 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Var_312, (MR_Integer) 2))) & (MR_Integer) 7);
                      succeeded = (Var_163 == (MR_Integer) 0);
                      if (succeeded)
                      {
                        succeeded = (Var_164 == (MR_Integer) 0);
                        if (succeeded)
                        {
                          succeeded = mercury__integer__to_int_2_p_0(Integer_20, &Int_21);
                          if (succeeded)
                          {
                            TypeCtorInfo_258_258 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0);
                            mercury__univ__type_to_univ_2_p_1(TypeCtorInfo_258_258, ((MR_Box) (Int_21)), &Univ_17);
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                    }
                  }
                }
                break;
              case (MR_Integer) 13:
                {
                  // case "uint8"
                  ;
                  {
                    MR_Word TypeCtorInfo_261_261;
                    uint8_t UInt8_24;
                    MR_Word Var_157;
                    MR_Word Var_158;
                    MR_Word Integer_174;

                    succeeded = ((MR_tag((MR_Word) Var_312)) == (MR_Integer) 1);
                    if (succeeded)
                    {
                      Integer_174 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_312, (MR_Integer) 1))));
                      Var_157 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Var_312, (MR_Integer) 2))) >> 3)) & (MR_Integer) 1);
                      Var_158 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Var_312, (MR_Integer) 2))) & (MR_Integer) 7);
                      succeeded = (Var_157 == (MR_Integer) 1);
                      if (succeeded)
                      {
                        succeeded = (Var_158 == (MR_Integer) 1);
                        if (succeeded)
                        {
                          succeeded = mercury__integer__to_uint8_2_p_0(Integer_174, &UInt8_24);
                          if (succeeded)
                          {
                            TypeCtorInfo_261_261 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint8_0);
                            mercury__univ__type_to_univ_2_p_1(TypeCtorInfo_261_261, ((MR_Box) (MR_Word) (UInt8_24)), &Univ_17);
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                    }
                  }
                }
                break;
              case (MR_Integer) 20:
                {
                  // case "uint"
                  ;
                  {
                    MR_Word TypeCtorInfo_259_259;
                    MR_Unsigned UInt_22;
                    MR_Word Var_161;
                    MR_Word Var_162;
                    MR_Word Integer_168;

                    succeeded = ((MR_tag((MR_Word) Var_312)) == (MR_Integer) 1);
                    if (succeeded)
                    {
                      Integer_168 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_312, (MR_Integer) 1))));
                      Var_161 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Var_312, (MR_Integer) 2))) >> 3)) & (MR_Integer) 1);
                      Var_162 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Var_312, (MR_Integer) 2))) & (MR_Integer) 7);
                      succeeded = (Var_161 == (MR_Integer) 1);
                      if (succeeded)
                      {
                        succeeded = (Var_162 == (MR_Integer) 0);
                        if (succeeded)
                        {
                          succeeded = mercury__integer__to_uint_2_p_0(Integer_168, &UInt_22);
                          if (succeeded)
                          {
                            TypeCtorInfo_259_259 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0);
                            mercury__univ__type_to_univ_2_p_1(TypeCtorInfo_259_259, ((MR_Box) (UInt_22)), &Univ_17);
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                    }
                  }
                }
                break;
              case (MR_Integer) 23:
                {
                  // case "int8"
                  ;
                  {
                    MR_Word TypeCtorInfo_260_260;
                    int8_t Int8_23;
                    MR_Word Var_159;
                    MR_Word Var_160;
                    MR_Word Integer_171;

                    succeeded = ((MR_tag((MR_Word) Var_312)) == (MR_Integer) 1);
                    if (succeeded)
                    {
                      Integer_171 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_312, (MR_Integer) 1))));
                      Var_159 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Var_312, (MR_Integer) 2))) >> 3)) & (MR_Integer) 1);
                      Var_160 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Var_312, (MR_Integer) 2))) & (MR_Integer) 7);
                      succeeded = (Var_159 == (MR_Integer) 0);
                      if (succeeded)
                      {
                        succeeded = (Var_160 == (MR_Integer) 1);
                        if (succeeded)
                        {
                          succeeded = mercury__integer__to_int8_2_p_0(Integer_171, &Int8_23);
                          if (succeeded)
                          {
                            TypeCtorInfo_260_260 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int8_0);
                            mercury__univ__type_to_univ_2_p_1(TypeCtorInfo_260_260, ((MR_Box) (MR_Word) (Int8_23)), &Univ_17);
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                    }
                  }
                }
                break;
              case (MR_Integer) 28:
                {
                  // case "uint64"
                  ;
                  {
                    MR_Word TypeCtorInfo_267_267;
                    uint64_t UInt64_30;
                    MR_Word Var_145;
                    MR_Word Var_146;
                    MR_Word Integer_192;

                    succeeded = ((MR_tag((MR_Word) Var_312)) == (MR_Integer) 1);
                    if (succeeded)
                    {
                      Integer_192 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_312, (MR_Integer) 1))));
                      Var_145 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Var_312, (MR_Integer) 2))) >> 3)) & (MR_Integer) 1);
                      Var_146 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Var_312, (MR_Integer) 2))) & (MR_Integer) 7);
                      succeeded = (Var_145 == (MR_Integer) 1);
                      if (succeeded)
                      {
                        succeeded = (Var_146 == (MR_Integer) 4);
                        if (succeeded)
                        {
                          succeeded = mercury__integer__to_uint64_2_p_0(Integer_192, &UInt64_30);
                          if (succeeded)
                          {
                            TypeCtorInfo_267_267 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint64_0);
                            mercury__univ__type_to_univ_2_p_1(TypeCtorInfo_267_267, MR_box_uint64(UInt64_30), &Univ_17);
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                    }
                  }
                }
                break;
              case (MR_Integer) 33:
                {
                  // case "uint16"
                  ;
                  {
                    MR_Word TypeCtorInfo_263_263;
                    uint16_t UInt16_26;
                    MR_Word Var_153;
                    MR_Word Var_154;
                    MR_Word Integer_180;

                    succeeded = ((MR_tag((MR_Word) Var_312)) == (MR_Integer) 1);
                    if (succeeded)
                    {
                      Integer_180 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_312, (MR_Integer) 1))));
                      Var_153 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Var_312, (MR_Integer) 2))) >> 3)) & (MR_Integer) 1);
                      Var_154 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Var_312, (MR_Integer) 2))) & (MR_Integer) 7);
                      succeeded = (Var_153 == (MR_Integer) 1);
                      if (succeeded)
                      {
                        succeeded = (Var_154 == (MR_Integer) 2);
                        if (succeeded)
                        {
                          succeeded = mercury__integer__to_uint16_2_p_0(Integer_180, &UInt16_26);
                          if (succeeded)
                          {
                            TypeCtorInfo_263_263 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint16_0);
                            mercury__univ__type_to_univ_2_p_1(TypeCtorInfo_263_263, ((MR_Box) (MR_Word) (UInt16_26)), &Univ_17);
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                    }
                  }
                }
                break;
              case (MR_Integer) 35:
                {
                  // case "float"
                  ;
                  {
                    MR_Word TypeCtorInfo_268_268;
                    MR_Float Float_31;

                    succeeded = ((((MR_tag((MR_Word) Var_312)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_312, (MR_Integer) 0)))) == (MR_Integer) 0)));
                    if (succeeded)
                    {
                      Float_31 = MR_unbox_float((MR_hl_field(MR_mktag(3), Var_312, (MR_Integer) 1)));
                      TypeCtorInfo_268_268 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_float_0);
                      mercury__univ__type_to_univ_2_p_1(TypeCtorInfo_268_268, MR_box_float(Float_31), &Univ_17);
                      succeeded = MR_TRUE;
                    }
                  }
                }
                break;
              case (MR_Integer) 37:
                {
                  // case "int32"
                  ;
                  {
                    MR_Word TypeCtorInfo_264_264;
                    int32_t Int32_27;
                    MR_Word Var_151;
                    MR_Word Var_152;
                    MR_Word Integer_183;

                    succeeded = ((MR_tag((MR_Word) Var_312)) == (MR_Integer) 1);
                    if (succeeded)
                    {
                      Integer_183 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_312, (MR_Integer) 1))));
                      Var_151 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Var_312, (MR_Integer) 2))) >> 3)) & (MR_Integer) 1);
                      Var_152 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Var_312, (MR_Integer) 2))) & (MR_Integer) 7);
                      succeeded = (Var_151 == (MR_Integer) 0);
                      if (succeeded)
                      {
                        succeeded = (Var_152 == (MR_Integer) 3);
                        if (succeeded)
                        {
                          succeeded = mercury__integer__to_int32_2_p_0(Integer_183, &Int32_27);
                          if (succeeded)
                          {
                            TypeCtorInfo_264_264 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int32_0);
                            mercury__univ__type_to_univ_2_p_1(TypeCtorInfo_264_264, ((MR_Box) (MR_Word) (Int32_27)), &Univ_17);
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                    }
                  }
                }
                break;
              case (MR_Integer) 48:
                {
                  // case "int64"
                  ;
                  {
                    MR_Word TypeCtorInfo_266_266;
                    int64_t Int64_29;
                    MR_Word Var_147;
                    MR_Word Var_148;
                    MR_Word Integer_189;

                    succeeded = ((MR_tag((MR_Word) Var_312)) == (MR_Integer) 1);
                    if (succeeded)
                    {
                      Integer_189 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_312, (MR_Integer) 1))));
                      Var_147 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Var_312, (MR_Integer) 2))) >> 3)) & (MR_Integer) 1);
                      Var_148 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Var_312, (MR_Integer) 2))) & (MR_Integer) 7);
                      succeeded = (Var_147 == (MR_Integer) 0);
                      if (succeeded)
                      {
                        succeeded = (Var_148 == (MR_Integer) 4);
                        if (succeeded)
                        {
                          succeeded = mercury__integer__to_int64_2_p_0(Integer_189, &Int64_29);
                          if (succeeded)
                          {
                            TypeCtorInfo_266_266 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int64_0);
                            mercury__univ__type_to_univ_2_p_1(TypeCtorInfo_266_266, MR_box_int64(Int64_29), &Univ_17);
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                    }
                  }
                }
                break;
            }
            // jump out of search loop
            ;
            goto label_1;
          }
          succeeded = MR_FALSE;
        label_1:;
          if (succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
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
      MR_Word Var_302 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeArgs_9, (MR_Integer) 1))));
      MR_Word Var_303 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeArgs_9, (MR_Integer) 0))));
      MR_Word Var_314;
      MR_Word Var_315;
      MR_String Var_316;

      succeeded = (Var_302 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = (Var_311 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_315 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_311, (MR_Integer) 0))));
          Var_314 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_311, (MR_Integer) 1))));
          succeeded = ((MR_tag((MR_Word) Var_312)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_316 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_312, (MR_Integer) 0))));
            succeeded = (Var_314 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              if ((strcmp(ModuleName_7, (MR_String) "array") == 0))
              {
                MR_Word TypeInfo_270_270;
                MR_Word TypeCtorInfo_271_271;
                MR_Word TypeInfo_272_272;
                MR_Word ListType_37;
                MR_Word ArgContext_38;
                MR_Word NewContext_39;
                MR_Word ArgResult_40;
                MR_Integer Var_137;

                succeeded = (strcmp(TypeCtorName_8, (MR_String) "array") == 0);
                if (succeeded)
                {
                  succeeded = (strcmp(Var_316, (MR_String) "array") == 0);
                  if (succeeded)
                  {
                    mercury__type_desc__has_type_2_p_0(&TypeInfo_270_270, Var_303);
                    TypeCtorInfo_271_271 = (MR_Word) (&mercury__list__list__type_ctor_info_list_1);
                    {
                      TypeInfo_272_272 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), TypeInfo_272_272, 0) = ((MR_Box) (TypeCtorInfo_271_271));
                      MR_hl_field(MR_mktag(0), TypeInfo_272_272, 1) = ((MR_Box) (TypeInfo_270_270));
                    }
                    ListType_37 = mercury__type_desc__type_of_1_f_0(TypeInfo_272_272);
                    Var_137 = (MR_Integer) 1;
                    {
                      ArgContext_38 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), ArgContext_38, 0) = ((MR_Box) (Var_312));
                      MR_hl_field(MR_mktag(0), ArgContext_38, 1) = ((MR_Box) (Var_137));
                      MR_hl_field(MR_mktag(0), ArgContext_38, 2) = ((MR_Box) (Var_310));
                    }
                    {
                      NewContext_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), NewContext_39, 0) = ((MR_Box) (ArgContext_38));
                      MR_hl_field(MR_mktag(1), NewContext_39, 1) = ((MR_Box) (PrevContext_11));
                    }
                    mercury__term_conversion__try_term_to_univ_2_4_p_0(TypeInfo_for_T_255, Var_315, ListType_37, NewContext_39, &ArgResult_40);
                    if (((MR_tag((MR_Word) ArgResult_40)) == (MR_Integer) 1))
                      *Result_12 = ArgResult_40;
                    else
                    {
                      MR_Word TypeInfo_273_273;
                      MR_Word TypeInfo_274_274;
                      MR_Word TypeInfo_276_276;
                      MR_Word ListUniv_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgResult_40, (MR_Integer) 0))));
                      MR_Word List_43;
                      MR_ArrayPtr Array_44;
                      MR_Word Var_140;
                      MR_Box conv0_List_43;
                      MR_ArrayPtr conv1_Array_44;

                      mercury__type_desc__has_type_2_p_0(&TypeInfo_273_273, Var_303);
                      {
                        TypeInfo_274_274 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), TypeInfo_274_274, 0) = ((MR_Box) (TypeCtorInfo_271_271));
                        MR_hl_field(MR_mktag(0), TypeInfo_274_274, 1) = ((MR_Box) (TypeInfo_273_273));
                      }
                      mercury__univ__det_univ_to_type_2_p_0(TypeInfo_274_274, ListUniv_41, &conv0_List_43);
                      List_43 = ((MR_Word) (conv0_List_43));
                      conv1_Array_44 = mercury__array__array_1_f_0(TypeInfo_273_273, List_43);
                      Array_44 = (MR_ArrayPtr) (conv1_Array_44);
                      {
                        TypeInfo_276_276 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), TypeInfo_276_276, 0) = ((MR_Box) (&mercury__array__array__type_ctor_info_array_1));
                        MR_hl_field(MR_mktag(0), TypeInfo_276_276, 1) = ((MR_Box) (TypeInfo_273_273));
                      }
                      Var_140 = mercury__univ__univ_1_f_0(TypeInfo_276_276, ((MR_Box) (Array_44)));
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                        *Result_12 = base;
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_140));
                      }
                    }
                    succeeded = MR_TRUE;
                  }
                }
              }
              else
              if ((strcmp(ModuleName_7, (MR_String) "version_array") == 0))
              {
                MR_Word TypeInfo_277_277;
                MR_Word TypeCtorInfo_278_278;
                MR_Word TypeInfo_279_279;
                MR_Integer Var_124;
                MR_Word ListType_209;
                MR_Word ArgContext_210;
                MR_Word NewContext_211;
                MR_Word ArgResult_212;

                succeeded = (strcmp(TypeCtorName_8, (MR_String) "version_array") == 0);
                if (succeeded)
                {
                  succeeded = (strcmp(Var_316, (MR_String) "version_array") == 0);
                  if (succeeded)
                  {
                    mercury__type_desc__has_type_2_p_0(&TypeInfo_277_277, Var_303);
                    TypeCtorInfo_278_278 = (MR_Word) (&mercury__list__list__type_ctor_info_list_1);
                    {
                      TypeInfo_279_279 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), TypeInfo_279_279, 0) = ((MR_Box) (TypeCtorInfo_278_278));
                      MR_hl_field(MR_mktag(0), TypeInfo_279_279, 1) = ((MR_Box) (TypeInfo_277_277));
                    }
                    ListType_209 = mercury__type_desc__type_of_1_f_0(TypeInfo_279_279);
                    Var_124 = (MR_Integer) 1;
                    {
                      ArgContext_210 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), ArgContext_210, 0) = ((MR_Box) (Var_312));
                      MR_hl_field(MR_mktag(0), ArgContext_210, 1) = ((MR_Box) (Var_124));
                      MR_hl_field(MR_mktag(0), ArgContext_210, 2) = ((MR_Box) (Var_310));
                    }
                    {
                      NewContext_211 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), NewContext_211, 0) = ((MR_Box) (ArgContext_210));
                      MR_hl_field(MR_mktag(1), NewContext_211, 1) = ((MR_Box) (PrevContext_11));
                    }
                    mercury__term_conversion__try_term_to_univ_2_4_p_0(TypeInfo_for_T_255, Var_315, ListType_209, NewContext_211, &ArgResult_212);
                    if (((MR_tag((MR_Word) ArgResult_212)) == (MR_Integer) 1))
                      *Result_12 = ArgResult_212;
                    else
                    {
                      MR_Word TypeInfo_280_280;
                      MR_Word TypeInfo_281_281;
                      MR_Word TypeInfo_283_283;
                      MR_Word Var_127;
                      MR_Word ListUniv_195 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgResult_212, (MR_Integer) 0))));
                      MR_Word List_197;
                      MR_Box Array_198;
                      MR_Box conv2_List_197;

                      mercury__type_desc__has_type_2_p_0(&TypeInfo_280_280, Var_303);
                      {
                        TypeInfo_281_281 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), TypeInfo_281_281, 0) = ((MR_Box) (TypeCtorInfo_278_278));
                        MR_hl_field(MR_mktag(0), TypeInfo_281_281, 1) = ((MR_Box) (TypeInfo_280_280));
                      }
                      mercury__univ__det_univ_to_type_2_p_0(TypeInfo_281_281, ListUniv_195, &conv2_List_197);
                      List_197 = ((MR_Word) (conv2_List_197));
                      Array_198 = mercury__version_array__version_array_1_f_0(TypeInfo_280_280, List_197);
                      {
                        TypeInfo_283_283 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), TypeInfo_283_283, 0) = ((MR_Box) (&mercury__version_array__version_array__type_ctor_info_version_array_1));
                        MR_hl_field(MR_mktag(0), TypeInfo_283_283, 1) = ((MR_Box) (TypeInfo_280_280));
                      }
                      Var_127 = mercury__univ__univ_1_f_0(TypeInfo_283_283, ((MR_Box) (Array_198)));
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                        *Result_12 = base;
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_127));
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
  MR_Word TypeInfo_for_T_33,
  MR_Word Term_5,
  MR_Word Type_6,
  MR_Word Context_7,
  MR_Word * Result_8)
{
  {
    MR_bool succeeded;

    if (((MR_tag((MR_Word) Term_5)) == (MR_Integer) 0))
    {
      MR_Word Functor_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 0))));
      MR_Word ArgTerms_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 1))));
      MR_Word TermContext_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 2))));
      MR_Word SpecialCaseResult_18;
      MR_Word TypeCtor_14;
      MR_Word TypeArgs_15;
      MR_String ModuleName_16;
      MR_String TypeCtorName_17;
      MR_String V_5_39;
      MR_Integer V_6_40;
      MR_String V_5_43;
      MR_Integer V_6_44;

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

        // We cast away the const-ness of the module and type names,
        // because MR_String is defined as char *, not const char *.

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
	 V_5_39  = TypeCtorName;
	 V_6_40  = TypeCtorArity;
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

        // We cast away the const-ness of the module and type names,
        // because MR_String is defined as char *, not const char *.

        TypeCtorModuleName = (MR_String) (MR_Integer)
            MR_type_ctor_module_name(type_ctor_info);
        TypeCtorName = (MR_String) (MR_Integer)
            MR_type_ctor_name(type_ctor_info);
        TypeCtorArity = type_ctor_info->MR_type_ctor_arity;
    }
}

		;}
#undef MR_PROC_LABEL
	 V_5_43  = TypeCtorModuleName;
	 TypeCtorName_17  = TypeCtorName;
	 V_6_44  = TypeCtorArity;
}
      succeeded = mercury__term_conversion__term_to_univ_special_case_6_p_0(TypeInfo_for_T_33, ModuleName_16, TypeCtorName_17, TypeArgs_15, Term_5, Context_7, &SpecialCaseResult_18);
      if (succeeded)
        *Result_8 = SpecialCaseResult_18;
      else
      {
        MR_Integer FunctorNumber_21;
        MR_Word ArgsResult_23;
        MR_Word TypeCtorInfo_34_34;
        MR_Word TypeInfo_35_35;
        MR_String FunctorName_19;
        MR_Integer Arity_20;
        MR_Word ArgTypes_22;
        MR_Integer Var_28;
        MR_Integer V_5_47;
        MR_Integer V_11_53;

        succeeded = ((MR_tag((MR_Word) Functor_11)) == (MR_Integer) 0);
        if (succeeded)
        {
          FunctorName_19 = ((MR_String) ((MR_hl_field(MR_mktag(0), Functor_11, (MR_Integer) 0))));
          TypeCtorInfo_34_34 = (MR_Word) (&mercury__term__term__type_ctor_info_term_1);
          V_5_47 = (MR_Integer) 0;
          {
            TypeInfo_35_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TypeInfo_35_35, 0) = ((MR_Box) (TypeCtorInfo_34_34));
            MR_hl_field(MR_mktag(0), TypeInfo_35_35, 1) = ((MR_Box) (TypeInfo_for_T_33));
          }
          mercury__list__length_acc_3_p_0(TypeInfo_35_35, (MR_Word) (ArgTerms_12), V_5_47, &Arity_20);
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
	 V_11_53  = Functors;
	}
succeeded  = SUCCESS_INDICATOR;
}
          if (succeeded)
          {
            succeeded = mercury__construct__find_functor_2_6_p_0(Type_6, FunctorName_19, Arity_20, V_11_53, &FunctorNumber_21, &ArgTypes_22);
            if (succeeded)
            {
              Var_28 = (MR_Integer) 1;
              succeeded = mercury__term_conversion__term_list_to_univ_list_7_p_0(TypeInfo_for_T_33, ArgTerms_12, ArgTypes_22, Functor_11, Var_28, Context_7, TermContext_13, &ArgsResult_23);
            }
          }
        }
        if (succeeded)
          if (((MR_tag((MR_Word) ArgsResult_23)) == (MR_Integer) 1))
            *Result_8 = (MR_Word) (ArgsResult_23);
          else
          {
            MR_Word ArgValues_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgsResult_23, (MR_Integer) 0))));
            MR_Word Value_25;

            succeeded = mercury__construct__construct_3_f_0(Type_6, FunctorNumber_21, ArgValues_24, &Value_25);
            if (succeeded)
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *Result_8 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Value_25));
              }
            else
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140term_conversion.try_term_to_univ_2\'/4", (MR_String) "construct/3 failed");
                return;
              }
          }
        else
        {
          MR_Word RevContext_27;
          MR_Word Var_31;

          mercury__list__reverse_2_p_0((MR_Word) (&mercury__term_conversion__term_conversion__type_ctor_info_term_to_type_arg_context_0), Context_7, &RevContext_27);
          {
            Var_31 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (Term_5));
            MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (Type_6));
            MR_hl_field(MR_mktag(0), Var_31, 2) = ((MR_Box) (TermContext_13));
            MR_hl_field(MR_mktag(0), Var_31, 3) = ((MR_Box) (RevContext_27));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *Result_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_31));
          }
        }
      }
    }
    else
    {
      MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Term_5, (MR_Integer) 0))));
      MR_Word Var_32;

      {
        Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (Var_9));
        MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (Context_7));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_8 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_32));
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

    succeeded = mercury__term_conversion____Unify____term_to_type_arg_context_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
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

    mercury__term_conversion____Compare____term_to_type_arg_context_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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

    succeeded = mercury__term_conversion____Unify____term_to_type_context_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
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

    mercury__term_conversion____Compare____term_to_type_context_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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

    succeeded = mercury__term_conversion____Unify____term_to_type_error_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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

    mercury__term_conversion____Compare____term_to_type_error_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
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

    succeeded = mercury__term_conversion____Unify____term_to_type_result_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
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

    mercury__term_conversion____Compare____term_to_type_result_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)));
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

    succeeded = mercury__term_conversion____Unify____term_to_type_result_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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

    mercury__term_conversion____Compare____term_to_type_result_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
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

// :- end_module term_conversion.
