/*
** Automatically generated from `recursion_patterns.m'
** by the Mercury compiler,
** version rotd-2016-02-18
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


/* :- module recursion_patterns. */
/* :- implementation. */

/*
INIT mercury__recursion_patterns__init
ENDINIT
*/

#include "recursion_patterns.mih"


#include "analysis_utils.mih"
#include "array_util.mih"
#include "coverage.mih"
#include "create_report.mih"
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




static const MR_FA_PseudoTypeInfo_Struct2 recursion_patterns__pair__pti_pair_2__plain_profile__type_ctor_info_call_site_static_ptr_0__plain_profile__type_ctor_info_call_site_array_slot_0;

static const MR_FA_TypeInfo_Struct1 recursion_patterns__analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0;

static const MR_FA_PseudoTypeInfo_Struct2 recursion_patterns__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0;

static const MR_FA_PseudoTypeInfo_Struct2 recursion_patterns__tree234__pti_tree234_2__plain_report__type_ctor_info_recursion_type_simple_0__plain_recursion_patterns__type_ctor_info_recursion_type_raw_freq_data_0;

static const MR_FA_PseudoTypeInfo_Struct2 recursion_patterns__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_recursion_patterns__type_ctor_info_recursion_level_0;

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

static MR_bool MR_CALL 
recursion_patterns____Unify____first_proc_info_0_0_10001(
  MR_Box recursion_patterns__wrapper_arg_1,
  MR_Box recursion_patterns__wrapper_arg_2);

static void MR_CALL 
recursion_patterns____Compare____first_proc_info_0_0_10001(
  MR_Box * recursion_patterns__wrapper_arg_1,
  MR_Box recursion_patterns__wrapper_arg_2,
  MR_Box recursion_patterns__wrapper_arg_3);

static MR_bool MR_CALL 
recursion_patterns____Unify____own_and_inherit_prof_info_0_0_10001(
  MR_Box recursion_patterns__wrapper_arg_1,
  MR_Box recursion_patterns__wrapper_arg_2);

static void MR_CALL 
recursion_patterns____Compare____own_and_inherit_prof_info_0_0_10001(
  MR_Box * recursion_patterns__wrapper_arg_1,
  MR_Box recursion_patterns__wrapper_arg_2,
  MR_Box recursion_patterns__wrapper_arg_3);

static MR_bool MR_CALL 
recursion_patterns____Unify____recursion_analysis_info_0_0_10001(
  MR_Box recursion_patterns__wrapper_arg_1,
  MR_Box recursion_patterns__wrapper_arg_2);

static void MR_CALL 
recursion_patterns____Compare____recursion_analysis_info_0_0_10001(
  MR_Box * recursion_patterns__wrapper_arg_1,
  MR_Box recursion_patterns__wrapper_arg_2,
  MR_Box recursion_patterns__wrapper_arg_3);

static MR_bool MR_CALL 
recursion_patterns____Unify____recursion_data_0_0_10001(
  MR_Box recursion_patterns__wrapper_arg_1,
  MR_Box recursion_patterns__wrapper_arg_2);

static void MR_CALL 
recursion_patterns____Compare____recursion_data_0_0_10001(
  MR_Box * recursion_patterns__wrapper_arg_1,
  MR_Box recursion_patterns__wrapper_arg_2,
  MR_Box recursion_patterns__wrapper_arg_3);

static MR_bool MR_CALL 
recursion_patterns____Unify____recursion_error_0_0_10001(
  MR_Box recursion_patterns__wrapper_arg_1,
  MR_Box recursion_patterns__wrapper_arg_2);

static void MR_CALL 
recursion_patterns____Compare____recursion_error_0_0_10001(
  MR_Box * recursion_patterns__wrapper_arg_1,
  MR_Box recursion_patterns__wrapper_arg_2,
  MR_Box recursion_patterns__wrapper_arg_3);

static MR_bool MR_CALL 
recursion_patterns____Unify____recursion_level_0_0_10001(
  MR_Box recursion_patterns__wrapper_arg_1,
  MR_Box recursion_patterns__wrapper_arg_2);

static void MR_CALL 
recursion_patterns____Compare____recursion_level_0_0_10001(
  MR_Box * recursion_patterns__wrapper_arg_1,
  MR_Box recursion_patterns__wrapper_arg_2,
  MR_Box recursion_patterns__wrapper_arg_3);

static MR_bool MR_CALL 
recursion_patterns____Unify____recursion_type_raw_freq_data_0_0_10001(
  MR_Box recursion_patterns__wrapper_arg_1,
  MR_Box recursion_patterns__wrapper_arg_2);

static void MR_CALL 
recursion_patterns____Compare____recursion_type_raw_freq_data_0_0_10001(
  MR_Box * recursion_patterns__wrapper_arg_1,
  MR_Box recursion_patterns__wrapper_arg_2,
  MR_Box recursion_patterns__wrapper_arg_3);

static MR_bool MR_CALL 
recursion_patterns____Unify____recursion_type_raw_proc_freq_data_0_0_10001(
  MR_Box recursion_patterns__wrapper_arg_1,
  MR_Box recursion_patterns__wrapper_arg_2);

static void MR_CALL 
recursion_patterns____Compare____recursion_type_raw_proc_freq_data_0_0_10001(
  MR_Box * recursion_patterns__wrapper_arg_1,
  MR_Box recursion_patterns__wrapper_arg_2,
  MR_Box recursion_patterns__wrapper_arg_3);

static void MR_CALL 
recursion_patterns__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_114_101_99_117_114_115_105_111_110_95_100_97_116_97_95_97_110_100_95_112_114_111_98_97_98_105_108_105_116_121_95_95_55_53_54_95_95_49_95_95_91_50_93_95_48_4_p_0(
  MR_Float recursion_patterns__Prob_1,
  MR_Word recursion_patterns__HeadVar__3_14,
  MR_Word * recursion_patterns__HeadVar__4_15);

static void MR_CALL 
recursion_patterns__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_97_108_105_122_101_95_104_105_115_116_111_103_114_97_109_95_112_114_111_99_95_114_101_99_95_116_121_112_101_95_95_91_51_93_95_48_5_p_0(
  MR_Word recursion_patterns__Deep_6,
  MR_Float recursion_patterns__NumCliques_7,
  MR_Word recursion_patterns__HeadVar__4_4,
  MR_Word * recursion_patterns__HeadVar__5_5);

static void MR_CALL 
recursion_patterns__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_97_108_105_122_101_95_104_105_115_116_111_103_114_97_109_95_114_101_99_95_116_121_112_101_95_95_91_51_93_95_48_5_p_0_1(
  MR_Box recursion_patterns__closure_arg,
  MR_Box recursion_patterns__wrapper_arg_1,
  MR_Box recursion_patterns__wrapper_arg_2,
  MR_Box * recursion_patterns__wrapper_arg_3);

static void MR_CALL 
recursion_patterns__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_97_108_105_122_101_95_104_105_115_116_111_103_114_97_109_95_114_101_99_95_116_121_112_101_95_95_91_51_93_95_48_5_p_0(
  MR_Word recursion_patterns__Deep_6,
  MR_Float recursion_patterns__NumCliques_7,
  MR_Word recursion_patterns__HeadVar__4_4,
  MR_Word * recursion_patterns__HeadVar__5_5);

static void MR_CALL 
recursion_patterns__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_95_116_121_112_101_115_95_102_114_101_113_95_98_117_105_108_100_95_104_105_115_116_111_103_114_97_109_95_95_91_50_93_95_48_5_p_0_1(
  MR_Box recursion_patterns__closure_arg,
  MR_Box recursion_patterns__wrapper_arg_1,
  MR_Box recursion_patterns__wrapper_arg_2,
  MR_Box * recursion_patterns__wrapper_arg_3);

static void MR_CALL 
recursion_patterns__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_95_116_121_112_101_115_95_102_114_101_113_95_98_117_105_108_100_95_104_105_115_116_111_103_114_97_109_95_95_91_50_93_95_48_5_p_0(
  MR_Word recursion_patterns__Deep_6,
  MR_Word recursion_patterns__CliquePtr_8,
  MR_Word recursion_patterns__STATE_VARIABLE_Histogram_0_27,
  MR_Word * recursion_patterns__STATE_VARIABLE_Histogram_28);

static MR_Integer MR_CALL 
recursion_patterns__IntroducedFrom__func__recursion_type_to_simple_type__969__1_1_f_0(
  MR_Word recursion_patterns__LambdaHeadVar__1_26);

static MR_Word MR_CALL 
recursion_patterns__IntroducedFrom__func__recursion_type_to_simple_type__972__1_1_f_0(
  MR_String recursion_patterns__LambdaHeadVar__1_34);

static void MR_CALL 
recursion_patterns__IntroducedFrom__pred__recursion_data_and_probability__756__1_4_p_0(
  MR_Float recursion_patterns__Prob_1,
  MR_Integer recursion_patterns__HeadVar__2_13,
  MR_Word recursion_patterns__HeadVar__3_14,
  MR_Word * recursion_patterns__HeadVar__4_15);

static void MR_CALL 
recursion_patterns____Compare____recursion_type_raw_proc_freq_data_0_0(
  MR_Word * recursion_patterns__HeadVar__1_1,
  MR_Word recursion_patterns__HeadVar__2_2,
  MR_Word recursion_patterns__HeadVar__3_3);

static MR_bool MR_CALL 
recursion_patterns____Unify____recursion_type_raw_proc_freq_data_0_0(
  MR_Word recursion_patterns__HeadVar__1_1,
  MR_Word recursion_patterns__HeadVar__2_2);

static void MR_CALL 
recursion_patterns____Compare____recursion_type_raw_freq_data_0_0(
  MR_Word * recursion_patterns__HeadVar__1_1,
  MR_Word recursion_patterns__HeadVar__2_2,
  MR_Word recursion_patterns__HeadVar__3_3);

static MR_bool MR_CALL 
recursion_patterns____Unify____recursion_type_raw_freq_data_0_0(
  MR_Word recursion_patterns__HeadVar__1_1,
  MR_Word recursion_patterns__HeadVar__2_2);

static void MR_CALL 
recursion_patterns____Compare____recursion_level_0_0(
  MR_Word * recursion_patterns__HeadVar__1_1,
  MR_Word recursion_patterns__HeadVar__2_2,
  MR_Word recursion_patterns__HeadVar__3_3);

static MR_bool MR_CALL 
recursion_patterns____Unify____recursion_level_0_0(
  MR_Word recursion_patterns__HeadVar__1_1,
  MR_Word recursion_patterns__HeadVar__2_2);

static void MR_CALL 
recursion_patterns____Compare____recursion_error_0_0(
  MR_Word * recursion_patterns__HeadVar__1_1,
  MR_Word recursion_patterns__HeadVar__2_2,
  MR_Word recursion_patterns__HeadVar__3_3);

static MR_bool MR_CALL 
recursion_patterns____Unify____recursion_error_0_0(
  MR_Word recursion_patterns__HeadVar__1_1,
  MR_Word recursion_patterns__HeadVar__2_2);

static void MR_CALL 
recursion_patterns____Compare____recursion_data_0_0(
  MR_Word * recursion_patterns__HeadVar__1_1,
  MR_Word recursion_patterns__HeadVar__2_2,
  MR_Word recursion_patterns__HeadVar__3_3);

static MR_bool MR_CALL 
recursion_patterns____Unify____recursion_data_0_0(
  MR_Word recursion_patterns__HeadVar__1_1,
  MR_Word recursion_patterns__HeadVar__2_2);

static void MR_CALL 
recursion_patterns____Compare____recursion_analysis_info_0_0(
  MR_Word * recursion_patterns__HeadVar__1_1,
  MR_Word recursion_patterns__HeadVar__2_2,
  MR_Word recursion_patterns__HeadVar__3_3);

static MR_bool MR_CALL 
recursion_patterns____Unify____recursion_analysis_info_0_0(
  MR_Word recursion_patterns__HeadVar__1_1,
  MR_Word recursion_patterns__HeadVar__2_2);

static void MR_CALL 
recursion_patterns____Compare____own_and_inherit_prof_info_0_0(
  MR_Word * recursion_patterns__HeadVar__1_1,
  MR_Word recursion_patterns__HeadVar__2_2,
  MR_Word recursion_patterns__HeadVar__3_3);

static MR_bool MR_CALL 
recursion_patterns____Unify____own_and_inherit_prof_info_0_0(
  MR_Word recursion_patterns__HeadVar__1_1,
  MR_Word recursion_patterns__HeadVar__2_2);

static void MR_CALL 
recursion_patterns____Compare____first_proc_info_0_0(
  MR_Word * recursion_patterns__HeadVar__1_1,
  MR_Word recursion_patterns__HeadVar__2_2,
  MR_Word recursion_patterns__HeadVar__3_3);

static MR_bool MR_CALL 
recursion_patterns____Unify____first_proc_info_0_0(
  MR_Word recursion_patterns__HeadVar__1_1,
  MR_Word recursion_patterns__HeadVar__2_2);

static void MR_CALL 
recursion_patterns__finalize_histogram_proc_rec_type_5_p_0(
  MR_Word recursion_patterns__Deep_6,
  MR_Float recursion_patterns__NumCliques_7,
  MR_Word recursion_patterns___PSPtr_8,
  MR_Word recursion_patterns__HeadVar__4_4,
  MR_Word * recursion_patterns__HeadVar__5_5);

static void MR_CALL 
recursion_patterns__finalize_histogram_rec_type_5_p_0(
  MR_Word recursion_patterns__Deep_6,
  MR_Float recursion_patterns__NumCliques_7,
  MR_Word recursion_patterns___RecursionType_8,
  MR_Word recursion_patterns__HeadVar__4_4,
  MR_Word * recursion_patterns__HeadVar__5_5);

static void MR_CALL 
recursion_patterns__finalize_histogram_4_p_0_1(
  MR_Box recursion_patterns__closure_arg,
  MR_Box recursion_patterns__wrapper_arg_1,
  MR_Box recursion_patterns__wrapper_arg_2,
  MR_Box * recursion_patterns__wrapper_arg_3);

static void MR_CALL 
recursion_patterns__finalize_histogram_4_p_0(
  MR_Word recursion_patterns__Deep_5,
  MR_Integer recursion_patterns__NumCliques_6,
  MR_Word recursion_patterns__STATE_VARIABLE_Histogram_0_8,
  MR_Word * recursion_patterns__STATE_VARIABLE_Histogram_9);

static MR_Box MR_CALL 
recursion_patterns__recursion_type_to_simple_type_2_p_0_2(
  MR_Box recursion_patterns__closure_arg,
  MR_Box recursion_patterns__wrapper_arg_1);

static MR_Box MR_CALL 
recursion_patterns__recursion_type_to_simple_type_2_p_0_1(
  MR_Box recursion_patterns__closure_arg,
  MR_Box recursion_patterns__wrapper_arg_1);

static void MR_CALL 
recursion_patterns__recursion_type_to_simple_type_2_p_0(
  MR_Word recursion_patterns__HeadVar__1_1,
  MR_Word * recursion_patterns__HeadVar__2_2);

static void MR_CALL 
recursion_patterns__update_procs_map_3_p_0(
  MR_Word recursion_patterns__FirstProcInfo_4,
  MR_Word recursion_patterns__STATE_VARIABLE_Map_0_16,
  MR_Word * recursion_patterns__STATE_VARIABLE_Map_17);

static void MR_CALL 
recursion_patterns__update_histogram_4_p_0(
  MR_Word recursion_patterns__MaybeFirstProcInfo_5,
  MR_Word recursion_patterns__SimpleType_6,
  MR_Word recursion_patterns__STATE_VARIABLE_Histogram_0_19,
  MR_Word * recursion_patterns__STATE_VARIABLE_Histogram_20);

static void MR_CALL 
recursion_patterns__rec_types_freq_build_histogram_5_p_0(
  MR_Word recursion_patterns__Deep_6,
  MR_Integer recursion_patterns__HeadVar__2_7,
  MR_Word recursion_patterns__CliquePtr_8,
  MR_Word recursion_patterns__STATE_VARIABLE_Histogram_0_27,
  MR_Word * recursion_patterns__STATE_VARIABLE_Histogram_28);

static MR_String MR_CALL 
recursion_patterns__error_to_string_1_f_0(
  MR_Word recursion_patterns__HeadVar__1_1);

static void MR_CALL 
recursion_patterns__recursions_cross_product_2_4_p_0(
  MR_Integer recursion_patterns__HeadVar__1_1,
  MR_Word recursion_patterns__HeadVar__2_2,
  MR_Word recursion_patterns__HeadVar__3_3,
  MR_Word * recursion_patterns__HeadVar__4_4);

static void MR_CALL 
recursion_patterns__recursions_cross_product_3_p_0(
  MR_Word recursion_patterns__HeadVar__1_1,
  MR_Word recursion_patterns__PairsB_2,
  MR_Word * recursion_patterns__HeadVar__3_3);

static void MR_CALL 
recursion_patterns__condense_recursions_2_3_p_0(
  MR_Word recursion_patterns__HeadVar__1_1,
  MR_Word recursion_patterns__HeadVar__2_2,
  MR_Word * recursion_patterns__HeadVar__3_3);

static void MR_CALL 
recursion_patterns__merge_recursion_data_sequence_3_p_0(
  MR_Word recursion_patterns__A_4,
  MR_Word recursion_patterns__B_5,
  MR_Word * recursion_patterns__Result_6);

static void MR_CALL 
recursion_patterns__merge_recursion_data_after_branch_3_p_0(
  MR_Word recursion_patterns__A_4,
  MR_Word recursion_patterns__B_5,
  MR_Word * recursion_patterns__Result_6);

static void MR_CALL 
recursion_patterns__atomic_goal_recursion_data_4_p_0(
  MR_Word recursion_patterns__Info_5,
  MR_Word recursion_patterns__RevGoalPath_6,
  MR_Word recursion_patterns__AtomicGoal_7,
  MR_Word * recursion_patterns__RecursionData_8);

static void MR_CALL 
recursion_patterns__switch_recursion_data_7_p_0_2(
  MR_Box recursion_patterns__closure_arg,
  MR_Box recursion_patterns__wrapper_arg_1,
  MR_Box recursion_patterns__wrapper_arg_2,
  MR_Box * recursion_patterns__wrapper_arg_3);

static void MR_CALL 
recursion_patterns__switch_recursion_data_7_p_0_1(
  MR_Box recursion_patterns__closure_arg,
  MR_Box recursion_patterns__wrapper_arg_1,
  MR_Box recursion_patterns__wrapper_arg_2,
  MR_Box * recursion_patterns__wrapper_arg_3);

static void MR_CALL 
recursion_patterns__switch_recursion_data_7_p_0(
  MR_Word recursion_patterns__Info_1,
  MR_Word recursion_patterns__RevGoalPath_2,
  MR_Integer recursion_patterns__CaseNum_3,
  MR_Word recursion_patterns__HeadVar__4_4,
  MR_Float recursion_patterns__TotalCalls_5,
  MR_Integer recursion_patterns__CallsRemaining_6,
  MR_Word * recursion_patterns__RecursionData_7);

static void MR_CALL 
recursion_patterns__ite_recursion_data_7_p_0_2(
  MR_Box recursion_patterns__closure_arg,
  MR_Box recursion_patterns__wrapper_arg_1,
  MR_Box recursion_patterns__wrapper_arg_2,
  MR_Box * recursion_patterns__wrapper_arg_3);

static void MR_CALL 
recursion_patterns__ite_recursion_data_7_p_0_1(
  MR_Box recursion_patterns__closure_arg,
  MR_Box recursion_patterns__wrapper_arg_1,
  MR_Box recursion_patterns__wrapper_arg_2,
  MR_Box * recursion_patterns__wrapper_arg_3);

static void MR_CALL 
recursion_patterns__ite_recursion_data_7_p_0(
  MR_Word recursion_patterns__Info_8,
  MR_Word recursion_patterns__RevGoalPath_9,
  MR_Word recursion_patterns__Cond_10,
  MR_Word recursion_patterns__Then_11,
  MR_Word recursion_patterns__Else_12,
  MR_Integer recursion_patterns__Calls_13,
  MR_Word * recursion_patterns__STATE_VARIABLE_RecursionData_28);

static void MR_CALL 
recursion_patterns__disj_recursion_data_5_p_0_2(
  MR_Box recursion_patterns__closure_arg,
  MR_Box recursion_patterns__wrapper_arg_1,
  MR_Box recursion_patterns__wrapper_arg_2,
  MR_Box * recursion_patterns__wrapper_arg_3);

static void MR_CALL 
recursion_patterns__disj_recursion_data_5_p_0_1(
  MR_Box recursion_patterns__closure_arg,
  MR_Box recursion_patterns__wrapper_arg_1,
  MR_Box recursion_patterns__wrapper_arg_2,
  MR_Box * recursion_patterns__wrapper_arg_3);

static void MR_CALL 
recursion_patterns__disj_recursion_data_5_p_0(
  MR_Word recursion_patterns__Info_1,
  MR_Word recursion_patterns__RevGoalPath_2,
  MR_Integer recursion_patterns__DisjNum_3,
  MR_Word recursion_patterns__HeadVar__4_4,
  MR_Word * recursion_patterns__HeadVar__5_5);

static void MR_CALL 
recursion_patterns__conj_recursion_data_5_p_0_2(
  MR_Box recursion_patterns__closure_arg,
  MR_Box recursion_patterns__wrapper_arg_1,
  MR_Box recursion_patterns__wrapper_arg_2,
  MR_Box * recursion_patterns__wrapper_arg_3);

static void MR_CALL 
recursion_patterns__conj_recursion_data_5_p_0_1(
  MR_Box recursion_patterns__closure_arg,
  MR_Box recursion_patterns__wrapper_arg_1,
  MR_Box recursion_patterns__wrapper_arg_2,
  MR_Box * recursion_patterns__wrapper_arg_3);

static void MR_CALL 
recursion_patterns__conj_recursion_data_5_p_0(
  MR_Word recursion_patterns__Info_1,
  MR_Word recursion_patterns__RevGoalPath_2,
  MR_Integer recursion_patterns__ConjNum_3,
  MR_Word recursion_patterns__HeadVar__4_4,
  MR_Word * recursion_patterns__HeadVar__5_5);

static void MR_CALL 
recursion_patterns__goal_recursion_data_4_p_0(
  MR_Word recursion_patterns__Info_5,
  MR_Word recursion_patterns__RevGoalPath_6,
  MR_Word recursion_patterns__GoalRep_7,
  MR_Word * recursion_patterns__STATE_VARIABLE_RecursionData_30);

static MR_Float MR_CALL 
recursion_patterns__single_rec_average_recursion_cost_3_f_0(
  MR_Float recursion_patterns__BaseCost_5,
  MR_Float recursion_patterns__RecCost_6,
  MR_Float recursion_patterns__AvgMaxDepth_7);

static MR_Float MR_CALL 
recursion_patterns__single_rec_recursion_cost_3_f_0(
  MR_Float recursion_patterns__BaseCost_5,
  MR_Float recursion_patterns__RecCost_6,
  MR_Integer recursion_patterns__LevelI_7);

static void MR_CALL 
recursion_patterns__recursion_level_report_3_p_0(
  MR_Float recursion_patterns__TotalCalls_4,
  MR_Word recursion_patterns__HeadVar__2_2,
  MR_Word * recursion_patterns__HeadVar__3_3);

static MR_Box MR_CALL 
recursion_patterns__recursion_data_to_recursion_type_4_p_0_3(
  MR_Box recursion_patterns__closure_arg,
  MR_Box recursion_patterns__wrapper_arg_1);

static void MR_CALL 
recursion_patterns__recursion_data_to_recursion_type_4_p_0_2(
  MR_Box recursion_patterns__closure_arg,
  MR_Box recursion_patterns__wrapper_arg_1,
  MR_Box * recursion_patterns__wrapper_arg_2);

static MR_Box MR_CALL 
recursion_patterns__recursion_data_to_recursion_type_4_p_0_1(
  MR_Box recursion_patterns__closure_arg,
  MR_Box recursion_patterns__wrapper_arg_1);

static void MR_CALL 
recursion_patterns__recursion_data_to_recursion_type_4_p_0(
  MR_Integer recursion_patterns__ParentCallsI_5,
  MR_Integer recursion_patterns__TotalCallsI_6,
  MR_Word recursion_patterns__RecursionData_7,
  MR_Word * recursion_patterns__Type_8);

static void MR_CALL 
recursion_patterns__create_recursion_types_frequency_report_2_p_0_1(
  MR_Box recursion_patterns__closure_arg,
  MR_Box recursion_patterns__wrapper_arg_1,
  MR_Box recursion_patterns__wrapper_arg_2,
  MR_Box recursion_patterns__wrapper_arg_3,
  MR_Box * recursion_patterns__wrapper_arg_4);

static void MR_CALL 
recursion_patterns__create_clique_recursion_costs_report_3_p_0_1(
  MR_Box recursion_patterns__closure_arg,
  MR_Box recursion_patterns__wrapper_arg_1,
  MR_Box recursion_patterns__wrapper_arg_2,
  MR_Box * recursion_patterns__wrapper_arg_3);


static /* final */ const MR_Box recursion_patterns_scalar_common_1[8][3];

static /* final */ const MR_Box recursion_patterns_scalar_common_2[9][2];

static /* final */ const MR_Box recursion_patterns_scalar_common_3[3][1];

static /* final */ const MR_Box recursion_patterns_scalar_common_4[4][7];

static /* final */ const MR_Box recursion_patterns_scalar_common_5[3][8];

static /* final */ const MR_Box recursion_patterns_scalar_common_6[1][6];

static /* final */ const MR_Box recursion_patterns_scalar_common_7[3][5];




static /* final */ const MR_Box recursion_patterns_scalar_common_1[8][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&report__report__type_ctor_info_recursion_type_simple_0)),
    ((MR_Box) (&recursion_patterns__recursion_patterns__type_ctor_info_recursion_type_raw_freq_data_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_static_ptr_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_array_slot_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0)),
    ((MR_Box) (&recursion_patterns_scalar_common_2[0]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&recursion_patterns__recursion_patterns__type_ctor_info_recursion_level_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_static_ptr_0)),
    ((MR_Box) (&recursion_patterns__recursion_patterns__type_ctor_info_recursion_type_raw_proc_freq_data_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&recursion_patterns_scalar_common_7[0])),
    ((MR_Box) (recursion_patterns__recursion_data_to_recursion_type_4_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&recursion_patterns_scalar_common_7[1])),
    ((MR_Box) (recursion_patterns__recursion_type_to_simple_type_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&recursion_patterns_scalar_common_7[2])),
    ((MR_Box) (recursion_patterns__recursion_type_to_simple_type_2_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box recursion_patterns_scalar_common_2[9][2] = {
  /* row 0 */
  {
    ((MR_Box) (&analysis_utils__analysis_utils__type_ctor_info_cost_and_callees_1)),
    ((MR_Box) (&analysis_utils__analysis_utils__type_ctor_info_callee_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_attr_array_1)),
    ((MR_Box) (&coverage__coverage__type_ctor_info_coverage_info_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&recursion_patterns_scalar_common_1[3]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&recursion_patterns__recursion_patterns__type_ctor_info_recursion_error_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&recursion_patterns__recursion_patterns__type_ctor_info_own_and_inherit_prof_info_0))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box recursion_patterns_scalar_common_3[3][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "This clique doesn\'t appear to have an entry procedure"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "There is no readable procedure representation information file."))
  },
  /* row 2 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
};

static /* final */ const MR_Box recursion_patterns_scalar_common_4[4][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&recursion_patterns__pair__pti_pair_2__plain_profile__type_ctor_info_call_site_static_ptr_0__plain_profile__type_ctor_info_call_site_array_slot_0)),
    ((MR_Box) (&recursion_patterns__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0)),
    ((MR_Box) (&recursion_patterns__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&recursion_patterns__recursion_patterns__type_ctor_info_recursion_level_0)),
    ((MR_Box) (&recursion_patterns__recursion_patterns__type_ctor_info_recursion_level_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&recursion_patterns__maybe__pti_maybe_1__plain_recursion_patterns__type_ctor_info_first_proc_info_0)),
    ((MR_Box) (&report__report__type_ctor_info_recursion_type_simple_0)),
    ((MR_Box) (&recursion_patterns__tree234__pti_tree234_2__plain_report__type_ctor_info_recursion_type_simple_0__plain_recursion_patterns__type_ctor_info_recursion_type_raw_freq_data_0)),
    ((MR_Box) (&recursion_patterns__tree234__pti_tree234_2__plain_report__type_ctor_info_recursion_type_simple_0__plain_recursion_patterns__type_ctor_info_recursion_type_raw_freq_data_0))
  },
};

static /* final */ const MR_Box recursion_patterns_scalar_common_5[3][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_clique_ptr_0)),
    ((MR_Box) (&recursion_patterns__tree234__pti_tree234_2__plain_report__type_ctor_info_recursion_type_simple_0__plain_recursion_patterns__type_ctor_info_recursion_type_raw_freq_data_0)),
    ((MR_Box) (&recursion_patterns__tree234__pti_tree234_2__plain_report__type_ctor_info_recursion_type_simple_0__plain_recursion_patterns__type_ctor_info_recursion_type_raw_freq_data_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0)),
    ((MR_Box) (&report__report__type_ctor_info_recursion_type_simple_0)),
    ((MR_Box) (&recursion_patterns__recursion_patterns__type_ctor_info_recursion_type_raw_freq_data_0)),
    ((MR_Box) (&report__report__type_ctor_info_recursion_type_freq_data_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_static_ptr_0)),
    ((MR_Box) (&recursion_patterns__recursion_patterns__type_ctor_info_recursion_type_raw_proc_freq_data_0)),
    ((MR_Box) (&report__report__type_ctor_info_recursion_type_proc_freq_data_0))
  },
};

static /* final */ const MR_Box recursion_patterns_scalar_common_6[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0)),
    ((MR_Box) (&recursion_patterns__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_recursion_patterns__type_ctor_info_recursion_level_0)),
    ((MR_Box) (&report__report__type_ctor_info_recursion_level_report_0))
  },
};

static /* final */ const MR_Box recursion_patterns_scalar_common_7[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&recursion_patterns__recursion_patterns__type_ctor_info_recursion_error_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&report__report__type_ctor_info_recursion_type_simple_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&report__report__type_ctor_info_recursion_level_report_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};



#include "array.mh"
#include "io.mh"
#include "profile.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct2 recursion_patterns__pair__pti_pair_2__plain_profile__type_ctor_info_call_site_static_ptr_0__plain_profile__type_ctor_info_call_site_array_slot_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_static_ptr_0,
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_array_slot_0
  }
};

static const MR_FA_TypeInfo_Struct1 recursion_patterns__analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0 = {
  &analysis_utils__analysis_utils__type_ctor_info_cost_and_callees_1,
  {
    (MR_TypeInfo) &analysis_utils__analysis_utils__type_ctor_info_callee_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 recursion_patterns__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0,
    (MR_PseudoTypeInfo) &recursion_patterns__analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 recursion_patterns__tree234__pti_tree234_2__plain_report__type_ctor_info_recursion_type_simple_0__plain_recursion_patterns__type_ctor_info_recursion_type_raw_freq_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &report__report__type_ctor_info_recursion_type_simple_0,
    (MR_PseudoTypeInfo) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_type_raw_freq_data_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 recursion_patterns__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_recursion_patterns__type_ctor_info_recursion_level_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_level_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 recursion_patterns__maybe__pti_maybe_1__plain_recursion_patterns__type_ctor_info_first_proc_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &recursion_patterns__recursion_patterns__type_ctor_info_first_proc_info_0
  }
};

static const MR_PseudoTypeInfo recursion_patterns__recursion_patterns__field_types_first_proc_info_0_0[2] = {
  (MR_PseudoTypeInfo) &report__report__type_ctor_info_proc_desc_0,
  (MR_PseudoTypeInfo) &recursion_patterns__recursion_patterns__type_ctor_info_own_and_inherit_prof_info_0
};

static const MR_ConstString recursion_patterns__recursion_patterns__field_names_first_proc_info_0_0[2] = {
  (MR_String) "fpi_pdesc",
  (MR_String) "fpi_prof_info"
};

static const MR_DuFunctorDesc recursion_patterns__recursion_patterns__du_functor_desc_first_proc_info_0_0 = {
  (MR_String) "first_proc_info",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  recursion_patterns__recursion_patterns__field_types_first_proc_info_0_0,
  recursion_patterns__recursion_patterns__field_names_first_proc_info_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr recursion_patterns__recursion_patterns__du_stag_ordered_first_proc_info_0_0[1] = {
  &recursion_patterns__recursion_patterns__du_functor_desc_first_proc_info_0_0
};

static const MR_DuPtagLayout recursion_patterns__recursion_patterns__du_ptag_ordered_first_proc_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    recursion_patterns__recursion_patterns__du_stag_ordered_first_proc_info_0_0
  }
};

static const MR_DuFunctorDescPtr recursion_patterns__recursion_patterns__du_name_ordered_first_proc_info_0[1] = {
  &recursion_patterns__recursion_patterns__du_functor_desc_first_proc_info_0_0
};

static const MR_Integer recursion_patterns__recursion_patterns__functor_number_map_first_proc_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct recursion_patterns__recursion_patterns__type_ctor_info_first_proc_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (recursion_patterns____Unify____first_proc_info_0_0_10001)),
  ((MR_Box) (recursion_patterns____Compare____first_proc_info_0_0_10001)),
  (MR_String) "recursion_patterns",
  (MR_String) "first_proc_info",
  {     recursion_patterns__recursion_patterns__du_name_ordered_first_proc_info_0 },
  {     recursion_patterns__recursion_patterns__du_ptag_ordered_first_proc_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  recursion_patterns__recursion_patterns__functor_number_map_first_proc_info_0
};

static const MR_PseudoTypeInfo recursion_patterns__recursion_patterns__field_types_own_and_inherit_prof_info_0_0[2] = {
  (MR_PseudoTypeInfo) &measurements__measurements__type_ctor_info_own_prof_info_0,
  (MR_PseudoTypeInfo) &measurements__measurements__type_ctor_info_inherit_prof_info_0
};

static const MR_ConstString recursion_patterns__recursion_patterns__field_names_own_and_inherit_prof_info_0_0[2] = {
  (MR_String) "oai_own",
  (MR_String) "oai_inherit"
};

static const MR_DuFunctorDesc recursion_patterns__recursion_patterns__du_functor_desc_own_and_inherit_prof_info_0_0 = {
  (MR_String) "own_and_inherit_prof_info",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  recursion_patterns__recursion_patterns__field_types_own_and_inherit_prof_info_0_0,
  recursion_patterns__recursion_patterns__field_names_own_and_inherit_prof_info_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr recursion_patterns__recursion_patterns__du_stag_ordered_own_and_inherit_prof_info_0_0[1] = {
  &recursion_patterns__recursion_patterns__du_functor_desc_own_and_inherit_prof_info_0_0
};

static const MR_DuPtagLayout recursion_patterns__recursion_patterns__du_ptag_ordered_own_and_inherit_prof_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    recursion_patterns__recursion_patterns__du_stag_ordered_own_and_inherit_prof_info_0_0
  }
};

