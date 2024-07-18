/*
** Automatically generated from `var_use_analysis.m'
** by the Mercury compiler,
** version rotd-2024-07-18
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


// :- module var_use_analysis.
// :- implementation.

/*
INIT mercury__var_use_analysis__init
ENDINIT
*/

#include "var_use_analysis.mih"


#include "analysis_utils.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "coverage.mih"
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
#include "program_representation_utils.mih"
#include "query.mih"
#include "recursion_patterns.mih"
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
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




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

static const MR_DuArgLocn var_use_analysis__var_use_analysis__field_locns_first_use_rec_info_0_0[2];

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

static const MR_EnumFunctorDescPtr var_use_analysis__var_use_analysis__enum_ordinal_ordered_recursive_case_0[2];

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

static const MR_DuArgLocn var_use_analysis__var_use_analysis__field_locns_var_use_info_0_0[3];

static const MR_DuFunctorDesc var_use_analysis__var_use_analysis__du_functor_desc_var_use_info_0_0;

static const MR_DuFunctorDescPtr var_use_analysis__var_use_analysis__du_stag_ordered_var_use_info_0_0[1];

static const MR_DuPtagLayout var_use_analysis__var_use_analysis__du_ptag_ordered_var_use_info_0[1];

static const MR_DuFunctorDescPtr var_use_analysis__var_use_analysis__du_name_ordered_var_use_info_0[1];

static const MR_Integer var_use_analysis__var_use_analysis__functor_number_map_var_use_info_0[1];

static const MR_PseudoTypeInfo var_use_analysis__var_use_analysis__field_types_var_use_options_0_0[3];

static const MR_ConstString var_use_analysis__var_use_analysis__field_names_var_use_options_0_0[3];

static const MR_DuArgLocn var_use_analysis__var_use_analysis__field_locns_var_use_options_0_0[3];

static const MR_DuFunctorDesc var_use_analysis__var_use_analysis__du_functor_desc_var_use_options_0_0;

static const MR_DuFunctorDescPtr var_use_analysis__var_use_analysis__du_stag_ordered_var_use_options_0_0[1];

static const MR_DuPtagLayout var_use_analysis__var_use_analysis__du_ptag_ordered_var_use_options_0[1];

static const MR_DuFunctorDescPtr var_use_analysis__var_use_analysis__du_name_ordered_var_use_options_0[1];

static const MR_Integer var_use_analysis__var_use_analysis__functor_number_map_var_use_options_0[1];

static const MR_EnumFunctorDesc var_use_analysis__var_use_analysis__enum_functor_desc_var_use_type_0_0;

static const MR_EnumFunctorDesc var_use_analysis__var_use_analysis__enum_functor_desc_var_use_type_0_1;

static const MR_EnumFunctorDesc var_use_analysis__var_use_analysis__enum_functor_desc_var_use_type_0_2;

static const MR_EnumFunctorDescPtr var_use_analysis__var_use_analysis__enum_ordinal_ordered_var_use_type_0[3];

static const MR_EnumFunctorDescPtr var_use_analysis__var_use_analysis__enum_name_ordered_var_use_type_0[3];

static const MR_Integer var_use_analysis__var_use_analysis__functor_number_map_var_use_type_0[3];

static MR_bool MR_CALL 
var_use_analysis__IntroducedFrom__pred__rec_switch_var_first_use__1482__1_2_p_0(
  MR_Word HeadVar__1_30,
  MR_Word HeadVar__2_71);

static MR_bool MR_CALL 
var_use_analysis__IntroducedFrom__pred__filter_recursive_call_sites__1256__1_3_p_0(
  MR_Word GoalPathStep_4,
  MR_Word LambdaHeadVar__1_13,
  MR_Word * LambdaHeadVar__2_14);

static void MR_CALL 
var_use_analysis__IntroducedFrom__pred__build_recursive_call_sites_list__1246__1_2_p_0(
  MR_Word LambdaHeadVar__1_11,
  MR_Word * LambdaHeadVar__2_12);

static MR_bool MR_CALL 
var_use_analysis__IntroducedFrom__pred__switch_var_first_use__1117__1_2_p_0(
  MR_Word HeadVar__1_25,
  MR_Word HeadVar__2_50);

static MR_bool MR_CALL 
var_use_analysis__IntroducedFrom__pred__average_var_use__169__1_2_p_0(
  MR_Word Type_6,
  MR_Word LambdaHeadVar__1_24);

static void MR_CALL 
var_use_analysis____Compare____var_first_use_static_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
var_use_analysis____Unify____var_first_use_static_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
var_use_analysis____Compare____recursive_case_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
var_use_analysis____Unify____recursive_case_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
var_use_analysis____Compare____recursive_calls_list_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
var_use_analysis____Unify____recursive_calls_list_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
var_use_analysis____Compare____proc_var_first_use_prepared_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
var_use_analysis____Unify____proc_var_first_use_prepared_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
var_use_analysis____Compare____found_first_use_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
var_use_analysis____Unify____found_first_use_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
var_use_analysis____Compare____first_use_rec_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
var_use_analysis____Unify____first_use_rec_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
var_use_analysis__adjust_weight_for_recursion_4_p_0(
  MR_Word RecCase_5,
  MR_Float RecProb_6,
  MR_Float STATE_VARIABLE_Weight_0_9,
  MR_Float * STATE_VARIABLE_Weight_10);

static void MR_CALL 
var_use_analysis__get_call_site_dynamic_var_use_time_9_p_0(
  MR_Word CliquePtr_10,
  MR_Word CSDPtr_11,
  MR_Word RecursionType_12,
  MR_Word CurDepth_13,
  MR_Float Cost_14,
  MR_Word CallStack_15,
  MR_Word VarUseOptions_16,
  MR_Integer ArgNum_17,
  MR_Float * Time_18);

static void MR_CALL 
var_use_analysis__sum_use_info_costs_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Float STATE_VARIABLE_AccCost_0_11,
  MR_Float * STATE_VARIABLE_AccCost_12,
  MR_Float STATE_VARIABLE_AccProcCost_0_13,
  MR_Float * STATE_VARIABLE_AccProcCost_14);

static void MR_CALL 
var_use_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_99_117_114_115_105_118_101_95_118_97_114_95_117_115_101_95_105_110_102_111_95_95_91_54_93_95_48_9_p_0(
  MR_Word CliquePtr_10,
  MR_Word PDPtr_11,
  MR_Integer ArgNum_12,
  MR_Word RecursionType_13,
  MR_Word Depth_14,
  MR_Word CallStack_16,
  MR_Word VarUseOptions_17,
  MR_Word * MaybeVarUseInfo_18);

static MR_bool MR_CALL 
var_use_analysis__switch_rec_prob_2_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
var_use_analysis__switch_rec_prob_2_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer CaseNum_2,
  MR_Integer TotalCalls_3,
  MR_Word RecCalls_4,
  MR_Word Info_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_ProbArray_0_8,
  MR_Word * STATE_VARIABLE_ProbArray_9);

static MR_Box MR_CALL 
var_use_analysis__switch_rec_prob_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
var_use_analysis__switch_rec_prob_7_p_0(
  MR_Word Cases_8,
  MR_Integer TotalCalls_9,
  MR_Word RecCalls_10,
  MR_Word Info_11,
  MR_Float * Prob_12,
  MR_Word STATE_VARIABLE_ProbArray_0_17,
  MR_Word * STATE_VARIABLE_ProbArray_18);

static MR_bool MR_CALL 
var_use_analysis__disj_rec_prob_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
var_use_analysis__disj_rec_prob_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer DisjNum_2,
  MR_Word RecCalls_3,
  MR_Word Info_4,
  MR_Float * HeadVar__5_5,
  MR_Word STATE_VARIABLE_ProbArray_0_6,
  MR_Word * STATE_VARIABLE_ProbArray_7);

static MR_bool MR_CALL 
var_use_analysis__conj_rec_prob_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
var_use_analysis__conj_rec_prob_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer ConjNum_2,
  MR_Word RecCalls_3,
  MR_Word Info_4,
  MR_Float * HeadVar__5_5,
  MR_Word STATE_VARIABLE_ProbArray_0_6,
  MR_Word * STATE_VARIABLE_ProbArray_7);

static MR_bool MR_CALL 
var_use_analysis__goal_rec_prob_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
var_use_analysis__goal_rec_prob_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
var_use_analysis__goal_rec_prob_6_p_0(
  MR_Word Goal_7,
  MR_Word RecCalls_8,
  MR_Word Info_9,
  MR_Float * Prob_10,
  MR_Word STATE_VARIABLE_ProbArray_0_35,
  MR_Word * STATE_VARIABLE_ProbArray_36);

static void MR_CALL 
var_use_analysis__rec_goal_var_first_use_6_p_0(
  MR_Word Goal_7,
  MR_Word RecCalls_8,
  MR_Word Info_9,
  MR_Word * FoundFirstUse_10,
  MR_Float STATE_VARIABLE_CostSoFar_0_71,
  MR_Float * STATE_VARIABLE_CostSoFar_72);

static void MR_CALL 
var_use_analysis__rec_ite_var_first_use_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
var_use_analysis__rec_ite_var_first_use_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
var_use_analysis__rec_ite_var_first_use_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
var_use_analysis__rec_ite_var_first_use_8_p_0(
  MR_Word Cond_9,
  MR_Word Then_10,
  MR_Word Else_11,
  MR_Word RecCalls_12,
  MR_Word Info_13,
  MR_Word * FoundFirstUse_14,
  MR_Float STATE_VARIABLE_CostSoFar_0_46,
  MR_Float * STATE_VARIABLE_CostSoFar_47);

static MR_bool MR_CALL 
var_use_analysis__rec_switch_var_first_use_2_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
var_use_analysis__rec_switch_var_first_use_2_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer CaseNum_2,
  MR_Word RecCalls_3,
  MR_Word Info_4,
  MR_Float CostBeforeSwitch_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word * HeadVar__9_9);

static void MR_CALL 
var_use_analysis__rec_switch_var_first_use_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
var_use_analysis__rec_switch_var_first_use_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
var_use_analysis__rec_switch_var_first_use_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
var_use_analysis__rec_switch_var_first_use_7_p_0(
  MR_Word Cases_8,
  MR_Integer SwitchedOnVar_9,
  MR_Word RecCalls_10,
  MR_Word Info_11,
  MR_Word * FoundFirstUse_12,
  MR_Float CostBeforeSwitch_13,
  MR_Float * CostAfterSwitch_14);

static MR_bool MR_CALL 
var_use_analysis__rec_disj_var_first_use_2_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
var_use_analysis__rec_disj_var_first_use_2_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer DisjNum_2,
  MR_Word RecCalls_3,
  MR_Word Info_4,
  MR_Word * HeadVar__5_5,
  MR_Float STATE_VARIABLE_CostSoFar_0_6,
  MR_Float * STATE_VARIABLE_CostSoFar_7);

static void MR_CALL 
var_use_analysis__rec_disj_var_first_use_6_p_0(
  MR_Word Disjs_7,
  MR_Word RecCalls_8,
  MR_Word Info_9,
  MR_Word * FoundFirstUse_10,
  MR_Float STATE_VARIABLE_CostSoFar_0_17,
  MR_Float * STATE_VARIABLE_CostSoFar_18);

static MR_bool MR_CALL 
var_use_analysis__rec_conj_var_first_use_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
var_use_analysis__rec_conj_var_first_use_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer ConjNum_2,
  MR_Word RecCalls_3,
  MR_Word StaticInfo_4,
  MR_Word * HeadVar__5_5,
  MR_Float STATE_VARIABLE_CostSoFar_0_6,
  MR_Float * STATE_VARIABLE_CostSoFar_7);

static MR_bool MR_CALL 
var_use_analysis__filter_recursive_call_sites_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
var_use_analysis__filter_recursive_call_sites_3_p_0(
  MR_Word GoalPathStep_4,
  MR_Word STATE_VARIABLE_RecCallSites_0_9,
  MR_Word * STATE_VARIABLE_RecCallSites_10);

static void MR_CALL 
var_use_analysis__build_recursive_call_sites_list_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
var_use_analysis__build_recursive_call_sites_list_2_p_0(
  MR_Word Map_3,
  MR_Word * List_4);

static MR_bool MR_CALL 
var_use_analysis__intermodule_var_use_should_follow_csd_2_p_0(
  MR_Word VarUseOptions_3,
  MR_Word CSDPtr_4);

static void MR_CALL 
var_use_analysis__found_first_use_to_use_info_4_p_0(
  MR_Word FoundFirstUse_5,
  MR_Float Cost_6,
  MR_Word VarUseType_7,
  MR_Word * VarUseInfo_8);

static void MR_CALL 
var_use_analysis__goal_var_first_use_6_p_0(
  MR_Word RevGoalPath_7,
  MR_Word Goal_8,
  MR_Word StaticInfo_9,
  MR_Float STATE_VARIABLE_CostSoFar_0_68,
  MR_Float * STATE_VARIABLE_CostSoFar_69,
  MR_Word * FoundFirstUse_11);

static void MR_CALL 
var_use_analysis__conj_var_first_use_7_p_0(
  MR_Word RevGoalPath_1,
  MR_Integer ConjNum_2,
  MR_Word HeadVar__3_3,
  MR_Word StaticInfo_4,
  MR_Float HeadVar__5_5,
  MR_Float * HeadVar__6_6,
  MR_Word * HeadVar__7_7);

static void MR_CALL 
var_use_analysis__ite_var_first_use_8_p_0(
  MR_Word RevGoalPath_9,
  MR_Word Cond_10,
  MR_Word Then_11,
  MR_Word Else_12,
  MR_Word StaticInfo_13,
  MR_Float STATE_VARIABLE_CostSoFar_0_41,
  MR_Float * STATE_VARIABLE_CostSoFar_42,
  MR_Word * FoundFirstUse_15);

static void MR_CALL 
var_use_analysis__switch_var_first_use_2_8_p_0(
  MR_Word RevGoalPath_1,
  MR_Integer CaseNum_2,
  MR_Word StaticInfo_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Float Cost0_6,
  MR_Word * HeadVar__7_7,
  MR_Word * HeadVar__8_8);

static void MR_CALL 
var_use_analysis__switch_var_first_use_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
var_use_analysis__switch_var_first_use_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
var_use_analysis__switch_var_first_use_7_p_0(
  MR_Word RevGoalPath_8,
  MR_Integer SwitchedOnVar_9,
  MR_Word Cases_10,
  MR_Word StaticInfo_11,
  MR_Float CostBeforeSwitch_12,
  MR_Float * CostAfterSwitch_13,
  MR_Word * FoundFirstUse_14);

static void MR_CALL 
var_use_analysis__disj_var_first_use_2_7_p_0(
  MR_Word RevGoalPath_1,
  MR_Integer DisjNum_2,
  MR_Word HeadVar__3_3,
  MR_Word StaticInfo_4,
  MR_Float STATE_VARIABLE_CostSoFar_0_5,
  MR_Float * STATE_VARIABLE_CostSoFar_6,
  MR_Word * HeadVar__7_7);

static void MR_CALL 
var_use_analysis__disj_var_first_use_7_p_0(
  MR_Word RevGoalPath_8,
  MR_Word Disjuncts_9,
  MR_Word Detism_10,
  MR_Word StaticInfo_11,
  MR_Float STATE_VARIABLE_CostSoFar_0_19,
  MR_Float * STATE_VARIABLE_CostSoFar_20,
  MR_Word * FoundFirstUse_13);

static void MR_CALL 
var_use_analysis__ffu_to_float_3_p_0(
  MR_Float Default_1,
  MR_Word HeadVar__2_2,
  MR_Float * HeadVar__3_3);

static void MR_CALL 
var_use_analysis__atomic_trivial_var_first_use_5_p_0(
  MR_Word AtomicGoal_6,
  MR_Word BoundVars_7,
  MR_Float CostSoFar_8,
  MR_Word StaticInfo_9,
  MR_Word * FoundFirstUse_10);

static void MR_CALL 
var_use_analysis__call_var_first_use_7_p_0(
  MR_Word AtomicGoal_8,
  MR_Word BoundVars_9,
  MR_Word RevGoalPath_10,
  MR_Word StaticInfo_11,
  MR_Word * FoundFirstUse_12,
  MR_Float STATE_VARIABLE_CostSoFar_0_52,
  MR_Float * STATE_VARIABLE_CostSoFar_53);

static void MR_CALL 
var_use_analysis__call_args_first_use_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
var_use_analysis__call_args_first_use_5_p_0(
  MR_Word Args_6,
  MR_Float Cost_7,
  MR_Word StaticInfo_8,
  MR_Word CostAndCallees_9,
  MR_Word * Times_10);

static void MR_CALL 
var_use_analysis__prepare_for_proc_var_first_use_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
var_use_analysis__prepare_for_proc_var_first_use_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
var_use_analysis__prepare_for_proc_var_first_use_7_p_0(
  MR_Word CliquePtr_8,
  MR_Word PDPtr_9,
  MR_Integer ArgNum_10,
  MR_Word RecursionType_11,
  MR_Word Depth_12,
  MR_Word VarUseOptions_13,
  MR_Word * Info_14);

static MR_bool MR_CALL 
var_use_analysis__average_var_use_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
var_use_analysis__average_var_use_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_bool MR_CALL 
var_use_analysis____Unify____first_use_rec_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
var_use_analysis____Compare____first_use_rec_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
var_use_analysis____Unify____found_first_use_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
var_use_analysis____Compare____found_first_use_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
var_use_analysis____Unify____intermodule_var_use_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
var_use_analysis____Compare____intermodule_var_use_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
var_use_analysis____Unify____proc_var_first_use_prepared_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
var_use_analysis____Compare____proc_var_first_use_prepared_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
var_use_analysis____Unify____recursive_calls_list_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
var_use_analysis____Compare____recursive_calls_list_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
var_use_analysis____Unify____recursive_case_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
var_use_analysis____Compare____recursive_case_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
var_use_analysis____Unify____var_first_use_static_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
var_use_analysis____Compare____var_first_use_static_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
var_use_analysis____Unify____var_use_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
var_use_analysis____Compare____var_use_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
var_use_analysis____Unify____var_use_options_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
var_use_analysis____Compare____var_use_options_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
var_use_analysis____Unify____var_use_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
var_use_analysis____Compare____var_use_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box var_use_analysis_scalar_common_1[6][2];

static /* final */ const MR_Box var_use_analysis_scalar_common_2[12][3];

static /* final */ const MR_Box var_use_analysis_scalar_common_3[3][1];

static /* final */ const MR_Box var_use_analysis_scalar_common_4[2][8];

static /* final */ const MR_Box var_use_analysis_scalar_common_5[5][5];

static /* final */ const MR_Box var_use_analysis_scalar_common_6[2][7];

static /* final */ const MR_Box var_use_analysis_scalar_common_7[1][12];

static /* final */ const MR_Box var_use_analysis_scalar_common_8[3][4];

static /* final */ const MR_Box var_use_analysis_scalar_common_9[2][6];




static /* final */ const MR_Box var_use_analysis_scalar_common_1[6][2] = {
  /* row   0 */
  {
    ((MR_Box) (&analysis_utils__analysis_utils__type_ctor_info_cost_and_callees_1)),
    ((MR_Box) (&analysis_utils__analysis_utils__type_ctor_info_callee_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_attr_array_1)),
    ((MR_Box) (&measurement_units__measurement_units__type_ctor_info_probability_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_goal_rep_1)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_attr_array_1)),
    ((MR_Box) (&coverage__coverage__type_ctor_info_coverage_info_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&var_use_analysis_scalar_common_2[4]))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0))
  },
};

static /* final */ const MR_Box var_use_analysis_scalar_common_2[12][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_static_ptr_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_array_slot_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0)),
    ((MR_Box) (&var_use_analysis_scalar_common_1[0]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0)),
    ((MR_Box) (&coverage__coverage__type_ctor_info_coverage_point_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_cs_cost_csq_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_cs_cost_csq_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&var_use_analysis_scalar_common_4[0])),
    ((MR_Box) (var_use_analysis__average_var_use_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&var_use_analysis_scalar_common_4[1])),
    ((MR_Box) (var_use_analysis__prepare_for_proc_var_first_use_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&var_use_analysis_scalar_common_5[2])),
    ((MR_Box) (var_use_analysis__build_recursive_call_sites_list_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&var_use_analysis_scalar_common_5[3])),
    ((MR_Box) (var_use_analysis__rec_ite_var_first_use_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&var_use_analysis_scalar_common_5[4])),
    ((MR_Box) (var_use_analysis__switch_rec_prob_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box var_use_analysis_scalar_common_3[3][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
  /* row   1 */
  { ((MR_Box) ((MR_String) "Cannot compute var use on a recursive call site for an unknown recursion depth")) },
  /* row   2 */
  { ((MR_Box) ((MR_String) "Cannot compute var use on a recursive call site for an unknown recursion type")) },
};

static /* final */ const MR_Box var_use_analysis_scalar_common_4[2][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&var_use_analysis__var_use_analysis__type_ctor_info_var_use_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&coverage__coverage__type_ctor_info_coverage_point_0)),
    ((MR_Box) (&var_use_analysis__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_coverage__type_ctor_info_coverage_point_0)),
    ((MR_Box) (&var_use_analysis__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_coverage__type_ctor_info_coverage_point_0)),
    ((MR_Box) (&var_use_analysis__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_coverage__type_ctor_info_coverage_point_0)),
    ((MR_Box) (&var_use_analysis__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_coverage__type_ctor_info_coverage_point_0))
  },
};

static /* final */ const MR_Box var_use_analysis_scalar_common_5[5][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&var_use_analysis__var_use_analysis__type_ctor_info_var_use_type_0)),
    ((MR_Box) (&var_use_analysis__var_use_analysis__type_ctor_info_var_use_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&var_use_analysis__var_use_analysis__type_ctor_info_found_first_use_0)),
    ((MR_Box) (&var_use_analysis__var_use_analysis__type_ctor_info_found_first_use_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&var_use_analysis__pair__pti_pair_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_measurements__type_ctor_info_cs_cost_csq_0)),
    ((MR_Box) (&var_use_analysis__pair__pti_pair_2__plain_mdbcomp__goal_path__type_ctor_info_forward_goal_path_0__plain_builtin__type_ctor_info_float_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0))
  },
};

static /* final */ const MR_Box var_use_analysis_scalar_common_6[2][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&var_use_analysis__pair__pti_pair_2__plain_profile__type_ctor_info_call_site_static_ptr_0__plain_profile__type_ctor_info_call_site_array_slot_0)),
    ((MR_Box) (&var_use_analysis__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0)),
    ((MR_Box) (&var_use_analysis__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&var_use_analysis__var_use_analysis__type_ctor_info_recursive_case_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0))
  },
};

static /* final */ const MR_Box var_use_analysis_scalar_common_7[1][12] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
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

static /* final */ const MR_Box var_use_analysis_scalar_common_8[3][4] = {
  /* row   0 */
  {
    ((MR_Box) (&var_use_analysis_scalar_common_5[1])),
    ((MR_Box) (var_use_analysis__switch_var_first_use_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   1 */
  {
    ((MR_Box) (&var_use_analysis_scalar_common_5[1])),
    ((MR_Box) (var_use_analysis__rec_switch_var_first_use_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   2 */
  {
    ((MR_Box) (&var_use_analysis_scalar_common_9[1])),
    ((MR_Box) (var_use_analysis__goal_rec_prob_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Unsigned) 12U))
  },
};

static /* final */ const MR_Box var_use_analysis_scalar_common_9[2][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0)),
    ((MR_Box) (&var_use_analysis__var_use_analysis__type_ctor_info_found_first_use_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_path_step_0)),
    ((MR_Box) (&var_use_analysis__pair__pti_pair_2__plain_mdbcomp__goal_path__type_ctor_info_forward_goal_path_0__plain_builtin__type_ctor_info_float_0)),
    ((MR_Box) (&var_use_analysis__pair__pti_pair_2__plain_mdbcomp__goal_path__type_ctor_info_forward_goal_path_0__plain_builtin__type_ctor_info_float_0))
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


static const MR_FA_PseudoTypeInfo_Struct2 var_use_analysis__pair__pti_pair_2__plain_profile__type_ctor_info_call_site_static_ptr_0__plain_profile__type_ctor_info_call_site_array_slot_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_call_site_static_ptr_0),
    (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_call_site_array_slot_0)
  }
};

static const MR_FA_TypeInfo_Struct1 var_use_analysis__analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0 = {
  &analysis_utils__analysis_utils__type_ctor_info_cost_and_callees_1,
  { (MR_TypeInfo) (&analysis_utils__analysis_utils__type_ctor_info_callee_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 var_use_analysis__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0),
    (MR_PseudoTypeInfo) (&var_use_analysis__analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 var_use_analysis__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_coverage__type_ctor_info_coverage_point_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0),
    (MR_PseudoTypeInfo) (&coverage__coverage__type_ctor_info_coverage_point_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 var_use_analysis__set_ordlist__pti_set_ordlist_1__plain_profile__type_ctor_info_proc_dynamic_ptr_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 var_use_analysis__pair__pti_pair_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_measurements__type_ctor_info_cs_cost_csq_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0),
    (MR_PseudoTypeInfo) (&measurements__measurements__type_ctor_info_cs_cost_csq_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 var_use_analysis__pair__pti_pair_2__plain_mdbcomp__goal_path__type_ctor_info_forward_goal_path_0__plain_builtin__type_ctor_info_float_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0)
  }
};

static const MR_FA_TypeInfo_Struct1 var_use_analysis__mdbcomp__goal_path__ti_goal_attr_array_1builtin__type_ctor_info_float_0 = {
  &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_attr_array_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0) }
};

static const MR_PseudoTypeInfo var_use_analysis__var_use_analysis__field_types_first_use_rec_info_0_0[2] = {
  (MR_PseudoTypeInfo) (&var_use_analysis__mdbcomp__goal_path__ti_goal_attr_array_1builtin__type_ctor_info_float_0),
  (MR_PseudoTypeInfo) (&var_use_analysis__var_use_analysis__type_ctor_info_recursive_case_0)
};

static const MR_ConstString var_use_analysis__var_use_analysis__field_names_first_use_rec_info_0_0[2] = {
  (MR_String) "furi_rec_prob_array",
  (MR_String) "furi_rec_case"
};

static const MR_DuArgLocn var_use_analysis__var_use_analysis__field_locns_first_use_rec_info_0_0[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc var_use_analysis__var_use_analysis__du_functor_desc_first_use_rec_info_0_0 = {
  (MR_String) "first_use_rec_info",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  var_use_analysis__var_use_analysis__field_types_first_use_rec_info_0_0,
  var_use_analysis__var_use_analysis__field_names_first_use_rec_info_0_0,
  var_use_analysis__var_use_analysis__field_locns_first_use_rec_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc var_use_analysis__var_use_analysis__du_functor_desc_first_use_rec_info_0_1 = {
  (MR_String) "no_recursion_info",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr var_use_analysis__var_use_analysis__du_stag_ordered_first_use_rec_info_0_0[1] = { &var_use_analysis__var_use_analysis__du_functor_desc_first_use_rec_info_0_1 };

static const MR_DuFunctorDescPtr var_use_analysis__var_use_analysis__du_stag_ordered_first_use_rec_info_0_1[1] = { &var_use_analysis__var_use_analysis__du_functor_desc_first_use_rec_info_0_0 };

static const MR_DuPtagLayout var_use_analysis__var_use_analysis__du_ptag_ordered_first_use_rec_info_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    var_use_analysis__var_use_analysis__du_stag_ordered_first_use_rec_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    var_use_analysis__var_use_analysis__du_stag_ordered_first_use_rec_info_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (var_use_analysis____Unify____first_use_rec_info_0_0_10001)),
  ((MR_Box) (var_use_analysis____Compare____first_use_rec_info_0_0_10001)),
  (MR_String) "var_use_analysis",
  (MR_String) "first_use_rec_info",
  { var_use_analysis__var_use_analysis__du_name_ordered_first_use_rec_info_0 },
  { var_use_analysis__var_use_analysis__du_ptag_ordered_first_use_rec_info_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  var_use_analysis__var_use_analysis__functor_number_map_first_use_rec_info_0,

};

static const MR_DuFunctorDesc var_use_analysis__var_use_analysis__du_functor_desc_found_first_use_0_0 = {
  (MR_String) "have_not_found_first_use",
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

static const MR_PseudoTypeInfo var_use_analysis__var_use_analysis__field_types_found_first_use_0_1[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0) };

static const MR_ConstString var_use_analysis__var_use_analysis__field_names_found_first_use_0_1[1] = { (MR_String) "cost_before_use" };

static const MR_DuFunctorDesc var_use_analysis__var_use_analysis__du_functor_desc_found_first_use_0_1 = {
  (MR_String) "found_first_use",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  var_use_analysis__var_use_analysis__field_types_found_first_use_0_1,
  var_use_analysis__var_use_analysis__field_names_found_first_use_0_1,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr var_use_analysis__var_use_analysis__du_stag_ordered_found_first_use_0_0[1] = { &var_use_analysis__var_use_analysis__du_functor_desc_found_first_use_0_0 };

static const MR_DuFunctorDescPtr var_use_analysis__var_use_analysis__du_stag_ordered_found_first_use_0_1[1] = { &var_use_analysis__var_use_analysis__du_functor_desc_found_first_use_0_1 };

static const MR_DuPtagLayout var_use_analysis__var_use_analysis__du_ptag_ordered_found_first_use_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    var_use_analysis__var_use_analysis__du_stag_ordered_found_first_use_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    var_use_analysis__var_use_analysis__du_stag_ordered_found_first_use_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (var_use_analysis____Unify____found_first_use_0_0_10001)),
  ((MR_Box) (var_use_analysis____Compare____found_first_use_0_0_10001)),
  (MR_String) "var_use_analysis",
  (MR_String) "found_first_use",
  { var_use_analysis__var_use_analysis__du_name_ordered_found_first_use_0 },
  { var_use_analysis__var_use_analysis__du_ptag_ordered_found_first_use_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  var_use_analysis__var_use_analysis__functor_number_map_found_first_use_0,

};

static const MR_PseudoTypeInfo var_use_analysis__var_use_analysis__field_types_intermodule_var_use_0_0[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc var_use_analysis__var_use_analysis__du_functor_desc_intermodule_var_use_0_0 = {
  (MR_String) "follow_calls_into_module",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  var_use_analysis__var_use_analysis__field_types_intermodule_var_use_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc var_use_analysis__var_use_analysis__du_functor_desc_intermodule_var_use_0_1 = {
  (MR_String) "follow_any_call",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr var_use_analysis__var_use_analysis__du_stag_ordered_intermodule_var_use_0_0[1] = { &var_use_analysis__var_use_analysis__du_functor_desc_intermodule_var_use_0_1 };

static const MR_DuFunctorDescPtr var_use_analysis__var_use_analysis__du_stag_ordered_intermodule_var_use_0_1[1] = { &var_use_analysis__var_use_analysis__du_functor_desc_intermodule_var_use_0_0 };

static const MR_DuPtagLayout var_use_analysis__var_use_analysis__du_ptag_ordered_intermodule_var_use_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    var_use_analysis__var_use_analysis__du_stag_ordered_intermodule_var_use_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    var_use_analysis__var_use_analysis__du_stag_ordered_intermodule_var_use_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (var_use_analysis____Unify____intermodule_var_use_0_0_10001)),
  ((MR_Box) (var_use_analysis____Compare____intermodule_var_use_0_0_10001)),
  (MR_String) "var_use_analysis",
  (MR_String) "intermodule_var_use",
  { var_use_analysis__var_use_analysis__du_name_ordered_intermodule_var_use_0 },
  { var_use_analysis__var_use_analysis__du_ptag_ordered_intermodule_var_use_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  var_use_analysis__var_use_analysis__functor_number_map_intermodule_var_use_0,

};

static const MR_PseudoTypeInfo var_use_analysis__var_use_analysis__field_types_proc_var_first_use_prepared_info_0_0[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc var_use_analysis__var_use_analysis__du_functor_desc_proc_var_first_use_prepared_info_0_0 = {
  (MR_String) "error",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  var_use_analysis__var_use_analysis__field_types_proc_var_first_use_prepared_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 var_use_analysis__mdbcomp__program_representation__ti_goal_rep_1mdbcomp__goal_path__type_ctor_info_goal_id_0 = {
  &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_goal_rep_1,
  { (MR_TypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0) }
};

static const MR_FA_TypeInfo_Struct2 var_use_analysis__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0),
    (MR_TypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0)
  }
};

static const MR_FA_TypeInfo_Struct1 var_use_analysis__mdbcomp__goal_path__ti_goal_attr_array_1coverage__type_ctor_info_coverage_info_0 = {
  &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_attr_array_1,
  { (MR_TypeInfo) (&coverage__coverage__type_ctor_info_coverage_info_0) }
};

static const MR_FA_TypeInfo_Struct2 var_use_analysis__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0),
    (MR_TypeInfo) (&var_use_analysis__analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0)
  }
};

