/*
** Automatically generated from `pprint.m'
** by the Mercury compiler,
** version rotd-2023-03-19
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
#include "multi_map.mih"
#include "mutvar.mih"
#include "one_or_more.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
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
#include "stm_builtin.mih"
#include "store.mih"
#include "stream.mih"
#include "string.mih"
#include "table_builtin.mih"
#include "term.mih"
#include "term_context.mih"
#include "term_conversion.mih"
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
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"




static const MR_DuFunctorDesc mercury__pprint__pprint__du_functor_desc_doc_0_0;

static const MR_PseudoTypeInfo mercury__pprint__pprint__field_types_doc_0_1[1];

static const MR_DuFunctorDesc mercury__pprint__pprint__du_functor_desc_doc_0_1;

static const MR_DuFunctorDesc mercury__pprint__pprint__du_functor_desc_doc_0_2;

static const MR_PseudoTypeInfo mercury__pprint__pprint__field_types_doc_0_3[2];

static const MR_DuFunctorDesc mercury__pprint__pprint__du_functor_desc_doc_0_3;

static const MR_PseudoTypeInfo mercury__pprint__pprint__field_types_doc_0_4[1];

static const MR_DuFunctorDesc mercury__pprint__pprint__du_functor_desc_doc_0_4;

static const MR_PseudoTypeInfo mercury__pprint__pprint__field_types_doc_0_5[2];

static const MR_DuFunctorDesc mercury__pprint__pprint__du_functor_desc_doc_0_5;

static const MR_PseudoTypeInfo mercury__pprint__pprint__field_types_doc_0_6[2];

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

static void MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_50_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0(
  MR_Word TypeClassInfo_for_uenum_19,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_104_105_103_104_95_116_111_95_108_111_119_95_95_104_111_51_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_6_p_in__sparse_bitset_0(
  MR_Word TypeClassInfo_for_uenum_22,
  MR_Unsigned HeadVar__2_8,
  MR_Unsigned HeadVar__3_9,
  MR_Unsigned HeadVar__4_10,
  MR_Word HeadVar__5_11,
  MR_Word * HeadVar__6_12);

static void MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_98_101_115_116_95_97_99_99_95_95_104_111_50_54_95_95_91_51_44_32_52_93_95_48_8_p_0(
  MR_Word Var_59,
  MR_Box Var_60,
  MR_Integer Width_10,
  MR_String AfterNlStr_11,
  MR_Word Doc_12,
  MR_Integer STATE_VARIABLE_UsedWidth_0_23,
  MR_Integer * STATE_VARIABLE_UsedWidth_24,
  MR_Box STATE_VARIABLE_LayoutStream_0_25,
  MR_Box * STATE_VARIABLE_LayoutStream_26);

static void MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_104_111_51_49_95_95_91_51_44_32_52_93_95_48_6_p_0(
  MR_Word Var_40,
  MR_Box Var_41,
  MR_Word Doc_8,
  MR_Integer STATE_VARIABLE_UsedWidth_0_18,
  MR_Integer * STATE_VARIABLE_UsedWidth_19,
  MR_Box STATE_VARIABLE_LayoutStream_0_20,
  MR_Box * STATE_VARIABLE_LayoutStream_21);

static void MR_CALL 
mercury__pprint__layout_best_acc__ho25_8_p_0(
  MR_Integer Width_10,
  MR_String AfterNlStr_11,
  MR_Word Doc_12,
  MR_Integer STATE_VARIABLE_UsedWidth_0_23,
  MR_Integer * STATE_VARIABLE_UsedWidth_24);

static void MR_CALL 
mercury__pprint__layout_flat__ho32_6_p_0(
  MR_Word Doc_8,
  MR_Integer STATE_VARIABLE_UsedWidth_0_18,
  MR_Integer * STATE_VARIABLE_UsedWidth_19);

static void MR_CALL 
mercury__pprint__layout_best_acc__ho24_8_p_0(
  MR_Integer Width_10,
  MR_String AfterNlStr_11,
  MR_Word Doc_12,
  MR_Integer STATE_VARIABLE_UsedWidth_0_23,
  MR_Integer * STATE_VARIABLE_UsedWidth_24,
  MR_Word STATE_VARIABLE_LayoutStream_0_25,
  MR_Word * STATE_VARIABLE_LayoutStream_26);

static void MR_CALL 
mercury__pprint__layout_flat__ho33_6_p_0(
  MR_Word Doc_8,
  MR_Integer STATE_VARIABLE_UsedWidth_0_18,
  MR_Integer * STATE_VARIABLE_UsedWidth_19,
  MR_Word STATE_VARIABLE_LayoutStream_0_20,
  MR_Word * STATE_VARIABLE_LayoutStream_21);

static void MR_CALL 
mercury__pprint__words_loop__ho22_4_p_in__string_0(
  MR_String HeadVar__2_6,
  MR_Integer HeadVar__3_7,
  MR_Word * HeadVar__4_8);

static void MR_CALL 
mercury__pprint__LCMC__pred__words_loop__ho22__1_4_p_0(
  MR_String HeadVar__2_6,
  MR_Integer HeadVar__3_7,
  MR_Word * AddrOfHeadVar__4_15);

static void MR_CALL 
mercury__pprint__skip_to_word_end__ho34_4_p_in__string_0(
  MR_String HeadVar__2_6,
  MR_Integer HeadVar__3_7,
  MR_Integer * HeadVar__4_8);

static void MR_CALL 
mercury__pprint__skip_to_next_word_start__ho23_4_p_in__string_0(
  MR_String HeadVar__2_6,
  MR_Integer HeadVar__3_7,
  MR_Integer * HeadVar__4_8);

static MR_Word MR_CALL 
mercury__pprint__map__ho19_2_f_in__list_0(
  MR_Word HeadVar__2_2);

static void MR_CALL 
mercury__pprint__LCMC__func__map__ho19__1_3_p_0(
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_13);

static MR_Word MR_CALL 
mercury__pprint__univ_to_doc_3_f_0(
  MR_Integer Depth_5,
  MR_Word Priority_6,
  MR_Word Univ_7);

static void MR_CALL 
mercury__pprint__f_76_67_77_67_95_95_102_117_110_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_50_49_95_95_91_51_44_32_52_93_95_48_95_95_49_3_p_0(
  MR_Word Var_12,
  MR_Integer Var_13,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_17);

static MR_Word MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_50_49_95_95_91_51_44_32_52_93_95_48_2_f_in__list_0(
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
mercury__pprint__generic_term_to_doc_3_f_0(
  MR_Word TypeInfo_for_T_101,
  MR_Integer Depth_5,
  MR_Word Priority_6,
  MR_Box X_7);

static MR_Word MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_93_95_48_2_f_in__list_0(
  MR_Word HeadVar__2_2);

static void MR_CALL 
mercury__pprint__f_76_67_77_67_95_95_102_117_110_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_93_95_48_95_95_49_3_p_0(
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_23);

static MR_Word MR_CALL 
mercury__pprint__tuple_to_doc_2_f_0(
  MR_Word TypeInfo_for_T_17,
  MR_Integer Depth_4,
  MR_Box Tuple_5);

static void MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_50_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_5_p_in__version_array_0(
  MR_Box HeadVar__2_7,
  MR_Integer HeadVar__3_8,
  MR_Word HeadVar__4_9,
  MR_Word * HeadVar__5_10);

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
mercury__pprint__dynamic_cast_to_version_array_2_p_0(
  MR_Word TypeInfo_for_T1_14,
  MR_Word * TypeInfo_for_T_13,
  MR_Box X_3,
  MR_Box * VA_4);

static MR_Word MR_CALL 
mercury__pprint__adjusted_by_2_f_0(
  MR_Word OpPriority_4,
  MR_Word GtOrGe_5);

static MR_Word MR_CALL 
mercury__pprint__maybe_parens_3_f_0(
  MR_Word ParentPriority_5,
  MR_Word OpPriority_6,
  MR_Word Doc_7);

static MR_Word MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_50_48_95_95_91_50_93_95_48_2_f_in__list_0(
  MR_Integer Var_12,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mercury__pprint__f_76_67_77_67_95_95_102_117_110_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_50_48_95_95_91_50_93_95_48_95_95_49_3_p_0(
  MR_Integer Var_12,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_14);

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


static /* final */ const MR_Box mercury__pprint_scalar_common_1[9][2];

static /* final */ const MR_Box mercury__pprint_scalar_common_2[1][3];

static /* final */ const MR_Box mercury__pprint_scalar_common_3[1][4];

static /* final */ const MR_Box mercury__pprint_scalar_common_4[2][5];

static /* final */ const MR_Box mercury__pprint_scalar_common_5[10][1];




static /* final */ const MR_Box mercury__pprint_scalar_common_1[9][2] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_pprint__doc__arity1__string__arity0__)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_pprint__doc__arity1__pprint__doc__arity0__)),
    ((MR_Box) (&mercury__pprint__pprint__type_ctor_info_doc_0))
  },
  /* row   2 */
  {
    ((MR_Box) (base_typeclass_info_enum__uenum__arity1__int__arity0__)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   3 */
  {
    ((MR_Box) (base_typeclass_info_pprint__doc__arity1__int__arity0__)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   4 */
  {
    ((MR_Box) (base_typeclass_info_ops__op_table__arity1__ops__mercury_op_table__arity0__)),
    ((MR_Box) (&mercury__ops__ops__type_ctor_info_mercury_op_table_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1)),
    ((MR_Box) (&mercury__pprint_scalar_common_1[6]))
  },
  /* row   8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__type_desc__type_desc__type_ctor_info_type_desc_0))
  },
};

static /* final */ const MR_Box mercury__pprint_scalar_common_2[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__pprint_scalar_common_3[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__pprint_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__pprint_scalar_common_4[2][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__pprint_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__pprint_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__pprint_scalar_common_5[10][1] = {
  /* row   0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
  /* row   1 */
  {
    ((MR_Box) ((MR_String) ","))
  },
  /* row   2 */
  {
    ((MR_Box) ((MR_String) ";"))
  },
  /* row   3 */
  {
    ((MR_Box) ((MR_String) ":"))
  },
  /* row   4 */
  {
    ((MR_Box) ((MR_String) " "))
  },
  /* row   5 */
  {
    ((MR_Box) ((MR_String) ", "))
  },
  /* row   6 */
  {
    ((MR_Box) ((MR_String) "; "))
  },
  /* row   7 */
  {
    ((MR_Box) ((MR_String) ": "))
  },
  /* row   8 */
  {
    ((MR_Box) ((MR_String) "..."))
  },
  /* row   9 */
  {
    ((MR_Box) ((MR_String) " -> "))
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



const MR_TypeCtorInfo_Struct mercury__pprint__pprint__type_ctor_info_depth_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__pprint____Unify____depth_0_0_10001)),
  ((MR_Box) (mercury__pprint____Compare____depth_0_0_10001)),
  (MR_String) "pprint",
  (MR_String) "depth",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_DuFunctorDesc mercury__pprint__pprint__du_functor_desc_doc_0_0 = {
  (MR_String) "pp_nil",
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

static const MR_PseudoTypeInfo mercury__pprint__pprint__field_types_doc_0_1[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc mercury__pprint__pprint__du_functor_desc_doc_0_1 = {
  (MR_String) "pp_text",
  INT16_C(1),
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

static const MR_DuFunctorDesc mercury__pprint__pprint__du_functor_desc_doc_0_2 = {
  (MR_String) "pp_line",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(2),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__pprint__pprint__field_types_doc_0_3[2] = {
  (MR_PseudoTypeInfo) (&mercury__pprint__pprint__type_ctor_info_doc_0),
  (MR_PseudoTypeInfo) (&mercury__pprint__pprint__type_ctor_info_doc_0)
};

static const MR_DuFunctorDesc mercury__pprint__pprint__du_functor_desc_doc_0_3 = {
  (MR_String) "pp_seq",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(3),
  mercury__pprint__pprint__field_types_doc_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__pprint__pprint__field_types_doc_0_4[1] = {
  (MR_PseudoTypeInfo) (&mercury__pprint__pprint__type_ctor_info_doc_0)
};

static const MR_DuFunctorDesc mercury__pprint__pprint__du_functor_desc_doc_0_4 = {
  (MR_String) "pp_group",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(4),
  mercury__pprint__pprint__field_types_doc_0_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__pprint__pprint__field_types_doc_0_5[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__pprint__pprint__type_ctor_info_doc_0)
};

static const MR_DuFunctorDesc mercury__pprint__pprint__du_functor_desc_doc_0_5 = {
  (MR_String) "pp_nest",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(5),
  mercury__pprint__pprint__field_types_doc_0_5,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__pprint__pprint__field_types_doc_0_6[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__pprint__pprint__type_ctor_info_doc_0)
};

static const MR_DuFunctorDesc mercury__pprint__pprint__du_functor_desc_doc_0_6 = {
  (MR_String) "pp_label",
  INT16_C(2),
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
  (MR_String) "pp_doc",
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
  &mercury__pprint__pprint__du_functor_desc_doc_0_2
};

static const MR_DuFunctorDescPtr mercury__pprint__pprint__du_stag_ordered_doc_0_1[1] = {
  &mercury__pprint__pprint__du_functor_desc_doc_0_1
};

static const MR_DuFunctorDescPtr mercury__pprint__pprint__du_stag_ordered_doc_0_2[1] = {
  &mercury__pprint__pprint__du_functor_desc_doc_0_3
};

static const MR_DuFunctorDescPtr mercury__pprint__pprint__du_stag_ordered_doc_0_3[4] = {
  &mercury__pprint__pprint__du_functor_desc_doc_0_4,
  &mercury__pprint__pprint__du_functor_desc_doc_0_5,
  &mercury__pprint__pprint__du_functor_desc_doc_0_6,
  &mercury__pprint__pprint__du_functor_desc_doc_0_7
};

static const MR_DuPtagLayout mercury__pprint__pprint__du_ptag_ordered_doc_0[4] = {
  {
    UINT32_C(2),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mercury__pprint__pprint__du_stag_ordered_doc_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__pprint__pprint__du_stag_ordered_doc_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__pprint__pprint__du_stag_ordered_doc_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(4),
    MR_SECTAG_REMOTE_FULL_WORD,
    mercury__pprint__pprint__du_stag_ordered_doc_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__pprint__pprint__du_name_ordered_doc_0[8] = {
  &mercury__pprint__pprint__du_functor_desc_doc_0_7,
  &mercury__pprint__pprint__du_functor_desc_doc_0_4,
  &mercury__pprint__pprint__du_functor_desc_doc_0_6,
  &mercury__pprint__pprint__du_functor_desc_doc_0_2,
  &mercury__pprint__pprint__du_functor_desc_doc_0_5,
  &mercury__pprint__pprint__du_functor_desc_doc_0_0,
  &mercury__pprint__pprint__du_functor_desc_doc_0_3,
  &mercury__pprint__pprint__du_functor_desc_doc_0_1
};

static const MR_Integer mercury__pprint__pprint__functor_number_map_doc_0[8] = {
  (MR_Integer) 5,
  (MR_Integer) 7,
  (MR_Integer) 3,
  (MR_Integer) 6,
  (MR_Integer) 1,
  (MR_Integer) 4,
  (MR_Integer) 2,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__pprint__pprint__type_ctor_info_doc_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__pprint____Unify____doc_0_0_10001)),
  ((MR_Box) (mercury__pprint____Compare____doc_0_0_10001)),
  (MR_String) "pprint",
  (MR_String) "doc",
  { mercury__pprint__pprint__du_name_ordered_doc_0 },
  { mercury__pprint__pprint__du_ptag_ordered_doc_0 },
  (MR_Integer) 8,
  UINT16_C(12),
  mercury__pprint__pprint__functor_number_map_doc_0,

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
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__pprint____Unify____map_pair_2_0_10001)),
  ((MR_Box) (mercury__pprint____Compare____map_pair_2_0_10001)),
  (MR_String) "pprint",
  (MR_String) "map_pair",
  { mercury__pprint__pprint__du_name_ordered_map_pair_2 },
  { mercury__pprint__pprint__du_ptag_ordered_map_pair_2 },
  (MR_Integer) 1,
  UINT16_C(12),
  mercury__pprint__pprint__functor_number_map_map_pair_2,

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

static void MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_50_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0(
  MR_Word TypeClassInfo_for_uenum_19,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = HeadVar__3_3;
  else
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Var_13;
    MR_Unsigned Var_14;
    MR_Unsigned Var_15;
    MR_Unsigned Var_18;

    mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_50_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0(TypeClassInfo_for_uenum_19, Var_10, HeadVar__3_3, &Var_13);
    Var_14 = ((MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 0))));
    Var_15 = ((MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 1))));
{
#define MR_PROC_LABEL mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_50_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_4_p_in__sparse_bitset_0

	MR_Unsigned Bits;

		{

    Bits = (MR_Unsigned) ML_BITS_PER_UINT;


		;}
#undef MR_PROC_LABEL
	Var_18  = Bits;
}
    mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_104_105_103_104_95_116_111_95_108_111_119_95_95_104_111_51_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_6_p_in__sparse_bitset_0(TypeClassInfo_for_uenum_19, Var_14, Var_15, Var_18, Var_13, HeadVar__4_4);
  }
}

static void MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_104_105_103_104_95_116_111_95_108_111_119_95_95_104_111_51_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_6_p_in__sparse_bitset_0(
  MR_Word TypeClassInfo_for_uenum_22,
  MR_Unsigned HeadVar__2_8,
  MR_Unsigned HeadVar__3_9,
  MR_Unsigned HeadVar__4_10,
  MR_Word HeadVar__5_11,
  MR_Word * HeadVar__6_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__3_9 == (MR_Unsigned) 0U);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
      *HeadVar__6_12 = HeadVar__5_11;
    else
    {
      succeeded = (HeadVar__4_10 == (MR_Unsigned) 1U);
      if (succeeded)
      {
        MR_Box Var_13;

        Var_13 = mercury__enum__det_from_uint_1_f_0(TypeClassInfo_for_uenum_22, HeadVar__2_8);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__6_12 = base;
          MR_hl_field(1, base, 0) = Var_13;
          MR_hl_field(1, base, 1) = ((MR_Box) (HeadVar__5_11));
        }
      }
      else
      {
        MR_Unsigned Var_14 = (HeadVar__4_10 >> 1);
        MR_Unsigned Var_16;
        MR_Unsigned Var_17;
        MR_Unsigned Var_18;
        MR_Unsigned Var_19;
        MR_Unsigned Var_20;
        MR_Word Var_21;
        MR_Unsigned Var_33;
        MR_Unsigned Var_34 = ~((MR_Unsigned) 0U);
        MR_Unsigned next_value_of_HeadVar__3_9;
        MR_Unsigned next_value_of_HeadVar__4_10;
        MR_Word next_value_of_HeadVar__5_11;

        Var_33 = (Var_34 << (int) Var_14);
        Var_16 = ~(Var_33);
        Var_17 = (Var_16 & HeadVar__3_9);
        Var_19 = (HeadVar__3_9 >> (int) Var_14);
        Var_18 = (Var_16 & Var_19);
        Var_20 = (HeadVar__2_8 + Var_14);
        mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_104_105_103_104_95_116_111_95_108_111_119_95_95_104_111_51_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_93_95_48_6_p_in__sparse_bitset_0(TypeClassInfo_for_uenum_22, Var_20, Var_18, Var_14, HeadVar__5_11, &Var_21);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__3_9 = Var_17;
        next_value_of_HeadVar__4_10 = Var_14;
        next_value_of_HeadVar__5_11 = Var_21;
        HeadVar__3_9 = next_value_of_HeadVar__3_9;
        HeadVar__4_10 = next_value_of_HeadVar__4_10;
        HeadVar__5_11 = next_value_of_HeadVar__5_11;
        continue;
      }
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____pprint__doc__arity0______pprint__doc_2_2_f_0(
  MR_Integer HeadVar__1_4,
  MR_Word Doc_5)
{
  MR_Word Doc_3 = Doc_5;

  return Doc_3;
}

MR_Word MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____string__arity0______pprint__doc_2_2_f_0(
  MR_Integer HeadVar__1_4,
  MR_String String_5)
{
  MR_Word HeadVar__3_3;

  {
    HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (String_5));
  }
  return HeadVar__3_3;
}

MR_Word MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____int__arity0______pprint__doc_2_2_f_0(
  MR_Integer HeadVar__1_4,
  MR_Integer I_5)
{
  MR_Word HeadVar__3_3;
  MR_Word Var_6;

  {
    Var_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_6, 0) = ((MR_Box) (I_5));
  }
  HeadVar__3_3 = mercury__pprint__poly_1_f_0(Var_6);
  return HeadVar__3_3;
}

MR_Word MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____int8__arity0______pprint__doc_2_2_f_0(
  MR_Integer HeadVar__1_4,
  int8_t I8_5)
{
  MR_Word HeadVar__3_3;
  MR_String Var_6;

{
#define MR_PROC_LABEL mercury__pprint__ClassMethod_for_pprint__doc____int8__arity0______pprint__doc_2_2_f_0

	int8_t I8;
	MR_String S;

	I8 = I8_5 ;
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
    HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (Var_6));
  }
  return HeadVar__3_3;
}

MR_Word MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____int16__arity0______pprint__doc_2_2_f_0(
  MR_Integer HeadVar__1_4,
  int16_t I16_5)
{
  MR_Word HeadVar__3_3;
  MR_String Var_6;

{
#define MR_PROC_LABEL mercury__pprint__ClassMethod_for_pprint__doc____int16__arity0______pprint__doc_2_2_f_0

	int16_t I16;
	MR_String S;

	I16 = I16_5 ;
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
    HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (Var_6));
  }
  return HeadVar__3_3;
}

MR_Word MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____int32__arity0______pprint__doc_2_2_f_0(
  MR_Integer HeadVar__1_4,
  int32_t I32_5)
{
  MR_Word HeadVar__3_3;
  MR_String Var_6;

{
#define MR_PROC_LABEL mercury__pprint__ClassMethod_for_pprint__doc____int32__arity0______pprint__doc_2_2_f_0

	int32_t I32;
	MR_String S;

	I32 = I32_5 ;
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
    HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (Var_6));
  }
  return HeadVar__3_3;
}

MR_Word MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____int64__arity0______pprint__doc_2_2_f_0(
  MR_Integer HeadVar__1_4,
  int64_t I64_5)
{
  MR_Word HeadVar__3_3;
  MR_String Var_6;

{
#define MR_PROC_LABEL mercury__pprint__ClassMethod_for_pprint__doc____int64__arity0______pprint__doc_2_2_f_0

	int64_t I64;
	MR_String S;

	I64 = I64_5 ;
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
    HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (Var_6));
  }
  return HeadVar__3_3;
}

MR_Word MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____uint__arity0______pprint__doc_2_2_f_0(
  MR_Integer HeadVar__1_4,
  MR_Unsigned UI_5)
{
  MR_Word HeadVar__3_3;
  MR_String Var_6;

{
#define MR_PROC_LABEL mercury__pprint__ClassMethod_for_pprint__doc____uint__arity0______pprint__doc_2_2_f_0

	MR_Unsigned U;
	MR_String Str;

	U = UI_5 ;
		{

    char buffer[21]; // 20 for digits, 1 for nul.
    sprintf(buffer, "%" MR_INTEGER_LENGTH_MODIFIER "u", U);
    MR_allocate_aligned_string_msg(Str, strlen(buffer), MR_ALLOC_ID);
    strcpy(Str, buffer);


		;}
#undef MR_PROC_LABEL
	Var_6  = Str;
}
  {
    HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (Var_6));
  }
  return HeadVar__3_3;
}

MR_Word MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____uint8__arity0______pprint__doc_2_2_f_0(
  MR_Integer HeadVar__1_4,
  uint8_t UI8_5)
{
  MR_Word HeadVar__3_3;
  MR_String Var_6;

{
#define MR_PROC_LABEL mercury__pprint__ClassMethod_for_pprint__doc____uint8__arity0______pprint__doc_2_2_f_0

	uint8_t U8;
	MR_String S;

	U8 = UI8_5 ;
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
    HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (Var_6));
  }
  return HeadVar__3_3;
}

MR_Word MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____uint16__arity0______pprint__doc_2_2_f_0(
  MR_Integer HeadVar__1_4,
  uint16_t UI16_5)
{
  MR_Word HeadVar__3_3;
  MR_String Var_6;

{
#define MR_PROC_LABEL mercury__pprint__ClassMethod_for_pprint__doc____uint16__arity0______pprint__doc_2_2_f_0

	uint16_t U16;
	MR_String S;

	U16 = UI16_5 ;
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
    HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (Var_6));
  }
  return HeadVar__3_3;
}

MR_Word MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____uint32__arity0______pprint__doc_2_2_f_0(
  MR_Integer HeadVar__1_4,
  uint32_t UI32_5)
{
  MR_Word HeadVar__3_3;
  MR_String Var_6;

{
#define MR_PROC_LABEL mercury__pprint__ClassMethod_for_pprint__doc____uint32__arity0______pprint__doc_2_2_f_0

	uint32_t U32;
	MR_String S;

	U32 = UI32_5 ;
		{

    int num_digits;
    if (U32 < 10) {
        num_digits = 1;
    } else if (U32 < 100) {
        num_digits = 2;
    } else if (U32 < 1000) {
        num_digits = 3;
    } else if (U32 < 10000) {
        num_digits = 4;
    } else if (U32 < 100000) {
        num_digits = 5;
    } else if (U32 < 1000000) {
        num_digits = 6;
    } else if (U32 < 10000000) {
        num_digits = 7;
    } else if (U32 < 100000000) {
        num_digits = 8;
    } else if (U32 < 1000000000) {
        num_digits = 9;
    } else {
        num_digits = 10;
    }

    MR_allocate_aligned_string_msg(S, num_digits, MR_ALLOC_ID);
    S[num_digits] = '\0';
    int i = num_digits - 1;
    do {
        S[i] = "0123456789"[U32 % 10];
        i--;
        U32 /= 10;
    } while(U32 > 0);


		;}
#undef MR_PROC_LABEL
	Var_6  = S;
}
  {
    HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (Var_6));
  }
  return HeadVar__3_3;
}

MR_Word MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____uint64__arity0______pprint__doc_2_2_f_0(
  MR_Integer HeadVar__1_4,
  uint64_t UI64_5)
{
  MR_Word HeadVar__3_3;
  MR_String Var_6;

{
#define MR_PROC_LABEL mercury__pprint__ClassMethod_for_pprint__doc____uint64__arity0______pprint__doc_2_2_f_0

	uint64_t U64;
	MR_String S;

	U64 = UI64_5 ;
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
    HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (Var_6));
  }
  return HeadVar__3_3;
}

MR_Word MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____float__arity0______pprint__doc_2_2_f_0(
  MR_Integer HeadVar__1_4,
  MR_Float Float_5)
{
  MR_Word HeadVar__3_3;
  MR_Word Var_6;

  {
    Var_6 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_6, 0) = MR_box_float(Float_5);
  }
  HeadVar__3_3 = mercury__pprint__poly_1_f_0(Var_6);
  return HeadVar__3_3;
}

MR_Word MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____character__arity0______pprint__doc_2_2_f_0(
  MR_Integer HeadVar__1_4,
  MR_Char Char_5)
{
  MR_Word HeadVar__3_3;
  MR_Word Var_6;

  {
    Var_6 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_6, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_6, 1) = ((MR_Box) (MR_Word) (Char_5));
  }
  HeadVar__3_3 = mercury__pprint__poly_1_f_0(Var_6);
  return HeadVar__3_3;
}

void MR_CALL 
mercury__pprint____Compare____map_pair_2_0(
  MR_Word TypeInfo_for_K_11,
  MR_Word TypeInfo_for_V_12,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Box ArgX1_4 = (MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0));
    MR_Box ArgY1_5 = (MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0));
    MR_Box ArgX2_7 = (MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1));
    MR_Box ArgY2_8 = (MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0(TypeInfo_for_K_11, &SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0(TypeInfo_for_V_12, HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

MR_bool MR_CALL 
mercury__pprint____Unify____map_pair_2_0(
  MR_Word TypeInfo_for_K_9,
  MR_Word TypeInfo_for_V_10,
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
  {
    MR_Box ArgX1_3 = (MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0));
    MR_Box ArgY1_4 = (MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0));
    MR_Box ArgX2_5 = (MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1));
    MR_Box ArgY2_6 = (MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1));

    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_K_9, ArgX1_3, ArgY1_4);
    if (succeeded)
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_V_10, ArgX2_5, ArgY2_6);
  }
  return succeeded;
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
                  switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
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
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
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
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String Var_189 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

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
                  MR_String ArgY1_16 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
                  MR_Integer Var_192;

