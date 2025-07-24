/*
** Automatically generated from `term_conversion.m'
** by the Mercury compiler,
** version rotd-2025-07-24
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
#include "counter.mih"
#include "deconstruct.mih"
#include "dir.mih"
#include "enum.mih"
#include "exception.mih"
#include "float.mih"
#include "int.mih"
#include "int16.mih"
#include "int32.mih"
#include "int64.mih"
#include "int8.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mercury_term_lexer.mih"
#include "mercury_term_parser.mih"
#include "mutvar.mih"
#include "one_or_more.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "solutions.mih"
#include "stm_builtin.mih"
#include "store.mih"
#include "stream.mih"
#include "string.mih"
#include "table_builtin.mih"
#include "term.mih"
#include "term_context.mih"
#include "term_int.mih"
#include "term_io.mih"
#include "term_subst.mih"
#include "term_unify.mih"
#include "term_vars.mih"
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
#include "io.call_system.mih"
#include "io.environment.mih"
#include "io.error_util.mih"
#include "io.file.mih"
#include "io.primitives_read.mih"
#include "io.primitives_write.mih"
#include "io.stream_db.mih"
#include "io.stream_ops.mih"
#include "io.text_read.mih"
#include "stream.string_writer.mih"
#include "string.builder.mih"
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

static void MR_CALL 
mercury__term_conversion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_5_p_in__version_array_0(
  MR_Box HeadVar__2_7,
  MR_Integer HeadVar__3_8,
  MR_Word HeadVar__4_9,
  MR_Word * HeadVar__5_10);

static void MR_CALL 
mercury__term_conversion__LCMC__pred__univ_list_to_term_list__1_2_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word HeadVar__1_1,
  MR_Word * AddrOfHeadVar__2_9);

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
mercury__term_conversion__f_76_67_77_67_95_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_55_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_95_95_49_3_p_0(
  MR_Word Var_15,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_17);

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
  MR_Word TypeInfo_for_T_245,
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

static /* final */ const MR_Box mercury__term_conversion_scalar_common_4[1][5];

static /* final */ const MR_Box mercury__term_conversion_scalar_common_5[6][1];


struct mercury__term_conversion__vector_common_type_6_0_s {
  const MR_String mercury__term_conversion__vector_common_type_6_0__vct_6_f_0;
};

static /* final */ const struct mercury__term_conversion__vector_common_type_6_0_s mercury__term_conversion_vector_common_6[192];

struct mercury__term_conversion__vector_common_type_7_0_s {
  const MR_String mercury__term_conversion__vector_common_type_7_0__vct_7_f_0;
  const MR_Integer mercury__term_conversion__vector_common_type_7_0__vct_7_f_1;
};

static /* final */ const struct mercury__term_conversion__vector_common_type_7_0_s mercury__term_conversion_vector_common_7[4];



static /* final */ const MR_Box mercury__term_conversion_scalar_common_1[2][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__term_conversion__term_conversion__type_ctor_info_term_to_type_arg_context_0))
  },
  /* row   1 */
  {
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box mercury__term_conversion_scalar_common_2[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__term_conversion_scalar_common_3[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__term_conversion_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__term_conversion_scalar_common_4[1][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__term_conversion_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__term_conversion_scalar_common_5[6][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_String) "array")) },
  /* row   1 */
  { ((MR_Box) ((MR_String) "version_array")) },
  /* row   2 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
  /* row   3 */
  { ((MR_Box) ((MR_String) "type_info")) },
  /* row   4 */
  { ((MR_Box) ((MR_String) "univ")) },
  /* row   5 */
  { ((MR_Box) ((MR_String) ":")) },
};


static /* final */ const struct mercury__term_conversion__vector_common_type_6_0_s mercury__term_conversion_vector_common_6[192] = {
  /* row   0 */   { NULL },
  /* row   1 */   { (MR_String) "string" },
  /* row   2 */   { NULL },
  /* row   3 */   { (MR_String) "uint32" },
  /* row   4 */   { NULL },
  /* row   5 */   { NULL },
  /* row   6 */   { NULL },
  /* row   7 */   { (MR_String) "int16" },
  /* row   8 */   { (MR_String) "int" },
  /* row   9 */   { NULL },
  /* row  10 */   { NULL },
  /* row  11 */   { NULL },
  /* row  12 */   { NULL },
  /* row  13 */   { (MR_String) "uint8" },
  /* row  14 */   { NULL },
  /* row  15 */   { NULL },
  /* row  16 */   { NULL },
  /* row  17 */   { NULL },
  /* row  18 */   { NULL },
  /* row  19 */   { NULL },
  /* row  20 */   { (MR_String) "uint" },
  /* row  21 */   { NULL },
  /* row  22 */   { NULL },
  /* row  23 */   { (MR_String) "int8" },
  /* row  24 */   { NULL },
  /* row  25 */   { NULL },
  /* row  26 */   { NULL },
  /* row  27 */   { NULL },
  /* row  28 */   { (MR_String) "uint64" },
  /* row  29 */   { NULL },
  /* row  30 */   { NULL },
  /* row  31 */   { NULL },
  /* row  32 */   { NULL },
  /* row  33 */   { (MR_String) "uint16" },
  /* row  34 */   { NULL },
  /* row  35 */   { (MR_String) "float" },
  /* row  36 */   { NULL },
  /* row  37 */   { (MR_String) "int32" },
  /* row  38 */   { NULL },
  /* row  39 */   { NULL },
  /* row  40 */   { NULL },
  /* row  41 */   { NULL },
  /* row  42 */   { NULL },
  /* row  43 */   { NULL },
  /* row  44 */   { NULL },
  /* row  45 */   { NULL },
  /* row  46 */   { NULL },
  /* row  47 */   { NULL },
  /* row  48 */   { (MR_String) "int64" },
  /* row  49 */   { NULL },
  /* row  50 */   { NULL },
  /* row  51 */   { NULL },
  /* row  52 */   { NULL },
  /* row  53 */   { NULL },
  /* row  54 */   { NULL },
  /* row  55 */   { NULL },
  /* row  56 */   { NULL },
  /* row  57 */   { NULL },
  /* row  58 */   { NULL },
  /* row  59 */   { NULL },
  /* row  60 */   { NULL },
  /* row  61 */   { NULL },
  /* row  62 */   { NULL },
  /* row  63 */   { NULL },
  /* row  64 */   { NULL },
  /* row  65 */   { (MR_String) "string" },
  /* row  66 */   { NULL },
  /* row  67 */   { (MR_String) "uint32" },
  /* row  68 */   { (MR_String) "character" },
  /* row  69 */   { NULL },
  /* row  70 */   { NULL },
  /* row  71 */   { (MR_String) "int16" },
  /* row  72 */   { (MR_String) "int" },
  /* row  73 */   { NULL },
  /* row  74 */   { NULL },
  /* row  75 */   { NULL },
  /* row  76 */   { NULL },
  /* row  77 */   { (MR_String) "uint8" },
  /* row  78 */   { NULL },
  /* row  79 */   { NULL },
  /* row  80 */   { NULL },
  /* row  81 */   { NULL },
  /* row  82 */   { NULL },
  /* row  83 */   { NULL },
  /* row  84 */   { (MR_String) "uint" },
  /* row  85 */   { NULL },
  /* row  86 */   { NULL },
  /* row  87 */   { (MR_String) "int8" },
  /* row  88 */   { NULL },
  /* row  89 */   { NULL },
  /* row  90 */   { NULL },
  /* row  91 */   { NULL },
  /* row  92 */   { (MR_String) "uint64" },
  /* row  93 */   { NULL },
  /* row  94 */   { NULL },
  /* row  95 */   { NULL },
  /* row  96 */   { NULL },
  /* row  97 */   { (MR_String) "uint16" },
  /* row  98 */   { NULL },
  /* row  99 */   { (MR_String) "float" },
  /* row 100 */   { NULL },
  /* row 101 */   { (MR_String) "int32" },
  /* row 102 */   { NULL },
  /* row 103 */   { NULL },
  /* row 104 */   { NULL },
  /* row 105 */   { NULL },
  /* row 106 */   { NULL },
  /* row 107 */   { NULL },
  /* row 108 */   { NULL },
  /* row 109 */   { NULL },
  /* row 110 */   { NULL },
  /* row 111 */   { NULL },
  /* row 112 */   { (MR_String) "int64" },
  /* row 113 */   { NULL },
  /* row 114 */   { NULL },
  /* row 115 */   { NULL },
  /* row 116 */   { NULL },
  /* row 117 */   { NULL },
  /* row 118 */   { NULL },
  /* row 119 */   { NULL },
  /* row 120 */   { NULL },
  /* row 121 */   { NULL },
  /* row 122 */   { NULL },
  /* row 123 */   { NULL },
  /* row 124 */   { NULL },
  /* row 125 */   { NULL },
  /* row 126 */   { NULL },
  /* row 127 */   { NULL },
  /* row 128 */   { NULL },
  /* row 129 */   { (MR_String) "string" },
  /* row 130 */   { NULL },
  /* row 131 */   { (MR_String) "uint32" },
  /* row 132 */   { (MR_String) "character" },
  /* row 133 */   { NULL },
  /* row 134 */   { NULL },
  /* row 135 */   { (MR_String) "int16" },
  /* row 136 */   { (MR_String) "int" },
  /* row 137 */   { NULL },
  /* row 138 */   { NULL },
  /* row 139 */   { NULL },
  /* row 140 */   { NULL },
  /* row 141 */   { (MR_String) "uint8" },
  /* row 142 */   { NULL },
  /* row 143 */   { NULL },
  /* row 144 */   { NULL },
  /* row 145 */   { NULL },
  /* row 146 */   { NULL },
  /* row 147 */   { NULL },
  /* row 148 */   { (MR_String) "uint" },
  /* row 149 */   { NULL },
  /* row 150 */   { NULL },
  /* row 151 */   { (MR_String) "int8" },
  /* row 152 */   { NULL },
  /* row 153 */   { NULL },
  /* row 154 */   { NULL },
  /* row 155 */   { NULL },
  /* row 156 */   { (MR_String) "uint64" },
  /* row 157 */   { NULL },
  /* row 158 */   { NULL },
  /* row 159 */   { NULL },
  /* row 160 */   { NULL },
  /* row 161 */   { (MR_String) "uint16" },
  /* row 162 */   { NULL },
  /* row 163 */   { (MR_String) "float" },
  /* row 164 */   { NULL },
  /* row 165 */   { (MR_String) "int32" },
  /* row 166 */   { NULL },
  /* row 167 */   { NULL },
  /* row 168 */   { NULL },
  /* row 169 */   { NULL },
  /* row 170 */   { NULL },
  /* row 171 */   { NULL },
  /* row 172 */   { NULL },
  /* row 173 */   { NULL },
  /* row 174 */   { NULL },
  /* row 175 */   { NULL },
  /* row 176 */   { (MR_String) "int64" },
  /* row 177 */   { NULL },
  /* row 178 */   { NULL },
  /* row 179 */   { NULL },
  /* row 180 */   { NULL },
  /* row 181 */   { NULL },
  /* row 182 */   { NULL },
  /* row 183 */   { NULL },
  /* row 184 */   { NULL },
  /* row 185 */   { NULL },
  /* row 186 */   { NULL },
  /* row 187 */   { NULL },
  /* row 188 */   { NULL },
  /* row 189 */   { NULL },
  /* row 190 */   { NULL },
  /* row 191 */   { NULL },
};

