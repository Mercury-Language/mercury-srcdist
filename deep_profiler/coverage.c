/*
** Automatically generated from `coverage.m'
** by the Mercury compiler,
** version rotd-2026-09-06
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


// :- module coverage.
// :- implementation.

/*
INIT mercury__coverage__init
ENDINIT
*/

#include "coverage.mih"


#include "analysis_utils.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "float.mih"
#include "int.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "measurement_units.mih"
#include "measurements.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "profile.mih"
#include "query.mih"
#include "report.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "var_use_analysis.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_PseudoTypeInfo_Struct1 coverage__mdbcomp__goal_path__pti_goal_attr_array_1__plain_coverage__type_ctor_info_coverage_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 coverage__mdbcomp__program_representation__pti_case_rep_1__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 coverage__maybe__pti_maybe_1__plain_builtin__type_ctor_info_int_0;

static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_coverage_after_0_0;

static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_coverage_after_0_1;

static const MR_PseudoTypeInfo coverage__coverage__field_types_coverage_after_0_2[1];

static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_coverage_after_0_2;

static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_coverage_after_0_0[2];

static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_coverage_after_0_1[1];

static const MR_DuPtagLayout coverage__coverage__du_ptag_ordered_coverage_after_0[2];

static const MR_DuFunctorDescPtr coverage__coverage__du_name_ordered_coverage_after_0[3];

static const MR_Integer coverage__coverage__functor_number_map_coverage_after_0[3];

static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_coverage_before_0_0;

static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_coverage_before_0_1;

static const MR_PseudoTypeInfo coverage__coverage__field_types_coverage_before_0_2[1];

static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_coverage_before_0_2;

static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_coverage_before_0_0[2];

static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_coverage_before_0_1[1];

static const MR_DuPtagLayout coverage__coverage__du_ptag_ordered_coverage_before_0[2];

static const MR_DuFunctorDescPtr coverage__coverage__du_name_ordered_coverage_before_0[3];

static const MR_Integer coverage__coverage__functor_number_map_coverage_before_0[3];

static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_coverage_info_0_0;

static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_coverage_info_0_1;

static const MR_PseudoTypeInfo coverage__coverage__field_types_coverage_info_0_2[1];

static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_coverage_info_0_2;

static const MR_PseudoTypeInfo coverage__coverage__field_types_coverage_info_0_3[2];

static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_coverage_info_0_3;

static const MR_PseudoTypeInfo coverage__coverage__field_types_coverage_info_0_4[1];

static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_coverage_info_0_4;

static const MR_PseudoTypeInfo coverage__coverage__field_types_coverage_info_0_5[1];

static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_coverage_info_0_5;

static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_coverage_info_0_0[2];

static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_coverage_info_0_1[1];

static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_coverage_info_0_2[1];

static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_coverage_info_0_3[2];

static const MR_DuPtagLayout coverage__coverage__du_ptag_ordered_coverage_info_0[4];

static const MR_DuFunctorDescPtr coverage__coverage__du_name_ordered_coverage_info_0[6];

static const MR_Integer coverage__coverage__functor_number_map_coverage_info_0[6];

static const MR_PseudoTypeInfo coverage__coverage__field_types_coverage_point_0_0[3];

static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_coverage_point_0_0;

static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_coverage_point_0_0[1];

static const MR_DuPtagLayout coverage__coverage__du_ptag_ordered_coverage_point_0[1];

static const MR_DuFunctorDescPtr coverage__coverage__du_name_ordered_coverage_point_0[1];

static const MR_Integer coverage__coverage__functor_number_map_coverage_point_0[1];

static const MR_FA_PseudoTypeInfo_Struct1 coverage__analysis_utils__pti_cost_and_callees_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct2 coverage__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__pseudo_analysis_utils__pti_cost_and_callees_1__pseudo_1;

static const MR_FA_TypeInfo_Struct2 coverage__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0coverage__type_ctor_info_coverage_point_0;

static const MR_FA_TypeInfo_Struct2 coverage__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0;

static const MR_PseudoTypeInfo coverage__coverage__field_types_coverage_reference_info_1_0[5];

static const MR_ConstString coverage__coverage__field_names_coverage_reference_info_1_0[5];

static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_coverage_reference_info_1_0;

static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_coverage_reference_info_1_0[1];

static const MR_DuPtagLayout coverage__coverage__du_ptag_ordered_coverage_reference_info_1[1];

static const MR_DuFunctorDescPtr coverage__coverage__du_name_ordered_coverage_reference_info_1[1];

static const MR_Integer coverage__coverage__functor_number_map_coverage_reference_info_1[1];

static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_sum_coverage_after_0_0;

static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_sum_coverage_after_0_1;

static const MR_PseudoTypeInfo coverage__coverage__field_types_sum_coverage_after_0_2[1];

static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_sum_coverage_after_0_2;

static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_sum_coverage_after_0_0[2];

static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_sum_coverage_after_0_1[1];

static const MR_DuPtagLayout coverage__coverage__du_ptag_ordered_sum_coverage_after_0[2];

static const MR_DuFunctorDescPtr coverage__coverage__du_name_ordered_sum_coverage_after_0[3];

static const MR_Integer coverage__coverage__functor_number_map_sum_coverage_after_0[3];

static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_sum_coverage_before_0_0;

static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_sum_coverage_before_0_1;

static const MR_PseudoTypeInfo coverage__coverage__field_types_sum_coverage_before_0_2[1];

static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_sum_coverage_before_0_2;

static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_sum_coverage_before_0_0[2];

static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_sum_coverage_before_0_1[1];

static const MR_DuPtagLayout coverage__coverage__du_ptag_ordered_sum_coverage_before_0[2];

static const MR_DuFunctorDescPtr coverage__coverage__du_name_ordered_sum_coverage_before_0[3];

static const MR_Integer coverage__coverage__functor_number_map_sum_coverage_before_0[3];

static MR_bool MR_CALL 
coverage__IntroducedFrom__pred__before_count_from_either_source__1221__1_2_p_0(
  MR_Integer HeadVar__1_17,
  MR_Integer BeforeCountB_18);

static MR_bool MR_CALL 
coverage__IntroducedFrom__pred__before_count_from_either_source__1210__1_2_p_0(
  MR_Integer BeforeCountA_8,
  MR_Integer HeadVar__2_14);

static MR_bool MR_CALL 
coverage__IntroducedFrom__pred__before_count_from_either_source__1205__1_2_p_0(
  MR_Integer BeforeCountA_8,
  MR_Integer BeforeCountB_9);

static MR_bool MR_CALL 
coverage__IntroducedFrom__pred__after_count_from_either_source__1161__1_2_p_0(
  MR_Integer HeadVar__1_17,
  MR_Integer AfterCountB_18);

static MR_bool MR_CALL 
coverage__IntroducedFrom__pred__after_count_from_either_source__1150__1_2_p_0(
  MR_Integer AfterCountA_8,
  MR_Integer HeadVar__2_14);

static MR_bool MR_CALL 
coverage__IntroducedFrom__pred__after_count_from_either_source__1145__1_2_p_0(
  MR_Integer AfterCountA_8,
  MR_Integer AfterCountB_9);

static MR_bool MR_CALL 
coverage__IntroducedFrom__pred__goal_annotate_coverage__335__1_2_p_0(
  MR_Word Before_9,
  MR_Word HeadVar__2_91);

static MR_bool MR_CALL 
coverage__IntroducedFrom__pred__goal_annotate_with_coverage__255__1_2_p_0(
  MR_Word After_25,
  MR_Word HeadVar__2_28);

static void MR_CALL 
coverage____Compare____sum_coverage_before_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
coverage____Unify____sum_coverage_before_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
coverage____Compare____sum_coverage_after_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
coverage____Unify____sum_coverage_after_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
coverage____Compare____coverage_reference_info_1_0(
  MR_Word TypeInfo_for_Callee_20,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
coverage____Unify____coverage_reference_info_1_0(
  MR_Word TypeInfo_for_Callee_15,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
coverage____Compare____coverage_before_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
coverage____Unify____coverage_before_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
coverage____Compare____coverage_after_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
coverage____Unify____coverage_after_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
coverage__before_count_from_either_source_sum_3_p_0(
  MR_Word BeforeA0_4,
  MR_Word BeforeB_5,
  MR_Word * Before_6);

static void MR_CALL 
coverage__before_count_sum_before_count_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static MR_bool MR_CALL 
coverage__before_count_from_either_source_3_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
coverage__before_count_from_either_source_3_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
coverage__before_count_from_either_source_3_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
coverage__before_count_from_either_source_3_p_0(
  MR_Word BeforeA_4,
  MR_Word BeforeB_5,
  MR_Word * Before_6);

static void MR_CALL 
coverage__sum_switch_case_coverage_4_p_0(
  MR_Word Array_5,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Acc_0_15,
  MR_Word * STATE_VARIABLE_Acc_16);

static MR_bool MR_CALL 
coverage__goal_annotate_with_coverage_9_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
coverage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_105_115_106_95_97_110_110_111_116_97_116_101_95_99_111_118_101_114_97_103_101_95_95_91_52_93_95_48_8_p_0(
  MR_Word TypeInfo_for_Callee_44,
  MR_Word HeadVar__1_1,
  MR_Word Info_2,
  MR_Word Before0_4,
  MR_Word STATE_VARIABLE_SumAfter_0_5,
  MR_Word * STATE_VARIABLE_SumAfter_6,
  MR_Word STATE_VARIABLE_Array_0_7,
  MR_Word * STATE_VARIABLE_Array_8);

static void MR_CALL 
coverage__switch_annotate_coverage_2_10_p_0(
  MR_Word TypeInfo_for_Callee_57,
  MR_Word HeadVar__1_1,
  MR_Word Info_2,
  MR_Word CanFail_3,
  MR_Word SwitchBefore_4,
  MR_Word STATE_VARIABLE_SumBefore_0_5,
  MR_Word * STATE_VARIABLE_SumBefore_6,
  MR_Word STATE_VARIABLE_SumAfter_0_7,
  MR_Word * STATE_VARIABLE_SumAfter_8,
  MR_Word STATE_VARIABLE_Array_0_9,
  MR_Word * STATE_VARIABLE_Array_10);

static void MR_CALL 
coverage__conj_annotate_coverage_6_p_0(
  MR_Word TypeInfo_for_Callee_24,
  MR_Word HeadVar__1_1,
  MR_Word Info_2,
  MR_Word Before_3,
  MR_Word * After_4,
  MR_Word STATE_VARIABLE_Array_0_5,
  MR_Word * STATE_VARIABLE_Array_6);

static void MR_CALL 
coverage__scope_annotate_coverage_7_p_0(
  MR_Word TypeInfo_for_Callee_17,
  MR_Word Goal_8,
  MR_Word Info_9,
  MR_Word MaybeCut_10,
  MR_Word Before_11,
  MR_Word * After_12,
  MR_Word STATE_VARIABLE_Array_0_15,
  MR_Word * STATE_VARIABLE_Array_16);

static void MR_CALL 
coverage__negation_annotate_coverage_6_p_0(
  MR_Word TypeInfo_for_Callee_29,
  MR_Word Goal_7,
  MR_Word Info_8,
  MR_Word Before_9,
  MR_Word * After_10,
  MR_Word STATE_VARIABLE_Array_0_15,
  MR_Word * STATE_VARIABLE_Array_16);

static void MR_CALL 
coverage__ite_annotate_coverage_9_p_0(
  MR_Word TypeInfo_for_Callee_127,
  MR_Word Cond_10,
  MR_Word Then_11,
  MR_Word Else_12,
  MR_Word Info_13,
  MR_Word RevGoalPath_14,
  MR_Word Before_15,
  MR_Word * After_16,
  MR_Word STATE_VARIABLE_Array_0_36,
  MR_Word * STATE_VARIABLE_Array_37);

static void MR_CALL 
coverage__switch_annotate_coverage_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
coverage__switch_annotate_coverage_7_p_0(
  MR_Word TypeInfo_for_Callee_50,
  MR_Word Cases_8,
  MR_Word Info_9,
  MR_Word CanFail_10,
  MR_Word Before_11,
  MR_Word * After_12,
  MR_Word STATE_VARIABLE_Array_0_19,
  MR_Word * STATE_VARIABLE_Array_20);

static MR_bool MR_CALL 
coverage__goal_annotate_coverage_6_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
coverage__goal_annotate_coverage_6_p_0(
  MR_Word TypeInfo_for_Callee_163,
  MR_Word Goal_7,
  MR_Word Info_8,
  MR_Word Before_9,
  MR_Word * After_10,
  MR_Word STATE_VARIABLE_Array_0_76,
  MR_Word * STATE_VARIABLE_Array_77);

static MR_bool MR_CALL 
coverage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_99_111_118_101_114_97_103_101_95_99_111_109_112_108_101_116_101_95_95_91_49_44_32_51_93_95_48_2_p_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
coverage__after_count_sum_after_count_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static MR_bool MR_CALL 
coverage__after_count_from_either_source_3_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
coverage__after_count_from_either_source_3_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
coverage__after_count_from_either_source_3_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
coverage__after_count_from_either_source_3_p_0(
  MR_Word AfterA_4,
  MR_Word AfterB_5,
  MR_Word * After_6);

static void MR_CALL 
coverage__propagate_detism_coverage_3_p_0(
  MR_Word Detism_4,
  MR_Word Before_5,
  MR_Word * After_6);

static MR_bool MR_CALL 
coverage__check_coverage_regarding_detism_2_p_0(
  MR_Word Coverage_3,
  MR_Word Detism_4);

static MR_bool MR_CALL 
coverage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_116_101_95_99_111_118_101_114_97_103_101_95_95_91_55_93_95_48_9_p_0(
  MR_Word Before_10,
  MR_Word After_11,
  MR_Word BeforeCond_12,
  MR_Word AfterCond_13,
  MR_Word BeforeThen_14,
  MR_Word AfterThen_15,
  MR_Word AfterElse_17,
  MR_Word CondDetism_18);

static void MR_CALL 
coverage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_115_116_97_114_116_95_99_111_118_101_114_97_103_101_95_95_91_49_93_95_48_3_p_0(
  MR_Word Info_4,
  MR_Word RevGoalPath_5,
  MR_Word * Before_6);

static MR_Word MR_CALL 
coverage__before_coverage_1_f_0(
  MR_Integer Count_3);

static MR_Word MR_CALL 
coverage__after_coverage_1_f_0(
  MR_Integer Count_3);

static void MR_CALL 
coverage__after_to_before_coverage_2_p_0(
  MR_Word After_3,
  MR_Word * Before_4);

static MR_Word MR_CALL 
coverage__construct_before_after_coverage_2_f_0(
  MR_Word Before_4,
  MR_Word After_5);

static void MR_CALL 
coverage__coverage_point_arrays_to_list_2_6_p_0(
  MR_Integer Num_7,
  MR_Integer Max_8,
  MR_ArrayPtr StaticArray_9,
  MR_ArrayPtr DynamicArray_10,
  MR_Word STATE_VARIABLE_CoveragePoints_0_16,
  MR_Word * STATE_VARIABLE_CoveragePoints_17);

static MR_bool MR_CALL 
coverage____Unify____coverage_after_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
coverage____Compare____coverage_after_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
coverage____Unify____coverage_before_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
coverage____Compare____coverage_before_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
coverage____Unify____coverage_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
coverage____Compare____coverage_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
coverage____Unify____coverage_point_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
coverage____Compare____coverage_point_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
coverage____Unify____coverage_reference_info_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
coverage____Compare____coverage_reference_info_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
coverage____Unify____sum_coverage_after_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
coverage____Compare____sum_coverage_after_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
coverage____Unify____sum_coverage_before_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
coverage____Compare____sum_coverage_before_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box coverage_scalar_common_1[5][2];

static /* final */ const MR_Box coverage_scalar_common_2[2][3];

static /* final */ const MR_Box coverage_scalar_common_3[1][1];

static /* final */ const MR_Box coverage_scalar_common_4[3][5];

static /* final */ const MR_Box coverage_scalar_common_5[1][7];




static /* final */ const MR_Box coverage_scalar_common_1[5][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_case_rep_1)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&coverage_scalar_common_1[0]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box coverage_scalar_common_2[2][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0)),
    ((MR_Box) (&coverage__coverage__type_ctor_info_coverage_point_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0))
  },
};

static /* final */ const MR_Box coverage_scalar_common_3[1][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Integer) 0)) },
};

static /* final */ const MR_Box coverage_scalar_common_4[3][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&coverage__coverage__type_ctor_info_coverage_before_0)),
    ((MR_Box) (&coverage__coverage__type_ctor_info_coverage_before_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&coverage__coverage__type_ctor_info_coverage_after_0)),
    ((MR_Box) (&coverage__coverage__type_ctor_info_coverage_after_0))
  },
};

