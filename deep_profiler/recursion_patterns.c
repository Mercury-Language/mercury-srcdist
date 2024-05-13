/*
** Automatically generated from `recursion_patterns.m'
** by the Mercury compiler,
** version rotd-2024-05-13
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


// :- module recursion_patterns.
// :- implementation.

/*
INIT mercury__recursion_patterns__init
ENDINIT
*/

#include "recursion_patterns.mih"


#include "analysis_utils.mih"
#include "array.mih"
#include "array_util.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "coverage.mih"
#include "create_report.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "exclude.mih"
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




static const MR_FA_PseudoTypeInfo_Struct2 recursion_patterns__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_recursion_patterns__type_ctor_info_recursion_level_0;

static const MR_FA_PseudoTypeInfo_Struct2 recursion_patterns__pair__pti_pair_2__plain_profile__type_ctor_info_call_site_static_ptr_0__plain_profile__type_ctor_info_call_site_array_slot_0;

static const MR_FA_TypeInfo_Struct1 recursion_patterns__analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0;

static const MR_FA_PseudoTypeInfo_Struct2 recursion_patterns__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0;

static const MR_FA_PseudoTypeInfo_Struct2 recursion_patterns__tree234__pti_tree234_2__plain_report__type_ctor_info_recursion_type_simple_0__plain_recursion_patterns__type_ctor_info_recursion_type_raw_freq_data_0;

static const MR_FA_PseudoTypeInfo_Struct1 recursion_patterns__maybe__pti_maybe_1__plain_recursion_patterns__type_ctor_info_first_proc_info_0;

static const MR_PseudoTypeInfo recursion_patterns__recursion_patterns__field_types_first_proc_info_0_0[2];

static const MR_ConstString recursion_patterns__recursion_patterns__field_names_first_proc_info_0_0[2];

static const MR_DuFunctorDesc recursion_patterns__recursion_patterns__du_functor_desc_first_proc_info_0_0;

static const MR_DuFunctorDescPtr recursion_patterns__recursion_patterns__du_stag_ordered_first_proc_info_0_0[1];

static const MR_DuPtagLayout recursion_patterns__recursion_patterns__du_ptag_ordered_first_proc_info_0[1];

static const MR_DuFunctorDescPtr recursion_patterns__recursion_patterns__du_name_ordered_first_proc_info_0[1];

static const MR_Integer recursion_patterns__recursion_patterns__functor_number_map_first_proc_info_0[1];

static const MR_PseudoTypeInfo recursion_patterns__recursion_patterns__field_types_own_and_inherit_prof_info_0_0[2];

static const MR_ConstString recursion_patterns__recursion_patterns__field_names_own_and_inherit_prof_info_0_0[2];

static const MR_DuFunctorDesc recursion_patterns__recursion_patterns__du_functor_desc_own_and_inherit_prof_info_0_0;

static const MR_DuFunctorDescPtr recursion_patterns__recursion_patterns__du_stag_ordered_own_and_inherit_prof_info_0_0[1];

static const MR_DuPtagLayout recursion_patterns__recursion_patterns__du_ptag_ordered_own_and_inherit_prof_info_0[1];

static const MR_DuFunctorDescPtr recursion_patterns__recursion_patterns__du_name_ordered_own_and_inherit_prof_info_0[1];

static const MR_Integer recursion_patterns__recursion_patterns__functor_number_map_own_and_inherit_prof_info_0[1];

static const MR_FA_TypeInfo_Struct2 recursion_patterns__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0;

static const MR_FA_TypeInfo_Struct1 recursion_patterns__mdbcomp__goal_path__ti_goal_attr_array_1coverage__type_ctor_info_coverage_info_0;

static const MR_PseudoTypeInfo recursion_patterns__recursion_patterns__field_types_recursion_analysis_info_0_0[3];

static const MR_ConstString recursion_patterns__recursion_patterns__field_names_recursion_analysis_info_0_0[3];

static const MR_DuFunctorDesc recursion_patterns__recursion_patterns__du_functor_desc_recursion_analysis_info_0_0;

static const MR_DuFunctorDescPtr recursion_patterns__recursion_patterns__du_stag_ordered_recursion_analysis_info_0_0[1];

static const MR_DuPtagLayout recursion_patterns__recursion_patterns__du_ptag_ordered_recursion_analysis_info_0[1];

static const MR_DuFunctorDescPtr recursion_patterns__recursion_patterns__du_name_ordered_recursion_analysis_info_0[1];

static const MR_Integer recursion_patterns__recursion_patterns__functor_number_map_recursion_analysis_info_0[1];

static const MR_DuFunctorDesc recursion_patterns__recursion_patterns__du_functor_desc_recursion_data_0_0;

static const MR_FA_TypeInfo_Struct2 recursion_patterns__pair__ti_pair_2builtin__type_ctor_info_int_0recursion_patterns__type_ctor_info_recursion_level_0;

static const MR_FA_TypeInfo_Struct1 recursion_patterns__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0recursion_patterns__type_ctor_info_recursion_level_0;

static const MR_FA_TypeInfo_Struct1 recursion_patterns__set_ordlist__ti_set_ordlist_1recursion_patterns__type_ctor_info_recursion_error_0;

static const MR_PseudoTypeInfo recursion_patterns__recursion_patterns__field_types_recursion_data_0_1[3];

static const MR_ConstString recursion_patterns__recursion_patterns__field_names_recursion_data_0_1[3];

static const MR_DuFunctorDesc recursion_patterns__recursion_patterns__du_functor_desc_recursion_data_0_1;

static const MR_DuFunctorDescPtr recursion_patterns__recursion_patterns__du_stag_ordered_recursion_data_0_0[1];

static const MR_DuFunctorDescPtr recursion_patterns__recursion_patterns__du_stag_ordered_recursion_data_0_1[1];

static const MR_DuPtagLayout recursion_patterns__recursion_patterns__du_ptag_ordered_recursion_data_0[2];

static const MR_DuFunctorDescPtr recursion_patterns__recursion_patterns__du_name_ordered_recursion_data_0[2];

static const MR_Integer recursion_patterns__recursion_patterns__functor_number_map_recursion_data_0[2];

static const MR_Integer recursion_patterns__recursion_patterns__functor_number_map_recursion_error_0[1];

static const MR_NotagFunctorDesc recursion_patterns__recursion_patterns__notag_functor_desc_recursion_error_0;

static const MR_PseudoTypeInfo recursion_patterns__recursion_patterns__field_types_recursion_level_0_0[2];

static const MR_ConstString recursion_patterns__recursion_patterns__field_names_recursion_level_0_0[2];

static const MR_DuFunctorDesc recursion_patterns__recursion_patterns__du_functor_desc_recursion_level_0_0;

static const MR_DuFunctorDescPtr recursion_patterns__recursion_patterns__du_stag_ordered_recursion_level_0_0[1];

static const MR_DuPtagLayout recursion_patterns__recursion_patterns__du_ptag_ordered_recursion_level_0[1];

static const MR_DuFunctorDescPtr recursion_patterns__recursion_patterns__du_name_ordered_recursion_level_0[1];

static const MR_Integer recursion_patterns__recursion_patterns__functor_number_map_recursion_level_0[1];

static const MR_FA_TypeInfo_Struct1 recursion_patterns__maybe__ti_maybe_1recursion_patterns__type_ctor_info_own_and_inherit_prof_info_0;

static const MR_FA_TypeInfo_Struct2 recursion_patterns__tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0recursion_patterns__type_ctor_info_recursion_type_raw_proc_freq_data_0;

static const MR_PseudoTypeInfo recursion_patterns__recursion_patterns__field_types_recursion_type_raw_freq_data_0_0[3];

static const MR_ConstString recursion_patterns__recursion_patterns__field_names_recursion_type_raw_freq_data_0_0[3];

static const MR_DuFunctorDesc recursion_patterns__recursion_patterns__du_functor_desc_recursion_type_raw_freq_data_0_0;

static const MR_DuFunctorDescPtr recursion_patterns__recursion_patterns__du_stag_ordered_recursion_type_raw_freq_data_0_0[1];

static const MR_DuPtagLayout recursion_patterns__recursion_patterns__du_ptag_ordered_recursion_type_raw_freq_data_0[1];

static const MR_DuFunctorDescPtr recursion_patterns__recursion_patterns__du_name_ordered_recursion_type_raw_freq_data_0[1];

static const MR_Integer recursion_patterns__recursion_patterns__functor_number_map_recursion_type_raw_freq_data_0[1];

static const MR_PseudoTypeInfo recursion_patterns__recursion_patterns__field_types_recursion_type_raw_proc_freq_data_0_0[3];

static const MR_ConstString recursion_patterns__recursion_patterns__field_names_recursion_type_raw_proc_freq_data_0_0[3];

static const MR_DuFunctorDesc recursion_patterns__recursion_patterns__du_functor_desc_recursion_type_raw_proc_freq_data_0_0;

static const MR_DuFunctorDescPtr recursion_patterns__recursion_patterns__du_stag_ordered_recursion_type_raw_proc_freq_data_0_0[1];

static const MR_DuPtagLayout recursion_patterns__recursion_patterns__du_ptag_ordered_recursion_type_raw_proc_freq_data_0[1];

static const MR_DuFunctorDescPtr recursion_patterns__recursion_patterns__du_name_ordered_recursion_type_raw_proc_freq_data_0[1];

static const MR_Integer recursion_patterns__recursion_patterns__functor_number_map_recursion_type_raw_proc_freq_data_0[1];

static MR_Integer MR_CALL 
recursion_patterns__IntroducedFrom__func__recursion_type_to_simple_type__975__1_1_f_0(
  MR_Word LambdaHeadVar__1_26);

static MR_Word MR_CALL 
recursion_patterns__IntroducedFrom__func__recursion_type_to_simple_type__978__1_1_f_0(
  MR_String LambdaHeadVar__1_34);

static void MR_CALL 
recursion_patterns__IntroducedFrom__pred__recursion_data_and_probability__755__1_4_p_0(
  MR_Float Prob_1,
  MR_Integer HeadVar__2_13,
  MR_Word HeadVar__3_14,
  MR_Word * HeadVar__4_15);

static void MR_CALL 
recursion_patterns__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_114_101_99_117_114_115_105_111_110_95_100_97_116_97_95_97_110_100_95_112_114_111_98_97_98_105_108_105_116_121_95_95_55_53_53_95_95_49_95_95_91_50_93_95_48_4_p_0(
  MR_Float Prob_1,
  MR_Word HeadVar__3_14,
  MR_Word * HeadVar__4_15);

static void MR_CALL 
recursion_patterns____Compare____recursion_type_raw_proc_freq_data_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
recursion_patterns____Unify____recursion_type_raw_proc_freq_data_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
recursion_patterns____Compare____recursion_type_raw_freq_data_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
recursion_patterns____Unify____recursion_type_raw_freq_data_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
recursion_patterns____Compare____recursion_level_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
recursion_patterns____Unify____recursion_level_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
recursion_patterns____Compare____recursion_error_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
recursion_patterns____Unify____recursion_error_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
recursion_patterns____Compare____recursion_data_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
recursion_patterns____Unify____recursion_data_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
recursion_patterns____Compare____recursion_analysis_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
recursion_patterns____Unify____recursion_analysis_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
recursion_patterns____Compare____first_proc_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
recursion_patterns____Compare____own_and_inherit_prof_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
recursion_patterns____Unify____first_proc_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
recursion_patterns____Unify____own_and_inherit_prof_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
recursion_patterns__finalize_histogram_proc_rec_type_5_p_0(
  MR_Word Deep_6,
  MR_Float NumCliques_7,
  MR_Word _PSPtr_8,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5);

static void MR_CALL 
recursion_patterns__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_97_108_105_122_101_95_104_105_115_116_111_103_114_97_109_95_112_114_111_99_95_114_101_99_95_116_121_112_101_95_95_91_51_93_95_48_5_p_0(
  MR_Word Deep_6,
  MR_Float NumCliques_7,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5);

static void MR_CALL 
recursion_patterns__finalize_histogram_rec_type_5_p_0(
  MR_Word Deep_6,
  MR_Float NumCliques_7,
  MR_Word _RecursionType_8,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5);

static void MR_CALL 
recursion_patterns__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_97_108_105_122_101_95_104_105_115_116_111_103_114_97_109_95_114_101_99_95_116_121_112_101_95_95_91_51_93_95_48_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recursion_patterns__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_97_108_105_122_101_95_104_105_115_116_111_103_114_97_109_95_114_101_99_95_116_121_112_101_95_95_91_51_93_95_48_5_p_0(
  MR_Word Deep_6,
  MR_Float NumCliques_7,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5);

static void MR_CALL 
recursion_patterns__update_histogram_4_p_0(
  MR_Word MaybeFirstProcInfo_5,
  MR_Word SimpleType_6,
  MR_Word STATE_VARIABLE_Histogram_0_19,
  MR_Word * STATE_VARIABLE_Histogram_20);

static void MR_CALL 
recursion_patterns__rec_types_freq_build_histogram_5_p_0(
  MR_Word Deep_6,
  MR_Integer HeadVar__2_7,
  MR_Word CliquePtr_8,
  MR_Word STATE_VARIABLE_Histogram_0_29,
  MR_Word * STATE_VARIABLE_Histogram_30);

static void MR_CALL 
recursion_patterns__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_95_116_121_112_101_115_95_102_114_101_113_95_98_117_105_108_100_95_104_105_115_116_111_103_114_97_109_95_95_91_50_93_95_48_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recursion_patterns__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_95_116_121_112_101_115_95_102_114_101_113_95_98_117_105_108_100_95_104_105_115_116_111_103_114_97_109_95_95_91_50_93_95_48_5_p_0(
  MR_Word Deep_6,
  MR_Word CliquePtr_8,
  MR_Word STATE_VARIABLE_Histogram_0_29,
  MR_Word * STATE_VARIABLE_Histogram_30);

static MR_Box MR_CALL 
recursion_patterns__recursion_type_to_simple_type_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
recursion_patterns__recursion_type_to_simple_type_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
recursion_patterns__recursion_type_to_simple_type_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static MR_String MR_CALL 
recursion_patterns__error_to_string_1_f_0(
  MR_Word HeadVar__1_1);

static MR_Float MR_CALL 
recursion_patterns__single_rec_recursion_cost_3_f_0(
  MR_Float BaseCost_5,
  MR_Float RecCost_6,
  MR_Integer LevelI_7);

static void MR_CALL 
recursion_patterns__recursion_level_report_3_p_0(
  MR_Float TotalCalls_4,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
recursion_patterns__create_recursion_types_frequency_report_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recursion_patterns__create_recursion_types_frequency_report_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
recursion_patterns__create_clique_recursion_costs_report_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recursion_patterns__switch_recursion_data_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recursion_patterns__switch_recursion_data_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recursion_patterns__switch_recursion_data_7_p_0(
  MR_Word Info_1,
  MR_Word RevGoalPath_2,
  MR_Integer CaseNum_3,
  MR_Word HeadVar__4_4,
  MR_Float TotalCalls_5,
  MR_Integer CallsRemaining_6,
  MR_Word * RecursionData_7);

static void MR_CALL 
recursion_patterns__disj_recursion_data_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recursion_patterns__disj_recursion_data_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recursion_patterns__disj_recursion_data_5_p_0(
  MR_Word Info_1,
  MR_Word RevGoalPath_2,
  MR_Integer DisjNum_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5);

static void MR_CALL 
recursion_patterns__conj_recursion_data_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recursion_patterns__conj_recursion_data_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recursion_patterns__conj_recursion_data_5_p_0(
  MR_Word Info_1,
  MR_Word RevGoalPath_2,
  MR_Integer ConjNum_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5);

static void MR_CALL 
recursion_patterns__goal_recursion_data_4_p_0(
  MR_Word Info_5,
  MR_Word RevGoalPath_6,
  MR_Word GoalRep_7,
  MR_Word * STATE_VARIABLE_RecursionData_30);

static void MR_CALL 
recursion_patterns__recursion_data_and_probability_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recursion_patterns__recursion_data_and_probability_3_p_0(
  MR_Float Prob_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
recursion_patterns__atomic_goal_recursion_data_4_p_0(
  MR_Word Info_5,
  MR_Word RevGoalPath_6,
  MR_Word AtomicGoal_7,
  MR_Word * RecursionData_8);

static void MR_CALL 
recursion_patterns__merge_recursion_data_sequence_3_p_0(
  MR_Word A_4,
  MR_Word B_5,
  MR_Word * Result_6);

static void MR_CALL 
recursion_patterns__recursions_cross_product_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word PairsB_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
recursion_patterns__recursions_cross_product_2_4_p_0(
  MR_Integer HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
recursion_patterns__merge_recursion_data_after_branch_3_p_0(
  MR_Word A_4,
  MR_Word B_5,
  MR_Word * Result_6);

static void MR_CALL 
recursion_patterns__condense_recursions_2_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static MR_Box MR_CALL 
recursion_patterns__recursion_data_to_recursion_type_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
recursion_patterns__recursion_data_to_recursion_type_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
recursion_patterns__recursion_data_to_recursion_type_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
recursion_patterns__recursion_data_to_recursion_type_4_p_0(
  MR_Integer ParentCallsI_5,
  MR_Integer TotalCallsI_6,
  MR_Word RecursionData_7,
  MR_Word * Type_8);

static MR_bool MR_CALL 
recursion_patterns____Unify____first_proc_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
recursion_patterns____Compare____first_proc_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
recursion_patterns____Unify____own_and_inherit_prof_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
recursion_patterns____Compare____own_and_inherit_prof_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
recursion_patterns____Unify____recursion_analysis_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
recursion_patterns____Compare____recursion_analysis_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
recursion_patterns____Unify____recursion_data_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
recursion_patterns____Compare____recursion_data_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
recursion_patterns____Unify____recursion_error_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
recursion_patterns____Compare____recursion_error_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
recursion_patterns____Unify____recursion_level_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
recursion_patterns____Compare____recursion_level_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
recursion_patterns____Unify____recursion_type_raw_freq_data_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
recursion_patterns____Compare____recursion_type_raw_freq_data_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
recursion_patterns____Unify____recursion_type_raw_proc_freq_data_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
recursion_patterns____Compare____recursion_type_raw_proc_freq_data_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box recursion_patterns_scalar_common_1[8][3];

static /* final */ const MR_Box recursion_patterns_scalar_common_2[9][2];

static /* final */ const MR_Box recursion_patterns_scalar_common_3[3][1];

static /* final */ const MR_Box recursion_patterns_scalar_common_4[4][7];

static /* final */ const MR_Box recursion_patterns_scalar_common_5[1][6];

static /* final */ const MR_Box recursion_patterns_scalar_common_6[3][5];

static /* final */ const MR_Box recursion_patterns_scalar_common_7[3][8];




static /* final */ const MR_Box recursion_patterns_scalar_common_1[8][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&report__report__type_ctor_info_recursion_type_simple_0)),
    ((MR_Box) (&recursion_patterns__recursion_patterns__type_ctor_info_recursion_type_raw_freq_data_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_static_ptr_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_array_slot_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0)),
    ((MR_Box) (&recursion_patterns_scalar_common_2[0]))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&recursion_patterns__recursion_patterns__type_ctor_info_recursion_level_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_static_ptr_0)),
    ((MR_Box) (&recursion_patterns__recursion_patterns__type_ctor_info_recursion_type_raw_proc_freq_data_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&recursion_patterns_scalar_common_6[0])),
    ((MR_Box) (recursion_patterns__recursion_data_to_recursion_type_4_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&recursion_patterns_scalar_common_6[1])),
    ((MR_Box) (recursion_patterns__recursion_type_to_simple_type_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&recursion_patterns_scalar_common_6[2])),
    ((MR_Box) (recursion_patterns__recursion_type_to_simple_type_2_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box recursion_patterns_scalar_common_2[9][2] = {
  /* row   0 */
  {
    ((MR_Box) (&analysis_utils__analysis_utils__type_ctor_info_cost_and_callees_1)),
    ((MR_Box) (&analysis_utils__analysis_utils__type_ctor_info_callee_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_attr_array_1)),
    ((MR_Box) (&coverage__coverage__type_ctor_info_coverage_info_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&recursion_patterns_scalar_common_1[3]))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&recursion_patterns__recursion_patterns__type_ctor_info_recursion_error_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&recursion_patterns__recursion_patterns__type_ctor_info_own_and_inherit_prof_info_0))
  },
  /* row   5 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   6 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   7 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   8 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box recursion_patterns_scalar_common_3[3][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_String) "This clique doesn\'t appear to have an entry procedure")) },
  /* row   1 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
  /* row   2 */
  { ((MR_Box) ((MR_String) "There is no readable procedure representation information file.")) },
};

