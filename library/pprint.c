/*
** Automatically generated from `pprint.m'
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


/* :- module pprint. */
/* :- implementation. */

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
  MR_Word mercury__pprint__P_1,
  MR_Integer mercury__pprint__HeadVar__2_2,
  MR_Integer * mercury__pprint__K_3,
  MR_Word mercury__pprint__HeadVar__4_4,
  MR_Box mercury__pprint__HeadVar__5_5,
  MR_Box * mercury__pprint__S_6);

static void MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_91_49_93_95_48_6_p_0(
  MR_Word mercury__pprint__P_1,
  MR_Integer mercury__pprint__HeadVar__2_2,
  MR_Integer * mercury__pprint__K_3,
  MR_Word mercury__pprint__HeadVar__4_4,
  MR_Box mercury__pprint__HeadVar__5_5,
  MR_Box * mercury__pprint__S_6);

static void MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_98_95_95_104_111_52_51_95_95_91_51_44_32_52_93_95_48_8_p_0(
  MR_Word mercury__pprint__Var_85,
  MR_Box mercury__pprint__Var_86,
  MR_Integer mercury__pprint__W_2,
  MR_Integer mercury__pprint__HeadVar__3_3,
  MR_Integer * mercury__pprint__K_4,
  MR_String mercury__pprint__I_5,
  MR_Word mercury__pprint__HeadVar__6_6,
  MR_Box mercury__pprint__HeadVar__7_7,
  MR_Box * mercury__pprint__S_8);

static void MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_104_111_52_56_95_95_91_51_44_32_52_93_95_48_6_p_0(
  MR_Word mercury__pprint__Var_60,
  MR_Box mercury__pprint__Var_61,
  MR_Integer mercury__pprint__HeadVar__2_2,
  MR_Integer * mercury__pprint__K_3,
  MR_Word mercury__pprint__HeadVar__4_4,
  MR_Box mercury__pprint__HeadVar__5_5,
  MR_Box * mercury__pprint__S_6);

static void MR_CALL 
mercury__pprint__lb__ho42_8_p_0(
  MR_Integer mercury__pprint__W_2,
  MR_Integer mercury__pprint__HeadVar__3_3,
  MR_Integer * mercury__pprint__K_4,
  MR_String mercury__pprint__I_5,
  MR_Word mercury__pprint__HeadVar__6_6);

static void MR_CALL 
mercury__pprint__layout_flat__ho49_6_p_0(
  MR_Integer mercury__pprint__HeadVar__2_2,
  MR_Integer * mercury__pprint__K_3,
  MR_Word mercury__pprint__HeadVar__4_4);

static void MR_CALL 
mercury__pprint__lb__ho41_8_p_0(
  MR_Integer mercury__pprint__W_2,
  MR_Integer mercury__pprint__HeadVar__3_3,
  MR_Integer * mercury__pprint__K_4,
  MR_String mercury__pprint__I_5,
  MR_Word mercury__pprint__HeadVar__6_6,
  MR_Word mercury__pprint__HeadVar__7_7,
  MR_Word * mercury__pprint__S_8);

static void MR_CALL 
mercury__pprint__layout_flat__ho50_6_p_0(
  MR_Integer mercury__pprint__HeadVar__2_2,
  MR_Integer * mercury__pprint__K_3,
  MR_Word mercury__pprint__HeadVar__4_4,
  MR_Word mercury__pprint__HeadVar__5_5,
  MR_Word * mercury__pprint__S_6);

static void MR_CALL 
mercury__pprint__IntroducedFrom__pred__to_string__446__1_3_p_0(
  MR_String mercury__pprint__LambdaHeadVar__1_12,
  MR_Word mercury__pprint__LambdaHeadVar__2_13,
  MR_Word * mercury__pprint__LambdaHeadVar__3_14);

static MR_String MR_CALL 
mercury__pprint__extend_2_f_0(
  MR_String mercury__pprint__I_4,
  MR_Integer mercury__pprint__J_5);

static MR_bool MR_CALL 
mercury__pprint__ff_2_f_0(
  MR_Word mercury__pprint__HeadVar__1_1,
  MR_Integer mercury__pprint__R_2,
  MR_Integer * mercury__pprint__HeadVar__3_3);

static void MR_CALL 
mercury__pprint__words_loop__ho39_4_p_in__string_0(
  MR_String mercury__pprint__V_6_6,
  MR_Integer mercury__pprint__V_7_7,
  MR_Word * mercury__pprint__V_8_8);

static void MR_CALL 
mercury__pprint__skip_to_word_end__ho51_4_p_in__string_0(
  MR_String mercury__pprint__V_6_6,
  MR_Integer mercury__pprint__V_7_7,
  MR_Integer * mercury__pprint__V_8_8);

static void MR_CALL 
mercury__pprint__skip_to_next_word_start__ho40_4_p_in__string_0(
  MR_String mercury__pprint__V_6_6,
  MR_Integer mercury__pprint__V_7_7,
  MR_Integer * mercury__pprint__V_8_8);

static MR_Word MR_CALL 
mercury__pprint__map__ho36_2_f_in__list_0(
  MR_Word mercury__pprint__HeadVar__2_2);

static MR_Word MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_51_56_95_95_91_51_44_32_52_93_95_48_2_f_in__list_0(
  MR_Word mercury__pprint__Var_12,
  MR_Integer mercury__pprint__Var_13,
  MR_Word mercury__pprint__HeadVar__2_2);

static MR_Word MR_CALL 
mercury__pprint__robdd_to_doc_2_f_0(
  MR_Word mercury__pprint__TypeInfo_for_T_12,
  MR_Integer mercury__pprint__Depth_4,
  MR_Word mercury__pprint__R_5);

static MR_Word MR_CALL 
mercury__pprint__map_pair_to_doc_2_f_0(
  MR_Word mercury__pprint__TypeInfo_for_T1_21,
  MR_Word mercury__pprint__TypeInfo_for_T2_22,
  MR_Integer mercury__pprint__Depth_4,
  MR_Word mercury__pprint__HeadVar__2_2);

static MR_Word MR_CALL 
mercury__pprint__map_to_doc_2_f_0(
  MR_Word mercury__pprint__TypeInfo_for_T1_16,
  MR_Word mercury__pprint__TypeInfo_for_T2_17,
  MR_Integer mercury__pprint__Depth_4,
  MR_Word mercury__pprint__X_5);

static MR_Word MR_CALL 
mercury__pprint__version_array_to_doc_2_f_0(
  MR_Word mercury__pprint__TypeInfo_for_T_13,
  MR_Integer mercury__pprint__Depth_4,
  MR_Box mercury__pprint__A_5);

static MR_Word MR_CALL 
mercury__pprint__array_to_doc_2_f_0(
  MR_Word mercury__pprint__TypeInfo_for_T_13,
  MR_Integer mercury__pprint__Depth_4,
  MR_ArrayPtr mercury__pprint__A_5);

static MR_Word MR_CALL 
mercury__pprint__list_to_doc_2_f_0(
  MR_Word mercury__pprint__TypeInfo_for_T_11,
  MR_Integer mercury__pprint__Depth_4,
  MR_Word mercury__pprint__Xs_5);

static MR_Word MR_CALL 
mercury__pprint__sparse_bitset_to_doc_2_f_0(
  MR_Word mercury__pprint__TypeClassInfo_for_enum_13,
  MR_Integer mercury__pprint__Depth_4,
  MR_Word mercury__pprint__A_5);

static MR_Word MR_CALL 
mercury__pprint__univ_to_doc_3_f_0(
  MR_Integer mercury__pprint__Depth_5,
  MR_Integer mercury__pprint__Priority_6,
  MR_Word mercury__pprint__Univ_7);

static MR_Word MR_CALL 
mercury__pprint__generic_term_to_doc_3_f_0(
  MR_Word mercury__pprint__TypeInfo_for_T_101,
  MR_Integer mercury__pprint__Depth_5,
  MR_Integer mercury__pprint__Priority_6,
  MR_Box mercury__pprint__X_7);

static MR_Word MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_93_95_48_2_f_in__list_0(
  MR_Word mercury__pprint__HeadVar__2_2);

static MR_Word MR_CALL 
mercury__pprint__tuple_to_doc_2_f_0(
  MR_Word mercury__pprint__TypeInfo_for_T_17,
  MR_Integer mercury__pprint__Depth_4,
  MR_Box mercury__pprint__Tuple_5);

static MR_Word MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_52_54_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_f_in__version_array_0(
  MR_Word mercury__pprint__TypeInfo_for_T1_1_16,
  MR_Box mercury__pprint__V_7_7,
  MR_Word mercury__pprint__V_8_8,
  MR_Integer mercury__pprint__V_9_9);

static void MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_52_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0(
  MR_Word mercury__pprint__TypeClassInfo_for_enum_20,
  MR_Word mercury__pprint__HeadVar__2_2,
  MR_Word mercury__pprint__HeadVar__3_3,
  MR_Word * mercury__pprint__HeadVar__4_4);

static void MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_52_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_93_95_48_7_p_in__sparse_bitset_0(
  MR_Word mercury__pprint__TypeClassInfo_for_enum_29,
  MR_Word mercury__pprint__V_8_8,
  MR_Integer mercury__pprint__V_10_10,
  MR_Integer mercury__pprint__V_11_11,
  MR_Integer mercury__pprint__V_12_12,
  MR_Word mercury__pprint__V_19_13,
  MR_Word * mercury__pprint__V_20_14);

static MR_bool MR_CALL 
mercury__pprint__dynamic_cast_to_robdd_2_p_0(
  MR_Word mercury__pprint__TypeInfo_for_T1_14,
  MR_Word * mercury__pprint__TypeInfo_for_T_13,
  MR_Box mercury__pprint__X_3,
  MR_Word * mercury__pprint__R_4);

static MR_bool MR_CALL 
mercury__pprint__dynamic_cast_to_map_pair_2_p_0(
  MR_Word mercury__pprint__TypeInfo_for_T1_20,
  MR_Word * mercury__pprint__TypeInfo_for_T_18,
  MR_Word * mercury__pprint__TypeInfo_for_T_19,
  MR_Box mercury__pprint__X_3,
  MR_Word * mercury__pprint__MP_4);

static MR_bool MR_CALL 
mercury__pprint__dynamic_cast_to_map_2_p_0(
  MR_Word mercury__pprint__TypeInfo_for_T1_20,
  MR_Word * mercury__pprint__TypeInfo_for_T_18,
  MR_Word * mercury__pprint__TypeInfo_for_T_19,
  MR_Box mercury__pprint__X_3,
  MR_Word * mercury__pprint__M_4);

static MR_bool MR_CALL 
mercury__pprint__dynamic_cast_to_list_2_p_0(
  MR_Word mercury__pprint__TypeInfo_for_T1_14,
  MR_Word * mercury__pprint__TypeInfo_for_T_13,
  MR_Box mercury__pprint__X_3,
  MR_Word * mercury__pprint__L_4);

static MR_bool MR_CALL 
mercury__pprint__dynamic_cast_to_version_array_2_p_0(
  MR_Word mercury__pprint__TypeInfo_for_T1_14,
  MR_Word * mercury__pprint__TypeInfo_for_T_13,
  MR_Box mercury__pprint__X_3,
  MR_Box * mercury__pprint__VA_4);

static MR_Integer MR_CALL 
mercury__pprint__adjusted_by_2_f_0(
  MR_Integer mercury__pprint__Priority_1,
  MR_Word mercury__pprint__HeadVar__2_2);

static MR_Word MR_CALL 
mercury__pprint__maybe_parens_3_f_0(
  MR_Integer mercury__pprint__ParentPriority_5,
  MR_Integer mercury__pprint__OpPriority_6,
  MR_Word mercury__pprint__Doc_7);

static MR_Word MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_51_55_95_95_91_50_93_95_48_2_f_in__list_0(
  MR_Integer mercury__pprint__Var_12,
  MR_Word mercury__pprint__HeadVar__2_2);

static MR_bool MR_CALL 
mercury__pprint____Unify____depth_0_0_10001(
  MR_Box mercury__pprint__wrapper_arg_1,
  MR_Box mercury__pprint__wrapper_arg_2);

static void MR_CALL 
mercury__pprint____Compare____depth_0_0_10001(
  MR_Box * mercury__pprint__wrapper_arg_1,
  MR_Box mercury__pprint__wrapper_arg_2,
  MR_Box mercury__pprint__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__pprint____Unify____doc_0_0_10001(
  MR_Box mercury__pprint__wrapper_arg_1,
  MR_Box mercury__pprint__wrapper_arg_2);

static void MR_CALL 
mercury__pprint____Compare____doc_0_0_10001(
  MR_Box * mercury__pprint__wrapper_arg_1,
  MR_Box mercury__pprint__wrapper_arg_2,
  MR_Box mercury__pprint__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__pprint____Unify____map_pair_2_0_10001(
  MR_Box mercury__pprint__wrapper_arg_1,
  MR_Box mercury__pprint__wrapper_arg_2,
  MR_Box mercury__pprint__wrapper_arg_3,
  MR_Box mercury__pprint__wrapper_arg_4);

static void MR_CALL 
mercury__pprint____Compare____map_pair_2_0_10001(
  MR_Box mercury__pprint__wrapper_arg_1,
  MR_Box mercury__pprint__wrapper_arg_2,
  MR_Box * mercury__pprint__wrapper_arg_3,
  MR_Box mercury__pprint__wrapper_arg_4,
  MR_Box mercury__pprint__wrapper_arg_5);

static MR_Box MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____character__arity0______pprint__doc_2_2_f_0_10001(
  MR_Box mercury__pprint__closure_arg,
  MR_Box mercury__pprint__wrapper_arg_1,
  MR_Box mercury__pprint__wrapper_arg_2);

static MR_Box MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____float__arity0______pprint__doc_2_2_f_0_10001(
  MR_Box mercury__pprint__closure_arg,
  MR_Box mercury__pprint__wrapper_arg_1,
  MR_Box mercury__pprint__wrapper_arg_2);

static MR_Box MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____int__arity0______pprint__doc_2_2_f_0_10001(
  MR_Box mercury__pprint__closure_arg,
  MR_Box mercury__pprint__wrapper_arg_1,
  MR_Box mercury__pprint__wrapper_arg_2);

static MR_Box MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____uint__arity0______pprint__doc_2_2_f_0_10001(
  MR_Box mercury__pprint__closure_arg,
  MR_Box mercury__pprint__wrapper_arg_1,
  MR_Box mercury__pprint__wrapper_arg_2);

static MR_Box MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____string__arity0______pprint__doc_2_2_f_0_10001(
  MR_Box mercury__pprint__closure_arg,
  MR_Box mercury__pprint__wrapper_arg_1,
  MR_Box mercury__pprint__wrapper_arg_2);

static MR_Box MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____pprint__doc__arity0______pprint__doc_2_2_f_0_10001(
  MR_Box mercury__pprint__closure_arg,
  MR_Box mercury__pprint__wrapper_arg_1,
  MR_Box mercury__pprint__wrapper_arg_2);


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
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "..."))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) " "))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) " -> "))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) ";"))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) ", "))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "; "))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
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
#include "hash_table.mh"
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



const MR_TypeCtorInfo_Struct mercury__pprint__pprint__type_ctor_info_depth_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__pprint____Unify____depth_0_0_10001)),
  ((MR_Box) (mercury__pprint____Compare____depth_0_0_10001)),
  (MR_String) "pprint",
  (MR_String) "depth",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_DuFunctorDesc mercury__pprint__pprint__du_functor_desc_doc_0_0 = {
  (MR_String) "NIL",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__pprint__pprint__field_types_doc_0_1[2] = {
  (MR_PseudoTypeInfo) &mercury__pprint__pprint__type_ctor_info_doc_0,
  (MR_PseudoTypeInfo) &mercury__pprint__pprint__type_ctor_info_doc_0
};

static const MR_DuFunctorDesc mercury__pprint__pprint__du_functor_desc_doc_0_1 = {
  (MR_String) "SEQ",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__pprint__pprint__field_types_doc_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__pprint__pprint__field_types_doc_0_2[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__pprint__pprint__type_ctor_info_doc_0
};

static const MR_DuFunctorDesc mercury__pprint__pprint__du_functor_desc_doc_0_2 = {
  (MR_String) "NEST",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mercury__pprint__pprint__field_types_doc_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__pprint__pprint__field_types_doc_0_3[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__pprint__pprint__type_ctor_info_doc_0
};

static const MR_DuFunctorDesc mercury__pprint__pprint__du_functor_desc_doc_0_3 = {
  (MR_String) "LABEL",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 3,
  mercury__pprint__pprint__field_types_doc_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__pprint__pprint__field_types_doc_0_4[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury__pprint__pprint__du_functor_desc_doc_0_4 = {
  (MR_String) "TEXT",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__pprint__pprint__field_types_doc_0_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mercury__pprint__pprint__du_functor_desc_doc_0_5 = {
  (MR_String) "LINE",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 5,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__pprint__pprint__field_types_doc_0_6[1] = {
  (MR_PseudoTypeInfo) &mercury__pprint__pprint__type_ctor_info_doc_0
};

static const MR_DuFunctorDesc mercury__pprint__pprint__du_functor_desc_doc_0_6 = {
  (MR_String) "GROUP",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 6,
  mercury__pprint__pprint__field_types_doc_0_6,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__pprint__pprint__field_types_doc_0_7[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__univ__univ__type_ctor_info_univ_0
};

static const MR_DuFunctorDesc mercury__pprint__pprint__du_functor_desc_doc_0_7 = {
  (MR_String) "DOC",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 3,
  (MR_Integer) 7,
  mercury__pprint__pprint__field_types_doc_0_7,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
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
    (MR_Integer) 2,
    MR_SECTAG_LOCAL,
    mercury__pprint__pprint__du_stag_ordered_doc_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__pprint__pprint__du_stag_ordered_doc_0_1
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__pprint__pprint__du_stag_ordered_doc_0_2
  },
  {
    (MR_Integer) 4,
    MR_SECTAG_REMOTE,
    mercury__pprint__pprint__du_stag_ordered_doc_0_3
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
  (MR_Integer) 17,
  (MR_Integer) 4,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__pprint____Unify____doc_0_0_10001)),
  ((MR_Box) (mercury__pprint____Compare____doc_0_0_10001)),
  (MR_String) "pprint",
  (MR_String) "doc",
  {     mercury__pprint__pprint__du_name_ordered_doc_0 },
  {     mercury__pprint__pprint__du_ptag_ordered_doc_0 },
  (MR_Integer) 8,
  (MR_Integer) 4,
  mercury__pprint__pprint__functor_number_map_doc_0
};

static const MR_PseudoTypeInfo mercury__pprint__pprint__field_types_map_pair_2_0[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 2
};

static const MR_DuFunctorDesc mercury__pprint__pprint__du_functor_desc_map_pair_2_0 = {
  (MR_String) "map_pair",
  (MR_Integer) 2,
  (MR_Integer) 3,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__pprint__pprint__field_types_map_pair_2_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__pprint__pprint__du_stag_ordered_map_pair_2_0[1] = {
  &mercury__pprint__pprint__du_functor_desc_map_pair_2_0
};

static const MR_DuPtagLayout mercury__pprint__pprint__du_ptag_ordered_map_pair_2[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__pprint__pprint__du_stag_ordered_map_pair_2_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__pprint____Unify____map_pair_2_0_10001)),
  ((MR_Box) (mercury__pprint____Compare____map_pair_2_0_10001)),
  (MR_String) "pprint",
  (MR_String) "map_pair",
  {     mercury__pprint__pprint__du_name_ordered_map_pair_2 },
  {     mercury__pprint__pprint__du_ptag_ordered_map_pair_2 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__pprint__pprint__functor_number_map_map_pair_2
};

const MR_BaseTypeclassInfo base_typeclass_info_pprint__doc__arity1__character__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (mercury__pprint__ClassMethod_for_pprint__doc____character__arity0______pprint__doc_2_2_f_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_pprint__doc__arity1__float__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (mercury__pprint__ClassMethod_for_pprint__doc____float__arity0______pprint__doc_2_2_f_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_pprint__doc__arity1__int__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (mercury__pprint__ClassMethod_for_pprint__doc____int__arity0______pprint__doc_2_2_f_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_pprint__doc__arity1__uint__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (mercury__pprint__ClassMethod_for_pprint__doc____uint__arity0______pprint__doc_2_2_f_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_pprint__doc__arity1__string__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (mercury__pprint__ClassMethod_for_pprint__doc____string__arity0______pprint__doc_2_2_f_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_pprint__doc__arity1__pprint__doc__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
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
  MR_Integer mercury__pprint__HeadVar__1_4,
  MR_Word mercury__pprint__Doc_5)
{
  {
    MR_Word mercury__pprint__Doc_3;

    {
      mercury__pprint__Doc_3 = mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_112_114_105_110_116_95_95_100_111_99_95_95_95_95_112_112_114_105_110_116_95_95_100_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_112_114_105_110_116_95_95_100_111_99_95_50_95_95_91_49_93_95_48_2_f_0(mercury__pprint__Doc_5);
    }
    return mercury__pprint__Doc_3;
  }
}

MR_Word MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_112_114_105_110_116_95_95_100_111_99_95_95_95_95_112_112_114_105_110_116_95_95_100_111_99_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_112_114_105_110_116_95_95_100_111_99_95_50_95_95_91_49_93_95_48_2_f_0(
  MR_Word mercury__pprint__Doc_5)
{
  {
    MR_Word mercury__pprint__Doc_3 = mercury__pprint__Doc_5;

    return mercury__pprint__Doc_3;
  }
}

MR_Word MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____string__arity0______pprint__doc_2_2_f_0(
  MR_Integer mercury__pprint__HeadVar__1_4,
  MR_String mercury__pprint__String_5)
{
  {
    MR_Word mercury__pprint__HeadVar__3_3;

    {
      mercury__pprint__HeadVar__3_3 = mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_112_114_105_110_116_95_95_100_111_99_95_95_95_95_115_116_114_105_110_103_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_112_114_105_110_116_95_95_100_111_99_95_50_95_95_91_49_93_95_48_2_f_0(mercury__pprint__String_5);
    }
    return mercury__pprint__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_112_114_105_110_116_95_95_100_111_99_95_95_95_95_115_116_114_105_110_103_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_112_114_105_110_116_95_95_100_111_99_95_50_95_95_91_49_93_95_48_2_f_0(
  MR_String mercury__pprint__String_5)
{
  {
    MR_Word mercury__pprint__HeadVar__3_3;

    {
      mercury__pprint__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__3_3, 1) = ((MR_Box) (mercury__pprint__String_5));
    }
    return mercury__pprint__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____uint__arity0______pprint__doc_2_2_f_0(
  MR_Integer mercury__pprint__HeadVar__1_4,
  MR_Unsigned mercury__pprint__UInt_5)
{
  {
    MR_Word mercury__pprint__HeadVar__3_3;

    {
      mercury__pprint__HeadVar__3_3 = mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_112_114_105_110_116_95_95_100_111_99_95_95_95_95_117_105_110_116_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_112_114_105_110_116_95_95_100_111_99_95_50_95_95_91_49_93_95_48_2_f_0(mercury__pprint__UInt_5);
    }
    return mercury__pprint__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_112_114_105_110_116_95_95_100_111_99_95_95_95_95_117_105_110_116_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_112_114_105_110_116_95_95_100_111_99_95_50_95_95_91_49_93_95_48_2_f_0(
  MR_Unsigned mercury__pprint__UInt_5)
{
  {
    MR_Word mercury__pprint__HeadVar__3_3;
    MR_String mercury__pprint__Var_6;

{
#define MR_PROC_LABEL mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_112_114_105_110_116_95_95_100_111_99_95_95_95_95_117_105_110_116_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_112_114_105_110_116_95_95_100_111_99_95_50_95_95_91_49_93_95_48_2_f_0

	MR_Unsigned U;
	MR_String Str;

	U =  mercury__pprint__UInt_5 ;
		{

    char buffer[21];
    sprintf(buffer, "%" MR_INTEGER_LENGTH_MODIFIER "u", U);
    MR_allocate_aligned_string_msg(Str, strlen(buffer), MR_ALLOC_ID);
    strcpy(Str, buffer);


		;}
#undef MR_PROC_LABEL
	 mercury__pprint__Var_6  = Str;
}
    {
      mercury__pprint__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__3_3, 1) = ((MR_Box) (mercury__pprint__Var_6));
    }
    return mercury__pprint__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____int__arity0______pprint__doc_2_2_f_0(
  MR_Integer mercury__pprint__HeadVar__1_4,
  MR_Integer mercury__pprint__Int_5)
{
  {
    MR_Word mercury__pprint__HeadVar__3_3;

    {
      mercury__pprint__HeadVar__3_3 = mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_112_114_105_110_116_95_95_100_111_99_95_95_95_95_105_110_116_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_112_114_105_110_116_95_95_100_111_99_95_50_95_95_91_49_93_95_48_2_f_0(mercury__pprint__Int_5);
    }
    return mercury__pprint__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_112_114_105_110_116_95_95_100_111_99_95_95_95_95_105_110_116_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_112_114_105_110_116_95_95_100_111_99_95_50_95_95_91_49_93_95_48_2_f_0(
  MR_Integer mercury__pprint__Int_5)
{
  {
    MR_Word mercury__pprint__HeadVar__3_3;
    MR_Word mercury__pprint__Var_6;

    {
      mercury__pprint__Var_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__pprint__Var_6, 0) = ((MR_Box) (mercury__pprint__Int_5));
    }
    {
      mercury__pprint__HeadVar__3_3 = mercury__pprint__poly_1_f_0(mercury__pprint__Var_6);
    }
    return mercury__pprint__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____float__arity0______pprint__doc_2_2_f_0(
  MR_Integer mercury__pprint__HeadVar__1_4,
  MR_Float mercury__pprint__Float_5)
{
  {
    MR_Word mercury__pprint__HeadVar__3_3;

    {
      mercury__pprint__HeadVar__3_3 = mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_112_114_105_110_116_95_95_100_111_99_95_95_95_95_102_108_111_97_116_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_112_114_105_110_116_95_95_100_111_99_95_50_95_95_91_49_93_95_48_2_f_0(mercury__pprint__Float_5);
    }
    return mercury__pprint__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_112_114_105_110_116_95_95_100_111_99_95_95_95_95_102_108_111_97_116_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_112_114_105_110_116_95_95_100_111_99_95_50_95_95_91_49_93_95_48_2_f_0(
  MR_Float mercury__pprint__Float_5)
{
  {
    MR_Word mercury__pprint__HeadVar__3_3;
    MR_Word mercury__pprint__Var_6;

    {
      mercury__pprint__Var_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__pprint__Var_6, 0) = MR_box_float(mercury__pprint__Float_5);
    }
    {
      mercury__pprint__HeadVar__3_3 = mercury__pprint__poly_1_f_0(mercury__pprint__Var_6);
    }
    return mercury__pprint__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____character__arity0______pprint__doc_2_2_f_0(
  MR_Integer mercury__pprint__HeadVar__1_4,
  MR_Char mercury__pprint__Char_5)
{
  {
    MR_Word mercury__pprint__HeadVar__3_3;

    {
      mercury__pprint__HeadVar__3_3 = mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_112_114_105_110_116_95_95_100_111_99_95_95_95_95_99_104_97_114_97_99_116_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_112_114_105_110_116_95_95_100_111_99_95_50_95_95_91_49_93_95_48_2_f_0(mercury__pprint__Char_5);
    }
    return mercury__pprint__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_112_112_114_105_110_116_95_95_100_111_99_95_95_95_95_99_104_97_114_97_99_116_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_112_112_114_105_110_116_95_95_100_111_99_95_50_95_95_91_49_93_95_48_2_f_0(
  MR_Char mercury__pprint__Char_5)
{
  {
    MR_Word mercury__pprint__HeadVar__3_3;
    MR_Word mercury__pprint__Var_6;

    {
      mercury__pprint__Var_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), mercury__pprint__Var_6, 0) = ((MR_Box) (MR_Word) (mercury__pprint__Char_5));
    }
    {
      mercury__pprint__HeadVar__3_3 = mercury__pprint__poly_1_f_0(mercury__pprint__Var_6);
    }
    return mercury__pprint__HeadVar__3_3;
  }
}

void MR_CALL 
mercury__pprint____Compare____map_pair_2_0(
  MR_Word mercury__pprint__TypeInfo_for_K_11,
  MR_Word mercury__pprint__TypeInfo_for_V_12,
  MR_Word * mercury__pprint__HeadVar__1_1,
  MR_Word mercury__pprint__HeadVar__2_2,
  MR_Word mercury__pprint__HeadVar__3_3)
{
  {
    MR_bool mercury__pprint__succeeded;
    MR_Integer mercury__pprint__CastX_9 = (MR_Integer) mercury__pprint__HeadVar__2_2;
    MR_Integer mercury__pprint__CastY_10 = (MR_Integer) mercury__pprint__HeadVar__3_3;

    mercury__pprint__succeeded = (mercury__pprint__CastX_9 == mercury__pprint__CastY_10);
    if (mercury__pprint__succeeded)
      *mercury__pprint__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Box mercury__pprint__ArgX1_4 = (MR_hl_field(MR_mktag(0), mercury__pprint__HeadVar__2_2, (MR_Integer) 0));
        MR_Box mercury__pprint__ArgY1_5 = (MR_hl_field(MR_mktag(0), mercury__pprint__HeadVar__3_3, (MR_Integer) 0));
        MR_Box mercury__pprint__ArgX2_6 = (MR_hl_field(MR_mktag(0), mercury__pprint__HeadVar__2_2, (MR_Integer) 1));
        MR_Box mercury__pprint__ArgY2_7 = (MR_hl_field(MR_mktag(0), mercury__pprint__HeadVar__3_3, (MR_Integer) 1));
        MR_Word mercury__pprint__Var_8;

        {
          mercury__builtin__compare_3_p_0(mercury__pprint__TypeInfo_for_K_11, &mercury__pprint__Var_8, mercury__pprint__ArgX1_4, mercury__pprint__ArgY1_5);
        }
        mercury__pprint__succeeded = (mercury__pprint__Var_8 == (MR_Integer) 0);
        mercury__pprint__succeeded = !(mercury__pprint__succeeded);
        if (mercury__pprint__succeeded)
          *mercury__pprint__HeadVar__1_1 = mercury__pprint__Var_8;
        else
          {
            mercury__builtin__compare_3_p_0(mercury__pprint__TypeInfo_for_V_12, mercury__pprint__HeadVar__1_1, mercury__pprint__ArgX2_6, mercury__pprint__ArgY2_7);
          }
      }
  }
}

MR_bool MR_CALL 
mercury__pprint____Unify____map_pair_2_0(
  MR_Word mercury__pprint__TypeInfo_for_K_9,
  MR_Word mercury__pprint__TypeInfo_for_V_10,
  MR_Word mercury__pprint__HeadVar__1_1,
  MR_Word mercury__pprint__HeadVar__2_2)
{
  {
    MR_bool mercury__pprint__succeeded;
    MR_Integer mercury__pprint__CastX_7 = (MR_Integer) mercury__pprint__HeadVar__1_1;
    MR_Integer mercury__pprint__CastY_8 = (MR_Integer) mercury__pprint__HeadVar__2_2;

    mercury__pprint__succeeded = (mercury__pprint__CastX_7 == mercury__pprint__CastY_8);
    if (mercury__pprint__succeeded)
      mercury__pprint__succeeded = MR_TRUE;
    else
      {
        MR_Box mercury__pprint__ArgX1_3 = (MR_hl_field(MR_mktag(0), mercury__pprint__HeadVar__1_1, (MR_Integer) 0));
        MR_Box mercury__pprint__ArgY1_4 = (MR_hl_field(MR_mktag(0), mercury__pprint__HeadVar__2_2, (MR_Integer) 0));
        MR_Box mercury__pprint__ArgX2_5 = (MR_hl_field(MR_mktag(0), mercury__pprint__HeadVar__1_1, (MR_Integer) 1));
        MR_Box mercury__pprint__ArgY2_6 = (MR_hl_field(MR_mktag(0), mercury__pprint__HeadVar__2_2, (MR_Integer) 1));

        {
          mercury__pprint__succeeded = mercury__builtin__unify_2_p_0(mercury__pprint__TypeInfo_for_K_9, mercury__pprint__ArgX1_3, mercury__pprint__ArgY1_4);
        }
        if (mercury__pprint__succeeded)
          {
            mercury__pprint__succeeded = mercury__builtin__unify_2_p_0(mercury__pprint__TypeInfo_for_V_10, mercury__pprint__ArgX2_5, mercury__pprint__ArgY2_6);
          }
      }
    return mercury__pprint__succeeded;
  }
}

void MR_CALL 
mercury__pprint____Compare____doc_0_0(
  MR_Word * mercury__pprint__HeadVar__1_1,
  MR_Word mercury__pprint__HeadVar__2_2,
  MR_Word mercury__pprint__HeadVar__3_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__pprint__succeeded;
        MR_Integer mercury__pprint__CastX_168 = (MR_Integer) mercury__pprint__HeadVar__2_2;
        MR_Integer mercury__pprint__CastY_169 = (MR_Integer) mercury__pprint__HeadVar__3_3;

        mercury__pprint__succeeded = (mercury__pprint__CastX_168 == mercury__pprint__CastY_169);
        if (mercury__pprint__succeeded)
          *mercury__pprint__HeadVar__1_1 = (MR_Integer) 0;
        else
          switch (MR_tag((MR_Word) mercury__pprint__HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(mercury__pprint__HeadVar__2_2)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_tag((MR_Word) mercury__pprint__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      switch (MR_unmkbody(mercury__pprint__HeadVar__3_3)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          *mercury__pprint__HeadVar__1_1 = (MR_Integer) 0;
                          break;
                        case (MR_Integer) 1:
                          *mercury__pprint__HeadVar__1_1 = (MR_Integer) 1;
                          break;
                      }
                      break;
                    case (MR_Integer) 1:
                      *mercury__pprint__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 2:
                      *mercury__pprint__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 3:
                      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__3_3, (MR_Integer) 0)))) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          *mercury__pprint__HeadVar__1_1 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 1:
                          *mercury__pprint__HeadVar__1_1 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 2:
                          *mercury__pprint__HeadVar__1_1 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 3:
                          *mercury__pprint__HeadVar__1_1 = (MR_Integer) 1;
                          break;
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  switch (MR_tag((MR_Word) mercury__pprint__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      switch (MR_unmkbody(mercury__pprint__HeadVar__3_3)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          *mercury__pprint__HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 1:
                          *mercury__pprint__HeadVar__1_1 = (MR_Integer) 0;
                          break;
                      }
                      break;
                    case (MR_Integer) 1:
                      *mercury__pprint__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *mercury__pprint__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__3_3, (MR_Integer) 0)))) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          *mercury__pprint__HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 1:
                          *mercury__pprint__HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 2:
                          *mercury__pprint__HeadVar__1_1 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 3:
                          *mercury__pprint__HeadVar__1_1 = (MR_Integer) 1;
                          break;
                      }
                      break;
                  }
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word mercury__pprint__Var_187 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__2_2, (MR_Integer) 1)));
                MR_Word mercury__pprint__Var_188 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__2_2, (MR_Integer) 0)));

                switch (MR_tag((MR_Word) mercury__pprint__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(mercury__pprint__HeadVar__3_3)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *mercury__pprint__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *mercury__pprint__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word mercury__pprint__ArgY1_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__3_3, (MR_Integer) 0)));
                      MR_Word mercury__pprint__ArgY2_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__3_3, (MR_Integer) 1)));
                      MR_Word mercury__pprint__Var_20;

                      {
                        mercury__pprint____Compare____doc_0_0(&mercury__pprint__Var_20, mercury__pprint__Var_188, mercury__pprint__ArgY1_17);
                      }
                      mercury__pprint__succeeded = (mercury__pprint__Var_20 == (MR_Integer) 0);
                      mercury__pprint__succeeded = !(mercury__pprint__succeeded);
                      if (mercury__pprint__succeeded)
                        *mercury__pprint__HeadVar__1_1 = mercury__pprint__Var_20;
                      else
                        {
                          /* direct tailcall eliminated */
                          {
                            MR_Word mercury__pprint__next_value_of_HeadVar__2_2 = mercury__pprint__Var_187;
                            MR_Word mercury__pprint__next_value_of_HeadVar__3_3 = mercury__pprint__ArgY2_19;

                            mercury__pprint__HeadVar__3_3 = mercury__pprint__next_value_of_HeadVar__3_3;
                            mercury__pprint__HeadVar__2_2 = mercury__pprint__next_value_of_HeadVar__2_2;
                          }
                          continue;
                        }
                    }
                    break;
                  case (MR_Integer) 2:
                    *mercury__pprint__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *mercury__pprint__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 1:
                        *mercury__pprint__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 2:
                        *mercury__pprint__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 3:
                        *mercury__pprint__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word mercury__pprint__Var_185 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__pprint__HeadVar__2_2, (MR_Integer) 1)));
                MR_Integer mercury__pprint__Var_186 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__pprint__HeadVar__2_2, (MR_Integer) 0)));

                switch (MR_tag((MR_Word) mercury__pprint__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(mercury__pprint__HeadVar__3_3)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *mercury__pprint__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *mercury__pprint__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    *mercury__pprint__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Integer mercury__pprint__ArgY1_48 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__pprint__HeadVar__3_3, (MR_Integer) 0)));
                      MR_Word mercury__pprint__ArgY2_50 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__pprint__HeadVar__3_3, (MR_Integer) 1)));
                      MR_Word mercury__pprint__Var_51;

                      mercury__pprint__succeeded = (mercury__pprint__Var_186 < mercury__pprint__ArgY1_48);
                      if (mercury__pprint__succeeded)
                        mercury__pprint__Var_51 = (MR_Integer) 1;
                      else
                        {
                          mercury__pprint__succeeded = (mercury__pprint__Var_186 == mercury__pprint__ArgY1_48);
                          if (mercury__pprint__succeeded)
                            mercury__pprint__Var_51 = (MR_Integer) 0;
                          else
                            mercury__pprint__Var_51 = (MR_Integer) 2;
                        }
                      mercury__pprint__succeeded = (mercury__pprint__Var_51 == (MR_Integer) 0);
                      mercury__pprint__succeeded = !(mercury__pprint__succeeded);
                      if (mercury__pprint__succeeded)
                        *mercury__pprint__HeadVar__1_1 = mercury__pprint__Var_51;
                      else
                        {
                          /* direct tailcall eliminated */
                          {
                            MR_Word mercury__pprint__next_value_of_HeadVar__2_2 = mercury__pprint__Var_185;
                            MR_Word mercury__pprint__next_value_of_HeadVar__3_3 = mercury__pprint__ArgY2_50;

                            mercury__pprint__HeadVar__3_3 = mercury__pprint__next_value_of_HeadVar__3_3;
                            mercury__pprint__HeadVar__2_2 = mercury__pprint__next_value_of_HeadVar__2_2;
                          }
                          continue;
                        }
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *mercury__pprint__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 1:
                        *mercury__pprint__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 2:
                        *mercury__pprint__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 3:
                        *mercury__pprint__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__2_2, (MR_Integer) 0)))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word mercury__pprint__Var_183 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__2_2, (MR_Integer) 2)));
                    MR_String mercury__pprint__Var_184 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__2_2, (MR_Integer) 1)));

                    switch (MR_tag((MR_Word) mercury__pprint__HeadVar__3_3)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        switch (MR_unmkbody(mercury__pprint__HeadVar__3_3)) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            *mercury__pprint__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 1:
                            *mercury__pprint__HeadVar__1_1 = (MR_Integer) 1;
                            break;
                        }
                        break;
                      case (MR_Integer) 1:
                        *mercury__pprint__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        *mercury__pprint__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 3:
                        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__3_3, (MR_Integer) 0)))) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            {
                              MR_String mercury__pprint__ArgY1_79 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__3_3, (MR_Integer) 1)));
                              MR_Word mercury__pprint__ArgY2_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__3_3, (MR_Integer) 2)));
                              MR_Word mercury__pprint__Var_82;
                              MR_Integer mercury__pprint__V_7_196;

{
#define MR_PROC_LABEL mercury__pprint____Compare____doc_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__pprint__Var_184 ;
	S2 =  mercury__pprint__ArgY1_79 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_7_196  = Res;
}
                              mercury__pprint__succeeded = (mercury__pprint__V_7_196 < (MR_Integer) 0);
                              if (mercury__pprint__succeeded)
                                mercury__pprint__Var_82 = (MR_Integer) 1;
                              else
                                {
                                  mercury__pprint__succeeded = (mercury__pprint__V_7_196 == (MR_Integer) 0);
                                  if (mercury__pprint__succeeded)
                                    mercury__pprint__Var_82 = (MR_Integer) 0;
                                  else
                                    mercury__pprint__Var_82 = (MR_Integer) 2;
                                }
                              mercury__pprint__succeeded = (mercury__pprint__Var_82 == (MR_Integer) 0);
                              mercury__pprint__succeeded = !(mercury__pprint__succeeded);
                              if (mercury__pprint__succeeded)
                                *mercury__pprint__HeadVar__1_1 = mercury__pprint__Var_82;
                              else
                                {
                                  /* direct tailcall eliminated */
                                  {
                                    MR_Word mercury__pprint__next_value_of_HeadVar__2_2 = mercury__pprint__Var_183;
                                    MR_Word mercury__pprint__next_value_of_HeadVar__3_3 = mercury__pprint__ArgY2_81;

                                    mercury__pprint__HeadVar__3_3 = mercury__pprint__next_value_of_HeadVar__3_3;
                                    mercury__pprint__HeadVar__2_2 = mercury__pprint__next_value_of_HeadVar__2_2;
                                  }
                                  continue;
                                }
                            }
                            break;
                          case (MR_Integer) 1:
                            *mercury__pprint__HeadVar__1_1 = (MR_Integer) 1;
                            break;
                          case (MR_Integer) 2:
                            *mercury__pprint__HeadVar__1_1 = (MR_Integer) 1;
                            break;
                          case (MR_Integer) 3:
                            *mercury__pprint__HeadVar__1_1 = (MR_Integer) 1;
                            break;
                        }
                        break;
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_String mercury__pprint__Var_189 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__2_2, (MR_Integer) 1)));

                    switch (MR_tag((MR_Word) mercury__pprint__HeadVar__3_3)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        switch (MR_unmkbody(mercury__pprint__HeadVar__3_3)) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            *mercury__pprint__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 1:
                            *mercury__pprint__HeadVar__1_1 = (MR_Integer) 1;
                            break;
                        }
                        break;
                      case (MR_Integer) 1:
                        *mercury__pprint__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        *mercury__pprint__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 3:
                        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__3_3, (MR_Integer) 0)))) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            *mercury__pprint__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 1:
                            {
                              MR_String mercury__pprint__ArgY1_106 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__3_3, (MR_Integer) 1)));
                              MR_Integer mercury__pprint__V_7_204;

{
#define MR_PROC_LABEL mercury__pprint____Compare____doc_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__pprint__Var_189 ;
	S2 =  mercury__pprint__ArgY1_106 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_7_204  = Res;
}
                              mercury__pprint__succeeded = (mercury__pprint__V_7_204 < (MR_Integer) 0);
                              if (mercury__pprint__succeeded)
                                *mercury__pprint__HeadVar__1_1 = (MR_Integer) 1;
                              else
                                {
                                  mercury__pprint__succeeded = (mercury__pprint__V_7_204 == (MR_Integer) 0);
                                  if (mercury__pprint__succeeded)
                                    *mercury__pprint__HeadVar__1_1 = (MR_Integer) 0;
                                  else
                                    *mercury__pprint__HeadVar__1_1 = (MR_Integer) 2;
                                }
                            }
                            break;
                          case (MR_Integer) 2:
                            *mercury__pprint__HeadVar__1_1 = (MR_Integer) 1;
                            break;
                          case (MR_Integer) 3:
                            *mercury__pprint__HeadVar__1_1 = (MR_Integer) 1;
                            break;
                        }
                        break;
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word mercury__pprint__Var_182 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__2_2, (MR_Integer) 1)));

                    switch (MR_tag((MR_Word) mercury__pprint__HeadVar__3_3)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        switch (MR_unmkbody(mercury__pprint__HeadVar__3_3)) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            *mercury__pprint__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 1:
                            *mercury__pprint__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                        }
                        break;
                      case (MR_Integer) 1:
                        *mercury__pprint__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        *mercury__pprint__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 3:
                        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__3_3, (MR_Integer) 0)))) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            *mercury__pprint__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 1:
                            *mercury__pprint__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 2:
                            {
                              MR_Word mercury__pprint__ArgY1_137 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__3_3, (MR_Integer) 1)));

                              /* direct tailcall eliminated */
                              {
                                MR_Word mercury__pprint__next_value_of_HeadVar__2_2 = mercury__pprint__Var_182;
                                MR_Word mercury__pprint__next_value_of_HeadVar__3_3 = mercury__pprint__ArgY1_137;

                                mercury__pprint__HeadVar__3_3 = mercury__pprint__next_value_of_HeadVar__3_3;
                                mercury__pprint__HeadVar__2_2 = mercury__pprint__next_value_of_HeadVar__2_2;
                              }
                              continue;
                            }
                            break;
                          case (MR_Integer) 3:
                            *mercury__pprint__HeadVar__1_1 = (MR_Integer) 1;
                            break;
                        }
                        break;
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Word mercury__pprint__Var_180 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__2_2, (MR_Integer) 2)));
                    MR_Integer mercury__pprint__Var_181 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__2_2, (MR_Integer) 1)));

                    switch (MR_tag((MR_Word) mercury__pprint__HeadVar__3_3)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        switch (MR_unmkbody(mercury__pprint__HeadVar__3_3)) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            *mercury__pprint__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 1:
                            *mercury__pprint__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                        }
                        break;
                      case (MR_Integer) 1:
                        *mercury__pprint__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        *mercury__pprint__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 3:
                        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__3_3, (MR_Integer) 0)))) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            *mercury__pprint__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 1:
                            *mercury__pprint__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 2:
                            *mercury__pprint__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 3:
                            {
                              MR_Integer mercury__pprint__ArgY1_164 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__3_3, (MR_Integer) 1)));
                              MR_Word mercury__pprint__ArgY2_166 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__3_3, (MR_Integer) 2)));
                              MR_Word mercury__pprint__Var_167;

                              mercury__pprint__succeeded = (mercury__pprint__Var_181 < mercury__pprint__ArgY1_164);
                              if (mercury__pprint__succeeded)
                                mercury__pprint__Var_167 = (MR_Integer) 1;
                              else
                                {
                                  mercury__pprint__succeeded = (mercury__pprint__Var_181 == mercury__pprint__ArgY1_164);
                                  if (mercury__pprint__succeeded)
                                    mercury__pprint__Var_167 = (MR_Integer) 0;
                                  else
                                    mercury__pprint__Var_167 = (MR_Integer) 2;
                                }
                              mercury__pprint__succeeded = (mercury__pprint__Var_167 == (MR_Integer) 0);
                              mercury__pprint__succeeded = !(mercury__pprint__succeeded);
                              if (mercury__pprint__succeeded)
                                *mercury__pprint__HeadVar__1_1 = mercury__pprint__Var_167;
                              else
                                {
                                  mercury__univ____Compare____univ_0_0(mercury__pprint__HeadVar__1_1, mercury__pprint__Var_180, mercury__pprint__ArgY2_166);
                                }
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
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__pprint____Unify____doc_0_0(
  MR_Word mercury__pprint__HeadVar__1_1,
  MR_Word mercury__pprint__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__pprint__succeeded;
        MR_Integer mercury__pprint__CastX_27 = (MR_Integer) mercury__pprint__HeadVar__1_1;
        MR_Integer mercury__pprint__CastY_28 = (MR_Integer) mercury__pprint__HeadVar__2_2;

        mercury__pprint__succeeded = (mercury__pprint__CastX_27 == mercury__pprint__CastY_28);
        if (mercury__pprint__succeeded)
          mercury__pprint__succeeded = MR_TRUE;
        else
          switch (MR_tag((MR_Word) mercury__pprint__HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(mercury__pprint__HeadVar__1_1)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Integer mercury__pprint__CastX_3 = (MR_Integer) mercury__pprint__HeadVar__1_1;
                    MR_Integer mercury__pprint__CastY_4 = (MR_Integer) mercury__pprint__HeadVar__2_2;

                    mercury__pprint__succeeded = (mercury__pprint__CastY_4 == mercury__pprint__CastX_3);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Integer mercury__pprint__CastX_19 = (MR_Integer) mercury__pprint__HeadVar__1_1;
                    MR_Integer mercury__pprint__CastY_20 = (MR_Integer) mercury__pprint__HeadVar__2_2;

                    mercury__pprint__succeeded = (mercury__pprint__CastY_20 == mercury__pprint__CastX_19);
                  }
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word mercury__pprint__ArgX1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__1_1, (MR_Integer) 0)));
                MR_Word mercury__pprint__ArgY1_6;
                MR_Word mercury__pprint__ArgX2_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word mercury__pprint__ArgY2_8;

                mercury__pprint__succeeded = ((MR_tag((MR_Word) mercury__pprint__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
                if (mercury__pprint__succeeded)
                  {
                    mercury__pprint__ArgY1_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__2_2, (MR_Integer) 0)));
                    mercury__pprint__ArgY2_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__2_2, (MR_Integer) 1)));
                    {
                      mercury__pprint__succeeded = mercury__pprint____Unify____doc_0_0(mercury__pprint__ArgX1_5, mercury__pprint__ArgY1_6);
                    }
                    if (mercury__pprint__succeeded)
                      {
                        /* direct tailcall eliminated */
                        {
                          MR_Word mercury__pprint__next_value_of_HeadVar__1_1 = mercury__pprint__ArgX2_7;
                          MR_Word mercury__pprint__next_value_of_HeadVar__2_2 = mercury__pprint__ArgY2_8;

                          mercury__pprint__HeadVar__2_2 = mercury__pprint__next_value_of_HeadVar__2_2;
                          mercury__pprint__HeadVar__1_1 = mercury__pprint__next_value_of_HeadVar__1_1;
                        }
                        continue;
                      }
                  }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Integer mercury__pprint__ArgX1_9 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__pprint__HeadVar__1_1, (MR_Integer) 0)));
                MR_Integer mercury__pprint__ArgY1_10;
                MR_Word mercury__pprint__ArgX2_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__pprint__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word mercury__pprint__ArgY2_12;

                mercury__pprint__succeeded = ((MR_tag((MR_Word) mercury__pprint__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
                if (mercury__pprint__succeeded)
                  {
                    mercury__pprint__ArgY1_10 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__pprint__HeadVar__2_2, (MR_Integer) 0)));
                    mercury__pprint__ArgY2_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__pprint__HeadVar__2_2, (MR_Integer) 1)));
                    mercury__pprint__succeeded = (mercury__pprint__ArgX1_9 == mercury__pprint__ArgY1_10);
                    if (mercury__pprint__succeeded)
                      {
                        /* direct tailcall eliminated */
                        {
                          MR_Word mercury__pprint__next_value_of_HeadVar__1_1 = mercury__pprint__ArgX2_11;
                          MR_Word mercury__pprint__next_value_of_HeadVar__2_2 = mercury__pprint__ArgY2_12;

                          mercury__pprint__HeadVar__2_2 = mercury__pprint__next_value_of_HeadVar__2_2;
                          mercury__pprint__HeadVar__1_1 = mercury__pprint__next_value_of_HeadVar__1_1;
                        }
                        continue;
                      }
                  }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__1_1, (MR_Integer) 0)))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_String mercury__pprint__ArgX1_13 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__1_1, (MR_Integer) 1)));
                    MR_String mercury__pprint__ArgY1_14;
                    MR_Word mercury__pprint__ArgX2_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__1_1, (MR_Integer) 2)));
                    MR_Word mercury__pprint__ArgY2_16;

                    mercury__pprint__succeeded = ((((MR_tag((MR_Word) mercury__pprint__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                    if (mercury__pprint__succeeded)
                      {
                        mercury__pprint__ArgY1_14 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__2_2, (MR_Integer) 1)));
                        mercury__pprint__ArgY2_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__2_2, (MR_Integer) 2)));
                        mercury__pprint__succeeded = (strcmp(mercury__pprint__ArgX1_13, mercury__pprint__ArgY1_14) == 0);
                        if (mercury__pprint__succeeded)
                          {
                            /* direct tailcall eliminated */
                            {
                              MR_Word mercury__pprint__next_value_of_HeadVar__1_1 = mercury__pprint__ArgX2_15;
                              MR_Word mercury__pprint__next_value_of_HeadVar__2_2 = mercury__pprint__ArgY2_16;

                              mercury__pprint__HeadVar__2_2 = mercury__pprint__next_value_of_HeadVar__2_2;
                              mercury__pprint__HeadVar__1_1 = mercury__pprint__next_value_of_HeadVar__1_1;
                            }
                            continue;
                          }
                      }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_String mercury__pprint__ArgX1_17 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__1_1, (MR_Integer) 1)));
                    MR_String mercury__pprint__ArgY1_18;

                    mercury__pprint__succeeded = ((((MR_tag((MR_Word) mercury__pprint__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                    if (mercury__pprint__succeeded)
                      {
                        mercury__pprint__ArgY1_18 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__2_2, (MR_Integer) 1)));
                        mercury__pprint__succeeded = (strcmp(mercury__pprint__ArgX1_17, mercury__pprint__ArgY1_18) == 0);
                      }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word mercury__pprint__ArgX1_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__1_1, (MR_Integer) 1)));
                    MR_Word mercury__pprint__ArgY1_22;

                    mercury__pprint__succeeded = ((((MR_tag((MR_Word) mercury__pprint__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
                    if (mercury__pprint__succeeded)
                      {
                        mercury__pprint__ArgY1_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__2_2, (MR_Integer) 1)));
                        /* direct tailcall eliminated */
                        {
                          MR_Word mercury__pprint__next_value_of_HeadVar__1_1 = mercury__pprint__ArgX1_21;
                          MR_Word mercury__pprint__next_value_of_HeadVar__2_2 = mercury__pprint__ArgY1_22;

                          mercury__pprint__HeadVar__2_2 = mercury__pprint__next_value_of_HeadVar__2_2;
                          mercury__pprint__HeadVar__1_1 = mercury__pprint__next_value_of_HeadVar__1_1;
                        }
                        continue;
                      }
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Integer mercury__pprint__ArgX1_23 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__1_1, (MR_Integer) 1)));
                    MR_Integer mercury__pprint__ArgY1_24;
                    MR_Word mercury__pprint__ArgX2_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__1_1, (MR_Integer) 2)));
                    MR_Word mercury__pprint__ArgY2_26;

                    mercury__pprint__succeeded = ((((MR_tag((MR_Word) mercury__pprint__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
                    if (mercury__pprint__succeeded)
                      {
                        mercury__pprint__ArgY1_24 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__2_2, (MR_Integer) 1)));
                        mercury__pprint__ArgY2_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__2_2, (MR_Integer) 2)));
                        mercury__pprint__succeeded = (mercury__pprint__ArgX1_23 == mercury__pprint__ArgY1_24);
                        if (mercury__pprint__succeeded)
                          {
                            mercury__pprint__succeeded = mercury__univ____Unify____univ_0_0(mercury__pprint__ArgX2_25, mercury__pprint__ArgY2_26);
                          }
                      }
                  }
                  break;
              }
              break;
          }
        return mercury__pprint__succeeded;
      }
      break;
    }
}

void MR_CALL 
mercury__pprint____Compare____depth_0_0(
  MR_Word * mercury__pprint__HeadVar__1_1,
  MR_Integer mercury__pprint__HeadVar__2_2,
  MR_Integer mercury__pprint__HeadVar__3_3)
{
  {
    MR_bool mercury__pprint__succeeded;
    MR_Integer mercury__pprint__Cast_HeadVar1_4 = mercury__pprint__HeadVar__2_2;
    MR_Integer mercury__pprint__Cast_HeadVar2_5 = mercury__pprint__HeadVar__3_3;

    mercury__pprint__succeeded = (mercury__pprint__Cast_HeadVar1_4 < mercury__pprint__Cast_HeadVar2_5);
    if (mercury__pprint__succeeded)
      *mercury__pprint__HeadVar__1_1 = (MR_Integer) 1;
    else
      {
        mercury__pprint__succeeded = (mercury__pprint__Cast_HeadVar1_4 == mercury__pprint__Cast_HeadVar2_5);
        if (mercury__pprint__succeeded)
          *mercury__pprint__HeadVar__1_1 = (MR_Integer) 0;
        else
          *mercury__pprint__HeadVar__1_1 = (MR_Integer) 2;
      }
  }
}

MR_bool MR_CALL 
mercury__pprint____Unify____depth_0_0(
  MR_Integer mercury__pprint__HeadVar__1_1,
  MR_Integer mercury__pprint__HeadVar__2_2)
{
  {
    MR_bool mercury__pprint__succeeded;
    MR_Integer mercury__pprint__Cast_HeadVar1_3 = mercury__pprint__HeadVar__1_1;
    MR_Integer mercury__pprint__Cast_HeadVar2_4 = mercury__pprint__HeadVar__2_2;

    mercury__pprint__succeeded = (mercury__pprint__Cast_HeadVar1_3 == mercury__pprint__Cast_HeadVar2_4);
    return mercury__pprint__succeeded;
  }
}

MR_Word MR_CALL 
mercury__pprint__doc_2_f_0(
  MR_Word mercury__pprint__TypeClassInfo_for_doc_4,
  MR_Integer mercury__pprint__HeadVar__1_1,
  MR_Box mercury__pprint__HeadVar__2_2)
{
  {
    MR_Word mercury__pprint__HeadVar__3_3;
    MR_Box MR_CALL (* mercury__pprint__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_4, (MR_Integer) 0)), (MR_Integer) 5)));
    MR_Box mercury__pprint__conv1_HeadVar__3_3;

    {
      mercury__pprint__conv1_HeadVar__3_3 = mercury__pprint__func_0(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_4), ((MR_Box) (mercury__pprint__HeadVar__1_1)), mercury__pprint__HeadVar__2_2);
    }
    mercury__pprint__HeadVar__3_3 = ((MR_Word) mercury__pprint__conv1_HeadVar__3_3);
    return mercury__pprint__HeadVar__3_3;
  }
}

void MR_CALL 
mercury__pprint__layout_best_5_p_1(
  MR_Word mercury__pprint__TypeInfo_for_T_14,
  MR_Word mercury__pprint__P_6,
  MR_Integer mercury__pprint__W_7,
  MR_Word mercury__pprint__X_8,
  MR_Box mercury__pprint__S0_9,
  MR_Box * mercury__pprint__S_10)
{
  {
    MR_Integer mercury__pprint__Var_11;

    {
      mercury__pprint__lb_8_p_1(mercury__pprint__TypeInfo_for_T_14, mercury__pprint__P_6, mercury__pprint__W_7, (MR_Integer) 0, &mercury__pprint__Var_11, (MR_String) "", mercury__pprint__X_8, mercury__pprint__S0_9, mercury__pprint__S_10);
    }
  }
}

void MR_CALL 
mercury__pprint__lb_8_p_1(
  MR_Word mercury__pprint__TypeInfo_for_T_83,
  MR_Word mercury__pprint__P_1,
  MR_Integer mercury__pprint__W_2,
  MR_Integer mercury__pprint__HeadVar__3_3,
  MR_Integer * mercury__pprint__K_4,
  MR_String mercury__pprint__I_5,
  MR_Word mercury__pprint__HeadVar__6_6,
  MR_Box mercury__pprint__HeadVar__7_7,
  MR_Box * mercury__pprint__S_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__pprint__succeeded;

        switch (MR_tag((MR_Word) mercury__pprint__HeadVar__6_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(mercury__pprint__HeadVar__6_6)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  *mercury__pprint__K_4 = mercury__pprint__HeadVar__3_3;
                  *mercury__pprint__S_8 = mercury__pprint__HeadVar__7_7;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Box mercury__pprint__S1_52;
                  void MR_CALL (* mercury__pprint__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
                  void MR_CALL (* mercury__pprint__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);

                  {
                    *mercury__pprint__K_4 = mercury__string__count_codepoints_1_f_0(mercury__pprint__I_5);
                  }
                  mercury__pprint__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__pprint__P_1, (MR_Integer) 1)));
                  {
                    mercury__pprint__func_0(((MR_Box) mercury__pprint__P_1), ((MR_Box) ((MR_String) "\n")), mercury__pprint__HeadVar__7_7, &mercury__pprint__S1_52);
                  }
                  mercury__pprint__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__pprint__P_1, (MR_Integer) 1)));
                  {
                    mercury__pprint__func_1(((MR_Box) mercury__pprint__P_1), ((MR_Box) (mercury__pprint__I_5)), mercury__pprint__S1_52, mercury__pprint__S_8);
                  }
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word mercury__pprint__X_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__6_6, (MR_Integer) 0)));
              MR_Word mercury__pprint__Y_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__6_6, (MR_Integer) 1)));
              MR_Integer mercury__pprint__K1_23;
              MR_Box mercury__pprint__S1_24;

              {
                mercury__pprint__lb_8_p_1(mercury__pprint__TypeInfo_for_T_83, mercury__pprint__P_1, mercury__pprint__W_2, mercury__pprint__HeadVar__3_3, &mercury__pprint__K1_23, mercury__pprint__I_5, mercury__pprint__X_19, mercury__pprint__HeadVar__7_7, &mercury__pprint__S1_24);
              }
              /* direct tailcall eliminated */
              {
                MR_Integer mercury__pprint__next_value_of_HeadVar__3_3 = mercury__pprint__K1_23;
                MR_Word mercury__pprint__next_value_of_HeadVar__6_6 = mercury__pprint__Y_20;
                MR_Box mercury__pprint__next_value_of_HeadVar__7_7 = mercury__pprint__S1_24;

                mercury__pprint__HeadVar__7_7 = mercury__pprint__next_value_of_HeadVar__7_7;
                mercury__pprint__HeadVar__6_6 = mercury__pprint__next_value_of_HeadVar__6_6;
                mercury__pprint__HeadVar__3_3 = mercury__pprint__next_value_of_HeadVar__3_3;
              }
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer mercury__pprint__J_30 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__pprint__HeadVar__6_6, (MR_Integer) 0)));
              MR_Word mercury__pprint__X_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__pprint__HeadVar__6_6, (MR_Integer) 1)));
              MR_String mercury__pprint__Var_34;

              {
                mercury__pprint__Var_34 = mercury__pprint__extend_2_f_0(mercury__pprint__I_5, mercury__pprint__J_30);
              }
              /* direct tailcall eliminated */
              {
                MR_String mercury__pprint__next_value_of_I_5 = mercury__pprint__Var_34;
                MR_Word mercury__pprint__next_value_of_HeadVar__6_6 = mercury__pprint__X_31;

                mercury__pprint__HeadVar__6_6 = mercury__pprint__next_value_of_HeadVar__6_6;
                mercury__pprint__I_5 = mercury__pprint__next_value_of_I_5;
              }
              continue;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__6_6, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_String mercury__pprint__L_40 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__6_6, (MR_Integer) 1)));
                  MR_Word mercury__pprint__X_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__6_6, (MR_Integer) 2)));
                  MR_String mercury__pprint__Var_44;

                  {
                    mercury__string__append_3_p_2(mercury__pprint__I_5, mercury__pprint__L_40, &mercury__pprint__Var_44);
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_String mercury__pprint__next_value_of_I_5 = mercury__pprint__Var_44;
                    MR_Word mercury__pprint__next_value_of_HeadVar__6_6 = mercury__pprint__X_41;

                    mercury__pprint__HeadVar__6_6 = mercury__pprint__next_value_of_HeadVar__6_6;
                    mercury__pprint__I_5 = mercury__pprint__next_value_of_I_5;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_String mercury__pprint__T_79 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__6_6, (MR_Integer) 1)));
                  MR_Integer mercury__pprint__Var_82;
                  void MR_CALL (* mercury__pprint__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);

                  {
                    mercury__pprint__Var_82 = mercury__string__count_codepoints_1_f_0(mercury__pprint__T_79);
                  }
                  *mercury__pprint__K_4 = (mercury__pprint__HeadVar__3_3 + mercury__pprint__Var_82);
                  mercury__pprint__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__pprint__P_1, (MR_Integer) 1)));
                  {
                    mercury__pprint__func_2(((MR_Box) mercury__pprint__P_1), ((MR_Box) (mercury__pprint__T_79)), mercury__pprint__HeadVar__7_7, mercury__pprint__S_8);
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word mercury__pprint__X_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__6_6, (MR_Integer) 1)));
                  MR_Integer mercury__pprint__Var_62 = (mercury__pprint__W_2 - mercury__pprint__HeadVar__3_3);
                  MR_Integer mercury__pprint__Var_91;

                  {
                    mercury__pprint__succeeded = mercury__pprint__ff_2_f_0(mercury__pprint__X_59, mercury__pprint__Var_62, &mercury__pprint__Var_91);
                  }
                  if (mercury__pprint__succeeded)
                    {
                      mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_91_49_93_95_49_6_p_1(mercury__pprint__P_1, mercury__pprint__HeadVar__3_3, mercury__pprint__K_4, mercury__pprint__X_59, mercury__pprint__HeadVar__7_7, mercury__pprint__S_8);
                    }
                  else
                    {
                      /* direct tailcall eliminated */
                      {
                        MR_Word mercury__pprint__next_value_of_HeadVar__6_6 = mercury__pprint__X_59;

                        mercury__pprint__HeadVar__6_6 = mercury__pprint__next_value_of_HeadVar__6_6;
                      }
                      continue;
                    }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word mercury__pprint__TypeInfo_84_84;
                  MR_Integer mercury__pprint__D_68 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__6_6, (MR_Integer) 1)));
                  MR_Word mercury__pprint__U_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__6_6, (MR_Integer) 2)));
                  MR_Word mercury__pprint__Var_72;
                  MR_Box mercury__pprint__Var_73;

                  mercury__pprint__TypeInfo_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__pprint__U_69, (MR_Integer) 0)));
                  mercury__pprint__Var_73 = (MR_hl_field(MR_mktag(0), mercury__pprint__U_69, (MR_Integer) 1));
                  {
                    mercury__pprint__Var_72 = mercury__pprint__to_doc_3_f_0(mercury__pprint__TypeInfo_84_84, mercury__pprint__D_68, (MR_Integer) 1000, mercury__pprint__Var_73);
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word mercury__pprint__next_value_of_HeadVar__6_6 = mercury__pprint__Var_72;

                    mercury__pprint__HeadVar__6_6 = mercury__pprint__next_value_of_HeadVar__6_6;
                  }
                  continue;
                }
                break;
            }
            break;
        }
      }
      break;
    }
}

static void MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_91_49_93_95_49_6_p_1(
  MR_Word mercury__pprint__P_1,
  MR_Integer mercury__pprint__HeadVar__2_2,
  MR_Integer * mercury__pprint__K_3,
  MR_Word mercury__pprint__HeadVar__4_4,
  MR_Box mercury__pprint__HeadVar__5_5,
  MR_Box * mercury__pprint__S_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      switch (MR_tag((MR_Word) mercury__pprint__HeadVar__4_4)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(mercury__pprint__HeadVar__4_4)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                *mercury__pprint__K_3 = mercury__pprint__HeadVar__2_2;
                *mercury__pprint__S_6 = mercury__pprint__HeadVar__5_5;
              }
              break;
            case (MR_Integer) 1:
              {
                *mercury__pprint__K_3 = mercury__pprint__HeadVar__2_2;
                *mercury__pprint__S_6 = mercury__pprint__HeadVar__5_5;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word mercury__pprint__X_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__4_4, (MR_Integer) 0)));
            MR_Word mercury__pprint__Y_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__4_4, (MR_Integer) 1)));
            MR_Integer mercury__pprint__K1_17;
            MR_Box mercury__pprint__S1_18;

            {
              mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_91_49_93_95_49_6_p_1(mercury__pprint__P_1, mercury__pprint__HeadVar__2_2, &mercury__pprint__K1_17, mercury__pprint__X_13, mercury__pprint__HeadVar__5_5, &mercury__pprint__S1_18);
            }
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__pprint__next_value_of_HeadVar__2_2 = mercury__pprint__K1_17;
              MR_Word mercury__pprint__next_value_of_HeadVar__4_4 = mercury__pprint__Y_14;
              MR_Box mercury__pprint__next_value_of_HeadVar__5_5 = mercury__pprint__S1_18;

              mercury__pprint__HeadVar__5_5 = mercury__pprint__next_value_of_HeadVar__5_5;
              mercury__pprint__HeadVar__4_4 = mercury__pprint__next_value_of_HeadVar__4_4;
              mercury__pprint__HeadVar__2_2 = mercury__pprint__next_value_of_HeadVar__2_2;
            }
            continue;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word mercury__pprint__X_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__pprint__HeadVar__4_4, (MR_Integer) 1)));
            MR_Integer mercury__pprint__Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__pprint__HeadVar__4_4, (MR_Integer) 0)));

            /* direct tailcall eliminated */
            {
              MR_Word mercury__pprint__next_value_of_HeadVar__4_4 = mercury__pprint__X_23;

              mercury__pprint__HeadVar__4_4 = mercury__pprint__next_value_of_HeadVar__4_4;
            }
            continue;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__4_4, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word mercury__pprint__X_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__4_4, (MR_Integer) 2)));
                MR_String mercury__pprint__Var_29 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__4_4, (MR_Integer) 1)));

                /* direct tailcall eliminated */
                {
                  MR_Word mercury__pprint__next_value_of_HeadVar__4_4 = mercury__pprint__X_30;

                  mercury__pprint__HeadVar__4_4 = mercury__pprint__next_value_of_HeadVar__4_4;
                }
                continue;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_String mercury__pprint__T_54 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__4_4, (MR_Integer) 1)));
                MR_Integer mercury__pprint__Var_57;
                void MR_CALL (* mercury__pprint__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

                {
                  mercury__string__count_codepoints_2_p_0(mercury__pprint__T_54, &mercury__pprint__Var_57);
                }
                *mercury__pprint__K_3 = (mercury__pprint__HeadVar__2_2 + mercury__pprint__Var_57);
                mercury__pprint__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__pprint__P_1, (MR_Integer) 1)));
                {
                  mercury__pprint__func_0(((MR_Box) mercury__pprint__P_1), ((MR_Box) (mercury__pprint__T_54)), mercury__pprint__HeadVar__5_5, mercury__pprint__S_6);
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word mercury__pprint__X_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__4_4, (MR_Integer) 1)));

                /* direct tailcall eliminated */
                {
                  MR_Word mercury__pprint__next_value_of_HeadVar__4_4 = mercury__pprint__X_39;

                  mercury__pprint__HeadVar__4_4 = mercury__pprint__next_value_of_HeadVar__4_4;
                }
                continue;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word mercury__pprint__TypeInfo_59_59;
                MR_Integer mercury__pprint__D_45 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__4_4, (MR_Integer) 1)));
                MR_Word mercury__pprint__U_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__4_4, (MR_Integer) 2)));
                MR_Word mercury__pprint__Var_49;
                MR_Box mercury__pprint__Var_50;

                mercury__pprint__TypeInfo_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__pprint__U_46, (MR_Integer) 0)));
                mercury__pprint__Var_50 = (MR_hl_field(MR_mktag(0), mercury__pprint__U_46, (MR_Integer) 1));
                {
                  mercury__pprint__Var_49 = mercury__pprint__to_doc_3_f_0(mercury__pprint__TypeInfo_59_59, mercury__pprint__D_45, (MR_Integer) 1000, mercury__pprint__Var_50);
                }
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__pprint__next_value_of_HeadVar__4_4 = mercury__pprint__Var_49;

                  mercury__pprint__HeadVar__4_4 = mercury__pprint__next_value_of_HeadVar__4_4;
                }
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
  MR_Word mercury__pprint__TypeInfo_for_T_14,
  MR_Word mercury__pprint__P_6,
  MR_Integer mercury__pprint__W_7,
  MR_Word mercury__pprint__X_8,
  MR_Box mercury__pprint__S0_9,
  MR_Box * mercury__pprint__S_10)
{
  {
    MR_Integer mercury__pprint__Var_11;

    {
      mercury__pprint__lb_8_p_0(mercury__pprint__TypeInfo_for_T_14, mercury__pprint__P_6, mercury__pprint__W_7, (MR_Integer) 0, &mercury__pprint__Var_11, (MR_String) "", mercury__pprint__X_8, mercury__pprint__S0_9, mercury__pprint__S_10);
    }
  }
}

void MR_CALL 
mercury__pprint__lb_8_p_0(
  MR_Word mercury__pprint__TypeInfo_for_T_83,
  MR_Word mercury__pprint__P_1,
  MR_Integer mercury__pprint__W_2,
  MR_Integer mercury__pprint__HeadVar__3_3,
  MR_Integer * mercury__pprint__K_4,
  MR_String mercury__pprint__I_5,
  MR_Word mercury__pprint__HeadVar__6_6,
  MR_Box mercury__pprint__HeadVar__7_7,
  MR_Box * mercury__pprint__S_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__pprint__succeeded;

        switch (MR_tag((MR_Word) mercury__pprint__HeadVar__6_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(mercury__pprint__HeadVar__6_6)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  *mercury__pprint__K_4 = mercury__pprint__HeadVar__3_3;
                  *mercury__pprint__S_8 = mercury__pprint__HeadVar__7_7;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Box mercury__pprint__S1_52;
                  void MR_CALL (* mercury__pprint__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
                  void MR_CALL (* mercury__pprint__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);

                  {
                    *mercury__pprint__K_4 = mercury__string__count_codepoints_1_f_0(mercury__pprint__I_5);
                  }
                  mercury__pprint__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__pprint__P_1, (MR_Integer) 1)));
                  {
                    mercury__pprint__func_0(((MR_Box) mercury__pprint__P_1), ((MR_Box) ((MR_String) "\n")), mercury__pprint__HeadVar__7_7, &mercury__pprint__S1_52);
                  }
                  mercury__pprint__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__pprint__P_1, (MR_Integer) 1)));
                  {
                    mercury__pprint__func_1(((MR_Box) mercury__pprint__P_1), ((MR_Box) (mercury__pprint__I_5)), mercury__pprint__S1_52, mercury__pprint__S_8);
                  }
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word mercury__pprint__X_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__6_6, (MR_Integer) 0)));
              MR_Word mercury__pprint__Y_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__6_6, (MR_Integer) 1)));
              MR_Integer mercury__pprint__K1_23;
              MR_Box mercury__pprint__S1_24;

              {
                mercury__pprint__lb_8_p_0(mercury__pprint__TypeInfo_for_T_83, mercury__pprint__P_1, mercury__pprint__W_2, mercury__pprint__HeadVar__3_3, &mercury__pprint__K1_23, mercury__pprint__I_5, mercury__pprint__X_19, mercury__pprint__HeadVar__7_7, &mercury__pprint__S1_24);
              }
              /* direct tailcall eliminated */
              {
                MR_Integer mercury__pprint__next_value_of_HeadVar__3_3 = mercury__pprint__K1_23;
                MR_Word mercury__pprint__next_value_of_HeadVar__6_6 = mercury__pprint__Y_20;
                MR_Box mercury__pprint__next_value_of_HeadVar__7_7 = mercury__pprint__S1_24;

                mercury__pprint__HeadVar__7_7 = mercury__pprint__next_value_of_HeadVar__7_7;
                mercury__pprint__HeadVar__6_6 = mercury__pprint__next_value_of_HeadVar__6_6;
                mercury__pprint__HeadVar__3_3 = mercury__pprint__next_value_of_HeadVar__3_3;
              }
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer mercury__pprint__J_30 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__pprint__HeadVar__6_6, (MR_Integer) 0)));
              MR_Word mercury__pprint__X_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__pprint__HeadVar__6_6, (MR_Integer) 1)));
              MR_String mercury__pprint__Var_34;

              {
                mercury__pprint__Var_34 = mercury__pprint__extend_2_f_0(mercury__pprint__I_5, mercury__pprint__J_30);
              }
              /* direct tailcall eliminated */
              {
                MR_String mercury__pprint__next_value_of_I_5 = mercury__pprint__Var_34;
                MR_Word mercury__pprint__next_value_of_HeadVar__6_6 = mercury__pprint__X_31;

                mercury__pprint__HeadVar__6_6 = mercury__pprint__next_value_of_HeadVar__6_6;
                mercury__pprint__I_5 = mercury__pprint__next_value_of_I_5;
              }
              continue;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__6_6, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_String mercury__pprint__L_40 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__6_6, (MR_Integer) 1)));
                  MR_Word mercury__pprint__X_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__6_6, (MR_Integer) 2)));
                  MR_String mercury__pprint__Var_44;

                  {
                    mercury__string__append_3_p_2(mercury__pprint__I_5, mercury__pprint__L_40, &mercury__pprint__Var_44);
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_String mercury__pprint__next_value_of_I_5 = mercury__pprint__Var_44;
                    MR_Word mercury__pprint__next_value_of_HeadVar__6_6 = mercury__pprint__X_41;

                    mercury__pprint__HeadVar__6_6 = mercury__pprint__next_value_of_HeadVar__6_6;
                    mercury__pprint__I_5 = mercury__pprint__next_value_of_I_5;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_String mercury__pprint__T_79 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__6_6, (MR_Integer) 1)));
                  MR_Integer mercury__pprint__Var_82;
                  void MR_CALL (* mercury__pprint__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);

                  {
                    mercury__pprint__Var_82 = mercury__string__count_codepoints_1_f_0(mercury__pprint__T_79);
                  }
                  *mercury__pprint__K_4 = (mercury__pprint__HeadVar__3_3 + mercury__pprint__Var_82);
                  mercury__pprint__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__pprint__P_1, (MR_Integer) 1)));
                  {
                    mercury__pprint__func_2(((MR_Box) mercury__pprint__P_1), ((MR_Box) (mercury__pprint__T_79)), mercury__pprint__HeadVar__7_7, mercury__pprint__S_8);
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word mercury__pprint__X_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__6_6, (MR_Integer) 1)));
                  MR_Integer mercury__pprint__Var_62 = (mercury__pprint__W_2 - mercury__pprint__HeadVar__3_3);
                  MR_Integer mercury__pprint__Var_91;

                  {
                    mercury__pprint__succeeded = mercury__pprint__ff_2_f_0(mercury__pprint__X_59, mercury__pprint__Var_62, &mercury__pprint__Var_91);
                  }
                  if (mercury__pprint__succeeded)
                    {
                      mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_91_49_93_95_48_6_p_0(mercury__pprint__P_1, mercury__pprint__HeadVar__3_3, mercury__pprint__K_4, mercury__pprint__X_59, mercury__pprint__HeadVar__7_7, mercury__pprint__S_8);
                    }
                  else
                    {
                      /* direct tailcall eliminated */
                      {
                        MR_Word mercury__pprint__next_value_of_HeadVar__6_6 = mercury__pprint__X_59;

                        mercury__pprint__HeadVar__6_6 = mercury__pprint__next_value_of_HeadVar__6_6;
                      }
                      continue;
                    }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word mercury__pprint__TypeInfo_84_84;
                  MR_Integer mercury__pprint__D_68 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__6_6, (MR_Integer) 1)));
                  MR_Word mercury__pprint__U_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__6_6, (MR_Integer) 2)));
                  MR_Word mercury__pprint__Var_72;
                  MR_Box mercury__pprint__Var_73;

                  mercury__pprint__TypeInfo_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__pprint__U_69, (MR_Integer) 0)));
                  mercury__pprint__Var_73 = (MR_hl_field(MR_mktag(0), mercury__pprint__U_69, (MR_Integer) 1));
                  {
                    mercury__pprint__Var_72 = mercury__pprint__to_doc_3_f_0(mercury__pprint__TypeInfo_84_84, mercury__pprint__D_68, (MR_Integer) 1000, mercury__pprint__Var_73);
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word mercury__pprint__next_value_of_HeadVar__6_6 = mercury__pprint__Var_72;

                    mercury__pprint__HeadVar__6_6 = mercury__pprint__next_value_of_HeadVar__6_6;
                  }
                  continue;
                }
                break;
            }
            break;
        }
      }
      break;
    }
}

static void MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_91_49_93_95_48_6_p_0(
  MR_Word mercury__pprint__P_1,
  MR_Integer mercury__pprint__HeadVar__2_2,
  MR_Integer * mercury__pprint__K_3,
  MR_Word mercury__pprint__HeadVar__4_4,
  MR_Box mercury__pprint__HeadVar__5_5,
  MR_Box * mercury__pprint__S_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      switch (MR_tag((MR_Word) mercury__pprint__HeadVar__4_4)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(mercury__pprint__HeadVar__4_4)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                *mercury__pprint__K_3 = mercury__pprint__HeadVar__2_2;
                *mercury__pprint__S_6 = mercury__pprint__HeadVar__5_5;
              }
              break;
            case (MR_Integer) 1:
              {
                *mercury__pprint__K_3 = mercury__pprint__HeadVar__2_2;
                *mercury__pprint__S_6 = mercury__pprint__HeadVar__5_5;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word mercury__pprint__X_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__4_4, (MR_Integer) 0)));
            MR_Word mercury__pprint__Y_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__4_4, (MR_Integer) 1)));
            MR_Integer mercury__pprint__K1_17;
            MR_Box mercury__pprint__S1_18;

            {
              mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_91_49_93_95_48_6_p_0(mercury__pprint__P_1, mercury__pprint__HeadVar__2_2, &mercury__pprint__K1_17, mercury__pprint__X_13, mercury__pprint__HeadVar__5_5, &mercury__pprint__S1_18);
            }
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__pprint__next_value_of_HeadVar__2_2 = mercury__pprint__K1_17;
              MR_Word mercury__pprint__next_value_of_HeadVar__4_4 = mercury__pprint__Y_14;
              MR_Box mercury__pprint__next_value_of_HeadVar__5_5 = mercury__pprint__S1_18;

              mercury__pprint__HeadVar__5_5 = mercury__pprint__next_value_of_HeadVar__5_5;
              mercury__pprint__HeadVar__4_4 = mercury__pprint__next_value_of_HeadVar__4_4;
              mercury__pprint__HeadVar__2_2 = mercury__pprint__next_value_of_HeadVar__2_2;
            }
            continue;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word mercury__pprint__X_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__pprint__HeadVar__4_4, (MR_Integer) 1)));
            MR_Integer mercury__pprint__Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__pprint__HeadVar__4_4, (MR_Integer) 0)));

            /* direct tailcall eliminated */
            {
              MR_Word mercury__pprint__next_value_of_HeadVar__4_4 = mercury__pprint__X_23;

              mercury__pprint__HeadVar__4_4 = mercury__pprint__next_value_of_HeadVar__4_4;
            }
            continue;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__4_4, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word mercury__pprint__X_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__4_4, (MR_Integer) 2)));
                MR_String mercury__pprint__Var_29 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__4_4, (MR_Integer) 1)));

                /* direct tailcall eliminated */
                {
                  MR_Word mercury__pprint__next_value_of_HeadVar__4_4 = mercury__pprint__X_30;

                  mercury__pprint__HeadVar__4_4 = mercury__pprint__next_value_of_HeadVar__4_4;
                }
                continue;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_String mercury__pprint__T_54 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__4_4, (MR_Integer) 1)));
                MR_Integer mercury__pprint__Var_57;
                void MR_CALL (* mercury__pprint__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

                {
                  mercury__string__count_codepoints_2_p_0(mercury__pprint__T_54, &mercury__pprint__Var_57);
                }
                *mercury__pprint__K_3 = (mercury__pprint__HeadVar__2_2 + mercury__pprint__Var_57);
                mercury__pprint__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__pprint__P_1, (MR_Integer) 1)));
                {
                  mercury__pprint__func_0(((MR_Box) mercury__pprint__P_1), ((MR_Box) (mercury__pprint__T_54)), mercury__pprint__HeadVar__5_5, mercury__pprint__S_6);
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word mercury__pprint__X_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__4_4, (MR_Integer) 1)));

                /* direct tailcall eliminated */
                {
                  MR_Word mercury__pprint__next_value_of_HeadVar__4_4 = mercury__pprint__X_39;

                  mercury__pprint__HeadVar__4_4 = mercury__pprint__next_value_of_HeadVar__4_4;
                }
                continue;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word mercury__pprint__TypeInfo_59_59;
                MR_Integer mercury__pprint__D_45 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__4_4, (MR_Integer) 1)));
                MR_Word mercury__pprint__U_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__4_4, (MR_Integer) 2)));
                MR_Word mercury__pprint__Var_49;
                MR_Box mercury__pprint__Var_50;

                mercury__pprint__TypeInfo_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__pprint__U_46, (MR_Integer) 0)));
                mercury__pprint__Var_50 = (MR_hl_field(MR_mktag(0), mercury__pprint__U_46, (MR_Integer) 1));
                {
                  mercury__pprint__Var_49 = mercury__pprint__to_doc_3_f_0(mercury__pprint__TypeInfo_59_59, mercury__pprint__D_45, (MR_Integer) 1000, mercury__pprint__Var_50);
                }
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__pprint__next_value_of_HeadVar__4_4 = mercury__pprint__Var_49;

                  mercury__pprint__HeadVar__4_4 = mercury__pprint__next_value_of_HeadVar__4_4;
                }
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
  MR_Word mercury__pprint__TypeClassInfo_for_doc_15,
  MR_Word mercury__pprint__TypeClassInfo_for_writer_16,
  MR_Box mercury__pprint__Stream_6,
  MR_Integer mercury__pprint__W_7,
  MR_Box mercury__pprint__X_8,
  MR_Box mercury__pprint__STATE_VARIABLE_State_0_10,
  MR_Box * mercury__pprint__STATE_VARIABLE_State_11)
{
  {
    MR_Word mercury__pprint__Var_13;
    MR_Integer mercury__pprint__Var_23;
    MR_Box MR_CALL (* mercury__pprint__func_0)(MR_Box, MR_Box, MR_Box);
    MR_Box mercury__pprint__conv1_Var_13;
    MR_Integer mercury__pprint__Var_30;

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
	 mercury__pprint__Var_23  = Max;
}
    mercury__pprint__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_15, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      mercury__pprint__conv1_Var_13 = mercury__pprint__func_0(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_15), ((MR_Box) (mercury__pprint__Var_23)), mercury__pprint__X_8);
    }
    mercury__pprint__Var_13 = ((MR_Word) mercury__pprint__conv1_Var_13);
    {
      mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_98_95_95_104_111_52_51_95_95_91_51_44_32_52_93_95_48_8_p_0(mercury__pprint__TypeClassInfo_for_writer_16, mercury__pprint__Stream_6, mercury__pprint__W_7, (MR_Integer) 0, &mercury__pprint__Var_30, (MR_String) "", mercury__pprint__Var_13, mercury__pprint__STATE_VARIABLE_State_0_10, mercury__pprint__STATE_VARIABLE_State_11);
    }
  }
}

static void MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_98_95_95_104_111_52_51_95_95_91_51_44_32_52_93_95_48_8_p_0(
  MR_Word mercury__pprint__Var_85,
  MR_Box mercury__pprint__Var_86,
  MR_Integer mercury__pprint__W_2,
  MR_Integer mercury__pprint__HeadVar__3_3,
  MR_Integer * mercury__pprint__K_4,
  MR_String mercury__pprint__I_5,
  MR_Word mercury__pprint__HeadVar__6_6,
  MR_Box mercury__pprint__HeadVar__7_7,
  MR_Box * mercury__pprint__S_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__pprint__succeeded;

        switch (MR_tag((MR_Word) mercury__pprint__HeadVar__6_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(mercury__pprint__HeadVar__6_6)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  *mercury__pprint__K_4 = mercury__pprint__HeadVar__3_3;
                  *mercury__pprint__S_8 = mercury__pprint__HeadVar__7_7;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Box mercury__pprint__S1_52;
                  void MR_CALL (* mercury__pprint__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
                  void MR_CALL (* mercury__pprint__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

                  {
                    mercury__string__count_codepoints_2_p_0(mercury__pprint__I_5, mercury__pprint__K_4);
                  }
                  mercury__pprint__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__Var_85, (MR_Integer) 0)), (MR_Integer) 5)));
                  {
                    mercury__pprint__func_0(((MR_Box) mercury__pprint__Var_85), mercury__pprint__Var_86, ((MR_Box) ((MR_String) "\n")), mercury__pprint__HeadVar__7_7, &mercury__pprint__S1_52);
                  }
                  mercury__pprint__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__Var_85, (MR_Integer) 0)), (MR_Integer) 5)));
                  {
                    mercury__pprint__func_1(((MR_Box) mercury__pprint__Var_85), mercury__pprint__Var_86, ((MR_Box) (mercury__pprint__I_5)), mercury__pprint__S1_52, mercury__pprint__S_8);
                  }
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word mercury__pprint__X_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__6_6, (MR_Integer) 0)));
              MR_Word mercury__pprint__Y_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__6_6, (MR_Integer) 1)));
              MR_Integer mercury__pprint__K1_23;
              MR_Box mercury__pprint__S1_24;

              {
                mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_98_95_95_104_111_52_51_95_95_91_51_44_32_52_93_95_48_8_p_0(mercury__pprint__Var_85, mercury__pprint__Var_86, mercury__pprint__W_2, mercury__pprint__HeadVar__3_3, &mercury__pprint__K1_23, mercury__pprint__I_5, mercury__pprint__X_19, mercury__pprint__HeadVar__7_7, &mercury__pprint__S1_24);
              }
              /* direct tailcall eliminated */
              {
                MR_Integer mercury__pprint__next_value_of_HeadVar__3_3 = mercury__pprint__K1_23;
                MR_Word mercury__pprint__next_value_of_HeadVar__6_6 = mercury__pprint__Y_20;
                MR_Box mercury__pprint__next_value_of_HeadVar__7_7 = mercury__pprint__S1_24;

                mercury__pprint__HeadVar__7_7 = mercury__pprint__next_value_of_HeadVar__7_7;
                mercury__pprint__HeadVar__6_6 = mercury__pprint__next_value_of_HeadVar__6_6;
                mercury__pprint__HeadVar__3_3 = mercury__pprint__next_value_of_HeadVar__3_3;
              }
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer mercury__pprint__J_30 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__pprint__HeadVar__6_6, (MR_Integer) 0)));
              MR_Word mercury__pprint__X_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__pprint__HeadVar__6_6, (MR_Integer) 1)));
              MR_String mercury__pprint__Var_34;

              {
                mercury__pprint__Var_34 = mercury__pprint__extend_2_f_0(mercury__pprint__I_5, mercury__pprint__J_30);
              }
              /* direct tailcall eliminated */
              {
                MR_String mercury__pprint__next_value_of_I_5 = mercury__pprint__Var_34;
                MR_Word mercury__pprint__next_value_of_HeadVar__6_6 = mercury__pprint__X_31;

                mercury__pprint__HeadVar__6_6 = mercury__pprint__next_value_of_HeadVar__6_6;
                mercury__pprint__I_5 = mercury__pprint__next_value_of_I_5;
              }
              continue;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__6_6, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_String mercury__pprint__L_40 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__6_6, (MR_Integer) 1)));
                  MR_Word mercury__pprint__X_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__6_6, (MR_Integer) 2)));
                  MR_String mercury__pprint__Var_44;

                  {
                    mercury__pprint__Var_44 = mercury__string__f_43_43_2_f_0(mercury__pprint__I_5, mercury__pprint__L_40);
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_String mercury__pprint__next_value_of_I_5 = mercury__pprint__Var_44;
                    MR_Word mercury__pprint__next_value_of_HeadVar__6_6 = mercury__pprint__X_41;

                    mercury__pprint__HeadVar__6_6 = mercury__pprint__next_value_of_HeadVar__6_6;
                    mercury__pprint__I_5 = mercury__pprint__next_value_of_I_5;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_String mercury__pprint__T_79 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__6_6, (MR_Integer) 1)));
                  MR_Integer mercury__pprint__Var_82;

                  {
                    mercury__string__count_codepoints_2_p_0(mercury__pprint__T_79, &mercury__pprint__Var_82);
                  }
                  *mercury__pprint__K_4 = (mercury__pprint__HeadVar__3_3 + mercury__pprint__Var_82);
                  {
                    mercury__stream__put_4_p_0(mercury__pprint__Var_85, mercury__pprint__Var_86, ((MR_Box) (mercury__pprint__T_79)), mercury__pprint__HeadVar__7_7, mercury__pprint__S_8);
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word mercury__pprint__X_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__6_6, (MR_Integer) 1)));
                  MR_Integer mercury__pprint__Var_62 = (mercury__pprint__W_2 - mercury__pprint__HeadVar__3_3);
                  MR_Integer mercury__pprint__Var_93;

                  {
                    mercury__pprint__succeeded = mercury__pprint__ff_2_f_0(mercury__pprint__X_59, mercury__pprint__Var_62, &mercury__pprint__Var_93);
                  }
                  if (mercury__pprint__succeeded)
                    {
                      mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_104_111_52_56_95_95_91_51_44_32_52_93_95_48_6_p_0(mercury__pprint__Var_85, mercury__pprint__Var_86, mercury__pprint__HeadVar__3_3, mercury__pprint__K_4, mercury__pprint__X_59, mercury__pprint__HeadVar__7_7, mercury__pprint__S_8);
                    }
                  else
                    {
                      /* direct tailcall eliminated */
                      {
                        MR_Word mercury__pprint__next_value_of_HeadVar__6_6 = mercury__pprint__X_59;

                        mercury__pprint__HeadVar__6_6 = mercury__pprint__next_value_of_HeadVar__6_6;
                      }
                      continue;
                    }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word mercury__pprint__TypeInfo_84_84;
                  MR_Integer mercury__pprint__D_68 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__6_6, (MR_Integer) 1)));
                  MR_Word mercury__pprint__U_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__6_6, (MR_Integer) 2)));
                  MR_Word mercury__pprint__Var_72;
                  MR_Box mercury__pprint__Var_73;

                  mercury__pprint__TypeInfo_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__pprint__U_69, (MR_Integer) 0)));
                  mercury__pprint__Var_73 = (MR_hl_field(MR_mktag(0), mercury__pprint__U_69, (MR_Integer) 1));
                  {
                    mercury__pprint__Var_72 = mercury__pprint__to_doc_3_f_0(mercury__pprint__TypeInfo_84_84, mercury__pprint__D_68, (MR_Integer) 1000, mercury__pprint__Var_73);
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word mercury__pprint__next_value_of_HeadVar__6_6 = mercury__pprint__Var_72;

                    mercury__pprint__HeadVar__6_6 = mercury__pprint__next_value_of_HeadVar__6_6;
                  }
                  continue;
                }
                break;
            }
            break;
        }
      }
      break;
    }
}

static void MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_104_111_52_56_95_95_91_51_44_32_52_93_95_48_6_p_0(
  MR_Word mercury__pprint__Var_60,
  MR_Box mercury__pprint__Var_61,
  MR_Integer mercury__pprint__HeadVar__2_2,
  MR_Integer * mercury__pprint__K_3,
  MR_Word mercury__pprint__HeadVar__4_4,
  MR_Box mercury__pprint__HeadVar__5_5,
  MR_Box * mercury__pprint__S_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      switch (MR_tag((MR_Word) mercury__pprint__HeadVar__4_4)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(mercury__pprint__HeadVar__4_4)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                *mercury__pprint__K_3 = mercury__pprint__HeadVar__2_2;
                *mercury__pprint__S_6 = mercury__pprint__HeadVar__5_5;
              }
              break;
            case (MR_Integer) 1:
              {
                *mercury__pprint__K_3 = mercury__pprint__HeadVar__2_2;
                *mercury__pprint__S_6 = mercury__pprint__HeadVar__5_5;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word mercury__pprint__X_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__4_4, (MR_Integer) 0)));
            MR_Word mercury__pprint__Y_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__4_4, (MR_Integer) 1)));
            MR_Integer mercury__pprint__K1_17;
            MR_Box mercury__pprint__S1_18;

            {
              mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_104_111_52_56_95_95_91_51_44_32_52_93_95_48_6_p_0(mercury__pprint__Var_60, mercury__pprint__Var_61, mercury__pprint__HeadVar__2_2, &mercury__pprint__K1_17, mercury__pprint__X_13, mercury__pprint__HeadVar__5_5, &mercury__pprint__S1_18);
            }
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__pprint__next_value_of_HeadVar__2_2 = mercury__pprint__K1_17;
              MR_Word mercury__pprint__next_value_of_HeadVar__4_4 = mercury__pprint__Y_14;
              MR_Box mercury__pprint__next_value_of_HeadVar__5_5 = mercury__pprint__S1_18;

              mercury__pprint__HeadVar__5_5 = mercury__pprint__next_value_of_HeadVar__5_5;
              mercury__pprint__HeadVar__4_4 = mercury__pprint__next_value_of_HeadVar__4_4;
              mercury__pprint__HeadVar__2_2 = mercury__pprint__next_value_of_HeadVar__2_2;
            }
            continue;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word mercury__pprint__X_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__pprint__HeadVar__4_4, (MR_Integer) 1)));
            MR_Integer mercury__pprint__Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__pprint__HeadVar__4_4, (MR_Integer) 0)));

            /* direct tailcall eliminated */
            {
              MR_Word mercury__pprint__next_value_of_HeadVar__4_4 = mercury__pprint__X_23;

              mercury__pprint__HeadVar__4_4 = mercury__pprint__next_value_of_HeadVar__4_4;
            }
            continue;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__4_4, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word mercury__pprint__X_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__4_4, (MR_Integer) 2)));
                MR_String mercury__pprint__Var_29 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__4_4, (MR_Integer) 1)));

                /* direct tailcall eliminated */
                {
                  MR_Word mercury__pprint__next_value_of_HeadVar__4_4 = mercury__pprint__X_30;

                  mercury__pprint__HeadVar__4_4 = mercury__pprint__next_value_of_HeadVar__4_4;
                }
                continue;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_String mercury__pprint__T_54 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__4_4, (MR_Integer) 1)));
                MR_Integer mercury__pprint__Var_57;
                void MR_CALL (* mercury__pprint__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

                {
                  mercury__string__count_codepoints_2_p_0(mercury__pprint__T_54, &mercury__pprint__Var_57);
                }
                *mercury__pprint__K_3 = (mercury__pprint__HeadVar__2_2 + mercury__pprint__Var_57);
                mercury__pprint__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__Var_60, (MR_Integer) 0)), (MR_Integer) 5)));
                {
                  mercury__pprint__func_0(((MR_Box) mercury__pprint__Var_60), mercury__pprint__Var_61, ((MR_Box) (mercury__pprint__T_54)), mercury__pprint__HeadVar__5_5, mercury__pprint__S_6);
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word mercury__pprint__X_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__4_4, (MR_Integer) 1)));

                /* direct tailcall eliminated */
                {
                  MR_Word mercury__pprint__next_value_of_HeadVar__4_4 = mercury__pprint__X_39;

                  mercury__pprint__HeadVar__4_4 = mercury__pprint__next_value_of_HeadVar__4_4;
                }
                continue;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word mercury__pprint__TypeInfo_59_59;
                MR_Integer mercury__pprint__D_45 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__4_4, (MR_Integer) 1)));
                MR_Word mercury__pprint__U_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__4_4, (MR_Integer) 2)));
                MR_Word mercury__pprint__Var_49;
                MR_Box mercury__pprint__Var_50;

                mercury__pprint__TypeInfo_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__pprint__U_46, (MR_Integer) 0)));
                mercury__pprint__Var_50 = (MR_hl_field(MR_mktag(0), mercury__pprint__U_46, (MR_Integer) 1));
                {
                  mercury__pprint__Var_49 = mercury__pprint__to_doc_3_f_0(mercury__pprint__TypeInfo_59_59, mercury__pprint__D_45, (MR_Integer) 1000, mercury__pprint__Var_50);
                }
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__pprint__next_value_of_HeadVar__4_4 = mercury__pprint__Var_49;

                  mercury__pprint__HeadVar__4_4 = mercury__pprint__next_value_of_HeadVar__4_4;
                }
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
  MR_Word mercury__pprint__TypeClassInfo_for_doc_13,
  MR_Integer mercury__pprint__W_5,
  MR_Box mercury__pprint__X_6)
{
  {
    MR_Word mercury__pprint__Var_11;
    MR_Integer mercury__pprint__Var_19;
    MR_Box MR_CALL (* mercury__pprint__func_0)(MR_Box, MR_Box, MR_Box);
    MR_Box mercury__pprint__conv1_Var_11;
    MR_Integer mercury__pprint__Var_27;

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
	 mercury__pprint__Var_19  = Max;
}
    mercury__pprint__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_13, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      mercury__pprint__conv1_Var_11 = mercury__pprint__func_0(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_13), ((MR_Box) (mercury__pprint__Var_19)), mercury__pprint__X_6);
    }
    mercury__pprint__Var_11 = ((MR_Word) mercury__pprint__conv1_Var_11);
    {
      mercury__pprint__lb__ho42_8_p_0(mercury__pprint__W_5, (MR_Integer) 0, &mercury__pprint__Var_27, (MR_String) "", mercury__pprint__Var_11);
    }
  }
}

static void MR_CALL 
mercury__pprint__lb__ho42_8_p_0(
  MR_Integer mercury__pprint__W_2,
  MR_Integer mercury__pprint__HeadVar__3_3,
  MR_Integer * mercury__pprint__K_4,
  MR_String mercury__pprint__I_5,
  MR_Word mercury__pprint__HeadVar__6_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__pprint__succeeded;

        switch (MR_tag((MR_Word) mercury__pprint__HeadVar__6_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(mercury__pprint__HeadVar__6_6)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *mercury__pprint__K_4 = mercury__pprint__HeadVar__3_3;
                break;
              case (MR_Integer) 1:
                {
                  {
                    *mercury__pprint__K_4 = mercury__string__count_codepoints_1_f_0(mercury__pprint__I_5);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) "\n");
                  }
                  {
                    mercury__io__write_string_3_p_0(mercury__pprint__I_5);
                  }
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word mercury__pprint__X_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__6_6, (MR_Integer) 0)));
              MR_Word mercury__pprint__Y_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__6_6, (MR_Integer) 1)));
              MR_Integer mercury__pprint__K1_23;

              {
                mercury__pprint__lb__ho42_8_p_0(mercury__pprint__W_2, mercury__pprint__HeadVar__3_3, &mercury__pprint__K1_23, mercury__pprint__I_5, mercury__pprint__X_19);
              }
              /* direct tailcall eliminated */
              {
                MR_Integer mercury__pprint__next_value_of_HeadVar__3_3 = mercury__pprint__K1_23;
                MR_Word mercury__pprint__next_value_of_HeadVar__6_6 = mercury__pprint__Y_20;

                mercury__pprint__HeadVar__6_6 = mercury__pprint__next_value_of_HeadVar__6_6;
                mercury__pprint__HeadVar__3_3 = mercury__pprint__next_value_of_HeadVar__3_3;
              }
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer mercury__pprint__J_30 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__pprint__HeadVar__6_6, (MR_Integer) 0)));
              MR_Word mercury__pprint__X_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__pprint__HeadVar__6_6, (MR_Integer) 1)));
              MR_String mercury__pprint__Var_34;

              {
                mercury__pprint__Var_34 = mercury__pprint__extend_2_f_0(mercury__pprint__I_5, mercury__pprint__J_30);
              }
              /* direct tailcall eliminated */
              {
                MR_String mercury__pprint__next_value_of_I_5 = mercury__pprint__Var_34;
                MR_Word mercury__pprint__next_value_of_HeadVar__6_6 = mercury__pprint__X_31;

                mercury__pprint__HeadVar__6_6 = mercury__pprint__next_value_of_HeadVar__6_6;
                mercury__pprint__I_5 = mercury__pprint__next_value_of_I_5;
              }
              continue;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__6_6, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_String mercury__pprint__L_40 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__6_6, (MR_Integer) 1)));
                  MR_Word mercury__pprint__X_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__6_6, (MR_Integer) 2)));
                  MR_String mercury__pprint__Var_44;

                  {
                    mercury__string__append_3_p_2(mercury__pprint__I_5, mercury__pprint__L_40, &mercury__pprint__Var_44);
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_String mercury__pprint__next_value_of_I_5 = mercury__pprint__Var_44;
                    MR_Word mercury__pprint__next_value_of_HeadVar__6_6 = mercury__pprint__X_41;

                    mercury__pprint__HeadVar__6_6 = mercury__pprint__next_value_of_HeadVar__6_6;
                    mercury__pprint__I_5 = mercury__pprint__next_value_of_I_5;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_String mercury__pprint__T_79 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__6_6, (MR_Integer) 1)));
                  MR_Integer mercury__pprint__Var_82;

                  {
                    mercury__pprint__Var_82 = mercury__string__count_codepoints_1_f_0(mercury__pprint__T_79);
                  }
                  *mercury__pprint__K_4 = (mercury__pprint__HeadVar__3_3 + mercury__pprint__Var_82);
                  {
                    mercury__io__write_string_3_p_0(mercury__pprint__T_79);
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word mercury__pprint__X_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__6_6, (MR_Integer) 1)));
                  MR_Integer mercury__pprint__Var_62 = (mercury__pprint__W_2 - mercury__pprint__HeadVar__3_3);
                  MR_Integer mercury__pprint__Var_91;

                  {
                    mercury__pprint__succeeded = mercury__pprint__ff_2_f_0(mercury__pprint__X_59, mercury__pprint__Var_62, &mercury__pprint__Var_91);
                  }
                  if (mercury__pprint__succeeded)
                    {
                      mercury__pprint__layout_flat__ho49_6_p_0(mercury__pprint__HeadVar__3_3, mercury__pprint__K_4, mercury__pprint__X_59);
                    }
                  else
                    {
                      /* direct tailcall eliminated */
                      {
                        MR_Word mercury__pprint__next_value_of_HeadVar__6_6 = mercury__pprint__X_59;

                        mercury__pprint__HeadVar__6_6 = mercury__pprint__next_value_of_HeadVar__6_6;
                      }
                      continue;
                    }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word mercury__pprint__TypeInfo_84_84;
                  MR_Integer mercury__pprint__D_68 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__6_6, (MR_Integer) 1)));
                  MR_Word mercury__pprint__U_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__6_6, (MR_Integer) 2)));
                  MR_Word mercury__pprint__Var_72;
                  MR_Box mercury__pprint__Var_73;

                  mercury__pprint__TypeInfo_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__pprint__U_69, (MR_Integer) 0)));
                  mercury__pprint__Var_73 = (MR_hl_field(MR_mktag(0), mercury__pprint__U_69, (MR_Integer) 1));
                  {
                    mercury__pprint__Var_72 = mercury__pprint__to_doc_3_f_0(mercury__pprint__TypeInfo_84_84, mercury__pprint__D_68, (MR_Integer) 1000, mercury__pprint__Var_73);
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word mercury__pprint__next_value_of_HeadVar__6_6 = mercury__pprint__Var_72;

                    mercury__pprint__HeadVar__6_6 = mercury__pprint__next_value_of_HeadVar__6_6;
                  }
                  continue;
                }
                break;
            }
            break;
        }
      }
      break;
    }
}

static void MR_CALL 
mercury__pprint__layout_flat__ho49_6_p_0(
  MR_Integer mercury__pprint__HeadVar__2_2,
  MR_Integer * mercury__pprint__K_3,
  MR_Word mercury__pprint__HeadVar__4_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      switch (MR_tag((MR_Word) mercury__pprint__HeadVar__4_4)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(mercury__pprint__HeadVar__4_4)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *mercury__pprint__K_3 = mercury__pprint__HeadVar__2_2;
              break;
            case (MR_Integer) 1:
              *mercury__pprint__K_3 = mercury__pprint__HeadVar__2_2;
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word mercury__pprint__X_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__4_4, (MR_Integer) 0)));
            MR_Word mercury__pprint__Y_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__4_4, (MR_Integer) 1)));
            MR_Integer mercury__pprint__K1_17;

            {
              mercury__pprint__layout_flat__ho49_6_p_0(mercury__pprint__HeadVar__2_2, &mercury__pprint__K1_17, mercury__pprint__X_13);
            }
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__pprint__next_value_of_HeadVar__2_2 = mercury__pprint__K1_17;
              MR_Word mercury__pprint__next_value_of_HeadVar__4_4 = mercury__pprint__Y_14;

              mercury__pprint__HeadVar__4_4 = mercury__pprint__next_value_of_HeadVar__4_4;
              mercury__pprint__HeadVar__2_2 = mercury__pprint__next_value_of_HeadVar__2_2;
            }
            continue;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word mercury__pprint__X_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__pprint__HeadVar__4_4, (MR_Integer) 1)));
            MR_Integer mercury__pprint__Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__pprint__HeadVar__4_4, (MR_Integer) 0)));

            /* direct tailcall eliminated */
            {
              MR_Word mercury__pprint__next_value_of_HeadVar__4_4 = mercury__pprint__X_23;

              mercury__pprint__HeadVar__4_4 = mercury__pprint__next_value_of_HeadVar__4_4;
            }
            continue;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__4_4, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word mercury__pprint__X_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__4_4, (MR_Integer) 2)));
                MR_String mercury__pprint__Var_29 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__4_4, (MR_Integer) 1)));

                /* direct tailcall eliminated */
                {
                  MR_Word mercury__pprint__next_value_of_HeadVar__4_4 = mercury__pprint__X_30;

                  mercury__pprint__HeadVar__4_4 = mercury__pprint__next_value_of_HeadVar__4_4;
                }
                continue;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_String mercury__pprint__T_54 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__4_4, (MR_Integer) 1)));
                MR_Integer mercury__pprint__Var_57;

                {
                  mercury__string__count_codepoints_2_p_0(mercury__pprint__T_54, &mercury__pprint__Var_57);
                }
                *mercury__pprint__K_3 = (mercury__pprint__HeadVar__2_2 + mercury__pprint__Var_57);
                {
                  mercury__io__write_string_3_p_0(mercury__pprint__T_54);
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word mercury__pprint__X_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__4_4, (MR_Integer) 1)));

                /* direct tailcall eliminated */
                {
                  MR_Word mercury__pprint__next_value_of_HeadVar__4_4 = mercury__pprint__X_39;

                  mercury__pprint__HeadVar__4_4 = mercury__pprint__next_value_of_HeadVar__4_4;
                }
                continue;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word mercury__pprint__TypeInfo_59_59;
                MR_Integer mercury__pprint__D_45 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__4_4, (MR_Integer) 1)));
                MR_Word mercury__pprint__U_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__4_4, (MR_Integer) 2)));
                MR_Word mercury__pprint__Var_49;
                MR_Box mercury__pprint__Var_50;

                mercury__pprint__TypeInfo_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__pprint__U_46, (MR_Integer) 0)));
                mercury__pprint__Var_50 = (MR_hl_field(MR_mktag(0), mercury__pprint__U_46, (MR_Integer) 1));
                {
                  mercury__pprint__Var_49 = mercury__pprint__to_doc_3_f_0(mercury__pprint__TypeInfo_59_59, mercury__pprint__D_45, (MR_Integer) 1000, mercury__pprint__Var_50);
                }
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__pprint__next_value_of_HeadVar__4_4 = mercury__pprint__Var_49;

                  mercury__pprint__HeadVar__4_4 = mercury__pprint__next_value_of_HeadVar__4_4;
                }
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
  MR_Integer mercury__pprint__W_4,
  MR_Word mercury__pprint__X_5)
{
  {
    MR_String mercury__pprint__S_6;
    MR_Word mercury__pprint__TypeCtorInfo_19_19;
    MR_Word mercury__pprint__Ss_9;
    MR_Word mercury__pprint__Var_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__pprint__Var_15;
    MR_Integer mercury__pprint__Var_26;

    {
      mercury__pprint__lb__ho41_8_p_0(mercury__pprint__W_4, (MR_Integer) 0, &mercury__pprint__Var_26, (MR_String) "", mercury__pprint__X_5, mercury__pprint__Var_11, &mercury__pprint__Ss_9);
    }
    mercury__pprint__TypeCtorInfo_19_19 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    {
      mercury__list__reverse_2_p_0(mercury__pprint__TypeCtorInfo_19_19, mercury__pprint__Ss_9, &mercury__pprint__Var_15);
    }
    {
      mercury__pprint__S_6 = mercury__string__append_list_1_f_0(mercury__pprint__Var_15);
    }
    return mercury__pprint__S_6;
  }
}

static void MR_CALL 
mercury__pprint__lb__ho41_8_p_0(
  MR_Integer mercury__pprint__W_2,
  MR_Integer mercury__pprint__HeadVar__3_3,
  MR_Integer * mercury__pprint__K_4,
  MR_String mercury__pprint__I_5,
  MR_Word mercury__pprint__HeadVar__6_6,
  MR_Word mercury__pprint__HeadVar__7_7,
  MR_Word * mercury__pprint__S_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__pprint__succeeded;

        switch (MR_tag((MR_Word) mercury__pprint__HeadVar__6_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(mercury__pprint__HeadVar__6_6)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  *mercury__pprint__K_4 = mercury__pprint__HeadVar__3_3;
                  *mercury__pprint__S_8 = mercury__pprint__HeadVar__7_7;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word mercury__pprint__S1_52;

                  {
                    *mercury__pprint__K_4 = mercury__string__count_codepoints_1_f_0(mercury__pprint__I_5);
                  }
                  {
                    mercury__pprint__IntroducedFrom__pred__to_string__446__1_3_p_0((MR_String) "\n", mercury__pprint__HeadVar__7_7, &mercury__pprint__S1_52);
                  }
                  {
                    mercury__pprint__IntroducedFrom__pred__to_string__446__1_3_p_0(mercury__pprint__I_5, mercury__pprint__S1_52, mercury__pprint__S_8);
                  }
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word mercury__pprint__X_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__6_6, (MR_Integer) 0)));
              MR_Word mercury__pprint__Y_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__6_6, (MR_Integer) 1)));
              MR_Integer mercury__pprint__K1_23;
              MR_Word mercury__pprint__S1_24;

              {
                mercury__pprint__lb__ho41_8_p_0(mercury__pprint__W_2, mercury__pprint__HeadVar__3_3, &mercury__pprint__K1_23, mercury__pprint__I_5, mercury__pprint__X_19, mercury__pprint__HeadVar__7_7, &mercury__pprint__S1_24);
              }
              /* direct tailcall eliminated */
              {
                MR_Integer mercury__pprint__next_value_of_HeadVar__3_3 = mercury__pprint__K1_23;
                MR_Word mercury__pprint__next_value_of_HeadVar__6_6 = mercury__pprint__Y_20;
                MR_Word mercury__pprint__next_value_of_HeadVar__7_7 = mercury__pprint__S1_24;

                mercury__pprint__HeadVar__7_7 = mercury__pprint__next_value_of_HeadVar__7_7;
                mercury__pprint__HeadVar__6_6 = mercury__pprint__next_value_of_HeadVar__6_6;
                mercury__pprint__HeadVar__3_3 = mercury__pprint__next_value_of_HeadVar__3_3;
              }
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer mercury__pprint__J_30 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__pprint__HeadVar__6_6, (MR_Integer) 0)));
              MR_Word mercury__pprint__X_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__pprint__HeadVar__6_6, (MR_Integer) 1)));
              MR_String mercury__pprint__Var_34;

              {
                mercury__pprint__Var_34 = mercury__pprint__extend_2_f_0(mercury__pprint__I_5, mercury__pprint__J_30);
              }
              /* direct tailcall eliminated */
              {
                MR_String mercury__pprint__next_value_of_I_5 = mercury__pprint__Var_34;
                MR_Word mercury__pprint__next_value_of_HeadVar__6_6 = mercury__pprint__X_31;

                mercury__pprint__HeadVar__6_6 = mercury__pprint__next_value_of_HeadVar__6_6;
                mercury__pprint__I_5 = mercury__pprint__next_value_of_I_5;
              }
              continue;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__6_6, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_String mercury__pprint__L_40 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__6_6, (MR_Integer) 1)));
                  MR_Word mercury__pprint__X_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__6_6, (MR_Integer) 2)));
                  MR_String mercury__pprint__Var_44;

                  {
                    mercury__string__append_3_p_2(mercury__pprint__I_5, mercury__pprint__L_40, &mercury__pprint__Var_44);
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_String mercury__pprint__next_value_of_I_5 = mercury__pprint__Var_44;
                    MR_Word mercury__pprint__next_value_of_HeadVar__6_6 = mercury__pprint__X_41;

                    mercury__pprint__HeadVar__6_6 = mercury__pprint__next_value_of_HeadVar__6_6;
                    mercury__pprint__I_5 = mercury__pprint__next_value_of_I_5;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_String mercury__pprint__T_79 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__6_6, (MR_Integer) 1)));
                  MR_Integer mercury__pprint__Var_82;

                  {
                    mercury__pprint__Var_82 = mercury__string__count_codepoints_1_f_0(mercury__pprint__T_79);
                  }
                  *mercury__pprint__K_4 = (mercury__pprint__HeadVar__3_3 + mercury__pprint__Var_82);
                  {
                    mercury__pprint__IntroducedFrom__pred__to_string__446__1_3_p_0(mercury__pprint__T_79, mercury__pprint__HeadVar__7_7, mercury__pprint__S_8);
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word mercury__pprint__X_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__6_6, (MR_Integer) 1)));
                  MR_Integer mercury__pprint__Var_62 = (mercury__pprint__W_2 - mercury__pprint__HeadVar__3_3);
                  MR_Integer mercury__pprint__Var_91;

                  {
                    mercury__pprint__succeeded = mercury__pprint__ff_2_f_0(mercury__pprint__X_59, mercury__pprint__Var_62, &mercury__pprint__Var_91);
                  }
                  if (mercury__pprint__succeeded)
                    {
                      mercury__pprint__layout_flat__ho50_6_p_0(mercury__pprint__HeadVar__3_3, mercury__pprint__K_4, mercury__pprint__X_59, mercury__pprint__HeadVar__7_7, mercury__pprint__S_8);
                    }
                  else
                    {
                      /* direct tailcall eliminated */
                      {
                        MR_Word mercury__pprint__next_value_of_HeadVar__6_6 = mercury__pprint__X_59;

                        mercury__pprint__HeadVar__6_6 = mercury__pprint__next_value_of_HeadVar__6_6;
                      }
                      continue;
                    }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word mercury__pprint__TypeInfo_84_84;
                  MR_Integer mercury__pprint__D_68 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__6_6, (MR_Integer) 1)));
                  MR_Word mercury__pprint__U_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__6_6, (MR_Integer) 2)));
                  MR_Word mercury__pprint__Var_72;
                  MR_Box mercury__pprint__Var_73;

                  mercury__pprint__TypeInfo_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__pprint__U_69, (MR_Integer) 0)));
                  mercury__pprint__Var_73 = (MR_hl_field(MR_mktag(0), mercury__pprint__U_69, (MR_Integer) 1));
                  {
                    mercury__pprint__Var_72 = mercury__pprint__to_doc_3_f_0(mercury__pprint__TypeInfo_84_84, mercury__pprint__D_68, (MR_Integer) 1000, mercury__pprint__Var_73);
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word mercury__pprint__next_value_of_HeadVar__6_6 = mercury__pprint__Var_72;

                    mercury__pprint__HeadVar__6_6 = mercury__pprint__next_value_of_HeadVar__6_6;
                  }
                  continue;
                }
                break;
            }
            break;
        }
      }
      break;
    }
}

static void MR_CALL 
mercury__pprint__layout_flat__ho50_6_p_0(
  MR_Integer mercury__pprint__HeadVar__2_2,
  MR_Integer * mercury__pprint__K_3,
  MR_Word mercury__pprint__HeadVar__4_4,
  MR_Word mercury__pprint__HeadVar__5_5,
  MR_Word * mercury__pprint__S_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      switch (MR_tag((MR_Word) mercury__pprint__HeadVar__4_4)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(mercury__pprint__HeadVar__4_4)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                *mercury__pprint__K_3 = mercury__pprint__HeadVar__2_2;
                *mercury__pprint__S_6 = mercury__pprint__HeadVar__5_5;
              }
              break;
            case (MR_Integer) 1:
              {
                *mercury__pprint__K_3 = mercury__pprint__HeadVar__2_2;
                *mercury__pprint__S_6 = mercury__pprint__HeadVar__5_5;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word mercury__pprint__X_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__4_4, (MR_Integer) 0)));
            MR_Word mercury__pprint__Y_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__4_4, (MR_Integer) 1)));
            MR_Integer mercury__pprint__K1_17;
            MR_Word mercury__pprint__S1_18;

            {
              mercury__pprint__layout_flat__ho50_6_p_0(mercury__pprint__HeadVar__2_2, &mercury__pprint__K1_17, mercury__pprint__X_13, mercury__pprint__HeadVar__5_5, &mercury__pprint__S1_18);
            }
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__pprint__next_value_of_HeadVar__2_2 = mercury__pprint__K1_17;
              MR_Word mercury__pprint__next_value_of_HeadVar__4_4 = mercury__pprint__Y_14;
              MR_Word mercury__pprint__next_value_of_HeadVar__5_5 = mercury__pprint__S1_18;

              mercury__pprint__HeadVar__5_5 = mercury__pprint__next_value_of_HeadVar__5_5;
              mercury__pprint__HeadVar__4_4 = mercury__pprint__next_value_of_HeadVar__4_4;
              mercury__pprint__HeadVar__2_2 = mercury__pprint__next_value_of_HeadVar__2_2;
            }
            continue;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word mercury__pprint__X_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__pprint__HeadVar__4_4, (MR_Integer) 1)));
            MR_Integer mercury__pprint__Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__pprint__HeadVar__4_4, (MR_Integer) 0)));

            /* direct tailcall eliminated */
            {
              MR_Word mercury__pprint__next_value_of_HeadVar__4_4 = mercury__pprint__X_23;

              mercury__pprint__HeadVar__4_4 = mercury__pprint__next_value_of_HeadVar__4_4;
            }
            continue;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__4_4, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word mercury__pprint__X_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__4_4, (MR_Integer) 2)));
                MR_String mercury__pprint__Var_29 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__4_4, (MR_Integer) 1)));

                /* direct tailcall eliminated */
                {
                  MR_Word mercury__pprint__next_value_of_HeadVar__4_4 = mercury__pprint__X_30;

                  mercury__pprint__HeadVar__4_4 = mercury__pprint__next_value_of_HeadVar__4_4;
                }
                continue;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_String mercury__pprint__T_54 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__4_4, (MR_Integer) 1)));
                MR_Integer mercury__pprint__Var_57;

                {
                  mercury__string__count_codepoints_2_p_0(mercury__pprint__T_54, &mercury__pprint__Var_57);
                }
                *mercury__pprint__K_3 = (mercury__pprint__HeadVar__2_2 + mercury__pprint__Var_57);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *mercury__pprint__S_6 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__pprint__T_54));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__pprint__HeadVar__5_5));
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word mercury__pprint__X_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__4_4, (MR_Integer) 1)));

                /* direct tailcall eliminated */
                {
                  MR_Word mercury__pprint__next_value_of_HeadVar__4_4 = mercury__pprint__X_39;

                  mercury__pprint__HeadVar__4_4 = mercury__pprint__next_value_of_HeadVar__4_4;
                }
                continue;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word mercury__pprint__TypeInfo_59_59;
                MR_Integer mercury__pprint__D_45 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__4_4, (MR_Integer) 1)));
                MR_Word mercury__pprint__U_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__4_4, (MR_Integer) 2)));
                MR_Word mercury__pprint__Var_49;
                MR_Box mercury__pprint__Var_50;

                mercury__pprint__TypeInfo_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__pprint__U_46, (MR_Integer) 0)));
                mercury__pprint__Var_50 = (MR_hl_field(MR_mktag(0), mercury__pprint__U_46, (MR_Integer) 1));
                {
                  mercury__pprint__Var_49 = mercury__pprint__to_doc_3_f_0(mercury__pprint__TypeInfo_59_59, mercury__pprint__D_45, (MR_Integer) 1000, mercury__pprint__Var_50);
                }
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__pprint__next_value_of_HeadVar__4_4 = mercury__pprint__Var_49;

                  mercury__pprint__HeadVar__4_4 = mercury__pprint__next_value_of_HeadVar__4_4;
                }
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
mercury__pprint__IntroducedFrom__pred__to_string__446__1_3_p_0(
  MR_String mercury__pprint__LambdaHeadVar__1_12,
  MR_Word mercury__pprint__LambdaHeadVar__2_13,
  MR_Word * mercury__pprint__LambdaHeadVar__3_14)
{
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
    *mercury__pprint__LambdaHeadVar__3_14 = base;
    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__pprint__LambdaHeadVar__1_12));
    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__pprint__LambdaHeadVar__2_13));
  }
}

static MR_String MR_CALL 
mercury__pprint__extend_2_f_0(
  MR_String mercury__pprint__I_4,
  MR_Integer mercury__pprint__J_5)
{
  {
    MR_String mercury__pprint__HeadVar__3_3;
    MR_Word mercury__pprint__TypeCtorInfo_8_15 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
    MR_String mercury__pprint__Var_6;
    MR_Word mercury__pprint__V_7_14;
    MR_Word mercury__pprint__V_7_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__list__accumulate_n_copies_4_p_0(mercury__pprint__TypeCtorInfo_8_15, mercury__pprint__J_5, ((MR_Box) (MR_Word) ((MR_Char) 32)), mercury__pprint__V_7_19, &mercury__pprint__V_7_14);
    }
    {
      mercury__string__from_char_list_2_p_0(mercury__pprint__V_7_14, &mercury__pprint__Var_6);
    }
    {
      mercury__string__append_3_p_2(mercury__pprint__I_4, mercury__pprint__Var_6, &mercury__pprint__HeadVar__3_3);
    }
    return mercury__pprint__HeadVar__3_3;
  }
}

static MR_bool MR_CALL 
mercury__pprint__ff_2_f_0(
  MR_Word mercury__pprint__HeadVar__1_1,
  MR_Integer mercury__pprint__R_2,
  MR_Integer * mercury__pprint__HeadVar__3_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__pprint__succeeded;

        switch (MR_tag((MR_Word) mercury__pprint__HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(mercury__pprint__HeadVar__1_1)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  *mercury__pprint__HeadVar__3_3 = mercury__pprint__R_2;
                  mercury__pprint__succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 1:
                {
                  *mercury__pprint__HeadVar__3_3 = mercury__pprint__R_2;
                  mercury__pprint__succeeded = MR_TRUE;
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word mercury__pprint__X_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__1_1, (MR_Integer) 0)));
              MR_Word mercury__pprint__Y_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__1_1, (MR_Integer) 1)));
              MR_Integer mercury__pprint__Var_8;

              {
                mercury__pprint__succeeded = mercury__pprint__ff_2_f_0(mercury__pprint__X_5, mercury__pprint__R_2, &mercury__pprint__Var_8);
              }
              if (mercury__pprint__succeeded)
                {
                  /* direct tailcall eliminated */
                  {
                    MR_Word mercury__pprint__next_value_of_HeadVar__1_1 = mercury__pprint__Y_6;
                    MR_Integer mercury__pprint__next_value_of_R_2 = mercury__pprint__Var_8;

                    mercury__pprint__R_2 = mercury__pprint__next_value_of_R_2;
                    mercury__pprint__HeadVar__1_1 = mercury__pprint__next_value_of_HeadVar__1_1;
                  }
                  continue;
                }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mercury__pprint__X_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__pprint__HeadVar__1_1, (MR_Integer) 1)));
              MR_Integer mercury__pprint__Var_9 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__pprint__HeadVar__1_1, (MR_Integer) 0)));

              /* direct tailcall eliminated */
              {
                MR_Word mercury__pprint__next_value_of_HeadVar__1_1 = mercury__pprint__X_10;

                mercury__pprint__HeadVar__1_1 = mercury__pprint__next_value_of_HeadVar__1_1;
              }
              continue;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__1_1, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word mercury__pprint__X_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__1_1, (MR_Integer) 2)));
                  MR_String mercury__pprint__Var_12 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__1_1, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word mercury__pprint__next_value_of_HeadVar__1_1 = mercury__pprint__X_13;

                    mercury__pprint__HeadVar__1_1 = mercury__pprint__next_value_of_HeadVar__1_1;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_String mercury__pprint__S_23 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__1_1, (MR_Integer) 1)));
                  MR_Integer mercury__pprint__L_25;

                  {
                    mercury__string__count_codepoints_2_p_0(mercury__pprint__S_23, &mercury__pprint__L_25);
                  }
                  *mercury__pprint__HeadVar__3_3 = (mercury__pprint__R_2 - mercury__pprint__L_25);
                  mercury__pprint__succeeded = (mercury__pprint__R_2 > mercury__pprint__L_25);
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word mercury__pprint__X_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__1_1, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word mercury__pprint__next_value_of_HeadVar__1_1 = mercury__pprint__X_16;

                    mercury__pprint__HeadVar__1_1 = mercury__pprint__next_value_of_HeadVar__1_1;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word mercury__pprint__TypeInfo_26_26;
                  MR_Integer mercury__pprint__D_18 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__1_1, (MR_Integer) 1)));
                  MR_Word mercury__pprint__U_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__1_1, (MR_Integer) 2)));
                  MR_Word mercury__pprint__Var_21;
                  MR_Box mercury__pprint__Var_22;

                  mercury__pprint__TypeInfo_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__pprint__U_19, (MR_Integer) 0)));
                  mercury__pprint__Var_22 = (MR_hl_field(MR_mktag(0), mercury__pprint__U_19, (MR_Integer) 1));
                  {
                    mercury__pprint__Var_21 = mercury__pprint__to_doc_3_f_0(mercury__pprint__TypeInfo_26_26, mercury__pprint__D_18, (MR_Integer) 1000, mercury__pprint__Var_22);
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word mercury__pprint__next_value_of_HeadVar__1_1 = mercury__pprint__Var_21;

                    mercury__pprint__HeadVar__1_1 = mercury__pprint__next_value_of_HeadVar__1_1;
                  }
                  continue;
                }
                break;
            }
            break;
        }
        return mercury__pprint__succeeded;
      }
      break;
    }
}

MR_Word MR_CALL 
mercury__pprint__to_doc_1_f_0(
  MR_Word mercury__pprint__TypeInfo_for_T_5,
  MR_Box mercury__pprint__X_3)
{
  {
    MR_Word mercury__pprint__HeadVar__2_2;
    MR_Integer mercury__pprint__Var_4;

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
	 mercury__pprint__Var_4  = Max;
}
    {
      mercury__pprint__HeadVar__2_2 = mercury__pprint__to_doc_3_f_0(mercury__pprint__TypeInfo_for_T_5, mercury__pprint__Var_4, (MR_Integer) 1000, mercury__pprint__X_3);
    }
    return mercury__pprint__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__pprint__word_wrapped_1_f_0(
  MR_String mercury__pprint__String_3)
{
  {
    MR_Word mercury__pprint__HeadVar__2_2;
    MR_Word mercury__pprint__TypeClassInfo_for_doc_13 = (MR_Word) &mercury__pprint_scalar_common_1[0];
    MR_Word mercury__pprint__Var_5 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__pprint_scalar_common_1[10]);
    MR_Word mercury__pprint__Var_6;
    MR_Word mercury__pprint__Var_10;
    MR_Integer mercury__pprint__V_7_24;

    {
      mercury__pprint__skip_to_next_word_start__ho40_4_p_in__string_0(mercury__pprint__String_3, (MR_Integer) 0, &mercury__pprint__V_7_24);
    }
    {
      mercury__pprint__words_loop__ho39_4_p_in__string_0(mercury__pprint__String_3, mercury__pprint__V_7_24, &mercury__pprint__Var_10);
    }
    {
      mercury__pprint__Var_6 = mercury__pprint__map__ho36_2_f_in__list_0(mercury__pprint__Var_10);
    }
    {
      mercury__pprint__HeadVar__2_2 = mercury__pprint__packed_2_f_0(mercury__pprint__TypeClassInfo_for_doc_13, mercury__pprint__TypeClassInfo_for_doc_13, ((MR_Box) (mercury__pprint__Var_5)), mercury__pprint__Var_6);
    }
    return mercury__pprint__HeadVar__2_2;
  }
}

static void MR_CALL 
mercury__pprint__words_loop__ho39_4_p_in__string_0(
  MR_String mercury__pprint__V_6_6,
  MR_Integer mercury__pprint__V_7_7,
  MR_Word * mercury__pprint__V_8_8)
{
  {
    MR_bool mercury__pprint__succeeded;
    MR_Integer mercury__pprint__V_9_9;

    {
      mercury__pprint__skip_to_word_end__ho51_4_p_in__string_0(mercury__pprint__V_6_6, mercury__pprint__V_7_7, &mercury__pprint__V_9_9);
    }
    mercury__pprint__succeeded = (mercury__pprint__V_9_9 == mercury__pprint__V_7_7);
    if (mercury__pprint__succeeded)
      *mercury__pprint__V_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_String mercury__pprint__V_10_10;
        MR_Integer mercury__pprint__V_11_11;

{
#define MR_PROC_LABEL mercury__pprint__words_loop__ho39_4_p_in__string_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  mercury__pprint__V_6_6 ;
	Start =  mercury__pprint__V_7_7 ;
	End =  mercury__pprint__V_9_9 ;
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
	 mercury__pprint__V_10_10  = SubString;
}
        {
          mercury__pprint__skip_to_next_word_start__ho40_4_p_in__string_0(mercury__pprint__V_6_6, mercury__pprint__V_9_9, &mercury__pprint__V_11_11);
        }
        mercury__pprint__succeeded = (mercury__pprint__V_9_9 == mercury__pprint__V_11_11);
        if (mercury__pprint__succeeded)
          {
            MR_Word mercury__pprint__V_13_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *mercury__pprint__V_8_8 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__pprint__V_10_10));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__pprint__V_13_12));
            }
          }
        else
          {
            MR_Word mercury__pprint__V_12_13;

            {
              mercury__pprint__words_loop__ho39_4_p_in__string_0(mercury__pprint__V_6_6, mercury__pprint__V_11_11, &mercury__pprint__V_12_13);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *mercury__pprint__V_8_8 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__pprint__V_10_10));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__pprint__V_12_13));
            }
          }
      }
  }
}

static void MR_CALL 
mercury__pprint__skip_to_word_end__ho51_4_p_in__string_0(
  MR_String mercury__pprint__V_6_6,
  MR_Integer mercury__pprint__V_7_7,
  MR_Integer * mercury__pprint__V_8_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__pprint__succeeded;
        MR_Integer mercury__pprint__V_9_9;
        MR_Char mercury__pprint__V_10_10;

{
#define MR_PROC_LABEL mercury__pprint__skip_to_word_end__ho51_4_p_in__string_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__pprint__V_6_6 ;
	Index =  mercury__pprint__V_7_7 ;
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
	 mercury__pprint__V_9_9  = NextIndex;
	 mercury__pprint__V_10_10  = Ch;
	}
mercury__pprint__succeeded  = SUCCESS_INDICATOR;
}
        if (mercury__pprint__succeeded)
          {
            {
              mercury__pprint__succeeded = mercury__char__is_whitespace_1_p_0(mercury__pprint__V_10_10);
            }
            if (mercury__pprint__succeeded)
              *mercury__pprint__V_8_8 = mercury__pprint__V_7_7;
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Integer mercury__pprint__next_value_of_V_7_7 = mercury__pprint__V_9_9;

                  mercury__pprint__V_7_7 = mercury__pprint__next_value_of_V_7_7;
                }
                continue;
              }
          }
        else
          *mercury__pprint__V_8_8 = mercury__pprint__V_7_7;
      }
      break;
    }
}

static void MR_CALL 
mercury__pprint__skip_to_next_word_start__ho40_4_p_in__string_0(
  MR_String mercury__pprint__V_6_6,
  MR_Integer mercury__pprint__V_7_7,
  MR_Integer * mercury__pprint__V_8_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__pprint__succeeded;
        MR_Integer mercury__pprint__V_9_9;
        MR_Char mercury__pprint__V_10_10;

{
#define MR_PROC_LABEL mercury__pprint__skip_to_next_word_start__ho40_4_p_in__string_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__pprint__V_6_6 ;
	Index =  mercury__pprint__V_7_7 ;
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
	 mercury__pprint__V_9_9  = NextIndex;
	 mercury__pprint__V_10_10  = Ch;
	}
mercury__pprint__succeeded  = SUCCESS_INDICATOR;
}
        if (mercury__pprint__succeeded)
          {
            mercury__pprint__succeeded = mercury__char__is_whitespace_1_p_0(mercury__pprint__V_10_10);
          }
        if (mercury__pprint__succeeded)
          {
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__pprint__next_value_of_V_7_7 = mercury__pprint__V_9_9;

              mercury__pprint__V_7_7 = mercury__pprint__next_value_of_V_7_7;
            }
            continue;
          }
        else
          *mercury__pprint__V_8_8 = mercury__pprint__V_7_7;
      }
      break;
    }
}

static MR_Word MR_CALL 
mercury__pprint__map__ho36_2_f_in__list_0(
  MR_Word mercury__pprint__HeadVar__2_2)
{
  {
    MR_Word mercury__pprint__HeadVar__3_3;

    if ((mercury__pprint__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__pprint__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_String mercury__pprint__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mercury__pprint__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mercury__pprint__V_8_8;
        MR_Word mercury__pprint__V_9_9;

        {
          mercury__pprint__V_8_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), mercury__pprint__V_8_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), mercury__pprint__V_8_8, 1) = ((MR_Box) (mercury__pprint__V_6_6));
        }
        {
          mercury__pprint__V_9_9 = mercury__pprint__map__ho36_2_f_in__list_0(mercury__pprint__V_7_7);
        }
        {
          mercury__pprint__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__3_3, 0) = ((MR_Box) (mercury__pprint__V_8_8));
          MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__3_3, 1) = ((MR_Box) (mercury__pprint__V_9_9));
        }
      }
    return mercury__pprint__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__pprint__ellipsis_0_f_0(void)
{
  {
    MR_Word mercury__pprint__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__pprint_scalar_common_1[9]);

    return mercury__pprint__HeadVar__1_1;
  }
}

MR_Word MR_CALL 
mercury__pprint__colon_space_line_0_f_0(void)
{
  {
    MR_Word mercury__pprint__HeadVar__1_1;
    MR_Word mercury__pprint__TypeClassInfo_for_doc_4 = (MR_Word) &mercury__pprint_scalar_common_1[1];
    MR_Word mercury__pprint__TypeClassInfo_for_doc_5 = (MR_Word) &mercury__pprint_scalar_common_1[0];
    MR_Word mercury__pprint__Var_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
    MR_Word mercury__pprint__Var_8;
    MR_Word mercury__pprint__Var_9;
    MR_Integer mercury__pprint__Var_11;
    MR_Integer mercury__pprint__Var_14;
    MR_Box MR_CALL (* mercury__pprint__func_0)(MR_Box, MR_Box, MR_Box);
    MR_Box mercury__pprint__conv1_Var_8;
    MR_Box MR_CALL (* mercury__pprint__func_2)(MR_Box, MR_Box, MR_Box);
    MR_Box mercury__pprint__conv3_Var_9;

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
	 mercury__pprint__Var_11  = Max;
}
    mercury__pprint__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_4, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      mercury__pprint__conv1_Var_8 = mercury__pprint__func_0(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_4), ((MR_Box) (mercury__pprint__Var_11)), ((MR_Box) ((MR_String) ": ")));
    }
    mercury__pprint__Var_8 = ((MR_Word) mercury__pprint__conv1_Var_8);
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
	 mercury__pprint__Var_14  = Max;
}
    mercury__pprint__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_5, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      mercury__pprint__conv3_Var_9 = mercury__pprint__func_2(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_5), ((MR_Box) (mercury__pprint__Var_14)), ((MR_Box) (mercury__pprint__Var_3)));
    }
    mercury__pprint__Var_9 = ((MR_Word) mercury__pprint__conv3_Var_9);
    {
      mercury__pprint__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__1_1, 0) = ((MR_Box) (mercury__pprint__Var_8));
      MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__1_1, 1) = ((MR_Box) (mercury__pprint__Var_9));
    }
    return mercury__pprint__HeadVar__1_1;
  }
}

MR_Word MR_CALL 
mercury__pprint__semic_space_line_0_f_0(void)
{
  {
    MR_Word mercury__pprint__HeadVar__1_1;
    MR_Word mercury__pprint__TypeClassInfo_for_doc_4 = (MR_Word) &mercury__pprint_scalar_common_1[1];
    MR_Word mercury__pprint__TypeClassInfo_for_doc_5 = (MR_Word) &mercury__pprint_scalar_common_1[0];
    MR_Word mercury__pprint__Var_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
    MR_Word mercury__pprint__Var_8;
    MR_Word mercury__pprint__Var_9;
    MR_Integer mercury__pprint__Var_11;
    MR_Integer mercury__pprint__Var_14;
    MR_Box MR_CALL (* mercury__pprint__func_0)(MR_Box, MR_Box, MR_Box);
    MR_Box mercury__pprint__conv1_Var_8;
    MR_Box MR_CALL (* mercury__pprint__func_2)(MR_Box, MR_Box, MR_Box);
    MR_Box mercury__pprint__conv3_Var_9;

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
	 mercury__pprint__Var_11  = Max;
}
    mercury__pprint__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_4, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      mercury__pprint__conv1_Var_8 = mercury__pprint__func_0(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_4), ((MR_Box) (mercury__pprint__Var_11)), ((MR_Box) ((MR_String) "; ")));
    }
    mercury__pprint__Var_8 = ((MR_Word) mercury__pprint__conv1_Var_8);
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
	 mercury__pprint__Var_14  = Max;
}
    mercury__pprint__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_5, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      mercury__pprint__conv3_Var_9 = mercury__pprint__func_2(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_5), ((MR_Box) (mercury__pprint__Var_14)), ((MR_Box) (mercury__pprint__Var_3)));
    }
    mercury__pprint__Var_9 = ((MR_Word) mercury__pprint__conv3_Var_9);
    {
      mercury__pprint__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__1_1, 0) = ((MR_Box) (mercury__pprint__Var_8));
      MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__1_1, 1) = ((MR_Box) (mercury__pprint__Var_9));
    }
    return mercury__pprint__HeadVar__1_1;
  }
}

MR_Word MR_CALL 
mercury__pprint__comma_space_line_0_f_0(void)
{
  {
    MR_Word mercury__pprint__HeadVar__1_1;
    MR_Word mercury__pprint__TypeClassInfo_for_doc_4 = (MR_Word) &mercury__pprint_scalar_common_1[1];
    MR_Word mercury__pprint__TypeClassInfo_for_doc_5 = (MR_Word) &mercury__pprint_scalar_common_1[0];
    MR_Word mercury__pprint__Var_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
    MR_Word mercury__pprint__Var_8;
    MR_Word mercury__pprint__Var_9;
    MR_Integer mercury__pprint__Var_11;
    MR_Integer mercury__pprint__Var_14;
    MR_Box MR_CALL (* mercury__pprint__func_0)(MR_Box, MR_Box, MR_Box);
    MR_Box mercury__pprint__conv1_Var_8;
    MR_Box MR_CALL (* mercury__pprint__func_2)(MR_Box, MR_Box, MR_Box);
    MR_Box mercury__pprint__conv3_Var_9;

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
	 mercury__pprint__Var_11  = Max;
}
    mercury__pprint__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_4, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      mercury__pprint__conv1_Var_8 = mercury__pprint__func_0(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_4), ((MR_Box) (mercury__pprint__Var_11)), ((MR_Box) ((MR_String) ", ")));
    }
    mercury__pprint__Var_8 = ((MR_Word) mercury__pprint__conv1_Var_8);
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
	 mercury__pprint__Var_14  = Max;
}
    mercury__pprint__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_5, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      mercury__pprint__conv3_Var_9 = mercury__pprint__func_2(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_5), ((MR_Box) (mercury__pprint__Var_14)), ((MR_Box) (mercury__pprint__Var_3)));
    }
    mercury__pprint__Var_9 = ((MR_Word) mercury__pprint__conv3_Var_9);
    {
      mercury__pprint__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__1_1, 0) = ((MR_Box) (mercury__pprint__Var_8));
      MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__1_1, 1) = ((MR_Box) (mercury__pprint__Var_9));
    }
    return mercury__pprint__HeadVar__1_1;
  }
}

MR_Word MR_CALL 
mercury__pprint__space_line_0_f_0(void)
{
  {
    MR_Word mercury__pprint__HeadVar__1_1;
    MR_Word mercury__pprint__TypeClassInfo_for_doc_4 = (MR_Word) &mercury__pprint_scalar_common_1[1];
    MR_Word mercury__pprint__TypeClassInfo_for_doc_5 = (MR_Word) &mercury__pprint_scalar_common_1[0];
    MR_Word mercury__pprint__Var_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
    MR_Word mercury__pprint__Var_8;
    MR_Word mercury__pprint__Var_9;
    MR_Integer mercury__pprint__Var_11;
    MR_Integer mercury__pprint__Var_14;
    MR_Box MR_CALL (* mercury__pprint__func_0)(MR_Box, MR_Box, MR_Box);
    MR_Box mercury__pprint__conv1_Var_8;
    MR_Box MR_CALL (* mercury__pprint__func_2)(MR_Box, MR_Box, MR_Box);
    MR_Box mercury__pprint__conv3_Var_9;

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
	 mercury__pprint__Var_11  = Max;
}
    mercury__pprint__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_4, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      mercury__pprint__conv1_Var_8 = mercury__pprint__func_0(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_4), ((MR_Box) (mercury__pprint__Var_11)), ((MR_Box) ((MR_String) " ")));
    }
    mercury__pprint__Var_8 = ((MR_Word) mercury__pprint__conv1_Var_8);
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
	 mercury__pprint__Var_14  = Max;
}
    mercury__pprint__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_5, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      mercury__pprint__conv3_Var_9 = mercury__pprint__func_2(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_5), ((MR_Box) (mercury__pprint__Var_14)), ((MR_Box) (mercury__pprint__Var_3)));
    }
    mercury__pprint__Var_9 = ((MR_Word) mercury__pprint__conv3_Var_9);
    {
      mercury__pprint__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__1_1, 0) = ((MR_Box) (mercury__pprint__Var_8));
      MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__1_1, 1) = ((MR_Box) (mercury__pprint__Var_9));
    }
    return mercury__pprint__HeadVar__1_1;
  }
}

MR_Word MR_CALL 
mercury__pprint__colon_line_0_f_0(void)
{
  {
    MR_Word mercury__pprint__HeadVar__1_1;
    MR_Word mercury__pprint__TypeClassInfo_for_doc_4 = (MR_Word) &mercury__pprint_scalar_common_1[1];
    MR_Word mercury__pprint__TypeClassInfo_for_doc_5 = (MR_Word) &mercury__pprint_scalar_common_1[0];
    MR_Word mercury__pprint__Var_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
    MR_Word mercury__pprint__Var_8;
    MR_Word mercury__pprint__Var_9;
    MR_Integer mercury__pprint__Var_11;
    MR_Integer mercury__pprint__Var_14;
    MR_Box MR_CALL (* mercury__pprint__func_0)(MR_Box, MR_Box, MR_Box);
    MR_Box mercury__pprint__conv1_Var_8;
    MR_Box MR_CALL (* mercury__pprint__func_2)(MR_Box, MR_Box, MR_Box);
    MR_Box mercury__pprint__conv3_Var_9;

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
	 mercury__pprint__Var_11  = Max;
}
    mercury__pprint__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_4, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      mercury__pprint__conv1_Var_8 = mercury__pprint__func_0(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_4), ((MR_Box) (mercury__pprint__Var_11)), ((MR_Box) ((MR_String) ":")));
    }
    mercury__pprint__Var_8 = ((MR_Word) mercury__pprint__conv1_Var_8);
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
	 mercury__pprint__Var_14  = Max;
}
    mercury__pprint__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_5, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      mercury__pprint__conv3_Var_9 = mercury__pprint__func_2(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_5), ((MR_Box) (mercury__pprint__Var_14)), ((MR_Box) (mercury__pprint__Var_3)));
    }
    mercury__pprint__Var_9 = ((MR_Word) mercury__pprint__conv3_Var_9);
    {
      mercury__pprint__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__1_1, 0) = ((MR_Box) (mercury__pprint__Var_8));
      MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__1_1, 1) = ((MR_Box) (mercury__pprint__Var_9));
    }
    return mercury__pprint__HeadVar__1_1;
  }
}

MR_Word MR_CALL 
mercury__pprint__semic_line_0_f_0(void)
{
  {
    MR_Word mercury__pprint__HeadVar__1_1;
    MR_Word mercury__pprint__TypeClassInfo_for_doc_4 = (MR_Word) &mercury__pprint_scalar_common_1[1];
    MR_Word mercury__pprint__TypeClassInfo_for_doc_5 = (MR_Word) &mercury__pprint_scalar_common_1[0];
    MR_Word mercury__pprint__Var_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
    MR_Word mercury__pprint__Var_8;
    MR_Word mercury__pprint__Var_9;
    MR_Integer mercury__pprint__Var_11;
    MR_Integer mercury__pprint__Var_14;
    MR_Box MR_CALL (* mercury__pprint__func_0)(MR_Box, MR_Box, MR_Box);
    MR_Box mercury__pprint__conv1_Var_8;
    MR_Box MR_CALL (* mercury__pprint__func_2)(MR_Box, MR_Box, MR_Box);
    MR_Box mercury__pprint__conv3_Var_9;

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
	 mercury__pprint__Var_11  = Max;
}
    mercury__pprint__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_4, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      mercury__pprint__conv1_Var_8 = mercury__pprint__func_0(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_4), ((MR_Box) (mercury__pprint__Var_11)), ((MR_Box) ((MR_String) ";")));
    }
    mercury__pprint__Var_8 = ((MR_Word) mercury__pprint__conv1_Var_8);
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
	 mercury__pprint__Var_14  = Max;
}
    mercury__pprint__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_5, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      mercury__pprint__conv3_Var_9 = mercury__pprint__func_2(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_5), ((MR_Box) (mercury__pprint__Var_14)), ((MR_Box) (mercury__pprint__Var_3)));
    }
    mercury__pprint__Var_9 = ((MR_Word) mercury__pprint__conv3_Var_9);
    {
      mercury__pprint__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__1_1, 0) = ((MR_Box) (mercury__pprint__Var_8));
      MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__1_1, 1) = ((MR_Box) (mercury__pprint__Var_9));
    }
    return mercury__pprint__HeadVar__1_1;
  }
}

MR_Word MR_CALL 
mercury__pprint__comma_line_0_f_0(void)
{
  {
    MR_Word mercury__pprint__HeadVar__1_1;
    MR_Word mercury__pprint__TypeClassInfo_for_doc_4 = (MR_Word) &mercury__pprint_scalar_common_1[1];
    MR_Word mercury__pprint__TypeClassInfo_for_doc_5 = (MR_Word) &mercury__pprint_scalar_common_1[0];
    MR_Word mercury__pprint__Var_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
    MR_Word mercury__pprint__Var_8;
    MR_Word mercury__pprint__Var_9;
    MR_Integer mercury__pprint__Var_11;
    MR_Integer mercury__pprint__Var_14;
    MR_Box MR_CALL (* mercury__pprint__func_0)(MR_Box, MR_Box, MR_Box);
    MR_Box mercury__pprint__conv1_Var_8;
    MR_Box MR_CALL (* mercury__pprint__func_2)(MR_Box, MR_Box, MR_Box);
    MR_Box mercury__pprint__conv3_Var_9;

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
	 mercury__pprint__Var_11  = Max;
}
    mercury__pprint__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_4, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      mercury__pprint__conv1_Var_8 = mercury__pprint__func_0(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_4), ((MR_Box) (mercury__pprint__Var_11)), ((MR_Box) ((MR_String) ",")));
    }
    mercury__pprint__Var_8 = ((MR_Word) mercury__pprint__conv1_Var_8);
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
	 mercury__pprint__Var_14  = Max;
}
    mercury__pprint__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_5, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      mercury__pprint__conv3_Var_9 = mercury__pprint__func_2(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_5), ((MR_Box) (mercury__pprint__Var_14)), ((MR_Box) (mercury__pprint__Var_3)));
    }
    mercury__pprint__Var_9 = ((MR_Word) mercury__pprint__conv3_Var_9);
    {
      mercury__pprint__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__1_1, 0) = ((MR_Box) (mercury__pprint__Var_8));
      MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__1_1, 1) = ((MR_Box) (mercury__pprint__Var_9));
    }
    return mercury__pprint__HeadVar__1_1;
  }
}

MR_Word MR_CALL 
mercury__pprint__colon_space_0_f_0(void)
{
  {
    MR_Word mercury__pprint__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__pprint_scalar_common_1[17]);

    return mercury__pprint__HeadVar__1_1;
  }
}

MR_Word MR_CALL 
mercury__pprint__semic_space_0_f_0(void)
{
  {
    MR_Word mercury__pprint__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__pprint_scalar_common_1[16]);

    return mercury__pprint__HeadVar__1_1;
  }
}

MR_Word MR_CALL 
mercury__pprint__comma_space_0_f_0(void)
{
  {
    MR_Word mercury__pprint__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__pprint_scalar_common_1[15]);

    return mercury__pprint__HeadVar__1_1;
  }
}

MR_Word MR_CALL 
mercury__pprint__colon_0_f_0(void)
{
  {
    MR_Word mercury__pprint__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__pprint_scalar_common_1[14]);

    return mercury__pprint__HeadVar__1_1;
  }
}

MR_Word MR_CALL 
mercury__pprint__semic_0_f_0(void)
{
  {
    MR_Word mercury__pprint__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__pprint_scalar_common_1[13]);

    return mercury__pprint__HeadVar__1_1;
  }
}

MR_Word MR_CALL 
mercury__pprint__comma_0_f_0(void)
{
  {
    MR_Word mercury__pprint__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__pprint_scalar_common_1[12]);

    return mercury__pprint__HeadVar__1_1;
  }
}

MR_Word MR_CALL 
mercury__pprint__separated_3_f_0(
  MR_Word mercury__pprint__TypeInfo_for_T1_15,
  MR_Word mercury__pprint__TypeClassInfo_for_doc_14,
  MR_Word mercury__pprint__PP_1,
  MR_Box mercury__pprint__Sep_2,
  MR_Word mercury__pprint__HeadVar__3_3)
{
  {
    MR_bool mercury__pprint__succeeded;
    MR_Word mercury__pprint__HeadVar__4_4;

    if ((mercury__pprint__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__pprint__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Box mercury__pprint__X_9 = (MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__3_3, (MR_Integer) 0));
        MR_Word mercury__pprint__Xs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__3_3, (MR_Integer) 1)));

        mercury__pprint__succeeded = (mercury__pprint__Xs_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (mercury__pprint__succeeded)
          {
            MR_Box MR_CALL (* mercury__pprint__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__pprint__PP_1, (MR_Integer) 1)));
            MR_Box mercury__pprint__conv1_HeadVar__4_4;

            {
              mercury__pprint__conv1_HeadVar__4_4 = mercury__pprint__func_0(((MR_Box) mercury__pprint__PP_1), mercury__pprint__X_9);
            }
            mercury__pprint__HeadVar__4_4 = ((MR_Word) mercury__pprint__conv1_HeadVar__4_4);
          }
        else
          {
            MR_Word mercury__pprint__TypeClassInfo_for_doc_16 = (MR_Word) &mercury__pprint_scalar_common_1[0];
            MR_Word mercury__pprint__Var_11;
            MR_Word mercury__pprint__Var_12;
            MR_Word mercury__pprint__Var_13;
            MR_Word mercury__pprint__Var_19;
            MR_Word mercury__pprint__Var_20;
            MR_Integer mercury__pprint__Var_22;
            MR_Integer mercury__pprint__Var_25;
            MR_Box MR_CALL (* mercury__pprint__func_2)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__pprint__PP_1, (MR_Integer) 1)));
            MR_Box mercury__pprint__conv3_Var_11;
            MR_Box MR_CALL (* mercury__pprint__func_4)(MR_Box, MR_Box, MR_Box);
            MR_Box mercury__pprint__conv5_Var_19;
            MR_Box MR_CALL (* mercury__pprint__func_6)(MR_Box, MR_Box, MR_Box);
            MR_Box mercury__pprint__conv7_Var_20;

            {
              mercury__pprint__conv3_Var_11 = mercury__pprint__func_2(((MR_Box) mercury__pprint__PP_1), mercury__pprint__X_9);
            }
            mercury__pprint__Var_11 = ((MR_Word) mercury__pprint__conv3_Var_11);
            {
              mercury__pprint__Var_13 = mercury__pprint__separated_3_f_0(mercury__pprint__TypeInfo_for_T1_15, mercury__pprint__TypeClassInfo_for_doc_14, mercury__pprint__PP_1, mercury__pprint__Sep_2, mercury__pprint__Xs_10);
            }
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
	 mercury__pprint__Var_22  = Max;
}
            mercury__pprint__func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_14, (MR_Integer) 0)), (MR_Integer) 5)));
            {
              mercury__pprint__conv5_Var_19 = mercury__pprint__func_4(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_14), ((MR_Box) (mercury__pprint__Var_22)), mercury__pprint__Sep_2);
            }
            mercury__pprint__Var_19 = ((MR_Word) mercury__pprint__conv5_Var_19);
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
	 mercury__pprint__Var_25  = Max;
}
            mercury__pprint__func_6 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_16, (MR_Integer) 0)), (MR_Integer) 5)));
            {
              mercury__pprint__conv7_Var_20 = mercury__pprint__func_6(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_16), ((MR_Box) (mercury__pprint__Var_25)), ((MR_Box) (mercury__pprint__Var_13)));
            }
            mercury__pprint__Var_20 = ((MR_Word) mercury__pprint__conv7_Var_20);
            {
              mercury__pprint__Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__pprint__Var_12, 0) = ((MR_Box) (mercury__pprint__Var_19));
              MR_hl_field(MR_mktag(1), mercury__pprint__Var_12, 1) = ((MR_Box) (mercury__pprint__Var_20));
            }
            {
              mercury__pprint__HeadVar__4_4 = mercury__pprint__f_43_43_2_f_0(mercury__pprint__TypeClassInfo_for_doc_16, mercury__pprint__TypeClassInfo_for_doc_16, ((MR_Box) (mercury__pprint__Var_11)), ((MR_Box) (mercury__pprint__Var_12)));
            }
          }
      }
    return mercury__pprint__HeadVar__4_4;
  }
}

static MR_Word MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_51_56_95_95_91_51_44_32_52_93_95_48_2_f_in__list_0(
  MR_Word mercury__pprint__Var_12,
  MR_Integer mercury__pprint__Var_13,
  MR_Word mercury__pprint__HeadVar__2_2)
{
  {
    MR_Word mercury__pprint__HeadVar__3_3;

    if ((mercury__pprint__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__pprint__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Box mercury__pprint__V_6_6 = (MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__2_2, (MR_Integer) 0));
        MR_Word mercury__pprint__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mercury__pprint__V_8_8;
        MR_Word mercury__pprint__V_9_9;

        {
          mercury__pprint__V_8_8 = mercury__pprint__to_doc_3_f_0(mercury__pprint__Var_12, mercury__pprint__Var_13, (MR_Integer) 1000, mercury__pprint__V_6_6);
        }
        {
          mercury__pprint__V_9_9 = mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_51_56_95_95_91_51_44_32_52_93_95_48_2_f_in__list_0(mercury__pprint__Var_12, mercury__pprint__Var_13, mercury__pprint__V_7_7);
        }
        {
          mercury__pprint__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__3_3, 0) = ((MR_Box) (mercury__pprint__V_8_8));
          MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__3_3, 1) = ((MR_Box) (mercury__pprint__V_9_9));
        }
      }
    return mercury__pprint__HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
mercury__pprint__robdd_to_doc_2_f_0(
  MR_Word mercury__pprint__TypeInfo_for_T_12,
  MR_Integer mercury__pprint__Depth_4,
  MR_Word mercury__pprint__R_5)
{
  {
    MR_Word mercury__pprint__HeadVar__3_3;
    MR_Word mercury__pprint__TypeClassInfo_for_doc_13 = (MR_Word) &mercury__pprint_scalar_common_1[1];
    MR_Word mercury__pprint__TypeClassInfo_for_doc_14 = (MR_Word) &mercury__pprint_scalar_common_1[0];
    MR_Word mercury__pprint__TypeCtorInfo_15_15 = (MR_Word) &mercury__robdd__robdd__type_ctor_info_literal_1;
    MR_Word mercury__pprint__TypeInfo_16_16;
    MR_Word mercury__pprint__TypeCtorInfo_17_17 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
    MR_Word mercury__pprint__TypeInfo_18_18;
    MR_Word mercury__pprint__TypeClassInfo_for_doc_26;
    MR_Word mercury__pprint__TypeClassInfo_for_doc_31;
    MR_Word mercury__pprint__TypeClassInfo_for_doc_38;
    MR_Word mercury__pprint__TypeClassInfo_for_doc_48;
    MR_Word mercury__pprint__TypeClassInfo_for_doc_52;
    MR_Word mercury__pprint__TypeClassInfo_for_doc_53;
    MR_Word mercury__pprint__Var_7;
    MR_Word mercury__pprint__Var_8;
    MR_Integer mercury__pprint__Var_9;
    MR_Word mercury__pprint__Var_11;
    MR_Word mercury__pprint__Var_21;
    MR_Word mercury__pprint__Var_23;
    MR_Integer mercury__pprint__Var_24;
    MR_Word mercury__pprint__Var_29;
    MR_Word mercury__pprint__Var_41;
    MR_Integer mercury__pprint__Var_43;
    MR_Word mercury__pprint__Var_56;
    MR_Word mercury__pprint__Var_57;
    MR_Integer mercury__pprint__Var_59;
    MR_Integer mercury__pprint__Var_62;
    MR_Box MR_CALL (* mercury__pprint__func_0)(MR_Box, MR_Box, MR_Box);
    MR_Box mercury__pprint__conv1_Var_41;
    MR_Box MR_CALL (* mercury__pprint__func_2)(MR_Box, MR_Box, MR_Box);
    MR_Box mercury__pprint__conv3_Var_56;
    MR_Box MR_CALL (* mercury__pprint__func_4)(MR_Box, MR_Box, MR_Box);
    MR_Box mercury__pprint__conv5_Var_57;

    {
      mercury__pprint__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__pprint__TypeInfo_16_16, 0) = ((MR_Box) (mercury__pprint__TypeCtorInfo_15_15));
      MR_hl_field(MR_mktag(0), mercury__pprint__TypeInfo_16_16, 1) = ((MR_Box) (mercury__pprint__TypeInfo_for_T_12));
    }
    {
      mercury__pprint__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__pprint__TypeInfo_18_18, 0) = ((MR_Box) (mercury__pprint__TypeCtorInfo_17_17));
      MR_hl_field(MR_mktag(0), mercury__pprint__TypeInfo_18_18, 1) = ((MR_Box) (mercury__pprint__TypeInfo_16_16));
    }
    mercury__pprint__Var_9 = (mercury__pprint__Depth_4 - (MR_Integer) 1);
    {
      mercury__pprint__Var_11 = mercury__robdd__dnf_1_f_0(mercury__pprint__TypeInfo_for_T_12, mercury__pprint__R_5);
    }
    mercury__pprint__TypeClassInfo_for_doc_26 = (MR_Word) &mercury__pprint_scalar_common_1[0];
    mercury__pprint__Var_24 = (mercury__pprint__Var_9 - (MR_Integer) 1);
    mercury__pprint__TypeClassInfo_for_doc_31 = (MR_Word) &mercury__pprint_scalar_common_1[0];
    {
      mercury__pprint__Var_29 = mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_51_56_95_95_91_51_44_32_52_93_95_48_2_f_in__list_0(mercury__pprint__TypeInfo_18_18, mercury__pprint__Var_24, (MR_Word) mercury__pprint__Var_11);
    }
    mercury__pprint__TypeClassInfo_for_doc_38 = (MR_Word) &mercury__pprint_scalar_common_1[1];
    {
      mercury__pprint__Var_23 = mercury__pprint__packed_3_f_0(mercury__pprint__TypeClassInfo_for_doc_38, mercury__pprint__TypeClassInfo_for_doc_31, mercury__pprint__Var_24, ((MR_Box) ((MR_String) ", ")), mercury__pprint__Var_29);
    }
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
	 mercury__pprint__Var_43  = Max;
}
    mercury__pprint__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_26, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      mercury__pprint__conv1_Var_41 = mercury__pprint__func_0(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_26), ((MR_Box) (mercury__pprint__Var_43)), ((MR_Box) (mercury__pprint__Var_23)));
    }
    mercury__pprint__Var_41 = ((MR_Word) mercury__pprint__conv1_Var_41);
    {
      mercury__pprint__Var_21 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), mercury__pprint__Var_21, 0) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(2), mercury__pprint__Var_21, 1) = ((MR_Box) (mercury__pprint__Var_41));
    }
    mercury__pprint__TypeClassInfo_for_doc_48 = (MR_Word) &mercury__pprint_scalar_common_1[1];
    {
      mercury__pprint__Var_8 = mercury__pprint__bracketed_3_f_0(mercury__pprint__TypeClassInfo_for_doc_48, mercury__pprint__TypeClassInfo_for_doc_48, mercury__pprint__TypeClassInfo_for_doc_26, ((MR_Box) ((MR_String) "[")), ((MR_Box) ((MR_String) "]")), ((MR_Box) (mercury__pprint__Var_21)));
    }
    mercury__pprint__TypeClassInfo_for_doc_52 = (MR_Word) &mercury__pprint_scalar_common_1[1];
    mercury__pprint__TypeClassInfo_for_doc_53 = (MR_Word) &mercury__pprint_scalar_common_1[1];
    {
      mercury__pprint__Var_7 = mercury__pprint__bracketed_3_f_0(mercury__pprint__TypeClassInfo_for_doc_52, mercury__pprint__TypeClassInfo_for_doc_53, mercury__pprint__TypeClassInfo_for_doc_14, ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_String) ")")), ((MR_Box) (mercury__pprint__Var_8)));
    }
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
	 mercury__pprint__Var_59  = Max;
}
    mercury__pprint__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_13, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      mercury__pprint__conv3_Var_56 = mercury__pprint__func_2(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_13), ((MR_Box) (mercury__pprint__Var_59)), ((MR_Box) ((MR_String) "robdd_dnf")));
    }
    mercury__pprint__Var_56 = ((MR_Word) mercury__pprint__conv3_Var_56);
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
	 mercury__pprint__Var_62  = Max;
}
    mercury__pprint__func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_14, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      mercury__pprint__conv5_Var_57 = mercury__pprint__func_4(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_14), ((MR_Box) (mercury__pprint__Var_62)), ((MR_Box) (mercury__pprint__Var_7)));
    }
    mercury__pprint__Var_57 = ((MR_Word) mercury__pprint__conv5_Var_57);
    {
      mercury__pprint__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__3_3, 0) = ((MR_Box) (mercury__pprint__Var_56));
      MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__3_3, 1) = ((MR_Box) (mercury__pprint__Var_57));
    }
    return mercury__pprint__HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
mercury__pprint__map_pair_to_doc_2_f_0(
  MR_Word mercury__pprint__TypeInfo_for_T1_21,
  MR_Word mercury__pprint__TypeInfo_for_T2_22,
  MR_Integer mercury__pprint__Depth_4,
  MR_Word mercury__pprint__HeadVar__2_2)
{
  {
    MR_Word mercury__pprint__HeadVar__3_3;
    MR_Word mercury__pprint__TypeClassInfo_for_doc_23 = (MR_Word) &mercury__pprint_scalar_common_1[0];
    MR_Box mercury__pprint__Key_5 = (MR_hl_field(MR_mktag(0), mercury__pprint__HeadVar__2_2, (MR_Integer) 0));
    MR_Box mercury__pprint__Value_6 = (MR_hl_field(MR_mktag(0), mercury__pprint__HeadVar__2_2, (MR_Integer) 1));
    MR_Word mercury__pprint__Var_7;
    MR_Integer mercury__pprint__Var_8 = (mercury__pprint__Depth_4 - (MR_Integer) 1);
    MR_Word mercury__pprint__Var_10;
    MR_Word mercury__pprint__Var_11;
    MR_Word mercury__pprint__Var_13;
    MR_Word mercury__pprint__Var_14;
    MR_Word mercury__pprint__Var_16;
    MR_Word mercury__pprint__Var_17;
    MR_Word mercury__pprint__Var_18;
    MR_Integer mercury__pprint__Var_19;
    MR_Word mercury__pprint__Var_33;
    MR_Integer mercury__pprint__Var_35;
    MR_Word mercury__pprint__Var_38;
    MR_Integer mercury__pprint__Var_40;
    MR_Box MR_CALL (* mercury__pprint__func_0)(MR_Box, MR_Box, MR_Box);
    MR_Box mercury__pprint__conv1_Var_33;
    MR_Box MR_CALL (* mercury__pprint__func_2)(MR_Box, MR_Box, MR_Box);
    MR_Box mercury__pprint__conv3_Var_38;

    {
      mercury__pprint__Var_7 = mercury__pprint__to_doc_3_f_0(mercury__pprint__TypeInfo_for_T1_21, mercury__pprint__Var_8, (MR_Integer) 1000, mercury__pprint__Key_5);
    }
    mercury__pprint__Var_11 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__pprint_scalar_common_1[11]);
    mercury__pprint__Var_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
    mercury__pprint__Var_19 = (mercury__pprint__Depth_4 - (MR_Integer) 1);
    {
      mercury__pprint__Var_18 = mercury__pprint__to_doc_3_f_0(mercury__pprint__TypeInfo_for_T2_22, mercury__pprint__Var_19, (MR_Integer) 1000, mercury__pprint__Value_6);
    }
    {
      mercury__pprint__Var_16 = mercury__pprint__f_43_43_2_f_0(mercury__pprint__TypeClassInfo_for_doc_23, mercury__pprint__TypeClassInfo_for_doc_23, ((MR_Box) (mercury__pprint__Var_17)), ((MR_Box) (mercury__pprint__Var_18)));
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
	 mercury__pprint__Var_35  = Max;
}
    mercury__pprint__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_23, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      mercury__pprint__conv1_Var_33 = mercury__pprint__func_0(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_23), ((MR_Box) (mercury__pprint__Var_35)), ((MR_Box) (mercury__pprint__Var_16)));
    }
    mercury__pprint__Var_33 = ((MR_Word) mercury__pprint__conv1_Var_33);
    {
      mercury__pprint__Var_14 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), mercury__pprint__Var_14, 0) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(2), mercury__pprint__Var_14, 1) = ((MR_Box) (mercury__pprint__Var_33));
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
	 mercury__pprint__Var_40  = Max;
}
    mercury__pprint__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_23, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      mercury__pprint__conv3_Var_38 = mercury__pprint__func_2(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_23), ((MR_Box) (mercury__pprint__Var_40)), ((MR_Box) (mercury__pprint__Var_14)));
    }
    mercury__pprint__Var_38 = ((MR_Word) mercury__pprint__conv3_Var_38);
    {
      mercury__pprint__Var_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), mercury__pprint__Var_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), mercury__pprint__Var_13, 1) = ((MR_Box) (mercury__pprint__Var_38));
    }
    {
      mercury__pprint__Var_10 = mercury__pprint__f_43_43_2_f_0(mercury__pprint__TypeClassInfo_for_doc_23, mercury__pprint__TypeClassInfo_for_doc_23, ((MR_Box) (mercury__pprint__Var_11)), ((MR_Box) (mercury__pprint__Var_13)));
    }
    {
      mercury__pprint__HeadVar__3_3 = mercury__pprint__f_43_43_2_f_0(mercury__pprint__TypeClassInfo_for_doc_23, mercury__pprint__TypeClassInfo_for_doc_23, ((MR_Box) (mercury__pprint__Var_7)), ((MR_Box) (mercury__pprint__Var_10)));
    }
    return mercury__pprint__HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
mercury__pprint__map_to_doc_2_f_0(
  MR_Word mercury__pprint__TypeInfo_for_T1_16,
  MR_Word mercury__pprint__TypeInfo_for_T2_17,
  MR_Integer mercury__pprint__Depth_4,
  MR_Word mercury__pprint__X_5)
{
  {
    MR_Word mercury__pprint__Doc_6;
    MR_Word mercury__pprint__TypeCtorInfo_20_20 = (MR_Word) &mercury__pprint__pprint__type_ctor_info_map_pair_2;
    MR_Word mercury__pprint__TypeInfo_21_21;
    MR_Word mercury__pprint__TypeClassInfo_for_doc_24;
    MR_Word mercury__pprint__TypeClassInfo_for_doc_25;
    MR_Word mercury__pprint__TypeClassInfo_for_doc_42;
    MR_Word mercury__pprint__TypeClassInfo_for_doc_47;
    MR_Word mercury__pprint__TypeClassInfo_for_doc_54;
    MR_Word mercury__pprint__TypeClassInfo_for_doc_64;
    MR_Word mercury__pprint__TypeClassInfo_for_doc_68;
    MR_Word mercury__pprint__TypeClassInfo_for_doc_69;
    MR_Word mercury__pprint__KVs_7;
    MR_Word mercury__pprint__Var_9;
    MR_Word mercury__pprint__Var_10;
    MR_Word mercury__pprint__Var_12;
    MR_Word mercury__pprint__Var_13;
    MR_Integer mercury__pprint__Var_14;
    MR_Word mercury__pprint__V_5_32;
    MR_Word mercury__pprint__Var_37;
    MR_Word mercury__pprint__Var_39;
    MR_Integer mercury__pprint__Var_40;
    MR_Word mercury__pprint__Var_45;
    MR_Word mercury__pprint__Var_57;
    MR_Integer mercury__pprint__Var_59;
    MR_Word mercury__pprint__Var_72;
    MR_Word mercury__pprint__Var_73;
    MR_Integer mercury__pprint__Var_75;
    MR_Integer mercury__pprint__Var_78;
    MR_Word mercury__pprint__Var_83;
    MR_Integer mercury__pprint__Var_85;
    MR_Box MR_CALL (* mercury__pprint__func_0)(MR_Box, MR_Box, MR_Box);
    MR_Box mercury__pprint__conv1_Var_57;
    MR_Box MR_CALL (* mercury__pprint__func_2)(MR_Box, MR_Box, MR_Box);
    MR_Box mercury__pprint__conv3_Var_72;
    MR_Box MR_CALL (* mercury__pprint__func_4)(MR_Box, MR_Box, MR_Box);
    MR_Box mercury__pprint__conv5_Var_73;
    MR_Box MR_CALL (* mercury__pprint__func_6)(MR_Box, MR_Box, MR_Box);
    MR_Box mercury__pprint__conv7_Var_83;

    {
      mercury__pprint__TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__pprint__TypeInfo_21_21, 0) = ((MR_Box) (mercury__pprint__TypeCtorInfo_20_20));
      MR_hl_field(MR_mktag(0), mercury__pprint__TypeInfo_21_21, 1) = ((MR_Box) (mercury__pprint__TypeInfo_for_T1_16));
      MR_hl_field(MR_mktag(0), mercury__pprint__TypeInfo_21_21, 2) = ((MR_Box) (mercury__pprint__TypeInfo_for_T2_17));
    }
    mercury__pprint__V_5_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__pprint__TypeInfo_for_T1_16, mercury__pprint__TypeInfo_for_T2_17, mercury__pprint__X_5, mercury__pprint__V_5_32, &mercury__pprint__Var_9);
    }
    {
      mercury__pprint__KVs_7 = mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_93_95_48_2_f_in__list_0(mercury__pprint__Var_9);
    }
    mercury__pprint__TypeClassInfo_for_doc_24 = (MR_Word) &mercury__pprint_scalar_common_1[0];
    mercury__pprint__TypeClassInfo_for_doc_25 = (MR_Word) &mercury__pprint_scalar_common_1[1];
    mercury__pprint__Var_14 = (mercury__pprint__Depth_4 - (MR_Integer) 1);
    mercury__pprint__TypeClassInfo_for_doc_42 = (MR_Word) &mercury__pprint_scalar_common_1[0];
    mercury__pprint__Var_40 = (mercury__pprint__Var_14 - (MR_Integer) 1);
    mercury__pprint__TypeClassInfo_for_doc_47 = (MR_Word) &mercury__pprint_scalar_common_1[0];
    {
      mercury__pprint__Var_45 = mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_51_56_95_95_91_51_44_32_52_93_95_48_2_f_in__list_0(mercury__pprint__TypeInfo_21_21, mercury__pprint__Var_40, (MR_Word) mercury__pprint__KVs_7);
    }
    mercury__pprint__TypeClassInfo_for_doc_54 = (MR_Word) &mercury__pprint_scalar_common_1[1];
    {
      mercury__pprint__Var_39 = mercury__pprint__packed_3_f_0(mercury__pprint__TypeClassInfo_for_doc_54, mercury__pprint__TypeClassInfo_for_doc_47, mercury__pprint__Var_40, ((MR_Box) ((MR_String) ", ")), mercury__pprint__Var_45);
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
	 mercury__pprint__Var_59  = Max;
}
    mercury__pprint__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_42, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      mercury__pprint__conv1_Var_57 = mercury__pprint__func_0(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_42), ((MR_Box) (mercury__pprint__Var_59)), ((MR_Box) (mercury__pprint__Var_39)));
    }
    mercury__pprint__Var_57 = ((MR_Word) mercury__pprint__conv1_Var_57);
    {
      mercury__pprint__Var_37 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), mercury__pprint__Var_37, 0) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(2), mercury__pprint__Var_37, 1) = ((MR_Box) (mercury__pprint__Var_57));
    }
    mercury__pprint__TypeClassInfo_for_doc_64 = (MR_Word) &mercury__pprint_scalar_common_1[1];
    {
      mercury__pprint__Var_13 = mercury__pprint__bracketed_3_f_0(mercury__pprint__TypeClassInfo_for_doc_64, mercury__pprint__TypeClassInfo_for_doc_64, mercury__pprint__TypeClassInfo_for_doc_42, ((MR_Box) ((MR_String) "[")), ((MR_Box) ((MR_String) "]")), ((MR_Box) (mercury__pprint__Var_37)));
    }
    mercury__pprint__TypeClassInfo_for_doc_68 = (MR_Word) &mercury__pprint_scalar_common_1[1];
    mercury__pprint__TypeClassInfo_for_doc_69 = (MR_Word) &mercury__pprint_scalar_common_1[1];
    {
      mercury__pprint__Var_12 = mercury__pprint__bracketed_3_f_0(mercury__pprint__TypeClassInfo_for_doc_68, mercury__pprint__TypeClassInfo_for_doc_69, mercury__pprint__TypeClassInfo_for_doc_24, ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_String) ")")), ((MR_Box) (mercury__pprint__Var_13)));
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
	 mercury__pprint__Var_75  = Max;
}
    mercury__pprint__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_25, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      mercury__pprint__conv3_Var_72 = mercury__pprint__func_2(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_25), ((MR_Box) (mercury__pprint__Var_75)), ((MR_Box) ((MR_String) "map")));
    }
    mercury__pprint__Var_72 = ((MR_Word) mercury__pprint__conv3_Var_72);
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
	 mercury__pprint__Var_78  = Max;
}
    mercury__pprint__func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_24, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      mercury__pprint__conv5_Var_73 = mercury__pprint__func_4(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_24), ((MR_Box) (mercury__pprint__Var_78)), ((MR_Box) (mercury__pprint__Var_12)));
    }
    mercury__pprint__Var_73 = ((MR_Word) mercury__pprint__conv5_Var_73);
    {
      mercury__pprint__Var_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__pprint__Var_10, 0) = ((MR_Box) (mercury__pprint__Var_72));
      MR_hl_field(MR_mktag(1), mercury__pprint__Var_10, 1) = ((MR_Box) (mercury__pprint__Var_73));
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
	 mercury__pprint__Var_85  = Max;
}
    mercury__pprint__func_6 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_24, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      mercury__pprint__conv7_Var_83 = mercury__pprint__func_6(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_24), ((MR_Box) (mercury__pprint__Var_85)), ((MR_Box) (mercury__pprint__Var_10)));
    }
    mercury__pprint__Var_83 = ((MR_Word) mercury__pprint__conv7_Var_83);
    {
      mercury__pprint__Doc_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), mercury__pprint__Doc_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), mercury__pprint__Doc_6, 1) = ((MR_Box) (mercury__pprint__Var_83));
    }
    return mercury__pprint__Doc_6;
  }
}

static MR_Word MR_CALL 
mercury__pprint__version_array_to_doc_2_f_0(
  MR_Word mercury__pprint__TypeInfo_for_T_13,
  MR_Integer mercury__pprint__Depth_4,
  MR_Box mercury__pprint__A_5)
{
  {
    MR_Word mercury__pprint__HeadVar__3_3;
    MR_Word mercury__pprint__TypeClassInfo_for_doc_14 = (MR_Word) &mercury__pprint_scalar_common_1[0];
    MR_Word mercury__pprint__TypeClassInfo_for_doc_15 = (MR_Word) &mercury__pprint_scalar_common_1[1];
    MR_Word mercury__pprint__TypeClassInfo_for_doc_45;
    MR_Word mercury__pprint__TypeClassInfo_for_doc_50;
    MR_Word mercury__pprint__TypeClassInfo_for_doc_57;
    MR_Word mercury__pprint__TypeClassInfo_for_doc_67;
    MR_Word mercury__pprint__TypeClassInfo_for_doc_71;
    MR_Word mercury__pprint__TypeClassInfo_for_doc_72;
    MR_Word mercury__pprint__Var_6;
    MR_Word mercury__pprint__Var_8;
    MR_Word mercury__pprint__Var_9;
    MR_Integer mercury__pprint__Var_10 = (mercury__pprint__Depth_4 - (MR_Integer) 1);
    MR_Word mercury__pprint__Var_12;
    MR_Word mercury__pprint__V_5_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Integer mercury__pprint__V_8_32;
    MR_Integer mercury__pprint__V_4_36;
    MR_Word mercury__pprint__Var_40;
    MR_Word mercury__pprint__Var_42;
    MR_Integer mercury__pprint__Var_43;
    MR_Word mercury__pprint__Var_48;
    MR_Word mercury__pprint__Var_60;
    MR_Integer mercury__pprint__Var_62;
    MR_Word mercury__pprint__Var_75;
    MR_Word mercury__pprint__Var_76;
    MR_Integer mercury__pprint__Var_78;
    MR_Integer mercury__pprint__Var_81;
    MR_Word mercury__pprint__Var_86;
    MR_Integer mercury__pprint__Var_88;
    MR_Word mercury__pprint__TypeInfo_for_T_90;
    MR_Box MR_CALL (* mercury__pprint__func_0)(MR_Box, MR_Box, MR_Box);
    MR_Box mercury__pprint__conv1_Var_60;
    MR_Box MR_CALL (* mercury__pprint__func_2)(MR_Box, MR_Box, MR_Box);
    MR_Box mercury__pprint__conv3_Var_75;
    MR_Box MR_CALL (* mercury__pprint__func_4)(MR_Box, MR_Box, MR_Box);
    MR_Box mercury__pprint__conv5_Var_76;
    MR_Box MR_CALL (* mercury__pprint__func_6)(MR_Box, MR_Box, MR_Box);
    MR_Box mercury__pprint__conv7_Var_86;

{
#define MR_PROC_LABEL mercury__pprint__version_array_to_doc_2_f_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__pprint__A_5 , VA);
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_4_36  = N;
}
    mercury__pprint__V_8_32 = (mercury__pprint__V_4_36 - (MR_Integer) 1);
    {
      mercury__pprint__Var_12 = mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_52_54_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_f_in__version_array_0(mercury__pprint__TypeInfo_for_T_13, mercury__pprint__A_5, mercury__pprint__V_5_21, mercury__pprint__V_8_32);
    }
    mercury__pprint__TypeClassInfo_for_doc_45 = (MR_Word) &mercury__pprint_scalar_common_1[0];
    mercury__pprint__Var_43 = (mercury__pprint__Var_10 - (MR_Integer) 1);
    mercury__pprint__TypeClassInfo_for_doc_50 = (MR_Word) &mercury__pprint_scalar_common_1[0];
    {
      mercury__pprint__Var_48 = mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_51_56_95_95_91_51_44_32_52_93_95_48_2_f_in__list_0(mercury__pprint__TypeInfo_for_T_13, mercury__pprint__Var_43, mercury__pprint__Var_12);
    }
    mercury__pprint__TypeClassInfo_for_doc_57 = (MR_Word) &mercury__pprint_scalar_common_1[1];
    {
      mercury__pprint__Var_42 = mercury__pprint__packed_3_f_0(mercury__pprint__TypeClassInfo_for_doc_57, mercury__pprint__TypeClassInfo_for_doc_50, mercury__pprint__Var_43, ((MR_Box) ((MR_String) ", ")), mercury__pprint__Var_48);
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
	 mercury__pprint__Var_62  = Max;
}
    mercury__pprint__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_45, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      mercury__pprint__conv1_Var_60 = mercury__pprint__func_0(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_45), ((MR_Box) (mercury__pprint__Var_62)), ((MR_Box) (mercury__pprint__Var_42)));
    }
    mercury__pprint__Var_60 = ((MR_Word) mercury__pprint__conv1_Var_60);
    {
      mercury__pprint__Var_40 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), mercury__pprint__Var_40, 0) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(2), mercury__pprint__Var_40, 1) = ((MR_Box) (mercury__pprint__Var_60));
    }
    mercury__pprint__TypeClassInfo_for_doc_67 = (MR_Word) &mercury__pprint_scalar_common_1[1];
    {
      mercury__pprint__Var_9 = mercury__pprint__bracketed_3_f_0(mercury__pprint__TypeClassInfo_for_doc_67, mercury__pprint__TypeClassInfo_for_doc_67, mercury__pprint__TypeClassInfo_for_doc_45, ((MR_Box) ((MR_String) "[")), ((MR_Box) ((MR_String) "]")), ((MR_Box) (mercury__pprint__Var_40)));
    }
    mercury__pprint__TypeClassInfo_for_doc_71 = (MR_Word) &mercury__pprint_scalar_common_1[1];
    mercury__pprint__TypeClassInfo_for_doc_72 = (MR_Word) &mercury__pprint_scalar_common_1[1];
    {
      mercury__pprint__Var_8 = mercury__pprint__bracketed_3_f_0(mercury__pprint__TypeClassInfo_for_doc_71, mercury__pprint__TypeClassInfo_for_doc_72, mercury__pprint__TypeClassInfo_for_doc_14, ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_String) ")")), ((MR_Box) (mercury__pprint__Var_9)));
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
	 mercury__pprint__Var_78  = Max;
}
    mercury__pprint__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_15, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      mercury__pprint__conv3_Var_75 = mercury__pprint__func_2(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_15), ((MR_Box) (mercury__pprint__Var_78)), ((MR_Box) ((MR_String) "version_array")));
    }
    mercury__pprint__Var_75 = ((MR_Word) mercury__pprint__conv3_Var_75);
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
	 mercury__pprint__Var_81  = Max;
}
    mercury__pprint__func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_14, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      mercury__pprint__conv5_Var_76 = mercury__pprint__func_4(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_14), ((MR_Box) (mercury__pprint__Var_81)), ((MR_Box) (mercury__pprint__Var_8)));
    }
    mercury__pprint__Var_76 = ((MR_Word) mercury__pprint__conv5_Var_76);
    {
      mercury__pprint__Var_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__pprint__Var_6, 0) = ((MR_Box) (mercury__pprint__Var_75));
      MR_hl_field(MR_mktag(1), mercury__pprint__Var_6, 1) = ((MR_Box) (mercury__pprint__Var_76));
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
	 mercury__pprint__Var_88  = Max;
}
    mercury__pprint__func_6 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_14, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      mercury__pprint__conv7_Var_86 = mercury__pprint__func_6(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_14), ((MR_Box) (mercury__pprint__Var_88)), ((MR_Box) (mercury__pprint__Var_6)));
    }
    mercury__pprint__Var_86 = ((MR_Word) mercury__pprint__conv7_Var_86);
    {
      mercury__pprint__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__3_3, 1) = ((MR_Box) (mercury__pprint__Var_86));
    }
    return mercury__pprint__HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
mercury__pprint__array_to_doc_2_f_0(
  MR_Word mercury__pprint__TypeInfo_for_T_13,
  MR_Integer mercury__pprint__Depth_4,
  MR_ArrayPtr mercury__pprint__A_5)
{
  {
    MR_Word mercury__pprint__HeadVar__3_3;
    MR_Word mercury__pprint__TypeClassInfo_for_doc_14 = (MR_Word) &mercury__pprint_scalar_common_1[0];
    MR_Word mercury__pprint__TypeClassInfo_for_doc_15 = (MR_Word) &mercury__pprint_scalar_common_1[1];
    MR_Word mercury__pprint__TypeClassInfo_for_doc_32;
    MR_Word mercury__pprint__TypeClassInfo_for_doc_37;
    MR_Word mercury__pprint__TypeClassInfo_for_doc_44;
    MR_Word mercury__pprint__TypeClassInfo_for_doc_54;
    MR_Word mercury__pprint__TypeClassInfo_for_doc_58;
    MR_Word mercury__pprint__TypeClassInfo_for_doc_59;
    MR_Word mercury__pprint__Var_6;
    MR_Word mercury__pprint__Var_8;
    MR_Word mercury__pprint__Var_9;
    MR_Integer mercury__pprint__Var_10 = (mercury__pprint__Depth_4 - (MR_Integer) 1);
    MR_Word mercury__pprint__Var_12;
    MR_Integer mercury__pprint__V_5_20;
    MR_Integer mercury__pprint__V_6_21;
    MR_Word mercury__pprint__Var_27;
    MR_Word mercury__pprint__Var_29;
    MR_Integer mercury__pprint__Var_30;
    MR_Word mercury__pprint__Var_35;
    MR_Word mercury__pprint__Var_47;
    MR_Integer mercury__pprint__Var_49;
    MR_Word mercury__pprint__Var_62;
    MR_Word mercury__pprint__Var_63;
    MR_Integer mercury__pprint__Var_65;
    MR_Integer mercury__pprint__Var_68;
    MR_Word mercury__pprint__Var_73;
    MR_Integer mercury__pprint__Var_75;
    MR_Word mercury__pprint__TypeInfo_for_T_77;
    MR_Word mercury__pprint__TypeInfo_for_T_78;
    MR_Box MR_CALL (* mercury__pprint__func_0)(MR_Box, MR_Box, MR_Box);
    MR_Box mercury__pprint__conv1_Var_47;
    MR_Box MR_CALL (* mercury__pprint__func_2)(MR_Box, MR_Box, MR_Box);
    MR_Box mercury__pprint__conv3_Var_62;
    MR_Box MR_CALL (* mercury__pprint__func_4)(MR_Box, MR_Box, MR_Box);
    MR_Box mercury__pprint__conv5_Var_63;
    MR_Box MR_CALL (* mercury__pprint__func_6)(MR_Box, MR_Box, MR_Box);
    MR_Box mercury__pprint__conv7_Var_73;

{
#define MR_PROC_LABEL mercury__pprint__array_to_doc_2_f_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__pprint__A_5 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_5_20  = Min;
}
{
#define MR_PROC_LABEL mercury__pprint__array_to_doc_2_f_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__pprint__A_5 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_6_21  = Max;
}
    {
      mercury__array__fetch_items_4_p_0(mercury__pprint__TypeInfo_for_T_13, mercury__pprint__A_5, mercury__pprint__V_5_20, mercury__pprint__V_6_21, &mercury__pprint__Var_12);
    }
    mercury__pprint__TypeClassInfo_for_doc_32 = (MR_Word) &mercury__pprint_scalar_common_1[0];
    mercury__pprint__Var_30 = (mercury__pprint__Var_10 - (MR_Integer) 1);
    mercury__pprint__TypeClassInfo_for_doc_37 = (MR_Word) &mercury__pprint_scalar_common_1[0];
    {
      mercury__pprint__Var_35 = mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_51_56_95_95_91_51_44_32_52_93_95_48_2_f_in__list_0(mercury__pprint__TypeInfo_for_T_13, mercury__pprint__Var_30, mercury__pprint__Var_12);
    }
    mercury__pprint__TypeClassInfo_for_doc_44 = (MR_Word) &mercury__pprint_scalar_common_1[1];
    {
      mercury__pprint__Var_29 = mercury__pprint__packed_3_f_0(mercury__pprint__TypeClassInfo_for_doc_44, mercury__pprint__TypeClassInfo_for_doc_37, mercury__pprint__Var_30, ((MR_Box) ((MR_String) ", ")), mercury__pprint__Var_35);
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
	 mercury__pprint__Var_49  = Max;
}
    mercury__pprint__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_32, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      mercury__pprint__conv1_Var_47 = mercury__pprint__func_0(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_32), ((MR_Box) (mercury__pprint__Var_49)), ((MR_Box) (mercury__pprint__Var_29)));
    }
    mercury__pprint__Var_47 = ((MR_Word) mercury__pprint__conv1_Var_47);
    {
      mercury__pprint__Var_27 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), mercury__pprint__Var_27, 0) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(2), mercury__pprint__Var_27, 1) = ((MR_Box) (mercury__pprint__Var_47));
    }
    mercury__pprint__TypeClassInfo_for_doc_54 = (MR_Word) &mercury__pprint_scalar_common_1[1];
    {
      mercury__pprint__Var_9 = mercury__pprint__bracketed_3_f_0(mercury__pprint__TypeClassInfo_for_doc_54, mercury__pprint__TypeClassInfo_for_doc_54, mercury__pprint__TypeClassInfo_for_doc_32, ((MR_Box) ((MR_String) "[")), ((MR_Box) ((MR_String) "]")), ((MR_Box) (mercury__pprint__Var_27)));
    }
    mercury__pprint__TypeClassInfo_for_doc_58 = (MR_Word) &mercury__pprint_scalar_common_1[1];
    mercury__pprint__TypeClassInfo_for_doc_59 = (MR_Word) &mercury__pprint_scalar_common_1[1];
    {
      mercury__pprint__Var_8 = mercury__pprint__bracketed_3_f_0(mercury__pprint__TypeClassInfo_for_doc_58, mercury__pprint__TypeClassInfo_for_doc_59, mercury__pprint__TypeClassInfo_for_doc_14, ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_String) ")")), ((MR_Box) (mercury__pprint__Var_9)));
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
	 mercury__pprint__Var_65  = Max;
}
    mercury__pprint__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_15, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      mercury__pprint__conv3_Var_62 = mercury__pprint__func_2(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_15), ((MR_Box) (mercury__pprint__Var_65)), ((MR_Box) ((MR_String) "array")));
    }
    mercury__pprint__Var_62 = ((MR_Word) mercury__pprint__conv3_Var_62);
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
	 mercury__pprint__Var_68  = Max;
}
    mercury__pprint__func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_14, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      mercury__pprint__conv5_Var_63 = mercury__pprint__func_4(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_14), ((MR_Box) (mercury__pprint__Var_68)), ((MR_Box) (mercury__pprint__Var_8)));
    }
    mercury__pprint__Var_63 = ((MR_Word) mercury__pprint__conv5_Var_63);
    {
      mercury__pprint__Var_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__pprint__Var_6, 0) = ((MR_Box) (mercury__pprint__Var_62));
      MR_hl_field(MR_mktag(1), mercury__pprint__Var_6, 1) = ((MR_Box) (mercury__pprint__Var_63));
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
	 mercury__pprint__Var_75  = Max;
}
    mercury__pprint__func_6 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_14, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      mercury__pprint__conv7_Var_73 = mercury__pprint__func_6(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_14), ((MR_Box) (mercury__pprint__Var_75)), ((MR_Box) (mercury__pprint__Var_6)));
    }
    mercury__pprint__Var_73 = ((MR_Word) mercury__pprint__conv7_Var_73);
    {
      mercury__pprint__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__3_3, 1) = ((MR_Box) (mercury__pprint__Var_73));
    }
    return mercury__pprint__HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
mercury__pprint__list_to_doc_2_f_0(
  MR_Word mercury__pprint__TypeInfo_for_T_11,
  MR_Integer mercury__pprint__Depth_4,
  MR_Word mercury__pprint__Xs_5)
{
  {
    MR_Word mercury__pprint__HeadVar__3_3;
    MR_Word mercury__pprint__TypeClassInfo_for_doc_12 = (MR_Word) &mercury__pprint_scalar_common_1[0];
    MR_Word mercury__pprint__TypeClassInfo_for_doc_17 = (MR_Word) &mercury__pprint_scalar_common_1[0];
    MR_Word mercury__pprint__TypeClassInfo_for_doc_24;
    MR_Word mercury__pprint__TypeClassInfo_for_doc_34;
    MR_Word mercury__pprint__Var_6;
    MR_Word mercury__pprint__Var_8;
    MR_Integer mercury__pprint__Var_9 = (mercury__pprint__Depth_4 - (MR_Integer) 1);
    MR_Word mercury__pprint__Var_15;
    MR_Word mercury__pprint__Var_27;
    MR_Integer mercury__pprint__Var_29;
    MR_Box MR_CALL (* mercury__pprint__func_0)(MR_Box, MR_Box, MR_Box);
    MR_Box mercury__pprint__conv1_Var_27;

    {
      mercury__pprint__Var_15 = mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_51_56_95_95_91_51_44_32_52_93_95_48_2_f_in__list_0(mercury__pprint__TypeInfo_for_T_11, mercury__pprint__Var_9, mercury__pprint__Xs_5);
    }
    mercury__pprint__TypeClassInfo_for_doc_24 = (MR_Word) &mercury__pprint_scalar_common_1[1];
    {
      mercury__pprint__Var_8 = mercury__pprint__packed_3_f_0(mercury__pprint__TypeClassInfo_for_doc_24, mercury__pprint__TypeClassInfo_for_doc_17, mercury__pprint__Var_9, ((MR_Box) ((MR_String) ", ")), mercury__pprint__Var_15);
    }
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
	 mercury__pprint__Var_29  = Max;
}
    mercury__pprint__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_12, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      mercury__pprint__conv1_Var_27 = mercury__pprint__func_0(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_12), ((MR_Box) (mercury__pprint__Var_29)), ((MR_Box) (mercury__pprint__Var_8)));
    }
    mercury__pprint__Var_27 = ((MR_Word) mercury__pprint__conv1_Var_27);
    {
      mercury__pprint__Var_6 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), mercury__pprint__Var_6, 0) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(2), mercury__pprint__Var_6, 1) = ((MR_Box) (mercury__pprint__Var_27));
    }
    mercury__pprint__TypeClassInfo_for_doc_34 = (MR_Word) &mercury__pprint_scalar_common_1[1];
    {
      mercury__pprint__HeadVar__3_3 = mercury__pprint__bracketed_3_f_0(mercury__pprint__TypeClassInfo_for_doc_34, mercury__pprint__TypeClassInfo_for_doc_34, mercury__pprint__TypeClassInfo_for_doc_12, ((MR_Box) ((MR_String) "[")), ((MR_Box) ((MR_String) "]")), ((MR_Box) (mercury__pprint__Var_6)));
    }
    return mercury__pprint__HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
mercury__pprint__sparse_bitset_to_doc_2_f_0(
  MR_Word mercury__pprint__TypeClassInfo_for_enum_13,
  MR_Integer mercury__pprint__Depth_4,
  MR_Word mercury__pprint__A_5)
{
  {
    MR_Word mercury__pprint__HeadVar__3_3;
    MR_Word mercury__pprint__TypeClassInfo_for_doc_14 = (MR_Word) &mercury__pprint_scalar_common_1[0];
    MR_Word mercury__pprint__TypeClassInfo_for_doc_15 = (MR_Word) &mercury__pprint_scalar_common_1[1];
    MR_Word mercury__pprint__TypeInfo_17_17;
    MR_Word mercury__pprint__TypeClassInfo_for_doc_64;
    MR_Word mercury__pprint__TypeClassInfo_for_doc_68;
    MR_Word mercury__pprint__TypeClassInfo_for_doc_69;
    MR_Word mercury__pprint__Var_6;
    MR_Word mercury__pprint__Var_8;
    MR_Word mercury__pprint__Var_9;
    MR_Integer mercury__pprint__Var_10;
    MR_Word mercury__pprint__Var_12;
    MR_Word mercury__pprint__V_10_21;
    MR_Word mercury__pprint__V_6_40;
    MR_Word mercury__pprint__Var_59;
    MR_Word mercury__pprint__Var_61;
    MR_Integer mercury__pprint__Var_62;
    MR_Word mercury__pprint__Var_72;
    MR_Word mercury__pprint__Var_73;
    MR_Integer mercury__pprint__Var_75;
    MR_Integer mercury__pprint__Var_78;
    MR_Word mercury__pprint__Var_83;
    MR_Integer mercury__pprint__Var_85;
    MR_Box MR_CALL (* mercury__pprint__func_0)(MR_Box, MR_Box, MR_Box);
    MR_Box mercury__pprint__conv1_Var_72;
    MR_Box MR_CALL (* mercury__pprint__func_2)(MR_Box, MR_Box, MR_Box);
    MR_Box mercury__pprint__conv3_Var_73;
    MR_Box MR_CALL (* mercury__pprint__func_4)(MR_Box, MR_Box, MR_Box);
    MR_Box mercury__pprint__conv5_Var_83;

{
#define MR_PROC_LABEL mercury__pprint__sparse_bitset_to_doc_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__pprint__TypeClassInfo_for_enum_13 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__pprint__TypeInfo_17_17  = TypeInfo;
}
    mercury__pprint__Var_10 = (mercury__pprint__Depth_4 - (MR_Integer) 1);
    mercury__pprint__V_10_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__pprint__V_6_40 = (MR_Word) mercury__pprint__A_5;
    {
      mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_52_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0(mercury__pprint__TypeClassInfo_for_enum_13, mercury__pprint__V_6_40, mercury__pprint__V_10_21, &mercury__pprint__Var_12);
    }
    mercury__pprint__TypeClassInfo_for_doc_64 = (MR_Word) &mercury__pprint_scalar_common_1[0];
    mercury__pprint__Var_62 = (mercury__pprint__Var_10 - (MR_Integer) 1);
    {
      mercury__pprint__Var_61 = mercury__pprint__packed_cs_to_depth_2_f_0(mercury__pprint__TypeInfo_17_17, mercury__pprint__Var_62, mercury__pprint__Var_12);
    }
    {
      mercury__pprint__Var_59 = mercury__pprint__nest_2_f_0(mercury__pprint__TypeClassInfo_for_doc_64, (MR_Integer) 1, ((MR_Box) (mercury__pprint__Var_61)));
    }
    {
      mercury__pprint__Var_9 = mercury__pprint__brackets_1_f_0(mercury__pprint__TypeClassInfo_for_doc_64, ((MR_Box) (mercury__pprint__Var_59)));
    }
    mercury__pprint__TypeClassInfo_for_doc_68 = (MR_Word) &mercury__pprint_scalar_common_1[1];
    mercury__pprint__TypeClassInfo_for_doc_69 = (MR_Word) &mercury__pprint_scalar_common_1[1];
    {
      mercury__pprint__Var_8 = mercury__pprint__bracketed_3_f_0(mercury__pprint__TypeClassInfo_for_doc_68, mercury__pprint__TypeClassInfo_for_doc_69, mercury__pprint__TypeClassInfo_for_doc_14, ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_String) ")")), ((MR_Box) (mercury__pprint__Var_9)));
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
	 mercury__pprint__Var_75  = Max;
}
    mercury__pprint__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_15, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      mercury__pprint__conv1_Var_72 = mercury__pprint__func_0(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_15), ((MR_Box) (mercury__pprint__Var_75)), ((MR_Box) ((MR_String) "sparse_bitset")));
    }
    mercury__pprint__Var_72 = ((MR_Word) mercury__pprint__conv1_Var_72);
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
	 mercury__pprint__Var_78  = Max;
}
    mercury__pprint__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_14, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      mercury__pprint__conv3_Var_73 = mercury__pprint__func_2(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_14), ((MR_Box) (mercury__pprint__Var_78)), ((MR_Box) (mercury__pprint__Var_8)));
    }
    mercury__pprint__Var_73 = ((MR_Word) mercury__pprint__conv3_Var_73);
    {
      mercury__pprint__Var_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__pprint__Var_6, 0) = ((MR_Box) (mercury__pprint__Var_72));
      MR_hl_field(MR_mktag(1), mercury__pprint__Var_6, 1) = ((MR_Box) (mercury__pprint__Var_73));
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
	 mercury__pprint__Var_85  = Max;
}
    mercury__pprint__func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_14, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      mercury__pprint__conv5_Var_83 = mercury__pprint__func_4(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_14), ((MR_Box) (mercury__pprint__Var_85)), ((MR_Box) (mercury__pprint__Var_6)));
    }
    mercury__pprint__Var_83 = ((MR_Word) mercury__pprint__conv5_Var_83);
    {
      mercury__pprint__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__3_3, 1) = ((MR_Box) (mercury__pprint__Var_83));
    }
    return mercury__pprint__HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
mercury__pprint__univ_to_doc_3_f_0(
  MR_Integer mercury__pprint__Depth_5,
  MR_Integer mercury__pprint__Priority_6,
  MR_Word mercury__pprint__Univ_7)
{
  {
    MR_Word mercury__pprint__HeadVar__4_4;
    MR_Word mercury__pprint__TypeInfo_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__pprint__Univ_7, (MR_Integer) 0)));
    MR_Box mercury__pprint__Var_8 = (MR_hl_field(MR_mktag(0), mercury__pprint__Univ_7, (MR_Integer) 1));

    {
      mercury__pprint__HeadVar__4_4 = mercury__pprint__to_doc_3_f_0(mercury__pprint__TypeInfo_9_9, mercury__pprint__Depth_5, mercury__pprint__Priority_6, mercury__pprint__Var_8);
    }
    return mercury__pprint__HeadVar__4_4;
  }
}

static MR_Word MR_CALL 
mercury__pprint__generic_term_to_doc_3_f_0(
  MR_Word mercury__pprint__TypeInfo_for_T_101,
  MR_Integer mercury__pprint__Depth_5,
  MR_Integer mercury__pprint__Priority_6,
  MR_Box mercury__pprint__X_7)
{
  {
    MR_bool mercury__pprint__succeeded = (mercury__pprint__Depth_5 <= (MR_Integer) 0);
    MR_Word mercury__pprint__Doc_8;

    if (mercury__pprint__succeeded)
      {
        MR_String mercury__pprint__Name_9;
        MR_Integer mercury__pprint__Arity_10;

        {
          mercury__deconstruct__functor_4_p_1(mercury__pprint__TypeInfo_for_T_101, mercury__pprint__X_7, (MR_Integer) 1, &mercury__pprint__Name_9, &mercury__pprint__Arity_10);
        }
        mercury__pprint__succeeded = (mercury__pprint__Arity_10 == (MR_Integer) 0);
        if (mercury__pprint__succeeded)
          {
            mercury__pprint__Doc_8 = mercury__pprint__text_1_f_0(mercury__pprint__Name_9);
          }
        else
          {
            MR_Word mercury__pprint__TypeClassInfo_for_doc_102 = (MR_Word) &mercury__pprint_scalar_common_1[1];
            MR_Word mercury__pprint__TypeClassInfo_for_doc_103 = (MR_Word) &mercury__pprint_scalar_common_1[0];
            MR_Word mercury__pprint__TypeClassInfo_for_doc_104 = (MR_Word) &mercury__pprint_scalar_common_1[3];
            MR_Word mercury__pprint__Var_27;

            {
              mercury__pprint__Var_27 = mercury__pprint__f_43_43_2_f_0(mercury__pprint__TypeClassInfo_for_doc_102, mercury__pprint__TypeClassInfo_for_doc_104, ((MR_Box) ((MR_String) "/")), ((MR_Box) (mercury__pprint__Arity_10)));
            }
            {
              mercury__pprint__Doc_8 = mercury__pprint__f_43_43_2_f_0(mercury__pprint__TypeClassInfo_for_doc_102, mercury__pprint__TypeClassInfo_for_doc_103, ((MR_Box) (mercury__pprint__Name_9)), ((MR_Box) (mercury__pprint__Var_27)));
            }
          }
      }
    else
      {
        MR_Word mercury__pprint__UnivArgs_12;
        MR_String mercury__pprint__Name_100;
        MR_Integer mercury__pprint___Arity_11;
        MR_Word mercury__pprint__UnivArg_14;
        MR_Integer mercury__pprint__OpPri_15;
        MR_Word mercury__pprint__Assoc_16;
        MR_Word mercury__pprint__TypeClassInfo_for_op_table_105;
        MR_Word mercury__pprint__Var_30;

        {
          mercury__deconstruct__deconstruct_5_p_1(mercury__pprint__TypeInfo_for_T_101, mercury__pprint__X_7, (MR_Integer) 1, &mercury__pprint__Name_100, &mercury__pprint___Arity_11, &mercury__pprint__UnivArgs_12);
        }
        {
          mercury__ops__init_mercury_op_table_0_f_0();
        }
        mercury__pprint__succeeded = ((MR_tag((MR_Word) mercury__pprint__UnivArgs_12)) == (MR_mktag((MR_Integer) 1)));
        if (mercury__pprint__succeeded)
          {
            mercury__pprint__UnivArg_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__UnivArgs_12, (MR_Integer) 0)));
            mercury__pprint__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__UnivArgs_12, (MR_Integer) 1)));
            mercury__pprint__succeeded = (mercury__pprint__Var_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (mercury__pprint__succeeded)
              {
                mercury__pprint__TypeClassInfo_for_op_table_105 = (MR_Word) &mercury__pprint_scalar_common_1[4];
                {
                  mercury__pprint__succeeded = mercury__ops__lookup_prefix_op_4_p_0(mercury__pprint__TypeClassInfo_for_op_table_105, ((MR_Box) ((MR_Integer) 0)), mercury__pprint__Name_100, &mercury__pprint__OpPri_15, &mercury__pprint__Assoc_16);
                }
              }
          }
        if (mercury__pprint__succeeded)
          {
            MR_Word mercury__pprint__TypeClassInfo_for_doc_106 = (MR_Word) &mercury__pprint_scalar_common_1[1];
            MR_Word mercury__pprint__TypeClassInfo_for_doc_107 = (MR_Word) &mercury__pprint_scalar_common_1[0];
            MR_Word mercury__pprint__Var_31;
            MR_Word mercury__pprint__Var_32;
            MR_Word mercury__pprint__Var_33;
            MR_Word mercury__pprint__Var_34;
            MR_Integer mercury__pprint__Var_35;
            MR_Integer mercury__pprint__Var_37;

            {
              mercury__pprint__Var_33 = mercury__pprint__space_0_f_0();
            }
            mercury__pprint__Var_35 = (mercury__pprint__Depth_5 - (MR_Integer) 1);
            {
              mercury__pprint__Var_37 = mercury__pprint__adjusted_by_2_f_0(mercury__pprint__OpPri_15, mercury__pprint__Assoc_16);
            }
            {
              mercury__pprint__Var_34 = mercury__pprint__univ_to_doc_3_f_0(mercury__pprint__Var_35, mercury__pprint__Var_37, mercury__pprint__UnivArg_14);
            }
            {
              mercury__pprint__Var_32 = mercury__pprint__f_43_43_2_f_0(mercury__pprint__TypeClassInfo_for_doc_107, mercury__pprint__TypeClassInfo_for_doc_107, ((MR_Box) (mercury__pprint__Var_33)), ((MR_Box) (mercury__pprint__Var_34)));
            }
            {
              mercury__pprint__Var_31 = mercury__pprint__f_43_43_2_f_0(mercury__pprint__TypeClassInfo_for_doc_106, mercury__pprint__TypeClassInfo_for_doc_107, ((MR_Box) (mercury__pprint__Name_100)), ((MR_Box) (mercury__pprint__Var_32)));
            }
            {
              mercury__pprint__Doc_8 = mercury__pprint__maybe_parens_3_f_0(mercury__pprint__Priority_6, mercury__pprint__OpPri_15, mercury__pprint__Var_31);
            }
          }
        else
          {
            MR_Word mercury__pprint__UnivArg_97;
            MR_Integer mercury__pprint__OpPri_98;
            MR_Word mercury__pprint__Assoc_99;
            MR_Word mercury__pprint__TypeClassInfo_for_op_table_108;
            MR_Word mercury__pprint__Var_38;

            mercury__pprint__succeeded = ((MR_tag((MR_Word) mercury__pprint__UnivArgs_12)) == (MR_mktag((MR_Integer) 1)));
            if (mercury__pprint__succeeded)
              {
                mercury__pprint__UnivArg_97 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__UnivArgs_12, (MR_Integer) 0)));
                mercury__pprint__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__UnivArgs_12, (MR_Integer) 1)));
                mercury__pprint__succeeded = (mercury__pprint__Var_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (mercury__pprint__succeeded)
                  {
                    mercury__pprint__TypeClassInfo_for_op_table_108 = (MR_Word) &mercury__pprint_scalar_common_1[4];
                    {
                      mercury__pprint__succeeded = mercury__ops__lookup_postfix_op_4_p_0(mercury__pprint__TypeClassInfo_for_op_table_108, ((MR_Box) ((MR_Integer) 0)), mercury__pprint__Name_100, &mercury__pprint__OpPri_98, &mercury__pprint__Assoc_99);
                    }
                  }
              }
            if (mercury__pprint__succeeded)
              {
                MR_Word mercury__pprint__TypeClassInfo_for_doc_109 = (MR_Word) &mercury__pprint_scalar_common_1[0];
                MR_Word mercury__pprint__TypeClassInfo_for_doc_110;
                MR_Word mercury__pprint__Var_39;
                MR_Word mercury__pprint__Var_40;
                MR_Integer mercury__pprint__Var_41 = (mercury__pprint__Depth_5 - (MR_Integer) 1);
                MR_Integer mercury__pprint__Var_43;
                MR_Word mercury__pprint__Var_44;
                MR_Word mercury__pprint__Var_45;

                {
                  mercury__pprint__Var_43 = mercury__pprint__adjusted_by_2_f_0(mercury__pprint__OpPri_98, mercury__pprint__Assoc_99);
                }
                {
                  mercury__pprint__Var_40 = mercury__pprint__univ_to_doc_3_f_0(mercury__pprint__Var_41, mercury__pprint__Var_43, mercury__pprint__UnivArg_97);
                }
                mercury__pprint__TypeClassInfo_for_doc_110 = (MR_Word) &mercury__pprint_scalar_common_1[1];
                {
                  mercury__pprint__Var_45 = mercury__pprint__space_0_f_0();
                }
                {
                  mercury__pprint__Var_44 = mercury__pprint__f_43_43_2_f_0(mercury__pprint__TypeClassInfo_for_doc_109, mercury__pprint__TypeClassInfo_for_doc_110, ((MR_Box) (mercury__pprint__Var_45)), ((MR_Box) (mercury__pprint__Name_100)));
                }
                {
                  mercury__pprint__Var_39 = mercury__pprint__f_43_43_2_f_0(mercury__pprint__TypeClassInfo_for_doc_109, mercury__pprint__TypeClassInfo_for_doc_109, ((MR_Box) (mercury__pprint__Var_40)), ((MR_Box) (mercury__pprint__Var_44)));
                }
                {
                  mercury__pprint__Doc_8 = mercury__pprint__maybe_parens_3_f_0(mercury__pprint__Priority_6, mercury__pprint__OpPri_98, mercury__pprint__Var_39);
                }
              }
            else
              {
                MR_Word mercury__pprint__UnivArgL_17;
                MR_Word mercury__pprint__UnivArgR_18;
                MR_Word mercury__pprint__AssocL_19;
                MR_Word mercury__pprint__AssocR_20;
                MR_Integer mercury__pprint__OpPri_96;
                MR_Word mercury__pprint__TypeClassInfo_for_op_table_111;
                MR_Word mercury__pprint__Var_46;
                MR_Word mercury__pprint__Var_47;

                mercury__pprint__succeeded = ((MR_tag((MR_Word) mercury__pprint__UnivArgs_12)) == (MR_mktag((MR_Integer) 1)));
                if (mercury__pprint__succeeded)
                  {
                    mercury__pprint__UnivArgL_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__UnivArgs_12, (MR_Integer) 0)));
                    mercury__pprint__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__UnivArgs_12, (MR_Integer) 1)));
                    mercury__pprint__succeeded = ((MR_tag((MR_Word) mercury__pprint__Var_46)) == (MR_mktag((MR_Integer) 1)));
                    if (mercury__pprint__succeeded)
                      {
                        mercury__pprint__UnivArgR_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__Var_46, (MR_Integer) 0)));
                        mercury__pprint__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__Var_46, (MR_Integer) 1)));
                        mercury__pprint__succeeded = (mercury__pprint__Var_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (mercury__pprint__succeeded)
                          {
                            mercury__pprint__TypeClassInfo_for_op_table_111 = (MR_Word) &mercury__pprint_scalar_common_1[4];
                            {
                              mercury__pprint__succeeded = mercury__ops__lookup_infix_op_5_p_0(mercury__pprint__TypeClassInfo_for_op_table_111, ((MR_Box) ((MR_Integer) 0)), mercury__pprint__Name_100, &mercury__pprint__OpPri_96, &mercury__pprint__AssocL_19, &mercury__pprint__AssocR_20);
                            }
                          }
                      }
                  }
                if (mercury__pprint__succeeded)
                  {
                    MR_Word mercury__pprint__TypeClassInfo_for_doc_112 = (MR_Word) &mercury__pprint_scalar_common_1[0];
                    MR_Word mercury__pprint__TypeClassInfo_for_doc_113;
                    MR_Word mercury__pprint__Var_48;
                    MR_Word mercury__pprint__Var_49;
                    MR_Integer mercury__pprint__Var_50 = (mercury__pprint__Depth_5 - (MR_Integer) 1);
                    MR_Integer mercury__pprint__Var_52;
                    MR_Word mercury__pprint__Var_53;
                    MR_Word mercury__pprint__Var_54;
                    MR_Word mercury__pprint__Var_55;
                    MR_Word mercury__pprint__Var_56;
                    MR_Word mercury__pprint__Var_57;
                    MR_Word mercury__pprint__Var_58;
                    MR_Word mercury__pprint__Var_59;
                    MR_Word mercury__pprint__Var_60;
                    MR_Word mercury__pprint__Var_61;
                    MR_Word mercury__pprint__Var_63;
                    MR_Integer mercury__pprint__Var_64;
                    MR_Integer mercury__pprint__Var_66;

                    {
                      mercury__pprint__Var_52 = mercury__pprint__adjusted_by_2_f_0(mercury__pprint__OpPri_96, mercury__pprint__AssocL_19);
                    }
                    {
                      mercury__pprint__Var_49 = mercury__pprint__univ_to_doc_3_f_0(mercury__pprint__Var_50, mercury__pprint__Var_52, mercury__pprint__UnivArgL_17);
                    }
                    {
                      mercury__pprint__Var_54 = mercury__pprint__space_0_f_0();
                    }
                    mercury__pprint__TypeClassInfo_for_doc_113 = (MR_Word) &mercury__pprint_scalar_common_1[1];
                    {
                      mercury__pprint__Var_57 = mercury__pprint__space_0_f_0();
                    }
                    {
                      mercury__pprint__Var_60 = mercury__pprint__line_0_f_0();
                    }
                    mercury__pprint__Var_64 = (mercury__pprint__Depth_5 - (MR_Integer) 2);
                    {
                      mercury__pprint__Var_66 = mercury__pprint__adjusted_by_2_f_0(mercury__pprint__OpPri_96, mercury__pprint__AssocR_20);
                    }
                    {
                      mercury__pprint__Var_63 = mercury__pprint__univ_to_doc_3_f_0(mercury__pprint__Var_64, mercury__pprint__Var_66, mercury__pprint__UnivArgR_18);
                    }
                    {
                      mercury__pprint__Var_61 = mercury__pprint__nest_2_f_0(mercury__pprint__TypeClassInfo_for_doc_112, (MR_Integer) 2, ((MR_Box) (mercury__pprint__Var_63)));
                    }
                    {
                      mercury__pprint__Var_59 = mercury__pprint__f_43_43_2_f_0(mercury__pprint__TypeClassInfo_for_doc_112, mercury__pprint__TypeClassInfo_for_doc_112, ((MR_Box) (mercury__pprint__Var_60)), ((MR_Box) (mercury__pprint__Var_61)));
                    }
                    {
                      mercury__pprint__Var_58 = mercury__pprint__group_1_f_0(mercury__pprint__TypeClassInfo_for_doc_112, ((MR_Box) (mercury__pprint__Var_59)));
                    }
                    {
                      mercury__pprint__Var_56 = mercury__pprint__f_43_43_2_f_0(mercury__pprint__TypeClassInfo_for_doc_112, mercury__pprint__TypeClassInfo_for_doc_112, ((MR_Box) (mercury__pprint__Var_57)), ((MR_Box) (mercury__pprint__Var_58)));
                    }
                    {
                      mercury__pprint__Var_55 = mercury__pprint__f_43_43_2_f_0(mercury__pprint__TypeClassInfo_for_doc_113, mercury__pprint__TypeClassInfo_for_doc_112, ((MR_Box) (mercury__pprint__Name_100)), ((MR_Box) (mercury__pprint__Var_56)));
                    }
                    {
                      mercury__pprint__Var_53 = mercury__pprint__f_43_43_2_f_0(mercury__pprint__TypeClassInfo_for_doc_112, mercury__pprint__TypeClassInfo_for_doc_112, ((MR_Box) (mercury__pprint__Var_54)), ((MR_Box) (mercury__pprint__Var_55)));
                    }
                    {
                      mercury__pprint__Var_48 = mercury__pprint__f_43_43_2_f_0(mercury__pprint__TypeClassInfo_for_doc_112, mercury__pprint__TypeClassInfo_for_doc_112, ((MR_Box) (mercury__pprint__Var_49)), ((MR_Box) (mercury__pprint__Var_53)));
                    }
                    {
                      mercury__pprint__Doc_8 = mercury__pprint__maybe_parens_3_f_0(mercury__pprint__Priority_6, mercury__pprint__OpPri_96, mercury__pprint__Var_48);
                    }
                  }
                else
                  {
                    MR_Word mercury__pprint__UnivArgR1_21;
                    MR_Word mercury__pprint__UnivArgR2_22;
                    MR_Word mercury__pprint__AssocR1_23;
                    MR_Word mercury__pprint__AssocR2_24;
                    MR_Integer mercury__pprint__OpPri_95;
                    MR_Word mercury__pprint__TypeClassInfo_for_op_table_114;
                    MR_Word mercury__pprint__Var_67;
                    MR_Word mercury__pprint__Var_68;

                    mercury__pprint__succeeded = ((MR_tag((MR_Word) mercury__pprint__UnivArgs_12)) == (MR_mktag((MR_Integer) 1)));
                    if (mercury__pprint__succeeded)
                      {
                        mercury__pprint__UnivArgR1_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__UnivArgs_12, (MR_Integer) 0)));
                        mercury__pprint__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__UnivArgs_12, (MR_Integer) 1)));
                        mercury__pprint__succeeded = ((MR_tag((MR_Word) mercury__pprint__Var_67)) == (MR_mktag((MR_Integer) 1)));
                        if (mercury__pprint__succeeded)
                          {
                            mercury__pprint__UnivArgR2_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__Var_67, (MR_Integer) 0)));
                            mercury__pprint__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__Var_67, (MR_Integer) 1)));
                            mercury__pprint__succeeded = (mercury__pprint__Var_68 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            if (mercury__pprint__succeeded)
                              {
                                mercury__pprint__TypeClassInfo_for_op_table_114 = (MR_Word) &mercury__pprint_scalar_common_1[4];
                                {
                                  mercury__pprint__succeeded = mercury__ops__lookup_binary_prefix_op_5_p_0(mercury__pprint__TypeClassInfo_for_op_table_114, ((MR_Box) ((MR_Integer) 0)), mercury__pprint__Name_100, &mercury__pprint__OpPri_95, &mercury__pprint__AssocR1_23, &mercury__pprint__AssocR2_24);
                                }
                              }
                          }
                      }
                    if (mercury__pprint__succeeded)
                      {
                        MR_Word mercury__pprint__TypeClassInfo_for_doc_115 = (MR_Word) &mercury__pprint_scalar_common_1[1];
                        MR_Word mercury__pprint__TypeClassInfo_for_doc_116 = (MR_Word) &mercury__pprint_scalar_common_1[0];
                        MR_Word mercury__pprint__Var_69;
                        MR_Word mercury__pprint__Var_70;
                        MR_Word mercury__pprint__Var_71;
                        MR_Word mercury__pprint__Var_72;
                        MR_Word mercury__pprint__Var_73;
                        MR_Integer mercury__pprint__Var_74;
                        MR_Integer mercury__pprint__Var_76;
                        MR_Word mercury__pprint__Var_77;
                        MR_Word mercury__pprint__Var_78;
                        MR_Word mercury__pprint__Var_79;
                        MR_Word mercury__pprint__Var_80;
                        MR_Word mercury__pprint__Var_81;
                        MR_Word mercury__pprint__Var_82;
                        MR_Word mercury__pprint__Var_84;
                        MR_Integer mercury__pprint__Var_85;
                        MR_Integer mercury__pprint__Var_87;

                        {
                          mercury__pprint__Var_71 = mercury__pprint__space_0_f_0();
                        }
                        mercury__pprint__Var_74 = (mercury__pprint__Depth_5 - (MR_Integer) 2);
                        {
                          mercury__pprint__Var_76 = mercury__pprint__adjusted_by_2_f_0(mercury__pprint__OpPri_95, mercury__pprint__AssocR1_23);
                        }
                        {
                          mercury__pprint__Var_73 = mercury__pprint__univ_to_doc_3_f_0(mercury__pprint__Var_74, mercury__pprint__Var_76, mercury__pprint__UnivArgR1_21);
                        }
                        {
                          mercury__pprint__Var_78 = mercury__pprint__space_0_f_0();
                        }
                        {
                          mercury__pprint__Var_81 = mercury__pprint__line_0_f_0();
                        }
                        mercury__pprint__Var_85 = (mercury__pprint__Depth_5 - (MR_Integer) 2);
                        {
                          mercury__pprint__Var_87 = mercury__pprint__adjusted_by_2_f_0(mercury__pprint__OpPri_95, mercury__pprint__AssocR2_24);
                        }
                        {
                          mercury__pprint__Var_84 = mercury__pprint__univ_to_doc_3_f_0(mercury__pprint__Var_85, mercury__pprint__Var_87, mercury__pprint__UnivArgR2_22);
                        }
                        {
                          mercury__pprint__Var_82 = mercury__pprint__nest_2_f_0(mercury__pprint__TypeClassInfo_for_doc_116, (MR_Integer) 2, ((MR_Box) (mercury__pprint__Var_84)));
                        }
                        {
                          mercury__pprint__Var_80 = mercury__pprint__f_43_43_2_f_0(mercury__pprint__TypeClassInfo_for_doc_116, mercury__pprint__TypeClassInfo_for_doc_116, ((MR_Box) (mercury__pprint__Var_81)), ((MR_Box) (mercury__pprint__Var_82)));
                        }
                        {
                          mercury__pprint__Var_79 = mercury__pprint__group_1_f_0(mercury__pprint__TypeClassInfo_for_doc_116, ((MR_Box) (mercury__pprint__Var_80)));
                        }
                        {
                          mercury__pprint__Var_77 = mercury__pprint__f_43_43_2_f_0(mercury__pprint__TypeClassInfo_for_doc_116, mercury__pprint__TypeClassInfo_for_doc_116, ((MR_Box) (mercury__pprint__Var_78)), ((MR_Box) (mercury__pprint__Var_79)));
                        }
                        {
                          mercury__pprint__Var_72 = mercury__pprint__f_43_43_2_f_0(mercury__pprint__TypeClassInfo_for_doc_116, mercury__pprint__TypeClassInfo_for_doc_116, ((MR_Box) (mercury__pprint__Var_73)), ((MR_Box) (mercury__pprint__Var_77)));
                        }
                        {
                          mercury__pprint__Var_70 = mercury__pprint__f_43_43_2_f_0(mercury__pprint__TypeClassInfo_for_doc_116, mercury__pprint__TypeClassInfo_for_doc_116, ((MR_Box) (mercury__pprint__Var_71)), ((MR_Box) (mercury__pprint__Var_72)));
                        }
                        {
                          mercury__pprint__Var_69 = mercury__pprint__f_43_43_2_f_0(mercury__pprint__TypeClassInfo_for_doc_115, mercury__pprint__TypeClassInfo_for_doc_116, ((MR_Box) (mercury__pprint__Name_100)), ((MR_Box) (mercury__pprint__Var_70)));
                        }
                        {
                          mercury__pprint__Doc_8 = mercury__pprint__maybe_parens_3_f_0(mercury__pprint__Priority_6, mercury__pprint__OpPri_95, mercury__pprint__Var_69);
                        }
                      }
                    else
                      {
                        mercury__pprint__succeeded = (mercury__pprint__UnivArgs_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (mercury__pprint__succeeded)
                          {
                            mercury__pprint__Doc_8 = mercury__pprint__text_1_f_0(mercury__pprint__Name_100);
                          }
                        else
                          {
                            MR_Word mercury__pprint__TypeClassInfo_for_doc_117 = (MR_Word) &mercury__pprint_scalar_common_1[0];
                            MR_Word mercury__pprint__TypeClassInfo_for_doc_118 = (MR_Word) &mercury__pprint_scalar_common_1[1];
                            MR_Word mercury__pprint__Var_88;
                            MR_Word mercury__pprint__Var_89;
                            MR_Word mercury__pprint__Var_90;
                            MR_Word mercury__pprint__Var_92;
                            MR_Integer mercury__pprint__Var_93 = (mercury__pprint__Depth_5 - (MR_Integer) 1);

                            {
                              mercury__pprint__Var_92 = mercury__pprint__packed_cs_univ_args_2_f_0(mercury__pprint__Var_93, mercury__pprint__UnivArgs_12);
                            }
                            {
                              mercury__pprint__Var_90 = mercury__pprint__nest_2_f_0(mercury__pprint__TypeClassInfo_for_doc_117, (MR_Integer) 2, ((MR_Box) (mercury__pprint__Var_92)));
                            }
                            {
                              mercury__pprint__Var_89 = mercury__pprint__parentheses_1_f_0(mercury__pprint__TypeClassInfo_for_doc_117, ((MR_Box) (mercury__pprint__Var_90)));
                            }
                            {
                              mercury__pprint__Var_88 = mercury__pprint__f_43_43_2_f_0(mercury__pprint__TypeClassInfo_for_doc_118, mercury__pprint__TypeClassInfo_for_doc_117, ((MR_Box) (mercury__pprint__Name_100)), ((MR_Box) (mercury__pprint__Var_89)));
                            }
                            {
                              mercury__pprint__Doc_8 = mercury__pprint__group_1_f_0(mercury__pprint__TypeClassInfo_for_doc_117, ((MR_Box) (mercury__pprint__Var_88)));
                            }
                          }
                      }
                  }
              }
          }
      }
    return mercury__pprint__Doc_8;
  }
}

MR_Word MR_CALL 
mercury__pprint__to_doc_3_f_0(
  MR_Word mercury__pprint__TypeInfo_for_T_18,
  MR_Integer mercury__pprint__Depth_5,
  MR_Integer mercury__pprint__Priority_6,
  MR_Box mercury__pprint__X_7)
{
  {
    MR_bool mercury__pprint__succeeded;
    MR_Word mercury__pprint__HeadVar__4_4;
    MR_Word mercury__pprint__TypeInfo_19_19;
    MR_Word mercury__pprint__TypeInfo_16_45;
    MR_Word mercury__pprint__Var_8;
    MR_Word mercury__pprint__TypeCtorInfo_15_44;
    MR_Word mercury__pprint__TypeInfo_19_48;
    MR_Word mercury__pprint__ArgTypeDesc_36;
    MR_Word mercury__pprint__Var_39;
    MR_Word mercury__pprint__Var_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__pprint__Var_41;
    MR_Word mercury__pprint__Var_47;
    MR_Box mercury__pprint__Var_46;
    MR_Word mercury__pprint__V_5_51;
    MR_Box mercury__pprint__Var_42;
    MR_Box mercury__pprint__conv0_Var_8;

{
#define MR_PROC_LABEL mercury__pprint__to_doc_3_f_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__pprint__TypeInfo_for_T_18 ;
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
	 mercury__pprint__Var_41  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__pprint__to_doc_3_f_0

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc =  mercury__pprint__Var_41 ;
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
	 mercury__pprint__V_5_51  = TypeCtorDesc;
	 mercury__pprint__Var_39  = ArgTypes;
}
    mercury__pprint__succeeded = ((MR_tag((MR_Word) mercury__pprint__Var_39)) == (MR_mktag((MR_Integer) 1)));
    if (mercury__pprint__succeeded)
      {
        mercury__pprint__ArgTypeDesc_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__Var_39, (MR_Integer) 0)));
        mercury__pprint__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__Var_39, (MR_Integer) 1)));
        mercury__pprint__TypeInfo_19_48 = (MR_Word) &mercury__pprint_scalar_common_1[8];
        {
          mercury__pprint__succeeded = mercury__builtin__unify_2_p_0(mercury__pprint__TypeInfo_19_48, ((MR_Box) (mercury__pprint__Var_40)), ((MR_Box) (mercury__pprint__Var_47)));
        }
        if (mercury__pprint__succeeded)
          {
{
#define MR_PROC_LABEL mercury__pprint__to_doc_3_f_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo =  mercury__pprint__ArgTypeDesc_36 ;
		{

    TypeInfo_for_T = TypeInfo;


		;}
#undef MR_PROC_LABEL
	 mercury__pprint__TypeInfo_19_19  = TypeInfo_for_T;
}
            mercury__pprint__TypeCtorInfo_15_44 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
            {
              mercury__pprint__TypeInfo_16_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__pprint__TypeInfo_16_45, 0) = ((MR_Box) (mercury__pprint__TypeCtorInfo_15_44));
              MR_hl_field(MR_mktag(0), mercury__pprint__TypeInfo_16_45, 1) = ((MR_Box) (mercury__pprint__TypeInfo_19_19));
            }
            {
              mercury__pprint__succeeded = mercury__private_builtin__typed_unify_2_p_1(mercury__pprint__TypeInfo_for_T_18, mercury__pprint__TypeInfo_16_45, mercury__pprint__X_7, &mercury__pprint__conv0_Var_8);
            }
            if (mercury__pprint__succeeded)
              {
                mercury__pprint__Var_8 = ((MR_Word) mercury__pprint__conv0_Var_8);
                mercury__pprint__succeeded = MR_TRUE;
              }
          }
      }
    if (mercury__pprint__succeeded)
      {
        MR_Word mercury__pprint__TypeCtorInfo_8_57 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
        MR_Word mercury__pprint__BaseTypeClassInfo_for_enum_60 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
        MR_Word mercury__pprint__TypeClassInfo_for_enum_61;
        MR_Integer mercury__pprint__Var_56;

        {
          mercury__pprint__TypeClassInfo_for_enum_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_enum_61, 0) = ((MR_Box) (mercury__pprint__BaseTypeClassInfo_for_enum_60));
          MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_enum_61, 1) = ((MR_Box) (mercury__pprint__TypeInfo_19_19));
          MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_enum_61, 2) = ((MR_Box) (mercury__pprint__TypeInfo_16_45));
        }
        {
          mercury__pprint__Var_56 = mercury__enum__to_int_1_f_0(mercury__pprint__TypeClassInfo_for_enum_61, ((MR_Box) (mercury__pprint__Var_8)));
        }
        {
          mercury__pprint__HeadVar__4_4 = mercury__pprint__to_doc_2_f_0(mercury__pprint__TypeCtorInfo_8_57, mercury__pprint__Depth_5, ((MR_Box) (mercury__pprint__Var_56)));
        }
      }
    else
      {
        MR_Word mercury__pprint__SparseBitsetInt_9;
        MR_Word mercury__pprint__TypeInfo_7_65 = (MR_Word) &mercury__pprint_scalar_common_1[5];
        MR_Box mercury__pprint__conv1_SparseBitsetInt_9;

        {
          mercury__pprint__succeeded = mercury__private_builtin__typed_unify_2_p_1(mercury__pprint__TypeInfo_for_T_18, mercury__pprint__TypeInfo_7_65, mercury__pprint__X_7, &mercury__pprint__conv1_SparseBitsetInt_9);
        }
        if (mercury__pprint__succeeded)
          {
            mercury__pprint__SparseBitsetInt_9 = ((MR_Word) mercury__pprint__conv1_SparseBitsetInt_9);
            mercury__pprint__succeeded = MR_TRUE;
          }
        if (mercury__pprint__succeeded)
          {
            MR_Word mercury__pprint__TypeClassInfo_for_enum_20 = (MR_Word) &mercury__pprint_scalar_common_1[2];
            MR_Word mercury__pprint__TypeClassInfo_for_doc_77 = (MR_Word) &mercury__pprint_scalar_common_1[0];
            MR_Word mercury__pprint__TypeClassInfo_for_doc_78 = (MR_Word) &mercury__pprint_scalar_common_1[1];
            MR_Word mercury__pprint__TypeInfo_17_80;
            MR_Word mercury__pprint__Var_70;
            MR_Word mercury__pprint__Var_72;
            MR_Word mercury__pprint__Var_73;
            MR_Integer mercury__pprint__Var_74;
            MR_Word mercury__pprint__Var_76;

            {
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mercury__pprint__TypeClassInfo_for_enum_20, (MR_Integer) 1, &mercury__pprint__TypeInfo_17_80);
            }
            mercury__pprint__Var_74 = (mercury__pprint__Depth_5 - (MR_Integer) 1);
            {
              mercury__pprint__Var_76 = mercury__sparse_bitset__to_sorted_list_1_f_0(mercury__pprint__TypeClassInfo_for_enum_20, mercury__pprint__SparseBitsetInt_9);
            }
            {
              mercury__pprint__Var_73 = mercury__pprint__list_to_doc_2_f_0(mercury__pprint__TypeInfo_17_80, mercury__pprint__Var_74, mercury__pprint__Var_76);
            }
            {
              mercury__pprint__Var_72 = mercury__pprint__parentheses_1_f_0(mercury__pprint__TypeClassInfo_for_doc_77, ((MR_Box) (mercury__pprint__Var_73)));
            }
            {
              mercury__pprint__Var_70 = mercury__pprint__f_43_43_2_f_0(mercury__pprint__TypeClassInfo_for_doc_78, mercury__pprint__TypeClassInfo_for_doc_77, ((MR_Box) ((MR_String) "sparse_bitset")), ((MR_Box) (mercury__pprint__Var_72)));
            }
            {
              mercury__pprint__HeadVar__4_4 = mercury__pprint__group_1_f_0(mercury__pprint__TypeClassInfo_for_doc_77, ((MR_Box) (mercury__pprint__Var_70)));
            }
          }
        else
          {
            MR_Word mercury__pprint__TypeInfo_21_21;
            MR_Word mercury__pprint__SparseBitsetVar_10;
            MR_Word mercury__pprint__TypeInfo_for_T2_85;
            MR_Word mercury__pprint__TypeInfo_8_86 = (MR_Word) &mercury__pprint_scalar_common_1[7];
            MR_Word mercury__pprint__A_83;
            MR_Box mercury__pprint__conv2_A_83;

            {
              mercury__pprint__succeeded = mercury__private_builtin__typed_unify_2_p_1(mercury__pprint__TypeInfo_for_T_18, mercury__pprint__TypeInfo_8_86, mercury__pprint__X_7, &mercury__pprint__conv2_A_83);
            }
            if (mercury__pprint__succeeded)
              {
                mercury__pprint__A_83 = ((MR_Word) mercury__pprint__conv2_A_83);
                mercury__pprint__succeeded = MR_TRUE;
              }
            if (mercury__pprint__succeeded)
              {
                mercury__pprint__TypeInfo_for_T2_85 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
                mercury__pprint__SparseBitsetVar_10 = mercury__pprint__A_83;
                mercury__pprint__TypeInfo_21_21 = mercury__pprint__TypeInfo_for_T2_85;
                mercury__pprint__succeeded = MR_TRUE;
              }
            if (mercury__pprint__succeeded)
              {
                MR_Word mercury__pprint__TypeCtorInfo_22_22 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
                MR_Word mercury__pprint__TypeInfo_23_23;
                MR_Word mercury__pprint__BaseTypeClassInfo_for_enum_24 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
                MR_Word mercury__pprint__TypeClassInfo_for_enum_25;

                {
                  mercury__pprint__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__pprint__TypeInfo_23_23, 0) = ((MR_Box) (mercury__pprint__TypeCtorInfo_22_22));
                  MR_hl_field(MR_mktag(0), mercury__pprint__TypeInfo_23_23, 1) = ((MR_Box) (mercury__pprint__TypeInfo_21_21));
                }
                {
                  mercury__pprint__TypeClassInfo_for_enum_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_enum_25, 0) = ((MR_Box) (mercury__pprint__BaseTypeClassInfo_for_enum_24));
                  MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_enum_25, 1) = ((MR_Box) (mercury__pprint__TypeInfo_21_21));
                  MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_enum_25, 2) = ((MR_Box) (mercury__pprint__TypeInfo_23_23));
                }
                {
                  mercury__pprint__HeadVar__4_4 = mercury__pprint__sparse_bitset_to_doc_2_f_0(mercury__pprint__TypeClassInfo_for_enum_25, mercury__pprint__Depth_5, mercury__pprint__SparseBitsetVar_10);
                }
              }
            else
              {
                MR_Word mercury__pprint__TypeInfo_26_26;
                MR_Word mercury__pprint__List_11;

                {
                  mercury__pprint__succeeded = mercury__pprint__dynamic_cast_to_list_2_p_0(mercury__pprint__TypeInfo_for_T_18, &mercury__pprint__TypeInfo_26_26, mercury__pprint__X_7, &mercury__pprint__List_11);
                }
                if (mercury__pprint__succeeded)
                  {
                    mercury__pprint__HeadVar__4_4 = mercury__pprint__list_to_doc_2_f_0(mercury__pprint__TypeInfo_26_26, mercury__pprint__Depth_5, mercury__pprint__List_11);
                  }
                else
                  {
                    MR_Word mercury__pprint__TypeInfo_27_27;
                    MR_ArrayPtr mercury__pprint__Array_12;
                    MR_ArrayPtr mercury__pprint__conv3_Array_12;

                    {
                      mercury__pprint__succeeded = mercury__array__dynamic_cast_to_array_2_p_0(mercury__pprint__TypeInfo_for_T_18, &mercury__pprint__TypeInfo_27_27, mercury__pprint__X_7, &mercury__pprint__conv3_Array_12);
                    }
                    if (mercury__pprint__succeeded)
                      {
                        mercury__pprint__Array_12 = (MR_ArrayPtr) mercury__pprint__conv3_Array_12;
                        mercury__pprint__succeeded = MR_TRUE;
                      }
                    if (mercury__pprint__succeeded)
                      {
                        mercury__pprint__HeadVar__4_4 = mercury__pprint__array_to_doc_2_f_0(mercury__pprint__TypeInfo_27_27, mercury__pprint__Depth_5, (MR_ArrayPtr) mercury__pprint__Array_12);
                      }
                    else
                      {
                        MR_Word mercury__pprint__TypeInfo_28_28;
                        MR_Box mercury__pprint__VersionArray_13;

                        {
                          mercury__pprint__succeeded = mercury__pprint__dynamic_cast_to_version_array_2_p_0(mercury__pprint__TypeInfo_for_T_18, &mercury__pprint__TypeInfo_28_28, mercury__pprint__X_7, &mercury__pprint__VersionArray_13);
                        }
                        if (mercury__pprint__succeeded)
                          {
                            mercury__pprint__HeadVar__4_4 = mercury__pprint__version_array_to_doc_2_f_0(mercury__pprint__TypeInfo_28_28, mercury__pprint__Depth_5, mercury__pprint__VersionArray_13);
                          }
                        else
                          {
                            MR_Box mercury__pprint__Tuple_14 = mercury__pprint__X_7;
                            MR_String mercury__pprint__Var_94;
                            MR_Integer mercury__pprint___Arity_91;

                            {
                              mercury__deconstruct__functor_4_p_1(mercury__pprint__TypeInfo_for_T_18, mercury__pprint__X_7, (MR_Integer) 1, &mercury__pprint__Var_94, &mercury__pprint___Arity_91);
                            }
                            mercury__pprint__succeeded = (strcmp((MR_String) "{}", mercury__pprint__Var_94) == 0);
                            if (mercury__pprint__succeeded)
                              {
                                mercury__pprint__HeadVar__4_4 = mercury__pprint__tuple_to_doc_2_f_0(mercury__pprint__TypeInfo_for_T_18, mercury__pprint__Depth_5, mercury__pprint__Tuple_14);
                              }
                            else
                              {
                                MR_Word mercury__pprint__TypeInfo_29_29;
                                MR_Word mercury__pprint__TypeInfo_30_30;
                                MR_Word mercury__pprint__Map_15;

                                {
                                  mercury__pprint__succeeded = mercury__pprint__dynamic_cast_to_map_2_p_0(mercury__pprint__TypeInfo_for_T_18, &mercury__pprint__TypeInfo_29_29, &mercury__pprint__TypeInfo_30_30, mercury__pprint__X_7, &mercury__pprint__Map_15);
                                }
                                if (mercury__pprint__succeeded)
                                  {
                                    mercury__pprint__HeadVar__4_4 = mercury__pprint__map_to_doc_2_f_0(mercury__pprint__TypeInfo_29_29, mercury__pprint__TypeInfo_30_30, mercury__pprint__Depth_5, mercury__pprint__Map_15);
                                  }
                                else
                                  {
                                    MR_Word mercury__pprint__TypeInfo_31_31;
                                    MR_Word mercury__pprint__TypeInfo_32_32;
                                    MR_Word mercury__pprint__MapPair_16;

                                    {
                                      mercury__pprint__succeeded = mercury__pprint__dynamic_cast_to_map_pair_2_p_0(mercury__pprint__TypeInfo_for_T_18, &mercury__pprint__TypeInfo_31_31, &mercury__pprint__TypeInfo_32_32, mercury__pprint__X_7, &mercury__pprint__MapPair_16);
                                    }
                                    if (mercury__pprint__succeeded)
                                      {
                                        mercury__pprint__HeadVar__4_4 = mercury__pprint__map_pair_to_doc_2_f_0(mercury__pprint__TypeInfo_31_31, mercury__pprint__TypeInfo_32_32, mercury__pprint__Depth_5, mercury__pprint__MapPair_16);
                                      }
                                    else
                                      {
                                        MR_Word mercury__pprint__TypeInfo_33_33;
                                        MR_Word mercury__pprint__Robdd_17;

                                        {
                                          mercury__pprint__succeeded = mercury__pprint__dynamic_cast_to_robdd_2_p_0(mercury__pprint__TypeInfo_for_T_18, &mercury__pprint__TypeInfo_33_33, mercury__pprint__X_7, &mercury__pprint__Robdd_17);
                                        }
                                        if (mercury__pprint__succeeded)
                                          {
                                            mercury__pprint__HeadVar__4_4 = mercury__pprint__robdd_to_doc_2_f_0(mercury__pprint__TypeInfo_33_33, mercury__pprint__Depth_5, mercury__pprint__Robdd_17);
                                          }
                                        else
                                          {
                                            mercury__pprint__HeadVar__4_4 = mercury__pprint__generic_term_to_doc_3_f_0(mercury__pprint__TypeInfo_for_T_18, mercury__pprint__Depth_5, mercury__pprint__Priority_6, mercury__pprint__X_7);
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
    return mercury__pprint__HeadVar__4_4;
  }
}

MR_Word MR_CALL 
mercury__pprint__to_doc_2_f_0(
  MR_Word mercury__pprint__TypeInfo_for_T_7,
  MR_Integer mercury__pprint__Depth_4,
  MR_Box mercury__pprint__X_5)
{
  {
    MR_Word mercury__pprint__HeadVar__3_3;

    {
      mercury__pprint__HeadVar__3_3 = mercury__pprint__to_doc_3_f_0(mercury__pprint__TypeInfo_for_T_7, mercury__pprint__Depth_4, (MR_Integer) 1000, mercury__pprint__X_5);
    }
    return mercury__pprint__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__pprint__packed_cs_to_depth_2_f_0(
  MR_Word mercury__pprint__TypeInfo_for_T_8,
  MR_Integer mercury__pprint__Depth_4,
  MR_Word mercury__pprint__Xs_5)
{
  {
    MR_Word mercury__pprint__HeadVar__3_3;
    MR_Word mercury__pprint__TypeClassInfo_for_doc_9 = (MR_Word) &mercury__pprint_scalar_common_1[0];
    MR_Word mercury__pprint__TypeClassInfo_for_doc_16;
    MR_Word mercury__pprint__Var_6;

    {
      mercury__pprint__Var_6 = mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_51_56_95_95_91_51_44_32_52_93_95_48_2_f_in__list_0(mercury__pprint__TypeInfo_for_T_8, mercury__pprint__Depth_4, mercury__pprint__Xs_5);
    }
    mercury__pprint__TypeClassInfo_for_doc_16 = (MR_Word) &mercury__pprint_scalar_common_1[1];
    {
      mercury__pprint__HeadVar__3_3 = mercury__pprint__packed_3_f_0(mercury__pprint__TypeClassInfo_for_doc_16, mercury__pprint__TypeClassInfo_for_doc_9, mercury__pprint__Depth_4, ((MR_Box) ((MR_String) ", ")), mercury__pprint__Var_6);
    }
    return mercury__pprint__HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_93_95_48_2_f_in__list_0(
  MR_Word mercury__pprint__HeadVar__2_2)
{
  {
    MR_Word mercury__pprint__HeadVar__3_3;

    if ((mercury__pprint__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__pprint__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word mercury__pprint__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mercury__pprint__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mercury__pprint__V_8_8;
        MR_Word mercury__pprint__V_9_9;
        MR_Box mercury__pprint__K_20 = (MR_hl_field(MR_mktag(0), mercury__pprint__V_6_6, (MR_Integer) 0));
        MR_Box mercury__pprint__V_21 = (MR_hl_field(MR_mktag(0), mercury__pprint__V_6_6, (MR_Integer) 1));

        {
          mercury__pprint__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__pprint__V_8_8, 0) = mercury__pprint__K_20;
          MR_hl_field(MR_mktag(0), mercury__pprint__V_8_8, 1) = mercury__pprint__V_21;
        }
        {
          mercury__pprint__V_9_9 = mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_93_95_48_2_f_in__list_0(mercury__pprint__V_7_7);
        }
        {
          mercury__pprint__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__3_3, 0) = ((MR_Box) (mercury__pprint__V_8_8));
          MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__3_3, 1) = ((MR_Box) (mercury__pprint__V_9_9));
        }
      }
    return mercury__pprint__HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
mercury__pprint__tuple_to_doc_2_f_0(
  MR_Word mercury__pprint__TypeInfo_for_T_17,
  MR_Integer mercury__pprint__Depth_4,
  MR_Box mercury__pprint__Tuple_5)
{
  {
    MR_Word mercury__pprint__Doc_6;
    MR_Word mercury__pprint__TypeClassInfo_for_doc_18;
    MR_Word mercury__pprint__TypeClassInfo_for_doc_28;
    MR_Word mercury__pprint__UnivArgs_9;
    MR_Word mercury__pprint__Var_11;
    MR_Word mercury__pprint__Var_12;
    MR_Word mercury__pprint__Var_14;
    MR_Integer mercury__pprint__Var_15;
    MR_Word mercury__pprint__Var_21;
    MR_Integer mercury__pprint__Var_23;
    MR_Word mercury__pprint__Var_30;
    MR_Integer mercury__pprint__Var_32;
    MR_String mercury__pprint___Name_7;
    MR_Integer mercury__pprint___Arity_8;
    MR_Box MR_CALL (* mercury__pprint__func_0)(MR_Box, MR_Box, MR_Box);
    MR_Box mercury__pprint__conv1_Var_21;
    MR_Box MR_CALL (* mercury__pprint__func_2)(MR_Box, MR_Box, MR_Box);
    MR_Box mercury__pprint__conv3_Var_30;

    {
      mercury__deconstruct__deconstruct_5_p_1(mercury__pprint__TypeInfo_for_T_17, mercury__pprint__Tuple_5, (MR_Integer) 1, &mercury__pprint___Name_7, &mercury__pprint___Arity_8, &mercury__pprint__UnivArgs_9);
    }
    mercury__pprint__TypeClassInfo_for_doc_18 = (MR_Word) &mercury__pprint_scalar_common_1[0];
    mercury__pprint__Var_15 = (mercury__pprint__Depth_4 - (MR_Integer) 1);
    {
      mercury__pprint__Var_14 = mercury__pprint__packed_cs_univ_args_2_f_0(mercury__pprint__Var_15, mercury__pprint__UnivArgs_9);
    }
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
	 mercury__pprint__Var_23  = Max;
}
    mercury__pprint__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_18, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      mercury__pprint__conv1_Var_21 = mercury__pprint__func_0(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_18), ((MR_Box) (mercury__pprint__Var_23)), ((MR_Box) (mercury__pprint__Var_14)));
    }
    mercury__pprint__Var_21 = ((MR_Word) mercury__pprint__conv1_Var_21);
    {
      mercury__pprint__Var_12 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), mercury__pprint__Var_12, 0) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(2), mercury__pprint__Var_12, 1) = ((MR_Box) (mercury__pprint__Var_21));
    }
    mercury__pprint__TypeClassInfo_for_doc_28 = (MR_Word) &mercury__pprint_scalar_common_1[1];
    {
      mercury__pprint__Var_11 = mercury__pprint__bracketed_3_f_0(mercury__pprint__TypeClassInfo_for_doc_28, mercury__pprint__TypeClassInfo_for_doc_28, mercury__pprint__TypeClassInfo_for_doc_18, ((MR_Box) ((MR_String) "{")), ((MR_Box) ((MR_String) "}")), ((MR_Box) (mercury__pprint__Var_12)));
    }
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
	 mercury__pprint__Var_32  = Max;
}
    mercury__pprint__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_18, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      mercury__pprint__conv3_Var_30 = mercury__pprint__func_2(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_18), ((MR_Box) (mercury__pprint__Var_32)), ((MR_Box) (mercury__pprint__Var_11)));
    }
    mercury__pprint__Var_30 = ((MR_Word) mercury__pprint__conv3_Var_30);
    {
      mercury__pprint__Doc_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), mercury__pprint__Doc_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), mercury__pprint__Doc_6, 1) = ((MR_Box) (mercury__pprint__Var_30));
    }
    return mercury__pprint__Doc_6;
  }
}

static MR_Word MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_52_54_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_f_in__version_array_0(
  MR_Word mercury__pprint__TypeInfo_for_T1_1_16,
  MR_Box mercury__pprint__V_7_7,
  MR_Word mercury__pprint__V_8_8,
  MR_Integer mercury__pprint__V_9_9)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__pprint__succeeded = ((MR_Integer) 0 <= mercury__pprint__V_9_9);
        MR_Word mercury__pprint__V_5_10;

        if (mercury__pprint__succeeded)
          {
            MR_Word mercury__pprint__V_11_12;
            MR_Integer mercury__pprint__V_13_13;
            MR_Box mercury__pprint__V_12_14;

            {
              mercury__pprint__V_12_14 = mercury__version_array__lookup_2_f_0(mercury__pprint__TypeInfo_for_T1_1_16, mercury__pprint__V_7_7, mercury__pprint__V_9_9);
            }
            {
              mercury__pprint__V_11_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__pprint__V_11_12, 0) = mercury__pprint__V_12_14;
              MR_hl_field(MR_mktag(1), mercury__pprint__V_11_12, 1) = ((MR_Box) (mercury__pprint__V_8_8));
            }
            mercury__pprint__V_13_13 = (mercury__pprint__V_9_9 - (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Word mercury__pprint__next_value_of_V_8_8 = mercury__pprint__V_11_12;
              MR_Integer mercury__pprint__next_value_of_V_9_9 = mercury__pprint__V_13_13;

              mercury__pprint__V_9_9 = mercury__pprint__next_value_of_V_9_9;
              mercury__pprint__V_8_8 = mercury__pprint__next_value_of_V_8_8;
            }
            continue;
          }
        else
          mercury__pprint__V_5_10 = mercury__pprint__V_8_8;
        return mercury__pprint__V_5_10;
      }
      break;
    }
}

static void MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_52_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0(
  MR_Word mercury__pprint__TypeClassInfo_for_enum_20,
  MR_Word mercury__pprint__HeadVar__2_2,
  MR_Word mercury__pprint__HeadVar__3_3,
  MR_Word * mercury__pprint__HeadVar__4_4)
{
  if ((mercury__pprint__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *mercury__pprint__HeadVar__4_4 = mercury__pprint__HeadVar__3_3;
  else
    {
      MR_Word mercury__pprint__V_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word mercury__pprint__V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word mercury__pprint__V_15_13;
      MR_Integer mercury__pprint__V_22_17;
      MR_Integer mercury__pprint__V_18_18;
      MR_Integer mercury__pprint__V_19_19;

      {
        mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_52_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0(mercury__pprint__TypeClassInfo_for_enum_20, mercury__pprint__V_11_10, mercury__pprint__HeadVar__3_3, &mercury__pprint__V_15_13);
      }
      mercury__pprint__V_22_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__pprint__V_10_9, (MR_Integer) 0)));
      mercury__pprint__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__pprint__V_10_9, (MR_Integer) 1)));
{
#define MR_PROC_LABEL mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_52_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	 mercury__pprint__V_19_19  = Bits;
}
      {
        mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_52_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_93_95_48_7_p_in__sparse_bitset_0(mercury__pprint__TypeClassInfo_for_enum_20, (MR_Integer) 1, mercury__pprint__V_22_17, mercury__pprint__V_18_18, mercury__pprint__V_19_19, mercury__pprint__V_15_13, mercury__pprint__HeadVar__4_4);
      }
    }
}

static void MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_52_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_93_95_48_7_p_in__sparse_bitset_0(
  MR_Word mercury__pprint__TypeClassInfo_for_enum_29,
  MR_Word mercury__pprint__V_8_8,
  MR_Integer mercury__pprint__V_10_10,
  MR_Integer mercury__pprint__V_11_11,
  MR_Integer mercury__pprint__V_12_12,
  MR_Word mercury__pprint__V_19_13,
  MR_Word * mercury__pprint__V_20_14)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__pprint__succeeded = (mercury__pprint__V_11_11 == (MR_Integer) 0);

        if (mercury__pprint__succeeded)
          *mercury__pprint__V_20_14 = mercury__pprint__V_19_13;
        else
          {
            mercury__pprint__succeeded = (mercury__pprint__V_12_12 == (MR_Integer) 1);
            if (mercury__pprint__succeeded)
              {
                MR_Box mercury__pprint__V_14_15;
                MR_bool MR_CALL (* mercury__pprint__func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_enum_29, (MR_Integer) 0)), (MR_Integer) 6)));

                {
                  mercury__pprint__succeeded = mercury__pprint__func_0(((MR_Box) mercury__pprint__TypeClassInfo_for_enum_29), ((MR_Box) (mercury__pprint__V_10_10)), &mercury__pprint__V_14_15);
                }
                if (mercury__pprint__succeeded)
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *mercury__pprint__V_20_14 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = mercury__pprint__V_14_15;
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__pprint__V_19_13));
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
                MR_Integer mercury__pprint__V_15_19 = (mercury__pprint__V_12_12 >> (MR_Integer) 1);
                MR_Integer mercury__pprint__V_16_21;
                MR_Integer mercury__pprint__V_17_22;
                MR_Integer mercury__pprint__V_18_23;
                MR_Integer mercury__pprint__V_26_24;
                MR_Integer mercury__pprint__V_4_79 = ((MR_Integer) -1 << mercury__pprint__V_15_19);

                mercury__pprint__V_16_21 = ~(mercury__pprint__V_4_79);
                mercury__pprint__V_17_22 = (mercury__pprint__V_16_21 & mercury__pprint__V_11_11);
                mercury__pprint__V_26_24 = (mercury__pprint__V_11_11 >> mercury__pprint__V_15_19);
                mercury__pprint__V_18_23 = (mercury__pprint__V_16_21 & mercury__pprint__V_26_24);
                switch (mercury__pprint__V_8_8) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      MR_Integer mercury__pprint__V_27_27 = (mercury__pprint__V_10_10 + mercury__pprint__V_15_19);
                      MR_Word mercury__pprint__V_28_28;

                      {
                        mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_52_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_93_95_48_7_p_in__sparse_bitset_0(mercury__pprint__TypeClassInfo_for_enum_29, mercury__pprint__V_8_8, mercury__pprint__V_27_27, mercury__pprint__V_18_23, mercury__pprint__V_15_19, mercury__pprint__V_19_13, &mercury__pprint__V_28_28);
                      }
                      /* direct tailcall eliminated */
                      {
                        MR_Integer mercury__pprint__next_value_of_V_11_11 = mercury__pprint__V_17_22;
                        MR_Integer mercury__pprint__next_value_of_V_12_12 = mercury__pprint__V_15_19;
                        MR_Word mercury__pprint__next_value_of_V_19_13 = mercury__pprint__V_28_28;

                        mercury__pprint__V_19_13 = mercury__pprint__next_value_of_V_19_13;
                        mercury__pprint__V_12_12 = mercury__pprint__next_value_of_V_12_12;
                        mercury__pprint__V_11_11 = mercury__pprint__next_value_of_V_11_11;
                      }
                      continue;
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      MR_Word mercury__pprint__V_30_25;
                      MR_Integer mercury__pprint__V_31_26;

                      {
                        mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_52_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_49_48_93_95_48_7_p_in__sparse_bitset_0(mercury__pprint__TypeClassInfo_for_enum_29, mercury__pprint__V_8_8, mercury__pprint__V_10_10, mercury__pprint__V_17_22, mercury__pprint__V_15_19, mercury__pprint__V_19_13, &mercury__pprint__V_30_25);
                      }
                      mercury__pprint__V_31_26 = (mercury__pprint__V_10_10 + mercury__pprint__V_15_19);
                      /* direct tailcall eliminated */
                      {
                        MR_Integer mercury__pprint__next_value_of_V_10_10 = mercury__pprint__V_31_26;
                        MR_Integer mercury__pprint__next_value_of_V_11_11 = mercury__pprint__V_18_23;
                        MR_Integer mercury__pprint__next_value_of_V_12_12 = mercury__pprint__V_15_19;
                        MR_Word mercury__pprint__next_value_of_V_19_13 = mercury__pprint__V_30_25;

                        mercury__pprint__V_19_13 = mercury__pprint__next_value_of_V_19_13;
                        mercury__pprint__V_12_12 = mercury__pprint__next_value_of_V_12_12;
                        mercury__pprint__V_11_11 = mercury__pprint__next_value_of_V_11_11;
                        mercury__pprint__V_10_10 = mercury__pprint__next_value_of_V_10_10;
                      }
                      continue;
                    }
                    break;
                }
              }
          }
      }
      break;
    }
}

static MR_bool MR_CALL 
mercury__pprint__dynamic_cast_to_robdd_2_p_0(
  MR_Word mercury__pprint__TypeInfo_for_T1_14,
  MR_Word * mercury__pprint__TypeInfo_for_T_13,
  MR_Box mercury__pprint__X_3,
  MR_Word * mercury__pprint__R_4)
{
  {
    MR_bool mercury__pprint__succeeded;
    MR_Word mercury__pprint__TypeCtorInfo_15_15;
    MR_Word mercury__pprint__TypeInfo_16_16;
    MR_Word mercury__pprint__TypeInfo_19_19;
    MR_Word mercury__pprint__ArgTypeDesc_5;
    MR_Word mercury__pprint__Var_8;
    MR_Word mercury__pprint__Var_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__pprint__Var_10;
    MR_Word mercury__pprint__Var_18;
    MR_Box mercury__pprint__Var_17;
    MR_Word mercury__pprint__V_5_22;
    MR_Box mercury__pprint__Var_11;
    MR_Box mercury__pprint__conv0_R_4;

{
#define MR_PROC_LABEL mercury__pprint__dynamic_cast_to_robdd_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__pprint__TypeInfo_for_T1_14 ;
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
	 mercury__pprint__Var_10  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__pprint__dynamic_cast_to_robdd_2_p_0

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc =  mercury__pprint__Var_10 ;
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
	 mercury__pprint__V_5_22  = TypeCtorDesc;
	 mercury__pprint__Var_8  = ArgTypes;
}
    mercury__pprint__succeeded = ((MR_tag((MR_Word) mercury__pprint__Var_8)) == (MR_mktag((MR_Integer) 1)));
    if (mercury__pprint__succeeded)
      {
        mercury__pprint__ArgTypeDesc_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__Var_8, (MR_Integer) 0)));
        mercury__pprint__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__Var_8, (MR_Integer) 1)));
        mercury__pprint__TypeInfo_19_19 = (MR_Word) &mercury__pprint_scalar_common_1[8];
        {
          mercury__pprint__succeeded = mercury__builtin__unify_2_p_0(mercury__pprint__TypeInfo_19_19, ((MR_Box) (mercury__pprint__Var_9)), ((MR_Box) (mercury__pprint__Var_18)));
        }
        if (mercury__pprint__succeeded)
          {
{
#define MR_PROC_LABEL mercury__pprint__dynamic_cast_to_robdd_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo =  mercury__pprint__ArgTypeDesc_5 ;
		{

    TypeInfo_for_T = TypeInfo;


		;}
#undef MR_PROC_LABEL
	 *mercury__pprint__TypeInfo_for_T_13  = TypeInfo_for_T;
}
            mercury__pprint__TypeCtorInfo_15_15 = (MR_Word) &mercury__robdd__robdd__type_ctor_info_robdd_1;
            {
              mercury__pprint__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__pprint__TypeInfo_16_16, 0) = ((MR_Box) (mercury__pprint__TypeCtorInfo_15_15));
              MR_hl_field(MR_mktag(0), mercury__pprint__TypeInfo_16_16, 1) = ((MR_Box) (*mercury__pprint__TypeInfo_for_T_13));
            }
            {
              mercury__pprint__succeeded = mercury__private_builtin__typed_unify_2_p_1(mercury__pprint__TypeInfo_for_T1_14, mercury__pprint__TypeInfo_16_16, mercury__pprint__X_3, &mercury__pprint__conv0_R_4);
            }
            if (mercury__pprint__succeeded)
              {
                *mercury__pprint__R_4 = ((MR_Word) mercury__pprint__conv0_R_4);
                mercury__pprint__succeeded = MR_TRUE;
              }
          }
      }
    return mercury__pprint__succeeded;
  }
}

static MR_bool MR_CALL 
mercury__pprint__dynamic_cast_to_map_pair_2_p_0(
  MR_Word mercury__pprint__TypeInfo_for_T1_20,
  MR_Word * mercury__pprint__TypeInfo_for_T_18,
  MR_Word * mercury__pprint__TypeInfo_for_T_19,
  MR_Box mercury__pprint__X_3,
  MR_Word * mercury__pprint__MP_4)
{
  {
    MR_bool mercury__pprint__succeeded;
    MR_Word mercury__pprint__TypeCtorInfo_21_21;
    MR_Word mercury__pprint__TypeInfo_22_22;
    MR_Word mercury__pprint__TypeInfo_25_25;
    MR_Word mercury__pprint__KeyTypeDesc_5;
    MR_Word mercury__pprint__ValueTypeDesc_6;
    MR_Word mercury__pprint__Var_11;
    MR_Word mercury__pprint__Var_12;
    MR_Word mercury__pprint__Var_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__pprint__Var_14;
    MR_Word mercury__pprint__Var_24;
    MR_Box mercury__pprint__Var_23;
    MR_Word mercury__pprint__V_5_28;
    MR_Box mercury__pprint__Var_15;
    MR_Box mercury__pprint__Var_16;
    MR_Box mercury__pprint__conv0_MP_4;

{
#define MR_PROC_LABEL mercury__pprint__dynamic_cast_to_map_pair_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__pprint__TypeInfo_for_T1_20 ;
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
	 mercury__pprint__Var_14  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__pprint__dynamic_cast_to_map_pair_2_p_0

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc =  mercury__pprint__Var_14 ;
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
	 mercury__pprint__V_5_28  = TypeCtorDesc;
	 mercury__pprint__Var_11  = ArgTypes;
}
    mercury__pprint__succeeded = ((MR_tag((MR_Word) mercury__pprint__Var_11)) == (MR_mktag((MR_Integer) 1)));
    if (mercury__pprint__succeeded)
      {
        mercury__pprint__KeyTypeDesc_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__Var_11, (MR_Integer) 0)));
        mercury__pprint__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__Var_11, (MR_Integer) 1)));
        mercury__pprint__succeeded = ((MR_tag((MR_Word) mercury__pprint__Var_12)) == (MR_mktag((MR_Integer) 1)));
        if (mercury__pprint__succeeded)
          {
            mercury__pprint__ValueTypeDesc_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__Var_12, (MR_Integer) 0)));
            mercury__pprint__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__Var_12, (MR_Integer) 1)));
            mercury__pprint__TypeInfo_25_25 = (MR_Word) &mercury__pprint_scalar_common_1[8];
            {
              mercury__pprint__succeeded = mercury__builtin__unify_2_p_0(mercury__pprint__TypeInfo_25_25, ((MR_Box) (mercury__pprint__Var_13)), ((MR_Box) (mercury__pprint__Var_24)));
            }
            if (mercury__pprint__succeeded)
              {
{
#define MR_PROC_LABEL mercury__pprint__dynamic_cast_to_map_pair_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo =  mercury__pprint__KeyTypeDesc_5 ;
		{

    TypeInfo_for_T = TypeInfo;


		;}
#undef MR_PROC_LABEL
	 *mercury__pprint__TypeInfo_for_T_18  = TypeInfo_for_T;
}
{
#define MR_PROC_LABEL mercury__pprint__dynamic_cast_to_map_pair_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo =  mercury__pprint__ValueTypeDesc_6 ;
		{

    TypeInfo_for_T = TypeInfo;


		;}
#undef MR_PROC_LABEL
	 *mercury__pprint__TypeInfo_for_T_19  = TypeInfo_for_T;
}
                mercury__pprint__TypeCtorInfo_21_21 = (MR_Word) &mercury__pprint__pprint__type_ctor_info_map_pair_2;
                {
                  mercury__pprint__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__pprint__TypeInfo_22_22, 0) = ((MR_Box) (mercury__pprint__TypeCtorInfo_21_21));
                  MR_hl_field(MR_mktag(0), mercury__pprint__TypeInfo_22_22, 1) = ((MR_Box) (*mercury__pprint__TypeInfo_for_T_18));
                  MR_hl_field(MR_mktag(0), mercury__pprint__TypeInfo_22_22, 2) = ((MR_Box) (*mercury__pprint__TypeInfo_for_T_19));
                }
                {
                  mercury__pprint__succeeded = mercury__private_builtin__typed_unify_2_p_1(mercury__pprint__TypeInfo_for_T1_20, mercury__pprint__TypeInfo_22_22, mercury__pprint__X_3, &mercury__pprint__conv0_MP_4);
                }
                if (mercury__pprint__succeeded)
                  {
                    *mercury__pprint__MP_4 = ((MR_Word) mercury__pprint__conv0_MP_4);
                    mercury__pprint__succeeded = MR_TRUE;
                  }
              }
          }
      }
    return mercury__pprint__succeeded;
  }
}

static MR_bool MR_CALL 
mercury__pprint__dynamic_cast_to_map_2_p_0(
  MR_Word mercury__pprint__TypeInfo_for_T1_20,
  MR_Word * mercury__pprint__TypeInfo_for_T_18,
  MR_Word * mercury__pprint__TypeInfo_for_T_19,
  MR_Box mercury__pprint__X_3,
  MR_Word * mercury__pprint__M_4)
{
  {
    MR_bool mercury__pprint__succeeded;
    MR_Word mercury__pprint__TypeCtorInfo_21_21;
    MR_Word mercury__pprint__TypeInfo_22_22;
    MR_Word mercury__pprint__TypeInfo_25_25;
    MR_Word mercury__pprint__KeyTypeDesc_5;
    MR_Word mercury__pprint__ValueTypeDesc_6;
    MR_Word mercury__pprint__Var_11;
    MR_Word mercury__pprint__Var_12;
    MR_Word mercury__pprint__Var_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__pprint__Var_14;
    MR_Word mercury__pprint__Var_24;
    MR_Box mercury__pprint__Var_23;
    MR_Word mercury__pprint__V_5_28;
    MR_Box mercury__pprint__Var_15;
    MR_Box mercury__pprint__Var_16;
    MR_Box mercury__pprint__conv0_M_4;

{
#define MR_PROC_LABEL mercury__pprint__dynamic_cast_to_map_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__pprint__TypeInfo_for_T1_20 ;
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
	 mercury__pprint__Var_14  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__pprint__dynamic_cast_to_map_2_p_0

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc =  mercury__pprint__Var_14 ;
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
	 mercury__pprint__V_5_28  = TypeCtorDesc;
	 mercury__pprint__Var_11  = ArgTypes;
}
    mercury__pprint__succeeded = ((MR_tag((MR_Word) mercury__pprint__Var_11)) == (MR_mktag((MR_Integer) 1)));
    if (mercury__pprint__succeeded)
      {
        mercury__pprint__KeyTypeDesc_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__Var_11, (MR_Integer) 0)));
        mercury__pprint__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__Var_11, (MR_Integer) 1)));
        mercury__pprint__succeeded = ((MR_tag((MR_Word) mercury__pprint__Var_12)) == (MR_mktag((MR_Integer) 1)));
        if (mercury__pprint__succeeded)
          {
            mercury__pprint__ValueTypeDesc_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__Var_12, (MR_Integer) 0)));
            mercury__pprint__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__Var_12, (MR_Integer) 1)));
            mercury__pprint__TypeInfo_25_25 = (MR_Word) &mercury__pprint_scalar_common_1[8];
            {
              mercury__pprint__succeeded = mercury__builtin__unify_2_p_0(mercury__pprint__TypeInfo_25_25, ((MR_Box) (mercury__pprint__Var_13)), ((MR_Box) (mercury__pprint__Var_24)));
            }
            if (mercury__pprint__succeeded)
              {
{
#define MR_PROC_LABEL mercury__pprint__dynamic_cast_to_map_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo =  mercury__pprint__KeyTypeDesc_5 ;
		{

    TypeInfo_for_T = TypeInfo;


		;}
#undef MR_PROC_LABEL
	 *mercury__pprint__TypeInfo_for_T_18  = TypeInfo_for_T;
}
{
#define MR_PROC_LABEL mercury__pprint__dynamic_cast_to_map_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo =  mercury__pprint__ValueTypeDesc_6 ;
		{

    TypeInfo_for_T = TypeInfo;


		;}
#undef MR_PROC_LABEL
	 *mercury__pprint__TypeInfo_for_T_19  = TypeInfo_for_T;
}
                mercury__pprint__TypeCtorInfo_21_21 = (MR_Word) &mercury__tree234__tree234__type_ctor_info_tree234_2;
                {
                  mercury__pprint__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__pprint__TypeInfo_22_22, 0) = ((MR_Box) (mercury__pprint__TypeCtorInfo_21_21));
                  MR_hl_field(MR_mktag(0), mercury__pprint__TypeInfo_22_22, 1) = ((MR_Box) (*mercury__pprint__TypeInfo_for_T_18));
                  MR_hl_field(MR_mktag(0), mercury__pprint__TypeInfo_22_22, 2) = ((MR_Box) (*mercury__pprint__TypeInfo_for_T_19));
                }
                {
                  mercury__pprint__succeeded = mercury__private_builtin__typed_unify_2_p_1(mercury__pprint__TypeInfo_for_T1_20, mercury__pprint__TypeInfo_22_22, mercury__pprint__X_3, &mercury__pprint__conv0_M_4);
                }
                if (mercury__pprint__succeeded)
                  {
                    *mercury__pprint__M_4 = ((MR_Word) mercury__pprint__conv0_M_4);
                    mercury__pprint__succeeded = MR_TRUE;
                  }
              }
          }
      }
    return mercury__pprint__succeeded;
  }
}

static MR_bool MR_CALL 
mercury__pprint__dynamic_cast_to_list_2_p_0(
  MR_Word mercury__pprint__TypeInfo_for_T1_14,
  MR_Word * mercury__pprint__TypeInfo_for_T_13,
  MR_Box mercury__pprint__X_3,
  MR_Word * mercury__pprint__L_4)
{
  {
    MR_bool mercury__pprint__succeeded;
    MR_Word mercury__pprint__TypeCtorInfo_15_15;
    MR_Word mercury__pprint__TypeInfo_16_16;
    MR_Word mercury__pprint__TypeInfo_19_19;
    MR_Word mercury__pprint__ArgTypeDesc_5;
    MR_Word mercury__pprint__Var_8;
    MR_Word mercury__pprint__Var_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__pprint__Var_10;
    MR_Word mercury__pprint__Var_18;
    MR_Box mercury__pprint__Var_17;
    MR_Word mercury__pprint__V_5_22;
    MR_Box mercury__pprint__Var_11;
    MR_Box mercury__pprint__conv0_L_4;

{
#define MR_PROC_LABEL mercury__pprint__dynamic_cast_to_list_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__pprint__TypeInfo_for_T1_14 ;
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
	 mercury__pprint__Var_10  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__pprint__dynamic_cast_to_list_2_p_0

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc =  mercury__pprint__Var_10 ;
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
	 mercury__pprint__V_5_22  = TypeCtorDesc;
	 mercury__pprint__Var_8  = ArgTypes;
}
    mercury__pprint__succeeded = ((MR_tag((MR_Word) mercury__pprint__Var_8)) == (MR_mktag((MR_Integer) 1)));
    if (mercury__pprint__succeeded)
      {
        mercury__pprint__ArgTypeDesc_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__Var_8, (MR_Integer) 0)));
        mercury__pprint__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__Var_8, (MR_Integer) 1)));
        mercury__pprint__TypeInfo_19_19 = (MR_Word) &mercury__pprint_scalar_common_1[8];
        {
          mercury__pprint__succeeded = mercury__builtin__unify_2_p_0(mercury__pprint__TypeInfo_19_19, ((MR_Box) (mercury__pprint__Var_9)), ((MR_Box) (mercury__pprint__Var_18)));
        }
        if (mercury__pprint__succeeded)
          {
{
#define MR_PROC_LABEL mercury__pprint__dynamic_cast_to_list_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo =  mercury__pprint__ArgTypeDesc_5 ;
		{

    TypeInfo_for_T = TypeInfo;


		;}
#undef MR_PROC_LABEL
	 *mercury__pprint__TypeInfo_for_T_13  = TypeInfo_for_T;
}
            mercury__pprint__TypeCtorInfo_15_15 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
            {
              mercury__pprint__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__pprint__TypeInfo_16_16, 0) = ((MR_Box) (mercury__pprint__TypeCtorInfo_15_15));
              MR_hl_field(MR_mktag(0), mercury__pprint__TypeInfo_16_16, 1) = ((MR_Box) (*mercury__pprint__TypeInfo_for_T_13));
            }
            {
              mercury__pprint__succeeded = mercury__private_builtin__typed_unify_2_p_1(mercury__pprint__TypeInfo_for_T1_14, mercury__pprint__TypeInfo_16_16, mercury__pprint__X_3, &mercury__pprint__conv0_L_4);
            }
            if (mercury__pprint__succeeded)
              {
                *mercury__pprint__L_4 = ((MR_Word) mercury__pprint__conv0_L_4);
                mercury__pprint__succeeded = MR_TRUE;
              }
          }
      }
    return mercury__pprint__succeeded;
  }
}

static MR_bool MR_CALL 
mercury__pprint__dynamic_cast_to_version_array_2_p_0(
  MR_Word mercury__pprint__TypeInfo_for_T1_14,
  MR_Word * mercury__pprint__TypeInfo_for_T_13,
  MR_Box mercury__pprint__X_3,
  MR_Box * mercury__pprint__VA_4)
{
  {
    MR_bool mercury__pprint__succeeded;
    MR_Word mercury__pprint__TypeCtorInfo_15_15;
    MR_Word mercury__pprint__TypeInfo_16_16;
    MR_Word mercury__pprint__TypeInfo_19_19;
    MR_Word mercury__pprint__ArgTypeDesc_5;
    MR_Word mercury__pprint__Var_8;
    MR_Word mercury__pprint__Var_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__pprint__Var_10;
    MR_Word mercury__pprint__Var_18;
    MR_Box mercury__pprint__Var_17;
    MR_Word mercury__pprint__V_5_22;
    MR_Box mercury__pprint__Var_11;
    MR_Box mercury__pprint__conv0_VA_4;

{
#define MR_PROC_LABEL mercury__pprint__dynamic_cast_to_version_array_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__pprint__TypeInfo_for_T1_14 ;
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
	 mercury__pprint__Var_10  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__pprint__dynamic_cast_to_version_array_2_p_0

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc =  mercury__pprint__Var_10 ;
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
	 mercury__pprint__V_5_22  = TypeCtorDesc;
	 mercury__pprint__Var_8  = ArgTypes;
}
    mercury__pprint__succeeded = ((MR_tag((MR_Word) mercury__pprint__Var_8)) == (MR_mktag((MR_Integer) 1)));
    if (mercury__pprint__succeeded)
      {
        mercury__pprint__ArgTypeDesc_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__Var_8, (MR_Integer) 0)));
        mercury__pprint__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__Var_8, (MR_Integer) 1)));
        mercury__pprint__TypeInfo_19_19 = (MR_Word) &mercury__pprint_scalar_common_1[8];
        {
          mercury__pprint__succeeded = mercury__builtin__unify_2_p_0(mercury__pprint__TypeInfo_19_19, ((MR_Box) (mercury__pprint__Var_9)), ((MR_Box) (mercury__pprint__Var_18)));
        }
        if (mercury__pprint__succeeded)
          {
{
#define MR_PROC_LABEL mercury__pprint__dynamic_cast_to_version_array_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo =  mercury__pprint__ArgTypeDesc_5 ;
		{

    TypeInfo_for_T = TypeInfo;


		;}
#undef MR_PROC_LABEL
	 *mercury__pprint__TypeInfo_for_T_13  = TypeInfo_for_T;
}
            mercury__pprint__TypeCtorInfo_15_15 = (MR_Word) &mercury__version_array__version_array__type_ctor_info_version_array_1;
            {
              mercury__pprint__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__pprint__TypeInfo_16_16, 0) = ((MR_Box) (mercury__pprint__TypeCtorInfo_15_15));
              MR_hl_field(MR_mktag(0), mercury__pprint__TypeInfo_16_16, 1) = ((MR_Box) (*mercury__pprint__TypeInfo_for_T_13));
            }
            {
              mercury__pprint__succeeded = mercury__private_builtin__typed_unify_2_p_1(mercury__pprint__TypeInfo_for_T1_14, mercury__pprint__TypeInfo_16_16, mercury__pprint__X_3, &mercury__pprint__conv0_VA_4);
            }
            if (mercury__pprint__succeeded)
              {
                *mercury__pprint__VA_4 = ((MR_Box) mercury__pprint__conv0_VA_4);
                mercury__pprint__succeeded = MR_TRUE;
              }
          }
      }
    return mercury__pprint__succeeded;
  }
}

static MR_Integer MR_CALL 
mercury__pprint__adjusted_by_2_f_0(
  MR_Integer mercury__pprint__Priority_1,
  MR_Word mercury__pprint__HeadVar__2_2)
{
  {
    MR_Integer mercury__pprint__HeadVar__3_3;

    switch (mercury__pprint__HeadVar__2_2) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__pprint__HeadVar__3_3 = (mercury__pprint__Priority_1 - (MR_Integer) 1);
        }
        break;
      case (MR_Integer) 1:
        mercury__pprint__HeadVar__3_3 = mercury__pprint__Priority_1;
        break;
    }
    return mercury__pprint__HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
mercury__pprint__maybe_parens_3_f_0(
  MR_Integer mercury__pprint__ParentPriority_5,
  MR_Integer mercury__pprint__OpPriority_6,
  MR_Word mercury__pprint__Doc_7)
{
  {
    MR_bool mercury__pprint__succeeded = (mercury__pprint__ParentPriority_5 < mercury__pprint__OpPriority_6);
    MR_Word mercury__pprint__HeadVar__4_4;

    if (mercury__pprint__succeeded)
      {
        MR_Word mercury__pprint__TypeClassInfo_for_doc_8 = (MR_Word) &mercury__pprint_scalar_common_1[0];
        MR_Word mercury__pprint__TypeClassInfo_for_doc_12 = (MR_Word) &mercury__pprint_scalar_common_1[1];
        MR_Word mercury__pprint__TypeClassInfo_for_doc_13 = (MR_Word) &mercury__pprint_scalar_common_1[1];

        {
          mercury__pprint__HeadVar__4_4 = mercury__pprint__bracketed_3_f_0(mercury__pprint__TypeClassInfo_for_doc_12, mercury__pprint__TypeClassInfo_for_doc_13, mercury__pprint__TypeClassInfo_for_doc_8, ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_String) ")")), ((MR_Box) (mercury__pprint__Doc_7)));
        }
      }
    else
      mercury__pprint__HeadVar__4_4 = mercury__pprint__Doc_7;
    return mercury__pprint__HeadVar__4_4;
  }
}

MR_Word MR_CALL 
mercury__pprint__space_0_f_0(void)
{
  {
    MR_Word mercury__pprint__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__pprint_scalar_common_1[10]);

    return mercury__pprint__HeadVar__1_1;
  }
}

MR_Word MR_CALL 
mercury__pprint__packed_cs_univ_args_2_f_0(
  MR_Integer mercury__pprint__Depth_4,
  MR_Word mercury__pprint__UnivArgs_5)
{
  {
    MR_Word mercury__pprint__HeadVar__3_3;
    MR_Word mercury__pprint__TypeClassInfo_for_doc_12 = (MR_Word) &mercury__pprint_scalar_common_1[0];
    MR_Word mercury__pprint__TypeClassInfo_for_doc_18;
    MR_Word mercury__pprint__Var_7;

    {
      mercury__pprint__Var_7 = mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_51_55_95_95_91_50_93_95_48_2_f_in__list_0(mercury__pprint__Depth_4, mercury__pprint__UnivArgs_5);
    }
    mercury__pprint__TypeClassInfo_for_doc_18 = (MR_Word) &mercury__pprint_scalar_common_1[1];
    {
      mercury__pprint__HeadVar__3_3 = mercury__pprint__packed_3_f_0(mercury__pprint__TypeClassInfo_for_doc_18, mercury__pprint__TypeClassInfo_for_doc_12, mercury__pprint__Depth_4, ((MR_Box) ((MR_String) ", ")), mercury__pprint__Var_7);
    }
    return mercury__pprint__HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_51_55_95_95_91_50_93_95_48_2_f_in__list_0(
  MR_Integer mercury__pprint__Var_12,
  MR_Word mercury__pprint__HeadVar__2_2)
{
  {
    MR_Word mercury__pprint__HeadVar__3_3;

    if ((mercury__pprint__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__pprint__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word mercury__pprint__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mercury__pprint__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mercury__pprint__V_8_8;
        MR_Word mercury__pprint__V_9_9;

        {
          mercury__pprint__V_8_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), mercury__pprint__V_8_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), mercury__pprint__V_8_8, 1) = ((MR_Box) (mercury__pprint__Var_12));
          MR_hl_field(MR_mktag(3), mercury__pprint__V_8_8, 2) = ((MR_Box) (mercury__pprint__V_6_6));
        }
        {
          mercury__pprint__V_9_9 = mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_51_55_95_95_91_50_93_95_48_2_f_in__list_0(mercury__pprint__Var_12, mercury__pprint__V_7_7);
        }
        {
          mercury__pprint__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__3_3, 0) = ((MR_Box) (mercury__pprint__V_8_8));
          MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__3_3, 1) = ((MR_Box) (mercury__pprint__V_9_9));
        }
      }
    return mercury__pprint__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__pprint__packed_cs_2_f_0(
  MR_Word mercury__pprint__TypeClassInfo_for_doc_7,
  MR_Integer mercury__pprint__N_4,
  MR_Word mercury__pprint__Xs_5)
{
  {
    MR_Word mercury__pprint__HeadVar__3_3;
    MR_Word mercury__pprint__TypeClassInfo_for_doc_8 = (MR_Word) &mercury__pprint_scalar_common_1[1];

    {
      mercury__pprint__HeadVar__3_3 = mercury__pprint__packed_3_f_0(mercury__pprint__TypeClassInfo_for_doc_8, mercury__pprint__TypeClassInfo_for_doc_7, mercury__pprint__N_4, ((MR_Box) ((MR_String) ", ")), mercury__pprint__Xs_5);
    }
    return mercury__pprint__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__pprint__packed_cs_1_f_0(
  MR_Word mercury__pprint__TypeClassInfo_for_doc_5,
  MR_Word mercury__pprint__Xs_3)
{
  {
    MR_Word mercury__pprint__HeadVar__2_2;
    MR_Word mercury__pprint__TypeClassInfo_for_doc_6 = (MR_Word) &mercury__pprint_scalar_common_1[1];
    MR_Integer mercury__pprint__Var_9;

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
	 mercury__pprint__Var_9  = Max;
}
    {
      mercury__pprint__HeadVar__2_2 = mercury__pprint__packed_3_f_0(mercury__pprint__TypeClassInfo_for_doc_6, mercury__pprint__TypeClassInfo_for_doc_5, mercury__pprint__Var_9, ((MR_Box) ((MR_String) ", ")), mercury__pprint__Xs_3);
    }
    return mercury__pprint__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__pprint__packed_2_f_0(
  MR_Word mercury__pprint__TypeClassInfo_for_doc_7,
  MR_Word mercury__pprint__TypeClassInfo_for_doc_8,
  MR_Box mercury__pprint__Sep_4,
  MR_Word mercury__pprint__Xs_5)
{
  {
    MR_Word mercury__pprint__HeadVar__3_3;
    MR_Integer mercury__pprint__Var_6;

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
	 mercury__pprint__Var_6  = Max;
}
    {
      mercury__pprint__HeadVar__3_3 = mercury__pprint__packed_3_f_0(mercury__pprint__TypeClassInfo_for_doc_7, mercury__pprint__TypeClassInfo_for_doc_8, mercury__pprint__Var_6, mercury__pprint__Sep_4, mercury__pprint__Xs_5);
    }
    return mercury__pprint__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__pprint__packed_3_f_0(
  MR_Word mercury__pprint__TypeClassInfo_for_doc_33,
  MR_Word mercury__pprint__TypeClassInfo_for_doc_34,
  MR_Integer mercury__pprint__HeadVar__1_1,
  MR_Box mercury__pprint__HeadVar__2_2,
  MR_Word mercury__pprint__HeadVar__3_3)
{
  {
    MR_bool mercury__pprint__succeeded;
    MR_Word mercury__pprint__HeadVar__4_4;

    if ((mercury__pprint__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__pprint__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word mercury__pprint__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__3_3, (MR_Integer) 1)));
        MR_Box mercury__pprint__Var_39 = (MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__3_3, (MR_Integer) 0));

        if ((mercury__pprint__Var_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word mercury__pprint__TypeClassInfo_for_doc_35 = (MR_Word) &mercury__pprint_scalar_common_1[0];
            MR_Word mercury__pprint__Var_11;
            MR_Word mercury__pprint__Var_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
            MR_Word mercury__pprint__Var_13;
            MR_Word mercury__pprint__Var_46;
            MR_Integer mercury__pprint__Var_48;
            MR_Box MR_CALL (* mercury__pprint__func_2)(MR_Box, MR_Box, MR_Box);
            MR_Box mercury__pprint__conv3_Var_46;

            mercury__pprint__succeeded = ((MR_Integer) 0 < mercury__pprint__HeadVar__1_1);
            if (mercury__pprint__succeeded)
              {
                MR_Integer mercury__pprint__Var_41;
                MR_Box MR_CALL (* mercury__pprint__func_0)(MR_Box, MR_Box, MR_Box);
                MR_Box mercury__pprint__conv1_Var_13;

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
	 mercury__pprint__Var_41  = Max;
}
                mercury__pprint__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_34, (MR_Integer) 0)), (MR_Integer) 5)));
                {
                  mercury__pprint__conv1_Var_13 = mercury__pprint__func_0(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_34), ((MR_Box) (mercury__pprint__Var_41)), mercury__pprint__Var_39);
                }
                mercury__pprint__Var_13 = ((MR_Word) mercury__pprint__conv1_Var_13);
              }
            else
              {
                mercury__pprint__Var_13 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__pprint_scalar_common_1[9]);
              }
            {
              mercury__pprint__Var_11 = mercury__pprint__f_43_43_2_f_0(mercury__pprint__TypeClassInfo_for_doc_35, mercury__pprint__TypeClassInfo_for_doc_35, ((MR_Box) (mercury__pprint__Var_12)), ((MR_Box) (mercury__pprint__Var_13)));
            }
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
	 mercury__pprint__Var_48  = Max;
}
            mercury__pprint__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_35, (MR_Integer) 0)), (MR_Integer) 5)));
            {
              mercury__pprint__conv3_Var_46 = mercury__pprint__func_2(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_35), ((MR_Box) (mercury__pprint__Var_48)), ((MR_Box) (mercury__pprint__Var_11)));
            }
            mercury__pprint__Var_46 = ((MR_Word) mercury__pprint__conv3_Var_46);
            {
              mercury__pprint__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__4_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__4_4, 1) = ((MR_Box) (mercury__pprint__Var_46));
            }
          }
        else
          {
            mercury__pprint__succeeded = ((MR_Integer) 0 < mercury__pprint__HeadVar__1_1);
            if (mercury__pprint__succeeded)
              {
                MR_Word mercury__pprint__TypeClassInfo_for_doc_36 = (MR_Word) &mercury__pprint_scalar_common_1[0];
                MR_Word mercury__pprint__Var_22;
                MR_Word mercury__pprint__Var_23;
                MR_Word mercury__pprint__Var_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
                MR_Word mercury__pprint__Var_25;
                MR_Word mercury__pprint__Var_26;
                MR_Integer mercury__pprint__Var_27;
                MR_Word mercury__pprint__Var_52;
                MR_Word mercury__pprint__Var_53;
                MR_Integer mercury__pprint__Var_55;
                MR_Integer mercury__pprint__Var_58;
                MR_Word mercury__pprint__Var_63;
                MR_Integer mercury__pprint__Var_65;
                MR_Box MR_CALL (* mercury__pprint__func_4)(MR_Box, MR_Box, MR_Box);
                MR_Box mercury__pprint__conv5_Var_52;
                MR_Box MR_CALL (* mercury__pprint__func_6)(MR_Box, MR_Box, MR_Box);
                MR_Box mercury__pprint__conv7_Var_53;
                MR_Box MR_CALL (* mercury__pprint__func_8)(MR_Box, MR_Box, MR_Box);
                MR_Box mercury__pprint__conv9_Var_63;

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
	 mercury__pprint__Var_55  = Max;
}
                mercury__pprint__func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_34, (MR_Integer) 0)), (MR_Integer) 5)));
                {
                  mercury__pprint__conv5_Var_52 = mercury__pprint__func_4(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_34), ((MR_Box) (mercury__pprint__Var_55)), mercury__pprint__Var_39);
                }
                mercury__pprint__Var_52 = ((MR_Word) mercury__pprint__conv5_Var_52);
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
	 mercury__pprint__Var_58  = Max;
}
                mercury__pprint__func_6 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_33, (MR_Integer) 0)), (MR_Integer) 5)));
                {
                  mercury__pprint__conv7_Var_53 = mercury__pprint__func_6(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_33), ((MR_Box) (mercury__pprint__Var_58)), mercury__pprint__HeadVar__2_2);
                }
                mercury__pprint__Var_53 = ((MR_Word) mercury__pprint__conv7_Var_53);
                {
                  mercury__pprint__Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__pprint__Var_25, 0) = ((MR_Box) (mercury__pprint__Var_52));
                  MR_hl_field(MR_mktag(1), mercury__pprint__Var_25, 1) = ((MR_Box) (mercury__pprint__Var_53));
                }
                {
                  mercury__pprint__Var_23 = mercury__pprint__f_43_43_2_f_0(mercury__pprint__TypeClassInfo_for_doc_36, mercury__pprint__TypeClassInfo_for_doc_36, ((MR_Box) (mercury__pprint__Var_24)), ((MR_Box) (mercury__pprint__Var_25)));
                }
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
	 mercury__pprint__Var_65  = Max;
}
                mercury__pprint__func_8 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_36, (MR_Integer) 0)), (MR_Integer) 5)));
                {
                  mercury__pprint__conv9_Var_63 = mercury__pprint__func_8(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_36), ((MR_Box) (mercury__pprint__Var_65)), ((MR_Box) (mercury__pprint__Var_23)));
                }
                mercury__pprint__Var_63 = ((MR_Word) mercury__pprint__conv9_Var_63);
                {
                  mercury__pprint__Var_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), mercury__pprint__Var_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), mercury__pprint__Var_22, 1) = ((MR_Box) (mercury__pprint__Var_63));
                }
                mercury__pprint__Var_27 = (mercury__pprint__HeadVar__1_1 - (MR_Integer) 1);
                {
                  mercury__pprint__Var_26 = mercury__pprint__packed_3_f_0(mercury__pprint__TypeClassInfo_for_doc_33, mercury__pprint__TypeClassInfo_for_doc_34, mercury__pprint__Var_27, mercury__pprint__HeadVar__2_2, mercury__pprint__Var_38);
                }
                {
                  mercury__pprint__HeadVar__4_4 = mercury__pprint__f_43_43_2_f_0(mercury__pprint__TypeClassInfo_for_doc_36, mercury__pprint__TypeClassInfo_for_doc_36, ((MR_Box) (mercury__pprint__Var_22)), ((MR_Box) (mercury__pprint__Var_26)));
                }
              }
            else
              {
                MR_Word mercury__pprint__TypeClassInfo_for_doc_37 = (MR_Word) &mercury__pprint_scalar_common_1[0];
                MR_Word mercury__pprint__Var_30;
                MR_Word mercury__pprint__Var_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
                MR_Word mercury__pprint__Var_32 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__pprint_scalar_common_1[9]);
                MR_Word mercury__pprint__Var_70;
                MR_Integer mercury__pprint__Var_72;
                MR_Box MR_CALL (* mercury__pprint__func_10)(MR_Box, MR_Box, MR_Box);
                MR_Box mercury__pprint__conv11_Var_70;

                {
                  mercury__pprint__Var_30 = mercury__pprint__f_43_43_2_f_0(mercury__pprint__TypeClassInfo_for_doc_37, mercury__pprint__TypeClassInfo_for_doc_37, ((MR_Box) (mercury__pprint__Var_31)), ((MR_Box) (mercury__pprint__Var_32)));
                }
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
	 mercury__pprint__Var_72  = Max;
}
                mercury__pprint__func_10 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_37, (MR_Integer) 0)), (MR_Integer) 5)));
                {
                  mercury__pprint__conv11_Var_70 = mercury__pprint__func_10(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_37), ((MR_Box) (mercury__pprint__Var_72)), ((MR_Box) (mercury__pprint__Var_30)));
                }
                mercury__pprint__Var_70 = ((MR_Word) mercury__pprint__conv11_Var_70);
                {
                  mercury__pprint__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__4_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__4_4, 1) = ((MR_Box) (mercury__pprint__Var_70));
                }
              }
          }
      }
    return mercury__pprint__HeadVar__4_4;
  }
}

MR_Word MR_CALL 
mercury__pprint__braces_1_f_0(
  MR_Word mercury__pprint__TypeClassInfo_for_doc_6,
  MR_Box mercury__pprint__D_3)
{
  {
    MR_Word mercury__pprint__HeadVar__2_2;
    MR_Word mercury__pprint__TypeClassInfo_for_doc_7 = (MR_Word) &mercury__pprint_scalar_common_1[1];

    {
      mercury__pprint__HeadVar__2_2 = mercury__pprint__bracketed_3_f_0(mercury__pprint__TypeClassInfo_for_doc_7, mercury__pprint__TypeClassInfo_for_doc_7, mercury__pprint__TypeClassInfo_for_doc_6, ((MR_Box) ((MR_String) "{")), ((MR_Box) ((MR_String) "}")), mercury__pprint__D_3);
    }
    return mercury__pprint__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__pprint__brackets_1_f_0(
  MR_Word mercury__pprint__TypeClassInfo_for_doc_6,
  MR_Box mercury__pprint__D_3)
{
  {
    MR_Word mercury__pprint__HeadVar__2_2;
    MR_Word mercury__pprint__TypeClassInfo_for_doc_7 = (MR_Word) &mercury__pprint_scalar_common_1[1];

    {
      mercury__pprint__HeadVar__2_2 = mercury__pprint__bracketed_3_f_0(mercury__pprint__TypeClassInfo_for_doc_7, mercury__pprint__TypeClassInfo_for_doc_7, mercury__pprint__TypeClassInfo_for_doc_6, ((MR_Box) ((MR_String) "[")), ((MR_Box) ((MR_String) "]")), mercury__pprint__D_3);
    }
    return mercury__pprint__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__pprint__parentheses_1_f_0(
  MR_Word mercury__pprint__TypeClassInfo_for_doc_6,
  MR_Box mercury__pprint__D_3)
{
  {
    MR_Word mercury__pprint__HeadVar__2_2;
    MR_Word mercury__pprint__TypeClassInfo_for_doc_7 = (MR_Word) &mercury__pprint_scalar_common_1[1];
    MR_Word mercury__pprint__TypeClassInfo_for_doc_8 = (MR_Word) &mercury__pprint_scalar_common_1[1];

    {
      mercury__pprint__HeadVar__2_2 = mercury__pprint__bracketed_3_f_0(mercury__pprint__TypeClassInfo_for_doc_7, mercury__pprint__TypeClassInfo_for_doc_8, mercury__pprint__TypeClassInfo_for_doc_6, ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_String) ")")), mercury__pprint__D_3);
    }
    return mercury__pprint__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__pprint__bracketed_3_f_0(
  MR_Word mercury__pprint__TypeClassInfo_for_doc_9,
  MR_Word mercury__pprint__TypeClassInfo_for_doc_10,
  MR_Word mercury__pprint__TypeClassInfo_for_doc_11,
  MR_Box mercury__pprint__L_5,
  MR_Box mercury__pprint__R_6,
  MR_Box mercury__pprint__D_7)
{
  {
    MR_Word mercury__pprint__HeadVar__4_4;
    MR_Word mercury__pprint__TypeClassInfo_for_doc_12 = (MR_Word) &mercury__pprint_scalar_common_1[0];
    MR_Word mercury__pprint__Var_8;
    MR_Word mercury__pprint__Var_15;
    MR_Word mercury__pprint__Var_16;
    MR_Integer mercury__pprint__Var_18;
    MR_Integer mercury__pprint__Var_21;
    MR_Word mercury__pprint__Var_27;
    MR_Word mercury__pprint__Var_28;
    MR_Integer mercury__pprint__Var_30;
    MR_Integer mercury__pprint__Var_33;
    MR_Box MR_CALL (* mercury__pprint__func_0)(MR_Box, MR_Box, MR_Box);
    MR_Box mercury__pprint__conv1_Var_15;
    MR_Box MR_CALL (* mercury__pprint__func_2)(MR_Box, MR_Box, MR_Box);
    MR_Box mercury__pprint__conv3_Var_16;
    MR_Box MR_CALL (* mercury__pprint__func_4)(MR_Box, MR_Box, MR_Box);
    MR_Box mercury__pprint__conv5_Var_27;
    MR_Box MR_CALL (* mercury__pprint__func_6)(MR_Box, MR_Box, MR_Box);
    MR_Box mercury__pprint__conv7_Var_28;

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
	 mercury__pprint__Var_18  = Max;
}
    mercury__pprint__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_11, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      mercury__pprint__conv1_Var_15 = mercury__pprint__func_0(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_11), ((MR_Box) (mercury__pprint__Var_18)), mercury__pprint__D_7);
    }
    mercury__pprint__Var_15 = ((MR_Word) mercury__pprint__conv1_Var_15);
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
	 mercury__pprint__Var_21  = Max;
}
    mercury__pprint__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_10, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      mercury__pprint__conv3_Var_16 = mercury__pprint__func_2(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_10), ((MR_Box) (mercury__pprint__Var_21)), mercury__pprint__R_6);
    }
    mercury__pprint__Var_16 = ((MR_Word) mercury__pprint__conv3_Var_16);
    {
      mercury__pprint__Var_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__pprint__Var_8, 0) = ((MR_Box) (mercury__pprint__Var_15));
      MR_hl_field(MR_mktag(1), mercury__pprint__Var_8, 1) = ((MR_Box) (mercury__pprint__Var_16));
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
	 mercury__pprint__Var_30  = Max;
}
    mercury__pprint__func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_9, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      mercury__pprint__conv5_Var_27 = mercury__pprint__func_4(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_9), ((MR_Box) (mercury__pprint__Var_30)), mercury__pprint__L_5);
    }
    mercury__pprint__Var_27 = ((MR_Word) mercury__pprint__conv5_Var_27);
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
	 mercury__pprint__Var_33  = Max;
}
    mercury__pprint__func_6 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_12, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      mercury__pprint__conv7_Var_28 = mercury__pprint__func_6(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_12), ((MR_Box) (mercury__pprint__Var_33)), ((MR_Box) (mercury__pprint__Var_8)));
    }
    mercury__pprint__Var_28 = ((MR_Word) mercury__pprint__conv7_Var_28);
    {
      mercury__pprint__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__4_4, 0) = ((MR_Box) (mercury__pprint__Var_27));
      MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__4_4, 1) = ((MR_Box) (mercury__pprint__Var_28));
    }
    return mercury__pprint__HeadVar__4_4;
  }
}

MR_Word MR_CALL 
mercury__pprint__f_60_47_62_2_f_0(
  MR_Word mercury__pprint__X_4,
  MR_Word mercury__pprint__Y_5)
{
  {
    MR_Word mercury__pprint__HeadVar__3_3;
    MR_Word mercury__pprint__TypeClassInfo_for_doc_8 = (MR_Word) &mercury__pprint_scalar_common_1[0];
    MR_Word mercury__pprint__TypeClassInfo_for_doc_9 = (MR_Word) &mercury__pprint_scalar_common_1[0];
    MR_Word mercury__pprint__Var_6;
    MR_Word mercury__pprint__Var_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
    MR_Word mercury__pprint__Var_12;
    MR_Word mercury__pprint__Var_13;
    MR_Integer mercury__pprint__Var_15;
    MR_Integer mercury__pprint__Var_18;
    MR_Box MR_CALL (* mercury__pprint__func_0)(MR_Box, MR_Box, MR_Box);
    MR_Box mercury__pprint__conv1_Var_12;
    MR_Box MR_CALL (* mercury__pprint__func_2)(MR_Box, MR_Box, MR_Box);
    MR_Box mercury__pprint__conv3_Var_13;

    {
      mercury__pprint__Var_6 = mercury__pprint__f_43_43_2_f_0(mercury__pprint__TypeClassInfo_for_doc_9, mercury__pprint__TypeClassInfo_for_doc_9, ((MR_Box) (mercury__pprint__Var_7)), ((MR_Box) (mercury__pprint__Y_5)));
    }
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
	 mercury__pprint__Var_15  = Max;
}
    mercury__pprint__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_8, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      mercury__pprint__conv1_Var_12 = mercury__pprint__func_0(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_8), ((MR_Box) (mercury__pprint__Var_15)), ((MR_Box) (mercury__pprint__X_4)));
    }
    mercury__pprint__Var_12 = ((MR_Word) mercury__pprint__conv1_Var_12);
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
	 mercury__pprint__Var_18  = Max;
}
    mercury__pprint__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_9, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      mercury__pprint__conv3_Var_13 = mercury__pprint__func_2(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_9), ((MR_Box) (mercury__pprint__Var_18)), ((MR_Box) (mercury__pprint__Var_6)));
    }
    mercury__pprint__Var_13 = ((MR_Word) mercury__pprint__conv3_Var_13);
    {
      mercury__pprint__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__3_3, 0) = ((MR_Box) (mercury__pprint__Var_12));
      MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__3_3, 1) = ((MR_Box) (mercury__pprint__Var_13));
    }
    return mercury__pprint__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__pprint__poly_1_f_0(
  MR_Word mercury__pprint__HeadVar__1_1)
{
  {
    MR_Word mercury__pprint__HeadVar__2_2;

    switch (MR_tag((MR_Word) mercury__pprint__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Float mercury__pprint__F_21 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__pprint__HeadVar__1_1, (MR_Integer) 0)));
          MR_String mercury__pprint__Var_22;
          MR_Word mercury__pprint__Var_38 = (MR_Word) &mercury__pprint_scalar_common_5[0];
          MR_Word mercury__pprint__V_9_55 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          MR_Word mercury__pprint__V_10_56 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

          {
            mercury__string__format__format_float_component_6_p_0(mercury__pprint__Var_38, mercury__pprint__V_9_55, mercury__pprint__V_10_56, (MR_Integer) 2, mercury__pprint__F_21, &mercury__pprint__Var_22);
          }
          {
            mercury__pprint__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__2_2, 1) = ((MR_Box) (mercury__pprint__Var_22));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer mercury__pprint__I_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__1_1, (MR_Integer) 0)));
          MR_String mercury__pprint__Var_16;
          MR_Word mercury__pprint__Var_32 = (MR_Word) &mercury__pprint_scalar_common_5[0];
          MR_Word mercury__pprint__V_7_61 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          MR_Word mercury__pprint__V_8_62 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

          {
            mercury__string__format__format_signed_int_component_5_p_0(mercury__pprint__Var_32, mercury__pprint__V_7_61, mercury__pprint__V_8_62, mercury__pprint__I_15, &mercury__pprint__Var_16);
          }
          {
            mercury__pprint__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__2_2, 1) = ((MR_Box) (mercury__pprint__Var_16));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String mercury__pprint__S_3 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__pprint__HeadVar__1_1, (MR_Integer) 0)));

          {
            mercury__pprint__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__2_2, 1) = ((MR_Box) (mercury__pprint__S_3));
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Char mercury__pprint__C_9 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__1_1, (MR_Integer) 0)));
          MR_String mercury__pprint__Var_10;
          MR_Word mercury__pprint__Var_45 = (MR_Word) &mercury__pprint_scalar_common_5[0];
          MR_Word mercury__pprint__V_7_49 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

          {
            mercury__string__format__format_char_component_4_p_0(mercury__pprint__Var_45, mercury__pprint__V_7_49, mercury__pprint__C_9, &mercury__pprint__Var_10);
          }
          {
            mercury__pprint__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__2_2, 1) = ((MR_Box) (mercury__pprint__Var_10));
          }
        }
        break;
    }
    return mercury__pprint__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__pprint__group_1_f_0(
  MR_Word mercury__pprint__TypeClassInfo_for_doc_5,
  MR_Box mercury__pprint__X_3)
{
  {
    MR_Word mercury__pprint__HeadVar__2_2;
    MR_Word mercury__pprint__Var_4;
    MR_Integer mercury__pprint__Var_7;
    MR_Box MR_CALL (* mercury__pprint__func_0)(MR_Box, MR_Box, MR_Box);
    MR_Box mercury__pprint__conv1_Var_4;

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
	 mercury__pprint__Var_7  = Max;
}
    mercury__pprint__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_5, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      mercury__pprint__conv1_Var_4 = mercury__pprint__func_0(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_5), ((MR_Box) (mercury__pprint__Var_7)), mercury__pprint__X_3);
    }
    mercury__pprint__Var_4 = ((MR_Word) mercury__pprint__conv1_Var_4);
    {
      mercury__pprint__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__2_2, 1) = ((MR_Box) (mercury__pprint__Var_4));
    }
    return mercury__pprint__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__pprint__label_2_f_0(
  MR_Word mercury__pprint__TypeClassInfo_for_doc_7,
  MR_String mercury__pprint__L_4,
  MR_Box mercury__pprint__X_5)
{
  {
    MR_Word mercury__pprint__HeadVar__3_3;
    MR_Word mercury__pprint__Var_6;
    MR_Integer mercury__pprint__Var_9;
    MR_Box MR_CALL (* mercury__pprint__func_0)(MR_Box, MR_Box, MR_Box);
    MR_Box mercury__pprint__conv1_Var_6;

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
	 mercury__pprint__Var_9  = Max;
}
    mercury__pprint__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_7, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      mercury__pprint__conv1_Var_6 = mercury__pprint__func_0(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_7), ((MR_Box) (mercury__pprint__Var_9)), mercury__pprint__X_5);
    }
    mercury__pprint__Var_6 = ((MR_Word) mercury__pprint__conv1_Var_6);
    {
      mercury__pprint__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__3_3, 1) = ((MR_Box) (mercury__pprint__L_4));
      MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__3_3, 2) = ((MR_Box) (mercury__pprint__Var_6));
    }
    return mercury__pprint__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__pprint__nest_2_f_0(
  MR_Word mercury__pprint__TypeClassInfo_for_doc_7,
  MR_Integer mercury__pprint__I_4,
  MR_Box mercury__pprint__X_5)
{
  {
    MR_Word mercury__pprint__HeadVar__3_3;
    MR_Word mercury__pprint__Var_6;
    MR_Integer mercury__pprint__Var_9;
    MR_Box MR_CALL (* mercury__pprint__func_0)(MR_Box, MR_Box, MR_Box);
    MR_Box mercury__pprint__conv1_Var_6;

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
	 mercury__pprint__Var_9  = Max;
}
    mercury__pprint__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_7, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      mercury__pprint__conv1_Var_6 = mercury__pprint__func_0(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_7), ((MR_Box) (mercury__pprint__Var_9)), mercury__pprint__X_5);
    }
    mercury__pprint__Var_6 = ((MR_Word) mercury__pprint__conv1_Var_6);
    {
      mercury__pprint__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), mercury__pprint__HeadVar__3_3, 0) = ((MR_Box) (mercury__pprint__I_4));
      MR_hl_field(MR_mktag(2), mercury__pprint__HeadVar__3_3, 1) = ((MR_Box) (mercury__pprint__Var_6));
    }
    return mercury__pprint__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__pprint__line_0_f_0(void)
{
  {
    MR_Word mercury__pprint__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));

    return mercury__pprint__HeadVar__1_1;
  }
}

MR_Word MR_CALL 
mercury__pprint__f_60_62_2_f_0(
  MR_Word mercury__pprint__X_4,
  MR_Word mercury__pprint__Y_5)
{
  {
    MR_Word mercury__pprint__HeadVar__3_3;

    {
      mercury__pprint__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__3_3, 0) = ((MR_Box) (mercury__pprint__X_4));
      MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__3_3, 1) = ((MR_Box) (mercury__pprint__Y_5));
    }
    return mercury__pprint__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__pprint__text_1_f_0(
  MR_String mercury__pprint__S_3)
{
  {
    MR_Word mercury__pprint__HeadVar__2_2;

    {
      mercury__pprint__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), mercury__pprint__HeadVar__2_2, 1) = ((MR_Box) (mercury__pprint__S_3));
    }
    return mercury__pprint__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__pprint__nil_0_f_0(void)
{
  {
    MR_Word mercury__pprint__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    return mercury__pprint__HeadVar__1_1;
  }
}

MR_Word MR_CALL 
mercury__pprint__f_43_43_2_f_0(
  MR_Word mercury__pprint__TypeClassInfo_for_doc_8,
  MR_Word mercury__pprint__TypeClassInfo_for_doc_9,
  MR_Box mercury__pprint__Doc1_4,
  MR_Box mercury__pprint__Doc2_5)
{
  {
    MR_Word mercury__pprint__HeadVar__3_3;
    MR_Word mercury__pprint__Var_6;
    MR_Word mercury__pprint__Var_7;
    MR_Integer mercury__pprint__Var_11;
    MR_Integer mercury__pprint__Var_14;
    MR_Box MR_CALL (* mercury__pprint__func_0)(MR_Box, MR_Box, MR_Box);
    MR_Box mercury__pprint__conv1_Var_6;
    MR_Box MR_CALL (* mercury__pprint__func_2)(MR_Box, MR_Box, MR_Box);
    MR_Box mercury__pprint__conv3_Var_7;

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
	 mercury__pprint__Var_11  = Max;
}
    mercury__pprint__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_8, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      mercury__pprint__conv1_Var_6 = mercury__pprint__func_0(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_8), ((MR_Box) (mercury__pprint__Var_11)), mercury__pprint__Doc1_4);
    }
    mercury__pprint__Var_6 = ((MR_Word) mercury__pprint__conv1_Var_6);
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
	 mercury__pprint__Var_14  = Max;
}
    mercury__pprint__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_9, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      mercury__pprint__conv3_Var_7 = mercury__pprint__func_2(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_9), ((MR_Box) (mercury__pprint__Var_14)), mercury__pprint__Doc2_5);
    }
    mercury__pprint__Var_7 = ((MR_Word) mercury__pprint__conv3_Var_7);
    {
      mercury__pprint__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__3_3, 0) = ((MR_Box) (mercury__pprint__Var_6));
      MR_hl_field(MR_mktag(1), mercury__pprint__HeadVar__3_3, 1) = ((MR_Box) (mercury__pprint__Var_7));
    }
    return mercury__pprint__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__pprint__doc_1_f_0(
  MR_Word mercury__pprint__TypeClassInfo_for_doc_5,
  MR_Box mercury__pprint__X_3)
{
  {
    MR_Word mercury__pprint__HeadVar__2_2;
    MR_Integer mercury__pprint__Var_4;
    MR_Box MR_CALL (* mercury__pprint__func_0)(MR_Box, MR_Box, MR_Box);
    MR_Box mercury__pprint__conv1_HeadVar__2_2;

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
	 mercury__pprint__Var_4  = Max;
}
    mercury__pprint__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__pprint__TypeClassInfo_for_doc_5, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      mercury__pprint__conv1_HeadVar__2_2 = mercury__pprint__func_0(((MR_Box) mercury__pprint__TypeClassInfo_for_doc_5), ((MR_Box) (mercury__pprint__Var_4)), mercury__pprint__X_3);
    }
    mercury__pprint__HeadVar__2_2 = ((MR_Word) mercury__pprint__conv1_HeadVar__2_2);
    return mercury__pprint__HeadVar__2_2;
  }
}

static MR_bool MR_CALL 
mercury__pprint____Unify____depth_0_0_10001(
  MR_Box mercury__pprint__wrapper_arg_1,
  MR_Box mercury__pprint__wrapper_arg_2)
{
  {
    MR_bool mercury__pprint__succeeded;

    {
      mercury__pprint__succeeded = mercury__pprint____Unify____depth_0_0(((MR_Integer) mercury__pprint__wrapper_arg_1), ((MR_Integer) mercury__pprint__wrapper_arg_2));
    }
    return mercury__pprint__succeeded;
  }
}

static void MR_CALL 
mercury__pprint____Compare____depth_0_0_10001(
  MR_Box * mercury__pprint__wrapper_arg_1,
  MR_Box mercury__pprint__wrapper_arg_2,
  MR_Box mercury__pprint__wrapper_arg_3)
{
  {
    MR_Word mercury__pprint__conv0_HeadVar__1_1;

    {
      mercury__pprint____Compare____depth_0_0(&mercury__pprint__conv0_HeadVar__1_1, ((MR_Integer) mercury__pprint__wrapper_arg_2), ((MR_Integer) mercury__pprint__wrapper_arg_3));
    }
    *mercury__pprint__wrapper_arg_1 = ((MR_Box) (mercury__pprint__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__pprint____Unify____doc_0_0_10001(
  MR_Box mercury__pprint__wrapper_arg_1,
  MR_Box mercury__pprint__wrapper_arg_2)
{
  {
    MR_bool mercury__pprint__succeeded;

    {
      mercury__pprint__succeeded = mercury__pprint____Unify____doc_0_0(((MR_Word) mercury__pprint__wrapper_arg_1), ((MR_Word) mercury__pprint__wrapper_arg_2));
    }
    return mercury__pprint__succeeded;
  }
}

static void MR_CALL 
mercury__pprint____Compare____doc_0_0_10001(
  MR_Box * mercury__pprint__wrapper_arg_1,
  MR_Box mercury__pprint__wrapper_arg_2,
  MR_Box mercury__pprint__wrapper_arg_3)
{
  {
    MR_Word mercury__pprint__conv0_HeadVar__1_1;

    {
      mercury__pprint____Compare____doc_0_0(&mercury__pprint__conv0_HeadVar__1_1, ((MR_Word) mercury__pprint__wrapper_arg_2), ((MR_Word) mercury__pprint__wrapper_arg_3));
    }
    *mercury__pprint__wrapper_arg_1 = ((MR_Box) (mercury__pprint__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__pprint____Unify____map_pair_2_0_10001(
  MR_Box mercury__pprint__wrapper_arg_1,
  MR_Box mercury__pprint__wrapper_arg_2,
  MR_Box mercury__pprint__wrapper_arg_3,
  MR_Box mercury__pprint__wrapper_arg_4)
{
  {
    MR_bool mercury__pprint__succeeded;

    {
      mercury__pprint__succeeded = mercury__pprint____Unify____map_pair_2_0(((MR_Word) mercury__pprint__wrapper_arg_1), ((MR_Word) mercury__pprint__wrapper_arg_2), ((MR_Word) mercury__pprint__wrapper_arg_3), ((MR_Word) mercury__pprint__wrapper_arg_4));
    }
    return mercury__pprint__succeeded;
  }
}

static void MR_CALL 
mercury__pprint____Compare____map_pair_2_0_10001(
  MR_Box mercury__pprint__wrapper_arg_1,
  MR_Box mercury__pprint__wrapper_arg_2,
  MR_Box * mercury__pprint__wrapper_arg_3,
  MR_Box mercury__pprint__wrapper_arg_4,
  MR_Box mercury__pprint__wrapper_arg_5)
{
  {
    MR_Word mercury__pprint__conv0_HeadVar__1_1;

    {
      mercury__pprint____Compare____map_pair_2_0(((MR_Word) mercury__pprint__wrapper_arg_1), ((MR_Word) mercury__pprint__wrapper_arg_2), &mercury__pprint__conv0_HeadVar__1_1, ((MR_Word) mercury__pprint__wrapper_arg_4), ((MR_Word) mercury__pprint__wrapper_arg_5));
    }
    *mercury__pprint__wrapper_arg_3 = ((MR_Box) (mercury__pprint__conv0_HeadVar__1_1));
  }
}

static MR_Box MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____character__arity0______pprint__doc_2_2_f_0_10001(
  MR_Box mercury__pprint__closure_arg,
  MR_Box mercury__pprint__wrapper_arg_1,
  MR_Box mercury__pprint__wrapper_arg_2)
{
  {
    MR_Box mercury__pprint__wrapper_arg_3;
    MR_Box mercury__pprint__closure = mercury__pprint__closure_arg;
    MR_Word mercury__pprint__conv0_HeadVar__3_3;

    {
      mercury__pprint__conv0_HeadVar__3_3 = mercury__pprint__ClassMethod_for_pprint__doc____character__arity0______pprint__doc_2_2_f_0(((MR_Integer) mercury__pprint__wrapper_arg_1), ((MR_Char) (MR_Word) mercury__pprint__wrapper_arg_2));
    }
    mercury__pprint__wrapper_arg_3 = ((MR_Box) (mercury__pprint__conv0_HeadVar__3_3));
    return mercury__pprint__wrapper_arg_3;
  }
}

static MR_Box MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____float__arity0______pprint__doc_2_2_f_0_10001(
  MR_Box mercury__pprint__closure_arg,
  MR_Box mercury__pprint__wrapper_arg_1,
  MR_Box mercury__pprint__wrapper_arg_2)
{
  {
    MR_Box mercury__pprint__wrapper_arg_3;
    MR_Box mercury__pprint__closure = mercury__pprint__closure_arg;
    MR_Word mercury__pprint__conv0_HeadVar__3_3;

    {
      mercury__pprint__conv0_HeadVar__3_3 = mercury__pprint__ClassMethod_for_pprint__doc____float__arity0______pprint__doc_2_2_f_0(((MR_Integer) mercury__pprint__wrapper_arg_1), MR_unbox_float(mercury__pprint__wrapper_arg_2));
    }
    mercury__pprint__wrapper_arg_3 = ((MR_Box) (mercury__pprint__conv0_HeadVar__3_3));
    return mercury__pprint__wrapper_arg_3;
  }
}

static MR_Box MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____int__arity0______pprint__doc_2_2_f_0_10001(
  MR_Box mercury__pprint__closure_arg,
  MR_Box mercury__pprint__wrapper_arg_1,
  MR_Box mercury__pprint__wrapper_arg_2)
{
  {
    MR_Box mercury__pprint__wrapper_arg_3;
    MR_Box mercury__pprint__closure = mercury__pprint__closure_arg;
    MR_Word mercury__pprint__conv0_HeadVar__3_3;

    {
      mercury__pprint__conv0_HeadVar__3_3 = mercury__pprint__ClassMethod_for_pprint__doc____int__arity0______pprint__doc_2_2_f_0(((MR_Integer) mercury__pprint__wrapper_arg_1), ((MR_Integer) mercury__pprint__wrapper_arg_2));
    }
    mercury__pprint__wrapper_arg_3 = ((MR_Box) (mercury__pprint__conv0_HeadVar__3_3));
    return mercury__pprint__wrapper_arg_3;
  }
}

static MR_Box MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____uint__arity0______pprint__doc_2_2_f_0_10001(
  MR_Box mercury__pprint__closure_arg,
  MR_Box mercury__pprint__wrapper_arg_1,
  MR_Box mercury__pprint__wrapper_arg_2)
{
  {
    MR_Box mercury__pprint__wrapper_arg_3;
    MR_Box mercury__pprint__closure = mercury__pprint__closure_arg;
    MR_Word mercury__pprint__conv0_HeadVar__3_3;

    {
      mercury__pprint__conv0_HeadVar__3_3 = mercury__pprint__ClassMethod_for_pprint__doc____uint__arity0______pprint__doc_2_2_f_0(((MR_Integer) mercury__pprint__wrapper_arg_1), ((MR_Unsigned) mercury__pprint__wrapper_arg_2));
    }
    mercury__pprint__wrapper_arg_3 = ((MR_Box) (mercury__pprint__conv0_HeadVar__3_3));
    return mercury__pprint__wrapper_arg_3;
  }
}

static MR_Box MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____string__arity0______pprint__doc_2_2_f_0_10001(
  MR_Box mercury__pprint__closure_arg,
  MR_Box mercury__pprint__wrapper_arg_1,
  MR_Box mercury__pprint__wrapper_arg_2)
{
  {
    MR_Box mercury__pprint__wrapper_arg_3;
    MR_Box mercury__pprint__closure = mercury__pprint__closure_arg;
    MR_Word mercury__pprint__conv0_HeadVar__3_3;

    {
      mercury__pprint__conv0_HeadVar__3_3 = mercury__pprint__ClassMethod_for_pprint__doc____string__arity0______pprint__doc_2_2_f_0(((MR_Integer) mercury__pprint__wrapper_arg_1), ((MR_String) mercury__pprint__wrapper_arg_2));
    }
    mercury__pprint__wrapper_arg_3 = ((MR_Box) (mercury__pprint__conv0_HeadVar__3_3));
    return mercury__pprint__wrapper_arg_3;
  }
}

static MR_Box MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____pprint__doc__arity0______pprint__doc_2_2_f_0_10001(
  MR_Box mercury__pprint__closure_arg,
  MR_Box mercury__pprint__wrapper_arg_1,
  MR_Box mercury__pprint__wrapper_arg_2)
{
  {
    MR_Box mercury__pprint__wrapper_arg_3;
    MR_Box mercury__pprint__closure = mercury__pprint__closure_arg;
    MR_Word mercury__pprint__conv0_Doc_3;

    {
      mercury__pprint__conv0_Doc_3 = mercury__pprint__ClassMethod_for_pprint__doc____pprint__doc__arity0______pprint__doc_2_2_f_0(((MR_Integer) mercury__pprint__wrapper_arg_1), ((MR_Word) mercury__pprint__wrapper_arg_2));
    }
    mercury__pprint__wrapper_arg_3 = ((MR_Box) (mercury__pprint__conv0_Doc_3));
    return mercury__pprint__wrapper_arg_3;
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

/* :- end_module pprint. */