{
#define MR_PROC_LABEL mercury__pprint____Compare____doc_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = Var_189 ;
	S2 = ArgY1_16 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_192  = Res;
}
                  succeeded = (Var_192 < (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_192 == (MR_Integer) 0);
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
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
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
            MR_Word Var_187 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 1))));
            MR_Word Var_188 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));

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
                {
                  MR_Word ArgY1_50 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))));
                  MR_Word ArgY2_53 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word SubResult1_51;

                  mercury__pprint____Compare____doc_0_0(&SubResult1_51, Var_188, ArgY1_50);
                  succeeded = (SubResult1_51 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_51;
                  else
                  {
                    MR_Word next_value_of_HeadVar__2_2 = Var_187;
                    MR_Word next_value_of_HeadVar__3_3 = ArgY2_53;

                    // direct tailcall eliminated
                    ;
                    HeadVar__2_2 = next_value_of_HeadVar__2_2;
                    HeadVar__3_3 = next_value_of_HeadVar__3_3;
                    continue;
                  }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
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
          switch (((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_182 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));

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
                    switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word ArgY1_77 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                          MR_Word next_value_of_HeadVar__2_2 = Var_182;
                          MR_Word next_value_of_HeadVar__3_3 = ArgY1_77;

                          // direct tailcall eliminated
                          ;
                          HeadVar__2_2 = next_value_of_HeadVar__2_2;
                          HeadVar__3_3 = next_value_of_HeadVar__3_3;
                          continue;
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
                MR_Word Var_185 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                MR_Integer Var_186 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));

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
                    switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Integer ArgY1_102 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                          MR_Word ArgY2_105 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 2))));
                          MR_Word SubResult1_103;

                          succeeded = (Var_186 < ArgY1_102);
                          if (succeeded)
                            SubResult1_103 = (MR_Integer) 1;
                          else
                          {
                            succeeded = (Var_186 == ArgY1_102);
                            if (succeeded)
                              SubResult1_103 = (MR_Integer) 0;
                            else
                              SubResult1_103 = (MR_Integer) 2;
                          }
                          succeeded = (SubResult1_103 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult1_103;
                          else
                          {
                            MR_Word next_value_of_HeadVar__2_2 = Var_185;
                            MR_Word next_value_of_HeadVar__3_3 = ArgY2_105;

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
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Var_183 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                MR_String Var_184 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));

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
                    switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_String ArgY1_133 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                          MR_Word ArgY2_136 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 2))));
                          MR_Word SubResult1_134;
                          MR_Integer Var_190;

{
#define MR_PROC_LABEL mercury__pprint____Compare____doc_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = Var_184 ;
	S2 = ArgY1_133 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_190  = Res;
}
                          succeeded = (Var_190 < (MR_Integer) 0);
                          if (succeeded)
                            SubResult1_134 = (MR_Integer) 1;
                          else
                          {
                            succeeded = (Var_190 == (MR_Integer) 0);
                            if (succeeded)
                              SubResult1_134 = (MR_Integer) 0;
                            else
                              SubResult1_134 = (MR_Integer) 2;
                          }
                          succeeded = (SubResult1_134 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult1_134;
                          else
                          {
                            MR_Word next_value_of_HeadVar__2_2 = Var_183;
                            MR_Word next_value_of_HeadVar__3_3 = ArgY2_136;

                            // direct tailcall eliminated
                            ;
                            HeadVar__2_2 = next_value_of_HeadVar__2_2;
                            HeadVar__3_3 = next_value_of_HeadVar__3_3;
                            continue;
                          }
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
                MR_Word Var_180 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                MR_Integer Var_181 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));

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
                    switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
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
                          MR_Integer ArgY1_164 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                          MR_Word ArgY2_167 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 2))));
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
                MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_8 == CastX_7);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String ArgX1_5 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
            MR_String ArgY1_6;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_6 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
              succeeded = (strcmp(ArgX1_5, ArgY1_6) == 0);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_10;
            MR_Word ArgX2_11 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ArgY2_12;
            MR_Word next_value_of_HeadVar__1_1;
            MR_Word next_value_of_HeadVar__2_2;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_10 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_12 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 1))));
              succeeded = mercury__pprint____Unify____doc_0_0(ArgX1_9, ArgY1_10);
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
          switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ArgX1_13 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_14;
                MR_Word next_value_of_HeadVar__1_1;
                MR_Word next_value_of_HeadVar__2_2;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  ArgY1_14 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                  // direct tailcall eliminated
                  ;
                  next_value_of_HeadVar__1_1 = ArgX1_13;
                  next_value_of_HeadVar__2_2 = ArgY1_14;
                  HeadVar__1_1 = next_value_of_HeadVar__1_1;
                  HeadVar__2_2 = next_value_of_HeadVar__2_2;
                  continue;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer ArgX1_15 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
                MR_Integer ArgY1_16;
                MR_Word ArgX2_17 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 2))));
                MR_Word ArgY2_18;
                MR_Word next_value_of_HeadVar__1_1;
                MR_Word next_value_of_HeadVar__2_2;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  ArgY1_16 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                  ArgY2_18 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                  succeeded = (ArgX1_15 == ArgY1_16);
                  if (succeeded)
                  {
                    // direct tailcall eliminated
                    ;
                    next_value_of_HeadVar__1_1 = ArgX2_17;
                    next_value_of_HeadVar__2_2 = ArgY2_18;
                    HeadVar__1_1 = next_value_of_HeadVar__1_1;
                    HeadVar__2_2 = next_value_of_HeadVar__2_2;
                    continue;
                  }
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_String ArgX1_19 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
                MR_String ArgY1_20;
                MR_Word ArgX2_21 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 2))));
                MR_Word ArgY2_22;
                MR_Word next_value_of_HeadVar__1_1;
                MR_Word next_value_of_HeadVar__2_2;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (succeeded)
                {
                  ArgY1_20 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                  ArgY2_22 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                  succeeded = (strcmp(ArgX1_19, ArgY1_20) == 0);
                  if (succeeded)
                  {
                    // direct tailcall eliminated
                    ;
                    next_value_of_HeadVar__1_1 = ArgX2_21;
                    next_value_of_HeadVar__2_2 = ArgY2_22;
                    HeadVar__1_1 = next_value_of_HeadVar__1_1;
                    HeadVar__2_2 = next_value_of_HeadVar__2_2;
                    continue;
                  }
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Integer ArgX1_23 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
                MR_Integer ArgY1_24;
                MR_Word ArgX2_25 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 2))));
                MR_Word ArgY2_26;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
                if (succeeded)
                {
                  ArgY1_24 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                  ArgY2_26 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
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

MR_bool MR_CALL 
mercury__pprint____Unify____depth_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
  return succeeded;
}

MR_Word MR_CALL 
mercury__pprint__doc_2_f_0(
  MR_Word TypeClassInfo_for_doc_4,
  MR_Integer HeadVar__1_1,
  MR_Box HeadVar__2_2)
{
  MR_Word HeadVar__3_3;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_doc_4, (MR_Integer) 0)), (MR_Integer) 5))));
  MR_Box conv1_HeadVar__3_3;

  conv1_HeadVar__3_3 = func_0(((MR_Box) (TypeClassInfo_for_doc_4)), ((MR_Box) (HeadVar__1_1)), HeadVar__2_2);
  HeadVar__3_3 = ((MR_Word) (conv1_HeadVar__3_3));
  return HeadVar__3_3;
}

MR_bool MR_CALL 
mercury__pprint__fits_flat_2_p_0(
  MR_Word Doc_3,
  MR_Integer MaxWidth_4)
{
  MR_bool succeeded;
  MR_Integer _WidthLeft_5;

  succeeded = mercury__pprint__fits_flat_width_left_3_p_0(Doc_3, MaxWidth_4, &_WidthLeft_5);
  return succeeded;
}

void MR_CALL 
mercury__pprint__layout_best_5_p_1(
  MR_Word TypeInfo_for_T_15,
  MR_Word AccPred_6,
  MR_Integer Width_7,
  MR_Word Doc_8,
  MR_Box STATE_VARIABLE_LayoutStream_0_11,
  MR_Box * STATE_VARIABLE_LayoutStream_12)
{
  MR_Integer _UsedWidth_10;

  mercury__pprint__layout_best_acc_8_p_1(TypeInfo_for_T_15, AccPred_6, Width_7, (MR_String) "", Doc_8, (MR_Integer) 0, &_UsedWidth_10, STATE_VARIABLE_LayoutStream_0_11, STATE_VARIABLE_LayoutStream_12);
}

void MR_CALL 
mercury__pprint__layout_best_acc_8_p_1(
  MR_Word TypeInfo_for_T_57,
  MR_Word AccPred_9,
  MR_Integer Width_10,
  MR_String AfterNlStr_11,
  MR_Word Doc_12,
  MR_Integer STATE_VARIABLE_UsedWidth_0_23,
  MR_Integer * STATE_VARIABLE_UsedWidth_24,
  MR_Box STATE_VARIABLE_LayoutStream_0_25,
  MR_Box * STATE_VARIABLE_LayoutStream_26)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Doc_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Doc_12)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *STATE_VARIABLE_UsedWidth_24 = STATE_VARIABLE_UsedWidth_0_23;
              *STATE_VARIABLE_LayoutStream_26 = STATE_VARIABLE_LayoutStream_0_25;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box STATE_VARIABLE_LayoutStream_39_39;
              void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
              void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);

              mercury__string__count_code_points_loop_4_p_0(AfterNlStr_11, (MR_Integer) 0, (MR_Integer) 0, STATE_VARIABLE_UsedWidth_24);
              func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, AccPred_9, (MR_Integer) 1))));
              func_0(((MR_Box) (AccPred_9)), ((MR_Box) ((MR_String) "\n")), STATE_VARIABLE_LayoutStream_0_25, &STATE_VARIABLE_LayoutStream_39_39);
              func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, AccPred_9, (MR_Integer) 1))));
              func_1(((MR_Box) (AccPred_9)), ((MR_Box) (AfterNlStr_11)), STATE_VARIABLE_LayoutStream_39_39, STATE_VARIABLE_LayoutStream_26);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Text_22 = ((MR_String) ((MR_hl_field(1, Doc_12, (MR_Integer) 0))));
          MR_Integer Var_50;
          void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);

          mercury__string__count_code_points_loop_4_p_0(Text_22, (MR_Integer) 0, (MR_Integer) 0, &Var_50);
          *STATE_VARIABLE_UsedWidth_24 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_UsedWidth_0_23 + (MR_Unsigned) Var_50);
          func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, AccPred_9, (MR_Integer) 1))));
          func_2(((MR_Box) (AccPred_9)), ((MR_Box) (Text_22)), STATE_VARIABLE_LayoutStream_0_25, STATE_VARIABLE_LayoutStream_26);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word DocA_15 = ((MR_Word) ((MR_hl_field(2, Doc_12, (MR_Integer) 0))));
          MR_Word DocB_16 = ((MR_Word) ((MR_hl_field(2, Doc_12, (MR_Integer) 1))));
          MR_Integer STATE_VARIABLE_UsedWidth_27_27;
          MR_Box STATE_VARIABLE_LayoutStream_28_28;
          MR_Word next_value_of_Doc_12;
          MR_Integer next_value_of_STATE_VARIABLE_UsedWidth_0_23;
          MR_Box next_value_of_STATE_VARIABLE_LayoutStream_0_25;

          mercury__pprint__layout_best_acc_8_p_1(TypeInfo_for_T_57, AccPred_9, Width_10, AfterNlStr_11, DocA_15, STATE_VARIABLE_UsedWidth_0_23, &STATE_VARIABLE_UsedWidth_27_27, STATE_VARIABLE_LayoutStream_0_25, &STATE_VARIABLE_LayoutStream_28_28);
          // direct tailcall eliminated
          ;
          next_value_of_Doc_12 = DocB_16;
          next_value_of_STATE_VARIABLE_UsedWidth_0_23 = STATE_VARIABLE_UsedWidth_27_27;
          next_value_of_STATE_VARIABLE_LayoutStream_0_25 = STATE_VARIABLE_LayoutStream_28_28;
          Doc_12 = next_value_of_Doc_12;
          STATE_VARIABLE_UsedWidth_0_23 = next_value_of_STATE_VARIABLE_UsedWidth_0_23;
          STATE_VARIABLE_LayoutStream_0_25 = next_value_of_STATE_VARIABLE_LayoutStream_0_25;
          continue;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Doc_12, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word DocA_55 = ((MR_Word) ((MR_hl_field(3, Doc_12, (MR_Integer) 1))));
              MR_Integer Var_41 = (MR_Integer) ((MR_Unsigned) Width_10 - (MR_Unsigned) STATE_VARIABLE_UsedWidth_0_23);
              MR_Integer _WidthLeft_61;

              succeeded = mercury__pprint__fits_flat_width_left_3_p_0(DocA_55, Var_41, &_WidthLeft_61);
              if (succeeded)
                mercury__pprint__layout_flat_6_p_1(TypeInfo_for_T_57, AccPred_9, DocA_55, STATE_VARIABLE_UsedWidth_0_23, STATE_VARIABLE_UsedWidth_24, STATE_VARIABLE_LayoutStream_0_25, STATE_VARIABLE_LayoutStream_26);
              else
              {
                MR_Word next_value_of_Doc_12 = DocA_55;

                // direct tailcall eliminated
                ;
                Doc_12 = next_value_of_Doc_12;
                continue;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer ExtraIndent_17 = ((MR_Integer) ((MR_hl_field(3, Doc_12, (MR_Integer) 1))));
              MR_String NewAfterNlStr_18;
              MR_String Var_31;
              MR_Word DocA_52 = ((MR_Word) ((MR_hl_field(3, Doc_12, (MR_Integer) 2))));
              MR_Word Var_64;
              MR_String next_value_of_AfterNlStr_11;
              MR_Word next_value_of_Doc_12;

              mercury__list__accumulate_n_copies_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), ExtraIndent_17, ((MR_Box) (MR_Word) ((MR_Char) 32)), (MR_Word) ((MR_Unsigned) 0U), &Var_64);
              mercury__string__from_char_list_2_p_0(Var_64, &Var_31);
              mercury__string__append_3_p_2(AfterNlStr_11, Var_31, &NewAfterNlStr_18);
              // direct tailcall eliminated
              ;
              next_value_of_AfterNlStr_11 = NewAfterNlStr_18;
              next_value_of_Doc_12 = DocA_52;
              AfterNlStr_11 = next_value_of_AfterNlStr_11;
              Doc_12 = next_value_of_Doc_12;
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_String LabelStr_19 = ((MR_String) ((MR_hl_field(3, Doc_12, (MR_Integer) 1))));
              MR_Word DocA_53 = ((MR_Word) ((MR_hl_field(3, Doc_12, (MR_Integer) 2))));
              MR_String NewAfterNlStr_54;
              MR_String next_value_of_AfterNlStr_11;
              MR_Word next_value_of_Doc_12;

              mercury__string__append_3_p_2(AfterNlStr_11, LabelStr_19, &NewAfterNlStr_54);
              // direct tailcall eliminated
              ;
              next_value_of_AfterNlStr_11 = NewAfterNlStr_54;
              next_value_of_Doc_12 = DocA_53;
              AfterNlStr_11 = next_value_of_AfterNlStr_11;
              Doc_12 = next_value_of_Doc_12;
              continue;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word TypeInfo_58_58;
              MR_Integer MaxDepth_20 = ((MR_Integer) ((MR_hl_field(3, Doc_12, (MR_Integer) 1))));
              MR_Word Univ_21 = ((MR_Word) ((MR_hl_field(3, Doc_12, (MR_Integer) 2))));
              MR_Box Var_46;
              MR_Word DocA_56;
              MR_Word next_value_of_Doc_12;

              TypeInfo_58_58 = ((MR_Word) ((MR_hl_field(0, Univ_21, (MR_Integer) 0))));
              Var_46 = (MR_hl_field(0, Univ_21, (MR_Integer) 1));
              DocA_56 = mercury__pprint__to_doc_prio_3_f_0(TypeInfo_58_58, MaxDepth_20, (MR_Word) (((MR_Box) ((MR_Unsigned) 500U))), Var_46);
              // direct tailcall eliminated
              ;
              next_value_of_Doc_12 = DocA_56;
              Doc_12 = next_value_of_Doc_12;
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
mercury__pprint__layout_flat_6_p_1(
  MR_Word TypeInfo_for_T_36,
  MR_Word AccPred_7,
  MR_Word Doc_8,
  MR_Integer STATE_VARIABLE_UsedWidth_0_18,
  MR_Integer * STATE_VARIABLE_UsedWidth_19,
  MR_Box STATE_VARIABLE_LayoutStream_0_20,
  MR_Box * STATE_VARIABLE_LayoutStream_21)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Doc_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Doc_8)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *STATE_VARIABLE_UsedWidth_19 = STATE_VARIABLE_UsedWidth_0_18;
              *STATE_VARIABLE_LayoutStream_21 = STATE_VARIABLE_LayoutStream_0_20;
            }
            break;
          case (MR_Integer) 1:
            {
              *STATE_VARIABLE_UsedWidth_19 = STATE_VARIABLE_UsedWidth_0_18;
              *STATE_VARIABLE_LayoutStream_21 = STATE_VARIABLE_LayoutStream_0_20;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Text_11 = ((MR_String) ((MR_hl_field(1, Doc_8, (MR_Integer) 0))));
          MR_Integer Var_23;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

          mercury__string__count_code_points_loop_4_p_0(Text_11, (MR_Integer) 0, (MR_Integer) 0, &Var_23);
          *STATE_VARIABLE_UsedWidth_19 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_UsedWidth_0_18 + (MR_Unsigned) Var_23);
          func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, AccPred_7, (MR_Integer) 1))));
          func_0(((MR_Box) (AccPred_7)), ((MR_Box) (Text_11)), STATE_VARIABLE_LayoutStream_0_20, STATE_VARIABLE_LayoutStream_21);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word DocA_12 = ((MR_Word) ((MR_hl_field(2, Doc_8, (MR_Integer) 0))));
          MR_Word DocB_13 = ((MR_Word) ((MR_hl_field(2, Doc_8, (MR_Integer) 1))));
          MR_Integer STATE_VARIABLE_UsedWidth_25_25;
          MR_Box STATE_VARIABLE_LayoutStream_26_26;
          MR_Word next_value_of_Doc_8;
          MR_Integer next_value_of_STATE_VARIABLE_UsedWidth_0_18;
          MR_Box next_value_of_STATE_VARIABLE_LayoutStream_0_20;

          mercury__pprint__layout_flat_6_p_1(TypeInfo_for_T_36, AccPred_7, DocA_12, STATE_VARIABLE_UsedWidth_0_18, &STATE_VARIABLE_UsedWidth_25_25, STATE_VARIABLE_LayoutStream_0_20, &STATE_VARIABLE_LayoutStream_26_26);
          // direct tailcall eliminated
          ;
          next_value_of_Doc_8 = DocB_13;
          next_value_of_STATE_VARIABLE_UsedWidth_0_18 = STATE_VARIABLE_UsedWidth_25_25;
          next_value_of_STATE_VARIABLE_LayoutStream_0_20 = STATE_VARIABLE_LayoutStream_26_26;
          Doc_8 = next_value_of_Doc_8;
          STATE_VARIABLE_UsedWidth_0_18 = next_value_of_STATE_VARIABLE_UsedWidth_0_18;
          STATE_VARIABLE_LayoutStream_0_20 = next_value_of_STATE_VARIABLE_LayoutStream_0_20;
          continue;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Doc_8, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word DocA_34 = ((MR_Word) ((MR_hl_field(3, Doc_8, (MR_Integer) 1))));
              MR_Word next_value_of_Doc_8 = DocA_34;

              // direct tailcall eliminated
              ;
              Doc_8 = next_value_of_Doc_8;
              continue;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word DocA_39 = ((MR_Word) ((MR_hl_field(3, Doc_8, (MR_Integer) 2))));
              MR_Word next_value_of_Doc_8 = DocA_39;

              // direct tailcall eliminated
              ;
              Doc_8 = next_value_of_Doc_8;
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word DocA_38 = ((MR_Word) ((MR_hl_field(3, Doc_8, (MR_Integer) 2))));
              MR_Word next_value_of_Doc_8 = DocA_38;

              // direct tailcall eliminated
              ;
              Doc_8 = next_value_of_Doc_8;
              continue;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word TypeInfo_37_37;
              MR_Integer MaxDepth_16 = ((MR_Integer) ((MR_hl_field(3, Doc_8, (MR_Integer) 1))));
              MR_Word Univ_17 = ((MR_Word) ((MR_hl_field(3, Doc_8, (MR_Integer) 2))));
              MR_Box Var_31;
              MR_Word DocA_35;
              MR_Word next_value_of_Doc_8;

              TypeInfo_37_37 = ((MR_Word) ((MR_hl_field(0, Univ_17, (MR_Integer) 0))));
              Var_31 = (MR_hl_field(0, Univ_17, (MR_Integer) 1));
              DocA_35 = mercury__pprint__to_doc_prio_3_f_0(TypeInfo_37_37, MaxDepth_16, (MR_Word) (((MR_Box) ((MR_Unsigned) 500U))), Var_31);
              // direct tailcall eliminated
              ;
              next_value_of_Doc_8 = DocA_35;
              Doc_8 = next_value_of_Doc_8;
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
  MR_Word TypeInfo_for_T_15,
  MR_Word AccPred_6,
  MR_Integer Width_7,
  MR_Word Doc_8,
  MR_Box STATE_VARIABLE_LayoutStream_0_11,
  MR_Box * STATE_VARIABLE_LayoutStream_12)
{
  MR_Integer _UsedWidth_10;

  mercury__pprint__layout_best_acc_8_p_0(TypeInfo_for_T_15, AccPred_6, Width_7, (MR_String) "", Doc_8, (MR_Integer) 0, &_UsedWidth_10, STATE_VARIABLE_LayoutStream_0_11, STATE_VARIABLE_LayoutStream_12);
}

void MR_CALL 
mercury__pprint__layout_best_acc_8_p_0(
  MR_Word TypeInfo_for_T_57,
  MR_Word AccPred_9,
  MR_Integer Width_10,
  MR_String AfterNlStr_11,
  MR_Word Doc_12,
  MR_Integer STATE_VARIABLE_UsedWidth_0_23,
  MR_Integer * STATE_VARIABLE_UsedWidth_24,
  MR_Box STATE_VARIABLE_LayoutStream_0_25,
  MR_Box * STATE_VARIABLE_LayoutStream_26)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Doc_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Doc_12)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *STATE_VARIABLE_UsedWidth_24 = STATE_VARIABLE_UsedWidth_0_23;
              *STATE_VARIABLE_LayoutStream_26 = STATE_VARIABLE_LayoutStream_0_25;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box STATE_VARIABLE_LayoutStream_39_39;
              void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
              void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);

              mercury__string__count_code_points_loop_4_p_0(AfterNlStr_11, (MR_Integer) 0, (MR_Integer) 0, STATE_VARIABLE_UsedWidth_24);
              func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, AccPred_9, (MR_Integer) 1))));
              func_0(((MR_Box) (AccPred_9)), ((MR_Box) ((MR_String) "\n")), STATE_VARIABLE_LayoutStream_0_25, &STATE_VARIABLE_LayoutStream_39_39);
              func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, AccPred_9, (MR_Integer) 1))));
              func_1(((MR_Box) (AccPred_9)), ((MR_Box) (AfterNlStr_11)), STATE_VARIABLE_LayoutStream_39_39, STATE_VARIABLE_LayoutStream_26);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Text_22 = ((MR_String) ((MR_hl_field(1, Doc_12, (MR_Integer) 0))));
          MR_Integer Var_50;
          void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);

          mercury__string__count_code_points_loop_4_p_0(Text_22, (MR_Integer) 0, (MR_Integer) 0, &Var_50);
          *STATE_VARIABLE_UsedWidth_24 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_UsedWidth_0_23 + (MR_Unsigned) Var_50);
          func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, AccPred_9, (MR_Integer) 1))));
          func_2(((MR_Box) (AccPred_9)), ((MR_Box) (Text_22)), STATE_VARIABLE_LayoutStream_0_25, STATE_VARIABLE_LayoutStream_26);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word DocA_15 = ((MR_Word) ((MR_hl_field(2, Doc_12, (MR_Integer) 0))));
          MR_Word DocB_16 = ((MR_Word) ((MR_hl_field(2, Doc_12, (MR_Integer) 1))));
          MR_Integer STATE_VARIABLE_UsedWidth_27_27;
          MR_Box STATE_VARIABLE_LayoutStream_28_28;
          MR_Word next_value_of_Doc_12;
          MR_Integer next_value_of_STATE_VARIABLE_UsedWidth_0_23;
          MR_Box next_value_of_STATE_VARIABLE_LayoutStream_0_25;

          mercury__pprint__layout_best_acc_8_p_0(TypeInfo_for_T_57, AccPred_9, Width_10, AfterNlStr_11, DocA_15, STATE_VARIABLE_UsedWidth_0_23, &STATE_VARIABLE_UsedWidth_27_27, STATE_VARIABLE_LayoutStream_0_25, &STATE_VARIABLE_LayoutStream_28_28);
          // direct tailcall eliminated
          ;
          next_value_of_Doc_12 = DocB_16;
          next_value_of_STATE_VARIABLE_UsedWidth_0_23 = STATE_VARIABLE_UsedWidth_27_27;
          next_value_of_STATE_VARIABLE_LayoutStream_0_25 = STATE_VARIABLE_LayoutStream_28_28;
          Doc_12 = next_value_of_Doc_12;
          STATE_VARIABLE_UsedWidth_0_23 = next_value_of_STATE_VARIABLE_UsedWidth_0_23;
          STATE_VARIABLE_LayoutStream_0_25 = next_value_of_STATE_VARIABLE_LayoutStream_0_25;
          continue;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Doc_12, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word DocA_55 = ((MR_Word) ((MR_hl_field(3, Doc_12, (MR_Integer) 1))));
              MR_Integer Var_41 = (MR_Integer) ((MR_Unsigned) Width_10 - (MR_Unsigned) STATE_VARIABLE_UsedWidth_0_23);
              MR_Integer _WidthLeft_61;

              succeeded = mercury__pprint__fits_flat_width_left_3_p_0(DocA_55, Var_41, &_WidthLeft_61);
              if (succeeded)
                mercury__pprint__layout_flat_6_p_0(TypeInfo_for_T_57, AccPred_9, DocA_55, STATE_VARIABLE_UsedWidth_0_23, STATE_VARIABLE_UsedWidth_24, STATE_VARIABLE_LayoutStream_0_25, STATE_VARIABLE_LayoutStream_26);
              else
              {
                MR_Word next_value_of_Doc_12 = DocA_55;

                // direct tailcall eliminated
                ;
                Doc_12 = next_value_of_Doc_12;
                continue;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer ExtraIndent_17 = ((MR_Integer) ((MR_hl_field(3, Doc_12, (MR_Integer) 1))));
              MR_String NewAfterNlStr_18;
              MR_String Var_31;
              MR_Word DocA_52 = ((MR_Word) ((MR_hl_field(3, Doc_12, (MR_Integer) 2))));
              MR_Word Var_64;
              MR_String next_value_of_AfterNlStr_11;
              MR_Word next_value_of_Doc_12;

              mercury__list__accumulate_n_copies_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), ExtraIndent_17, ((MR_Box) (MR_Word) ((MR_Char) 32)), (MR_Word) ((MR_Unsigned) 0U), &Var_64);
              mercury__string__from_char_list_2_p_0(Var_64, &Var_31);
              mercury__string__append_3_p_2(AfterNlStr_11, Var_31, &NewAfterNlStr_18);
              // direct tailcall eliminated
              ;
              next_value_of_AfterNlStr_11 = NewAfterNlStr_18;
              next_value_of_Doc_12 = DocA_52;
              AfterNlStr_11 = next_value_of_AfterNlStr_11;
              Doc_12 = next_value_of_Doc_12;
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_String LabelStr_19 = ((MR_String) ((MR_hl_field(3, Doc_12, (MR_Integer) 1))));
              MR_Word DocA_53 = ((MR_Word) ((MR_hl_field(3, Doc_12, (MR_Integer) 2))));
              MR_String NewAfterNlStr_54;
              MR_String next_value_of_AfterNlStr_11;
              MR_Word next_value_of_Doc_12;

              mercury__string__append_3_p_2(AfterNlStr_11, LabelStr_19, &NewAfterNlStr_54);
              // direct tailcall eliminated
              ;
              next_value_of_AfterNlStr_11 = NewAfterNlStr_54;
              next_value_of_Doc_12 = DocA_53;
              AfterNlStr_11 = next_value_of_AfterNlStr_11;
              Doc_12 = next_value_of_Doc_12;
              continue;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word TypeInfo_58_58;
              MR_Integer MaxDepth_20 = ((MR_Integer) ((MR_hl_field(3, Doc_12, (MR_Integer) 1))));
              MR_Word Univ_21 = ((MR_Word) ((MR_hl_field(3, Doc_12, (MR_Integer) 2))));
              MR_Box Var_46;
              MR_Word DocA_56;
              MR_Word next_value_of_Doc_12;

              TypeInfo_58_58 = ((MR_Word) ((MR_hl_field(0, Univ_21, (MR_Integer) 0))));
              Var_46 = (MR_hl_field(0, Univ_21, (MR_Integer) 1));
              DocA_56 = mercury__pprint__to_doc_prio_3_f_0(TypeInfo_58_58, MaxDepth_20, (MR_Word) (((MR_Box) ((MR_Unsigned) 500U))), Var_46);
              // direct tailcall eliminated
              ;
              next_value_of_Doc_12 = DocA_56;
              Doc_12 = next_value_of_Doc_12;
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
mercury__pprint__layout_flat_6_p_0(
  MR_Word TypeInfo_for_T_36,
  MR_Word AccPred_7,
  MR_Word Doc_8,
  MR_Integer STATE_VARIABLE_UsedWidth_0_18,
  MR_Integer * STATE_VARIABLE_UsedWidth_19,
  MR_Box STATE_VARIABLE_LayoutStream_0_20,
  MR_Box * STATE_VARIABLE_LayoutStream_21)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Doc_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Doc_8)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *STATE_VARIABLE_UsedWidth_19 = STATE_VARIABLE_UsedWidth_0_18;
              *STATE_VARIABLE_LayoutStream_21 = STATE_VARIABLE_LayoutStream_0_20;
            }
            break;
          case (MR_Integer) 1:
            {
              *STATE_VARIABLE_UsedWidth_19 = STATE_VARIABLE_UsedWidth_0_18;
              *STATE_VARIABLE_LayoutStream_21 = STATE_VARIABLE_LayoutStream_0_20;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Text_11 = ((MR_String) ((MR_hl_field(1, Doc_8, (MR_Integer) 0))));
          MR_Integer Var_23;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

          mercury__string__count_code_points_loop_4_p_0(Text_11, (MR_Integer) 0, (MR_Integer) 0, &Var_23);
          *STATE_VARIABLE_UsedWidth_19 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_UsedWidth_0_18 + (MR_Unsigned) Var_23);
          func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, AccPred_7, (MR_Integer) 1))));
          func_0(((MR_Box) (AccPred_7)), ((MR_Box) (Text_11)), STATE_VARIABLE_LayoutStream_0_20, STATE_VARIABLE_LayoutStream_21);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word DocA_12 = ((MR_Word) ((MR_hl_field(2, Doc_8, (MR_Integer) 0))));
          MR_Word DocB_13 = ((MR_Word) ((MR_hl_field(2, Doc_8, (MR_Integer) 1))));
          MR_Integer STATE_VARIABLE_UsedWidth_25_25;
          MR_Box STATE_VARIABLE_LayoutStream_26_26;
          MR_Word next_value_of_Doc_8;
          MR_Integer next_value_of_STATE_VARIABLE_UsedWidth_0_18;
          MR_Box next_value_of_STATE_VARIABLE_LayoutStream_0_20;

          mercury__pprint__layout_flat_6_p_0(TypeInfo_for_T_36, AccPred_7, DocA_12, STATE_VARIABLE_UsedWidth_0_18, &STATE_VARIABLE_UsedWidth_25_25, STATE_VARIABLE_LayoutStream_0_20, &STATE_VARIABLE_LayoutStream_26_26);
          // direct tailcall eliminated
          ;
          next_value_of_Doc_8 = DocB_13;
          next_value_of_STATE_VARIABLE_UsedWidth_0_18 = STATE_VARIABLE_UsedWidth_25_25;
          next_value_of_STATE_VARIABLE_LayoutStream_0_20 = STATE_VARIABLE_LayoutStream_26_26;
          Doc_8 = next_value_of_Doc_8;
          STATE_VARIABLE_UsedWidth_0_18 = next_value_of_STATE_VARIABLE_UsedWidth_0_18;
          STATE_VARIABLE_LayoutStream_0_20 = next_value_of_STATE_VARIABLE_LayoutStream_0_20;
          continue;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Doc_8, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word DocA_34 = ((MR_Word) ((MR_hl_field(3, Doc_8, (MR_Integer) 1))));
              MR_Word next_value_of_Doc_8 = DocA_34;

              // direct tailcall eliminated
              ;
              Doc_8 = next_value_of_Doc_8;
              continue;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word DocA_39 = ((MR_Word) ((MR_hl_field(3, Doc_8, (MR_Integer) 2))));
              MR_Word next_value_of_Doc_8 = DocA_39;

              // direct tailcall eliminated
              ;
              Doc_8 = next_value_of_Doc_8;
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word DocA_38 = ((MR_Word) ((MR_hl_field(3, Doc_8, (MR_Integer) 2))));
              MR_Word next_value_of_Doc_8 = DocA_38;

              // direct tailcall eliminated
              ;
              Doc_8 = next_value_of_Doc_8;
              continue;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word TypeInfo_37_37;
              MR_Integer MaxDepth_16 = ((MR_Integer) ((MR_hl_field(3, Doc_8, (MR_Integer) 1))));
              MR_Word Univ_17 = ((MR_Word) ((MR_hl_field(3, Doc_8, (MR_Integer) 2))));
              MR_Box Var_31;
              MR_Word DocA_35;
              MR_Word next_value_of_Doc_8;

              TypeInfo_37_37 = ((MR_Word) ((MR_hl_field(0, Univ_17, (MR_Integer) 0))));
              Var_31 = (MR_hl_field(0, Univ_17, (MR_Integer) 1));
              DocA_35 = mercury__pprint__to_doc_prio_3_f_0(TypeInfo_37_37, MaxDepth_16, (MR_Word) (((MR_Box) ((MR_Unsigned) 500U))), Var_31);
              // direct tailcall eliminated
              ;
              next_value_of_Doc_8 = DocA_35;
              Doc_8 = next_value_of_Doc_8;
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
  MR_Word TypeClassInfo_for_doc_14,
  MR_Word TypeClassInfo_for_writer_15,
  MR_Box Stream_6,
  MR_Integer Width_7,
  MR_Box Doc_8,
  MR_Box STATE_VARIABLE_State_0_10,
  MR_Box * STATE_VARIABLE_State_11)
{
  MR_Word Var_13;
  MR_Integer Var_21;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);
  MR_Box conv1_Var_13;
  MR_Integer _UsedWidth_22;

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
	Var_21  = Max;
}
  func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_doc_14, (MR_Integer) 0)), (MR_Integer) 5))));
  conv1_Var_13 = func_0(((MR_Box) (TypeClassInfo_for_doc_14)), ((MR_Box) (Var_21)), Doc_8);
  Var_13 = ((MR_Word) (conv1_Var_13));
  mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_98_101_115_116_95_97_99_99_95_95_104_111_50_54_95_95_91_51_44_32_52_93_95_48_8_p_0(TypeClassInfo_for_writer_15, Stream_6, Width_7, (MR_String) "", Var_13, (MR_Integer) 0, &_UsedWidth_22, STATE_VARIABLE_State_0_10, STATE_VARIABLE_State_11);
}

