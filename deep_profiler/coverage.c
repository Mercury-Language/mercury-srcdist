/*
** Automatically generated from `coverage.m'
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


/* :- module coverage. */
/* :- implementation. */

/*
INIT mercury__coverage__init
ENDINIT
*/

#include "coverage.mih"


#include "analysis_utils.mih"
#include "exclude.mih"
#include "mdbcomp.mih"
#include "measurement_units.mih"
#include "measurements.mih"
#include "profile.mih"
#include "query.mih"
#include "report.mih"
#include "var_use_analysis.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
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
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




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
coverage__IntroducedFrom__pred__after_count_from_either_source__1152__1_2_p_0(
  MR_Integer coverage__HeadVar__1_12,
  MR_Integer coverage__AfterCountB_18);

static MR_bool MR_CALL 
coverage__IntroducedFrom__pred__after_count_from_either_source__1141__1_2_p_0(
  MR_Integer coverage__AfterCountA_8,
  MR_Integer coverage__HeadVar__2_15);

static MR_bool MR_CALL 
coverage__IntroducedFrom__pred__after_count_from_either_source__1136__1_2_p_0(
  MR_Integer coverage__AfterCountA_8,
  MR_Integer coverage__AfterCountB_9);

static MR_bool MR_CALL 
coverage__IntroducedFrom__pred__goal_annotate_coverage__334__1_2_p_0(
  MR_Word coverage__Before_9,
  MR_Word coverage__HeadVar__2_83);

static MR_bool MR_CALL 
coverage__IntroducedFrom__pred__goal_annotate_with_coverage__254__1_2_p_0(
  MR_Word coverage__After_25,
  MR_Word coverage__HeadVar__2_28);

static void MR_CALL 
coverage____Compare____sum_coverage_before_0_0(
  MR_Word * coverage__HeadVar__1_1,
  MR_Word coverage__HeadVar__2_2,
  MR_Word coverage__HeadVar__3_3);

static MR_bool MR_CALL 
coverage____Unify____sum_coverage_before_0_0(
  MR_Word coverage__HeadVar__1_1,
  MR_Word coverage__HeadVar__2_2);

static void MR_CALL 
coverage____Compare____sum_coverage_after_0_0(
  MR_Word * coverage__HeadVar__1_1,
  MR_Word coverage__HeadVar__2_2,
  MR_Word coverage__HeadVar__3_3);

static MR_bool MR_CALL 
coverage____Unify____sum_coverage_after_0_0(
  MR_Word coverage__HeadVar__1_1,
  MR_Word coverage__HeadVar__2_2);

static void MR_CALL 
coverage____Compare____coverage_reference_info_1_0(
  MR_Word coverage__TypeInfo_for_Callee_20,
  MR_Word * coverage__HeadVar__1_1,
  MR_Word coverage__HeadVar__2_2,
  MR_Word coverage__HeadVar__3_3);

static MR_bool MR_CALL 
coverage____Unify____coverage_reference_info_1_0(
  MR_Word coverage__TypeInfo_for_Callee_15,
  MR_Word coverage__HeadVar__1_1,
  MR_Word coverage__HeadVar__2_2);

static void MR_CALL 
coverage____Compare____coverage_before_0_0(
  MR_Word * coverage__HeadVar__1_1,
  MR_Word coverage__HeadVar__2_2,
  MR_Word coverage__HeadVar__3_3);

static MR_bool MR_CALL 
coverage____Unify____coverage_before_0_0(
  MR_Word coverage__HeadVar__1_1,
  MR_Word coverage__HeadVar__2_2);

static void MR_CALL 
coverage____Compare____coverage_after_0_0(
  MR_Word * coverage__HeadVar__1_1,
  MR_Word coverage__HeadVar__2_2,
  MR_Word coverage__HeadVar__3_3);

static MR_bool MR_CALL 
coverage____Unify____coverage_after_0_0(
  MR_Word coverage__HeadVar__1_1,
  MR_Word coverage__HeadVar__2_2);

static void MR_CALL 
coverage__sum_switch_case_coverage_4_p_0(
  MR_Word coverage__Array_5,
  MR_Word coverage__HeadVar__2_2,
  MR_Word coverage__STATE_VARIABLE_Acc_0_15,
  MR_Word * coverage__STATE_VARIABLE_Acc_16);

static MR_bool MR_CALL 
coverage__goal_annotate_with_coverage_9_p_0_1(
  MR_Box coverage__closure_arg);

static void MR_CALL 
coverage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_105_115_106_95_97_110_110_111_116_97_116_101_95_99_111_118_101_114_97_103_101_95_95_91_52_93_95_48_8_p_0(
  MR_Word coverage__TypeInfo_for_Callee_46,
  MR_Word coverage__HeadVar__1_1,
  MR_Word coverage__Info_2,
  MR_Word coverage__Before0_4,
  MR_Word coverage__STATE_VARIABLE_SumAfter_0_5,
  MR_Word * coverage__STATE_VARIABLE_SumAfter_6,
  MR_Word coverage__STATE_VARIABLE_Array_0_7,
  MR_Word * coverage__STATE_VARIABLE_Array_8);

static void MR_CALL 
coverage__scope_annotate_coverage_7_p_0(
  MR_Word coverage__TypeInfo_for_Callee_18,
  MR_Word coverage__Goal_8,
  MR_Word coverage__Info_9,
  MR_Word coverage__MaybeCut_10,
  MR_Word coverage__Before_11,
  MR_Word * coverage__After_12,
  MR_Word coverage__STATE_VARIABLE_Array_0_15,
  MR_Word * coverage__STATE_VARIABLE_Array_16);

static void MR_CALL 
coverage__negation_annotate_coverage_6_p_0(
  MR_Word coverage__TypeInfo_for_Callee_27,
  MR_Word coverage__Goal_7,
  MR_Word coverage__Info_8,
  MR_Word coverage__Before_9,
  MR_Word * coverage__After_10,
  MR_Word coverage__STATE_VARIABLE_Array_0_14,
  MR_Word * coverage__STATE_VARIABLE_Array_15);

static void MR_CALL 
coverage__ite_annotate_coverage_9_p_0(
  MR_Word coverage__TypeInfo_for_Callee_128,
  MR_Word coverage__Cond_10,
  MR_Word coverage__Then_11,
  MR_Word coverage__Else_12,
  MR_Word coverage__Info_13,
  MR_Word coverage__RevGoalPath_14,
  MR_Word coverage__Before_15,
  MR_Word * coverage__After_16,
  MR_Word coverage__STATE_VARIABLE_Array_0_35,
  MR_Word * coverage__STATE_VARIABLE_Array_36);

static void MR_CALL 
coverage__switch_annotate_coverage_2_10_p_0(
  MR_Word coverage__TypeInfo_for_Callee_60,
  MR_Word coverage__HeadVar__1_1,
  MR_Word coverage__Info_2,
  MR_Word coverage__CanFail_3,
  MR_Word coverage__SwitchBefore_4,
  MR_Word coverage__STATE_VARIABLE_SumBefore_0_5,
  MR_Word * coverage__STATE_VARIABLE_SumBefore_6,
  MR_Word coverage__STATE_VARIABLE_SumAfter_0_7,
  MR_Word * coverage__STATE_VARIABLE_SumAfter_8,
  MR_Word coverage__STATE_VARIABLE_Array_0_9,
  MR_Word * coverage__STATE_VARIABLE_Array_10);

static void MR_CALL 
coverage__switch_annotate_coverage_7_p_0_1(
  MR_Box coverage__closure_arg,
  MR_Box coverage__wrapper_arg_1,
  MR_Box coverage__wrapper_arg_2,
  MR_Box * coverage__wrapper_arg_3);

static void MR_CALL 
coverage__switch_annotate_coverage_7_p_0(
  MR_Word coverage__TypeInfo_for_Callee_49,
  MR_Word coverage__Cases_8,
  MR_Word coverage__Info_9,
  MR_Word coverage__CanFail_10,
  MR_Word coverage__Before_11,
  MR_Word * coverage__After_12,
  MR_Word coverage__STATE_VARIABLE_Array_0_18,
  MR_Word * coverage__STATE_VARIABLE_Array_19);

static void MR_CALL 
coverage__conj_annotate_coverage_6_p_0(
  MR_Word coverage__TypeInfo_for_Callee_25,
  MR_Word coverage__HeadVar__1_1,
  MR_Word coverage__Info_2,
  MR_Word coverage__Before_3,
  MR_Word * coverage__After_4,
  MR_Word coverage__STATE_VARIABLE_Array_0_5,
  MR_Word * coverage__STATE_VARIABLE_Array_6);

static MR_bool MR_CALL 
coverage__goal_annotate_coverage_6_p_0_1(
  MR_Box coverage__closure_arg);

static void MR_CALL 
coverage__goal_annotate_coverage_6_p_0(
  MR_Word coverage__TypeInfo_for_Callee_164,
  MR_Word coverage__Goal_7,
  MR_Word coverage__Info_8,
  MR_Word coverage__Before_9,
  MR_Word * coverage__After_10,
  MR_Word coverage__STATE_VARIABLE_Array_0_75,
  MR_Word * coverage__STATE_VARIABLE_Array_76);

static MR_bool MR_CALL 
coverage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_99_111_118_101_114_97_103_101_95_99_111_109_112_108_101_116_101_95_95_91_49_44_32_51_93_95_48_2_p_0(
  MR_Word coverage__HeadVar__1_1);

static void MR_CALL 
coverage__after_count_sum_after_count_2_p_0(
  MR_Word coverage__HeadVar__1_1,
  MR_Word * coverage__HeadVar__2_2);

static MR_bool MR_CALL 
coverage__after_count_from_either_source_3_p_0_3(
  MR_Box coverage__closure_arg);

static MR_bool MR_CALL 
coverage__after_count_from_either_source_3_p_0_2(
  MR_Box coverage__closure_arg);

static MR_bool MR_CALL 
coverage__after_count_from_either_source_3_p_0_1(
  MR_Box coverage__closure_arg);

static void MR_CALL 
coverage__after_count_from_either_source_3_p_0(
  MR_Word coverage__AfterA_4,
  MR_Word coverage__AfterB_5,
  MR_Word * coverage__After_6);

static void MR_CALL 
coverage__propagate_detism_coverage_3_p_0(
  MR_Word coverage__Detism_4,
  MR_Word coverage__Before_5,
  MR_Word * coverage__After_6);

static MR_bool MR_CALL 
coverage__check_coverage_regarding_detism_2_p_0(
  MR_Word coverage__Coverage_3,
  MR_Word coverage__Detism_4);

static MR_bool MR_CALL 
coverage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_116_101_95_99_111_118_101_114_97_103_101_95_95_91_55_93_95_48_9_p_0(
  MR_Word coverage__Before_10,
  MR_Word coverage__After_11,
  MR_Word coverage__BeforeCond_12,
  MR_Word coverage__AfterCond_13,
  MR_Word coverage__BeforeThen_14,
  MR_Word coverage__AfterThen_15,
  MR_Word coverage__AfterElse_17,
  MR_Word coverage__CondDetism_18);

static void MR_CALL 
coverage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_115_116_97_114_116_95_99_111_118_101_114_97_103_101_95_95_91_49_93_95_48_3_p_0(
  MR_Word coverage__Info_4,
  MR_Word coverage__RevGoalPath_5,
  MR_Word * coverage__Before_6);

static MR_Word MR_CALL 
coverage__before_coverage_1_f_0(
  MR_Integer coverage__Count_3);

static MR_Word MR_CALL 
coverage__after_coverage_1_f_0(
  MR_Integer coverage__Count_3);

static void MR_CALL 
coverage__after_to_before_coverage_2_p_0(
  MR_Word coverage__After_3,
  MR_Word * coverage__Before_4);

static void MR_CALL 
coverage__sum_after_coverage_3_p_0(
  MR_Word coverage__After_4,
  MR_Word coverage__STATE_VARIABLE_SumAfter_0_8,
  MR_Word * coverage__STATE_VARIABLE_SumAfter_9);

static MR_Word MR_CALL 
coverage__construct_before_after_coverage_2_f_0(
  MR_Word coverage__Before_4,
  MR_Word coverage__After_5);

static void MR_CALL 
coverage__coverage_point_arrays_to_list_2_6_p_0(
  MR_Integer coverage__Num_7,
  MR_Integer coverage__Max_8,
  MR_ArrayPtr coverage__StaticArray_9,
  MR_ArrayPtr coverage__DynamicArray_10,
  MR_Word coverage__STATE_VARIABLE_CoveragePoints_0_16,
  MR_Word * coverage__STATE_VARIABLE_CoveragePoints_17);

static MR_bool MR_CALL 
coverage____Unify____coverage_after_0_0_10001(
  MR_Box coverage__wrapper_arg_1,
  MR_Box coverage__wrapper_arg_2);

static void MR_CALL 
coverage____Compare____coverage_after_0_0_10001(
  MR_Box * coverage__wrapper_arg_1,
  MR_Box coverage__wrapper_arg_2,
  MR_Box coverage__wrapper_arg_3);

static MR_bool MR_CALL 
coverage____Unify____coverage_before_0_0_10001(
  MR_Box coverage__wrapper_arg_1,
  MR_Box coverage__wrapper_arg_2);

static void MR_CALL 
coverage____Compare____coverage_before_0_0_10001(
  MR_Box * coverage__wrapper_arg_1,
  MR_Box coverage__wrapper_arg_2,
  MR_Box coverage__wrapper_arg_3);

static MR_bool MR_CALL 
coverage____Unify____coverage_info_0_0_10001(
  MR_Box coverage__wrapper_arg_1,
  MR_Box coverage__wrapper_arg_2);

static void MR_CALL 
coverage____Compare____coverage_info_0_0_10001(
  MR_Box * coverage__wrapper_arg_1,
  MR_Box coverage__wrapper_arg_2,
  MR_Box coverage__wrapper_arg_3);

static MR_bool MR_CALL 
coverage____Unify____coverage_point_0_0_10001(
  MR_Box coverage__wrapper_arg_1,
  MR_Box coverage__wrapper_arg_2);

static void MR_CALL 
coverage____Compare____coverage_point_0_0_10001(
  MR_Box * coverage__wrapper_arg_1,
  MR_Box coverage__wrapper_arg_2,
  MR_Box coverage__wrapper_arg_3);

static MR_bool MR_CALL 
coverage____Unify____coverage_reference_info_1_0_10001(
  MR_Box coverage__wrapper_arg_1,
  MR_Box coverage__wrapper_arg_2,
  MR_Box coverage__wrapper_arg_3);

static void MR_CALL 
coverage____Compare____coverage_reference_info_1_0_10001(
  MR_Box coverage__wrapper_arg_1,
  MR_Box * coverage__wrapper_arg_2,
  MR_Box coverage__wrapper_arg_3,
  MR_Box coverage__wrapper_arg_4);

static MR_bool MR_CALL 
coverage____Unify____sum_coverage_after_0_0_10001(
  MR_Box coverage__wrapper_arg_1,
  MR_Box coverage__wrapper_arg_2);

static void MR_CALL 
coverage____Compare____sum_coverage_after_0_0_10001(
  MR_Box * coverage__wrapper_arg_1,
  MR_Box coverage__wrapper_arg_2,
  MR_Box coverage__wrapper_arg_3);

static MR_bool MR_CALL 
coverage____Unify____sum_coverage_before_0_0_10001(
  MR_Box coverage__wrapper_arg_1,
  MR_Box coverage__wrapper_arg_2);

static void MR_CALL 
coverage____Compare____sum_coverage_before_0_0_10001(
  MR_Box * coverage__wrapper_arg_1,
  MR_Box coverage__wrapper_arg_2,
  MR_Box coverage__wrapper_arg_3);


static /* final */ const MR_Box coverage_scalar_common_1[5][2];

static /* final */ const MR_Box coverage_scalar_common_2[2][3];

static /* final */ const MR_Box coverage_scalar_common_3[3][5];

static /* final */ const MR_Box coverage_scalar_common_4[1][7];

static /* final */ const MR_Box coverage_scalar_common_5[1][1];




static /* final */ const MR_Box coverage_scalar_common_1[5][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_case_rep_1)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&coverage_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box coverage_scalar_common_2[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0)),
    ((MR_Box) (&coverage__coverage__type_ctor_info_coverage_point_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0))
  },
};

static /* final */ const MR_Box coverage_scalar_common_3[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&coverage__coverage__type_ctor_info_coverage_before_0)),
    ((MR_Box) (&coverage__coverage__type_ctor_info_coverage_before_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&coverage__coverage__type_ctor_info_coverage_after_0)),
    ((MR_Box) (&coverage__coverage__type_ctor_info_coverage_after_0))
  },
};