static /* final */ const MR_Box coverage_scalar_common_5[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&coverage__mdbcomp__goal_path__pti_goal_attr_array_1__plain_coverage__type_ctor_info_coverage_info_0)),
    ((MR_Box) (&coverage__mdbcomp__program_representation__pti_case_rep_1__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&coverage__maybe__pti_maybe_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&coverage__maybe__pti_maybe_1__plain_builtin__type_ctor_info_int_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"


static const MR_FA_PseudoTypeInfo_Struct1 coverage__mdbcomp__goal_path__pti_goal_attr_array_1__plain_coverage__type_ctor_info_coverage_info_0 = {
  &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_attr_array_1,
  { (MR_PseudoTypeInfo) (&coverage__coverage__type_ctor_info_coverage_info_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 coverage__mdbcomp__program_representation__pti_case_rep_1__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0 = {
  &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_case_rep_1,
  { (MR_PseudoTypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 coverage__maybe__pti_maybe_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) }
};

static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_coverage_after_0_0 = {
  (MR_String) "after_unknown",
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

static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_coverage_after_0_1 = {
  (MR_String) "after_zero",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo coverage__coverage__field_types_coverage_after_0_2[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) };

static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_coverage_after_0_2 = {
  (MR_String) "after_known",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(2),
  coverage__coverage__field_types_coverage_after_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_coverage_after_0_0[2] = {
  &coverage__coverage__du_functor_desc_coverage_after_0_0,
  &coverage__coverage__du_functor_desc_coverage_after_0_1
};

static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_coverage_after_0_1[1] = { &coverage__coverage__du_functor_desc_coverage_after_0_2 };

static const MR_DuPtagLayout coverage__coverage__du_ptag_ordered_coverage_after_0[2] = {
  {
    UINT32_C(2),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    coverage__coverage__du_stag_ordered_coverage_after_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    coverage__coverage__du_stag_ordered_coverage_after_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr coverage__coverage__du_name_ordered_coverage_after_0[3] = {
  &coverage__coverage__du_functor_desc_coverage_after_0_2,
  &coverage__coverage__du_functor_desc_coverage_after_0_0,
  &coverage__coverage__du_functor_desc_coverage_after_0_1
};

static const MR_Integer coverage__coverage__functor_number_map_coverage_after_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct coverage__coverage__type_ctor_info_coverage_after_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (coverage____Unify____coverage_after_0_0_10001)),
  ((MR_Box) (coverage____Compare____coverage_after_0_0_10001)),
  (MR_String) "coverage",
  (MR_String) "coverage_after",
  { coverage__coverage__du_name_ordered_coverage_after_0 },
  { coverage__coverage__du_ptag_ordered_coverage_after_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  coverage__coverage__functor_number_map_coverage_after_0,

};

static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_coverage_before_0_0 = {
  (MR_String) "before_unknown",
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

static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_coverage_before_0_1 = {
  (MR_String) "before_zero",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo coverage__coverage__field_types_coverage_before_0_2[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) };

static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_coverage_before_0_2 = {
  (MR_String) "before_known",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(2),
  coverage__coverage__field_types_coverage_before_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_coverage_before_0_0[2] = {
  &coverage__coverage__du_functor_desc_coverage_before_0_0,
  &coverage__coverage__du_functor_desc_coverage_before_0_1
};

static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_coverage_before_0_1[1] = { &coverage__coverage__du_functor_desc_coverage_before_0_2 };

static const MR_DuPtagLayout coverage__coverage__du_ptag_ordered_coverage_before_0[2] = {
  {
    UINT32_C(2),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    coverage__coverage__du_stag_ordered_coverage_before_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    coverage__coverage__du_stag_ordered_coverage_before_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr coverage__coverage__du_name_ordered_coverage_before_0[3] = {
  &coverage__coverage__du_functor_desc_coverage_before_0_2,
  &coverage__coverage__du_functor_desc_coverage_before_0_0,
  &coverage__coverage__du_functor_desc_coverage_before_0_1
};

static const MR_Integer coverage__coverage__functor_number_map_coverage_before_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct coverage__coverage__type_ctor_info_coverage_before_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (coverage____Unify____coverage_before_0_0_10001)),
  ((MR_Box) (coverage____Compare____coverage_before_0_0_10001)),
  (MR_String) "coverage",
  (MR_String) "coverage_before",
  { coverage__coverage__du_name_ordered_coverage_before_0 },
  { coverage__coverage__du_ptag_ordered_coverage_before_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  coverage__coverage__functor_number_map_coverage_before_0,

};

static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_coverage_info_0_0 = {
  (MR_String) "coverage_unknown",
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

static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_coverage_info_0_1 = {
  (MR_String) "coverage_known_zero",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo coverage__coverage__field_types_coverage_info_0_2[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) };

static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_coverage_info_0_2 = {
  (MR_String) "coverage_known_same",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(2),
  coverage__coverage__field_types_coverage_info_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo coverage__coverage__field_types_coverage_info_0_3[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_coverage_info_0_3 = {
  (MR_String) "coverage_known",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(3),
  coverage__coverage__field_types_coverage_info_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo coverage__coverage__field_types_coverage_info_0_4[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) };

static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_coverage_info_0_4 = {
  (MR_String) "coverage_known_before",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(4),
  coverage__coverage__field_types_coverage_info_0_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo coverage__coverage__field_types_coverage_info_0_5[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) };

static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_coverage_info_0_5 = {
  (MR_String) "coverage_known_after",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(5),
  coverage__coverage__field_types_coverage_info_0_5,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_coverage_info_0_0[2] = {
  &coverage__coverage__du_functor_desc_coverage_info_0_0,
  &coverage__coverage__du_functor_desc_coverage_info_0_1
};

static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_coverage_info_0_1[1] = { &coverage__coverage__du_functor_desc_coverage_info_0_2 };

static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_coverage_info_0_2[1] = { &coverage__coverage__du_functor_desc_coverage_info_0_3 };

static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_coverage_info_0_3[2] = {
  &coverage__coverage__du_functor_desc_coverage_info_0_4,
  &coverage__coverage__du_functor_desc_coverage_info_0_5
};

static const MR_DuPtagLayout coverage__coverage__du_ptag_ordered_coverage_info_0[4] = {
  {
    UINT32_C(2),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    coverage__coverage__du_stag_ordered_coverage_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    coverage__coverage__du_stag_ordered_coverage_info_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    coverage__coverage__du_stag_ordered_coverage_info_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(2),
    MR_SECTAG_REMOTE_FULL_WORD,
    coverage__coverage__du_stag_ordered_coverage_info_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr coverage__coverage__du_name_ordered_coverage_info_0[6] = {
  &coverage__coverage__du_functor_desc_coverage_info_0_3,
  &coverage__coverage__du_functor_desc_coverage_info_0_5,
  &coverage__coverage__du_functor_desc_coverage_info_0_4,
  &coverage__coverage__du_functor_desc_coverage_info_0_2,
  &coverage__coverage__du_functor_desc_coverage_info_0_1,
  &coverage__coverage__du_functor_desc_coverage_info_0_0
};

static const MR_Integer coverage__coverage__functor_number_map_coverage_info_0[6] = {
  (MR_Integer) 5,
  (MR_Integer) 4,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct coverage__coverage__type_ctor_info_coverage_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (coverage____Unify____coverage_info_0_0_10001)),
  ((MR_Box) (coverage____Compare____coverage_info_0_0_10001)),
  (MR_String) "coverage",
  (MR_String) "coverage_info",
  { coverage__coverage__du_name_ordered_coverage_info_0 },
  { coverage__coverage__du_ptag_ordered_coverage_info_0 },
  (MR_Integer) 6,
  UINT16_C(12),
  coverage__coverage__functor_number_map_coverage_info_0,

};

static const MR_PseudoTypeInfo coverage__coverage__field_types_coverage_point_0_0[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0),
  (MR_PseudoTypeInfo) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_cp_type_0)
};

static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_coverage_point_0_0 = {
  (MR_String) "coverage_point",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  coverage__coverage__field_types_coverage_point_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_coverage_point_0_0[1] = { &coverage__coverage__du_functor_desc_coverage_point_0_0 };

static const MR_DuPtagLayout coverage__coverage__du_ptag_ordered_coverage_point_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    coverage__coverage__du_stag_ordered_coverage_point_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr coverage__coverage__du_name_ordered_coverage_point_0[1] = { &coverage__coverage__du_functor_desc_coverage_point_0_0 };

static const MR_Integer coverage__coverage__functor_number_map_coverage_point_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct coverage__coverage__type_ctor_info_coverage_point_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (coverage____Unify____coverage_point_0_0_10001)),
  ((MR_Box) (coverage____Compare____coverage_point_0_0_10001)),
  (MR_String) "coverage",
  (MR_String) "coverage_point",
  { coverage__coverage__du_name_ordered_coverage_point_0 },
  { coverage__coverage__du_ptag_ordered_coverage_point_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  coverage__coverage__functor_number_map_coverage_point_0,

};

static const MR_FA_PseudoTypeInfo_Struct1 coverage__analysis_utils__pti_cost_and_callees_1__pseudo_1 = {
  &analysis_utils__analysis_utils__type_ctor_info_cost_and_callees_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

static const MR_FA_PseudoTypeInfo_Struct2 coverage__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__pseudo_analysis_utils__pti_cost_and_callees_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0),
    (MR_PseudoTypeInfo) (&coverage__analysis_utils__pti_cost_and_callees_1__pseudo_1)
  }
};

static const MR_FA_TypeInfo_Struct2 coverage__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0coverage__type_ctor_info_coverage_point_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0),
    (MR_TypeInfo) (&coverage__coverage__type_ctor_info_coverage_point_0)
  }
};

static const MR_FA_TypeInfo_Struct2 coverage__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0),
    (MR_TypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0)
  }
};

static const MR_PseudoTypeInfo coverage__coverage__field_types_coverage_reference_info_1_0[5] = {
  (MR_PseudoTypeInfo) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0),
  (MR_PseudoTypeInfo) (&coverage__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__pseudo_analysis_utils__pti_cost_and_callees_1__pseudo_1),
  (MR_PseudoTypeInfo) (&coverage__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0coverage__type_ctor_info_coverage_point_0),
  (MR_PseudoTypeInfo) (&coverage__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0coverage__type_ctor_info_coverage_point_0),
  (MR_PseudoTypeInfo) (&coverage__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0)
};

static const MR_ConstString coverage__coverage__field_names_coverage_reference_info_1_0[5] = {
  (MR_String) "cri_proc",
  (MR_String) "cri_call_sites",
  (MR_String) "cri_solns_coverage_points",
  (MR_String) "cri_branch_coverage_points",
  (MR_String) "cri_goal_path_map"
};

static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_coverage_reference_info_1_0 = {
  (MR_String) "coverage_reference_info",
  INT16_C(5),
  UINT16_C(2),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  coverage__coverage__field_types_coverage_reference_info_1_0,
  coverage__coverage__field_names_coverage_reference_info_1_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_coverage_reference_info_1_0[1] = { &coverage__coverage__du_functor_desc_coverage_reference_info_1_0 };

static const MR_DuPtagLayout coverage__coverage__du_ptag_ordered_coverage_reference_info_1[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    coverage__coverage__du_stag_ordered_coverage_reference_info_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr coverage__coverage__du_name_ordered_coverage_reference_info_1[1] = { &coverage__coverage__du_functor_desc_coverage_reference_info_1_0 };

static const MR_Integer coverage__coverage__functor_number_map_coverage_reference_info_1[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct coverage__coverage__type_ctor_info_coverage_reference_info_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (coverage____Unify____coverage_reference_info_1_0_10001)),
  ((MR_Box) (coverage____Compare____coverage_reference_info_1_0_10001)),
  (MR_String) "coverage",
  (MR_String) "coverage_reference_info",
  { coverage__coverage__du_name_ordered_coverage_reference_info_1 },
  { coverage__coverage__du_ptag_ordered_coverage_reference_info_1 },
  (MR_Integer) 1,
  UINT16_C(12),
  coverage__coverage__functor_number_map_coverage_reference_info_1,

};

static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_sum_coverage_after_0_0 = {
  (MR_String) "sum_after_unknown",
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

static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_sum_coverage_after_0_1 = {
  (MR_String) "sum_after_zero",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo coverage__coverage__field_types_sum_coverage_after_0_2[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) };

static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_sum_coverage_after_0_2 = {
  (MR_String) "sum_after_known",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(2),
  coverage__coverage__field_types_sum_coverage_after_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_sum_coverage_after_0_0[2] = {
  &coverage__coverage__du_functor_desc_sum_coverage_after_0_0,
  &coverage__coverage__du_functor_desc_sum_coverage_after_0_1
};

static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_sum_coverage_after_0_1[1] = { &coverage__coverage__du_functor_desc_sum_coverage_after_0_2 };

static const MR_DuPtagLayout coverage__coverage__du_ptag_ordered_sum_coverage_after_0[2] = {
  {
    UINT32_C(2),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    coverage__coverage__du_stag_ordered_sum_coverage_after_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    coverage__coverage__du_stag_ordered_sum_coverage_after_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr coverage__coverage__du_name_ordered_sum_coverage_after_0[3] = {
  &coverage__coverage__du_functor_desc_sum_coverage_after_0_2,
  &coverage__coverage__du_functor_desc_sum_coverage_after_0_0,
  &coverage__coverage__du_functor_desc_sum_coverage_after_0_1
};

static const MR_Integer coverage__coverage__functor_number_map_sum_coverage_after_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct coverage__coverage__type_ctor_info_sum_coverage_after_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (coverage____Unify____sum_coverage_after_0_0_10001)),
  ((MR_Box) (coverage____Compare____sum_coverage_after_0_0_10001)),
  (MR_String) "coverage",
  (MR_String) "sum_coverage_after",
  { coverage__coverage__du_name_ordered_sum_coverage_after_0 },
  { coverage__coverage__du_ptag_ordered_sum_coverage_after_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  coverage__coverage__functor_number_map_sum_coverage_after_0,

};

static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_sum_coverage_before_0_0 = {
  (MR_String) "sum_before_unknown",
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

static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_sum_coverage_before_0_1 = {
  (MR_String) "sum_before_zero",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo coverage__coverage__field_types_sum_coverage_before_0_2[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) };

static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_sum_coverage_before_0_2 = {
  (MR_String) "sum_before_known",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(2),
  coverage__coverage__field_types_sum_coverage_before_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_sum_coverage_before_0_0[2] = {
  &coverage__coverage__du_functor_desc_sum_coverage_before_0_0,
  &coverage__coverage__du_functor_desc_sum_coverage_before_0_1
};

static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_sum_coverage_before_0_1[1] = { &coverage__coverage__du_functor_desc_sum_coverage_before_0_2 };

static const MR_DuPtagLayout coverage__coverage__du_ptag_ordered_sum_coverage_before_0[2] = {
  {
    UINT32_C(2),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    coverage__coverage__du_stag_ordered_sum_coverage_before_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    coverage__coverage__du_stag_ordered_sum_coverage_before_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr coverage__coverage__du_name_ordered_sum_coverage_before_0[3] = {
  &coverage__coverage__du_functor_desc_sum_coverage_before_0_2,
  &coverage__coverage__du_functor_desc_sum_coverage_before_0_0,
  &coverage__coverage__du_functor_desc_sum_coverage_before_0_1
};

static const MR_Integer coverage__coverage__functor_number_map_sum_coverage_before_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct coverage__coverage__type_ctor_info_sum_coverage_before_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (coverage____Unify____sum_coverage_before_0_0_10001)),
  ((MR_Box) (coverage____Compare____sum_coverage_before_0_0_10001)),
  (MR_String) "coverage",
  (MR_String) "sum_coverage_before",
  { coverage__coverage__du_name_ordered_sum_coverage_before_0 },
  { coverage__coverage__du_ptag_ordered_sum_coverage_before_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  coverage__coverage__functor_number_map_sum_coverage_before_0,

};

static MR_bool MR_CALL 
coverage__IntroducedFrom__pred__before_count_from_either_source__1221__1_2_p_0(
  MR_Integer HeadVar__1_17,
  MR_Integer BeforeCountB_18)
{
  MR_bool succeeded = (HeadVar__1_17 == BeforeCountB_18);

  return succeeded;
}

static MR_bool MR_CALL 
coverage__IntroducedFrom__pred__before_count_from_either_source__1210__1_2_p_0(
  MR_Integer BeforeCountA_8,
  MR_Integer HeadVar__2_14)
{
  MR_bool succeeded = (BeforeCountA_8 == HeadVar__2_14);

  return succeeded;
}

static MR_bool MR_CALL 
coverage__IntroducedFrom__pred__before_count_from_either_source__1205__1_2_p_0(
  MR_Integer BeforeCountA_8,
  MR_Integer BeforeCountB_9)
{
  MR_bool succeeded = (BeforeCountA_8 == BeforeCountB_9);

  return succeeded;
}

static MR_bool MR_CALL 
coverage__IntroducedFrom__pred__after_count_from_either_source__1161__1_2_p_0(
  MR_Integer HeadVar__1_17,
  MR_Integer AfterCountB_18)
{
  MR_bool succeeded = (HeadVar__1_17 == AfterCountB_18);

  return succeeded;
}

static MR_bool MR_CALL 
coverage__IntroducedFrom__pred__after_count_from_either_source__1150__1_2_p_0(
  MR_Integer AfterCountA_8,
  MR_Integer HeadVar__2_14)
{
  MR_bool succeeded = (AfterCountA_8 == HeadVar__2_14);

  return succeeded;
}

static MR_bool MR_CALL 
coverage__IntroducedFrom__pred__after_count_from_either_source__1145__1_2_p_0(
  MR_Integer AfterCountA_8,
  MR_Integer AfterCountB_9)
{
  MR_bool succeeded = (AfterCountA_8 == AfterCountB_9);

  return succeeded;
}

static MR_bool MR_CALL 
coverage__IntroducedFrom__pred__goal_annotate_coverage__335__1_2_p_0(
  MR_Word Before_9,
  MR_Word HeadVar__2_91)
{
  MR_bool succeeded;
  MR_Integer CastX_173 = (MR_Integer) (Before_9);
  MR_Integer CastY_174 = (MR_Integer) (HeadVar__2_91);

  succeeded = (CastX_173 == CastY_174);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) Before_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer CastX_171 = (MR_Integer) (Before_9);
          MR_Integer CastY_172 = (MR_Integer) (HeadVar__2_91);

          succeeded = (CastY_172 == CastX_171);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer ArgX1_169 = ((MR_Integer) ((MR_hl_field(1, Before_9, 0))));
          MR_Integer ArgY1_170;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_91)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_170 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_91, 0))));
            succeeded = (ArgX1_169 == ArgY1_170);
          }
        }
        break;
    }
  return succeeded;
}

static MR_bool MR_CALL 
coverage__IntroducedFrom__pred__goal_annotate_with_coverage__255__1_2_p_0(
  MR_Word After_25,
  MR_Word HeadVar__2_28)
{
  MR_bool succeeded;
  MR_Integer CastX_38 = (MR_Integer) (After_25);
  MR_Integer CastY_39 = (MR_Integer) (HeadVar__2_28);

  succeeded = (CastX_38 == CastY_39);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) After_25)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer CastX_36 = (MR_Integer) (After_25);
          MR_Integer CastY_37 = (MR_Integer) (HeadVar__2_28);

          succeeded = (CastY_37 == CastX_36);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer ArgX1_34 = ((MR_Integer) ((MR_hl_field(1, After_25, 0))));
          MR_Integer ArgY1_35;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_28)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_35 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_28, 0))));
            succeeded = (ArgX1_34 == ArgY1_35);
          }
        }
        break;
    }
  return succeeded;
}

