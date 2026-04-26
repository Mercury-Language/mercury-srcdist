/*
** Automatically generated from `sized_pretty.m'
** by the Mercury compiler,
** version rotd-2026-04-26
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


// :- module mdb.sized_pretty.
// :- implementation.

/*
INIT mercury__mdb__sized_pretty__init
ENDINIT
*/

#include "mdb.sized_pretty.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "getopt.mih"
#include "int.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdb.mih"
#include "mdbcomp.mih"
#include "ops.mih"
#include "pair.mih"
#include "pprint.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "std_util.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "io.stream_db.mih"
#include "mdb.browser_info.mih"
#include "mdb.browser_term.mih"
#include "mdb.parse.mih"
#include "mdb.term_rep.mih"
#include "mdbcomp.program_representation.mih"




static const MR_FA_PseudoTypeInfo_Struct1 mdb__sized_pretty__mdb__sized_pretty__pti_size_annotated_term_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct2 mdb__sized_pretty__pair__pti_pair_2__pseudo_1__pseudo_mdb__sized_pretty__pti_size_annotated_term_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 mdb__sized_pretty__maybe__pti_maybe_1__pseudo_pair__pti_pair_2__pseudo_1__pseudo_mdb__sized_pretty__pti_size_annotated_term_1__pseudo_1;

static const MR_Integer mdb__sized_pretty__mdb__sized_pretty__functor_number_map_char_count_0[1];

static const MR_NotagFunctorDesc mdb__sized_pretty__mdb__sized_pretty__notag_functor_desc_char_count_0;

static const MR_Integer mdb__sized_pretty__mdb__sized_pretty__functor_number_map_functor_count_0[1];

static const MR_NotagFunctorDesc mdb__sized_pretty__mdb__sized_pretty__notag_functor_desc_functor_count_0;

static const MR_DuFunctorDesc mdb__sized_pretty__mdb__sized_pretty__du_functor_desc_maybe_deconstructed_1_0;

static const MR_FA_PseudoTypeInfo_Struct1 mdb__sized_pretty__list__pti_list_1__pseudo_maybe__pti_maybe_1__pseudo_pair__pti_pair_2__pseudo_1__pseudo_mdb__sized_pretty__pti_size_annotated_term_1__pseudo_1;

static const MR_PseudoTypeInfo mdb__sized_pretty__mdb__sized_pretty__field_types_maybe_deconstructed_1_1[3];

static const MR_DuFunctorDesc mdb__sized_pretty__mdb__sized_pretty__du_functor_desc_maybe_deconstructed_1_1;

static const MR_DuFunctorDescPtr mdb__sized_pretty__mdb__sized_pretty__du_stag_ordered_maybe_deconstructed_1_0[1];

static const MR_DuFunctorDescPtr mdb__sized_pretty__mdb__sized_pretty__du_stag_ordered_maybe_deconstructed_1_1[1];

static const MR_DuPtagLayout mdb__sized_pretty__mdb__sized_pretty__du_ptag_ordered_maybe_deconstructed_1[2];

static const MR_DuFunctorDescPtr mdb__sized_pretty__mdb__sized_pretty__du_name_ordered_maybe_deconstructed_1[2];

static const MR_Integer mdb__sized_pretty__mdb__sized_pretty__functor_number_map_maybe_deconstructed_1[2];

static const MR_Integer mdb__sized_pretty__mdb__sized_pretty__functor_number_map_measure_params_0[1];

static const MR_NotagFunctorDesc mdb__sized_pretty__mdb__sized_pretty__notag_functor_desc_measure_params_0;

static const MR_EnumFunctorDesc mdb__sized_pretty__mdb__sized_pretty__enum_functor_desc_no_measure_params_0_0;

static const MR_EnumFunctorDescPtr mdb__sized_pretty__mdb__sized_pretty__enum_ordinal_ordered_no_measure_params_0[1];

static const MR_EnumFunctorDescPtr mdb__sized_pretty__mdb__sized_pretty__enum_name_ordered_no_measure_params_0[1];

static const MR_Integer mdb__sized_pretty__mdb__sized_pretty__functor_number_map_no_measure_params_0[1];

static const MR_PseudoTypeInfo mdb__sized_pretty__mdb__sized_pretty__field_types_size_annotated_term_1_0[5];

static const MR_DuFunctorDesc mdb__sized_pretty__mdb__sized_pretty__du_functor_desc_size_annotated_term_1_0;

static const MR_FA_PseudoTypeInfo_Struct1 mdb__sized_pretty__mdb__sized_pretty__pti_maybe_deconstructed_1__pseudo_1;

static const MR_PseudoTypeInfo mdb__sized_pretty__mdb__sized_pretty__field_types_size_annotated_term_1_1[3];

static const MR_DuFunctorDesc mdb__sized_pretty__mdb__sized_pretty__du_functor_desc_size_annotated_term_1_1;

static const MR_DuFunctorDescPtr mdb__sized_pretty__mdb__sized_pretty__du_stag_ordered_size_annotated_term_1_0[1];

static const MR_DuFunctorDescPtr mdb__sized_pretty__mdb__sized_pretty__du_stag_ordered_size_annotated_term_1_1[1];

static const MR_DuPtagLayout mdb__sized_pretty__mdb__sized_pretty__du_ptag_ordered_size_annotated_term_1[2];

static const MR_DuFunctorDescPtr mdb__sized_pretty__mdb__sized_pretty__du_name_ordered_size_annotated_term_1[2];

static const MR_Integer mdb__sized_pretty__mdb__sized_pretty__functor_number_map_size_annotated_term_1[2];

static const MR_PseudoTypeInfo mdb__sized_pretty__mdb__sized_pretty__field_types_size_count_0_0[1];

static const MR_DuFunctorDesc mdb__sized_pretty__mdb__sized_pretty__du_functor_desc_size_count_0_0;

static const MR_PseudoTypeInfo mdb__sized_pretty__mdb__sized_pretty__field_types_size_count_0_1[1];

static const MR_DuFunctorDesc mdb__sized_pretty__mdb__sized_pretty__du_functor_desc_size_count_0_1;

static const MR_DuFunctorDescPtr mdb__sized_pretty__mdb__sized_pretty__du_stag_ordered_size_count_0_0[1];

static const MR_DuFunctorDescPtr mdb__sized_pretty__mdb__sized_pretty__du_stag_ordered_size_count_0_1[1];

static const MR_DuPtagLayout mdb__sized_pretty__mdb__sized_pretty__du_ptag_ordered_size_count_0[2];

static const MR_DuFunctorDescPtr mdb__sized_pretty__mdb__sized_pretty__du_name_ordered_size_count_0[2];

static const MR_Integer mdb__sized_pretty__mdb__sized_pretty__functor_number_map_size_count_0[2];

static const MR_ConstString mdb__sized_pretty__mdb__sized_pretty__type_class_id_var_names_measure_with_params_2[2];

static const MR_TypeClassMethod mdb__sized_pretty__mdb__sized_pretty__type_class_id_method_ids_measure_with_params_2[4];

static const MR_TypeClassId mdb__sized_pretty__mdb__sized_pretty__type_class_id_measure_with_params_2;

static const MR_TypeClassConstraint_1Struct mdb__sized_pretty__mdb__sized_pretty__type_class_decl_super_measure_with_params_2_1;

static const MR_TypeClassConstraint mdb__sized_pretty__mdb__sized_pretty__type_class_decl_supers_measure_with_params_2[1];

static const MR_ConstString mdb__sized_pretty__mdb__sized_pretty__type_class_id_var_names_measure_1[1];

static const MR_TypeClassMethod mdb__sized_pretty__mdb__sized_pretty__type_class_id_method_ids_measure_1[3];

static const MR_TypeClassId mdb__sized_pretty__mdb__sized_pretty__type_class_id_measure_1;

static MR_Word MR_CALL 
mdb__sized_pretty__IntroducedFrom__func__to_doc_sized_2__641__1_1_f_0(
  MR_Word HeadVar__1_45);

static MR_Word MR_CALL 
mdb__sized_pretty__IntroducedFrom__func__second_pass__475__1_2_f_0(
  MR_Word TypeClassInfo_for_measure_with_params_55,
  MR_Word HeadVar__2_66);

static void MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__functor_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__measured_split_10_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__4_4,
  MR_Integer HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word * HeadVar__9_9);

static MR_Integer MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__functor_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__maximum_functors_2_2_f_0(
  MR_Word HeadVar__1_1);

static MR_Word MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__functor_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__subtract_measures_3_3_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__functor_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__add_measures_3_3_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__char_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__measured_split_10_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__4_4,
  MR_Integer HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word * HeadVar__9_9);

static MR_Integer MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__char_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__maximum_functors_2_2_f_0(
  MR_Word HeadVar__1_1);

static MR_Word MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__char_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__subtract_measures_3_3_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__char_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__add_measures_3_3_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__size_count__arity0__mdb__sized_pretty__measure_params__arity0______mdb__sized_pretty__measured_split_10_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Integer HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word * HeadVar__9_9,
  MR_Word * HeadVar__10_10);

static MR_Integer MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__size_count__arity0__mdb__sized_pretty__measure_params__arity0______mdb__sized_pretty__maximum_functors_2_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__size_count__arity0__mdb__sized_pretty__measure_params__arity0______mdb__sized_pretty__subtract_measures_3_3_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_Word MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__size_count__arity0__mdb__sized_pretty__measure_params__arity0______mdb__sized_pretty__add_measures_3_3_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_Word MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__functor_count__arity0______mdb__sized_pretty__compare_measures_2_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__functor_count__arity0______mdb__sized_pretty__zero_measure_0_0_f_0(void);

static MR_Word MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__functor_count__arity0______mdb__sized_pretty__max_measure_2_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__char_count__arity0______mdb__sized_pretty__compare_measures_2_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__char_count__arity0______mdb__sized_pretty__zero_measure_0_0_f_0(void);

static MR_Word MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__char_count__arity0______mdb__sized_pretty__max_measure_2_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__size_count__arity0______mdb__sized_pretty__compare_measures_2_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__size_count__arity0______mdb__sized_pretty__zero_measure_0_0_f_0(void);

static MR_Word MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__size_count__arity0______mdb__sized_pretty__max_measure_2_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mdb__sized_pretty____Compare____size_count_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mdb__sized_pretty____Unify____size_count_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mdb__sized_pretty____Compare____size_annotated_term_1_0(
  MR_Word TypeInfo_for_T_28,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mdb__sized_pretty____Unify____size_annotated_term_1_0(
  MR_Word TypeInfo_for_T_21,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mdb__sized_pretty____Compare____size_annotated_args_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mdb__sized_pretty____Unify____size_annotated_args_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mdb__sized_pretty____Compare____no_measure_params_0_0(
  MR_Word * HeadVar__1_1);

static void MR_CALL 
mdb__sized_pretty__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_110_111_95_109_101_97_115_117_114_101_95_112_97_114_97_109_115_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1);

static MR_bool MR_CALL 
mdb__sized_pretty____Unify____no_measure_params_0_0(void);

static void MR_CALL 
mdb__sized_pretty____Compare____measure_params_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mdb__sized_pretty____Unify____measure_params_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mdb__sized_pretty____Compare____maybe_deconstructed_1_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mdb__sized_pretty____Unify____maybe_deconstructed_1_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mdb__sized_pretty____Compare____functor_count_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mdb__sized_pretty____Unify____functor_count_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mdb__sized_pretty____Compare____char_count_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mdb__sized_pretty____Unify____char_count_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_Integer MR_CALL 
mdb__sized_pretty__maximum_functors_2_f_0(
  MR_Word TypeClassInfo_for_measure_with_params_4,
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2);

static MR_Word MR_CALL 
mdb__sized_pretty__compare_measures_2_f_0(
  MR_Word TypeClassInfo_for_measure_4,
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2);

static MR_Box MR_CALL 
mdb__sized_pretty__zero_measure_0_f_0(
  MR_Word TypeClassInfo_for_measure_2);

static MR_Box MR_CALL 
mdb__sized_pretty__max_measure_2_f_0(
  MR_Word TypeClassInfo_for_measure_4,
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2);

static void MR_CALL 
mdb__sized_pretty__get_arg_length_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer * HeadVar__2_2,
  MR_Integer * HeadVar__3_3);

static void MR_CALL 
mdb__sized_pretty__handle_arg_2_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static MR_Box MR_CALL 
mdb__sized_pretty__to_doc_sized_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
mdb__sized_pretty__to_doc_sized_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
mdb__sized_pretty__to_doc_sized_2_p_0(
  MR_Word TypeInfo_for_T_51,
  MR_Word HeadVar__1_1,
  MR_Word * Doc_2);

static MR_Box MR_CALL 
mdb__sized_pretty__to_doc_sized_2_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
mdb__sized_pretty__to_doc_sized_2_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
mdb__sized_pretty__to_doc_sized_2_4_p_0(
  MR_Word TypeInfo_for_T_34,
  MR_String Functor_1,
  MR_Integer HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
mdb__sized_pretty__process_args_7_p_0(
  MR_Word TypeClassInfo_for_measure_with_params_40,
  MR_Word BrowserDb_1,
  MR_Box Params_2,
  MR_Word HeadVar__3_3,
  MR_Box ArgLimit_4,
  MR_Box SplitLimit_5,
  MR_Word * HeadVar__6_6,
  MR_Box * HeadVar__7_7);

static MR_Box MR_CALL 
mdb__sized_pretty__annotate_with_size_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
mdb__sized_pretty__annotate_with_size_5_p_0(
  MR_Word TypeClassInfo_for_measure_with_params_12,
  MR_Word BrowserDb_6,
  MR_Word BrowserTerm_7,
  MR_Box Params_8,
  MR_Box Limit_9,
  MR_Word * SizedTerm2_10);

static void MR_CALL 
mdb__sized_pretty__measured_split_10_p_0(
  MR_Word TypeClassInfo_for_measure_with_params_11,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box HeadVar__4_4,
  MR_Integer HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Box * HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Box * HeadVar__9_9,
  MR_Box * HeadVar__10_10);

static MR_Box MR_CALL 
mdb__sized_pretty__subtract_measures_3_f_0(
  MR_Word TypeClassInfo_for_measure_with_params_5,
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3);

static MR_Box MR_CALL 
mdb__sized_pretty__add_measures_3_f_0(
  MR_Word TypeClassInfo_for_measure_with_params_5,
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3);

static void MR_CALL 
mdb__sized_pretty__check_args_6_p_0(
  MR_Word TypeClassInfo_for_measure_with_params_37,
  MR_Box Params_1,
  MR_Word HeadVar__2_2,
  MR_Box ArgLimit_3,
  MR_Integer * HeadVar__4_4,
  MR_Box STATE_VARIABLE_Used_0_5,
  MR_Box * STATE_VARIABLE_Used_6);

static void MR_CALL 
mdb__sized_pretty__annotate_args_with_size_10_p_0(
  MR_Word TypeClassInfo_for_measure_with_params_49,
  MR_Word BrowserDb_1,
  MR_Word HeadVar__2_2,
  MR_Word MaybeInitArgLimit_3,
  MR_Box Params_4,
  MR_Box Limit_5,
  MR_Box HeadVar__6_6,
  MR_Box * SoFar_7,
  MR_Word HeadVar__8_8,
  MR_Word * Exact_9,
  MR_Word * HeadVar__10_10);

static MR_bool MR_CALL 
mdb__sized_pretty____Unify____char_count_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__sized_pretty____Compare____char_count_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__sized_pretty____Unify____functor_count_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__sized_pretty____Compare____functor_count_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__sized_pretty____Unify____maybe_deconstructed_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mdb__sized_pretty____Compare____maybe_deconstructed_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mdb__sized_pretty____Unify____measure_params_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__sized_pretty____Compare____measure_params_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__sized_pretty____Unify____no_measure_params_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__sized_pretty____Compare____no_measure_params_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__sized_pretty____Unify____size_annotated_args_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mdb__sized_pretty____Compare____size_annotated_args_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mdb__sized_pretty____Unify____size_annotated_term_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mdb__sized_pretty____Compare____size_annotated_term_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mdb__sized_pretty____Unify____size_count_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__sized_pretty____Compare____size_count_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__size_count__arity0__mdb__sized_pretty__measure_params__arity0______mdb__sized_pretty__add_measures_3_3_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__size_count__arity0__mdb__sized_pretty__measure_params__arity0______mdb__sized_pretty__subtract_measures_3_3_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__size_count__arity0__mdb__sized_pretty__measure_params__arity0______mdb__sized_pretty__maximum_functors_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__size_count__arity0__mdb__sized_pretty__measure_params__arity0______mdb__sized_pretty__measured_split_10_10_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box * wrapper_arg_8,
  MR_Box * wrapper_arg_9,
  MR_Box * wrapper_arg_10);

static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__char_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__add_measures_3_3_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__char_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__subtract_measures_3_3_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__char_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__maximum_functors_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__char_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__measured_split_10_10_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box * wrapper_arg_8,
  MR_Box * wrapper_arg_9,
  MR_Box * wrapper_arg_10);

static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__functor_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__add_measures_3_3_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__functor_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__subtract_measures_3_3_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__functor_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__maximum_functors_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__functor_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__measured_split_10_10_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box * wrapper_arg_8,
  MR_Box * wrapper_arg_9,
  MR_Box * wrapper_arg_10);

static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__size_count__arity0______mdb__sized_pretty__max_measure_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__size_count__arity0______mdb__sized_pretty__zero_measure_0_0_f_0_10001(
  MR_Box closure_arg);

static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__size_count__arity0______mdb__sized_pretty__compare_measures_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__char_count__arity0______mdb__sized_pretty__max_measure_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__char_count__arity0______mdb__sized_pretty__zero_measure_0_0_f_0_10001(
  MR_Box closure_arg);

static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__char_count__arity0______mdb__sized_pretty__compare_measures_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__functor_count__arity0______mdb__sized_pretty__max_measure_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__functor_count__arity0______mdb__sized_pretty__zero_measure_0_0_f_0_10001(
  MR_Box closure_arg);

static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__functor_count__arity0______mdb__sized_pretty__compare_measures_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);


static /* final */ const MR_Box mdb__sized_pretty_scalar_common_1[3][2];

static /* final */ const MR_Box mdb__sized_pretty_scalar_common_2[1][4];

static /* final */ const MR_Box mdb__sized_pretty_scalar_common_3[2][1];

static /* final */ const MR_Integer mdb__sized_pretty_scalar_common_4[2][2];

static /* final */ const MR_Box mdb__sized_pretty_scalar_common_5[2][6];

static /* final */ const MR_Box mdb__sized_pretty_scalar_common_6[1][5];

static /* final */ const MR_Box mdb__sized_pretty_scalar_common_7[2][3];




static /* final */ const MR_Box mdb__sized_pretty_scalar_common_1[3][2] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_mdb__sized_pretty__measure__arity1__mdb__sized_pretty__size_count__arity0__)),
    ((MR_Box) (&mdb__sized_pretty__mdb__sized_pretty__type_ctor_info_size_count_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_pprint__doc__arity1__pprint__doc__arity0__)),
    ((MR_Box) (&mercury__pprint__pprint__type_ctor_info_doc_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mdb__sized_pretty__mdb__sized_pretty__type_ctor_info_functor_count_0))
  },
};

