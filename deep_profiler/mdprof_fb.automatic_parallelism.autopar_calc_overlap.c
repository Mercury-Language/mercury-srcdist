/*
** Automatically generated from `autopar_calc_overlap.m'
** by the Mercury compiler,
** version rotd-2023-11-02
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
#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "coverage.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "float.mih"
#include "int.mih"
#include "io.mih"
#include "lazy.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mdprof_fb.mih"
#include "measurement_units.mih"
#include "measurements.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "profile.mih"
#include "program_representation_utils.mih"
#include "query.mih"
#include "report.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
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
#include "mdprof_fb.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "mdprof_fb.automatic_parallelism.autopar_costs.mih"
#include "mdprof_fb.automatic_parallelism.autopar_types.mih"




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

static const MR_EnumFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__enum_ordinal_ordered_find_production_or_consumption_0[2];

static const MR_EnumFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__enum_name_ordered_find_production_or_consumption_0[2];

static const MR_Integer mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__functor_number_map_find_production_or_consumption_0[2];

static const MR_EnumFunctorDesc mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__enum_functor_desc_is_last_par_conjunct_0_0;

static const MR_EnumFunctorDesc mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__enum_functor_desc_is_last_par_conjunct_0_1;

static const MR_EnumFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__enum_ordinal_ordered_is_last_par_conjunct_0[2];

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
mdprof_fb__automatic_parallelism__autopar_calc_overlap__IntroducedFrom__pred__get_consumptions_and_productions_list__514__1_3_p_0(
  MR_Word HeadVar__1_81,
  MR_Word HeadVar__2_82,
  MR_Word * HeadVar__3_83);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap__IntroducedFrom__pred__get_consumptions_and_productions_list__506__1_3_p_0(
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
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap____Compare____find_production_or_consumption_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap____Unify____find_production_or_consumption_0_0(
  MR_Word HeadVar__1_1,
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
  MR_Integer Calls_11,
  MR_Float * CostPercall_12,
  MR_Word STATE_VARIABLE_Acc_0_17,
  MR_Word * STATE_VARIABLE_Acc_18);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap__maybe_calc_sequential_cost__ho1_7_p_0(
  MR_Integer Calls_11,
  MR_Float * CostPercall_12,
  MR_Word STATE_VARIABLE_Acc_0_17,
  MR_Word * STATE_VARIABLE_Acc_18);

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

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_3[1][1];

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_4[2][12];

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_5[2][8];

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_6[1][16];

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_7[1][11];

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_8[1][7];

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_9[1][6];




static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_1[6][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_goal_rep_1)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_seq_conj_1)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_1[0]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_2[0]))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_2[1]))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__lazy__lazy__type_ctor_info_lazy_1)),
    ((MR_Box) (&var_use_analysis__var_use_analysis__type_ctor_info_var_use_info_0))
  },
};

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_2[8][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__type_ctor_info_production_or_consumption_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_5[0])),
    ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_4[1])),
    ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_9[0])),
    ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_consumptions_and_productions_list_9_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_9[0])),
    ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_consumptions_and_productions_list_9_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_3[1][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
};

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_4[2][12] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
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
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
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

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_5[2][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdbcomp__program_representation__pti_goal_rep_1__plain_mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdbcomp__program_representation__pti_goal_rep_1__plain_mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_float_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_float_0))
  },
};

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_6[1][16] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 13)),
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

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_7[1][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
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

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_8[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdbcomp__program_representation__pti_goal_rep_1__plain_mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_float_0))
  },
};

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_9[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_float_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_float_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_comparison_result_0))
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


static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0 = {
  &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_goal_rep_1,
  { (MR_TypeInfo) (&mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdbcomp__feedback__automatic_parallelism__pti_seq_conj_1__plain_mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0 = {
  &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_seq_conj_1,
  { (MR_PseudoTypeInfo) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdbcomp__program_representation__pti_goal_rep_1__plain_mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0 = {
  &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_goal_rep_1,
  { (MR_PseudoTypeInfo) (&mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_calc_overlap__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) }
};

static const MR_FA_TypeInfo_Struct2 mdprof_fb__automatic_parallelism__autopar_calc_overlap__pair__ti_pair_2builtin__type_ctor_info_int_0mdprof_fb__automatic_parallelism__autopar_calc_overlap__type_ctor_info_production_or_consumption_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_TypeInfo) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__type_ctor_info_production_or_consumption_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_calc_overlap__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_int_0mdprof_fb__automatic_parallelism__autopar_calc_overlap__type_ctor_info_production_or_consumption_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap__pair__ti_pair_2builtin__type_ctor_info_int_0mdprof_fb__automatic_parallelism__autopar_calc_overlap__type_ctor_info_production_or_consumption_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 mdprof_fb__automatic_parallelism__autopar_calc_overlap__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_float_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 mdprof_fb__automatic_parallelism__autopar_calc_overlap__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_mdprof_fb__automatic_parallelism__autopar_calc_overlap__type_ctor_info_production_or_consumption_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__type_ctor_info_production_or_consumption_0)
  }
};

static const MR_FA_TypeInfo_Struct2 mdprof_fb__automatic_parallelism__autopar_calc_overlap__pair__ti_pair_2builtin__type_ctor_info_float_0builtin__type_ctor_info_float_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_calc_overlap__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_float_0builtin__type_ctor_info_float_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap__pair__ti_pair_2builtin__type_ctor_info_float_0builtin__type_ctor_info_float_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 mdprof_fb__automatic_parallelism__autopar_calc_overlap__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_float_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0)
  }
};

static const MR_EnumFunctorDesc mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__enum_functor_desc_find_production_or_consumption_0_0 = {
  (MR_String) "find_production",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__enum_functor_desc_find_production_or_consumption_0_1 = {
  (MR_String) "find_consumption",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__enum_ordinal_ordered_find_production_or_consumption_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_calc_overlap____Unify____find_production_or_consumption_0_0_10001)),
  ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_calc_overlap____Compare____find_production_or_consumption_0_0_10001)),
  (MR_String) "mdprof_fb.automatic_parallelism.autopar_calc_overlap",
  (MR_String) "find_production_or_consumption",
  { mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__enum_name_ordered_find_production_or_consumption_0 },
  { mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__enum_ordinal_ordered_find_production_or_consumption_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__functor_number_map_find_production_or_consumption_0,

};

static const MR_EnumFunctorDesc mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__enum_functor_desc_is_last_par_conjunct_0_0 = {
  (MR_String) "is_last_par_conjunct",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__enum_functor_desc_is_last_par_conjunct_0_1 = {
  (MR_String) "not_last_par_conjunct",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__enum_ordinal_ordered_is_last_par_conjunct_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_calc_overlap____Unify____is_last_par_conjunct_0_0_10001)),
  ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_calc_overlap____Compare____is_last_par_conjunct_0_0_10001)),
  (MR_String) "mdprof_fb.automatic_parallelism.autopar_calc_overlap",
  (MR_String) "is_last_par_conjunct",
  { mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__enum_name_ordered_is_last_par_conjunct_0 },
  { mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__enum_ordinal_ordered_is_last_par_conjunct_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__functor_number_map_is_last_par_conjunct_0,

};

static const MR_PseudoTypeInfo mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__field_types_production_or_consumption_0_0[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0) };

static const MR_DuFunctorDesc mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__du_functor_desc_production_or_consumption_0_0 = {
  (MR_String) "consumption",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__field_types_production_or_consumption_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__field_types_production_or_consumption_0_1[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0) };

static const MR_DuFunctorDesc mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__du_functor_desc_production_or_consumption_0_1 = {
  (MR_String) "production",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__field_types_production_or_consumption_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__du_stag_ordered_production_or_consumption_0_0[1] = { &mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__du_functor_desc_production_or_consumption_0_0 };

static const MR_DuFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__du_stag_ordered_production_or_consumption_0_1[1] = { &mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__du_functor_desc_production_or_consumption_0_1 };

static const MR_DuPtagLayout mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__du_ptag_ordered_production_or_consumption_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__du_stag_ordered_production_or_consumption_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__du_stag_ordered_production_or_consumption_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_calc_overlap____Unify____production_or_consumption_0_0_10001)),
  ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_calc_overlap____Compare____production_or_consumption_0_0_10001)),
  (MR_String) "mdprof_fb.automatic_parallelism.autopar_calc_overlap",
  (MR_String) "production_or_consumption",
  { mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__du_name_ordered_production_or_consumption_0 },
  { mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__du_ptag_ordered_production_or_consumption_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  mdprof_fb__automatic_parallelism__autopar_calc_overlap__mdprof_fb__automatic_parallelism__autopar_calc_overlap__functor_number_map_production_or_consumption_0,

};

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap__IntroducedFrom__pred__get_consumptions_and_productions_list__514__1_3_p_0(
  MR_Word HeadVar__1_81,
  MR_Word HeadVar__2_82,
  MR_Word * HeadVar__3_83)
{
  MR_Float TimeA_86 = MR_unbox_float((MR_hl_field(0, HeadVar__1_81, (MR_Integer) 1)));
  MR_Float TimeB_88 = MR_unbox_float((MR_hl_field(0, HeadVar__2_82, (MR_Integer) 1)));

  mercury__private_builtin__builtin_compare_float_3_p_0(HeadVar__3_83, TimeB_88, TimeA_86);
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap__IntroducedFrom__pred__get_consumptions_and_productions_list__506__1_3_p_0(
  MR_Word HeadVar__1_75,
  MR_Word HeadVar__2_76,
  MR_Word * HeadVar__3_77)
{
  MR_Float TimeA_80 = MR_unbox_float((MR_hl_field(0, HeadVar__1_75, (MR_Integer) 1)));
  MR_Float TimeB_82 = MR_unbox_float((MR_hl_field(0, HeadVar__2_76, (MR_Integer) 1)));

  mercury__private_builtin__builtin_compare_float_3_p_0(HeadVar__3_77, TimeB_82, TimeA_80);
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap____Compare____production_or_consumption_0_0(
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
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
  {
    MR_Float Var_16 = MR_unbox_float((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0)));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    {
      MR_Float ArgY1_5 = MR_unbox_float((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0)));

      mercury__private_builtin__builtin_compare_float_3_p_0(HeadVar__1_1, Var_16, ArgY1_5);
    }
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  }
  else
  {
    MR_Float Var_17 = MR_unbox_float((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0)));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
      *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_Float ArgY1_11 = MR_unbox_float((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0)));

      mercury__private_builtin__builtin_compare_float_3_p_0(HeadVar__1_1, Var_17, ArgY1_11);
    }
  }
}

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap____Unify____production_or_consumption_0_0(
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
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
  {
    MR_Float ArgX1_3 = MR_unbox_float((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0)));
    MR_Float ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = MR_unbox_float((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0)));
      succeeded = (ArgX1_3 == ArgY1_4);
    }
  }
  else
  {
    MR_Float ArgX1_5 = MR_unbox_float((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0)));
    MR_Float ArgY1_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = MR_unbox_float((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0)));
      succeeded = (ArgX1_5 == ArgY1_6);
    }
  }
  return succeeded;
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap____Compare____is_last_par_conjunct_0_0(
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
mdprof_fb__automatic_parallelism__autopar_calc_overlap____Unify____is_last_par_conjunct_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap____Compare____find_production_or_consumption_0_0(
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
mdprof_fb__automatic_parallelism__autopar_calc_overlap____Unify____find_production_or_consumption_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap__var_productions_4_p_0(
  MR_Float TimeBefore_5,
  MR_Word Goal_6,
  MR_Integer Var_7,
  MR_Word * HeadVar__4_4)
{
  MR_Float Time_8;
  MR_Word Map_10;
  MR_Word LazyUse_11;
  MR_Word Use_12;
  MR_Word UseType_13;
  MR_Float UseTime_14;
  MR_Float Var_41;
  MR_Word Var_61 = ((MR_Word) ((MR_hl_field(0, Goal_6, (MR_Integer) 2))));
  MR_Box conv0_LazyUse_11;
  MR_Box conv1_Use_12;

  Map_10 = ((MR_Word) ((MR_hl_field(0, Var_61, (MR_Integer) 6))));
  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_1[5]), Map_10, Var_7, &conv0_LazyUse_11);
  LazyUse_11 = ((MR_Word) (conv0_LazyUse_11));
  conv1_Use_12 = mercury__lazy__force_1_f_0((MR_Word) (&var_use_analysis__var_use_analysis__type_ctor_info_var_use_info_0), LazyUse_11);
  Use_12 = ((MR_Word) (conv1_Use_12));
  Var_41 = MR_unbox_float((MR_hl_field(0, Use_12, (MR_Integer) 0)));
  UseType_13 = ((MR_Unsigned) ((MR_hl_field(0, Use_12, (MR_Integer) 2))) & (MR_Integer) 3);
  switch (UseType_13) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140mdprof_fb.automatic_parallelism.autopar_calc_overlap.var_first_use_time\'/5", (MR_String) "Found consumption when looking for production");
        return;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Var_21;
        MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, Goal_6, (MR_Integer) 2))));

        Var_21 = ((MR_Word) ((MR_hl_field(0, Var_22, (MR_Integer) 4))));
        UseTime_14 = measurements__goal_cost_get_percall_1_f_0(Var_21);
      }
      break;
    case (MR_Integer) 0:
      UseTime_14 = Var_41;
      break;
  }
  Time_8 = (TimeBefore_5 + UseTime_14);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__4_4 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_7));
    MR_hl_field(0, base, 1) = MR_box_float(Time_8);
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap__var_consumptions_4_p_0(
  MR_Float TimeBefore_5,
  MR_Word Goal_6,
  MR_Integer Var_7,
  MR_Word * HeadVar__4_4)
{
  MR_Float Time_8;
  MR_Word Map_10;
  MR_Word LazyUse_11;
  MR_Word Use_12;
  MR_Word UseType_13;
  MR_Float UseTime_14;
  MR_Float Var_41;
  MR_Word Var_61 = ((MR_Word) ((MR_hl_field(0, Goal_6, (MR_Integer) 2))));
  MR_Box conv0_LazyUse_11;
  MR_Box conv1_Use_12;

  Map_10 = ((MR_Word) ((MR_hl_field(0, Var_61, (MR_Integer) 7))));
  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_1[5]), Map_10, Var_7, &conv0_LazyUse_11);
  LazyUse_11 = ((MR_Word) (conv0_LazyUse_11));
  conv1_Use_12 = mercury__lazy__force_1_f_0((MR_Word) (&var_use_analysis__var_use_analysis__type_ctor_info_var_use_info_0), LazyUse_11);
  Use_12 = ((MR_Word) (conv1_Use_12));
  Var_41 = MR_unbox_float((MR_hl_field(0, Use_12, (MR_Integer) 0)));
  UseType_13 = ((MR_Unsigned) ((MR_hl_field(0, Use_12, (MR_Integer) 2))) & (MR_Integer) 3);
  switch (UseType_13) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      UseTime_14 = Var_41;
      break;
    case (MR_Integer) 2:
      UseTime_14 = (MR_Float) 0.0000000000000000;
      break;
    case (MR_Integer) 0:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140mdprof_fb.automatic_parallelism.autopar_calc_overlap.var_first_use_time\'/5", (MR_String) "Found production when looking for consumption");
        return;
      }
      break;
  }
  Time_8 = (TimeBefore_5 + UseTime_14);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__4_4 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_7));
    MR_hl_field(0, base, 1) = MR_box_float(Time_8);
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_consumptions_and_productions_list_9_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_HeadVar__3_83;

  mdprof_fb__automatic_parallelism__autopar_calc_overlap__IntroducedFrom__pred__get_consumptions_and_productions_list__514__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_HeadVar__3_83);
  *wrapper_arg_3 = ((MR_Box) (conv3_HeadVar__3_83));
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_consumptions_and_productions_list_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__4_4;

  mdprof_fb__automatic_parallelism__autopar_calc_overlap__var_productions_4_p_0(MR_unbox_float((MR_hl_field(0, closure, (MR_Integer) 3))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Integer) (wrapper_arg_1)), &conv2_HeadVar__4_4);
  *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__4_4));
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_consumptions_and_productions_list_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__3_77;

  mdprof_fb__automatic_parallelism__autopar_calc_overlap__IntroducedFrom__pred__get_consumptions_and_productions_list__506__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_HeadVar__3_77);
  *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__3_77));
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_consumptions_and_productions_list_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__4_4;

  mdprof_fb__automatic_parallelism__autopar_calc_overlap__var_consumptions_4_p_0(MR_unbox_float((MR_hl_field(0, closure, (MR_Integer) 3))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Integer) (wrapper_arg_1)), &conv0_HeadVar__4_4);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__4_4));
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
  MR_Word Var_35 = ((MR_Word) ((MR_hl_field(0, Goal_10, (MR_Integer) 2))));
  MR_Word Var_36;
  MR_Word Var_39;
  MR_Float Var_44;
  MR_Word Var_45;
  MR_Word Var_46;

  InstMapInfo_15 = ((MR_Word) ((MR_hl_field(0, Var_35, (MR_Integer) 1))));
  AllConsumptionVars_16 = ((MR_Word) ((MR_hl_field(0, InstMapInfo_15, (MR_Integer) 2))));
  ConsumptionVars_17 = mercury__set__intersect_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), STATE_VARIABLE_ConsumedVars_0_27, AllConsumptionVars_16);
  {
    Var_36 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_36, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_8[0]));
    MR_hl_field(0, Var_36, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_consumptions_and_productions_list_9_p_0_1));
    MR_hl_field(0, Var_36, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_36, 3) = MR_box_float(STATE_VARIABLE_Time_0_31);
    MR_hl_field(0, Var_36, 4) = ((MR_Box) (Goal_10));
  }
  mercury__set__map_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_2[3]), Var_36, ConsumptionVars_17, &ConsumptionTimesSet0_18);
  *STATE_VARIABLE_ConsumedVars_28 = mercury__set__difference_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), STATE_VARIABLE_ConsumedVars_0_27, ConsumptionVars_17);
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_2[3]), ConsumptionTimesSet0_18, &ConsumptionTimes0_19);
  mercury__list__sort_3_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_2[3]), (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_2[6]), ConsumptionTimes0_19, &ConsumptionTimes_20);
  AllProductionVars_21 = ((MR_Word) ((MR_hl_field(0, InstMapInfo_15, (MR_Integer) 3))));
  ProductionVars_22 = mercury__set__intersect_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), STATE_VARIABLE_ProducedVars_0_29, AllProductionVars_21);
  {
    Var_39 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_39, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_8[0]));
    MR_hl_field(0, Var_39, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_consumptions_and_productions_list_9_p_0_3));
    MR_hl_field(0, Var_39, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_39, 3) = MR_box_float(STATE_VARIABLE_Time_0_31);
    MR_hl_field(0, Var_39, 4) = ((MR_Box) (Goal_10));
  }
  mercury__set__map_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_2[3]), Var_39, ProductionVars_22, &ProductionTimesSet0_23);
  *STATE_VARIABLE_ProducedVars_30 = mercury__set__difference_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), STATE_VARIABLE_ProducedVars_0_29, ProductionVars_22);
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_2[3]), ProductionTimesSet0_23, &ProductionTimes0_24);
  mercury__list__sort_3_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_2[3]), (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_2[7]), ProductionTimes0_24, &ProductionTimes_25);
  mdprof_fb__automatic_parallelism__autopar_calc_overlap__merge_consumptions_and_productions_3_p_0(ConsumptionTimes_20, ProductionTimes_25, &ConsumptionAndProductionTimes_26);
  *STATE_VARIABLE_List_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_2[0]), ConsumptionAndProductionTimes_26, STATE_VARIABLE_List_0_33);
  Var_46 = ((MR_Word) ((MR_hl_field(0, Goal_10, (MR_Integer) 2))));
  Var_45 = ((MR_Word) ((MR_hl_field(0, Var_46, (MR_Integer) 4))));
  Var_44 = measurements__goal_cost_get_percall_1_f_0(Var_45);
  *STATE_VARIABLE_Time_32 = (STATE_VARIABLE_Time_0_31 + Var_44);
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap__merge_consumptions_and_productions_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Integer Var_4;
      MR_Float Time_5;
      MR_Word Prods0_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Prods_7;
      MR_Word Var_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_9;
      MR_Word Var_10;

      Var_4 = ((MR_Integer) ((MR_hl_field(0, Var_8, (MR_Integer) 0))));
      Time_5 = MR_unbox_float((MR_hl_field(0, Var_8, (MR_Integer) 1)));
      {
        Var_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_10, 0) = MR_box_float(Time_5);
      }
      {
        Var_9 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_9, 0) = ((MR_Box) (Var_4));
        MR_hl_field(0, Var_9, 1) = ((MR_Box) (Var_10));
      }
      mdprof_fb__automatic_parallelism__autopar_calc_overlap__merge_consumptions_and_productions_3_p_0((MR_Word) ((MR_Unsigned) 0U), Prods0_6, &Prods_7);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_9));
        MR_hl_field(1, base, 1) = ((MR_Box) (Prods_7));
      }
    }
  else
  {
    MR_Word Var_34 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_35 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Float Var_36 = MR_unbox_float((MR_hl_field(0, Var_35, (MR_Integer) 1)));
    MR_Integer Var_37 = ((MR_Integer) ((MR_hl_field(0, Var_35, (MR_Integer) 0))));

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Cons_15;
      MR_Word Var_17;
      MR_Word Var_18;

      {
        Var_18 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_18, 0) = MR_box_float(Var_36);
      }
      {
        Var_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_17, 0) = ((MR_Box) (Var_37));
        MR_hl_field(0, Var_17, 1) = ((MR_Box) (Var_18));
      }
      mdprof_fb__automatic_parallelism__autopar_calc_overlap__merge_consumptions_and_productions_3_p_0(Var_34, (MR_Word) ((MR_Unsigned) 0U), &Cons_15);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_17));
        MR_hl_field(1, base, 1) = ((MR_Box) (Cons_15));
      }
    }
    else
    {
      MR_Integer ProdVar_25;
      MR_Float ProdTime_26;
      MR_Word Prods0_27 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ProdOrCons_28;
      MR_Word ProdsAndCons_29;
      MR_Word Var_31 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

      ProdVar_25 = ((MR_Integer) ((MR_hl_field(0, Var_31, (MR_Integer) 0))));
      ProdTime_26 = MR_unbox_float((MR_hl_field(0, Var_31, (MR_Integer) 1)));
      succeeded = (ProdTime_26 < Var_36);
      if (succeeded)
      {
        MR_Word Var_32;

        {
          Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_32, 0) = MR_box_float(ProdTime_26);
        }
        {
          ProdOrCons_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ProdOrCons_28, 0) = ((MR_Box) (ProdVar_25));
          MR_hl_field(0, ProdOrCons_28, 1) = ((MR_Box) (Var_32));
        }
        mdprof_fb__automatic_parallelism__autopar_calc_overlap__merge_consumptions_and_productions_3_p_0(HeadVar__1_1, Prods0_27, &ProdsAndCons_29);
      }
      else
      {
        MR_Word Var_33;

        {
          Var_33 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_33, 0) = MR_box_float(Var_36);
        }
        {
          ProdOrCons_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ProdOrCons_28, 0) = ((MR_Box) (Var_37));
          MR_hl_field(0, ProdOrCons_28, 1) = ((MR_Box) (Var_33));
        }
        mdprof_fb__automatic_parallelism__autopar_calc_overlap__merge_consumptions_and_productions_3_p_0(Var_34, HeadVar__2_2, &ProdsAndCons_29);
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (ProdOrCons_28));
        MR_hl_field(1, base, 1) = ((MR_Box) (ProdsAndCons_29));
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
  MR_Float Time_10;
  MR_Word Map_16;
  MR_Word LazyUse_17;
  MR_Word Use_18;
  MR_Word UseType_19;
  MR_Float UseTime_20;
  MR_Float Var_47;
  MR_Word Var_67 = ((MR_Word) ((MR_hl_field(0, Goal_7, (MR_Integer) 2))));
  MR_Box conv0_LazyUse_17;
  MR_Box conv1_Use_18;

  Map_16 = ((MR_Word) ((MR_hl_field(0, Var_67, (MR_Integer) 6))));
  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_1[5]), Map_16, Var_8, &conv0_LazyUse_17);
  LazyUse_17 = ((MR_Word) (conv0_LazyUse_17));
  conv1_Use_18 = mercury__lazy__force_1_f_0((MR_Word) (&var_use_analysis__var_use_analysis__type_ctor_info_var_use_info_0), LazyUse_17);
  Use_18 = ((MR_Word) (conv1_Use_18));
  Var_47 = MR_unbox_float((MR_hl_field(0, Use_18, (MR_Integer) 0)));
  UseType_19 = ((MR_Unsigned) ((MR_hl_field(0, Use_18, (MR_Integer) 2))) & (MR_Integer) 3);
  switch (UseType_19) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140mdprof_fb.automatic_parallelism.autopar_calc_overlap.var_first_use_time\'/5", (MR_String) "Found consumption when looking for production");
        return;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Var_27;
        MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, Goal_7, (MR_Integer) 2))));

        Var_27 = ((MR_Word) ((MR_hl_field(0, Var_28, (MR_Integer) 4))));
        UseTime_20 = measurements__goal_cost_get_percall_1_f_0(Var_27);
      }
      break;
    case (MR_Integer) 0:
      UseTime_20 = Var_47;
      break;
  }
  Time_10 = (TimeBefore_6 + UseTime_20);
  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_float_0), Var_8, MR_box_float(Time_10), STATE_VARIABLE_Map_0_11, STATE_VARIABLE_Map_12);
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_productions_map_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Map_12;

  mdprof_fb__automatic_parallelism__autopar_calc_overlap__var_production_time_to_map_5_p_0(MR_unbox_float((MR_hl_field(0, closure, (MR_Integer) 3))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Map_12);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Map_12));
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
  MR_bool succeeded;
  MR_Word InstMapInfo_14;
  MR_Word BoundVars0_15;
  MR_Word BoundVars_16;
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Goal_10, (MR_Integer) 2))));
  MR_Float STATE_VARIABLE_Time_24_24;
  MR_Word Var_26;
  MR_Float Var_29;
  MR_Word Var_30;
  MR_Word Var_31;
  MR_Box conv1_STATE_VARIABLE_Map_22;

  InstMapInfo_14 = ((MR_Word) ((MR_hl_field(0, Var_23, (MR_Integer) 1))));
  BoundVars0_15 = ((MR_Word) ((MR_hl_field(0, InstMapInfo_14, (MR_Integer) 3))));
  BoundVars_16 = mercury__set__intersect_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), BoundVars0_15, Vars_9);
  if ((STATE_VARIABLE_Executions_0_19 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140mdprof_fb.automatic_parallelism.autopar_calc_overlap.adjust_time_for_waits\'/4", (MR_String) "Time occurs after all executions");
      return;
    }
  else
  {
    MR_Word Execution_58 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_Executions_0_19, (MR_Integer) 0))));
    MR_Word NextExecution_59 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_Executions_0_19, (MR_Integer) 1))));
    MR_Float Start_60 = MR_unbox_float((MR_hl_field(0, Execution_58, (MR_Integer) 0)));
    MR_Float End_61 = MR_unbox_float((MR_hl_field(0, Execution_58, (MR_Integer) 1)));
    MR_Float Var_62 = (STATE_VARIABLE_Time_0_17 + ((MR_Float) 0.00010000000000000000));

    succeeded = (Var_62 < Start_60);
    if (succeeded)
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140mdprof_fb.automatic_parallelism.autopar_calc_overlap.adjust_time_for_waits\'/4", (MR_String) "Time occurs before the current execution");
        return;
      }
    else
    {
      MR_Float Var_66 = (End_61 + ((MR_Float) 0.00010000000000000000));

      succeeded = (STATE_VARIABLE_Time_0_17 <= Var_66);
      if (succeeded)
      {
        *STATE_VARIABLE_Executions_20 = STATE_VARIABLE_Executions_0_19;
        STATE_VARIABLE_Time_24_24 = STATE_VARIABLE_Time_0_17;
      }
      else
        mdprof_fb__automatic_parallelism__autopar_calc_overlap__adjust_time_for_waits_2_5_p_0(End_61, STATE_VARIABLE_Time_0_17, &STATE_VARIABLE_Time_24_24, NextExecution_59, STATE_VARIABLE_Executions_20);
    }
  }
  {
    Var_26 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_26, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_5[1]));
    MR_hl_field(0, Var_26, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_productions_map_8_p_0_1));
    MR_hl_field(0, Var_26, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_26, 3) = MR_box_float(STATE_VARIABLE_Time_24_24);
    MR_hl_field(0, Var_26, 4) = ((MR_Box) (Goal_10));
  }
  mercury__set__fold_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_2[2]), Var_26, BoundVars_16, ((MR_Box) (STATE_VARIABLE_Map_0_21)), &conv1_STATE_VARIABLE_Map_22);
  *STATE_VARIABLE_Map_22 = ((MR_Word) (conv1_STATE_VARIABLE_Map_22));
  Var_31 = ((MR_Word) ((MR_hl_field(0, Goal_10, (MR_Integer) 2))));
  Var_30 = ((MR_Word) ((MR_hl_field(0, Var_31, (MR_Integer) 4))));
  Var_29 = measurements__goal_cost_get_percall_1_f_0(Var_30);
  *STATE_VARIABLE_Time_18 = (STATE_VARIABLE_Time_24_24 + Var_29);
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
    ;
    if ((STATE_VARIABLE_Executions_0_15 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__error_1_p_0((MR_String) "adjust_time_for_waits: Ran out of executions");
        return;
      }
    else
    {
      MR_Word Execution_9 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_Executions_0_15, (MR_Integer) 0))));
      MR_Word NextExecution_10 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_Executions_0_15, (MR_Integer) 1))));
      MR_Float Start_11 = MR_unbox_float((MR_hl_field(0, Execution_9, (MR_Integer) 0)));
      MR_Float End_12 = MR_unbox_float((MR_hl_field(0, Execution_9, (MR_Integer) 1)));
      MR_Float STATE_VARIABLE_Time_17_17;
      MR_Float Var_18 = (Start_11 - LastEnd_6);
      MR_Float Var_19;

      STATE_VARIABLE_Time_17_17 = (STATE_VARIABLE_Time_0_13 + Var_18);
      Var_19 = (STATE_VARIABLE_Time_17_17 + ((MR_Float) 0.00010000000000000000));
      succeeded = (Var_19 < Start_11);
      if (succeeded)
      {
        MR_String Var_22;
        MR_String Var_40;
        MR_String Var_48;
        MR_String Var_50;
        MR_String Var_51;
        MR_String Var_59;

        mercury__string__format__format_float_component_nowidth_noprec_4_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_3[0]), (MR_Integer) 2, Start_11, &Var_40);
        Var_48 = mercury__string__f_43_43_2_f_0(Var_40, (MR_String) ".");
        Var_50 = mercury__string__f_43_43_2_f_0((MR_String) ", Start: ", Var_48);
        mercury__string__format__format_float_component_nowidth_noprec_4_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_3[0]), (MR_Integer) 2, STATE_VARIABLE_Time_17_17, &Var_51);
        Var_59 = mercury__string__f_43_43_2_f_0(Var_51, Var_50);
        Var_22 = mercury__string__f_43_43_2_f_0((MR_String) "Adjustment didn\'t work, time occurs before the current execution. Time: ", Var_59);
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140mdprof_fb.automatic_parallelism.autopar_calc_overlap.adjust_time_for_waits_2\'/5", Var_22);
          return;
        }
      }
      else
      {
        MR_Float Var_33 = (End_12 + ((MR_Float) 0.00010000000000000000));

        succeeded = (STATE_VARIABLE_Time_17_17 <= Var_33);
        if (succeeded)
        {
          *STATE_VARIABLE_Executions_16 = STATE_VARIABLE_Executions_0_15;
          *STATE_VARIABLE_Time_14 = STATE_VARIABLE_Time_17_17;
        }
        else
        {
          MR_Float next_value_of_LastEnd_6 = End_12;
          MR_Float next_value_of_STATE_VARIABLE_Time_0_13 = STATE_VARIABLE_Time_17_17;
          MR_Word next_value_of_STATE_VARIABLE_Executions_0_15 = NextExecution_10;

          // direct tailcall eliminated
          ;
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
  MR_bool succeeded;
  MR_Integer Var_16 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
  MR_Word SeqEventTime_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));

  if (((MR_tag((MR_Word) SeqEventTime_17)) == (MR_Integer) 0))
  {
    MR_Float ParConsTimeBlocked_39;
    MR_Float ParConsTimeNotBlocked_40;
    MR_Float ParConsTime0_41;
    MR_Float Var_43;
    MR_Float Var_44;
    MR_Float Var_45;
    MR_Integer Var_46;
    MR_Word Var_47;
    MR_Box conv0_ParConsTimeBlocked_39;

    *STATE_VARIABLE_PrevSeqConsumeTime_26 = MR_unbox_float((MR_hl_field(0, SeqEventTime_17, (MR_Integer) 0)));
    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_float_0), ProductionsMap_15, Var_16, &conv0_ParConsTimeBlocked_39);
    ParConsTimeBlocked_39 = MR_unbox_float(conv0_ParConsTimeBlocked_39);
    Var_43 = ((*STATE_VARIABLE_PrevSeqConsumeTime_26) - STATE_VARIABLE_PrevSeqConsumeTime_0_25);
    ParConsTimeNotBlocked_40 = (STATE_VARIABLE_PrevParConsumeTime_0_27 + Var_43);
    Var_44 = mercury__float__max_2_f_0(ParConsTimeBlocked_39, ParConsTimeNotBlocked_40);
    Var_47 = ((MR_Word) ((MR_hl_field(0, Info_14, (MR_Integer) 2))));
    Var_46 = ((MR_Integer) ((MR_hl_field(0, Var_47, (MR_Integer) 6))));
    Var_45 = mercury__float__float_1_f_0(Var_46);
    ParConsTime0_41 = (Var_44 + Var_45);
    succeeded = (ParConsTimeBlocked_39 > ParConsTimeNotBlocked_40);
    if (succeeded)
    {
      MR_Float Var_48;
      MR_Integer Var_49;
      MR_Word Var_50 = ((MR_Word) ((MR_hl_field(0, Info_14, (MR_Integer) 2))));
      MR_Word Var_51;

      Var_49 = ((MR_Integer) ((MR_hl_field(0, Var_50, (MR_Integer) 7))));
      Var_48 = mercury__float__float_1_f_0(Var_49);
      *STATE_VARIABLE_PrevParConsumeTime_28 = (ParConsTime0_41 + Var_48);
      {
        Var_51 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_51, 0) = MR_box_float(STATE_VARIABLE_ResumeTime_0_29);
        MR_hl_field(0, Var_51, 1) = MR_box_float(ParConsTimeNotBlocked_40);
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_RevExecution_32 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_51));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_RevExecution_0_31));
      }
      *STATE_VARIABLE_ResumeTime_30 = *STATE_VARIABLE_PrevParConsumeTime_28;
    }
    else
    {
      *STATE_VARIABLE_PrevParConsumeTime_28 = ParConsTime0_41;
      *STATE_VARIABLE_RevExecution_32 = STATE_VARIABLE_RevExecution_0_31;
      *STATE_VARIABLE_ResumeTime_30 = STATE_VARIABLE_ResumeTime_0_29;
    }
    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_float_0), Var_16, MR_box_float(*STATE_VARIABLE_PrevParConsumeTime_28), STATE_VARIABLE_ConsumptionsMap_0_33, STATE_VARIABLE_ConsumptionsMap_34);
  }
  else
  {
    MR_Float SeqProdTime_24 = MR_unbox_float((MR_hl_field(1, SeqEventTime_17, (MR_Integer) 0)));

    mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_dependent_parallel_cost_production_12_p_0(Info_14, SeqProdTime_24, STATE_VARIABLE_PrevSeqConsumeTime_0_25, STATE_VARIABLE_PrevSeqConsumeTime_26, STATE_VARIABLE_PrevParConsumeTime_0_27, STATE_VARIABLE_PrevParConsumeTime_28, STATE_VARIABLE_ResumeTime_0_29, STATE_VARIABLE_ResumeTime_30, STATE_VARIABLE_RevExecution_0_31, STATE_VARIABLE_RevExecution_32, STATE_VARIABLE_ConsumptionsMap_0_33, STATE_VARIABLE_ConsumptionsMap_34);
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
  MR_Float SignalCost_20;
  MR_Integer Var_32;
  MR_Word Var_33 = ((MR_Word) ((MR_hl_field(0, Info_13, (MR_Integer) 2))));
  MR_Float Var_34;
  MR_Float Var_35;

  Var_32 = ((MR_Integer) ((MR_hl_field(0, Var_33, (MR_Integer) 5))));
  SignalCost_20 = mercury__float__float_1_f_0(Var_32);
  Var_35 = (SeqProdTime_14 - STATE_VARIABLE_PrevSeqConsumeTime_0_22);
  Var_34 = (STATE_VARIABLE_PrevParConsumeTime_0_24 + Var_35);
  *STATE_VARIABLE_PrevParConsumeTime_25 = (Var_34 + SignalCost_20);
  *STATE_VARIABLE_PrevSeqConsumeTime_23 = SeqProdTime_14;
  *STATE_VARIABLE_ConsumptionsMap_31 = STATE_VARIABLE_ConsumptionsMap_0_30;
  *STATE_VARIABLE_RevExecution_29 = STATE_VARIABLE_RevExecution_0_28;
  *STATE_VARIABLE_ResumeTime_27 = STATE_VARIABLE_ResumeTime_0_26;
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
  MR_bool succeeded;
  MR_Word SharedVars_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CostData_0_29, (MR_Integer) 0))));
  MR_Word Overlap0_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CostData_0_29, (MR_Integer) 1))));
  MR_Word Metrics0_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CostData_0_29, (MR_Integer) 2))));
  MR_Word PM0_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CostData_0_29, (MR_Integer) 3))));
  MR_Word Conjuncts_20 = (MR_Word) (Conjunct_12);
  MR_Word IsLastConjunct_21;
  MR_Word PM_22;
  MR_Word Overlap_23;
  MR_Word Metrics_24;
  MR_Integer Var_32;

  Var_32 = mercury__list__length_1_f_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_1[0]), Conjuncts_20);
  *STATE_VARIABLE_NumGoals_28 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NumGoals_0_27 + (MR_Unsigned) Var_32);
  succeeded = (*STATE_VARIABLE_NumGoals_28 == NumMiddleGoals_11);
  if (succeeded)
    IsLastConjunct_21 = (MR_Integer) 0;
  else
    IsLastConjunct_21 = (MR_Integer) 1;
  mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_p_0(Info_10, SharedVars_16, IsLastConjunct_21, Conjuncts_20, STATE_VARIABLE_ConjNum_0_25, STATE_VARIABLE_ConjNum_26, PM0_19, &PM_22, Overlap0_17, &Overlap_23, Metrics0_18, &Metrics_24);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_CostData_30 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (SharedVars_16));
    MR_hl_field(0, base, 1) = ((MR_Box) (Overlap_23));
    MR_hl_field(0, base, 2) = ((MR_Box) (Metrics_24));
    MR_hl_field(0, base, 3) = ((MR_Box) (PM_22));
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
  MR_Box closure = closure_arg;
  MR_Float conv24_STATE_VARIABLE_Time_18;
  MR_Word conv23_STATE_VARIABLE_Executions_20;
  MR_Word conv22_STATE_VARIABLE_Map_22;

  mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_productions_map_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), MR_unbox_float(wrapper_arg_2), &conv24_STATE_VARIABLE_Time_18, ((MR_Word) (wrapper_arg_4)), &conv23_STATE_VARIABLE_Executions_20, ((MR_Word) (wrapper_arg_6)), &conv22_STATE_VARIABLE_Map_22);
  *wrapper_arg_3 = MR_box_float(conv24_STATE_VARIABLE_Time_18);
  *wrapper_arg_5 = ((MR_Box) (conv23_STATE_VARIABLE_Executions_20));
  *wrapper_arg_7 = ((MR_Box) (conv22_STATE_VARIABLE_Map_22));
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
  MR_Box closure = closure_arg;
  MR_Float conv16_STATE_VARIABLE_PrevSeqConsumeTime_26;
  MR_Float conv15_STATE_VARIABLE_PrevParConsumeTime_28;
  MR_Float conv14_STATE_VARIABLE_ResumeTime_30;
  MR_Word conv13_STATE_VARIABLE_RevExecution_32;
  MR_Word conv12_STATE_VARIABLE_ConsumptionsMap_34;

  mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_dependent_parallel_cost_2_13_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), MR_unbox_float(wrapper_arg_2), &conv16_STATE_VARIABLE_PrevSeqConsumeTime_26, MR_unbox_float(wrapper_arg_4), &conv15_STATE_VARIABLE_PrevParConsumeTime_28, MR_unbox_float(wrapper_arg_6), &conv14_STATE_VARIABLE_ResumeTime_30, ((MR_Word) (wrapper_arg_8)), &conv13_STATE_VARIABLE_RevExecution_32, ((MR_Word) (wrapper_arg_10)), &conv12_STATE_VARIABLE_ConsumptionsMap_34);
  *wrapper_arg_3 = MR_box_float(conv16_STATE_VARIABLE_PrevSeqConsumeTime_26);
  *wrapper_arg_5 = MR_box_float(conv15_STATE_VARIABLE_PrevParConsumeTime_28);
  *wrapper_arg_7 = MR_box_float(conv14_STATE_VARIABLE_ResumeTime_30);
  *wrapper_arg_9 = ((MR_Box) (conv13_STATE_VARIABLE_RevExecution_32));
  *wrapper_arg_11 = ((MR_Box) (conv12_STATE_VARIABLE_ConsumptionsMap_34));
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
  MR_Box closure = closure_arg;
  MR_Word conv7_STATE_VARIABLE_ConsumedVars_28;
  MR_Word conv6_STATE_VARIABLE_ProducedVars_30;
  MR_Float conv5_STATE_VARIABLE_Time_32;
  MR_Word conv4_STATE_VARIABLE_List_34;

  mdprof_fb__automatic_parallelism__autopar_calc_overlap__get_consumptions_and_productions_list_9_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv7_STATE_VARIABLE_ConsumedVars_28, ((MR_Word) (wrapper_arg_4)), &conv6_STATE_VARIABLE_ProducedVars_30, MR_unbox_float(wrapper_arg_6), &conv5_STATE_VARIABLE_Time_32, ((MR_Word) (wrapper_arg_8)), &conv4_STATE_VARIABLE_List_34);
  *wrapper_arg_3 = ((MR_Box) (conv7_STATE_VARIABLE_ConsumedVars_28));
  *wrapper_arg_5 = ((MR_Box) (conv6_STATE_VARIABLE_ProducedVars_30));
  *wrapper_arg_7 = MR_box_float(conv5_STATE_VARIABLE_Time_32);
  *wrapper_arg_9 = ((MR_Box) (conv4_STATE_VARIABLE_List_34));
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
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__3_3;
  MR_Word conv0_HeadVar__5_5;

  mdprof_fb__automatic_parallelism__autopar_types__conj_produced_and_consumed_vars_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_HeadVar__3_3, ((MR_Word) (wrapper_arg_4)), &conv0_HeadVar__5_5);
  *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__3_3));
  *wrapper_arg_5 = ((MR_Box) (conv0_HeadVar__5_5));
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
  MR_Word Var_63 = ((MR_Word) ((MR_hl_field(0, Info_13, (MR_Integer) 2))));
  MR_Word Var_65;
  MR_Word Var_66;
  MR_Word Var_67;
  MR_Word Var_68;
  MR_Integer Var_69;
  MR_Integer Var_70;
  MR_Word Var_98;
  MR_Box conv3_RightProducedVars0_25;
  MR_Box conv2_RightConsumedVars0_26;
  MR_Box conv27_Var_52;
  MR_Box conv26_Var_53;
  MR_Box conv25_STATE_VARIABLE_ProductionsMap_58;

  Algorithm_21 = ((MR_Word) ((MR_hl_field(0, Var_63, (MR_Integer) 11))));
  Calls_22 = measurements__parallel_exec_metrics_get_num_calls_1_f_0(STATE_VARIABLE_Metrics_0_61);
  mdprof_fb__automatic_parallelism__autopar_costs__conj_calc_cost_3_p_0(Conjunct_16, Calls_22, &CostB0_23);
  CostB_24 = measurements__goal_cost_get_percall_1_f_0(CostB0_23);
  Var_65 = mercury__set__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0));
  Var_66 = mercury__set__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0));
  mercury__list__foldl2_6_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_1[0]), (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_1[2]), (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_1[2]), (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_2[4]), Conjunct_16, ((MR_Box) (Var_65)), &conv3_RightProducedVars0_25, ((MR_Box) (Var_66)), &conv2_RightConsumedVars0_26);
  RightProducedVars0_25 = ((MR_Word) (conv3_RightProducedVars0_25));
  RightConsumedVars0_26 = ((MR_Word) (conv2_RightConsumedVars0_26));
  RightProducedVars_27 = mercury__set__intersect_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), RightProducedVars0_25, AllSharedVars_14);
  RightConsumedVars_28 = mercury__set__intersect_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), RightConsumedVars0_26, AllSharedVars_14);
  Var_67 = mercury__map__sorted_keys_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_float_0), STATE_VARIABLE_ProductionsMap_0_57);
  ProducedVars_29 = mercury__set__sorted_list_to_set_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_67);
  Vars_30 = mercury__set__intersect_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ProducedVars_29, RightConsumedVars_28);
  Var_68 = ((MR_Word) ((MR_hl_field(0, Info_13, (MR_Integer) 2))));
  SparkDelay_31 = ((MR_Integer) ((MR_hl_field(0, Var_68, (MR_Integer) 3))));
  Var_70 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_ConjNum_0_55 - (MR_Unsigned) 1);
  Var_69 = (MR_Integer) ((MR_Unsigned) Var_70 * (MR_Unsigned) SparkDelay_31);
  StartTime0_32 = mercury__float__float_1_f_0(Var_69);
  switch (IsLastConjunct_15) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      SparkCost_33 = (MR_Float) 0.0000000000000000;
      break;
    case (MR_Integer) 1:
      {
        MR_Integer Var_72;
        MR_Word Var_73 = ((MR_Word) ((MR_hl_field(0, Info_13, (MR_Integer) 2))));

        Var_72 = ((MR_Integer) ((MR_hl_field(0, Var_73, (MR_Integer) 2))));
        SparkCost_33 = mercury__float__float_1_f_0(Var_72);
      }
      break;
  }
  StartTime_34 = (StartTime0_32 + SparkCost_33);
  if ((Algorithm_21 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_94;
    MR_Float Var_95;

    CostBPar_50 = (CostB_24 + SparkCost_33);
    Var_95 = (StartTime_34 + CostB_24);
    {
      Var_94 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_94, 0) = MR_box_float(StartTime_34);
      MR_hl_field(0, Var_94, 1) = MR_box_float(Var_95);
    }
    {
      Execution_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Execution_46, 0) = ((MR_Box) (Var_94));
      MR_hl_field(1, Execution_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    ConsumptionsMap_44 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_float_0));
    CostSignals_48 = (MR_Float) 0.0000000000000000;
    CostWaits_49 = (MR_Float) 0.0000000000000000;
    DeadTime_51 = (MR_Float) 0.0000000000000000;
  }
  else
  {
    MR_Word Var_267 = ((MR_Unsigned) ((MR_hl_field(1, Algorithm_21, (MR_Integer) 0))) & (MR_Integer) 1);

    switch (Var_267) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word ConsumptionsAndProductionsList0_38;
          MR_Word ConsumptionsAndProductionsList_39;
          MR_Float LastSeqConsumeTime_40;
          MR_Float LastParConsumeTime_41;
          MR_Float LastResumeTime_42;
          MR_Word RevExecution0_43;
          MR_Word RevExecution_45;
          MR_Float CostBParElapsed_47;
          MR_Word Var_78;
          MR_Word Var_82;
          MR_Float Var_83;
          MR_Word Var_84;
          MR_Integer Var_85;
          MR_Integer Var_86;
          MR_Word Var_87;
          MR_Integer Var_88;
          MR_Integer Var_89;
          MR_Integer Var_90;
          MR_Word Var_91;
          MR_Integer Var_92;
          MR_Box conv11_Var_35;
          MR_Box conv10_Var_36;
          MR_Box conv9_Var_37;
          MR_Box conv8_ConsumptionsAndProductionsList0_38;
          MR_Box conv21_LastSeqConsumeTime_40;
          MR_Box conv20_LastParConsumeTime_41;
          MR_Box conv19_LastResumeTime_42;
          MR_Box conv18_RevExecution0_43;
          MR_Box conv17_ConsumptionsMap_44;

          mercury__list__foldl4_10_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_1[0]), (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_1[2]), (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_1[2]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_float_0), (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_1[3]), (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_2[5]), Conjunct_16, ((MR_Box) (Vars_30)), &conv11_Var_35, ((MR_Box) (RightProducedVars_27)), &conv10_Var_36, MR_box_float((MR_Float) 0.0000000000000000), &conv9_Var_37, ((MR_Box) ((MR_Unsigned) 0U)), &conv8_ConsumptionsAndProductionsList0_38);
          ConsumptionsAndProductionsList0_38 = ((MR_Word) (conv8_ConsumptionsAndProductionsList0_38));
          mercury__list__reverse_2_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_2[0]), ConsumptionsAndProductionsList0_38, &ConsumptionsAndProductionsList_39);
          {
            Var_78 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_78, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_6[0]));
            MR_hl_field(0, Var_78, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_p_0_3));
            MR_hl_field(0, Var_78, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(0, Var_78, 3) = ((MR_Box) (Info_13));
            MR_hl_field(0, Var_78, 4) = ((MR_Box) (STATE_VARIABLE_ProductionsMap_0_57));
          }
          Var_82 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_float_0));
          mercury__list__foldl5_12_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_2[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_float_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_float_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_float_0), (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_1[4]), (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_2[2]), Var_78, ConsumptionsAndProductionsList_39, MR_box_float((MR_Float) 0.0000000000000000), &conv21_LastSeqConsumeTime_40, MR_box_float(StartTime_34), &conv20_LastParConsumeTime_41, MR_box_float(StartTime_34), &conv19_LastResumeTime_42, ((MR_Box) ((MR_Unsigned) 0U)), &conv18_RevExecution0_43, ((MR_Box) (Var_82)), &conv17_ConsumptionsMap_44);
          LastSeqConsumeTime_40 = MR_unbox_float(conv21_LastSeqConsumeTime_40);
          LastParConsumeTime_41 = MR_unbox_float(conv20_LastParConsumeTime_41);
          LastResumeTime_42 = MR_unbox_float(conv19_LastResumeTime_42);
          RevExecution0_43 = ((MR_Word) (conv18_RevExecution0_43));
          ConsumptionsMap_44 = ((MR_Word) (conv17_ConsumptionsMap_44));
          Var_83 = (CostB_24 - LastSeqConsumeTime_40);
          CostBParElapsed_47 = (LastParConsumeTime_41 + Var_83);
          {
            Var_84 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_84, 0) = MR_box_float(LastResumeTime_42);
            MR_hl_field(0, Var_84, 1) = MR_box_float(CostBParElapsed_47);
          }
          {
            RevExecution_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, RevExecution_45, 0) = ((MR_Box) (Var_84));
            MR_hl_field(1, RevExecution_45, 1) = ((MR_Box) (RevExecution0_43));
          }
          mercury__list__reverse_2_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_2[1]), RevExecution_45, &Execution_46);
          Var_87 = ((MR_Word) ((MR_hl_field(0, Info_13, (MR_Integer) 2))));
          Var_86 = ((MR_Integer) ((MR_hl_field(0, Var_87, (MR_Integer) 5))));
          Var_88 = mercury__set__count_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), RightProducedVars_27);
          Var_85 = (MR_Integer) ((MR_Unsigned) Var_86 * (MR_Unsigned) Var_88);
          CostSignals_48 = mercury__float__float_1_f_0(Var_85);
          Var_91 = ((MR_Word) ((MR_hl_field(0, Info_13, (MR_Integer) 2))));
          Var_90 = ((MR_Integer) ((MR_hl_field(0, Var_91, (MR_Integer) 6))));
          Var_92 = mercury__set__count_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Vars_30);
          Var_89 = (MR_Integer) ((MR_Unsigned) Var_90 * (MR_Unsigned) Var_92);
          CostWaits_49 = mercury__float__float_1_f_0(Var_89);
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
            Var_261 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_261, 0) = MR_box_float(StartTime_34);
            MR_hl_field(0, Var_261, 1) = MR_box_float(Var_262);
          }
          {
            Execution_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Execution_46, 0) = ((MR_Box) (Var_261));
            MR_hl_field(1, Execution_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          ConsumptionsMap_44 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_float_0));
          CostSignals_48 = (MR_Float) 0.0000000000000000;
          CostWaits_49 = (MR_Float) 0.0000000000000000;
          DeadTime_51 = (MR_Float) 0.0000000000000000;
        }
        break;
    }
  }
  *STATE_VARIABLE_Metrics_62 = measurements__init_parallel_exec_metrics_incomplete_6_f_0(STATE_VARIABLE_Metrics_0_61, CostSignals_48, CostWaits_49, CostB_24, CostBPar_50, DeadTime_51);
  {
    Var_98 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_98, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_7[0]));
    MR_hl_field(0, Var_98, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_12_p_0_4));
    MR_hl_field(0, Var_98, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_98, 3) = ((MR_Box) (RightProducedVars_27));
  }
  mercury__list__foldl3_8_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_float_0), (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_1[4]), (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_2[2]), Var_98, Conjunct_16, MR_box_float(StartTime_34), &conv27_Var_52, ((MR_Box) (Execution_46)), &conv26_Var_53, ((MR_Box) (STATE_VARIABLE_ProductionsMap_0_57)), &conv25_STATE_VARIABLE_ProductionsMap_58);
  *STATE_VARIABLE_ProductionsMap_58 = ((MR_Word) (conv25_STATE_VARIABLE_ProductionsMap_58));
  {
    DepConjExec_54 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, DepConjExec_54, 0) = ((MR_Box) (Execution_46));
    MR_hl_field(0, DepConjExec_54, 1) = ((MR_Box) (*STATE_VARIABLE_ProductionsMap_58));
    MR_hl_field(0, DepConjExec_54, 2) = ((MR_Box) (ConsumptionsMap_44));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Overlap_60 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (STATE_VARIABLE_Overlap_0_59));
    MR_hl_field(1, base, 1) = ((MR_Box) (DepConjExec_54));
    MR_hl_field(1, base, 2) = ((MR_Box) (Vars_30));
  }
  *STATE_VARIABLE_ConjNum_56 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_ConjNum_0_55 + (MR_Unsigned) 1);
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap__calc_cost_and_dead_time_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Float * HeadVar__2_2,
  MR_Float * HeadVar__3_3)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Float) 0.0000000000000000;
    *HeadVar__3_3 = (MR_Float) 0.0000000000000000;
  }
  else
  {
    MR_Float Start_4;
    MR_Float Stop_5;
    MR_Word Executions_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Float STATE_VARIABLE_Time_11_11;

    Start_4 = MR_unbox_float((MR_hl_field(0, Var_10, (MR_Integer) 0)));
    Stop_5 = MR_unbox_float((MR_hl_field(0, Var_10, (MR_Integer) 1)));
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
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_DeadTime_6 = STATE_VARIABLE_DeadTime_0_5;
      *STATE_VARIABLE_Time_4 = STATE_VARIABLE_Time_0_3;
    }
    else
    {
      MR_Float Start_14;
      MR_Float Stop_15;
      MR_Word Executions_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Float STATE_VARIABLE_Time_25_25;
      MR_Float Var_26;
      MR_Float STATE_VARIABLE_DeadTime_27_27;
      MR_Float Var_28;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Float next_value_of_LastStop_2;
      MR_Float next_value_of_STATE_VARIABLE_Time_0_3;
      MR_Float next_value_of_STATE_VARIABLE_DeadTime_0_5;

      Start_14 = MR_unbox_float((MR_hl_field(0, Var_24, (MR_Integer) 0)));
      Stop_15 = MR_unbox_float((MR_hl_field(0, Var_24, (MR_Integer) 1)));
      Var_26 = (STATE_VARIABLE_Time_0_3 + Stop_15);
      STATE_VARIABLE_Time_25_25 = (Var_26 - Start_14);
      Var_28 = (STATE_VARIABLE_DeadTime_0_5 + Start_14);
      STATE_VARIABLE_DeadTime_27_27 = (Var_28 - LastStop_2);
      // direct tailcall eliminated
      ;
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
  MR_Box closure = closure_arg;
  MR_Integer conv2_STATE_VARIABLE_ConjNum_26;
  MR_Integer conv1_STATE_VARIABLE_NumGoals_28;
  MR_Word conv0_STATE_VARIABLE_CostData_30;

  mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_step_9_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv2_STATE_VARIABLE_ConjNum_26, ((MR_Integer) (wrapper_arg_4)), &conv1_STATE_VARIABLE_NumGoals_28, ((MR_Word) (wrapper_arg_6)), &conv0_STATE_VARIABLE_CostData_30);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_ConjNum_26));
  *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_NumGoals_28));
  *wrapper_arg_7 = ((MR_Box) (conv0_STATE_VARIABLE_CostData_30));
}

void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_4_p_0(
  MR_Word Info_5,
  MR_Word STATE_VARIABLE_Parallelisation_0_27,
  MR_Word * STATE_VARIABLE_Parallelisation_28,
  MR_Word * CostData_7)
{
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

  ParConj_8 = mdprof_fb__automatic_parallelism__autopar_types__ip_get_par_conjs_1_f_0(STATE_VARIABLE_Parallelisation_0_27);
  NumCalls_9 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Parallelisation_0_27, (MR_Integer) 5))));
  mdprof_fb__automatic_parallelism__autopar_calc_overlap__maybe_calc_sequential_cost__ho2_7_p_0(NumCalls_9, &CostBeforePercall_13, STATE_VARIABLE_Parallelisation_0_27, &STATE_VARIABLE_Parallelisation_32_32);
  mdprof_fb__automatic_parallelism__autopar_calc_overlap__maybe_calc_sequential_cost__ho1_7_p_0(NumCalls_9, &CostAfterPercall_14, STATE_VARIABLE_Parallelisation_32_32, &STATE_VARIABLE_Parallelisation_41_41);
  Opts_15 = ((MR_Word) ((MR_hl_field(0, Info_5, (MR_Integer) 2))));
  SparkCost_16 = ((MR_Integer) ((MR_hl_field(0, Opts_15, (MR_Integer) 2))));
  SparkDelay_17 = ((MR_Integer) ((MR_hl_field(0, Opts_15, (MR_Integer) 3))));
  BarrierCost_18 = ((MR_Integer) ((MR_hl_field(0, Opts_15, (MR_Integer) 4))));
  ContextWakeupDelay_19 = ((MR_Integer) ((MR_hl_field(0, Opts_15, (MR_Integer) 7))));
  Var_47 = mercury__float__float_1_f_0(SparkCost_16);
  Var_48 = mercury__float__float_1_f_0(SparkDelay_17);
  Var_49 = mercury__float__float_1_f_0(BarrierCost_18);
  Var_50 = mercury__float__float_1_f_0(ContextWakeupDelay_19);
  Metrics0_20 = measurements__init_empty_parallel_exec_metrics_7_f_0(CostBeforePercall_13, CostAfterPercall_14, NumCalls_9, Var_47, Var_48, Var_49, Var_50);
  SharedVars_22 = mdprof_fb__automatic_parallelism__autopar_types__ip_calc_sharedvars_set_1_f_0(STATE_VARIABLE_Parallelisation_41_41);
  Var_51 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_float_0));
  {
    CostData0_23 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, CostData0_23, 0) = ((MR_Box) (SharedVars_22));
    MR_hl_field(0, CostData0_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, CostData0_23, 2) = ((MR_Box) (Metrics0_20));
    MR_hl_field(0, CostData0_23, 3) = ((MR_Box) (Var_51));
  }
  NumMiddleGoals_24 = mdprof_fb__automatic_parallelism__autopar_types__ip_get_num_goals_middle_1_f_0(STATE_VARIABLE_Parallelisation_41_41);
  {
    Var_52 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_52, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_4[0]));
    MR_hl_field(0, Var_52, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_4_p_0_1));
    MR_hl_field(0, Var_52, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_52, 3) = ((MR_Box) (Info_5));
    MR_hl_field(0, Var_52, 4) = ((MR_Box) (NumMiddleGoals_24));
  }
  mercury__list__foldl3_8_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_calc_overlap_scalar_common_1[1]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_parallelisation_cost_data_0), Var_52, ParConj_8, ((MR_Box) ((MR_Integer) 1)), &conv5_Var_25, ((MR_Box) ((MR_Integer) 0)), &conv4_Var_26, ((MR_Box) (CostData0_23)), &conv3_CostData_7);
  *CostData_7 = ((MR_Word) (conv3_CostData_7));
  {
    Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_56, 0) = ((MR_Box) (*CostData_7));
  }
  Var_169 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_Parallelisation_41_41, (MR_Integer) 0))));
  Var_170 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Parallelisation_41_41, (MR_Integer) 1))));
  Var_171 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Parallelisation_41_41, (MR_Integer) 2))));
  Var_172 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Parallelisation_41_41, (MR_Integer) 3))));
  Var_173 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Parallelisation_41_41, (MR_Integer) 4))));
  Var_174 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Parallelisation_41_41, (MR_Integer) 5))));
  Var_175 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Parallelisation_41_41, (MR_Integer) 6))));
  Var_176 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Parallelisation_41_41, (MR_Integer) 7))));
  Var_177 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Parallelisation_41_41, (MR_Integer) 8))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Parallelisation_28 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_169));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_170));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_171));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_172));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_173));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_174));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_175));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_176));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_177));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_56));
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap__maybe_calc_sequential_cost__ho2_7_p_0(
  MR_Integer Calls_11,
  MR_Float * CostPercall_12,
  MR_Word STATE_VARIABLE_Acc_0_17,
  MR_Word * STATE_VARIABLE_Acc_18)
{
  MR_Word MaybeCost_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_17, (MR_Integer) 7))));
  MR_Word Cost_15;

  if ((MaybeCost_14 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Goals_16;
    MR_Word Var_20;
    MR_ArrayPtr Var_31;
    MR_Integer Var_32;
    MR_Integer Var_33;
    MR_Integer Var_34;
    MR_Word Var_35;
    MR_Integer Var_36;
    MR_Word Var_37;
    MR_Word Var_39;
    MR_Word Var_40;

    Goals_16 = mdprof_fb__automatic_parallelism__autopar_types__ip_get_goals_before_1_f_0(STATE_VARIABLE_Acc_0_17);
    mdprof_fb__automatic_parallelism__autopar_costs__conj_calc_cost_3_p_0(Goals_16, Calls_11, &Cost_15);
    {
      Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_20, 0) = ((MR_Box) (Cost_15));
    }
    Var_31 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_17, (MR_Integer) 0))));
    Var_32 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_17, (MR_Integer) 1))));
    Var_33 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_17, (MR_Integer) 2))));
    Var_34 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_17, (MR_Integer) 3))));
    Var_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_17, (MR_Integer) 4))));
    Var_36 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_17, (MR_Integer) 5))));
    Var_37 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_17, (MR_Integer) 6))));
    Var_39 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_17, (MR_Integer) 8))));
    Var_40 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_17, (MR_Integer) 9))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Acc_18 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_31));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_32));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_33));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_34));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_35));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_36));
      MR_hl_field(0, base, 6) = ((MR_Box) (Var_37));
      MR_hl_field(0, base, 7) = ((MR_Box) (Var_20));
      MR_hl_field(0, base, 8) = ((MR_Box) (Var_39));
      MR_hl_field(0, base, 9) = ((MR_Box) (Var_40));
    }
  }
  else
  {
    Cost_15 = ((MR_Word) ((MR_hl_field(1, MaybeCost_14, (MR_Integer) 0))));
    *STATE_VARIABLE_Acc_18 = STATE_VARIABLE_Acc_0_17;
  }
  *CostPercall_12 = measurements__goal_cost_get_percall_1_f_0(Cost_15);
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap__maybe_calc_sequential_cost__ho1_7_p_0(
  MR_Integer Calls_11,
  MR_Float * CostPercall_12,
  MR_Word STATE_VARIABLE_Acc_0_17,
  MR_Word * STATE_VARIABLE_Acc_18)
{
  MR_Word MaybeCost_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_17, (MR_Integer) 8))));
  MR_Word Cost_15;

  if ((MaybeCost_14 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Goals_16;
    MR_Word Var_20;
    MR_ArrayPtr Var_31;
    MR_Integer Var_32;
    MR_Integer Var_33;
    MR_Integer Var_34;
    MR_Word Var_35;
    MR_Integer Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_40;

    Goals_16 = mdprof_fb__automatic_parallelism__autopar_types__ip_get_goals_after_1_f_0(STATE_VARIABLE_Acc_0_17);
    mdprof_fb__automatic_parallelism__autopar_costs__conj_calc_cost_3_p_0(Goals_16, Calls_11, &Cost_15);
    {
      Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_20, 0) = ((MR_Box) (Cost_15));
    }
    Var_31 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_17, (MR_Integer) 0))));
    Var_32 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_17, (MR_Integer) 1))));
    Var_33 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_17, (MR_Integer) 2))));
    Var_34 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_17, (MR_Integer) 3))));
    Var_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_17, (MR_Integer) 4))));
    Var_36 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_17, (MR_Integer) 5))));
    Var_37 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_17, (MR_Integer) 6))));
    Var_38 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_17, (MR_Integer) 7))));
    Var_40 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_17, (MR_Integer) 9))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Acc_18 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_31));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_32));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_33));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_34));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_35));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_36));
      MR_hl_field(0, base, 6) = ((MR_Box) (Var_37));
      MR_hl_field(0, base, 7) = ((MR_Box) (Var_38));
      MR_hl_field(0, base, 8) = ((MR_Box) (Var_20));
      MR_hl_field(0, base, 9) = ((MR_Box) (Var_40));
    }
  }
  else
  {
    Cost_15 = ((MR_Word) ((MR_hl_field(1, MaybeCost_14, (MR_Integer) 0))));
    *STATE_VARIABLE_Acc_18 = STATE_VARIABLE_Acc_0_17;
  }
  *CostPercall_12 = measurements__goal_cost_get_percall_1_f_0(Cost_15);
}

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap____Unify____find_production_or_consumption_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdprof_fb__automatic_parallelism__autopar_calc_overlap____Unify____find_production_or_consumption_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap____Compare____find_production_or_consumption_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdprof_fb__automatic_parallelism__autopar_calc_overlap____Compare____find_production_or_consumption_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap____Unify____is_last_par_conjunct_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdprof_fb__automatic_parallelism__autopar_calc_overlap____Unify____is_last_par_conjunct_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap____Compare____is_last_par_conjunct_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdprof_fb__automatic_parallelism__autopar_calc_overlap____Compare____is_last_par_conjunct_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap____Unify____production_or_consumption_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdprof_fb__automatic_parallelism__autopar_calc_overlap____Unify____production_or_consumption_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_calc_overlap____Compare____production_or_consumption_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdprof_fb__automatic_parallelism__autopar_calc_overlap____Compare____production_or_consumption_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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