static const MR_FA_TypeInfo_Struct2 var_use_analysis__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0measurements__type_ctor_info_cs_cost_csq_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0),
    (MR_TypeInfo) (&measurements__measurements__type_ctor_info_cs_cost_csq_0)
  }
};

static const MR_PseudoTypeInfo var_use_analysis__var_use_analysis__field_types_proc_var_first_use_prepared_info_0_1[7] = {
  (MR_PseudoTypeInfo) (&var_use_analysis__mdbcomp__program_representation__ti_goal_rep_1mdbcomp__goal_path__type_ctor_info_goal_id_0),
  (MR_PseudoTypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0),
  (MR_PseudoTypeInfo) (&var_use_analysis__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0),
  (MR_PseudoTypeInfo) (&var_use_analysis__mdbcomp__goal_path__ti_goal_attr_array_1coverage__type_ctor_info_coverage_info_0),
  (MR_PseudoTypeInfo) (&var_use_analysis__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0),
  (MR_PseudoTypeInfo) (&var_use_analysis__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0measurements__type_ctor_info_cs_cost_csq_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc var_use_analysis__var_use_analysis__du_functor_desc_proc_var_first_use_prepared_info_0_1 = {
  (MR_String) "proc_var_first_use_prepared_info",
  INT16_C(7),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  var_use_analysis__var_use_analysis__field_types_proc_var_first_use_prepared_info_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr var_use_analysis__var_use_analysis__du_stag_ordered_proc_var_first_use_prepared_info_0_0[1] = { &var_use_analysis__var_use_analysis__du_functor_desc_proc_var_first_use_prepared_info_0_0 };

static const MR_DuFunctorDescPtr var_use_analysis__var_use_analysis__du_stag_ordered_proc_var_first_use_prepared_info_0_1[1] = { &var_use_analysis__var_use_analysis__du_functor_desc_proc_var_first_use_prepared_info_0_1 };

static const MR_DuPtagLayout var_use_analysis__var_use_analysis__du_ptag_ordered_proc_var_first_use_prepared_info_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    var_use_analysis__var_use_analysis__du_stag_ordered_proc_var_first_use_prepared_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    var_use_analysis__var_use_analysis__du_stag_ordered_proc_var_first_use_prepared_info_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (var_use_analysis____Unify____proc_var_first_use_prepared_info_0_0_10001)),
  ((MR_Box) (var_use_analysis____Compare____proc_var_first_use_prepared_info_0_0_10001)),
  (MR_String) "var_use_analysis",
  (MR_String) "proc_var_first_use_prepared_info",
  { var_use_analysis__var_use_analysis__du_name_ordered_proc_var_first_use_prepared_info_0 },
  { var_use_analysis__var_use_analysis__du_ptag_ordered_proc_var_first_use_prepared_info_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  var_use_analysis__var_use_analysis__functor_number_map_proc_var_first_use_prepared_info_0,

};

static const MR_FA_TypeInfo_Struct2 var_use_analysis__pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_forward_goal_path_0builtin__type_ctor_info_float_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0)
  }
};

static const MR_FA_TypeInfo_Struct1 var_use_analysis__list__ti_list_1pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_forward_goal_path_0builtin__type_ctor_info_float_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&var_use_analysis__pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_forward_goal_path_0builtin__type_ctor_info_float_0) }
};

const MR_TypeCtorInfo_Struct var_use_analysis__var_use_analysis__type_ctor_info_recursive_calls_list_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (var_use_analysis____Unify____recursive_calls_list_0_0_10001)),
  ((MR_Box) (var_use_analysis____Compare____recursive_calls_list_0_0_10001)),
  (MR_String) "var_use_analysis",
  (MR_String) "recursive_calls_list",
  { NULL },
  { (MR_PseudoTypeInfo) (&var_use_analysis__list__ti_list_1pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_forward_goal_path_0builtin__type_ctor_info_float_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_EnumFunctorDesc var_use_analysis__var_use_analysis__enum_functor_desc_recursive_case_0_0 = {
  (MR_String) "recursive_case",
  INT32_C(0)
};

static const MR_EnumFunctorDesc var_use_analysis__var_use_analysis__enum_functor_desc_recursive_case_0_1 = {
  (MR_String) "base_case",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr var_use_analysis__var_use_analysis__enum_ordinal_ordered_recursive_case_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (var_use_analysis____Unify____recursive_case_0_0_10001)),
  ((MR_Box) (var_use_analysis____Compare____recursive_case_0_0_10001)),
  (MR_String) "var_use_analysis",
  (MR_String) "recursive_case",
  { var_use_analysis__var_use_analysis__enum_name_ordered_recursive_case_0 },
  { var_use_analysis__var_use_analysis__enum_ordinal_ordered_recursive_case_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  var_use_analysis__var_use_analysis__functor_number_map_recursive_case_0,

};

static const MR_FA_TypeInfo_Struct1 var_use_analysis__set_ordlist__ti_set_ordlist_1profile__type_ctor_info_proc_dynamic_ptr_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0) }
};

static const MR_PseudoTypeInfo var_use_analysis__var_use_analysis__field_types_var_first_use_static_info_0_0[11] = {
  (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_clique_ptr_0),
  (MR_PseudoTypeInfo) (&var_use_analysis__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0),
  (MR_PseudoTypeInfo) (&var_use_analysis__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0measurements__type_ctor_info_cs_cost_csq_0),
  (MR_PseudoTypeInfo) (&var_use_analysis__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0),
  (MR_PseudoTypeInfo) (&var_use_analysis__mdbcomp__goal_path__ti_goal_attr_array_1coverage__type_ctor_info_coverage_info_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&var_use_analysis__var_use_analysis__type_ctor_info_var_use_options_0),
  (MR_PseudoTypeInfo) (&var_use_analysis__set_ordlist__ti_set_ordlist_1profile__type_ctor_info_proc_dynamic_ptr_0),
  (MR_PseudoTypeInfo) (&report__report__type_ctor_info_recursion_type_0),
  (MR_PseudoTypeInfo) (&measurements__measurements__type_ctor_info_recursion_depth_0),
  (MR_PseudoTypeInfo) (&var_use_analysis__var_use_analysis__type_ctor_info_first_use_rec_info_0)
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
  INT16_C(11),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  var_use_analysis__var_use_analysis__field_types_var_first_use_static_info_0_0,
  var_use_analysis__var_use_analysis__field_names_var_first_use_static_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr var_use_analysis__var_use_analysis__du_stag_ordered_var_first_use_static_info_0_0[1] = { &var_use_analysis__var_use_analysis__du_functor_desc_var_first_use_static_info_0_0 };

static const MR_DuPtagLayout var_use_analysis__var_use_analysis__du_ptag_ordered_var_first_use_static_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    var_use_analysis__var_use_analysis__du_stag_ordered_var_first_use_static_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr var_use_analysis__var_use_analysis__du_name_ordered_var_first_use_static_info_0[1] = { &var_use_analysis__var_use_analysis__du_functor_desc_var_first_use_static_info_0_0 };

static const MR_Integer var_use_analysis__var_use_analysis__functor_number_map_var_first_use_static_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct var_use_analysis__var_use_analysis__type_ctor_info_var_first_use_static_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (var_use_analysis____Unify____var_first_use_static_info_0_0_10001)),
  ((MR_Box) (var_use_analysis____Compare____var_first_use_static_info_0_0_10001)),
  (MR_String) "var_use_analysis",
  (MR_String) "var_first_use_static_info",
  { var_use_analysis__var_use_analysis__du_name_ordered_var_first_use_static_info_0 },
  { var_use_analysis__var_use_analysis__du_ptag_ordered_var_first_use_static_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  var_use_analysis__var_use_analysis__functor_number_map_var_first_use_static_info_0,

};

static const MR_PseudoTypeInfo var_use_analysis__var_use_analysis__field_types_var_use_info_0_0[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0),
  (MR_PseudoTypeInfo) (&var_use_analysis__var_use_analysis__type_ctor_info_var_use_type_0)
};

static const MR_ConstString var_use_analysis__var_use_analysis__field_names_var_use_info_0_0[3] = {
  (MR_String) "vui_cost_until_use",
  (MR_String) "vui_proc_cost",
  (MR_String) "vui_use_type"
};

static const MR_DuArgLocn var_use_analysis__var_use_analysis__field_locns_var_use_info_0_0[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 2
  }
};

static const MR_DuFunctorDesc var_use_analysis__var_use_analysis__du_functor_desc_var_use_info_0_0 = {
  (MR_String) "var_use_info",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  var_use_analysis__var_use_analysis__field_types_var_use_info_0_0,
  var_use_analysis__var_use_analysis__field_names_var_use_info_0_0,
  var_use_analysis__var_use_analysis__field_locns_var_use_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr var_use_analysis__var_use_analysis__du_stag_ordered_var_use_info_0_0[1] = { &var_use_analysis__var_use_analysis__du_functor_desc_var_use_info_0_0 };

static const MR_DuPtagLayout var_use_analysis__var_use_analysis__du_ptag_ordered_var_use_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    var_use_analysis__var_use_analysis__du_stag_ordered_var_use_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr var_use_analysis__var_use_analysis__du_name_ordered_var_use_info_0[1] = { &var_use_analysis__var_use_analysis__du_functor_desc_var_use_info_0_0 };

static const MR_Integer var_use_analysis__var_use_analysis__functor_number_map_var_use_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct var_use_analysis__var_use_analysis__type_ctor_info_var_use_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (var_use_analysis____Unify____var_use_info_0_0_10001)),
  ((MR_Box) (var_use_analysis____Compare____var_use_info_0_0_10001)),
  (MR_String) "var_use_analysis",
  (MR_String) "var_use_info",
  { var_use_analysis__var_use_analysis__du_name_ordered_var_use_info_0 },
  { var_use_analysis__var_use_analysis__du_ptag_ordered_var_use_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  var_use_analysis__var_use_analysis__functor_number_map_var_use_info_0,

};

static const MR_PseudoTypeInfo var_use_analysis__var_use_analysis__field_types_var_use_options_0_0[3] = {
  (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_deep_0),
  (MR_PseudoTypeInfo) (&var_use_analysis__var_use_analysis__type_ctor_info_intermodule_var_use_0),
  (MR_PseudoTypeInfo) (&var_use_analysis__var_use_analysis__type_ctor_info_var_use_type_0)
};

static const MR_ConstString var_use_analysis__var_use_analysis__field_names_var_use_options_0_0[3] = {
  (MR_String) "vuo_deep",
  (MR_String) "vuo_intermodule_var_use",
  (MR_String) "vuo_var_use_type"
};

static const MR_DuArgLocn var_use_analysis__var_use_analysis__field_locns_var_use_options_0_0[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 2
  }
};

static const MR_DuFunctorDesc var_use_analysis__var_use_analysis__du_functor_desc_var_use_options_0_0 = {
  (MR_String) "var_use_options",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  var_use_analysis__var_use_analysis__field_types_var_use_options_0_0,
  var_use_analysis__var_use_analysis__field_names_var_use_options_0_0,
  var_use_analysis__var_use_analysis__field_locns_var_use_options_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr var_use_analysis__var_use_analysis__du_stag_ordered_var_use_options_0_0[1] = { &var_use_analysis__var_use_analysis__du_functor_desc_var_use_options_0_0 };

static const MR_DuPtagLayout var_use_analysis__var_use_analysis__du_ptag_ordered_var_use_options_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    var_use_analysis__var_use_analysis__du_stag_ordered_var_use_options_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr var_use_analysis__var_use_analysis__du_name_ordered_var_use_options_0[1] = { &var_use_analysis__var_use_analysis__du_functor_desc_var_use_options_0_0 };

static const MR_Integer var_use_analysis__var_use_analysis__functor_number_map_var_use_options_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct var_use_analysis__var_use_analysis__type_ctor_info_var_use_options_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (var_use_analysis____Unify____var_use_options_0_0_10001)),
  ((MR_Box) (var_use_analysis____Compare____var_use_options_0_0_10001)),
  (MR_String) "var_use_analysis",
  (MR_String) "var_use_options",
  { var_use_analysis__var_use_analysis__du_name_ordered_var_use_options_0 },
  { var_use_analysis__var_use_analysis__du_ptag_ordered_var_use_options_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  var_use_analysis__var_use_analysis__functor_number_map_var_use_options_0,

};

static const MR_EnumFunctorDesc var_use_analysis__var_use_analysis__enum_functor_desc_var_use_type_0_0 = {
  (MR_String) "var_use_production",
  INT32_C(0)
};

static const MR_EnumFunctorDesc var_use_analysis__var_use_analysis__enum_functor_desc_var_use_type_0_1 = {
  (MR_String) "var_use_consumption",
  INT32_C(1)
};

static const MR_EnumFunctorDesc var_use_analysis__var_use_analysis__enum_functor_desc_var_use_type_0_2 = {
  (MR_String) "var_use_other",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr var_use_analysis__var_use_analysis__enum_ordinal_ordered_var_use_type_0[3] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (var_use_analysis____Unify____var_use_type_0_0_10001)),
  ((MR_Box) (var_use_analysis____Compare____var_use_type_0_0_10001)),
  (MR_String) "var_use_analysis",
  (MR_String) "var_use_type",
  { var_use_analysis__var_use_analysis__enum_name_ordered_var_use_type_0 },
  { var_use_analysis__var_use_analysis__enum_ordinal_ordered_var_use_type_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  var_use_analysis__var_use_analysis__functor_number_map_var_use_type_0,

};

static MR_bool MR_CALL 
var_use_analysis__IntroducedFrom__pred__rec_switch_var_first_use__1482__1_2_p_0(
  MR_Word HeadVar__1_30,
  MR_Word HeadVar__2_71)
{
  MR_bool succeeded;
  MR_Integer CastX_77 = (MR_Integer) (HeadVar__1_30);
  MR_Integer CastY_78 = (MR_Integer) (HeadVar__2_71);

  succeeded = (CastX_77 == CastY_78);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Integer CastX_73 = (MR_Integer) (HeadVar__1_30);
    MR_Integer CastY_74 = (MR_Integer) (HeadVar__2_71);

    succeeded = (CastY_74 == CastX_73);
  }
  return succeeded;
}

static MR_bool MR_CALL 
var_use_analysis__IntroducedFrom__pred__filter_recursive_call_sites__1256__1_3_p_0(
  MR_Word GoalPathStep_4,
  MR_Word LambdaHeadVar__1_13,
  MR_Word * LambdaHeadVar__2_14)
{
  MR_bool succeeded;
  MR_Word GP0_15 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_13, (MR_Integer) 0))));
  MR_Float Coverage_16 = MR_unbox_float((MR_hl_field(0, LambdaHeadVar__1_13, (MR_Integer) 1)));
  MR_Word GP_17;
  MR_Word Var_19;

  succeeded = (GP0_15 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    Var_19 = ((MR_Word) ((MR_hl_field(1, GP0_15, (MR_Integer) 0))));
    GP_17 = ((MR_Word) ((MR_hl_field(1, GP0_15, (MR_Integer) 1))));
    succeeded = mdbcomp__goal_path____Unify____goal_path_step_0_0(GoalPathStep_4, Var_19);
    if (succeeded)
    {
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *LambdaHeadVar__2_14 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (GP_17));
        MR_hl_field(0, base, 1) = MR_box_float(Coverage_16);
      }
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

static void MR_CALL 
var_use_analysis__IntroducedFrom__pred__build_recursive_call_sites_list__1246__1_2_p_0(
  MR_Word LambdaHeadVar__1_11,
  MR_Word * LambdaHeadVar__2_12)
{
  MR_Word RevGoalPath_13 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_11, (MR_Integer) 0))));
  MR_Word Cost_14 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_11, (MR_Integer) 1))));
  MR_Word GoalPath_15;
  MR_Float Calls_16;

  Calls_16 = measurements__cs_cost_get_calls_1_f_0(Cost_14);
  mdbcomp__goal_path__rgp_to_fgp_2_p_0(RevGoalPath_13, &GoalPath_15);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *LambdaHeadVar__2_12 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalPath_15));
    MR_hl_field(0, base, 1) = MR_box_float(Calls_16);
  }
}

static MR_bool MR_CALL 
var_use_analysis__IntroducedFrom__pred__switch_var_first_use__1117__1_2_p_0(
  MR_Word HeadVar__1_25,
  MR_Word HeadVar__2_50)
{
  MR_bool succeeded;
  MR_Integer CastX_56 = (MR_Integer) (HeadVar__1_25);
  MR_Integer CastY_57 = (MR_Integer) (HeadVar__2_50);

  succeeded = (CastX_56 == CastY_57);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Integer CastX_52 = (MR_Integer) (HeadVar__1_25);
    MR_Integer CastY_53 = (MR_Integer) (HeadVar__2_50);

    succeeded = (CastY_53 == CastX_52);
  }
  return succeeded;
}

static MR_bool MR_CALL 
var_use_analysis__IntroducedFrom__pred__average_var_use__169__1_2_p_0(
  MR_Word Type_6,
  MR_Word LambdaHeadVar__1_24)
{
  MR_bool succeeded;
  MR_Word TypeI_31 = ((MR_Unsigned) ((MR_hl_field(0, LambdaHeadVar__1_24, (MR_Integer) 2))) & (MR_Integer) 3);

  succeeded = (Type_6 == TypeI_31);
  return succeeded;
}

void MR_CALL 
var_use_analysis____Compare____var_use_type_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

MR_bool MR_CALL 
var_use_analysis____Unify____var_use_type_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
var_use_analysis____Compare____var_use_info_0_0(
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
    MR_Float ArgX1_4 = MR_unbox_float((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0)));
    MR_Float ArgY1_5 = MR_unbox_float((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0)));
    MR_Float ArgX2_7 = MR_unbox_float((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1)));
    MR_Float ArgY2_8 = MR_unbox_float((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1)));
    MR_Word ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 3);
    MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))) & (MR_Integer) 3);
    MR_Word SubResult1_6;

    mercury__private_builtin__builtin_compare_float_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__private_builtin__builtin_compare_float_3_p_0(&SubResult2_9, ArgX2_7, ArgY2_8);
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
var_use_analysis____Unify____var_use_info_0_0(
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
    MR_Float ArgX1_3 = MR_unbox_float((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0)));
    MR_Float ArgY1_4 = MR_unbox_float((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0)));
    MR_Float ArgX2_5 = MR_unbox_float((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1)));
    MR_Float ArgY2_6 = MR_unbox_float((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1)));
    MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))) & (MR_Integer) 3);
    MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 3);

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
        succeeded = (ArgX3_7 == ArgY3_8);
    }
  }
  return succeeded;
}

static void MR_CALL 
var_use_analysis____Compare____var_first_use_static_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_36 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_37 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_36 == CastY_37);
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
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 4))));
    MR_Integer ArgX6_19 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Integer ArgY6_20 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 5))));
    MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))));
    MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 6))));
    MR_Word ArgX8_25 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))));
    MR_Word ArgY8_26 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 7))));
    MR_Word ArgX9_28 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 8))));
    MR_Word ArgY9_29 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 8))));
    MR_Word ArgX10_31 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 9))));
    MR_Word ArgY10_32 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 9))));
    MR_Word ArgX11_34 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 10))));
    MR_Word ArgY11_35 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 10))));
    MR_Word SubResult1_6;
    MR_Integer Var_49 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_50 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_49 < Var_50);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (Var_49 > Var_50);
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

      mercury__builtin__compare_3_p_0((MR_Word) (&var_use_analysis_scalar_common_2[1]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&var_use_analysis_scalar_common_2[6]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&var_use_analysis_scalar_common_2[5]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            mercury__builtin__compare_3_p_0((MR_Word) (&var_use_analysis_scalar_common_1[3]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              succeeded = (ArgX6_19 < ArgY6_20);
              if (succeeded)
              {
                SubResult6_21 = (MR_Integer) 1;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = (ArgX6_19 > ArgY6_20);
                if (succeeded)
                {
                  SubResult6_21 = (MR_Integer) 2;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = MR_TRUE;
                  succeeded = !(succeeded);
                  if (succeeded)
                  {
                    SubResult6_21 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                }
              }
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
              {
                MR_Word SubResult7_24;

                var_use_analysis____Compare____var_use_options_0_0(&SubResult7_24, ArgX7_22, ArgY7_23);
                succeeded = (SubResult7_24 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult7_24;
                else
                {
                  MR_Word SubResult8_27;

                  mercury__builtin__compare_3_p_0((MR_Word) (&var_use_analysis_scalar_common_1[5]), &SubResult8_27, ((MR_Box) (ArgX8_25)), ((MR_Box) (ArgY8_26)));
                  succeeded = (SubResult8_27 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult8_27;
                  else
                  {
                    MR_Word SubResult9_30;

                    report____Compare____recursion_type_0_0(&SubResult9_30, ArgX9_28, ArgY9_29);
                    succeeded = (SubResult9_30 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult9_30;
                    else
                    {
                      MR_Word SubResult10_33;

                      measurements____Compare____recursion_depth_0_0(&SubResult10_33, ArgX10_31, ArgY10_32);
                      succeeded = (SubResult10_33 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult10_33;
                      else
                        var_use_analysis____Compare____first_use_rec_info_0_0(HeadVar__1_1, ArgX11_34, ArgY11_35);
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
    MR_Word ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 3);
    MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))) & (MR_Integer) 3);
    MR_Word SubResult1_6;

    profile____Compare____deep_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      var_use_analysis____Compare____intermodule_var_use_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
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

static MR_bool MR_CALL 
var_use_analysis____Unify____var_first_use_static_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_25 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_26 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_25 == CastY_26);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_28_28;
    MR_Word TypeInfo_29_29;
    MR_Word TypeInfo_30_30;
    MR_Word TypeInfo_31_31;
    MR_Word TypeInfo_32_32;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Integer ArgX6_13 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 5))));
    MR_Integer ArgY6_14 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 6))));
    MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))));
    MR_Word ArgX8_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 7))));
    MR_Word ArgY8_18 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))));
    MR_Word ArgX9_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 8))));
    MR_Word ArgY9_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 8))));
    MR_Word ArgX10_21 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 9))));
    MR_Word ArgY10_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 9))));
    MR_Word ArgX11_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 10))));
    MR_Word ArgY11_24 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 10))));
    MR_Integer Var_35 = (MR_Integer) (ArgX1_3);
    MR_Integer Var_36 = (MR_Integer) (ArgY1_4);

    succeeded = (Var_35 == Var_36);
    if (succeeded)
    {
      TypeInfo_28_28 = (MR_Word) (&var_use_analysis_scalar_common_2[1]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_28_28, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        TypeInfo_29_29 = (MR_Word) (&var_use_analysis_scalar_common_2[6]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_29_29, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          TypeInfo_30_30 = (MR_Word) (&var_use_analysis_scalar_common_2[5]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_30_30, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
          {
            TypeInfo_31_31 = (MR_Word) (&var_use_analysis_scalar_common_1[3]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_31_31, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
            if (succeeded)
            {
              succeeded = (ArgX6_13 == ArgY6_14);
              if (succeeded)
              {
                succeeded = var_use_analysis____Unify____var_use_options_0_0(ArgX7_15, ArgY7_16);
                if (succeeded)
                {
                  TypeInfo_32_32 = (MR_Word) (&var_use_analysis_scalar_common_1[5]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_32_32, ((MR_Box) (ArgX8_17)), ((MR_Box) (ArgY8_18)));
                  if (succeeded)
                  {
                    succeeded = report____Unify____recursion_type_0_0(ArgX9_19, ArgY9_20);
                    if (succeeded)
                    {
                      succeeded = measurements____Unify____recursion_depth_0_0(ArgX10_21, ArgY10_22);
                      if (succeeded)
                        succeeded = var_use_analysis____Unify____first_use_rec_info_0_0(ArgX11_23, ArgY11_24);
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
  return succeeded;
}

MR_bool MR_CALL 
var_use_analysis____Unify____var_use_options_0_0(
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))) & (MR_Integer) 3);
    MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 3);

    succeeded = profile____Unify____deep_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = var_use_analysis____Unify____intermodule_var_use_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
        succeeded = (ArgX3_7 == ArgY3_8);
    }
  }
  return succeeded;
}

static void MR_CALL 
var_use_analysis____Compare____recursive_case_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

static MR_bool MR_CALL 
var_use_analysis____Unify____recursive_case_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
var_use_analysis____Compare____recursive_calls_list_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&var_use_analysis_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
var_use_analysis____Unify____recursive_calls_list_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&var_use_analysis_scalar_common_1[4]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
var_use_analysis____Compare____proc_var_first_use_prepared_info_0_0(
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
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    {
      MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
      MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));

      mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
    }
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Word ArgX1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX4_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 3))));
    MR_Word ArgX5_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgY5_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 4))));
    MR_Word ArgX6_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgY6_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 5))));
    MR_Integer ArgX7_24 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 6))));
    MR_Integer ArgY7_25 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 6))));
    MR_Word SubResult1_8;

    mercury__builtin__compare_3_p_0((MR_Word) (&var_use_analysis_scalar_common_1[2]), &SubResult1_8, ((MR_Box) (ArgX1_6)), ((MR_Box) (ArgY1_7)));
    succeeded = (SubResult1_8 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_8;
    else
    {
      MR_Word SubResult2_11;
      MR_Unsigned Var_36 = (MR_Unsigned) (ArgX2_9);
      MR_Unsigned Var_37 = (MR_Unsigned) (ArgY2_10);

      succeeded = (Var_36 < Var_37);
      if (succeeded)
      {
        SubResult2_11 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_36 > Var_37);
        if (succeeded)
        {
          SubResult2_11 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = MR_TRUE;
          succeeded = !(succeeded);
          if (succeeded)
          {
            SubResult2_11 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult2_11;
      else
      {
        MR_Word SubResult3_14;

        mercury__builtin__compare_3_p_0((MR_Word) (&var_use_analysis_scalar_common_2[5]), &SubResult3_14, ((MR_Box) (ArgX3_12)), ((MR_Box) (ArgY3_13)));
        succeeded = (SubResult3_14 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_14;
        else
        {
          MR_Word SubResult4_17;

          mercury__builtin__compare_3_p_0((MR_Word) (&var_use_analysis_scalar_common_1[3]), &SubResult4_17, ((MR_Box) (ArgX4_15)), ((MR_Box) (ArgY4_16)));
          succeeded = (SubResult4_17 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_17;
          else
          {
            MR_Word SubResult5_20;

            mercury__builtin__compare_3_p_0((MR_Word) (&var_use_analysis_scalar_common_2[1]), &SubResult5_20, ((MR_Box) (ArgX5_18)), ((MR_Box) (ArgY5_19)));
            succeeded = (SubResult5_20 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_20;
            else
            {
              MR_Word SubResult6_23;

              mercury__builtin__compare_3_p_0((MR_Word) (&var_use_analysis_scalar_common_2[6]), &SubResult6_23, ((MR_Box) (ArgX6_21)), ((MR_Box) (ArgY6_22)));
              succeeded = (SubResult6_23 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_23;
              else
              {
                succeeded = (ArgX7_24 < ArgY7_25);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 1;
                else
                {
                  succeeded = (ArgX7_24 > ArgY7_25);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 2;
                  else
                    *HeadVar__1_1 = (MR_Integer) 0;
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
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
  {
    MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_String ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
      succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
    }
  }
  else
  {
    MR_Word TypeInfo_21_21;
    MR_Word TypeInfo_23_23;
    MR_Word TypeInfo_24_24;
    MR_Word TypeInfo_25_25;
    MR_Word TypeInfo_26_26;
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_6;
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_8;
    MR_Word ArgX3_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_10;
    MR_Word ArgX4_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_12;
    MR_Word ArgX5_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 4))));
    MR_Word ArgY5_14;
    MR_Word ArgX6_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 5))));
    MR_Word ArgY6_16;
    MR_Integer ArgX7_17 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 6))));
    MR_Integer ArgY7_18;
    MR_Unsigned Var_27;
    MR_Unsigned Var_28;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      ArgY3_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
      ArgY4_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 3))));
      ArgY5_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 4))));
      ArgY6_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 5))));
      ArgY7_18 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 6))));
      TypeInfo_21_21 = (MR_Word) (&var_use_analysis_scalar_common_1[2]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_21_21, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
      if (succeeded)
      {
        Var_27 = (MR_Unsigned) (ArgX2_7);
        Var_28 = (MR_Unsigned) (ArgY2_8);
        succeeded = (Var_27 == Var_28);
        if (succeeded)
        {
          TypeInfo_23_23 = (MR_Word) (&var_use_analysis_scalar_common_2[5]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_23_23, ((MR_Box) (ArgX3_9)), ((MR_Box) (ArgY3_10)));
          if (succeeded)
          {
            TypeInfo_24_24 = (MR_Word) (&var_use_analysis_scalar_common_1[3]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_24_24, ((MR_Box) (ArgX4_11)), ((MR_Box) (ArgY4_12)));
            if (succeeded)
            {
              TypeInfo_25_25 = (MR_Word) (&var_use_analysis_scalar_common_2[1]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_25_25, ((MR_Box) (ArgX5_13)), ((MR_Box) (ArgY5_14)));
              if (succeeded)
              {
                TypeInfo_26_26 = (MR_Word) (&var_use_analysis_scalar_common_2[6]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_26_26, ((MR_Box) (ArgX6_15)), ((MR_Box) (ArgY6_16)));
                if (succeeded)
                  succeeded = (ArgX7_17 == ArgY7_18);
              }
            }
          }
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
var_use_analysis____Compare____intermodule_var_use_0_0(
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
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  else
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

    mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

MR_bool MR_CALL 
var_use_analysis____Unify____intermodule_var_use_0_0(
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
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_6 == CastX_5);
  }
  else
  {
    MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_String ArgY1_4;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
    }
  }
  return succeeded;
}

static void MR_CALL 
var_use_analysis____Compare____found_first_use_0_0(
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
    MR_Float ArgX1_4 = MR_unbox_float((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0)));
    MR_Float ArgY1_5 = MR_unbox_float((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0)));

    mercury__private_builtin__builtin_compare_float_3_p_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