static /* final */ const struct mercury__term_conversion__vector_common_type_7_0_s mercury__term_conversion_vector_common_7[4] = {
  /* row   0 */
  {
    (MR_String) "bitmap",
    (MR_Integer) 0
  },
  /* row   1 */
  {
    (MR_String) "builtin",
    (MR_Integer) 1
  },
  /* row   2 */
  {
    (MR_String) "type_desc",
    (MR_Integer) 2
  },
  /* row   3 */
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
#include "io.environment.mh"
#include "io.error_util.mh"
#include "io.file.mh"
#include "io.primitives_read.mh"
#include "io.primitives_write.mh"
#include "io.stream_db.mh"
#include "io.stream_ops.mh"
#include "io.text_read.mh"


static const MR_PseudoTypeInfo mercury__term_conversion__term_conversion__field_types_term_to_type_arg_context_0_0[3] = {
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_const_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0)
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

static const MR_DuFunctorDescPtr mercury__term_conversion__term_conversion__du_stag_ordered_term_to_type_arg_context_0_0[1] = { &mercury__term_conversion__term_conversion__du_functor_desc_term_to_type_arg_context_0_0 };

static const MR_DuPtagLayout mercury__term_conversion__term_conversion__du_ptag_ordered_term_to_type_arg_context_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__term_conversion__term_conversion__du_stag_ordered_term_to_type_arg_context_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__term_conversion__term_conversion__du_name_ordered_term_to_type_arg_context_0[1] = { &mercury__term_conversion__term_conversion__du_functor_desc_term_to_type_arg_context_0_0 };

static const MR_Integer mercury__term_conversion__term_conversion__functor_number_map_term_to_type_arg_context_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct mercury__term_conversion__term_conversion__type_ctor_info_term_to_type_arg_context_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__term_conversion____Unify____term_to_type_arg_context_0_0_10001)),
  ((MR_Box) (mercury__term_conversion____Compare____term_to_type_arg_context_0_0_10001)),
  (MR_String) "term_conversion",
  (MR_String) "term_to_type_arg_context",
  { mercury__term_conversion__term_conversion__du_name_ordered_term_to_type_arg_context_0 },
  { mercury__term_conversion__term_conversion__du_ptag_ordered_term_to_type_arg_context_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  mercury__term_conversion__term_conversion__functor_number_map_term_to_type_arg_context_0,

};

static const MR_FA_TypeInfo_Struct1 mercury__term_conversion__list__ti_list_1term_conversion__type_ctor_info_term_to_type_arg_context_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mercury__term_conversion__term_conversion__type_ctor_info_term_to_type_arg_context_0) }
};

const MR_TypeCtorInfo_Struct mercury__term_conversion__term_conversion__type_ctor_info_term_to_type_context_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__term_conversion____Unify____term_to_type_context_0_0_10001)),
  ((MR_Box) (mercury__term_conversion____Compare____term_to_type_context_0_0_10001)),
  (MR_String) "term_conversion",
  (MR_String) "term_to_type_context",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__term_conversion__list__ti_list_1term_conversion__type_ctor_info_term_to_type_arg_context_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__term_conversion__term__pti_term_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_term_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

static const MR_PseudoTypeInfo mercury__term_conversion__term_conversion__field_types_term_to_type_error_1_0[4] = {
  (MR_PseudoTypeInfo) (&mercury__term_conversion__term__pti_term_1__pseudo_1),
  (MR_PseudoTypeInfo) (&mercury__type_desc__type_desc__type_ctor_info_type_desc_0),
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
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
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
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

static const MR_DuFunctorDescPtr mercury__term_conversion__term_conversion__du_stag_ordered_term_to_type_error_1_0[1] = { &mercury__term_conversion__term_conversion__du_functor_desc_term_to_type_error_1_0 };

static const MR_DuFunctorDescPtr mercury__term_conversion__term_conversion__du_stag_ordered_term_to_type_error_1_1[1] = { &mercury__term_conversion__term_conversion__du_functor_desc_term_to_type_error_1_1 };

static const MR_DuPtagLayout mercury__term_conversion__term_conversion__du_ptag_ordered_term_to_type_error_1[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__term_conversion__term_conversion__du_stag_ordered_term_to_type_error_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__term_conversion__term_conversion__du_stag_ordered_term_to_type_error_1_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__term_conversion____Unify____term_to_type_error_1_0_10001)),
  ((MR_Box) (mercury__term_conversion____Compare____term_to_type_error_1_0_10001)),
  (MR_String) "term_conversion",
  (MR_String) "term_to_type_error",
  { mercury__term_conversion__term_conversion__du_name_ordered_term_to_type_error_1 },
  { mercury__term_conversion__term_conversion__du_ptag_ordered_term_to_type_error_1 },
  (MR_Integer) 2,
  UINT16_C(12),
  mercury__term_conversion__term_conversion__functor_number_map_term_to_type_error_1,

};

static const MR_PseudoTypeInfo mercury__term_conversion__term_conversion__field_types_term_to_type_result_2_0[1] = { (MR_PseudoTypeInfo) ((MR_Integer) 1) };

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
  { (MR_PseudoTypeInfo) ((MR_Integer) 2) }
};

static const MR_PseudoTypeInfo mercury__term_conversion__term_conversion__field_types_term_to_type_result_2_1[1] = { (MR_PseudoTypeInfo) (&mercury__term_conversion__term_conversion__pti_term_to_type_error_1__pseudo_2) };

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

static const MR_DuFunctorDescPtr mercury__term_conversion__term_conversion__du_stag_ordered_term_to_type_result_2_0[1] = { &mercury__term_conversion__term_conversion__du_functor_desc_term_to_type_result_2_0 };

static const MR_DuFunctorDescPtr mercury__term_conversion__term_conversion__du_stag_ordered_term_to_type_result_2_1[1] = { &mercury__term_conversion__term_conversion__du_functor_desc_term_to_type_result_2_1 };

static const MR_DuPtagLayout mercury__term_conversion__term_conversion__du_ptag_ordered_term_to_type_result_2[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__term_conversion__term_conversion__du_stag_ordered_term_to_type_result_2_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__term_conversion__term_conversion__du_stag_ordered_term_to_type_result_2_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__term_conversion____Unify____term_to_type_result_2_0_10001)),
  ((MR_Box) (mercury__term_conversion____Compare____term_to_type_result_2_0_10001)),
  (MR_String) "term_conversion",
  (MR_String) "term_to_type_result",
  { mercury__term_conversion__term_conversion__du_name_ordered_term_to_type_result_2 },
  { mercury__term_conversion__term_conversion__du_ptag_ordered_term_to_type_result_2 },
  (MR_Integer) 2,
  UINT16_C(12),
  mercury__term_conversion__term_conversion__functor_number_map_term_to_type_result_2,

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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__term_conversion____Unify____term_to_type_result_1_0_10001)),
  ((MR_Box) (mercury__term_conversion____Compare____term_to_type_result_1_0_10001)),
  (MR_String) "term_conversion",
  (MR_String) "term_to_type_result",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__term_conversion__term_conversion__pti_term_to_type_result_2__pseudo_1__plain_term__type_ctor_info_generic_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static void MR_CALL 
mercury__term_conversion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_5_p_in__version_array_0(
  MR_Box HeadVar__2_7,
  MR_Integer HeadVar__3_8,
  MR_Word HeadVar__4_9,
  MR_Word * HeadVar__5_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__3_8 >= (MR_Integer) 0);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Box Var_12;
      MR_Word Var_13;
      MR_Integer Var_14;
      MR_Box Var_21;
      MR_Integer next_value_of_HeadVar__3_8;
      MR_Word next_value_of_HeadVar__4_9;

{
#define MR_PROC_LABEL mercury__term_conversion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_5_p_in__version_array_0

	struct ML_va * VA;
	MR_Integer I;
	MR_Word X;
	MR_bool SUCCESS_INDICATOR;

	VA = (struct ML_va *)HeadVar__2_7 ;
	I = HeadVar__3_8 ;
		{

    SUCCESS_INDICATOR = ML_va_get_dolock(VA, I, &X);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	Var_21  = (MR_Box) X;
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        Var_12 = Var_21;
      else
      {
        MR_Integer Var_22;
        MR_Integer Var_24;

{
#define MR_PROC_LABEL mercury__term_conversion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_5_p_in__version_array_0

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *)HeadVar__2_7 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Var_24  = N;
}
        Var_22 = (MR_Integer) ((MR_Unsigned) Var_24 - (MR_Unsigned) 1);
        {
          mercury__version_array__out_of_bounds_error_3_p_0(HeadVar__3_8, Var_22, (MR_String) "version_array.lookup");
          return;
        }
      }
      {
        Var_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_13, 0) = Var_12;
        MR_hl_field(1, Var_13, 1) = ((MR_Box) (HeadVar__4_9));
      }
      Var_14 = (MR_Integer) ((MR_Unsigned) HeadVar__3_8 - (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_8 = Var_14;
      next_value_of_HeadVar__4_9 = Var_13;
      HeadVar__3_8 = next_value_of_HeadVar__3_8;
      HeadVar__4_9 = next_value_of_HeadVar__4_9;
      continue;
    }
    else
      *HeadVar__5_10 = HeadVar__4_9;
    break;
  }
}

void MR_CALL 
mercury__term_conversion____Compare____term_to_type_result_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__term_conversion____Compare____term_to_type_result_2_0(TypeInfo_for_T_6, (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

MR_bool MR_CALL 
mercury__term_conversion____Unify____term_to_type_result_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__term_conversion____Unify____term_to_type_result_2_0(TypeInfo_for_T_5, (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
mercury__term_conversion____Compare____term_to_type_result_2_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word TypeInfo_for_U_11,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_8 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_9 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_8 == CastY_9);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    {
      MR_Word ArgX1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

      mercury__term_conversion____Compare____term_to_type_error_1_0(TypeInfo_for_U_11, HeadVar__1_1, ArgX1_6, ArgY1_7);
    }
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_Box ArgX1_4 = (MR_hl_field(0, HeadVar__2_2, 0));
    MR_Box ArgY1_5 = (MR_hl_field(0, HeadVar__3_3, 0));

    mercury__builtin__compare_3_p_0(TypeInfo_for_T_10, HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

MR_bool MR_CALL 
mercury__term_conversion____Unify____term_to_type_result_2_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word TypeInfo_for_U_10,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
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
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word ArgY1_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      succeeded = mercury__term_conversion____Unify____term_to_type_error_1_0(TypeInfo_for_U_10, ArgX1_5, ArgY1_6);
    }
  }
  else
  {
    MR_Box ArgX1_3 = (MR_hl_field(0, HeadVar__1_1, 0));
    MR_Box ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = (MR_hl_field(0, HeadVar__2_2, 0));
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_9, ArgX1_3, ArgY1_4);
    }
  }
  return succeeded;
}

void MR_CALL 
mercury__term_conversion____Compare____term_to_type_error_1_0(
  MR_Word TypeInfo_for_T_22,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_20 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_21 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_20 == CastY_21);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    {
      MR_Word ArgX1_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word ArgY1_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word ArgX2_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word ArgY2_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word SubResult1_17;
      MR_Integer Var_31 = (MR_Integer) (ArgX1_15);
      MR_Integer Var_32 = (MR_Integer) (ArgY1_16);

      succeeded = (Var_31 < Var_32);
      if (succeeded)
        SubResult1_17 = (MR_Integer) 1;
      else
      {
        succeeded = (Var_31 == Var_32);
        if (succeeded)
          SubResult1_17 = (MR_Integer) 0;
        else
          SubResult1_17 = (MR_Integer) 2;
      }
      succeeded = (SubResult1_17 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_17;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&mercury__term_conversion_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX2_18)), ((MR_Box) (ArgY2_19)));
    }
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word SubResult1_6;

    mercury__term____Compare____term_1_0(TypeInfo_for_T_22, &SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__type_desc____Compare____type_desc_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__term_context____Compare____term_context_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
          mercury__builtin__compare_3_p_0((MR_Word) (&mercury__term_conversion_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
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
    MR_Word ArgX1_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word ArgY1_12;
    MR_Word ArgX2_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word ArgY2_14;
    MR_Integer Var_26;
    MR_Integer Var_27;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      ArgY2_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4;
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6;
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8;
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
      ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
      ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
      ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
      succeeded = mercury__term____Unify____term_1_0(TypeInfo_for_T_17, ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        succeeded = mercury__type_desc____Unify____type_desc_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
        {
          succeeded = mercury__term_context____Unify____term_context_0_0(ArgX3_7, ArgY3_8);
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

void MR_CALL 
mercury__term_conversion____Compare____term_to_type_context_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&mercury__term_conversion_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
mercury__term_conversion____Unify____term_to_type_context_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&mercury__term_conversion_scalar_common_1[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
mercury__term_conversion____Compare____term_to_type_arg_context_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_12 == CastY_13);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
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
        mercury__term_context____Compare____term_context_0_0(HeadVar__1_1, ArgX3_10, ArgY3_11);
    }
  }
}

MR_bool MR_CALL 
mercury__term_conversion____Unify____term_to_type_arg_context_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));

    succeeded = mercury__term____Unify____const_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
        succeeded = mercury__term_context____Unify____term_context_0_0(ArgX3_7, ArgY3_8);
    }
  }
  return succeeded;
}

