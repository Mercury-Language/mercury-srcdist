/*
** Automatically generated from `var_use_analysis.m'
** by the Mercury compiler,
** version rotd-2017-07-26
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


/* :- module var_use_analysis. */
/* :- implementation. */

/*
INIT mercury__var_use_analysis__init
ENDINIT
*/

#include "var_use_analysis.mih"


#include "analysis_utils.mih"
#include "coverage.mih"
#include "exclude.mih"
#include "mdbcomp.mih"
#include "measurement_units.mih"
#include "measurements.mih"
#include "profile.mih"
#include "program_representation_utils.mih"
#include "query.mih"
#include "recursion_patterns.mih"
#include "report.mih"
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
#include "cord.mih"
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




static const MR_FA_PseudoTypeInfo_Struct2 var_use_analysis__pair__pti_pair_2__plain_profile__type_ctor_info_call_site_static_ptr_0__plain_profile__type_ctor_info_call_site_array_slot_0;

static const MR_FA_TypeInfo_Struct1 var_use_analysis__analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0;

static const MR_FA_PseudoTypeInfo_Struct2 var_use_analysis__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0;

static const MR_FA_PseudoTypeInfo_Struct2 var_use_analysis__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_coverage__type_ctor_info_coverage_point_0;

static const MR_FA_PseudoTypeInfo_Struct1 var_use_analysis__set_ordlist__pti_set_ordlist_1__plain_profile__type_ctor_info_proc_dynamic_ptr_0;

static const MR_FA_PseudoTypeInfo_Struct2 var_use_analysis__pair__pti_pair_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_measurements__type_ctor_info_cs_cost_csq_0;

static const MR_FA_PseudoTypeInfo_Struct2 var_use_analysis__pair__pti_pair_2__plain_mdbcomp__goal_path__type_ctor_info_forward_goal_path_0__plain_builtin__type_ctor_info_float_0;

static const MR_FA_TypeInfo_Struct1 var_use_analysis__mdbcomp__goal_path__ti_goal_attr_array_1builtin__type_ctor_info_float_0;

static const MR_PseudoTypeInfo var_use_analysis__var_use_analysis__field_types_first_use_rec_info_0_0[2];

static const MR_ConstString var_use_analysis__var_use_analysis__field_names_first_use_rec_info_0_0[2];

static const MR_DuFunctorDesc var_use_analysis__var_use_analysis__du_functor_desc_first_use_rec_info_0_0;

static const MR_DuFunctorDesc var_use_analysis__var_use_analysis__du_functor_desc_first_use_rec_info_0_1;

static const MR_DuFunctorDescPtr var_use_analysis__var_use_analysis__du_stag_ordered_first_use_rec_info_0_0[1];

static const MR_DuFunctorDescPtr var_use_analysis__var_use_analysis__du_stag_ordered_first_use_rec_info_0_1[1];

static const MR_DuPtagLayout var_use_analysis__var_use_analysis__du_ptag_ordered_first_use_rec_info_0[2];

static const MR_DuFunctorDescPtr var_use_analysis__var_use_analysis__du_name_ordered_first_use_rec_info_0[2];

static const MR_Integer var_use_analysis__var_use_analysis__functor_number_map_first_use_rec_info_0[2];

static const MR_DuFunctorDesc var_use_analysis__var_use_analysis__du_functor_desc_found_first_use_0_0;

static const MR_PseudoTypeInfo var_use_analysis__var_use_analysis__field_types_found_first_use_0_1[1];

static const MR_ConstString var_use_analysis__var_use_analysis__field_names_found_first_use_0_1[1];

static const MR_DuFunctorDesc var_use_analysis__var_use_analysis__du_functor_desc_found_first_use_0_1;

static const MR_DuFunctorDescPtr var_use_analysis__var_use_analysis__du_stag_ordered_found_first_use_0_0[1];

static const MR_DuFunctorDescPtr var_use_analysis__var_use_analysis__du_stag_ordered_found_first_use_0_1[1];

static const MR_DuPtagLayout var_use_analysis__var_use_analysis__du_ptag_ordered_found_first_use_0[2];

static const MR_DuFunctorDescPtr var_use_analysis__var_use_analysis__du_name_ordered_found_first_use_0[2];

static const MR_Integer var_use_analysis__var_use_analysis__functor_number_map_found_first_use_0[2];

static const MR_PseudoTypeInfo var_use_analysis__var_use_analysis__field_types_intermodule_var_use_0_0[1];

static const MR_DuFunctorDesc var_use_analysis__var_use_analysis__du_functor_desc_intermodule_var_use_0_0;

static const MR_DuFunctorDesc var_use_analysis__var_use_analysis__du_functor_desc_intermodule_var_use_0_1;

static const MR_DuFunctorDescPtr var_use_analysis__var_use_analysis__du_stag_ordered_intermodule_var_use_0_0[1];

static const MR_DuFunctorDescPtr var_use_analysis__var_use_analysis__du_stag_ordered_intermodule_var_use_0_1[1];

static const MR_DuPtagLayout var_use_analysis__var_use_analysis__du_ptag_ordered_intermodule_var_use_0[2];

static const MR_DuFunctorDescPtr var_use_analysis__var_use_analysis__du_name_ordered_intermodule_var_use_0[2];

static const MR_Integer var_use_analysis__var_use_analysis__functor_number_map_intermodule_var_use_0[2];

static const MR_PseudoTypeInfo var_use_analysis__var_use_analysis__field_types_proc_var_first_use_prepared_info_0_0[1];

static const MR_DuFunctorDesc var_use_analysis__var_use_analysis__du_functor_desc_proc_var_first_use_prepared_info_0_0;

static const MR_FA_TypeInfo_Struct1 var_use_analysis__mdbcomp__program_representation__ti_goal_rep_1mdbcomp__goal_path__type_ctor_info_goal_id_0;

static const MR_FA_TypeInfo_Struct2 var_use_analysis__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0;

static const MR_FA_TypeInfo_Struct1 var_use_analysis__mdbcomp__goal_path__ti_goal_attr_array_1coverage__type_ctor_info_coverage_info_0;

static const MR_FA_TypeInfo_Struct2 var_use_analysis__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0;

static const MR_FA_TypeInfo_Struct2 var_use_analysis__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0measurements__type_ctor_info_cs_cost_csq_0;

static const MR_PseudoTypeInfo var_use_analysis__var_use_analysis__field_types_proc_var_first_use_prepared_info_0_1[7];

static const MR_DuFunctorDesc var_use_analysis__var_use_analysis__du_functor_desc_proc_var_first_use_prepared_info_0_1;

static const MR_DuFunctorDescPtr var_use_analysis__var_use_analysis__du_stag_ordered_proc_var_first_use_prepared_info_0_0[1];

static const MR_DuFunctorDescPtr var_use_analysis__var_use_analysis__du_stag_ordered_proc_var_first_use_prepared_info_0_1[1];

static const MR_DuPtagLayout var_use_analysis__var_use_analysis__du_ptag_ordered_proc_var_first_use_prepared_info_0[2];

static const MR_DuFunctorDescPtr var_use_analysis__var_use_analysis__du_name_ordered_proc_var_first_use_prepared_info_0[2];

static const MR_Integer var_use_analysis__var_use_analysis__functor_number_map_proc_var_first_use_prepared_info_0[2];

static const MR_FA_TypeInfo_Struct2 var_use_analysis__pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_forward_goal_path_0builtin__type_ctor_info_float_0;

static const MR_FA_TypeInfo_Struct1 var_use_analysis__list__ti_list_1pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_forward_goal_path_0builtin__type_ctor_info_float_0;

static const MR_EnumFunctorDesc var_use_analysis__var_use_analysis__enum_functor_desc_recursive_case_0_0;

static const MR_EnumFunctorDesc var_use_analysis__var_use_analysis__enum_functor_desc_recursive_case_0_1;

static const MR_EnumFunctorDescPtr var_use_analysis__var_use_analysis__enum_value_ordered_recursive_case_0[2];

static const MR_EnumFunctorDescPtr var_use_analysis__var_use_analysis__enum_name_ordered_recursive_case_0[2];

static const MR_Integer var_use_analysis__var_use_analysis__functor_number_map_recursive_case_0[2];

static const MR_FA_TypeInfo_Struct1 var_use_analysis__set_ordlist__ti_set_ordlist_1profile__type_ctor_info_proc_dynamic_ptr_0;

static const MR_PseudoTypeInfo var_use_analysis__var_use_analysis__field_types_var_first_use_static_info_0_0[11];

static const MR_ConstString var_use_analysis__var_use_analysis__field_names_var_first_use_static_info_0_0[11];

static const MR_DuFunctorDesc var_use_analysis__var_use_analysis__du_functor_desc_var_first_use_static_info_0_0;

static const MR_DuFunctorDescPtr var_use_analysis__var_use_analysis__du_stag_ordered_var_first_use_static_info_0_0[1];

static const MR_DuPtagLayout var_use_analysis__var_use_analysis__du_ptag_ordered_var_first_use_static_info_0[1];

static const MR_DuFunctorDescPtr var_use_analysis__var_use_analysis__du_name_ordered_var_first_use_static_info_0[1];

static const MR_Integer var_use_analysis__var_use_analysis__functor_number_map_var_first_use_static_info_0[1];

static const MR_PseudoTypeInfo var_use_analysis__var_use_analysis__field_types_var_use_info_0_0[3];

static const MR_ConstString var_use_analysis__var_use_analysis__field_names_var_use_info_0_0[3];

static const MR_DuFunctorDesc var_use_analysis__var_use_analysis__du_functor_desc_var_use_info_0_0;

static const MR_DuFunctorDescPtr var_use_analysis__var_use_analysis__du_stag_ordered_var_use_info_0_0[1];

static const MR_DuPtagLayout var_use_analysis__var_use_analysis__du_ptag_ordered_var_use_info_0[1];

static const MR_DuFunctorDescPtr var_use_analysis__var_use_analysis__du_name_ordered_var_use_info_0[1];

static const MR_Integer var_use_analysis__var_use_analysis__functor_number_map_var_use_info_0[1];

static const MR_PseudoTypeInfo var_use_analysis__var_use_analysis__field_types_var_use_options_0_0[3];

static const MR_ConstString var_use_analysis__var_use_analysis__field_names_var_use_options_0_0[3];

static const MR_DuFunctorDesc var_use_analysis__var_use_analysis__du_functor_desc_var_use_options_0_0;

static const MR_DuFunctorDescPtr var_use_analysis__var_use_analysis__du_stag_ordered_var_use_options_0_0[1];

static const MR_DuPtagLayout var_use_analysis__var_use_analysis__du_ptag_ordered_var_use_options_0[1];

static const MR_DuFunctorDescPtr var_use_analysis__var_use_analysis__du_name_ordered_var_use_options_0[1];

static const MR_Integer var_use_analysis__var_use_analysis__functor_number_map_var_use_options_0[1];

static const MR_EnumFunctorDesc var_use_analysis__var_use_analysis__enum_functor_desc_var_use_type_0_0;

static const MR_EnumFunctorDesc var_use_analysis__var_use_analysis__enum_functor_desc_var_use_type_0_1;

static const MR_EnumFunctorDesc var_use_analysis__var_use_analysis__enum_functor_desc_var_use_type_0_2;

static const MR_EnumFunctorDescPtr var_use_analysis__var_use_analysis__enum_value_ordered_var_use_type_0[3];

static const MR_EnumFunctorDescPtr var_use_analysis__var_use_analysis__enum_name_ordered_var_use_type_0[3];

static const MR_Integer var_use_analysis__var_use_analysis__functor_number_map_var_use_type_0[3];

static MR_bool MR_CALL 
var_use_analysis__IntroducedFrom__pred__rec_switch_var_first_use__1482__1_2_p_0(
  MR_Word var_use_analysis__HeadVar__1_30,
  MR_Word var_use_analysis__HeadVar__2_70);

static MR_bool MR_CALL 
var_use_analysis__IntroducedFrom__pred__filter_recursive_call_sites__1257__1_3_p_0(
  MR_Word var_use_analysis__GoalPathStep_4,
  MR_Word var_use_analysis__LambdaHeadVar__1_13,
  MR_Word * var_use_analysis__LambdaHeadVar__2_14);

static void MR_CALL 
var_use_analysis__IntroducedFrom__pred__build_recursive_call_sites_list__1247__1_2_p_0(
  MR_Word var_use_analysis__LambdaHeadVar__1_11,
  MR_Word * var_use_analysis__LambdaHeadVar__2_12);

static MR_bool MR_CALL 
var_use_analysis__IntroducedFrom__pred__switch_var_first_use__1119__1_2_p_0(
  MR_Word var_use_analysis__HeadVar__1_25,
  MR_Word var_use_analysis__HeadVar__2_50);

static MR_bool MR_CALL 
var_use_analysis__IntroducedFrom__pred__average_var_use__169__1_2_p_0(
  MR_Word var_use_analysis__Type_6,
  MR_Word var_use_analysis__LambdaHeadVar__1_22);

static void MR_CALL 
var_use_analysis____Compare____var_first_use_static_info_0_0(
  MR_Word * var_use_analysis__HeadVar__1_1,
  MR_Word var_use_analysis__HeadVar__2_2,
  MR_Word var_use_analysis__HeadVar__3_3);

static MR_bool MR_CALL 
var_use_analysis____Unify____var_first_use_static_info_0_0(
  MR_Word var_use_analysis__HeadVar__1_1,
  MR_Word var_use_analysis__HeadVar__2_2);

static void MR_CALL 
var_use_analysis____Compare____recursive_case_0_0(
  MR_Word * var_use_analysis__HeadVar__1_1,
  MR_Word var_use_analysis__HeadVar__2_2,
  MR_Word var_use_analysis__HeadVar__3_3);

static MR_bool MR_CALL 
var_use_analysis____Unify____recursive_case_0_0(
  MR_Word var_use_analysis__HeadVar__2_1,
  MR_Word var_use_analysis__HeadVar__2_2);

static void MR_CALL 
var_use_analysis____Compare____recursive_calls_list_0_0(
  MR_Word * var_use_analysis__HeadVar__1_1,
  MR_Word var_use_analysis__HeadVar__2_2,
  MR_Word var_use_analysis__HeadVar__3_3);

static MR_bool MR_CALL 
var_use_analysis____Unify____recursive_calls_list_0_0(
  MR_Word var_use_analysis__HeadVar__1_1,
  MR_Word var_use_analysis__HeadVar__2_2);

static void MR_CALL 
var_use_analysis____Compare____proc_var_first_use_prepared_info_0_0(
  MR_Word * var_use_analysis__HeadVar__1_1,
  MR_Word var_use_analysis__HeadVar__2_2,
  MR_Word var_use_analysis__HeadVar__3_3);

static MR_bool MR_CALL 
var_use_analysis____Unify____proc_var_first_use_prepared_info_0_0(
  MR_Word var_use_analysis__HeadVar__1_1,
  MR_Word var_use_analysis__HeadVar__2_2);

static void MR_CALL 
var_use_analysis____Compare____found_first_use_0_0(
  MR_Word * var_use_analysis__HeadVar__1_1,
  MR_Word var_use_analysis__HeadVar__2_2,
  MR_Word var_use_analysis__HeadVar__3_3);

static MR_bool MR_CALL 
var_use_analysis____Unify____found_first_use_0_0(
  MR_Word var_use_analysis__HeadVar__1_1,
  MR_Word var_use_analysis__HeadVar__2_2);

static void MR_CALL 
var_use_analysis____Compare____first_use_rec_info_0_0(
  MR_Word * var_use_analysis__HeadVar__1_1,
  MR_Word var_use_analysis__HeadVar__2_2,
  MR_Word var_use_analysis__HeadVar__3_3);

static MR_bool MR_CALL 
var_use_analysis____Unify____first_use_rec_info_0_0(
  MR_Word var_use_analysis__HeadVar__1_1,
  MR_Word var_use_analysis__HeadVar__2_2);

static void MR_CALL 
var_use_analysis__adjust_weight_for_recursion_4_p_0(
  MR_Word var_use_analysis__RecCase_5,
  MR_Float var_use_analysis__RecProb_6,
  MR_Float var_use_analysis__STATE_VARIABLE_Weight_0_9,
  MR_Float * var_use_analysis__STATE_VARIABLE_Weight_10);

static void MR_CALL 
var_use_analysis__get_call_site_dynamic_var_use_time_9_p_0(
  MR_Word var_use_analysis__CliquePtr_10,
  MR_Word var_use_analysis__CSDPtr_11,
  MR_Word var_use_analysis__RecursionType_12,
  MR_Word var_use_analysis__CurDepth_13,
  MR_Float var_use_analysis__Cost_14,
  MR_Word var_use_analysis__CallStack_15,
  MR_Word var_use_analysis__VarUseOptions_16,
  MR_Integer var_use_analysis__ArgNum_17,
  MR_Float * var_use_analysis__Time_18);

static void MR_CALL 
var_use_analysis__sum_use_info_costs_5_p_0(
  MR_Word var_use_analysis__HeadVar__1_1,
  MR_Float var_use_analysis__STATE_VARIABLE_AccCost_0_11,
  MR_Float * var_use_analysis__STATE_VARIABLE_AccCost_12,
  MR_Float var_use_analysis__STATE_VARIABLE_AccProcCost_0_13,
  MR_Float * var_use_analysis__STATE_VARIABLE_AccProcCost_14);

static void MR_CALL 
var_use_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_99_117_114_115_105_118_101_95_118_97_114_95_117_115_101_95_105_110_102_111_95_95_91_54_93_95_48_9_p_0(
  MR_Word var_use_analysis__CliquePtr_10,
  MR_Word var_use_analysis__PDPtr_11,
  MR_Integer var_use_analysis__ArgNum_12,
  MR_Word var_use_analysis__RecursionType_13,
  MR_Word var_use_analysis__Depth_14,
  MR_Word var_use_analysis__CallStack_16,
  MR_Word var_use_analysis__VarUseOptions_17,
  MR_Word * var_use_analysis__MaybeVarUseInfo_18);

static MR_bool MR_CALL 
var_use_analysis__ite_rec_prob_8_p_0_2(
  MR_Box var_use_analysis__closure_arg,
  MR_Box var_use_analysis__wrapper_arg_1,
  MR_Box * var_use_analysis__wrapper_arg_2);

static MR_bool MR_CALL 
var_use_analysis__ite_rec_prob_8_p_0_1(
  MR_Box var_use_analysis__closure_arg,
  MR_Box var_use_analysis__wrapper_arg_1,
  MR_Box * var_use_analysis__wrapper_arg_2);

static void MR_CALL 
var_use_analysis__ite_rec_prob_8_p_0(
  MR_Word var_use_analysis__Cond_9,
  MR_Word var_use_analysis__Then_10,
  MR_Word var_use_analysis__Else_11,
  MR_Word var_use_analysis__RecCalls_12,
  MR_Word var_use_analysis__Info_13,
  MR_Float * var_use_analysis__Prob_14,
  MR_Word var_use_analysis__STATE_VARIABLE_ProbArray_0_31,
  MR_Word * var_use_analysis__STATE_VARIABLE_ProbArray_32);

static MR_bool MR_CALL 
var_use_analysis__switch_rec_prob_2_9_p_0_1(
  MR_Box var_use_analysis__closure_arg,
  MR_Box var_use_analysis__wrapper_arg_1,
  MR_Box * var_use_analysis__wrapper_arg_2);

static void MR_CALL 
var_use_analysis__switch_rec_prob_2_9_p_0(
  MR_Word var_use_analysis__HeadVar__1_1,
  MR_Integer var_use_analysis__CaseNum_2,
  MR_Integer var_use_analysis__TotalCalls_3,
  MR_Word var_use_analysis__RecCalls_4,
  MR_Word var_use_analysis__Info_5,
  MR_Word * var_use_analysis__HeadVar__6_6,
  MR_Word * var_use_analysis__HeadVar__7_7,
  MR_Word var_use_analysis__STATE_VARIABLE_ProbArray_0_8,
  MR_Word * var_use_analysis__STATE_VARIABLE_ProbArray_9);

static MR_Box MR_CALL 
var_use_analysis__switch_rec_prob_7_p_0_1(
  MR_Box var_use_analysis__closure_arg,
  MR_Box var_use_analysis__wrapper_arg_1);

static void MR_CALL 
var_use_analysis__switch_rec_prob_7_p_0(
  MR_Word var_use_analysis__Cases_8,
  MR_Integer var_use_analysis__TotalCalls_9,
  MR_Word var_use_analysis__RecCalls_10,
  MR_Word var_use_analysis__Info_11,
  MR_Float * var_use_analysis__Prob_12,
  MR_Word var_use_analysis__STATE_VARIABLE_ProbArray_0_17,
  MR_Word * var_use_analysis__STATE_VARIABLE_ProbArray_18);

static MR_bool MR_CALL 
var_use_analysis__disj_rec_prob_7_p_0_1(
  MR_Box var_use_analysis__closure_arg,
  MR_Box var_use_analysis__wrapper_arg_1,
  MR_Box * var_use_analysis__wrapper_arg_2);

static void MR_CALL 
var_use_analysis__disj_rec_prob_7_p_0(
  MR_Word var_use_analysis__HeadVar__1_1,
  MR_Integer var_use_analysis__DisjNum_2,
  MR_Word var_use_analysis__RecCalls_3,
  MR_Word var_use_analysis__Info_4,
  MR_Float * var_use_analysis__HeadVar__5_5,
  MR_Word var_use_analysis__STATE_VARIABLE_ProbArray_0_6,
  MR_Word * var_use_analysis__STATE_VARIABLE_ProbArray_7);

static MR_bool MR_CALL 
var_use_analysis__conj_rec_prob_7_p_0_1(
  MR_Box var_use_analysis__closure_arg,
  MR_Box var_use_analysis__wrapper_arg_1,
  MR_Box * var_use_analysis__wrapper_arg_2);

static void MR_CALL 
var_use_analysis__conj_rec_prob_7_p_0(
  MR_Word var_use_analysis__HeadVar__1_1,
  MR_Integer var_use_analysis__ConjNum_2,
  MR_Word var_use_analysis__RecCalls_3,
  MR_Word var_use_analysis__Info_4,
  MR_Float * var_use_analysis__HeadVar__5_5,
  MR_Word var_use_analysis__STATE_VARIABLE_ProbArray_0_6,
  MR_Word * var_use_analysis__STATE_VARIABLE_ProbArray_7);

static MR_bool MR_CALL 
var_use_analysis__goal_rec_prob_6_p_0_2(
  MR_Box var_use_analysis__closure_arg,
  MR_Box var_use_analysis__wrapper_arg_1,
  MR_Box * var_use_analysis__wrapper_arg_2);

static MR_bool MR_CALL 
var_use_analysis__goal_rec_prob_6_p_0_1(
  MR_Box var_use_analysis__closure_arg,
  MR_Box var_use_analysis__wrapper_arg_1,
  MR_Box * var_use_analysis__wrapper_arg_2);

static void MR_CALL 
var_use_analysis__goal_rec_prob_6_p_0(
  MR_Word var_use_analysis__Goal_7,
  MR_Word var_use_analysis__RecCalls_8,
  MR_Word var_use_analysis__Info_9,
  MR_Float * var_use_analysis__Prob_10,
  MR_Word var_use_analysis__STATE_VARIABLE_ProbArray_0_35,
  MR_Word * var_use_analysis__STATE_VARIABLE_ProbArray_36);

static void MR_CALL 
var_use_analysis__rec_ite_var_first_use_8_p_0_3(
  MR_Box var_use_analysis__closure_arg,
  MR_Box var_use_analysis__wrapper_arg_1,
  MR_Box * var_use_analysis__wrapper_arg_2);

static void MR_CALL 
var_use_analysis__rec_ite_var_first_use_8_p_0_2(
  MR_Box var_use_analysis__closure_arg,
  MR_Box var_use_analysis__wrapper_arg_1,
  MR_Box var_use_analysis__wrapper_arg_2,
  MR_Box * var_use_analysis__wrapper_arg_3);

static MR_Box MR_CALL 
var_use_analysis__rec_ite_var_first_use_8_p_0_1(
  MR_Box var_use_analysis__closure_arg,
  MR_Box var_use_analysis__wrapper_arg_1);

static void MR_CALL 
var_use_analysis__rec_ite_var_first_use_8_p_0(
  MR_Word var_use_analysis__Cond_9,
  MR_Word var_use_analysis__Then_10,
  MR_Word var_use_analysis__Else_11,
  MR_Word var_use_analysis__RecCalls_12,
  MR_Word var_use_analysis__Info_13,
  MR_Word * var_use_analysis__FoundFirstUse_14,
  MR_Float var_use_analysis__STATE_VARIABLE_CostSoFar_0_46,
  MR_Float * var_use_analysis__STATE_VARIABLE_CostSoFar_47);

static MR_bool MR_CALL 
var_use_analysis__rec_switch_var_first_use_2_9_p_0_1(
  MR_Box var_use_analysis__closure_arg,
  MR_Box var_use_analysis__wrapper_arg_1,
  MR_Box * var_use_analysis__wrapper_arg_2);

static void MR_CALL 
var_use_analysis__rec_switch_var_first_use_2_9_p_0(
  MR_Word var_use_analysis__HeadVar__1_1,
  MR_Integer var_use_analysis__CaseNum_2,
  MR_Word var_use_analysis__RecCalls_3,
  MR_Word var_use_analysis__Info_4,
  MR_Float var_use_analysis__CostBeforeSwitch_5,
  MR_Word * var_use_analysis__HeadVar__6_6,
  MR_Word * var_use_analysis__HeadVar__7_7,
  MR_Word * var_use_analysis__HeadVar__8_8,
  MR_Word * var_use_analysis__HeadVar__9_9);

static void MR_CALL 
var_use_analysis__rec_switch_var_first_use_7_p_0_3(
  MR_Box var_use_analysis__closure_arg,
  MR_Box var_use_analysis__wrapper_arg_1,
  MR_Box * var_use_analysis__wrapper_arg_2);

static MR_bool MR_CALL 
var_use_analysis__rec_switch_var_first_use_7_p_0_2(
  MR_Box var_use_analysis__closure_arg,
  MR_Box var_use_analysis__wrapper_arg_1);

static void MR_CALL 
var_use_analysis__rec_switch_var_first_use_7_p_0_1(
  MR_Box var_use_analysis__closure_arg,
  MR_Box var_use_analysis__wrapper_arg_1,
  MR_Box var_use_analysis__wrapper_arg_2,
  MR_Box * var_use_analysis__wrapper_arg_3);

static void MR_CALL 
var_use_analysis__rec_switch_var_first_use_7_p_0(
  MR_Word var_use_analysis__Cases_8,
  MR_Integer var_use_analysis__SwitchedOnVar_9,
  MR_Word var_use_analysis__RecCalls_10,
  MR_Word var_use_analysis__Info_11,
  MR_Word * var_use_analysis__FoundFirstUse_12,
  MR_Float var_use_analysis__CostBeforeSwitch_13,
  MR_Float * var_use_analysis__CostAfterSwitch_14);

static MR_bool MR_CALL 
var_use_analysis__rec_disj_var_first_use_2_7_p_0_1(
  MR_Box var_use_analysis__closure_arg,
  MR_Box var_use_analysis__wrapper_arg_1,
  MR_Box * var_use_analysis__wrapper_arg_2);

static void MR_CALL 
var_use_analysis__rec_disj_var_first_use_2_7_p_0(
  MR_Word var_use_analysis__HeadVar__1_1,
  MR_Integer var_use_analysis__DisjNum_2,
  MR_Word var_use_analysis__RecCalls_3,
  MR_Word var_use_analysis__Info_4,
  MR_Word * var_use_analysis__HeadVar__5_5,
  MR_Float var_use_analysis__STATE_VARIABLE_CostSoFar_0_6,
  MR_Float * var_use_analysis__STATE_VARIABLE_CostSoFar_7);

static void MR_CALL 
var_use_analysis__rec_disj_var_first_use_6_p_0(
  MR_Word var_use_analysis__Disjs_7,
  MR_Word var_use_analysis__RecCalls_8,
  MR_Word var_use_analysis__Info_9,
  MR_Word * var_use_analysis__FoundFirstUse_10,
  MR_Float var_use_analysis__STATE_VARIABLE_CostSoFar_0_17,
  MR_Float * var_use_analysis__STATE_VARIABLE_CostSoFar_18);

static MR_bool MR_CALL 
var_use_analysis__rec_conj_var_first_use_7_p_0_1(
  MR_Box var_use_analysis__closure_arg,
  MR_Box var_use_analysis__wrapper_arg_1,
  MR_Box * var_use_analysis__wrapper_arg_2);

static void MR_CALL 
var_use_analysis__rec_conj_var_first_use_7_p_0(
  MR_Word var_use_analysis__HeadVar__1_1,
  MR_Integer var_use_analysis__ConjNum_2,
  MR_Word var_use_analysis__RecCalls_3,
  MR_Word var_use_analysis__StaticInfo_4,
  MR_Word * var_use_analysis__HeadVar__5_5,
  MR_Float var_use_analysis__STATE_VARIABLE_CostSoFar_0_6,
  MR_Float * var_use_analysis__STATE_VARIABLE_CostSoFar_7);

static void MR_CALL 
var_use_analysis__rec_goal_var_first_use_6_p_0(
  MR_Word var_use_analysis__Goal_7,
  MR_Word var_use_analysis__RecCalls_8,
  MR_Word var_use_analysis__Info_9,
  MR_Word * var_use_analysis__FoundFirstUse_10,
  MR_Float var_use_analysis__STATE_VARIABLE_CostSoFar_0_70,
  MR_Float * var_use_analysis__STATE_VARIABLE_CostSoFar_71);

static MR_bool MR_CALL 
var_use_analysis__filter_recursive_call_sites_3_p_0_1(
  MR_Box var_use_analysis__closure_arg,
  MR_Box var_use_analysis__wrapper_arg_1,
  MR_Box * var_use_analysis__wrapper_arg_2);

static void MR_CALL 
var_use_analysis__filter_recursive_call_sites_3_p_0(
  MR_Word var_use_analysis__GoalPathStep_4,
  MR_Word var_use_analysis__STATE_VARIABLE_RecCallSites_0_9,
  MR_Word * var_use_analysis__STATE_VARIABLE_RecCallSites_10);

static void MR_CALL 
var_use_analysis__build_recursive_call_sites_list_2_p_0_1(
  MR_Box var_use_analysis__closure_arg,
  MR_Box var_use_analysis__wrapper_arg_1,
  MR_Box * var_use_analysis__wrapper_arg_2);

static void MR_CALL 
var_use_analysis__build_recursive_call_sites_list_2_p_0(
  MR_Word var_use_analysis__Map_3,
  MR_Word * var_use_analysis__List_4);

static MR_bool MR_CALL 
var_use_analysis__intermodule_var_use_should_follow_csd_2_p_0(
  MR_Word var_use_analysis__VarUseOptions_3,
  MR_Word var_use_analysis__CSDPtr_4);

static void MR_CALL 
var_use_analysis__found_first_use_to_use_info_4_p_0(
  MR_Word var_use_analysis__FoundFirstUse_5,
  MR_Float var_use_analysis__Cost_6,
  MR_Word var_use_analysis__VarUseType_7,
  MR_Word * var_use_analysis__VarUseInfo_8);

static void MR_CALL 
var_use_analysis__ite_var_first_use_8_p_0(
  MR_Word var_use_analysis__RevGoalPath_9,
  MR_Word var_use_analysis__Cond_10,
  MR_Word var_use_analysis__Then_11,
  MR_Word var_use_analysis__Else_12,
  MR_Word var_use_analysis__StaticInfo_13,
  MR_Float var_use_analysis__STATE_VARIABLE_CostSoFar_0_40,
  MR_Float * var_use_analysis__STATE_VARIABLE_CostSoFar_41,
  MR_Word * var_use_analysis__FoundFirstUse_15);

static void MR_CALL 
var_use_analysis__switch_var_first_use_2_8_p_0(
  MR_Word var_use_analysis__RevGoalPath_1,
  MR_Integer var_use_analysis__CaseNum_2,
  MR_Word var_use_analysis__StaticInfo_3,
  MR_Word var_use_analysis__HeadVar__4_4,
  MR_Word * var_use_analysis__HeadVar__5_5,
  MR_Float var_use_analysis__Cost0_6,
  MR_Word * var_use_analysis__HeadVar__7_7,
  MR_Word * var_use_analysis__HeadVar__8_8);

static void MR_CALL 
var_use_analysis__switch_var_first_use_7_p_0_2(
  MR_Box var_use_analysis__closure_arg,
  MR_Box var_use_analysis__wrapper_arg_1,
  MR_Box * var_use_analysis__wrapper_arg_2);

static MR_bool MR_CALL 
var_use_analysis__switch_var_first_use_7_p_0_1(
  MR_Box var_use_analysis__closure_arg,
  MR_Box var_use_analysis__wrapper_arg_1);

static void MR_CALL 
var_use_analysis__switch_var_first_use_7_p_0(
  MR_Word var_use_analysis__RevGoalPath_8,
  MR_Integer var_use_analysis__SwitchedOnVar_9,
  MR_Word var_use_analysis__Cases_10,
  MR_Word var_use_analysis__StaticInfo_11,
  MR_Float var_use_analysis__CostBeforeSwitch_12,
  MR_Float * var_use_analysis__CostAfterSwitch_13,
  MR_Word * var_use_analysis__FoundFirstUse_14);

static void MR_CALL 
var_use_analysis__disj_var_first_use_2_7_p_0(
  MR_Word var_use_analysis__RevGoalPath_1,
  MR_Integer var_use_analysis__DisjNum_2,
  MR_Word var_use_analysis__HeadVar__3_3,
  MR_Word var_use_analysis__StaticInfo_4,
  MR_Float var_use_analysis__STATE_VARIABLE_CostSoFar_0_5,
  MR_Float * var_use_analysis__STATE_VARIABLE_CostSoFar_6,
  MR_Word * var_use_analysis__HeadVar__7_7);

static void MR_CALL 
var_use_analysis__disj_var_first_use_7_p_0(
  MR_Word var_use_analysis__RevGoalPath_8,
  MR_Word var_use_analysis__Disjuncts_9,
  MR_Word var_use_analysis__Detism_10,
  MR_Word var_use_analysis__StaticInfo_11,
  MR_Float var_use_analysis__STATE_VARIABLE_CostSoFar_0_19,
  MR_Float * var_use_analysis__STATE_VARIABLE_CostSoFar_20,
  MR_Word * var_use_analysis__FoundFirstUse_13);

static void MR_CALL 
var_use_analysis__conj_var_first_use_7_p_0(
  MR_Word var_use_analysis__RevGoalPath_1,
  MR_Integer var_use_analysis__ConjNum_2,
  MR_Word var_use_analysis__HeadVar__3_3,
  MR_Word var_use_analysis__StaticInfo_4,
  MR_Float var_use_analysis__HeadVar__5_5,
  MR_Float * var_use_analysis__HeadVar__6_6,
  MR_Word * var_use_analysis__HeadVar__7_7);

static void MR_CALL 
var_use_analysis__goal_var_first_use_6_p_0(
  MR_Word var_use_analysis__RevGoalPath_7,
  MR_Word var_use_analysis__Goal_8,
  MR_Word var_use_analysis__StaticInfo_9,
  MR_Float var_use_analysis__STATE_VARIABLE_CostSoFar_0_67,
  MR_Float * var_use_analysis__STATE_VARIABLE_CostSoFar_68,
  MR_Word * var_use_analysis__FoundFirstUse_11);

static void MR_CALL 
var_use_analysis__ffu_to_float_3_p_0(
  MR_Float var_use_analysis__Default_1,
  MR_Word var_use_analysis__HeadVar__2_2,
  MR_Float * var_use_analysis__HeadVar__3_3);

static void MR_CALL 
var_use_analysis__atomic_trivial_var_first_use_5_p_0(
  MR_Word var_use_analysis__AtomicGoal_6,
  MR_Word var_use_analysis__BoundVars_7,
  MR_Float var_use_analysis__CostSoFar_8,
  MR_Word var_use_analysis__StaticInfo_9,
  MR_Word * var_use_analysis__FoundFirstUse_10);

static void MR_CALL 
var_use_analysis__call_var_first_use_7_p_0(
  MR_Word var_use_analysis__AtomicGoal_8,
  MR_Word var_use_analysis__BoundVars_9,
  MR_Word var_use_analysis__RevGoalPath_10,
  MR_Word var_use_analysis__StaticInfo_11,
  MR_Word * var_use_analysis__FoundFirstUse_12,
  MR_Float var_use_analysis__STATE_VARIABLE_CostSoFar_0_52,
  MR_Float * var_use_analysis__STATE_VARIABLE_CostSoFar_53);

static void MR_CALL 
var_use_analysis__call_args_first_use_5_p_0_1(
  MR_Box var_use_analysis__closure_arg,
  MR_Box var_use_analysis__wrapper_arg_1,
  MR_Box * var_use_analysis__wrapper_arg_2);

static void MR_CALL 
var_use_analysis__call_args_first_use_5_p_0(
  MR_Word var_use_analysis__Args_6,
  MR_Float var_use_analysis__Cost_7,
  MR_Word var_use_analysis__StaticInfo_8,
  MR_Word var_use_analysis__CostAndCallees_9,
  MR_Word * var_use_analysis__Times_10);

static void MR_CALL 
var_use_analysis__prepare_for_proc_var_first_use_7_p_0_2(
  MR_Box var_use_analysis__closure_arg,
  MR_Box var_use_analysis__wrapper_arg_1,
  MR_Box var_use_analysis__wrapper_arg_2,
  MR_Box * var_use_analysis__wrapper_arg_3,
  MR_Box var_use_analysis__wrapper_arg_4,
  MR_Box * var_use_analysis__wrapper_arg_5);

static void MR_CALL 
var_use_analysis__prepare_for_proc_var_first_use_7_p_0_1(
  MR_Box var_use_analysis__closure_arg,
  MR_Box var_use_analysis__wrapper_arg_1,
  MR_Box var_use_analysis__wrapper_arg_2,
  MR_Box * var_use_analysis__wrapper_arg_3);

static void MR_CALL 
var_use_analysis__prepare_for_proc_var_first_use_7_p_0(
  MR_Word var_use_analysis__CliquePtr_8,
  MR_Word var_use_analysis__PDPtr_9,
  MR_Integer var_use_analysis__ArgNum_10,
  MR_Word var_use_analysis__RecursionType_11,
  MR_Word var_use_analysis__Depth_12,
  MR_Word var_use_analysis__VarUseOptions_13,
  MR_Word * var_use_analysis__Info_14);

static MR_bool MR_CALL 
var_use_analysis__average_var_use_1_f_0_2(
  MR_Box var_use_analysis__closure_arg,
  MR_Box var_use_analysis__wrapper_arg_1);

static void MR_CALL 
var_use_analysis__average_var_use_1_f_0_1(
  MR_Box var_use_analysis__closure_arg,
  MR_Box var_use_analysis__wrapper_arg_1,
  MR_Box var_use_analysis__wrapper_arg_2,
  MR_Box * var_use_analysis__wrapper_arg_3,
  MR_Box var_use_analysis__wrapper_arg_4,
  MR_Box * var_use_analysis__wrapper_arg_5);

static MR_bool MR_CALL 
var_use_analysis____Unify____first_use_rec_info_0_0_10001(
  MR_Box var_use_analysis__wrapper_arg_1,
  MR_Box var_use_analysis__wrapper_arg_2);

static void MR_CALL 
var_use_analysis____Compare____first_use_rec_info_0_0_10001(
  MR_Box * var_use_analysis__wrapper_arg_1,
  MR_Box var_use_analysis__wrapper_arg_2,
  MR_Box var_use_analysis__wrapper_arg_3);

static MR_bool MR_CALL 
var_use_analysis____Unify____found_first_use_0_0_10001(
  MR_Box var_use_analysis__wrapper_arg_1,
  MR_Box var_use_analysis__wrapper_arg_2);

static void MR_CALL 
var_use_analysis____Compare____found_first_use_0_0_10001(
  MR_Box * var_use_analysis__wrapper_arg_1,
  MR_Box var_use_analysis__wrapper_arg_2,
  MR_Box var_use_analysis__wrapper_arg_3);

static MR_bool MR_CALL 
var_use_analysis____Unify____intermodule_var_use_0_0_10001(
  MR_Box var_use_analysis__wrapper_arg_1,
  MR_Box var_use_analysis__wrapper_arg_2);

static void MR_CALL 
var_use_analysis____Compare____intermodule_var_use_0_0_10001(
  MR_Box * var_use_analysis__wrapper_arg_1,
  MR_Box var_use_analysis__wrapper_arg_2,
  MR_Box var_use_analysis__wrapper_arg_3);

static MR_bool MR_CALL 
var_use_analysis____Unify____proc_var_first_use_prepared_info_0_0_10001(
  MR_Box var_use_analysis__wrapper_arg_1,
  MR_Box var_use_analysis__wrapper_arg_2);

static void MR_CALL 
var_use_analysis____Compare____proc_var_first_use_prepared_info_0_0_10001(
  MR_Box * var_use_analysis__wrapper_arg_1,
  MR_Box var_use_analysis__wrapper_arg_2,
  MR_Box var_use_analysis__wrapper_arg_3);

static MR_bool MR_CALL 
var_use_analysis____Unify____recursive_calls_list_0_0_10001(
  MR_Box var_use_analysis__wrapper_arg_1,
  MR_Box var_use_analysis__wrapper_arg_2);

static void MR_CALL 
var_use_analysis____Compare____recursive_calls_list_0_0_10001(
  MR_Box * var_use_analysis__wrapper_arg_1,
  MR_Box var_use_analysis__wrapper_arg_2,
  MR_Box var_use_analysis__wrapper_arg_3);

static MR_bool MR_CALL 
var_use_analysis____Unify____recursive_case_0_0_10001(
  MR_Box var_use_analysis__wrapper_arg_1,
  MR_Box var_use_analysis__wrapper_arg_2);

static void MR_CALL 
var_use_analysis____Compare____recursive_case_0_0_10001(
  MR_Box * var_use_analysis__wrapper_arg_1,
  MR_Box var_use_analysis__wrapper_arg_2,
  MR_Box var_use_analysis__wrapper_arg_3);

static MR_bool MR_CALL 
var_use_analysis____Unify____var_first_use_static_info_0_0_10001(
  MR_Box var_use_analysis__wrapper_arg_1,
  MR_Box var_use_analysis__wrapper_arg_2);

static void MR_CALL 
var_use_analysis____Compare____var_first_use_static_info_0_0_10001(
  MR_Box * var_use_analysis__wrapper_arg_1,
  MR_Box var_use_analysis__wrapper_arg_2,
  MR_Box var_use_analysis__wrapper_arg_3);

static MR_bool MR_CALL 
var_use_analysis____Unify____var_use_info_0_0_10001(
  MR_Box var_use_analysis__wrapper_arg_1,
  MR_Box var_use_analysis__wrapper_arg_2);

static void MR_CALL 
var_use_analysis____Compare____var_use_info_0_0_10001(
  MR_Box * var_use_analysis__wrapper_arg_1,
  MR_Box var_use_analysis__wrapper_arg_2,
  MR_Box var_use_analysis__wrapper_arg_3);

static MR_bool MR_CALL 
var_use_analysis____Unify____var_use_options_0_0_10001(
  MR_Box var_use_analysis__wrapper_arg_1,
  MR_Box var_use_analysis__wrapper_arg_2);

static void MR_CALL 
var_use_analysis____Compare____var_use_options_0_0_10001(
  MR_Box * var_use_analysis__wrapper_arg_1,
  MR_Box var_use_analysis__wrapper_arg_2,
  MR_Box var_use_analysis__wrapper_arg_3);

static MR_bool MR_CALL 
var_use_analysis____Unify____var_use_type_0_0_10001(
  MR_Box var_use_analysis__wrapper_arg_1,
  MR_Box var_use_analysis__wrapper_arg_2);

static void MR_CALL 
var_use_analysis____Compare____var_use_type_0_0_10001(
  MR_Box * var_use_analysis__wrapper_arg_1,
  MR_Box var_use_analysis__wrapper_arg_2,
  MR_Box var_use_analysis__wrapper_arg_3);


static /* final */ const MR_Box var_use_analysis_scalar_common_1[6][2];

static /* final */ const MR_Box var_use_analysis_scalar_common_2[12][3];

static /* final */ const MR_Box var_use_analysis_scalar_common_3[2][8];

static /* final */ const MR_Box var_use_analysis_scalar_common_4[5][5];

static /* final */ const MR_Box var_use_analysis_scalar_common_5[3][1];

static /* final */ const MR_Box var_use_analysis_scalar_common_6[2][7];

static /* final */ const MR_Box var_use_analysis_scalar_common_7[1][12];

static /* final */ const MR_Box var_use_analysis_scalar_common_8[5][4];

static /* final */ const MR_Box var_use_analysis_scalar_common_9[2][6];




static /* final */ const MR_Box var_use_analysis_scalar_common_1[6][2] = {
  /* row 0 */
  {
    ((MR_Box) (&analysis_utils__analysis_utils__type_ctor_info_cost_and_callees_1)),
    ((MR_Box) (&analysis_utils__analysis_utils__type_ctor_info_callee_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_attr_array_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_goal_rep_1)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_attr_array_1)),
    ((MR_Box) (&coverage__coverage__type_ctor_info_coverage_info_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&var_use_analysis_scalar_common_2[4]))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0))
  },
};

static /* final */ const MR_Box var_use_analysis_scalar_common_2[12][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_static_ptr_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_array_slot_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0)),
    ((MR_Box) (&var_use_analysis_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0)),
    ((MR_Box) (&coverage__coverage__type_ctor_info_coverage_point_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_cs_cost_csq_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_cs_cost_csq_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&var_use_analysis_scalar_common_3[0])),
    ((MR_Box) (var_use_analysis__average_var_use_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&var_use_analysis_scalar_common_3[1])),
    ((MR_Box) (var_use_analysis__prepare_for_proc_var_first_use_7_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&var_use_analysis_scalar_common_4[2])),
    ((MR_Box) (var_use_analysis__build_recursive_call_sites_list_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&var_use_analysis_scalar_common_4[3])),
    ((MR_Box) (var_use_analysis__rec_ite_var_first_use_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&var_use_analysis_scalar_common_4[4])),
    ((MR_Box) (var_use_analysis__switch_rec_prob_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box var_use_analysis_scalar_common_3[2][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&var_use_analysis__var_use_analysis__type_ctor_info_var_use_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&coverage__coverage__type_ctor_info_coverage_point_0)),
    ((MR_Box) (&var_use_analysis__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_coverage__type_ctor_info_coverage_point_0)),
    ((MR_Box) (&var_use_analysis__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_coverage__type_ctor_info_coverage_point_0)),
    ((MR_Box) (&var_use_analysis__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_coverage__type_ctor_info_coverage_point_0)),
    ((MR_Box) (&var_use_analysis__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_coverage__type_ctor_info_coverage_point_0))
  },
};

static /* final */ const MR_Box var_use_analysis_scalar_common_4[5][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&var_use_analysis__var_use_analysis__type_ctor_info_var_use_type_0)),
    ((MR_Box) (&var_use_analysis__var_use_analysis__type_ctor_info_var_use_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&var_use_analysis__var_use_analysis__type_ctor_info_found_first_use_0)),
    ((MR_Box) (&var_use_analysis__var_use_analysis__type_ctor_info_found_first_use_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&var_use_analysis__pair__pti_pair_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_measurements__type_ctor_info_cs_cost_csq_0)),
    ((MR_Box) (&var_use_analysis__pair__pti_pair_2__plain_mdbcomp__goal_path__type_ctor_info_forward_goal_path_0__plain_builtin__type_ctor_info_float_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0))
  },
};

static /* final */ const MR_Box var_use_analysis_scalar_common_5[3][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "Cannot compute var use on a recursive call site for an unknown recursion depth"))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "Cannot compute var use on a recursive call site for an unknown recursion type"))
  },
};

static /* final */ const MR_Box var_use_analysis_scalar_common_6[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&var_use_analysis__pair__pti_pair_2__plain_profile__type_ctor_info_call_site_static_ptr_0__plain_profile__type_ctor_info_call_site_array_slot_0)),
    ((MR_Box) (&var_use_analysis__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0)),
    ((MR_Box) (&var_use_analysis__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&var_use_analysis__var_use_analysis__type_ctor_info_recursive_case_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0))
  },
};

static /* final */ const MR_Box var_use_analysis_scalar_common_7[1][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
    ((MR_Box) (&profile__profile__type_ctor_info_clique_ptr_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&report__report__type_ctor_info_recursion_type_0)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_recursion_depth_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0)),
    ((MR_Box) (&var_use_analysis__set_ordlist__pti_set_ordlist_1__plain_profile__type_ctor_info_proc_dynamic_ptr_0)),
    ((MR_Box) (&var_use_analysis__var_use_analysis__type_ctor_info_var_use_options_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0))
  },
};

static /* final */ const MR_Box var_use_analysis_scalar_common_8[5][4] = {
  /* row 0 */
  {
    ((MR_Box) (&var_use_analysis_scalar_common_4[1])),
    ((MR_Box) (var_use_analysis__switch_var_first_use_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    ((MR_Box) (&var_use_analysis_scalar_common_4[1])),
    ((MR_Box) (var_use_analysis__rec_switch_var_first_use_7_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 2 */
  {
    ((MR_Box) (&var_use_analysis_scalar_common_9[1])),
    ((MR_Box) (var_use_analysis__goal_rec_prob_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))))
  },
  /* row 3 */
  {
    ((MR_Box) (&var_use_analysis_scalar_common_9[1])),
    ((MR_Box) (var_use_analysis__ite_rec_prob_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 4 */
  {
    ((MR_Box) (&var_use_analysis_scalar_common_9[1])),
    ((MR_Box) (var_use_analysis__ite_rec_prob_8_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))
  },
};

static /* final */ const MR_Box var_use_analysis_scalar_common_9[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0)),
    ((MR_Box) (&var_use_analysis__var_use_analysis__type_ctor_info_found_first_use_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_path_step_0)),
    ((MR_Box) (&var_use_analysis__pair__pti_pair_2__plain_mdbcomp__goal_path__type_ctor_info_forward_goal_path_0__plain_builtin__type_ctor_info_float_0)),
    ((MR_Box) (&var_use_analysis__pair__pti_pair_2__plain_mdbcomp__goal_path__type_ctor_info_forward_goal_path_0__plain_builtin__type_ctor_info_float_0))
  },
};



#include "io.mh"
#include "profile.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct2 var_use_analysis__pair__pti_pair_2__plain_profile__type_ctor_info_call_site_static_ptr_0__plain_profile__type_ctor_info_call_site_array_slot_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_static_ptr_0,
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_array_slot_0
  }
};

static const MR_FA_TypeInfo_Struct1 var_use_analysis__analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0 = {
  &analysis_utils__analysis_utils__type_ctor_info_cost_and_callees_1,
  {
    (MR_TypeInfo) &analysis_utils__analysis_utils__type_ctor_info_callee_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 var_use_analysis__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0,
    (MR_PseudoTypeInfo) &var_use_analysis__analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 var_use_analysis__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_coverage__type_ctor_info_coverage_point_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0,
    (MR_PseudoTypeInfo) &coverage__coverage__type_ctor_info_coverage_point_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 var_use_analysis__set_ordlist__pti_set_ordlist_1__plain_profile__type_ctor_info_proc_dynamic_ptr_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_dynamic_ptr_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 var_use_analysis__pair__pti_pair_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_measurements__type_ctor_info_cs_cost_csq_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0,
    (MR_PseudoTypeInfo) &measurements__measurements__type_ctor_info_cs_cost_csq_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 var_use_analysis__pair__pti_pair_2__plain_mdbcomp__goal_path__type_ctor_info_forward_goal_path_0__plain_builtin__type_ctor_info_float_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
  }
};

static const MR_FA_TypeInfo_Struct1 var_use_analysis__mdbcomp__goal_path__ti_goal_attr_array_1builtin__type_ctor_info_float_0 = {
  &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_attr_array_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
  }
};

static const MR_PseudoTypeInfo var_use_analysis__var_use_analysis__field_types_first_use_rec_info_0_0[2] = {
  (MR_PseudoTypeInfo) &var_use_analysis__mdbcomp__goal_path__ti_goal_attr_array_1builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &var_use_analysis__var_use_analysis__type_ctor_info_recursive_case_0
};

static const MR_ConstString var_use_analysis__var_use_analysis__field_names_first_use_rec_info_0_0[2] = {
  (MR_String) "furi_rec_prob_array",
  (MR_String) "furi_rec_case"
};

static const MR_DuFunctorDesc var_use_analysis__var_use_analysis__du_functor_desc_first_use_rec_info_0_0 = {
  (MR_String) "first_use_rec_info",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  var_use_analysis__var_use_analysis__field_types_first_use_rec_info_0_0,
  var_use_analysis__var_use_analysis__field_names_first_use_rec_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc var_use_analysis__var_use_analysis__du_functor_desc_first_use_rec_info_0_1 = {
  (MR_String) "no_recursion_info",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr var_use_analysis__var_use_analysis__du_stag_ordered_first_use_rec_info_0_0[1] = {
  &var_use_analysis__var_use_analysis__du_functor_desc_first_use_rec_info_0_1
};

static const MR_DuFunctorDescPtr var_use_analysis__var_use_analysis__du_stag_ordered_first_use_rec_info_0_1[1] = {
  &var_use_analysis__var_use_analysis__du_functor_desc_first_use_rec_info_0_0
};

static const MR_DuPtagLayout var_use_analysis__var_use_analysis__du_ptag_ordered_first_use_rec_info_0[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_LOCAL,
    var_use_analysis__var_use_analysis__du_stag_ordered_first_use_rec_info_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    var_use_analysis__var_use_analysis__du_stag_ordered_first_use_rec_info_0_1
  }
};

static const MR_DuFunctorDescPtr var_use_analysis__var_use_analysis__du_name_ordered_first_use_rec_info_0[2] = {
  &var_use_analysis__var_use_analysis__du_functor_desc_first_use_rec_info_0_0,
  &var_use_analysis__var_use_analysis__du_functor_desc_first_use_rec_info_0_1
};

static const MR_Integer var_use_analysis__var_use_analysis__functor_number_map_first_use_rec_info_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct var_use_analysis__var_use_analysis__type_ctor_info_first_use_rec_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (var_use_analysis____Unify____first_use_rec_info_0_0_10001)),
  ((MR_Box) (var_use_analysis____Compare____first_use_rec_info_0_0_10001)),
  (MR_String) "var_use_analysis",
  (MR_String) "first_use_rec_info",
  {     var_use_analysis__var_use_analysis__du_name_ordered_first_use_rec_info_0 },
  {     var_use_analysis__var_use_analysis__du_ptag_ordered_first_use_rec_info_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  var_use_analysis__var_use_analysis__functor_number_map_first_use_rec_info_0
};

static const MR_DuFunctorDesc var_use_analysis__var_use_analysis__du_functor_desc_found_first_use_0_0 = {
  (MR_String) "have_not_found_first_use",
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

static const MR_PseudoTypeInfo var_use_analysis__var_use_analysis__field_types_found_first_use_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
};

static const MR_ConstString var_use_analysis__var_use_analysis__field_names_found_first_use_0_1[1] = {
  (MR_String) "cost_before_use"
};

static const MR_DuFunctorDesc var_use_analysis__var_use_analysis__du_functor_desc_found_first_use_0_1 = {
  (MR_String) "found_first_use",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  var_use_analysis__var_use_analysis__field_types_found_first_use_0_1,
  var_use_analysis__var_use_analysis__field_names_found_first_use_0_1,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr var_use_analysis__var_use_analysis__du_stag_ordered_found_first_use_0_0[1] = {
  &var_use_analysis__var_use_analysis__du_functor_desc_found_first_use_0_0
};

static const MR_DuFunctorDescPtr var_use_analysis__var_use_analysis__du_stag_ordered_found_first_use_0_1[1] = {
  &var_use_analysis__var_use_analysis__du_functor_desc_found_first_use_0_1
};

static const MR_DuPtagLayout var_use_analysis__var_use_analysis__du_ptag_ordered_found_first_use_0[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_LOCAL,
    var_use_analysis__var_use_analysis__du_stag_ordered_found_first_use_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    var_use_analysis__var_use_analysis__du_stag_ordered_found_first_use_0_1
  }
};

static const MR_DuFunctorDescPtr var_use_analysis__var_use_analysis__du_name_ordered_found_first_use_0[2] = {
  &var_use_analysis__var_use_analysis__du_functor_desc_found_first_use_0_1,
  &var_use_analysis__var_use_analysis__du_functor_desc_found_first_use_0_0
};

static const MR_Integer var_use_analysis__var_use_analysis__functor_number_map_found_first_use_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct var_use_analysis__var_use_analysis__type_ctor_info_found_first_use_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (var_use_analysis____Unify____found_first_use_0_0_10001)),
  ((MR_Box) (var_use_analysis____Compare____found_first_use_0_0_10001)),
  (MR_String) "var_use_analysis",
  (MR_String) "found_first_use",
  {     var_use_analysis__var_use_analysis__du_name_ordered_found_first_use_0 },
  {     var_use_analysis__var_use_analysis__du_ptag_ordered_found_first_use_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  var_use_analysis__var_use_analysis__functor_number_map_found_first_use_0
};

static const MR_PseudoTypeInfo var_use_analysis__var_use_analysis__field_types_intermodule_var_use_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc var_use_analysis__var_use_analysis__du_functor_desc_intermodule_var_use_0_0 = {
  (MR_String) "follow_calls_into_module",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  var_use_analysis__var_use_analysis__field_types_intermodule_var_use_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc var_use_analysis__var_use_analysis__du_functor_desc_intermodule_var_use_0_1 = {
  (MR_String) "follow_any_call",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr var_use_analysis__var_use_analysis__du_stag_ordered_intermodule_var_use_0_0[1] = {
  &var_use_analysis__var_use_analysis__du_functor_desc_intermodule_var_use_0_1
};

static const MR_DuFunctorDescPtr var_use_analysis__var_use_analysis__du_stag_ordered_intermodule_var_use_0_1[1] = {
  &var_use_analysis__var_use_analysis__du_functor_desc_intermodule_var_use_0_0
};

static const MR_DuPtagLayout var_use_analysis__var_use_analysis__du_ptag_ordered_intermodule_var_use_0[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_LOCAL,
    var_use_analysis__var_use_analysis__du_stag_ordered_intermodule_var_use_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    var_use_analysis__var_use_analysis__du_stag_ordered_intermodule_var_use_0_1
  }
};

static const MR_DuFunctorDescPtr var_use_analysis__var_use_analysis__du_name_ordered_intermodule_var_use_0[2] = {
  &var_use_analysis__var_use_analysis__du_functor_desc_intermodule_var_use_0_1,
  &var_use_analysis__var_use_analysis__du_functor_desc_intermodule_var_use_0_0
};

static const MR_Integer var_use_analysis__var_use_analysis__functor_number_map_intermodule_var_use_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct var_use_analysis__var_use_analysis__type_ctor_info_intermodule_var_use_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (var_use_analysis____Unify____intermodule_var_use_0_0_10001)),
  ((MR_Box) (var_use_analysis____Compare____intermodule_var_use_0_0_10001)),
  (MR_String) "var_use_analysis",
  (MR_String) "intermodule_var_use",
  {     var_use_analysis__var_use_analysis__du_name_ordered_intermodule_var_use_0 },
  {     var_use_analysis__var_use_analysis__du_ptag_ordered_intermodule_var_use_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  var_use_analysis__var_use_analysis__functor_number_map_intermodule_var_use_0
};

static const MR_PseudoTypeInfo var_use_analysis__var_use_analysis__field_types_proc_var_first_use_prepared_info_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc var_use_analysis__var_use_analysis__du_functor_desc_proc_var_first_use_prepared_info_0_0 = {
  (MR_String) "error",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  var_use_analysis__var_use_analysis__field_types_proc_var_first_use_prepared_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_FA_TypeInfo_Struct1 var_use_analysis__mdbcomp__program_representation__ti_goal_rep_1mdbcomp__goal_path__type_ctor_info_goal_id_0 = {
  &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_goal_rep_1,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0
  }
};

static const MR_FA_TypeInfo_Struct2 var_use_analysis__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0
  }
};

static const MR_FA_TypeInfo_Struct1 var_use_analysis__mdbcomp__goal_path__ti_goal_attr_array_1coverage__type_ctor_info_coverage_info_0 = {
  &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_attr_array_1,
  {
    (MR_TypeInfo) &coverage__coverage__type_ctor_info_coverage_info_0
  }
};

static const MR_FA_TypeInfo_Struct2 var_use_analysis__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0,
    (MR_TypeInfo) &var_use_analysis__analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0
  }
};

static const MR_FA_TypeInfo_Struct2 var_use_analysis__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0measurements__type_ctor_info_cs_cost_csq_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0,
    (MR_TypeInfo) &measurements__measurements__type_ctor_info_cs_cost_csq_0
  }
};

static const MR_PseudoTypeInfo var_use_analysis__var_use_analysis__field_types_proc_var_first_use_prepared_info_0_1[7] = {
  (MR_PseudoTypeInfo) &var_use_analysis__mdbcomp__program_representation__ti_goal_rep_1mdbcomp__goal_path__type_ctor_info_goal_id_0,
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
  (MR_PseudoTypeInfo) &var_use_analysis__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0,
  (MR_PseudoTypeInfo) &var_use_analysis__mdbcomp__goal_path__ti_goal_attr_array_1coverage__type_ctor_info_coverage_info_0,
  (MR_PseudoTypeInfo) &var_use_analysis__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0,
  (MR_PseudoTypeInfo) &var_use_analysis__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0measurements__type_ctor_info_cs_cost_csq_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc var_use_analysis__var_use_analysis__du_functor_desc_proc_var_first_use_prepared_info_0_1 = {
  (MR_String) "proc_var_first_use_prepared_info",
  (MR_Integer) 7,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  var_use_analysis__var_use_analysis__field_types_proc_var_first_use_prepared_info_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr var_use_analysis__var_use_analysis__du_stag_ordered_proc_var_first_use_prepared_info_0_0[1] = {
  &var_use_analysis__var_use_analysis__du_functor_desc_proc_var_first_use_prepared_info_0_0
};

static const MR_DuFunctorDescPtr var_use_analysis__var_use_analysis__du_stag_ordered_proc_var_first_use_prepared_info_0_1[1] = {
  &var_use_analysis__var_use_analysis__du_functor_desc_proc_var_first_use_prepared_info_0_1
};

static const MR_DuPtagLayout var_use_analysis__var_use_analysis__du_ptag_ordered_proc_var_first_use_prepared_info_0[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    var_use_analysis__var_use_analysis__du_stag_ordered_proc_var_first_use_prepared_info_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    var_use_analysis__var_use_analysis__du_stag_ordered_proc_var_first_use_prepared_info_0_1
  }
};

static const MR_DuFunctorDescPtr var_use_analysis__var_use_analysis__du_name_ordered_proc_var_first_use_prepared_info_0[2] = {
  &var_use_analysis__var_use_analysis__du_functor_desc_proc_var_first_use_prepared_info_0_0,
  &var_use_analysis__var_use_analysis__du_functor_desc_proc_var_first_use_prepared_info_0_1
};

static const MR_Integer var_use_analysis__var_use_analysis__functor_number_map_proc_var_first_use_prepared_info_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct var_use_analysis__var_use_analysis__type_ctor_info_proc_var_first_use_prepared_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (var_use_analysis____Unify____proc_var_first_use_prepared_info_0_0_10001)),
  ((MR_Box) (var_use_analysis____Compare____proc_var_first_use_prepared_info_0_0_10001)),
  (MR_String) "var_use_analysis",
  (MR_String) "proc_var_first_use_prepared_info",
  {     var_use_analysis__var_use_analysis__du_name_ordered_proc_var_first_use_prepared_info_0 },
  {     var_use_analysis__var_use_analysis__du_ptag_ordered_proc_var_first_use_prepared_info_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  var_use_analysis__var_use_analysis__functor_number_map_proc_var_first_use_prepared_info_0
};

static const MR_FA_TypeInfo_Struct2 var_use_analysis__pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_forward_goal_path_0builtin__type_ctor_info_float_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
  }
};

static const MR_FA_TypeInfo_Struct1 var_use_analysis__list__ti_list_1pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_forward_goal_path_0builtin__type_ctor_info_float_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &var_use_analysis__pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_forward_goal_path_0builtin__type_ctor_info_float_0
  }
};

const MR_TypeCtorInfo_Struct var_use_analysis__var_use_analysis__type_ctor_info_recursive_calls_list_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (var_use_analysis____Unify____recursive_calls_list_0_0_10001)),
  ((MR_Box) (var_use_analysis____Compare____recursive_calls_list_0_0_10001)),
  (MR_String) "var_use_analysis",
  (MR_String) "recursive_calls_list",
  {     NULL },
  {     (MR_PseudoTypeInfo) &var_use_analysis__list__ti_list_1pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_forward_goal_path_0builtin__type_ctor_info_float_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_EnumFunctorDesc var_use_analysis__var_use_analysis__enum_functor_desc_recursive_case_0_0 = {
  (MR_String) "recursive_case",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc var_use_analysis__var_use_analysis__enum_functor_desc_recursive_case_0_1 = {
  (MR_String) "base_case",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr var_use_analysis__var_use_analysis__enum_value_ordered_recursive_case_0[2] = {
  &var_use_analysis__var_use_analysis__enum_functor_desc_recursive_case_0_0,
  &var_use_analysis__var_use_analysis__enum_functor_desc_recursive_case_0_1
};

static const MR_EnumFunctorDescPtr var_use_analysis__var_use_analysis__enum_name_ordered_recursive_case_0[2] = {
  &var_use_analysis__var_use_analysis__enum_functor_desc_recursive_case_0_1,
  &var_use_analysis__var_use_analysis__enum_functor_desc_recursive_case_0_0
};

static const MR_Integer var_use_analysis__var_use_analysis__functor_number_map_recursive_case_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct var_use_analysis__var_use_analysis__type_ctor_info_recursive_case_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (var_use_analysis____Unify____recursive_case_0_0_10001)),
  ((MR_Box) (var_use_analysis____Compare____recursive_case_0_0_10001)),
  (MR_String) "var_use_analysis",
  (MR_String) "recursive_case",
  {     var_use_analysis__var_use_analysis__enum_name_ordered_recursive_case_0 },
  {     var_use_analysis__var_use_analysis__enum_value_ordered_recursive_case_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  var_use_analysis__var_use_analysis__functor_number_map_recursive_case_0
};

static const MR_FA_TypeInfo_Struct1 var_use_analysis__set_ordlist__ti_set_ordlist_1profile__type_ctor_info_proc_dynamic_ptr_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_proc_dynamic_ptr_0
  }
};

static const MR_PseudoTypeInfo var_use_analysis__var_use_analysis__field_types_var_first_use_static_info_0_0[11] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_clique_ptr_0,
  (MR_PseudoTypeInfo) &var_use_analysis__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0,
  (MR_PseudoTypeInfo) &var_use_analysis__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0measurements__type_ctor_info_cs_cost_csq_0,
  (MR_PseudoTypeInfo) &var_use_analysis__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0,
  (MR_PseudoTypeInfo) &var_use_analysis__mdbcomp__goal_path__ti_goal_attr_array_1coverage__type_ctor_info_coverage_info_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &var_use_analysis__var_use_analysis__type_ctor_info_var_use_options_0,
  (MR_PseudoTypeInfo) &var_use_analysis__set_ordlist__ti_set_ordlist_1profile__type_ctor_info_proc_dynamic_ptr_0,
  (MR_PseudoTypeInfo) &report__report__type_ctor_info_recursion_type_0,
  (MR_PseudoTypeInfo) &measurements__measurements__type_ctor_info_recursion_depth_0,
  (MR_PseudoTypeInfo) &var_use_analysis__var_use_analysis__type_ctor_info_first_use_rec_info_0
};

static const MR_ConstString var_use_analysis__var_use_analysis__field_names_var_first_use_static_info_0_0[11] = {
  (MR_String) "fui_clique",
  (MR_String) "fui_call_site_map",
  (MR_String) "fui_rec_call_site_map",
  (MR_String) "fui_containing_goal_map",
  (MR_String) "fui_coverage_array",
  (MR_String) "fui_var",
  (MR_String) "fui_var_use_opts",
  (MR_String) "fui_call_stack",
  (MR_String) "fui_recursion_type",
  (MR_String) "fui_cur_depth",
  (MR_String) "fui_rec_info"
};

static const MR_DuFunctorDesc var_use_analysis__var_use_analysis__du_functor_desc_var_first_use_static_info_0_0 = {
  (MR_String) "var_first_use_static_info",
  (MR_Integer) 11,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  var_use_analysis__var_use_analysis__field_types_var_first_use_static_info_0_0,
  var_use_analysis__var_use_analysis__field_names_var_first_use_static_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr var_use_analysis__var_use_analysis__du_stag_ordered_var_first_use_static_info_0_0[1] = {
  &var_use_analysis__var_use_analysis__du_functor_desc_var_first_use_static_info_0_0
};

static const MR_DuPtagLayout var_use_analysis__var_use_analysis__du_ptag_ordered_var_first_use_static_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    var_use_analysis__var_use_analysis__du_stag_ordered_var_first_use_static_info_0_0
  }
};

static const MR_DuFunctorDescPtr var_use_analysis__var_use_analysis__du_name_ordered_var_first_use_static_info_0[1] = {
  &var_use_analysis__var_use_analysis__du_functor_desc_var_first_use_static_info_0_0
};

static const MR_Integer var_use_analysis__var_use_analysis__functor_number_map_var_first_use_static_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct var_use_analysis__var_use_analysis__type_ctor_info_var_first_use_static_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (var_use_analysis____Unify____var_first_use_static_info_0_0_10001)),
  ((MR_Box) (var_use_analysis____Compare____var_first_use_static_info_0_0_10001)),
  (MR_String) "var_use_analysis",
  (MR_String) "var_first_use_static_info",
  {     var_use_analysis__var_use_analysis__du_name_ordered_var_first_use_static_info_0 },
  {     var_use_analysis__var_use_analysis__du_ptag_ordered_var_first_use_static_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  var_use_analysis__var_use_analysis__functor_number_map_var_first_use_static_info_0
};

static const MR_PseudoTypeInfo var_use_analysis__var_use_analysis__field_types_var_use_info_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &var_use_analysis__var_use_analysis__type_ctor_info_var_use_type_0
};

static const MR_ConstString var_use_analysis__var_use_analysis__field_names_var_use_info_0_0[3] = {
  (MR_String) "vui_cost_until_use",
  (MR_String) "vui_proc_cost",
  (MR_String) "vui_use_type"
};

static const MR_DuFunctorDesc var_use_analysis__var_use_analysis__du_functor_desc_var_use_info_0_0 = {
  (MR_String) "var_use_info",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  var_use_analysis__var_use_analysis__field_types_var_use_info_0_0,
  var_use_analysis__var_use_analysis__field_names_var_use_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr var_use_analysis__var_use_analysis__du_stag_ordered_var_use_info_0_0[1] = {
  &var_use_analysis__var_use_analysis__du_functor_desc_var_use_info_0_0
};

static const MR_DuPtagLayout var_use_analysis__var_use_analysis__du_ptag_ordered_var_use_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    var_use_analysis__var_use_analysis__du_stag_ordered_var_use_info_0_0
  }
};

static const MR_DuFunctorDescPtr var_use_analysis__var_use_analysis__du_name_ordered_var_use_info_0[1] = {
  &var_use_analysis__var_use_analysis__du_functor_desc_var_use_info_0_0
};

static const MR_Integer var_use_analysis__var_use_analysis__functor_number_map_var_use_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct var_use_analysis__var_use_analysis__type_ctor_info_var_use_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (var_use_analysis____Unify____var_use_info_0_0_10001)),
  ((MR_Box) (var_use_analysis____Compare____var_use_info_0_0_10001)),
  (MR_String) "var_use_analysis",
  (MR_String) "var_use_info",
  {     var_use_analysis__var_use_analysis__du_name_ordered_var_use_info_0 },
  {     var_use_analysis__var_use_analysis__du_ptag_ordered_var_use_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  var_use_analysis__var_use_analysis__functor_number_map_var_use_info_0
};

static const MR_PseudoTypeInfo var_use_analysis__var_use_analysis__field_types_var_use_options_0_0[3] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_deep_0,
  (MR_PseudoTypeInfo) &var_use_analysis__var_use_analysis__type_ctor_info_intermodule_var_use_0,
  (MR_PseudoTypeInfo) &var_use_analysis__var_use_analysis__type_ctor_info_var_use_type_0
};

static const MR_ConstString var_use_analysis__var_use_analysis__field_names_var_use_options_0_0[3] = {
  (MR_String) "vuo_deep",
  (MR_String) "vuo_intermodule_var_use",
  (MR_String) "vuo_var_use_type"
};

static const MR_DuFunctorDesc var_use_analysis__var_use_analysis__du_functor_desc_var_use_options_0_0 = {
  (MR_String) "var_use_options",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  var_use_analysis__var_use_analysis__field_types_var_use_options_0_0,
  var_use_analysis__var_use_analysis__field_names_var_use_options_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr var_use_analysis__var_use_analysis__du_stag_ordered_var_use_options_0_0[1] = {
  &var_use_analysis__var_use_analysis__du_functor_desc_var_use_options_0_0
};

static const MR_DuPtagLayout var_use_analysis__var_use_analysis__du_ptag_ordered_var_use_options_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    var_use_analysis__var_use_analysis__du_stag_ordered_var_use_options_0_0
  }
};

static const MR_DuFunctorDescPtr var_use_analysis__var_use_analysis__du_name_ordered_var_use_options_0[1] = {
  &var_use_analysis__var_use_analysis__du_functor_desc_var_use_options_0_0
};

static const MR_Integer var_use_analysis__var_use_analysis__functor_number_map_var_use_options_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct var_use_analysis__var_use_analysis__type_ctor_info_var_use_options_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (var_use_analysis____Unify____var_use_options_0_0_10001)),
  ((MR_Box) (var_use_analysis____Compare____var_use_options_0_0_10001)),
  (MR_String) "var_use_analysis",
  (MR_String) "var_use_options",
  {     var_use_analysis__var_use_analysis__du_name_ordered_var_use_options_0 },
  {     var_use_analysis__var_use_analysis__du_ptag_ordered_var_use_options_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  var_use_analysis__var_use_analysis__functor_number_map_var_use_options_0
};

static const MR_EnumFunctorDesc var_use_analysis__var_use_analysis__enum_functor_desc_var_use_type_0_0 = {
  (MR_String) "var_use_production",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc var_use_analysis__var_use_analysis__enum_functor_desc_var_use_type_0_1 = {
  (MR_String) "var_use_consumption",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc var_use_analysis__var_use_analysis__enum_functor_desc_var_use_type_0_2 = {
  (MR_String) "var_use_other",
  (MR_Integer) 2
};

static const MR_EnumFunctorDescPtr var_use_analysis__var_use_analysis__enum_value_ordered_var_use_type_0[3] = {
  &var_use_analysis__var_use_analysis__enum_functor_desc_var_use_type_0_0,
  &var_use_analysis__var_use_analysis__enum_functor_desc_var_use_type_0_1,
  &var_use_analysis__var_use_analysis__enum_functor_desc_var_use_type_0_2
};

static const MR_EnumFunctorDescPtr var_use_analysis__var_use_analysis__enum_name_ordered_var_use_type_0[3] = {
  &var_use_analysis__var_use_analysis__enum_functor_desc_var_use_type_0_1,
  &var_use_analysis__var_use_analysis__enum_functor_desc_var_use_type_0_2,
  &var_use_analysis__var_use_analysis__enum_functor_desc_var_use_type_0_0
};

static const MR_Integer var_use_analysis__var_use_analysis__functor_number_map_var_use_type_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct var_use_analysis__var_use_analysis__type_ctor_info_var_use_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (var_use_analysis____Unify____var_use_type_0_0_10001)),
  ((MR_Box) (var_use_analysis____Compare____var_use_type_0_0_10001)),
  (MR_String) "var_use_analysis",
  (MR_String) "var_use_type",
  {     var_use_analysis__var_use_analysis__enum_name_ordered_var_use_type_0 },
  {     var_use_analysis__var_use_analysis__enum_value_ordered_var_use_type_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  var_use_analysis__var_use_analysis__functor_number_map_var_use_type_0
};

static MR_bool MR_CALL 
var_use_analysis__IntroducedFrom__pred__rec_switch_var_first_use__1482__1_2_p_0(
  MR_Word var_use_analysis__HeadVar__1_30,
  MR_Word var_use_analysis__HeadVar__2_70)
{
  {
    MR_bool var_use_analysis__succeeded;
    MR_Integer var_use_analysis__CastX_80 = (MR_Integer) var_use_analysis__HeadVar__1_30;
    MR_Integer var_use_analysis__CastY_81 = (MR_Integer) var_use_analysis__HeadVar__2_70;

    var_use_analysis__succeeded = (var_use_analysis__CastX_80 == var_use_analysis__CastY_81);
    if (var_use_analysis__succeeded)
      var_use_analysis__succeeded = MR_TRUE;
    else
      {
        MR_Integer var_use_analysis__CastX_76 = (MR_Integer) var_use_analysis__HeadVar__1_30;
        MR_Integer var_use_analysis__CastY_77 = (MR_Integer) var_use_analysis__HeadVar__2_70;

        var_use_analysis__succeeded = (var_use_analysis__CastY_77 == var_use_analysis__CastX_76);
      }
    return var_use_analysis__succeeded;
  }
}

static MR_bool MR_CALL 
var_use_analysis__IntroducedFrom__pred__filter_recursive_call_sites__1257__1_3_p_0(
  MR_Word var_use_analysis__GoalPathStep_4,
  MR_Word var_use_analysis__LambdaHeadVar__1_13,
  MR_Word * var_use_analysis__LambdaHeadVar__2_14)
{
  {
    MR_bool var_use_analysis__succeeded;
    MR_Word var_use_analysis__GP0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__LambdaHeadVar__1_13, (MR_Integer) 0)));
    MR_Float var_use_analysis__Coverage_16 = MR_unbox_float((MR_hl_field(MR_mktag(0), var_use_analysis__LambdaHeadVar__1_13, (MR_Integer) 1)));
    MR_Word var_use_analysis__GP_17;
    MR_Word var_use_analysis__Var_19;

    var_use_analysis__succeeded = ((MR_tag((MR_Word) var_use_analysis__GP0_15)) == (MR_mktag((MR_Integer) 1)));
    if (var_use_analysis__succeeded)
      {
        var_use_analysis__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__GP0_15, (MR_Integer) 0)));
        var_use_analysis__GP_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__GP0_15, (MR_Integer) 1)));
        {
          var_use_analysis__succeeded = mdbcomp__goal_path____Unify____goal_path_step_0_0(var_use_analysis__GoalPathStep_4, var_use_analysis__Var_19);
        }
        if (var_use_analysis__succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              *var_use_analysis__LambdaHeadVar__2_14 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (var_use_analysis__GP_17));
              MR_hl_field(MR_mktag(0), base, 1) = MR_box_float(var_use_analysis__Coverage_16);
            }
            var_use_analysis__succeeded = MR_TRUE;
          }
      }
    return var_use_analysis__succeeded;
  }
}

static void MR_CALL 
var_use_analysis__IntroducedFrom__pred__build_recursive_call_sites_list__1247__1_2_p_0(
  MR_Word var_use_analysis__LambdaHeadVar__1_11,
  MR_Word * var_use_analysis__LambdaHeadVar__2_12)
{
  {
    MR_bool var_use_analysis__succeeded;
    MR_Word var_use_analysis__RevGoalPath_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__LambdaHeadVar__1_11, (MR_Integer) 0)));
    MR_Word var_use_analysis__Cost_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__LambdaHeadVar__1_11, (MR_Integer) 1)));
    MR_Word var_use_analysis__GoalPath_15;
    MR_Float var_use_analysis__Calls_16;

    {
      var_use_analysis__Calls_16 = measurements__cs_cost_get_calls_1_f_0(var_use_analysis__Cost_14);
    }
    {
      mdbcomp__goal_path__rgp_to_fgp_2_p_0(var_use_analysis__RevGoalPath_13, &var_use_analysis__GoalPath_15);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *var_use_analysis__LambdaHeadVar__2_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (var_use_analysis__GoalPath_15));
      MR_hl_field(MR_mktag(0), base, 1) = MR_box_float(var_use_analysis__Calls_16);
    }
  }
}

static MR_bool MR_CALL 
var_use_analysis__IntroducedFrom__pred__switch_var_first_use__1119__1_2_p_0(
  MR_Word var_use_analysis__HeadVar__1_25,
  MR_Word var_use_analysis__HeadVar__2_50)
{
  {
    MR_bool var_use_analysis__succeeded;
    MR_Integer var_use_analysis__CastX_61 = (MR_Integer) var_use_analysis__HeadVar__1_25;
    MR_Integer var_use_analysis__CastY_62 = (MR_Integer) var_use_analysis__HeadVar__2_50;

    var_use_analysis__succeeded = (var_use_analysis__CastX_61 == var_use_analysis__CastY_62);
    if (var_use_analysis__succeeded)
      var_use_analysis__succeeded = MR_TRUE;
    else
      {
        MR_Integer var_use_analysis__CastX_57 = (MR_Integer) var_use_analysis__HeadVar__1_25;
        MR_Integer var_use_analysis__CastY_58 = (MR_Integer) var_use_analysis__HeadVar__2_50;

        var_use_analysis__succeeded = (var_use_analysis__CastY_58 == var_use_analysis__CastX_57);
      }
    return var_use_analysis__succeeded;
  }
}

static MR_bool MR_CALL 
var_use_analysis__IntroducedFrom__pred__average_var_use__169__1_2_p_0(
  MR_Word var_use_analysis__Type_6,
  MR_Word var_use_analysis__LambdaHeadVar__1_22)
{
  {
    MR_bool var_use_analysis__succeeded;
    MR_Word var_use_analysis__TypeI_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__LambdaHeadVar__1_22, (MR_Integer) 2)));
    MR_Float var_use_analysis__Var_29 = MR_unbox_float((MR_hl_field(MR_mktag(0), var_use_analysis__LambdaHeadVar__1_22, (MR_Integer) 0)));
    MR_Float var_use_analysis__Var_30 = MR_unbox_float((MR_hl_field(MR_mktag(0), var_use_analysis__LambdaHeadVar__1_22, (MR_Integer) 1)));

    var_use_analysis__succeeded = (var_use_analysis__Type_6 == var_use_analysis__TypeI_33);
    return var_use_analysis__succeeded;
  }
}

void MR_CALL 
var_use_analysis____Compare____var_use_type_0_0(
  MR_Word * var_use_analysis__HeadVar__1_1,
  MR_Word var_use_analysis__HeadVar__2_2,
  MR_Word var_use_analysis__HeadVar__3_3)
{
  {
    MR_bool var_use_analysis__succeeded;
    MR_Integer var_use_analysis__Cast_HeadVar1_4 = (MR_Integer) var_use_analysis__HeadVar__2_2;
    MR_Integer var_use_analysis__Cast_HeadVar2_5 = (MR_Integer) var_use_analysis__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(var_use_analysis__HeadVar__1_1, var_use_analysis__Cast_HeadVar1_4, var_use_analysis__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
var_use_analysis____Unify____var_use_type_0_0(
  MR_Word var_use_analysis__HeadVar__2_1,
  MR_Word var_use_analysis__HeadVar__2_2)
{
  {
    MR_bool var_use_analysis__succeeded = (var_use_analysis__HeadVar__2_1 == var_use_analysis__HeadVar__2_2);

    return var_use_analysis__succeeded;
  }
}

void MR_CALL 
var_use_analysis____Compare____var_use_info_0_0(
  MR_Word * var_use_analysis__HeadVar__1_1,
  MR_Word var_use_analysis__HeadVar__2_2,
  MR_Word var_use_analysis__HeadVar__3_3)
{
  {
    MR_bool var_use_analysis__succeeded;
    MR_Integer var_use_analysis__CastX_12 = (MR_Integer) var_use_analysis__HeadVar__2_2;
    MR_Integer var_use_analysis__CastY_13 = (MR_Integer) var_use_analysis__HeadVar__3_3;

    var_use_analysis__succeeded = (var_use_analysis__CastX_12 == var_use_analysis__CastY_13);
    if (var_use_analysis__succeeded)
      *var_use_analysis__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Float var_use_analysis__ArgX1_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__2_2, (MR_Integer) 0)));
        MR_Float var_use_analysis__ArgY1_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__3_3, (MR_Integer) 0)));
        MR_Float var_use_analysis__ArgX2_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__2_2, (MR_Integer) 1)));
        MR_Float var_use_analysis__ArgY2_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word var_use_analysis__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word var_use_analysis__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word var_use_analysis__Var_10;

        {
          mercury__private_builtin__builtin_compare_float_3_p_0(&var_use_analysis__Var_10, var_use_analysis__ArgX1_4, var_use_analysis__ArgY1_5);
        }
        var_use_analysis__succeeded = (var_use_analysis__Var_10 == (MR_Integer) 0);
        var_use_analysis__succeeded = !(var_use_analysis__succeeded);
        if (var_use_analysis__succeeded)
          *var_use_analysis__HeadVar__1_1 = var_use_analysis__Var_10;
        else
          {
            MR_Word var_use_analysis__Var_11;

            {
              mercury__private_builtin__builtin_compare_float_3_p_0(&var_use_analysis__Var_11, var_use_analysis__ArgX2_6, var_use_analysis__ArgY2_7);
            }
            var_use_analysis__succeeded = (var_use_analysis__Var_11 == (MR_Integer) 0);
            var_use_analysis__succeeded = !(var_use_analysis__succeeded);
            if (var_use_analysis__succeeded)
              *var_use_analysis__HeadVar__1_1 = var_use_analysis__Var_11;
            else
              {
                MR_Integer var_use_analysis__Var_17 = (MR_Integer) var_use_analysis__ArgX3_8;
                MR_Integer var_use_analysis__Var_18 = (MR_Integer) var_use_analysis__ArgY3_9;

                {
                  mercury__private_builtin__builtin_compare_int_3_p_0(var_use_analysis__HeadVar__1_1, var_use_analysis__Var_17, var_use_analysis__Var_18);
                }
              }
          }
      }
  }
}

MR_bool MR_CALL 
var_use_analysis____Unify____var_use_info_0_0(
  MR_Word var_use_analysis__HeadVar__1_1,
  MR_Word var_use_analysis__HeadVar__2_2)
{
  {
    MR_bool var_use_analysis__succeeded;
    MR_Integer var_use_analysis__CastX_9 = (MR_Integer) var_use_analysis__HeadVar__1_1;
    MR_Integer var_use_analysis__CastY_10 = (MR_Integer) var_use_analysis__HeadVar__2_2;

    var_use_analysis__succeeded = (var_use_analysis__CastX_9 == var_use_analysis__CastY_10);
    if (var_use_analysis__succeeded)
      var_use_analysis__succeeded = MR_TRUE;
    else
      {
        MR_Float var_use_analysis__ArgX1_3 = MR_unbox_float((MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__1_1, (MR_Integer) 0)));
        MR_Float var_use_analysis__ArgY1_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__2_2, (MR_Integer) 0)));
        MR_Float var_use_analysis__ArgX2_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__1_1, (MR_Integer) 1)));
        MR_Float var_use_analysis__ArgY2_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word var_use_analysis__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word var_use_analysis__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__2_2, (MR_Integer) 2)));

        var_use_analysis__succeeded = (var_use_analysis__ArgX1_3 == var_use_analysis__ArgY1_4);
        if (var_use_analysis__succeeded)
          {
            var_use_analysis__succeeded = (var_use_analysis__ArgX2_5 == var_use_analysis__ArgY2_6);
            if (var_use_analysis__succeeded)
              var_use_analysis__succeeded = (var_use_analysis__ArgX3_7 == var_use_analysis__ArgY3_8);
          }
      }
    return var_use_analysis__succeeded;
  }
}

static void MR_CALL 
var_use_analysis____Compare____var_first_use_static_info_0_0(
  MR_Word * var_use_analysis__HeadVar__1_1,
  MR_Word var_use_analysis__HeadVar__2_2,
  MR_Word var_use_analysis__HeadVar__3_3)
{
  {
    MR_bool var_use_analysis__succeeded;
    MR_Integer var_use_analysis__CastX_36 = (MR_Integer) var_use_analysis__HeadVar__2_2;
    MR_Integer var_use_analysis__CastY_37 = (MR_Integer) var_use_analysis__HeadVar__3_3;

    var_use_analysis__succeeded = (var_use_analysis__CastX_36 == var_use_analysis__CastY_37);
    if (var_use_analysis__succeeded)
      *var_use_analysis__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word var_use_analysis__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word var_use_analysis__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word var_use_analysis__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word var_use_analysis__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word var_use_analysis__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word var_use_analysis__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word var_use_analysis__ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word var_use_analysis__ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word var_use_analysis__ArgX5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word var_use_analysis__ArgY5_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__3_3, (MR_Integer) 4)));
        MR_Integer var_use_analysis__ArgX6_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__2_2, (MR_Integer) 5)));
        MR_Integer var_use_analysis__ArgY6_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__3_3, (MR_Integer) 5)));
        MR_Word var_use_analysis__ArgX7_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__2_2, (MR_Integer) 6)));
        MR_Word var_use_analysis__ArgY7_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__3_3, (MR_Integer) 6)));
        MR_Word var_use_analysis__ArgX8_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__2_2, (MR_Integer) 7)));
        MR_Word var_use_analysis__ArgY8_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__3_3, (MR_Integer) 7)));
        MR_Word var_use_analysis__ArgX9_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__2_2, (MR_Integer) 8)));
        MR_Word var_use_analysis__ArgY9_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__3_3, (MR_Integer) 8)));
        MR_Word var_use_analysis__ArgX10_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__2_2, (MR_Integer) 9)));
        MR_Word var_use_analysis__ArgY10_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__3_3, (MR_Integer) 9)));
        MR_Word var_use_analysis__ArgX11_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__2_2, (MR_Integer) 10)));
        MR_Word var_use_analysis__ArgY11_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__3_3, (MR_Integer) 10)));
        MR_Word var_use_analysis__Var_26;
        MR_Integer var_use_analysis__Var_49 = (MR_Integer) var_use_analysis__ArgX1_4;
        MR_Integer var_use_analysis__Var_50 = (MR_Integer) var_use_analysis__ArgY1_5;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(&var_use_analysis__Var_26, var_use_analysis__Var_49, var_use_analysis__Var_50);
        }
        var_use_analysis__succeeded = (var_use_analysis__Var_26 == (MR_Integer) 0);
        var_use_analysis__succeeded = !(var_use_analysis__succeeded);
        if (var_use_analysis__succeeded)
          *var_use_analysis__HeadVar__1_1 = var_use_analysis__Var_26;
        else
          {
            MR_Word var_use_analysis__Var_27;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &var_use_analysis_scalar_common_2[1], &var_use_analysis__Var_27, ((MR_Box) (var_use_analysis__ArgX2_6)), ((MR_Box) (var_use_analysis__ArgY2_7)));
            }
            var_use_analysis__succeeded = (var_use_analysis__Var_27 == (MR_Integer) 0);
            var_use_analysis__succeeded = !(var_use_analysis__succeeded);
            if (var_use_analysis__succeeded)
              *var_use_analysis__HeadVar__1_1 = var_use_analysis__Var_27;
            else
              {
                MR_Word var_use_analysis__Var_28;

                {
                  mercury__builtin__compare_3_p_0((MR_Word) &var_use_analysis_scalar_common_2[6], &var_use_analysis__Var_28, ((MR_Box) (var_use_analysis__ArgX3_8)), ((MR_Box) (var_use_analysis__ArgY3_9)));
                }
                var_use_analysis__succeeded = (var_use_analysis__Var_28 == (MR_Integer) 0);
                var_use_analysis__succeeded = !(var_use_analysis__succeeded);
                if (var_use_analysis__succeeded)
                  *var_use_analysis__HeadVar__1_1 = var_use_analysis__Var_28;
                else
                  {
                    MR_Word var_use_analysis__Var_29;

                    {
                      mercury__builtin__compare_3_p_0((MR_Word) &var_use_analysis_scalar_common_2[5], &var_use_analysis__Var_29, ((MR_Box) (var_use_analysis__ArgX4_10)), ((MR_Box) (var_use_analysis__ArgY4_11)));
                    }
                    var_use_analysis__succeeded = (var_use_analysis__Var_29 == (MR_Integer) 0);
                    var_use_analysis__succeeded = !(var_use_analysis__succeeded);
                    if (var_use_analysis__succeeded)
                      *var_use_analysis__HeadVar__1_1 = var_use_analysis__Var_29;
                    else
                      {
                        MR_Word var_use_analysis__Var_30;

                        {
                          mercury__builtin__compare_3_p_0((MR_Word) &var_use_analysis_scalar_common_1[3], &var_use_analysis__Var_30, ((MR_Box) (var_use_analysis__ArgX5_12)), ((MR_Box) (var_use_analysis__ArgY5_13)));
                        }
                        var_use_analysis__succeeded = (var_use_analysis__Var_30 == (MR_Integer) 0);
                        var_use_analysis__succeeded = !(var_use_analysis__succeeded);
                        if (var_use_analysis__succeeded)
                          *var_use_analysis__HeadVar__1_1 = var_use_analysis__Var_30;
                        else
                          {
                            MR_Word var_use_analysis__Var_31;

                            {
                              mercury__private_builtin__builtin_compare_int_3_p_0(&var_use_analysis__Var_31, var_use_analysis__ArgX6_14, var_use_analysis__ArgY6_15);
                            }
                            var_use_analysis__succeeded = (var_use_analysis__Var_31 == (MR_Integer) 0);
                            var_use_analysis__succeeded = !(var_use_analysis__succeeded);
                            if (var_use_analysis__succeeded)
                              *var_use_analysis__HeadVar__1_1 = var_use_analysis__Var_31;
                            else
                              {
                                MR_Word var_use_analysis__Var_32;

                                {
                                  var_use_analysis____Compare____var_use_options_0_0(&var_use_analysis__Var_32, var_use_analysis__ArgX7_16, var_use_analysis__ArgY7_17);
                                }
                                var_use_analysis__succeeded = (var_use_analysis__Var_32 == (MR_Integer) 0);
                                var_use_analysis__succeeded = !(var_use_analysis__succeeded);
                                if (var_use_analysis__succeeded)
                                  *var_use_analysis__HeadVar__1_1 = var_use_analysis__Var_32;
                                else
                                  {
                                    MR_Word var_use_analysis__Var_33;

                                    {
                                      mercury__builtin__compare_3_p_0((MR_Word) &var_use_analysis_scalar_common_1[5], &var_use_analysis__Var_33, ((MR_Box) (var_use_analysis__ArgX8_18)), ((MR_Box) (var_use_analysis__ArgY8_19)));
                                    }
                                    var_use_analysis__succeeded = (var_use_analysis__Var_33 == (MR_Integer) 0);
                                    var_use_analysis__succeeded = !(var_use_analysis__succeeded);
                                    if (var_use_analysis__succeeded)
                                      *var_use_analysis__HeadVar__1_1 = var_use_analysis__Var_33;
                                    else
                                      {
                                        MR_Word var_use_analysis__Var_34;

                                        {
                                          report____Compare____recursion_type_0_0(&var_use_analysis__Var_34, var_use_analysis__ArgX9_20, var_use_analysis__ArgY9_21);
                                        }
                                        var_use_analysis__succeeded = (var_use_analysis__Var_34 == (MR_Integer) 0);
                                        var_use_analysis__succeeded = !(var_use_analysis__succeeded);
                                        if (var_use_analysis__succeeded)
                                          *var_use_analysis__HeadVar__1_1 = var_use_analysis__Var_34;
                                        else
                                          {
                                            MR_Word var_use_analysis__Var_35;

                                            {
                                              measurements____Compare____recursion_depth_0_0(&var_use_analysis__Var_35, var_use_analysis__ArgX10_22, var_use_analysis__ArgY10_23);
                                            }
                                            var_use_analysis__succeeded = (var_use_analysis__Var_35 == (MR_Integer) 0);
                                            var_use_analysis__succeeded = !(var_use_analysis__succeeded);
                                            if (var_use_analysis__succeeded)
                                              *var_use_analysis__HeadVar__1_1 = var_use_analysis__Var_35;
                                            else
                                              {
                                                var_use_analysis____Compare____first_use_rec_info_0_0(var_use_analysis__HeadVar__1_1, var_use_analysis__ArgX11_24, var_use_analysis__ArgY11_25);
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

void MR_CALL 
var_use_analysis____Compare____var_use_options_0_0(
  MR_Word * var_use_analysis__HeadVar__1_1,
  MR_Word var_use_analysis__HeadVar__2_2,
  MR_Word var_use_analysis__HeadVar__3_3)
{
  {
    MR_bool var_use_analysis__succeeded;
    MR_Integer var_use_analysis__CastX_12 = (MR_Integer) var_use_analysis__HeadVar__2_2;
    MR_Integer var_use_analysis__CastY_13 = (MR_Integer) var_use_analysis__HeadVar__3_3;

    var_use_analysis__succeeded = (var_use_analysis__CastX_12 == var_use_analysis__CastY_13);
    if (var_use_analysis__succeeded)
      *var_use_analysis__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word var_use_analysis__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word var_use_analysis__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word var_use_analysis__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word var_use_analysis__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word var_use_analysis__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word var_use_analysis__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word var_use_analysis__Var_10;

        {
          profile____Compare____deep_0_0(&var_use_analysis__Var_10, var_use_analysis__ArgX1_4, var_use_analysis__ArgY1_5);
        }
        var_use_analysis__succeeded = (var_use_analysis__Var_10 == (MR_Integer) 0);
        var_use_analysis__succeeded = !(var_use_analysis__succeeded);
        if (var_use_analysis__succeeded)
          *var_use_analysis__HeadVar__1_1 = var_use_analysis__Var_10;
        else
          {
            MR_Word var_use_analysis__Var_11;

            {
              var_use_analysis____Compare____intermodule_var_use_0_0(&var_use_analysis__Var_11, var_use_analysis__ArgX2_6, var_use_analysis__ArgY2_7);
            }
            var_use_analysis__succeeded = (var_use_analysis__Var_11 == (MR_Integer) 0);
            var_use_analysis__succeeded = !(var_use_analysis__succeeded);
            if (var_use_analysis__succeeded)
              *var_use_analysis__HeadVar__1_1 = var_use_analysis__Var_11;
            else
              {
                MR_Integer var_use_analysis__Var_17 = (MR_Integer) var_use_analysis__ArgX3_8;
                MR_Integer var_use_analysis__Var_18 = (MR_Integer) var_use_analysis__ArgY3_9;

                {
                  mercury__private_builtin__builtin_compare_int_3_p_0(var_use_analysis__HeadVar__1_1, var_use_analysis__Var_17, var_use_analysis__Var_18);
                }
              }
          }
      }
  }
}

static MR_bool MR_CALL 
var_use_analysis____Unify____var_first_use_static_info_0_0(
  MR_Word var_use_analysis__HeadVar__1_1,
  MR_Word var_use_analysis__HeadVar__2_2)
{
  {
    MR_bool var_use_analysis__succeeded;
    MR_Integer var_use_analysis__CastX_25 = (MR_Integer) var_use_analysis__HeadVar__1_1;
    MR_Integer var_use_analysis__CastY_26 = (MR_Integer) var_use_analysis__HeadVar__2_2;

    var_use_analysis__succeeded = (var_use_analysis__CastX_25 == var_use_analysis__CastY_26);
    if (var_use_analysis__succeeded)
      var_use_analysis__succeeded = MR_TRUE;
    else
      {
        MR_Word var_use_analysis__TypeInfo_28_28;
        MR_Word var_use_analysis__TypeInfo_29_29;
        MR_Word var_use_analysis__TypeInfo_30_30;
        MR_Word var_use_analysis__TypeInfo_31_31;
        MR_Word var_use_analysis__TypeInfo_32_32;
        MR_Word var_use_analysis__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word var_use_analysis__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word var_use_analysis__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word var_use_analysis__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word var_use_analysis__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word var_use_analysis__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word var_use_analysis__ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word var_use_analysis__ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word var_use_analysis__ArgX5_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__1_1, (MR_Integer) 4)));
        MR_Word var_use_analysis__ArgY5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__2_2, (MR_Integer) 4)));
        MR_Integer var_use_analysis__ArgX6_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__1_1, (MR_Integer) 5)));
        MR_Integer var_use_analysis__ArgY6_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word var_use_analysis__ArgX7_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__1_1, (MR_Integer) 6)));
        MR_Word var_use_analysis__ArgY7_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__2_2, (MR_Integer) 6)));
        MR_Word var_use_analysis__ArgX8_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__1_1, (MR_Integer) 7)));
        MR_Word var_use_analysis__ArgY8_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__2_2, (MR_Integer) 7)));
        MR_Word var_use_analysis__ArgX9_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__1_1, (MR_Integer) 8)));
        MR_Word var_use_analysis__ArgY9_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__2_2, (MR_Integer) 8)));
        MR_Word var_use_analysis__ArgX10_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__1_1, (MR_Integer) 9)));
        MR_Word var_use_analysis__ArgY10_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__2_2, (MR_Integer) 9)));
        MR_Word var_use_analysis__ArgX11_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__1_1, (MR_Integer) 10)));
        MR_Word var_use_analysis__ArgY11_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__2_2, (MR_Integer) 10)));
        MR_Integer var_use_analysis__Var_35 = (MR_Integer) var_use_analysis__ArgX1_3;
        MR_Integer var_use_analysis__Var_36 = (MR_Integer) var_use_analysis__ArgY1_4;

        var_use_analysis__succeeded = (var_use_analysis__Var_35 == var_use_analysis__Var_36);
        if (var_use_analysis__succeeded)
          {
            var_use_analysis__TypeInfo_28_28 = (MR_Word) &var_use_analysis_scalar_common_2[1];
            {
              var_use_analysis__succeeded = mercury__builtin__unify_2_p_0(var_use_analysis__TypeInfo_28_28, ((MR_Box) (var_use_analysis__ArgX2_5)), ((MR_Box) (var_use_analysis__ArgY2_6)));
            }
            if (var_use_analysis__succeeded)
              {
                var_use_analysis__TypeInfo_29_29 = (MR_Word) &var_use_analysis_scalar_common_2[6];
                {
                  var_use_analysis__succeeded = mercury__builtin__unify_2_p_0(var_use_analysis__TypeInfo_29_29, ((MR_Box) (var_use_analysis__ArgX3_7)), ((MR_Box) (var_use_analysis__ArgY3_8)));
                }
                if (var_use_analysis__succeeded)
                  {
                    var_use_analysis__TypeInfo_30_30 = (MR_Word) &var_use_analysis_scalar_common_2[5];
                    {
                      var_use_analysis__succeeded = mercury__builtin__unify_2_p_0(var_use_analysis__TypeInfo_30_30, ((MR_Box) (var_use_analysis__ArgX4_9)), ((MR_Box) (var_use_analysis__ArgY4_10)));
                    }
                    if (var_use_analysis__succeeded)
                      {
                        var_use_analysis__TypeInfo_31_31 = (MR_Word) &var_use_analysis_scalar_common_1[3];
                        {
                          var_use_analysis__succeeded = mercury__builtin__unify_2_p_0(var_use_analysis__TypeInfo_31_31, ((MR_Box) (var_use_analysis__ArgX5_11)), ((MR_Box) (var_use_analysis__ArgY5_12)));
                        }
                        if (var_use_analysis__succeeded)
                          {
                            var_use_analysis__succeeded = (var_use_analysis__ArgX6_13 == var_use_analysis__ArgY6_14);
                            if (var_use_analysis__succeeded)
                              {
                                {
                                  var_use_analysis__succeeded = var_use_analysis____Unify____var_use_options_0_0(var_use_analysis__ArgX7_15, var_use_analysis__ArgY7_16);
                                }
                                if (var_use_analysis__succeeded)
                                  {
                                    var_use_analysis__TypeInfo_32_32 = (MR_Word) &var_use_analysis_scalar_common_1[5];
                                    {
                                      var_use_analysis__succeeded = mercury__builtin__unify_2_p_0(var_use_analysis__TypeInfo_32_32, ((MR_Box) (var_use_analysis__ArgX8_17)), ((MR_Box) (var_use_analysis__ArgY8_18)));
                                    }
                                    if (var_use_analysis__succeeded)
                                      {
                                        {
                                          var_use_analysis__succeeded = report____Unify____recursion_type_0_0(var_use_analysis__ArgX9_19, var_use_analysis__ArgY9_20);
                                        }
                                        if (var_use_analysis__succeeded)
                                          {
                                            {
                                              var_use_analysis__succeeded = measurements____Unify____recursion_depth_0_0(var_use_analysis__ArgX10_21, var_use_analysis__ArgY10_22);
                                            }
                                            if (var_use_analysis__succeeded)
                                              {
                                                var_use_analysis__succeeded = var_use_analysis____Unify____first_use_rec_info_0_0(var_use_analysis__ArgX11_23, var_use_analysis__ArgY11_24);
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
    return var_use_analysis__succeeded;
  }
}

MR_bool MR_CALL 
var_use_analysis____Unify____var_use_options_0_0(
  MR_Word var_use_analysis__HeadVar__1_1,
  MR_Word var_use_analysis__HeadVar__2_2)
{
  {
    MR_bool var_use_analysis__succeeded;
    MR_Integer var_use_analysis__CastX_9 = (MR_Integer) var_use_analysis__HeadVar__1_1;
    MR_Integer var_use_analysis__CastY_10 = (MR_Integer) var_use_analysis__HeadVar__2_2;

    var_use_analysis__succeeded = (var_use_analysis__CastX_9 == var_use_analysis__CastY_10);
    if (var_use_analysis__succeeded)
      var_use_analysis__succeeded = MR_TRUE;
    else
      {
        MR_Word var_use_analysis__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word var_use_analysis__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word var_use_analysis__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word var_use_analysis__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word var_use_analysis__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word var_use_analysis__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__2_2, (MR_Integer) 2)));

        {
          var_use_analysis__succeeded = profile____Unify____deep_0_0(var_use_analysis__ArgX1_3, var_use_analysis__ArgY1_4);
        }
        if (var_use_analysis__succeeded)
          {
            {
              var_use_analysis__succeeded = var_use_analysis____Unify____intermodule_var_use_0_0(var_use_analysis__ArgX2_5, var_use_analysis__ArgY2_6);
            }
            if (var_use_analysis__succeeded)
              var_use_analysis__succeeded = (var_use_analysis__ArgX3_7 == var_use_analysis__ArgY3_8);
          }
      }
    return var_use_analysis__succeeded;
  }
}

static void MR_CALL 
var_use_analysis____Compare____recursive_case_0_0(
  MR_Word * var_use_analysis__HeadVar__1_1,
  MR_Word var_use_analysis__HeadVar__2_2,
  MR_Word var_use_analysis__HeadVar__3_3)
{
  {
    MR_bool var_use_analysis__succeeded;
    MR_Integer var_use_analysis__Cast_HeadVar1_4 = (MR_Integer) var_use_analysis__HeadVar__2_2;
    MR_Integer var_use_analysis__Cast_HeadVar2_5 = (MR_Integer) var_use_analysis__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(var_use_analysis__HeadVar__1_1, var_use_analysis__Cast_HeadVar1_4, var_use_analysis__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
var_use_analysis____Unify____recursive_case_0_0(
  MR_Word var_use_analysis__HeadVar__2_1,
  MR_Word var_use_analysis__HeadVar__2_2)
{
  {
    MR_bool var_use_analysis__succeeded = (var_use_analysis__HeadVar__2_1 == var_use_analysis__HeadVar__2_2);

    return var_use_analysis__succeeded;
  }
}

static void MR_CALL 
var_use_analysis____Compare____recursive_calls_list_0_0(
  MR_Word * var_use_analysis__HeadVar__1_1,
  MR_Word var_use_analysis__HeadVar__2_2,
  MR_Word var_use_analysis__HeadVar__3_3)
{
  {
    MR_bool var_use_analysis__succeeded;
    MR_Word var_use_analysis__Cast_HeadVar1_4 = var_use_analysis__HeadVar__2_2;
    MR_Word var_use_analysis__Cast_HeadVar2_5 = var_use_analysis__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &var_use_analysis_scalar_common_1[4], var_use_analysis__HeadVar__1_1, ((MR_Box) (var_use_analysis__Cast_HeadVar1_4)), ((MR_Box) (var_use_analysis__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
var_use_analysis____Unify____recursive_calls_list_0_0(
  MR_Word var_use_analysis__HeadVar__1_1,
  MR_Word var_use_analysis__HeadVar__2_2)
{
  {
    MR_bool var_use_analysis__succeeded;
    MR_Word var_use_analysis__Cast_HeadVar1_3 = var_use_analysis__HeadVar__1_1;
    MR_Word var_use_analysis__Cast_HeadVar2_4 = var_use_analysis__HeadVar__2_2;

    {
      var_use_analysis__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &var_use_analysis_scalar_common_1[4], ((MR_Box) (var_use_analysis__Cast_HeadVar1_3)), ((MR_Box) (var_use_analysis__Cast_HeadVar2_4)));
    }
    return var_use_analysis__succeeded;
  }
}

static void MR_CALL 
var_use_analysis____Compare____proc_var_first_use_prepared_info_0_0(
  MR_Word * var_use_analysis__HeadVar__1_1,
  MR_Word var_use_analysis__HeadVar__2_2,
  MR_Word var_use_analysis__HeadVar__3_3)
{
  {
    MR_bool var_use_analysis__succeeded;
    MR_Integer var_use_analysis__CastX_42 = (MR_Integer) var_use_analysis__HeadVar__2_2;
    MR_Integer var_use_analysis__CastY_43 = (MR_Integer) var_use_analysis__HeadVar__3_3;

    var_use_analysis__succeeded = (var_use_analysis__CastX_42 == var_use_analysis__CastY_43);
    if (var_use_analysis__succeeded)
      *var_use_analysis__HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) var_use_analysis__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_String var_use_analysis__Var_52 = ((MR_String) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) var_use_analysis__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
          {
            MR_String var_use_analysis__ArgY1_5 = ((MR_String) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__3_3, (MR_Integer) 0)));

            {
              mercury__private_builtin__builtin_compare_string_3_p_0(var_use_analysis__HeadVar__1_1, var_use_analysis__Var_52, var_use_analysis__ArgY1_5);
            }
          }
        else
          *var_use_analysis__HeadVar__1_1 = (MR_Integer) 1;
      }
    else
      {
        MR_Integer var_use_analysis__Var_53 = ((MR_Integer) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__2_2, (MR_Integer) 6)));
        MR_Word var_use_analysis__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word var_use_analysis__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word var_use_analysis__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word var_use_analysis__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word var_use_analysis__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word var_use_analysis__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) var_use_analysis__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
          *var_use_analysis__HeadVar__1_1 = (MR_Integer) 2;
        else
          {
            MR_Word var_use_analysis__ArgY1_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word var_use_analysis__ArgY2_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word var_use_analysis__ArgY3_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__3_3, (MR_Integer) 2)));
            MR_Word var_use_analysis__ArgY4_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__3_3, (MR_Integer) 3)));
            MR_Word var_use_analysis__ArgY5_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__3_3, (MR_Integer) 4)));
            MR_Word var_use_analysis__ArgY6_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__3_3, (MR_Integer) 5)));
            MR_Integer var_use_analysis__ArgY7_35 = ((MR_Integer) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__3_3, (MR_Integer) 6)));
            MR_Word var_use_analysis__Var_36;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &var_use_analysis_scalar_common_1[2], &var_use_analysis__Var_36, ((MR_Box) (var_use_analysis__Var_59)), ((MR_Box) (var_use_analysis__ArgY1_23)));
            }
            var_use_analysis__succeeded = (var_use_analysis__Var_36 == (MR_Integer) 0);
            var_use_analysis__succeeded = !(var_use_analysis__succeeded);
            if (var_use_analysis__succeeded)
              *var_use_analysis__HeadVar__1_1 = var_use_analysis__Var_36;
            else
              {
                MR_Word var_use_analysis__Var_37;
                MR_Integer var_use_analysis__Var_60 = (MR_Integer) var_use_analysis__Var_58;
                MR_Integer var_use_analysis__Var_61 = (MR_Integer) var_use_analysis__ArgY2_25;

                {
                  mercury__private_builtin__builtin_compare_int_3_p_0(&var_use_analysis__Var_37, var_use_analysis__Var_60, var_use_analysis__Var_61);
                }
                var_use_analysis__succeeded = (var_use_analysis__Var_37 == (MR_Integer) 0);
                var_use_analysis__succeeded = !(var_use_analysis__succeeded);
                if (var_use_analysis__succeeded)
                  *var_use_analysis__HeadVar__1_1 = var_use_analysis__Var_37;
                else
                  {
                    MR_Word var_use_analysis__Var_38;

                    {
                      mercury__builtin__compare_3_p_0((MR_Word) &var_use_analysis_scalar_common_2[5], &var_use_analysis__Var_38, ((MR_Box) (var_use_analysis__Var_57)), ((MR_Box) (var_use_analysis__ArgY3_27)));
                    }
                    var_use_analysis__succeeded = (var_use_analysis__Var_38 == (MR_Integer) 0);
                    var_use_analysis__succeeded = !(var_use_analysis__succeeded);
                    if (var_use_analysis__succeeded)
                      *var_use_analysis__HeadVar__1_1 = var_use_analysis__Var_38;
                    else
                      {
                        MR_Word var_use_analysis__Var_39;

                        {
                          mercury__builtin__compare_3_p_0((MR_Word) &var_use_analysis_scalar_common_1[3], &var_use_analysis__Var_39, ((MR_Box) (var_use_analysis__Var_56)), ((MR_Box) (var_use_analysis__ArgY4_29)));
                        }
                        var_use_analysis__succeeded = (var_use_analysis__Var_39 == (MR_Integer) 0);
                        var_use_analysis__succeeded = !(var_use_analysis__succeeded);
                        if (var_use_analysis__succeeded)
                          *var_use_analysis__HeadVar__1_1 = var_use_analysis__Var_39;
                        else
                          {
                            MR_Word var_use_analysis__Var_40;

                            {
                              mercury__builtin__compare_3_p_0((MR_Word) &var_use_analysis_scalar_common_2[1], &var_use_analysis__Var_40, ((MR_Box) (var_use_analysis__Var_55)), ((MR_Box) (var_use_analysis__ArgY5_31)));
                            }
                            var_use_analysis__succeeded = (var_use_analysis__Var_40 == (MR_Integer) 0);
                            var_use_analysis__succeeded = !(var_use_analysis__succeeded);
                            if (var_use_analysis__succeeded)
                              *var_use_analysis__HeadVar__1_1 = var_use_analysis__Var_40;
                            else
                              {
                                MR_Word var_use_analysis__Var_41;

                                {
                                  mercury__builtin__compare_3_p_0((MR_Word) &var_use_analysis_scalar_common_2[6], &var_use_analysis__Var_41, ((MR_Box) (var_use_analysis__Var_54)), ((MR_Box) (var_use_analysis__ArgY6_33)));
                                }
                                var_use_analysis__succeeded = (var_use_analysis__Var_41 == (MR_Integer) 0);
                                var_use_analysis__succeeded = !(var_use_analysis__succeeded);
                                if (var_use_analysis__succeeded)
                                  *var_use_analysis__HeadVar__1_1 = var_use_analysis__Var_41;
                                else
                                  {
                                    mercury__private_builtin__builtin_compare_int_3_p_0(var_use_analysis__HeadVar__1_1, var_use_analysis__Var_53, var_use_analysis__ArgY7_35);
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

static MR_bool MR_CALL 
var_use_analysis____Unify____proc_var_first_use_prepared_info_0_0(
  MR_Word var_use_analysis__HeadVar__1_1,
  MR_Word var_use_analysis__HeadVar__2_2)
{
  {
    MR_bool var_use_analysis__succeeded;
    MR_Integer var_use_analysis__CastX_19 = (MR_Integer) var_use_analysis__HeadVar__1_1;
    MR_Integer var_use_analysis__CastY_20 = (MR_Integer) var_use_analysis__HeadVar__2_2;

    var_use_analysis__succeeded = (var_use_analysis__CastX_19 == var_use_analysis__CastY_20);
    if (var_use_analysis__succeeded)
      var_use_analysis__succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) var_use_analysis__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_String var_use_analysis__ArgX1_3 = ((MR_String) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__1_1, (MR_Integer) 0)));
        MR_String var_use_analysis__ArgY1_4;

        var_use_analysis__succeeded = ((MR_tag((MR_Word) var_use_analysis__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
        if (var_use_analysis__succeeded)
          {
            var_use_analysis__ArgY1_4 = ((MR_String) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__2_2, (MR_Integer) 0)));
            var_use_analysis__succeeded = (strcmp(var_use_analysis__ArgX1_3, var_use_analysis__ArgY1_4) == 0);
          }
      }
    else
      {
        MR_Word var_use_analysis__TypeInfo_21_21;
        MR_Word var_use_analysis__TypeInfo_23_23;
        MR_Word var_use_analysis__TypeInfo_24_24;
        MR_Word var_use_analysis__TypeInfo_25_25;
        MR_Word var_use_analysis__TypeInfo_26_26;
        MR_Word var_use_analysis__ArgX1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word var_use_analysis__ArgY1_6;
        MR_Word var_use_analysis__ArgX2_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word var_use_analysis__ArgY2_8;
        MR_Word var_use_analysis__ArgX3_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word var_use_analysis__ArgY3_10;
        MR_Word var_use_analysis__ArgX4_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word var_use_analysis__ArgY4_12;
        MR_Word var_use_analysis__ArgX5_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__1_1, (MR_Integer) 4)));
        MR_Word var_use_analysis__ArgY5_14;
        MR_Word var_use_analysis__ArgX6_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__1_1, (MR_Integer) 5)));
        MR_Word var_use_analysis__ArgY6_16;
        MR_Integer var_use_analysis__ArgX7_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__1_1, (MR_Integer) 6)));
        MR_Integer var_use_analysis__ArgY7_18;
        MR_Integer var_use_analysis__Var_27;
        MR_Integer var_use_analysis__Var_28;

        var_use_analysis__succeeded = ((MR_tag((MR_Word) var_use_analysis__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (var_use_analysis__succeeded)
          {
            var_use_analysis__ArgY1_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__2_2, (MR_Integer) 0)));
            var_use_analysis__ArgY2_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__2_2, (MR_Integer) 1)));
            var_use_analysis__ArgY3_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__2_2, (MR_Integer) 2)));
            var_use_analysis__ArgY4_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__2_2, (MR_Integer) 3)));
            var_use_analysis__ArgY5_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__2_2, (MR_Integer) 4)));
            var_use_analysis__ArgY6_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__2_2, (MR_Integer) 5)));
            var_use_analysis__ArgY7_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__2_2, (MR_Integer) 6)));
            var_use_analysis__TypeInfo_21_21 = (MR_Word) &var_use_analysis_scalar_common_1[2];
            {
              var_use_analysis__succeeded = mercury__builtin__unify_2_p_0(var_use_analysis__TypeInfo_21_21, ((MR_Box) (var_use_analysis__ArgX1_5)), ((MR_Box) (var_use_analysis__ArgY1_6)));
            }
            if (var_use_analysis__succeeded)
              {
                var_use_analysis__Var_27 = (MR_Integer) var_use_analysis__ArgX2_7;
                var_use_analysis__Var_28 = (MR_Integer) var_use_analysis__ArgY2_8;
                var_use_analysis__succeeded = (var_use_analysis__Var_27 == var_use_analysis__Var_28);
                if (var_use_analysis__succeeded)
                  {
                    var_use_analysis__TypeInfo_23_23 = (MR_Word) &var_use_analysis_scalar_common_2[5];
                    {
                      var_use_analysis__succeeded = mercury__builtin__unify_2_p_0(var_use_analysis__TypeInfo_23_23, ((MR_Box) (var_use_analysis__ArgX3_9)), ((MR_Box) (var_use_analysis__ArgY3_10)));
                    }
                    if (var_use_analysis__succeeded)
                      {
                        var_use_analysis__TypeInfo_24_24 = (MR_Word) &var_use_analysis_scalar_common_1[3];
                        {
                          var_use_analysis__succeeded = mercury__builtin__unify_2_p_0(var_use_analysis__TypeInfo_24_24, ((MR_Box) (var_use_analysis__ArgX4_11)), ((MR_Box) (var_use_analysis__ArgY4_12)));
                        }
                        if (var_use_analysis__succeeded)
                          {
                            var_use_analysis__TypeInfo_25_25 = (MR_Word) &var_use_analysis_scalar_common_2[1];
                            {
                              var_use_analysis__succeeded = mercury__builtin__unify_2_p_0(var_use_analysis__TypeInfo_25_25, ((MR_Box) (var_use_analysis__ArgX5_13)), ((MR_Box) (var_use_analysis__ArgY5_14)));
                            }
                            if (var_use_analysis__succeeded)
                              {
                                var_use_analysis__TypeInfo_26_26 = (MR_Word) &var_use_analysis_scalar_common_2[6];
                                {
                                  var_use_analysis__succeeded = mercury__builtin__unify_2_p_0(var_use_analysis__TypeInfo_26_26, ((MR_Box) (var_use_analysis__ArgX6_15)), ((MR_Box) (var_use_analysis__ArgY6_16)));
                                }
                                if (var_use_analysis__succeeded)
                                  var_use_analysis__succeeded = (var_use_analysis__ArgX7_17 == var_use_analysis__ArgY7_18);
                              }
                          }
                      }
                  }
              }
          }
      }
    return var_use_analysis__succeeded;
  }
}

void MR_CALL 
var_use_analysis____Compare____intermodule_var_use_0_0(
  MR_Word * var_use_analysis__HeadVar__1_1,
  MR_Word var_use_analysis__HeadVar__2_2,
  MR_Word var_use_analysis__HeadVar__3_3)
{
  {
    MR_bool var_use_analysis__succeeded;
    MR_Integer var_use_analysis__CastX_8 = (MR_Integer) var_use_analysis__HeadVar__2_2;
    MR_Integer var_use_analysis__CastY_9 = (MR_Integer) var_use_analysis__HeadVar__3_3;

    var_use_analysis__succeeded = (var_use_analysis__CastX_8 == var_use_analysis__CastY_9);
    if (var_use_analysis__succeeded)
      *var_use_analysis__HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((var_use_analysis__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((var_use_analysis__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *var_use_analysis__HeadVar__1_1 = (MR_Integer) 0;
      else
        *var_use_analysis__HeadVar__1_1 = (MR_Integer) 2;
    else
      {
        MR_String var_use_analysis__Var_11 = ((MR_String) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__2_2, (MR_Integer) 0)));

        if ((var_use_analysis__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *var_use_analysis__HeadVar__1_1 = (MR_Integer) 1;
        else
          {
            MR_String var_use_analysis__ArgY1_5 = ((MR_String) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__3_3, (MR_Integer) 0)));

            {
              mercury__private_builtin__builtin_compare_string_3_p_0(var_use_analysis__HeadVar__1_1, var_use_analysis__Var_11, var_use_analysis__ArgY1_5);
            }
          }
      }
  }
}

MR_bool MR_CALL 
var_use_analysis____Unify____intermodule_var_use_0_0(
  MR_Word var_use_analysis__HeadVar__1_1,
  MR_Word var_use_analysis__HeadVar__2_2)
{
  {
    MR_bool var_use_analysis__succeeded;
    MR_Integer var_use_analysis__CastX_7 = (MR_Integer) var_use_analysis__HeadVar__1_1;
    MR_Integer var_use_analysis__CastY_8 = (MR_Integer) var_use_analysis__HeadVar__2_2;

    var_use_analysis__succeeded = (var_use_analysis__CastX_7 == var_use_analysis__CastY_8);
    if (var_use_analysis__succeeded)
      var_use_analysis__succeeded = MR_TRUE;
    else
    if ((var_use_analysis__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Integer var_use_analysis__CastX_5 = (MR_Integer) var_use_analysis__HeadVar__1_1;
        MR_Integer var_use_analysis__CastY_6 = (MR_Integer) var_use_analysis__HeadVar__2_2;

        var_use_analysis__succeeded = (var_use_analysis__CastY_6 == var_use_analysis__CastX_5);
      }
    else
      {
        MR_String var_use_analysis__ArgX1_3 = ((MR_String) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__1_1, (MR_Integer) 0)));
        MR_String var_use_analysis__ArgY1_4;

        var_use_analysis__succeeded = ((MR_tag((MR_Word) var_use_analysis__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (var_use_analysis__succeeded)
          {
            var_use_analysis__ArgY1_4 = ((MR_String) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__2_2, (MR_Integer) 0)));
            var_use_analysis__succeeded = (strcmp(var_use_analysis__ArgX1_3, var_use_analysis__ArgY1_4) == 0);
          }
      }
    return var_use_analysis__succeeded;
  }
}

static void MR_CALL 
var_use_analysis____Compare____found_first_use_0_0(
  MR_Word * var_use_analysis__HeadVar__1_1,
  MR_Word var_use_analysis__HeadVar__2_2,
  MR_Word var_use_analysis__HeadVar__3_3)
{
  {
    MR_bool var_use_analysis__succeeded;
    MR_Integer var_use_analysis__CastX_8 = (MR_Integer) var_use_analysis__HeadVar__2_2;
    MR_Integer var_use_analysis__CastY_9 = (MR_Integer) var_use_analysis__HeadVar__3_3;

    var_use_analysis__succeeded = (var_use_analysis__CastX_8 == var_use_analysis__CastY_9);
    if (var_use_analysis__succeeded)
      *var_use_analysis__HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((var_use_analysis__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((var_use_analysis__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *var_use_analysis__HeadVar__1_1 = (MR_Integer) 0;
      else
        *var_use_analysis__HeadVar__1_1 = (MR_Integer) 1;
    else
      {
        MR_Float var_use_analysis__Var_11 = MR_unbox_float((MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__2_2, (MR_Integer) 0)));

        if ((var_use_analysis__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *var_use_analysis__HeadVar__1_1 = (MR_Integer) 2;
        else
          {
            MR_Float var_use_analysis__ArgY1_7 = MR_unbox_float((MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__3_3, (MR_Integer) 0)));

            {
              mercury__private_builtin__builtin_compare_float_3_p_0(var_use_analysis__HeadVar__1_1, var_use_analysis__Var_11, var_use_analysis__ArgY1_7);
            }
          }
      }
  }
}

static MR_bool MR_CALL 
var_use_analysis____Unify____found_first_use_0_0(
  MR_Word var_use_analysis__HeadVar__1_1,
  MR_Word var_use_analysis__HeadVar__2_2)
{
  {
    MR_bool var_use_analysis__succeeded;
    MR_Integer var_use_analysis__CastX_7 = (MR_Integer) var_use_analysis__HeadVar__1_1;
    MR_Integer var_use_analysis__CastY_8 = (MR_Integer) var_use_analysis__HeadVar__2_2;

    var_use_analysis__succeeded = (var_use_analysis__CastX_7 == var_use_analysis__CastY_8);
    if (var_use_analysis__succeeded)
      var_use_analysis__succeeded = MR_TRUE;
    else
    if ((var_use_analysis__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Integer var_use_analysis__CastX_3 = (MR_Integer) var_use_analysis__HeadVar__1_1;
        MR_Integer var_use_analysis__CastY_4 = (MR_Integer) var_use_analysis__HeadVar__2_2;

        var_use_analysis__succeeded = (var_use_analysis__CastY_4 == var_use_analysis__CastX_3);
      }
    else
      {
        MR_Float var_use_analysis__ArgX1_5 = MR_unbox_float((MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__1_1, (MR_Integer) 0)));
        MR_Float var_use_analysis__ArgY1_6;

        var_use_analysis__succeeded = ((MR_tag((MR_Word) var_use_analysis__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (var_use_analysis__succeeded)
          {
            var_use_analysis__ArgY1_6 = MR_unbox_float((MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__2_2, (MR_Integer) 0)));
            var_use_analysis__succeeded = (var_use_analysis__ArgX1_5 == var_use_analysis__ArgY1_6);
          }
      }
    return var_use_analysis__succeeded;
  }
}

static void MR_CALL 
var_use_analysis____Compare____first_use_rec_info_0_0(
  MR_Word * var_use_analysis__HeadVar__1_1,
  MR_Word var_use_analysis__HeadVar__2_2,
  MR_Word var_use_analysis__HeadVar__3_3)
{
  {
    MR_bool var_use_analysis__succeeded;
    MR_Integer var_use_analysis__CastX_13 = (MR_Integer) var_use_analysis__HeadVar__2_2;
    MR_Integer var_use_analysis__CastY_14 = (MR_Integer) var_use_analysis__HeadVar__3_3;

    var_use_analysis__succeeded = (var_use_analysis__CastX_13 == var_use_analysis__CastY_14);
    if (var_use_analysis__succeeded)
      *var_use_analysis__HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((var_use_analysis__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((var_use_analysis__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *var_use_analysis__HeadVar__1_1 = (MR_Integer) 0;
      else
        *var_use_analysis__HeadVar__1_1 = (MR_Integer) 2;
    else
      {
        MR_Word var_use_analysis__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word var_use_analysis__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__2_2, (MR_Integer) 0)));

        if ((var_use_analysis__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *var_use_analysis__HeadVar__1_1 = (MR_Integer) 1;
        else
          {
            MR_Word var_use_analysis__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word var_use_analysis__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word var_use_analysis__Var_8;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &var_use_analysis_scalar_common_1[1], &var_use_analysis__Var_8, ((MR_Box) (var_use_analysis__Var_18)), ((MR_Box) (var_use_analysis__ArgY1_5)));
            }
            var_use_analysis__succeeded = (var_use_analysis__Var_8 == (MR_Integer) 0);
            var_use_analysis__succeeded = !(var_use_analysis__succeeded);
            if (var_use_analysis__succeeded)
              *var_use_analysis__HeadVar__1_1 = var_use_analysis__Var_8;
            else
              {
                MR_Integer var_use_analysis__Var_19 = (MR_Integer) var_use_analysis__Var_17;
                MR_Integer var_use_analysis__Var_20 = (MR_Integer) var_use_analysis__ArgY2_7;

                {
                  mercury__private_builtin__builtin_compare_int_3_p_0(var_use_analysis__HeadVar__1_1, var_use_analysis__Var_19, var_use_analysis__Var_20);
                }
              }
          }
      }
  }
}

static MR_bool MR_CALL 
var_use_analysis____Unify____first_use_rec_info_0_0(
  MR_Word var_use_analysis__HeadVar__1_1,
  MR_Word var_use_analysis__HeadVar__2_2)
{
  {
    MR_bool var_use_analysis__succeeded;
    MR_Integer var_use_analysis__CastX_9 = (MR_Integer) var_use_analysis__HeadVar__1_1;
    MR_Integer var_use_analysis__CastY_10 = (MR_Integer) var_use_analysis__HeadVar__2_2;

    var_use_analysis__succeeded = (var_use_analysis__CastX_9 == var_use_analysis__CastY_10);
    if (var_use_analysis__succeeded)
      var_use_analysis__succeeded = MR_TRUE;
    else
    if ((var_use_analysis__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Integer var_use_analysis__CastX_7 = (MR_Integer) var_use_analysis__HeadVar__1_1;
        MR_Integer var_use_analysis__CastY_8 = (MR_Integer) var_use_analysis__HeadVar__2_2;

        var_use_analysis__succeeded = (var_use_analysis__CastY_8 == var_use_analysis__CastX_7);
      }
    else
      {
        MR_Word var_use_analysis__TypeInfo_11_11;
        MR_Word var_use_analysis__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word var_use_analysis__ArgY1_4;
        MR_Word var_use_analysis__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word var_use_analysis__ArgY2_6;

        var_use_analysis__succeeded = ((MR_tag((MR_Word) var_use_analysis__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (var_use_analysis__succeeded)
          {
            var_use_analysis__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__2_2, (MR_Integer) 0)));
            var_use_analysis__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__2_2, (MR_Integer) 1)));
            var_use_analysis__TypeInfo_11_11 = (MR_Word) &var_use_analysis_scalar_common_1[1];
            {
              var_use_analysis__succeeded = mercury__builtin__unify_2_p_0(var_use_analysis__TypeInfo_11_11, ((MR_Box) (var_use_analysis__ArgX1_3)), ((MR_Box) (var_use_analysis__ArgY1_4)));
            }
            if (var_use_analysis__succeeded)
              var_use_analysis__succeeded = (var_use_analysis__ArgX2_5 == var_use_analysis__ArgY2_6);
          }
      }
    return var_use_analysis__succeeded;
  }
}

static void MR_CALL 
var_use_analysis__adjust_weight_for_recursion_4_p_0(
  MR_Word var_use_analysis__RecCase_5,
  MR_Float var_use_analysis__RecProb_6,
  MR_Float var_use_analysis__STATE_VARIABLE_Weight_0_9,
  MR_Float * var_use_analysis__STATE_VARIABLE_Weight_10)
{
  {
    MR_bool var_use_analysis__succeeded;
    MR_Float var_use_analysis__Prob_8;
    MR_Float var_use_analysis__Var_12;

    switch (var_use_analysis__RecCase_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          var_use_analysis__Prob_8 = measurement_units__not_probability_1_f_0(var_use_analysis__RecProb_6);
        }
        break;
      case (MR_Integer) 0:
        var_use_analysis__Prob_8 = var_use_analysis__RecProb_6;
        break;
    }
    {
      var_use_analysis__Var_12 = measurement_units__probability_to_float_1_f_0(var_use_analysis__Prob_8);
    }
    *var_use_analysis__STATE_VARIABLE_Weight_10 = (var_use_analysis__STATE_VARIABLE_Weight_0_9 * var_use_analysis__Var_12);
  }
}

static void MR_CALL 
var_use_analysis__get_call_site_dynamic_var_use_time_9_p_0(
  MR_Word var_use_analysis__CliquePtr_10,
  MR_Word var_use_analysis__CSDPtr_11,
  MR_Word var_use_analysis__RecursionType_12,
  MR_Word var_use_analysis__CurDepth_13,
  MR_Float var_use_analysis__Cost_14,
  MR_Word var_use_analysis__CallStack_15,
  MR_Word var_use_analysis__VarUseOptions_16,
  MR_Integer var_use_analysis__ArgNum_17,
  MR_Float * var_use_analysis__Time_18)
{
  {
    MR_bool var_use_analysis__succeeded;
    MR_Word var_use_analysis__MaybeVarUseInfo_19;
    MR_Word var_use_analysis__Var_25;

    {
      var_use_analysis__Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), var_use_analysis__Var_25, 0) = ((MR_Box) (var_use_analysis__CurDepth_13));
    }
    {
      var_use_analysis__get_call_site_dynamic_var_use_info_rec_level_9_p_1(var_use_analysis__CliquePtr_10, var_use_analysis__CSDPtr_11, var_use_analysis__ArgNum_17, var_use_analysis__RecursionType_12, var_use_analysis__Var_25, var_use_analysis__Cost_14, var_use_analysis__CallStack_15, var_use_analysis__VarUseOptions_16, &var_use_analysis__MaybeVarUseInfo_19);
    }
    if (((MR_tag((MR_Word) var_use_analysis__MaybeVarUseInfo_19)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word var_use_analysis__VarUseType_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_16, (MR_Integer) 2)));
        MR_Word var_use_analysis__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_16, (MR_Integer) 0)));
        MR_Word var_use_analysis__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_16, (MR_Integer) 1)));

        switch (var_use_analysis__VarUseType_24) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            *var_use_analysis__Time_18 = (MR_Float) 0.0000000000000000;
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 0:
            *var_use_analysis__Time_18 = var_use_analysis__Cost_14;
            break;
        }
      }
    else
      {
        MR_Word var_use_analysis__VarUseInfo_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__MaybeVarUseInfo_19, (MR_Integer) 0)));
        MR_Float var_use_analysis__Var_21;
        MR_Word var_use_analysis__Var_22;

        *var_use_analysis__Time_18 = MR_unbox_float((MR_hl_field(MR_mktag(0), var_use_analysis__VarUseInfo_20, (MR_Integer) 0)));
        var_use_analysis__Var_21 = MR_unbox_float((MR_hl_field(MR_mktag(0), var_use_analysis__VarUseInfo_20, (MR_Integer) 1)));
        var_use_analysis__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseInfo_20, (MR_Integer) 2)));
      }
  }
}

static void MR_CALL 
var_use_analysis__sum_use_info_costs_5_p_0(
  MR_Word var_use_analysis__HeadVar__1_1,
  MR_Float var_use_analysis__STATE_VARIABLE_AccCost_0_11,
  MR_Float * var_use_analysis__STATE_VARIABLE_AccCost_12,
  MR_Float var_use_analysis__STATE_VARIABLE_AccProcCost_0_13,
  MR_Float * var_use_analysis__STATE_VARIABLE_AccProcCost_14)
{
  {
    MR_bool var_use_analysis__succeeded;
    MR_Float var_use_analysis__Cost_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__1_1, (MR_Integer) 0)));
    MR_Float var_use_analysis__ProcCost_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word var_use_analysis__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__1_1, (MR_Integer) 2)));

    *var_use_analysis__STATE_VARIABLE_AccCost_12 = (var_use_analysis__STATE_VARIABLE_AccCost_0_11 + var_use_analysis__Cost_6);
    *var_use_analysis__STATE_VARIABLE_AccProcCost_14 = (var_use_analysis__STATE_VARIABLE_AccProcCost_0_13 + var_use_analysis__ProcCost_7);
  }
}

void MR_CALL 
var_use_analysis__var_first_use_13_p_0(
  MR_Word var_use_analysis__CliquePtr_14,
  MR_Word var_use_analysis__CallSiteMap_15,
  MR_Word var_use_analysis__RecursiveCallSiteMap_16,
  MR_Word var_use_analysis__ContainingGoalMap_17,
  MR_Word var_use_analysis__CoverageArray_18,
  MR_Word var_use_analysis__RT_19,
  MR_Word var_use_analysis__CurDepth_20,
  MR_Word var_use_analysis__Goal_21,
  MR_Word var_use_analysis__RevGoalPath_22,
  MR_Float var_use_analysis__Cost_23,
  MR_Integer var_use_analysis__Var_24,
  MR_Word var_use_analysis__VarUseOptions_25,
  MR_Word * var_use_analysis__VarUseInfo_26)
{
  {
    MR_bool var_use_analysis__succeeded;
    MR_Word var_use_analysis__FoundFirstUse_28;
    MR_Word var_use_analysis__VarUseType_29;
    MR_Word var_use_analysis__Var_30;
    MR_Word var_use_analysis__Var_32;
    MR_Float var_use_analysis__Var_27;
    MR_Word var_use_analysis__Var_34;
    MR_Word var_use_analysis__Var_35;

    {
      var_use_analysis__Var_32 = mercury__set__init_0_f_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0);
    }
    {
      var_use_analysis__Var_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), var_use_analysis__Var_30, 0) = ((MR_Box) (var_use_analysis__CliquePtr_14));
      MR_hl_field(MR_mktag(0), var_use_analysis__Var_30, 1) = ((MR_Box) (var_use_analysis__CallSiteMap_15));
      MR_hl_field(MR_mktag(0), var_use_analysis__Var_30, 2) = ((MR_Box) (var_use_analysis__RecursiveCallSiteMap_16));
      MR_hl_field(MR_mktag(0), var_use_analysis__Var_30, 3) = ((MR_Box) (var_use_analysis__ContainingGoalMap_17));
      MR_hl_field(MR_mktag(0), var_use_analysis__Var_30, 4) = ((MR_Box) (var_use_analysis__CoverageArray_18));
      MR_hl_field(MR_mktag(0), var_use_analysis__Var_30, 5) = ((MR_Box) (var_use_analysis__Var_24));
      MR_hl_field(MR_mktag(0), var_use_analysis__Var_30, 6) = ((MR_Box) (var_use_analysis__VarUseOptions_25));
      MR_hl_field(MR_mktag(0), var_use_analysis__Var_30, 7) = ((MR_Box) (var_use_analysis__Var_32));
      MR_hl_field(MR_mktag(0), var_use_analysis__Var_30, 8) = ((MR_Box) (var_use_analysis__RT_19));
      MR_hl_field(MR_mktag(0), var_use_analysis__Var_30, 9) = ((MR_Box) (var_use_analysis__CurDepth_20));
      MR_hl_field(MR_mktag(0), var_use_analysis__Var_30, 10) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      var_use_analysis__goal_var_first_use_6_p_0(var_use_analysis__RevGoalPath_22, var_use_analysis__Goal_21, var_use_analysis__Var_30, (MR_Float) 0.0000000000000000, &var_use_analysis__Var_27, &var_use_analysis__FoundFirstUse_28);
    }
    var_use_analysis__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_25, (MR_Integer) 0)));
    var_use_analysis__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_25, (MR_Integer) 1)));
    var_use_analysis__VarUseType_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_25, (MR_Integer) 2)));
    if ((var_use_analysis__FoundFirstUse_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      switch (var_use_analysis__VarUseType_29) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            *var_use_analysis__VarUseInfo_26 = base;
            MR_hl_field(MR_mktag(0), base, 0) = MR_box_float(var_use_analysis__Cost_23);
            MR_hl_field(MR_mktag(0), base, 1) = MR_box_float(var_use_analysis__Cost_23);
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (var_use_analysis__VarUseType_29));
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            *var_use_analysis__VarUseInfo_26 = base;
            MR_hl_field(MR_mktag(0), base, 0) = MR_box_float(var_use_analysis__Cost_23);
            MR_hl_field(MR_mktag(0), base, 1) = MR_box_float(var_use_analysis__Cost_23);
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (var_use_analysis__VarUseType_29));
          }
          break;
        case (MR_Integer) 0:
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "var_use_analysis", (MR_String) "predicate \140var_use_analysis.found_first_use_to_use_info\'/4", (MR_String) "goal did not produce a variable that it should have");
              return;
            }
          }
          break;
      }
    else
      {
        MR_Float var_use_analysis__CostUntilUse_41 = MR_unbox_float((MR_hl_field(MR_mktag(1), var_use_analysis__FoundFirstUse_28, (MR_Integer) 0)));

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          *var_use_analysis__VarUseInfo_26 = base;
          MR_hl_field(MR_mktag(0), base, 0) = MR_box_float(var_use_analysis__CostUntilUse_41);
          MR_hl_field(MR_mktag(0), base, 1) = MR_box_float(var_use_analysis__Cost_23);
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (var_use_analysis__VarUseType_29));
        }
      }
  }
}

void MR_CALL 
var_use_analysis__get_call_site_dynamic_var_use_info_6_p_1(
  MR_Word var_use_analysis__CSDPtr_7,
  MR_Integer var_use_analysis__ArgNum_8,
  MR_Word var_use_analysis__RecursionType_9,
  MR_Float var_use_analysis__Cost_10,
  MR_Word var_use_analysis__VarUseOptions_11,
  MR_Word * var_use_analysis__MaybeVarUseInfo_12)
{
  {
    MR_bool var_use_analysis__succeeded;
    MR_Word var_use_analysis__Deep_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_11, (MR_Integer) 0)));
    MR_Word var_use_analysis__CSD_14;
    MR_Word var_use_analysis__ParentCliquePtr_15;
    MR_Word var_use_analysis__MaybeCurDepth_16;
    MR_Word var_use_analysis__Var_17;
    MR_Word var_use_analysis__Var_18;
    MR_Word var_use_analysis__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_11, (MR_Integer) 1)));
    MR_Word var_use_analysis__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_11, (MR_Integer) 2)));
    MR_Word var_use_analysis__Var_21;
    MR_Word var_use_analysis__Var_22;

    {
      profile__deep_lookup_call_site_dynamics_3_p_0(var_use_analysis__Deep_13, var_use_analysis__CSDPtr_7, &var_use_analysis__CSD_14);
    }
    var_use_analysis__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__CSD_14, (MR_Integer) 0)));
    var_use_analysis__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__CSD_14, (MR_Integer) 1)));
    var_use_analysis__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__CSD_14, (MR_Integer) 2)));
    {
      profile__deep_lookup_clique_index_3_p_0(var_use_analysis__Deep_13, var_use_analysis__Var_17, &var_use_analysis__ParentCliquePtr_15);
    }
    {
      recursion_patterns__recursion_type_get_maybe_avg_max_depth_2_p_1(var_use_analysis__RecursionType_9, &var_use_analysis__MaybeCurDepth_16);
    }
    {
      var_use_analysis__Var_18 = mercury__set__init_0_f_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0);
    }
    {
      var_use_analysis__get_call_site_dynamic_var_use_info_rec_level_9_p_1(var_use_analysis__ParentCliquePtr_15, var_use_analysis__CSDPtr_7, var_use_analysis__ArgNum_8, var_use_analysis__RecursionType_9, var_use_analysis__MaybeCurDepth_16, var_use_analysis__Cost_10, var_use_analysis__Var_18, var_use_analysis__VarUseOptions_11, var_use_analysis__MaybeVarUseInfo_12);
    }
  }
}

void MR_CALL 
var_use_analysis__get_call_site_dynamic_var_use_info_rec_level_9_p_1(
  MR_Word var_use_analysis__ParentCliquePtr_10,
  MR_Word var_use_analysis__CSDPtr_11,
  MR_Integer var_use_analysis__ArgNum_12,
  MR_Word var_use_analysis__RecursionType_13,
  MR_Word var_use_analysis__MaybeDepth_14,
  MR_Float var_use_analysis__Cost_15,
  MR_Word var_use_analysis__CallStack0_16,
  MR_Word var_use_analysis__VarUseOptions_17,
  MR_Word * var_use_analysis__MaybeVarUseInfo_18)
{
  {
    MR_bool var_use_analysis__succeeded;
    MR_Word var_use_analysis__Deep_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_17, (MR_Integer) 0)));
    MR_Word var_use_analysis__MaybeCalleeCliquePtr_20;
    MR_Word var_use_analysis__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_17, (MR_Integer) 1)));
    MR_Word var_use_analysis__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_17, (MR_Integer) 2)));

    {
      profile__deep_lookup_clique_maybe_child_3_p_0(var_use_analysis__Deep_19, var_use_analysis__CSDPtr_11, &var_use_analysis__MaybeCalleeCliquePtr_20);
    }
    if ((var_use_analysis__MaybeCalleeCliquePtr_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word var_use_analysis__CSD_22;
        MR_Word var_use_analysis__CalleePDPtr_23;
        MR_Word var_use_analysis__Var_61;
        MR_Word var_use_analysis__Var_62;

        {
          profile__deep_lookup_call_site_dynamics_3_p_0(var_use_analysis__Deep_19, var_use_analysis__CSDPtr_11, &var_use_analysis__CSD_22);
        }
        var_use_analysis__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__CSD_22, (MR_Integer) 0)));
        var_use_analysis__CalleePDPtr_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__CSD_22, (MR_Integer) 1)));
        var_use_analysis__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__CSD_22, (MR_Integer) 2)));
        {
          var_use_analysis__succeeded = var_use_analysis__intermodule_var_use_should_follow_csd_2_p_0(var_use_analysis__VarUseOptions_17, var_use_analysis__CSDPtr_11);
        }
        var_use_analysis__succeeded = !(var_use_analysis__succeeded);
        if (var_use_analysis__succeeded)
          {
            MR_Word var_use_analysis__VarUseInfo_24;
            MR_Word var_use_analysis__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_17, (MR_Integer) 2)));
            MR_Float var_use_analysis__CostUntilUse_72;
            MR_Word var_use_analysis__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_17, (MR_Integer) 0)));
            MR_Word var_use_analysis__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_17, (MR_Integer) 1)));

            switch (var_use_analysis__Var_45) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                var_use_analysis__CostUntilUse_72 = (MR_Float) 0.0000000000000000;
                break;
              case (MR_Integer) 2:
              case (MR_Integer) 0:
                var_use_analysis__CostUntilUse_72 = var_use_analysis__Cost_15;
                break;
            }
            {
              var_use_analysis__VarUseInfo_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), var_use_analysis__VarUseInfo_24, 0) = MR_box_float(var_use_analysis__CostUntilUse_72);
              MR_hl_field(MR_mktag(0), var_use_analysis__VarUseInfo_24, 1) = MR_box_float(var_use_analysis__Cost_15);
              MR_hl_field(MR_mktag(0), var_use_analysis__VarUseInfo_24, 2) = ((MR_Box) (var_use_analysis__Var_45));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *var_use_analysis__MaybeVarUseInfo_18 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (var_use_analysis__VarUseInfo_24));
            }
          }
        else
          {
            {
              var_use_analysis__succeeded = mercury__set__member_2_p_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0, ((MR_Box) (var_use_analysis__CalleePDPtr_23)), var_use_analysis__CallStack0_16);
            }
            if (var_use_analysis__succeeded)
              {
                MR_Word var_use_analysis__Var_46;
                MR_Word var_use_analysis__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_17, (MR_Integer) 2)));
                MR_Word var_use_analysis__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_17, (MR_Integer) 0)));
                MR_Word var_use_analysis__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_17, (MR_Integer) 1)));

                {
                  var_use_analysis__Var_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), var_use_analysis__Var_46, 0) = MR_box_float((MR_Float) 1.0000000000000000);
                  MR_hl_field(MR_mktag(0), var_use_analysis__Var_46, 1) = MR_box_float(var_use_analysis__Cost_15);
                  MR_hl_field(MR_mktag(0), var_use_analysis__Var_46, 2) = ((MR_Box) (var_use_analysis__Var_48));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  *var_use_analysis__MaybeVarUseInfo_18 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (var_use_analysis__Var_46));
                }
              }
            else
            if ((var_use_analysis__MaybeDepth_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                *var_use_analysis__MaybeVarUseInfo_18 = (MR_Word) MR_mkword(MR_mktag(1), &var_use_analysis_scalar_common_5[1]);
              }
            else
              {
                MR_Word var_use_analysis__Depth0_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__MaybeDepth_14, (MR_Integer) 0)));
                MR_Word var_use_analysis__Depth_26;

                {
                  measurements__recursion_depth_descend_2_p_0(var_use_analysis__Depth0_25, &var_use_analysis__Depth_26);
                }
                switch (MR_tag((MR_Word) var_use_analysis__RecursionType_13)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word var_use_analysis__CallStack_32;
                      MR_Word var_use_analysis__MaybeVarUseInfo0_33;

                      {
                        mercury__set__insert_3_p_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0, ((MR_Box) (var_use_analysis__CalleePDPtr_23)), var_use_analysis__CallStack0_16, &var_use_analysis__CallStack_32);
                      }
                      {
                        var_use_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_99_117_114_115_105_118_101_95_118_97_114_95_117_115_101_95_105_110_102_111_95_95_91_54_93_95_48_9_p_0(var_use_analysis__ParentCliquePtr_10, var_use_analysis__CalleePDPtr_23, var_use_analysis__ArgNum_12, var_use_analysis__RecursionType_13, var_use_analysis__Depth_26, var_use_analysis__CallStack_32, var_use_analysis__VarUseOptions_17, &var_use_analysis__MaybeVarUseInfo0_33);
                      }
                      if (((MR_tag((MR_Word) var_use_analysis__MaybeVarUseInfo0_33)) == (MR_mktag((MR_Integer) 1))))
                        *var_use_analysis__MaybeVarUseInfo_18 = var_use_analysis__MaybeVarUseInfo0_33;
                      else
                        {
                          MR_Float var_use_analysis__UseTime0_34;
                          MR_Float var_use_analysis__ProcTime0_35;
                          MR_Word var_use_analysis__UseType_36;
                          MR_Float var_use_analysis__UseTime_37;
                          MR_Float var_use_analysis__ProcTime_38;
                          MR_Word var_use_analysis__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__MaybeVarUseInfo0_33, (MR_Integer) 0)));
                          MR_Word var_use_analysis__Var_58;

                          var_use_analysis__UseTime0_34 = MR_unbox_float((MR_hl_field(MR_mktag(0), var_use_analysis__Var_55, (MR_Integer) 0)));
                          var_use_analysis__ProcTime0_35 = MR_unbox_float((MR_hl_field(MR_mktag(0), var_use_analysis__Var_55, (MR_Integer) 1)));
                          var_use_analysis__UseType_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Var_55, (MR_Integer) 2)));
                          var_use_analysis__UseTime_37 = (var_use_analysis__UseTime0_34 + ((MR_Float) 1.0000000000000000));
                          var_use_analysis__ProcTime_38 = (var_use_analysis__ProcTime0_35 + ((MR_Float) 1.0000000000000000));
                          {
                            var_use_analysis__Var_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), var_use_analysis__Var_58, 0) = MR_box_float(var_use_analysis__UseTime_37);
                            MR_hl_field(MR_mktag(0), var_use_analysis__Var_58, 1) = MR_box_float(var_use_analysis__ProcTime_38);
                            MR_hl_field(MR_mktag(0), var_use_analysis__Var_58, 2) = ((MR_Box) (var_use_analysis__UseType_36));
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                            *var_use_analysis__MaybeVarUseInfo_18 = base;
                            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (var_use_analysis__Var_58));
                          }
                        }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word var_use_analysis__CallStack_32;
                      MR_Word var_use_analysis__MaybeVarUseInfo0_33;

                      {
                        mercury__set__insert_3_p_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0, ((MR_Box) (var_use_analysis__CalleePDPtr_23)), var_use_analysis__CallStack0_16, &var_use_analysis__CallStack_32);
                      }
                      {
                        var_use_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_99_117_114_115_105_118_101_95_118_97_114_95_117_115_101_95_105_110_102_111_95_95_91_54_93_95_48_9_p_0(var_use_analysis__ParentCliquePtr_10, var_use_analysis__CalleePDPtr_23, var_use_analysis__ArgNum_12, var_use_analysis__RecursionType_13, var_use_analysis__Depth_26, var_use_analysis__CallStack_32, var_use_analysis__VarUseOptions_17, &var_use_analysis__MaybeVarUseInfo0_33);
                      }
                      if (((MR_tag((MR_Word) var_use_analysis__MaybeVarUseInfo0_33)) == (MR_mktag((MR_Integer) 1))))
                        *var_use_analysis__MaybeVarUseInfo_18 = var_use_analysis__MaybeVarUseInfo0_33;
                      else
                        {
                          MR_Float var_use_analysis__UseTime0_34;
                          MR_Float var_use_analysis__ProcTime0_35;
                          MR_Word var_use_analysis__UseType_36;
                          MR_Float var_use_analysis__UseTime_37;
                          MR_Float var_use_analysis__ProcTime_38;
                          MR_Word var_use_analysis__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__MaybeVarUseInfo0_33, (MR_Integer) 0)));
                          MR_Word var_use_analysis__Var_58;

                          var_use_analysis__UseTime0_34 = MR_unbox_float((MR_hl_field(MR_mktag(0), var_use_analysis__Var_55, (MR_Integer) 0)));
                          var_use_analysis__ProcTime0_35 = MR_unbox_float((MR_hl_field(MR_mktag(0), var_use_analysis__Var_55, (MR_Integer) 1)));
                          var_use_analysis__UseType_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Var_55, (MR_Integer) 2)));
                          var_use_analysis__UseTime_37 = (var_use_analysis__UseTime0_34 + ((MR_Float) 1.0000000000000000));
                          var_use_analysis__ProcTime_38 = (var_use_analysis__ProcTime0_35 + ((MR_Float) 1.0000000000000000));
                          {
                            var_use_analysis__Var_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), var_use_analysis__Var_58, 0) = MR_box_float(var_use_analysis__UseTime_37);
                            MR_hl_field(MR_mktag(0), var_use_analysis__Var_58, 1) = MR_box_float(var_use_analysis__ProcTime_38);
                            MR_hl_field(MR_mktag(0), var_use_analysis__Var_58, 2) = ((MR_Box) (var_use_analysis__UseType_36));
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                            *var_use_analysis__MaybeVarUseInfo_18 = base;
                            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (var_use_analysis__Var_58));
                          }
                        }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      *var_use_analysis__MaybeVarUseInfo_18 = (MR_Word) MR_mkword(MR_mktag(1), &var_use_analysis_scalar_common_5[2]);
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      *var_use_analysis__MaybeVarUseInfo_18 = (MR_Word) MR_mkword(MR_mktag(1), &var_use_analysis_scalar_common_5[2]);
                    }
                    break;
                }
              }
          }
      }
    else
      {
        MR_Word var_use_analysis__CalleeCliquePtr_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__MaybeCalleeCliquePtr_20, (MR_Integer) 0)));

        {
          var_use_analysis__clique_var_use_info_4_p_0(var_use_analysis__CalleeCliquePtr_21, var_use_analysis__ArgNum_12, var_use_analysis__VarUseOptions_17, var_use_analysis__MaybeVarUseInfo_18);
        }
      }
  }
}

void MR_CALL 
var_use_analysis__get_call_site_dynamic_var_use_info_6_p_0(
  MR_Word var_use_analysis__CSDPtr_7,
  MR_Integer var_use_analysis__ArgNum_8,
  MR_Word var_use_analysis__RecursionType_9,
  MR_Float var_use_analysis__Cost_10,
  MR_Word var_use_analysis__VarUseOptions_11,
  MR_Word * var_use_analysis__MaybeVarUseInfo_12)
{
  {
    MR_bool var_use_analysis__succeeded;
    MR_Word var_use_analysis__Deep_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_11, (MR_Integer) 0)));
    MR_Word var_use_analysis__CSD_14;
    MR_Word var_use_analysis__ParentCliquePtr_15;
    MR_Word var_use_analysis__MaybeCurDepth_16;
    MR_Word var_use_analysis__Var_17;
    MR_Word var_use_analysis__Var_18;
    MR_Word var_use_analysis__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_11, (MR_Integer) 1)));
    MR_Word var_use_analysis__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_11, (MR_Integer) 2)));
    MR_Word var_use_analysis__Var_21;
    MR_Word var_use_analysis__Var_22;

    {
      profile__deep_lookup_call_site_dynamics_3_p_0(var_use_analysis__Deep_13, var_use_analysis__CSDPtr_7, &var_use_analysis__CSD_14);
    }
    var_use_analysis__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__CSD_14, (MR_Integer) 0)));
    var_use_analysis__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__CSD_14, (MR_Integer) 1)));
    var_use_analysis__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__CSD_14, (MR_Integer) 2)));
    {
      profile__deep_lookup_clique_index_3_p_0(var_use_analysis__Deep_13, var_use_analysis__Var_17, &var_use_analysis__ParentCliquePtr_15);
    }
    {
      recursion_patterns__recursion_type_get_maybe_avg_max_depth_2_p_0(var_use_analysis__RecursionType_9, &var_use_analysis__MaybeCurDepth_16);
    }
    {
      var_use_analysis__Var_18 = mercury__set__init_0_f_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0);
    }
    {
      var_use_analysis__get_call_site_dynamic_var_use_info_rec_level_9_p_0(var_use_analysis__ParentCliquePtr_15, var_use_analysis__CSDPtr_7, var_use_analysis__ArgNum_8, var_use_analysis__RecursionType_9, var_use_analysis__MaybeCurDepth_16, var_use_analysis__Cost_10, var_use_analysis__Var_18, var_use_analysis__VarUseOptions_11, var_use_analysis__MaybeVarUseInfo_12);
    }
  }
}

void MR_CALL 
var_use_analysis__get_call_site_dynamic_var_use_info_rec_level_9_p_0(
  MR_Word var_use_analysis__ParentCliquePtr_10,
  MR_Word var_use_analysis__CSDPtr_11,
  MR_Integer var_use_analysis__ArgNum_12,
  MR_Word var_use_analysis__RecursionType_13,
  MR_Word var_use_analysis__MaybeDepth_14,
  MR_Float var_use_analysis__Cost_15,
  MR_Word var_use_analysis__CallStack0_16,
  MR_Word var_use_analysis__VarUseOptions_17,
  MR_Word * var_use_analysis__MaybeVarUseInfo_18)
{
  {
    MR_bool var_use_analysis__succeeded;
    MR_Word var_use_analysis__Deep_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_17, (MR_Integer) 0)));
    MR_Word var_use_analysis__MaybeCalleeCliquePtr_20;
    MR_Word var_use_analysis__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_17, (MR_Integer) 1)));
    MR_Word var_use_analysis__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_17, (MR_Integer) 2)));

    {
      profile__deep_lookup_clique_maybe_child_3_p_0(var_use_analysis__Deep_19, var_use_analysis__CSDPtr_11, &var_use_analysis__MaybeCalleeCliquePtr_20);
    }
    if ((var_use_analysis__MaybeCalleeCliquePtr_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word var_use_analysis__CSD_22;
        MR_Word var_use_analysis__CalleePDPtr_23;
        MR_Word var_use_analysis__Var_61;
        MR_Word var_use_analysis__Var_62;

        {
          profile__deep_lookup_call_site_dynamics_3_p_0(var_use_analysis__Deep_19, var_use_analysis__CSDPtr_11, &var_use_analysis__CSD_22);
        }
        var_use_analysis__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__CSD_22, (MR_Integer) 0)));
        var_use_analysis__CalleePDPtr_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__CSD_22, (MR_Integer) 1)));
        var_use_analysis__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__CSD_22, (MR_Integer) 2)));
        {
          var_use_analysis__succeeded = var_use_analysis__intermodule_var_use_should_follow_csd_2_p_0(var_use_analysis__VarUseOptions_17, var_use_analysis__CSDPtr_11);
        }
        var_use_analysis__succeeded = !(var_use_analysis__succeeded);
        if (var_use_analysis__succeeded)
          {
            MR_Word var_use_analysis__VarUseInfo_24;
            MR_Word var_use_analysis__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_17, (MR_Integer) 2)));
            MR_Float var_use_analysis__CostUntilUse_72;
            MR_Word var_use_analysis__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_17, (MR_Integer) 0)));
            MR_Word var_use_analysis__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_17, (MR_Integer) 1)));

            switch (var_use_analysis__Var_45) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                var_use_analysis__CostUntilUse_72 = (MR_Float) 0.0000000000000000;
                break;
              case (MR_Integer) 2:
              case (MR_Integer) 0:
                var_use_analysis__CostUntilUse_72 = var_use_analysis__Cost_15;
                break;
            }
            {
              var_use_analysis__VarUseInfo_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), var_use_analysis__VarUseInfo_24, 0) = MR_box_float(var_use_analysis__CostUntilUse_72);
              MR_hl_field(MR_mktag(0), var_use_analysis__VarUseInfo_24, 1) = MR_box_float(var_use_analysis__Cost_15);
              MR_hl_field(MR_mktag(0), var_use_analysis__VarUseInfo_24, 2) = ((MR_Box) (var_use_analysis__Var_45));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *var_use_analysis__MaybeVarUseInfo_18 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (var_use_analysis__VarUseInfo_24));
            }
          }
        else
          {
            {
              var_use_analysis__succeeded = mercury__set__member_2_p_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0, ((MR_Box) (var_use_analysis__CalleePDPtr_23)), var_use_analysis__CallStack0_16);
            }
            if (var_use_analysis__succeeded)
              {
                MR_Word var_use_analysis__Var_46;
                MR_Word var_use_analysis__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_17, (MR_Integer) 2)));
                MR_Word var_use_analysis__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_17, (MR_Integer) 0)));
                MR_Word var_use_analysis__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_17, (MR_Integer) 1)));

                {
                  var_use_analysis__Var_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), var_use_analysis__Var_46, 0) = MR_box_float((MR_Float) 1.0000000000000000);
                  MR_hl_field(MR_mktag(0), var_use_analysis__Var_46, 1) = MR_box_float(var_use_analysis__Cost_15);
                  MR_hl_field(MR_mktag(0), var_use_analysis__Var_46, 2) = ((MR_Box) (var_use_analysis__Var_48));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  *var_use_analysis__MaybeVarUseInfo_18 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (var_use_analysis__Var_46));
                }
              }
            else
              {
                MR_Word var_use_analysis__Depth0_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__MaybeDepth_14, (MR_Integer) 0)));
                MR_Word var_use_analysis__Depth_26;
                MR_Word var_use_analysis__CallStack_32;
                MR_Word var_use_analysis__MaybeVarUseInfo0_33;

                {
                  measurements__recursion_depth_descend_2_p_0(var_use_analysis__Depth0_25, &var_use_analysis__Depth_26);
                }
                {
                  mercury__set__insert_3_p_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0, ((MR_Box) (var_use_analysis__CalleePDPtr_23)), var_use_analysis__CallStack0_16, &var_use_analysis__CallStack_32);
                }
                {
                  var_use_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_99_117_114_115_105_118_101_95_118_97_114_95_117_115_101_95_105_110_102_111_95_95_91_54_93_95_48_9_p_0(var_use_analysis__ParentCliquePtr_10, var_use_analysis__CalleePDPtr_23, var_use_analysis__ArgNum_12, var_use_analysis__RecursionType_13, var_use_analysis__Depth_26, var_use_analysis__CallStack_32, var_use_analysis__VarUseOptions_17, &var_use_analysis__MaybeVarUseInfo0_33);
                }
                if (((MR_tag((MR_Word) var_use_analysis__MaybeVarUseInfo0_33)) == (MR_mktag((MR_Integer) 1))))
                  *var_use_analysis__MaybeVarUseInfo_18 = var_use_analysis__MaybeVarUseInfo0_33;
                else
                  {
                    MR_Float var_use_analysis__UseTime0_34;
                    MR_Float var_use_analysis__ProcTime0_35;
                    MR_Word var_use_analysis__UseType_36;
                    MR_Float var_use_analysis__UseTime_37;
                    MR_Float var_use_analysis__ProcTime_38;
                    MR_Word var_use_analysis__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__MaybeVarUseInfo0_33, (MR_Integer) 0)));
                    MR_Word var_use_analysis__Var_58;

                    var_use_analysis__UseTime0_34 = MR_unbox_float((MR_hl_field(MR_mktag(0), var_use_analysis__Var_55, (MR_Integer) 0)));
                    var_use_analysis__ProcTime0_35 = MR_unbox_float((MR_hl_field(MR_mktag(0), var_use_analysis__Var_55, (MR_Integer) 1)));
                    var_use_analysis__UseType_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Var_55, (MR_Integer) 2)));
                    var_use_analysis__UseTime_37 = (var_use_analysis__UseTime0_34 + ((MR_Float) 1.0000000000000000));
                    var_use_analysis__ProcTime_38 = (var_use_analysis__ProcTime0_35 + ((MR_Float) 1.0000000000000000));
                    {
                      var_use_analysis__Var_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), var_use_analysis__Var_58, 0) = MR_box_float(var_use_analysis__UseTime_37);
                      MR_hl_field(MR_mktag(0), var_use_analysis__Var_58, 1) = MR_box_float(var_use_analysis__ProcTime_38);
                      MR_hl_field(MR_mktag(0), var_use_analysis__Var_58, 2) = ((MR_Box) (var_use_analysis__UseType_36));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                      *var_use_analysis__MaybeVarUseInfo_18 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (var_use_analysis__Var_58));
                    }
                  }
              }
          }
      }
    else
      {
        MR_Word var_use_analysis__CalleeCliquePtr_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__MaybeCalleeCliquePtr_20, (MR_Integer) 0)));

        {
          var_use_analysis__clique_var_use_info_4_p_0(var_use_analysis__CalleeCliquePtr_21, var_use_analysis__ArgNum_12, var_use_analysis__VarUseOptions_17, var_use_analysis__MaybeVarUseInfo_18);
        }
      }
  }
}

void MR_CALL 
var_use_analysis__clique_var_use_info_4_p_0(
  MR_Word var_use_analysis__CliquePtr_5,
  MR_Integer var_use_analysis__ArgNum_6,
  MR_Word var_use_analysis__VarUseOptions_7,
  MR_Word * var_use_analysis__MaybeVarUseInfo_8)
{
  {
    MR_bool var_use_analysis__succeeded;
    MR_Word var_use_analysis__Deep_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_7, (MR_Integer) 0)));
    MR_Word var_use_analysis__CSDPtr_10;
    MR_Word var_use_analysis__CSDDesc_11;
    MR_Float var_use_analysis__Cost_12;
    MR_Word var_use_analysis__MaybeFirstProc_13;
    MR_Integer var_use_analysis__Var_40;
    MR_Word var_use_analysis__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_7, (MR_Integer) 1)));
    MR_Word var_use_analysis__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_7, (MR_Integer) 2)));
    MR_Word var_use_analysis___OtherProcs_14;

    {
      profile__deep_lookup_clique_parents_3_p_0(var_use_analysis__Deep_9, var_use_analysis__CliquePtr_5, &var_use_analysis__CSDPtr_10);
    }
    {
      profile__deep_lookup_csd_desc_3_p_0(var_use_analysis__Deep_9, var_use_analysis__CSDPtr_10, &var_use_analysis__CSDDesc_11);
    }
    {
      var_use_analysis__Var_40 = measurements__inherit_callseqs_1_f_0(var_use_analysis__CSDDesc_11);
    }
    {
      var_use_analysis__Cost_12 = mercury__float__float_1_f_0(var_use_analysis__Var_40);
    }
    {
      analysis_utils__find_clique_first_and_other_procs_4_p_0(var_use_analysis__Deep_9, var_use_analysis__CliquePtr_5, &var_use_analysis__MaybeFirstProc_13, &var_use_analysis___OtherProcs_14);
    }
    if ((var_use_analysis__MaybeFirstProc_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "var_use_analysis", (MR_String) "predicate \140var_use_analysis.clique_var_use_info\'/4", (MR_String) "clique has no first procedure");
          return;
        }
      }
    else
      {
        MR_Word var_use_analysis__FirstPDPtr_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__MaybeFirstProc_13, (MR_Integer) 0)));
        MR_Word var_use_analysis__VarUseType_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_7, (MR_Integer) 2)));
        MR_Word var_use_analysis__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_7, (MR_Integer) 0)));
        MR_Word var_use_analysis__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_7, (MR_Integer) 1)));

        {
          var_use_analysis__succeeded = var_use_analysis__intermodule_var_use_should_follow_csd_2_p_0(var_use_analysis__VarUseOptions_7, var_use_analysis__CSDPtr_10);
        }
        if (var_use_analysis__succeeded)
          {
            MR_Word var_use_analysis__MaybeRecursionReport_17;

            {
              recursion_patterns__create_clique_recursion_costs_report_3_p_0(var_use_analysis__Deep_9, var_use_analysis__CliquePtr_5, &var_use_analysis__MaybeRecursionReport_17);
            }
            if (((MR_tag((MR_Word) var_use_analysis__MaybeRecursionReport_17)) == (MR_mktag((MR_Integer) 1))))
              {
                MR_Word var_use_analysis__VarUseInfo_39;

                {
                  var_use_analysis__pessimistic_var_use_info_3_p_0(var_use_analysis__VarUseType_16, var_use_analysis__Cost_12, &var_use_analysis__VarUseInfo_39);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  *var_use_analysis__MaybeVarUseInfo_8 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (var_use_analysis__VarUseInfo_39));
                }
              }
            else
              {
                MR_Word var_use_analysis__RecursionReport_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__MaybeRecursionReport_17, (MR_Integer) 0)));
                MR_Word var_use_analysis__RecursionType_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__RecursionReport_18, (MR_Integer) 1)));
                MR_Word var_use_analysis__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__RecursionReport_18, (MR_Integer) 0)));
                MR_Integer var_use_analysis__Var_63 = ((MR_Integer) (MR_hl_field(MR_mktag(0), var_use_analysis__RecursionReport_18, (MR_Integer) 2)));

                switch (MR_tag((MR_Word) var_use_analysis__RecursionType_100)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word var_use_analysis__Depth_21;
                      MR_Word var_use_analysis__MaybeVarUseInfo0_22;
                      MR_Word var_use_analysis__Var_50;
                      MR_Word var_use_analysis__Var_51;

                      {
                        recursion_patterns__recursion_type_get_maybe_avg_max_depth_2_p_0(var_use_analysis__RecursionType_100, &var_use_analysis__Var_50);
                      }
                      var_use_analysis__Depth_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__Var_50, (MR_Integer) 0)));
                      {
                        var_use_analysis__Var_51 = mercury__set__init_0_f_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0);
                      }
                      {
                        var_use_analysis__proc_dynamic_var_use_info_9_p_0(var_use_analysis__CliquePtr_5, var_use_analysis__FirstPDPtr_15, var_use_analysis__ArgNum_6, var_use_analysis__RecursionType_100, var_use_analysis__Depth_21, var_use_analysis__Cost_12, var_use_analysis__Var_51, var_use_analysis__VarUseOptions_7, &var_use_analysis__MaybeVarUseInfo0_22);
                      }
                      if (((MR_tag((MR_Word) var_use_analysis__MaybeVarUseInfo0_22)) == (MR_mktag((MR_Integer) 1))))
                        *var_use_analysis__MaybeVarUseInfo_8 = var_use_analysis__MaybeVarUseInfo0_22;
                      else
                        {
                          MR_Float var_use_analysis__UseTime0_28;
                          MR_Float var_use_analysis__ProcTime0_29;
                          MR_Word var_use_analysis__UseType_30;
                          MR_Float var_use_analysis__UseTime_31;
                          MR_Float var_use_analysis__ProcTime_32;
                          MR_Word var_use_analysis__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__MaybeVarUseInfo0_22, (MR_Integer) 0)));
                          MR_Word var_use_analysis__Var_55;

                          var_use_analysis__UseTime0_28 = MR_unbox_float((MR_hl_field(MR_mktag(0), var_use_analysis__Var_52, (MR_Integer) 0)));
                          var_use_analysis__ProcTime0_29 = MR_unbox_float((MR_hl_field(MR_mktag(0), var_use_analysis__Var_52, (MR_Integer) 1)));
                          var_use_analysis__UseType_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Var_52, (MR_Integer) 2)));
                          var_use_analysis__UseTime_31 = (var_use_analysis__UseTime0_28 + ((MR_Float) 1.0000000000000000));
                          var_use_analysis__ProcTime_32 = (var_use_analysis__ProcTime0_29 + ((MR_Float) 1.0000000000000000));
                          {
                            var_use_analysis__Var_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), var_use_analysis__Var_55, 0) = MR_box_float(var_use_analysis__UseTime_31);
                            MR_hl_field(MR_mktag(0), var_use_analysis__Var_55, 1) = MR_box_float(var_use_analysis__ProcTime_32);
                            MR_hl_field(MR_mktag(0), var_use_analysis__Var_55, 2) = ((MR_Box) (var_use_analysis__UseType_30));
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                            *var_use_analysis__MaybeVarUseInfo_8 = base;
                            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (var_use_analysis__Var_55));
                          }
                        }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word var_use_analysis__Var_46;
                      MR_Word var_use_analysis__Var_47;
                      MR_Word var_use_analysis__Var_48;
                      MR_Word var_use_analysis__Depth_56;
                      MR_Word var_use_analysis__MaybeVarUseInfo0_87;

                      {
                        recursion_patterns__recursion_type_get_maybe_avg_max_depth_2_p_0(var_use_analysis__RecursionType_100, &var_use_analysis__Var_46);
                      }
                      var_use_analysis__Depth_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__Var_46, (MR_Integer) 0)));
                      {
                        var_use_analysis__Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), var_use_analysis__Var_48, 0) = ((MR_Box) (var_use_analysis__FirstPDPtr_15));
                        MR_hl_field(MR_mktag(1), var_use_analysis__Var_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                      {
                        var_use_analysis__Var_47 = mercury__set__set_1_f_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0, var_use_analysis__Var_48);
                      }
                      {
                        var_use_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_99_117_114_115_105_118_101_95_118_97_114_95_117_115_101_95_105_110_102_111_95_95_91_54_93_95_48_9_p_0(var_use_analysis__CliquePtr_5, var_use_analysis__FirstPDPtr_15, var_use_analysis__ArgNum_6, var_use_analysis__RecursionType_100, var_use_analysis__Depth_56, var_use_analysis__Var_47, var_use_analysis__VarUseOptions_7, &var_use_analysis__MaybeVarUseInfo0_87);
                      }
                      if (((MR_tag((MR_Word) var_use_analysis__MaybeVarUseInfo0_87)) == (MR_mktag((MR_Integer) 1))))
                        *var_use_analysis__MaybeVarUseInfo_8 = var_use_analysis__MaybeVarUseInfo0_87;
                      else
                        {
                          MR_Float var_use_analysis__UseTime0_68;
                          MR_Float var_use_analysis__ProcTime0_69;
                          MR_Word var_use_analysis__UseType_70;
                          MR_Float var_use_analysis__UseTime_71;
                          MR_Float var_use_analysis__ProcTime_72;
                          MR_Word var_use_analysis__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__MaybeVarUseInfo0_87, (MR_Integer) 0)));
                          MR_Word var_use_analysis__Var_76;

                          var_use_analysis__UseTime0_68 = MR_unbox_float((MR_hl_field(MR_mktag(0), var_use_analysis__Var_73, (MR_Integer) 0)));
                          var_use_analysis__ProcTime0_69 = MR_unbox_float((MR_hl_field(MR_mktag(0), var_use_analysis__Var_73, (MR_Integer) 1)));
                          var_use_analysis__UseType_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Var_73, (MR_Integer) 2)));
                          var_use_analysis__UseTime_71 = (var_use_analysis__UseTime0_68 + ((MR_Float) 1.0000000000000000));
                          var_use_analysis__ProcTime_72 = (var_use_analysis__ProcTime0_69 + ((MR_Float) 1.0000000000000000));
                          {
                            var_use_analysis__Var_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), var_use_analysis__Var_76, 0) = MR_box_float(var_use_analysis__UseTime_71);
                            MR_hl_field(MR_mktag(0), var_use_analysis__Var_76, 1) = MR_box_float(var_use_analysis__ProcTime_72);
                            MR_hl_field(MR_mktag(0), var_use_analysis__Var_76, 2) = ((MR_Box) (var_use_analysis__UseType_70));
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                            *var_use_analysis__MaybeVarUseInfo_8 = base;
                            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (var_use_analysis__Var_76));
                          }
                        }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word var_use_analysis__VarUseInfo_98;

                      {
                        var_use_analysis__pessimistic_var_use_info_3_p_0(var_use_analysis__VarUseType_16, var_use_analysis__Cost_12, &var_use_analysis__VarUseInfo_98);
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                        *var_use_analysis__MaybeVarUseInfo_8 = base;
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (var_use_analysis__VarUseInfo_98));
                      }
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      MR_Word var_use_analysis__VarUseInfo_98;

                      {
                        var_use_analysis__pessimistic_var_use_info_3_p_0(var_use_analysis__VarUseType_16, var_use_analysis__Cost_12, &var_use_analysis__VarUseInfo_98);
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                        *var_use_analysis__MaybeVarUseInfo_8 = base;
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (var_use_analysis__VarUseInfo_98));
                      }
                    }
                    break;
                }
              }
          }
        else
          {
            MR_Word var_use_analysis__VarUseInfo_57;

            {
              var_use_analysis__pessimistic_var_use_info_3_p_0(var_use_analysis__VarUseType_16, var_use_analysis__Cost_12, &var_use_analysis__VarUseInfo_57);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *var_use_analysis__MaybeVarUseInfo_8 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (var_use_analysis__VarUseInfo_57));
            }
          }
      }
  }
}

static void MR_CALL 
var_use_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_99_117_114_115_105_118_101_95_118_97_114_95_117_115_101_95_105_110_102_111_95_95_91_54_93_95_48_9_p_0(
  MR_Word var_use_analysis__CliquePtr_10,
  MR_Word var_use_analysis__PDPtr_11,
  MR_Integer var_use_analysis__ArgNum_12,
  MR_Word var_use_analysis__RecursionType_13,
  MR_Word var_use_analysis__Depth_14,
  MR_Word var_use_analysis__CallStack_16,
  MR_Word var_use_analysis__VarUseOptions_17,
  MR_Word * var_use_analysis__MaybeVarUseInfo_18)
{
  {
    MR_bool var_use_analysis__succeeded;
    MR_Word var_use_analysis__Info_19;

    {
      var_use_analysis__prepare_for_proc_var_first_use_7_p_0(var_use_analysis__CliquePtr_10, var_use_analysis__PDPtr_11, var_use_analysis__ArgNum_12, var_use_analysis__RecursionType_13, var_use_analysis__Depth_14, var_use_analysis__VarUseOptions_17, &var_use_analysis__Info_19);
    }
    if (((MR_tag((MR_Word) var_use_analysis__Info_19)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_String var_use_analysis__Error_45 = ((MR_String) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_19, (MR_Integer) 0)));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *var_use_analysis__MaybeVarUseInfo_18 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (var_use_analysis__Error_45));
        }
      }
    else
      {
        MR_Word var_use_analysis__Goal_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__Info_19, (MR_Integer) 0)));
        MR_Word var_use_analysis__LastGoalId_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__Info_19, (MR_Integer) 1)));
        MR_Word var_use_analysis__ContainingGoalMap_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__Info_19, (MR_Integer) 2)));
        MR_Word var_use_analysis__CoverageArray_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__Info_19, (MR_Integer) 3)));
        MR_Word var_use_analysis__CallSiteCostMap_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__Info_19, (MR_Integer) 4)));
        MR_Word var_use_analysis__RecursiveCallSiteCostMap_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__Info_19, (MR_Integer) 5)));
        MR_Integer var_use_analysis__Var_26 = ((MR_Integer) (MR_hl_field(MR_mktag(1), var_use_analysis__Info_19, (MR_Integer) 6)));
        MR_Word var_use_analysis__VarUseInfo_27;
        MR_Word var_use_analysis__RecProbsArray0_28;
        MR_Word var_use_analysis__RecursiveCalls_29;
        MR_Float var_use_analysis__RecProb_30;
        MR_Word var_use_analysis__RecProbsArray_31;
        MR_Word var_use_analysis__VarFirstUseInfoRecCase_32;
        MR_Word var_use_analysis__RecFoundFirstUse_33;
        MR_Float var_use_analysis__RecTotalTime_34;
        MR_Word var_use_analysis__VarFirstUseInfoBaseCase_35;
        MR_Word var_use_analysis__BaseFoundFirstUse_36;
        MR_Float var_use_analysis__BaseTotalTime_37;
        MR_Word var_use_analysis__VarUseType_38;
        MR_Float var_use_analysis__VarUseTimeRec_39;
        MR_Float var_use_analysis__VarUseTimeBase_40;
        MR_Float var_use_analysis__DepthF_41;
        MR_Float var_use_analysis__VarUseTime_42;
        MR_Float var_use_analysis__Cost_43;
        MR_Float var_use_analysis__Var_47;
        MR_Word var_use_analysis__Var_48;
        MR_Word var_use_analysis__Var_51;
        MR_Float var_use_analysis__Var_54;
        MR_Float var_use_analysis__Var_55;
        MR_Float var_use_analysis__Var_56;
        MR_Float var_use_analysis__Var_57;
        MR_Float var_use_analysis__Var_58;
        MR_Float var_use_analysis__Var_59;
        MR_Word var_use_analysis__Var_60;
        MR_Word var_use_analysis__Var_61;
        MR_Word var_use_analysis__Var_79;
        MR_Word var_use_analysis__Var_80;
        MR_Word var_use_analysis__Var_81;
        MR_Word var_use_analysis__Var_82;
        MR_Word var_use_analysis__Var_83;
        MR_Integer var_use_analysis__Var_84;
        MR_Word var_use_analysis__Var_85;
        MR_Word var_use_analysis__Var_86;
        MR_Word var_use_analysis__Var_87;
        MR_Word var_use_analysis__Var_88;
        MR_Word var_use_analysis__Var_89;
        MR_Word var_use_analysis__Var_90;
        MR_Word var_use_analysis__Var_91;
        MR_Word var_use_analysis__Var_92;
        MR_Word var_use_analysis__Var_93;
        MR_Word var_use_analysis__Var_94;
        MR_Integer var_use_analysis__Var_95;
        MR_Word var_use_analysis__Var_96;
        MR_Word var_use_analysis__Var_97;
        MR_Word var_use_analysis__Var_98;
        MR_Word var_use_analysis__Var_99;
        MR_Word var_use_analysis__Var_100;
        MR_Word var_use_analysis__Var_101;
        MR_Word var_use_analysis__Var_102;
        MR_Word var_use_analysis__Var_103;
        MR_Word var_use_analysis__Var_104;

        {
          var_use_analysis__VarUseInfo_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), var_use_analysis__VarUseInfo_27, 0) = ((MR_Box) (var_use_analysis__CliquePtr_10));
          MR_hl_field(MR_mktag(0), var_use_analysis__VarUseInfo_27, 1) = ((MR_Box) (var_use_analysis__CallSiteCostMap_24));
          MR_hl_field(MR_mktag(0), var_use_analysis__VarUseInfo_27, 2) = ((MR_Box) (var_use_analysis__RecursiveCallSiteCostMap_25));
          MR_hl_field(MR_mktag(0), var_use_analysis__VarUseInfo_27, 3) = ((MR_Box) (var_use_analysis__ContainingGoalMap_22));
          MR_hl_field(MR_mktag(0), var_use_analysis__VarUseInfo_27, 4) = ((MR_Box) (var_use_analysis__CoverageArray_23));
          MR_hl_field(MR_mktag(0), var_use_analysis__VarUseInfo_27, 5) = ((MR_Box) (var_use_analysis__Var_26));
          MR_hl_field(MR_mktag(0), var_use_analysis__VarUseInfo_27, 6) = ((MR_Box) (var_use_analysis__VarUseOptions_17));
          MR_hl_field(MR_mktag(0), var_use_analysis__VarUseInfo_27, 7) = ((MR_Box) (var_use_analysis__CallStack_16));
          MR_hl_field(MR_mktag(0), var_use_analysis__VarUseInfo_27, 8) = ((MR_Box) (var_use_analysis__RecursionType_13));
          MR_hl_field(MR_mktag(0), var_use_analysis__VarUseInfo_27, 9) = ((MR_Box) (var_use_analysis__Depth_14));
          MR_hl_field(MR_mktag(0), var_use_analysis__VarUseInfo_27, 10) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          var_use_analysis__Var_47 = measurement_units__impossible_0_f_0();
        }
        {
          var_use_analysis__RecProbsArray0_28 = mdbcomp__goal_path__create_goal_id_array_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0, var_use_analysis__LastGoalId_21, MR_box_float(var_use_analysis__Var_47));
        }
        {
          var_use_analysis__build_recursive_call_sites_list_2_p_0(var_use_analysis__RecursiveCallSiteCostMap_25, &var_use_analysis__RecursiveCalls_29);
        }
        {
          var_use_analysis__goal_rec_prob_6_p_0(var_use_analysis__Goal_20, var_use_analysis__RecursiveCalls_29, var_use_analysis__VarUseInfo_27, &var_use_analysis__RecProb_30, var_use_analysis__RecProbsArray0_28, &var_use_analysis__RecProbsArray_31);
        }
        {
          var_use_analysis__Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), var_use_analysis__Var_48, 0) = ((MR_Box) (var_use_analysis__RecProbsArray_31));
          MR_hl_field(MR_mktag(1), var_use_analysis__Var_48, 1) = ((MR_Box) ((MR_Integer) 0));
        }
        var_use_analysis__Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseInfo_27, (MR_Integer) 0)));
        var_use_analysis__Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseInfo_27, (MR_Integer) 1)));
        var_use_analysis__Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseInfo_27, (MR_Integer) 2)));
        var_use_analysis__Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseInfo_27, (MR_Integer) 3)));
        var_use_analysis__Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseInfo_27, (MR_Integer) 4)));
        var_use_analysis__Var_84 = ((MR_Integer) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseInfo_27, (MR_Integer) 5)));
        var_use_analysis__Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseInfo_27, (MR_Integer) 6)));
        var_use_analysis__Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseInfo_27, (MR_Integer) 7)));
        var_use_analysis__Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseInfo_27, (MR_Integer) 8)));
        var_use_analysis__Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseInfo_27, (MR_Integer) 9)));
        var_use_analysis__Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseInfo_27, (MR_Integer) 10)));
        {
          var_use_analysis__VarFirstUseInfoRecCase_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), var_use_analysis__VarFirstUseInfoRecCase_32, 0) = ((MR_Box) (var_use_analysis__Var_79));
          MR_hl_field(MR_mktag(0), var_use_analysis__VarFirstUseInfoRecCase_32, 1) = ((MR_Box) (var_use_analysis__Var_80));
          MR_hl_field(MR_mktag(0), var_use_analysis__VarFirstUseInfoRecCase_32, 2) = ((MR_Box) (var_use_analysis__Var_81));
          MR_hl_field(MR_mktag(0), var_use_analysis__VarFirstUseInfoRecCase_32, 3) = ((MR_Box) (var_use_analysis__Var_82));
          MR_hl_field(MR_mktag(0), var_use_analysis__VarFirstUseInfoRecCase_32, 4) = ((MR_Box) (var_use_analysis__Var_83));
          MR_hl_field(MR_mktag(0), var_use_analysis__VarFirstUseInfoRecCase_32, 5) = ((MR_Box) (var_use_analysis__Var_84));
          MR_hl_field(MR_mktag(0), var_use_analysis__VarFirstUseInfoRecCase_32, 6) = ((MR_Box) (var_use_analysis__Var_85));
          MR_hl_field(MR_mktag(0), var_use_analysis__VarFirstUseInfoRecCase_32, 7) = ((MR_Box) (var_use_analysis__Var_86));
          MR_hl_field(MR_mktag(0), var_use_analysis__VarFirstUseInfoRecCase_32, 8) = ((MR_Box) (var_use_analysis__Var_87));
          MR_hl_field(MR_mktag(0), var_use_analysis__VarFirstUseInfoRecCase_32, 9) = ((MR_Box) (var_use_analysis__Var_88));
          MR_hl_field(MR_mktag(0), var_use_analysis__VarFirstUseInfoRecCase_32, 10) = ((MR_Box) (var_use_analysis__Var_48));
        }
        {
          var_use_analysis__rec_goal_var_first_use_6_p_0(var_use_analysis__Goal_20, var_use_analysis__RecursiveCalls_29, var_use_analysis__VarFirstUseInfoRecCase_32, &var_use_analysis__RecFoundFirstUse_33, (MR_Float) 0.0000000000000000, &var_use_analysis__RecTotalTime_34);
        }
        {
          var_use_analysis__Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), var_use_analysis__Var_51, 0) = ((MR_Box) (var_use_analysis__RecProbsArray_31));
          MR_hl_field(MR_mktag(1), var_use_analysis__Var_51, 1) = ((MR_Box) ((MR_Integer) 1));
        }
        var_use_analysis__Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseInfo_27, (MR_Integer) 0)));
        var_use_analysis__Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseInfo_27, (MR_Integer) 1)));
        var_use_analysis__Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseInfo_27, (MR_Integer) 2)));
        var_use_analysis__Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseInfo_27, (MR_Integer) 3)));
        var_use_analysis__Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseInfo_27, (MR_Integer) 4)));
        var_use_analysis__Var_95 = ((MR_Integer) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseInfo_27, (MR_Integer) 5)));
        var_use_analysis__Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseInfo_27, (MR_Integer) 6)));
        var_use_analysis__Var_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseInfo_27, (MR_Integer) 7)));
        var_use_analysis__Var_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseInfo_27, (MR_Integer) 8)));
        var_use_analysis__Var_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseInfo_27, (MR_Integer) 9)));
        var_use_analysis__Var_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseInfo_27, (MR_Integer) 10)));
        {
          var_use_analysis__VarFirstUseInfoBaseCase_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), var_use_analysis__VarFirstUseInfoBaseCase_35, 0) = ((MR_Box) (var_use_analysis__Var_90));
          MR_hl_field(MR_mktag(0), var_use_analysis__VarFirstUseInfoBaseCase_35, 1) = ((MR_Box) (var_use_analysis__Var_91));
          MR_hl_field(MR_mktag(0), var_use_analysis__VarFirstUseInfoBaseCase_35, 2) = ((MR_Box) (var_use_analysis__Var_92));
          MR_hl_field(MR_mktag(0), var_use_analysis__VarFirstUseInfoBaseCase_35, 3) = ((MR_Box) (var_use_analysis__Var_93));
          MR_hl_field(MR_mktag(0), var_use_analysis__VarFirstUseInfoBaseCase_35, 4) = ((MR_Box) (var_use_analysis__Var_94));
          MR_hl_field(MR_mktag(0), var_use_analysis__VarFirstUseInfoBaseCase_35, 5) = ((MR_Box) (var_use_analysis__Var_95));
          MR_hl_field(MR_mktag(0), var_use_analysis__VarFirstUseInfoBaseCase_35, 6) = ((MR_Box) (var_use_analysis__Var_96));
          MR_hl_field(MR_mktag(0), var_use_analysis__VarFirstUseInfoBaseCase_35, 7) = ((MR_Box) (var_use_analysis__Var_97));
          MR_hl_field(MR_mktag(0), var_use_analysis__VarFirstUseInfoBaseCase_35, 8) = ((MR_Box) (var_use_analysis__Var_98));
          MR_hl_field(MR_mktag(0), var_use_analysis__VarFirstUseInfoBaseCase_35, 9) = ((MR_Box) (var_use_analysis__Var_99));
          MR_hl_field(MR_mktag(0), var_use_analysis__VarFirstUseInfoBaseCase_35, 10) = ((MR_Box) (var_use_analysis__Var_51));
        }
        {
          var_use_analysis__rec_goal_var_first_use_6_p_0(var_use_analysis__Goal_20, var_use_analysis__RecursiveCalls_29, var_use_analysis__VarFirstUseInfoBaseCase_35, &var_use_analysis__BaseFoundFirstUse_36, (MR_Float) 0.0000000000000000, &var_use_analysis__BaseTotalTime_37);
        }
        var_use_analysis__Var_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_17, (MR_Integer) 0)));
        var_use_analysis__Var_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_17, (MR_Integer) 1)));
        var_use_analysis__VarUseType_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_17, (MR_Integer) 2)));
        if ((var_use_analysis__RecFoundFirstUse_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          switch (var_use_analysis__VarUseType_38) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              var_use_analysis__VarUseTimeRec_39 = (MR_Float) 0.0000000000000000;
              break;
            case (MR_Integer) 2:
            case (MR_Integer) 0:
              var_use_analysis__VarUseTimeRec_39 = var_use_analysis__RecTotalTime_34;
              break;
          }
        else
          var_use_analysis__VarUseTimeRec_39 = MR_unbox_float((MR_hl_field(MR_mktag(1), var_use_analysis__RecFoundFirstUse_33, (MR_Integer) 0)));
        if ((var_use_analysis__BaseFoundFirstUse_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          switch (var_use_analysis__VarUseType_38) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              var_use_analysis__VarUseTimeBase_40 = (MR_Float) 0.0000000000000000;
              break;
            case (MR_Integer) 2:
            case (MR_Integer) 0:
              var_use_analysis__VarUseTimeBase_40 = var_use_analysis__BaseTotalTime_37;
              break;
          }
        else
          var_use_analysis__VarUseTimeBase_40 = MR_unbox_float((MR_hl_field(MR_mktag(1), var_use_analysis__BaseFoundFirstUse_36, (MR_Integer) 0)));
        {
          var_use_analysis__DepthF_41 = measurements__recursion_depth_to_float_1_f_0(var_use_analysis__Depth_14);
        }
        var_use_analysis__Var_54 = (var_use_analysis__DepthF_41 * var_use_analysis__VarUseTimeRec_39);
        var_use_analysis__VarUseTime_42 = (var_use_analysis__VarUseTimeBase_40 + var_use_analysis__Var_54);
        {
          var_use_analysis__Var_56 = measurement_units__probability_to_float_1_f_0(var_use_analysis__RecProb_30);
        }
        var_use_analysis__Var_55 = (var_use_analysis__RecTotalTime_34 * var_use_analysis__Var_56);
        {
          var_use_analysis__Var_59 = measurement_units__not_probability_1_f_0(var_use_analysis__RecProb_30);
        }
        {
          var_use_analysis__Var_58 = measurement_units__probability_to_float_1_f_0(var_use_analysis__Var_59);
        }
        var_use_analysis__Var_57 = (var_use_analysis__BaseTotalTime_37 * var_use_analysis__Var_58);
        var_use_analysis__Cost_43 = (var_use_analysis__Var_55 + var_use_analysis__Var_57);
        var_use_analysis__Var_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_17, (MR_Integer) 0)));
        var_use_analysis__Var_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_17, (MR_Integer) 1)));
        var_use_analysis__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_17, (MR_Integer) 2)));
        {
          var_use_analysis__Var_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), var_use_analysis__Var_60, 0) = MR_box_float(var_use_analysis__VarUseTime_42);
          MR_hl_field(MR_mktag(0), var_use_analysis__Var_60, 1) = MR_box_float(var_use_analysis__Cost_43);
          MR_hl_field(MR_mktag(0), var_use_analysis__Var_60, 2) = ((MR_Box) (var_use_analysis__Var_61));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *var_use_analysis__MaybeVarUseInfo_18 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (var_use_analysis__Var_60));
        }
      }
  }
}

static MR_bool MR_CALL 
var_use_analysis__ite_rec_prob_8_p_0_2(
  MR_Box var_use_analysis__closure_arg,
  MR_Box var_use_analysis__wrapper_arg_1,
  MR_Box * var_use_analysis__wrapper_arg_2)
{
  {
    MR_bool var_use_analysis__succeeded;
    MR_Box var_use_analysis__closure = var_use_analysis__closure_arg;
    MR_Word var_use_analysis__conv1_LambdaHeadVar__2_14;

    {
      var_use_analysis__succeeded = var_use_analysis__IntroducedFrom__pred__filter_recursive_call_sites__1257__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__closure, (MR_Integer) 3))), ((MR_Word) var_use_analysis__wrapper_arg_1), &var_use_analysis__conv1_LambdaHeadVar__2_14);
    }
    if (var_use_analysis__succeeded)
      {
        *var_use_analysis__wrapper_arg_2 = ((MR_Box) (var_use_analysis__conv1_LambdaHeadVar__2_14));
        var_use_analysis__succeeded = MR_TRUE;
      }
    return var_use_analysis__succeeded;
  }
}

static MR_bool MR_CALL 
var_use_analysis__ite_rec_prob_8_p_0_1(
  MR_Box var_use_analysis__closure_arg,
  MR_Box var_use_analysis__wrapper_arg_1,
  MR_Box * var_use_analysis__wrapper_arg_2)
{
  {
    MR_bool var_use_analysis__succeeded;
    MR_Box var_use_analysis__closure = var_use_analysis__closure_arg;
    MR_Word var_use_analysis__conv0_LambdaHeadVar__2_14;

    {
      var_use_analysis__succeeded = var_use_analysis__IntroducedFrom__pred__filter_recursive_call_sites__1257__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__closure, (MR_Integer) 3))), ((MR_Word) var_use_analysis__wrapper_arg_1), &var_use_analysis__conv0_LambdaHeadVar__2_14);
    }
    if (var_use_analysis__succeeded)
      {
        *var_use_analysis__wrapper_arg_2 = ((MR_Box) (var_use_analysis__conv0_LambdaHeadVar__2_14));
        var_use_analysis__succeeded = MR_TRUE;
      }
    return var_use_analysis__succeeded;
  }
}

static void MR_CALL 
var_use_analysis__ite_rec_prob_8_p_0(
  MR_Word var_use_analysis__Cond_9,
  MR_Word var_use_analysis__Then_10,
  MR_Word var_use_analysis__Else_11,
  MR_Word var_use_analysis__RecCalls_12,
  MR_Word var_use_analysis__Info_13,
  MR_Float * var_use_analysis__Prob_14,
  MR_Word var_use_analysis__STATE_VARIABLE_ProbArray_0_31,
  MR_Word * var_use_analysis__STATE_VARIABLE_ProbArray_32)
{
  {
    MR_bool var_use_analysis__succeeded;
    MR_Word var_use_analysis__TypeInfo_18_74 = (MR_Word) &var_use_analysis_scalar_common_2[4];
    MR_Word var_use_analysis__TypeInfo_18_91;
    MR_Word var_use_analysis__CondRecCalls_16;
    MR_Word var_use_analysis__ThenRecCalls_17;
    MR_Word var_use_analysis__ElseRecCalls_18;
    MR_Float var_use_analysis__CondProb_19;
    MR_Float var_use_analysis__ThenProb0_20;
    MR_Float var_use_analysis__ElseProb0_21;
    MR_Word var_use_analysis__CondId_22;
    MR_Word var_use_analysis__Coverage_23;
    MR_Integer var_use_analysis__Before_24;
    MR_Integer var_use_analysis__After_25;
    MR_Float var_use_analysis__ThenCallProb_26;
    MR_Float var_use_analysis__ElseCallProb_27;
    MR_Float var_use_analysis__ThenProb_28;
    MR_Float var_use_analysis__ElseProb_29;
    MR_Float var_use_analysis__ThenElseProb_30;
    MR_Word var_use_analysis__STATE_VARIABLE_ProbArray_36_36;
    MR_Word var_use_analysis__STATE_VARIABLE_ProbArray_37_37;
    MR_Word var_use_analysis__Var_39;
    MR_Float var_use_analysis__Var_40;
    MR_Float var_use_analysis__Var_41;
    MR_Float var_use_analysis__Var_42;
    MR_Float var_use_analysis__Var_43;
    MR_Float var_use_analysis__Var_44;
    MR_Integer var_use_analysis__Var_45;
    MR_Float var_use_analysis__Var_46;
    MR_Word var_use_analysis__Var_47;
    MR_Word var_use_analysis__Var_48;
    MR_Word var_use_analysis__Var_49;
    MR_Word var_use_analysis__Var_50;
    MR_Word var_use_analysis__Var_51;
    MR_Word var_use_analysis__Var_52;
    MR_Integer var_use_analysis__Var_53;
    MR_Word var_use_analysis__Var_54;
    MR_Word var_use_analysis__Var_55;
    MR_Word var_use_analysis__Var_56;
    MR_Word var_use_analysis__Var_57;
    MR_Word var_use_analysis__Var_58;
    MR_Box var_use_analysis__conv2_Coverage_23;

    {
      mercury__list__filter_map_3_p_0(var_use_analysis__TypeInfo_18_74, var_use_analysis__TypeInfo_18_74, (MR_Word) &var_use_analysis_scalar_common_8[3], var_use_analysis__RecCalls_12, &var_use_analysis__CondRecCalls_16);
    }
    var_use_analysis__TypeInfo_18_91 = (MR_Word) &var_use_analysis_scalar_common_2[4];
    {
      mercury__list__filter_map_3_p_0(var_use_analysis__TypeInfo_18_91, var_use_analysis__TypeInfo_18_91, (MR_Word) &var_use_analysis_scalar_common_8[4], var_use_analysis__RecCalls_12, &var_use_analysis__ThenRecCalls_17);
    }
    {
      var_use_analysis__filter_recursive_call_sites_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)), var_use_analysis__RecCalls_12, &var_use_analysis__ElseRecCalls_18);
    }
    {
      var_use_analysis__goal_rec_prob_6_p_0(var_use_analysis__Cond_9, var_use_analysis__CondRecCalls_16, var_use_analysis__Info_13, &var_use_analysis__CondProb_19, var_use_analysis__STATE_VARIABLE_ProbArray_0_31, &var_use_analysis__STATE_VARIABLE_ProbArray_36_36);
    }
    {
      var_use_analysis__goal_rec_prob_6_p_0(var_use_analysis__Then_10, var_use_analysis__ThenRecCalls_17, var_use_analysis__Info_13, &var_use_analysis__ThenProb0_20, var_use_analysis__STATE_VARIABLE_ProbArray_36_36, &var_use_analysis__STATE_VARIABLE_ProbArray_37_37);
    }
    {
      var_use_analysis__goal_rec_prob_6_p_0(var_use_analysis__Else_11, var_use_analysis__ElseRecCalls_18, var_use_analysis__Info_13, &var_use_analysis__ElseProb0_21, var_use_analysis__STATE_VARIABLE_ProbArray_37_37, var_use_analysis__STATE_VARIABLE_ProbArray_32);
    }
    var_use_analysis__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Cond_9, (MR_Integer) 0)));
    var_use_analysis__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Cond_9, (MR_Integer) 1)));
    var_use_analysis__CondId_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Cond_9, (MR_Integer) 2)));
    var_use_analysis__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 0)));
    var_use_analysis__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 1)));
    var_use_analysis__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 2)));
    var_use_analysis__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 3)));
    var_use_analysis__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 4)));
    var_use_analysis__Var_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 5)));
    var_use_analysis__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 6)));
    var_use_analysis__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 7)));
    var_use_analysis__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 8)));
    var_use_analysis__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 9)));
    var_use_analysis__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 10)));
    {
      var_use_analysis__conv2_Coverage_23 = mdbcomp__goal_path__get_goal_attribute_det_2_f_0((MR_Word) &coverage__coverage__type_ctor_info_coverage_info_0, var_use_analysis__Var_39, var_use_analysis__CondId_22);
    }
    var_use_analysis__Coverage_23 = ((MR_Word) var_use_analysis__conv2_Coverage_23);
    {
      coverage__get_coverage_before_and_after_det_3_p_0(var_use_analysis__Coverage_23, &var_use_analysis__Before_24, &var_use_analysis__After_25);
    }
    {
      var_use_analysis__Var_41 = mercury__float__float_1_f_0(var_use_analysis__After_25);
    }
    {
      var_use_analysis__Var_42 = mercury__float__float_1_f_0(var_use_analysis__Before_24);
    }
    {
      var_use_analysis__Var_40 = mercury__float__f_slash_2_f_0(var_use_analysis__Var_41, var_use_analysis__Var_42);
    }
    {
      var_use_analysis__ThenCallProb_26 = measurement_units__probable_1_f_0(var_use_analysis__Var_40);
    }
    var_use_analysis__Var_45 = (var_use_analysis__Before_24 - var_use_analysis__After_25);
    {
      var_use_analysis__Var_44 = mercury__float__float_1_f_0(var_use_analysis__Var_45);
    }
    {
      var_use_analysis__Var_46 = mercury__float__float_1_f_0(var_use_analysis__Before_24);
    }
    {
      var_use_analysis__Var_43 = mercury__float__f_slash_2_f_0(var_use_analysis__Var_44, var_use_analysis__Var_46);
    }
    {
      var_use_analysis__ElseCallProb_27 = measurement_units__probable_1_f_0(var_use_analysis__Var_43);
    }
    {
      var_use_analysis__ThenProb_28 = measurement_units__and_2_f_0(var_use_analysis__ThenProb0_20, var_use_analysis__ThenCallProb_26);
    }
    {
      var_use_analysis__ElseProb_29 = measurement_units__and_2_f_0(var_use_analysis__ElseProb0_21, var_use_analysis__ElseCallProb_27);
    }
    {
      var_use_analysis__ThenElseProb_30 = measurement_units__or_2_f_0(var_use_analysis__ThenProb_28, var_use_analysis__ElseProb_29);
    }
    {
      *var_use_analysis__Prob_14 = measurement_units__or_2_f_0(var_use_analysis__CondProb_19, var_use_analysis__ThenElseProb_30);
    }
  }
}

static MR_bool MR_CALL 
var_use_analysis__switch_rec_prob_2_9_p_0_1(
  MR_Box var_use_analysis__closure_arg,
  MR_Box var_use_analysis__wrapper_arg_1,
  MR_Box * var_use_analysis__wrapper_arg_2)
{
  {
    MR_bool var_use_analysis__succeeded;
    MR_Box var_use_analysis__closure = var_use_analysis__closure_arg;
    MR_Word var_use_analysis__conv0_LambdaHeadVar__2_14;

    {
      var_use_analysis__succeeded = var_use_analysis__IntroducedFrom__pred__filter_recursive_call_sites__1257__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__closure, (MR_Integer) 3))), ((MR_Word) var_use_analysis__wrapper_arg_1), &var_use_analysis__conv0_LambdaHeadVar__2_14);
    }
    if (var_use_analysis__succeeded)
      {
        *var_use_analysis__wrapper_arg_2 = ((MR_Box) (var_use_analysis__conv0_LambdaHeadVar__2_14));
        var_use_analysis__succeeded = MR_TRUE;
      }
    return var_use_analysis__succeeded;
  }
}

static void MR_CALL 
var_use_analysis__switch_rec_prob_2_9_p_0(
  MR_Word var_use_analysis__HeadVar__1_1,
  MR_Integer var_use_analysis__CaseNum_2,
  MR_Integer var_use_analysis__TotalCalls_3,
  MR_Word var_use_analysis__RecCalls_4,
  MR_Word var_use_analysis__Info_5,
  MR_Word * var_use_analysis__HeadVar__6_6,
  MR_Word * var_use_analysis__HeadVar__7_7,
  MR_Word var_use_analysis__STATE_VARIABLE_ProbArray_0_8,
  MR_Word * var_use_analysis__STATE_VARIABLE_ProbArray_9)
{
  {
    MR_bool var_use_analysis__succeeded;

    if ((var_use_analysis__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *var_use_analysis__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *var_use_analysis__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *var_use_analysis__STATE_VARIABLE_ProbArray_9 = var_use_analysis__STATE_VARIABLE_ProbArray_0_8;
      }
    else
      {
        MR_Word var_use_analysis__TypeInfo_18_75;
        MR_Word var_use_analysis__Case_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word var_use_analysis__Cases_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word var_use_analysis__Probs0_26;
        MR_Word var_use_analysis__Weights0_27;
        MR_Word var_use_analysis__Goal_30;
        MR_Word var_use_analysis__CaseRecCalls_31;
        MR_Float var_use_analysis__Prob_32;
        MR_Word var_use_analysis__GoalId_35;
        MR_Word var_use_analysis__Coverage_36;
        MR_Integer var_use_analysis__Before_37;
        MR_Float var_use_analysis__Weight_38;
        MR_Integer var_use_analysis__Var_41 = (var_use_analysis__CaseNum_2 + (MR_Integer) 1);
        MR_Word var_use_analysis__STATE_VARIABLE_ProbArray_42_42;
        MR_Word var_use_analysis__Var_44;
        MR_Word var_use_analysis__Var_47;
        MR_Float var_use_analysis__Var_48;
        MR_Float var_use_analysis__Var_49;
        MR_Word var_use_analysis__Var_68;
        MR_Word var_use_analysis__Var_28;
        MR_Word var_use_analysis__Var_29;
        MR_Word var_use_analysis__Var_33;
        MR_Word var_use_analysis__Var_34;
        MR_Word var_use_analysis__Var_50;
        MR_Word var_use_analysis__Var_51;
        MR_Word var_use_analysis__Var_52;
        MR_Word var_use_analysis__Var_53;
        MR_Integer var_use_analysis__Var_54;
        MR_Word var_use_analysis__Var_55;
        MR_Word var_use_analysis__Var_56;
        MR_Word var_use_analysis__Var_57;
        MR_Word var_use_analysis__Var_58;
        MR_Word var_use_analysis__Var_59;
        MR_Box var_use_analysis__conv1_Coverage_36;

        {
          var_use_analysis__switch_rec_prob_2_9_p_0(var_use_analysis__Cases_18, var_use_analysis__Var_41, var_use_analysis__TotalCalls_3, var_use_analysis__RecCalls_4, var_use_analysis__Info_5, &var_use_analysis__Probs0_26, &var_use_analysis__Weights0_27, var_use_analysis__STATE_VARIABLE_ProbArray_0_8, &var_use_analysis__STATE_VARIABLE_ProbArray_42_42);
        }
        var_use_analysis__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Case_17, (MR_Integer) 0)));
        var_use_analysis__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Case_17, (MR_Integer) 1)));
        var_use_analysis__Goal_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Case_17, (MR_Integer) 2)));
        {
          var_use_analysis__Var_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), var_use_analysis__Var_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), var_use_analysis__Var_44, 1) = ((MR_Box) (var_use_analysis__CaseNum_2));
          MR_hl_field(MR_mktag(3), var_use_analysis__Var_44, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          var_use_analysis__Var_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), var_use_analysis__Var_68, 0) = ((MR_Box) (&var_use_analysis_scalar_common_9[1]));
          MR_hl_field(MR_mktag(0), var_use_analysis__Var_68, 1) = ((MR_Box) (var_use_analysis__switch_rec_prob_2_9_p_0_1));
          MR_hl_field(MR_mktag(0), var_use_analysis__Var_68, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), var_use_analysis__Var_68, 3) = ((MR_Box) (var_use_analysis__Var_44));
        }
        var_use_analysis__TypeInfo_18_75 = (MR_Word) &var_use_analysis_scalar_common_2[4];
        {
          mercury__list__filter_map_3_p_0(var_use_analysis__TypeInfo_18_75, var_use_analysis__TypeInfo_18_75, var_use_analysis__Var_68, var_use_analysis__RecCalls_4, &var_use_analysis__CaseRecCalls_31);
        }
        {
          var_use_analysis__goal_rec_prob_6_p_0(var_use_analysis__Goal_30, var_use_analysis__CaseRecCalls_31, var_use_analysis__Info_5, &var_use_analysis__Prob_32, var_use_analysis__STATE_VARIABLE_ProbArray_42_42, var_use_analysis__STATE_VARIABLE_ProbArray_9);
        }
        var_use_analysis__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Goal_30, (MR_Integer) 0)));
        var_use_analysis__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Goal_30, (MR_Integer) 1)));
        var_use_analysis__GoalId_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Goal_30, (MR_Integer) 2)));
        var_use_analysis__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_5, (MR_Integer) 0)));
        var_use_analysis__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_5, (MR_Integer) 1)));
        var_use_analysis__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_5, (MR_Integer) 2)));
        var_use_analysis__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_5, (MR_Integer) 3)));
        var_use_analysis__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_5, (MR_Integer) 4)));
        var_use_analysis__Var_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_5, (MR_Integer) 5)));
        var_use_analysis__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_5, (MR_Integer) 6)));
        var_use_analysis__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_5, (MR_Integer) 7)));
        var_use_analysis__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_5, (MR_Integer) 8)));
        var_use_analysis__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_5, (MR_Integer) 9)));
        var_use_analysis__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_5, (MR_Integer) 10)));
        {
          var_use_analysis__conv1_Coverage_36 = mdbcomp__goal_path__get_goal_attribute_det_2_f_0((MR_Word) &coverage__coverage__type_ctor_info_coverage_info_0, var_use_analysis__Var_47, var_use_analysis__GoalId_35);
        }
        var_use_analysis__Coverage_36 = ((MR_Word) var_use_analysis__conv1_Coverage_36);
        {
          coverage__get_coverage_before_det_2_p_0(var_use_analysis__Coverage_36, &var_use_analysis__Before_37);
        }
        {
          var_use_analysis__Var_48 = mercury__float__float_1_f_0(var_use_analysis__Before_37);
        }
        {
          var_use_analysis__Var_49 = mercury__float__float_1_f_0(var_use_analysis__TotalCalls_3);
        }
        {
          var_use_analysis__Weight_38 = mercury__float__f_slash_2_f_0(var_use_analysis__Var_48, var_use_analysis__Var_49);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *var_use_analysis__HeadVar__6_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = MR_box_float(var_use_analysis__Prob_32);
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (var_use_analysis__Probs0_26));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *var_use_analysis__HeadVar__7_7 = base;
          MR_hl_field(MR_mktag(1), base, 0) = MR_box_float(var_use_analysis__Weight_38);
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (var_use_analysis__Weights0_27));
        }
      }
  }
}

static MR_Box MR_CALL 
var_use_analysis__switch_rec_prob_7_p_0_1(
  MR_Box var_use_analysis__closure_arg,
  MR_Box var_use_analysis__wrapper_arg_1)
{
  {
    MR_Box var_use_analysis__wrapper_arg_2;
    MR_Box var_use_analysis__closure = var_use_analysis__closure_arg;
    MR_Float var_use_analysis__conv0_HeadVar__2_2;

    {
      var_use_analysis__conv0_HeadVar__2_2 = measurement_units__probability_to_float_1_f_0(MR_unbox_float(var_use_analysis__wrapper_arg_1));
    }
    var_use_analysis__wrapper_arg_2 = MR_box_float(var_use_analysis__conv0_HeadVar__2_2);
    return var_use_analysis__wrapper_arg_2;
  }
}

static void MR_CALL 
var_use_analysis__switch_rec_prob_7_p_0(
  MR_Word var_use_analysis__Cases_8,
  MR_Integer var_use_analysis__TotalCalls_9,
  MR_Word var_use_analysis__RecCalls_10,
  MR_Word var_use_analysis__Info_11,
  MR_Float * var_use_analysis__Prob_12,
  MR_Word var_use_analysis__STATE_VARIABLE_ProbArray_0_17,
  MR_Word * var_use_analysis__STATE_VARIABLE_ProbArray_18)
{
  {
    MR_bool var_use_analysis__succeeded;
    MR_Word var_use_analysis__TypeCtorInfo_23_23;
    MR_Word var_use_analysis__Probs_14;
    MR_Word var_use_analysis__Weights_15;
    MR_Float var_use_analysis__ProbFloat_16;
    MR_Word var_use_analysis__Var_21;

    {
      var_use_analysis__switch_rec_prob_2_9_p_0(var_use_analysis__Cases_8, (MR_Integer) 1, var_use_analysis__TotalCalls_9, var_use_analysis__RecCalls_10, var_use_analysis__Info_11, &var_use_analysis__Probs_14, &var_use_analysis__Weights_15, var_use_analysis__STATE_VARIABLE_ProbArray_0_17, var_use_analysis__STATE_VARIABLE_ProbArray_18);
    }
    var_use_analysis__TypeCtorInfo_23_23 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0;
    {
      var_use_analysis__Var_21 = mercury__list__map_2_f_0(var_use_analysis__TypeCtorInfo_23_23, var_use_analysis__TypeCtorInfo_23_23, (MR_Word) &var_use_analysis_scalar_common_2[11], var_use_analysis__Probs_14);
    }
    {
      measurements__weighted_average_3_p_0(var_use_analysis__Weights_15, var_use_analysis__Var_21, &var_use_analysis__ProbFloat_16);
    }
    {
      *var_use_analysis__Prob_12 = measurement_units__probable_1_f_0(var_use_analysis__ProbFloat_16);
    }
  }
}

static MR_bool MR_CALL 
var_use_analysis__disj_rec_prob_7_p_0_1(
  MR_Box var_use_analysis__closure_arg,
  MR_Box var_use_analysis__wrapper_arg_1,
  MR_Box * var_use_analysis__wrapper_arg_2)
{
  {
    MR_bool var_use_analysis__succeeded;
    MR_Box var_use_analysis__closure = var_use_analysis__closure_arg;
    MR_Word var_use_analysis__conv1_LambdaHeadVar__2_14;

    {
      var_use_analysis__succeeded = var_use_analysis__IntroducedFrom__pred__filter_recursive_call_sites__1257__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__closure, (MR_Integer) 3))), ((MR_Word) var_use_analysis__wrapper_arg_1), &var_use_analysis__conv1_LambdaHeadVar__2_14);
    }
    if (var_use_analysis__succeeded)
      {
        *var_use_analysis__wrapper_arg_2 = ((MR_Box) (var_use_analysis__conv1_LambdaHeadVar__2_14));
        var_use_analysis__succeeded = MR_TRUE;
      }
    return var_use_analysis__succeeded;
  }
}

static void MR_CALL 
var_use_analysis__disj_rec_prob_7_p_0(
  MR_Word var_use_analysis__HeadVar__1_1,
  MR_Integer var_use_analysis__DisjNum_2,
  MR_Word var_use_analysis__RecCalls_3,
  MR_Word var_use_analysis__Info_4,
  MR_Float * var_use_analysis__HeadVar__5_5,
  MR_Word var_use_analysis__STATE_VARIABLE_ProbArray_0_6,
  MR_Word * var_use_analysis__STATE_VARIABLE_ProbArray_7)
{
  {
    MR_bool var_use_analysis__succeeded;

    if ((var_use_analysis__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          *var_use_analysis__HeadVar__5_5 = measurement_units__impossible_0_f_0();
        }
        *var_use_analysis__STATE_VARIABLE_ProbArray_7 = var_use_analysis__STATE_VARIABLE_ProbArray_0_6;
      }
    else
      {
        MR_Word var_use_analysis__Disj_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word var_use_analysis__Disjs_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word var_use_analysis__DisjId_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Disj_14, (MR_Integer) 2)));
        MR_Word var_use_analysis__Coverage_22;
        MR_Integer var_use_analysis__Before_23;
        MR_Integer var_use_analysis__After_24;
        MR_Word var_use_analysis__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 4)));
        MR_Word var_use_analysis__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Disj_14, (MR_Integer) 0)));
        MR_Word var_use_analysis__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Disj_14, (MR_Integer) 1)));
        MR_Word var_use_analysis__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 0)));
        MR_Word var_use_analysis__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 1)));
        MR_Word var_use_analysis__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 2)));
        MR_Word var_use_analysis__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 3)));
        MR_Integer var_use_analysis__Var_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 5)));
        MR_Word var_use_analysis__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 6)));
        MR_Word var_use_analysis__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 7)));
        MR_Word var_use_analysis__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 8)));
        MR_Word var_use_analysis__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 9)));
        MR_Word var_use_analysis__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 10)));
        MR_Box var_use_analysis__conv0_Coverage_22;

        {
          var_use_analysis__conv0_Coverage_22 = mdbcomp__goal_path__get_goal_attribute_det_2_f_0((MR_Word) &coverage__coverage__type_ctor_info_coverage_info_0, var_use_analysis__Var_32, var_use_analysis__DisjId_21);
        }
        var_use_analysis__Coverage_22 = ((MR_Word) var_use_analysis__conv0_Coverage_22);
        {
          coverage__get_coverage_before_and_after_det_3_p_0(var_use_analysis__Coverage_22, &var_use_analysis__Before_23, &var_use_analysis__After_24);
        }
        var_use_analysis__succeeded = (var_use_analysis__Before_23 == (MR_Integer) 0);
        if (var_use_analysis__succeeded)
          {
            {
              *var_use_analysis__HeadVar__5_5 = measurement_units__impossible_0_f_0();
            }
            *var_use_analysis__STATE_VARIABLE_ProbArray_7 = var_use_analysis__STATE_VARIABLE_ProbArray_0_6;
          }
        else
          {
            MR_Word var_use_analysis__TypeInfo_18_69;
            MR_Float var_use_analysis__DisjsProb0_25;
            MR_Float var_use_analysis__FailureProb_26;
            MR_Float var_use_analysis__DisjsProb_27;
            MR_Word var_use_analysis__DisjRecCalls_28;
            MR_Float var_use_analysis__DisjProb_29;
            MR_Integer var_use_analysis__Var_33 = (var_use_analysis__DisjNum_2 + (MR_Integer) 1);
            MR_Word var_use_analysis__STATE_VARIABLE_ProbArray_34_34;
            MR_Float var_use_analysis__Var_36;
            MR_Float var_use_analysis__Var_37;
            MR_Integer var_use_analysis__Var_38;
            MR_Float var_use_analysis__Var_39;
            MR_Word var_use_analysis__Var_40;
            MR_Word var_use_analysis__Var_62;

            {
              var_use_analysis__disj_rec_prob_7_p_0(var_use_analysis__Disjs_15, var_use_analysis__Var_33, var_use_analysis__RecCalls_3, var_use_analysis__Info_4, &var_use_analysis__DisjsProb0_25, var_use_analysis__STATE_VARIABLE_ProbArray_0_6, &var_use_analysis__STATE_VARIABLE_ProbArray_34_34);
            }
            var_use_analysis__Var_38 = (var_use_analysis__Before_23 - var_use_analysis__After_24);
            {
              var_use_analysis__Var_37 = mercury__float__float_1_f_0(var_use_analysis__Var_38);
            }
            {
              var_use_analysis__Var_39 = mercury__float__float_1_f_0(var_use_analysis__Before_23);
            }
            {
              var_use_analysis__Var_36 = mercury__float__f_slash_2_f_0(var_use_analysis__Var_37, var_use_analysis__Var_39);
            }
            {
              var_use_analysis__FailureProb_26 = measurement_units__probable_1_f_0(var_use_analysis__Var_36);
            }
            {
              var_use_analysis__DisjsProb_27 = measurement_units__and_2_f_0(var_use_analysis__FailureProb_26, var_use_analysis__DisjsProb0_25);
            }
            {
              var_use_analysis__Var_40 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), var_use_analysis__Var_40, 0) = ((MR_Box) (var_use_analysis__DisjNum_2));
            }
            {
              var_use_analysis__Var_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), var_use_analysis__Var_62, 0) = ((MR_Box) (&var_use_analysis_scalar_common_9[1]));
              MR_hl_field(MR_mktag(0), var_use_analysis__Var_62, 1) = ((MR_Box) (var_use_analysis__disj_rec_prob_7_p_0_1));
              MR_hl_field(MR_mktag(0), var_use_analysis__Var_62, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), var_use_analysis__Var_62, 3) = ((MR_Box) (var_use_analysis__Var_40));
            }
            var_use_analysis__TypeInfo_18_69 = (MR_Word) &var_use_analysis_scalar_common_2[4];
            {
              mercury__list__filter_map_3_p_0(var_use_analysis__TypeInfo_18_69, var_use_analysis__TypeInfo_18_69, var_use_analysis__Var_62, var_use_analysis__RecCalls_3, &var_use_analysis__DisjRecCalls_28);
            }
            {
              var_use_analysis__goal_rec_prob_6_p_0(var_use_analysis__Disj_14, var_use_analysis__DisjRecCalls_28, var_use_analysis__Info_4, &var_use_analysis__DisjProb_29, var_use_analysis__STATE_VARIABLE_ProbArray_34_34, var_use_analysis__STATE_VARIABLE_ProbArray_7);
            }
            {
              *var_use_analysis__HeadVar__5_5 = measurement_units__or_2_f_0(var_use_analysis__DisjProb_29, var_use_analysis__DisjsProb_27);
            }
          }
      }
  }
}

static MR_bool MR_CALL 
var_use_analysis__conj_rec_prob_7_p_0_1(
  MR_Box var_use_analysis__closure_arg,
  MR_Box var_use_analysis__wrapper_arg_1,
  MR_Box * var_use_analysis__wrapper_arg_2)
{
  {
    MR_bool var_use_analysis__succeeded;
    MR_Box var_use_analysis__closure = var_use_analysis__closure_arg;
    MR_Word var_use_analysis__conv1_LambdaHeadVar__2_14;

    {
      var_use_analysis__succeeded = var_use_analysis__IntroducedFrom__pred__filter_recursive_call_sites__1257__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__closure, (MR_Integer) 3))), ((MR_Word) var_use_analysis__wrapper_arg_1), &var_use_analysis__conv1_LambdaHeadVar__2_14);
    }
    if (var_use_analysis__succeeded)
      {
        *var_use_analysis__wrapper_arg_2 = ((MR_Box) (var_use_analysis__conv1_LambdaHeadVar__2_14));
        var_use_analysis__succeeded = MR_TRUE;
      }
    return var_use_analysis__succeeded;
  }
}

static void MR_CALL 
var_use_analysis__conj_rec_prob_7_p_0(
  MR_Word var_use_analysis__HeadVar__1_1,
  MR_Integer var_use_analysis__ConjNum_2,
  MR_Word var_use_analysis__RecCalls_3,
  MR_Word var_use_analysis__Info_4,
  MR_Float * var_use_analysis__HeadVar__5_5,
  MR_Word var_use_analysis__STATE_VARIABLE_ProbArray_0_6,
  MR_Word * var_use_analysis__STATE_VARIABLE_ProbArray_7)
{
  {
    MR_bool var_use_analysis__succeeded;

    if ((var_use_analysis__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          *var_use_analysis__HeadVar__5_5 = measurement_units__impossible_0_f_0();
        }
        *var_use_analysis__STATE_VARIABLE_ProbArray_7 = var_use_analysis__STATE_VARIABLE_ProbArray_0_6;
      }
    else
      {
        MR_Word var_use_analysis__Conj_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word var_use_analysis__Conjs_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word var_use_analysis__ConjId_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Conj_14, (MR_Integer) 2)));
        MR_Word var_use_analysis__Coverage_22;
        MR_Integer var_use_analysis__Before_23;
        MR_Integer var_use_analysis__After_24;
        MR_Word var_use_analysis__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 4)));
        MR_Word var_use_analysis__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Conj_14, (MR_Integer) 0)));
        MR_Word var_use_analysis__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Conj_14, (MR_Integer) 1)));
        MR_Word var_use_analysis__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 0)));
        MR_Word var_use_analysis__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 1)));
        MR_Word var_use_analysis__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 2)));
        MR_Word var_use_analysis__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 3)));
        MR_Integer var_use_analysis__Var_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 5)));
        MR_Word var_use_analysis__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 6)));
        MR_Word var_use_analysis__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 7)));
        MR_Word var_use_analysis__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 8)));
        MR_Word var_use_analysis__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 9)));
        MR_Word var_use_analysis__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 10)));
        MR_Box var_use_analysis__conv0_Coverage_22;

        {
          var_use_analysis__conv0_Coverage_22 = mdbcomp__goal_path__get_goal_attribute_det_2_f_0((MR_Word) &coverage__coverage__type_ctor_info_coverage_info_0, var_use_analysis__Var_32, var_use_analysis__ConjId_21);
        }
        var_use_analysis__Coverage_22 = ((MR_Word) var_use_analysis__conv0_Coverage_22);
        {
          coverage__get_coverage_before_and_after_det_3_p_0(var_use_analysis__Coverage_22, &var_use_analysis__Before_23, &var_use_analysis__After_24);
        }
        var_use_analysis__succeeded = (var_use_analysis__Before_23 == (MR_Integer) 0);
        if (var_use_analysis__succeeded)
          {
            {
              *var_use_analysis__HeadVar__5_5 = measurement_units__impossible_0_f_0();
            }
            *var_use_analysis__STATE_VARIABLE_ProbArray_7 = var_use_analysis__STATE_VARIABLE_ProbArray_0_6;
          }
        else
          {
            MR_Word var_use_analysis__TypeInfo_18_68;
            MR_Float var_use_analysis__ConjsProb0_25;
            MR_Float var_use_analysis__SuccessProb_26;
            MR_Float var_use_analysis__ConjsProb_27;
            MR_Word var_use_analysis__ConjRecCalls_28;
            MR_Float var_use_analysis__ConjProb_29;
            MR_Integer var_use_analysis__Var_33 = (var_use_analysis__ConjNum_2 + (MR_Integer) 1);
            MR_Word var_use_analysis__STATE_VARIABLE_ProbArray_34_34;
            MR_Float var_use_analysis__Var_36;
            MR_Float var_use_analysis__Var_37;
            MR_Float var_use_analysis__Var_38;
            MR_Word var_use_analysis__Var_39;
            MR_Word var_use_analysis__Var_61;

            {
              var_use_analysis__conj_rec_prob_7_p_0(var_use_analysis__Conjs_15, var_use_analysis__Var_33, var_use_analysis__RecCalls_3, var_use_analysis__Info_4, &var_use_analysis__ConjsProb0_25, var_use_analysis__STATE_VARIABLE_ProbArray_0_6, &var_use_analysis__STATE_VARIABLE_ProbArray_34_34);
            }
            {
              var_use_analysis__Var_37 = mercury__float__float_1_f_0(var_use_analysis__After_24);
            }
            {
              var_use_analysis__Var_38 = mercury__float__float_1_f_0(var_use_analysis__Before_23);
            }
            {
              var_use_analysis__Var_36 = mercury__float__f_slash_2_f_0(var_use_analysis__Var_37, var_use_analysis__Var_38);
            }
            {
              var_use_analysis__SuccessProb_26 = measurement_units__probable_1_f_0(var_use_analysis__Var_36);
            }
            {
              var_use_analysis__ConjsProb_27 = measurement_units__and_2_f_0(var_use_analysis__SuccessProb_26, var_use_analysis__ConjsProb0_25);
            }
            {
              var_use_analysis__Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), var_use_analysis__Var_39, 0) = ((MR_Box) (var_use_analysis__ConjNum_2));
            }
            {
              var_use_analysis__Var_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), var_use_analysis__Var_61, 0) = ((MR_Box) (&var_use_analysis_scalar_common_9[1]));
              MR_hl_field(MR_mktag(0), var_use_analysis__Var_61, 1) = ((MR_Box) (var_use_analysis__conj_rec_prob_7_p_0_1));
              MR_hl_field(MR_mktag(0), var_use_analysis__Var_61, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), var_use_analysis__Var_61, 3) = ((MR_Box) (var_use_analysis__Var_39));
            }
            var_use_analysis__TypeInfo_18_68 = (MR_Word) &var_use_analysis_scalar_common_2[4];
            {
              mercury__list__filter_map_3_p_0(var_use_analysis__TypeInfo_18_68, var_use_analysis__TypeInfo_18_68, var_use_analysis__Var_61, var_use_analysis__RecCalls_3, &var_use_analysis__ConjRecCalls_28);
            }
            {
              var_use_analysis__goal_rec_prob_6_p_0(var_use_analysis__Conj_14, var_use_analysis__ConjRecCalls_28, var_use_analysis__Info_4, &var_use_analysis__ConjProb_29, var_use_analysis__STATE_VARIABLE_ProbArray_34_34, var_use_analysis__STATE_VARIABLE_ProbArray_7);
            }
            {
              *var_use_analysis__HeadVar__5_5 = measurement_units__or_2_f_0(var_use_analysis__ConjProb_29, var_use_analysis__ConjsProb_27);
            }
          }
      }
  }
}

static MR_bool MR_CALL 
var_use_analysis__goal_rec_prob_6_p_0_2(
  MR_Box var_use_analysis__closure_arg,
  MR_Box var_use_analysis__wrapper_arg_1,
  MR_Box * var_use_analysis__wrapper_arg_2)
{
  {
    MR_bool var_use_analysis__succeeded;
    MR_Box var_use_analysis__closure = var_use_analysis__closure_arg;
    MR_Word var_use_analysis__conv2_LambdaHeadVar__2_14;

    {
      var_use_analysis__succeeded = var_use_analysis__IntroducedFrom__pred__filter_recursive_call_sites__1257__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__closure, (MR_Integer) 3))), ((MR_Word) var_use_analysis__wrapper_arg_1), &var_use_analysis__conv2_LambdaHeadVar__2_14);
    }
    if (var_use_analysis__succeeded)
      {
        *var_use_analysis__wrapper_arg_2 = ((MR_Box) (var_use_analysis__conv2_LambdaHeadVar__2_14));
        var_use_analysis__succeeded = MR_TRUE;
      }
    return var_use_analysis__succeeded;
  }
}

static MR_bool MR_CALL 
var_use_analysis__goal_rec_prob_6_p_0_1(
  MR_Box var_use_analysis__closure_arg,
  MR_Box var_use_analysis__wrapper_arg_1,
  MR_Box * var_use_analysis__wrapper_arg_2)
{
  {
    MR_bool var_use_analysis__succeeded;
    MR_Box var_use_analysis__closure = var_use_analysis__closure_arg;
    MR_Word var_use_analysis__conv1_LambdaHeadVar__2_14;

    {
      var_use_analysis__succeeded = var_use_analysis__IntroducedFrom__pred__filter_recursive_call_sites__1257__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__closure, (MR_Integer) 3))), ((MR_Word) var_use_analysis__wrapper_arg_1), &var_use_analysis__conv1_LambdaHeadVar__2_14);
    }
    if (var_use_analysis__succeeded)
      {
        *var_use_analysis__wrapper_arg_2 = ((MR_Box) (var_use_analysis__conv1_LambdaHeadVar__2_14));
        var_use_analysis__succeeded = MR_TRUE;
      }
    return var_use_analysis__succeeded;
  }
}

static void MR_CALL 
var_use_analysis__goal_rec_prob_6_p_0(
  MR_Word var_use_analysis__Goal_7,
  MR_Word var_use_analysis__RecCalls_8,
  MR_Word var_use_analysis__Info_9,
  MR_Float * var_use_analysis__Prob_10,
  MR_Word var_use_analysis__STATE_VARIABLE_ProbArray_0_35,
  MR_Word * var_use_analysis__STATE_VARIABLE_ProbArray_36)
{
  {
    MR_bool var_use_analysis__succeeded;
    MR_Word var_use_analysis__GoalExpr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Goal_7, (MR_Integer) 0)));
    MR_Word var_use_analysis__GoalId_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Goal_7, (MR_Integer) 2)));
    MR_Word var_use_analysis__Coverage_15;
    MR_Integer var_use_analysis__Before_16;
    MR_Word var_use_analysis__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 4)));
    MR_Word var_use_analysis__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Goal_7, (MR_Integer) 1)));
    MR_Word var_use_analysis__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 0)));
    MR_Word var_use_analysis__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 1)));
    MR_Word var_use_analysis__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 2)));
    MR_Word var_use_analysis__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 3)));
    MR_Integer var_use_analysis__Var_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 5)));
    MR_Word var_use_analysis__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 6)));
    MR_Word var_use_analysis__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 7)));
    MR_Word var_use_analysis__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 8)));
    MR_Word var_use_analysis__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 9)));
    MR_Word var_use_analysis__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 10)));
    MR_Box var_use_analysis__conv0_Coverage_15;

    {
      var_use_analysis__conv0_Coverage_15 = mdbcomp__goal_path__get_goal_attribute_det_2_f_0((MR_Word) &coverage__coverage__type_ctor_info_coverage_info_0, var_use_analysis__Var_37, var_use_analysis__GoalId_14);
    }
    var_use_analysis__Coverage_15 = ((MR_Word) var_use_analysis__conv0_Coverage_15);
    {
      coverage__get_coverage_before_det_2_p_0(var_use_analysis__Coverage_15, &var_use_analysis__Before_16);
    }
    var_use_analysis__succeeded = (var_use_analysis__Before_16 == (MR_Integer) 0);
    if (var_use_analysis__succeeded)
      {
        {
          *var_use_analysis__Prob_10 = measurement_units__impossible_0_f_0();
        }
        *var_use_analysis__STATE_VARIABLE_ProbArray_36 = var_use_analysis__STATE_VARIABLE_ProbArray_0_35;
      }
    else
      {
        MR_Word var_use_analysis__STATE_VARIABLE_ProbArray_44_44;

        switch (MR_tag((MR_Word) var_use_analysis__GoalExpr_12)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word var_use_analysis__Conjs_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__GoalExpr_12, (MR_Integer) 0)));

              {
                var_use_analysis__conj_rec_prob_7_p_0(var_use_analysis__Conjs_17, (MR_Integer) 1, var_use_analysis__RecCalls_8, var_use_analysis__Info_9, var_use_analysis__Prob_10, var_use_analysis__STATE_VARIABLE_ProbArray_0_35, &var_use_analysis__STATE_VARIABLE_ProbArray_44_44);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word var_use_analysis__Disjs_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__GoalExpr_12, (MR_Integer) 0)));

              {
                var_use_analysis__disj_rec_prob_7_p_0(var_use_analysis__Disjs_18, (MR_Integer) 1, var_use_analysis__RecCalls_8, var_use_analysis__Info_9, var_use_analysis__Prob_10, var_use_analysis__STATE_VARIABLE_ProbArray_0_35, &var_use_analysis__STATE_VARIABLE_ProbArray_44_44);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word var_use_analysis__Cases_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), var_use_analysis__GoalExpr_12, (MR_Integer) 2)));
              MR_Integer var_use_analysis__Var_19 = ((MR_Integer) (MR_hl_field(MR_mktag(2), var_use_analysis__GoalExpr_12, (MR_Integer) 0)));
              MR_Word var_use_analysis__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), var_use_analysis__GoalExpr_12, (MR_Integer) 1)));

              {
                var_use_analysis__switch_rec_prob_7_p_0(var_use_analysis__Cases_21, var_use_analysis__Before_16, var_use_analysis__RecCalls_8, var_use_analysis__Info_9, var_use_analysis__Prob_10, var_use_analysis__STATE_VARIABLE_ProbArray_0_35, &var_use_analysis__STATE_VARIABLE_ProbArray_44_44);
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), var_use_analysis__GoalExpr_12, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word var_use_analysis__Cond_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), var_use_analysis__GoalExpr_12, (MR_Integer) 1)));
                  MR_Word var_use_analysis__Then_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), var_use_analysis__GoalExpr_12, (MR_Integer) 2)));
                  MR_Word var_use_analysis__Else_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), var_use_analysis__GoalExpr_12, (MR_Integer) 3)));

                  {
                    var_use_analysis__ite_rec_prob_8_p_0(var_use_analysis__Cond_22, var_use_analysis__Then_23, var_use_analysis__Else_24, var_use_analysis__RecCalls_8, var_use_analysis__Info_9, var_use_analysis__Prob_10, var_use_analysis__STATE_VARIABLE_ProbArray_0_35, &var_use_analysis__STATE_VARIABLE_ProbArray_44_44);
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word var_use_analysis__TypeInfo_18_75 = (MR_Word) &var_use_analysis_scalar_common_2[4];
                  MR_Word var_use_analysis__SubGoal_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), var_use_analysis__GoalExpr_12, (MR_Integer) 1)));
                  MR_Word var_use_analysis__SubGoalRecCalls_28;

                  {
                    mercury__list__filter_map_3_p_0(var_use_analysis__TypeInfo_18_75, var_use_analysis__TypeInfo_18_75, (MR_Word) &var_use_analysis_scalar_common_8[2], var_use_analysis__RecCalls_8, &var_use_analysis__SubGoalRecCalls_28);
                  }
                  {
                    var_use_analysis__goal_rec_prob_6_p_0(var_use_analysis__SubGoal_25, var_use_analysis__SubGoalRecCalls_28, var_use_analysis__Info_9, var_use_analysis__Prob_10, var_use_analysis__STATE_VARIABLE_ProbArray_0_35, &var_use_analysis__STATE_VARIABLE_ProbArray_44_44);
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word var_use_analysis__TypeInfo_18_92;
                  MR_Word var_use_analysis__MaybeCut_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), var_use_analysis__GoalExpr_12, (MR_Integer) 2)));
                  MR_Word var_use_analysis__SubGoal_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), var_use_analysis__GoalExpr_12, (MR_Integer) 1)));
                  MR_Word var_use_analysis__Step_59;
                  MR_Word var_use_analysis__SubGoalRecCalls_60;
                  MR_Word var_use_analysis__Var_85;

                  {
                    var_use_analysis__Step_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), var_use_analysis__Step_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), var_use_analysis__Step_59, 1) = ((MR_Box) (var_use_analysis__MaybeCut_27));
                  }
                  {
                    var_use_analysis__Var_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), var_use_analysis__Var_85, 0) = ((MR_Box) (&var_use_analysis_scalar_common_9[1]));
                    MR_hl_field(MR_mktag(0), var_use_analysis__Var_85, 1) = ((MR_Box) (var_use_analysis__goal_rec_prob_6_p_0_2));
                    MR_hl_field(MR_mktag(0), var_use_analysis__Var_85, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(0), var_use_analysis__Var_85, 3) = ((MR_Box) (var_use_analysis__Step_59));
                  }
                  var_use_analysis__TypeInfo_18_92 = (MR_Word) &var_use_analysis_scalar_common_2[4];
                  {
                    mercury__list__filter_map_3_p_0(var_use_analysis__TypeInfo_18_92, var_use_analysis__TypeInfo_18_92, var_use_analysis__Var_85, var_use_analysis__RecCalls_8, &var_use_analysis__SubGoalRecCalls_60);
                  }
                  {
                    var_use_analysis__goal_rec_prob_6_p_0(var_use_analysis__SubGoal_58, var_use_analysis__SubGoalRecCalls_60, var_use_analysis__Info_9, var_use_analysis__Prob_10, var_use_analysis__STATE_VARIABLE_ProbArray_0_35, &var_use_analysis__STATE_VARIABLE_ProbArray_44_44);
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  if ((var_use_analysis__RecCalls_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      *var_use_analysis__Prob_10 = measurement_units__impossible_0_f_0();
                    }
                  else
                    {
                      *var_use_analysis__Prob_10 = measurement_units__certain_0_f_0();
                    }
                  var_use_analysis__STATE_VARIABLE_ProbArray_44_44 = var_use_analysis__STATE_VARIABLE_ProbArray_0_35;
                }
                break;
            }
            break;
        }
        {
          mdbcomp__goal_path__update_goal_attribute_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0, var_use_analysis__GoalId_14, MR_box_float(*var_use_analysis__Prob_10), var_use_analysis__STATE_VARIABLE_ProbArray_44_44, var_use_analysis__STATE_VARIABLE_ProbArray_36);
        }
      }
  }
}

static void MR_CALL 
var_use_analysis__rec_ite_var_first_use_8_p_0_3(
  MR_Box var_use_analysis__closure_arg,
  MR_Box var_use_analysis__wrapper_arg_1,
  MR_Box * var_use_analysis__wrapper_arg_2)
{
  {
    MR_Box var_use_analysis__closure = var_use_analysis__closure_arg;
    MR_Float var_use_analysis__conv6_HeadVar__3_3;

    {
      var_use_analysis__ffu_to_float_3_p_0(MR_unbox_float((MR_hl_field(MR_mktag(0), var_use_analysis__closure, (MR_Integer) 3))), ((MR_Word) var_use_analysis__wrapper_arg_1), &var_use_analysis__conv6_HeadVar__3_3);
    }
    *var_use_analysis__wrapper_arg_2 = MR_box_float(var_use_analysis__conv6_HeadVar__3_3);
  }
}

static void MR_CALL 
var_use_analysis__rec_ite_var_first_use_8_p_0_2(
  MR_Box var_use_analysis__closure_arg,
  MR_Box var_use_analysis__wrapper_arg_1,
  MR_Box var_use_analysis__wrapper_arg_2,
  MR_Box * var_use_analysis__wrapper_arg_3)
{
  {
    MR_Box var_use_analysis__closure = var_use_analysis__closure_arg;
    MR_Float var_use_analysis__conv5_STATE_VARIABLE_Weight_10;

    {
      var_use_analysis__adjust_weight_for_recursion_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__closure, (MR_Integer) 3))), MR_unbox_float(var_use_analysis__wrapper_arg_1), MR_unbox_float(var_use_analysis__wrapper_arg_2), &var_use_analysis__conv5_STATE_VARIABLE_Weight_10);
    }
    *var_use_analysis__wrapper_arg_3 = MR_box_float(var_use_analysis__conv5_STATE_VARIABLE_Weight_10);
  }
}

static MR_Box MR_CALL 
var_use_analysis__rec_ite_var_first_use_8_p_0_1(
  MR_Box var_use_analysis__closure_arg,
  MR_Box var_use_analysis__wrapper_arg_1)
{
  {
    MR_Box var_use_analysis__wrapper_arg_2;
    MR_Box var_use_analysis__closure = var_use_analysis__closure_arg;
    MR_Float var_use_analysis__conv4_HeadVar__2_2;

    {
      var_use_analysis__conv4_HeadVar__2_2 = mercury__float__float_1_f_0(((MR_Integer) var_use_analysis__wrapper_arg_1));
    }
    var_use_analysis__wrapper_arg_2 = MR_box_float(var_use_analysis__conv4_HeadVar__2_2);
    return var_use_analysis__wrapper_arg_2;
  }
}

static void MR_CALL 
var_use_analysis__rec_ite_var_first_use_8_p_0(
  MR_Word var_use_analysis__Cond_9,
  MR_Word var_use_analysis__Then_10,
  MR_Word var_use_analysis__Else_11,
  MR_Word var_use_analysis__RecCalls_12,
  MR_Word var_use_analysis__Info_13,
  MR_Word * var_use_analysis__FoundFirstUse_14,
  MR_Float var_use_analysis__STATE_VARIABLE_CostSoFar_0_46,
  MR_Float * var_use_analysis__STATE_VARIABLE_CostSoFar_47)
{
  {
    MR_bool var_use_analysis__succeeded;
    MR_Word var_use_analysis__TypeCtorInfo_116_116;
    MR_Word var_use_analysis__TypeCtorInfo_117_117;
    MR_Word var_use_analysis__CondRecCalls_16;
    MR_Word var_use_analysis__ThenRecCalls_17;
    MR_Word var_use_analysis__ElseRecCalls_18;
    MR_Word var_use_analysis__CondFoundFirstUse_19;
    MR_Float var_use_analysis__CostAfterCond_20;
    MR_Word var_use_analysis__ThenFoundFirstUse_21;
    MR_Float var_use_analysis__CostAfterThen_22;
    MR_Word var_use_analysis__ElseFoundFirstUse_23;
    MR_Float var_use_analysis__CostAfterElse_24;
    MR_Word var_use_analysis__CoverageArray_25;
    MR_Word var_use_analysis__ThenId_28;
    MR_Word var_use_analysis__ElseId_31;
    MR_Word var_use_analysis__ThenCoverage_32;
    MR_Word var_use_analysis__ElseCoverage_33;
    MR_Integer var_use_analysis__BeforeThen_34;
    MR_Integer var_use_analysis__BeforeElse_35;
    MR_Word var_use_analysis__RecProbArray_36;
    MR_Float var_use_analysis__ThenRecProb_37;
    MR_Float var_use_analysis__ElseRecProb_38;
    MR_Word var_use_analysis__Weights0_39;
    MR_Word var_use_analysis__Weights_40;
    MR_Word var_use_analysis__Var_52;
    MR_Word var_use_analysis__Var_54;
    MR_Word var_use_analysis__Var_55;
    MR_Word var_use_analysis__Var_57;
    MR_Word var_use_analysis__Var_58;
    MR_Word var_use_analysis__Var_59;
    MR_Word var_use_analysis__Var_60;
    MR_Word var_use_analysis__Var_61;
    MR_Word var_use_analysis__Var_63;
    MR_Word var_use_analysis__Var_65;
    MR_Word var_use_analysis__Var_72;
    MR_Word var_use_analysis__Var_73;
    MR_Word var_use_analysis__Var_74;
    MR_Word var_use_analysis__Var_75;
    MR_Integer var_use_analysis__Var_76;
    MR_Word var_use_analysis__Var_77;
    MR_Word var_use_analysis__Var_78;
    MR_Word var_use_analysis__Var_79;
    MR_Word var_use_analysis__Var_80;
    MR_Word var_use_analysis__Var_81;
    MR_Word var_use_analysis__Var_26;
    MR_Word var_use_analysis__Var_27;
    MR_Word var_use_analysis__Var_29;
    MR_Word var_use_analysis__Var_30;
    MR_Box var_use_analysis__conv0_ThenCoverage_32;
    MR_Box var_use_analysis__conv1_ElseCoverage_33;
    MR_Word var_use_analysis__Var_82;
    MR_Word var_use_analysis__Var_83;
    MR_Word var_use_analysis__Var_84;
    MR_Word var_use_analysis__Var_85;
    MR_Word var_use_analysis__Var_86;
    MR_Integer var_use_analysis__Var_87;
    MR_Word var_use_analysis__Var_88;
    MR_Word var_use_analysis__Var_89;
    MR_Word var_use_analysis__Var_90;
    MR_Word var_use_analysis__Var_91;
    MR_Word var_use_analysis__Var_92;
    MR_Box var_use_analysis__conv2_ThenRecProb_37;
    MR_Box var_use_analysis__conv3_ElseRecProb_38;
    MR_Word var_use_analysis__Var_93;
    MR_Word var_use_analysis__Var_94;
    MR_Word var_use_analysis__Var_95;
    MR_Word var_use_analysis__Var_96;
    MR_Word var_use_analysis__Var_97;
    MR_Integer var_use_analysis__Var_98;
    MR_Word var_use_analysis__Var_99;
    MR_Word var_use_analysis__Var_100;
    MR_Word var_use_analysis__Var_101;
    MR_Word var_use_analysis__Var_102;
    MR_Word var_use_analysis__Var_103;

    {
      var_use_analysis__filter_recursive_call_sites_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), var_use_analysis__RecCalls_12, &var_use_analysis__CondRecCalls_16);
    }
    {
      var_use_analysis__filter_recursive_call_sites_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), var_use_analysis__RecCalls_12, &var_use_analysis__ThenRecCalls_17);
    }
    {
      var_use_analysis__filter_recursive_call_sites_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)), var_use_analysis__RecCalls_12, &var_use_analysis__ElseRecCalls_18);
    }
    {
      var_use_analysis__rec_goal_var_first_use_6_p_0(var_use_analysis__Cond_9, var_use_analysis__CondRecCalls_16, var_use_analysis__Info_13, &var_use_analysis__CondFoundFirstUse_19, var_use_analysis__STATE_VARIABLE_CostSoFar_0_46, &var_use_analysis__CostAfterCond_20);
    }
    {
      var_use_analysis__rec_goal_var_first_use_6_p_0(var_use_analysis__Then_10, var_use_analysis__ThenRecCalls_17, var_use_analysis__Info_13, &var_use_analysis__ThenFoundFirstUse_21, var_use_analysis__CostAfterCond_20, &var_use_analysis__CostAfterThen_22);
    }
    {
      var_use_analysis__rec_goal_var_first_use_6_p_0(var_use_analysis__Else_11, var_use_analysis__ElseRecCalls_18, var_use_analysis__Info_13, &var_use_analysis__ElseFoundFirstUse_23, var_use_analysis__CostAfterCond_20, &var_use_analysis__CostAfterElse_24);
    }
    var_use_analysis__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 0)));
    var_use_analysis__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 1)));
    var_use_analysis__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 2)));
    var_use_analysis__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 3)));
    var_use_analysis__CoverageArray_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 4)));
    var_use_analysis__Var_76 = ((MR_Integer) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 5)));
    var_use_analysis__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 6)));
    var_use_analysis__Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 7)));
    var_use_analysis__Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 8)));
    var_use_analysis__Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 9)));
    var_use_analysis__Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 10)));
    var_use_analysis__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Then_10, (MR_Integer) 0)));
    var_use_analysis__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Then_10, (MR_Integer) 1)));
    var_use_analysis__ThenId_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Then_10, (MR_Integer) 2)));
    var_use_analysis__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Else_11, (MR_Integer) 0)));
    var_use_analysis__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Else_11, (MR_Integer) 1)));
    var_use_analysis__ElseId_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Else_11, (MR_Integer) 2)));
    var_use_analysis__TypeCtorInfo_116_116 = (MR_Word) &coverage__coverage__type_ctor_info_coverage_info_0;
    {
      var_use_analysis__conv0_ThenCoverage_32 = mdbcomp__goal_path__get_goal_attribute_det_2_f_0(var_use_analysis__TypeCtorInfo_116_116, var_use_analysis__CoverageArray_25, var_use_analysis__ThenId_28);
    }
    var_use_analysis__ThenCoverage_32 = ((MR_Word) var_use_analysis__conv0_ThenCoverage_32);
    {
      var_use_analysis__conv1_ElseCoverage_33 = mdbcomp__goal_path__get_goal_attribute_det_2_f_0(var_use_analysis__TypeCtorInfo_116_116, var_use_analysis__CoverageArray_25, var_use_analysis__ElseId_31);
    }
    var_use_analysis__ElseCoverage_33 = ((MR_Word) var_use_analysis__conv1_ElseCoverage_33);
    {
      coverage__get_coverage_before_det_2_p_0(var_use_analysis__ThenCoverage_32, &var_use_analysis__BeforeThen_34);
    }
    {
      coverage__get_coverage_before_det_2_p_0(var_use_analysis__ElseCoverage_33, &var_use_analysis__BeforeElse_35);
    }
    var_use_analysis__Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 0)));
    var_use_analysis__Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 1)));
    var_use_analysis__Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 2)));
    var_use_analysis__Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 3)));
    var_use_analysis__Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 4)));
    var_use_analysis__Var_87 = ((MR_Integer) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 5)));
    var_use_analysis__Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 6)));
    var_use_analysis__Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 7)));
    var_use_analysis__Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 8)));
    var_use_analysis__Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 9)));
    var_use_analysis__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 10)));
    var_use_analysis__RecProbArray_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__Var_52, (MR_Integer) 0)));
    var_use_analysis__Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__Var_52, (MR_Integer) 1)));
    var_use_analysis__TypeCtorInfo_117_117 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0;
    {
      var_use_analysis__conv2_ThenRecProb_37 = mdbcomp__goal_path__get_goal_attribute_det_2_f_0(var_use_analysis__TypeCtorInfo_117_117, var_use_analysis__RecProbArray_36, var_use_analysis__ThenId_28);
    }
    var_use_analysis__ThenRecProb_37 = MR_unbox_float(var_use_analysis__conv2_ThenRecProb_37);
    {
      var_use_analysis__conv3_ElseRecProb_38 = mdbcomp__goal_path__get_goal_attribute_det_2_f_0(var_use_analysis__TypeCtorInfo_117_117, var_use_analysis__RecProbArray_36, var_use_analysis__ElseId_31);
    }
    var_use_analysis__ElseRecProb_38 = MR_unbox_float(var_use_analysis__conv3_ElseRecProb_38);
    {
      var_use_analysis__Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), var_use_analysis__Var_55, 0) = ((MR_Box) (var_use_analysis__BeforeElse_35));
      MR_hl_field(MR_mktag(1), var_use_analysis__Var_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      var_use_analysis__Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), var_use_analysis__Var_54, 0) = ((MR_Box) (var_use_analysis__BeforeThen_34));
      MR_hl_field(MR_mktag(1), var_use_analysis__Var_54, 1) = ((MR_Box) (var_use_analysis__Var_55));
    }
    {
      var_use_analysis__Weights0_39 = mercury__list__map_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, var_use_analysis__TypeCtorInfo_117_117, (MR_Word) &var_use_analysis_scalar_common_2[10], var_use_analysis__Var_54);
    }
    var_use_analysis__Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 0)));
    var_use_analysis__Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 1)));
    var_use_analysis__Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 2)));
    var_use_analysis__Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 3)));
    var_use_analysis__Var_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 4)));
    var_use_analysis__Var_98 = ((MR_Integer) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 5)));
    var_use_analysis__Var_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 6)));
    var_use_analysis__Var_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 7)));
    var_use_analysis__Var_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 8)));
    var_use_analysis__Var_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 9)));
    var_use_analysis__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 10)));
    var_use_analysis__Var_103 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__Var_60, (MR_Integer) 0)));
    var_use_analysis__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__Var_60, (MR_Integer) 1)));
    {
      var_use_analysis__Var_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), var_use_analysis__Var_57, 0) = ((MR_Box) (&var_use_analysis_scalar_common_6[1]));
      MR_hl_field(MR_mktag(0), var_use_analysis__Var_57, 1) = ((MR_Box) (var_use_analysis__rec_ite_var_first_use_8_p_0_2));
      MR_hl_field(MR_mktag(0), var_use_analysis__Var_57, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), var_use_analysis__Var_57, 3) = ((MR_Box) (var_use_analysis__Var_59));
    }
    {
      var_use_analysis__Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), var_use_analysis__Var_61, 0) = MR_box_float(var_use_analysis__ElseRecProb_38);
      MR_hl_field(MR_mktag(1), var_use_analysis__Var_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      var_use_analysis__Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), var_use_analysis__Var_58, 0) = MR_box_float(var_use_analysis__ThenRecProb_37);
      MR_hl_field(MR_mktag(1), var_use_analysis__Var_58, 1) = ((MR_Box) (var_use_analysis__Var_61));
    }
    {
      mercury__list__map_corresponding_4_p_0(var_use_analysis__TypeCtorInfo_117_117, var_use_analysis__TypeCtorInfo_117_117, var_use_analysis__TypeCtorInfo_117_117, var_use_analysis__Var_57, var_use_analysis__Var_58, var_use_analysis__Weights0_39, &var_use_analysis__Weights_40);
    }
    {
      var_use_analysis__Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), var_use_analysis__Var_65, 0) = MR_box_float(var_use_analysis__CostAfterElse_24);
      MR_hl_field(MR_mktag(1), var_use_analysis__Var_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      var_use_analysis__Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), var_use_analysis__Var_63, 0) = MR_box_float(var_use_analysis__CostAfterThen_22);
      MR_hl_field(MR_mktag(1), var_use_analysis__Var_63, 1) = ((MR_Box) (var_use_analysis__Var_65));
    }
    {
      measurements__weighted_average_3_p_0(var_use_analysis__Weights_40, var_use_analysis__Var_63, var_use_analysis__STATE_VARIABLE_CostSoFar_47);
    }
    if ((var_use_analysis__CondFoundFirstUse_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        var_use_analysis__succeeded = (var_use_analysis__ThenFoundFirstUse_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (var_use_analysis__succeeded)
          var_use_analysis__succeeded = (var_use_analysis__ElseFoundFirstUse_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (var_use_analysis__succeeded)
          *var_use_analysis__FoundFirstUse_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_Word var_use_analysis__VarUseType_42;
            MR_Float var_use_analysis__Default_43;
            MR_Word var_use_analysis__UseTimes_44;
            MR_Float var_use_analysis__UseTime_45;
            MR_Word var_use_analysis__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 6)));
            MR_Word var_use_analysis__Var_68;
            MR_Word var_use_analysis__Var_69;
            MR_Word var_use_analysis__Var_70;
            MR_Word var_use_analysis__Var_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 0)));
            MR_Word var_use_analysis__Var_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 1)));
            MR_Word var_use_analysis__Var_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 2)));
            MR_Word var_use_analysis__Var_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 3)));
            MR_Word var_use_analysis__Var_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 4)));
            MR_Integer var_use_analysis__Var_109 = ((MR_Integer) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 5)));
            MR_Word var_use_analysis__Var_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 7)));
            MR_Word var_use_analysis__Var_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 8)));
            MR_Word var_use_analysis__Var_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 9)));
            MR_Word var_use_analysis__Var_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_13, (MR_Integer) 10)));
            MR_Word var_use_analysis__Var_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Var_67, (MR_Integer) 0)));
            MR_Word var_use_analysis__Var_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Var_67, (MR_Integer) 1)));

            var_use_analysis__VarUseType_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Var_67, (MR_Integer) 2)));
            switch (var_use_analysis__VarUseType_42) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                var_use_analysis__Default_43 = *var_use_analysis__STATE_VARIABLE_CostSoFar_47;
                break;
              case (MR_Integer) 2:
              case (MR_Integer) 0:
                var_use_analysis__Default_43 = var_use_analysis__CostAfterCond_20;
                break;
            }
            {
              var_use_analysis__Var_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), var_use_analysis__Var_68, 0) = ((MR_Box) (&var_use_analysis_scalar_common_9[0]));
              MR_hl_field(MR_mktag(0), var_use_analysis__Var_68, 1) = ((MR_Box) (var_use_analysis__rec_ite_var_first_use_8_p_0_3));
              MR_hl_field(MR_mktag(0), var_use_analysis__Var_68, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), var_use_analysis__Var_68, 3) = MR_box_float(var_use_analysis__Default_43);
            }
            {
              var_use_analysis__Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), var_use_analysis__Var_70, 0) = ((MR_Box) (var_use_analysis__ElseFoundFirstUse_23));
              MR_hl_field(MR_mktag(1), var_use_analysis__Var_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              var_use_analysis__Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), var_use_analysis__Var_69, 0) = ((MR_Box) (var_use_analysis__ThenFoundFirstUse_21));
              MR_hl_field(MR_mktag(1), var_use_analysis__Var_69, 1) = ((MR_Box) (var_use_analysis__Var_70));
            }
            {
              mercury__list__map_3_p_0((MR_Word) &var_use_analysis__var_use_analysis__type_ctor_info_found_first_use_0, var_use_analysis__TypeCtorInfo_117_117, var_use_analysis__Var_68, var_use_analysis__Var_69, &var_use_analysis__UseTimes_44);
            }
            {
              measurements__weighted_average_3_p_0(var_use_analysis__Weights_40, var_use_analysis__UseTimes_44, &var_use_analysis__UseTime_45);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *var_use_analysis__FoundFirstUse_14 = base;
              MR_hl_field(MR_mktag(1), base, 0) = MR_box_float(var_use_analysis__UseTime_45);
            }
          }
      }
    else
      *var_use_analysis__FoundFirstUse_14 = var_use_analysis__CondFoundFirstUse_19;
  }
}

static MR_bool MR_CALL 
var_use_analysis__rec_switch_var_first_use_2_9_p_0_1(
  MR_Box var_use_analysis__closure_arg,
  MR_Box var_use_analysis__wrapper_arg_1,
  MR_Box * var_use_analysis__wrapper_arg_2)
{
  {
    MR_bool var_use_analysis__succeeded;
    MR_Box var_use_analysis__closure = var_use_analysis__closure_arg;
    MR_Word var_use_analysis__conv0_LambdaHeadVar__2_14;

    {
      var_use_analysis__succeeded = var_use_analysis__IntroducedFrom__pred__filter_recursive_call_sites__1257__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__closure, (MR_Integer) 3))), ((MR_Word) var_use_analysis__wrapper_arg_1), &var_use_analysis__conv0_LambdaHeadVar__2_14);
    }
    if (var_use_analysis__succeeded)
      {
        *var_use_analysis__wrapper_arg_2 = ((MR_Box) (var_use_analysis__conv0_LambdaHeadVar__2_14));
        var_use_analysis__succeeded = MR_TRUE;
      }
    return var_use_analysis__succeeded;
  }
}

static void MR_CALL 
var_use_analysis__rec_switch_var_first_use_2_9_p_0(
  MR_Word var_use_analysis__HeadVar__1_1,
  MR_Integer var_use_analysis__CaseNum_2,
  MR_Word var_use_analysis__RecCalls_3,
  MR_Word var_use_analysis__Info_4,
  MR_Float var_use_analysis__CostBeforeSwitch_5,
  MR_Word * var_use_analysis__HeadVar__6_6,
  MR_Word * var_use_analysis__HeadVar__7_7,
  MR_Word * var_use_analysis__HeadVar__8_8,
  MR_Word * var_use_analysis__HeadVar__9_9)
{
  {
    MR_bool var_use_analysis__succeeded;

    if ((var_use_analysis__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *var_use_analysis__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *var_use_analysis__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *var_use_analysis__HeadVar__8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *var_use_analysis__HeadVar__9_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    else
      {
        MR_Word var_use_analysis__TypeInfo_18_85;
        MR_Word var_use_analysis__Case_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word var_use_analysis__Cases_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word var_use_analysis__CasesWeights_24;
        MR_Word var_use_analysis__CasesFoundFirstUses_25;
        MR_Word var_use_analysis__CasesCostsAfter_26;
        MR_Word var_use_analysis__CasesRecProbs_27;
        MR_Word var_use_analysis__Goal_28;
        MR_Word var_use_analysis__GoalId_29;
        MR_Word var_use_analysis__CaseRecCalls_30;
        MR_Word var_use_analysis__FoundFirstUse_31;
        MR_Float var_use_analysis__CaseCostAfter_32;
        MR_Word var_use_analysis__Coverage_33;
        MR_Integer var_use_analysis__Before_34;
        MR_Float var_use_analysis__RecProb_35;
        MR_Float var_use_analysis__Weight_36;
        MR_Integer var_use_analysis__Var_37 = (var_use_analysis__CaseNum_2 + (MR_Integer) 1);
        MR_Word var_use_analysis__Var_39;
        MR_Word var_use_analysis__Var_41;
        MR_Word var_use_analysis__Var_42;
        MR_Word var_use_analysis__Var_43;
        MR_Word var_use_analysis__Var_78;
        MR_Word var_use_analysis__Var_44;
        MR_Word var_use_analysis__Var_45;
        MR_Word var_use_analysis__Var_46;
        MR_Word var_use_analysis__Var_47;
        MR_Word var_use_analysis__Var_48;
        MR_Word var_use_analysis__Var_49;
        MR_Word var_use_analysis__Var_50;
        MR_Word var_use_analysis__Var_51;
        MR_Integer var_use_analysis__Var_52;
        MR_Word var_use_analysis__Var_53;
        MR_Word var_use_analysis__Var_54;
        MR_Word var_use_analysis__Var_55;
        MR_Word var_use_analysis__Var_56;
        MR_Word var_use_analysis__Var_57;
        MR_Box var_use_analysis__conv1_Coverage_33;
        MR_Word var_use_analysis__Var_58;
        MR_Word var_use_analysis__Var_59;
        MR_Word var_use_analysis__Var_60;
        MR_Word var_use_analysis__Var_61;
        MR_Word var_use_analysis__Var_62;
        MR_Integer var_use_analysis__Var_63;
        MR_Word var_use_analysis__Var_64;
        MR_Word var_use_analysis__Var_65;
        MR_Word var_use_analysis__Var_66;
        MR_Word var_use_analysis__Var_67;
        MR_Word var_use_analysis__Var_68;
        MR_Box var_use_analysis__conv2_RecProb_35;

        {
          var_use_analysis__rec_switch_var_first_use_2_9_p_0(var_use_analysis__Cases_15, var_use_analysis__Var_37, var_use_analysis__RecCalls_3, var_use_analysis__Info_4, var_use_analysis__CostBeforeSwitch_5, &var_use_analysis__CasesWeights_24, &var_use_analysis__CasesFoundFirstUses_25, &var_use_analysis__CasesCostsAfter_26, &var_use_analysis__CasesRecProbs_27);
        }
        var_use_analysis__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Case_14, (MR_Integer) 0)));
        var_use_analysis__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Case_14, (MR_Integer) 1)));
        var_use_analysis__Goal_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Case_14, (MR_Integer) 2)));
        var_use_analysis__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Goal_28, (MR_Integer) 0)));
        var_use_analysis__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Goal_28, (MR_Integer) 1)));
        var_use_analysis__GoalId_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Goal_28, (MR_Integer) 2)));
        {
          var_use_analysis__Var_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), var_use_analysis__Var_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), var_use_analysis__Var_39, 1) = ((MR_Box) (var_use_analysis__CaseNum_2));
          MR_hl_field(MR_mktag(3), var_use_analysis__Var_39, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          var_use_analysis__Var_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), var_use_analysis__Var_78, 0) = ((MR_Box) (&var_use_analysis_scalar_common_9[1]));
          MR_hl_field(MR_mktag(0), var_use_analysis__Var_78, 1) = ((MR_Box) (var_use_analysis__rec_switch_var_first_use_2_9_p_0_1));
          MR_hl_field(MR_mktag(0), var_use_analysis__Var_78, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), var_use_analysis__Var_78, 3) = ((MR_Box) (var_use_analysis__Var_39));
        }
        var_use_analysis__TypeInfo_18_85 = (MR_Word) &var_use_analysis_scalar_common_2[4];
        {
          mercury__list__filter_map_3_p_0(var_use_analysis__TypeInfo_18_85, var_use_analysis__TypeInfo_18_85, var_use_analysis__Var_78, var_use_analysis__RecCalls_3, &var_use_analysis__CaseRecCalls_30);
        }
        {
          var_use_analysis__rec_goal_var_first_use_6_p_0(var_use_analysis__Goal_28, var_use_analysis__CaseRecCalls_30, var_use_analysis__Info_4, &var_use_analysis__FoundFirstUse_31, var_use_analysis__CostBeforeSwitch_5, &var_use_analysis__CaseCostAfter_32);
        }
        var_use_analysis__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 0)));
        var_use_analysis__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 1)));
        var_use_analysis__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 2)));
        var_use_analysis__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 3)));
        var_use_analysis__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 4)));
        var_use_analysis__Var_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 5)));
        var_use_analysis__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 6)));
        var_use_analysis__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 7)));
        var_use_analysis__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 8)));
        var_use_analysis__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 9)));
        var_use_analysis__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 10)));
        {
          var_use_analysis__conv1_Coverage_33 = mdbcomp__goal_path__get_goal_attribute_det_2_f_0((MR_Word) &coverage__coverage__type_ctor_info_coverage_info_0, var_use_analysis__Var_41, var_use_analysis__GoalId_29);
        }
        var_use_analysis__Coverage_33 = ((MR_Word) var_use_analysis__conv1_Coverage_33);
        {
          coverage__get_coverage_before_det_2_p_0(var_use_analysis__Coverage_33, &var_use_analysis__Before_34);
        }
        var_use_analysis__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 0)));
        var_use_analysis__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 1)));
        var_use_analysis__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 2)));
        var_use_analysis__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 3)));
        var_use_analysis__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 4)));
        var_use_analysis__Var_63 = ((MR_Integer) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 5)));
        var_use_analysis__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 6)));
        var_use_analysis__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 7)));
        var_use_analysis__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 8)));
        var_use_analysis__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 9)));
        var_use_analysis__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 10)));
        var_use_analysis__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__Var_43, (MR_Integer) 0)));
        var_use_analysis__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__Var_43, (MR_Integer) 1)));
        {
          var_use_analysis__conv2_RecProb_35 = mdbcomp__goal_path__get_goal_attribute_det_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0, var_use_analysis__Var_42, var_use_analysis__GoalId_29);
        }
        var_use_analysis__RecProb_35 = MR_unbox_float(var_use_analysis__conv2_RecProb_35);
        {
          var_use_analysis__Weight_36 = mercury__float__float_1_f_0(var_use_analysis__Before_34);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *var_use_analysis__HeadVar__6_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = MR_box_float(var_use_analysis__Weight_36);
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (var_use_analysis__CasesWeights_24));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *var_use_analysis__HeadVar__7_7 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (var_use_analysis__FoundFirstUse_31));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (var_use_analysis__CasesFoundFirstUses_25));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *var_use_analysis__HeadVar__8_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = MR_box_float(var_use_analysis__CaseCostAfter_32);
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (var_use_analysis__CasesCostsAfter_26));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *var_use_analysis__HeadVar__9_9 = base;
          MR_hl_field(MR_mktag(1), base, 0) = MR_box_float(var_use_analysis__RecProb_35);
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (var_use_analysis__CasesRecProbs_27));
        }
      }
  }
}

static void MR_CALL 
var_use_analysis__rec_switch_var_first_use_7_p_0_3(
  MR_Box var_use_analysis__closure_arg,
  MR_Box var_use_analysis__wrapper_arg_1,
  MR_Box * var_use_analysis__wrapper_arg_2)
{
  {
    MR_Box var_use_analysis__closure = var_use_analysis__closure_arg;
    MR_Float var_use_analysis__conv1_HeadVar__3_3;

    {
      var_use_analysis__ffu_to_float_3_p_0(MR_unbox_float((MR_hl_field(MR_mktag(0), var_use_analysis__closure, (MR_Integer) 3))), ((MR_Word) var_use_analysis__wrapper_arg_1), &var_use_analysis__conv1_HeadVar__3_3);
    }
    *var_use_analysis__wrapper_arg_2 = MR_box_float(var_use_analysis__conv1_HeadVar__3_3);
  }
}

static MR_bool MR_CALL 
var_use_analysis__rec_switch_var_first_use_7_p_0_2(
  MR_Box var_use_analysis__closure_arg,
  MR_Box var_use_analysis__wrapper_arg_1)
{
  {
    MR_bool var_use_analysis__succeeded;
    MR_Box var_use_analysis__closure = var_use_analysis__closure_arg;

    {
      var_use_analysis__succeeded = var_use_analysis__IntroducedFrom__pred__rec_switch_var_first_use__1482__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__closure, (MR_Integer) 3))), ((MR_Word) var_use_analysis__wrapper_arg_1));
    }
    return var_use_analysis__succeeded;
  }
}

static void MR_CALL 
var_use_analysis__rec_switch_var_first_use_7_p_0_1(
  MR_Box var_use_analysis__closure_arg,
  MR_Box var_use_analysis__wrapper_arg_1,
  MR_Box var_use_analysis__wrapper_arg_2,
  MR_Box * var_use_analysis__wrapper_arg_3)
{
  {
    MR_Box var_use_analysis__closure = var_use_analysis__closure_arg;
    MR_Float var_use_analysis__conv0_STATE_VARIABLE_Weight_10;

    {
      var_use_analysis__adjust_weight_for_recursion_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__closure, (MR_Integer) 3))), MR_unbox_float(var_use_analysis__wrapper_arg_1), MR_unbox_float(var_use_analysis__wrapper_arg_2), &var_use_analysis__conv0_STATE_VARIABLE_Weight_10);
    }
    *var_use_analysis__wrapper_arg_3 = MR_box_float(var_use_analysis__conv0_STATE_VARIABLE_Weight_10);
  }
}

static void MR_CALL 
var_use_analysis__rec_switch_var_first_use_7_p_0(
  MR_Word var_use_analysis__Cases_8,
  MR_Integer var_use_analysis__SwitchedOnVar_9,
  MR_Word var_use_analysis__RecCalls_10,
  MR_Word var_use_analysis__Info_11,
  MR_Word * var_use_analysis__FoundFirstUse_12,
  MR_Float var_use_analysis__CostBeforeSwitch_13,
  MR_Float * var_use_analysis__CostAfterSwitch_14)
{
  {
    MR_bool var_use_analysis__succeeded;
    MR_Word var_use_analysis__TypeCtorInfo_69_69;
    MR_Word var_use_analysis__CaseWeights0_15;
    MR_Word var_use_analysis__FoundFirstUseCases_16;
    MR_Word var_use_analysis__CostAfterCases_17;
    MR_Word var_use_analysis__RecProbs_18;
    MR_Word var_use_analysis__RecCase_19;
    MR_Word var_use_analysis__CaseWeights_20;
    MR_Integer var_use_analysis__Var_21;
    MR_Word var_use_analysis__Var_27;
    MR_Word var_use_analysis__Var_28;
    MR_Word var_use_analysis__Var_33;
    MR_Word var_use_analysis__Var_34;
    MR_Word var_use_analysis__Var_35;
    MR_Word var_use_analysis__Var_36;
    MR_Word var_use_analysis__Var_37;
    MR_Integer var_use_analysis__Var_38;
    MR_Word var_use_analysis__Var_39;
    MR_Word var_use_analysis__Var_40;
    MR_Word var_use_analysis__Var_41;
    MR_Word var_use_analysis__Var_42;
    MR_Word var_use_analysis__Var_43;
    MR_Word var_use_analysis__Var_44;
    MR_Word var_use_analysis__Var_45;
    MR_Word var_use_analysis__Var_46;
    MR_Word var_use_analysis__Var_47;
    MR_Word var_use_analysis__Var_48;
    MR_Word var_use_analysis__Var_49;
    MR_Word var_use_analysis__Var_50;
    MR_Word var_use_analysis__Var_51;
    MR_Word var_use_analysis__Var_52;
    MR_Word var_use_analysis__Var_53;

    {
      var_use_analysis__rec_switch_var_first_use_2_9_p_0(var_use_analysis__Cases_8, (MR_Integer) 1, var_use_analysis__RecCalls_10, var_use_analysis__Info_11, var_use_analysis__CostBeforeSwitch_13, &var_use_analysis__CaseWeights0_15, &var_use_analysis__FoundFirstUseCases_16, &var_use_analysis__CostAfterCases_17, &var_use_analysis__RecProbs_18);
    }
    var_use_analysis__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_11, (MR_Integer) 0)));
    var_use_analysis__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_11, (MR_Integer) 1)));
    var_use_analysis__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_11, (MR_Integer) 2)));
    var_use_analysis__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_11, (MR_Integer) 3)));
    var_use_analysis__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_11, (MR_Integer) 4)));
    var_use_analysis__Var_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_11, (MR_Integer) 5)));
    var_use_analysis__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_11, (MR_Integer) 6)));
    var_use_analysis__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_11, (MR_Integer) 7)));
    var_use_analysis__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_11, (MR_Integer) 8)));
    var_use_analysis__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_11, (MR_Integer) 9)));
    var_use_analysis__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_11, (MR_Integer) 10)));
    var_use_analysis__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__Var_27, (MR_Integer) 0)));
    var_use_analysis__RecCase_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__Var_27, (MR_Integer) 1)));
    {
      var_use_analysis__Var_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), var_use_analysis__Var_28, 0) = ((MR_Box) (&var_use_analysis_scalar_common_6[1]));
      MR_hl_field(MR_mktag(0), var_use_analysis__Var_28, 1) = ((MR_Box) (var_use_analysis__rec_switch_var_first_use_7_p_0_1));
      MR_hl_field(MR_mktag(0), var_use_analysis__Var_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), var_use_analysis__Var_28, 3) = ((MR_Box) (var_use_analysis__RecCase_19));
    }
    var_use_analysis__TypeCtorInfo_69_69 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0;
    {
      mercury__list__map_corresponding_4_p_0(var_use_analysis__TypeCtorInfo_69_69, var_use_analysis__TypeCtorInfo_69_69, var_use_analysis__TypeCtorInfo_69_69, var_use_analysis__Var_28, var_use_analysis__RecProbs_18, var_use_analysis__CaseWeights0_15, &var_use_analysis__CaseWeights_20);
    }
    {
      measurements__weighted_average_3_p_0(var_use_analysis__CaseWeights_20, var_use_analysis__CostAfterCases_17, var_use_analysis__CostAfterSwitch_14);
    }
    var_use_analysis__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_11, (MR_Integer) 0)));
    var_use_analysis__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_11, (MR_Integer) 1)));
    var_use_analysis__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_11, (MR_Integer) 2)));
    var_use_analysis__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_11, (MR_Integer) 3)));
    var_use_analysis__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_11, (MR_Integer) 4)));
    var_use_analysis__Var_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_11, (MR_Integer) 5)));
    var_use_analysis__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_11, (MR_Integer) 6)));
    var_use_analysis__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_11, (MR_Integer) 7)));
    var_use_analysis__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_11, (MR_Integer) 8)));
    var_use_analysis__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_11, (MR_Integer) 9)));
    var_use_analysis__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_11, (MR_Integer) 10)));
    var_use_analysis__succeeded = (var_use_analysis__Var_21 == var_use_analysis__SwitchedOnVar_9);
    if (var_use_analysis__succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *var_use_analysis__FoundFirstUse_12 = base;
        MR_hl_field(MR_mktag(1), base, 0) = MR_box_float(var_use_analysis__CostBeforeSwitch_13);
      }
    else
      {
        {
          var_use_analysis__succeeded = mercury__list__all_true_2_p_0((MR_Word) &var_use_analysis__var_use_analysis__type_ctor_info_found_first_use_0, (MR_Word) &var_use_analysis_scalar_common_8[1], var_use_analysis__FoundFirstUseCases_16);
        }
        if (var_use_analysis__succeeded)
          *var_use_analysis__FoundFirstUse_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_Word var_use_analysis__VarUseType_22;
            MR_Float var_use_analysis__DefaultCost_23;
            MR_Word var_use_analysis__FirstUseTimes_24;
            MR_Float var_use_analysis__UseTime_25;
            MR_Word var_use_analysis__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_11, (MR_Integer) 6)));
            MR_Word var_use_analysis__Var_32;
            MR_Word var_use_analysis__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_11, (MR_Integer) 0)));
            MR_Word var_use_analysis__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_11, (MR_Integer) 1)));
            MR_Word var_use_analysis__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_11, (MR_Integer) 2)));
            MR_Word var_use_analysis__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_11, (MR_Integer) 3)));
            MR_Word var_use_analysis__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_11, (MR_Integer) 4)));
            MR_Integer var_use_analysis__Var_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_11, (MR_Integer) 5)));
            MR_Word var_use_analysis__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_11, (MR_Integer) 7)));
            MR_Word var_use_analysis__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_11, (MR_Integer) 8)));
            MR_Word var_use_analysis__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_11, (MR_Integer) 9)));
            MR_Word var_use_analysis__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_11, (MR_Integer) 10)));
            MR_Word var_use_analysis__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Var_31, (MR_Integer) 0)));
            MR_Word var_use_analysis__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Var_31, (MR_Integer) 1)));

            var_use_analysis__VarUseType_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Var_31, (MR_Integer) 2)));
            switch (var_use_analysis__VarUseType_22) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                var_use_analysis__DefaultCost_23 = *var_use_analysis__CostAfterSwitch_14;
                break;
              case (MR_Integer) 2:
              case (MR_Integer) 0:
                var_use_analysis__DefaultCost_23 = var_use_analysis__CostBeforeSwitch_13;
                break;
            }
            {
              var_use_analysis__Var_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), var_use_analysis__Var_32, 0) = ((MR_Box) (&var_use_analysis_scalar_common_9[0]));
              MR_hl_field(MR_mktag(0), var_use_analysis__Var_32, 1) = ((MR_Box) (var_use_analysis__rec_switch_var_first_use_7_p_0_3));
              MR_hl_field(MR_mktag(0), var_use_analysis__Var_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), var_use_analysis__Var_32, 3) = MR_box_float(var_use_analysis__DefaultCost_23);
            }
            {
              mercury__list__map_3_p_0((MR_Word) &var_use_analysis__var_use_analysis__type_ctor_info_found_first_use_0, var_use_analysis__TypeCtorInfo_69_69, var_use_analysis__Var_32, var_use_analysis__FoundFirstUseCases_16, &var_use_analysis__FirstUseTimes_24);
            }
            {
              measurements__weighted_average_3_p_0(var_use_analysis__CaseWeights_20, var_use_analysis__FirstUseTimes_24, &var_use_analysis__UseTime_25);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *var_use_analysis__FoundFirstUse_12 = base;
              MR_hl_field(MR_mktag(1), base, 0) = MR_box_float(var_use_analysis__UseTime_25);
            }
          }
      }
  }
}

static MR_bool MR_CALL 
var_use_analysis__rec_disj_var_first_use_2_7_p_0_1(
  MR_Box var_use_analysis__closure_arg,
  MR_Box var_use_analysis__wrapper_arg_1,
  MR_Box * var_use_analysis__wrapper_arg_2)
{
  {
    MR_bool var_use_analysis__succeeded;
    MR_Box var_use_analysis__closure = var_use_analysis__closure_arg;
    MR_Word var_use_analysis__conv0_LambdaHeadVar__2_14;

    {
      var_use_analysis__succeeded = var_use_analysis__IntroducedFrom__pred__filter_recursive_call_sites__1257__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__closure, (MR_Integer) 3))), ((MR_Word) var_use_analysis__wrapper_arg_1), &var_use_analysis__conv0_LambdaHeadVar__2_14);
    }
    if (var_use_analysis__succeeded)
      {
        *var_use_analysis__wrapper_arg_2 = ((MR_Box) (var_use_analysis__conv0_LambdaHeadVar__2_14));
        var_use_analysis__succeeded = MR_TRUE;
      }
    return var_use_analysis__succeeded;
  }
}

static void MR_CALL 
var_use_analysis__rec_disj_var_first_use_2_7_p_0(
  MR_Word var_use_analysis__HeadVar__1_1,
  MR_Integer var_use_analysis__DisjNum_2,
  MR_Word var_use_analysis__RecCalls_3,
  MR_Word var_use_analysis__Info_4,
  MR_Word * var_use_analysis__HeadVar__5_5,
  MR_Float var_use_analysis__STATE_VARIABLE_CostSoFar_0_6,
  MR_Float * var_use_analysis__STATE_VARIABLE_CostSoFar_7)
{
  {
    MR_bool var_use_analysis__succeeded;

    if ((var_use_analysis__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *var_use_analysis__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *var_use_analysis__STATE_VARIABLE_CostSoFar_7 = var_use_analysis__STATE_VARIABLE_CostSoFar_0_6;
      }
    else
      {
        MR_Word var_use_analysis__TypeInfo_18_73;
        MR_Word var_use_analysis__Disj_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word var_use_analysis__Disjs_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word var_use_analysis__DisjRecCalls_21;
        MR_Word var_use_analysis__DisjFoundFirstUse_22;
        MR_Word var_use_analysis__CoverageArray_23;
        MR_Word var_use_analysis__Coverage_24;
        MR_Integer var_use_analysis__Before_25;
        MR_Integer var_use_analysis__After_26;
        MR_Float var_use_analysis__CostDisjs_27;
        MR_Word var_use_analysis__Var_34;
        MR_Float var_use_analysis__STATE_VARIABLE_CostSoFar_35_35;
        MR_Word var_use_analysis__Var_36;
        MR_Word var_use_analysis__Var_66;
        MR_Word var_use_analysis__Var_46;
        MR_Word var_use_analysis__Var_47;
        MR_Word var_use_analysis__Var_48;
        MR_Word var_use_analysis__Var_49;
        MR_Integer var_use_analysis__Var_50;
        MR_Word var_use_analysis__Var_51;
        MR_Word var_use_analysis__Var_52;
        MR_Word var_use_analysis__Var_53;
        MR_Word var_use_analysis__Var_54;
        MR_Word var_use_analysis__Var_55;
        MR_Word var_use_analysis__Var_56;
        MR_Word var_use_analysis__Var_57;
        MR_Box var_use_analysis__conv1_Coverage_24;

        {
          var_use_analysis__Var_34 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), var_use_analysis__Var_34, 0) = ((MR_Box) (var_use_analysis__DisjNum_2));
        }
        {
          var_use_analysis__Var_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), var_use_analysis__Var_66, 0) = ((MR_Box) (&var_use_analysis_scalar_common_9[1]));
          MR_hl_field(MR_mktag(0), var_use_analysis__Var_66, 1) = ((MR_Box) (var_use_analysis__rec_disj_var_first_use_2_7_p_0_1));
          MR_hl_field(MR_mktag(0), var_use_analysis__Var_66, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), var_use_analysis__Var_66, 3) = ((MR_Box) (var_use_analysis__Var_34));
        }
        var_use_analysis__TypeInfo_18_73 = (MR_Word) &var_use_analysis_scalar_common_2[4];
        {
          mercury__list__filter_map_3_p_0(var_use_analysis__TypeInfo_18_73, var_use_analysis__TypeInfo_18_73, var_use_analysis__Var_66, var_use_analysis__RecCalls_3, &var_use_analysis__DisjRecCalls_21);
        }
        {
          var_use_analysis__rec_goal_var_first_use_6_p_0(var_use_analysis__Disj_14, var_use_analysis__DisjRecCalls_21, var_use_analysis__Info_4, &var_use_analysis__DisjFoundFirstUse_22, var_use_analysis__STATE_VARIABLE_CostSoFar_0_6, &var_use_analysis__STATE_VARIABLE_CostSoFar_35_35);
        }
        var_use_analysis__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 0)));
        var_use_analysis__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 1)));
        var_use_analysis__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 2)));
        var_use_analysis__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 3)));
        var_use_analysis__CoverageArray_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 4)));
        var_use_analysis__Var_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 5)));
        var_use_analysis__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 6)));
        var_use_analysis__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 7)));
        var_use_analysis__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 8)));
        var_use_analysis__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 9)));
        var_use_analysis__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_4, (MR_Integer) 10)));
        var_use_analysis__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Disj_14, (MR_Integer) 0)));
        var_use_analysis__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Disj_14, (MR_Integer) 1)));
        var_use_analysis__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Disj_14, (MR_Integer) 2)));
        {
          var_use_analysis__conv1_Coverage_24 = mdbcomp__goal_path__get_goal_attribute_det_2_f_0((MR_Word) &coverage__coverage__type_ctor_info_coverage_info_0, var_use_analysis__CoverageArray_23, var_use_analysis__Var_36);
        }
        var_use_analysis__Coverage_24 = ((MR_Word) var_use_analysis__conv1_Coverage_24);
        {
          coverage__get_coverage_before_and_after_det_3_p_0(var_use_analysis__Coverage_24, &var_use_analysis__Before_25, &var_use_analysis__After_26);
        }
        var_use_analysis__succeeded = (var_use_analysis__Before_25 == (MR_Integer) 0);
        if (var_use_analysis__succeeded)
          {
            var_use_analysis__CostDisjs_27 = (MR_Float) 0.0000000000000000;
            *var_use_analysis__HeadVar__5_5 = var_use_analysis__DisjFoundFirstUse_22;
          }
        else
          {
            MR_Word var_use_analysis__DisjsFoundFirstUse_28;
            MR_Float var_use_analysis__CostDisjs0_29;
            MR_Float var_use_analysis__FailureProb_30;
            MR_Integer var_use_analysis__Var_37 = (var_use_analysis__DisjNum_2 + (MR_Integer) 1);
            MR_Float var_use_analysis__Var_40;
            MR_Float var_use_analysis__Var_41;
            MR_Integer var_use_analysis__Var_42;
            MR_Float var_use_analysis__Var_43;
            MR_Float var_use_analysis__Var_44;

            {
              var_use_analysis__rec_disj_var_first_use_2_7_p_0(var_use_analysis__Disjs_15, var_use_analysis__Var_37, var_use_analysis__RecCalls_3, var_use_analysis__Info_4, &var_use_analysis__DisjsFoundFirstUse_28, (MR_Float) 0.0000000000000000, &var_use_analysis__CostDisjs0_29);
            }
            var_use_analysis__Var_42 = (var_use_analysis__Before_25 - var_use_analysis__After_26);
            {
              var_use_analysis__Var_41 = mercury__float__float_1_f_0(var_use_analysis__Var_42);
            }
            {
              var_use_analysis__Var_43 = mercury__float__float_1_f_0(var_use_analysis__Before_25);
            }
            {
              var_use_analysis__Var_40 = mercury__float__f_slash_2_f_0(var_use_analysis__Var_41, var_use_analysis__Var_43);
            }
            {
              var_use_analysis__FailureProb_30 = measurement_units__probable_1_f_0(var_use_analysis__Var_40);
            }
            {
              var_use_analysis__Var_44 = measurement_units__probability_to_float_1_f_0(var_use_analysis__FailureProb_30);
            }
            var_use_analysis__CostDisjs_27 = (var_use_analysis__CostDisjs0_29 * var_use_analysis__Var_44);
            if ((var_use_analysis__DisjFoundFirstUse_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              *var_use_analysis__HeadVar__5_5 = var_use_analysis__DisjsFoundFirstUse_28;
            else
              *var_use_analysis__HeadVar__5_5 = var_use_analysis__DisjFoundFirstUse_22;
          }
        *var_use_analysis__STATE_VARIABLE_CostSoFar_7 = (var_use_analysis__STATE_VARIABLE_CostSoFar_35_35 + var_use_analysis__CostDisjs_27);
      }
  }
}

static void MR_CALL 
var_use_analysis__rec_disj_var_first_use_6_p_0(
  MR_Word var_use_analysis__Disjs_7,
  MR_Word var_use_analysis__RecCalls_8,
  MR_Word var_use_analysis__Info_9,
  MR_Word * var_use_analysis__FoundFirstUse_10,
  MR_Float var_use_analysis__STATE_VARIABLE_CostSoFar_0_17,
  MR_Float * var_use_analysis__STATE_VARIABLE_CostSoFar_18)
{
  {
    MR_bool var_use_analysis__succeeded;
    MR_Word var_use_analysis__FoundFirstUse0_13;

    {
      var_use_analysis__rec_disj_var_first_use_2_7_p_0(var_use_analysis__Disjs_7, (MR_Integer) 1, var_use_analysis__RecCalls_8, var_use_analysis__Info_9, &var_use_analysis__FoundFirstUse0_13, var_use_analysis__STATE_VARIABLE_CostSoFar_0_17, var_use_analysis__STATE_VARIABLE_CostSoFar_18);
    }
    if ((var_use_analysis__FoundFirstUse0_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *var_use_analysis__FoundFirstUse_10 = var_use_analysis__FoundFirstUse0_13;
    else
      {
        MR_Word var_use_analysis__VarUseType_16;
        MR_Word var_use_analysis__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 6)));
        MR_Word var_use_analysis__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 0)));
        MR_Word var_use_analysis__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 1)));
        MR_Word var_use_analysis__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 2)));
        MR_Word var_use_analysis__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 3)));
        MR_Word var_use_analysis__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 4)));
        MR_Integer var_use_analysis__Var_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 5)));
        MR_Word var_use_analysis__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 7)));
        MR_Word var_use_analysis__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 8)));
        MR_Word var_use_analysis__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 9)));
        MR_Word var_use_analysis__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 10)));
        MR_Word var_use_analysis__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Var_21, (MR_Integer) 0)));
        MR_Word var_use_analysis__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Var_21, (MR_Integer) 1)));

        var_use_analysis__VarUseType_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Var_21, (MR_Integer) 2)));
        switch (var_use_analysis__VarUseType_16) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *var_use_analysis__FoundFirstUse_10 = base;
              MR_hl_field(MR_mktag(1), base, 0) = MR_box_float(var_use_analysis__STATE_VARIABLE_CostSoFar_0_17);
            }
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 0:
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *var_use_analysis__FoundFirstUse_10 = base;
              MR_hl_field(MR_mktag(1), base, 0) = MR_box_float(*var_use_analysis__STATE_VARIABLE_CostSoFar_18);
            }
            break;
        }
      }
  }
}

static MR_bool MR_CALL 
var_use_analysis__rec_conj_var_first_use_7_p_0_1(
  MR_Box var_use_analysis__closure_arg,
  MR_Box var_use_analysis__wrapper_arg_1,
  MR_Box * var_use_analysis__wrapper_arg_2)
{
  {
    MR_bool var_use_analysis__succeeded;
    MR_Box var_use_analysis__closure = var_use_analysis__closure_arg;
    MR_Word var_use_analysis__conv0_LambdaHeadVar__2_14;

    {
      var_use_analysis__succeeded = var_use_analysis__IntroducedFrom__pred__filter_recursive_call_sites__1257__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__closure, (MR_Integer) 3))), ((MR_Word) var_use_analysis__wrapper_arg_1), &var_use_analysis__conv0_LambdaHeadVar__2_14);
    }
    if (var_use_analysis__succeeded)
      {
        *var_use_analysis__wrapper_arg_2 = ((MR_Box) (var_use_analysis__conv0_LambdaHeadVar__2_14));
        var_use_analysis__succeeded = MR_TRUE;
      }
    return var_use_analysis__succeeded;
  }
}

static void MR_CALL 
var_use_analysis__rec_conj_var_first_use_7_p_0(
  MR_Word var_use_analysis__HeadVar__1_1,
  MR_Integer var_use_analysis__ConjNum_2,
  MR_Word var_use_analysis__RecCalls_3,
  MR_Word var_use_analysis__StaticInfo_4,
  MR_Word * var_use_analysis__HeadVar__5_5,
  MR_Float var_use_analysis__STATE_VARIABLE_CostSoFar_0_6,
  MR_Float * var_use_analysis__STATE_VARIABLE_CostSoFar_7)
{
  {
    MR_bool var_use_analysis__succeeded;

    if ((var_use_analysis__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *var_use_analysis__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *var_use_analysis__STATE_VARIABLE_CostSoFar_7 = var_use_analysis__STATE_VARIABLE_CostSoFar_0_6;
      }
    else
      {
        MR_Word var_use_analysis__TypeInfo_18_46;
        MR_Word var_use_analysis__Conj_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word var_use_analysis__Conjs_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word var_use_analysis__ConjRecCalls_21;
        MR_Word var_use_analysis__ConjFoundFirstUse_22;
        MR_Word var_use_analysis__ConjsFoundFirstUse_23;
        MR_Word var_use_analysis__Var_27;
        MR_Float var_use_analysis__STATE_VARIABLE_CostSoFar_28_28;
        MR_Integer var_use_analysis__Var_29;
        MR_Word var_use_analysis__Var_39;

        {
          var_use_analysis__Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), var_use_analysis__Var_27, 0) = ((MR_Box) (var_use_analysis__ConjNum_2));
        }
        {
          var_use_analysis__Var_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), var_use_analysis__Var_39, 0) = ((MR_Box) (&var_use_analysis_scalar_common_9[1]));
          MR_hl_field(MR_mktag(0), var_use_analysis__Var_39, 1) = ((MR_Box) (var_use_analysis__rec_conj_var_first_use_7_p_0_1));
          MR_hl_field(MR_mktag(0), var_use_analysis__Var_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), var_use_analysis__Var_39, 3) = ((MR_Box) (var_use_analysis__Var_27));
        }
        var_use_analysis__TypeInfo_18_46 = (MR_Word) &var_use_analysis_scalar_common_2[4];
        {
          mercury__list__filter_map_3_p_0(var_use_analysis__TypeInfo_18_46, var_use_analysis__TypeInfo_18_46, var_use_analysis__Var_39, var_use_analysis__RecCalls_3, &var_use_analysis__ConjRecCalls_21);
        }
        {
          var_use_analysis__rec_goal_var_first_use_6_p_0(var_use_analysis__Conj_14, var_use_analysis__ConjRecCalls_21, var_use_analysis__StaticInfo_4, &var_use_analysis__ConjFoundFirstUse_22, var_use_analysis__STATE_VARIABLE_CostSoFar_0_6, &var_use_analysis__STATE_VARIABLE_CostSoFar_28_28);
        }
        var_use_analysis__Var_29 = (var_use_analysis__ConjNum_2 + (MR_Integer) 1);
        {
          var_use_analysis__rec_conj_var_first_use_7_p_0(var_use_analysis__Conjs_15, var_use_analysis__Var_29, var_use_analysis__RecCalls_3, var_use_analysis__StaticInfo_4, &var_use_analysis__ConjsFoundFirstUse_23, var_use_analysis__STATE_VARIABLE_CostSoFar_28_28, var_use_analysis__STATE_VARIABLE_CostSoFar_7);
        }
        if ((var_use_analysis__ConjFoundFirstUse_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *var_use_analysis__HeadVar__5_5 = var_use_analysis__ConjsFoundFirstUse_23;
        else
          *var_use_analysis__HeadVar__5_5 = var_use_analysis__ConjFoundFirstUse_22;
      }
  }
}

static void MR_CALL 
var_use_analysis__rec_goal_var_first_use_6_p_0(
  MR_Word var_use_analysis__Goal_7,
  MR_Word var_use_analysis__RecCalls_8,
  MR_Word var_use_analysis__Info_9,
  MR_Word * var_use_analysis__FoundFirstUse_10,
  MR_Float var_use_analysis__STATE_VARIABLE_CostSoFar_0_70,
  MR_Float * var_use_analysis__STATE_VARIABLE_CostSoFar_71)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool var_use_analysis__succeeded;
        MR_Word var_use_analysis__GoalExpr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Goal_7, (MR_Integer) 0)));
        MR_Word var_use_analysis__Detism_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Goal_7, (MR_Integer) 1)));
        MR_Word var_use_analysis__GoalId_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Goal_7, (MR_Integer) 2)));
        MR_Word var_use_analysis__Coverage_15;
        MR_Integer var_use_analysis__Before_16;
        MR_Integer var_use_analysis__After_17;
        MR_Word var_use_analysis__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 4)));
        MR_Word var_use_analysis__Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 0)));
        MR_Word var_use_analysis__Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 1)));
        MR_Word var_use_analysis__Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 2)));
        MR_Word var_use_analysis__Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 3)));
        MR_Integer var_use_analysis__Var_94 = ((MR_Integer) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 5)));
        MR_Word var_use_analysis__Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 6)));
        MR_Word var_use_analysis__Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 7)));
        MR_Word var_use_analysis__Var_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 8)));
        MR_Word var_use_analysis__Var_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 9)));
        MR_Word var_use_analysis__Var_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 10)));
        MR_Box var_use_analysis__conv0_Coverage_15;

        {
          var_use_analysis__conv0_Coverage_15 = mdbcomp__goal_path__get_goal_attribute_det_2_f_0((MR_Word) &coverage__coverage__type_ctor_info_coverage_info_0, var_use_analysis__Var_72, var_use_analysis__GoalId_14);
        }
        var_use_analysis__Coverage_15 = ((MR_Word) var_use_analysis__conv0_Coverage_15);
        {
          coverage__get_coverage_before_and_after_det_3_p_0(var_use_analysis__Coverage_15, &var_use_analysis__Before_16, &var_use_analysis__After_17);
        }
        var_use_analysis__succeeded = (var_use_analysis__Before_16 == (MR_Integer) 0);
        if (!(var_use_analysis__succeeded))
          {
            MR_Word var_use_analysis__VarUseType_18;
            MR_Word var_use_analysis__Var_73;
            MR_Word var_use_analysis__Var_100;
            MR_Word var_use_analysis__Var_101;
            MR_Word var_use_analysis__Var_102;
            MR_Word var_use_analysis__Var_103;
            MR_Word var_use_analysis__Var_104;
            MR_Integer var_use_analysis__Var_105;
            MR_Word var_use_analysis__Var_106;
            MR_Word var_use_analysis__Var_107;
            MR_Word var_use_analysis__Var_108;
            MR_Word var_use_analysis__Var_109;
            MR_Word var_use_analysis__Var_110;
            MR_Word var_use_analysis__Var_111;

            switch (var_use_analysis__Detism_13) {
              default:
                var_use_analysis__succeeded = MR_FALSE;
                break;
              case (MR_Integer) 6:
                var_use_analysis__succeeded = MR_TRUE;
                break;
              case (MR_Integer) 7:
                var_use_analysis__succeeded = MR_TRUE;
                break;
            }
            if (!(var_use_analysis__succeeded))
              var_use_analysis__succeeded = (var_use_analysis__After_17 == (MR_Integer) 0);
            if (var_use_analysis__succeeded)
              {
                var_use_analysis__Var_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 0)));
                var_use_analysis__Var_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 1)));
                var_use_analysis__Var_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 2)));
                var_use_analysis__Var_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 3)));
                var_use_analysis__Var_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 4)));
                var_use_analysis__Var_105 = ((MR_Integer) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 5)));
                var_use_analysis__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 6)));
                var_use_analysis__Var_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 7)));
                var_use_analysis__Var_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 8)));
                var_use_analysis__Var_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 9)));
                var_use_analysis__Var_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 10)));
                var_use_analysis__Var_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Var_73, (MR_Integer) 0)));
                var_use_analysis__Var_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Var_73, (MR_Integer) 1)));
                var_use_analysis__VarUseType_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Var_73, (MR_Integer) 2)));
                var_use_analysis__succeeded = (var_use_analysis__VarUseType_18 == (MR_Integer) 0);
              }
          }
        if (var_use_analysis__succeeded)
          {
            *var_use_analysis__FoundFirstUse_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            *var_use_analysis__STATE_VARIABLE_CostSoFar_71 = var_use_analysis__STATE_VARIABLE_CostSoFar_0_70;
          }
        else
          switch (MR_tag((MR_Word) var_use_analysis__GoalExpr_12)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word var_use_analysis__Conjs_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__GoalExpr_12, (MR_Integer) 0)));

                {
                  var_use_analysis__rec_conj_var_first_use_7_p_0(var_use_analysis__Conjs_19, (MR_Integer) 1, var_use_analysis__RecCalls_8, var_use_analysis__Info_9, var_use_analysis__FoundFirstUse_10, var_use_analysis__STATE_VARIABLE_CostSoFar_0_70, var_use_analysis__STATE_VARIABLE_CostSoFar_71);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word var_use_analysis__Disjs_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__GoalExpr_12, (MR_Integer) 0)));

                {
                  var_use_analysis__rec_disj_var_first_use_6_p_0(var_use_analysis__Disjs_20, var_use_analysis__RecCalls_8, var_use_analysis__Info_9, var_use_analysis__FoundFirstUse_10, var_use_analysis__STATE_VARIABLE_CostSoFar_0_70, var_use_analysis__STATE_VARIABLE_CostSoFar_71);
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Integer var_use_analysis__SwitchedOnVar_21 = ((MR_Integer) (MR_hl_field(MR_mktag(2), var_use_analysis__GoalExpr_12, (MR_Integer) 0)));
                MR_Word var_use_analysis__Cases_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), var_use_analysis__GoalExpr_12, (MR_Integer) 2)));
                MR_Word var_use_analysis___CanFail_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), var_use_analysis__GoalExpr_12, (MR_Integer) 1)));

                {
                  var_use_analysis__rec_switch_var_first_use_7_p_0(var_use_analysis__Cases_23, var_use_analysis__SwitchedOnVar_21, var_use_analysis__RecCalls_8, var_use_analysis__Info_9, var_use_analysis__FoundFirstUse_10, var_use_analysis__STATE_VARIABLE_CostSoFar_0_70, var_use_analysis__STATE_VARIABLE_CostSoFar_71);
                }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), var_use_analysis__GoalExpr_12, (MR_Integer) 0)))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word var_use_analysis__Cond_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), var_use_analysis__GoalExpr_12, (MR_Integer) 1)));
                    MR_Word var_use_analysis__Then_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), var_use_analysis__GoalExpr_12, (MR_Integer) 2)));
                    MR_Word var_use_analysis__Else_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), var_use_analysis__GoalExpr_12, (MR_Integer) 3)));

                    {
                      var_use_analysis__rec_ite_var_first_use_8_p_0(var_use_analysis__Cond_24, var_use_analysis__Then_25, var_use_analysis__Else_26, var_use_analysis__RecCalls_8, var_use_analysis__Info_9, var_use_analysis__FoundFirstUse_10, var_use_analysis__STATE_VARIABLE_CostSoFar_0_70, var_use_analysis__STATE_VARIABLE_CostSoFar_71);
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word var_use_analysis__SubGoal_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), var_use_analysis__GoalExpr_12, (MR_Integer) 1)));
                    MR_Word var_use_analysis__RecCallsSubGoal_30;

                    {
                      var_use_analysis__filter_recursive_call_sites_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), var_use_analysis__RecCalls_8, &var_use_analysis__RecCallsSubGoal_30);
                    }
                    /* direct tailcall eliminated */
                    {
                      MR_Word var_use_analysis__next_value_of_Goal_7 = var_use_analysis__SubGoal_27;
                      MR_Word var_use_analysis__next_value_of_RecCalls_8 = var_use_analysis__RecCallsSubGoal_30;

                      var_use_analysis__RecCalls_8 = var_use_analysis__next_value_of_RecCalls_8;
                      var_use_analysis__Goal_7 = var_use_analysis__next_value_of_Goal_7;
                    }
                    continue;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word var_use_analysis__ScopeIsCut_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), var_use_analysis__GoalExpr_12, (MR_Integer) 2)));
                    MR_Word var_use_analysis__SubGoal_133 = ((MR_Word) (MR_hl_field(MR_mktag(3), var_use_analysis__GoalExpr_12, (MR_Integer) 1)));
                    MR_Word var_use_analysis__GoalPathStep_134;
                    MR_Word var_use_analysis__RecCallsSubGoal_135;

                    {
                      var_use_analysis__GoalPathStep_134 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), var_use_analysis__GoalPathStep_134, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), var_use_analysis__GoalPathStep_134, 1) = ((MR_Box) (var_use_analysis__ScopeIsCut_29));
                    }
                    {
                      var_use_analysis__filter_recursive_call_sites_3_p_0(var_use_analysis__GoalPathStep_134, var_use_analysis__RecCalls_8, &var_use_analysis__RecCallsSubGoal_135);
                    }
                    /* direct tailcall eliminated */
                    {
                      MR_Word var_use_analysis__next_value_of_Goal_7 = var_use_analysis__SubGoal_133;
                      MR_Word var_use_analysis__next_value_of_RecCalls_8 = var_use_analysis__RecCallsSubGoal_135;

                      var_use_analysis__RecCalls_8 = var_use_analysis__next_value_of_RecCalls_8;
                      var_use_analysis__Goal_7 = var_use_analysis__next_value_of_Goal_7;
                    }
                    continue;
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Word var_use_analysis__BoundVars_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), var_use_analysis__GoalExpr_12, (MR_Integer) 3)));
                    MR_Word var_use_analysis__AtomicGoal_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), var_use_analysis__GoalExpr_12, (MR_Integer) 4)));
                    MR_String var_use_analysis__Var_31 = ((MR_String) (MR_hl_field(MR_mktag(3), var_use_analysis__GoalExpr_12, (MR_Integer) 1)));
                    MR_Integer var_use_analysis__Var_32 = ((MR_Integer) (MR_hl_field(MR_mktag(3), var_use_analysis__GoalExpr_12, (MR_Integer) 2)));

                    switch (MR_tag((MR_Word) var_use_analysis__AtomicGoal_34)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                      case (MR_Integer) 1:
                      case (MR_Integer) 2:
                        {
                          {
                            var_use_analysis__atomic_trivial_var_first_use_5_p_0(var_use_analysis__AtomicGoal_34, var_use_analysis__BoundVars_33, var_use_analysis__STATE_VARIABLE_CostSoFar_0_70, var_use_analysis__Info_9, var_use_analysis__FoundFirstUse_10);
                          }
                          *var_use_analysis__STATE_VARIABLE_CostSoFar_71 = var_use_analysis__STATE_VARIABLE_CostSoFar_0_70;
                        }
                        break;
                      case (MR_Integer) 3:
                        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), var_use_analysis__AtomicGoal_34, (MR_Integer) 0)))) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                          case (MR_Integer) 1:
                          case (MR_Integer) 2:
                          case (MR_Integer) 3:
                          case (MR_Integer) 4:
                          case (MR_Integer) 8:
                          case (MR_Integer) 9:
                            {
                              {
                                var_use_analysis__atomic_trivial_var_first_use_5_p_0(var_use_analysis__AtomicGoal_34, var_use_analysis__BoundVars_33, var_use_analysis__STATE_VARIABLE_CostSoFar_0_70, var_use_analysis__Info_9, var_use_analysis__FoundFirstUse_10);
                              }
                              *var_use_analysis__STATE_VARIABLE_CostSoFar_71 = var_use_analysis__STATE_VARIABLE_CostSoFar_0_70;
                            }
                            break;
                          case (MR_Integer) 5:
                          case (MR_Integer) 6:
                          case (MR_Integer) 7:
                            {
                              MR_Word var_use_analysis__ContainingGoalMap_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 3)));
                              MR_Word var_use_analysis__RevGoalPath_44;
                              MR_Word var_use_analysis__Var_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 0)));
                              MR_Word var_use_analysis__Var_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 1)));
                              MR_Word var_use_analysis__Var_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 2)));
                              MR_Word var_use_analysis__Var_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 4)));
                              MR_Integer var_use_analysis__Var_116 = ((MR_Integer) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 5)));
                              MR_Word var_use_analysis__Var_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 6)));
                              MR_Word var_use_analysis__Var_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 7)));
                              MR_Word var_use_analysis__Var_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 8)));
                              MR_Word var_use_analysis__Var_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 9)));
                              MR_Word var_use_analysis__Var_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_9, (MR_Integer) 10)));

                              {
                                var_use_analysis__RevGoalPath_44 = mdbcomp__goal_path__goal_id_to_reverse_path_2_f_0(var_use_analysis__ContainingGoalMap_43, var_use_analysis__GoalId_14);
                              }
                              {
                                var_use_analysis__call_var_first_use_7_p_0(var_use_analysis__AtomicGoal_34, var_use_analysis__BoundVars_33, var_use_analysis__RevGoalPath_44, var_use_analysis__Info_9, var_use_analysis__FoundFirstUse_10, var_use_analysis__STATE_VARIABLE_CostSoFar_0_70, var_use_analysis__STATE_VARIABLE_CostSoFar_71);
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

static MR_bool MR_CALL 
var_use_analysis__filter_recursive_call_sites_3_p_0_1(
  MR_Box var_use_analysis__closure_arg,
  MR_Box var_use_analysis__wrapper_arg_1,
  MR_Box * var_use_analysis__wrapper_arg_2)
{
  {
    MR_bool var_use_analysis__succeeded;
    MR_Box var_use_analysis__closure = var_use_analysis__closure_arg;
    MR_Word var_use_analysis__conv0_LambdaHeadVar__2_14;

    {
      var_use_analysis__succeeded = var_use_analysis__IntroducedFrom__pred__filter_recursive_call_sites__1257__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__closure, (MR_Integer) 3))), ((MR_Word) var_use_analysis__wrapper_arg_1), &var_use_analysis__conv0_LambdaHeadVar__2_14);
    }
    if (var_use_analysis__succeeded)
      {
        *var_use_analysis__wrapper_arg_2 = ((MR_Box) (var_use_analysis__conv0_LambdaHeadVar__2_14));
        var_use_analysis__succeeded = MR_TRUE;
      }
    return var_use_analysis__succeeded;
  }
}

static void MR_CALL 
var_use_analysis__filter_recursive_call_sites_3_p_0(
  MR_Word var_use_analysis__GoalPathStep_4,
  MR_Word var_use_analysis__STATE_VARIABLE_RecCallSites_0_9,
  MR_Word * var_use_analysis__STATE_VARIABLE_RecCallSites_10)
{
  {
    MR_bool var_use_analysis__succeeded;
    MR_Word var_use_analysis__TypeInfo_18_18;
    MR_Word var_use_analysis__Var_11;

    {
      var_use_analysis__Var_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), var_use_analysis__Var_11, 0) = ((MR_Box) (&var_use_analysis_scalar_common_9[1]));
      MR_hl_field(MR_mktag(0), var_use_analysis__Var_11, 1) = ((MR_Box) (var_use_analysis__filter_recursive_call_sites_3_p_0_1));
      MR_hl_field(MR_mktag(0), var_use_analysis__Var_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), var_use_analysis__Var_11, 3) = ((MR_Box) (var_use_analysis__GoalPathStep_4));
    }
    var_use_analysis__TypeInfo_18_18 = (MR_Word) &var_use_analysis_scalar_common_2[4];
    {
      mercury__list__filter_map_3_p_0(var_use_analysis__TypeInfo_18_18, var_use_analysis__TypeInfo_18_18, var_use_analysis__Var_11, var_use_analysis__STATE_VARIABLE_RecCallSites_0_9, var_use_analysis__STATE_VARIABLE_RecCallSites_10);
    }
  }
}

static void MR_CALL 
var_use_analysis__build_recursive_call_sites_list_2_p_0_1(
  MR_Box var_use_analysis__closure_arg,
  MR_Box var_use_analysis__wrapper_arg_1,
  MR_Box * var_use_analysis__wrapper_arg_2)
{
  {
    MR_Box var_use_analysis__closure = var_use_analysis__closure_arg;
    MR_Word var_use_analysis__conv0_LambdaHeadVar__2_12;

    {
      var_use_analysis__IntroducedFrom__pred__build_recursive_call_sites_list__1247__1_2_p_0(((MR_Word) var_use_analysis__wrapper_arg_1), &var_use_analysis__conv0_LambdaHeadVar__2_12);
    }
    *var_use_analysis__wrapper_arg_2 = ((MR_Box) (var_use_analysis__conv0_LambdaHeadVar__2_12));
  }
}

static void MR_CALL 
var_use_analysis__build_recursive_call_sites_list_2_p_0(
  MR_Word var_use_analysis__Map_3,
  MR_Word * var_use_analysis__List_4)
{
  {
    MR_bool var_use_analysis__succeeded;
    MR_Word var_use_analysis__List0_5;

    {
      var_use_analysis__List0_5 = mercury__map__to_assoc_list_1_f_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, (MR_Word) &measurements__measurements__type_ctor_info_cs_cost_csq_0, var_use_analysis__Map_3);
    }
    {
      mercury__list__map_3_p_0((MR_Word) &var_use_analysis_scalar_common_2[3], (MR_Word) &var_use_analysis_scalar_common_2[4], (MR_Word) &var_use_analysis_scalar_common_2[9], var_use_analysis__List0_5, var_use_analysis__List_4);
    }
  }
}

static MR_bool MR_CALL 
var_use_analysis__intermodule_var_use_should_follow_csd_2_p_0(
  MR_Word var_use_analysis__VarUseOptions_3,
  MR_Word var_use_analysis__CSDPtr_4)
{
  {
    MR_bool var_use_analysis__succeeded;
    MR_Word var_use_analysis__FollowCall_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_3, (MR_Integer) 1)));
    MR_Word var_use_analysis__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_3, (MR_Integer) 0)));
    MR_Word var_use_analysis__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_3, (MR_Integer) 2)));

    if ((var_use_analysis__FollowCall_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      var_use_analysis__succeeded = MR_TRUE;
    else
      {
        MR_String var_use_analysis__Module_6 = ((MR_String) (MR_hl_field(MR_mktag(1), var_use_analysis__FollowCall_5, (MR_Integer) 0)));
        MR_Word var_use_analysis__CSD_8;
        MR_Word var_use_analysis__PDPtr_9;
        MR_Word var_use_analysis__PD_19;
        MR_Word var_use_analysis__PSPtr_20;
        MR_Word var_use_analysis__PS_21;
        MR_Word var_use_analysis__Label_22;
        MR_Word var_use_analysis__Var_14;
        MR_Word var_use_analysis__Var_15;
        MR_ArrayPtr var_use_analysis__Var_33;
        MR_Word var_use_analysis__Var_34;
        MR_String var_use_analysis__Var_35;
        MR_String var_use_analysis__Var_36;
        MR_String var_use_analysis__Var_37;
        MR_String var_use_analysis__Var_38;
        MR_String var_use_analysis__Var_39;
        MR_Integer var_use_analysis__Var_40;
        MR_Word var_use_analysis__Var_41;
        MR_ArrayPtr var_use_analysis__Var_42;
        MR_ArrayPtr var_use_analysis__Var_43;
        MR_Word var_use_analysis__Var_44;
        MR_Word var_use_analysis__Var_45;

        {
          profile__deep_lookup_call_site_dynamics_3_p_0(var_use_analysis__Var_10, var_use_analysis__CSDPtr_4, &var_use_analysis__CSD_8);
        }
        var_use_analysis__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__CSD_8, (MR_Integer) 0)));
        var_use_analysis__PDPtr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__CSD_8, (MR_Integer) 1)));
        var_use_analysis__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__CSD_8, (MR_Integer) 2)));
        {
          profile__deep_lookup_proc_dynamics_3_p_0(var_use_analysis__Var_10, var_use_analysis__PDPtr_9, &var_use_analysis__PD_19);
        }
        var_use_analysis__PSPtr_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__PD_19, (MR_Integer) 0)));
        var_use_analysis__Var_33 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), var_use_analysis__PD_19, (MR_Integer) 1)));
        var_use_analysis__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__PD_19, (MR_Integer) 2)));
        {
          profile__deep_lookup_proc_statics_3_p_0(var_use_analysis__Var_10, var_use_analysis__PSPtr_20, &var_use_analysis__PS_21);
        }
        var_use_analysis__Label_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__PS_21, (MR_Integer) 0)));
        var_use_analysis__Var_35 = ((MR_String) (MR_hl_field(MR_mktag(0), var_use_analysis__PS_21, (MR_Integer) 1)));
        var_use_analysis__Var_36 = ((MR_String) (MR_hl_field(MR_mktag(0), var_use_analysis__PS_21, (MR_Integer) 2)));
        var_use_analysis__Var_37 = ((MR_String) (MR_hl_field(MR_mktag(0), var_use_analysis__PS_21, (MR_Integer) 3)));
        var_use_analysis__Var_38 = ((MR_String) (MR_hl_field(MR_mktag(0), var_use_analysis__PS_21, (MR_Integer) 4)));
        var_use_analysis__Var_39 = ((MR_String) (MR_hl_field(MR_mktag(0), var_use_analysis__PS_21, (MR_Integer) 5)));
        var_use_analysis__Var_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), var_use_analysis__PS_21, (MR_Integer) 6)));
        var_use_analysis__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__PS_21, (MR_Integer) 7)));
        var_use_analysis__Var_42 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), var_use_analysis__PS_21, (MR_Integer) 8)));
        var_use_analysis__Var_43 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), var_use_analysis__PS_21, (MR_Integer) 9)));
        var_use_analysis__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__PS_21, (MR_Integer) 10)));
        var_use_analysis__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__PS_21, (MR_Integer) 11)));
        if (((MR_tag((MR_Word) var_use_analysis__Label_22)) == (MR_mktag((MR_Integer) 0))))
          {
            MR_String var_use_analysis__Var_46 = ((MR_String) (MR_hl_field(MR_mktag(0), var_use_analysis__Label_22, (MR_Integer) 2)));
            MR_Word var_use_analysis__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Label_22, (MR_Integer) 0)));
            MR_String var_use_analysis__Var_24 = ((MR_String) (MR_hl_field(MR_mktag(0), var_use_analysis__Label_22, (MR_Integer) 1)));
            MR_String var_use_analysis__Var_25 = ((MR_String) (MR_hl_field(MR_mktag(0), var_use_analysis__Label_22, (MR_Integer) 3)));
            MR_Integer var_use_analysis__Var_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), var_use_analysis__Label_22, (MR_Integer) 4)));
            MR_Integer var_use_analysis__Var_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), var_use_analysis__Label_22, (MR_Integer) 5)));

            var_use_analysis__succeeded = (strcmp(var_use_analysis__Module_6, var_use_analysis__Var_46) == 0);
          }
        else
          {
            MR_String var_use_analysis__Var_47 = ((MR_String) (MR_hl_field(MR_mktag(1), var_use_analysis__Label_22, (MR_Integer) 2)));
            MR_String var_use_analysis__Var_28 = ((MR_String) (MR_hl_field(MR_mktag(1), var_use_analysis__Label_22, (MR_Integer) 0)));
            MR_String var_use_analysis__Var_29 = ((MR_String) (MR_hl_field(MR_mktag(1), var_use_analysis__Label_22, (MR_Integer) 1)));
            MR_String var_use_analysis__Var_30 = ((MR_String) (MR_hl_field(MR_mktag(1), var_use_analysis__Label_22, (MR_Integer) 3)));
            MR_Integer var_use_analysis__Var_31 = ((MR_Integer) (MR_hl_field(MR_mktag(1), var_use_analysis__Label_22, (MR_Integer) 4)));
            MR_Integer var_use_analysis__Var_32 = ((MR_Integer) (MR_hl_field(MR_mktag(1), var_use_analysis__Label_22, (MR_Integer) 5)));

            var_use_analysis__succeeded = (strcmp(var_use_analysis__Module_6, var_use_analysis__Var_47) == 0);
          }
      }
    return var_use_analysis__succeeded;
  }
}

void MR_CALL 
var_use_analysis__proc_dynamic_var_use_info_9_p_0(
  MR_Word var_use_analysis__CliquePtr_10,
  MR_Word var_use_analysis__PDPtr_11,
  MR_Integer var_use_analysis__ArgNum_12,
  MR_Word var_use_analysis__RecursionType_13,
  MR_Word var_use_analysis__Depth_14,
  MR_Float var_use_analysis__ProcCost_15,
  MR_Word var_use_analysis__CallStack_16,
  MR_Word var_use_analysis__VarUseOptions_17,
  MR_Word * var_use_analysis__MaybeVarUseInfo_18)
{
  {
    MR_bool var_use_analysis__succeeded;
    MR_Word var_use_analysis__Info_19;

    {
      var_use_analysis__prepare_for_proc_var_first_use_7_p_0(var_use_analysis__CliquePtr_10, var_use_analysis__PDPtr_11, var_use_analysis__ArgNum_12, var_use_analysis__RecursionType_13, var_use_analysis__Depth_14, var_use_analysis__VarUseOptions_17, &var_use_analysis__Info_19);
    }
    if (((MR_tag((MR_Word) var_use_analysis__Info_19)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_String var_use_analysis__Error_28 = ((MR_String) (MR_hl_field(MR_mktag(0), var_use_analysis__Info_19, (MR_Integer) 0)));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *var_use_analysis__MaybeVarUseInfo_18 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (var_use_analysis__Error_28));
        }
      }
    else
      {
        MR_Word var_use_analysis__Goal_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__Info_19, (MR_Integer) 0)));
        MR_Word var_use_analysis__ContainingGoalMap_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__Info_19, (MR_Integer) 2)));
        MR_Word var_use_analysis__CoverageArray_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__Info_19, (MR_Integer) 3)));
        MR_Word var_use_analysis__CallSiteCostMap_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__Info_19, (MR_Integer) 4)));
        MR_Word var_use_analysis__RecursiveCallSiteCostMap_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__Info_19, (MR_Integer) 5)));
        MR_Integer var_use_analysis__Var_26 = ((MR_Integer) (MR_hl_field(MR_mktag(1), var_use_analysis__Info_19, (MR_Integer) 6)));
        MR_Word var_use_analysis__VarUseInfo_27;
        MR_Word var_use_analysis__FoundFirstUse_43;
        MR_Word var_use_analysis__VarUseType_44;
        MR_Word var_use_analysis__Var_46;
        MR_Word var_use_analysis___LastGoalId_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__Info_19, (MR_Integer) 1)));
        MR_Float var_use_analysis___Cost_42;
        MR_Word var_use_analysis__Var_49;
        MR_Word var_use_analysis__Var_50;

        {
          var_use_analysis__Var_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), var_use_analysis__Var_46, 0) = ((MR_Box) (var_use_analysis__CliquePtr_10));
          MR_hl_field(MR_mktag(0), var_use_analysis__Var_46, 1) = ((MR_Box) (var_use_analysis__CallSiteCostMap_24));
          MR_hl_field(MR_mktag(0), var_use_analysis__Var_46, 2) = ((MR_Box) (var_use_analysis__RecursiveCallSiteCostMap_25));
          MR_hl_field(MR_mktag(0), var_use_analysis__Var_46, 3) = ((MR_Box) (var_use_analysis__ContainingGoalMap_22));
          MR_hl_field(MR_mktag(0), var_use_analysis__Var_46, 4) = ((MR_Box) (var_use_analysis__CoverageArray_23));
          MR_hl_field(MR_mktag(0), var_use_analysis__Var_46, 5) = ((MR_Box) (var_use_analysis__Var_26));
          MR_hl_field(MR_mktag(0), var_use_analysis__Var_46, 6) = ((MR_Box) (var_use_analysis__VarUseOptions_17));
          MR_hl_field(MR_mktag(0), var_use_analysis__Var_46, 7) = ((MR_Box) (var_use_analysis__CallStack_16));
          MR_hl_field(MR_mktag(0), var_use_analysis__Var_46, 8) = ((MR_Box) (var_use_analysis__RecursionType_13));
          MR_hl_field(MR_mktag(0), var_use_analysis__Var_46, 9) = ((MR_Box) (var_use_analysis__Depth_14));
          MR_hl_field(MR_mktag(0), var_use_analysis__Var_46, 10) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          var_use_analysis__goal_var_first_use_6_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), var_use_analysis__Goal_20, var_use_analysis__Var_46, (MR_Float) 0.0000000000000000, &var_use_analysis___Cost_42, &var_use_analysis__FoundFirstUse_43);
        }
        var_use_analysis__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_17, (MR_Integer) 0)));
        var_use_analysis__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_17, (MR_Integer) 1)));
        var_use_analysis__VarUseType_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_17, (MR_Integer) 2)));
        {
          var_use_analysis__found_first_use_to_use_info_4_p_0(var_use_analysis__FoundFirstUse_43, var_use_analysis__ProcCost_15, var_use_analysis__VarUseType_44, &var_use_analysis__VarUseInfo_27);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *var_use_analysis__MaybeVarUseInfo_18 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (var_use_analysis__VarUseInfo_27));
        }
      }
  }
}

static void MR_CALL 
var_use_analysis__found_first_use_to_use_info_4_p_0(
  MR_Word var_use_analysis__FoundFirstUse_5,
  MR_Float var_use_analysis__Cost_6,
  MR_Word var_use_analysis__VarUseType_7,
  MR_Word * var_use_analysis__VarUseInfo_8)
{
  {
    MR_bool var_use_analysis__succeeded;

    if ((var_use_analysis__FoundFirstUse_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      switch (var_use_analysis__VarUseType_7) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            *var_use_analysis__VarUseInfo_8 = base;
            MR_hl_field(MR_mktag(0), base, 0) = MR_box_float(var_use_analysis__Cost_6);
            MR_hl_field(MR_mktag(0), base, 1) = MR_box_float(var_use_analysis__Cost_6);
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (var_use_analysis__VarUseType_7));
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            *var_use_analysis__VarUseInfo_8 = base;
            MR_hl_field(MR_mktag(0), base, 0) = MR_box_float(var_use_analysis__Cost_6);
            MR_hl_field(MR_mktag(0), base, 1) = MR_box_float(var_use_analysis__Cost_6);
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (var_use_analysis__VarUseType_7));
          }
          break;
        case (MR_Integer) 0:
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "var_use_analysis", (MR_String) "predicate \140var_use_analysis.found_first_use_to_use_info\'/4", (MR_String) "goal did not produce a variable that it should have");
              return;
            }
          }
          break;
      }
    else
      {
        MR_Float var_use_analysis__CostUntilUse_9 = MR_unbox_float((MR_hl_field(MR_mktag(1), var_use_analysis__FoundFirstUse_5, (MR_Integer) 0)));

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          *var_use_analysis__VarUseInfo_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = MR_box_float(var_use_analysis__CostUntilUse_9);
          MR_hl_field(MR_mktag(0), base, 1) = MR_box_float(var_use_analysis__Cost_6);
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (var_use_analysis__VarUseType_7));
        }
      }
  }
}

static void MR_CALL 
var_use_analysis__ite_var_first_use_8_p_0(
  MR_Word var_use_analysis__RevGoalPath_9,
  MR_Word var_use_analysis__Cond_10,
  MR_Word var_use_analysis__Then_11,
  MR_Word var_use_analysis__Else_12,
  MR_Word var_use_analysis__StaticInfo_13,
  MR_Float var_use_analysis__STATE_VARIABLE_CostSoFar_0_40,
  MR_Float * var_use_analysis__STATE_VARIABLE_CostSoFar_41,
  MR_Word * var_use_analysis__FoundFirstUse_15)
{
  {
    MR_bool var_use_analysis__succeeded;
    MR_Word var_use_analysis__TypeCtorInfo_100_100 = (MR_Word) &coverage__coverage__type_ctor_info_coverage_info_0;
    MR_Word var_use_analysis__CoverageArray_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_13, (MR_Integer) 4)));
    MR_Word var_use_analysis__ThenCoverage_17;
    MR_Integer var_use_analysis__CountBeforeThen_18;
    MR_Word var_use_analysis__ElseCoverage_19;
    MR_Integer var_use_analysis__CountBeforeElse_20;
    MR_Word var_use_analysis__Weights_21;
    MR_Word var_use_analysis__RevCondGoalPath_22;
    MR_Word var_use_analysis__RevThenGoalPath_23;
    MR_Word var_use_analysis__RevElseGoalPath_24;
    MR_Word var_use_analysis__VarUseType_25;
    MR_Float var_use_analysis__CostAfterCond_27;
    MR_Word var_use_analysis__CondFoundFirstUse_28;
    MR_Float var_use_analysis__CostAfterThen_29;
    MR_Word var_use_analysis__ThenFoundFirstUse_30;
    MR_Float var_use_analysis__CostAfterElse_31;
    MR_Word var_use_analysis__ElseFoundFirstUse_32;
    MR_Word var_use_analysis__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Then_11, (MR_Integer) 2)));
    MR_Word var_use_analysis__Var_43;
    MR_Float var_use_analysis__Var_44;
    MR_Word var_use_analysis__Var_45;
    MR_Float var_use_analysis__Var_46;
    MR_Word var_use_analysis__Var_51;
    MR_Word var_use_analysis__Var_52;
    MR_Word var_use_analysis__Var_53;
    MR_Word var_use_analysis__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_13, (MR_Integer) 0)));
    MR_Word var_use_analysis__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_13, (MR_Integer) 1)));
    MR_Word var_use_analysis__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_13, (MR_Integer) 2)));
    MR_Word var_use_analysis__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_13, (MR_Integer) 3)));
    MR_Integer var_use_analysis__Var_78 = ((MR_Integer) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_13, (MR_Integer) 5)));
    MR_Word var_use_analysis__Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_13, (MR_Integer) 6)));
    MR_Word var_use_analysis__Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_13, (MR_Integer) 7)));
    MR_Word var_use_analysis__Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_13, (MR_Integer) 8)));
    MR_Word var_use_analysis__Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_13, (MR_Integer) 9)));
    MR_Word var_use_analysis__Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_13, (MR_Integer) 10)));
    MR_Word var_use_analysis__Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Then_11, (MR_Integer) 0)));
    MR_Word var_use_analysis__Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Then_11, (MR_Integer) 1)));
    MR_Box var_use_analysis__conv0_ThenCoverage_17;
    MR_Word var_use_analysis__Var_86;
    MR_Word var_use_analysis__Var_87;
    MR_Box var_use_analysis__conv1_ElseCoverage_19;
    MR_Word var_use_analysis__Var_88;
    MR_Word var_use_analysis__Var_89;
    MR_Word var_use_analysis__Var_90;
    MR_Word var_use_analysis__Var_91;
    MR_Word var_use_analysis__Var_92;
    MR_Integer var_use_analysis__Var_93;
    MR_Word var_use_analysis__Var_94;
    MR_Word var_use_analysis__Var_95;
    MR_Word var_use_analysis__Var_96;
    MR_Word var_use_analysis__Var_97;
    MR_Word var_use_analysis__Var_98;
    MR_Word var_use_analysis__Var_99;

    {
      var_use_analysis__conv0_ThenCoverage_17 = mdbcomp__goal_path__get_goal_attribute_det_2_f_0(var_use_analysis__TypeCtorInfo_100_100, var_use_analysis__CoverageArray_16, var_use_analysis__Var_42);
    }
    var_use_analysis__ThenCoverage_17 = ((MR_Word) var_use_analysis__conv0_ThenCoverage_17);
    {
      coverage__get_coverage_before_det_2_p_0(var_use_analysis__ThenCoverage_17, &var_use_analysis__CountBeforeThen_18);
    }
    var_use_analysis__Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Else_12, (MR_Integer) 0)));
    var_use_analysis__Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Else_12, (MR_Integer) 1)));
    var_use_analysis__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Else_12, (MR_Integer) 2)));
    {
      var_use_analysis__conv1_ElseCoverage_19 = mdbcomp__goal_path__get_goal_attribute_det_2_f_0(var_use_analysis__TypeCtorInfo_100_100, var_use_analysis__CoverageArray_16, var_use_analysis__Var_43);
    }
    var_use_analysis__ElseCoverage_19 = ((MR_Word) var_use_analysis__conv1_ElseCoverage_19);
    {
      coverage__get_coverage_before_det_2_p_0(var_use_analysis__ElseCoverage_19, &var_use_analysis__CountBeforeElse_20);
    }
    {
      var_use_analysis__Var_44 = mercury__float__float_1_f_0(var_use_analysis__CountBeforeThen_18);
    }
    {
      var_use_analysis__Var_46 = mercury__float__float_1_f_0(var_use_analysis__CountBeforeElse_20);
    }
    {
      var_use_analysis__Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), var_use_analysis__Var_45, 0) = MR_box_float(var_use_analysis__Var_46);
      MR_hl_field(MR_mktag(1), var_use_analysis__Var_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      var_use_analysis__Weights_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), var_use_analysis__Weights_21, 0) = MR_box_float(var_use_analysis__Var_44);
      MR_hl_field(MR_mktag(1), var_use_analysis__Weights_21, 1) = ((MR_Box) (var_use_analysis__Var_45));
    }
    {
      var_use_analysis__RevCondGoalPath_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), var_use_analysis__RevCondGoalPath_22, 0) = ((MR_Box) (var_use_analysis__RevGoalPath_9));
      MR_hl_field(MR_mktag(1), var_use_analysis__RevCondGoalPath_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      var_use_analysis__RevThenGoalPath_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), var_use_analysis__RevThenGoalPath_23, 0) = ((MR_Box) (var_use_analysis__RevGoalPath_9));
      MR_hl_field(MR_mktag(1), var_use_analysis__RevThenGoalPath_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
    }
    {
      var_use_analysis__RevElseGoalPath_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), var_use_analysis__RevElseGoalPath_24, 0) = ((MR_Box) (var_use_analysis__RevGoalPath_9));
      MR_hl_field(MR_mktag(1), var_use_analysis__RevElseGoalPath_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
    }
    var_use_analysis__Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_13, (MR_Integer) 0)));
    var_use_analysis__Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_13, (MR_Integer) 1)));
    var_use_analysis__Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_13, (MR_Integer) 2)));
    var_use_analysis__Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_13, (MR_Integer) 3)));
    var_use_analysis__Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_13, (MR_Integer) 4)));
    var_use_analysis__Var_93 = ((MR_Integer) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_13, (MR_Integer) 5)));
    var_use_analysis__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_13, (MR_Integer) 6)));
    var_use_analysis__Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_13, (MR_Integer) 7)));
    var_use_analysis__Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_13, (MR_Integer) 8)));
    var_use_analysis__Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_13, (MR_Integer) 9)));
    var_use_analysis__Var_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_13, (MR_Integer) 10)));
    var_use_analysis__Var_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Var_51, (MR_Integer) 0)));
    var_use_analysis__Var_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Var_51, (MR_Integer) 1)));
    var_use_analysis__VarUseType_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Var_51, (MR_Integer) 2)));
    {
      var_use_analysis__goal_var_first_use_6_p_0(var_use_analysis__RevCondGoalPath_22, var_use_analysis__Cond_10, var_use_analysis__StaticInfo_13, var_use_analysis__STATE_VARIABLE_CostSoFar_0_40, &var_use_analysis__CostAfterCond_27, &var_use_analysis__CondFoundFirstUse_28);
    }
    {
      var_use_analysis__goal_var_first_use_6_p_0(var_use_analysis__RevThenGoalPath_23, var_use_analysis__Then_11, var_use_analysis__StaticInfo_13, var_use_analysis__CostAfterCond_27, &var_use_analysis__CostAfterThen_29, &var_use_analysis__ThenFoundFirstUse_30);
    }
    {
      var_use_analysis__goal_var_first_use_6_p_0(var_use_analysis__RevElseGoalPath_24, var_use_analysis__Else_12, var_use_analysis__StaticInfo_13, var_use_analysis__CostAfterCond_27, &var_use_analysis__CostAfterElse_31, &var_use_analysis__ElseFoundFirstUse_32);
    }
    {
      var_use_analysis__Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), var_use_analysis__Var_53, 0) = MR_box_float(var_use_analysis__CostAfterElse_31);
      MR_hl_field(MR_mktag(1), var_use_analysis__Var_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      var_use_analysis__Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), var_use_analysis__Var_52, 0) = MR_box_float(var_use_analysis__CostAfterThen_29);
      MR_hl_field(MR_mktag(1), var_use_analysis__Var_52, 1) = ((MR_Box) (var_use_analysis__Var_53));
    }
    {
      measurements__weighted_average_3_p_0(var_use_analysis__Weights_21, var_use_analysis__Var_52, var_use_analysis__STATE_VARIABLE_CostSoFar_41);
    }
    if ((var_use_analysis__CondFoundFirstUse_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        var_use_analysis__succeeded = (var_use_analysis__ThenFoundFirstUse_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (var_use_analysis__succeeded)
          var_use_analysis__succeeded = (var_use_analysis__ElseFoundFirstUse_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (var_use_analysis__succeeded)
          *var_use_analysis__FoundFirstUse_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_Float var_use_analysis__DefaultCost_35;
            MR_Float var_use_analysis__ThenVarUseTime_36;
            MR_Float var_use_analysis__ElseVarUseTime_37;
            MR_Float var_use_analysis__VarUseTime_38;
            MR_Word var_use_analysis__Var_56;
            MR_Word var_use_analysis__Var_57;

            switch (var_use_analysis__VarUseType_25) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                var_use_analysis__DefaultCost_35 = var_use_analysis__CostAfterCond_27;
                break;
              case (MR_Integer) 2:
              case (MR_Integer) 0:
                var_use_analysis__DefaultCost_35 = *var_use_analysis__STATE_VARIABLE_CostSoFar_41;
                break;
            }
            {
              var_use_analysis__ffu_to_float_3_p_0(var_use_analysis__DefaultCost_35, var_use_analysis__ThenFoundFirstUse_30, &var_use_analysis__ThenVarUseTime_36);
            }
            {
              var_use_analysis__ffu_to_float_3_p_0(var_use_analysis__DefaultCost_35, var_use_analysis__ElseFoundFirstUse_32, &var_use_analysis__ElseVarUseTime_37);
            }
            {
              var_use_analysis__Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), var_use_analysis__Var_57, 0) = MR_box_float(var_use_analysis__ElseVarUseTime_37);
              MR_hl_field(MR_mktag(1), var_use_analysis__Var_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              var_use_analysis__Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), var_use_analysis__Var_56, 0) = MR_box_float(var_use_analysis__ThenVarUseTime_36);
              MR_hl_field(MR_mktag(1), var_use_analysis__Var_56, 1) = ((MR_Box) (var_use_analysis__Var_57));
            }
            {
              measurements__weighted_average_3_p_0(var_use_analysis__Weights_21, var_use_analysis__Var_56, &var_use_analysis__VarUseTime_38);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *var_use_analysis__FoundFirstUse_15 = base;
              MR_hl_field(MR_mktag(1), base, 0) = MR_box_float(var_use_analysis__VarUseTime_38);
            }
          }
      }
    else
      *var_use_analysis__FoundFirstUse_15 = var_use_analysis__CondFoundFirstUse_28;
  }
}

static void MR_CALL 
var_use_analysis__switch_var_first_use_2_8_p_0(
  MR_Word var_use_analysis__RevGoalPath_1,
  MR_Integer var_use_analysis__CaseNum_2,
  MR_Word var_use_analysis__StaticInfo_3,
  MR_Word var_use_analysis__HeadVar__4_4,
  MR_Word * var_use_analysis__HeadVar__5_5,
  MR_Float var_use_analysis__Cost0_6,
  MR_Word * var_use_analysis__HeadVar__7_7,
  MR_Word * var_use_analysis__HeadVar__8_8)
{
  {
    MR_bool var_use_analysis__succeeded;

    if ((var_use_analysis__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *var_use_analysis__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *var_use_analysis__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *var_use_analysis__HeadVar__8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    else
      {
        MR_Word var_use_analysis__Case_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__4_4, (MR_Integer) 0)));
        MR_Word var_use_analysis__Cases_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__4_4, (MR_Integer) 1)));
        MR_Float var_use_analysis__Weight_18;
        MR_Word var_use_analysis__Weights_19;
        MR_Float var_use_analysis__Cost_21;
        MR_Word var_use_analysis__Costs_22;
        MR_Word var_use_analysis__FoundFirstUse_23;
        MR_Word var_use_analysis__FoundFirstUses_24;
        MR_Word var_use_analysis__Goal_27;
        MR_Word var_use_analysis__RevArmPath_28;
        MR_Word var_use_analysis__Coverage_29;
        MR_Integer var_use_analysis__BeforeCount_30;
        MR_Integer var_use_analysis__Var_31 = (var_use_analysis__CaseNum_2 + (MR_Integer) 1);
        MR_Word var_use_analysis__Var_33;
        MR_Word var_use_analysis__Var_35;
        MR_Word var_use_analysis__Var_36;
        MR_Word var_use_analysis__Var_25;
        MR_Word var_use_analysis__Var_26;
        MR_Word var_use_analysis__Var_37;
        MR_Word var_use_analysis__Var_38;
        MR_Word var_use_analysis__Var_39;
        MR_Word var_use_analysis__Var_40;
        MR_Integer var_use_analysis__Var_41;
        MR_Word var_use_analysis__Var_42;
        MR_Word var_use_analysis__Var_43;
        MR_Word var_use_analysis__Var_44;
        MR_Word var_use_analysis__Var_45;
        MR_Word var_use_analysis__Var_46;
        MR_Word var_use_analysis__Var_47;
        MR_Word var_use_analysis__Var_48;
        MR_Box var_use_analysis__conv0_Coverage_29;

        {
          var_use_analysis__switch_var_first_use_2_8_p_0(var_use_analysis__RevGoalPath_1, var_use_analysis__Var_31, var_use_analysis__StaticInfo_3, var_use_analysis__Cases_17, &var_use_analysis__Weights_19, var_use_analysis__Cost0_6, &var_use_analysis__Costs_22, &var_use_analysis__FoundFirstUses_24);
        }
        var_use_analysis__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Case_16, (MR_Integer) 0)));
        var_use_analysis__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Case_16, (MR_Integer) 1)));
        var_use_analysis__Goal_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Case_16, (MR_Integer) 2)));
        {
          var_use_analysis__Var_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), var_use_analysis__Var_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), var_use_analysis__Var_33, 1) = ((MR_Box) (var_use_analysis__CaseNum_2));
          MR_hl_field(MR_mktag(3), var_use_analysis__Var_33, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          var_use_analysis__RevArmPath_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), var_use_analysis__RevArmPath_28, 0) = ((MR_Box) (var_use_analysis__RevGoalPath_1));
          MR_hl_field(MR_mktag(1), var_use_analysis__RevArmPath_28, 1) = ((MR_Box) (var_use_analysis__Var_33));
        }
        {
          var_use_analysis__goal_var_first_use_6_p_0(var_use_analysis__RevArmPath_28, var_use_analysis__Goal_27, var_use_analysis__StaticInfo_3, var_use_analysis__Cost0_6, &var_use_analysis__Cost_21, &var_use_analysis__FoundFirstUse_23);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *var_use_analysis__HeadVar__7_7 = base;
          MR_hl_field(MR_mktag(1), base, 0) = MR_box_float(var_use_analysis__Cost_21);
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (var_use_analysis__Costs_22));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *var_use_analysis__HeadVar__8_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (var_use_analysis__FoundFirstUse_23));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (var_use_analysis__FoundFirstUses_24));
        }
        var_use_analysis__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_3, (MR_Integer) 0)));
        var_use_analysis__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_3, (MR_Integer) 1)));
        var_use_analysis__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_3, (MR_Integer) 2)));
        var_use_analysis__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_3, (MR_Integer) 3)));
        var_use_analysis__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_3, (MR_Integer) 4)));
        var_use_analysis__Var_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_3, (MR_Integer) 5)));
        var_use_analysis__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_3, (MR_Integer) 6)));
        var_use_analysis__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_3, (MR_Integer) 7)));
        var_use_analysis__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_3, (MR_Integer) 8)));
        var_use_analysis__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_3, (MR_Integer) 9)));
        var_use_analysis__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_3, (MR_Integer) 10)));
        var_use_analysis__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Goal_27, (MR_Integer) 0)));
        var_use_analysis__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Goal_27, (MR_Integer) 1)));
        var_use_analysis__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Goal_27, (MR_Integer) 2)));
        {
          var_use_analysis__conv0_Coverage_29 = mdbcomp__goal_path__get_goal_attribute_det_2_f_0((MR_Word) &coverage__coverage__type_ctor_info_coverage_info_0, var_use_analysis__Var_35, var_use_analysis__Var_36);
        }
        var_use_analysis__Coverage_29 = ((MR_Word) var_use_analysis__conv0_Coverage_29);
        {
          coverage__get_coverage_before_det_2_p_0(var_use_analysis__Coverage_29, &var_use_analysis__BeforeCount_30);
        }
        {
          var_use_analysis__Weight_18 = mercury__float__float_1_f_0(var_use_analysis__BeforeCount_30);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *var_use_analysis__HeadVar__5_5 = base;
          MR_hl_field(MR_mktag(1), base, 0) = MR_box_float(var_use_analysis__Weight_18);
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (var_use_analysis__Weights_19));
        }
      }
  }
}

static void MR_CALL 
var_use_analysis__switch_var_first_use_7_p_0_2(
  MR_Box var_use_analysis__closure_arg,
  MR_Box var_use_analysis__wrapper_arg_1,
  MR_Box * var_use_analysis__wrapper_arg_2)
{
  {
    MR_Box var_use_analysis__closure = var_use_analysis__closure_arg;
    MR_Float var_use_analysis__conv0_HeadVar__3_3;

    {
      var_use_analysis__ffu_to_float_3_p_0(MR_unbox_float((MR_hl_field(MR_mktag(0), var_use_analysis__closure, (MR_Integer) 3))), ((MR_Word) var_use_analysis__wrapper_arg_1), &var_use_analysis__conv0_HeadVar__3_3);
    }
    *var_use_analysis__wrapper_arg_2 = MR_box_float(var_use_analysis__conv0_HeadVar__3_3);
  }
}

static MR_bool MR_CALL 
var_use_analysis__switch_var_first_use_7_p_0_1(
  MR_Box var_use_analysis__closure_arg,
  MR_Box var_use_analysis__wrapper_arg_1)
{
  {
    MR_bool var_use_analysis__succeeded;
    MR_Box var_use_analysis__closure = var_use_analysis__closure_arg;

    {
      var_use_analysis__succeeded = var_use_analysis__IntroducedFrom__pred__switch_var_first_use__1119__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__closure, (MR_Integer) 3))), ((MR_Word) var_use_analysis__wrapper_arg_1));
    }
    return var_use_analysis__succeeded;
  }
}

static void MR_CALL 
var_use_analysis__switch_var_first_use_7_p_0(
  MR_Word var_use_analysis__RevGoalPath_8,
  MR_Integer var_use_analysis__SwitchedOnVar_9,
  MR_Word var_use_analysis__Cases_10,
  MR_Word var_use_analysis__StaticInfo_11,
  MR_Float var_use_analysis__CostBeforeSwitch_12,
  MR_Float * var_use_analysis__CostAfterSwitch_13,
  MR_Word * var_use_analysis__FoundFirstUse_14)
{
  {
    MR_bool var_use_analysis__succeeded;
    MR_Word var_use_analysis__CaseWeights_15;
    MR_Word var_use_analysis__CostCases_16;
    MR_Word var_use_analysis__FoundFirstUseCases_17;
    MR_Integer var_use_analysis__Var_18;
    MR_Word var_use_analysis__Var_28;
    MR_Word var_use_analysis__Var_29;
    MR_Word var_use_analysis__Var_30;
    MR_Word var_use_analysis__Var_31;
    MR_Word var_use_analysis__Var_32;
    MR_Word var_use_analysis__Var_33;
    MR_Word var_use_analysis__Var_34;
    MR_Word var_use_analysis__Var_35;
    MR_Word var_use_analysis__Var_36;
    MR_Word var_use_analysis__Var_37;

    {
      var_use_analysis__switch_var_first_use_2_8_p_0(var_use_analysis__RevGoalPath_8, (MR_Integer) 1, var_use_analysis__StaticInfo_11, var_use_analysis__Cases_10, &var_use_analysis__CaseWeights_15, var_use_analysis__CostBeforeSwitch_12, &var_use_analysis__CostCases_16, &var_use_analysis__FoundFirstUseCases_17);
    }
    {
      measurements__weighted_average_3_p_0(var_use_analysis__CaseWeights_15, var_use_analysis__CostCases_16, var_use_analysis__CostAfterSwitch_13);
    }
    var_use_analysis__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_11, (MR_Integer) 0)));
    var_use_analysis__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_11, (MR_Integer) 1)));
    var_use_analysis__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_11, (MR_Integer) 2)));
    var_use_analysis__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_11, (MR_Integer) 3)));
    var_use_analysis__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_11, (MR_Integer) 4)));
    var_use_analysis__Var_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_11, (MR_Integer) 5)));
    var_use_analysis__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_11, (MR_Integer) 6)));
    var_use_analysis__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_11, (MR_Integer) 7)));
    var_use_analysis__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_11, (MR_Integer) 8)));
    var_use_analysis__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_11, (MR_Integer) 9)));
    var_use_analysis__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_11, (MR_Integer) 10)));
    var_use_analysis__succeeded = (var_use_analysis__Var_18 == var_use_analysis__SwitchedOnVar_9);
    if (var_use_analysis__succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *var_use_analysis__FoundFirstUse_14 = base;
        MR_hl_field(MR_mktag(1), base, 0) = MR_box_float(var_use_analysis__CostBeforeSwitch_12);
      }
    else
      {
        {
          var_use_analysis__succeeded = mercury__list__all_true_2_p_0((MR_Word) &var_use_analysis__var_use_analysis__type_ctor_info_found_first_use_0, (MR_Word) &var_use_analysis_scalar_common_8[0], var_use_analysis__FoundFirstUseCases_17);
        }
        if (var_use_analysis__succeeded)
          *var_use_analysis__FoundFirstUse_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_Word var_use_analysis__VarUseType_19;
            MR_Float var_use_analysis__DefaultCost_20;
            MR_Word var_use_analysis__FirstUseTimes_21;
            MR_Float var_use_analysis__AvgFirstUseTime_22;
            MR_Word var_use_analysis__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_11, (MR_Integer) 6)));
            MR_Word var_use_analysis__Var_27;
            MR_Word var_use_analysis__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_11, (MR_Integer) 0)));
            MR_Word var_use_analysis__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_11, (MR_Integer) 1)));
            MR_Word var_use_analysis__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_11, (MR_Integer) 2)));
            MR_Word var_use_analysis__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_11, (MR_Integer) 3)));
            MR_Word var_use_analysis__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_11, (MR_Integer) 4)));
            MR_Integer var_use_analysis__Var_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_11, (MR_Integer) 5)));
            MR_Word var_use_analysis__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_11, (MR_Integer) 7)));
            MR_Word var_use_analysis__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_11, (MR_Integer) 8)));
            MR_Word var_use_analysis__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_11, (MR_Integer) 9)));
            MR_Word var_use_analysis__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_11, (MR_Integer) 10)));
            MR_Word var_use_analysis__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Var_26, (MR_Integer) 0)));
            MR_Word var_use_analysis__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Var_26, (MR_Integer) 1)));

            var_use_analysis__VarUseType_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Var_26, (MR_Integer) 2)));
            switch (var_use_analysis__VarUseType_19) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                var_use_analysis__DefaultCost_20 = *var_use_analysis__CostAfterSwitch_13;
                break;
              case (MR_Integer) 2:
              case (MR_Integer) 0:
                var_use_analysis__DefaultCost_20 = var_use_analysis__CostBeforeSwitch_12;
                break;
            }
            {
              var_use_analysis__Var_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), var_use_analysis__Var_27, 0) = ((MR_Box) (&var_use_analysis_scalar_common_9[0]));
              MR_hl_field(MR_mktag(0), var_use_analysis__Var_27, 1) = ((MR_Box) (var_use_analysis__switch_var_first_use_7_p_0_2));
              MR_hl_field(MR_mktag(0), var_use_analysis__Var_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), var_use_analysis__Var_27, 3) = MR_box_float(var_use_analysis__DefaultCost_20);
            }
            {
              mercury__list__map_3_p_0((MR_Word) &var_use_analysis__var_use_analysis__type_ctor_info_found_first_use_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0, var_use_analysis__Var_27, var_use_analysis__FoundFirstUseCases_17, &var_use_analysis__FirstUseTimes_21);
            }
            {
              measurements__weighted_average_3_p_0(var_use_analysis__CaseWeights_15, var_use_analysis__FirstUseTimes_21, &var_use_analysis__AvgFirstUseTime_22);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *var_use_analysis__FoundFirstUse_14 = base;
              MR_hl_field(MR_mktag(1), base, 0) = MR_box_float(var_use_analysis__AvgFirstUseTime_22);
            }
          }
      }
  }
}

static void MR_CALL 
var_use_analysis__disj_var_first_use_2_7_p_0(
  MR_Word var_use_analysis__RevGoalPath_1,
  MR_Integer var_use_analysis__DisjNum_2,
  MR_Word var_use_analysis__HeadVar__3_3,
  MR_Word var_use_analysis__StaticInfo_4,
  MR_Float var_use_analysis__STATE_VARIABLE_CostSoFar_0_5,
  MR_Float * var_use_analysis__STATE_VARIABLE_CostSoFar_6,
  MR_Word * var_use_analysis__HeadVar__7_7)
{
  {
    MR_bool var_use_analysis__succeeded;

    if ((var_use_analysis__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *var_use_analysis__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *var_use_analysis__STATE_VARIABLE_CostSoFar_6 = var_use_analysis__STATE_VARIABLE_CostSoFar_0_5;
      }
    else
      {
        MR_Word var_use_analysis__Disj_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word var_use_analysis__Disjs_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word var_use_analysis__VarUseType_21;
        MR_Word var_use_analysis__CoverageArray_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_4, (MR_Integer) 4)));
        MR_Word var_use_analysis__HeadFoundFirstUse_23;
        MR_Word var_use_analysis__TailFoundFirstUse_24;
        MR_Word var_use_analysis__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_4, (MR_Integer) 6)));
        MR_Word var_use_analysis__Var_41;
        MR_Float var_use_analysis__STATE_VARIABLE_CostSoFar_42_42;
        MR_Word var_use_analysis__Var_43;
        MR_Integer var_use_analysis__Var_44;
        MR_Word var_use_analysis__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_4, (MR_Integer) 0)));
        MR_Word var_use_analysis__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_4, (MR_Integer) 1)));
        MR_Word var_use_analysis__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_4, (MR_Integer) 2)));
        MR_Word var_use_analysis__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_4, (MR_Integer) 3)));
        MR_Integer var_use_analysis__Var_66 = ((MR_Integer) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_4, (MR_Integer) 5)));
        MR_Word var_use_analysis__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_4, (MR_Integer) 7)));
        MR_Word var_use_analysis__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_4, (MR_Integer) 8)));
        MR_Word var_use_analysis__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_4, (MR_Integer) 9)));
        MR_Word var_use_analysis__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_4, (MR_Integer) 10)));
        MR_Word var_use_analysis__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Var_40, (MR_Integer) 0)));
        MR_Word var_use_analysis__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Var_40, (MR_Integer) 1)));

        var_use_analysis__VarUseType_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Var_40, (MR_Integer) 2)));
        {
          var_use_analysis__Var_43 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), var_use_analysis__Var_43, 0) = ((MR_Box) (var_use_analysis__DisjNum_2));
        }
        {
          var_use_analysis__Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), var_use_analysis__Var_41, 0) = ((MR_Box) (var_use_analysis__RevGoalPath_1));
          MR_hl_field(MR_mktag(1), var_use_analysis__Var_41, 1) = ((MR_Box) (var_use_analysis__Var_43));
        }
        {
          var_use_analysis__goal_var_first_use_6_p_0(var_use_analysis__Var_41, var_use_analysis__Disj_16, var_use_analysis__StaticInfo_4, var_use_analysis__STATE_VARIABLE_CostSoFar_0_5, &var_use_analysis__STATE_VARIABLE_CostSoFar_42_42, &var_use_analysis__HeadFoundFirstUse_23);
        }
        var_use_analysis__Var_44 = (var_use_analysis__DisjNum_2 + (MR_Integer) 1);
        {
          var_use_analysis__disj_var_first_use_2_7_p_0(var_use_analysis__RevGoalPath_1, var_use_analysis__Var_44, var_use_analysis__Disjs_17, var_use_analysis__StaticInfo_4, var_use_analysis__STATE_VARIABLE_CostSoFar_42_42, var_use_analysis__STATE_VARIABLE_CostSoFar_6, &var_use_analysis__TailFoundFirstUse_24);
        }
        if ((var_use_analysis__HeadFoundFirstUse_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          if ((var_use_analysis__TailFoundFirstUse_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            *var_use_analysis__HeadVar__7_7 = var_use_analysis__HeadFoundFirstUse_23;
          else
            *var_use_analysis__HeadVar__7_7 = var_use_analysis__TailFoundFirstUse_24;
        else
          {
            MR_Float var_use_analysis__Var_88 = MR_unbox_float((MR_hl_field(MR_mktag(1), var_use_analysis__HeadFoundFirstUse_23, (MR_Integer) 0)));

            if ((var_use_analysis__TailFoundFirstUse_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              *var_use_analysis__HeadVar__7_7 = var_use_analysis__HeadFoundFirstUse_23;
            else
              {
                MR_Float var_use_analysis__TailCost_28 = MR_unbox_float((MR_hl_field(MR_mktag(1), var_use_analysis__TailFoundFirstUse_24, (MR_Integer) 0)));
                MR_Float var_use_analysis__Cost_29;

                switch (var_use_analysis__VarUseType_21) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    var_use_analysis__Cost_29 = var_use_analysis__Var_88;
                    break;
                  case (MR_Integer) 2:
                  case (MR_Integer) 0:
                    {
                      MR_Word var_use_analysis__TypeCtorInfo_87_87 = (MR_Word) &coverage__coverage__type_ctor_info_coverage_info_0;
                      MR_Word var_use_analysis__DisjCoverage_30;
                      MR_Float var_use_analysis__HeadWeight_32;
                      MR_Float var_use_analysis__TailWeight_33;
                      MR_Word var_use_analysis__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Disj_16, (MR_Integer) 2)));
                      MR_Word var_use_analysis__Var_55;
                      MR_Word var_use_analysis__Var_56;
                      MR_Word var_use_analysis__Var_57;
                      MR_Word var_use_analysis__Var_59;
                      MR_Word var_use_analysis__Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Disj_16, (MR_Integer) 0)));
                      MR_Word var_use_analysis__Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Disj_16, (MR_Integer) 1)));
                      MR_Box var_use_analysis__conv0_DisjCoverage_30;
                      MR_Integer var_use_analysis__HeadCount_31;

                      {
                        var_use_analysis__conv0_DisjCoverage_30 = mdbcomp__goal_path__get_goal_attribute_det_2_f_0(var_use_analysis__TypeCtorInfo_87_87, var_use_analysis__CoverageArray_22, var_use_analysis__Var_47);
                      }
                      var_use_analysis__DisjCoverage_30 = ((MR_Word) var_use_analysis__conv0_DisjCoverage_30);
                      {
                        var_use_analysis__succeeded = coverage__get_coverage_before_2_p_0(var_use_analysis__DisjCoverage_30, &var_use_analysis__HeadCount_31);
                      }
                      if (var_use_analysis__succeeded)
                        {
                          var_use_analysis__HeadWeight_32 = mercury__float__float_1_f_0(var_use_analysis__HeadCount_31);
                        }
                      else
                        {
                          {
                            mercury__require__unexpected_3_p_0((MR_String) "var_use_analysis", (MR_String) "predicate \140var_use_analysis.disj_var_first_use_2\'/7", (MR_String) "unknown coverage before disjunct");
                            return;
                          }
                        }
                      if ((var_use_analysis__Disjs_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                        var_use_analysis__TailWeight_33 = (MR_Float) 0.0000000000000000;
                      else
                        {
                          MR_Word var_use_analysis__FirstTailDisj_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__Disjs_17, (MR_Integer) 0)));
                          MR_Word var_use_analysis__FirstTailCoverage_36;
                          MR_Word var_use_analysis__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__FirstTailDisj_34, (MR_Integer) 2)));
                          MR_Word var_use_analysis__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__Disjs_17, (MR_Integer) 1)));
                          MR_Word var_use_analysis__Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__FirstTailDisj_34, (MR_Integer) 0)));
                          MR_Word var_use_analysis__Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__FirstTailDisj_34, (MR_Integer) 1)));
                          MR_Box var_use_analysis__conv1_FirstTailCoverage_36;
                          MR_Integer var_use_analysis__TailCount_37;

                          {
                            var_use_analysis__conv1_FirstTailCoverage_36 = mdbcomp__goal_path__get_goal_attribute_det_2_f_0(var_use_analysis__TypeCtorInfo_87_87, var_use_analysis__CoverageArray_22, var_use_analysis__Var_51);
                          }
                          var_use_analysis__FirstTailCoverage_36 = ((MR_Word) var_use_analysis__conv1_FirstTailCoverage_36);
                          {
                            var_use_analysis__succeeded = coverage__get_coverage_before_2_p_0(var_use_analysis__FirstTailCoverage_36, &var_use_analysis__TailCount_37);
                          }
                          if (var_use_analysis__succeeded)
                            {
                              var_use_analysis__TailWeight_33 = mercury__float__float_1_f_0(var_use_analysis__TailCount_37);
                            }
                          else
                            {
                              {
                                mercury__require__unexpected_3_p_0((MR_String) "var_use_analysis", (MR_String) "predicate \140var_use_analysis.disj_var_first_use_2\'/7", (MR_String) "unknown coverage before disjunct");
                                return;
                              }
                            }
                        }
                      {
                        var_use_analysis__Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), var_use_analysis__Var_57, 0) = MR_box_float(var_use_analysis__TailWeight_33);
                        MR_hl_field(MR_mktag(1), var_use_analysis__Var_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                      {
                        var_use_analysis__Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), var_use_analysis__Var_55, 0) = MR_box_float(var_use_analysis__HeadWeight_32);
                        MR_hl_field(MR_mktag(1), var_use_analysis__Var_55, 1) = ((MR_Box) (var_use_analysis__Var_57));
                      }
                      {
                        var_use_analysis__Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), var_use_analysis__Var_59, 0) = MR_box_float(var_use_analysis__TailCost_28);
                        MR_hl_field(MR_mktag(1), var_use_analysis__Var_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                      {
                        var_use_analysis__Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), var_use_analysis__Var_56, 0) = MR_box_float(var_use_analysis__Var_88);
                        MR_hl_field(MR_mktag(1), var_use_analysis__Var_56, 1) = ((MR_Box) (var_use_analysis__Var_59));
                      }
                      {
                        measurements__weighted_average_3_p_0(var_use_analysis__Var_55, var_use_analysis__Var_56, &var_use_analysis__Cost_29);
                      }
                    }
                    break;
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *var_use_analysis__HeadVar__7_7 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = MR_box_float(var_use_analysis__Cost_29);
                }
              }
          }
      }
  }
}

static void MR_CALL 
var_use_analysis__disj_var_first_use_7_p_0(
  MR_Word var_use_analysis__RevGoalPath_8,
  MR_Word var_use_analysis__Disjuncts_9,
  MR_Word var_use_analysis__Detism_10,
  MR_Word var_use_analysis__StaticInfo_11,
  MR_Float var_use_analysis__STATE_VARIABLE_CostSoFar_0_19,
  MR_Float * var_use_analysis__STATE_VARIABLE_CostSoFar_20,
  MR_Word * var_use_analysis__FoundFirstUse_13)
{
  {
    MR_bool var_use_analysis__succeeded;
    MR_Word var_use_analysis__FoundFirstUse0_15;
    MR_Word var_use_analysis__Var_23;
    MR_Float var_use_analysis__Var_17;

    {
      var_use_analysis__disj_var_first_use_2_7_p_0(var_use_analysis__RevGoalPath_8, (MR_Integer) 1, var_use_analysis__Disjuncts_9, var_use_analysis__StaticInfo_11, var_use_analysis__STATE_VARIABLE_CostSoFar_0_19, var_use_analysis__STATE_VARIABLE_CostSoFar_20, &var_use_analysis__FoundFirstUse0_15);
    }
    {
      var_use_analysis__Var_23 = mdbcomp__program_representation__detism_get_solutions_1_f_0(var_use_analysis__Detism_10);
    }
    var_use_analysis__succeeded = (var_use_analysis__Var_23 == (MR_Integer) 2);
    if (var_use_analysis__succeeded)
      {
        var_use_analysis__succeeded = ((MR_tag((MR_Word) var_use_analysis__FoundFirstUse0_15)) == (MR_mktag((MR_Integer) 1)));
        if (var_use_analysis__succeeded)
          var_use_analysis__Var_17 = MR_unbox_float((MR_hl_field(MR_mktag(1), var_use_analysis__FoundFirstUse0_15, (MR_Integer) 0)));
      }
    if (var_use_analysis__succeeded)
      {
        MR_Word var_use_analysis__VarUseType_18;
        MR_Word var_use_analysis__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_11, (MR_Integer) 6)));
        MR_Word var_use_analysis__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_11, (MR_Integer) 0)));
        MR_Word var_use_analysis__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_11, (MR_Integer) 1)));
        MR_Word var_use_analysis__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_11, (MR_Integer) 2)));
        MR_Word var_use_analysis__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_11, (MR_Integer) 3)));
        MR_Word var_use_analysis__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_11, (MR_Integer) 4)));
        MR_Integer var_use_analysis__Var_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_11, (MR_Integer) 5)));
        MR_Word var_use_analysis__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_11, (MR_Integer) 7)));
        MR_Word var_use_analysis__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_11, (MR_Integer) 8)));
        MR_Word var_use_analysis__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_11, (MR_Integer) 9)));
        MR_Word var_use_analysis__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_11, (MR_Integer) 10)));
        MR_Word var_use_analysis__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Var_24, (MR_Integer) 0)));
        MR_Word var_use_analysis__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Var_24, (MR_Integer) 1)));

        var_use_analysis__VarUseType_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Var_24, (MR_Integer) 2)));
        switch (var_use_analysis__VarUseType_18) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *var_use_analysis__FoundFirstUse_13 = base;
              MR_hl_field(MR_mktag(1), base, 0) = MR_box_float(var_use_analysis__STATE_VARIABLE_CostSoFar_0_19);
            }
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 0:
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *var_use_analysis__FoundFirstUse_13 = base;
              MR_hl_field(MR_mktag(1), base, 0) = MR_box_float(*var_use_analysis__STATE_VARIABLE_CostSoFar_20);
            }
            break;
        }
      }
    else
      *var_use_analysis__FoundFirstUse_13 = var_use_analysis__FoundFirstUse0_15;
  }
}

static void MR_CALL 
var_use_analysis__conj_var_first_use_7_p_0(
  MR_Word var_use_analysis__RevGoalPath_1,
  MR_Integer var_use_analysis__ConjNum_2,
  MR_Word var_use_analysis__HeadVar__3_3,
  MR_Word var_use_analysis__StaticInfo_4,
  MR_Float var_use_analysis__HeadVar__5_5,
  MR_Float * var_use_analysis__HeadVar__6_6,
  MR_Word * var_use_analysis__HeadVar__7_7)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool var_use_analysis__succeeded;

        if ((var_use_analysis__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *var_use_analysis__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            *var_use_analysis__HeadVar__6_6 = var_use_analysis__HeadVar__5_5;
          }
        else
          {
            MR_Word var_use_analysis__Conj_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word var_use_analysis__Conjs_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word var_use_analysis__HeadFoundFirstUse_21;
            MR_Word var_use_analysis__Var_26;
            MR_Float var_use_analysis__STATE_VARIABLE_CostSoFar_27_27;
            MR_Word var_use_analysis__Var_28;

            {
              var_use_analysis__Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), var_use_analysis__Var_28, 0) = ((MR_Box) (var_use_analysis__ConjNum_2));
            }
            {
              var_use_analysis__Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), var_use_analysis__Var_26, 0) = ((MR_Box) (var_use_analysis__RevGoalPath_1));
              MR_hl_field(MR_mktag(1), var_use_analysis__Var_26, 1) = ((MR_Box) (var_use_analysis__Var_28));
            }
            {
              var_use_analysis__goal_var_first_use_6_p_0(var_use_analysis__Var_26, var_use_analysis__Conj_16, var_use_analysis__StaticInfo_4, var_use_analysis__HeadVar__5_5, &var_use_analysis__STATE_VARIABLE_CostSoFar_27_27, &var_use_analysis__HeadFoundFirstUse_21);
            }
            if ((var_use_analysis__HeadFoundFirstUse_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Integer var_use_analysis__Var_29 = (var_use_analysis__ConjNum_2 + (MR_Integer) 1);

                /* direct tailcall eliminated */
                {
                  MR_Integer var_use_analysis__next_value_of_ConjNum_2 = var_use_analysis__Var_29;
                  MR_Word var_use_analysis__next_value_of_HeadVar__3_3 = var_use_analysis__Conjs_17;
                  MR_Float var_use_analysis__next_value_of_HeadVar__5_5 = var_use_analysis__STATE_VARIABLE_CostSoFar_27_27;

                  var_use_analysis__HeadVar__5_5 = var_use_analysis__next_value_of_HeadVar__5_5;
                  var_use_analysis__HeadVar__3_3 = var_use_analysis__next_value_of_HeadVar__3_3;
                  var_use_analysis__ConjNum_2 = var_use_analysis__next_value_of_ConjNum_2;
                }
                continue;
              }
            else
              {
                *var_use_analysis__HeadVar__7_7 = var_use_analysis__HeadFoundFirstUse_21;
                *var_use_analysis__HeadVar__6_6 = var_use_analysis__STATE_VARIABLE_CostSoFar_27_27;
              }
          }
      }
      break;
    }
}

static void MR_CALL 
var_use_analysis__goal_var_first_use_6_p_0(
  MR_Word var_use_analysis__RevGoalPath_7,
  MR_Word var_use_analysis__Goal_8,
  MR_Word var_use_analysis__StaticInfo_9,
  MR_Float var_use_analysis__STATE_VARIABLE_CostSoFar_0_67,
  MR_Float * var_use_analysis__STATE_VARIABLE_CostSoFar_68,
  MR_Word * var_use_analysis__FoundFirstUse_11)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool var_use_analysis__succeeded;
        MR_Word var_use_analysis__GoalExpr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Goal_8, (MR_Integer) 0)));
        MR_Word var_use_analysis__Detism_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Goal_8, (MR_Integer) 1)));
        MR_Word var_use_analysis__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Goal_8, (MR_Integer) 2)));
        MR_Word var_use_analysis__CoverageArray_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_9, (MR_Integer) 4)));
        MR_Word var_use_analysis__Coverage_16;
        MR_Word var_use_analysis__Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_9, (MR_Integer) 0)));
        MR_Word var_use_analysis__Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_9, (MR_Integer) 1)));
        MR_Word var_use_analysis__Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_9, (MR_Integer) 2)));
        MR_Word var_use_analysis__Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_9, (MR_Integer) 3)));
        MR_Integer var_use_analysis__Var_91 = ((MR_Integer) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_9, (MR_Integer) 5)));
        MR_Word var_use_analysis__Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_9, (MR_Integer) 6)));
        MR_Word var_use_analysis__Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_9, (MR_Integer) 7)));
        MR_Word var_use_analysis__Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_9, (MR_Integer) 8)));
        MR_Word var_use_analysis__Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_9, (MR_Integer) 9)));
        MR_Word var_use_analysis__Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_9, (MR_Integer) 10)));
        MR_Box var_use_analysis__conv0_Coverage_16;

        {
          var_use_analysis__conv0_Coverage_16 = mdbcomp__goal_path__get_goal_attribute_det_2_f_0((MR_Word) &coverage__coverage__type_ctor_info_coverage_info_0, var_use_analysis__CoverageArray_15, var_use_analysis__Var_14);
        }
        var_use_analysis__Coverage_16 = ((MR_Word) var_use_analysis__conv0_Coverage_16);
        {
          MR_Integer var_use_analysis__Var_112;

          {
            var_use_analysis__succeeded = coverage__get_coverage_before_2_p_0(var_use_analysis__Coverage_16, &var_use_analysis__Var_112);
          }
          if (var_use_analysis__succeeded)
            var_use_analysis__succeeded = ((MR_Integer) 0 == var_use_analysis__Var_112);
        }
        if (!(var_use_analysis__succeeded))
          {
            MR_Word var_use_analysis__VarUseType_17;
            MR_Word var_use_analysis__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_9, (MR_Integer) 6)));
            MR_Word var_use_analysis__Var_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_9, (MR_Integer) 0)));
            MR_Word var_use_analysis__Var_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_9, (MR_Integer) 1)));
            MR_Word var_use_analysis__Var_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_9, (MR_Integer) 2)));
            MR_Word var_use_analysis__Var_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_9, (MR_Integer) 3)));
            MR_Word var_use_analysis__Var_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_9, (MR_Integer) 4)));
            MR_Integer var_use_analysis__Var_104 = ((MR_Integer) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_9, (MR_Integer) 5)));
            MR_Word var_use_analysis__Var_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_9, (MR_Integer) 7)));
            MR_Word var_use_analysis__Var_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_9, (MR_Integer) 8)));
            MR_Word var_use_analysis__Var_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_9, (MR_Integer) 9)));
            MR_Word var_use_analysis__Var_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_9, (MR_Integer) 10)));
            MR_Word var_use_analysis__Var_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Var_70, (MR_Integer) 0)));
            MR_Word var_use_analysis__Var_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Var_70, (MR_Integer) 1)));

            var_use_analysis__VarUseType_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Var_70, (MR_Integer) 2)));
            var_use_analysis__succeeded = (var_use_analysis__VarUseType_17 == (MR_Integer) 0);
            if (var_use_analysis__succeeded)
              {
                switch (var_use_analysis__Detism_13) {
                  default:
                    var_use_analysis__succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 6:
                    var_use_analysis__succeeded = MR_TRUE;
                    break;
                  case (MR_Integer) 7:
                    var_use_analysis__succeeded = MR_TRUE;
                    break;
                }
                if (!(var_use_analysis__succeeded))
                  {
                    MR_Integer var_use_analysis__Var_113;

                    {
                      var_use_analysis__succeeded = coverage__get_coverage_after_2_p_0(var_use_analysis__Coverage_16, &var_use_analysis__Var_113);
                    }
                    if (var_use_analysis__succeeded)
                      var_use_analysis__succeeded = ((MR_Integer) 0 == var_use_analysis__Var_113);
                  }
              }
          }
        if (var_use_analysis__succeeded)
          {
            *var_use_analysis__FoundFirstUse_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            *var_use_analysis__STATE_VARIABLE_CostSoFar_68 = var_use_analysis__STATE_VARIABLE_CostSoFar_0_67;
          }
        else
          switch (MR_tag((MR_Word) var_use_analysis__GoalExpr_12)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word var_use_analysis__Conjuncts_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__GoalExpr_12, (MR_Integer) 0)));

                {
                  var_use_analysis__conj_var_first_use_7_p_0(var_use_analysis__RevGoalPath_7, (MR_Integer) 1, var_use_analysis__Conjuncts_18, var_use_analysis__StaticInfo_9, var_use_analysis__STATE_VARIABLE_CostSoFar_0_67, var_use_analysis__STATE_VARIABLE_CostSoFar_68, var_use_analysis__FoundFirstUse_11);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word var_use_analysis__Disjuncts_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__GoalExpr_12, (MR_Integer) 0)));

                {
                  var_use_analysis__disj_var_first_use_7_p_0(var_use_analysis__RevGoalPath_7, var_use_analysis__Disjuncts_19, var_use_analysis__Detism_13, var_use_analysis__StaticInfo_9, var_use_analysis__STATE_VARIABLE_CostSoFar_0_67, var_use_analysis__STATE_VARIABLE_CostSoFar_68, var_use_analysis__FoundFirstUse_11);
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Integer var_use_analysis__SwitchedOnVar_20 = ((MR_Integer) (MR_hl_field(MR_mktag(2), var_use_analysis__GoalExpr_12, (MR_Integer) 0)));
                MR_Word var_use_analysis__Cases_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), var_use_analysis__GoalExpr_12, (MR_Integer) 2)));
                MR_Word var_use_analysis___CanFail_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), var_use_analysis__GoalExpr_12, (MR_Integer) 1)));

                {
                  var_use_analysis__switch_var_first_use_7_p_0(var_use_analysis__RevGoalPath_7, var_use_analysis__SwitchedOnVar_20, var_use_analysis__Cases_22, var_use_analysis__StaticInfo_9, var_use_analysis__STATE_VARIABLE_CostSoFar_0_67, var_use_analysis__STATE_VARIABLE_CostSoFar_68, var_use_analysis__FoundFirstUse_11);
                }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), var_use_analysis__GoalExpr_12, (MR_Integer) 0)))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word var_use_analysis__Cond_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), var_use_analysis__GoalExpr_12, (MR_Integer) 1)));
                    MR_Word var_use_analysis__Then_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), var_use_analysis__GoalExpr_12, (MR_Integer) 2)));
                    MR_Word var_use_analysis__Else_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), var_use_analysis__GoalExpr_12, (MR_Integer) 3)));

                    {
                      var_use_analysis__ite_var_first_use_8_p_0(var_use_analysis__RevGoalPath_7, var_use_analysis__Cond_23, var_use_analysis__Then_24, var_use_analysis__Else_25, var_use_analysis__StaticInfo_9, var_use_analysis__STATE_VARIABLE_CostSoFar_0_67, var_use_analysis__STATE_VARIABLE_CostSoFar_68, var_use_analysis__FoundFirstUse_11);
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word var_use_analysis__SubGoal_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), var_use_analysis__GoalExpr_12, (MR_Integer) 1)));
                    MR_Word var_use_analysis__RevSubGoalPath_29;

                    {
                      var_use_analysis__RevSubGoalPath_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), var_use_analysis__RevSubGoalPath_29, 0) = ((MR_Box) (var_use_analysis__RevGoalPath_7));
                      MR_hl_field(MR_mktag(1), var_use_analysis__RevSubGoalPath_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                    }
                    /* direct tailcall eliminated */
                    {
                      MR_Word var_use_analysis__next_value_of_RevGoalPath_7 = var_use_analysis__RevSubGoalPath_29;
                      MR_Word var_use_analysis__next_value_of_Goal_8 = var_use_analysis__SubGoal_26;

                      var_use_analysis__Goal_8 = var_use_analysis__next_value_of_Goal_8;
                      var_use_analysis__RevGoalPath_7 = var_use_analysis__next_value_of_RevGoalPath_7;
                    }
                    continue;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word var_use_analysis__ScopeIsCut_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), var_use_analysis__GoalExpr_12, (MR_Integer) 2)));
                    MR_Word var_use_analysis__SubGoal_114 = ((MR_Word) (MR_hl_field(MR_mktag(3), var_use_analysis__GoalExpr_12, (MR_Integer) 1)));
                    MR_Word var_use_analysis__GoalPathStep_115;
                    MR_Word var_use_analysis__RevSubGoalPath_116;

                    {
                      var_use_analysis__GoalPathStep_115 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), var_use_analysis__GoalPathStep_115, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), var_use_analysis__GoalPathStep_115, 1) = ((MR_Box) (var_use_analysis__ScopeIsCut_28));
                    }
                    {
                      var_use_analysis__RevSubGoalPath_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), var_use_analysis__RevSubGoalPath_116, 0) = ((MR_Box) (var_use_analysis__RevGoalPath_7));
                      MR_hl_field(MR_mktag(1), var_use_analysis__RevSubGoalPath_116, 1) = ((MR_Box) (var_use_analysis__GoalPathStep_115));
                    }
                    /* direct tailcall eliminated */
                    {
                      MR_Word var_use_analysis__next_value_of_RevGoalPath_7 = var_use_analysis__RevSubGoalPath_116;
                      MR_Word var_use_analysis__next_value_of_Goal_8 = var_use_analysis__SubGoal_114;

                      var_use_analysis__Goal_8 = var_use_analysis__next_value_of_Goal_8;
                      var_use_analysis__RevGoalPath_7 = var_use_analysis__next_value_of_RevGoalPath_7;
                    }
                    continue;
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Word var_use_analysis__BoundVars_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), var_use_analysis__GoalExpr_12, (MR_Integer) 3)));
                    MR_Word var_use_analysis__AtomicGoal_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), var_use_analysis__GoalExpr_12, (MR_Integer) 4)));
                    MR_String var_use_analysis__Var_30 = ((MR_String) (MR_hl_field(MR_mktag(3), var_use_analysis__GoalExpr_12, (MR_Integer) 1)));
                    MR_Integer var_use_analysis__Var_31 = ((MR_Integer) (MR_hl_field(MR_mktag(3), var_use_analysis__GoalExpr_12, (MR_Integer) 2)));

                    switch (MR_tag((MR_Word) var_use_analysis__AtomicGoal_33)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                      case (MR_Integer) 1:
                      case (MR_Integer) 2:
                        {
                          {
                            var_use_analysis__atomic_trivial_var_first_use_5_p_0(var_use_analysis__AtomicGoal_33, var_use_analysis__BoundVars_32, var_use_analysis__STATE_VARIABLE_CostSoFar_0_67, var_use_analysis__StaticInfo_9, var_use_analysis__FoundFirstUse_11);
                          }
                          *var_use_analysis__STATE_VARIABLE_CostSoFar_68 = var_use_analysis__STATE_VARIABLE_CostSoFar_0_67;
                        }
                        break;
                      case (MR_Integer) 3:
                        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), var_use_analysis__AtomicGoal_33, (MR_Integer) 0)))) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                          case (MR_Integer) 1:
                          case (MR_Integer) 2:
                          case (MR_Integer) 3:
                          case (MR_Integer) 4:
                          case (MR_Integer) 8:
                          case (MR_Integer) 9:
                            {
                              {
                                var_use_analysis__atomic_trivial_var_first_use_5_p_0(var_use_analysis__AtomicGoal_33, var_use_analysis__BoundVars_32, var_use_analysis__STATE_VARIABLE_CostSoFar_0_67, var_use_analysis__StaticInfo_9, var_use_analysis__FoundFirstUse_11);
                              }
                              *var_use_analysis__STATE_VARIABLE_CostSoFar_68 = var_use_analysis__STATE_VARIABLE_CostSoFar_0_67;
                            }
                            break;
                          case (MR_Integer) 5:
                          case (MR_Integer) 6:
                          case (MR_Integer) 7:
                            {
                              var_use_analysis__call_var_first_use_7_p_0(var_use_analysis__AtomicGoal_33, var_use_analysis__BoundVars_32, var_use_analysis__RevGoalPath_7, var_use_analysis__StaticInfo_9, var_use_analysis__FoundFirstUse_11, var_use_analysis__STATE_VARIABLE_CostSoFar_0_67, var_use_analysis__STATE_VARIABLE_CostSoFar_68);
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

static void MR_CALL 
var_use_analysis__ffu_to_float_3_p_0(
  MR_Float var_use_analysis__Default_1,
  MR_Word var_use_analysis__HeadVar__2_2,
  MR_Float * var_use_analysis__HeadVar__3_3)
{
  {
    MR_bool var_use_analysis__succeeded;

    if ((var_use_analysis__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *var_use_analysis__HeadVar__3_3 = var_use_analysis__Default_1;
    else
      *var_use_analysis__HeadVar__3_3 = MR_unbox_float((MR_hl_field(MR_mktag(1), var_use_analysis__HeadVar__2_2, (MR_Integer) 0)));
  }
}

static void MR_CALL 
var_use_analysis__atomic_trivial_var_first_use_5_p_0(
  MR_Word var_use_analysis__AtomicGoal_6,
  MR_Word var_use_analysis__BoundVars_7,
  MR_Float var_use_analysis__CostSoFar_8,
  MR_Word var_use_analysis__StaticInfo_9,
  MR_Word * var_use_analysis__FoundFirstUse_10)
{
  {
    MR_bool var_use_analysis__succeeded;
    MR_Integer var_use_analysis__Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_9, (MR_Integer) 5)));
    MR_Word var_use_analysis__VarUseType_12;
    MR_Word var_use_analysis__Vars_13;
    MR_Word var_use_analysis__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_9, (MR_Integer) 6)));
    MR_Word var_use_analysis__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_9, (MR_Integer) 0)));
    MR_Word var_use_analysis__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_9, (MR_Integer) 1)));
    MR_Word var_use_analysis__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_9, (MR_Integer) 2)));
    MR_Word var_use_analysis__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_9, (MR_Integer) 3)));
    MR_Word var_use_analysis__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_9, (MR_Integer) 4)));
    MR_Word var_use_analysis__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_9, (MR_Integer) 7)));
    MR_Word var_use_analysis__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_9, (MR_Integer) 8)));
    MR_Word var_use_analysis__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_9, (MR_Integer) 9)));
    MR_Word var_use_analysis__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_9, (MR_Integer) 10)));
    MR_Word var_use_analysis__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Var_20, (MR_Integer) 0)));
    MR_Word var_use_analysis__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Var_20, (MR_Integer) 1)));
    MR_Word var_use_analysis__TypeCtorInfo_37_37;

    var_use_analysis__VarUseType_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Var_20, (MR_Integer) 2)));
    {
      program_representation_utils__atomic_goal_get_vars_2_p_0(var_use_analysis__AtomicGoal_6, &var_use_analysis__Vars_13);
    }
    var_use_analysis__TypeCtorInfo_37_37 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    {
      var_use_analysis__succeeded = mercury__set__member_2_p_0(var_use_analysis__TypeCtorInfo_37_37, ((MR_Box) (var_use_analysis__Var_11)), var_use_analysis__Vars_13);
    }
    if (var_use_analysis__succeeded)
      switch (var_use_analysis__VarUseType_12) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          var_use_analysis__succeeded = MR_TRUE;
          break;
        case (MR_Integer) 2:
          var_use_analysis__succeeded = MR_TRUE;
          break;
        case (MR_Integer) 0:
          {
            var_use_analysis__succeeded = mercury__list__member_2_p_0(var_use_analysis__TypeCtorInfo_37_37, ((MR_Box) (var_use_analysis__Var_11)), var_use_analysis__BoundVars_7);
          }
          break;
      }
    if (var_use_analysis__succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *var_use_analysis__FoundFirstUse_10 = base;
        MR_hl_field(MR_mktag(1), base, 0) = MR_box_float(var_use_analysis__CostSoFar_8);
      }
    else
      *var_use_analysis__FoundFirstUse_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  }
}

static void MR_CALL 
var_use_analysis__call_var_first_use_7_p_0(
  MR_Word var_use_analysis__AtomicGoal_8,
  MR_Word var_use_analysis__BoundVars_9,
  MR_Word var_use_analysis__RevGoalPath_10,
  MR_Word var_use_analysis__StaticInfo_11,
  MR_Word * var_use_analysis__FoundFirstUse_12,
  MR_Float var_use_analysis__STATE_VARIABLE_CostSoFar_0_52,
  MR_Float * var_use_analysis__STATE_VARIABLE_CostSoFar_53)
{
  {
    MR_bool var_use_analysis__succeeded;
    MR_Word var_use_analysis__TypeCtorInfo_77_77 = (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0;
    MR_Word var_use_analysis__CliquePtr_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_11, (MR_Integer) 0)));
    MR_Word var_use_analysis__CostMap_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_11, (MR_Integer) 1)));
    MR_Word var_use_analysis__RecCostMap_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_11, (MR_Integer) 2)));
    MR_Integer var_use_analysis__Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_11, (MR_Integer) 5)));
    MR_Word var_use_analysis__VarUseOptions_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_11, (MR_Integer) 6)));
    MR_Word var_use_analysis__VarUseType_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_21, (MR_Integer) 2)));
    MR_Word var_use_analysis__CostAndCallees_27;
    MR_Word var_use_analysis__Cost0_28;
    MR_Float var_use_analysis__Cost_29;
    MR_Word var_use_analysis__Args_32;
    MR_Word var_use_analysis__Vars_33;
    MR_Word var_use_analysis___ContainingGoalMap_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_11, (MR_Integer) 3)));
    MR_Word var_use_analysis___CoverageArray_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_11, (MR_Integer) 4)));
    MR_Word var_use_analysis___CallStack_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_11, (MR_Integer) 7)));
    MR_Word var_use_analysis___RecursionType_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_11, (MR_Integer) 8)));
    MR_Word var_use_analysis___MaybeCurDepth_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_11, (MR_Integer) 9)));
    MR_Word var_use_analysis___RecInfo_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_11, (MR_Integer) 10)));
    MR_Word var_use_analysis__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_21, (MR_Integer) 0)));
    MR_Word var_use_analysis__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_21, (MR_Integer) 1)));
    MR_Box var_use_analysis__conv0_CostAndCallees_27;
    MR_Float var_use_analysis__Var_54;

    {
      mercury__map__lookup_3_p_0(var_use_analysis__TypeCtorInfo_77_77, (MR_Word) &var_use_analysis_scalar_common_1[0], var_use_analysis__CostMap_16, ((MR_Box) (var_use_analysis__RevGoalPath_10)), &var_use_analysis__conv0_CostAndCallees_27);
    }
    var_use_analysis__CostAndCallees_27 = ((MR_Word) var_use_analysis__conv0_CostAndCallees_27);
    {
      var_use_analysis__succeeded = analysis_utils__cost_and_callees_is_recursive_2_p_0(var_use_analysis__CliquePtr_15, var_use_analysis__CostAndCallees_27);
    }
    if (var_use_analysis__succeeded)
      {
        MR_Box var_use_analysis__conv1_Cost0_28;

        {
          mercury__map__lookup_3_p_0(var_use_analysis__TypeCtorInfo_77_77, (MR_Word) &measurements__measurements__type_ctor_info_cs_cost_csq_0, var_use_analysis__RecCostMap_17, ((MR_Box) (var_use_analysis__RevGoalPath_10)), &var_use_analysis__conv1_Cost0_28);
        }
        var_use_analysis__Cost0_28 = ((MR_Word) var_use_analysis__conv1_Cost0_28);
      }
    else
      {
        MR_Integer var_use_analysis__Var_74;
        MR_Word var_use_analysis__Var_75;
        MR_Word var_use_analysis__Var_76;

        var_use_analysis__Cost0_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__CostAndCallees_27, (MR_Integer) 0)));
        var_use_analysis__Var_74 = ((MR_Integer) (MR_hl_field(MR_mktag(0), var_use_analysis__CostAndCallees_27, (MR_Integer) 1)));
        var_use_analysis__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__CostAndCallees_27, (MR_Integer) 2)));
        var_use_analysis__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__CostAndCallees_27, (MR_Integer) 3)));
      }
    {
      var_use_analysis__Var_54 = measurements__cs_cost_get_calls_1_f_0(var_use_analysis__Cost0_28);
    }
    var_use_analysis__succeeded = (var_use_analysis__Var_54 == ((MR_Float) 0.0000000000000000));
    if (var_use_analysis__succeeded)
      var_use_analysis__Cost_29 = (MR_Float) 0.0000000000000000;
    else
      {
        var_use_analysis__Cost_29 = measurements__cs_cost_get_percall_1_f_0(var_use_analysis__Cost0_28);
      }
    *var_use_analysis__STATE_VARIABLE_CostSoFar_53 = (var_use_analysis__STATE_VARIABLE_CostSoFar_0_52 + var_use_analysis__Cost_29);
    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), var_use_analysis__AtomicGoal_8, (MR_Integer) 0)))) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 5:
        {
          MR_Integer var_use_analysis__HOVar_34 = ((MR_Integer) (MR_hl_field(MR_mktag(3), var_use_analysis__AtomicGoal_8, (MR_Integer) 1)));

          var_use_analysis__Args_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), var_use_analysis__AtomicGoal_8, (MR_Integer) 2)));
          {
            var_use_analysis__Vars_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), var_use_analysis__Vars_33, 0) = ((MR_Box) (var_use_analysis__HOVar_34));
            MR_hl_field(MR_mktag(1), var_use_analysis__Vars_33, 1) = ((MR_Box) (var_use_analysis__Args_32));
          }
        }
        break;
      case (MR_Integer) 6:
        {
          MR_Integer var_use_analysis__HOVar_85 = ((MR_Integer) (MR_hl_field(MR_mktag(3), var_use_analysis__AtomicGoal_8, (MR_Integer) 1)));
          MR_Integer var_use_analysis__Var_35 = ((MR_Integer) (MR_hl_field(MR_mktag(3), var_use_analysis__AtomicGoal_8, (MR_Integer) 2)));

          var_use_analysis__Args_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), var_use_analysis__AtomicGoal_8, (MR_Integer) 3)));
          {
            var_use_analysis__Vars_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), var_use_analysis__Vars_33, 0) = ((MR_Box) (var_use_analysis__HOVar_85));
            MR_hl_field(MR_mktag(1), var_use_analysis__Vars_33, 1) = ((MR_Box) (var_use_analysis__Args_32));
          }
        }
        break;
      case (MR_Integer) 7:
        {
          MR_String var_use_analysis__Var_30 = ((MR_String) (MR_hl_field(MR_mktag(3), var_use_analysis__AtomicGoal_8, (MR_Integer) 1)));
          MR_String var_use_analysis__Var_31 = ((MR_String) (MR_hl_field(MR_mktag(3), var_use_analysis__AtomicGoal_8, (MR_Integer) 2)));

          var_use_analysis__Args_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), var_use_analysis__AtomicGoal_8, (MR_Integer) 3)));
          var_use_analysis__Vars_33 = var_use_analysis__Args_32;
        }
        break;
    }
    {
      var_use_analysis__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (var_use_analysis__Var_20)), var_use_analysis__Vars_33);
    }
    if (var_use_analysis__succeeded)
      {
        MR_Float var_use_analysis__FirstTime_41;
        MR_Float var_use_analysis__Var_62;
        MR_Word var_use_analysis__TypeCtorInfo_81_81;
        MR_Word var_use_analysis__TypeCtorInfo_82_82;

        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), var_use_analysis__AtomicGoal_8, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 5:
          case (MR_Integer) 6:
            var_use_analysis__FirstTime_41 = (MR_Float) 0.0000000000000000;
            break;
          case (MR_Integer) 7:
            {
              MR_Word var_use_analysis__Times_45;

              {
                var_use_analysis__call_args_first_use_5_p_0(var_use_analysis__Args_32, var_use_analysis__Cost_29, var_use_analysis__StaticInfo_11, var_use_analysis__CostAndCallees_27, &var_use_analysis__Times_45);
              }
              if ((var_use_analysis__Times_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "var_use_analysis", (MR_String) "predicate \140var_use_analysis.call_var_first_use\'/7", (MR_String) "no solutions for variable first use time");
                    return;
                  }
                }
              else
                {
                  MR_Word var_use_analysis__LaterTimes_46;
                  MR_Float var_use_analysis__Var_47;
                  MR_Word var_use_analysis__Var_48;

                  var_use_analysis__FirstTime_41 = MR_unbox_float((MR_hl_field(MR_mktag(1), var_use_analysis__Times_45, (MR_Integer) 0)));
                  var_use_analysis__LaterTimes_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__Times_45, (MR_Integer) 1)));
                  var_use_analysis__succeeded = (var_use_analysis__VarUseType_26 == (MR_Integer) 0);
                  if (var_use_analysis__succeeded)
                    {
                      var_use_analysis__succeeded = ((MR_tag((MR_Word) var_use_analysis__LaterTimes_46)) == (MR_mktag((MR_Integer) 1)));
                      if (var_use_analysis__succeeded)
                        {
                          var_use_analysis__Var_47 = MR_unbox_float((MR_hl_field(MR_mktag(1), var_use_analysis__LaterTimes_46, (MR_Integer) 0)));
                          var_use_analysis__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__LaterTimes_46, (MR_Integer) 1)));
                        }
                    }
                  if (var_use_analysis__succeeded)
                    {
                      {
                        mercury__require__unexpected_3_p_0((MR_String) "var_use_analysis", (MR_String) "predicate \140var_use_analysis.call_var_first_use\'/7", (MR_String) "multiple solutions for variable production time");
                        return;
                      }
                    }
                  else
                    {
                    }
                }
            }
            break;
        }
        var_use_analysis__Var_62 = (var_use_analysis__STATE_VARIABLE_CostSoFar_0_52 + var_use_analysis__FirstTime_41);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *var_use_analysis__FoundFirstUse_12 = base;
          MR_hl_field(MR_mktag(1), base, 0) = MR_box_float(var_use_analysis__Var_62);
        }
        var_use_analysis__succeeded = (var_use_analysis__VarUseType_26 == (MR_Integer) 0);
        if (var_use_analysis__succeeded)
          {
            var_use_analysis__TypeCtorInfo_81_81 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
            {
              var_use_analysis__succeeded = mercury__list__member_2_p_0(var_use_analysis__TypeCtorInfo_81_81, ((MR_Box) (var_use_analysis__Var_20)), var_use_analysis__BoundVars_9);
            }
            var_use_analysis__succeeded = !(var_use_analysis__succeeded);
          }
        if (var_use_analysis__succeeded)
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "var_use_analysis", (MR_String) "predicate \140var_use_analysis.call_var_first_use\'/7", (MR_String) "a bound var must be produced by a call if it is an argument.");
              return;
            }
          }
        else
          {
          }
        var_use_analysis__succeeded = (var_use_analysis__VarUseType_26 == (MR_Integer) 1);
        if (var_use_analysis__succeeded)
          {
            var_use_analysis__TypeCtorInfo_82_82 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
            {
              var_use_analysis__succeeded = mercury__list__member_2_p_0(var_use_analysis__TypeCtorInfo_82_82, ((MR_Box) (var_use_analysis__Var_20)), var_use_analysis__BoundVars_9);
            }
          }
        if (var_use_analysis__succeeded)
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "var_use_analysis", (MR_String) "predicate \140var_use_analysis.call_var_first_use\'/7", (MR_String) "a consumed var must not be mentioned in BoundVars");
              return;
            }
          }
        else
          {
          }
        var_use_analysis__succeeded = (var_use_analysis__VarUseType_26 == (MR_Integer) 0);
        if (var_use_analysis__succeeded)
          {
            if (((((MR_tag((MR_Word) var_use_analysis__AtomicGoal_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), var_use_analysis__AtomicGoal_8, (MR_Integer) 0)))) == (MR_Integer) 5))))
              {
                MR_Integer var_use_analysis__Var_83 = ((MR_Integer) (MR_hl_field(MR_mktag(3), var_use_analysis__AtomicGoal_8, (MR_Integer) 1)));
                MR_Word var_use_analysis__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), var_use_analysis__AtomicGoal_8, (MR_Integer) 2)));

                var_use_analysis__succeeded = (var_use_analysis__Var_20 == var_use_analysis__Var_83);
              }
            else
            if (((((MR_tag((MR_Word) var_use_analysis__AtomicGoal_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), var_use_analysis__AtomicGoal_8, (MR_Integer) 0)))) == (MR_Integer) 6))))
              {
                MR_Integer var_use_analysis__Var_84 = ((MR_Integer) (MR_hl_field(MR_mktag(3), var_use_analysis__AtomicGoal_8, (MR_Integer) 1)));
                MR_Integer var_use_analysis__Var_50 = ((MR_Integer) (MR_hl_field(MR_mktag(3), var_use_analysis__AtomicGoal_8, (MR_Integer) 2)));
                MR_Word var_use_analysis__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), var_use_analysis__AtomicGoal_8, (MR_Integer) 3)));

                var_use_analysis__succeeded = (var_use_analysis__Var_20 == var_use_analysis__Var_84);
              }
            else
              var_use_analysis__succeeded = MR_FALSE;
          }
        if (var_use_analysis__succeeded)
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "var_use_analysis", (MR_String) "predicate \140var_use_analysis.call_var_first_use\'/7", (MR_String) "a HO call site cannot produce its own HO value");
              return;
            }
          }
        else
          {
          }
      }
    else
      *var_use_analysis__FoundFirstUse_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  }
}

static void MR_CALL 
var_use_analysis__call_args_first_use_5_p_0_1(
  MR_Box var_use_analysis__closure_arg,
  MR_Box var_use_analysis__wrapper_arg_1,
  MR_Box * var_use_analysis__wrapper_arg_2)
{
  {
    MR_Box var_use_analysis__closure = var_use_analysis__closure_arg;
    MR_Float var_use_analysis__conv1_Time_18;

    {
      var_use_analysis__get_call_site_dynamic_var_use_time_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__closure, (MR_Integer) 6))), MR_unbox_float((MR_hl_field(MR_mktag(0), var_use_analysis__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__closure, (MR_Integer) 8))), ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__closure, (MR_Integer) 9))), ((MR_Integer) var_use_analysis__wrapper_arg_1), &var_use_analysis__conv1_Time_18);
    }
    *var_use_analysis__wrapper_arg_2 = MR_box_float(var_use_analysis__conv1_Time_18);
  }
}

static void MR_CALL 
var_use_analysis__call_args_first_use_5_p_0(
  MR_Word var_use_analysis__Args_6,
  MR_Float var_use_analysis__Cost_7,
  MR_Word var_use_analysis__StaticInfo_8,
  MR_Word var_use_analysis__CostAndCallees_9,
  MR_Word * var_use_analysis__Times_10)
{
  {
    MR_bool var_use_analysis__succeeded;
    MR_Word var_use_analysis__CliquePtr_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_8, (MR_Integer) 0)));
    MR_Integer var_use_analysis__Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_8, (MR_Integer) 5)));
    MR_Word var_use_analysis__VarUseOptions_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_8, (MR_Integer) 6)));
    MR_Word var_use_analysis__CallStack_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_8, (MR_Integer) 7)));
    MR_Word var_use_analysis__RecursionType_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_8, (MR_Integer) 8)));
    MR_Word var_use_analysis__CurDepth_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_8, (MR_Integer) 9)));
    MR_Word var_use_analysis__VarUseType_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_17, (MR_Integer) 2)));
    MR_Word var_use_analysis__HigherOrder_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__CostAndCallees_9, (MR_Integer) 3)));
    MR_Word var_use_analysis__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__CostAndCallees_9, (MR_Integer) 2)));
    MR_Word var_use_analysis___CostMap_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_8, (MR_Integer) 1)));
    MR_Word var_use_analysis___RecCostMap_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_8, (MR_Integer) 2)));
    MR_Word var_use_analysis___ContainingGoalMap_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_8, (MR_Integer) 3)));
    MR_Word var_use_analysis___CoverageArray_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_8, (MR_Integer) 4)));
    MR_Word var_use_analysis___RecInfo_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__StaticInfo_8, (MR_Integer) 10)));
    MR_Word var_use_analysis__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_17, (MR_Integer) 0)));
    MR_Word var_use_analysis__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_17, (MR_Integer) 1)));
    MR_Word var_use_analysis__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__CostAndCallees_9, (MR_Integer) 0)));
    MR_Integer var_use_analysis__Var_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), var_use_analysis__CostAndCallees_9, (MR_Integer) 1)));

    switch (var_use_analysis__HigherOrder_23) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word var_use_analysis__TypeCtorInfo_46_46 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
          MR_Word var_use_analysis__ArgNums_25;

          {
            mercury__list__member_indexes0_3_p_0(var_use_analysis__TypeCtorInfo_46_46, ((MR_Box) (var_use_analysis__Var_16)), var_use_analysis__Args_6, &var_use_analysis__ArgNums_25);
          }
          {
            var_use_analysis__succeeded = mercury__set__empty_1_p_0((MR_Word) &analysis_utils__analysis_utils__type_ctor_info_callee_0, var_use_analysis__Var_41);
          }
          if (var_use_analysis__succeeded)
            {
              MR_Float var_use_analysis__Time_26;

              switch (var_use_analysis__VarUseType_22) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  var_use_analysis__Time_26 = (MR_Float) 0.0000000000000000;
                  break;
                case (MR_Integer) 2:
                case (MR_Integer) 0:
                  var_use_analysis__Time_26 = var_use_analysis__Cost_7;
                  break;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *var_use_analysis__Times_10 = base;
                MR_hl_field(MR_mktag(1), base, 0) = MR_box_float(var_use_analysis__Time_26);
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
          else
            {
              MR_Word var_use_analysis__SingletonCallee_27;
              MR_Box var_use_analysis__conv0_SingletonCallee_27;

              {
                var_use_analysis__succeeded = mercury__set__is_singleton_2_p_0((MR_Word) &analysis_utils__analysis_utils__type_ctor_info_callee_0, var_use_analysis__Var_41, &var_use_analysis__conv0_SingletonCallee_27);
              }
              if (var_use_analysis__succeeded)
                {
                  var_use_analysis__SingletonCallee_27 = ((MR_Word) var_use_analysis__conv0_SingletonCallee_27);
                  var_use_analysis__succeeded = MR_TRUE;
                }
              if (var_use_analysis__succeeded)
                {
                  MR_Word var_use_analysis__TypeCtorInfo_51_51;
                  MR_Word var_use_analysis__CSDPtr_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__SingletonCallee_27, (MR_Integer) 1)));
                  MR_Word var_use_analysis__Times0_29;
                  MR_Word var_use_analysis__Var_32;
                  MR_Word var_use_analysis__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__SingletonCallee_27, (MR_Integer) 0)));

                  {
                    var_use_analysis__Var_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), var_use_analysis__Var_32, 0) = ((MR_Box) (&var_use_analysis_scalar_common_7[0]));
                    MR_hl_field(MR_mktag(0), var_use_analysis__Var_32, 1) = ((MR_Box) (var_use_analysis__call_args_first_use_5_p_0_1));
                    MR_hl_field(MR_mktag(0), var_use_analysis__Var_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                    MR_hl_field(MR_mktag(0), var_use_analysis__Var_32, 3) = ((MR_Box) (var_use_analysis__CliquePtr_11));
                    MR_hl_field(MR_mktag(0), var_use_analysis__Var_32, 4) = ((MR_Box) (var_use_analysis__CSDPtr_28));
                    MR_hl_field(MR_mktag(0), var_use_analysis__Var_32, 5) = ((MR_Box) (var_use_analysis__RecursionType_19));
                    MR_hl_field(MR_mktag(0), var_use_analysis__Var_32, 6) = ((MR_Box) (var_use_analysis__CurDepth_20));
                    MR_hl_field(MR_mktag(0), var_use_analysis__Var_32, 7) = MR_box_float(var_use_analysis__Cost_7);
                    MR_hl_field(MR_mktag(0), var_use_analysis__Var_32, 8) = ((MR_Box) (var_use_analysis__CallStack_18));
                    MR_hl_field(MR_mktag(0), var_use_analysis__Var_32, 9) = ((MR_Box) (var_use_analysis__VarUseOptions_17));
                  }
                  var_use_analysis__TypeCtorInfo_51_51 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0;
                  {
                    mercury__list__map_3_p_0(var_use_analysis__TypeCtorInfo_46_46, var_use_analysis__TypeCtorInfo_51_51, var_use_analysis__Var_32, var_use_analysis__ArgNums_25, &var_use_analysis__Times0_29);
                  }
                  {
                    mercury__list__sort_and_remove_dups_2_p_0(var_use_analysis__TypeCtorInfo_51_51, var_use_analysis__Times0_29, var_use_analysis__Times_10);
                  }
                }
              else
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "var_use_analysis", (MR_String) "predicate \140var_use_analysis.call_args_first_use\'/5", (MR_String) "wrong number of callees for normal call site");
                    return;
                  }
                }
            }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Float var_use_analysis__Time_36;

          switch (var_use_analysis__VarUseType_22) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              var_use_analysis__Time_36 = (MR_Float) 0.0000000000000000;
              break;
            case (MR_Integer) 2:
            case (MR_Integer) 0:
              var_use_analysis__Time_36 = var_use_analysis__Cost_7;
              break;
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *var_use_analysis__Times_10 = base;
            MR_hl_field(MR_mktag(1), base, 0) = MR_box_float(var_use_analysis__Time_36);
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
        }
        break;
    }
  }
}

static void MR_CALL 
var_use_analysis__prepare_for_proc_var_first_use_7_p_0_2(
  MR_Box var_use_analysis__closure_arg,
  MR_Box var_use_analysis__wrapper_arg_1,
  MR_Box var_use_analysis__wrapper_arg_2,
  MR_Box * var_use_analysis__wrapper_arg_3,
  MR_Box var_use_analysis__wrapper_arg_4,
  MR_Box * var_use_analysis__wrapper_arg_5)
{
  {
    MR_Box var_use_analysis__closure = var_use_analysis__closure_arg;
    MR_Word var_use_analysis__conv4_HeadVar__3_3;
    MR_Word var_use_analysis__conv3_HeadVar__5_5;

    {
      coverage__add_coverage_point_to_map_5_p_0(((MR_Word) var_use_analysis__wrapper_arg_1), ((MR_Word) var_use_analysis__wrapper_arg_2), &var_use_analysis__conv4_HeadVar__3_3, ((MR_Word) var_use_analysis__wrapper_arg_4), &var_use_analysis__conv3_HeadVar__5_5);
    }
    *var_use_analysis__wrapper_arg_3 = ((MR_Box) (var_use_analysis__conv4_HeadVar__3_3));
    *var_use_analysis__wrapper_arg_5 = ((MR_Box) (var_use_analysis__conv3_HeadVar__5_5));
  }
}

static void MR_CALL 
var_use_analysis__prepare_for_proc_var_first_use_7_p_0_1(
  MR_Box var_use_analysis__closure_arg,
  MR_Box var_use_analysis__wrapper_arg_1,
  MR_Box var_use_analysis__wrapper_arg_2,
  MR_Box * var_use_analysis__wrapper_arg_3)
{
  {
    MR_Box var_use_analysis__closure = var_use_analysis__closure_arg;
    MR_Word var_use_analysis__conv1_HeadVar__4_4;

    {
      analysis_utils__build_dynamic_call_site_cost_and_callee_map_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__closure, (MR_Integer) 3))), ((MR_Word) var_use_analysis__wrapper_arg_1), ((MR_Word) var_use_analysis__wrapper_arg_2), &var_use_analysis__conv1_HeadVar__4_4);
    }
    *var_use_analysis__wrapper_arg_3 = ((MR_Box) (var_use_analysis__conv1_HeadVar__4_4));
  }
}

static void MR_CALL 
var_use_analysis__prepare_for_proc_var_first_use_7_p_0(
  MR_Word var_use_analysis__CliquePtr_8,
  MR_Word var_use_analysis__PDPtr_9,
  MR_Integer var_use_analysis__ArgNum_10,
  MR_Word var_use_analysis__RecursionType_11,
  MR_Word var_use_analysis__Depth_12,
  MR_Word var_use_analysis__VarUseOptions_13,
  MR_Word * var_use_analysis__Info_14)
{
  {
    MR_bool var_use_analysis__succeeded;
    MR_Word var_use_analysis__Deep_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_13, (MR_Integer) 0)));
    MR_Word var_use_analysis__PD_16;
    MR_Word var_use_analysis__PSPtr_17;
    MR_Word var_use_analysis__MaybeProcrep_18;
    MR_Word var_use_analysis__Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_13, (MR_Integer) 1)));
    MR_Word var_use_analysis__Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_13, (MR_Integer) 2)));
    MR_ArrayPtr var_use_analysis__Var_83;
    MR_Word var_use_analysis__Var_84;

    {
      profile__deep_lookup_proc_dynamics_3_p_0(var_use_analysis__Deep_15, var_use_analysis__PDPtr_9, &var_use_analysis__PD_16);
    }
    var_use_analysis__PSPtr_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__PD_16, (MR_Integer) 0)));
    var_use_analysis__Var_83 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), var_use_analysis__PD_16, (MR_Integer) 1)));
    var_use_analysis__Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__PD_16, (MR_Integer) 2)));
    {
      analysis_utils__deep_get_maybe_procrep_3_p_0(var_use_analysis__Deep_15, var_use_analysis__PSPtr_17, &var_use_analysis__MaybeProcrep_18);
    }
    if (((MR_tag((MR_Word) var_use_analysis__MaybeProcrep_18)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_String var_use_analysis__Error_45 = ((MR_String) (MR_hl_field(MR_mktag(1), var_use_analysis__MaybeProcrep_18, (MR_Integer) 0)));

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *var_use_analysis__Info_14 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (var_use_analysis__Error_45));
        }
      }
    else
      {
        MR_Word var_use_analysis__ProcRep_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__MaybeProcrep_18, (MR_Integer) 0)));
        MR_Word var_use_analysis__ProcDefn_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__ProcRep_19, (MR_Integer) 1)));
        MR_Word var_use_analysis__HeadVars_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__ProcDefn_20, (MR_Integer) 0)));
        MR_Word var_use_analysis__Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__ProcRep_19, (MR_Integer) 0)));
        MR_Word var_use_analysis__Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__ProcDefn_20, (MR_Integer) 1)));
        MR_Word var_use_analysis__Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__ProcDefn_20, (MR_Integer) 2)));
        MR_Word var_use_analysis__Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__ProcDefn_20, (MR_Integer) 3)));
        MR_Word var_use_analysis__Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__ProcDefn_20, (MR_Integer) 4)));
        MR_Integer var_use_analysis__Var_22;
        MR_Word var_use_analysis__Mode_23;
        MR_Word var_use_analysis__Var_46;
        MR_Box var_use_analysis__conv0_Var_46;

        {
          var_use_analysis__succeeded = mercury__list__index0_3_p_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_head_var_rep_0, var_use_analysis__HeadVars_21, var_use_analysis__ArgNum_10, &var_use_analysis__conv0_Var_46);
        }
        if (var_use_analysis__succeeded)
          {
            var_use_analysis__Var_46 = ((MR_Word) var_use_analysis__conv0_Var_46);
            var_use_analysis__succeeded = MR_TRUE;
          }
        if (var_use_analysis__succeeded)
          {
            var_use_analysis__Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), var_use_analysis__Var_46, (MR_Integer) 0)));
            var_use_analysis__Mode_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Var_46, (MR_Integer) 1)));
            var_use_analysis__succeeded = MR_TRUE;
          }
        if (var_use_analysis__succeeded)
          {
            MR_Word var_use_analysis__TypeCtorInfo_125_125;
            MR_Word var_use_analysis__TypeCtorInfo_135_135;
            MR_Word var_use_analysis__TypeInfo_136_136;
            MR_Word var_use_analysis__ComputedUse_24;
            MR_Word var_use_analysis__VarUseType_25;
            MR_Word var_use_analysis__Slots_28;
            MR_Word var_use_analysis__CallSiteCostMap_29;
            MR_Word var_use_analysis__MaybeRecursiveCallSiteCostMap_30;
            MR_Word var_use_analysis__RecursiveCallSiteCostMap_31;
            MR_Word var_use_analysis__Goal0_32;
            MR_Word var_use_analysis__LastGoalId_33;
            MR_Word var_use_analysis__ContainingGoalMap_34;
            MR_Word var_use_analysis__Goal_35;
            MR_Word var_use_analysis__PS_36;
            MR_Word var_use_analysis__ProcLabel_37;
            MR_ArrayPtr var_use_analysis__CoveragePointsArray_38;
            MR_Word var_use_analysis__CoveragePoints_39;
            MR_Word var_use_analysis__MaybeCoveragePointsArray_40;
            MR_Word var_use_analysis__SolnsCoveragePointMap_41;
            MR_Word var_use_analysis__BranchCoveragePointMap_42;
            MR_Word var_use_analysis__Own_43;
            MR_Word var_use_analysis__CoverageArray_44;
            MR_Word var_use_analysis__Var_63;
            MR_Word var_use_analysis__Var_64;
            MR_Word var_use_analysis__Var_65;
            MR_Word var_use_analysis__Var_71;
            MR_Word var_use_analysis__Var_72;
            MR_ArrayPtr var_use_analysis__Var_104;
            MR_Word var_use_analysis__Var_90;
            MR_Word var_use_analysis__Var_91;
            MR_Box var_use_analysis__conv2_CallSiteCostMap_29;
            MR_Word var_use_analysis__Var_92;
            MR_Word var_use_analysis__Var_93;
            MR_Word var_use_analysis__Var_94;
            MR_Word var_use_analysis__Var_95;
            MR_String var_use_analysis__Var_96;
            MR_String var_use_analysis__Var_97;
            MR_String var_use_analysis__Var_98;
            MR_String var_use_analysis__Var_99;
            MR_String var_use_analysis__Var_100;
            MR_Integer var_use_analysis__Var_101;
            MR_Word var_use_analysis__Var_102;
            MR_ArrayPtr var_use_analysis__Var_103;
            MR_Word var_use_analysis__Var_105;
            MR_Word var_use_analysis__Var_106;
            MR_Word var_use_analysis__Var_118;
            MR_ArrayPtr var_use_analysis__Var_119;
            MR_Box var_use_analysis__conv6_SolnsCoveragePointMap_41;
            MR_Box var_use_analysis__conv5_BranchCoveragePointMap_42;

            {
              var_use_analysis__var_mode_to_var_use_type_2_p_0(var_use_analysis__Mode_23, &var_use_analysis__ComputedUse_24);
            }
            var_use_analysis__Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_13, (MR_Integer) 0)));
            var_use_analysis__Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_13, (MR_Integer) 1)));
            var_use_analysis__VarUseType_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__VarUseOptions_13, (MR_Integer) 2)));
            var_use_analysis__succeeded = (var_use_analysis__VarUseType_25 == var_use_analysis__ComputedUse_24);
            if (var_use_analysis__succeeded)
              {
              }
            else
              {
                MR_Word var_use_analysis__TypeCtorInfo_121_121 = (MR_Word) &var_use_analysis__var_use_analysis__type_ctor_info_var_use_type_0;
                MR_Integer var_use_analysis__PDNum_26 = (MR_Integer) var_use_analysis__PDPtr_9;
                MR_String var_use_analysis__Msg_27;
                MR_String var_use_analysis__Var_52;
                MR_String var_use_analysis__Var_55;
                MR_String var_use_analysis__Var_138;
                MR_Word var_use_analysis__Var_144;
                MR_String var_use_analysis__Var_146;
                MR_String var_use_analysis__Var_147;
                MR_String var_use_analysis__Var_154;
                MR_String var_use_analysis__Var_156;
                MR_String var_use_analysis__Var_157;
                MR_String var_use_analysis__Var_159;
                MR_String var_use_analysis__Var_160;

                {
                  var_use_analysis__Var_52 = mercury__string__string_1_f_0(var_use_analysis__TypeCtorInfo_121_121, ((MR_Box) (var_use_analysis__VarUseType_25)));
                }
                {
                  var_use_analysis__Var_55 = mercury__string__string_1_f_0(var_use_analysis__TypeCtorInfo_121_121, ((MR_Box) (var_use_analysis__ComputedUse_24)));
                }
                var_use_analysis__Var_144 = (MR_Word) &var_use_analysis_scalar_common_5[0];
                {
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(var_use_analysis__Var_144, var_use_analysis__PDNum_26, &var_use_analysis__Var_138);
                }
                {
                  var_use_analysis__Var_146 = mercury__string__f_43_43_2_f_0((MR_String) " in proc dynamic ", var_use_analysis__Var_138);
                }
                {
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(var_use_analysis__Var_144, var_use_analysis__ArgNum_10, &var_use_analysis__Var_147);
                }
                {
                  var_use_analysis__Var_154 = mercury__string__f_43_43_2_f_0(var_use_analysis__Var_147, var_use_analysis__Var_146);
                }
                {
                  var_use_analysis__Var_156 = mercury__string__f_43_43_2_f_0((MR_String) ", Arg ", var_use_analysis__Var_154);
                }
                {
                  var_use_analysis__Var_157 = mercury__string__f_43_43_2_f_0(var_use_analysis__Var_55, var_use_analysis__Var_156);
                }
                {
                  var_use_analysis__Var_159 = mercury__string__f_43_43_2_f_0((MR_String) " calculated from procrep: ", var_use_analysis__Var_157);
                }
                {
                  var_use_analysis__Var_160 = mercury__string__f_43_43_2_f_0(var_use_analysis__Var_52, var_use_analysis__Var_159);
                }
                {
                  var_use_analysis__Msg_27 = mercury__string__f_43_43_2_f_0((MR_String) "Var uses do not match, passed: ", var_use_analysis__Var_160);
                }
                {
                  mercury__require__unexpected_3_p_0((MR_String) "var_use_analysis", (MR_String) "predicate \140var_use_analysis.prepare_for_proc_var_first_use\'/7", var_use_analysis__Msg_27);
                  return;
                }
              }
            {
              analysis_utils__proc_dynamic_paired_call_site_slots_3_p_0(var_use_analysis__Deep_15, var_use_analysis__PDPtr_9, &var_use_analysis__Slots_28);
            }
            {
              var_use_analysis__Var_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), var_use_analysis__Var_63, 0) = ((MR_Box) (&var_use_analysis_scalar_common_6[0]));
              MR_hl_field(MR_mktag(0), var_use_analysis__Var_63, 1) = ((MR_Box) (var_use_analysis__prepare_for_proc_var_first_use_7_p_0_1));
              MR_hl_field(MR_mktag(0), var_use_analysis__Var_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), var_use_analysis__Var_63, 3) = ((MR_Box) (var_use_analysis__Deep_15));
            }
            var_use_analysis__TypeCtorInfo_125_125 = (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0;
            {
              var_use_analysis__Var_64 = mercury__map__init_0_f_0(var_use_analysis__TypeCtorInfo_125_125, (MR_Word) &var_use_analysis_scalar_common_1[0]);
            }
            {
              mercury__list__foldl_4_p_0((MR_Word) &var_use_analysis_scalar_common_2[0], (MR_Word) &var_use_analysis_scalar_common_2[1], var_use_analysis__Var_63, var_use_analysis__Slots_28, ((MR_Box) (var_use_analysis__Var_64)), &var_use_analysis__conv2_CallSiteCostMap_29);
            }
            var_use_analysis__CallSiteCostMap_29 = ((MR_Word) var_use_analysis__conv2_CallSiteCostMap_29);
            {
              var_use_analysis__Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), var_use_analysis__Var_65, 0) = ((MR_Box) (var_use_analysis__Depth_12));
            }
            {
              analysis_utils__build_recursive_call_site_cost_map_6_p_0(var_use_analysis__Deep_15, var_use_analysis__CliquePtr_8, var_use_analysis__PDPtr_9, var_use_analysis__RecursionType_11, var_use_analysis__Var_65, &var_use_analysis__MaybeRecursiveCallSiteCostMap_30);
            }
            var_use_analysis__RecursiveCallSiteCostMap_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__MaybeRecursiveCallSiteCostMap_30, (MR_Integer) 0)));
            var_use_analysis__Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__ProcDefn_20, (MR_Integer) 0)));
            var_use_analysis__Goal0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__ProcDefn_20, (MR_Integer) 1)));
            var_use_analysis__Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__ProcDefn_20, (MR_Integer) 2)));
            var_use_analysis__Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__ProcDefn_20, (MR_Integer) 3)));
            var_use_analysis__Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__ProcDefn_20, (MR_Integer) 4)));
            {
              program_representation_utils__label_goals_4_p_0((MR_Word) &mercury__unit__unit__type_ctor_info_unit_0, &var_use_analysis__LastGoalId_33, &var_use_analysis__ContainingGoalMap_34, var_use_analysis__Goal0_32, &var_use_analysis__Goal_35);
            }
            {
              profile__deep_lookup_proc_statics_3_p_0(var_use_analysis__Deep_15, var_use_analysis__PSPtr_17, &var_use_analysis__PS_36);
            }
            var_use_analysis__ProcLabel_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__PS_36, (MR_Integer) 0)));
            var_use_analysis__Var_96 = ((MR_String) (MR_hl_field(MR_mktag(0), var_use_analysis__PS_36, (MR_Integer) 1)));
            var_use_analysis__Var_97 = ((MR_String) (MR_hl_field(MR_mktag(0), var_use_analysis__PS_36, (MR_Integer) 2)));
            var_use_analysis__Var_98 = ((MR_String) (MR_hl_field(MR_mktag(0), var_use_analysis__PS_36, (MR_Integer) 3)));
            var_use_analysis__Var_99 = ((MR_String) (MR_hl_field(MR_mktag(0), var_use_analysis__PS_36, (MR_Integer) 4)));
            var_use_analysis__Var_100 = ((MR_String) (MR_hl_field(MR_mktag(0), var_use_analysis__PS_36, (MR_Integer) 5)));
            var_use_analysis__Var_101 = ((MR_Integer) (MR_hl_field(MR_mktag(0), var_use_analysis__PS_36, (MR_Integer) 6)));
            var_use_analysis__Var_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__PS_36, (MR_Integer) 7)));
            var_use_analysis__Var_103 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), var_use_analysis__PS_36, (MR_Integer) 8)));
            var_use_analysis__Var_104 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), var_use_analysis__PS_36, (MR_Integer) 9)));
            var_use_analysis__Var_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__PS_36, (MR_Integer) 10)));
            var_use_analysis__Var_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__PS_36, (MR_Integer) 11)));
            var_use_analysis__Var_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__PD_16, (MR_Integer) 0)));
            var_use_analysis__Var_119 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), var_use_analysis__PD_16, (MR_Integer) 1)));
            var_use_analysis__MaybeCoveragePointsArray_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__PD_16, (MR_Integer) 2)));
            if ((var_use_analysis__MaybeCoveragePointsArray_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "var_use_analysis", (MR_String) "predicate \140var_use_analysis.prepare_for_proc_var_first_use\'/7", (MR_String) "Couldn\'t get coverage info");
                  return;
                }
              }
            else
              var_use_analysis__CoveragePointsArray_38 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(1), var_use_analysis__MaybeCoveragePointsArray_40, (MR_Integer) 0)));
            {
              coverage__coverage_point_arrays_to_list_3_p_0(var_use_analysis__Var_104, var_use_analysis__CoveragePointsArray_38, &var_use_analysis__CoveragePoints_39);
            }
            var_use_analysis__TypeCtorInfo_135_135 = (MR_Word) &coverage__coverage__type_ctor_info_coverage_point_0;
            {
              var_use_analysis__Var_71 = mercury__map__init_0_f_0(var_use_analysis__TypeCtorInfo_125_125, var_use_analysis__TypeCtorInfo_135_135);
            }
            {
              var_use_analysis__Var_72 = mercury__map__init_0_f_0(var_use_analysis__TypeCtorInfo_125_125, var_use_analysis__TypeCtorInfo_135_135);
            }
            var_use_analysis__TypeInfo_136_136 = (MR_Word) &var_use_analysis_scalar_common_2[2];
            {
              mercury__list__foldl2_6_p_0(var_use_analysis__TypeCtorInfo_135_135, var_use_analysis__TypeInfo_136_136, var_use_analysis__TypeInfo_136_136, (MR_Word) &var_use_analysis_scalar_common_2[8], var_use_analysis__CoveragePoints_39, ((MR_Box) (var_use_analysis__Var_71)), &var_use_analysis__conv6_SolnsCoveragePointMap_41, ((MR_Box) (var_use_analysis__Var_72)), &var_use_analysis__conv5_BranchCoveragePointMap_42);
            }
            var_use_analysis__SolnsCoveragePointMap_41 = ((MR_Word) var_use_analysis__conv6_SolnsCoveragePointMap_41);
            var_use_analysis__BranchCoveragePointMap_42 = ((MR_Word) var_use_analysis__conv5_BranchCoveragePointMap_42);
            {
              profile__deep_lookup_pd_own_3_p_0(var_use_analysis__Deep_15, var_use_analysis__PDPtr_9, &var_use_analysis__Own_43);
            }
            {
              coverage__goal_annotate_with_coverage_9_p_0((MR_Word) &analysis_utils__analysis_utils__type_ctor_info_callee_0, var_use_analysis__ProcLabel_37, var_use_analysis__Goal_35, var_use_analysis__Own_43, var_use_analysis__CallSiteCostMap_29, var_use_analysis__SolnsCoveragePointMap_41, var_use_analysis__BranchCoveragePointMap_42, var_use_analysis__ContainingGoalMap_34, var_use_analysis__LastGoalId_33, &var_use_analysis__CoverageArray_44);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
              *var_use_analysis__Info_14 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (var_use_analysis__Goal_35));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (var_use_analysis__LastGoalId_33));
              MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (var_use_analysis__ContainingGoalMap_34));
              MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (var_use_analysis__CoverageArray_44));
              MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (var_use_analysis__CallSiteCostMap_29));
              MR_hl_field(MR_mktag(1), base, 5) = ((MR_Box) (var_use_analysis__RecursiveCallSiteCostMap_31));
              MR_hl_field(MR_mktag(1), base, 6) = ((MR_Box) (var_use_analysis__Var_22));
            }
          }
        else
          {
            MR_Integer var_use_analysis__PDNum_79 = (MR_Integer) var_use_analysis__PDPtr_9;
            MR_String var_use_analysis__Msg_80;
            MR_String var_use_analysis__Var_162;
            MR_Word var_use_analysis__Var_168 = (MR_Word) &var_use_analysis_scalar_common_5[0];
            MR_String var_use_analysis__Var_170;
            MR_String var_use_analysis__Var_171;
            MR_String var_use_analysis__Var_178;

            {
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(var_use_analysis__Var_168, var_use_analysis__PDNum_79, &var_use_analysis__Var_162);
            }
            {
              var_use_analysis__Var_170 = mercury__string__f_43_43_2_f_0((MR_String) " out of range for PD ", var_use_analysis__Var_162);
            }
            {
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(var_use_analysis__Var_168, var_use_analysis__ArgNum_10, &var_use_analysis__Var_171);
            }
            {
              var_use_analysis__Var_178 = mercury__string__f_43_43_2_f_0(var_use_analysis__Var_171, var_use_analysis__Var_170);
            }
            {
              var_use_analysis__Msg_80 = mercury__string__f_43_43_2_f_0((MR_String) "proc_dynamic_var_use_info: ArgNum ", var_use_analysis__Var_178);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *var_use_analysis__Info_14 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (var_use_analysis__Msg_80));
            }
          }
      }
  }
}

void MR_CALL 
var_use_analysis__pessimistic_var_use_time_3_p_0(
  MR_Word var_use_analysis__VarUseType_4,
  MR_Float var_use_analysis__ProcCost_5,
  MR_Float * var_use_analysis__CostUntilUse_6)
{
  {
    MR_bool var_use_analysis__succeeded;

    switch (var_use_analysis__VarUseType_4) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        *var_use_analysis__CostUntilUse_6 = (MR_Float) 0.0000000000000000;
        break;
      case (MR_Integer) 2:
      case (MR_Integer) 0:
        *var_use_analysis__CostUntilUse_6 = var_use_analysis__ProcCost_5;
        break;
    }
  }
}

void MR_CALL 
var_use_analysis__pessimistic_var_use_info_3_p_0(
  MR_Word var_use_analysis__VarUseType_4,
  MR_Float var_use_analysis__ProcCost_5,
  MR_Word * var_use_analysis__VarUseInfo_6)
{
  {
    MR_bool var_use_analysis__succeeded;
    MR_Float var_use_analysis__CostUntilUse_7;

    switch (var_use_analysis__VarUseType_4) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        var_use_analysis__CostUntilUse_7 = (MR_Float) 0.0000000000000000;
        break;
      case (MR_Integer) 2:
      case (MR_Integer) 0:
        var_use_analysis__CostUntilUse_7 = var_use_analysis__ProcCost_5;
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *var_use_analysis__VarUseInfo_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = MR_box_float(var_use_analysis__CostUntilUse_7);
      MR_hl_field(MR_mktag(0), base, 1) = MR_box_float(var_use_analysis__ProcCost_5);
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (var_use_analysis__VarUseType_4));
    }
  }
}

void MR_CALL 
var_use_analysis__var_mode_to_var_use_type_2_p_0(
  MR_Word var_use_analysis__HeadVar__1_1,
  MR_Word * var_use_analysis__VarUseType_5)
{
  {
    MR_bool var_use_analysis__succeeded;
    MR_Word var_use_analysis__InitialInst_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word var_use_analysis__FinalInst_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__1_1, (MR_Integer) 1)));

    var_use_analysis__succeeded = (var_use_analysis__InitialInst_3 == (MR_Integer) 1);
    if (var_use_analysis__succeeded)
      var_use_analysis__succeeded = (var_use_analysis__FinalInst_4 == (MR_Integer) 1);
    if (var_use_analysis__succeeded)
      *var_use_analysis__VarUseType_5 = (MR_Integer) 1;
    else
      {
        var_use_analysis__succeeded = (var_use_analysis__InitialInst_3 == (MR_Integer) 0);
        if (var_use_analysis__succeeded)
          var_use_analysis__succeeded = (var_use_analysis__FinalInst_4 == (MR_Integer) 1);
        if (var_use_analysis__succeeded)
          *var_use_analysis__VarUseType_5 = (MR_Integer) 0;
        else
          *var_use_analysis__VarUseType_5 = (MR_Integer) 2;
      }
  }
}

static MR_bool MR_CALL 
var_use_analysis__average_var_use_1_f_0_2(
  MR_Box var_use_analysis__closure_arg,
  MR_Box var_use_analysis__wrapper_arg_1)
{
  {
    MR_bool var_use_analysis__succeeded;
    MR_Box var_use_analysis__closure = var_use_analysis__closure_arg;

    {
      var_use_analysis__succeeded = var_use_analysis__IntroducedFrom__pred__average_var_use__169__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__closure, (MR_Integer) 3))), ((MR_Word) var_use_analysis__wrapper_arg_1));
    }
    return var_use_analysis__succeeded;
  }
}

static void MR_CALL 
var_use_analysis__average_var_use_1_f_0_1(
  MR_Box var_use_analysis__closure_arg,
  MR_Box var_use_analysis__wrapper_arg_1,
  MR_Box var_use_analysis__wrapper_arg_2,
  MR_Box * var_use_analysis__wrapper_arg_3,
  MR_Box var_use_analysis__wrapper_arg_4,
  MR_Box * var_use_analysis__wrapper_arg_5)
{
  {
    MR_Box var_use_analysis__closure = var_use_analysis__closure_arg;
    MR_Float var_use_analysis__conv1_STATE_VARIABLE_AccCost_12;
    MR_Float var_use_analysis__conv0_STATE_VARIABLE_AccProcCost_14;

    {
      var_use_analysis__sum_use_info_costs_5_p_0(((MR_Word) var_use_analysis__wrapper_arg_1), MR_unbox_float(var_use_analysis__wrapper_arg_2), &var_use_analysis__conv1_STATE_VARIABLE_AccCost_12, MR_unbox_float(var_use_analysis__wrapper_arg_4), &var_use_analysis__conv0_STATE_VARIABLE_AccProcCost_14);
    }
    *var_use_analysis__wrapper_arg_3 = MR_box_float(var_use_analysis__conv1_STATE_VARIABLE_AccCost_12);
    *var_use_analysis__wrapper_arg_5 = MR_box_float(var_use_analysis__conv0_STATE_VARIABLE_AccProcCost_14);
  }
}

MR_Word MR_CALL 
var_use_analysis__average_var_use_1_f_0(
  MR_Word var_use_analysis__Uses_3)
{
  {
    MR_bool var_use_analysis__succeeded;
    MR_Word var_use_analysis__HeadVar__2_2;
    MR_Float var_use_analysis__CostUntilUse_4;
    MR_Float var_use_analysis__AvgProcCost_5;
    MR_Word var_use_analysis__Type_6;

    if ((var_use_analysis__Uses_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "var_use_analysis", (MR_String) "function \140var_use_analysis.average_var_use\'/1", (MR_String) "cannot average zero items");
        }
      }
    else
      {
        MR_Word var_use_analysis__TypeCtorInfo_39_39;
        MR_Word var_use_analysis__TypeCtorInfo_40_40;
        MR_Float var_use_analysis__SumCost_10;
        MR_Float var_use_analysis__SumProcCost_11;
        MR_Float var_use_analysis__Num_12;
        MR_Word var_use_analysis__TestType_13;
        MR_Word var_use_analysis__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__Uses_3, (MR_Integer) 0)));
        MR_Integer var_use_analysis__Var_21;
        MR_Word var_use_analysis__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), var_use_analysis__Uses_3, (MR_Integer) 1)));
        MR_Float var_use_analysis__Var_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), var_use_analysis__Var_17, (MR_Integer) 0)));
        MR_Float var_use_analysis__Var_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), var_use_analysis__Var_17, (MR_Integer) 1)));
        MR_Box var_use_analysis__conv3_SumCost_10;
        MR_Box var_use_analysis__conv2_SumProcCost_11;

        var_use_analysis__Type_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), var_use_analysis__Var_17, (MR_Integer) 2)));
        var_use_analysis__TypeCtorInfo_39_39 = (MR_Word) &var_use_analysis__var_use_analysis__type_ctor_info_var_use_info_0;
        var_use_analysis__TypeCtorInfo_40_40 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0;
        {
          mercury__list__foldl2_6_p_0(var_use_analysis__TypeCtorInfo_39_39, var_use_analysis__TypeCtorInfo_40_40, var_use_analysis__TypeCtorInfo_40_40, (MR_Word) &var_use_analysis_scalar_common_2[7], var_use_analysis__Uses_3, MR_box_float((MR_Float) 0.0000000000000000), &var_use_analysis__conv3_SumCost_10, MR_box_float((MR_Float) 0.0000000000000000), &var_use_analysis__conv2_SumProcCost_11);
        }
        var_use_analysis__SumCost_10 = MR_unbox_float(var_use_analysis__conv3_SumCost_10);
        var_use_analysis__SumProcCost_11 = MR_unbox_float(var_use_analysis__conv2_SumProcCost_11);
        {
          var_use_analysis__Var_21 = mercury__list__length_1_f_0(var_use_analysis__TypeCtorInfo_39_39, var_use_analysis__Uses_3);
        }
        {
          var_use_analysis__Num_12 = mercury__float__float_1_f_0(var_use_analysis__Var_21);
        }
        {
          var_use_analysis__CostUntilUse_4 = mercury__float__f_slash_2_f_0(var_use_analysis__SumCost_10, var_use_analysis__Num_12);
        }
        {
          var_use_analysis__AvgProcCost_5 = mercury__float__f_slash_2_f_0(var_use_analysis__SumProcCost_11, var_use_analysis__Num_12);
        }
        {
          var_use_analysis__TestType_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), var_use_analysis__TestType_13, 0) = ((MR_Box) (&var_use_analysis_scalar_common_4[0]));
          MR_hl_field(MR_mktag(0), var_use_analysis__TestType_13, 1) = ((MR_Box) (var_use_analysis__average_var_use_1_f_0_2));
          MR_hl_field(MR_mktag(0), var_use_analysis__TestType_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), var_use_analysis__TestType_13, 3) = ((MR_Box) (var_use_analysis__Type_6));
        }
        {
          var_use_analysis__succeeded = mercury__list__all_true_2_p_0(var_use_analysis__TypeCtorInfo_39_39, var_use_analysis__TestType_13, var_use_analysis__Uses_3);
        }
        if (var_use_analysis__succeeded)
          {
          }
        else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "var_use_analysis", (MR_String) "function \140var_use_analysis.average_var_use\'/1", (MR_String) "use types do not match");
            }
          }
      }
    {
      var_use_analysis__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__2_2, 0) = MR_box_float(var_use_analysis__CostUntilUse_4);
      MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__2_2, 1) = MR_box_float(var_use_analysis__AvgProcCost_5);
      MR_hl_field(MR_mktag(0), var_use_analysis__HeadVar__2_2, 2) = ((MR_Box) (var_use_analysis__Type_6));
    }
    return var_use_analysis__HeadVar__2_2;
  }
}

static MR_bool MR_CALL 
var_use_analysis____Unify____first_use_rec_info_0_0_10001(
  MR_Box var_use_analysis__wrapper_arg_1,
  MR_Box var_use_analysis__wrapper_arg_2)
{
  {
    MR_bool var_use_analysis__succeeded;

    {
      var_use_analysis__succeeded = var_use_analysis____Unify____first_use_rec_info_0_0(((MR_Word) var_use_analysis__wrapper_arg_1), ((MR_Word) var_use_analysis__wrapper_arg_2));
    }
    return var_use_analysis__succeeded;
  }
}

static void MR_CALL 
var_use_analysis____Compare____first_use_rec_info_0_0_10001(
  MR_Box * var_use_analysis__wrapper_arg_1,
  MR_Box var_use_analysis__wrapper_arg_2,
  MR_Box var_use_analysis__wrapper_arg_3)
{
  {
    MR_Word var_use_analysis__conv0_HeadVar__1_1;

    {
      var_use_analysis____Compare____first_use_rec_info_0_0(&var_use_analysis__conv0_HeadVar__1_1, ((MR_Word) var_use_analysis__wrapper_arg_2), ((MR_Word) var_use_analysis__wrapper_arg_3));
    }
    *var_use_analysis__wrapper_arg_1 = ((MR_Box) (var_use_analysis__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
var_use_analysis____Unify____found_first_use_0_0_10001(
  MR_Box var_use_analysis__wrapper_arg_1,
  MR_Box var_use_analysis__wrapper_arg_2)
{
  {
    MR_bool var_use_analysis__succeeded;

    {
      var_use_analysis__succeeded = var_use_analysis____Unify____found_first_use_0_0(((MR_Word) var_use_analysis__wrapper_arg_1), ((MR_Word) var_use_analysis__wrapper_arg_2));
    }
    return var_use_analysis__succeeded;
  }
}

static void MR_CALL 
var_use_analysis____Compare____found_first_use_0_0_10001(
  MR_Box * var_use_analysis__wrapper_arg_1,
  MR_Box var_use_analysis__wrapper_arg_2,
  MR_Box var_use_analysis__wrapper_arg_3)
{
  {
    MR_Word var_use_analysis__conv0_HeadVar__1_1;

    {
      var_use_analysis____Compare____found_first_use_0_0(&var_use_analysis__conv0_HeadVar__1_1, ((MR_Word) var_use_analysis__wrapper_arg_2), ((MR_Word) var_use_analysis__wrapper_arg_3));
    }
    *var_use_analysis__wrapper_arg_1 = ((MR_Box) (var_use_analysis__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
var_use_analysis____Unify____intermodule_var_use_0_0_10001(
  MR_Box var_use_analysis__wrapper_arg_1,
  MR_Box var_use_analysis__wrapper_arg_2)
{
  {
    MR_bool var_use_analysis__succeeded;

    {
      var_use_analysis__succeeded = var_use_analysis____Unify____intermodule_var_use_0_0(((MR_Word) var_use_analysis__wrapper_arg_1), ((MR_Word) var_use_analysis__wrapper_arg_2));
    }
    return var_use_analysis__succeeded;
  }
}

static void MR_CALL 
var_use_analysis____Compare____intermodule_var_use_0_0_10001(
  MR_Box * var_use_analysis__wrapper_arg_1,
  MR_Box var_use_analysis__wrapper_arg_2,
  MR_Box var_use_analysis__wrapper_arg_3)
{
  {
    MR_Word var_use_analysis__conv0_HeadVar__1_1;

    {
      var_use_analysis____Compare____intermodule_var_use_0_0(&var_use_analysis__conv0_HeadVar__1_1, ((MR_Word) var_use_analysis__wrapper_arg_2), ((MR_Word) var_use_analysis__wrapper_arg_3));
    }
    *var_use_analysis__wrapper_arg_1 = ((MR_Box) (var_use_analysis__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
var_use_analysis____Unify____proc_var_first_use_prepared_info_0_0_10001(
  MR_Box var_use_analysis__wrapper_arg_1,
  MR_Box var_use_analysis__wrapper_arg_2)
{
  {
    MR_bool var_use_analysis__succeeded;

    {
      var_use_analysis__succeeded = var_use_analysis____Unify____proc_var_first_use_prepared_info_0_0(((MR_Word) var_use_analysis__wrapper_arg_1), ((MR_Word) var_use_analysis__wrapper_arg_2));
    }
    return var_use_analysis__succeeded;
  }
}

static void MR_CALL 
var_use_analysis____Compare____proc_var_first_use_prepared_info_0_0_10001(
  MR_Box * var_use_analysis__wrapper_arg_1,
  MR_Box var_use_analysis__wrapper_arg_2,
  MR_Box var_use_analysis__wrapper_arg_3)
{
  {
    MR_Word var_use_analysis__conv0_HeadVar__1_1;

    {
      var_use_analysis____Compare____proc_var_first_use_prepared_info_0_0(&var_use_analysis__conv0_HeadVar__1_1, ((MR_Word) var_use_analysis__wrapper_arg_2), ((MR_Word) var_use_analysis__wrapper_arg_3));
    }
    *var_use_analysis__wrapper_arg_1 = ((MR_Box) (var_use_analysis__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
var_use_analysis____Unify____recursive_calls_list_0_0_10001(
  MR_Box var_use_analysis__wrapper_arg_1,
  MR_Box var_use_analysis__wrapper_arg_2)
{
  {
    MR_bool var_use_analysis__succeeded;

    {
      var_use_analysis__succeeded = var_use_analysis____Unify____recursive_calls_list_0_0(((MR_Word) var_use_analysis__wrapper_arg_1), ((MR_Word) var_use_analysis__wrapper_arg_2));
    }
    return var_use_analysis__succeeded;
  }
}

static void MR_CALL 
var_use_analysis____Compare____recursive_calls_list_0_0_10001(
  MR_Box * var_use_analysis__wrapper_arg_1,
  MR_Box var_use_analysis__wrapper_arg_2,
  MR_Box var_use_analysis__wrapper_arg_3)
{
  {
    MR_Word var_use_analysis__conv0_HeadVar__1_1;

    {
      var_use_analysis____Compare____recursive_calls_list_0_0(&var_use_analysis__conv0_HeadVar__1_1, ((MR_Word) var_use_analysis__wrapper_arg_2), ((MR_Word) var_use_analysis__wrapper_arg_3));
    }
    *var_use_analysis__wrapper_arg_1 = ((MR_Box) (var_use_analysis__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
var_use_analysis____Unify____recursive_case_0_0_10001(
  MR_Box var_use_analysis__wrapper_arg_1,
  MR_Box var_use_analysis__wrapper_arg_2)
{
  {
    MR_bool var_use_analysis__succeeded;

    {
      var_use_analysis__succeeded = var_use_analysis____Unify____recursive_case_0_0(((MR_Word) var_use_analysis__wrapper_arg_1), ((MR_Word) var_use_analysis__wrapper_arg_2));
    }
    return var_use_analysis__succeeded;
  }
}

static void MR_CALL 
var_use_analysis____Compare____recursive_case_0_0_10001(
  MR_Box * var_use_analysis__wrapper_arg_1,
  MR_Box var_use_analysis__wrapper_arg_2,
  MR_Box var_use_analysis__wrapper_arg_3)
{
  {
    MR_Word var_use_analysis__conv0_HeadVar__1_1;

    {
      var_use_analysis____Compare____recursive_case_0_0(&var_use_analysis__conv0_HeadVar__1_1, ((MR_Word) var_use_analysis__wrapper_arg_2), ((MR_Word) var_use_analysis__wrapper_arg_3));
    }
    *var_use_analysis__wrapper_arg_1 = ((MR_Box) (var_use_analysis__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
var_use_analysis____Unify____var_first_use_static_info_0_0_10001(
  MR_Box var_use_analysis__wrapper_arg_1,
  MR_Box var_use_analysis__wrapper_arg_2)
{
  {
    MR_bool var_use_analysis__succeeded;

    {
      var_use_analysis__succeeded = var_use_analysis____Unify____var_first_use_static_info_0_0(((MR_Word) var_use_analysis__wrapper_arg_1), ((MR_Word) var_use_analysis__wrapper_arg_2));
    }
    return var_use_analysis__succeeded;
  }
}

static void MR_CALL 
var_use_analysis____Compare____var_first_use_static_info_0_0_10001(
  MR_Box * var_use_analysis__wrapper_arg_1,
  MR_Box var_use_analysis__wrapper_arg_2,
  MR_Box var_use_analysis__wrapper_arg_3)
{
  {
    MR_Word var_use_analysis__conv0_HeadVar__1_1;

    {
      var_use_analysis____Compare____var_first_use_static_info_0_0(&var_use_analysis__conv0_HeadVar__1_1, ((MR_Word) var_use_analysis__wrapper_arg_2), ((MR_Word) var_use_analysis__wrapper_arg_3));
    }
    *var_use_analysis__wrapper_arg_1 = ((MR_Box) (var_use_analysis__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
var_use_analysis____Unify____var_use_info_0_0_10001(
  MR_Box var_use_analysis__wrapper_arg_1,
  MR_Box var_use_analysis__wrapper_arg_2)
{
  {
    MR_bool var_use_analysis__succeeded;

    {
      var_use_analysis__succeeded = var_use_analysis____Unify____var_use_info_0_0(((MR_Word) var_use_analysis__wrapper_arg_1), ((MR_Word) var_use_analysis__wrapper_arg_2));
    }
    return var_use_analysis__succeeded;
  }
}

static void MR_CALL 
var_use_analysis____Compare____var_use_info_0_0_10001(
  MR_Box * var_use_analysis__wrapper_arg_1,
  MR_Box var_use_analysis__wrapper_arg_2,
  MR_Box var_use_analysis__wrapper_arg_3)
{
  {
    MR_Word var_use_analysis__conv0_HeadVar__1_1;

    {
      var_use_analysis____Compare____var_use_info_0_0(&var_use_analysis__conv0_HeadVar__1_1, ((MR_Word) var_use_analysis__wrapper_arg_2), ((MR_Word) var_use_analysis__wrapper_arg_3));
    }
    *var_use_analysis__wrapper_arg_1 = ((MR_Box) (var_use_analysis__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
var_use_analysis____Unify____var_use_options_0_0_10001(
  MR_Box var_use_analysis__wrapper_arg_1,
  MR_Box var_use_analysis__wrapper_arg_2)
{
  {
    MR_bool var_use_analysis__succeeded;

    {
      var_use_analysis__succeeded = var_use_analysis____Unify____var_use_options_0_0(((MR_Word) var_use_analysis__wrapper_arg_1), ((MR_Word) var_use_analysis__wrapper_arg_2));
    }
    return var_use_analysis__succeeded;
  }
}

static void MR_CALL 
var_use_analysis____Compare____var_use_options_0_0_10001(
  MR_Box * var_use_analysis__wrapper_arg_1,
  MR_Box var_use_analysis__wrapper_arg_2,
  MR_Box var_use_analysis__wrapper_arg_3)
{
  {
    MR_Word var_use_analysis__conv0_HeadVar__1_1;

    {
      var_use_analysis____Compare____var_use_options_0_0(&var_use_analysis__conv0_HeadVar__1_1, ((MR_Word) var_use_analysis__wrapper_arg_2), ((MR_Word) var_use_analysis__wrapper_arg_3));
    }
    *var_use_analysis__wrapper_arg_1 = ((MR_Box) (var_use_analysis__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
var_use_analysis____Unify____var_use_type_0_0_10001(
  MR_Box var_use_analysis__wrapper_arg_1,
  MR_Box var_use_analysis__wrapper_arg_2)
{
  {
    MR_bool var_use_analysis__succeeded;

    {
      var_use_analysis__succeeded = var_use_analysis____Unify____var_use_type_0_0(((MR_Word) var_use_analysis__wrapper_arg_1), ((MR_Word) var_use_analysis__wrapper_arg_2));
    }
    return var_use_analysis__succeeded;
  }
}

static void MR_CALL 
var_use_analysis____Compare____var_use_type_0_0_10001(
  MR_Box * var_use_analysis__wrapper_arg_1,
  MR_Box var_use_analysis__wrapper_arg_2,
  MR_Box var_use_analysis__wrapper_arg_3)
{
  {
    MR_Word var_use_analysis__conv0_HeadVar__1_1;

    {
      var_use_analysis____Compare____var_use_type_0_0(&var_use_analysis__conv0_HeadVar__1_1, ((MR_Word) var_use_analysis__wrapper_arg_2), ((MR_Word) var_use_analysis__wrapper_arg_3));
    }
    *var_use_analysis__wrapper_arg_1 = ((MR_Box) (var_use_analysis__conv0_HeadVar__1_1));
  }
}

void mercury__var_use_analysis__init(void)
{
}

void mercury__var_use_analysis__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&var_use_analysis__var_use_analysis__type_ctor_info_first_use_rec_info_0);
	MR_register_type_ctor_info(&var_use_analysis__var_use_analysis__type_ctor_info_found_first_use_0);
	MR_register_type_ctor_info(&var_use_analysis__var_use_analysis__type_ctor_info_intermodule_var_use_0);
	MR_register_type_ctor_info(&var_use_analysis__var_use_analysis__type_ctor_info_proc_var_first_use_prepared_info_0);
	MR_register_type_ctor_info(&var_use_analysis__var_use_analysis__type_ctor_info_recursive_calls_list_0);
	MR_register_type_ctor_info(&var_use_analysis__var_use_analysis__type_ctor_info_recursive_case_0);
	MR_register_type_ctor_info(&var_use_analysis__var_use_analysis__type_ctor_info_var_first_use_static_info_0);
	MR_register_type_ctor_info(&var_use_analysis__var_use_analysis__type_ctor_info_var_use_info_0);
	MR_register_type_ctor_info(&var_use_analysis__var_use_analysis__type_ctor_info_var_use_options_0);
	MR_register_type_ctor_info(&var_use_analysis__var_use_analysis__type_ctor_info_var_use_type_0);
}

void mercury__var_use_analysis__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__var_use_analysis__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module var_use_analysis. */