static MR_bool MR_CALL 
var_use_analysis____Unify____found_first_use_0_0(
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
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_4 == CastX_3);
  }
  else
  {
    MR_Float ArgX1_5 = MR_unbox_float((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0)));
    MR_Float ArgY1_6;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_6 = MR_unbox_float((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0)));
      succeeded = (ArgX1_5 == ArgY1_6);
    }
  }
  return succeeded;
}

static void MR_CALL 
var_use_analysis____Compare____first_use_rec_info_0_0(
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
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  else
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&var_use_analysis_scalar_common_1[1]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Integer Var_13 = (MR_Integer) (ArgX2_7);
      MR_Integer Var_14 = (MR_Integer) (ArgY2_8);

      succeeded = (Var_13 < Var_14);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (Var_13 > Var_14);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 2;
        else
          *HeadVar__1_1 = (MR_Integer) 0;
      }
    }
  }
}

static MR_bool MR_CALL 
var_use_analysis____Unify____first_use_rec_info_0_0(
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
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_8 == CastX_7);
  }
  else
  {
    MR_Word TypeInfo_11_11;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4;
    MR_Word ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word ArgY2_6;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
      TypeInfo_11_11 = (MR_Word) (&var_use_analysis_scalar_common_1[1]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
        succeeded = (ArgX2_5 == ArgY2_6);
    }
  }
  return succeeded;
}

static void MR_CALL 
var_use_analysis__adjust_weight_for_recursion_4_p_0(
  MR_Word RecCase_5,
  MR_Float RecProb_6,
  MR_Float STATE_VARIABLE_Weight_0_9,
  MR_Float * STATE_VARIABLE_Weight_10)
{
  MR_Float Prob_8;
  MR_Float Var_12;

  switch (RecCase_5) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      Prob_8 = measurement_units__not_probability_1_f_0(RecProb_6);
      break;
    case (MR_Integer) 0:
      Prob_8 = RecProb_6;
      break;
  }
  Var_12 = measurement_units__probability_to_float_1_f_0(Prob_8);
  *STATE_VARIABLE_Weight_10 = (STATE_VARIABLE_Weight_0_9 * Var_12);
}

static void MR_CALL 
var_use_analysis__get_call_site_dynamic_var_use_time_9_p_0(
  MR_Word CliquePtr_10,
  MR_Word CSDPtr_11,
  MR_Word RecursionType_12,
  MR_Word CurDepth_13,
  MR_Float Cost_14,
  MR_Word CallStack_15,
  MR_Word VarUseOptions_16,
  MR_Integer ArgNum_17,
  MR_Float * Time_18)
{
  MR_Word MaybeVarUseInfo_19;
  MR_Word Var_25;

  {
    Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_25, 0) = ((MR_Box) (CurDepth_13));
  }
  var_use_analysis__get_call_site_dynamic_var_use_info_rec_level_9_p_1(CliquePtr_10, CSDPtr_11, ArgNum_17, RecursionType_12, Var_25, Cost_14, CallStack_15, VarUseOptions_16, &MaybeVarUseInfo_19);
  if (((MR_tag((MR_Word) MaybeVarUseInfo_19)) == (MR_Integer) 1))
  {
    MR_Word VarUseType_24 = ((MR_Unsigned) ((MR_hl_field(0, VarUseOptions_16, (MR_Integer) 2))) & (MR_Integer) 3);

    switch (VarUseType_24) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        *Time_18 = (MR_Float) 0.0000000000000000;
        break;
      case (MR_Integer) 2:
      case (MR_Integer) 0:
        *Time_18 = Cost_14;
        break;
    }
  }
  else
  {
    MR_Word VarUseInfo_20 = ((MR_Word) ((MR_hl_field(0, MaybeVarUseInfo_19, (MR_Integer) 0))));

    *Time_18 = MR_unbox_float((MR_hl_field(0, VarUseInfo_20, (MR_Integer) 0)));
  }
}

static void MR_CALL 
var_use_analysis__sum_use_info_costs_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Float STATE_VARIABLE_AccCost_0_11,
  MR_Float * STATE_VARIABLE_AccCost_12,
  MR_Float STATE_VARIABLE_AccProcCost_0_13,
  MR_Float * STATE_VARIABLE_AccProcCost_14)
{
  MR_Float Cost_6 = MR_unbox_float((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0)));
  MR_Float ProcCost_7 = MR_unbox_float((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1)));

  *STATE_VARIABLE_AccCost_12 = (STATE_VARIABLE_AccCost_0_11 + Cost_6);
  *STATE_VARIABLE_AccProcCost_14 = (STATE_VARIABLE_AccProcCost_0_13 + ProcCost_7);
}

void MR_CALL 
var_use_analysis__var_first_use_13_p_0(
  MR_Word CliquePtr_14,
  MR_Word CallSiteMap_15,
  MR_Word RecursiveCallSiteMap_16,
  MR_Word ContainingGoalMap_17,
  MR_Word CoverageArray_18,
  MR_Word RT_19,
  MR_Word CurDepth_20,
  MR_Word Goal_21,
  MR_Word RevGoalPath_22,
  MR_Float Cost_23,
  MR_Integer Var_24,
  MR_Word VarUseOptions_25,
  MR_Word * VarUseInfo_26)
{
  MR_Word FoundFirstUse_28;
  MR_Word VarUseType_29;
  MR_Word Var_30;
  MR_Word Var_32;
  MR_Float Var_27;

  Var_32 = mercury__set__init_0_f_0((MR_Word) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0));
  {
    Var_30 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_30, 0) = ((MR_Box) (CliquePtr_14));
    MR_hl_field(0, Var_30, 1) = ((MR_Box) (CallSiteMap_15));
    MR_hl_field(0, Var_30, 2) = ((MR_Box) (RecursiveCallSiteMap_16));
    MR_hl_field(0, Var_30, 3) = ((MR_Box) (ContainingGoalMap_17));
    MR_hl_field(0, Var_30, 4) = ((MR_Box) (CoverageArray_18));
    MR_hl_field(0, Var_30, 5) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_30, 6) = ((MR_Box) (VarUseOptions_25));
    MR_hl_field(0, Var_30, 7) = ((MR_Box) (Var_32));
    MR_hl_field(0, Var_30, 8) = ((MR_Box) (RT_19));
    MR_hl_field(0, Var_30, 9) = ((MR_Box) (CurDepth_20));
    MR_hl_field(0, Var_30, 10) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  var_use_analysis__goal_var_first_use_6_p_0(RevGoalPath_22, Goal_21, Var_30, (MR_Float) 0.0000000000000000, &Var_27, &FoundFirstUse_28);
  VarUseType_29 = ((MR_Unsigned) ((MR_hl_field(0, VarUseOptions_25, (MR_Integer) 2))) & (MR_Integer) 3);
  if ((FoundFirstUse_28 == (MR_Word) ((MR_Unsigned) 0U)))
    switch (VarUseType_29) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          *VarUseInfo_26 = base;
          MR_hl_field(0, base, 0) = MR_box_float(Cost_23);
          MR_hl_field(0, base, 1) = MR_box_float(Cost_23);
          MR_hl_field(0, base, 2) = (MR_Box) ((MR_Unsigned) (VarUseType_29));
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          *VarUseInfo_26 = base;
          MR_hl_field(0, base, 0) = MR_box_float(Cost_23);
          MR_hl_field(0, base, 1) = MR_box_float(Cost_23);
          MR_hl_field(0, base, 2) = (MR_Box) ((MR_Unsigned) (VarUseType_29));
        }
        break;
      case (MR_Integer) 0:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140var_use_analysis.found_first_use_to_use_info\'/4", (MR_String) "goal did not produce a variable that it should have");
          return;
        }
        break;
    }
  else
  {
    MR_Float CostUntilUse_37 = MR_unbox_float((MR_hl_field(1, FoundFirstUse_28, (MR_Integer) 0)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *VarUseInfo_26 = base;
      MR_hl_field(0, base, 0) = MR_box_float(CostUntilUse_37);
      MR_hl_field(0, base, 1) = MR_box_float(Cost_23);
      MR_hl_field(0, base, 2) = (MR_Box) ((MR_Unsigned) (VarUseType_29));
    }
  }
}

void MR_CALL 
var_use_analysis__get_call_site_dynamic_var_use_info_6_p_1(
  MR_Word CSDPtr_7,
  MR_Integer ArgNum_8,
  MR_Word RecursionType_9,
  MR_Float Cost_10,
  MR_Word VarUseOptions_11,
  MR_Word * MaybeVarUseInfo_12)
{
  MR_Word Deep_13 = ((MR_Word) ((MR_hl_field(0, VarUseOptions_11, (MR_Integer) 0))));
  MR_Word CSD_14;
  MR_Word ParentCliquePtr_15;
  MR_Word MaybeCurDepth_16;
  MR_Word Var_17;
  MR_Word Var_18;

  profile__deep_lookup_call_site_dynamics_3_p_0(Deep_13, CSDPtr_7, &CSD_14);
  Var_17 = ((MR_Word) ((MR_hl_field(0, CSD_14, (MR_Integer) 0))));
  profile__deep_lookup_clique_index_3_p_0(Deep_13, Var_17, &ParentCliquePtr_15);
  recursion_patterns__recursion_type_get_maybe_avg_max_depth_2_p_1(RecursionType_9, &MaybeCurDepth_16);
  Var_18 = mercury__set__init_0_f_0((MR_Word) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0));
  var_use_analysis__get_call_site_dynamic_var_use_info_rec_level_9_p_1(ParentCliquePtr_15, CSDPtr_7, ArgNum_8, RecursionType_9, MaybeCurDepth_16, Cost_10, Var_18, VarUseOptions_11, MaybeVarUseInfo_12);
}

void MR_CALL 
var_use_analysis__get_call_site_dynamic_var_use_info_rec_level_9_p_1(
  MR_Word ParentCliquePtr_10,
  MR_Word CSDPtr_11,
  MR_Integer ArgNum_12,
  MR_Word RecursionType_13,
  MR_Word MaybeDepth_14,
  MR_Float Cost_15,
  MR_Word CallStack0_16,
  MR_Word VarUseOptions_17,
  MR_Word * MaybeVarUseInfo_18)
{
  MR_bool succeeded;
  MR_Word Deep_19 = ((MR_Word) ((MR_hl_field(0, VarUseOptions_17, (MR_Integer) 0))));
  MR_Word MaybeCalleeCliquePtr_20;

  profile__deep_lookup_clique_maybe_child_3_p_0(Deep_19, CSDPtr_11, &MaybeCalleeCliquePtr_20);
  if ((MaybeCalleeCliquePtr_20 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word CSD_22;
    MR_Word CalleePDPtr_23;

    profile__deep_lookup_call_site_dynamics_3_p_0(Deep_19, CSDPtr_11, &CSD_22);
    CalleePDPtr_23 = ((MR_Word) ((MR_hl_field(0, CSD_22, (MR_Integer) 1))));
    succeeded = var_use_analysis__intermodule_var_use_should_follow_csd_2_p_0(VarUseOptions_17, CSDPtr_11);
    succeeded = !(succeeded);
    if (succeeded)
    {
      MR_Word VarUseInfo_24;
      MR_Word Var_45 = ((MR_Unsigned) ((MR_hl_field(0, VarUseOptions_17, (MR_Integer) 2))) & (MR_Integer) 3);
      MR_Float CostUntilUse_69;

      switch (Var_45) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          CostUntilUse_69 = (MR_Float) 0.0000000000000000;
          break;
        case (MR_Integer) 2:
        case (MR_Integer) 0:
          CostUntilUse_69 = Cost_15;
          break;
      }
      {
        VarUseInfo_24 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, VarUseInfo_24, 0) = MR_box_float(CostUntilUse_69);
        MR_hl_field(0, VarUseInfo_24, 1) = MR_box_float(Cost_15);
        MR_hl_field(0, VarUseInfo_24, 2) = (MR_Box) ((MR_Unsigned) (Var_45));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeVarUseInfo_18 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (VarUseInfo_24));
      }
    }
    else
    {
      succeeded = mercury__set__member_2_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0), ((MR_Box) (CalleePDPtr_23)), CallStack0_16);
      if (succeeded)
      {
        MR_Word Var_46;
        MR_Word Var_48 = ((MR_Unsigned) ((MR_hl_field(0, VarUseOptions_17, (MR_Integer) 2))) & (MR_Integer) 3);

        {
          Var_46 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_46, 0) = MR_box_float((MR_Float) 1.0000000000000000);
          MR_hl_field(0, Var_46, 1) = MR_box_float(Cost_15);
          MR_hl_field(0, Var_46, 2) = (MR_Box) ((MR_Unsigned) (Var_48));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeVarUseInfo_18 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_46));
        }
      }
      else
      if ((MaybeDepth_14 == (MR_Word) ((MR_Unsigned) 0U)))
        *MaybeVarUseInfo_18 = (MR_Word) (MR_mkword(1, &var_use_analysis_scalar_common_3[1]));
      else
      {
        MR_Word Depth0_25 = ((MR_Word) ((MR_hl_field(1, MaybeDepth_14, (MR_Integer) 0))));
        MR_Word Depth_26;

        measurements__recursion_depth_descend_2_p_0(Depth0_25, &Depth_26);
        switch (MR_tag((MR_Word) RecursionType_13)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              MR_Word CallStack_32;
              MR_Word MaybeVarUseInfo0_33;

              mercury__set__insert_3_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0), ((MR_Box) (CalleePDPtr_23)), CallStack0_16, &CallStack_32);
              var_use_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_99_117_114_115_105_118_101_95_118_97_114_95_117_115_101_95_105_110_102_111_95_95_91_54_93_95_48_9_p_0(ParentCliquePtr_10, CalleePDPtr_23, ArgNum_12, RecursionType_13, Depth_26, CallStack_32, VarUseOptions_17, &MaybeVarUseInfo0_33);
              if (((MR_tag((MR_Word) MaybeVarUseInfo0_33)) == (MR_Integer) 1))
                *MaybeVarUseInfo_18 = MaybeVarUseInfo0_33;
              else
              {
                MR_Float UseTime0_34;
                MR_Float ProcTime0_35;
                MR_Word UseType_36;
                MR_Float UseTime_37;
                MR_Float ProcTime_38;
                MR_Word Var_49 = ((MR_Word) ((MR_hl_field(0, MaybeVarUseInfo0_33, (MR_Integer) 0))));
                MR_Word Var_52;

                UseTime0_34 = MR_unbox_float((MR_hl_field(0, Var_49, (MR_Integer) 0)));
                ProcTime0_35 = MR_unbox_float((MR_hl_field(0, Var_49, (MR_Integer) 1)));
                UseType_36 = ((MR_Unsigned) ((MR_hl_field(0, Var_49, (MR_Integer) 2))) & (MR_Integer) 3);
                UseTime_37 = (UseTime0_34 + ((MR_Float) 1.0000000000000000));
                ProcTime_38 = (ProcTime0_35 + ((MR_Float) 1.0000000000000000));
                {
                  Var_52 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_52, 0) = MR_box_float(UseTime_37);
                  MR_hl_field(0, Var_52, 1) = MR_box_float(ProcTime_38);
                  MR_hl_field(0, Var_52, 2) = (MR_Box) ((MR_Unsigned) (UseType_36));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeVarUseInfo_18 = base;
                  MR_hl_field(0, base, 0) = ((MR_Box) (Var_52));
                }
              }
            }
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            *MaybeVarUseInfo_18 = (MR_Word) (MR_mkword(1, &var_use_analysis_scalar_common_3[2]));
            break;
        }
      }
    }
  }
  else
  {
    MR_Word CalleeCliquePtr_21 = ((MR_Word) ((MR_hl_field(1, MaybeCalleeCliquePtr_20, (MR_Integer) 0))));

    var_use_analysis__clique_var_use_info_4_p_0(CalleeCliquePtr_21, ArgNum_12, VarUseOptions_17, MaybeVarUseInfo_18);
  }
}

void MR_CALL 
var_use_analysis__get_call_site_dynamic_var_use_info_6_p_0(
  MR_Word CSDPtr_7,
  MR_Integer ArgNum_8,
  MR_Word RecursionType_9,
  MR_Float Cost_10,
  MR_Word VarUseOptions_11,
  MR_Word * MaybeVarUseInfo_12)
{
  MR_Word Deep_13 = ((MR_Word) ((MR_hl_field(0, VarUseOptions_11, (MR_Integer) 0))));
  MR_Word CSD_14;
  MR_Word ParentCliquePtr_15;
  MR_Word MaybeCurDepth_16;
  MR_Word Var_17;
  MR_Word Var_18;

  profile__deep_lookup_call_site_dynamics_3_p_0(Deep_13, CSDPtr_7, &CSD_14);
  Var_17 = ((MR_Word) ((MR_hl_field(0, CSD_14, (MR_Integer) 0))));
  profile__deep_lookup_clique_index_3_p_0(Deep_13, Var_17, &ParentCliquePtr_15);
  recursion_patterns__recursion_type_get_maybe_avg_max_depth_2_p_0(RecursionType_9, &MaybeCurDepth_16);
  Var_18 = mercury__set__init_0_f_0((MR_Word) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0));
  var_use_analysis__get_call_site_dynamic_var_use_info_rec_level_9_p_0(ParentCliquePtr_15, CSDPtr_7, ArgNum_8, RecursionType_9, MaybeCurDepth_16, Cost_10, Var_18, VarUseOptions_11, MaybeVarUseInfo_12);
}

void MR_CALL 
var_use_analysis__get_call_site_dynamic_var_use_info_rec_level_9_p_0(
  MR_Word ParentCliquePtr_10,
  MR_Word CSDPtr_11,
  MR_Integer ArgNum_12,
  MR_Word RecursionType_13,
  MR_Word MaybeDepth_14,
  MR_Float Cost_15,
  MR_Word CallStack0_16,
  MR_Word VarUseOptions_17,
  MR_Word * MaybeVarUseInfo_18)
{
  MR_bool succeeded;
  MR_Word Deep_19 = ((MR_Word) ((MR_hl_field(0, VarUseOptions_17, (MR_Integer) 0))));
  MR_Word MaybeCalleeCliquePtr_20;

  profile__deep_lookup_clique_maybe_child_3_p_0(Deep_19, CSDPtr_11, &MaybeCalleeCliquePtr_20);
  if ((MaybeCalleeCliquePtr_20 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word CSD_22;
    MR_Word CalleePDPtr_23;

    profile__deep_lookup_call_site_dynamics_3_p_0(Deep_19, CSDPtr_11, &CSD_22);
    CalleePDPtr_23 = ((MR_Word) ((MR_hl_field(0, CSD_22, (MR_Integer) 1))));
    succeeded = var_use_analysis__intermodule_var_use_should_follow_csd_2_p_0(VarUseOptions_17, CSDPtr_11);
    succeeded = !(succeeded);
    if (succeeded)
    {
      MR_Word VarUseInfo_24;
      MR_Word Var_45 = ((MR_Unsigned) ((MR_hl_field(0, VarUseOptions_17, (MR_Integer) 2))) & (MR_Integer) 3);
      MR_Float CostUntilUse_69;

      switch (Var_45) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          CostUntilUse_69 = (MR_Float) 0.0000000000000000;
          break;
        case (MR_Integer) 2:
        case (MR_Integer) 0:
          CostUntilUse_69 = Cost_15;
          break;
      }
      {
        VarUseInfo_24 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, VarUseInfo_24, 0) = MR_box_float(CostUntilUse_69);
        MR_hl_field(0, VarUseInfo_24, 1) = MR_box_float(Cost_15);
        MR_hl_field(0, VarUseInfo_24, 2) = (MR_Box) ((MR_Unsigned) (Var_45));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeVarUseInfo_18 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (VarUseInfo_24));
      }
    }
    else
    {
      succeeded = mercury__set__member_2_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0), ((MR_Box) (CalleePDPtr_23)), CallStack0_16);
      if (succeeded)
      {
        MR_Word Var_46;
        MR_Word Var_48 = ((MR_Unsigned) ((MR_hl_field(0, VarUseOptions_17, (MR_Integer) 2))) & (MR_Integer) 3);

        {
          Var_46 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_46, 0) = MR_box_float((MR_Float) 1.0000000000000000);
          MR_hl_field(0, Var_46, 1) = MR_box_float(Cost_15);
          MR_hl_field(0, Var_46, 2) = (MR_Box) ((MR_Unsigned) (Var_48));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeVarUseInfo_18 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_46));
        }
      }
      else
      {
        MR_Word Depth0_25 = ((MR_Word) ((MR_hl_field(1, MaybeDepth_14, (MR_Integer) 0))));
        MR_Word Depth_26;
        MR_Word CallStack_32;
        MR_Word MaybeVarUseInfo0_33;

        measurements__recursion_depth_descend_2_p_0(Depth0_25, &Depth_26);
        mercury__set__insert_3_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0), ((MR_Box) (CalleePDPtr_23)), CallStack0_16, &CallStack_32);
        var_use_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_99_117_114_115_105_118_101_95_118_97_114_95_117_115_101_95_105_110_102_111_95_95_91_54_93_95_48_9_p_0(ParentCliquePtr_10, CalleePDPtr_23, ArgNum_12, RecursionType_13, Depth_26, CallStack_32, VarUseOptions_17, &MaybeVarUseInfo0_33);
        if (((MR_tag((MR_Word) MaybeVarUseInfo0_33)) == (MR_Integer) 1))
          *MaybeVarUseInfo_18 = MaybeVarUseInfo0_33;
        else
        {
          MR_Float UseTime0_34;
          MR_Float ProcTime0_35;
          MR_Word UseType_36;
          MR_Float UseTime_37;
          MR_Float ProcTime_38;
          MR_Word Var_49 = ((MR_Word) ((MR_hl_field(0, MaybeVarUseInfo0_33, (MR_Integer) 0))));
          MR_Word Var_52;

          UseTime0_34 = MR_unbox_float((MR_hl_field(0, Var_49, (MR_Integer) 0)));
          ProcTime0_35 = MR_unbox_float((MR_hl_field(0, Var_49, (MR_Integer) 1)));
          UseType_36 = ((MR_Unsigned) ((MR_hl_field(0, Var_49, (MR_Integer) 2))) & (MR_Integer) 3);
          UseTime_37 = (UseTime0_34 + ((MR_Float) 1.0000000000000000));
          ProcTime_38 = (ProcTime0_35 + ((MR_Float) 1.0000000000000000));
          {
            Var_52 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_52, 0) = MR_box_float(UseTime_37);
            MR_hl_field(0, Var_52, 1) = MR_box_float(ProcTime_38);
            MR_hl_field(0, Var_52, 2) = (MR_Box) ((MR_Unsigned) (UseType_36));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeVarUseInfo_18 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_52));
          }
        }
      }
    }
  }
  else
  {
    MR_Word CalleeCliquePtr_21 = ((MR_Word) ((MR_hl_field(1, MaybeCalleeCliquePtr_20, (MR_Integer) 0))));

    var_use_analysis__clique_var_use_info_4_p_0(CalleeCliquePtr_21, ArgNum_12, VarUseOptions_17, MaybeVarUseInfo_18);
  }
}

void MR_CALL 
var_use_analysis__clique_var_use_info_4_p_0(
  MR_Word CliquePtr_5,
  MR_Integer ArgNum_6,
  MR_Word VarUseOptions_7,
  MR_Word * MaybeVarUseInfo_8)
{
  MR_bool succeeded;
  MR_Word Deep_9 = ((MR_Word) ((MR_hl_field(0, VarUseOptions_7, (MR_Integer) 0))));
  MR_Word CSDPtr_10;
  MR_Word CSDDesc_11;
  MR_Float Cost_12;
  MR_Word MaybeFirstProc_13;
  MR_Integer Var_40;
  MR_Word _OtherProcs_14;

  profile__deep_lookup_clique_parents_3_p_0(Deep_9, CliquePtr_5, &CSDPtr_10);
  profile__deep_lookup_csd_desc_3_p_0(Deep_9, CSDPtr_10, &CSDDesc_11);
  Var_40 = measurements__inherit_callseqs_1_f_0(CSDDesc_11);
  Cost_12 = mercury__float__float_1_f_0(Var_40);
  analysis_utils__find_clique_first_and_other_procs_4_p_0(Deep_9, CliquePtr_5, &MaybeFirstProc_13, &_OtherProcs_14);
  if ((MaybeFirstProc_13 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140var_use_analysis.clique_var_use_info\'/4", (MR_String) "clique has no first procedure");
      return;
    }
  else
  {
    MR_Word FirstPDPtr_15 = ((MR_Word) ((MR_hl_field(1, MaybeFirstProc_13, (MR_Integer) 0))));
    MR_Word VarUseType_16 = ((MR_Unsigned) ((MR_hl_field(0, VarUseOptions_7, (MR_Integer) 2))) & (MR_Integer) 3);

    succeeded = var_use_analysis__intermodule_var_use_should_follow_csd_2_p_0(VarUseOptions_7, CSDPtr_10);
    if (succeeded)
    {
      MR_Word MaybeRecursionReport_17;

      recursion_patterns__create_clique_recursion_costs_report_3_p_0(Deep_9, CliquePtr_5, &MaybeRecursionReport_17);
      if (((MR_tag((MR_Word) MaybeRecursionReport_17)) == (MR_Integer) 1))
      {
        MR_Word VarUseInfo_39;
        MR_Float CostUntilUse_95;

        switch (VarUseType_16) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            CostUntilUse_95 = (MR_Float) 0.0000000000000000;
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 0:
            CostUntilUse_95 = Cost_12;
            break;
        }
        {
          VarUseInfo_39 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, VarUseInfo_39, 0) = MR_box_float(CostUntilUse_95);
          MR_hl_field(0, VarUseInfo_39, 1) = MR_box_float(Cost_12);
          MR_hl_field(0, VarUseInfo_39, 2) = (MR_Box) ((MR_Unsigned) (VarUseType_16));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeVarUseInfo_8 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (VarUseInfo_39));
        }
      }
      else
      {
        MR_Word RecursionReport_18 = ((MR_Word) ((MR_hl_field(0, MaybeRecursionReport_17, (MR_Integer) 0))));
        MR_Word RecursionType_101 = ((MR_Word) ((MR_hl_field(0, RecursionReport_18, (MR_Integer) 1))));

        switch (MR_tag((MR_Word) RecursionType_101)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Depth_21;
              MR_Word MaybeVarUseInfo0_22;
              MR_Word Var_43;
              MR_Word Var_44;

              recursion_patterns__recursion_type_get_maybe_avg_max_depth_2_p_0(RecursionType_101, &Var_43);
              Depth_21 = ((MR_Word) ((MR_hl_field(1, Var_43, (MR_Integer) 0))));
              Var_44 = mercury__set__init_0_f_0((MR_Word) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0));
              var_use_analysis__proc_dynamic_var_use_info_9_p_0(CliquePtr_5, FirstPDPtr_15, ArgNum_6, RecursionType_101, Depth_21, Cost_12, Var_44, VarUseOptions_7, &MaybeVarUseInfo0_22);
              if (((MR_tag((MR_Word) MaybeVarUseInfo0_22)) == (MR_Integer) 1))
                *MaybeVarUseInfo_8 = MaybeVarUseInfo0_22;
              else
              {
                MR_Float UseTime0_28;
                MR_Float ProcTime0_29;
                MR_Word UseType_30;
                MR_Float UseTime_31;
                MR_Float ProcTime_32;
                MR_Word Var_47 = ((MR_Word) ((MR_hl_field(0, MaybeVarUseInfo0_22, (MR_Integer) 0))));
                MR_Word Var_50;

                UseTime0_28 = MR_unbox_float((MR_hl_field(0, Var_47, (MR_Integer) 0)));
                ProcTime0_29 = MR_unbox_float((MR_hl_field(0, Var_47, (MR_Integer) 1)));
                UseType_30 = ((MR_Unsigned) ((MR_hl_field(0, Var_47, (MR_Integer) 2))) & (MR_Integer) 3);
                UseTime_31 = (UseTime0_28 + ((MR_Float) 1.0000000000000000));
                ProcTime_32 = (ProcTime0_29 + ((MR_Float) 1.0000000000000000));
                {
                  Var_50 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_50, 0) = MR_box_float(UseTime_31);
                  MR_hl_field(0, Var_50, 1) = MR_box_float(ProcTime_32);
                  MR_hl_field(0, Var_50, 2) = (MR_Box) ((MR_Unsigned) (UseType_30));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeVarUseInfo_8 = base;
                  MR_hl_field(0, base, 0) = ((MR_Box) (Var_50));
                }
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_45;
              MR_Word Var_46;
              MR_Word Depth_53;
              MR_Word MaybeVarUseInfo0_84;

              recursion_patterns__recursion_type_get_maybe_avg_max_depth_2_p_0(RecursionType_101, &Var_45);
              Depth_53 = ((MR_Word) ((MR_hl_field(1, Var_45, (MR_Integer) 0))));
              Var_46 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0), ((MR_Box) (FirstPDPtr_15)));
              var_use_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_99_117_114_115_105_118_101_95_118_97_114_95_117_115_101_95_105_110_102_111_95_95_91_54_93_95_48_9_p_0(CliquePtr_5, FirstPDPtr_15, ArgNum_6, RecursionType_101, Depth_53, Var_46, VarUseOptions_7, &MaybeVarUseInfo0_84);
              if (((MR_tag((MR_Word) MaybeVarUseInfo0_84)) == (MR_Integer) 1))
                *MaybeVarUseInfo_8 = MaybeVarUseInfo0_84;
              else
              {
                MR_Float UseTime0_65;
                MR_Float ProcTime0_66;
                MR_Word UseType_67;
                MR_Float UseTime_68;
                MR_Float ProcTime_69;
                MR_Word Var_70 = ((MR_Word) ((MR_hl_field(0, MaybeVarUseInfo0_84, (MR_Integer) 0))));
                MR_Word Var_73;

                UseTime0_65 = MR_unbox_float((MR_hl_field(0, Var_70, (MR_Integer) 0)));
                ProcTime0_66 = MR_unbox_float((MR_hl_field(0, Var_70, (MR_Integer) 1)));
                UseType_67 = ((MR_Unsigned) ((MR_hl_field(0, Var_70, (MR_Integer) 2))) & (MR_Integer) 3);
                UseTime_68 = (UseTime0_65 + ((MR_Float) 1.0000000000000000));
                ProcTime_69 = (ProcTime0_66 + ((MR_Float) 1.0000000000000000));
                {
                  Var_73 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_73, 0) = MR_box_float(UseTime_68);
                  MR_hl_field(0, Var_73, 1) = MR_box_float(ProcTime_69);
                  MR_hl_field(0, Var_73, 2) = (MR_Box) ((MR_Unsigned) (UseType_67));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeVarUseInfo_8 = base;
                  MR_hl_field(0, base, 0) = ((MR_Box) (Var_73));
                }
              }
            }
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            {
              MR_Word VarUseInfo_97;
              MR_Float CostUntilUse_98;

              switch (VarUseType_16) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  CostUntilUse_98 = (MR_Float) 0.0000000000000000;
                  break;
                case (MR_Integer) 2:
                case (MR_Integer) 0:
                  CostUntilUse_98 = Cost_12;
                  break;
              }
              {
                VarUseInfo_97 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, VarUseInfo_97, 0) = MR_box_float(CostUntilUse_98);
                MR_hl_field(0, VarUseInfo_97, 1) = MR_box_float(Cost_12);
                MR_hl_field(0, VarUseInfo_97, 2) = (MR_Box) ((MR_Unsigned) (VarUseType_16));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *MaybeVarUseInfo_8 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (VarUseInfo_97));
              }
            }
            break;
        }
      }
    }
    else
    {
      MR_Word VarUseInfo_54;
      MR_Float CostUntilUse_96;

      switch (VarUseType_16) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          CostUntilUse_96 = (MR_Float) 0.0000000000000000;
          break;
        case (MR_Integer) 2:
        case (MR_Integer) 0:
          CostUntilUse_96 = Cost_12;
          break;
      }
      {
        VarUseInfo_54 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, VarUseInfo_54, 0) = MR_box_float(CostUntilUse_96);
        MR_hl_field(0, VarUseInfo_54, 1) = MR_box_float(Cost_12);
        MR_hl_field(0, VarUseInfo_54, 2) = (MR_Box) ((MR_Unsigned) (VarUseType_16));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeVarUseInfo_8 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (VarUseInfo_54));
      }
    }
  }
}

