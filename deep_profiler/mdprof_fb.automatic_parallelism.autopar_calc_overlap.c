/*
** Automatically generated from `autopar_calc_overlap.m'
** by the Mercury compiler,
** version rotd-2018-03-01
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


// :- module mdprof_fb.automatic_parallelism.autopar_calc_overlap.
// :- implementation.

/*
INIT mercury__mdprof_fb__automatic_parallelism__autopar_calc_overlap__init
ENDINIT
*/

#include "mdprof_fb.automatic_parallelism.autopar_calc_overlap.mih"


#include "analysis_utils.mih"
#include "coverage.mih"
#include "exclude.mih"
#include "mdbcomp.mih"
#include "mdprof_fb.mih"
#include "measurement_units.mih"
#include "measurements.mih"
#include "profile.mih"
#include "program_representation_utils.mih"
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
#include "mdprof_fb.automatic_parallelism.mih"
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
#include "digraph.mih"
#include "enum.mih"
#include "float.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "lazy.mih"
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
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "mdprof_fb.automatic_parallelism.autopar_costs.mih"
#include "mdprof_fb.automatic_parallelism.autopar_types.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0;

static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdbcomp__feedback__automatic_parallelism__pti_seq_conj_1__plain_mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0;

static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdbcomp__program_representation__pti_goal_rep_1__plain_mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0;

static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_calc_overlap__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct2 mdprof_fb__automatic_parallelism__autopar_calc_overlap__pair__ti_pair_2builtin__type_ctor_info_int_0mdprof_fb__automatic_parallelism__autopar_calc_overlap__type_ctor_info_production_or_consumption_0;

static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_calc_overlap__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_int_0mdprof_fb__automatic_parallelism__autopar_calc_overlap__type_ctor_info_production_or_consumption_0;

static const MR_FA_PseudoTypeInfo_Struct2 mdprof_fb__automatic_parallelism__autopar_calc_overlap__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_float_0;

static const MR_FA_PseudoTypeInfo_Struct2 mdprof_fb__automatic_parallelism__autopar_calc_overlap__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_mdprof_fb__automatic_parallelism__autopar_calc_overlap__type_ctor_info_production_or_consumption_0;

static const MR_FA_TypeInfo_Struct2 mdprof_fb__automatic_parallelism__autopar_calc_overlap__pair__ti_pair_2builtin__type_ctor_info_float_0builtin__type_ctor_info_float_0;

static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_calc_overlap__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_float_0builtin__type_ctor_info_float_0;

static const MR_FA_PseudoTypeInfo_Struct2 mdprof_fb__automatic_parallelism__autopar_calc_overlap__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_float_0;

static const MR_EnumFunctorDesc mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__enum_functor_desc_find_production_or_consumption_0_0;

static const MR_EnumFunctorDesc mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__enum_functor_desc_find_production_or_consumption_0_1;

static const MR_EnumFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__enum_value_ordered_find_production_or_consumption_0[2];

static const MR_EnumFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__enum_name_ordered_find_production_or_consumption_0[2];

static const MR_Integer mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__functor_number_map_find_production_or_consumption_0[2];

static const MR_EnumFunctorDesc mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__enum_functor_desc_is_last_par_conjunct_0_0;

static const MR_EnumFunctorDesc mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__enum_functor_desc_is_last_par_conjunct_0_1;

static const MR_EnumFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__enum_value_ordered_is_last_par_conjunct_0[2];

static const MR_EnumFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__enum_name_ordered_is_last_par_conjunct_0[2];

static const MR_Integer mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__functor_number_map_is_last_par_conjunct_0[2];

static const MR_PseudoTypeInfo mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__field_types_production_or_consumption_0_0[1];

static const MR_DuFunctorDesc mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__du_functor_desc_production_or_consumption_0_0;

static const MR_PseudoTypeInfo mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__field_types_production_or_consumption_0_1[1];

static const MR_DuFunctorDesc mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__du_functor_desc_production_or_consumption_0_1;

static const MR_DuFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__du_stag_ordered_production_or_consumption_0_0[1];

static const MR_DuFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__du_stag_ordered_production_or_consumption_0_1[1];

static const MR_DuPtagLayout mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__du_ptag_ordered_production_or_consumption_0[2];

static const MR_DuFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__du_name_ordered_production_or_consumption_0[2];

static const MR_Integer mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__functor_number_map_production_or_consumption_0[2];

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap__IntroducedFrom__pred__get_consumptions_and_productions_list__515__1_3_p_0(
  MR_Word HeadVar__1_81,
  MR_Word HeadVar__2_82,
  MR_Word * HeadVar__3_83);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap__IntroducedFrom__pred__get_consumptions_and_productions_list__507__1_3_p_0(
  MR_Word HeadVar__1_75,
  MR_Word HeadVar__2_76,
  MR_Word * HeadVar__3_77);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap____Compare____production_or_consumption_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap____Unify____production_or_consumption_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap____Compare____is_last_par_conjunct_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap____Unify____is_last_par_conjunct_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap____Compare____find_production_or_consumption_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap____Unify____find_production_or_consumption_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap__var_productions_4_p_0(
  MR_Float TimeBefore_5,
  MR_Word Goal_6,
  MR_Integer Var_7,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap__var_consumptions_4_p_0(
  MR_Float TimeBefore_5,
  MR_Word Goal_6,
  MR_Integer Var_7,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_consumptions_and_productions_list_9_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_consumptions_and_productions_list_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_consumptions_and_productions_list_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_consumptions_and_productions_list_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_consumptions_and_productions_list_9_p_0(
  MR_Word Goal_10,
  MR_Word STATE_VARIABLE_ConsumedVars_0_27,
  MR_Word * STATE_VARIABLE_ConsumedVars_28,
  MR_Word STATE_VARIABLE_ProducedVars_0_29,
  MR_Word * STATE_VARIABLE_ProducedVars_30,
  MR_Float STATE_VARIABLE_Time_0_31,
  MR_Float * STATE_VARIABLE_Time_32,
  MR_Word STATE_VARIABLE_List_0_33,
  MR_Word * STATE_VARIABLE_List_34);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap__merge_consumptions_and_productions_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap__var_production_time_to_map_5_p_0(
  MR_Float TimeBefore_6,
  MR_Word Goal_7,
  MR_Integer Var_8,
  MR_Word STATE_VARIABLE_Map_0_11,
  MR_Word * STATE_VARIABLE_Map_12);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_productions_map_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_productions_map_8_p_0(
  MR_Word Vars_9,
  MR_Word Goal_10,
  MR_Float STATE_VARIABLE_Time_0_17,
  MR_Float * STATE_VARIABLE_Time_18,
  MR_Word STATE_VARIABLE_Executions_0_19,
  MR_Word * STATE_VARIABLE_Executions_20,
  MR_Word STATE_VARIABLE_Map_0_21,
  MR_Word * STATE_VARIABLE_Map_22);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap__adjust_time_for_waits_2_5_p_0(
  MR_Float LastEnd_6,
  MR_Float STATE_VARIABLE_Time_0_13,
  MR_Float * STATE_VARIABLE_Time_14,
  MR_Word STATE_VARIABLE_Executions_0_15,
  MR_Word * STATE_VARIABLE_Executions_16);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_dependent_parallel_cost_2_13_p_0(
  MR_Word Info_14,
  MR_Word ProductionsMap_15,
  MR_Word HeadVar__3_3,
  MR_Float STATE_VARIABLE_PrevSeqConsumeTime_0_25,
  MR_Float * STATE_VARIABLE_PrevSeqConsumeTime_26,
  MR_Float STATE_VARIABLE_PrevParConsumeTime_0_27,
  MR_Float * STATE_VARIABLE_PrevParConsumeTime_28,
  MR_Float STATE_VARIABLE_ResumeTime_0_29,
  MR_Float * STATE_VARIABLE_ResumeTime_30,
  MR_Word STATE_VARIABLE_RevExecution_0_31,
  MR_Word * STATE_VARIABLE_RevExecution_32,
  MR_Word STATE_VARIABLE_ConsumptionsMap_0_33,
  MR_Word * STATE_VARIABLE_ConsumptionsMap_34);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_dependent_parallel_cost_production_12_p_0(
  MR_Word Info_13,
  MR_Float SeqProdTime_14,
  MR_Float STATE_VARIABLE_PrevSeqConsumeTime_0_22,
  MR_Float * STATE_VARIABLE_PrevSeqConsumeTime_23,
  MR_Float STATE_VARIABLE_PrevParConsumeTime_0_24,
  MR_Float * STATE_VARIABLE_PrevParConsumeTime_25,
  MR_Float STATE_VARIABLE_ResumeTime_0_26,
  MR_Float * STATE_VARIABLE_ResumeTime_27,
  MR_Word STATE_VARIABLE_RevExecution_0_28,
  MR_Word * STATE_VARIABLE_RevExecution_29,
  MR_Word STATE_VARIABLE_ConsumptionsMap_0_30,
  MR_Word * STATE_VARIABLE_ConsumptionsMap_31);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_dependent_parallel_cost_consumption_13_p_0(
  MR_Word Info_14,
  MR_Word ProductionsMap_15,
  MR_Word HeadVar__3_3,
  MR_Float STATE_VARIABLE_PrevSeqConsumeTime_0_28,
  MR_Float * STATE_VARIABLE_PrevSeqConsumeTime_29,
  MR_Float STATE_VARIABLE_PrevParConsumeTime_0_30,
  MR_Float * STATE_VARIABLE_PrevParConsumeTime_31,
  MR_Float STATE_VARIABLE_ResumeTime_0_32,
  MR_Float * STATE_VARIABLE_ResumeTime_33,
  MR_Word STATE_VARIABLE_RevExecution_0_34,
  MR_Word * STATE_VARIABLE_RevExecution_35,
  MR_Word STATE_VARIABLE_ConsumptionsMap_0_36,
  MR_Word * STATE_VARIABLE_ConsumptionsMap_37);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_9_p_0(
  MR_Word Info_10,
  MR_Integer NumMiddleGoals_11,
  MR_Word Conjunct_12,
  MR_Integer STATE_VARIABLE_ConjNum_0_25,
  MR_Integer * STATE_VARIABLE_ConjNum_26,
  MR_Integer STATE_VARIABLE_NumGoals_0_27,
  MR_Integer * STATE_VARIABLE_NumGoals_28,
  MR_Word STATE_VARIABLE_CostData_0_29,
  MR_Word * STATE_VARIABLE_CostData_30);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9,
  MR_Box wrapper_arg_10,
  MR_Box * wrapper_arg_11);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_p_0(
  MR_Word Info_13,
  MR_Word AllSharedVars_14,
  MR_Word IsLastConjunct_15,
  MR_Word Conjunct_16,
  MR_Integer STATE_VARIABLE_ConjNum_0_55,
  MR_Integer * STATE_VARIABLE_ConjNum_56,
  MR_Word STATE_VARIABLE_ProductionsMap_0_57,
  MR_Word * STATE_VARIABLE_ProductionsMap_58,
  MR_Word STATE_VARIABLE_Overlap_0_59,
  MR_Word * STATE_VARIABLE_Overlap_60,
  MR_Word STATE_VARIABLE_Metrics_0_61,
  MR_Word * STATE_VARIABLE_Metrics_62);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap__calc_cost_and_dead_time_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Float * HeadVar__2_2,
  MR_Float * HeadVar__3_3);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap__calc_cost_and_dead_time_2_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Float LastStop_2,
  MR_Float STATE_VARIABLE_Time_0_3,
  MR_Float * STATE_VARIABLE_Time_4,
  MR_Float STATE_VARIABLE_DeadTime_0_5,
  MR_Float * STATE_VARIABLE_DeadTime_6);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap__maybe_calc_sequential_cost__ho2_7_p_0(
  MR_Float * CostPercall_11,
  MR_Integer Calls_12,
  MR_Word STATE_VARIABLE_Acc_0_17,
  MR_Word * STATE_VARIABLE_Acc_18);

static MR_Word MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap__IntroducedFrom__func__calculate_parallel_cost__65__2_2_f_0(
  MR_Word LambdaHeadVar__1_35,
  MR_Word LambdaHeadVar__2_36);

static MR_Word MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap__IntroducedFrom__func__calculate_parallel_cost__65__1_1_f_0(
  MR_Word LambdaHeadVar__1_33);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap__maybe_calc_sequential_cost__ho1_7_p_0(
  MR_Float * CostPercall_11,
  MR_Integer Calls_12,
  MR_Word STATE_VARIABLE_Acc_0_17,
  MR_Word * STATE_VARIABLE_Acc_18);

static MR_Word MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap__IntroducedFrom__func__calculate_parallel_cost__69__2_2_f_0(
  MR_Word LambdaHeadVar__1_44,
  MR_Word LambdaHeadVar__2_45);

static MR_Word MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap__IntroducedFrom__func__calculate_parallel_cost__69__1_1_f_0(
  MR_Word LambdaHeadVar__1_42);

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap____Unify____find_production_or_consumption_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap____Compare____find_production_or_consumption_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap____Unify____is_last_par_conjunct_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap____Compare____is_last_par_conjunct_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap____Unify____production_or_consumption_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap____Compare____production_or_consumption_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_1[6][2];

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_2[8][3];

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_3[2][12];

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_4[2][8];

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_5[1][16];

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_6[1][11];

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_7[1][1];

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_8[1][7];

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_9[1][6];