static /* final */ const MR_Box recursion_patterns_scalar_common_4[4][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&recursion_patterns__recursion_patterns__type_ctor_info_recursion_level_0)),
    ((MR_Box) (&recursion_patterns__recursion_patterns__type_ctor_info_recursion_level_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&recursion_patterns__pair__pti_pair_2__plain_profile__type_ctor_info_call_site_static_ptr_0__plain_profile__type_ctor_info_call_site_array_slot_0)),
    ((MR_Box) (&recursion_patterns__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0)),
    ((MR_Box) (&recursion_patterns__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&recursion_patterns__maybe__pti_maybe_1__plain_recursion_patterns__type_ctor_info_first_proc_info_0)),
    ((MR_Box) (&report__report__type_ctor_info_recursion_type_simple_0)),
    ((MR_Box) (&recursion_patterns__tree234__pti_tree234_2__plain_report__type_ctor_info_recursion_type_simple_0__plain_recursion_patterns__type_ctor_info_recursion_type_raw_freq_data_0)),
    ((MR_Box) (&recursion_patterns__tree234__pti_tree234_2__plain_report__type_ctor_info_recursion_type_simple_0__plain_recursion_patterns__type_ctor_info_recursion_type_raw_freq_data_0))
  },
};

static /* final */ const MR_Box recursion_patterns_scalar_common_5[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0)),
    ((MR_Box) (&recursion_patterns__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_recursion_patterns__type_ctor_info_recursion_level_0)),
    ((MR_Box) (&report__report__type_ctor_info_recursion_level_report_0))
  },
};

static /* final */ const MR_Box recursion_patterns_scalar_common_6[3][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&recursion_patterns__recursion_patterns__type_ctor_info_recursion_error_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&report__report__type_ctor_info_recursion_type_simple_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&report__report__type_ctor_info_recursion_level_report_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box recursion_patterns_scalar_common_7[3][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_clique_ptr_0)),
    ((MR_Box) (&recursion_patterns__tree234__pti_tree234_2__plain_report__type_ctor_info_recursion_type_simple_0__plain_recursion_patterns__type_ctor_info_recursion_type_raw_freq_data_0)),
    ((MR_Box) (&recursion_patterns__tree234__pti_tree234_2__plain_report__type_ctor_info_recursion_type_simple_0__plain_recursion_patterns__type_ctor_info_recursion_type_raw_freq_data_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0)),
    ((MR_Box) (&report__report__type_ctor_info_recursion_type_simple_0)),
    ((MR_Box) (&recursion_patterns__recursion_patterns__type_ctor_info_recursion_type_raw_freq_data_0)),
    ((MR_Box) (&report__report__type_ctor_info_recursion_type_freq_data_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_static_ptr_0)),
    ((MR_Box) (&recursion_patterns__recursion_patterns__type_ctor_info_recursion_type_raw_proc_freq_data_0)),
    ((MR_Box) (&report__report__type_ctor_info_recursion_type_proc_freq_data_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "profile.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"


static const MR_FA_PseudoTypeInfo_Struct2 recursion_patterns__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_recursion_patterns__type_ctor_info_recursion_level_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&recursion_patterns__recursion_patterns__type_ctor_info_recursion_level_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 recursion_patterns__pair__pti_pair_2__plain_profile__type_ctor_info_call_site_static_ptr_0__plain_profile__type_ctor_info_call_site_array_slot_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_call_site_static_ptr_0),
    (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_call_site_array_slot_0)
  }
};

static const MR_FA_TypeInfo_Struct1 recursion_patterns__analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0 = {
  &analysis_utils__analysis_utils__type_ctor_info_cost_and_callees_1,
  { (MR_TypeInfo) (&analysis_utils__analysis_utils__type_ctor_info_callee_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 recursion_patterns__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0),
    (MR_PseudoTypeInfo) (&recursion_patterns__analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 recursion_patterns__tree234__pti_tree234_2__plain_report__type_ctor_info_recursion_type_simple_0__plain_recursion_patterns__type_ctor_info_recursion_type_raw_freq_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&report__report__type_ctor_info_recursion_type_simple_0),
    (MR_PseudoTypeInfo) (&recursion_patterns__recursion_patterns__type_ctor_info_recursion_type_raw_freq_data_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 recursion_patterns__maybe__pti_maybe_1__plain_recursion_patterns__type_ctor_info_first_proc_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_PseudoTypeInfo) (&recursion_patterns__recursion_patterns__type_ctor_info_first_proc_info_0) }
};

static const MR_PseudoTypeInfo recursion_patterns__recursion_patterns__field_types_first_proc_info_0_0[2] = {
  (MR_PseudoTypeInfo) (&report__report__type_ctor_info_proc_desc_0),
  (MR_PseudoTypeInfo) (&recursion_patterns__recursion_patterns__type_ctor_info_own_and_inherit_prof_info_0)
};

static const MR_ConstString recursion_patterns__recursion_patterns__field_names_first_proc_info_0_0[2] = {
  (MR_String) "fpi_pdesc",
  (MR_String) "fpi_prof_info"
};

static const MR_DuFunctorDesc recursion_patterns__recursion_patterns__du_functor_desc_first_proc_info_0_0 = {
  (MR_String) "first_proc_info",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  recursion_patterns__recursion_patterns__field_types_first_proc_info_0_0,
  recursion_patterns__recursion_patterns__field_names_first_proc_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr recursion_patterns__recursion_patterns__du_stag_ordered_first_proc_info_0_0[1] = { &recursion_patterns__recursion_patterns__du_functor_desc_first_proc_info_0_0 };

static const MR_DuPtagLayout recursion_patterns__recursion_patterns__du_ptag_ordered_first_proc_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    recursion_patterns__recursion_patterns__du_stag_ordered_first_proc_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr recursion_patterns__recursion_patterns__du_name_ordered_first_proc_info_0[1] = { &recursion_patterns__recursion_patterns__du_functor_desc_first_proc_info_0_0 };

static const MR_Integer recursion_patterns__recursion_patterns__functor_number_map_first_proc_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct recursion_patterns__recursion_patterns__type_ctor_info_first_proc_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (recursion_patterns____Unify____first_proc_info_0_0_10001)),
  ((MR_Box) (recursion_patterns____Compare____first_proc_info_0_0_10001)),
  (MR_String) "recursion_patterns",
  (MR_String) "first_proc_info",
  { recursion_patterns__recursion_patterns__du_name_ordered_first_proc_info_0 },
  { recursion_patterns__recursion_patterns__du_ptag_ordered_first_proc_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  recursion_patterns__recursion_patterns__functor_number_map_first_proc_info_0,

};

static const MR_PseudoTypeInfo recursion_patterns__recursion_patterns__field_types_own_and_inherit_prof_info_0_0[2] = {
  (MR_PseudoTypeInfo) (&measurements__measurements__type_ctor_info_own_prof_info_0),
  (MR_PseudoTypeInfo) (&measurements__measurements__type_ctor_info_inherit_prof_info_0)
};

static const MR_ConstString recursion_patterns__recursion_patterns__field_names_own_and_inherit_prof_info_0_0[2] = {
  (MR_String) "oai_own",
  (MR_String) "oai_inherit"
};

static const MR_DuFunctorDesc recursion_patterns__recursion_patterns__du_functor_desc_own_and_inherit_prof_info_0_0 = {
  (MR_String) "own_and_inherit_prof_info",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  recursion_patterns__recursion_patterns__field_types_own_and_inherit_prof_info_0_0,
  recursion_patterns__recursion_patterns__field_names_own_and_inherit_prof_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr recursion_patterns__recursion_patterns__du_stag_ordered_own_and_inherit_prof_info_0_0[1] = { &recursion_patterns__recursion_patterns__du_functor_desc_own_and_inherit_prof_info_0_0 };

static const MR_DuPtagLayout recursion_patterns__recursion_patterns__du_ptag_ordered_own_and_inherit_prof_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    recursion_patterns__recursion_patterns__du_stag_ordered_own_and_inherit_prof_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr recursion_patterns__recursion_patterns__du_name_ordered_own_and_inherit_prof_info_0[1] = { &recursion_patterns__recursion_patterns__du_functor_desc_own_and_inherit_prof_info_0_0 };

static const MR_Integer recursion_patterns__recursion_patterns__functor_number_map_own_and_inherit_prof_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct recursion_patterns__recursion_patterns__type_ctor_info_own_and_inherit_prof_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (recursion_patterns____Unify____own_and_inherit_prof_info_0_0_10001)),
  ((MR_Box) (recursion_patterns____Compare____own_and_inherit_prof_info_0_0_10001)),
  (MR_String) "recursion_patterns",
  (MR_String) "own_and_inherit_prof_info",
  { recursion_patterns__recursion_patterns__du_name_ordered_own_and_inherit_prof_info_0 },
  { recursion_patterns__recursion_patterns__du_ptag_ordered_own_and_inherit_prof_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  recursion_patterns__recursion_patterns__functor_number_map_own_and_inherit_prof_info_0,

};

static const MR_FA_TypeInfo_Struct2 recursion_patterns__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0),
    (MR_TypeInfo) (&recursion_patterns__analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0)
  }
};

static const MR_FA_TypeInfo_Struct1 recursion_patterns__mdbcomp__goal_path__ti_goal_attr_array_1coverage__type_ctor_info_coverage_info_0 = {
  &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_attr_array_1,
  { (MR_TypeInfo) (&coverage__coverage__type_ctor_info_coverage_info_0) }
};

static const MR_PseudoTypeInfo recursion_patterns__recursion_patterns__field_types_recursion_analysis_info_0_0[3] = {
  (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_clique_ptr_0),
  (MR_PseudoTypeInfo) (&recursion_patterns__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0),
  (MR_PseudoTypeInfo) (&recursion_patterns__mdbcomp__goal_path__ti_goal_attr_array_1coverage__type_ctor_info_coverage_info_0)
};

static const MR_ConstString recursion_patterns__recursion_patterns__field_names_recursion_analysis_info_0_0[3] = {
  (MR_String) "rai_this_clique",
  (MR_String) "rai_call_sites",
  (MR_String) "rai_coverage_info"
};

static const MR_DuFunctorDesc recursion_patterns__recursion_patterns__du_functor_desc_recursion_analysis_info_0_0 = {
  (MR_String) "recursion_analysis_info",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  recursion_patterns__recursion_patterns__field_types_recursion_analysis_info_0_0,
  recursion_patterns__recursion_patterns__field_names_recursion_analysis_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr recursion_patterns__recursion_patterns__du_stag_ordered_recursion_analysis_info_0_0[1] = { &recursion_patterns__recursion_patterns__du_functor_desc_recursion_analysis_info_0_0 };

static const MR_DuPtagLayout recursion_patterns__recursion_patterns__du_ptag_ordered_recursion_analysis_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    recursion_patterns__recursion_patterns__du_stag_ordered_recursion_analysis_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr recursion_patterns__recursion_patterns__du_name_ordered_recursion_analysis_info_0[1] = { &recursion_patterns__recursion_patterns__du_functor_desc_recursion_analysis_info_0_0 };

static const MR_Integer recursion_patterns__recursion_patterns__functor_number_map_recursion_analysis_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct recursion_patterns__recursion_patterns__type_ctor_info_recursion_analysis_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (recursion_patterns____Unify____recursion_analysis_info_0_0_10001)),
  ((MR_Box) (recursion_patterns____Compare____recursion_analysis_info_0_0_10001)),
  (MR_String) "recursion_patterns",
  (MR_String) "recursion_analysis_info",
  { recursion_patterns__recursion_patterns__du_name_ordered_recursion_analysis_info_0 },
  { recursion_patterns__recursion_patterns__du_ptag_ordered_recursion_analysis_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  recursion_patterns__recursion_patterns__functor_number_map_recursion_analysis_info_0,

};

static const MR_DuFunctorDesc recursion_patterns__recursion_patterns__du_functor_desc_recursion_data_0_0 = {
  (MR_String) "no_recursion_data_dead_proc",
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

static const MR_FA_TypeInfo_Struct2 recursion_patterns__pair__ti_pair_2builtin__type_ctor_info_int_0recursion_patterns__type_ctor_info_recursion_level_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_TypeInfo) (&recursion_patterns__recursion_patterns__type_ctor_info_recursion_level_0)
  }
};

static const MR_FA_TypeInfo_Struct1 recursion_patterns__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0recursion_patterns__type_ctor_info_recursion_level_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&recursion_patterns__pair__ti_pair_2builtin__type_ctor_info_int_0recursion_patterns__type_ctor_info_recursion_level_0) }
};

static const MR_FA_TypeInfo_Struct1 recursion_patterns__set_ordlist__ti_set_ordlist_1recursion_patterns__type_ctor_info_recursion_error_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&recursion_patterns__recursion_patterns__type_ctor_info_recursion_error_0) }
};

static const MR_PseudoTypeInfo recursion_patterns__recursion_patterns__field_types_recursion_data_0_1[3] = {
  (MR_PseudoTypeInfo) (&recursion_patterns__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0recursion_patterns__type_ctor_info_recursion_level_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&recursion_patterns__set_ordlist__ti_set_ordlist_1recursion_patterns__type_ctor_info_recursion_error_0)
};

static const MR_ConstString recursion_patterns__recursion_patterns__field_names_recursion_data_0_1[3] = {
  (MR_String) "rd_recursions",
  (MR_String) "rd_maximum",
  (MR_String) "rd_errors"
};

static const MR_DuFunctorDesc recursion_patterns__recursion_patterns__du_functor_desc_recursion_data_0_1 = {
  (MR_String) "recursion_data",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  recursion_patterns__recursion_patterns__field_types_recursion_data_0_1,
  recursion_patterns__recursion_patterns__field_names_recursion_data_0_1,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr recursion_patterns__recursion_patterns__du_stag_ordered_recursion_data_0_0[1] = { &recursion_patterns__recursion_patterns__du_functor_desc_recursion_data_0_0 };

static const MR_DuFunctorDescPtr recursion_patterns__recursion_patterns__du_stag_ordered_recursion_data_0_1[1] = { &recursion_patterns__recursion_patterns__du_functor_desc_recursion_data_0_1 };

static const MR_DuPtagLayout recursion_patterns__recursion_patterns__du_ptag_ordered_recursion_data_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    recursion_patterns__recursion_patterns__du_stag_ordered_recursion_data_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    recursion_patterns__recursion_patterns__du_stag_ordered_recursion_data_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr recursion_patterns__recursion_patterns__du_name_ordered_recursion_data_0[2] = {
  &recursion_patterns__recursion_patterns__du_functor_desc_recursion_data_0_0,
  &recursion_patterns__recursion_patterns__du_functor_desc_recursion_data_0_1
};

static const MR_Integer recursion_patterns__recursion_patterns__functor_number_map_recursion_data_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct recursion_patterns__recursion_patterns__type_ctor_info_recursion_data_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (recursion_patterns____Unify____recursion_data_0_0_10001)),
  ((MR_Box) (recursion_patterns____Compare____recursion_data_0_0_10001)),
  (MR_String) "recursion_patterns",
  (MR_String) "recursion_data",
  { recursion_patterns__recursion_patterns__du_name_ordered_recursion_data_0 },
  { recursion_patterns__recursion_patterns__du_ptag_ordered_recursion_data_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  recursion_patterns__recursion_patterns__functor_number_map_recursion_data_0,

};

static const MR_Integer recursion_patterns__recursion_patterns__functor_number_map_recursion_error_0[1] = { (MR_Integer) 0 };

static const MR_NotagFunctorDesc recursion_patterns__recursion_patterns__notag_functor_desc_recursion_error_0 = {
  (MR_String) "re_unhandled_determinism",
  (MR_PseudoTypeInfo) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_detism_rep_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct recursion_patterns__recursion_patterns__type_ctor_info_recursion_error_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (recursion_patterns____Unify____recursion_error_0_0_10001)),
  ((MR_Box) (recursion_patterns____Compare____recursion_error_0_0_10001)),
  (MR_String) "recursion_patterns",
  (MR_String) "recursion_error",
  { &recursion_patterns__recursion_patterns__notag_functor_desc_recursion_error_0 },
  { &recursion_patterns__recursion_patterns__notag_functor_desc_recursion_error_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  recursion_patterns__recursion_patterns__functor_number_map_recursion_error_0,

};

static const MR_PseudoTypeInfo recursion_patterns__recursion_patterns__field_types_recursion_level_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0)
};

static const MR_ConstString recursion_patterns__recursion_patterns__field_names_recursion_level_0_0[2] = {
  (MR_String) "rl_cost",
  (MR_String) "rl_probability"
};

static const MR_DuFunctorDesc recursion_patterns__recursion_patterns__du_functor_desc_recursion_level_0_0 = {
  (MR_String) "recursion_level",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  recursion_patterns__recursion_patterns__field_types_recursion_level_0_0,
  recursion_patterns__recursion_patterns__field_names_recursion_level_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr recursion_patterns__recursion_patterns__du_stag_ordered_recursion_level_0_0[1] = { &recursion_patterns__recursion_patterns__du_functor_desc_recursion_level_0_0 };

static const MR_DuPtagLayout recursion_patterns__recursion_patterns__du_ptag_ordered_recursion_level_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    recursion_patterns__recursion_patterns__du_stag_ordered_recursion_level_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr recursion_patterns__recursion_patterns__du_name_ordered_recursion_level_0[1] = { &recursion_patterns__recursion_patterns__du_functor_desc_recursion_level_0_0 };

static const MR_Integer recursion_patterns__recursion_patterns__functor_number_map_recursion_level_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct recursion_patterns__recursion_patterns__type_ctor_info_recursion_level_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (recursion_patterns____Unify____recursion_level_0_0_10001)),
  ((MR_Box) (recursion_patterns____Compare____recursion_level_0_0_10001)),
  (MR_String) "recursion_patterns",
  (MR_String) "recursion_level",
  { recursion_patterns__recursion_patterns__du_name_ordered_recursion_level_0 },
  { recursion_patterns__recursion_patterns__du_ptag_ordered_recursion_level_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  recursion_patterns__recursion_patterns__functor_number_map_recursion_level_0,

};

static const MR_FA_TypeInfo_Struct1 recursion_patterns__maybe__ti_maybe_1recursion_patterns__type_ctor_info_own_and_inherit_prof_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&recursion_patterns__recursion_patterns__type_ctor_info_own_and_inherit_prof_info_0) }
};

static const MR_FA_TypeInfo_Struct2 recursion_patterns__tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0recursion_patterns__type_ctor_info_recursion_type_raw_proc_freq_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&profile__profile__type_ctor_info_proc_static_ptr_0),
    (MR_TypeInfo) (&recursion_patterns__recursion_patterns__type_ctor_info_recursion_type_raw_proc_freq_data_0)
  }
};

static const MR_PseudoTypeInfo recursion_patterns__recursion_patterns__field_types_recursion_type_raw_freq_data_0_0[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&recursion_patterns__maybe__ti_maybe_1recursion_patterns__type_ctor_info_own_and_inherit_prof_info_0),
  (MR_PseudoTypeInfo) (&recursion_patterns__tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0recursion_patterns__type_ctor_info_recursion_type_raw_proc_freq_data_0)
};

static const MR_ConstString recursion_patterns__recursion_patterns__field_names_recursion_type_raw_freq_data_0_0[3] = {
  (MR_String) "rtrfd_freq",
  (MR_String) "rtrfd_maybe_prof_info",
  (MR_String) "rtrfd_entry_procs"
};

static const MR_DuFunctorDesc recursion_patterns__recursion_patterns__du_functor_desc_recursion_type_raw_freq_data_0_0 = {
  (MR_String) "recursion_type_raw_freq_data",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  recursion_patterns__recursion_patterns__field_types_recursion_type_raw_freq_data_0_0,
  recursion_patterns__recursion_patterns__field_names_recursion_type_raw_freq_data_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr recursion_patterns__recursion_patterns__du_stag_ordered_recursion_type_raw_freq_data_0_0[1] = { &recursion_patterns__recursion_patterns__du_functor_desc_recursion_type_raw_freq_data_0_0 };

static const MR_DuPtagLayout recursion_patterns__recursion_patterns__du_ptag_ordered_recursion_type_raw_freq_data_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    recursion_patterns__recursion_patterns__du_stag_ordered_recursion_type_raw_freq_data_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr recursion_patterns__recursion_patterns__du_name_ordered_recursion_type_raw_freq_data_0[1] = { &recursion_patterns__recursion_patterns__du_functor_desc_recursion_type_raw_freq_data_0_0 };

static const MR_Integer recursion_patterns__recursion_patterns__functor_number_map_recursion_type_raw_freq_data_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct recursion_patterns__recursion_patterns__type_ctor_info_recursion_type_raw_freq_data_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (recursion_patterns____Unify____recursion_type_raw_freq_data_0_0_10001)),
  ((MR_Box) (recursion_patterns____Compare____recursion_type_raw_freq_data_0_0_10001)),
  (MR_String) "recursion_patterns",
  (MR_String) "recursion_type_raw_freq_data",
  { recursion_patterns__recursion_patterns__du_name_ordered_recursion_type_raw_freq_data_0 },
  { recursion_patterns__recursion_patterns__du_ptag_ordered_recursion_type_raw_freq_data_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  recursion_patterns__recursion_patterns__functor_number_map_recursion_type_raw_freq_data_0,

};