static void MR_CALL 
var_use_analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_99_117_114_115_105_118_101_95_118_97_114_95_117_115_101_95_105_110_102_111_95_95_91_54_93_95_48_9_p_0(
  MR_Word CliquePtr_10,
  MR_Word PDPtr_11,
  MR_Integer ArgNum_12,
  MR_Word RecursionType_13,
  MR_Word Depth_14,
  MR_Word CallStack_16,
  MR_Word VarUseOptions_17,
  MR_Word * MaybeVarUseInfo_18)
{
  MR_Word Info_19;

  var_use_analysis__prepare_for_proc_var_first_use_7_p_0(CliquePtr_10, PDPtr_11, ArgNum_12, RecursionType_13, Depth_14, VarUseOptions_17, &Info_19);
  if (((MR_tag((MR_Word) Info_19)) == (MR_Integer) 0))
  {
    MR_String Error_46 = ((MR_String) ((MR_hl_field(0, Info_19, (MR_Integer) 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeVarUseInfo_18 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Error_46));
    }
  }
  else
  {
    MR_Word Goal_20 = ((MR_Word) ((MR_hl_field(1, Info_19, (MR_Integer) 0))));
    MR_Word LastGoalId_21 = ((MR_Word) ((MR_hl_field(1, Info_19, (MR_Integer) 1))));
    MR_Word ContainingGoalMap_22 = ((MR_Word) ((MR_hl_field(1, Info_19, (MR_Integer) 2))));
    MR_Word CoverageArray_23 = ((MR_Word) ((MR_hl_field(1, Info_19, (MR_Integer) 3))));
    MR_Word CallSiteCostMap_24 = ((MR_Word) ((MR_hl_field(1, Info_19, (MR_Integer) 4))));
    MR_Word RecursiveCallSiteCostMap_25 = ((MR_Word) ((MR_hl_field(1, Info_19, (MR_Integer) 5))));
    MR_Integer Var_26 = ((MR_Integer) ((MR_hl_field(1, Info_19, (MR_Integer) 6))));
    MR_Word VarUseInfo_27;
    MR_Word RecProbsArray0_28;
    MR_Word RecursiveCalls_29;
    MR_Float RecProb_30;
    MR_Word RecProbsArray_31;
    MR_Word VarFirstUseInfoRecCase_32;
    MR_Word RecFoundFirstUse_33;
    MR_Float RecTotalTime_34;
    MR_Word VarFirstUseInfoBaseCase_35;
    MR_Word BaseFoundFirstUse_36;
    MR_Float BaseTotalTime_37;
    MR_Word VarUseType_38;
    MR_Float VarUseTimeRec_39;
    MR_Float VarUseTimeBase_40;
    MR_Float DepthF_41;
    MR_Float VarUseTime_42;
    MR_Float Cost_43;
    MR_Float Var_48;
    MR_Word Var_49;
    MR_Word Var_52;
    MR_Float Var_55;
    MR_Float Var_56;
    MR_Float Var_57;
    MR_Float Var_58;
    MR_Float Var_59;
    MR_Float Var_60;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word Var_78;
    MR_Word Var_79;
    MR_Word Var_80;
    MR_Word Var_81;
    MR_Word Var_82;
    MR_Integer Var_83;
    MR_Word Var_84;
    MR_Word Var_85;
    MR_Word Var_86;
    MR_Word Var_87;
    MR_Word Var_89;
    MR_Word Var_90;
    MR_Word Var_91;
    MR_Word Var_92;
    MR_Word Var_93;
    MR_Integer Var_94;
    MR_Word Var_95;
    MR_Word Var_96;
    MR_Word Var_97;
    MR_Word Var_98;

    {
      VarUseInfo_27 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, VarUseInfo_27, 0) = ((MR_Box) (CliquePtr_10));
      MR_hl_field(0, VarUseInfo_27, 1) = ((MR_Box) (CallSiteCostMap_24));
      MR_hl_field(0, VarUseInfo_27, 2) = ((MR_Box) (RecursiveCallSiteCostMap_25));
      MR_hl_field(0, VarUseInfo_27, 3) = ((MR_Box) (ContainingGoalMap_22));
      MR_hl_field(0, VarUseInfo_27, 4) = ((MR_Box) (CoverageArray_23));
      MR_hl_field(0, VarUseInfo_27, 5) = ((MR_Box) (Var_26));
      MR_hl_field(0, VarUseInfo_27, 6) = ((MR_Box) (VarUseOptions_17));
      MR_hl_field(0, VarUseInfo_27, 7) = ((MR_Box) (CallStack_16));
      MR_hl_field(0, VarUseInfo_27, 8) = ((MR_Box) (RecursionType_13));
      MR_hl_field(0, VarUseInfo_27, 9) = ((MR_Box) (Depth_14));
      MR_hl_field(0, VarUseInfo_27, 10) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_48 = measurement_units__impossible_0_f_0();
    RecProbsArray0_28 = mdbcomp__goal_path__create_goal_id_array_2_f_0((MR_Word) (&measurement_units__measurement_units__type_ctor_info_probability_0), LastGoalId_21, MR_box_float(Var_48));
    var_use_analysis__build_recursive_call_sites_list_2_p_0(RecursiveCallSiteCostMap_25, &RecursiveCalls_29);
    var_use_analysis__goal_rec_prob_6_p_0(Goal_20, RecursiveCalls_29, VarUseInfo_27, &RecProb_30, RecProbsArray0_28, &RecProbsArray_31);
    {
      Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_49, 0) = ((MR_Box) (RecProbsArray_31));
      MR_hl_field(1, Var_49, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    Var_78 = ((MR_Word) ((MR_hl_field(0, VarUseInfo_27, (MR_Integer) 0))));
    Var_79 = ((MR_Word) ((MR_hl_field(0, VarUseInfo_27, (MR_Integer) 1))));
    Var_80 = ((MR_Word) ((MR_hl_field(0, VarUseInfo_27, (MR_Integer) 2))));
    Var_81 = ((MR_Word) ((MR_hl_field(0, VarUseInfo_27, (MR_Integer) 3))));
    Var_82 = ((MR_Word) ((MR_hl_field(0, VarUseInfo_27, (MR_Integer) 4))));
    Var_83 = ((MR_Integer) ((MR_hl_field(0, VarUseInfo_27, (MR_Integer) 5))));
    Var_84 = ((MR_Word) ((MR_hl_field(0, VarUseInfo_27, (MR_Integer) 6))));
    Var_85 = ((MR_Word) ((MR_hl_field(0, VarUseInfo_27, (MR_Integer) 7))));
    Var_86 = ((MR_Word) ((MR_hl_field(0, VarUseInfo_27, (MR_Integer) 8))));
    Var_87 = ((MR_Word) ((MR_hl_field(0, VarUseInfo_27, (MR_Integer) 9))));
    {
      VarFirstUseInfoRecCase_32 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, VarFirstUseInfoRecCase_32, 0) = ((MR_Box) (Var_78));
      MR_hl_field(0, VarFirstUseInfoRecCase_32, 1) = ((MR_Box) (Var_79));
      MR_hl_field(0, VarFirstUseInfoRecCase_32, 2) = ((MR_Box) (Var_80));
      MR_hl_field(0, VarFirstUseInfoRecCase_32, 3) = ((MR_Box) (Var_81));
      MR_hl_field(0, VarFirstUseInfoRecCase_32, 4) = ((MR_Box) (Var_82));
      MR_hl_field(0, VarFirstUseInfoRecCase_32, 5) = ((MR_Box) (Var_83));
      MR_hl_field(0, VarFirstUseInfoRecCase_32, 6) = ((MR_Box) (Var_84));
      MR_hl_field(0, VarFirstUseInfoRecCase_32, 7) = ((MR_Box) (Var_85));
      MR_hl_field(0, VarFirstUseInfoRecCase_32, 8) = ((MR_Box) (Var_86));
      MR_hl_field(0, VarFirstUseInfoRecCase_32, 9) = ((MR_Box) (Var_87));
      MR_hl_field(0, VarFirstUseInfoRecCase_32, 10) = ((MR_Box) (Var_49));
    }
    var_use_analysis__rec_goal_var_first_use_6_p_0(Goal_20, RecursiveCalls_29, VarFirstUseInfoRecCase_32, &RecFoundFirstUse_33, (MR_Float) 0.0000000000000000, &RecTotalTime_34);
    {
      Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_52, 0) = ((MR_Box) (RecProbsArray_31));
      MR_hl_field(1, Var_52, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    }
    Var_89 = ((MR_Word) ((MR_hl_field(0, VarUseInfo_27, (MR_Integer) 0))));
    Var_90 = ((MR_Word) ((MR_hl_field(0, VarUseInfo_27, (MR_Integer) 1))));
    Var_91 = ((MR_Word) ((MR_hl_field(0, VarUseInfo_27, (MR_Integer) 2))));
    Var_92 = ((MR_Word) ((MR_hl_field(0, VarUseInfo_27, (MR_Integer) 3))));
    Var_93 = ((MR_Word) ((MR_hl_field(0, VarUseInfo_27, (MR_Integer) 4))));
    Var_94 = ((MR_Integer) ((MR_hl_field(0, VarUseInfo_27, (MR_Integer) 5))));
    Var_95 = ((MR_Word) ((MR_hl_field(0, VarUseInfo_27, (MR_Integer) 6))));
    Var_96 = ((MR_Word) ((MR_hl_field(0, VarUseInfo_27, (MR_Integer) 7))));
    Var_97 = ((MR_Word) ((MR_hl_field(0, VarUseInfo_27, (MR_Integer) 8))));
    Var_98 = ((MR_Word) ((MR_hl_field(0, VarUseInfo_27, (MR_Integer) 9))));
    {
      VarFirstUseInfoBaseCase_35 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, VarFirstUseInfoBaseCase_35, 0) = ((MR_Box) (Var_89));
      MR_hl_field(0, VarFirstUseInfoBaseCase_35, 1) = ((MR_Box) (Var_90));
      MR_hl_field(0, VarFirstUseInfoBaseCase_35, 2) = ((MR_Box) (Var_91));
      MR_hl_field(0, VarFirstUseInfoBaseCase_35, 3) = ((MR_Box) (Var_92));
      MR_hl_field(0, VarFirstUseInfoBaseCase_35, 4) = ((MR_Box) (Var_93));
      MR_hl_field(0, VarFirstUseInfoBaseCase_35, 5) = ((MR_Box) (Var_94));
      MR_hl_field(0, VarFirstUseInfoBaseCase_35, 6) = ((MR_Box) (Var_95));
      MR_hl_field(0, VarFirstUseInfoBaseCase_35, 7) = ((MR_Box) (Var_96));
      MR_hl_field(0, VarFirstUseInfoBaseCase_35, 8) = ((MR_Box) (Var_97));
      MR_hl_field(0, VarFirstUseInfoBaseCase_35, 9) = ((MR_Box) (Var_98));
      MR_hl_field(0, VarFirstUseInfoBaseCase_35, 10) = ((MR_Box) (Var_52));
    }
    var_use_analysis__rec_goal_var_first_use_6_p_0(Goal_20, RecursiveCalls_29, VarFirstUseInfoBaseCase_35, &BaseFoundFirstUse_36, (MR_Float) 0.0000000000000000, &BaseTotalTime_37);
    VarUseType_38 = ((MR_Unsigned) ((MR_hl_field(0, VarUseOptions_17, (MR_Integer) 2))) & (MR_Integer) 3);
    if ((RecFoundFirstUse_33 == (MR_Word) ((MR_Unsigned) 0U)))
      switch (VarUseType_38) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          VarUseTimeRec_39 = (MR_Float) 0.0000000000000000;
          break;
        case (MR_Integer) 2:
        case (MR_Integer) 0:
          VarUseTimeRec_39 = RecTotalTime_34;
          break;
      }
    else
      VarUseTimeRec_39 = MR_unbox_float((MR_hl_field(1, RecFoundFirstUse_33, (MR_Integer) 0)));
    if ((BaseFoundFirstUse_36 == (MR_Word) ((MR_Unsigned) 0U)))
      switch (VarUseType_38) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          VarUseTimeBase_40 = (MR_Float) 0.0000000000000000;
          break;
        case (MR_Integer) 2:
        case (MR_Integer) 0:
          VarUseTimeBase_40 = BaseTotalTime_37;
          break;
      }
    else
      VarUseTimeBase_40 = MR_unbox_float((MR_hl_field(1, BaseFoundFirstUse_36, (MR_Integer) 0)));
    DepthF_41 = measurements__recursion_depth_to_float_1_f_0(Depth_14);
    Var_55 = (DepthF_41 * VarUseTimeRec_39);
    VarUseTime_42 = (VarUseTimeBase_40 + Var_55);
    Var_57 = measurement_units__probability_to_float_1_f_0(RecProb_30);
    Var_56 = (RecTotalTime_34 * Var_57);
    Var_60 = measurement_units__not_probability_1_f_0(RecProb_30);
    Var_59 = measurement_units__probability_to_float_1_f_0(Var_60);
    Var_58 = (BaseTotalTime_37 * Var_59);
    Cost_43 = (Var_56 + Var_58);
    Var_62 = ((MR_Unsigned) ((MR_hl_field(0, VarUseOptions_17, (MR_Integer) 2))) & (MR_Integer) 3);
    {
      Var_61 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_61, 0) = MR_box_float(VarUseTime_42);
      MR_hl_field(0, Var_61, 1) = MR_box_float(Cost_43);
      MR_hl_field(0, Var_61, 2) = (MR_Box) ((MR_Unsigned) (Var_62));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeVarUseInfo_18 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_61));
    }
  }
}

static MR_bool MR_CALL 
var_use_analysis__switch_rec_prob_2_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_14;

  succeeded = var_use_analysis__IntroducedFrom__pred__filter_recursive_call_sites__1256__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_14);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_14));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
var_use_analysis__switch_rec_prob_2_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer CaseNum_2,
  MR_Integer TotalCalls_3,
  MR_Word RecCalls_4,
  MR_Word Info_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_ProbArray_0_8,
  MR_Word * STATE_VARIABLE_ProbArray_9)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_ProbArray_9 = STATE_VARIABLE_ProbArray_0_8;
  }
  else
  {
    MR_Word Case_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Cases_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Probs0_26;
    MR_Word Weights0_27;
    MR_Word Goal_30;
    MR_Word CaseRecCalls_31;
    MR_Float Prob_32;
    MR_Word GoalId_35;
    MR_Word Coverage_36;
    MR_Integer Before_37;
    MR_Float Weight_38;
    MR_Integer Var_41 = (MR_Integer) ((MR_Unsigned) CaseNum_2 + (MR_Unsigned) 1);
    MR_Word STATE_VARIABLE_ProbArray_42_42;
    MR_Word Var_44;
    MR_Word Var_47;
    MR_Float Var_48;
    MR_Float Var_49;
    MR_Word Var_61;
    MR_Box conv1_Coverage_36;

    var_use_analysis__switch_rec_prob_2_9_p_0(Cases_18, Var_41, TotalCalls_3, RecCalls_4, Info_5, &Probs0_26, &Weights0_27, STATE_VARIABLE_ProbArray_0_8, &STATE_VARIABLE_ProbArray_42_42);
    Goal_30 = ((MR_Word) ((MR_hl_field(0, Case_17, (MR_Integer) 2))));
    {
      Var_44 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_44, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_44, 1) = ((MR_Box) (CaseNum_2));
      MR_hl_field(3, Var_44, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_61 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_61, 0) = ((MR_Box) (&var_use_analysis_scalar_common_9[1]));
      MR_hl_field(0, Var_61, 1) = ((MR_Box) (var_use_analysis__switch_rec_prob_2_9_p_0_1));
      MR_hl_field(0, Var_61, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_61, 3) = ((MR_Box) (Var_44));
    }
    mercury__list__filter_map_3_p_0((MR_Word) (&var_use_analysis_scalar_common_2[4]), (MR_Word) (&var_use_analysis_scalar_common_2[4]), Var_61, RecCalls_4, &CaseRecCalls_31);
    var_use_analysis__goal_rec_prob_6_p_0(Goal_30, CaseRecCalls_31, Info_5, &Prob_32, STATE_VARIABLE_ProbArray_42_42, STATE_VARIABLE_ProbArray_9);
    GoalId_35 = ((MR_Word) ((MR_hl_field(0, Goal_30, (MR_Integer) 2))));
    Var_47 = ((MR_Word) ((MR_hl_field(0, Info_5, (MR_Integer) 4))));
    conv1_Coverage_36 = mdbcomp__goal_path__get_goal_attribute_det_2_f_0((MR_Word) (&coverage__coverage__type_ctor_info_coverage_info_0), Var_47, GoalId_35);
    Coverage_36 = ((MR_Word) (conv1_Coverage_36));
    coverage__get_coverage_before_det_2_p_0(Coverage_36, &Before_37);
    Var_48 = mercury__float__float_1_f_0(Before_37);
    Var_49 = mercury__float__float_1_f_0(TotalCalls_3);
    Weight_38 = mercury__float__f_slash_2_f_0(Var_48, Var_49);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__6_6 = base;
      MR_hl_field(1, base, 0) = MR_box_float(Prob_32);
      MR_hl_field(1, base, 1) = ((MR_Box) (Probs0_26));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__7_7 = base;
      MR_hl_field(1, base, 0) = MR_box_float(Weight_38);
      MR_hl_field(1, base, 1) = ((MR_Box) (Weights0_27));
    }
  }
}

static MR_Box MR_CALL 
var_use_analysis__switch_rec_prob_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Float conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = measurement_units__probability_to_float_1_f_0(MR_unbox_float(wrapper_arg_1));
  wrapper_arg_2 = MR_box_float(conv0_HeadVar__2_2);
  return wrapper_arg_2;
}

static void MR_CALL 
var_use_analysis__switch_rec_prob_7_p_0(
  MR_Word Cases_8,
  MR_Integer TotalCalls_9,
  MR_Word RecCalls_10,
  MR_Word Info_11,
  MR_Float * Prob_12,
  MR_Word STATE_VARIABLE_ProbArray_0_17,
  MR_Word * STATE_VARIABLE_ProbArray_18)
{
  MR_Word Probs_14;
  MR_Word Weights_15;
  MR_Float ProbFloat_16;
  MR_Word Var_21;

  var_use_analysis__switch_rec_prob_2_9_p_0(Cases_8, (MR_Integer) 1, TotalCalls_9, RecCalls_10, Info_11, &Probs_14, &Weights_15, STATE_VARIABLE_ProbArray_0_17, STATE_VARIABLE_ProbArray_18);
  Var_21 = mercury__list__map_2_f_0((MR_Word) (&measurement_units__measurement_units__type_ctor_info_probability_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_float_0), (MR_Word) (&var_use_analysis_scalar_common_2[11]), Probs_14);
  measurements__weighted_average_3_p_0(Weights_15, Var_21, &ProbFloat_16);
  *Prob_12 = measurement_units__probable_1_f_0(ProbFloat_16);
}

static MR_bool MR_CALL 
var_use_analysis__disj_rec_prob_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv1_LambdaHeadVar__2_14;

  succeeded = var_use_analysis__IntroducedFrom__pred__filter_recursive_call_sites__1256__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_LambdaHeadVar__2_14);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_14));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
var_use_analysis__disj_rec_prob_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer DisjNum_2,
  MR_Word RecCalls_3,
  MR_Word Info_4,
  MR_Float * HeadVar__5_5,
  MR_Word STATE_VARIABLE_ProbArray_0_6,
  MR_Word * STATE_VARIABLE_ProbArray_7)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__5_5 = measurement_units__impossible_0_f_0();
    *STATE_VARIABLE_ProbArray_7 = STATE_VARIABLE_ProbArray_0_6;
  }
  else
  {
    MR_Word Disj_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Disjs_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word DisjId_21 = ((MR_Word) ((MR_hl_field(0, Disj_14, (MR_Integer) 2))));
    MR_Word Coverage_22;
    MR_Integer Before_23;
    MR_Integer After_24;
    MR_Word Var_32 = ((MR_Word) ((MR_hl_field(0, Info_4, (MR_Integer) 4))));
    MR_Box conv0_Coverage_22;

    conv0_Coverage_22 = mdbcomp__goal_path__get_goal_attribute_det_2_f_0((MR_Word) (&coverage__coverage__type_ctor_info_coverage_info_0), Var_32, DisjId_21);
    Coverage_22 = ((MR_Word) (conv0_Coverage_22));
    coverage__get_coverage_before_and_after_det_3_p_0(Coverage_22, &Before_23, &After_24);
    succeeded = (Before_23 == (MR_Integer) 0);
    if (succeeded)
    {
      *HeadVar__5_5 = measurement_units__impossible_0_f_0();
      *STATE_VARIABLE_ProbArray_7 = STATE_VARIABLE_ProbArray_0_6;
    }
    else
    {
      MR_Float DisjsProb0_25;
      MR_Float FailureProb_26;
      MR_Float DisjsProb_27;
      MR_Word DisjRecCalls_28;
      MR_Float DisjProb_29;
      MR_Integer Var_33 = (MR_Integer) ((MR_Unsigned) DisjNum_2 + (MR_Unsigned) 1);
      MR_Word STATE_VARIABLE_ProbArray_34_34;
      MR_Float Var_36;
      MR_Float Var_37;
      MR_Integer Var_38;
      MR_Float Var_39;
      MR_Word Var_40;
      MR_Word Var_54;

      var_use_analysis__disj_rec_prob_7_p_0(Disjs_15, Var_33, RecCalls_3, Info_4, &DisjsProb0_25, STATE_VARIABLE_ProbArray_0_6, &STATE_VARIABLE_ProbArray_34_34);
      Var_38 = (MR_Integer) ((MR_Unsigned) Before_23 - (MR_Unsigned) After_24);
      Var_37 = mercury__float__float_1_f_0(Var_38);
      Var_39 = mercury__float__float_1_f_0(Before_23);
      Var_36 = mercury__float__f_slash_2_f_0(Var_37, Var_39);
      FailureProb_26 = measurement_units__probable_1_f_0(Var_36);
      DisjsProb_27 = measurement_units__and_2_f_0(FailureProb_26, DisjsProb0_25);
      {
        Var_40 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Var_40, 0) = ((MR_Box) (DisjNum_2));
      }
      {
        Var_54 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_54, 0) = ((MR_Box) (&var_use_analysis_scalar_common_9[1]));
        MR_hl_field(0, Var_54, 1) = ((MR_Box) (var_use_analysis__disj_rec_prob_7_p_0_1));
        MR_hl_field(0, Var_54, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_54, 3) = ((MR_Box) (Var_40));
      }
      mercury__list__filter_map_3_p_0((MR_Word) (&var_use_analysis_scalar_common_2[4]), (MR_Word) (&var_use_analysis_scalar_common_2[4]), Var_54, RecCalls_3, &DisjRecCalls_28);
      var_use_analysis__goal_rec_prob_6_p_0(Disj_14, DisjRecCalls_28, Info_4, &DisjProb_29, STATE_VARIABLE_ProbArray_34_34, STATE_VARIABLE_ProbArray_7);
      *HeadVar__5_5 = measurement_units__or_2_f_0(DisjProb_29, DisjsProb_27);
    }
  }
}

static MR_bool MR_CALL 
var_use_analysis__conj_rec_prob_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv1_LambdaHeadVar__2_14;

  succeeded = var_use_analysis__IntroducedFrom__pred__filter_recursive_call_sites__1256__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_LambdaHeadVar__2_14);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_14));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
var_use_analysis__conj_rec_prob_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer ConjNum_2,
  MR_Word RecCalls_3,
  MR_Word Info_4,
  MR_Float * HeadVar__5_5,
  MR_Word STATE_VARIABLE_ProbArray_0_6,
  MR_Word * STATE_VARIABLE_ProbArray_7)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__5_5 = measurement_units__impossible_0_f_0();
    *STATE_VARIABLE_ProbArray_7 = STATE_VARIABLE_ProbArray_0_6;
  }
  else
  {
    MR_Word Conj_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Conjs_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ConjId_21 = ((MR_Word) ((MR_hl_field(0, Conj_14, (MR_Integer) 2))));
    MR_Word Coverage_22;
    MR_Integer Before_23;
    MR_Integer After_24;
    MR_Word Var_32 = ((MR_Word) ((MR_hl_field(0, Info_4, (MR_Integer) 4))));
    MR_Box conv0_Coverage_22;

    conv0_Coverage_22 = mdbcomp__goal_path__get_goal_attribute_det_2_f_0((MR_Word) (&coverage__coverage__type_ctor_info_coverage_info_0), Var_32, ConjId_21);
    Coverage_22 = ((MR_Word) (conv0_Coverage_22));
    coverage__get_coverage_before_and_after_det_3_p_0(Coverage_22, &Before_23, &After_24);
    succeeded = (Before_23 == (MR_Integer) 0);
    if (succeeded)
    {
      *HeadVar__5_5 = measurement_units__impossible_0_f_0();
      *STATE_VARIABLE_ProbArray_7 = STATE_VARIABLE_ProbArray_0_6;
    }
    else
    {
      MR_Float ConjsProb0_25;
      MR_Float SuccessProb_26;
      MR_Float ConjsProb_27;
      MR_Word ConjRecCalls_28;
      MR_Float ConjProb_29;
      MR_Integer Var_33 = (MR_Integer) ((MR_Unsigned) ConjNum_2 + (MR_Unsigned) 1);
      MR_Word STATE_VARIABLE_ProbArray_34_34;
      MR_Float Var_36;
      MR_Float Var_37;
      MR_Float Var_38;
      MR_Word Var_39;
      MR_Word Var_53;

      var_use_analysis__conj_rec_prob_7_p_0(Conjs_15, Var_33, RecCalls_3, Info_4, &ConjsProb0_25, STATE_VARIABLE_ProbArray_0_6, &STATE_VARIABLE_ProbArray_34_34);
      Var_37 = mercury__float__float_1_f_0(After_24);
      Var_38 = mercury__float__float_1_f_0(Before_23);
      Var_36 = mercury__float__f_slash_2_f_0(Var_37, Var_38);
      SuccessProb_26 = measurement_units__probable_1_f_0(Var_36);
      ConjsProb_27 = measurement_units__and_2_f_0(SuccessProb_26, ConjsProb0_25);
      {
        Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_39, 0) = ((MR_Box) (ConjNum_2));
      }
      {
        Var_53 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_53, 0) = ((MR_Box) (&var_use_analysis_scalar_common_9[1]));
        MR_hl_field(0, Var_53, 1) = ((MR_Box) (var_use_analysis__conj_rec_prob_7_p_0_1));
        MR_hl_field(0, Var_53, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_53, 3) = ((MR_Box) (Var_39));
      }
      mercury__list__filter_map_3_p_0((MR_Word) (&var_use_analysis_scalar_common_2[4]), (MR_Word) (&var_use_analysis_scalar_common_2[4]), Var_53, RecCalls_3, &ConjRecCalls_28);
      var_use_analysis__goal_rec_prob_6_p_0(Conj_14, ConjRecCalls_28, Info_4, &ConjProb_29, STATE_VARIABLE_ProbArray_34_34, STATE_VARIABLE_ProbArray_7);
      *HeadVar__5_5 = measurement_units__or_2_f_0(ConjProb_29, ConjsProb_27);
    }
  }
}