static /* final */ const MR_Box mdb__sized_pretty_scalar_common_2[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_mdb__sized_pretty__measure_with_params__arity2__mdb__sized_pretty__size_count__arity0__mdb__sized_pretty__measure_params__arity0__)),
    ((MR_Box) (&mdb__sized_pretty_scalar_common_1[0])),
    ((MR_Box) (&mdb__sized_pretty__mdb__sized_pretty__type_ctor_info_size_count_0)),
    ((MR_Box) (&mdb__sized_pretty__mdb__sized_pretty__type_ctor_info_measure_params_0))
  },
};

static /* final */ const MR_Box mdb__sized_pretty_scalar_common_3[2][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Integer) 1)) },
  /* row   1 */
  { ((MR_Box) ((MR_Integer) 0)) },
};

static /* final */ const MR_Integer mdb__sized_pretty_scalar_common_4[2][2] = {
  /* row   0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 67663
  },
  /* row   1 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
};

static /* final */ const MR_Box mdb__sized_pretty_scalar_common_5[2][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (&mdb__sized_pretty_scalar_common_4[0])),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&mdb__sized_pretty__maybe__pti_maybe_1__pseudo_pair__pti_pair_2__pseudo_1__pseudo_mdb__sized_pretty__pti_size_annotated_term_1__pseudo_1)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (&mdb__sized_pretty_scalar_common_4[1])),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mdb__sized_pretty__maybe__pti_maybe_1__pseudo_pair__pti_pair_2__pseudo_1__pseudo_mdb__sized_pretty__pti_size_annotated_term_1__pseudo_1)),
    ((MR_Box) (&mercury__pprint__pprint__type_ctor_info_doc_0))
  },
};

static /* final */ const MR_Box mdb__sized_pretty_scalar_common_6[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__pprint__pprint__type_ctor_info_doc_0)),
    ((MR_Box) (&mercury__pprint__pprint__type_ctor_info_doc_0))
  },
};

static /* final */ const MR_Box mdb__sized_pretty_scalar_common_7[2][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mdb__sized_pretty_scalar_common_6[0])),
    ((MR_Box) (mdb__sized_pretty__to_doc_sized_2_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mdb__sized_pretty_scalar_common_6[0])),
    ((MR_Box) (mdb__sized_pretty__to_doc_sized_2_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "mdb.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 mdb__sized_pretty__mdb__sized_pretty__pti_size_annotated_term_1__pseudo_1 = {
  &mdb__sized_pretty__mdb__sized_pretty__type_ctor_info_size_annotated_term_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

static const MR_FA_PseudoTypeInfo_Struct2 mdb__sized_pretty__pair__pti_pair_2__pseudo_1__pseudo_mdb__sized_pretty__pti_size_annotated_term_1__pseudo_1 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) (&mdb__sized_pretty__mdb__sized_pretty__pti_size_annotated_term_1__pseudo_1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mdb__sized_pretty__maybe__pti_maybe_1__pseudo_pair__pti_pair_2__pseudo_1__pseudo_mdb__sized_pretty__pti_size_annotated_term_1__pseudo_1 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_PseudoTypeInfo) (&mdb__sized_pretty__pair__pti_pair_2__pseudo_1__pseudo_mdb__sized_pretty__pti_size_annotated_term_1__pseudo_1) }
};

static const MR_Integer mdb__sized_pretty__mdb__sized_pretty__functor_number_map_char_count_0[1] = { (MR_Integer) 0 };

static const MR_NotagFunctorDesc mdb__sized_pretty__mdb__sized_pretty__notag_functor_desc_char_count_0 = {
  (MR_String) "char_count",
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mdb__sized_pretty__mdb__sized_pretty__type_ctor_info_char_count_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mdb__sized_pretty____Unify____char_count_0_0_10001)),
  ((MR_Box) (mdb__sized_pretty____Compare____char_count_0_0_10001)),
  (MR_String) "mdb.sized_pretty",
  (MR_String) "char_count",
  { &mdb__sized_pretty__mdb__sized_pretty__notag_functor_desc_char_count_0 },
  { &mdb__sized_pretty__mdb__sized_pretty__notag_functor_desc_char_count_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  mdb__sized_pretty__mdb__sized_pretty__functor_number_map_char_count_0,

};

static const MR_Integer mdb__sized_pretty__mdb__sized_pretty__functor_number_map_functor_count_0[1] = { (MR_Integer) 0 };

static const MR_NotagFunctorDesc mdb__sized_pretty__mdb__sized_pretty__notag_functor_desc_functor_count_0 = {
  (MR_String) "functor_count",
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mdb__sized_pretty__mdb__sized_pretty__type_ctor_info_functor_count_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mdb__sized_pretty____Unify____functor_count_0_0_10001)),
  ((MR_Box) (mdb__sized_pretty____Compare____functor_count_0_0_10001)),
  (MR_String) "mdb.sized_pretty",
  (MR_String) "functor_count",
  { &mdb__sized_pretty__mdb__sized_pretty__notag_functor_desc_functor_count_0 },
  { &mdb__sized_pretty__mdb__sized_pretty__notag_functor_desc_functor_count_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  mdb__sized_pretty__mdb__sized_pretty__functor_number_map_functor_count_0,

};

static const MR_DuFunctorDesc mdb__sized_pretty__mdb__sized_pretty__du_functor_desc_maybe_deconstructed_1_0 = {
  (MR_String) "not_deconstructed",
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

static const MR_FA_PseudoTypeInfo_Struct1 mdb__sized_pretty__list__pti_list_1__pseudo_maybe__pti_maybe_1__pseudo_pair__pti_pair_2__pseudo_1__pseudo_mdb__sized_pretty__pti_size_annotated_term_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mdb__sized_pretty__maybe__pti_maybe_1__pseudo_pair__pti_pair_2__pseudo_1__pseudo_mdb__sized_pretty__pti_size_annotated_term_1__pseudo_1) }
};

static const MR_PseudoTypeInfo mdb__sized_pretty__mdb__sized_pretty__field_types_maybe_deconstructed_1_1[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mdb__sized_pretty__list__pti_list_1__pseudo_maybe__pti_maybe_1__pseudo_pair__pti_pair_2__pseudo_1__pseudo_mdb__sized_pretty__pti_size_annotated_term_1__pseudo_1)
};

static const MR_DuFunctorDesc mdb__sized_pretty__mdb__sized_pretty__du_functor_desc_maybe_deconstructed_1_1 = {
  (MR_String) "deconstructed",
  INT16_C(3),
  UINT16_C(4),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mdb__sized_pretty__mdb__sized_pretty__field_types_maybe_deconstructed_1_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdb__sized_pretty__mdb__sized_pretty__du_stag_ordered_maybe_deconstructed_1_0[1] = { &mdb__sized_pretty__mdb__sized_pretty__du_functor_desc_maybe_deconstructed_1_0 };

static const MR_DuFunctorDescPtr mdb__sized_pretty__mdb__sized_pretty__du_stag_ordered_maybe_deconstructed_1_1[1] = { &mdb__sized_pretty__mdb__sized_pretty__du_functor_desc_maybe_deconstructed_1_1 };

static const MR_DuPtagLayout mdb__sized_pretty__mdb__sized_pretty__du_ptag_ordered_maybe_deconstructed_1[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mdb__sized_pretty__mdb__sized_pretty__du_stag_ordered_maybe_deconstructed_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__sized_pretty__mdb__sized_pretty__du_stag_ordered_maybe_deconstructed_1_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mdb__sized_pretty__mdb__sized_pretty__du_name_ordered_maybe_deconstructed_1[2] = {
  &mdb__sized_pretty__mdb__sized_pretty__du_functor_desc_maybe_deconstructed_1_1,
  &mdb__sized_pretty__mdb__sized_pretty__du_functor_desc_maybe_deconstructed_1_0
};

static const MR_Integer mdb__sized_pretty__mdb__sized_pretty__functor_number_map_maybe_deconstructed_1[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdb__sized_pretty__mdb__sized_pretty__type_ctor_info_maybe_deconstructed_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__sized_pretty____Unify____maybe_deconstructed_1_0_10001)),
  ((MR_Box) (mdb__sized_pretty____Compare____maybe_deconstructed_1_0_10001)),
  (MR_String) "mdb.sized_pretty",
  (MR_String) "maybe_deconstructed",
  { mdb__sized_pretty__mdb__sized_pretty__du_name_ordered_maybe_deconstructed_1 },
  { mdb__sized_pretty__mdb__sized_pretty__du_ptag_ordered_maybe_deconstructed_1 },
  (MR_Integer) 2,
  UINT16_C(12),
  mdb__sized_pretty__mdb__sized_pretty__functor_number_map_maybe_deconstructed_1,

};

static const MR_Integer mdb__sized_pretty__mdb__sized_pretty__functor_number_map_measure_params_0[1] = { (MR_Integer) 0 };

static const MR_NotagFunctorDesc mdb__sized_pretty__mdb__sized_pretty__notag_functor_desc_measure_params_0 = {
  (MR_String) "measure_params",
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mdb__sized_pretty__mdb__sized_pretty__type_ctor_info_measure_params_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mdb__sized_pretty____Unify____measure_params_0_0_10001)),
  ((MR_Box) (mdb__sized_pretty____Compare____measure_params_0_0_10001)),
  (MR_String) "mdb.sized_pretty",
  (MR_String) "measure_params",
  { &mdb__sized_pretty__mdb__sized_pretty__notag_functor_desc_measure_params_0 },
  { &mdb__sized_pretty__mdb__sized_pretty__notag_functor_desc_measure_params_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  mdb__sized_pretty__mdb__sized_pretty__functor_number_map_measure_params_0,

};

static const MR_EnumFunctorDesc mdb__sized_pretty__mdb__sized_pretty__enum_functor_desc_no_measure_params_0_0 = {
  (MR_String) "no_measure_params",
  INT32_C(0)
};

static const MR_EnumFunctorDescPtr mdb__sized_pretty__mdb__sized_pretty__enum_ordinal_ordered_no_measure_params_0[1] = { &mdb__sized_pretty__mdb__sized_pretty__enum_functor_desc_no_measure_params_0_0 };

static const MR_EnumFunctorDescPtr mdb__sized_pretty__mdb__sized_pretty__enum_name_ordered_no_measure_params_0[1] = { &mdb__sized_pretty__mdb__sized_pretty__enum_functor_desc_no_measure_params_0_0 };

static const MR_Integer mdb__sized_pretty__mdb__sized_pretty__functor_number_map_no_measure_params_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct mdb__sized_pretty__mdb__sized_pretty__type_ctor_info_no_measure_params_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (mdb__sized_pretty____Unify____no_measure_params_0_0_10001)),
  ((MR_Box) (mdb__sized_pretty____Compare____no_measure_params_0_0_10001)),
  (MR_String) "mdb.sized_pretty",
  (MR_String) "no_measure_params",
  { mdb__sized_pretty__mdb__sized_pretty__enum_name_ordered_no_measure_params_0 },
  { mdb__sized_pretty__mdb__sized_pretty__enum_ordinal_ordered_no_measure_params_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  mdb__sized_pretty__mdb__sized_pretty__functor_number_map_no_measure_params_0,

};

const MR_TypeCtorInfo_Struct mdb__sized_pretty__mdb__sized_pretty__type_ctor_info_size_annotated_args_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mdb__sized_pretty____Unify____size_annotated_args_1_0_10001)),
  ((MR_Box) (mdb__sized_pretty____Compare____size_annotated_args_1_0_10001)),
  (MR_String) "mdb.sized_pretty",
  (MR_String) "size_annotated_args",
  { NULL },
  { (MR_PseudoTypeInfo) (&mdb__sized_pretty__list__pti_list_1__pseudo_maybe__pti_maybe_1__pseudo_pair__pti_pair_2__pseudo_1__pseudo_mdb__sized_pretty__pti_size_annotated_term_1__pseudo_1) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo mdb__sized_pretty__mdb__sized_pretty__field_types_size_annotated_term_1_0[5] = {
  (MR_PseudoTypeInfo) (&mdb__browser_term__mdb__browser_term__type_ctor_info_browser_term_0),
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mdb__sized_pretty__list__pti_list_1__pseudo_maybe__pti_maybe_1__pseudo_pair__pti_pair_2__pseudo_1__pseudo_mdb__sized_pretty__pti_size_annotated_term_1__pseudo_1)
};

static const MR_DuFunctorDesc mdb__sized_pretty__mdb__sized_pretty__du_functor_desc_size_annotated_term_1_0 = {
  (MR_String) "exact",
  INT16_C(5),
  UINT16_C(18),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mdb__sized_pretty__mdb__sized_pretty__field_types_size_annotated_term_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_PseudoTypeInfo_Struct1 mdb__sized_pretty__mdb__sized_pretty__pti_maybe_deconstructed_1__pseudo_1 = {
  &mdb__sized_pretty__mdb__sized_pretty__type_ctor_info_maybe_deconstructed_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

static const MR_PseudoTypeInfo mdb__sized_pretty__mdb__sized_pretty__field_types_size_annotated_term_1_1[3] = {
  (MR_PseudoTypeInfo) (&mdb__browser_term__mdb__browser_term__type_ctor_info_browser_term_0),
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) (&mdb__sized_pretty__mdb__sized_pretty__pti_maybe_deconstructed_1__pseudo_1)
};

static const MR_DuFunctorDesc mdb__sized_pretty__mdb__sized_pretty__du_functor_desc_size_annotated_term_1_1 = {
  (MR_String) "at_least",
  INT16_C(3),
  UINT16_C(6),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mdb__sized_pretty__mdb__sized_pretty__field_types_size_annotated_term_1_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdb__sized_pretty__mdb__sized_pretty__du_stag_ordered_size_annotated_term_1_0[1] = { &mdb__sized_pretty__mdb__sized_pretty__du_functor_desc_size_annotated_term_1_0 };

static const MR_DuFunctorDescPtr mdb__sized_pretty__mdb__sized_pretty__du_stag_ordered_size_annotated_term_1_1[1] = { &mdb__sized_pretty__mdb__sized_pretty__du_functor_desc_size_annotated_term_1_1 };

static const MR_DuPtagLayout mdb__sized_pretty__mdb__sized_pretty__du_ptag_ordered_size_annotated_term_1[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__sized_pretty__mdb__sized_pretty__du_stag_ordered_size_annotated_term_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__sized_pretty__mdb__sized_pretty__du_stag_ordered_size_annotated_term_1_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mdb__sized_pretty__mdb__sized_pretty__du_name_ordered_size_annotated_term_1[2] = {
  &mdb__sized_pretty__mdb__sized_pretty__du_functor_desc_size_annotated_term_1_1,
  &mdb__sized_pretty__mdb__sized_pretty__du_functor_desc_size_annotated_term_1_0
};

static const MR_Integer mdb__sized_pretty__mdb__sized_pretty__functor_number_map_size_annotated_term_1[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdb__sized_pretty__mdb__sized_pretty__type_ctor_info_size_annotated_term_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__sized_pretty____Unify____size_annotated_term_1_0_10001)),
  ((MR_Box) (mdb__sized_pretty____Compare____size_annotated_term_1_0_10001)),
  (MR_String) "mdb.sized_pretty",
  (MR_String) "size_annotated_term",
  { mdb__sized_pretty__mdb__sized_pretty__du_name_ordered_size_annotated_term_1 },
  { mdb__sized_pretty__mdb__sized_pretty__du_ptag_ordered_size_annotated_term_1 },
  (MR_Integer) 2,
  UINT16_C(12),
  mdb__sized_pretty__mdb__sized_pretty__functor_number_map_size_annotated_term_1,

};

static const MR_PseudoTypeInfo mdb__sized_pretty__mdb__sized_pretty__field_types_size_count_0_0[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) };

static const MR_DuFunctorDesc mdb__sized_pretty__mdb__sized_pretty__du_functor_desc_size_count_0_0 = {
  (MR_String) "line_count",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mdb__sized_pretty__mdb__sized_pretty__field_types_size_count_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__sized_pretty__mdb__sized_pretty__field_types_size_count_0_1[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) };

static const MR_DuFunctorDesc mdb__sized_pretty__mdb__sized_pretty__du_functor_desc_size_count_0_1 = {
  (MR_String) "character_count",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mdb__sized_pretty__mdb__sized_pretty__field_types_size_count_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdb__sized_pretty__mdb__sized_pretty__du_stag_ordered_size_count_0_0[1] = { &mdb__sized_pretty__mdb__sized_pretty__du_functor_desc_size_count_0_0 };

static const MR_DuFunctorDescPtr mdb__sized_pretty__mdb__sized_pretty__du_stag_ordered_size_count_0_1[1] = { &mdb__sized_pretty__mdb__sized_pretty__du_functor_desc_size_count_0_1 };

static const MR_DuPtagLayout mdb__sized_pretty__mdb__sized_pretty__du_ptag_ordered_size_count_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__sized_pretty__mdb__sized_pretty__du_stag_ordered_size_count_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__sized_pretty__mdb__sized_pretty__du_stag_ordered_size_count_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mdb__sized_pretty__mdb__sized_pretty__du_name_ordered_size_count_0[2] = {
  &mdb__sized_pretty__mdb__sized_pretty__du_functor_desc_size_count_0_1,
  &mdb__sized_pretty__mdb__sized_pretty__du_functor_desc_size_count_0_0
};

static const MR_Integer mdb__sized_pretty__mdb__sized_pretty__functor_number_map_size_count_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdb__sized_pretty__mdb__sized_pretty__type_ctor_info_size_count_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__sized_pretty____Unify____size_count_0_0_10001)),
  ((MR_Box) (mdb__sized_pretty____Compare____size_count_0_0_10001)),
  (MR_String) "mdb.sized_pretty",
  (MR_String) "size_count",
  { mdb__sized_pretty__mdb__sized_pretty__du_name_ordered_size_count_0 },
  { mdb__sized_pretty__mdb__sized_pretty__du_ptag_ordered_size_count_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  mdb__sized_pretty__mdb__sized_pretty__functor_number_map_size_count_0,

};