static void MR_CALL 
coverage____Compare____sum_coverage_before_0_0(
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
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 1:
            {
              MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
              MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, 0))));

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
            break;
        }
        break;
    }
}

static MR_bool MR_CALL 
coverage____Unify____sum_coverage_before_0_0(
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
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
          MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

          succeeded = (CastY_6 == CastX_5);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 0))));
          MR_Integer ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
            succeeded = (ArgX1_3 == ArgY1_4);
          }
        }
        break;
    }
  return succeeded;
}

static void MR_CALL 
coverage____Compare____sum_coverage_after_0_0(
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
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 1:
            {
              MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
              MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, 0))));

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
            break;
        }
        break;
    }
}

static MR_bool MR_CALL 
coverage____Unify____sum_coverage_after_0_0(
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
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
          MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

          succeeded = (CastY_6 == CastX_5);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 0))));
          MR_Integer ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
            succeeded = (ArgX1_3 == ArgY1_4);
          }
        }
        break;
    }
  return succeeded;
}

static void MR_CALL 
coverage____Compare____coverage_reference_info_1_0(
  MR_Word TypeInfo_for_Callee_20,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_18 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_19 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_18 == CastY_19);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
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
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 4))));
    MR_Word SubResult1_6;

    mdbcomp__program_representation____Compare____string_proc_label_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;
      MR_Word TypeInfo_24_24;

      {
        TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_24_24, 0) = ((MR_Box) (&analysis_utils__analysis_utils__type_ctor_info_cost_and_callees_1));
        MR_hl_field(0, TypeInfo_24_24, 1) = ((MR_Box) (TypeInfo_for_Callee_20));
      }
      mercury__tree234____Compare____tree234_2_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0), TypeInfo_24_24, &SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&coverage_scalar_common_2[0]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&coverage_scalar_common_2[0]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
            mercury__builtin__compare_3_p_0((MR_Word) (&coverage_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
        }
      }
    }
  }
}

static MR_bool MR_CALL 
coverage____Unify____coverage_reference_info_1_0(
  MR_Word TypeInfo_for_Callee_15,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_13 == CastY_14);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeCtorInfo_17_17;
    MR_Word TypeCtorInfo_18_18;
    MR_Word TypeInfo_19_19;
    MR_Word TypeInfo_22_22;
    MR_Word TypeInfo_23_23;
    MR_Word TypeInfo_24_24;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));

    succeeded = mdbcomp__program_representation____Unify____string_proc_label_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeCtorInfo_17_17 = (MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0);
      TypeCtorInfo_18_18 = (MR_Word) (&analysis_utils__analysis_utils__type_ctor_info_cost_and_callees_1);
      {
        TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_19_19, 0) = ((MR_Box) (TypeCtorInfo_18_18));
        MR_hl_field(0, TypeInfo_19_19, 1) = ((MR_Box) (TypeInfo_for_Callee_15));
      }
      succeeded = mercury__tree234____Unify____tree234_2_0(TypeCtorInfo_17_17, TypeInfo_19_19, ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        TypeInfo_22_22 = (MR_Word) (&coverage_scalar_common_2[0]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_22_22, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          TypeInfo_23_23 = (MR_Word) (&coverage_scalar_common_2[0]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_23_23, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
          {
            TypeInfo_24_24 = (MR_Word) (&coverage_scalar_common_2[1]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_24_24, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
          }
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
coverage____Compare____coverage_point_0_0(
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
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word SubResult1_6;

    succeeded = (ArgX1_4 < ArgY1_5);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (ArgX1_4 > ArgY1_5);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 2;
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mdbcomp__goal_path____Compare____reverse_goal_path_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Integer Var_17 = (MR_Integer) (ArgX3_10);
        MR_Integer Var_18 = (MR_Integer) (ArgY3_11);

        succeeded = (Var_17 < Var_18);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 1;
        else
        {
          succeeded = (Var_17 > Var_18);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 2;
          else
            *HeadVar__1_1 = (MR_Integer) 0;
        }
      }
    }
  }
}

MR_bool MR_CALL 
coverage____Unify____coverage_point_0_0(
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
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      succeeded = mdbcomp__goal_path____Unify____reverse_goal_path_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
        succeeded = (ArgX3_7 == ArgY3_8);
    }
  }
  return succeeded;
}

void MR_CALL 
coverage____Compare____coverage_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_15 == CastY_16);
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
              case (MR_Integer) 2:
              case (MR_Integer) 3:
                *HeadVar__1_1 = (MR_Integer) 1;
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
              case (MR_Integer) 2:
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
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 1:
            {
              MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
              MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, 0))));

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
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 2:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 2:
            {
              MR_Integer ArgX1_6 = ((MR_Integer) ((MR_hl_field(2, HeadVar__2_2, 0))));
              MR_Integer ArgY1_7 = ((MR_Integer) ((MR_hl_field(2, HeadVar__3_3, 0))));
              MR_Integer ArgX2_9 = ((MR_Integer) ((MR_hl_field(2, HeadVar__2_2, 1))));
              MR_Integer ArgY2_10 = ((MR_Integer) ((MR_hl_field(2, HeadVar__3_3, 1))));
              MR_Word SubResult1_8;

              succeeded = (ArgX1_6 < ArgY1_7);
              if (succeeded)
              {
                SubResult1_8 = (MR_Integer) 1;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = (ArgX1_6 > ArgY1_7);
                if (succeeded)
                {
                  SubResult1_8 = (MR_Integer) 2;
                  succeeded = MR_TRUE;
                }
              }
              if (succeeded)
                *HeadVar__1_1 = SubResult1_8;
              else
              {
                succeeded = (ArgX2_9 < ArgY2_10);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 1;
                else
                {
                  succeeded = (ArgX2_9 > ArgY2_10);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 2;
                  else
                    *HeadVar__1_1 = (MR_Integer) 0;
                }
              }
            }
            break;
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Integer ArgX1_11 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 1))));
                      MR_Integer ArgY1_12 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 1))));

                      succeeded = (ArgX1_11 < ArgY1_12);
                      if (succeeded)
                        *HeadVar__1_1 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (ArgX1_11 > ArgY1_12);
                        if (succeeded)
                          *HeadVar__1_1 = (MR_Integer) 2;
                        else
                          *HeadVar__1_1 = (MR_Integer) 0;
                      }
                    }
                    break;
                  case (MR_Integer) 1:
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
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Integer ArgX1_13 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 1))));
                      MR_Integer ArgY1_14 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 1))));

                      succeeded = (ArgX1_13 < ArgY1_14);
                      if (succeeded)
                        *HeadVar__1_1 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (ArgX1_13 > ArgY1_14);
                        if (succeeded)
                          *HeadVar__1_1 = (MR_Integer) 2;
                        else
                          *HeadVar__1_1 = (MR_Integer) 0;
                      }
                    }
                    break;
                }
                break;
            }
            break;
        }
        break;
    }
}

MR_bool MR_CALL 
coverage____Unify____coverage_info_0_0(
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
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
          MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

          succeeded = (CastY_14 == CastX_13);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 0))));
          MR_Integer ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
            succeeded = (ArgX1_3 == ArgY1_4);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer ArgX1_5 = ((MR_Integer) ((MR_hl_field(2, HeadVar__1_1, 0))));
          MR_Integer ArgY1_6;
          MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(2, HeadVar__1_1, 1))));
          MR_Integer ArgY2_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Integer) ((MR_hl_field(2, HeadVar__2_2, 0))));
            ArgY2_8 = ((MR_Integer) ((MR_hl_field(2, HeadVar__2_2, 1))));
            succeeded = (ArgX1_5 == ArgY1_6);
            if (succeeded)
              succeeded = (ArgX2_7 == ArgY2_8);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer ArgX1_9 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Integer ArgY1_10;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_10 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 1))));
                succeeded = (ArgX1_9 == ArgY1_10);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer ArgX1_11 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Integer ArgY1_12;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_12 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 1))));
                succeeded = (ArgX1_11 == ArgY1_12);
              }
            }
            break;
        }
        break;
    }
  return succeeded;
}

static void MR_CALL 
coverage____Compare____coverage_before_0_0(
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
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 1:
            {
              MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
              MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, 0))));

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
            break;
        }
        break;
    }
}

static MR_bool MR_CALL 
coverage____Unify____coverage_before_0_0(
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
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
          MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

          succeeded = (CastY_6 == CastX_5);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 0))));
          MR_Integer ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
            succeeded = (ArgX1_3 == ArgY1_4);
          }
        }
        break;
    }
  return succeeded;
}

static void MR_CALL 
coverage____Compare____coverage_after_0_0(
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
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 1:
            {
              MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
              MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, 0))));

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
            break;
        }
        break;
    }
}

static MR_bool MR_CALL 
coverage____Unify____coverage_after_0_0(
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
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
          MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

          succeeded = (CastY_6 == CastX_5);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 0))));
          MR_Integer ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
            succeeded = (ArgX1_3 == ArgY1_4);
          }
        }
        break;
    }
  return succeeded;
}

static void MR_CALL 
coverage__before_count_from_either_source_sum_3_p_0(
  MR_Word BeforeA0_4,
  MR_Word BeforeB_5,
  MR_Word * Before_6)
{
  MR_Word BeforeA_7;

  coverage__before_count_sum_before_count_2_p_0(BeforeA0_4, &BeforeA_7);
  coverage__before_count_from_either_source_3_p_0(BeforeA_7, BeforeB_5, Before_6);
}

static void MR_CALL 
coverage__before_count_sum_before_count_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 1:
          *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 4U);
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Integer Num_3 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 0))));

        succeeded = (Num_3 == (MR_Integer) 0);
        if (succeeded)
          *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 4U);
        else
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__2_2 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Num_3));
          }
      }
      break;
  }
}

static MR_bool MR_CALL 
coverage__before_count_from_either_source_3_p_0_3(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = coverage__IntroducedFrom__pred__before_count_from_either_source__1221__1_2_p_0(((MR_Integer) ((MR_hl_field(0, closure, 3)))), ((MR_Integer) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
coverage__before_count_from_either_source_3_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = coverage__IntroducedFrom__pred__before_count_from_either_source__1210__1_2_p_0(((MR_Integer) ((MR_hl_field(0, closure, 3)))), ((MR_Integer) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
coverage__before_count_from_either_source_3_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = coverage__IntroducedFrom__pred__before_count_from_either_source__1205__1_2_p_0(((MR_Integer) ((MR_hl_field(0, closure, 3)))), ((MR_Integer) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static void MR_CALL 
coverage__before_count_from_either_source_3_p_0(
  MR_Word BeforeA_4,
  MR_Word BeforeB_5,
  MR_Word * Before_6)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) BeforeA_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(BeforeA_4)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_tag((MR_Word) BeforeB_5)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(BeforeB_5)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *Before_6 = (MR_Word) ((MR_Unsigned) 0U);
                  break;
                case (MR_Integer) 1:
                  *Before_6 = (MR_Word) ((MR_Unsigned) 4U);
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer BeforeCount_7 = ((MR_Integer) ((MR_hl_field(1, BeforeB_5, 0))));

                succeeded = (BeforeCount_7 == (MR_Integer) 0);
                if (succeeded)
                  *Before_6 = (MR_Word) ((MR_Unsigned) 4U);
                else
                  *Before_6 = BeforeB_5;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          switch (MR_tag((MR_Word) BeforeB_5)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(BeforeB_5)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *Before_6 = (MR_Word) ((MR_Unsigned) 4U);
                  break;
                case (MR_Integer) 1:
                  *Before_6 = (MR_Word) ((MR_Unsigned) 4U);
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_15;
                MR_Integer BeforeCountB_18 = ((MR_Integer) ((MR_hl_field(1, BeforeB_5, 0))));

                {
                  Var_15 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_15, 0) = ((MR_Box) (&coverage_scalar_common_4[0]));
                  MR_hl_field(0, Var_15, 1) = ((MR_Box) (coverage__before_count_from_either_source_3_p_0_3));
                  MR_hl_field(0, Var_15, 2) = ((MR_Box) ((MR_Integer) 2));
                  MR_hl_field(0, Var_15, 3) = ((MR_Box) ((MR_Integer) 0));
                  MR_hl_field(0, Var_15, 4) = ((MR_Box) (BeforeCountB_18));
                }
                mercury__require__require_2_p_0(Var_15, (MR_String) "before_count_from_either_source: mismatch");
                *Before_6 = (MR_Word) ((MR_Unsigned) 4U);
              }
              break;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Integer BeforeCountA_8 = ((MR_Integer) ((MR_hl_field(1, BeforeA_4, 0))));

        switch (MR_tag((MR_Word) BeforeB_5)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(BeforeB_5)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  succeeded = (BeforeCountA_8 == (MR_Integer) 0);
                  if (succeeded)
                    *Before_6 = (MR_Word) ((MR_Unsigned) 4U);
                  else
                    *Before_6 = BeforeA_4;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Var_12;

                  {
                    Var_12 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_12, 0) = ((MR_Box) (&coverage_scalar_common_4[0]));
                    MR_hl_field(0, Var_12, 1) = ((MR_Box) (coverage__before_count_from_either_source_3_p_0_2));
                    MR_hl_field(0, Var_12, 2) = ((MR_Box) ((MR_Integer) 2));
                    MR_hl_field(0, Var_12, 3) = ((MR_Box) (BeforeCountA_8));
                    MR_hl_field(0, Var_12, 4) = ((MR_Box) ((MR_Integer) 0));
                  }
                  mercury__require__require_2_p_0(Var_12, (MR_String) "before_count_from_either_source: mismatch");
                  *Before_6 = (MR_Word) ((MR_Unsigned) 4U);
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer BeforeCountB_9 = ((MR_Integer) ((MR_hl_field(1, BeforeB_5, 0))));
              MR_Word Var_10;

              {
                Var_10 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_10, 0) = ((MR_Box) (&coverage_scalar_common_4[0]));
                MR_hl_field(0, Var_10, 1) = ((MR_Box) (coverage__before_count_from_either_source_3_p_0_1));
                MR_hl_field(0, Var_10, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_10, 3) = ((MR_Box) (BeforeCountA_8));
                MR_hl_field(0, Var_10, 4) = ((MR_Box) (BeforeCountB_9));
              }
              mercury__require__require_2_p_0(Var_10, (MR_String) "before_count_from_either_source: mismatch");
              succeeded = (BeforeCountA_8 == (MR_Integer) 0);
              if (succeeded)
                *Before_6 = (MR_Word) ((MR_Unsigned) 4U);
              else
                *Before_6 = BeforeA_4;
            }
            break;
        }
      }
      break;
  }
}