static const MR_PseudoTypeInfo recursion_patterns__recursion_patterns__field_types_recursion_type_raw_proc_freq_data_0_0[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&recursion_patterns__recursion_patterns__type_ctor_info_own_and_inherit_prof_info_0),
  (MR_PseudoTypeInfo) (&report__report__type_ctor_info_proc_desc_0)
};

static const MR_ConstString recursion_patterns__recursion_patterns__field_names_recursion_type_raw_proc_freq_data_0_0[3] = {
  (MR_String) "rtrpfd_freq",
  (MR_String) "rtrpfd_prof_info",
  (MR_String) "rtrpfd_proc_desc"
};

static const MR_DuFunctorDesc recursion_patterns__recursion_patterns__du_functor_desc_recursion_type_raw_proc_freq_data_0_0 = {
  (MR_String) "recursion_type_raw_proc_freq_data",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  recursion_patterns__recursion_patterns__field_types_recursion_type_raw_proc_freq_data_0_0,
  recursion_patterns__recursion_patterns__field_names_recursion_type_raw_proc_freq_data_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr recursion_patterns__recursion_patterns__du_stag_ordered_recursion_type_raw_proc_freq_data_0_0[1] = { &recursion_patterns__recursion_patterns__du_functor_desc_recursion_type_raw_proc_freq_data_0_0 };

static const MR_DuPtagLayout recursion_patterns__recursion_patterns__du_ptag_ordered_recursion_type_raw_proc_freq_data_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    recursion_patterns__recursion_patterns__du_stag_ordered_recursion_type_raw_proc_freq_data_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr recursion_patterns__recursion_patterns__du_name_ordered_recursion_type_raw_proc_freq_data_0[1] = { &recursion_patterns__recursion_patterns__du_functor_desc_recursion_type_raw_proc_freq_data_0_0 };

static const MR_Integer recursion_patterns__recursion_patterns__functor_number_map_recursion_type_raw_proc_freq_data_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct recursion_patterns__recursion_patterns__type_ctor_info_recursion_type_raw_proc_freq_data_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (recursion_patterns____Unify____recursion_type_raw_proc_freq_data_0_0_10001)),
  ((MR_Box) (recursion_patterns____Compare____recursion_type_raw_proc_freq_data_0_0_10001)),
  (MR_String) "recursion_patterns",
  (MR_String) "recursion_type_raw_proc_freq_data",
  { recursion_patterns__recursion_patterns__du_name_ordered_recursion_type_raw_proc_freq_data_0 },
  { recursion_patterns__recursion_patterns__du_ptag_ordered_recursion_type_raw_proc_freq_data_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  recursion_patterns__recursion_patterns__functor_number_map_recursion_type_raw_proc_freq_data_0,

};

static MR_Integer MR_CALL 
recursion_patterns__IntroducedFrom__func__recursion_type_to_simple_type__975__1_1_f_0(
  MR_Word LambdaHeadVar__1_26)
{
  MR_Integer LambdaHeadVar__2_27 = ((MR_Integer) ((MR_hl_field(0, LambdaHeadVar__1_26, (MR_Integer) 0))));

  return LambdaHeadVar__2_27;
}

static MR_Word MR_CALL 
recursion_patterns__IntroducedFrom__func__recursion_type_to_simple_type__978__1_1_f_0(
  MR_String LambdaHeadVar__1_34)
{
  MR_Word LambdaHeadVar__2_35;

  {
    LambdaHeadVar__2_35 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, LambdaHeadVar__2_35, 0) = ((MR_Box) (LambdaHeadVar__1_34));
  }
  return LambdaHeadVar__2_35;
}

static void MR_CALL 
recursion_patterns__IntroducedFrom__pred__recursion_data_and_probability__755__1_4_p_0(
  MR_Float Prob_1,
  MR_Integer HeadVar__2_13,
  MR_Word HeadVar__3_14,
  MR_Word * HeadVar__4_15)
{
  recursion_patterns__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_114_101_99_117_114_115_105_111_110_95_100_97_116_97_95_97_110_100_95_112_114_111_98_97_98_105_108_105_116_121_95_95_55_53_53_95_95_49_95_95_91_50_93_95_48_4_p_0(Prob_1, HeadVar__3_14, HeadVar__4_15);
}

static void MR_CALL 
recursion_patterns__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_114_101_99_117_114_115_105_111_110_95_100_97_116_97_95_97_110_100_95_112_114_111_98_97_98_105_108_105_116_121_95_95_55_53_53_95_95_49_95_95_91_50_93_95_48_4_p_0(
  MR_Float Prob_1,
  MR_Word HeadVar__3_14,
  MR_Word * HeadVar__4_15)
{
  MR_Float Cost_17 = MR_unbox_float((MR_hl_field(0, HeadVar__3_14, (MR_Integer) 0)));
  MR_Float Prob0_18 = MR_unbox_float((MR_hl_field(0, HeadVar__3_14, (MR_Integer) 1)));
  MR_Float Prob_19;

  Prob_19 = measurement_units__and_2_f_0(Prob0_18, Prob_1);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__4_15 = base;
    MR_hl_field(0, base, 0) = MR_box_float(Cost_17);
    MR_hl_field(0, base, 1) = MR_box_float(Prob_19);
  }
}

static void MR_CALL 
recursion_patterns____Compare____recursion_type_raw_proc_freq_data_0_0(
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
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
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
      else
      {
        succeeded = MR_TRUE;
        succeeded = !(succeeded);
        if (succeeded)
        {
          SubResult1_6 = (MR_Integer) 0;
          succeeded = MR_TRUE;
        }
      }
    }
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      recursion_patterns____Compare____own_and_inherit_prof_info_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        report____Compare____proc_desc_0_0(HeadVar__1_1, ArgX3_10, ArgY3_11);
    }
  }
}

static MR_bool MR_CALL 
recursion_patterns____Unify____recursion_type_raw_proc_freq_data_0_0(
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
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      succeeded = recursion_patterns____Unify____own_and_inherit_prof_info_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
        succeeded = report____Unify____proc_desc_0_0(ArgX3_7, ArgY3_8);
    }
  }
  return succeeded;
}

static void MR_CALL 
recursion_patterns____Compare____recursion_type_raw_freq_data_0_0(
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
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
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
      else
      {
        succeeded = MR_TRUE;
        succeeded = !(succeeded);
        if (succeeded)
        {
          SubResult1_6 = (MR_Integer) 0;
          succeeded = MR_TRUE;
        }
      }
    }
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&recursion_patterns_scalar_common_2[4]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&recursion_patterns_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
    }
  }
}

static MR_bool MR_CALL 
recursion_patterns____Unify____recursion_type_raw_freq_data_0_0(
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
    MR_Word TypeInfo_11_11;
    MR_Word TypeInfo_12_12;
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      TypeInfo_11_11 = (MR_Word) (&recursion_patterns_scalar_common_2[4]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        TypeInfo_12_12 = (MR_Word) (&recursion_patterns_scalar_common_1[4]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
recursion_patterns____Compare____recursion_level_0_0(
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
    MR_Float ArgX1_4 = MR_unbox_float((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0)));
    MR_Float ArgY1_5 = MR_unbox_float((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0)));
    MR_Float ArgX2_7 = MR_unbox_float((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1)));
    MR_Float ArgY2_8 = MR_unbox_float((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1)));
    MR_Word SubResult1_6;

    mercury__private_builtin__builtin_compare_float_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__private_builtin__builtin_compare_float_3_p_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

static MR_bool MR_CALL 
recursion_patterns____Unify____recursion_level_0_0(
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
    MR_Float ArgX1_3 = MR_unbox_float((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0)));
    MR_Float ArgY1_4 = MR_unbox_float((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0)));
    MR_Float ArgX2_5 = MR_unbox_float((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1)));
    MR_Float ArgY2_6 = MR_unbox_float((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1)));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
      succeeded = (ArgX2_5 == ArgY2_6);
  }
  return succeeded;
}

static void MR_CALL 
recursion_patterns____Compare____recursion_error_0_0(
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
    MR_Word ArgX1_4 = (MR_Word) (HeadVar__2_2);
    MR_Word ArgY1_5 = (MR_Word) (HeadVar__3_3);
    MR_Integer Var_9 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_10 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_9 < Var_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Var_9 > Var_10);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
  }
}

static MR_bool MR_CALL 
recursion_patterns____Unify____recursion_error_0_0(
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
    MR_Word ArgX1_3 = (MR_Word) (HeadVar__1_1);
    MR_Word ArgY1_4 = (MR_Word) (HeadVar__2_2);

    succeeded = (ArgX1_3 == ArgY1_4);
  }
  return succeeded;
}

static void MR_CALL 
recursion_patterns____Compare____recursion_data_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&recursion_patterns_scalar_common_2[2]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
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
        else
        {
          succeeded = MR_TRUE;
          succeeded = !(succeeded);
          if (succeeded)
          {
            SubResult2_9 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&recursion_patterns_scalar_common_2[3]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
    }
  }
}

static MR_bool MR_CALL 
recursion_patterns____Unify____recursion_data_0_0(
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
    MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_4 == CastX_3);
  }
  else
  {
    MR_Word TypeInfo_13_13;
    MR_Word TypeInfo_14_14;
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_6;
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer ArgY2_8;
    MR_Word ArgX3_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_10;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      ArgY2_8 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      ArgY3_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
      TypeInfo_13_13 = (MR_Word) (&recursion_patterns_scalar_common_2[2]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
      if (succeeded)
      {
        succeeded = (ArgX2_7 == ArgY2_8);
        if (succeeded)
        {
          TypeInfo_14_14 = (MR_Word) (&recursion_patterns_scalar_common_2[3]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX3_9)), ((MR_Box) (ArgY3_10)));
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
recursion_patterns____Compare____recursion_analysis_info_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word SubResult1_6;
    MR_Integer Var_17 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_18 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_17 < Var_18);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (Var_17 > Var_18);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 2;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = MR_TRUE;
        succeeded = !(succeeded);
        if (succeeded)
        {
          SubResult1_6 = (MR_Integer) 0;
          succeeded = MR_TRUE;
        }
      }
    }
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&recursion_patterns_scalar_common_1[2]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&recursion_patterns_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
    }
  }
}

static MR_bool MR_CALL 
recursion_patterns____Unify____recursion_analysis_info_0_0(
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
    MR_Word TypeInfo_12_12;
    MR_Word TypeInfo_13_13;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Integer Var_14 = (MR_Integer) (ArgX1_3);
    MR_Integer Var_15 = (MR_Integer) (ArgY1_4);

    succeeded = (Var_14 == Var_15);
    if (succeeded)
    {
      TypeInfo_12_12 = (MR_Word) (&recursion_patterns_scalar_common_1[2]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        TypeInfo_13_13 = (MR_Word) (&recursion_patterns_scalar_common_2[1]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
recursion_patterns____Compare____first_proc_info_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;

    report____Compare____proc_desc_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      recursion_patterns____Compare____own_and_inherit_prof_info_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

static void MR_CALL 
recursion_patterns____Compare____own_and_inherit_prof_info_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;

    measurements____Compare____own_prof_info_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      measurements____Compare____inherit_prof_info_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

static MR_bool MR_CALL 
recursion_patterns____Unify____first_proc_info_0_0(
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

    succeeded = report____Unify____proc_desc_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
      succeeded = recursion_patterns____Unify____own_and_inherit_prof_info_0_0(ArgX2_5, ArgY2_6);
  }
  return succeeded;
}

static MR_bool MR_CALL 
recursion_patterns____Unify____own_and_inherit_prof_info_0_0(
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

    succeeded = measurements____Unify____own_prof_info_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
      succeeded = measurements____Unify____inherit_prof_info_0_0(ArgX2_5, ArgY2_6);
  }
  return succeeded;
}

static void MR_CALL 
recursion_patterns__finalize_histogram_proc_rec_type_5_p_0(
  MR_Word Deep_6,
  MR_Float NumCliques_7,
  MR_Word _PSPtr_8,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  recursion_patterns__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_97_108_105_122_101_95_104_105_115_116_111_103_114_97_109_95_112_114_111_99_95_114_101_99_95_116_121_112_101_95_95_91_51_93_95_48_5_p_0(Deep_6, NumCliques_7, HeadVar__4_4, HeadVar__5_5);
}

static void MR_CALL 
recursion_patterns__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_97_108_105_122_101_95_104_105_115_116_111_103_114_97_109_95_112_114_111_99_95_114_101_99_95_116_121_112_101_95_95_91_51_93_95_48_5_p_0(
  MR_Word Deep_6,
  MR_Float NumCliques_7,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  MR_Integer Freq_9 = ((MR_Integer) ((MR_hl_field(0, HeadVar__4_4, (MR_Integer) 0))));
  MR_Word ProfInfo_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__4_4, (MR_Integer) 1))));
  MR_Word ProcDesc_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__4_4, (MR_Integer) 2))));
  MR_Word Percent_12;
  MR_Word Summary_13;
  MR_Word Own_14;
  MR_Word Inherit_15;
  MR_Float Var_16;
  MR_Float Var_17;

  Var_17 = mercury__float__float_1_f_0(Freq_9);
  Var_16 = mercury__float__f_slash_2_f_0(Var_17, NumCliques_7);
  Percent_12 = measurement_units__percent_1_f_0(Var_16);
  Own_14 = ((MR_Word) ((MR_hl_field(0, ProfInfo_10, (MR_Integer) 0))));
  Inherit_15 = ((MR_Word) ((MR_hl_field(0, ProfInfo_10, (MR_Integer) 1))));
  create_report__own_and_inherit_to_perf_row_data_5_p_0((MR_Word) (&report__report__type_ctor_info_proc_desc_0), Deep_6, ((MR_Box) (ProcDesc_11)), Own_14, Inherit_15, &Summary_13);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__5_5 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Freq_9));
    MR_hl_field(0, base, 1) = ((MR_Box) (Percent_12));
    MR_hl_field(0, base, 2) = ((MR_Box) (Summary_13));
  }
}

static void MR_CALL 
recursion_patterns__finalize_histogram_rec_type_5_p_0(
  MR_Word Deep_6,
  MR_Float NumCliques_7,
  MR_Word _RecursionType_8,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  recursion_patterns__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_97_108_105_122_101_95_104_105_115_116_111_103_114_97_109_95_114_101_99_95_116_121_112_101_95_95_91_51_93_95_48_5_p_0(Deep_6, NumCliques_7, HeadVar__4_4, HeadVar__5_5);
}

static void MR_CALL 
recursion_patterns__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_97_108_105_122_101_95_104_105_115_116_111_103_114_97_109_95_114_101_99_95_116_121_112_101_95_95_91_51_93_95_48_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__5_5;

  recursion_patterns__finalize_histogram_proc_rec_type_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), MR_unbox_float((MR_hl_field(0, closure, (MR_Integer) 4))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__5_5);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__5_5));
}

static void MR_CALL 
recursion_patterns__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_97_108_105_122_101_95_104_105_115_116_111_103_114_97_109_95_114_101_99_95_116_121_112_101_95_95_91_51_93_95_48_5_p_0(
  MR_Word Deep_6,
  MR_Float NumCliques_7,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  MR_Integer Freq_9 = ((MR_Integer) ((MR_hl_field(0, HeadVar__4_4, (MR_Integer) 0))));
  MR_Word MaybeProfInfo_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__4_4, (MR_Integer) 1))));
  MR_Word Percent_12;
  MR_Word MaybeSummary_13;
  MR_Word STATE_VARIABLE_EntryProcs_0_18 = ((MR_Word) ((MR_hl_field(0, HeadVar__4_4, (MR_Integer) 2))));
  MR_Word STATE_VARIABLE_EntryProcs_19;
  MR_Float Var_20;
  MR_Float Var_21;
  MR_Word Var_23;

  Var_21 = mercury__float__float_1_f_0(Freq_9);
  Var_20 = mercury__float__f_slash_2_f_0(Var_21, NumCliques_7);
  Percent_12 = measurement_units__percent_1_f_0(Var_20);
  if ((MaybeProfInfo_10 == (MR_Word) ((MR_Unsigned) 0U)))
    MaybeSummary_13 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word ProfInfo_14 = ((MR_Word) ((MR_hl_field(1, MaybeProfInfo_10, (MR_Integer) 0))));
    MR_Word Own_15 = ((MR_Word) ((MR_hl_field(0, ProfInfo_14, (MR_Integer) 0))));
    MR_Word Inherit_16 = ((MR_Word) ((MR_hl_field(0, ProfInfo_14, (MR_Integer) 1))));
    MR_Word Summary_17;

    create_report__own_and_inherit_to_perf_row_data_5_p_0((MR_Word) (&mercury__unit__unit__type_ctor_info_unit_0), Deep_6, ((MR_Box) ((MR_Integer) 0)), Own_15, Inherit_16, &Summary_17);
    {
      MaybeSummary_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeSummary_13, 0) = ((MR_Box) (Summary_17));
    }
  }
  {
    Var_23 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_23, 0) = ((MR_Box) (&recursion_patterns_scalar_common_7[2]));
    MR_hl_field(0, Var_23, 1) = ((MR_Box) (recursion_patterns__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_97_108_105_122_101_95_104_105_115_116_111_103_114_97_109_95_114_101_99_95_116_121_112_101_95_95_91_51_93_95_48_5_p_0_1));
    MR_hl_field(0, Var_23, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_23, 3) = ((MR_Box) (Deep_6));
    MR_hl_field(0, Var_23, 4) = MR_box_float(NumCliques_7);
  }
  mercury__map__map_values_3_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_static_ptr_0), (MR_Word) (&recursion_patterns__recursion_patterns__type_ctor_info_recursion_type_raw_proc_freq_data_0), (MR_Word) (&report__report__type_ctor_info_recursion_type_proc_freq_data_0), Var_23, STATE_VARIABLE_EntryProcs_0_18, &STATE_VARIABLE_EntryProcs_19);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__5_5 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Freq_9));
    MR_hl_field(0, base, 1) = ((MR_Box) (Percent_12));
    MR_hl_field(0, base, 2) = ((MR_Box) (MaybeSummary_13));
    MR_hl_field(0, base, 3) = ((MR_Box) (STATE_VARIABLE_EntryProcs_19));
  }
}