static MR_bool MR_CALL 
var_use_analysis__goal_rec_prob_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv3_LambdaHeadVar__2_14;

  succeeded = var_use_analysis__IntroducedFrom__pred__filter_recursive_call_sites__1256__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv3_LambdaHeadVar__2_14);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv3_LambdaHeadVar__2_14));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
var_use_analysis__goal_rec_prob_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv2_LambdaHeadVar__2_14;

  succeeded = var_use_analysis__IntroducedFrom__pred__filter_recursive_call_sites__1256__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv2_LambdaHeadVar__2_14);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv2_LambdaHeadVar__2_14));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
var_use_analysis__goal_rec_prob_6_p_0(
  MR_Word Goal_7,
  MR_Word RecCalls_8,
  MR_Word Info_9,
  MR_Float * Prob_10,
  MR_Word STATE_VARIABLE_ProbArray_0_35,
  MR_Word * STATE_VARIABLE_ProbArray_36)
{
  MR_bool succeeded;
  MR_Word GoalExpr_12 = ((MR_Word) ((MR_hl_field(0, Goal_7, (MR_Integer) 0))));
  MR_Word GoalId_14 = ((MR_Word) ((MR_hl_field(0, Goal_7, (MR_Integer) 2))));
  MR_Word Coverage_15;
  MR_Integer Before_16;
  MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, Info_9, (MR_Integer) 4))));
  MR_Box conv0_Coverage_15;

  conv0_Coverage_15 = mdbcomp__goal_path__get_goal_attribute_det_2_f_0((MR_Word) (&coverage__coverage__type_ctor_info_coverage_info_0), Var_37, GoalId_14);
  Coverage_15 = ((MR_Word) (conv0_Coverage_15));
  coverage__get_coverage_before_det_2_p_0(Coverage_15, &Before_16);
  succeeded = (Before_16 == (MR_Integer) 0);
  if (succeeded)
  {
    *Prob_10 = measurement_units__impossible_0_f_0();
    *STATE_VARIABLE_ProbArray_36 = STATE_VARIABLE_ProbArray_0_35;
  }
  else
  {
    MR_Word STATE_VARIABLE_ProbArray_39_39;

    switch (MR_tag((MR_Word) GoalExpr_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Conjs_17 = ((MR_Word) ((MR_hl_field(0, GoalExpr_12, (MR_Integer) 0))));

          var_use_analysis__conj_rec_prob_7_p_0(Conjs_17, (MR_Integer) 1, RecCalls_8, Info_9, Prob_10, STATE_VARIABLE_ProbArray_0_35, &STATE_VARIABLE_ProbArray_39_39);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Disjs_18 = ((MR_Word) ((MR_hl_field(1, GoalExpr_12, (MR_Integer) 0))));

          var_use_analysis__disj_rec_prob_7_p_0(Disjs_18, (MR_Integer) 1, RecCalls_8, Info_9, Prob_10, STATE_VARIABLE_ProbArray_0_35, &STATE_VARIABLE_ProbArray_39_39);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Cases_21 = ((MR_Word) ((MR_hl_field(2, GoalExpr_12, (MR_Integer) 2))));

          var_use_analysis__switch_rec_prob_7_p_0(Cases_21, Before_16, RecCalls_8, Info_9, Prob_10, STATE_VARIABLE_ProbArray_0_35, &STATE_VARIABLE_ProbArray_39_39);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_12, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Cond_22 = ((MR_Word) ((MR_hl_field(3, GoalExpr_12, (MR_Integer) 1))));
              MR_Word Then_23 = ((MR_Word) ((MR_hl_field(3, GoalExpr_12, (MR_Integer) 2))));
              MR_Word Else_24 = ((MR_Word) ((MR_hl_field(3, GoalExpr_12, (MR_Integer) 3))));
              MR_Word CondRecCalls_56;
              MR_Word ThenRecCalls_57;
              MR_Word ElseRecCalls_58;
              MR_Float CondProb_59;
              MR_Float ThenProb0_60;
              MR_Float ElseProb0_61;
              MR_Word CondId_62;
              MR_Word Coverage_63;
              MR_Integer Before_64;
              MR_Integer After_65;
              MR_Float ThenCallProb_66;
              MR_Float ElseCallProb_67;
              MR_Float ThenProb_68;
              MR_Float ElseProb_69;
              MR_Float ThenElseProb_70;
              MR_Word STATE_VARIABLE_ProbArray_36_74;
              MR_Word STATE_VARIABLE_ProbArray_37_75;
              MR_Word Var_76;
              MR_Float Var_77;
              MR_Float Var_78;
              MR_Float Var_79;
              MR_Float Var_80;
              MR_Float Var_81;
              MR_Integer Var_82;
              MR_Float Var_83;
              MR_Box conv1_Coverage_63;

              var_use_analysis__filter_recursive_call_sites_3_p_0((MR_Word) ((MR_Unsigned) 0U), RecCalls_8, &CondRecCalls_56);
              var_use_analysis__filter_recursive_call_sites_3_p_0((MR_Word) ((MR_Unsigned) 4U), RecCalls_8, &ThenRecCalls_57);
              var_use_analysis__filter_recursive_call_sites_3_p_0((MR_Word) ((MR_Unsigned) 8U), RecCalls_8, &ElseRecCalls_58);
              var_use_analysis__goal_rec_prob_6_p_0(Cond_22, CondRecCalls_56, Info_9, &CondProb_59, STATE_VARIABLE_ProbArray_0_35, &STATE_VARIABLE_ProbArray_36_74);
              var_use_analysis__goal_rec_prob_6_p_0(Then_23, ThenRecCalls_57, Info_9, &ThenProb0_60, STATE_VARIABLE_ProbArray_36_74, &STATE_VARIABLE_ProbArray_37_75);
              var_use_analysis__goal_rec_prob_6_p_0(Else_24, ElseRecCalls_58, Info_9, &ElseProb0_61, STATE_VARIABLE_ProbArray_37_75, &STATE_VARIABLE_ProbArray_39_39);
              CondId_62 = ((MR_Word) ((MR_hl_field(0, Cond_22, (MR_Integer) 2))));
              Var_76 = ((MR_Word) ((MR_hl_field(0, Info_9, (MR_Integer) 4))));
              conv1_Coverage_63 = mdbcomp__goal_path__get_goal_attribute_det_2_f_0((MR_Word) (&coverage__coverage__type_ctor_info_coverage_info_0), Var_76, CondId_62);
              Coverage_63 = ((MR_Word) (conv1_Coverage_63));
              coverage__get_coverage_before_and_after_det_3_p_0(Coverage_63, &Before_64, &After_65);
              Var_78 = mercury__float__float_1_f_0(After_65);
              Var_79 = mercury__float__float_1_f_0(Before_64);
              Var_77 = mercury__float__f_slash_2_f_0(Var_78, Var_79);
              ThenCallProb_66 = measurement_units__probable_1_f_0(Var_77);
              Var_82 = (MR_Integer) ((MR_Unsigned) Before_64 - (MR_Unsigned) After_65);
              Var_81 = mercury__float__float_1_f_0(Var_82);
              Var_83 = mercury__float__float_1_f_0(Before_64);
              Var_80 = mercury__float__f_slash_2_f_0(Var_81, Var_83);
              ElseCallProb_67 = measurement_units__probable_1_f_0(Var_80);
              ThenProb_68 = measurement_units__and_2_f_0(ThenProb0_60, ThenCallProb_66);
              ElseProb_69 = measurement_units__and_2_f_0(ElseProb0_61, ElseCallProb_67);
              ThenElseProb_70 = measurement_units__or_2_f_0(ThenProb_68, ElseProb_69);
              *Prob_10 = measurement_units__or_2_f_0(CondProb_59, ThenElseProb_70);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word SubGoal_25 = ((MR_Word) ((MR_hl_field(3, GoalExpr_12, (MR_Integer) 1))));
              MR_Word SubGoalRecCalls_28;

              mercury__list__filter_map_3_p_0((MR_Word) (&var_use_analysis_scalar_common_2[4]), (MR_Word) (&var_use_analysis_scalar_common_2[4]), (MR_Word) (&var_use_analysis_scalar_common_8[2]), RecCalls_8, &SubGoalRecCalls_28);
              var_use_analysis__goal_rec_prob_6_p_0(SubGoal_25, SubGoalRecCalls_28, Info_9, Prob_10, STATE_VARIABLE_ProbArray_0_35, &STATE_VARIABLE_ProbArray_39_39);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word MaybeCut_27 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr_12, (MR_Integer) 2))) & (MR_Integer) 1);
              MR_Word SubGoal_53 = ((MR_Word) ((MR_hl_field(3, GoalExpr_12, (MR_Integer) 1))));
              MR_Word Step_54;
              MR_Word SubGoalRecCalls_55;
              MR_Word Var_99;

              {
                Step_54 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Step_54, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(3, Step_54, 1) = (MR_Box) ((MR_Unsigned) (MaybeCut_27));
              }
              {
                Var_99 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_99, 0) = ((MR_Box) (&var_use_analysis_scalar_common_9[1]));
                MR_hl_field(0, Var_99, 1) = ((MR_Box) (var_use_analysis__goal_rec_prob_6_p_0_2));
                MR_hl_field(0, Var_99, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(0, Var_99, 3) = ((MR_Box) (Step_54));
              }
              mercury__list__filter_map_3_p_0((MR_Word) (&var_use_analysis_scalar_common_2[4]), (MR_Word) (&var_use_analysis_scalar_common_2[4]), Var_99, RecCalls_8, &SubGoalRecCalls_55);
              var_use_analysis__goal_rec_prob_6_p_0(SubGoal_53, SubGoalRecCalls_55, Info_9, Prob_10, STATE_VARIABLE_ProbArray_0_35, &STATE_VARIABLE_ProbArray_39_39);
            }
            break;
          case (MR_Integer) 3:
            {
              if ((RecCalls_8 == (MR_Word) ((MR_Unsigned) 0U)))
                *Prob_10 = measurement_units__impossible_0_f_0();
              else
                *Prob_10 = measurement_units__certain_0_f_0();
              STATE_VARIABLE_ProbArray_39_39 = STATE_VARIABLE_ProbArray_0_35;
            }
            break;
        }
        break;
    }
    mdbcomp__goal_path__update_goal_attribute_4_p_0((MR_Word) (&measurement_units__measurement_units__type_ctor_info_probability_0), GoalId_14, MR_box_float(*Prob_10), STATE_VARIABLE_ProbArray_39_39, STATE_VARIABLE_ProbArray_36);
  }
}

static void MR_CALL 
var_use_analysis__rec_goal_var_first_use_6_p_0(
  MR_Word Goal_7,
  MR_Word RecCalls_8,
  MR_Word Info_9,
  MR_Word * FoundFirstUse_10,
  MR_Float STATE_VARIABLE_CostSoFar_0_71,
  MR_Float * STATE_VARIABLE_CostSoFar_72)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word GoalExpr_12 = ((MR_Word) ((MR_hl_field(0, Goal_7, (MR_Integer) 0))));
    MR_Word Detism_13 = ((MR_Unsigned) ((MR_hl_field(0, Goal_7, (MR_Integer) 1))) & (MR_Integer) 7);
    MR_Word GoalId_14 = ((MR_Word) ((MR_hl_field(0, Goal_7, (MR_Integer) 2))));
    MR_Word Coverage_15;
    MR_Integer Before_16;
    MR_Integer After_17;
    MR_Word Var_73 = ((MR_Word) ((MR_hl_field(0, Info_9, (MR_Integer) 4))));
    MR_Box conv0_Coverage_15;

    // setup for model_det tailcalls optimized into a loop
    ;
    conv0_Coverage_15 = mdbcomp__goal_path__get_goal_attribute_det_2_f_0((MR_Word) (&coverage__coverage__type_ctor_info_coverage_info_0), Var_73, GoalId_14);
    Coverage_15 = ((MR_Word) (conv0_Coverage_15));
    coverage__get_coverage_before_and_after_det_3_p_0(Coverage_15, &Before_16, &After_17);
    succeeded = (Before_16 == (MR_Integer) 0);
    if (!(succeeded))
    {
      MR_Word VarUseType_18;
      MR_Word Var_74;

      switch (Detism_13) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 6:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 7:
          succeeded = MR_TRUE;
          break;
      }
      if (!(succeeded))
        succeeded = (After_17 == (MR_Integer) 0);
      if (succeeded)
      {
        Var_74 = ((MR_Word) ((MR_hl_field(0, Info_9, (MR_Integer) 6))));
        VarUseType_18 = ((MR_Unsigned) ((MR_hl_field(0, Var_74, (MR_Integer) 2))) & (MR_Integer) 3);
        succeeded = (VarUseType_18 == (MR_Integer) 0);
      }
    }
    if (succeeded)
    {
      *FoundFirstUse_10 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_CostSoFar_72 = STATE_VARIABLE_CostSoFar_0_71;
    }
    else
      switch (MR_tag((MR_Word) GoalExpr_12)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Conjs_19 = ((MR_Word) ((MR_hl_field(0, GoalExpr_12, (MR_Integer) 0))));

            var_use_analysis__rec_conj_var_first_use_7_p_0(Conjs_19, (MR_Integer) 1, RecCalls_8, Info_9, FoundFirstUse_10, STATE_VARIABLE_CostSoFar_0_71, STATE_VARIABLE_CostSoFar_72);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Disjs_20 = ((MR_Word) ((MR_hl_field(1, GoalExpr_12, (MR_Integer) 0))));

            var_use_analysis__rec_disj_var_first_use_6_p_0(Disjs_20, RecCalls_8, Info_9, FoundFirstUse_10, STATE_VARIABLE_CostSoFar_0_71, STATE_VARIABLE_CostSoFar_72);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer SwitchedOnVar_21 = ((MR_Integer) ((MR_hl_field(2, GoalExpr_12, (MR_Integer) 0))));
            MR_Word Cases_23 = ((MR_Word) ((MR_hl_field(2, GoalExpr_12, (MR_Integer) 2))));

            var_use_analysis__rec_switch_var_first_use_7_p_0(Cases_23, SwitchedOnVar_21, RecCalls_8, Info_9, FoundFirstUse_10, STATE_VARIABLE_CostSoFar_0_71, STATE_VARIABLE_CostSoFar_72);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_12, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Cond_24 = ((MR_Word) ((MR_hl_field(3, GoalExpr_12, (MR_Integer) 1))));
                MR_Word Then_25 = ((MR_Word) ((MR_hl_field(3, GoalExpr_12, (MR_Integer) 2))));
                MR_Word Else_26 = ((MR_Word) ((MR_hl_field(3, GoalExpr_12, (MR_Integer) 3))));

                var_use_analysis__rec_ite_var_first_use_8_p_0(Cond_24, Then_25, Else_26, RecCalls_8, Info_9, FoundFirstUse_10, STATE_VARIABLE_CostSoFar_0_71, STATE_VARIABLE_CostSoFar_72);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word SubGoal_27 = ((MR_Word) ((MR_hl_field(3, GoalExpr_12, (MR_Integer) 1))));
                MR_Word RecCallsSubGoal_30;
                MR_Word next_value_of_Goal_7;
                MR_Word next_value_of_RecCalls_8;

                var_use_analysis__filter_recursive_call_sites_3_p_0((MR_Word) ((MR_Unsigned) 12U), RecCalls_8, &RecCallsSubGoal_30);
                // direct tailcall eliminated
                ;
                next_value_of_Goal_7 = SubGoal_27;
                next_value_of_RecCalls_8 = RecCallsSubGoal_30;
                Goal_7 = next_value_of_Goal_7;
                RecCalls_8 = next_value_of_RecCalls_8;
                continue;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word ScopeIsCut_29 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr_12, (MR_Integer) 2))) & (MR_Integer) 1);
                MR_Word SubGoal_135 = ((MR_Word) ((MR_hl_field(3, GoalExpr_12, (MR_Integer) 1))));
                MR_Word GoalPathStep_136;
                MR_Word RecCallsSubGoal_137;
                MR_Word next_value_of_Goal_7;
                MR_Word next_value_of_RecCalls_8;

                {
                  GoalPathStep_136 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, GoalPathStep_136, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(3, GoalPathStep_136, 1) = (MR_Box) ((MR_Unsigned) (ScopeIsCut_29));
                }
                var_use_analysis__filter_recursive_call_sites_3_p_0(GoalPathStep_136, RecCalls_8, &RecCallsSubGoal_137);
                // direct tailcall eliminated
                ;
                next_value_of_Goal_7 = SubGoal_135;
                next_value_of_RecCalls_8 = RecCallsSubGoal_137;
                Goal_7 = next_value_of_Goal_7;
                RecCalls_8 = next_value_of_RecCalls_8;
                continue;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word BoundVars_33 = ((MR_Word) ((MR_hl_field(3, GoalExpr_12, (MR_Integer) 3))));
                MR_Word AtomicGoal_34 = ((MR_Word) ((MR_hl_field(3, GoalExpr_12, (MR_Integer) 4))));

                switch (MR_tag((MR_Word) AtomicGoal_34)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                    {
                      var_use_analysis__atomic_trivial_var_first_use_5_p_0(AtomicGoal_34, BoundVars_33, STATE_VARIABLE_CostSoFar_0_71, Info_9, FoundFirstUse_10);
                      *STATE_VARIABLE_CostSoFar_72 = STATE_VARIABLE_CostSoFar_0_71;
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(3, AtomicGoal_34, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                      case (MR_Integer) 1:
                      case (MR_Integer) 2:
                      case (MR_Integer) 3:
                      case (MR_Integer) 4:
                      case (MR_Integer) 8:
                      case (MR_Integer) 9:
                        {
                          var_use_analysis__atomic_trivial_var_first_use_5_p_0(AtomicGoal_34, BoundVars_33, STATE_VARIABLE_CostSoFar_0_71, Info_9, FoundFirstUse_10);
                          *STATE_VARIABLE_CostSoFar_72 = STATE_VARIABLE_CostSoFar_0_71;
                        }
                        break;
                      case (MR_Integer) 5:
                      case (MR_Integer) 6:
                      case (MR_Integer) 7:
                        {
                          MR_Word ContainingGoalMap_43 = ((MR_Word) ((MR_hl_field(0, Info_9, (MR_Integer) 3))));
                          MR_Word RevGoalPath_44;

                          RevGoalPath_44 = mdbcomp__goal_path__goal_id_to_reverse_path_2_f_0(ContainingGoalMap_43, GoalId_14);
                          var_use_analysis__call_var_first_use_7_p_0(AtomicGoal_34, BoundVars_33, RevGoalPath_44, Info_9, FoundFirstUse_10, STATE_VARIABLE_CostSoFar_0_71, STATE_VARIABLE_CostSoFar_72);
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

static void MR_CALL 
var_use_analysis__rec_ite_var_first_use_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Float conv6_HeadVar__3_3;

  var_use_analysis__ffu_to_float_3_p_0(MR_unbox_float((MR_hl_field(0, closure, (MR_Integer) 3))), ((MR_Word) (wrapper_arg_1)), &conv6_HeadVar__3_3);
  *wrapper_arg_2 = MR_box_float(conv6_HeadVar__3_3);
}

static void MR_CALL 
var_use_analysis__rec_ite_var_first_use_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Float conv5_STATE_VARIABLE_Weight_10;

  var_use_analysis__adjust_weight_for_recursion_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), MR_unbox_float(wrapper_arg_1), MR_unbox_float(wrapper_arg_2), &conv5_STATE_VARIABLE_Weight_10);
  *wrapper_arg_3 = MR_box_float(conv5_STATE_VARIABLE_Weight_10);
}

static MR_Box MR_CALL 
var_use_analysis__rec_ite_var_first_use_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Float conv4_HeadVar__2_2;

  conv4_HeadVar__2_2 = mercury__float__float_1_f_0(((MR_Integer) (wrapper_arg_1)));
  wrapper_arg_2 = MR_box_float(conv4_HeadVar__2_2);
  return wrapper_arg_2;
}

static void MR_CALL 
var_use_analysis__rec_ite_var_first_use_8_p_0(
  MR_Word Cond_9,
  MR_Word Then_10,
  MR_Word Else_11,
  MR_Word RecCalls_12,
  MR_Word Info_13,
  MR_Word * FoundFirstUse_14,
  MR_Float STATE_VARIABLE_CostSoFar_0_46,
  MR_Float * STATE_VARIABLE_CostSoFar_47)
{
  MR_bool succeeded;
  MR_Word CondRecCalls_16;
  MR_Word ThenRecCalls_17;
  MR_Word ElseRecCalls_18;
  MR_Word CondFoundFirstUse_19;
  MR_Float CostAfterCond_20;
  MR_Word ThenFoundFirstUse_21;
  MR_Float CostAfterThen_22;
  MR_Word ElseFoundFirstUse_23;
  MR_Float CostAfterElse_24;
  MR_Word CoverageArray_25;
  MR_Word ThenId_28;
  MR_Word ElseId_31;
  MR_Word ThenCoverage_32;
  MR_Word ElseCoverage_33;
  MR_Integer BeforeThen_34;
  MR_Integer BeforeElse_35;
  MR_Word RecProbArray_36;
  MR_Float ThenRecProb_37;
  MR_Float ElseRecProb_38;
  MR_Word Weights0_39;
  MR_Word Weights_40;
  MR_Word Var_52;
  MR_Word Var_54;
  MR_Word Var_55;
  MR_Word Var_57;
  MR_Word Var_58;
  MR_Word Var_59;
  MR_Word Var_60;
  MR_Word Var_61;
  MR_Word Var_63;
  MR_Word Var_65;
  MR_Box conv0_ThenCoverage_32;
  MR_Box conv1_ElseCoverage_33;
  MR_Box conv2_ThenRecProb_37;
  MR_Box conv3_ElseRecProb_38;

  var_use_analysis__filter_recursive_call_sites_3_p_0((MR_Word) ((MR_Unsigned) 0U), RecCalls_12, &CondRecCalls_16);
  var_use_analysis__filter_recursive_call_sites_3_p_0((MR_Word) ((MR_Unsigned) 4U), RecCalls_12, &ThenRecCalls_17);
  var_use_analysis__filter_recursive_call_sites_3_p_0((MR_Word) ((MR_Unsigned) 8U), RecCalls_12, &ElseRecCalls_18);
  var_use_analysis__rec_goal_var_first_use_6_p_0(Cond_9, CondRecCalls_16, Info_13, &CondFoundFirstUse_19, STATE_VARIABLE_CostSoFar_0_46, &CostAfterCond_20);
  var_use_analysis__rec_goal_var_first_use_6_p_0(Then_10, ThenRecCalls_17, Info_13, &ThenFoundFirstUse_21, CostAfterCond_20, &CostAfterThen_22);
  var_use_analysis__rec_goal_var_first_use_6_p_0(Else_11, ElseRecCalls_18, Info_13, &ElseFoundFirstUse_23, CostAfterCond_20, &CostAfterElse_24);
  CoverageArray_25 = ((MR_Word) ((MR_hl_field(0, Info_13, (MR_Integer) 4))));
  ThenId_28 = ((MR_Word) ((MR_hl_field(0, Then_10, (MR_Integer) 2))));
  ElseId_31 = ((MR_Word) ((MR_hl_field(0, Else_11, (MR_Integer) 2))));
  conv0_ThenCoverage_32 = mdbcomp__goal_path__get_goal_attribute_det_2_f_0((MR_Word) (&coverage__coverage__type_ctor_info_coverage_info_0), CoverageArray_25, ThenId_28);
  ThenCoverage_32 = ((MR_Word) (conv0_ThenCoverage_32));
  conv1_ElseCoverage_33 = mdbcomp__goal_path__get_goal_attribute_det_2_f_0((MR_Word) (&coverage__coverage__type_ctor_info_coverage_info_0), CoverageArray_25, ElseId_31);
  ElseCoverage_33 = ((MR_Word) (conv1_ElseCoverage_33));
  coverage__get_coverage_before_det_2_p_0(ThenCoverage_32, &BeforeThen_34);
  coverage__get_coverage_before_det_2_p_0(ElseCoverage_33, &BeforeElse_35);
  Var_52 = ((MR_Word) ((MR_hl_field(0, Info_13, (MR_Integer) 10))));
  RecProbArray_36 = ((MR_Word) ((MR_hl_field(1, Var_52, (MR_Integer) 0))));
  conv2_ThenRecProb_37 = mdbcomp__goal_path__get_goal_attribute_det_2_f_0((MR_Word) (&measurement_units__measurement_units__type_ctor_info_probability_0), RecProbArray_36, ThenId_28);
  ThenRecProb_37 = MR_unbox_float(conv2_ThenRecProb_37);
  conv3_ElseRecProb_38 = mdbcomp__goal_path__get_goal_attribute_det_2_f_0((MR_Word) (&measurement_units__measurement_units__type_ctor_info_probability_0), RecProbArray_36, ElseId_31);
  ElseRecProb_38 = MR_unbox_float(conv3_ElseRecProb_38);
  {
    Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_55, 0) = ((MR_Box) (BeforeElse_35));
    MR_hl_field(1, Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_54, 0) = ((MR_Box) (BeforeThen_34));
    MR_hl_field(1, Var_54, 1) = ((MR_Box) (Var_55));
  }
  Weights0_39 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_float_0), (MR_Word) (&var_use_analysis_scalar_common_2[10]), Var_54);
  Var_60 = ((MR_Word) ((MR_hl_field(0, Info_13, (MR_Integer) 10))));
  Var_59 = ((MR_Unsigned) ((MR_hl_field(1, Var_60, (MR_Integer) 1))) & (MR_Integer) 1);
  {
    Var_57 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_57, 0) = ((MR_Box) (&var_use_analysis_scalar_common_6[1]));
    MR_hl_field(0, Var_57, 1) = ((MR_Box) (var_use_analysis__rec_ite_var_first_use_8_p_0_2));
    MR_hl_field(0, Var_57, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_57, 3) = ((MR_Box) (Var_59));
  }
  {
    Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_61, 0) = MR_box_float(ElseRecProb_38);
    MR_hl_field(1, Var_61, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_58, 0) = MR_box_float(ThenRecProb_37);
    MR_hl_field(1, Var_58, 1) = ((MR_Box) (Var_61));
  }
  mercury__list__map_corresponding_4_p_0((MR_Word) (&measurement_units__measurement_units__type_ctor_info_probability_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_float_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_float_0), Var_57, Var_58, Weights0_39, &Weights_40);
  {
    Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_65, 0) = MR_box_float(CostAfterElse_24);
    MR_hl_field(1, Var_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_63, 0) = MR_box_float(CostAfterThen_22);
    MR_hl_field(1, Var_63, 1) = ((MR_Box) (Var_65));
  }
  measurements__weighted_average_3_p_0(Weights_40, Var_63, STATE_VARIABLE_CostSoFar_47);
  if ((CondFoundFirstUse_19 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    succeeded = (ThenFoundFirstUse_21 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      succeeded = (ElseFoundFirstUse_23 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      *FoundFirstUse_14 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word VarUseType_42;
      MR_Float Default_43;
      MR_Word UseTimes_44;
      MR_Float UseTime_45;
      MR_Word Var_67 = ((MR_Word) ((MR_hl_field(0, Info_13, (MR_Integer) 6))));
      MR_Word Var_68;
      MR_Word Var_69;
      MR_Word Var_70;

      VarUseType_42 = ((MR_Unsigned) ((MR_hl_field(0, Var_67, (MR_Integer) 2))) & (MR_Integer) 3);
      switch (VarUseType_42) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          Default_43 = *STATE_VARIABLE_CostSoFar_47;
          break;
        case (MR_Integer) 2:
        case (MR_Integer) 0:
          Default_43 = CostAfterCond_20;
          break;
      }
      {
        Var_68 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_68, 0) = ((MR_Box) (&var_use_analysis_scalar_common_9[0]));
        MR_hl_field(0, Var_68, 1) = ((MR_Box) (var_use_analysis__rec_ite_var_first_use_8_p_0_3));
        MR_hl_field(0, Var_68, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_68, 3) = MR_box_float(Default_43);
      }
      {
        Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_70, 0) = ((MR_Box) (ElseFoundFirstUse_23));
        MR_hl_field(1, Var_70, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_69, 0) = ((MR_Box) (ThenFoundFirstUse_21));
        MR_hl_field(1, Var_69, 1) = ((MR_Box) (Var_70));
      }
      mercury__list__map_3_p_0((MR_Word) (&var_use_analysis__var_use_analysis__type_ctor_info_found_first_use_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_float_0), Var_68, Var_69, &UseTimes_44);
      measurements__weighted_average_3_p_0(Weights_40, UseTimes_44, &UseTime_45);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *FoundFirstUse_14 = base;
        MR_hl_field(1, base, 0) = MR_box_float(UseTime_45);
      }
    }
  }
  else
    *FoundFirstUse_14 = CondFoundFirstUse_19;
}

static MR_bool MR_CALL 
var_use_analysis__rec_switch_var_first_use_2_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_14;

  succeeded = var_use_analysis__IntroducedFrom__pred__filter_recursive_call_sites__1256__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_14);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_14));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