static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_1[6][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_goal_rep_1)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_seq_conj_1)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_2[0]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_2[1]))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__lazy__lazy__type_ctor_info_lazy_1)),
    ((MR_Box) (&var_use_analysis__var_use_analysis__type_ctor_info_var_use_info_0))
  },
};

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_2[8][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__type_ctor_info_production_or_consumption_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_4[0])),
    ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_3[1])),
    ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_9[0])),
    ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_consumptions_and_productions_list_9_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_9[0])),
    ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_consumptions_and_productions_list_9_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_3[2][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_implicit_parallelism_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdbcomp__feedback__automatic_parallelism__pti_seq_conj_1__plain_mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_parallelisation_cost_data_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_parallelisation_cost_data_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdbcomp__program_representation__pti_goal_rep_1__plain_mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_int_0mdprof_fb__automatic_parallelism__autopar_calc_overlap__type_ctor_info_production_or_consumption_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_int_0mdprof_fb__automatic_parallelism__autopar_calc_overlap__type_ctor_info_production_or_consumption_0))
  },
};

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_4[2][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdbcomp__program_representation__pti_goal_rep_1__plain_mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdbcomp__program_representation__pti_goal_rep_1__plain_mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_float_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_float_0))
  },
};

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_5[1][16] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_implicit_parallelism_info_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_float_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_mdprof_fb__automatic_parallelism__autopar_calc_overlap__type_ctor_info_production_or_consumption_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_float_0builtin__type_ctor_info_float_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_float_0builtin__type_ctor_info_float_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_float_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_float_0))
  },
};

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_6[1][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdbcomp__program_representation__pti_goal_rep_1__plain_mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_float_0builtin__type_ctor_info_float_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_float_0builtin__type_ctor_info_float_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_float_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_float_0))
  },
};

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_7[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
};

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_8[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdbcomp__program_representation__pti_goal_rep_1__plain_mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_float_0))
  },
};

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_9[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_float_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_float_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_comparison_result_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0 = {
  &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_goal_rep_1,
  {
    (MR_TypeInfo) &mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdbcomp__feedback__automatic_parallelism__pti_seq_conj_1__plain_mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0 = {
  &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_seq_conj_1,
  {
    (MR_PseudoTypeInfo) &mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdbcomp__program_representation__pti_goal_rep_1__plain_mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0 = {
  &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_goal_rep_1,
  {
    (MR_PseudoTypeInfo) &mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_calc_overlap__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_FA_TypeInfo_Struct2 mdprof_fb__automatic_parallelism__autopar_calc_overlap__pair__ti_pair_2builtin__type_ctor_info_int_0mdprof_fb__automatic_parallelism__autopar_calc_overlap__type_ctor_info_production_or_consumption_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__type_ctor_info_production_or_consumption_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_calc_overlap__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_int_0mdprof_fb__automatic_parallelism__autopar_calc_overlap__type_ctor_info_production_or_consumption_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mdprof_fb__automatic_parallelism__autopar_calc_overlap__pair__ti_pair_2builtin__type_ctor_info_int_0mdprof_fb__automatic_parallelism__autopar_calc_overlap__type_ctor_info_production_or_consumption_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 mdprof_fb__automatic_parallelism__autopar_calc_overlap__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_float_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 mdprof_fb__automatic_parallelism__autopar_calc_overlap__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_mdprof_fb__automatic_parallelism__autopar_calc_overlap__type_ctor_info_production_or_consumption_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__type_ctor_info_production_or_consumption_0
  }
};

static const MR_FA_TypeInfo_Struct2 mdprof_fb__automatic_parallelism__autopar_calc_overlap__pair__ti_pair_2builtin__type_ctor_info_float_0builtin__type_ctor_info_float_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_calc_overlap__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_float_0builtin__type_ctor_info_float_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mdprof_fb__automatic_parallelism__autopar_calc_overlap__pair__ti_pair_2builtin__type_ctor_info_float_0builtin__type_ctor_info_float_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 mdprof_fb__automatic_parallelism__autopar_calc_overlap__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_float_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
  }
};

static const MR_EnumFunctorDesc mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__enum_functor_desc_find_production_or_consumption_0_0 = {
  (MR_String) "find_production",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__enum_functor_desc_find_production_or_consumption_0_1 = {
  (MR_String) "find_consumption",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__enum_value_ordered_find_production_or_consumption_0[2] = {
  &mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__enum_functor_desc_find_production_or_consumption_0_0,
  &mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__enum_functor_desc_find_production_or_consumption_0_1
};

static const MR_EnumFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__enum_name_ordered_find_production_or_consumption_0[2] = {
  &mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__enum_functor_desc_find_production_or_consumption_0_1,
  &mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__enum_functor_desc_find_production_or_consumption_0_0
};

static const MR_Integer mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__functor_number_map_find_production_or_consumption_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__type_ctor_info_find_production_or_consumption_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_calc_overlap____Unify____find_production_or_consumption_0_0_10001)),
  ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_calc_overlap____Compare____find_production_or_consumption_0_0_10001)),
  (MR_String) "mdprof_fb.automatic_parallelism.autopar_calc_overlap",
  (MR_String) "find_production_or_consumption",
  {     mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__enum_name_ordered_find_production_or_consumption_0 },
  {     mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__enum_value_ordered_find_production_or_consumption_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__functor_number_map_find_production_or_consumption_0
};

static const MR_EnumFunctorDesc mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__enum_functor_desc_is_last_par_conjunct_0_0 = {
  (MR_String) "is_last_par_conjunct",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__enum_functor_desc_is_last_par_conjunct_0_1 = {
  (MR_String) "not_last_par_conjunct",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__enum_value_ordered_is_last_par_conjunct_0[2] = {
  &mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__enum_functor_desc_is_last_par_conjunct_0_0,
  &mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__enum_functor_desc_is_last_par_conjunct_0_1
};

static const MR_EnumFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__enum_name_ordered_is_last_par_conjunct_0[2] = {
  &mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__enum_functor_desc_is_last_par_conjunct_0_0,
  &mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__enum_functor_desc_is_last_par_conjunct_0_1
};

static const MR_Integer mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__functor_number_map_is_last_par_conjunct_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__type_ctor_info_is_last_par_conjunct_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_calc_overlap____Unify____is_last_par_conjunct_0_0_10001)),
  ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_calc_overlap____Compare____is_last_par_conjunct_0_0_10001)),
  (MR_String) "mdprof_fb.automatic_parallelism.autopar_calc_overlap",
  (MR_String) "is_last_par_conjunct",
  {     mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__enum_name_ordered_is_last_par_conjunct_0 },
  {     mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__enum_value_ordered_is_last_par_conjunct_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__functor_number_map_is_last_par_conjunct_0
};

static const MR_PseudoTypeInfo mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__field_types_production_or_consumption_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
};

static const MR_DuFunctorDesc mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__du_functor_desc_production_or_consumption_0_0 = {
  (MR_String) "consumption",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__field_types_production_or_consumption_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__field_types_production_or_consumption_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
};

static const MR_DuFunctorDesc mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__du_functor_desc_production_or_consumption_0_1 = {
  (MR_String) "production",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__field_types_production_or_consumption_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__du_stag_ordered_production_or_consumption_0_0[1] = {
  &mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__du_functor_desc_production_or_consumption_0_0
};

static const MR_DuFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__du_stag_ordered_production_or_consumption_0_1[1] = {
  &mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__du_functor_desc_production_or_consumption_0_1
};

static const MR_DuPtagLayout mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__du_ptag_ordered_production_or_consumption_0[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__du_stag_ordered_production_or_consumption_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__du_stag_ordered_production_or_consumption_0_1
  }
};

static const MR_DuFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__du_name_ordered_production_or_consumption_0[2] = {
  &mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__du_functor_desc_production_or_consumption_0_0,
  &mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__du_functor_desc_production_or_consumption_0_1
};