static void MR_CALL 
recursion_patterns__update_histogram_4_p_0(
  MR_Word MaybeFirstProcInfo_5,
  MR_Word SimpleType_6,
  MR_Word STATE_VARIABLE_Histogram_0_19,
  MR_Word * STATE_VARIABLE_Histogram_20)
{
  MR_bool succeeded;
  MR_Word Data_18;
  MR_Word Data0_8;
  MR_Box conv0_Data0_8;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&report__report__type_ctor_info_recursion_type_simple_0), (MR_Word) (&recursion_patterns__recursion_patterns__type_ctor_info_recursion_type_raw_freq_data_0), STATE_VARIABLE_Histogram_0_19, ((MR_Box) (SimpleType_6)), &conv0_Data0_8);
  if (succeeded)
  {
    Data0_8 = ((MR_Word) (conv0_Data0_8));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Integer Count0_9 = ((MR_Integer) ((MR_hl_field(0, Data0_8, (MR_Integer) 0))));
    MR_Word MaybeProfInfo0_10 = ((MR_Word) ((MR_hl_field(0, Data0_8, (MR_Integer) 1))));
    MR_Word Procs0_11 = ((MR_Word) ((MR_hl_field(0, Data0_8, (MR_Integer) 2))));
    MR_Word MaybeProfInfo_15;
    MR_Word Procs_16;
    MR_Integer Count_17;

    if ((MaybeFirstProcInfo_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MaybeProfInfo_15 = MaybeProfInfo0_10;
      Procs_16 = Procs0_11;
    }
    else
    {
      MR_Word FirstProcInfo_12 = ((MR_Word) ((MR_hl_field(1, MaybeFirstProcInfo_5, (MR_Integer) 0))));
      MR_Word ProfInfo_14;
      MR_Word PSDesc_51 = ((MR_Word) ((MR_hl_field(0, FirstProcInfo_12, (MR_Integer) 0))));
      MR_Word FirstProfInfo_52 = ((MR_Word) ((MR_hl_field(0, FirstProcInfo_12, (MR_Integer) 1))));
      MR_Word PsPtr_53;
      MR_Word ProcFreqData_60;
      MR_Word ProcFreqData0_54;
      MR_Box conv1_ProcFreqData0_54;

      if ((MaybeProfInfo0_10 == (MR_Word) ((MR_Unsigned) 0U)))
        ProfInfo_14 = FirstProfInfo_52;
      else
      {
        MR_Word ProfInfo0_13 = ((MR_Word) ((MR_hl_field(1, MaybeProfInfo0_10, (MR_Integer) 0))));
        MR_Word OwnA_45 = ((MR_Word) ((MR_hl_field(0, FirstProfInfo_52, (MR_Integer) 0))));
        MR_Word InheritA_46 = ((MR_Word) ((MR_hl_field(0, FirstProfInfo_52, (MR_Integer) 1))));
        MR_Word OwnB_47 = ((MR_Word) ((MR_hl_field(0, ProfInfo0_13, (MR_Integer) 0))));
        MR_Word InheritB_48 = ((MR_Word) ((MR_hl_field(0, ProfInfo0_13, (MR_Integer) 1))));
        MR_Word Own_49;
        MR_Word Inherit_50;

        Own_49 = measurements__add_own_to_own_2_f_0(OwnA_45, OwnB_47);
        Inherit_50 = measurements__add_inherit_to_inherit_2_f_0(InheritA_46, InheritB_48);
        {
          ProfInfo_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ProfInfo_14, 0) = ((MR_Box) (Own_49));
          MR_hl_field(0, ProfInfo_14, 1) = ((MR_Box) (Inherit_50));
        }
      }
      {
        MaybeProfInfo_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeProfInfo_15, 0) = ((MR_Box) (ProfInfo_14));
      }
      PsPtr_53 = ((MR_Word) ((MR_hl_field(0, PSDesc_51, (MR_Integer) 0))));
      succeeded = mercury__map__search_3_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_static_ptr_0), (MR_Word) (&recursion_patterns__recursion_patterns__type_ctor_info_recursion_type_raw_proc_freq_data_0), Procs0_11, ((MR_Box) (PsPtr_53)), &conv1_ProcFreqData0_54);
      if (succeeded)
      {
        ProcFreqData0_54 = ((MR_Word) (conv1_ProcFreqData0_54));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Integer Count0_55 = ((MR_Integer) ((MR_hl_field(0, ProcFreqData0_54, (MR_Integer) 0))));
        MR_Word ProfInfo0_56 = ((MR_Word) ((MR_hl_field(0, ProcFreqData0_54, (MR_Integer) 1))));
        MR_Word ProcDesc_57 = ((MR_Word) ((MR_hl_field(0, ProcFreqData0_54, (MR_Integer) 2))));
        MR_Word ProfInfo_58;
        MR_Integer Count_59;
        MR_Word OwnA_72 = ((MR_Word) ((MR_hl_field(0, FirstProfInfo_52, (MR_Integer) 0))));
        MR_Word InheritA_73 = ((MR_Word) ((MR_hl_field(0, FirstProfInfo_52, (MR_Integer) 1))));
        MR_Word OwnB_74 = ((MR_Word) ((MR_hl_field(0, ProfInfo0_56, (MR_Integer) 0))));
        MR_Word InheritB_75 = ((MR_Word) ((MR_hl_field(0, ProfInfo0_56, (MR_Integer) 1))));
        MR_Word Own_76;
        MR_Word Inherit_77;

        Own_76 = measurements__add_own_to_own_2_f_0(OwnA_72, OwnB_74);
        Inherit_77 = measurements__add_inherit_to_inherit_2_f_0(InheritA_73, InheritB_75);
        {
          ProfInfo_58 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ProfInfo_58, 0) = ((MR_Box) (Own_76));
          MR_hl_field(0, ProfInfo_58, 1) = ((MR_Box) (Inherit_77));
        }
        Count_59 = (MR_Integer) ((MR_Unsigned) Count0_55 + (MR_Unsigned) 1);
        {
          ProcFreqData_60 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ProcFreqData_60, 0) = ((MR_Box) (Count_59));
          MR_hl_field(0, ProcFreqData_60, 1) = ((MR_Box) (ProfInfo_58));
          MR_hl_field(0, ProcFreqData_60, 2) = ((MR_Box) (ProcDesc_57));
        }
      }
      else
        {
          ProcFreqData_60 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ProcFreqData_60, 0) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, ProcFreqData_60, 1) = ((MR_Box) (FirstProfInfo_52));
          MR_hl_field(0, ProcFreqData_60, 2) = ((MR_Box) (PSDesc_51));
        }
      mercury__map__set_4_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_static_ptr_0), (MR_Word) (&recursion_patterns__recursion_patterns__type_ctor_info_recursion_type_raw_proc_freq_data_0), ((MR_Box) (PsPtr_53)), ((MR_Box) (ProcFreqData_60)), Procs0_11, &Procs_16);
    }
    Count_17 = (MR_Integer) ((MR_Unsigned) Count0_9 + (MR_Unsigned) 1);
    {
      Data_18 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Data_18, 0) = ((MR_Box) (Count_17));
      MR_hl_field(0, Data_18, 1) = ((MR_Box) (MaybeProfInfo_15));
      MR_hl_field(0, Data_18, 2) = ((MR_Box) (Procs_16));
    }
  }
  else
  {
    MR_Word MaybeProfInfo_29;
    MR_Word Procs_30;

    if ((MaybeFirstProcInfo_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MaybeProfInfo_29 = (MR_Word) ((MR_Unsigned) 0U);
      Procs_30 = mercury__map__init_0_f_0((MR_Word) (&profile__profile__type_ctor_info_proc_static_ptr_0), (MR_Word) (&recursion_patterns__recursion_patterns__type_ctor_info_recursion_type_raw_proc_freq_data_0));
    }
    else
    {
      MR_Word Var_23;
      MR_Word Var_24;
      MR_Word FirstProcInfo_26 = ((MR_Word) ((MR_hl_field(1, MaybeFirstProcInfo_5, (MR_Integer) 0))));
      MR_Word PSDesc_78;
      MR_Word FirstProfInfo_79;
      MR_Word PsPtr_80;
      MR_Word ProcFreqData_87;
      MR_Word ProcFreqData0_81;
      MR_Box conv2_ProcFreqData0_81;

      Var_23 = ((MR_Word) ((MR_hl_field(0, FirstProcInfo_26, (MR_Integer) 1))));
      {
        MaybeProfInfo_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeProfInfo_29, 0) = ((MR_Box) (Var_23));
      }
      Var_24 = mercury__map__init_0_f_0((MR_Word) (&profile__profile__type_ctor_info_proc_static_ptr_0), (MR_Word) (&recursion_patterns__recursion_patterns__type_ctor_info_recursion_type_raw_proc_freq_data_0));
      PSDesc_78 = ((MR_Word) ((MR_hl_field(0, FirstProcInfo_26, (MR_Integer) 0))));
      FirstProfInfo_79 = ((MR_Word) ((MR_hl_field(0, FirstProcInfo_26, (MR_Integer) 1))));
      PsPtr_80 = ((MR_Word) ((MR_hl_field(0, PSDesc_78, (MR_Integer) 0))));
      succeeded = mercury__map__search_3_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_static_ptr_0), (MR_Word) (&recursion_patterns__recursion_patterns__type_ctor_info_recursion_type_raw_proc_freq_data_0), Var_24, ((MR_Box) (PsPtr_80)), &conv2_ProcFreqData0_81);
      if (succeeded)
      {
        ProcFreqData0_81 = ((MR_Word) (conv2_ProcFreqData0_81));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Integer Count0_82 = ((MR_Integer) ((MR_hl_field(0, ProcFreqData0_81, (MR_Integer) 0))));
        MR_Word ProfInfo0_83 = ((MR_Word) ((MR_hl_field(0, ProcFreqData0_81, (MR_Integer) 1))));
        MR_Word ProcDesc_84 = ((MR_Word) ((MR_hl_field(0, ProcFreqData0_81, (MR_Integer) 2))));
        MR_Word ProfInfo_85;
        MR_Integer Count_86;
        MR_Word OwnA_99 = ((MR_Word) ((MR_hl_field(0, FirstProfInfo_79, (MR_Integer) 0))));
        MR_Word InheritA_100 = ((MR_Word) ((MR_hl_field(0, FirstProfInfo_79, (MR_Integer) 1))));
        MR_Word OwnB_101 = ((MR_Word) ((MR_hl_field(0, ProfInfo0_83, (MR_Integer) 0))));
        MR_Word InheritB_102 = ((MR_Word) ((MR_hl_field(0, ProfInfo0_83, (MR_Integer) 1))));
        MR_Word Own_103;
        MR_Word Inherit_104;

        Own_103 = measurements__add_own_to_own_2_f_0(OwnA_99, OwnB_101);
        Inherit_104 = measurements__add_inherit_to_inherit_2_f_0(InheritA_100, InheritB_102);
        {
          ProfInfo_85 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ProfInfo_85, 0) = ((MR_Box) (Own_103));
          MR_hl_field(0, ProfInfo_85, 1) = ((MR_Box) (Inherit_104));
        }
        Count_86 = (MR_Integer) ((MR_Unsigned) Count0_82 + (MR_Unsigned) 1);
        {
          ProcFreqData_87 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ProcFreqData_87, 0) = ((MR_Box) (Count_86));
          MR_hl_field(0, ProcFreqData_87, 1) = ((MR_Box) (ProfInfo_85));
          MR_hl_field(0, ProcFreqData_87, 2) = ((MR_Box) (ProcDesc_84));
        }
      }
      else
        {
          ProcFreqData_87 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ProcFreqData_87, 0) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, ProcFreqData_87, 1) = ((MR_Box) (FirstProfInfo_79));
          MR_hl_field(0, ProcFreqData_87, 2) = ((MR_Box) (PSDesc_78));
        }
      mercury__map__set_4_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_static_ptr_0), (MR_Word) (&recursion_patterns__recursion_patterns__type_ctor_info_recursion_type_raw_proc_freq_data_0), ((MR_Box) (PsPtr_80)), ((MR_Box) (ProcFreqData_87)), Var_24, &Procs_30);
    }
    {
      Data_18 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Data_18, 0) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Data_18, 1) = ((MR_Box) (MaybeProfInfo_29));
      MR_hl_field(0, Data_18, 2) = ((MR_Box) (Procs_30));
    }
  }
  mercury__map__set_4_p_0((MR_Word) (&report__report__type_ctor_info_recursion_type_simple_0), (MR_Word) (&recursion_patterns__recursion_patterns__type_ctor_info_recursion_type_raw_freq_data_0), ((MR_Box) (SimpleType_6)), ((MR_Box) (Data_18)), STATE_VARIABLE_Histogram_0_19, STATE_VARIABLE_Histogram_20);
}

static void MR_CALL 
recursion_patterns__rec_types_freq_build_histogram_5_p_0(
  MR_Word Deep_6,
  MR_Integer HeadVar__2_7,
  MR_Word CliquePtr_8,
  MR_Word STATE_VARIABLE_Histogram_0_29,
  MR_Word * STATE_VARIABLE_Histogram_30)
{
  recursion_patterns__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_95_116_121_112_101_115_95_102_114_101_113_95_98_117_105_108_100_95_104_105_115_116_111_103_114_97_109_95_95_91_50_93_95_48_5_p_0(Deep_6, CliquePtr_8, STATE_VARIABLE_Histogram_0_29, STATE_VARIABLE_Histogram_30);
}

static void MR_CALL 
recursion_patterns__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_95_116_121_112_101_115_95_102_114_101_113_95_98_117_105_108_100_95_104_105_115_116_111_103_114_97_109_95_95_91_50_93_95_48_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Histogram_20;

  recursion_patterns__update_histogram_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Histogram_20);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Histogram_20));
}

static void MR_CALL 
recursion_patterns__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_95_116_121_112_101_115_95_102_114_101_113_95_98_117_105_108_100_95_104_105_115_116_111_103_114_97_109_95_95_91_50_93_95_48_5_p_0(
  MR_Word Deep_6,
  MR_Word CliquePtr_8,
  MR_Word STATE_VARIABLE_Histogram_0_29,
  MR_Word * STATE_VARIABLE_Histogram_30)
{
  MR_Word MaybeCliqueRecursionReport_14;
  MR_Word SimpleTypes_17;
  MR_Word MaybeFirstPDPtr_19;
  MR_Word MaybeFirstProcInfo_28;
  MR_Word Var_45;
  MR_Word MaybeProgressStream_11 = ((MR_Word) ((MR_hl_field(0, Deep_6, (MR_Integer) 29))));
  MR_Word _OtherPDPtrs_20;
  MR_Box conv1_STATE_VARIABLE_Histogram_30;

  if (!((MaybeProgressStream_11 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word ProgressStream_12 = ((MR_Word) ((MR_hl_field(1, MaybeProgressStream_11, (MR_Integer) 0))));
    MR_Integer CliqueNum_13 = (MR_Integer) (CliquePtr_8);
    MR_String Var_174;

    mercury__io__write_string_4_p_0(ProgressStream_12, (MR_String) "Analyzing clique: ");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&recursion_patterns_scalar_common_3[1]), CliqueNum_13, &Var_174);
    mercury__io__write_string_4_p_0(ProgressStream_12, Var_174);
    mercury__io__write_string_4_p_0(ProgressStream_12, (MR_String) "\n");
  }
  recursion_patterns__create_clique_recursion_costs_report_3_p_0(Deep_6, CliquePtr_8, &MaybeCliqueRecursionReport_14);
  if (((MR_tag((MR_Word) MaybeCliqueRecursionReport_14)) == (MR_Integer) 1))
  {
    MR_String Error_18 = ((MR_String) ((MR_hl_field(1, MaybeCliqueRecursionReport_14, (MR_Integer) 0))));
    MR_Word Var_37;

    {
      Var_37 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_37, 0) = ((MR_Box) (Error_18));
    }
    {
      SimpleTypes_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, SimpleTypes_17, 0) = ((MR_Box) (Var_37));
      MR_hl_field(1, SimpleTypes_17, 1) = ((MR_Box) (MR_mkword(1, &recursion_patterns_scalar_common_2[5])));
    }
  }
  else
  {
    MR_Word CliqueRecursionReport_15 = ((MR_Word) ((MR_hl_field(0, MaybeCliqueRecursionReport_14, (MR_Integer) 0))));
    MR_Word Type_16 = ((MR_Word) ((MR_hl_field(0, CliqueRecursionReport_15, (MR_Integer) 1))));

    recursion_patterns__recursion_type_to_simple_type_2_p_0(Type_16, &SimpleTypes_17);
  }
  analysis_utils__find_clique_first_and_other_procs_4_p_0(Deep_6, CliquePtr_8, &MaybeFirstPDPtr_19, &_OtherPDPtrs_20);
  if ((MaybeFirstPDPtr_19 == (MR_Word) ((MR_Unsigned) 0U)))
    MaybeFirstProcInfo_28 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word FirstPDPtr_21 = ((MR_Word) ((MR_hl_field(1, MaybeFirstPDPtr_19, (MR_Integer) 0))));
    MR_Word FirstPD_22;
    MR_Word FirstPSPtr_23;
    MR_Word PDesc_24;
    MR_Word ProcOwn_25;
    MR_Word ProcInherit_26;
    MR_Word FirstProcInfo_27;
    MR_ArrayPtr Var_41 = ((MR_ArrayPtr) ((MR_hl_field(0, Deep_6, (MR_Integer) 6))));
    MR_ArrayPtr Var_42;
    MR_ArrayPtr Var_43;
    MR_Word Var_44;

    profile__lookup_proc_dynamics_3_p_0(Var_41, FirstPDPtr_21, &FirstPD_22);
    FirstPSPtr_23 = ((MR_Word) ((MR_hl_field(0, FirstPD_22, (MR_Integer) 0))));
    PDesc_24 = create_report__describe_proc_2_f_0(Deep_6, FirstPSPtr_23);
    Var_42 = ((MR_ArrayPtr) ((MR_hl_field(0, Deep_6, (MR_Integer) 16))));
    profile__lookup_pd_own_3_p_0(Var_42, FirstPDPtr_21, &ProcOwn_25);
    Var_43 = ((MR_ArrayPtr) ((MR_hl_field(0, Deep_6, (MR_Integer) 17))));
    profile__lookup_pd_desc_3_p_0(Var_43, FirstPDPtr_21, &ProcInherit_26);
    {
      Var_44 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_44, 0) = ((MR_Box) (ProcOwn_25));
      MR_hl_field(0, Var_44, 1) = ((MR_Box) (ProcInherit_26));
    }
    {
      FirstProcInfo_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, FirstProcInfo_27, 0) = ((MR_Box) (PDesc_24));
      MR_hl_field(0, FirstProcInfo_27, 1) = ((MR_Box) (Var_44));
    }
    {
      MaybeFirstProcInfo_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeFirstProcInfo_28, 0) = ((MR_Box) (FirstProcInfo_27));
    }
  }
  {
    Var_45 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_45, 0) = ((MR_Box) (&recursion_patterns_scalar_common_4[3]));
    MR_hl_field(0, Var_45, 1) = ((MR_Box) (recursion_patterns__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_95_116_121_112_101_115_95_102_114_101_113_95_98_117_105_108_100_95_104_105_115_116_111_103_114_97_109_95_95_91_50_93_95_48_5_p_0_1));
    MR_hl_field(0, Var_45, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_45, 3) = ((MR_Box) (MaybeFirstProcInfo_28));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&report__report__type_ctor_info_recursion_type_simple_0), (MR_Word) (&recursion_patterns_scalar_common_1[0]), Var_45, SimpleTypes_17, ((MR_Box) (STATE_VARIABLE_Histogram_0_29)), &conv1_STATE_VARIABLE_Histogram_30);
  *STATE_VARIABLE_Histogram_30 = ((MR_Word) (conv1_STATE_VARIABLE_Histogram_30));
}

static MR_Box MR_CALL 
recursion_patterns__recursion_type_to_simple_type_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Integer conv1_LambdaHeadVar__2_27;

  conv1_LambdaHeadVar__2_27 = recursion_patterns__IntroducedFrom__func__recursion_type_to_simple_type__975__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_27));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
recursion_patterns__recursion_type_to_simple_type_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_35;

  conv0_LambdaHeadVar__2_35 = recursion_patterns__IntroducedFrom__func__recursion_type_to_simple_type__978__1_1_f_0(((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_35));
  return wrapper_arg_2;
}

static void MR_CALL 
recursion_patterns__recursion_type_to_simple_type_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *HeadVar__2_2 = (MR_Word) (MR_mkword(1, &recursion_patterns_scalar_common_2[7]));
      break;
    case (MR_Integer) 1:
      *HeadVar__2_2 = (MR_Word) (MR_mkword(1, &recursion_patterns_scalar_common_2[8]));
      break;
    case (MR_Integer) 2:
      *HeadVar__2_2 = (MR_Word) (MR_mkword(1, &recursion_patterns_scalar_common_2[6]));
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer NumProcs_16 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
            MR_Word Var_17;

            {
              Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_17, 0) = ((MR_Box) (NumProcs_16));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__2_2 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Var_17));
              MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Levels_19 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
            MR_Word SimpleLevels_20;
            MR_Word Var_22;
            MR_Word Var_24;

            Var_24 = mercury__list__map_2_f_0((MR_Word) (&report__report__type_ctor_info_recursion_level_report_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&recursion_patterns_scalar_common_1[7]), Levels_19);
            SimpleLevels_20 = mercury__set__list_to_set_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_24);
            {
              Var_22 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Var_22, 0) = ((MR_Box) (SimpleLevels_20));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__2_2 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Var_22));
              MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Errors_29 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
            MR_Word Var_32;

            Var_32 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&report__report__type_ctor_info_recursion_type_simple_0), (MR_Word) (&recursion_patterns_scalar_common_1[6]), Errors_29);
            *HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) (&report__report__type_ctor_info_recursion_type_simple_0), Var_32, (MR_Word) (MR_mkword(1, &recursion_patterns_scalar_common_2[5])));
          }
          break;
      }
      break;
  }
}

static MR_String MR_CALL 
recursion_patterns__error_to_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2;
  MR_Word Detism_3 = (MR_Word) (HeadVar__1_1);
  MR_String Var_7;

  Var_7 = mercury__string__string_1_f_0((MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_detism_rep_0), ((MR_Box) (Detism_3)));
  HeadVar__2_2 = mercury__string__f_43_43_2_f_0(Var_7, (MR_String) " code is not handled");
  return HeadVar__2_2;
}

static MR_Float MR_CALL 
recursion_patterns__single_rec_recursion_cost_3_f_0(
  MR_Float BaseCost_5,
  MR_Float RecCost_6,
  MR_Integer LevelI_7)
{
  MR_Float Cost_8;
  MR_Float Var_9;
  MR_Float Var_10;
  MR_Float Var_11;

  Var_10 = mercury__float__float_1_f_0(LevelI_7);
  Var_11 = (RecCost_6 + ((MR_Float) 1.0000000000000000));
  Var_9 = (Var_10 * Var_11);
  Cost_8 = (BaseCost_5 + Var_9);
  return Cost_8;
}