var_use_analysis__rec_switch_var_first_use_2_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer CaseNum_2,
  MR_Word RecCalls_3,
  MR_Word Info_4,
  MR_Float CostBeforeSwitch_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word * HeadVar__9_9)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__8_8 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__9_9 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word Case_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Cases_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word CasesWeights_24;
    MR_Word CasesFoundFirstUses_25;
    MR_Word CasesCostsAfter_26;
    MR_Word CasesRecProbs_27;
    MR_Word Goal_28;
    MR_Word GoalId_29;
    MR_Word CaseRecCalls_30;
    MR_Word FoundFirstUse_31;
    MR_Float CaseCostAfter_32;
    MR_Word Coverage_33;
    MR_Integer Before_34;
    MR_Float RecProb_35;
    MR_Float Weight_36;
    MR_Integer Var_37 = (MR_Integer) ((MR_Unsigned) CaseNum_2 + (MR_Unsigned) 1);
    MR_Word Var_39;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_71;
    MR_Box conv1_Coverage_33;
    MR_Box conv2_RecProb_35;

    var_use_analysis__rec_switch_var_first_use_2_9_p_0(Cases_15, Var_37, RecCalls_3, Info_4, CostBeforeSwitch_5, &CasesWeights_24, &CasesFoundFirstUses_25, &CasesCostsAfter_26, &CasesRecProbs_27);
    Goal_28 = ((MR_Word) ((MR_hl_field(0, Case_14, (MR_Integer) 2))));
    GoalId_29 = ((MR_Word) ((MR_hl_field(0, Goal_28, (MR_Integer) 2))));
    {
      Var_39 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_39, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_39, 1) = ((MR_Box) (CaseNum_2));
      MR_hl_field(3, Var_39, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_71 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_71, 0) = ((MR_Box) (&var_use_analysis_scalar_common_9[1]));
      MR_hl_field(0, Var_71, 1) = ((MR_Box) (var_use_analysis__rec_switch_var_first_use_2_9_p_0_1));
      MR_hl_field(0, Var_71, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_71, 3) = ((MR_Box) (Var_39));
    }
    mercury__list__filter_map_3_p_0((MR_Word) (&var_use_analysis_scalar_common_2[4]), (MR_Word) (&var_use_analysis_scalar_common_2[4]), Var_71, RecCalls_3, &CaseRecCalls_30);
    var_use_analysis__rec_goal_var_first_use_6_p_0(Goal_28, CaseRecCalls_30, Info_4, &FoundFirstUse_31, CostBeforeSwitch_5, &CaseCostAfter_32);
    Var_41 = ((MR_Word) ((MR_hl_field(0, Info_4, (MR_Integer) 4))));
    conv1_Coverage_33 = mdbcomp__goal_path__get_goal_attribute_det_2_f_0((MR_Word) (&coverage__coverage__type_ctor_info_coverage_info_0), Var_41, GoalId_29);
    Coverage_33 = ((MR_Word) (conv1_Coverage_33));
    coverage__get_coverage_before_det_2_p_0(Coverage_33, &Before_34);
    Var_43 = ((MR_Word) ((MR_hl_field(0, Info_4, (MR_Integer) 10))));
    Var_42 = ((MR_Word) ((MR_hl_field(1, Var_43, (MR_Integer) 0))));
    conv2_RecProb_35 = mdbcomp__goal_path__get_goal_attribute_det_2_f_0((MR_Word) (&measurement_units__measurement_units__type_ctor_info_probability_0), Var_42, GoalId_29);
    RecProb_35 = MR_unbox_float(conv2_RecProb_35);
    Weight_36 = mercury__float__float_1_f_0(Before_34);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__6_6 = base;
      MR_hl_field(1, base, 0) = MR_box_float(Weight_36);
      MR_hl_field(1, base, 1) = ((MR_Box) (CasesWeights_24));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__7_7 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (FoundFirstUse_31));
      MR_hl_field(1, base, 1) = ((MR_Box) (CasesFoundFirstUses_25));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__8_8 = base;
      MR_hl_field(1, base, 0) = MR_box_float(CaseCostAfter_32);
      MR_hl_field(1, base, 1) = ((MR_Box) (CasesCostsAfter_26));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__9_9 = base;
      MR_hl_field(1, base, 0) = MR_box_float(RecProb_35);
      MR_hl_field(1, base, 1) = ((MR_Box) (CasesRecProbs_27));
    }
  }
}

static void MR_CALL 
var_use_analysis__rec_switch_var_first_use_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Float conv1_HeadVar__3_3;

  var_use_analysis__ffu_to_float_3_p_0(MR_unbox_float((MR_hl_field(0, closure, (MR_Integer) 3))), ((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__3_3);
  *wrapper_arg_2 = MR_box_float(conv1_HeadVar__3_3);
}

static MR_bool MR_CALL 
var_use_analysis__rec_switch_var_first_use_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = var_use_analysis__IntroducedFrom__pred__rec_switch_var_first_use__1482__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
var_use_analysis__rec_switch_var_first_use_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Float conv0_STATE_VARIABLE_Weight_10;

  var_use_analysis__adjust_weight_for_recursion_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), MR_unbox_float(wrapper_arg_1), MR_unbox_float(wrapper_arg_2), &conv0_STATE_VARIABLE_Weight_10);
  *wrapper_arg_3 = MR_box_float(conv0_STATE_VARIABLE_Weight_10);
}

static void MR_CALL 
var_use_analysis__rec_switch_var_first_use_7_p_0(
  MR_Word Cases_8,
  MR_Integer SwitchedOnVar_9,
  MR_Word RecCalls_10,
  MR_Word Info_11,
  MR_Word * FoundFirstUse_12,
  MR_Float CostBeforeSwitch_13,
  MR_Float * CostAfterSwitch_14)
{
  MR_bool succeeded;
  MR_Word CaseWeights0_15;
  MR_Word FoundFirstUseCases_16;
  MR_Word CostAfterCases_17;
  MR_Word RecProbs_18;
  MR_Word RecCase_19;
  MR_Word CaseWeights_20;
  MR_Integer Var_21;
  MR_Word Var_27;
  MR_Word Var_28;

  var_use_analysis__rec_switch_var_first_use_2_9_p_0(Cases_8, (MR_Integer) 1, RecCalls_10, Info_11, CostBeforeSwitch_13, &CaseWeights0_15, &FoundFirstUseCases_16, &CostAfterCases_17, &RecProbs_18);
  Var_27 = ((MR_Word) ((MR_hl_field(0, Info_11, (MR_Integer) 10))));
  RecCase_19 = ((MR_Unsigned) ((MR_hl_field(1, Var_27, (MR_Integer) 1))) & (MR_Integer) 1);
  {
    Var_28 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_28, 0) = ((MR_Box) (&var_use_analysis_scalar_common_6[1]));
    MR_hl_field(0, Var_28, 1) = ((MR_Box) (var_use_analysis__rec_switch_var_first_use_7_p_0_1));
    MR_hl_field(0, Var_28, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_28, 3) = ((MR_Box) (RecCase_19));
  }
  mercury__list__map_corresponding_4_p_0((MR_Word) (&measurement_units__measurement_units__type_ctor_info_probability_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_float_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_float_0), Var_28, RecProbs_18, CaseWeights0_15, &CaseWeights_20);
  measurements__weighted_average_3_p_0(CaseWeights_20, CostAfterCases_17, CostAfterSwitch_14);
  Var_21 = ((MR_Integer) ((MR_hl_field(0, Info_11, (MR_Integer) 5))));
  succeeded = (Var_21 == SwitchedOnVar_9);
  if (succeeded)
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *FoundFirstUse_12 = base;
      MR_hl_field(1, base, 0) = MR_box_float(CostBeforeSwitch_13);
    }
  else
  {
    succeeded = mercury__list__all_true_2_p_0((MR_Word) (&var_use_analysis__var_use_analysis__type_ctor_info_found_first_use_0), (MR_Word) (&var_use_analysis_scalar_common_8[1]), FoundFirstUseCases_16);
    if (succeeded)
      *FoundFirstUse_12 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word VarUseType_22;
      MR_Float DefaultCost_23;
      MR_Word FirstUseTimes_24;
      MR_Float UseTime_25;
      MR_Word Var_31 = ((MR_Word) ((MR_hl_field(0, Info_11, (MR_Integer) 6))));
      MR_Word Var_32;

      VarUseType_22 = ((MR_Unsigned) ((MR_hl_field(0, Var_31, (MR_Integer) 2))) & (MR_Integer) 3);
      switch (VarUseType_22) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          DefaultCost_23 = *CostAfterSwitch_14;
          break;
        case (MR_Integer) 2:
        case (MR_Integer) 0:
          DefaultCost_23 = CostBeforeSwitch_13;
          break;
      }
      {
        Var_32 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_32, 0) = ((MR_Box) (&var_use_analysis_scalar_common_9[0]));
        MR_hl_field(0, Var_32, 1) = ((MR_Box) (var_use_analysis__rec_switch_var_first_use_7_p_0_3));
        MR_hl_field(0, Var_32, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_32, 3) = MR_box_float(DefaultCost_23);
      }
      mercury__list__map_3_p_0((MR_Word) (&var_use_analysis__var_use_analysis__type_ctor_info_found_first_use_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_float_0), Var_32, FoundFirstUseCases_16, &FirstUseTimes_24);
      measurements__weighted_average_3_p_0(CaseWeights_20, FirstUseTimes_24, &UseTime_25);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *FoundFirstUse_12 = base;
        MR_hl_field(1, base, 0) = MR_box_float(UseTime_25);
      }
    }
  }
}

static MR_bool MR_CALL 
var_use_analysis__rec_disj_var_first_use_2_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_14;

  succeeded = var_use_analysis__IntroducedFrom__pred__filter_recursive_call_sites__1256__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_14);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_14));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
var_use_analysis__rec_disj_var_first_use_2_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer DisjNum_2,
  MR_Word RecCalls_3,
  MR_Word Info_4,
  MR_Word * HeadVar__5_5,
  MR_Float STATE_VARIABLE_CostSoFar_0_6,
  MR_Float * STATE_VARIABLE_CostSoFar_7)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_CostSoFar_7 = STATE_VARIABLE_CostSoFar_0_6;
  }
  else
  {
    MR_Word Disj_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Disjs_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word DisjRecCalls_21;
    MR_Word DisjFoundFirstUse_22;
    MR_Word CoverageArray_23;
    MR_Word Coverage_24;
    MR_Integer Before_25;
    MR_Integer After_26;
    MR_Float CostDisjs_27;
    MR_Word Var_34;
    MR_Float STATE_VARIABLE_CostSoFar_35_35;
    MR_Word Var_36;
    MR_Word Var_58;
    MR_Box conv1_Coverage_24;

    {
      Var_34 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_34, 0) = ((MR_Box) (DisjNum_2));
    }
    {
      Var_58 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_58, 0) = ((MR_Box) (&var_use_analysis_scalar_common_9[1]));
      MR_hl_field(0, Var_58, 1) = ((MR_Box) (var_use_analysis__rec_disj_var_first_use_2_7_p_0_1));
      MR_hl_field(0, Var_58, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_58, 3) = ((MR_Box) (Var_34));
    }
    mercury__list__filter_map_3_p_0((MR_Word) (&var_use_analysis_scalar_common_2[4]), (MR_Word) (&var_use_analysis_scalar_common_2[4]), Var_58, RecCalls_3, &DisjRecCalls_21);
    var_use_analysis__rec_goal_var_first_use_6_p_0(Disj_14, DisjRecCalls_21, Info_4, &DisjFoundFirstUse_22, STATE_VARIABLE_CostSoFar_0_6, &STATE_VARIABLE_CostSoFar_35_35);
    CoverageArray_23 = ((MR_Word) ((MR_hl_field(0, Info_4, (MR_Integer) 4))));
    Var_36 = ((MR_Word) ((MR_hl_field(0, Disj_14, (MR_Integer) 2))));
    conv1_Coverage_24 = mdbcomp__goal_path__get_goal_attribute_det_2_f_0((MR_Word) (&coverage__coverage__type_ctor_info_coverage_info_0), CoverageArray_23, Var_36);
    Coverage_24 = ((MR_Word) (conv1_Coverage_24));
    coverage__get_coverage_before_and_after_det_3_p_0(Coverage_24, &Before_25, &After_26);
    succeeded = (Before_25 == (MR_Integer) 0);
    if (succeeded)
    {
      CostDisjs_27 = (MR_Float) 0.0000000000000000;
      *HeadVar__5_5 = DisjFoundFirstUse_22;
    }
    else
    {
      MR_Word DisjsFoundFirstUse_28;
      MR_Float CostDisjs0_29;
      MR_Float FailureProb_30;
      MR_Integer Var_37 = (MR_Integer) ((MR_Unsigned) DisjNum_2 + (MR_Unsigned) 1);
      MR_Float Var_40;
      MR_Float Var_41;
      MR_Integer Var_42;
      MR_Float Var_43;
      MR_Float Var_44;

      var_use_analysis__rec_disj_var_first_use_2_7_p_0(Disjs_15, Var_37, RecCalls_3, Info_4, &DisjsFoundFirstUse_28, (MR_Float) 0.0000000000000000, &CostDisjs0_29);
      Var_42 = (MR_Integer) ((MR_Unsigned) Before_25 - (MR_Unsigned) After_26);
      Var_41 = mercury__float__float_1_f_0(Var_42);
      Var_43 = mercury__float__float_1_f_0(Before_25);
      Var_40 = mercury__float__f_slash_2_f_0(Var_41, Var_43);
      FailureProb_30 = measurement_units__probable_1_f_0(Var_40);
      Var_44 = measurement_units__probability_to_float_1_f_0(FailureProb_30);
      CostDisjs_27 = (CostDisjs0_29 * Var_44);
      if ((DisjFoundFirstUse_22 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__5_5 = DisjsFoundFirstUse_28;
      else
        *HeadVar__5_5 = DisjFoundFirstUse_22;
    }
    *STATE_VARIABLE_CostSoFar_7 = (STATE_VARIABLE_CostSoFar_35_35 + CostDisjs_27);
  }
}

static void MR_CALL 
var_use_analysis__rec_disj_var_first_use_6_p_0(
  MR_Word Disjs_7,
  MR_Word RecCalls_8,
  MR_Word Info_9,
  MR_Word * FoundFirstUse_10,
  MR_Float STATE_VARIABLE_CostSoFar_0_17,
  MR_Float * STATE_VARIABLE_CostSoFar_18)
{
  MR_Word FoundFirstUse0_13;

  var_use_analysis__rec_disj_var_first_use_2_7_p_0(Disjs_7, (MR_Integer) 1, RecCalls_8, Info_9, &FoundFirstUse0_13, STATE_VARIABLE_CostSoFar_0_17, STATE_VARIABLE_CostSoFar_18);
  if ((FoundFirstUse0_13 == (MR_Word) ((MR_Unsigned) 0U)))
    *FoundFirstUse_10 = FoundFirstUse0_13;
  else
  {
    MR_Word VarUseType_16;
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, Info_9, (MR_Integer) 6))));

    VarUseType_16 = ((MR_Unsigned) ((MR_hl_field(0, Var_21, (MR_Integer) 2))) & (MR_Integer) 3);
    switch (VarUseType_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *FoundFirstUse_10 = base;
          MR_hl_field(1, base, 0) = MR_box_float(STATE_VARIABLE_CostSoFar_0_17);
        }
        break;
      case (MR_Integer) 2:
      case (MR_Integer) 0:
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *FoundFirstUse_10 = base;
          MR_hl_field(1, base, 0) = MR_box_float(*STATE_VARIABLE_CostSoFar_18);
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
var_use_analysis__rec_conj_var_first_use_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_14;

  succeeded = var_use_analysis__IntroducedFrom__pred__filter_recursive_call_sites__1256__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_14);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_14));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
var_use_analysis__rec_conj_var_first_use_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer ConjNum_2,
  MR_Word RecCalls_3,
  MR_Word StaticInfo_4,
  MR_Word * HeadVar__5_5,
  MR_Float STATE_VARIABLE_CostSoFar_0_6,
  MR_Float * STATE_VARIABLE_CostSoFar_7)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_CostSoFar_7 = STATE_VARIABLE_CostSoFar_0_6;
  }
  else
  {
    MR_Word Conj_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Conjs_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ConjRecCalls_21;
    MR_Word ConjFoundFirstUse_22;
    MR_Word ConjsFoundFirstUse_23;
    MR_Word Var_27;
    MR_Float STATE_VARIABLE_CostSoFar_28_28;
    MR_Integer Var_29;
    MR_Word Var_32;

    {
      Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_27, 0) = ((MR_Box) (ConjNum_2));
    }
    {
      Var_32 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_32, 0) = ((MR_Box) (&var_use_analysis_scalar_common_9[1]));
      MR_hl_field(0, Var_32, 1) = ((MR_Box) (var_use_analysis__rec_conj_var_first_use_7_p_0_1));
      MR_hl_field(0, Var_32, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_32, 3) = ((MR_Box) (Var_27));
    }
    mercury__list__filter_map_3_p_0((MR_Word) (&var_use_analysis_scalar_common_2[4]), (MR_Word) (&var_use_analysis_scalar_common_2[4]), Var_32, RecCalls_3, &ConjRecCalls_21);
    var_use_analysis__rec_goal_var_first_use_6_p_0(Conj_14, ConjRecCalls_21, StaticInfo_4, &ConjFoundFirstUse_22, STATE_VARIABLE_CostSoFar_0_6, &STATE_VARIABLE_CostSoFar_28_28);
    Var_29 = (MR_Integer) ((MR_Unsigned) ConjNum_2 + (MR_Unsigned) 1);
    var_use_analysis__rec_conj_var_first_use_7_p_0(Conjs_15, Var_29, RecCalls_3, StaticInfo_4, &ConjsFoundFirstUse_23, STATE_VARIABLE_CostSoFar_28_28, STATE_VARIABLE_CostSoFar_7);
    if ((ConjFoundFirstUse_22 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__5_5 = ConjsFoundFirstUse_23;
    else
      *HeadVar__5_5 = ConjFoundFirstUse_22;
  }
}

static MR_bool MR_CALL 
var_use_analysis__filter_recursive_call_sites_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_14;

  succeeded = var_use_analysis__IntroducedFrom__pred__filter_recursive_call_sites__1256__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_14);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_14));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
var_use_analysis__filter_recursive_call_sites_3_p_0(
  MR_Word GoalPathStep_4,
  MR_Word STATE_VARIABLE_RecCallSites_0_9,
  MR_Word * STATE_VARIABLE_RecCallSites_10)
{
  MR_bool succeeded;
  MR_Word Var_11;

  {
    Var_11 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_11, 0) = ((MR_Box) (&var_use_analysis_scalar_common_9[1]));
    MR_hl_field(0, Var_11, 1) = ((MR_Box) (var_use_analysis__filter_recursive_call_sites_3_p_0_1));
    MR_hl_field(0, Var_11, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_11, 3) = ((MR_Box) (GoalPathStep_4));
  }
  mercury__list__filter_map_3_p_0((MR_Word) (&var_use_analysis_scalar_common_2[4]), (MR_Word) (&var_use_analysis_scalar_common_2[4]), Var_11, STATE_VARIABLE_RecCallSites_0_9, STATE_VARIABLE_RecCallSites_10);
}

static void MR_CALL 
var_use_analysis__build_recursive_call_sites_list_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_12;

  var_use_analysis__IntroducedFrom__pred__build_recursive_call_sites_list__1246__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_12);
  *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_12));
}

static void MR_CALL 
var_use_analysis__build_recursive_call_sites_list_2_p_0(
  MR_Word Map_3,
  MR_Word * List_4)
{
  MR_Word List0_5;

  List0_5 = mercury__map__to_assoc_list_1_f_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0), (MR_Word) (&measurements__measurements__type_ctor_info_cs_cost_csq_0), Map_3);
  mercury__list__map_3_p_0((MR_Word) (&var_use_analysis_scalar_common_2[3]), (MR_Word) (&var_use_analysis_scalar_common_2[4]), (MR_Word) (&var_use_analysis_scalar_common_2[9]), List0_5, List_4);
}

static MR_bool MR_CALL 
var_use_analysis__intermodule_var_use_should_follow_csd_2_p_0(
  MR_Word VarUseOptions_3,
  MR_Word CSDPtr_4)
{
  MR_bool succeeded;
  MR_Word FollowCall_5 = ((MR_Word) ((MR_hl_field(0, VarUseOptions_3, (MR_Integer) 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, VarUseOptions_3, (MR_Integer) 0))));

  if ((FollowCall_5 == (MR_Word) ((MR_Unsigned) 0U)))
    succeeded = MR_TRUE;
  else
  {
    MR_String Module_6 = ((MR_String) ((MR_hl_field(1, FollowCall_5, (MR_Integer) 0))));
    MR_Word CSD_8;
    MR_Word PDPtr_9;
    MR_Word PD_16;
    MR_Word PSPtr_17;
    MR_Word PS_18;
    MR_Word Label_19;

    profile__deep_lookup_call_site_dynamics_3_p_0(Var_10, CSDPtr_4, &CSD_8);
    PDPtr_9 = ((MR_Word) ((MR_hl_field(0, CSD_8, (MR_Integer) 1))));
    profile__deep_lookup_proc_dynamics_3_p_0(Var_10, PDPtr_9, &PD_16);
    PSPtr_17 = ((MR_Word) ((MR_hl_field(0, PD_16, (MR_Integer) 0))));
    profile__deep_lookup_proc_statics_3_p_0(Var_10, PSPtr_17, &PS_18);
    Label_19 = ((MR_Word) ((MR_hl_field(0, PS_18, (MR_Integer) 0))));
    if (((MR_tag((MR_Word) Label_19)) == (MR_Integer) 0))
    {
      MR_String Var_43 = ((MR_String) ((MR_hl_field(0, Label_19, (MR_Integer) 2))));

      succeeded = (strcmp(Module_6, Var_43) == 0);
    }
    else
    {
      MR_String Var_44 = ((MR_String) ((MR_hl_field(1, Label_19, (MR_Integer) 2))));

      succeeded = (strcmp(Module_6, Var_44) == 0);
    }
  }
  return succeeded;
}

void MR_CALL 
var_use_analysis__proc_dynamic_var_use_info_9_p_0(
  MR_Word CliquePtr_10,
  MR_Word PDPtr_11,
  MR_Integer ArgNum_12,
  MR_Word RecursionType_13,
  MR_Word Depth_14,
  MR_Float ProcCost_15,
  MR_Word CallStack_16,
  MR_Word VarUseOptions_17,
  MR_Word * MaybeVarUseInfo_18)
{
  MR_Word Info_19;

  var_use_analysis__prepare_for_proc_var_first_use_7_p_0(CliquePtr_10, PDPtr_11, ArgNum_12, RecursionType_13, Depth_14, VarUseOptions_17, &Info_19);
  if (((MR_tag((MR_Word) Info_19)) == (MR_Integer) 0))
  {
    MR_String Error_28 = ((MR_String) ((MR_hl_field(0, Info_19, (MR_Integer) 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeVarUseInfo_18 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Error_28));
    }
  }
  else
  {
    MR_Word Goal_20 = ((MR_Word) ((MR_hl_field(1, Info_19, (MR_Integer) 0))));
    MR_Word ContainingGoalMap_22 = ((MR_Word) ((MR_hl_field(1, Info_19, (MR_Integer) 2))));
    MR_Word CoverageArray_23 = ((MR_Word) ((MR_hl_field(1, Info_19, (MR_Integer) 3))));
    MR_Word CallSiteCostMap_24 = ((MR_Word) ((MR_hl_field(1, Info_19, (MR_Integer) 4))));
    MR_Word RecursiveCallSiteCostMap_25 = ((MR_Word) ((MR_hl_field(1, Info_19, (MR_Integer) 5))));
    MR_Integer Var_26 = ((MR_Integer) ((MR_hl_field(1, Info_19, (MR_Integer) 6))));
    MR_Word VarUseInfo_27;
    MR_Word FoundFirstUse_30;
    MR_Word VarUseType_31;
    MR_Word Var_33;
    MR_Float _Cost_29;

    {
      Var_33 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_33, 0) = ((MR_Box) (CliquePtr_10));
      MR_hl_field(0, Var_33, 1) = ((MR_Box) (CallSiteCostMap_24));
      MR_hl_field(0, Var_33, 2) = ((MR_Box) (RecursiveCallSiteCostMap_25));
      MR_hl_field(0, Var_33, 3) = ((MR_Box) (ContainingGoalMap_22));
      MR_hl_field(0, Var_33, 4) = ((MR_Box) (CoverageArray_23));
      MR_hl_field(0, Var_33, 5) = ((MR_Box) (Var_26));
      MR_hl_field(0, Var_33, 6) = ((MR_Box) (VarUseOptions_17));
      MR_hl_field(0, Var_33, 7) = ((MR_Box) (CallStack_16));
      MR_hl_field(0, Var_33, 8) = ((MR_Box) (RecursionType_13));
      MR_hl_field(0, Var_33, 9) = ((MR_Box) (Depth_14));
      MR_hl_field(0, Var_33, 10) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    var_use_analysis__goal_var_first_use_6_p_0((MR_Word) ((MR_Unsigned) 0U), Goal_20, Var_33, (MR_Float) 0.0000000000000000, &_Cost_29, &FoundFirstUse_30);
    VarUseType_31 = ((MR_Unsigned) ((MR_hl_field(0, VarUseOptions_17, (MR_Integer) 2))) & (MR_Integer) 3);
    var_use_analysis__found_first_use_to_use_info_4_p_0(FoundFirstUse_30, ProcCost_15, VarUseType_31, &VarUseInfo_27);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeVarUseInfo_18 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (VarUseInfo_27));
    }
  }
}

static void MR_CALL 
var_use_analysis__found_first_use_to_use_info_4_p_0(
  MR_Word FoundFirstUse_5,
  MR_Float Cost_6,
  MR_Word VarUseType_7,
  MR_Word * VarUseInfo_8)
{
  if ((FoundFirstUse_5 == (MR_Word) ((MR_Unsigned) 0U)))
    switch (VarUseType_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          *VarUseInfo_8 = base;
          MR_hl_field(0, base, 0) = MR_box_float(Cost_6);
          MR_hl_field(0, base, 1) = MR_box_float(Cost_6);
          MR_hl_field(0, base, 2) = (MR_Box) ((MR_Unsigned) (VarUseType_7));
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          *VarUseInfo_8 = base;
          MR_hl_field(0, base, 0) = MR_box_float(Cost_6);
          MR_hl_field(0, base, 1) = MR_box_float(Cost_6);
          MR_hl_field(0, base, 2) = (MR_Box) ((MR_Unsigned) (VarUseType_7));
        }
        break;
      case (MR_Integer) 0:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140var_use_analysis.found_first_use_to_use_info\'/4", (MR_String) "goal did not produce a variable that it should have");
          return;
        }
        break;
    }
  else
  {
    MR_Float CostUntilUse_9 = MR_unbox_float((MR_hl_field(1, FoundFirstUse_5, (MR_Integer) 0)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *VarUseInfo_8 = base;
      MR_hl_field(0, base, 0) = MR_box_float(CostUntilUse_9);
      MR_hl_field(0, base, 1) = MR_box_float(Cost_6);
      MR_hl_field(0, base, 2) = (MR_Box) ((MR_Unsigned) (VarUseType_7));
    }
  }
}