static void MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_98_101_115_116_95_97_99_99_95_95_104_111_50_54_95_95_91_51_44_32_52_93_95_48_8_p_0(
  MR_Word Var_59,
  MR_Box Var_60,
  MR_Integer Width_10,
  MR_String AfterNlStr_11,
  MR_Word Doc_12,
  MR_Integer STATE_VARIABLE_UsedWidth_0_23,
  MR_Integer * STATE_VARIABLE_UsedWidth_24,
  MR_Box STATE_VARIABLE_LayoutStream_0_25,
  MR_Box * STATE_VARIABLE_LayoutStream_26)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Doc_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Doc_12)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *STATE_VARIABLE_UsedWidth_24 = STATE_VARIABLE_UsedWidth_0_23;
              *STATE_VARIABLE_LayoutStream_26 = STATE_VARIABLE_LayoutStream_0_25;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box STATE_VARIABLE_LayoutStream_39_39;
              void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
              void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

              mercury__string__count_code_points_loop_4_p_0(AfterNlStr_11, (MR_Integer) 0, (MR_Integer) 0, STATE_VARIABLE_UsedWidth_24);
              func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, Var_59, (MR_Integer) 0)), (MR_Integer) 5))));
              func_0(((MR_Box) (Var_59)), Var_60, ((MR_Box) ((MR_String) "\n")), STATE_VARIABLE_LayoutStream_0_25, &STATE_VARIABLE_LayoutStream_39_39);
              func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, Var_59, (MR_Integer) 0)), (MR_Integer) 5))));
              func_1(((MR_Box) (Var_59)), Var_60, ((MR_Box) (AfterNlStr_11)), STATE_VARIABLE_LayoutStream_39_39, STATE_VARIABLE_LayoutStream_26);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Text_22 = ((MR_String) ((MR_hl_field(1, Doc_12, (MR_Integer) 0))));
          MR_Integer Var_50;
          void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

          mercury__string__count_code_points_loop_4_p_0(Text_22, (MR_Integer) 0, (MR_Integer) 0, &Var_50);
          *STATE_VARIABLE_UsedWidth_24 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_UsedWidth_0_23 + (MR_Unsigned) Var_50);
          func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, Var_59, (MR_Integer) 0)), (MR_Integer) 5))));
          func_2(((MR_Box) (Var_59)), Var_60, ((MR_Box) (Text_22)), STATE_VARIABLE_LayoutStream_0_25, STATE_VARIABLE_LayoutStream_26);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word DocA_15 = ((MR_Word) ((MR_hl_field(2, Doc_12, (MR_Integer) 0))));
          MR_Word DocB_16 = ((MR_Word) ((MR_hl_field(2, Doc_12, (MR_Integer) 1))));
          MR_Integer STATE_VARIABLE_UsedWidth_27_27;
          MR_Box STATE_VARIABLE_LayoutStream_28_28;
          MR_Word next_value_of_Doc_12;
          MR_Integer next_value_of_STATE_VARIABLE_UsedWidth_0_23;
          MR_Box next_value_of_STATE_VARIABLE_LayoutStream_0_25;

          mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_98_101_115_116_95_97_99_99_95_95_104_111_50_54_95_95_91_51_44_32_52_93_95_48_8_p_0(Var_59, Var_60, Width_10, AfterNlStr_11, DocA_15, STATE_VARIABLE_UsedWidth_0_23, &STATE_VARIABLE_UsedWidth_27_27, STATE_VARIABLE_LayoutStream_0_25, &STATE_VARIABLE_LayoutStream_28_28);
          // direct tailcall eliminated
          ;
          next_value_of_Doc_12 = DocB_16;
          next_value_of_STATE_VARIABLE_UsedWidth_0_23 = STATE_VARIABLE_UsedWidth_27_27;
          next_value_of_STATE_VARIABLE_LayoutStream_0_25 = STATE_VARIABLE_LayoutStream_28_28;
          Doc_12 = next_value_of_Doc_12;
          STATE_VARIABLE_UsedWidth_0_23 = next_value_of_STATE_VARIABLE_UsedWidth_0_23;
          STATE_VARIABLE_LayoutStream_0_25 = next_value_of_STATE_VARIABLE_LayoutStream_0_25;
          continue;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Doc_12, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word DocA_55 = ((MR_Word) ((MR_hl_field(3, Doc_12, (MR_Integer) 1))));
              MR_Integer Var_41 = (MR_Integer) ((MR_Unsigned) Width_10 - (MR_Unsigned) STATE_VARIABLE_UsedWidth_0_23);
              MR_Integer _WidthLeft_63;

              succeeded = mercury__pprint__fits_flat_width_left_3_p_0(DocA_55, Var_41, &_WidthLeft_63);
              if (succeeded)
                mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_104_111_51_49_95_95_91_51_44_32_52_93_95_48_6_p_0(Var_59, Var_60, DocA_55, STATE_VARIABLE_UsedWidth_0_23, STATE_VARIABLE_UsedWidth_24, STATE_VARIABLE_LayoutStream_0_25, STATE_VARIABLE_LayoutStream_26);
              else
              {
                MR_Word next_value_of_Doc_12 = DocA_55;

                // direct tailcall eliminated
                ;
                Doc_12 = next_value_of_Doc_12;
                continue;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer ExtraIndent_17 = ((MR_Integer) ((MR_hl_field(3, Doc_12, (MR_Integer) 1))));
              MR_String NewAfterNlStr_18;
              MR_String Var_31;
              MR_Word DocA_52 = ((MR_Word) ((MR_hl_field(3, Doc_12, (MR_Integer) 2))));
              MR_Word Var_66;
              MR_String next_value_of_AfterNlStr_11;
              MR_Word next_value_of_Doc_12;

              mercury__list__accumulate_n_copies_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), ExtraIndent_17, ((MR_Box) (MR_Word) ((MR_Char) 32)), (MR_Word) ((MR_Unsigned) 0U), &Var_66);
              mercury__string__from_char_list_2_p_0(Var_66, &Var_31);
              mercury__string__append_3_p_2(AfterNlStr_11, Var_31, &NewAfterNlStr_18);
              // direct tailcall eliminated
              ;
              next_value_of_AfterNlStr_11 = NewAfterNlStr_18;
              next_value_of_Doc_12 = DocA_52;
              AfterNlStr_11 = next_value_of_AfterNlStr_11;
              Doc_12 = next_value_of_Doc_12;
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_String LabelStr_19 = ((MR_String) ((MR_hl_field(3, Doc_12, (MR_Integer) 1))));
              MR_Word DocA_53 = ((MR_Word) ((MR_hl_field(3, Doc_12, (MR_Integer) 2))));
              MR_String NewAfterNlStr_54;
              MR_String next_value_of_AfterNlStr_11;
              MR_Word next_value_of_Doc_12;

              mercury__string__append_3_p_2(AfterNlStr_11, LabelStr_19, &NewAfterNlStr_54);
              // direct tailcall eliminated
              ;
              next_value_of_AfterNlStr_11 = NewAfterNlStr_54;
              next_value_of_Doc_12 = DocA_53;
              AfterNlStr_11 = next_value_of_AfterNlStr_11;
              Doc_12 = next_value_of_Doc_12;
              continue;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word TypeInfo_58_58;
              MR_Integer MaxDepth_20 = ((MR_Integer) ((MR_hl_field(3, Doc_12, (MR_Integer) 1))));
              MR_Word Univ_21 = ((MR_Word) ((MR_hl_field(3, Doc_12, (MR_Integer) 2))));
              MR_Box Var_46;
              MR_Word DocA_56;
              MR_Word next_value_of_Doc_12;

              TypeInfo_58_58 = ((MR_Word) ((MR_hl_field(0, Univ_21, (MR_Integer) 0))));
              Var_46 = (MR_hl_field(0, Univ_21, (MR_Integer) 1));
              DocA_56 = mercury__pprint__to_doc_prio_3_f_0(TypeInfo_58_58, MaxDepth_20, (MR_Word) (((MR_Box) ((MR_Unsigned) 500U))), Var_46);
              // direct tailcall eliminated
              ;
              next_value_of_Doc_12 = DocA_56;
              Doc_12 = next_value_of_Doc_12;
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
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_104_111_51_49_95_95_91_51_44_32_52_93_95_48_6_p_0(
  MR_Word Var_40,
  MR_Box Var_41,
  MR_Word Doc_8,
  MR_Integer STATE_VARIABLE_UsedWidth_0_18,
  MR_Integer * STATE_VARIABLE_UsedWidth_19,
  MR_Box STATE_VARIABLE_LayoutStream_0_20,
  MR_Box * STATE_VARIABLE_LayoutStream_21)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Doc_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Doc_8)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *STATE_VARIABLE_UsedWidth_19 = STATE_VARIABLE_UsedWidth_0_18;
              *STATE_VARIABLE_LayoutStream_21 = STATE_VARIABLE_LayoutStream_0_20;
            }
            break;
          case (MR_Integer) 1:
            {
              *STATE_VARIABLE_UsedWidth_19 = STATE_VARIABLE_UsedWidth_0_18;
              *STATE_VARIABLE_LayoutStream_21 = STATE_VARIABLE_LayoutStream_0_20;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Text_11 = ((MR_String) ((MR_hl_field(1, Doc_8, (MR_Integer) 0))));
          MR_Integer Var_23;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

          mercury__string__count_code_points_loop_4_p_0(Text_11, (MR_Integer) 0, (MR_Integer) 0, &Var_23);
          *STATE_VARIABLE_UsedWidth_19 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_UsedWidth_0_18 + (MR_Unsigned) Var_23);
          func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, Var_40, (MR_Integer) 0)), (MR_Integer) 5))));
          func_0(((MR_Box) (Var_40)), Var_41, ((MR_Box) (Text_11)), STATE_VARIABLE_LayoutStream_0_20, STATE_VARIABLE_LayoutStream_21);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word DocA_12 = ((MR_Word) ((MR_hl_field(2, Doc_8, (MR_Integer) 0))));
          MR_Word DocB_13 = ((MR_Word) ((MR_hl_field(2, Doc_8, (MR_Integer) 1))));
          MR_Integer STATE_VARIABLE_UsedWidth_25_25;
          MR_Box STATE_VARIABLE_LayoutStream_26_26;
          MR_Word next_value_of_Doc_8;
          MR_Integer next_value_of_STATE_VARIABLE_UsedWidth_0_18;
          MR_Box next_value_of_STATE_VARIABLE_LayoutStream_0_20;

          mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_97_121_111_117_116_95_102_108_97_116_95_95_104_111_51_49_95_95_91_51_44_32_52_93_95_48_6_p_0(Var_40, Var_41, DocA_12, STATE_VARIABLE_UsedWidth_0_18, &STATE_VARIABLE_UsedWidth_25_25, STATE_VARIABLE_LayoutStream_0_20, &STATE_VARIABLE_LayoutStream_26_26);
          // direct tailcall eliminated
          ;
          next_value_of_Doc_8 = DocB_13;
          next_value_of_STATE_VARIABLE_UsedWidth_0_18 = STATE_VARIABLE_UsedWidth_25_25;
          next_value_of_STATE_VARIABLE_LayoutStream_0_20 = STATE_VARIABLE_LayoutStream_26_26;
          Doc_8 = next_value_of_Doc_8;
          STATE_VARIABLE_UsedWidth_0_18 = next_value_of_STATE_VARIABLE_UsedWidth_0_18;
          STATE_VARIABLE_LayoutStream_0_20 = next_value_of_STATE_VARIABLE_LayoutStream_0_20;
          continue;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Doc_8, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word DocA_34 = ((MR_Word) ((MR_hl_field(3, Doc_8, (MR_Integer) 1))));
              MR_Word next_value_of_Doc_8 = DocA_34;

              // direct tailcall eliminated
              ;
              Doc_8 = next_value_of_Doc_8;
              continue;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word DocA_39 = ((MR_Word) ((MR_hl_field(3, Doc_8, (MR_Integer) 2))));
              MR_Word next_value_of_Doc_8 = DocA_39;

              // direct tailcall eliminated
              ;
              Doc_8 = next_value_of_Doc_8;
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word DocA_38 = ((MR_Word) ((MR_hl_field(3, Doc_8, (MR_Integer) 2))));
              MR_Word next_value_of_Doc_8 = DocA_38;

              // direct tailcall eliminated
              ;
              Doc_8 = next_value_of_Doc_8;
              continue;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word TypeInfo_37_37;
              MR_Integer MaxDepth_16 = ((MR_Integer) ((MR_hl_field(3, Doc_8, (MR_Integer) 1))));
              MR_Word Univ_17 = ((MR_Word) ((MR_hl_field(3, Doc_8, (MR_Integer) 2))));
              MR_Box Var_31;
              MR_Word DocA_35;
              MR_Word next_value_of_Doc_8;

              TypeInfo_37_37 = ((MR_Word) ((MR_hl_field(0, Univ_17, (MR_Integer) 0))));
              Var_31 = (MR_hl_field(0, Univ_17, (MR_Integer) 1));
              DocA_35 = mercury__pprint__to_doc_prio_3_f_0(TypeInfo_37_37, MaxDepth_16, (MR_Word) (((MR_Box) ((MR_Unsigned) 500U))), Var_31);
              // direct tailcall eliminated
              ;
              next_value_of_Doc_8 = DocA_35;
              Doc_8 = next_value_of_Doc_8;
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
  MR_Word TypeClassInfo_for_doc_12,
  MR_Integer Width_5,
  MR_Box Doc_6)
{
  MR_Word Var_11;
  MR_Integer Var_17;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);
  MR_Box conv1_Var_11;
  MR_Integer _UsedWidth_19;

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
	Var_17  = Max;
}
  func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_doc_12, (MR_Integer) 0)), (MR_Integer) 5))));
  conv1_Var_11 = func_0(((MR_Box) (TypeClassInfo_for_doc_12)), ((MR_Box) (Var_17)), Doc_6);
  Var_11 = ((MR_Word) (conv1_Var_11));
  mercury__pprint__layout_best_acc__ho25_8_p_0(Width_5, (MR_String) "", Var_11, (MR_Integer) 0, &_UsedWidth_19);
}

static void MR_CALL 
mercury__pprint__layout_best_acc__ho25_8_p_0(
  MR_Integer Width_10,
  MR_String AfterNlStr_11,
  MR_Word Doc_12,
  MR_Integer STATE_VARIABLE_UsedWidth_0_23,
  MR_Integer * STATE_VARIABLE_UsedWidth_24)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Doc_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Doc_12)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *STATE_VARIABLE_UsedWidth_24 = STATE_VARIABLE_UsedWidth_0_23;
            break;
          case (MR_Integer) 1:
            {
              mercury__string__count_code_points_loop_4_p_0(AfterNlStr_11, (MR_Integer) 0, (MR_Integer) 0, STATE_VARIABLE_UsedWidth_24);
              mercury__io__write_string_3_p_0((MR_String) "\n");
              mercury__io__write_string_3_p_0(AfterNlStr_11);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Text_22 = ((MR_String) ((MR_hl_field(1, Doc_12, (MR_Integer) 0))));
          MR_Integer Var_50;

          mercury__string__count_code_points_loop_4_p_0(Text_22, (MR_Integer) 0, (MR_Integer) 0, &Var_50);
          *STATE_VARIABLE_UsedWidth_24 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_UsedWidth_0_23 + (MR_Unsigned) Var_50);
          mercury__io__write_string_3_p_0(Text_22);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word DocA_15 = ((MR_Word) ((MR_hl_field(2, Doc_12, (MR_Integer) 0))));
          MR_Word DocB_16 = ((MR_Word) ((MR_hl_field(2, Doc_12, (MR_Integer) 1))));
          MR_Integer STATE_VARIABLE_UsedWidth_27_27;
          MR_Word next_value_of_Doc_12;
          MR_Integer next_value_of_STATE_VARIABLE_UsedWidth_0_23;

          mercury__pprint__layout_best_acc__ho25_8_p_0(Width_10, AfterNlStr_11, DocA_15, STATE_VARIABLE_UsedWidth_0_23, &STATE_VARIABLE_UsedWidth_27_27);
          // direct tailcall eliminated
          ;
          next_value_of_Doc_12 = DocB_16;
          next_value_of_STATE_VARIABLE_UsedWidth_0_23 = STATE_VARIABLE_UsedWidth_27_27;
          Doc_12 = next_value_of_Doc_12;
          STATE_VARIABLE_UsedWidth_0_23 = next_value_of_STATE_VARIABLE_UsedWidth_0_23;
          continue;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Doc_12, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word DocA_55 = ((MR_Word) ((MR_hl_field(3, Doc_12, (MR_Integer) 1))));
              MR_Integer Var_41 = (MR_Integer) ((MR_Unsigned) Width_10 - (MR_Unsigned) STATE_VARIABLE_UsedWidth_0_23);
              MR_Integer _WidthLeft_61;

              succeeded = mercury__pprint__fits_flat_width_left_3_p_0(DocA_55, Var_41, &_WidthLeft_61);
              if (succeeded)
                mercury__pprint__layout_flat__ho32_6_p_0(DocA_55, STATE_VARIABLE_UsedWidth_0_23, STATE_VARIABLE_UsedWidth_24);
              else
              {
                MR_Word next_value_of_Doc_12 = DocA_55;

                // direct tailcall eliminated
                ;
                Doc_12 = next_value_of_Doc_12;
                continue;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer ExtraIndent_17 = ((MR_Integer) ((MR_hl_field(3, Doc_12, (MR_Integer) 1))));
              MR_String NewAfterNlStr_18;
              MR_String Var_31;
              MR_Word DocA_52 = ((MR_Word) ((MR_hl_field(3, Doc_12, (MR_Integer) 2))));
              MR_Word Var_64;
              MR_String next_value_of_AfterNlStr_11;
              MR_Word next_value_of_Doc_12;

              mercury__list__accumulate_n_copies_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), ExtraIndent_17, ((MR_Box) (MR_Word) ((MR_Char) 32)), (MR_Word) ((MR_Unsigned) 0U), &Var_64);
              mercury__string__from_char_list_2_p_0(Var_64, &Var_31);
              mercury__string__append_3_p_2(AfterNlStr_11, Var_31, &NewAfterNlStr_18);
              // direct tailcall eliminated
              ;
              next_value_of_AfterNlStr_11 = NewAfterNlStr_18;
              next_value_of_Doc_12 = DocA_52;
              AfterNlStr_11 = next_value_of_AfterNlStr_11;
              Doc_12 = next_value_of_Doc_12;
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_String LabelStr_19 = ((MR_String) ((MR_hl_field(3, Doc_12, (MR_Integer) 1))));
              MR_Word DocA_53 = ((MR_Word) ((MR_hl_field(3, Doc_12, (MR_Integer) 2))));
              MR_String NewAfterNlStr_54;
              MR_String next_value_of_AfterNlStr_11;
              MR_Word next_value_of_Doc_12;

              mercury__string__append_3_p_2(AfterNlStr_11, LabelStr_19, &NewAfterNlStr_54);
              // direct tailcall eliminated
              ;
              next_value_of_AfterNlStr_11 = NewAfterNlStr_54;
              next_value_of_Doc_12 = DocA_53;
              AfterNlStr_11 = next_value_of_AfterNlStr_11;
              Doc_12 = next_value_of_Doc_12;
              continue;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word TypeInfo_58_58;
              MR_Integer MaxDepth_20 = ((MR_Integer) ((MR_hl_field(3, Doc_12, (MR_Integer) 1))));
              MR_Word Univ_21 = ((MR_Word) ((MR_hl_field(3, Doc_12, (MR_Integer) 2))));
              MR_Box Var_46;
              MR_Word DocA_56;
              MR_Word next_value_of_Doc_12;

              TypeInfo_58_58 = ((MR_Word) ((MR_hl_field(0, Univ_21, (MR_Integer) 0))));
              Var_46 = (MR_hl_field(0, Univ_21, (MR_Integer) 1));
              DocA_56 = mercury__pprint__to_doc_prio_3_f_0(TypeInfo_58_58, MaxDepth_20, (MR_Word) (((MR_Box) ((MR_Unsigned) 500U))), Var_46);
              // direct tailcall eliminated
              ;
              next_value_of_Doc_12 = DocA_56;
              Doc_12 = next_value_of_Doc_12;
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
mercury__pprint__layout_flat__ho32_6_p_0(
  MR_Word Doc_8,
  MR_Integer STATE_VARIABLE_UsedWidth_0_18,
  MR_Integer * STATE_VARIABLE_UsedWidth_19)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Doc_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Doc_8)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *STATE_VARIABLE_UsedWidth_19 = STATE_VARIABLE_UsedWidth_0_18;
            break;
          case (MR_Integer) 1:
            *STATE_VARIABLE_UsedWidth_19 = STATE_VARIABLE_UsedWidth_0_18;
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Text_11 = ((MR_String) ((MR_hl_field(1, Doc_8, (MR_Integer) 0))));
          MR_Integer Var_23;

          mercury__string__count_code_points_loop_4_p_0(Text_11, (MR_Integer) 0, (MR_Integer) 0, &Var_23);
          *STATE_VARIABLE_UsedWidth_19 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_UsedWidth_0_18 + (MR_Unsigned) Var_23);
          mercury__io__write_string_3_p_0(Text_11);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word DocA_12 = ((MR_Word) ((MR_hl_field(2, Doc_8, (MR_Integer) 0))));
          MR_Word DocB_13 = ((MR_Word) ((MR_hl_field(2, Doc_8, (MR_Integer) 1))));
          MR_Integer STATE_VARIABLE_UsedWidth_25_25;
          MR_Word next_value_of_Doc_8;
          MR_Integer next_value_of_STATE_VARIABLE_UsedWidth_0_18;

          mercury__pprint__layout_flat__ho32_6_p_0(DocA_12, STATE_VARIABLE_UsedWidth_0_18, &STATE_VARIABLE_UsedWidth_25_25);
          // direct tailcall eliminated
          ;
          next_value_of_Doc_8 = DocB_13;
          next_value_of_STATE_VARIABLE_UsedWidth_0_18 = STATE_VARIABLE_UsedWidth_25_25;
          Doc_8 = next_value_of_Doc_8;
          STATE_VARIABLE_UsedWidth_0_18 = next_value_of_STATE_VARIABLE_UsedWidth_0_18;
          continue;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Doc_8, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word DocA_34 = ((MR_Word) ((MR_hl_field(3, Doc_8, (MR_Integer) 1))));
              MR_Word next_value_of_Doc_8 = DocA_34;

              // direct tailcall eliminated
              ;
              Doc_8 = next_value_of_Doc_8;
              continue;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word DocA_39 = ((MR_Word) ((MR_hl_field(3, Doc_8, (MR_Integer) 2))));
              MR_Word next_value_of_Doc_8 = DocA_39;

              // direct tailcall eliminated
              ;
              Doc_8 = next_value_of_Doc_8;
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word DocA_38 = ((MR_Word) ((MR_hl_field(3, Doc_8, (MR_Integer) 2))));
              MR_Word next_value_of_Doc_8 = DocA_38;

              // direct tailcall eliminated
              ;
              Doc_8 = next_value_of_Doc_8;
              continue;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word TypeInfo_37_37;
              MR_Integer MaxDepth_16 = ((MR_Integer) ((MR_hl_field(3, Doc_8, (MR_Integer) 1))));
              MR_Word Univ_17 = ((MR_Word) ((MR_hl_field(3, Doc_8, (MR_Integer) 2))));
              MR_Box Var_31;
              MR_Word DocA_35;
              MR_Word next_value_of_Doc_8;

              TypeInfo_37_37 = ((MR_Word) ((MR_hl_field(0, Univ_17, (MR_Integer) 0))));
              Var_31 = (MR_hl_field(0, Univ_17, (MR_Integer) 1));
              DocA_35 = mercury__pprint__to_doc_prio_3_f_0(TypeInfo_37_37, MaxDepth_16, (MR_Word) (((MR_Box) ((MR_Unsigned) 500U))), Var_31);
              // direct tailcall eliminated
              ;
              next_value_of_Doc_8 = DocA_35;
              Doc_8 = next_value_of_Doc_8;
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
  MR_Integer Width_4,
  MR_Word Doc_5)
{
  MR_String Str_6;
  MR_Word Strs_9;
  MR_Word Var_15;
  MR_Integer _UsedWidth_21;

  mercury__pprint__layout_best_acc__ho24_8_p_0(Width_4, (MR_String) "", Doc_5, (MR_Integer) 0, &_UsedWidth_21, (MR_Word) ((MR_Unsigned) 0U), &Strs_9);
  mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Strs_9, &Var_15);
  Str_6 = mercury__string__append_list_1_f_0(Var_15);
  return Str_6;
}