static /* final */ const MR_Box coverage_scalar_common_4[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&coverage__mdbcomp__goal_path__pti_goal_attr_array_1__plain_coverage__type_ctor_info_coverage_info_0)),
    ((MR_Box) (&coverage__mdbcomp__program_representation__pti_case_rep_1__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&coverage__maybe__pti_maybe_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&coverage__maybe__pti_maybe_1__plain_builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box coverage_scalar_common_5[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
};



#include "array.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 coverage__mdbcomp__goal_path__pti_goal_attr_array_1__plain_coverage__type_ctor_info_coverage_info_0 = {
  &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_attr_array_1,
  {
    (MR_PseudoTypeInfo) &coverage__coverage__type_ctor_info_coverage_info_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 coverage__mdbcomp__program_representation__pti_case_rep_1__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0 = {
  &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_case_rep_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 coverage__maybe__pti_maybe_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_coverage_after_0_0 = {
  (MR_String) "after_unknown",
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

static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_coverage_after_0_1 = {
  (MR_String) "after_zero",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo coverage__coverage__field_types_coverage_after_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_coverage_after_0_2 = {
  (MR_String) "after_known",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 2,
  coverage__coverage__field_types_coverage_after_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_coverage_after_0_0[2] = {
  &coverage__coverage__du_functor_desc_coverage_after_0_0,
  &coverage__coverage__du_functor_desc_coverage_after_0_1
};

static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_coverage_after_0_1[1] = {
  &coverage__coverage__du_functor_desc_coverage_after_0_2
};

static const MR_DuPtagLayout coverage__coverage__du_ptag_ordered_coverage_after_0[2] = {
  {
    (MR_Integer) 2,
    MR_SECTAG_LOCAL,
    coverage__coverage__du_stag_ordered_coverage_after_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    coverage__coverage__du_stag_ordered_coverage_after_0_1
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
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (coverage____Unify____coverage_after_0_0_10001)),
  ((MR_Box) (coverage____Compare____coverage_after_0_0_10001)),
  (MR_String) "coverage",
  (MR_String) "coverage_after",
  {     coverage__coverage__du_name_ordered_coverage_after_0 },
  {     coverage__coverage__du_ptag_ordered_coverage_after_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  coverage__coverage__functor_number_map_coverage_after_0
};

static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_coverage_before_0_0 = {
  (MR_String) "before_unknown",
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

static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_coverage_before_0_1 = {
  (MR_String) "before_zero",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo coverage__coverage__field_types_coverage_before_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_coverage_before_0_2 = {
  (MR_String) "before_known",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 2,
  coverage__coverage__field_types_coverage_before_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_coverage_before_0_0[2] = {
  &coverage__coverage__du_functor_desc_coverage_before_0_0,
  &coverage__coverage__du_functor_desc_coverage_before_0_1
};

static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_coverage_before_0_1[1] = {
  &coverage__coverage__du_functor_desc_coverage_before_0_2
};

static const MR_DuPtagLayout coverage__coverage__du_ptag_ordered_coverage_before_0[2] = {
  {
    (MR_Integer) 2,
    MR_SECTAG_LOCAL,
    coverage__coverage__du_stag_ordered_coverage_before_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    coverage__coverage__du_stag_ordered_coverage_before_0_1
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
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (coverage____Unify____coverage_before_0_0_10001)),
  ((MR_Box) (coverage____Compare____coverage_before_0_0_10001)),
  (MR_String) "coverage",
  (MR_String) "coverage_before",
  {     coverage__coverage__du_name_ordered_coverage_before_0 },
  {     coverage__coverage__du_ptag_ordered_coverage_before_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  coverage__coverage__functor_number_map_coverage_before_0
};

static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_coverage_info_0_0 = {
  (MR_String) "coverage_unknown",
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

static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_coverage_info_0_1 = {
  (MR_String) "coverage_known_zero",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo coverage__coverage__field_types_coverage_info_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_coverage_info_0_2 = {
  (MR_String) "coverage_known_same",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 2,
  coverage__coverage__field_types_coverage_info_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo coverage__coverage__field_types_coverage_info_0_3[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_coverage_info_0_3 = {
  (MR_String) "coverage_known",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 3,
  coverage__coverage__field_types_coverage_info_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo coverage__coverage__field_types_coverage_info_0_4[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_coverage_info_0_4 = {
  (MR_String) "coverage_known_before",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 4,
  coverage__coverage__field_types_coverage_info_0_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo coverage__coverage__field_types_coverage_info_0_5[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_coverage_info_0_5 = {
  (MR_String) "coverage_known_after",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 5,
  coverage__coverage__field_types_coverage_info_0_5,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_coverage_info_0_0[2] = {
  &coverage__coverage__du_functor_desc_coverage_info_0_0,
  &coverage__coverage__du_functor_desc_coverage_info_0_1
};

static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_coverage_info_0_1[1] = {
  &coverage__coverage__du_functor_desc_coverage_info_0_2
};

static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_coverage_info_0_2[1] = {
  &coverage__coverage__du_functor_desc_coverage_info_0_3
};

static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_coverage_info_0_3[2] = {
  &coverage__coverage__du_functor_desc_coverage_info_0_4,
  &coverage__coverage__du_functor_desc_coverage_info_0_5
};

static const MR_DuPtagLayout coverage__coverage__du_ptag_ordered_coverage_info_0[4] = {
  {
    (MR_Integer) 2,
    MR_SECTAG_LOCAL,
    coverage__coverage__du_stag_ordered_coverage_info_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    coverage__coverage__du_stag_ordered_coverage_info_0_1
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    coverage__coverage__du_stag_ordered_coverage_info_0_2
  },
  {
    (MR_Integer) 2,
    MR_SECTAG_REMOTE,
    coverage__coverage__du_stag_ordered_coverage_info_0_3
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
  (MR_Integer) 17,
  (MR_Integer) 4,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (coverage____Unify____coverage_info_0_0_10001)),
  ((MR_Box) (coverage____Compare____coverage_info_0_0_10001)),
  (MR_String) "coverage",
  (MR_String) "coverage_info",
  {     coverage__coverage__du_name_ordered_coverage_info_0 },
  {     coverage__coverage__du_ptag_ordered_coverage_info_0 },
  (MR_Integer) 6,
  (MR_Integer) 4,
  coverage__coverage__functor_number_map_coverage_info_0
};

static const MR_PseudoTypeInfo coverage__coverage__field_types_coverage_point_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0,
  (MR_PseudoTypeInfo) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_cp_type_0
};

static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_coverage_point_0_0 = {
  (MR_String) "coverage_point",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  coverage__coverage__field_types_coverage_point_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_coverage_point_0_0[1] = {
  &coverage__coverage__du_functor_desc_coverage_point_0_0
};

static const MR_DuPtagLayout coverage__coverage__du_ptag_ordered_coverage_point_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    coverage__coverage__du_stag_ordered_coverage_point_0_0
  }
};

static const MR_DuFunctorDescPtr coverage__coverage__du_name_ordered_coverage_point_0[1] = {
  &coverage__coverage__du_functor_desc_coverage_point_0_0
};

static const MR_Integer coverage__coverage__functor_number_map_coverage_point_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct coverage__coverage__type_ctor_info_coverage_point_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (coverage____Unify____coverage_point_0_0_10001)),
  ((MR_Box) (coverage____Compare____coverage_point_0_0_10001)),
  (MR_String) "coverage",
  (MR_String) "coverage_point",
  {     coverage__coverage__du_name_ordered_coverage_point_0 },
  {     coverage__coverage__du_ptag_ordered_coverage_point_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  coverage__coverage__functor_number_map_coverage_point_0
};

static const MR_FA_PseudoTypeInfo_Struct1 coverage__analysis_utils__pti_cost_and_callees_1__pseudo_1 = {
  &analysis_utils__analysis_utils__type_ctor_info_cost_and_callees_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 coverage__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__pseudo_analysis_utils__pti_cost_and_callees_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0,
    (MR_PseudoTypeInfo) &coverage__analysis_utils__pti_cost_and_callees_1__pseudo_1
  }
};

static const MR_FA_TypeInfo_Struct2 coverage__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0coverage__type_ctor_info_coverage_point_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0,
    (MR_TypeInfo) &coverage__coverage__type_ctor_info_coverage_point_0
  }
};

static const MR_FA_TypeInfo_Struct2 coverage__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0
  }
};

static const MR_PseudoTypeInfo coverage__coverage__field_types_coverage_reference_info_1_0[5] = {
  (MR_PseudoTypeInfo) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0,
  (MR_PseudoTypeInfo) &coverage__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__pseudo_analysis_utils__pti_cost_and_callees_1__pseudo_1,
  (MR_PseudoTypeInfo) &coverage__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0coverage__type_ctor_info_coverage_point_0,
  (MR_PseudoTypeInfo) &coverage__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0coverage__type_ctor_info_coverage_point_0,
  (MR_PseudoTypeInfo) &coverage__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0
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
  (MR_Integer) 5,
  (MR_Integer) 2,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  coverage__coverage__field_types_coverage_reference_info_1_0,
  coverage__coverage__field_names_coverage_reference_info_1_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_coverage_reference_info_1_0[1] = {
  &coverage__coverage__du_functor_desc_coverage_reference_info_1_0
};

static const MR_DuPtagLayout coverage__coverage__du_ptag_ordered_coverage_reference_info_1[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    coverage__coverage__du_stag_ordered_coverage_reference_info_1_0
  }
};

static const MR_DuFunctorDescPtr coverage__coverage__du_name_ordered_coverage_reference_info_1[1] = {
  &coverage__coverage__du_functor_desc_coverage_reference_info_1_0
};

static const MR_Integer coverage__coverage__functor_number_map_coverage_reference_info_1[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct coverage__coverage__type_ctor_info_coverage_reference_info_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (coverage____Unify____coverage_reference_info_1_0_10001)),
  ((MR_Box) (coverage____Compare____coverage_reference_info_1_0_10001)),
  (MR_String) "coverage",
  (MR_String) "coverage_reference_info",
  {     coverage__coverage__du_name_ordered_coverage_reference_info_1 },
  {     coverage__coverage__du_ptag_ordered_coverage_reference_info_1 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  coverage__coverage__functor_number_map_coverage_reference_info_1
};

static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_sum_coverage_after_0_0 = {
  (MR_String) "sum_after_unknown",
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

static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_sum_coverage_after_0_1 = {
  (MR_String) "sum_after_zero",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo coverage__coverage__field_types_sum_coverage_after_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_sum_coverage_after_0_2 = {
  (MR_String) "sum_after_known",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 2,
  coverage__coverage__field_types_sum_coverage_after_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_sum_coverage_after_0_0[2] = {
  &coverage__coverage__du_functor_desc_sum_coverage_after_0_0,
  &coverage__coverage__du_functor_desc_sum_coverage_after_0_1
};

static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_sum_coverage_after_0_1[1] = {
  &coverage__coverage__du_functor_desc_sum_coverage_after_0_2
};

static const MR_DuPtagLayout coverage__coverage__du_ptag_ordered_sum_coverage_after_0[2] = {
  {
    (MR_Integer) 2,
    MR_SECTAG_LOCAL,
    coverage__coverage__du_stag_ordered_sum_coverage_after_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    coverage__coverage__du_stag_ordered_sum_coverage_after_0_1
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
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (coverage____Unify____sum_coverage_after_0_0_10001)),
  ((MR_Box) (coverage____Compare____sum_coverage_after_0_0_10001)),
  (MR_String) "coverage",
  (MR_String) "sum_coverage_after",
  {     coverage__coverage__du_name_ordered_sum_coverage_after_0 },
  {     coverage__coverage__du_ptag_ordered_sum_coverage_after_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  coverage__coverage__functor_number_map_sum_coverage_after_0
};

static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_sum_coverage_before_0_0 = {
  (MR_String) "sum_before_unknown",
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

static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_sum_coverage_before_0_1 = {
  (MR_String) "sum_before_zero",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo coverage__coverage__field_types_sum_coverage_before_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_sum_coverage_before_0_2 = {
  (MR_String) "sum_before_known",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 2,
  coverage__coverage__field_types_sum_coverage_before_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_sum_coverage_before_0_0[2] = {
  &coverage__coverage__du_functor_desc_sum_coverage_before_0_0,
  &coverage__coverage__du_functor_desc_sum_coverage_before_0_1
};

static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_sum_coverage_before_0_1[1] = {
  &coverage__coverage__du_functor_desc_sum_coverage_before_0_2
};

static const MR_DuPtagLayout coverage__coverage__du_ptag_ordered_sum_coverage_before_0[2] = {
  {
    (MR_Integer) 2,
    MR_SECTAG_LOCAL,
    coverage__coverage__du_stag_ordered_sum_coverage_before_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    coverage__coverage__du_stag_ordered_sum_coverage_before_0_1
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
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (coverage____Unify____sum_coverage_before_0_0_10001)),
  ((MR_Box) (coverage____Compare____sum_coverage_before_0_0_10001)),
  (MR_String) "coverage",
  (MR_String) "sum_coverage_before",
  {     coverage__coverage__du_name_ordered_sum_coverage_before_0 },
  {     coverage__coverage__du_ptag_ordered_sum_coverage_before_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  coverage__coverage__functor_number_map_sum_coverage_before_0
};

static MR_bool MR_CALL 
coverage__IntroducedFrom__pred__after_count_from_either_source__1152__1_2_p_0(
  MR_Integer coverage__HeadVar__1_12,
  MR_Integer coverage__AfterCountB_18)
{
  {
    MR_bool coverage__succeeded = (coverage__HeadVar__1_12 == coverage__AfterCountB_18);

    return coverage__succeeded;
  }
}

static MR_bool MR_CALL 
coverage__IntroducedFrom__pred__after_count_from_either_source__1141__1_2_p_0(
  MR_Integer coverage__AfterCountA_8,
  MR_Integer coverage__HeadVar__2_15)
{
  {
    MR_bool coverage__succeeded = (coverage__AfterCountA_8 == coverage__HeadVar__2_15);

    return coverage__succeeded;
  }
}

static MR_bool MR_CALL 
coverage__IntroducedFrom__pred__after_count_from_either_source__1136__1_2_p_0(
  MR_Integer coverage__AfterCountA_8,
  MR_Integer coverage__AfterCountB_9)
{
  {
    MR_bool coverage__succeeded = (coverage__AfterCountA_8 == coverage__AfterCountB_9);

    return coverage__succeeded;
  }
}

static MR_bool MR_CALL 
coverage__IntroducedFrom__pred__goal_annotate_coverage__334__1_2_p_0(
  MR_Word coverage__Before_9,
  MR_Word coverage__HeadVar__2_83)
{
  {
    MR_bool coverage__succeeded;

    {
      coverage__succeeded = coverage____Unify____coverage_before_0_0(coverage__Before_9, coverage__HeadVar__2_83);
    }
    return coverage__succeeded;
  }
}

static MR_bool MR_CALL 
coverage__IntroducedFrom__pred__goal_annotate_with_coverage__254__1_2_p_0(
  MR_Word coverage__After_25,
  MR_Word coverage__HeadVar__2_28)
{
  {
    MR_bool coverage__succeeded;
    MR_Integer coverage__CastX_40 = (MR_Integer) coverage__After_25;
    MR_Integer coverage__CastY_41 = (MR_Integer) coverage__HeadVar__2_28;

    coverage__succeeded = (coverage__CastX_40 == coverage__CastY_41);
    if (coverage__succeeded)
      coverage__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) coverage__After_25)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(coverage__After_25)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer coverage__CastX_34 = (MR_Integer) coverage__After_25;
                MR_Integer coverage__CastY_35 = (MR_Integer) coverage__HeadVar__2_28;

                coverage__succeeded = (coverage__CastY_35 == coverage__CastX_34);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer coverage__CastX_36 = (MR_Integer) coverage__After_25;
                MR_Integer coverage__CastY_37 = (MR_Integer) coverage__HeadVar__2_28;

                coverage__succeeded = (coverage__CastY_37 == coverage__CastX_36);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer coverage__ArgX1_38 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__After_25, (MR_Integer) 0)));
            MR_Integer coverage__ArgY1_39;

            coverage__succeeded = ((MR_tag((MR_Word) coverage__HeadVar__2_28)) == (MR_mktag((MR_Integer) 1)));
            if (coverage__succeeded)
              {
                coverage__ArgY1_39 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__HeadVar__2_28, (MR_Integer) 0)));
                coverage__succeeded = (coverage__ArgX1_38 == coverage__ArgY1_39);
              }
          }
          break;
      }
    return coverage__succeeded;
  }
}

static void MR_CALL 
coverage____Compare____sum_coverage_before_0_0(
  MR_Word * coverage__HeadVar__1_1,
  MR_Word coverage__HeadVar__2_2,
  MR_Word coverage__HeadVar__3_3)
{
  {
    MR_bool coverage__succeeded;
    MR_Integer coverage__CastX_10 = (MR_Integer) coverage__HeadVar__2_2;
    MR_Integer coverage__CastY_11 = (MR_Integer) coverage__HeadVar__3_3;

    coverage__succeeded = (coverage__CastX_10 == coverage__CastY_11);
    if (coverage__succeeded)
      *coverage__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) coverage__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(coverage__HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) coverage__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(coverage__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *coverage__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      *coverage__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *coverage__HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              switch (MR_tag((MR_Word) coverage__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(coverage__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *coverage__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *coverage__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *coverage__HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer coverage__Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) coverage__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(coverage__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *coverage__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *coverage__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer coverage__ArgY1_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__private_builtin__builtin_compare_int_3_p_0(coverage__HeadVar__1_1, coverage__Var_13, coverage__ArgY1_9);
                  }
                }
                break;
            }
          }
          break;
      }
  }
}

static MR_bool MR_CALL 
coverage____Unify____sum_coverage_before_0_0(
  MR_Word coverage__HeadVar__1_1,
  MR_Word coverage__HeadVar__2_2)
{
  {
    MR_bool coverage__succeeded;
    MR_Integer coverage__CastX_9 = (MR_Integer) coverage__HeadVar__1_1;
    MR_Integer coverage__CastY_10 = (MR_Integer) coverage__HeadVar__2_2;

    coverage__succeeded = (coverage__CastX_9 == coverage__CastY_10);
    if (coverage__succeeded)
      coverage__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) coverage__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(coverage__HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer coverage__CastX_3 = (MR_Integer) coverage__HeadVar__1_1;
                MR_Integer coverage__CastY_4 = (MR_Integer) coverage__HeadVar__2_2;

                coverage__succeeded = (coverage__CastY_4 == coverage__CastX_3);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer coverage__CastX_5 = (MR_Integer) coverage__HeadVar__1_1;
                MR_Integer coverage__CastY_6 = (MR_Integer) coverage__HeadVar__2_2;

                coverage__succeeded = (coverage__CastY_6 == coverage__CastX_5);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer coverage__ArgX1_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__HeadVar__1_1, (MR_Integer) 0)));
            MR_Integer coverage__ArgY1_8;

            coverage__succeeded = ((MR_tag((MR_Word) coverage__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (coverage__succeeded)
              {
                coverage__ArgY1_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__HeadVar__2_2, (MR_Integer) 0)));
                coverage__succeeded = (coverage__ArgX1_7 == coverage__ArgY1_8);
              }
          }
          break;
      }
    return coverage__succeeded;
  }
}

static void MR_CALL 
coverage____Compare____sum_coverage_after_0_0(
  MR_Word * coverage__HeadVar__1_1,
  MR_Word coverage__HeadVar__2_2,
  MR_Word coverage__HeadVar__3_3)
{
  {
    MR_bool coverage__succeeded;
    MR_Integer coverage__CastX_10 = (MR_Integer) coverage__HeadVar__2_2;
    MR_Integer coverage__CastY_11 = (MR_Integer) coverage__HeadVar__3_3;

    coverage__succeeded = (coverage__CastX_10 == coverage__CastY_11);
    if (coverage__succeeded)
      *coverage__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) coverage__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(coverage__HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) coverage__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(coverage__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *coverage__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      *coverage__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *coverage__HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              switch (MR_tag((MR_Word) coverage__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(coverage__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *coverage__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *coverage__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *coverage__HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer coverage__Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) coverage__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(coverage__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *coverage__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *coverage__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer coverage__ArgY1_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__private_builtin__builtin_compare_int_3_p_0(coverage__HeadVar__1_1, coverage__Var_13, coverage__ArgY1_9);
                  }
                }
                break;
            }
          }
          break;
      }
  }
}

static MR_bool MR_CALL 
coverage____Unify____sum_coverage_after_0_0(
  MR_Word coverage__HeadVar__1_1,
  MR_Word coverage__HeadVar__2_2)
{
  {
    MR_bool coverage__succeeded;
    MR_Integer coverage__CastX_9 = (MR_Integer) coverage__HeadVar__1_1;
    MR_Integer coverage__CastY_10 = (MR_Integer) coverage__HeadVar__2_2;

    coverage__succeeded = (coverage__CastX_9 == coverage__CastY_10);
    if (coverage__succeeded)
      coverage__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) coverage__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(coverage__HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer coverage__CastX_3 = (MR_Integer) coverage__HeadVar__1_1;
                MR_Integer coverage__CastY_4 = (MR_Integer) coverage__HeadVar__2_2;

                coverage__succeeded = (coverage__CastY_4 == coverage__CastX_3);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer coverage__CastX_5 = (MR_Integer) coverage__HeadVar__1_1;
                MR_Integer coverage__CastY_6 = (MR_Integer) coverage__HeadVar__2_2;

                coverage__succeeded = (coverage__CastY_6 == coverage__CastX_5);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer coverage__ArgX1_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__HeadVar__1_1, (MR_Integer) 0)));
            MR_Integer coverage__ArgY1_8;

            coverage__succeeded = ((MR_tag((MR_Word) coverage__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (coverage__succeeded)
              {
                coverage__ArgY1_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__HeadVar__2_2, (MR_Integer) 0)));
                coverage__succeeded = (coverage__ArgX1_7 == coverage__ArgY1_8);
              }
          }
          break;
      }
    return coverage__succeeded;
  }
}

static void MR_CALL 
coverage____Compare____coverage_reference_info_1_0(
  MR_Word coverage__TypeInfo_for_Callee_20,
  MR_Word * coverage__HeadVar__1_1,
  MR_Word coverage__HeadVar__2_2,
  MR_Word coverage__HeadVar__3_3)
{
  {
    MR_bool coverage__succeeded;
    MR_Integer coverage__CastX_18 = (MR_Integer) coverage__HeadVar__2_2;
    MR_Integer coverage__CastY_19 = (MR_Integer) coverage__HeadVar__3_3;

    coverage__succeeded = (coverage__CastX_18 == coverage__CastY_19);
    if (coverage__succeeded)
      *coverage__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word coverage__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word coverage__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word coverage__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word coverage__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word coverage__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word coverage__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word coverage__ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word coverage__ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word coverage__ArgX5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word coverage__ArgY5_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__HeadVar__3_3, (MR_Integer) 4)));
        MR_Word coverage__Var_14;

        {
          mdbcomp__program_representation____Compare____string_proc_label_0_0(&coverage__Var_14, coverage__ArgX1_4, coverage__ArgY1_5);
        }
        coverage__succeeded = (coverage__Var_14 == (MR_Integer) 0);
        coverage__succeeded = !(coverage__succeeded);
        if (coverage__succeeded)
          *coverage__HeadVar__1_1 = coverage__Var_14;
        else
          {
            MR_Word coverage__Var_15;
            MR_Word coverage__TypeInfo_24_24;

            {
              coverage__TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), coverage__TypeInfo_24_24, 0) = ((MR_Box) (&analysis_utils__analysis_utils__type_ctor_info_cost_and_callees_1));
              MR_hl_field(MR_mktag(0), coverage__TypeInfo_24_24, 1) = ((MR_Box) (coverage__TypeInfo_for_Callee_20));
            }
            {
              mercury__tree234____Compare____tree234_2_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, coverage__TypeInfo_24_24, &coverage__Var_15, coverage__ArgX2_6, coverage__ArgY2_7);
            }
            coverage__succeeded = (coverage__Var_15 == (MR_Integer) 0);
            coverage__succeeded = !(coverage__succeeded);
            if (coverage__succeeded)
              *coverage__HeadVar__1_1 = coverage__Var_15;
            else
              {
                MR_Word coverage__Var_16;

                {
                  mercury__builtin__compare_3_p_0((MR_Word) &coverage_scalar_common_2[0], &coverage__Var_16, ((MR_Box) (coverage__ArgX3_8)), ((MR_Box) (coverage__ArgY3_9)));
                }
                coverage__succeeded = (coverage__Var_16 == (MR_Integer) 0);
                coverage__succeeded = !(coverage__succeeded);
                if (coverage__succeeded)
                  *coverage__HeadVar__1_1 = coverage__Var_16;
                else
                  {
                    MR_Word coverage__Var_17;

                    {
                      mercury__builtin__compare_3_p_0((MR_Word) &coverage_scalar_common_2[0], &coverage__Var_17, ((MR_Box) (coverage__ArgX4_10)), ((MR_Box) (coverage__ArgY4_11)));
                    }
                    coverage__succeeded = (coverage__Var_17 == (MR_Integer) 0);
                    coverage__succeeded = !(coverage__succeeded);
                    if (coverage__succeeded)
                      *coverage__HeadVar__1_1 = coverage__Var_17;
                    else
                      {
                        {
                          mercury__builtin__compare_3_p_0((MR_Word) &coverage_scalar_common_2[1], coverage__HeadVar__1_1, ((MR_Box) (coverage__ArgX5_12)), ((MR_Box) (coverage__ArgY5_13)));
                        }
                      }
                  }
              }
          }
      }
  }
}

static MR_bool MR_CALL 
coverage____Unify____coverage_reference_info_1_0(
  MR_Word coverage__TypeInfo_for_Callee_15,
  MR_Word coverage__HeadVar__1_1,
  MR_Word coverage__HeadVar__2_2)
{
  {
    MR_bool coverage__succeeded;
    MR_Integer coverage__CastX_13 = (MR_Integer) coverage__HeadVar__1_1;
    MR_Integer coverage__CastY_14 = (MR_Integer) coverage__HeadVar__2_2;

    coverage__succeeded = (coverage__CastX_13 == coverage__CastY_14);
    if (coverage__succeeded)
      coverage__succeeded = MR_TRUE;
    else
      {
        MR_Word coverage__TypeCtorInfo_17_17;
        MR_Word coverage__TypeCtorInfo_18_18;
        MR_Word coverage__TypeInfo_19_19;
        MR_Word coverage__TypeInfo_22_22;
        MR_Word coverage__TypeInfo_23_23;
        MR_Word coverage__TypeInfo_24_24;
        MR_Word coverage__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word coverage__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word coverage__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word coverage__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word coverage__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word coverage__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word coverage__ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word coverage__ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word coverage__ArgX5_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__HeadVar__1_1, (MR_Integer) 4)));
        MR_Word coverage__ArgY5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__HeadVar__2_2, (MR_Integer) 4)));

        {
          coverage__succeeded = mdbcomp__program_representation____Unify____string_proc_label_0_0(coverage__ArgX1_3, coverage__ArgY1_4);
        }
        if (coverage__succeeded)
          {
            coverage__TypeCtorInfo_17_17 = (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0;
            coverage__TypeCtorInfo_18_18 = (MR_Word) &analysis_utils__analysis_utils__type_ctor_info_cost_and_callees_1;
            {
              coverage__TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), coverage__TypeInfo_19_19, 0) = ((MR_Box) (coverage__TypeCtorInfo_18_18));
              MR_hl_field(MR_mktag(0), coverage__TypeInfo_19_19, 1) = ((MR_Box) (coverage__TypeInfo_for_Callee_15));
            }
            {
              coverage__succeeded = mercury__tree234____Unify____tree234_2_0(coverage__TypeCtorInfo_17_17, coverage__TypeInfo_19_19, coverage__ArgX2_5, coverage__ArgY2_6);
            }
            if (coverage__succeeded)
              {
                coverage__TypeInfo_22_22 = (MR_Word) &coverage_scalar_common_2[0];
                {
                  coverage__succeeded = mercury__builtin__unify_2_p_0(coverage__TypeInfo_22_22, ((MR_Box) (coverage__ArgX3_7)), ((MR_Box) (coverage__ArgY3_8)));
                }
                if (coverage__succeeded)
                  {
                    coverage__TypeInfo_23_23 = (MR_Word) &coverage_scalar_common_2[0];
                    {
                      coverage__succeeded = mercury__builtin__unify_2_p_0(coverage__TypeInfo_23_23, ((MR_Box) (coverage__ArgX4_9)), ((MR_Box) (coverage__ArgY4_10)));
                    }
                    if (coverage__succeeded)
                      {
                        coverage__TypeInfo_24_24 = (MR_Word) &coverage_scalar_common_2[1];
                        {
                          coverage__succeeded = mercury__builtin__unify_2_p_0(coverage__TypeInfo_24_24, ((MR_Box) (coverage__ArgX5_11)), ((MR_Box) (coverage__ArgY5_12)));
                        }
                      }
                  }
              }
          }
      }
    return coverage__succeeded;
  }
}