static const MR_DuFunctorDescPtr recursion_patterns__recursion_patterns__du_name_ordered_own_and_inherit_prof_info_0[1] = {
  &recursion_patterns__recursion_patterns__du_functor_desc_own_and_inherit_prof_info_0_0
};

static const MR_Integer recursion_patterns__recursion_patterns__functor_number_map_own_and_inherit_prof_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct recursion_patterns__recursion_patterns__type_ctor_info_own_and_inherit_prof_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (recursion_patterns____Unify____own_and_inherit_prof_info_0_0_10001)),
  ((MR_Box) (recursion_patterns____Compare____own_and_inherit_prof_info_0_0_10001)),
  (MR_String) "recursion_patterns",
  (MR_String) "own_and_inherit_prof_info",
  {     recursion_patterns__recursion_patterns__du_name_ordered_own_and_inherit_prof_info_0 },
  {     recursion_patterns__recursion_patterns__du_ptag_ordered_own_and_inherit_prof_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  recursion_patterns__recursion_patterns__functor_number_map_own_and_inherit_prof_info_0
};

static const MR_FA_TypeInfo_Struct2 recursion_patterns__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0,
    (MR_TypeInfo) &recursion_patterns__analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0
  }
};

static const MR_FA_TypeInfo_Struct1 recursion_patterns__mdbcomp__goal_path__ti_goal_attr_array_1coverage__type_ctor_info_coverage_info_0 = {
  &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_attr_array_1,
  {
    (MR_TypeInfo) &coverage__coverage__type_ctor_info_coverage_info_0
  }
};

static const MR_PseudoTypeInfo recursion_patterns__recursion_patterns__field_types_recursion_analysis_info_0_0[3] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_clique_ptr_0,
  (MR_PseudoTypeInfo) &recursion_patterns__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0,
  (MR_PseudoTypeInfo) &recursion_patterns__mdbcomp__goal_path__ti_goal_attr_array_1coverage__type_ctor_info_coverage_info_0
};

static const MR_ConstString recursion_patterns__recursion_patterns__field_names_recursion_analysis_info_0_0[3] = {
  (MR_String) "rai_this_clique",
  (MR_String) "rai_call_sites",
  (MR_String) "rai_coverage_info"
};

static const MR_DuFunctorDesc recursion_patterns__recursion_patterns__du_functor_desc_recursion_analysis_info_0_0 = {
  (MR_String) "recursion_analysis_info",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  recursion_patterns__recursion_patterns__field_types_recursion_analysis_info_0_0,
  recursion_patterns__recursion_patterns__field_names_recursion_analysis_info_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr recursion_patterns__recursion_patterns__du_stag_ordered_recursion_analysis_info_0_0[1] = {
  &recursion_patterns__recursion_patterns__du_functor_desc_recursion_analysis_info_0_0
};

static const MR_DuPtagLayout recursion_patterns__recursion_patterns__du_ptag_ordered_recursion_analysis_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    recursion_patterns__recursion_patterns__du_stag_ordered_recursion_analysis_info_0_0
  }
};

static const MR_DuFunctorDescPtr recursion_patterns__recursion_patterns__du_name_ordered_recursion_analysis_info_0[1] = {
  &recursion_patterns__recursion_patterns__du_functor_desc_recursion_analysis_info_0_0
};

static const MR_Integer recursion_patterns__recursion_patterns__functor_number_map_recursion_analysis_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct recursion_patterns__recursion_patterns__type_ctor_info_recursion_analysis_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (recursion_patterns____Unify____recursion_analysis_info_0_0_10001)),
  ((MR_Box) (recursion_patterns____Compare____recursion_analysis_info_0_0_10001)),
  (MR_String) "recursion_patterns",
  (MR_String) "recursion_analysis_info",
  {     recursion_patterns__recursion_patterns__du_name_ordered_recursion_analysis_info_0 },
  {     recursion_patterns__recursion_patterns__du_ptag_ordered_recursion_analysis_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  recursion_patterns__recursion_patterns__functor_number_map_recursion_analysis_info_0
};

static const MR_DuFunctorDesc recursion_patterns__recursion_patterns__du_functor_desc_recursion_data_0_0 = {
  (MR_String) "no_recursion_data_dead_proc",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_FA_TypeInfo_Struct2 recursion_patterns__pair__ti_pair_2builtin__type_ctor_info_int_0recursion_patterns__type_ctor_info_recursion_level_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_level_0
  }
};

static const MR_FA_TypeInfo_Struct1 recursion_patterns__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0recursion_patterns__type_ctor_info_recursion_level_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &recursion_patterns__pair__ti_pair_2builtin__type_ctor_info_int_0recursion_patterns__type_ctor_info_recursion_level_0
  }
};

static const MR_FA_TypeInfo_Struct1 recursion_patterns__set_ordlist__ti_set_ordlist_1recursion_patterns__type_ctor_info_recursion_error_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_error_0
  }
};

static const MR_PseudoTypeInfo recursion_patterns__recursion_patterns__field_types_recursion_data_0_1[3] = {
  (MR_PseudoTypeInfo) &recursion_patterns__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0recursion_patterns__type_ctor_info_recursion_level_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &recursion_patterns__set_ordlist__ti_set_ordlist_1recursion_patterns__type_ctor_info_recursion_error_0
};

static const MR_ConstString recursion_patterns__recursion_patterns__field_names_recursion_data_0_1[3] = {
  (MR_String) "rd_recursions",
  (MR_String) "rd_maximum",
  (MR_String) "rd_errors"
};

static const MR_DuFunctorDesc recursion_patterns__recursion_patterns__du_functor_desc_recursion_data_0_1 = {
  (MR_String) "recursion_data",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  recursion_patterns__recursion_patterns__field_types_recursion_data_0_1,
  recursion_patterns__recursion_patterns__field_names_recursion_data_0_1,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr recursion_patterns__recursion_patterns__du_stag_ordered_recursion_data_0_0[1] = {
  &recursion_patterns__recursion_patterns__du_functor_desc_recursion_data_0_0
};

static const MR_DuFunctorDescPtr recursion_patterns__recursion_patterns__du_stag_ordered_recursion_data_0_1[1] = {
  &recursion_patterns__recursion_patterns__du_functor_desc_recursion_data_0_1
};

static const MR_DuPtagLayout recursion_patterns__recursion_patterns__du_ptag_ordered_recursion_data_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    recursion_patterns__recursion_patterns__du_stag_ordered_recursion_data_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    recursion_patterns__recursion_patterns__du_stag_ordered_recursion_data_0_1
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
  (MR_Integer) 16,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (recursion_patterns____Unify____recursion_data_0_0_10001)),
  ((MR_Box) (recursion_patterns____Compare____recursion_data_0_0_10001)),
  (MR_String) "recursion_patterns",
  (MR_String) "recursion_data",
  {     recursion_patterns__recursion_patterns__du_name_ordered_recursion_data_0 },
  {     recursion_patterns__recursion_patterns__du_ptag_ordered_recursion_data_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  recursion_patterns__recursion_patterns__functor_number_map_recursion_data_0
};

static const MR_Integer recursion_patterns__recursion_patterns__functor_number_map_recursion_error_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc recursion_patterns__recursion_patterns__notag_functor_desc_recursion_error_0 = {
  (MR_String) "re_unhandled_determinism",
  (MR_PseudoTypeInfo) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_detism_rep_0,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct recursion_patterns__recursion_patterns__type_ctor_info_recursion_error_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (recursion_patterns____Unify____recursion_error_0_0_10001)),
  ((MR_Box) (recursion_patterns____Compare____recursion_error_0_0_10001)),
  (MR_String) "recursion_patterns",
  (MR_String) "recursion_error",
  {     &recursion_patterns__recursion_patterns__notag_functor_desc_recursion_error_0 },
  {     &recursion_patterns__recursion_patterns__notag_functor_desc_recursion_error_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  recursion_patterns__recursion_patterns__functor_number_map_recursion_error_0
};

static const MR_PseudoTypeInfo recursion_patterns__recursion_patterns__field_types_recursion_level_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
};

static const MR_ConstString recursion_patterns__recursion_patterns__field_names_recursion_level_0_0[2] = {
  (MR_String) "rl_cost",
  (MR_String) "rl_probability"
};

static const MR_DuFunctorDesc recursion_patterns__recursion_patterns__du_functor_desc_recursion_level_0_0 = {
  (MR_String) "recursion_level",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  recursion_patterns__recursion_patterns__field_types_recursion_level_0_0,
  recursion_patterns__recursion_patterns__field_names_recursion_level_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr recursion_patterns__recursion_patterns__du_stag_ordered_recursion_level_0_0[1] = {
  &recursion_patterns__recursion_patterns__du_functor_desc_recursion_level_0_0
};

static const MR_DuPtagLayout recursion_patterns__recursion_patterns__du_ptag_ordered_recursion_level_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    recursion_patterns__recursion_patterns__du_stag_ordered_recursion_level_0_0
  }
};

static const MR_DuFunctorDescPtr recursion_patterns__recursion_patterns__du_name_ordered_recursion_level_0[1] = {
  &recursion_patterns__recursion_patterns__du_functor_desc_recursion_level_0_0
};

static const MR_Integer recursion_patterns__recursion_patterns__functor_number_map_recursion_level_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct recursion_patterns__recursion_patterns__type_ctor_info_recursion_level_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (recursion_patterns____Unify____recursion_level_0_0_10001)),
  ((MR_Box) (recursion_patterns____Compare____recursion_level_0_0_10001)),
  (MR_String) "recursion_patterns",
  (MR_String) "recursion_level",
  {     recursion_patterns__recursion_patterns__du_name_ordered_recursion_level_0 },
  {     recursion_patterns__recursion_patterns__du_ptag_ordered_recursion_level_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  recursion_patterns__recursion_patterns__functor_number_map_recursion_level_0
};

static const MR_FA_TypeInfo_Struct1 recursion_patterns__maybe__ti_maybe_1recursion_patterns__type_ctor_info_own_and_inherit_prof_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &recursion_patterns__recursion_patterns__type_ctor_info_own_and_inherit_prof_info_0
  }
};

static const MR_FA_TypeInfo_Struct2 recursion_patterns__tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0recursion_patterns__type_ctor_info_recursion_type_raw_proc_freq_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0,
    (MR_TypeInfo) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_type_raw_proc_freq_data_0
  }
};

static const MR_PseudoTypeInfo recursion_patterns__recursion_patterns__field_types_recursion_type_raw_freq_data_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &recursion_patterns__maybe__ti_maybe_1recursion_patterns__type_ctor_info_own_and_inherit_prof_info_0,
  (MR_PseudoTypeInfo) &recursion_patterns__tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0recursion_patterns__type_ctor_info_recursion_type_raw_proc_freq_data_0
};

static const MR_ConstString recursion_patterns__recursion_patterns__field_names_recursion_type_raw_freq_data_0_0[3] = {
  (MR_String) "rtrfd_freq",
  (MR_String) "rtrfd_maybe_prof_info",
  (MR_String) "rtrfd_entry_procs"
};

static const MR_DuFunctorDesc recursion_patterns__recursion_patterns__du_functor_desc_recursion_type_raw_freq_data_0_0 = {
  (MR_String) "recursion_type_raw_freq_data",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  recursion_patterns__recursion_patterns__field_types_recursion_type_raw_freq_data_0_0,
  recursion_patterns__recursion_patterns__field_names_recursion_type_raw_freq_data_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr recursion_patterns__recursion_patterns__du_stag_ordered_recursion_type_raw_freq_data_0_0[1] = {
  &recursion_patterns__recursion_patterns__du_functor_desc_recursion_type_raw_freq_data_0_0
};

static const MR_DuPtagLayout recursion_patterns__recursion_patterns__du_ptag_ordered_recursion_type_raw_freq_data_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    recursion_patterns__recursion_patterns__du_stag_ordered_recursion_type_raw_freq_data_0_0
  }
};

static const MR_DuFunctorDescPtr recursion_patterns__recursion_patterns__du_name_ordered_recursion_type_raw_freq_data_0[1] = {
  &recursion_patterns__recursion_patterns__du_functor_desc_recursion_type_raw_freq_data_0_0
};

static const MR_Integer recursion_patterns__recursion_patterns__functor_number_map_recursion_type_raw_freq_data_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct recursion_patterns__recursion_patterns__type_ctor_info_recursion_type_raw_freq_data_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (recursion_patterns____Unify____recursion_type_raw_freq_data_0_0_10001)),
  ((MR_Box) (recursion_patterns____Compare____recursion_type_raw_freq_data_0_0_10001)),
  (MR_String) "recursion_patterns",
  (MR_String) "recursion_type_raw_freq_data",
  {     recursion_patterns__recursion_patterns__du_name_ordered_recursion_type_raw_freq_data_0 },
  {     recursion_patterns__recursion_patterns__du_ptag_ordered_recursion_type_raw_freq_data_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  recursion_patterns__recursion_patterns__functor_number_map_recursion_type_raw_freq_data_0
};

static const MR_PseudoTypeInfo recursion_patterns__recursion_patterns__field_types_recursion_type_raw_proc_freq_data_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &recursion_patterns__recursion_patterns__type_ctor_info_own_and_inherit_prof_info_0,
  (MR_PseudoTypeInfo) &report__report__type_ctor_info_proc_desc_0
};

static const MR_ConstString recursion_patterns__recursion_patterns__field_names_recursion_type_raw_proc_freq_data_0_0[3] = {
  (MR_String) "rtrpfd_freq",
  (MR_String) "rtrpfd_prof_info",
  (MR_String) "rtrpfd_proc_desc"
};

static const MR_DuFunctorDesc recursion_patterns__recursion_patterns__du_functor_desc_recursion_type_raw_proc_freq_data_0_0 = {
  (MR_String) "recursion_type_raw_proc_freq_data",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  recursion_patterns__recursion_patterns__field_types_recursion_type_raw_proc_freq_data_0_0,
  recursion_patterns__recursion_patterns__field_names_recursion_type_raw_proc_freq_data_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr recursion_patterns__recursion_patterns__du_stag_ordered_recursion_type_raw_proc_freq_data_0_0[1] = {
  &recursion_patterns__recursion_patterns__du_functor_desc_recursion_type_raw_proc_freq_data_0_0
};

static const MR_DuPtagLayout recursion_patterns__recursion_patterns__du_ptag_ordered_recursion_type_raw_proc_freq_data_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    recursion_patterns__recursion_patterns__du_stag_ordered_recursion_type_raw_proc_freq_data_0_0
  }
};

static const MR_DuFunctorDescPtr recursion_patterns__recursion_patterns__du_name_ordered_recursion_type_raw_proc_freq_data_0[1] = {
  &recursion_patterns__recursion_patterns__du_functor_desc_recursion_type_raw_proc_freq_data_0_0
};

static const MR_Integer recursion_patterns__recursion_patterns__functor_number_map_recursion_type_raw_proc_freq_data_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct recursion_patterns__recursion_patterns__type_ctor_info_recursion_type_raw_proc_freq_data_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (recursion_patterns____Unify____recursion_type_raw_proc_freq_data_0_0_10001)),
  ((MR_Box) (recursion_patterns____Compare____recursion_type_raw_proc_freq_data_0_0_10001)),
  (MR_String) "recursion_patterns",
  (MR_String) "recursion_type_raw_proc_freq_data",
  {     recursion_patterns__recursion_patterns__du_name_ordered_recursion_type_raw_proc_freq_data_0 },
  {     recursion_patterns__recursion_patterns__du_ptag_ordered_recursion_type_raw_proc_freq_data_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  recursion_patterns__recursion_patterns__functor_number_map_recursion_type_raw_proc_freq_data_0
};

static MR_bool MR_CALL 
recursion_patterns____Unify____first_proc_info_0_0_10001(
  MR_Box recursion_patterns__wrapper_arg_1,
  MR_Box recursion_patterns__wrapper_arg_2)
{
  {
    MR_bool recursion_patterns__succeeded;

    {
      recursion_patterns__succeeded = recursion_patterns____Unify____first_proc_info_0_0(((MR_Word) recursion_patterns__wrapper_arg_1), ((MR_Word) recursion_patterns__wrapper_arg_2));
    }
    return recursion_patterns__succeeded;
  }
}

static void MR_CALL 
recursion_patterns____Compare____first_proc_info_0_0_10001(
  MR_Box * recursion_patterns__wrapper_arg_1,
  MR_Box recursion_patterns__wrapper_arg_2,
  MR_Box recursion_patterns__wrapper_arg_3)
{
  {
    MR_Word recursion_patterns__conv0_HeadVar__1_1;

    {
      recursion_patterns____Compare____first_proc_info_0_0(&recursion_patterns__conv0_HeadVar__1_1, ((MR_Word) recursion_patterns__wrapper_arg_2), ((MR_Word) recursion_patterns__wrapper_arg_3));
    }
    *recursion_patterns__wrapper_arg_1 = ((MR_Box) (recursion_patterns__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
recursion_patterns____Unify____own_and_inherit_prof_info_0_0_10001(
  MR_Box recursion_patterns__wrapper_arg_1,
  MR_Box recursion_patterns__wrapper_arg_2)
{
  {
    MR_bool recursion_patterns__succeeded;

    {
      recursion_patterns__succeeded = recursion_patterns____Unify____own_and_inherit_prof_info_0_0(((MR_Word) recursion_patterns__wrapper_arg_1), ((MR_Word) recursion_patterns__wrapper_arg_2));
    }
    return recursion_patterns__succeeded;
  }
}

static void MR_CALL 
recursion_patterns____Compare____own_and_inherit_prof_info_0_0_10001(
  MR_Box * recursion_patterns__wrapper_arg_1,
  MR_Box recursion_patterns__wrapper_arg_2,
  MR_Box recursion_patterns__wrapper_arg_3)
{
  {
    MR_Word recursion_patterns__conv0_HeadVar__1_1;

    {
      recursion_patterns____Compare____own_and_inherit_prof_info_0_0(&recursion_patterns__conv0_HeadVar__1_1, ((MR_Word) recursion_patterns__wrapper_arg_2), ((MR_Word) recursion_patterns__wrapper_arg_3));
    }
    *recursion_patterns__wrapper_arg_1 = ((MR_Box) (recursion_patterns__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
recursion_patterns____Unify____recursion_analysis_info_0_0_10001(
  MR_Box recursion_patterns__wrapper_arg_1,
  MR_Box recursion_patterns__wrapper_arg_2)
{
  {
    MR_bool recursion_patterns__succeeded;

    {
      recursion_patterns__succeeded = recursion_patterns____Unify____recursion_analysis_info_0_0(((MR_Word) recursion_patterns__wrapper_arg_1), ((MR_Word) recursion_patterns__wrapper_arg_2));
    }
    return recursion_patterns__succeeded;
  }
}

static void MR_CALL 
recursion_patterns____Compare____recursion_analysis_info_0_0_10001(
  MR_Box * recursion_patterns__wrapper_arg_1,
  MR_Box recursion_patterns__wrapper_arg_2,
  MR_Box recursion_patterns__wrapper_arg_3)
{
  {
    MR_Word recursion_patterns__conv0_HeadVar__1_1;

    {
      recursion_patterns____Compare____recursion_analysis_info_0_0(&recursion_patterns__conv0_HeadVar__1_1, ((MR_Word) recursion_patterns__wrapper_arg_2), ((MR_Word) recursion_patterns__wrapper_arg_3));
    }
    *recursion_patterns__wrapper_arg_1 = ((MR_Box) (recursion_patterns__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
recursion_patterns____Unify____recursion_data_0_0_10001(
  MR_Box recursion_patterns__wrapper_arg_1,
  MR_Box recursion_patterns__wrapper_arg_2)
{
  {
    MR_bool recursion_patterns__succeeded;

    {
      recursion_patterns__succeeded = recursion_patterns____Unify____recursion_data_0_0(((MR_Word) recursion_patterns__wrapper_arg_1), ((MR_Word) recursion_patterns__wrapper_arg_2));
    }
    return recursion_patterns__succeeded;
  }
}

static void MR_CALL 
recursion_patterns____Compare____recursion_data_0_0_10001(
  MR_Box * recursion_patterns__wrapper_arg_1,
  MR_Box recursion_patterns__wrapper_arg_2,
  MR_Box recursion_patterns__wrapper_arg_3)
{
  {
    MR_Word recursion_patterns__conv0_HeadVar__1_1;

    {
      recursion_patterns____Compare____recursion_data_0_0(&recursion_patterns__conv0_HeadVar__1_1, ((MR_Word) recursion_patterns__wrapper_arg_2), ((MR_Word) recursion_patterns__wrapper_arg_3));
    }
    *recursion_patterns__wrapper_arg_1 = ((MR_Box) (recursion_patterns__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
recursion_patterns____Unify____recursion_error_0_0_10001(
  MR_Box recursion_patterns__wrapper_arg_1,
  MR_Box recursion_patterns__wrapper_arg_2)
{
  {
    MR_bool recursion_patterns__succeeded;

    {
      recursion_patterns__succeeded = recursion_patterns____Unify____recursion_error_0_0(((MR_Word) recursion_patterns__wrapper_arg_1), ((MR_Word) recursion_patterns__wrapper_arg_2));
    }
    return recursion_patterns__succeeded;
  }
}

static void MR_CALL 
recursion_patterns____Compare____recursion_error_0_0_10001(
  MR_Box * recursion_patterns__wrapper_arg_1,
  MR_Box recursion_patterns__wrapper_arg_2,
  MR_Box recursion_patterns__wrapper_arg_3)
{
  {
    MR_Word recursion_patterns__conv0_HeadVar__1_1;

    {
      recursion_patterns____Compare____recursion_error_0_0(&recursion_patterns__conv0_HeadVar__1_1, ((MR_Word) recursion_patterns__wrapper_arg_2), ((MR_Word) recursion_patterns__wrapper_arg_3));
    }
    *recursion_patterns__wrapper_arg_1 = ((MR_Box) (recursion_patterns__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
recursion_patterns____Unify____recursion_level_0_0_10001(
  MR_Box recursion_patterns__wrapper_arg_1,
  MR_Box recursion_patterns__wrapper_arg_2)
{
  {
    MR_bool recursion_patterns__succeeded;

    {
      recursion_patterns__succeeded = recursion_patterns____Unify____recursion_level_0_0(((MR_Word) recursion_patterns__wrapper_arg_1), ((MR_Word) recursion_patterns__wrapper_arg_2));
    }
    return recursion_patterns__succeeded;
  }
}

static void MR_CALL 
recursion_patterns____Compare____recursion_level_0_0_10001(
  MR_Box * recursion_patterns__wrapper_arg_1,
  MR_Box recursion_patterns__wrapper_arg_2,
  MR_Box recursion_patterns__wrapper_arg_3)
{
  {
    MR_Word recursion_patterns__conv0_HeadVar__1_1;

    {
      recursion_patterns____Compare____recursion_level_0_0(&recursion_patterns__conv0_HeadVar__1_1, ((MR_Word) recursion_patterns__wrapper_arg_2), ((MR_Word) recursion_patterns__wrapper_arg_3));
    }
    *recursion_patterns__wrapper_arg_1 = ((MR_Box) (recursion_patterns__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
recursion_patterns____Unify____recursion_type_raw_freq_data_0_0_10001(
  MR_Box recursion_patterns__wrapper_arg_1,
  MR_Box recursion_patterns__wrapper_arg_2)
{
  {
    MR_bool recursion_patterns__succeeded;

    {
      recursion_patterns__succeeded = recursion_patterns____Unify____recursion_type_raw_freq_data_0_0(((MR_Word) recursion_patterns__wrapper_arg_1), ((MR_Word) recursion_patterns__wrapper_arg_2));
    }
    return recursion_patterns__succeeded;
  }
}

static void MR_CALL 
recursion_patterns____Compare____recursion_type_raw_freq_data_0_0_10001(
  MR_Box * recursion_patterns__wrapper_arg_1,
  MR_Box recursion_patterns__wrapper_arg_2,
  MR_Box recursion_patterns__wrapper_arg_3)
{
  {
    MR_Word recursion_patterns__conv0_HeadVar__1_1;

    {
      recursion_patterns____Compare____recursion_type_raw_freq_data_0_0(&recursion_patterns__conv0_HeadVar__1_1, ((MR_Word) recursion_patterns__wrapper_arg_2), ((MR_Word) recursion_patterns__wrapper_arg_3));
    }
    *recursion_patterns__wrapper_arg_1 = ((MR_Box) (recursion_patterns__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
recursion_patterns____Unify____recursion_type_raw_proc_freq_data_0_0_10001(
  MR_Box recursion_patterns__wrapper_arg_1,
  MR_Box recursion_patterns__wrapper_arg_2)
{
  {
    MR_bool recursion_patterns__succeeded;

    {
      recursion_patterns__succeeded = recursion_patterns____Unify____recursion_type_raw_proc_freq_data_0_0(((MR_Word) recursion_patterns__wrapper_arg_1), ((MR_Word) recursion_patterns__wrapper_arg_2));
    }
    return recursion_patterns__succeeded;
  }
}

static void MR_CALL 
recursion_patterns____Compare____recursion_type_raw_proc_freq_data_0_0_10001(
  MR_Box * recursion_patterns__wrapper_arg_1,
  MR_Box recursion_patterns__wrapper_arg_2,
  MR_Box recursion_patterns__wrapper_arg_3)
{
  {
    MR_Word recursion_patterns__conv0_HeadVar__1_1;

    {
      recursion_patterns____Compare____recursion_type_raw_proc_freq_data_0_0(&recursion_patterns__conv0_HeadVar__1_1, ((MR_Word) recursion_patterns__wrapper_arg_2), ((MR_Word) recursion_patterns__wrapper_arg_3));
    }
    *recursion_patterns__wrapper_arg_1 = ((MR_Box) (recursion_patterns__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
recursion_patterns__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_114_101_99_117_114_115_105_111_110_95_100_97_116_97_95_97_110_100_95_112_114_111_98_97_98_105_108_105_116_121_95_95_55_53_54_95_95_49_95_95_91_50_93_95_48_4_p_0(
  MR_Float recursion_patterns__Prob_1,
  MR_Word recursion_patterns__HeadVar__3_14,
  MR_Word * recursion_patterns__HeadVar__4_15)
{
  {
    MR_bool recursion_patterns__succeeded;
    MR_Float recursion_patterns__Cost_21 = MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__3_14, (MR_Integer) 0)));
    MR_Float recursion_patterns__Prob0_22 = MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__3_14, (MR_Integer) 1)));
    MR_Float recursion_patterns__Prob_23;

    {
      recursion_patterns__Prob_23 = measurement_units__and_2_f_0(recursion_patterns__Prob0_22, recursion_patterns__Prob_1);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *recursion_patterns__HeadVar__4_15 = base;
      MR_hl_field(MR_mktag(0), base, 0) = MR_box_float(recursion_patterns__Cost_21);
      MR_hl_field(MR_mktag(0), base, 1) = MR_box_float(recursion_patterns__Prob_23);
    }
  }
}

static void MR_CALL 
recursion_patterns__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_97_108_105_122_101_95_104_105_115_116_111_103_114_97_109_95_112_114_111_99_95_114_101_99_95_116_121_112_101_95_95_91_51_93_95_48_5_p_0(
  MR_Word recursion_patterns__Deep_6,
  MR_Float recursion_patterns__NumCliques_7,
  MR_Word recursion_patterns__HeadVar__4_4,
  MR_Word * recursion_patterns__HeadVar__5_5)
{
  {
    MR_bool recursion_patterns__succeeded;
    MR_Integer recursion_patterns__Freq_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__4_4, (MR_Integer) 0)));
    MR_Word recursion_patterns__ProfInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__4_4, (MR_Integer) 1)));
    MR_Word recursion_patterns__ProcDesc_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__4_4, (MR_Integer) 2)));
    MR_Word recursion_patterns__Percent_12;
    MR_Word recursion_patterns__Summary_13;
    MR_Word recursion_patterns__Own_14;
    MR_Word recursion_patterns__Inherit_15;
    MR_Float recursion_patterns__V_16_16;
    MR_Float recursion_patterns__V_17_17;

    {
      recursion_patterns__V_17_17 = mercury__float__float_1_f_0(recursion_patterns__Freq_9);
    }
    {
      recursion_patterns__V_16_16 = mercury__float__f_slash_2_f_0(recursion_patterns__V_17_17, recursion_patterns__NumCliques_7);
    }
    {
      recursion_patterns__Percent_12 = measurement_units__percent_1_f_0(recursion_patterns__V_16_16);
    }
    recursion_patterns__Own_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__ProfInfo_10, (MR_Integer) 0)));
    recursion_patterns__Inherit_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__ProfInfo_10, (MR_Integer) 1)));
    {
      create_report__own_and_inherit_to_perf_row_data_5_p_0((MR_Word) &report__report__type_ctor_info_proc_desc_0, recursion_patterns__Deep_6, ((MR_Box) (recursion_patterns__ProcDesc_11)), recursion_patterns__Own_14, recursion_patterns__Inherit_15, &recursion_patterns__Summary_13);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *recursion_patterns__HeadVar__5_5 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (recursion_patterns__Freq_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (recursion_patterns__Percent_12));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (recursion_patterns__Summary_13));
    }
  }
}

static void MR_CALL 
recursion_patterns__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_97_108_105_122_101_95_104_105_115_116_111_103_114_97_109_95_114_101_99_95_116_121_112_101_95_95_91_51_93_95_48_5_p_0_1(
  MR_Box recursion_patterns__closure_arg,
  MR_Box recursion_patterns__wrapper_arg_1,
  MR_Box recursion_patterns__wrapper_arg_2,
  MR_Box * recursion_patterns__wrapper_arg_3)
{
  {
    MR_Box recursion_patterns__closure = recursion_patterns__closure_arg;
    MR_Word recursion_patterns__conv0_HeadVar__5_5;

    {
      recursion_patterns__finalize_histogram_proc_rec_type_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__closure, (MR_Integer) 3))), MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__closure, (MR_Integer) 4))), ((MR_Word) recursion_patterns__wrapper_arg_1), ((MR_Word) recursion_patterns__wrapper_arg_2), &recursion_patterns__conv0_HeadVar__5_5);
    }
    *recursion_patterns__wrapper_arg_3 = ((MR_Box) (recursion_patterns__conv0_HeadVar__5_5));
  }
}

static void MR_CALL 
recursion_patterns__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_97_108_105_122_101_95_104_105_115_116_111_103_114_97_109_95_114_101_99_95_116_121_112_101_95_95_91_51_93_95_48_5_p_0(
  MR_Word recursion_patterns__Deep_6,
  MR_Float recursion_patterns__NumCliques_7,
  MR_Word recursion_patterns__HeadVar__4_4,
  MR_Word * recursion_patterns__HeadVar__5_5)
{
  {
    MR_bool recursion_patterns__succeeded;
    MR_Integer recursion_patterns__Freq_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__4_4, (MR_Integer) 0)));
    MR_Word recursion_patterns__MaybeProfInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__4_4, (MR_Integer) 1)));
    MR_Word recursion_patterns__Percent_12;
    MR_Word recursion_patterns__MaybeSummary_13;
    MR_Word recursion_patterns__STATE_VARIABLE_EntryProcs_0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__4_4, (MR_Integer) 2)));
    MR_Word recursion_patterns__STATE_VARIABLE_EntryProcs_19;
    MR_Float recursion_patterns__V_20_20;
    MR_Float recursion_patterns__V_21_21;
    MR_Word recursion_patterns__V_23_23;

    {
      recursion_patterns__V_21_21 = mercury__float__float_1_f_0(recursion_patterns__Freq_9);
    }
    {
      recursion_patterns__V_20_20 = mercury__float__f_slash_2_f_0(recursion_patterns__V_21_21, recursion_patterns__NumCliques_7);
    }
    {
      recursion_patterns__Percent_12 = measurement_units__percent_1_f_0(recursion_patterns__V_20_20);
    }
    if ((recursion_patterns__MaybeProfInfo_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      recursion_patterns__MaybeSummary_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word recursion_patterns__ProfInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__MaybeProfInfo_10, (MR_Integer) 0)));
        MR_Word recursion_patterns__Own_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__ProfInfo_14, (MR_Integer) 0)));
        MR_Word recursion_patterns__Inherit_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__ProfInfo_14, (MR_Integer) 1)));
        MR_Word recursion_patterns__Summary_17;

        mercury__private_builtin__dummy_var = (MR_Integer) 0;
        {
          create_report__own_and_inherit_to_perf_row_data_5_p_0((MR_Word) &mercury__unit__unit__type_ctor_info_unit_0, recursion_patterns__Deep_6, ((MR_Box) ((MR_Integer) 0)), recursion_patterns__Own_15, recursion_patterns__Inherit_16, &recursion_patterns__Summary_17);
        }
        {
          recursion_patterns__MaybeSummary_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), recursion_patterns__MaybeSummary_13, 0) = ((MR_Box) (recursion_patterns__Summary_17));
        }
      }
    {
      recursion_patterns__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), recursion_patterns__V_23_23, 0) = ((MR_Box) (&recursion_patterns_scalar_common_5[2]));
      MR_hl_field(MR_mktag(0), recursion_patterns__V_23_23, 1) = ((MR_Box) (recursion_patterns__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_97_108_105_122_101_95_104_105_115_116_111_103_114_97_109_95_114_101_99_95_116_121_112_101_95_95_91_51_93_95_48_5_p_0_1));
      MR_hl_field(MR_mktag(0), recursion_patterns__V_23_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), recursion_patterns__V_23_23, 3) = ((MR_Box) (recursion_patterns__Deep_6));
      MR_hl_field(MR_mktag(0), recursion_patterns__V_23_23, 4) = MR_box_float(recursion_patterns__NumCliques_7);
    }
    {
      mercury__map__map_values_3_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_type_raw_proc_freq_data_0, (MR_Word) &report__report__type_ctor_info_recursion_type_proc_freq_data_0, recursion_patterns__V_23_23, recursion_patterns__STATE_VARIABLE_EntryProcs_0_18, &recursion_patterns__STATE_VARIABLE_EntryProcs_19);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *recursion_patterns__HeadVar__5_5 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (recursion_patterns__Freq_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (recursion_patterns__Percent_12));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (recursion_patterns__MaybeSummary_13));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (recursion_patterns__STATE_VARIABLE_EntryProcs_19));
    }
  }
}

static void MR_CALL 
recursion_patterns__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_95_116_121_112_101_115_95_102_114_101_113_95_98_117_105_108_100_95_104_105_115_116_111_103_114_97_109_95_95_91_50_93_95_48_5_p_0_1(
  MR_Box recursion_patterns__closure_arg,
  MR_Box recursion_patterns__wrapper_arg_1,
  MR_Box recursion_patterns__wrapper_arg_2,
  MR_Box * recursion_patterns__wrapper_arg_3)
{
  {
    MR_Box recursion_patterns__closure = recursion_patterns__closure_arg;
    MR_Word recursion_patterns__conv0_STATE_VARIABLE_Histogram_20;

    {
      recursion_patterns__update_histogram_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__closure, (MR_Integer) 3))), ((MR_Word) recursion_patterns__wrapper_arg_1), ((MR_Word) recursion_patterns__wrapper_arg_2), &recursion_patterns__conv0_STATE_VARIABLE_Histogram_20);
    }
    *recursion_patterns__wrapper_arg_3 = ((MR_Box) (recursion_patterns__conv0_STATE_VARIABLE_Histogram_20));
  }
}