const MR_BaseTypeclassInfo base_typeclass_info_mdb__sized_pretty__measure_with_params__arity2__mdb__sized_pretty__size_count__arity0__mdb__sized_pretty__measure_params__arity0__[9] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 4)),
  ((MR_Box) (mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__size_count__arity0__mdb__sized_pretty__measure_params__arity0______mdb__sized_pretty__add_measures_3_3_f_0_10001)),
  ((MR_Box) (mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__size_count__arity0__mdb__sized_pretty__measure_params__arity0______mdb__sized_pretty__subtract_measures_3_3_f_0_10001)),
  ((MR_Box) (mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__size_count__arity0__mdb__sized_pretty__measure_params__arity0______mdb__sized_pretty__maximum_functors_2_2_f_0_10001)),
  ((MR_Box) (mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__size_count__arity0__mdb__sized_pretty__measure_params__arity0______mdb__sized_pretty__measured_split_10_10_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_mdb__sized_pretty__measure_with_params__arity2__mdb__sized_pretty__char_count__arity0__mdb__sized_pretty__no_measure_params__arity0__[9] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 4)),
  ((MR_Box) (mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__char_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__add_measures_3_3_f_0_10001)),
  ((MR_Box) (mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__char_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__subtract_measures_3_3_f_0_10001)),
  ((MR_Box) (mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__char_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__maximum_functors_2_2_f_0_10001)),
  ((MR_Box) (mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__char_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__measured_split_10_10_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_mdb__sized_pretty__measure_with_params__arity2__mdb__sized_pretty__functor_count__arity0__mdb__sized_pretty__no_measure_params__arity0__[9] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 4)),
  ((MR_Box) (mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__functor_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__add_measures_3_3_f_0_10001)),
  ((MR_Box) (mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__functor_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__subtract_measures_3_3_f_0_10001)),
  ((MR_Box) (mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__functor_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__maximum_functors_2_2_f_0_10001)),
  ((MR_Box) (mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__functor_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__measured_split_10_10_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_mdb__sized_pretty__measure__arity1__mdb__sized_pretty__size_count__arity0__[8] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 3)),
  ((MR_Box) (mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__size_count__arity0______mdb__sized_pretty__max_measure_2_2_f_0_10001)),
  ((MR_Box) (mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__size_count__arity0______mdb__sized_pretty__zero_measure_0_0_f_0_10001)),
  ((MR_Box) (mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__size_count__arity0______mdb__sized_pretty__compare_measures_2_2_f_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_mdb__sized_pretty__measure__arity1__mdb__sized_pretty__char_count__arity0__[8] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 3)),
  ((MR_Box) (mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__char_count__arity0______mdb__sized_pretty__max_measure_2_2_f_0_10001)),
  ((MR_Box) (mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__char_count__arity0______mdb__sized_pretty__zero_measure_0_0_f_0_10001)),
  ((MR_Box) (mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__char_count__arity0______mdb__sized_pretty__compare_measures_2_2_f_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_mdb__sized_pretty__measure__arity1__mdb__sized_pretty__functor_count__arity0__[8] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 3)),
  ((MR_Box) (mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__functor_count__arity0______mdb__sized_pretty__max_measure_2_2_f_0_10001)),
  ((MR_Box) (mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__functor_count__arity0______mdb__sized_pretty__zero_measure_0_0_f_0_10001)),
  ((MR_Box) (mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__functor_count__arity0______mdb__sized_pretty__compare_measures_2_2_f_0_10001))
};

static const MR_ConstString mdb__sized_pretty__mdb__sized_pretty__type_class_id_var_names_measure_with_params_2[2] = {
  (MR_String) "T",
  (MR_String) "MeasureParams"
};

static const MR_TypeClassMethod mdb__sized_pretty__mdb__sized_pretty__type_class_id_method_ids_measure_with_params_2[4] = {
  {
    (MR_String) "add_measures",
    (MR_Integer) 4,
    MR_FUNCTION
  },
  {
    (MR_String) "subtract_measures",
    (MR_Integer) 4,
    MR_FUNCTION
  },
  {
    (MR_String) "maximum_functors",
    (MR_Integer) 3,
    MR_FUNCTION
  },
  {
    (MR_String) "measured_split",
    (MR_Integer) 10,
    MR_PREDICATE
  }
};

static const MR_TypeClassId mdb__sized_pretty__mdb__sized_pretty__type_class_id_measure_with_params_2 = {
  (MR_String) "mdb.sized_pretty",
  (MR_String) "measure_with_params",
  (MR_Integer) 2,
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdb__sized_pretty__mdb__sized_pretty__type_class_id_var_names_measure_with_params_2,
  mdb__sized_pretty__mdb__sized_pretty__type_class_id_method_ids_measure_with_params_2
};

static const MR_TypeClassConstraint_1Struct mdb__sized_pretty__mdb__sized_pretty__type_class_decl_super_measure_with_params_2_1 = {
  &mdb__sized_pretty__mdb__sized_pretty__type_class_decl_measure_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

static const MR_TypeClassConstraint mdb__sized_pretty__mdb__sized_pretty__type_class_decl_supers_measure_with_params_2[1] = { (MR_TypeClassConstraint) (&mdb__sized_pretty__mdb__sized_pretty__type_class_decl_super_measure_with_params_2_1) };

const MR_TypeClassDeclStruct mdb__sized_pretty__mdb__sized_pretty__type_class_decl_measure_with_params_2 = {
  &mdb__sized_pretty__mdb__sized_pretty__type_class_id_measure_with_params_2,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL
};

static const MR_ConstString mdb__sized_pretty__mdb__sized_pretty__type_class_id_var_names_measure_1[1] = { (MR_String) "T" };

static const MR_TypeClassMethod mdb__sized_pretty__mdb__sized_pretty__type_class_id_method_ids_measure_1[3] = {
  {
    (MR_String) "max_measure",
    (MR_Integer) 3,
    MR_FUNCTION
  },
  {
    (MR_String) "zero_measure",
    (MR_Integer) 1,
    MR_FUNCTION
  },
  {
    (MR_String) "compare_measures",
    (MR_Integer) 3,
    MR_FUNCTION
  }
};

static const MR_TypeClassId mdb__sized_pretty__mdb__sized_pretty__type_class_id_measure_1 = {
  (MR_String) "mdb.sized_pretty",
  (MR_String) "measure",
  (MR_Integer) 1,
  (MR_Integer) 1,
  (MR_Integer) 3,
  mdb__sized_pretty__mdb__sized_pretty__type_class_id_var_names_measure_1,
  mdb__sized_pretty__mdb__sized_pretty__type_class_id_method_ids_measure_1
};

const MR_TypeClassDeclStruct mdb__sized_pretty__mdb__sized_pretty__type_class_decl_measure_1 = {
  &mdb__sized_pretty__mdb__sized_pretty__type_class_id_measure_1,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

static MR_Word MR_CALL 
mdb__sized_pretty__IntroducedFrom__func__to_doc_sized_2__641__1_1_f_0(
  MR_Word HeadVar__1_45)
{
  MR_Word HeadVar__2_46;
  MR_Box conv0_HeadVar__2_46;

  conv0_HeadVar__2_46 = mercury__std_util__id_1_f_0((MR_Word) (&mercury__pprint__pprint__type_ctor_info_doc_0), ((MR_Box) (HeadVar__1_45)));
  HeadVar__2_46 = ((MR_Word) (conv0_HeadVar__2_46));
  return HeadVar__2_46;
}

static MR_Word MR_CALL 
mdb__sized_pretty__IntroducedFrom__func__second_pass__475__1_2_f_0(
  MR_Word TypeClassInfo_for_measure_with_params_55,
  MR_Word HeadVar__2_66)
{
  MR_Word HeadVar__3_67;
  MR_Word TypeInfo_69_69;

  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_measure_with_params_55, (MR_Integer) 2, &TypeInfo_69_69);
  if ((HeadVar__2_66 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__3_67 = (MR_Integer) 0;
  else
  {
    MR_Word Term_71;
    MR_Word Var_81 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_66, 0))));

    Term_71 = ((MR_Word) ((MR_hl_field(0, Var_81, 1))));
    if (((MR_tag((MR_Word) Term_71)) == (MR_Integer) 1))
      HeadVar__3_67 = (MR_Integer) 0;
    else
      HeadVar__3_67 = (MR_Integer) 1;
  }
  return HeadVar__3_67;
}

static void MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__functor_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__measured_split_10_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__4_4,
  MR_Integer HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word * HeadVar__9_9)
{
  MR_bool succeeded;
  MR_Integer Limit_11 = (MR_Integer) (HeadVar__4_4);

  *HeadVar__7_7 = (MR_Word) (((MR_Box) ((MR_Integer) 1)));
  *HeadVar__9_9 = HeadVar__4_4;
  succeeded = (HeadVar__5_5 == (MR_Integer) 0);
  if (succeeded)
  {
    MR_Box conv0_HeadVar__8_8;

    mercury__builtin__cc_multi_equal_2_p_0((MR_Word) (&mdb__sized_pretty_scalar_common_1[2]), ((MR_Box) ((MR_Unsigned) 0U)), &conv0_HeadVar__8_8);
    *HeadVar__8_8 = ((MR_Word) (conv0_HeadVar__8_8));
  }
  else
  {
    MR_Integer Var_15 = (MR_Integer) ((MR_Unsigned) HeadVar__5_5 + (MR_Unsigned) 1);

    succeeded = (Limit_11 <= Var_15);
    if (succeeded)
      *HeadVar__8_8 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Integer RoundUp_13;
      MR_Integer Var_17;
      MR_Integer Var_18 = (MR_Integer) ((MR_Unsigned) Limit_11 + (MR_Unsigned) HeadVar__5_5);
      MR_Word Var_20;

      Var_17 = (MR_Integer) ((MR_Unsigned) Var_18 - (MR_Unsigned) 1);
      RoundUp_13 = mercury__int__f_47_47_2_f_0(Var_17, HeadVar__5_5);
      Var_20 = (MR_Word) (RoundUp_13);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__8_8 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_20));
      }
    }
  }
}

static MR_Integer MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__functor_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__maximum_functors_2_2_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Integer HeadVar__3_3 = (MR_Integer) (HeadVar__1_1);

  return HeadVar__3_3;
}

static MR_Word MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__functor_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__subtract_measures_3_3_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_Word HeadVar__4_4;
  MR_Integer A_5 = (MR_Integer) (HeadVar__1_1);
  MR_Integer B_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Var_7 = (MR_Integer) ((MR_Unsigned) A_5 - (MR_Unsigned) B_6);

  HeadVar__4_4 = (MR_Word) (Var_7);
  return HeadVar__4_4;
}

static MR_Word MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__functor_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__add_measures_3_3_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_Word HeadVar__4_4;
  MR_Integer A_5 = (MR_Integer) (HeadVar__1_1);
  MR_Integer B_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Var_7 = (MR_Integer) ((MR_Unsigned) A_5 + (MR_Unsigned) B_6);

  HeadVar__4_4 = (MR_Word) (Var_7);
  return HeadVar__4_4;
}

static void MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__char_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__measured_split_10_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__4_4,
  MR_Integer HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word * HeadVar__9_9)
{
  MR_bool succeeded;
  MR_Integer Limit_11 = (MR_Integer) (HeadVar__4_4);
  MR_Integer FunctorSize_12;
  MR_String Functor_13;
  MR_Word Args_15;
  MR_Word MaybeReturn_16;
  MR_Integer TotalLength_17;
  MR_Integer Var_14;

  *HeadVar__9_9 = HeadVar__4_4;
  mdb__browser_info__deconstruct_browser_term_cc_6_p_0(HeadVar__1_1, HeadVar__2_2, &Functor_13, &Var_14, &Args_15, &MaybeReturn_16);
  switch (HeadVar__6_6) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      TotalLength_17 = (MR_Integer) 0;
      break;
    case (MR_Integer) 1:
      {
        MR_Integer Var_18;

        mdb__sized_pretty__get_arg_length_3_p_0(Args_15, &TotalLength_17, &Var_18);
      }
      break;
  }
  if ((MaybeReturn_16 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer Var_26;
    MR_Integer Var_27;

    Var_26 = mercury__string__length_1_f_0(Functor_13);
    Var_27 = (MR_Integer) ((MR_Unsigned) 2 * (MR_Unsigned) HeadVar__5_5);
    FunctorSize_12 = (MR_Integer) ((MR_Unsigned) Var_26 + (MR_Unsigned) Var_27);
  }
  else
  {
    MR_Integer Var_21;
    MR_Integer Var_22;
    MR_Integer Var_23;

    Var_22 = mercury__string__length_1_f_0(Functor_13);
    Var_23 = (MR_Integer) ((MR_Unsigned) 2 * (MR_Unsigned) HeadVar__5_5);
    Var_21 = (MR_Integer) ((MR_Unsigned) Var_22 + (MR_Unsigned) Var_23);
    FunctorSize_12 = (MR_Integer) ((MR_Unsigned) Var_21 + (MR_Unsigned) 3);
  }
  *HeadVar__7_7 = (MR_Word) (FunctorSize_12);
  succeeded = (HeadVar__5_5 == (MR_Integer) 0);
  if (succeeded)
    *HeadVar__8_8 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Integer Var_29 = (MR_Integer) ((MR_Unsigned) FunctorSize_12 + (MR_Unsigned) TotalLength_17);

    succeeded = (Limit_11 <= Var_29);
    if (succeeded)
      *HeadVar__8_8 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Integer RoundUp_20;
      MR_Integer Var_30;
      MR_Integer Var_31 = (MR_Integer) ((MR_Unsigned) Limit_11 + (MR_Unsigned) HeadVar__5_5);
      MR_Word Var_32;

      Var_30 = (MR_Integer) ((MR_Unsigned) Var_31 - (MR_Unsigned) FunctorSize_12);
      RoundUp_20 = mercury__int__f_47_47_2_f_0(Var_30, HeadVar__5_5);
      Var_32 = (MR_Word) (RoundUp_20);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__8_8 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_32));
      }
    }
  }
}

static MR_Integer MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__char_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__maximum_functors_2_2_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Integer HeadVar__3_3;
  MR_Integer N_4 = (MR_Integer) (HeadVar__1_1);
  MR_Integer Var_5 = (MR_Integer) ((MR_Unsigned) N_4 + (MR_Unsigned) 2);

  HeadVar__3_3 = mercury__int__div_2_f_0(Var_5, (MR_Integer) 3);
  return HeadVar__3_3;
}

static MR_Word MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__char_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__subtract_measures_3_3_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_Word HeadVar__4_4;
  MR_Integer A_5 = (MR_Integer) (HeadVar__1_1);
  MR_Integer B_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Var_7 = (MR_Integer) ((MR_Unsigned) A_5 - (MR_Unsigned) B_6);

  HeadVar__4_4 = (MR_Word) (Var_7);
  return HeadVar__4_4;
}

static MR_Word MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__char_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__add_measures_3_3_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_Word HeadVar__4_4;
  MR_Integer A_5 = (MR_Integer) (HeadVar__1_1);
  MR_Integer B_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Var_7 = (MR_Integer) ((MR_Unsigned) A_5 + (MR_Unsigned) B_6);

  HeadVar__4_4 = (MR_Word) (Var_7);
  return HeadVar__4_4;
}

static void MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__size_count__arity0__mdb__sized_pretty__measure_params__arity0______mdb__sized_pretty__measured_split_10_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Integer HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word * HeadVar__9_9,
  MR_Word * HeadVar__10_10)
{
  MR_bool succeeded;
  MR_Integer LineWidth_11 = (MR_Integer) (HeadVar__3_3);
  MR_String Functor_12;
  MR_Integer ActualArity_13;
  MR_Word Args_14;
  MR_Word MaybeReturn_15;
  MR_Integer FSize_16;
  MR_Integer TotalLength_17;
  MR_Integer MaxLength_19;
  MR_Integer Var_29;
  MR_Integer Var_30;

  mdb__browser_info__deconstruct_browser_term_cc_6_p_0(HeadVar__1_1, HeadVar__2_2, &Functor_12, &ActualArity_13, &Args_14, &MaybeReturn_15);
  Var_29 = mercury__string__length_1_f_0(Functor_12);
  Var_30 = (MR_Integer) ((MR_Unsigned) 2 * (MR_Unsigned) ActualArity_13);
  FSize_16 = (MR_Integer) ((MR_Unsigned) Var_29 + (MR_Unsigned) Var_30);
  switch (HeadVar__6_6) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        TotalLength_17 = (MR_Integer) 0;
        MaxLength_19 = (MR_Integer) 0;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Integer MaxArgLength_18;
        MR_Integer Var_32;
        MR_Integer Var_33;

        mdb__sized_pretty__get_arg_length_3_p_0(Args_14, &TotalLength_17, &MaxArgLength_18);
        Var_33 = mercury__string__length_1_f_0(Functor_12);
        Var_32 = (MR_Integer) ((MR_Unsigned) Var_33 + (MR_Unsigned) 1);
        mercury__int__max_3_p_0(MaxArgLength_18, Var_32, &MaxLength_19);
      }
      break;
  }
  succeeded = (HeadVar__5_5 == (MR_Integer) 0);
  if (succeeded)
  {
    *HeadVar__8_8 = (MR_Word) ((MR_Unsigned) 0U);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__7_7 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (FSize_16));
    }
    *HeadVar__9_9 = HeadVar__4_4;
    *HeadVar__10_10 = HeadVar__3_3;
  }
  else
  {
    MR_Integer LineLimit_20;
    MR_Integer Var_35;
    MR_Integer Var_36;
    MR_Integer Var_37;
    MR_Integer Var_38;

    succeeded = ((MR_tag((MR_Word) HeadVar__4_4)) == (MR_Integer) 0);
    if (succeeded)
    {
      LineLimit_20 = ((MR_Integer) ((MR_hl_field(0, HeadVar__4_4, 0))));
      Var_36 = (MR_Integer) 1;
      Var_35 = (MR_Integer) ((MR_Unsigned) HeadVar__5_5 + (MR_Unsigned) Var_36);
      succeeded = (LineLimit_20 >= Var_35);
      if (succeeded)
      {
        Var_38 = (MR_Integer) 2;
        Var_37 = (MR_Integer) ((MR_Unsigned) LineWidth_11 - (MR_Unsigned) Var_38);
        succeeded = (Var_37 >= MaxLength_19);
      }
    }
    if (succeeded)
    {
      MR_Integer Line_21;
      MR_Integer Var_39 = (MR_Integer) ((MR_Unsigned) LineLimit_20 - (MR_Unsigned) 1);
      MR_Word Var_41;
      MR_Integer Var_43;

      Line_21 = mercury__int__f_47_47_2_f_0(Var_39, HeadVar__5_5);
      {
        Var_41 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_41, 0) = ((MR_Box) (Line_21));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__8_8 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_41));
      }
      *HeadVar__7_7 = (MR_Word) (&mdb__sized_pretty_scalar_common_3[0]);
      *HeadVar__9_9 = HeadVar__4_4;
      Var_43 = (MR_Integer) ((MR_Unsigned) LineWidth_11 - (MR_Unsigned) 2);
      *HeadVar__10_10 = (MR_Word) (Var_43);
    }
    else
    {
      MR_Integer Var_45;
      MR_Integer Var_46;
      MR_Integer Var_47;
      MR_Integer Var_48;
      MR_Integer LineLimit_68;

      succeeded = ((MR_tag((MR_Word) HeadVar__4_4)) == (MR_Integer) 0);
      if (succeeded)
      {
        LineLimit_68 = ((MR_Integer) ((MR_hl_field(0, HeadVar__4_4, 0))));
        Var_45 = (MR_Integer) 0;
        succeeded = (LineLimit_68 > Var_45);
        if (succeeded)
        {
          Var_48 = (MR_Integer) 3;
          Var_46 = (MR_Integer) ((MR_Unsigned) LineWidth_11 - (MR_Unsigned) Var_48);
          Var_47 = (MR_Integer) ((MR_Unsigned) FSize_16 + (MR_Unsigned) TotalLength_17);
          succeeded = (Var_46 >= Var_47);
        }
      }
      if (succeeded)
      {
        MR_Integer Char_22;
        MR_Integer Var_49;
        MR_Integer Var_50;
        MR_Integer Var_51;
        MR_Integer Var_52 = (MR_Integer) ((MR_Unsigned) LineWidth_11 - (MR_Unsigned) 3);
        MR_Word Var_55;
        MR_Integer Var_56;

        Var_51 = (MR_Integer) ((MR_Unsigned) Var_52 - (MR_Unsigned) FSize_16);
        Var_50 = (MR_Integer) ((MR_Unsigned) Var_51 + (MR_Unsigned) HeadVar__5_5);
        Var_49 = (MR_Integer) ((MR_Unsigned) Var_50 - (MR_Unsigned) 1);
        Char_22 = mercury__int__f_47_47_2_f_0(Var_49, HeadVar__5_5);
        {
          Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_55, 0) = ((MR_Box) (Char_22));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__8_8 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_55));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__7_7 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (FSize_16));
        }
        Var_56 = (MR_Integer) ((MR_Unsigned) LineWidth_11 - (MR_Unsigned) 3);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__9_9 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_56));
        }
        *HeadVar__10_10 = HeadVar__3_3;
      }
      else
      {
        MR_Integer CharLimit_23;
        MR_Integer Var_58;

        succeeded = ((MR_tag((MR_Word) HeadVar__4_4)) == (MR_Integer) 1);
        if (succeeded)
        {
          CharLimit_23 = ((MR_Integer) ((MR_hl_field(1, HeadVar__4_4, 0))));
          Var_58 = (MR_Integer) ((MR_Unsigned) FSize_16 + (MR_Unsigned) TotalLength_17);
          succeeded = (CharLimit_23 >= Var_58);
        }
        if (succeeded)
        {
          MR_Integer Var_59;
          MR_Integer Var_60;
          MR_Integer Var_61 = (MR_Integer) ((MR_Unsigned) CharLimit_23 - (MR_Unsigned) FSize_16);
          MR_Word Var_63;
          MR_Integer Char_69;

          Var_60 = (MR_Integer) ((MR_Unsigned) Var_61 + (MR_Unsigned) HeadVar__5_5);
          Var_59 = (MR_Integer) ((MR_Unsigned) Var_60 - (MR_Unsigned) 1);
          Char_69 = mercury__int__f_47_47_2_f_0(Var_59, HeadVar__5_5);
          {
            Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_63, 0) = ((MR_Box) (Char_69));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__8_8 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Var_63));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__7_7 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (FSize_16));
          }
          *HeadVar__9_9 = HeadVar__4_4;
          *HeadVar__10_10 = HeadVar__3_3;
        }
        else
        {
          MR_Integer FuncSuffixChars_25;
          MR_Integer FunctorLength_26;
          MR_String ArityStr_27;
          MR_Integer ArityChars_28;
          MR_Integer Var_64;
          MR_Integer Var_65;
          MR_Integer Var_66;

          *HeadVar__8_8 = (MR_Word) ((MR_Unsigned) 0U);
          if ((MaybeReturn_15 == (MR_Word) ((MR_Unsigned) 0U)))
            FuncSuffixChars_25 = (MR_Integer) 0;
          else
            FuncSuffixChars_25 = (MR_Integer) 2;
          FunctorLength_26 = mercury__string__length_1_f_0(Functor_12);
          mercury__string__int_to_string_2_p_0(HeadVar__5_5, &ArityStr_27);
          mercury__string__length_2_p_1(ArityStr_27, &ArityChars_28);
          Var_66 = (MR_Integer) ((MR_Unsigned) FunctorLength_26 + (MR_Unsigned) 1);
          Var_65 = (MR_Integer) ((MR_Unsigned) Var_66 + (MR_Unsigned) ArityChars_28);
          Var_64 = (MR_Integer) ((MR_Unsigned) Var_65 + (MR_Unsigned) FuncSuffixChars_25);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__7_7 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Var_64));
          }
          *HeadVar__9_9 = HeadVar__4_4;
          *HeadVar__10_10 = HeadVar__3_3;
        }
      }
    }
  }
}