static const MR_Integer mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__functor_number_map_production_or_consumption_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__type_ctor_info_production_or_consumption_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_calc_overlap____Unify____production_or_consumption_0_0_10001)),
  ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_calc_overlap____Compare____production_or_consumption_0_0_10001)),
  (MR_String) "mdprof_fb.automatic_parallelism.autopar_calc_overlap",
  (MR_String) "production_or_consumption",
  {     mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__du_name_ordered_production_or_consumption_0 },
  {     mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__du_ptag_ordered_production_or_consumption_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__functor_number_map_production_or_consumption_0
};

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap__IntroducedFrom__pred__get_consumptions_and_productions_list__515__1_3_p_0(
  MR_Word HeadVar__1_81,
  MR_Word HeadVar__2_82,
  MR_Word * HeadVar__3_83)
{
  {
    MR_Float TimeA_88 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__1_81, (MR_Integer) 1)));
    MR_Float TimeB_90 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_82, (MR_Integer) 1)));
    MR_Integer Var_87 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_81, (MR_Integer) 0)));
    MR_Integer Var_89 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_82, (MR_Integer) 0)));

    mercury__private_builtin__builtin_compare_float_3_p_0(HeadVar__3_83, TimeB_90, TimeA_88);
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap__IntroducedFrom__pred__get_consumptions_and_productions_list__507__1_3_p_0(
  MR_Word HeadVar__1_75,
  MR_Word HeadVar__2_76,
  MR_Word * HeadVar__3_77)
{
  {
    MR_Float TimeA_88 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__1_75, (MR_Integer) 1)));
    MR_Float TimeB_90 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_76, (MR_Integer) 1)));
    MR_Integer Var_87 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_75, (MR_Integer) 0)));
    MR_Integer Var_89 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_76, (MR_Integer) 0)));

    mercury__private_builtin__builtin_compare_float_3_p_0(HeadVar__3_77, TimeB_90, TimeA_88);
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap____Compare____production_or_consumption_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_13 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
    {
      MR_Float Var_16 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Float ArgY1_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));

        mercury__private_builtin__builtin_compare_float_3_p_0(HeadVar__1_1, Var_16, ArgY1_5);
      }
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    }
    else
    {
      MR_Float Var_17 = MR_unbox_float((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Float ArgY1_11 = MR_unbox_float((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));

        mercury__private_builtin__builtin_compare_float_3_p_0(HeadVar__1_1, Var_17, ArgY1_11);
      }
    }
  }
}

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap____Unify____production_or_consumption_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_8 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
    {
      MR_Float ArgX1_3 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Float ArgY1_4;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        ArgY1_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
        succeeded = (ArgX1_3 == ArgY1_4);
      }
    }
    else
    {
      MR_Float ArgX1_5 = MR_unbox_float((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Float ArgY1_6;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        ArgY1_6 = MR_unbox_float((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
        succeeded = (ArgX1_5 == ArgY1_6);
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap____Compare____is_last_par_conjunct_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap____Unify____is_last_par_conjunct_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap____Compare____find_production_or_consumption_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap____Unify____find_production_or_consumption_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap__var_productions_4_p_0(
  MR_Float TimeBefore_5,
  MR_Word Goal_6,
  MR_Integer Var_7,
  MR_Word * HeadVar__4_4)
{
  {
    MR_Float Time_8;
    MR_Word Map_15;
    MR_Word LazyUse_16;
    MR_Word Use_17;
    MR_Word UseType_18;
    MR_Float UseTime_19;
    MR_Float Var_48;
    MR_Word Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_6, (MR_Integer) 2)));
    MR_Word Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_6, (MR_Integer) 1)));
    MR_Word Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_6, (MR_Integer) 0)));
    MR_Word Var_71;
    MR_Word Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_68, (MR_Integer) 5)));
    MR_Word Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_68, (MR_Integer) 4)));
    MR_Word Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_68, (MR_Integer) 3)));
    MR_Word Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_68, (MR_Integer) 2)));
    MR_Word Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_68, (MR_Integer) 1)));
    MR_Word Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_68, (MR_Integer) 0)));
    MR_Box conv0_LazyUse_16;
    MR_Box conv1_Use_17;
    MR_Float Var_49;

    Map_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_68, (MR_Integer) 6)));
    Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_68, (MR_Integer) 7)));
    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_1[5], Map_15, Var_7, &conv0_LazyUse_16);
    LazyUse_16 = ((MR_Word) conv0_LazyUse_16);
    conv1_Use_17 = mercury__lazy__force_1_f_0((MR_Word) &var_use_analysis__var_use_analysis__type_ctor_info_var_use_info_0, LazyUse_16);
    Use_17 = ((MR_Word) conv1_Use_17);
    Var_48 = MR_unbox_float((MR_hl_field(MR_mktag(0), Use_17, (MR_Integer) 0)));
    Var_49 = MR_unbox_float((MR_hl_field(MR_mktag(0), Use_17, (MR_Integer) 1)));
    UseType_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Use_17, (MR_Integer) 2)));
    switch (UseType_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "mdprof_fb.automatic_parallelism.autopar_calc_overlap", (MR_String) "predicate \140mdprof_fb.automatic_parallelism.autopar_calc_overlap.var_first_use_time\'/5", (MR_String) "Found consumption when looking for production");
            return;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_22;
          MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_6, (MR_Integer) 2)));
          MR_Word Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_6, (MR_Integer) 0)));
          MR_Word Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_6, (MR_Integer) 1)));
          MR_Word Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_23, (MR_Integer) 0)));
          MR_Word Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_23, (MR_Integer) 1)));
          MR_Word Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_23, (MR_Integer) 2)));
          MR_Word Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_23, (MR_Integer) 3)));
          MR_Word Var_58;
          MR_Word Var_59;
          MR_Word Var_60;

          Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_23, (MR_Integer) 4)));
          Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_23, (MR_Integer) 5)));
          Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_23, (MR_Integer) 6)));
          Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_23, (MR_Integer) 7)));
          UseTime_19 = measurements__goal_cost_get_percall_1_f_0(Var_22);
        }
        break;
      case (MR_Integer) 0:
        UseTime_19 = Var_48;
        break;
    }
    Time_8 = (TimeBefore_5 + UseTime_19);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_7));
      MR_hl_field(MR_mktag(0), base, 1) = MR_box_float(Time_8);
    }
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap__var_consumptions_4_p_0(
  MR_Float TimeBefore_5,
  MR_Word Goal_6,
  MR_Integer Var_7,
  MR_Word * HeadVar__4_4)
{
  {
    MR_Float Time_8;
    MR_Word Map_15;
    MR_Word LazyUse_16;
    MR_Word Use_17;
    MR_Word UseType_18;
    MR_Float UseTime_19;
    MR_Float Var_48;
    MR_Word Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_6, (MR_Integer) 2)));
    MR_Word Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_6, (MR_Integer) 1)));
    MR_Word Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_6, (MR_Integer) 0)));
    MR_Word Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_68, (MR_Integer) 6)));
    MR_Word Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_68, (MR_Integer) 5)));
    MR_Word Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_68, (MR_Integer) 4)));
    MR_Word Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_68, (MR_Integer) 3)));
    MR_Word Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_68, (MR_Integer) 2)));
    MR_Word Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_68, (MR_Integer) 1)));
    MR_Word Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_68, (MR_Integer) 0)));
    MR_Box conv0_LazyUse_16;
    MR_Box conv1_Use_17;
    MR_Float Var_49;

    Map_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_68, (MR_Integer) 7)));
    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_1[5], Map_15, Var_7, &conv0_LazyUse_16);
    LazyUse_16 = ((MR_Word) conv0_LazyUse_16);
    conv1_Use_17 = mercury__lazy__force_1_f_0((MR_Word) &var_use_analysis__var_use_analysis__type_ctor_info_var_use_info_0, LazyUse_16);
    Use_17 = ((MR_Word) conv1_Use_17);
    Var_48 = MR_unbox_float((MR_hl_field(MR_mktag(0), Use_17, (MR_Integer) 0)));
    Var_49 = MR_unbox_float((MR_hl_field(MR_mktag(0), Use_17, (MR_Integer) 1)));
    UseType_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Use_17, (MR_Integer) 2)));
    switch (UseType_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        UseTime_19 = Var_48;
        break;
      case (MR_Integer) 2:
        UseTime_19 = (MR_Float) 0.0000000000000000;
        break;
      case (MR_Integer) 0:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "mdprof_fb.automatic_parallelism.autopar_calc_overlap", (MR_String) "predicate \140mdprof_fb.automatic_parallelism.autopar_calc_overlap.var_first_use_time\'/5", (MR_String) "Found production when looking for consumption");
            return;
          }
        }
        break;
    }
    Time_8 = (TimeBefore_5 + UseTime_19);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_7));
      MR_hl_field(MR_mktag(0), base, 1) = MR_box_float(Time_8);
    }
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_consumptions_and_productions_list_9_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_HeadVar__3_83;

    mdprof_fb__automatic_parallelism__autopar_calc_overlap__IntroducedFrom__pred__get_consumptions_and_productions_list__515__1_3_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv3_HeadVar__3_83);
    *wrapper_arg_3 = ((MR_Box) (conv3_HeadVar__3_83));
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_consumptions_and_productions_list_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_HeadVar__4_4;

    mdprof_fb__automatic_parallelism__autopar_calc_overlap__var_productions_4_p_0(MR_unbox_float((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Integer) wrapper_arg_1), &conv2_HeadVar__4_4);
    *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__4_4));
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_consumptions_and_productions_list_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__3_77;

    mdprof_fb__automatic_parallelism__autopar_calc_overlap__IntroducedFrom__pred__get_consumptions_and_productions_list__507__1_3_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv1_HeadVar__3_77);
    *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__3_77));
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_consumptions_and_productions_list_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__4_4;

    mdprof_fb__automatic_parallelism__autopar_calc_overlap__var_consumptions_4_p_0(MR_unbox_float((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Integer) wrapper_arg_1), &conv0_HeadVar__4_4);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__4_4));
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_consumptions_and_productions_list_9_p_0(
  MR_Word Goal_10,
  MR_Word STATE_VARIABLE_ConsumedVars_0_27,
  MR_Word * STATE_VARIABLE_ConsumedVars_28,
  MR_Word STATE_VARIABLE_ProducedVars_0_29,
  MR_Word * STATE_VARIABLE_ProducedVars_30,
  MR_Float STATE_VARIABLE_Time_0_31,
  MR_Float * STATE_VARIABLE_Time_32,
  MR_Word STATE_VARIABLE_List_0_33,
  MR_Word * STATE_VARIABLE_List_34)
{
  {
    MR_Word TypeCtorInfo_71_71;
    MR_Word TypeInfo_74_74;
    MR_Word InstMapInfo_15;
    MR_Word AllConsumptionVars_16;
    MR_Word ConsumptionVars_17;
    MR_Word ConsumptionTimesSet0_18;
    MR_Word ConsumptionTimes0_19;
    MR_Word ConsumptionTimes_20;
    MR_Word AllProductionVars_21;
    MR_Word ProductionVars_22;
    MR_Word ProductionTimesSet0_23;
    MR_Word ProductionTimes0_24;
    MR_Word ProductionTimes_25;
    MR_Word ConsumptionAndProductionTimes_26;
    MR_Word Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_10, (MR_Integer) 2)));
    MR_Word Var_36;
    MR_Word Var_39;
    MR_Float Var_44;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_10, (MR_Integer) 0)));
    MR_Word Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_10, (MR_Integer) 1)));
    MR_Word Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_35, (MR_Integer) 0)));
    MR_Word Var_50;
    MR_Word Var_51;
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
    MR_Word Var_62;
    MR_Word Var_63;
    MR_Word Var_64;
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Word Var_67;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Word Var_70;

    InstMapInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_35, (MR_Integer) 1)));
    Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_35, (MR_Integer) 2)));
    Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_35, (MR_Integer) 3)));
    Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_35, (MR_Integer) 4)));
    Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_35, (MR_Integer) 5)));
    Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_35, (MR_Integer) 6)));
    Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_35, (MR_Integer) 7)));
    Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstMapInfo_15, (MR_Integer) 0)));
    Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstMapInfo_15, (MR_Integer) 1)));
    AllConsumptionVars_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstMapInfo_15, (MR_Integer) 2)));
    Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstMapInfo_15, (MR_Integer) 3)));
    TypeCtorInfo_71_71 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    ConsumptionVars_17 = mercury__set__intersect_2_f_0(TypeCtorInfo_71_71, STATE_VARIABLE_ConsumedVars_0_27, AllConsumptionVars_16);
    {
      Var_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_36, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), Var_36, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_consumptions_and_productions_list_9_p_0_1));
      MR_hl_field(MR_mktag(0), Var_36, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_36, 3) = MR_box_float(STATE_VARIABLE_Time_0_31);
      MR_hl_field(MR_mktag(0), Var_36, 4) = ((MR_Box) (Goal_10));
    }
    TypeInfo_74_74 = (MR_Word) &mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_2[3];
    mercury__set__map_3_p_0(TypeCtorInfo_71_71, TypeInfo_74_74, Var_36, ConsumptionVars_17, &ConsumptionTimesSet0_18);
    *STATE_VARIABLE_ConsumedVars_28 = mercury__set__difference_2_f_0(TypeCtorInfo_71_71, STATE_VARIABLE_ConsumedVars_0_27, ConsumptionVars_17);
    mercury__set__to_sorted_list_2_p_0(TypeInfo_74_74, ConsumptionTimesSet0_18, &ConsumptionTimes0_19);
    mercury__list__sort_3_p_0(TypeInfo_74_74, (MR_Word) &mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_2[6], ConsumptionTimes0_19, &ConsumptionTimes_20);
    Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstMapInfo_15, (MR_Integer) 0)));
    Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstMapInfo_15, (MR_Integer) 1)));
    Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstMapInfo_15, (MR_Integer) 2)));
    AllProductionVars_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstMapInfo_15, (MR_Integer) 3)));
    ProductionVars_22 = mercury__set__intersect_2_f_0(TypeCtorInfo_71_71, STATE_VARIABLE_ProducedVars_0_29, AllProductionVars_21);
    {
      Var_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), Var_39, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_consumptions_and_productions_list_9_p_0_3));
      MR_hl_field(MR_mktag(0), Var_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_39, 3) = MR_box_float(STATE_VARIABLE_Time_0_31);
      MR_hl_field(MR_mktag(0), Var_39, 4) = ((MR_Box) (Goal_10));
    }
    mercury__set__map_3_p_0(TypeCtorInfo_71_71, TypeInfo_74_74, Var_39, ProductionVars_22, &ProductionTimesSet0_23);
    *STATE_VARIABLE_ProducedVars_30 = mercury__set__difference_2_f_0(TypeCtorInfo_71_71, STATE_VARIABLE_ProducedVars_0_29, ProductionVars_22);
    mercury__set__to_sorted_list_2_p_0(TypeInfo_74_74, ProductionTimesSet0_23, &ProductionTimes0_24);
    mercury__list__sort_3_p_0(TypeInfo_74_74, (MR_Word) &mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_2[7], ProductionTimes0_24, &ProductionTimes_25);
    mdprof_fb__automatic_parallelism__autopar_calc_overlap__merge_consumptions_and_productions_3_p_0(ConsumptionTimes_20, ProductionTimes_25, &ConsumptionAndProductionTimes_26);
    *STATE_VARIABLE_List_34 = mercury__list__f_43_43_2_f_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_2[0], ConsumptionAndProductionTimes_26, STATE_VARIABLE_List_0_33);
    Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_10, (MR_Integer) 0)));
    Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_10, (MR_Integer) 1)));
    Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_10, (MR_Integer) 2)));
    Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_46, (MR_Integer) 0)));
    Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_46, (MR_Integer) 1)));
    Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_46, (MR_Integer) 2)));
    Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_46, (MR_Integer) 3)));
    Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_46, (MR_Integer) 4)));
    Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_46, (MR_Integer) 5)));
    Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_46, (MR_Integer) 6)));
    Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_46, (MR_Integer) 7)));
    Var_44 = measurements__goal_cost_get_percall_1_f_0(Var_45);
    *STATE_VARIABLE_Time_32 = (STATE_VARIABLE_Time_0_31 + Var_44);
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap__merge_consumptions_and_productions_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
      {
        MR_Integer Var_4;
        MR_Float Time_5;
        MR_Word Prods0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
        MR_Word Prods_7;
        MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
        MR_Word Var_9;
        MR_Word Var_10;

        Var_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 0)));
        Time_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 1)));
        {
          Var_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_10, 0) = MR_box_float(Time_5);
        }
        {
          Var_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_9, 0) = ((MR_Box) (Var_4));
          MR_hl_field(MR_mktag(0), Var_9, 1) = ((MR_Box) (Var_10));
        }
        mdprof_fb__automatic_parallelism__autopar_calc_overlap__merge_consumptions_and_productions_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Prods0_6, &Prods_7);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_9));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Prods_7));
        }
      }
    else
    {
      MR_Word Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Float Var_36 = MR_unbox_float((MR_hl_field(MR_mktag(0), Var_35, (MR_Integer) 1)));
      MR_Integer Var_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_35, (MR_Integer) 0)));

      if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word Cons_15;
        MR_Word Var_17;
        MR_Word Var_18;

        {
          Var_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_18, 0) = MR_box_float(Var_36);
        }
        {
          Var_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (Var_37));
          MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (Var_18));
        }
        mdprof_fb__automatic_parallelism__autopar_calc_overlap__merge_consumptions_and_productions_3_p_0(Var_34, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &Cons_15);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_17));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Cons_15));
        }
      }
      else
      {
        MR_Integer ProdVar_25;
        MR_Float ProdTime_26;
        MR_Word Prods0_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ProdOrCons_28;
        MR_Word ProdsAndCons_29;
        MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

        ProdVar_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_31, (MR_Integer) 0)));
        ProdTime_26 = MR_unbox_float((MR_hl_field(MR_mktag(0), Var_31, (MR_Integer) 1)));
        succeeded = (ProdTime_26 < Var_36);
        if (succeeded)
        {
          MR_Word Var_32;

          {
            Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_32, 0) = MR_box_float(ProdTime_26);
          }
          {
            ProdOrCons_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ProdOrCons_28, 0) = ((MR_Box) (ProdVar_25));
            MR_hl_field(MR_mktag(0), ProdOrCons_28, 1) = ((MR_Box) (Var_32));
          }
          mdprof_fb__automatic_parallelism__autopar_calc_overlap__merge_consumptions_and_productions_3_p_0(HeadVar__1_1, Prods0_27, &ProdsAndCons_29);
        }
        else
        {
          MR_Word Var_33;

          {
            Var_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_33, 0) = MR_box_float(Var_36);
          }
          {
            ProdOrCons_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ProdOrCons_28, 0) = ((MR_Box) (Var_37));
            MR_hl_field(MR_mktag(0), ProdOrCons_28, 1) = ((MR_Box) (Var_33));
          }
          mdprof_fb__automatic_parallelism__autopar_calc_overlap__merge_consumptions_and_productions_3_p_0(Var_34, HeadVar__2_2, &ProdsAndCons_29);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ProdOrCons_28));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ProdsAndCons_29));
        }
      }
    }
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap__var_production_time_to_map_5_p_0(
  MR_Float TimeBefore_6,
  MR_Word Goal_7,
  MR_Integer Var_8,
  MR_Word STATE_VARIABLE_Map_0_11,
  MR_Word * STATE_VARIABLE_Map_12)
{
  {
    MR_Float Time_10;
    MR_Word Map_22;
    MR_Word LazyUse_23;
    MR_Word Use_24;
    MR_Word UseType_25;
    MR_Float UseTime_26;
    MR_Float Var_55;
    MR_Word Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_7, (MR_Integer) 2)));
    MR_Word Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_7, (MR_Integer) 1)));
    MR_Word Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_7, (MR_Integer) 0)));
    MR_Word Var_78;
    MR_Word Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_75, (MR_Integer) 5)));
    MR_Word Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_75, (MR_Integer) 4)));
    MR_Word Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_75, (MR_Integer) 3)));
    MR_Word Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_75, (MR_Integer) 2)));
    MR_Word Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_75, (MR_Integer) 1)));
    MR_Word Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_75, (MR_Integer) 0)));
    MR_Box conv0_LazyUse_23;
    MR_Box conv1_Use_24;
    MR_Float Var_56;

    Map_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_75, (MR_Integer) 6)));
    Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_75, (MR_Integer) 7)));
    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_1[5], Map_22, Var_8, &conv0_LazyUse_23);
    LazyUse_23 = ((MR_Word) conv0_LazyUse_23);
    conv1_Use_24 = mercury__lazy__force_1_f_0((MR_Word) &var_use_analysis__var_use_analysis__type_ctor_info_var_use_info_0, LazyUse_23);
    Use_24 = ((MR_Word) conv1_Use_24);
    Var_55 = MR_unbox_float((MR_hl_field(MR_mktag(0), Use_24, (MR_Integer) 0)));
    Var_56 = MR_unbox_float((MR_hl_field(MR_mktag(0), Use_24, (MR_Integer) 1)));
    UseType_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Use_24, (MR_Integer) 2)));
    switch (UseType_25) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "mdprof_fb.automatic_parallelism.autopar_calc_overlap", (MR_String) "predicate \140mdprof_fb.automatic_parallelism.autopar_calc_overlap.var_first_use_time\'/5", (MR_String) "Found consumption when looking for production");
            return;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_29;
          MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_7, (MR_Integer) 2)));
          MR_Word Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_7, (MR_Integer) 0)));
          MR_Word Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_7, (MR_Integer) 1)));
          MR_Word Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 0)));
          MR_Word Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 1)));
          MR_Word Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 2)));
          MR_Word Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 3)));
          MR_Word Var_65;
          MR_Word Var_66;
          MR_Word Var_67;

          Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 4)));
          Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 5)));
          Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 6)));
          Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 7)));
          UseTime_26 = measurements__goal_cost_get_percall_1_f_0(Var_29);
        }
        break;
      case (MR_Integer) 0:
        UseTime_26 = Var_55;
        break;
    }
    Time_10 = (TimeBefore_6 + UseTime_26);
    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0, Var_8, MR_box_float(Time_10), STATE_VARIABLE_Map_0_11, STATE_VARIABLE_Map_12);
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_productions_map_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Map_12;

    mdprof_fb__automatic_parallelism__autopar_calc_overlap__var_production_time_to_map_5_p_0(MR_unbox_float((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Integer) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_STATE_VARIABLE_Map_12);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Map_12));
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_productions_map_8_p_0(
  MR_Word Vars_9,
  MR_Word Goal_10,
  MR_Float STATE_VARIABLE_Time_0_17,
  MR_Float * STATE_VARIABLE_Time_18,
  MR_Word STATE_VARIABLE_Executions_0_19,
  MR_Word * STATE_VARIABLE_Executions_20,
  MR_Word STATE_VARIABLE_Map_0_21,
  MR_Word * STATE_VARIABLE_Map_22)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_53_53;
    MR_Word InstMapInfo_14;
    MR_Word BoundVars0_15;
    MR_Word BoundVars_16;
    MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_10, (MR_Integer) 2)));
    MR_Float STATE_VARIABLE_Time_24_24;
    MR_Word Var_26;
    MR_Float Var_29;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_10, (MR_Integer) 0)));
    MR_Word Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_10, (MR_Integer) 1)));
    MR_Word Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_23, (MR_Integer) 0)));
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Box conv1_STATE_VARIABLE_Map_22;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_52;

    InstMapInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_23, (MR_Integer) 1)));
    Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_23, (MR_Integer) 2)));
    Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_23, (MR_Integer) 3)));
    Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_23, (MR_Integer) 4)));
    Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_23, (MR_Integer) 5)));
    Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_23, (MR_Integer) 6)));
    Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_23, (MR_Integer) 7)));
    Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstMapInfo_14, (MR_Integer) 0)));
    Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstMapInfo_14, (MR_Integer) 1)));
    Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstMapInfo_14, (MR_Integer) 2)));
    BoundVars0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstMapInfo_14, (MR_Integer) 3)));
    TypeCtorInfo_53_53 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    BoundVars_16 = mercury__set__intersect_2_f_0(TypeCtorInfo_53_53, BoundVars0_15, Vars_9);
    if ((STATE_VARIABLE_Executions_0_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "mdprof_fb.automatic_parallelism.autopar_calc_overlap", (MR_String) "predicate \140mdprof_fb.automatic_parallelism.autopar_calc_overlap.adjust_time_for_waits\'/4", (MR_String) "Time occurs after all executions");
        return;
      }
    }
    else
    {
      MR_Word Execution_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_Executions_0_19, (MR_Integer) 0)));
      MR_Word NextExecution_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_Executions_0_19, (MR_Integer) 1)));
      MR_Float Start_66 = MR_unbox_float((MR_hl_field(MR_mktag(0), Execution_64, (MR_Integer) 0)));
      MR_Float End_67 = MR_unbox_float((MR_hl_field(MR_mktag(0), Execution_64, (MR_Integer) 1)));
      MR_Float Var_71 = (STATE_VARIABLE_Time_0_17 + ((MR_Float) 0.00010000000000000000));

      succeeded = (Var_71 < Start_66);
      if (succeeded)
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "mdprof_fb.automatic_parallelism.autopar_calc_overlap", (MR_String) "predicate \140mdprof_fb.automatic_parallelism.autopar_calc_overlap.adjust_time_for_waits\'/4", (MR_String) "Time occurs before the current execution");
          return;
        }
      }
      else
      {
        MR_Float Var_76 = (End_67 + ((MR_Float) 0.00010000000000000000));

        succeeded = (STATE_VARIABLE_Time_0_17 <= Var_76);
        if (succeeded)
        {
          *STATE_VARIABLE_Executions_20 = STATE_VARIABLE_Executions_0_19;
          STATE_VARIABLE_Time_24_24 = STATE_VARIABLE_Time_0_17;
        }
        else
          mdprof_fb__automatic_parallelism__autopar_calc_overlap__adjust_time_for_waits_2_5_p_0(End_67, STATE_VARIABLE_Time_0_17, &STATE_VARIABLE_Time_24_24, NextExecution_65, STATE_VARIABLE_Executions_20);
      }
    }
    {
      Var_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_productions_map_8_p_0_1));
      MR_hl_field(MR_mktag(0), Var_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_26, 3) = MR_box_float(STATE_VARIABLE_Time_24_24);
      MR_hl_field(MR_mktag(0), Var_26, 4) = ((MR_Box) (Goal_10));
    }
    mercury__set__fold_4_p_0(TypeCtorInfo_53_53, (MR_Word) &mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_2[2], Var_26, BoundVars_16, ((MR_Box) (STATE_VARIABLE_Map_0_21)), &conv1_STATE_VARIABLE_Map_22);
    *STATE_VARIABLE_Map_22 = ((MR_Word) conv1_STATE_VARIABLE_Map_22);
    Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_10, (MR_Integer) 0)));
    Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_10, (MR_Integer) 1)));
    Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_10, (MR_Integer) 2)));
    Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_31, (MR_Integer) 0)));
    Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_31, (MR_Integer) 1)));
    Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_31, (MR_Integer) 2)));
    Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_31, (MR_Integer) 3)));
    Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_31, (MR_Integer) 4)));
    Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_31, (MR_Integer) 5)));
    Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_31, (MR_Integer) 6)));
    Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_31, (MR_Integer) 7)));
    Var_29 = measurements__goal_cost_get_percall_1_f_0(Var_30);
    *STATE_VARIABLE_Time_18 = (STATE_VARIABLE_Time_24_24 + Var_29);
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap__adjust_time_for_waits_2_5_p_0(
  MR_Float LastEnd_6,
  MR_Float STATE_VARIABLE_Time_0_13,
  MR_Float * STATE_VARIABLE_Time_14,
  MR_Word STATE_VARIABLE_Executions_0_15,
  MR_Word * STATE_VARIABLE_Executions_16)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    if ((STATE_VARIABLE_Executions_0_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__error_1_p_0((MR_String) "adjust_time_for_waits: Ran out of executions");
        return;
      }
    }
    else
    {
      MR_Word Execution_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_Executions_0_15, (MR_Integer) 0)));
      MR_Word NextExecution_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_Executions_0_15, (MR_Integer) 1)));
      MR_Float Start_11 = MR_unbox_float((MR_hl_field(MR_mktag(0), Execution_9, (MR_Integer) 0)));
      MR_Float End_12 = MR_unbox_float((MR_hl_field(MR_mktag(0), Execution_9, (MR_Integer) 1)));
      MR_Float STATE_VARIABLE_Time_18_18;
      MR_Float Var_19 = (Start_11 - LastEnd_6);
      MR_Float Var_20;

      STATE_VARIABLE_Time_18_18 = (STATE_VARIABLE_Time_0_13 + Var_19);
      Var_20 = (STATE_VARIABLE_Time_18_18 + ((MR_Float) 0.00010000000000000000));
      succeeded = (Var_20 < Start_11);
      if (succeeded)
      {
        MR_String Var_24;
        MR_String Var_41;
        MR_Word Var_47 = (MR_Word) &mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_7[0];
        MR_String Var_49;
        MR_String Var_51;
        MR_String Var_52;
        MR_String Var_60;

        mercury__string__format__format_float_component_nowidth_noprec_4_p_0(Var_47, (MR_Integer) 2, Start_11, &Var_41);
        Var_49 = mercury__string__f_43_43_2_f_0(Var_41, (MR_String) ".");
        Var_51 = mercury__string__f_43_43_2_f_0((MR_String) ", Start: ", Var_49);
        mercury__string__format__format_float_component_nowidth_noprec_4_p_0(Var_47, (MR_Integer) 2, STATE_VARIABLE_Time_18_18, &Var_52);
        Var_60 = mercury__string__f_43_43_2_f_0(Var_52, Var_51);
        Var_24 = mercury__string__f_43_43_2_f_0((MR_String) "Adjustment didn\'t work, time occurs before the current execution. Time: ", Var_60);
        {
          mercury__require__unexpected_3_p_0((MR_String) "mdprof_fb.automatic_parallelism.autopar_calc_overlap", (MR_String) "predicate \140mdprof_fb.automatic_parallelism.autopar_calc_overlap.adjust_time_for_waits_2\'/5", Var_24);
          return;
        }
      }
      else
      {
        MR_Float Var_35 = (End_12 + ((MR_Float) 0.00010000000000000000));

        succeeded = (STATE_VARIABLE_Time_18_18 <= Var_35);
        if (succeeded)
        {
          *STATE_VARIABLE_Executions_16 = STATE_VARIABLE_Executions_0_15;
          *STATE_VARIABLE_Time_14 = STATE_VARIABLE_Time_18_18;
        }
        else
        {
          MR_Float next_value_of_LastEnd_6 = End_12;
          MR_Float next_value_of_STATE_VARIABLE_Time_0_13 = STATE_VARIABLE_Time_18_18;
          MR_Word next_value_of_STATE_VARIABLE_Executions_0_15 = NextExecution_10;

          // direct tailcall eliminated
          LastEnd_6 = next_value_of_LastEnd_6;
          STATE_VARIABLE_Time_0_13 = next_value_of_STATE_VARIABLE_Time_0_13;
          STATE_VARIABLE_Executions_0_15 = next_value_of_STATE_VARIABLE_Executions_0_15;
          continue;
        }
      }
    }
    break;
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_dependent_parallel_cost_2_13_p_0(
  MR_Word Info_14,
  MR_Word ProductionsMap_15,
  MR_Word HeadVar__3_3,
  MR_Float STATE_VARIABLE_PrevSeqConsumeTime_0_25,
  MR_Float * STATE_VARIABLE_PrevSeqConsumeTime_26,
  MR_Float STATE_VARIABLE_PrevParConsumeTime_0_27,
  MR_Float * STATE_VARIABLE_PrevParConsumeTime_28,
  MR_Float STATE_VARIABLE_ResumeTime_0_29,
  MR_Float * STATE_VARIABLE_ResumeTime_30,
  MR_Word STATE_VARIABLE_RevExecution_0_31,
  MR_Word * STATE_VARIABLE_RevExecution_32,
  MR_Word STATE_VARIABLE_ConsumptionsMap_0_33,
  MR_Word * STATE_VARIABLE_ConsumptionsMap_34)
{
  {
    MR_Integer Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
    MR_Word SeqEventTime_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));

    if (((MR_tag((MR_Word) SeqEventTime_17)) == (MR_mktag((MR_Integer) 0))))
    {
      MR_Float SeqConsTime_23 = MR_unbox_float((MR_hl_field(MR_mktag(0), SeqEventTime_17, (MR_Integer) 0)));
      MR_Word Var_40;

      {
        Var_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_40, 0) = ((MR_Box) (Var_16));
        MR_hl_field(MR_mktag(0), Var_40, 1) = MR_box_float(SeqConsTime_23);
      }
      mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_dependent_parallel_cost_consumption_13_p_0(Info_14, ProductionsMap_15, Var_40, STATE_VARIABLE_PrevSeqConsumeTime_0_25, STATE_VARIABLE_PrevSeqConsumeTime_26, STATE_VARIABLE_PrevParConsumeTime_0_27, STATE_VARIABLE_PrevParConsumeTime_28, STATE_VARIABLE_ResumeTime_0_29, STATE_VARIABLE_ResumeTime_30, STATE_VARIABLE_RevExecution_0_31, STATE_VARIABLE_RevExecution_32, STATE_VARIABLE_ConsumptionsMap_0_33, STATE_VARIABLE_ConsumptionsMap_34);
    }
    else
    {
      MR_Float SeqProdTime_24 = MR_unbox_float((MR_hl_field(MR_mktag(1), SeqEventTime_17, (MR_Integer) 0)));

      mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_dependent_parallel_cost_production_12_p_0(Info_14, SeqProdTime_24, STATE_VARIABLE_PrevSeqConsumeTime_0_25, STATE_VARIABLE_PrevSeqConsumeTime_26, STATE_VARIABLE_PrevParConsumeTime_0_27, STATE_VARIABLE_PrevParConsumeTime_28, STATE_VARIABLE_ResumeTime_0_29, STATE_VARIABLE_ResumeTime_30, STATE_VARIABLE_RevExecution_0_31, STATE_VARIABLE_RevExecution_32, STATE_VARIABLE_ConsumptionsMap_0_33, STATE_VARIABLE_ConsumptionsMap_34);
    }
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_dependent_parallel_cost_production_12_p_0(
  MR_Word Info_13,
  MR_Float SeqProdTime_14,
  MR_Float STATE_VARIABLE_PrevSeqConsumeTime_0_22,
  MR_Float * STATE_VARIABLE_PrevSeqConsumeTime_23,
  MR_Float STATE_VARIABLE_PrevParConsumeTime_0_24,
  MR_Float * STATE_VARIABLE_PrevParConsumeTime_25,
  MR_Float STATE_VARIABLE_ResumeTime_0_26,
  MR_Float * STATE_VARIABLE_ResumeTime_27,
  MR_Word STATE_VARIABLE_RevExecution_0_28,
  MR_Word * STATE_VARIABLE_RevExecution_29,
  MR_Word STATE_VARIABLE_ConsumptionsMap_0_30,
  MR_Word * STATE_VARIABLE_ConsumptionsMap_31)
{
  {
    MR_Float SignalCost_20;
    MR_Integer Var_32;
    MR_Word Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_13, (MR_Integer) 2)));
    MR_Float Var_34;
    MR_Float Var_35;
    MR_Word Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_13, (MR_Integer) 0)));
    MR_Word Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_13, (MR_Integer) 1)));
    MR_Word Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_13, (MR_Integer) 3)));
    MR_Word Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_13, (MR_Integer) 4)));
    MR_Word Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_13, (MR_Integer) 5)));
    MR_Word Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_13, (MR_Integer) 6)));
    MR_Word Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_13, (MR_Integer) 7)));
    MR_Word Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_13, (MR_Integer) 8)));
    MR_Word Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_13, (MR_Integer) 9)));
    MR_Word Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_13, (MR_Integer) 10)));
    MR_Word Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_13, (MR_Integer) 11)));
    MR_Float Var_49 = MR_unbox_float((MR_hl_field(MR_mktag(0), Var_33, (MR_Integer) 0)));
    MR_Word Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_33, (MR_Integer) 1)));
    MR_Integer Var_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_33, (MR_Integer) 2)));
    MR_Integer Var_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_33, (MR_Integer) 3)));
    MR_Integer Var_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_33, (MR_Integer) 4)));
    MR_Integer Var_54;
    MR_Integer Var_55;
    MR_Integer Var_56;
    MR_Integer Var_57;
    MR_Float Var_58;
    MR_Word Var_59;
    MR_Word Var_60;

    Var_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_33, (MR_Integer) 5)));
    Var_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_33, (MR_Integer) 6)));
    Var_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_33, (MR_Integer) 7)));
    Var_56 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_33, (MR_Integer) 8)));
    Var_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_33, (MR_Integer) 9)));
    Var_58 = MR_unbox_float((MR_hl_field(MR_mktag(0), Var_33, (MR_Integer) 10)));
    Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_33, (MR_Integer) 11)));
    Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_33, (MR_Integer) 12)));
    SignalCost_20 = mercury__float__float_1_f_0(Var_32);
    Var_35 = (SeqProdTime_14 - STATE_VARIABLE_PrevSeqConsumeTime_0_22);
    Var_34 = (STATE_VARIABLE_PrevParConsumeTime_0_24 + Var_35);
    *STATE_VARIABLE_PrevParConsumeTime_25 = (Var_34 + SignalCost_20);
    *STATE_VARIABLE_PrevSeqConsumeTime_23 = SeqProdTime_14;
    *STATE_VARIABLE_ConsumptionsMap_31 = STATE_VARIABLE_ConsumptionsMap_0_30;
    *STATE_VARIABLE_RevExecution_29 = STATE_VARIABLE_RevExecution_0_28;
    *STATE_VARIABLE_ResumeTime_27 = STATE_VARIABLE_ResumeTime_0_26;
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_dependent_parallel_cost_consumption_13_p_0(
  MR_Word Info_14,
  MR_Word ProductionsMap_15,
  MR_Word HeadVar__3_3,
  MR_Float STATE_VARIABLE_PrevSeqConsumeTime_0_28,
  MR_Float * STATE_VARIABLE_PrevSeqConsumeTime_29,
  MR_Float STATE_VARIABLE_PrevParConsumeTime_0_30,
  MR_Float * STATE_VARIABLE_PrevParConsumeTime_31,
  MR_Float STATE_VARIABLE_ResumeTime_0_32,
  MR_Float * STATE_VARIABLE_ResumeTime_33,
  MR_Word STATE_VARIABLE_RevExecution_0_34,
  MR_Word * STATE_VARIABLE_RevExecution_35,
  MR_Word STATE_VARIABLE_ConsumptionsMap_0_36,
  MR_Word * STATE_VARIABLE_ConsumptionsMap_37)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_99_99;
    MR_Integer Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
    MR_Float ParConsTimeBlocked_24;
    MR_Float ParConsTimeNotBlocked_25;
    MR_Float ParConsTime0_26;
    MR_Float Var_38;
    MR_Float Var_39;
    MR_Float Var_40;
    MR_Integer Var_41;
    MR_Word Var_42;
    MR_Box conv0_ParConsTimeBlocked_24;
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
    MR_Word Var_62;
    MR_Float Var_63;
    MR_Word Var_64;
    MR_Integer Var_65;
    MR_Integer Var_66;
    MR_Integer Var_67;
    MR_Integer Var_68;
    MR_Integer Var_69;
    MR_Integer Var_70;
    MR_Integer Var_71;
    MR_Float Var_72;
    MR_Word Var_73;
    MR_Word Var_74;

    *STATE_VARIABLE_PrevSeqConsumeTime_29 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
    TypeCtorInfo_99_99 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0;
    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeCtorInfo_99_99, ProductionsMap_15, Var_16, &conv0_ParConsTimeBlocked_24);
    ParConsTimeBlocked_24 = MR_unbox_float(conv0_ParConsTimeBlocked_24);
    Var_38 = ((*STATE_VARIABLE_PrevSeqConsumeTime_29) - STATE_VARIABLE_PrevSeqConsumeTime_0_28);
    ParConsTimeNotBlocked_25 = (STATE_VARIABLE_PrevParConsumeTime_0_30 + Var_38);
    Var_39 = mercury__float__max_2_f_0(ParConsTimeBlocked_24, ParConsTimeNotBlocked_25);
    Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_14, (MR_Integer) 0)));
    Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_14, (MR_Integer) 1)));
    Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_14, (MR_Integer) 2)));
    Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_14, (MR_Integer) 3)));
    Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_14, (MR_Integer) 4)));
    Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_14, (MR_Integer) 5)));
    Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_14, (MR_Integer) 6)));
    Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_14, (MR_Integer) 7)));
    Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_14, (MR_Integer) 8)));
    Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_14, (MR_Integer) 9)));
    Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_14, (MR_Integer) 10)));
    Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_14, (MR_Integer) 11)));
    Var_63 = MR_unbox_float((MR_hl_field(MR_mktag(0), Var_42, (MR_Integer) 0)));
    Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_42, (MR_Integer) 1)));
    Var_65 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_42, (MR_Integer) 2)));
    Var_66 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_42, (MR_Integer) 3)));
    Var_67 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_42, (MR_Integer) 4)));
    Var_68 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_42, (MR_Integer) 5)));
    Var_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_42, (MR_Integer) 6)));
    Var_69 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_42, (MR_Integer) 7)));
    Var_70 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_42, (MR_Integer) 8)));
    Var_71 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_42, (MR_Integer) 9)));
    Var_72 = MR_unbox_float((MR_hl_field(MR_mktag(0), Var_42, (MR_Integer) 10)));
    Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_42, (MR_Integer) 11)));
    Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_42, (MR_Integer) 12)));
    Var_40 = mercury__float__float_1_f_0(Var_41);
    ParConsTime0_26 = (Var_39 + Var_40);
    succeeded = (ParConsTimeBlocked_24 > ParConsTimeNotBlocked_25);
    if (succeeded)
    {
      MR_Float Var_43;
      MR_Integer Var_44;
      MR_Word Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_14, (MR_Integer) 2)));
      MR_Word Var_47;
      MR_Word Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_14, (MR_Integer) 0)));
      MR_Word Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_14, (MR_Integer) 1)));
      MR_Word Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_14, (MR_Integer) 3)));
      MR_Word Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_14, (MR_Integer) 4)));
      MR_Word Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_14, (MR_Integer) 5)));
      MR_Word Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_14, (MR_Integer) 6)));
      MR_Word Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_14, (MR_Integer) 7)));
      MR_Word Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_14, (MR_Integer) 8)));
      MR_Word Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_14, (MR_Integer) 9)));
      MR_Word Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_14, (MR_Integer) 10)));
      MR_Word Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_14, (MR_Integer) 11)));
      MR_Float Var_86 = MR_unbox_float((MR_hl_field(MR_mktag(0), Var_45, (MR_Integer) 0)));
      MR_Word Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_45, (MR_Integer) 1)));
      MR_Integer Var_88 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_45, (MR_Integer) 2)));
      MR_Integer Var_89 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_45, (MR_Integer) 3)));
      MR_Integer Var_90 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_45, (MR_Integer) 4)));
      MR_Integer Var_91 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_45, (MR_Integer) 5)));
      MR_Integer Var_92 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_45, (MR_Integer) 6)));
      MR_Integer Var_93;
      MR_Integer Var_94;
      MR_Float Var_95;
      MR_Word Var_96;
      MR_Word Var_97;

      Var_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_45, (MR_Integer) 7)));
      Var_93 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_45, (MR_Integer) 8)));
      Var_94 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_45, (MR_Integer) 9)));
      Var_95 = MR_unbox_float((MR_hl_field(MR_mktag(0), Var_45, (MR_Integer) 10)));
      Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_45, (MR_Integer) 11)));
      Var_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_45, (MR_Integer) 12)));
      Var_43 = mercury__float__float_1_f_0(Var_44);
      *STATE_VARIABLE_PrevParConsumeTime_31 = (ParConsTime0_26 + Var_43);
      {
        Var_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_47, 0) = MR_box_float(STATE_VARIABLE_ResumeTime_0_32);
        MR_hl_field(MR_mktag(0), Var_47, 1) = MR_box_float(ParConsTimeNotBlocked_25);
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_RevExecution_35 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_47));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_RevExecution_0_34));
      }
      *STATE_VARIABLE_ResumeTime_33 = *STATE_VARIABLE_PrevParConsumeTime_31;
    }
    else
    {
      *STATE_VARIABLE_PrevParConsumeTime_31 = ParConsTime0_26;
      *STATE_VARIABLE_RevExecution_35 = STATE_VARIABLE_RevExecution_0_34;
      *STATE_VARIABLE_ResumeTime_33 = STATE_VARIABLE_ResumeTime_0_32;
    }
    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(TypeCtorInfo_99_99, Var_16, MR_box_float(*STATE_VARIABLE_PrevParConsumeTime_31), STATE_VARIABLE_ConsumptionsMap_0_36, STATE_VARIABLE_ConsumptionsMap_37);
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_9_p_0(
  MR_Word Info_10,
  MR_Integer NumMiddleGoals_11,
  MR_Word Conjunct_12,
  MR_Integer STATE_VARIABLE_ConjNum_0_25,
  MR_Integer * STATE_VARIABLE_ConjNum_26,
  MR_Integer STATE_VARIABLE_NumGoals_0_27,
  MR_Integer * STATE_VARIABLE_NumGoals_28,
  MR_Word STATE_VARIABLE_CostData_0_29,
  MR_Word * STATE_VARIABLE_CostData_30)
{
  {
    MR_bool succeeded;
    MR_Word SharedVars_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_CostData_0_29, (MR_Integer) 0)));
    MR_Word Overlap0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_CostData_0_29, (MR_Integer) 1)));
    MR_Word Metrics0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_CostData_0_29, (MR_Integer) 2)));
    MR_Word PM0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_CostData_0_29, (MR_Integer) 3)));
    MR_Word Conjuncts_20 = (MR_Word) Conjunct_12;
    MR_Word IsLastConjunct_21;
    MR_Word PM_22;
    MR_Word Overlap_23;
    MR_Word Metrics_24;
    MR_Integer Var_32;

    Var_32 = mercury__list__length_1_f_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_1[0], Conjuncts_20);
    *STATE_VARIABLE_NumGoals_28 = (STATE_VARIABLE_NumGoals_0_27 + Var_32);
    succeeded = (*STATE_VARIABLE_NumGoals_28 == NumMiddleGoals_11);
    if (succeeded)
      IsLastConjunct_21 = (MR_Integer) 0;
    else
      IsLastConjunct_21 = (MR_Integer) 1;
    mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_p_0(Info_10, SharedVars_16, IsLastConjunct_21, Conjuncts_20, STATE_VARIABLE_ConjNum_0_25, STATE_VARIABLE_ConjNum_26, PM0_19, &PM_22, Overlap0_17, &Overlap_23, Metrics0_18, &Metrics_24);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_CostData_30 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (SharedVars_16));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Overlap_23));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Metrics_24));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (PM_22));
    }
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  {
    MR_Box closure = closure_arg;
    MR_Float conv24_STATE_VARIABLE_Time_18;
    MR_Word conv23_STATE_VARIABLE_Executions_20;
    MR_Word conv22_STATE_VARIABLE_Map_22;

    mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_productions_map_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), MR_unbox_float(wrapper_arg_2), &conv24_STATE_VARIABLE_Time_18, ((MR_Word) wrapper_arg_4), &conv23_STATE_VARIABLE_Executions_20, ((MR_Word) wrapper_arg_6), &conv22_STATE_VARIABLE_Map_22);
    *wrapper_arg_3 = MR_box_float(conv24_STATE_VARIABLE_Time_18);
    *wrapper_arg_5 = ((MR_Box) (conv23_STATE_VARIABLE_Executions_20));
    *wrapper_arg_7 = ((MR_Box) (conv22_STATE_VARIABLE_Map_22));
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9,
  MR_Box wrapper_arg_10,
  MR_Box * wrapper_arg_11)
{
  {
    MR_Box closure = closure_arg;
    MR_Float conv16_STATE_VARIABLE_PrevSeqConsumeTime_26;
    MR_Float conv15_STATE_VARIABLE_PrevParConsumeTime_28;
    MR_Float conv14_STATE_VARIABLE_ResumeTime_30;
    MR_Word conv13_STATE_VARIABLE_RevExecution_32;
    MR_Word conv12_STATE_VARIABLE_ConsumptionsMap_34;

    mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_dependent_parallel_cost_2_13_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), MR_unbox_float(wrapper_arg_2), &conv16_STATE_VARIABLE_PrevSeqConsumeTime_26, MR_unbox_float(wrapper_arg_4), &conv15_STATE_VARIABLE_PrevParConsumeTime_28, MR_unbox_float(wrapper_arg_6), &conv14_STATE_VARIABLE_ResumeTime_30, ((MR_Word) wrapper_arg_8), &conv13_STATE_VARIABLE_RevExecution_32, ((MR_Word) wrapper_arg_10), &conv12_STATE_VARIABLE_ConsumptionsMap_34);
    *wrapper_arg_3 = MR_box_float(conv16_STATE_VARIABLE_PrevSeqConsumeTime_26);
    *wrapper_arg_5 = MR_box_float(conv15_STATE_VARIABLE_PrevParConsumeTime_28);
    *wrapper_arg_7 = MR_box_float(conv14_STATE_VARIABLE_ResumeTime_30);
    *wrapper_arg_9 = ((MR_Box) (conv13_STATE_VARIABLE_RevExecution_32));
    *wrapper_arg_11 = ((MR_Box) (conv12_STATE_VARIABLE_ConsumptionsMap_34));
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv7_STATE_VARIABLE_ConsumedVars_28;
    MR_Word conv6_STATE_VARIABLE_ProducedVars_30;
    MR_Float conv5_STATE_VARIABLE_Time_32;
    MR_Word conv4_STATE_VARIABLE_List_34;

    mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_consumptions_and_productions_list_9_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv7_STATE_VARIABLE_ConsumedVars_28, ((MR_Word) wrapper_arg_4), &conv6_STATE_VARIABLE_ProducedVars_30, MR_unbox_float(wrapper_arg_6), &conv5_STATE_VARIABLE_Time_32, ((MR_Word) wrapper_arg_8), &conv4_STATE_VARIABLE_List_34);
    *wrapper_arg_3 = ((MR_Box) (conv7_STATE_VARIABLE_ConsumedVars_28));
    *wrapper_arg_5 = ((MR_Box) (conv6_STATE_VARIABLE_ProducedVars_30));
    *wrapper_arg_7 = MR_box_float(conv5_STATE_VARIABLE_Time_32);
    *wrapper_arg_9 = ((MR_Box) (conv4_STATE_VARIABLE_List_34));
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__3_3;
    MR_Word conv0_HeadVar__5_5;

    mdprof_fb__automatic_parallelism__autopar_types__conj_produced_and_consumed_vars_5_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv1_HeadVar__3_3, ((MR_Word) wrapper_arg_4), &conv0_HeadVar__5_5);
    *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__3_3));
    *wrapper_arg_5 = ((MR_Box) (conv0_HeadVar__5_5));
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_p_0(
  MR_Word Info_13,
  MR_Word AllSharedVars_14,
  MR_Word IsLastConjunct_15,
  MR_Word Conjunct_16,
  MR_Integer STATE_VARIABLE_ConjNum_0_55,
  MR_Integer * STATE_VARIABLE_ConjNum_56,
  MR_Word STATE_VARIABLE_ProductionsMap_0_57,
  MR_Word * STATE_VARIABLE_ProductionsMap_58,
  MR_Word STATE_VARIABLE_Overlap_0_59,
  MR_Word * STATE_VARIABLE_Overlap_60,
  MR_Word STATE_VARIABLE_Metrics_0_61,
  MR_Word * STATE_VARIABLE_Metrics_62)
{
  {
    MR_Word TypeCtorInfo_223_223;
    MR_Word TypeInfo_224_224;
    MR_Word TypeInfo_225_225;
    MR_Word TypeCtorInfo_226_226;
    MR_Word Algorithm_21;
    MR_Integer Calls_22;
    MR_Word CostB0_23;
    MR_Float CostB_24;
    MR_Word RightProducedVars0_25;
    MR_Word RightConsumedVars0_26;
    MR_Word RightProducedVars_27;
    MR_Word RightConsumedVars_28;
    MR_Word ProducedVars_29;
    MR_Word Vars_30;
    MR_Integer SparkDelay_31;
    MR_Float StartTime0_32;
    MR_Float SparkCost_33;
    MR_Float StartTime_34;
    MR_Word ConsumptionsMap_44;
    MR_Word Execution_46;
    MR_Float CostSignals_48;
    MR_Float CostWaits_49;
    MR_Float CostBPar_50;
    MR_Float DeadTime_51;
    MR_Word DepConjExec_54;
    MR_Word Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_13, (MR_Integer) 2)));
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Word Var_67;
    MR_Word Var_68;
    MR_Integer Var_69;
    MR_Integer Var_70;
    MR_Word Var_98;
    MR_Word Var_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_13, (MR_Integer) 0)));
    MR_Word Var_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_13, (MR_Integer) 1)));
    MR_Word Var_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_13, (MR_Integer) 3)));
    MR_Word Var_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_13, (MR_Integer) 4)));
    MR_Word Var_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_13, (MR_Integer) 5)));
    MR_Word Var_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_13, (MR_Integer) 6)));
    MR_Word Var_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_13, (MR_Integer) 7)));
    MR_Word Var_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_13, (MR_Integer) 8)));
    MR_Word Var_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_13, (MR_Integer) 9)));
    MR_Word Var_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_13, (MR_Integer) 10)));
    MR_Word Var_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_13, (MR_Integer) 11)));
    MR_Float Var_114 = MR_unbox_float((MR_hl_field(MR_mktag(0), Var_63, (MR_Integer) 0)));
    MR_Word Var_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_63, (MR_Integer) 1)));
    MR_Integer Var_116 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_63, (MR_Integer) 2)));
    MR_Integer Var_117 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_63, (MR_Integer) 3)));
    MR_Integer Var_118 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_63, (MR_Integer) 4)));
    MR_Integer Var_119 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_63, (MR_Integer) 5)));
    MR_Integer Var_120 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_63, (MR_Integer) 6)));
    MR_Integer Var_121 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_63, (MR_Integer) 7)));
    MR_Integer Var_122 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_63, (MR_Integer) 8)));
    MR_Integer Var_123 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_63, (MR_Integer) 9)));
    MR_Float Var_124 = MR_unbox_float((MR_hl_field(MR_mktag(0), Var_63, (MR_Integer) 10)));
    MR_Word Var_125;
    MR_Box conv3_RightProducedVars0_25;
    MR_Box conv2_RightConsumedVars0_26;
    MR_Word Var_126;
    MR_Word Var_127;
    MR_Word Var_128;
    MR_Word Var_129;
    MR_Word Var_130;
    MR_Word Var_131;
    MR_Word Var_132;
    MR_Word Var_133;
    MR_Word Var_134;
    MR_Word Var_135;
    MR_Word Var_136;
    MR_Float Var_137;
    MR_Word Var_138;
    MR_Integer Var_139;
    MR_Integer Var_140;
    MR_Integer Var_141;
    MR_Integer Var_142;
    MR_Integer Var_143;
    MR_Integer Var_144;
    MR_Integer Var_145;
    MR_Float Var_146;
    MR_Word Var_147;
    MR_Word Var_148;
    MR_Float Var_52;
    MR_Word Var_53;
    MR_Box conv27_Var_52;
    MR_Box conv26_Var_53;
    MR_Box conv25_STATE_VARIABLE_ProductionsMap_58;

    Algorithm_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_63, (MR_Integer) 11)));
    Var_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_63, (MR_Integer) 12)));
    Calls_22 = measurements__parallel_exec_metrics_get_num_calls_1_f_0(STATE_VARIABLE_Metrics_0_61);
    mdprof_fb__automatic_parallelism__autopar_costs__conj_calc_cost_3_p_0(Conjunct_16, Calls_22, &CostB0_23);
    CostB_24 = measurements__goal_cost_get_percall_1_f_0(CostB0_23);
    TypeCtorInfo_223_223 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    Var_65 = mercury__set__init_0_f_0(TypeCtorInfo_223_223);
    Var_66 = mercury__set__init_0_f_0(TypeCtorInfo_223_223);
    TypeInfo_224_224 = (MR_Word) &mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_1[0];
    TypeInfo_225_225 = (MR_Word) &mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_1[2];
    mercury__list__foldl2_6_p_0(TypeInfo_224_224, TypeInfo_225_225, TypeInfo_225_225, (MR_Word) &mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_2[4], Conjunct_16, ((MR_Box) (Var_65)), &conv3_RightProducedVars0_25, ((MR_Box) (Var_66)), &conv2_RightConsumedVars0_26);
    RightProducedVars0_25 = ((MR_Word) conv3_RightProducedVars0_25);
    RightConsumedVars0_26 = ((MR_Word) conv2_RightConsumedVars0_26);
    RightProducedVars_27 = mercury__set__intersect_2_f_0(TypeCtorInfo_223_223, RightProducedVars0_25, AllSharedVars_14);
    RightConsumedVars_28 = mercury__set__intersect_2_f_0(TypeCtorInfo_223_223, RightConsumedVars0_26, AllSharedVars_14);
    TypeCtorInfo_226_226 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0;
    Var_67 = mercury__map__sorted_keys_1_f_0(TypeCtorInfo_223_223, TypeCtorInfo_226_226, STATE_VARIABLE_ProductionsMap_0_57);
    ProducedVars_29 = mercury__set__from_sorted_list_1_f_0(TypeCtorInfo_223_223, Var_67);
    Vars_30 = mercury__set__intersect_2_f_0(TypeCtorInfo_223_223, ProducedVars_29, RightConsumedVars_28);
    Var_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_13, (MR_Integer) 0)));
    Var_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_13, (MR_Integer) 1)));
    Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_13, (MR_Integer) 2)));
    Var_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_13, (MR_Integer) 3)));
    Var_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_13, (MR_Integer) 4)));
    Var_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_13, (MR_Integer) 5)));
    Var_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_13, (MR_Integer) 6)));
    Var_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_13, (MR_Integer) 7)));
    Var_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_13, (MR_Integer) 8)));
    Var_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_13, (MR_Integer) 9)));
    Var_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_13, (MR_Integer) 10)));
    Var_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_13, (MR_Integer) 11)));
    Var_137 = MR_unbox_float((MR_hl_field(MR_mktag(0), Var_68, (MR_Integer) 0)));
    Var_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_68, (MR_Integer) 1)));
    Var_139 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_68, (MR_Integer) 2)));
    SparkDelay_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_68, (MR_Integer) 3)));
    Var_140 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_68, (MR_Integer) 4)));
    Var_141 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_68, (MR_Integer) 5)));
    Var_142 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_68, (MR_Integer) 6)));
    Var_143 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_68, (MR_Integer) 7)));
    Var_144 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_68, (MR_Integer) 8)));
    Var_145 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_68, (MR_Integer) 9)));
    Var_146 = MR_unbox_float((MR_hl_field(MR_mktag(0), Var_68, (MR_Integer) 10)));
    Var_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_68, (MR_Integer) 11)));
    Var_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_68, (MR_Integer) 12)));
    Var_70 = (STATE_VARIABLE_ConjNum_0_55 - (MR_Integer) 1);
    Var_69 = (Var_70 * SparkDelay_31);
    StartTime0_32 = mercury__float__float_1_f_0(Var_69);
    switch (IsLastConjunct_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        SparkCost_33 = (MR_Float) 0.0000000000000000;
        break;
      case (MR_Integer) 1:
        {
          MR_Integer Var_72;
          MR_Word Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_13, (MR_Integer) 2)));
          MR_Word Var_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_13, (MR_Integer) 0)));
          MR_Word Var_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_13, (MR_Integer) 1)));
          MR_Word Var_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_13, (MR_Integer) 3)));
          MR_Word Var_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_13, (MR_Integer) 4)));
          MR_Word Var_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_13, (MR_Integer) 5)));
          MR_Word Var_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_13, (MR_Integer) 6)));
          MR_Word Var_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_13, (MR_Integer) 7)));
          MR_Word Var_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_13, (MR_Integer) 8)));
          MR_Word Var_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_13, (MR_Integer) 9)));
          MR_Word Var_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_13, (MR_Integer) 10)));
          MR_Word Var_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_13, (MR_Integer) 11)));
          MR_Float Var_160 = MR_unbox_float((MR_hl_field(MR_mktag(0), Var_73, (MR_Integer) 0)));
          MR_Word Var_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_73, (MR_Integer) 1)));
          MR_Integer Var_162;
          MR_Integer Var_163;
          MR_Integer Var_164;
          MR_Integer Var_165;
          MR_Integer Var_166;
          MR_Integer Var_167;
          MR_Integer Var_168;
          MR_Float Var_169;
          MR_Word Var_170;
          MR_Word Var_171;

          Var_72 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_73, (MR_Integer) 2)));
          Var_162 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_73, (MR_Integer) 3)));
          Var_163 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_73, (MR_Integer) 4)));
          Var_164 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_73, (MR_Integer) 5)));
          Var_165 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_73, (MR_Integer) 6)));
          Var_166 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_73, (MR_Integer) 7)));
          Var_167 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_73, (MR_Integer) 8)));
          Var_168 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_73, (MR_Integer) 9)));
          Var_169 = MR_unbox_float((MR_hl_field(MR_mktag(0), Var_73, (MR_Integer) 10)));
          Var_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_73, (MR_Integer) 11)));
          Var_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_73, (MR_Integer) 12)));
          SparkCost_33 = mercury__float__float_1_f_0(Var_72);
        }
        break;
    }
    StartTime_34 = (StartTime0_32 + SparkCost_33);
    if ((Algorithm_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word Var_75;
      MR_Float Var_76;

      CostBPar_50 = (CostB_24 + SparkCost_33);
      Var_76 = (StartTime_34 + CostB_24);
      {
        Var_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_75, 0) = MR_box_float(StartTime_34);
        MR_hl_field(MR_mktag(0), Var_75, 1) = MR_box_float(Var_76);
      }
      {
        Execution_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Execution_46, 0) = ((MR_Box) (Var_75));
        MR_hl_field(MR_mktag(1), Execution_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      ConsumptionsMap_44 = mercury__map__init_0_f_0(TypeCtorInfo_223_223, TypeCtorInfo_226_226);
      CostSignals_48 = (MR_Float) 0.0000000000000000;
      CostWaits_49 = (MR_Float) 0.0000000000000000;
      DeadTime_51 = (MR_Float) 0.0000000000000000;
    }
    else
    {
      MR_Word Var_267 = ((MR_Word) (MR_hl_field(MR_mktag(1), Algorithm_21, (MR_Integer) 0)));

      switch (Var_267) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word TypeInfo_237_237;
            MR_Word ConsumptionsAndProductionsList0_38;
            MR_Word ConsumptionsAndProductionsList_39;
            MR_Float LastSeqConsumeTime_40;
            MR_Float LastParConsumeTime_41;
            MR_Float LastResumeTime_42;
            MR_Word RevExecution0_43;
            MR_Word RevExecution_45;
            MR_Float CostBParElapsed_47;
            MR_Word Var_82;
            MR_Word Var_86;
            MR_Float Var_87;
            MR_Word Var_88;
            MR_Integer Var_89;
            MR_Integer Var_90;
            MR_Word Var_91;
            MR_Integer Var_92;
            MR_Integer Var_93;
            MR_Integer Var_94;
            MR_Word Var_95;
            MR_Integer Var_96;
            MR_Word Var_35;
            MR_Word Var_36;
            MR_Float Var_37;
            MR_Box conv11_Var_35;
            MR_Box conv10_Var_36;
            MR_Box conv9_Var_37;
            MR_Box conv8_ConsumptionsAndProductionsList0_38;
            MR_Box conv21_LastSeqConsumeTime_40;
            MR_Box conv20_LastParConsumeTime_41;
            MR_Box conv19_LastResumeTime_42;
            MR_Box conv18_RevExecution0_43;
            MR_Box conv17_ConsumptionsMap_44;
            MR_Word Var_172;
            MR_Word Var_173;
            MR_Word Var_174;
            MR_Word Var_175;
            MR_Word Var_176;
            MR_Word Var_177;
            MR_Word Var_178;
            MR_Word Var_179;
            MR_Word Var_180;
            MR_Word Var_181;
            MR_Word Var_182;
            MR_Float Var_183;
            MR_Word Var_184;
            MR_Integer Var_185;
            MR_Integer Var_186;
            MR_Integer Var_187;
            MR_Integer Var_188;
            MR_Integer Var_189;
            MR_Integer Var_190;
            MR_Integer Var_191;
            MR_Float Var_192;
            MR_Word Var_193;
            MR_Word Var_194;
            MR_Word Var_195;
            MR_Word Var_196;
            MR_Word Var_197;
            MR_Word Var_198;
            MR_Word Var_199;
            MR_Word Var_200;
            MR_Word Var_201;
            MR_Word Var_202;
            MR_Word Var_203;
            MR_Word Var_204;
            MR_Word Var_205;
            MR_Float Var_206;
            MR_Word Var_207;
            MR_Integer Var_208;
            MR_Integer Var_209;
            MR_Integer Var_210;
            MR_Integer Var_211;
            MR_Integer Var_212;
            MR_Integer Var_213;
            MR_Integer Var_214;
            MR_Float Var_215;
            MR_Word Var_216;
            MR_Word Var_217;

            mercury__list__foldl4_10_p_0(TypeInfo_224_224, TypeInfo_225_225, TypeInfo_225_225, TypeCtorInfo_226_226, (MR_Word) &mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_1[3], (MR_Word) &mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_2[5], Conjunct_16, ((MR_Box) (Vars_30)), &conv11_Var_35, ((MR_Box) (RightProducedVars_27)), &conv10_Var_36, MR_box_float((MR_Float) 0.0000000000000000), &conv9_Var_37, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &conv8_ConsumptionsAndProductionsList0_38);
            Var_35 = ((MR_Word) conv11_Var_35);
            Var_36 = ((MR_Word) conv10_Var_36);
            Var_37 = MR_unbox_float(conv9_Var_37);
            ConsumptionsAndProductionsList0_38 = ((MR_Word) conv8_ConsumptionsAndProductionsList0_38);
            TypeInfo_237_237 = (MR_Word) &mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_2[0];
            mercury__list__reverse_2_p_0(TypeInfo_237_237, ConsumptionsAndProductionsList0_38, &ConsumptionsAndProductionsList_39);
            {
              Var_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_82, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_5[0]));
              MR_hl_field(MR_mktag(0), Var_82, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_p_0_3));
              MR_hl_field(MR_mktag(0), Var_82, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_82, 3) = ((MR_Box) (Info_13));
              MR_hl_field(MR_mktag(0), Var_82, 4) = ((MR_Box) (STATE_VARIABLE_ProductionsMap_0_57));
            }
            Var_86 = mercury__map__init_0_f_0(TypeCtorInfo_223_223, TypeCtorInfo_226_226);
            mercury__list__foldl5_12_p_0(TypeInfo_237_237, TypeCtorInfo_226_226, TypeCtorInfo_226_226, TypeCtorInfo_226_226, (MR_Word) &mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_1[4], (MR_Word) &mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_2[2], Var_82, ConsumptionsAndProductionsList_39, MR_box_float((MR_Float) 0.0000000000000000), &conv21_LastSeqConsumeTime_40, MR_box_float(StartTime_34), &conv20_LastParConsumeTime_41, MR_box_float(StartTime_34), &conv19_LastResumeTime_42, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &conv18_RevExecution0_43, ((MR_Box) (Var_86)), &conv17_ConsumptionsMap_44);
            LastSeqConsumeTime_40 = MR_unbox_float(conv21_LastSeqConsumeTime_40);
            LastParConsumeTime_41 = MR_unbox_float(conv20_LastParConsumeTime_41);
            LastResumeTime_42 = MR_unbox_float(conv19_LastResumeTime_42);
            RevExecution0_43 = ((MR_Word) conv18_RevExecution0_43);
            ConsumptionsMap_44 = ((MR_Word) conv17_ConsumptionsMap_44);
            Var_87 = (CostB_24 - LastSeqConsumeTime_40);
            CostBParElapsed_47 = (LastParConsumeTime_41 + Var_87);
            {
              Var_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_88, 0) = MR_box_float(LastResumeTime_42);
              MR_hl_field(MR_mktag(0), Var_88, 1) = MR_box_float(CostBParElapsed_47);
            }
            {
              RevExecution_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), RevExecution_45, 0) = ((MR_Box) (Var_88));
              MR_hl_field(MR_mktag(1), RevExecution_45, 1) = ((MR_Box) (RevExecution0_43));
            }
            mercury__list__reverse_2_p_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_2[1], RevExecution_45, &Execution_46);
            Var_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_13, (MR_Integer) 0)));
            Var_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_13, (MR_Integer) 1)));
            Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_13, (MR_Integer) 2)));
            Var_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_13, (MR_Integer) 3)));
            Var_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_13, (MR_Integer) 4)));
            Var_176 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_13, (MR_Integer) 5)));
            Var_177 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_13, (MR_Integer) 6)));
            Var_178 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_13, (MR_Integer) 7)));
            Var_179 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_13, (MR_Integer) 8)));
            Var_180 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_13, (MR_Integer) 9)));
            Var_181 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_13, (MR_Integer) 10)));
            Var_182 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_13, (MR_Integer) 11)));
            Var_183 = MR_unbox_float((MR_hl_field(MR_mktag(0), Var_91, (MR_Integer) 0)));
            Var_184 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_91, (MR_Integer) 1)));
            Var_185 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_91, (MR_Integer) 2)));
            Var_186 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_91, (MR_Integer) 3)));
            Var_187 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_91, (MR_Integer) 4)));
            Var_90 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_91, (MR_Integer) 5)));
            Var_188 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_91, (MR_Integer) 6)));
            Var_189 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_91, (MR_Integer) 7)));
            Var_190 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_91, (MR_Integer) 8)));
            Var_191 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_91, (MR_Integer) 9)));
            Var_192 = MR_unbox_float((MR_hl_field(MR_mktag(0), Var_91, (MR_Integer) 10)));
            Var_193 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_91, (MR_Integer) 11)));
            Var_194 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_91, (MR_Integer) 12)));
            Var_92 = mercury__set__count_1_f_0(TypeCtorInfo_223_223, RightProducedVars_27);
            Var_89 = (Var_90 * Var_92);
            CostSignals_48 = mercury__float__float_1_f_0(Var_89);
            Var_195 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_13, (MR_Integer) 0)));
            Var_196 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_13, (MR_Integer) 1)));
            Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_13, (MR_Integer) 2)));
            Var_197 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_13, (MR_Integer) 3)));
            Var_198 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_13, (MR_Integer) 4)));
            Var_199 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_13, (MR_Integer) 5)));
            Var_200 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_13, (MR_Integer) 6)));
            Var_201 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_13, (MR_Integer) 7)));
            Var_202 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_13, (MR_Integer) 8)));
            Var_203 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_13, (MR_Integer) 9)));
            Var_204 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_13, (MR_Integer) 10)));
            Var_205 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_13, (MR_Integer) 11)));
            Var_206 = MR_unbox_float((MR_hl_field(MR_mktag(0), Var_95, (MR_Integer) 0)));
            Var_207 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_95, (MR_Integer) 1)));
            Var_208 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_95, (MR_Integer) 2)));
            Var_209 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_95, (MR_Integer) 3)));
            Var_210 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_95, (MR_Integer) 4)));
            Var_211 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_95, (MR_Integer) 5)));
            Var_94 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_95, (MR_Integer) 6)));
            Var_212 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_95, (MR_Integer) 7)));
            Var_213 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_95, (MR_Integer) 8)));
            Var_214 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_95, (MR_Integer) 9)));
            Var_215 = MR_unbox_float((MR_hl_field(MR_mktag(0), Var_95, (MR_Integer) 10)));
            Var_216 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_95, (MR_Integer) 11)));
            Var_217 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_95, (MR_Integer) 12)));
            Var_96 = mercury__set__count_1_f_0(TypeCtorInfo_223_223, Vars_30);
            Var_93 = (Var_94 * Var_96);
            CostWaits_49 = mercury__float__float_1_f_0(Var_93);
            mdprof_fb__automatic_parallelism__autopar_calc_overlap__calc_cost_and_dead_time_3_p_0(Execution_46, &CostBPar_50, &DeadTime_51);
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Word Var_261;
            MR_Float Var_262;

            CostBPar_50 = (CostB_24 + SparkCost_33);
            Var_262 = (StartTime_34 + CostB_24);
            {
              Var_261 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_261, 0) = MR_box_float(StartTime_34);
              MR_hl_field(MR_mktag(0), Var_261, 1) = MR_box_float(Var_262);
            }
            {
              Execution_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Execution_46, 0) = ((MR_Box) (Var_261));
              MR_hl_field(MR_mktag(1), Execution_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            ConsumptionsMap_44 = mercury__map__init_0_f_0(TypeCtorInfo_223_223, TypeCtorInfo_226_226);
            CostSignals_48 = (MR_Float) 0.0000000000000000;
            CostWaits_49 = (MR_Float) 0.0000000000000000;
            DeadTime_51 = (MR_Float) 0.0000000000000000;
          }
          break;
      }
    }
    *STATE_VARIABLE_Metrics_62 = measurements__init_parallel_exec_metrics_incomplete_6_f_0(STATE_VARIABLE_Metrics_0_61, CostSignals_48, CostWaits_49, CostB_24, CostBPar_50, DeadTime_51);
    {
      Var_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_98, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_98, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_p_0_4));
      MR_hl_field(MR_mktag(0), Var_98, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_98, 3) = ((MR_Box) (RightProducedVars_27));
    }
    mercury__list__foldl3_8_p_0(TypeInfo_224_224, TypeCtorInfo_226_226, (MR_Word) &mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_1[4], (MR_Word) &mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_2[2], Var_98, Conjunct_16, MR_box_float(StartTime_34), &conv27_Var_52, ((MR_Box) (Execution_46)), &conv26_Var_53, ((MR_Box) (STATE_VARIABLE_ProductionsMap_0_57)), &conv25_STATE_VARIABLE_ProductionsMap_58);
    Var_52 = MR_unbox_float(conv27_Var_52);
    Var_53 = ((MR_Word) conv26_Var_53);
    *STATE_VARIABLE_ProductionsMap_58 = ((MR_Word) conv25_STATE_VARIABLE_ProductionsMap_58);
    {
      DepConjExec_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), DepConjExec_54, 0) = ((MR_Box) (Execution_46));
      MR_hl_field(MR_mktag(0), DepConjExec_54, 1) = ((MR_Box) (*STATE_VARIABLE_ProductionsMap_58));
      MR_hl_field(MR_mktag(0), DepConjExec_54, 2) = ((MR_Box) (ConsumptionsMap_44));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Overlap_60 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (STATE_VARIABLE_Overlap_0_59));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (DepConjExec_54));
      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (Vars_30));
    }
    *STATE_VARIABLE_ConjNum_56 = (STATE_VARIABLE_ConjNum_0_55 + (MR_Integer) 1);
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap__calc_cost_and_dead_time_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Float * HeadVar__2_2,
  MR_Float * HeadVar__3_3)
{
  if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *HeadVar__2_2 = (MR_Float) 0.0000000000000000;
    *HeadVar__3_3 = (MR_Float) 0.0000000000000000;
  }
  else
  {
    MR_Float Start_4;
    MR_Float Stop_5;
    MR_Word Executions_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
    MR_Float STATE_VARIABLE_Time_11_11;

    Start_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 0)));
    Stop_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 1)));
    STATE_VARIABLE_Time_11_11 = (Stop_5 - Start_4);
    mdprof_fb__automatic_parallelism__autopar_calc_overlap__calc_cost_and_dead_time_2_6_p_0(Executions_6, Stop_5, STATE_VARIABLE_Time_11_11, HeadVar__2_2, (MR_Float) 0.0000000000000000, HeadVar__3_3);
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap__calc_cost_and_dead_time_2_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Float LastStop_2,
  MR_Float STATE_VARIABLE_Time_0_3,
  MR_Float * STATE_VARIABLE_Time_4,
  MR_Float STATE_VARIABLE_DeadTime_0_5,
  MR_Float * STATE_VARIABLE_DeadTime_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_DeadTime_6 = STATE_VARIABLE_DeadTime_0_5;
      *STATE_VARIABLE_Time_4 = STATE_VARIABLE_Time_0_3;
    }
    else
    {
      MR_Float Start_14;
      MR_Float Stop_15;
      MR_Word Executions_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Float STATE_VARIABLE_Time_25_25;
      MR_Float Var_26;
      MR_Float STATE_VARIABLE_DeadTime_27_27;
      MR_Float Var_28;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Float next_value_of_LastStop_2;
      MR_Float next_value_of_STATE_VARIABLE_Time_0_3;
      MR_Float next_value_of_STATE_VARIABLE_DeadTime_0_5;

      Start_14 = MR_unbox_float((MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 0)));
      Stop_15 = MR_unbox_float((MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 1)));
      Var_26 = (STATE_VARIABLE_Time_0_3 + Stop_15);
      STATE_VARIABLE_Time_25_25 = (Var_26 - Start_14);
      Var_28 = (STATE_VARIABLE_DeadTime_0_5 + Start_14);
      STATE_VARIABLE_DeadTime_27_27 = (Var_28 - LastStop_2);
      // direct tailcall eliminated
      next_value_of_HeadVar__1_1 = Executions_16;
      next_value_of_LastStop_2 = Stop_15;
      next_value_of_STATE_VARIABLE_Time_0_3 = STATE_VARIABLE_Time_25_25;
      next_value_of_STATE_VARIABLE_DeadTime_0_5 = STATE_VARIABLE_DeadTime_27_27;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      LastStop_2 = next_value_of_LastStop_2;
      STATE_VARIABLE_Time_0_3 = next_value_of_STATE_VARIABLE_Time_0_3;
      STATE_VARIABLE_DeadTime_0_5 = next_value_of_STATE_VARIABLE_DeadTime_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv2_STATE_VARIABLE_ConjNum_26;
    MR_Integer conv1_STATE_VARIABLE_NumGoals_28;
    MR_Word conv0_STATE_VARIABLE_CostData_30;

    mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), ((MR_Integer) wrapper_arg_2), &conv2_STATE_VARIABLE_ConjNum_26, ((MR_Integer) wrapper_arg_4), &conv1_STATE_VARIABLE_NumGoals_28, ((MR_Word) wrapper_arg_6), &conv0_STATE_VARIABLE_CostData_30);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_ConjNum_26));
    *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_NumGoals_28));
    *wrapper_arg_7 = ((MR_Box) (conv0_STATE_VARIABLE_CostData_30));
  }
}