MR_Word MR_CALL 
mercury__term_conversion__univ_to_term_1_f_0(
  MR_Word TypeInfo_5_5,
  MR_Word Univ_3)
{
  MR_Word Term_4;

  mercury__term_conversion__univ_to_term_2_p_0(TypeInfo_5_5, Univ_3, &Term_4);
  return Term_4;
}

MR_Word MR_CALL 
mercury__term_conversion__type_to_term_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word TypeInfo_6_6,
  MR_Box Var_3)
{
  MR_Word Term_4;
  MR_Word Univ_7;

  mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_5, Var_3, &Univ_7);
  mercury__term_conversion__univ_to_term_2_p_0(TypeInfo_6_6, Univ_7, &Term_4);
  return Term_4;
}

void MR_CALL 
mercury__term_conversion__type_to_term_2_p_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word TypeInfo_7_7,
  MR_Box Val_3,
  MR_Word * Term_4)
{
  MR_Word Univ_5;

  mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_6, Val_3, &Univ_5);
  mercury__term_conversion__univ_to_term_2_p_0(TypeInfo_7_7, Univ_5, Term_4);
}

static void MR_CALL 
mercury__term_conversion__LCMC__pred__univ_list_to_term_list__1_2_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word HeadVar__1_1,
  MR_Word * AddrOfHeadVar__2_9)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfHeadVar__2_9 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Value_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Values_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word Term_5;
      MR_Word * AddrTerms_8;
      MR_Word HeadVar__2_10;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word * next_value_of_AddrOfHeadVar__2_9;

      mercury__term_conversion__univ_to_term_2_p_0(TypeInfo_for_T_7, Value_3, &Term_5);
      {
        HeadVar__2_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__2_10, 0) = ((MR_Box) (Term_5));
        MR_hl_field(1, HeadVar__2_10, 1) = NULL;
      }
      AddrTerms_8 = (MR_Word *) (&(MR_hl_field(1, HeadVar__2_10, 1)));
      *AddrOfHeadVar__2_9 = HeadVar__2_10;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Values_4;
      next_value_of_AddrOfHeadVar__2_9 = AddrTerms_8;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      AddrOfHeadVar__2_9 = next_value_of_AddrOfHeadVar__2_9;
      continue;
    }
    break;
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
                MR_Word Var_97;
                MR_Word Var_98;
                MR_Box conv15_Bitmap_33;

                succeeded = (strcmp(TypeCtorName_8, (MR_String) "bitmap") == 0);
                if (succeeded)
                {
                  TypeCtorInfo_135_135 = (MR_Word) (&mercury__bitmap__bitmap__type_ctor_info_bitmap_0);
                  mercury__univ__det_univ_to_type_2_p_0(TypeCtorInfo_135_135, Univ_10, &conv15_Bitmap_33);
                  Bitmap_33 = ((MR_Box) (conv15_Bitmap_33));
                  BitmapStr_34 = mercury__bitmap__to_string_1_f_0(Bitmap_33);
                  Var_98 = (MR_Word) ((MR_Unsigned) 0U);
                  {
                    Var_97 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, Var_97, 0) = ((MR_Box) (BitmapStr_34));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    *Term_12 = base;
                    MR_hl_field(0, base, 0) = ((MR_Box) (Var_97));
                    MR_hl_field(0, base, 1) = ((MR_Box) (Var_98));
                    MR_hl_field(0, base, 2) = ((MR_Box) (Context_11));
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
                MR_Word Var_80;
                MR_Integer slot_4 = ((MR_hash_string6(TypeCtorName_8)) & (MR_Integer) 63);
                MR_String str_5 = ((&mercury__term_conversion_vector_common_6[128 + slot_4]))->mercury__term_conversion__vector_common_type_6_0__vct_6_f_0;

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
                            Functor_15 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(2, Functor_15, 0) = ((MR_Box) (String_16));
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
                          MR_Word Var_69;
                          MR_Box conv12_UInt32_24;

                          mercury__univ__det_univ_to_type_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint32_0), Univ_10, &conv12_UInt32_24);
                          UInt32_24 = ((uint32_t) (MR_Word) conv12_UInt32_24);
                          Var_69 = mercury__integer__from_uint32_1_f_0(UInt32_24);
                          {
                            Functor_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Functor_15, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
                            MR_hl_field(1, Functor_15, 1) = ((MR_Box) (Var_69));
                            MR_hl_field(1, Functor_15, 2) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 3)) | (MR_Unsigned) ((MR_Integer) 3)));
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
                            MR_hl_field(0, Functor_15, 0) = ((MR_Box) (CharName_14));
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
                          MR_Word Var_57;
                          MR_Box conv5_Int16_21;

                          mercury__univ__det_univ_to_type_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int16_0), Univ_10, &conv5_Int16_21);
                          Int16_21 = ((int16_t) (MR_Word) conv5_Int16_21);
                          Var_57 = mercury__integer__from_int16_1_f_0(Int16_21);
                          {
                            Functor_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Functor_15, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
                            MR_hl_field(1, Functor_15, 1) = ((MR_Box) (Var_57));
                            MR_hl_field(1, Functor_15, 2) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 3)) | (MR_Unsigned) ((MR_Integer) 2)));
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
                          MR_Word Var_41;
                          MR_Box conv4_Int_17;

                          mercury__univ__det_univ_to_type_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Univ_10, &conv4_Int_17);
                          Int_17 = ((MR_Integer) (conv4_Int_17));
                          Var_41 = mercury__integer__integer_1_f_0(Int_17);
                          {
                            Functor_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Functor_15, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
                            MR_hl_field(1, Functor_15, 1) = ((MR_Box) (Var_41));
                            MR_hl_field(1, Functor_15, 2) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 3)) | (MR_Unsigned) ((MR_Integer) 0)));
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
                          MR_Word Var_53;
                          MR_Box conv14_UInt8_20;

                          mercury__univ__det_univ_to_type_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint8_0), Univ_10, &conv14_UInt8_20);
                          UInt8_20 = ((uint8_t) (MR_Word) conv14_UInt8_20);
                          Var_53 = mercury__integer__from_uint8_1_f_0(UInt8_20);
                          {
                            Functor_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Functor_15, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
                            MR_hl_field(1, Functor_15, 1) = ((MR_Box) (Var_53));
                            MR_hl_field(1, Functor_15, 2) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 3)) | (MR_Unsigned) ((MR_Integer) 1)));
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
                          MR_Word Var_45;
                          MR_Box conv10_UInt_18;

                          mercury__univ__det_univ_to_type_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), Univ_10, &conv10_UInt_18);
                          UInt_18 = ((MR_Unsigned) (conv10_UInt_18));
                          Var_45 = mercury__integer__from_uint_1_f_0(UInt_18);
                          {
                            Functor_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Functor_15, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
                            MR_hl_field(1, Functor_15, 1) = ((MR_Box) (Var_45));
                            MR_hl_field(1, Functor_15, 2) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 3)) | (MR_Unsigned) ((MR_Integer) 0)));
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
                          MR_Word Var_49;
                          MR_Box conv8_Int8_19;

                          mercury__univ__det_univ_to_type_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int8_0), Univ_10, &conv8_Int8_19);
                          Int8_19 = ((int8_t) (MR_Word) conv8_Int8_19);
                          Var_49 = mercury__integer__from_int8_1_f_0(Int8_19);
                          {
                            Functor_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Functor_15, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
                            MR_hl_field(1, Functor_15, 1) = ((MR_Box) (Var_49));
                            MR_hl_field(1, Functor_15, 2) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 3)) | (MR_Unsigned) ((MR_Integer) 1)));
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
                          MR_Word Var_77;
                          MR_Box conv13_UInt64_26;

                          mercury__univ__det_univ_to_type_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint64_0), Univ_10, &conv13_UInt64_26);
                          UInt64_26 = MR_unbox_uint64(conv13_UInt64_26);
                          Var_77 = mercury__integer__from_uint64_1_f_0(UInt64_26);
                          {
                            Functor_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Functor_15, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
                            MR_hl_field(1, Functor_15, 1) = ((MR_Box) (Var_77));
                            MR_hl_field(1, Functor_15, 2) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 3)) | (MR_Unsigned) ((MR_Integer) 4)));
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
                          MR_Word Var_61;
                          MR_Box conv11_UInt16_22;

                          mercury__univ__det_univ_to_type_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint16_0), Univ_10, &conv11_UInt16_22);
                          UInt16_22 = ((uint16_t) (MR_Word) conv11_UInt16_22);
                          Var_61 = mercury__integer__from_uint16_1_f_0(UInt16_22);
                          {
                            Functor_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Functor_15, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
                            MR_hl_field(1, Functor_15, 1) = ((MR_Box) (Var_61));
                            MR_hl_field(1, Functor_15, 2) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 3)) | (MR_Unsigned) ((MR_Integer) 2)));
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
                            Functor_15 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(3, Functor_15, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                            MR_hl_field(3, Functor_15, 1) = MR_box_float(Float_27);
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
                          MR_Word Var_65;
                          MR_Box conv6_Int32_23;

                          mercury__univ__det_univ_to_type_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int32_0), Univ_10, &conv6_Int32_23);
                          Int32_23 = ((int32_t) (MR_Word) conv6_Int32_23);
                          Var_65 = mercury__integer__from_int32_1_f_0(Int32_23);
                          {
                            Functor_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Functor_15, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
                            MR_hl_field(1, Functor_15, 1) = ((MR_Box) (Var_65));
                            MR_hl_field(1, Functor_15, 2) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 3)) | (MR_Unsigned) ((MR_Integer) 3)));
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
                          MR_Word Var_73;
                          MR_Box conv7_Int64_25;

                          mercury__univ__det_univ_to_type_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int64_0), Univ_10, &conv7_Int64_25);
                          Int64_25 = MR_unbox_int64(conv7_Int64_25);
                          Var_73 = mercury__integer__from_int64_1_f_0(Int64_25);
                          {
                            Functor_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Functor_15, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
                            MR_hl_field(1, Functor_15, 1) = ((MR_Box) (Var_73));
                            MR_hl_field(1, Functor_15, 2) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 3)) | (MR_Unsigned) ((MR_Integer) 4)));
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
                  Var_80 = (MR_Word) ((MR_Unsigned) 0U);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    *Term_12 = base;
                    MR_hl_field(0, base, 0) = ((MR_Box) (Functor_15));
                    MR_hl_field(0, base, 1) = ((MR_Box) (Var_80));
                    MR_hl_field(0, base, 2) = ((MR_Box) (Context_11));
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
                MR_Word Var_81;
                MR_Word Var_83;
                MR_Word Var_84;
                MR_Box conv1_TypeInfo_28;

                succeeded = (strcmp(TypeCtorName_8, (MR_String) "type_desc") == 0);
                if (succeeded)
                {
                  TypeCtorInfo_132_132 = (MR_Word) (&mercury__type_desc__type_desc__type_ctor_info_type_desc_0);
                  mercury__univ__det_univ_to_type_2_p_0(TypeCtorInfo_132_132, Univ_10, &conv1_TypeInfo_28);
                  TypeInfo_28 = ((MR_Word) (conv1_TypeInfo_28));
                  mercury__term_conversion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_p_0(Context_11, TypeInfo_28, &SubTerm_29);
                  Var_81 = (MR_Word) (&mercury__term_conversion_scalar_common_5[3]);
                  Var_84 = (MR_Word) ((MR_Unsigned) 0U);
                  {
                    Var_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_83, 0) = ((MR_Box) (SubTerm_29));
                    MR_hl_field(1, Var_83, 1) = ((MR_Box) (Var_84));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    *Term_12 = base;
                    MR_hl_field(0, base, 0) = ((MR_Box) (Var_81));
                    MR_hl_field(0, base, 1) = ((MR_Box) (Var_83));
                    MR_hl_field(0, base, 2) = ((MR_Box) (Context_11));
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
                MR_Box Var_85;
                MR_Word Var_86;
                MR_Word Var_87;
                MR_Word Var_89;
                MR_Word Var_90;
                MR_Word Var_91;
                MR_Word Var_93;
                MR_Word Var_94;
                MR_Word Var_95;
                MR_Box conv0_NestedUniv_30;

                succeeded = (strcmp(TypeCtorName_8, (MR_String) "univ") == 0);
                if (succeeded)
                {
                  TypeCtorInfo_133_133 = (MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0);
                  mercury__univ__det_univ_to_type_2_p_0(TypeCtorInfo_133_133, Univ_10, &conv0_NestedUniv_30);
                  NestedUniv_30 = ((MR_Word) (conv0_NestedUniv_30));
                  Var_85 = mercury__univ__univ_value_1_f_0(&TypeInfo_134_134, NestedUniv_30);
                  mercury__term_conversion__type_to_term_2_p_0(TypeInfo_134_134, TypeInfo_for_T_118, Var_85, &ValueTerm_31);
                  Var_86 = mercury__univ__univ_type_1_f_0(NestedUniv_30);
                  mercury__term_conversion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_p_0(Context_11, Var_86, &TypeTerm_32);
                  Var_87 = (MR_Word) (&mercury__term_conversion_scalar_common_5[4]);
                  Var_91 = (MR_Word) (&mercury__term_conversion_scalar_common_5[5]);
                  Var_95 = (MR_Word) ((MR_Unsigned) 0U);
                  {
                    Var_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_94, 0) = ((MR_Box) (TypeTerm_32));
                    MR_hl_field(1, Var_94, 1) = ((MR_Box) (Var_95));
                  }
                  {
                    Var_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_93, 0) = ((MR_Box) (ValueTerm_31));
                    MR_hl_field(1, Var_93, 1) = ((MR_Box) (Var_94));
                  }
                  {
                    Var_90 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_90, 0) = ((MR_Box) (Var_91));
                    MR_hl_field(0, Var_90, 1) = ((MR_Box) (Var_93));
                    MR_hl_field(0, Var_90, 2) = ((MR_Box) (Context_11));
                  }
                  {
                    Var_89 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_89, 0) = ((MR_Box) (Var_90));
                    MR_hl_field(1, Var_89, 1) = ((MR_Box) (Var_95));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    *Term_12 = base;
                    MR_hl_field(0, base, 0) = ((MR_Box) (Var_87));
                    MR_hl_field(0, base, 1) = ((MR_Box) (Var_89));
                    MR_hl_field(0, base, 2) = ((MR_Box) (Context_11));
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
    MR_Word Var_148 = ((MR_Word) ((MR_hl_field(1, TypeArgs_9, 1))));
    MR_Word Var_149 = ((MR_Word) ((MR_hl_field(1, TypeArgs_9, 0))));

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
        MR_Word Var_102;
        MR_Word Var_104;
        MR_Word Var_105;
        MR_Box conv16_Array_38;

        succeeded = (strcmp(TypeCtorName_8, (MR_String) "array") == 0);
        if (succeeded)
        {
          mercury__type_desc__has_type_2_p_0(&TypeInfo_136_136, Var_149);
          TypeCtorInfo_137_137 = (MR_Word) (&mercury__list__list__type_ctor_info_list_1);
          TypeCtorInfo_139_139 = (MR_Word) (&mercury__array__array__type_ctor_info_array_1);
          {
            TypeInfo_138_138 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, TypeInfo_138_138, 0) = ((MR_Box) (TypeCtorInfo_137_137));
            MR_hl_field(0, TypeInfo_138_138, 1) = ((MR_Box) (TypeInfo_136_136));
          }
          {
            TypeInfo_140_140 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, TypeInfo_140_140, 0) = ((MR_Box) (TypeCtorInfo_139_139));
            MR_hl_field(0, TypeInfo_140_140, 1) = ((MR_Box) (TypeInfo_136_136));
          }
          mercury__univ__det_univ_to_type_2_p_0(TypeInfo_140_140, Univ_10, &conv16_Array_38);
          Array_38 = ((MR_ArrayPtr) (conv16_Array_38));
          mercury__array__to_list_2_p_0(TypeInfo_136_136, (MR_ArrayPtr) (Array_38), &List_37);
          mercury__term_conversion__type_to_term_2_p_0(TypeInfo_138_138, TypeInfo_for_T_118, ((MR_Box) (List_37)), &ArgsTerm_39);
          Var_102 = (MR_Word) (&mercury__term_conversion_scalar_common_5[0]);
          Var_105 = (MR_Word) ((MR_Unsigned) 0U);
          {
            Var_104 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_104, 0) = ((MR_Box) (ArgsTerm_39));
            MR_hl_field(1, Var_104, 1) = ((MR_Box) (Var_105));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            *Term_12 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_102));
            MR_hl_field(0, base, 1) = ((MR_Box) (Var_104));
            MR_hl_field(0, base, 2) = ((MR_Box) (Context_11));
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
        MR_Word Var_109;
        MR_Word Var_111;
        MR_Word Var_112;
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
            MR_hl_field(0, TypeInfo_143_143, 0) = ((MR_Box) (TypeCtorInfo_142_142));
            MR_hl_field(0, TypeInfo_143_143, 1) = ((MR_Box) (TypeInfo_141_141));
          }
          {
            TypeInfo_145_145 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, TypeInfo_145_145, 0) = ((MR_Box) (TypeCtorInfo_144_144));
            MR_hl_field(0, TypeInfo_145_145, 1) = ((MR_Box) (TypeInfo_141_141));
          }
          mercury__univ__det_univ_to_type_2_p_0(TypeInfo_145_145, Univ_10, &conv17_Array_116);
          Array_116 = ((MR_Box) (conv17_Array_116));
          List_115 = mercury__version_array__to_list_1_f_0(TypeInfo_141_141, Array_116);
          mercury__term_conversion__type_to_term_2_p_0(TypeInfo_143_143, TypeInfo_for_T_118, ((MR_Box) (List_115)), &ArgsTerm_117);
          Var_109 = (MR_Word) (&mercury__term_conversion_scalar_common_5[1]);
          Var_112 = (MR_Word) ((MR_Unsigned) 0U);
          {
            Var_111 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_111, 0) = ((MR_Box) (ArgsTerm_117));
            MR_hl_field(1, Var_111, 1) = ((MR_Box) (Var_112));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            *Term_12 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_109));
            MR_hl_field(0, base, 1) = ((MR_Box) (Var_111));
            MR_hl_field(0, base, 2) = ((MR_Box) (Context_11));
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