void MR_CALL 
coverage____Compare____coverage_point_0_0(
  MR_Word * coverage__HeadVar__1_1,
  MR_Word coverage__HeadVar__2_2,
  MR_Word coverage__HeadVar__3_3)
{
  {
    MR_bool coverage__succeeded;
    MR_Integer coverage__CastX_12 = (MR_Integer) coverage__HeadVar__2_2;
    MR_Integer coverage__CastY_13 = (MR_Integer) coverage__HeadVar__3_3;

    coverage__succeeded = (coverage__CastX_12 == coverage__CastY_13);
    if (coverage__succeeded)
      *coverage__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Integer coverage__ArgX1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), coverage__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer coverage__ArgY1_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), coverage__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word coverage__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word coverage__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word coverage__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word coverage__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word coverage__Var_10;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(&coverage__Var_10, coverage__ArgX1_4, coverage__ArgY1_5);
        }
        coverage__succeeded = (coverage__Var_10 == (MR_Integer) 0);
        coverage__succeeded = !(coverage__succeeded);
        if (coverage__succeeded)
          *coverage__HeadVar__1_1 = coverage__Var_10;
        else
          {
            MR_Word coverage__Var_11;

            {
              mdbcomp__goal_path____Compare____reverse_goal_path_0_0(&coverage__Var_11, coverage__ArgX2_6, coverage__ArgY2_7);
            }
            coverage__succeeded = (coverage__Var_11 == (MR_Integer) 0);
            coverage__succeeded = !(coverage__succeeded);
            if (coverage__succeeded)
              *coverage__HeadVar__1_1 = coverage__Var_11;
            else
              {
                MR_Integer coverage__Var_17 = (MR_Integer) coverage__ArgX3_8;
                MR_Integer coverage__Var_18 = (MR_Integer) coverage__ArgY3_9;

                {
                  mercury__private_builtin__builtin_compare_int_3_p_0(coverage__HeadVar__1_1, coverage__Var_17, coverage__Var_18);
                }
              }
          }
      }
  }
}

MR_bool MR_CALL 
coverage____Unify____coverage_point_0_0(
  MR_Word coverage__HeadVar__1_1,
  MR_Word coverage__HeadVar__2_2)
{
  {
    MR_bool coverage__succeeded;
    MR_Integer coverage__CastX_9 = (MR_Integer) coverage__HeadVar__1_1;
    MR_Integer coverage__CastY_10 = (MR_Integer) coverage__HeadVar__2_2;

    coverage__succeeded = (coverage__CastX_9 == coverage__CastY_10);
    if (coverage__succeeded)
      coverage__succeeded = MR_TRUE;
    else
      {
        MR_Integer coverage__ArgX1_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), coverage__HeadVar__1_1, (MR_Integer) 0)));
        MR_Integer coverage__ArgY1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), coverage__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word coverage__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word coverage__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word coverage__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word coverage__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__HeadVar__2_2, (MR_Integer) 2)));

        coverage__succeeded = (coverage__ArgX1_3 == coverage__ArgY1_4);
        if (coverage__succeeded)
          {
            {
              coverage__succeeded = mdbcomp__goal_path____Unify____reverse_goal_path_0_0(coverage__ArgX2_5, coverage__ArgY2_6);
            }
            if (coverage__succeeded)
              coverage__succeeded = (coverage__ArgX3_7 == coverage__ArgY3_8);
          }
      }
    return coverage__succeeded;
  }
}

void MR_CALL 
coverage____Compare____coverage_info_0_0(
  MR_Word * coverage__HeadVar__1_1,
  MR_Word coverage__HeadVar__2_2,
  MR_Word coverage__HeadVar__3_3)
{
  {
    MR_bool coverage__succeeded;
    MR_Integer coverage__CastX_65 = (MR_Integer) coverage__HeadVar__2_2;
    MR_Integer coverage__CastY_66 = (MR_Integer) coverage__HeadVar__3_3;

    coverage__succeeded = (coverage__CastX_65 == coverage__CastY_66);
    if (coverage__succeeded)
      *coverage__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) coverage__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(coverage__HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) coverage__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(coverage__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *coverage__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      *coverage__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *coverage__HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 2:
                  *coverage__HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), coverage__HeadVar__3_3, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *coverage__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 1:
                      *coverage__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
              break;
            case (MR_Integer) 1:
              switch (MR_tag((MR_Word) coverage__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(coverage__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *coverage__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *coverage__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *coverage__HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 2:
                  *coverage__HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), coverage__HeadVar__3_3, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *coverage__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 1:
                      *coverage__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer coverage__Var_76 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) coverage__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(coverage__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *coverage__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *coverage__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer coverage__ArgY1_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__private_builtin__builtin_compare_int_3_p_0(coverage__HeadVar__1_1, coverage__Var_76, coverage__ArgY1_17);
                  }
                }
                break;
              case (MR_Integer) 2:
                *coverage__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), coverage__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *coverage__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *coverage__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer coverage__Var_72 = ((MR_Integer) (MR_hl_field(MR_mktag(2), coverage__HeadVar__2_2, (MR_Integer) 1)));
            MR_Integer coverage__Var_73 = ((MR_Integer) (MR_hl_field(MR_mktag(2), coverage__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) coverage__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(coverage__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *coverage__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *coverage__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *coverage__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Integer coverage__ArgY1_33 = ((MR_Integer) (MR_hl_field(MR_mktag(2), coverage__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Integer coverage__ArgY2_35 = ((MR_Integer) (MR_hl_field(MR_mktag(2), coverage__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word coverage__Var_36;

                  {
                    mercury__private_builtin__builtin_compare_int_3_p_0(&coverage__Var_36, coverage__Var_73, coverage__ArgY1_33);
                  }
                  coverage__succeeded = (coverage__Var_36 == (MR_Integer) 0);
                  coverage__succeeded = !(coverage__succeeded);
                  if (coverage__succeeded)
                    *coverage__HeadVar__1_1 = coverage__Var_36;
                  else
                    {
                      mercury__private_builtin__builtin_compare_int_3_p_0(coverage__HeadVar__1_1, coverage__Var_72, coverage__ArgY2_35);
                    }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), coverage__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *coverage__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *coverage__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), coverage__HeadVar__2_2, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer coverage__Var_75 = ((MR_Integer) (MR_hl_field(MR_mktag(3), coverage__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) coverage__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(coverage__HeadVar__3_3)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *coverage__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *coverage__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    *coverage__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *coverage__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), coverage__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Integer coverage__ArgY1_51 = ((MR_Integer) (MR_hl_field(MR_mktag(3), coverage__HeadVar__3_3, (MR_Integer) 1)));

                          {
                            mercury__private_builtin__builtin_compare_int_3_p_0(coverage__HeadVar__1_1, coverage__Var_75, coverage__ArgY1_51);
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        *coverage__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer coverage__Var_74 = ((MR_Integer) (MR_hl_field(MR_mktag(3), coverage__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) coverage__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(coverage__HeadVar__3_3)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *coverage__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *coverage__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    *coverage__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *coverage__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), coverage__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *coverage__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Integer coverage__ArgY1_64 = ((MR_Integer) (MR_hl_field(MR_mktag(3), coverage__HeadVar__3_3, (MR_Integer) 1)));

                          {
                            mercury__private_builtin__builtin_compare_int_3_p_0(coverage__HeadVar__1_1, coverage__Var_74, coverage__ArgY1_64);
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
}

MR_bool MR_CALL 
coverage____Unify____coverage_info_0_0(
  MR_Word coverage__HeadVar__1_1,
  MR_Word coverage__HeadVar__2_2)
{
  {
    MR_bool coverage__succeeded;
    MR_Integer coverage__CastX_17 = (MR_Integer) coverage__HeadVar__1_1;
    MR_Integer coverage__CastY_18 = (MR_Integer) coverage__HeadVar__2_2;

    coverage__succeeded = (coverage__CastX_17 == coverage__CastY_18);
    if (coverage__succeeded)
      coverage__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) coverage__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(coverage__HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer coverage__CastX_3 = (MR_Integer) coverage__HeadVar__1_1;
                MR_Integer coverage__CastY_4 = (MR_Integer) coverage__HeadVar__2_2;

                coverage__succeeded = (coverage__CastY_4 == coverage__CastX_3);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer coverage__CastX_5 = (MR_Integer) coverage__HeadVar__1_1;
                MR_Integer coverage__CastY_6 = (MR_Integer) coverage__HeadVar__2_2;

                coverage__succeeded = (coverage__CastY_6 == coverage__CastX_5);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer coverage__ArgX1_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__HeadVar__1_1, (MR_Integer) 0)));
            MR_Integer coverage__ArgY1_8;

            coverage__succeeded = ((MR_tag((MR_Word) coverage__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (coverage__succeeded)
              {
                coverage__ArgY1_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__HeadVar__2_2, (MR_Integer) 0)));
                coverage__succeeded = (coverage__ArgX1_7 == coverage__ArgY1_8);
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer coverage__ArgX1_9 = ((MR_Integer) (MR_hl_field(MR_mktag(2), coverage__HeadVar__1_1, (MR_Integer) 0)));
            MR_Integer coverage__ArgY1_10;
            MR_Integer coverage__ArgX2_11 = ((MR_Integer) (MR_hl_field(MR_mktag(2), coverage__HeadVar__1_1, (MR_Integer) 1)));
            MR_Integer coverage__ArgY2_12;

            coverage__succeeded = ((MR_tag((MR_Word) coverage__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (coverage__succeeded)
              {
                coverage__ArgY1_10 = ((MR_Integer) (MR_hl_field(MR_mktag(2), coverage__HeadVar__2_2, (MR_Integer) 0)));
                coverage__ArgY2_12 = ((MR_Integer) (MR_hl_field(MR_mktag(2), coverage__HeadVar__2_2, (MR_Integer) 1)));
                coverage__succeeded = (coverage__ArgX1_9 == coverage__ArgY1_10);
                if (coverage__succeeded)
                  coverage__succeeded = (coverage__ArgX2_11 == coverage__ArgY2_12);
              }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), coverage__HeadVar__1_1, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer coverage__ArgX1_13 = ((MR_Integer) (MR_hl_field(MR_mktag(3), coverage__HeadVar__1_1, (MR_Integer) 1)));
                MR_Integer coverage__ArgY1_14;

                coverage__succeeded = ((((MR_tag((MR_Word) coverage__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), coverage__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (coverage__succeeded)
                  {
                    coverage__ArgY1_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), coverage__HeadVar__2_2, (MR_Integer) 1)));
                    coverage__succeeded = (coverage__ArgX1_13 == coverage__ArgY1_14);
                  }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer coverage__ArgX1_15 = ((MR_Integer) (MR_hl_field(MR_mktag(3), coverage__HeadVar__1_1, (MR_Integer) 1)));
                MR_Integer coverage__ArgY1_16;

                coverage__succeeded = ((((MR_tag((MR_Word) coverage__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), coverage__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (coverage__succeeded)
                  {
                    coverage__ArgY1_16 = ((MR_Integer) (MR_hl_field(MR_mktag(3), coverage__HeadVar__2_2, (MR_Integer) 1)));
                    coverage__succeeded = (coverage__ArgX1_15 == coverage__ArgY1_16);
                  }
              }
              break;
          }
          break;
      }
    return coverage__succeeded;
  }
}

static void MR_CALL 
coverage____Compare____coverage_before_0_0(
  MR_Word * coverage__HeadVar__1_1,
  MR_Word coverage__HeadVar__2_2,
  MR_Word coverage__HeadVar__3_3)
{
  {
    MR_bool coverage__succeeded;
    MR_Integer coverage__CastX_10 = (MR_Integer) coverage__HeadVar__2_2;
    MR_Integer coverage__CastY_11 = (MR_Integer) coverage__HeadVar__3_3;

    coverage__succeeded = (coverage__CastX_10 == coverage__CastY_11);
    if (coverage__succeeded)
      *coverage__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) coverage__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(coverage__HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) coverage__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(coverage__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *coverage__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      *coverage__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *coverage__HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              switch (MR_tag((MR_Word) coverage__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(coverage__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *coverage__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *coverage__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *coverage__HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer coverage__Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) coverage__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(coverage__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *coverage__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *coverage__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer coverage__ArgY1_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__private_builtin__builtin_compare_int_3_p_0(coverage__HeadVar__1_1, coverage__Var_13, coverage__ArgY1_9);
                  }
                }
                break;
            }
          }
          break;
      }
  }
}

static MR_bool MR_CALL 
coverage____Unify____coverage_before_0_0(
  MR_Word coverage__HeadVar__1_1,
  MR_Word coverage__HeadVar__2_2)
{
  {
    MR_bool coverage__succeeded;
    MR_Integer coverage__CastX_9 = (MR_Integer) coverage__HeadVar__1_1;
    MR_Integer coverage__CastY_10 = (MR_Integer) coverage__HeadVar__2_2;

    coverage__succeeded = (coverage__CastX_9 == coverage__CastY_10);
    if (coverage__succeeded)
      coverage__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) coverage__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(coverage__HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer coverage__CastX_3 = (MR_Integer) coverage__HeadVar__1_1;
                MR_Integer coverage__CastY_4 = (MR_Integer) coverage__HeadVar__2_2;

                coverage__succeeded = (coverage__CastY_4 == coverage__CastX_3);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer coverage__CastX_5 = (MR_Integer) coverage__HeadVar__1_1;
                MR_Integer coverage__CastY_6 = (MR_Integer) coverage__HeadVar__2_2;

                coverage__succeeded = (coverage__CastY_6 == coverage__CastX_5);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer coverage__ArgX1_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__HeadVar__1_1, (MR_Integer) 0)));
            MR_Integer coverage__ArgY1_8;

            coverage__succeeded = ((MR_tag((MR_Word) coverage__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (coverage__succeeded)
              {
                coverage__ArgY1_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__HeadVar__2_2, (MR_Integer) 0)));
                coverage__succeeded = (coverage__ArgX1_7 == coverage__ArgY1_8);
              }
          }
          break;
      }
    return coverage__succeeded;
  }
}

static void MR_CALL 
coverage____Compare____coverage_after_0_0(
  MR_Word * coverage__HeadVar__1_1,
  MR_Word coverage__HeadVar__2_2,
  MR_Word coverage__HeadVar__3_3)
{
  {
    MR_bool coverage__succeeded;
    MR_Integer coverage__CastX_10 = (MR_Integer) coverage__HeadVar__2_2;
    MR_Integer coverage__CastY_11 = (MR_Integer) coverage__HeadVar__3_3;

    coverage__succeeded = (coverage__CastX_10 == coverage__CastY_11);
    if (coverage__succeeded)
      *coverage__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) coverage__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(coverage__HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) coverage__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(coverage__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *coverage__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      *coverage__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *coverage__HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              switch (MR_tag((MR_Word) coverage__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(coverage__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *coverage__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *coverage__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *coverage__HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer coverage__Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) coverage__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(coverage__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *coverage__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *coverage__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer coverage__ArgY1_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__private_builtin__builtin_compare_int_3_p_0(coverage__HeadVar__1_1, coverage__Var_13, coverage__ArgY1_9);
                  }
                }
                break;
            }
          }
          break;
      }
  }
}

static MR_bool MR_CALL 
coverage____Unify____coverage_after_0_0(
  MR_Word coverage__HeadVar__1_1,
  MR_Word coverage__HeadVar__2_2)
{
  {
    MR_bool coverage__succeeded;
    MR_Integer coverage__CastX_9 = (MR_Integer) coverage__HeadVar__1_1;
    MR_Integer coverage__CastY_10 = (MR_Integer) coverage__HeadVar__2_2;

    coverage__succeeded = (coverage__CastX_9 == coverage__CastY_10);
    if (coverage__succeeded)
      coverage__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) coverage__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(coverage__HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer coverage__CastX_3 = (MR_Integer) coverage__HeadVar__1_1;
                MR_Integer coverage__CastY_4 = (MR_Integer) coverage__HeadVar__2_2;

                coverage__succeeded = (coverage__CastY_4 == coverage__CastX_3);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer coverage__CastX_5 = (MR_Integer) coverage__HeadVar__1_1;
                MR_Integer coverage__CastY_6 = (MR_Integer) coverage__HeadVar__2_2;

                coverage__succeeded = (coverage__CastY_6 == coverage__CastX_5);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer coverage__ArgX1_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__HeadVar__1_1, (MR_Integer) 0)));
            MR_Integer coverage__ArgY1_8;

            coverage__succeeded = ((MR_tag((MR_Word) coverage__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (coverage__succeeded)
              {
                coverage__ArgY1_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__HeadVar__2_2, (MR_Integer) 0)));
                coverage__succeeded = (coverage__ArgX1_7 == coverage__ArgY1_8);
              }
          }
          break;
      }
    return coverage__succeeded;
  }
}

static void MR_CALL 
coverage__sum_switch_case_coverage_4_p_0(
  MR_Word coverage__Array_5,
  MR_Word coverage__HeadVar__2_2,
  MR_Word coverage__STATE_VARIABLE_Acc_0_15,
  MR_Word * coverage__STATE_VARIABLE_Acc_16)
{
  {
    MR_Word coverage__Goal_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__HeadVar__2_2, (MR_Integer) 2)));
    MR_Word coverage__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word coverage__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__HeadVar__2_2, (MR_Integer) 1)));

    if ((coverage__STATE_VARIABLE_Acc_0_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *coverage__STATE_VARIABLE_Acc_16 = coverage__STATE_VARIABLE_Acc_0_15;
    else
      {
        MR_Integer coverage__Count_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__STATE_VARIABLE_Acc_0_15, (MR_Integer) 0)));
        MR_Word coverage__Coverage_11;
        MR_Word coverage__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Goal_8, (MR_Integer) 2)));
        MR_Word coverage__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Goal_8, (MR_Integer) 0)));
        MR_Word coverage__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Goal_8, (MR_Integer) 1)));
        MR_Box coverage__conv0_Coverage_11;

        {
          coverage__conv0_Coverage_11 = mdbcomp__goal_path__get_goal_attribute_det_2_f_0((MR_Word) &coverage__coverage__type_ctor_info_coverage_info_0, coverage__Array_5, coverage__Var_17);
        }
        coverage__Coverage_11 = ((MR_Word) coverage__conv0_Coverage_11);
        switch (MR_tag((MR_Word) coverage__Coverage_11)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(coverage__Coverage_11)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *coverage__STATE_VARIABLE_Acc_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                break;
              case (MR_Integer) 1:
                *coverage__STATE_VARIABLE_Acc_16 = coverage__STATE_VARIABLE_Acc_0_15;
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer coverage__Addend_26 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__Coverage_11, (MR_Integer) 0)));
              MR_Integer coverage__Var_27 = (coverage__Count_10 + coverage__Addend_26);

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *coverage__STATE_VARIABLE_Acc_16 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (coverage__Var_27));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer coverage__Addend_12 = ((MR_Integer) (MR_hl_field(MR_mktag(2), coverage__Coverage_11, (MR_Integer) 0)));
              MR_Integer coverage__Var_20 = (coverage__Count_10 + coverage__Addend_12);
              MR_Integer coverage__Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(2), coverage__Coverage_11, (MR_Integer) 1)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *coverage__STATE_VARIABLE_Acc_16 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (coverage__Var_20));
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), coverage__Coverage_11, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Integer coverage__Addend_24 = ((MR_Integer) (MR_hl_field(MR_mktag(3), coverage__Coverage_11, (MR_Integer) 1)));
                  MR_Integer coverage__Var_25 = (coverage__Count_10 + coverage__Addend_24);

                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    *coverage__STATE_VARIABLE_Acc_16 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (coverage__Var_25));
                  }
                }
                break;
              case (MR_Integer) 1:
                *coverage__STATE_VARIABLE_Acc_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                break;
            }
            break;
        }
      }
  }
}

void MR_CALL 
coverage__add_coverage_point_to_map_5_p_0(
  MR_Word coverage__CoveragePoint_6,
  MR_Word coverage__STATE_VARIABLE_SolnsMap_0_12,
  MR_Word * coverage__STATE_VARIABLE_SolnsMap_13,
  MR_Word coverage__STATE_VARIABLE_BranchMap_0_14,
  MR_Word * coverage__STATE_VARIABLE_BranchMap_15)
{
  {
    MR_Word coverage__GoalPath_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__CoveragePoint_6, (MR_Integer) 1)));
    MR_Word coverage__CPType_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__CoveragePoint_6, (MR_Integer) 2)));
    MR_Integer coverage__Var_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), coverage__CoveragePoint_6, (MR_Integer) 0)));

    switch (coverage__CPType_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case ((int) MR_cp_type_branch_arm):
        {
          {
            mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, (MR_Word) &coverage__coverage__type_ctor_info_coverage_point_0, ((MR_Box) (coverage__GoalPath_10)), ((MR_Box) (coverage__CoveragePoint_6)), coverage__STATE_VARIABLE_BranchMap_0_14, coverage__STATE_VARIABLE_BranchMap_15);
          }
          *coverage__STATE_VARIABLE_SolnsMap_13 = coverage__STATE_VARIABLE_SolnsMap_0_12;
        }
        break;
      case ((int) MR_cp_type_coverage_after):
        {
          {
            mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, (MR_Word) &coverage__coverage__type_ctor_info_coverage_point_0, ((MR_Box) (coverage__GoalPath_10)), ((MR_Box) (coverage__CoveragePoint_6)), coverage__STATE_VARIABLE_SolnsMap_0_12, coverage__STATE_VARIABLE_SolnsMap_13);
          }
          *coverage__STATE_VARIABLE_BranchMap_15 = coverage__STATE_VARIABLE_BranchMap_0_14;
        }
        break;
    }
  }
}

void MR_CALL 
coverage__procrep_annotate_with_coverage_8_p_0(
  MR_Word coverage__TypeInfo_for_T_26,
  MR_Word coverage__ProcRep_9,
  MR_Word coverage__OwnProf_10,
  MR_Word coverage__CallSites_11,
  MR_Word coverage__SolnsCoveragePoints_12,
  MR_Word coverage__BranchCoveragePoints_13,
  MR_Word coverage__ContainingGoalMap_14,
  MR_Word coverage__LastGoalId_15,
  MR_Word * coverage__CoverageArray_16)
{
  {
    MR_Word coverage__GoalRep_17;
    MR_Word coverage__ProcLabel_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__ProcRep_9, (MR_Integer) 0)));
    MR_Word coverage__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__ProcRep_9, (MR_Integer) 1)));
    MR_Word coverage__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Var_19, (MR_Integer) 0)));
    MR_Word coverage__Var_22;
    MR_Word coverage__Var_23;
    MR_Word coverage__Var_24;

    coverage__GoalRep_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Var_19, (MR_Integer) 1)));
    coverage__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Var_19, (MR_Integer) 2)));
    coverage__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Var_19, (MR_Integer) 3)));
    coverage__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Var_19, (MR_Integer) 4)));
    {
      coverage__goal_annotate_with_coverage_9_p_0(coverage__TypeInfo_for_T_26, coverage__ProcLabel_18, coverage__GoalRep_17, coverage__OwnProf_10, coverage__CallSites_11, coverage__SolnsCoveragePoints_12, coverage__BranchCoveragePoints_13, coverage__ContainingGoalMap_14, coverage__LastGoalId_15, coverage__CoverageArray_16);
    }
  }
}