static void MR_CALL 
mercury__pprint__layout_best_acc__ho24_8_p_0(
  MR_Integer Width_10,
  MR_String AfterNlStr_11,
  MR_Word Doc_12,
  MR_Integer STATE_VARIABLE_UsedWidth_0_23,
  MR_Integer * STATE_VARIABLE_UsedWidth_24,
  MR_Word STATE_VARIABLE_LayoutStream_0_25,
  MR_Word * STATE_VARIABLE_LayoutStream_26)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Doc_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Doc_12)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *STATE_VARIABLE_UsedWidth_24 = STATE_VARIABLE_UsedWidth_0_23;
              *STATE_VARIABLE_LayoutStream_26 = STATE_VARIABLE_LayoutStream_0_25;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word STATE_VARIABLE_LayoutStream_39_39;

              mercury__string__count_code_points_loop_4_p_0(AfterNlStr_11, (MR_Integer) 0, (MR_Integer) 0, STATE_VARIABLE_UsedWidth_24);
              {
                STATE_VARIABLE_LayoutStream_39_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, STATE_VARIABLE_LayoutStream_39_39, 0) = ((MR_Box) ((MR_String) "\n"));
                MR_hl_field(1, STATE_VARIABLE_LayoutStream_39_39, 1) = ((MR_Box) (STATE_VARIABLE_LayoutStream_0_25));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_LayoutStream_26 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (AfterNlStr_11));
                MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_LayoutStream_39_39));
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Text_22 = ((MR_String) ((MR_hl_field(1, Doc_12, (MR_Integer) 0))));
          MR_Integer Var_50;

          mercury__string__count_code_points_loop_4_p_0(Text_22, (MR_Integer) 0, (MR_Integer) 0, &Var_50);
          *STATE_VARIABLE_UsedWidth_24 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_UsedWidth_0_23 + (MR_Unsigned) Var_50);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_LayoutStream_26 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Text_22));
            MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_LayoutStream_0_25));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word DocA_15 = ((MR_Word) ((MR_hl_field(2, Doc_12, (MR_Integer) 0))));
          MR_Word DocB_16 = ((MR_Word) ((MR_hl_field(2, Doc_12, (MR_Integer) 1))));
          MR_Integer STATE_VARIABLE_UsedWidth_27_27;
          MR_Word STATE_VARIABLE_LayoutStream_28_28;
          MR_Word next_value_of_Doc_12;
          MR_Integer next_value_of_STATE_VARIABLE_UsedWidth_0_23;
          MR_Word next_value_of_STATE_VARIABLE_LayoutStream_0_25;

          mercury__pprint__layout_best_acc__ho24_8_p_0(Width_10, AfterNlStr_11, DocA_15, STATE_VARIABLE_UsedWidth_0_23, &STATE_VARIABLE_UsedWidth_27_27, STATE_VARIABLE_LayoutStream_0_25, &STATE_VARIABLE_LayoutStream_28_28);
          // direct tailcall eliminated
          ;
          next_value_of_Doc_12 = DocB_16;
          next_value_of_STATE_VARIABLE_UsedWidth_0_23 = STATE_VARIABLE_UsedWidth_27_27;
          next_value_of_STATE_VARIABLE_LayoutStream_0_25 = STATE_VARIABLE_LayoutStream_28_28;
          Doc_12 = next_value_of_Doc_12;
          STATE_VARIABLE_UsedWidth_0_23 = next_value_of_STATE_VARIABLE_UsedWidth_0_23;
          STATE_VARIABLE_LayoutStream_0_25 = next_value_of_STATE_VARIABLE_LayoutStream_0_25;
          continue;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Doc_12, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word DocA_55 = ((MR_Word) ((MR_hl_field(3, Doc_12, (MR_Integer) 1))));
              MR_Integer Var_41 = (MR_Integer) ((MR_Unsigned) Width_10 - (MR_Unsigned) STATE_VARIABLE_UsedWidth_0_23);
              MR_Integer _WidthLeft_61;

              succeeded = mercury__pprint__fits_flat_width_left_3_p_0(DocA_55, Var_41, &_WidthLeft_61);
              if (succeeded)
                mercury__pprint__layout_flat__ho33_6_p_0(DocA_55, STATE_VARIABLE_UsedWidth_0_23, STATE_VARIABLE_UsedWidth_24, STATE_VARIABLE_LayoutStream_0_25, STATE_VARIABLE_LayoutStream_26);
              else
              {
                MR_Word next_value_of_Doc_12 = DocA_55;

                // direct tailcall eliminated
                ;
                Doc_12 = next_value_of_Doc_12;
                continue;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer ExtraIndent_17 = ((MR_Integer) ((MR_hl_field(3, Doc_12, (MR_Integer) 1))));
              MR_String NewAfterNlStr_18;
              MR_String Var_31;
              MR_Word DocA_52 = ((MR_Word) ((MR_hl_field(3, Doc_12, (MR_Integer) 2))));
              MR_Word Var_64;
              MR_String next_value_of_AfterNlStr_11;
              MR_Word next_value_of_Doc_12;

              mercury__list__accumulate_n_copies_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), ExtraIndent_17, ((MR_Box) (MR_Word) ((MR_Char) 32)), (MR_Word) ((MR_Unsigned) 0U), &Var_64);
              mercury__string__from_char_list_2_p_0(Var_64, &Var_31);
              mercury__string__append_3_p_2(AfterNlStr_11, Var_31, &NewAfterNlStr_18);
              // direct tailcall eliminated
              ;
              next_value_of_AfterNlStr_11 = NewAfterNlStr_18;
              next_value_of_Doc_12 = DocA_52;
              AfterNlStr_11 = next_value_of_AfterNlStr_11;
              Doc_12 = next_value_of_Doc_12;
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_String LabelStr_19 = ((MR_String) ((MR_hl_field(3, Doc_12, (MR_Integer) 1))));
              MR_Word DocA_53 = ((MR_Word) ((MR_hl_field(3, Doc_12, (MR_Integer) 2))));
              MR_String NewAfterNlStr_54;
              MR_String next_value_of_AfterNlStr_11;
              MR_Word next_value_of_Doc_12;

              mercury__string__append_3_p_2(AfterNlStr_11, LabelStr_19, &NewAfterNlStr_54);
              // direct tailcall eliminated
              ;
              next_value_of_AfterNlStr_11 = NewAfterNlStr_54;
              next_value_of_Doc_12 = DocA_53;
              AfterNlStr_11 = next_value_of_AfterNlStr_11;
              Doc_12 = next_value_of_Doc_12;
              continue;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word TypeInfo_58_58;
              MR_Integer MaxDepth_20 = ((MR_Integer) ((MR_hl_field(3, Doc_12, (MR_Integer) 1))));
              MR_Word Univ_21 = ((MR_Word) ((MR_hl_field(3, Doc_12, (MR_Integer) 2))));
              MR_Box Var_46;
              MR_Word DocA_56;
              MR_Word next_value_of_Doc_12;

              TypeInfo_58_58 = ((MR_Word) ((MR_hl_field(0, Univ_21, (MR_Integer) 0))));
              Var_46 = (MR_hl_field(0, Univ_21, (MR_Integer) 1));
              DocA_56 = mercury__pprint__to_doc_prio_3_f_0(TypeInfo_58_58, MaxDepth_20, (MR_Word) (((MR_Box) ((MR_Unsigned) 500U))), Var_46);
              // direct tailcall eliminated
              ;
              next_value_of_Doc_12 = DocA_56;
              Doc_12 = next_value_of_Doc_12;
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
mercury__pprint__layout_flat__ho33_6_p_0(
  MR_Word Doc_8,
  MR_Integer STATE_VARIABLE_UsedWidth_0_18,
  MR_Integer * STATE_VARIABLE_UsedWidth_19,
  MR_Word STATE_VARIABLE_LayoutStream_0_20,
  MR_Word * STATE_VARIABLE_LayoutStream_21)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Doc_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Doc_8)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *STATE_VARIABLE_UsedWidth_19 = STATE_VARIABLE_UsedWidth_0_18;
              *STATE_VARIABLE_LayoutStream_21 = STATE_VARIABLE_LayoutStream_0_20;
            }
            break;
          case (MR_Integer) 1:
            {
              *STATE_VARIABLE_UsedWidth_19 = STATE_VARIABLE_UsedWidth_0_18;
              *STATE_VARIABLE_LayoutStream_21 = STATE_VARIABLE_LayoutStream_0_20;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Text_11 = ((MR_String) ((MR_hl_field(1, Doc_8, (MR_Integer) 0))));
          MR_Integer Var_23;

          mercury__string__count_code_points_loop_4_p_0(Text_11, (MR_Integer) 0, (MR_Integer) 0, &Var_23);
          *STATE_VARIABLE_UsedWidth_19 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_UsedWidth_0_18 + (MR_Unsigned) Var_23);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_LayoutStream_21 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Text_11));
            MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_LayoutStream_0_20));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word DocA_12 = ((MR_Word) ((MR_hl_field(2, Doc_8, (MR_Integer) 0))));
          MR_Word DocB_13 = ((MR_Word) ((MR_hl_field(2, Doc_8, (MR_Integer) 1))));
          MR_Integer STATE_VARIABLE_UsedWidth_25_25;
          MR_Word STATE_VARIABLE_LayoutStream_26_26;
          MR_Word next_value_of_Doc_8;
          MR_Integer next_value_of_STATE_VARIABLE_UsedWidth_0_18;
          MR_Word next_value_of_STATE_VARIABLE_LayoutStream_0_20;

          mercury__pprint__layout_flat__ho33_6_p_0(DocA_12, STATE_VARIABLE_UsedWidth_0_18, &STATE_VARIABLE_UsedWidth_25_25, STATE_VARIABLE_LayoutStream_0_20, &STATE_VARIABLE_LayoutStream_26_26);
          // direct tailcall eliminated
          ;
          next_value_of_Doc_8 = DocB_13;
          next_value_of_STATE_VARIABLE_UsedWidth_0_18 = STATE_VARIABLE_UsedWidth_25_25;
          next_value_of_STATE_VARIABLE_LayoutStream_0_20 = STATE_VARIABLE_LayoutStream_26_26;
          Doc_8 = next_value_of_Doc_8;
          STATE_VARIABLE_UsedWidth_0_18 = next_value_of_STATE_VARIABLE_UsedWidth_0_18;
          STATE_VARIABLE_LayoutStream_0_20 = next_value_of_STATE_VARIABLE_LayoutStream_0_20;
          continue;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Doc_8, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word DocA_34 = ((MR_Word) ((MR_hl_field(3, Doc_8, (MR_Integer) 1))));
              MR_Word next_value_of_Doc_8 = DocA_34;

              // direct tailcall eliminated
              ;
              Doc_8 = next_value_of_Doc_8;
              continue;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word DocA_39 = ((MR_Word) ((MR_hl_field(3, Doc_8, (MR_Integer) 2))));
              MR_Word next_value_of_Doc_8 = DocA_39;

              // direct tailcall eliminated
              ;
              Doc_8 = next_value_of_Doc_8;
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word DocA_38 = ((MR_Word) ((MR_hl_field(3, Doc_8, (MR_Integer) 2))));
              MR_Word next_value_of_Doc_8 = DocA_38;

              // direct tailcall eliminated
              ;
              Doc_8 = next_value_of_Doc_8;
              continue;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word TypeInfo_37_37;
              MR_Integer MaxDepth_16 = ((MR_Integer) ((MR_hl_field(3, Doc_8, (MR_Integer) 1))));
              MR_Word Univ_17 = ((MR_Word) ((MR_hl_field(3, Doc_8, (MR_Integer) 2))));
              MR_Box Var_31;
              MR_Word DocA_35;
              MR_Word next_value_of_Doc_8;

              TypeInfo_37_37 = ((MR_Word) ((MR_hl_field(0, Univ_17, (MR_Integer) 0))));
              Var_31 = (MR_hl_field(0, Univ_17, (MR_Integer) 1));
              DocA_35 = mercury__pprint__to_doc_prio_3_f_0(TypeInfo_37_37, MaxDepth_16, (MR_Word) (((MR_Box) ((MR_Unsigned) 500U))), Var_31);
              // direct tailcall eliminated
              ;
              next_value_of_Doc_8 = DocA_35;
              Doc_8 = next_value_of_Doc_8;
              continue;
            }
            break;
        }
        break;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__pprint__fits_flat_width_left_3_p_0(
  MR_Word Doc_4,
  MR_Integer WidthAvail_5,
  MR_Integer * WidthLeft_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Doc_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *WidthLeft_6 = WidthAvail_5;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Str_7 = ((MR_String) ((MR_hl_field(1, Doc_4, (MR_Integer) 0))));
          MR_Integer StrLen_8;

          mercury__string__count_code_points_loop_4_p_0(Str_7, (MR_Integer) 0, (MR_Integer) 0, &StrLen_8);
          *WidthLeft_6 = (MR_Integer) ((MR_Unsigned) WidthAvail_5 - (MR_Unsigned) StrLen_8);
          succeeded = (*WidthLeft_6 > (MR_Integer) 0);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word DocA_9 = ((MR_Word) ((MR_hl_field(2, Doc_4, (MR_Integer) 0))));
          MR_Word DocB_10 = ((MR_Word) ((MR_hl_field(2, Doc_4, (MR_Integer) 1))));
          MR_Integer WidthLeftAfterA_11;
          MR_Word next_value_of_Doc_4;
          MR_Integer next_value_of_WidthAvail_5;

          succeeded = mercury__pprint__fits_flat_width_left_3_p_0(DocA_9, WidthAvail_5, &WidthLeftAfterA_11);
          if (succeeded)
          {
            // direct tailcall eliminated
            ;
            next_value_of_Doc_4 = DocB_10;
            next_value_of_WidthAvail_5 = WidthLeftAfterA_11;
            Doc_4 = next_value_of_Doc_4;
            WidthAvail_5 = next_value_of_WidthAvail_5;
            continue;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Doc_4, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word DocA_18 = ((MR_Word) ((MR_hl_field(3, Doc_4, (MR_Integer) 1))));
              MR_Word next_value_of_Doc_4 = DocA_18;

              // direct tailcall eliminated
              ;
              Doc_4 = next_value_of_Doc_4;
              continue;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word DocA_22 = ((MR_Word) ((MR_hl_field(3, Doc_4, (MR_Integer) 2))));
              MR_Word next_value_of_Doc_4 = DocA_22;

              // direct tailcall eliminated
              ;
              Doc_4 = next_value_of_Doc_4;
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word DocA_21 = ((MR_Word) ((MR_hl_field(3, Doc_4, (MR_Integer) 2))));
              MR_Word next_value_of_Doc_4 = DocA_21;

              // direct tailcall eliminated
              ;
              Doc_4 = next_value_of_Doc_4;
              continue;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word TypeInfo_20_20;
              MR_Integer MaxDepth_14 = ((MR_Integer) ((MR_hl_field(3, Doc_4, (MR_Integer) 1))));
              MR_Word Univ_15 = ((MR_Word) ((MR_hl_field(3, Doc_4, (MR_Integer) 2))));
              MR_Box Var_17;
              MR_Word DocA_19;
              MR_Word next_value_of_Doc_4;

              TypeInfo_20_20 = ((MR_Word) ((MR_hl_field(0, Univ_15, (MR_Integer) 0))));
              Var_17 = (MR_hl_field(0, Univ_15, (MR_Integer) 1));
              DocA_19 = mercury__pprint__to_doc_prio_3_f_0(TypeInfo_20_20, MaxDepth_14, (MR_Word) (((MR_Box) ((MR_Unsigned) 500U))), Var_17);
              // direct tailcall eliminated
              ;
              next_value_of_Doc_4 = DocA_19;
              Doc_4 = next_value_of_Doc_4;
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
mercury__pprint__word_wrapped_1_f_0(
  MR_String String_3)
{
  MR_Word HeadVar__2_2;
  MR_Word Var_6;
  MR_Word Var_10;
  MR_Integer Var_19;

  mercury__pprint__skip_to_next_word_start__ho23_4_p_in__string_0(String_3, (MR_Integer) 0, &Var_19);
  mercury__pprint__words_loop__ho22_4_p_in__string_0(String_3, Var_19, &Var_10);
  Var_6 = mercury__pprint__map__ho19_2_f_in__list_0(Var_10);
  HeadVar__2_2 = mercury__pprint__packed_2_f_0((MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Word) (&mercury__pprint_scalar_common_1[1]), ((MR_Box) (MR_mkword(1, &mercury__pprint_scalar_common_5[4]))), Var_6);
  return HeadVar__2_2;
}

static void MR_CALL 
mercury__pprint__words_loop__ho22_4_p_in__string_0(
  MR_String HeadVar__2_6,
  MR_Integer HeadVar__3_7,
  MR_Word * HeadVar__4_8)
{
  MR_bool succeeded;
  MR_Integer Var_9;

  mercury__pprint__skip_to_word_end__ho34_4_p_in__string_0(HeadVar__2_6, HeadVar__3_7, &Var_9);
  succeeded = (Var_9 == HeadVar__3_7);
  if (succeeded)
    *HeadVar__4_8 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_String Var_10;
    MR_Integer Var_11;

{
#define MR_PROC_LABEL mercury__pprint__words_loop__ho22_4_p_in__string_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str = HeadVar__2_6 ;
	Start = HeadVar__3_7 ;
	End = Var_9 ;
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
	Var_10  = SubString;
}
    mercury__pprint__skip_to_next_word_start__ho23_4_p_in__string_0(HeadVar__2_6, Var_9, &Var_11);
    succeeded = (Var_9 == Var_11);
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__4_8 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_10));
        MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    else
    {
      MR_Word * AddrSCCcallarg_13_14;

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__4_8 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_10));
        MR_hl_field(1, base, 1) = NULL;
      }
      AddrSCCcallarg_13_14 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__4_8, (MR_Integer) 1)));
      mercury__pprint__LCMC__pred__words_loop__ho22__1_4_p_0(HeadVar__2_6, Var_11, AddrSCCcallarg_13_14);
    }
  }
}

static void MR_CALL 
mercury__pprint__LCMC__pred__words_loop__ho22__1_4_p_0(
  MR_String HeadVar__2_6,
  MR_Integer HeadVar__3_7,
  MR_Word * AddrOfHeadVar__4_15)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer Var_9;

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__pprint__skip_to_word_end__ho34_4_p_in__string_0(HeadVar__2_6, HeadVar__3_7, &Var_9);
    succeeded = (Var_9 == HeadVar__3_7);
    if (succeeded)
      *AddrOfHeadVar__4_15 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_String Var_10;
      MR_Integer Var_11;

{
#define MR_PROC_LABEL mercury__pprint__LCMC__pred__words_loop__ho22__1_4_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str = HeadVar__2_6 ;
	Start = HeadVar__3_7 ;
	End = Var_9 ;
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
	Var_10  = SubString;
}
      mercury__pprint__skip_to_next_word_start__ho23_4_p_in__string_0(HeadVar__2_6, Var_9, &Var_11);
      succeeded = (Var_9 == Var_11);
      if (succeeded)
      {
        MR_Word HeadVar__4_16;

        {
          HeadVar__4_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, HeadVar__4_16, 0) = ((MR_Box) (Var_10));
          MR_hl_field(1, HeadVar__4_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        *AddrOfHeadVar__4_15 = HeadVar__4_16;
      }
      else
      {
        MR_Word * AddrSCCcallarg_13_14;
        MR_Word HeadVar__4_17;
        MR_Integer next_value_of_HeadVar__3_7;
        MR_Word * next_value_of_AddrOfHeadVar__4_15;

        {
          HeadVar__4_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, HeadVar__4_17, 0) = ((MR_Box) (Var_10));
          MR_hl_field(1, HeadVar__4_17, 1) = NULL;
        }
        AddrSCCcallarg_13_14 = (MR_Word *) (&(MR_hl_field(1, HeadVar__4_17, (MR_Integer) 1)));
        *AddrOfHeadVar__4_15 = HeadVar__4_17;
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__3_7 = Var_11;
        next_value_of_AddrOfHeadVar__4_15 = AddrSCCcallarg_13_14;
        HeadVar__3_7 = next_value_of_HeadVar__3_7;
        AddrOfHeadVar__4_15 = next_value_of_AddrOfHeadVar__4_15;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
mercury__pprint__skip_to_word_end__ho34_4_p_in__string_0(
  MR_String HeadVar__2_6,
  MR_Integer HeadVar__3_7,
  MR_Integer * HeadVar__4_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer Var_9;
    MR_Char Var_10;
    MR_Word Var_11;
    MR_Integer Var_12;

    // setup for model_det tailcalls optimized into a loop
    ;
{
#define MR_PROC_LABEL mercury__pprint__skip_to_word_end__ho34_4_p_in__string_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_Integer ReplacedCodeUnit;
	MR_bool SUCCESS_INDICATOR;

	Str = HeadVar__2_6 ;
	Index = HeadVar__3_7 ;
		{

    Ch = (unsigned char) Str[Index];
    ReplacedCodeUnit = -1;
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        if (Ch < 0) {
            Ch = 0xfffd;
            ReplacedCodeUnit = (unsigned char) Str[Index];
            NextIndex = Index + 1;
        }
        SUCCESS_INDICATOR = MR_TRUE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	Var_9  = NextIndex;
	Var_10  = Ch;
	Var_12  = ReplacedCodeUnit;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      succeeded = (Var_12 == (MR_Integer) -1);
      if (succeeded)
        Var_11 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        uint8_t Var_13;

{
#define MR_PROC_LABEL mercury__pprint__skip_to_word_end__ho34_4_p_in__string_0

	MR_Integer I;
	uint8_t U8;

	I = Var_12 ;
		{

    U8 = (uint8_t) I;


		;}
#undef MR_PROC_LABEL
	Var_13  = U8;
}
        {
          Var_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_11, 0) = ((MR_Box) (MR_Word) (Var_13));
        }
      }
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      succeeded = (Var_11 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        succeeded = mercury__char__is_whitespace_1_p_0(Var_10);
      if (succeeded)
        *HeadVar__4_8 = HeadVar__3_7;
      else
      {
        MR_Integer next_value_of_HeadVar__3_7 = Var_9;

        // direct tailcall eliminated
        ;
        HeadVar__3_7 = next_value_of_HeadVar__3_7;
        continue;
      }
    }
    else
      *HeadVar__4_8 = HeadVar__3_7;
    break;
  }
}

static void MR_CALL 
mercury__pprint__skip_to_next_word_start__ho23_4_p_in__string_0(
  MR_String HeadVar__2_6,
  MR_Integer HeadVar__3_7,
  MR_Integer * HeadVar__4_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer Var_10;
    MR_Char Var_11;
    MR_Word Var_12;
    MR_Integer Var_14;

    // setup for model_det tailcalls optimized into a loop
    ;
{
#define MR_PROC_LABEL mercury__pprint__skip_to_next_word_start__ho23_4_p_in__string_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_Integer ReplacedCodeUnit;
	MR_bool SUCCESS_INDICATOR;

	Str = HeadVar__2_6 ;
	Index = HeadVar__3_7 ;
		{

    Ch = (unsigned char) Str[Index];
    ReplacedCodeUnit = -1;
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        if (Ch < 0) {
            Ch = 0xfffd;
            ReplacedCodeUnit = (unsigned char) Str[Index];
            NextIndex = Index + 1;
        }
        SUCCESS_INDICATOR = MR_TRUE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	Var_10  = NextIndex;
	Var_11  = Ch;
	Var_14  = ReplacedCodeUnit;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      succeeded = (Var_14 == (MR_Integer) -1);
      if (succeeded)
        Var_12 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        uint8_t Var_15;

{
#define MR_PROC_LABEL mercury__pprint__skip_to_next_word_start__ho23_4_p_in__string_0

	MR_Integer I;
	uint8_t U8;

	I = Var_14 ;
		{

    U8 = (uint8_t) I;


		;}
#undef MR_PROC_LABEL
	Var_15  = U8;
}
        {
          Var_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_12, 0) = ((MR_Box) (MR_Word) (Var_15));
        }
      }
      succeeded = mercury__string____Unify____maybe_replaced_0_0((MR_Word) ((MR_Unsigned) 0U), Var_12);
      if (succeeded)
        succeeded = mercury__char__is_whitespace_1_p_0(Var_11);
    }
    if (succeeded)
    {
      MR_Integer next_value_of_HeadVar__3_7 = Var_10;

      // direct tailcall eliminated
      ;
      HeadVar__3_7 = next_value_of_HeadVar__3_7;
      continue;
    }
    else
      *HeadVar__4_8 = HeadVar__3_7;
    break;
  }
}

static MR_Word MR_CALL 
mercury__pprint__map__ho19_2_f_in__list_0(
  MR_Word HeadVar__2_2)
{
  MR_Word HeadVar__3_3;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_String Var_6 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Var_8;
    MR_Word * AddrSCCcallarg_9_12;

    {
      Var_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_8, 0) = ((MR_Box) (Var_6));
    }
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (Var_8));
      MR_hl_field(1, HeadVar__3_3, 1) = NULL;
    }
    AddrSCCcallarg_9_12 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1)));
    mercury__pprint__LCMC__func__map__ho19__1_3_p_0(Var_7, AddrSCCcallarg_9_12);
  }
  return HeadVar__3_3;
}

static void MR_CALL 
mercury__pprint__LCMC__func__map__ho19__1_3_p_0(
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_13)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfHeadVar__3_13 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_String Var_6 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_8;
      MR_Word * AddrSCCcallarg_9_12;
      MR_Word HeadVar__3_14;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word * next_value_of_AddrOfHeadVar__3_13;

      {
        Var_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_8, 0) = ((MR_Box) (Var_6));
      }
      {
        HeadVar__3_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__3_14, 0) = ((MR_Box) (Var_8));
        MR_hl_field(1, HeadVar__3_14, 1) = NULL;
      }
      AddrSCCcallarg_9_12 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_14, (MR_Integer) 1)));
      *AddrOfHeadVar__3_13 = HeadVar__3_14;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Var_7;
      next_value_of_AddrOfHeadVar__3_13 = AddrSCCcallarg_9_12;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      AddrOfHeadVar__3_13 = next_value_of_AddrOfHeadVar__3_13;
      continue;
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__pprint__separated_3_f_0(
  MR_Word TypeInfo_for_T1_18,
  MR_Word TypeClassInfo_for_doc_17,
  MR_Word PP_1,
  MR_Box Sep_2,
  MR_Word HeadVar__3_3)
{
  MR_Word HeadVar__4_4;

  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Box X_9 = (MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0));
    MR_Word Xs_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));

    if ((Xs_10 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, PP_1, (MR_Integer) 1))));
      MR_Box conv1_HeadVar__4_4;

      conv1_HeadVar__4_4 = func_0(((MR_Box) (PP_1)), X_9);
      HeadVar__4_4 = ((MR_Word) (conv1_HeadVar__4_4));
    }
    else
    {
      MR_Word Var_14;
      MR_Word Var_15;
      MR_Word Var_16;
      MR_Word Var_20;
      MR_Word Var_21;
      MR_Integer Var_22;
      MR_Integer Var_23;
      MR_Box MR_CALL (* func_2)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, PP_1, (MR_Integer) 1))));
      MR_Box conv3_Var_14;
      MR_Box MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box);
      MR_Box conv5_Var_20;
      MR_Box MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box);
      MR_Box conv7_Var_21;

      conv3_Var_14 = func_2(((MR_Box) (PP_1)), X_9);
      Var_14 = ((MR_Word) (conv3_Var_14));
      Var_16 = mercury__pprint__separated_3_f_0(TypeInfo_for_T1_18, TypeClassInfo_for_doc_17, PP_1, Sep_2, Xs_10);
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
      func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_doc_17, (MR_Integer) 0)), (MR_Integer) 5))));
      conv5_Var_20 = func_4(((MR_Box) (TypeClassInfo_for_doc_17)), ((MR_Box) (Var_22)), Sep_2);
      Var_20 = ((MR_Word) (conv5_Var_20));
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
	Var_23  = Max;
}
      func_6 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
      conv7_Var_21 = func_6(((MR_Box) ((MR_Word) (&mercury__pprint_scalar_common_1[1]))), ((MR_Box) (Var_23)), ((MR_Box) (Var_16)));
      Var_21 = ((MR_Word) (conv7_Var_21));
      {
        Var_15 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Var_15, 0) = ((MR_Box) (Var_20));
        MR_hl_field(2, Var_15, 1) = ((MR_Box) (Var_21));
      }
      HeadVar__4_4 = mercury__pprint__f_43_43_2_f_0((MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Word) (&mercury__pprint_scalar_common_1[1]), ((MR_Box) (Var_14)), ((MR_Box) (Var_15)));
    }
  }
  return HeadVar__4_4;
}