void MR_CALL 
mercury__term_conversion__univ_to_term_2_p_0(
  MR_Word TypeInfo_27_27,
  MR_Word Univ_3,
  MR_Word * Term_4)
{
  MR_bool succeeded;
  MR_Word TypeInfo_6_32 = ((MR_Word) ((MR_hl_field(0, Univ_3, 0))));
  MR_Word Type_6;
  MR_Integer Var_7;

{
#define MR_PROC_LABEL mercury__term_conversion__univ_to_term_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word TypeInfo;

	TypeInfo_for_T = TypeInfo_6_32 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{
{
    TypeInfo = TypeInfo_for_T;

    // We used to collapse equivalences for efficiency here, but that is not
    // always desirable, due to the reverse mode of make_type/3, and efficiency
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

	TypeInfo = Type_6 ;
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
    MR_Word TypeInfo_28_28 = ((MR_Word) ((MR_hl_field(0, Univ_3, 0))));
    MR_String FunctorString_8;
    MR_Word FunctorArgs_10;
    MR_Box Var_18 = (MR_hl_field(0, Univ_3, 1));
    MR_Word Var_20;
    MR_Integer _FunctorArity_9;
    MR_Word * AddrTermArgs_41;

    mercury__deconstruct__deconstruct_5_p_1(TypeInfo_28_28, Var_18, (MR_Integer) 1, &FunctorString_8, &_FunctorArity_9, &FunctorArgs_10);
    {
      Var_20 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_20, 0) = ((MR_Box) (FunctorString_8));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *Term_4 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_20));
      MR_hl_field(0, base, 1) = NULL;
      MR_hl_field(0, base, 2) = ((MR_Box) (&mercury__term_conversion_scalar_common_1[1]));
    }
    AddrTermArgs_41 = (MR_Word *) (&(MR_hl_field(0, *Term_4, 1)));
    mercury__term_conversion__LCMC__pred__univ_list_to_term_list__1_2_p_0(TypeInfo_27_27, FunctorArgs_10, AddrTermArgs_41);
  }
  else
  {
    MR_Word SpecialCaseTerm_16;
    MR_Word TypeCtor_12;
    MR_Word TypeArgs_13;
    MR_String ModuleName_14;
    MR_String TypeCtorName_15;
    MR_String Var_34;
    MR_Integer Var_35;
    MR_String Var_36;
    MR_Integer Var_37;

{
#define MR_PROC_LABEL mercury__term_conversion__univ_to_term_2_p_0

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc = Type_6 ;
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

	TypeCtorDesc = TypeCtor_12 ;
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
	Var_34  = TypeCtorName;
	Var_35  = TypeCtorArity;
}
{
#define MR_PROC_LABEL mercury__term_conversion__univ_to_term_2_p_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc = TypeCtor_12 ;
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
	Var_36  = TypeCtorModuleName;
	TypeCtorName_15  = TypeCtorName;
	Var_37  = TypeCtorArity;
}
    succeeded = mercury__term_conversion__univ_to_term_special_case_6_p_0(TypeInfo_27_27, ModuleName_14, TypeCtorName_15, TypeArgs_13, Univ_3, (MR_Word) (&mercury__term_conversion_scalar_common_1[1]), &SpecialCaseTerm_16);
    if (succeeded)
      *Term_4 = SpecialCaseTerm_16;
    else
    {
      MR_Word TypeInfo_6_39 = ((MR_Word) ((MR_hl_field(0, Univ_3, 0))));
      MR_String Message_17;
      MR_String Var_22;
      MR_String Var_23;
      MR_Word Var_24;

{
#define MR_PROC_LABEL mercury__term_conversion__univ_to_term_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word TypeInfo;

	TypeInfo_for_T = TypeInfo_6_39 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{
{
    TypeInfo = TypeInfo_for_T;

    // We used to collapse equivalences for efficiency here, but that is not
    // always desirable, due to the reverse mode of make_type/3, and efficiency
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

static void MR_CALL 
mercury__term_conversion__f_76_67_77_67_95_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_55_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_95_95_49_3_p_0(
  MR_Word Var_15,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_17)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfHeadVar__3_17 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Var_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word Var_8;
      MR_Word * AddrSCCcallarg_9_16;
      MR_Word HeadVar__3_18;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word * next_value_of_AddrOfHeadVar__3_17;

      mercury__term_conversion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_p_0(Var_15, Var_6, &Var_8);
      {
        HeadVar__3_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__3_18, 0) = ((MR_Box) (Var_8));
        MR_hl_field(1, HeadVar__3_18, 1) = NULL;
      }
      AddrSCCcallarg_9_16 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_18, 1)));
      *AddrOfHeadVar__3_17 = HeadVar__3_18;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Var_7;
      next_value_of_AddrOfHeadVar__3_17 = AddrSCCcallarg_9_16;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      AddrOfHeadVar__3_17 = next_value_of_AddrOfHeadVar__3_17;
      continue;
    }
    break;
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
    MR_Word Var_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word Var_8;
    MR_Word * AddrSCCcallarg_9_16;

    mercury__term_conversion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_p_0(Var_15, Var_6, &Var_8);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_8));
      MR_hl_field(1, base, 1) = NULL;
    }
    AddrSCCcallarg_9_16 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__3_3, 1)));
    mercury__term_conversion__f_76_67_77_67_95_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_55_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_95_95_49_3_p_0(Var_15, Var_7, AddrSCCcallarg_9_16);
  }
}