static void MR_CALL 
coverage__sum_switch_case_coverage_4_p_0(
  MR_Word Array_5,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Acc_0_15,
  MR_Word * STATE_VARIABLE_Acc_16)
{
  MR_Word Goal_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));

  if ((STATE_VARIABLE_Acc_0_15 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Acc_16 = STATE_VARIABLE_Acc_0_15;
  else
  {
    MR_Integer Count_10 = ((MR_Integer) ((MR_hl_field(1, STATE_VARIABLE_Acc_0_15, 0))));
    MR_Word Coverage_11;
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, Goal_8, 2))));
    MR_Box conv0_Coverage_11;

    conv0_Coverage_11 = mdbcomp__goal_path__get_goal_attribute_det_2_f_0((MR_Word) (&coverage__coverage__type_ctor_info_coverage_info_0), Array_5, Var_17);
    Coverage_11 = ((MR_Word) (conv0_Coverage_11));
    switch (MR_tag((MR_Word) Coverage_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Coverage_11)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *STATE_VARIABLE_Acc_16 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 1:
            *STATE_VARIABLE_Acc_16 = STATE_VARIABLE_Acc_0_15;
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer Addend_25 = ((MR_Integer) ((MR_hl_field(1, Coverage_11, 0))));
          MR_Integer Var_26 = (MR_Integer) ((MR_Unsigned) Count_10 + (MR_Unsigned) Addend_25);

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Acc_16 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Var_26));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer Addend_12 = ((MR_Integer) ((MR_hl_field(2, Coverage_11, 0))));
          MR_Integer Var_19 = (MR_Integer) ((MR_Unsigned) Count_10 + (MR_Unsigned) Addend_12);

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Acc_16 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Var_19));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Coverage_11, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer Addend_23 = ((MR_Integer) ((MR_hl_field(3, Coverage_11, 1))));
              MR_Integer Var_24 = (MR_Integer) ((MR_Unsigned) Count_10 + (MR_Unsigned) Addend_23);

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_Acc_16 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Var_24));
              }
            }
            break;
          case (MR_Integer) 1:
            *STATE_VARIABLE_Acc_16 = (MR_Word) ((MR_Unsigned) 0U);
            break;
        }
        break;
    }
  }
}

void MR_CALL 
coverage__add_coverage_point_to_map_5_p_0(
  MR_Word CoveragePoint_6,
  MR_Word STATE_VARIABLE_SolnsMap_0_12,
  MR_Word * STATE_VARIABLE_SolnsMap_13,
  MR_Word STATE_VARIABLE_BranchMap_0_14,
  MR_Word * STATE_VARIABLE_BranchMap_15)
{
  MR_Word GoalPath_10 = ((MR_Word) ((MR_hl_field(0, CoveragePoint_6, 1))));
  MR_Word CPType_11 = ((MR_Word) ((MR_hl_field(0, CoveragePoint_6, 2))));

  switch (CPType_11) {
    default: /*NOTREACHED*/ MR_assert(0);
    case ((int) MR_cp_type_branch_arm):
      {
        mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0), (MR_Word) (&coverage__coverage__type_ctor_info_coverage_point_0), ((MR_Box) (GoalPath_10)), ((MR_Box) (CoveragePoint_6)), STATE_VARIABLE_BranchMap_0_14, STATE_VARIABLE_BranchMap_15);
        *STATE_VARIABLE_SolnsMap_13 = STATE_VARIABLE_SolnsMap_0_12;
      }
      break;
    case ((int) MR_cp_type_coverage_after):
      {
        mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0), (MR_Word) (&coverage__coverage__type_ctor_info_coverage_point_0), ((MR_Box) (GoalPath_10)), ((MR_Box) (CoveragePoint_6)), STATE_VARIABLE_SolnsMap_0_12, STATE_VARIABLE_SolnsMap_13);
        *STATE_VARIABLE_BranchMap_15 = STATE_VARIABLE_BranchMap_0_14;
      }
      break;
  }
}

void MR_CALL 
coverage__procrep_annotate_with_coverage_8_p_0(
  MR_Word TypeInfo_for_T_26,
  MR_Word ProcRep_9,
  MR_Word OwnProf_10,
  MR_Word CallSites_11,
  MR_Word SolnsCoveragePoints_12,
  MR_Word BranchCoveragePoints_13,
  MR_Word ContainingGoalMap_14,
  MR_Word LastGoalId_15,
  MR_Word * CoverageArray_16)
{
  MR_Word GoalRep_17;
  MR_Word ProcLabel_18 = ((MR_Word) ((MR_hl_field(0, ProcRep_9, 0))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, ProcRep_9, 1))));

  GoalRep_17 = ((MR_Word) ((MR_hl_field(0, Var_19, 1))));
  coverage__goal_annotate_with_coverage_9_p_0(TypeInfo_for_T_26, ProcLabel_18, GoalRep_17, OwnProf_10, CallSites_11, SolnsCoveragePoints_12, BranchCoveragePoints_13, ContainingGoalMap_14, LastGoalId_15, CoverageArray_16);
}

static MR_bool MR_CALL 
coverage__goal_annotate_with_coverage_9_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = coverage__IntroducedFrom__pred__goal_annotate_with_coverage__255__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

void MR_CALL 
coverage__goal_annotate_with_coverage_9_p_0(
  MR_Word TypeInfo_for_T_31,
  MR_Word ProcLabel_10,
  MR_Word GoalRep_11,
  MR_Word OwnProf_12,
  MR_Word CallSites_13,
  MR_Word SolnsCoveragePoints_14,
  MR_Word BranchCoveragePoints_15,
  MR_Word ContainingGoalMap_16,
  MR_Word LastGoalId_17,
  MR_Word * CoverageArray_18)
{
  MR_bool succeeded;
  MR_Integer Calls_19;
  MR_Integer Exits_20;
  MR_Word Before_21;
  MR_Word GoalPathMap_22;
  MR_Word CoverageReference_23;
  MR_Word CoverageArray0_24;
  MR_Word After_25;
  MR_Word Var_26;
  MR_Word Var_28;

  Calls_19 = measurements__calls_1_f_0(OwnProf_12);
  Exits_20 = measurements__exits_1_f_0(OwnProf_12);
  succeeded = (Calls_19 == (MR_Integer) 0);
  if (succeeded)
    Before_21 = (MR_Word) ((MR_Unsigned) 4U);
  else
    {
      Before_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Before_21, 0) = ((MR_Box) (Calls_19));
    }
  GoalPathMap_22 = mdbcomp__goal_path__create_reverse_goal_path_map_1_f_0(ContainingGoalMap_16);
  {
    CoverageReference_23 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, CoverageReference_23, 0) = ((MR_Box) (ProcLabel_10));
    MR_hl_field(0, CoverageReference_23, 1) = ((MR_Box) (CallSites_13));
    MR_hl_field(0, CoverageReference_23, 2) = ((MR_Box) (SolnsCoveragePoints_14));
    MR_hl_field(0, CoverageReference_23, 3) = ((MR_Box) (BranchCoveragePoints_15));
    MR_hl_field(0, CoverageReference_23, 4) = ((MR_Box) (GoalPathMap_22));
  }
  CoverageArray0_24 = mdbcomp__goal_path__create_goal_id_array_1_f_0((MR_Word) (&coverage__coverage__type_ctor_info_coverage_info_0), LastGoalId_17);
  coverage__goal_annotate_coverage_6_p_0(TypeInfo_for_T_31, GoalRep_11, CoverageReference_23, Before_21, &After_25, CoverageArray0_24, CoverageArray_18);
  succeeded = (Exits_20 == (MR_Integer) 0);
  if (succeeded)
    Var_28 = (MR_Word) ((MR_Unsigned) 4U);
  else
    {
      Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_28, 0) = ((MR_Box) (Exits_20));
    }
  {
    Var_26 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_26, 0) = ((MR_Box) (&coverage_scalar_common_4[2]));
    MR_hl_field(0, Var_26, 1) = ((MR_Box) (coverage__goal_annotate_with_coverage_9_p_0_1));
    MR_hl_field(0, Var_26, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_26, 3) = ((MR_Box) (After_25));
    MR_hl_field(0, Var_26, 4) = ((MR_Box) (Var_28));
  }
  mercury__require__require_2_p_0(Var_26, (MR_String) "Coverage after procedure not equal with exit count of procedure");
}

static void MR_CALL 
coverage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_105_115_106_95_97_110_110_111_116_97_116_101_95_99_111_118_101_114_97_103_101_95_95_91_52_93_95_48_8_p_0(
  MR_Word TypeInfo_for_Callee_44,
  MR_Word HeadVar__1_1,
  MR_Word Info_2,
  MR_Word Before0_4,
  MR_Word STATE_VARIABLE_SumAfter_0_5,
  MR_Word * STATE_VARIABLE_SumAfter_6,
  MR_Word STATE_VARIABLE_Array_0_7,
  MR_Word * STATE_VARIABLE_Array_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Array_8 = STATE_VARIABLE_Array_0_7;
      *STATE_VARIABLE_SumAfter_6 = STATE_VARIABLE_SumAfter_0_5;
    }
    else
    {
      MR_Word Disj_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Disjs_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word DisjRevGoalPath_25;
      MR_Word Before_27;
      MR_Word After_28;
      MR_Word Var_33 = ((MR_Word) ((MR_hl_field(0, Info_2, 4))));
      MR_Word Var_34 = ((MR_Word) ((MR_hl_field(0, Disj_18, 2))));
      MR_Word STATE_VARIABLE_Array_1_35;
      MR_Word STATE_VARIABLE_SumAfter_1_36;
      MR_Box conv0_DisjRevGoalPath_25;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_SumAfter_0_5;
      MR_Word next_value_of_STATE_VARIABLE_Array_0_7;

      conv0_DisjRevGoalPath_25 = mercury__map__lookup_2_f_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0), Var_33, ((MR_Box) (Var_34)));
      DisjRevGoalPath_25 = ((MR_Word) (conv0_DisjRevGoalPath_25));
      switch (MR_tag((MR_Word) Before0_4)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(Before0_4)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word CP_47;
                MR_Word Var_51 = ((MR_Word) ((MR_hl_field(0, Info_2, 3))));
                MR_Box conv1_CP_47;

                succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0), (MR_Word) (&coverage__coverage__type_ctor_info_coverage_point_0), Var_51, ((MR_Box) (DisjRevGoalPath_25)), &conv1_CP_47);
                if (succeeded)
                {
                  CP_47 = ((MR_Word) (conv1_CP_47));
                  succeeded = MR_TRUE;
                }
                if (succeeded)
                {
                  MR_Integer ExecCount_48 = ((MR_Integer) ((MR_hl_field(0, CP_47, 0))));

                  succeeded = (ExecCount_48 == (MR_Integer) 0);
                  if (succeeded)
                    Before_27 = (MR_Word) ((MR_Unsigned) 4U);
                  else
                    {
                      Before_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Before_27, 0) = ((MR_Box) (ExecCount_48));
                    }
                }
                else
                  Before_27 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
            case (MR_Integer) 1:
              Before_27 = Before0_4;
              break;
          }
          break;
        case (MR_Integer) 1:
          Before_27 = Before0_4;
          break;
      }
      coverage__goal_annotate_coverage_6_p_0(TypeInfo_for_Callee_44, Disj_18, Info_2, Before_27, &After_28, STATE_VARIABLE_Array_0_7, &STATE_VARIABLE_Array_1_35);
      switch (MR_tag((MR_Word) STATE_VARIABLE_SumAfter_0_5)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(STATE_VARIABLE_SumAfter_0_5)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              STATE_VARIABLE_SumAfter_1_36 = STATE_VARIABLE_SumAfter_0_5;
              break;
            case (MR_Integer) 1:
              switch (MR_tag((MR_Word) After_28)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(After_28)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      STATE_VARIABLE_SumAfter_1_36 = (MR_Word) ((MR_Unsigned) 0U);
                      break;
                    case (MR_Integer) 1:
                      STATE_VARIABLE_SumAfter_1_36 = STATE_VARIABLE_SumAfter_0_5;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Integer ExecCount_61 = ((MR_Integer) ((MR_hl_field(1, After_28, 0))));

                    {
                      STATE_VARIABLE_SumAfter_1_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, STATE_VARIABLE_SumAfter_1_36, 0) = ((MR_Box) (ExecCount_61));
                    }
                  }
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer SumExecCount_58 = ((MR_Integer) ((MR_hl_field(1, STATE_VARIABLE_SumAfter_0_5, 0))));

            switch (MR_tag((MR_Word) After_28)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(After_28)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    STATE_VARIABLE_SumAfter_1_36 = (MR_Word) ((MR_Unsigned) 0U);
                    break;
                  case (MR_Integer) 1:
                    STATE_VARIABLE_SumAfter_1_36 = STATE_VARIABLE_SumAfter_0_5;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer ExecCount_59 = ((MR_Integer) ((MR_hl_field(1, After_28, 0))));
                  MR_Integer Var_60 = (MR_Integer) ((MR_Unsigned) SumExecCount_58 + (MR_Unsigned) ExecCount_59);

                  {
                    STATE_VARIABLE_SumAfter_1_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, STATE_VARIABLE_SumAfter_1_36, 0) = ((MR_Box) (Var_60));
                  }
                }
                break;
            }
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Disjs_19;
      next_value_of_STATE_VARIABLE_SumAfter_0_5 = STATE_VARIABLE_SumAfter_1_36;
      next_value_of_STATE_VARIABLE_Array_0_7 = STATE_VARIABLE_Array_1_35;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      Before0_4 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_SumAfter_0_5 = next_value_of_STATE_VARIABLE_SumAfter_0_5;
      STATE_VARIABLE_Array_0_7 = next_value_of_STATE_VARIABLE_Array_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