static MR_bool MR_CALL 
coverage__goal_annotate_with_coverage_9_p_0_1(
  MR_Box coverage__closure_arg)
{
  {
    MR_bool coverage__succeeded;
    MR_Box coverage__closure = coverage__closure_arg;

    {
      coverage__succeeded = coverage__IntroducedFrom__pred__goal_annotate_with_coverage__254__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), coverage__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__closure, (MR_Integer) 4))));
    }
    return coverage__succeeded;
  }
}

void MR_CALL 
coverage__goal_annotate_with_coverage_9_p_0(
  MR_Word coverage__TypeInfo_for_T_31,
  MR_Word coverage__ProcLabel_10,
  MR_Word coverage__GoalRep_11,
  MR_Word coverage__OwnProf_12,
  MR_Word coverage__CallSites_13,
  MR_Word coverage__SolnsCoveragePoints_14,
  MR_Word coverage__BranchCoveragePoints_15,
  MR_Word coverage__ContainingGoalMap_16,
  MR_Word coverage__LastGoalId_17,
  MR_Word * coverage__CoverageArray_18)
{
  {
    MR_bool coverage__succeeded;
    MR_Integer coverage__Calls_19;
    MR_Integer coverage__Exits_20;
    MR_Word coverage__Before_21;
    MR_Word coverage__GoalPathMap_22;
    MR_Word coverage__CoverageReference_23;
    MR_Word coverage__CoverageArray0_24;
    MR_Word coverage__After_25;
    MR_Word coverage__Var_26;
    MR_Word coverage__Var_28;

    {
      coverage__Calls_19 = measurements__calls_1_f_0(coverage__OwnProf_12);
    }
    {
      coverage__Exits_20 = measurements__exits_1_f_0(coverage__OwnProf_12);
    }
    coverage__succeeded = (coverage__Calls_19 == (MR_Integer) 0);
    if (coverage__succeeded)
      coverage__Before_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
    else
      {
        coverage__Before_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), coverage__Before_21, 0) = ((MR_Box) (coverage__Calls_19));
      }
    {
      coverage__GoalPathMap_22 = mdbcomp__goal_path__create_reverse_goal_path_map_1_f_0(coverage__ContainingGoalMap_16);
    }
    {
      coverage__CoverageReference_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), coverage__CoverageReference_23, 0) = ((MR_Box) (coverage__ProcLabel_10));
      MR_hl_field(MR_mktag(0), coverage__CoverageReference_23, 1) = ((MR_Box) (coverage__CallSites_13));
      MR_hl_field(MR_mktag(0), coverage__CoverageReference_23, 2) = ((MR_Box) (coverage__SolnsCoveragePoints_14));
      MR_hl_field(MR_mktag(0), coverage__CoverageReference_23, 3) = ((MR_Box) (coverage__BranchCoveragePoints_15));
      MR_hl_field(MR_mktag(0), coverage__CoverageReference_23, 4) = ((MR_Box) (coverage__GoalPathMap_22));
    }
    {
      coverage__CoverageArray0_24 = mdbcomp__goal_path__create_goal_id_array_1_f_0((MR_Word) &coverage__coverage__type_ctor_info_coverage_info_0, coverage__LastGoalId_17);
    }
    {
      coverage__goal_annotate_coverage_6_p_0(coverage__TypeInfo_for_T_31, coverage__GoalRep_11, coverage__CoverageReference_23, coverage__Before_21, &coverage__After_25, coverage__CoverageArray0_24, coverage__CoverageArray_18);
    }
    coverage__succeeded = (coverage__Exits_20 == (MR_Integer) 0);
    if (coverage__succeeded)
      coverage__Var_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
    else
      {
        coverage__Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), coverage__Var_28, 0) = ((MR_Box) (coverage__Exits_20));
      }
    {
      coverage__Var_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), coverage__Var_26, 0) = ((MR_Box) (&coverage_scalar_common_3[2]));
      MR_hl_field(MR_mktag(0), coverage__Var_26, 1) = ((MR_Box) (coverage__goal_annotate_with_coverage_9_p_0_1));
      MR_hl_field(MR_mktag(0), coverage__Var_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), coverage__Var_26, 3) = ((MR_Box) (coverage__After_25));
      MR_hl_field(MR_mktag(0), coverage__Var_26, 4) = ((MR_Box) (coverage__Var_28));
    }
    {
      mercury__require__require_2_p_0(coverage__Var_26, (MR_String) "Coverage after procedure not equal with exit count of procedure");
    }
  }
}

static void MR_CALL 
coverage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_105_115_106_95_97_110_110_111_116_97_116_101_95_99_111_118_101_114_97_103_101_95_95_91_52_93_95_48_8_p_0(
  MR_Word coverage__TypeInfo_for_Callee_46,
  MR_Word coverage__HeadVar__1_1,
  MR_Word coverage__Info_2,
  MR_Word coverage__Before0_4,
  MR_Word coverage__STATE_VARIABLE_SumAfter_0_5,
  MR_Word * coverage__STATE_VARIABLE_SumAfter_6,
  MR_Word coverage__STATE_VARIABLE_Array_0_7,
  MR_Word * coverage__STATE_VARIABLE_Array_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool coverage__succeeded;

        if ((coverage__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *coverage__STATE_VARIABLE_Array_8 = coverage__STATE_VARIABLE_Array_0_7;
            *coverage__STATE_VARIABLE_SumAfter_6 = coverage__STATE_VARIABLE_SumAfter_0_5;
          }
        else
          {
            MR_Word coverage__Disj_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), coverage__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word coverage__Disjs_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), coverage__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word coverage__DisjRevGoalPath_25;
            MR_Word coverage__Before_27;
            MR_Word coverage__After_28;
            MR_Word coverage__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_2, (MR_Integer) 4)));
            MR_Word coverage__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Disj_18, (MR_Integer) 2)));
            MR_Word coverage__STATE_VARIABLE_Array_35_35;
            MR_Word coverage__STATE_VARIABLE_SumAfter_36_36;
            MR_Word coverage__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_2, (MR_Integer) 0)));
            MR_Word coverage__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_2, (MR_Integer) 1)));
            MR_Word coverage__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_2, (MR_Integer) 2)));
            MR_Word coverage__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_2, (MR_Integer) 3)));
            MR_Word coverage__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Disj_18, (MR_Integer) 0)));
            MR_Word coverage__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Disj_18, (MR_Integer) 1)));
            MR_Box coverage__conv0_DisjRevGoalPath_25;

            {
              coverage__conv0_DisjRevGoalPath_25 = mercury__map__lookup_2_f_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, coverage__Var_33, ((MR_Box) (coverage__Var_34)));
            }
            coverage__DisjRevGoalPath_25 = ((MR_Word) coverage__conv0_DisjRevGoalPath_25);
            switch (MR_tag((MR_Word) coverage__Before0_4)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(coverage__Before0_4)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word coverage__CP_52;
                      MR_Word coverage__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_2, (MR_Integer) 3)));
                      MR_Word coverage__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_2, (MR_Integer) 0)));
                      MR_Word coverage__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_2, (MR_Integer) 1)));
                      MR_Word coverage__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_2, (MR_Integer) 2)));
                      MR_Word coverage__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_2, (MR_Integer) 4)));
                      MR_Box coverage__conv1_CP_52;

                      {
                        coverage__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, (MR_Word) &coverage__coverage__type_ctor_info_coverage_point_0, coverage__Var_56, ((MR_Box) (coverage__DisjRevGoalPath_25)), &coverage__conv1_CP_52);
                      }
                      if (coverage__succeeded)
                        {
                          coverage__CP_52 = ((MR_Word) coverage__conv1_CP_52);
                          coverage__succeeded = MR_TRUE;
                        }
                      if (coverage__succeeded)
                        {
                          MR_Integer coverage__ExecCount_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), coverage__CP_52, (MR_Integer) 0)));
                          MR_Word coverage__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__CP_52, (MR_Integer) 1)));
                          MR_Word coverage__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__CP_52, (MR_Integer) 2)));

                          coverage__succeeded = (coverage__ExecCount_53 == (MR_Integer) 0);
                          if (coverage__succeeded)
                            coverage__Before_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
                          else
                            {
                              coverage__Before_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), coverage__Before_27, 0) = ((MR_Box) (coverage__ExecCount_53));
                            }
                        }
                      else
                        coverage__Before_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    }
                    break;
                  case (MR_Integer) 1:
                    coverage__Before_27 = coverage__Before0_4;
                    break;
                }
                break;
              case (MR_Integer) 1:
                coverage__Before_27 = coverage__Before0_4;
                break;
            }
            {
              coverage__goal_annotate_coverage_6_p_0(coverage__TypeInfo_for_Callee_46, coverage__Disj_18, coverage__Info_2, coverage__Before_27, &coverage__After_28, coverage__STATE_VARIABLE_Array_0_7, &coverage__STATE_VARIABLE_Array_35_35);
            }
            switch (MR_tag((MR_Word) coverage__STATE_VARIABLE_SumAfter_0_5)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(coverage__STATE_VARIABLE_SumAfter_0_5)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    coverage__STATE_VARIABLE_SumAfter_36_36 = coverage__STATE_VARIABLE_SumAfter_0_5;
                    break;
                  case (MR_Integer) 1:
                    switch (MR_tag((MR_Word) coverage__After_28)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        switch (MR_unmkbody(coverage__After_28)) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            coverage__STATE_VARIABLE_SumAfter_36_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                            break;
                          case (MR_Integer) 1:
                            coverage__STATE_VARIABLE_SumAfter_36_36 = coverage__STATE_VARIABLE_SumAfter_0_5;
                            break;
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Integer coverage__ExecCount_75 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__After_28, (MR_Integer) 0)));

                          {
                            coverage__STATE_VARIABLE_SumAfter_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), coverage__STATE_VARIABLE_SumAfter_36_36, 0) = ((MR_Box) (coverage__ExecCount_75));
                          }
                        }
                        break;
                    }
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer coverage__SumExecCount_68 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__STATE_VARIABLE_SumAfter_0_5, (MR_Integer) 0)));

                  switch (MR_tag((MR_Word) coverage__After_28)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      switch (MR_unmkbody(coverage__After_28)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          coverage__STATE_VARIABLE_SumAfter_36_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                          break;
                        case (MR_Integer) 1:
                          coverage__STATE_VARIABLE_SumAfter_36_36 = coverage__STATE_VARIABLE_SumAfter_0_5;
                          break;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Integer coverage__ExecCount_69 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__After_28, (MR_Integer) 0)));
                        MR_Integer coverage__Var_74 = (coverage__SumExecCount_68 + coverage__ExecCount_69);

                        {
                          coverage__STATE_VARIABLE_SumAfter_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), coverage__STATE_VARIABLE_SumAfter_36_36, 0) = ((MR_Box) (coverage__Var_74));
                        }
                      }
                      break;
                  }
                }
                break;
            }
            /* direct tailcall eliminated */
            {
              MR_Word coverage__next_value_of_HeadVar__1_1 = coverage__Disjs_19;
              MR_Word coverage__next_value_of_STATE_VARIABLE_SumAfter_0_5 = coverage__STATE_VARIABLE_SumAfter_36_36;
              MR_Word coverage__next_value_of_STATE_VARIABLE_Array_0_7 = coverage__STATE_VARIABLE_Array_35_35;

              coverage__STATE_VARIABLE_Array_0_7 = coverage__next_value_of_STATE_VARIABLE_Array_0_7;
              coverage__STATE_VARIABLE_SumAfter_0_5 = coverage__next_value_of_STATE_VARIABLE_SumAfter_0_5;
              coverage__Before0_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              coverage__HeadVar__1_1 = coverage__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
coverage__scope_annotate_coverage_7_p_0(
  MR_Word coverage__TypeInfo_for_Callee_18,
  MR_Word coverage__Goal_8,
  MR_Word coverage__Info_9,
  MR_Word coverage__MaybeCut_10,
  MR_Word coverage__Before_11,
  MR_Word * coverage__After_12,
  MR_Word coverage__STATE_VARIABLE_Array_0_15,
  MR_Word * coverage__STATE_VARIABLE_Array_16)
{
  {
    MR_Word coverage__AfterScopedGoal_14;

    {
      coverage__goal_annotate_coverage_6_p_0(coverage__TypeInfo_for_Callee_18, coverage__Goal_8, coverage__Info_9, coverage__Before_11, &coverage__AfterScopedGoal_14, coverage__STATE_VARIABLE_Array_0_15, coverage__STATE_VARIABLE_Array_16);
    }
    switch (coverage__MaybeCut_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *coverage__After_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        *coverage__After_12 = coverage__AfterScopedGoal_14;
        break;
    }
  }
}

static void MR_CALL 
coverage__negation_annotate_coverage_6_p_0(
  MR_Word coverage__TypeInfo_for_Callee_27,
  MR_Word coverage__Goal_7,
  MR_Word coverage__Info_8,
  MR_Word coverage__Before_9,
  MR_Word * coverage__After_10,
  MR_Word coverage__STATE_VARIABLE_Array_0_14,
  MR_Word * coverage__STATE_VARIABLE_Array_15)
{
  {
    MR_Word coverage___CoverageAfter_12;

    {
      coverage__goal_annotate_coverage_6_p_0(coverage__TypeInfo_for_Callee_27, coverage__Goal_7, coverage__Info_8, coverage__Before_9, &coverage___CoverageAfter_12, coverage__STATE_VARIABLE_Array_0_14, coverage__STATE_VARIABLE_Array_15);
    }
    *coverage__After_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  }
}

static void MR_CALL 
coverage__ite_annotate_coverage_9_p_0(
  MR_Word coverage__TypeInfo_for_Callee_128,
  MR_Word coverage__Cond_10,
  MR_Word coverage__Then_11,
  MR_Word coverage__Else_12,
  MR_Word coverage__Info_13,
  MR_Word coverage__RevGoalPath_14,
  MR_Word coverage__Before_15,
  MR_Word * coverage__After_16,
  MR_Word coverage__STATE_VARIABLE_Array_0_35,
  MR_Word * coverage__STATE_VARIABLE_Array_36)
{
  {
    MR_bool coverage__succeeded;
    MR_Word coverage__CondDetism_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Cond_10, (MR_Integer) 1)));
    MR_Word coverage__GoalPathMap_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_13, (MR_Integer) 4)));
    MR_Word coverage__AfterCond_20;
    MR_Word coverage__BeforeThen0_21;
    MR_Word coverage__BeforeThen_23;
    MR_Word coverage__CondSolns_25;
    MR_Word coverage__BeforeElse_27;
    MR_Word coverage__AfterThen_31;
    MR_Word coverage__AfterElse_32;
    MR_Word coverage__STATE_VARIABLE_Array_37_37;
    MR_Word coverage__STATE_VARIABLE_Array_63_63;
    MR_Word coverage__Var_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Cond_10, (MR_Integer) 0)));
    MR_Word coverage__Var_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Cond_10, (MR_Integer) 2)));
    MR_Word coverage__Var_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_13, (MR_Integer) 0)));
    MR_Word coverage__Var_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_13, (MR_Integer) 1)));
    MR_Word coverage__Var_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_13, (MR_Integer) 2)));
    MR_Word coverage__Var_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_13, (MR_Integer) 3)));

    {
      coverage__goal_annotate_coverage_6_p_0(coverage__TypeInfo_for_Callee_128, coverage__Cond_10, coverage__Info_13, coverage__Before_15, &coverage__AfterCond_20, coverage__STATE_VARIABLE_Array_0_35, &coverage__STATE_VARIABLE_Array_37_37);
    }
    {
      coverage__after_to_before_coverage_2_p_0(coverage__AfterCond_20, &coverage__BeforeThen0_21);
    }
    switch (MR_tag((MR_Word) coverage__BeforeThen0_21)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(coverage__BeforeThen0_21)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word coverage__RevThenGoalPath_24;
              MR_Word coverage__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Then_11, (MR_Integer) 2)));
              MR_Word coverage__Var_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Then_11, (MR_Integer) 0)));
              MR_Word coverage__Var_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Then_11, (MR_Integer) 1)));
              MR_Box coverage__conv0_RevThenGoalPath_24;

              {
                coverage__conv0_RevThenGoalPath_24 = mercury__map__lookup_2_f_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, coverage__GoalPathMap_19, ((MR_Box) (coverage__Var_38)));
              }
              coverage__RevThenGoalPath_24 = ((MR_Word) coverage__conv0_RevThenGoalPath_24);
              {
                coverage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_115_116_97_114_116_95_99_111_118_101_114_97_103_101_95_95_91_49_93_95_48_3_p_0(coverage__Info_13, coverage__RevThenGoalPath_24, &coverage__BeforeThen_23);
              }
            }
            break;
          case (MR_Integer) 1:
            coverage__BeforeThen_23 = coverage__BeforeThen0_21;
            break;
        }
        break;
      case (MR_Integer) 1:
        coverage__BeforeThen_23 = coverage__BeforeThen0_21;
        break;
    }
    {
      coverage__CondSolns_25 = mdbcomp__program_representation__detism_get_solutions_1_f_0(coverage__CondDetism_18);
    }
    switch (coverage__CondSolns_25) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        {
          MR_Word coverage__RevElseGoalPath_26;
          MR_Word coverage__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Else_12, (MR_Integer) 2)));
          MR_Word coverage__Var_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Else_12, (MR_Integer) 0)));
          MR_Word coverage__Var_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Else_12, (MR_Integer) 1)));
          MR_Box coverage__conv1_RevElseGoalPath_26;

          {
            coverage__conv1_RevElseGoalPath_26 = mercury__map__lookup_2_f_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, coverage__GoalPathMap_19, ((MR_Box) (coverage__Var_42)));
          }
          coverage__RevElseGoalPath_26 = ((MR_Word) coverage__conv1_RevElseGoalPath_26);
          {
            coverage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_115_116_97_114_116_95_99_111_118_101_114_97_103_101_95_95_91_49_93_95_48_3_p_0(coverage__Info_13, coverage__RevElseGoalPath_26, &coverage__BeforeElse_27);
          }
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 0:
        switch (MR_tag((MR_Word) coverage__BeforeThen_23)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(coverage__BeforeThen_23)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word coverage__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Else_12, (MR_Integer) 2)));
                  MR_Word coverage__RevElseGoalPath_108;
                  MR_Word coverage__Var_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Else_12, (MR_Integer) 0)));
                  MR_Word coverage__Var_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Else_12, (MR_Integer) 1)));
                  MR_Box coverage__conv3_RevElseGoalPath_108;

                  {
                    coverage__conv3_RevElseGoalPath_108 = mercury__map__lookup_2_f_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, coverage__GoalPathMap_19, ((MR_Box) (coverage__Var_39)));
                  }
                  coverage__RevElseGoalPath_108 = ((MR_Word) coverage__conv3_RevElseGoalPath_108);
                  {
                    coverage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_115_116_97_114_116_95_99_111_118_101_114_97_103_101_95_95_91_49_93_95_48_3_p_0(coverage__Info_13, coverage__RevElseGoalPath_108, &coverage__BeforeElse_27);
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  switch (MR_tag((MR_Word) coverage__Before_15)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      switch (MR_unmkbody(coverage__Before_15)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            MR_Word coverage__Var_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Else_12, (MR_Integer) 2)));
                            MR_Word coverage__RevElseGoalPath_147;
                            MR_Word coverage__Var_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Else_12, (MR_Integer) 0)));
                            MR_Word coverage__Var_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Else_12, (MR_Integer) 1)));
                            MR_Box coverage__conv4_RevElseGoalPath_147;

                            {
                              coverage__conv4_RevElseGoalPath_147 = mercury__map__lookup_2_f_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, coverage__GoalPathMap_19, ((MR_Box) (coverage__Var_146)));
                            }
                            coverage__RevElseGoalPath_147 = ((MR_Word) coverage__conv4_RevElseGoalPath_147);
                            {
                              coverage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_115_116_97_114_116_95_99_111_118_101_114_97_103_101_95_95_91_49_93_95_48_3_p_0(coverage__Info_13, coverage__RevElseGoalPath_147, &coverage__BeforeElse_27);
                            }
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            {
                              coverage__BeforeElse_27 = coverage__before_coverage_1_f_0(((MR_Integer) 0 - (MR_Integer) 0));
                            }
                          }
                          break;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Integer coverage__BeforeCount_142 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__Before_15, (MR_Integer) 0)));
                        MR_Integer coverage__Var_143 = (coverage__BeforeCount_142 - (MR_Integer) 0);

                        {
                          coverage__BeforeElse_27 = coverage__before_coverage_1_f_0(coverage__Var_143);
                        }
                      }
                      break;
                  }
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer coverage__BeforeThenCount_28 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__BeforeThen_23, (MR_Integer) 0)));

              switch (MR_tag((MR_Word) coverage__Before_15)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(coverage__Before_15)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word coverage__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Else_12, (MR_Integer) 2)));
                        MR_Word coverage__RevElseGoalPath_105;
                        MR_Word coverage__Var_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Else_12, (MR_Integer) 0)));
                        MR_Word coverage__Var_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Else_12, (MR_Integer) 1)));
                        MR_Box coverage__conv2_RevElseGoalPath_105;

                        {
                          coverage__conv2_RevElseGoalPath_105 = mercury__map__lookup_2_f_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, coverage__GoalPathMap_19, ((MR_Box) (coverage__Var_40)));
                        }
                        coverage__RevElseGoalPath_105 = ((MR_Word) coverage__conv2_RevElseGoalPath_105);
                        {
                          coverage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_115_116_97_114_116_95_99_111_118_101_114_97_103_101_95_95_91_49_93_95_48_3_p_0(coverage__Info_13, coverage__RevElseGoalPath_105, &coverage__BeforeElse_27);
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Integer coverage__Var_141 = ((MR_Integer) 0 - coverage__BeforeThenCount_28);

                        {
                          coverage__BeforeElse_27 = coverage__before_coverage_1_f_0(coverage__Var_141);
                        }
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Integer coverage__BeforeCount_29 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__Before_15, (MR_Integer) 0)));
                    MR_Integer coverage__Var_41 = (coverage__BeforeCount_29 - coverage__BeforeThenCount_28);

                    {
                      coverage__BeforeElse_27 = coverage__before_coverage_1_f_0(coverage__Var_41);
                    }
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
    {
      coverage__goal_annotate_coverage_6_p_0(coverage__TypeInfo_for_Callee_128, coverage__Then_11, coverage__Info_13, coverage__BeforeThen_23, &coverage__AfterThen_31, coverage__STATE_VARIABLE_Array_37_37, &coverage__STATE_VARIABLE_Array_63_63);
    }
    {
      coverage__goal_annotate_coverage_6_p_0(coverage__TypeInfo_for_Callee_128, coverage__Else_12, coverage__Info_13, coverage__BeforeElse_27, &coverage__AfterElse_32, coverage__STATE_VARIABLE_Array_63_63, coverage__STATE_VARIABLE_Array_36);
    }
    switch (MR_tag((MR_Word) coverage__AfterThen_31)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(coverage__AfterThen_31)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *coverage__After_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 1:
            switch (MR_tag((MR_Word) coverage__AfterElse_32)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(coverage__AfterElse_32)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *coverage__After_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    break;
                  case (MR_Integer) 1:
                    *coverage__After_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer coverage__AfterElseExecCount_111 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__AfterElse_32, (MR_Integer) 0)));

                  {
                    *coverage__After_16 = coverage__after_coverage_1_f_0(coverage__AfterElseExecCount_111);
                  }
                }
                break;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer coverage__AfterThenExecCount_33 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__AfterThen_31, (MR_Integer) 0)));

          switch (MR_tag((MR_Word) coverage__AfterElse_32)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(coverage__AfterElse_32)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *coverage__After_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  break;
                case (MR_Integer) 1:
                  {
                    *coverage__After_16 = coverage__after_coverage_1_f_0(coverage__AfterThenExecCount_33);
                  }
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer coverage__AfterElseExecCount_34 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__AfterElse_32, (MR_Integer) 0)));
                MR_Integer coverage__Var_65 = (coverage__AfterThenExecCount_33 + coverage__AfterElseExecCount_34);

                {
                  *coverage__After_16 = coverage__after_coverage_1_f_0(coverage__Var_65);
                }
              }
              break;
          }
        }
        break;
    }
    {
      coverage__succeeded = coverage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_116_101_95_99_111_118_101_114_97_103_101_95_95_91_55_93_95_48_9_p_0(coverage__Before_15, *coverage__After_16, coverage__Before_15, coverage__AfterCond_20, coverage__BeforeThen_23, coverage__AfterThen_31, coverage__AfterElse_32, coverage__CondDetism_18);
    }
    if (coverage__succeeded)
      {
      }
    else
      {
        MR_Word coverage__TypeCtorInfo_138_138 = (MR_Word) &coverage__coverage__type_ctor_info_coverage_before_0;
        MR_Word coverage__TypeCtorInfo_139_139;
        MR_String coverage__Var_69;
        MR_String coverage__Var_79;
        MR_String coverage__Var_82;
        MR_String coverage__Var_85;
        MR_String coverage__Var_88;
        MR_String coverage__Var_91;
        MR_String coverage__Var_94;
        MR_String coverage__Var_97;
        MR_String coverage__Var_100;
        MR_String coverage__Var_103;
        MR_String coverage__Var_185;
        MR_String coverage__Var_187;
        MR_String coverage__Var_188;
        MR_String coverage__Var_190;
        MR_String coverage__Var_191;
        MR_String coverage__Var_193;
        MR_String coverage__Var_194;
        MR_String coverage__Var_196;
        MR_String coverage__Var_197;
        MR_String coverage__Var_199;
        MR_String coverage__Var_200;
        MR_String coverage__Var_202;
        MR_String coverage__Var_203;
        MR_String coverage__Var_205;
        MR_String coverage__Var_206;
        MR_String coverage__Var_208;
        MR_String coverage__Var_209;

        {
          coverage__Var_79 = mercury__string__string_1_f_0(coverage__TypeCtorInfo_138_138, ((MR_Box) (coverage__Before_15)));
        }
        coverage__TypeCtorInfo_139_139 = (MR_Word) &coverage__coverage__type_ctor_info_coverage_after_0;
        {
          coverage__Var_82 = mercury__string__string_1_f_0(coverage__TypeCtorInfo_139_139, ((MR_Box) (*coverage__After_16)));
        }
        {
          coverage__Var_85 = mercury__string__string_1_f_0(coverage__TypeCtorInfo_138_138, ((MR_Box) (coverage__Before_15)));
        }
        {
          coverage__Var_88 = mercury__string__string_1_f_0(coverage__TypeCtorInfo_139_139, ((MR_Box) (coverage__AfterCond_20)));
        }
        {
          coverage__Var_91 = mercury__string__string_1_f_0(coverage__TypeCtorInfo_138_138, ((MR_Box) (coverage__BeforeThen_23)));
        }
        {
          coverage__Var_94 = mercury__string__string_1_f_0(coverage__TypeCtorInfo_139_139, ((MR_Box) (coverage__AfterThen_31)));
        }
        {
          coverage__Var_97 = mercury__string__string_1_f_0(coverage__TypeCtorInfo_138_138, ((MR_Box) (coverage__BeforeElse_27)));
        }
        {
          coverage__Var_100 = mercury__string__string_1_f_0(coverage__TypeCtorInfo_139_139, ((MR_Box) (coverage__AfterElse_32)));
        }
        {
          coverage__Var_103 = mdbcomp__goal_path__rev_goal_path_to_string_1_f_0(coverage__RevGoalPath_14);
        }
        {
          coverage__Var_185 = mercury__string__f_43_43_2_f_0(coverage__Var_103, (MR_String) "\n");
        }
        {
          coverage__Var_187 = mercury__string__f_43_43_2_f_0((MR_String) "\n\tGoalPath: ", coverage__Var_185);
        }
        {
          coverage__Var_188 = mercury__string__f_43_43_2_f_0(coverage__Var_100, coverage__Var_187);
        }
        {
          coverage__Var_190 = mercury__string__f_43_43_2_f_0((MR_String) " ", coverage__Var_188);
        }
        {
          coverage__Var_191 = mercury__string__f_43_43_2_f_0(coverage__Var_97, coverage__Var_190);
        }
        {
          coverage__Var_193 = mercury__string__f_43_43_2_f_0((MR_String) "\n\tElse: ", coverage__Var_191);
        }
        {
          coverage__Var_194 = mercury__string__f_43_43_2_f_0(coverage__Var_94, coverage__Var_193);
        }
        {
          coverage__Var_196 = mercury__string__f_43_43_2_f_0((MR_String) " ", coverage__Var_194);
        }
        {
          coverage__Var_197 = mercury__string__f_43_43_2_f_0(coverage__Var_91, coverage__Var_196);
        }
        {
          coverage__Var_199 = mercury__string__f_43_43_2_f_0((MR_String) "\n\tThen: ", coverage__Var_197);
        }
        {
          coverage__Var_200 = mercury__string__f_43_43_2_f_0(coverage__Var_88, coverage__Var_199);
        }
        {
          coverage__Var_202 = mercury__string__f_43_43_2_f_0((MR_String) " ", coverage__Var_200);
        }
        {
          coverage__Var_203 = mercury__string__f_43_43_2_f_0(coverage__Var_85, coverage__Var_202);
        }
        {
          coverage__Var_205 = mercury__string__f_43_43_2_f_0((MR_String) "\n\tCond: ", coverage__Var_203);
        }
        {
          coverage__Var_206 = mercury__string__f_43_43_2_f_0(coverage__Var_82, coverage__Var_205);
        }
        {
          coverage__Var_208 = mercury__string__f_43_43_2_f_0((MR_String) " ", coverage__Var_206);
        }
        {
          coverage__Var_209 = mercury__string__f_43_43_2_f_0(coverage__Var_79, coverage__Var_208);
        }
        {
          coverage__Var_69 = mercury__string__f_43_43_2_f_0((MR_String) "check_ite_coverage/4 failed\n\tWhole: ", coverage__Var_209);
        }
        {
          mercury__require__unexpected_3_p_0((MR_String) "coverage", (MR_String) "predicate \140coverage.ite_annotate_coverage\'/9", coverage__Var_69);
          return;
        }
      }
  }
}