static void MR_CALL 
var_use_analysis__goal_var_first_use_6_p_0(
  MR_Word RevGoalPath_7,
  MR_Word Goal_8,
  MR_Word StaticInfo_9,
  MR_Float STATE_VARIABLE_CostSoFar_0_68,
  MR_Float * STATE_VARIABLE_CostSoFar_69,
  MR_Word * FoundFirstUse_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word GoalExpr_12 = ((MR_Word) ((MR_hl_field(0, Goal_8, (MR_Integer) 0))));
    MR_Word Detism_13 = ((MR_Unsigned) ((MR_hl_field(0, Goal_8, (MR_Integer) 1))) & (MR_Integer) 7);
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, Goal_8, (MR_Integer) 2))));
    MR_Word CoverageArray_15 = ((MR_Word) ((MR_hl_field(0, StaticInfo_9, (MR_Integer) 4))));
    MR_Word Coverage_16;
    MR_Box conv0_Coverage_16;

    // setup for model_det tailcalls optimized into a loop
    ;
    conv0_Coverage_16 = mdbcomp__goal_path__get_goal_attribute_det_2_f_0((MR_Word) (&coverage__coverage__type_ctor_info_coverage_info_0), CoverageArray_15, Var_14);
    Coverage_16 = ((MR_Word) (conv0_Coverage_16));
    {
      MR_Integer Var_114;

      succeeded = coverage__get_coverage_before_2_p_0(Coverage_16, &Var_114);
      if (succeeded)
        succeeded = ((MR_Integer) 0 == Var_114);
    }
    if (!(succeeded))
    {
      MR_Word VarUseType_17;
      MR_Word Var_72 = ((MR_Word) ((MR_hl_field(0, StaticInfo_9, (MR_Integer) 6))));

      VarUseType_17 = ((MR_Unsigned) ((MR_hl_field(0, Var_72, (MR_Integer) 2))) & (MR_Integer) 3);
      succeeded = (VarUseType_17 == (MR_Integer) 0);
      if (succeeded)
      {
        switch (Detism_13) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 6:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 7:
            succeeded = MR_TRUE;
            break;
        }
        if (!(succeeded))
        {
          MR_Integer Var_115;

          succeeded = coverage__get_coverage_after_2_p_0(Coverage_16, &Var_115);
          if (succeeded)
            succeeded = ((MR_Integer) 0 == Var_115);
        }
      }
    }
    if (succeeded)
    {
      *FoundFirstUse_11 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_CostSoFar_69 = STATE_VARIABLE_CostSoFar_0_68;
    }
    else
      switch (MR_tag((MR_Word) GoalExpr_12)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Conjuncts_18 = ((MR_Word) ((MR_hl_field(0, GoalExpr_12, (MR_Integer) 0))));

            var_use_analysis__conj_var_first_use_7_p_0(RevGoalPath_7, (MR_Integer) 1, Conjuncts_18, StaticInfo_9, STATE_VARIABLE_CostSoFar_0_68, STATE_VARIABLE_CostSoFar_69, FoundFirstUse_11);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Disjuncts_19 = ((MR_Word) ((MR_hl_field(1, GoalExpr_12, (MR_Integer) 0))));

            var_use_analysis__disj_var_first_use_7_p_0(RevGoalPath_7, Disjuncts_19, Detism_13, StaticInfo_9, STATE_VARIABLE_CostSoFar_0_68, STATE_VARIABLE_CostSoFar_69, FoundFirstUse_11);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer SwitchedOnVar_20 = ((MR_Integer) ((MR_hl_field(2, GoalExpr_12, (MR_Integer) 0))));
            MR_Word Cases_22 = ((MR_Word) ((MR_hl_field(2, GoalExpr_12, (MR_Integer) 2))));

            var_use_analysis__switch_var_first_use_7_p_0(RevGoalPath_7, SwitchedOnVar_20, Cases_22, StaticInfo_9, STATE_VARIABLE_CostSoFar_0_68, STATE_VARIABLE_CostSoFar_69, FoundFirstUse_11);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_12, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Cond_23 = ((MR_Word) ((MR_hl_field(3, GoalExpr_12, (MR_Integer) 1))));
                MR_Word Then_24 = ((MR_Word) ((MR_hl_field(3, GoalExpr_12, (MR_Integer) 2))));
                MR_Word Else_25 = ((MR_Word) ((MR_hl_field(3, GoalExpr_12, (MR_Integer) 3))));

                var_use_analysis__ite_var_first_use_8_p_0(RevGoalPath_7, Cond_23, Then_24, Else_25, StaticInfo_9, STATE_VARIABLE_CostSoFar_0_68, STATE_VARIABLE_CostSoFar_69, FoundFirstUse_11);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word SubGoal_26 = ((MR_Word) ((MR_hl_field(3, GoalExpr_12, (MR_Integer) 1))));
                MR_Word RevSubGoalPath_29;
                MR_Word next_value_of_RevGoalPath_7;
                MR_Word next_value_of_Goal_8;

                {
                  RevSubGoalPath_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, RevSubGoalPath_29, 0) = ((MR_Box) (RevGoalPath_7));
                  MR_hl_field(1, RevSubGoalPath_29, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                }
                // direct tailcall eliminated
                ;
                next_value_of_RevGoalPath_7 = RevSubGoalPath_29;
                next_value_of_Goal_8 = SubGoal_26;
                RevGoalPath_7 = next_value_of_RevGoalPath_7;
                Goal_8 = next_value_of_Goal_8;
                continue;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word ScopeIsCut_28 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr_12, (MR_Integer) 2))) & (MR_Integer) 1);
                MR_Word SubGoal_116 = ((MR_Word) ((MR_hl_field(3, GoalExpr_12, (MR_Integer) 1))));
                MR_Word GoalPathStep_117;
                MR_Word RevSubGoalPath_118;
                MR_Word next_value_of_RevGoalPath_7;
                MR_Word next_value_of_Goal_8;

                {
                  GoalPathStep_117 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, GoalPathStep_117, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(3, GoalPathStep_117, 1) = (MR_Box) ((MR_Unsigned) (ScopeIsCut_28));
                }
                {
                  RevSubGoalPath_118 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, RevSubGoalPath_118, 0) = ((MR_Box) (RevGoalPath_7));
                  MR_hl_field(1, RevSubGoalPath_118, 1) = ((MR_Box) (GoalPathStep_117));
                }
                // direct tailcall eliminated
                ;
                next_value_of_RevGoalPath_7 = RevSubGoalPath_118;
                next_value_of_Goal_8 = SubGoal_116;
                RevGoalPath_7 = next_value_of_RevGoalPath_7;
                Goal_8 = next_value_of_Goal_8;
                continue;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word BoundVars_32 = ((MR_Word) ((MR_hl_field(3, GoalExpr_12, (MR_Integer) 3))));
                MR_Word AtomicGoal_33 = ((MR_Word) ((MR_hl_field(3, GoalExpr_12, (MR_Integer) 4))));

                switch (MR_tag((MR_Word) AtomicGoal_33)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                    {
                      var_use_analysis__atomic_trivial_var_first_use_5_p_0(AtomicGoal_33, BoundVars_32, STATE_VARIABLE_CostSoFar_0_68, StaticInfo_9, FoundFirstUse_11);
                      *STATE_VARIABLE_CostSoFar_69 = STATE_VARIABLE_CostSoFar_0_68;
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(3, AtomicGoal_33, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                      case (MR_Integer) 1:
                      case (MR_Integer) 2:
                      case (MR_Integer) 3:
                      case (MR_Integer) 4:
                      case (MR_Integer) 8:
                      case (MR_Integer) 9:
                        {
                          var_use_analysis__atomic_trivial_var_first_use_5_p_0(AtomicGoal_33, BoundVars_32, STATE_VARIABLE_CostSoFar_0_68, StaticInfo_9, FoundFirstUse_11);
                          *STATE_VARIABLE_CostSoFar_69 = STATE_VARIABLE_CostSoFar_0_68;
                        }
                        break;
                      case (MR_Integer) 5:
                      case (MR_Integer) 6:
                      case (MR_Integer) 7:
                        var_use_analysis__call_var_first_use_7_p_0(AtomicGoal_33, BoundVars_32, RevGoalPath_7, StaticInfo_9, FoundFirstUse_11, STATE_VARIABLE_CostSoFar_0_68, STATE_VARIABLE_CostSoFar_69);
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

static void MR_CALL 
var_use_analysis__conj_var_first_use_7_p_0(
  MR_Word RevGoalPath_1,
  MR_Integer ConjNum_2,
  MR_Word HeadVar__3_3,
  MR_Word StaticInfo_4,
  MR_Float HeadVar__5_5,
  MR_Float * HeadVar__6_6,
  MR_Word * HeadVar__7_7)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__6_6 = HeadVar__5_5;
    }
    else
    {
      MR_Word Conj_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Conjs_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word HeadFoundFirstUse_21;
      MR_Word Var_26;
      MR_Float STATE_VARIABLE_CostSoFar_27_27;
      MR_Word Var_28;

      {
        Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_28, 0) = ((MR_Box) (ConjNum_2));
      }
      {
        Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_26, 0) = ((MR_Box) (RevGoalPath_1));
        MR_hl_field(1, Var_26, 1) = ((MR_Box) (Var_28));
      }
      var_use_analysis__goal_var_first_use_6_p_0(Var_26, Conj_16, StaticInfo_4, HeadVar__5_5, &STATE_VARIABLE_CostSoFar_27_27, &HeadFoundFirstUse_21);
      if ((HeadFoundFirstUse_21 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Integer Var_29 = (MR_Integer) ((MR_Unsigned) ConjNum_2 + (MR_Unsigned) 1);
        MR_Integer next_value_of_ConjNum_2 = Var_29;
        MR_Word next_value_of_HeadVar__3_3 = Conjs_17;
        MR_Float next_value_of_HeadVar__5_5 = STATE_VARIABLE_CostSoFar_27_27;

        // direct tailcall eliminated
        ;
        ConjNum_2 = next_value_of_ConjNum_2;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        HeadVar__5_5 = next_value_of_HeadVar__5_5;
        continue;
      }
      else
      {
        *HeadVar__7_7 = HeadFoundFirstUse_21;
        *HeadVar__6_6 = STATE_VARIABLE_CostSoFar_27_27;
      }
    }
    break;
  }
}

static void MR_CALL 
var_use_analysis__ite_var_first_use_8_p_0(
  MR_Word RevGoalPath_9,
  MR_Word Cond_10,
  MR_Word Then_11,
  MR_Word Else_12,
  MR_Word StaticInfo_13,
  MR_Float STATE_VARIABLE_CostSoFar_0_41,
  MR_Float * STATE_VARIABLE_CostSoFar_42,
  MR_Word * FoundFirstUse_15)
{
  MR_bool succeeded;
  MR_Word CoverageArray_16 = ((MR_Word) ((MR_hl_field(0, StaticInfo_13, (MR_Integer) 4))));
  MR_Word ThenCoverage_17;
  MR_Integer CountBeforeThen_18;
  MR_Word ElseCoverage_19;
  MR_Integer CountBeforeElse_20;
  MR_Word Weights_21;
  MR_Word RevCondGoalPath_22;
  MR_Word RevThenGoalPath_23;
  MR_Word RevElseGoalPath_24;
  MR_Word VarUseType_25;
  MR_Float CostAfterCond_27;
  MR_Word CondFoundFirstUse_28;
  MR_Float CostAfterThen_29;
  MR_Word ThenFoundFirstUse_30;
  MR_Float CostAfterElse_31;
  MR_Word ElseFoundFirstUse_32;
  MR_Word Var_43 = ((MR_Word) ((MR_hl_field(0, Then_11, (MR_Integer) 2))));
  MR_Word Var_44;
  MR_Float Var_45;
  MR_Word Var_46;
  MR_Float Var_47;
  MR_Word Var_52;
  MR_Word Var_53;
  MR_Word Var_54;
  MR_Box conv0_ThenCoverage_17;
  MR_Box conv1_ElseCoverage_19;

  conv0_ThenCoverage_17 = mdbcomp__goal_path__get_goal_attribute_det_2_f_0((MR_Word) (&coverage__coverage__type_ctor_info_coverage_info_0), CoverageArray_16, Var_43);
  ThenCoverage_17 = ((MR_Word) (conv0_ThenCoverage_17));
  coverage__get_coverage_before_det_2_p_0(ThenCoverage_17, &CountBeforeThen_18);
  Var_44 = ((MR_Word) ((MR_hl_field(0, Else_12, (MR_Integer) 2))));
  conv1_ElseCoverage_19 = mdbcomp__goal_path__get_goal_attribute_det_2_f_0((MR_Word) (&coverage__coverage__type_ctor_info_coverage_info_0), CoverageArray_16, Var_44);
  ElseCoverage_19 = ((MR_Word) (conv1_ElseCoverage_19));
  coverage__get_coverage_before_det_2_p_0(ElseCoverage_19, &CountBeforeElse_20);
  Var_45 = mercury__float__float_1_f_0(CountBeforeThen_18);
  Var_47 = mercury__float__float_1_f_0(CountBeforeElse_20);
  {
    Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_46, 0) = MR_box_float(Var_47);
    MR_hl_field(1, Var_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Weights_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Weights_21, 0) = MR_box_float(Var_45);
    MR_hl_field(1, Weights_21, 1) = ((MR_Box) (Var_46));
  }
  {
    RevCondGoalPath_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, RevCondGoalPath_22, 0) = ((MR_Box) (RevGoalPath_9));
    MR_hl_field(1, RevCondGoalPath_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    RevThenGoalPath_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, RevThenGoalPath_23, 0) = ((MR_Box) (RevGoalPath_9));
    MR_hl_field(1, RevThenGoalPath_23, 1) = ((MR_Box) ((MR_Unsigned) 4U));
  }
  {
    RevElseGoalPath_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, RevElseGoalPath_24, 0) = ((MR_Box) (RevGoalPath_9));
    MR_hl_field(1, RevElseGoalPath_24, 1) = ((MR_Box) ((MR_Unsigned) 8U));
  }
  Var_52 = ((MR_Word) ((MR_hl_field(0, StaticInfo_13, (MR_Integer) 6))));
  VarUseType_25 = ((MR_Unsigned) ((MR_hl_field(0, Var_52, (MR_Integer) 2))) & (MR_Integer) 3);
  var_use_analysis__goal_var_first_use_6_p_0(RevCondGoalPath_22, Cond_10, StaticInfo_13, STATE_VARIABLE_CostSoFar_0_41, &CostAfterCond_27, &CondFoundFirstUse_28);
  var_use_analysis__goal_var_first_use_6_p_0(RevThenGoalPath_23, Then_11, StaticInfo_13, CostAfterCond_27, &CostAfterThen_29, &ThenFoundFirstUse_30);
  var_use_analysis__goal_var_first_use_6_p_0(RevElseGoalPath_24, Else_12, StaticInfo_13, CostAfterCond_27, &CostAfterElse_31, &ElseFoundFirstUse_32);
  {
    Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_54, 0) = MR_box_float(CostAfterElse_31);
    MR_hl_field(1, Var_54, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_53, 0) = MR_box_float(CostAfterThen_29);
    MR_hl_field(1, Var_53, 1) = ((MR_Box) (Var_54));
  }
  measurements__weighted_average_3_p_0(Weights_21, Var_53, STATE_VARIABLE_CostSoFar_42);
  if ((CondFoundFirstUse_28 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    succeeded = (ThenFoundFirstUse_30 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      succeeded = (ElseFoundFirstUse_32 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      *FoundFirstUse_15 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Float DefaultCost_35;
      MR_Float ThenVarUseTime_36;
      MR_Float ElseVarUseTime_37;
      MR_Float VarUseTime_38;
      MR_Word Var_57;
      MR_Word Var_58;

      switch (VarUseType_25) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          DefaultCost_35 = CostAfterCond_27;
          break;
        case (MR_Integer) 2:
        case (MR_Integer) 0:
          DefaultCost_35 = *STATE_VARIABLE_CostSoFar_42;
          break;
      }
      var_use_analysis__ffu_to_float_3_p_0(DefaultCost_35, ThenFoundFirstUse_30, &ThenVarUseTime_36);
      var_use_analysis__ffu_to_float_3_p_0(DefaultCost_35, ElseFoundFirstUse_32, &ElseVarUseTime_37);
      {
        Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_58, 0) = MR_box_float(ElseVarUseTime_37);
        MR_hl_field(1, Var_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_57, 0) = MR_box_float(ThenVarUseTime_36);
        MR_hl_field(1, Var_57, 1) = ((MR_Box) (Var_58));
      }
      measurements__weighted_average_3_p_0(Weights_21, Var_57, &VarUseTime_38);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *FoundFirstUse_15 = base;
        MR_hl_field(1, base, 0) = MR_box_float(VarUseTime_38);
      }
    }
  }
  else
    *FoundFirstUse_15 = CondFoundFirstUse_28;
}

static void MR_CALL 
var_use_analysis__switch_var_first_use_2_8_p_0(
  MR_Word RevGoalPath_1,
  MR_Integer CaseNum_2,
  MR_Word StaticInfo_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Float Cost0_6,
  MR_Word * HeadVar__7_7,
  MR_Word * HeadVar__8_8)
{
  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__8_8 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word Case_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
    MR_Word Cases_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
    MR_Float Weight_18;
    MR_Word Weights_19;
    MR_Float Cost_21;
    MR_Word Costs_22;
    MR_Word FoundFirstUse_23;
    MR_Word FoundFirstUses_24;
    MR_Word Goal_27;
    MR_Word RevArmPath_28;
    MR_Word Coverage_29;
    MR_Integer BeforeCount_30;
    MR_Integer Var_31 = (MR_Integer) ((MR_Unsigned) CaseNum_2 + (MR_Unsigned) 1);
    MR_Word Var_33;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Box conv0_Coverage_29;

    var_use_analysis__switch_var_first_use_2_8_p_0(RevGoalPath_1, Var_31, StaticInfo_3, Cases_17, &Weights_19, Cost0_6, &Costs_22, &FoundFirstUses_24);
    Goal_27 = ((MR_Word) ((MR_hl_field(0, Case_16, (MR_Integer) 2))));
    {
      Var_33 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_33, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_33, 1) = ((MR_Box) (CaseNum_2));
      MR_hl_field(3, Var_33, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      RevArmPath_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, RevArmPath_28, 0) = ((MR_Box) (RevGoalPath_1));
      MR_hl_field(1, RevArmPath_28, 1) = ((MR_Box) (Var_33));
    }
    var_use_analysis__goal_var_first_use_6_p_0(RevArmPath_28, Goal_27, StaticInfo_3, Cost0_6, &Cost_21, &FoundFirstUse_23);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__7_7 = base;
      MR_hl_field(1, base, 0) = MR_box_float(Cost_21);
      MR_hl_field(1, base, 1) = ((MR_Box) (Costs_22));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__8_8 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (FoundFirstUse_23));
      MR_hl_field(1, base, 1) = ((MR_Box) (FoundFirstUses_24));
    }
    Var_35 = ((MR_Word) ((MR_hl_field(0, StaticInfo_3, (MR_Integer) 4))));
    Var_36 = ((MR_Word) ((MR_hl_field(0, Goal_27, (MR_Integer) 2))));
    conv0_Coverage_29 = mdbcomp__goal_path__get_goal_attribute_det_2_f_0((MR_Word) (&coverage__coverage__type_ctor_info_coverage_info_0), Var_35, Var_36);
    Coverage_29 = ((MR_Word) (conv0_Coverage_29));
    coverage__get_coverage_before_det_2_p_0(Coverage_29, &BeforeCount_30);
    Weight_18 = mercury__float__float_1_f_0(BeforeCount_30);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__5_5 = base;
      MR_hl_field(1, base, 0) = MR_box_float(Weight_18);
      MR_hl_field(1, base, 1) = ((MR_Box) (Weights_19));
    }
  }
}

static void MR_CALL 
var_use_analysis__switch_var_first_use_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Float conv0_HeadVar__3_3;

  var_use_analysis__ffu_to_float_3_p_0(MR_unbox_float((MR_hl_field(0, closure, (MR_Integer) 3))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__3_3);
  *wrapper_arg_2 = MR_box_float(conv0_HeadVar__3_3);
}

static MR_bool MR_CALL 
var_use_analysis__switch_var_first_use_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = var_use_analysis__IntroducedFrom__pred__switch_var_first_use__1117__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
var_use_analysis__switch_var_first_use_7_p_0(
  MR_Word RevGoalPath_8,
  MR_Integer SwitchedOnVar_9,
  MR_Word Cases_10,
  MR_Word StaticInfo_11,
  MR_Float CostBeforeSwitch_12,
  MR_Float * CostAfterSwitch_13,
  MR_Word * FoundFirstUse_14)
{
  MR_bool succeeded;
  MR_Word CaseWeights_15;
  MR_Word CostCases_16;
  MR_Word FoundFirstUseCases_17;
  MR_Integer Var_18;

  var_use_analysis__switch_var_first_use_2_8_p_0(RevGoalPath_8, (MR_Integer) 1, StaticInfo_11, Cases_10, &CaseWeights_15, CostBeforeSwitch_12, &CostCases_16, &FoundFirstUseCases_17);
  measurements__weighted_average_3_p_0(CaseWeights_15, CostCases_16, CostAfterSwitch_13);
  Var_18 = ((MR_Integer) ((MR_hl_field(0, StaticInfo_11, (MR_Integer) 5))));
  succeeded = (Var_18 == SwitchedOnVar_9);
  if (succeeded)
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *FoundFirstUse_14 = base;
      MR_hl_field(1, base, 0) = MR_box_float(CostBeforeSwitch_12);
    }
  else
  {
    succeeded = mercury__list__all_true_2_p_0((MR_Word) (&var_use_analysis__var_use_analysis__type_ctor_info_found_first_use_0), (MR_Word) (&var_use_analysis_scalar_common_8[0]), FoundFirstUseCases_17);
    if (succeeded)
      *FoundFirstUse_14 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word VarUseType_19;
      MR_Float DefaultCost_20;
      MR_Word FirstUseTimes_21;
      MR_Float AvgFirstUseTime_22;
      MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, StaticInfo_11, (MR_Integer) 6))));
      MR_Word Var_27;

      VarUseType_19 = ((MR_Unsigned) ((MR_hl_field(0, Var_26, (MR_Integer) 2))) & (MR_Integer) 3);
      switch (VarUseType_19) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          DefaultCost_20 = *CostAfterSwitch_13;
          break;
        case (MR_Integer) 2:
        case (MR_Integer) 0:
          DefaultCost_20 = CostBeforeSwitch_12;
          break;
      }
      {
        Var_27 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_27, 0) = ((MR_Box) (&var_use_analysis_scalar_common_9[0]));
        MR_hl_field(0, Var_27, 1) = ((MR_Box) (var_use_analysis__switch_var_first_use_7_p_0_2));
        MR_hl_field(0, Var_27, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_27, 3) = MR_box_float(DefaultCost_20);
      }
      mercury__list__map_3_p_0((MR_Word) (&var_use_analysis__var_use_analysis__type_ctor_info_found_first_use_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_float_0), Var_27, FoundFirstUseCases_17, &FirstUseTimes_21);
      measurements__weighted_average_3_p_0(CaseWeights_15, FirstUseTimes_21, &AvgFirstUseTime_22);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *FoundFirstUse_14 = base;
        MR_hl_field(1, base, 0) = MR_box_float(AvgFirstUseTime_22);
      }
    }
  }
}

static void MR_CALL 
var_use_analysis__disj_var_first_use_2_7_p_0(
  MR_Word RevGoalPath_1,
  MR_Integer DisjNum_2,
  MR_Word HeadVar__3_3,
  MR_Word StaticInfo_4,
  MR_Float STATE_VARIABLE_CostSoFar_0_5,
  MR_Float * STATE_VARIABLE_CostSoFar_6,
  MR_Word * HeadVar__7_7)
{
  MR_bool succeeded;

  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_CostSoFar_6 = STATE_VARIABLE_CostSoFar_0_5;
  }
  else
  {
    MR_Word Disj_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Disjs_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word VarUseType_21;
    MR_Word CoverageArray_22 = ((MR_Word) ((MR_hl_field(0, StaticInfo_4, (MR_Integer) 4))));
    MR_Word HeadFoundFirstUse_23;
    MR_Word TailFoundFirstUse_24;
    MR_Word Var_40 = ((MR_Word) ((MR_hl_field(0, StaticInfo_4, (MR_Integer) 6))));
    MR_Word Var_41;
    MR_Float STATE_VARIABLE_CostSoFar_42_42;
    MR_Word Var_43;
    MR_Integer Var_44;

    VarUseType_21 = ((MR_Unsigned) ((MR_hl_field(0, Var_40, (MR_Integer) 2))) & (MR_Integer) 3);
    {
      Var_43 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_43, 0) = ((MR_Box) (DisjNum_2));
    }
    {
      Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_41, 0) = ((MR_Box) (RevGoalPath_1));
      MR_hl_field(1, Var_41, 1) = ((MR_Box) (Var_43));
    }
    var_use_analysis__goal_var_first_use_6_p_0(Var_41, Disj_16, StaticInfo_4, STATE_VARIABLE_CostSoFar_0_5, &STATE_VARIABLE_CostSoFar_42_42, &HeadFoundFirstUse_23);
    Var_44 = (MR_Integer) ((MR_Unsigned) DisjNum_2 + (MR_Unsigned) 1);
    var_use_analysis__disj_var_first_use_2_7_p_0(RevGoalPath_1, Var_44, Disjs_17, StaticInfo_4, STATE_VARIABLE_CostSoFar_42_42, STATE_VARIABLE_CostSoFar_6, &TailFoundFirstUse_24);
    if ((HeadFoundFirstUse_23 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((TailFoundFirstUse_24 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__7_7 = HeadFoundFirstUse_23;
      else
        *HeadVar__7_7 = TailFoundFirstUse_24;
    else
    {
      MR_Float Var_86 = MR_unbox_float((MR_hl_field(1, HeadFoundFirstUse_23, (MR_Integer) 0)));

      if ((TailFoundFirstUse_24 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__7_7 = HeadFoundFirstUse_23;
      else
      {
        MR_Float TailCost_28 = MR_unbox_float((MR_hl_field(1, TailFoundFirstUse_24, (MR_Integer) 0)));
        MR_Float Cost_29;

        switch (VarUseType_21) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            Cost_29 = Var_86;
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 0:
            {
              MR_Word DisjCoverage_30;
              MR_Float HeadWeight_32;
              MR_Float TailWeight_33;
              MR_Word Var_47 = ((MR_Word) ((MR_hl_field(0, Disj_16, (MR_Integer) 2))));
              MR_Word Var_53;
              MR_Word Var_54;
              MR_Word Var_55;
              MR_Word Var_57;
              MR_Box conv0_DisjCoverage_30;
              MR_Integer HeadCount_31;

              conv0_DisjCoverage_30 = mdbcomp__goal_path__get_goal_attribute_det_2_f_0((MR_Word) (&coverage__coverage__type_ctor_info_coverage_info_0), CoverageArray_22, Var_47);
              DisjCoverage_30 = ((MR_Word) (conv0_DisjCoverage_30));
              succeeded = coverage__get_coverage_before_2_p_0(DisjCoverage_30, &HeadCount_31);
              if (succeeded)
                HeadWeight_32 = mercury__float__float_1_f_0(HeadCount_31);
              else
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140var_use_analysis.disj_var_first_use_2\'/7", (MR_String) "unknown coverage before disjunct");
                  return;
                }
              if ((Disjs_17 == (MR_Word) ((MR_Unsigned) 0U)))
                TailWeight_33 = (MR_Float) 0.0000000000000000;
              else
              {
                MR_Word FirstTailDisj_34 = ((MR_Word) ((MR_hl_field(1, Disjs_17, (MR_Integer) 0))));
                MR_Word FirstTailCoverage_36;
                MR_Word Var_50 = ((MR_Word) ((MR_hl_field(0, FirstTailDisj_34, (MR_Integer) 2))));
                MR_Box conv1_FirstTailCoverage_36;
                MR_Integer TailCount_37;

                conv1_FirstTailCoverage_36 = mdbcomp__goal_path__get_goal_attribute_det_2_f_0((MR_Word) (&coverage__coverage__type_ctor_info_coverage_info_0), CoverageArray_22, Var_50);
                FirstTailCoverage_36 = ((MR_Word) (conv1_FirstTailCoverage_36));
                succeeded = coverage__get_coverage_before_2_p_0(FirstTailCoverage_36, &TailCount_37);
                if (succeeded)
                  TailWeight_33 = mercury__float__float_1_f_0(TailCount_37);
                else
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140var_use_analysis.disj_var_first_use_2\'/7", (MR_String) "unknown coverage before disjunct");
                    return;
                  }
              }
              {
                Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_55, 0) = MR_box_float(TailWeight_33);
                MR_hl_field(1, Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_53, 0) = MR_box_float(HeadWeight_32);
                MR_hl_field(1, Var_53, 1) = ((MR_Box) (Var_55));
              }
              {
                Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_57, 0) = MR_box_float(TailCost_28);
                MR_hl_field(1, Var_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_54, 0) = MR_box_float(Var_86);
                MR_hl_field(1, Var_54, 1) = ((MR_Box) (Var_57));
              }
              measurements__weighted_average_3_p_0(Var_53, Var_54, &Cost_29);
            }
            break;
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__7_7 = base;
          MR_hl_field(1, base, 0) = MR_box_float(Cost_29);
        }
      }
    }
  }
}

static void MR_CALL 
var_use_analysis__disj_var_first_use_7_p_0(
  MR_Word RevGoalPath_8,
  MR_Word Disjuncts_9,
  MR_Word Detism_10,
  MR_Word StaticInfo_11,
  MR_Float STATE_VARIABLE_CostSoFar_0_19,
  MR_Float * STATE_VARIABLE_CostSoFar_20,
  MR_Word * FoundFirstUse_13)
{
  MR_bool succeeded;
  MR_Word FoundFirstUse0_15;
  MR_Word Var_23;

  var_use_analysis__disj_var_first_use_2_7_p_0(RevGoalPath_8, (MR_Integer) 1, Disjuncts_9, StaticInfo_11, STATE_VARIABLE_CostSoFar_0_19, STATE_VARIABLE_CostSoFar_20, &FoundFirstUse0_15);
  Var_23 = mdbcomp__program_representation__detism_get_solutions_1_f_0(Detism_10);
  succeeded = (Var_23 == (MR_Integer) 2);
  if (succeeded)
  {
    succeeded = (FoundFirstUse0_15 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
    }
  }
  if (succeeded)
  {
    MR_Word VarUseType_18;
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, StaticInfo_11, (MR_Integer) 6))));

    VarUseType_18 = ((MR_Unsigned) ((MR_hl_field(0, Var_24, (MR_Integer) 2))) & (MR_Integer) 3);
    switch (VarUseType_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *FoundFirstUse_13 = base;
          MR_hl_field(1, base, 0) = MR_box_float(STATE_VARIABLE_CostSoFar_0_19);
        }
        break;
      case (MR_Integer) 2:
      case (MR_Integer) 0:
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *FoundFirstUse_13 = base;
          MR_hl_field(1, base, 0) = MR_box_float(*STATE_VARIABLE_CostSoFar_20);
        }
        break;
    }
  }
  else
    *FoundFirstUse_13 = FoundFirstUse0_15;
}

static void MR_CALL 
var_use_analysis__ffu_to_float_3_p_0(
  MR_Float Default_1,
  MR_Word HeadVar__2_2,
  MR_Float * HeadVar__3_3)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = Default_1;
  else
    *HeadVar__3_3 = MR_unbox_float((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0)));
}

static void MR_CALL 
var_use_analysis__atomic_trivial_var_first_use_5_p_0(
  MR_Word AtomicGoal_6,
  MR_Word BoundVars_7,
  MR_Float CostSoFar_8,
  MR_Word StaticInfo_9,
  MR_Word * FoundFirstUse_10)
{
  MR_bool succeeded;
  MR_Integer Var_11 = ((MR_Integer) ((MR_hl_field(0, StaticInfo_9, (MR_Integer) 5))));
  MR_Word VarUseType_12;
  MR_Word Vars_13;
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, StaticInfo_9, (MR_Integer) 6))));

  VarUseType_12 = ((MR_Unsigned) ((MR_hl_field(0, Var_20, (MR_Integer) 2))) & (MR_Integer) 3);
  program_representation_utils__atomic_goal_get_vars_2_p_0(AtomicGoal_6, &Vars_13);
  succeeded = mercury__set__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (Var_11)), Vars_13);
  if (succeeded)
    switch (VarUseType_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        succeeded = MR_TRUE;
        break;
      case (MR_Integer) 2:
        succeeded = MR_TRUE;
        break;
      case (MR_Integer) 0:
        succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (Var_11)), BoundVars_7);
        break;
    }
  if (succeeded)
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *FoundFirstUse_10 = base;
      MR_hl_field(1, base, 0) = MR_box_float(CostSoFar_8);
    }
  else
    *FoundFirstUse_10 = (MR_Word) ((MR_Unsigned) 0U);
}