coverage__switch_annotate_coverage_2_10_p_0(
  MR_Word TypeInfo_for_Callee_57,
  MR_Word HeadVar__1_1,
  MR_Word Info_2,
  MR_Word CanFail_3,
  MR_Word SwitchBefore_4,
  MR_Word STATE_VARIABLE_SumBefore_0_5,
  MR_Word * STATE_VARIABLE_SumBefore_6,
  MR_Word STATE_VARIABLE_SumAfter_0_7,
  MR_Word * STATE_VARIABLE_SumAfter_8,
  MR_Word STATE_VARIABLE_Array_0_9,
  MR_Word * STATE_VARIABLE_Array_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Array_10 = STATE_VARIABLE_Array_0_9;
      *STATE_VARIABLE_SumAfter_8 = STATE_VARIABLE_SumAfter_0_7;
      *STATE_VARIABLE_SumBefore_6 = STATE_VARIABLE_SumBefore_0_5;
    }
    else
    {
      MR_Word Case_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Cases_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word BeforeCase_33;
      MR_Word Goal_35 = ((MR_Word) ((MR_hl_field(0, Case_23, 2))));
      MR_Word AfterCase_38;
      MR_Word STATE_VARIABLE_Array_1_48;
      MR_Word STATE_VARIABLE_SumBefore_1_49;
      MR_Word STATE_VARIABLE_SumAfter_1_50;
      MR_Integer SwitchBeforeExecCount_31;
      MR_Integer SumBeforeExecCount_32;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_SumBefore_0_5;
      MR_Word next_value_of_STATE_VARIABLE_SumAfter_0_7;
      MR_Word next_value_of_STATE_VARIABLE_Array_0_9;

      succeeded = (Cases_24 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = (CanFail_3 == (MR_Integer) 1);
        if (succeeded)
        {
          if ((SwitchBefore_4 == (MR_Word) ((MR_Unsigned) 4U)))
          {
            SwitchBeforeExecCount_31 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
          else
          if (((MR_tag((MR_Word) SwitchBefore_4)) == (MR_Integer) 1))
          {
            SwitchBeforeExecCount_31 = ((MR_Integer) ((MR_hl_field(1, SwitchBefore_4, 0))));
            succeeded = MR_TRUE;
          }
          else
            succeeded = MR_FALSE;
          if (succeeded)
          {
            if ((STATE_VARIABLE_SumBefore_0_5 == (MR_Word) ((MR_Unsigned) 4U)))
            {
              SumBeforeExecCount_32 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
            else
            if (((MR_tag((MR_Word) STATE_VARIABLE_SumBefore_0_5)) == (MR_Integer) 1))
            {
              SumBeforeExecCount_32 = ((MR_Integer) ((MR_hl_field(1, STATE_VARIABLE_SumBefore_0_5, 0))));
              succeeded = MR_TRUE;
            }
            else
              succeeded = MR_FALSE;
          }
        }
      }
      if (succeeded)
      {
        MR_Integer Var_45 = (MR_Integer) ((MR_Unsigned) SwitchBeforeExecCount_31 - (MR_Unsigned) SumBeforeExecCount_32);

        succeeded = (Var_45 == (MR_Integer) 0);
        if (succeeded)
          BeforeCase_33 = (MR_Word) ((MR_Unsigned) 4U);
        else
          {
            BeforeCase_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, BeforeCase_33, 0) = ((MR_Box) (Var_45));
          }
      }
      else
      {
        MR_Word RevCaseGoalPath_34;
        MR_Word Var_46 = ((MR_Word) ((MR_hl_field(0, Info_2, 4))));
        MR_Word Var_47 = ((MR_Word) ((MR_hl_field(0, Goal_35, 2))));
        MR_Box conv0_RevCaseGoalPath_34;
        MR_Word CP_60;
        MR_Word Var_64;
        MR_Box conv1_CP_60;

        conv0_RevCaseGoalPath_34 = mercury__map__lookup_2_f_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0), Var_46, ((MR_Box) (Var_47)));
        RevCaseGoalPath_34 = ((MR_Word) (conv0_RevCaseGoalPath_34));
        Var_64 = ((MR_Word) ((MR_hl_field(0, Info_2, 3))));
        succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0), (MR_Word) (&coverage__coverage__type_ctor_info_coverage_point_0), Var_64, ((MR_Box) (RevCaseGoalPath_34)), &conv1_CP_60);
        if (succeeded)
        {
          CP_60 = ((MR_Word) (conv1_CP_60));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Integer ExecCount_61 = ((MR_Integer) ((MR_hl_field(0, CP_60, 0))));

          succeeded = (ExecCount_61 == (MR_Integer) 0);
          if (succeeded)
            BeforeCase_33 = (MR_Word) ((MR_Unsigned) 4U);
          else
            {
              BeforeCase_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, BeforeCase_33, 0) = ((MR_Box) (ExecCount_61));
            }
        }
        else
          BeforeCase_33 = (MR_Word) ((MR_Unsigned) 0U);
      }
      coverage__goal_annotate_coverage_6_p_0(TypeInfo_for_Callee_57, Goal_35, Info_2, BeforeCase_33, &AfterCase_38, STATE_VARIABLE_Array_0_9, &STATE_VARIABLE_Array_1_48);
      switch (MR_tag((MR_Word) STATE_VARIABLE_SumBefore_0_5)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(STATE_VARIABLE_SumBefore_0_5)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              STATE_VARIABLE_SumBefore_1_49 = STATE_VARIABLE_SumBefore_0_5;
              break;
            case (MR_Integer) 1:
              switch (MR_tag((MR_Word) BeforeCase_33)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(BeforeCase_33)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      STATE_VARIABLE_SumBefore_1_49 = (MR_Word) ((MR_Unsigned) 0U);
                      break;
                    case (MR_Integer) 1:
                      STATE_VARIABLE_SumBefore_1_49 = STATE_VARIABLE_SumBefore_0_5;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Integer ExecCount_74 = ((MR_Integer) ((MR_hl_field(1, BeforeCase_33, 0))));

                    {
                      STATE_VARIABLE_SumBefore_1_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, STATE_VARIABLE_SumBefore_1_49, 0) = ((MR_Box) (ExecCount_74));
                    }
                  }
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer SumExecCount_71 = ((MR_Integer) ((MR_hl_field(1, STATE_VARIABLE_SumBefore_0_5, 0))));

            switch (MR_tag((MR_Word) BeforeCase_33)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(BeforeCase_33)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    STATE_VARIABLE_SumBefore_1_49 = (MR_Word) ((MR_Unsigned) 0U);
                    break;
                  case (MR_Integer) 1:
                    STATE_VARIABLE_SumBefore_1_49 = STATE_VARIABLE_SumBefore_0_5;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer ExecCount_72 = ((MR_Integer) ((MR_hl_field(1, BeforeCase_33, 0))));
                  MR_Integer Var_73 = (MR_Integer) ((MR_Unsigned) SumExecCount_71 + (MR_Unsigned) ExecCount_72);

                  {
                    STATE_VARIABLE_SumBefore_1_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, STATE_VARIABLE_SumBefore_1_49, 0) = ((MR_Box) (Var_73));
                  }
                }
                break;
            }
          }
          break;
      }
      switch (MR_tag((MR_Word) STATE_VARIABLE_SumAfter_0_7)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(STATE_VARIABLE_SumAfter_0_7)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              STATE_VARIABLE_SumAfter_1_50 = STATE_VARIABLE_SumAfter_0_7;
              break;
            case (MR_Integer) 1:
              switch (MR_tag((MR_Word) AfterCase_38)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(AfterCase_38)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      STATE_VARIABLE_SumAfter_1_50 = (MR_Word) ((MR_Unsigned) 0U);
                      break;
                    case (MR_Integer) 1:
                      STATE_VARIABLE_SumAfter_1_50 = STATE_VARIABLE_SumAfter_0_7;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Integer ExecCount_78 = ((MR_Integer) ((MR_hl_field(1, AfterCase_38, 0))));

                    {
                      STATE_VARIABLE_SumAfter_1_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, STATE_VARIABLE_SumAfter_1_50, 0) = ((MR_Box) (ExecCount_78));
                    }
                  }
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer SumExecCount_75 = ((MR_Integer) ((MR_hl_field(1, STATE_VARIABLE_SumAfter_0_7, 0))));

            switch (MR_tag((MR_Word) AfterCase_38)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(AfterCase_38)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    STATE_VARIABLE_SumAfter_1_50 = (MR_Word) ((MR_Unsigned) 0U);
                    break;
                  case (MR_Integer) 1:
                    STATE_VARIABLE_SumAfter_1_50 = STATE_VARIABLE_SumAfter_0_7;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer ExecCount_76 = ((MR_Integer) ((MR_hl_field(1, AfterCase_38, 0))));
                  MR_Integer Var_77 = (MR_Integer) ((MR_Unsigned) SumExecCount_75 + (MR_Unsigned) ExecCount_76);

                  {
                    STATE_VARIABLE_SumAfter_1_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, STATE_VARIABLE_SumAfter_1_50, 0) = ((MR_Box) (Var_77));
                  }
                }
                break;
            }
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Cases_24;
      next_value_of_STATE_VARIABLE_SumBefore_0_5 = STATE_VARIABLE_SumBefore_1_49;
      next_value_of_STATE_VARIABLE_SumAfter_0_7 = STATE_VARIABLE_SumAfter_1_50;
      next_value_of_STATE_VARIABLE_Array_0_9 = STATE_VARIABLE_Array_1_48;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_SumBefore_0_5 = next_value_of_STATE_VARIABLE_SumBefore_0_5;
      STATE_VARIABLE_SumAfter_0_7 = next_value_of_STATE_VARIABLE_SumAfter_0_7;
      STATE_VARIABLE_Array_0_9 = next_value_of_STATE_VARIABLE_Array_0_9;
      continue;
    }
    break;
  }
}

static void MR_CALL 
coverage__conj_annotate_coverage_6_p_0(
  MR_Word TypeInfo_for_Callee_24,
  MR_Word HeadVar__1_1,
  MR_Word Info_2,
  MR_Word Before_3,
  MR_Word * After_4,
  MR_Word STATE_VARIABLE_Array_0_5,
  MR_Word * STATE_VARIABLE_Array_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      switch (MR_tag((MR_Word) Before_3)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(Before_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *After_4 = (MR_Word) ((MR_Unsigned) 0U);
              break;
            case (MR_Integer) 1:
              *After_4 = (MR_Word) ((MR_Unsigned) 4U);
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer Count_25 = ((MR_Integer) ((MR_hl_field(1, Before_3, 0))));

            succeeded = (Count_25 == (MR_Integer) 0);
            if (succeeded)
              *After_4 = (MR_Word) ((MR_Unsigned) 4U);
            else
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *After_4 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Count_25));
              }
          }
          break;
      }
      *STATE_VARIABLE_Array_6 = STATE_VARIABLE_Array_0_5;
    }
    else
    {
      MR_Word Conj_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Conjs_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word CoverageAfterHead_19;
      MR_Word CoverageBeforeTail_20;
      MR_Word STATE_VARIABLE_Array_1_23;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_Before_3;
      MR_Word next_value_of_STATE_VARIABLE_Array_0_5;

      coverage__goal_annotate_coverage_6_p_0(TypeInfo_for_Callee_24, Conj_13, Info_2, Before_3, &CoverageAfterHead_19, STATE_VARIABLE_Array_0_5, &STATE_VARIABLE_Array_1_23);
      switch (MR_tag((MR_Word) CoverageAfterHead_19)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(CoverageAfterHead_19)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              CoverageBeforeTail_20 = (MR_Word) ((MR_Unsigned) 0U);
              break;
            case (MR_Integer) 1:
              CoverageBeforeTail_20 = (MR_Word) ((MR_Unsigned) 4U);
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer ExecCount_26 = ((MR_Integer) ((MR_hl_field(1, CoverageAfterHead_19, 0))));

            {
              CoverageBeforeTail_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, CoverageBeforeTail_20, 0) = ((MR_Box) (ExecCount_26));
            }
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Conjs_14;
      next_value_of_Before_3 = CoverageBeforeTail_20;
      next_value_of_STATE_VARIABLE_Array_0_5 = STATE_VARIABLE_Array_1_23;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      Before_3 = next_value_of_Before_3;
      STATE_VARIABLE_Array_0_5 = next_value_of_STATE_VARIABLE_Array_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
coverage__scope_annotate_coverage_7_p_0(
  MR_Word TypeInfo_for_Callee_17,
  MR_Word Goal_8,
  MR_Word Info_9,
  MR_Word MaybeCut_10,
  MR_Word Before_11,
  MR_Word * After_12,
  MR_Word STATE_VARIABLE_Array_0_15,
  MR_Word * STATE_VARIABLE_Array_16)
{
  MR_Word AfterScopedGoal_14;

  coverage__goal_annotate_coverage_6_p_0(TypeInfo_for_Callee_17, Goal_8, Info_9, Before_11, &AfterScopedGoal_14, STATE_VARIABLE_Array_0_15, STATE_VARIABLE_Array_16);
  switch (MaybeCut_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *After_12 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      *After_12 = AfterScopedGoal_14;
      break;
  }
}

static void MR_CALL 
coverage__negation_annotate_coverage_6_p_0(
  MR_Word TypeInfo_for_Callee_29,
  MR_Word Goal_7,
  MR_Word Info_8,
  MR_Word Before_9,
  MR_Word * After_10,
  MR_Word STATE_VARIABLE_Array_0_15,
  MR_Word * STATE_VARIABLE_Array_16)
{
  MR_Word _CoverageAfter_12;

  coverage__goal_annotate_coverage_6_p_0(TypeInfo_for_Callee_29, Goal_7, Info_8, Before_9, &_CoverageAfter_12, STATE_VARIABLE_Array_0_15, STATE_VARIABLE_Array_16);
  *After_10 = (MR_Word) ((MR_Unsigned) 0U);
}

static void MR_CALL 
coverage__ite_annotate_coverage_9_p_0(
  MR_Word TypeInfo_for_Callee_127,
  MR_Word Cond_10,
  MR_Word Then_11,
  MR_Word Else_12,
  MR_Word Info_13,
  MR_Word RevGoalPath_14,
  MR_Word Before_15,
  MR_Word * After_16,
  MR_Word STATE_VARIABLE_Array_0_36,
  MR_Word * STATE_VARIABLE_Array_37)
{
  MR_bool succeeded;
  MR_Word CondDetism_18 = ((MR_Unsigned) ((MR_hl_field(0, Cond_10, 1))) & (MR_Integer) 7);
  MR_Word GoalPathMap_19 = ((MR_Word) ((MR_hl_field(0, Info_13, 4))));
  MR_Word AfterCond_20;
  MR_Word BeforeThen0_21;
  MR_Word BeforeThen_23;
  MR_Word CondSolns_25;
  MR_Word BeforeElse_27;
  MR_Word AfterThen_32;
  MR_Word AfterElse_33;
  MR_Word STATE_VARIABLE_Array_1_38;
  MR_Word STATE_VARIABLE_Array_2_65;

  coverage__goal_annotate_coverage_6_p_0(TypeInfo_for_Callee_127, Cond_10, Info_13, Before_15, &AfterCond_20, STATE_VARIABLE_Array_0_36, &STATE_VARIABLE_Array_1_38);
  coverage__after_to_before_coverage_2_p_0(AfterCond_20, &BeforeThen0_21);
  switch (MR_tag((MR_Word) BeforeThen0_21)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(BeforeThen0_21)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word RevThenGoalPath_24;
            MR_Word Var_39 = ((MR_Word) ((MR_hl_field(0, Then_11, 2))));
            MR_Box conv0_RevThenGoalPath_24;

            conv0_RevThenGoalPath_24 = mercury__map__lookup_2_f_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0), GoalPathMap_19, ((MR_Box) (Var_39)));
            RevThenGoalPath_24 = ((MR_Word) (conv0_RevThenGoalPath_24));
            coverage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_115_116_97_114_116_95_99_111_118_101_114_97_103_101_95_95_91_49_93_95_48_3_p_0(Info_13, RevThenGoalPath_24, &BeforeThen_23);
          }
          break;
        case (MR_Integer) 1:
          BeforeThen_23 = BeforeThen0_21;
          break;
      }
      break;
    case (MR_Integer) 1:
      BeforeThen_23 = BeforeThen0_21;
      break;
  }
  CondSolns_25 = mdbcomp__program_representation__detism_get_solutions_1_f_0(CondDetism_18);
  switch (CondSolns_25) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
      {
        MR_Word RevElseGoalPath_26;
        MR_Word Var_40 = ((MR_Word) ((MR_hl_field(0, Else_12, 2))));
        MR_Box conv1_RevElseGoalPath_26;

        conv1_RevElseGoalPath_26 = mercury__map__lookup_2_f_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0), GoalPathMap_19, ((MR_Box) (Var_40)));
        RevElseGoalPath_26 = ((MR_Word) (conv1_RevElseGoalPath_26));
        coverage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_115_116_97_114_116_95_99_111_118_101_114_97_103_101_95_95_91_49_93_95_48_3_p_0(Info_13, RevElseGoalPath_26, &BeforeElse_27);
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 0:
      switch (MR_tag((MR_Word) BeforeThen_23)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(BeforeThen_23)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_43 = ((MR_Word) ((MR_hl_field(0, Else_12, 2))));
                MR_Word RevElseGoalPath_109;
                MR_Box conv4_RevElseGoalPath_109;

                conv4_RevElseGoalPath_109 = mercury__map__lookup_2_f_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0), GoalPathMap_19, ((MR_Box) (Var_43)));
                RevElseGoalPath_109 = ((MR_Word) (conv4_RevElseGoalPath_109));
                coverage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_115_116_97_114_116_95_99_111_118_101_114_97_103_101_95_95_91_49_93_95_48_3_p_0(Info_13, RevElseGoalPath_109, &BeforeElse_27);
              }
              break;
            case (MR_Integer) 1:
              switch (MR_tag((MR_Word) Before_15)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(Before_15)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word Var_187 = ((MR_Word) ((MR_hl_field(0, Else_12, 2))));
                        MR_Word RevElseGoalPath_188;
                        MR_Box conv3_RevElseGoalPath_188;

                        conv3_RevElseGoalPath_188 = mercury__map__lookup_2_f_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0), GoalPathMap_19, ((MR_Box) (Var_187)));
                        RevElseGoalPath_188 = ((MR_Word) (conv3_RevElseGoalPath_188));
                        coverage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_115_116_97_114_116_95_99_111_118_101_114_97_103_101_95_95_91_49_93_95_48_3_p_0(Info_13, RevElseGoalPath_188, &BeforeElse_27);
                      }
                      break;
                    case (MR_Integer) 1:
                      BeforeElse_27 = coverage__before_coverage_1_f_0((MR_Integer) ((MR_Unsigned) 0 - (MR_Unsigned) 0));
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Integer BeforeCount_181 = ((MR_Integer) ((MR_hl_field(1, Before_15, 0))));
                    MR_Integer Var_182 = (MR_Integer) ((MR_Unsigned) BeforeCount_181 - (MR_Unsigned) 0);

                    BeforeElse_27 = coverage__before_coverage_1_f_0(Var_182);
                  }
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer BeforeThenCount_28 = ((MR_Integer) ((MR_hl_field(1, BeforeThen_23, 0))));

            switch (MR_tag((MR_Word) Before_15)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(Before_15)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word Var_42 = ((MR_Word) ((MR_hl_field(0, Else_12, 2))));
                      MR_Word RevElseGoalPath_106;
                      MR_Box conv2_RevElseGoalPath_106;

                      conv2_RevElseGoalPath_106 = mercury__map__lookup_2_f_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0), GoalPathMap_19, ((MR_Box) (Var_42)));
                      RevElseGoalPath_106 = ((MR_Word) (conv2_RevElseGoalPath_106));
                      coverage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_115_116_97_114_116_95_99_111_118_101_114_97_103_101_95_95_91_49_93_95_48_3_p_0(Info_13, RevElseGoalPath_106, &BeforeElse_27);
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Integer Var_180 = (MR_Integer) ((MR_Unsigned) 0 - (MR_Unsigned) BeforeThenCount_28);

                      BeforeElse_27 = coverage__before_coverage_1_f_0(Var_180);
                    }
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer BeforeCount_29 = ((MR_Integer) ((MR_hl_field(1, Before_15, 0))));
                  MR_Integer Var_41 = (MR_Integer) ((MR_Unsigned) BeforeCount_29 - (MR_Unsigned) BeforeThenCount_28);

                  BeforeElse_27 = coverage__before_coverage_1_f_0(Var_41);
                }
                break;
            }
          }
          break;
      }
      break;
  }
  coverage__goal_annotate_coverage_6_p_0(TypeInfo_for_Callee_127, Then_11, Info_13, BeforeThen_23, &AfterThen_32, STATE_VARIABLE_Array_1_38, &STATE_VARIABLE_Array_2_65);
  coverage__goal_annotate_coverage_6_p_0(TypeInfo_for_Callee_127, Else_12, Info_13, BeforeElse_27, &AfterElse_33, STATE_VARIABLE_Array_2_65, STATE_VARIABLE_Array_37);
  switch (MR_tag((MR_Word) AfterThen_32)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(AfterThen_32)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *After_16 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 1:
          switch (MR_tag((MR_Word) AfterElse_33)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(AfterElse_33)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *After_16 = (MR_Word) ((MR_Unsigned) 0U);
                  break;
                case (MR_Integer) 1:
                  *After_16 = (MR_Word) ((MR_Unsigned) 4U);
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer AfterElseExecCount_112 = ((MR_Integer) ((MR_hl_field(1, AfterElse_33, 0))));

                *After_16 = coverage__after_coverage_1_f_0(AfterElseExecCount_112);
              }
              break;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Integer AfterThenExecCount_34 = ((MR_Integer) ((MR_hl_field(1, AfterThen_32, 0))));

        switch (MR_tag((MR_Word) AfterElse_33)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(AfterElse_33)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *After_16 = (MR_Word) ((MR_Unsigned) 0U);
                break;
              case (MR_Integer) 1:
                *After_16 = coverage__after_coverage_1_f_0(AfterThenExecCount_34);
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer AfterElseExecCount_35 = ((MR_Integer) ((MR_hl_field(1, AfterElse_33, 0))));
              MR_Integer Var_67 = (MR_Integer) ((MR_Unsigned) AfterThenExecCount_34 + (MR_Unsigned) AfterElseExecCount_35);

              *After_16 = coverage__after_coverage_1_f_0(Var_67);
            }
            break;
        }
      }
      break;
  }
  succeeded = coverage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_116_101_95_99_111_118_101_114_97_103_101_95_95_91_55_93_95_48_9_p_0(Before_15, *After_16, Before_15, AfterCond_20, BeforeThen_23, AfterThen_32, AfterElse_33, CondDetism_18);
  if (!(succeeded))
  {
    MR_String Var_70;
    MR_String Var_80;
    MR_String Var_83;
    MR_String Var_86;
    MR_String Var_89;
    MR_String Var_92;
    MR_String Var_95;
    MR_String Var_98;
    MR_String Var_101;
    MR_String Var_104;
    MR_String Var_153;
    MR_String Var_155;
    MR_String Var_156;
    MR_String Var_158;
    MR_String Var_159;
    MR_String Var_161;
    MR_String Var_162;
    MR_String Var_164;
    MR_String Var_165;
    MR_String Var_167;
    MR_String Var_168;
    MR_String Var_170;
    MR_String Var_171;
    MR_String Var_173;
    MR_String Var_174;
    MR_String Var_176;
    MR_String Var_177;

    Var_80 = mercury__string__string_1_f_0((MR_Word) (&coverage__coverage__type_ctor_info_coverage_before_0), ((MR_Box) (Before_15)));
    Var_83 = mercury__string__string_1_f_0((MR_Word) (&coverage__coverage__type_ctor_info_coverage_after_0), ((MR_Box) (*After_16)));
    Var_86 = mercury__string__string_1_f_0((MR_Word) (&coverage__coverage__type_ctor_info_coverage_before_0), ((MR_Box) (Before_15)));
    Var_89 = mercury__string__string_1_f_0((MR_Word) (&coverage__coverage__type_ctor_info_coverage_after_0), ((MR_Box) (AfterCond_20)));
    Var_92 = mercury__string__string_1_f_0((MR_Word) (&coverage__coverage__type_ctor_info_coverage_before_0), ((MR_Box) (BeforeThen_23)));
    Var_95 = mercury__string__string_1_f_0((MR_Word) (&coverage__coverage__type_ctor_info_coverage_after_0), ((MR_Box) (AfterThen_32)));
    Var_98 = mercury__string__string_1_f_0((MR_Word) (&coverage__coverage__type_ctor_info_coverage_before_0), ((MR_Box) (BeforeElse_27)));
    Var_101 = mercury__string__string_1_f_0((MR_Word) (&coverage__coverage__type_ctor_info_coverage_after_0), ((MR_Box) (AfterElse_33)));
    Var_104 = mdbcomp__goal_path__rev_goal_path_to_string_1_f_0(RevGoalPath_14);
    Var_153 = mercury__string__f_43_43_2_f_0(Var_104, (MR_String) "\n");
    Var_155 = mercury__string__f_43_43_2_f_0((MR_String) "\n\tGoalPath: ", Var_153);
    Var_156 = mercury__string__f_43_43_2_f_0(Var_101, Var_155);
    Var_158 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_156);
    Var_159 = mercury__string__f_43_43_2_f_0(Var_98, Var_158);
    Var_161 = mercury__string__f_43_43_2_f_0((MR_String) "\n\tElse: ", Var_159);
    Var_162 = mercury__string__f_43_43_2_f_0(Var_95, Var_161);
    Var_164 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_162);
    Var_165 = mercury__string__f_43_43_2_f_0(Var_92, Var_164);
    Var_167 = mercury__string__f_43_43_2_f_0((MR_String) "\n\tThen: ", Var_165);
    Var_168 = mercury__string__f_43_43_2_f_0(Var_89, Var_167);
    Var_170 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_168);
    Var_171 = mercury__string__f_43_43_2_f_0(Var_86, Var_170);
    Var_173 = mercury__string__f_43_43_2_f_0((MR_String) "\n\tCond: ", Var_171);
    Var_174 = mercury__string__f_43_43_2_f_0(Var_83, Var_173);
    Var_176 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_174);
    Var_177 = mercury__string__f_43_43_2_f_0(Var_80, Var_176);
    Var_70 = mercury__string__f_43_43_2_f_0((MR_String) "check_ite_coverage/4 failed\n\tWhole: ", Var_177);
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140coverage.ite_annotate_coverage\'/9", Var_70);
      return;
    }
  }
}