void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_4_p_0(
  MR_Word Info_5,
  MR_Word STATE_VARIABLE_Parallelisation_0_27,
  MR_Word * STATE_VARIABLE_Parallelisation_28,
  MR_Word * CostData_7)
{
  {
    MR_Word TypeCtorInfo_184_184;
    MR_Word ParConj_8;
    MR_Integer NumCalls_9;
    MR_Float CostBeforePercall_13;
    MR_Float CostAfterPercall_14;
    MR_Word Opts_15;
    MR_Integer SparkCost_16;
    MR_Integer SparkDelay_17;
    MR_Integer BarrierCost_18;
    MR_Integer ContextWakeupDelay_19;
    MR_Word Metrics0_20;
    MR_Word SharedVars_22;
    MR_Word CostData0_23;
    MR_Integer NumMiddleGoals_24;
    MR_Word STATE_VARIABLE_Parallelisation_32_32;
    MR_Word STATE_VARIABLE_Parallelisation_41_41;
    MR_Float Var_47;
    MR_Float Var_48;
    MR_Float Var_49;
    MR_Float Var_50;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_56;
    MR_ArrayPtr Var_63;
    MR_Integer Var_64;
    MR_Integer Var_65;
    MR_Integer Var_66;
    MR_Word Var_67;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_Word Var_71;
    MR_Word Var_110;
    MR_Word Var_111;
    MR_Word Var_112;
    MR_Word Var_113;
    MR_Word Var_114;
    MR_Word Var_115;
    MR_Word Var_116;
    MR_Word Var_117;
    MR_Word Var_118;
    MR_Word Var_119;
    MR_Word Var_120;
    MR_Float Var_121;
    MR_Word Var_122;
    MR_Integer Var_125;
    MR_Integer Var_126;
    MR_Integer Var_128;
    MR_Integer Var_129;
    MR_Float Var_130;
    MR_Word Var_131;
    MR_Word Var_132;
    MR_Integer Var_25;
    MR_Integer Var_26;
    MR_Box conv5_Var_25;
    MR_Box conv4_Var_26;
    MR_Box conv3_CostData_7;
    MR_ArrayPtr Var_169;
    MR_Integer Var_170;
    MR_Integer Var_171;
    MR_Integer Var_172;
    MR_Word Var_173;
    MR_Integer Var_174;
    MR_Word Var_175;
    MR_Word Var_176;
    MR_Word Var_177;
    MR_Word Var_178;

    ParConj_8 = mdprof_fb__automatic_parallelism__autopar_types__ip_get_par_conjs_1_f_0(STATE_VARIABLE_Parallelisation_0_27);
    Var_63 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Parallelisation_0_27, (MR_Integer) 0)));
    Var_64 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Parallelisation_0_27, (MR_Integer) 1)));
    Var_65 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Parallelisation_0_27, (MR_Integer) 2)));
    Var_66 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Parallelisation_0_27, (MR_Integer) 3)));
    Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Parallelisation_0_27, (MR_Integer) 4)));
    NumCalls_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Parallelisation_0_27, (MR_Integer) 5)));
    Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Parallelisation_0_27, (MR_Integer) 6)));
    Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Parallelisation_0_27, (MR_Integer) 7)));
    Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Parallelisation_0_27, (MR_Integer) 8)));
    Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Parallelisation_0_27, (MR_Integer) 9)));
    mdprof_fb__automatic_parallelism__autopar_calc_overlap__maybe_calc_sequential_cost__ho2_7_p_0(&CostBeforePercall_13, NumCalls_9, STATE_VARIABLE_Parallelisation_0_27, &STATE_VARIABLE_Parallelisation_32_32);
    mdprof_fb__automatic_parallelism__autopar_calc_overlap__maybe_calc_sequential_cost__ho1_7_p_0(&CostAfterPercall_14, NumCalls_9, STATE_VARIABLE_Parallelisation_32_32, &STATE_VARIABLE_Parallelisation_41_41);
    Var_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 0)));
    Var_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 1)));
    Opts_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 2)));
    Var_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 3)));
    Var_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 4)));
    Var_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 5)));
    Var_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 6)));
    Var_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 7)));
    Var_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 8)));
    Var_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 9)));
    Var_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 10)));
    Var_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 11)));
    Var_121 = MR_unbox_float((MR_hl_field(MR_mktag(0), Opts_15, (MR_Integer) 0)));
    Var_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), Opts_15, (MR_Integer) 1)));
    SparkCost_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Opts_15, (MR_Integer) 2)));
    SparkDelay_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Opts_15, (MR_Integer) 3)));
    BarrierCost_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Opts_15, (MR_Integer) 4)));
    Var_125 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Opts_15, (MR_Integer) 5)));
    Var_126 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Opts_15, (MR_Integer) 6)));
    ContextWakeupDelay_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Opts_15, (MR_Integer) 7)));
    Var_128 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Opts_15, (MR_Integer) 8)));
    Var_129 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Opts_15, (MR_Integer) 9)));
    Var_130 = MR_unbox_float((MR_hl_field(MR_mktag(0), Opts_15, (MR_Integer) 10)));
    Var_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), Opts_15, (MR_Integer) 11)));
    Var_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), Opts_15, (MR_Integer) 12)));
    Var_47 = mercury__float__float_1_f_0(SparkCost_16);
    Var_48 = mercury__float__float_1_f_0(SparkDelay_17);
    Var_49 = mercury__float__float_1_f_0(BarrierCost_18);
    Var_50 = mercury__float__float_1_f_0(ContextWakeupDelay_19);
    Metrics0_20 = measurements__init_empty_parallel_exec_metrics_7_f_0(CostBeforePercall_13, CostAfterPercall_14, NumCalls_9, Var_47, Var_48, Var_49, Var_50);
    SharedVars_22 = mdprof_fb__automatic_parallelism__autopar_types__ip_calc_sharedvars_set_1_f_0(STATE_VARIABLE_Parallelisation_41_41);
    TypeCtorInfo_184_184 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    Var_51 = mercury__map__init_0_f_0(TypeCtorInfo_184_184, (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0);
    {
      CostData0_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), CostData0_23, 0) = ((MR_Box) (SharedVars_22));
      MR_hl_field(MR_mktag(0), CostData0_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), CostData0_23, 2) = ((MR_Box) (Metrics0_20));
      MR_hl_field(MR_mktag(0), CostData0_23, 3) = ((MR_Box) (Var_51));
    }
    NumMiddleGoals_24 = mdprof_fb__automatic_parallelism__autopar_types__ip_get_num_goals_middle_1_f_0(STATE_VARIABLE_Parallelisation_41_41);
    {
      Var_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_52, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_52, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_52, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_52, 3) = ((MR_Box) (Info_5));
      MR_hl_field(MR_mktag(0), Var_52, 4) = ((MR_Box) (NumMiddleGoals_24));
    }
    mercury__list__foldl3_8_p_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_1[1], TypeCtorInfo_184_184, TypeCtorInfo_184_184, (MR_Word) &mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_parallelisation_cost_data_0, Var_52, ParConj_8, ((MR_Box) ((MR_Integer) 1)), &conv5_Var_25, ((MR_Box) ((MR_Integer) 0)), &conv4_Var_26, ((MR_Box) (CostData0_23)), &conv3_CostData_7);
    Var_25 = ((MR_Integer) conv5_Var_25);
    Var_26 = ((MR_Integer) conv4_Var_26);
    *CostData_7 = ((MR_Word) conv3_CostData_7);
    {
      Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (*CostData_7));
    }
    Var_169 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Parallelisation_41_41, (MR_Integer) 0)));
    Var_170 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Parallelisation_41_41, (MR_Integer) 1)));
    Var_171 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Parallelisation_41_41, (MR_Integer) 2)));
    Var_172 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Parallelisation_41_41, (MR_Integer) 3)));
    Var_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Parallelisation_41_41, (MR_Integer) 4)));
    Var_174 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Parallelisation_41_41, (MR_Integer) 5)));
    Var_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Parallelisation_41_41, (MR_Integer) 6)));
    Var_176 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Parallelisation_41_41, (MR_Integer) 7)));
    Var_177 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Parallelisation_41_41, (MR_Integer) 8)));
    Var_178 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Parallelisation_41_41, (MR_Integer) 9)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Parallelisation_28 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_169));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_170));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_171));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_172));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_173));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_174));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_175));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_176));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_177));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_56));
    }
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap__maybe_calc_sequential_cost__ho2_7_p_0(
  MR_Float * CostPercall_11,
  MR_Integer Calls_12,
  MR_Word STATE_VARIABLE_Acc_0_17,
  MR_Word * STATE_VARIABLE_Acc_18)
{
  {
    MR_Word MaybeCost_14;
    MR_Word Cost_15;

    MaybeCost_14 = mdprof_fb__automatic_parallelism__autopar_calc_overlap__IntroducedFrom__func__calculate_parallel_cost__65__1_1_f_0(STATE_VARIABLE_Acc_0_17);
    if ((MaybeCost_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word Goals_16;
      MR_Word Var_20;

      Goals_16 = mdprof_fb__automatic_parallelism__autopar_types__ip_get_goals_before_1_f_0(STATE_VARIABLE_Acc_0_17);
      mdprof_fb__automatic_parallelism__autopar_costs__conj_calc_cost_3_p_0(Goals_16, Calls_12, &Cost_15);
      {
        Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (Cost_15));
      }
      *STATE_VARIABLE_Acc_18 = mdprof_fb__automatic_parallelism__autopar_calc_overlap__IntroducedFrom__func__calculate_parallel_cost__65__2_2_f_0(STATE_VARIABLE_Acc_0_17, Var_20);
    }
    else
    {
      Cost_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeCost_14, (MR_Integer) 0)));
      *STATE_VARIABLE_Acc_18 = STATE_VARIABLE_Acc_0_17;
    }
    *CostPercall_11 = measurements__goal_cost_get_percall_1_f_0(Cost_15);
  }
}

