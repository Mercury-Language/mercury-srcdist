/*
** Automatically generated from `pprint.m'
** by the Mercury compiler,
** version rotd-2019-05-06
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


// :- module pprint.
// :- implementation.

/*
INIT mercury__pprint__init
ENDINIT
*/

#include "pprint.mih"


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
#include "hash_table.mih"
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
#include "multi_map.mih"
#include "mutvar.mih"
#include "ops.mih"
#include "pair.mih"
#include "parser.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "require.mih"
#include "robdd.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_bbbtree.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "set_unordlist.mih"
#include "solutions.mih"
#include "sparse_bitset.mih"
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




static const MR_DuFunctorDesc mercury__pprint__pprint__du_functor_desc_doc_0_0;

static const MR_PseudoTypeInfo mercury__pprint__pprint__field_types_doc_0_1[2];

static const MR_DuFunctorDesc mercury__pprint__pprint__du_functor_desc_doc_0_1;

static const MR_PseudoTypeInfo mercury__pprint__pprint__field_types_doc_0_2[2];

static const MR_DuFunctorDesc mercury__pprint__pprint__du_functor_desc_doc_0_2;

static const MR_PseudoTypeInfo mercury__pprint__pprint__field_types_doc_0_3[2];

static const MR_DuFunctorDesc mercury__pprint__pprint__du_functor_desc_doc_0_3;

static const MR_PseudoTypeInfo mercury__pprint__pprint__field_types_doc_0_4[1];

static const MR_DuFunctorDesc mercury__pprint__pprint__du_functor_desc_doc_0_4;

static const MR_DuFunctorDesc mercury__pprint__pprint__du_functor_desc_doc_0_5;

static const MR_PseudoTypeInfo mercury__pprint__pprint__field_types_doc_0_6[1];

static const MR_DuFunctorDesc mercury__pprint__pprint__du_functor_desc_doc_0_6;

static const MR_PseudoTypeInfo mercury__pprint__pprint__field_types_doc_0_7[2];

static const MR_DuFunctorDesc mercury__pprint__pprint__du_functor_desc_doc_0_7;

static const MR_DuFunctorDescPtr mercury__pprint__pprint__du_stag_ordered_doc_0_0[2];

static const MR_DuFunctorDescPtr mercury__pprint__pprint__du_stag_ordered_doc_0_1[1];

static const MR_DuFunctorDescPtr mercury__pprint__pprint__du_stag_ordered_doc_0_2[1];

static const MR_DuFunctorDescPtr mercury__pprint__pprint__du_stag_ordered_doc_0_3[4];

static const MR_DuPtagLayout mercury__pprint__pprint__du_ptag_ordered_doc_0[4];

static const MR_DuFunctorDescPtr mercury__pprint__pprint__du_name_ordered_doc_0[8];

static const MR_Integer mercury__pprint__pprint__functor_number_map_doc_0[8];

static const MR_PseudoTypeInfo mercury__pprint__pprint__field_types_map_pair_2_0[2];

static const MR_DuFunctorDesc mercury__pprint__pprint__du_functor_desc_map_pair_2_0;

static const MR_DuFunctorDescPtr mercury__pprint__pprint__du_stag_ordered_map_pair_2_0[1];

static const MR_DuPtagLayout mercury__pprint__pprint__du_ptag_ordered_map_pair_2[1];

static const MR_DuFunctorDescPtr mercury__pprint__pprint__du_name_ordered_map_pair_2[1];

static const MR_Integer mercury__pprint__pprint__functor_number_map_map_pair_2[1];

static const MR_ConstString mercury__pprint__pprint__type_class_id_var_names_doc_1[1];

static const MR_TypeClassMethod mercury__pprint__pprint__type_class_id_method_ids_doc_1[1];

static const MR_TypeClassId mercury__pprint__pprint__type_class_id_doc_1;

static MR_Integer MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static void MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_91_49_93_95_49_6_p_1(
  MR_Word P_1,
  MR_Integer HeadVar__2_2,
  MR_Integer * K_3,
  MR_Word HeadVar__4_4,
  MR_Box HeadVar__5_5,
  MR_Box * S_6);

static void MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_91_49_93_95_48_6_p_0(
  MR_Word P_1,
  MR_Integer HeadVar__2_2,
  MR_Integer * K_3,
  MR_Word HeadVar__4_4,
  MR_Box HeadVar__5_5,
  MR_Box * S_6);

static void MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_98_95_95_104_111_52_51_95_95_91_51_44_32_52_93_95_48_8_p_0(
  MR_Word Var_85,
  MR_Box Var_86,
  MR_Integer W_2,
  MR_Integer HeadVar__3_3,
  MR_Integer * K_4,
  MR_String I_5,
  MR_Word HeadVar__6_6,
  MR_Box HeadVar__7_7,
  MR_Box * S_8);

static void MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_104_111_52_56_95_95_91_51_44_32_52_93_95_48_6_p_0(
  MR_Word Var_60,
  MR_Box Var_61,
  MR_Integer HeadVar__2_2,
  MR_Integer * K_3,
  MR_Word HeadVar__4_4,
  MR_Box HeadVar__5_5,
  MR_Box * S_6);

static void MR_CALL 
mercury__pprint__lb__ho42_8_p_0(
  MR_Integer W_2,
  MR_Integer HeadVar__3_3,
  MR_Integer * K_4,
  MR_String I_5,
  MR_Word HeadVar__6_6);

static void MR_CALL 
mercury__pprint__layout_flat__ho49_6_p_0(
  MR_Integer HeadVar__2_2,
  MR_Integer * K_3,
  MR_Word HeadVar__4_4);

static void MR_CALL 
mercury__pprint__lb__ho41_8_p_0(
  MR_Integer W_2,
  MR_Integer HeadVar__3_3,
  MR_Integer * K_4,
  MR_String I_5,
  MR_Word HeadVar__6_6,
  MR_Word HeadVar__7_7,
  MR_Word * S_8);

static void MR_CALL 
mercury__pprint__layout_flat__ho50_6_p_0(
  MR_Integer HeadVar__2_2,
  MR_Integer * K_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * S_6);

static void MR_CALL 
mercury__pprint__IntroducedFrom__pred__to_string__471__1_3_p_0(
  MR_String LambdaHeadVar__1_12,
  MR_Word LambdaHeadVar__2_13,
  MR_Word * LambdaHeadVar__3_14);

static MR_String MR_CALL 
mercury__pprint__extend_2_f_0(
  MR_String I_4,
  MR_Integer J_5);

static MR_bool MR_CALL 
mercury__pprint__ff_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Integer R_2,
  MR_Integer * HeadVar__3_3);

static void MR_CALL 
mercury__pprint__words_loop__ho39_4_p_in__string_0(
  MR_String V_6_6,
  MR_Integer V_7_7,
  MR_Word * V_8_8);

static void MR_CALL 
mercury__pprint__skip_to_word_end__ho51_4_p_in__string_0(
  MR_String V_6_6,
  MR_Integer V_7_7,
  MR_Integer * V_8_8);

static void MR_CALL 
mercury__pprint__skip_to_next_word_start__ho40_4_p_in__string_0(
  MR_String V_6_6,
  MR_Integer V_7_7,
  MR_Integer * V_8_8);

static MR_Word MR_CALL 
mercury__pprint__map__ho36_2_f_in__list_0(
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
mercury__pprint__univ_to_doc_3_f_0(
  MR_Integer Depth_5,
  MR_Integer Priority_6,
  MR_Word Univ_7);

static MR_Word MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_51_56_95_95_91_51_44_32_52_93_95_48_2_f_in__list_0(
  MR_Word Var_12,
  MR_Integer Var_13,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
mercury__pprint__robdd_to_doc_2_f_0(
  MR_Word TypeInfo_for_T_12,
  MR_Integer Depth_4,
  MR_Word R_5);

static MR_Word MR_CALL 
mercury__pprint__map_pair_to_doc_2_f_0(
  MR_Word TypeInfo_for_T1_21,
  MR_Word TypeInfo_for_T2_22,
  MR_Integer Depth_4,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
mercury__pprint__map_to_doc_2_f_0(
  MR_Word TypeInfo_for_T1_16,
  MR_Word TypeInfo_for_T2_17,
  MR_Integer Depth_4,
  MR_Word X_5);

static MR_Word MR_CALL 
mercury__pprint__version_array_to_doc_2_f_0(
  MR_Word TypeInfo_for_T_13,
  MR_Integer Depth_4,
  MR_Box A_5);

static MR_Word MR_CALL 
mercury__pprint__array_to_doc_2_f_0(
  MR_Word TypeInfo_for_T_13,
  MR_Integer Depth_4,
  MR_ArrayPtr A_5);

static MR_Word MR_CALL 
mercury__pprint__list_to_doc_2_f_0(
  MR_Word TypeInfo_for_T_11,
  MR_Integer Depth_4,
  MR_Word Xs_5);

static MR_Word MR_CALL 
mercury__pprint__sparse_bitset_to_doc_2_f_0(
  MR_Word TypeClassInfo_for_enum_13,
  MR_Integer Depth_4,
  MR_Word A_5);

static MR_Word MR_CALL 
mercury__pprint__generic_term_to_doc_3_f_0(
  MR_Word TypeInfo_for_T_101,
  MR_Integer Depth_5,
  MR_Integer Priority_6,
  MR_Box X_7);

static MR_Word MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_93_95_48_2_f_in__list_0(
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
mercury__pprint__tuple_to_doc_2_f_0(
  MR_Word TypeInfo_for_T_17,
  MR_Integer Depth_4,
  MR_Box Tuple_5);

static MR_Word MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_52_54_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_f_in__version_array_0(
  MR_Word TypeInfo_for_T1_1_16,
  MR_Box V_7_7,
  MR_Word V_8_8,
  MR_Integer V_9_9);

static void MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_52_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0(
  MR_Word TypeClassInfo_for_enum_20,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_52_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_93_95_48_7_p_in__sparse_bitset_0(
  MR_Word TypeClassInfo_for_enum_29,
  MR_Word V_8_8,
  MR_Integer V_10_10,
  MR_Unsigned V_11_11,
  MR_Integer V_12_12,
  MR_Word V_19_13,
  MR_Word * V_20_14);

static MR_bool MR_CALL 
mercury__pprint__dynamic_cast_to_robdd_2_p_0(
  MR_Word TypeInfo_for_T1_14,
  MR_Word * TypeInfo_for_T_13,
  MR_Box X_3,
  MR_Word * R_4);

static MR_bool MR_CALL 
mercury__pprint__dynamic_cast_to_map_pair_2_p_0(
  MR_Word TypeInfo_for_T1_20,
  MR_Word * TypeInfo_for_T_18,
  MR_Word * TypeInfo_for_T_19,
  MR_Box X_3,
  MR_Word * MP_4);

static MR_bool MR_CALL 
mercury__pprint__dynamic_cast_to_map_2_p_0(
  MR_Word TypeInfo_for_T1_20,
  MR_Word * TypeInfo_for_T_18,
  MR_Word * TypeInfo_for_T_19,
  MR_Box X_3,
  MR_Word * M_4);

static MR_bool MR_CALL 
mercury__pprint__dynamic_cast_to_list_2_p_0(
  MR_Word TypeInfo_for_T1_14,
  MR_Word * TypeInfo_for_T_13,
  MR_Box X_3,
  MR_Word * L_4);

static MR_bool MR_CALL 
mercury__pprint__dynamic_cast_to_version_array_2_p_0(
  MR_Word TypeInfo_for_T1_14,
  MR_Word * TypeInfo_for_T_13,
  MR_Box X_3,
  MR_Box * VA_4);

static MR_Integer MR_CALL 
mercury__pprint__adjusted_by_2_f_0(
  MR_Integer Priority_1,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
mercury__pprint__maybe_parens_3_f_0(
  MR_Integer ParentPriority_5,
  MR_Integer OpPriority_6,
  MR_Word Doc_7);

static MR_Word MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_51_55_95_95_91_50_93_95_48_2_f_in__list_0(
  MR_Integer Var_12,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
mercury__pprint____Unify____depth_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__pprint____Compare____depth_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__pprint____Unify____doc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__pprint____Compare____doc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__pprint____Unify____map_pair_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static void MR_CALL 
mercury__pprint____Compare____map_pair_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5);

static MR_Box MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____character__arity0______pprint__doc_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____float__arity0______pprint__doc_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____uint64__arity0______pprint__doc_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____uint32__arity0______pprint__doc_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____uint16__arity0______pprint__doc_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____uint8__arity0______pprint__doc_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____uint__arity0______pprint__doc_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____int64__arity0______pprint__doc_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____int32__arity0______pprint__doc_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____int16__arity0______pprint__doc_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____int8__arity0______pprint__doc_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____int__arity0______pprint__doc_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____string__arity0______pprint__doc_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____pprint__doc__arity0______pprint__doc_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);


static /* final */ const MR_Box mercury__pprint_scalar_common_1[18][2];

static /* final */ const MR_Box mercury__pprint_scalar_common_2[1][3];

static /* final */ const MR_Box mercury__pprint_scalar_common_3[1][4];

static /* final */ const MR_Box mercury__pprint_scalar_common_4[2][5];

static /* final */ const MR_Box mercury__pprint_scalar_common_5[1][1];




static /* final */ const MR_Box mercury__pprint_scalar_common_1[18][2] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_pprint__doc__arity1__pprint__doc__arity0__)),
    ((MR_Box) (&mercury__pprint__pprint__type_ctor_info_doc_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_pprint__doc__arity1__string__arity0__)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    ((MR_Box) (base_typeclass_info_enum__enum__arity1__int__arity0__)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 3 */
  {
    ((MR_Box) (base_typeclass_info_pprint__doc__arity1__int__arity0__)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 4 */
  {
    ((MR_Box) (base_typeclass_info_ops__op_table__arity1__ops__mercury_op_table__arity0__)),
    ((MR_Box) (&mercury__ops__ops__type_ctor_info_mercury_op_table_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1)),
    ((MR_Box) (&mercury__pprint_scalar_common_1[6]))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__type_desc__type_desc__type_ctor_info_type_desc_0))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_Unsigned) 1U)),
    ((MR_Box) ((MR_String) "..."))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_Unsigned) 1U)),
    ((MR_Box) ((MR_String) " "))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_Unsigned) 1U)),
    ((MR_Box) ((MR_String) " -> "))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_Unsigned) 1U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_Unsigned) 1U)),
    ((MR_Box) ((MR_String) ";"))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_Unsigned) 1U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_Unsigned) 1U)),
    ((MR_Box) ((MR_String) ", "))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_Unsigned) 1U)),
    ((MR_Box) ((MR_String) "; "))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_Unsigned) 1U)),
    ((MR_Box) ((MR_String) ": "))
  },
};