MR_Word MR_CALL 
mercury__pprint__packed_cs_to_depth_2_f_0(
  MR_Word TypeInfo_for_T_8,
  MR_Integer Depth_4,
  MR_Word Xs_5)
{
  MR_Word HeadVar__3_3;
  MR_Word Var_6;

  Var_6 = mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_50_49_95_95_91_51_44_32_52_93_95_48_2_f_in__list_0(TypeInfo_for_T_8, Depth_4, Xs_5);
  HeadVar__3_3 = mercury__pprint__packed_3_f_0((MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Word) (&mercury__pprint_scalar_common_1[1]), Depth_4, ((MR_Box) ((MR_String) ", ")), Var_6);
  return HeadVar__3_3;
}

MR_Word MR_CALL 
mercury__pprint__packed_cs_2_f_0(
  MR_Word TypeClassInfo_for_doc_7,
  MR_Integer N_4,
  MR_Word Xs_5)
{
  MR_Word HeadVar__3_3;

  HeadVar__3_3 = mercury__pprint__packed_3_f_0((MR_Word) (&mercury__pprint_scalar_common_1[0]), TypeClassInfo_for_doc_7, N_4, ((MR_Box) ((MR_String) ", ")), Xs_5);
  return HeadVar__3_3;
}

MR_Word MR_CALL 
mercury__pprint__packed_cs_1_f_0(
  MR_Word TypeClassInfo_for_doc_5,
  MR_Word Xs_3)
{
  MR_Word HeadVar__2_2;
  MR_Integer Var_7;

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
	Var_7  = Max;
}
  HeadVar__2_2 = mercury__pprint__packed_3_f_0((MR_Word) (&mercury__pprint_scalar_common_1[0]), TypeClassInfo_for_doc_5, Var_7, ((MR_Box) ((MR_String) ", ")), Xs_3);
  return HeadVar__2_2;
}

MR_Word MR_CALL 
mercury__pprint__packed_2_f_0(
  MR_Word TypeClassInfo_for_doc_7,
  MR_Word TypeClassInfo_for_doc_8,
  MR_Box Sep_4,
  MR_Word Xs_5)
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

MR_Word MR_CALL 
mercury__pprint__braces_1_f_0(
  MR_Word TypeClassInfo_for_doc_6,
  MR_Box D_3)
{
  MR_Word HeadVar__2_2;

  HeadVar__2_2 = mercury__pprint__bracketed_3_f_0((MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Word) (&mercury__pprint_scalar_common_1[0]), TypeClassInfo_for_doc_6, ((MR_Box) ((MR_String) "{")), ((MR_Box) ((MR_String) "}")), D_3);
  return HeadVar__2_2;
}

MR_Word MR_CALL 
mercury__pprint__brackets_1_f_0(
  MR_Word TypeClassInfo_for_doc_6,
  MR_Box D_3)
{
  MR_Word HeadVar__2_2;

  HeadVar__2_2 = mercury__pprint__bracketed_3_f_0((MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Word) (&mercury__pprint_scalar_common_1[0]), TypeClassInfo_for_doc_6, ((MR_Box) ((MR_String) "[")), ((MR_Box) ((MR_String) "]")), D_3);
  return HeadVar__2_2;
}

MR_Word MR_CALL 
mercury__pprint__f_60_47_62_2_f_0(
  MR_Word X_4,
  MR_Word Y_5)
{
  MR_Word HeadVar__3_3;
  MR_Word Var_6;

  Var_6 = mercury__pprint__f_43_43_2_f_0((MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Word) (&mercury__pprint_scalar_common_1[1]), ((MR_Box) ((MR_Unsigned) 4U)), ((MR_Box) (Y_5)));
  HeadVar__3_3 = mercury__pprint__f_43_43_2_f_0((MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Word) (&mercury__pprint_scalar_common_1[1]), ((MR_Box) (X_4)), ((MR_Box) (Var_6)));
  return HeadVar__3_3;
}

MR_Word MR_CALL 
mercury__pprint__label_2_f_0(
  MR_Word TypeClassInfo_for_doc_7,
  MR_String L_4,
  MR_Box X_5)
{
  MR_Word HeadVar__3_3;
  MR_Word Var_6;
  MR_Integer Var_8;
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
	Var_8  = Max;
}
  func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_doc_7, (MR_Integer) 0)), (MR_Integer) 5))));
  conv1_Var_6 = func_0(((MR_Box) (TypeClassInfo_for_doc_7)), ((MR_Box) (Var_8)), X_5);
  Var_6 = ((MR_Word) (conv1_Var_6));
  {
    HeadVar__3_3 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, HeadVar__3_3, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, HeadVar__3_3, 1) = ((MR_Box) (L_4));
    MR_hl_field(3, HeadVar__3_3, 2) = ((MR_Box) (Var_6));
  }
  return HeadVar__3_3;
}

MR_Word MR_CALL 
mercury__pprint__f_60_62_2_f_0(
  MR_Word X_4,
  MR_Word Y_5)
{
  MR_Word HeadVar__3_3;

  {
    HeadVar__3_3 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, HeadVar__3_3, 0) = ((MR_Box) (X_4));
    MR_hl_field(2, HeadVar__3_3, 1) = ((MR_Box) (Y_5));
  }
  return HeadVar__3_3;
}

MR_Word MR_CALL 
mercury__pprint__to_doc_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Box X_3)
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
  HeadVar__2_2 = mercury__pprint__to_doc_prio_3_f_0(TypeInfo_for_T_5, Var_4, (MR_Word) (((MR_Box) ((MR_Unsigned) 500U))), X_3);
  return HeadVar__2_2;
}

MR_Word MR_CALL 
mercury__pprint__to_doc_2_f_0(
  MR_Word tscc_proc_1_input_1_TypeInfo_for_T_7,
  MR_Integer tscc_proc_1_input_2_Depth_4,
  MR_Box tscc_proc_1_input_3_X_5)
{
  MR_Word tscc_proc_2_input_1_TypeInfo_for_T_18;
  MR_Integer tscc_proc_2_input_2_Depth_5;
  MR_Word tscc_proc_2_input_3_Priority_6;
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
  // proc 2 in TSCC: func pprint.to_doc_prio/3-0
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
    tscc_proc_2_input_3_Priority_6 = (MR_Word) (((MR_Box) ((MR_Unsigned) 500U)));
    tscc_proc_2_input_4_X_7 = next_value_of_tscc_proc_2_input_4_X_7;
    goto top_of_proc_2;
    tscc_output_1_HeadVar__3_3 = HeadVar__3_3;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word TypeInfo_for_T_18 = tscc_proc_2_input_1_TypeInfo_for_T_18;
    MR_Integer Depth_5 = tscc_proc_2_input_2_Depth_5;
    MR_Word Priority_6 = tscc_proc_2_input_3_Priority_6;
    MR_Box X_7 = tscc_proc_2_input_4_X_7;
    MR_Word HeadVar__4_4;
    MR_bool succeeded;
    MR_Word TypeInfo_19_19;
    MR_Word TypeInfo_16_42;
    MR_Word Var_8;
    MR_Word TypeCtorInfo_15_41;
    MR_Word TypeInfo_19_45;
    MR_Word ArgTypeDesc_34;
    MR_Word Var_36;
    MR_Word Var_38;
    MR_Word Var_44;
    MR_Word Var_46;
    MR_Box conv0_Var_8;

{
#define MR_PROC_LABEL mercury__pprint__to_doc_prio_3_f_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word TypeInfo;

	TypeInfo_for_T = TypeInfo_for_T_18 ;
	TypeInfo_In_1 = TypeInfo_for_T;
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
	Var_38  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__pprint__to_doc_prio_3_f_0

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc = Var_38 ;
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
	Var_46  = TypeCtorDesc;
	Var_36  = ArgTypes;
}
    succeeded = (Var_36 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgTypeDesc_34 = ((MR_Word) ((MR_hl_field(1, Var_36, (MR_Integer) 0))));
      Var_44 = ((MR_Word) ((MR_hl_field(1, Var_36, (MR_Integer) 1))));
      TypeInfo_19_45 = (MR_Word) (&mercury__pprint_scalar_common_1[8]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_45, ((MR_Box) ((MR_Unsigned) 0U)), ((MR_Box) (Var_44)));
      if (succeeded)
      {
{
#define MR_PROC_LABEL mercury__pprint__to_doc_prio_3_f_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_Out_1;
	MR_Word TypeInfo;

	TypeInfo = ArgTypeDesc_34 ;
		{

    TypeInfo_for_T = TypeInfo;


		;}
#undef MR_PROC_LABEL
	TypeInfo_Out_1 = TypeInfo_for_T;
	TypeInfo_19_19  = TypeInfo_for_T;
}
        TypeCtorInfo_15_41 = (MR_Word) (&mercury__term__term__type_ctor_info_var_1);
        {
          TypeInfo_16_42 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeInfo_16_42, 0) = ((MR_Box) (TypeCtorInfo_15_41));
          MR_hl_field(0, TypeInfo_16_42, 1) = ((MR_Box) (TypeInfo_19_19));
        }
        succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeInfo_for_T_18, TypeInfo_16_42, X_7, &conv0_Var_8);
        if (succeeded)
        {
          Var_8 = ((MR_Word) (conv0_Var_8));
          succeeded = MR_TRUE;
        }
      }
    }
    if (succeeded)
    {
      MR_Word TypeClassInfo_for_enum_52;
      MR_Integer Var_47;
      MR_Integer next_value_of_tscc_proc_1_input_2_Depth_4;
      MR_Box next_value_of_tscc_proc_1_input_3_X_5;

      {
        TypeClassInfo_for_enum_52 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeClassInfo_for_enum_52, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
        MR_hl_field(0, TypeClassInfo_for_enum_52, 1) = ((MR_Box) (TypeInfo_19_19));
        MR_hl_field(0, TypeClassInfo_for_enum_52, 2) = ((MR_Box) (TypeInfo_16_42));
      }
      Var_47 = mercury__enum__to_int_1_f_0(TypeClassInfo_for_enum_52, ((MR_Box) (Var_8)));
      // direct tailcall eliminated
      ;
      next_value_of_tscc_proc_1_input_2_Depth_4 = Depth_5;
      next_value_of_tscc_proc_1_input_3_X_5 = ((MR_Box) (Var_47));
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
        MR_Word TypeInfo_17_65;
        MR_Word Var_55;
        MR_Word Var_57;
        MR_Word Var_58;
        MR_Integer Var_59;
        MR_Word Var_61;

        mercury__private_builtin__type_info_from_typeclass_info_3_p_0((MR_Word) (&mercury__pprint_scalar_common_1[2]), (MR_Integer) 1, &TypeInfo_17_65);
        Var_59 = (MR_Integer) ((MR_Unsigned) Depth_5 - (MR_Unsigned) 1);
        Var_61 = mercury__sparse_bitset__to_sorted_list_1_f_0((MR_Word) (&mercury__pprint_scalar_common_1[2]), SparseBitsetInt_9);
        Var_58 = mercury__pprint__list_to_doc_2_f_0(TypeInfo_17_65, Var_59, Var_61);
        Var_57 = mercury__pprint__parentheses_1_f_0((MR_Word) (&mercury__pprint_scalar_common_1[1]), ((MR_Box) (Var_58)));
        Var_55 = mercury__pprint__f_43_43_2_f_0((MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Word) (&mercury__pprint_scalar_common_1[1]), ((MR_Box) ((MR_String) "sparse_bitset")), ((MR_Box) (Var_57)));
        HeadVar__4_4 = mercury__pprint__group_1_f_0((MR_Word) (&mercury__pprint_scalar_common_1[1]), ((MR_Box) (Var_55)));
      }
      else
      {
        MR_Word TypeInfo_21_21;
        MR_Word SparseBitsetVar_10;
        MR_Word TypeInfo_for_T2_68;
        MR_Word A_66;
        MR_Box conv2_A_66;

        succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeInfo_for_T_18, (MR_Word) (&mercury__pprint_scalar_common_1[7]), X_7, &conv2_A_66);
        if (succeeded)
        {
          A_66 = ((MR_Word) (conv2_A_66));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          TypeInfo_for_T2_68 = (MR_Word) (&mercury__term__term__type_ctor_info_generic_0);
          SparseBitsetVar_10 = A_66;
          TypeInfo_21_21 = TypeInfo_for_T2_68;
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word TypeInfo_23_23;
          MR_Word TypeClassInfo_for_uenum_25;
          MR_Word TypeInfo_17_81;
          MR_Word Var_71;
          MR_Word Var_73;
          MR_Word Var_74;
          MR_Integer Var_75;
          MR_Word Var_77;

          {
            TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, TypeInfo_23_23, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
            MR_hl_field(0, TypeInfo_23_23, 1) = ((MR_Box) (TypeInfo_21_21));
          }
          {
            TypeClassInfo_for_uenum_25 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, TypeClassInfo_for_uenum_25, 0) = ((MR_Box) (base_typeclass_info_enum__uenum__arity1__term__var__arity1__));
            MR_hl_field(0, TypeClassInfo_for_uenum_25, 1) = ((MR_Box) (TypeInfo_21_21));
            MR_hl_field(0, TypeClassInfo_for_uenum_25, 2) = ((MR_Box) (TypeInfo_23_23));
          }
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_uenum_25, (MR_Integer) 1, &TypeInfo_17_81);
          Var_75 = (MR_Integer) ((MR_Unsigned) Depth_5 - (MR_Unsigned) 1);
          Var_77 = mercury__sparse_bitset__to_sorted_list_1_f_0(TypeClassInfo_for_uenum_25, SparseBitsetVar_10);
          Var_74 = mercury__pprint__list_to_doc_2_f_0(TypeInfo_17_81, Var_75, Var_77);
          Var_73 = mercury__pprint__parentheses_1_f_0((MR_Word) (&mercury__pprint_scalar_common_1[1]), ((MR_Box) (Var_74)));
          Var_71 = mercury__pprint__f_43_43_2_f_0((MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Word) (&mercury__pprint_scalar_common_1[1]), ((MR_Box) ((MR_String) "sparse_bitset")), ((MR_Box) (Var_73)));
          HeadVar__4_4 = mercury__pprint__group_1_f_0((MR_Word) (&mercury__pprint_scalar_common_1[1]), ((MR_Box) (Var_71)));
        }
        else
        {
          MR_Word TypeInfo_26_26;
          MR_Word List_11;
          MR_Word TypeCtorInfo_15_89;
          MR_Word TypeInfo_16_90;
          MR_Word TypeInfo_19_93;
          MR_Word ArgTypeDesc_82;
          MR_Word Var_84;
          MR_Word Var_86;
          MR_Word Var_92;
          MR_Word Var_94;
          MR_Box conv3_List_11;

{
#define MR_PROC_LABEL mercury__pprint__to_doc_prio_3_f_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word TypeInfo;

	TypeInfo_for_T = TypeInfo_for_T_18 ;
	TypeInfo_In_1 = TypeInfo_for_T;
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
	Var_86  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__pprint__to_doc_prio_3_f_0

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc = Var_86 ;
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
	Var_94  = TypeCtorDesc;
	Var_84  = ArgTypes;
}
          succeeded = (Var_84 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            ArgTypeDesc_82 = ((MR_Word) ((MR_hl_field(1, Var_84, (MR_Integer) 0))));
            Var_92 = ((MR_Word) ((MR_hl_field(1, Var_84, (MR_Integer) 1))));
            TypeInfo_19_93 = (MR_Word) (&mercury__pprint_scalar_common_1[8]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_93, ((MR_Box) ((MR_Unsigned) 0U)), ((MR_Box) (Var_92)));
            if (succeeded)
            {
{
#define MR_PROC_LABEL mercury__pprint__to_doc_prio_3_f_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_Out_1;
	MR_Word TypeInfo;

	TypeInfo = ArgTypeDesc_82 ;
		{

    TypeInfo_for_T = TypeInfo;


		;}
#undef MR_PROC_LABEL
	TypeInfo_Out_1 = TypeInfo_for_T;
	TypeInfo_26_26  = TypeInfo_for_T;
}
              TypeCtorInfo_15_89 = (MR_Word) (&mercury__list__list__type_ctor_info_list_1);
              {
                TypeInfo_16_90 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, TypeInfo_16_90, 0) = ((MR_Box) (TypeCtorInfo_15_89));
                MR_hl_field(0, TypeInfo_16_90, 1) = ((MR_Box) (TypeInfo_26_26));
              }
              succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeInfo_for_T_18, TypeInfo_16_90, X_7, &conv3_List_11);
              if (succeeded)
              {
                List_11 = ((MR_Word) (conv3_List_11));
                succeeded = MR_TRUE;
              }
            }
          }
          if (succeeded)
            HeadVar__4_4 = mercury__pprint__list_to_doc_2_f_0(TypeInfo_26_26, Depth_5, List_11);
          else
          {
            MR_Word TypeInfo_27_27;
            MR_ArrayPtr Array_12;
            MR_ArrayPtr conv4_Array_12;

            succeeded = mercury__array__dynamic_cast_to_array_2_p_0(TypeInfo_for_T_18, &TypeInfo_27_27, X_7, &conv4_Array_12);
            if (succeeded)
            {
              Array_12 = (MR_ArrayPtr) (conv4_Array_12);
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
                MR_String Var_98;
                MR_Integer _Arity_95;

                mercury__deconstruct__functor_4_p_1(TypeInfo_for_T_18, X_7, (MR_Integer) 1, &Var_98, &_Arity_95);
                succeeded = (strcmp((MR_String) "{}", Var_98) == 0);
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

MR_Word MR_CALL 
mercury__pprint__to_doc_prio_3_f_0(
  MR_Word tscc_proc_2_input_1_TypeInfo_for_T_18,
  MR_Integer tscc_proc_2_input_2_Depth_5,
  MR_Word tscc_proc_2_input_3_Priority_6,
  MR_Box tscc_proc_2_input_4_X_7)
{
  MR_Word tscc_proc_1_input_1_TypeInfo_for_T_7;
  MR_Integer tscc_proc_1_input_2_Depth_4;
  MR_Box tscc_proc_1_input_3_X_5;
  MR_Word tscc_output_1_HeadVar__3_3;

  // The code for TSCC PROC 2: func pprint.to_doc_prio/3-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: func pprint.to_doc/2-0
  ;
  // proc 2 in TSCC: func pprint.to_doc_prio/3-0
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
    tscc_proc_2_input_3_Priority_6 = (MR_Word) (((MR_Box) ((MR_Unsigned) 500U)));
    tscc_proc_2_input_4_X_7 = next_value_of_tscc_proc_2_input_4_X_7;
    goto top_of_proc_2;
    tscc_output_1_HeadVar__3_3 = HeadVar__3_3;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word TypeInfo_for_T_18 = tscc_proc_2_input_1_TypeInfo_for_T_18;
    MR_Integer Depth_5 = tscc_proc_2_input_2_Depth_5;
    MR_Word Priority_6 = tscc_proc_2_input_3_Priority_6;
    MR_Box X_7 = tscc_proc_2_input_4_X_7;
    MR_Word HeadVar__4_4;
    MR_bool succeeded;
    MR_Word TypeInfo_19_19;
    MR_Word TypeInfo_16_42;
    MR_Word Var_8;
    MR_Word TypeCtorInfo_15_41;
    MR_Word TypeInfo_19_45;
    MR_Word ArgTypeDesc_34;
    MR_Word Var_36;
    MR_Word Var_38;
    MR_Word Var_44;
    MR_Word Var_46;
    MR_Box conv0_Var_8;

{
#define MR_PROC_LABEL mercury__pprint__to_doc_prio_3_f_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word TypeInfo;

	TypeInfo_for_T = TypeInfo_for_T_18 ;
	TypeInfo_In_1 = TypeInfo_for_T;
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
	Var_38  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__pprint__to_doc_prio_3_f_0

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc = Var_38 ;
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
	Var_46  = TypeCtorDesc;
	Var_36  = ArgTypes;
}
    succeeded = (Var_36 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgTypeDesc_34 = ((MR_Word) ((MR_hl_field(1, Var_36, (MR_Integer) 0))));
      Var_44 = ((MR_Word) ((MR_hl_field(1, Var_36, (MR_Integer) 1))));
      TypeInfo_19_45 = (MR_Word) (&mercury__pprint_scalar_common_1[8]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_45, ((MR_Box) ((MR_Unsigned) 0U)), ((MR_Box) (Var_44)));
      if (succeeded)
      {
{
#define MR_PROC_LABEL mercury__pprint__to_doc_prio_3_f_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_Out_1;
	MR_Word TypeInfo;

	TypeInfo = ArgTypeDesc_34 ;
		{

    TypeInfo_for_T = TypeInfo;


		;}
#undef MR_PROC_LABEL
	TypeInfo_Out_1 = TypeInfo_for_T;
	TypeInfo_19_19  = TypeInfo_for_T;
}
        TypeCtorInfo_15_41 = (MR_Word) (&mercury__term__term__type_ctor_info_var_1);
        {
          TypeInfo_16_42 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeInfo_16_42, 0) = ((MR_Box) (TypeCtorInfo_15_41));
          MR_hl_field(0, TypeInfo_16_42, 1) = ((MR_Box) (TypeInfo_19_19));
        }
        succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeInfo_for_T_18, TypeInfo_16_42, X_7, &conv0_Var_8);
        if (succeeded)
        {
          Var_8 = ((MR_Word) (conv0_Var_8));
          succeeded = MR_TRUE;
        }
      }
    }
    if (succeeded)
    {
      MR_Word TypeClassInfo_for_enum_52;
      MR_Integer Var_47;
      MR_Integer next_value_of_tscc_proc_1_input_2_Depth_4;
      MR_Box next_value_of_tscc_proc_1_input_3_X_5;

      {
        TypeClassInfo_for_enum_52 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeClassInfo_for_enum_52, 0) = ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__));
        MR_hl_field(0, TypeClassInfo_for_enum_52, 1) = ((MR_Box) (TypeInfo_19_19));
        MR_hl_field(0, TypeClassInfo_for_enum_52, 2) = ((MR_Box) (TypeInfo_16_42));
      }
      Var_47 = mercury__enum__to_int_1_f_0(TypeClassInfo_for_enum_52, ((MR_Box) (Var_8)));
      // direct tailcall eliminated
      ;
      next_value_of_tscc_proc_1_input_2_Depth_4 = Depth_5;
      next_value_of_tscc_proc_1_input_3_X_5 = ((MR_Box) (Var_47));
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
        MR_Word TypeInfo_17_65;
        MR_Word Var_55;
        MR_Word Var_57;
        MR_Word Var_58;
        MR_Integer Var_59;
        MR_Word Var_61;

        mercury__private_builtin__type_info_from_typeclass_info_3_p_0((MR_Word) (&mercury__pprint_scalar_common_1[2]), (MR_Integer) 1, &TypeInfo_17_65);
        Var_59 = (MR_Integer) ((MR_Unsigned) Depth_5 - (MR_Unsigned) 1);
        Var_61 = mercury__sparse_bitset__to_sorted_list_1_f_0((MR_Word) (&mercury__pprint_scalar_common_1[2]), SparseBitsetInt_9);
        Var_58 = mercury__pprint__list_to_doc_2_f_0(TypeInfo_17_65, Var_59, Var_61);
        Var_57 = mercury__pprint__parentheses_1_f_0((MR_Word) (&mercury__pprint_scalar_common_1[1]), ((MR_Box) (Var_58)));
        Var_55 = mercury__pprint__f_43_43_2_f_0((MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Word) (&mercury__pprint_scalar_common_1[1]), ((MR_Box) ((MR_String) "sparse_bitset")), ((MR_Box) (Var_57)));
        HeadVar__4_4 = mercury__pprint__group_1_f_0((MR_Word) (&mercury__pprint_scalar_common_1[1]), ((MR_Box) (Var_55)));
      }
      else
      {
        MR_Word TypeInfo_21_21;
        MR_Word SparseBitsetVar_10;
        MR_Word TypeInfo_for_T2_68;
        MR_Word A_66;
        MR_Box conv2_A_66;

        succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeInfo_for_T_18, (MR_Word) (&mercury__pprint_scalar_common_1[7]), X_7, &conv2_A_66);
        if (succeeded)
        {
          A_66 = ((MR_Word) (conv2_A_66));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          TypeInfo_for_T2_68 = (MR_Word) (&mercury__term__term__type_ctor_info_generic_0);
          SparseBitsetVar_10 = A_66;
          TypeInfo_21_21 = TypeInfo_for_T2_68;
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word TypeInfo_23_23;
          MR_Word TypeClassInfo_for_uenum_25;
          MR_Word TypeInfo_17_81;
          MR_Word Var_71;
          MR_Word Var_73;
          MR_Word Var_74;
          MR_Integer Var_75;
          MR_Word Var_77;

          {
            TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, TypeInfo_23_23, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
            MR_hl_field(0, TypeInfo_23_23, 1) = ((MR_Box) (TypeInfo_21_21));
          }
          {
            TypeClassInfo_for_uenum_25 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, TypeClassInfo_for_uenum_25, 0) = ((MR_Box) (base_typeclass_info_enum__uenum__arity1__term__var__arity1__));
            MR_hl_field(0, TypeClassInfo_for_uenum_25, 1) = ((MR_Box) (TypeInfo_21_21));
            MR_hl_field(0, TypeClassInfo_for_uenum_25, 2) = ((MR_Box) (TypeInfo_23_23));
          }
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_uenum_25, (MR_Integer) 1, &TypeInfo_17_81);
          Var_75 = (MR_Integer) ((MR_Unsigned) Depth_5 - (MR_Unsigned) 1);
          Var_77 = mercury__sparse_bitset__to_sorted_list_1_f_0(TypeClassInfo_for_uenum_25, SparseBitsetVar_10);
          Var_74 = mercury__pprint__list_to_doc_2_f_0(TypeInfo_17_81, Var_75, Var_77);
          Var_73 = mercury__pprint__parentheses_1_f_0((MR_Word) (&mercury__pprint_scalar_common_1[1]), ((MR_Box) (Var_74)));
          Var_71 = mercury__pprint__f_43_43_2_f_0((MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Word) (&mercury__pprint_scalar_common_1[1]), ((MR_Box) ((MR_String) "sparse_bitset")), ((MR_Box) (Var_73)));
          HeadVar__4_4 = mercury__pprint__group_1_f_0((MR_Word) (&mercury__pprint_scalar_common_1[1]), ((MR_Box) (Var_71)));
        }
        else
        {
          MR_Word TypeInfo_26_26;
          MR_Word List_11;
          MR_Word TypeCtorInfo_15_89;
          MR_Word TypeInfo_16_90;
          MR_Word TypeInfo_19_93;
          MR_Word ArgTypeDesc_82;
          MR_Word Var_84;
          MR_Word Var_86;
          MR_Word Var_92;
          MR_Word Var_94;
          MR_Box conv3_List_11;

{
#define MR_PROC_LABEL mercury__pprint__to_doc_prio_3_f_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word TypeInfo;

	TypeInfo_for_T = TypeInfo_for_T_18 ;
	TypeInfo_In_1 = TypeInfo_for_T;
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
	Var_86  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__pprint__to_doc_prio_3_f_0

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc = Var_86 ;
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
	Var_94  = TypeCtorDesc;
	Var_84  = ArgTypes;
}
          succeeded = (Var_84 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            ArgTypeDesc_82 = ((MR_Word) ((MR_hl_field(1, Var_84, (MR_Integer) 0))));
            Var_92 = ((MR_Word) ((MR_hl_field(1, Var_84, (MR_Integer) 1))));
            TypeInfo_19_93 = (MR_Word) (&mercury__pprint_scalar_common_1[8]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_93, ((MR_Box) ((MR_Unsigned) 0U)), ((MR_Box) (Var_92)));
            if (succeeded)
            {
{
#define MR_PROC_LABEL mercury__pprint__to_doc_prio_3_f_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_Out_1;
	MR_Word TypeInfo;

	TypeInfo = ArgTypeDesc_82 ;
		{

    TypeInfo_for_T = TypeInfo;


		;}
#undef MR_PROC_LABEL
	TypeInfo_Out_1 = TypeInfo_for_T;
	TypeInfo_26_26  = TypeInfo_for_T;
}
              TypeCtorInfo_15_89 = (MR_Word) (&mercury__list__list__type_ctor_info_list_1);
              {
                TypeInfo_16_90 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, TypeInfo_16_90, 0) = ((MR_Box) (TypeCtorInfo_15_89));
                MR_hl_field(0, TypeInfo_16_90, 1) = ((MR_Box) (TypeInfo_26_26));
              }
              succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeInfo_for_T_18, TypeInfo_16_90, X_7, &conv3_List_11);
              if (succeeded)
              {
                List_11 = ((MR_Word) (conv3_List_11));
                succeeded = MR_TRUE;
              }
            }
          }
          if (succeeded)
            HeadVar__4_4 = mercury__pprint__list_to_doc_2_f_0(TypeInfo_26_26, Depth_5, List_11);
          else
          {
            MR_Word TypeInfo_27_27;
            MR_ArrayPtr Array_12;
            MR_ArrayPtr conv4_Array_12;

            succeeded = mercury__array__dynamic_cast_to_array_2_p_0(TypeInfo_for_T_18, &TypeInfo_27_27, X_7, &conv4_Array_12);
            if (succeeded)
            {
              Array_12 = (MR_ArrayPtr) (conv4_Array_12);
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
                MR_String Var_98;
                MR_Integer _Arity_95;

                mercury__deconstruct__functor_4_p_1(TypeInfo_for_T_18, X_7, (MR_Integer) 1, &Var_98, &_Arity_95);
                succeeded = (strcmp((MR_String) "{}", Var_98) == 0);
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

static MR_Word MR_CALL 
mercury__pprint__univ_to_doc_3_f_0(
  MR_Integer Depth_5,
  MR_Word Priority_6,
  MR_Word Univ_7)
{
  MR_Word HeadVar__4_4;
  MR_Word TypeInfo_9_9 = ((MR_Word) ((MR_hl_field(0, Univ_7, (MR_Integer) 0))));
  MR_Box Var_8 = (MR_hl_field(0, Univ_7, (MR_Integer) 1));

  HeadVar__4_4 = mercury__pprint__to_doc_prio_3_f_0(TypeInfo_9_9, Depth_5, Priority_6, Var_8);
  return HeadVar__4_4;
}

static void MR_CALL 
mercury__pprint__f_76_67_77_67_95_95_102_117_110_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_50_49_95_95_91_51_44_32_52_93_95_48_95_95_49_3_p_0(
  MR_Word Var_12,
  MR_Integer Var_13,
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
      MR_Box Var_6 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0));
      MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_8;
      MR_Word * AddrSCCcallarg_9_16;
      MR_Word HeadVar__3_18;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word * next_value_of_AddrOfHeadVar__3_17;

      Var_8 = mercury__pprint__to_doc_prio_3_f_0(Var_12, Var_13, (MR_Word) (((MR_Box) ((MR_Unsigned) 500U))), Var_6);
      {
        HeadVar__3_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__3_18, 0) = ((MR_Box) (Var_8));
        MR_hl_field(1, HeadVar__3_18, 1) = NULL;
      }
      AddrSCCcallarg_9_16 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_18, (MR_Integer) 1)));
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