static MR_Integer MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__size_count__arity0__mdb__sized_pretty__measure_params__arity0______mdb__sized_pretty__maximum_functors_2_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_Integer HeadVar__3_3;

  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
  {
    MR_Integer N_4 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Integer Var_7 = (MR_Integer) ((MR_Unsigned) N_4 + (MR_Unsigned) 2);

    HeadVar__3_3 = mercury__int__div_2_f_0(Var_7, (MR_Integer) 3);
  }
  else
  {
    MR_Integer N_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Integer LineWidth_11 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Area_13 = (MR_Integer) ((MR_Unsigned) N_10 * (MR_Unsigned) LineWidth_11);
    MR_Integer Var_14 = (MR_Integer) ((MR_Unsigned) Area_13 + (MR_Unsigned) 2);

    HeadVar__3_3 = mercury__int__div_2_f_0(Var_14, (MR_Integer) 3);
  }
  return HeadVar__3_3;
}

static MR_Word MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__size_count__arity0__mdb__sized_pretty__measure_params__arity0______mdb__sized_pretty__subtract_measures_3_3_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Word HeadVar__4_4;

  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
  {
    MR_Integer Var_35 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 0))));

    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
    {
      MR_Integer B_6 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Integer CharDiff_9 = (MR_Integer) ((MR_Unsigned) Var_35 - (MR_Unsigned) B_6);

      succeeded = (CharDiff_9 < (MR_Integer) 0);
      if (succeeded)
        HeadVar__4_4 = (MR_Word) (MR_mkword(1, &mdb__sized_pretty_scalar_common_3[1]));
      else
        {
          HeadVar__4_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, HeadVar__4_4, 0) = ((MR_Box) (CharDiff_9));
        }
    }
    else
    {
      MR_Integer B_13 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 0))));

      succeeded = (B_13 == (MR_Integer) 0);
      if (succeeded)
        HeadVar__4_4 = HeadVar__1_1;
      else
        HeadVar__4_4 = (MR_Word) (MR_mkword(1, &mdb__sized_pretty_scalar_common_3[1]));
    }
  }
  else
  {
    MR_Integer Var_36 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 0))));

    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
    {
      MR_Integer B_18 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));

      succeeded = (B_18 == (MR_Integer) 0);
      if (succeeded)
        HeadVar__4_4 = HeadVar__1_1;
      else
      {
        MR_Integer Var_21 = (MR_Integer) ((MR_Unsigned) Var_36 - (MR_Unsigned) 1);

        succeeded = (Var_21 >= (MR_Integer) 0);
        if (succeeded)
        {
          MR_Integer Var_24 = (MR_Integer) ((MR_Unsigned) Var_36 - (MR_Unsigned) 1);

          {
            HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, HeadVar__4_4, 0) = ((MR_Box) (Var_24));
          }
        }
        else
          HeadVar__4_4 = (MR_Word) (&mdb__sized_pretty_scalar_common_3[1]);
      }
    }
    else
    {
      MR_Integer B_28 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 0))));
      MR_Integer Var_31 = (MR_Integer) ((MR_Unsigned) Var_36 - (MR_Unsigned) B_28);

      succeeded = (Var_31 >= (MR_Integer) 0);
      if (succeeded)
      {
        MR_Integer Var_33 = (MR_Integer) ((MR_Unsigned) Var_36 - (MR_Unsigned) B_28);

        {
          HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, HeadVar__4_4, 0) = ((MR_Box) (Var_33));
        }
      }
      else
        HeadVar__4_4 = (MR_Word) (&mdb__sized_pretty_scalar_common_3[1]);
    }
  }
  return HeadVar__4_4;
}

static MR_Word MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__size_count__arity0__mdb__sized_pretty__measure_params__arity0______mdb__sized_pretty__add_measures_3_3_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Word HeadVar__4_4;

  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
  {
    MR_Integer Var_30 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 0))));

    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
    {
      MR_Integer B_6 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Integer LineWidth_9 = (MR_Integer) (HeadVar__3_3);
      MR_Integer CharSum_10 = (MR_Integer) ((MR_Unsigned) Var_30 + (MR_Unsigned) B_6);

      succeeded = (CharSum_10 > LineWidth_9);
      if (succeeded)
        HeadVar__4_4 = (MR_Word) (&mdb__sized_pretty_scalar_common_3[0]);
      else
        {
          HeadVar__4_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, HeadVar__4_4, 0) = ((MR_Box) (CharSum_10));
        }
    }
    else
    {
      MR_Integer B_13 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 0))));

      succeeded = (Var_30 > (MR_Integer) 0);
      if (succeeded)
      {
        MR_Integer Var_17 = (MR_Integer) ((MR_Unsigned) B_13 + (MR_Unsigned) 1);

        {
          HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, HeadVar__4_4, 0) = ((MR_Box) (Var_17));
        }
      }
      else
        HeadVar__4_4 = HeadVar__2_2;
    }
  }
  else
  {
    MR_Integer Var_31 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 0))));

    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
    {
      MR_Integer B_20 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));

      succeeded = (B_20 > (MR_Integer) 0);
      if (succeeded)
      {
        MR_Integer Var_24 = (MR_Integer) ((MR_Unsigned) Var_31 + (MR_Unsigned) 1);

        {
          HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, HeadVar__4_4, 0) = ((MR_Box) (Var_24));
        }
      }
      else
        HeadVar__4_4 = HeadVar__1_1;
    }
    else
    {
      MR_Integer B_27 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 0))));
      MR_Integer Var_29 = (MR_Integer) ((MR_Unsigned) Var_31 + (MR_Unsigned) B_27);

      {
        HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, HeadVar__4_4, 0) = ((MR_Box) (Var_29));
      }
    }
  }
  return HeadVar__4_4;
}

static MR_Word MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__functor_count__arity0______mdb__sized_pretty__compare_measures_2_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word HeadVar__3_3;
  MR_Integer A_4 = (MR_Integer) (HeadVar__1_1);
  MR_Integer B_5 = (MR_Integer) (HeadVar__2_2);

  succeeded = (A_4 < B_5);
  if (succeeded)
    HeadVar__3_3 = (MR_Integer) 1;
  else
  {
    succeeded = (A_4 > B_5);
    if (succeeded)
      HeadVar__3_3 = (MR_Integer) 2;
    else
      HeadVar__3_3 = (MR_Integer) 0;
  }
  return HeadVar__3_3;
}

static MR_Word MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__functor_count__arity0______mdb__sized_pretty__zero_measure_0_0_f_0(void)
{
  return (MR_Word) (((MR_Box) ((MR_Integer) 0)));
}

static MR_Word MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__functor_count__arity0______mdb__sized_pretty__max_measure_2_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_Word HeadVar__3_3;
  MR_Integer A_4 = (MR_Integer) (HeadVar__1_1);
  MR_Integer B_5 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Max_6;

  mercury__int__max_3_p_0(A_4, B_5, &Max_6);
  HeadVar__3_3 = (MR_Word) (Max_6);
  return HeadVar__3_3;
}

static MR_Word MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__char_count__arity0______mdb__sized_pretty__compare_measures_2_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word HeadVar__3_3;
  MR_Integer A_4 = (MR_Integer) (HeadVar__1_1);
  MR_Integer B_5 = (MR_Integer) (HeadVar__2_2);

  succeeded = (A_4 < B_5);
  if (succeeded)
    HeadVar__3_3 = (MR_Integer) 1;
  else
  {
    succeeded = (A_4 > B_5);
    if (succeeded)
      HeadVar__3_3 = (MR_Integer) 2;
    else
      HeadVar__3_3 = (MR_Integer) 0;
  }
  return HeadVar__3_3;
}

static MR_Word MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__char_count__arity0______mdb__sized_pretty__zero_measure_0_0_f_0(void)
{
  return (MR_Word) (((MR_Box) ((MR_Integer) 0)));
}

static MR_Word MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__char_count__arity0______mdb__sized_pretty__max_measure_2_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_Word HeadVar__3_3;
  MR_Integer A_4 = (MR_Integer) (HeadVar__1_1);
  MR_Integer B_5 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Max_6;

  mercury__int__max_3_p_0(A_4, B_5, &Max_6);
  HeadVar__3_3 = (MR_Word) (Max_6);
  return HeadVar__3_3;
}

static MR_Word MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__size_count__arity0______mdb__sized_pretty__compare_measures_2_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word HeadVar__3_3;

  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
  {
    MR_Integer Var_16 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 0))));

    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
    {
      MR_Integer C2_5 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));

      succeeded = (Var_16 < C2_5);
      if (succeeded)
        HeadVar__3_3 = (MR_Integer) 1;
      else
      {
        succeeded = (Var_16 > C2_5);
        if (succeeded)
          HeadVar__3_3 = (MR_Integer) 2;
        else
          HeadVar__3_3 = (MR_Integer) 0;
      }
    }
    else
      HeadVar__3_3 = (MR_Integer) 1;
  }
  else
  {
    MR_Integer Var_17 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 0))));

    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
      HeadVar__3_3 = (MR_Integer) 2;
    else
    {
      MR_Integer L2_12 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 0))));

      succeeded = (Var_17 < L2_12);
      if (succeeded)
        HeadVar__3_3 = (MR_Integer) 1;
      else
      {
        succeeded = (Var_17 > L2_12);
        if (succeeded)
          HeadVar__3_3 = (MR_Integer) 2;
        else
          HeadVar__3_3 = (MR_Integer) 0;
      }
    }
  }
  return HeadVar__3_3;
}

static MR_Word MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__size_count__arity0______mdb__sized_pretty__zero_measure_0_0_f_0(void)
{
  return (MR_Word) (MR_mkword(1, &mdb__sized_pretty_scalar_common_3[1]));
}

static MR_Word MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__size_count__arity0______mdb__sized_pretty__max_measure_2_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word HeadVar__3_3;

  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
  {
    MR_Integer C2_6;
    MR_Integer Var_17 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 0))));

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      C2_6 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
      succeeded = (Var_17 < C2_6);
      if (succeeded)
        succeeded = MR_FALSE;
      else
        succeeded = (Var_17 > C2_6);
    }
  }
  else
  {
    MR_Integer Var_18 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 0))));

    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
      succeeded = MR_TRUE;
    else
    {
      MR_Integer L2_13 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 0))));

      succeeded = (Var_18 < L2_13);
      if (succeeded)
        succeeded = MR_FALSE;
      else
        succeeded = (Var_18 > L2_13);
    }
  }
  if (succeeded)
    HeadVar__3_3 = HeadVar__1_1;
  else
    HeadVar__3_3 = HeadVar__2_2;
  return HeadVar__3_3;
}

static void MR_CALL 
mdb__sized_pretty____Compare____size_count_0_0(
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
      MR_Integer ArgX1_6 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Integer ArgY1_7 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, 0))));

      succeeded = (ArgX1_6 < ArgY1_7);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (ArgX1_6 > ArgY1_7);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 2;
        else
          *HeadVar__1_1 = (MR_Integer) 0;
      }
    }
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 0))));

    succeeded = (ArgX1_4 < ArgY1_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (ArgX1_4 > ArgY1_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
  }
}

static MR_bool MR_CALL 
mdb__sized_pretty____Unify____size_count_0_0(
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
    MR_Integer ArgX1_5 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Integer ArgY1_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
      succeeded = (ArgX1_5 == ArgY1_6);
    }
  }
  else
  {
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Integer ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 0))));
      succeeded = (ArgX1_3 == ArgY1_4);
    }
  }
  return succeeded;
}

static void MR_CALL 
mdb__sized_pretty____Compare____size_annotated_term_1_0(
  MR_Word TypeInfo_for_T_28,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_26 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_27 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_26 == CastY_27);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    {
      MR_Word ArgX1_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word ArgY1_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Box ArgX2_21 = (MR_hl_field(1, HeadVar__2_2, 1));
      MR_Box ArgY2_22 = (MR_hl_field(1, HeadVar__3_3, 1));
      MR_Word ArgX3_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
      MR_Word ArgY3_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 2))));
      MR_Word SubResult1_20;

      mdb__browser_term____Compare____browser_term_0_0(&SubResult1_20, ArgX1_18, ArgY1_19);
      succeeded = (SubResult1_20 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_20;
      else
      {
        MR_Word SubResult2_23;

        mercury__builtin__compare_3_p_0(TypeInfo_for_T_28, &SubResult2_23, ArgX2_21, ArgY2_22);
        succeeded = (SubResult2_23 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_23;
        else
          mdb__sized_pretty____Compare____maybe_deconstructed_1_0(TypeInfo_for_T_28, HeadVar__1_1, ArgX3_24, ArgY3_25);
      }
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
    MR_Box ArgX2_7 = (MR_hl_field(0, HeadVar__2_2, 1));
    MR_Box ArgY2_8 = (MR_hl_field(0, HeadVar__3_3, 1));
    MR_String ArgX3_10 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_String ArgY3_11 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Integer ArgX4_13 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Integer ArgY4_14 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 4))));
    MR_Word SubResult1_6;

    mdb__browser_term____Compare____browser_term_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0(TypeInfo_for_T_28, &SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          succeeded = (ArgX4_13 < ArgY4_14);
          if (succeeded)
          {
            SubResult4_15 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (ArgX4_13 > ArgY4_14);
            if (succeeded)
            {
              SubResult4_15 = (MR_Integer) 2;
              succeeded = MR_TRUE;
            }
          }
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word TypeInfo_36_36;
            MR_Word TypeInfo_38_38;
            MR_Word TypeInfo_40_40;

            {
              TypeInfo_36_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, TypeInfo_36_36, 0) = ((MR_Box) (&mdb__sized_pretty__mdb__sized_pretty__type_ctor_info_size_annotated_term_1));
              MR_hl_field(0, TypeInfo_36_36, 1) = ((MR_Box) (TypeInfo_for_T_28));
            }
            {
              TypeInfo_38_38 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, TypeInfo_38_38, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
              MR_hl_field(0, TypeInfo_38_38, 1) = ((MR_Box) (TypeInfo_for_T_28));
              MR_hl_field(0, TypeInfo_38_38, 2) = ((MR_Box) (TypeInfo_36_36));
            }
            {
              TypeInfo_40_40 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, TypeInfo_40_40, 0) = ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1));
              MR_hl_field(0, TypeInfo_40_40, 1) = ((MR_Box) (TypeInfo_38_38));
            }
            mercury__list____Compare____list_1_0(TypeInfo_40_40, HeadVar__1_1, (MR_Word) (ArgX5_16), (MR_Word) (ArgY5_17));
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
mdb__sized_pretty____Unify____size_annotated_term_1_0(
  MR_Word TypeInfo_for_T_21,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_19 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_20 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_19 == CastY_20);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
  {
    MR_Word ArgX1_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word ArgY1_14;
    MR_Box ArgX2_15 = (MR_hl_field(1, HeadVar__1_1, 1));
    MR_Box ArgY2_16;
    MR_Word ArgX3_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 2))));
    MR_Word ArgY3_18;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      ArgY2_16 = (MR_hl_field(1, HeadVar__2_2, 1));
      ArgY3_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
      succeeded = mdb__browser_term____Unify____browser_term_0_0(ArgX1_13, ArgY1_14);
      if (succeeded)
      {
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_21, ArgX2_15, ArgY2_16);
        if (succeeded)
          succeeded = mdb__sized_pretty____Unify____maybe_deconstructed_1_0(TypeInfo_for_T_21, ArgX3_17, ArgY3_18);
      }
    }
  }
  else
  {
    MR_Word TypeCtorInfo_24_24;
    MR_Word TypeInfo_25_25;
    MR_Word TypeCtorInfo_26_26;
    MR_Word TypeInfo_27_27;
    MR_Word TypeCtorInfo_28_28;
    MR_Word TypeInfo_29_29;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4;
    MR_Box ArgX2_5 = (MR_hl_field(0, HeadVar__1_1, 1));
    MR_Box ArgY2_6;
    MR_String ArgX3_7 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_String ArgY3_8;
    MR_Integer ArgX4_9 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Integer ArgY4_10;
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 4))));
    MR_Word ArgY5_12;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
      ArgY2_6 = (MR_hl_field(0, HeadVar__2_2, 1));
      ArgY3_8 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 2))));
      ArgY4_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 3))));
      ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
      succeeded = mdb__browser_term____Unify____browser_term_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_21, ArgX2_5, ArgY2_6);
        if (succeeded)
        {
          succeeded = (strcmp(ArgX3_7, ArgY3_8) == 0);
          if (succeeded)
          {
            succeeded = (ArgX4_9 == ArgY4_10);
            if (succeeded)
            {
              TypeCtorInfo_28_28 = (MR_Word) (&mercury__maybe__maybe__type_ctor_info_maybe_1);
              TypeCtorInfo_26_26 = (MR_Word) (&mercury__pair__pair__type_ctor_info_pair_2);
              TypeCtorInfo_24_24 = (MR_Word) (&mdb__sized_pretty__mdb__sized_pretty__type_ctor_info_size_annotated_term_1);
              {
                TypeInfo_25_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, TypeInfo_25_25, 0) = ((MR_Box) (TypeCtorInfo_24_24));
                MR_hl_field(0, TypeInfo_25_25, 1) = ((MR_Box) (TypeInfo_for_T_21));
              }
              {
                TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, TypeInfo_27_27, 0) = ((MR_Box) (TypeCtorInfo_26_26));
                MR_hl_field(0, TypeInfo_27_27, 1) = ((MR_Box) (TypeInfo_for_T_21));
                MR_hl_field(0, TypeInfo_27_27, 2) = ((MR_Box) (TypeInfo_25_25));
              }
              {
                TypeInfo_29_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, TypeInfo_29_29, 0) = ((MR_Box) (TypeCtorInfo_28_28));
                MR_hl_field(0, TypeInfo_29_29, 1) = ((MR_Box) (TypeInfo_27_27));
              }
              succeeded = mercury__list____Unify____list_1_0(TypeInfo_29_29, (MR_Word) (ArgX5_11), (MR_Word) (ArgY5_12));
            }
          }
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
mdb__sized_pretty____Compare____size_annotated_args_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word TypeInfo_8_8;
  MR_Word TypeInfo_10_10;
  MR_Word TypeInfo_12_12;
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  {
    TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_8_8, 0) = ((MR_Box) (&mdb__sized_pretty__mdb__sized_pretty__type_ctor_info_size_annotated_term_1));
    MR_hl_field(0, TypeInfo_8_8, 1) = ((MR_Box) (TypeInfo_for_T_6));
  }
  {
    TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_10_10, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
    MR_hl_field(0, TypeInfo_10_10, 1) = ((MR_Box) (TypeInfo_for_T_6));
    MR_hl_field(0, TypeInfo_10_10, 2) = ((MR_Box) (TypeInfo_8_8));
  }
  {
    TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_12_12, 0) = ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1));
    MR_hl_field(0, TypeInfo_12_12, 1) = ((MR_Box) (TypeInfo_10_10));
  }
  mercury__list____Compare____list_1_0(TypeInfo_12_12, HeadVar__1_1, (MR_Word) (Cast_HeadVar1_4), (MR_Word) (Cast_HeadVar2_5));
}