static void MR_CALL 
recursion_patterns__recursion_level_report_3_p_0(
  MR_Float TotalCalls_4,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  MR_Integer Level_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Float NonRecCost_6;
  MR_Float Prob_7;
  MR_Integer Calls_8;
  MR_Float CostExChild_9;
  MR_Float CallsF_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_Float Var_12;
  MR_Float Var_13;

  NonRecCost_6 = MR_unbox_float((MR_hl_field(0, Var_11, (MR_Integer) 0)));
  Prob_7 = MR_unbox_float((MR_hl_field(0, Var_11, (MR_Integer) 1)));
  Var_12 = measurement_units__probability_to_float_1_f_0(Prob_7);
  CallsF_10 = (Var_12 * TotalCalls_4);
  Calls_8 = mercury__float__round_to_int_1_f_0(CallsF_10);
  Var_13 = mercury__float__float_1_f_0(Level_5);
  CostExChild_9 = (Var_13 * CallsF_10);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__3_3 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Level_5));
    MR_hl_field(0, base, 1) = ((MR_Box) (Calls_8));
    MR_hl_field(0, base, 2) = MR_box_float(Prob_7);
    MR_hl_field(0, base, 3) = MR_box_float(NonRecCost_6);
    MR_hl_field(0, base, 4) = MR_box_float(CostExChild_9);
  }
}

void MR_CALL 
recursion_patterns__recursion_type_get_maybe_avg_max_depth_2_p_1(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Var_3;

        Var_3 = measurements__recursion_depth_from_float_1_f_0((MR_Float) 0.0000000000000000);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__2_2 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_3));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Float Depth_7 = MR_unbox_float((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 2)));
        MR_Word Var_10;

        Var_10 = measurements__recursion_depth_from_float_1_f_0(Depth_7);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__2_2 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_10));
        }
      }
      break;
    case (MR_Integer) 2:
      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 1:
          *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 2:
          *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
          break;
      }
      break;
  }
}

void MR_CALL 
recursion_patterns__recursion_type_get_maybe_avg_max_depth_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_3;

    Var_3 = measurements__recursion_depth_from_float_1_f_0((MR_Float) 0.0000000000000000);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_3));
    }
  }
  else
  {
    MR_Float Depth_7 = MR_unbox_float((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 2)));
    MR_Word Var_10;

    Var_10 = measurements__recursion_depth_from_float_1_f_0(Depth_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_10));
    }
  }
}

static void MR_CALL 
recursion_patterns__create_recursion_types_frequency_report_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__5_5;

  recursion_patterns__finalize_histogram_rec_type_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), MR_unbox_float((MR_hl_field(0, closure, (MR_Integer) 4))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_HeadVar__5_5);
  *wrapper_arg_3 = ((MR_Box) (conv2_HeadVar__5_5));
}

static void MR_CALL 
recursion_patterns__create_recursion_types_frequency_report_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Histogram_30;

  recursion_patterns__rec_types_freq_build_histogram_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Histogram_30);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Histogram_30));
}

void MR_CALL 
recursion_patterns__create_recursion_types_frequency_report_2_p_0(
  MR_Word Deep_3,
  MR_Word * MaybeReport_4)
{
  MR_Word MaybeProgRepResult_5 = ((MR_Word) ((MR_hl_field(0, Deep_3, (MR_Integer) 28))));
  MR_ArrayPtr Var_33 = ((MR_ArrayPtr) ((MR_hl_field(0, Deep_3, (MR_Integer) 9))));

  if ((MaybeProgRepResult_5 == (MR_Word) ((MR_Unsigned) 0U)))
    *MaybeReport_4 = (MR_Word) (MR_mkword(1, &recursion_patterns_scalar_common_3[2]));
  else
  {
    MR_Word Var_90 = ((MR_Word) ((MR_hl_field(1, MaybeProgRepResult_5, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) Var_90)) == (MR_Integer) 1))
    {
      MR_String Error_6 = ((MR_String) ((MR_hl_field(1, Var_90, (MR_Integer) 0))));
      MR_String Var_16;
      MR_String Var_18;

      Var_18 = mercury__string__f_43_43_2_f_0((MR_String) "information file: ", Error_6);
      Var_16 = mercury__string__f_43_43_2_f_0((MR_String) "Error reading procedure representation ", Var_18);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeReport_4 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_16));
      }
    }
    else
    {
      MR_Integer NumCliques_9;
      MR_Word Histogram0_10;
      MR_Word Histogram_11;
      MR_Word Var_21;
      MR_Word Var_22;
      MR_Word Var_23;
      MR_Word Var_91;
      MR_Float Var_92;
      MR_Box conv1_Histogram0_10;

      mercury__array__size_2_p_0((MR_Word) (&profile__profile__type_ctor_info_clique_ptr_0), (MR_ArrayPtr) (Var_33), &NumCliques_9);
      {
        Var_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_21, 0) = ((MR_Box) (&recursion_patterns_scalar_common_7[0]));
        MR_hl_field(0, Var_21, 1) = ((MR_Box) (recursion_patterns__create_recursion_types_frequency_report_2_p_0_1));
        MR_hl_field(0, Var_21, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_21, 3) = ((MR_Box) (Deep_3));
      }
      Var_22 = mercury__map__init_0_f_0((MR_Word) (&report__report__type_ctor_info_recursion_type_simple_0), (MR_Word) (&recursion_patterns__recursion_patterns__type_ctor_info_recursion_type_raw_freq_data_0));
      array_util__array_foldl_from_1_4_p_1((MR_Word) (&profile__profile__type_ctor_info_clique_ptr_0), (MR_Word) (&recursion_patterns_scalar_common_1[0]), Var_21, (MR_ArrayPtr) (Var_33), ((MR_Box) (Var_22)), &conv1_Histogram0_10);
      Histogram0_10 = ((MR_Word) (conv1_Histogram0_10));
      Var_92 = mercury__float__float_1_f_0(NumCliques_9);
      {
        Var_91 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_91, 0) = ((MR_Box) (&recursion_patterns_scalar_common_7[1]));
        MR_hl_field(0, Var_91, 1) = ((MR_Box) (recursion_patterns__create_recursion_types_frequency_report_2_p_0_2));
        MR_hl_field(0, Var_91, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_91, 3) = ((MR_Box) (Deep_3));
        MR_hl_field(0, Var_91, 4) = MR_box_float(Var_92);
      }
      mercury__map__map_values_3_p_0((MR_Word) (&report__report__type_ctor_info_recursion_type_simple_0), (MR_Word) (&recursion_patterns__recursion_patterns__type_ctor_info_recursion_type_raw_freq_data_0), (MR_Word) (&report__report__type_ctor_info_recursion_type_freq_data_0), Var_91, Histogram0_10, &Histogram_11);
      Var_23 = (MR_Word) (Histogram_11);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeReport_4 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_23));
      }
    }
  }
}

static void MR_CALL 
recursion_patterns__create_clique_recursion_costs_report_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__4_4;

  analysis_utils__build_dynamic_call_site_cost_and_callee_map_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__4_4);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__4_4));
}

void MR_CALL 
recursion_patterns__create_clique_recursion_costs_report_3_p_0(
  MR_Word Deep_4,
  MR_Word CliquePtr_5,
  MR_Word * MaybeCliqueRecursionReport_6)
{
  MR_bool succeeded;
  MR_Word MaybeFirstPDPtr_7;
  MR_Word OtherPDPtrs_8;
  MR_Word ParentCallPtr_9;
  MR_Integer ParentCalls_11;

  analysis_utils__find_clique_first_and_other_procs_4_p_0(Deep_4, CliquePtr_5, &MaybeFirstPDPtr_7, &OtherPDPtrs_8);
  profile__deep_lookup_clique_parents_3_p_0(Deep_4, CliquePtr_5, &ParentCallPtr_9);
  succeeded = profile__valid_call_site_dynamic_ptr_2_p_0(Deep_4, ParentCallPtr_9);
  if (succeeded)
  {
    MR_Word ParentCall_10;
    MR_Word Var_20;

    profile__deep_lookup_call_site_dynamics_3_p_0(Deep_4, ParentCallPtr_9, &ParentCall_10);
    Var_20 = ((MR_Word) ((MR_hl_field(0, ParentCall_10, (MR_Integer) 2))));
    ParentCalls_11 = measurements__calls_1_f_0(Var_20);
  }
  else
    ParentCalls_11 = (MR_Integer) 1;
  if ((MaybeFirstPDPtr_7 == (MR_Word) ((MR_Unsigned) 0U)))
    *MaybeCliqueRecursionReport_6 = (MR_Word) (MR_mkword(1, &recursion_patterns_scalar_common_3[0]));
  else
  {
    MR_Word FirstPDPtr_12 = ((MR_Word) ((MR_hl_field(1, MaybeFirstPDPtr_7, (MR_Integer) 0))));
    MR_Integer NumProcs_13;
    MR_Integer Var_21;

    Var_21 = mercury__list__length_1_f_0((MR_Word) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0), OtherPDPtrs_8);
    NumProcs_13 = (MR_Integer) ((MR_Unsigned) Var_21 + (MR_Unsigned) 1);
    if ((OtherPDPtrs_8 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word MaybeRecursionType_14;
      MR_Word PDOwn_28;
      MR_Integer TotalCalls_29;
      MR_Word MaybeCoverageReport_30;

      profile__deep_lookup_pd_own_3_p_0(Deep_4, FirstPDPtr_12, &PDOwn_28);
      TotalCalls_29 = measurements__calls_1_f_0(PDOwn_28);
      create_report__create_dynamic_procrep_coverage_report_3_p_0(Deep_4, FirstPDPtr_12, &MaybeCoverageReport_30);
      if (((MR_tag((MR_Word) MaybeCoverageReport_30)) == (MR_Integer) 1))
        MaybeRecursionType_14 = (MR_Word) (MaybeCoverageReport_30);
      else
      {
        MR_Word CoverageReport_31 = ((MR_Word) ((MR_hl_field(0, MaybeCoverageReport_30, (MR_Integer) 0))));
        MR_Word ProcRep_33 = ((MR_Word) ((MR_hl_field(0, CoverageReport_31, (MR_Integer) 1))));
        MR_Word CoverageArray_34 = ((MR_Word) ((MR_hl_field(0, CoverageReport_31, (MR_Integer) 2))));
        MR_Word Goal_35;
        MR_Word Slots_36;
        MR_Word CallSitesMap_37;
        MR_Word Info_38;
        MR_Word RecursionData_39;
        MR_Word RecursionType_40;
        MR_Word Var_41 = ((MR_Word) ((MR_hl_field(0, ProcRep_33, (MR_Integer) 1))));
        MR_Word Var_42;
        MR_Word Var_43;
        MR_Box conv1_CallSitesMap_37;

        Goal_35 = ((MR_Word) ((MR_hl_field(0, Var_41, (MR_Integer) 1))));
        analysis_utils__proc_dynamic_paired_call_site_slots_3_p_0(Deep_4, FirstPDPtr_12, &Slots_36);
        {
          Var_42 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_42, 0) = ((MR_Box) (&recursion_patterns_scalar_common_4[2]));
          MR_hl_field(0, Var_42, 1) = ((MR_Box) (recursion_patterns__create_clique_recursion_costs_report_3_p_0_1));
          MR_hl_field(0, Var_42, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_42, 3) = ((MR_Box) (Deep_4));
        }
        Var_43 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0), (MR_Word) (&recursion_patterns_scalar_common_2[0]));
        mercury__list__foldl_4_p_0((MR_Word) (&recursion_patterns_scalar_common_1[1]), (MR_Word) (&recursion_patterns_scalar_common_1[2]), Var_42, Slots_36, ((MR_Box) (Var_43)), &conv1_CallSitesMap_37);
        CallSitesMap_37 = ((MR_Word) (conv1_CallSitesMap_37));
        {
          Info_38 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Info_38, 0) = ((MR_Box) (CliquePtr_5));
          MR_hl_field(0, Info_38, 1) = ((MR_Box) (CallSitesMap_37));
          MR_hl_field(0, Info_38, 2) = ((MR_Box) (CoverageArray_34));
        }
        recursion_patterns__goal_recursion_data_4_p_0(Info_38, (MR_Word) ((MR_Unsigned) 0U), Goal_35, &RecursionData_39);
        recursion_patterns__recursion_data_to_recursion_type_4_p_0(ParentCalls_11, TotalCalls_29, RecursionData_39, &RecursionType_40);
        {
          MaybeRecursionType_14 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, MaybeRecursionType_14, 0) = ((MR_Box) (RecursionType_40));
        }
      }
      if (((MR_tag((MR_Word) MaybeRecursionType_14)) == (MR_Integer) 1))
        *MaybeCliqueRecursionReport_6 = (MR_Word) (MaybeRecursionType_14);
      else
      {
        MR_Word RecursionType_17 = ((MR_Word) ((MR_hl_field(0, MaybeRecursionType_14, (MR_Integer) 0))));
        MR_Word CliqueRecursionReport_18;

        {
          CliqueRecursionReport_18 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, CliqueRecursionReport_18, 0) = ((MR_Box) (CliquePtr_5));
          MR_hl_field(0, CliqueRecursionReport_18, 1) = ((MR_Box) (RecursionType_17));
          MR_hl_field(0, CliqueRecursionReport_18, 2) = ((MR_Box) (NumProcs_13));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeCliqueRecursionReport_6 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (CliqueRecursionReport_18));
        }
      }
    }
    else
    {
      MR_Word RecursionType_56;
      MR_Word CliqueRecursionReport_57;

      {
        RecursionType_56 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, RecursionType_56, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, RecursionType_56, 1) = ((MR_Box) (NumProcs_13));
      }
      {
        CliqueRecursionReport_57 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, CliqueRecursionReport_57, 0) = ((MR_Box) (CliquePtr_5));
        MR_hl_field(0, CliqueRecursionReport_57, 1) = ((MR_Box) (RecursionType_56));
        MR_hl_field(0, CliqueRecursionReport_57, 2) = ((MR_Box) (NumProcs_13));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeCliqueRecursionReport_6 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (CliqueRecursionReport_57));
      }
    }
  }
}

static void MR_CALL 
recursion_patterns__switch_recursion_data_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__4_15;

  recursion_patterns__IntroducedFrom__pred__recursion_data_and_probability__755__1_4_p_0(MR_unbox_float((MR_hl_field(0, closure, (MR_Integer) 3))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_HeadVar__4_15);
  *wrapper_arg_3 = ((MR_Box) (conv2_HeadVar__4_15));
}

static void MR_CALL 
recursion_patterns__switch_recursion_data_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__4_15;

  recursion_patterns__IntroducedFrom__pred__recursion_data_and_probability__755__1_4_p_0(MR_unbox_float((MR_hl_field(0, closure, (MR_Integer) 3))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__4_15);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__4_15));
}

static void MR_CALL 
recursion_patterns__switch_recursion_data_7_p_0(
  MR_Word Info_1,
  MR_Word RevGoalPath_2,
  MR_Integer CaseNum_3,
  MR_Word HeadVar__4_4,
  MR_Float TotalCalls_5,
  MR_Integer CallsRemaining_6,
  MR_Word * RecursionData_7)
{
  MR_bool succeeded;

  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Float FailProb_14;
    MR_Float Var_16;
    MR_Float Var_17;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Float Var_58;
    MR_Word Errors_63;
    MR_Word STATE_VARIABLE_Recursions_0_64;
    MR_Word STATE_VARIABLE_Recursions_65;
    MR_Word Var_66;

    Var_17 = mercury__float__float_1_f_0(CallsRemaining_6);
    Var_16 = mercury__float__f_slash_2_f_0(Var_17, TotalCalls_5);
    FailProb_14 = measurement_units__probable_1_f_0(Var_16);
    Var_58 = measurement_units__certain_0_f_0();
    {
      Var_57 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_57, 0) = MR_box_float((MR_Float) 0.0000000000000000);
      MR_hl_field(0, Var_57, 1) = MR_box_float(Var_58);
    }
    {
      Var_56 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_56, 0) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(0, Var_56, 1) = ((MR_Box) (Var_57));
    }
    {
      STATE_VARIABLE_Recursions_0_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_Recursions_0_64, 0) = ((MR_Box) (Var_56));
      MR_hl_field(1, STATE_VARIABLE_Recursions_0_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Errors_63 = mercury__set__init_0_f_0((MR_Word) (&recursion_patterns__recursion_patterns__type_ctor_info_recursion_error_0));
    {
      Var_66 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_66, 0) = ((MR_Box) (&recursion_patterns_scalar_common_4[1]));
      MR_hl_field(0, Var_66, 1) = ((MR_Box) (recursion_patterns__switch_recursion_data_7_p_0_1));
      MR_hl_field(0, Var_66, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_66, 3) = MR_box_float(FailProb_14);
    }
    mercury__assoc_list__map_values_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&recursion_patterns__recursion_patterns__type_ctor_info_recursion_level_0), (MR_Word) (&recursion_patterns__recursion_patterns__type_ctor_info_recursion_level_0), Var_66, STATE_VARIABLE_Recursions_0_64, &STATE_VARIABLE_Recursions_65);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      *RecursionData_7 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (STATE_VARIABLE_Recursions_65));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(1, base, 2) = ((MR_Box) (Errors_63));
    }
  }
  else
  {
    MR_Word Case_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
    MR_Word Cases_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
    MR_Word Goal_30 = ((MR_Word) ((MR_hl_field(0, Case_23, (MR_Integer) 2))));
    MR_Word RevArmPath_31;
    MR_Word CaseRecursionData0_32;
    MR_Word CoverageInfo_33;
    MR_Integer Calls_35;
    MR_Float CaseProb_36;
    MR_Word CaseRecursionData_37;
    MR_Word CasesRecursionData_38;
    MR_Word Var_39;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Float Var_45;
    MR_Float Var_46;
    MR_Integer Var_47;
    MR_Integer Var_48;
    MR_Box conv1_CoverageInfo_33;
    MR_Integer CallsPrime_34;

    {
      Var_39 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_39, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_39, 1) = ((MR_Box) (CaseNum_3));
      MR_hl_field(3, Var_39, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      RevArmPath_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, RevArmPath_31, 0) = ((MR_Box) (RevGoalPath_2));
      MR_hl_field(1, RevArmPath_31, 1) = ((MR_Box) (Var_39));
    }
    recursion_patterns__goal_recursion_data_4_p_0(Info_1, RevArmPath_31, Goal_30, &CaseRecursionData0_32);
    Var_41 = ((MR_Word) ((MR_hl_field(0, Info_1, (MR_Integer) 2))));
    Var_42 = ((MR_Word) ((MR_hl_field(0, Goal_30, (MR_Integer) 2))));
    conv1_CoverageInfo_33 = mdbcomp__goal_path__get_goal_attribute_det_2_f_0((MR_Word) (&coverage__coverage__type_ctor_info_coverage_info_0), Var_41, Var_42);
    CoverageInfo_33 = ((MR_Word) (conv1_CoverageInfo_33));
    succeeded = coverage__get_coverage_before_2_p_0(CoverageInfo_33, &CallsPrime_34);
    if (succeeded)
      Calls_35 = CallsPrime_34;
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140recursion_patterns.switch_recursion_data\'/7", (MR_String) "expected coverage information");
        return;
      }
    Var_46 = mercury__float__float_1_f_0(Calls_35);
    Var_45 = mercury__float__f_slash_2_f_0(Var_46, TotalCalls_5);
    CaseProb_36 = measurement_units__probable_1_f_0(Var_45);
    if ((CaseRecursionData0_32 == (MR_Word) ((MR_Unsigned) 0U)))
      CaseRecursionData_37 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Integer MaxLevel_69 = ((MR_Integer) ((MR_hl_field(1, CaseRecursionData0_32, (MR_Integer) 1))));
      MR_Word Errors_70 = ((MR_Word) ((MR_hl_field(1, CaseRecursionData0_32, (MR_Integer) 2))));
      MR_Word STATE_VARIABLE_Recursions_0_71 = ((MR_Word) ((MR_hl_field(1, CaseRecursionData0_32, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_Recursions_72;
      MR_Word Var_73;

      {
        Var_73 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_73, 0) = ((MR_Box) (&recursion_patterns_scalar_common_4[1]));
        MR_hl_field(0, Var_73, 1) = ((MR_Box) (recursion_patterns__switch_recursion_data_7_p_0_2));
        MR_hl_field(0, Var_73, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_73, 3) = MR_box_float(CaseProb_36);
      }
      mercury__assoc_list__map_values_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&recursion_patterns__recursion_patterns__type_ctor_info_recursion_level_0), (MR_Word) (&recursion_patterns__recursion_patterns__type_ctor_info_recursion_level_0), Var_73, STATE_VARIABLE_Recursions_0_71, &STATE_VARIABLE_Recursions_72);
      {
        CaseRecursionData_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, CaseRecursionData_37, 0) = ((MR_Box) (STATE_VARIABLE_Recursions_72));
        MR_hl_field(1, CaseRecursionData_37, 1) = ((MR_Box) (MaxLevel_69));
        MR_hl_field(1, CaseRecursionData_37, 2) = ((MR_Box) (Errors_70));
      }
    }
    Var_47 = (MR_Integer) ((MR_Unsigned) CaseNum_3 + (MR_Unsigned) 1);
    Var_48 = (MR_Integer) ((MR_Unsigned) CallsRemaining_6 - (MR_Unsigned) Calls_35);
    recursion_patterns__switch_recursion_data_7_p_0(Info_1, RevGoalPath_2, Var_47, Cases_24, TotalCalls_5, Var_48, &CasesRecursionData_38);
    recursion_patterns__merge_recursion_data_after_branch_3_p_0(CaseRecursionData_37, CasesRecursionData_38, RecursionData_7);
  }
}