static void MR_CALL 
recursion_patterns__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_95_116_121_112_101_115_95_102_114_101_113_95_98_117_105_108_100_95_104_105_115_116_111_103_114_97_109_95_95_91_50_93_95_48_5_p_0(
  MR_Word recursion_patterns__Deep_6,
  MR_Word recursion_patterns__CliquePtr_8,
  MR_Word recursion_patterns__STATE_VARIABLE_Histogram_0_27,
  MR_Word * recursion_patterns__STATE_VARIABLE_Histogram_28)
{
  {
    MR_bool recursion_patterns__succeeded;
    MR_Word recursion_patterns__MaybeCliqueRecursionReport_12;
    MR_Word recursion_patterns__SimpleTypes_15;
    MR_Word recursion_patterns__MaybeFirstPDPtr_17;
    MR_Word recursion_patterns__MaybeFirstProcInfo_26;
    MR_Word recursion_patterns__V_43_43;
    MR_Integer recursion_patterns__CliqueNum_11 = (MR_Integer) recursion_patterns__CliquePtr_8;
    MR_String recursion_patterns__V_141_141;
    MR_Word recursion_patterns___OtherPDPtrs_18;
    MR_Box recursion_patterns__conv1_STATE_VARIABLE_Histogram_28;

    {
      mercury__io__write_string_3_p_0((MR_String) "Analyzing clique: ");
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &recursion_patterns_scalar_common_3[2], recursion_patterns__CliqueNum_11, &recursion_patterns__V_141_141);
    }
    {
      mercury__io__write_string_3_p_0(recursion_patterns__V_141_141);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    {
      recursion_patterns__create_clique_recursion_costs_report_3_p_0(recursion_patterns__Deep_6, recursion_patterns__CliquePtr_8, &recursion_patterns__MaybeCliqueRecursionReport_12);
    }
    if (((MR_tag((MR_Word) recursion_patterns__MaybeCliqueRecursionReport_12)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_String recursion_patterns__Error_16 = ((MR_String) (MR_hl_field(MR_mktag(1), recursion_patterns__MaybeCliqueRecursionReport_12, (MR_Integer) 0)));
        MR_Word recursion_patterns__V_35_35;

        {
          recursion_patterns__V_35_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), recursion_patterns__V_35_35, 0) = ((MR_Box) (recursion_patterns__Error_16));
        }
        {
          recursion_patterns__SimpleTypes_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), recursion_patterns__SimpleTypes_15, 0) = ((MR_Box) (recursion_patterns__V_35_35));
          MR_hl_field(MR_mktag(1), recursion_patterns__SimpleTypes_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &recursion_patterns_scalar_common_2[6])));
        }
      }
    else
      {
        MR_Word recursion_patterns__CliqueRecursionReport_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__MaybeCliqueRecursionReport_12, (MR_Integer) 0)));
        MR_Word recursion_patterns__Type_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__CliqueRecursionReport_13, (MR_Integer) 1)));
        MR_Word recursion_patterns__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__CliqueRecursionReport_13, (MR_Integer) 0)));
        MR_Integer recursion_patterns__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recursion_patterns__CliqueRecursionReport_13, (MR_Integer) 2)));

        {
          recursion_patterns__recursion_type_to_simple_type_2_p_0(recursion_patterns__Type_14, &recursion_patterns__SimpleTypes_15);
        }
      }
    {
      analysis_utils__find_clique_first_and_other_procs_4_p_0(recursion_patterns__Deep_6, recursion_patterns__CliquePtr_8, &recursion_patterns__MaybeFirstPDPtr_17, &recursion_patterns___OtherPDPtrs_18);
    }
    if ((recursion_patterns__MaybeFirstPDPtr_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      recursion_patterns__MaybeFirstProcInfo_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word recursion_patterns__FirstPDPtr_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__MaybeFirstPDPtr_17, (MR_Integer) 0)));
        MR_Word recursion_patterns__FirstPD_20;
        MR_Word recursion_patterns__FirstPSPtr_21;
        MR_Word recursion_patterns__PDesc_22;
        MR_Word recursion_patterns__ProcOwn_23;
        MR_Word recursion_patterns__ProcInherit_24;
        MR_Word recursion_patterns__FirstProcInfo_25;
        MR_ArrayPtr recursion_patterns__V_39_39 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 6)));
        MR_ArrayPtr recursion_patterns__V_40_40;
        MR_ArrayPtr recursion_patterns__V_41_41;
        MR_Word recursion_patterns__V_42_42;
        MR_Word recursion_patterns__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 0)));
        MR_String recursion_patterns__V_48_48 = ((MR_String) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 1)));
        MR_String recursion_patterns__V_49_49 = ((MR_String) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 2)));
        MR_String recursion_patterns__V_50_50 = ((MR_String) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 3)));
        MR_Word recursion_patterns__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 4)));
        MR_ArrayPtr recursion_patterns__V_52_52 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 5)));
        MR_ArrayPtr recursion_patterns__V_53_53 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 7)));
        MR_ArrayPtr recursion_patterns__V_54_54 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 8)));
        MR_ArrayPtr recursion_patterns__V_55_55 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 9)));
        MR_ArrayPtr recursion_patterns__V_56_56 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 10)));
        MR_ArrayPtr recursion_patterns__V_57_57 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 11)));
        MR_ArrayPtr recursion_patterns__V_58_58 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 12)));
        MR_ArrayPtr recursion_patterns__V_59_59 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 13)));
        MR_ArrayPtr recursion_patterns__V_60_60 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 14)));
        MR_ArrayPtr recursion_patterns__V_61_61 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 15)));
        MR_ArrayPtr recursion_patterns__V_62_62 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 16)));
        MR_ArrayPtr recursion_patterns__V_63_63 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 17)));
        MR_ArrayPtr recursion_patterns__V_64_64 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 18)));
        MR_ArrayPtr recursion_patterns__V_65_65 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 19)));
        MR_ArrayPtr recursion_patterns__V_66_66 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 20)));
        MR_ArrayPtr recursion_patterns__V_67_67 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 21)));
        MR_ArrayPtr recursion_patterns__V_68_68 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 22)));
        MR_ArrayPtr recursion_patterns__V_69_69 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 23)));
        MR_ArrayPtr recursion_patterns__V_70_70 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 24)));
        MR_Word recursion_patterns__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 25)));
        MR_Word recursion_patterns__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 26)));
        MR_Word recursion_patterns__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 27)));
        MR_Word recursion_patterns__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 28)));
        MR_ArrayPtr recursion_patterns__V_75_75;
        MR_Word recursion_patterns__V_76_76;
        MR_Word recursion_patterns__V_77_77;
        MR_String recursion_patterns__V_78_78;
        MR_String recursion_patterns__V_79_79;
        MR_String recursion_patterns__V_80_80;
        MR_Word recursion_patterns__V_81_81;
        MR_ArrayPtr recursion_patterns__V_82_82;
        MR_ArrayPtr recursion_patterns__V_83_83;
        MR_ArrayPtr recursion_patterns__V_84_84;
        MR_ArrayPtr recursion_patterns__V_85_85;
        MR_ArrayPtr recursion_patterns__V_86_86;
        MR_ArrayPtr recursion_patterns__V_87_87;
        MR_ArrayPtr recursion_patterns__V_88_88;
        MR_ArrayPtr recursion_patterns__V_89_89;
        MR_ArrayPtr recursion_patterns__V_90_90;
        MR_ArrayPtr recursion_patterns__V_91_91;
        MR_ArrayPtr recursion_patterns__V_92_92;
        MR_ArrayPtr recursion_patterns__V_93_93;
        MR_ArrayPtr recursion_patterns__V_94_94;
        MR_ArrayPtr recursion_patterns__V_95_95;
        MR_ArrayPtr recursion_patterns__V_96_96;
        MR_ArrayPtr recursion_patterns__V_97_97;
        MR_ArrayPtr recursion_patterns__V_98_98;
        MR_ArrayPtr recursion_patterns__V_99_99;
        MR_ArrayPtr recursion_patterns__V_100_100;
        MR_Word recursion_patterns__V_101_101;
        MR_Word recursion_patterns__V_102_102;
        MR_Word recursion_patterns__V_103_103;
        MR_Word recursion_patterns__V_104_104;
        MR_Word recursion_patterns__V_105_105;
        MR_String recursion_patterns__V_106_106;
        MR_String recursion_patterns__V_107_107;
        MR_String recursion_patterns__V_108_108;
        MR_Word recursion_patterns__V_109_109;
        MR_ArrayPtr recursion_patterns__V_110_110;
        MR_ArrayPtr recursion_patterns__V_111_111;
        MR_ArrayPtr recursion_patterns__V_112_112;
        MR_ArrayPtr recursion_patterns__V_113_113;
        MR_ArrayPtr recursion_patterns__V_114_114;
        MR_ArrayPtr recursion_patterns__V_115_115;
        MR_ArrayPtr recursion_patterns__V_116_116;
        MR_ArrayPtr recursion_patterns__V_117_117;
        MR_ArrayPtr recursion_patterns__V_118_118;
        MR_ArrayPtr recursion_patterns__V_119_119;
        MR_ArrayPtr recursion_patterns__V_120_120;
        MR_ArrayPtr recursion_patterns__V_121_121;
        MR_ArrayPtr recursion_patterns__V_122_122;
        MR_ArrayPtr recursion_patterns__V_123_123;
        MR_ArrayPtr recursion_patterns__V_124_124;
        MR_ArrayPtr recursion_patterns__V_125_125;
        MR_ArrayPtr recursion_patterns__V_126_126;
        MR_ArrayPtr recursion_patterns__V_127_127;
        MR_ArrayPtr recursion_patterns__V_128_128;
        MR_Word recursion_patterns__V_129_129;
        MR_Word recursion_patterns__V_130_130;
        MR_Word recursion_patterns__V_131_131;
        MR_Word recursion_patterns__V_132_132;

        {
          profile__lookup_proc_dynamics_3_p_0(recursion_patterns__V_39_39, recursion_patterns__FirstPDPtr_19, &recursion_patterns__FirstPD_20);
        }
        recursion_patterns__FirstPSPtr_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__FirstPD_20, (MR_Integer) 0)));
        recursion_patterns__V_75_75 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__FirstPD_20, (MR_Integer) 1)));
        recursion_patterns__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__FirstPD_20, (MR_Integer) 2)));
        {
          recursion_patterns__PDesc_22 = create_report__describe_proc_2_f_0(recursion_patterns__Deep_6, recursion_patterns__FirstPSPtr_21);
        }
        recursion_patterns__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 0)));
        recursion_patterns__V_78_78 = ((MR_String) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 1)));
        recursion_patterns__V_79_79 = ((MR_String) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 2)));
        recursion_patterns__V_80_80 = ((MR_String) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 3)));
        recursion_patterns__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 4)));
        recursion_patterns__V_82_82 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 5)));
        recursion_patterns__V_83_83 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 6)));
        recursion_patterns__V_84_84 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 7)));
        recursion_patterns__V_85_85 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 8)));
        recursion_patterns__V_86_86 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 9)));
        recursion_patterns__V_87_87 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 10)));
        recursion_patterns__V_88_88 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 11)));
        recursion_patterns__V_89_89 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 12)));
        recursion_patterns__V_90_90 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 13)));
        recursion_patterns__V_91_91 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 14)));
        recursion_patterns__V_92_92 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 15)));
        recursion_patterns__V_40_40 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 16)));
        recursion_patterns__V_93_93 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 17)));
        recursion_patterns__V_94_94 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 18)));
        recursion_patterns__V_95_95 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 19)));
        recursion_patterns__V_96_96 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 20)));
        recursion_patterns__V_97_97 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 21)));
        recursion_patterns__V_98_98 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 22)));
        recursion_patterns__V_99_99 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 23)));
        recursion_patterns__V_100_100 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 24)));
        recursion_patterns__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 25)));
        recursion_patterns__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 26)));
        recursion_patterns__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 27)));
        recursion_patterns__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 28)));
        {
          profile__lookup_pd_own_3_p_0(recursion_patterns__V_40_40, recursion_patterns__FirstPDPtr_19, &recursion_patterns__ProcOwn_23);
        }
        recursion_patterns__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 0)));
        recursion_patterns__V_106_106 = ((MR_String) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 1)));
        recursion_patterns__V_107_107 = ((MR_String) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 2)));
        recursion_patterns__V_108_108 = ((MR_String) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 3)));
        recursion_patterns__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 4)));
        recursion_patterns__V_110_110 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 5)));
        recursion_patterns__V_111_111 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 6)));
        recursion_patterns__V_112_112 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 7)));
        recursion_patterns__V_113_113 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 8)));
        recursion_patterns__V_114_114 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 9)));
        recursion_patterns__V_115_115 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 10)));
        recursion_patterns__V_116_116 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 11)));
        recursion_patterns__V_117_117 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 12)));
        recursion_patterns__V_118_118 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 13)));
        recursion_patterns__V_119_119 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 14)));
        recursion_patterns__V_120_120 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 15)));
        recursion_patterns__V_121_121 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 16)));
        recursion_patterns__V_41_41 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 17)));
        recursion_patterns__V_122_122 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 18)));
        recursion_patterns__V_123_123 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 19)));
        recursion_patterns__V_124_124 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 20)));
        recursion_patterns__V_125_125 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 21)));
        recursion_patterns__V_126_126 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 22)));
        recursion_patterns__V_127_127 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 23)));
        recursion_patterns__V_128_128 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 24)));
        recursion_patterns__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 25)));
        recursion_patterns__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 26)));
        recursion_patterns__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 27)));
        recursion_patterns__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 28)));
        {
          profile__lookup_pd_desc_3_p_0(recursion_patterns__V_41_41, recursion_patterns__FirstPDPtr_19, &recursion_patterns__ProcInherit_24);
        }
        {
          recursion_patterns__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), recursion_patterns__V_42_42, 0) = ((MR_Box) (recursion_patterns__ProcOwn_23));
          MR_hl_field(MR_mktag(0), recursion_patterns__V_42_42, 1) = ((MR_Box) (recursion_patterns__ProcInherit_24));
        }
        {
          recursion_patterns__FirstProcInfo_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), recursion_patterns__FirstProcInfo_25, 0) = ((MR_Box) (recursion_patterns__PDesc_22));
          MR_hl_field(MR_mktag(0), recursion_patterns__FirstProcInfo_25, 1) = ((MR_Box) (recursion_patterns__V_42_42));
        }
        {
          recursion_patterns__MaybeFirstProcInfo_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), recursion_patterns__MaybeFirstProcInfo_26, 0) = ((MR_Box) (recursion_patterns__FirstProcInfo_25));
        }
      }
    {
      recursion_patterns__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), recursion_patterns__V_43_43, 0) = ((MR_Box) (&recursion_patterns_scalar_common_4[3]));
      MR_hl_field(MR_mktag(0), recursion_patterns__V_43_43, 1) = ((MR_Box) (recursion_patterns__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_95_116_121_112_101_115_95_102_114_101_113_95_98_117_105_108_100_95_104_105_115_116_111_103_114_97_109_95_95_91_50_93_95_48_5_p_0_1));
      MR_hl_field(MR_mktag(0), recursion_patterns__V_43_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), recursion_patterns__V_43_43, 3) = ((MR_Box) (recursion_patterns__MaybeFirstProcInfo_26));
    }
    {
      mercury__list__foldl_4_p_0((MR_Word) &report__report__type_ctor_info_recursion_type_simple_0, (MR_Word) &recursion_patterns_scalar_common_1[0], recursion_patterns__V_43_43, recursion_patterns__SimpleTypes_15, ((MR_Box) (recursion_patterns__STATE_VARIABLE_Histogram_0_27)), &recursion_patterns__conv1_STATE_VARIABLE_Histogram_28);
    }
    *recursion_patterns__STATE_VARIABLE_Histogram_28 = ((MR_Word) recursion_patterns__conv1_STATE_VARIABLE_Histogram_28);
  }
}

static MR_Integer MR_CALL 
recursion_patterns__IntroducedFrom__func__recursion_type_to_simple_type__969__1_1_f_0(
  MR_Word recursion_patterns__LambdaHeadVar__1_26)
{
  {
    MR_bool recursion_patterns__succeeded;
    MR_Integer recursion_patterns__LambdaHeadVar__2_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recursion_patterns__LambdaHeadVar__1_26, (MR_Integer) 0)));
    MR_Integer recursion_patterns__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recursion_patterns__LambdaHeadVar__1_26, (MR_Integer) 1)));
    MR_Float recursion_patterns__V_41_41 = MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__LambdaHeadVar__1_26, (MR_Integer) 2)));
    MR_Float recursion_patterns__V_42_42 = MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__LambdaHeadVar__1_26, (MR_Integer) 3)));
    MR_Float recursion_patterns__V_43_43 = MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__LambdaHeadVar__1_26, (MR_Integer) 4)));

    return recursion_patterns__LambdaHeadVar__2_27;
  }
}

static MR_Word MR_CALL 
recursion_patterns__IntroducedFrom__func__recursion_type_to_simple_type__972__1_1_f_0(
  MR_String recursion_patterns__LambdaHeadVar__1_34)
{
  {
    MR_bool recursion_patterns__succeeded;
    MR_Word recursion_patterns__LambdaHeadVar__2_35;

    {
      recursion_patterns__LambdaHeadVar__2_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), recursion_patterns__LambdaHeadVar__2_35, 0) = ((MR_Box) (recursion_patterns__LambdaHeadVar__1_34));
    }
    return recursion_patterns__LambdaHeadVar__2_35;
  }
}

static void MR_CALL 
recursion_patterns__IntroducedFrom__pred__recursion_data_and_probability__756__1_4_p_0(
  MR_Float recursion_patterns__Prob_1,
  MR_Integer recursion_patterns__HeadVar__2_13,
  MR_Word recursion_patterns__HeadVar__3_14,
  MR_Word * recursion_patterns__HeadVar__4_15)
{
  {
    MR_bool recursion_patterns__succeeded;

    {
      recursion_patterns__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_114_101_99_117_114_115_105_111_110_95_100_97_116_97_95_97_110_100_95_112_114_111_98_97_98_105_108_105_116_121_95_95_55_53_54_95_95_49_95_95_91_50_93_95_48_4_p_0(recursion_patterns__Prob_1, recursion_patterns__HeadVar__3_14, recursion_patterns__HeadVar__4_15);
    }
  }
}

static void MR_CALL 
recursion_patterns____Compare____recursion_type_raw_proc_freq_data_0_0(
  MR_Word * recursion_patterns__HeadVar__1_1,
  MR_Word recursion_patterns__HeadVar__2_2,
  MR_Word recursion_patterns__HeadVar__3_3)
{
  {
    MR_bool recursion_patterns__succeeded;
    MR_Integer recursion_patterns__CastX_12 = (MR_Integer) recursion_patterns__HeadVar__2_2;
    MR_Integer recursion_patterns__CastY_13 = (MR_Integer) recursion_patterns__HeadVar__3_3;

    recursion_patterns__succeeded = (recursion_patterns__CastX_12 == recursion_patterns__CastY_13);
    if (recursion_patterns__succeeded)
      *recursion_patterns__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Integer recursion_patterns__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word recursion_patterns__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word recursion_patterns__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__2_2, (MR_Integer) 2)));
        MR_Integer recursion_patterns__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word recursion_patterns__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word recursion_patterns__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word recursion_patterns__V_10_10;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(&recursion_patterns__V_10_10, recursion_patterns__V_4_4, recursion_patterns__V_7_7);
        }
        recursion_patterns__succeeded = (recursion_patterns__V_10_10 == (MR_Integer) 0);
        recursion_patterns__succeeded = !(recursion_patterns__succeeded);
        if (recursion_patterns__succeeded)
          *recursion_patterns__HeadVar__1_1 = recursion_patterns__V_10_10;
        else
          {
            MR_Word recursion_patterns__V_11_11;

            {
              recursion_patterns____Compare____own_and_inherit_prof_info_0_0(&recursion_patterns__V_11_11, recursion_patterns__V_5_5, recursion_patterns__V_8_8);
            }
            recursion_patterns__succeeded = (recursion_patterns__V_11_11 == (MR_Integer) 0);
            recursion_patterns__succeeded = !(recursion_patterns__succeeded);
            if (recursion_patterns__succeeded)
              *recursion_patterns__HeadVar__1_1 = recursion_patterns__V_11_11;
            else
              {
                report____Compare____proc_desc_0_0(recursion_patterns__HeadVar__1_1, recursion_patterns__V_6_6, recursion_patterns__V_9_9);
              }
          }
      }
  }
}

static MR_bool MR_CALL 
recursion_patterns____Unify____recursion_type_raw_proc_freq_data_0_0(
  MR_Word recursion_patterns__HeadVar__1_1,
  MR_Word recursion_patterns__HeadVar__2_2)
{
  {
    MR_bool recursion_patterns__succeeded;
    MR_Integer recursion_patterns__CastX_9 = (MR_Integer) recursion_patterns__HeadVar__1_1;
    MR_Integer recursion_patterns__CastY_10 = (MR_Integer) recursion_patterns__HeadVar__2_2;

    recursion_patterns__succeeded = (recursion_patterns__CastX_9 == recursion_patterns__CastY_10);
    if (recursion_patterns__succeeded)
      recursion_patterns__succeeded = MR_TRUE;
    else
      {
        MR_Integer recursion_patterns__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word recursion_patterns__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word recursion_patterns__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__1_1, (MR_Integer) 2)));
        MR_Integer recursion_patterns__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word recursion_patterns__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word recursion_patterns__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__2_2, (MR_Integer) 2)));

        recursion_patterns__succeeded = (recursion_patterns__V_3_3 == recursion_patterns__V_6_6);
        if (recursion_patterns__succeeded)
          {
            {
              recursion_patterns__succeeded = recursion_patterns____Unify____own_and_inherit_prof_info_0_0(recursion_patterns__V_4_4, recursion_patterns__V_7_7);
            }
            if (recursion_patterns__succeeded)
              {
                recursion_patterns__succeeded = report____Unify____proc_desc_0_0(recursion_patterns__V_5_5, recursion_patterns__V_8_8);
              }
          }
      }
    return recursion_patterns__succeeded;
  }
}

static void MR_CALL 
recursion_patterns____Compare____recursion_type_raw_freq_data_0_0(
  MR_Word * recursion_patterns__HeadVar__1_1,
  MR_Word recursion_patterns__HeadVar__2_2,
  MR_Word recursion_patterns__HeadVar__3_3)
{
  {
    MR_bool recursion_patterns__succeeded;
    MR_Integer recursion_patterns__CastX_12 = (MR_Integer) recursion_patterns__HeadVar__2_2;
    MR_Integer recursion_patterns__CastY_13 = (MR_Integer) recursion_patterns__HeadVar__3_3;

    recursion_patterns__succeeded = (recursion_patterns__CastX_12 == recursion_patterns__CastY_13);
    if (recursion_patterns__succeeded)
      *recursion_patterns__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Integer recursion_patterns__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word recursion_patterns__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word recursion_patterns__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__2_2, (MR_Integer) 2)));
        MR_Integer recursion_patterns__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word recursion_patterns__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word recursion_patterns__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word recursion_patterns__V_10_10;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(&recursion_patterns__V_10_10, recursion_patterns__V_4_4, recursion_patterns__V_7_7);
        }
        recursion_patterns__succeeded = (recursion_patterns__V_10_10 == (MR_Integer) 0);
        recursion_patterns__succeeded = !(recursion_patterns__succeeded);
        if (recursion_patterns__succeeded)
          *recursion_patterns__HeadVar__1_1 = recursion_patterns__V_10_10;
        else
          {
            MR_Word recursion_patterns__V_11_11;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &recursion_patterns_scalar_common_2[4], &recursion_patterns__V_11_11, ((MR_Box) (recursion_patterns__V_5_5)), ((MR_Box) (recursion_patterns__V_8_8)));
            }
            recursion_patterns__succeeded = (recursion_patterns__V_11_11 == (MR_Integer) 0);
            recursion_patterns__succeeded = !(recursion_patterns__succeeded);
            if (recursion_patterns__succeeded)
              *recursion_patterns__HeadVar__1_1 = recursion_patterns__V_11_11;
            else
              {
                {
                  mercury__builtin__compare_3_p_0((MR_Word) &recursion_patterns_scalar_common_1[4], recursion_patterns__HeadVar__1_1, ((MR_Box) (recursion_patterns__V_6_6)), ((MR_Box) (recursion_patterns__V_9_9)));
                }
              }
          }
      }
  }
}

static MR_bool MR_CALL 
recursion_patterns____Unify____recursion_type_raw_freq_data_0_0(
  MR_Word recursion_patterns__HeadVar__1_1,
  MR_Word recursion_patterns__HeadVar__2_2)
{
  {
    MR_bool recursion_patterns__succeeded;
    MR_Integer recursion_patterns__CastX_9 = (MR_Integer) recursion_patterns__HeadVar__1_1;
    MR_Integer recursion_patterns__CastY_10 = (MR_Integer) recursion_patterns__HeadVar__2_2;

    recursion_patterns__succeeded = (recursion_patterns__CastX_9 == recursion_patterns__CastY_10);
    if (recursion_patterns__succeeded)
      recursion_patterns__succeeded = MR_TRUE;
    else
      {
        MR_Word recursion_patterns__TypeInfo_11_11;
        MR_Word recursion_patterns__TypeInfo_12_12;
        MR_Integer recursion_patterns__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word recursion_patterns__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word recursion_patterns__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__1_1, (MR_Integer) 2)));
        MR_Integer recursion_patterns__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word recursion_patterns__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word recursion_patterns__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__2_2, (MR_Integer) 2)));

        recursion_patterns__succeeded = (recursion_patterns__V_3_3 == recursion_patterns__V_6_6);
        if (recursion_patterns__succeeded)
          {
            recursion_patterns__TypeInfo_11_11 = (MR_Word) &recursion_patterns_scalar_common_2[4];
            {
              recursion_patterns__succeeded = mercury__builtin__unify_2_p_0(recursion_patterns__TypeInfo_11_11, ((MR_Box) (recursion_patterns__V_4_4)), ((MR_Box) (recursion_patterns__V_7_7)));
            }
            if (recursion_patterns__succeeded)
              {
                recursion_patterns__TypeInfo_12_12 = (MR_Word) &recursion_patterns_scalar_common_1[4];
                {
                  recursion_patterns__succeeded = mercury__builtin__unify_2_p_0(recursion_patterns__TypeInfo_12_12, ((MR_Box) (recursion_patterns__V_5_5)), ((MR_Box) (recursion_patterns__V_8_8)));
                }
              }
          }
      }
    return recursion_patterns__succeeded;
  }
}

static void MR_CALL 
recursion_patterns____Compare____recursion_level_0_0(
  MR_Word * recursion_patterns__HeadVar__1_1,
  MR_Word recursion_patterns__HeadVar__2_2,
  MR_Word recursion_patterns__HeadVar__3_3)
{
  {
    MR_bool recursion_patterns__succeeded;
    MR_Integer recursion_patterns__CastX_9 = (MR_Integer) recursion_patterns__HeadVar__2_2;
    MR_Integer recursion_patterns__CastY_10 = (MR_Integer) recursion_patterns__HeadVar__3_3;

    recursion_patterns__succeeded = (recursion_patterns__CastX_9 == recursion_patterns__CastY_10);
    if (recursion_patterns__succeeded)
      *recursion_patterns__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Float recursion_patterns__V_4_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__2_2, (MR_Integer) 0)));
        MR_Float recursion_patterns__V_5_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__2_2, (MR_Integer) 1)));
        MR_Float recursion_patterns__V_6_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__3_3, (MR_Integer) 0)));
        MR_Float recursion_patterns__V_7_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word recursion_patterns__V_8_8;

        {
          mercury__private_builtin__builtin_compare_float_3_p_0(&recursion_patterns__V_8_8, recursion_patterns__V_4_4, recursion_patterns__V_6_6);
        }
        recursion_patterns__succeeded = (recursion_patterns__V_8_8 == (MR_Integer) 0);
        recursion_patterns__succeeded = !(recursion_patterns__succeeded);
        if (recursion_patterns__succeeded)
          *recursion_patterns__HeadVar__1_1 = recursion_patterns__V_8_8;
        else
          {
            mercury__private_builtin__builtin_compare_float_3_p_0(recursion_patterns__HeadVar__1_1, recursion_patterns__V_5_5, recursion_patterns__V_7_7);
          }
      }
  }
}

static MR_bool MR_CALL 
recursion_patterns____Unify____recursion_level_0_0(
  MR_Word recursion_patterns__HeadVar__1_1,
  MR_Word recursion_patterns__HeadVar__2_2)
{
  {
    MR_bool recursion_patterns__succeeded;
    MR_Integer recursion_patterns__CastX_7 = (MR_Integer) recursion_patterns__HeadVar__1_1;
    MR_Integer recursion_patterns__CastY_8 = (MR_Integer) recursion_patterns__HeadVar__2_2;

    recursion_patterns__succeeded = (recursion_patterns__CastX_7 == recursion_patterns__CastY_8);
    if (recursion_patterns__succeeded)
      recursion_patterns__succeeded = MR_TRUE;
    else
      {
        MR_Float recursion_patterns__V_3_3 = MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__1_1, (MR_Integer) 0)));
        MR_Float recursion_patterns__V_4_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__1_1, (MR_Integer) 1)));
        MR_Float recursion_patterns__V_5_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__2_2, (MR_Integer) 0)));
        MR_Float recursion_patterns__V_6_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__2_2, (MR_Integer) 1)));

        recursion_patterns__succeeded = (recursion_patterns__V_3_3 == recursion_patterns__V_5_5);
        if (recursion_patterns__succeeded)
          recursion_patterns__succeeded = (recursion_patterns__V_4_4 == recursion_patterns__V_6_6);
      }
    return recursion_patterns__succeeded;
  }
}

static void MR_CALL 
recursion_patterns____Compare____recursion_error_0_0(
  MR_Word * recursion_patterns__HeadVar__1_1,
  MR_Word recursion_patterns__HeadVar__2_2,
  MR_Word recursion_patterns__HeadVar__3_3)
{
  {
    MR_bool recursion_patterns__succeeded;
    MR_Integer recursion_patterns__CastX_6 = (MR_Integer) recursion_patterns__HeadVar__2_2;
    MR_Integer recursion_patterns__CastY_7 = (MR_Integer) recursion_patterns__HeadVar__3_3;

    recursion_patterns__succeeded = (recursion_patterns__CastX_6 == recursion_patterns__CastY_7);
    if (recursion_patterns__succeeded)
      *recursion_patterns__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word recursion_patterns__V_4_4 = (MR_Word) recursion_patterns__HeadVar__2_2;
        MR_Word recursion_patterns__V_5_5 = (MR_Word) recursion_patterns__HeadVar__3_3;
        MR_Integer recursion_patterns__V_9_9 = (MR_Integer) recursion_patterns__V_4_4;
        MR_Integer recursion_patterns__V_10_10 = (MR_Integer) recursion_patterns__V_5_5;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(recursion_patterns__HeadVar__1_1, recursion_patterns__V_9_9, recursion_patterns__V_10_10);
        }
      }
  }
}

static MR_bool MR_CALL 
recursion_patterns____Unify____recursion_error_0_0(
  MR_Word recursion_patterns__HeadVar__1_1,
  MR_Word recursion_patterns__HeadVar__2_2)
{
  {
    MR_bool recursion_patterns__succeeded;
    MR_Integer recursion_patterns__CastX_5 = (MR_Integer) recursion_patterns__HeadVar__1_1;
    MR_Integer recursion_patterns__CastY_6 = (MR_Integer) recursion_patterns__HeadVar__2_2;

    recursion_patterns__succeeded = (recursion_patterns__CastX_5 == recursion_patterns__CastY_6);
    if (recursion_patterns__succeeded)
      recursion_patterns__succeeded = MR_TRUE;
    else
      {
        MR_Word recursion_patterns__V_3_3 = (MR_Word) recursion_patterns__HeadVar__1_1;
        MR_Word recursion_patterns__V_4_4 = (MR_Word) recursion_patterns__HeadVar__2_2;

        recursion_patterns__succeeded = (recursion_patterns__V_3_3 == recursion_patterns__V_4_4);
      }
    return recursion_patterns__succeeded;
  }
}

static void MR_CALL 
recursion_patterns____Compare____recursion_data_0_0(
  MR_Word * recursion_patterns__HeadVar__1_1,
  MR_Word recursion_patterns__HeadVar__2_2,
  MR_Word recursion_patterns__HeadVar__3_3)
{
  {
    MR_bool recursion_patterns__succeeded;
    MR_Integer recursion_patterns__CastX_18 = (MR_Integer) recursion_patterns__HeadVar__2_2;
    MR_Integer recursion_patterns__CastY_19 = (MR_Integer) recursion_patterns__HeadVar__3_3;

    recursion_patterns__succeeded = (recursion_patterns__CastX_18 == recursion_patterns__CastY_19);
    if (recursion_patterns__succeeded)
      *recursion_patterns__HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((recursion_patterns__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((recursion_patterns__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *recursion_patterns__HeadVar__1_1 = (MR_Integer) 0;
      else
        *recursion_patterns__HeadVar__1_1 = (MR_Integer) 1;
    else
      {
        MR_Word recursion_patterns__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__2_2, (MR_Integer) 2)));
        MR_Integer recursion_patterns__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word recursion_patterns__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__2_2, (MR_Integer) 0)));

        if ((recursion_patterns__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *recursion_patterns__HeadVar__1_1 = (MR_Integer) 2;
        else
          {
            MR_Word recursion_patterns__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__3_3, (MR_Integer) 0)));
            MR_Integer recursion_patterns__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word recursion_patterns__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__3_3, (MR_Integer) 2)));
            MR_Word recursion_patterns__V_16_16;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &recursion_patterns_scalar_common_2[2], &recursion_patterns__V_16_16, ((MR_Box) (recursion_patterns__V_25_25)), ((MR_Box) (recursion_patterns__V_13_13)));
            }
            recursion_patterns__succeeded = (recursion_patterns__V_16_16 == (MR_Integer) 0);
            recursion_patterns__succeeded = !(recursion_patterns__succeeded);
            if (recursion_patterns__succeeded)
              *recursion_patterns__HeadVar__1_1 = recursion_patterns__V_16_16;
            else
              {
                MR_Word recursion_patterns__V_17_17;

                {
                  mercury__private_builtin__builtin_compare_int_3_p_0(&recursion_patterns__V_17_17, recursion_patterns__V_24_24, recursion_patterns__V_14_14);
                }
                recursion_patterns__succeeded = (recursion_patterns__V_17_17 == (MR_Integer) 0);
                recursion_patterns__succeeded = !(recursion_patterns__succeeded);
                if (recursion_patterns__succeeded)
                  *recursion_patterns__HeadVar__1_1 = recursion_patterns__V_17_17;
                else
                  {
                    {
                      mercury__builtin__compare_3_p_0((MR_Word) &recursion_patterns_scalar_common_2[3], recursion_patterns__HeadVar__1_1, ((MR_Box) (recursion_patterns__V_23_23)), ((MR_Box) (recursion_patterns__V_15_15)));
                    }
                  }
              }
          }
      }
  }
}