static MR_bool MR_CALL 
mdb__sized_pretty____Unify____size_annotated_args_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word TypeInfo_7_7;
  MR_Word TypeInfo_9_9;
  MR_Word TypeInfo_11_11;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  {
    TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_7_7, 0) = ((MR_Box) (&mdb__sized_pretty__mdb__sized_pretty__type_ctor_info_size_annotated_term_1));
    MR_hl_field(0, TypeInfo_7_7, 1) = ((MR_Box) (TypeInfo_for_T_5));
  }
  {
    TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_9_9, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
    MR_hl_field(0, TypeInfo_9_9, 1) = ((MR_Box) (TypeInfo_for_T_5));
    MR_hl_field(0, TypeInfo_9_9, 2) = ((MR_Box) (TypeInfo_7_7));
  }
  {
    TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_11_11, 0) = ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1));
    MR_hl_field(0, TypeInfo_11_11, 1) = ((MR_Box) (TypeInfo_9_9));
  }
  succeeded = mercury__list____Unify____list_1_0(TypeInfo_11_11, (MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
  return succeeded;
}

static void MR_CALL 
mdb__sized_pretty____Compare____no_measure_params_0_0(
  MR_Word * HeadVar__1_1)
{
  mdb__sized_pretty__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_110_111_95_109_101_97_115_117_114_101_95_112_97_114_97_109_115_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(HeadVar__1_1);
}

static void MR_CALL 
mdb__sized_pretty__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_110_111_95_109_101_97_115_117_114_101_95_112_97_114_97_109_115_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1)
{
  *HeadVar__1_1 = (MR_Integer) 0;
}

static MR_bool MR_CALL 
mdb__sized_pretty____Unify____no_measure_params_0_0(void)
{
  return MR_TRUE;
}

static void MR_CALL 
mdb__sized_pretty____Compare____measure_params_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Integer ArgX1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer ArgY1_5 = (MR_Integer) (HeadVar__3_3);

    succeeded = (ArgX1_4 < ArgY1_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (ArgX1_4 > ArgY1_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
  }
}

static MR_bool MR_CALL 
mdb__sized_pretty____Unify____measure_params_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_5 == CastY_6);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Integer ArgX1_3 = (MR_Integer) (HeadVar__1_1);
    MR_Integer ArgY1_4 = (MR_Integer) (HeadVar__2_2);

    succeeded = (ArgX1_3 == ArgY1_4);
  }
  return succeeded;
}

static void MR_CALL 
mdb__sized_pretty____Compare____maybe_deconstructed_1_0(
  MR_Word TypeInfo_for_T_14,
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
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, 0))));
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 2))));
    MR_Word SubResult1_6;

    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      succeeded = (ArgX2_7 < ArgY2_8);
      if (succeeded)
      {
        SubResult2_9 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (ArgX2_7 > ArgY2_8);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word TypeInfo_18_18;
        MR_Word TypeInfo_20_20;
        MR_Word TypeInfo_22_22;

        {
          TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeInfo_18_18, 0) = ((MR_Box) (&mdb__sized_pretty__mdb__sized_pretty__type_ctor_info_size_annotated_term_1));
          MR_hl_field(0, TypeInfo_18_18, 1) = ((MR_Box) (TypeInfo_for_T_14));
        }
        {
          TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeInfo_20_20, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
          MR_hl_field(0, TypeInfo_20_20, 1) = ((MR_Box) (TypeInfo_for_T_14));
          MR_hl_field(0, TypeInfo_20_20, 2) = ((MR_Box) (TypeInfo_18_18));
        }
        {
          TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeInfo_22_22, 0) = ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1));
          MR_hl_field(0, TypeInfo_22_22, 1) = ((MR_Box) (TypeInfo_20_20));
        }
        mercury__list____Compare____list_1_0(TypeInfo_22_22, HeadVar__1_1, (MR_Word) (ArgX3_10), (MR_Word) (ArgY3_11));
      }
    }
  }
}

static MR_bool MR_CALL 
mdb__sized_pretty____Unify____maybe_deconstructed_1_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_10 == CastX_9);
  }
  else
  {
    MR_Word TypeCtorInfo_14_14;
    MR_Word TypeInfo_15_15;
    MR_Word TypeCtorInfo_16_16;
    MR_Word TypeInfo_17_17;
    MR_Word TypeCtorInfo_18_18;
    MR_Word TypeInfo_19_19;
    MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_String ArgY1_4;
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Integer ArgY2_6;
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 2))));
    MR_Word ArgY3_8;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 0))));
      ArgY2_6 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 1))));
      ArgY3_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
      succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
      if (succeeded)
      {
        succeeded = (ArgX2_5 == ArgY2_6);
        if (succeeded)
        {
          TypeCtorInfo_18_18 = (MR_Word) (&mercury__maybe__maybe__type_ctor_info_maybe_1);
          TypeCtorInfo_16_16 = (MR_Word) (&mercury__pair__pair__type_ctor_info_pair_2);
          TypeCtorInfo_14_14 = (MR_Word) (&mdb__sized_pretty__mdb__sized_pretty__type_ctor_info_size_annotated_term_1);
          {
            TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, TypeInfo_15_15, 0) = ((MR_Box) (TypeCtorInfo_14_14));
            MR_hl_field(0, TypeInfo_15_15, 1) = ((MR_Box) (TypeInfo_for_T_13));
          }
          {
            TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, TypeInfo_17_17, 0) = ((MR_Box) (TypeCtorInfo_16_16));
            MR_hl_field(0, TypeInfo_17_17, 1) = ((MR_Box) (TypeInfo_for_T_13));
            MR_hl_field(0, TypeInfo_17_17, 2) = ((MR_Box) (TypeInfo_15_15));
          }
          {
            TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, TypeInfo_19_19, 0) = ((MR_Box) (TypeCtorInfo_18_18));
            MR_hl_field(0, TypeInfo_19_19, 1) = ((MR_Box) (TypeInfo_17_17));
          }
          succeeded = mercury__list____Unify____list_1_0(TypeInfo_19_19, (MR_Word) (ArgX3_7), (MR_Word) (ArgY3_8));
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
mdb__sized_pretty____Compare____functor_count_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Integer ArgX1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer ArgY1_5 = (MR_Integer) (HeadVar__3_3);

    succeeded = (ArgX1_4 < ArgY1_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (ArgX1_4 > ArgY1_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
  }
}

static MR_bool MR_CALL 
mdb__sized_pretty____Unify____functor_count_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_5 == CastY_6);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Integer ArgX1_3 = (MR_Integer) (HeadVar__1_1);
    MR_Integer ArgY1_4 = (MR_Integer) (HeadVar__2_2);

    succeeded = (ArgX1_3 == ArgY1_4);
  }
  return succeeded;
}

static void MR_CALL 
mdb__sized_pretty____Compare____char_count_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Integer ArgX1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer ArgY1_5 = (MR_Integer) (HeadVar__3_3);

    succeeded = (ArgX1_4 < ArgY1_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (ArgX1_4 > ArgY1_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
  }
}

static MR_bool MR_CALL 
mdb__sized_pretty____Unify____char_count_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_5 == CastY_6);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Integer ArgX1_3 = (MR_Integer) (HeadVar__1_1);
    MR_Integer ArgY1_4 = (MR_Integer) (HeadVar__2_2);

    succeeded = (ArgX1_3 == ArgY1_4);
  }
  return succeeded;
}

static MR_Integer MR_CALL 
mdb__sized_pretty__maximum_functors_2_f_0(
  MR_Word TypeClassInfo_for_measure_with_params_4,
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2)
{
  MR_Integer HeadVar__3_3;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_measure_with_params_4, 0)), 7))));
  MR_Box conv1_HeadVar__3_3;

  conv1_HeadVar__3_3 = func_0(((MR_Box) (TypeClassInfo_for_measure_with_params_4)), HeadVar__1_1, HeadVar__2_2);
  HeadVar__3_3 = ((MR_Integer) (conv1_HeadVar__3_3));
  return HeadVar__3_3;
}

static MR_Word MR_CALL 
mdb__sized_pretty__compare_measures_2_f_0(
  MR_Word TypeClassInfo_for_measure_4,
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2)
{
  MR_Word HeadVar__3_3;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_measure_4, 0)), 7))));
  MR_Box conv1_HeadVar__3_3;

  conv1_HeadVar__3_3 = func_0(((MR_Box) (TypeClassInfo_for_measure_4)), HeadVar__1_1, HeadVar__2_2);
  HeadVar__3_3 = ((MR_Word) (conv1_HeadVar__3_3));
  return HeadVar__3_3;
}

static MR_Box MR_CALL 
mdb__sized_pretty__zero_measure_0_f_0(
  MR_Word TypeClassInfo_for_measure_2)
{
  MR_Box HeadVar__1_1;
  MR_Box MR_CALL (* func_0)(MR_Box) = ((MR_Box MR_CALL (*)(MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_measure_2, 0)), 6))));

  HeadVar__1_1 = func_0(((MR_Box) (TypeClassInfo_for_measure_2)));
  return HeadVar__1_1;
}

static MR_Box MR_CALL 
mdb__sized_pretty__max_measure_2_f_0(
  MR_Word TypeClassInfo_for_measure_4,
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2)
{
  MR_Box HeadVar__3_3;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_measure_4, 0)), 5))));

  HeadVar__3_3 = func_0(((MR_Box) (TypeClassInfo_for_measure_4)), HeadVar__1_1, HeadVar__2_2);
  return HeadVar__3_3;
}

static void MR_CALL 
mdb__sized_pretty__get_arg_length_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer * HeadVar__2_2,
  MR_Integer * HeadVar__3_3)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Integer) 0;
    *HeadVar__3_3 = (MR_Integer) 0;
  }
  else
  {
    MR_Word TypeInfo_21_21;
    MR_Word HeadUniv_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Rest_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_String Functor_8;
    MR_Integer Arity_9;
    MR_Integer Correction_10;
    MR_Integer Length_13;
    MR_Integer RestTotalLength_14;
    MR_Integer RestMaxLength_15;
    MR_Box Var_16;
    MR_Integer Var_20;

    Var_16 = mercury__univ__univ_value_1_f_0(&TypeInfo_21_21, HeadUniv_4);
    mercury__deconstruct__functor_4_p_2(TypeInfo_21_21, Var_16, (MR_Integer) 2, &Functor_8, &Arity_9);
    if ((Rest_5 == (MR_Word) ((MR_Unsigned) 0U)))
      Correction_10 = (MR_Integer) 2;
    else
      Correction_10 = (MR_Integer) 3;
    succeeded = (Arity_9 == (MR_Integer) 0);
    if (succeeded)
      Length_13 = mercury__string__length_1_f_0(Functor_8);
    else
    {
      MR_Integer Var_18;

      Var_18 = mercury__string__length_1_f_0(Functor_8);
      Length_13 = (MR_Integer) ((MR_Unsigned) Var_18 + (MR_Unsigned) 2);
    }
    Var_20 = (MR_Integer) ((MR_Unsigned) Length_13 + (MR_Unsigned) Correction_10);
    mdb__sized_pretty__get_arg_length_3_p_0(Rest_5, &RestTotalLength_14, &RestMaxLength_15);
    *HeadVar__2_2 = (MR_Integer) ((MR_Unsigned) Length_13 + (MR_Unsigned) RestTotalLength_14);
    mercury__int__max_3_p_0(Var_20, RestMaxLength_15, HeadVar__3_3);
  }
}

static void MR_CALL 
mdb__sized_pretty__handle_arg_2_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = mercury__pprint__nil_0_f_0();
  else
  {
    MR_Word Arg_Term_4;
    MR_Word Var_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));

    Arg_Term_4 = ((MR_Word) ((MR_hl_field(0, Var_6, 1))));
    mdb__sized_pretty__to_doc_sized_2_p_0(TypeInfo_for_T_7, Arg_Term_4, HeadVar__2_2);
  }
}

void MR_CALL 
mdb__sized_pretty__univ_to_string_line_5_p_0(
  MR_Word BrowserDb_6,
  MR_Word Univ_7,
  MR_Integer LineWidth_8,
  MR_Integer Lines_9,
  MR_String * String_10)
{
  MR_Word Var_11;

  {
    Var_11 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_11, 0) = ((MR_Box) (Univ_7));
  }
  mdb__sized_pretty__browser_term_to_string_line_5_p_0(BrowserDb_6, Var_11, LineWidth_8, Lines_9, String_10);
}

void MR_CALL 
mdb__sized_pretty__browser_term_to_string_line_5_p_0(
  MR_Word BrowserDb_6,
  MR_Word BrowserTerm_7,
  MR_Integer LineWidth_8,
  MR_Integer Lines_9,
  MR_String * String_10)
{
  MR_bool succeeded;
  MR_Word Params_11 = (MR_Word) (LineWidth_8);
  MR_Integer Arity_13;
  MR_Word MaybeReturn_14;
  MR_Word Limit_15;
  MR_Word AnnotTerm_16;
  MR_Word Doc_23;
  MR_String _Functor_12;
  MR_Integer Var_24;
  MR_Integer Var_25;
  MR_Integer Var_26;
  MR_Word ReturnValue_19;
  MR_Word Var_29;

  mdb__browser_info__functor_browser_term_cc_5_p_0(BrowserDb_6, BrowserTerm_7, &_Functor_12, &Arity_13, &MaybeReturn_14);
  succeeded = (Arity_13 != (MR_Integer) 0);
  if (succeeded)
  {
    succeeded = (Lines_9 != (MR_Integer) 0);
    if (succeeded)
    {
      Var_26 = (MR_Integer) 1;
      Var_25 = (MR_Integer) ((MR_Unsigned) Lines_9 - (MR_Unsigned) Var_26);
      Var_24 = mercury__int__f_47_47_2_f_0(Var_25, Arity_13);
      succeeded = (Var_24 == (MR_Integer) 0);
    }
  }
  if (succeeded)
  {
    MR_Integer Var_27 = (MR_Integer) ((MR_Unsigned) LineWidth_8 - (MR_Unsigned) 1);

    {
      Limit_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Limit_15, 0) = ((MR_Box) (Var_27));
    }
  }
  else
    {
      Limit_15 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Limit_15, 0) = ((MR_Box) (Lines_9));
    }
  mdb__sized_pretty__annotate_with_size_5_p_0((MR_Word) (&mdb__sized_pretty_scalar_common_2[0]), BrowserDb_6, BrowserTerm_7, ((MR_Box) (Params_11)), ((MR_Box) (Limit_15)), &AnnotTerm_16);
  succeeded = (MaybeReturn_14 == (MR_Integer) 1);
  if (succeeded)
  {
    succeeded = ((MR_tag((MR_Word) BrowserTerm_7)) == (MR_Integer) 1);
    if (succeeded)
    {
      Var_29 = ((MR_Word) ((MR_hl_field(1, BrowserTerm_7, 2))));
      succeeded = (Var_29 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        ReturnValue_19 = ((MR_Word) ((MR_hl_field(1, Var_29, 0))));
    }
  }
  if (succeeded)
  {
    MR_Word AnnotReturn_20;
    MR_Word AnnotTermStr_21;
    MR_Word AnnotReturnStr_22;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_36;
    MR_Word Var_37;

    {
      Var_30 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_30, 0) = ((MR_Box) (ReturnValue_19));
    }
    mdb__sized_pretty__annotate_with_size_5_p_0((MR_Word) (&mdb__sized_pretty_scalar_common_2[0]), BrowserDb_6, Var_30, ((MR_Box) (Params_11)), ((MR_Box) (Limit_15)), &AnnotReturn_20);
    mdb__sized_pretty__to_doc_sized_2_p_0((MR_Word) (&mdb__sized_pretty__mdb__sized_pretty__type_ctor_info_size_count_0), AnnotTerm_16, &AnnotTermStr_21);
    mdb__sized_pretty__to_doc_sized_2_p_0((MR_Word) (&mdb__sized_pretty__mdb__sized_pretty__type_ctor_info_size_count_0), AnnotReturn_20, &AnnotReturnStr_22);
    Var_33 = mercury__pprint__line_0_f_0();
    Var_32 = mercury__pprint__f_60_62_2_f_0(AnnotTermStr_21, Var_33);
    Var_37 = mercury__pprint__text_1_f_0((MR_String) " = ");
    Var_36 = mercury__pprint__f_60_62_2_f_0(Var_37, AnnotReturnStr_22);
    Var_34 = mercury__pprint__nest_2_f_0((MR_Word) (&mdb__sized_pretty_scalar_common_1[1]), (MR_Integer) 2, ((MR_Box) (Var_36)));
    Var_31 = mercury__pprint__f_60_62_2_f_0(Var_32, Var_34);
    Doc_23 = mercury__pprint__group_1_f_0((MR_Word) (&mdb__sized_pretty_scalar_common_1[1]), ((MR_Box) (Var_31)));
  }
  else
    mdb__sized_pretty__to_doc_sized_2_p_0((MR_Word) (&mdb__sized_pretty__mdb__sized_pretty__type_ctor_info_size_count_0), AnnotTerm_16, &Doc_23);
  *String_10 = mercury__pprint__to_string_2_f_0(LineWidth_8, Doc_23);
}