static MR_Word MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_50_49_95_95_91_51_44_32_52_93_95_48_2_f_in__list_0(
  MR_Word Var_12,
  MR_Integer Var_13,
  MR_Word HeadVar__2_2)
{
  MR_Word HeadVar__3_3;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Box Var_6 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0));
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Var_8;
    MR_Word * AddrSCCcallarg_9_16;

    Var_8 = mercury__pprint__to_doc_prio_3_f_0(Var_12, Var_13, (MR_Word) (((MR_Box) ((MR_Unsigned) 500U))), Var_6);
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (Var_8));
      MR_hl_field(1, HeadVar__3_3, 1) = NULL;
    }
    AddrSCCcallarg_9_16 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1)));
    mercury__pprint__f_76_67_77_67_95_95_102_117_110_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_50_49_95_95_91_51_44_32_52_93_95_48_95_95_49_3_p_0(Var_12, Var_13, Var_7, AddrSCCcallarg_9_16);
  }
  return HeadVar__3_3;
}

static MR_Word MR_CALL 
mercury__pprint__robdd_to_doc_2_f_0(
  MR_Word TypeInfo_for_T_12,
  MR_Integer Depth_4,
  MR_Word R_5)
{
  MR_Word HeadVar__3_3;
  MR_Word TypeInfo_16_16;
  MR_Word TypeInfo_18_18;
  MR_Word Var_7;
  MR_Word Var_8;
  MR_Integer Var_9;
  MR_Word Var_11;
  MR_Word Var_19;
  MR_Word Var_21;
  MR_Integer Var_22;
  MR_Word Var_25;
  MR_Word Var_31;
  MR_Integer Var_32;
  MR_Word Var_39;
  MR_Word Var_40;
  MR_Integer Var_41;
  MR_Integer Var_42;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);
  MR_Box conv1_Var_31;
  MR_Box MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box);
  MR_Box conv3_Var_39;
  MR_Box MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box);
  MR_Box conv5_Var_40;

  {
    TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_16_16, 0) = ((MR_Box) (&mercury__robdd__robdd__type_ctor_info_literal_1));
    MR_hl_field(0, TypeInfo_16_16, 1) = ((MR_Box) (TypeInfo_for_T_12));
  }
  {
    TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_18_18, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
    MR_hl_field(0, TypeInfo_18_18, 1) = ((MR_Box) (TypeInfo_16_16));
  }
  Var_9 = (MR_Integer) ((MR_Unsigned) Depth_4 - (MR_Unsigned) 1);
  Var_11 = mercury__robdd__dnf_1_f_0(TypeInfo_for_T_12, R_5);
  Var_22 = (MR_Integer) ((MR_Unsigned) Var_9 - (MR_Unsigned) 1);
  Var_25 = mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_50_49_95_95_91_51_44_32_52_93_95_48_2_f_in__list_0(TypeInfo_18_18, Var_22, (MR_Word) (Var_11));
  Var_21 = mercury__pprint__packed_3_f_0((MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Word) (&mercury__pprint_scalar_common_1[1]), Var_22, ((MR_Box) ((MR_String) ", ")), Var_25);
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
	Var_32  = Max;
}
  func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
  conv1_Var_31 = func_0(((MR_Box) ((MR_Word) (&mercury__pprint_scalar_common_1[1]))), ((MR_Box) (Var_32)), ((MR_Box) (Var_21)));
  Var_31 = ((MR_Word) (conv1_Var_31));
  {
    Var_19 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_19, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_19, 1) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(3, Var_19, 2) = ((MR_Box) (Var_31));
  }
  Var_8 = mercury__pprint__bracketed_3_f_0((MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Word) (&mercury__pprint_scalar_common_1[1]), ((MR_Box) ((MR_String) "[")), ((MR_Box) ((MR_String) "]")), ((MR_Box) (Var_19)));
  Var_7 = mercury__pprint__bracketed_3_f_0((MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Word) (&mercury__pprint_scalar_common_1[1]), ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_String) ")")), ((MR_Box) (Var_8)));
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
	Var_41  = Max;
}
  func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
  conv3_Var_39 = func_2(((MR_Box) ((MR_Word) (&mercury__pprint_scalar_common_1[0]))), ((MR_Box) (Var_41)), ((MR_Box) ((MR_String) "robdd_dnf")));
  Var_39 = ((MR_Word) (conv3_Var_39));
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
	Var_42  = Max;
}
  func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
  conv5_Var_40 = func_4(((MR_Box) ((MR_Word) (&mercury__pprint_scalar_common_1[1]))), ((MR_Box) (Var_42)), ((MR_Box) (Var_7)));
  Var_40 = ((MR_Word) (conv5_Var_40));
  {
    HeadVar__3_3 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, HeadVar__3_3, 0) = ((MR_Box) (Var_39));
    MR_hl_field(2, HeadVar__3_3, 1) = ((MR_Box) (Var_40));
  }
  return HeadVar__3_3;
}

static MR_Word MR_CALL 
mercury__pprint__map_pair_to_doc_2_f_0(
  MR_Word TypeInfo_for_T1_21,
  MR_Word TypeInfo_for_T2_22,
  MR_Integer Depth_4,
  MR_Word HeadVar__2_2)
{
  MR_Word HeadVar__3_3;
  MR_Box Key_5 = (MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0));
  MR_Box Value_6 = (MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1));
  MR_Word Var_7;
  MR_Integer Var_8 = (MR_Integer) ((MR_Unsigned) Depth_4 - (MR_Unsigned) 1);
  MR_Word Var_10;
  MR_Word Var_13;
  MR_Word Var_14;
  MR_Word Var_16;
  MR_Word Var_18;
  MR_Integer Var_19;
  MR_Word Var_28;
  MR_Integer Var_29;
  MR_Word Var_30;
  MR_Integer Var_31;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);
  MR_Box conv1_Var_28;
  MR_Box MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box);
  MR_Box conv3_Var_30;

  Var_7 = mercury__pprint__to_doc_prio_3_f_0(TypeInfo_for_T1_21, Var_8, (MR_Word) (((MR_Box) ((MR_Unsigned) 500U))), Key_5);
  Var_19 = (MR_Integer) ((MR_Unsigned) Depth_4 - (MR_Unsigned) 1);
  Var_18 = mercury__pprint__to_doc_prio_3_f_0(TypeInfo_for_T2_22, Var_19, (MR_Word) (((MR_Box) ((MR_Unsigned) 500U))), Value_6);
  Var_16 = mercury__pprint__f_43_43_2_f_0((MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Word) (&mercury__pprint_scalar_common_1[1]), ((MR_Box) ((MR_Unsigned) 4U)), ((MR_Box) (Var_18)));
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
	Var_29  = Max;
}
  func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
  conv1_Var_28 = func_0(((MR_Box) ((MR_Word) (&mercury__pprint_scalar_common_1[1]))), ((MR_Box) (Var_29)), ((MR_Box) (Var_16)));
  Var_28 = ((MR_Word) (conv1_Var_28));
  {
    Var_14 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_14, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_14, 1) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(3, Var_14, 2) = ((MR_Box) (Var_28));
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
	Var_31  = Max;
}
  func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
  conv3_Var_30 = func_2(((MR_Box) ((MR_Word) (&mercury__pprint_scalar_common_1[1]))), ((MR_Box) (Var_31)), ((MR_Box) (Var_14)));
  Var_30 = ((MR_Word) (conv3_Var_30));
  {
    Var_13 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_13, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_13, 1) = ((MR_Box) (Var_30));
  }
  Var_10 = mercury__pprint__f_43_43_2_f_0((MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Word) (&mercury__pprint_scalar_common_1[1]), ((MR_Box) (MR_mkword(1, &mercury__pprint_scalar_common_5[9]))), ((MR_Box) (Var_13)));
  HeadVar__3_3 = mercury__pprint__f_43_43_2_f_0((MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Word) (&mercury__pprint_scalar_common_1[1]), ((MR_Box) (Var_7)), ((MR_Box) (Var_10)));
  return HeadVar__3_3;
}

static MR_Word MR_CALL 
mercury__pprint__map_to_doc_2_f_0(
  MR_Word TypeInfo_for_T1_16,
  MR_Word TypeInfo_for_T2_17,
  MR_Integer Depth_4,
  MR_Word X_5)
{
  MR_Word Doc_6;
  MR_Word TypeInfo_21_21;
  MR_Word KVs_7;
  MR_Word Var_9;
  MR_Word Var_10;
  MR_Word Var_12;
  MR_Word Var_13;
  MR_Integer Var_14;
  MR_Word Var_27;
  MR_Word Var_29;
  MR_Integer Var_30;
  MR_Word Var_33;
  MR_Word Var_39;
  MR_Integer Var_40;
  MR_Word Var_47;
  MR_Word Var_48;
  MR_Integer Var_49;
  MR_Integer Var_50;
  MR_Word Var_51;
  MR_Integer Var_52;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);
  MR_Box conv1_Var_39;
  MR_Box MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box);
  MR_Box conv3_Var_47;
  MR_Box MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box);
  MR_Box conv5_Var_48;
  MR_Box MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box);
  MR_Box conv7_Var_51;

  {
    TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_21_21, 0) = ((MR_Box) (&mercury__pprint__pprint__type_ctor_info_map_pair_2));
    MR_hl_field(0, TypeInfo_21_21, 1) = ((MR_Box) (TypeInfo_for_T1_16));
    MR_hl_field(0, TypeInfo_21_21, 2) = ((MR_Box) (TypeInfo_for_T2_17));
  }
  mercury__tree234__tree234_to_assoc_list_acc_3_p_0(TypeInfo_for_T1_16, TypeInfo_for_T2_17, X_5, (MR_Word) ((MR_Unsigned) 0U), &Var_9);
  KVs_7 = mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_93_95_48_2_f_in__list_0(Var_9);
  Var_14 = (MR_Integer) ((MR_Unsigned) Depth_4 - (MR_Unsigned) 1);
  Var_30 = (MR_Integer) ((MR_Unsigned) Var_14 - (MR_Unsigned) 1);
  Var_33 = mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_50_49_95_95_91_51_44_32_52_93_95_48_2_f_in__list_0(TypeInfo_21_21, Var_30, (MR_Word) (KVs_7));
  Var_29 = mercury__pprint__packed_3_f_0((MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Word) (&mercury__pprint_scalar_common_1[1]), Var_30, ((MR_Box) ((MR_String) ", ")), Var_33);
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
	Var_40  = Max;
}
  func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
  conv1_Var_39 = func_0(((MR_Box) ((MR_Word) (&mercury__pprint_scalar_common_1[1]))), ((MR_Box) (Var_40)), ((MR_Box) (Var_29)));
  Var_39 = ((MR_Word) (conv1_Var_39));
  {
    Var_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_27, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_27, 1) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(3, Var_27, 2) = ((MR_Box) (Var_39));
  }
  Var_13 = mercury__pprint__bracketed_3_f_0((MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Word) (&mercury__pprint_scalar_common_1[1]), ((MR_Box) ((MR_String) "[")), ((MR_Box) ((MR_String) "]")), ((MR_Box) (Var_27)));
  Var_12 = mercury__pprint__bracketed_3_f_0((MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Word) (&mercury__pprint_scalar_common_1[1]), ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_String) ")")), ((MR_Box) (Var_13)));
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
	Var_49  = Max;
}
  func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
  conv3_Var_47 = func_2(((MR_Box) ((MR_Word) (&mercury__pprint_scalar_common_1[0]))), ((MR_Box) (Var_49)), ((MR_Box) ((MR_String) "map")));
  Var_47 = ((MR_Word) (conv3_Var_47));
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
	Var_50  = Max;
}
  func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
  conv5_Var_48 = func_4(((MR_Box) ((MR_Word) (&mercury__pprint_scalar_common_1[1]))), ((MR_Box) (Var_50)), ((MR_Box) (Var_12)));
  Var_48 = ((MR_Word) (conv5_Var_48));
  {
    Var_10 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_10, 0) = ((MR_Box) (Var_47));
    MR_hl_field(2, Var_10, 1) = ((MR_Box) (Var_48));
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
	Var_52  = Max;
}
  func_6 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
  conv7_Var_51 = func_6(((MR_Box) ((MR_Word) (&mercury__pprint_scalar_common_1[1]))), ((MR_Box) (Var_52)), ((MR_Box) (Var_10)));
  Var_51 = ((MR_Word) (conv7_Var_51));
  {
    Doc_6 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Doc_6, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Doc_6, 1) = ((MR_Box) (Var_51));
  }
  return Doc_6;
}

static MR_Word MR_CALL 
mercury__pprint__version_array_to_doc_2_f_0(
  MR_Word TypeInfo_for_T_13,
  MR_Integer Depth_4,
  MR_Box A_5)
{
  MR_Word HeadVar__3_3;
  MR_Word Var_6;
  MR_Word Var_8;
  MR_Word Var_9;
  MR_Integer Var_10 = (MR_Integer) ((MR_Unsigned) Depth_4 - (MR_Unsigned) 1);
  MR_Word Var_12;
  MR_Integer Var_20;
  MR_Integer Var_22;
  MR_Word Var_24;
  MR_Word Var_26;
  MR_Integer Var_27;
  MR_Word Var_30;
  MR_Word Var_36;
  MR_Integer Var_37;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Integer Var_46;
  MR_Integer Var_47;
  MR_Word Var_48;
  MR_Integer Var_49;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);
  MR_Box conv1_Var_36;
  MR_Box MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box);
  MR_Box conv3_Var_44;
  MR_Box MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box);
  MR_Box conv5_Var_45;
  MR_Box MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box);
  MR_Box conv7_Var_48;

{
#define MR_PROC_LABEL mercury__pprint__version_array_to_doc_2_f_0

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *)A_5 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Var_22  = N;
}
  Var_20 = (MR_Integer) ((MR_Unsigned) Var_22 - (MR_Unsigned) 1);
  mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_50_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_5_p_in__version_array_0(A_5, Var_20, (MR_Word) ((MR_Unsigned) 0U), &Var_12);
  Var_27 = (MR_Integer) ((MR_Unsigned) Var_10 - (MR_Unsigned) 1);
  Var_30 = mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_50_49_95_95_91_51_44_32_52_93_95_48_2_f_in__list_0(TypeInfo_for_T_13, Var_27, Var_12);
  Var_26 = mercury__pprint__packed_3_f_0((MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Word) (&mercury__pprint_scalar_common_1[1]), Var_27, ((MR_Box) ((MR_String) ", ")), Var_30);
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
	Var_37  = Max;
}
  func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
  conv1_Var_36 = func_0(((MR_Box) ((MR_Word) (&mercury__pprint_scalar_common_1[1]))), ((MR_Box) (Var_37)), ((MR_Box) (Var_26)));
  Var_36 = ((MR_Word) (conv1_Var_36));
  {
    Var_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_24, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_24, 1) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(3, Var_24, 2) = ((MR_Box) (Var_36));
  }
  Var_9 = mercury__pprint__bracketed_3_f_0((MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Word) (&mercury__pprint_scalar_common_1[1]), ((MR_Box) ((MR_String) "[")), ((MR_Box) ((MR_String) "]")), ((MR_Box) (Var_24)));
  Var_8 = mercury__pprint__bracketed_3_f_0((MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Word) (&mercury__pprint_scalar_common_1[1]), ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_String) ")")), ((MR_Box) (Var_9)));
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
	Var_46  = Max;
}
  func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
  conv3_Var_44 = func_2(((MR_Box) ((MR_Word) (&mercury__pprint_scalar_common_1[0]))), ((MR_Box) (Var_46)), ((MR_Box) ((MR_String) "version_array")));
  Var_44 = ((MR_Word) (conv3_Var_44));
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
	Var_47  = Max;
}
  func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
  conv5_Var_45 = func_4(((MR_Box) ((MR_Word) (&mercury__pprint_scalar_common_1[1]))), ((MR_Box) (Var_47)), ((MR_Box) (Var_8)));
  Var_45 = ((MR_Word) (conv5_Var_45));
  {
    Var_6 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_6, 0) = ((MR_Box) (Var_44));
    MR_hl_field(2, Var_6, 1) = ((MR_Box) (Var_45));
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
	Var_49  = Max;
}
  func_6 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
  conv7_Var_48 = func_6(((MR_Box) ((MR_Word) (&mercury__pprint_scalar_common_1[1]))), ((MR_Box) (Var_49)), ((MR_Box) (Var_6)));
  Var_48 = ((MR_Word) (conv7_Var_48));
  {
    HeadVar__3_3 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, HeadVar__3_3, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, HeadVar__3_3, 1) = ((MR_Box) (Var_48));
  }
  return HeadVar__3_3;
}

static MR_Word MR_CALL 
mercury__pprint__array_to_doc_2_f_0(
  MR_Word TypeInfo_for_T_13,
  MR_Integer Depth_4,
  MR_ArrayPtr A_5)
{
  MR_Word HeadVar__3_3;
  MR_Word Var_6;
  MR_Word Var_8;
  MR_Word Var_9;
  MR_Integer Var_10 = (MR_Integer) ((MR_Unsigned) Depth_4 - (MR_Unsigned) 1);
  MR_Word Var_12;
  MR_Word Var_16;
  MR_Word Var_18;
  MR_Integer Var_19;
  MR_Word Var_22;
  MR_Word Var_28;
  MR_Integer Var_29;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_Integer Var_38;
  MR_Integer Var_39;
  MR_Word Var_40;
  MR_Integer Var_41;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);
  MR_Box conv1_Var_28;
  MR_Box MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box);
  MR_Box conv3_Var_36;
  MR_Box MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box);
  MR_Box conv5_Var_37;
  MR_Box MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box);
  MR_Box conv7_Var_40;

  mercury__array__to_list_2_p_0(TypeInfo_for_T_13, A_5, &Var_12);
  Var_19 = (MR_Integer) ((MR_Unsigned) Var_10 - (MR_Unsigned) 1);
  Var_22 = mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_50_49_95_95_91_51_44_32_52_93_95_48_2_f_in__list_0(TypeInfo_for_T_13, Var_19, Var_12);
  Var_18 = mercury__pprint__packed_3_f_0((MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Word) (&mercury__pprint_scalar_common_1[1]), Var_19, ((MR_Box) ((MR_String) ", ")), Var_22);
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
	Var_29  = Max;
}
  func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
  conv1_Var_28 = func_0(((MR_Box) ((MR_Word) (&mercury__pprint_scalar_common_1[1]))), ((MR_Box) (Var_29)), ((MR_Box) (Var_18)));
  Var_28 = ((MR_Word) (conv1_Var_28));
  {
    Var_16 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_16, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_16, 1) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(3, Var_16, 2) = ((MR_Box) (Var_28));
  }
  Var_9 = mercury__pprint__bracketed_3_f_0((MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Word) (&mercury__pprint_scalar_common_1[1]), ((MR_Box) ((MR_String) "[")), ((MR_Box) ((MR_String) "]")), ((MR_Box) (Var_16)));
  Var_8 = mercury__pprint__bracketed_3_f_0((MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Word) (&mercury__pprint_scalar_common_1[1]), ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_String) ")")), ((MR_Box) (Var_9)));
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
	Var_38  = Max;
}
  func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
  conv3_Var_36 = func_2(((MR_Box) ((MR_Word) (&mercury__pprint_scalar_common_1[0]))), ((MR_Box) (Var_38)), ((MR_Box) ((MR_String) "array")));
  Var_36 = ((MR_Word) (conv3_Var_36));
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
	Var_39  = Max;
}
  func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
  conv5_Var_37 = func_4(((MR_Box) ((MR_Word) (&mercury__pprint_scalar_common_1[1]))), ((MR_Box) (Var_39)), ((MR_Box) (Var_8)));
  Var_37 = ((MR_Word) (conv5_Var_37));
  {
    Var_6 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_6, 0) = ((MR_Box) (Var_36));
    MR_hl_field(2, Var_6, 1) = ((MR_Box) (Var_37));
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
	Var_41  = Max;
}
  func_6 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
  conv7_Var_40 = func_6(((MR_Box) ((MR_Word) (&mercury__pprint_scalar_common_1[1]))), ((MR_Box) (Var_41)), ((MR_Box) (Var_6)));
  Var_40 = ((MR_Word) (conv7_Var_40));
  {
    HeadVar__3_3 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, HeadVar__3_3, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, HeadVar__3_3, 1) = ((MR_Box) (Var_40));
  }
  return HeadVar__3_3;
}

static MR_Word MR_CALL 
mercury__pprint__list_to_doc_2_f_0(
  MR_Word TypeInfo_for_T_11,
  MR_Integer Depth_4,
  MR_Word Xs_5)
{
  MR_Word HeadVar__3_3;
  MR_Word Var_6;
  MR_Word Var_8;
  MR_Integer Var_9 = (MR_Integer) ((MR_Unsigned) Depth_4 - (MR_Unsigned) 1);
  MR_Word Var_13;
  MR_Word Var_19;
  MR_Integer Var_20;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);
  MR_Box conv1_Var_19;

  Var_13 = mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_50_49_95_95_91_51_44_32_52_93_95_48_2_f_in__list_0(TypeInfo_for_T_11, Var_9, Xs_5);
  Var_8 = mercury__pprint__packed_3_f_0((MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Word) (&mercury__pprint_scalar_common_1[1]), Var_9, ((MR_Box) ((MR_String) ", ")), Var_13);
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
	Var_20  = Max;
}
  func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
  conv1_Var_19 = func_0(((MR_Box) ((MR_Word) (&mercury__pprint_scalar_common_1[1]))), ((MR_Box) (Var_20)), ((MR_Box) (Var_8)));
  Var_19 = ((MR_Word) (conv1_Var_19));
  {
    Var_6 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_6, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_6, 1) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(3, Var_6, 2) = ((MR_Box) (Var_19));
  }
  HeadVar__3_3 = mercury__pprint__bracketed_3_f_0((MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Word) (&mercury__pprint_scalar_common_1[1]), ((MR_Box) ((MR_String) "[")), ((MR_Box) ((MR_String) "]")), ((MR_Box) (Var_6)));
  return HeadVar__3_3;
}