static MR_bool MR_CALL 
recursion_patterns____Unify____recursion_data_0_0(
  MR_Word recursion_patterns__HeadVar__1_1,
  MR_Word recursion_patterns__HeadVar__2_2)
{
  {
    MR_bool recursion_patterns__succeeded;
    MR_Integer recursion_patterns__CastX_11 = (MR_Integer) recursion_patterns__HeadVar__1_1;
    MR_Integer recursion_patterns__CastY_12 = (MR_Integer) recursion_patterns__HeadVar__2_2;

    recursion_patterns__succeeded = (recursion_patterns__CastX_11 == recursion_patterns__CastY_12);
    if (recursion_patterns__succeeded)
      recursion_patterns__succeeded = MR_TRUE;
    else
    if ((recursion_patterns__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Integer recursion_patterns__CastX_3 = (MR_Integer) recursion_patterns__HeadVar__1_1;
        MR_Integer recursion_patterns__CastY_4 = (MR_Integer) recursion_patterns__HeadVar__2_2;

        recursion_patterns__succeeded = (recursion_patterns__CastY_4 == recursion_patterns__CastX_3);
      }
    else
      {
        MR_Word recursion_patterns__TypeInfo_13_13;
        MR_Word recursion_patterns__TypeInfo_14_14;
        MR_Word recursion_patterns__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__1_1, (MR_Integer) 0)));
        MR_Integer recursion_patterns__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word recursion_patterns__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word recursion_patterns__V_8_8;
        MR_Integer recursion_patterns__V_9_9;
        MR_Word recursion_patterns__V_10_10;

        recursion_patterns__succeeded = ((MR_tag((MR_Word) recursion_patterns__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (recursion_patterns__succeeded)
          {
            recursion_patterns__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__2_2, (MR_Integer) 0)));
            recursion_patterns__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__2_2, (MR_Integer) 1)));
            recursion_patterns__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__2_2, (MR_Integer) 2)));
            recursion_patterns__TypeInfo_13_13 = (MR_Word) &recursion_patterns_scalar_common_2[2];
            {
              recursion_patterns__succeeded = mercury__builtin__unify_2_p_0(recursion_patterns__TypeInfo_13_13, ((MR_Box) (recursion_patterns__V_5_5)), ((MR_Box) (recursion_patterns__V_8_8)));
            }
            if (recursion_patterns__succeeded)
              {
                recursion_patterns__succeeded = (recursion_patterns__V_6_6 == recursion_patterns__V_9_9);
                if (recursion_patterns__succeeded)
                  {
                    recursion_patterns__TypeInfo_14_14 = (MR_Word) &recursion_patterns_scalar_common_2[3];
                    {
                      recursion_patterns__succeeded = mercury__builtin__unify_2_p_0(recursion_patterns__TypeInfo_14_14, ((MR_Box) (recursion_patterns__V_7_7)), ((MR_Box) (recursion_patterns__V_10_10)));
                    }
                  }
              }
          }
      }
    return recursion_patterns__succeeded;
  }
}

static void MR_CALL 
recursion_patterns____Compare____recursion_analysis_info_0_0(
  MR_Word * recursion_patterns__HeadVar__1_1,
  MR_Word recursion_patterns__HeadVar__2_2,
  MR_Word recursion_patterns__HeadVar__3_3)
{
  {
    MR_bool recursion_patterns__succeeded;
    MR_Integer recursion_patterns__CastX_12 = (MR_Integer) recursion_patterns__HeadVar__2_2;
    MR_Integer recursion_patterns__CastY_13 = (MR_Integer) recursion_patterns__HeadVar__3_3;

    recursion_patterns__succeeded = (recursion_patterns__CastX_12 == recursion_patterns__CastY_13);
    if (recursion_patterns__succeeded)
      *recursion_patterns__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word recursion_patterns__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word recursion_patterns__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word recursion_patterns__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word recursion_patterns__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word recursion_patterns__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word recursion_patterns__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word recursion_patterns__V_10_10;
        MR_Integer recursion_patterns__V_17_17 = (MR_Integer) recursion_patterns__V_4_4;
        MR_Integer recursion_patterns__V_18_18 = (MR_Integer) recursion_patterns__V_7_7;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(&recursion_patterns__V_10_10, recursion_patterns__V_17_17, recursion_patterns__V_18_18);
        }
        recursion_patterns__succeeded = (recursion_patterns__V_10_10 == (MR_Integer) 0);
        recursion_patterns__succeeded = !(recursion_patterns__succeeded);
        if (recursion_patterns__succeeded)
          *recursion_patterns__HeadVar__1_1 = recursion_patterns__V_10_10;
        else
          {
            MR_Word recursion_patterns__V_11_11;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &recursion_patterns_scalar_common_1[2], &recursion_patterns__V_11_11, ((MR_Box) (recursion_patterns__V_5_5)), ((MR_Box) (recursion_patterns__V_8_8)));
            }
            recursion_patterns__succeeded = (recursion_patterns__V_11_11 == (MR_Integer) 0);
            recursion_patterns__succeeded = !(recursion_patterns__succeeded);
            if (recursion_patterns__succeeded)
              *recursion_patterns__HeadVar__1_1 = recursion_patterns__V_11_11;
            else
              {
                {
                  mercury__builtin__compare_3_p_0((MR_Word) &recursion_patterns_scalar_common_2[1], recursion_patterns__HeadVar__1_1, ((MR_Box) (recursion_patterns__V_6_6)), ((MR_Box) (recursion_patterns__V_9_9)));
                }
              }
          }
      }
  }
}

static MR_bool MR_CALL 
recursion_patterns____Unify____recursion_analysis_info_0_0(
  MR_Word recursion_patterns__HeadVar__1_1,
  MR_Word recursion_patterns__HeadVar__2_2)
{
  {
    MR_bool recursion_patterns__succeeded;
    MR_Integer recursion_patterns__CastX_9 = (MR_Integer) recursion_patterns__HeadVar__1_1;
    MR_Integer recursion_patterns__CastY_10 = (MR_Integer) recursion_patterns__HeadVar__2_2;

    recursion_patterns__succeeded = (recursion_patterns__CastX_9 == recursion_patterns__CastY_10);
    if (recursion_patterns__succeeded)
      recursion_patterns__succeeded = MR_TRUE;
    else
      {
        MR_Word recursion_patterns__TypeInfo_12_12;
        MR_Word recursion_patterns__TypeInfo_13_13;
        MR_Word recursion_patterns__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word recursion_patterns__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word recursion_patterns__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word recursion_patterns__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word recursion_patterns__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word recursion_patterns__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__2_2, (MR_Integer) 2)));
        MR_Integer recursion_patterns__V_14_14 = (MR_Integer) recursion_patterns__V_3_3;
        MR_Integer recursion_patterns__V_15_15 = (MR_Integer) recursion_patterns__V_6_6;

        recursion_patterns__succeeded = (recursion_patterns__V_14_14 == recursion_patterns__V_15_15);
        if (recursion_patterns__succeeded)
          {
            recursion_patterns__TypeInfo_12_12 = (MR_Word) &recursion_patterns_scalar_common_1[2];
            {
              recursion_patterns__succeeded = mercury__builtin__unify_2_p_0(recursion_patterns__TypeInfo_12_12, ((MR_Box) (recursion_patterns__V_4_4)), ((MR_Box) (recursion_patterns__V_7_7)));
            }
            if (recursion_patterns__succeeded)
              {
                recursion_patterns__TypeInfo_13_13 = (MR_Word) &recursion_patterns_scalar_common_2[1];
                {
                  recursion_patterns__succeeded = mercury__builtin__unify_2_p_0(recursion_patterns__TypeInfo_13_13, ((MR_Box) (recursion_patterns__V_5_5)), ((MR_Box) (recursion_patterns__V_8_8)));
                }
              }
          }
      }
    return recursion_patterns__succeeded;
  }
}

static void MR_CALL 
recursion_patterns____Compare____own_and_inherit_prof_info_0_0(
  MR_Word * recursion_patterns__HeadVar__1_1,
  MR_Word recursion_patterns__HeadVar__2_2,
  MR_Word recursion_patterns__HeadVar__3_3)
{
  {
    MR_bool recursion_patterns__succeeded;
    MR_Integer recursion_patterns__CastX_9 = (MR_Integer) recursion_patterns__HeadVar__2_2;
    MR_Integer recursion_patterns__CastY_10 = (MR_Integer) recursion_patterns__HeadVar__3_3;

    recursion_patterns__succeeded = (recursion_patterns__CastX_9 == recursion_patterns__CastY_10);
    if (recursion_patterns__succeeded)
      *recursion_patterns__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word recursion_patterns__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word recursion_patterns__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word recursion_patterns__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word recursion_patterns__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word recursion_patterns__V_8_8;

        {
          measurements____Compare____own_prof_info_0_0(&recursion_patterns__V_8_8, recursion_patterns__V_4_4, recursion_patterns__V_6_6);
        }
        recursion_patterns__succeeded = (recursion_patterns__V_8_8 == (MR_Integer) 0);
        recursion_patterns__succeeded = !(recursion_patterns__succeeded);
        if (recursion_patterns__succeeded)
          *recursion_patterns__HeadVar__1_1 = recursion_patterns__V_8_8;
        else
          {
            measurements____Compare____inherit_prof_info_0_0(recursion_patterns__HeadVar__1_1, recursion_patterns__V_5_5, recursion_patterns__V_7_7);
          }
      }
  }
}

static MR_bool MR_CALL 
recursion_patterns____Unify____own_and_inherit_prof_info_0_0(
  MR_Word recursion_patterns__HeadVar__1_1,
  MR_Word recursion_patterns__HeadVar__2_2)
{
  {
    MR_bool recursion_patterns__succeeded;
    MR_Integer recursion_patterns__CastX_7 = (MR_Integer) recursion_patterns__HeadVar__1_1;
    MR_Integer recursion_patterns__CastY_8 = (MR_Integer) recursion_patterns__HeadVar__2_2;

    recursion_patterns__succeeded = (recursion_patterns__CastX_7 == recursion_patterns__CastY_8);
    if (recursion_patterns__succeeded)
      recursion_patterns__succeeded = MR_TRUE;
    else
      {
        MR_Word recursion_patterns__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word recursion_patterns__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word recursion_patterns__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word recursion_patterns__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__2_2, (MR_Integer) 1)));

        {
          recursion_patterns__succeeded = measurements____Unify____own_prof_info_0_0(recursion_patterns__V_3_3, recursion_patterns__V_5_5);
        }
        if (recursion_patterns__succeeded)
          {
            recursion_patterns__succeeded = measurements____Unify____inherit_prof_info_0_0(recursion_patterns__V_4_4, recursion_patterns__V_6_6);
          }
      }
    return recursion_patterns__succeeded;
  }
}

static void MR_CALL 
recursion_patterns____Compare____first_proc_info_0_0(
  MR_Word * recursion_patterns__HeadVar__1_1,
  MR_Word recursion_patterns__HeadVar__2_2,
  MR_Word recursion_patterns__HeadVar__3_3)
{
  {
    MR_bool recursion_patterns__succeeded;
    MR_Integer recursion_patterns__CastX_9 = (MR_Integer) recursion_patterns__HeadVar__2_2;
    MR_Integer recursion_patterns__CastY_10 = (MR_Integer) recursion_patterns__HeadVar__3_3;

    recursion_patterns__succeeded = (recursion_patterns__CastX_9 == recursion_patterns__CastY_10);
    if (recursion_patterns__succeeded)
      *recursion_patterns__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word recursion_patterns__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word recursion_patterns__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word recursion_patterns__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word recursion_patterns__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word recursion_patterns__V_8_8;

        {
          report____Compare____proc_desc_0_0(&recursion_patterns__V_8_8, recursion_patterns__V_4_4, recursion_patterns__V_6_6);
        }
        recursion_patterns__succeeded = (recursion_patterns__V_8_8 == (MR_Integer) 0);
        recursion_patterns__succeeded = !(recursion_patterns__succeeded);
        if (recursion_patterns__succeeded)
          *recursion_patterns__HeadVar__1_1 = recursion_patterns__V_8_8;
        else
          {
            recursion_patterns____Compare____own_and_inherit_prof_info_0_0(recursion_patterns__HeadVar__1_1, recursion_patterns__V_5_5, recursion_patterns__V_7_7);
          }
      }
  }
}

static MR_bool MR_CALL 
recursion_patterns____Unify____first_proc_info_0_0(
  MR_Word recursion_patterns__HeadVar__1_1,
  MR_Word recursion_patterns__HeadVar__2_2)
{
  {
    MR_bool recursion_patterns__succeeded;
    MR_Integer recursion_patterns__CastX_7 = (MR_Integer) recursion_patterns__HeadVar__1_1;
    MR_Integer recursion_patterns__CastY_8 = (MR_Integer) recursion_patterns__HeadVar__2_2;

    recursion_patterns__succeeded = (recursion_patterns__CastX_7 == recursion_patterns__CastY_8);
    if (recursion_patterns__succeeded)
      recursion_patterns__succeeded = MR_TRUE;
    else
      {
        MR_Word recursion_patterns__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word recursion_patterns__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word recursion_patterns__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word recursion_patterns__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__2_2, (MR_Integer) 1)));

        {
          recursion_patterns__succeeded = report____Unify____proc_desc_0_0(recursion_patterns__V_3_3, recursion_patterns__V_5_5);
        }
        if (recursion_patterns__succeeded)
          {
            recursion_patterns__succeeded = recursion_patterns____Unify____own_and_inherit_prof_info_0_0(recursion_patterns__V_4_4, recursion_patterns__V_6_6);
          }
      }
    return recursion_patterns__succeeded;
  }
}

static void MR_CALL 
recursion_patterns__finalize_histogram_proc_rec_type_5_p_0(
  MR_Word recursion_patterns__Deep_6,
  MR_Float recursion_patterns__NumCliques_7,
  MR_Word recursion_patterns___PSPtr_8,
  MR_Word recursion_patterns__HeadVar__4_4,
  MR_Word * recursion_patterns__HeadVar__5_5)
{
  {
    MR_bool recursion_patterns__succeeded;

    {
      recursion_patterns__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_97_108_105_122_101_95_104_105_115_116_111_103_114_97_109_95_112_114_111_99_95_114_101_99_95_116_121_112_101_95_95_91_51_93_95_48_5_p_0(recursion_patterns__Deep_6, recursion_patterns__NumCliques_7, recursion_patterns__HeadVar__4_4, recursion_patterns__HeadVar__5_5);
    }
  }
}

static void MR_CALL 
recursion_patterns__finalize_histogram_rec_type_5_p_0(
  MR_Word recursion_patterns__Deep_6,
  MR_Float recursion_patterns__NumCliques_7,
  MR_Word recursion_patterns___RecursionType_8,
  MR_Word recursion_patterns__HeadVar__4_4,
  MR_Word * recursion_patterns__HeadVar__5_5)
{
  {
    MR_bool recursion_patterns__succeeded;

    {
      recursion_patterns__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_97_108_105_122_101_95_104_105_115_116_111_103_114_97_109_95_114_101_99_95_116_121_112_101_95_95_91_51_93_95_48_5_p_0(recursion_patterns__Deep_6, recursion_patterns__NumCliques_7, recursion_patterns__HeadVar__4_4, recursion_patterns__HeadVar__5_5);
    }
  }
}

static void MR_CALL 
recursion_patterns__finalize_histogram_4_p_0_1(
  MR_Box recursion_patterns__closure_arg,
  MR_Box recursion_patterns__wrapper_arg_1,
  MR_Box recursion_patterns__wrapper_arg_2,
  MR_Box * recursion_patterns__wrapper_arg_3)
{
  {
    MR_Box recursion_patterns__closure = recursion_patterns__closure_arg;
    MR_Word recursion_patterns__conv0_HeadVar__5_5;

    {
      recursion_patterns__finalize_histogram_rec_type_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__closure, (MR_Integer) 3))), MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__closure, (MR_Integer) 4))), ((MR_Word) recursion_patterns__wrapper_arg_1), ((MR_Word) recursion_patterns__wrapper_arg_2), &recursion_patterns__conv0_HeadVar__5_5);
    }
    *recursion_patterns__wrapper_arg_3 = ((MR_Box) (recursion_patterns__conv0_HeadVar__5_5));
  }
}

static void MR_CALL 
recursion_patterns__finalize_histogram_4_p_0(
  MR_Word recursion_patterns__Deep_5,
  MR_Integer recursion_patterns__NumCliques_6,
  MR_Word recursion_patterns__STATE_VARIABLE_Histogram_0_8,
  MR_Word * recursion_patterns__STATE_VARIABLE_Histogram_9)
{
  {
    MR_bool recursion_patterns__succeeded;
    MR_Word recursion_patterns__V_10_10;
    MR_Float recursion_patterns__V_12_12;

    {
      recursion_patterns__V_12_12 = mercury__float__float_1_f_0(recursion_patterns__NumCliques_6);
    }
    {
      recursion_patterns__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), recursion_patterns__V_10_10, 0) = ((MR_Box) (&recursion_patterns_scalar_common_5[1]));
      MR_hl_field(MR_mktag(0), recursion_patterns__V_10_10, 1) = ((MR_Box) (recursion_patterns__finalize_histogram_4_p_0_1));
      MR_hl_field(MR_mktag(0), recursion_patterns__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), recursion_patterns__V_10_10, 3) = ((MR_Box) (recursion_patterns__Deep_5));
      MR_hl_field(MR_mktag(0), recursion_patterns__V_10_10, 4) = MR_box_float(recursion_patterns__V_12_12);
    }
    {
      mercury__map__map_values_3_p_0((MR_Word) &report__report__type_ctor_info_recursion_type_simple_0, (MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_type_raw_freq_data_0, (MR_Word) &report__report__type_ctor_info_recursion_type_freq_data_0, recursion_patterns__V_10_10, recursion_patterns__STATE_VARIABLE_Histogram_0_8, recursion_patterns__STATE_VARIABLE_Histogram_9);
    }
  }
}

static MR_Box MR_CALL 
recursion_patterns__recursion_type_to_simple_type_2_p_0_2(
  MR_Box recursion_patterns__closure_arg,
  MR_Box recursion_patterns__wrapper_arg_1)
{
  {
    MR_Box recursion_patterns__wrapper_arg_2;
    MR_Box recursion_patterns__closure = recursion_patterns__closure_arg;
    MR_Integer recursion_patterns__conv1_LambdaHeadVar__2_27;

    {
      recursion_patterns__conv1_LambdaHeadVar__2_27 = recursion_patterns__IntroducedFrom__func__recursion_type_to_simple_type__969__1_1_f_0(((MR_Word) recursion_patterns__wrapper_arg_1));
    }
    recursion_patterns__wrapper_arg_2 = ((MR_Box) (recursion_patterns__conv1_LambdaHeadVar__2_27));
    return recursion_patterns__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
recursion_patterns__recursion_type_to_simple_type_2_p_0_1(
  MR_Box recursion_patterns__closure_arg,
  MR_Box recursion_patterns__wrapper_arg_1)
{
  {
    MR_Box recursion_patterns__wrapper_arg_2;
    MR_Box recursion_patterns__closure = recursion_patterns__closure_arg;
    MR_Word recursion_patterns__conv0_LambdaHeadVar__2_35;

    {
      recursion_patterns__conv0_LambdaHeadVar__2_35 = recursion_patterns__IntroducedFrom__func__recursion_type_to_simple_type__972__1_1_f_0(((MR_String) recursion_patterns__wrapper_arg_1));
    }
    recursion_patterns__wrapper_arg_2 = ((MR_Box) (recursion_patterns__conv0_LambdaHeadVar__2_35));
    return recursion_patterns__wrapper_arg_2;
  }
}

static void MR_CALL 
recursion_patterns__recursion_type_to_simple_type_2_p_0(
  MR_Word recursion_patterns__HeadVar__1_1,
  MR_Word * recursion_patterns__HeadVar__2_2)
{
  {
    MR_bool recursion_patterns__succeeded;

    switch (MR_tag((MR_Word) recursion_patterns__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *recursion_patterns__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &recursion_patterns_scalar_common_2[7]);
        }
        break;
      case (MR_Integer) 1:
        {
          *recursion_patterns__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &recursion_patterns_scalar_common_2[8]);
        }
        break;
      case (MR_Integer) 2:
        {
          *recursion_patterns__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &recursion_patterns_scalar_common_2[5]);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), recursion_patterns__HeadVar__1_1, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer recursion_patterns__NumProcs_16 = ((MR_Integer) (MR_hl_field(MR_mktag(3), recursion_patterns__HeadVar__1_1, (MR_Integer) 1)));
              MR_Word recursion_patterns__V_17_17;

              {
                recursion_patterns__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), recursion_patterns__V_17_17, 0) = ((MR_Box) (recursion_patterns__NumProcs_16));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *recursion_patterns__HeadVar__2_2 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recursion_patterns__V_17_17));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word recursion_patterns__TypeCtorInfo_44_44 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
              MR_Word recursion_patterns__Levels_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), recursion_patterns__HeadVar__1_1, (MR_Integer) 1)));
              MR_Word recursion_patterns__SimpleLevels_20;
              MR_Word recursion_patterns__V_22_22;
              MR_Word recursion_patterns__V_24_24;

              {
                recursion_patterns__V_24_24 = mercury__list__map_2_f_0((MR_Word) &report__report__type_ctor_info_recursion_level_report_0, recursion_patterns__TypeCtorInfo_44_44, (MR_Word) &recursion_patterns_scalar_common_1[7], recursion_patterns__Levels_19);
              }
              {
                recursion_patterns__SimpleLevels_20 = mercury__set__from_list_1_f_0(recursion_patterns__TypeCtorInfo_44_44, recursion_patterns__V_24_24);
              }
              {
                recursion_patterns__V_22_22 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), recursion_patterns__V_22_22, 0) = ((MR_Box) (recursion_patterns__SimpleLevels_20));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *recursion_patterns__HeadVar__2_2 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recursion_patterns__V_22_22));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word recursion_patterns__TypeCtorInfo_46_46 = (MR_Word) &report__report__type_ctor_info_recursion_type_simple_0;
              MR_Word recursion_patterns__Errors_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), recursion_patterns__HeadVar__1_1, (MR_Integer) 1)));
              MR_Word recursion_patterns__V_32_32;

              {
                recursion_patterns__V_32_32 = mercury__list__map_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, recursion_patterns__TypeCtorInfo_46_46, (MR_Word) &recursion_patterns_scalar_common_1[6], recursion_patterns__Errors_29);
              }
              {
                *recursion_patterns__HeadVar__2_2 = mercury__list__f_43_43_2_f_0(recursion_patterns__TypeCtorInfo_46_46, recursion_patterns__V_32_32, (MR_Word) MR_mkword(MR_mktag(1), &recursion_patterns_scalar_common_2[6]));
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
recursion_patterns__update_procs_map_3_p_0(
  MR_Word recursion_patterns__FirstProcInfo_4,
  MR_Word recursion_patterns__STATE_VARIABLE_Map_0_16,
  MR_Word * recursion_patterns__STATE_VARIABLE_Map_17)
{
  {
    MR_bool recursion_patterns__succeeded;
    MR_Word recursion_patterns__PSDesc_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__FirstProcInfo_4, (MR_Integer) 0)));
    MR_Word recursion_patterns__FirstProfInfo_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__FirstProcInfo_4, (MR_Integer) 1)));
    MR_Word recursion_patterns__PsPtr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__PSDesc_6, (MR_Integer) 0)));
    MR_Word recursion_patterns__ProcFreqData_15;
    MR_String recursion_patterns__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(0), recursion_patterns__PSDesc_6, (MR_Integer) 1)));
    MR_Integer recursion_patterns__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recursion_patterns__PSDesc_6, (MR_Integer) 2)));
    MR_String recursion_patterns__V_23_23 = ((MR_String) (MR_hl_field(MR_mktag(0), recursion_patterns__PSDesc_6, (MR_Integer) 3)));
    MR_String recursion_patterns__V_24_24 = ((MR_String) (MR_hl_field(MR_mktag(0), recursion_patterns__PSDesc_6, (MR_Integer) 4)));
    MR_String recursion_patterns__V_25_25 = ((MR_String) (MR_hl_field(MR_mktag(0), recursion_patterns__PSDesc_6, (MR_Integer) 5)));
    MR_Word recursion_patterns__ProcFreqData0_9;
    MR_Box recursion_patterns__conv0_ProcFreqData0_9;

    {
      recursion_patterns__succeeded = mercury__map__search_3_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_type_raw_proc_freq_data_0, recursion_patterns__STATE_VARIABLE_Map_0_16, ((MR_Box) (recursion_patterns__PsPtr_8)), &recursion_patterns__conv0_ProcFreqData0_9);
    }
    if (recursion_patterns__succeeded)
      {
        recursion_patterns__ProcFreqData0_9 = ((MR_Word) recursion_patterns__conv0_ProcFreqData0_9);
        recursion_patterns__succeeded = MR_TRUE;
      }
    if (recursion_patterns__succeeded)
      {
        MR_Integer recursion_patterns__Count0_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recursion_patterns__ProcFreqData0_9, (MR_Integer) 0)));
        MR_Word recursion_patterns__ProfInfo0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__ProcFreqData0_9, (MR_Integer) 1)));
        MR_Word recursion_patterns__ProcDesc_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__ProcFreqData0_9, (MR_Integer) 2)));
        MR_Word recursion_patterns__ProfInfo_13;
        MR_Integer recursion_patterns__Count_14;
        MR_Word recursion_patterns__OwnA_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__FirstProfInfo_7, (MR_Integer) 0)));
        MR_Word recursion_patterns__InheritA_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__FirstProfInfo_7, (MR_Integer) 1)));
        MR_Word recursion_patterns__OwnB_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__ProfInfo0_11, (MR_Integer) 0)));
        MR_Word recursion_patterns__InheritB_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__ProfInfo0_11, (MR_Integer) 1)));
        MR_Word recursion_patterns__Own_34;
        MR_Word recursion_patterns__Inherit_35;

        {
          recursion_patterns__Own_34 = measurements__add_own_to_own_2_f_0(recursion_patterns__OwnA_30, recursion_patterns__OwnB_32);
        }
        {
          recursion_patterns__Inherit_35 = measurements__add_inherit_to_inherit_2_f_0(recursion_patterns__InheritA_31, recursion_patterns__InheritB_33);
        }
        {
          recursion_patterns__ProfInfo_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), recursion_patterns__ProfInfo_13, 0) = ((MR_Box) (recursion_patterns__Own_34));
          MR_hl_field(MR_mktag(0), recursion_patterns__ProfInfo_13, 1) = ((MR_Box) (recursion_patterns__Inherit_35));
        }
        recursion_patterns__Count_14 = (recursion_patterns__Count0_10 + (MR_Integer) 1);
        {
          recursion_patterns__ProcFreqData_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), recursion_patterns__ProcFreqData_15, 0) = ((MR_Box) (recursion_patterns__Count_14));
          MR_hl_field(MR_mktag(0), recursion_patterns__ProcFreqData_15, 1) = ((MR_Box) (recursion_patterns__ProfInfo_13));
          MR_hl_field(MR_mktag(0), recursion_patterns__ProcFreqData_15, 2) = ((MR_Box) (recursion_patterns__ProcDesc_12));
        }
      }
    else
      {
        {
          recursion_patterns__ProcFreqData_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), recursion_patterns__ProcFreqData_15, 0) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), recursion_patterns__ProcFreqData_15, 1) = ((MR_Box) (recursion_patterns__FirstProfInfo_7));
          MR_hl_field(MR_mktag(0), recursion_patterns__ProcFreqData_15, 2) = ((MR_Box) (recursion_patterns__PSDesc_6));
        }
      }
    {
      mercury__map__set_4_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_type_raw_proc_freq_data_0, ((MR_Box) (recursion_patterns__PsPtr_8)), ((MR_Box) (recursion_patterns__ProcFreqData_15)), recursion_patterns__STATE_VARIABLE_Map_0_16, recursion_patterns__STATE_VARIABLE_Map_17);
    }
  }
}

static void MR_CALL 
recursion_patterns__update_histogram_4_p_0(
  MR_Word recursion_patterns__MaybeFirstProcInfo_5,
  MR_Word recursion_patterns__SimpleType_6,
  MR_Word recursion_patterns__STATE_VARIABLE_Histogram_0_19,
  MR_Word * recursion_patterns__STATE_VARIABLE_Histogram_20)
{
  {
    MR_bool recursion_patterns__succeeded;
    MR_Word recursion_patterns__Data_18;
    MR_Word recursion_patterns__Data0_8;
    MR_Box recursion_patterns__conv0_Data0_8;

    {
      recursion_patterns__succeeded = mercury__map__search_3_p_0((MR_Word) &report__report__type_ctor_info_recursion_type_simple_0, (MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_type_raw_freq_data_0, recursion_patterns__STATE_VARIABLE_Histogram_0_19, ((MR_Box) (recursion_patterns__SimpleType_6)), &recursion_patterns__conv0_Data0_8);
    }
    if (recursion_patterns__succeeded)
      {
        recursion_patterns__Data0_8 = ((MR_Word) recursion_patterns__conv0_Data0_8);
        recursion_patterns__succeeded = MR_TRUE;
      }
    if (recursion_patterns__succeeded)
      {
        MR_Integer recursion_patterns__Count0_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recursion_patterns__Data0_8, (MR_Integer) 0)));
        MR_Word recursion_patterns__MaybeProfInfo0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Data0_8, (MR_Integer) 1)));
        MR_Word recursion_patterns__Procs0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Data0_8, (MR_Integer) 2)));
        MR_Word recursion_patterns__MaybeProfInfo_15;
        MR_Word recursion_patterns__Procs_16;
        MR_Integer recursion_patterns__Count_17;

        if ((recursion_patterns__MaybeFirstProcInfo_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            recursion_patterns__MaybeProfInfo_15 = recursion_patterns__MaybeProfInfo0_10;
            recursion_patterns__Procs_16 = recursion_patterns__Procs0_11;
          }
        else
          {
            MR_Word recursion_patterns__FirstProcInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__MaybeFirstProcInfo_5, (MR_Integer) 0)));
            MR_Word recursion_patterns__ProfInfo_14;
            MR_Word recursion_patterns__PSDesc_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__FirstProcInfo_12, (MR_Integer) 0)));
            MR_Word recursion_patterns__FirstProfInfo_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__FirstProcInfo_12, (MR_Integer) 1)));
            MR_Word recursion_patterns__PsPtr_57;
            MR_Word recursion_patterns__ProcFreqData_64;
            MR_String recursion_patterns__V_68_68;
            MR_Integer recursion_patterns__V_69_69;
            MR_String recursion_patterns__V_70_70;
            MR_String recursion_patterns__V_71_71;
            MR_String recursion_patterns__V_72_72;
            MR_Word recursion_patterns__ProcFreqData0_58;
            MR_Box recursion_patterns__conv1_ProcFreqData0_58;

            if ((recursion_patterns__MaybeProfInfo0_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              recursion_patterns__ProfInfo_14 = recursion_patterns__FirstProfInfo_56;
            else
              {
                MR_Word recursion_patterns__ProfInfo0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__MaybeProfInfo0_10, (MR_Integer) 0)));
                MR_Word recursion_patterns__OwnA_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__FirstProfInfo_56, (MR_Integer) 0)));
                MR_Word recursion_patterns__InheritA_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__FirstProfInfo_56, (MR_Integer) 1)));
                MR_Word recursion_patterns__OwnB_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__ProfInfo0_13, (MR_Integer) 0)));
                MR_Word recursion_patterns__InheritB_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__ProfInfo0_13, (MR_Integer) 1)));
                MR_Word recursion_patterns__Own_49;
                MR_Word recursion_patterns__Inherit_50;

                {
                  recursion_patterns__Own_49 = measurements__add_own_to_own_2_f_0(recursion_patterns__OwnA_45, recursion_patterns__OwnB_47);
                }
                {
                  recursion_patterns__Inherit_50 = measurements__add_inherit_to_inherit_2_f_0(recursion_patterns__InheritA_46, recursion_patterns__InheritB_48);
                }
                {
                  recursion_patterns__ProfInfo_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), recursion_patterns__ProfInfo_14, 0) = ((MR_Box) (recursion_patterns__Own_49));
                  MR_hl_field(MR_mktag(0), recursion_patterns__ProfInfo_14, 1) = ((MR_Box) (recursion_patterns__Inherit_50));
                }
              }
            {
              recursion_patterns__MaybeProfInfo_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), recursion_patterns__MaybeProfInfo_15, 0) = ((MR_Box) (recursion_patterns__ProfInfo_14));
            }
            recursion_patterns__PsPtr_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__PSDesc_55, (MR_Integer) 0)));
            recursion_patterns__V_68_68 = ((MR_String) (MR_hl_field(MR_mktag(0), recursion_patterns__PSDesc_55, (MR_Integer) 1)));
            recursion_patterns__V_69_69 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recursion_patterns__PSDesc_55, (MR_Integer) 2)));
            recursion_patterns__V_70_70 = ((MR_String) (MR_hl_field(MR_mktag(0), recursion_patterns__PSDesc_55, (MR_Integer) 3)));
            recursion_patterns__V_71_71 = ((MR_String) (MR_hl_field(MR_mktag(0), recursion_patterns__PSDesc_55, (MR_Integer) 4)));
            recursion_patterns__V_72_72 = ((MR_String) (MR_hl_field(MR_mktag(0), recursion_patterns__PSDesc_55, (MR_Integer) 5)));
            {
              recursion_patterns__succeeded = mercury__map__search_3_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_type_raw_proc_freq_data_0, recursion_patterns__Procs0_11, ((MR_Box) (recursion_patterns__PsPtr_57)), &recursion_patterns__conv1_ProcFreqData0_58);
            }
            if (recursion_patterns__succeeded)
              {
                recursion_patterns__ProcFreqData0_58 = ((MR_Word) recursion_patterns__conv1_ProcFreqData0_58);
                recursion_patterns__succeeded = MR_TRUE;
              }
            if (recursion_patterns__succeeded)
              {
                MR_Integer recursion_patterns__Count0_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recursion_patterns__ProcFreqData0_58, (MR_Integer) 0)));
                MR_Word recursion_patterns__ProfInfo0_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__ProcFreqData0_58, (MR_Integer) 1)));
                MR_Word recursion_patterns__ProcDesc_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__ProcFreqData0_58, (MR_Integer) 2)));
                MR_Word recursion_patterns__ProfInfo_62;
                MR_Integer recursion_patterns__Count_63;
                MR_Word recursion_patterns__OwnA_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__FirstProfInfo_56, (MR_Integer) 0)));
                MR_Word recursion_patterns__InheritA_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__FirstProfInfo_56, (MR_Integer) 1)));
                MR_Word recursion_patterns__OwnB_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__ProfInfo0_60, (MR_Integer) 0)));
                MR_Word recursion_patterns__InheritB_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__ProfInfo0_60, (MR_Integer) 1)));
                MR_Word recursion_patterns__Own_81;
                MR_Word recursion_patterns__Inherit_82;

                {
                  recursion_patterns__Own_81 = measurements__add_own_to_own_2_f_0(recursion_patterns__OwnA_77, recursion_patterns__OwnB_79);
                }
                {
                  recursion_patterns__Inherit_82 = measurements__add_inherit_to_inherit_2_f_0(recursion_patterns__InheritA_78, recursion_patterns__InheritB_80);
                }
                {
                  recursion_patterns__ProfInfo_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), recursion_patterns__ProfInfo_62, 0) = ((MR_Box) (recursion_patterns__Own_81));
                  MR_hl_field(MR_mktag(0), recursion_patterns__ProfInfo_62, 1) = ((MR_Box) (recursion_patterns__Inherit_82));
                }
                recursion_patterns__Count_63 = (recursion_patterns__Count0_59 + (MR_Integer) 1);
                {
                  recursion_patterns__ProcFreqData_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), recursion_patterns__ProcFreqData_64, 0) = ((MR_Box) (recursion_patterns__Count_63));
                  MR_hl_field(MR_mktag(0), recursion_patterns__ProcFreqData_64, 1) = ((MR_Box) (recursion_patterns__ProfInfo_62));
                  MR_hl_field(MR_mktag(0), recursion_patterns__ProcFreqData_64, 2) = ((MR_Box) (recursion_patterns__ProcDesc_61));
                }
              }
            else
              {
                {
                  recursion_patterns__ProcFreqData_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), recursion_patterns__ProcFreqData_64, 0) = ((MR_Box) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), recursion_patterns__ProcFreqData_64, 1) = ((MR_Box) (recursion_patterns__FirstProfInfo_56));
                  MR_hl_field(MR_mktag(0), recursion_patterns__ProcFreqData_64, 2) = ((MR_Box) (recursion_patterns__PSDesc_55));
                }
              }
            {
              mercury__map__set_4_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_type_raw_proc_freq_data_0, ((MR_Box) (recursion_patterns__PsPtr_57)), ((MR_Box) (recursion_patterns__ProcFreqData_64)), recursion_patterns__Procs0_11, &recursion_patterns__Procs_16);
            }
          }
        recursion_patterns__Count_17 = (recursion_patterns__Count0_9 + (MR_Integer) 1);
        {
          recursion_patterns__Data_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), recursion_patterns__Data_18, 0) = ((MR_Box) (recursion_patterns__Count_17));
          MR_hl_field(MR_mktag(0), recursion_patterns__Data_18, 1) = ((MR_Box) (recursion_patterns__MaybeProfInfo_15));
          MR_hl_field(MR_mktag(0), recursion_patterns__Data_18, 2) = ((MR_Box) (recursion_patterns__Procs_16));
        }
      }
    else
      {
        MR_Word recursion_patterns__MaybeProfInfo_29;
        MR_Word recursion_patterns__Procs_30;

        if ((recursion_patterns__MaybeFirstProcInfo_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            recursion_patterns__MaybeProfInfo_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            {
              recursion_patterns__Procs_30 = mercury__map__init_0_f_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_type_raw_proc_freq_data_0);
            }
          }
        else
          {
            MR_Word recursion_patterns__V_23_23;
            MR_Word recursion_patterns__V_24_24;
            MR_Word recursion_patterns__FirstProcInfo_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__MaybeFirstProcInfo_5, (MR_Integer) 0)));
            MR_Word recursion_patterns__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__FirstProcInfo_26, (MR_Integer) 0)));

            recursion_patterns__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__FirstProcInfo_26, (MR_Integer) 1)));
            {
              recursion_patterns__MaybeProfInfo_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), recursion_patterns__MaybeProfInfo_29, 0) = ((MR_Box) (recursion_patterns__V_23_23));
            }
            {
              recursion_patterns__V_24_24 = mercury__map__init_0_f_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_type_raw_proc_freq_data_0);
            }
            {
              recursion_patterns__update_procs_map_3_p_0(recursion_patterns__FirstProcInfo_26, recursion_patterns__V_24_24, &recursion_patterns__Procs_30);
            }
          }
        {
          recursion_patterns__Data_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), recursion_patterns__Data_18, 0) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), recursion_patterns__Data_18, 1) = ((MR_Box) (recursion_patterns__MaybeProfInfo_29));
          MR_hl_field(MR_mktag(0), recursion_patterns__Data_18, 2) = ((MR_Box) (recursion_patterns__Procs_30));
        }
      }
    {
      mercury__map__set_4_p_0((MR_Word) &report__report__type_ctor_info_recursion_type_simple_0, (MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_type_raw_freq_data_0, ((MR_Box) (recursion_patterns__SimpleType_6)), ((MR_Box) (recursion_patterns__Data_18)), recursion_patterns__STATE_VARIABLE_Histogram_0_19, recursion_patterns__STATE_VARIABLE_Histogram_20);
    }
  }
}