static MR_Box MR_CALL 
mdb__sized_pretty__to_doc_sized_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_46;

  conv1_HeadVar__2_46 = mdb__sized_pretty__IntroducedFrom__func__to_doc_sized_2__641__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_46));
  return wrapper_arg_2;
}

static void MR_CALL 
mdb__sized_pretty__to_doc_sized_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  mdb__sized_pretty__handle_arg_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
}

static void MR_CALL 
mdb__sized_pretty__to_doc_sized_2_p_0(
  MR_Word TypeInfo_for_T_51,
  MR_Word HeadVar__1_1,
  MR_Word * Doc_2)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
  {
    MR_Word Var_54 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 2))));
    MR_Word Var_56 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));

    if ((Var_54 == (MR_Word) ((MR_Unsigned) 0U)))
      if (((MR_tag((MR_Word) Var_56)) == (MR_Integer) 0))
      {
        MR_Word TypeInfo_52_52;
        MR_Word Univ_6 = ((MR_Word) ((MR_hl_field(0, Var_56, 0))));
        MR_String Functor_7;
        MR_Integer Arity_8;
        MR_Box Var_13;
        MR_Word Var_15;
        MR_Word Var_16;
        MR_Word Var_17;
        MR_Word Var_19;
        MR_Word Var_20;

        Var_13 = mercury__univ__univ_value_1_f_0(&TypeInfo_52_52, Univ_6);
        mercury__deconstruct__functor_4_p_2(TypeInfo_52_52, Var_13, (MR_Integer) 2, &Functor_7, &Arity_8);
        Var_16 = mercury__pprint__text_1_f_0(Functor_7);
        Var_17 = mercury__pprint__text_1_f_0((MR_String) "/");
        Var_15 = mercury__pprint__f_60_62_2_f_0(Var_16, Var_17);
        {
          Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_20, 0) = ((MR_Box) (Arity_8));
        }
        Var_19 = mercury__pprint__poly_1_f_0(Var_20);
        *Doc_2 = mercury__pprint__f_60_62_2_f_0(Var_15, Var_19);
      }
      else
      {
        MR_Word Args_9 = ((MR_Word) ((MR_hl_field(1, Var_56, 1))));
        MR_Word MaybeReturn_10 = ((MR_Word) ((MR_hl_field(1, Var_56, 2))));
        MR_String Functor_36 = ((MR_String) ((MR_hl_field(1, Var_56, 0))));
        MR_Integer Arity_37;

        mercury__list__length_2_p_0((MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0), Args_9, &Arity_37);
        if ((MaybeReturn_10 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Var_30;
          MR_Word Var_31;
          MR_Word Var_32;
          MR_Word Var_34;
          MR_Word Var_35;

          Var_31 = mercury__pprint__text_1_f_0(Functor_36);
          Var_32 = mercury__pprint__text_1_f_0((MR_String) "/");
          Var_30 = mercury__pprint__f_60_62_2_f_0(Var_31, Var_32);
          {
            Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_35, 0) = ((MR_Box) (Arity_37));
          }
          Var_34 = mercury__pprint__poly_1_f_0(Var_35);
          *Doc_2 = mercury__pprint__f_60_62_2_f_0(Var_30, Var_34);
        }
        else
        {
          MR_Word Var_21;
          MR_Word Var_22;
          MR_Word Var_23;
          MR_Word Var_24;
          MR_Word Var_26;
          MR_Word Var_27;
          MR_Word Var_28;

          Var_23 = mercury__pprint__text_1_f_0(Functor_36);
          Var_24 = mercury__pprint__text_1_f_0((MR_String) "/");
          Var_22 = mercury__pprint__f_60_62_2_f_0(Var_23, Var_24);
          {
            Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_27, 0) = ((MR_Box) (Arity_37));
          }
          Var_26 = mercury__pprint__poly_1_f_0(Var_27);
          Var_21 = mercury__pprint__f_60_62_2_f_0(Var_22, Var_26);
          Var_28 = mercury__pprint__text_1_f_0((MR_String) "+1");
          *Doc_2 = mercury__pprint__f_60_62_2_f_0(Var_21, Var_28);
        }
      }
    else
    {
      MR_String Functor_40 = ((MR_String) ((MR_hl_field(1, Var_54, 0))));
      MR_Integer Arity_41 = ((MR_Integer) ((MR_hl_field(1, Var_54, 1))));
      MR_Word MaybeArgs_42 = ((MR_Word) ((MR_hl_field(1, Var_54, 2))));

      if ((MaybeArgs_42 == (MR_Word) ((MR_Unsigned) 0U)))
        *Doc_2 = mercury__pprint__text_1_f_0(Functor_40);
      else
      {
        MR_Word TypeInfo_38_79;
        MR_Word TypeInfo_40_81;
        MR_Word TypeInfo_42_83;
        MR_Word Args_57;
        MR_Word NewArgs_58;
        MR_Word Var_59;
        MR_Word Var_60;
        MR_Word Var_61;
        MR_Word Var_86;

        {
          Var_59 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_59, 0) = ((MR_Box) (&mdb__sized_pretty_scalar_common_5[1]));
          MR_hl_field(0, Var_59, 1) = ((MR_Box) (mdb__sized_pretty__to_doc_sized_2_p_0_1));
          MR_hl_field(0, Var_59, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_59, 3) = ((MR_Box) (TypeInfo_for_T_51));
        }
        {
          TypeInfo_38_79 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeInfo_38_79, 0) = ((MR_Box) (&mdb__sized_pretty__mdb__sized_pretty__type_ctor_info_size_annotated_term_1));
          MR_hl_field(0, TypeInfo_38_79, 1) = ((MR_Box) (TypeInfo_for_T_51));
        }
        {
          TypeInfo_40_81 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeInfo_40_81, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
          MR_hl_field(0, TypeInfo_40_81, 1) = ((MR_Box) (TypeInfo_for_T_51));
          MR_hl_field(0, TypeInfo_40_81, 2) = ((MR_Box) (TypeInfo_38_79));
        }
        {
          TypeInfo_42_83 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeInfo_42_83, 0) = ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1));
          MR_hl_field(0, TypeInfo_42_83, 1) = ((MR_Box) (TypeInfo_40_81));
        }
        mercury__list__map_3_p_1(TypeInfo_42_83, (MR_Word) (&mercury__pprint__pprint__type_ctor_info_doc_0), (MR_Word) (Var_59), (MR_Word) (MaybeArgs_42), &Args_57);
        mercury__list__remove_adjacent_dups_2_p_0((MR_Word) (&mercury__pprint__pprint__type_ctor_info_doc_0), Args_57, &NewArgs_58);
        succeeded = (NewArgs_58 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_60 = ((MR_Word) ((MR_hl_field(1, NewArgs_58, 0))));
          Var_61 = ((MR_Word) ((MR_hl_field(1, NewArgs_58, 1))));
          Var_86 = mercury__pprint__nil_0_f_0();
          succeeded = mercury__pprint____Unify____doc_0_0(Var_60, Var_86);
          if (succeeded)
            succeeded = (Var_61 == (MR_Word) ((MR_Unsigned) 0U));
        }
        if (succeeded)
        {
          MR_Word Var_62;
          MR_Word Var_63;
          MR_Word Var_64;
          MR_Word Var_66;
          MR_Word Var_67;

          Var_63 = mercury__pprint__text_1_f_0(Functor_40);
          Var_64 = mercury__pprint__text_1_f_0((MR_String) "/");
          Var_62 = mercury__pprint__f_60_62_2_f_0(Var_63, Var_64);
          {
            Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_67, 0) = ((MR_Box) (Arity_41));
          }
          Var_66 = mercury__pprint__poly_1_f_0(Var_67);
          *Doc_2 = mercury__pprint__f_60_62_2_f_0(Var_62, Var_66);
        }
        else
        {
          MR_Word Var_68;
          MR_Word Var_69;
          MR_Word Var_70;
          MR_Word Var_71;
          MR_Word Var_73;
          MR_Word Var_74;
          MR_Word Var_75;
          MR_Word Var_77;

          Var_68 = mercury__pprint__text_1_f_0(Functor_40);
          Var_74 = mercury__pprint__line_0_f_0();
          Var_77 = mercury__pprint__comma_space_line_0_f_0();
          Var_75 = mercury__pprint__separated_3_f_0((MR_Word) (&mercury__pprint__pprint__type_ctor_info_doc_0), (MR_Word) (&mdb__sized_pretty_scalar_common_1[1]), (MR_Word) (&mdb__sized_pretty_scalar_common_7[1]), ((MR_Box) (Var_77)), Args_57);
          Var_73 = mercury__pprint__f_60_62_2_f_0(Var_74, Var_75);
          Var_71 = mercury__pprint__nest_2_f_0((MR_Word) (&mdb__sized_pretty_scalar_common_1[1]), (MR_Integer) 2, ((MR_Box) (Var_73)));
          Var_70 = mercury__pprint__group_1_f_0((MR_Word) (&mdb__sized_pretty_scalar_common_1[1]), ((MR_Box) (Var_71)));
          Var_69 = mercury__pprint__parentheses_1_f_0((MR_Word) (&mdb__sized_pretty_scalar_common_1[1]), ((MR_Box) (Var_70)));
          *Doc_2 = mercury__pprint__f_60_62_2_f_0(Var_68, Var_69);
        }
      }
    }
  }
  else
  {
    MR_String Functor_47 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Integer Arity_48 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word MaybeArgs_49 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 4))));

    mdb__sized_pretty__to_doc_sized_2_4_p_0(TypeInfo_for_T_51, Functor_47, Arity_48, MaybeArgs_49, Doc_2);
  }
}

static MR_Box MR_CALL 
mdb__sized_pretty__to_doc_sized_2_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_46;

  conv1_HeadVar__2_46 = mdb__sized_pretty__IntroducedFrom__func__to_doc_sized_2__641__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_46));
  return wrapper_arg_2;
}

static void MR_CALL 
mdb__sized_pretty__to_doc_sized_2_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  mdb__sized_pretty__handle_arg_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
}

static void MR_CALL 
mdb__sized_pretty__to_doc_sized_2_4_p_0(
  MR_Word TypeInfo_for_T_34,
  MR_String Functor_1,
  MR_Integer HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  MR_bool succeeded;

  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = mercury__pprint__text_1_f_0(Functor_1);
  else
  {
    MR_Word TypeInfo_38_38;
    MR_Word TypeInfo_40_40;
    MR_Word TypeInfo_42_42;
    MR_Word Args_12;
    MR_Word NewArgs_13;
    MR_Word Var_14;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_48;

    {
      Var_14 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_14, 0) = ((MR_Box) (&mdb__sized_pretty_scalar_common_5[1]));
      MR_hl_field(0, Var_14, 1) = ((MR_Box) (mdb__sized_pretty__to_doc_sized_2_4_p_0_1));
      MR_hl_field(0, Var_14, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_14, 3) = ((MR_Box) (TypeInfo_for_T_34));
    }
    {
      TypeInfo_38_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_38_38, 0) = ((MR_Box) (&mdb__sized_pretty__mdb__sized_pretty__type_ctor_info_size_annotated_term_1));
      MR_hl_field(0, TypeInfo_38_38, 1) = ((MR_Box) (TypeInfo_for_T_34));
    }
    {
      TypeInfo_40_40 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_40_40, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
      MR_hl_field(0, TypeInfo_40_40, 1) = ((MR_Box) (TypeInfo_for_T_34));
      MR_hl_field(0, TypeInfo_40_40, 2) = ((MR_Box) (TypeInfo_38_38));
    }
    {
      TypeInfo_42_42 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_42_42, 0) = ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1));
      MR_hl_field(0, TypeInfo_42_42, 1) = ((MR_Box) (TypeInfo_40_40));
    }
    mercury__list__map_3_p_1(TypeInfo_42_42, (MR_Word) (&mercury__pprint__pprint__type_ctor_info_doc_0), (MR_Word) (Var_14), (MR_Word) (HeadVar__3_3), &Args_12);
    mercury__list__remove_adjacent_dups_2_p_0((MR_Word) (&mercury__pprint__pprint__type_ctor_info_doc_0), Args_12, &NewArgs_13);
    succeeded = (NewArgs_13 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_16 = ((MR_Word) ((MR_hl_field(1, NewArgs_13, 0))));
      Var_17 = ((MR_Word) ((MR_hl_field(1, NewArgs_13, 1))));
      Var_48 = mercury__pprint__nil_0_f_0();
      succeeded = mercury__pprint____Unify____doc_0_0(Var_16, Var_48);
      if (succeeded)
        succeeded = (Var_17 == (MR_Word) ((MR_Unsigned) 0U));
    }
    if (succeeded)
    {
      MR_Word Var_18;
      MR_Word Var_19;
      MR_Word Var_20;
      MR_Word Var_22;
      MR_Word Var_23;

      Var_19 = mercury__pprint__text_1_f_0(Functor_1);
      Var_20 = mercury__pprint__text_1_f_0((MR_String) "/");
      Var_18 = mercury__pprint__f_60_62_2_f_0(Var_19, Var_20);
      {
        Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_23, 0) = ((MR_Box) (HeadVar__2_2));
      }
      Var_22 = mercury__pprint__poly_1_f_0(Var_23);
      *HeadVar__4_4 = mercury__pprint__f_60_62_2_f_0(Var_18, Var_22);
    }
    else
    {
      MR_Word Var_24;
      MR_Word Var_25;
      MR_Word Var_26;
      MR_Word Var_27;
      MR_Word Var_29;
      MR_Word Var_30;
      MR_Word Var_31;
      MR_Word Var_33;

      Var_24 = mercury__pprint__text_1_f_0(Functor_1);
      Var_30 = mercury__pprint__line_0_f_0();
      Var_33 = mercury__pprint__comma_space_line_0_f_0();
      Var_31 = mercury__pprint__separated_3_f_0((MR_Word) (&mercury__pprint__pprint__type_ctor_info_doc_0), (MR_Word) (&mdb__sized_pretty_scalar_common_1[1]), (MR_Word) (&mdb__sized_pretty_scalar_common_7[0]), ((MR_Box) (Var_33)), Args_12);
      Var_29 = mercury__pprint__f_60_62_2_f_0(Var_30, Var_31);
      Var_27 = mercury__pprint__nest_2_f_0((MR_Word) (&mdb__sized_pretty_scalar_common_1[1]), (MR_Integer) 2, ((MR_Box) (Var_29)));
      Var_26 = mercury__pprint__group_1_f_0((MR_Word) (&mdb__sized_pretty_scalar_common_1[1]), ((MR_Box) (Var_27)));
      Var_25 = mercury__pprint__parentheses_1_f_0((MR_Word) (&mdb__sized_pretty_scalar_common_1[1]), ((MR_Box) (Var_26)));
      *HeadVar__4_4 = mercury__pprint__f_60_62_2_f_0(Var_24, Var_25);
    }
  }
}

static void MR_CALL 
mdb__sized_pretty__process_args_7_p_0(
  MR_Word TypeClassInfo_for_measure_with_params_40,
  MR_Word BrowserDb_1,
  MR_Box Params_2,
  MR_Word HeadVar__3_3,
  MR_Box ArgLimit_4,
  MR_Box SplitLimit_5,
  MR_Word * HeadVar__6_6,
  MR_Box * HeadVar__7_7)
{
  MR_bool succeeded;

  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word TypeClassInfo_for_measure_41;
    MR_Box MR_CALL (* func_0)(MR_Box);

    *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
    mercury__private_builtin__superclass_from_typeclass_info_3_p_0(TypeClassInfo_for_measure_with_params_40, (MR_Integer) 1, &TypeClassInfo_for_measure_41);
    func_0 = ((MR_Box MR_CALL (*)(MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_measure_41, 0)), 6))));
    *HeadVar__7_7 = func_0(((MR_Box) (TypeClassInfo_for_measure_41)));
  }
  else
  {
    MR_Word HeadArg_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
    MR_Word Rest_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word NewHeadArg_18;
    MR_Word NewRest_19;
    MR_Box RestSize_35;

    if ((HeadArg_14 == (MR_Word) ((MR_Unsigned) 0U)))
      NewHeadArg_18 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word X_21 = ((MR_Word) ((MR_hl_field(1, HeadArg_14, 0))));
      MR_Word STerm_23 = ((MR_Word) ((MR_hl_field(0, X_21, 1))));
      MR_Box Size_24;
      MR_Word BrowserTerm_25;
      MR_Word TypeInfo_44_44;
      MR_Word TypeInfo_45_45;

      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_measure_with_params_40, (MR_Integer) 2, &TypeInfo_44_44);
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_measure_with_params_40, (MR_Integer) 2, &TypeInfo_45_45);
      if (((MR_tag((MR_Word) STerm_23)) == (MR_Integer) 1))
      {
        BrowserTerm_25 = ((MR_Word) ((MR_hl_field(1, STerm_23, 0))));
        Size_24 = (MR_hl_field(1, STerm_23, 1));
      }
      else
      {
        BrowserTerm_25 = ((MR_Word) ((MR_hl_field(0, STerm_23, 0))));
        Size_24 = (MR_hl_field(0, STerm_23, 1));
      }
      succeeded = ((MR_tag((MR_Word) STerm_23)) == (MR_Integer) 0);
      if (succeeded)
      {
        {
          MR_Word TypeClassInfo_for_measure_46;
          MR_Word Var_36;
          MR_Box MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box);
          MR_Box conv2_Var_36;

          mercury__private_builtin__superclass_from_typeclass_info_3_p_0(TypeClassInfo_for_measure_with_params_40, (MR_Integer) 1, &TypeClassInfo_for_measure_46);
          func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_measure_46, 0)), 7))));
          conv2_Var_36 = func_1(((MR_Box) (TypeClassInfo_for_measure_46)), ArgLimit_4, Size_24);
          Var_36 = ((MR_Word) (conv2_Var_36));
          succeeded = (Var_36 == (MR_Integer) 2);
        }
        if (!(succeeded))
        {
          MR_Word TypeClassInfo_for_measure_48;
          MR_Word Var_37;
          MR_Box MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box);
          MR_Box conv4_Var_37;

          mercury__private_builtin__superclass_from_typeclass_info_3_p_0(TypeClassInfo_for_measure_with_params_40, (MR_Integer) 1, &TypeClassInfo_for_measure_48);
          func_3 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_measure_48, 0)), 7))));
          conv4_Var_37 = func_3(((MR_Box) (TypeClassInfo_for_measure_48)), ArgLimit_4, Size_24);
          Var_37 = ((MR_Word) (conv4_Var_37));
          succeeded = (Var_37 == (MR_Integer) 0);
        }
      }
      if (succeeded)
        NewHeadArg_18 = HeadArg_14;
      else
      {
        MR_Word TypeInfo_50_50;
        MR_Word TypeInfo_51_51;
        MR_Word TypeInfo_53_53;
        MR_Word NewSTerm_31;
        MR_Word Var_38;
        MR_Word conv5_Var_38;

        mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_measure_with_params_40, (MR_Integer) 2, &TypeInfo_50_50);
        mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_measure_with_params_40, (MR_Integer) 2, &TypeInfo_51_51);
        {
          TypeInfo_53_53 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeInfo_53_53, 0) = ((MR_Box) (&mdb__sized_pretty__mdb__sized_pretty__type_ctor_info_size_annotated_term_1));
          MR_hl_field(0, TypeInfo_53_53, 1) = ((MR_Box) (TypeInfo_51_51));
        }
        mdb__sized_pretty__annotate_with_size_5_p_0(TypeClassInfo_for_measure_with_params_40, BrowserDb_1, BrowserTerm_25, Params_2, SplitLimit_5, &NewSTerm_31);
        conv5_Var_38 = mercury__pair__pair_2_f_0(TypeInfo_50_50, TypeInfo_53_53, SplitLimit_5, ((MR_Box) (NewSTerm_31)));
        Var_38 = (MR_Word) (conv5_Var_38);
        {
          NewHeadArg_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, NewHeadArg_18, 0) = ((MR_Box) (Var_38));
        }
      }
    }
    mdb__sized_pretty__process_args_7_p_0(TypeClassInfo_for_measure_with_params_40, BrowserDb_1, Params_2, Rest_15, ArgLimit_4, SplitLimit_5, &NewRest_19, &RestSize_35);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__6_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (NewHeadArg_18));
      MR_hl_field(1, base, 1) = ((MR_Box) (NewRest_19));
    }
    if ((NewHeadArg_18 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__7_7 = RestSize_35;
    else
    {
      MR_Word Term_33;
      MR_Box NewSize_34;
      MR_Word Var_39 = ((MR_Word) ((MR_hl_field(1, NewHeadArg_18, 0))));
      MR_Word TypeInfo_55_55;
      MR_Box MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box);

      Term_33 = ((MR_Word) ((MR_hl_field(0, Var_39, 1))));
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_measure_with_params_40, (MR_Integer) 2, &TypeInfo_55_55);
      if (((MR_tag((MR_Word) Term_33)) == (MR_Integer) 1))
        NewSize_34 = (MR_hl_field(1, Term_33, 1));
      else
        NewSize_34 = (MR_hl_field(0, Term_33, 1));
      func_6 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_measure_with_params_40, 0)), 5))));
      *HeadVar__7_7 = func_6(((MR_Box) (TypeClassInfo_for_measure_with_params_40)), NewSize_34, RestSize_35, Params_2);
    }
  }
}