static MR_Word MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap__IntroducedFrom__func__calculate_parallel_cost__65__2_2_f_0(
  MR_Word LambdaHeadVar__1_35,
  MR_Word LambdaHeadVar__2_36)
{
  {
    MR_Word LambdaHeadVar__3_37;
    MR_ArrayPtr Var_81 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_35, (MR_Integer) 0)));
    MR_Integer Var_82 = ((MR_Integer) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_35, (MR_Integer) 1)));
    MR_Integer Var_83 = ((MR_Integer) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_35, (MR_Integer) 2)));
    MR_Integer Var_84 = ((MR_Integer) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_35, (MR_Integer) 3)));
    MR_Word Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_35, (MR_Integer) 4)));
    MR_Integer Var_86 = ((MR_Integer) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_35, (MR_Integer) 5)));
    MR_Word Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_35, (MR_Integer) 6)));
    MR_Word Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_35, (MR_Integer) 8)));
    MR_Word Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_35, (MR_Integer) 9)));
    MR_Word Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_35, (MR_Integer) 7)));

    {
      LambdaHeadVar__3_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LambdaHeadVar__3_37, 0) = ((MR_Box) (Var_81));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__3_37, 1) = ((MR_Box) (Var_82));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__3_37, 2) = ((MR_Box) (Var_83));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__3_37, 3) = ((MR_Box) (Var_84));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__3_37, 4) = ((MR_Box) (Var_85));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__3_37, 5) = ((MR_Box) (Var_86));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__3_37, 6) = ((MR_Box) (Var_87));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__3_37, 7) = ((MR_Box) (LambdaHeadVar__2_36));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__3_37, 8) = ((MR_Box) (Var_89));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__3_37, 9) = ((MR_Box) (Var_90));
    }
    return LambdaHeadVar__3_37;
  }
}