static void MR_CALL 
recursion_patterns__disj_recursion_data_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__4_15;

  recursion_patterns__IntroducedFrom__pred__recursion_data_and_probability__755__1_4_p_0(MR_unbox_float((MR_hl_field(0, closure, (MR_Integer) 3))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_HeadVar__4_15);
  *wrapper_arg_3 = ((MR_Box) (conv2_HeadVar__4_15));
}

static void MR_CALL 
recursion_patterns__disj_recursion_data_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__4_15;

  recursion_patterns__IntroducedFrom__pred__recursion_data_and_probability__755__1_4_p_0(MR_unbox_float((MR_hl_field(0, closure, (MR_Integer) 3))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_HeadVar__4_15);
  *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__4_15));
}

static void MR_CALL 
recursion_patterns__disj_recursion_data_5_p_0(
  MR_Word Info_1,
  MR_Word RevGoalPath_2,
  MR_Integer DisjNum_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  MR_bool succeeded;

  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Float Var_45;
    MR_Word Var_47;

    Var_45 = measurement_units__certain_0_f_0();
    {
      Var_44 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_44, 0) = MR_box_float((MR_Float) 0.0000000000000000);
      MR_hl_field(0, Var_44, 1) = MR_box_float(Var_45);
    }
    {
      Var_43 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_43, 0) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(0, Var_43, 1) = ((MR_Box) (Var_44));
    }
    {
      Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_42, 0) = ((MR_Box) (Var_43));
      MR_hl_field(1, Var_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_47 = mercury__set__init_0_f_0((MR_Word) (&recursion_patterns__recursion_patterns__type_ctor_info_recursion_error_0));
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__5_5 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_42));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(1, base, 2) = ((MR_Box) (Var_47));
    }
  }
  else
  {
    MR_Word Disj_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
    MR_Word Disjs_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
    MR_Word DisjRecursionData_17;
    MR_Word Var_29;
    MR_Word Var_30;

    {
      Var_30 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_30, 0) = ((MR_Box) (DisjNum_3));
    }
    {
      Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_29, 0) = ((MR_Box) (RevGoalPath_2));
      MR_hl_field(1, Var_29, 1) = ((MR_Box) (Var_30));
    }
    recursion_patterns__goal_recursion_data_4_p_0(Info_1, Var_29, Disj_14, &DisjRecursionData_17);
    if ((DisjRecursionData_17 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word CoverageInfo_21;
      MR_Float DisjSuccessProb_22;
      MR_Float DisjFailureProb_23;
      MR_Word DisjsRecursionData0_24;
      MR_Word DisjsRecursionData_25;
      MR_Word Finish_27;
      MR_Word BranchRecursionData_28;
      MR_Word Var_31 = ((MR_Word) ((MR_hl_field(0, Info_1, (MR_Integer) 2))));
      MR_Word Var_32 = ((MR_Word) ((MR_hl_field(0, Disj_14, (MR_Integer) 2))));
      MR_Integer Var_33;
      MR_Word Var_64;
      MR_Word Var_65;
      MR_Float Var_66;
      MR_Word Errors_71;
      MR_Word STATE_VARIABLE_Recursions_0_72;
      MR_Word STATE_VARIABLE_Recursions_73;
      MR_Word Var_74;
      MR_Box conv0_CoverageInfo_21;
      MR_Integer Before_49;
      MR_Integer After_50;

      conv0_CoverageInfo_21 = mdbcomp__goal_path__get_goal_attribute_det_2_f_0((MR_Word) (&coverage__coverage__type_ctor_info_coverage_info_0), Var_31, Var_32);
      CoverageInfo_21 = ((MR_Word) (conv0_CoverageInfo_21));
      succeeded = coverage__get_coverage_before_and_after_3_p_0(CoverageInfo_21, &Before_49, &After_50);
      if (succeeded)
      {
        succeeded = (After_50 > Before_49);
        if (succeeded)
          DisjSuccessProb_22 = measurement_units__certain_0_f_0();
        else
        {
          MR_Float Var_51;
          MR_Float Var_52;
          MR_Float Var_53;

          Var_52 = mercury__float__float_1_f_0(After_50);
          Var_53 = mercury__float__float_1_f_0(Before_49);
          Var_51 = mercury__float__f_slash_2_f_0(Var_52, Var_53);
          DisjSuccessProb_22 = measurement_units__probable_1_f_0(Var_51);
        }
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140recursion_patterns.success_probability_from_coverage\'/2", (MR_String) "expected complete coverage information");
          return;
        }
      DisjFailureProb_23 = measurement_units__not_probability_1_f_0(DisjSuccessProb_22);
      Var_33 = (MR_Integer) ((MR_Unsigned) DisjNum_3 + (MR_Unsigned) 1);
      recursion_patterns__disj_recursion_data_5_p_0(Info_1, RevGoalPath_2, Var_33, Disjs_15, &DisjsRecursionData0_24);
      if ((DisjsRecursionData0_24 == (MR_Word) ((MR_Unsigned) 0U)))
        DisjsRecursionData_25 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Integer MaxLevel_56 = ((MR_Integer) ((MR_hl_field(1, DisjsRecursionData0_24, (MR_Integer) 1))));
        MR_Word Errors_57 = ((MR_Word) ((MR_hl_field(1, DisjsRecursionData0_24, (MR_Integer) 2))));
        MR_Word STATE_VARIABLE_Recursions_0_58 = ((MR_Word) ((MR_hl_field(1, DisjsRecursionData0_24, (MR_Integer) 0))));
        MR_Word STATE_VARIABLE_Recursions_59;
        MR_Word Var_60;

        {
          Var_60 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_60, 0) = ((MR_Box) (&recursion_patterns_scalar_common_4[1]));
          MR_hl_field(0, Var_60, 1) = ((MR_Box) (recursion_patterns__disj_recursion_data_5_p_0_1));
          MR_hl_field(0, Var_60, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_60, 3) = MR_box_float(DisjFailureProb_23);
        }
        mercury__assoc_list__map_values_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&recursion_patterns__recursion_patterns__type_ctor_info_recursion_level_0), (MR_Word) (&recursion_patterns__recursion_patterns__type_ctor_info_recursion_level_0), Var_60, STATE_VARIABLE_Recursions_0_58, &STATE_VARIABLE_Recursions_59);
        {
          DisjsRecursionData_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, DisjsRecursionData_25, 0) = ((MR_Box) (STATE_VARIABLE_Recursions_59));
          MR_hl_field(1, DisjsRecursionData_25, 1) = ((MR_Box) (MaxLevel_56));
          MR_hl_field(1, DisjsRecursionData_25, 2) = ((MR_Box) (Errors_57));
        }
      }
      Var_66 = measurement_units__certain_0_f_0();
      {
        Var_65 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_65, 0) = MR_box_float((MR_Float) 0.0000000000000000);
        MR_hl_field(0, Var_65, 1) = MR_box_float(Var_66);
      }
      {
        Var_64 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_64, 0) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(0, Var_64, 1) = ((MR_Box) (Var_65));
      }
      {
        STATE_VARIABLE_Recursions_0_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_Recursions_0_72, 0) = ((MR_Box) (Var_64));
        MR_hl_field(1, STATE_VARIABLE_Recursions_0_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Errors_71 = mercury__set__init_0_f_0((MR_Word) (&recursion_patterns__recursion_patterns__type_ctor_info_recursion_error_0));
      {
        Var_74 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_74, 0) = ((MR_Box) (&recursion_patterns_scalar_common_4[1]));
        MR_hl_field(0, Var_74, 1) = ((MR_Box) (recursion_patterns__disj_recursion_data_5_p_0_2));
        MR_hl_field(0, Var_74, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_74, 3) = MR_box_float(DisjSuccessProb_22);
      }
      mercury__assoc_list__map_values_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&recursion_patterns__recursion_patterns__type_ctor_info_recursion_level_0), (MR_Word) (&recursion_patterns__recursion_patterns__type_ctor_info_recursion_level_0), Var_74, STATE_VARIABLE_Recursions_0_72, &STATE_VARIABLE_Recursions_73);
      {
        Finish_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Finish_27, 0) = ((MR_Box) (STATE_VARIABLE_Recursions_73));
        MR_hl_field(1, Finish_27, 1) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(1, Finish_27, 2) = ((MR_Box) (Errors_71));
      }
      recursion_patterns__merge_recursion_data_after_branch_3_p_0(Finish_27, DisjsRecursionData_25, &BranchRecursionData_28);
      recursion_patterns__merge_recursion_data_sequence_3_p_0(DisjRecursionData_17, BranchRecursionData_28, HeadVar__5_5);
    }
  }
}

static void MR_CALL 
recursion_patterns__conj_recursion_data_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__4_15;

  recursion_patterns__IntroducedFrom__pred__recursion_data_and_probability__755__1_4_p_0(MR_unbox_float((MR_hl_field(0, closure, (MR_Integer) 3))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_HeadVar__4_15);
  *wrapper_arg_3 = ((MR_Box) (conv2_HeadVar__4_15));
}

static void MR_CALL 
recursion_patterns__conj_recursion_data_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__4_15;

  recursion_patterns__IntroducedFrom__pred__recursion_data_and_probability__755__1_4_p_0(MR_unbox_float((MR_hl_field(0, closure, (MR_Integer) 3))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_HeadVar__4_15);
  *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__4_15));
}

static void MR_CALL 
recursion_patterns__conj_recursion_data_5_p_0(
  MR_Word Info_1,
  MR_Word RevGoalPath_2,
  MR_Integer ConjNum_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  MR_bool succeeded;

  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Float Var_49;
    MR_Word Var_51;

    Var_49 = measurement_units__certain_0_f_0();
    {
      Var_48 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_48, 0) = MR_box_float((MR_Float) 0.0000000000000000);
      MR_hl_field(0, Var_48, 1) = MR_box_float(Var_49);
    }
    {
      Var_47 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_47, 0) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(0, Var_47, 1) = ((MR_Box) (Var_48));
    }
    {
      Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_46, 0) = ((MR_Box) (Var_47));
      MR_hl_field(1, Var_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_51 = mercury__set__init_0_f_0((MR_Word) (&recursion_patterns__recursion_patterns__type_ctor_info_recursion_error_0));
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__5_5 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_46));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(1, base, 2) = ((MR_Box) (Var_51));
    }
  }
  else
  {
    MR_Word Conj_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
    MR_Word Conjs_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
    MR_Word ConjRecursionData_17;
    MR_Word Var_30;
    MR_Word Var_31;

    {
      Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_31, 0) = ((MR_Box) (ConjNum_3));
    }
    {
      Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_30, 0) = ((MR_Box) (RevGoalPath_2));
      MR_hl_field(1, Var_30, 1) = ((MR_Box) (Var_31));
    }
    recursion_patterns__goal_recursion_data_4_p_0(Info_1, Var_30, Conj_14, &ConjRecursionData_17);
    if ((ConjRecursionData_17 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word ConjsRecursionData0_21;
      MR_Word CanFail_22;
      MR_Integer Var_32 = (MR_Integer) ((MR_Unsigned) ConjNum_3 + (MR_Unsigned) 1);
      MR_Word Var_34;

      recursion_patterns__conj_recursion_data_5_p_0(Info_1, RevGoalPath_2, Var_32, Conjs_15, &ConjsRecursionData0_21);
      Var_34 = ((MR_Unsigned) ((MR_hl_field(0, Conj_14, (MR_Integer) 1))) & (MR_Integer) 7);
      CanFail_22 = mdbcomp__program_representation__detism_get_can_fail_1_f_0(Var_34);
      switch (CanFail_22) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word CoverageInfo_23;
            MR_Float ConjSuccessProb_24;
            MR_Word ConjsRecursionData_25;
            MR_Float ConjFailureProb_26;
            MR_Word Failure_28;
            MR_Word BranchRecursionData_29;
            MR_Word Var_35 = ((MR_Word) ((MR_hl_field(0, Info_1, (MR_Integer) 2))));
            MR_Word Var_36 = ((MR_Word) ((MR_hl_field(0, Conj_14, (MR_Integer) 2))));
            MR_Word Var_68;
            MR_Word Var_69;
            MR_Float Var_70;
            MR_Word Errors_75;
            MR_Word STATE_VARIABLE_Recursions_0_76;
            MR_Word STATE_VARIABLE_Recursions_77;
            MR_Word Var_78;
            MR_Box conv0_CoverageInfo_23;
            MR_Integer Before_53;
            MR_Integer After_54;

            conv0_CoverageInfo_23 = mdbcomp__goal_path__get_goal_attribute_det_2_f_0((MR_Word) (&coverage__coverage__type_ctor_info_coverage_info_0), Var_35, Var_36);
            CoverageInfo_23 = ((MR_Word) (conv0_CoverageInfo_23));
            succeeded = coverage__get_coverage_before_and_after_3_p_0(CoverageInfo_23, &Before_53, &After_54);
            if (succeeded)
            {
              succeeded = (After_54 > Before_53);
              if (succeeded)
                ConjSuccessProb_24 = measurement_units__certain_0_f_0();
              else
              {
                MR_Float Var_55;
                MR_Float Var_56;
                MR_Float Var_57;

                Var_56 = mercury__float__float_1_f_0(After_54);
                Var_57 = mercury__float__float_1_f_0(Before_53);
                Var_55 = mercury__float__f_slash_2_f_0(Var_56, Var_57);
                ConjSuccessProb_24 = measurement_units__probable_1_f_0(Var_55);
              }
            }
            else
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140recursion_patterns.success_probability_from_coverage\'/2", (MR_String) "expected complete coverage information");
                return;
              }
            if ((ConjsRecursionData0_21 == (MR_Word) ((MR_Unsigned) 0U)))
              ConjsRecursionData_25 = (MR_Word) ((MR_Unsigned) 0U);
            else
            {
              MR_Integer MaxLevel_60 = ((MR_Integer) ((MR_hl_field(1, ConjsRecursionData0_21, (MR_Integer) 1))));
              MR_Word Errors_61 = ((MR_Word) ((MR_hl_field(1, ConjsRecursionData0_21, (MR_Integer) 2))));
              MR_Word STATE_VARIABLE_Recursions_0_62 = ((MR_Word) ((MR_hl_field(1, ConjsRecursionData0_21, (MR_Integer) 0))));
              MR_Word STATE_VARIABLE_Recursions_63;
              MR_Word Var_64;

              {
                Var_64 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_64, 0) = ((MR_Box) (&recursion_patterns_scalar_common_4[1]));
                MR_hl_field(0, Var_64, 1) = ((MR_Box) (recursion_patterns__conj_recursion_data_5_p_0_1));
                MR_hl_field(0, Var_64, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(0, Var_64, 3) = MR_box_float(ConjSuccessProb_24);
              }
              mercury__assoc_list__map_values_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&recursion_patterns__recursion_patterns__type_ctor_info_recursion_level_0), (MR_Word) (&recursion_patterns__recursion_patterns__type_ctor_info_recursion_level_0), Var_64, STATE_VARIABLE_Recursions_0_62, &STATE_VARIABLE_Recursions_63);
              {
                ConjsRecursionData_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, ConjsRecursionData_25, 0) = ((MR_Box) (STATE_VARIABLE_Recursions_63));
                MR_hl_field(1, ConjsRecursionData_25, 1) = ((MR_Box) (MaxLevel_60));
                MR_hl_field(1, ConjsRecursionData_25, 2) = ((MR_Box) (Errors_61));
              }
            }
            ConjFailureProb_26 = measurement_units__not_probability_1_f_0(ConjSuccessProb_24);
            Var_70 = measurement_units__certain_0_f_0();
            {
              Var_69 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_69, 0) = MR_box_float((MR_Float) 0.0000000000000000);
              MR_hl_field(0, Var_69, 1) = MR_box_float(Var_70);
            }
            {
              Var_68 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_68, 0) = ((MR_Box) ((MR_Integer) 0));
              MR_hl_field(0, Var_68, 1) = ((MR_Box) (Var_69));
            }
            {
              STATE_VARIABLE_Recursions_0_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_Recursions_0_76, 0) = ((MR_Box) (Var_68));
              MR_hl_field(1, STATE_VARIABLE_Recursions_0_76, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            Errors_75 = mercury__set__init_0_f_0((MR_Word) (&recursion_patterns__recursion_patterns__type_ctor_info_recursion_error_0));
            {
              Var_78 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_78, 0) = ((MR_Box) (&recursion_patterns_scalar_common_4[1]));
              MR_hl_field(0, Var_78, 1) = ((MR_Box) (recursion_patterns__conj_recursion_data_5_p_0_2));
              MR_hl_field(0, Var_78, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_78, 3) = MR_box_float(ConjFailureProb_26);
            }
            mercury__assoc_list__map_values_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&recursion_patterns__recursion_patterns__type_ctor_info_recursion_level_0), (MR_Word) (&recursion_patterns__recursion_patterns__type_ctor_info_recursion_level_0), Var_78, STATE_VARIABLE_Recursions_0_76, &STATE_VARIABLE_Recursions_77);
            {
              Failure_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Failure_28, 0) = ((MR_Box) (STATE_VARIABLE_Recursions_77));
              MR_hl_field(1, Failure_28, 1) = ((MR_Box) ((MR_Integer) 0));
              MR_hl_field(1, Failure_28, 2) = ((MR_Box) (Errors_75));
            }
            recursion_patterns__merge_recursion_data_after_branch_3_p_0(ConjsRecursionData_25, Failure_28, &BranchRecursionData_29);
            recursion_patterns__merge_recursion_data_sequence_3_p_0(ConjRecursionData_17, BranchRecursionData_29, HeadVar__5_5);
          }
          break;
        case (MR_Integer) 1:
          recursion_patterns__merge_recursion_data_sequence_3_p_0(ConjRecursionData_17, ConjsRecursionData0_21, HeadVar__5_5);
          break;
      }
    }
  }
}