static void MR_CALL 
coverage__switch_annotate_coverage_2_10_p_0(
  MR_Word coverage__TypeInfo_for_Callee_60,
  MR_Word coverage__HeadVar__1_1,
  MR_Word coverage__Info_2,
  MR_Word coverage__CanFail_3,
  MR_Word coverage__SwitchBefore_4,
  MR_Word coverage__STATE_VARIABLE_SumBefore_0_5,
  MR_Word * coverage__STATE_VARIABLE_SumBefore_6,
  MR_Word coverage__STATE_VARIABLE_SumAfter_0_7,
  MR_Word * coverage__STATE_VARIABLE_SumAfter_8,
  MR_Word coverage__STATE_VARIABLE_Array_0_9,
  MR_Word * coverage__STATE_VARIABLE_Array_10)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool coverage__succeeded;

        if ((coverage__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *coverage__STATE_VARIABLE_Array_10 = coverage__STATE_VARIABLE_Array_0_9;
            *coverage__STATE_VARIABLE_SumAfter_8 = coverage__STATE_VARIABLE_SumAfter_0_7;
            *coverage__STATE_VARIABLE_SumBefore_6 = coverage__STATE_VARIABLE_SumBefore_0_5;
          }
        else
          {
            MR_Word coverage__Case_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), coverage__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word coverage__Cases_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), coverage__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word coverage__BeforeCase_33;
            MR_Word coverage__Goal_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Case_23, (MR_Integer) 2)));
            MR_Word coverage__AfterCase_38;
            MR_Word coverage__STATE_VARIABLE_Array_48_48;
            MR_Word coverage__STATE_VARIABLE_SumBefore_49_49;
            MR_Word coverage__STATE_VARIABLE_SumAfter_50_50;
            MR_Word coverage___ConsID_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Case_23, (MR_Integer) 0)));
            MR_Word coverage___OtherConsIDs_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Case_23, (MR_Integer) 1)));
            MR_Integer coverage__SwitchBeforeExecCount_31;
            MR_Integer coverage__SumBeforeExecCount_32;

            coverage__succeeded = (coverage__Cases_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (coverage__succeeded)
              {
                coverage__succeeded = (coverage__CanFail_3 == (MR_Integer) 1);
                if (coverage__succeeded)
                  {
                    if ((coverage__SwitchBefore_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
                      {
                        coverage__SwitchBeforeExecCount_31 = (MR_Integer) 0;
                        coverage__succeeded = MR_TRUE;
                      }
                    else
                    if (((MR_tag((MR_Word) coverage__SwitchBefore_4)) == (MR_mktag((MR_Integer) 1))))
                      {
                        coverage__SwitchBeforeExecCount_31 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__SwitchBefore_4, (MR_Integer) 0)));
                        coverage__succeeded = MR_TRUE;
                      }
                    else
                      coverage__succeeded = MR_FALSE;
                    if (coverage__succeeded)
                      {
                        if ((coverage__STATE_VARIABLE_SumBefore_0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
                          {
                            coverage__SumBeforeExecCount_32 = (MR_Integer) 0;
                            coverage__succeeded = MR_TRUE;
                          }
                        else
                        if (((MR_tag((MR_Word) coverage__STATE_VARIABLE_SumBefore_0_5)) == (MR_mktag((MR_Integer) 1))))
                          {
                            coverage__SumBeforeExecCount_32 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__STATE_VARIABLE_SumBefore_0_5, (MR_Integer) 0)));
                            coverage__succeeded = MR_TRUE;
                          }
                        else
                          coverage__succeeded = MR_FALSE;
                      }
                  }
              }
            if (coverage__succeeded)
              {
                MR_Integer coverage__Var_45 = (coverage__SwitchBeforeExecCount_31 - coverage__SumBeforeExecCount_32);

                coverage__succeeded = (coverage__Var_45 == (MR_Integer) 0);
                if (coverage__succeeded)
                  coverage__BeforeCase_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
                else
                  {
                    coverage__BeforeCase_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), coverage__BeforeCase_33, 0) = ((MR_Box) (coverage__Var_45));
                  }
              }
            else
              {
                MR_Word coverage__RevCaseGoalPath_34;
                MR_Word coverage__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_2, (MR_Integer) 4)));
                MR_Word coverage__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Goal_35, (MR_Integer) 2)));
                MR_Word coverage__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_2, (MR_Integer) 0)));
                MR_Word coverage__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_2, (MR_Integer) 1)));
                MR_Word coverage__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_2, (MR_Integer) 2)));
                MR_Word coverage__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_2, (MR_Integer) 3)));
                MR_Word coverage__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Goal_35, (MR_Integer) 0)));
                MR_Word coverage__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Goal_35, (MR_Integer) 1)));
                MR_Box coverage__conv0_RevCaseGoalPath_34;
                MR_Word coverage__CP_67;
                MR_Word coverage__Var_71;
                MR_Word coverage__Var_72;
                MR_Word coverage__Var_73;
                MR_Word coverage__Var_74;
                MR_Word coverage__Var_75;
                MR_Box coverage__conv1_CP_67;

                {
                  coverage__conv0_RevCaseGoalPath_34 = mercury__map__lookup_2_f_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, coverage__Var_46, ((MR_Box) (coverage__Var_47)));
                }
                coverage__RevCaseGoalPath_34 = ((MR_Word) coverage__conv0_RevCaseGoalPath_34);
                coverage__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_2, (MR_Integer) 0)));
                coverage__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_2, (MR_Integer) 1)));
                coverage__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_2, (MR_Integer) 2)));
                coverage__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_2, (MR_Integer) 3)));
                coverage__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_2, (MR_Integer) 4)));
                {
                  coverage__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, (MR_Word) &coverage__coverage__type_ctor_info_coverage_point_0, coverage__Var_71, ((MR_Box) (coverage__RevCaseGoalPath_34)), &coverage__conv1_CP_67);
                }
                if (coverage__succeeded)
                  {
                    coverage__CP_67 = ((MR_Word) coverage__conv1_CP_67);
                    coverage__succeeded = MR_TRUE;
                  }
                if (coverage__succeeded)
                  {
                    MR_Integer coverage__ExecCount_68 = ((MR_Integer) (MR_hl_field(MR_mktag(0), coverage__CP_67, (MR_Integer) 0)));
                    MR_Word coverage__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__CP_67, (MR_Integer) 1)));
                    MR_Word coverage__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__CP_67, (MR_Integer) 2)));

                    coverage__succeeded = (coverage__ExecCount_68 == (MR_Integer) 0);
                    if (coverage__succeeded)
                      coverage__BeforeCase_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
                    else
                      {
                        coverage__BeforeCase_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), coverage__BeforeCase_33, 0) = ((MR_Box) (coverage__ExecCount_68));
                      }
                  }
                else
                  coverage__BeforeCase_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              }
            {
              coverage__goal_annotate_coverage_6_p_0(coverage__TypeInfo_for_Callee_60, coverage__Goal_35, coverage__Info_2, coverage__BeforeCase_33, &coverage__AfterCase_38, coverage__STATE_VARIABLE_Array_0_9, &coverage__STATE_VARIABLE_Array_48_48);
            }
            switch (MR_tag((MR_Word) coverage__STATE_VARIABLE_SumBefore_0_5)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(coverage__STATE_VARIABLE_SumBefore_0_5)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    coverage__STATE_VARIABLE_SumBefore_49_49 = coverage__STATE_VARIABLE_SumBefore_0_5;
                    break;
                  case (MR_Integer) 1:
                    switch (MR_tag((MR_Word) coverage__BeforeCase_33)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        switch (MR_unmkbody(coverage__BeforeCase_33)) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            coverage__STATE_VARIABLE_SumBefore_49_49 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                            break;
                          case (MR_Integer) 1:
                            coverage__STATE_VARIABLE_SumBefore_49_49 = coverage__STATE_VARIABLE_SumBefore_0_5;
                            break;
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Integer coverage__ExecCount_90 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__BeforeCase_33, (MR_Integer) 0)));

                          {
                            coverage__STATE_VARIABLE_SumBefore_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), coverage__STATE_VARIABLE_SumBefore_49_49, 0) = ((MR_Box) (coverage__ExecCount_90));
                          }
                        }
                        break;
                    }
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer coverage__SumExecCount_83 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__STATE_VARIABLE_SumBefore_0_5, (MR_Integer) 0)));

                  switch (MR_tag((MR_Word) coverage__BeforeCase_33)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      switch (MR_unmkbody(coverage__BeforeCase_33)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          coverage__STATE_VARIABLE_SumBefore_49_49 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                          break;
                        case (MR_Integer) 1:
                          coverage__STATE_VARIABLE_SumBefore_49_49 = coverage__STATE_VARIABLE_SumBefore_0_5;
                          break;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Integer coverage__ExecCount_84 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__BeforeCase_33, (MR_Integer) 0)));
                        MR_Integer coverage__Var_89 = (coverage__SumExecCount_83 + coverage__ExecCount_84);

                        {
                          coverage__STATE_VARIABLE_SumBefore_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), coverage__STATE_VARIABLE_SumBefore_49_49, 0) = ((MR_Box) (coverage__Var_89));
                        }
                      }
                      break;
                  }
                }
                break;
            }
            {
              coverage__sum_after_coverage_3_p_0(coverage__AfterCase_38, coverage__STATE_VARIABLE_SumAfter_0_7, &coverage__STATE_VARIABLE_SumAfter_50_50);
            }
            /* direct tailcall eliminated */
            {
              MR_Word coverage__next_value_of_HeadVar__1_1 = coverage__Cases_24;
              MR_Word coverage__next_value_of_STATE_VARIABLE_SumBefore_0_5 = coverage__STATE_VARIABLE_SumBefore_49_49;
              MR_Word coverage__next_value_of_STATE_VARIABLE_SumAfter_0_7 = coverage__STATE_VARIABLE_SumAfter_50_50;
              MR_Word coverage__next_value_of_STATE_VARIABLE_Array_0_9 = coverage__STATE_VARIABLE_Array_48_48;

              coverage__STATE_VARIABLE_Array_0_9 = coverage__next_value_of_STATE_VARIABLE_Array_0_9;
              coverage__STATE_VARIABLE_SumAfter_0_7 = coverage__next_value_of_STATE_VARIABLE_SumAfter_0_7;
              coverage__STATE_VARIABLE_SumBefore_0_5 = coverage__next_value_of_STATE_VARIABLE_SumBefore_0_5;
              coverage__HeadVar__1_1 = coverage__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
coverage__switch_annotate_coverage_7_p_0_1(
  MR_Box coverage__closure_arg,
  MR_Box coverage__wrapper_arg_1,
  MR_Box coverage__wrapper_arg_2,
  MR_Box * coverage__wrapper_arg_3)
{
  {
    MR_Box coverage__closure = coverage__closure_arg;
    MR_Word coverage__conv0_STATE_VARIABLE_Acc_16;

    {
      coverage__sum_switch_case_coverage_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), coverage__closure, (MR_Integer) 3))), ((MR_Word) coverage__wrapper_arg_1), ((MR_Word) coverage__wrapper_arg_2), &coverage__conv0_STATE_VARIABLE_Acc_16);
    }
    *coverage__wrapper_arg_3 = ((MR_Box) (coverage__conv0_STATE_VARIABLE_Acc_16));
  }
}

static void MR_CALL 
coverage__switch_annotate_coverage_7_p_0(
  MR_Word coverage__TypeInfo_for_Callee_49,
  MR_Word coverage__Cases_8,
  MR_Word coverage__Info_9,
  MR_Word coverage__CanFail_10,
  MR_Word coverage__Before_11,
  MR_Word * coverage__After_12,
  MR_Word coverage__STATE_VARIABLE_Array_0_18,
  MR_Word * coverage__STATE_VARIABLE_Array_19)
{
  {
    MR_bool coverage__succeeded;
    MR_Word coverage__SumAfter_16;
    MR_Word coverage___SumBefore_15;
    MR_Word coverage__Result_17;

    {
      coverage__switch_annotate_coverage_2_10_p_0(coverage__TypeInfo_for_Callee_49, coverage__Cases_8, coverage__Info_9, coverage__CanFail_10, coverage__Before_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), &coverage___SumBefore_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), &coverage__SumAfter_16, coverage__STATE_VARIABLE_Array_0_18, coverage__STATE_VARIABLE_Array_19);
    }
    switch (MR_tag((MR_Word) coverage__SumAfter_16)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(coverage__SumAfter_16)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *coverage__After_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 1:
            *coverage__After_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer coverage__C_71 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__SumAfter_16, (MR_Integer) 0)));

          coverage__succeeded = (coverage__C_71 == (MR_Integer) 0);
          if (coverage__succeeded)
            *coverage__After_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
          else
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *coverage__After_12 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (coverage__C_71));
            }
        }
        break;
    }
    switch (coverage__CanFail_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        coverage__Result_17 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        {
          MR_Word coverage__MaybeSum_78;
          MR_Word coverage__Var_81;
          MR_Box coverage__conv1_MaybeSum_78;

          {
            coverage__Var_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), coverage__Var_81, 0) = ((MR_Box) (&coverage_scalar_common_4[0]));
            MR_hl_field(MR_mktag(0), coverage__Var_81, 1) = ((MR_Box) (coverage__switch_annotate_coverage_7_p_0_1));
            MR_hl_field(MR_mktag(0), coverage__Var_81, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), coverage__Var_81, 3) = ((MR_Box) (*coverage__STATE_VARIABLE_Array_19));
          }
          {
            mercury__list__foldl_4_p_0((MR_Word) &coverage_scalar_common_1[0], (MR_Word) &coverage_scalar_common_1[2], coverage__Var_81, coverage__Cases_8, ((MR_Box) (MR_mkword(MR_mktag(1), &coverage_scalar_common_5[0]))), &coverage__conv1_MaybeSum_78);
          }
          coverage__MaybeSum_78 = ((MR_Word) coverage__conv1_MaybeSum_78);
          if ((coverage__MaybeSum_78 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            coverage__Result_17 = (MR_Integer) 1;
          else
            {
              MR_Integer coverage__SumA_79 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__MaybeSum_78, (MR_Integer) 0)));

              switch (MR_tag((MR_Word) coverage__Before_11)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(coverage__Before_11)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      coverage__Result_17 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 1:
                      {
                        coverage__succeeded = (coverage__SumA_79 == (MR_Integer) 0);
                        if (coverage__succeeded)
                          coverage__Result_17 = (MR_Integer) 1;
                        else
                          coverage__Result_17 = (MR_Integer) 0;
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Integer coverage__SumB_80 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__Before_11, (MR_Integer) 0)));

                    coverage__succeeded = (coverage__SumA_79 == coverage__SumB_80);
                    if (coverage__succeeded)
                      coverage__Result_17 = (MR_Integer) 1;
                    else
                      coverage__Result_17 = (MR_Integer) 0;
                  }
                  break;
              }
            }
        }
        break;
    }
    switch (coverage__Result_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String coverage__Var_32;
          MR_String coverage__Var_38;
          MR_String coverage__Var_41;
          MR_String coverage__Var_44;
          MR_String coverage__Var_47;
          MR_String coverage__Var_60;
          MR_String coverage__Var_62;
          MR_String coverage__Var_63;
          MR_String coverage__Var_65;
          MR_String coverage__Var_66;
          MR_String coverage__Var_68;
          MR_String coverage__Var_69;

          {
            coverage__Var_38 = mercury__string__string_1_f_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_switch_can_fail_rep_0, ((MR_Box) (coverage__CanFail_10)));
          }
          {
            coverage__Var_41 = mercury__string__string_1_f_0((MR_Word) &coverage_scalar_common_1[1], ((MR_Box) (coverage__Cases_8)));
          }
          {
            coverage__Var_44 = mercury__string__string_1_f_0((MR_Word) &coverage__coverage__type_ctor_info_coverage_before_0, ((MR_Box) (coverage__Before_11)));
          }
          {
            coverage__Var_47 = mercury__string__string_1_f_0((MR_Word) &coverage__coverage__type_ctor_info_coverage_after_0, ((MR_Box) (*coverage__After_12)));
          }
          {
            coverage__Var_60 = mercury__string__f_43_43_2_f_0(coverage__Var_47, (MR_String) "\n");
          }
          {
            coverage__Var_62 = mercury__string__f_43_43_2_f_0((MR_String) ", After: ", coverage__Var_60);
          }
          {
            coverage__Var_63 = mercury__string__f_43_43_2_f_0(coverage__Var_44, coverage__Var_62);
          }
          {
            coverage__Var_65 = mercury__string__f_43_43_2_f_0((MR_String) "\n\tBefore: ", coverage__Var_63);
          }
          {
            coverage__Var_66 = mercury__string__f_43_43_2_f_0(coverage__Var_41, coverage__Var_65);
          }
          {
            coverage__Var_68 = mercury__string__f_43_43_2_f_0((MR_String) "\n\tCases: ", coverage__Var_66);
          }
          {
            coverage__Var_69 = mercury__string__f_43_43_2_f_0(coverage__Var_38, coverage__Var_68);
          }
          {
            coverage__Var_32 = mercury__string__f_43_43_2_f_0((MR_String) "check_switch_coverage failed\n\tCanFail: ", coverage__Var_69);
          }
          {
            mercury__require__unexpected_3_p_0((MR_String) "coverage", (MR_String) "predicate \140coverage.switch_annotate_coverage\'/7", coverage__Var_32);
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
}