static void MR_CALL 
mercury__term_conversion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_p_0(
  MR_Word Context_4,
  MR_Word TypeInfo_5,
  MR_Word * Term_6)
{
  MR_bool succeeded;
  MR_Word TypeCtor_7;
  MR_Word ArgTypes_8;
  MR_String TypeName_9;
  MR_String ModuleName_10;
  MR_Word ArgTerms_11;
  MR_String Var_30;
  MR_Integer Var_31;
  MR_String Var_32;
  MR_Integer Var_33;

{
#define MR_PROC_LABEL mercury__term_conversion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_p_0

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc = TypeInfo_5 ;
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

	TypeCtorDesc = TypeCtor_7 ;
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
	Var_30  = TypeCtorModuleName;
	TypeName_9  = TypeCtorName;
	Var_31  = TypeCtorArity;
}
{
#define MR_PROC_LABEL mercury__term_conversion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_p_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc = TypeCtor_7 ;
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
	Var_32  = TypeCtorModuleName;
	ModuleName_10  = TypeCtorName;
	Var_33  = TypeCtorArity;
}
  mercury__term_conversion__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_55_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_3_p_in__list_0(Context_4, ArgTypes_8, &ArgTerms_11);
  succeeded = (strcmp(ModuleName_10, (MR_String) "builtin") == 0);
  if (succeeded)
  {
    MR_Word Var_15;

    {
      Var_15 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_15, 0) = ((MR_Box) (TypeName_9));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *Term_6 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_15));
      MR_hl_field(0, base, 1) = ((MR_Box) (ArgTerms_11));
      MR_hl_field(0, base, 2) = ((MR_Box) (Context_4));
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
      MR_hl_field(0, Var_16, 0) = ((MR_Box) (ModuleName_10));
    }
    {
      Arg1_12 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Arg1_12, 0) = ((MR_Box) (Var_16));
      MR_hl_field(0, Arg1_12, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Arg1_12, 2) = ((MR_Box) (Context_4));
    }
    {
      Var_18 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_18, 0) = ((MR_Box) (TypeName_9));
    }
    {
      Arg2_13 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Arg2_13, 0) = ((MR_Box) (Var_18));
      MR_hl_field(0, Arg2_13, 1) = ((MR_Box) (ArgTerms_11));
      MR_hl_field(0, Arg2_13, 2) = ((MR_Box) (Context_4));
    }
    {
      Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_22, 0) = ((MR_Box) (Arg2_13));
      MR_hl_field(1, Var_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_21, 0) = ((MR_Box) (Arg1_12));
      MR_hl_field(1, Var_21, 1) = ((MR_Box) (Var_22));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *Term_6 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (&mercury__term_conversion_scalar_common_5[5]));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_21));
      MR_hl_field(0, base, 2) = ((MR_Box) (Context_4));
    }
  }
}

MR_Box MR_CALL 
mercury__term_conversion__det_term_to_type_1_f_0(
  MR_Word TypeInfo_5_5,
  MR_Word TypeInfo_for_T_6,
  MR_Word Term_3)
{
  MR_Box X_4;

  mercury__term_conversion__det_term_to_type_2_p_0(TypeInfo_5_5, TypeInfo_for_T_6, Term_3, &X_4);
  return X_4;
}