static MR_Box MR_CALL 
mdb__sized_pretty__annotate_with_size_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv5_HeadVar__3_67;

  conv5_HeadVar__3_67 = mdb__sized_pretty__IntroducedFrom__func__second_pass__475__1_2_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv5_HeadVar__3_67));
  return wrapper_arg_2;
}

static void MR_CALL 
mdb__sized_pretty__annotate_with_size_5_p_0(
  MR_Word TypeClassInfo_for_measure_with_params_12,
  MR_Word BrowserDb_6,
  MR_Word BrowserTerm_7,
  MR_Box Params_8,
  MR_Box Limit_9,
  MR_Word * SizedTerm2_10)
{
  MR_bool succeeded;
  MR_Integer MaxFunctors_13;
  MR_Word MaybeFunctorArityArgs_14;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_measure_with_params_12, 0)), 7))));
  MR_Box conv1_MaxFunctors_13;
  MR_Word _MaybeReturn_15;

  conv1_MaxFunctors_13 = func_0(((MR_Box) (TypeClassInfo_for_measure_with_params_12)), Limit_9, Params_8);
  MaxFunctors_13 = ((MR_Integer) (conv1_MaxFunctors_13));
  mdb__browser_info__limited_deconstruct_browser_term_cc_5_p_0(BrowserDb_6, BrowserTerm_7, MaxFunctors_13, &MaybeFunctorArityArgs_14, &_MaybeReturn_15);
  if ((MaybeFunctorArityArgs_14 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word TypeClassInfo_for_measure_32;
    MR_Box Var_30;
    MR_Box MR_CALL (* func_2)(MR_Box);

    mercury__private_builtin__superclass_from_typeclass_info_3_p_0(TypeClassInfo_for_measure_with_params_12, (MR_Integer) 1, &TypeClassInfo_for_measure_32);
    func_2 = ((MR_Box MR_CALL (*)(MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_measure_32, 0)), 6))));
    Var_30 = func_2(((MR_Box) (TypeClassInfo_for_measure_32)));
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      *SizedTerm2_10 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (BrowserTerm_7));
      MR_hl_field(1, base, 1) = Var_30;
      MR_hl_field(1, base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  else
  {
    MR_String Functor_16;
    MR_Integer Arity_17;
    MR_Word Args_18;
    MR_Box FunctorSize_19;
    MR_Word MaybeInitArgLimit_20;
    MR_Box NewLimit_21;
    MR_Box NewParams_22;
    MR_Word Exact0_23;
    MR_Box SoFar_24;
    MR_Word Exact_25;
    MR_Word MaybeArgSizes_26;
    MR_Tuple Var_27 = ((MR_Tuple) ((MR_hl_field(1, MaybeFunctorArityArgs_14, 0))));
    void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *, MR_Box *);
    MR_Box conv4_MaybeInitArgLimit_20;

    Functor_16 = ((MR_String) ((MR_hl_field(0, Var_27, 0))));
    Arity_17 = ((MR_Integer) ((MR_hl_field(0, Var_27, 1))));
    Args_18 = ((MR_Word) ((MR_hl_field(0, Var_27, 2))));
    func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_measure_with_params_12, 0)), 8))));
    func_3(((MR_Box) (TypeClassInfo_for_measure_with_params_12)), ((MR_Box) (BrowserDb_6)), ((MR_Box) (BrowserTerm_7)), Params_8, Limit_9, ((MR_Box) (Arity_17)), ((MR_Box) ((MR_Integer) 1)), &FunctorSize_19, &conv4_MaybeInitArgLimit_20, &NewLimit_21, &NewParams_22);
    MaybeInitArgLimit_20 = ((MR_Word) (conv4_MaybeInitArgLimit_20));
    succeeded = (Arity_17 != (MR_Integer) 0);
    if (succeeded)
      succeeded = (MaybeInitArgLimit_20 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      Exact0_23 = (MR_Integer) 0;
    else
      Exact0_23 = (MR_Integer) 1;
    mdb__sized_pretty__annotate_args_with_size_10_p_0(TypeClassInfo_for_measure_with_params_12, BrowserDb_6, Args_18, MaybeInitArgLimit_20, NewParams_22, NewLimit_21, FunctorSize_19, &SoFar_24, Exact0_23, &Exact_25, &MaybeArgSizes_26);
    switch (Exact_25) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box FSize_199;
          MR_Word MaybeInitLimit_200;
          MR_Box NewLimit_201;
          MR_Box NewParams_202;

          mdb__sized_pretty__measured_split_10_p_0(TypeClassInfo_for_measure_with_params_12, BrowserDb_6, BrowserTerm_7, Params_8, Limit_9, Arity_17, (MR_Integer) 1, &FSize_199, &MaybeInitLimit_200, &NewLimit_201, &NewParams_202);
          if ((MaybeInitLimit_200 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *SizedTerm2_10 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (BrowserTerm_7));
              MR_hl_field(1, base, 1) = FSize_199;
              MR_hl_field(1, base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          else
          {
            MR_Box InitLimit_131 = (MR_hl_field(1, MaybeInitLimit_200, 0));
            MR_Integer Passed_132;
            MR_Box Used_133;
            MR_Box LeftOver_134;
            MR_Word MaybeSplitLimit_136;
            MR_Box Var_145;
            MR_Integer Var_146;
            MR_Box Var_80;
            MR_Box Var_81;
            MR_Box Var_82;

            mdb__sized_pretty__check_args_6_p_0(TypeClassInfo_for_measure_with_params_12, NewParams_202, MaybeArgSizes_26, InitLimit_131, &Passed_132, FSize_199, &Used_133);
            Var_145 = mdb__sized_pretty__subtract_measures_3_f_0(TypeClassInfo_for_measure_with_params_12, NewLimit_201, Used_133, Params_8);
            LeftOver_134 = mdb__sized_pretty__add_measures_3_f_0(TypeClassInfo_for_measure_with_params_12, Var_145, FSize_199, Params_8);
            Var_146 = (MR_Integer) ((MR_Unsigned) Arity_17 - (MR_Unsigned) Passed_132);
            mdb__sized_pretty__measured_split_10_p_0(TypeClassInfo_for_measure_with_params_12, BrowserDb_6, BrowserTerm_7, Params_8, LeftOver_134, Var_146, (MR_Integer) 0, &Var_80, &MaybeSplitLimit_136, &Var_81, &Var_82);
            if ((MaybeSplitLimit_136 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *SizedTerm2_10 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (BrowserTerm_7));
                MR_hl_field(1, base, 1) = FSize_199;
                MR_hl_field(1, base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
              }
            else
            {
              MR_Word TypeInfo_57_101;
              MR_Word TypeInfo_58_102;
              MR_Word TypeInfo_60_104;
              MR_Word TypeInfo_62_106;
              MR_Word TypeInfo_64_108;
              MR_Box SplitLimit_90 = (MR_hl_field(1, MaybeSplitLimit_136, 0));
              MR_Word NewArgs_91;
              MR_Box NewSize0_92;
              MR_Box NewSize_93;
              MR_Word Result0_94;
              MR_Word Result_95;
              MR_Word Var_96;
              MR_Word Var_84;
              MR_Word Var_85;

              mdb__sized_pretty__process_args_7_p_0(TypeClassInfo_for_measure_with_params_12, BrowserDb_6, NewParams_202, MaybeArgSizes_26, InitLimit_131, SplitLimit_90, &NewArgs_91, &NewSize0_92);
              NewSize_93 = mdb__sized_pretty__add_measures_3_f_0(TypeClassInfo_for_measure_with_params_12, FSize_199, NewSize0_92, NewParams_202);
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_measure_with_params_12, (MR_Integer) 2, &TypeInfo_57_101);
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_measure_with_params_12, (MR_Integer) 2, &TypeInfo_58_102);
              {
                TypeInfo_60_104 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, TypeInfo_60_104, 0) = ((MR_Box) (&mdb__sized_pretty__mdb__sized_pretty__type_ctor_info_size_annotated_term_1));
                MR_hl_field(0, TypeInfo_60_104, 1) = ((MR_Box) (TypeInfo_58_102));
              }
              {
                TypeInfo_62_106 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, TypeInfo_62_106, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
                MR_hl_field(0, TypeInfo_62_106, 1) = ((MR_Box) (TypeInfo_57_101));
                MR_hl_field(0, TypeInfo_62_106, 2) = ((MR_Box) (TypeInfo_60_104));
              }
              {
                TypeInfo_64_108 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, TypeInfo_64_108, 0) = ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1));
                MR_hl_field(0, TypeInfo_64_108, 1) = ((MR_Box) (TypeInfo_62_106));
              }
              {
                Var_96 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_96, 0) = ((MR_Box) (&mdb__sized_pretty_scalar_common_5[0]));
                MR_hl_field(0, Var_96, 1) = ((MR_Box) (mdb__sized_pretty__annotate_with_size_5_p_0_1));
                MR_hl_field(0, Var_96, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(0, Var_96, 3) = ((MR_Box) (TypeClassInfo_for_measure_with_params_12));
              }
              Result0_94 = mercury__list__map_2_f_0(TypeInfo_64_108, (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), Var_96, NewArgs_91);
              mercury__list__remove_adjacent_dups_2_p_0((MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), Result0_94, &Result_95);
              succeeded = (Result_95 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_84 = ((MR_Word) ((MR_hl_field(1, Result_95, 0))));
                Var_85 = ((MR_Word) ((MR_hl_field(1, Result_95, 1))));
                succeeded = (Var_84 == (MR_Integer) 1);
                if (succeeded)
                  succeeded = (Var_85 == (MR_Word) ((MR_Unsigned) 0U));
              }
              if (succeeded)
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  *SizedTerm2_10 = base;
                  MR_hl_field(0, base, 0) = ((MR_Box) (BrowserTerm_7));
                  MR_hl_field(0, base, 1) = NewSize_93;
                  MR_hl_field(0, base, 2) = ((MR_Box) (Functor_16));
                  MR_hl_field(0, base, 3) = ((MR_Box) (Arity_17));
                  MR_hl_field(0, base, 4) = ((MR_Box) (NewArgs_91));
                }
              else
              {
                MR_Word Var_86;

                {
                  Var_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_86, 0) = ((MR_Box) (Functor_16));
                  MR_hl_field(1, Var_86, 1) = ((MR_Box) (Arity_17));
                  MR_hl_field(1, Var_86, 2) = ((MR_Box) (NewArgs_91));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  *SizedTerm2_10 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (BrowserTerm_7));
                  MR_hl_field(1, base, 1) = NewSize_93;
                  MR_hl_field(1, base, 2) = ((MR_Box) (Var_86));
                }
              }
            }
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          *SizedTerm2_10 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (BrowserTerm_7));
          MR_hl_field(0, base, 1) = SoFar_24;
          MR_hl_field(0, base, 2) = ((MR_Box) (Functor_16));
          MR_hl_field(0, base, 3) = ((MR_Box) (Arity_17));
          MR_hl_field(0, base, 4) = ((MR_Box) (MaybeArgSizes_26));
        }
        break;
    }
  }
}

static void MR_CALL 
mdb__sized_pretty__measured_split_10_p_0(
  MR_Word TypeClassInfo_for_measure_with_params_11,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box HeadVar__4_4,
  MR_Integer HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Box * HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Box * HeadVar__9_9,
  MR_Box * HeadVar__10_10)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_measure_with_params_11, 0)), 8))));
  MR_Box conv1_HeadVar__8_8;

  func_0(((MR_Box) (TypeClassInfo_for_measure_with_params_11)), ((MR_Box) (HeadVar__1_1)), ((MR_Box) (HeadVar__2_2)), HeadVar__3_3, HeadVar__4_4, ((MR_Box) (HeadVar__5_5)), ((MR_Box) (HeadVar__6_6)), HeadVar__7_7, &conv1_HeadVar__8_8, HeadVar__9_9, HeadVar__10_10);
  *HeadVar__8_8 = ((MR_Word) (conv1_HeadVar__8_8));
}

static MR_Box MR_CALL 
mdb__sized_pretty__subtract_measures_3_f_0(
  MR_Word TypeClassInfo_for_measure_with_params_5,
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3)
{
  MR_Box HeadVar__4_4;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_measure_with_params_5, 0)), 6))));

  HeadVar__4_4 = func_0(((MR_Box) (TypeClassInfo_for_measure_with_params_5)), HeadVar__1_1, HeadVar__2_2, HeadVar__3_3);
  return HeadVar__4_4;
}

static MR_Box MR_CALL 
mdb__sized_pretty__add_measures_3_f_0(
  MR_Word TypeClassInfo_for_measure_with_params_5,
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3)
{
  MR_Box HeadVar__4_4;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_measure_with_params_5, 0)), 5))));

  HeadVar__4_4 = func_0(((MR_Box) (TypeClassInfo_for_measure_with_params_5)), HeadVar__1_1, HeadVar__2_2, HeadVar__3_3);
  return HeadVar__4_4;
}

static void MR_CALL 
mdb__sized_pretty__check_args_6_p_0(
  MR_Word TypeClassInfo_for_measure_with_params_37,
  MR_Box Params_1,
  MR_Word HeadVar__2_2,
  MR_Box ArgLimit_3,
  MR_Integer * HeadVar__4_4,
  MR_Box STATE_VARIABLE_Used_0_5,
  MR_Box * STATE_VARIABLE_Used_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__4_4 = (MR_Integer) 0;
      *STATE_VARIABLE_Used_6 = STATE_VARIABLE_Used_0_5;
    }
    else
    {
      MR_Word HeadArg_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word Rest_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));

      if ((HeadArg_13 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word next_value_of_HeadVar__2_2 = Rest_14;

        // direct tailcall eliminated
        ;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
      else
      {
        MR_Word X_18 = ((MR_Word) ((MR_hl_field(1, HeadArg_13, 0))));
        MR_Word STerm_20 = ((MR_Word) ((MR_hl_field(0, X_18, 1))));
        MR_Word TypeInfo_39_39;

        mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_measure_with_params_37, (MR_Integer) 2, &TypeInfo_39_39);
        if (((MR_tag((MR_Word) STerm_20)) == (MR_Integer) 1))
        {
          MR_Word next_value_of_HeadVar__2_2 = Rest_14;

          // direct tailcall eliminated
          ;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          continue;
        }
        else
        {
          MR_Box Size_50 = (MR_hl_field(0, STerm_20, 1));
          MR_Word TypeClassInfo_for_measure_40;
          MR_Word Var_33;
          MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);
          MR_Box conv1_Var_33;

          mercury__private_builtin__superclass_from_typeclass_info_3_p_0(TypeClassInfo_for_measure_with_params_37, (MR_Integer) 1, &TypeClassInfo_for_measure_40);
          func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_measure_40, 0)), 7))));
          conv1_Var_33 = func_0(((MR_Box) (TypeClassInfo_for_measure_40)), ArgLimit_3, Size_50);
          Var_33 = ((MR_Word) (conv1_Var_33));
          succeeded = (Var_33 == (MR_Integer) 1);
          if (succeeded)
          {
            MR_Word next_value_of_HeadVar__2_2 = Rest_14;

            // direct tailcall eliminated
            ;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            continue;
          }
          else
          {
            MR_Integer PassedRest_27;
            MR_Box STATE_VARIABLE_Used_2_36;
            MR_Box MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_measure_with_params_37, 0)), 5))));

            STATE_VARIABLE_Used_2_36 = func_2(((MR_Box) (TypeClassInfo_for_measure_with_params_37)), STATE_VARIABLE_Used_0_5, Size_50, Params_1);
            mdb__sized_pretty__check_args_6_p_0(TypeClassInfo_for_measure_with_params_37, Params_1, Rest_14, ArgLimit_3, &PassedRest_27, STATE_VARIABLE_Used_2_36, STATE_VARIABLE_Used_6);
            *HeadVar__4_4 = (MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) PassedRest_27);
          }
        }
      }
    }
    break;
  }
}