static void MR_CALL 
coverage__conj_annotate_coverage_6_p_0(
  MR_Word coverage__TypeInfo_for_Callee_25,
  MR_Word coverage__HeadVar__1_1,
  MR_Word coverage__Info_2,
  MR_Word coverage__Before_3,
  MR_Word * coverage__After_4,
  MR_Word coverage__STATE_VARIABLE_Array_0_5,
  MR_Word * coverage__STATE_VARIABLE_Array_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool coverage__succeeded;

        if ((coverage__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            switch (MR_tag((MR_Word) coverage__Before_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(coverage__Before_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *coverage__After_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    break;
                  case (MR_Integer) 1:
                    *coverage__After_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer coverage__Count_28 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__Before_3, (MR_Integer) 0)));

                  coverage__succeeded = (coverage__Count_28 == (MR_Integer) 0);
                  if (coverage__succeeded)
                    *coverage__After_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
                  else
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      *coverage__After_4 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (coverage__Count_28));
                    }
                }
                break;
            }
            *coverage__STATE_VARIABLE_Array_6 = coverage__STATE_VARIABLE_Array_0_5;
          }
        else
          {
            MR_Word coverage__Conj_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), coverage__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word coverage__Conjs_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), coverage__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word coverage__CoverageAfterHead_19;
            MR_Word coverage__CoverageBeforeTail_20;
            MR_Word coverage__STATE_VARIABLE_Array_23_23;

            {
              coverage__goal_annotate_coverage_6_p_0(coverage__TypeInfo_for_Callee_25, coverage__Conj_13, coverage__Info_2, coverage__Before_3, &coverage__CoverageAfterHead_19, coverage__STATE_VARIABLE_Array_0_5, &coverage__STATE_VARIABLE_Array_23_23);
            }
            switch (MR_tag((MR_Word) coverage__CoverageAfterHead_19)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(coverage__CoverageAfterHead_19)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    coverage__CoverageBeforeTail_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    break;
                  case (MR_Integer) 1:
                    coverage__CoverageBeforeTail_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer coverage__ExecCount_32 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__CoverageAfterHead_19, (MR_Integer) 0)));

                  {
                    coverage__CoverageBeforeTail_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), coverage__CoverageBeforeTail_20, 0) = ((MR_Box) (coverage__ExecCount_32));
                  }
                }
                break;
            }
            /* direct tailcall eliminated */
            {
              MR_Word coverage__next_value_of_HeadVar__1_1 = coverage__Conjs_14;
              MR_Word coverage__next_value_of_Before_3 = coverage__CoverageBeforeTail_20;
              MR_Word coverage__next_value_of_STATE_VARIABLE_Array_0_5 = coverage__STATE_VARIABLE_Array_23_23;

              coverage__STATE_VARIABLE_Array_0_5 = coverage__next_value_of_STATE_VARIABLE_Array_0_5;
              coverage__Before_3 = coverage__next_value_of_Before_3;
              coverage__HeadVar__1_1 = coverage__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

static MR_bool MR_CALL 
coverage__goal_annotate_coverage_6_p_0_1(
  MR_Box coverage__closure_arg)
{
  {
    MR_bool coverage__succeeded;
    MR_Box coverage__closure = coverage__closure_arg;

    {
      coverage__succeeded = coverage__IntroducedFrom__pred__goal_annotate_coverage__334__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), coverage__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__closure, (MR_Integer) 4))));
    }
    return coverage__succeeded;
  }
}

static void MR_CALL 
coverage__goal_annotate_coverage_6_p_0(
  MR_Word coverage__TypeInfo_for_Callee_164,
  MR_Word coverage__Goal_7,
  MR_Word coverage__Info_8,
  MR_Word coverage__Before_9,
  MR_Word * coverage__After_10,
  MR_Word coverage__STATE_VARIABLE_Array_0_75,
  MR_Word * coverage__STATE_VARIABLE_Array_76)
{
  {
    MR_bool coverage__succeeded;
    MR_Word coverage__TypeCtorInfo_166_166 = (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0;
    MR_Word coverage__TypeCtorInfo_171_171;
    MR_Word coverage__GoalExpr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Goal_7, (MR_Integer) 0)));
    MR_Word coverage__Detism_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Goal_7, (MR_Integer) 1)));
    MR_Word coverage__GoalId_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Goal_7, (MR_Integer) 2)));
    MR_Word coverage__RevGoalPath_15;
    MR_Word coverage__After0_17;
    MR_Word coverage__GoalCoverage_73;
    MR_Word coverage__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_8, (MR_Integer) 4)));
    MR_Word coverage__STATE_VARIABLE_Array_95_95;
    MR_Word coverage__Var_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_8, (MR_Integer) 0)));
    MR_Word coverage__Var_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_8, (MR_Integer) 1)));
    MR_Word coverage__Var_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_8, (MR_Integer) 2)));
    MR_Word coverage__Var_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_8, (MR_Integer) 3)));
    MR_Box coverage__conv0_RevGoalPath_15;
    MR_Word coverage__CoveragePoint_69;
    MR_Word coverage__Var_96;
    MR_Word coverage__Var_156;
    MR_Word coverage__Var_157;
    MR_Word coverage__Var_158;
    MR_Word coverage__Var_159;
    MR_Box coverage__conv2_CoveragePoint_69;

    {
      coverage__conv0_RevGoalPath_15 = mercury__map__lookup_2_f_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, coverage__TypeCtorInfo_166_166, coverage__Var_77, ((MR_Box) (coverage__GoalId_14)));
    }
    coverage__RevGoalPath_15 = ((MR_Word) coverage__conv0_RevGoalPath_15);
    switch (MR_tag((MR_Word) coverage__GoalExpr_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word coverage__Conjs_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__GoalExpr_12, (MR_Integer) 0)));

          {
            coverage__conj_annotate_coverage_6_p_0(coverage__TypeInfo_for_Callee_164, coverage__Conjs_16, coverage__Info_8, coverage__Before_9, &coverage__After0_17, coverage__STATE_VARIABLE_Array_0_75, &coverage__STATE_VARIABLE_Array_95_95);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word coverage__Disjs_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), coverage__GoalExpr_12, (MR_Integer) 0)));
          MR_Word coverage__SumAfterDisjuncts_20;
          MR_Word coverage__Solutions_19;

          {
            coverage__Solutions_19 = mdbcomp__program_representation__detism_get_solutions_1_f_0(coverage__Detism_13);
          }
          {
            coverage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_105_115_106_95_97_110_110_111_116_97_116_101_95_99_111_118_101_114_97_103_101_95_95_91_52_93_95_48_8_p_0(coverage__TypeInfo_for_Callee_164, coverage__Disjs_18, coverage__Info_8, coverage__Before_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), &coverage__SumAfterDisjuncts_20, coverage__STATE_VARIABLE_Array_0_75, &coverage__STATE_VARIABLE_Array_95_95);
          }
          {
            coverage__after_count_sum_after_count_2_p_0(coverage__SumAfterDisjuncts_20, &coverage__After0_17);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word coverage__CanFail_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), coverage__GoalExpr_12, (MR_Integer) 1)));
          MR_Word coverage__Cases_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), coverage__GoalExpr_12, (MR_Integer) 2)));
          MR_Integer coverage___Var_21 = ((MR_Integer) (MR_hl_field(MR_mktag(2), coverage__GoalExpr_12, (MR_Integer) 0)));

          {
            coverage__switch_annotate_coverage_7_p_0(coverage__TypeInfo_for_Callee_164, coverage__Cases_23, coverage__Info_8, coverage__CanFail_22, coverage__Before_9, &coverage__After0_17, coverage__STATE_VARIABLE_Array_0_75, &coverage__STATE_VARIABLE_Array_95_95);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), coverage__GoalExpr_12, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word coverage__Cond_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), coverage__GoalExpr_12, (MR_Integer) 1)));
              MR_Word coverage__Then_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), coverage__GoalExpr_12, (MR_Integer) 2)));
              MR_Word coverage__Else_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), coverage__GoalExpr_12, (MR_Integer) 3)));

              {
                coverage__ite_annotate_coverage_9_p_0(coverage__TypeInfo_for_Callee_164, coverage__Cond_24, coverage__Then_25, coverage__Else_26, coverage__Info_8, coverage__RevGoalPath_15, coverage__Before_9, &coverage__After0_17, coverage__STATE_VARIABLE_Array_0_75, &coverage__STATE_VARIABLE_Array_95_95);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word coverage__NegGoal_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), coverage__GoalExpr_12, (MR_Integer) 1)));

              {
                coverage__negation_annotate_coverage_6_p_0(coverage__TypeInfo_for_Callee_164, coverage__NegGoal_27, coverage__Info_8, coverage__Before_9, &coverage__After0_17, coverage__STATE_VARIABLE_Array_0_75, &coverage__STATE_VARIABLE_Array_95_95);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word coverage__ScopedGoal_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), coverage__GoalExpr_12, (MR_Integer) 1)));
              MR_Word coverage__MaybeCut_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), coverage__GoalExpr_12, (MR_Integer) 2)));

              {
                coverage__scope_annotate_coverage_7_p_0(coverage__TypeInfo_for_Callee_164, coverage__ScopedGoal_28, coverage__Info_8, coverage__MaybeCut_29, coverage__Before_9, &coverage__After0_17, coverage__STATE_VARIABLE_Array_0_75, &coverage__STATE_VARIABLE_Array_95_95);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word coverage__AtomicGoal_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), coverage__GoalExpr_12, (MR_Integer) 4)));
              MR_String coverage__Var_30 = ((MR_String) (MR_hl_field(MR_mktag(3), coverage__GoalExpr_12, (MR_Integer) 1)));
              MR_Integer coverage__Var_31 = ((MR_Integer) (MR_hl_field(MR_mktag(3), coverage__GoalExpr_12, (MR_Integer) 2)));
              MR_Word coverage__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), coverage__GoalExpr_12, (MR_Integer) 3)));

              switch (MR_tag((MR_Word) coverage__AtomicGoal_33)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                  {
                    coverage__propagate_detism_coverage_3_p_0(coverage__Detism_13, coverage__Before_9, &coverage__After0_17);
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), coverage__AtomicGoal_33, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                    case (MR_Integer) 1:
                    case (MR_Integer) 2:
                    case (MR_Integer) 3:
                    case (MR_Integer) 4:
                    case (MR_Integer) 8:
                    case (MR_Integer) 9:
                      {
                        coverage__propagate_detism_coverage_3_p_0(coverage__Detism_13, coverage__Before_9, &coverage__After0_17);
                      }
                      break;
                    case (MR_Integer) 5:
                    case (MR_Integer) 6:
                    case (MR_Integer) 7:
                      {
                        MR_Word coverage__Cost_42;
                        MR_Word coverage__TypeInfo_168_168;
                        MR_Word coverage__Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_8, (MR_Integer) 1)));
                        MR_Word coverage__Var_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_8, (MR_Integer) 0)));
                        MR_Word coverage__Var_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_8, (MR_Integer) 2)));
                        MR_Word coverage__Var_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_8, (MR_Integer) 3)));
                        MR_Word coverage__Var_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_8, (MR_Integer) 4)));
                        MR_Box coverage__conv1_Cost_42;

                        {
                          coverage__TypeInfo_168_168 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), coverage__TypeInfo_168_168, 0) = ((MR_Box) (&analysis_utils__analysis_utils__type_ctor_info_cost_and_callees_1));
                          MR_hl_field(MR_mktag(0), coverage__TypeInfo_168_168, 1) = ((MR_Box) (coverage__TypeInfo_for_Callee_164));
                        }
                        {
                          coverage__succeeded = mercury__map__search_3_p_0(coverage__TypeCtorInfo_166_166, coverage__TypeInfo_168_168, coverage__Var_78, ((MR_Box) (coverage__RevGoalPath_15)), &coverage__conv1_Cost_42);
                        }
                        if (coverage__succeeded)
                          {
                            coverage__Cost_42 = ((MR_Word) coverage__conv1_Cost_42);
                            coverage__succeeded = MR_TRUE;
                          }
                        if (coverage__succeeded)
                          {
                            MR_Integer coverage__Calls_43;
                            MR_Integer coverage__Exits_44;
                            MR_Float coverage__Var_79;
                            MR_Word coverage__Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Cost_42, (MR_Integer) 0)));
                            MR_Word coverage__Var_81;
                            MR_Word coverage__Var_83;
                            MR_Integer coverage__Var_150 = ((MR_Integer) (MR_hl_field(MR_mktag(0), coverage__Cost_42, (MR_Integer) 1)));
                            MR_Word coverage__Var_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Cost_42, (MR_Integer) 2)));
                            MR_Word coverage__Var_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Cost_42, (MR_Integer) 3)));
                            MR_Word coverage__Var_153;
                            MR_Word coverage__Var_154;
                            MR_Word coverage__Var_155;

                            {
                              coverage__Var_79 = measurements__cs_cost_get_calls_1_f_0(coverage__Var_80);
                            }
                            {
                              coverage__Calls_43 = mercury__float__round_to_int_1_f_0(coverage__Var_79);
                            }
                            coverage__Var_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Cost_42, (MR_Integer) 0)));
                            coverage__Exits_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), coverage__Cost_42, (MR_Integer) 1)));
                            coverage__Var_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Cost_42, (MR_Integer) 2)));
                            coverage__Var_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Cost_42, (MR_Integer) 3)));
                            {
                              coverage__Var_83 = coverage__before_coverage_1_f_0(coverage__Calls_43);
                            }
                            {
                              coverage__Var_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), coverage__Var_81, 0) = ((MR_Box) (&coverage_scalar_common_3[1]));
                              MR_hl_field(MR_mktag(0), coverage__Var_81, 1) = ((MR_Box) (coverage__goal_annotate_coverage_6_p_0_1));
                              MR_hl_field(MR_mktag(0), coverage__Var_81, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                              MR_hl_field(MR_mktag(0), coverage__Var_81, 3) = ((MR_Box) (coverage__Before_9));
                              MR_hl_field(MR_mktag(0), coverage__Var_81, 4) = ((MR_Box) (coverage__Var_83));
                            }
                            {
                              mercury__require__require_2_p_0(coverage__Var_81, (MR_String) "Coverage before call doesn\'t match calls port on call site");
                            }
                            {
                              coverage__After0_17 = coverage__after_coverage_1_f_0(coverage__Exits_44);
                            }
                          }
                        else
                          {
                            MR_String coverage__Var_86;
                            MR_String coverage__Var_88;

                            {
                              coverage__Var_88 = mdbcomp__goal_path__rev_goal_path_to_string_1_f_0(coverage__RevGoalPath_15);
                            }
                            {
                              coverage__Var_86 = mercury__string__f_43_43_2_f_0((MR_String) "Couldn\'t look up call site for port counts GP: ", coverage__Var_88);
                            }
                            {
                              mercury__require__unexpected_3_p_0((MR_String) "coverage", (MR_String) "predicate \140coverage.goal_annotate_coverage\'/6", coverage__Var_86);
                              return;
                            }
                          }
                      }
                      break;
                  }
                  break;
              }
              coverage__STATE_VARIABLE_Array_95_95 = coverage__STATE_VARIABLE_Array_0_75;
            }
            break;
        }
        break;
    }
    coverage__Var_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_8, (MR_Integer) 0)));
    coverage__Var_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_8, (MR_Integer) 1)));
    coverage__Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_8, (MR_Integer) 2)));
    coverage__Var_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_8, (MR_Integer) 3)));
    coverage__Var_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_8, (MR_Integer) 4)));
    {
      coverage__succeeded = mercury__map__search_3_p_0(coverage__TypeCtorInfo_166_166, (MR_Word) &coverage__coverage__type_ctor_info_coverage_point_0, coverage__Var_96, ((MR_Box) (coverage__RevGoalPath_15)), &coverage__conv2_CoveragePoint_69);
    }
    if (coverage__succeeded)
      {
        coverage__CoveragePoint_69 = ((MR_Word) coverage__conv2_CoveragePoint_69);
        coverage__succeeded = MR_TRUE;
      }
    if (coverage__succeeded)
      {
        MR_Integer coverage__CoverageAfterCount_70 = ((MR_Integer) (MR_hl_field(MR_mktag(0), coverage__CoveragePoint_69, (MR_Integer) 0)));
        MR_Word coverage__Var_97;
        MR_Word coverage__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__CoveragePoint_69, (MR_Integer) 1)));
        MR_Word coverage__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__CoveragePoint_69, (MR_Integer) 2)));

        {
          coverage__Var_97 = coverage__after_coverage_1_f_0(coverage__CoverageAfterCount_70);
        }
        {
          coverage__after_count_from_either_source_3_p_0(coverage__Var_97, coverage__After0_17, coverage__After_10);
        }
      }
    else
      *coverage__After_10 = coverage__After0_17;
    {
      coverage__GoalCoverage_73 = coverage__construct_before_after_coverage_2_f_0(coverage__Before_9, *coverage__After_10);
    }
    coverage__TypeCtorInfo_171_171 = (MR_Word) &coverage__coverage__type_ctor_info_coverage_info_0;
    {
      mdbcomp__goal_path__update_goal_attribute_4_p_0(coverage__TypeCtorInfo_171_171, coverage__GoalId_14, ((MR_Box) (coverage__GoalCoverage_73)), coverage__STATE_VARIABLE_Array_95_95, coverage__STATE_VARIABLE_Array_76);
    }
    {
      coverage__succeeded = coverage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_99_111_118_101_114_97_103_101_95_99_111_109_112_108_101_116_101_95_95_91_49_44_32_51_93_95_48_2_p_0(coverage__GoalCoverage_73);
    }
    if (coverage__succeeded)
      {
      }
    else
      {
        MR_String coverage__Var_116;
        MR_String coverage__Var_122;
        MR_String coverage__Var_125;
        MR_String coverage__Var_128;
        MR_Word coverage__Var_129;
        MR_String coverage__Var_186;
        MR_String coverage__Var_188;
        MR_String coverage__Var_189;
        MR_String coverage__Var_191;
        MR_String coverage__Var_192;
        MR_Word coverage__Var_160;
        MR_Word coverage__Var_161;
        MR_Word coverage__Var_162;
        MR_Word coverage__Var_163;

        {
          coverage__Var_122 = mercury__string__string_1_f_0(coverage__TypeCtorInfo_171_171, ((MR_Box) (coverage__GoalCoverage_73)));
        }
        {
          coverage__Var_125 = mdbcomp__goal_path__rev_goal_path_to_string_1_f_0(coverage__RevGoalPath_15);
        }
        coverage__Var_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_8, (MR_Integer) 0)));
        coverage__Var_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_8, (MR_Integer) 1)));
        coverage__Var_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_8, (MR_Integer) 2)));
        coverage__Var_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_8, (MR_Integer) 3)));
        coverage__Var_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_8, (MR_Integer) 4)));
        {
          coverage__Var_128 = mercury__string__string_1_f_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0, ((MR_Box) (coverage__Var_129)));
        }
        {
          coverage__Var_186 = mercury__string__f_43_43_2_f_0(coverage__Var_128, (MR_String) "\n");
        }
        {
          coverage__Var_188 = mercury__string__f_43_43_2_f_0((MR_String) "\n\tProc: ", coverage__Var_186);
        }
        {
          coverage__Var_189 = mercury__string__f_43_43_2_f_0(coverage__Var_125, coverage__Var_188);
        }
        {
          coverage__Var_191 = mercury__string__f_43_43_2_f_0((MR_String) "\n\tGoalPath: ", coverage__Var_189);
        }
        {
          coverage__Var_192 = mercury__string__f_43_43_2_f_0(coverage__Var_122, coverage__Var_191);
        }
        {
          coverage__Var_116 = mercury__string__f_43_43_2_f_0((MR_String) "check_coverage_complete failed\n\tCoverage: ", coverage__Var_192);
        }
        {
          mercury__require__unexpected_3_p_0((MR_String) "coverage", (MR_String) "predicate \140coverage.goal_annotate_coverage\'/6", coverage__Var_116);
          return;
        }
      }
    {
      coverage__succeeded = coverage__check_coverage_regarding_detism_2_p_0(coverage__GoalCoverage_73, coverage__Detism_13);
    }
    if (coverage__succeeded)
      {
      }
    else
      {
        MR_String coverage__Var_133;
        MR_String coverage__Var_137;
        MR_String coverage__Var_140;
        MR_String coverage__Var_195;
        MR_String coverage__Var_196;

        {
          coverage__Var_137 = mercury__string__string_1_f_0(coverage__TypeCtorInfo_171_171, ((MR_Box) (coverage__GoalCoverage_73)));
        }
        {
          coverage__Var_140 = mercury__string__string_1_f_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_detism_rep_0, ((MR_Box) (coverage__Detism_13)));
        }
        {
          coverage__Var_195 = mercury__string__f_43_43_2_f_0((MR_String) " ", coverage__Var_140);
        }
        {
          coverage__Var_196 = mercury__string__f_43_43_2_f_0(coverage__Var_137, coverage__Var_195);
        }
        {
          coverage__Var_133 = mercury__string__f_43_43_2_f_0((MR_String) "check_coverage_regarding_detism failed: ", coverage__Var_196);
        }
        {
          mercury__require__unexpected_3_p_0((MR_String) "coverage", (MR_String) "predicate \140coverage.goal_annotate_coverage\'/6", coverage__Var_133);
          return;
        }
      }
  }
}