static MR_Word MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap__IntroducedFrom__func__calculate_parallel_cost__65__1_1_f_0(
  MR_Word LambdaHeadVar__1_33)
{
  {
    MR_Word LambdaHeadVar__2_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_33, (MR_Integer) 7)));
    MR_ArrayPtr Var_72 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_33, (MR_Integer) 0)));
    MR_Integer Var_73 = ((MR_Integer) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_33, (MR_Integer) 1)));
    MR_Integer Var_74 = ((MR_Integer) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_33, (MR_Integer) 2)));
    MR_Integer Var_75 = ((MR_Integer) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_33, (MR_Integer) 3)));
    MR_Word Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_33, (MR_Integer) 4)));
    MR_Integer Var_77 = ((MR_Integer) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_33, (MR_Integer) 5)));
    MR_Word Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_33, (MR_Integer) 6)));
    MR_Word Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_33, (MR_Integer) 8)));
    MR_Word Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_33, (MR_Integer) 9)));

    return LambdaHeadVar__2_34;
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap__maybe_calc_sequential_cost__ho1_7_p_0(
  MR_Float * CostPercall_11,
  MR_Integer Calls_12,
  MR_Word STATE_VARIABLE_Acc_0_17,
  MR_Word * STATE_VARIABLE_Acc_18)
{
  {
    MR_Word MaybeCost_14;
    MR_Word Cost_15;

    MaybeCost_14 = mdprof_fb__automatic_parallelism__autopar_calc_overlap__IntroducedFrom__func__calculate_parallel_cost__69__1_1_f_0(STATE_VARIABLE_Acc_0_17);
    if ((MaybeCost_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word Goals_16;
      MR_Word Var_20;

      Goals_16 = mdprof_fb__automatic_parallelism__autopar_types__ip_get_goals_after_1_f_0(STATE_VARIABLE_Acc_0_17);
      mdprof_fb__automatic_parallelism__autopar_costs__conj_calc_cost_3_p_0(Goals_16, Calls_12, &Cost_15);
      {
        Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (Cost_15));
      }
      *STATE_VARIABLE_Acc_18 = mdprof_fb__automatic_parallelism__autopar_calc_overlap__IntroducedFrom__func__calculate_parallel_cost__69__2_2_f_0(STATE_VARIABLE_Acc_0_17, Var_20);
    }
    else
    {
      Cost_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeCost_14, (MR_Integer) 0)));
      *STATE_VARIABLE_Acc_18 = STATE_VARIABLE_Acc_0_17;
    }
    *CostPercall_11 = measurements__goal_cost_get_percall_1_f_0(Cost_15);
  }
}