static void MR_CALL 
recursion_patterns__rec_types_freq_build_histogram_5_p_0(
  MR_Word recursion_patterns__Deep_6,
  MR_Integer recursion_patterns__HeadVar__2_7,
  MR_Word recursion_patterns__CliquePtr_8,
  MR_Word recursion_patterns__STATE_VARIABLE_Histogram_0_27,
  MR_Word * recursion_patterns__STATE_VARIABLE_Histogram_28)
{
  {
    MR_bool recursion_patterns__succeeded;

    {
      recursion_patterns__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_95_116_121_112_101_115_95_102_114_101_113_95_98_117_105_108_100_95_104_105_115_116_111_103_114_97_109_95_95_91_50_93_95_48_5_p_0(recursion_patterns__Deep_6, recursion_patterns__CliquePtr_8, recursion_patterns__STATE_VARIABLE_Histogram_0_27, recursion_patterns__STATE_VARIABLE_Histogram_28);
    }
  }
}

static MR_String MR_CALL 
recursion_patterns__error_to_string_1_f_0(
  MR_Word recursion_patterns__HeadVar__1_1)
{
  {
    MR_bool recursion_patterns__succeeded;
    MR_String recursion_patterns__HeadVar__2_2;
    MR_Word recursion_patterns__Detism_3 = (MR_Word) recursion_patterns__HeadVar__1_1;
    MR_String recursion_patterns__V_7_7;

    {
      recursion_patterns__V_7_7 = mercury__string__string_1_f_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_detism_rep_0, ((MR_Box) (recursion_patterns__Detism_3)));
    }
    {
      recursion_patterns__HeadVar__2_2 = mercury__string__f_43_43_2_f_0(recursion_patterns__V_7_7, (MR_String) " code is not handled");
    }
    return recursion_patterns__HeadVar__2_2;
  }
}

static void MR_CALL 
recursion_patterns__recursions_cross_product_2_4_p_0(
  MR_Integer recursion_patterns__HeadVar__1_1,
  MR_Word recursion_patterns__HeadVar__2_2,
  MR_Word recursion_patterns__HeadVar__3_3,
  MR_Word * recursion_patterns__HeadVar__4_4)
{
  {
    MR_bool recursion_patterns__succeeded;

    if ((recursion_patterns__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *recursion_patterns__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Float recursion_patterns__CostA_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__2_2, (MR_Integer) 0)));
        MR_Float recursion_patterns__ProbA_10 = MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer recursion_patterns__NumB_11;
        MR_Float recursion_patterns__CostB_12;
        MR_Float recursion_patterns__ProbB_13;
        MR_Word recursion_patterns__PairsB_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word recursion_patterns__Pairs0_16;
        MR_Integer recursion_patterns__Num_17;
        MR_Float recursion_patterns__Prob_18;
        MR_Float recursion_patterns__Cost_19;
        MR_Word recursion_patterns__Pair_20;
        MR_Word recursion_patterns__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word recursion_patterns__V_22_22;
        MR_Word recursion_patterns__V_23_23;

        recursion_patterns__NumB_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recursion_patterns__V_21_21, (MR_Integer) 0)));
        recursion_patterns__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__V_21_21, (MR_Integer) 1)));
        recursion_patterns__CostB_12 = MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__V_22_22, (MR_Integer) 0)));
        recursion_patterns__ProbB_13 = MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__V_22_22, (MR_Integer) 1)));
        {
          recursion_patterns__recursions_cross_product_2_4_p_0(recursion_patterns__HeadVar__1_1, recursion_patterns__HeadVar__2_2, recursion_patterns__PairsB_14, &recursion_patterns__Pairs0_16);
        }
        recursion_patterns__Num_17 = (recursion_patterns__HeadVar__1_1 + recursion_patterns__NumB_11);
        {
          recursion_patterns__Prob_18 = measurement_units__and_2_f_0(recursion_patterns__ProbA_10, recursion_patterns__ProbB_13);
        }
        recursion_patterns__Cost_19 = (recursion_patterns__CostA_9 + recursion_patterns__CostB_12);
        {
          recursion_patterns__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), recursion_patterns__V_23_23, 0) = MR_box_float(recursion_patterns__Cost_19);
          MR_hl_field(MR_mktag(0), recursion_patterns__V_23_23, 1) = MR_box_float(recursion_patterns__Prob_18);
        }
        {
          recursion_patterns__Pair_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), recursion_patterns__Pair_20, 0) = ((MR_Box) (recursion_patterns__Num_17));
          MR_hl_field(MR_mktag(0), recursion_patterns__Pair_20, 1) = ((MR_Box) (recursion_patterns__V_23_23));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *recursion_patterns__HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recursion_patterns__Pair_20));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (recursion_patterns__Pairs0_16));
        }
      }
  }
}

static void MR_CALL 
recursion_patterns__recursions_cross_product_3_p_0(
  MR_Word recursion_patterns__HeadVar__1_1,
  MR_Word recursion_patterns__PairsB_2,
  MR_Word * recursion_patterns__HeadVar__3_3)
{
  {
    MR_bool recursion_patterns__succeeded;

    if ((recursion_patterns__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *recursion_patterns__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Integer recursion_patterns__NumA_5;
        MR_Word recursion_patterns__RecA_6;
        MR_Word recursion_patterns__PairsA_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word recursion_patterns__InnerLoop_10;
        MR_Word recursion_patterns__OuterLoopTail_11;
        MR_Word recursion_patterns__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__1_1, (MR_Integer) 0)));

        recursion_patterns__NumA_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recursion_patterns__V_12_12, (MR_Integer) 0)));
        recursion_patterns__RecA_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__V_12_12, (MR_Integer) 1)));
        {
          recursion_patterns__recursions_cross_product_2_4_p_0(recursion_patterns__NumA_5, recursion_patterns__RecA_6, recursion_patterns__PairsB_2, &recursion_patterns__InnerLoop_10);
        }
        {
          recursion_patterns__recursions_cross_product_3_p_0(recursion_patterns__PairsA_7, recursion_patterns__PairsB_2, &recursion_patterns__OuterLoopTail_11);
        }
        {
          *recursion_patterns__HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) &recursion_patterns_scalar_common_1[3], recursion_patterns__InnerLoop_10, recursion_patterns__OuterLoopTail_11);
        }
      }
  }
}

static void MR_CALL 
recursion_patterns__condense_recursions_2_3_p_0(
  MR_Word recursion_patterns__HeadVar__1_1,
  MR_Word recursion_patterns__HeadVar__2_2,
  MR_Word * recursion_patterns__HeadVar__3_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool recursion_patterns__succeeded;

        if ((recursion_patterns__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *recursion_patterns__HeadVar__3_3 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recursion_patterns__HeadVar__1_1));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
          }
        else
          {
            MR_Integer recursion_patterns__NumA_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word recursion_patterns__RecA_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__1_1, (MR_Integer) 1)));
            MR_Integer recursion_patterns__NumB_8;
            MR_Word recursion_patterns__RecB_9;
            MR_Word recursion_patterns__Pairs0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word recursion_patterns__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__2_2, (MR_Integer) 0)));

            recursion_patterns__NumB_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recursion_patterns__V_20_20, (MR_Integer) 0)));
            recursion_patterns__RecB_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__V_20_20, (MR_Integer) 1)));
            recursion_patterns__succeeded = (recursion_patterns__NumA_6 == recursion_patterns__NumB_8);
            if (recursion_patterns__succeeded)
              {
                MR_Float recursion_patterns__CostA_12 = MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__RecA_7, (MR_Integer) 0)));
                MR_Float recursion_patterns__ProbabilityA_13 = MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__RecA_7, (MR_Integer) 1)));
                MR_Float recursion_patterns__CostB_14 = MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__RecB_9, (MR_Integer) 0)));
                MR_Float recursion_patterns__ProbabilityB_15 = MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__RecB_9, (MR_Integer) 1)));
                MR_Float recursion_patterns__Cost_16;
                MR_Float recursion_patterns__Probability_17;
                MR_Word recursion_patterns__Rec_18;
                MR_Word recursion_patterns__V_21_21;
                MR_Word recursion_patterns__V_22_22;
                MR_Float recursion_patterns__V_23_23;
                MR_Word recursion_patterns__V_24_24;
                MR_Float recursion_patterns__V_25_25;
                MR_Word recursion_patterns__V_27_27;
                MR_Word recursion_patterns__V_29_29;

                {
                  recursion_patterns__V_23_23 = measurement_units__probability_to_float_1_f_0(recursion_patterns__ProbabilityA_13);
                }
                {
                  recursion_patterns__V_25_25 = measurement_units__probability_to_float_1_f_0(recursion_patterns__ProbabilityB_15);
                }
                {
                  recursion_patterns__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), recursion_patterns__V_24_24, 0) = MR_box_float(recursion_patterns__V_25_25);
                  MR_hl_field(MR_mktag(1), recursion_patterns__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  recursion_patterns__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), recursion_patterns__V_21_21, 0) = MR_box_float(recursion_patterns__V_23_23);
                  MR_hl_field(MR_mktag(1), recursion_patterns__V_21_21, 1) = ((MR_Box) (recursion_patterns__V_24_24));
                }
                {
                  recursion_patterns__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), recursion_patterns__V_27_27, 0) = MR_box_float(recursion_patterns__CostB_14);
                  MR_hl_field(MR_mktag(1), recursion_patterns__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  recursion_patterns__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), recursion_patterns__V_22_22, 0) = MR_box_float(recursion_patterns__CostA_12);
                  MR_hl_field(MR_mktag(1), recursion_patterns__V_22_22, 1) = ((MR_Box) (recursion_patterns__V_27_27));
                }
                {
                  measurements__weighted_average_3_p_0(recursion_patterns__V_21_21, recursion_patterns__V_22_22, &recursion_patterns__Cost_16);
                }
                {
                  recursion_patterns__Probability_17 = measurement_units__or_2_f_0(recursion_patterns__ProbabilityA_13, recursion_patterns__ProbabilityB_15);
                }
                {
                  recursion_patterns__Rec_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), recursion_patterns__Rec_18, 0) = MR_box_float(recursion_patterns__Cost_16);
                  MR_hl_field(MR_mktag(0), recursion_patterns__Rec_18, 1) = MR_box_float(recursion_patterns__Probability_17);
                }
                {
                  recursion_patterns__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), recursion_patterns__V_29_29, 0) = ((MR_Box) (recursion_patterns__NumA_6));
                  MR_hl_field(MR_mktag(0), recursion_patterns__V_29_29, 1) = ((MR_Box) (recursion_patterns__Rec_18));
                }
                /* direct tailcall eliminated */
                {
                  MR_Word recursion_patterns__HeadVar__1__tmp_copy_1 = recursion_patterns__V_29_29;
                  MR_Word recursion_patterns__HeadVar__2__tmp_copy_2 = recursion_patterns__Pairs0_10;

                  recursion_patterns__HeadVar__2_2 = recursion_patterns__HeadVar__2__tmp_copy_2;
                  recursion_patterns__HeadVar__1_1 = recursion_patterns__HeadVar__1__tmp_copy_1;
                }
                continue;
              }
            else
              {
                MR_Word recursion_patterns__Pairs1_19;
                MR_Word recursion_patterns__Pairs0_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__2_2, (MR_Integer) 1)));
                MR_Word recursion_patterns__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__2_2, (MR_Integer) 0)));

                {
                  recursion_patterns__condense_recursions_2_3_p_0(recursion_patterns__V_37_37, recursion_patterns__Pairs0_35, &recursion_patterns__Pairs1_19);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *recursion_patterns__HeadVar__3_3 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recursion_patterns__HeadVar__1_1));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (recursion_patterns__Pairs1_19));
                }
              }
          }
      }
      break;
    }
}

static void MR_CALL 
recursion_patterns__merge_recursion_data_sequence_3_p_0(
  MR_Word recursion_patterns__A_4,
  MR_Word recursion_patterns__B_5,
  MR_Word * recursion_patterns__Result_6)
{
  {
    MR_bool recursion_patterns__succeeded;

    if ((recursion_patterns__A_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *recursion_patterns__Result_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word recursion_patterns__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__A_4, (MR_Integer) 2)));
        MR_Integer recursion_patterns__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), recursion_patterns__A_4, (MR_Integer) 1)));
        MR_Word recursion_patterns__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__A_4, (MR_Integer) 0)));

        if ((recursion_patterns__B_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *recursion_patterns__Result_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_Word recursion_patterns__RecursionsB_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__B_5, (MR_Integer) 0)));
            MR_Integer recursion_patterns__MaxLevelB_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), recursion_patterns__B_5, (MR_Integer) 1)));
            MR_Word recursion_patterns__ErrorsB_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__B_5, (MR_Integer) 2)));
            MR_Word recursion_patterns__Recursions0_13;
            MR_Word recursion_patterns__Recursions1_14;
            MR_Word recursion_patterns__Recursions_15;
            MR_Integer recursion_patterns__MaxLevel_16;
            MR_Word recursion_patterns__Errors_17;

            {
              recursion_patterns__recursions_cross_product_3_p_0(recursion_patterns__V_25_25, recursion_patterns__RecursionsB_10, &recursion_patterns__Recursions0_13);
            }
            {
              mercury__list__sort_2_p_0((MR_Word) &recursion_patterns_scalar_common_1[3], recursion_patterns__Recursions0_13, &recursion_patterns__Recursions1_14);
            }
            if ((recursion_patterns__Recursions1_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              recursion_patterns__Recursions_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            else
              {
                MR_Word recursion_patterns__Pairs0_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__Recursions1_14, (MR_Integer) 1)));
                MR_Word recursion_patterns__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__Recursions1_14, (MR_Integer) 0)));

                {
                  recursion_patterns__condense_recursions_2_3_p_0(recursion_patterns__V_30_30, recursion_patterns__Pairs0_28, &recursion_patterns__Recursions_15);
                }
              }
            recursion_patterns__MaxLevel_16 = (recursion_patterns__V_24_24 + recursion_patterns__MaxLevelB_11);
            {
              recursion_patterns__Errors_17 = mercury__set__union_2_f_0((MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_error_0, recursion_patterns__V_23_23, recursion_patterns__ErrorsB_12);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              *recursion_patterns__Result_6 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recursion_patterns__Recursions_15));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (recursion_patterns__MaxLevel_16));
              MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (recursion_patterns__Errors_17));
            }
          }
      }
  }
}

static void MR_CALL 
recursion_patterns__merge_recursion_data_after_branch_3_p_0(
  MR_Word recursion_patterns__A_4,
  MR_Word recursion_patterns__B_5,
  MR_Word * recursion_patterns__Result_6)
{
  {
    MR_bool recursion_patterns__succeeded;

    if ((recursion_patterns__A_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((recursion_patterns__B_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *recursion_patterns__Result_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
        *recursion_patterns__Result_6 = recursion_patterns__B_5;
    else
      {
        MR_Word recursion_patterns__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__A_4, (MR_Integer) 2)));
        MR_Integer recursion_patterns__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(1), recursion_patterns__A_4, (MR_Integer) 1)));
        MR_Word recursion_patterns__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__A_4, (MR_Integer) 0)));

        if ((recursion_patterns__B_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *recursion_patterns__Result_6 = recursion_patterns__A_4;
        else
          {
            MR_Word recursion_patterns__RecursionsB_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__B_5, (MR_Integer) 0)));
            MR_Integer recursion_patterns__MaxLevelB_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), recursion_patterns__B_5, (MR_Integer) 1)));
            MR_Word recursion_patterns__ErrorsB_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__B_5, (MR_Integer) 2)));
            MR_Word recursion_patterns__Recursions0_13;
            MR_Word recursion_patterns__Recursions_14;
            MR_Integer recursion_patterns__MaxLevel_15;
            MR_Word recursion_patterns__Errors_16;

            {
              recursion_patterns__Recursions0_13 = mercury__assoc_list__merge_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_level_0, recursion_patterns__V_28_28, recursion_patterns__RecursionsB_10);
            }
            if ((recursion_patterns__Recursions0_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              recursion_patterns__Recursions_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            else
              {
                MR_Word recursion_patterns__Pairs0_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__Recursions0_13, (MR_Integer) 1)));
                MR_Word recursion_patterns__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__Recursions0_13, (MR_Integer) 0)));

                {
                  recursion_patterns__condense_recursions_2_3_p_0(recursion_patterns__V_33_33, recursion_patterns__Pairs0_31, &recursion_patterns__Recursions_14);
                }
              }
            {
              recursion_patterns__MaxLevel_15 = mercury__int__max_2_f_0(recursion_patterns__V_27_27, recursion_patterns__MaxLevelB_11);
            }
            {
              recursion_patterns__Errors_16 = mercury__set__union_2_f_0((MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_error_0, recursion_patterns__V_26_26, recursion_patterns__ErrorsB_12);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              *recursion_patterns__Result_6 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recursion_patterns__Recursions_14));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (recursion_patterns__MaxLevel_15));
              MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (recursion_patterns__Errors_16));
            }
          }
      }
  }
}

static void MR_CALL 
recursion_patterns__atomic_goal_recursion_data_4_p_0(
  MR_Word recursion_patterns__Info_5,
  MR_Word recursion_patterns__RevGoalPath_6,
  MR_Word recursion_patterns__AtomicGoal_7,
  MR_Word * recursion_patterns__RecursionData_8)
{
  {
    MR_bool recursion_patterns__succeeded;
    MR_Word recursion_patterns__RecursionLevel_33;
    MR_Integer recursion_patterns__RecursiveCalls_47;
    MR_Word recursion_patterns__V_61_61;
    MR_Word recursion_patterns__V_63_63;
    MR_Word recursion_patterns__V_48_48;

    switch (MR_tag((MR_Word) recursion_patterns__AtomicGoal_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          MR_Word recursion_patterns__V_58_58;
          MR_Float recursion_patterns__V_60_60;

          {
            recursion_patterns__V_60_60 = measurement_units__certain_0_f_0();
          }
          {
            recursion_patterns__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), recursion_patterns__V_58_58, 0) = MR_box_float((MR_Float) 0.0000000000000000);
            MR_hl_field(MR_mktag(0), recursion_patterns__V_58_58, 1) = MR_box_float(recursion_patterns__V_60_60);
          }
          {
            recursion_patterns__RecursionLevel_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), recursion_patterns__RecursionLevel_33, 0) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(0), recursion_patterns__RecursionLevel_33, 1) = ((MR_Box) (recursion_patterns__V_58_58));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), recursion_patterns__AtomicGoal_7, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 8:
          case (MR_Integer) 9:
            {
              MR_Word recursion_patterns__V_58_58;
              MR_Float recursion_patterns__V_60_60;

              {
                recursion_patterns__V_60_60 = measurement_units__certain_0_f_0();
              }
              {
                recursion_patterns__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), recursion_patterns__V_58_58, 0) = MR_box_float((MR_Float) 0.0000000000000000);
                MR_hl_field(MR_mktag(0), recursion_patterns__V_58_58, 1) = MR_box_float(recursion_patterns__V_60_60);
              }
              {
                recursion_patterns__RecursionLevel_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), recursion_patterns__RecursionLevel_33, 0) = ((MR_Box) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(0), recursion_patterns__RecursionLevel_33, 1) = ((MR_Box) (recursion_patterns__V_58_58));
              }
            }
            break;
          case (MR_Integer) 5:
          case (MR_Integer) 6:
          case (MR_Integer) 7:
            {
              MR_Word recursion_patterns__ThisClique_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Info_5, (MR_Integer) 0)));
              MR_Word recursion_patterns__CallSiteMap_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Info_5, (MR_Integer) 1)));
              MR_Word recursion_patterns__CostAndCallees_45;
              MR_Word recursion_patterns__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Info_5, (MR_Integer) 2)));
              MR_Box recursion_patterns__conv0_CostAndCallees_45;

              {
                mercury__map__lookup_3_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, (MR_Word) &recursion_patterns_scalar_common_2[0], recursion_patterns__CallSiteMap_43, ((MR_Box) (recursion_patterns__RevGoalPath_6)), &recursion_patterns__conv0_CostAndCallees_45);
              }
              recursion_patterns__CostAndCallees_45 = ((MR_Word) recursion_patterns__conv0_CostAndCallees_45);
              {
                recursion_patterns__succeeded = analysis_utils__cost_and_callees_is_recursive_2_p_0(recursion_patterns__ThisClique_42, recursion_patterns__CostAndCallees_45);
              }
              if (recursion_patterns__succeeded)
                {
                  MR_Word recursion_patterns__V_50_50;
                  MR_Float recursion_patterns__V_52_52;

                  {
                    recursion_patterns__V_52_52 = measurement_units__certain_0_f_0();
                  }
                  {
                    recursion_patterns__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), recursion_patterns__V_50_50, 0) = MR_box_float((MR_Float) 0.0000000000000000);
                    MR_hl_field(MR_mktag(0), recursion_patterns__V_50_50, 1) = MR_box_float(recursion_patterns__V_52_52);
                  }
                  {
                    recursion_patterns__RecursionLevel_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), recursion_patterns__RecursionLevel_33, 0) = ((MR_Box) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(0), recursion_patterns__RecursionLevel_33, 1) = ((MR_Box) (recursion_patterns__V_50_50));
                  }
                }
              else
                {
                  MR_Float recursion_patterns__CostPercall_46;
                  MR_Word recursion_patterns__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__CostAndCallees_45, (MR_Integer) 0)));
                  MR_Word recursion_patterns__V_55_55;
                  MR_Float recursion_patterns__V_56_56;
                  MR_Integer recursion_patterns__V_64_64 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recursion_patterns__CostAndCallees_45, (MR_Integer) 1)));
                  MR_Word recursion_patterns__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__CostAndCallees_45, (MR_Integer) 2)));
                  MR_Word recursion_patterns__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__CostAndCallees_45, (MR_Integer) 3)));

                  {
                    recursion_patterns__CostPercall_46 = measurements__cs_cost_get_percall_1_f_0(recursion_patterns__V_53_53);
                  }
                  {
                    recursion_patterns__V_56_56 = measurement_units__certain_0_f_0();
                  }
                  {
                    recursion_patterns__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), recursion_patterns__V_55_55, 0) = MR_box_float(recursion_patterns__CostPercall_46);
                    MR_hl_field(MR_mktag(0), recursion_patterns__V_55_55, 1) = MR_box_float(recursion_patterns__V_56_56);
                  }
                  {
                    recursion_patterns__RecursionLevel_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), recursion_patterns__RecursionLevel_33, 0) = ((MR_Box) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(0), recursion_patterns__RecursionLevel_33, 1) = ((MR_Box) (recursion_patterns__V_55_55));
                  }
                }
            }
            break;
        }
        break;
    }
    recursion_patterns__RecursiveCalls_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recursion_patterns__RecursionLevel_33, (MR_Integer) 0)));
    recursion_patterns__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__RecursionLevel_33, (MR_Integer) 1)));
    {
      recursion_patterns__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), recursion_patterns__V_61_61, 0) = ((MR_Box) (recursion_patterns__RecursionLevel_33));
      MR_hl_field(MR_mktag(1), recursion_patterns__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      recursion_patterns__V_63_63 = mercury__set__init_0_f_0((MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_error_0);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      *recursion_patterns__RecursionData_8 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recursion_patterns__V_61_61));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (recursion_patterns__RecursiveCalls_47));
      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (recursion_patterns__V_63_63));
    }
  }
}

static void MR_CALL 
recursion_patterns__switch_recursion_data_7_p_0_2(
  MR_Box recursion_patterns__closure_arg,
  MR_Box recursion_patterns__wrapper_arg_1,
  MR_Box recursion_patterns__wrapper_arg_2,
  MR_Box * recursion_patterns__wrapper_arg_3)
{
  {
    MR_Box recursion_patterns__closure = recursion_patterns__closure_arg;
    MR_Word recursion_patterns__conv2_HeadVar__4_15;

    {
      recursion_patterns__IntroducedFrom__pred__recursion_data_and_probability__756__1_4_p_0(MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__closure, (MR_Integer) 3))), ((MR_Integer) recursion_patterns__wrapper_arg_1), ((MR_Word) recursion_patterns__wrapper_arg_2), &recursion_patterns__conv2_HeadVar__4_15);
    }
    *recursion_patterns__wrapper_arg_3 = ((MR_Box) (recursion_patterns__conv2_HeadVar__4_15));
  }
}

static void MR_CALL 
recursion_patterns__switch_recursion_data_7_p_0_1(
  MR_Box recursion_patterns__closure_arg,
  MR_Box recursion_patterns__wrapper_arg_1,
  MR_Box recursion_patterns__wrapper_arg_2,
  MR_Box * recursion_patterns__wrapper_arg_3)
{
  {
    MR_Box recursion_patterns__closure = recursion_patterns__closure_arg;
    MR_Word recursion_patterns__conv0_HeadVar__4_15;

    {
      recursion_patterns__IntroducedFrom__pred__recursion_data_and_probability__756__1_4_p_0(MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__closure, (MR_Integer) 3))), ((MR_Integer) recursion_patterns__wrapper_arg_1), ((MR_Word) recursion_patterns__wrapper_arg_2), &recursion_patterns__conv0_HeadVar__4_15);
    }
    *recursion_patterns__wrapper_arg_3 = ((MR_Box) (recursion_patterns__conv0_HeadVar__4_15));
  }
}