static MR_bool MR_CALL 
coverage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_99_111_118_101_114_97_103_101_95_99_111_109_112_108_101_116_101_95_95_91_49_44_32_51_93_95_48_2_p_0(
  MR_Word coverage__HeadVar__1_1)
{
  {
    MR_bool coverage__succeeded;

    switch (MR_tag((MR_Word) coverage__HeadVar__1_1)) {
      default:
        coverage__succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        switch (MR_unmkbody(coverage__HeadVar__1_1)) {
          default:
            coverage__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 1:
            coverage__succeeded = MR_TRUE;
            break;
        }
        break;
      case (MR_Integer) 1:
        coverage__succeeded = MR_TRUE;
        break;
      case (MR_Integer) 2:
        coverage__succeeded = MR_TRUE;
        break;
    }
    return coverage__succeeded;
  }
}

static void MR_CALL 
coverage__after_count_sum_after_count_2_p_0(
  MR_Word coverage__HeadVar__1_1,
  MR_Word * coverage__HeadVar__2_2)
{
  {
    MR_bool coverage__succeeded;

    switch (MR_tag((MR_Word) coverage__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(coverage__HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *coverage__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 1:
            *coverage__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer coverage__C_3 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__HeadVar__1_1, (MR_Integer) 0)));

          coverage__succeeded = (coverage__C_3 == (MR_Integer) 0);
          if (coverage__succeeded)
            *coverage__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
          else
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *coverage__HeadVar__2_2 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (coverage__C_3));
            }
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
coverage__after_count_from_either_source_3_p_0_3(
  MR_Box coverage__closure_arg)
{
  {
    MR_bool coverage__succeeded;
    MR_Box coverage__closure = coverage__closure_arg;

    {
      coverage__succeeded = coverage__IntroducedFrom__pred__after_count_from_either_source__1152__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), coverage__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), coverage__closure, (MR_Integer) 4))));
    }
    return coverage__succeeded;
  }
}

static MR_bool MR_CALL 
coverage__after_count_from_either_source_3_p_0_2(
  MR_Box coverage__closure_arg)
{
  {
    MR_bool coverage__succeeded;
    MR_Box coverage__closure = coverage__closure_arg;

    {
      coverage__succeeded = coverage__IntroducedFrom__pred__after_count_from_either_source__1141__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), coverage__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), coverage__closure, (MR_Integer) 4))));
    }
    return coverage__succeeded;
  }
}

static MR_bool MR_CALL 
coverage__after_count_from_either_source_3_p_0_1(
  MR_Box coverage__closure_arg)
{
  {
    MR_bool coverage__succeeded;
    MR_Box coverage__closure = coverage__closure_arg;

    {
      coverage__succeeded = coverage__IntroducedFrom__pred__after_count_from_either_source__1136__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), coverage__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), coverage__closure, (MR_Integer) 4))));
    }
    return coverage__succeeded;
  }
}

static void MR_CALL 
coverage__after_count_from_either_source_3_p_0(
  MR_Word coverage__AfterA_4,
  MR_Word coverage__AfterB_5,
  MR_Word * coverage__After_6)
{
  {
    MR_bool coverage__succeeded;

    switch (MR_tag((MR_Word) coverage__AfterA_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(coverage__AfterA_4)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_tag((MR_Word) coverage__AfterB_5)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(coverage__AfterB_5)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *coverage__After_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    break;
                  case (MR_Integer) 1:
                    *coverage__After_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer coverage__AfterCount_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__AfterB_5, (MR_Integer) 0)));

                  coverage__succeeded = (coverage__AfterCount_7 == (MR_Integer) 0);
                  if (coverage__succeeded)
                    *coverage__After_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
                  else
                    *coverage__After_6 = coverage__AfterB_5;
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            switch (MR_tag((MR_Word) coverage__AfterB_5)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(coverage__AfterB_5)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *coverage__After_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
                    break;
                  case (MR_Integer) 1:
                    *coverage__After_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word coverage__Var_10;
                  MR_Integer coverage__AfterCountB_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__AfterB_5, (MR_Integer) 0)));

                  {
                    coverage__Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), coverage__Var_10, 0) = ((MR_Box) (&coverage_scalar_common_3[0]));
                    MR_hl_field(MR_mktag(0), coverage__Var_10, 1) = ((MR_Box) (coverage__after_count_from_either_source_3_p_0_3));
                    MR_hl_field(MR_mktag(0), coverage__Var_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), coverage__Var_10, 3) = ((MR_Box) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(0), coverage__Var_10, 4) = ((MR_Box) (coverage__AfterCountB_18));
                  }
                  {
                    mercury__require__require_2_p_0(coverage__Var_10, (MR_String) "after_count_from_either_source: mismatch");
                  }
                  *coverage__After_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
                }
                break;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer coverage__AfterCountA_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__AfterA_4, (MR_Integer) 0)));

          switch (MR_tag((MR_Word) coverage__AfterB_5)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(coverage__AfterB_5)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    coverage__succeeded = (coverage__AfterCountA_8 == (MR_Integer) 0);
                    if (coverage__succeeded)
                      *coverage__After_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
                    else
                      *coverage__After_6 = coverage__AfterA_4;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word coverage__Var_13;

                    {
                      coverage__Var_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), coverage__Var_13, 0) = ((MR_Box) (&coverage_scalar_common_3[0]));
                      MR_hl_field(MR_mktag(0), coverage__Var_13, 1) = ((MR_Box) (coverage__after_count_from_either_source_3_p_0_2));
                      MR_hl_field(MR_mktag(0), coverage__Var_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(0), coverage__Var_13, 3) = ((MR_Box) (coverage__AfterCountA_8));
                      MR_hl_field(MR_mktag(0), coverage__Var_13, 4) = ((MR_Box) ((MR_Integer) 0));
                    }
                    {
                      mercury__require__require_2_p_0(coverage__Var_13, (MR_String) "after_count_from_either_source: mismatch");
                    }
                    *coverage__After_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
                  }
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer coverage__AfterCountB_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__AfterB_5, (MR_Integer) 0)));
                MR_Word coverage__Var_16;

                {
                  coverage__Var_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), coverage__Var_16, 0) = ((MR_Box) (&coverage_scalar_common_3[0]));
                  MR_hl_field(MR_mktag(0), coverage__Var_16, 1) = ((MR_Box) (coverage__after_count_from_either_source_3_p_0_1));
                  MR_hl_field(MR_mktag(0), coverage__Var_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), coverage__Var_16, 3) = ((MR_Box) (coverage__AfterCountA_8));
                  MR_hl_field(MR_mktag(0), coverage__Var_16, 4) = ((MR_Box) (coverage__AfterCountB_9));
                }
                {
                  mercury__require__require_2_p_0(coverage__Var_16, (MR_String) "after_count_from_either_source: mismatch");
                }
                coverage__succeeded = (coverage__AfterCountA_8 == (MR_Integer) 0);
                if (coverage__succeeded)
                  *coverage__After_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
                else
                  *coverage__After_6 = coverage__AfterA_4;
              }
              break;
          }
        }
        break;
    }
  }
}

static void MR_CALL 
coverage__propagate_detism_coverage_3_p_0(
  MR_Word coverage__Detism_4,
  MR_Word coverage__Before_5,
  MR_Word * coverage__After_6)
{
  {
    MR_bool coverage__succeeded;

    switch (coverage__Detism_4) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 5:
      case (MR_Integer) 0:
        switch (MR_tag((MR_Word) coverage__Before_5)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(coverage__Before_5)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *coverage__After_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                break;
              case (MR_Integer) 1:
                *coverage__After_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer coverage__Count_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__Before_5, (MR_Integer) 0)));

              coverage__succeeded = (coverage__Count_9 == (MR_Integer) 0);
              if (coverage__succeeded)
                *coverage__After_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
              else
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *coverage__After_6 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (coverage__Count_9));
                }
            }
            break;
        }
        break;
      case (MR_Integer) 4:
      case (MR_Integer) 3:
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        *coverage__After_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 6:
      case (MR_Integer) 7:
        *coverage__After_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
        break;
    }
  }
}

static MR_bool MR_CALL 
coverage__check_coverage_regarding_detism_2_p_0(
  MR_Word coverage__Coverage_3,
  MR_Word coverage__Detism_4)
{
  {
    MR_bool coverage__succeeded;

    switch (coverage__Detism_4) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 5:
      case (MR_Integer) 0:
        switch (MR_tag((MR_Word) coverage__Coverage_3)) {
          default:
            coverage__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            coverage__succeeded = MR_TRUE;
            break;
          case (MR_Integer) 1:
            coverage__succeeded = MR_TRUE;
            break;
          case (MR_Integer) 2:
            {
              MR_Integer coverage__Entry_10 = ((MR_Integer) (MR_hl_field(MR_mktag(2), coverage__Coverage_3, (MR_Integer) 0)));
              MR_Integer coverage__Exit_11 = ((MR_Integer) (MR_hl_field(MR_mktag(2), coverage__Coverage_3, (MR_Integer) 1)));

              coverage__succeeded = (coverage__Entry_10 >= coverage__Exit_11);
            }
            break;
        }
        break;
      case (MR_Integer) 4:
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) coverage__Coverage_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            coverage__succeeded = MR_TRUE;
            break;
          case (MR_Integer) 1:
            coverage__succeeded = MR_TRUE;
            break;
          case (MR_Integer) 2:
            {
              MR_Integer coverage__Entry_24 = ((MR_Integer) (MR_hl_field(MR_mktag(2), coverage__Coverage_3, (MR_Integer) 0)));
              MR_Integer coverage__Exit_25 = ((MR_Integer) (MR_hl_field(MR_mktag(2), coverage__Coverage_3, (MR_Integer) 1)));

              coverage__succeeded = (coverage__Entry_24 >= coverage__Exit_25);
            }
            break;
          case (MR_Integer) 3:
            coverage__succeeded = MR_TRUE;
            break;
        }
        break;
      case (MR_Integer) 6:
      case (MR_Integer) 7:
        switch (MR_tag((MR_Word) coverage__Coverage_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(coverage__Coverage_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                coverage__succeeded = MR_TRUE;
                break;
              case (MR_Integer) 1:
                coverage__succeeded = MR_TRUE;
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer coverage__Exit_34 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__Coverage_3, (MR_Integer) 0)));

              coverage__succeeded = (coverage__Exit_34 == (MR_Integer) 0);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer coverage__Exit_30 = ((MR_Integer) (MR_hl_field(MR_mktag(2), coverage__Coverage_3, (MR_Integer) 1)));
              MR_Integer coverage__Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(2), coverage__Coverage_3, (MR_Integer) 0)));

              coverage__succeeded = (coverage__Exit_30 == (MR_Integer) 0);
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), coverage__Coverage_3, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                coverage__succeeded = MR_TRUE;
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer coverage__Exit_33 = ((MR_Integer) (MR_hl_field(MR_mktag(3), coverage__Coverage_3, (MR_Integer) 1)));

                  coverage__succeeded = (coverage__Exit_33 == (MR_Integer) 0);
                }
                break;
            }
            break;
        }
        break;
      case (MR_Integer) 3:
        coverage__succeeded = MR_TRUE;
        break;
      case (MR_Integer) 2:
        coverage__succeeded = MR_TRUE;
        break;
    }
    return coverage__succeeded;
  }
}

static MR_bool MR_CALL 
coverage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_116_101_95_99_111_118_101_114_97_103_101_95_95_91_55_93_95_48_9_p_0(
  MR_Word coverage__Before_10,
  MR_Word coverage__After_11,
  MR_Word coverage__BeforeCond_12,
  MR_Word coverage__AfterCond_13,
  MR_Word coverage__BeforeThen_14,
  MR_Word coverage__AfterThen_15,
  MR_Word coverage__AfterElse_17,
  MR_Word coverage__CondDetism_18)
{
  {
    MR_bool coverage__succeeded = ((MR_tag((MR_Word) coverage__Before_10)) == (MR_mktag((MR_Integer) 1)));
    MR_Integer coverage__BeforeExecCount_19;
    MR_Integer coverage__BeforeCondExecCount_20;
    MR_Integer coverage__AfterExecCount_21;
    MR_Integer coverage__AfterThenExecCount_22;
    MR_Integer coverage__AfterElseExecCount_23;
    MR_Integer coverage__AfterCondExecCount_24;
    MR_Integer coverage__BeforeKnownExecCount_25;
    MR_Integer coverage__AfterCondExecCount2_26;

    if (coverage__succeeded)
      {
        coverage__BeforeExecCount_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__Before_10, (MR_Integer) 0)));
        coverage__succeeded = ((MR_tag((MR_Word) coverage__BeforeCond_12)) == (MR_mktag((MR_Integer) 1)));
        if (coverage__succeeded)
          coverage__BeforeCondExecCount_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__BeforeCond_12, (MR_Integer) 0)));
      }
    if (coverage__succeeded)
      coverage__succeeded = (coverage__BeforeExecCount_19 == coverage__BeforeCondExecCount_20);
    else
      coverage__succeeded = MR_TRUE;
    if (coverage__succeeded)
      {
        coverage__succeeded = ((MR_tag((MR_Word) coverage__After_11)) == (MR_mktag((MR_Integer) 1)));
        if (coverage__succeeded)
          {
            coverage__AfterExecCount_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__After_11, (MR_Integer) 0)));
            coverage__succeeded = ((MR_tag((MR_Word) coverage__AfterThen_15)) == (MR_mktag((MR_Integer) 1)));
            if (coverage__succeeded)
              {
                coverage__AfterThenExecCount_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__AfterThen_15, (MR_Integer) 0)));
                coverage__succeeded = ((MR_tag((MR_Word) coverage__AfterElse_17)) == (MR_mktag((MR_Integer) 1)));
                if (coverage__succeeded)
                  coverage__AfterElseExecCount_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__AfterElse_17, (MR_Integer) 0)));
              }
          }
        if (coverage__succeeded)
          {
            MR_Integer coverage__Var_28 = (coverage__AfterThenExecCount_22 + coverage__AfterElseExecCount_23);

            coverage__succeeded = (coverage__AfterExecCount_21 == coverage__Var_28);
          }
        else
          coverage__succeeded = MR_TRUE;
        if (coverage__succeeded)
          {
            coverage__succeeded = ((MR_tag((MR_Word) coverage__AfterCond_13)) == (MR_mktag((MR_Integer) 1)));
            if (coverage__succeeded)
              {
                coverage__AfterCondExecCount_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__AfterCond_13, (MR_Integer) 0)));
                coverage__succeeded = ((MR_tag((MR_Word) coverage__BeforeThen_14)) == (MR_mktag((MR_Integer) 1)));
                if (coverage__succeeded)
                  coverage__BeforeKnownExecCount_25 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__BeforeThen_14, (MR_Integer) 0)));
              }
            if (coverage__succeeded)
              coverage__succeeded = (coverage__AfterCondExecCount_24 == coverage__BeforeKnownExecCount_25);
            else
              coverage__succeeded = MR_TRUE;
            if (coverage__succeeded)
              {
                coverage__succeeded = ((MR_tag((MR_Word) coverage__AfterCond_13)) == (MR_mktag((MR_Integer) 1)));
                if (coverage__succeeded)
                  {
                    coverage__AfterCondExecCount2_26 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__AfterCond_13, (MR_Integer) 0)));
                    {
                      MR_Word coverage__NumSolutions_27;

                      {
                        coverage__NumSolutions_27 = mdbcomp__program_representation__detism_get_solutions_1_f_0(coverage__CondDetism_18);
                      }
                      switch (coverage__NumSolutions_27) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 2:
                          coverage__succeeded = MR_TRUE;
                          break;
                        case (MR_Integer) 1:
                          coverage__succeeded = MR_TRUE;
                          break;
                        case (MR_Integer) 0:
                          coverage__succeeded = (coverage__AfterCondExecCount2_26 == (MR_Integer) 0);
                          break;
                      }
                    }
                  }
                else
                  coverage__succeeded = MR_TRUE;
              }
          }
      }
    return coverage__succeeded;
  }
}

static void MR_CALL 
coverage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_115_116_97_114_116_95_99_111_118_101_114_97_103_101_95_95_91_49_93_95_48_3_p_0(
  MR_Word coverage__Info_4,
  MR_Word coverage__RevGoalPath_5,
  MR_Word * coverage__Before_6)
{
  {
    MR_bool coverage__succeeded;
    MR_Word coverage__CP_7;
    MR_Word coverage__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_4, (MR_Integer) 3)));
    MR_Word coverage__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_4, (MR_Integer) 0)));
    MR_Word coverage__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_4, (MR_Integer) 1)));
    MR_Word coverage__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_4, (MR_Integer) 2)));
    MR_Word coverage__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_4, (MR_Integer) 4)));
    MR_Box coverage__conv0_CP_7;

    {
      coverage__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, (MR_Word) &coverage__coverage__type_ctor_info_coverage_point_0, coverage__Var_11, ((MR_Box) (coverage__RevGoalPath_5)), &coverage__conv0_CP_7);
    }
    if (coverage__succeeded)
      {
        coverage__CP_7 = ((MR_Word) coverage__conv0_CP_7);
        coverage__succeeded = MR_TRUE;
      }
    if (coverage__succeeded)
      {
        MR_Integer coverage__ExecCount_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), coverage__CP_7, (MR_Integer) 0)));
        MR_Word coverage__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__CP_7, (MR_Integer) 1)));
        MR_Word coverage__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__CP_7, (MR_Integer) 2)));

        coverage__succeeded = (coverage__ExecCount_8 == (MR_Integer) 0);
        if (coverage__succeeded)
          *coverage__Before_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
        else
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *coverage__Before_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (coverage__ExecCount_8));
          }
      }
    else
      *coverage__Before_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  }
}

static MR_Word MR_CALL 
coverage__before_coverage_1_f_0(
  MR_Integer coverage__Count_3)
{
  {
    MR_bool coverage__succeeded = (coverage__Count_3 == (MR_Integer) 0);
    MR_Word coverage__HeadVar__2_2;

    if (coverage__succeeded)
      coverage__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
    else
      {
        coverage__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), coverage__HeadVar__2_2, 0) = ((MR_Box) (coverage__Count_3));
      }
    return coverage__HeadVar__2_2;
  }
}

static MR_Word MR_CALL 
coverage__after_coverage_1_f_0(
  MR_Integer coverage__Count_3)
{
  {
    MR_bool coverage__succeeded = (coverage__Count_3 == (MR_Integer) 0);
    MR_Word coverage__HeadVar__2_2;

    if (coverage__succeeded)
      coverage__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
    else
      {
        coverage__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), coverage__HeadVar__2_2, 0) = ((MR_Box) (coverage__Count_3));
      }
    return coverage__HeadVar__2_2;
  }
}

static void MR_CALL 
coverage__after_to_before_coverage_2_p_0(
  MR_Word coverage__After_3,
  MR_Word * coverage__Before_4)
{
  switch (MR_tag((MR_Word) coverage__After_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(coverage__After_3)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *coverage__Before_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          break;
        case (MR_Integer) 1:
          *coverage__Before_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Integer coverage__ExecCount_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__After_3, (MR_Integer) 0)));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *coverage__Before_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (coverage__ExecCount_5));
        }
      }
      break;
  }
}

static void MR_CALL 
coverage__sum_after_coverage_3_p_0(
  MR_Word coverage__After_4,
  MR_Word coverage__STATE_VARIABLE_SumAfter_0_8,
  MR_Word * coverage__STATE_VARIABLE_SumAfter_9)
{
  switch (MR_tag((MR_Word) coverage__STATE_VARIABLE_SumAfter_0_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(coverage__STATE_VARIABLE_SumAfter_0_8)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *coverage__STATE_VARIABLE_SumAfter_9 = coverage__STATE_VARIABLE_SumAfter_0_8;
          break;
        case (MR_Integer) 1:
          switch (MR_tag((MR_Word) coverage__After_4)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(coverage__After_4)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *coverage__STATE_VARIABLE_SumAfter_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  break;
                case (MR_Integer) 1:
                  *coverage__STATE_VARIABLE_SumAfter_9 = coverage__STATE_VARIABLE_SumAfter_0_8;
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer coverage__ExecCount_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__After_4, (MR_Integer) 0)));

                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *coverage__STATE_VARIABLE_SumAfter_9 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (coverage__ExecCount_15));
                }
              }
              break;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Integer coverage__SumExecCount_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__STATE_VARIABLE_SumAfter_0_8, (MR_Integer) 0)));

        switch (MR_tag((MR_Word) coverage__After_4)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(coverage__After_4)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *coverage__STATE_VARIABLE_SumAfter_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                break;
              case (MR_Integer) 1:
                *coverage__STATE_VARIABLE_SumAfter_9 = coverage__STATE_VARIABLE_SumAfter_0_8;
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer coverage__ExecCount_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__After_4, (MR_Integer) 0)));
              MR_Integer coverage__Var_14 = (coverage__SumExecCount_6 + coverage__ExecCount_7);

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *coverage__STATE_VARIABLE_SumAfter_9 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (coverage__Var_14));
              }
            }
            break;
        }
      }
      break;
  }
}