static MR_Word MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap__IntroducedFrom__func__calculate_parallel_cost__69__2_2_f_0(
  MR_Word LambdaHeadVar__1_44,
  MR_Word LambdaHeadVar__2_45)
{
  {
    MR_Word LambdaHeadVar__3_46;
    MR_ArrayPtr Var_100 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_44, (MR_Integer) 0)));
    MR_Integer Var_101 = ((MR_Integer) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_44, (MR_Integer) 1)));
    MR_Integer Var_102 = ((MR_Integer) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_44, (MR_Integer) 2)));
    MR_Integer Var_103 = ((MR_Integer) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_44, (MR_Integer) 3)));
    MR_Word Var_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_44, (MR_Integer) 4)));
    MR_Integer Var_105 = ((MR_Integer) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_44, (MR_Integer) 5)));
    MR_Word Var_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_44, (MR_Integer) 6)));
    MR_Word Var_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_44, (MR_Integer) 7)));
    MR_Word Var_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_44, (MR_Integer) 9)));
    MR_Word Var_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_44, (MR_Integer) 8)));

    {
      LambdaHeadVar__3_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LambdaHeadVar__3_46, 0) = ((MR_Box) (Var_100));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__3_46, 1) = ((MR_Box) (Var_101));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__3_46, 2) = ((MR_Box) (Var_102));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__3_46, 3) = ((MR_Box) (Var_103));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__3_46, 4) = ((MR_Box) (Var_104));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__3_46, 5) = ((MR_Box) (Var_105));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__3_46, 6) = ((MR_Box) (Var_106));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__3_46, 7) = ((MR_Box) (Var_107));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__3_46, 8) = ((MR_Box) (LambdaHeadVar__2_45));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__3_46, 9) = ((MR_Box) (Var_109));
    }
    return LambdaHeadVar__3_46;
  }
}