static void MR_CALL 
recursion_patterns__switch_recursion_data_7_p_0(
  MR_Word recursion_patterns__Info_1,
  MR_Word recursion_patterns__RevGoalPath_2,
  MR_Integer recursion_patterns__CaseNum_3,
  MR_Word recursion_patterns__HeadVar__4_4,
  MR_Float recursion_patterns__TotalCalls_5,
  MR_Integer recursion_patterns__CallsRemaining_6,
  MR_Word * recursion_patterns__RecursionData_7)
{
  {
    MR_bool recursion_patterns__succeeded;

    if ((recursion_patterns__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word recursion_patterns__TypeCtorInfo_18_79;
        MR_Float recursion_patterns__FailProb_14;
        MR_Float recursion_patterns__V_16_16;
        MR_Float recursion_patterns__V_17_17;
        MR_Word recursion_patterns__V_59_59;
        MR_Word recursion_patterns__V_60_60;
        MR_Float recursion_patterns__V_61_61;
        MR_Word recursion_patterns__Errors_68;
        MR_Word recursion_patterns__STATE_VARIABLE_Recursions_0_69;
        MR_Word recursion_patterns__STATE_VARIABLE_Recursions_70;
        MR_Word recursion_patterns__V_71_71;

        {
          recursion_patterns__V_17_17 = mercury__float__float_1_f_0(recursion_patterns__CallsRemaining_6);
        }
        {
          recursion_patterns__V_16_16 = mercury__float__f_slash_2_f_0(recursion_patterns__V_17_17, recursion_patterns__TotalCalls_5);
        }
        {
          recursion_patterns__FailProb_14 = measurement_units__probable_1_f_0(recursion_patterns__V_16_16);
        }
        {
          recursion_patterns__V_61_61 = measurement_units__certain_0_f_0();
        }
        {
          recursion_patterns__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), recursion_patterns__V_60_60, 0) = MR_box_float((MR_Float) 0.0000000000000000);
          MR_hl_field(MR_mktag(0), recursion_patterns__V_60_60, 1) = MR_box_float(recursion_patterns__V_61_61);
        }
        {
          recursion_patterns__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), recursion_patterns__V_59_59, 0) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(0), recursion_patterns__V_59_59, 1) = ((MR_Box) (recursion_patterns__V_60_60));
        }
        {
          recursion_patterns__STATE_VARIABLE_Recursions_0_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), recursion_patterns__STATE_VARIABLE_Recursions_0_69, 0) = ((MR_Box) (recursion_patterns__V_59_59));
          MR_hl_field(MR_mktag(1), recursion_patterns__STATE_VARIABLE_Recursions_0_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          recursion_patterns__Errors_68 = mercury__set__init_0_f_0((MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_error_0);
        }
        {
          recursion_patterns__V_71_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), recursion_patterns__V_71_71, 0) = ((MR_Box) (&recursion_patterns_scalar_common_4[2]));
          MR_hl_field(MR_mktag(0), recursion_patterns__V_71_71, 1) = ((MR_Box) (recursion_patterns__switch_recursion_data_7_p_0_1));
          MR_hl_field(MR_mktag(0), recursion_patterns__V_71_71, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), recursion_patterns__V_71_71, 3) = MR_box_float(recursion_patterns__FailProb_14);
        }
        recursion_patterns__TypeCtorInfo_18_79 = (MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_level_0;
        {
          mercury__assoc_list__map_values_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, recursion_patterns__TypeCtorInfo_18_79, recursion_patterns__TypeCtorInfo_18_79, recursion_patterns__V_71_71, recursion_patterns__STATE_VARIABLE_Recursions_0_69, &recursion_patterns__STATE_VARIABLE_Recursions_70);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          *recursion_patterns__RecursionData_7 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recursion_patterns__STATE_VARIABLE_Recursions_70));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (recursion_patterns__Errors_68));
        }
      }
    else
      {
        MR_Word recursion_patterns__Case_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__4_4, (MR_Integer) 0)));
        MR_Word recursion_patterns__Cases_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__4_4, (MR_Integer) 1)));
        MR_Word recursion_patterns__Goal_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Case_23, (MR_Integer) 2)));
        MR_Word recursion_patterns__RevArmPath_31;
        MR_Word recursion_patterns__CaseRecursionData0_32;
        MR_Word recursion_patterns__CoverageInfo_33;
        MR_Integer recursion_patterns__Calls_35;
        MR_Float recursion_patterns__CaseProb_36;
        MR_Word recursion_patterns__CaseRecursionData_37;
        MR_Word recursion_patterns__CasesRecursionData_38;
        MR_Word recursion_patterns__V_39_39;
        MR_Word recursion_patterns__V_41_41;
        MR_Word recursion_patterns__V_42_42;
        MR_Float recursion_patterns__V_46_46;
        MR_Float recursion_patterns__V_47_47;
        MR_Integer recursion_patterns__V_48_48;
        MR_Integer recursion_patterns__V_49_49;
        MR_Word recursion_patterns__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Case_23, (MR_Integer) 0)));
        MR_Word recursion_patterns__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Case_23, (MR_Integer) 1)));
        MR_Word recursion_patterns__V_51_51;
        MR_Word recursion_patterns__V_52_52;
        MR_Word recursion_patterns__V_53_53;
        MR_Word recursion_patterns__V_54_54;
        MR_Box recursion_patterns__conv1_CoverageInfo_33;
        MR_Integer recursion_patterns__CallsPrime_34;

        {
          recursion_patterns__V_39_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), recursion_patterns__V_39_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), recursion_patterns__V_39_39, 1) = ((MR_Box) (recursion_patterns__CaseNum_3));
          MR_hl_field(MR_mktag(3), recursion_patterns__V_39_39, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          recursion_patterns__RevArmPath_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), recursion_patterns__RevArmPath_31, 0) = ((MR_Box) (recursion_patterns__RevGoalPath_2));
          MR_hl_field(MR_mktag(1), recursion_patterns__RevArmPath_31, 1) = ((MR_Box) (recursion_patterns__V_39_39));
        }
        {
          recursion_patterns__goal_recursion_data_4_p_0(recursion_patterns__Info_1, recursion_patterns__RevArmPath_31, recursion_patterns__Goal_30, &recursion_patterns__CaseRecursionData0_32);
        }
        recursion_patterns__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Info_1, (MR_Integer) 0)));
        recursion_patterns__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Info_1, (MR_Integer) 1)));
        recursion_patterns__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Info_1, (MR_Integer) 2)));
        recursion_patterns__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Goal_30, (MR_Integer) 0)));
        recursion_patterns__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Goal_30, (MR_Integer) 1)));
        recursion_patterns__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Goal_30, (MR_Integer) 2)));
        {
          recursion_patterns__conv1_CoverageInfo_33 = mdbcomp__goal_path__get_goal_attribute_det_2_f_0((MR_Word) &coverage__coverage__type_ctor_info_coverage_info_0, recursion_patterns__V_41_41, recursion_patterns__V_42_42);
        }
        recursion_patterns__CoverageInfo_33 = ((MR_Word) recursion_patterns__conv1_CoverageInfo_33);
        {
          recursion_patterns__succeeded = coverage__get_coverage_before_2_p_0(recursion_patterns__CoverageInfo_33, &recursion_patterns__CallsPrime_34);
        }
        if (recursion_patterns__succeeded)
          recursion_patterns__Calls_35 = recursion_patterns__CallsPrime_34;
        else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "recursion_patterns", (MR_String) "predicate \140recursion_patterns.switch_recursion_data\'/7", (MR_String) "expected coverage information");
              return;
            }
          }
        {
          recursion_patterns__V_47_47 = mercury__float__float_1_f_0(recursion_patterns__Calls_35);
        }
        {
          recursion_patterns__V_46_46 = mercury__float__f_slash_2_f_0(recursion_patterns__V_47_47, recursion_patterns__TotalCalls_5);
        }
        {
          recursion_patterns__CaseProb_36 = measurement_units__probable_1_f_0(recursion_patterns__V_46_46);
        }
        if ((recursion_patterns__CaseRecursionData0_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          recursion_patterns__CaseRecursionData_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_Word recursion_patterns__TypeCtorInfo_18_94;
            MR_Integer recursion_patterns__MaxLevel_82 = ((MR_Integer) (MR_hl_field(MR_mktag(1), recursion_patterns__CaseRecursionData0_32, (MR_Integer) 1)));
            MR_Word recursion_patterns__Errors_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__CaseRecursionData0_32, (MR_Integer) 2)));
            MR_Word recursion_patterns__STATE_VARIABLE_Recursions_0_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__CaseRecursionData0_32, (MR_Integer) 0)));
            MR_Word recursion_patterns__STATE_VARIABLE_Recursions_85;
            MR_Word recursion_patterns__V_86_86;

            {
              recursion_patterns__V_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), recursion_patterns__V_86_86, 0) = ((MR_Box) (&recursion_patterns_scalar_common_4[2]));
              MR_hl_field(MR_mktag(0), recursion_patterns__V_86_86, 1) = ((MR_Box) (recursion_patterns__switch_recursion_data_7_p_0_2));
              MR_hl_field(MR_mktag(0), recursion_patterns__V_86_86, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), recursion_patterns__V_86_86, 3) = MR_box_float(recursion_patterns__CaseProb_36);
            }
            recursion_patterns__TypeCtorInfo_18_94 = (MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_level_0;
            {
              mercury__assoc_list__map_values_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, recursion_patterns__TypeCtorInfo_18_94, recursion_patterns__TypeCtorInfo_18_94, recursion_patterns__V_86_86, recursion_patterns__STATE_VARIABLE_Recursions_0_84, &recursion_patterns__STATE_VARIABLE_Recursions_85);
            }
            {
              recursion_patterns__CaseRecursionData_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), recursion_patterns__CaseRecursionData_37, 0) = ((MR_Box) (recursion_patterns__STATE_VARIABLE_Recursions_85));
              MR_hl_field(MR_mktag(1), recursion_patterns__CaseRecursionData_37, 1) = ((MR_Box) (recursion_patterns__MaxLevel_82));
              MR_hl_field(MR_mktag(1), recursion_patterns__CaseRecursionData_37, 2) = ((MR_Box) (recursion_patterns__Errors_83));
            }
          }
        recursion_patterns__V_48_48 = (recursion_patterns__CaseNum_3 + (MR_Integer) 1);
        recursion_patterns__V_49_49 = (recursion_patterns__CallsRemaining_6 - recursion_patterns__Calls_35);
        {
          recursion_patterns__switch_recursion_data_7_p_0(recursion_patterns__Info_1, recursion_patterns__RevGoalPath_2, recursion_patterns__V_48_48, recursion_patterns__Cases_24, recursion_patterns__TotalCalls_5, recursion_patterns__V_49_49, &recursion_patterns__CasesRecursionData_38);
        }
        {
          recursion_patterns__merge_recursion_data_after_branch_3_p_0(recursion_patterns__CaseRecursionData_37, recursion_patterns__CasesRecursionData_38, recursion_patterns__RecursionData_7);
        }
      }
  }
}

static void MR_CALL 
recursion_patterns__ite_recursion_data_7_p_0_2(
  MR_Box recursion_patterns__closure_arg,
  MR_Box recursion_patterns__wrapper_arg_1,
  MR_Box recursion_patterns__wrapper_arg_2,
  MR_Box * recursion_patterns__wrapper_arg_3)
{
  {
    MR_Box recursion_patterns__closure = recursion_patterns__closure_arg;
    MR_Word recursion_patterns__conv3_HeadVar__4_15;

    {
      recursion_patterns__IntroducedFrom__pred__recursion_data_and_probability__756__1_4_p_0(MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__closure, (MR_Integer) 3))), ((MR_Integer) recursion_patterns__wrapper_arg_1), ((MR_Word) recursion_patterns__wrapper_arg_2), &recursion_patterns__conv3_HeadVar__4_15);
    }
    *recursion_patterns__wrapper_arg_3 = ((MR_Box) (recursion_patterns__conv3_HeadVar__4_15));
  }
}

static void MR_CALL 
recursion_patterns__ite_recursion_data_7_p_0_1(
  MR_Box recursion_patterns__closure_arg,
  MR_Box recursion_patterns__wrapper_arg_1,
  MR_Box recursion_patterns__wrapper_arg_2,
  MR_Box * recursion_patterns__wrapper_arg_3)
{
  {
    MR_Box recursion_patterns__closure = recursion_patterns__closure_arg;
    MR_Word recursion_patterns__conv2_HeadVar__4_15;

    {
      recursion_patterns__IntroducedFrom__pred__recursion_data_and_probability__756__1_4_p_0(MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__closure, (MR_Integer) 3))), ((MR_Integer) recursion_patterns__wrapper_arg_1), ((MR_Word) recursion_patterns__wrapper_arg_2), &recursion_patterns__conv2_HeadVar__4_15);
    }
    *recursion_patterns__wrapper_arg_3 = ((MR_Box) (recursion_patterns__conv2_HeadVar__4_15));
  }
}

static void MR_CALL 
recursion_patterns__ite_recursion_data_7_p_0(
  MR_Word recursion_patterns__Info_8,
  MR_Word recursion_patterns__RevGoalPath_9,
  MR_Word recursion_patterns__Cond_10,
  MR_Word recursion_patterns__Then_11,
  MR_Word recursion_patterns__Else_12,
  MR_Integer recursion_patterns__Calls_13,
  MR_Word * recursion_patterns__STATE_VARIABLE_RecursionData_28)
{
  {
    MR_bool recursion_patterns__succeeded;
    MR_Word recursion_patterns__TypeCtorInfo_49_49;
    MR_Word recursion_patterns__CondRecursionData_15;
    MR_Word recursion_patterns__ThenRecursionData0_16;
    MR_Word recursion_patterns__ElseRecursionData0_17;
    MR_Word recursion_patterns__Coverage_18;
    MR_Word recursion_patterns__ThenCoverageInfo_19;
    MR_Word recursion_patterns__ElseCoverageInfo_20;
    MR_Integer recursion_patterns__ThenCalls_21;
    MR_Integer recursion_patterns__ElseCalls_22;
    MR_Float recursion_patterns__CallsF_23;
    MR_Float recursion_patterns__ThenProb_24;
    MR_Float recursion_patterns__ElseProb_25;
    MR_Word recursion_patterns__ThenRecursionData_26;
    MR_Word recursion_patterns__ElseRecursionData_27;
    MR_Word recursion_patterns__V_29_29;
    MR_Word recursion_patterns__V_31_31;
    MR_Word recursion_patterns__V_33_33;
    MR_Word recursion_patterns__V_35_35;
    MR_Word recursion_patterns__V_36_36;
    MR_Float recursion_patterns__V_37_37;
    MR_Float recursion_patterns__V_38_38;
    MR_Float recursion_patterns__V_39_39;
    MR_Float recursion_patterns__V_40_40;
    MR_Word recursion_patterns__STATE_VARIABLE_RecursionData_41_41;
    MR_Word recursion_patterns__V_43_43;
    MR_Word recursion_patterns__V_44_44;
    MR_Word recursion_patterns__V_45_45;
    MR_Word recursion_patterns__V_46_46;
    MR_Box recursion_patterns__conv0_ThenCoverageInfo_19;
    MR_Word recursion_patterns__V_47_47;
    MR_Word recursion_patterns__V_48_48;
    MR_Box recursion_patterns__conv1_ElseCoverageInfo_20;

    {
      recursion_patterns__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), recursion_patterns__V_29_29, 0) = ((MR_Box) (recursion_patterns__RevGoalPath_9));
      MR_hl_field(MR_mktag(1), recursion_patterns__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      recursion_patterns__goal_recursion_data_4_p_0(recursion_patterns__Info_8, recursion_patterns__V_29_29, recursion_patterns__Cond_10, &recursion_patterns__CondRecursionData_15);
    }
    {
      recursion_patterns__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), recursion_patterns__V_31_31, 0) = ((MR_Box) (recursion_patterns__RevGoalPath_9));
      MR_hl_field(MR_mktag(1), recursion_patterns__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
    }
    {
      recursion_patterns__goal_recursion_data_4_p_0(recursion_patterns__Info_8, recursion_patterns__V_31_31, recursion_patterns__Then_11, &recursion_patterns__ThenRecursionData0_16);
    }
    {
      recursion_patterns__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), recursion_patterns__V_33_33, 0) = ((MR_Box) (recursion_patterns__RevGoalPath_9));
      MR_hl_field(MR_mktag(1), recursion_patterns__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
    }
    {
      recursion_patterns__goal_recursion_data_4_p_0(recursion_patterns__Info_8, recursion_patterns__V_33_33, recursion_patterns__Else_12, &recursion_patterns__ElseRecursionData0_17);
    }
    recursion_patterns__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Info_8, (MR_Integer) 0)));
    recursion_patterns__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Info_8, (MR_Integer) 1)));
    recursion_patterns__Coverage_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Info_8, (MR_Integer) 2)));
    recursion_patterns__TypeCtorInfo_49_49 = (MR_Word) &coverage__coverage__type_ctor_info_coverage_info_0;
    recursion_patterns__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Then_11, (MR_Integer) 0)));
    recursion_patterns__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Then_11, (MR_Integer) 1)));
    recursion_patterns__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Then_11, (MR_Integer) 2)));
    {
      recursion_patterns__conv0_ThenCoverageInfo_19 = mdbcomp__goal_path__get_goal_attribute_det_2_f_0(recursion_patterns__TypeCtorInfo_49_49, recursion_patterns__Coverage_18, recursion_patterns__V_35_35);
    }
    recursion_patterns__ThenCoverageInfo_19 = ((MR_Word) recursion_patterns__conv0_ThenCoverageInfo_19);
    recursion_patterns__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Else_12, (MR_Integer) 0)));
    recursion_patterns__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Else_12, (MR_Integer) 1)));
    recursion_patterns__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Else_12, (MR_Integer) 2)));
    {
      recursion_patterns__conv1_ElseCoverageInfo_20 = mdbcomp__goal_path__get_goal_attribute_det_2_f_0(recursion_patterns__TypeCtorInfo_49_49, recursion_patterns__Coverage_18, recursion_patterns__V_36_36);
    }
    recursion_patterns__ElseCoverageInfo_20 = ((MR_Word) recursion_patterns__conv1_ElseCoverageInfo_20);
    {
      coverage__get_coverage_before_det_2_p_0(recursion_patterns__ThenCoverageInfo_19, &recursion_patterns__ThenCalls_21);
    }
    {
      coverage__get_coverage_before_det_2_p_0(recursion_patterns__ElseCoverageInfo_20, &recursion_patterns__ElseCalls_22);
    }
    {
      recursion_patterns__CallsF_23 = mercury__float__float_1_f_0(recursion_patterns__Calls_13);
    }
    {
      recursion_patterns__V_38_38 = mercury__float__float_1_f_0(recursion_patterns__ThenCalls_21);
    }
    {
      recursion_patterns__V_37_37 = mercury__float__f_slash_2_f_0(recursion_patterns__V_38_38, recursion_patterns__CallsF_23);
    }
    {
      recursion_patterns__ThenProb_24 = measurement_units__probable_1_f_0(recursion_patterns__V_37_37);
    }
    {
      recursion_patterns__V_40_40 = mercury__float__float_1_f_0(recursion_patterns__ElseCalls_22);
    }
    {
      recursion_patterns__V_39_39 = mercury__float__f_slash_2_f_0(recursion_patterns__V_40_40, recursion_patterns__CallsF_23);
    }
    {
      recursion_patterns__ElseProb_25 = measurement_units__probable_1_f_0(recursion_patterns__V_39_39);
    }
    if ((recursion_patterns__ThenRecursionData0_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      recursion_patterns__ThenRecursionData_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word recursion_patterns__TypeCtorInfo_18_64;
        MR_Integer recursion_patterns__MaxLevel_52 = ((MR_Integer) (MR_hl_field(MR_mktag(1), recursion_patterns__ThenRecursionData0_16, (MR_Integer) 1)));
        MR_Word recursion_patterns__Errors_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__ThenRecursionData0_16, (MR_Integer) 2)));
        MR_Word recursion_patterns__STATE_VARIABLE_Recursions_0_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__ThenRecursionData0_16, (MR_Integer) 0)));
        MR_Word recursion_patterns__STATE_VARIABLE_Recursions_55;
        MR_Word recursion_patterns__V_56_56;

        {
          recursion_patterns__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), recursion_patterns__V_56_56, 0) = ((MR_Box) (&recursion_patterns_scalar_common_4[2]));
          MR_hl_field(MR_mktag(0), recursion_patterns__V_56_56, 1) = ((MR_Box) (recursion_patterns__ite_recursion_data_7_p_0_1));
          MR_hl_field(MR_mktag(0), recursion_patterns__V_56_56, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), recursion_patterns__V_56_56, 3) = MR_box_float(recursion_patterns__ThenProb_24);
        }
        recursion_patterns__TypeCtorInfo_18_64 = (MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_level_0;
        {
          mercury__assoc_list__map_values_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, recursion_patterns__TypeCtorInfo_18_64, recursion_patterns__TypeCtorInfo_18_64, recursion_patterns__V_56_56, recursion_patterns__STATE_VARIABLE_Recursions_0_54, &recursion_patterns__STATE_VARIABLE_Recursions_55);
        }
        {
          recursion_patterns__ThenRecursionData_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), recursion_patterns__ThenRecursionData_26, 0) = ((MR_Box) (recursion_patterns__STATE_VARIABLE_Recursions_55));
          MR_hl_field(MR_mktag(1), recursion_patterns__ThenRecursionData_26, 1) = ((MR_Box) (recursion_patterns__MaxLevel_52));
          MR_hl_field(MR_mktag(1), recursion_patterns__ThenRecursionData_26, 2) = ((MR_Box) (recursion_patterns__Errors_53));
        }
      }
    if ((recursion_patterns__ElseRecursionData0_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      recursion_patterns__ElseRecursionData_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word recursion_patterns__TypeCtorInfo_18_79;
        MR_Integer recursion_patterns__MaxLevel_67 = ((MR_Integer) (MR_hl_field(MR_mktag(1), recursion_patterns__ElseRecursionData0_17, (MR_Integer) 1)));
        MR_Word recursion_patterns__Errors_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__ElseRecursionData0_17, (MR_Integer) 2)));
        MR_Word recursion_patterns__STATE_VARIABLE_Recursions_0_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__ElseRecursionData0_17, (MR_Integer) 0)));
        MR_Word recursion_patterns__STATE_VARIABLE_Recursions_70;
        MR_Word recursion_patterns__V_71_71;

        {
          recursion_patterns__V_71_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), recursion_patterns__V_71_71, 0) = ((MR_Box) (&recursion_patterns_scalar_common_4[2]));
          MR_hl_field(MR_mktag(0), recursion_patterns__V_71_71, 1) = ((MR_Box) (recursion_patterns__ite_recursion_data_7_p_0_2));
          MR_hl_field(MR_mktag(0), recursion_patterns__V_71_71, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), recursion_patterns__V_71_71, 3) = MR_box_float(recursion_patterns__ElseProb_25);
        }
        recursion_patterns__TypeCtorInfo_18_79 = (MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_level_0;
        {
          mercury__assoc_list__map_values_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, recursion_patterns__TypeCtorInfo_18_79, recursion_patterns__TypeCtorInfo_18_79, recursion_patterns__V_71_71, recursion_patterns__STATE_VARIABLE_Recursions_0_69, &recursion_patterns__STATE_VARIABLE_Recursions_70);
        }
        {
          recursion_patterns__ElseRecursionData_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), recursion_patterns__ElseRecursionData_27, 0) = ((MR_Box) (recursion_patterns__STATE_VARIABLE_Recursions_70));
          MR_hl_field(MR_mktag(1), recursion_patterns__ElseRecursionData_27, 1) = ((MR_Box) (recursion_patterns__MaxLevel_67));
          MR_hl_field(MR_mktag(1), recursion_patterns__ElseRecursionData_27, 2) = ((MR_Box) (recursion_patterns__Errors_68));
        }
      }
    {
      recursion_patterns__merge_recursion_data_after_branch_3_p_0(recursion_patterns__ThenRecursionData_26, recursion_patterns__ElseRecursionData_27, &recursion_patterns__STATE_VARIABLE_RecursionData_41_41);
    }
    {
      recursion_patterns__merge_recursion_data_sequence_3_p_0(recursion_patterns__CondRecursionData_15, recursion_patterns__STATE_VARIABLE_RecursionData_41_41, recursion_patterns__STATE_VARIABLE_RecursionData_28);
    }
  }
}

static void MR_CALL 
recursion_patterns__disj_recursion_data_5_p_0_2(
  MR_Box recursion_patterns__closure_arg,
  MR_Box recursion_patterns__wrapper_arg_1,
  MR_Box recursion_patterns__wrapper_arg_2,
  MR_Box * recursion_patterns__wrapper_arg_3)
{
  {
    MR_Box recursion_patterns__closure = recursion_patterns__closure_arg;
    MR_Word recursion_patterns__conv2_HeadVar__4_15;

    {
      recursion_patterns__IntroducedFrom__pred__recursion_data_and_probability__756__1_4_p_0(MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__closure, (MR_Integer) 3))), ((MR_Integer) recursion_patterns__wrapper_arg_1), ((MR_Word) recursion_patterns__wrapper_arg_2), &recursion_patterns__conv2_HeadVar__4_15);
    }
    *recursion_patterns__wrapper_arg_3 = ((MR_Box) (recursion_patterns__conv2_HeadVar__4_15));
  }
}

static void MR_CALL 
recursion_patterns__disj_recursion_data_5_p_0_1(
  MR_Box recursion_patterns__closure_arg,
  MR_Box recursion_patterns__wrapper_arg_1,
  MR_Box recursion_patterns__wrapper_arg_2,
  MR_Box * recursion_patterns__wrapper_arg_3)
{
  {
    MR_Box recursion_patterns__closure = recursion_patterns__closure_arg;
    MR_Word recursion_patterns__conv1_HeadVar__4_15;

    {
      recursion_patterns__IntroducedFrom__pred__recursion_data_and_probability__756__1_4_p_0(MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__closure, (MR_Integer) 3))), ((MR_Integer) recursion_patterns__wrapper_arg_1), ((MR_Word) recursion_patterns__wrapper_arg_2), &recursion_patterns__conv1_HeadVar__4_15);
    }
    *recursion_patterns__wrapper_arg_3 = ((MR_Box) (recursion_patterns__conv1_HeadVar__4_15));
  }
}

static void MR_CALL 
recursion_patterns__disj_recursion_data_5_p_0(
  MR_Word recursion_patterns__Info_1,
  MR_Word recursion_patterns__RevGoalPath_2,
  MR_Integer recursion_patterns__DisjNum_3,
  MR_Word recursion_patterns__HeadVar__4_4,
  MR_Word * recursion_patterns__HeadVar__5_5)
{
  {
    MR_bool recursion_patterns__succeeded;

    if ((recursion_patterns__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word recursion_patterns__V_44_44;
        MR_Word recursion_patterns__V_45_45;
        MR_Word recursion_patterns__V_46_46;
        MR_Float recursion_patterns__V_47_47;
        MR_Word recursion_patterns__V_49_49;

        {
          recursion_patterns__V_47_47 = measurement_units__certain_0_f_0();
        }
        {
          recursion_patterns__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), recursion_patterns__V_46_46, 0) = MR_box_float((MR_Float) 0.0000000000000000);
          MR_hl_field(MR_mktag(0), recursion_patterns__V_46_46, 1) = MR_box_float(recursion_patterns__V_47_47);
        }
        {
          recursion_patterns__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), recursion_patterns__V_45_45, 0) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(0), recursion_patterns__V_45_45, 1) = ((MR_Box) (recursion_patterns__V_46_46));
        }
        {
          recursion_patterns__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), recursion_patterns__V_44_44, 0) = ((MR_Box) (recursion_patterns__V_45_45));
          MR_hl_field(MR_mktag(1), recursion_patterns__V_44_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          recursion_patterns__V_49_49 = mercury__set__init_0_f_0((MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_error_0);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          *recursion_patterns__HeadVar__5_5 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recursion_patterns__V_44_44));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (recursion_patterns__V_49_49));
        }
      }
    else
      {
        MR_Word recursion_patterns__Disj_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__4_4, (MR_Integer) 0)));
        MR_Word recursion_patterns__Disjs_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__4_4, (MR_Integer) 1)));
        MR_Word recursion_patterns__DisjRecursionData_17;
        MR_Word recursion_patterns__V_29_29;
        MR_Word recursion_patterns__V_30_30;

        {
          recursion_patterns__V_30_30 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), recursion_patterns__V_30_30, 0) = ((MR_Box) (recursion_patterns__DisjNum_3));
        }
        {
          recursion_patterns__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), recursion_patterns__V_29_29, 0) = ((MR_Box) (recursion_patterns__RevGoalPath_2));
          MR_hl_field(MR_mktag(1), recursion_patterns__V_29_29, 1) = ((MR_Box) (recursion_patterns__V_30_30));
        }
        {
          recursion_patterns__goal_recursion_data_4_p_0(recursion_patterns__Info_1, recursion_patterns__V_29_29, recursion_patterns__Disj_14, &recursion_patterns__DisjRecursionData_17);
        }
        if ((recursion_patterns__DisjRecursionData_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *recursion_patterns__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_Word recursion_patterns__TypeCtorInfo_18_99;
            MR_Word recursion_patterns__CoverageInfo_21;
            MR_Float recursion_patterns__DisjSuccessProb_22;
            MR_Float recursion_patterns__DisjFailureProb_23;
            MR_Word recursion_patterns__DisjsRecursionData0_24;
            MR_Word recursion_patterns__DisjsRecursionData_25;
            MR_Word recursion_patterns__Finish_27;
            MR_Word recursion_patterns__BranchRecursionData_28;
            MR_Word recursion_patterns__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Info_1, (MR_Integer) 2)));
            MR_Word recursion_patterns__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Disj_14, (MR_Integer) 2)));
            MR_Integer recursion_patterns__V_33_33;
            MR_Word recursion_patterns__V_79_79;
            MR_Word recursion_patterns__V_80_80;
            MR_Float recursion_patterns__V_81_81;
            MR_Word recursion_patterns__Errors_88;
            MR_Word recursion_patterns__STATE_VARIABLE_Recursions_0_89;
            MR_Word recursion_patterns__STATE_VARIABLE_Recursions_90;
            MR_Word recursion_patterns__V_91_91;
            MR_Word recursion_patterns__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Info_1, (MR_Integer) 0)));
            MR_Word recursion_patterns__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Info_1, (MR_Integer) 1)));
            MR_Word recursion_patterns__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Disj_14, (MR_Integer) 0)));
            MR_Word recursion_patterns__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Disj_14, (MR_Integer) 1)));
            MR_Box recursion_patterns__conv0_CoverageInfo_21;
            MR_Integer recursion_patterns__Before_53;
            MR_Integer recursion_patterns__After_54;

            {
              recursion_patterns__conv0_CoverageInfo_21 = mdbcomp__goal_path__get_goal_attribute_det_2_f_0((MR_Word) &coverage__coverage__type_ctor_info_coverage_info_0, recursion_patterns__V_31_31, recursion_patterns__V_32_32);
            }
            recursion_patterns__CoverageInfo_21 = ((MR_Word) recursion_patterns__conv0_CoverageInfo_21);
            {
              recursion_patterns__succeeded = coverage__get_coverage_before_and_after_3_p_0(recursion_patterns__CoverageInfo_21, &recursion_patterns__Before_53, &recursion_patterns__After_54);
            }
            if (recursion_patterns__succeeded)
              {
                recursion_patterns__succeeded = (recursion_patterns__After_54 > recursion_patterns__Before_53);
                if (recursion_patterns__succeeded)
                  {
                    recursion_patterns__DisjSuccessProb_22 = measurement_units__certain_0_f_0();
                  }
                else
                  {
                    MR_Float recursion_patterns__V_55_55;
                    MR_Float recursion_patterns__V_56_56;
                    MR_Float recursion_patterns__V_57_57;

                    {
                      recursion_patterns__V_56_56 = mercury__float__float_1_f_0(recursion_patterns__After_54);
                    }
                    {
                      recursion_patterns__V_57_57 = mercury__float__float_1_f_0(recursion_patterns__Before_53);
                    }
                    {
                      recursion_patterns__V_55_55 = mercury__float__f_slash_2_f_0(recursion_patterns__V_56_56, recursion_patterns__V_57_57);
                    }
                    {
                      recursion_patterns__DisjSuccessProb_22 = measurement_units__probable_1_f_0(recursion_patterns__V_55_55);
                    }
                  }
              }
            else
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "recursion_patterns", (MR_String) "predicate \140recursion_patterns.success_probability_from_coverage\'/2", (MR_String) "expected complete coverage information");
                  return;
                }
              }
            {
              recursion_patterns__DisjFailureProb_23 = measurement_units__not_probability_1_f_0(recursion_patterns__DisjSuccessProb_22);
            }
            recursion_patterns__V_33_33 = (recursion_patterns__DisjNum_3 + (MR_Integer) 1);
            {
              recursion_patterns__disj_recursion_data_5_p_0(recursion_patterns__Info_1, recursion_patterns__RevGoalPath_2, recursion_patterns__V_33_33, recursion_patterns__Disjs_15, &recursion_patterns__DisjsRecursionData0_24);
            }
            if ((recursion_patterns__DisjsRecursionData0_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              recursion_patterns__DisjsRecursionData_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            else
              {
                MR_Word recursion_patterns__TypeCtorInfo_18_75;
                MR_Integer recursion_patterns__MaxLevel_63 = ((MR_Integer) (MR_hl_field(MR_mktag(1), recursion_patterns__DisjsRecursionData0_24, (MR_Integer) 1)));
                MR_Word recursion_patterns__Errors_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__DisjsRecursionData0_24, (MR_Integer) 2)));
                MR_Word recursion_patterns__STATE_VARIABLE_Recursions_0_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__DisjsRecursionData0_24, (MR_Integer) 0)));
                MR_Word recursion_patterns__STATE_VARIABLE_Recursions_66;
                MR_Word recursion_patterns__V_67_67;

                {
                  recursion_patterns__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), recursion_patterns__V_67_67, 0) = ((MR_Box) (&recursion_patterns_scalar_common_4[2]));
                  MR_hl_field(MR_mktag(0), recursion_patterns__V_67_67, 1) = ((MR_Box) (recursion_patterns__disj_recursion_data_5_p_0_1));
                  MR_hl_field(MR_mktag(0), recursion_patterns__V_67_67, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), recursion_patterns__V_67_67, 3) = MR_box_float(recursion_patterns__DisjFailureProb_23);
                }
                recursion_patterns__TypeCtorInfo_18_75 = (MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_level_0;
                {
                  mercury__assoc_list__map_values_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, recursion_patterns__TypeCtorInfo_18_75, recursion_patterns__TypeCtorInfo_18_75, recursion_patterns__V_67_67, recursion_patterns__STATE_VARIABLE_Recursions_0_65, &recursion_patterns__STATE_VARIABLE_Recursions_66);
                }
                {
                  recursion_patterns__DisjsRecursionData_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), recursion_patterns__DisjsRecursionData_25, 0) = ((MR_Box) (recursion_patterns__STATE_VARIABLE_Recursions_66));
                  MR_hl_field(MR_mktag(1), recursion_patterns__DisjsRecursionData_25, 1) = ((MR_Box) (recursion_patterns__MaxLevel_63));
                  MR_hl_field(MR_mktag(1), recursion_patterns__DisjsRecursionData_25, 2) = ((MR_Box) (recursion_patterns__Errors_64));
                }
              }
            {
              recursion_patterns__V_81_81 = measurement_units__certain_0_f_0();
            }
            {
              recursion_patterns__V_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), recursion_patterns__V_80_80, 0) = MR_box_float((MR_Float) 0.0000000000000000);
              MR_hl_field(MR_mktag(0), recursion_patterns__V_80_80, 1) = MR_box_float(recursion_patterns__V_81_81);
            }
            {
              recursion_patterns__V_79_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), recursion_patterns__V_79_79, 0) = ((MR_Box) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(0), recursion_patterns__V_79_79, 1) = ((MR_Box) (recursion_patterns__V_80_80));
            }
            {
              recursion_patterns__STATE_VARIABLE_Recursions_0_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), recursion_patterns__STATE_VARIABLE_Recursions_0_89, 0) = ((MR_Box) (recursion_patterns__V_79_79));
              MR_hl_field(MR_mktag(1), recursion_patterns__STATE_VARIABLE_Recursions_0_89, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              recursion_patterns__Errors_88 = mercury__set__init_0_f_0((MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_error_0);
            }
            {
              recursion_patterns__V_91_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), recursion_patterns__V_91_91, 0) = ((MR_Box) (&recursion_patterns_scalar_common_4[2]));
              MR_hl_field(MR_mktag(0), recursion_patterns__V_91_91, 1) = ((MR_Box) (recursion_patterns__disj_recursion_data_5_p_0_2));
              MR_hl_field(MR_mktag(0), recursion_patterns__V_91_91, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), recursion_patterns__V_91_91, 3) = MR_box_float(recursion_patterns__DisjSuccessProb_22);
            }
            recursion_patterns__TypeCtorInfo_18_99 = (MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_level_0;
            {
              mercury__assoc_list__map_values_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, recursion_patterns__TypeCtorInfo_18_99, recursion_patterns__TypeCtorInfo_18_99, recursion_patterns__V_91_91, recursion_patterns__STATE_VARIABLE_Recursions_0_89, &recursion_patterns__STATE_VARIABLE_Recursions_90);
            }
            {
              recursion_patterns__Finish_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), recursion_patterns__Finish_27, 0) = ((MR_Box) (recursion_patterns__STATE_VARIABLE_Recursions_90));
              MR_hl_field(MR_mktag(1), recursion_patterns__Finish_27, 1) = ((MR_Box) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(1), recursion_patterns__Finish_27, 2) = ((MR_Box) (recursion_patterns__Errors_88));
            }
            {
              recursion_patterns__merge_recursion_data_after_branch_3_p_0(recursion_patterns__Finish_27, recursion_patterns__DisjsRecursionData_25, &recursion_patterns__BranchRecursionData_28);
            }
            {
              recursion_patterns__merge_recursion_data_sequence_3_p_0(recursion_patterns__DisjRecursionData_17, recursion_patterns__BranchRecursionData_28, recursion_patterns__HeadVar__5_5);
            }
          }
      }
  }
}

static void MR_CALL 
recursion_patterns__conj_recursion_data_5_p_0_2(
  MR_Box recursion_patterns__closure_arg,
  MR_Box recursion_patterns__wrapper_arg_1,
  MR_Box recursion_patterns__wrapper_arg_2,
  MR_Box * recursion_patterns__wrapper_arg_3)
{
  {
    MR_Box recursion_patterns__closure = recursion_patterns__closure_arg;
    MR_Word recursion_patterns__conv2_HeadVar__4_15;

    {
      recursion_patterns__IntroducedFrom__pred__recursion_data_and_probability__756__1_4_p_0(MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__closure, (MR_Integer) 3))), ((MR_Integer) recursion_patterns__wrapper_arg_1), ((MR_Word) recursion_patterns__wrapper_arg_2), &recursion_patterns__conv2_HeadVar__4_15);
    }
    *recursion_patterns__wrapper_arg_3 = ((MR_Box) (recursion_patterns__conv2_HeadVar__4_15));
  }
}

static void MR_CALL 
recursion_patterns__conj_recursion_data_5_p_0_1(
  MR_Box recursion_patterns__closure_arg,
  MR_Box recursion_patterns__wrapper_arg_1,
  MR_Box recursion_patterns__wrapper_arg_2,
  MR_Box * recursion_patterns__wrapper_arg_3)
{
  {
    MR_Box recursion_patterns__closure = recursion_patterns__closure_arg;
    MR_Word recursion_patterns__conv1_HeadVar__4_15;

    {
      recursion_patterns__IntroducedFrom__pred__recursion_data_and_probability__756__1_4_p_0(MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__closure, (MR_Integer) 3))), ((MR_Integer) recursion_patterns__wrapper_arg_1), ((MR_Word) recursion_patterns__wrapper_arg_2), &recursion_patterns__conv1_HeadVar__4_15);
    }
    *recursion_patterns__wrapper_arg_3 = ((MR_Box) (recursion_patterns__conv1_HeadVar__4_15));
  }
}