static /* final */ const MR_Box mercury__pprint_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__pprint_scalar_common_3[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__pprint_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__pprint_scalar_common_4[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__pprint_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__pprint_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__pprint_scalar_common_5[1][1] = {
  /* row 0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
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



const MR_TypeCtorInfo_Struct mercury__pprint__pprint__type_ctor_info_depth_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__pprint____Unify____depth_0_0_10001)),
  ((MR_Box) (mercury__pprint____Compare____depth_0_0_10001)),
  (MR_String) "pprint",
  (MR_String) "depth",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_DuFunctorDesc mercury__pprint__pprint__du_functor_desc_doc_0_0 = {
  (MR_String) "NIL",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__pprint__pprint__field_types_doc_0_1[2] = {
  (MR_PseudoTypeInfo) (&mercury__pprint__pprint__type_ctor_info_doc_0),
  (MR_PseudoTypeInfo) (&mercury__pprint__pprint__type_ctor_info_doc_0)
};

static const MR_DuFunctorDesc mercury__pprint__pprint__du_functor_desc_doc_0_1 = {
  (MR_String) "SEQ",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mercury__pprint__pprint__field_types_doc_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__pprint__pprint__field_types_doc_0_2[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__pprint__pprint__type_ctor_info_doc_0)
};

static const MR_DuFunctorDesc mercury__pprint__pprint__du_functor_desc_doc_0_2 = {
  (MR_String) "NEST",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  mercury__pprint__pprint__field_types_doc_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__pprint__pprint__field_types_doc_0_3[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__pprint__pprint__type_ctor_info_doc_0)
};

static const MR_DuFunctorDesc mercury__pprint__pprint__du_functor_desc_doc_0_3 = {
  (MR_String) "LABEL",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(3),
  mercury__pprint__pprint__field_types_doc_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__pprint__pprint__field_types_doc_0_4[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc mercury__pprint__pprint__du_functor_desc_doc_0_4 = {
  (MR_String) "TEXT",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(4),
  mercury__pprint__pprint__field_types_doc_0_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mercury__pprint__pprint__du_functor_desc_doc_0_5 = {
  (MR_String) "LINE",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(5),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__pprint__pprint__field_types_doc_0_6[1] = {
  (MR_PseudoTypeInfo) (&mercury__pprint__pprint__type_ctor_info_doc_0)
};

static const MR_DuFunctorDesc mercury__pprint__pprint__du_functor_desc_doc_0_6 = {
  (MR_String) "GROUP",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 2,
  INT32_C(6),
  mercury__pprint__pprint__field_types_doc_0_6,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__pprint__pprint__field_types_doc_0_7[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__univ__univ__type_ctor_info_univ_0)
};

static const MR_DuFunctorDesc mercury__pprint__pprint__du_functor_desc_doc_0_7 = {
  (MR_String) "DOC",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 3,
  INT32_C(7),
  mercury__pprint__pprint__field_types_doc_0_7,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__pprint__pprint__du_stag_ordered_doc_0_0[2] = {
  &mercury__pprint__pprint__du_functor_desc_doc_0_0,
  &mercury__pprint__pprint__du_functor_desc_doc_0_5
};

static const MR_DuFunctorDescPtr mercury__pprint__pprint__du_stag_ordered_doc_0_1[1] = {
  &mercury__pprint__pprint__du_functor_desc_doc_0_1
};

static const MR_DuFunctorDescPtr mercury__pprint__pprint__du_stag_ordered_doc_0_2[1] = {
  &mercury__pprint__pprint__du_functor_desc_doc_0_2
};

static const MR_DuFunctorDescPtr mercury__pprint__pprint__du_stag_ordered_doc_0_3[4] = {
  &mercury__pprint__pprint__du_functor_desc_doc_0_3,
  &mercury__pprint__pprint__du_functor_desc_doc_0_4,
  &mercury__pprint__pprint__du_functor_desc_doc_0_6,
  &mercury__pprint__pprint__du_functor_desc_doc_0_7
};

static const MR_DuPtagLayout mercury__pprint__pprint__du_ptag_ordered_doc_0[4] = {
  {
    UINT32_C(2),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mercury__pprint__pprint__du_stag_ordered_doc_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__pprint__pprint__du_stag_ordered_doc_0_1,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__pprint__pprint__du_stag_ordered_doc_0_2,
    INT8_C(-1)
  },
  {
    UINT32_C(4),
    MR_SECTAG_REMOTE_FULL_WORD,
    mercury__pprint__pprint__du_stag_ordered_doc_0_3,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr mercury__pprint__pprint__du_name_ordered_doc_0[8] = {
  &mercury__pprint__pprint__du_functor_desc_doc_0_7,
  &mercury__pprint__pprint__du_functor_desc_doc_0_6,
  &mercury__pprint__pprint__du_functor_desc_doc_0_3,
  &mercury__pprint__pprint__du_functor_desc_doc_0_5,
  &mercury__pprint__pprint__du_functor_desc_doc_0_2,
  &mercury__pprint__pprint__du_functor_desc_doc_0_0,
  &mercury__pprint__pprint__du_functor_desc_doc_0_1,
  &mercury__pprint__pprint__du_functor_desc_doc_0_4
};

static const MR_Integer mercury__pprint__pprint__functor_number_map_doc_0[8] = {
  (MR_Integer) 5,
  (MR_Integer) 6,
  (MR_Integer) 4,
  (MR_Integer) 2,
  (MR_Integer) 7,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__pprint__pprint__type_ctor_info_doc_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__pprint____Unify____doc_0_0_10001)),
  ((MR_Box) (mercury__pprint____Compare____doc_0_0_10001)),
  (MR_String) "pprint",
  (MR_String) "doc",
  {     mercury__pprint__pprint__du_name_ordered_doc_0 },
  {     mercury__pprint__pprint__du_ptag_ordered_doc_0 },
  (MR_Integer) 8,
  UINT16_C(4),
  mercury__pprint__pprint__functor_number_map_doc_0
};

static const MR_PseudoTypeInfo mercury__pprint__pprint__field_types_map_pair_2_0[2] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) ((MR_Integer) 2)
};

static const MR_DuFunctorDesc mercury__pprint__pprint__du_functor_desc_map_pair_2_0 = {
  (MR_String) "map_pair",
  INT16_C(2),
  UINT16_C(3),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__pprint__pprint__field_types_map_pair_2_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__pprint__pprint__du_stag_ordered_map_pair_2_0[1] = {
  &mercury__pprint__pprint__du_functor_desc_map_pair_2_0
};

static const MR_DuPtagLayout mercury__pprint__pprint__du_ptag_ordered_map_pair_2[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__pprint__pprint__du_stag_ordered_map_pair_2_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr mercury__pprint__pprint__du_name_ordered_map_pair_2[1] = {
  &mercury__pprint__pprint__du_functor_desc_map_pair_2_0
};

static const MR_Integer mercury__pprint__pprint__functor_number_map_map_pair_2[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__pprint__pprint__type_ctor_info_map_pair_2 = {
  (MR_Integer) 2,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__pprint____Unify____map_pair_2_0_10001)),
  ((MR_Box) (mercury__pprint____Compare____map_pair_2_0_10001)),
  (MR_String) "pprint",
  (MR_String) "map_pair",
  {     mercury__pprint__pprint__du_name_ordered_map_pair_2 },
  {     mercury__pprint__pprint__du_ptag_ordered_map_pair_2 },
  (MR_Integer) 1,
  UINT16_C(4),
  mercury__pprint__pprint__functor_number_map_map_pair_2
};

const MR_BaseTypeclassInfo base_typeclass_info_pprint__doc__arity1__character__arity0__[6] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) (mercury__pprint__ClassMethod_for_pprint__doc____character__arity0______pprint__doc_2_2_f_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_pprint__doc__arity1__float__arity0__[6] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) (mercury__pprint__ClassMethod_for_pprint__doc____float__arity0______pprint__doc_2_2_f_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_pprint__doc__arity1__uint64__arity0__[6] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) (mercury__pprint__ClassMethod_for_pprint__doc____uint64__arity0______pprint__doc_2_2_f_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_pprint__doc__arity1__uint32__arity0__[6] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) (mercury__pprint__ClassMethod_for_pprint__doc____uint32__arity0______pprint__doc_2_2_f_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_pprint__doc__arity1__uint16__arity0__[6] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) (mercury__pprint__ClassMethod_for_pprint__doc____uint16__arity0______pprint__doc_2_2_f_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_pprint__doc__arity1__uint8__arity0__[6] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) (mercury__pprint__ClassMethod_for_pprint__doc____uint8__arity0______pprint__doc_2_2_f_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_pprint__doc__arity1__uint__arity0__[6] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) (mercury__pprint__ClassMethod_for_pprint__doc____uint__arity0______pprint__doc_2_2_f_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_pprint__doc__arity1__int64__arity0__[6] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) (mercury__pprint__ClassMethod_for_pprint__doc____int64__arity0______pprint__doc_2_2_f_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_pprint__doc__arity1__int32__arity0__[6] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) (mercury__pprint__ClassMethod_for_pprint__doc____int32__arity0______pprint__doc_2_2_f_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_pprint__doc__arity1__int16__arity0__[6] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) (mercury__pprint__ClassMethod_for_pprint__doc____int16__arity0______pprint__doc_2_2_f_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_pprint__doc__arity1__int8__arity0__[6] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) (mercury__pprint__ClassMethod_for_pprint__doc____int8__arity0______pprint__doc_2_2_f_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_pprint__doc__arity1__int__arity0__[6] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) (mercury__pprint__ClassMethod_for_pprint__doc____int__arity0______pprint__doc_2_2_f_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_pprint__doc__arity1__string__arity0__[6] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) (mercury__pprint__ClassMethod_for_pprint__doc____string__arity0______pprint__doc_2_2_f_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_pprint__doc__arity1__pprint__doc__arity0__[6] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) (mercury__pprint__ClassMethod_for_pprint__doc____pprint__doc__arity0______pprint__doc_2_2_f_0_10001))
};

static const MR_ConstString mercury__pprint__pprint__type_class_id_var_names_doc_1[1] = {
  (MR_String) "T"
};

static const MR_TypeClassMethod mercury__pprint__pprint__type_class_id_method_ids_doc_1[1] = {
  {
    (MR_String) "doc",
    (MR_Integer) 3,
    MR_FUNCTION
  }
};

static const MR_TypeClassId mercury__pprint__pprint__type_class_id_doc_1 = {
  (MR_String) "pprint",
  (MR_String) "doc",
  (MR_Integer) 1,
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__pprint__pprint__type_class_id_var_names_doc_1,
  mercury__pprint__pprint__type_class_id_method_ids_doc_1
};

const MR_TypeClassDeclStruct mercury__pprint__pprint__type_class_decl_doc_1 = {
  &mercury__pprint__pprint__type_class_id_doc_1,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

static MR_Integer MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  {
    return (MR_Integer) 1200;
  }
}

MR_Word MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____pprint__doc__arity0______pprint__doc_2_2_f_0(
  MR_Integer HeadVar__1_4,
  MR_Word Doc_5)
{
  {
    MR_Word Doc_3;

    Doc_3 = mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_112_114_105_110_116_95_95_100_111_99_95_95_95_95_112_112_114_105_110_116_95_95_100_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_112_114_105_110_116_95_95_100_111_99_95_50_95_95_91_49_93_95_48_2_f_0(Doc_5);
    return Doc_3;
  }
}

MR_Word MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_112_114_105_110_116_95_95_100_111_99_95_95_95_95_112_112_114_105_110_116_95_95_100_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_112_114_105_110_116_95_95_100_111_99_95_50_95_95_91_49_93_95_48_2_f_0(
  MR_Word Doc_5)
{
  {
    MR_Word Doc_3 = Doc_5;

    return Doc_3;
  }
}

MR_Word MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____string__arity0______pprint__doc_2_2_f_0(
  MR_Integer HeadVar__1_4,
  MR_String String_5)
{
  {
    MR_Word HeadVar__3_3;

    HeadVar__3_3 = mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_112_114_105_110_116_95_95_100_111_99_95_95_95_95_115_116_114_105_110_103_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_112_114_105_110_116_95_95_100_111_99_95_50_95_95_91_49_93_95_48_2_f_0(String_5);
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_112_114_105_110_116_95_95_100_111_99_95_95_95_95_115_116_114_105_110_103_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_112_114_105_110_116_95_95_100_111_99_95_50_95_95_91_49_93_95_48_2_f_0(
  MR_String String_5)
{
  {
    MR_Word HeadVar__3_3;

    {
      HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeadVar__3_3, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), HeadVar__3_3, 1) = ((MR_Box) (String_5));
    }
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____int__arity0______pprint__doc_2_2_f_0(
  MR_Integer HeadVar__1_4,
  MR_Integer Int_5)
{
  {
    MR_Word HeadVar__3_3;

    HeadVar__3_3 = mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_112_114_105_110_116_95_95_100_111_99_95_95_95_95_105_110_116_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_112_114_105_110_116_95_95_100_111_99_95_50_95_95_91_49_93_95_48_2_f_0(Int_5);
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_112_114_105_110_116_95_95_100_111_99_95_95_95_95_105_110_116_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_112_114_105_110_116_95_95_100_111_99_95_50_95_95_91_49_93_95_48_2_f_0(
  MR_Integer Int_5)
{
  {
    MR_Word HeadVar__3_3;
    MR_Word Var_6;

    {
      Var_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_6, 0) = ((MR_Box) (Int_5));
    }
    HeadVar__3_3 = mercury__pprint__poly_1_f_0(Var_6);
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____int8__arity0______pprint__doc_2_2_f_0(
  MR_Integer HeadVar__1_4,
  int8_t Int8_5)
{
  {
    MR_Word HeadVar__3_3;

    HeadVar__3_3 = mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_112_114_105_110_116_95_95_100_111_99_95_95_95_95_105_110_116_56_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_112_114_105_110_116_95_95_100_111_99_95_50_95_95_91_49_93_95_48_2_f_0(Int8_5);
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_112_114_105_110_116_95_95_100_111_99_95_95_95_95_105_110_116_56_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_112_114_105_110_116_95_95_100_111_99_95_50_95_95_91_49_93_95_48_2_f_0(
  int8_t Int8_5)
{
  {
    MR_Word HeadVar__3_3;
    MR_String Var_6;

{
#define MR_PROC_LABEL mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_112_114_105_110_116_95_95_100_111_99_95_95_95_95_105_110_116_56_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_112_114_105_110_116_95_95_100_111_99_95_50_95_95_91_49_93_95_48_2_f_0

	int8_t I8;
	MR_String S;

	I8 =  Int8_5 ;
		{

    char buffer[5]; // 1 for sign, 3 for digits, 1 for nul.
    sprintf(buffer, "%" PRId8, I8);
    MR_allocate_aligned_string_msg(S, strlen(buffer), MR_ALLOC_ID);
    strcpy(S, buffer);


		;}
#undef MR_PROC_LABEL
	 Var_6  = S;
}
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeadVar__3_3, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), HeadVar__3_3, 1) = ((MR_Box) (Var_6));
    }
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____int16__arity0______pprint__doc_2_2_f_0(
  MR_Integer HeadVar__1_4,
  int16_t Int16_5)
{
  {
    MR_Word HeadVar__3_3;

    HeadVar__3_3 = mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_112_114_105_110_116_95_95_100_111_99_95_95_95_95_105_110_116_49_54_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_112_114_105_110_116_95_95_100_111_99_95_50_95_95_91_49_93_95_48_2_f_0(Int16_5);
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_112_114_105_110_116_95_95_100_111_99_95_95_95_95_105_110_116_49_54_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_112_114_105_110_116_95_95_100_111_99_95_50_95_95_91_49_93_95_48_2_f_0(
  int16_t Int16_5)
{
  {
    MR_Word HeadVar__3_3;
    MR_String Var_6;

{
#define MR_PROC_LABEL mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_112_114_105_110_116_95_95_100_111_99_95_95_95_95_105_110_116_49_54_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_112_114_105_110_116_95_95_100_111_99_95_50_95_95_91_49_93_95_48_2_f_0

	int16_t I16;
	MR_String S;

	I16 =  Int16_5 ;
		{

    char buffer[7]; // 1 for sign, 5 for digits, 1 for nul.
    sprintf(buffer, "%" PRId16, I16);
    MR_allocate_aligned_string_msg(S, strlen(buffer), MR_ALLOC_ID);
    strcpy(S, buffer);


		;}
#undef MR_PROC_LABEL
	 Var_6  = S;
}
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeadVar__3_3, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), HeadVar__3_3, 1) = ((MR_Box) (Var_6));
    }
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____int32__arity0______pprint__doc_2_2_f_0(
  MR_Integer HeadVar__1_4,
  int32_t Int32_5)
{
  {
    MR_Word HeadVar__3_3;

    HeadVar__3_3 = mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_112_114_105_110_116_95_95_100_111_99_95_95_95_95_105_110_116_51_50_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_112_114_105_110_116_95_95_100_111_99_95_50_95_95_91_49_93_95_48_2_f_0(Int32_5);
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_112_114_105_110_116_95_95_100_111_99_95_95_95_95_105_110_116_51_50_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_112_114_105_110_116_95_95_100_111_99_95_50_95_95_91_49_93_95_48_2_f_0(
  int32_t Int32_5)
{
  {
    MR_Word HeadVar__3_3;
    MR_String Var_6;

{
#define MR_PROC_LABEL mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_112_114_105_110_116_95_95_100_111_99_95_95_95_95_105_110_116_51_50_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_112_114_105_110_116_95_95_100_111_99_95_50_95_95_91_49_93_95_48_2_f_0

	int32_t I32;
	MR_String S;

	I32 =  Int32_5 ;
		{

    char buffer[12]; // 1 for sign, 10 for digits, 1 for nul.
    sprintf(buffer, "%" PRId32, I32);
    MR_allocate_aligned_string_msg(S, strlen(buffer), MR_ALLOC_ID);
    strcpy(S, buffer);


		;}
#undef MR_PROC_LABEL
	 Var_6  = S;
}
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeadVar__3_3, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), HeadVar__3_3, 1) = ((MR_Box) (Var_6));
    }
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____int64__arity0______pprint__doc_2_2_f_0(
  MR_Integer HeadVar__1_4,
  int64_t Int64_5)
{
  {
    MR_Word HeadVar__3_3;

    HeadVar__3_3 = mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_112_114_105_110_116_95_95_100_111_99_95_95_95_95_105_110_116_54_52_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_112_114_105_110_116_95_95_100_111_99_95_50_95_95_91_49_93_95_48_2_f_0(Int64_5);
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_112_114_105_110_116_95_95_100_111_99_95_95_95_95_105_110_116_54_52_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_112_114_105_110_116_95_95_100_111_99_95_50_95_95_91_49_93_95_48_2_f_0(
  int64_t Int64_5)
{
  {
    MR_Word HeadVar__3_3;
    MR_String Var_6;

{
#define MR_PROC_LABEL mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_112_114_105_110_116_95_95_100_111_99_95_95_95_95_105_110_116_54_52_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_112_114_105_110_116_95_95_100_111_99_95_50_95_95_91_49_93_95_48_2_f_0

	int64_t I64;
	MR_String S;

	I64 =  Int64_5 ;
		{

    char buffer[21]; // 1 for sign, 19 for digits, 1 for nul.
    sprintf(buffer, "%" PRId64, I64);
    MR_allocate_aligned_string_msg(S, strlen(buffer), MR_ALLOC_ID);
    strcpy(S, buffer);


		;}
#undef MR_PROC_LABEL
	 Var_6  = S;
}
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeadVar__3_3, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), HeadVar__3_3, 1) = ((MR_Box) (Var_6));
    }
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____uint__arity0______pprint__doc_2_2_f_0(
  MR_Integer HeadVar__1_4,
  MR_Unsigned UInt_5)
{
  {
    MR_Word HeadVar__3_3;

    HeadVar__3_3 = mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_112_114_105_110_116_95_95_100_111_99_95_95_95_95_117_105_110_116_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_112_114_105_110_116_95_95_100_111_99_95_50_95_95_91_49_93_95_48_2_f_0(UInt_5);
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_112_114_105_110_116_95_95_100_111_99_95_95_95_95_117_105_110_116_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_112_114_105_110_116_95_95_100_111_99_95_50_95_95_91_49_93_95_48_2_f_0(
  MR_Unsigned UInt_5)
{
  {
    MR_Word HeadVar__3_3;
    MR_String Var_6;

{
#define MR_PROC_LABEL mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_112_114_105_110_116_95_95_100_111_99_95_95_95_95_117_105_110_116_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_112_114_105_110_116_95_95_100_111_99_95_50_95_95_91_49_93_95_48_2_f_0

	MR_Unsigned U;
	MR_String Str;

	U =  UInt_5 ;
		{

    char buffer[21];
    sprintf(buffer, "%" MR_INTEGER_LENGTH_MODIFIER "u", U);
    MR_allocate_aligned_string_msg(Str, strlen(buffer), MR_ALLOC_ID);
    strcpy(Str, buffer);


		;}
#undef MR_PROC_LABEL
	 Var_6  = Str;
}
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeadVar__3_3, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), HeadVar__3_3, 1) = ((MR_Box) (Var_6));
    }
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____uint8__arity0______pprint__doc_2_2_f_0(
  MR_Integer HeadVar__1_4,
  uint8_t UInt8_5)
{
  {
    MR_Word HeadVar__3_3;

    HeadVar__3_3 = mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_112_114_105_110_116_95_95_100_111_99_95_95_95_95_117_105_110_116_56_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_112_114_105_110_116_95_95_100_111_99_95_50_95_95_91_49_93_95_48_2_f_0(UInt8_5);
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_112_114_105_110_116_95_95_100_111_99_95_95_95_95_117_105_110_116_56_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_112_114_105_110_116_95_95_100_111_99_95_50_95_95_91_49_93_95_48_2_f_0(
  uint8_t UInt8_5)
{
  {
    MR_Word HeadVar__3_3;
    MR_String Var_6;

{
#define MR_PROC_LABEL mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_112_114_105_110_116_95_95_100_111_99_95_95_95_95_117_105_110_116_56_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_112_114_105_110_116_95_95_100_111_99_95_50_95_95_91_49_93_95_48_2_f_0

	uint8_t U8;
	MR_String S;

	U8 =  UInt8_5 ;
		{

    // Use a larger buffer than necessary (3 bytes for digits, 1 for nul)
    // to avoid spurious warning from gcc -Werror=format-overflow.
    char buffer[24];
    sprintf(buffer, "%" PRIu8, U8);
    MR_allocate_aligned_string_msg(S, strlen(buffer), MR_ALLOC_ID);
    strcpy(S, buffer);


		;}
#undef MR_PROC_LABEL
	 Var_6  = S;
}
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeadVar__3_3, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), HeadVar__3_3, 1) = ((MR_Box) (Var_6));
    }
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____uint16__arity0______pprint__doc_2_2_f_0(
  MR_Integer HeadVar__1_4,
  uint16_t UInt16_5)
{
  {
    MR_Word HeadVar__3_3;

    HeadVar__3_3 = mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_112_114_105_110_116_95_95_100_111_99_95_95_95_95_117_105_110_116_49_54_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_112_114_105_110_116_95_95_100_111_99_95_50_95_95_91_49_93_95_48_2_f_0(UInt16_5);
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_112_114_105_110_116_95_95_100_111_99_95_95_95_95_117_105_110_116_49_54_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_112_114_105_110_116_95_95_100_111_99_95_50_95_95_91_49_93_95_48_2_f_0(
  uint16_t UInt16_5)
{
  {
    MR_Word HeadVar__3_3;
    MR_String Var_6;

{
#define MR_PROC_LABEL mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_112_114_105_110_116_95_95_100_111_99_95_95_95_95_117_105_110_116_49_54_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_112_114_105_110_116_95_95_100_111_99_95_50_95_95_91_49_93_95_48_2_f_0

	uint16_t U16;
	MR_String S;

	U16 =  UInt16_5 ;
		{

    char buffer[6]; // 5 for digits, 1 for nul.
    sprintf(buffer, "%" PRIu16, U16);
    MR_allocate_aligned_string_msg(S, strlen(buffer), MR_ALLOC_ID);
    strcpy(S, buffer);


		;}
#undef MR_PROC_LABEL
	 Var_6  = S;
}
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeadVar__3_3, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), HeadVar__3_3, 1) = ((MR_Box) (Var_6));
    }
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____uint32__arity0______pprint__doc_2_2_f_0(
  MR_Integer HeadVar__1_4,
  uint32_t UInt32_5)
{
  {
    MR_Word HeadVar__3_3;

    HeadVar__3_3 = mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_112_114_105_110_116_95_95_100_111_99_95_95_95_95_117_105_110_116_51_50_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_112_114_105_110_116_95_95_100_111_99_95_50_95_95_91_49_93_95_48_2_f_0(UInt32_5);
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_112_114_105_110_116_95_95_100_111_99_95_95_95_95_117_105_110_116_51_50_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_112_114_105_110_116_95_95_100_111_99_95_50_95_95_91_49_93_95_48_2_f_0(
  uint32_t UInt32_5)
{
  {
    MR_Word HeadVar__3_3;
    MR_String Var_6;

{
#define MR_PROC_LABEL mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_112_114_105_110_116_95_95_100_111_99_95_95_95_95_117_105_110_116_51_50_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_112_114_105_110_116_95_95_100_111_99_95_50_95_95_91_49_93_95_48_2_f_0

	uint32_t U32;
	MR_String S;

	U32 =  UInt32_5 ;
		{

    char buffer[11]; // 10 for digits, 1 for nul.
    sprintf(buffer, "%" PRIu32, U32);
    MR_allocate_aligned_string_msg(S, strlen(buffer), MR_ALLOC_ID);
    strcpy(S, buffer);


		;}
#undef MR_PROC_LABEL
	 Var_6  = S;
}
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeadVar__3_3, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), HeadVar__3_3, 1) = ((MR_Box) (Var_6));
    }
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____uint64__arity0______pprint__doc_2_2_f_0(
  MR_Integer HeadVar__1_4,
  uint64_t UInt64_5)
{
  {
    MR_Word HeadVar__3_3;

    HeadVar__3_3 = mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_112_114_105_110_116_95_95_100_111_99_95_95_95_95_117_105_110_116_54_52_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_112_114_105_110_116_95_95_100_111_99_95_50_95_95_91_49_93_95_48_2_f_0(UInt64_5);
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_112_114_105_110_116_95_95_100_111_99_95_95_95_95_117_105_110_116_54_52_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_112_114_105_110_116_95_95_100_111_99_95_50_95_95_91_49_93_95_48_2_f_0(
  uint64_t UInt64_5)
{
  {
    MR_Word HeadVar__3_3;
    MR_String Var_6;

{
#define MR_PROC_LABEL mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_112_114_105_110_116_95_95_100_111_99_95_95_95_95_117_105_110_116_54_52_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_112_114_105_110_116_95_95_100_111_99_95_50_95_95_91_49_93_95_48_2_f_0

	uint64_t U64;
	MR_String S;

	U64 =  UInt64_5 ;
		{

    char buffer[21]; // 20 for digits, 1 for nul.
    sprintf(buffer, "%" PRIu64, U64);
    MR_allocate_aligned_string_msg(S, strlen(buffer), MR_ALLOC_ID);
    strcpy(S, buffer);


		;}
#undef MR_PROC_LABEL
	 Var_6  = S;
}
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeadVar__3_3, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), HeadVar__3_3, 1) = ((MR_Box) (Var_6));
    }
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____float__arity0______pprint__doc_2_2_f_0(
  MR_Integer HeadVar__1_4,
  MR_Float Float_5)
{
  {
    MR_Word HeadVar__3_3;

    HeadVar__3_3 = mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_112_114_105_110_116_95_95_100_111_99_95_95_95_95_102_108_111_97_116_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_112_114_105_110_116_95_95_100_111_99_95_50_95_95_91_49_93_95_48_2_f_0(Float_5);
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_112_114_105_110_116_95_95_100_111_99_95_95_95_95_102_108_111_97_116_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_112_114_105_110_116_95_95_100_111_99_95_50_95_95_91_49_93_95_48_2_f_0(
  MR_Float Float_5)
{
  {
    MR_Word HeadVar__3_3;
    MR_Word Var_6;

    {
      Var_6 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_6, 0) = MR_box_float(Float_5);
    }
    HeadVar__3_3 = mercury__pprint__poly_1_f_0(Var_6);
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____character__arity0______pprint__doc_2_2_f_0(
  MR_Integer HeadVar__1_4,
  MR_Char Char_5)
{
  {
    MR_Word HeadVar__3_3;

    HeadVar__3_3 = mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_112_114_105_110_116_95_95_100_111_99_95_95_95_95_99_104_97_114_97_99_116_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_112_114_105_110_116_95_95_100_111_99_95_50_95_95_91_49_93_95_48_2_f_0(Char_5);
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_112_114_105_110_116_95_95_100_111_99_95_95_95_95_99_104_97_114_97_99_116_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_112_114_105_110_116_95_95_100_111_99_95_50_95_95_91_49_93_95_48_2_f_0(
  MR_Char Char_5)
{
  {
    MR_Word HeadVar__3_3;
    MR_Word Var_6;

    {
      Var_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_6, 0) = ((MR_Box) (MR_Word) (Char_5));
    }
    HeadVar__3_3 = mercury__pprint__poly_1_f_0(Var_6);
    return HeadVar__3_3;
  }
}

void MR_CALL 
mercury__pprint____Compare____map_pair_2_0(
  MR_Word TypeInfo_for_K_11,
  MR_Word TypeInfo_for_V_12,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Box ArgX1_4 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));
      MR_Box ArgY1_5 = (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0));
      MR_Box ArgX2_7 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1));
      MR_Box ArgY2_8 = (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1));
      MR_Word SubResult1_6;

      mercury__builtin__compare_3_p_0(TypeInfo_for_K_11, &SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
        mercury__builtin__compare_3_p_0(TypeInfo_for_V_12, HeadVar__1_1, ArgX2_7, ArgY2_8);
    }
  }
}

MR_bool MR_CALL 
mercury__pprint____Unify____map_pair_2_0(
  MR_Word TypeInfo_for_K_9,
  MR_Word TypeInfo_for_V_10,
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
    {
      MR_Box ArgX1_3 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0));
      MR_Box ArgY1_4 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));
      MR_Box ArgX2_5 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1));
      MR_Box ArgY2_6 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1));

      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_K_9, ArgX1_3, ArgY1_4);
      if (succeeded)
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_V_10, ArgX2_5, ArgY2_6);
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__pprint____Compare____doc_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer CastX_168 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_169 = (MR_Integer) (HeadVar__3_3);

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = (CastX_168 == CastY_169);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
              break;
            case (MR_Integer) 1:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_187 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
            MR_Word Var_188 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Word ArgY2_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word SubResult1_18;

                  mercury__pprint____Compare____doc_0_0(&SubResult1_18, Var_188, ArgY1_17);
                  succeeded = (SubResult1_18 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_18;
                  else
                  {
                    MR_Word next_value_of_HeadVar__2_2 = Var_187;
                    MR_Word next_value_of_HeadVar__3_3 = ArgY2_20;

                    // direct tailcall eliminated
                    ;
                    HeadVar__2_2 = next_value_of_HeadVar__2_2;
                    HeadVar__3_3 = next_value_of_HeadVar__3_3;
                    continue;
                  }
                }
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_185 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
            MR_Integer Var_186 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Integer ArgY1_48 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Word ArgY2_51 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word SubResult1_49;

                  succeeded = (Var_186 < ArgY1_48);
                  if (succeeded)
                    SubResult1_49 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_186 == ArgY1_48);
                    if (succeeded)
                      SubResult1_49 = (MR_Integer) 0;
                    else
                      SubResult1_49 = (MR_Integer) 2;
                  }
                  succeeded = (SubResult1_49 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_49;
                  else
                  {
                    MR_Word next_value_of_HeadVar__2_2 = Var_185;
                    MR_Word next_value_of_HeadVar__3_3 = ArgY2_51;

                    // direct tailcall eliminated
                    ;
                    HeadVar__2_2 = next_value_of_HeadVar__2_2;
                    HeadVar__3_3 = next_value_of_HeadVar__3_3;
                    continue;
                  }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_183 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                MR_String Var_184 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(HeadVar__3_3)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_String ArgY1_79 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                          MR_Word ArgY2_82 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                          MR_Word SubResult1_80;
                          MR_Integer V_7_196;

{
#define MR_PROC_LABEL mercury__pprint____Compare____doc_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  Var_184 ;
	S2 =  ArgY1_79 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 V_7_196  = Res;
}
                          succeeded = (V_7_196 < (MR_Integer) 0);
                          if (succeeded)
                            SubResult1_80 = (MR_Integer) 1;
                          else
                          {
                            succeeded = (V_7_196 == (MR_Integer) 0);
                            if (succeeded)
                              SubResult1_80 = (MR_Integer) 0;
                            else
                              SubResult1_80 = (MR_Integer) 2;
                          }
                          succeeded = (SubResult1_80 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult1_80;
                          else
                          {
                            MR_Word next_value_of_HeadVar__2_2 = Var_183;
                            MR_Word next_value_of_HeadVar__3_3 = ArgY2_82;

                            // direct tailcall eliminated
                            ;
                            HeadVar__2_2 = next_value_of_HeadVar__2_2;
                            HeadVar__3_3 = next_value_of_HeadVar__3_3;
                            continue;
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 2:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 3:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_String Var_189 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(HeadVar__3_3)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_String ArgY1_106 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                          MR_Integer V_7_204;

{
#define MR_PROC_LABEL mercury__pprint____Compare____doc_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  Var_189 ;
	S2 =  ArgY1_106 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 V_7_204  = Res;
}
                          succeeded = (V_7_204 < (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = (MR_Integer) 1;
                          else
                          {
                            succeeded = (V_7_204 == (MR_Integer) 0);
                            if (succeeded)
                              *HeadVar__1_1 = (MR_Integer) 0;
                            else
                              *HeadVar__1_1 = (MR_Integer) 2;
                          }
                        }
                        break;
                      case (MR_Integer) 2:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 3:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Var_182 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(HeadVar__3_3)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_Word ArgY1_137 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                          MR_Word next_value_of_HeadVar__2_2 = Var_182;
                          MR_Word next_value_of_HeadVar__3_3 = ArgY1_137;

                          // direct tailcall eliminated
                          ;
                          HeadVar__2_2 = next_value_of_HeadVar__2_2;
                          HeadVar__3_3 = next_value_of_HeadVar__3_3;
                          continue;
                        }
                        break;
                      case (MR_Integer) 3:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Var_180 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                MR_Integer Var_181 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(HeadVar__3_3)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 3:
                        {
                          MR_Integer ArgY1_164 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                          MR_Word ArgY2_167 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                          MR_Word SubResult1_165;

                          succeeded = (Var_181 < ArgY1_164);
                          if (succeeded)
                            SubResult1_165 = (MR_Integer) 1;
                          else
                          {
                            succeeded = (Var_181 == ArgY1_164);
                            if (succeeded)
                              SubResult1_165 = (MR_Integer) 0;
                            else
                              SubResult1_165 = (MR_Integer) 2;
                          }
                          succeeded = (SubResult1_165 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult1_165;
                          else
                            mercury__univ____Compare____univ_0_0(HeadVar__1_1, Var_180, ArgY2_167);
                        }
                        break;
                    }
                    break;
                }
              }
              break;
          }
          break;
      }
    break;
  }
}

MR_bool MR_CALL 
mercury__pprint____Unify____doc_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer CastX_27 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_28 = (MR_Integer) (HeadVar__2_2);

    // setup for model_semi tailcalls optimized into a loop
    ;
    succeeded = (CastX_27 == CastY_28);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_4 == CastX_3);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer CastX_19 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_20 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_20 == CastX_19);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_6;
            MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ArgY2_8;
            MR_Word next_value_of_HeadVar__1_1;
            MR_Word next_value_of_HeadVar__2_2;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
              succeeded = mercury__pprint____Unify____doc_0_0(ArgX1_5, ArgY1_6);
              if (succeeded)
              {
                // direct tailcall eliminated
                ;
                next_value_of_HeadVar__1_1 = ArgX2_7;
                next_value_of_HeadVar__2_2 = ArgY2_8;
                HeadVar__1_1 = next_value_of_HeadVar__1_1;
                HeadVar__2_2 = next_value_of_HeadVar__2_2;
                continue;
              }
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer ArgX1_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_Integer ArgY1_10;
            MR_Word ArgX2_11 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ArgY2_12;
            MR_Word next_value_of_HeadVar__1_1;
            MR_Word next_value_of_HeadVar__2_2;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_12 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
              succeeded = (ArgX1_9 == ArgY1_10);
              if (succeeded)
              {
                // direct tailcall eliminated
                ;
                next_value_of_HeadVar__1_1 = ArgX2_11;
                next_value_of_HeadVar__2_2 = ArgY2_12;
                HeadVar__1_1 = next_value_of_HeadVar__1_1;
                HeadVar__2_2 = next_value_of_HeadVar__2_2;
                continue;
              }
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_String ArgX1_13 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_String ArgY1_14;
                MR_Word ArgX2_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Word ArgY2_16;
                MR_Word next_value_of_HeadVar__1_1;
                MR_Word next_value_of_HeadVar__2_2;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  ArgY1_14 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  ArgY2_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  succeeded = (strcmp(ArgX1_13, ArgY1_14) == 0);
                  if (succeeded)
                  {
                    // direct tailcall eliminated
                    ;
                    next_value_of_HeadVar__1_1 = ArgX2_15;
                    next_value_of_HeadVar__2_2 = ArgY2_16;
                    HeadVar__1_1 = next_value_of_HeadVar__1_1;
                    HeadVar__2_2 = next_value_of_HeadVar__2_2;
                    continue;
                  }
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_String ArgX1_17 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_String ArgY1_18;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  ArgY1_18 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  succeeded = (strcmp(ArgX1_17, ArgY1_18) == 0);
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word ArgX1_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_22;
                MR_Word next_value_of_HeadVar__1_1;
                MR_Word next_value_of_HeadVar__2_2;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (succeeded)
                {
                  ArgY1_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  // direct tailcall eliminated
                  ;
                  next_value_of_HeadVar__1_1 = ArgX1_21;
                  next_value_of_HeadVar__2_2 = ArgY1_22;
                  HeadVar__1_1 = next_value_of_HeadVar__1_1;
                  HeadVar__2_2 = next_value_of_HeadVar__2_2;
                  continue;
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Integer ArgX1_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Integer ArgY1_24;
                MR_Word ArgX2_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Word ArgY2_26;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
                if (succeeded)
                {
                  ArgY1_24 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  ArgY2_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  succeeded = (ArgX1_23 == ArgY1_24);
                  if (succeeded)
                    succeeded = mercury__univ____Unify____univ_0_0(ArgX2_25, ArgY2_26);
                }
              }
              break;
          }
          break;
      }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__pprint____Compare____depth_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = HeadVar__3_3;

    succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Cast_HeadVar1_4 == Cast_HeadVar2_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    }
  }
}

MR_bool MR_CALL 
mercury__pprint____Unify____depth_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
    return succeeded;
  }
}

MR_Word MR_CALL 
mercury__pprint__doc_2_f_0(
  MR_Word TypeClassInfo_for_doc_4,
  MR_Integer HeadVar__1_1,
  MR_Box HeadVar__2_2)
{
  {
    MR_Word HeadVar__3_3;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_doc_4, (MR_Integer) 0)), (MR_Integer) 5))));
    MR_Box conv1_HeadVar__3_3;

    conv1_HeadVar__3_3 = func_0(((MR_Box) (TypeClassInfo_for_doc_4)), ((MR_Box) (HeadVar__1_1)), HeadVar__2_2);
    HeadVar__3_3 = ((MR_Word) (conv1_HeadVar__3_3));
    return HeadVar__3_3;
  }
}

void MR_CALL 
mercury__pprint__layout_best_5_p_1(
  MR_Word TypeInfo_for_T_14,
  MR_Word P_6,
  MR_Integer W_7,
  MR_Word X_8,
  MR_Box S0_9,
  MR_Box * S_10)
{
  {
    MR_Integer Var_11;

    mercury__pprint__lb_8_p_1(TypeInfo_for_T_14, P_6, W_7, (MR_Integer) 0, &Var_11, (MR_String) "", X_8, S0_9, S_10);
  }
}

void MR_CALL 
mercury__pprint__lb_8_p_1(
  MR_Word TypeInfo_for_T_83,
  MR_Word P_1,
  MR_Integer W_2,
  MR_Integer HeadVar__3_3,
  MR_Integer * K_4,
  MR_String I_5,
  MR_Word HeadVar__6_6,
  MR_Box HeadVar__7_7,
  MR_Box * S_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) HeadVar__6_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__6_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *K_4 = HeadVar__3_3;
              *S_8 = HeadVar__7_7;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box S1_52;
              void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
              void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);

              *K_4 = mercury__string__count_codepoints_1_f_0(I_5);
              func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));
              func_0(((MR_Box) (P_1)), ((MR_Box) ((MR_String) "\n")), HeadVar__7_7, &S1_52);
              func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));
              func_1(((MR_Box) (P_1)), ((MR_Box) (I_5)), S1_52, S_8);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word X_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 0))));
          MR_Word Y_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 1))));
          MR_Integer K1_23;
          MR_Box S1_24;
          MR_Integer next_value_of_HeadVar__3_3;
          MR_Word next_value_of_HeadVar__6_6;
          MR_Box next_value_of_HeadVar__7_7;

          mercury__pprint__lb_8_p_1(TypeInfo_for_T_83, P_1, W_2, HeadVar__3_3, &K1_23, I_5, X_19, HeadVar__7_7, &S1_24);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__3_3 = K1_23;
          next_value_of_HeadVar__6_6 = Y_20;
          next_value_of_HeadVar__7_7 = S1_24;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          HeadVar__6_6 = next_value_of_HeadVar__6_6;
          HeadVar__7_7 = next_value_of_HeadVar__7_7;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer J_30 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__6_6, (MR_Integer) 0))));
          MR_Word X_31 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__6_6, (MR_Integer) 1))));
          MR_String Var_34;
          MR_String next_value_of_I_5;
          MR_Word next_value_of_HeadVar__6_6;

          Var_34 = mercury__pprint__extend_2_f_0(I_5, J_30);
          // direct tailcall eliminated
          ;
          next_value_of_I_5 = Var_34;
          next_value_of_HeadVar__6_6 = X_31;
          I_5 = next_value_of_I_5;
          HeadVar__6_6 = next_value_of_HeadVar__6_6;
          continue;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__6_6, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String L_40 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__6_6, (MR_Integer) 1))));
              MR_Word X_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__6_6, (MR_Integer) 2))));
              MR_String Var_44;
              MR_String next_value_of_I_5;
              MR_Word next_value_of_HeadVar__6_6;

              mercury__string__append_3_p_2(I_5, L_40, &Var_44);
              // direct tailcall eliminated
              ;
              next_value_of_I_5 = Var_44;
              next_value_of_HeadVar__6_6 = X_41;
              I_5 = next_value_of_I_5;
              HeadVar__6_6 = next_value_of_HeadVar__6_6;
              continue;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String T_79 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__6_6, (MR_Integer) 1))));
              MR_Integer Var_82;
              void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);

              Var_82 = mercury__string__count_codepoints_1_f_0(T_79);
              *K_4 = (MR_Integer) ((MR_Unsigned) HeadVar__3_3 + (MR_Unsigned) Var_82);
              func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));
              func_2(((MR_Box) (P_1)), ((MR_Box) (T_79)), HeadVar__7_7, S_8);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word X_59 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__6_6, (MR_Integer) 1))));
              MR_Integer Var_62 = (MR_Integer) ((MR_Unsigned) W_2 - (MR_Unsigned) HeadVar__3_3);
              MR_Integer Var_91;

              succeeded = mercury__pprint__ff_2_f_0(X_59, Var_62, &Var_91);
              if (succeeded)
                mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_91_49_93_95_49_6_p_1(P_1, HeadVar__3_3, K_4, X_59, HeadVar__7_7, S_8);
              else
              {
                MR_Word next_value_of_HeadVar__6_6 = X_59;

                // direct tailcall eliminated
                ;
                HeadVar__6_6 = next_value_of_HeadVar__6_6;
                continue;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word TypeInfo_84_84;
              MR_Integer D_68 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__6_6, (MR_Integer) 1))));
              MR_Word U_69 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__6_6, (MR_Integer) 2))));
              MR_Word Var_72;
              MR_Box Var_73;
              MR_Word next_value_of_HeadVar__6_6;

              TypeInfo_84_84 = ((MR_Word) ((MR_hl_field(MR_mktag(0), U_69, (MR_Integer) 0))));
              Var_73 = (MR_hl_field(MR_mktag(0), U_69, (MR_Integer) 1));
              Var_72 = mercury__pprint__to_doc_3_f_0(TypeInfo_84_84, D_68, (MR_Integer) 1000, Var_73);
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__6_6 = Var_72;
              HeadVar__6_6 = next_value_of_HeadVar__6_6;
              continue;
            }
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_91_49_93_95_49_6_p_1(
  MR_Word P_1,
  MR_Integer HeadVar__2_2,
  MR_Integer * K_3,
  MR_Word HeadVar__4_4,
  MR_Box HeadVar__5_5,
  MR_Box * S_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) HeadVar__4_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__4_4)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *K_3 = HeadVar__2_2;
              *S_6 = HeadVar__5_5;
            }
            break;
          case (MR_Integer) 1:
            {
              *K_3 = HeadVar__2_2;
              *S_6 = HeadVar__5_5;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word X_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
          MR_Word Y_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
          MR_Integer K1_17;
          MR_Box S1_18;
          MR_Integer next_value_of_HeadVar__2_2;
          MR_Word next_value_of_HeadVar__4_4;
          MR_Box next_value_of_HeadVar__5_5;

          mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_91_49_93_95_49_6_p_1(P_1, HeadVar__2_2, &K1_17, X_13, HeadVar__5_5, &S1_18);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = K1_17;
          next_value_of_HeadVar__4_4 = Y_14;
          next_value_of_HeadVar__5_5 = S1_18;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          HeadVar__4_4 = next_value_of_HeadVar__4_4;
          HeadVar__5_5 = next_value_of_HeadVar__5_5;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word X_23 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__4_4, (MR_Integer) 1))));
          MR_Word next_value_of_HeadVar__4_4 = X_23;

          // direct tailcall eliminated
          ;
          HeadVar__4_4 = next_value_of_HeadVar__4_4;
          continue;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__4_4, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word X_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__4_4, (MR_Integer) 2))));
              MR_Word next_value_of_HeadVar__4_4 = X_30;

              // direct tailcall eliminated
              ;
              HeadVar__4_4 = next_value_of_HeadVar__4_4;
              continue;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String T_54 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__4_4, (MR_Integer) 1))));
              MR_Integer Var_57;
              void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

              mercury__string__count_codepoints_2_p_0(T_54, &Var_57);
              *K_3 = (MR_Integer) ((MR_Unsigned) HeadVar__2_2 + (MR_Unsigned) Var_57);
              func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));
              func_0(((MR_Box) (P_1)), ((MR_Box) (T_54)), HeadVar__5_5, S_6);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word X_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__4_4, (MR_Integer) 1))));
              MR_Word next_value_of_HeadVar__4_4 = X_39;

              // direct tailcall eliminated
              ;
              HeadVar__4_4 = next_value_of_HeadVar__4_4;
              continue;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word TypeInfo_59_59;
              MR_Integer D_45 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__4_4, (MR_Integer) 1))));
              MR_Word U_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__4_4, (MR_Integer) 2))));
              MR_Word Var_49;
              MR_Box Var_50;
              MR_Word next_value_of_HeadVar__4_4;

              TypeInfo_59_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), U_46, (MR_Integer) 0))));
              Var_50 = (MR_hl_field(MR_mktag(0), U_46, (MR_Integer) 1));
              Var_49 = mercury__pprint__to_doc_3_f_0(TypeInfo_59_59, D_45, (MR_Integer) 1000, Var_50);
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__4_4 = Var_49;
              HeadVar__4_4 = next_value_of_HeadVar__4_4;
              continue;
            }
            break;
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__pprint__layout_best_5_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word P_6,
  MR_Integer W_7,
  MR_Word X_8,
  MR_Box S0_9,
  MR_Box * S_10)
{
  {
    MR_Integer Var_11;

    mercury__pprint__lb_8_p_0(TypeInfo_for_T_14, P_6, W_7, (MR_Integer) 0, &Var_11, (MR_String) "", X_8, S0_9, S_10);
  }
}

void MR_CALL 
mercury__pprint__lb_8_p_0(
  MR_Word TypeInfo_for_T_83,
  MR_Word P_1,
  MR_Integer W_2,
  MR_Integer HeadVar__3_3,
  MR_Integer * K_4,
  MR_String I_5,
  MR_Word HeadVar__6_6,
  MR_Box HeadVar__7_7,
  MR_Box * S_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) HeadVar__6_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__6_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *K_4 = HeadVar__3_3;
              *S_8 = HeadVar__7_7;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box S1_52;
              void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
              void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);

              *K_4 = mercury__string__count_codepoints_1_f_0(I_5);
              func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));
              func_0(((MR_Box) (P_1)), ((MR_Box) ((MR_String) "\n")), HeadVar__7_7, &S1_52);
              func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));
              func_1(((MR_Box) (P_1)), ((MR_Box) (I_5)), S1_52, S_8);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word X_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 0))));
          MR_Word Y_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 1))));
          MR_Integer K1_23;
          MR_Box S1_24;
          MR_Integer next_value_of_HeadVar__3_3;
          MR_Word next_value_of_HeadVar__6_6;
          MR_Box next_value_of_HeadVar__7_7;

          mercury__pprint__lb_8_p_0(TypeInfo_for_T_83, P_1, W_2, HeadVar__3_3, &K1_23, I_5, X_19, HeadVar__7_7, &S1_24);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__3_3 = K1_23;
          next_value_of_HeadVar__6_6 = Y_20;
          next_value_of_HeadVar__7_7 = S1_24;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          HeadVar__6_6 = next_value_of_HeadVar__6_6;
          HeadVar__7_7 = next_value_of_HeadVar__7_7;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer J_30 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__6_6, (MR_Integer) 0))));
          MR_Word X_31 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__6_6, (MR_Integer) 1))));
          MR_String Var_34;
          MR_String next_value_of_I_5;
          MR_Word next_value_of_HeadVar__6_6;

          Var_34 = mercury__pprint__extend_2_f_0(I_5, J_30);
          // direct tailcall eliminated
          ;
          next_value_of_I_5 = Var_34;
          next_value_of_HeadVar__6_6 = X_31;
          I_5 = next_value_of_I_5;
          HeadVar__6_6 = next_value_of_HeadVar__6_6;
          continue;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__6_6, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String L_40 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__6_6, (MR_Integer) 1))));
              MR_Word X_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__6_6, (MR_Integer) 2))));
              MR_String Var_44;
              MR_String next_value_of_I_5;
              MR_Word next_value_of_HeadVar__6_6;

              mercury__string__append_3_p_2(I_5, L_40, &Var_44);
              // direct tailcall eliminated
              ;
              next_value_of_I_5 = Var_44;
              next_value_of_HeadVar__6_6 = X_41;
              I_5 = next_value_of_I_5;
              HeadVar__6_6 = next_value_of_HeadVar__6_6;
              continue;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String T_79 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__6_6, (MR_Integer) 1))));
              MR_Integer Var_82;
              void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);

              Var_82 = mercury__string__count_codepoints_1_f_0(T_79);
              *K_4 = (MR_Integer) ((MR_Unsigned) HeadVar__3_3 + (MR_Unsigned) Var_82);
              func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));
              func_2(((MR_Box) (P_1)), ((MR_Box) (T_79)), HeadVar__7_7, S_8);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word X_59 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__6_6, (MR_Integer) 1))));
              MR_Integer Var_62 = (MR_Integer) ((MR_Unsigned) W_2 - (MR_Unsigned) HeadVar__3_3);
              MR_Integer Var_91;

              succeeded = mercury__pprint__ff_2_f_0(X_59, Var_62, &Var_91);
              if (succeeded)
                mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_91_49_93_95_48_6_p_0(P_1, HeadVar__3_3, K_4, X_59, HeadVar__7_7, S_8);
              else
              {
                MR_Word next_value_of_HeadVar__6_6 = X_59;

                // direct tailcall eliminated
                ;
                HeadVar__6_6 = next_value_of_HeadVar__6_6;
                continue;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word TypeInfo_84_84;
              MR_Integer D_68 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__6_6, (MR_Integer) 1))));
              MR_Word U_69 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__6_6, (MR_Integer) 2))));
              MR_Word Var_72;
              MR_Box Var_73;
              MR_Word next_value_of_HeadVar__6_6;

              TypeInfo_84_84 = ((MR_Word) ((MR_hl_field(MR_mktag(0), U_69, (MR_Integer) 0))));
              Var_73 = (MR_hl_field(MR_mktag(0), U_69, (MR_Integer) 1));
              Var_72 = mercury__pprint__to_doc_3_f_0(TypeInfo_84_84, D_68, (MR_Integer) 1000, Var_73);
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__6_6 = Var_72;
              HeadVar__6_6 = next_value_of_HeadVar__6_6;
              continue;
            }
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_91_49_93_95_48_6_p_0(
  MR_Word P_1,
  MR_Integer HeadVar__2_2,
  MR_Integer * K_3,
  MR_Word HeadVar__4_4,
  MR_Box HeadVar__5_5,
  MR_Box * S_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) HeadVar__4_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__4_4)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *K_3 = HeadVar__2_2;
              *S_6 = HeadVar__5_5;
            }
            break;
          case (MR_Integer) 1:
            {
              *K_3 = HeadVar__2_2;
              *S_6 = HeadVar__5_5;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word X_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
          MR_Word Y_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
          MR_Integer K1_17;
          MR_Box S1_18;
          MR_Integer next_value_of_HeadVar__2_2;
          MR_Word next_value_of_HeadVar__4_4;
          MR_Box next_value_of_HeadVar__5_5;

          mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_91_49_93_95_48_6_p_0(P_1, HeadVar__2_2, &K1_17, X_13, HeadVar__5_5, &S1_18);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = K1_17;
          next_value_of_HeadVar__4_4 = Y_14;
          next_value_of_HeadVar__5_5 = S1_18;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          HeadVar__4_4 = next_value_of_HeadVar__4_4;
          HeadVar__5_5 = next_value_of_HeadVar__5_5;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word X_23 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__4_4, (MR_Integer) 1))));
          MR_Word next_value_of_HeadVar__4_4 = X_23;

          // direct tailcall eliminated
          ;
          HeadVar__4_4 = next_value_of_HeadVar__4_4;
          continue;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__4_4, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word X_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__4_4, (MR_Integer) 2))));
              MR_Word next_value_of_HeadVar__4_4 = X_30;

              // direct tailcall eliminated
              ;
              HeadVar__4_4 = next_value_of_HeadVar__4_4;
              continue;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String T_54 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__4_4, (MR_Integer) 1))));
              MR_Integer Var_57;
              void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

              mercury__string__count_codepoints_2_p_0(T_54, &Var_57);
              *K_3 = (MR_Integer) ((MR_Unsigned) HeadVar__2_2 + (MR_Unsigned) Var_57);
              func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));
              func_0(((MR_Box) (P_1)), ((MR_Box) (T_54)), HeadVar__5_5, S_6);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word X_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__4_4, (MR_Integer) 1))));
              MR_Word next_value_of_HeadVar__4_4 = X_39;

              // direct tailcall eliminated
              ;
              HeadVar__4_4 = next_value_of_HeadVar__4_4;
              continue;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word TypeInfo_59_59;
              MR_Integer D_45 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__4_4, (MR_Integer) 1))));
              MR_Word U_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__4_4, (MR_Integer) 2))));
              MR_Word Var_49;
              MR_Box Var_50;
              MR_Word next_value_of_HeadVar__4_4;

              TypeInfo_59_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), U_46, (MR_Integer) 0))));
              Var_50 = (MR_hl_field(MR_mktag(0), U_46, (MR_Integer) 1));
              Var_49 = mercury__pprint__to_doc_3_f_0(TypeInfo_59_59, D_45, (MR_Integer) 1000, Var_50);
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__4_4 = Var_49;
              HeadVar__4_4 = next_value_of_HeadVar__4_4;
              continue;
            }
            break;
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__pprint__write_5_p_0(
  MR_Word TypeClassInfo_for_doc_15,
  MR_Word TypeClassInfo_for_writer_16,
  MR_Box Stream_6,
  MR_Integer W_7,
  MR_Box X_8,
  MR_Box STATE_VARIABLE_State_0_10,
  MR_Box * STATE_VARIABLE_State_11)
{
  {
    MR_Word Var_13;
    MR_Integer Var_23;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);
    MR_Box conv1_Var_13;
    MR_Integer Var_30;

{
#define MR_PROC_LABEL mercury__pprint__write_5_p_0

	MR_Integer Max;

		{

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }


		;}
#undef MR_PROC_LABEL
	 Var_23  = Max;
}
    func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_doc_15, (MR_Integer) 0)), (MR_Integer) 5))));
    conv1_Var_13 = func_0(((MR_Box) (TypeClassInfo_for_doc_15)), ((MR_Box) (Var_23)), X_8);
    Var_13 = ((MR_Word) (conv1_Var_13));
    mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_98_95_95_104_111_52_51_95_95_91_51_44_32_52_93_95_48_8_p_0(TypeClassInfo_for_writer_16, Stream_6, W_7, (MR_Integer) 0, &Var_30, (MR_String) "", Var_13, STATE_VARIABLE_State_0_10, STATE_VARIABLE_State_11);
  }
}

static void MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_98_95_95_104_111_52_51_95_95_91_51_44_32_52_93_95_48_8_p_0(
  MR_Word Var_85,
  MR_Box Var_86,
  MR_Integer W_2,
  MR_Integer HeadVar__3_3,
  MR_Integer * K_4,
  MR_String I_5,
  MR_Word HeadVar__6_6,
  MR_Box HeadVar__7_7,
  MR_Box * S_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) HeadVar__6_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__6_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *K_4 = HeadVar__3_3;
              *S_8 = HeadVar__7_7;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box S1_52;
              void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
              void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

              mercury__string__count_codepoints_2_p_0(I_5, K_4);
              func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), Var_85, (MR_Integer) 0)), (MR_Integer) 5))));
              func_0(((MR_Box) (Var_85)), Var_86, ((MR_Box) ((MR_String) "\n")), HeadVar__7_7, &S1_52);
              func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), Var_85, (MR_Integer) 0)), (MR_Integer) 5))));
              func_1(((MR_Box) (Var_85)), Var_86, ((MR_Box) (I_5)), S1_52, S_8);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word X_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 0))));
          MR_Word Y_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 1))));
          MR_Integer K1_23;
          MR_Box S1_24;
          MR_Integer next_value_of_HeadVar__3_3;
          MR_Word next_value_of_HeadVar__6_6;
          MR_Box next_value_of_HeadVar__7_7;

          mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_98_95_95_104_111_52_51_95_95_91_51_44_32_52_93_95_48_8_p_0(Var_85, Var_86, W_2, HeadVar__3_3, &K1_23, I_5, X_19, HeadVar__7_7, &S1_24);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__3_3 = K1_23;
          next_value_of_HeadVar__6_6 = Y_20;
          next_value_of_HeadVar__7_7 = S1_24;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          HeadVar__6_6 = next_value_of_HeadVar__6_6;
          HeadVar__7_7 = next_value_of_HeadVar__7_7;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer J_30 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__6_6, (MR_Integer) 0))));
          MR_Word X_31 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__6_6, (MR_Integer) 1))));
          MR_String Var_34;
          MR_String next_value_of_I_5;
          MR_Word next_value_of_HeadVar__6_6;

          Var_34 = mercury__pprint__extend_2_f_0(I_5, J_30);
          // direct tailcall eliminated
          ;
          next_value_of_I_5 = Var_34;
          next_value_of_HeadVar__6_6 = X_31;
          I_5 = next_value_of_I_5;
          HeadVar__6_6 = next_value_of_HeadVar__6_6;
          continue;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__6_6, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String L_40 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__6_6, (MR_Integer) 1))));
              MR_Word X_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__6_6, (MR_Integer) 2))));
              MR_String Var_44;
              MR_String next_value_of_I_5;
              MR_Word next_value_of_HeadVar__6_6;

              Var_44 = mercury__string__f_43_43_2_f_0(I_5, L_40);
              // direct tailcall eliminated
              ;
              next_value_of_I_5 = Var_44;
              next_value_of_HeadVar__6_6 = X_41;
              I_5 = next_value_of_I_5;
              HeadVar__6_6 = next_value_of_HeadVar__6_6;
              continue;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String T_79 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__6_6, (MR_Integer) 1))));
              MR_Integer Var_82;

              mercury__string__count_codepoints_2_p_0(T_79, &Var_82);
              *K_4 = (MR_Integer) ((MR_Unsigned) HeadVar__3_3 + (MR_Unsigned) Var_82);
              mercury__stream__put_4_p_0(Var_85, Var_86, ((MR_Box) (T_79)), HeadVar__7_7, S_8);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word X_59 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__6_6, (MR_Integer) 1))));
              MR_Integer Var_62 = (MR_Integer) ((MR_Unsigned) W_2 - (MR_Unsigned) HeadVar__3_3);
              MR_Integer Var_93;

              succeeded = mercury__pprint__ff_2_f_0(X_59, Var_62, &Var_93);
              if (succeeded)
                mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_104_111_52_56_95_95_91_51_44_32_52_93_95_48_6_p_0(Var_85, Var_86, HeadVar__3_3, K_4, X_59, HeadVar__7_7, S_8);
              else
              {
                MR_Word next_value_of_HeadVar__6_6 = X_59;

                // direct tailcall eliminated
                ;
                HeadVar__6_6 = next_value_of_HeadVar__6_6;
                continue;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word TypeInfo_84_84;
              MR_Integer D_68 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__6_6, (MR_Integer) 1))));
              MR_Word U_69 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__6_6, (MR_Integer) 2))));
              MR_Word Var_72;
              MR_Box Var_73;
              MR_Word next_value_of_HeadVar__6_6;

              TypeInfo_84_84 = ((MR_Word) ((MR_hl_field(MR_mktag(0), U_69, (MR_Integer) 0))));
              Var_73 = (MR_hl_field(MR_mktag(0), U_69, (MR_Integer) 1));
              Var_72 = mercury__pprint__to_doc_3_f_0(TypeInfo_84_84, D_68, (MR_Integer) 1000, Var_73);
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__6_6 = Var_72;
              HeadVar__6_6 = next_value_of_HeadVar__6_6;
              continue;
            }
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_104_111_52_56_95_95_91_51_44_32_52_93_95_48_6_p_0(
  MR_Word Var_60,
  MR_Box Var_61,
  MR_Integer HeadVar__2_2,
  MR_Integer * K_3,
  MR_Word HeadVar__4_4,
  MR_Box HeadVar__5_5,
  MR_Box * S_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) HeadVar__4_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__4_4)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *K_3 = HeadVar__2_2;
              *S_6 = HeadVar__5_5;
            }
            break;
          case (MR_Integer) 1:
            {
              *K_3 = HeadVar__2_2;
              *S_6 = HeadVar__5_5;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word X_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
          MR_Word Y_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
          MR_Integer K1_17;
          MR_Box S1_18;
          MR_Integer next_value_of_HeadVar__2_2;
          MR_Word next_value_of_HeadVar__4_4;
          MR_Box next_value_of_HeadVar__5_5;

          mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_104_111_52_56_95_95_91_51_44_32_52_93_95_48_6_p_0(Var_60, Var_61, HeadVar__2_2, &K1_17, X_13, HeadVar__5_5, &S1_18);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = K1_17;
          next_value_of_HeadVar__4_4 = Y_14;
          next_value_of_HeadVar__5_5 = S1_18;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          HeadVar__4_4 = next_value_of_HeadVar__4_4;
          HeadVar__5_5 = next_value_of_HeadVar__5_5;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word X_23 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__4_4, (MR_Integer) 1))));
          MR_Word next_value_of_HeadVar__4_4 = X_23;

          // direct tailcall eliminated
          ;
          HeadVar__4_4 = next_value_of_HeadVar__4_4;
          continue;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__4_4, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word X_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__4_4, (MR_Integer) 2))));
              MR_Word next_value_of_HeadVar__4_4 = X_30;

              // direct tailcall eliminated
              ;
              HeadVar__4_4 = next_value_of_HeadVar__4_4;
              continue;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String T_54 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__4_4, (MR_Integer) 1))));
              MR_Integer Var_57;
              void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

              mercury__string__count_codepoints_2_p_0(T_54, &Var_57);
              *K_3 = (MR_Integer) ((MR_Unsigned) HeadVar__2_2 + (MR_Unsigned) Var_57);
              func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), Var_60, (MR_Integer) 0)), (MR_Integer) 5))));
              func_0(((MR_Box) (Var_60)), Var_61, ((MR_Box) (T_54)), HeadVar__5_5, S_6);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word X_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__4_4, (MR_Integer) 1))));
              MR_Word next_value_of_HeadVar__4_4 = X_39;

              // direct tailcall eliminated
              ;
              HeadVar__4_4 = next_value_of_HeadVar__4_4;
              continue;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word TypeInfo_59_59;
              MR_Integer D_45 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__4_4, (MR_Integer) 1))));
              MR_Word U_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__4_4, (MR_Integer) 2))));
              MR_Word Var_49;
              MR_Box Var_50;
              MR_Word next_value_of_HeadVar__4_4;

              TypeInfo_59_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), U_46, (MR_Integer) 0))));
              Var_50 = (MR_hl_field(MR_mktag(0), U_46, (MR_Integer) 1));
              Var_49 = mercury__pprint__to_doc_3_f_0(TypeInfo_59_59, D_45, (MR_Integer) 1000, Var_50);
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__4_4 = Var_49;
              HeadVar__4_4 = next_value_of_HeadVar__4_4;
              continue;
            }
            break;
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__pprint__write_4_p_0(
  MR_Word TypeClassInfo_for_doc_13,
  MR_Integer W_5,
  MR_Box X_6)
{
  {
    MR_Word Var_11;
    MR_Integer Var_19;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);
    MR_Box conv1_Var_11;
    MR_Integer Var_27;

{
#define MR_PROC_LABEL mercury__pprint__write_4_p_0

	MR_Integer Max;

		{

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }


		;}
#undef MR_PROC_LABEL
	 Var_19  = Max;
}
    func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_doc_13, (MR_Integer) 0)), (MR_Integer) 5))));
    conv1_Var_11 = func_0(((MR_Box) (TypeClassInfo_for_doc_13)), ((MR_Box) (Var_19)), X_6);
    Var_11 = ((MR_Word) (conv1_Var_11));
    mercury__pprint__lb__ho42_8_p_0(W_5, (MR_Integer) 0, &Var_27, (MR_String) "", Var_11);
  }
}

static void MR_CALL 
mercury__pprint__lb__ho42_8_p_0(
  MR_Integer W_2,
  MR_Integer HeadVar__3_3,
  MR_Integer * K_4,
  MR_String I_5,
  MR_Word HeadVar__6_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) HeadVar__6_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__6_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *K_4 = HeadVar__3_3;
            break;
          case (MR_Integer) 1:
            {
              *K_4 = mercury__string__count_codepoints_1_f_0(I_5);
              mercury__io__write_string_3_p_0((MR_String) "\n");
              mercury__io__write_string_3_p_0(I_5);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word X_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 0))));
          MR_Word Y_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 1))));
          MR_Integer K1_23;
          MR_Integer next_value_of_HeadVar__3_3;
          MR_Word next_value_of_HeadVar__6_6;

          mercury__pprint__lb__ho42_8_p_0(W_2, HeadVar__3_3, &K1_23, I_5, X_19);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__3_3 = K1_23;
          next_value_of_HeadVar__6_6 = Y_20;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          HeadVar__6_6 = next_value_of_HeadVar__6_6;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer J_30 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__6_6, (MR_Integer) 0))));
          MR_Word X_31 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__6_6, (MR_Integer) 1))));
          MR_String Var_34;
          MR_String next_value_of_I_5;
          MR_Word next_value_of_HeadVar__6_6;

          Var_34 = mercury__pprint__extend_2_f_0(I_5, J_30);
          // direct tailcall eliminated
          ;
          next_value_of_I_5 = Var_34;
          next_value_of_HeadVar__6_6 = X_31;
          I_5 = next_value_of_I_5;
          HeadVar__6_6 = next_value_of_HeadVar__6_6;
          continue;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__6_6, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String L_40 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__6_6, (MR_Integer) 1))));
              MR_Word X_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__6_6, (MR_Integer) 2))));
              MR_String Var_44;
              MR_String next_value_of_I_5;
              MR_Word next_value_of_HeadVar__6_6;

              mercury__string__append_3_p_2(I_5, L_40, &Var_44);
              // direct tailcall eliminated
              ;
              next_value_of_I_5 = Var_44;
              next_value_of_HeadVar__6_6 = X_41;
              I_5 = next_value_of_I_5;
              HeadVar__6_6 = next_value_of_HeadVar__6_6;
              continue;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String T_79 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__6_6, (MR_Integer) 1))));
              MR_Integer Var_82;

              Var_82 = mercury__string__count_codepoints_1_f_0(T_79);
              *K_4 = (MR_Integer) ((MR_Unsigned) HeadVar__3_3 + (MR_Unsigned) Var_82);
              mercury__io__write_string_3_p_0(T_79);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word X_59 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__6_6, (MR_Integer) 1))));
              MR_Integer Var_62 = (MR_Integer) ((MR_Unsigned) W_2 - (MR_Unsigned) HeadVar__3_3);
              MR_Integer Var_91;

              succeeded = mercury__pprint__ff_2_f_0(X_59, Var_62, &Var_91);
              if (succeeded)
                mercury__pprint__layout_flat__ho49_6_p_0(HeadVar__3_3, K_4, X_59);
              else
              {
                MR_Word next_value_of_HeadVar__6_6 = X_59;

                // direct tailcall eliminated
                ;
                HeadVar__6_6 = next_value_of_HeadVar__6_6;
                continue;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word TypeInfo_84_84;
              MR_Integer D_68 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__6_6, (MR_Integer) 1))));
              MR_Word U_69 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__6_6, (MR_Integer) 2))));
              MR_Word Var_72;
              MR_Box Var_73;
              MR_Word next_value_of_HeadVar__6_6;

              TypeInfo_84_84 = ((MR_Word) ((MR_hl_field(MR_mktag(0), U_69, (MR_Integer) 0))));
              Var_73 = (MR_hl_field(MR_mktag(0), U_69, (MR_Integer) 1));
              Var_72 = mercury__pprint__to_doc_3_f_0(TypeInfo_84_84, D_68, (MR_Integer) 1000, Var_73);
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__6_6 = Var_72;
              HeadVar__6_6 = next_value_of_HeadVar__6_6;
              continue;
            }
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
mercury__pprint__layout_flat__ho49_6_p_0(
  MR_Integer HeadVar__2_2,
  MR_Integer * K_3,
  MR_Word HeadVar__4_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) HeadVar__4_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__4_4)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *K_3 = HeadVar__2_2;
            break;
          case (MR_Integer) 1:
            *K_3 = HeadVar__2_2;
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word X_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
          MR_Word Y_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
          MR_Integer K1_17;
          MR_Integer next_value_of_HeadVar__2_2;
          MR_Word next_value_of_HeadVar__4_4;

          mercury__pprint__layout_flat__ho49_6_p_0(HeadVar__2_2, &K1_17, X_13);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = K1_17;
          next_value_of_HeadVar__4_4 = Y_14;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          HeadVar__4_4 = next_value_of_HeadVar__4_4;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word X_23 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__4_4, (MR_Integer) 1))));
          MR_Word next_value_of_HeadVar__4_4 = X_23;

          // direct tailcall eliminated
          ;
          HeadVar__4_4 = next_value_of_HeadVar__4_4;
          continue;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__4_4, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word X_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__4_4, (MR_Integer) 2))));
              MR_Word next_value_of_HeadVar__4_4 = X_30;

              // direct tailcall eliminated
              ;
              HeadVar__4_4 = next_value_of_HeadVar__4_4;
              continue;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String T_54 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__4_4, (MR_Integer) 1))));
              MR_Integer Var_57;
              MR_Box V_5_77;
              MR_Box V_8_78;

              mercury__string__count_codepoints_2_p_0(T_54, &Var_57);
              *K_3 = (MR_Integer) ((MR_Unsigned) HeadVar__2_2 + (MR_Unsigned) Var_57);
{
#define MR_PROC_LABEL mercury__pprint__layout_flat__ho49_6_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	 V_5_77  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__pprint__layout_flat__ho49_6_p_0

	MercuryFilePtr Stream;
	MR_String Message;
	MR_Integer Error;

	Stream = (MercuryFilePtr) V_5_77 ;
	Message =  T_54 ;
		{

    const char *s = Message;
    if (ML_fprintf(Stream, "%s", s) < 0) {
        Error = errno;
    } else {
        Error = 0;
        while (*s) {
            if (*s++ == '\n') {
                MR_line_number(*Stream)++;
            }
        }
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, V_8_78 );
}
              mercury__io__throw_on_output_error_3_p_0(V_8_78);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word X_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__4_4, (MR_Integer) 1))));
              MR_Word next_value_of_HeadVar__4_4 = X_39;

              // direct tailcall eliminated
              ;
              HeadVar__4_4 = next_value_of_HeadVar__4_4;
              continue;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word TypeInfo_59_59;
              MR_Integer D_45 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__4_4, (MR_Integer) 1))));
              MR_Word U_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__4_4, (MR_Integer) 2))));
              MR_Word Var_49;
              MR_Box Var_50;
              MR_Word next_value_of_HeadVar__4_4;

              TypeInfo_59_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), U_46, (MR_Integer) 0))));
              Var_50 = (MR_hl_field(MR_mktag(0), U_46, (MR_Integer) 1));
              Var_49 = mercury__pprint__to_doc_3_f_0(TypeInfo_59_59, D_45, (MR_Integer) 1000, Var_50);
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__4_4 = Var_49;
              HeadVar__4_4 = next_value_of_HeadVar__4_4;
              continue;
            }
            break;
        }
        break;
    }
    break;
  }
}

MR_String MR_CALL 
mercury__pprint__to_string_2_f_0(
  MR_Integer W_4,
  MR_Word X_5)
{
  {
    MR_String S_6;
    MR_Word Ss_9;
    MR_Word Var_15;
    MR_Integer Var_26;

    mercury__pprint__lb__ho41_8_p_0(W_4, (MR_Integer) 0, &Var_26, (MR_String) "", X_5, (MR_Word) ((MR_Unsigned) 0U), &Ss_9);
    mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Ss_9, &Var_15);
    S_6 = mercury__string__append_list_1_f_0(Var_15);
    return S_6;
  }
}

static void MR_CALL 
mercury__pprint__lb__ho41_8_p_0(
  MR_Integer W_2,
  MR_Integer HeadVar__3_3,
  MR_Integer * K_4,
  MR_String I_5,
  MR_Word HeadVar__6_6,
  MR_Word HeadVar__7_7,
  MR_Word * S_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) HeadVar__6_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__6_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *K_4 = HeadVar__3_3;
              *S_8 = HeadVar__7_7;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word S1_52;

              *K_4 = mercury__string__count_codepoints_1_f_0(I_5);
              mercury__pprint__IntroducedFrom__pred__to_string__471__1_3_p_0((MR_String) "\n", HeadVar__7_7, &S1_52);
              mercury__pprint__IntroducedFrom__pred__to_string__471__1_3_p_0(I_5, S1_52, S_8);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word X_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 0))));
          MR_Word Y_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 1))));
          MR_Integer K1_23;
          MR_Word S1_24;
          MR_Integer next_value_of_HeadVar__3_3;
          MR_Word next_value_of_HeadVar__6_6;
          MR_Word next_value_of_HeadVar__7_7;

          mercury__pprint__lb__ho41_8_p_0(W_2, HeadVar__3_3, &K1_23, I_5, X_19, HeadVar__7_7, &S1_24);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__3_3 = K1_23;
          next_value_of_HeadVar__6_6 = Y_20;
          next_value_of_HeadVar__7_7 = S1_24;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          HeadVar__6_6 = next_value_of_HeadVar__6_6;
          HeadVar__7_7 = next_value_of_HeadVar__7_7;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer J_30 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__6_6, (MR_Integer) 0))));
          MR_Word X_31 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__6_6, (MR_Integer) 1))));
          MR_String Var_34;
          MR_String next_value_of_I_5;
          MR_Word next_value_of_HeadVar__6_6;

          Var_34 = mercury__pprint__extend_2_f_0(I_5, J_30);
          // direct tailcall eliminated
          ;
          next_value_of_I_5 = Var_34;
          next_value_of_HeadVar__6_6 = X_31;
          I_5 = next_value_of_I_5;
          HeadVar__6_6 = next_value_of_HeadVar__6_6;
          continue;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__6_6, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String L_40 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__6_6, (MR_Integer) 1))));
              MR_Word X_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__6_6, (MR_Integer) 2))));
              MR_String Var_44;
              MR_String next_value_of_I_5;
              MR_Word next_value_of_HeadVar__6_6;

              mercury__string__append_3_p_2(I_5, L_40, &Var_44);
              // direct tailcall eliminated
              ;
              next_value_of_I_5 = Var_44;
              next_value_of_HeadVar__6_6 = X_41;
              I_5 = next_value_of_I_5;
              HeadVar__6_6 = next_value_of_HeadVar__6_6;
              continue;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String T_79 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__6_6, (MR_Integer) 1))));
              MR_Integer Var_82;

              Var_82 = mercury__string__count_codepoints_1_f_0(T_79);
              *K_4 = (MR_Integer) ((MR_Unsigned) HeadVar__3_3 + (MR_Unsigned) Var_82);
              mercury__pprint__IntroducedFrom__pred__to_string__471__1_3_p_0(T_79, HeadVar__7_7, S_8);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word X_59 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__6_6, (MR_Integer) 1))));
              MR_Integer Var_62 = (MR_Integer) ((MR_Unsigned) W_2 - (MR_Unsigned) HeadVar__3_3);
              MR_Integer Var_91;

              succeeded = mercury__pprint__ff_2_f_0(X_59, Var_62, &Var_91);
              if (succeeded)
                mercury__pprint__layout_flat__ho50_6_p_0(HeadVar__3_3, K_4, X_59, HeadVar__7_7, S_8);
              else
              {
                MR_Word next_value_of_HeadVar__6_6 = X_59;

                // direct tailcall eliminated
                ;
                HeadVar__6_6 = next_value_of_HeadVar__6_6;
                continue;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word TypeInfo_84_84;
              MR_Integer D_68 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__6_6, (MR_Integer) 1))));
              MR_Word U_69 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__6_6, (MR_Integer) 2))));
              MR_Word Var_72;
              MR_Box Var_73;
              MR_Word next_value_of_HeadVar__6_6;

              TypeInfo_84_84 = ((MR_Word) ((MR_hl_field(MR_mktag(0), U_69, (MR_Integer) 0))));
              Var_73 = (MR_hl_field(MR_mktag(0), U_69, (MR_Integer) 1));
              Var_72 = mercury__pprint__to_doc_3_f_0(TypeInfo_84_84, D_68, (MR_Integer) 1000, Var_73);
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__6_6 = Var_72;
              HeadVar__6_6 = next_value_of_HeadVar__6_6;
              continue;
            }
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
mercury__pprint__layout_flat__ho50_6_p_0(
  MR_Integer HeadVar__2_2,
  MR_Integer * K_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * S_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) HeadVar__4_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__4_4)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *K_3 = HeadVar__2_2;
              *S_6 = HeadVar__5_5;
            }
            break;
          case (MR_Integer) 1:
            {
              *K_3 = HeadVar__2_2;
              *S_6 = HeadVar__5_5;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word X_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
          MR_Word Y_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
          MR_Integer K1_17;
          MR_Word S1_18;
          MR_Integer next_value_of_HeadVar__2_2;
          MR_Word next_value_of_HeadVar__4_4;
          MR_Word next_value_of_HeadVar__5_5;

          mercury__pprint__layout_flat__ho50_6_p_0(HeadVar__2_2, &K1_17, X_13, HeadVar__5_5, &S1_18);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = K1_17;
          next_value_of_HeadVar__4_4 = Y_14;
          next_value_of_HeadVar__5_5 = S1_18;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          HeadVar__4_4 = next_value_of_HeadVar__4_4;
          HeadVar__5_5 = next_value_of_HeadVar__5_5;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word X_23 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__4_4, (MR_Integer) 1))));
          MR_Word next_value_of_HeadVar__4_4 = X_23;

          // direct tailcall eliminated
          ;
          HeadVar__4_4 = next_value_of_HeadVar__4_4;
          continue;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__4_4, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word X_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__4_4, (MR_Integer) 2))));
              MR_Word next_value_of_HeadVar__4_4 = X_30;

              // direct tailcall eliminated
              ;
              HeadVar__4_4 = next_value_of_HeadVar__4_4;
              continue;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String T_54 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__4_4, (MR_Integer) 1))));
              MR_Integer Var_57;

              mercury__string__count_codepoints_2_p_0(T_54, &Var_57);
              *K_3 = (MR_Integer) ((MR_Unsigned) HeadVar__2_2 + (MR_Unsigned) Var_57);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *S_6 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (T_54));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (HeadVar__5_5));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word X_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__4_4, (MR_Integer) 1))));
              MR_Word next_value_of_HeadVar__4_4 = X_39;

              // direct tailcall eliminated
              ;
              HeadVar__4_4 = next_value_of_HeadVar__4_4;
              continue;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word TypeInfo_59_59;
              MR_Integer D_45 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__4_4, (MR_Integer) 1))));
              MR_Word U_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__4_4, (MR_Integer) 2))));
              MR_Word Var_49;
              MR_Box Var_50;
              MR_Word next_value_of_HeadVar__4_4;

              TypeInfo_59_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), U_46, (MR_Integer) 0))));
              Var_50 = (MR_hl_field(MR_mktag(0), U_46, (MR_Integer) 1));
              Var_49 = mercury__pprint__to_doc_3_f_0(TypeInfo_59_59, D_45, (MR_Integer) 1000, Var_50);
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__4_4 = Var_49;
              HeadVar__4_4 = next_value_of_HeadVar__4_4;
              continue;
            }
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
mercury__pprint__IntroducedFrom__pred__to_string__471__1_3_p_0(
  MR_String LambdaHeadVar__1_12,
  MR_Word LambdaHeadVar__2_13,
  MR_Word * LambdaHeadVar__3_14)
{
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *LambdaHeadVar__3_14 = base;
    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (LambdaHeadVar__1_12));
    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (LambdaHeadVar__2_13));
  }
}

static MR_String MR_CALL 
mercury__pprint__extend_2_f_0(
  MR_String I_4,
  MR_Integer J_5)
{
  {
    MR_String HeadVar__3_3;
    MR_String Var_6;
    MR_Word V_7_14;

    mercury__list__accumulate_n_copies_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), J_5, ((MR_Box) (MR_Word) ((MR_Char) 32)), (MR_Word) ((MR_Unsigned) 0U), &V_7_14);
    mercury__string__from_char_list_2_p_0(V_7_14, &Var_6);
    mercury__string__append_3_p_2(I_4, Var_6, &HeadVar__3_3);
    return HeadVar__3_3;
  }
}

static MR_bool MR_CALL 
mercury__pprint__ff_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Integer R_2,
  MR_Integer * HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *HeadVar__3_3 = R_2;
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 1:
            {
              *HeadVar__3_3 = R_2;
              succeeded = MR_TRUE;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word X_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
          MR_Word Y_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
          MR_Integer Var_8;
          MR_Word next_value_of_HeadVar__1_1;
          MR_Integer next_value_of_R_2;

          succeeded = mercury__pprint__ff_2_f_0(X_5, R_2, &Var_8);
          if (succeeded)
          {
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__1_1 = Y_6;
            next_value_of_R_2 = Var_8;
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            R_2 = next_value_of_R_2;
            continue;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word X_10 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))));
          MR_Word next_value_of_HeadVar__1_1 = X_10;

          // direct tailcall eliminated
          ;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          continue;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word X_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Word next_value_of_HeadVar__1_1 = X_13;

              // direct tailcall eliminated
              ;
              HeadVar__1_1 = next_value_of_HeadVar__1_1;
              continue;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String S_23 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Integer L_25;

              mercury__string__count_codepoints_2_p_0(S_23, &L_25);
              *HeadVar__3_3 = (MR_Integer) ((MR_Unsigned) R_2 - (MR_Unsigned) L_25);
              succeeded = (R_2 > L_25);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word X_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Word next_value_of_HeadVar__1_1 = X_16;

              // direct tailcall eliminated
              ;
              HeadVar__1_1 = next_value_of_HeadVar__1_1;
              continue;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word TypeInfo_26_26;
              MR_Integer D_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Word U_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Word Var_21;
              MR_Box Var_22;
              MR_Word next_value_of_HeadVar__1_1;

              TypeInfo_26_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), U_19, (MR_Integer) 0))));
              Var_22 = (MR_hl_field(MR_mktag(0), U_19, (MR_Integer) 1));
              Var_21 = mercury__pprint__to_doc_3_f_0(TypeInfo_26_26, D_18, (MR_Integer) 1000, Var_22);
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__1_1 = Var_21;
              HeadVar__1_1 = next_value_of_HeadVar__1_1;
              continue;
            }
            break;
        }
        break;
    }
    return succeeded;
    break;
  }
}

MR_Word MR_CALL 
mercury__pprint__to_doc_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Box X_3)
{
  {
    MR_Word HeadVar__2_2;
    MR_Integer Var_4;

{
#define MR_PROC_LABEL mercury__pprint__to_doc_1_f_0

	MR_Integer Max;

		{

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }


		;}
#undef MR_PROC_LABEL
	 Var_4  = Max;
}
    HeadVar__2_2 = mercury__pprint__to_doc_3_f_0(TypeInfo_for_T_5, Var_4, (MR_Integer) 1000, X_3);
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__pprint__word_wrapped_1_f_0(
  MR_String String_3)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word Var_6;
    MR_Word Var_10;
    MR_Integer V_7_24;

    mercury__pprint__skip_to_next_word_start__ho40_4_p_in__string_0(String_3, (MR_Integer) 0, &V_7_24);
    mercury__pprint__words_loop__ho39_4_p_in__string_0(String_3, V_7_24, &Var_10);
    Var_6 = mercury__pprint__map__ho36_2_f_in__list_0(Var_10);
    HeadVar__2_2 = mercury__pprint__packed_2_f_0((MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Word) (&mercury__pprint_scalar_common_1[0]), ((MR_Box) (MR_mkword(MR_mktag(3), &mercury__pprint_scalar_common_1[10]))), Var_6);
    return HeadVar__2_2;
  }
}

static void MR_CALL 
mercury__pprint__words_loop__ho39_4_p_in__string_0(
  MR_String V_6_6,
  MR_Integer V_7_7,
  MR_Word * V_8_8)
{
  {
    MR_bool succeeded;
    MR_Integer V_9_9;

    mercury__pprint__skip_to_word_end__ho51_4_p_in__string_0(V_6_6, V_7_7, &V_9_9);
    succeeded = (V_9_9 == V_7_7);
    if (succeeded)
      *V_8_8 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_String V_10_10;
      MR_Integer V_11_11;

{
#define MR_PROC_LABEL mercury__pprint__words_loop__ho39_4_p_in__string_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  V_6_6 ;
	Start =  V_7_7 ;
	End =  V_9_9 ;
		{
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}

		;}
#undef MR_PROC_LABEL
	 V_10_10  = SubString;
}
      mercury__pprint__skip_to_next_word_start__ho40_4_p_in__string_0(V_6_6, V_9_9, &V_11_11);
      succeeded = (V_9_9 == V_11_11);
      if (succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *V_8_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (V_10_10));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      else
      {
        MR_Word V_12_13;

        mercury__pprint__words_loop__ho39_4_p_in__string_0(V_6_6, V_11_11, &V_12_13);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *V_8_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (V_10_10));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (V_12_13));
        }
      }
    }
  }
}

static void MR_CALL 
mercury__pprint__skip_to_word_end__ho51_4_p_in__string_0(
  MR_String V_6_6,
  MR_Integer V_7_7,
  MR_Integer * V_8_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer V_9_9;
    MR_Char V_10_10;

    // setup for model_det tailcalls optimized into a loop
    ;
{
#define MR_PROC_LABEL mercury__pprint__skip_to_word_end__ho51_4_p_in__string_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  V_6_6 ;
	Index =  V_7_7 ;
		{

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 V_9_9  = NextIndex;
	 V_10_10  = Ch;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      succeeded = mercury__char__is_whitespace_1_p_0(V_10_10);
      if (succeeded)
        *V_8_8 = V_7_7;
      else
      {
        MR_Integer next_value_of_V_7_7 = V_9_9;

        // direct tailcall eliminated
        ;
        V_7_7 = next_value_of_V_7_7;
        continue;
      }
    }
    else
      *V_8_8 = V_7_7;
    break;
  }
}

static void MR_CALL 
mercury__pprint__skip_to_next_word_start__ho40_4_p_in__string_0(
  MR_String V_6_6,
  MR_Integer V_7_7,
  MR_Integer * V_8_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer V_9_9;
    MR_Char V_10_10;

    // setup for model_det tailcalls optimized into a loop
    ;
{
#define MR_PROC_LABEL mercury__pprint__skip_to_next_word_start__ho40_4_p_in__string_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  V_6_6 ;
	Index =  V_7_7 ;
		{

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 V_9_9  = NextIndex;
	 V_10_10  = Ch;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      succeeded = mercury__char__is_whitespace_1_p_0(V_10_10);
    if (succeeded)
    {
      MR_Integer next_value_of_V_7_7 = V_9_9;

      // direct tailcall eliminated
      ;
      V_7_7 = next_value_of_V_7_7;
      continue;
    }
    else
      *V_8_8 = V_7_7;
    break;
  }
}

static MR_Word MR_CALL 
mercury__pprint__map__ho36_2_f_in__list_0(
  MR_Word HeadVar__2_2)
{
  {
    MR_Word HeadVar__3_3;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_String V_6_6 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word V_7_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word V_8_8;
      MR_Word V_9_9;

      {
        V_8_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), V_8_8, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), V_8_8, 1) = ((MR_Box) (V_6_6));
      }
      V_9_9 = mercury__pprint__map__ho36_2_f_in__list_0(V_7_7);
      {
        HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__3_3, 0) = ((MR_Box) (V_8_8));
        MR_hl_field(MR_mktag(1), HeadVar__3_3, 1) = ((MR_Box) (V_9_9));
      }
    }
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__pprint__ellipsis_0_f_0(void)
{
  {
    return (MR_Word) (MR_mkword(MR_mktag(3), &mercury__pprint_scalar_common_1[9]));
  }
}

MR_Word MR_CALL 
mercury__pprint__colon_space_line_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;
    MR_Word Var_8;
    MR_Word Var_9;
    MR_Integer Var_11;
    MR_Integer Var_14;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);
    MR_Box conv1_Var_8;
    MR_Box MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box);
    MR_Box conv3_Var_9;

{
#define MR_PROC_LABEL mercury__pprint__colon_space_line_0_f_0

	MR_Integer Max;

		{

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }


		;}
#undef MR_PROC_LABEL
	 Var_11  = Max;
}
    func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
    conv1_Var_8 = func_0(((MR_Box) ((MR_Word) (&mercury__pprint_scalar_common_1[1]))), ((MR_Box) (Var_11)), ((MR_Box) ((MR_String) ": ")));
    Var_8 = ((MR_Word) (conv1_Var_8));
{
#define MR_PROC_LABEL mercury__pprint__colon_space_line_0_f_0

	MR_Integer Max;

		{

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }


		;}
#undef MR_PROC_LABEL
	 Var_14  = Max;
}
    func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    conv3_Var_9 = func_2(((MR_Box) ((MR_Word) (&mercury__pprint_scalar_common_1[0]))), ((MR_Box) (Var_14)), ((MR_Box) ((MR_Unsigned) 4U)));
    Var_9 = ((MR_Word) (conv3_Var_9));
    {
      HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__1_1, 0) = ((MR_Box) (Var_8));
      MR_hl_field(MR_mktag(1), HeadVar__1_1, 1) = ((MR_Box) (Var_9));
    }
    return HeadVar__1_1;
  }
}

MR_Word MR_CALL 
mercury__pprint__semic_space_line_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;
    MR_Word Var_8;
    MR_Word Var_9;
    MR_Integer Var_11;
    MR_Integer Var_14;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);
    MR_Box conv1_Var_8;
    MR_Box MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box);
    MR_Box conv3_Var_9;

{
#define MR_PROC_LABEL mercury__pprint__semic_space_line_0_f_0

	MR_Integer Max;

		{

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }


		;}
#undef MR_PROC_LABEL
	 Var_11  = Max;
}
    func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
    conv1_Var_8 = func_0(((MR_Box) ((MR_Word) (&mercury__pprint_scalar_common_1[1]))), ((MR_Box) (Var_11)), ((MR_Box) ((MR_String) "; ")));
    Var_8 = ((MR_Word) (conv1_Var_8));
{
#define MR_PROC_LABEL mercury__pprint__semic_space_line_0_f_0

	MR_Integer Max;

		{

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }


		;}
#undef MR_PROC_LABEL
	 Var_14  = Max;
}
    func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    conv3_Var_9 = func_2(((MR_Box) ((MR_Word) (&mercury__pprint_scalar_common_1[0]))), ((MR_Box) (Var_14)), ((MR_Box) ((MR_Unsigned) 4U)));
    Var_9 = ((MR_Word) (conv3_Var_9));
    {
      HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__1_1, 0) = ((MR_Box) (Var_8));
      MR_hl_field(MR_mktag(1), HeadVar__1_1, 1) = ((MR_Box) (Var_9));
    }
    return HeadVar__1_1;
  }
}

MR_Word MR_CALL 
mercury__pprint__comma_space_line_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;
    MR_Word Var_8;
    MR_Word Var_9;
    MR_Integer Var_11;
    MR_Integer Var_14;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);
    MR_Box conv1_Var_8;
    MR_Box MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box);
    MR_Box conv3_Var_9;

{
#define MR_PROC_LABEL mercury__pprint__comma_space_line_0_f_0

	MR_Integer Max;

		{

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }


		;}
#undef MR_PROC_LABEL
	 Var_11  = Max;
}
    func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
    conv1_Var_8 = func_0(((MR_Box) ((MR_Word) (&mercury__pprint_scalar_common_1[1]))), ((MR_Box) (Var_11)), ((MR_Box) ((MR_String) ", ")));
    Var_8 = ((MR_Word) (conv1_Var_8));
{
#define MR_PROC_LABEL mercury__pprint__comma_space_line_0_f_0

	MR_Integer Max;

		{

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }


		;}
#undef MR_PROC_LABEL
	 Var_14  = Max;
}
    func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    conv3_Var_9 = func_2(((MR_Box) ((MR_Word) (&mercury__pprint_scalar_common_1[0]))), ((MR_Box) (Var_14)), ((MR_Box) ((MR_Unsigned) 4U)));
    Var_9 = ((MR_Word) (conv3_Var_9));
    {
      HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__1_1, 0) = ((MR_Box) (Var_8));
      MR_hl_field(MR_mktag(1), HeadVar__1_1, 1) = ((MR_Box) (Var_9));
    }
    return HeadVar__1_1;
  }
}

MR_Word MR_CALL 
mercury__pprint__space_line_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;
    MR_Word Var_8;
    MR_Word Var_9;
    MR_Integer Var_11;
    MR_Integer Var_14;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);
    MR_Box conv1_Var_8;
    MR_Box MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box);
    MR_Box conv3_Var_9;

{
#define MR_PROC_LABEL mercury__pprint__space_line_0_f_0

	MR_Integer Max;

		{

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }


		;}
#undef MR_PROC_LABEL
	 Var_11  = Max;
}
    func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
    conv1_Var_8 = func_0(((MR_Box) ((MR_Word) (&mercury__pprint_scalar_common_1[1]))), ((MR_Box) (Var_11)), ((MR_Box) ((MR_String) " ")));
    Var_8 = ((MR_Word) (conv1_Var_8));
{
#define MR_PROC_LABEL mercury__pprint__space_line_0_f_0

	MR_Integer Max;

		{

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }


		;}
#undef MR_PROC_LABEL
	 Var_14  = Max;
}
    func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    conv3_Var_9 = func_2(((MR_Box) ((MR_Word) (&mercury__pprint_scalar_common_1[0]))), ((MR_Box) (Var_14)), ((MR_Box) ((MR_Unsigned) 4U)));
    Var_9 = ((MR_Word) (conv3_Var_9));
    {
      HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__1_1, 0) = ((MR_Box) (Var_8));
      MR_hl_field(MR_mktag(1), HeadVar__1_1, 1) = ((MR_Box) (Var_9));
    }
    return HeadVar__1_1;
  }
}

MR_Word MR_CALL 
mercury__pprint__colon_line_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;
    MR_Word Var_8;
    MR_Word Var_9;
    MR_Integer Var_11;
    MR_Integer Var_14;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);
    MR_Box conv1_Var_8;
    MR_Box MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box);
    MR_Box conv3_Var_9;

{
#define MR_PROC_LABEL mercury__pprint__colon_line_0_f_0

	MR_Integer Max;

		{

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }


		;}
#undef MR_PROC_LABEL
	 Var_11  = Max;
}
    func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
    conv1_Var_8 = func_0(((MR_Box) ((MR_Word) (&mercury__pprint_scalar_common_1[1]))), ((MR_Box) (Var_11)), ((MR_Box) ((MR_String) ":")));
    Var_8 = ((MR_Word) (conv1_Var_8));
{
#define MR_PROC_LABEL mercury__pprint__colon_line_0_f_0

	MR_Integer Max;

		{

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }


		;}
#undef MR_PROC_LABEL
	 Var_14  = Max;
}
    func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    conv3_Var_9 = func_2(((MR_Box) ((MR_Word) (&mercury__pprint_scalar_common_1[0]))), ((MR_Box) (Var_14)), ((MR_Box) ((MR_Unsigned) 4U)));
    Var_9 = ((MR_Word) (conv3_Var_9));
    {
      HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__1_1, 0) = ((MR_Box) (Var_8));
      MR_hl_field(MR_mktag(1), HeadVar__1_1, 1) = ((MR_Box) (Var_9));
    }
    return HeadVar__1_1;
  }
}

MR_Word MR_CALL 
mercury__pprint__semic_line_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;
    MR_Word Var_8;
    MR_Word Var_9;
    MR_Integer Var_11;
    MR_Integer Var_14;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);
    MR_Box conv1_Var_8;
    MR_Box MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box);
    MR_Box conv3_Var_9;

{
#define MR_PROC_LABEL mercury__pprint__semic_line_0_f_0

	MR_Integer Max;

		{

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }


		;}
#undef MR_PROC_LABEL
	 Var_11  = Max;
}
    func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
    conv1_Var_8 = func_0(((MR_Box) ((MR_Word) (&mercury__pprint_scalar_common_1[1]))), ((MR_Box) (Var_11)), ((MR_Box) ((MR_String) ";")));
    Var_8 = ((MR_Word) (conv1_Var_8));
{
#define MR_PROC_LABEL mercury__pprint__semic_line_0_f_0

	MR_Integer Max;

		{

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }


		;}
#undef MR_PROC_LABEL
	 Var_14  = Max;
}
    func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    conv3_Var_9 = func_2(((MR_Box) ((MR_Word) (&mercury__pprint_scalar_common_1[0]))), ((MR_Box) (Var_14)), ((MR_Box) ((MR_Unsigned) 4U)));
    Var_9 = ((MR_Word) (conv3_Var_9));
    {
      HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__1_1, 0) = ((MR_Box) (Var_8));
      MR_hl_field(MR_mktag(1), HeadVar__1_1, 1) = ((MR_Box) (Var_9));
    }
    return HeadVar__1_1;
  }
}

MR_Word MR_CALL 
mercury__pprint__comma_line_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;
    MR_Word Var_8;
    MR_Word Var_9;
    MR_Integer Var_11;
    MR_Integer Var_14;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);
    MR_Box conv1_Var_8;
    MR_Box MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box);
    MR_Box conv3_Var_9;

{
#define MR_PROC_LABEL mercury__pprint__comma_line_0_f_0

	MR_Integer Max;

		{

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }


		;}
#undef MR_PROC_LABEL
	 Var_11  = Max;
}
    func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
    conv1_Var_8 = func_0(((MR_Box) ((MR_Word) (&mercury__pprint_scalar_common_1[1]))), ((MR_Box) (Var_11)), ((MR_Box) ((MR_String) ",")));
    Var_8 = ((MR_Word) (conv1_Var_8));
{
#define MR_PROC_LABEL mercury__pprint__comma_line_0_f_0

	MR_Integer Max;

		{

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }


		;}
#undef MR_PROC_LABEL
	 Var_14  = Max;
}
    func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    conv3_Var_9 = func_2(((MR_Box) ((MR_Word) (&mercury__pprint_scalar_common_1[0]))), ((MR_Box) (Var_14)), ((MR_Box) ((MR_Unsigned) 4U)));
    Var_9 = ((MR_Word) (conv3_Var_9));
    {
      HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__1_1, 0) = ((MR_Box) (Var_8));
      MR_hl_field(MR_mktag(1), HeadVar__1_1, 1) = ((MR_Box) (Var_9));
    }
    return HeadVar__1_1;
  }
}

MR_Word MR_CALL 
mercury__pprint__colon_space_0_f_0(void)
{
  {
    return (MR_Word) (MR_mkword(MR_mktag(3), &mercury__pprint_scalar_common_1[17]));
  }
}

MR_Word MR_CALL 
mercury__pprint__semic_space_0_f_0(void)
{
  {
    return (MR_Word) (MR_mkword(MR_mktag(3), &mercury__pprint_scalar_common_1[16]));
  }
}

MR_Word MR_CALL 
mercury__pprint__comma_space_0_f_0(void)
{
  {
    return (MR_Word) (MR_mkword(MR_mktag(3), &mercury__pprint_scalar_common_1[15]));
  }
}

MR_Word MR_CALL 
mercury__pprint__colon_0_f_0(void)
{
  {
    return (MR_Word) (MR_mkword(MR_mktag(3), &mercury__pprint_scalar_common_1[14]));
  }
}

MR_Word MR_CALL 
mercury__pprint__semic_0_f_0(void)
{
  {
    return (MR_Word) (MR_mkword(MR_mktag(3), &mercury__pprint_scalar_common_1[13]));
  }
}

MR_Word MR_CALL 
mercury__pprint__comma_0_f_0(void)
{
  {
    return (MR_Word) (MR_mkword(MR_mktag(3), &mercury__pprint_scalar_common_1[12]));
  }
}

MR_Word MR_CALL 
mercury__pprint__separated_3_f_0(
  MR_Word TypeInfo_for_T1_15,
  MR_Word TypeClassInfo_for_doc_14,
  MR_Word PP_1,
  MR_Box Sep_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Word HeadVar__4_4;

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Box X_9 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0));
      MR_Word Xs_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));

      succeeded = (Xs_10 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), PP_1, (MR_Integer) 1))));
        MR_Box conv1_HeadVar__4_4;

        conv1_HeadVar__4_4 = func_0(((MR_Box) (PP_1)), X_9);
        HeadVar__4_4 = ((MR_Word) (conv1_HeadVar__4_4));
      }
      else
      {
        MR_Word Var_11;
        MR_Word Var_12;
        MR_Word Var_13;
        MR_Word Var_19;
        MR_Word Var_20;
        MR_Integer Var_22;
        MR_Integer Var_25;
        MR_Box MR_CALL (* func_2)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), PP_1, (MR_Integer) 1))));
        MR_Box conv3_Var_11;
        MR_Box MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box);
        MR_Box conv5_Var_19;
        MR_Box MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box);
        MR_Box conv7_Var_20;

        conv3_Var_11 = func_2(((MR_Box) (PP_1)), X_9);
        Var_11 = ((MR_Word) (conv3_Var_11));
        Var_13 = mercury__pprint__separated_3_f_0(TypeInfo_for_T1_15, TypeClassInfo_for_doc_14, PP_1, Sep_2, Xs_10);
{
#define MR_PROC_LABEL mercury__pprint__separated_3_f_0

	MR_Integer Max;

		{

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }


		;}
#undef MR_PROC_LABEL
	 Var_22  = Max;
}
        func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_doc_14, (MR_Integer) 0)), (MR_Integer) 5))));
        conv5_Var_19 = func_4(((MR_Box) (TypeClassInfo_for_doc_14)), ((MR_Box) (Var_22)), Sep_2);
        Var_19 = ((MR_Word) (conv5_Var_19));
{
#define MR_PROC_LABEL mercury__pprint__separated_3_f_0

	MR_Integer Max;

		{

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }


		;}
#undef MR_PROC_LABEL
	 Var_25  = Max;
}
        func_6 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
        conv7_Var_20 = func_6(((MR_Box) ((MR_Word) (&mercury__pprint_scalar_common_1[0]))), ((MR_Box) (Var_25)), ((MR_Box) (Var_13)));
        Var_20 = ((MR_Word) (conv7_Var_20));
        {
          Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_12, 0) = ((MR_Box) (Var_19));
          MR_hl_field(MR_mktag(1), Var_12, 1) = ((MR_Box) (Var_20));
        }
        HeadVar__4_4 = mercury__pprint__f_43_43_2_f_0((MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Word) (&mercury__pprint_scalar_common_1[0]), ((MR_Box) (Var_11)), ((MR_Box) (Var_12)));
      }
    }
    return HeadVar__4_4;
  }
}

MR_Word MR_CALL 
mercury__pprint__to_doc_2_f_0(
  MR_Word tscc_proc_1_input_1_TypeInfo_for_T_7,
  MR_Integer tscc_proc_1_input_2_Depth_4,
  MR_Box tscc_proc_1_input_3_X_5)
{
  {
    MR_Word tscc_proc_2_input_1_TypeInfo_for_T_18;
    MR_Integer tscc_proc_2_input_2_Depth_5;
    MR_Integer tscc_proc_2_input_3_Priority_6;
    MR_Box tscc_proc_2_input_4_X_7;
    MR_Word tscc_output_1_HeadVar__3_3;

    // The code for TSCC PROC 1: func pprint.to_doc/2-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: func pprint.to_doc/2-0
    ;
    // proc 2 in TSCC: func pprint.to_doc/3-0
    ;
    ;
    goto top_of_proc_1;
  top_of_proc_1:;
    {
      MR_Word TypeInfo_for_T_7 = tscc_proc_1_input_1_TypeInfo_for_T_7;
      MR_Integer Depth_4 = tscc_proc_1_input_2_Depth_4;
      MR_Box X_5 = tscc_proc_1_input_3_X_5;
      MR_Word HeadVar__3_3;
      MR_Word next_value_of_tscc_proc_2_input_1_TypeInfo_for_T_18 = TypeInfo_for_T_7;
      MR_Integer next_value_of_tscc_proc_2_input_2_Depth_5 = Depth_4;
      MR_Box next_value_of_tscc_proc_2_input_4_X_7 = X_5;

      // direct tailcall eliminated
      ;
      tscc_proc_2_input_1_TypeInfo_for_T_18 = next_value_of_tscc_proc_2_input_1_TypeInfo_for_T_18;
      tscc_proc_2_input_2_Depth_5 = next_value_of_tscc_proc_2_input_2_Depth_5;
      tscc_proc_2_input_3_Priority_6 = (MR_Integer) 1000;
      tscc_proc_2_input_4_X_7 = next_value_of_tscc_proc_2_input_4_X_7;
      goto top_of_proc_2;
      tscc_output_1_HeadVar__3_3 = HeadVar__3_3;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word TypeInfo_for_T_18 = tscc_proc_2_input_1_TypeInfo_for_T_18;
      MR_Integer Depth_5 = tscc_proc_2_input_2_Depth_5;
      MR_Integer Priority_6 = tscc_proc_2_input_3_Priority_6;
      MR_Box X_7 = tscc_proc_2_input_4_X_7;
      MR_Word HeadVar__4_4;
      MR_bool succeeded;
      MR_Word TypeInfo_19_19;
      MR_Word TypeInfo_16_45;
      MR_Word Var_8;
      MR_Word TypeCtorInfo_15_44;
      MR_Word TypeInfo_19_48;
      MR_Word ArgTypeDesc_36;
      MR_Word Var_39;
      MR_Word Var_41;
      MR_Word Var_47;
      MR_Word V_5_51;
      MR_Box conv0_Var_8;

{
#define MR_PROC_LABEL mercury__pprint__to_doc_3_f_0

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
	 Var_41  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__pprint__to_doc_3_f_0

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc =  Var_41 ;
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
	 V_5_51  = TypeCtorDesc;
	 Var_39  = ArgTypes;
}
      succeeded = (Var_39 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgTypeDesc_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_39, (MR_Integer) 0))));
        Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_39, (MR_Integer) 1))));
        TypeInfo_19_48 = (MR_Word) (&mercury__pprint_scalar_common_1[8]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_48, ((MR_Box) ((MR_Unsigned) 0U)), ((MR_Box) (Var_47)));
        if (succeeded)
        {
{
#define MR_PROC_LABEL mercury__pprint__to_doc_3_f_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo =  ArgTypeDesc_36 ;
		{

    TypeInfo_for_T = TypeInfo;


		;}
#undef MR_PROC_LABEL
	 TypeInfo_19_19  = TypeInfo_for_T;
}
          TypeCtorInfo_15_44 = (MR_Word) (&mercury__term__term__type_ctor_info_var_1);
          {
            TypeInfo_16_45 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TypeInfo_16_45, 0) = ((MR_Box) (TypeCtorInfo_15_44));
            MR_hl_field(MR_mktag(0), TypeInfo_16_45, 1) = ((MR_Box) (TypeInfo_19_19));
          }
          succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeInfo_for_T_18, TypeInfo_16_45, X_7, &conv0_Var_8);
          if (succeeded)
          {
            Var_8 = ((MR_Word) (conv0_Var_8));
            succeeded = MR_TRUE;
          }
        }
      }
      if (succeeded)
      {
        MR_Word TypeClassInfo_for_enum_61;
        MR_Integer Var_56;
        MR_Integer next_value_of_tscc_proc_1_input_2_Depth_4;
        MR_Box next_value_of_tscc_proc_1_input_3_X_5;

        {
          TypeClassInfo_for_enum_61 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_61, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
          MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_61, 1) = ((MR_Box) (TypeInfo_19_19));
          MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_61, 2) = ((MR_Box) (TypeInfo_16_45));
        }
        Var_56 = mercury__enum__to_int_1_f_0(TypeClassInfo_for_enum_61, ((MR_Box) (Var_8)));
        // direct tailcall eliminated
        ;
        next_value_of_tscc_proc_1_input_2_Depth_4 = Depth_5;
        next_value_of_tscc_proc_1_input_3_X_5 = ((MR_Box) (Var_56));
        tscc_proc_1_input_1_TypeInfo_for_T_7 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0);
        tscc_proc_1_input_2_Depth_4 = next_value_of_tscc_proc_1_input_2_Depth_4;
        tscc_proc_1_input_3_X_5 = next_value_of_tscc_proc_1_input_3_X_5;
        goto top_of_proc_1;
      }
      else
      {
        MR_Word SparseBitsetInt_9;
        MR_Box conv1_SparseBitsetInt_9;

        succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeInfo_for_T_18, (MR_Word) (&mercury__pprint_scalar_common_1[5]), X_7, &conv1_SparseBitsetInt_9);
        if (succeeded)
        {
          SparseBitsetInt_9 = ((MR_Word) (conv1_SparseBitsetInt_9));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word TypeInfo_17_80;
          MR_Word Var_70;
          MR_Word Var_72;
          MR_Word Var_73;
          MR_Integer Var_74;
          MR_Word Var_76;

          mercury__private_builtin__type_info_from_typeclass_info_3_p_0((MR_Word) (&mercury__pprint_scalar_common_1[2]), (MR_Integer) 1, &TypeInfo_17_80);
          Var_74 = (MR_Integer) ((MR_Unsigned) Depth_5 - (MR_Unsigned) (MR_Integer) 1);
          Var_76 = mercury__sparse_bitset__to_sorted_list_1_f_0((MR_Word) (&mercury__pprint_scalar_common_1[2]), SparseBitsetInt_9);
          Var_73 = mercury__pprint__list_to_doc_2_f_0(TypeInfo_17_80, Var_74, Var_76);
          Var_72 = mercury__pprint__parentheses_1_f_0((MR_Word) (&mercury__pprint_scalar_common_1[0]), ((MR_Box) (Var_73)));
          Var_70 = mercury__pprint__f_43_43_2_f_0((MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Word) (&mercury__pprint_scalar_common_1[0]), ((MR_Box) ((MR_String) "sparse_bitset")), ((MR_Box) (Var_72)));
          HeadVar__4_4 = mercury__pprint__group_1_f_0((MR_Word) (&mercury__pprint_scalar_common_1[0]), ((MR_Box) (Var_70)));
        }
        else
        {
          MR_Word TypeInfo_21_21;
          MR_Word SparseBitsetVar_10;
          MR_Word TypeInfo_for_T2_85;
          MR_Word A_83;
          MR_Box conv2_A_83;

          succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeInfo_for_T_18, (MR_Word) (&mercury__pprint_scalar_common_1[7]), X_7, &conv2_A_83);
          if (succeeded)
          {
            A_83 = ((MR_Word) (conv2_A_83));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            TypeInfo_for_T2_85 = (MR_Word) (&mercury__term__term__type_ctor_info_generic_0);
            SparseBitsetVar_10 = A_83;
            TypeInfo_21_21 = TypeInfo_for_T2_85;
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            MR_Word TypeInfo_23_23;
            MR_Word TypeClassInfo_for_enum_25;

            {
              TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), TypeInfo_23_23, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
              MR_hl_field(MR_mktag(0), TypeInfo_23_23, 1) = ((MR_Box) (TypeInfo_21_21));
            }
            {
              TypeClassInfo_for_enum_25 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_25, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
              MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_25, 1) = ((MR_Box) (TypeInfo_21_21));
              MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_25, 2) = ((MR_Box) (TypeInfo_23_23));
            }
            HeadVar__4_4 = mercury__pprint__sparse_bitset_to_doc_2_f_0(TypeClassInfo_for_enum_25, Depth_5, SparseBitsetVar_10);
          }
          else
          {
            MR_Word TypeInfo_26_26;
            MR_Word List_11;

            succeeded = mercury__pprint__dynamic_cast_to_list_2_p_0(TypeInfo_for_T_18, &TypeInfo_26_26, X_7, &List_11);
            if (succeeded)
              HeadVar__4_4 = mercury__pprint__list_to_doc_2_f_0(TypeInfo_26_26, Depth_5, List_11);
            else
            {
              MR_Word TypeInfo_27_27;
              MR_ArrayPtr Array_12;
              MR_ArrayPtr conv3_Array_12;

              succeeded = mercury__array__dynamic_cast_to_array_2_p_0(TypeInfo_for_T_18, &TypeInfo_27_27, X_7, &conv3_Array_12);
              if (succeeded)
              {
                Array_12 = (MR_ArrayPtr) (conv3_Array_12);
                succeeded = MR_TRUE;
              }
              if (succeeded)
                HeadVar__4_4 = mercury__pprint__array_to_doc_2_f_0(TypeInfo_27_27, Depth_5, (MR_ArrayPtr) (Array_12));
              else
              {
                MR_Word TypeInfo_28_28;
                MR_Box VersionArray_13;

                succeeded = mercury__pprint__dynamic_cast_to_version_array_2_p_0(TypeInfo_for_T_18, &TypeInfo_28_28, X_7, &VersionArray_13);
                if (succeeded)
                  HeadVar__4_4 = mercury__pprint__version_array_to_doc_2_f_0(TypeInfo_28_28, Depth_5, VersionArray_13);
                else
                {
                  MR_Box Tuple_14 = X_7;
                  MR_String Var_94;
                  MR_Integer _Arity_91;

                  mercury__deconstruct__functor_4_p_1(TypeInfo_for_T_18, X_7, (MR_Integer) 1, &Var_94, &_Arity_91);
                  succeeded = (strcmp((MR_String) "{}", Var_94) == 0);
                  if (succeeded)
                    HeadVar__4_4 = mercury__pprint__tuple_to_doc_2_f_0(TypeInfo_for_T_18, Depth_5, Tuple_14);
                  else
                  {
                    MR_Word TypeInfo_29_29;
                    MR_Word TypeInfo_30_30;
                    MR_Word Map_15;

                    succeeded = mercury__pprint__dynamic_cast_to_map_2_p_0(TypeInfo_for_T_18, &TypeInfo_29_29, &TypeInfo_30_30, X_7, &Map_15);
                    if (succeeded)
                      HeadVar__4_4 = mercury__pprint__map_to_doc_2_f_0(TypeInfo_29_29, TypeInfo_30_30, Depth_5, Map_15);
                    else
                    {
                      MR_Word TypeInfo_31_31;
                      MR_Word TypeInfo_32_32;
                      MR_Word MapPair_16;

                      succeeded = mercury__pprint__dynamic_cast_to_map_pair_2_p_0(TypeInfo_for_T_18, &TypeInfo_31_31, &TypeInfo_32_32, X_7, &MapPair_16);
                      if (succeeded)
                        HeadVar__4_4 = mercury__pprint__map_pair_to_doc_2_f_0(TypeInfo_31_31, TypeInfo_32_32, Depth_5, MapPair_16);
                      else
                      {
                        MR_Word TypeInfo_33_33;
                        MR_Word Robdd_17;

                        succeeded = mercury__pprint__dynamic_cast_to_robdd_2_p_0(TypeInfo_for_T_18, &TypeInfo_33_33, X_7, &Robdd_17);
                        if (succeeded)
                          HeadVar__4_4 = mercury__pprint__robdd_to_doc_2_f_0(TypeInfo_33_33, Depth_5, Robdd_17);
                        else
                          HeadVar__4_4 = mercury__pprint__generic_term_to_doc_3_f_0(TypeInfo_for_T_18, Depth_5, Priority_6, X_7);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      tscc_output_1_HeadVar__3_3 = HeadVar__4_4;
      goto tscc_end;
    }
  tscc_end:;
    return tscc_output_1_HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__pprint__to_doc_3_f_0(
  MR_Word tscc_proc_2_input_1_TypeInfo_for_T_18,
  MR_Integer tscc_proc_2_input_2_Depth_5,
  MR_Integer tscc_proc_2_input_3_Priority_6,
  MR_Box tscc_proc_2_input_4_X_7)
{
  {
    MR_Word tscc_proc_1_input_1_TypeInfo_for_T_7;
    MR_Integer tscc_proc_1_input_2_Depth_4;
    MR_Box tscc_proc_1_input_3_X_5;
    MR_Word tscc_output_1_HeadVar__3_3;

    // The code for TSCC PROC 2: func pprint.to_doc/3-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: func pprint.to_doc/2-0
    ;
    // proc 2 in TSCC: func pprint.to_doc/3-0
    ;
    ;
    goto top_of_proc_2;
  top_of_proc_1:;
    {
      MR_Word TypeInfo_for_T_7 = tscc_proc_1_input_1_TypeInfo_for_T_7;
      MR_Integer Depth_4 = tscc_proc_1_input_2_Depth_4;
      MR_Box X_5 = tscc_proc_1_input_3_X_5;
      MR_Word HeadVar__3_3;
      MR_Word next_value_of_tscc_proc_2_input_1_TypeInfo_for_T_18 = TypeInfo_for_T_7;
      MR_Integer next_value_of_tscc_proc_2_input_2_Depth_5 = Depth_4;
      MR_Box next_value_of_tscc_proc_2_input_4_X_7 = X_5;

      // direct tailcall eliminated
      ;
      tscc_proc_2_input_1_TypeInfo_for_T_18 = next_value_of_tscc_proc_2_input_1_TypeInfo_for_T_18;
      tscc_proc_2_input_2_Depth_5 = next_value_of_tscc_proc_2_input_2_Depth_5;
      tscc_proc_2_input_3_Priority_6 = (MR_Integer) 1000;
      tscc_proc_2_input_4_X_7 = next_value_of_tscc_proc_2_input_4_X_7;
      goto top_of_proc_2;
      tscc_output_1_HeadVar__3_3 = HeadVar__3_3;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word TypeInfo_for_T_18 = tscc_proc_2_input_1_TypeInfo_for_T_18;
      MR_Integer Depth_5 = tscc_proc_2_input_2_Depth_5;
      MR_Integer Priority_6 = tscc_proc_2_input_3_Priority_6;
      MR_Box X_7 = tscc_proc_2_input_4_X_7;
      MR_Word HeadVar__4_4;
      MR_bool succeeded;
      MR_Word TypeInfo_19_19;
      MR_Word TypeInfo_16_45;
      MR_Word Var_8;
      MR_Word TypeCtorInfo_15_44;
      MR_Word TypeInfo_19_48;
      MR_Word ArgTypeDesc_36;
      MR_Word Var_39;
      MR_Word Var_41;
      MR_Word Var_47;
      MR_Word V_5_51;
      MR_Box conv0_Var_8;

{
#define MR_PROC_LABEL mercury__pprint__to_doc_3_f_0

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
	 Var_41  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__pprint__to_doc_3_f_0

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc =  Var_41 ;
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
	 V_5_51  = TypeCtorDesc;
	 Var_39  = ArgTypes;
}
      succeeded = (Var_39 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgTypeDesc_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_39, (MR_Integer) 0))));
        Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_39, (MR_Integer) 1))));
        TypeInfo_19_48 = (MR_Word) (&mercury__pprint_scalar_common_1[8]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_48, ((MR_Box) ((MR_Unsigned) 0U)), ((MR_Box) (Var_47)));
        if (succeeded)
        {
{
#define MR_PROC_LABEL mercury__pprint__to_doc_3_f_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo =  ArgTypeDesc_36 ;
		{

    TypeInfo_for_T = TypeInfo;


		;}
#undef MR_PROC_LABEL
	 TypeInfo_19_19  = TypeInfo_for_T;
}
          TypeCtorInfo_15_44 = (MR_Word) (&mercury__term__term__type_ctor_info_var_1);
          {
            TypeInfo_16_45 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TypeInfo_16_45, 0) = ((MR_Box) (TypeCtorInfo_15_44));
            MR_hl_field(MR_mktag(0), TypeInfo_16_45, 1) = ((MR_Box) (TypeInfo_19_19));
          }
          succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeInfo_for_T_18, TypeInfo_16_45, X_7, &conv0_Var_8);
          if (succeeded)
          {
            Var_8 = ((MR_Word) (conv0_Var_8));
            succeeded = MR_TRUE;
          }
        }
      }
      if (succeeded)
      {
        MR_Word TypeClassInfo_for_enum_61;
        MR_Integer Var_56;
        MR_Integer next_value_of_tscc_proc_1_input_2_Depth_4;
        MR_Box next_value_of_tscc_proc_1_input_3_X_5;

        {
          TypeClassInfo_for_enum_61 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_61, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
          MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_61, 1) = ((MR_Box) (TypeInfo_19_19));
          MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_61, 2) = ((MR_Box) (TypeInfo_16_45));
        }
        Var_56 = mercury__enum__to_int_1_f_0(TypeClassInfo_for_enum_61, ((MR_Box) (Var_8)));
        // direct tailcall eliminated
        ;
        next_value_of_tscc_proc_1_input_2_Depth_4 = Depth_5;
        next_value_of_tscc_proc_1_input_3_X_5 = ((MR_Box) (Var_56));
        tscc_proc_1_input_1_TypeInfo_for_T_7 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0);
        tscc_proc_1_input_2_Depth_4 = next_value_of_tscc_proc_1_input_2_Depth_4;
        tscc_proc_1_input_3_X_5 = next_value_of_tscc_proc_1_input_3_X_5;
        goto top_of_proc_1;
      }
      else
      {
        MR_Word SparseBitsetInt_9;
        MR_Box conv1_SparseBitsetInt_9;

        succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeInfo_for_T_18, (MR_Word) (&mercury__pprint_scalar_common_1[5]), X_7, &conv1_SparseBitsetInt_9);
        if (succeeded)
        {
          SparseBitsetInt_9 = ((MR_Word) (conv1_SparseBitsetInt_9));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word TypeInfo_17_80;
          MR_Word Var_70;
          MR_Word Var_72;
          MR_Word Var_73;
          MR_Integer Var_74;
          MR_Word Var_76;

          mercury__private_builtin__type_info_from_typeclass_info_3_p_0((MR_Word) (&mercury__pprint_scalar_common_1[2]), (MR_Integer) 1, &TypeInfo_17_80);
          Var_74 = (MR_Integer) ((MR_Unsigned) Depth_5 - (MR_Unsigned) (MR_Integer) 1);
          Var_76 = mercury__sparse_bitset__to_sorted_list_1_f_0((MR_Word) (&mercury__pprint_scalar_common_1[2]), SparseBitsetInt_9);
          Var_73 = mercury__pprint__list_to_doc_2_f_0(TypeInfo_17_80, Var_74, Var_76);
          Var_72 = mercury__pprint__parentheses_1_f_0((MR_Word) (&mercury__pprint_scalar_common_1[0]), ((MR_Box) (Var_73)));
          Var_70 = mercury__pprint__f_43_43_2_f_0((MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Word) (&mercury__pprint_scalar_common_1[0]), ((MR_Box) ((MR_String) "sparse_bitset")), ((MR_Box) (Var_72)));
          HeadVar__4_4 = mercury__pprint__group_1_f_0((MR_Word) (&mercury__pprint_scalar_common_1[0]), ((MR_Box) (Var_70)));
        }
        else
        {
          MR_Word TypeInfo_21_21;
          MR_Word SparseBitsetVar_10;
          MR_Word TypeInfo_for_T2_85;
          MR_Word A_83;
          MR_Box conv2_A_83;

          succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeInfo_for_T_18, (MR_Word) (&mercury__pprint_scalar_common_1[7]), X_7, &conv2_A_83);
          if (succeeded)
          {
            A_83 = ((MR_Word) (conv2_A_83));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            TypeInfo_for_T2_85 = (MR_Word) (&mercury__term__term__type_ctor_info_generic_0);
            SparseBitsetVar_10 = A_83;
            TypeInfo_21_21 = TypeInfo_for_T2_85;
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            MR_Word TypeInfo_23_23;
            MR_Word TypeClassInfo_for_enum_25;

            {
              TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), TypeInfo_23_23, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
              MR_hl_field(MR_mktag(0), TypeInfo_23_23, 1) = ((MR_Box) (TypeInfo_21_21));
            }
            {
              TypeClassInfo_for_enum_25 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_25, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
              MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_25, 1) = ((MR_Box) (TypeInfo_21_21));
              MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_25, 2) = ((MR_Box) (TypeInfo_23_23));
            }
            HeadVar__4_4 = mercury__pprint__sparse_bitset_to_doc_2_f_0(TypeClassInfo_for_enum_25, Depth_5, SparseBitsetVar_10);
          }
          else
          {
            MR_Word TypeInfo_26_26;
            MR_Word List_11;

            succeeded = mercury__pprint__dynamic_cast_to_list_2_p_0(TypeInfo_for_T_18, &TypeInfo_26_26, X_7, &List_11);
            if (succeeded)
              HeadVar__4_4 = mercury__pprint__list_to_doc_2_f_0(TypeInfo_26_26, Depth_5, List_11);
            else
            {
              MR_Word TypeInfo_27_27;
              MR_ArrayPtr Array_12;
              MR_ArrayPtr conv3_Array_12;

              succeeded = mercury__array__dynamic_cast_to_array_2_p_0(TypeInfo_for_T_18, &TypeInfo_27_27, X_7, &conv3_Array_12);
              if (succeeded)
              {
                Array_12 = (MR_ArrayPtr) (conv3_Array_12);
                succeeded = MR_TRUE;
              }
              if (succeeded)
                HeadVar__4_4 = mercury__pprint__array_to_doc_2_f_0(TypeInfo_27_27, Depth_5, (MR_ArrayPtr) (Array_12));
              else
              {
                MR_Word TypeInfo_28_28;
                MR_Box VersionArray_13;

                succeeded = mercury__pprint__dynamic_cast_to_version_array_2_p_0(TypeInfo_for_T_18, &TypeInfo_28_28, X_7, &VersionArray_13);
                if (succeeded)
                  HeadVar__4_4 = mercury__pprint__version_array_to_doc_2_f_0(TypeInfo_28_28, Depth_5, VersionArray_13);
                else
                {
                  MR_Box Tuple_14 = X_7;
                  MR_String Var_94;
                  MR_Integer _Arity_91;

                  mercury__deconstruct__functor_4_p_1(TypeInfo_for_T_18, X_7, (MR_Integer) 1, &Var_94, &_Arity_91);
                  succeeded = (strcmp((MR_String) "{}", Var_94) == 0);
                  if (succeeded)
                    HeadVar__4_4 = mercury__pprint__tuple_to_doc_2_f_0(TypeInfo_for_T_18, Depth_5, Tuple_14);
                  else
                  {
                    MR_Word TypeInfo_29_29;
                    MR_Word TypeInfo_30_30;
                    MR_Word Map_15;

                    succeeded = mercury__pprint__dynamic_cast_to_map_2_p_0(TypeInfo_for_T_18, &TypeInfo_29_29, &TypeInfo_30_30, X_7, &Map_15);
                    if (succeeded)
                      HeadVar__4_4 = mercury__pprint__map_to_doc_2_f_0(TypeInfo_29_29, TypeInfo_30_30, Depth_5, Map_15);
                    else
                    {
                      MR_Word TypeInfo_31_31;
                      MR_Word TypeInfo_32_32;
                      MR_Word MapPair_16;

                      succeeded = mercury__pprint__dynamic_cast_to_map_pair_2_p_0(TypeInfo_for_T_18, &TypeInfo_31_31, &TypeInfo_32_32, X_7, &MapPair_16);
                      if (succeeded)
                        HeadVar__4_4 = mercury__pprint__map_pair_to_doc_2_f_0(TypeInfo_31_31, TypeInfo_32_32, Depth_5, MapPair_16);
                      else
                      {
                        MR_Word TypeInfo_33_33;
                        MR_Word Robdd_17;

                        succeeded = mercury__pprint__dynamic_cast_to_robdd_2_p_0(TypeInfo_for_T_18, &TypeInfo_33_33, X_7, &Robdd_17);
                        if (succeeded)
                          HeadVar__4_4 = mercury__pprint__robdd_to_doc_2_f_0(TypeInfo_33_33, Depth_5, Robdd_17);
                        else
                          HeadVar__4_4 = mercury__pprint__generic_term_to_doc_3_f_0(TypeInfo_for_T_18, Depth_5, Priority_6, X_7);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      tscc_output_1_HeadVar__3_3 = HeadVar__4_4;
      goto tscc_end;
    }
  tscc_end:;
    return tscc_output_1_HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
mercury__pprint__univ_to_doc_3_f_0(
  MR_Integer Depth_5,
  MR_Integer Priority_6,
  MR_Word Univ_7)
{
  {
    MR_Word HeadVar__4_4;
    MR_Word TypeInfo_9_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Univ_7, (MR_Integer) 0))));
    MR_Box Var_8 = (MR_hl_field(MR_mktag(0), Univ_7, (MR_Integer) 1));

    HeadVar__4_4 = mercury__pprint__to_doc_3_f_0(TypeInfo_9_9, Depth_5, Priority_6, Var_8);
    return HeadVar__4_4;
  }
}

static MR_Word MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_51_56_95_95_91_51_44_32_52_93_95_48_2_f_in__list_0(
  MR_Word Var_12,
  MR_Integer Var_13,
  MR_Word HeadVar__2_2)
{
  {
    MR_Word HeadVar__3_3;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Box V_6_6 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      MR_Word V_7_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word V_8_8;
      MR_Word V_9_9;

      V_8_8 = mercury__pprint__to_doc_3_f_0(Var_12, Var_13, (MR_Integer) 1000, V_6_6);
      V_9_9 = mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_51_56_95_95_91_51_44_32_52_93_95_48_2_f_in__list_0(Var_12, Var_13, V_7_7);
      {
        HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__3_3, 0) = ((MR_Box) (V_8_8));
        MR_hl_field(MR_mktag(1), HeadVar__3_3, 1) = ((MR_Box) (V_9_9));
      }
    }
    return HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
mercury__pprint__robdd_to_doc_2_f_0(
  MR_Word TypeInfo_for_T_12,
  MR_Integer Depth_4,
  MR_Word R_5)
{
  {
    MR_Word HeadVar__3_3;
    MR_Word TypeInfo_16_16;
    MR_Word TypeInfo_18_18;
    MR_Word Var_7;
    MR_Word Var_8;
    MR_Integer Var_9;
    MR_Word Var_11;
    MR_Word Var_21;
    MR_Word Var_23;
    MR_Integer Var_24;
    MR_Word Var_29;
    MR_Word Var_41;
    MR_Integer Var_43;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Integer Var_59;
    MR_Integer Var_62;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);
    MR_Box conv1_Var_41;
    MR_Box MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box);
    MR_Box conv3_Var_56;
    MR_Box MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box);
    MR_Box conv5_Var_57;

    {
      TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_16_16, 0) = ((MR_Box) (&mercury__robdd__robdd__type_ctor_info_literal_1));
      MR_hl_field(MR_mktag(0), TypeInfo_16_16, 1) = ((MR_Box) (TypeInfo_for_T_12));
    }
    {
      TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_18_18, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(MR_mktag(0), TypeInfo_18_18, 1) = ((MR_Box) (TypeInfo_16_16));
    }
    Var_9 = (MR_Integer) ((MR_Unsigned) Depth_4 - (MR_Unsigned) (MR_Integer) 1);
    Var_11 = mercury__robdd__dnf_1_f_0(TypeInfo_for_T_12, R_5);
    Var_24 = (MR_Integer) ((MR_Unsigned) Var_9 - (MR_Unsigned) (MR_Integer) 1);
    Var_29 = mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_51_56_95_95_91_51_44_32_52_93_95_48_2_f_in__list_0(TypeInfo_18_18, Var_24, (MR_Word) (Var_11));
    Var_23 = mercury__pprint__packed_3_f_0((MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Word) (&mercury__pprint_scalar_common_1[0]), Var_24, ((MR_Box) ((MR_String) ", ")), Var_29);
{
#define MR_PROC_LABEL mercury__pprint__robdd_to_doc_2_f_0

	MR_Integer Max;

		{

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }


		;}
#undef MR_PROC_LABEL
	 Var_43  = Max;
}
    func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    conv1_Var_41 = func_0(((MR_Box) ((MR_Word) (&mercury__pprint_scalar_common_1[0]))), ((MR_Box) (Var_43)), ((MR_Box) (Var_23)));
    Var_41 = ((MR_Word) (conv1_Var_41));
    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_21, 0) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(2), Var_21, 1) = ((MR_Box) (Var_41));
    }
    Var_8 = mercury__pprint__bracketed_3_f_0((MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Word) (&mercury__pprint_scalar_common_1[0]), ((MR_Box) ((MR_String) "[")), ((MR_Box) ((MR_String) "]")), ((MR_Box) (Var_21)));
    Var_7 = mercury__pprint__bracketed_3_f_0((MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Word) (&mercury__pprint_scalar_common_1[0]), ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_String) ")")), ((MR_Box) (Var_8)));
{
#define MR_PROC_LABEL mercury__pprint__robdd_to_doc_2_f_0

	MR_Integer Max;

		{

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }


		;}
#undef MR_PROC_LABEL
	 Var_59  = Max;
}
    func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
    conv3_Var_56 = func_2(((MR_Box) ((MR_Word) (&mercury__pprint_scalar_common_1[1]))), ((MR_Box) (Var_59)), ((MR_Box) ((MR_String) "robdd_dnf")));
    Var_56 = ((MR_Word) (conv3_Var_56));
{
#define MR_PROC_LABEL mercury__pprint__robdd_to_doc_2_f_0

	MR_Integer Max;

		{

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }


		;}
#undef MR_PROC_LABEL
	 Var_62  = Max;
}
    func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    conv5_Var_57 = func_4(((MR_Box) ((MR_Word) (&mercury__pprint_scalar_common_1[0]))), ((MR_Box) (Var_62)), ((MR_Box) (Var_7)));
    Var_57 = ((MR_Word) (conv5_Var_57));
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__3_3, 0) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(1), HeadVar__3_3, 1) = ((MR_Box) (Var_57));
    }
    return HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
mercury__pprint__map_pair_to_doc_2_f_0(
  MR_Word TypeInfo_for_T1_21,
  MR_Word TypeInfo_for_T2_22,
  MR_Integer Depth_4,
  MR_Word HeadVar__2_2)
{
  {
    MR_Word HeadVar__3_3;
    MR_Box Key_5 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));
    MR_Box Value_6 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1));
    MR_Word Var_7;
    MR_Integer Var_8 = (MR_Integer) ((MR_Unsigned) Depth_4 - (MR_Unsigned) (MR_Integer) 1);
    MR_Word Var_10;
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Word Var_16;
    MR_Word Var_18;
    MR_Integer Var_19;
    MR_Word Var_33;
    MR_Integer Var_35;
    MR_Word Var_38;
    MR_Integer Var_40;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);
    MR_Box conv1_Var_33;
    MR_Box MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box);
    MR_Box conv3_Var_38;

    Var_7 = mercury__pprint__to_doc_3_f_0(TypeInfo_for_T1_21, Var_8, (MR_Integer) 1000, Key_5);
    Var_19 = (MR_Integer) ((MR_Unsigned) Depth_4 - (MR_Unsigned) (MR_Integer) 1);
    Var_18 = mercury__pprint__to_doc_3_f_0(TypeInfo_for_T2_22, Var_19, (MR_Integer) 1000, Value_6);
    Var_16 = mercury__pprint__f_43_43_2_f_0((MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Word) (&mercury__pprint_scalar_common_1[0]), ((MR_Box) ((MR_Unsigned) 4U)), ((MR_Box) (Var_18)));
{
#define MR_PROC_LABEL mercury__pprint__map_pair_to_doc_2_f_0

	MR_Integer Max;

		{

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }


		;}
#undef MR_PROC_LABEL
	 Var_35  = Max;
}
    func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    conv1_Var_33 = func_0(((MR_Box) ((MR_Word) (&mercury__pprint_scalar_common_1[0]))), ((MR_Box) (Var_35)), ((MR_Box) (Var_16)));
    Var_33 = ((MR_Word) (conv1_Var_33));
    {
      Var_14 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_14, 0) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(2), Var_14, 1) = ((MR_Box) (Var_33));
    }
{
#define MR_PROC_LABEL mercury__pprint__map_pair_to_doc_2_f_0

	MR_Integer Max;

		{

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }


		;}
#undef MR_PROC_LABEL
	 Var_40  = Max;
}
    func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    conv3_Var_38 = func_2(((MR_Box) ((MR_Word) (&mercury__pprint_scalar_common_1[0]))), ((MR_Box) (Var_40)), ((MR_Box) (Var_14)));
    Var_38 = ((MR_Word) (conv3_Var_38));
    {
      Var_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_13, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), Var_13, 1) = ((MR_Box) (Var_38));
    }
    Var_10 = mercury__pprint__f_43_43_2_f_0((MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Word) (&mercury__pprint_scalar_common_1[0]), ((MR_Box) (MR_mkword(MR_mktag(3), &mercury__pprint_scalar_common_1[11]))), ((MR_Box) (Var_13)));
    HeadVar__3_3 = mercury__pprint__f_43_43_2_f_0((MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Word) (&mercury__pprint_scalar_common_1[0]), ((MR_Box) (Var_7)), ((MR_Box) (Var_10)));
    return HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
mercury__pprint__map_to_doc_2_f_0(
  MR_Word TypeInfo_for_T1_16,
  MR_Word TypeInfo_for_T2_17,
  MR_Integer Depth_4,
  MR_Word X_5)
{
  {
    MR_Word Doc_6;
    MR_Word TypeInfo_21_21;
    MR_Word KVs_7;
    MR_Word Var_9;
    MR_Word Var_10;
    MR_Word Var_12;
    MR_Word Var_13;
    MR_Integer Var_14;
    MR_Word Var_37;
    MR_Word Var_39;
    MR_Integer Var_40;
    MR_Word Var_45;
    MR_Word Var_57;
    MR_Integer Var_59;
    MR_Word Var_72;
    MR_Word Var_73;
    MR_Integer Var_75;
    MR_Integer Var_78;
    MR_Word Var_83;
    MR_Integer Var_85;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);
    MR_Box conv1_Var_57;
    MR_Box MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box);
    MR_Box conv3_Var_72;
    MR_Box MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box);
    MR_Box conv5_Var_73;
    MR_Box MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box);
    MR_Box conv7_Var_83;

    {
      TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_21_21, 0) = ((MR_Box) (&mercury__pprint__pprint__type_ctor_info_map_pair_2));
      MR_hl_field(MR_mktag(0), TypeInfo_21_21, 1) = ((MR_Box) (TypeInfo_for_T1_16));
      MR_hl_field(MR_mktag(0), TypeInfo_21_21, 2) = ((MR_Box) (TypeInfo_for_T2_17));
    }
    mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_T1_16, TypeInfo_for_T2_17, X_5, (MR_Word) ((MR_Unsigned) 0U), &Var_9);
    KVs_7 = mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_93_95_48_2_f_in__list_0(Var_9);
    Var_14 = (MR_Integer) ((MR_Unsigned) Depth_4 - (MR_Unsigned) (MR_Integer) 1);
    Var_40 = (MR_Integer) ((MR_Unsigned) Var_14 - (MR_Unsigned) (MR_Integer) 1);
    Var_45 = mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_51_56_95_95_91_51_44_32_52_93_95_48_2_f_in__list_0(TypeInfo_21_21, Var_40, (MR_Word) (KVs_7));
    Var_39 = mercury__pprint__packed_3_f_0((MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Word) (&mercury__pprint_scalar_common_1[0]), Var_40, ((MR_Box) ((MR_String) ", ")), Var_45);
{
#define MR_PROC_LABEL mercury__pprint__map_to_doc_2_f_0

	MR_Integer Max;

		{

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }


		;}
#undef MR_PROC_LABEL
	 Var_59  = Max;
}
    func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    conv1_Var_57 = func_0(((MR_Box) ((MR_Word) (&mercury__pprint_scalar_common_1[0]))), ((MR_Box) (Var_59)), ((MR_Box) (Var_39)));
    Var_57 = ((MR_Word) (conv1_Var_57));
    {
      Var_37 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_37, 0) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(2), Var_37, 1) = ((MR_Box) (Var_57));
    }
    Var_13 = mercury__pprint__bracketed_3_f_0((MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Word) (&mercury__pprint_scalar_common_1[0]), ((MR_Box) ((MR_String) "[")), ((MR_Box) ((MR_String) "]")), ((MR_Box) (Var_37)));
    Var_12 = mercury__pprint__bracketed_3_f_0((MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Word) (&mercury__pprint_scalar_common_1[0]), ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_String) ")")), ((MR_Box) (Var_13)));
{
#define MR_PROC_LABEL mercury__pprint__map_to_doc_2_f_0

	MR_Integer Max;

		{

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }


		;}
#undef MR_PROC_LABEL
	 Var_75  = Max;
}
    func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
    conv3_Var_72 = func_2(((MR_Box) ((MR_Word) (&mercury__pprint_scalar_common_1[1]))), ((MR_Box) (Var_75)), ((MR_Box) ((MR_String) "map")));
    Var_72 = ((MR_Word) (conv3_Var_72));
{
#define MR_PROC_LABEL mercury__pprint__map_to_doc_2_f_0

	MR_Integer Max;

		{

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }


		;}
#undef MR_PROC_LABEL
	 Var_78  = Max;
}
    func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    conv5_Var_73 = func_4(((MR_Box) ((MR_Word) (&mercury__pprint_scalar_common_1[0]))), ((MR_Box) (Var_78)), ((MR_Box) (Var_12)));
    Var_73 = ((MR_Word) (conv5_Var_73));
    {
      Var_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_10, 0) = ((MR_Box) (Var_72));
      MR_hl_field(MR_mktag(1), Var_10, 1) = ((MR_Box) (Var_73));
    }
{
#define MR_PROC_LABEL mercury__pprint__map_to_doc_2_f_0

	MR_Integer Max;

		{

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }


		;}
#undef MR_PROC_LABEL
	 Var_85  = Max;
}
    func_6 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    conv7_Var_83 = func_6(((MR_Box) ((MR_Word) (&mercury__pprint_scalar_common_1[0]))), ((MR_Box) (Var_85)), ((MR_Box) (Var_10)));
    Var_83 = ((MR_Word) (conv7_Var_83));
    {
      Doc_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Doc_6, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), Doc_6, 1) = ((MR_Box) (Var_83));
    }
    return Doc_6;
  }
}

static MR_Word MR_CALL 
mercury__pprint__version_array_to_doc_2_f_0(
  MR_Word TypeInfo_for_T_13,
  MR_Integer Depth_4,
  MR_Box A_5)
{
  {
    MR_Word HeadVar__3_3;
    MR_Word Var_6;
    MR_Word Var_8;
    MR_Word Var_9;
    MR_Integer Var_10 = (MR_Integer) ((MR_Unsigned) Depth_4 - (MR_Unsigned) (MR_Integer) 1);
    MR_Word Var_12;
    MR_Integer V_8_32;
    MR_Integer V_4_36;
    MR_Word Var_40;
    MR_Word Var_42;
    MR_Integer Var_43;
    MR_Word Var_48;
    MR_Word Var_60;
    MR_Integer Var_62;
    MR_Word Var_75;
    MR_Word Var_76;
    MR_Integer Var_78;
    MR_Integer Var_81;
    MR_Word Var_86;
    MR_Integer Var_88;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);
    MR_Box conv1_Var_60;
    MR_Box MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box);
    MR_Box conv3_Var_75;
    MR_Box MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box);
    MR_Box conv5_Var_76;
    MR_Box MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box);
    MR_Box conv7_Var_86;

{
#define MR_PROC_LABEL mercury__pprint__version_array_to_doc_2_f_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, A_5 , VA);
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	 V_4_36  = N;
}
    V_8_32 = (MR_Integer) ((MR_Unsigned) V_4_36 - (MR_Unsigned) (MR_Integer) 1);
    Var_12 = mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_52_54_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_f_in__version_array_0(TypeInfo_for_T_13, A_5, (MR_Word) ((MR_Unsigned) 0U), V_8_32);
    Var_43 = (MR_Integer) ((MR_Unsigned) Var_10 - (MR_Unsigned) (MR_Integer) 1);
    Var_48 = mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_51_56_95_95_91_51_44_32_52_93_95_48_2_f_in__list_0(TypeInfo_for_T_13, Var_43, Var_12);
    Var_42 = mercury__pprint__packed_3_f_0((MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Word) (&mercury__pprint_scalar_common_1[0]), Var_43, ((MR_Box) ((MR_String) ", ")), Var_48);
{
#define MR_PROC_LABEL mercury__pprint__version_array_to_doc_2_f_0

	MR_Integer Max;

		{

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }


		;}
#undef MR_PROC_LABEL
	 Var_62  = Max;
}
    func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    conv1_Var_60 = func_0(((MR_Box) ((MR_Word) (&mercury__pprint_scalar_common_1[0]))), ((MR_Box) (Var_62)), ((MR_Box) (Var_42)));
    Var_60 = ((MR_Word) (conv1_Var_60));
    {
      Var_40 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_40, 0) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(2), Var_40, 1) = ((MR_Box) (Var_60));
    }
    Var_9 = mercury__pprint__bracketed_3_f_0((MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Word) (&mercury__pprint_scalar_common_1[0]), ((MR_Box) ((MR_String) "[")), ((MR_Box) ((MR_String) "]")), ((MR_Box) (Var_40)));
    Var_8 = mercury__pprint__bracketed_3_f_0((MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Word) (&mercury__pprint_scalar_common_1[0]), ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_String) ")")), ((MR_Box) (Var_9)));
{
#define MR_PROC_LABEL mercury__pprint__version_array_to_doc_2_f_0

	MR_Integer Max;

		{

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }


		;}
#undef MR_PROC_LABEL
	 Var_78  = Max;
}
    func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
    conv3_Var_75 = func_2(((MR_Box) ((MR_Word) (&mercury__pprint_scalar_common_1[1]))), ((MR_Box) (Var_78)), ((MR_Box) ((MR_String) "version_array")));
    Var_75 = ((MR_Word) (conv3_Var_75));
{
#define MR_PROC_LABEL mercury__pprint__version_array_to_doc_2_f_0

	MR_Integer Max;

		{

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }


		;}
#undef MR_PROC_LABEL
	 Var_81  = Max;
}
    func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    conv5_Var_76 = func_4(((MR_Box) ((MR_Word) (&mercury__pprint_scalar_common_1[0]))), ((MR_Box) (Var_81)), ((MR_Box) (Var_8)));
    Var_76 = ((MR_Word) (conv5_Var_76));
    {
      Var_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_6, 0) = ((MR_Box) (Var_75));
      MR_hl_field(MR_mktag(1), Var_6, 1) = ((MR_Box) (Var_76));
    }
{
#define MR_PROC_LABEL mercury__pprint__version_array_to_doc_2_f_0

	MR_Integer Max;

		{

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }


		;}
#undef MR_PROC_LABEL
	 Var_88  = Max;
}
    func_6 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    conv7_Var_86 = func_6(((MR_Box) ((MR_Word) (&mercury__pprint_scalar_common_1[0]))), ((MR_Box) (Var_88)), ((MR_Box) (Var_6)));
    Var_86 = ((MR_Word) (conv7_Var_86));
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeadVar__3_3, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), HeadVar__3_3, 1) = ((MR_Box) (Var_86));
    }
    return HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
mercury__pprint__array_to_doc_2_f_0(
  MR_Word TypeInfo_for_T_13,
  MR_Integer Depth_4,
  MR_ArrayPtr A_5)
{
  {
    MR_Word HeadVar__3_3;
    MR_Word Var_6;
    MR_Word Var_8;
    MR_Word Var_9;
    MR_Integer Var_10 = (MR_Integer) ((MR_Unsigned) Depth_4 - (MR_Unsigned) (MR_Integer) 1);
    MR_Word Var_12;
    MR_Word Var_20;
    MR_Word Var_22;
    MR_Integer Var_23;
    MR_Word Var_28;
    MR_Word Var_40;
    MR_Integer Var_42;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Integer Var_58;
    MR_Integer Var_61;
    MR_Word Var_66;
    MR_Integer Var_68;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);
    MR_Box conv1_Var_40;
    MR_Box MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box);
    MR_Box conv3_Var_55;
    MR_Box MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box);
    MR_Box conv5_Var_56;
    MR_Box MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box);
    MR_Box conv7_Var_66;

    mercury__array__to_list_2_p_0(TypeInfo_for_T_13, A_5, &Var_12);
    Var_23 = (MR_Integer) ((MR_Unsigned) Var_10 - (MR_Unsigned) (MR_Integer) 1);
    Var_28 = mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_51_56_95_95_91_51_44_32_52_93_95_48_2_f_in__list_0(TypeInfo_for_T_13, Var_23, Var_12);
    Var_22 = mercury__pprint__packed_3_f_0((MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Word) (&mercury__pprint_scalar_common_1[0]), Var_23, ((MR_Box) ((MR_String) ", ")), Var_28);
{
#define MR_PROC_LABEL mercury__pprint__array_to_doc_2_f_0

	MR_Integer Max;

		{

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }


		;}
#undef MR_PROC_LABEL
	 Var_42  = Max;
}
    func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    conv1_Var_40 = func_0(((MR_Box) ((MR_Word) (&mercury__pprint_scalar_common_1[0]))), ((MR_Box) (Var_42)), ((MR_Box) (Var_22)));
    Var_40 = ((MR_Word) (conv1_Var_40));
    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_20, 0) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(2), Var_20, 1) = ((MR_Box) (Var_40));
    }
    Var_9 = mercury__pprint__bracketed_3_f_0((MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Word) (&mercury__pprint_scalar_common_1[0]), ((MR_Box) ((MR_String) "[")), ((MR_Box) ((MR_String) "]")), ((MR_Box) (Var_20)));
    Var_8 = mercury__pprint__bracketed_3_f_0((MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Word) (&mercury__pprint_scalar_common_1[0]), ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_String) ")")), ((MR_Box) (Var_9)));
{
#define MR_PROC_LABEL mercury__pprint__array_to_doc_2_f_0

	MR_Integer Max;

		{

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }


		;}
#undef MR_PROC_LABEL
	 Var_58  = Max;
}
    func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
    conv3_Var_55 = func_2(((MR_Box) ((MR_Word) (&mercury__pprint_scalar_common_1[1]))), ((MR_Box) (Var_58)), ((MR_Box) ((MR_String) "array")));
    Var_55 = ((MR_Word) (conv3_Var_55));
{
#define MR_PROC_LABEL mercury__pprint__array_to_doc_2_f_0

	MR_Integer Max;

		{

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }


		;}
#undef MR_PROC_LABEL
	 Var_61  = Max;
}
    func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    conv5_Var_56 = func_4(((MR_Box) ((MR_Word) (&mercury__pprint_scalar_common_1[0]))), ((MR_Box) (Var_61)), ((MR_Box) (Var_8)));
    Var_56 = ((MR_Word) (conv5_Var_56));
    {
      Var_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_6, 0) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(1), Var_6, 1) = ((MR_Box) (Var_56));
    }
{
#define MR_PROC_LABEL mercury__pprint__array_to_doc_2_f_0

	MR_Integer Max;

		{

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }


		;}
#undef MR_PROC_LABEL
	 Var_68  = Max;
}
    func_6 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    conv7_Var_66 = func_6(((MR_Box) ((MR_Word) (&mercury__pprint_scalar_common_1[0]))), ((MR_Box) (Var_68)), ((MR_Box) (Var_6)));
    Var_66 = ((MR_Word) (conv7_Var_66));
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeadVar__3_3, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), HeadVar__3_3, 1) = ((MR_Box) (Var_66));
    }
    return HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
mercury__pprint__list_to_doc_2_f_0(
  MR_Word TypeInfo_for_T_11,
  MR_Integer Depth_4,
  MR_Word Xs_5)
{
  {
    MR_Word HeadVar__3_3;
    MR_Word Var_6;
    MR_Word Var_8;
    MR_Integer Var_9 = (MR_Integer) ((MR_Unsigned) Depth_4 - (MR_Unsigned) (MR_Integer) 1);
    MR_Word Var_15;
    MR_Word Var_27;
    MR_Integer Var_29;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);
    MR_Box conv1_Var_27;

    Var_15 = mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_51_56_95_95_91_51_44_32_52_93_95_48_2_f_in__list_0(TypeInfo_for_T_11, Var_9, Xs_5);
    Var_8 = mercury__pprint__packed_3_f_0((MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Word) (&mercury__pprint_scalar_common_1[0]), Var_9, ((MR_Box) ((MR_String) ", ")), Var_15);
{
#define MR_PROC_LABEL mercury__pprint__list_to_doc_2_f_0

	MR_Integer Max;

		{

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }


		;}
#undef MR_PROC_LABEL
	 Var_29  = Max;
}
    func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    conv1_Var_27 = func_0(((MR_Box) ((MR_Word) (&mercury__pprint_scalar_common_1[0]))), ((MR_Box) (Var_29)), ((MR_Box) (Var_8)));
    Var_27 = ((MR_Word) (conv1_Var_27));
    {
      Var_6 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_6, 0) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(2), Var_6, 1) = ((MR_Box) (Var_27));
    }
    HeadVar__3_3 = mercury__pprint__bracketed_3_f_0((MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Word) (&mercury__pprint_scalar_common_1[0]), ((MR_Box) ((MR_String) "[")), ((MR_Box) ((MR_String) "]")), ((MR_Box) (Var_6)));
    return HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
mercury__pprint__sparse_bitset_to_doc_2_f_0(
  MR_Word TypeClassInfo_for_enum_13,
  MR_Integer Depth_4,
  MR_Word A_5)
{
  {
    MR_Word HeadVar__3_3;
    MR_Word TypeInfo_17_17;
    MR_Word Var_6;
    MR_Word Var_8;
    MR_Word Var_9;
    MR_Integer Var_10;
    MR_Word Var_12;
    MR_Word V_6_40;
    MR_Word Var_59;
    MR_Word Var_61;
    MR_Integer Var_62;
    MR_Word Var_72;
    MR_Word Var_73;
    MR_Integer Var_75;
    MR_Integer Var_78;
    MR_Word Var_83;
    MR_Integer Var_85;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);
    MR_Box conv1_Var_72;
    MR_Box MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box);
    MR_Box conv3_Var_73;
    MR_Box MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box);
    MR_Box conv5_Var_83;

{
#define MR_PROC_LABEL mercury__pprint__sparse_bitset_to_doc_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_enum_13 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_17_17  = TypeInfo;
}
    Var_10 = (MR_Integer) ((MR_Unsigned) Depth_4 - (MR_Unsigned) (MR_Integer) 1);
    V_6_40 = (MR_Word) (A_5);
    mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_52_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0(TypeClassInfo_for_enum_13, V_6_40, (MR_Word) ((MR_Unsigned) 0U), &Var_12);
    Var_62 = (MR_Integer) ((MR_Unsigned) Var_10 - (MR_Unsigned) (MR_Integer) 1);
    Var_61 = mercury__pprint__packed_cs_to_depth_2_f_0(TypeInfo_17_17, Var_62, Var_12);
    Var_59 = mercury__pprint__nest_2_f_0((MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Integer) 1, ((MR_Box) (Var_61)));
    Var_9 = mercury__pprint__brackets_1_f_0((MR_Word) (&mercury__pprint_scalar_common_1[0]), ((MR_Box) (Var_59)));
    Var_8 = mercury__pprint__bracketed_3_f_0((MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Word) (&mercury__pprint_scalar_common_1[0]), ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_String) ")")), ((MR_Box) (Var_9)));
{
#define MR_PROC_LABEL mercury__pprint__sparse_bitset_to_doc_2_f_0

	MR_Integer Max;

		{

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }


		;}
#undef MR_PROC_LABEL
	 Var_75  = Max;
}
    func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
    conv1_Var_72 = func_0(((MR_Box) ((MR_Word) (&mercury__pprint_scalar_common_1[1]))), ((MR_Box) (Var_75)), ((MR_Box) ((MR_String) "sparse_bitset")));
    Var_72 = ((MR_Word) (conv1_Var_72));
{
#define MR_PROC_LABEL mercury__pprint__sparse_bitset_to_doc_2_f_0

	MR_Integer Max;

		{

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }


		;}
#undef MR_PROC_LABEL
	 Var_78  = Max;
}
    func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    conv3_Var_73 = func_2(((MR_Box) ((MR_Word) (&mercury__pprint_scalar_common_1[0]))), ((MR_Box) (Var_78)), ((MR_Box) (Var_8)));
    Var_73 = ((MR_Word) (conv3_Var_73));
    {
      Var_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_6, 0) = ((MR_Box) (Var_72));
      MR_hl_field(MR_mktag(1), Var_6, 1) = ((MR_Box) (Var_73));
    }
{
#define MR_PROC_LABEL mercury__pprint__sparse_bitset_to_doc_2_f_0

	MR_Integer Max;

		{

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }


		;}
#undef MR_PROC_LABEL
	 Var_85  = Max;
}
    func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    conv5_Var_83 = func_4(((MR_Box) ((MR_Word) (&mercury__pprint_scalar_common_1[0]))), ((MR_Box) (Var_85)), ((MR_Box) (Var_6)));
    Var_83 = ((MR_Word) (conv5_Var_83));
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeadVar__3_3, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), HeadVar__3_3, 1) = ((MR_Box) (Var_83));
    }
    return HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
mercury__pprint__generic_term_to_doc_3_f_0(
  MR_Word TypeInfo_for_T_101,
  MR_Integer Depth_5,
  MR_Integer Priority_6,
  MR_Box X_7)
{
  {
    MR_bool succeeded = (Depth_5 <= (MR_Integer) 0);
    MR_Word Doc_8;

    if (succeeded)
    {
      MR_String Name_9;
      MR_Integer Arity_10;

      mercury__deconstruct__functor_4_p_1(TypeInfo_for_T_101, X_7, (MR_Integer) 1, &Name_9, &Arity_10);
      succeeded = (Arity_10 == (MR_Integer) 0);
      if (succeeded)
        Doc_8 = mercury__pprint__text_1_f_0(Name_9);
      else
      {
        MR_Word Var_27;

        Var_27 = mercury__pprint__f_43_43_2_f_0((MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Word) (&mercury__pprint_scalar_common_1[3]), ((MR_Box) ((MR_String) "/")), ((MR_Box) (Arity_10)));
        Doc_8 = mercury__pprint__f_43_43_2_f_0((MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Word) (&mercury__pprint_scalar_common_1[0]), ((MR_Box) (Name_9)), ((MR_Box) (Var_27)));
      }
    }
    else
    {
      MR_Word UnivArgs_12;
      MR_String Name_100;
      MR_Integer _Arity_11;
      MR_Word UnivArg_14;
      MR_Integer OpPri_15;
      MR_Word Assoc_16;
      MR_Word TypeClassInfo_for_op_table_105;
      MR_Word Var_30;

      mercury__deconstruct__deconstruct_5_p_1(TypeInfo_for_T_101, X_7, (MR_Integer) 1, &Name_100, &_Arity_11, &UnivArgs_12);
      mercury__ops__init_mercury_op_table_0_f_0();
      succeeded = (UnivArgs_12 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        UnivArg_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), UnivArgs_12, (MR_Integer) 0))));
        Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), UnivArgs_12, (MR_Integer) 1))));
        succeeded = (Var_30 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          TypeClassInfo_for_op_table_105 = (MR_Word) (&mercury__pprint_scalar_common_1[4]);
          succeeded = mercury__ops__lookup_prefix_op_4_p_0(TypeClassInfo_for_op_table_105, ((MR_Box) ((MR_Integer) 0)), Name_100, &OpPri_15, &Assoc_16);
        }
      }
      if (succeeded)
      {
        MR_Word Var_31;
        MR_Word Var_32;
        MR_Word Var_33;
        MR_Word Var_34;
        MR_Integer Var_35;
        MR_Integer Var_37;

        Var_33 = mercury__pprint__space_0_f_0();
        Var_35 = (MR_Integer) ((MR_Unsigned) Depth_5 - (MR_Unsigned) (MR_Integer) 1);
        Var_37 = mercury__pprint__adjusted_by_2_f_0(OpPri_15, Assoc_16);
        Var_34 = mercury__pprint__univ_to_doc_3_f_0(Var_35, Var_37, UnivArg_14);
        Var_32 = mercury__pprint__f_43_43_2_f_0((MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Word) (&mercury__pprint_scalar_common_1[0]), ((MR_Box) (Var_33)), ((MR_Box) (Var_34)));
        Var_31 = mercury__pprint__f_43_43_2_f_0((MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Word) (&mercury__pprint_scalar_common_1[0]), ((MR_Box) (Name_100)), ((MR_Box) (Var_32)));
        Doc_8 = mercury__pprint__maybe_parens_3_f_0(Priority_6, OpPri_15, Var_31);
      }
      else
      {
        MR_Word UnivArg_97;
        MR_Integer OpPri_98;
        MR_Word Assoc_99;
        MR_Word TypeClassInfo_for_op_table_108;
        MR_Word Var_38;

        succeeded = (UnivArgs_12 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          UnivArg_97 = ((MR_Word) ((MR_hl_field(MR_mktag(1), UnivArgs_12, (MR_Integer) 0))));
          Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), UnivArgs_12, (MR_Integer) 1))));
          succeeded = (Var_38 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            TypeClassInfo_for_op_table_108 = (MR_Word) (&mercury__pprint_scalar_common_1[4]);
            succeeded = mercury__ops__lookup_postfix_op_4_p_0(TypeClassInfo_for_op_table_108, ((MR_Box) ((MR_Integer) 0)), Name_100, &OpPri_98, &Assoc_99);
          }
        }
        if (succeeded)
        {
          MR_Word Var_39;
          MR_Word Var_40;
          MR_Integer Var_41 = (MR_Integer) ((MR_Unsigned) Depth_5 - (MR_Unsigned) (MR_Integer) 1);
          MR_Integer Var_43;
          MR_Word Var_44;
          MR_Word Var_45;

          Var_43 = mercury__pprint__adjusted_by_2_f_0(OpPri_98, Assoc_99);
          Var_40 = mercury__pprint__univ_to_doc_3_f_0(Var_41, Var_43, UnivArg_97);
          Var_45 = mercury__pprint__space_0_f_0();
          Var_44 = mercury__pprint__f_43_43_2_f_0((MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Word) (&mercury__pprint_scalar_common_1[1]), ((MR_Box) (Var_45)), ((MR_Box) (Name_100)));
          Var_39 = mercury__pprint__f_43_43_2_f_0((MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Word) (&mercury__pprint_scalar_common_1[0]), ((MR_Box) (Var_40)), ((MR_Box) (Var_44)));
          Doc_8 = mercury__pprint__maybe_parens_3_f_0(Priority_6, OpPri_98, Var_39);
        }
        else
        {
          MR_Word UnivArgL_17;
          MR_Word UnivArgR_18;
          MR_Word AssocL_19;
          MR_Word AssocR_20;
          MR_Integer OpPri_96;
          MR_Word TypeClassInfo_for_op_table_111;
          MR_Word Var_46;
          MR_Word Var_47;

          succeeded = (UnivArgs_12 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            UnivArgL_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), UnivArgs_12, (MR_Integer) 0))));
            Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), UnivArgs_12, (MR_Integer) 1))));
            succeeded = (Var_46 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              UnivArgR_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_46, (MR_Integer) 0))));
              Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_46, (MR_Integer) 1))));
              succeeded = (Var_47 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                TypeClassInfo_for_op_table_111 = (MR_Word) (&mercury__pprint_scalar_common_1[4]);
                succeeded = mercury__ops__lookup_infix_op_5_p_0(TypeClassInfo_for_op_table_111, ((MR_Box) ((MR_Integer) 0)), Name_100, &OpPri_96, &AssocL_19, &AssocR_20);
              }
            }
          }
          if (succeeded)
          {
            MR_Word Var_48;
            MR_Word Var_49;
            MR_Integer Var_50 = (MR_Integer) ((MR_Unsigned) Depth_5 - (MR_Unsigned) (MR_Integer) 1);
            MR_Integer Var_52;
            MR_Word Var_53;
            MR_Word Var_54;
            MR_Word Var_55;
            MR_Word Var_56;
            MR_Word Var_57;
            MR_Word Var_58;
            MR_Word Var_59;
            MR_Word Var_60;
            MR_Word Var_61;
            MR_Word Var_63;
            MR_Integer Var_64;
            MR_Integer Var_66;

            Var_52 = mercury__pprint__adjusted_by_2_f_0(OpPri_96, AssocL_19);
            Var_49 = mercury__pprint__univ_to_doc_3_f_0(Var_50, Var_52, UnivArgL_17);
            Var_54 = mercury__pprint__space_0_f_0();
            Var_57 = mercury__pprint__space_0_f_0();
            Var_60 = mercury__pprint__line_0_f_0();
            Var_64 = (MR_Integer) ((MR_Unsigned) Depth_5 - (MR_Unsigned) (MR_Integer) 2);
            Var_66 = mercury__pprint__adjusted_by_2_f_0(OpPri_96, AssocR_20);
            Var_63 = mercury__pprint__univ_to_doc_3_f_0(Var_64, Var_66, UnivArgR_18);
            Var_61 = mercury__pprint__nest_2_f_0((MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Integer) 2, ((MR_Box) (Var_63)));
            Var_59 = mercury__pprint__f_43_43_2_f_0((MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Word) (&mercury__pprint_scalar_common_1[0]), ((MR_Box) (Var_60)), ((MR_Box) (Var_61)));
            Var_58 = mercury__pprint__group_1_f_0((MR_Word) (&mercury__pprint_scalar_common_1[0]), ((MR_Box) (Var_59)));
            Var_56 = mercury__pprint__f_43_43_2_f_0((MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Word) (&mercury__pprint_scalar_common_1[0]), ((MR_Box) (Var_57)), ((MR_Box) (Var_58)));
            Var_55 = mercury__pprint__f_43_43_2_f_0((MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Word) (&mercury__pprint_scalar_common_1[0]), ((MR_Box) (Name_100)), ((MR_Box) (Var_56)));
            Var_53 = mercury__pprint__f_43_43_2_f_0((MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Word) (&mercury__pprint_scalar_common_1[0]), ((MR_Box) (Var_54)), ((MR_Box) (Var_55)));
            Var_48 = mercury__pprint__f_43_43_2_f_0((MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Word) (&mercury__pprint_scalar_common_1[0]), ((MR_Box) (Var_49)), ((MR_Box) (Var_53)));
            Doc_8 = mercury__pprint__maybe_parens_3_f_0(Priority_6, OpPri_96, Var_48);
          }
          else
          {
            MR_Word UnivArgR1_21;
            MR_Word UnivArgR2_22;
            MR_Word AssocR1_23;
            MR_Word AssocR2_24;
            MR_Integer OpPri_95;
            MR_Word TypeClassInfo_for_op_table_114;
            MR_Word Var_67;
            MR_Word Var_68;

            succeeded = (UnivArgs_12 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              UnivArgR1_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), UnivArgs_12, (MR_Integer) 0))));
              Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(1), UnivArgs_12, (MR_Integer) 1))));
              succeeded = (Var_67 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                UnivArgR2_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_67, (MR_Integer) 0))));
                Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_67, (MR_Integer) 1))));
                succeeded = (Var_68 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  TypeClassInfo_for_op_table_114 = (MR_Word) (&mercury__pprint_scalar_common_1[4]);
                  succeeded = mercury__ops__lookup_binary_prefix_op_5_p_0(TypeClassInfo_for_op_table_114, ((MR_Box) ((MR_Integer) 0)), Name_100, &OpPri_95, &AssocR1_23, &AssocR2_24);
                }
              }
            }
            if (succeeded)
            {
              MR_Word Var_69;
              MR_Word Var_70;
              MR_Word Var_71;
              MR_Word Var_72;
              MR_Word Var_73;
              MR_Integer Var_74;
              MR_Integer Var_76;
              MR_Word Var_77;
              MR_Word Var_78;
              MR_Word Var_79;
              MR_Word Var_80;
              MR_Word Var_81;
              MR_Word Var_82;
              MR_Word Var_84;
              MR_Integer Var_85;
              MR_Integer Var_87;

              Var_71 = mercury__pprint__space_0_f_0();
              Var_74 = (MR_Integer) ((MR_Unsigned) Depth_5 - (MR_Unsigned) (MR_Integer) 2);
              Var_76 = mercury__pprint__adjusted_by_2_f_0(OpPri_95, AssocR1_23);
              Var_73 = mercury__pprint__univ_to_doc_3_f_0(Var_74, Var_76, UnivArgR1_21);
              Var_78 = mercury__pprint__space_0_f_0();
              Var_81 = mercury__pprint__line_0_f_0();
              Var_85 = (MR_Integer) ((MR_Unsigned) Depth_5 - (MR_Unsigned) (MR_Integer) 2);
              Var_87 = mercury__pprint__adjusted_by_2_f_0(OpPri_95, AssocR2_24);
              Var_84 = mercury__pprint__univ_to_doc_3_f_0(Var_85, Var_87, UnivArgR2_22);
              Var_82 = mercury__pprint__nest_2_f_0((MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Integer) 2, ((MR_Box) (Var_84)));
              Var_80 = mercury__pprint__f_43_43_2_f_0((MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Word) (&mercury__pprint_scalar_common_1[0]), ((MR_Box) (Var_81)), ((MR_Box) (Var_82)));
              Var_79 = mercury__pprint__group_1_f_0((MR_Word) (&mercury__pprint_scalar_common_1[0]), ((MR_Box) (Var_80)));
              Var_77 = mercury__pprint__f_43_43_2_f_0((MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Word) (&mercury__pprint_scalar_common_1[0]), ((MR_Box) (Var_78)), ((MR_Box) (Var_79)));
              Var_72 = mercury__pprint__f_43_43_2_f_0((MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Word) (&mercury__pprint_scalar_common_1[0]), ((MR_Box) (Var_73)), ((MR_Box) (Var_77)));
              Var_70 = mercury__pprint__f_43_43_2_f_0((MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Word) (&mercury__pprint_scalar_common_1[0]), ((MR_Box) (Var_71)), ((MR_Box) (Var_72)));
              Var_69 = mercury__pprint__f_43_43_2_f_0((MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Word) (&mercury__pprint_scalar_common_1[0]), ((MR_Box) (Name_100)), ((MR_Box) (Var_70)));
              Doc_8 = mercury__pprint__maybe_parens_3_f_0(Priority_6, OpPri_95, Var_69);
            }
            else
            {
              succeeded = (UnivArgs_12 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
                Doc_8 = mercury__pprint__text_1_f_0(Name_100);
              else
              {
                MR_Word Var_88;
                MR_Word Var_89;
                MR_Word Var_90;
                MR_Word Var_92;
                MR_Integer Var_93 = (MR_Integer) ((MR_Unsigned) Depth_5 - (MR_Unsigned) (MR_Integer) 1);

                Var_92 = mercury__pprint__packed_cs_univ_args_2_f_0(Var_93, UnivArgs_12);
                Var_90 = mercury__pprint__nest_2_f_0((MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Integer) 2, ((MR_Box) (Var_92)));
                Var_89 = mercury__pprint__parentheses_1_f_0((MR_Word) (&mercury__pprint_scalar_common_1[0]), ((MR_Box) (Var_90)));
                Var_88 = mercury__pprint__f_43_43_2_f_0((MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Word) (&mercury__pprint_scalar_common_1[0]), ((MR_Box) (Name_100)), ((MR_Box) (Var_89)));
                Doc_8 = mercury__pprint__group_1_f_0((MR_Word) (&mercury__pprint_scalar_common_1[0]), ((MR_Box) (Var_88)));
              }
            }
          }
        }
      }
    }
    return Doc_8;
  }
}

MR_Word MR_CALL 
mercury__pprint__packed_cs_to_depth_2_f_0(
  MR_Word TypeInfo_for_T_8,
  MR_Integer Depth_4,
  MR_Word Xs_5)
{
  {
    MR_Word HeadVar__3_3;
    MR_Word Var_6;

    Var_6 = mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_51_56_95_95_91_51_44_32_52_93_95_48_2_f_in__list_0(TypeInfo_for_T_8, Depth_4, Xs_5);
    HeadVar__3_3 = mercury__pprint__packed_3_f_0((MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Word) (&mercury__pprint_scalar_common_1[0]), Depth_4, ((MR_Box) ((MR_String) ", ")), Var_6);
    return HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_93_95_48_2_f_in__list_0(
  MR_Word HeadVar__2_2)
{
  {
    MR_Word HeadVar__3_3;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word V_6_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word V_7_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word V_8_8;
      MR_Word V_9_9;
      MR_Box K_20 = (MR_hl_field(MR_mktag(0), V_6_6, (MR_Integer) 0));
      MR_Box V_21 = (MR_hl_field(MR_mktag(0), V_6_6, (MR_Integer) 1));

      {
        V_8_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), V_8_8, 0) = K_20;
        MR_hl_field(MR_mktag(0), V_8_8, 1) = V_21;
      }
      V_9_9 = mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_93_95_48_2_f_in__list_0(V_7_7);
      {
        HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__3_3, 0) = ((MR_Box) (V_8_8));
        MR_hl_field(MR_mktag(1), HeadVar__3_3, 1) = ((MR_Box) (V_9_9));
      }
    }
    return HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
mercury__pprint__tuple_to_doc_2_f_0(
  MR_Word TypeInfo_for_T_17,
  MR_Integer Depth_4,
  MR_Box Tuple_5)
{
  {
    MR_Word Doc_6;
    MR_Word UnivArgs_9;
    MR_Word Var_11;
    MR_Word Var_12;
    MR_Word Var_14;
    MR_Integer Var_15;
    MR_Word Var_21;
    MR_Integer Var_23;
    MR_Word Var_30;
    MR_Integer Var_32;
    MR_String _Name_7;
    MR_Integer _Arity_8;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);
    MR_Box conv1_Var_21;
    MR_Box MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box);
    MR_Box conv3_Var_30;

    mercury__deconstruct__deconstruct_5_p_1(TypeInfo_for_T_17, Tuple_5, (MR_Integer) 1, &_Name_7, &_Arity_8, &UnivArgs_9);
    Var_15 = (MR_Integer) ((MR_Unsigned) Depth_4 - (MR_Unsigned) (MR_Integer) 1);
    Var_14 = mercury__pprint__packed_cs_univ_args_2_f_0(Var_15, UnivArgs_9);
{
#define MR_PROC_LABEL mercury__pprint__tuple_to_doc_2_f_0

	MR_Integer Max;

		{

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }


		;}
#undef MR_PROC_LABEL
	 Var_23  = Max;
}
    func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    conv1_Var_21 = func_0(((MR_Box) ((MR_Word) (&mercury__pprint_scalar_common_1[0]))), ((MR_Box) (Var_23)), ((MR_Box) (Var_14)));
    Var_21 = ((MR_Word) (conv1_Var_21));
    {
      Var_12 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_12, 0) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(2), Var_12, 1) = ((MR_Box) (Var_21));
    }
    Var_11 = mercury__pprint__bracketed_3_f_0((MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Word) (&mercury__pprint_scalar_common_1[0]), ((MR_Box) ((MR_String) "{")), ((MR_Box) ((MR_String) "}")), ((MR_Box) (Var_12)));
{
#define MR_PROC_LABEL mercury__pprint__tuple_to_doc_2_f_0

	MR_Integer Max;

		{

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }


		;}
#undef MR_PROC_LABEL
	 Var_32  = Max;
}
    func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    conv3_Var_30 = func_2(((MR_Box) ((MR_Word) (&mercury__pprint_scalar_common_1[0]))), ((MR_Box) (Var_32)), ((MR_Box) (Var_11)));
    Var_30 = ((MR_Word) (conv3_Var_30));
    {
      Doc_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Doc_6, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), Doc_6, 1) = ((MR_Box) (Var_30));
    }
    return Doc_6;
  }
}

static MR_Word MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_52_54_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_f_in__version_array_0(
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
      V_13_13 = (MR_Integer) ((MR_Unsigned) V_9_9 - (MR_Unsigned) (MR_Integer) 1);
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

static void MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_52_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0(
  MR_Word TypeClassInfo_for_enum_20,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = HeadVar__3_3;
  else
  {
    MR_Word V_10_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word V_11_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word V_15_13;
    MR_Integer V_22_17;
    MR_Unsigned V_18_18;
    MR_Integer V_19_19;

    mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_52_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0(TypeClassInfo_for_enum_20, V_11_10, HeadVar__3_3, &V_15_13);
    V_22_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), V_10_9, (MR_Integer) 0))));
    V_18_18 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), V_10_9, (MR_Integer) 1))));
{
#define MR_PROC_LABEL mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_52_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	 V_19_19  = Bits;
}
    mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_52_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_93_95_48_7_p_in__sparse_bitset_0(TypeClassInfo_for_enum_20, (MR_Integer) 1, V_22_17, V_18_18, V_19_19, V_15_13, HeadVar__4_4);
  }
}

static void MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_52_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_93_95_48_7_p_in__sparse_bitset_0(
  MR_Word TypeClassInfo_for_enum_29,
  MR_Word V_8_8,
  MR_Integer V_10_10,
  MR_Unsigned V_11_11,
  MR_Integer V_12_12,
  MR_Word V_19_13,
  MR_Word * V_20_14)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (V_11_11 == (MR_Unsigned) 0U);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
      *V_20_14 = V_19_13;
    else
    {
      succeeded = (V_12_12 == (MR_Integer) 1);
      if (succeeded)
      {
        MR_Box V_14_15;
        MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_29, (MR_Integer) 0)), (MR_Integer) 6))));

        succeeded = func_0(((MR_Box) (TypeClassInfo_for_enum_29)), ((MR_Box) (V_10_10)), &V_14_15);
        if (succeeded)
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *V_20_14 = base;
            MR_hl_field(MR_mktag(1), base, 0) = V_14_15;
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (V_19_13));
          }
        else
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "sparse_bitset", (MR_String) "predicate \140sparse_bitset.fold_bits\'/7", (MR_String) "\140enum.from_int/1\' failed");
            return;
          }
        }
      }
      else
      {
        MR_Integer V_15_19 = (V_12_12 >> 1);
        MR_Unsigned V_16_21;
        MR_Unsigned V_17_22;
        MR_Unsigned V_18_23;
        MR_Unsigned V_26_24;
        MR_Unsigned V_4_79;
        MR_Unsigned V_5_80 = ~((MR_Unsigned) 0U);

        V_4_79 = (V_5_80 << V_15_19);
        V_16_21 = ~(V_4_79);
        V_17_22 = (V_16_21 & V_11_11);
        V_26_24 = (V_11_11 >> V_15_19);
        V_18_23 = (V_16_21 & V_26_24);
        switch (V_8_8) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Integer V_27_27 = (MR_Integer) ((MR_Unsigned) V_10_10 + (MR_Unsigned) V_15_19);
              MR_Word V_28_28;
              MR_Unsigned next_value_of_V_11_11;
              MR_Integer next_value_of_V_12_12;
              MR_Word next_value_of_V_19_13;

              mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_52_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_93_95_48_7_p_in__sparse_bitset_0(TypeClassInfo_for_enum_29, V_8_8, V_27_27, V_18_23, V_15_19, V_19_13, &V_28_28);
              // direct tailcall eliminated
              ;
              next_value_of_V_11_11 = V_17_22;
              next_value_of_V_12_12 = V_15_19;
              next_value_of_V_19_13 = V_28_28;
              V_11_11 = next_value_of_V_11_11;
              V_12_12 = next_value_of_V_12_12;
              V_19_13 = next_value_of_V_19_13;
              continue;
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word V_30_25;
              MR_Integer V_31_26;
              MR_Integer next_value_of_V_10_10;
              MR_Unsigned next_value_of_V_11_11;
              MR_Integer next_value_of_V_12_12;
              MR_Word next_value_of_V_19_13;

              mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_52_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_93_95_48_7_p_in__sparse_bitset_0(TypeClassInfo_for_enum_29, V_8_8, V_10_10, V_17_22, V_15_19, V_19_13, &V_30_25);
              V_31_26 = (MR_Integer) ((MR_Unsigned) V_10_10 + (MR_Unsigned) V_15_19);
              // direct tailcall eliminated
              ;
              next_value_of_V_10_10 = V_31_26;
              next_value_of_V_11_11 = V_18_23;
              next_value_of_V_12_12 = V_15_19;
              next_value_of_V_19_13 = V_30_25;
              V_10_10 = next_value_of_V_10_10;
              V_11_11 = next_value_of_V_11_11;
              V_12_12 = next_value_of_V_12_12;
              V_19_13 = next_value_of_V_19_13;
              continue;
            }
            break;
        }
      }
    }
    break;
  }
}

static MR_bool MR_CALL 
mercury__pprint__dynamic_cast_to_robdd_2_p_0(
  MR_Word TypeInfo_for_T1_14,
  MR_Word * TypeInfo_for_T_13,
  MR_Box X_3,
  MR_Word * R_4)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_15_15;
    MR_Word TypeInfo_16_16;
    MR_Word TypeInfo_19_19;
    MR_Word ArgTypeDesc_5;
    MR_Word Var_8;
    MR_Word Var_10;
    MR_Word Var_18;
    MR_Word V_5_22;
    MR_Box conv0_R_4;

{
#define MR_PROC_LABEL mercury__pprint__dynamic_cast_to_robdd_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  TypeInfo_for_T1_14 ;
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
{
#define MR_PROC_LABEL mercury__pprint__dynamic_cast_to_robdd_2_p_0

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc =  Var_10 ;
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
	 V_5_22  = TypeCtorDesc;
	 Var_8  = ArgTypes;
}
    succeeded = (Var_8 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgTypeDesc_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_8, (MR_Integer) 0))));
      Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_8, (MR_Integer) 1))));
      TypeInfo_19_19 = (MR_Word) (&mercury__pprint_scalar_common_1[8]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_19, ((MR_Box) ((MR_Unsigned) 0U)), ((MR_Box) (Var_18)));
      if (succeeded)
      {
{
#define MR_PROC_LABEL mercury__pprint__dynamic_cast_to_robdd_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo =  ArgTypeDesc_5 ;
		{

    TypeInfo_for_T = TypeInfo;


		;}
#undef MR_PROC_LABEL
	 *TypeInfo_for_T_13  = TypeInfo_for_T;
}
        TypeCtorInfo_15_15 = (MR_Word) (&mercury__robdd__robdd__type_ctor_info_robdd_1);
        {
          TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeInfo_16_16, 0) = ((MR_Box) (TypeCtorInfo_15_15));
          MR_hl_field(MR_mktag(0), TypeInfo_16_16, 1) = ((MR_Box) (*TypeInfo_for_T_13));
        }
        succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeInfo_for_T1_14, TypeInfo_16_16, X_3, &conv0_R_4);
        if (succeeded)
        {
          *R_4 = ((MR_Word) (conv0_R_4));
          succeeded = MR_TRUE;
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
mercury__pprint__dynamic_cast_to_map_pair_2_p_0(
  MR_Word TypeInfo_for_T1_20,
  MR_Word * TypeInfo_for_T_18,
  MR_Word * TypeInfo_for_T_19,
  MR_Box X_3,
  MR_Word * MP_4)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_21_21;
    MR_Word TypeInfo_22_22;
    MR_Word TypeInfo_25_25;
    MR_Word KeyTypeDesc_5;
    MR_Word ValueTypeDesc_6;
    MR_Word Var_11;
    MR_Word Var_12;
    MR_Word Var_14;
    MR_Word Var_24;
    MR_Word V_5_28;
    MR_Box conv0_MP_4;

{
#define MR_PROC_LABEL mercury__pprint__dynamic_cast_to_map_pair_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  TypeInfo_for_T1_20 ;
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
{
#define MR_PROC_LABEL mercury__pprint__dynamic_cast_to_map_pair_2_p_0

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc =  Var_14 ;
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
	 V_5_28  = TypeCtorDesc;
	 Var_11  = ArgTypes;
}
    succeeded = (Var_11 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      KeyTypeDesc_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_11, (MR_Integer) 0))));
      Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_11, (MR_Integer) 1))));
      succeeded = (Var_12 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ValueTypeDesc_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_12, (MR_Integer) 0))));
        Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_12, (MR_Integer) 1))));
        TypeInfo_25_25 = (MR_Word) (&mercury__pprint_scalar_common_1[8]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_25_25, ((MR_Box) ((MR_Unsigned) 0U)), ((MR_Box) (Var_24)));
        if (succeeded)
        {
{
#define MR_PROC_LABEL mercury__pprint__dynamic_cast_to_map_pair_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo =  KeyTypeDesc_5 ;
		{

    TypeInfo_for_T = TypeInfo;


		;}
#undef MR_PROC_LABEL
	 *TypeInfo_for_T_18  = TypeInfo_for_T;
}
{
#define MR_PROC_LABEL mercury__pprint__dynamic_cast_to_map_pair_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo =  ValueTypeDesc_6 ;
		{

    TypeInfo_for_T = TypeInfo;


		;}
#undef MR_PROC_LABEL
	 *TypeInfo_for_T_19  = TypeInfo_for_T;
}
          TypeCtorInfo_21_21 = (MR_Word) (&mercury__pprint__pprint__type_ctor_info_map_pair_2);
          {
            TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TypeInfo_22_22, 0) = ((MR_Box) (TypeCtorInfo_21_21));
            MR_hl_field(MR_mktag(0), TypeInfo_22_22, 1) = ((MR_Box) (*TypeInfo_for_T_18));
            MR_hl_field(MR_mktag(0), TypeInfo_22_22, 2) = ((MR_Box) (*TypeInfo_for_T_19));
          }
          succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeInfo_for_T1_20, TypeInfo_22_22, X_3, &conv0_MP_4);
          if (succeeded)
          {
            *MP_4 = ((MR_Word) (conv0_MP_4));
            succeeded = MR_TRUE;
          }
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
mercury__pprint__dynamic_cast_to_map_2_p_0(
  MR_Word TypeInfo_for_T1_20,
  MR_Word * TypeInfo_for_T_18,
  MR_Word * TypeInfo_for_T_19,
  MR_Box X_3,
  MR_Word * M_4)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_21_21;
    MR_Word TypeInfo_22_22;
    MR_Word TypeInfo_25_25;
    MR_Word KeyTypeDesc_5;
    MR_Word ValueTypeDesc_6;
    MR_Word Var_11;
    MR_Word Var_12;
    MR_Word Var_14;
    MR_Word Var_24;
    MR_Word V_5_28;
    MR_Box conv0_M_4;

{
#define MR_PROC_LABEL mercury__pprint__dynamic_cast_to_map_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  TypeInfo_for_T1_20 ;
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
{
#define MR_PROC_LABEL mercury__pprint__dynamic_cast_to_map_2_p_0

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc =  Var_14 ;
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
	 V_5_28  = TypeCtorDesc;
	 Var_11  = ArgTypes;
}
    succeeded = (Var_11 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      KeyTypeDesc_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_11, (MR_Integer) 0))));
      Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_11, (MR_Integer) 1))));
      succeeded = (Var_12 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ValueTypeDesc_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_12, (MR_Integer) 0))));
        Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_12, (MR_Integer) 1))));
        TypeInfo_25_25 = (MR_Word) (&mercury__pprint_scalar_common_1[8]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_25_25, ((MR_Box) ((MR_Unsigned) 0U)), ((MR_Box) (Var_24)));
        if (succeeded)
        {
{
#define MR_PROC_LABEL mercury__pprint__dynamic_cast_to_map_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo =  KeyTypeDesc_5 ;
		{

    TypeInfo_for_T = TypeInfo;


		;}
#undef MR_PROC_LABEL
	 *TypeInfo_for_T_18  = TypeInfo_for_T;
}
{
#define MR_PROC_LABEL mercury__pprint__dynamic_cast_to_map_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo =  ValueTypeDesc_6 ;
		{

    TypeInfo_for_T = TypeInfo;


		;}
#undef MR_PROC_LABEL
	 *TypeInfo_for_T_19  = TypeInfo_for_T;
}
          TypeCtorInfo_21_21 = (MR_Word) (&mercury__tree234__tree234__type_ctor_info_tree234_2);
          {
            TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TypeInfo_22_22, 0) = ((MR_Box) (TypeCtorInfo_21_21));
            MR_hl_field(MR_mktag(0), TypeInfo_22_22, 1) = ((MR_Box) (*TypeInfo_for_T_18));
            MR_hl_field(MR_mktag(0), TypeInfo_22_22, 2) = ((MR_Box) (*TypeInfo_for_T_19));
          }
          succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeInfo_for_T1_20, TypeInfo_22_22, X_3, &conv0_M_4);
          if (succeeded)
          {
            *M_4 = ((MR_Word) (conv0_M_4));
            succeeded = MR_TRUE;
          }
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
mercury__pprint__dynamic_cast_to_list_2_p_0(
  MR_Word TypeInfo_for_T1_14,
  MR_Word * TypeInfo_for_T_13,
  MR_Box X_3,
  MR_Word * L_4)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_15_15;
    MR_Word TypeInfo_16_16;
    MR_Word TypeInfo_19_19;
    MR_Word ArgTypeDesc_5;
    MR_Word Var_8;
    MR_Word Var_10;
    MR_Word Var_18;
    MR_Word V_5_22;
    MR_Box conv0_L_4;

{
#define MR_PROC_LABEL mercury__pprint__dynamic_cast_to_list_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  TypeInfo_for_T1_14 ;
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
{
#define MR_PROC_LABEL mercury__pprint__dynamic_cast_to_list_2_p_0

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc =  Var_10 ;
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
	 V_5_22  = TypeCtorDesc;
	 Var_8  = ArgTypes;
}
    succeeded = (Var_8 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgTypeDesc_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_8, (MR_Integer) 0))));
      Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_8, (MR_Integer) 1))));
      TypeInfo_19_19 = (MR_Word) (&mercury__pprint_scalar_common_1[8]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_19, ((MR_Box) ((MR_Unsigned) 0U)), ((MR_Box) (Var_18)));
      if (succeeded)
      {
{
#define MR_PROC_LABEL mercury__pprint__dynamic_cast_to_list_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo =  ArgTypeDesc_5 ;
		{

    TypeInfo_for_T = TypeInfo;


		;}
#undef MR_PROC_LABEL
	 *TypeInfo_for_T_13  = TypeInfo_for_T;
}
        TypeCtorInfo_15_15 = (MR_Word) (&mercury__list__list__type_ctor_info_list_1);
        {
          TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeInfo_16_16, 0) = ((MR_Box) (TypeCtorInfo_15_15));
          MR_hl_field(MR_mktag(0), TypeInfo_16_16, 1) = ((MR_Box) (*TypeInfo_for_T_13));
        }
        succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeInfo_for_T1_14, TypeInfo_16_16, X_3, &conv0_L_4);
        if (succeeded)
        {
          *L_4 = ((MR_Word) (conv0_L_4));
          succeeded = MR_TRUE;
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
mercury__pprint__dynamic_cast_to_version_array_2_p_0(
  MR_Word TypeInfo_for_T1_14,
  MR_Word * TypeInfo_for_T_13,
  MR_Box X_3,
  MR_Box * VA_4)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_15_15;
    MR_Word TypeInfo_16_16;
    MR_Word TypeInfo_19_19;
    MR_Word ArgTypeDesc_5;
    MR_Word Var_8;
    MR_Word Var_10;
    MR_Word Var_18;
    MR_Word V_5_22;
    MR_Box conv0_VA_4;

{
#define MR_PROC_LABEL mercury__pprint__dynamic_cast_to_version_array_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  TypeInfo_for_T1_14 ;
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
{
#define MR_PROC_LABEL mercury__pprint__dynamic_cast_to_version_array_2_p_0

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc =  Var_10 ;
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
	 V_5_22  = TypeCtorDesc;
	 Var_8  = ArgTypes;
}
    succeeded = (Var_8 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgTypeDesc_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_8, (MR_Integer) 0))));
      Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_8, (MR_Integer) 1))));
      TypeInfo_19_19 = (MR_Word) (&mercury__pprint_scalar_common_1[8]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_19, ((MR_Box) ((MR_Unsigned) 0U)), ((MR_Box) (Var_18)));
      if (succeeded)
      {
{
#define MR_PROC_LABEL mercury__pprint__dynamic_cast_to_version_array_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo =  ArgTypeDesc_5 ;
		{

    TypeInfo_for_T = TypeInfo;


		;}
#undef MR_PROC_LABEL
	 *TypeInfo_for_T_13  = TypeInfo_for_T;
}
        TypeCtorInfo_15_15 = (MR_Word) (&mercury__version_array__version_array__type_ctor_info_version_array_1);
        {
          TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeInfo_16_16, 0) = ((MR_Box) (TypeCtorInfo_15_15));
          MR_hl_field(MR_mktag(0), TypeInfo_16_16, 1) = ((MR_Box) (*TypeInfo_for_T_13));
        }
        succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeInfo_for_T1_14, TypeInfo_16_16, X_3, &conv0_VA_4);
        if (succeeded)
        {
          *VA_4 = ((MR_Box) (conv0_VA_4));
          succeeded = MR_TRUE;
        }
      }
    }
    return succeeded;
  }
}

static MR_Integer MR_CALL 
mercury__pprint__adjusted_by_2_f_0(
  MR_Integer Priority_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_Integer HeadVar__3_3;

    switch (HeadVar__2_2) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          HeadVar__3_3 = (MR_Integer) ((MR_Unsigned) Priority_1 - (MR_Unsigned) (MR_Integer) 1);
        }
        break;
      case (MR_Integer) 1:
        HeadVar__3_3 = Priority_1;
        break;
    }
    return HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
mercury__pprint__maybe_parens_3_f_0(
  MR_Integer ParentPriority_5,
  MR_Integer OpPriority_6,
  MR_Word Doc_7)
{
  {
    MR_bool succeeded = (ParentPriority_5 < OpPriority_6);
    MR_Word HeadVar__4_4;

    if (succeeded)
    {
      HeadVar__4_4 = mercury__pprint__bracketed_3_f_0((MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Word) (&mercury__pprint_scalar_common_1[0]), ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_String) ")")), ((MR_Box) (Doc_7)));
    }
    else
      HeadVar__4_4 = Doc_7;
    return HeadVar__4_4;
  }
}

MR_Word MR_CALL 
mercury__pprint__space_0_f_0(void)
{
  {
    return (MR_Word) (MR_mkword(MR_mktag(3), &mercury__pprint_scalar_common_1[10]));
  }
}

MR_Word MR_CALL 
mercury__pprint__packed_cs_univ_args_2_f_0(
  MR_Integer Depth_4,
  MR_Word UnivArgs_5)
{
  {
    MR_Word HeadVar__3_3;
    MR_Word Var_7;

    Var_7 = mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_51_55_95_95_91_50_93_95_48_2_f_in__list_0(Depth_4, UnivArgs_5);
    HeadVar__3_3 = mercury__pprint__packed_3_f_0((MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Word) (&mercury__pprint_scalar_common_1[0]), Depth_4, ((MR_Box) ((MR_String) ", ")), Var_7);
    return HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_51_55_95_95_91_50_93_95_48_2_f_in__list_0(
  MR_Integer Var_12,
  MR_Word HeadVar__2_2)
{
  {
    MR_Word HeadVar__3_3;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word V_6_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word V_7_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word V_8_8;
      MR_Word V_9_9;

      {
        V_8_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), V_8_8, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(MR_mktag(3), V_8_8, 1) = ((MR_Box) (Var_12));
        MR_hl_field(MR_mktag(3), V_8_8, 2) = ((MR_Box) (V_6_6));
      }
      V_9_9 = mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_51_55_95_95_91_50_93_95_48_2_f_in__list_0(Var_12, V_7_7);
      {
        HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__3_3, 0) = ((MR_Box) (V_8_8));
        MR_hl_field(MR_mktag(1), HeadVar__3_3, 1) = ((MR_Box) (V_9_9));
      }
    }
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__pprint__packed_cs_2_f_0(
  MR_Word TypeClassInfo_for_doc_7,
  MR_Integer N_4,
  MR_Word Xs_5)
{
  {
    MR_Word HeadVar__3_3;

    HeadVar__3_3 = mercury__pprint__packed_3_f_0((MR_Word) (&mercury__pprint_scalar_common_1[1]), TypeClassInfo_for_doc_7, N_4, ((MR_Box) ((MR_String) ", ")), Xs_5);
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__pprint__packed_cs_1_f_0(
  MR_Word TypeClassInfo_for_doc_5,
  MR_Word Xs_3)
{
  {
    MR_Word HeadVar__2_2;
    MR_Integer Var_9;

{
#define MR_PROC_LABEL mercury__pprint__packed_cs_1_f_0

	MR_Integer Max;

		{

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }


		;}
#undef MR_PROC_LABEL
	 Var_9  = Max;
}
    HeadVar__2_2 = mercury__pprint__packed_3_f_0((MR_Word) (&mercury__pprint_scalar_common_1[1]), TypeClassInfo_for_doc_5, Var_9, ((MR_Box) ((MR_String) ", ")), Xs_3);
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__pprint__packed_2_f_0(
  MR_Word TypeClassInfo_for_doc_7,
  MR_Word TypeClassInfo_for_doc_8,
  MR_Box Sep_4,
  MR_Word Xs_5)
{
  {
    MR_Word HeadVar__3_3;
    MR_Integer Var_6;

{
#define MR_PROC_LABEL mercury__pprint__packed_2_f_0

	MR_Integer Max;

		{

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }


		;}
#undef MR_PROC_LABEL
	 Var_6  = Max;
}
    HeadVar__3_3 = mercury__pprint__packed_3_f_0(TypeClassInfo_for_doc_7, TypeClassInfo_for_doc_8, Var_6, Sep_4, Xs_5);
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__pprint__packed_3_f_0(
  MR_Word TypeClassInfo_for_doc_33,
  MR_Word TypeClassInfo_for_doc_34,
  MR_Integer HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Word HeadVar__4_4;

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Box Var_39 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0));

      if ((Var_38 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_11;
        MR_Word Var_13;
        MR_Word Var_46;
        MR_Integer Var_48;
        MR_Box MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box);
        MR_Box conv3_Var_46;

        succeeded = ((MR_Integer) 0 < HeadVar__1_1);
        if (succeeded)
        {
          MR_Integer Var_41;
          MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);
          MR_Box conv1_Var_13;

{
#define MR_PROC_LABEL mercury__pprint__packed_3_f_0

	MR_Integer Max;

		{

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }


		;}
#undef MR_PROC_LABEL
	 Var_41  = Max;
}
          func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_doc_34, (MR_Integer) 0)), (MR_Integer) 5))));
          conv1_Var_13 = func_0(((MR_Box) (TypeClassInfo_for_doc_34)), ((MR_Box) (Var_41)), Var_39);
          Var_13 = ((MR_Word) (conv1_Var_13));
        }
        else
          Var_13 = (MR_Word) (MR_mkword(MR_mktag(3), &mercury__pprint_scalar_common_1[9]));
        Var_11 = mercury__pprint__f_43_43_2_f_0((MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Word) (&mercury__pprint_scalar_common_1[0]), ((MR_Box) ((MR_Unsigned) 4U)), ((MR_Box) (Var_13)));
{
#define MR_PROC_LABEL mercury__pprint__packed_3_f_0

	MR_Integer Max;

		{

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }


		;}
#undef MR_PROC_LABEL
	 Var_48  = Max;
}
        func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
        conv3_Var_46 = func_2(((MR_Box) ((MR_Word) (&mercury__pprint_scalar_common_1[0]))), ((MR_Box) (Var_48)), ((MR_Box) (Var_11)));
        Var_46 = ((MR_Word) (conv3_Var_46));
        {
          HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), HeadVar__4_4, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(MR_mktag(3), HeadVar__4_4, 1) = ((MR_Box) (Var_46));
        }
      }
      else
      {
        succeeded = ((MR_Integer) 0 < HeadVar__1_1);
        if (succeeded)
        {
          MR_Word Var_22;
          MR_Word Var_23;
          MR_Word Var_25;
          MR_Word Var_26;
          MR_Integer Var_27;
          MR_Word Var_52;
          MR_Word Var_53;
          MR_Integer Var_55;
          MR_Integer Var_58;
          MR_Word Var_63;
          MR_Integer Var_65;
          MR_Box MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box);
          MR_Box conv5_Var_52;
          MR_Box MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box);
          MR_Box conv7_Var_53;
          MR_Box MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box);
          MR_Box conv9_Var_63;

{
#define MR_PROC_LABEL mercury__pprint__packed_3_f_0

	MR_Integer Max;

		{

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }


		;}
#undef MR_PROC_LABEL
	 Var_55  = Max;
}
          func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_doc_34, (MR_Integer) 0)), (MR_Integer) 5))));
          conv5_Var_52 = func_4(((MR_Box) (TypeClassInfo_for_doc_34)), ((MR_Box) (Var_55)), Var_39);
          Var_52 = ((MR_Word) (conv5_Var_52));
{
#define MR_PROC_LABEL mercury__pprint__packed_3_f_0

	MR_Integer Max;

		{

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }


		;}
#undef MR_PROC_LABEL
	 Var_58  = Max;
}
          func_6 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_doc_33, (MR_Integer) 0)), (MR_Integer) 5))));
          conv7_Var_53 = func_6(((MR_Box) (TypeClassInfo_for_doc_33)), ((MR_Box) (Var_58)), HeadVar__2_2);
          Var_53 = ((MR_Word) (conv7_Var_53));
          {
            Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (Var_52));
            MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (Var_53));
          }
          Var_23 = mercury__pprint__f_43_43_2_f_0((MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Word) (&mercury__pprint_scalar_common_1[0]), ((MR_Box) ((MR_Unsigned) 4U)), ((MR_Box) (Var_25)));
{
#define MR_PROC_LABEL mercury__pprint__packed_3_f_0

	MR_Integer Max;

		{

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }


		;}
#undef MR_PROC_LABEL
	 Var_65  = Max;
}
          func_8 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
          conv9_Var_63 = func_8(((MR_Box) ((MR_Word) (&mercury__pprint_scalar_common_1[0]))), ((MR_Box) (Var_65)), ((MR_Box) (Var_23)));
          Var_63 = ((MR_Word) (conv9_Var_63));
          {
            Var_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_22, 0) = ((MR_Box) ((MR_Unsigned) 2U));
            MR_hl_field(MR_mktag(3), Var_22, 1) = ((MR_Box) (Var_63));
          }
          Var_27 = (MR_Integer) ((MR_Unsigned) HeadVar__1_1 - (MR_Unsigned) (MR_Integer) 1);
          Var_26 = mercury__pprint__packed_3_f_0(TypeClassInfo_for_doc_33, TypeClassInfo_for_doc_34, Var_27, HeadVar__2_2, Var_38);
          HeadVar__4_4 = mercury__pprint__f_43_43_2_f_0((MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Word) (&mercury__pprint_scalar_common_1[0]), ((MR_Box) (Var_22)), ((MR_Box) (Var_26)));
        }
        else
        {
          MR_Word Var_30;
          MR_Word Var_70;
          MR_Integer Var_72;
          MR_Box MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box);
          MR_Box conv11_Var_70;

          Var_30 = mercury__pprint__f_43_43_2_f_0((MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Word) (&mercury__pprint_scalar_common_1[0]), ((MR_Box) ((MR_Unsigned) 4U)), ((MR_Box) (MR_mkword(MR_mktag(3), &mercury__pprint_scalar_common_1[9]))));
{
#define MR_PROC_LABEL mercury__pprint__packed_3_f_0

	MR_Integer Max;

		{

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }


		;}
#undef MR_PROC_LABEL
	 Var_72  = Max;
}
          func_10 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
          conv11_Var_70 = func_10(((MR_Box) ((MR_Word) (&mercury__pprint_scalar_common_1[0]))), ((MR_Box) (Var_72)), ((MR_Box) (Var_30)));
          Var_70 = ((MR_Word) (conv11_Var_70));
          {
            HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), HeadVar__4_4, 0) = ((MR_Box) ((MR_Unsigned) 2U));
            MR_hl_field(MR_mktag(3), HeadVar__4_4, 1) = ((MR_Box) (Var_70));
          }
        }
      }
    }
    return HeadVar__4_4;
  }
}

MR_Word MR_CALL 
mercury__pprint__braces_1_f_0(
  MR_Word TypeClassInfo_for_doc_6,
  MR_Box D_3)
{
  {
    MR_Word HeadVar__2_2;

    HeadVar__2_2 = mercury__pprint__bracketed_3_f_0((MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Word) (&mercury__pprint_scalar_common_1[1]), TypeClassInfo_for_doc_6, ((MR_Box) ((MR_String) "{")), ((MR_Box) ((MR_String) "}")), D_3);
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__pprint__brackets_1_f_0(
  MR_Word TypeClassInfo_for_doc_6,
  MR_Box D_3)
{
  {
    MR_Word HeadVar__2_2;

    HeadVar__2_2 = mercury__pprint__bracketed_3_f_0((MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Word) (&mercury__pprint_scalar_common_1[1]), TypeClassInfo_for_doc_6, ((MR_Box) ((MR_String) "[")), ((MR_Box) ((MR_String) "]")), D_3);
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__pprint__parentheses_1_f_0(
  MR_Word TypeClassInfo_for_doc_6,
  MR_Box D_3)
{
  {
    MR_Word HeadVar__2_2;

    HeadVar__2_2 = mercury__pprint__bracketed_3_f_0((MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Word) (&mercury__pprint_scalar_common_1[1]), TypeClassInfo_for_doc_6, ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_String) ")")), D_3);
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__pprint__bracketed_3_f_0(
  MR_Word TypeClassInfo_for_doc_9,
  MR_Word TypeClassInfo_for_doc_10,
  MR_Word TypeClassInfo_for_doc_11,
  MR_Box L_5,
  MR_Box R_6,
  MR_Box D_7)
{
  {
    MR_Word HeadVar__4_4;
    MR_Word Var_8;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Integer Var_18;
    MR_Integer Var_21;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Integer Var_30;
    MR_Integer Var_33;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);
    MR_Box conv1_Var_15;
    MR_Box MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box);
    MR_Box conv3_Var_16;
    MR_Box MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box);
    MR_Box conv5_Var_27;
    MR_Box MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box);
    MR_Box conv7_Var_28;

{
#define MR_PROC_LABEL mercury__pprint__bracketed_3_f_0

	MR_Integer Max;

		{

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }


		;}
#undef MR_PROC_LABEL
	 Var_18  = Max;
}
    func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_doc_11, (MR_Integer) 0)), (MR_Integer) 5))));
    conv1_Var_15 = func_0(((MR_Box) (TypeClassInfo_for_doc_11)), ((MR_Box) (Var_18)), D_7);
    Var_15 = ((MR_Word) (conv1_Var_15));
{
#define MR_PROC_LABEL mercury__pprint__bracketed_3_f_0

	MR_Integer Max;

		{

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }


		;}
#undef MR_PROC_LABEL
	 Var_21  = Max;
}
    func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_doc_10, (MR_Integer) 0)), (MR_Integer) 5))));
    conv3_Var_16 = func_2(((MR_Box) (TypeClassInfo_for_doc_10)), ((MR_Box) (Var_21)), R_6);
    Var_16 = ((MR_Word) (conv3_Var_16));
    {
      Var_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_8, 0) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(1), Var_8, 1) = ((MR_Box) (Var_16));
    }
{
#define MR_PROC_LABEL mercury__pprint__bracketed_3_f_0

	MR_Integer Max;

		{

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }


		;}
#undef MR_PROC_LABEL
	 Var_30  = Max;
}
    func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_doc_9, (MR_Integer) 0)), (MR_Integer) 5))));
    conv5_Var_27 = func_4(((MR_Box) (TypeClassInfo_for_doc_9)), ((MR_Box) (Var_30)), L_5);
    Var_27 = ((MR_Word) (conv5_Var_27));
{
#define MR_PROC_LABEL mercury__pprint__bracketed_3_f_0

	MR_Integer Max;

		{

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }


		;}
#undef MR_PROC_LABEL
	 Var_33  = Max;
}
    func_6 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    conv7_Var_28 = func_6(((MR_Box) ((MR_Word) (&mercury__pprint_scalar_common_1[0]))), ((MR_Box) (Var_33)), ((MR_Box) (Var_8)));
    Var_28 = ((MR_Word) (conv7_Var_28));
    {
      HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__4_4, 0) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(1), HeadVar__4_4, 1) = ((MR_Box) (Var_28));
    }
    return HeadVar__4_4;
  }
}

MR_Word MR_CALL 
mercury__pprint__f_60_47_62_2_f_0(
  MR_Word X_4,
  MR_Word Y_5)
{
  {
    MR_Word HeadVar__3_3;
    MR_Word Var_6;
    MR_Word Var_12;
    MR_Word Var_13;
    MR_Integer Var_15;
    MR_Integer Var_18;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);
    MR_Box conv1_Var_12;
    MR_Box MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box);
    MR_Box conv3_Var_13;

    Var_6 = mercury__pprint__f_43_43_2_f_0((MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Word) (&mercury__pprint_scalar_common_1[0]), ((MR_Box) ((MR_Unsigned) 4U)), ((MR_Box) (Y_5)));
{
#define MR_PROC_LABEL mercury__pprint__f_60_47_62_2_f_0

	MR_Integer Max;

		{

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }


		;}
#undef MR_PROC_LABEL
	 Var_15  = Max;
}
    func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    conv1_Var_12 = func_0(((MR_Box) ((MR_Word) (&mercury__pprint_scalar_common_1[0]))), ((MR_Box) (Var_15)), ((MR_Box) (X_4)));
    Var_12 = ((MR_Word) (conv1_Var_12));
{
#define MR_PROC_LABEL mercury__pprint__f_60_47_62_2_f_0

	MR_Integer Max;

		{

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }


		;}
#undef MR_PROC_LABEL
	 Var_18  = Max;
}
    func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    conv3_Var_13 = func_2(((MR_Box) ((MR_Word) (&mercury__pprint_scalar_common_1[0]))), ((MR_Box) (Var_18)), ((MR_Box) (Var_6)));
    Var_13 = ((MR_Word) (conv3_Var_13));
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__3_3, 0) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(1), HeadVar__3_3, 1) = ((MR_Box) (Var_13));
    }
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__pprint__poly_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;

    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Float F_21 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
          MR_String Var_22;

          mercury__string__format__format_float_component_6_p_0((MR_Word) (&mercury__pprint_scalar_common_5[0]), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 2, F_21, &Var_22);
          {
            HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), HeadVar__2_2, 1) = ((MR_Box) (Var_22));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer I_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
          MR_String Var_16;

          mercury__string__format__format_signed_int_component_5_p_0((MR_Word) (&mercury__pprint_scalar_common_5[0]), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), I_15, &Var_16);
          {
            HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), HeadVar__2_2, 1) = ((MR_Box) (Var_16));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String S_3 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));

          {
            HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), HeadVar__2_2, 1) = ((MR_Box) (S_3));
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Char C_9 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0)));
          MR_String Var_10;

          mercury__string__format__format_char_component_4_p_0((MR_Word) (&mercury__pprint_scalar_common_5[0]), (MR_Word) ((MR_Unsigned) 0U), C_9, &Var_10);
          {
            HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), HeadVar__2_2, 1) = ((MR_Box) (Var_10));
          }
        }
        break;
    }
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__pprint__group_1_f_0(
  MR_Word TypeClassInfo_for_doc_5,
  MR_Box X_3)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word Var_4;
    MR_Integer Var_7;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);
    MR_Box conv1_Var_4;

{
#define MR_PROC_LABEL mercury__pprint__group_1_f_0

	MR_Integer Max;

		{

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }


		;}
#undef MR_PROC_LABEL
	 Var_7  = Max;
}
    func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_doc_5, (MR_Integer) 0)), (MR_Integer) 5))));
    conv1_Var_4 = func_0(((MR_Box) (TypeClassInfo_for_doc_5)), ((MR_Box) (Var_7)), X_3);
    Var_4 = ((MR_Word) (conv1_Var_4));
    {
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 1) = ((MR_Box) (Var_4));
    }
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__pprint__label_2_f_0(
  MR_Word TypeClassInfo_for_doc_7,
  MR_String L_4,
  MR_Box X_5)
{
  {
    MR_Word HeadVar__3_3;
    MR_Word Var_6;
    MR_Integer Var_9;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);
    MR_Box conv1_Var_6;

{
#define MR_PROC_LABEL mercury__pprint__label_2_f_0

	MR_Integer Max;

		{

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }


		;}
#undef MR_PROC_LABEL
	 Var_9  = Max;
}
    func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_doc_7, (MR_Integer) 0)), (MR_Integer) 5))));
    conv1_Var_6 = func_0(((MR_Box) (TypeClassInfo_for_doc_7)), ((MR_Box) (Var_9)), X_5);
    Var_6 = ((MR_Word) (conv1_Var_6));
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeadVar__3_3, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), HeadVar__3_3, 1) = ((MR_Box) (L_4));
      MR_hl_field(MR_mktag(3), HeadVar__3_3, 2) = ((MR_Box) (Var_6));
    }
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__pprint__nest_2_f_0(
  MR_Word TypeClassInfo_for_doc_7,
  MR_Integer I_4,
  MR_Box X_5)
{
  {
    MR_Word HeadVar__3_3;
    MR_Word Var_6;
    MR_Integer Var_9;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);
    MR_Box conv1_Var_6;

{
#define MR_PROC_LABEL mercury__pprint__nest_2_f_0

	MR_Integer Max;

		{

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }


		;}
#undef MR_PROC_LABEL
	 Var_9  = Max;
}
    func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_doc_7, (MR_Integer) 0)), (MR_Integer) 5))));
    conv1_Var_6 = func_0(((MR_Box) (TypeClassInfo_for_doc_7)), ((MR_Box) (Var_9)), X_5);
    Var_6 = ((MR_Word) (conv1_Var_6));
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), HeadVar__3_3, 0) = ((MR_Box) (I_4));
      MR_hl_field(MR_mktag(2), HeadVar__3_3, 1) = ((MR_Box) (Var_6));
    }
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__pprint__line_0_f_0(void)
{
  {
    return (MR_Word) ((MR_Unsigned) 4U);
  }
}

MR_Word MR_CALL 
mercury__pprint__f_60_62_2_f_0(
  MR_Word X_4,
  MR_Word Y_5)
{
  {
    MR_Word HeadVar__3_3;

    {
      HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__3_3, 0) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(1), HeadVar__3_3, 1) = ((MR_Box) (Y_5));
    }
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__pprint__text_1_f_0(
  MR_String S_3)
{
  {
    MR_Word HeadVar__2_2;

    {
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 1) = ((MR_Box) (S_3));
    }
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__pprint__nil_0_f_0(void)
{
  {
    return (MR_Word) ((MR_Unsigned) 0U);
  }
}

MR_Word MR_CALL 
mercury__pprint__f_43_43_2_f_0(
  MR_Word TypeClassInfo_for_doc_8,
  MR_Word TypeClassInfo_for_doc_9,
  MR_Box Doc1_4,
  MR_Box Doc2_5)
{
  {
    MR_Word HeadVar__3_3;
    MR_Word Var_6;
    MR_Word Var_7;
    MR_Integer Var_11;
    MR_Integer Var_14;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);
    MR_Box conv1_Var_6;
    MR_Box MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box);
    MR_Box conv3_Var_7;

{
#define MR_PROC_LABEL mercury__pprint__f_43_43_2_f_0

	MR_Integer Max;

		{

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }


		;}
#undef MR_PROC_LABEL
	 Var_11  = Max;
}
    func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_doc_8, (MR_Integer) 0)), (MR_Integer) 5))));
    conv1_Var_6 = func_0(((MR_Box) (TypeClassInfo_for_doc_8)), ((MR_Box) (Var_11)), Doc1_4);
    Var_6 = ((MR_Word) (conv1_Var_6));
{
#define MR_PROC_LABEL mercury__pprint__f_43_43_2_f_0

	MR_Integer Max;

		{

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }


		;}
#undef MR_PROC_LABEL
	 Var_14  = Max;
}
    func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_doc_9, (MR_Integer) 0)), (MR_Integer) 5))));
    conv3_Var_7 = func_2(((MR_Box) (TypeClassInfo_for_doc_9)), ((MR_Box) (Var_14)), Doc2_5);
    Var_7 = ((MR_Word) (conv3_Var_7));
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__3_3, 0) = ((MR_Box) (Var_6));
      MR_hl_field(MR_mktag(1), HeadVar__3_3, 1) = ((MR_Box) (Var_7));
    }
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__pprint__doc_1_f_0(
  MR_Word TypeClassInfo_for_doc_5,
  MR_Box X_3)
{
  {
    MR_Word HeadVar__2_2;
    MR_Integer Var_4;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);
    MR_Box conv1_HeadVar__2_2;

{
#define MR_PROC_LABEL mercury__pprint__doc_1_f_0

	MR_Integer Max;

		{

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }


		;}
#undef MR_PROC_LABEL
	 Var_4  = Max;
}
    func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_doc_5, (MR_Integer) 0)), (MR_Integer) 5))));
    conv1_HeadVar__2_2 = func_0(((MR_Box) (TypeClassInfo_for_doc_5)), ((MR_Box) (Var_4)), X_3);
    HeadVar__2_2 = ((MR_Word) (conv1_HeadVar__2_2));
    return HeadVar__2_2;
  }
}

static MR_bool MR_CALL 
mercury__pprint____Unify____depth_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__pprint____Unify____depth_0_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__pprint____Compare____depth_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__pprint____Compare____depth_0_0(&conv0_HeadVar__1_1, ((MR_Integer) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__pprint____Unify____doc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__pprint____Unify____doc_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__pprint____Compare____doc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__pprint____Compare____doc_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__pprint____Unify____map_pair_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_bool succeeded;

    succeeded = mercury__pprint____Unify____map_pair_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__pprint____Compare____map_pair_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__pprint____Compare____map_pair_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)));
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_Box MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____character__arity0______pprint__doc_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    conv0_HeadVar__3_3 = mercury__pprint__ClassMethod_for_pprint__doc____character__arity0______pprint__doc_2_2_f_0(((MR_Integer) (wrapper_arg_1)), ((MR_Char) (MR_Word) wrapper_arg_2));
    wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
    return wrapper_arg_3;
  }
}

static MR_Box MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____float__arity0______pprint__doc_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    conv0_HeadVar__3_3 = mercury__pprint__ClassMethod_for_pprint__doc____float__arity0______pprint__doc_2_2_f_0(((MR_Integer) (wrapper_arg_1)), MR_unbox_float(wrapper_arg_2));
    wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
    return wrapper_arg_3;
  }
}

static MR_Box MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____uint64__arity0______pprint__doc_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    conv0_HeadVar__3_3 = mercury__pprint__ClassMethod_for_pprint__doc____uint64__arity0______pprint__doc_2_2_f_0(((MR_Integer) (wrapper_arg_1)), MR_unbox_uint64(wrapper_arg_2));
    wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
    return wrapper_arg_3;
  }
}

static MR_Box MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____uint32__arity0______pprint__doc_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    conv0_HeadVar__3_3 = mercury__pprint__ClassMethod_for_pprint__doc____uint32__arity0______pprint__doc_2_2_f_0(((MR_Integer) (wrapper_arg_1)), ((uint32_t) (MR_Word) wrapper_arg_2));
    wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
    return wrapper_arg_3;
  }
}

static MR_Box MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____uint16__arity0______pprint__doc_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    conv0_HeadVar__3_3 = mercury__pprint__ClassMethod_for_pprint__doc____uint16__arity0______pprint__doc_2_2_f_0(((MR_Integer) (wrapper_arg_1)), ((uint16_t) (MR_Word) wrapper_arg_2));
    wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
    return wrapper_arg_3;
  }
}

static MR_Box MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____uint8__arity0______pprint__doc_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    conv0_HeadVar__3_3 = mercury__pprint__ClassMethod_for_pprint__doc____uint8__arity0______pprint__doc_2_2_f_0(((MR_Integer) (wrapper_arg_1)), ((uint8_t) (MR_Word) wrapper_arg_2));
    wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
    return wrapper_arg_3;
  }
}

static MR_Box MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____uint__arity0______pprint__doc_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    conv0_HeadVar__3_3 = mercury__pprint__ClassMethod_for_pprint__doc____uint__arity0______pprint__doc_2_2_f_0(((MR_Integer) (wrapper_arg_1)), ((MR_Unsigned) (wrapper_arg_2)));
    wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
    return wrapper_arg_3;
  }
}

static MR_Box MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____int64__arity0______pprint__doc_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    conv0_HeadVar__3_3 = mercury__pprint__ClassMethod_for_pprint__doc____int64__arity0______pprint__doc_2_2_f_0(((MR_Integer) (wrapper_arg_1)), MR_unbox_int64(wrapper_arg_2));
    wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
    return wrapper_arg_3;
  }
}

static MR_Box MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____int32__arity0______pprint__doc_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    conv0_HeadVar__3_3 = mercury__pprint__ClassMethod_for_pprint__doc____int32__arity0______pprint__doc_2_2_f_0(((MR_Integer) (wrapper_arg_1)), ((int32_t) (MR_Word) wrapper_arg_2));
    wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
    return wrapper_arg_3;
  }
}

static MR_Box MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____int16__arity0______pprint__doc_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    conv0_HeadVar__3_3 = mercury__pprint__ClassMethod_for_pprint__doc____int16__arity0______pprint__doc_2_2_f_0(((MR_Integer) (wrapper_arg_1)), ((int16_t) (MR_Word) wrapper_arg_2));
    wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
    return wrapper_arg_3;
  }
}

static MR_Box MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____int8__arity0______pprint__doc_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    conv0_HeadVar__3_3 = mercury__pprint__ClassMethod_for_pprint__doc____int8__arity0______pprint__doc_2_2_f_0(((MR_Integer) (wrapper_arg_1)), ((int8_t) (MR_Word) wrapper_arg_2));
    wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
    return wrapper_arg_3;
  }
}

static MR_Box MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____int__arity0______pprint__doc_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    conv0_HeadVar__3_3 = mercury__pprint__ClassMethod_for_pprint__doc____int__arity0______pprint__doc_2_2_f_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
    wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
    return wrapper_arg_3;
  }
}

static MR_Box MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____string__arity0______pprint__doc_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    conv0_HeadVar__3_3 = mercury__pprint__ClassMethod_for_pprint__doc____string__arity0______pprint__doc_2_2_f_0(((MR_Integer) (wrapper_arg_1)), ((MR_String) (wrapper_arg_2)));
    wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
    return wrapper_arg_3;
  }
}

static MR_Box MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____pprint__doc__arity0______pprint__doc_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv0_Doc_3;

    conv0_Doc_3 = mercury__pprint__ClassMethod_for_pprint__doc____pprint__doc__arity0______pprint__doc_2_2_f_0(((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    wrapper_arg_3 = ((MR_Box) (conv0_Doc_3));
    return wrapper_arg_3;
  }
}

void mercury__pprint__init(void)
{
}

void mercury__pprint__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__pprint__pprint__type_ctor_info_depth_0);
	MR_register_type_ctor_info(&mercury__pprint__pprint__type_ctor_info_doc_0);
	MR_register_type_ctor_info(&mercury__pprint__pprint__type_ctor_info_map_pair_2);
}

void mercury__pprint__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__pprint__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module pprint.