static void MR_CALL 
coverage__switch_annotate_coverage_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Acc_16;

  coverage__sum_switch_case_coverage_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Acc_16);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Acc_16));
}

static void MR_CALL 
coverage__switch_annotate_coverage_7_p_0(
  MR_Word TypeInfo_for_Callee_50,
  MR_Word Cases_8,
  MR_Word Info_9,
  MR_Word CanFail_10,
  MR_Word Before_11,
  MR_Word * After_12,
  MR_Word STATE_VARIABLE_Array_0_19,
  MR_Word * STATE_VARIABLE_Array_20)
{
  MR_bool succeeded;
  MR_Word SumAfter_17;
  MR_Word _SumBefore_16;
  MR_Word Result_18;

  coverage__switch_annotate_coverage_2_10_p_0(TypeInfo_for_Callee_50, Cases_8, Info_9, CanFail_10, Before_11, (MR_Word) ((MR_Unsigned) 4U), &_SumBefore_16, (MR_Word) ((MR_Unsigned) 4U), &SumAfter_17, STATE_VARIABLE_Array_0_19, STATE_VARIABLE_Array_20);
  switch (MR_tag((MR_Word) SumAfter_17)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(SumAfter_17)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *After_12 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 1:
          *After_12 = (MR_Word) ((MR_Unsigned) 4U);
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Integer C_72 = ((MR_Integer) ((MR_hl_field(1, SumAfter_17, 0))));

        succeeded = (C_72 == (MR_Integer) 0);
        if (succeeded)
          *After_12 = (MR_Word) ((MR_Unsigned) 4U);
        else
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *After_12 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (C_72));
          }
      }
      break;
  }
  switch (CanFail_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      Result_18 = (MR_Integer) 1;
      break;
    case (MR_Integer) 1:
      {
        MR_Word MaybeSum_73;
        MR_Word Var_76;
        MR_Box conv1_MaybeSum_73;

        {
          Var_76 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_76, 0) = ((MR_Box) (&coverage_scalar_common_5[0]));
          MR_hl_field(0, Var_76, 1) = ((MR_Box) (coverage__switch_annotate_coverage_7_p_0_1));
          MR_hl_field(0, Var_76, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_76, 3) = ((MR_Box) (*STATE_VARIABLE_Array_20));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&coverage_scalar_common_1[0]), (MR_Word) (&coverage_scalar_common_1[2]), Var_76, Cases_8, ((MR_Box) (MR_mkword(1, &coverage_scalar_common_3[0]))), &conv1_MaybeSum_73);
        MaybeSum_73 = ((MR_Word) (conv1_MaybeSum_73));
        if ((MaybeSum_73 == (MR_Word) ((MR_Unsigned) 0U)))
          Result_18 = (MR_Integer) 1;
        else
        {
          MR_Integer SumA_74 = ((MR_Integer) ((MR_hl_field(1, MaybeSum_73, 0))));

          switch (MR_tag((MR_Word) Before_11)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(Before_11)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  Result_18 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                  {
                    succeeded = (SumA_74 == (MR_Integer) 0);
                    if (succeeded)
                      Result_18 = (MR_Integer) 1;
                    else
                      Result_18 = (MR_Integer) 0;
                  }
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer SumB_75 = ((MR_Integer) ((MR_hl_field(1, Before_11, 0))));

                succeeded = (SumA_74 == SumB_75);
                if (succeeded)
                  Result_18 = (MR_Integer) 1;
                else
                  Result_18 = (MR_Integer) 0;
              }
              break;
          }
        }
      }
      break;
  }
  switch (Result_18) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_String Var_33;
        MR_String Var_39;
        MR_String Var_42;
        MR_String Var_45;
        MR_String Var_48;
        MR_String Var_61;
        MR_String Var_63;
        MR_String Var_64;
        MR_String Var_66;
        MR_String Var_67;
        MR_String Var_69;
        MR_String Var_70;

        Var_39 = mercury__string__string_1_f_0((MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_switch_can_fail_rep_0), ((MR_Box) (CanFail_10)));
        Var_42 = mercury__string__string_1_f_0((MR_Word) (&coverage_scalar_common_1[1]), ((MR_Box) (Cases_8)));
        Var_45 = mercury__string__string_1_f_0((MR_Word) (&coverage__coverage__type_ctor_info_coverage_before_0), ((MR_Box) (Before_11)));
        Var_48 = mercury__string__string_1_f_0((MR_Word) (&coverage__coverage__type_ctor_info_coverage_after_0), ((MR_Box) (*After_12)));
        Var_61 = mercury__string__f_43_43_2_f_0(Var_48, (MR_String) "\n");
        Var_63 = mercury__string__f_43_43_2_f_0((MR_String) ", After: ", Var_61);
        Var_64 = mercury__string__f_43_43_2_f_0(Var_45, Var_63);
        Var_66 = mercury__string__f_43_43_2_f_0((MR_String) "\n\tBefore: ", Var_64);
        Var_67 = mercury__string__f_43_43_2_f_0(Var_42, Var_66);
        Var_69 = mercury__string__f_43_43_2_f_0((MR_String) "\n\tCases: ", Var_67);
        Var_70 = mercury__string__f_43_43_2_f_0(Var_39, Var_69);
        Var_33 = mercury__string__f_43_43_2_f_0((MR_String) "check_switch_coverage failed\n\tCanFail: ", Var_70);
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140coverage.switch_annotate_coverage\'/7", Var_33);
          return;
        }
      }
      break;
    case (MR_Integer) 1:
      {
      }
      break;
  }
}

static MR_bool MR_CALL 
coverage__goal_annotate_coverage_6_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = coverage__IntroducedFrom__pred__goal_annotate_coverage__335__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static void MR_CALL 
coverage__goal_annotate_coverage_6_p_0(
  MR_Word TypeInfo_for_Callee_163,
  MR_Word Goal_7,
  MR_Word Info_8,
  MR_Word Before_9,
  MR_Word * After_10,
  MR_Word STATE_VARIABLE_Array_0_76,
  MR_Word * STATE_VARIABLE_Array_77)
{
  MR_bool succeeded;
  MR_Word GoalExpr_12 = ((MR_Word) ((MR_hl_field(0, Goal_7, 0))));
  MR_Word Detism_13 = ((MR_Unsigned) ((MR_hl_field(0, Goal_7, 1))) & (MR_Integer) 7);
  MR_Word GoalId_14 = ((MR_Word) ((MR_hl_field(0, Goal_7, 2))));
  MR_Word RevGoalPath_15;
  MR_Word After0_17;
  MR_Word GoalCoverage_73;
  MR_Word Var_78 = ((MR_Word) ((MR_hl_field(0, Info_8, 4))));
  MR_Word STATE_VARIABLE_Array_1_79;
  MR_Box conv0_RevGoalPath_15;
  MR_Word CoveragePoint_69;
  MR_Word Var_96;
  MR_Box conv2_CoveragePoint_69;

  conv0_RevGoalPath_15 = mercury__map__lookup_2_f_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0), Var_78, ((MR_Box) (GoalId_14)));
  RevGoalPath_15 = ((MR_Word) (conv0_RevGoalPath_15));
  switch (MR_tag((MR_Word) GoalExpr_12)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Conjs_16 = ((MR_Word) ((MR_hl_field(0, GoalExpr_12, 0))));

        coverage__conj_annotate_coverage_6_p_0(TypeInfo_for_Callee_163, Conjs_16, Info_8, Before_9, &After0_17, STATE_VARIABLE_Array_0_76, &STATE_VARIABLE_Array_1_79);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Disjs_18 = ((MR_Word) ((MR_hl_field(1, GoalExpr_12, 0))));
        MR_Word SumAfterDisjuncts_20;
        MR_Word Solutions_19;

        Solutions_19 = mdbcomp__program_representation__detism_get_solutions_1_f_0(Detism_13);
        coverage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_105_115_106_95_97_110_110_111_116_97_116_101_95_99_111_118_101_114_97_103_101_95_95_91_52_93_95_48_8_p_0(TypeInfo_for_Callee_163, Disjs_18, Info_8, Before_9, (MR_Word) ((MR_Unsigned) 4U), &SumAfterDisjuncts_20, STATE_VARIABLE_Array_0_76, &STATE_VARIABLE_Array_1_79);
        coverage__after_count_sum_after_count_2_p_0(SumAfterDisjuncts_20, &After0_17);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word CanFail_22 = ((MR_Unsigned) ((MR_hl_field(2, GoalExpr_12, 1))) & (MR_Integer) 1);
        MR_Word Cases_23 = ((MR_Word) ((MR_hl_field(2, GoalExpr_12, 2))));

        coverage__switch_annotate_coverage_7_p_0(TypeInfo_for_Callee_163, Cases_23, Info_8, CanFail_22, Before_9, &After0_17, STATE_VARIABLE_Array_0_76, &STATE_VARIABLE_Array_1_79);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_12, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Cond_24 = ((MR_Word) ((MR_hl_field(3, GoalExpr_12, 1))));
            MR_Word Then_25 = ((MR_Word) ((MR_hl_field(3, GoalExpr_12, 2))));
            MR_Word Else_26 = ((MR_Word) ((MR_hl_field(3, GoalExpr_12, 3))));

            coverage__ite_annotate_coverage_9_p_0(TypeInfo_for_Callee_163, Cond_24, Then_25, Else_26, Info_8, RevGoalPath_15, Before_9, &After0_17, STATE_VARIABLE_Array_0_76, &STATE_VARIABLE_Array_1_79);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word NegGoal_27 = ((MR_Word) ((MR_hl_field(3, GoalExpr_12, 1))));

            coverage__negation_annotate_coverage_6_p_0(TypeInfo_for_Callee_163, NegGoal_27, Info_8, Before_9, &After0_17, STATE_VARIABLE_Array_0_76, &STATE_VARIABLE_Array_1_79);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ScopedGoal_28 = ((MR_Word) ((MR_hl_field(3, GoalExpr_12, 1))));
            MR_Word MaybeCut_29 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr_12, 2))) & (MR_Integer) 1);

            coverage__scope_annotate_coverage_7_p_0(TypeInfo_for_Callee_163, ScopedGoal_28, Info_8, MaybeCut_29, Before_9, &After0_17, STATE_VARIABLE_Array_0_76, &STATE_VARIABLE_Array_1_79);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word AtomicGoal_33 = ((MR_Word) ((MR_hl_field(3, GoalExpr_12, 4))));

            switch (MR_tag((MR_Word) AtomicGoal_33)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                coverage__propagate_detism_coverage_3_p_0(Detism_13, Before_9, &After0_17);
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, AtomicGoal_33, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                  case (MR_Integer) 4:
                  case (MR_Integer) 8:
                  case (MR_Integer) 9:
                    coverage__propagate_detism_coverage_3_p_0(Detism_13, Before_9, &After0_17);
                    break;
                  case (MR_Integer) 5:
                  case (MR_Integer) 6:
                  case (MR_Integer) 7:
                    {
                      MR_Word Cost_42;
                      MR_Word TypeInfo_167_167;
                      MR_Word Var_86 = ((MR_Word) ((MR_hl_field(0, Info_8, 1))));
                      MR_Box conv1_Cost_42;

                      {
                        TypeInfo_167_167 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, TypeInfo_167_167, 0) = ((MR_Box) (&analysis_utils__analysis_utils__type_ctor_info_cost_and_callees_1));
                        MR_hl_field(0, TypeInfo_167_167, 1) = ((MR_Box) (TypeInfo_for_Callee_163));
                      }
                      succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0), TypeInfo_167_167, Var_86, ((MR_Box) (RevGoalPath_15)), &conv1_Cost_42);
                      if (succeeded)
                      {
                        Cost_42 = ((MR_Word) (conv1_Cost_42));
                        succeeded = MR_TRUE;
                      }
                      if (succeeded)
                      {
                        MR_Integer Calls_43;
                        MR_Integer Exits_44;
                        MR_Float Var_87;
                        MR_Word Var_88 = ((MR_Word) ((MR_hl_field(0, Cost_42, 0))));
                        MR_Word Var_89;
                        MR_Word Var_91;

                        Var_87 = measurements__cs_cost_get_calls_1_f_0(Var_88);
                        Calls_43 = mercury__float__round_to_int_1_f_0(Var_87);
                        Exits_44 = ((MR_Integer) ((MR_hl_field(0, Cost_42, 1))));
                        Var_91 = coverage__before_coverage_1_f_0(Calls_43);
                        {
                          Var_89 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(0, Var_89, 0) = ((MR_Box) (&coverage_scalar_common_4[1]));
                          MR_hl_field(0, Var_89, 1) = ((MR_Box) (coverage__goal_annotate_coverage_6_p_0_1));
                          MR_hl_field(0, Var_89, 2) = ((MR_Box) ((MR_Integer) 2));
                          MR_hl_field(0, Var_89, 3) = ((MR_Box) (Before_9));
                          MR_hl_field(0, Var_89, 4) = ((MR_Box) (Var_91));
                        }
                        mercury__require__require_2_p_0(Var_89, (MR_String) "Coverage before call doesn\'t match calls port on call site");
                        After0_17 = coverage__after_coverage_1_f_0(Exits_44);
                      }
                      else
                      {
                        MR_String Var_93;
                        MR_String Var_95;

                        Var_95 = mdbcomp__goal_path__rev_goal_path_to_string_1_f_0(RevGoalPath_15);
                        Var_93 = mercury__string__f_43_43_2_f_0((MR_String) "Couldn\'t look up call site for port counts GP: ", Var_95);
                        {
                          mercury__require__unexpected_2_p_0((MR_String) "predicate \140coverage.goal_annotate_coverage\'/6", Var_93);
                          return;
                        }
                      }
                    }
                    break;
                }
                break;
            }
            STATE_VARIABLE_Array_1_79 = STATE_VARIABLE_Array_0_76;
          }
          break;
      }
      break;
  }
  Var_96 = ((MR_Word) ((MR_hl_field(0, Info_8, 2))));
  succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0), (MR_Word) (&coverage__coverage__type_ctor_info_coverage_point_0), Var_96, ((MR_Box) (RevGoalPath_15)), &conv2_CoveragePoint_69);
  if (succeeded)
  {
    CoveragePoint_69 = ((MR_Word) (conv2_CoveragePoint_69));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Integer CoverageAfterCount_70 = ((MR_Integer) ((MR_hl_field(0, CoveragePoint_69, 0))));
    MR_Word Var_97;

    Var_97 = coverage__after_coverage_1_f_0(CoverageAfterCount_70);
    coverage__after_count_from_either_source_3_p_0(Var_97, After0_17, After_10);
  }
  else
    *After_10 = After0_17;
  GoalCoverage_73 = coverage__construct_before_after_coverage_2_f_0(Before_9, *After_10);
  mdbcomp__goal_path__update_goal_attribute_4_p_0((MR_Word) (&coverage__coverage__type_ctor_info_coverage_info_0), GoalId_14, ((MR_Box) (GoalCoverage_73)), STATE_VARIABLE_Array_1_79, STATE_VARIABLE_Array_77);
  succeeded = coverage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_99_111_118_101_114_97_103_101_95_99_111_109_112_108_101_116_101_95_95_91_49_44_32_51_93_95_48_2_p_0(GoalCoverage_73);
  if (!(succeeded))
  {
    MR_String Var_116;
    MR_String Var_122;
    MR_String Var_125;
    MR_String Var_128;
    MR_Word Var_129;
    MR_String Var_185;
    MR_String Var_187;
    MR_String Var_188;
    MR_String Var_190;
    MR_String Var_191;

    Var_122 = mercury__string__string_1_f_0((MR_Word) (&coverage__coverage__type_ctor_info_coverage_info_0), ((MR_Box) (GoalCoverage_73)));
    Var_125 = mdbcomp__goal_path__rev_goal_path_to_string_1_f_0(RevGoalPath_15);
    Var_129 = ((MR_Word) ((MR_hl_field(0, Info_8, 0))));
    Var_128 = mercury__string__string_1_f_0((MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0), ((MR_Box) (Var_129)));
    Var_185 = mercury__string__f_43_43_2_f_0(Var_128, (MR_String) "\n");
    Var_187 = mercury__string__f_43_43_2_f_0((MR_String) "\n\tProc: ", Var_185);
    Var_188 = mercury__string__f_43_43_2_f_0(Var_125, Var_187);
    Var_190 = mercury__string__f_43_43_2_f_0((MR_String) "\n\tGoalPath: ", Var_188);
    Var_191 = mercury__string__f_43_43_2_f_0(Var_122, Var_190);
    Var_116 = mercury__string__f_43_43_2_f_0((MR_String) "check_coverage_complete failed\n\tCoverage: ", Var_191);
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140coverage.goal_annotate_coverage\'/6", Var_116);
      return;
    }
  }
  succeeded = coverage__check_coverage_regarding_detism_2_p_0(GoalCoverage_73, Detism_13);
  if (!(succeeded))
  {
    MR_String Var_132;
    MR_String Var_136;
    MR_String Var_139;
    MR_String Var_194;
    MR_String Var_195;

    Var_136 = mercury__string__string_1_f_0((MR_Word) (&coverage__coverage__type_ctor_info_coverage_info_0), ((MR_Box) (GoalCoverage_73)));
    Var_139 = mercury__string__string_1_f_0((MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_detism_rep_0), ((MR_Box) (Detism_13)));
    Var_194 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_139);
    Var_195 = mercury__string__f_43_43_2_f_0(Var_136, Var_194);
    Var_132 = mercury__string__f_43_43_2_f_0((MR_String) "check_coverage_regarding_detism failed: ", Var_195);
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140coverage.goal_annotate_coverage\'/6", Var_132);
      return;
    }
  }
}