static void MR_CALL 
recursion_patterns__conj_recursion_data_5_p_0(
  MR_Word recursion_patterns__Info_1,
  MR_Word recursion_patterns__RevGoalPath_2,
  MR_Integer recursion_patterns__ConjNum_3,
  MR_Word recursion_patterns__HeadVar__4_4,
  MR_Word * recursion_patterns__HeadVar__5_5)
{
  {
    MR_bool recursion_patterns__succeeded;

    if ((recursion_patterns__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word recursion_patterns__V_48_48;
        MR_Word recursion_patterns__V_49_49;
        MR_Word recursion_patterns__V_50_50;
        MR_Float recursion_patterns__V_51_51;
        MR_Word recursion_patterns__V_53_53;

        {
          recursion_patterns__V_51_51 = measurement_units__certain_0_f_0();
        }
        {
          recursion_patterns__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), recursion_patterns__V_50_50, 0) = MR_box_float((MR_Float) 0.0000000000000000);
          MR_hl_field(MR_mktag(0), recursion_patterns__V_50_50, 1) = MR_box_float(recursion_patterns__V_51_51);
        }
        {
          recursion_patterns__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), recursion_patterns__V_49_49, 0) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(0), recursion_patterns__V_49_49, 1) = ((MR_Box) (recursion_patterns__V_50_50));
        }
        {
          recursion_patterns__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), recursion_patterns__V_48_48, 0) = ((MR_Box) (recursion_patterns__V_49_49));
          MR_hl_field(MR_mktag(1), recursion_patterns__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          recursion_patterns__V_53_53 = mercury__set__init_0_f_0((MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_error_0);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          *recursion_patterns__HeadVar__5_5 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recursion_patterns__V_48_48));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (recursion_patterns__V_53_53));
        }
      }
    else
      {
        MR_Word recursion_patterns__Conj_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__4_4, (MR_Integer) 0)));
        MR_Word recursion_patterns__Conjs_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__4_4, (MR_Integer) 1)));
        MR_Word recursion_patterns__ConjRecursionData_17;
        MR_Word recursion_patterns__V_30_30;
        MR_Word recursion_patterns__V_31_31;

        {
          recursion_patterns__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), recursion_patterns__V_31_31, 0) = ((MR_Box) (recursion_patterns__ConjNum_3));
        }
        {
          recursion_patterns__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), recursion_patterns__V_30_30, 0) = ((MR_Box) (recursion_patterns__RevGoalPath_2));
          MR_hl_field(MR_mktag(1), recursion_patterns__V_30_30, 1) = ((MR_Box) (recursion_patterns__V_31_31));
        }
        {
          recursion_patterns__goal_recursion_data_4_p_0(recursion_patterns__Info_1, recursion_patterns__V_30_30, recursion_patterns__Conj_14, &recursion_patterns__ConjRecursionData_17);
        }
        if ((recursion_patterns__ConjRecursionData_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *recursion_patterns__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_Word recursion_patterns__ConjsRecursionData0_21;
            MR_Word recursion_patterns__CanFail_22;
            MR_Integer recursion_patterns__V_32_32 = (recursion_patterns__ConjNum_3 + (MR_Integer) 1);
            MR_Word recursion_patterns__V_34_34;
            MR_Word recursion_patterns__V_39_39;
            MR_Word recursion_patterns__V_40_40;

            {
              recursion_patterns__conj_recursion_data_5_p_0(recursion_patterns__Info_1, recursion_patterns__RevGoalPath_2, recursion_patterns__V_32_32, recursion_patterns__Conjs_15, &recursion_patterns__ConjsRecursionData0_21);
            }
            recursion_patterns__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Conj_14, (MR_Integer) 0)));
            recursion_patterns__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Conj_14, (MR_Integer) 1)));
            recursion_patterns__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Conj_14, (MR_Integer) 2)));
            {
              recursion_patterns__CanFail_22 = mdbcomp__program_representation__detism_get_can_fail_1_f_0(recursion_patterns__V_34_34);
            }
            switch (recursion_patterns__CanFail_22) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word recursion_patterns__TypeCtorInfo_18_103;
                  MR_Word recursion_patterns__CoverageInfo_23;
                  MR_Float recursion_patterns__ConjSuccessProb_24;
                  MR_Word recursion_patterns__ConjsRecursionData_25;
                  MR_Float recursion_patterns__ConjFailureProb_26;
                  MR_Word recursion_patterns__Failure_28;
                  MR_Word recursion_patterns__BranchRecursionData_29;
                  MR_Word recursion_patterns__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Info_1, (MR_Integer) 2)));
                  MR_Word recursion_patterns__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Conj_14, (MR_Integer) 2)));
                  MR_Word recursion_patterns__V_83_83;
                  MR_Word recursion_patterns__V_84_84;
                  MR_Float recursion_patterns__V_85_85;
                  MR_Word recursion_patterns__Errors_92;
                  MR_Word recursion_patterns__STATE_VARIABLE_Recursions_0_93;
                  MR_Word recursion_patterns__STATE_VARIABLE_Recursions_94;
                  MR_Word recursion_patterns__V_95_95;
                  MR_Word recursion_patterns__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Info_1, (MR_Integer) 0)));
                  MR_Word recursion_patterns__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Info_1, (MR_Integer) 1)));
                  MR_Word recursion_patterns__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Conj_14, (MR_Integer) 0)));
                  MR_Word recursion_patterns__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Conj_14, (MR_Integer) 1)));
                  MR_Box recursion_patterns__conv0_CoverageInfo_23;
                  MR_Integer recursion_patterns__Before_57;
                  MR_Integer recursion_patterns__After_58;

                  {
                    recursion_patterns__conv0_CoverageInfo_23 = mdbcomp__goal_path__get_goal_attribute_det_2_f_0((MR_Word) &coverage__coverage__type_ctor_info_coverage_info_0, recursion_patterns__V_35_35, recursion_patterns__V_36_36);
                  }
                  recursion_patterns__CoverageInfo_23 = ((MR_Word) recursion_patterns__conv0_CoverageInfo_23);
                  {
                    recursion_patterns__succeeded = coverage__get_coverage_before_and_after_3_p_0(recursion_patterns__CoverageInfo_23, &recursion_patterns__Before_57, &recursion_patterns__After_58);
                  }
                  if (recursion_patterns__succeeded)
                    {
                      recursion_patterns__succeeded = (recursion_patterns__After_58 > recursion_patterns__Before_57);
                      if (recursion_patterns__succeeded)
                        {
                          recursion_patterns__ConjSuccessProb_24 = measurement_units__certain_0_f_0();
                        }
                      else
                        {
                          MR_Float recursion_patterns__V_59_59;
                          MR_Float recursion_patterns__V_60_60;
                          MR_Float recursion_patterns__V_61_61;

                          {
                            recursion_patterns__V_60_60 = mercury__float__float_1_f_0(recursion_patterns__After_58);
                          }
                          {
                            recursion_patterns__V_61_61 = mercury__float__float_1_f_0(recursion_patterns__Before_57);
                          }
                          {
                            recursion_patterns__V_59_59 = mercury__float__f_slash_2_f_0(recursion_patterns__V_60_60, recursion_patterns__V_61_61);
                          }
                          {
                            recursion_patterns__ConjSuccessProb_24 = measurement_units__probable_1_f_0(recursion_patterns__V_59_59);
                          }
                        }
                    }
                  else
                    {
                      {
                        mercury__require__unexpected_3_p_0((MR_String) "recursion_patterns", (MR_String) "predicate \140recursion_patterns.success_probability_from_coverage\'/2", (MR_String) "expected complete coverage information");
                        return;
                      }
                    }
                  if ((recursion_patterns__ConjsRecursionData0_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    recursion_patterns__ConjsRecursionData_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  else
                    {
                      MR_Word recursion_patterns__TypeCtorInfo_18_79;
                      MR_Integer recursion_patterns__MaxLevel_67 = ((MR_Integer) (MR_hl_field(MR_mktag(1), recursion_patterns__ConjsRecursionData0_21, (MR_Integer) 1)));
                      MR_Word recursion_patterns__Errors_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__ConjsRecursionData0_21, (MR_Integer) 2)));
                      MR_Word recursion_patterns__STATE_VARIABLE_Recursions_0_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__ConjsRecursionData0_21, (MR_Integer) 0)));
                      MR_Word recursion_patterns__STATE_VARIABLE_Recursions_70;
                      MR_Word recursion_patterns__V_71_71;

                      {
                        recursion_patterns__V_71_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), recursion_patterns__V_71_71, 0) = ((MR_Box) (&recursion_patterns_scalar_common_4[2]));
                        MR_hl_field(MR_mktag(0), recursion_patterns__V_71_71, 1) = ((MR_Box) (recursion_patterns__conj_recursion_data_5_p_0_1));
                        MR_hl_field(MR_mktag(0), recursion_patterns__V_71_71, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                        MR_hl_field(MR_mktag(0), recursion_patterns__V_71_71, 3) = MR_box_float(recursion_patterns__ConjSuccessProb_24);
                      }
                      recursion_patterns__TypeCtorInfo_18_79 = (MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_level_0;
                      {
                        mercury__assoc_list__map_values_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, recursion_patterns__TypeCtorInfo_18_79, recursion_patterns__TypeCtorInfo_18_79, recursion_patterns__V_71_71, recursion_patterns__STATE_VARIABLE_Recursions_0_69, &recursion_patterns__STATE_VARIABLE_Recursions_70);
                      }
                      {
                        recursion_patterns__ConjsRecursionData_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), recursion_patterns__ConjsRecursionData_25, 0) = ((MR_Box) (recursion_patterns__STATE_VARIABLE_Recursions_70));
                        MR_hl_field(MR_mktag(1), recursion_patterns__ConjsRecursionData_25, 1) = ((MR_Box) (recursion_patterns__MaxLevel_67));
                        MR_hl_field(MR_mktag(1), recursion_patterns__ConjsRecursionData_25, 2) = ((MR_Box) (recursion_patterns__Errors_68));
                      }
                    }
                  {
                    recursion_patterns__ConjFailureProb_26 = measurement_units__not_probability_1_f_0(recursion_patterns__ConjSuccessProb_24);
                  }
                  {
                    recursion_patterns__V_85_85 = measurement_units__certain_0_f_0();
                  }
                  {
                    recursion_patterns__V_84_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), recursion_patterns__V_84_84, 0) = MR_box_float((MR_Float) 0.0000000000000000);
                    MR_hl_field(MR_mktag(0), recursion_patterns__V_84_84, 1) = MR_box_float(recursion_patterns__V_85_85);
                  }
                  {
                    recursion_patterns__V_83_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), recursion_patterns__V_83_83, 0) = ((MR_Box) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(0), recursion_patterns__V_83_83, 1) = ((MR_Box) (recursion_patterns__V_84_84));
                  }
                  {
                    recursion_patterns__STATE_VARIABLE_Recursions_0_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), recursion_patterns__STATE_VARIABLE_Recursions_0_93, 0) = ((MR_Box) (recursion_patterns__V_83_83));
                    MR_hl_field(MR_mktag(1), recursion_patterns__STATE_VARIABLE_Recursions_0_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    recursion_patterns__Errors_92 = mercury__set__init_0_f_0((MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_error_0);
                  }
                  {
                    recursion_patterns__V_95_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), recursion_patterns__V_95_95, 0) = ((MR_Box) (&recursion_patterns_scalar_common_4[2]));
                    MR_hl_field(MR_mktag(0), recursion_patterns__V_95_95, 1) = ((MR_Box) (recursion_patterns__conj_recursion_data_5_p_0_2));
                    MR_hl_field(MR_mktag(0), recursion_patterns__V_95_95, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(0), recursion_patterns__V_95_95, 3) = MR_box_float(recursion_patterns__ConjFailureProb_26);
                  }
                  recursion_patterns__TypeCtorInfo_18_103 = (MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_level_0;
                  {
                    mercury__assoc_list__map_values_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, recursion_patterns__TypeCtorInfo_18_103, recursion_patterns__TypeCtorInfo_18_103, recursion_patterns__V_95_95, recursion_patterns__STATE_VARIABLE_Recursions_0_93, &recursion_patterns__STATE_VARIABLE_Recursions_94);
                  }
                  {
                    recursion_patterns__Failure_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), recursion_patterns__Failure_28, 0) = ((MR_Box) (recursion_patterns__STATE_VARIABLE_Recursions_94));
                    MR_hl_field(MR_mktag(1), recursion_patterns__Failure_28, 1) = ((MR_Box) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(1), recursion_patterns__Failure_28, 2) = ((MR_Box) (recursion_patterns__Errors_92));
                  }
                  {
                    recursion_patterns__merge_recursion_data_after_branch_3_p_0(recursion_patterns__ConjsRecursionData_25, recursion_patterns__Failure_28, &recursion_patterns__BranchRecursionData_29);
                  }
                  {
                    recursion_patterns__merge_recursion_data_sequence_3_p_0(recursion_patterns__ConjRecursionData_17, recursion_patterns__BranchRecursionData_29, recursion_patterns__HeadVar__5_5);
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  recursion_patterns__merge_recursion_data_sequence_3_p_0(recursion_patterns__ConjRecursionData_17, recursion_patterns__ConjsRecursionData0_21, recursion_patterns__HeadVar__5_5);
                }
                break;
            }
          }
      }
  }
}

static void MR_CALL 
recursion_patterns__goal_recursion_data_4_p_0(
  MR_Word recursion_patterns__Info_5,
  MR_Word recursion_patterns__RevGoalPath_6,
  MR_Word recursion_patterns__GoalRep_7,
  MR_Word * recursion_patterns__STATE_VARIABLE_RecursionData_30)
{
  {
    MR_bool recursion_patterns__succeeded;
    MR_Word recursion_patterns__GoalExpr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__GoalRep_7, (MR_Integer) 0)));
    MR_Word recursion_patterns__Detism_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__GoalRep_7, (MR_Integer) 1)));
    MR_Word recursion_patterns__GoalId_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__GoalRep_7, (MR_Integer) 2)));
    MR_Word recursion_patterns__CoverageInfo_12;
    MR_Integer recursion_patterns__Calls_14;
    MR_Word recursion_patterns__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Info_5, (MR_Integer) 2)));
    MR_Word recursion_patterns__STATE_VARIABLE_RecursionData_35_35;
    MR_Word recursion_patterns__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Info_5, (MR_Integer) 0)));
    MR_Word recursion_patterns__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Info_5, (MR_Integer) 1)));
    MR_Box recursion_patterns__conv0_CoverageInfo_12;
    MR_Integer recursion_patterns__CallsPrime_13;

    {
      recursion_patterns__conv0_CoverageInfo_12 = mdbcomp__goal_path__get_goal_attribute_det_2_f_0((MR_Word) &coverage__coverage__type_ctor_info_coverage_info_0, recursion_patterns__V_31_31, recursion_patterns__GoalId_11);
    }
    recursion_patterns__CoverageInfo_12 = ((MR_Word) recursion_patterns__conv0_CoverageInfo_12);
    {
      recursion_patterns__succeeded = coverage__get_coverage_before_2_p_0(recursion_patterns__CoverageInfo_12, &recursion_patterns__CallsPrime_13);
    }
    if (recursion_patterns__succeeded)
      recursion_patterns__Calls_14 = recursion_patterns__CallsPrime_13;
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "recursion_patterns", (MR_String) "predicate \140recursion_patterns.goal_recursion_data\'/4", (MR_String) "couldn\'t retrieve coverage information");
          return;
        }
      }
    recursion_patterns__succeeded = (recursion_patterns__Calls_14 == (MR_Integer) 0);
    if (recursion_patterns__succeeded)
      recursion_patterns__STATE_VARIABLE_RecursionData_35_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      switch (MR_tag((MR_Word) recursion_patterns__GoalExpr_9)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word recursion_patterns__Conjs_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__GoalExpr_9, (MR_Integer) 0)));

            {
              recursion_patterns__conj_recursion_data_5_p_0(recursion_patterns__Info_5, recursion_patterns__RevGoalPath_6, (MR_Integer) 1, recursion_patterns__Conjs_15, &recursion_patterns__STATE_VARIABLE_RecursionData_35_35);
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word recursion_patterns__Disjs_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__GoalExpr_9, (MR_Integer) 0)));

            {
              recursion_patterns__disj_recursion_data_5_p_0(recursion_patterns__Info_5, recursion_patterns__RevGoalPath_6, (MR_Integer) 1, recursion_patterns__Disjs_16, &recursion_patterns__STATE_VARIABLE_RecursionData_35_35);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word recursion_patterns__Cases_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), recursion_patterns__GoalExpr_9, (MR_Integer) 2)));
            MR_Float recursion_patterns__V_41_41;
            MR_Integer recursion_patterns__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(2), recursion_patterns__GoalExpr_9, (MR_Integer) 0)));
            MR_Word recursion_patterns__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), recursion_patterns__GoalExpr_9, (MR_Integer) 1)));

            {
              recursion_patterns__V_41_41 = mercury__float__float_1_f_0(recursion_patterns__Calls_14);
            }
            {
              recursion_patterns__switch_recursion_data_7_p_0(recursion_patterns__Info_5, recursion_patterns__RevGoalPath_6, (MR_Integer) 1, recursion_patterns__Cases_19, recursion_patterns__V_41_41, recursion_patterns__Calls_14, &recursion_patterns__STATE_VARIABLE_RecursionData_35_35);
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), recursion_patterns__GoalExpr_9, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word recursion_patterns__Cond_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), recursion_patterns__GoalExpr_9, (MR_Integer) 1)));
                MR_Word recursion_patterns__Then_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), recursion_patterns__GoalExpr_9, (MR_Integer) 2)));
                MR_Word recursion_patterns__Else_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), recursion_patterns__GoalExpr_9, (MR_Integer) 3)));

                {
                  recursion_patterns__ite_recursion_data_7_p_0(recursion_patterns__Info_5, recursion_patterns__RevGoalPath_6, recursion_patterns__Cond_20, recursion_patterns__Then_21, recursion_patterns__Else_22, recursion_patterns__Calls_14, &recursion_patterns__STATE_VARIABLE_RecursionData_35_35);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word recursion_patterns__SubGoal_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), recursion_patterns__GoalExpr_9, (MR_Integer) 1)));
                MR_Word recursion_patterns__V_37_37;

                {
                  recursion_patterns__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), recursion_patterns__V_37_37, 0) = ((MR_Box) (recursion_patterns__RevGoalPath_6));
                  MR_hl_field(MR_mktag(1), recursion_patterns__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                }
                {
                  recursion_patterns__goal_recursion_data_4_p_0(recursion_patterns__Info_5, recursion_patterns__V_37_37, recursion_patterns__SubGoal_23, &recursion_patterns__STATE_VARIABLE_RecursionData_35_35);
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word recursion_patterns__MaybeCut_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), recursion_patterns__GoalExpr_9, (MR_Integer) 2)));
                MR_Word recursion_patterns__SubGoal_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), recursion_patterns__GoalExpr_9, (MR_Integer) 1)));
                MR_Word recursion_patterns__GoalPathStep_53;
                MR_Word recursion_patterns__V_54_54;

                {
                  recursion_patterns__GoalPathStep_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), recursion_patterns__GoalPathStep_53, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), recursion_patterns__GoalPathStep_53, 1) = ((MR_Box) (recursion_patterns__MaybeCut_25));
                }
                {
                  recursion_patterns__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), recursion_patterns__V_54_54, 0) = ((MR_Box) (recursion_patterns__RevGoalPath_6));
                  MR_hl_field(MR_mktag(1), recursion_patterns__V_54_54, 1) = ((MR_Box) (recursion_patterns__GoalPathStep_53));
                }
                {
                  recursion_patterns__goal_recursion_data_4_p_0(recursion_patterns__Info_5, recursion_patterns__V_54_54, recursion_patterns__SubGoal_52, &recursion_patterns__STATE_VARIABLE_RecursionData_35_35);
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word recursion_patterns__AtomicGoalRep_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), recursion_patterns__GoalExpr_9, (MR_Integer) 4)));
                MR_String recursion_patterns__V_26_26 = ((MR_String) (MR_hl_field(MR_mktag(3), recursion_patterns__GoalExpr_9, (MR_Integer) 1)));
                MR_Integer recursion_patterns__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(3), recursion_patterns__GoalExpr_9, (MR_Integer) 2)));
                MR_Word recursion_patterns__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), recursion_patterns__GoalExpr_9, (MR_Integer) 3)));

                {
                  recursion_patterns__atomic_goal_recursion_data_4_p_0(recursion_patterns__Info_5, recursion_patterns__RevGoalPath_6, recursion_patterns__AtomicGoalRep_29, &recursion_patterns__STATE_VARIABLE_RecursionData_35_35);
                }
              }
              break;
          }
          break;
      }
    switch (recursion_patterns__Detism_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 5:
        *recursion_patterns__STATE_VARIABLE_RecursionData_30 = recursion_patterns__STATE_VARIABLE_RecursionData_35_35;
        break;
      case (MR_Integer) 4:
        *recursion_patterns__STATE_VARIABLE_RecursionData_30 = recursion_patterns__STATE_VARIABLE_RecursionData_35_35;
        break;
      case (MR_Integer) 0:
        *recursion_patterns__STATE_VARIABLE_RecursionData_30 = recursion_patterns__STATE_VARIABLE_RecursionData_35_35;
        break;
      case (MR_Integer) 6:
        *recursion_patterns__STATE_VARIABLE_RecursionData_30 = recursion_patterns__STATE_VARIABLE_RecursionData_35_35;
        break;
      case (MR_Integer) 7:
        *recursion_patterns__STATE_VARIABLE_RecursionData_30 = recursion_patterns__STATE_VARIABLE_RecursionData_35_35;
        break;
      case (MR_Integer) 3:
      case (MR_Integer) 2:
        {
          MR_Word recursion_patterns__V_47_47 = (MR_Word) recursion_patterns__Detism_10;

          if ((recursion_patterns__STATE_VARIABLE_RecursionData_35_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            *recursion_patterns__STATE_VARIABLE_RecursionData_30 = recursion_patterns__STATE_VARIABLE_RecursionData_35_35;
          else
            {
              MR_Word recursion_patterns__STATE_VARIABLE_Errors_11_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__STATE_VARIABLE_RecursionData_35_35, (MR_Integer) 2)));
              MR_Word recursion_patterns__STATE_VARIABLE_Errors_12_63;
              MR_Word recursion_patterns__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__STATE_VARIABLE_RecursionData_35_35, (MR_Integer) 0)));
              MR_Integer recursion_patterns__V_61_61 = ((MR_Integer) (MR_hl_field(MR_mktag(1), recursion_patterns__STATE_VARIABLE_RecursionData_35_35, (MR_Integer) 1)));
              MR_Word recursion_patterns__V_65_65;
              MR_Integer recursion_patterns__V_66_66;
              MR_Word recursion_patterns__V_67_67;

              {
                mercury__set__insert_3_p_0((MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_error_0, ((MR_Box) (recursion_patterns__V_47_47)), recursion_patterns__STATE_VARIABLE_Errors_11_62, &recursion_patterns__STATE_VARIABLE_Errors_12_63);
              }
              recursion_patterns__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__STATE_VARIABLE_RecursionData_35_35, (MR_Integer) 0)));
              recursion_patterns__V_66_66 = ((MR_Integer) (MR_hl_field(MR_mktag(1), recursion_patterns__STATE_VARIABLE_RecursionData_35_35, (MR_Integer) 1)));
              recursion_patterns__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__STATE_VARIABLE_RecursionData_35_35, (MR_Integer) 2)));
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *recursion_patterns__STATE_VARIABLE_RecursionData_30 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recursion_patterns__V_65_65));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (recursion_patterns__V_66_66));
                MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (recursion_patterns__STATE_VARIABLE_Errors_12_63));
              }
            }
        }
        break;
      case (MR_Integer) 1:
        *recursion_patterns__STATE_VARIABLE_RecursionData_30 = recursion_patterns__STATE_VARIABLE_RecursionData_35_35;
        break;
    }
  }
}

static MR_Float MR_CALL 
recursion_patterns__single_rec_average_recursion_cost_3_f_0(
  MR_Float recursion_patterns__BaseCost_5,
  MR_Float recursion_patterns__RecCost_6,
  MR_Float recursion_patterns__AvgMaxDepth_7)
{
  {
    MR_bool recursion_patterns__succeeded;
    MR_Float recursion_patterns__Cost_8;
    MR_Float recursion_patterns__Sum_9;
    MR_Float recursion_patterns__V_10_10 = (((MR_Float) 0.50000000000000000) * recursion_patterns__RecCost_6);
    MR_Float recursion_patterns__V_12_12;
    MR_Float recursion_patterns__V_13_13 = (recursion_patterns__AvgMaxDepth_7 * recursion_patterns__AvgMaxDepth_7);
    MR_Float recursion_patterns__V_15_15;
    MR_Float recursion_patterns__V_16_16;

    recursion_patterns__V_12_12 = (recursion_patterns__V_13_13 + recursion_patterns__AvgMaxDepth_7);
    recursion_patterns__Sum_9 = (recursion_patterns__V_10_10 * recursion_patterns__V_12_12);
    recursion_patterns__V_16_16 = (recursion_patterns__AvgMaxDepth_7 + ((MR_Float) 1.0000000000000000));
    {
      recursion_patterns__V_15_15 = mercury__float__f_slash_2_f_0(recursion_patterns__Sum_9, recursion_patterns__V_16_16);
    }
    recursion_patterns__Cost_8 = (recursion_patterns__BaseCost_5 + recursion_patterns__V_15_15);
    return recursion_patterns__Cost_8;
  }
}

static MR_Float MR_CALL 
recursion_patterns__single_rec_recursion_cost_3_f_0(
  MR_Float recursion_patterns__BaseCost_5,
  MR_Float recursion_patterns__RecCost_6,
  MR_Integer recursion_patterns__LevelI_7)
{
  {
    MR_bool recursion_patterns__succeeded;
    MR_Float recursion_patterns__Cost_8;
    MR_Float recursion_patterns__V_9_9;
    MR_Float recursion_patterns__V_10_10;
    MR_Float recursion_patterns__V_11_11;

    {
      recursion_patterns__V_10_10 = mercury__float__float_1_f_0(recursion_patterns__LevelI_7);
    }
    recursion_patterns__V_11_11 = (recursion_patterns__RecCost_6 + ((MR_Float) 1.0000000000000000));
    recursion_patterns__V_9_9 = (recursion_patterns__V_10_10 * recursion_patterns__V_11_11);
    recursion_patterns__Cost_8 = (recursion_patterns__BaseCost_5 + recursion_patterns__V_9_9);
    return recursion_patterns__Cost_8;
  }
}

static void MR_CALL 
recursion_patterns__recursion_level_report_3_p_0(
  MR_Float recursion_patterns__TotalCalls_4,
  MR_Word recursion_patterns__HeadVar__2_2,
  MR_Word * recursion_patterns__HeadVar__3_3)
{
  {
    MR_bool recursion_patterns__succeeded;
    MR_Integer recursion_patterns__Level_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__2_2, (MR_Integer) 0)));
    MR_Float recursion_patterns__NonRecCost_6;
    MR_Float recursion_patterns__Prob_7;
    MR_Integer recursion_patterns__Calls_8;
    MR_Float recursion_patterns__CostExChild_9;
    MR_Float recursion_patterns__CallsF_10;
    MR_Word recursion_patterns__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__2_2, (MR_Integer) 1)));
    MR_Float recursion_patterns__V_12_12;
    MR_Float recursion_patterns__V_13_13;

    recursion_patterns__NonRecCost_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__V_11_11, (MR_Integer) 0)));
    recursion_patterns__Prob_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__V_11_11, (MR_Integer) 1)));
    {
      recursion_patterns__V_12_12 = measurement_units__probability_to_float_1_f_0(recursion_patterns__Prob_7);
    }
    recursion_patterns__CallsF_10 = (recursion_patterns__V_12_12 * recursion_patterns__TotalCalls_4);
    {
      recursion_patterns__Calls_8 = mercury__float__round_to_int_1_f_0(recursion_patterns__CallsF_10);
    }
    {
      recursion_patterns__V_13_13 = mercury__float__float_1_f_0(recursion_patterns__Level_5);
    }
    recursion_patterns__CostExChild_9 = (recursion_patterns__V_13_13 * recursion_patterns__CallsF_10);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      *recursion_patterns__HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (recursion_patterns__Level_5));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (recursion_patterns__Calls_8));
      MR_hl_field(MR_mktag(0), base, 2) = MR_box_float(recursion_patterns__Prob_7);
      MR_hl_field(MR_mktag(0), base, 3) = MR_box_float(recursion_patterns__NonRecCost_6);
      MR_hl_field(MR_mktag(0), base, 4) = MR_box_float(recursion_patterns__CostExChild_9);
    }
  }
}

static MR_Box MR_CALL 
recursion_patterns__recursion_data_to_recursion_type_4_p_0_3(
  MR_Box recursion_patterns__closure_arg,
  MR_Box recursion_patterns__wrapper_arg_1)
{
  {
    MR_Box recursion_patterns__wrapper_arg_2;
    MR_Box recursion_patterns__closure = recursion_patterns__closure_arg;
    MR_String recursion_patterns__conv6_HeadVar__2_2;

    {
      recursion_patterns__conv6_HeadVar__2_2 = recursion_patterns__error_to_string_1_f_0(((MR_Word) recursion_patterns__wrapper_arg_1));
    }
    recursion_patterns__wrapper_arg_2 = ((MR_Box) (recursion_patterns__conv6_HeadVar__2_2));
    return recursion_patterns__wrapper_arg_2;
  }
}

static void MR_CALL 
recursion_patterns__recursion_data_to_recursion_type_4_p_0_2(
  MR_Box recursion_patterns__closure_arg,
  MR_Box recursion_patterns__wrapper_arg_1,
  MR_Box * recursion_patterns__wrapper_arg_2)
{
  {
    MR_Box recursion_patterns__closure = recursion_patterns__closure_arg;
    MR_Word recursion_patterns__conv5_HeadVar__3_3;

    {
      recursion_patterns__recursion_level_report_3_p_0(MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__closure, (MR_Integer) 3))), ((MR_Word) recursion_patterns__wrapper_arg_1), &recursion_patterns__conv5_HeadVar__3_3);
    }
    *recursion_patterns__wrapper_arg_2 = ((MR_Box) (recursion_patterns__conv5_HeadVar__3_3));
  }
}

static MR_Box MR_CALL 
recursion_patterns__recursion_data_to_recursion_type_4_p_0_1(
  MR_Box recursion_patterns__closure_arg,
  MR_Box recursion_patterns__wrapper_arg_1)
{
  {
    MR_Box recursion_patterns__wrapper_arg_2;
    MR_Box recursion_patterns__closure = recursion_patterns__closure_arg;
    MR_Float recursion_patterns__conv2_Cost_8;

    {
      recursion_patterns__conv2_Cost_8 = recursion_patterns__single_rec_recursion_cost_3_f_0(MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__closure, (MR_Integer) 3))), MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__closure, (MR_Integer) 4))), ((MR_Integer) recursion_patterns__wrapper_arg_1));
    }
    recursion_patterns__wrapper_arg_2 = MR_box_float(recursion_patterns__conv2_Cost_8);
    return recursion_patterns__wrapper_arg_2;
  }
}