static MR_Word MR_CALL 
coverage__construct_before_after_coverage_2_f_0(
  MR_Word coverage__Before_4,
  MR_Word coverage__After_5)
{
  {
    MR_bool coverage__succeeded;
    MR_Word coverage__Coverage_6;

    switch (MR_tag((MR_Word) coverage__Before_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(coverage__Before_4)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_tag((MR_Word) coverage__After_5)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(coverage__After_5)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    coverage__Coverage_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    break;
                  case (MR_Integer) 1:
                    {
                      coverage__Coverage_6 = (MR_Word) MR_mkword(MR_mktag(3), &coverage_scalar_common_1[3]);
                    }
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer coverage__AfterExecCount_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__After_5, (MR_Integer) 0)));

                  {
                    coverage__Coverage_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), coverage__Coverage_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), coverage__Coverage_6, 1) = ((MR_Box) (coverage__AfterExecCount_7));
                  }
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            switch (MR_tag((MR_Word) coverage__After_5)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(coverage__After_5)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      coverage__Coverage_6 = (MR_Word) MR_mkword(MR_mktag(3), &coverage_scalar_common_1[4]);
                    }
                    break;
                  case (MR_Integer) 1:
                    coverage__Coverage_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer coverage__AfterExecCount_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__After_5, (MR_Integer) 0)));

                  {
                    coverage__Coverage_6 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), coverage__Coverage_6, 0) = ((MR_Box) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(2), coverage__Coverage_6, 1) = ((MR_Box) (coverage__AfterExecCount_13));
                  }
                }
                break;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer coverage__BeforeExecCount_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__Before_4, (MR_Integer) 0)));

          switch (MR_tag((MR_Word) coverage__After_5)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(coverage__After_5)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    coverage__Coverage_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), coverage__Coverage_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), coverage__Coverage_6, 1) = ((MR_Box) (coverage__BeforeExecCount_8));
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    {
                      coverage__Coverage_6 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), coverage__Coverage_6, 0) = ((MR_Box) (coverage__BeforeExecCount_8));
                      MR_hl_field(MR_mktag(2), coverage__Coverage_6, 1) = ((MR_Box) ((MR_Integer) 0));
                    }
                  }
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer coverage__AfterExecCount_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__After_5, (MR_Integer) 0)));

                coverage__succeeded = (coverage__BeforeExecCount_8 == coverage__AfterExecCount_16);
                if (coverage__succeeded)
                  {
                    coverage__Coverage_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), coverage__Coverage_6, 0) = ((MR_Box) (coverage__BeforeExecCount_8));
                  }
                else
                  {
                    coverage__Coverage_6 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), coverage__Coverage_6, 0) = ((MR_Box) (coverage__BeforeExecCount_8));
                    MR_hl_field(MR_mktag(2), coverage__Coverage_6, 1) = ((MR_Box) (coverage__AfterExecCount_16));
                  }
              }
              break;
          }
        }
        break;
    }
    return coverage__Coverage_6;
  }
}

void MR_CALL 
coverage__coverage_point_arrays_to_list_3_p_0(
  MR_ArrayPtr coverage__StaticArray_4,
  MR_ArrayPtr coverage__DynamicArray_5,
  MR_Word * coverage__CoveragePoints_6)
{
  {
    MR_bool coverage__succeeded;
    MR_Integer coverage__Min_7;
    MR_Integer coverage__Max_8;
    MR_Integer coverage__Var_15;
    MR_Integer coverage__Var_16;

    {
      mercury__array__bounds_3_p_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0, (MR_ArrayPtr) coverage__StaticArray_4, &coverage__Min_7, &coverage__Max_8);
    }
    {
      mercury__array__bounds_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_ArrayPtr) coverage__DynamicArray_5, &coverage__Var_15, &coverage__Var_16);
    }
    coverage__succeeded = (coverage__Min_7 == coverage__Var_15);
    if (coverage__succeeded)
      coverage__succeeded = (coverage__Max_8 == coverage__Var_16);
    if (coverage__succeeded)
      {
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "coverage", (MR_String) "predicate \140coverage.coverage_point_arrays_to_list\'/3", (MR_String) "bounds do not match");
          return;
        }
      }
    {
      coverage__coverage_point_arrays_to_list_2_6_p_0(coverage__Min_7, coverage__Max_8, coverage__StaticArray_4, coverage__DynamicArray_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), coverage__CoveragePoints_6);
    }
  }
}

static void MR_CALL 
coverage__coverage_point_arrays_to_list_2_6_p_0(
  MR_Integer coverage__Num_7,
  MR_Integer coverage__Max_8,
  MR_ArrayPtr coverage__StaticArray_9,
  MR_ArrayPtr coverage__DynamicArray_10,
  MR_Word coverage__STATE_VARIABLE_CoveragePoints_0_16,
  MR_Word * coverage__STATE_VARIABLE_CoveragePoints_17)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool coverage__succeeded = (coverage__Num_7 <= coverage__Max_8);

        if (coverage__succeeded)
          {
            MR_Word coverage__GoalPath_12;
            MR_Word coverage__CPType_13;
            MR_Integer coverage__Count_14;
            MR_Word coverage__CP_15;
            MR_Word coverage__Var_18;
            MR_Word coverage__STATE_VARIABLE_CoveragePoints_19_19;
            MR_Integer coverage__Var_20;
            MR_Box coverage__conv0_Var_18;
            MR_Box coverage__conv1_Count_14;

            {
              mercury__array__lookup_3_p_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0, (MR_ArrayPtr) coverage__StaticArray_9, coverage__Num_7, &coverage__conv0_Var_18);
            }
            coverage__Var_18 = ((MR_Word) coverage__conv0_Var_18);
            coverage__GoalPath_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Var_18, (MR_Integer) 0)));
            coverage__CPType_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Var_18, (MR_Integer) 1)));
            {
              mercury__array__lookup_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_ArrayPtr) coverage__DynamicArray_10, coverage__Num_7, &coverage__conv1_Count_14);
            }
            coverage__Count_14 = ((MR_Integer) coverage__conv1_Count_14);
            {
              coverage__CP_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), coverage__CP_15, 0) = ((MR_Box) (coverage__Count_14));
              MR_hl_field(MR_mktag(0), coverage__CP_15, 1) = ((MR_Box) (coverage__GoalPath_12));
              MR_hl_field(MR_mktag(0), coverage__CP_15, 2) = ((MR_Box) (coverage__CPType_13));
            }
            {
              coverage__STATE_VARIABLE_CoveragePoints_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), coverage__STATE_VARIABLE_CoveragePoints_19_19, 0) = ((MR_Box) (coverage__CP_15));
              MR_hl_field(MR_mktag(1), coverage__STATE_VARIABLE_CoveragePoints_19_19, 1) = ((MR_Box) (coverage__STATE_VARIABLE_CoveragePoints_0_16));
            }
            coverage__Var_20 = (coverage__Num_7 + (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer coverage__next_value_of_Num_7 = coverage__Var_20;
              MR_Word coverage__next_value_of_STATE_VARIABLE_CoveragePoints_0_16 = coverage__STATE_VARIABLE_CoveragePoints_19_19;

              coverage__STATE_VARIABLE_CoveragePoints_0_16 = coverage__next_value_of_STATE_VARIABLE_CoveragePoints_0_16;
              coverage__Num_7 = coverage__next_value_of_Num_7;
            }
            continue;
          }
        else
          *coverage__STATE_VARIABLE_CoveragePoints_17 = coverage__STATE_VARIABLE_CoveragePoints_0_16;
      }
      break;
    }
}

void MR_CALL 
coverage__get_coverage_after_det_2_p_0(
  MR_Word coverage__Coverage_3,
  MR_Integer * coverage__After_4)
{
  {
    MR_bool coverage__succeeded;
    MR_Integer coverage__AfterPrime_5;

    switch (MR_tag((MR_Word) coverage__Coverage_3)) {
      default:
        coverage__succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        switch (MR_unmkbody(coverage__Coverage_3)) {
          default:
            coverage__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 1:
            {
              coverage__AfterPrime_5 = (MR_Integer) 0;
              coverage__succeeded = MR_TRUE;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          coverage__AfterPrime_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__Coverage_3, (MR_Integer) 0)));
          coverage__succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer coverage__Var_6 = ((MR_Integer) (MR_hl_field(MR_mktag(2), coverage__Coverage_3, (MR_Integer) 0)));

          coverage__AfterPrime_5 = ((MR_Integer) (MR_hl_field(MR_mktag(2), coverage__Coverage_3, (MR_Integer) 1)));
          coverage__succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), coverage__Coverage_3, (MR_Integer) 0)))) {
          default:
            coverage__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 1:
            {
              coverage__AfterPrime_5 = ((MR_Integer) (MR_hl_field(MR_mktag(3), coverage__Coverage_3, (MR_Integer) 1)));
              coverage__succeeded = MR_TRUE;
            }
            break;
        }
        break;
    }
    if (coverage__succeeded)
      *coverage__After_4 = coverage__AfterPrime_5;
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "coverage", (MR_String) "predicate \140coverage.complete_coverage_error\'/0", (MR_String) "Expected complete coverage information");
          return;
        }
      }
  }
}

void MR_CALL 
coverage__get_coverage_before_and_after_det_3_p_0(
  MR_Word coverage__Coverage_4,
  MR_Integer * coverage__Before_5,
  MR_Integer * coverage__After_6)
{
  {
    MR_bool coverage__succeeded;
    MR_Integer coverage__BeforePrime_7;
    MR_Integer coverage__AfterPrime_8;

    switch (MR_tag((MR_Word) coverage__Coverage_4)) {
      default:
        coverage__succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        switch (MR_unmkbody(coverage__Coverage_4)) {
          default:
            coverage__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 1:
            {
              coverage__BeforePrime_7 = (MR_Integer) 0;
              coverage__AfterPrime_8 = (MR_Integer) 0;
              coverage__succeeded = MR_TRUE;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          coverage__BeforePrime_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__Coverage_4, (MR_Integer) 0)));
          coverage__AfterPrime_8 = coverage__BeforePrime_7;
          coverage__succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 2:
        {
          coverage__BeforePrime_7 = ((MR_Integer) (MR_hl_field(MR_mktag(2), coverage__Coverage_4, (MR_Integer) 0)));
          coverage__AfterPrime_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), coverage__Coverage_4, (MR_Integer) 1)));
          coverage__succeeded = MR_TRUE;
        }
        break;
    }
    if (coverage__succeeded)
      {
        *coverage__Before_5 = coverage__BeforePrime_7;
        *coverage__After_6 = coverage__AfterPrime_8;
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "coverage", (MR_String) "predicate \140coverage.complete_coverage_error\'/0", (MR_String) "Expected complete coverage information");
          return;
        }
      }
  }
}

void MR_CALL 
coverage__get_coverage_before_det_2_p_0(
  MR_Word coverage__Coverage_3,
  MR_Integer * coverage__Before_4)
{
  {
    MR_bool coverage__succeeded;
    MR_Integer coverage__BeforePrime_5;

    switch (MR_tag((MR_Word) coverage__Coverage_3)) {
      default:
        coverage__succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        switch (MR_unmkbody(coverage__Coverage_3)) {
          default:
            coverage__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 1:
            {
              coverage__BeforePrime_5 = (MR_Integer) 0;
              coverage__succeeded = MR_TRUE;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          coverage__BeforePrime_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__Coverage_3, (MR_Integer) 0)));
          coverage__succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer coverage__Var_7;

          coverage__BeforePrime_5 = ((MR_Integer) (MR_hl_field(MR_mktag(2), coverage__Coverage_3, (MR_Integer) 0)));
          coverage__Var_7 = ((MR_Integer) (MR_hl_field(MR_mktag(2), coverage__Coverage_3, (MR_Integer) 1)));
          coverage__succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), coverage__Coverage_3, (MR_Integer) 0)))) {
          default:
            coverage__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            {
              coverage__BeforePrime_5 = ((MR_Integer) (MR_hl_field(MR_mktag(3), coverage__Coverage_3, (MR_Integer) 1)));
              coverage__succeeded = MR_TRUE;
            }
            break;
        }
        break;
    }
    if (coverage__succeeded)
      *coverage__Before_4 = coverage__BeforePrime_5;
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "coverage", (MR_String) "predicate \140coverage.complete_coverage_error\'/0", (MR_String) "Expected complete coverage information");
          return;
        }
      }
  }
}

MR_bool MR_CALL 
coverage__get_coverage_after_2_p_0(
  MR_Word coverage__HeadVar__1_1,
  MR_Integer * coverage__HeadVar__2_2)
{
  {
    MR_bool coverage__succeeded;

    switch (MR_tag((MR_Word) coverage__HeadVar__1_1)) {
      default:
        coverage__succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        switch (MR_unmkbody(coverage__HeadVar__1_1)) {
          default:
            coverage__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 1:
            {
              *coverage__HeadVar__2_2 = (MR_Integer) 0;
              coverage__succeeded = MR_TRUE;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          *coverage__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__HeadVar__1_1, (MR_Integer) 0)));
          coverage__succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer coverage__Var_3 = ((MR_Integer) (MR_hl_field(MR_mktag(2), coverage__HeadVar__1_1, (MR_Integer) 0)));

          *coverage__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(2), coverage__HeadVar__1_1, (MR_Integer) 1)));
          coverage__succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), coverage__HeadVar__1_1, (MR_Integer) 0)))) {
          default:
            coverage__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 1:
            {
              *coverage__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(3), coverage__HeadVar__1_1, (MR_Integer) 1)));
              coverage__succeeded = MR_TRUE;
            }
            break;
        }
        break;
    }
    return coverage__succeeded;
  }
}

MR_bool MR_CALL 
coverage__get_coverage_before_and_after_3_p_0(
  MR_Word coverage__HeadVar__1_1,
  MR_Integer * coverage__HeadVar__2_2,
  MR_Integer * coverage__HeadVar__3_3)
{
  {
    MR_bool coverage__succeeded;

    switch (MR_tag((MR_Word) coverage__HeadVar__1_1)) {
      default:
        coverage__succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        switch (MR_unmkbody(coverage__HeadVar__1_1)) {
          default:
            coverage__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 1:
            {
              *coverage__HeadVar__2_2 = (MR_Integer) 0;
              *coverage__HeadVar__3_3 = (MR_Integer) 0;
              coverage__succeeded = MR_TRUE;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          *coverage__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__HeadVar__1_1, (MR_Integer) 0)));
          *coverage__HeadVar__3_3 = *coverage__HeadVar__2_2;
          coverage__succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 2:
        {
          *coverage__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(2), coverage__HeadVar__1_1, (MR_Integer) 0)));
          *coverage__HeadVar__3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(2), coverage__HeadVar__1_1, (MR_Integer) 1)));
          coverage__succeeded = MR_TRUE;
        }
        break;
    }
    return coverage__succeeded;
  }
}

MR_bool MR_CALL 
coverage__get_coverage_before_2_p_0(
  MR_Word coverage__HeadVar__1_1,
  MR_Integer * coverage__HeadVar__2_2)
{
  {
    MR_bool coverage__succeeded;

    switch (MR_tag((MR_Word) coverage__HeadVar__1_1)) {
      default:
        coverage__succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        switch (MR_unmkbody(coverage__HeadVar__1_1)) {
          default:
            coverage__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 1:
            {
              *coverage__HeadVar__2_2 = (MR_Integer) 0;
              coverage__succeeded = MR_TRUE;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          *coverage__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__HeadVar__1_1, (MR_Integer) 0)));
          coverage__succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer coverage__Var_4;

          *coverage__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(2), coverage__HeadVar__1_1, (MR_Integer) 0)));
          coverage__Var_4 = ((MR_Integer) (MR_hl_field(MR_mktag(2), coverage__HeadVar__1_1, (MR_Integer) 1)));
          coverage__succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), coverage__HeadVar__1_1, (MR_Integer) 0)))) {
          default:
            coverage__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            {
              *coverage__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(3), coverage__HeadVar__1_1, (MR_Integer) 1)));
              coverage__succeeded = MR_TRUE;
            }
            break;
        }
        break;
    }
    return coverage__succeeded;
  }
}

static MR_bool MR_CALL 
coverage____Unify____coverage_after_0_0_10001(
  MR_Box coverage__wrapper_arg_1,
  MR_Box coverage__wrapper_arg_2)
{
  {
    MR_bool coverage__succeeded;

    {
      coverage__succeeded = coverage____Unify____coverage_after_0_0(((MR_Word) coverage__wrapper_arg_1), ((MR_Word) coverage__wrapper_arg_2));
    }
    return coverage__succeeded;
  }
}

static void MR_CALL 
coverage____Compare____coverage_after_0_0_10001(
  MR_Box * coverage__wrapper_arg_1,
  MR_Box coverage__wrapper_arg_2,
  MR_Box coverage__wrapper_arg_3)
{
  {
    MR_Word coverage__conv0_HeadVar__1_1;

    {
      coverage____Compare____coverage_after_0_0(&coverage__conv0_HeadVar__1_1, ((MR_Word) coverage__wrapper_arg_2), ((MR_Word) coverage__wrapper_arg_3));
    }
    *coverage__wrapper_arg_1 = ((MR_Box) (coverage__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
coverage____Unify____coverage_before_0_0_10001(
  MR_Box coverage__wrapper_arg_1,
  MR_Box coverage__wrapper_arg_2)
{
  {
    MR_bool coverage__succeeded;

    {
      coverage__succeeded = coverage____Unify____coverage_before_0_0(((MR_Word) coverage__wrapper_arg_1), ((MR_Word) coverage__wrapper_arg_2));
    }
    return coverage__succeeded;
  }
}

static void MR_CALL 
coverage____Compare____coverage_before_0_0_10001(
  MR_Box * coverage__wrapper_arg_1,
  MR_Box coverage__wrapper_arg_2,
  MR_Box coverage__wrapper_arg_3)
{
  {
    MR_Word coverage__conv0_HeadVar__1_1;

    {
      coverage____Compare____coverage_before_0_0(&coverage__conv0_HeadVar__1_1, ((MR_Word) coverage__wrapper_arg_2), ((MR_Word) coverage__wrapper_arg_3));
    }
    *coverage__wrapper_arg_1 = ((MR_Box) (coverage__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
coverage____Unify____coverage_info_0_0_10001(
  MR_Box coverage__wrapper_arg_1,
  MR_Box coverage__wrapper_arg_2)
{
  {
    MR_bool coverage__succeeded;

    {
      coverage__succeeded = coverage____Unify____coverage_info_0_0(((MR_Word) coverage__wrapper_arg_1), ((MR_Word) coverage__wrapper_arg_2));
    }
    return coverage__succeeded;
  }
}

static void MR_CALL 
coverage____Compare____coverage_info_0_0_10001(
  MR_Box * coverage__wrapper_arg_1,
  MR_Box coverage__wrapper_arg_2,
  MR_Box coverage__wrapper_arg_3)
{
  {
    MR_Word coverage__conv0_HeadVar__1_1;

    {
      coverage____Compare____coverage_info_0_0(&coverage__conv0_HeadVar__1_1, ((MR_Word) coverage__wrapper_arg_2), ((MR_Word) coverage__wrapper_arg_3));
    }
    *coverage__wrapper_arg_1 = ((MR_Box) (coverage__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
coverage____Unify____coverage_point_0_0_10001(
  MR_Box coverage__wrapper_arg_1,
  MR_Box coverage__wrapper_arg_2)
{
  {
    MR_bool coverage__succeeded;

    {
      coverage__succeeded = coverage____Unify____coverage_point_0_0(((MR_Word) coverage__wrapper_arg_1), ((MR_Word) coverage__wrapper_arg_2));
    }
    return coverage__succeeded;
  }
}

static void MR_CALL 
coverage____Compare____coverage_point_0_0_10001(
  MR_Box * coverage__wrapper_arg_1,
  MR_Box coverage__wrapper_arg_2,
  MR_Box coverage__wrapper_arg_3)
{
  {
    MR_Word coverage__conv0_HeadVar__1_1;

    {
      coverage____Compare____coverage_point_0_0(&coverage__conv0_HeadVar__1_1, ((MR_Word) coverage__wrapper_arg_2), ((MR_Word) coverage__wrapper_arg_3));
    }
    *coverage__wrapper_arg_1 = ((MR_Box) (coverage__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
coverage____Unify____coverage_reference_info_1_0_10001(
  MR_Box coverage__wrapper_arg_1,
  MR_Box coverage__wrapper_arg_2,
  MR_Box coverage__wrapper_arg_3)
{
  {
    MR_bool coverage__succeeded;

    {
      coverage__succeeded = coverage____Unify____coverage_reference_info_1_0(((MR_Word) coverage__wrapper_arg_1), ((MR_Word) coverage__wrapper_arg_2), ((MR_Word) coverage__wrapper_arg_3));
    }
    return coverage__succeeded;
  }
}

static void MR_CALL 
coverage____Compare____coverage_reference_info_1_0_10001(
  MR_Box coverage__wrapper_arg_1,
  MR_Box * coverage__wrapper_arg_2,
  MR_Box coverage__wrapper_arg_3,
  MR_Box coverage__wrapper_arg_4)
{
  {
    MR_Word coverage__conv0_HeadVar__1_1;

    {
      coverage____Compare____coverage_reference_info_1_0(((MR_Word) coverage__wrapper_arg_1), &coverage__conv0_HeadVar__1_1, ((MR_Word) coverage__wrapper_arg_3), ((MR_Word) coverage__wrapper_arg_4));
    }
    *coverage__wrapper_arg_2 = ((MR_Box) (coverage__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
coverage____Unify____sum_coverage_after_0_0_10001(
  MR_Box coverage__wrapper_arg_1,
  MR_Box coverage__wrapper_arg_2)
{
  {
    MR_bool coverage__succeeded;

    {
      coverage__succeeded = coverage____Unify____sum_coverage_after_0_0(((MR_Word) coverage__wrapper_arg_1), ((MR_Word) coverage__wrapper_arg_2));
    }
    return coverage__succeeded;
  }
}

static void MR_CALL 
coverage____Compare____sum_coverage_after_0_0_10001(
  MR_Box * coverage__wrapper_arg_1,
  MR_Box coverage__wrapper_arg_2,
  MR_Box coverage__wrapper_arg_3)
{
  {
    MR_Word coverage__conv0_HeadVar__1_1;

    {
      coverage____Compare____sum_coverage_after_0_0(&coverage__conv0_HeadVar__1_1, ((MR_Word) coverage__wrapper_arg_2), ((MR_Word) coverage__wrapper_arg_3));
    }
    *coverage__wrapper_arg_1 = ((MR_Box) (coverage__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
coverage____Unify____sum_coverage_before_0_0_10001(
  MR_Box coverage__wrapper_arg_1,
  MR_Box coverage__wrapper_arg_2)
{
  {
    MR_bool coverage__succeeded;

    {
      coverage__succeeded = coverage____Unify____sum_coverage_before_0_0(((MR_Word) coverage__wrapper_arg_1), ((MR_Word) coverage__wrapper_arg_2));
    }
    return coverage__succeeded;
  }
}

static void MR_CALL 
coverage____Compare____sum_coverage_before_0_0_10001(
  MR_Box * coverage__wrapper_arg_1,
  MR_Box coverage__wrapper_arg_2,
  MR_Box coverage__wrapper_arg_3)
{
  {
    MR_Word coverage__conv0_HeadVar__1_1;

    {
      coverage____Compare____sum_coverage_before_0_0(&coverage__conv0_HeadVar__1_1, ((MR_Word) coverage__wrapper_arg_2), ((MR_Word) coverage__wrapper_arg_3));
    }
    *coverage__wrapper_arg_1 = ((MR_Box) (coverage__conv0_HeadVar__1_1));
  }
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

/* :- end_module coverage. */