static void MR_CALL 
mdb__sized_pretty__annotate_args_with_size_10_p_0(
  MR_Word TypeClassInfo_for_measure_with_params_49,
  MR_Word BrowserDb_1,
  MR_Word HeadVar__2_2,
  MR_Word MaybeInitArgLimit_3,
  MR_Box Params_4,
  MR_Box Limit_5,
  MR_Box HeadVar__6_6,
  MR_Box * SoFar_7,
  MR_Word HeadVar__8_8,
  MR_Word * Exact_9,
  MR_Word * HeadVar__10_10)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *SoFar_7 = HeadVar__6_6;
    *Exact_9 = HeadVar__8_8;
    *HeadVar__10_10 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word Arg_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word Args_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word MaybeArgSize_27;
    MR_Word MaybeArgSizes_28;
    MR_Box SoFar1_33;
    MR_Word Exact1_39;
    MR_Word Exact2_43;
    MR_Word TypeClassInfo_for_measure_56;
    MR_Word Var_48;
    MR_Box MR_CALL (* func_10)(MR_Box, MR_Box, MR_Box);
    MR_Box conv11_Var_48;

    if ((MaybeInitArgLimit_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MaybeArgSize_27 = (MR_Word) ((MR_Unsigned) 0U);
      SoFar1_33 = HeadVar__6_6;
      Exact1_39 = HeadVar__8_8;
    }
    else
    {
      MR_Box InitArgLimit_29 = (MR_hl_field(1, MaybeInitArgLimit_3, 0));
      MR_Box AppliedArgLimit_30;
      MR_Box ArgSize_32;
      MR_Word Var_46;
      MR_Word Var_47;
      MR_Integer MaxFunctors_58;
      MR_Word MaybeFunctorArityArgs_59;
      MR_Word TypeClassInfo_for_measure_50;
      MR_Word Var_44;
      MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);
      MR_Box conv1_Var_44;
      MR_Box MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box);
      MR_Box conv5_MaxFunctors_58;
      MR_Word _MaybeReturn_60;
      MR_Word TypeInfo_55_55;
      MR_Box MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box, MR_Box);

      mercury__private_builtin__superclass_from_typeclass_info_3_p_0(TypeClassInfo_for_measure_with_params_49, (MR_Integer) 1, &TypeClassInfo_for_measure_50);
      func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_measure_50, 0)), 7))));
      conv1_Var_44 = func_0(((MR_Box) (TypeClassInfo_for_measure_50)), HeadVar__6_6, Limit_5);
      Var_44 = ((MR_Word) (conv1_Var_44));
      succeeded = (Var_44 == (MR_Integer) 2);
      if (succeeded)
        AppliedArgLimit_30 = InitArgLimit_29;
      else
      {
        MR_Word TypeClassInfo_for_measure_52;
        MR_Box Var_45;
        MR_Box MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box);
        MR_Box MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box);

        mercury__private_builtin__superclass_from_typeclass_info_3_p_0(TypeClassInfo_for_measure_with_params_49, (MR_Integer) 1, &TypeClassInfo_for_measure_52);
        func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_measure_with_params_49, 0)), 6))));
        Var_45 = func_2(((MR_Box) (TypeClassInfo_for_measure_with_params_49)), Limit_5, HeadVar__6_6, Params_4);
        func_3 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_measure_52, 0)), 5))));
        AppliedArgLimit_30 = func_3(((MR_Box) (TypeClassInfo_for_measure_52)), InitArgLimit_29, Var_45);
      }
      {
        Var_46 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_46, 0) = ((MR_Box) (Arg_18));
      }
      func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_measure_with_params_49, 0)), 7))));
      conv5_MaxFunctors_58 = func_4(((MR_Box) (TypeClassInfo_for_measure_with_params_49)), AppliedArgLimit_30, Params_4);
      MaxFunctors_58 = ((MR_Integer) (conv5_MaxFunctors_58));
      mdb__browser_info__limited_deconstruct_browser_term_cc_5_p_0(BrowserDb_1, Var_46, MaxFunctors_58, &MaybeFunctorArityArgs_59, &_MaybeReturn_60);
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_measure_with_params_49, (MR_Integer) 2, &TypeInfo_55_55);
      if ((MaybeFunctorArityArgs_59 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word TypeClassInfo_for_measure_77;
        MR_Word Size_31;
        MR_Box MR_CALL (* func_6)(MR_Box);

        mercury__private_builtin__superclass_from_typeclass_info_3_p_0(TypeClassInfo_for_measure_with_params_49, (MR_Integer) 1, &TypeClassInfo_for_measure_77);
        func_6 = ((MR_Box MR_CALL (*)(MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_measure_77, 0)), 6))));
        ArgSize_32 = func_6(((MR_Box) (TypeClassInfo_for_measure_77)));
        {
          Size_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Size_31, 0) = ((MR_Box) (Var_46));
          MR_hl_field(1, Size_31, 1) = ArgSize_32;
          MR_hl_field(1, Size_31, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_47 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_47, 0) = InitArgLimit_29;
          MR_hl_field(0, Var_47, 1) = ((MR_Box) (Size_31));
        }
        Exact1_39 = (MR_Integer) 0;
      }
      else
      {
        MR_String Functor_61;
        MR_Integer Arity_62;
        MR_Word Args_63;
        MR_Box FunctorSize_64;
        MR_Word MaybeInitArgLimit_65;
        MR_Box NewLimit_66;
        MR_Box NewParams_67;
        MR_Word Exact0_68;
        MR_Box SoFar_69;
        MR_Word Exact_70;
        MR_Word MaybeArgSizes_71;
        MR_Tuple Var_72 = ((MR_Tuple) ((MR_hl_field(1, MaybeFunctorArityArgs_59, 0))));
        void MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *, MR_Box *);
        MR_Box conv8_MaybeInitArgLimit_65;

        Functor_61 = ((MR_String) ((MR_hl_field(0, Var_72, 0))));
        Arity_62 = ((MR_Integer) ((MR_hl_field(0, Var_72, 1))));
        Args_63 = ((MR_Word) ((MR_hl_field(0, Var_72, 2))));
        func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_measure_with_params_49, 0)), 8))));
        func_7(((MR_Box) (TypeClassInfo_for_measure_with_params_49)), ((MR_Box) (BrowserDb_1)), ((MR_Box) (Var_46)), Params_4, AppliedArgLimit_30, ((MR_Box) (Arity_62)), ((MR_Box) ((MR_Integer) 1)), &FunctorSize_64, &conv8_MaybeInitArgLimit_65, &NewLimit_66, &NewParams_67);
        MaybeInitArgLimit_65 = ((MR_Word) (conv8_MaybeInitArgLimit_65));
        succeeded = (Arity_62 != (MR_Integer) 0);
        if (succeeded)
          succeeded = (MaybeInitArgLimit_65 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          Exact0_68 = (MR_Integer) 0;
        else
          Exact0_68 = (MR_Integer) 1;
        mdb__sized_pretty__annotate_args_with_size_10_p_0(TypeClassInfo_for_measure_with_params_49, BrowserDb_1, Args_63, MaybeInitArgLimit_65, NewParams_67, NewLimit_66, FunctorSize_64, &SoFar_69, Exact0_68, &Exact_70, &MaybeArgSizes_71);
        switch (Exact_70) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_74;
              MR_Word Size_93;

              {
                Var_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_74, 0) = ((MR_Box) (Functor_61));
                MR_hl_field(1, Var_74, 1) = ((MR_Box) (Arity_62));
                MR_hl_field(1, Var_74, 2) = ((MR_Box) (MaybeArgSizes_71));
              }
              {
                Size_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Size_93, 0) = ((MR_Box) (Var_46));
                MR_hl_field(1, Size_93, 1) = SoFar_69;
                MR_hl_field(1, Size_93, 2) = ((MR_Box) (Var_74));
              }
              {
                Var_47 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_47, 0) = InitArgLimit_29;
                MR_hl_field(0, Var_47, 1) = ((MR_Box) (Size_93));
              }
              ArgSize_32 = SoFar_69;
              Exact1_39 = (MR_Integer) 0;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Size_94;

              {
                Size_94 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Size_94, 0) = ((MR_Box) (Var_46));
                MR_hl_field(0, Size_94, 1) = SoFar_69;
                MR_hl_field(0, Size_94, 2) = ((MR_Box) (Functor_61));
                MR_hl_field(0, Size_94, 3) = ((MR_Box) (Arity_62));
                MR_hl_field(0, Size_94, 4) = ((MR_Box) (MaybeArgSizes_71));
              }
              {
                Var_47 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_47, 0) = InitArgLimit_29;
                MR_hl_field(0, Var_47, 1) = ((MR_Box) (Size_94));
              }
              ArgSize_32 = SoFar_69;
              Exact1_39 = HeadVar__8_8;
            }
            break;
        }
      }
      {
        MaybeArgSize_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeArgSize_27, 0) = ((MR_Box) (Var_47));
      }
      func_9 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_measure_with_params_49, 0)), 5))));
      SoFar1_33 = func_9(((MR_Box) (TypeClassInfo_for_measure_with_params_49)), HeadVar__6_6, ArgSize_32, Params_4);
    }
    mercury__private_builtin__superclass_from_typeclass_info_3_p_0(TypeClassInfo_for_measure_with_params_49, (MR_Integer) 1, &TypeClassInfo_for_measure_56);
    func_10 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_measure_56, 0)), 7))));
    conv11_Var_48 = func_10(((MR_Box) (TypeClassInfo_for_measure_56)), SoFar1_33, Limit_5);
    Var_48 = ((MR_Word) (conv11_Var_48));
    succeeded = (Var_48 == (MR_Integer) 2);
    if (succeeded)
      Exact2_43 = (MR_Integer) 0;
    else
      Exact2_43 = Exact1_39;
    mdb__sized_pretty__annotate_args_with_size_10_p_0(TypeClassInfo_for_measure_with_params_49, BrowserDb_1, Args_19, MaybeInitArgLimit_3, Params_4, Limit_5, SoFar1_33, SoFar_7, Exact2_43, Exact_9, &MaybeArgSizes_28);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__10_10 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (MaybeArgSize_27));
      MR_hl_field(1, base, 1) = ((MR_Box) (MaybeArgSizes_28));
    }
  }
}

static MR_bool MR_CALL 
mdb__sized_pretty____Unify____char_count_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdb__sized_pretty____Unify____char_count_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdb__sized_pretty____Compare____char_count_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__sized_pretty____Compare____char_count_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdb__sized_pretty____Unify____functor_count_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdb__sized_pretty____Unify____functor_count_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdb__sized_pretty____Compare____functor_count_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__sized_pretty____Compare____functor_count_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdb__sized_pretty____Unify____maybe_deconstructed_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mdb__sized_pretty____Unify____maybe_deconstructed_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mdb__sized_pretty____Compare____maybe_deconstructed_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__sized_pretty____Compare____maybe_deconstructed_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdb__sized_pretty____Unify____measure_params_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdb__sized_pretty____Unify____measure_params_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdb__sized_pretty____Compare____measure_params_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__sized_pretty____Compare____measure_params_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdb__sized_pretty____Unify____no_measure_params_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdb__sized_pretty____Unify____no_measure_params_0_0();
  return succeeded;
}

static void MR_CALL 
mdb__sized_pretty____Compare____no_measure_params_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__sized_pretty____Compare____no_measure_params_0_0(&conv0_HeadVar__1_1);
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdb__sized_pretty____Unify____size_annotated_args_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mdb__sized_pretty____Unify____size_annotated_args_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mdb__sized_pretty____Compare____size_annotated_args_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__sized_pretty____Compare____size_annotated_args_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdb__sized_pretty____Unify____size_annotated_term_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mdb__sized_pretty____Unify____size_annotated_term_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mdb__sized_pretty____Compare____size_annotated_term_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__sized_pretty____Compare____size_annotated_term_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdb__sized_pretty____Unify____size_count_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdb__sized_pretty____Unify____size_count_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdb__sized_pretty____Compare____size_count_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__sized_pretty____Compare____size_count_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__size_count__arity0__mdb__sized_pretty__measure_params__arity0______mdb__sized_pretty__add_measures_3_3_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Box wrapper_arg_4;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__4_4;

  conv0_HeadVar__4_4 = mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__size_count__arity0__mdb__sized_pretty__measure_params__arity0______mdb__sized_pretty__add_measures_3_3_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
  return wrapper_arg_4;
}

static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__size_count__arity0__mdb__sized_pretty__measure_params__arity0______mdb__sized_pretty__subtract_measures_3_3_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Box wrapper_arg_4;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__4_4;

  conv0_HeadVar__4_4 = mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__size_count__arity0__mdb__sized_pretty__measure_params__arity0______mdb__sized_pretty__subtract_measures_3_3_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
  return wrapper_arg_4;
}

static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__size_count__arity0__mdb__sized_pretty__measure_params__arity0______mdb__sized_pretty__maximum_functors_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Integer conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__size_count__arity0__mdb__sized_pretty__measure_params__arity0______mdb__sized_pretty__maximum_functors_2_2_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static void MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__size_count__arity0__mdb__sized_pretty__measure_params__arity0______mdb__sized_pretty__measured_split_10_10_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box * wrapper_arg_8,
  MR_Box * wrapper_arg_9,
  MR_Box * wrapper_arg_10)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_HeadVar__7_7;
  MR_Word conv2_HeadVar__8_8;
  MR_Word conv1_HeadVar__9_9;
  MR_Word conv0_HeadVar__10_10;

  mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__size_count__arity0__mdb__sized_pretty__measure_params__arity0______mdb__sized_pretty__measured_split_10_10_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)), ((MR_Integer) (wrapper_arg_5)), ((MR_Word) (wrapper_arg_6)), &conv3_HeadVar__7_7, &conv2_HeadVar__8_8, &conv1_HeadVar__9_9, &conv0_HeadVar__10_10);
  *wrapper_arg_7 = ((MR_Box) (conv3_HeadVar__7_7));
  *wrapper_arg_8 = ((MR_Box) (conv2_HeadVar__8_8));
  *wrapper_arg_9 = ((MR_Box) (conv1_HeadVar__9_9));
  *wrapper_arg_10 = ((MR_Box) (conv0_HeadVar__10_10));
}

static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__char_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__add_measures_3_3_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Box wrapper_arg_4;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__4_4;

  conv0_HeadVar__4_4 = mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__char_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__add_measures_3_3_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
  return wrapper_arg_4;
}

static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__char_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__subtract_measures_3_3_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Box wrapper_arg_4;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__4_4;

  conv0_HeadVar__4_4 = mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__char_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__subtract_measures_3_3_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
  return wrapper_arg_4;
}

static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__char_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__maximum_functors_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Integer conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__char_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__maximum_functors_2_2_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static void MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__char_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__measured_split_10_10_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box * wrapper_arg_8,
  MR_Box * wrapper_arg_9,
  MR_Box * wrapper_arg_10)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__7_7;
  MR_Word conv1_HeadVar__8_8;
  MR_Word conv0_HeadVar__9_9;

  mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__char_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__measured_split_10_10_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_4)), ((MR_Integer) (wrapper_arg_5)), ((MR_Word) (wrapper_arg_6)), &conv2_HeadVar__7_7, &conv1_HeadVar__8_8, &conv0_HeadVar__9_9);
  *wrapper_arg_7 = ((MR_Box) (conv2_HeadVar__7_7));
  *wrapper_arg_8 = ((MR_Box) (conv1_HeadVar__8_8));
  *wrapper_arg_9 = ((MR_Box) (conv0_HeadVar__9_9));
}

static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__functor_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__add_measures_3_3_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Box wrapper_arg_4;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__4_4;

  conv0_HeadVar__4_4 = mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__functor_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__add_measures_3_3_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
  return wrapper_arg_4;
}

static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__functor_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__subtract_measures_3_3_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Box wrapper_arg_4;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__4_4;

  conv0_HeadVar__4_4 = mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__functor_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__subtract_measures_3_3_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
  return wrapper_arg_4;
}

static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__functor_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__maximum_functors_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Integer conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__functor_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__maximum_functors_2_2_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static void MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__functor_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__measured_split_10_10_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box * wrapper_arg_8,
  MR_Box * wrapper_arg_9,
  MR_Box * wrapper_arg_10)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__7_7;
  MR_Word conv1_HeadVar__8_8;
  MR_Word conv0_HeadVar__9_9;

  mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__functor_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__measured_split_10_10_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_4)), ((MR_Integer) (wrapper_arg_5)), ((MR_Word) (wrapper_arg_6)), &conv2_HeadVar__7_7, &conv1_HeadVar__8_8, &conv0_HeadVar__9_9);
  *wrapper_arg_7 = ((MR_Box) (conv2_HeadVar__7_7));
  *wrapper_arg_8 = ((MR_Box) (conv1_HeadVar__8_8));
  *wrapper_arg_9 = ((MR_Box) (conv0_HeadVar__9_9));
}

static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__size_count__arity0______mdb__sized_pretty__max_measure_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__size_count__arity0______mdb__sized_pretty__max_measure_2_2_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__size_count__arity0______mdb__sized_pretty__zero_measure_0_0_f_0_10001(
  MR_Box closure_arg)
{
  MR_Box wrapper_arg_1;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__1_1;

  conv0_HeadVar__1_1 = mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__size_count__arity0______mdb__sized_pretty__zero_measure_0_0_f_0();
  wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  return wrapper_arg_1;
}

static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__size_count__arity0______mdb__sized_pretty__compare_measures_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__size_count__arity0______mdb__sized_pretty__compare_measures_2_2_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__char_count__arity0______mdb__sized_pretty__max_measure_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__char_count__arity0______mdb__sized_pretty__max_measure_2_2_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__char_count__arity0______mdb__sized_pretty__zero_measure_0_0_f_0_10001(
  MR_Box closure_arg)
{
  MR_Box wrapper_arg_1;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__1_1;

  conv0_HeadVar__1_1 = mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__char_count__arity0______mdb__sized_pretty__zero_measure_0_0_f_0();
  wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  return wrapper_arg_1;
}

static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__char_count__arity0______mdb__sized_pretty__compare_measures_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__char_count__arity0______mdb__sized_pretty__compare_measures_2_2_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__functor_count__arity0______mdb__sized_pretty__max_measure_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__functor_count__arity0______mdb__sized_pretty__max_measure_2_2_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__functor_count__arity0______mdb__sized_pretty__zero_measure_0_0_f_0_10001(
  MR_Box closure_arg)
{
  MR_Box wrapper_arg_1;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__1_1;

  conv0_HeadVar__1_1 = mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__functor_count__arity0______mdb__sized_pretty__zero_measure_0_0_f_0();
  wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  return wrapper_arg_1;
}

static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__functor_count__arity0______mdb__sized_pretty__compare_measures_2_2_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__functor_count__arity0______mdb__sized_pretty__compare_measures_2_2_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

void mercury__mdb__sized_pretty__init(void)
{
}

void mercury__mdb__sized_pretty__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&mdb__sized_pretty__mdb__sized_pretty__type_ctor_info_char_count_0);
  MR_register_type_ctor_info(&mdb__sized_pretty__mdb__sized_pretty__type_ctor_info_functor_count_0);
  MR_register_type_ctor_info(&mdb__sized_pretty__mdb__sized_pretty__type_ctor_info_maybe_deconstructed_1);
  MR_register_type_ctor_info(&mdb__sized_pretty__mdb__sized_pretty__type_ctor_info_measure_params_0);
  MR_register_type_ctor_info(&mdb__sized_pretty__mdb__sized_pretty__type_ctor_info_no_measure_params_0);
  MR_register_type_ctor_info(&mdb__sized_pretty__mdb__sized_pretty__type_ctor_info_size_annotated_args_1);
  MR_register_type_ctor_info(&mdb__sized_pretty__mdb__sized_pretty__type_ctor_info_size_annotated_term_1);
  MR_register_type_ctor_info(&mdb__sized_pretty__mdb__sized_pretty__type_ctor_info_size_count_0);
}

void mercury__mdb__sized_pretty__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__mdb__sized_pretty__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module mdb.sized_pretty.