static void MR_CALL 
recursion_patterns__recursion_data_to_recursion_type_4_p_0(
  MR_Integer recursion_patterns__ParentCallsI_5,
  MR_Integer recursion_patterns__TotalCallsI_6,
  MR_Word recursion_patterns__RecursionData_7,
  MR_Word * recursion_patterns__Type_8)
{
  {
    MR_bool recursion_patterns__succeeded;

    if ((recursion_patterns__RecursionData_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *recursion_patterns__Type_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word recursion_patterns__Levels_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__RecursionData_7, (MR_Integer) 0)));
        MR_Integer recursion_patterns__Maximum_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), recursion_patterns__RecursionData_7, (MR_Integer) 1)));
        MR_Word recursion_patterns__Errors_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__RecursionData_7, (MR_Integer) 2)));
        MR_Float recursion_patterns__ParentCalls_12;
        MR_Float recursion_patterns__TotalCalls_13;
        MR_Float recursion_patterns__BaseCost_15;
        MR_Float recursion_patterns__BaseProb_16;
        MR_Integer recursion_patterns__BaseCount_18;
        MR_Word recursion_patterns__BaseLevel_19;
        MR_Word recursion_patterns__RLBase_14;
        MR_Box recursion_patterns__conv0_RLBase_14;

        {
          recursion_patterns__ParentCalls_12 = mercury__float__float_1_f_0(recursion_patterns__ParentCallsI_5);
        }
        {
          recursion_patterns__TotalCalls_13 = mercury__float__float_1_f_0(recursion_patterns__TotalCallsI_6);
        }
        {
          recursion_patterns__succeeded = mercury__assoc_list__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_level_0, recursion_patterns__Levels_9, ((MR_Box) ((MR_Integer) 0)), &recursion_patterns__conv0_RLBase_14);
        }
        if (recursion_patterns__succeeded)
          {
            recursion_patterns__RLBase_14 = ((MR_Word) recursion_patterns__conv0_RLBase_14);
            recursion_patterns__succeeded = MR_TRUE;
          }
        if (recursion_patterns__succeeded)
          {
            MR_Float recursion_patterns__BaseCountF_17;
            MR_Float recursion_patterns__V_33_33;

            recursion_patterns__BaseCost_15 = MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__RLBase_14, (MR_Integer) 0)));
            recursion_patterns__BaseProb_16 = MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__RLBase_14, (MR_Integer) 1)));
            {
              recursion_patterns__V_33_33 = measurement_units__probability_to_float_1_f_0(recursion_patterns__BaseProb_16);
            }
            recursion_patterns__BaseCountF_17 = (recursion_patterns__V_33_33 * recursion_patterns__TotalCalls_13);
            {
              recursion_patterns__BaseCount_18 = mercury__float__round_to_int_1_f_0(recursion_patterns__BaseCountF_17);
            }
          }
        else
          {
            recursion_patterns__BaseCost_15 = (MR_Float) 0.0000000000000000;
            recursion_patterns__BaseCount_18 = (MR_Integer) 0;
            {
              recursion_patterns__BaseProb_16 = measurement_units__impossible_0_f_0();
            }
          }
        {
          recursion_patterns__BaseLevel_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), recursion_patterns__BaseLevel_19, 0) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(0), recursion_patterns__BaseLevel_19, 1) = ((MR_Box) (recursion_patterns__BaseCount_18));
          MR_hl_field(MR_mktag(0), recursion_patterns__BaseLevel_19, 2) = MR_box_float(recursion_patterns__BaseProb_16);
          MR_hl_field(MR_mktag(0), recursion_patterns__BaseLevel_19, 3) = MR_box_float(recursion_patterns__BaseCost_15);
          MR_hl_field(MR_mktag(0), recursion_patterns__BaseLevel_19, 4) = MR_box_float((MR_Float) 0.0000000000000000);
        }
        {
          recursion_patterns__succeeded = mercury__set__empty_1_p_0((MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_error_0, recursion_patterns__Errors_11);
        }
        if (recursion_patterns__succeeded)
          {
            recursion_patterns__succeeded = (recursion_patterns__Maximum_10 < (MR_Integer) 0);
            if (recursion_patterns__succeeded)
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "recursion_patterns", (MR_String) "predicate \140recursion_patterns.recursion_data_to_recursion_type\'/4", (MR_String) "negative number of recursive calls");
                  return;
                }
              }
            else
              {
                recursion_patterns__succeeded = (recursion_patterns__Maximum_10 == (MR_Integer) 0);
                if (recursion_patterns__succeeded)
                  *recursion_patterns__Type_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                else
                  {
                    recursion_patterns__succeeded = (recursion_patterns__Maximum_10 == (MR_Integer) 1);
                    if (recursion_patterns__succeeded)
                      {
                        MR_Float recursion_patterns__RecCost_21;
                        MR_Word recursion_patterns__RecLevel_24;
                        MR_Float recursion_patterns__AvgMaxDepth_26;
                        MR_Float recursion_patterns__AvgRecCost_27;
                        MR_Word recursion_patterns__AnyRecCost_28;
                        MR_Word recursion_patterns__RLRec_20;
                        MR_Box recursion_patterns__conv1_RLRec_20;

                        {
                          recursion_patterns__succeeded = mercury__assoc_list__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_level_0, recursion_patterns__Levels_9, ((MR_Box) ((MR_Integer) 1)), &recursion_patterns__conv1_RLRec_20);
                        }
                        if (recursion_patterns__succeeded)
                          {
                            recursion_patterns__RLRec_20 = ((MR_Word) recursion_patterns__conv1_RLRec_20);
                            recursion_patterns__succeeded = MR_TRUE;
                          }
                        if (recursion_patterns__succeeded)
                          {
                            MR_Float recursion_patterns__RecProb_22;
                            MR_Float recursion_patterns__RecCountF_23;
                            MR_Float recursion_patterns__V_41_41;
                            MR_Integer recursion_patterns__V_43_43;

                            recursion_patterns__RecCost_21 = MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__RLRec_20, (MR_Integer) 0)));
                            recursion_patterns__RecProb_22 = MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__RLRec_20, (MR_Integer) 1)));
                            {
                              recursion_patterns__V_41_41 = measurement_units__probability_to_float_1_f_0(recursion_patterns__RecProb_22);
                            }
                            recursion_patterns__RecCountF_23 = (recursion_patterns__V_41_41 * recursion_patterns__TotalCalls_13);
                            {
                              recursion_patterns__V_43_43 = mercury__float__round_to_int_1_f_0(recursion_patterns__RecCountF_23);
                            }
                            {
                              recursion_patterns__RecLevel_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), recursion_patterns__RecLevel_24, 0) = ((MR_Box) ((MR_Integer) 1));
                              MR_hl_field(MR_mktag(0), recursion_patterns__RecLevel_24, 1) = ((MR_Box) (recursion_patterns__V_43_43));
                              MR_hl_field(MR_mktag(0), recursion_patterns__RecLevel_24, 2) = MR_box_float(recursion_patterns__RecProb_22);
                              MR_hl_field(MR_mktag(0), recursion_patterns__RecLevel_24, 3) = MR_box_float(recursion_patterns__RecCost_21);
                              MR_hl_field(MR_mktag(0), recursion_patterns__RecLevel_24, 4) = MR_box_float((MR_Float) 1.0000000000000000);
                            }
                          }
                        else
                          {
                            MR_String recursion_patterns__Msg_25;
                            MR_String recursion_patterns__V_110_110;
                            MR_String recursion_patterns__V_117_117;

                            {
                              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &recursion_patterns_scalar_common_3[2], (MR_Integer) 1, &recursion_patterns__V_110_110);
                            }
                            {
                              recursion_patterns__V_117_117 = mercury__string__f_43_43_2_f_0(recursion_patterns__V_110_110, (MR_String) " not found");
                            }
                            {
                              recursion_patterns__Msg_25 = mercury__string__f_43_43_2_f_0((MR_String) "maximum level ", recursion_patterns__V_117_117);
                            }
                            {
                              mercury__require__unexpected_3_p_0((MR_String) "recursion_patterns", (MR_String) "predicate \140recursion_patterns.recursion_data_to_recursion_type\'/4", recursion_patterns__Msg_25);
                              return;
                            }
                          }
                        {
                          recursion_patterns__AvgMaxDepth_26 = mercury__float__f_slash_2_f_0(recursion_patterns__TotalCalls_13, recursion_patterns__ParentCalls_12);
                        }
                        {
                          recursion_patterns__AvgRecCost_27 = recursion_patterns__single_rec_average_recursion_cost_3_f_0(recursion_patterns__BaseCost_15, recursion_patterns__RecCost_21, recursion_patterns__AvgMaxDepth_26);
                        }
                        {
                          recursion_patterns__AnyRecCost_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), recursion_patterns__AnyRecCost_28, 0) = ((MR_Box) (&recursion_patterns_scalar_common_4[1]));
                          MR_hl_field(MR_mktag(0), recursion_patterns__AnyRecCost_28, 1) = ((MR_Box) (recursion_patterns__recursion_data_to_recursion_type_4_p_0_1));
                          MR_hl_field(MR_mktag(0), recursion_patterns__AnyRecCost_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                          MR_hl_field(MR_mktag(0), recursion_patterns__AnyRecCost_28, 3) = MR_box_float(recursion_patterns__BaseCost_15);
                          MR_hl_field(MR_mktag(0), recursion_patterns__AnyRecCost_28, 4) = MR_box_float(recursion_patterns__RecCost_21);
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                          *recursion_patterns__Type_8 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recursion_patterns__BaseLevel_19));
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (recursion_patterns__RecLevel_24));
                          MR_hl_field(MR_mktag(1), base, 2) = MR_box_float(recursion_patterns__AvgMaxDepth_26);
                          MR_hl_field(MR_mktag(1), base, 3) = MR_box_float(recursion_patterns__AvgRecCost_27);
                          MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (recursion_patterns__AnyRecCost_28));
                        }
                      }
                    else
                      {
                        MR_Word recursion_patterns__TypeCtorInfo_97_97;
                        MR_Word recursion_patterns__TypeCtorInfo_98_98;
                        MR_Integer recursion_patterns__V_52_52;
                        MR_Word recursion_patterns__V_29_29;
                        MR_Box recursion_patterns__conv3_V_29_29;

                        recursion_patterns__succeeded = (recursion_patterns__Maximum_10 == (MR_Integer) 2);
                        if (recursion_patterns__succeeded)
                          {
                            recursion_patterns__V_52_52 = (MR_Integer) 1;
                            recursion_patterns__TypeCtorInfo_97_97 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
                            recursion_patterns__TypeCtorInfo_98_98 = (MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_level_0;
                            {
                              recursion_patterns__succeeded = mercury__assoc_list__search_3_p_0(recursion_patterns__TypeCtorInfo_97_97, recursion_patterns__TypeCtorInfo_98_98, recursion_patterns__Levels_9, ((MR_Box) (recursion_patterns__V_52_52)), &recursion_patterns__conv3_V_29_29);
                            }
                            if (recursion_patterns__succeeded)
                              {
                                recursion_patterns__V_29_29 = ((MR_Word) recursion_patterns__conv3_V_29_29);
                                recursion_patterns__succeeded = MR_TRUE;
                              }
                            recursion_patterns__succeeded = !(recursion_patterns__succeeded);
                          }
                        if (recursion_patterns__succeeded)
                          {
                            MR_Word recursion_patterns__RecLevel_82;
                            MR_Word recursion_patterns__RLRec_73;
                            MR_Box recursion_patterns__conv4_RLRec_73;

                            {
                              recursion_patterns__succeeded = mercury__assoc_list__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_level_0, recursion_patterns__Levels_9, ((MR_Box) ((MR_Integer) 2)), &recursion_patterns__conv4_RLRec_73);
                            }
                            if (recursion_patterns__succeeded)
                              {
                                recursion_patterns__RLRec_73 = ((MR_Word) recursion_patterns__conv4_RLRec_73);
                                recursion_patterns__succeeded = MR_TRUE;
                              }
                            if (recursion_patterns__succeeded)
                              {
                                MR_Float recursion_patterns__V_54_54;
                                MR_Integer recursion_patterns__V_56_56;
                                MR_Float recursion_patterns__V_57_57;
                                MR_Float recursion_patterns__RecCost_69 = MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__RLRec_73, (MR_Integer) 0)));
                                MR_Float recursion_patterns__RecProb_70 = MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__RLRec_73, (MR_Integer) 1)));
                                MR_Float recursion_patterns__RecCountF_71;

                                {
                                  recursion_patterns__V_54_54 = measurement_units__probability_to_float_1_f_0(recursion_patterns__RecProb_70);
                                }
                                recursion_patterns__RecCountF_71 = (recursion_patterns__V_54_54 * recursion_patterns__ParentCalls_12);
                                {
                                  recursion_patterns__V_56_56 = mercury__float__round_to_int_1_f_0(recursion_patterns__RecCountF_71);
                                }
                                recursion_patterns__V_57_57 = (recursion_patterns__RecCountF_71 * ((MR_Float) 2.0000000000000000));
                                {
                                  recursion_patterns__RecLevel_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                                  MR_hl_field(MR_mktag(0), recursion_patterns__RecLevel_82, 0) = ((MR_Box) ((MR_Integer) 2));
                                  MR_hl_field(MR_mktag(0), recursion_patterns__RecLevel_82, 1) = ((MR_Box) (recursion_patterns__V_56_56));
                                  MR_hl_field(MR_mktag(0), recursion_patterns__RecLevel_82, 2) = MR_box_float(recursion_patterns__RecProb_70);
                                  MR_hl_field(MR_mktag(0), recursion_patterns__RecLevel_82, 3) = MR_box_float(recursion_patterns__RecCost_69);
                                  MR_hl_field(MR_mktag(0), recursion_patterns__RecLevel_82, 4) = MR_box_float(recursion_patterns__V_57_57);
                                }
                              }
                            else
                              {
                                MR_String recursion_patterns__Msg_72;
                                MR_String recursion_patterns__V_120_120;
                                MR_String recursion_patterns__V_127_127;

                                {
                                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &recursion_patterns_scalar_common_3[2], (MR_Integer) 1, &recursion_patterns__V_120_120);
                                }
                                {
                                  recursion_patterns__V_127_127 = mercury__string__f_43_43_2_f_0(recursion_patterns__V_120_120, (MR_String) " not found");
                                }
                                {
                                  recursion_patterns__Msg_72 = mercury__string__f_43_43_2_f_0((MR_String) "maximum level ", recursion_patterns__V_127_127);
                                }
                                {
                                  mercury__require__unexpected_3_p_0((MR_String) "recursion_patterns", (MR_String) "predicate \140recursion_patterns.recursion_data_to_recursion_type\'/4", recursion_patterns__Msg_72);
                                  return;
                                }
                              }
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              *recursion_patterns__Type_8 = base;
                              MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (recursion_patterns__BaseLevel_19));
                              MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (recursion_patterns__RecLevel_82));
                            }
                          }
                        else
                          {
                            MR_Word recursion_patterns__LevelsReport_30;
                            MR_Word recursion_patterns__V_66_66;

                            {
                              recursion_patterns__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), recursion_patterns__V_66_66, 0) = ((MR_Box) (&recursion_patterns_scalar_common_6[0]));
                              MR_hl_field(MR_mktag(0), recursion_patterns__V_66_66, 1) = ((MR_Box) (recursion_patterns__recursion_data_to_recursion_type_4_p_0_2));
                              MR_hl_field(MR_mktag(0), recursion_patterns__V_66_66, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                              MR_hl_field(MR_mktag(0), recursion_patterns__V_66_66, 3) = MR_box_float(recursion_patterns__TotalCalls_13);
                            }
                            {
                              mercury__list__map_3_p_0((MR_Word) &recursion_patterns_scalar_common_1[3], (MR_Word) &report__report__type_ctor_info_recursion_level_report_0, recursion_patterns__V_66_66, recursion_patterns__Levels_9, &recursion_patterns__LevelsReport_30);
                            }
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              *recursion_patterns__Type_8 = base;
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (recursion_patterns__LevelsReport_30));
                            }
                          }
                      }
                  }
              }
          }
        else
          {
            MR_Word recursion_patterns__TypeCtorInfo_105_105 = (MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_error_0;
            MR_Word recursion_patterns__Messages_31;
            MR_Word recursion_patterns__V_68_68;

            {
              recursion_patterns__V_68_68 = mercury__set__to_sorted_list_1_f_0(recursion_patterns__TypeCtorInfo_105_105, recursion_patterns__Errors_11);
            }
            {
              recursion_patterns__Messages_31 = mercury__list__map_2_f_0(recursion_patterns__TypeCtorInfo_105_105, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &recursion_patterns_scalar_common_1[5], recursion_patterns__V_68_68);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *recursion_patterns__Type_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (recursion_patterns__Messages_31));
            }
          }
      }
  }
}

void MR_CALL 
recursion_patterns__recursion_type_get_maybe_avg_max_depth_2_p_1(
  MR_Word recursion_patterns__HeadVar__1_1,
  MR_Word * recursion_patterns__HeadVar__2_2)
{
  {
    MR_bool recursion_patterns__succeeded;

    switch (MR_tag((MR_Word) recursion_patterns__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word recursion_patterns__V_3_3;

          {
            recursion_patterns__V_3_3 = measurements__recursion_depth_from_float_1_f_0((MR_Float) 0.0000000000000000);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *recursion_patterns__HeadVar__2_2 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recursion_patterns__V_3_3));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Float recursion_patterns__Depth_7 = MR_unbox_float((MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__1_1, (MR_Integer) 2)));
          MR_Word recursion_patterns__V_10_10;
          MR_Word recursion_patterns__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__1_1, (MR_Integer) 0)));
          MR_Word recursion_patterns__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__1_1, (MR_Integer) 1)));
          MR_Float recursion_patterns__V_8_8 = MR_unbox_float((MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__1_1, (MR_Integer) 3)));
          MR_Word recursion_patterns__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__1_1, (MR_Integer) 4)));

          {
            recursion_patterns__V_10_10 = measurements__recursion_depth_from_float_1_f_0(recursion_patterns__Depth_7);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *recursion_patterns__HeadVar__2_2 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recursion_patterns__V_10_10));
          }
        }
        break;
      case (MR_Integer) 2:
        *recursion_patterns__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), recursion_patterns__HeadVar__1_1, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *recursion_patterns__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 1:
            *recursion_patterns__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 2:
            *recursion_patterns__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
        }
        break;
    }
  }
}

void MR_CALL 
recursion_patterns__recursion_type_get_maybe_avg_max_depth_2_p_0(
  MR_Word recursion_patterns__HeadVar__1_1,
  MR_Word * recursion_patterns__HeadVar__2_2)
{
  {
    MR_bool recursion_patterns__succeeded;

    if ((recursion_patterns__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word recursion_patterns__V_3_3;

        {
          recursion_patterns__V_3_3 = measurements__recursion_depth_from_float_1_f_0((MR_Float) 0.0000000000000000);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *recursion_patterns__HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recursion_patterns__V_3_3));
        }
      }
    else
      {
        MR_Float recursion_patterns__Depth_7 = MR_unbox_float((MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word recursion_patterns__V_10_10;
        MR_Word recursion_patterns__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word recursion_patterns__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__1_1, (MR_Integer) 1)));
        MR_Float recursion_patterns__V_8_8 = MR_unbox_float((MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word recursion_patterns__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__1_1, (MR_Integer) 4)));

        {
          recursion_patterns__V_10_10 = measurements__recursion_depth_from_float_1_f_0(recursion_patterns__Depth_7);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *recursion_patterns__HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recursion_patterns__V_10_10));
        }
      }
  }
}

static void MR_CALL 
recursion_patterns__create_recursion_types_frequency_report_2_p_0_1(
  MR_Box recursion_patterns__closure_arg,
  MR_Box recursion_patterns__wrapper_arg_1,
  MR_Box recursion_patterns__wrapper_arg_2,
  MR_Box recursion_patterns__wrapper_arg_3,
  MR_Box * recursion_patterns__wrapper_arg_4)
{
  {
    MR_Box recursion_patterns__closure = recursion_patterns__closure_arg;
    MR_Word recursion_patterns__conv0_STATE_VARIABLE_Histogram_28;

    {
      recursion_patterns__rec_types_freq_build_histogram_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__closure, (MR_Integer) 3))), ((MR_Integer) recursion_patterns__wrapper_arg_1), ((MR_Word) recursion_patterns__wrapper_arg_2), ((MR_Word) recursion_patterns__wrapper_arg_3), &recursion_patterns__conv0_STATE_VARIABLE_Histogram_28);
    }
    *recursion_patterns__wrapper_arg_4 = ((MR_Box) (recursion_patterns__conv0_STATE_VARIABLE_Histogram_28));
  }
}

void MR_CALL 
recursion_patterns__create_recursion_types_frequency_report_2_p_0(
  MR_Word recursion_patterns__Deep_3,
  MR_Word * recursion_patterns__MaybeReport_4)
{
  {
    MR_bool recursion_patterns__succeeded;
    MR_Word recursion_patterns__MaybeProgRepResult_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_3, (MR_Integer) 28)));
    MR_ArrayPtr recursion_patterns__V_33_33 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_3, (MR_Integer) 9)));
    MR_Word recursion_patterns__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_3, (MR_Integer) 0)));
    MR_String recursion_patterns__V_25_25 = ((MR_String) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_3, (MR_Integer) 1)));
    MR_String recursion_patterns__V_26_26 = ((MR_String) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_3, (MR_Integer) 2)));
    MR_String recursion_patterns__V_27_27 = ((MR_String) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_3, (MR_Integer) 3)));
    MR_Word recursion_patterns__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_3, (MR_Integer) 4)));
    MR_ArrayPtr recursion_patterns__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_3, (MR_Integer) 5)));
    MR_ArrayPtr recursion_patterns__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_3, (MR_Integer) 6)));
    MR_ArrayPtr recursion_patterns__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_3, (MR_Integer) 7)));
    MR_ArrayPtr recursion_patterns__V_32_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_3, (MR_Integer) 8)));
    MR_ArrayPtr recursion_patterns__V_34_34 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_3, (MR_Integer) 10)));
    MR_ArrayPtr recursion_patterns__V_35_35 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_3, (MR_Integer) 11)));
    MR_ArrayPtr recursion_patterns__V_36_36 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_3, (MR_Integer) 12)));
    MR_ArrayPtr recursion_patterns__V_37_37 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_3, (MR_Integer) 13)));
    MR_ArrayPtr recursion_patterns__V_38_38 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_3, (MR_Integer) 14)));
    MR_ArrayPtr recursion_patterns__V_39_39 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_3, (MR_Integer) 15)));
    MR_ArrayPtr recursion_patterns__V_40_40 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_3, (MR_Integer) 16)));
    MR_ArrayPtr recursion_patterns__V_41_41 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_3, (MR_Integer) 17)));
    MR_ArrayPtr recursion_patterns__V_42_42 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_3, (MR_Integer) 18)));
    MR_ArrayPtr recursion_patterns__V_43_43 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_3, (MR_Integer) 19)));
    MR_ArrayPtr recursion_patterns__V_44_44 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_3, (MR_Integer) 20)));
    MR_ArrayPtr recursion_patterns__V_45_45 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_3, (MR_Integer) 21)));
    MR_ArrayPtr recursion_patterns__V_46_46 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_3, (MR_Integer) 22)));
    MR_ArrayPtr recursion_patterns__V_47_47 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_3, (MR_Integer) 23)));
    MR_ArrayPtr recursion_patterns__V_48_48 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_3, (MR_Integer) 24)));
    MR_Word recursion_patterns__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_3, (MR_Integer) 25)));
    MR_Word recursion_patterns__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_3, (MR_Integer) 26)));
    MR_Word recursion_patterns__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_3, (MR_Integer) 27)));

    if ((recursion_patterns__MaybeProgRepResult_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *recursion_patterns__MaybeReport_4 = (MR_Word) MR_mkword(MR_mktag(1), &recursion_patterns_scalar_common_3[1]);
      }
    else
      {
        MR_Word recursion_patterns__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__MaybeProgRepResult_5, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) recursion_patterns__V_88_88)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_String recursion_patterns__Error_6 = ((MR_String) (MR_hl_field(MR_mktag(1), recursion_patterns__V_88_88, (MR_Integer) 0)));
            MR_String recursion_patterns__V_17_17;
            MR_String recursion_patterns__V_19_19;

            {
              recursion_patterns__V_19_19 = mercury__string__f_43_43_2_f_0((MR_String) "information file: ", recursion_patterns__Error_6);
            }
            {
              recursion_patterns__V_17_17 = mercury__string__f_43_43_2_f_0((MR_String) "Error reading procedure representation ", recursion_patterns__V_19_19);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *recursion_patterns__MaybeReport_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recursion_patterns__V_17_17));
            }
          }
        else
          {
            MR_Word recursion_patterns__TypeCtorInfo_80_80 = (MR_Word) &profile__profile__type_ctor_info_clique_ptr_0;
            MR_Integer recursion_patterns__NumCliques_9;
            MR_Word recursion_patterns__Histogram0_10;
            MR_Word recursion_patterns__Histogram_11;
            MR_Word recursion_patterns__V_13_13;
            MR_Word recursion_patterns__V_14_14;
            MR_Word recursion_patterns__V_15_15;
            MR_Box recursion_patterns__conv1_Histogram0_10;

            {
              mercury__array__size_2_p_0(recursion_patterns__TypeCtorInfo_80_80, (MR_ArrayPtr) recursion_patterns__V_33_33, &recursion_patterns__NumCliques_9);
            }
            {
              recursion_patterns__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), recursion_patterns__V_13_13, 0) = ((MR_Box) (&recursion_patterns_scalar_common_5[0]));
              MR_hl_field(MR_mktag(0), recursion_patterns__V_13_13, 1) = ((MR_Box) (recursion_patterns__create_recursion_types_frequency_report_2_p_0_1));
              MR_hl_field(MR_mktag(0), recursion_patterns__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), recursion_patterns__V_13_13, 3) = ((MR_Box) (recursion_patterns__Deep_3));
            }
            {
              recursion_patterns__V_14_14 = mercury__map__init_0_f_0((MR_Word) &report__report__type_ctor_info_recursion_type_simple_0, (MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_type_raw_freq_data_0);
            }
            {
              array_util__array_foldl_from_1_4_p_1(recursion_patterns__TypeCtorInfo_80_80, (MR_Word) &recursion_patterns_scalar_common_1[0], recursion_patterns__V_13_13, (MR_ArrayPtr) recursion_patterns__V_33_33, ((MR_Box) (recursion_patterns__V_14_14)), &recursion_patterns__conv1_Histogram0_10);
            }
            recursion_patterns__Histogram0_10 = ((MR_Word) recursion_patterns__conv1_Histogram0_10);
            {
              recursion_patterns__finalize_histogram_4_p_0(recursion_patterns__Deep_3, recursion_patterns__NumCliques_9, recursion_patterns__Histogram0_10, &recursion_patterns__Histogram_11);
            }
            recursion_patterns__V_15_15 = (MR_Word) recursion_patterns__Histogram_11;
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *recursion_patterns__MaybeReport_4 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (recursion_patterns__V_15_15));
            }
          }
      }
  }
}

static void MR_CALL 
recursion_patterns__create_clique_recursion_costs_report_3_p_0_1(
  MR_Box recursion_patterns__closure_arg,
  MR_Box recursion_patterns__wrapper_arg_1,
  MR_Box recursion_patterns__wrapper_arg_2,
  MR_Box * recursion_patterns__wrapper_arg_3)
{
  {
    MR_Box recursion_patterns__closure = recursion_patterns__closure_arg;
    MR_Word recursion_patterns__conv0_HeadVar__4_4;

    {
      analysis_utils__build_dynamic_call_site_cost_and_callee_map_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__closure, (MR_Integer) 3))), ((MR_Word) recursion_patterns__wrapper_arg_1), ((MR_Word) recursion_patterns__wrapper_arg_2), &recursion_patterns__conv0_HeadVar__4_4);
    }
    *recursion_patterns__wrapper_arg_3 = ((MR_Box) (recursion_patterns__conv0_HeadVar__4_4));
  }
}

void MR_CALL 
recursion_patterns__create_clique_recursion_costs_report_3_p_0(
  MR_Word recursion_patterns__Deep_4,
  MR_Word recursion_patterns__CliquePtr_5,
  MR_Word * recursion_patterns__MaybeCliqueRecursionReport_6)
{
  {
    MR_bool recursion_patterns__succeeded;
    MR_Word recursion_patterns__MaybeFirstPDPtr_7;
    MR_Word recursion_patterns__OtherPDPtrs_8;
    MR_Word recursion_patterns__ParentCallPtr_9;
    MR_Integer recursion_patterns__ParentCalls_11;

    {
      analysis_utils__find_clique_first_and_other_procs_4_p_0(recursion_patterns__Deep_4, recursion_patterns__CliquePtr_5, &recursion_patterns__MaybeFirstPDPtr_7, &recursion_patterns__OtherPDPtrs_8);
    }
    {
      profile__deep_lookup_clique_parents_3_p_0(recursion_patterns__Deep_4, recursion_patterns__CliquePtr_5, &recursion_patterns__ParentCallPtr_9);
    }
    {
      recursion_patterns__succeeded = profile__valid_call_site_dynamic_ptr_2_p_0(recursion_patterns__Deep_4, recursion_patterns__ParentCallPtr_9);
    }
    if (recursion_patterns__succeeded)
      {
        MR_Word recursion_patterns__ParentCall_10;
        MR_Word recursion_patterns__V_20_20;
        MR_Word recursion_patterns__V_25_25;
        MR_Word recursion_patterns__V_26_26;

        {
          profile__deep_lookup_call_site_dynamics_3_p_0(recursion_patterns__Deep_4, recursion_patterns__ParentCallPtr_9, &recursion_patterns__ParentCall_10);
        }
        recursion_patterns__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__ParentCall_10, (MR_Integer) 0)));
        recursion_patterns__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__ParentCall_10, (MR_Integer) 1)));
        recursion_patterns__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__ParentCall_10, (MR_Integer) 2)));
        {
          recursion_patterns__ParentCalls_11 = measurements__calls_1_f_0(recursion_patterns__V_20_20);
        }
      }
    else
      recursion_patterns__ParentCalls_11 = (MR_Integer) 1;
    if ((recursion_patterns__MaybeFirstPDPtr_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *recursion_patterns__MaybeCliqueRecursionReport_6 = (MR_Word) MR_mkword(MR_mktag(1), &recursion_patterns_scalar_common_3[0]);
      }
    else
      {
        MR_Word recursion_patterns__FirstPDPtr_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__MaybeFirstPDPtr_7, (MR_Integer) 0)));
        MR_Integer recursion_patterns__NumProcs_13;
        MR_Integer recursion_patterns__V_22_22;

        {
          recursion_patterns__V_22_22 = mercury__list__length_1_f_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0, recursion_patterns__OtherPDPtrs_8);
        }
        recursion_patterns__NumProcs_13 = (recursion_patterns__V_22_22 + (MR_Integer) 1);
        if ((recursion_patterns__OtherPDPtrs_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word recursion_patterns__MaybeRecursionType_14;
            MR_Word recursion_patterns__PDOwn_33;
            MR_Integer recursion_patterns__TotalCalls_34;
            MR_Word recursion_patterns__MaybeCoverageReport_35;

            {
              profile__deep_lookup_pd_own_3_p_0(recursion_patterns__Deep_4, recursion_patterns__FirstPDPtr_12, &recursion_patterns__PDOwn_33);
            }
            {
              recursion_patterns__TotalCalls_34 = measurements__calls_1_f_0(recursion_patterns__PDOwn_33);
            }
            {
              create_report__create_dynamic_procrep_coverage_report_3_p_0(recursion_patterns__Deep_4, recursion_patterns__FirstPDPtr_12, &recursion_patterns__MaybeCoverageReport_35);
            }
            if (((MR_tag((MR_Word) recursion_patterns__MaybeCoverageReport_35)) == (MR_mktag((MR_Integer) 1))))
              recursion_patterns__MaybeRecursionType_14 = (MR_Word) recursion_patterns__MaybeCoverageReport_35;
            else
              {
                MR_Word recursion_patterns__CoverageReport_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__MaybeCoverageReport_35, (MR_Integer) 0)));
                MR_Word recursion_patterns__ProcRep_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__CoverageReport_36, (MR_Integer) 1)));
                MR_Word recursion_patterns__CoverageArray_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__CoverageReport_36, (MR_Integer) 2)));
                MR_Word recursion_patterns__Goal_40;
                MR_Word recursion_patterns__Slots_41;
                MR_Word recursion_patterns__CallSitesMap_42;
                MR_Word recursion_patterns__Info_43;
                MR_Word recursion_patterns__RecursionData_44;
                MR_Word recursion_patterns__RecursionType_45;
                MR_Word recursion_patterns__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__ProcRep_38, (MR_Integer) 1)));
                MR_Word recursion_patterns__V_48_48;
                MR_Word recursion_patterns__V_49_49;
                MR_Word recursion_patterns__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__CoverageReport_36, (MR_Integer) 0)));
                MR_Word recursion_patterns__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__ProcRep_38, (MR_Integer) 0)));
                MR_Word recursion_patterns__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__V_47_47, (MR_Integer) 0)));
                MR_Word recursion_patterns__V_53_53;
                MR_Word recursion_patterns__V_54_54;
                MR_Word recursion_patterns__V_55_55;
                MR_Box recursion_patterns__conv1_CallSitesMap_42;

                recursion_patterns__Goal_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__V_47_47, (MR_Integer) 1)));
                recursion_patterns__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__V_47_47, (MR_Integer) 2)));
                recursion_patterns__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__V_47_47, (MR_Integer) 3)));
                recursion_patterns__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__V_47_47, (MR_Integer) 4)));
                {
                  analysis_utils__proc_dynamic_paired_call_site_slots_3_p_0(recursion_patterns__Deep_4, recursion_patterns__FirstPDPtr_12, &recursion_patterns__Slots_41);
                }
                {
                  recursion_patterns__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), recursion_patterns__V_48_48, 0) = ((MR_Box) (&recursion_patterns_scalar_common_4[0]));
                  MR_hl_field(MR_mktag(0), recursion_patterns__V_48_48, 1) = ((MR_Box) (recursion_patterns__create_clique_recursion_costs_report_3_p_0_1));
                  MR_hl_field(MR_mktag(0), recursion_patterns__V_48_48, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), recursion_patterns__V_48_48, 3) = ((MR_Box) (recursion_patterns__Deep_4));
                }
                {
                  recursion_patterns__V_49_49 = mercury__map__init_0_f_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, (MR_Word) &recursion_patterns_scalar_common_2[0]);
                }
                {
                  mercury__list__foldl_4_p_0((MR_Word) &recursion_patterns_scalar_common_1[1], (MR_Word) &recursion_patterns_scalar_common_1[2], recursion_patterns__V_48_48, recursion_patterns__Slots_41, ((MR_Box) (recursion_patterns__V_49_49)), &recursion_patterns__conv1_CallSitesMap_42);
                }
                recursion_patterns__CallSitesMap_42 = ((MR_Word) recursion_patterns__conv1_CallSitesMap_42);
                {
                  recursion_patterns__Info_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), recursion_patterns__Info_43, 0) = ((MR_Box) (recursion_patterns__CliquePtr_5));
                  MR_hl_field(MR_mktag(0), recursion_patterns__Info_43, 1) = ((MR_Box) (recursion_patterns__CallSitesMap_42));
                  MR_hl_field(MR_mktag(0), recursion_patterns__Info_43, 2) = ((MR_Box) (recursion_patterns__CoverageArray_39));
                }
                {
                  recursion_patterns__goal_recursion_data_4_p_0(recursion_patterns__Info_43, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), recursion_patterns__Goal_40, &recursion_patterns__RecursionData_44);
                }
                {
                  recursion_patterns__recursion_data_to_recursion_type_4_p_0(recursion_patterns__ParentCalls_11, recursion_patterns__TotalCalls_34, recursion_patterns__RecursionData_44, &recursion_patterns__RecursionType_45);
                }
                {
                  recursion_patterns__MaybeRecursionType_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), recursion_patterns__MaybeRecursionType_14, 0) = ((MR_Box) (recursion_patterns__RecursionType_45));
                }
              }
            if (((MR_tag((MR_Word) recursion_patterns__MaybeRecursionType_14)) == (MR_mktag((MR_Integer) 1))))
              *recursion_patterns__MaybeCliqueRecursionReport_6 = (MR_Word) recursion_patterns__MaybeRecursionType_14;
            else
              {
                MR_Word recursion_patterns__RecursionType_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__MaybeRecursionType_14, (MR_Integer) 0)));
                MR_Word recursion_patterns__CliqueRecursionReport_18;

                {
                  recursion_patterns__CliqueRecursionReport_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), recursion_patterns__CliqueRecursionReport_18, 0) = ((MR_Box) (recursion_patterns__CliquePtr_5));
                  MR_hl_field(MR_mktag(0), recursion_patterns__CliqueRecursionReport_18, 1) = ((MR_Box) (recursion_patterns__RecursionType_17));
                  MR_hl_field(MR_mktag(0), recursion_patterns__CliqueRecursionReport_18, 2) = ((MR_Box) (recursion_patterns__NumProcs_13));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  *recursion_patterns__MaybeCliqueRecursionReport_6 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (recursion_patterns__CliqueRecursionReport_18));
                }
              }
          }
        else
          {
            MR_Word recursion_patterns__RecursionType_65;
            MR_Word recursion_patterns__CliqueRecursionReport_66;

            {
              recursion_patterns__RecursionType_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), recursion_patterns__RecursionType_65, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), recursion_patterns__RecursionType_65, 1) = ((MR_Box) (recursion_patterns__NumProcs_13));
            }
            {
              recursion_patterns__CliqueRecursionReport_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), recursion_patterns__CliqueRecursionReport_66, 0) = ((MR_Box) (recursion_patterns__CliquePtr_5));
              MR_hl_field(MR_mktag(0), recursion_patterns__CliqueRecursionReport_66, 1) = ((MR_Box) (recursion_patterns__RecursionType_65));
              MR_hl_field(MR_mktag(0), recursion_patterns__CliqueRecursionReport_66, 2) = ((MR_Box) (recursion_patterns__NumProcs_13));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *recursion_patterns__MaybeCliqueRecursionReport_6 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (recursion_patterns__CliqueRecursionReport_66));
            }
          }
      }
  }
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module recursion_patterns. */