static MR_bool MR_CALL 
coverage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_99_111_118_101_114_97_103_101_95_99_111_109_112_108_101_116_101_95_95_91_49_44_32_51_93_95_48_2_p_0(
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Integer) 0:
      switch (MR_unmkbody(HeadVar__1_1)) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 1:
          succeeded = MR_TRUE;
          break;
      }
      break;
    case (MR_Integer) 1:
      succeeded = MR_TRUE;
      break;
    case (MR_Integer) 2:
      succeeded = MR_TRUE;
      break;
  }
  return succeeded;
}

static void MR_CALL 
coverage__after_count_sum_after_count_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 1:
          *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 4U);
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Integer C_3 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 0))));

        succeeded = (C_3 == (MR_Integer) 0);
        if (succeeded)
          *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 4U);
        else
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__2_2 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (C_3));
          }
      }
      break;
  }
}

static MR_bool MR_CALL 
coverage__after_count_from_either_source_3_p_0_3(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = coverage__IntroducedFrom__pred__after_count_from_either_source__1161__1_2_p_0(((MR_Integer) ((MR_hl_field(0, closure, 3)))), ((MR_Integer) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
coverage__after_count_from_either_source_3_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = coverage__IntroducedFrom__pred__after_count_from_either_source__1150__1_2_p_0(((MR_Integer) ((MR_hl_field(0, closure, 3)))), ((MR_Integer) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
coverage__after_count_from_either_source_3_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = coverage__IntroducedFrom__pred__after_count_from_either_source__1145__1_2_p_0(((MR_Integer) ((MR_hl_field(0, closure, 3)))), ((MR_Integer) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static void MR_CALL 
coverage__after_count_from_either_source_3_p_0(
  MR_Word AfterA_4,
  MR_Word AfterB_5,
  MR_Word * After_6)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) AfterA_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(AfterA_4)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_tag((MR_Word) AfterB_5)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(AfterB_5)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *After_6 = (MR_Word) ((MR_Unsigned) 0U);
                  break;
                case (MR_Integer) 1:
                  *After_6 = (MR_Word) ((MR_Unsigned) 4U);
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer AfterCount_7 = ((MR_Integer) ((MR_hl_field(1, AfterB_5, 0))));

                succeeded = (AfterCount_7 == (MR_Integer) 0);
                if (succeeded)
                  *After_6 = (MR_Word) ((MR_Unsigned) 4U);
                else
                  *After_6 = AfterB_5;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          switch (MR_tag((MR_Word) AfterB_5)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(AfterB_5)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *After_6 = (MR_Word) ((MR_Unsigned) 4U);
                  break;
                case (MR_Integer) 1:
                  *After_6 = (MR_Word) ((MR_Unsigned) 4U);
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_15;
                MR_Integer AfterCountB_18 = ((MR_Integer) ((MR_hl_field(1, AfterB_5, 0))));

                {
                  Var_15 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_15, 0) = ((MR_Box) (&coverage_scalar_common_4[0]));
                  MR_hl_field(0, Var_15, 1) = ((MR_Box) (coverage__after_count_from_either_source_3_p_0_3));
                  MR_hl_field(0, Var_15, 2) = ((MR_Box) ((MR_Integer) 2));
                  MR_hl_field(0, Var_15, 3) = ((MR_Box) ((MR_Integer) 0));
                  MR_hl_field(0, Var_15, 4) = ((MR_Box) (AfterCountB_18));
                }
                mercury__require__require_2_p_0(Var_15, (MR_String) "after_count_from_either_source: mismatch");
                *After_6 = (MR_Word) ((MR_Unsigned) 4U);
              }
              break;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Integer AfterCountA_8 = ((MR_Integer) ((MR_hl_field(1, AfterA_4, 0))));

        switch (MR_tag((MR_Word) AfterB_5)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(AfterB_5)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  succeeded = (AfterCountA_8 == (MR_Integer) 0);
                  if (succeeded)
                    *After_6 = (MR_Word) ((MR_Unsigned) 4U);
                  else
                    *After_6 = AfterA_4;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Var_12;

                  {
                    Var_12 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_12, 0) = ((MR_Box) (&coverage_scalar_common_4[0]));
                    MR_hl_field(0, Var_12, 1) = ((MR_Box) (coverage__after_count_from_either_source_3_p_0_2));
                    MR_hl_field(0, Var_12, 2) = ((MR_Box) ((MR_Integer) 2));
                    MR_hl_field(0, Var_12, 3) = ((MR_Box) (AfterCountA_8));
                    MR_hl_field(0, Var_12, 4) = ((MR_Box) ((MR_Integer) 0));
                  }
                  mercury__require__require_2_p_0(Var_12, (MR_String) "after_count_from_either_source: mismatch");
                  *After_6 = (MR_Word) ((MR_Unsigned) 4U);
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer AfterCountB_9 = ((MR_Integer) ((MR_hl_field(1, AfterB_5, 0))));
              MR_Word Var_10;

              {
                Var_10 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_10, 0) = ((MR_Box) (&coverage_scalar_common_4[0]));
                MR_hl_field(0, Var_10, 1) = ((MR_Box) (coverage__after_count_from_either_source_3_p_0_1));
                MR_hl_field(0, Var_10, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_10, 3) = ((MR_Box) (AfterCountA_8));
                MR_hl_field(0, Var_10, 4) = ((MR_Box) (AfterCountB_9));
              }
              mercury__require__require_2_p_0(Var_10, (MR_String) "after_count_from_either_source: mismatch");
              succeeded = (AfterCountA_8 == (MR_Integer) 0);
              if (succeeded)
                *After_6 = (MR_Word) ((MR_Unsigned) 4U);
              else
                *After_6 = AfterA_4;
            }
            break;
        }
      }
      break;
  }
}

static void MR_CALL 
coverage__propagate_detism_coverage_3_p_0(
  MR_Word Detism_4,
  MR_Word Before_5,
  MR_Word * After_6)
{
  MR_bool succeeded;

  switch (Detism_4) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 5:
    case (MR_Integer) 0:
      switch (MR_tag((MR_Word) Before_5)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(Before_5)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *After_6 = (MR_Word) ((MR_Unsigned) 0U);
              break;
            case (MR_Integer) 1:
              *After_6 = (MR_Word) ((MR_Unsigned) 4U);
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer Count_7 = ((MR_Integer) ((MR_hl_field(1, Before_5, 0))));

            succeeded = (Count_7 == (MR_Integer) 0);
            if (succeeded)
              *After_6 = (MR_Word) ((MR_Unsigned) 4U);
            else
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *After_6 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Count_7));
              }
          }
          break;
      }
      break;
    case (MR_Integer) 4:
    case (MR_Integer) 3:
    case (MR_Integer) 2:
    case (MR_Integer) 1:
      *After_6 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 6:
    case (MR_Integer) 7:
      *After_6 = (MR_Word) ((MR_Unsigned) 4U);
      break;
  }
}

static MR_bool MR_CALL 
coverage__check_coverage_regarding_detism_2_p_0(
  MR_Word Coverage_3,
  MR_Word Detism_4)
{
  MR_bool succeeded;

  switch (Detism_4) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 5:
    case (MR_Integer) 0:
      switch (MR_tag((MR_Word) Coverage_3)) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 2:
          {
            MR_Integer Entry_7 = ((MR_Integer) ((MR_hl_field(2, Coverage_3, 0))));
            MR_Integer Exit_8 = ((MR_Integer) ((MR_hl_field(2, Coverage_3, 1))));

            succeeded = (Entry_7 >= Exit_8);
          }
          break;
      }
      break;
    case (MR_Integer) 4:
    case (MR_Integer) 1:
      switch (MR_tag((MR_Word) Coverage_3)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
        case (MR_Integer) 3:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 2:
          {
            MR_Integer Entry_21 = ((MR_Integer) ((MR_hl_field(2, Coverage_3, 0))));
            MR_Integer Exit_22 = ((MR_Integer) ((MR_hl_field(2, Coverage_3, 1))));

            succeeded = (Entry_21 >= Exit_22);
          }
          break;
      }
      break;
    case (MR_Integer) 6:
    case (MR_Integer) 7:
      switch (MR_tag((MR_Word) Coverage_3)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(Coverage_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              succeeded = MR_TRUE;
              break;
            case (MR_Integer) 1:
              succeeded = MR_TRUE;
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer Exit_25 = ((MR_Integer) ((MR_hl_field(1, Coverage_3, 0))));

            succeeded = (Exit_25 == (MR_Integer) 0);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer Exit_23 = ((MR_Integer) ((MR_hl_field(2, Coverage_3, 1))));

            succeeded = (Exit_23 == (MR_Integer) 0);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, Coverage_3, 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              succeeded = MR_TRUE;
              break;
            case (MR_Integer) 1:
              {
                MR_Integer Exit_24 = ((MR_Integer) ((MR_hl_field(3, Coverage_3, 1))));

                succeeded = (Exit_24 == (MR_Integer) 0);
              }
              break;
          }
          break;
      }
      break;
    case (MR_Integer) 3:
      succeeded = MR_TRUE;
      break;
    case (MR_Integer) 2:
      succeeded = MR_TRUE;
      break;
  }
  return succeeded;
}

static MR_bool MR_CALL 
coverage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_116_101_95_99_111_118_101_114_97_103_101_95_95_91_55_93_95_48_9_p_0(
  MR_Word Before_10,
  MR_Word After_11,
  MR_Word BeforeCond_12,
  MR_Word AfterCond_13,
  MR_Word BeforeThen_14,
  MR_Word AfterThen_15,
  MR_Word AfterElse_17,
  MR_Word CondDetism_18)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Before_10)) == (MR_Integer) 1);
  MR_Integer BeforeExecCount_19;
  MR_Integer BeforeCondExecCount_20;
  MR_Integer AfterExecCount_21;
  MR_Integer AfterThenExecCount_22;
  MR_Integer AfterElseExecCount_23;
  MR_Integer AfterCondExecCount_24;
  MR_Integer BeforeKnownExecCount_25;
  MR_Integer AfterCondExecCount2_26;

  if (succeeded)
  {
    BeforeExecCount_19 = ((MR_Integer) ((MR_hl_field(1, Before_10, 0))));
    succeeded = ((MR_tag((MR_Word) BeforeCond_12)) == (MR_Integer) 1);
    if (succeeded)
      BeforeCondExecCount_20 = ((MR_Integer) ((MR_hl_field(1, BeforeCond_12, 0))));
  }
  if (succeeded)
    succeeded = (BeforeExecCount_19 == BeforeCondExecCount_20);
  else
    succeeded = MR_TRUE;
  if (succeeded)
  {
    succeeded = ((MR_tag((MR_Word) After_11)) == (MR_Integer) 1);
    if (succeeded)
    {
      AfterExecCount_21 = ((MR_Integer) ((MR_hl_field(1, After_11, 0))));
      succeeded = ((MR_tag((MR_Word) AfterThen_15)) == (MR_Integer) 1);
      if (succeeded)
      {
        AfterThenExecCount_22 = ((MR_Integer) ((MR_hl_field(1, AfterThen_15, 0))));
        succeeded = ((MR_tag((MR_Word) AfterElse_17)) == (MR_Integer) 1);
        if (succeeded)
          AfterElseExecCount_23 = ((MR_Integer) ((MR_hl_field(1, AfterElse_17, 0))));
      }
    }
    if (succeeded)
    {
      MR_Integer Var_28 = (MR_Integer) ((MR_Unsigned) AfterThenExecCount_22 + (MR_Unsigned) AfterElseExecCount_23);

      succeeded = (AfterExecCount_21 == Var_28);
    }
    else
      succeeded = MR_TRUE;
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) AfterCond_13)) == (MR_Integer) 1);
      if (succeeded)
      {
        AfterCondExecCount_24 = ((MR_Integer) ((MR_hl_field(1, AfterCond_13, 0))));
        succeeded = ((MR_tag((MR_Word) BeforeThen_14)) == (MR_Integer) 1);
        if (succeeded)
          BeforeKnownExecCount_25 = ((MR_Integer) ((MR_hl_field(1, BeforeThen_14, 0))));
      }
      if (succeeded)
        succeeded = (AfterCondExecCount_24 == BeforeKnownExecCount_25);
      else
        succeeded = MR_TRUE;
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) AfterCond_13)) == (MR_Integer) 1);
        if (succeeded)
        {
          AfterCondExecCount2_26 = ((MR_Integer) ((MR_hl_field(1, AfterCond_13, 0))));
          {
            MR_Word NumSolutions_27;

            NumSolutions_27 = mdbcomp__program_representation__detism_get_solutions_1_f_0(CondDetism_18);
            switch (NumSolutions_27) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 2:
                succeeded = MR_TRUE;
                break;
              case (MR_Integer) 1:
                succeeded = MR_TRUE;
                break;
              case (MR_Integer) 0:
                succeeded = (AfterCondExecCount2_26 == (MR_Integer) 0);
                break;
            }
          }
        }
        else
          succeeded = MR_TRUE;
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
coverage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_115_116_97_114_116_95_99_111_118_101_114_97_103_101_95_95_91_49_93_95_48_3_p_0(
  MR_Word Info_4,
  MR_Word RevGoalPath_5,
  MR_Word * Before_6)
{
  MR_bool succeeded;
  MR_Word CP_7;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, Info_4, 3))));
  MR_Box conv0_CP_7;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0), (MR_Word) (&coverage__coverage__type_ctor_info_coverage_point_0), Var_11, ((MR_Box) (RevGoalPath_5)), &conv0_CP_7);
  if (succeeded)
  {
    CP_7 = ((MR_Word) (conv0_CP_7));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Integer ExecCount_8 = ((MR_Integer) ((MR_hl_field(0, CP_7, 0))));

    succeeded = (ExecCount_8 == (MR_Integer) 0);
    if (succeeded)
      *Before_6 = (MR_Word) ((MR_Unsigned) 4U);
    else
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Before_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (ExecCount_8));
      }
  }
  else
    *Before_6 = (MR_Word) ((MR_Unsigned) 0U);
}