void MR_CALL 
mercury__term_conversion__det_term_to_type_2_p_0(
  MR_Word TypeInfo_17_17,
  MR_Word TypeInfo_for_T_18,
  MR_Word Term_3,
  MR_Box * X_4)
{
  MR_bool succeeded;
  MR_Box XPrime_5;
  MR_Word Var_19;

  mercury__term_conversion__try_term_to_type_2_p_0(TypeInfo_17_17, TypeInfo_for_T_18, Term_3, &Var_19);
  succeeded = ((MR_tag((MR_Word) Var_19)) == (MR_Integer) 0);
  if (succeeded)
  {
    XPrime_5 = (MR_hl_field(0, Var_19, 0));
    *X_4 = XPrime_5;
  }
  else
  {
    MR_Word Var_21;

    succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_21 = ((MR_Word) ((MR_hl_field(0, Term_3, 1))));
      succeeded = mercury__term_subst__terms_are_ground_1_p_0(TypeInfo_17_17, Var_21);
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
	MR_Word TypeInfo_In_1;
	MR_Word TypeInfo;

	TypeInfo_for_T = TypeInfo_for_T_18 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{
{
    TypeInfo = TypeInfo_for_T;

    // We used to collapse equivalences for efficiency here, but that is not
    // always desirable, due to the reverse mode of make_type/3, and efficiency
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

MR_bool MR_CALL 
mercury__term_conversion__term_to_type_2_p_0(
  MR_Word TypeInfo_for_U_6,
  MR_Word TypeInfo_for_T_7,
  MR_Word Term_3,
  MR_Box * Val_4)
{
  MR_bool succeeded;
  MR_Word Var_5;

  mercury__term_conversion__try_term_to_type_2_p_0(TypeInfo_for_U_6, TypeInfo_for_T_7, Term_3, &Var_5);
  succeeded = ((MR_tag((MR_Word) Var_5)) == (MR_Integer) 0);
  if (succeeded)
    *Val_4 = (MR_hl_field(0, Var_5, 0));
  return succeeded;
}

MR_Word MR_CALL 
mercury__term_conversion__try_term_to_type_1_f_0(
  MR_Word TypeInfo_for_U_5,
  MR_Word TypeInfo_for_T_6,
  MR_Word Term_3)
{
  MR_Word Result_4;

  mercury__term_conversion__try_term_to_type_2_p_0(TypeInfo_for_U_5, TypeInfo_for_T_6, Term_3, &Result_4);
  return Result_4;
}

void MR_CALL 
mercury__term_conversion__try_term_to_type_2_p_0(
  MR_Word TypeInfo_for_U_11,
  MR_Word TypeInfo_for_T_12,
  MR_Word Term_3,
  MR_Word * Result_4)
{
  MR_Word UnivResult_6;
  MR_Word Var_10;

{
#define MR_PROC_LABEL mercury__term_conversion__try_term_to_type_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word TypeInfo;

	TypeInfo_for_T = TypeInfo_for_T_12 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{
{
    TypeInfo = TypeInfo_for_T;

    // We used to collapse equivalences for efficiency here, but that is not
    // always desirable, due to the reverse mode of make_type/3, and efficiency
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
    MR_Word Univ_7 = ((MR_Word) ((MR_hl_field(0, UnivResult_6, 0))));
    MR_Box Val_8;

    mercury__univ__det_univ_to_type_2_p_0(TypeInfo_for_T_12, Univ_7, &Val_8);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *Result_4 = base;
      MR_hl_field(0, base, 0) = Val_8;
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
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    succeeded = (HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      *HeadVar__7_7 = (MR_Word) (&mercury__term_conversion_scalar_common_5[2]);
      succeeded = MR_TRUE;
    }
  }
  else
  {
    MR_Word ArgTerm_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word ArgTerms_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Type_15;
    MR_Word Types_16;
    MR_Word ArgContext_22;
    MR_Word NewContext_23;
    MR_Word ArgResult_24;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Type_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      Types_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      {
        ArgContext_22 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ArgContext_22, 0) = ((MR_Box) (Functor_3));
        MR_hl_field(0, ArgContext_22, 1) = ((MR_Box) (ArgNum_4));
        MR_hl_field(0, ArgContext_22, 2) = ((MR_Box) (TermContext_6));
      }
      {
        NewContext_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, NewContext_23, 0) = ((MR_Box) (ArgContext_22));
        MR_hl_field(1, NewContext_23, 1) = ((MR_Box) (PrevContext_5));
      }
      mercury__term_conversion__try_term_to_univ_2_4_p_0(TypeInfo_for_T_33, ArgTerm_13, Type_15, NewContext_23, &ArgResult_24);
      if (((MR_tag((MR_Word) ArgResult_24)) == (MR_Integer) 1))
      {
        *HeadVar__7_7 = (MR_Word) (ArgResult_24);
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word Arg_25 = ((MR_Word) ((MR_hl_field(0, ArgResult_24, 0))));
        MR_Word RestResult_26;
        MR_Integer Var_29 = (MR_Integer) ((MR_Unsigned) ArgNum_4 + (MR_Unsigned) 1);

        succeeded = mercury__term_conversion__term_list_to_univ_list_7_p_0(TypeInfo_for_T_33, ArgTerms_14, Types_16, Functor_3, Var_29, PrevContext_5, TermContext_6, &RestResult_26);
        if (succeeded)
        {
          if (((MR_tag((MR_Word) RestResult_26)) == (MR_Integer) 1))
            *HeadVar__7_7 = RestResult_26;
          else
          {
            MR_Word Rest_27 = ((MR_Word) ((MR_hl_field(0, RestResult_26, 0))));
            MR_Word Var_31;

            {
              Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_31, 0) = ((MR_Box) (Arg_25));
              MR_hl_field(1, Var_31, 1) = ((MR_Box) (Rest_27));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *HeadVar__7_7 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_31));
            }
          }
          succeeded = MR_TRUE;
        }
      }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
mercury__term_conversion__term_to_univ_special_case_6_p_0(
  MR_Word TypeInfo_for_T_245,
  MR_String ModuleName_7,
  MR_String TypeCtorName_8,
  MR_Word TypeArgs_9,
  MR_Word Term_10,
  MR_Word PrevContext_11,
  MR_Word * Result_12)
{
  MR_bool succeeded;
  MR_Word Var_300 = ((MR_Word) ((MR_hl_field(0, Term_10, 2))));
  MR_Word Var_301 = ((MR_Word) ((MR_hl_field(0, Term_10, 1))));
  MR_Word Var_302 = ((MR_Word) ((MR_hl_field(0, Term_10, 0))));

  if ((TypeArgs_9 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((strcmp(ModuleName_7, (MR_String) "univ") == 0))
    {
      MR_Word TypeCtorInfo_286_286;
      MR_Word ArgTerm_49;
      MR_Word ValueTerm_51;
      MR_Word TypeTerm_52;
      MR_String Var_119;
      MR_Word Var_121;
      MR_Word Var_122;
      MR_String Var_123;
      MR_Word Var_124;
      MR_Word Var_125;
      MR_Word Var_126;
      MR_Word Var_167;
      MR_Word Univ_244;
      MR_Word Var_295;
      MR_Word Var_296;
      MR_String Var_303;
      MR_Integer slot_0;
      MR_String str_1;

      succeeded = (strcmp(TypeCtorName_8, (MR_String) "univ") == 0);
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Var_302)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_119 = ((MR_String) ((MR_hl_field(0, Var_302, 0))));
          succeeded = (strcmp(Var_119, (MR_String) "univ") == 0);
          if (succeeded)
          {
            succeeded = (Var_301 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              ArgTerm_49 = ((MR_Word) ((MR_hl_field(1, Var_301, 0))));
              Var_121 = ((MR_Word) ((MR_hl_field(1, Var_301, 1))));
              succeeded = (Var_121 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                succeeded = ((MR_tag((MR_Word) ArgTerm_49)) == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_122 = ((MR_Word) ((MR_hl_field(0, ArgTerm_49, 0))));
                  Var_124 = ((MR_Word) ((MR_hl_field(0, ArgTerm_49, 1))));
                  succeeded = ((MR_tag((MR_Word) Var_122)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Var_123 = ((MR_String) ((MR_hl_field(0, Var_122, 0))));
                    succeeded = (strcmp(Var_123, (MR_String) ":") == 0);
                    if (succeeded)
                    {
                      succeeded = (Var_124 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        ValueTerm_51 = ((MR_Word) ((MR_hl_field(1, Var_124, 0))));
                        Var_125 = ((MR_Word) ((MR_hl_field(1, Var_124, 1))));
                        succeeded = (Var_125 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          TypeTerm_52 = ((MR_Word) ((MR_hl_field(1, Var_125, 0))));
                          Var_126 = ((MR_Word) ((MR_hl_field(1, Var_125, 1))));
                          succeeded = (Var_126 == (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            succeeded = ((MR_tag((MR_Word) TypeTerm_52)) == (MR_Integer) 0);
                            if (succeeded)
                            {
                              Var_296 = ((MR_Word) ((MR_hl_field(0, TypeTerm_52, 0))));
                              Var_295 = ((MR_Word) ((MR_hl_field(0, TypeTerm_52, 1))));
                              succeeded = (Var_295 == (MR_Word) ((MR_Unsigned) 0U));
                              if (succeeded)
                              {
                                succeeded = ((MR_tag((MR_Word) Var_296)) == (MR_Integer) 0);
                                if (succeeded)
                                {
                                  Var_303 = ((MR_String) ((MR_hl_field(0, Var_296, 0))));
                                  // hashed string jump switch
                                  ;
                                  // compute the hash value of the input string
                                  ;
                                  slot_0 = ((MR_hash_string6(Var_303)) & (MR_Integer) 63);
                                  // no collisions; no hash chain loop
                                  ;
                                  // lookup the string for this hash slot
                                  ;
                                  str_1 = ((&mercury__term_conversion_vector_common_6[0 + slot_0]))->mercury__term_conversion__vector_common_type_6_0__vct_6_f_0;
                                  // did we find a match?
                                  ;
                                  if ((((str_1 != NULL)) && ((strcmp(str_1, Var_303) == 0))))
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
                                            MR_Word TypeCtorInfo_284_284;
                                            MR_Word Var_160;
                                            MR_Word Var_161;
                                            MR_String String_230;

                                            succeeded = ((MR_tag((MR_Word) ValueTerm_51)) == (MR_Integer) 0);
                                            if (succeeded)
                                            {
                                              Var_160 = ((MR_Word) ((MR_hl_field(0, ValueTerm_51, 0))));
                                              Var_161 = ((MR_Word) ((MR_hl_field(0, ValueTerm_51, 1))));
                                              succeeded = ((MR_tag((MR_Word) Var_160)) == (MR_Integer) 2);
                                              if (succeeded)
                                              {
                                                String_230 = ((MR_String) ((MR_hl_field(2, Var_160, 0))));
                                                succeeded = (Var_161 == (MR_Word) ((MR_Unsigned) 0U));
                                                if (succeeded)
                                                {
                                                  TypeCtorInfo_284_284 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0);
                                                  Univ_244 = mercury__univ__univ_1_f_0(TypeCtorInfo_284_284, ((MR_Box) (String_230)));
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
                                            MR_Word TypeCtorInfo_281_281;
                                            uint32_t UInt32_227;

                                            succeeded = mercury__term_int__term_to_uint32_2_p_0(TypeInfo_for_T_245, ValueTerm_51, &UInt32_227);
                                            if (succeeded)
                                            {
                                              TypeCtorInfo_281_281 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint32_0);
                                              Univ_244 = mercury__univ__univ_1_f_0(TypeCtorInfo_281_281, ((MR_Box) (MR_Word) (UInt32_227)));
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
                                            MR_Word TypeCtorInfo_278_278;
                                            int16_t Int16_224;

                                            succeeded = mercury__term_int__term_to_int16_2_p_0(TypeInfo_for_T_245, ValueTerm_51, &Int16_224);
                                            if (succeeded)
                                            {
                                              TypeCtorInfo_278_278 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int16_0);
                                              Univ_244 = mercury__univ__univ_1_f_0(TypeCtorInfo_278_278, ((MR_Box) (MR_Word) (Int16_224)));
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
                                            MR_Word TypeCtorInfo_274_274;
                                            MR_Integer Int_220;

                                            succeeded = mercury__term_int__term_to_int_2_p_0(TypeInfo_for_T_245, ValueTerm_51, &Int_220);
                                            if (succeeded)
                                            {
                                              TypeCtorInfo_274_274 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0);
                                              Univ_244 = mercury__univ__univ_1_f_0(TypeCtorInfo_274_274, ((MR_Box) (Int_220)));
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
                                            MR_Word TypeCtorInfo_277_277;
                                            uint8_t UInt8_223;

                                            succeeded = mercury__term_int__term_to_uint8_2_p_0(TypeInfo_for_T_245, ValueTerm_51, &UInt8_223);
                                            if (succeeded)
                                            {
                                              TypeCtorInfo_277_277 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint8_0);
                                              Univ_244 = mercury__univ__univ_1_f_0(TypeCtorInfo_277_277, ((MR_Box) (MR_Word) (UInt8_223)));
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
                                            MR_Word TypeCtorInfo_275_275;
                                            MR_Unsigned UInt_221;

                                            succeeded = mercury__term_int__term_to_uint_2_p_0(TypeInfo_for_T_245, ValueTerm_51, &UInt_221);
                                            if (succeeded)
                                            {
                                              TypeCtorInfo_275_275 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0);
                                              Univ_244 = mercury__univ__univ_1_f_0(TypeCtorInfo_275_275, ((MR_Box) (UInt_221)));
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
                                            MR_Word TypeCtorInfo_276_276;
                                            int8_t Int8_222;

                                            succeeded = mercury__term_int__term_to_int8_2_p_0(TypeInfo_for_T_245, ValueTerm_51, &Int8_222);
                                            if (succeeded)
                                            {
                                              TypeCtorInfo_276_276 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int8_0);
                                              Univ_244 = mercury__univ__univ_1_f_0(TypeCtorInfo_276_276, ((MR_Box) (MR_Word) (Int8_222)));
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
                                            MR_Word TypeCtorInfo_283_283;
                                            uint64_t UInt64_229;

                                            succeeded = mercury__term_int__term_to_uint64_2_p_0(TypeInfo_for_T_245, ValueTerm_51, &UInt64_229);
                                            if (succeeded)
                                            {
                                              TypeCtorInfo_283_283 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint64_0);
                                              Univ_244 = mercury__univ__univ_1_f_0(TypeCtorInfo_283_283, MR_box_uint64(UInt64_229));
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
                                            MR_Word TypeCtorInfo_279_279;
                                            uint16_t UInt16_225;

                                            succeeded = mercury__term_int__term_to_uint16_2_p_0(TypeInfo_for_T_245, ValueTerm_51, &UInt16_225);
                                            if (succeeded)
                                            {
                                              TypeCtorInfo_279_279 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint16_0);
                                              Univ_244 = mercury__univ__univ_1_f_0(TypeCtorInfo_279_279, ((MR_Box) (MR_Word) (UInt16_225)));
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
                                            MR_Word TypeCtorInfo_285_285;
                                            MR_Word Var_165;
                                            MR_Word Var_166;
                                            MR_Float Float_231;

                                            succeeded = ((MR_tag((MR_Word) ValueTerm_51)) == (MR_Integer) 0);
                                            if (succeeded)
                                            {
                                              Var_165 = ((MR_Word) ((MR_hl_field(0, ValueTerm_51, 0))));
                                              Var_166 = ((MR_Word) ((MR_hl_field(0, ValueTerm_51, 1))));
                                              succeeded = ((((MR_tag((MR_Word) Var_165)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_165, 0)))) == (MR_Integer) 0)));
                                              if (succeeded)
                                              {
                                                Float_231 = MR_unbox_float((MR_hl_field(3, Var_165, 1)));
                                                succeeded = (Var_166 == (MR_Word) ((MR_Unsigned) 0U));
                                                if (succeeded)
                                                {
                                                  TypeCtorInfo_285_285 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_float_0);
                                                  Univ_244 = mercury__univ__univ_1_f_0(TypeCtorInfo_285_285, MR_box_float(Float_231));
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
                                            MR_Word TypeCtorInfo_280_280;
                                            int32_t Int32_226;

                                            succeeded = mercury__term_int__term_to_int32_2_p_0(TypeInfo_for_T_245, ValueTerm_51, &Int32_226);
                                            if (succeeded)
                                            {
                                              TypeCtorInfo_280_280 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int32_0);
                                              Univ_244 = mercury__univ__univ_1_f_0(TypeCtorInfo_280_280, ((MR_Box) (MR_Word) (Int32_226)));
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
                                            MR_Word TypeCtorInfo_282_282;
                                            int64_t Int64_228;

                                            succeeded = mercury__term_int__term_to_int64_2_p_0(TypeInfo_for_T_245, ValueTerm_51, &Int64_228);
                                            if (succeeded)
                                            {
                                              TypeCtorInfo_282_282 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int64_0);
                                              Univ_244 = mercury__univ__univ_1_f_0(TypeCtorInfo_282_282, MR_box_int64(Int64_228));
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
                                    TypeCtorInfo_286_286 = (MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0);
                                    Var_167 = mercury__univ__univ_1_f_0(TypeCtorInfo_286_286, ((MR_Box) (Univ_244)));
                                    {
                                      MR_Word base;
                                      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                                      *Result_12 = base;
                                      MR_hl_field(0, base, 0) = ((MR_Box) (Var_167));
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
      MR_Word TypeCtorInfo_259_259;
      MR_Box BitMap_33;
      MR_Word Univ_195;
      MR_String String_196;

      succeeded = (strcmp(TypeCtorName_8, (MR_String) "bitmap") == 0);
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Var_302)) == (MR_Integer) 2);
        if (succeeded)
        {
          String_196 = ((MR_String) ((MR_hl_field(2, Var_302, 0))));
          succeeded = (Var_301 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = mercury__bitmap__from_string_2_p_0(String_196, &BitMap_33);
            if (succeeded)
            {
              TypeCtorInfo_259_259 = (MR_Word) (&mercury__bitmap__bitmap__type_ctor_info_bitmap_0);
              mercury__univ__type_to_univ_2_p_1(TypeCtorInfo_259_259, ((MR_Box) (BitMap_33)), &Univ_195);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *Result_12 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (Univ_195));
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

      succeeded = (Var_301 == (MR_Word) ((MR_Unsigned) 0U));
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
        str_3 = ((&mercury__term_conversion_vector_common_6[64 + slot_2]))->mercury__term_conversion__vector_common_type_6_0__vct_6_f_0;
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
                  MR_Word TypeCtorInfo_247_247;
                  MR_String String_18;

                  succeeded = ((MR_tag((MR_Word) Var_302)) == (MR_Integer) 2);
                  if (succeeded)
                  {
                    String_18 = ((MR_String) ((MR_hl_field(2, Var_302, 0))));
                    TypeCtorInfo_247_247 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0);
                    mercury__univ__type_to_univ_2_p_1(TypeCtorInfo_247_247, ((MR_Box) (String_18)), &Univ_17);
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
                  MR_Word TypeCtorInfo_255_255;
                  uint32_t UInt32_28;
                  MR_Word Var_84;
                  MR_Word Var_85;
                  MR_Word Integer_188;

                  succeeded = ((MR_tag((MR_Word) Var_302)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    Integer_188 = ((MR_Word) ((MR_hl_field(1, Var_302, 1))));
                    Var_84 = ((((MR_Unsigned) ((MR_hl_field(1, Var_302, 2))) >> 3)) & (MR_Integer) 1);
                    Var_85 = ((MR_Unsigned) ((MR_hl_field(1, Var_302, 2))) & (MR_Integer) 7);
                    succeeded = (Var_84 == (MR_Integer) 1);
                    if (succeeded)
                    {
                      succeeded = (Var_85 == (MR_Integer) 3);
                      if (succeeded)
                      {
                        succeeded = mercury__integer__to_uint32_2_p_0(Integer_188, &UInt32_28);
                        if (succeeded)
                        {
                          TypeCtorInfo_255_255 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint32_0);
                          mercury__univ__type_to_univ_2_p_1(TypeCtorInfo_255_255, ((MR_Box) (MR_Word) (UInt32_28)), &Univ_17);
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
                  MR_Word TypeCtorInfo_246_246;
                  MR_String FunctorName_15;
                  MR_Char Char_16;
                  MR_String Var_69;

                  succeeded = ((MR_tag((MR_Word) Var_302)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    FunctorName_15 = ((MR_String) ((MR_hl_field(0, Var_302, 0))));
                    Var_69 = (MR_String) "";
                    succeeded = mercury__string__first_char_3_p_1(FunctorName_15, &Char_16, Var_69);
                    if (succeeded)
                    {
                      TypeCtorInfo_246_246 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0);
                      mercury__univ__type_to_univ_2_p_0(TypeCtorInfo_246_246, ((MR_Box) (MR_Word) (Char_16)), &Univ_17);
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
                  MR_Word TypeCtorInfo_252_252;
                  int16_t Int16_25;
                  MR_Word Var_78;
                  MR_Word Var_79;
                  MR_Word Integer_179;

                  succeeded = ((MR_tag((MR_Word) Var_302)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    Integer_179 = ((MR_Word) ((MR_hl_field(1, Var_302, 1))));
                    Var_78 = ((((MR_Unsigned) ((MR_hl_field(1, Var_302, 2))) >> 3)) & (MR_Integer) 1);
                    Var_79 = ((MR_Unsigned) ((MR_hl_field(1, Var_302, 2))) & (MR_Integer) 7);
                    succeeded = (Var_78 == (MR_Integer) 0);
                    if (succeeded)
                    {
                      succeeded = (Var_79 == (MR_Integer) 2);
                      if (succeeded)
                      {
                        succeeded = mercury__integer__to_int16_2_p_0(Integer_179, &Int16_25);
                        if (succeeded)
                        {
                          TypeCtorInfo_252_252 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int16_0);
                          mercury__univ__type_to_univ_2_p_1(TypeCtorInfo_252_252, ((MR_Box) (MR_Word) (Int16_25)), &Univ_17);
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
                  MR_Word TypeCtorInfo_248_248;
                  MR_Word Integer_20;
                  MR_Integer Int_21;
                  MR_Word Var_70;
                  MR_Word Var_71;

                  succeeded = ((MR_tag((MR_Word) Var_302)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    Integer_20 = ((MR_Word) ((MR_hl_field(1, Var_302, 1))));
                    Var_70 = ((((MR_Unsigned) ((MR_hl_field(1, Var_302, 2))) >> 3)) & (MR_Integer) 1);
                    Var_71 = ((MR_Unsigned) ((MR_hl_field(1, Var_302, 2))) & (MR_Integer) 7);
                    succeeded = (Var_70 == (MR_Integer) 0);
                    if (succeeded)
                    {
                      succeeded = (Var_71 == (MR_Integer) 0);
                      if (succeeded)
                      {
                        succeeded = mercury__integer__to_int_2_p_0(Integer_20, &Int_21);
                        if (succeeded)
                        {
                          TypeCtorInfo_248_248 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0);
                          mercury__univ__type_to_univ_2_p_1(TypeCtorInfo_248_248, ((MR_Box) (Int_21)), &Univ_17);
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
                  MR_Word TypeCtorInfo_251_251;
                  uint8_t UInt8_24;
                  MR_Word Var_76;
                  MR_Word Var_77;
                  MR_Word Integer_176;

                  succeeded = ((MR_tag((MR_Word) Var_302)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    Integer_176 = ((MR_Word) ((MR_hl_field(1, Var_302, 1))));
                    Var_76 = ((((MR_Unsigned) ((MR_hl_field(1, Var_302, 2))) >> 3)) & (MR_Integer) 1);
                    Var_77 = ((MR_Unsigned) ((MR_hl_field(1, Var_302, 2))) & (MR_Integer) 7);
                    succeeded = (Var_76 == (MR_Integer) 1);
                    if (succeeded)
                    {
                      succeeded = (Var_77 == (MR_Integer) 1);
                      if (succeeded)
                      {
                        succeeded = mercury__integer__to_uint8_2_p_0(Integer_176, &UInt8_24);
                        if (succeeded)
                        {
                          TypeCtorInfo_251_251 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint8_0);
                          mercury__univ__type_to_univ_2_p_1(TypeCtorInfo_251_251, ((MR_Box) (MR_Word) (UInt8_24)), &Univ_17);
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
                  MR_Word TypeCtorInfo_249_249;
                  MR_Unsigned UInt_22;
                  MR_Word Var_72;
                  MR_Word Var_73;
                  MR_Word Integer_170;

                  succeeded = ((MR_tag((MR_Word) Var_302)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    Integer_170 = ((MR_Word) ((MR_hl_field(1, Var_302, 1))));
                    Var_72 = ((((MR_Unsigned) ((MR_hl_field(1, Var_302, 2))) >> 3)) & (MR_Integer) 1);
                    Var_73 = ((MR_Unsigned) ((MR_hl_field(1, Var_302, 2))) & (MR_Integer) 7);
                    succeeded = (Var_72 == (MR_Integer) 1);
                    if (succeeded)
                    {
                      succeeded = (Var_73 == (MR_Integer) 0);
                      if (succeeded)
                      {
                        succeeded = mercury__integer__to_uint_2_p_0(Integer_170, &UInt_22);
                        if (succeeded)
                        {
                          TypeCtorInfo_249_249 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0);
                          mercury__univ__type_to_univ_2_p_1(TypeCtorInfo_249_249, ((MR_Box) (UInt_22)), &Univ_17);
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
                  MR_Word TypeCtorInfo_250_250;
                  int8_t Int8_23;
                  MR_Word Var_74;
                  MR_Word Var_75;
                  MR_Word Integer_173;

                  succeeded = ((MR_tag((MR_Word) Var_302)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    Integer_173 = ((MR_Word) ((MR_hl_field(1, Var_302, 1))));
                    Var_74 = ((((MR_Unsigned) ((MR_hl_field(1, Var_302, 2))) >> 3)) & (MR_Integer) 1);
                    Var_75 = ((MR_Unsigned) ((MR_hl_field(1, Var_302, 2))) & (MR_Integer) 7);
                    succeeded = (Var_74 == (MR_Integer) 0);
                    if (succeeded)
                    {
                      succeeded = (Var_75 == (MR_Integer) 1);
                      if (succeeded)
                      {
                        succeeded = mercury__integer__to_int8_2_p_0(Integer_173, &Int8_23);
                        if (succeeded)
                        {
                          TypeCtorInfo_250_250 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int8_0);
                          mercury__univ__type_to_univ_2_p_1(TypeCtorInfo_250_250, ((MR_Box) (MR_Word) (Int8_23)), &Univ_17);
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
                  MR_Word TypeCtorInfo_257_257;
                  uint64_t UInt64_30;
                  MR_Word Var_88;
                  MR_Word Var_89;
                  MR_Word Integer_194;

                  succeeded = ((MR_tag((MR_Word) Var_302)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    Integer_194 = ((MR_Word) ((MR_hl_field(1, Var_302, 1))));
                    Var_88 = ((((MR_Unsigned) ((MR_hl_field(1, Var_302, 2))) >> 3)) & (MR_Integer) 1);
                    Var_89 = ((MR_Unsigned) ((MR_hl_field(1, Var_302, 2))) & (MR_Integer) 7);
                    succeeded = (Var_88 == (MR_Integer) 1);
                    if (succeeded)
                    {
                      succeeded = (Var_89 == (MR_Integer) 4);
                      if (succeeded)
                      {
                        succeeded = mercury__integer__to_uint64_2_p_0(Integer_194, &UInt64_30);
                        if (succeeded)
                        {
                          TypeCtorInfo_257_257 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint64_0);
                          mercury__univ__type_to_univ_2_p_1(TypeCtorInfo_257_257, MR_box_uint64(UInt64_30), &Univ_17);
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
                  MR_Word TypeCtorInfo_253_253;
                  uint16_t UInt16_26;
                  MR_Word Var_80;
                  MR_Word Var_81;
                  MR_Word Integer_182;

                  succeeded = ((MR_tag((MR_Word) Var_302)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    Integer_182 = ((MR_Word) ((MR_hl_field(1, Var_302, 1))));
                    Var_80 = ((((MR_Unsigned) ((MR_hl_field(1, Var_302, 2))) >> 3)) & (MR_Integer) 1);
                    Var_81 = ((MR_Unsigned) ((MR_hl_field(1, Var_302, 2))) & (MR_Integer) 7);
                    succeeded = (Var_80 == (MR_Integer) 1);
                    if (succeeded)
                    {
                      succeeded = (Var_81 == (MR_Integer) 2);
                      if (succeeded)
                      {
                        succeeded = mercury__integer__to_uint16_2_p_0(Integer_182, &UInt16_26);
                        if (succeeded)
                        {
                          TypeCtorInfo_253_253 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint16_0);
                          mercury__univ__type_to_univ_2_p_1(TypeCtorInfo_253_253, ((MR_Box) (MR_Word) (UInt16_26)), &Univ_17);
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
                  MR_Word TypeCtorInfo_258_258;
                  MR_Float Float_31;

                  succeeded = ((((MR_tag((MR_Word) Var_302)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_302, 0)))) == (MR_Integer) 0)));
                  if (succeeded)
                  {
                    Float_31 = MR_unbox_float((MR_hl_field(3, Var_302, 1)));
                    TypeCtorInfo_258_258 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_float_0);
                    mercury__univ__type_to_univ_2_p_1(TypeCtorInfo_258_258, MR_box_float(Float_31), &Univ_17);
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
                  MR_Word TypeCtorInfo_254_254;
                  int32_t Int32_27;
                  MR_Word Var_82;
                  MR_Word Var_83;
                  MR_Word Integer_185;

                  succeeded = ((MR_tag((MR_Word) Var_302)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    Integer_185 = ((MR_Word) ((MR_hl_field(1, Var_302, 1))));
                    Var_82 = ((((MR_Unsigned) ((MR_hl_field(1, Var_302, 2))) >> 3)) & (MR_Integer) 1);
                    Var_83 = ((MR_Unsigned) ((MR_hl_field(1, Var_302, 2))) & (MR_Integer) 7);
                    succeeded = (Var_82 == (MR_Integer) 0);
                    if (succeeded)
                    {
                      succeeded = (Var_83 == (MR_Integer) 3);
                      if (succeeded)
                      {
                        succeeded = mercury__integer__to_int32_2_p_0(Integer_185, &Int32_27);
                        if (succeeded)
                        {
                          TypeCtorInfo_254_254 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int32_0);
                          mercury__univ__type_to_univ_2_p_1(TypeCtorInfo_254_254, ((MR_Box) (MR_Word) (Int32_27)), &Univ_17);
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
                  MR_Word TypeCtorInfo_256_256;
                  int64_t Int64_29;
                  MR_Word Var_86;
                  MR_Word Var_87;
                  MR_Word Integer_191;

                  succeeded = ((MR_tag((MR_Word) Var_302)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    Integer_191 = ((MR_Word) ((MR_hl_field(1, Var_302, 1))));
                    Var_86 = ((((MR_Unsigned) ((MR_hl_field(1, Var_302, 2))) >> 3)) & (MR_Integer) 1);
                    Var_87 = ((MR_Unsigned) ((MR_hl_field(1, Var_302, 2))) & (MR_Integer) 7);
                    succeeded = (Var_86 == (MR_Integer) 0);
                    if (succeeded)
                    {
                      succeeded = (Var_87 == (MR_Integer) 4);
                      if (succeeded)
                      {
                        succeeded = mercury__integer__to_int64_2_p_0(Integer_191, &Int64_29);
                        if (succeeded)
                        {
                          TypeCtorInfo_256_256 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int64_0);
                          mercury__univ__type_to_univ_2_p_1(TypeCtorInfo_256_256, MR_box_int64(Int64_29), &Univ_17);
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
            MR_hl_field(0, base, 0) = ((MR_Box) (Univ_17));
          }
          succeeded = MR_TRUE;
        }
      }
    }
    else
      succeeded = MR_FALSE;
  else
  {
    MR_Word Var_292 = ((MR_Word) ((MR_hl_field(1, TypeArgs_9, 1))));
    MR_Word Var_293 = ((MR_Word) ((MR_hl_field(1, TypeArgs_9, 0))));
    MR_Word Var_304;
    MR_Word Var_305;
    MR_String Var_306;

    succeeded = (Var_292 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = (Var_301 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_305 = ((MR_Word) ((MR_hl_field(1, Var_301, 0))));
        Var_304 = ((MR_Word) ((MR_hl_field(1, Var_301, 1))));
        succeeded = ((MR_tag((MR_Word) Var_302)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_306 = ((MR_String) ((MR_hl_field(0, Var_302, 0))));
          succeeded = (Var_304 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            if ((strcmp(ModuleName_7, (MR_String) "array") == 0))
            {
              MR_Word TypeInfo_260_260;
              MR_Word TypeCtorInfo_261_261;
              MR_Word TypeInfo_262_262;
              MR_Word ListType_38;
              MR_Word ArgContext_40;
              MR_Word NewContext_41;
              MR_Word ArgResult_42;
              MR_Word Var_99;
              MR_Integer Var_101;

              succeeded = (strcmp(TypeCtorName_8, (MR_String) "array") == 0);
              if (succeeded)
              {
                succeeded = (strcmp(Var_306, (MR_String) "array") == 0);
                if (succeeded)
                {
                  mercury__type_desc__has_type_2_p_0(&TypeInfo_260_260, Var_293);
                  TypeCtorInfo_261_261 = (MR_Word) (&mercury__list__list__type_ctor_info_list_1);
                  {
                    TypeInfo_262_262 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, TypeInfo_262_262, 0) = ((MR_Box) (TypeCtorInfo_261_261));
                    MR_hl_field(0, TypeInfo_262_262, 1) = ((MR_Box) (TypeInfo_260_260));
                  }
                  ListType_38 = mercury__type_desc__type_of_1_f_0(TypeInfo_262_262);
                  Var_99 = (MR_Word) (&mercury__term_conversion_scalar_common_5[0]);
                  Var_101 = (MR_Integer) 1;
                  {
                    ArgContext_40 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, ArgContext_40, 0) = ((MR_Box) (Var_99));
                    MR_hl_field(0, ArgContext_40, 1) = ((MR_Box) (Var_101));
                    MR_hl_field(0, ArgContext_40, 2) = ((MR_Box) (Var_300));
                  }
                  {
                    NewContext_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, NewContext_41, 0) = ((MR_Box) (ArgContext_40));
                    MR_hl_field(1, NewContext_41, 1) = ((MR_Box) (PrevContext_11));
                  }
                  mercury__term_conversion__try_term_to_univ_2_4_p_0(TypeInfo_for_T_245, Var_305, ListType_38, NewContext_41, &ArgResult_42);
                  if (((MR_tag((MR_Word) ArgResult_42)) == (MR_Integer) 1))
                    *Result_12 = ArgResult_42;
                  else
                  {
                    MR_Word TypeInfo_263_263;
                    MR_Word TypeInfo_264_264;
                    MR_Word TypeInfo_266_266;
                    MR_Word ListUniv_43 = ((MR_Word) ((MR_hl_field(0, ArgResult_42, 0))));
                    MR_Word List_45;
                    MR_ArrayPtr Array_46;
                    MR_Word Var_104;
                    MR_Box conv0_List_45;
                    MR_ArrayPtr conv1_Array_46;

                    mercury__type_desc__has_type_2_p_0(&TypeInfo_263_263, Var_293);
                    {
                      TypeInfo_264_264 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, TypeInfo_264_264, 0) = ((MR_Box) (TypeCtorInfo_261_261));
                      MR_hl_field(0, TypeInfo_264_264, 1) = ((MR_Box) (TypeInfo_263_263));
                    }
                    mercury__univ__det_univ_to_type_2_p_0(TypeInfo_264_264, ListUniv_43, &conv0_List_45);
                    List_45 = ((MR_Word) (conv0_List_45));
                    conv1_Array_46 = mercury__array__array_1_f_0(TypeInfo_263_263, List_45);
                    Array_46 = (MR_ArrayPtr) (conv1_Array_46);
                    {
                      TypeInfo_266_266 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, TypeInfo_266_266, 0) = ((MR_Box) (&mercury__array__array__type_ctor_info_array_1));
                      MR_hl_field(0, TypeInfo_266_266, 1) = ((MR_Box) (TypeInfo_263_263));
                    }
                    Var_104 = mercury__univ__univ_1_f_0(TypeInfo_266_266, ((MR_Box) (Array_46)));
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      *Result_12 = base;
                      MR_hl_field(0, base, 0) = ((MR_Box) (Var_104));
                    }
                  }
                  succeeded = MR_TRUE;
                }
              }
            }
            else
            if ((strcmp(ModuleName_7, (MR_String) "version_array") == 0))
            {
              MR_Word TypeInfo_267_267;
              MR_Word TypeCtorInfo_268_268;
              MR_Word TypeInfo_269_269;
              MR_Word Var_112;
              MR_Integer Var_114;
              MR_Word ListType_211;
              MR_Word ArgContext_212;
              MR_Word NewContext_213;
              MR_Word ArgResult_214;

              succeeded = (strcmp(TypeCtorName_8, (MR_String) "version_array") == 0);
              if (succeeded)
              {
                succeeded = (strcmp(Var_306, (MR_String) "version_array") == 0);
                if (succeeded)
                {
                  mercury__type_desc__has_type_2_p_0(&TypeInfo_267_267, Var_293);
                  TypeCtorInfo_268_268 = (MR_Word) (&mercury__list__list__type_ctor_info_list_1);
                  {
                    TypeInfo_269_269 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, TypeInfo_269_269, 0) = ((MR_Box) (TypeCtorInfo_268_268));
                    MR_hl_field(0, TypeInfo_269_269, 1) = ((MR_Box) (TypeInfo_267_267));
                  }
                  ListType_211 = mercury__type_desc__type_of_1_f_0(TypeInfo_269_269);
                  Var_112 = (MR_Word) (&mercury__term_conversion_scalar_common_5[1]);
                  Var_114 = (MR_Integer) 1;
                  {
                    ArgContext_212 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, ArgContext_212, 0) = ((MR_Box) (Var_112));
                    MR_hl_field(0, ArgContext_212, 1) = ((MR_Box) (Var_114));
                    MR_hl_field(0, ArgContext_212, 2) = ((MR_Box) (Var_300));
                  }
                  {
                    NewContext_213 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, NewContext_213, 0) = ((MR_Box) (ArgContext_212));
                    MR_hl_field(1, NewContext_213, 1) = ((MR_Box) (PrevContext_11));
                  }
                  mercury__term_conversion__try_term_to_univ_2_4_p_0(TypeInfo_for_T_245, Var_305, ListType_211, NewContext_213, &ArgResult_214);
                  if (((MR_tag((MR_Word) ArgResult_214)) == (MR_Integer) 1))
                    *Result_12 = ArgResult_214;
                  else
                  {
                    MR_Word TypeInfo_270_270;
                    MR_Word TypeInfo_271_271;
                    MR_Word TypeInfo_273_273;
                    MR_Word Var_117;
                    MR_Word ListUniv_197 = ((MR_Word) ((MR_hl_field(0, ArgResult_214, 0))));
                    MR_Word List_199;
                    MR_Box Array_200;
                    MR_Box conv2_List_199;

                    mercury__type_desc__has_type_2_p_0(&TypeInfo_270_270, Var_293);
                    {
                      TypeInfo_271_271 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, TypeInfo_271_271, 0) = ((MR_Box) (TypeCtorInfo_268_268));
                      MR_hl_field(0, TypeInfo_271_271, 1) = ((MR_Box) (TypeInfo_270_270));
                    }
                    mercury__univ__det_univ_to_type_2_p_0(TypeInfo_271_271, ListUniv_197, &conv2_List_199);
                    List_199 = ((MR_Word) (conv2_List_199));
                    Array_200 = mercury__version_array__version_array_1_f_0(TypeInfo_270_270, List_199);
                    {
                      TypeInfo_273_273 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, TypeInfo_273_273, 0) = ((MR_Box) (&mercury__version_array__version_array__type_ctor_info_version_array_1));
                      MR_hl_field(0, TypeInfo_273_273, 1) = ((MR_Box) (TypeInfo_270_270));
                    }
                    Var_117 = mercury__univ__univ_1_f_0(TypeInfo_273_273, ((MR_Box) (Array_200)));
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      *Result_12 = base;
                      MR_hl_field(0, base, 0) = ((MR_Box) (Var_117));
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

static void MR_CALL 
mercury__term_conversion__try_term_to_univ_2_4_p_0(
  MR_Word TypeInfo_for_T_33,
  MR_Word Term_5,
  MR_Word Type_6,
  MR_Word Context_7,
  MR_Word * Result_8)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) Term_5)) == (MR_Integer) 0))
  {
    MR_Word Functor_11 = ((MR_Word) ((MR_hl_field(0, Term_5, 0))));
    MR_Word ArgTerms_12 = ((MR_Word) ((MR_hl_field(0, Term_5, 1))));
    MR_Word TermContext_13 = ((MR_Word) ((MR_hl_field(0, Term_5, 2))));
    MR_Word SpecialCaseResult_18;
    MR_Word TypeCtor_14;
    MR_Word TypeArgs_15;
    MR_String ModuleName_16;
    MR_String TypeCtorName_17;
    MR_String Var_37;
    MR_Integer Var_38;
    MR_String Var_39;
    MR_Integer Var_40;

{
#define MR_PROC_LABEL mercury__term_conversion__try_term_to_univ_2_4_p_0

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc = Type_6 ;
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

	TypeCtorDesc = TypeCtor_14 ;
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
	Var_37  = TypeCtorName;
	Var_38  = TypeCtorArity;
}
{
#define MR_PROC_LABEL mercury__term_conversion__try_term_to_univ_2_4_p_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc = TypeCtor_14 ;
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
	Var_39  = TypeCtorModuleName;
	TypeCtorName_17  = TypeCtorName;
	Var_40  = TypeCtorArity;
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
      MR_Integer Var_29;
      MR_Integer Var_41;
      MR_Integer Var_42;

      succeeded = ((MR_tag((MR_Word) Functor_11)) == (MR_Integer) 0);
      if (succeeded)
      {
        FunctorName_19 = ((MR_String) ((MR_hl_field(0, Functor_11, 0))));
        TypeCtorInfo_34_34 = (MR_Word) (&mercury__term__term__type_ctor_info_term_1);
        Var_41 = (MR_Integer) 0;
        {
          TypeInfo_35_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeInfo_35_35, 0) = ((MR_Box) (TypeCtorInfo_34_34));
          MR_hl_field(0, TypeInfo_35_35, 1) = ((MR_Box) (TypeInfo_for_T_33));
        }
        mercury__list__length_acc_3_p_0(TypeInfo_35_35, (MR_Word) (ArgTerms_12), Var_41, &Arity_20);
{
#define MR_PROC_LABEL mercury__term_conversion__try_term_to_univ_2_4_p_0

	MR_Word TypeInfo;
	MR_Integer Functors;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo = Type_6 ;
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
	Var_42  = Functors;
	}
succeeded  = SUCCESS_INDICATOR;
}
        if (succeeded)
        {
          succeeded = mercury__construct__find_functor_2_6_p_0(Type_6, FunctorName_19, Arity_20, Var_42, &FunctorNumber_21, &ArgTypes_22);
          if (succeeded)
          {
            Var_29 = (MR_Integer) 1;
            succeeded = mercury__term_conversion__term_list_to_univ_list_7_p_0(TypeInfo_for_T_33, ArgTerms_12, ArgTypes_22, Functor_11, Var_29, Context_7, TermContext_13, &ArgsResult_23);
          }
        }
      }
      if (succeeded)
        if (((MR_tag((MR_Word) ArgsResult_23)) == (MR_Integer) 1))
          *Result_8 = (MR_Word) (ArgsResult_23);
        else
        {
          MR_Word ArgValues_24 = ((MR_Word) ((MR_hl_field(0, ArgsResult_23, 0))));
          MR_Word Value_25;

          succeeded = mercury__construct__construct_4_p_0(Type_6, FunctorNumber_21, ArgValues_24, &Value_25);
          if (succeeded)
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *Result_8 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Value_25));
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
        MR_Word Var_32;

        mercury__list__reverse_2_p_0((MR_Word) (&mercury__term_conversion__term_conversion__type_ctor_info_term_to_type_arg_context_0), Context_7, &RevContext_27);
        {
          Var_32 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_32, 0) = ((MR_Box) (Term_5));
          MR_hl_field(0, Var_32, 1) = ((MR_Box) (Type_6));
          MR_hl_field(0, Var_32, 2) = ((MR_Box) (TermContext_13));
          MR_hl_field(0, Var_32, 3) = ((MR_Box) (RevContext_27));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_8 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_32));
        }
      }
    }
  }
  else
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(1, Term_5, 0))));
    MR_Word Var_28;

    {
      Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_28, 0) = ((MR_Box) (Var_9));
      MR_hl_field(1, Var_28, 1) = ((MR_Box) (Context_7));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *Result_8 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_28));
    }
  }
}

static MR_bool MR_CALL 
mercury__term_conversion____Unify____term_to_type_arg_context_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__term_conversion____Unify____term_to_type_arg_context_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__term_conversion____Compare____term_to_type_arg_context_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__term_conversion____Compare____term_to_type_arg_context_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__term_conversion____Unify____term_to_type_context_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__term_conversion____Unify____term_to_type_context_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__term_conversion____Compare____term_to_type_context_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__term_conversion____Compare____term_to_type_context_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__term_conversion____Unify____term_to_type_error_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mercury__term_conversion____Unify____term_to_type_error_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mercury__term_conversion____Compare____term_to_type_error_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__term_conversion____Compare____term_to_type_error_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__term_conversion____Unify____term_to_type_result_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_bool succeeded;

  succeeded = mercury__term_conversion____Unify____term_to_type_result_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  return succeeded;
}

static void MR_CALL 
mercury__term_conversion____Compare____term_to_type_result_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__term_conversion____Compare____term_to_type_result_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)));
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__term_conversion____Unify____term_to_type_result_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mercury__term_conversion____Unify____term_to_type_result_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mercury__term_conversion____Compare____term_to_type_result_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__term_conversion____Compare____term_to_type_result_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
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