static MR_Word MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap__IntroducedFrom__func__calculate_parallel_cost__69__1_1_f_0(
  MR_Word LambdaHeadVar__1_42)
{
  {
    MR_Word LambdaHeadVar__2_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_42, (MR_Integer) 8)));
    MR_ArrayPtr Var_91 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_42, (MR_Integer) 0)));
    MR_Integer Var_92 = ((MR_Integer) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_42, (MR_Integer) 1)));
    MR_Integer Var_93 = ((MR_Integer) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_42, (MR_Integer) 2)));
    MR_Integer Var_94 = ((MR_Integer) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_42, (MR_Integer) 3)));
    MR_Word Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_42, (MR_Integer) 4)));
    MR_Integer Var_96 = ((MR_Integer) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_42, (MR_Integer) 5)));
    MR_Word Var_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_42, (MR_Integer) 6)));
    MR_Word Var_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_42, (MR_Integer) 7)));
    MR_Word Var_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_42, (MR_Integer) 9)));

    return LambdaHeadVar__2_43;
  }
}

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap____Unify____find_production_or_consumption_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdprof_fb__automatic_parallelism__autopar_calc_overlap____Unify____find_production_or_consumption_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap____Compare____find_production_or_consumption_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdprof_fb__automatic_parallelism__autopar_calc_overlap____Compare____find_production_or_consumption_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap____Unify____is_last_par_conjunct_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdprof_fb__automatic_parallelism__autopar_calc_overlap____Unify____is_last_par_conjunct_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap____Compare____is_last_par_conjunct_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdprof_fb__automatic_parallelism__autopar_calc_overlap____Compare____is_last_par_conjunct_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap____Unify____production_or_consumption_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdprof_fb__automatic_parallelism__autopar_calc_overlap____Unify____production_or_consumption_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap____Compare____production_or_consumption_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdprof_fb__automatic_parallelism__autopar_calc_overlap____Compare____production_or_consumption_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__mdprof_fb__automatic_parallelism__autopar_calc_overlap__init(void)
{
}

void mercury__mdprof_fb__automatic_parallelism__autopar_calc_overlap__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__type_ctor_info_find_production_or_consumption_0);
	MR_register_type_ctor_info(&mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__type_ctor_info_is_last_par_conjunct_0);
	MR_register_type_ctor_info(&mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__type_ctor_info_production_or_consumption_0);
}

void mercury__mdprof_fb__automatic_parallelism__autopar_calc_overlap__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__mdprof_fb__automatic_parallelism__autopar_calc_overlap__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module mdprof_fb.automatic_parallelism.autopar_calc_overlap.