static MR_Word MR_CALL 
mercury__pprint__generic_term_to_doc_3_f_0(
  MR_Word TypeInfo_for_T_101,
  MR_Integer Depth_5,
  MR_Word Priority_6,
  MR_Box X_7)
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

      Var_27 = mercury__pprint__f_43_43_2_f_0((MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Word) (&mercury__pprint_scalar_common_1[3]), ((MR_Box) ((MR_String) "/")), ((MR_Box) (Arity_10)));
      Doc_8 = mercury__pprint__f_43_43_2_f_0((MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Word) (&mercury__pprint_scalar_common_1[1]), ((MR_Box) (Name_9)), ((MR_Box) (Var_27)));
    }
  }
  else
  {
    MR_Word UnivArgs_12;
    MR_String Name_100;
    MR_Integer _Arity_11;
    MR_Word UnivArg_14;
    MR_Word OpPri_15;
    MR_Word GtOrGe_16;
    MR_Word TypeClassInfo_for_op_table_105;
    MR_Word Var_30;

    mercury__deconstruct__deconstruct_5_p_1(TypeInfo_for_T_101, X_7, (MR_Integer) 1, &Name_100, &_Arity_11, &UnivArgs_12);
    mercury__ops__init_mercury_op_table_0_f_0();
    succeeded = (UnivArgs_12 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      UnivArg_14 = ((MR_Word) ((MR_hl_field(1, UnivArgs_12, (MR_Integer) 0))));
      Var_30 = ((MR_Word) ((MR_hl_field(1, UnivArgs_12, (MR_Integer) 1))));
      succeeded = (Var_30 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        TypeClassInfo_for_op_table_105 = (MR_Word) (&mercury__pprint_scalar_common_1[4]);
        succeeded = mercury__ops__lookup_prefix_op_4_p_0(TypeClassInfo_for_op_table_105, ((MR_Box) ((MR_Integer) 0)), Name_100, &OpPri_15, &GtOrGe_16);
      }
    }
    if (succeeded)
    {
      MR_Word Var_31;
      MR_Word Var_32;
      MR_Word Var_33;
      MR_Word Var_34;
      MR_Integer Var_35;
      MR_Word Var_37;

      Var_33 = mercury__pprint__space_0_f_0();
      Var_35 = (MR_Integer) ((MR_Unsigned) Depth_5 - (MR_Unsigned) 1);
      Var_37 = mercury__pprint__adjusted_by_2_f_0(OpPri_15, GtOrGe_16);
      Var_34 = mercury__pprint__univ_to_doc_3_f_0(Var_35, Var_37, UnivArg_14);
      Var_32 = mercury__pprint__f_43_43_2_f_0((MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Word) (&mercury__pprint_scalar_common_1[1]), ((MR_Box) (Var_33)), ((MR_Box) (Var_34)));
      Var_31 = mercury__pprint__f_43_43_2_f_0((MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Word) (&mercury__pprint_scalar_common_1[1]), ((MR_Box) (Name_100)), ((MR_Box) (Var_32)));
      Doc_8 = mercury__pprint__maybe_parens_3_f_0(Priority_6, OpPri_15, Var_31);
    }
    else
    {
      MR_Word UnivArg_97;
      MR_Word OpPri_98;
      MR_Word GtOrGe_99;
      MR_Word TypeClassInfo_for_op_table_108;
      MR_Word Var_38;

      succeeded = (UnivArgs_12 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        UnivArg_97 = ((MR_Word) ((MR_hl_field(1, UnivArgs_12, (MR_Integer) 0))));
        Var_38 = ((MR_Word) ((MR_hl_field(1, UnivArgs_12, (MR_Integer) 1))));
        succeeded = (Var_38 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          TypeClassInfo_for_op_table_108 = (MR_Word) (&mercury__pprint_scalar_common_1[4]);
          succeeded = mercury__ops__lookup_postfix_op_4_p_0(TypeClassInfo_for_op_table_108, ((MR_Box) ((MR_Integer) 0)), Name_100, &OpPri_98, &GtOrGe_99);
        }
      }
      if (succeeded)
      {
        MR_Word Var_39;
        MR_Word Var_40;
        MR_Integer Var_41 = (MR_Integer) ((MR_Unsigned) Depth_5 - (MR_Unsigned) 1);
        MR_Word Var_43;
        MR_Word Var_44;
        MR_Word Var_45;

        Var_43 = mercury__pprint__adjusted_by_2_f_0(OpPri_98, GtOrGe_99);
        Var_40 = mercury__pprint__univ_to_doc_3_f_0(Var_41, Var_43, UnivArg_97);
        Var_45 = mercury__pprint__space_0_f_0();
        Var_44 = mercury__pprint__f_43_43_2_f_0((MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Word) (&mercury__pprint_scalar_common_1[0]), ((MR_Box) (Var_45)), ((MR_Box) (Name_100)));
        Var_39 = mercury__pprint__f_43_43_2_f_0((MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Word) (&mercury__pprint_scalar_common_1[1]), ((MR_Box) (Var_40)), ((MR_Box) (Var_44)));
        Doc_8 = mercury__pprint__maybe_parens_3_f_0(Priority_6, OpPri_98, Var_39);
      }
      else
      {
        MR_Word UnivArgL_17;
        MR_Word UnivArgR_18;
        MR_Word GtOrGeL_19;
        MR_Word GtOrGeR_20;
        MR_Word OpPri_96;
        MR_Word TypeClassInfo_for_op_table_111;
        MR_Word Var_46;
        MR_Word Var_47;

        succeeded = (UnivArgs_12 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          UnivArgL_17 = ((MR_Word) ((MR_hl_field(1, UnivArgs_12, (MR_Integer) 0))));
          Var_46 = ((MR_Word) ((MR_hl_field(1, UnivArgs_12, (MR_Integer) 1))));
          succeeded = (Var_46 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            UnivArgR_18 = ((MR_Word) ((MR_hl_field(1, Var_46, (MR_Integer) 0))));
            Var_47 = ((MR_Word) ((MR_hl_field(1, Var_46, (MR_Integer) 1))));
            succeeded = (Var_47 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              TypeClassInfo_for_op_table_111 = (MR_Word) (&mercury__pprint_scalar_common_1[4]);
              succeeded = mercury__ops__lookup_infix_op_5_p_0(TypeClassInfo_for_op_table_111, ((MR_Box) ((MR_Integer) 0)), Name_100, &OpPri_96, &GtOrGeL_19, &GtOrGeR_20);
            }
          }
        }
        if (succeeded)
        {
          MR_Word Var_48;
          MR_Word Var_49;
          MR_Integer Var_50 = (MR_Integer) ((MR_Unsigned) Depth_5 - (MR_Unsigned) 1);
          MR_Word Var_52;
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
          MR_Word Var_66;

          Var_52 = mercury__pprint__adjusted_by_2_f_0(OpPri_96, GtOrGeL_19);
          Var_49 = mercury__pprint__univ_to_doc_3_f_0(Var_50, Var_52, UnivArgL_17);
          Var_54 = mercury__pprint__space_0_f_0();
          Var_57 = mercury__pprint__space_0_f_0();
          Var_60 = mercury__pprint__line_0_f_0();
          Var_64 = (MR_Integer) ((MR_Unsigned) Depth_5 - (MR_Unsigned) 2);
          Var_66 = mercury__pprint__adjusted_by_2_f_0(OpPri_96, GtOrGeR_20);
          Var_63 = mercury__pprint__univ_to_doc_3_f_0(Var_64, Var_66, UnivArgR_18);
          Var_61 = mercury__pprint__nest_2_f_0((MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Integer) 2, ((MR_Box) (Var_63)));
          Var_59 = mercury__pprint__f_43_43_2_f_0((MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Word) (&mercury__pprint_scalar_common_1[1]), ((MR_Box) (Var_60)), ((MR_Box) (Var_61)));
          Var_58 = mercury__pprint__group_1_f_0((MR_Word) (&mercury__pprint_scalar_common_1[1]), ((MR_Box) (Var_59)));
          Var_56 = mercury__pprint__f_43_43_2_f_0((MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Word) (&mercury__pprint_scalar_common_1[1]), ((MR_Box) (Var_57)), ((MR_Box) (Var_58)));
          Var_55 = mercury__pprint__f_43_43_2_f_0((MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Word) (&mercury__pprint_scalar_common_1[1]), ((MR_Box) (Name_100)), ((MR_Box) (Var_56)));
          Var_53 = mercury__pprint__f_43_43_2_f_0((MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Word) (&mercury__pprint_scalar_common_1[1]), ((MR_Box) (Var_54)), ((MR_Box) (Var_55)));
          Var_48 = mercury__pprint__f_43_43_2_f_0((MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Word) (&mercury__pprint_scalar_common_1[1]), ((MR_Box) (Var_49)), ((MR_Box) (Var_53)));
          Doc_8 = mercury__pprint__maybe_parens_3_f_0(Priority_6, OpPri_96, Var_48);
        }
        else
        {
          MR_Word UnivArgR1_21;
          MR_Word UnivArgR2_22;
          MR_Word GtOrGeR1_23;
          MR_Word GtOrGeR2_24;
          MR_Word OpPri_95;
          MR_Word TypeClassInfo_for_op_table_114;
          MR_Word Var_67;
          MR_Word Var_68;

          succeeded = (UnivArgs_12 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            UnivArgR1_21 = ((MR_Word) ((MR_hl_field(1, UnivArgs_12, (MR_Integer) 0))));
            Var_67 = ((MR_Word) ((MR_hl_field(1, UnivArgs_12, (MR_Integer) 1))));
            succeeded = (Var_67 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              UnivArgR2_22 = ((MR_Word) ((MR_hl_field(1, Var_67, (MR_Integer) 0))));
              Var_68 = ((MR_Word) ((MR_hl_field(1, Var_67, (MR_Integer) 1))));
              succeeded = (Var_68 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                TypeClassInfo_for_op_table_114 = (MR_Word) (&mercury__pprint_scalar_common_1[4]);
                succeeded = mercury__ops__lookup_binary_prefix_op_5_p_0(TypeClassInfo_for_op_table_114, ((MR_Box) ((MR_Integer) 0)), Name_100, &OpPri_95, &GtOrGeR1_23, &GtOrGeR2_24);
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
            MR_Word Var_76;
            MR_Word Var_77;
            MR_Word Var_78;
            MR_Word Var_79;
            MR_Word Var_80;
            MR_Word Var_81;
            MR_Word Var_82;
            MR_Word Var_84;
            MR_Integer Var_85;
            MR_Word Var_87;

            Var_71 = mercury__pprint__space_0_f_0();
            Var_74 = (MR_Integer) ((MR_Unsigned) Depth_5 - (MR_Unsigned) 2);
            Var_76 = mercury__pprint__adjusted_by_2_f_0(OpPri_95, GtOrGeR1_23);
            Var_73 = mercury__pprint__univ_to_doc_3_f_0(Var_74, Var_76, UnivArgR1_21);
            Var_78 = mercury__pprint__space_0_f_0();
            Var_81 = mercury__pprint__line_0_f_0();
            Var_85 = (MR_Integer) ((MR_Unsigned) Depth_5 - (MR_Unsigned) 2);
            Var_87 = mercury__pprint__adjusted_by_2_f_0(OpPri_95, GtOrGeR2_24);
            Var_84 = mercury__pprint__univ_to_doc_3_f_0(Var_85, Var_87, UnivArgR2_22);
            Var_82 = mercury__pprint__nest_2_f_0((MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Integer) 2, ((MR_Box) (Var_84)));
            Var_80 = mercury__pprint__f_43_43_2_f_0((MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Word) (&mercury__pprint_scalar_common_1[1]), ((MR_Box) (Var_81)), ((MR_Box) (Var_82)));
            Var_79 = mercury__pprint__group_1_f_0((MR_Word) (&mercury__pprint_scalar_common_1[1]), ((MR_Box) (Var_80)));
            Var_77 = mercury__pprint__f_43_43_2_f_0((MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Word) (&mercury__pprint_scalar_common_1[1]), ((MR_Box) (Var_78)), ((MR_Box) (Var_79)));
            Var_72 = mercury__pprint__f_43_43_2_f_0((MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Word) (&mercury__pprint_scalar_common_1[1]), ((MR_Box) (Var_73)), ((MR_Box) (Var_77)));
            Var_70 = mercury__pprint__f_43_43_2_f_0((MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Word) (&mercury__pprint_scalar_common_1[1]), ((MR_Box) (Var_71)), ((MR_Box) (Var_72)));
            Var_69 = mercury__pprint__f_43_43_2_f_0((MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Word) (&mercury__pprint_scalar_common_1[1]), ((MR_Box) (Name_100)), ((MR_Box) (Var_70)));
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
              MR_Integer Var_93 = (MR_Integer) ((MR_Unsigned) Depth_5 - (MR_Unsigned) 1);

              Var_92 = mercury__pprint__packed_cs_univ_args_2_f_0(Var_93, UnivArgs_12);
              Var_90 = mercury__pprint__nest_2_f_0((MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Integer) 2, ((MR_Box) (Var_92)));
              Var_89 = mercury__pprint__parentheses_1_f_0((MR_Word) (&mercury__pprint_scalar_common_1[1]), ((MR_Box) (Var_90)));
              Var_88 = mercury__pprint__f_43_43_2_f_0((MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Word) (&mercury__pprint_scalar_common_1[1]), ((MR_Box) (Name_100)), ((MR_Box) (Var_89)));
              Doc_8 = mercury__pprint__group_1_f_0((MR_Word) (&mercury__pprint_scalar_common_1[1]), ((MR_Box) (Var_88)));
            }
          }
        }
      }
    }
  }
  return Doc_8;
}

static MR_Word MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_93_95_48_2_f_in__list_0(
  MR_Word HeadVar__2_2)
{
  MR_Word HeadVar__3_3;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Var_8;
    MR_Box K_20 = (MR_hl_field(0, Var_6, (MR_Integer) 0));
    MR_Box V_21 = (MR_hl_field(0, Var_6, (MR_Integer) 1));
    MR_Word * AddrSCCcallarg_9_22;

    {
      Var_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_8, 0) = K_20;
      MR_hl_field(0, Var_8, 1) = V_21;
    }
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (Var_8));
      MR_hl_field(1, HeadVar__3_3, 1) = NULL;
    }
    AddrSCCcallarg_9_22 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1)));
    mercury__pprint__f_76_67_77_67_95_95_102_117_110_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_93_95_48_95_95_49_3_p_0(Var_7, AddrSCCcallarg_9_22);
  }
  return HeadVar__3_3;
}

static void MR_CALL 
mercury__pprint__f_76_67_77_67_95_95_102_117_110_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_93_95_48_95_95_49_3_p_0(
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_23)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfHeadVar__3_23 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Var_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_8;
      MR_Box K_20 = (MR_hl_field(0, Var_6, (MR_Integer) 0));
      MR_Box V_21 = (MR_hl_field(0, Var_6, (MR_Integer) 1));
      MR_Word * AddrSCCcallarg_9_22;
      MR_Word HeadVar__3_24;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word * next_value_of_AddrOfHeadVar__3_23;

      {
        Var_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_8, 0) = K_20;
        MR_hl_field(0, Var_8, 1) = V_21;
      }
      {
        HeadVar__3_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__3_24, 0) = ((MR_Box) (Var_8));
        MR_hl_field(1, HeadVar__3_24, 1) = NULL;
      }
      AddrSCCcallarg_9_22 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_24, (MR_Integer) 1)));
      *AddrOfHeadVar__3_23 = HeadVar__3_24;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Var_7;
      next_value_of_AddrOfHeadVar__3_23 = AddrSCCcallarg_9_22;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      AddrOfHeadVar__3_23 = next_value_of_AddrOfHeadVar__3_23;
      continue;
    }
    break;
  }
}

static MR_Word MR_CALL 
mercury__pprint__tuple_to_doc_2_f_0(
  MR_Word TypeInfo_for_T_17,
  MR_Integer Depth_4,
  MR_Box Tuple_5)
{
  MR_Word Doc_6;
  MR_Word UnivArgs_9;
  MR_Word Var_11;
  MR_Word Var_12;
  MR_Word Var_14;
  MR_Integer Var_15;
  MR_Word Var_19;
  MR_Integer Var_20;
  MR_Word Var_24;
  MR_Integer Var_25;
  MR_String _Name_7;
  MR_Integer _Arity_8;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);
  MR_Box conv1_Var_19;
  MR_Box MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box);
  MR_Box conv3_Var_24;

  mercury__deconstruct__deconstruct_5_p_1(TypeInfo_for_T_17, Tuple_5, (MR_Integer) 1, &_Name_7, &_Arity_8, &UnivArgs_9);
  Var_15 = (MR_Integer) ((MR_Unsigned) Depth_4 - (MR_Unsigned) 1);
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
	Var_20  = Max;
}
  func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
  conv1_Var_19 = func_0(((MR_Box) ((MR_Word) (&mercury__pprint_scalar_common_1[1]))), ((MR_Box) (Var_20)), ((MR_Box) (Var_14)));
  Var_19 = ((MR_Word) (conv1_Var_19));
  {
    Var_12 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_12, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_12, 1) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(3, Var_12, 2) = ((MR_Box) (Var_19));
  }
  Var_11 = mercury__pprint__bracketed_3_f_0((MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Word) (&mercury__pprint_scalar_common_1[1]), ((MR_Box) ((MR_String) "{")), ((MR_Box) ((MR_String) "}")), ((MR_Box) (Var_12)));
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
	Var_25  = Max;
}
  func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
  conv3_Var_24 = func_2(((MR_Box) ((MR_Word) (&mercury__pprint_scalar_common_1[1]))), ((MR_Box) (Var_25)), ((MR_Box) (Var_11)));
  Var_24 = ((MR_Word) (conv3_Var_24));
  {
    Doc_6 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Doc_6, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Doc_6, 1) = ((MR_Box) (Var_24));
  }
  return Doc_6;
}

static void MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_50_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_5_p_in__version_array_0(
  MR_Box HeadVar__2_7,
  MR_Integer HeadVar__3_8,
  MR_Word HeadVar__4_9,
  MR_Word * HeadVar__5_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = ((MR_Integer) 0 <= HeadVar__3_8);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Word Var_12;
      MR_Box Var_13;
      MR_Integer Var_14;
      MR_Box Var_21;
      MR_Integer next_value_of_HeadVar__3_8;
      MR_Word next_value_of_HeadVar__4_9;

{
#define MR_PROC_LABEL mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_50_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_5_p_in__version_array_0

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
        Var_13 = Var_21;
      else
      {
        MR_Integer Var_22;
        MR_Integer Var_24;

{
#define MR_PROC_LABEL mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_50_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_5_p_in__version_array_0

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
        Var_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_12, 0) = Var_13;
        MR_hl_field(1, Var_12, 1) = ((MR_Box) (HeadVar__4_9));
      }
      Var_14 = (MR_Integer) ((MR_Unsigned) HeadVar__3_8 - (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_8 = Var_14;
      next_value_of_HeadVar__4_9 = Var_12;
      HeadVar__3_8 = next_value_of_HeadVar__3_8;
      HeadVar__4_9 = next_value_of_HeadVar__4_9;
      continue;
    }
    else
      *HeadVar__5_10 = HeadVar__4_9;
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
  MR_bool succeeded;
  MR_Word TypeCtorInfo_15_15;
  MR_Word TypeInfo_16_16;
  MR_Word TypeInfo_19_19;
  MR_Word ArgTypeDesc_5;
  MR_Word Var_8;
  MR_Word Var_10;
  MR_Word Var_18;
  MR_Word Var_20;
  MR_Box conv0_R_4;

{
#define MR_PROC_LABEL mercury__pprint__dynamic_cast_to_robdd_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word TypeInfo;

	TypeInfo_for_T = TypeInfo_for_T1_14 ;
	TypeInfo_In_1 = TypeInfo_for_T;
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

	TypeDesc = Var_10 ;
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
	Var_20  = TypeCtorDesc;
	Var_8  = ArgTypes;
}
  succeeded = (Var_8 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    ArgTypeDesc_5 = ((MR_Word) ((MR_hl_field(1, Var_8, (MR_Integer) 0))));
    Var_18 = ((MR_Word) ((MR_hl_field(1, Var_8, (MR_Integer) 1))));
    TypeInfo_19_19 = (MR_Word) (&mercury__pprint_scalar_common_1[8]);
    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_19, ((MR_Box) ((MR_Unsigned) 0U)), ((MR_Box) (Var_18)));
    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__pprint__dynamic_cast_to_robdd_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_Out_1;
	MR_Word TypeInfo;

	TypeInfo = ArgTypeDesc_5 ;
		{

    TypeInfo_for_T = TypeInfo;


		;}
#undef MR_PROC_LABEL
	TypeInfo_Out_1 = TypeInfo_for_T;
	*TypeInfo_for_T_13  = TypeInfo_for_T;
}
      TypeCtorInfo_15_15 = (MR_Word) (&mercury__robdd__robdd__type_ctor_info_robdd_1);
      {
        TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_16_16, 0) = ((MR_Box) (TypeCtorInfo_15_15));
        MR_hl_field(0, TypeInfo_16_16, 1) = ((MR_Box) (*TypeInfo_for_T_13));
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

static MR_bool MR_CALL 
mercury__pprint__dynamic_cast_to_map_pair_2_p_0(
  MR_Word TypeInfo_for_T1_20,
  MR_Word * TypeInfo_for_T_18,
  MR_Word * TypeInfo_for_T_19,
  MR_Box X_3,
  MR_Word * MP_4)
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
  MR_Word Var_26;
  MR_Box conv0_MP_4;

{
#define MR_PROC_LABEL mercury__pprint__dynamic_cast_to_map_pair_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word TypeInfo;

	TypeInfo_for_T = TypeInfo_for_T1_20 ;
	TypeInfo_In_1 = TypeInfo_for_T;
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

	TypeDesc = Var_14 ;
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
	Var_26  = TypeCtorDesc;
	Var_11  = ArgTypes;
}
  succeeded = (Var_11 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    KeyTypeDesc_5 = ((MR_Word) ((MR_hl_field(1, Var_11, (MR_Integer) 0))));
    Var_12 = ((MR_Word) ((MR_hl_field(1, Var_11, (MR_Integer) 1))));
    succeeded = (Var_12 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ValueTypeDesc_6 = ((MR_Word) ((MR_hl_field(1, Var_12, (MR_Integer) 0))));
      Var_24 = ((MR_Word) ((MR_hl_field(1, Var_12, (MR_Integer) 1))));
      TypeInfo_25_25 = (MR_Word) (&mercury__pprint_scalar_common_1[8]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_25_25, ((MR_Box) ((MR_Unsigned) 0U)), ((MR_Box) (Var_24)));
      if (succeeded)
      {
{
#define MR_PROC_LABEL mercury__pprint__dynamic_cast_to_map_pair_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_Out_1;
	MR_Word TypeInfo;

	TypeInfo = KeyTypeDesc_5 ;
		{

    TypeInfo_for_T = TypeInfo;


		;}
#undef MR_PROC_LABEL
	TypeInfo_Out_1 = TypeInfo_for_T;
	*TypeInfo_for_T_18  = TypeInfo_for_T;
}
{
#define MR_PROC_LABEL mercury__pprint__dynamic_cast_to_map_pair_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_Out_1;
	MR_Word TypeInfo;

	TypeInfo = ValueTypeDesc_6 ;
		{

    TypeInfo_for_T = TypeInfo;


		;}
#undef MR_PROC_LABEL
	TypeInfo_Out_1 = TypeInfo_for_T;
	*TypeInfo_for_T_19  = TypeInfo_for_T;
}
        TypeCtorInfo_21_21 = (MR_Word) (&mercury__pprint__pprint__type_ctor_info_map_pair_2);
        {
          TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeInfo_22_22, 0) = ((MR_Box) (TypeCtorInfo_21_21));
          MR_hl_field(0, TypeInfo_22_22, 1) = ((MR_Box) (*TypeInfo_for_T_18));
          MR_hl_field(0, TypeInfo_22_22, 2) = ((MR_Box) (*TypeInfo_for_T_19));
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

static MR_bool MR_CALL 
mercury__pprint__dynamic_cast_to_map_2_p_0(
  MR_Word TypeInfo_for_T1_20,
  MR_Word * TypeInfo_for_T_18,
  MR_Word * TypeInfo_for_T_19,
  MR_Box X_3,
  MR_Word * M_4)
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
  MR_Word Var_26;
  MR_Box conv0_M_4;

{
#define MR_PROC_LABEL mercury__pprint__dynamic_cast_to_map_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word TypeInfo;

	TypeInfo_for_T = TypeInfo_for_T1_20 ;
	TypeInfo_In_1 = TypeInfo_for_T;
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

	TypeDesc = Var_14 ;
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
	Var_26  = TypeCtorDesc;
	Var_11  = ArgTypes;
}
  succeeded = (Var_11 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    KeyTypeDesc_5 = ((MR_Word) ((MR_hl_field(1, Var_11, (MR_Integer) 0))));
    Var_12 = ((MR_Word) ((MR_hl_field(1, Var_11, (MR_Integer) 1))));
    succeeded = (Var_12 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ValueTypeDesc_6 = ((MR_Word) ((MR_hl_field(1, Var_12, (MR_Integer) 0))));
      Var_24 = ((MR_Word) ((MR_hl_field(1, Var_12, (MR_Integer) 1))));
      TypeInfo_25_25 = (MR_Word) (&mercury__pprint_scalar_common_1[8]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_25_25, ((MR_Box) ((MR_Unsigned) 0U)), ((MR_Box) (Var_24)));
      if (succeeded)
      {
{
#define MR_PROC_LABEL mercury__pprint__dynamic_cast_to_map_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_Out_1;
	MR_Word TypeInfo;

	TypeInfo = KeyTypeDesc_5 ;
		{

    TypeInfo_for_T = TypeInfo;


		;}
#undef MR_PROC_LABEL
	TypeInfo_Out_1 = TypeInfo_for_T;
	*TypeInfo_for_T_18  = TypeInfo_for_T;
}
{
#define MR_PROC_LABEL mercury__pprint__dynamic_cast_to_map_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_Out_1;
	MR_Word TypeInfo;

	TypeInfo = ValueTypeDesc_6 ;
		{

    TypeInfo_for_T = TypeInfo;


		;}
#undef MR_PROC_LABEL
	TypeInfo_Out_1 = TypeInfo_for_T;
	*TypeInfo_for_T_19  = TypeInfo_for_T;
}
        TypeCtorInfo_21_21 = (MR_Word) (&mercury__tree234__tree234__type_ctor_info_tree234_2);
        {
          TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeInfo_22_22, 0) = ((MR_Box) (TypeCtorInfo_21_21));
          MR_hl_field(0, TypeInfo_22_22, 1) = ((MR_Box) (*TypeInfo_for_T_18));
          MR_hl_field(0, TypeInfo_22_22, 2) = ((MR_Box) (*TypeInfo_for_T_19));
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

static MR_bool MR_CALL 
mercury__pprint__dynamic_cast_to_version_array_2_p_0(
  MR_Word TypeInfo_for_T1_14,
  MR_Word * TypeInfo_for_T_13,
  MR_Box X_3,
  MR_Box * VA_4)
{
  MR_bool succeeded;
  MR_Word TypeCtorInfo_15_15;
  MR_Word TypeInfo_16_16;
  MR_Word TypeInfo_19_19;
  MR_Word ArgTypeDesc_5;
  MR_Word Var_8;
  MR_Word Var_10;
  MR_Word Var_18;
  MR_Word Var_20;
  MR_Box conv0_VA_4;

{
#define MR_PROC_LABEL mercury__pprint__dynamic_cast_to_version_array_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word TypeInfo;

	TypeInfo_for_T = TypeInfo_for_T1_14 ;
	TypeInfo_In_1 = TypeInfo_for_T;
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

	TypeDesc = Var_10 ;
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
	Var_20  = TypeCtorDesc;
	Var_8  = ArgTypes;
}
  succeeded = (Var_8 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    ArgTypeDesc_5 = ((MR_Word) ((MR_hl_field(1, Var_8, (MR_Integer) 0))));
    Var_18 = ((MR_Word) ((MR_hl_field(1, Var_8, (MR_Integer) 1))));
    TypeInfo_19_19 = (MR_Word) (&mercury__pprint_scalar_common_1[8]);
    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_19, ((MR_Box) ((MR_Unsigned) 0U)), ((MR_Box) (Var_18)));
    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__pprint__dynamic_cast_to_version_array_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_Out_1;
	MR_Word TypeInfo;

	TypeInfo = ArgTypeDesc_5 ;
		{

    TypeInfo_for_T = TypeInfo;


		;}
#undef MR_PROC_LABEL
	TypeInfo_Out_1 = TypeInfo_for_T;
	*TypeInfo_for_T_13  = TypeInfo_for_T;
}
      TypeCtorInfo_15_15 = (MR_Word) (&mercury__version_array__version_array__type_ctor_info_version_array_1);
      {
        TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_16_16, 0) = ((MR_Box) (TypeCtorInfo_15_15));
        MR_hl_field(0, TypeInfo_16_16, 1) = ((MR_Box) (*TypeInfo_for_T_13));
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

static MR_Word MR_CALL 
mercury__pprint__adjusted_by_2_f_0(
  MR_Word OpPriority_4,
  MR_Word GtOrGe_5)
{
  MR_Word MinArgPriority_6;

  switch (GtOrGe_5) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      MinArgPriority_6 = OpPriority_4;
      break;
    case (MR_Integer) 0:
      MinArgPriority_6 = mercury__ops__increment_priority_1_f_0(OpPriority_4);
      break;
  }
  return MinArgPriority_6;
}

static MR_Word MR_CALL 
mercury__pprint__maybe_parens_3_f_0(
  MR_Word ParentPriority_5,
  MR_Word OpPriority_6,
  MR_Word Doc_7)
{
  MR_bool succeeded;
  MR_Word HeadVar__4_4;
  MR_Unsigned Var_9 = (MR_Unsigned) (ParentPriority_5);
  MR_Unsigned Var_10 = (MR_Unsigned) (OpPriority_6);

  succeeded = (Var_9 > Var_10);
  if (succeeded)
    HeadVar__4_4 = mercury__pprint__bracketed_3_f_0((MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Word) (&mercury__pprint_scalar_common_1[1]), ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_String) ")")), ((MR_Box) (Doc_7)));
  else
    HeadVar__4_4 = Doc_7;
  return HeadVar__4_4;
}

MR_Word MR_CALL 
mercury__pprint__packed_cs_univ_args_2_f_0(
  MR_Integer Depth_4,
  MR_Word UnivArgs_5)
{
  MR_Word HeadVar__3_3;
  MR_Word Var_7;

  Var_7 = mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_50_48_95_95_91_50_93_95_48_2_f_in__list_0(Depth_4, UnivArgs_5);
  HeadVar__3_3 = mercury__pprint__packed_3_f_0((MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Word) (&mercury__pprint_scalar_common_1[1]), Depth_4, ((MR_Box) ((MR_String) ", ")), Var_7);
  return HeadVar__3_3;
}

static MR_Word MR_CALL 
mercury__pprint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_50_48_95_95_91_50_93_95_48_2_f_in__list_0(
  MR_Integer Var_12,
  MR_Word HeadVar__2_2)
{
  MR_Word HeadVar__3_3;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Var_8;
    MR_Word * AddrSCCcallarg_9_13;

    {
      Var_8 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_8, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(3, Var_8, 1) = ((MR_Box) (Var_12));
      MR_hl_field(3, Var_8, 2) = ((MR_Box) (Var_6));
    }
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (Var_8));
      MR_hl_field(1, HeadVar__3_3, 1) = NULL;
    }
    AddrSCCcallarg_9_13 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1)));
    mercury__pprint__f_76_67_77_67_95_95_102_117_110_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_50_48_95_95_91_50_93_95_48_95_95_49_3_p_0(Var_12, Var_7, AddrSCCcallarg_9_13);
  }
  return HeadVar__3_3;
}

static void MR_CALL 
mercury__pprint__f_76_67_77_67_95_95_102_117_110_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_50_48_95_95_91_50_93_95_48_95_95_49_3_p_0(
  MR_Integer Var_12,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_14)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfHeadVar__3_14 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Var_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_8;
      MR_Word * AddrSCCcallarg_9_13;
      MR_Word HeadVar__3_15;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word * next_value_of_AddrOfHeadVar__3_14;

      {
        Var_8 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_8, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(3, Var_8, 1) = ((MR_Box) (Var_12));
        MR_hl_field(3, Var_8, 2) = ((MR_Box) (Var_6));
      }
      {
        HeadVar__3_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__3_15, 0) = ((MR_Box) (Var_8));
        MR_hl_field(1, HeadVar__3_15, 1) = NULL;
      }
      AddrSCCcallarg_9_13 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_15, (MR_Integer) 1)));
      *AddrOfHeadVar__3_14 = HeadVar__3_15;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Var_7;
      next_value_of_AddrOfHeadVar__3_14 = AddrSCCcallarg_9_13;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      AddrOfHeadVar__3_14 = next_value_of_AddrOfHeadVar__3_14;
      continue;
    }
    break;
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
  MR_bool succeeded;
  MR_Word HeadVar__4_4;

  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_38 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Box Var_39 = (MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0));

    if ((Var_38 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_11;
      MR_Word Var_13;
      MR_Word Var_42;
      MR_Integer Var_43;
      MR_Box MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box);
      MR_Box conv3_Var_42;

      succeeded = ((MR_Integer) 0 < HeadVar__1_1);
      if (succeeded)
      {
        MR_Integer Var_40;
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
	Var_40  = Max;
}
        func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_doc_34, (MR_Integer) 0)), (MR_Integer) 5))));
        conv1_Var_13 = func_0(((MR_Box) (TypeClassInfo_for_doc_34)), ((MR_Box) (Var_40)), Var_39);
        Var_13 = ((MR_Word) (conv1_Var_13));
      }
      else
        Var_13 = (MR_Word) (MR_mkword(1, &mercury__pprint_scalar_common_5[8]));
      Var_11 = mercury__pprint__f_43_43_2_f_0((MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Word) (&mercury__pprint_scalar_common_1[1]), ((MR_Box) ((MR_Unsigned) 4U)), ((MR_Box) (Var_13)));
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
	Var_43  = Max;
}
      func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
      conv3_Var_42 = func_2(((MR_Box) ((MR_Word) (&mercury__pprint_scalar_common_1[1]))), ((MR_Box) (Var_43)), ((MR_Box) (Var_11)));
      Var_42 = ((MR_Word) (conv3_Var_42));
      {
        HeadVar__4_4 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, HeadVar__4_4, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, HeadVar__4_4, 1) = ((MR_Box) (Var_42));
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
        MR_Word Var_44;
        MR_Word Var_45;
        MR_Integer Var_46;
        MR_Integer Var_47;
        MR_Word Var_48;
        MR_Integer Var_49;
        MR_Box MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box);
        MR_Box conv5_Var_44;
        MR_Box MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box);
        MR_Box conv7_Var_45;
        MR_Box MR_CALL (* func_8)(MR_Box, MR_Box, MR_Box);
        MR_Box conv9_Var_48;

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
	Var_46  = Max;
}
        func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_doc_34, (MR_Integer) 0)), (MR_Integer) 5))));
        conv5_Var_44 = func_4(((MR_Box) (TypeClassInfo_for_doc_34)), ((MR_Box) (Var_46)), Var_39);
        Var_44 = ((MR_Word) (conv5_Var_44));
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
	Var_47  = Max;
}
        func_6 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_doc_33, (MR_Integer) 0)), (MR_Integer) 5))));
        conv7_Var_45 = func_6(((MR_Box) (TypeClassInfo_for_doc_33)), ((MR_Box) (Var_47)), HeadVar__2_2);
        Var_45 = ((MR_Word) (conv7_Var_45));
        {
          Var_25 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_25, 0) = ((MR_Box) (Var_44));
          MR_hl_field(2, Var_25, 1) = ((MR_Box) (Var_45));
        }
        Var_23 = mercury__pprint__f_43_43_2_f_0((MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Word) (&mercury__pprint_scalar_common_1[1]), ((MR_Box) ((MR_Unsigned) 4U)), ((MR_Box) (Var_25)));
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
	Var_49  = Max;
}
        func_8 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
        conv9_Var_48 = func_8(((MR_Box) ((MR_Word) (&mercury__pprint_scalar_common_1[1]))), ((MR_Box) (Var_49)), ((MR_Box) (Var_23)));
        Var_48 = ((MR_Word) (conv9_Var_48));
        {
          Var_22 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_22, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_22, 1) = ((MR_Box) (Var_48));
        }
        Var_27 = (MR_Integer) ((MR_Unsigned) HeadVar__1_1 - (MR_Unsigned) 1);
        Var_26 = mercury__pprint__packed_3_f_0(TypeClassInfo_for_doc_33, TypeClassInfo_for_doc_34, Var_27, HeadVar__2_2, Var_38);
        HeadVar__4_4 = mercury__pprint__f_43_43_2_f_0((MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Word) (&mercury__pprint_scalar_common_1[1]), ((MR_Box) (Var_22)), ((MR_Box) (Var_26)));
      }
      else
      {
        MR_Word Var_30;
        MR_Word Var_51;
        MR_Integer Var_52;
        MR_Box MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box);
        MR_Box conv11_Var_51;

        Var_30 = mercury__pprint__f_43_43_2_f_0((MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Word) (&mercury__pprint_scalar_common_1[1]), ((MR_Box) ((MR_Unsigned) 4U)), ((MR_Box) (MR_mkword(1, &mercury__pprint_scalar_common_5[8]))));
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
	Var_52  = Max;
}
        func_10 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
        conv11_Var_51 = func_10(((MR_Box) ((MR_Word) (&mercury__pprint_scalar_common_1[1]))), ((MR_Box) (Var_52)), ((MR_Box) (Var_30)));
        Var_51 = ((MR_Word) (conv11_Var_51));
        {
          HeadVar__4_4 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, HeadVar__4_4, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, HeadVar__4_4, 1) = ((MR_Box) (Var_51));
        }
      }
    }
  }
  return HeadVar__4_4;
}