static MR_Word MR_CALL 
coverage__before_coverage_1_f_0(
  MR_Integer Count_3)
{
  MR_bool succeeded = (Count_3 == (MR_Integer) 0);
  MR_Word HeadVar__2_2;

  if (succeeded)
    HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 4U);
  else
    {
      HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Count_3));
    }
  return HeadVar__2_2;
}

static MR_Word MR_CALL 
coverage__after_coverage_1_f_0(
  MR_Integer Count_3)
{
  MR_bool succeeded = (Count_3 == (MR_Integer) 0);
  MR_Word HeadVar__2_2;

  if (succeeded)
    HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 4U);
  else
    {
      HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Count_3));
    }
  return HeadVar__2_2;
}

static void MR_CALL 
coverage__after_to_before_coverage_2_p_0(
  MR_Word After_3,
  MR_Word * Before_4)
{
  switch (MR_tag((MR_Word) After_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(After_3)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *Before_4 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 1:
          *Before_4 = (MR_Word) ((MR_Unsigned) 4U);
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Integer ExecCount_5 = ((MR_Integer) ((MR_hl_field(1, After_3, 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Before_4 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (ExecCount_5));
        }
      }
      break;
  }
}

static MR_Word MR_CALL 
coverage__construct_before_after_coverage_2_f_0(
  MR_Word Before_4,
  MR_Word After_5)
{
  MR_bool succeeded;
  MR_Word Coverage_6;

  switch (MR_tag((MR_Word) Before_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Before_4)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_tag((MR_Word) After_5)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(After_5)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  Coverage_6 = (MR_Word) ((MR_Unsigned) 0U);
                  break;
                case (MR_Integer) 1:
                  Coverage_6 = (MR_Word) (MR_mkword(3, &coverage_scalar_common_1[3]));
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer AfterExecCount_7 = ((MR_Integer) ((MR_hl_field(1, After_5, 0))));

                {
                  Coverage_6 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Coverage_6, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(3, Coverage_6, 1) = ((MR_Box) (AfterExecCount_7));
                }
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          switch (MR_tag((MR_Word) After_5)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(After_5)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  Coverage_6 = (MR_Word) (MR_mkword(3, &coverage_scalar_common_1[4]));
                  break;
                case (MR_Integer) 1:
                  Coverage_6 = (MR_Word) ((MR_Unsigned) 4U);
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer AfterExecCount_13 = ((MR_Integer) ((MR_hl_field(1, After_5, 0))));

                {
                  Coverage_6 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(2, Coverage_6, 0) = ((MR_Box) ((MR_Integer) 0));
                  MR_hl_field(2, Coverage_6, 1) = ((MR_Box) (AfterExecCount_13));
                }
              }
              break;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Integer BeforeExecCount_8 = ((MR_Integer) ((MR_hl_field(1, Before_4, 0))));

        switch (MR_tag((MR_Word) After_5)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(After_5)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  Coverage_6 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Coverage_6, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(3, Coverage_6, 1) = ((MR_Box) (BeforeExecCount_8));
                }
                break;
              case (MR_Integer) 1:
                {
                  Coverage_6 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(2, Coverage_6, 0) = ((MR_Box) (BeforeExecCount_8));
                  MR_hl_field(2, Coverage_6, 1) = ((MR_Box) ((MR_Integer) 0));
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer AfterExecCount_16 = ((MR_Integer) ((MR_hl_field(1, After_5, 0))));

              succeeded = (BeforeExecCount_8 == AfterExecCount_16);
              if (succeeded)
                {
                  Coverage_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Coverage_6, 0) = ((MR_Box) (BeforeExecCount_8));
                }
              else
                {
                  Coverage_6 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(2, Coverage_6, 0) = ((MR_Box) (BeforeExecCount_8));
                  MR_hl_field(2, Coverage_6, 1) = ((MR_Box) (AfterExecCount_16));
                }
            }
            break;
        }
      }
      break;
  }
  return Coverage_6;
}

void MR_CALL 
coverage__coverage_point_arrays_to_list_3_p_0(
  MR_ArrayPtr StaticArray_4,
  MR_ArrayPtr DynamicArray_5,
  MR_Word * CoveragePoints_6)
{
  MR_bool succeeded;
  MR_Integer Min_7;
  MR_Integer Max_8;
  MR_Integer Var_14;
  MR_Integer Var_15;

  mercury__array__bounds_3_p_0((MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0), (MR_ArrayPtr) (StaticArray_4), &Min_7, &Max_8);
  mercury__array__bounds_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_ArrayPtr) (DynamicArray_5), &Var_14, &Var_15);
  succeeded = (Min_7 == Var_14);
  if (succeeded)
    succeeded = (Max_8 == Var_15);
  if (!(succeeded))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140coverage.coverage_point_arrays_to_list\'/3", (MR_String) "bounds do not match");
      return;
    }
  coverage__coverage_point_arrays_to_list_2_6_p_0(Min_7, Max_8, StaticArray_4, DynamicArray_5, (MR_Word) ((MR_Unsigned) 0U), CoveragePoints_6);
}

static void MR_CALL 
coverage__coverage_point_arrays_to_list_2_6_p_0(
  MR_Integer Num_7,
  MR_Integer Max_8,
  MR_ArrayPtr StaticArray_9,
  MR_ArrayPtr DynamicArray_10,
  MR_Word STATE_VARIABLE_CoveragePoints_0_16,
  MR_Word * STATE_VARIABLE_CoveragePoints_17)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Num_7 <= Max_8);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Word GoalPath_12;
      MR_Word CPType_13;
      MR_Integer Count_14;
      MR_Word CP_15;
      MR_Word Var_18;
      MR_Word STATE_VARIABLE_CoveragePoints_1_19;
      MR_Integer Var_20;
      MR_Box conv0_Var_18;
      MR_Box conv1_Count_14;
      MR_Integer next_value_of_Num_7;
      MR_Word next_value_of_STATE_VARIABLE_CoveragePoints_0_16;

      mercury__array__lookup_3_p_0((MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0), (MR_ArrayPtr) (StaticArray_9), Num_7, &conv0_Var_18);
      Var_18 = ((MR_Word) (conv0_Var_18));
      GoalPath_12 = ((MR_Word) ((MR_hl_field(0, Var_18, 0))));
      CPType_13 = ((MR_Word) ((MR_hl_field(0, Var_18, 1))));
      mercury__array__lookup_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_ArrayPtr) (DynamicArray_10), Num_7, &conv1_Count_14);
      Count_14 = ((MR_Integer) (conv1_Count_14));
      {
        CP_15 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, CP_15, 0) = ((MR_Box) (Count_14));
        MR_hl_field(0, CP_15, 1) = ((MR_Box) (GoalPath_12));
        MR_hl_field(0, CP_15, 2) = ((MR_Box) (CPType_13));
      }
      {
        STATE_VARIABLE_CoveragePoints_1_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_CoveragePoints_1_19, 0) = ((MR_Box) (CP_15));
        MR_hl_field(1, STATE_VARIABLE_CoveragePoints_1_19, 1) = ((MR_Box) (STATE_VARIABLE_CoveragePoints_0_16));
      }
      Var_20 = (MR_Integer) ((MR_Unsigned) Num_7 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_Num_7 = Var_20;
      next_value_of_STATE_VARIABLE_CoveragePoints_0_16 = STATE_VARIABLE_CoveragePoints_1_19;
      Num_7 = next_value_of_Num_7;
      STATE_VARIABLE_CoveragePoints_0_16 = next_value_of_STATE_VARIABLE_CoveragePoints_0_16;
      continue;
    }
    else
      *STATE_VARIABLE_CoveragePoints_17 = STATE_VARIABLE_CoveragePoints_0_16;
    break;
  }
}

void MR_CALL 
coverage__get_coverage_after_det_2_p_0(
  MR_Word Coverage_3,
  MR_Integer * After_4)
{
  MR_bool succeeded;
  MR_Integer AfterPrime_5;

  switch (MR_tag((MR_Word) Coverage_3)) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Integer) 0:
      switch (MR_unmkbody(Coverage_3)) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 1:
          {
            AfterPrime_5 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        AfterPrime_5 = ((MR_Integer) ((MR_hl_field(1, Coverage_3, 0))));
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Integer) 2:
      {
        AfterPrime_5 = ((MR_Integer) ((MR_hl_field(2, Coverage_3, 1))));
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Coverage_3, 0))))) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 1:
          {
            AfterPrime_5 = ((MR_Integer) ((MR_hl_field(3, Coverage_3, 1))));
            succeeded = MR_TRUE;
          }
          break;
      }
      break;
  }
  if (succeeded)
    *After_4 = AfterPrime_5;
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140coverage.complete_coverage_error\'/0", (MR_String) "Expected complete coverage information");
      return;
    }
}

void MR_CALL 
coverage__get_coverage_before_and_after_det_3_p_0(
  MR_Word Coverage_4,
  MR_Integer * Before_5,
  MR_Integer * After_6)
{
  MR_bool succeeded;
  MR_Integer BeforePrime_7;
  MR_Integer AfterPrime_8;

  switch (MR_tag((MR_Word) Coverage_4)) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Integer) 0:
      switch (MR_unmkbody(Coverage_4)) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 1:
          {
            BeforePrime_7 = (MR_Integer) 0;
            AfterPrime_8 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        BeforePrime_7 = ((MR_Integer) ((MR_hl_field(1, Coverage_4, 0))));
        AfterPrime_8 = BeforePrime_7;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Integer) 2:
      {
        BeforePrime_7 = ((MR_Integer) ((MR_hl_field(2, Coverage_4, 0))));
        AfterPrime_8 = ((MR_Integer) ((MR_hl_field(2, Coverage_4, 1))));
        succeeded = MR_TRUE;
      }
      break;
  }
  if (succeeded)
  {
    *Before_5 = BeforePrime_7;
    *After_6 = AfterPrime_8;
  }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140coverage.complete_coverage_error\'/0", (MR_String) "Expected complete coverage information");
      return;
    }
}

void MR_CALL 
coverage__get_coverage_before_det_2_p_0(
  MR_Word Coverage_3,
  MR_Integer * Before_4)
{
  MR_bool succeeded;
  MR_Integer BeforePrime_5;

  switch (MR_tag((MR_Word) Coverage_3)) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Integer) 0:
      switch (MR_unmkbody(Coverage_3)) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 1:
          {
            BeforePrime_5 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        BeforePrime_5 = ((MR_Integer) ((MR_hl_field(1, Coverage_3, 0))));
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Integer) 2:
      {
        BeforePrime_5 = ((MR_Integer) ((MR_hl_field(2, Coverage_3, 0))));
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Coverage_3, 0))))) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 0:
          {
            BeforePrime_5 = ((MR_Integer) ((MR_hl_field(3, Coverage_3, 1))));
            succeeded = MR_TRUE;
          }
          break;
      }
      break;
  }
  if (succeeded)
    *Before_4 = BeforePrime_5;
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140coverage.complete_coverage_error\'/0", (MR_String) "Expected complete coverage information");
      return;
    }
}

MR_bool MR_CALL 
coverage__get_coverage_after_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer * HeadVar__2_2)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Integer) 0:
      switch (MR_unmkbody(HeadVar__1_1)) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 1:
          {
            *HeadVar__2_2 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        *HeadVar__2_2 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 0))));
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Integer) 2:
      {
        *HeadVar__2_2 = ((MR_Integer) ((MR_hl_field(2, HeadVar__1_1, 1))));
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 0))))) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 1:
          {
            *HeadVar__2_2 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 1))));
            succeeded = MR_TRUE;
          }
          break;
      }
      break;
  }
  return succeeded;
}

MR_bool MR_CALL 
coverage__get_coverage_before_and_after_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer * HeadVar__2_2,
  MR_Integer * HeadVar__3_3)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Integer) 0:
      switch (MR_unmkbody(HeadVar__1_1)) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 1:
          {
            *HeadVar__2_2 = (MR_Integer) 0;
            *HeadVar__3_3 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        *HeadVar__2_2 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 0))));
        *HeadVar__3_3 = *HeadVar__2_2;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Integer) 2:
      {
        *HeadVar__2_2 = ((MR_Integer) ((MR_hl_field(2, HeadVar__1_1, 0))));
        *HeadVar__3_3 = ((MR_Integer) ((MR_hl_field(2, HeadVar__1_1, 1))));
        succeeded = MR_TRUE;
      }
      break;
  }
  return succeeded;
}

MR_bool MR_CALL 
coverage__get_coverage_before_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer * HeadVar__2_2)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Integer) 0:
      switch (MR_unmkbody(HeadVar__1_1)) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 1:
          {
            *HeadVar__2_2 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        *HeadVar__2_2 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 0))));
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Integer) 2:
      {
        *HeadVar__2_2 = ((MR_Integer) ((MR_hl_field(2, HeadVar__1_1, 0))));
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 0))))) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 0:
          {
            *HeadVar__2_2 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 1))));
            succeeded = MR_TRUE;
          }
          break;
      }
      break;
  }
  return succeeded;
}

static MR_bool MR_CALL 
coverage____Unify____coverage_after_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = coverage____Unify____coverage_after_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
coverage____Compare____coverage_after_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  coverage____Compare____coverage_after_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
coverage____Unify____coverage_before_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = coverage____Unify____coverage_before_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
coverage____Compare____coverage_before_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  coverage____Compare____coverage_before_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
coverage____Unify____coverage_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = coverage____Unify____coverage_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
coverage____Compare____coverage_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  coverage____Compare____coverage_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
coverage____Unify____coverage_point_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = coverage____Unify____coverage_point_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
coverage____Compare____coverage_point_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  coverage____Compare____coverage_point_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
coverage____Unify____coverage_reference_info_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = coverage____Unify____coverage_reference_info_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
coverage____Compare____coverage_reference_info_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  coverage____Compare____coverage_reference_info_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
coverage____Unify____sum_coverage_after_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = coverage____Unify____sum_coverage_after_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
coverage____Compare____sum_coverage_after_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  coverage____Compare____sum_coverage_after_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
coverage____Unify____sum_coverage_before_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = coverage____Unify____sum_coverage_before_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
coverage____Compare____sum_coverage_before_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  coverage____Compare____sum_coverage_before_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__coverage__init(void)
{
}

void mercury__coverage__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&coverage__coverage__type_ctor_info_coverage_after_0);
  MR_register_type_ctor_info(&coverage__coverage__type_ctor_info_coverage_before_0);
  MR_register_type_ctor_info(&coverage__coverage__type_ctor_info_coverage_info_0);
  MR_register_type_ctor_info(&coverage__coverage__type_ctor_info_coverage_point_0);
  MR_register_type_ctor_info(&coverage__coverage__type_ctor_info_coverage_reference_info_1);
  MR_register_type_ctor_info(&coverage__coverage__type_ctor_info_sum_coverage_after_0);
  MR_register_type_ctor_info(&coverage__coverage__type_ctor_info_sum_coverage_before_0);
}

void mercury__coverage__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__coverage__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module coverage.