static void MR_CALL 
var_use_analysis__call_var_first_use_7_p_0(
  MR_Word AtomicGoal_8,
  MR_Word BoundVars_9,
  MR_Word RevGoalPath_10,
  MR_Word StaticInfo_11,
  MR_Word * FoundFirstUse_12,
  MR_Float STATE_VARIABLE_CostSoFar_0_52,
  MR_Float * STATE_VARIABLE_CostSoFar_53)
{
  MR_bool succeeded;
  MR_Word CliquePtr_15 = ((MR_Word) ((MR_hl_field(0, StaticInfo_11, (MR_Integer) 0))));
  MR_Word CostMap_16 = ((MR_Word) ((MR_hl_field(0, StaticInfo_11, (MR_Integer) 1))));
  MR_Word RecCostMap_17 = ((MR_Word) ((MR_hl_field(0, StaticInfo_11, (MR_Integer) 2))));
  MR_Integer Var_20 = ((MR_Integer) ((MR_hl_field(0, StaticInfo_11, (MR_Integer) 5))));
  MR_Word VarUseOptions_21 = ((MR_Word) ((MR_hl_field(0, StaticInfo_11, (MR_Integer) 6))));
  MR_Word VarUseType_26 = ((MR_Unsigned) ((MR_hl_field(0, VarUseOptions_21, (MR_Integer) 2))) & (MR_Integer) 3);
  MR_Word CostAndCallees_27;
  MR_Word Cost0_28;
  MR_Float Cost_29;
  MR_Word Args_32;
  MR_Word Vars_33;
  MR_Box conv0_CostAndCallees_27;
  MR_Float Var_54;

  mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0), (MR_Word) (&var_use_analysis_scalar_common_1[0]), CostMap_16, ((MR_Box) (RevGoalPath_10)), &conv0_CostAndCallees_27);
  CostAndCallees_27 = ((MR_Word) (conv0_CostAndCallees_27));
  succeeded = analysis_utils__cost_and_callees_is_recursive_2_p_0(CliquePtr_15, CostAndCallees_27);
  if (succeeded)
  {
    MR_Box conv1_Cost0_28;

    mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0), (MR_Word) (&measurements__measurements__type_ctor_info_cs_cost_csq_0), RecCostMap_17, ((MR_Box) (RevGoalPath_10)), &conv1_Cost0_28);
    Cost0_28 = ((MR_Word) (conv1_Cost0_28));
  }
  else
    Cost0_28 = ((MR_Word) ((MR_hl_field(0, CostAndCallees_27, (MR_Integer) 0))));
  Var_54 = measurements__cs_cost_get_calls_1_f_0(Cost0_28);
  succeeded = (Var_54 == ((MR_Float) 0.0000000000000000));
  if (succeeded)
    Cost_29 = (MR_Float) 0.0000000000000000;
  else
    Cost_29 = measurements__cs_cost_get_percall_1_f_0(Cost0_28);
  *STATE_VARIABLE_CostSoFar_53 = (STATE_VARIABLE_CostSoFar_0_52 + Cost_29);
  switch (((MR_Integer) ((MR_hl_field(3, AtomicGoal_8, (MR_Integer) 0))))) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 5:
      {
        MR_Integer HOVar_34 = ((MR_Integer) ((MR_hl_field(3, AtomicGoal_8, (MR_Integer) 1))));

        Args_32 = ((MR_Word) ((MR_hl_field(3, AtomicGoal_8, (MR_Integer) 2))));
        {
          Vars_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Vars_33, 0) = ((MR_Box) (HOVar_34));
          MR_hl_field(1, Vars_33, 1) = ((MR_Box) (Args_32));
        }
      }
      break;
    case (MR_Integer) 6:
      {
        MR_Integer HOVar_80 = ((MR_Integer) ((MR_hl_field(3, AtomicGoal_8, (MR_Integer) 1))));

        Args_32 = ((MR_Word) ((MR_hl_field(3, AtomicGoal_8, (MR_Integer) 3))));
        {
          Vars_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Vars_33, 0) = ((MR_Box) (HOVar_80));
          MR_hl_field(1, Vars_33, 1) = ((MR_Box) (Args_32));
        }
      }
      break;
    case (MR_Integer) 7:
      {
        Args_32 = ((MR_Word) ((MR_hl_field(3, AtomicGoal_8, (MR_Integer) 3))));
        Vars_33 = Args_32;
      }
      break;
  }
  succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (Var_20)), Vars_33);
  if (succeeded)
  {
    MR_Float FirstTime_41;
    MR_Float Var_60;
    MR_Word TypeCtorInfo_76_76;
    MR_Word TypeCtorInfo_77_77;

    switch (((MR_Integer) ((MR_hl_field(3, AtomicGoal_8, (MR_Integer) 0))))) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 5:
      case (MR_Integer) 6:
        FirstTime_41 = (MR_Float) 0.0000000000000000;
        break;
      case (MR_Integer) 7:
        {
          MR_Word Times_45;

          var_use_analysis__call_args_first_use_5_p_0(Args_32, Cost_29, StaticInfo_11, CostAndCallees_27, &Times_45);
          if ((Times_45 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140var_use_analysis.call_var_first_use\'/7", (MR_String) "no solutions for variable first use time");
              return;
            }
          else
          {
            MR_Word LaterTimes_46;

            FirstTime_41 = MR_unbox_float((MR_hl_field(1, Times_45, (MR_Integer) 0)));
            LaterTimes_46 = ((MR_Word) ((MR_hl_field(1, Times_45, (MR_Integer) 1))));
            succeeded = (VarUseType_26 == (MR_Integer) 0);
            if (succeeded)
            {
              succeeded = (LaterTimes_46 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
              }
            }
            if (succeeded)
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140var_use_analysis.call_var_first_use\'/7", (MR_String) "multiple solutions for variable production time");
                return;
              }
          }
        }
        break;
    }
    Var_60 = (STATE_VARIABLE_CostSoFar_0_52 + FirstTime_41);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *FoundFirstUse_12 = base;
      MR_hl_field(1, base, 0) = MR_box_float(Var_60);
    }
    succeeded = (VarUseType_26 == (MR_Integer) 0);
    if (succeeded)
    {
      TypeCtorInfo_76_76 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0);
      succeeded = mercury__list__member_2_p_0(TypeCtorInfo_76_76, ((MR_Box) (Var_20)), BoundVars_9);
      succeeded = !(succeeded);
    }
    if (succeeded)
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140var_use_analysis.call_var_first_use\'/7", (MR_String) "a bound var must be produced by a call if it is an argument.");
        return;
      }
    succeeded = (VarUseType_26 == (MR_Integer) 1);
    if (succeeded)
    {
      TypeCtorInfo_77_77 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0);
      succeeded = mercury__list__member_2_p_0(TypeCtorInfo_77_77, ((MR_Box) (Var_20)), BoundVars_9);
    }
    if (succeeded)
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140var_use_analysis.call_var_first_use\'/7", (MR_String) "a consumed var must not be mentioned in BoundVars");
        return;
      }
    succeeded = (VarUseType_26 == (MR_Integer) 0);
    if (succeeded)
    {
      if (((((MR_tag((MR_Word) AtomicGoal_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, AtomicGoal_8, (MR_Integer) 0)))) == (MR_Integer) 5))))
      {
        MR_Integer Var_78 = ((MR_Integer) ((MR_hl_field(3, AtomicGoal_8, (MR_Integer) 1))));

        succeeded = (Var_20 == Var_78);
      }
      else
      if (((((MR_tag((MR_Word) AtomicGoal_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, AtomicGoal_8, (MR_Integer) 0)))) == (MR_Integer) 6))))
      {
        MR_Integer Var_79 = ((MR_Integer) ((MR_hl_field(3, AtomicGoal_8, (MR_Integer) 1))));

        succeeded = (Var_20 == Var_79);
      }
      else
        succeeded = MR_FALSE;
    }
    if (succeeded)
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140var_use_analysis.call_var_first_use\'/7", (MR_String) "a HO call site cannot produce its own HO value");
        return;
      }
  }
  else
    *FoundFirstUse_12 = (MR_Word) ((MR_Unsigned) 0U);
}

static void MR_CALL 
var_use_analysis__call_args_first_use_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Float conv1_Time_18;

  var_use_analysis__get_call_site_dynamic_var_use_time_9_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), MR_unbox_float((MR_hl_field(0, closure, (MR_Integer) 7))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 8)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 9)))), ((MR_Integer) (wrapper_arg_1)), &conv1_Time_18);
  *wrapper_arg_2 = MR_box_float(conv1_Time_18);
}

static void MR_CALL 
var_use_analysis__call_args_first_use_5_p_0(
  MR_Word Args_6,
  MR_Float Cost_7,
  MR_Word StaticInfo_8,
  MR_Word CostAndCallees_9,
  MR_Word * Times_10)
{
  MR_bool succeeded;
  MR_Word CliquePtr_11 = ((MR_Word) ((MR_hl_field(0, StaticInfo_8, (MR_Integer) 0))));
  MR_Integer Var_16 = ((MR_Integer) ((MR_hl_field(0, StaticInfo_8, (MR_Integer) 5))));
  MR_Word VarUseOptions_17 = ((MR_Word) ((MR_hl_field(0, StaticInfo_8, (MR_Integer) 6))));
  MR_Word CallStack_18 = ((MR_Word) ((MR_hl_field(0, StaticInfo_8, (MR_Integer) 7))));
  MR_Word RecursionType_19 = ((MR_Word) ((MR_hl_field(0, StaticInfo_8, (MR_Integer) 8))));
  MR_Word CurDepth_20 = ((MR_Word) ((MR_hl_field(0, StaticInfo_8, (MR_Integer) 9))));
  MR_Word VarUseType_22 = ((MR_Unsigned) ((MR_hl_field(0, VarUseOptions_17, (MR_Integer) 2))) & (MR_Integer) 3);
  MR_Word HigherOrder_23 = ((MR_Unsigned) ((MR_hl_field(0, CostAndCallees_9, (MR_Integer) 3))) & (MR_Integer) 1);
  MR_Word Var_40 = ((MR_Word) ((MR_hl_field(0, CostAndCallees_9, (MR_Integer) 2))));

  switch (HigherOrder_23) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word ArgNums_25;

        mercury__list__member_indexes0_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (Var_16)), Args_6, &ArgNums_25);
        succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&analysis_utils__analysis_utils__type_ctor_info_callee_0), Var_40);
        if (succeeded)
        {
          MR_Float Time_26;

          switch (VarUseType_22) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              Time_26 = (MR_Float) 0.0000000000000000;
              break;
            case (MR_Integer) 2:
            case (MR_Integer) 0:
              Time_26 = Cost_7;
              break;
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Times_10 = base;
            MR_hl_field(1, base, 0) = MR_box_float(Time_26);
            MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        else
        {
          MR_Word SingletonCallee_27;
          MR_Box conv0_SingletonCallee_27;

          succeeded = mercury__set__is_singleton_2_p_0((MR_Word) (&analysis_utils__analysis_utils__type_ctor_info_callee_0), Var_40, &conv0_SingletonCallee_27);
          if (succeeded)
          {
            SingletonCallee_27 = ((MR_Word) (conv0_SingletonCallee_27));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            MR_Word CSDPtr_28 = ((MR_Word) ((MR_hl_field(0, SingletonCallee_27, (MR_Integer) 1))));
            MR_Word Times0_29;
            MR_Word Var_31;

            {
              Var_31 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_31, 0) = ((MR_Box) (&var_use_analysis_scalar_common_7[0]));
              MR_hl_field(0, Var_31, 1) = ((MR_Box) (var_use_analysis__call_args_first_use_5_p_0_1));
              MR_hl_field(0, Var_31, 2) = ((MR_Box) ((MR_Integer) 7));
              MR_hl_field(0, Var_31, 3) = ((MR_Box) (CliquePtr_11));
              MR_hl_field(0, Var_31, 4) = ((MR_Box) (CSDPtr_28));
              MR_hl_field(0, Var_31, 5) = ((MR_Box) (RecursionType_19));
              MR_hl_field(0, Var_31, 6) = ((MR_Box) (CurDepth_20));
              MR_hl_field(0, Var_31, 7) = MR_box_float(Cost_7);
              MR_hl_field(0, Var_31, 8) = ((MR_Box) (CallStack_18));
              MR_hl_field(0, Var_31, 9) = ((MR_Box) (VarUseOptions_17));
            }
            mercury__list__map_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_float_0), Var_31, ArgNums_25, &Times0_29);
            mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_float_0), Times0_29, Times_10);
          }
          else
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140var_use_analysis.call_args_first_use\'/5", (MR_String) "wrong number of callees for normal call site");
              return;
            }
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Float Time_35;

        switch (VarUseType_22) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            Time_35 = (MR_Float) 0.0000000000000000;
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 0:
            Time_35 = Cost_7;
            break;
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Times_10 = base;
          MR_hl_field(1, base, 0) = MR_box_float(Time_35);
          MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
  }
}

static void MR_CALL 
var_use_analysis__prepare_for_proc_var_first_use_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_HeadVar__3_3;
  MR_Word conv3_HeadVar__5_5;

  coverage__add_coverage_point_to_map_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_HeadVar__3_3, ((MR_Word) (wrapper_arg_4)), &conv3_HeadVar__5_5);
  *wrapper_arg_3 = ((MR_Box) (conv4_HeadVar__3_3));
  *wrapper_arg_5 = ((MR_Box) (conv3_HeadVar__5_5));
}

static void MR_CALL 
var_use_analysis__prepare_for_proc_var_first_use_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__4_4;

  analysis_utils__build_dynamic_call_site_cost_and_callee_map_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_HeadVar__4_4);
  *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__4_4));
}

static void MR_CALL 
var_use_analysis__prepare_for_proc_var_first_use_7_p_0(
  MR_Word CliquePtr_8,
  MR_Word PDPtr_9,
  MR_Integer ArgNum_10,
  MR_Word RecursionType_11,
  MR_Word Depth_12,
  MR_Word VarUseOptions_13,
  MR_Word * Info_14)
{
  MR_bool succeeded;
  MR_Word Deep_15 = ((MR_Word) ((MR_hl_field(0, VarUseOptions_13, (MR_Integer) 0))));
  MR_Word PD_16;
  MR_Word PSPtr_17;
  MR_Word MaybeProcrep_18;

  profile__deep_lookup_proc_dynamics_3_p_0(Deep_15, PDPtr_9, &PD_16);
  PSPtr_17 = ((MR_Word) ((MR_hl_field(0, PD_16, (MR_Integer) 0))));
  analysis_utils__deep_get_maybe_procrep_3_p_0(Deep_15, PSPtr_17, &MaybeProcrep_18);
  if (((MR_tag((MR_Word) MaybeProcrep_18)) == (MR_Integer) 1))
  {
    MR_String Error_45 = ((MR_String) ((MR_hl_field(1, MaybeProcrep_18, (MR_Integer) 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *Info_14 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Error_45));
    }
  }
  else
  {
    MR_Word ProcRep_19 = ((MR_Word) ((MR_hl_field(0, MaybeProcrep_18, (MR_Integer) 0))));
    MR_Word ProcDefn_20 = ((MR_Word) ((MR_hl_field(0, ProcRep_19, (MR_Integer) 1))));
    MR_Word HeadVars_21 = ((MR_Word) ((MR_hl_field(0, ProcDefn_20, (MR_Integer) 0))));
    MR_Integer Var_22;
    MR_Word Mode_23;
    MR_Word Var_46;
    MR_Box conv0_Var_46;

    succeeded = mercury__list__index0_3_p_0((MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_head_var_rep_0), HeadVars_21, ArgNum_10, &conv0_Var_46);
    if (succeeded)
    {
      Var_46 = ((MR_Word) (conv0_Var_46));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      Var_22 = ((MR_Integer) ((MR_hl_field(0, Var_46, (MR_Integer) 0))));
      Mode_23 = ((MR_Word) ((MR_hl_field(0, Var_46, (MR_Integer) 1))));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word ComputedUse_24;
      MR_Word VarUseType_25;
      MR_Word Slots_28;
      MR_Word CallSiteCostMap_29;
      MR_Word MaybeRecursiveCallSiteCostMap_30;
      MR_Word RecursiveCallSiteCostMap_31;
      MR_Word Goal0_32;
      MR_Word LastGoalId_33;
      MR_Word ContainingGoalMap_34;
      MR_Word Goal_35;
      MR_Word PS_36;
      MR_Word ProcLabel_37;
      MR_ArrayPtr CoveragePointsArray_38;
      MR_Word CoveragePoints_39;
      MR_Word MaybeCoveragePointsArray_40;
      MR_Word SolnsCoveragePointMap_41;
      MR_Word BranchCoveragePointMap_42;
      MR_Word Own_43;
      MR_Word CoverageArray_44;
      MR_Word Var_62;
      MR_Word Var_63;
      MR_Word Var_64;
      MR_Word Var_69;
      MR_Word Var_70;
      MR_ArrayPtr Var_102;
      MR_Box conv2_CallSiteCostMap_29;
      MR_Box conv6_SolnsCoveragePointMap_41;
      MR_Box conv5_BranchCoveragePointMap_42;

      var_use_analysis__var_mode_to_var_use_type_2_p_0(Mode_23, &ComputedUse_24);
      VarUseType_25 = ((MR_Unsigned) ((MR_hl_field(0, VarUseOptions_13, (MR_Integer) 2))) & (MR_Integer) 3);
      succeeded = (VarUseType_25 == ComputedUse_24);
      if (!(succeeded))
      {
        MR_Integer PDNum_26 = (MR_Integer) (PDPtr_9);
        MR_String Msg_27;
        MR_String Var_52;
        MR_String Var_55;
        MR_String Var_136;
        MR_String Var_144;
        MR_String Var_145;
        MR_String Var_152;
        MR_String Var_154;
        MR_String Var_155;
        MR_String Var_157;
        MR_String Var_158;

        Var_52 = mercury__string__string_1_f_0((MR_Word) (&var_use_analysis__var_use_analysis__type_ctor_info_var_use_type_0), ((MR_Box) (VarUseType_25)));
        Var_55 = mercury__string__string_1_f_0((MR_Word) (&var_use_analysis__var_use_analysis__type_ctor_info_var_use_type_0), ((MR_Box) (ComputedUse_24)));
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&var_use_analysis_scalar_common_3[0]), PDNum_26, &Var_136);
        Var_144 = mercury__string__f_43_43_2_f_0((MR_String) " in proc dynamic ", Var_136);
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&var_use_analysis_scalar_common_3[0]), ArgNum_10, &Var_145);
        Var_152 = mercury__string__f_43_43_2_f_0(Var_145, Var_144);
        Var_154 = mercury__string__f_43_43_2_f_0((MR_String) ", Arg ", Var_152);
        Var_155 = mercury__string__f_43_43_2_f_0(Var_55, Var_154);
        Var_157 = mercury__string__f_43_43_2_f_0((MR_String) " calculated from procrep: ", Var_155);
        Var_158 = mercury__string__f_43_43_2_f_0(Var_52, Var_157);
        Msg_27 = mercury__string__f_43_43_2_f_0((MR_String) "Var uses do not match, passed: ", Var_158);
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140var_use_analysis.prepare_for_proc_var_first_use\'/7", Msg_27);
          return;
        }
      }
      analysis_utils__proc_dynamic_paired_call_site_slots_3_p_0(Deep_15, PDPtr_9, &Slots_28);
      {
        Var_62 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_62, 0) = ((MR_Box) (&var_use_analysis_scalar_common_6[0]));
        MR_hl_field(0, Var_62, 1) = ((MR_Box) (var_use_analysis__prepare_for_proc_var_first_use_7_p_0_1));
        MR_hl_field(0, Var_62, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_62, 3) = ((MR_Box) (Deep_15));
      }
      Var_63 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0), (MR_Word) (&var_use_analysis_scalar_common_1[0]));
      mercury__list__foldl_4_p_0((MR_Word) (&var_use_analysis_scalar_common_2[0]), (MR_Word) (&var_use_analysis_scalar_common_2[1]), Var_62, Slots_28, ((MR_Box) (Var_63)), &conv2_CallSiteCostMap_29);
      CallSiteCostMap_29 = ((MR_Word) (conv2_CallSiteCostMap_29));
      {
        Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_64, 0) = ((MR_Box) (Depth_12));
      }
      analysis_utils__build_recursive_call_site_cost_map_6_p_0(Deep_15, CliquePtr_8, PDPtr_9, RecursionType_11, Var_64, &MaybeRecursiveCallSiteCostMap_30);
      RecursiveCallSiteCostMap_31 = ((MR_Word) ((MR_hl_field(0, MaybeRecursiveCallSiteCostMap_30, (MR_Integer) 0))));
      Goal0_32 = ((MR_Word) ((MR_hl_field(0, ProcDefn_20, (MR_Integer) 1))));
      program_representation_utils__label_goals_4_p_0((MR_Word) (&mercury__unit__unit__type_ctor_info_unit_0), &LastGoalId_33, &ContainingGoalMap_34, Goal0_32, &Goal_35);
      profile__deep_lookup_proc_statics_3_p_0(Deep_15, PSPtr_17, &PS_36);
      ProcLabel_37 = ((MR_Word) ((MR_hl_field(0, PS_36, (MR_Integer) 0))));
      Var_102 = ((MR_ArrayPtr) ((MR_hl_field(0, PS_36, (MR_Integer) 9))));
      MaybeCoveragePointsArray_40 = ((MR_Word) ((MR_hl_field(0, PD_16, (MR_Integer) 2))));
      if ((MaybeCoveragePointsArray_40 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140var_use_analysis.prepare_for_proc_var_first_use\'/7", (MR_String) "Couldn\'t get coverage info");
          return;
        }
      else
        CoveragePointsArray_38 = ((MR_ArrayPtr) ((MR_hl_field(1, MaybeCoveragePointsArray_40, (MR_Integer) 0))));
      coverage__coverage_point_arrays_to_list_3_p_0(Var_102, CoveragePointsArray_38, &CoveragePoints_39);
      Var_69 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0), (MR_Word) (&coverage__coverage__type_ctor_info_coverage_point_0));
      Var_70 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0), (MR_Word) (&coverage__coverage__type_ctor_info_coverage_point_0));
      mercury__list__foldl2_6_p_0((MR_Word) (&coverage__coverage__type_ctor_info_coverage_point_0), (MR_Word) (&var_use_analysis_scalar_common_2[2]), (MR_Word) (&var_use_analysis_scalar_common_2[2]), (MR_Word) (&var_use_analysis_scalar_common_2[8]), CoveragePoints_39, ((MR_Box) (Var_69)), &conv6_SolnsCoveragePointMap_41, ((MR_Box) (Var_70)), &conv5_BranchCoveragePointMap_42);
      SolnsCoveragePointMap_41 = ((MR_Word) (conv6_SolnsCoveragePointMap_41));
      BranchCoveragePointMap_42 = ((MR_Word) (conv5_BranchCoveragePointMap_42));
      profile__deep_lookup_pd_own_3_p_0(Deep_15, PDPtr_9, &Own_43);
      coverage__goal_annotate_with_coverage_9_p_0((MR_Word) (&analysis_utils__analysis_utils__type_ctor_info_callee_0), ProcLabel_37, Goal_35, Own_43, CallSiteCostMap_29, SolnsCoveragePointMap_41, BranchCoveragePointMap_42, ContainingGoalMap_34, LastGoalId_33, &CoverageArray_44);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
        *Info_14 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Goal_35));
        MR_hl_field(1, base, 1) = ((MR_Box) (LastGoalId_33));
        MR_hl_field(1, base, 2) = ((MR_Box) (ContainingGoalMap_34));
        MR_hl_field(1, base, 3) = ((MR_Box) (CoverageArray_44));
        MR_hl_field(1, base, 4) = ((MR_Box) (CallSiteCostMap_29));
        MR_hl_field(1, base, 5) = ((MR_Box) (RecursiveCallSiteCostMap_31));
        MR_hl_field(1, base, 6) = ((MR_Box) (Var_22));
      }
    }
    else
    {
      MR_Integer PDNum_77 = (MR_Integer) (PDPtr_9);
      MR_String Msg_78;
      MR_String Var_160;
      MR_String Var_168;
      MR_String Var_169;
      MR_String Var_176;

      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&var_use_analysis_scalar_common_3[0]), PDNum_77, &Var_160);
      Var_168 = mercury__string__f_43_43_2_f_0((MR_String) " out of range for PD ", Var_160);
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&var_use_analysis_scalar_common_3[0]), ArgNum_10, &Var_169);
      Var_176 = mercury__string__f_43_43_2_f_0(Var_169, Var_168);
      Msg_78 = mercury__string__f_43_43_2_f_0((MR_String) "proc_dynamic_var_use_info: ArgNum ", Var_176);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *Info_14 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Msg_78));
      }
    }
  }
}

void MR_CALL 
var_use_analysis__pessimistic_var_use_time_3_p_0(
  MR_Word VarUseType_4,
  MR_Float ProcCost_5,
  MR_Float * CostUntilUse_6)
{
  switch (VarUseType_4) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      *CostUntilUse_6 = (MR_Float) 0.0000000000000000;
      break;
    case (MR_Integer) 2:
    case (MR_Integer) 0:
      *CostUntilUse_6 = ProcCost_5;
      break;
  }
}

void MR_CALL 
var_use_analysis__pessimistic_var_use_info_3_p_0(
  MR_Word VarUseType_4,
  MR_Float ProcCost_5,
  MR_Word * VarUseInfo_6)
{
  MR_Float CostUntilUse_7;

  switch (VarUseType_4) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      CostUntilUse_7 = (MR_Float) 0.0000000000000000;
      break;
    case (MR_Integer) 2:
    case (MR_Integer) 0:
      CostUntilUse_7 = ProcCost_5;
      break;
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *VarUseInfo_6 = base;
    MR_hl_field(0, base, 0) = MR_box_float(CostUntilUse_7);
    MR_hl_field(0, base, 1) = MR_box_float(ProcCost_5);
    MR_hl_field(0, base, 2) = (MR_Box) ((MR_Unsigned) (VarUseType_4));
  }
}

void MR_CALL 
var_use_analysis__var_mode_to_var_use_type_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * VarUseType_5)
{
  MR_bool succeeded;
  MR_Word InitialInst_3 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))) >> 2)) & (MR_Integer) 3);
  MR_Word FinalInst_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 3);

  succeeded = (InitialInst_3 == (MR_Integer) 1);
  if (succeeded)
    succeeded = (FinalInst_4 == (MR_Integer) 1);
  if (succeeded)
    *VarUseType_5 = (MR_Integer) 1;
  else
  {
    succeeded = (InitialInst_3 == (MR_Integer) 0);
    if (succeeded)
      succeeded = (FinalInst_4 == (MR_Integer) 1);
    if (succeeded)
      *VarUseType_5 = (MR_Integer) 0;
    else
      *VarUseType_5 = (MR_Integer) 2;
  }
}

static MR_bool MR_CALL 
var_use_analysis__average_var_use_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = var_use_analysis__IntroducedFrom__pred__average_var_use__169__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
var_use_analysis__average_var_use_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Float conv1_STATE_VARIABLE_AccCost_12;
  MR_Float conv0_STATE_VARIABLE_AccProcCost_14;

  var_use_analysis__sum_use_info_costs_5_p_0(((MR_Word) (wrapper_arg_1)), MR_unbox_float(wrapper_arg_2), &conv1_STATE_VARIABLE_AccCost_12, MR_unbox_float(wrapper_arg_4), &conv0_STATE_VARIABLE_AccProcCost_14);
  *wrapper_arg_3 = MR_box_float(conv1_STATE_VARIABLE_AccCost_12);
  *wrapper_arg_5 = MR_box_float(conv0_STATE_VARIABLE_AccProcCost_14);
}

MR_Word MR_CALL 
var_use_analysis__average_var_use_1_f_0(
  MR_Word Uses_3)
{
  MR_bool succeeded;
  MR_Word HeadVar__2_2;
  MR_Float CostUntilUse_4;
  MR_Float AvgProcCost_5;
  MR_Word Type_6;

  if ((Uses_3 == (MR_Word) ((MR_Unsigned) 0U)))
    mercury__require__unexpected_2_p_0((MR_String) "function \140var_use_analysis.average_var_use\'/1", (MR_String) "cannot average zero items");
  else
  {
    MR_Float SumCost_10;
    MR_Float SumProcCost_11;
    MR_Float Num_12;
    MR_Word TestType_13;
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(1, Uses_3, (MR_Integer) 0))));
    MR_Integer Var_23;
    MR_Box conv3_SumCost_10;
    MR_Box conv2_SumProcCost_11;

    Type_6 = ((MR_Unsigned) ((MR_hl_field(0, Var_19, (MR_Integer) 2))) & (MR_Integer) 3);
    mercury__list__foldl2_6_p_0((MR_Word) (&var_use_analysis__var_use_analysis__type_ctor_info_var_use_info_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_float_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_float_0), (MR_Word) (&var_use_analysis_scalar_common_2[7]), Uses_3, MR_box_float((MR_Float) 0.0000000000000000), &conv3_SumCost_10, MR_box_float((MR_Float) 0.0000000000000000), &conv2_SumProcCost_11);
    SumCost_10 = MR_unbox_float(conv3_SumCost_10);
    SumProcCost_11 = MR_unbox_float(conv2_SumProcCost_11);
    Var_23 = mercury__list__length_1_f_0((MR_Word) (&var_use_analysis__var_use_analysis__type_ctor_info_var_use_info_0), Uses_3);
    Num_12 = mercury__float__float_1_f_0(Var_23);
    CostUntilUse_4 = mercury__float__f_slash_2_f_0(SumCost_10, Num_12);
    AvgProcCost_5 = mercury__float__f_slash_2_f_0(SumProcCost_11, Num_12);
    {
      TestType_13 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TestType_13, 0) = ((MR_Box) (&var_use_analysis_scalar_common_5[0]));
      MR_hl_field(0, TestType_13, 1) = ((MR_Box) (var_use_analysis__average_var_use_1_f_0_2));
      MR_hl_field(0, TestType_13, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, TestType_13, 3) = ((MR_Box) (Type_6));
    }
    succeeded = mercury__list__all_true_2_p_0((MR_Word) (&var_use_analysis__var_use_analysis__type_ctor_info_var_use_info_0), TestType_13, Uses_3);
    if (!(succeeded))
      mercury__require__unexpected_2_p_0((MR_String) "function \140var_use_analysis.average_var_use\'/1", (MR_String) "use types do not match");
  }
  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = MR_box_float(CostUntilUse_4);
    MR_hl_field(0, HeadVar__2_2, 1) = MR_box_float(AvgProcCost_5);
    MR_hl_field(0, HeadVar__2_2, 2) = (MR_Box) ((MR_Unsigned) (Type_6));
  }
  return HeadVar__2_2;
}

static MR_bool MR_CALL 
var_use_analysis____Unify____first_use_rec_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = var_use_analysis____Unify____first_use_rec_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
var_use_analysis____Compare____first_use_rec_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  var_use_analysis____Compare____first_use_rec_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
var_use_analysis____Unify____found_first_use_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = var_use_analysis____Unify____found_first_use_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
var_use_analysis____Compare____found_first_use_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  var_use_analysis____Compare____found_first_use_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
var_use_analysis____Unify____intermodule_var_use_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = var_use_analysis____Unify____intermodule_var_use_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
var_use_analysis____Compare____intermodule_var_use_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  var_use_analysis____Compare____intermodule_var_use_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
var_use_analysis____Unify____proc_var_first_use_prepared_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = var_use_analysis____Unify____proc_var_first_use_prepared_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
var_use_analysis____Compare____proc_var_first_use_prepared_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  var_use_analysis____Compare____proc_var_first_use_prepared_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
var_use_analysis____Unify____recursive_calls_list_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = var_use_analysis____Unify____recursive_calls_list_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
var_use_analysis____Compare____recursive_calls_list_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  var_use_analysis____Compare____recursive_calls_list_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
var_use_analysis____Unify____recursive_case_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = var_use_analysis____Unify____recursive_case_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
var_use_analysis____Compare____recursive_case_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  var_use_analysis____Compare____recursive_case_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
var_use_analysis____Unify____var_first_use_static_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = var_use_analysis____Unify____var_first_use_static_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
var_use_analysis____Compare____var_first_use_static_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  var_use_analysis____Compare____var_first_use_static_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
var_use_analysis____Unify____var_use_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = var_use_analysis____Unify____var_use_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
var_use_analysis____Compare____var_use_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  var_use_analysis____Compare____var_use_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
var_use_analysis____Unify____var_use_options_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = var_use_analysis____Unify____var_use_options_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
var_use_analysis____Compare____var_use_options_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  var_use_analysis____Compare____var_use_options_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
var_use_analysis____Unify____var_use_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = var_use_analysis____Unify____var_use_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
var_use_analysis____Compare____var_use_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  var_use_analysis____Compare____var_use_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

// :- end_module var_use_analysis.