MR_Word MR_CALL 
mercury__pprint__nest_2_f_0(
  MR_Word TypeClassInfo_for_doc_7,
  MR_Integer I_4,
  MR_Box X_5)
{
  MR_Word HeadVar__3_3;
  MR_Word Var_6;
  MR_Integer Var_8;
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
	Var_8  = Max;
}
  func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_doc_7, (MR_Integer) 0)), (MR_Integer) 5))));
  conv1_Var_6 = func_0(((MR_Box) (TypeClassInfo_for_doc_7)), ((MR_Box) (Var_8)), X_5);
  Var_6 = ((MR_Word) (conv1_Var_6));
  {
    HeadVar__3_3 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, HeadVar__3_3, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, HeadVar__3_3, 1) = ((MR_Box) (I_4));
    MR_hl_field(3, HeadVar__3_3, 2) = ((MR_Box) (Var_6));
  }
  return HeadVar__3_3;
}

MR_Word MR_CALL 
mercury__pprint__parentheses_1_f_0(
  MR_Word TypeClassInfo_for_doc_6,
  MR_Box D_3)
{
  MR_Word HeadVar__2_2;

  HeadVar__2_2 = mercury__pprint__bracketed_3_f_0((MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Word) (&mercury__pprint_scalar_common_1[0]), TypeClassInfo_for_doc_6, ((MR_Box) ((MR_String) "(")), ((MR_Box) ((MR_String) ")")), D_3);
  return HeadVar__2_2;
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
  MR_Word HeadVar__4_4;
  MR_Word Var_8;
  MR_Word Var_13;
  MR_Word Var_14;
  MR_Integer Var_15;
  MR_Integer Var_16;
  MR_Word Var_17;
  MR_Word Var_18;
  MR_Integer Var_19;
  MR_Integer Var_20;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);
  MR_Box conv1_Var_13;
  MR_Box MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box);
  MR_Box conv3_Var_14;
  MR_Box MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box);
  MR_Box conv5_Var_17;
  MR_Box MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box);
  MR_Box conv7_Var_18;

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
	Var_15  = Max;
}
  func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_doc_11, (MR_Integer) 0)), (MR_Integer) 5))));
  conv1_Var_13 = func_0(((MR_Box) (TypeClassInfo_for_doc_11)), ((MR_Box) (Var_15)), D_7);
  Var_13 = ((MR_Word) (conv1_Var_13));
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
	Var_16  = Max;
}
  func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_doc_10, (MR_Integer) 0)), (MR_Integer) 5))));
  conv3_Var_14 = func_2(((MR_Box) (TypeClassInfo_for_doc_10)), ((MR_Box) (Var_16)), R_6);
  Var_14 = ((MR_Word) (conv3_Var_14));
  {
    Var_8 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_8, 0) = ((MR_Box) (Var_13));
    MR_hl_field(2, Var_8, 1) = ((MR_Box) (Var_14));
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
	Var_19  = Max;
}
  func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_doc_9, (MR_Integer) 0)), (MR_Integer) 5))));
  conv5_Var_17 = func_4(((MR_Box) (TypeClassInfo_for_doc_9)), ((MR_Box) (Var_19)), L_5);
  Var_17 = ((MR_Word) (conv5_Var_17));
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
	Var_20  = Max;
}
  func_6 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
  conv7_Var_18 = func_6(((MR_Box) ((MR_Word) (&mercury__pprint_scalar_common_1[1]))), ((MR_Box) (Var_20)), ((MR_Box) (Var_8)));
  Var_18 = ((MR_Word) (conv7_Var_18));
  {
    HeadVar__4_4 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, HeadVar__4_4, 0) = ((MR_Box) (Var_17));
    MR_hl_field(2, HeadVar__4_4, 1) = ((MR_Box) (Var_18));
  }
  return HeadVar__4_4;
}

MR_Word MR_CALL 
mercury__pprint__group_1_f_0(
  MR_Word TypeClassInfo_for_doc_5,
  MR_Box X_3)
{
  MR_Word HeadVar__2_2;
  MR_Word Var_4;
  MR_Integer Var_6;
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
	Var_6  = Max;
}
  func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_doc_5, (MR_Integer) 0)), (MR_Integer) 5))));
  conv1_Var_4 = func_0(((MR_Box) (TypeClassInfo_for_doc_5)), ((MR_Box) (Var_6)), X_3);
  Var_4 = ((MR_Word) (conv1_Var_4));
  {
    HeadVar__2_2 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, HeadVar__2_2, 1) = ((MR_Box) (Var_4));
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
mercury__pprint__f_43_43_2_f_0(
  MR_Word TypeClassInfo_for_doc_8,
  MR_Word TypeClassInfo_for_doc_9,
  MR_Box Doc1_4,
  MR_Box Doc2_5)
{
  MR_Word HeadVar__3_3;
  MR_Word Var_6;
  MR_Word Var_7;
  MR_Integer Var_10;
  MR_Integer Var_11;
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
	Var_10  = Max;
}
  func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_doc_8, (MR_Integer) 0)), (MR_Integer) 5))));
  conv1_Var_6 = func_0(((MR_Box) (TypeClassInfo_for_doc_8)), ((MR_Box) (Var_10)), Doc1_4);
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
	Var_11  = Max;
}
  func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_doc_9, (MR_Integer) 0)), (MR_Integer) 5))));
  conv3_Var_7 = func_2(((MR_Box) (TypeClassInfo_for_doc_9)), ((MR_Box) (Var_11)), Doc2_5);
  Var_7 = ((MR_Word) (conv3_Var_7));
  {
    HeadVar__3_3 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, HeadVar__3_3, 0) = ((MR_Box) (Var_6));
    MR_hl_field(2, HeadVar__3_3, 1) = ((MR_Box) (Var_7));
  }
  return HeadVar__3_3;
}

MR_Word MR_CALL 
mercury__pprint__doc_1_f_0(
  MR_Word TypeClassInfo_for_doc_5,
  MR_Box X_3)
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
  func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_doc_5, (MR_Integer) 0)), (MR_Integer) 5))));
  conv1_HeadVar__2_2 = func_0(((MR_Box) (TypeClassInfo_for_doc_5)), ((MR_Box) (Var_4)), X_3);
  HeadVar__2_2 = ((MR_Word) (conv1_HeadVar__2_2));
  return HeadVar__2_2;
}

MR_Word MR_CALL 
mercury__pprint__ellipsis_0_f_0(void)
{
  return (MR_Word) (MR_mkword(1, &mercury__pprint_scalar_common_5[8]));
}

MR_Word MR_CALL 
mercury__pprint__colon_space_line_0_f_0(void)
{
  MR_Word HeadVar__1_1;
  MR_Word Var_6;
  MR_Word Var_7;
  MR_Integer Var_8;
  MR_Integer Var_9;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);
  MR_Box conv1_Var_6;
  MR_Box MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box);
  MR_Box conv3_Var_7;

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
	Var_8  = Max;
}
  func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
  conv1_Var_6 = func_0(((MR_Box) ((MR_Word) (&mercury__pprint_scalar_common_1[0]))), ((MR_Box) (Var_8)), ((MR_Box) ((MR_String) ": ")));
  Var_6 = ((MR_Word) (conv1_Var_6));
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
	Var_9  = Max;
}
  func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
  conv3_Var_7 = func_2(((MR_Box) ((MR_Word) (&mercury__pprint_scalar_common_1[1]))), ((MR_Box) (Var_9)), ((MR_Box) ((MR_Unsigned) 4U)));
  Var_7 = ((MR_Word) (conv3_Var_7));
  {
    HeadVar__1_1 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, HeadVar__1_1, 0) = ((MR_Box) (Var_6));
    MR_hl_field(2, HeadVar__1_1, 1) = ((MR_Box) (Var_7));
  }
  return HeadVar__1_1;
}

MR_Word MR_CALL 
mercury__pprint__semic_space_line_0_f_0(void)
{
  MR_Word HeadVar__1_1;
  MR_Word Var_6;
  MR_Word Var_7;
  MR_Integer Var_8;
  MR_Integer Var_9;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);
  MR_Box conv1_Var_6;
  MR_Box MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box);
  MR_Box conv3_Var_7;

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
	Var_8  = Max;
}
  func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
  conv1_Var_6 = func_0(((MR_Box) ((MR_Word) (&mercury__pprint_scalar_common_1[0]))), ((MR_Box) (Var_8)), ((MR_Box) ((MR_String) "; ")));
  Var_6 = ((MR_Word) (conv1_Var_6));
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
	Var_9  = Max;
}
  func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
  conv3_Var_7 = func_2(((MR_Box) ((MR_Word) (&mercury__pprint_scalar_common_1[1]))), ((MR_Box) (Var_9)), ((MR_Box) ((MR_Unsigned) 4U)));
  Var_7 = ((MR_Word) (conv3_Var_7));
  {
    HeadVar__1_1 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, HeadVar__1_1, 0) = ((MR_Box) (Var_6));
    MR_hl_field(2, HeadVar__1_1, 1) = ((MR_Box) (Var_7));
  }
  return HeadVar__1_1;
}

MR_Word MR_CALL 
mercury__pprint__comma_space_line_0_f_0(void)
{
  MR_Word HeadVar__1_1;
  MR_Word Var_6;
  MR_Word Var_7;
  MR_Integer Var_8;
  MR_Integer Var_9;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);
  MR_Box conv1_Var_6;
  MR_Box MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box);
  MR_Box conv3_Var_7;

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
	Var_8  = Max;
}
  func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
  conv1_Var_6 = func_0(((MR_Box) ((MR_Word) (&mercury__pprint_scalar_common_1[0]))), ((MR_Box) (Var_8)), ((MR_Box) ((MR_String) ", ")));
  Var_6 = ((MR_Word) (conv1_Var_6));
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
	Var_9  = Max;
}
  func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
  conv3_Var_7 = func_2(((MR_Box) ((MR_Word) (&mercury__pprint_scalar_common_1[1]))), ((MR_Box) (Var_9)), ((MR_Box) ((MR_Unsigned) 4U)));
  Var_7 = ((MR_Word) (conv3_Var_7));
  {
    HeadVar__1_1 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, HeadVar__1_1, 0) = ((MR_Box) (Var_6));
    MR_hl_field(2, HeadVar__1_1, 1) = ((MR_Box) (Var_7));
  }
  return HeadVar__1_1;
}

MR_Word MR_CALL 
mercury__pprint__space_line_0_f_0(void)
{
  MR_Word HeadVar__1_1;
  MR_Word Var_6;
  MR_Word Var_7;
  MR_Integer Var_8;
  MR_Integer Var_9;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);
  MR_Box conv1_Var_6;
  MR_Box MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box);
  MR_Box conv3_Var_7;

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
	Var_8  = Max;
}
  func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
  conv1_Var_6 = func_0(((MR_Box) ((MR_Word) (&mercury__pprint_scalar_common_1[0]))), ((MR_Box) (Var_8)), ((MR_Box) ((MR_String) " ")));
  Var_6 = ((MR_Word) (conv1_Var_6));
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
	Var_9  = Max;
}
  func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
  conv3_Var_7 = func_2(((MR_Box) ((MR_Word) (&mercury__pprint_scalar_common_1[1]))), ((MR_Box) (Var_9)), ((MR_Box) ((MR_Unsigned) 4U)));
  Var_7 = ((MR_Word) (conv3_Var_7));
  {
    HeadVar__1_1 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, HeadVar__1_1, 0) = ((MR_Box) (Var_6));
    MR_hl_field(2, HeadVar__1_1, 1) = ((MR_Box) (Var_7));
  }
  return HeadVar__1_1;
}

MR_Word MR_CALL 
mercury__pprint__colon_line_0_f_0(void)
{
  MR_Word HeadVar__1_1;
  MR_Word Var_6;
  MR_Word Var_7;
  MR_Integer Var_8;
  MR_Integer Var_9;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);
  MR_Box conv1_Var_6;
  MR_Box MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box);
  MR_Box conv3_Var_7;

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
	Var_8  = Max;
}
  func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
  conv1_Var_6 = func_0(((MR_Box) ((MR_Word) (&mercury__pprint_scalar_common_1[0]))), ((MR_Box) (Var_8)), ((MR_Box) ((MR_String) ":")));
  Var_6 = ((MR_Word) (conv1_Var_6));
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
	Var_9  = Max;
}
  func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
  conv3_Var_7 = func_2(((MR_Box) ((MR_Word) (&mercury__pprint_scalar_common_1[1]))), ((MR_Box) (Var_9)), ((MR_Box) ((MR_Unsigned) 4U)));
  Var_7 = ((MR_Word) (conv3_Var_7));
  {
    HeadVar__1_1 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, HeadVar__1_1, 0) = ((MR_Box) (Var_6));
    MR_hl_field(2, HeadVar__1_1, 1) = ((MR_Box) (Var_7));
  }
  return HeadVar__1_1;
}

MR_Word MR_CALL 
mercury__pprint__semic_line_0_f_0(void)
{
  MR_Word HeadVar__1_1;
  MR_Word Var_6;
  MR_Word Var_7;
  MR_Integer Var_8;
  MR_Integer Var_9;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);
  MR_Box conv1_Var_6;
  MR_Box MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box);
  MR_Box conv3_Var_7;

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
	Var_8  = Max;
}
  func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
  conv1_Var_6 = func_0(((MR_Box) ((MR_Word) (&mercury__pprint_scalar_common_1[0]))), ((MR_Box) (Var_8)), ((MR_Box) ((MR_String) ";")));
  Var_6 = ((MR_Word) (conv1_Var_6));
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
	Var_9  = Max;
}
  func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
  conv3_Var_7 = func_2(((MR_Box) ((MR_Word) (&mercury__pprint_scalar_common_1[1]))), ((MR_Box) (Var_9)), ((MR_Box) ((MR_Unsigned) 4U)));
  Var_7 = ((MR_Word) (conv3_Var_7));
  {
    HeadVar__1_1 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, HeadVar__1_1, 0) = ((MR_Box) (Var_6));
    MR_hl_field(2, HeadVar__1_1, 1) = ((MR_Box) (Var_7));
  }
  return HeadVar__1_1;
}

MR_Word MR_CALL 
mercury__pprint__comma_line_0_f_0(void)
{
  MR_Word HeadVar__1_1;
  MR_Word Var_6;
  MR_Word Var_7;
  MR_Integer Var_8;
  MR_Integer Var_9;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);
  MR_Box conv1_Var_6;
  MR_Box MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box);
  MR_Box conv3_Var_7;

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
	Var_8  = Max;
}
  func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__pprint_scalar_common_1[0]), (MR_Integer) 0)), (MR_Integer) 5))));
  conv1_Var_6 = func_0(((MR_Box) ((MR_Word) (&mercury__pprint_scalar_common_1[0]))), ((MR_Box) (Var_8)), ((MR_Box) ((MR_String) ",")));
  Var_6 = ((MR_Word) (conv1_Var_6));
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
	Var_9  = Max;
}
  func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__pprint_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 5))));
  conv3_Var_7 = func_2(((MR_Box) ((MR_Word) (&mercury__pprint_scalar_common_1[1]))), ((MR_Box) (Var_9)), ((MR_Box) ((MR_Unsigned) 4U)));
  Var_7 = ((MR_Word) (conv3_Var_7));
  {
    HeadVar__1_1 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, HeadVar__1_1, 0) = ((MR_Box) (Var_6));
    MR_hl_field(2, HeadVar__1_1, 1) = ((MR_Box) (Var_7));
  }
  return HeadVar__1_1;
}

MR_Word MR_CALL 
mercury__pprint__colon_space_0_f_0(void)
{
  return (MR_Word) (MR_mkword(1, &mercury__pprint_scalar_common_5[7]));
}

MR_Word MR_CALL 
mercury__pprint__semic_space_0_f_0(void)
{
  return (MR_Word) (MR_mkword(1, &mercury__pprint_scalar_common_5[6]));
}

MR_Word MR_CALL 
mercury__pprint__comma_space_0_f_0(void)
{
  return (MR_Word) (MR_mkword(1, &mercury__pprint_scalar_common_5[5]));
}

MR_Word MR_CALL 
mercury__pprint__space_0_f_0(void)
{
  return (MR_Word) (MR_mkword(1, &mercury__pprint_scalar_common_5[4]));
}

MR_Word MR_CALL 
mercury__pprint__colon_0_f_0(void)
{
  return (MR_Word) (MR_mkword(1, &mercury__pprint_scalar_common_5[3]));
}

MR_Word MR_CALL 
mercury__pprint__semic_0_f_0(void)
{
  return (MR_Word) (MR_mkword(1, &mercury__pprint_scalar_common_5[2]));
}

MR_Word MR_CALL 
mercury__pprint__comma_0_f_0(void)
{
  return (MR_Word) (MR_mkword(1, &mercury__pprint_scalar_common_5[1]));
}

MR_Word MR_CALL 
mercury__pprint__line_0_f_0(void)
{
  return (MR_Word) ((MR_Unsigned) 4U);
}

MR_Word MR_CALL 
mercury__pprint__poly_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;

  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Float F_83 = MR_unbox_float((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0)));
        MR_String Var_84;

        mercury__string__format__format_float_component_nowidth_noprec_4_p_0((MR_Word) (&mercury__pprint_scalar_common_5[0]), (MR_Integer) 2, F_83, &Var_84);
        HeadVar__2_2 = mercury__pprint__text_1_f_0(Var_84);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Integer I_15 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
        MR_String Var_16;

        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mercury__pprint_scalar_common_5[0]), I_15, &Var_16);
        HeadVar__2_2 = mercury__pprint__text_1_f_0(Var_16);
      }
      break;
    case (MR_Integer) 2:
      {
        int8_t I8_21 = ((int8_t) (MR_Word) (MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0)));
        MR_String Var_22;
        MR_Integer Var_26;

        Var_26 = mercury__int8__cast_to_int_1_f_0(I8_21);
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mercury__pprint_scalar_common_5[0]), Var_26, &Var_22);
        HeadVar__2_2 = mercury__pprint__text_1_f_0(Var_22);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            int16_t I16_28 = ((int16_t) (MR_Word) (MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1)));
            MR_String Var_29;
            MR_Integer Var_33;

            Var_33 = mercury__int16__cast_to_int_1_f_0(I16_28);
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mercury__pprint_scalar_common_5[0]), Var_33, &Var_29);
            HeadVar__2_2 = mercury__pprint__text_1_f_0(Var_29);
          }
          break;
        case (MR_Integer) 1:
          {
            int32_t I32_35 = ((int32_t) (MR_Word) (MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1)));
            MR_String Var_36;
            MR_Integer Var_40;

            Var_40 = mercury__int32__cast_to_int_1_f_0(I32_35);
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mercury__pprint_scalar_common_5[0]), Var_40, &Var_36);
            HeadVar__2_2 = mercury__pprint__text_1_f_0(Var_36);
          }
          break;
        case (MR_Integer) 2:
          {
            int64_t I64_42 = MR_unbox_int64((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1)));
            MR_String Var_43;
            MR_Integer Var_47;

            Var_47 = mercury__int64__cast_to_int_1_f_0(I64_42);
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mercury__pprint_scalar_common_5[0]), Var_47, &Var_43);
            HeadVar__2_2 = mercury__pprint__text_1_f_0(Var_43);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Unsigned U_49 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
            MR_String Var_50;

            mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&mercury__pprint_scalar_common_5[0]), (MR_Integer) 1, U_49, &Var_50);
            HeadVar__2_2 = mercury__pprint__text_1_f_0(Var_50);
          }
          break;
        case (MR_Integer) 4:
          {
            uint8_t U8_55 = ((uint8_t) (MR_Word) (MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1)));
            MR_String Var_56;
            MR_Unsigned Var_60;

            Var_60 = mercury__uint8__cast_to_uint_1_f_0(U8_55);
            mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&mercury__pprint_scalar_common_5[0]), (MR_Integer) 1, Var_60, &Var_56);
            HeadVar__2_2 = mercury__pprint__text_1_f_0(Var_56);
          }
          break;
        case (MR_Integer) 5:
          {
            uint16_t U16_62 = ((uint16_t) (MR_Word) (MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1)));
            MR_String Var_63;
            MR_Unsigned Var_67;

            Var_67 = mercury__uint16__cast_to_uint_1_f_0(U16_62);
            mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&mercury__pprint_scalar_common_5[0]), (MR_Integer) 1, Var_67, &Var_63);
            HeadVar__2_2 = mercury__pprint__text_1_f_0(Var_63);
          }
          break;
        case (MR_Integer) 6:
          {
            uint32_t U32_69 = ((uint32_t) (MR_Word) (MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1)));
            MR_String Var_70;
            MR_Unsigned Var_74;

            Var_74 = mercury__uint32__cast_to_uint_1_f_0(U32_69);
            mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&mercury__pprint_scalar_common_5[0]), (MR_Integer) 1, Var_74, &Var_70);
            HeadVar__2_2 = mercury__pprint__text_1_f_0(Var_70);
          }
          break;
        case (MR_Integer) 7:
          {
            uint64_t U64_76 = MR_unbox_uint64((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1)));
            MR_String Var_77;
            MR_Unsigned Var_81;

            Var_81 = mercury__uint64__cast_to_uint_1_f_0(U64_76);
            mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&mercury__pprint_scalar_common_5[0]), (MR_Integer) 1, Var_81, &Var_77);
            HeadVar__2_2 = mercury__pprint__text_1_f_0(Var_77);
          }
          break;
        case (MR_Integer) 8:
          {
            MR_String S_3 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));

            HeadVar__2_2 = mercury__pprint__text_1_f_0(S_3);
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Char C_9 = ((MR_Char) (MR_Word) (MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1)));
            MR_String Var_10;

            mercury__string__format__format_char_component_nowidth_3_p_0((MR_Word) (&mercury__pprint_scalar_common_5[0]), C_9, &Var_10);
            HeadVar__2_2 = mercury__pprint__text_1_f_0(Var_10);
          }
          break;
      }
      break;
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
mercury__pprint__text_1_f_0(
  MR_String S_3)
{
  MR_Word HeadVar__2_2;

  {
    HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (S_3));
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
mercury__pprint__nil_0_f_0(void)
{
  return (MR_Word) ((MR_Unsigned) 0U);
}

static MR_bool MR_CALL 
mercury__pprint____Unify____depth_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__pprint____Unify____depth_0_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__pprint____Compare____depth_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__pprint____Compare____depth_0_0(&conv0_HeadVar__1_1, ((MR_Integer) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__pprint____Unify____doc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__pprint____Unify____doc_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__pprint____Compare____doc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__pprint____Compare____doc_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__pprint____Unify____map_pair_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_bool succeeded;

  succeeded = mercury__pprint____Unify____map_pair_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  return succeeded;
}

static void MR_CALL 
mercury__pprint____Compare____map_pair_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__pprint____Compare____map_pair_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)));
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_Box MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____character__arity0______pprint__doc_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = mercury__pprint__ClassMethod_for_pprint__doc____character__arity0______pprint__doc_2_2_f_0(((MR_Integer) (wrapper_arg_1)), ((MR_Char) (MR_Word) wrapper_arg_2));
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static MR_Box MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____float__arity0______pprint__doc_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = mercury__pprint__ClassMethod_for_pprint__doc____float__arity0______pprint__doc_2_2_f_0(((MR_Integer) (wrapper_arg_1)), MR_unbox_float(wrapper_arg_2));
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static MR_Box MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____uint64__arity0______pprint__doc_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = mercury__pprint__ClassMethod_for_pprint__doc____uint64__arity0______pprint__doc_2_2_f_0(((MR_Integer) (wrapper_arg_1)), MR_unbox_uint64(wrapper_arg_2));
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static MR_Box MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____uint32__arity0______pprint__doc_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = mercury__pprint__ClassMethod_for_pprint__doc____uint32__arity0______pprint__doc_2_2_f_0(((MR_Integer) (wrapper_arg_1)), ((uint32_t) (MR_Word) wrapper_arg_2));
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static MR_Box MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____uint16__arity0______pprint__doc_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = mercury__pprint__ClassMethod_for_pprint__doc____uint16__arity0______pprint__doc_2_2_f_0(((MR_Integer) (wrapper_arg_1)), ((uint16_t) (MR_Word) wrapper_arg_2));
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static MR_Box MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____uint8__arity0______pprint__doc_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = mercury__pprint__ClassMethod_for_pprint__doc____uint8__arity0______pprint__doc_2_2_f_0(((MR_Integer) (wrapper_arg_1)), ((uint8_t) (MR_Word) wrapper_arg_2));
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static MR_Box MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____uint__arity0______pprint__doc_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = mercury__pprint__ClassMethod_for_pprint__doc____uint__arity0______pprint__doc_2_2_f_0(((MR_Integer) (wrapper_arg_1)), ((MR_Unsigned) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static MR_Box MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____int64__arity0______pprint__doc_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = mercury__pprint__ClassMethod_for_pprint__doc____int64__arity0______pprint__doc_2_2_f_0(((MR_Integer) (wrapper_arg_1)), MR_unbox_int64(wrapper_arg_2));
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static MR_Box MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____int32__arity0______pprint__doc_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = mercury__pprint__ClassMethod_for_pprint__doc____int32__arity0______pprint__doc_2_2_f_0(((MR_Integer) (wrapper_arg_1)), ((int32_t) (MR_Word) wrapper_arg_2));
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static MR_Box MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____int16__arity0______pprint__doc_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = mercury__pprint__ClassMethod_for_pprint__doc____int16__arity0______pprint__doc_2_2_f_0(((MR_Integer) (wrapper_arg_1)), ((int16_t) (MR_Word) wrapper_arg_2));
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static MR_Box MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____int8__arity0______pprint__doc_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = mercury__pprint__ClassMethod_for_pprint__doc____int8__arity0______pprint__doc_2_2_f_0(((MR_Integer) (wrapper_arg_1)), ((int8_t) (MR_Word) wrapper_arg_2));
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static MR_Box MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____int__arity0______pprint__doc_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = mercury__pprint__ClassMethod_for_pprint__doc____int__arity0______pprint__doc_2_2_f_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static MR_Box MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____string__arity0______pprint__doc_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = mercury__pprint__ClassMethod_for_pprint__doc____string__arity0______pprint__doc_2_2_f_0(((MR_Integer) (wrapper_arg_1)), ((MR_String) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static MR_Box MR_CALL 
mercury__pprint__ClassMethod_for_pprint__doc____pprint__doc__arity0______pprint__doc_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv0_Doc_3;

  conv0_Doc_3 = mercury__pprint__ClassMethod_for_pprint__doc____pprint__doc__arity0______pprint__doc_2_2_f_0(((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv0_Doc_3));
  return wrapper_arg_3;
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