static void MR_CALL 
recursion_patterns__goal_recursion_data_4_p_0(
  MR_Word Info_5,
  MR_Word RevGoalPath_6,
  MR_Word GoalRep_7,
  MR_Word * STATE_VARIABLE_RecursionData_30)
{
  MR_bool succeeded;
  MR_Word GoalExpr_9 = ((MR_Word) ((MR_hl_field(0, GoalRep_7, (MR_Integer) 0))));
  MR_Word Detism_10 = ((MR_Unsigned) ((MR_hl_field(0, GoalRep_7, (MR_Integer) 1))) & (MR_Integer) 7);
  MR_Word GoalId_11 = ((MR_Word) ((MR_hl_field(0, GoalRep_7, (MR_Integer) 2))));
  MR_Word CoverageInfo_12;
  MR_Integer Calls_14;
  MR_Word Var_31 = ((MR_Word) ((MR_hl_field(0, Info_5, (MR_Integer) 2))));
  MR_Word STATE_VARIABLE_RecursionData_34_34;
  MR_Box conv0_CoverageInfo_12;
  MR_Integer CallsPrime_13;

  conv0_CoverageInfo_12 = mdbcomp__goal_path__get_goal_attribute_det_2_f_0((MR_Word) (&coverage__coverage__type_ctor_info_coverage_info_0), Var_31, GoalId_11);
  CoverageInfo_12 = ((MR_Word) (conv0_CoverageInfo_12));
  succeeded = coverage__get_coverage_before_2_p_0(CoverageInfo_12, &CallsPrime_13);
  if (succeeded)
    Calls_14 = CallsPrime_13;
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140recursion_patterns.goal_recursion_data\'/4", (MR_String) "couldn\'t retrieve coverage information");
      return;
    }
  succeeded = (Calls_14 == (MR_Integer) 0);
  if (succeeded)
    STATE_VARIABLE_RecursionData_34_34 = (MR_Word) ((MR_Unsigned) 0U);
  else
    switch (MR_tag((MR_Word) GoalExpr_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Conjs_15 = ((MR_Word) ((MR_hl_field(0, GoalExpr_9, (MR_Integer) 0))));

          recursion_patterns__conj_recursion_data_5_p_0(Info_5, RevGoalPath_6, (MR_Integer) 1, Conjs_15, &STATE_VARIABLE_RecursionData_34_34);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Disjs_16 = ((MR_Word) ((MR_hl_field(1, GoalExpr_9, (MR_Integer) 0))));

          recursion_patterns__disj_recursion_data_5_p_0(Info_5, RevGoalPath_6, (MR_Integer) 1, Disjs_16, &STATE_VARIABLE_RecursionData_34_34);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Cases_19 = ((MR_Word) ((MR_hl_field(2, GoalExpr_9, (MR_Integer) 2))));
          MR_Float Var_40;

          Var_40 = mercury__float__float_1_f_0(Calls_14);
          recursion_patterns__switch_recursion_data_7_p_0(Info_5, RevGoalPath_6, (MR_Integer) 1, Cases_19, Var_40, Calls_14, &STATE_VARIABLE_RecursionData_34_34);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_9, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Cond_20 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, (MR_Integer) 1))));
              MR_Word Then_21 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, (MR_Integer) 2))));
              MR_Word Else_22 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, (MR_Integer) 3))));
              MR_Word CondRecursionData_53;
              MR_Word ThenRecursionData0_54;
              MR_Word ElseRecursionData0_55;
              MR_Word Coverage_56;
              MR_Word ThenCoverageInfo_57;
              MR_Word ElseCoverageInfo_58;
              MR_Integer ThenCalls_59;
              MR_Integer ElseCalls_60;
              MR_Float CallsF_61;
              MR_Float ThenProb_62;
              MR_Float ElseProb_63;
              MR_Word ThenRecursionData_64;
              MR_Word ElseRecursionData_65;
              MR_Word Var_66;
              MR_Word Var_68;
              MR_Word Var_70;
              MR_Word Var_72;
              MR_Word Var_73;
              MR_Float Var_74;
              MR_Float Var_75;
              MR_Float Var_76;
              MR_Float Var_77;
              MR_Word STATE_VARIABLE_RecursionData_41_78;
              MR_Box conv1_ThenCoverageInfo_57;
              MR_Box conv2_ElseCoverageInfo_58;

              {
                Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_66, 0) = ((MR_Box) (RevGoalPath_6));
                MR_hl_field(1, Var_66, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              recursion_patterns__goal_recursion_data_4_p_0(Info_5, Var_66, Cond_20, &CondRecursionData_53);
              {
                Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_68, 0) = ((MR_Box) (RevGoalPath_6));
                MR_hl_field(1, Var_68, 1) = ((MR_Box) ((MR_Unsigned) 4U));
              }
              recursion_patterns__goal_recursion_data_4_p_0(Info_5, Var_68, Then_21, &ThenRecursionData0_54);
              {
                Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_70, 0) = ((MR_Box) (RevGoalPath_6));
                MR_hl_field(1, Var_70, 1) = ((MR_Box) ((MR_Unsigned) 8U));
              }
              recursion_patterns__goal_recursion_data_4_p_0(Info_5, Var_70, Else_22, &ElseRecursionData0_55);
              Coverage_56 = ((MR_Word) ((MR_hl_field(0, Info_5, (MR_Integer) 2))));
              Var_72 = ((MR_Word) ((MR_hl_field(0, Then_21, (MR_Integer) 2))));
              conv1_ThenCoverageInfo_57 = mdbcomp__goal_path__get_goal_attribute_det_2_f_0((MR_Word) (&coverage__coverage__type_ctor_info_coverage_info_0), Coverage_56, Var_72);
              ThenCoverageInfo_57 = ((MR_Word) (conv1_ThenCoverageInfo_57));
              Var_73 = ((MR_Word) ((MR_hl_field(0, Else_22, (MR_Integer) 2))));
              conv2_ElseCoverageInfo_58 = mdbcomp__goal_path__get_goal_attribute_det_2_f_0((MR_Word) (&coverage__coverage__type_ctor_info_coverage_info_0), Coverage_56, Var_73);
              ElseCoverageInfo_58 = ((MR_Word) (conv2_ElseCoverageInfo_58));
              coverage__get_coverage_before_det_2_p_0(ThenCoverageInfo_57, &ThenCalls_59);
              coverage__get_coverage_before_det_2_p_0(ElseCoverageInfo_58, &ElseCalls_60);
              CallsF_61 = mercury__float__float_1_f_0(Calls_14);
              Var_75 = mercury__float__float_1_f_0(ThenCalls_59);
              Var_74 = mercury__float__f_slash_2_f_0(Var_75, CallsF_61);
              ThenProb_62 = measurement_units__probable_1_f_0(Var_74);
              Var_77 = mercury__float__float_1_f_0(ElseCalls_60);
              Var_76 = mercury__float__f_slash_2_f_0(Var_77, CallsF_61);
              ElseProb_63 = measurement_units__probable_1_f_0(Var_76);
              recursion_patterns__recursion_data_and_probability_3_p_0(ThenProb_62, ThenRecursionData0_54, &ThenRecursionData_64);
              recursion_patterns__recursion_data_and_probability_3_p_0(ElseProb_63, ElseRecursionData0_55, &ElseRecursionData_65);
              recursion_patterns__merge_recursion_data_after_branch_3_p_0(ThenRecursionData_64, ElseRecursionData_65, &STATE_VARIABLE_RecursionData_41_78);
              recursion_patterns__merge_recursion_data_sequence_3_p_0(CondRecursionData_53, STATE_VARIABLE_RecursionData_41_78, &STATE_VARIABLE_RecursionData_34_34);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word SubGoal_23 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, (MR_Integer) 1))));
              MR_Word Var_43;

              {
                Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_43, 0) = ((MR_Box) (RevGoalPath_6));
                MR_hl_field(1, Var_43, 1) = ((MR_Box) ((MR_Unsigned) 12U));
              }
              recursion_patterns__goal_recursion_data_4_p_0(Info_5, Var_43, SubGoal_23, &STATE_VARIABLE_RecursionData_34_34);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word MaybeCut_25 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr_9, (MR_Integer) 2))) & (MR_Integer) 1);
              MR_Word SubGoal_50 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, (MR_Integer) 1))));
              MR_Word GoalPathStep_51;
              MR_Word Var_52;

              {
                GoalPathStep_51 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalPathStep_51, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(3, GoalPathStep_51, 1) = (MR_Box) ((MR_Unsigned) (MaybeCut_25));
              }
              {
                Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_52, 0) = ((MR_Box) (RevGoalPath_6));
                MR_hl_field(1, Var_52, 1) = ((MR_Box) (GoalPathStep_51));
              }
              recursion_patterns__goal_recursion_data_4_p_0(Info_5, Var_52, SubGoal_50, &STATE_VARIABLE_RecursionData_34_34);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word AtomicGoalRep_29 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, (MR_Integer) 4))));

              recursion_patterns__atomic_goal_recursion_data_4_p_0(Info_5, RevGoalPath_6, AtomicGoalRep_29, &STATE_VARIABLE_RecursionData_34_34);
            }
            break;
        }
        break;
    }
  switch (Detism_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 5:
      *STATE_VARIABLE_RecursionData_30 = STATE_VARIABLE_RecursionData_34_34;
      break;
    case (MR_Integer) 4:
      *STATE_VARIABLE_RecursionData_30 = STATE_VARIABLE_RecursionData_34_34;
      break;
    case (MR_Integer) 0:
      *STATE_VARIABLE_RecursionData_30 = STATE_VARIABLE_RecursionData_34_34;
      break;
    case (MR_Integer) 6:
      *STATE_VARIABLE_RecursionData_30 = STATE_VARIABLE_RecursionData_34_34;
      break;
    case (MR_Integer) 7:
      *STATE_VARIABLE_RecursionData_30 = STATE_VARIABLE_RecursionData_34_34;
      break;
    case (MR_Integer) 3:
    case (MR_Integer) 2:
      {
        MR_Word Var_46 = (MR_Word) (Detism_10);

        if ((STATE_VARIABLE_RecursionData_34_34 == (MR_Word) ((MR_Unsigned) 0U)))
          *STATE_VARIABLE_RecursionData_30 = STATE_VARIABLE_RecursionData_34_34;
        else
        {
          MR_Word STATE_VARIABLE_Errors_11_88 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_RecursionData_34_34, (MR_Integer) 2))));
          MR_Word STATE_VARIABLE_Errors_12_89;
          MR_Word Var_90;
          MR_Integer Var_91;

          mercury__set__insert_3_p_0((MR_Word) (&recursion_patterns__recursion_patterns__type_ctor_info_recursion_error_0), ((MR_Box) (Var_46)), STATE_VARIABLE_Errors_11_88, &STATE_VARIABLE_Errors_12_89);
          Var_90 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_RecursionData_34_34, (MR_Integer) 0))));
          Var_91 = ((MR_Integer) ((MR_hl_field(1, STATE_VARIABLE_RecursionData_34_34, (MR_Integer) 1))));
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_RecursionData_30 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Var_90));
            MR_hl_field(1, base, 1) = ((MR_Box) (Var_91));
            MR_hl_field(1, base, 2) = ((MR_Box) (STATE_VARIABLE_Errors_12_89));
          }
        }
      }
      break;
    case (MR_Integer) 1:
      *STATE_VARIABLE_RecursionData_30 = STATE_VARIABLE_RecursionData_34_34;
      break;
  }
}

static void MR_CALL 
recursion_patterns__recursion_data_and_probability_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__4_15;

  recursion_patterns__IntroducedFrom__pred__recursion_data_and_probability__755__1_4_p_0(MR_unbox_float((MR_hl_field(0, closure, (MR_Integer) 3))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__4_15);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__4_15));
}

static void MR_CALL 
recursion_patterns__recursion_data_and_probability_3_p_0(
  MR_Float Prob_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Integer MaxLevel_6 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Errors_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word STATE_VARIABLE_Recursions_0_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word STATE_VARIABLE_Recursions_9;
    MR_Word Var_10;

    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_10, 0) = ((MR_Box) (&recursion_patterns_scalar_common_4[1]));
      MR_hl_field(0, Var_10, 1) = ((MR_Box) (recursion_patterns__recursion_data_and_probability_3_p_0_1));
      MR_hl_field(0, Var_10, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_10, 3) = MR_box_float(Prob_1);
    }
    mercury__assoc_list__map_values_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&recursion_patterns__recursion_patterns__type_ctor_info_recursion_level_0), (MR_Word) (&recursion_patterns__recursion_patterns__type_ctor_info_recursion_level_0), Var_10, STATE_VARIABLE_Recursions_0_8, &STATE_VARIABLE_Recursions_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (STATE_VARIABLE_Recursions_9));
      MR_hl_field(1, base, 1) = ((MR_Box) (MaxLevel_6));
      MR_hl_field(1, base, 2) = ((MR_Box) (Errors_7));
    }
  }
}

static void MR_CALL 
recursion_patterns__atomic_goal_recursion_data_4_p_0(
  MR_Word Info_5,
  MR_Word RevGoalPath_6,
  MR_Word AtomicGoal_7,
  MR_Word * RecursionData_8)
{
  MR_bool succeeded;
  MR_Word RecursionLevel_33;
  MR_Integer RecursiveCalls_47;
  MR_Word Var_61;
  MR_Word Var_63;

  switch (MR_tag((MR_Word) AtomicGoal_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      {
        MR_Word Var_50;
        MR_Float Var_52;

        Var_52 = measurement_units__certain_0_f_0();
        {
          Var_50 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_50, 0) = MR_box_float((MR_Float) 0.0000000000000000);
          MR_hl_field(0, Var_50, 1) = MR_box_float(Var_52);
        }
        {
          RecursionLevel_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, RecursionLevel_33, 0) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(0, RecursionLevel_33, 1) = ((MR_Box) (Var_50));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, AtomicGoal_7, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
        case (MR_Integer) 2:
        case (MR_Integer) 3:
        case (MR_Integer) 4:
        case (MR_Integer) 8:
        case (MR_Integer) 9:
          {
            MR_Word Var_50;
            MR_Float Var_52;

            Var_52 = measurement_units__certain_0_f_0();
            {
              Var_50 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_50, 0) = MR_box_float((MR_Float) 0.0000000000000000);
              MR_hl_field(0, Var_50, 1) = MR_box_float(Var_52);
            }
            {
              RecursionLevel_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, RecursionLevel_33, 0) = ((MR_Box) ((MR_Integer) 0));
              MR_hl_field(0, RecursionLevel_33, 1) = ((MR_Box) (Var_50));
            }
          }
          break;
        case (MR_Integer) 5:
        case (MR_Integer) 6:
        case (MR_Integer) 7:
          {
            MR_Word ThisClique_42 = ((MR_Word) ((MR_hl_field(0, Info_5, (MR_Integer) 0))));
            MR_Word CallSiteMap_43 = ((MR_Word) ((MR_hl_field(0, Info_5, (MR_Integer) 1))));
            MR_Word CostAndCallees_45;
            MR_Box conv0_CostAndCallees_45;

            mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0), (MR_Word) (&recursion_patterns_scalar_common_2[0]), CallSiteMap_43, ((MR_Box) (RevGoalPath_6)), &conv0_CostAndCallees_45);
            CostAndCallees_45 = ((MR_Word) (conv0_CostAndCallees_45));
            succeeded = analysis_utils__cost_and_callees_is_recursive_2_p_0(ThisClique_42, CostAndCallees_45);
            if (succeeded)
            {
              MR_Word Var_54;
              MR_Float Var_56;

              Var_56 = measurement_units__certain_0_f_0();
              {
                Var_54 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_54, 0) = MR_box_float((MR_Float) 0.0000000000000000);
                MR_hl_field(0, Var_54, 1) = MR_box_float(Var_56);
              }
              {
                RecursionLevel_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, RecursionLevel_33, 0) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(0, RecursionLevel_33, 1) = ((MR_Box) (Var_54));
              }
            }
            else
            {
              MR_Float CostPercall_46;
              MR_Word Var_57 = ((MR_Word) ((MR_hl_field(0, CostAndCallees_45, (MR_Integer) 0))));
              MR_Word Var_59;
              MR_Float Var_60;

              CostPercall_46 = measurements__cs_cost_get_percall_1_f_0(Var_57);
              Var_60 = measurement_units__certain_0_f_0();
              {
                Var_59 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_59, 0) = MR_box_float(CostPercall_46);
                MR_hl_field(0, Var_59, 1) = MR_box_float(Var_60);
              }
              {
                RecursionLevel_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, RecursionLevel_33, 0) = ((MR_Box) ((MR_Integer) 0));
                MR_hl_field(0, RecursionLevel_33, 1) = ((MR_Box) (Var_59));
              }
            }
          }
          break;
      }
      break;
  }
  RecursiveCalls_47 = ((MR_Integer) ((MR_hl_field(0, RecursionLevel_33, (MR_Integer) 0))));
  {
    Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_61, 0) = ((MR_Box) (RecursionLevel_33));
    MR_hl_field(1, Var_61, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_63 = mercury__set__init_0_f_0((MR_Word) (&recursion_patterns__recursion_patterns__type_ctor_info_recursion_error_0));
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    *RecursionData_8 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Var_61));
    MR_hl_field(1, base, 1) = ((MR_Box) (RecursiveCalls_47));
    MR_hl_field(1, base, 2) = ((MR_Box) (Var_63));
  }
}

static void MR_CALL 
recursion_patterns__merge_recursion_data_sequence_3_p_0(
  MR_Word A_4,
  MR_Word B_5,
  MR_Word * Result_6)
{
  if ((A_4 == (MR_Word) ((MR_Unsigned) 0U)))
    *Result_6 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(1, A_4, (MR_Integer) 2))));
    MR_Integer Var_24 = ((MR_Integer) ((MR_hl_field(1, A_4, (MR_Integer) 1))));
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(1, A_4, (MR_Integer) 0))));

    if ((B_5 == (MR_Word) ((MR_Unsigned) 0U)))
      *Result_6 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word RecursionsB_10 = ((MR_Word) ((MR_hl_field(1, B_5, (MR_Integer) 0))));
      MR_Integer MaxLevelB_11 = ((MR_Integer) ((MR_hl_field(1, B_5, (MR_Integer) 1))));
      MR_Word ErrorsB_12 = ((MR_Word) ((MR_hl_field(1, B_5, (MR_Integer) 2))));
      MR_Word Recursions0_13;
      MR_Word Recursions1_14;
      MR_Word Recursions_15;
      MR_Integer MaxLevel_16;
      MR_Word Errors_17;

      recursion_patterns__recursions_cross_product_3_p_0(Var_25, RecursionsB_10, &Recursions0_13);
      mercury__list__sort_2_p_0((MR_Word) (&recursion_patterns_scalar_common_1[3]), Recursions0_13, &Recursions1_14);
      if ((Recursions1_14 == (MR_Word) ((MR_Unsigned) 0U)))
        Recursions_15 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word Pairs0_28 = ((MR_Word) ((MR_hl_field(1, Recursions1_14, (MR_Integer) 1))));
        MR_Word Var_30 = ((MR_Word) ((MR_hl_field(1, Recursions1_14, (MR_Integer) 0))));

        recursion_patterns__condense_recursions_2_3_p_0(Var_30, Pairs0_28, &Recursions_15);
      }
      MaxLevel_16 = (MR_Integer) ((MR_Unsigned) Var_24 + (MR_Unsigned) MaxLevelB_11);
      Errors_17 = mercury__set__union_2_f_0((MR_Word) (&recursion_patterns__recursion_patterns__type_ctor_info_recursion_error_0), Var_23, ErrorsB_12);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Recursions_15));
        MR_hl_field(1, base, 1) = ((MR_Box) (MaxLevel_16));
        MR_hl_field(1, base, 2) = ((MR_Box) (Errors_17));
      }
    }
  }
}

static void MR_CALL 
recursion_patterns__recursions_cross_product_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word PairsB_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Integer NumA_5;
    MR_Word RecA_6;
    MR_Word PairsA_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word InnerLoop_10;
    MR_Word OuterLoopTail_11;
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));

    NumA_5 = ((MR_Integer) ((MR_hl_field(0, Var_12, (MR_Integer) 0))));
    RecA_6 = ((MR_Word) ((MR_hl_field(0, Var_12, (MR_Integer) 1))));
    recursion_patterns__recursions_cross_product_2_4_p_0(NumA_5, RecA_6, PairsB_2, &InnerLoop_10);
    recursion_patterns__recursions_cross_product_3_p_0(PairsA_7, PairsB_2, &OuterLoopTail_11);
    *HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) (&recursion_patterns_scalar_common_1[3]), InnerLoop_10, OuterLoopTail_11);
  }
}

static void MR_CALL 
recursion_patterns__recursions_cross_product_2_4_p_0(
  MR_Integer HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Float CostA_9 = MR_unbox_float((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0)));
    MR_Float ProbA_10 = MR_unbox_float((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1)));
    MR_Integer NumB_11;
    MR_Float CostB_12;
    MR_Float ProbB_13;
    MR_Word PairsB_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Pairs0_16;
    MR_Integer Num_17;
    MR_Float Prob_18;
    MR_Float Cost_19;
    MR_Word Pair_20;
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Var_22;
    MR_Word Var_23;

    NumB_11 = ((MR_Integer) ((MR_hl_field(0, Var_21, (MR_Integer) 0))));
    Var_22 = ((MR_Word) ((MR_hl_field(0, Var_21, (MR_Integer) 1))));
    CostB_12 = MR_unbox_float((MR_hl_field(0, Var_22, (MR_Integer) 0)));
    ProbB_13 = MR_unbox_float((MR_hl_field(0, Var_22, (MR_Integer) 1)));
    recursion_patterns__recursions_cross_product_2_4_p_0(HeadVar__1_1, HeadVar__2_2, PairsB_14, &Pairs0_16);
    Num_17 = (MR_Integer) ((MR_Unsigned) HeadVar__1_1 + (MR_Unsigned) NumB_11);
    Prob_18 = measurement_units__and_2_f_0(ProbA_10, ProbB_13);
    Cost_19 = (CostA_9 + CostB_12);
    {
      Var_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_23, 0) = MR_box_float(Cost_19);
      MR_hl_field(0, Var_23, 1) = MR_box_float(Prob_18);
    }
    {
      Pair_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Pair_20, 0) = ((MR_Box) (Num_17));
      MR_hl_field(0, Pair_20, 1) = ((MR_Box) (Var_23));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Pair_20));
      MR_hl_field(1, base, 1) = ((MR_Box) (Pairs0_16));
    }
  }
}

static void MR_CALL 
recursion_patterns__merge_recursion_data_after_branch_3_p_0(
  MR_Word A_4,
  MR_Word B_5,
  MR_Word * Result_6)
{
  if ((A_4 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((B_5 == (MR_Word) ((MR_Unsigned) 0U)))
      *Result_6 = (MR_Word) ((MR_Unsigned) 0U);
    else
      *Result_6 = B_5;
  else
  {
    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(1, A_4, (MR_Integer) 2))));
    MR_Integer Var_27 = ((MR_Integer) ((MR_hl_field(1, A_4, (MR_Integer) 1))));
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(1, A_4, (MR_Integer) 0))));

    if ((B_5 == (MR_Word) ((MR_Unsigned) 0U)))
      *Result_6 = A_4;
    else
    {
      MR_Word RecursionsB_10 = ((MR_Word) ((MR_hl_field(1, B_5, (MR_Integer) 0))));
      MR_Integer MaxLevelB_11 = ((MR_Integer) ((MR_hl_field(1, B_5, (MR_Integer) 1))));
      MR_Word ErrorsB_12 = ((MR_Word) ((MR_hl_field(1, B_5, (MR_Integer) 2))));
      MR_Word Recursions0_13;
      MR_Word Recursions_14;
      MR_Integer MaxLevel_15;
      MR_Word Errors_16;

      Recursions0_13 = mercury__assoc_list__merge_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&recursion_patterns__recursion_patterns__type_ctor_info_recursion_level_0), Var_28, RecursionsB_10);
      if ((Recursions0_13 == (MR_Word) ((MR_Unsigned) 0U)))
        Recursions_14 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word Pairs0_31 = ((MR_Word) ((MR_hl_field(1, Recursions0_13, (MR_Integer) 1))));
        MR_Word Var_33 = ((MR_Word) ((MR_hl_field(1, Recursions0_13, (MR_Integer) 0))));

        recursion_patterns__condense_recursions_2_3_p_0(Var_33, Pairs0_31, &Recursions_14);
      }
      MaxLevel_15 = mercury__int__max_2_f_0(Var_27, MaxLevelB_11);
      Errors_16 = mercury__set__union_2_f_0((MR_Word) (&recursion_patterns__recursion_patterns__type_ctor_info_recursion_error_0), Var_26, ErrorsB_12);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Recursions_14));
        MR_hl_field(1, base, 1) = ((MR_Box) (MaxLevel_15));
        MR_hl_field(1, base, 2) = ((MR_Box) (Errors_16));
      }
    }
  }
}

static void MR_CALL 
recursion_patterns__condense_recursions_2_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (HeadVar__1_1));
        MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    else
    {
      MR_Integer NumA_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word RecA_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer NumB_8;
      MR_Word RecB_9;
      MR_Word Pairs0_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

      NumB_8 = ((MR_Integer) ((MR_hl_field(0, Var_20, (MR_Integer) 0))));
      RecB_9 = ((MR_Word) ((MR_hl_field(0, Var_20, (MR_Integer) 1))));
      succeeded = (NumA_6 == NumB_8);
      if (succeeded)
      {
        MR_Float CostA_12 = MR_unbox_float((MR_hl_field(0, RecA_7, (MR_Integer) 0)));
        MR_Float ProbabilityA_13 = MR_unbox_float((MR_hl_field(0, RecA_7, (MR_Integer) 1)));
        MR_Float CostB_14 = MR_unbox_float((MR_hl_field(0, RecB_9, (MR_Integer) 0)));
        MR_Float ProbabilityB_15 = MR_unbox_float((MR_hl_field(0, RecB_9, (MR_Integer) 1)));
        MR_Float Cost_16;
        MR_Float Probability_17;
        MR_Word Rec_18;
        MR_Word Var_21;
        MR_Word Var_22;
        MR_Float Var_23;
        MR_Word Var_24;
        MR_Float Var_25;
        MR_Word Var_27;
        MR_Word Var_29;
        MR_Word next_value_of_HeadVar__1_1;
        MR_Word next_value_of_HeadVar__2_2;

        Var_23 = measurement_units__probability_to_float_1_f_0(ProbabilityA_13);
        Var_25 = measurement_units__probability_to_float_1_f_0(ProbabilityB_15);
        {
          Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_24, 0) = MR_box_float(Var_25);
          MR_hl_field(1, Var_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_21, 0) = MR_box_float(Var_23);
          MR_hl_field(1, Var_21, 1) = ((MR_Box) (Var_24));
        }
        {
          Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_27, 0) = MR_box_float(CostB_14);
          MR_hl_field(1, Var_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_22, 0) = MR_box_float(CostA_12);
          MR_hl_field(1, Var_22, 1) = ((MR_Box) (Var_27));
        }
        measurements__weighted_average_3_p_0(Var_21, Var_22, &Cost_16);
        Probability_17 = measurement_units__or_2_f_0(ProbabilityA_13, ProbabilityB_15);
        {
          Rec_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Rec_18, 0) = MR_box_float(Cost_16);
          MR_hl_field(0, Rec_18, 1) = MR_box_float(Probability_17);
        }
        {
          Var_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_29, 0) = ((MR_Box) (NumA_6));
          MR_hl_field(0, Var_29, 1) = ((MR_Box) (Rec_18));
        }
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Var_29;
        next_value_of_HeadVar__2_2 = Pairs0_10;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
      else
      {
        MR_Word Pairs1_19;
        MR_Word Pairs0_35 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
        MR_Word Var_37 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

        recursion_patterns__condense_recursions_2_3_p_0(Var_37, Pairs0_35, &Pairs1_19);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (HeadVar__1_1));
          MR_hl_field(1, base, 1) = ((MR_Box) (Pairs1_19));
        }
      }
    }
    break;
  }
}

static MR_Box MR_CALL 
recursion_patterns__recursion_data_to_recursion_type_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv6_HeadVar__2_2;

  conv6_HeadVar__2_2 = recursion_patterns__error_to_string_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv6_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
recursion_patterns__recursion_data_to_recursion_type_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_HeadVar__3_3;

  recursion_patterns__recursion_level_report_3_p_0(MR_unbox_float((MR_hl_field(0, closure, (MR_Integer) 3))), ((MR_Word) (wrapper_arg_1)), &conv5_HeadVar__3_3);
  *wrapper_arg_2 = ((MR_Box) (conv5_HeadVar__3_3));
}

static MR_Box MR_CALL 
recursion_patterns__recursion_data_to_recursion_type_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Float conv2_Cost_8;

  conv2_Cost_8 = recursion_patterns__single_rec_recursion_cost_3_f_0(MR_unbox_float((MR_hl_field(0, closure, (MR_Integer) 3))), MR_unbox_float((MR_hl_field(0, closure, (MR_Integer) 4))), ((MR_Integer) (wrapper_arg_1)));
  wrapper_arg_2 = MR_box_float(conv2_Cost_8);
  return wrapper_arg_2;
}

static void MR_CALL 
recursion_patterns__recursion_data_to_recursion_type_4_p_0(
  MR_Integer ParentCallsI_5,
  MR_Integer TotalCallsI_6,
  MR_Word RecursionData_7,
  MR_Word * Type_8)
{
  MR_bool succeeded;

  if ((RecursionData_7 == (MR_Word) ((MR_Unsigned) 0U)))
    *Type_8 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Levels_9 = ((MR_Word) ((MR_hl_field(1, RecursionData_7, (MR_Integer) 0))));
    MR_Integer Maximum_10 = ((MR_Integer) ((MR_hl_field(1, RecursionData_7, (MR_Integer) 1))));
    MR_Word Errors_11 = ((MR_Word) ((MR_hl_field(1, RecursionData_7, (MR_Integer) 2))));
    MR_Float ParentCalls_12;
    MR_Float TotalCalls_13;
    MR_Float BaseCost_15;
    MR_Float BaseProb_16;
    MR_Integer BaseCount_18;
    MR_Word BaseLevel_19;
    MR_Word RLBase_14;
    MR_Box conv0_RLBase_14;

    ParentCalls_12 = mercury__float__float_1_f_0(ParentCallsI_5);
    TotalCalls_13 = mercury__float__float_1_f_0(TotalCallsI_6);
    succeeded = mercury__assoc_list__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&recursion_patterns__recursion_patterns__type_ctor_info_recursion_level_0), Levels_9, ((MR_Box) ((MR_Integer) 0)), &conv0_RLBase_14);
    if (succeeded)
    {
      RLBase_14 = ((MR_Word) (conv0_RLBase_14));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Float BaseCountF_17;
      MR_Float Var_33;

      BaseCost_15 = MR_unbox_float((MR_hl_field(0, RLBase_14, (MR_Integer) 0)));
      BaseProb_16 = MR_unbox_float((MR_hl_field(0, RLBase_14, (MR_Integer) 1)));
      Var_33 = measurement_units__probability_to_float_1_f_0(BaseProb_16);
      BaseCountF_17 = (Var_33 * TotalCalls_13);
      BaseCount_18 = mercury__float__round_to_int_1_f_0(BaseCountF_17);
    }
    else
    {
      BaseCost_15 = (MR_Float) 0.0000000000000000;
      BaseCount_18 = (MR_Integer) 0;
      BaseProb_16 = measurement_units__impossible_0_f_0();
    }
    {
      BaseLevel_19 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, BaseLevel_19, 0) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(0, BaseLevel_19, 1) = ((MR_Box) (BaseCount_18));
      MR_hl_field(0, BaseLevel_19, 2) = MR_box_float(BaseProb_16);
      MR_hl_field(0, BaseLevel_19, 3) = MR_box_float(BaseCost_15);
      MR_hl_field(0, BaseLevel_19, 4) = MR_box_float((MR_Float) 0.0000000000000000);
    }
    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&recursion_patterns__recursion_patterns__type_ctor_info_recursion_error_0), Errors_11);
    if (succeeded)
    {
      succeeded = (Maximum_10 < (MR_Integer) 0);
      if (succeeded)
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140recursion_patterns.recursion_data_to_recursion_type\'/4", (MR_String) "negative number of recursive calls");
          return;
        }
      else
      {
        succeeded = (Maximum_10 == (MR_Integer) 0);
        if (succeeded)
          *Type_8 = (MR_Word) ((MR_Unsigned) 0U);
        else
        {
          succeeded = (Maximum_10 == (MR_Integer) 1);
          if (succeeded)
          {
            MR_Float RecCost_21;
            MR_Word RecLevel_24;
            MR_Float AvgMaxDepth_26;
            MR_Float AvgRecCost_27;
            MR_Word AnyRecCost_28;
            MR_Float Sum_119;
            MR_Float Var_120;
            MR_Float Var_122;
            MR_Float Var_123;
            MR_Float Var_125;
            MR_Float Var_126;
            MR_Word RLRec_20;
            MR_Box conv1_RLRec_20;

            succeeded = mercury__assoc_list__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&recursion_patterns__recursion_patterns__type_ctor_info_recursion_level_0), Levels_9, ((MR_Box) ((MR_Integer) 1)), &conv1_RLRec_20);
            if (succeeded)
            {
              RLRec_20 = ((MR_Word) (conv1_RLRec_20));
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              MR_Float RecProb_22;
              MR_Float RecCountF_23;
              MR_Float Var_40;
              MR_Integer Var_42;

              RecCost_21 = MR_unbox_float((MR_hl_field(0, RLRec_20, (MR_Integer) 0)));
              RecProb_22 = MR_unbox_float((MR_hl_field(0, RLRec_20, (MR_Integer) 1)));
              Var_40 = measurement_units__probability_to_float_1_f_0(RecProb_22);
              RecCountF_23 = (Var_40 * TotalCalls_13);
              Var_42 = mercury__float__round_to_int_1_f_0(RecCountF_23);
              {
                RecLevel_24 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, RecLevel_24, 0) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(0, RecLevel_24, 1) = ((MR_Box) (Var_42));
                MR_hl_field(0, RecLevel_24, 2) = MR_box_float(RecProb_22);
                MR_hl_field(0, RecLevel_24, 3) = MR_box_float(RecCost_21);
                MR_hl_field(0, RecLevel_24, 4) = MR_box_float((MR_Float) 1.0000000000000000);
              }
            }
            else
            {
              MR_String Msg_25;
              MR_String Var_100;
              MR_String Var_107;

              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&recursion_patterns_scalar_common_3[1]), (MR_Integer) 1, &Var_100);
              Var_107 = mercury__string__f_43_43_2_f_0(Var_100, (MR_String) " not found");
              Msg_25 = mercury__string__f_43_43_2_f_0((MR_String) "maximum level ", Var_107);
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140recursion_patterns.recursion_data_to_recursion_type\'/4", Msg_25);
                return;
              }
            }
            AvgMaxDepth_26 = mercury__float__f_slash_2_f_0(TotalCalls_13, ParentCalls_12);
            Var_120 = (((MR_Float) 0.50000000000000000) * RecCost_21);
            Var_123 = (AvgMaxDepth_26 * AvgMaxDepth_26);
            Var_122 = (Var_123 + AvgMaxDepth_26);
            Sum_119 = (Var_120 * Var_122);
            Var_126 = (AvgMaxDepth_26 + ((MR_Float) 1.0000000000000000));
            Var_125 = mercury__float__f_slash_2_f_0(Sum_119, Var_126);
            AvgRecCost_27 = (BaseCost_15 + Var_125);
            {
              AnyRecCost_28 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, AnyRecCost_28, 0) = ((MR_Box) (&recursion_patterns_scalar_common_4[0]));
              MR_hl_field(0, AnyRecCost_28, 1) = ((MR_Box) (recursion_patterns__recursion_data_to_recursion_type_4_p_0_1));
              MR_hl_field(0, AnyRecCost_28, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, AnyRecCost_28, 3) = MR_box_float(BaseCost_15);
              MR_hl_field(0, AnyRecCost_28, 4) = MR_box_float(RecCost_21);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              *Type_8 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (BaseLevel_19));
              MR_hl_field(1, base, 1) = ((MR_Box) (RecLevel_24));
              MR_hl_field(1, base, 2) = MR_box_float(AvgMaxDepth_26);
              MR_hl_field(1, base, 3) = MR_box_float(AvgRecCost_27);
              MR_hl_field(1, base, 4) = ((MR_Box) (AnyRecCost_28));
            }
          }
          else
          {
            MR_Word TypeCtorInfo_87_87;
            MR_Word TypeCtorInfo_88_88;
            MR_Integer Var_50;
            MR_Box conv3_Var_29;

            succeeded = (Maximum_10 == (MR_Integer) 2);
            if (succeeded)
            {
              Var_50 = (MR_Integer) 1;
              TypeCtorInfo_87_87 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0);
              TypeCtorInfo_88_88 = (MR_Word) (&recursion_patterns__recursion_patterns__type_ctor_info_recursion_level_0);
              succeeded = mercury__assoc_list__search_3_p_0(TypeCtorInfo_87_87, TypeCtorInfo_88_88, Levels_9, ((MR_Box) (Var_50)), &conv3_Var_29);
              if (succeeded)
                succeeded = MR_TRUE;
              succeeded = !(succeeded);
            }
            if (succeeded)
            {
              MR_Word RecLevel_79;
              MR_Word RLRec_70;
              MR_Box conv4_RLRec_70;

              succeeded = mercury__assoc_list__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&recursion_patterns__recursion_patterns__type_ctor_info_recursion_level_0), Levels_9, ((MR_Box) ((MR_Integer) 2)), &conv4_RLRec_70);
              if (succeeded)
              {
                RLRec_70 = ((MR_Word) (conv4_RLRec_70));
                succeeded = MR_TRUE;
              }
              if (succeeded)
              {
                MR_Float Var_52;
                MR_Integer Var_54;
                MR_Float Var_55;
                MR_Float RecCost_66 = MR_unbox_float((MR_hl_field(0, RLRec_70, (MR_Integer) 0)));
                MR_Float RecProb_67 = MR_unbox_float((MR_hl_field(0, RLRec_70, (MR_Integer) 1)));
                MR_Float RecCountF_68;

                Var_52 = measurement_units__probability_to_float_1_f_0(RecProb_67);
                RecCountF_68 = (Var_52 * ParentCalls_12);
                Var_54 = mercury__float__round_to_int_1_f_0(RecCountF_68);
                Var_55 = (RecCountF_68 * ((MR_Float) 2.0000000000000000));
                {
                  RecLevel_79 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, RecLevel_79, 0) = ((MR_Box) ((MR_Integer) 2));
                  MR_hl_field(0, RecLevel_79, 1) = ((MR_Box) (Var_54));
                  MR_hl_field(0, RecLevel_79, 2) = MR_box_float(RecProb_67);
                  MR_hl_field(0, RecLevel_79, 3) = MR_box_float(RecCost_66);
                  MR_hl_field(0, RecLevel_79, 4) = MR_box_float(Var_55);
                }
              }
              else
              {
                MR_String Msg_69;
                MR_String Var_110;
                MR_String Var_117;

                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&recursion_patterns_scalar_common_3[1]), (MR_Integer) 1, &Var_110);
                Var_117 = mercury__string__f_43_43_2_f_0(Var_110, (MR_String) " not found");
                Msg_69 = mercury__string__f_43_43_2_f_0((MR_String) "maximum level ", Var_117);
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140recursion_patterns.recursion_data_to_recursion_type\'/4", Msg_69);
                  return;
                }
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Type_8 = base;
                MR_hl_field(2, base, 0) = ((MR_Box) (BaseLevel_19));
                MR_hl_field(2, base, 1) = ((MR_Box) (RecLevel_79));
              }
            }
            else
            {
              MR_Word LevelsReport_30;
              MR_Word Var_63;

              {
                Var_63 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_63, 0) = ((MR_Box) (&recursion_patterns_scalar_common_5[0]));
                MR_hl_field(0, Var_63, 1) = ((MR_Box) (recursion_patterns__recursion_data_to_recursion_type_4_p_0_2));
                MR_hl_field(0, Var_63, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(0, Var_63, 3) = MR_box_float(TotalCalls_13);
              }
              mercury__list__map_3_p_0((MR_Word) (&recursion_patterns_scalar_common_1[3]), (MR_Word) (&report__report__type_ctor_info_recursion_level_report_0), Var_63, Levels_9, &LevelsReport_30);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Type_8 = base;
                MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(3, base, 1) = ((MR_Box) (LevelsReport_30));
              }
            }
          }
        }
      }
    }
    else
    {
      MR_Word Messages_31;
      MR_Word Var_65;

      Var_65 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&recursion_patterns__recursion_patterns__type_ctor_info_recursion_error_0), Errors_11);
      Messages_31 = mercury__list__map_2_f_0((MR_Word) (&recursion_patterns__recursion_patterns__type_ctor_info_recursion_error_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&recursion_patterns_scalar_common_1[5]), Var_65);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Type_8 = base;
        MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(3, base, 1) = ((MR_Box) (Messages_31));
      }
    }
  }
}

static MR_bool MR_CALL 
recursion_patterns____Unify____first_proc_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = recursion_patterns____Unify____first_proc_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
recursion_patterns____Compare____first_proc_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  recursion_patterns____Compare____first_proc_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
recursion_patterns____Unify____own_and_inherit_prof_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = recursion_patterns____Unify____own_and_inherit_prof_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
recursion_patterns____Compare____own_and_inherit_prof_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  recursion_patterns____Compare____own_and_inherit_prof_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
recursion_patterns____Unify____recursion_analysis_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = recursion_patterns____Unify____recursion_analysis_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
recursion_patterns____Compare____recursion_analysis_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  recursion_patterns____Compare____recursion_analysis_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
recursion_patterns____Unify____recursion_data_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = recursion_patterns____Unify____recursion_data_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
recursion_patterns____Compare____recursion_data_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  recursion_patterns____Compare____recursion_data_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
recursion_patterns____Unify____recursion_error_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = recursion_patterns____Unify____recursion_error_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
recursion_patterns____Compare____recursion_error_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  recursion_patterns____Compare____recursion_error_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
recursion_patterns____Unify____recursion_level_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = recursion_patterns____Unify____recursion_level_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
recursion_patterns____Compare____recursion_level_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  recursion_patterns____Compare____recursion_level_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
recursion_patterns____Unify____recursion_type_raw_freq_data_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = recursion_patterns____Unify____recursion_type_raw_freq_data_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
recursion_patterns____Compare____recursion_type_raw_freq_data_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  recursion_patterns____Compare____recursion_type_raw_freq_data_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
recursion_patterns____Unify____recursion_type_raw_proc_freq_data_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = recursion_patterns____Unify____recursion_type_raw_proc_freq_data_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
recursion_patterns____Compare____recursion_type_raw_proc_freq_data_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  recursion_patterns____Compare____recursion_type_raw_proc_freq_data_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__recursion_patterns__init(void)
{
}

void mercury__recursion_patterns__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&recursion_patterns__recursion_patterns__type_ctor_info_first_proc_info_0);
	MR_register_type_ctor_info(&recursion_patterns__recursion_patterns__type_ctor_info_own_and_inherit_prof_info_0);
	MR_register_type_ctor_info(&recursion_patterns__recursion_patterns__type_ctor_info_recursion_analysis_info_0);
	MR_register_type_ctor_info(&recursion_patterns__recursion_patterns__type_ctor_info_recursion_data_0);
	MR_register_type_ctor_info(&recursion_patterns__recursion_patterns__type_ctor_info_recursion_error_0);
	MR_register_type_ctor_info(&recursion_patterns__recursion_patterns__type_ctor_info_recursion_level_0);
	MR_register_type_ctor_info(&recursion_patterns__recursion_patterns__type_ctor_info_recursion_type_raw_freq_data_0);
	MR_register_type_ctor_info(&recursion_patterns__recursion_patterns__type_ctor_info_recursion_type_raw_proc_freq_data_0);
}

void mercury__recursion_patterns__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__recursion_patterns__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module recursion_patterns.
