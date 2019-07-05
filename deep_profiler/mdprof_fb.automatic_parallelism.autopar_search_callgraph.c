/*
** Automatically generated from `autopar_search_callgraph.m'
** by the Mercury compiler,
** version rotd-2019-07-05
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


// :- module mdprof_fb.automatic_parallelism.autopar_search_callgraph.
// :- implementation.

/*
INIT mercury__mdprof_fb__automatic_parallelism__autopar_search_callgraph__init
ENDINIT
*/

#include "mdprof_fb.automatic_parallelism.autopar_search_callgraph.mih"


#include "analysis_utils.mih"
#include "coverage.mih"
#include "exclude.mih"
#include "mdbcomp.mih"
#include "mdprof_fb.mih"
#include "measurement_units.mih"
#include "measurements.mih"
#include "message.mih"
#include "profile.mih"
#include "program_representation_utils.mih"
#include "query.mih"
#include "recursion_patterns.mih"
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
#include "exception.mih"
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
#include "stm_builtin.mih"
#include "store.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "mdprof_fb.automatic_parallelism.autopar_annotate.mih"
#include "mdprof_fb.automatic_parallelism.autopar_costs.mih"
#include "mdprof_fb.automatic_parallelism.autopar_search_goals.mih"
#include "mdprof_fb.automatic_parallelism.autopar_types.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_search_callgraph__mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0;

static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_search_callgraph__mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0;

static const MR_FA_PseudoTypeInfo_Struct2 mdprof_fb__automatic_parallelism__autopar_search_callgraph__tree234__pti_tree234_2__plain_mdbcomp__program_representation__type_ctor_info_string_proc_label_0__plain_mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0;

static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_search_callgraph__cord__pti_cord_1__plain_message__type_ctor_info_message_0;

static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_search_callgraph__mdbcomp__feedback__automatic_parallelism__pti_candidate_par_conjunctions_proc_1__plain_mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0;

static const MR_VA_PseudoTypeInfo_Struct3 mdprof_fb__automatic_parallelism__autopar_search_callgraph____vpti_pred_3__plain_mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0__plain_mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0__plain_mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0;

static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_search_callgraph__cord__pti_cord_1__plain_mdprof_fb__automatic_parallelism__autopar_search_callgraph__type_ctor_info_candidate_child_clique_0;

static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_search_callgraph__mdbcomp__feedback__automatic_parallelism__pti_candidate_par_conjunction_1__plain_mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0;

static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_search_callgraph__mdbcomp__program_representation__pti_goal_rep_1__plain_mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0;

static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_search_callgraph__mdbcomp__program_representation__pti_goal_rep_1__plain_mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0;

static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_search_callgraph__mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunction_1mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0;

static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_search_callgraph__mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0;

static const MR_VA_PseudoTypeInfo_Struct3 mdprof_fb__automatic_parallelism__autopar_search_callgraph____vpti_pred_3__plain_mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunction_1mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0__plain_mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0__plain_mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0;

static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_search_callgraph__mdbcomp__feedback__automatic_parallelism__pti_candidate_par_conjunctions_proc_1__plain_mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0;

static const MR_FA_PseudoTypeInfo_Struct2 mdprof_fb__automatic_parallelism__autopar_search_callgraph__pair__pti_pair_2__plain_profile__type_ctor_info_call_site_static_ptr_0__plain_profile__type_ctor_info_call_site_array_slot_0;

static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_search_callgraph__mdbcomp__feedback__automatic_parallelism__pti_seq_conj_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct2 mdprof_fb__automatic_parallelism__autopar_search_callgraph__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_measurements__type_ctor_info_cs_cost_csq_0;

static const MR_FA_TypeInfo_Struct2 mdprof_fb__automatic_parallelism__autopar_search_callgraph__tree234__ti_tree234_2mdbcomp__program_representation__type_ctor_info_string_proc_label_0mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0;

static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_search_callgraph__cord__ti_cord_1message__type_ctor_info_message_0;

static const MR_VA_PseudoTypeInfo_Struct2 mdprof_fb__automatic_parallelism__autopar_search_callgraph____vpti_tuple_2__plain_tree234__ti_tree234_2mdbcomp__program_representation__type_ctor_info_string_proc_label_0mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0__plain_cord__ti_cord_1message__type_ctor_info_message_0;

static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_search_callgraph__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0;

static const MR_VA_TypeInfo_Struct3 mdprof_fb__automatic_parallelism__autopar_search_callgraph____vti_tuple_3builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 mdprof_fb__automatic_parallelism__autopar_search_callgraph__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain___vti_tuple_3builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0;

static const MR_VA_PseudoTypeInfo_Struct3 mdprof_fb__automatic_parallelism__autopar_search_callgraph____vpti_tuple_3__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_int_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_search_callgraph__list__pti_list_1__plain_mdbcomp__feedback__automatic_parallelism__type_ctor_info_push_goal_0;

static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_search_callgraph__analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0;

static const MR_FA_PseudoTypeInfo_Struct2 mdprof_fb__automatic_parallelism__autopar_search_callgraph__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0;

static const MR_FA_PseudoTypeInfo_Struct2 mdprof_fb__automatic_parallelism__autopar_search_callgraph__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_coverage__type_ctor_info_coverage_point_0;

static const MR_PseudoTypeInfo mdprof_fb__automatic_parallelism__autopar_search_callgraph__mdprof_fb__automatic_parallelism__autopar_search_callgraph__field_types_candidate_child_clique_0_0[5];

static const MR_ConstString mdprof_fb__automatic_parallelism__autopar_search_callgraph__mdprof_fb__automatic_parallelism__autopar_search_callgraph__field_names_candidate_child_clique_0_0[5];

static const MR_DuFunctorDesc mdprof_fb__automatic_parallelism__autopar_search_callgraph__mdprof_fb__automatic_parallelism__autopar_search_callgraph__du_functor_desc_candidate_child_clique_0_0;

static const MR_DuFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_search_callgraph__mdprof_fb__automatic_parallelism__autopar_search_callgraph__du_stag_ordered_candidate_child_clique_0_0[1];

static const MR_DuPtagLayout mdprof_fb__automatic_parallelism__autopar_search_callgraph__mdprof_fb__automatic_parallelism__autopar_search_callgraph__du_ptag_ordered_candidate_child_clique_0[1];

static const MR_DuFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_search_callgraph__mdprof_fb__automatic_parallelism__autopar_search_callgraph__du_name_ordered_candidate_child_clique_0[1];

static const MR_Integer mdprof_fb__automatic_parallelism__autopar_search_callgraph__mdprof_fb__automatic_parallelism__autopar_search_callgraph__functor_number_map_candidate_child_clique_0[1];

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_callgraph__IntroducedFrom__pred__candidate_parallel_conjunctions_clique_proc__409__1_6_p_0(
  MR_Word Opts_8,
  MR_Word Deep_9,
  MR_Word RecursionType_10,
  MR_Word PDPtr_12,
  MR_Word RecursiveCallSiteCostMap_17,
  MR_Tuple * OutputTuple_63);

static MR_Integer MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_callgraph__IntroducedFrom__func__update_parallelism_available_conj__342__1_3_f_0(
  MR_Word TypeInfo_for_T_118,
  MR_Word LambdaHeadVar__1_30,
  MR_Integer LambdaHeadVar__2_31);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_callgraph__IntroducedFrom__pred__update_parallelism_available__327__1_3_p_0(
  MR_Word HeadVar__1_21,
  MR_Word HeadVar__2_22,
  MR_Word * HeadVar__3_23);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_callgraph__IntroducedFrom__pred__candidate_parallel_conjunctions_clique__177__2_4_p_0(
  MR_Word HeadVar__1_52,
  MR_Word HeadVar__2_109,
  MR_Word HeadVar__3_110,
  MR_Word * HeadVar__4_111);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_callgraph__IntroducedFrom__pred__candidate_parallel_conjunctions_clique__163__2_4_p_0(
  MR_Word HeadVar__1_45,
  MR_Word HeadVar__2_90,
  MR_Word HeadVar__3_91,
  MR_Word * HeadVar__4_92);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_callgraph__IntroducedFrom__pred__candidate_parallel_conjunctions_clique__181__1_3_p_0(
  MR_Word HeadVar__1_118,
  MR_Word HeadVar__2_119,
  MR_Word * HeadVar__3_120);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_callgraph__IntroducedFrom__pred__candidate_parallel_conjunctions_clique__177__1_3_p_0(
  MR_Word HeadVar__1_114,
  MR_Word HeadVar__2_115,
  MR_Word * HeadVar__3_116);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_callgraph__IntroducedFrom__pred__candidate_parallel_conjunctions_clique__163__1_3_p_0(
  MR_Word HeadVar__1_95,
  MR_Word HeadVar__2_96,
  MR_Word * HeadVar__3_97);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_callgraph__IntroducedFrom__pred__candidate_parallel_conjunctions__99__1_3_p_0(
  MR_Word HeadVar__1_21,
  MR_Word HeadVar__2_91,
  MR_Word * HeadVar__3_92);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_callgraph____Compare____candidate_child_clique_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_callgraph____Unify____candidate_child_clique_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_p_0(
  MR_Word Opts_8,
  MR_Word Deep_9,
  MR_Word PDPtr_10,
  MR_Word RecursionType_11,
  MR_Word RecursiveCallSiteCostMap_12,
  MR_Word * Candidates_13,
  MR_Word * STATE_VARIABLE_Messages_68);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_callgraph__extract_from_push_map_4_p_0(
  MR_String GoalPathStr_5,
  MR_Tuple Triple_6,
  MR_Word STATE_VARIABLE_Pushes_0_12,
  MR_Word * STATE_VARIABLE_Pushes_13);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_callgraph__insert_into_push_map_3_p_0(
  MR_Word PushGoal_4,
  MR_Word STATE_VARIABLE_Map_0_16,
  MR_Word * STATE_VARIABLE_Map_17);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_callgraph__merge_pushes_for_proc_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_callgraph__merge_pushes_for_proc_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_callgraph__merge_pushes_for_proc_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_callgraph__merge_candidate_par_conjs_proc_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_callgraph__merge_candidate_par_conjs_proc_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_callgraph__merge_candidate_par_conjs_proc_3_p_0(
  MR_Word TypeInfo_for_T_18,
  MR_Word A_4,
  MR_Word B_5,
  MR_Word * Result_6);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_proc_7_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_proc_7_p_0(
  MR_Word Opts_8,
  MR_Word Deep_9,
  MR_Word RecursionType_10,
  MR_Word CliquePtr_11,
  MR_Word PDPtr_12,
  MR_Word * Candidates_13,
  MR_Word * Messages_14);

static MR_Box MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_callgraph__update_parallelism_available_conj_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_callgraph__update_parallelism_available_conj_3_p_0(
  MR_Word TypeInfo_for_T_118,
  MR_Word Conj_4,
  MR_Word STATE_VARIABLE_ChildClique_0_23,
  MR_Word * STATE_VARIABLE_ChildClique_24);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_callee_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_callee_7_p_0(
  MR_Word Opts_8,
  MR_Word Deep_9,
  MR_Word CliquePtr_10,
  MR_Word CliqueCandidates_11,
  MR_Word STATE_VARIABLE_Callee_0_19,
  MR_Word * Candidates_13,
  MR_Word * Messages_14);

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_callgraph__exceeded_parallelism_2_p_0(
  MR_Word Opts_3,
  MR_Word ChildClique_4);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_callgraph__pd_slot_callees_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_callgraph__pd_slot_callees_5_p_0(
  MR_Word Deep_6,
  MR_Word Parallelism_7,
  MR_Word ProcLabel_8,
  MR_Word HeadVar__4_4,
  MR_Word * ChildCliques_11);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_callgraph__call_site_dynamic_callees_6_p_0(
  MR_Word Deep_7,
  MR_Word Parallelism_8,
  MR_Word ProcLabel_9,
  MR_Word RevGoalPath_10,
  MR_Word CSDPtr_11,
  MR_Word * ChildCliques_12);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_callgraph__proc_dynamic_callees_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_callgraph__proc_dynamic_callees_4_p_0(
  MR_Word Deep_5,
  MR_Word Parallelism_6,
  MR_Word PDPtr_7,
  MR_Word * ChildCliques_8);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_p_0(
  MR_Word Opts_7,
  MR_Word Deep_8,
  MR_Word ParentParallelism_9,
  MR_Word CliquePtr_10,
  MR_Word * Candidates_11,
  MR_Word * Messages_12);

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_callgraph____Unify____candidate_child_clique_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_callgraph____Compare____candidate_child_clique_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_1[10][2];

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_2[15][3];

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_3[1][5];

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_4[4][4];

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_5[1][1];

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_6[2][10];

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_7[5][6];

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_8[5][7];

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_9[2][8];

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_10[2][9];

static /* final */ const MR_Integer mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_11[1][2];




static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_1[10][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_goal_rep_1)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunctions_proc_1)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_goal_rep_1)),
    ((MR_Box) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunctions_proc_1)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_1[2]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&message__message__type_ctor_info_message_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph__mdprof_fb__automatic_parallelism__autopar_search_callgraph__type_ctor_info_candidate_child_clique_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunction_1)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_1[0]))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_push_goal_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&analysis_utils__analysis_utils__type_ctor_info_cost_and_callees_1)),
    ((MR_Box) (&analysis_utils__analysis_utils__type_ctor_info_callee_0))
  },
};

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_2[15][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_1[1]))
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
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_3[0]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_1[9]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0)),
    ((MR_Box) (&coverage__coverage__type_ctor_info_coverage_point_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_7[0])),
    ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_7[0])),
    ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_7[0])),
    ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_7[1])),
    ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_7[3])),
    ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_callee_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_7[4])),
    ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_callgraph__merge_candidate_par_conjs_proc_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_8[3])),
    ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_callgraph__merge_candidate_par_conjs_proc_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_7[4])),
    ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_callgraph__merge_pushes_for_proc_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_8[3])),
    ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_callgraph__merge_pushes_for_proc_2_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_9[1])),
    ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_3[1][5] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_1[7]))
  },
};

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_4[4][4] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_2[0])),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_1[4]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_8[0])),
    ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_p_0_5)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_2[5]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_8[0])),
    ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_p_0_8)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_2[6]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_7[2])),
    ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_2[8]))
  },
};

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_5[1][1] = {
  /* row 0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
};

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_6[2][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunctions_params_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&report__report__type_ctor_info_recursion_type_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_clique_ptr_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph__tree234__pti_tree234_2__plain_mdbcomp__program_representation__type_ctor_info_string_proc_label_0__plain_mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph__cord__pti_cord_1__plain_message__type_ctor_info_message_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunctions_params_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_clique_ptr_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph__tree234__pti_tree234_2__plain_mdbcomp__program_representation__type_ctor_info_string_proc_label_0__plain_mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph__mdprof_fb__automatic_parallelism__autopar_search_callgraph__type_ctor_info_candidate_child_clique_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph__tree234__pti_tree234_2__plain_mdbcomp__program_representation__type_ctor_info_string_proc_label_0__plain_mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph__cord__pti_cord_1__plain_message__type_ctor_info_message_0))
  },
};

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_7[5][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph__mdbcomp__feedback__automatic_parallelism__pti_candidate_par_conjunctions_proc_1__plain_mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph__mdbcomp__feedback__automatic_parallelism__pti_candidate_par_conjunctions_proc_1__plain_mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph__mdbcomp__feedback__automatic_parallelism__pti_candidate_par_conjunctions_proc_1__plain_mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph__mdbcomp__feedback__automatic_parallelism__pti_candidate_par_conjunction_1__plain_mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph__mdbcomp__program_representation__pti_goal_rep_1__plain_mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph__mdbcomp__program_representation__pti_goal_rep_1__plain_mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph____vpti_pred_3__plain_mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunction_1mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0__plain_mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0__plain_mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph__mdbcomp__feedback__automatic_parallelism__pti_candidate_par_conjunctions_proc_1__plain_mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph__mdbcomp__feedback__automatic_parallelism__pti_candidate_par_conjunctions_proc_1__plain_mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph__mdbcomp__feedback__automatic_parallelism__pti_candidate_par_conjunction_1__plain_mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph__mdprof_fb__automatic_parallelism__autopar_search_callgraph__type_ctor_info_candidate_child_clique_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph__mdprof_fb__automatic_parallelism__autopar_search_callgraph__type_ctor_info_candidate_child_clique_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_push_goal_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain___vti_tuple_3builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain___vti_tuple_3builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_8[5][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph____vpti_pred_3__plain_mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0__plain_mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0__plain_mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph__tree234__pti_tree234_2__plain_mdbcomp__program_representation__type_ctor_info_string_proc_label_0__plain_mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph__tree234__pti_tree234_2__plain_mdbcomp__program_representation__type_ctor_info_string_proc_label_0__plain_mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph__tree234__pti_tree234_2__plain_mdbcomp__program_representation__type_ctor_info_string_proc_label_0__plain_mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_parallelism_amount_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph__cord__pti_cord_1__plain_mdprof_fb__automatic_parallelism__autopar_search_callgraph__type_ctor_info_candidate_child_clique_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_11[0])),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph__mdbcomp__feedback__automatic_parallelism__pti_seq_conj_1__pseudo_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph____vpti_tuple_3__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_int_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph__list__pti_list_1__plain_mdbcomp__feedback__automatic_parallelism__type_ctor_info_push_goal_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph__list__pti_list_1__plain_mdbcomp__feedback__automatic_parallelism__type_ctor_info_push_goal_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph__pair__pti_pair_2__plain_profile__type_ctor_info_call_site_static_ptr_0__plain_profile__type_ctor_info_call_site_array_slot_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0))
  },
};

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_9[2][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_parallelism_amount_0)),
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph__pair__pti_pair_2__plain_profile__type_ctor_info_call_site_static_ptr_0__plain_profile__type_ctor_info_call_site_array_slot_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph__cord__pti_cord_1__plain_mdprof_fb__automatic_parallelism__autopar_search_callgraph__type_ctor_info_candidate_child_clique_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&coverage__coverage__type_ctor_info_coverage_point_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_coverage__type_ctor_info_coverage_point_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_coverage__type_ctor_info_coverage_point_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_coverage__type_ctor_info_coverage_point_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_coverage__type_ctor_info_coverage_point_0))
  },
};

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_10[2][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_parallelism_amount_0)),
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph__cord__pti_cord_1__plain_mdprof_fb__automatic_parallelism__autopar_search_callgraph__type_ctor_info_candidate_child_clique_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunctions_params_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&report__report__type_ctor_info_recursion_type_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_measurements__type_ctor_info_cs_cost_csq_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph____vpti_tuple_2__plain_tree234__ti_tree234_2mdbcomp__program_representation__type_ctor_info_string_proc_label_0mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0__plain_cord__ti_cord_1message__type_ctor_info_message_0))
  },
};

static /* final */ const MR_Integer mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_11[1][2] = {
  /* row 0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
};



#include "array.mh"
#include "io.mh"
#include "profile.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_search_callgraph__mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0 = {
  &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_goal_rep_1,
  {
    (MR_TypeInfo) (&mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0)
  }
};

static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_search_callgraph__mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0 = {
  &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunctions_proc_1,
  {
    (MR_TypeInfo) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph__mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 mdprof_fb__automatic_parallelism__autopar_search_callgraph__tree234__pti_tree234_2__plain_mdbcomp__program_representation__type_ctor_info_string_proc_label_0__plain_mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0),
    (MR_PseudoTypeInfo) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph__mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_search_callgraph__cord__pti_cord_1__plain_message__type_ctor_info_message_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) (&message__message__type_ctor_info_message_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_search_callgraph__mdbcomp__feedback__automatic_parallelism__pti_candidate_par_conjunctions_proc_1__plain_mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0 = {
  &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunctions_proc_1,
  {
    (MR_PseudoTypeInfo) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph__mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct3 mdprof_fb__automatic_parallelism__autopar_search_callgraph____vpti_pred_3__plain_mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0__plain_mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0__plain_mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph__mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0),
    (MR_PseudoTypeInfo) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph__mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0),
    (MR_PseudoTypeInfo) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph__mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_search_callgraph__cord__pti_cord_1__plain_mdprof_fb__automatic_parallelism__autopar_search_callgraph__type_ctor_info_candidate_child_clique_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph__mdprof_fb__automatic_parallelism__autopar_search_callgraph__type_ctor_info_candidate_child_clique_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_search_callgraph__mdbcomp__feedback__automatic_parallelism__pti_candidate_par_conjunction_1__plain_mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0 = {
  &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunction_1,
  {
    (MR_PseudoTypeInfo) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph__mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_search_callgraph__mdbcomp__program_representation__pti_goal_rep_1__plain_mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0 = {
  &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_goal_rep_1,
  {
    (MR_PseudoTypeInfo) (&mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_search_callgraph__mdbcomp__program_representation__pti_goal_rep_1__plain_mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0 = {
  &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_goal_rep_1,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0)
  }
};

static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_search_callgraph__mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunction_1mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0 = {
  &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunction_1,
  {
    (MR_TypeInfo) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph__mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0)
  }
};

static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_search_callgraph__mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0 = {
  &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_goal_rep_1,
  {
    (MR_TypeInfo) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct3 mdprof_fb__automatic_parallelism__autopar_search_callgraph____vpti_pred_3__plain_mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunction_1mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0__plain_mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0__plain_mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph__mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunction_1mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0),
    (MR_PseudoTypeInfo) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph__mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0),
    (MR_PseudoTypeInfo) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph__mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_search_callgraph__mdbcomp__feedback__automatic_parallelism__pti_candidate_par_conjunctions_proc_1__plain_mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0 = {
  &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunctions_proc_1,
  {
    (MR_PseudoTypeInfo) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph__mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 mdprof_fb__automatic_parallelism__autopar_search_callgraph__pair__pti_pair_2__plain_profile__type_ctor_info_call_site_static_ptr_0__plain_profile__type_ctor_info_call_site_array_slot_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_call_site_static_ptr_0),
    (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_call_site_array_slot_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_search_callgraph__mdbcomp__feedback__automatic_parallelism__pti_seq_conj_1__pseudo_1 = {
  &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_seq_conj_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 mdprof_fb__automatic_parallelism__autopar_search_callgraph__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_measurements__type_ctor_info_cs_cost_csq_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0),
    (MR_PseudoTypeInfo) (&measurements__measurements__type_ctor_info_cs_cost_csq_0)
  }
};

static const MR_FA_TypeInfo_Struct2 mdprof_fb__automatic_parallelism__autopar_search_callgraph__tree234__ti_tree234_2mdbcomp__program_representation__type_ctor_info_string_proc_label_0mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0),
    (MR_TypeInfo) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph__mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0)
  }
};

static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_search_callgraph__cord__ti_cord_1message__type_ctor_info_message_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) (&message__message__type_ctor_info_message_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct2 mdprof_fb__automatic_parallelism__autopar_search_callgraph____vpti_tuple_2__plain_tree234__ti_tree234_2mdbcomp__program_representation__type_ctor_info_string_proc_label_0mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0__plain_cord__ti_cord_1message__type_ctor_info_message_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph__tree234__ti_tree234_2mdbcomp__program_representation__type_ctor_info_string_proc_label_0mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0),
    (MR_PseudoTypeInfo) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph__cord__ti_cord_1message__type_ctor_info_message_0)
  }
};

static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_search_callgraph__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_VA_TypeInfo_Struct3 mdprof_fb__automatic_parallelism__autopar_search_callgraph____vti_tuple_3builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 3,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_TypeInfo) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 mdprof_fb__automatic_parallelism__autopar_search_callgraph__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain___vti_tuple_3builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph____vti_tuple_3builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct3 mdprof_fb__automatic_parallelism__autopar_search_callgraph____vpti_tuple_3__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_int_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_search_callgraph__list__pti_list_1__plain_mdbcomp__feedback__automatic_parallelism__type_ctor_info_push_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_push_goal_0)
  }
};

static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_search_callgraph__analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0 = {
  &analysis_utils__analysis_utils__type_ctor_info_cost_and_callees_1,
  {
    (MR_TypeInfo) (&analysis_utils__analysis_utils__type_ctor_info_callee_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 mdprof_fb__automatic_parallelism__autopar_search_callgraph__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0),
    (MR_PseudoTypeInfo) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph__analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 mdprof_fb__automatic_parallelism__autopar_search_callgraph__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_coverage__type_ctor_info_coverage_point_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0),
    (MR_PseudoTypeInfo) (&coverage__coverage__type_ctor_info_coverage_point_0)
  }
};

static const MR_PseudoTypeInfo mdprof_fb__automatic_parallelism__autopar_search_callgraph__mdprof_fb__automatic_parallelism__autopar_search_callgraph__field_types_candidate_child_clique_0_0[5] = {
  (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_clique_ptr_0),
  (MR_PseudoTypeInfo) (&measurements__measurements__type_ctor_info_cs_cost_csq_0),
  (MR_PseudoTypeInfo) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0),
  (MR_PseudoTypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0),
  (MR_PseudoTypeInfo) (&measurements__measurements__type_ctor_info_parallelism_amount_0)
};

static const MR_ConstString mdprof_fb__automatic_parallelism__autopar_search_callgraph__mdprof_fb__automatic_parallelism__autopar_search_callgraph__field_names_candidate_child_clique_0_0[5] = {
  (MR_String) "ccc_clique",
  (MR_String) "ccc_cs_cost",
  (MR_String) "ccc_proc",
  (MR_String) "ccc_goal_path",
  (MR_String) "ccc_parallelism"
};

static const MR_DuFunctorDesc mdprof_fb__automatic_parallelism__autopar_search_callgraph__mdprof_fb__automatic_parallelism__autopar_search_callgraph__du_functor_desc_candidate_child_clique_0_0 = {
  (MR_String) "candidate_child_clique",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mdprof_fb__automatic_parallelism__autopar_search_callgraph__mdprof_fb__automatic_parallelism__autopar_search_callgraph__field_types_candidate_child_clique_0_0,
  mdprof_fb__automatic_parallelism__autopar_search_callgraph__mdprof_fb__automatic_parallelism__autopar_search_callgraph__field_names_candidate_child_clique_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_search_callgraph__mdprof_fb__automatic_parallelism__autopar_search_callgraph__du_stag_ordered_candidate_child_clique_0_0[1] = {
  &mdprof_fb__automatic_parallelism__autopar_search_callgraph__mdprof_fb__automatic_parallelism__autopar_search_callgraph__du_functor_desc_candidate_child_clique_0_0
};

static const MR_DuPtagLayout mdprof_fb__automatic_parallelism__autopar_search_callgraph__mdprof_fb__automatic_parallelism__autopar_search_callgraph__du_ptag_ordered_candidate_child_clique_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdprof_fb__automatic_parallelism__autopar_search_callgraph__mdprof_fb__automatic_parallelism__autopar_search_callgraph__du_stag_ordered_candidate_child_clique_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_search_callgraph__mdprof_fb__automatic_parallelism__autopar_search_callgraph__du_name_ordered_candidate_child_clique_0[1] = {
  &mdprof_fb__automatic_parallelism__autopar_search_callgraph__mdprof_fb__automatic_parallelism__autopar_search_callgraph__du_functor_desc_candidate_child_clique_0_0
};

static const MR_Integer mdprof_fb__automatic_parallelism__autopar_search_callgraph__mdprof_fb__automatic_parallelism__autopar_search_callgraph__functor_number_map_candidate_child_clique_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdprof_fb__automatic_parallelism__autopar_search_callgraph__mdprof_fb__automatic_parallelism__autopar_search_callgraph__type_ctor_info_candidate_child_clique_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_callgraph____Unify____candidate_child_clique_0_0_10001)),
  ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_callgraph____Compare____candidate_child_clique_0_0_10001)),
  (MR_String) "mdprof_fb.automatic_parallelism.autopar_search_callgraph",
  (MR_String) "candidate_child_clique",
  {     mdprof_fb__automatic_parallelism__autopar_search_callgraph__mdprof_fb__automatic_parallelism__autopar_search_callgraph__du_name_ordered_candidate_child_clique_0 },
  {     mdprof_fb__automatic_parallelism__autopar_search_callgraph__mdprof_fb__automatic_parallelism__autopar_search_callgraph__du_ptag_ordered_candidate_child_clique_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  mdprof_fb__automatic_parallelism__autopar_search_callgraph__mdprof_fb__automatic_parallelism__autopar_search_callgraph__functor_number_map_candidate_child_clique_0
};

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_callgraph__IntroducedFrom__pred__candidate_parallel_conjunctions_clique_proc__409__1_6_p_0(
  MR_Word Opts_8,
  MR_Word Deep_9,
  MR_Word RecursionType_10,
  MR_Word PDPtr_12,
  MR_Word RecursiveCallSiteCostMap_17,
  MR_Tuple * OutputTuple_63)
{
  {
    MR_Word CandidatesPrime_65;
    MR_Word ProcMessagesPrime_66;

    mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_p_0(Opts_8, Deep_9, PDPtr_12, RecursionType_10, RecursiveCallSiteCostMap_17, &CandidatesPrime_65, &ProcMessagesPrime_66);
    {
      MR_Tuple base;
      base = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
      *OutputTuple_63 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (CandidatesPrime_65));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ProcMessagesPrime_66));
    }
  }
}

static MR_Integer MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_callgraph__IntroducedFrom__func__update_parallelism_available_conj__342__1_3_f_0(
  MR_Word TypeInfo_for_T_118,
  MR_Word LambdaHeadVar__1_30,
  MR_Integer LambdaHeadVar__2_31)
{
  {
    MR_Integer LambdaHeadVar__3_32;
    MR_Integer Var_33;
    MR_Word ConjsI_42 = (MR_Word) (LambdaHeadVar__1_30);

    Var_33 = mercury__list__length_1_f_0(TypeInfo_for_T_118, ConjsI_42);
    LambdaHeadVar__3_32 = (MR_Integer) ((MR_Unsigned) LambdaHeadVar__2_31 + (MR_Unsigned) Var_33);
    return LambdaHeadVar__3_32;
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_callgraph__IntroducedFrom__pred__update_parallelism_available__327__1_3_p_0(
  MR_Word HeadVar__1_21,
  MR_Word HeadVar__2_22,
  MR_Word * HeadVar__3_23)
{
  {
    mdprof_fb__automatic_parallelism__autopar_search_callgraph__update_parallelism_available_conj_3_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_1[0]), HeadVar__1_21, HeadVar__2_22, HeadVar__3_23);
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_callgraph__IntroducedFrom__pred__candidate_parallel_conjunctions_clique__177__2_4_p_0(
  MR_Word HeadVar__1_52,
  MR_Word HeadVar__2_109,
  MR_Word HeadVar__3_110,
  MR_Word * HeadVar__4_111)
{
  {
    mercury__map__union_4_p_1((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_1[1]), (MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0), HeadVar__1_52, HeadVar__2_109, HeadVar__3_110, HeadVar__4_111);
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_callgraph__IntroducedFrom__pred__candidate_parallel_conjunctions_clique__163__2_4_p_0(
  MR_Word HeadVar__1_45,
  MR_Word HeadVar__2_90,
  MR_Word HeadVar__3_91,
  MR_Word * HeadVar__4_92)
{
  {
    mercury__map__union_4_p_1((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_1[1]), (MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0), HeadVar__1_45, HeadVar__2_90, HeadVar__3_91, HeadVar__4_92);
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_callgraph__IntroducedFrom__pred__candidate_parallel_conjunctions_clique__181__1_3_p_0(
  MR_Word HeadVar__1_118,
  MR_Word HeadVar__2_119,
  MR_Word * HeadVar__3_120)
{
  {
    mdprof_fb__automatic_parallelism__autopar_search_callgraph__merge_candidate_par_conjs_proc_3_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_1[0]), HeadVar__1_118, HeadVar__2_119, HeadVar__3_120);
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_callgraph__IntroducedFrom__pred__candidate_parallel_conjunctions_clique__177__1_3_p_0(
  MR_Word HeadVar__1_114,
  MR_Word HeadVar__2_115,
  MR_Word * HeadVar__3_116)
{
  {
    mdprof_fb__automatic_parallelism__autopar_search_callgraph__merge_candidate_par_conjs_proc_3_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_1[0]), HeadVar__1_114, HeadVar__2_115, HeadVar__3_116);
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_callgraph__IntroducedFrom__pred__candidate_parallel_conjunctions_clique__163__1_3_p_0(
  MR_Word HeadVar__1_95,
  MR_Word HeadVar__2_96,
  MR_Word * HeadVar__3_97)
{
  {
    mdprof_fb__automatic_parallelism__autopar_search_callgraph__merge_candidate_par_conjs_proc_3_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_1[0]), HeadVar__1_95, HeadVar__2_96, HeadVar__3_97);
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_callgraph__IntroducedFrom__pred__candidate_parallel_conjunctions__99__1_3_p_0(
  MR_Word HeadVar__1_21,
  MR_Word HeadVar__2_91,
  MR_Word * HeadVar__3_92)
{
  {
    mdbcomp__feedback__automatic_parallelism__convert_candidate_par_conjunctions_proc_3_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_1[0]), (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_1[2]), HeadVar__1_21, HeadVar__2_91, HeadVar__3_92);
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_callgraph____Compare____candidate_child_clique_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_18 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_19 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_18 == CastY_19);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
      MR_Word SubResult1_6;
      MR_Integer Var_25 = (MR_Integer) (ArgX1_4);
      MR_Integer Var_26 = (MR_Integer) (ArgY1_5);

      succeeded = (Var_25 < Var_26);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_25 > Var_26);
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

        measurements____Compare____cs_cost_csq_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;

          mdbcomp__program_representation____Compare____string_proc_label_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
          succeeded = (SubResult3_12 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
          {
            MR_Word SubResult4_15;

            mdbcomp__goal_path____Compare____reverse_goal_path_0_0(&SubResult4_15, ArgX4_13, ArgY4_14);
            succeeded = (SubResult4_15 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult4_15;
            else
              measurements____Compare____parallelism_amount_0_0(HeadVar__1_1, ArgX5_16, ArgY5_17);
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_callgraph____Unify____candidate_child_clique_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_13 == CastY_14);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
      MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Integer Var_20 = (MR_Integer) (ArgX1_3);
      MR_Integer Var_21 = (MR_Integer) (ArgY1_4);

      succeeded = (Var_20 == Var_21);
      if (succeeded)
      {
        succeeded = measurements____Unify____cs_cost_csq_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
        {
          succeeded = mdbcomp__program_representation____Unify____string_proc_label_0_0(ArgX3_7, ArgY3_8);
          if (succeeded)
          {
            succeeded = mdbcomp__goal_path____Unify____reverse_goal_path_0_0(ArgX4_9, ArgY4_10);
            if (succeeded)
              succeeded = measurements____Unify____parallelism_amount_0_0(ArgX5_11, ArgY5_12);
          }
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_HeadVar__3_3;
    MR_Word conv2_HeadVar__5_5;

    coverage__add_coverage_point_to_map_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_HeadVar__3_3, ((MR_Word) (wrapper_arg_4)), &conv2_HeadVar__5_5);
    *wrapper_arg_3 = ((MR_Box) (conv3_HeadVar__3_3));
    *wrapper_arg_5 = ((MR_Box) (conv2_HeadVar__5_5));
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__4_4;

    analysis_utils__build_dynamic_call_site_cost_and_callee_map_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__4_4);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__4_4));
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_p_0(
  MR_Word Opts_8,
  MR_Word Deep_9,
  MR_Word PDPtr_10,
  MR_Word RecursionType_11,
  MR_Word RecursiveCallSiteCostMap_12,
  MR_Word * Candidates_13,
  MR_Word * STATE_VARIABLE_Messages_68)
{
  {
    MR_bool succeeded;
    MR_Word PD_15;
    MR_Word PS_16;
    MR_Word ProcLabel_17;
    MR_String ModuleName_19;
    MR_Word STATE_VARIABLE_Messages_69_69;
    MR_Word Var_70;

    STATE_VARIABLE_Messages_69_69 = mercury__cord__empty_0_f_0((MR_Word) (&message__message__type_ctor_info_message_0));
    profile__deep_lookup_proc_dynamics_3_p_0(Deep_9, PDPtr_10, &PD_15);
    Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PD_15, (MR_Integer) 0))));
    profile__deep_lookup_proc_statics_3_p_0(Deep_9, Var_70, &PS_16);
    ProcLabel_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PS_16, (MR_Integer) 0))));
    if (((MR_tag((MR_Word) ProcLabel_17)) == (MR_Integer) 0))
      ModuleName_19 = ((MR_String) ((MR_hl_field(MR_mktag(0), ProcLabel_17, (MR_Integer) 1))));
    else
      ModuleName_19 = ((MR_String) ((MR_hl_field(MR_mktag(1), ProcLabel_17, (MR_Integer) 1))));
    if ((strcmp(ModuleName_19, (MR_String) "exception") == 0))
      succeeded = MR_TRUE;
    else
    if ((strcmp(ModuleName_19, (MR_String) "Mercury runtime") == 0))
      succeeded = MR_TRUE;
    else
      succeeded = MR_FALSE;
    if (succeeded)
    {
      *Candidates_13 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0), (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_1[1]));
      *STATE_VARIABLE_Messages_68 = STATE_VARIABLE_Messages_69_69;
    }
    else
    {
      MR_Word CliquePtr_29;
      MR_Word PSPtr_30;
      MR_Word MaybeProcRep_31;

      profile__deep_lookup_clique_index_3_p_0(Deep_9, PDPtr_10, &CliquePtr_29);
      PSPtr_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PD_15, (MR_Integer) 0))));
      analysis_utils__deep_get_maybe_procrep_3_p_0(Deep_9, PSPtr_30, &MaybeProcRep_31);
      if (((MR_tag((MR_Word) MaybeProcRep_31)) == (MR_Integer) 1))
      {
        MR_Word Var_71;

        *Candidates_13 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0), (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_1[1]));
        {
          Var_71 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_71, 0) = ((MR_Box) (ProcLabel_17));
        }
        message__append_message_4_p_0(Var_71, (MR_Word) ((MR_Unsigned) 12U), STATE_VARIABLE_Messages_69_69, STATE_VARIABLE_Messages_68);
      }
      else
      {
        MR_Word ProcRep_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeProcRep_31, (MR_Integer) 0))));
        MR_Word ProcDefnRep_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProcRep_32, (MR_Integer) 1))));
        MR_Word Goal0_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProcDefnRep_33, (MR_Integer) 1))));
        MR_Word VarNameTable_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProcDefnRep_33, (MR_Integer) 2))));
        MR_Word LastGoalId_36;
        MR_Word ContainingGoalMap_37;
        MR_Word Goal_38;
        MR_Word Slots_39;
        MR_Word CallSitesMap_40;
        MR_Word Own_41;
        MR_Word MaybeCoveragePointsArray_42;
        MR_Word Var_74;
        MR_Word Var_75;
        MR_Box conv1_CallSitesMap_40;

        program_representation_utils__label_goals_4_p_0((MR_Word) (&mercury__unit__unit__type_ctor_info_unit_0), &LastGoalId_36, &ContainingGoalMap_37, Goal0_34, &Goal_38);
        analysis_utils__proc_dynamic_paired_call_site_slots_3_p_0(Deep_9, PDPtr_10, &Slots_39);
        {
          Var_74 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_74, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_8[4]));
          MR_hl_field(MR_mktag(0), Var_74, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_proc_7_p_0_1));
          MR_hl_field(MR_mktag(0), Var_74, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_74, 3) = ((MR_Box) (Deep_9));
        }
        Var_75 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0), (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_1[9]));
        mercury__list__foldl_4_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_2[1]), (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_2[3]), Var_74, Slots_39, ((MR_Box) (Var_75)), &conv1_CallSitesMap_40);
        CallSitesMap_40 = ((MR_Word) (conv1_CallSitesMap_40));
        profile__deep_lookup_pd_own_3_p_0(Deep_9, PDPtr_10, &Own_41);
        MaybeCoveragePointsArray_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PD_15, (MR_Integer) 2))));
        if ((MaybeCoveragePointsArray_42 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Var_76;

          *Candidates_13 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0), (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_1[1]));
          {
            Var_76 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_76, 0) = ((MR_Box) (ProcLabel_17));
          }
          message__append_message_4_p_0(Var_76, (MR_Word) ((MR_Unsigned) 20U), STATE_VARIABLE_Messages_69_69, STATE_VARIABLE_Messages_68);
        }
        else
        {
          MR_ArrayPtr CoveragePointsArray_43 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(1), MaybeCoveragePointsArray_42, (MR_Integer) 0))));
          MR_Word CoveragePoints_44;
          MR_Word SolnsCoveragePointMap_45;
          MR_Word BranchCoveragePointMap_46;
          MR_Word CoverageArray_47;
          MR_Word SeenDuplicateInstantiation_48;
          MR_Word InstMapArray_52;
          MR_Word ProgRep_53;
          MR_Word Info_54;
          MR_Word PardGoal_55;
          MR_Word CandidatesCord0_57;
          MR_Word PushesCord_58;
          MR_Word MessagesA_60;
          MR_Word Candidates0_61;
          MR_Word Pushes_62;
          MR_ArrayPtr Var_79 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), PS_16, (MR_Integer) 9))));
          MR_Word Var_81;
          MR_Word Var_82;
          MR_Word Var_83;
          MR_Word Var_84;
          MR_Word STATE_VARIABLE_Messages_86_86;
          MR_Word STATE_VARIABLE_Messages_88_88;
          MR_Box conv5_SolnsCoveragePointMap_45;
          MR_Box conv4_BranchCoveragePointMap_46;
          MR_Word _ConsumedVars_49;
          MR_Word _BoundVars_50;
          MR_Word _FinalInstMap_51;
          MR_Word Var_56;
          MR_Word _Singles_59;

          coverage__coverage_point_arrays_to_list_3_p_0(Var_79, CoveragePointsArray_43, &CoveragePoints_44);
          Var_81 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0), (MR_Word) (&coverage__coverage__type_ctor_info_coverage_point_0));
          Var_82 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0), (MR_Word) (&coverage__coverage__type_ctor_info_coverage_point_0));
          mercury__list__foldl2_6_p_0((MR_Word) (&coverage__coverage__type_ctor_info_coverage_point_0), (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_2[4]), (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_2[4]), (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_2[14]), CoveragePoints_44, ((MR_Box) (Var_81)), &conv5_SolnsCoveragePointMap_45, ((MR_Box) (Var_82)), &conv4_BranchCoveragePointMap_46);
          SolnsCoveragePointMap_45 = ((MR_Word) (conv5_SolnsCoveragePointMap_45));
          BranchCoveragePointMap_46 = ((MR_Word) (conv4_BranchCoveragePointMap_46));
          coverage__goal_annotate_with_coverage_9_p_0((MR_Word) (&analysis_utils__analysis_utils__type_ctor_info_callee_0), ProcLabel_17, Goal_38, Own_41, CallSitesMap_40, SolnsCoveragePointMap_45, BranchCoveragePointMap_46, ContainingGoalMap_37, LastGoalId_36, &CoverageArray_47);
          Var_83 = program_representation_utils__initial_inst_map_1_f_0((MR_Word) (&mercury__unit__unit__type_ctor_info_unit_0), ProcDefnRep_33);
          Var_84 = mdbcomp__goal_path__create_goal_id_array_1_f_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_inst_map_info_0), LastGoalId_36);
          mdprof_fb__automatic_parallelism__autopar_annotate__goal_annotate_with_instmap_8_p_0(Goal_38, &SeenDuplicateInstantiation_48, &_ConsumedVars_49, &_BoundVars_50, Var_83, &_FinalInstMap_51, Var_84, &InstMapArray_52);
          profile__deep_get_progrep_det_2_p_0(Deep_9, &ProgRep_53);
          {
            Info_54 = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Info_54, 0) = ((MR_Box) (Deep_9));
            MR_hl_field(MR_mktag(0), Info_54, 1) = ((MR_Box) (ProgRep_53));
            MR_hl_field(MR_mktag(0), Info_54, 2) = ((MR_Box) (Opts_8));
            MR_hl_field(MR_mktag(0), Info_54, 3) = ((MR_Box) (CliquePtr_29));
            MR_hl_field(MR_mktag(0), Info_54, 4) = ((MR_Box) (CallSitesMap_40));
            MR_hl_field(MR_mktag(0), Info_54, 5) = ((MR_Box) (RecursiveCallSiteCostMap_12));
            MR_hl_field(MR_mktag(0), Info_54, 6) = ((MR_Box) (ContainingGoalMap_37));
            MR_hl_field(MR_mktag(0), Info_54, 7) = ((MR_Box) (CoverageArray_47));
            MR_hl_field(MR_mktag(0), Info_54, 8) = ((MR_Box) (InstMapArray_52));
            MR_hl_field(MR_mktag(0), Info_54, 9) = ((MR_Box) (RecursionType_11));
            MR_hl_field(MR_mktag(0), Info_54, 10) = ((MR_Box) (VarNameTable_35));
            MR_hl_field(MR_mktag(0), Info_54, 11) = ((MR_Box) (ProcLabel_17));
          }
          mdprof_fb__automatic_parallelism__autopar_search_goals__goal_to_pard_goal_6_p_0(Info_54, (MR_Word) ((MR_Unsigned) 0U), Goal_38, &PardGoal_55, STATE_VARIABLE_Messages_69_69, &STATE_VARIABLE_Messages_86_86);
          mdprof_fb__automatic_parallelism__autopar_search_goals__goal_get_conjunctions_worth_parallelising_8_p_0(Info_54, (MR_Word) ((MR_Unsigned) 0U), PardGoal_55, &Var_56, &CandidatesCord0_57, &PushesCord_58, &_Singles_59, &MessagesA_60);
          Candidates0_61 = mercury__cord__list_1_f_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_1[6]), CandidatesCord0_57);
          Pushes_62 = mercury__cord__list_1_f_0((MR_Word) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_push_goal_0), PushesCord_58);
          STATE_VARIABLE_Messages_88_88 = mercury__cord__f_43_43_2_f_0((MR_Word) (&message__message__type_ctor_info_message_0), STATE_VARIABLE_Messages_86_86, MessagesA_60);
          switch (SeenDuplicateInstantiation_48) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                if ((Candidates0_61 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  *Candidates_13 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0), (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_1[1]));
                }
                else
                {
                  MR_Word MergedPushes_65;
                  MR_Word CandidateProc_66;

                  mdprof_fb__automatic_parallelism__autopar_search_callgraph__merge_pushes_for_proc_2_p_0(Pushes_62, &MergedPushes_65);
                  {
                    CandidateProc_66 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), CandidateProc_66, 0) = ((MR_Box) (VarNameTable_35));
                    MR_hl_field(MR_mktag(0), CandidateProc_66, 1) = ((MR_Box) (MergedPushes_65));
                    MR_hl_field(MR_mktag(0), CandidateProc_66, 2) = ((MR_Box) (Candidates0_61));
                  }
                  *Candidates_13 = mercury__map__singleton_2_f_0((MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0), (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_1[1]), ((MR_Box) (ProcLabel_17)), ((MR_Box) (CandidateProc_66)));
                }
                *STATE_VARIABLE_Messages_68 = STATE_VARIABLE_Messages_88_88;
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Word Var_89;
                MR_Word Var_90;
                MR_Integer Var_92;

                *Candidates_13 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0), (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_1[1]));
                {
                  Var_89 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_89, 0) = ((MR_Box) (ProcLabel_17));
                }
                Var_92 = mercury__list__length_1_f_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_1[6]), Candidates0_61);
                {
                  Var_90 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_90, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(MR_mktag(3), Var_90, 1) = ((MR_Box) (Var_92));
                }
                message__append_message_4_p_0(Var_89, Var_90, STATE_VARIABLE_Messages_88_88, STATE_VARIABLE_Messages_68);
              }
              break;
          }
        }
      }
    }
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_callgraph__extract_from_push_map_4_p_0(
  MR_String GoalPathStr_5,
  MR_Tuple Triple_6,
  MR_Word STATE_VARIABLE_Pushes_0_12,
  MR_Word * STATE_VARIABLE_Pushes_13)
{
  {
    MR_Integer Lo_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Triple_6, (MR_Integer) 0))));
    MR_Integer Hi_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Triple_6, (MR_Integer) 1))));
    MR_Word TargetGoalPathStrSet_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Triple_6, (MR_Integer) 2))));
    MR_Word Push_11;
    MR_Word Var_14;

    Var_14 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), TargetGoalPathStrSet_10);
    {
      Push_11 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Push_11, 0) = ((MR_Box) (GoalPathStr_5));
      MR_hl_field(MR_mktag(0), Push_11, 1) = ((MR_Box) (Lo_8));
      MR_hl_field(MR_mktag(0), Push_11, 2) = ((MR_Box) (Hi_9));
      MR_hl_field(MR_mktag(0), Push_11, 3) = ((MR_Box) (Var_14));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Pushes_13 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Push_11));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Pushes_0_12));
    }
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_callgraph__insert_into_push_map_3_p_0(
  MR_Word PushGoal_4,
  MR_Word STATE_VARIABLE_Map_0_16,
  MR_Word * STATE_VARIABLE_Map_17)
{
  {
    MR_bool succeeded;
    MR_String GoalPathStr_6 = ((MR_String) ((MR_hl_field(MR_mktag(0), PushGoal_4, (MR_Integer) 0))));
    MR_Integer Lo_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PushGoal_4, (MR_Integer) 1))));
    MR_Integer Hi_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PushGoal_4, (MR_Integer) 2))));
    MR_Word TargetGoalPathStrs_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PushGoal_4, (MR_Integer) 3))));
    MR_Tuple OldTriple_10;
    MR_Box conv0_OldTriple_10;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_3[0]), STATE_VARIABLE_Map_0_16, ((MR_Box) (GoalPathStr_6)), &conv0_OldTriple_10);
    if (succeeded)
    {
      OldTriple_10 = ((MR_Tuple) (conv0_OldTriple_10));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Integer OldLo_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OldTriple_10, (MR_Integer) 0))));
      MR_Integer OldHi_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OldTriple_10, (MR_Integer) 1))));
      MR_Word OldTargetGoalPathStrSet_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OldTriple_10, (MR_Integer) 2))));

      succeeded = (Lo_7 == OldLo_11);
      if (succeeded)
        succeeded = (Hi_8 == OldHi_12);
      if (succeeded)
      {
        MR_Word NewTargetGoalPathStrSet_14;
        MR_Tuple NewTriple_15;

        mercury__set__insert_list_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), TargetGoalPathStrs_9, OldTargetGoalPathStrSet_13, &NewTargetGoalPathStrSet_14);
        {
          NewTriple_15 = (MR_Tuple) MR_new_object(MR_Tuple, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), NewTriple_15, 0) = ((MR_Box) (OldLo_11));
          MR_hl_field(MR_mktag(0), NewTriple_15, 1) = ((MR_Box) (OldHi_12));
          MR_hl_field(MR_mktag(0), NewTriple_15, 2) = ((MR_Box) (NewTargetGoalPathStrSet_14));
        }
        mercury__map__det_update_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_3[0]), ((MR_Box) (GoalPathStr_6)), ((MR_Box) (NewTriple_15)), STATE_VARIABLE_Map_0_16, STATE_VARIABLE_Map_17);
      }
      else
        *STATE_VARIABLE_Map_17 = STATE_VARIABLE_Map_0_16;
    }
    else
    {
      MR_Word Var_19;
      MR_Tuple NewTriple_21;

      Var_19 = mercury__set__list_to_set_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), TargetGoalPathStrs_9);
      {
        NewTriple_21 = (MR_Tuple) MR_new_object(MR_Tuple, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), NewTriple_21, 0) = ((MR_Box) (Lo_7));
        MR_hl_field(MR_mktag(0), NewTriple_21, 1) = ((MR_Box) (Hi_8));
        MR_hl_field(MR_mktag(0), NewTriple_21, 2) = ((MR_Box) (Var_19));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_3[0]), ((MR_Box) (GoalPathStr_6)), ((MR_Box) (NewTriple_21)), STATE_VARIABLE_Map_0_16, STATE_VARIABLE_Map_17);
    }
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_callgraph__merge_pushes_for_proc_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_Pushes_13;

    mdprof_fb__automatic_parallelism__autopar_search_callgraph__extract_from_push_map_4_p_0(((MR_String) (wrapper_arg_1)), ((MR_Tuple) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_Pushes_13);
    *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_Pushes_13));
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_callgraph__merge_pushes_for_proc_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Map_17;

    mdprof_fb__automatic_parallelism__autopar_search_callgraph__insert_into_push_map_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Map_17);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Map_17));
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_callgraph__merge_pushes_for_proc_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word PushMap_7;
    MR_Word Var_9;
    MR_Box conv1_PushMap_7;
    MR_Box conv3_HeadVar__2_2;

    Var_9 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_3[0]));
    mercury__list__foldl_4_p_0((MR_Word) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_push_goal_0), (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_2[2]), (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_2[12]), HeadVar__1_1, ((MR_Box) (Var_9)), &conv1_PushMap_7);
    PushMap_7 = ((MR_Word) (conv1_PushMap_7));
    mercury__map__foldl_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_3[0]), (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_1[8]), (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_2[13]), PushMap_7, ((MR_Box) ((MR_Unsigned) 0U)), &conv3_HeadVar__2_2);
    *HeadVar__2_2 = ((MR_Word) (conv3_HeadVar__2_2));
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_callgraph__merge_candidate_par_conjs_proc_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_STATE_VARIABLE_Pushes_13;

    mdprof_fb__automatic_parallelism__autopar_search_callgraph__extract_from_push_map_4_p_0(((MR_String) (wrapper_arg_1)), ((MR_Tuple) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv3_STATE_VARIABLE_Pushes_13);
    *wrapper_arg_4 = ((MR_Box) (conv3_STATE_VARIABLE_Pushes_13));
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_callgraph__merge_candidate_par_conjs_proc_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_Map_17;

    mdprof_fb__automatic_parallelism__autopar_search_callgraph__insert_into_push_map_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Map_17);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Map_17));
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_callgraph__merge_candidate_par_conjs_proc_3_p_0(
  MR_Word TypeInfo_for_T_18,
  MR_Word A_4,
  MR_Word B_5,
  MR_Word * Result_6)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_20_20;
    MR_Word VarNameTableA_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), A_4, (MR_Integer) 0))));
    MR_Word PushGoalsA_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), A_4, (MR_Integer) 1))));
    MR_Word CPCsA_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), A_4, (MR_Integer) 2))));
    MR_Word VarNameTableB_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), B_5, (MR_Integer) 0))));
    MR_Word PushGoalsB_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), B_5, (MR_Integer) 1))));
    MR_Word CPCsB_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), B_5, (MR_Integer) 2))));
    MR_Word CPCs_13;
    MR_Word PushGoals_14;
    MR_Word Var_15;
    MR_Word conv0_CPCs_13;

    {
      TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_20_20, 0) = ((MR_Box) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunction_1));
      MR_hl_field(MR_mktag(0), TypeInfo_20_20, 1) = ((MR_Box) (TypeInfo_for_T_18));
    }
    conv0_CPCs_13 = mercury__list__f_43_43_2_f_0(TypeInfo_20_20, (MR_Word) (CPCsA_9), (MR_Word) (CPCsB_12));
    CPCs_13 = (MR_Word) (conv0_CPCs_13);
    Var_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_push_goal_0), PushGoalsA_8, PushGoalsB_11);
    if ((Var_15 == (MR_Word) ((MR_Unsigned) 0U)))
      PushGoals_14 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word PushMap_27;
      MR_Word Var_29;
      MR_Box conv2_PushMap_27;
      MR_Box conv4_PushGoals_14;

      Var_29 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_3[0]));
      mercury__list__foldl_4_p_0((MR_Word) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_push_goal_0), (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_2[2]), (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_2[10]), Var_15, ((MR_Box) (Var_29)), &conv2_PushMap_27);
      PushMap_27 = ((MR_Word) (conv2_PushMap_27));
      mercury__map__foldl_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_3[0]), (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_1[8]), (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_2[11]), PushMap_27, ((MR_Box) ((MR_Unsigned) 0U)), &conv4_PushGoals_14);
      PushGoals_14 = ((MR_Word) (conv4_PushGoals_14));
    }
    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_var_name_table_0), ((MR_Box) (VarNameTableA_7)), ((MR_Box) (VarNameTableB_10)));
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        *Result_6 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (VarNameTableA_7));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (PushGoals_14));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (CPCs_13));
      }
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140mdprof_fb.automatic_parallelism.autopar_search_callgraph.merge_candidate_par_conjs_proc\'/3", (MR_String) "var tables do not match");
        return;
      }
    }
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_proc_7_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1)
{
  {
    MR_Box closure = closure_arg;
    MR_Tuple conv0_OutputTuple_63;

    mdprof_fb__automatic_parallelism__autopar_search_callgraph__IntroducedFrom__pred__candidate_parallel_conjunctions_clique_proc__409__1_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), &conv0_OutputTuple_63);
    *wrapper_arg_1 = ((MR_Box) (conv0_OutputTuple_63));
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_proc_7_p_0(
  MR_Word Opts_8,
  MR_Word Deep_9,
  MR_Word RecursionType_10,
  MR_Word CliquePtr_11,
  MR_Word PDPtr_12,
  MR_Word * Candidates_13,
  MR_Word * Messages_14)
{
  {
    MR_Word MaybeDepth_15;
    MR_Word MaybeRecursiveCallSiteCostMap_16;
    MR_Word RecursiveCallSiteCostMap_17;
    MR_Word ProcMessages_19;
    MR_Word STATE_VARIABLE_Messages_28_28;
    MR_Word STATE_VARIABLE_Messages_31_31;
    MR_Word TryResult_32;
    MR_Word TryLambda_64;

    STATE_VARIABLE_Messages_28_28 = mercury__cord__empty_0_f_0((MR_Word) (&message__message__type_ctor_info_message_0));
    mdprof_fb__automatic_parallelism__autopar_costs__recursion_type_get_interesting_parallelisation_depth_2_p_1(RecursionType_10, &MaybeDepth_15);
    analysis_utils__build_recursive_call_site_cost_map_6_p_1(Deep_9, CliquePtr_11, PDPtr_12, RecursionType_10, MaybeDepth_15, &MaybeRecursiveCallSiteCostMap_16);
    if (((MR_tag((MR_Word) MaybeRecursiveCallSiteCostMap_16)) == (MR_Integer) 1))
    {
      MR_String Error_18 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeRecursiveCallSiteCostMap_16, (MR_Integer) 0))));
      MR_Word Var_29;
      MR_Word Var_30;

      {
        Var_29 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_29, 0) = ((MR_Box) (CliquePtr_11));
      }
      {
        Var_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_30, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Var_30, 1) = ((MR_Box) (Error_18));
      }
      message__append_message_4_p_0(Var_29, Var_30, STATE_VARIABLE_Messages_28_28, &STATE_VARIABLE_Messages_31_31);
      RecursiveCallSiteCostMap_17 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0), (MR_Word) (&measurements__measurements__type_ctor_info_cs_cost_csq_0));
    }
    else
    {
      RecursiveCallSiteCostMap_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeRecursiveCallSiteCostMap_16, (MR_Integer) 0))));
      STATE_VARIABLE_Messages_31_31 = STATE_VARIABLE_Messages_28_28;
    }
    {
      TryLambda_64 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TryLambda_64, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_10[1]));
      MR_hl_field(MR_mktag(0), TryLambda_64, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_proc_7_p_0_1));
      MR_hl_field(MR_mktag(0), TryLambda_64, 2) = ((MR_Box) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(0), TryLambda_64, 3) = ((MR_Box) (Opts_8));
      MR_hl_field(MR_mktag(0), TryLambda_64, 4) = ((MR_Box) (Deep_9));
      MR_hl_field(MR_mktag(0), TryLambda_64, 5) = ((MR_Box) (RecursionType_10));
      MR_hl_field(MR_mktag(0), TryLambda_64, 6) = ((MR_Box) (PDPtr_12));
      MR_hl_field(MR_mktag(0), TryLambda_64, 7) = ((MR_Box) (RecursiveCallSiteCostMap_17));
    }
    mercury__exception__try_2_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_4[0]), TryLambda_64, &TryResult_32);
    if (((MR_tag((MR_Word) TryResult_32)) == (MR_Integer) 2))
    {
      MR_Word TypeInfo_62_62;
      MR_Box Exp_22;
      MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(2), TryResult_32, (MR_Integer) 0))));
      MR_Integer PDId_24;
      MR_Word PD_25;
      MR_Word PS_26;
      MR_String ProcName_27;
      MR_Word Var_35;
      MR_Word Var_36;
      MR_String Var_73;

      Exp_22 = mercury__exception__exc_univ_value_1_f_0(&TypeInfo_62_62, Var_33);
      PDId_24 = (MR_Integer) (PDPtr_12);
      profile__deep_lookup_proc_dynamics_3_p_0(Deep_9, PDPtr_12, &PD_25);
      Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PD_25, (MR_Integer) 0))));
      profile__deep_lookup_proc_statics_3_p_0(Deep_9, Var_35, &PS_26);
      ProcName_27 = ((MR_String) ((MR_hl_field(MR_mktag(0), PS_26, (MR_Integer) 3))));
      Var_36 = mercury__io__stderr_stream_0_f_0();
      mercury__io__write_string_4_p_0(Var_36, (MR_String) "Exception while analyising proc dynamic ");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_5[0]), PDId_24, &Var_73);
      mercury__io__write_string_4_p_0(Var_36, Var_73);
      mercury__io__write_string_4_p_0(Var_36, (MR_String) " (");
      mercury__io__write_string_4_p_0(Var_36, ProcName_27);
      mercury__io__write_string_4_p_0(Var_36, (MR_String) ")\n");
      {
        mercury__exception__throw_1_p_0(TypeInfo_62_62, Exp_22);
        return;
      }
    }
    else
    {
      MR_Tuple OutputTuple_69 = ((MR_Tuple) ((MR_hl_field(MR_mktag(1), TryResult_32, (MR_Integer) 0))));

      *Candidates_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OutputTuple_69, (MR_Integer) 0))));
      ProcMessages_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OutputTuple_69, (MR_Integer) 1))));
    }
    *Messages_14 = mercury__cord__f_43_43_2_f_0((MR_Word) (&message__message__type_ctor_info_message_0), STATE_VARIABLE_Messages_31_31, ProcMessages_19);
  }
}

static MR_Box MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_callgraph__update_parallelism_available_conj_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Integer conv0_LambdaHeadVar__3_32;

    conv0_LambdaHeadVar__3_32 = mdprof_fb__automatic_parallelism__autopar_search_callgraph__IntroducedFrom__func__update_parallelism_available_conj__342__1_3_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
    wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_32));
    return wrapper_arg_3;
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_callgraph__update_parallelism_available_conj_3_p_0(
  MR_Word TypeInfo_for_T_118,
  MR_Word Conj_4,
  MR_Word STATE_VARIABLE_ChildClique_0_23,
  MR_Word * STATE_VARIABLE_ChildClique_24)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_120_120;
    MR_Word RevGoalPath_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ChildClique_0_23, (MR_Integer) 3))));
    MR_Word RevConjGoalPath_7;
    MR_Integer FirstConjunct_8;
    MR_Integer Length_9;
    MR_String Var_25 = ((MR_String) ((MR_hl_field(MR_mktag(0), Conj_4, (MR_Integer) 0))));
    MR_Integer Var_26;
    MR_Integer Var_27;
    MR_Word Var_29;
    MR_Word Var_34;
    MR_Word Var_60;
    MR_Box conv1_Length_9;
    MR_Word RevRelativePath_12;
    MR_Word RelativePath_13;
    MR_Word Step_14;
    MR_Integer ConjNum_16;
    MR_Integer Var_36;

    mdbcomp__goal_path__rev_goal_path_from_string_det_2_p_0(Var_25, &RevConjGoalPath_7);
    Var_26 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Conj_4, (MR_Integer) 2))));
    Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Conj_4, (MR_Integer) 4))));
    Var_27 = mercury__list__length_1_f_0(TypeInfo_for_T_118, Var_60);
    FirstConjunct_8 = (MR_Integer) ((MR_Unsigned) Var_26 + (MR_Unsigned) Var_27);
    {
      TypeInfo_120_120 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_120_120, 0) = ((MR_Box) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_seq_conj_1));
      MR_hl_field(MR_mktag(0), TypeInfo_120_120, 1) = ((MR_Box) (TypeInfo_for_T_118));
    }
    {
      Var_29 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_8[2]));
      MR_hl_field(MR_mktag(0), Var_29, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_callgraph__update_parallelism_available_conj_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_29, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_29, 3) = ((MR_Box) (TypeInfo_for_T_118));
    }
    Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Conj_4, (MR_Integer) 6))));
    conv1_Length_9 = mercury__list__foldl_3_f_0(TypeInfo_120_120, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (Var_29), (MR_Word) (Var_34), ((MR_Box) ((MR_Integer) 0)));
    Length_9 = ((MR_Integer) (conv1_Length_9));
    succeeded = mdbcomp__goal_path____Unify____reverse_goal_path_0_0(RevGoalPath_6, RevConjGoalPath_7);
    succeeded = !(succeeded);
    if (succeeded)
    {
      succeeded = mdbcomp__goal_path__rev_goal_path_inside_relative_3_p_0(RevConjGoalPath_7, RevGoalPath_6, &RevRelativePath_12);
      if (succeeded)
      {
        mdbcomp__goal_path__rgp_to_fgp_2_p_0(RevRelativePath_12, &RelativePath_13);
        succeeded = (RelativePath_13 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Step_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RelativePath_13, (MR_Integer) 0))));
          succeeded = ((MR_tag((MR_Word) Step_14)) == (MR_Integer) 1);
          if (succeeded)
          {
            ConjNum_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Step_14, (MR_Integer) 0))));
            succeeded = (ConjNum_16 > FirstConjunct_8);
            if (succeeded)
            {
              Var_36 = (MR_Integer) ((MR_Unsigned) FirstConjunct_8 + (MR_Unsigned) Length_9);
              succeeded = (ConjNum_16 <= Var_36);
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word Metrics_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Conj_4, (MR_Integer) 9))));
      MR_Float CPUTime_18;
      MR_Float DeadTime_19;
      MR_Float Efficiency_20;
      MR_Word Parallelism0_21;
      MR_Word Parallelism_22;
      MR_Float Var_37;
      MR_Float Var_39;
      MR_Float Var_40;
      MR_Float Var_100;
      MR_Word Var_113;
      MR_Word Var_114;
      MR_Word Var_115;
      MR_Word Var_116;

      CPUTime_18 = mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_get_cpu_time_1_f_0(Metrics_17);
      Var_37 = MR_unbox_float((MR_hl_field(MR_mktag(0), Metrics_17, (MR_Integer) 7)));
      Var_100 = MR_unbox_float((MR_hl_field(MR_mktag(0), Metrics_17, (MR_Integer) 8)));
      DeadTime_19 = (Var_37 + Var_100);
      Var_39 = (CPUTime_18 + DeadTime_19);
      Efficiency_20 = mercury__float__f_slash_2_f_0(CPUTime_18, Var_39);
      Parallelism0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ChildClique_0_23, (MR_Integer) 4))));
      Var_40 = measurement_units__probable_1_f_0(Efficiency_20);
      measurements__sub_computation_parallelism_3_p_0(Parallelism0_21, Var_40, &Parallelism_22);
      Var_113 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ChildClique_0_23, (MR_Integer) 0))));
      Var_114 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ChildClique_0_23, (MR_Integer) 1))));
      Var_115 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ChildClique_0_23, (MR_Integer) 2))));
      Var_116 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ChildClique_0_23, (MR_Integer) 3))));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_ChildClique_24 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_113));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_114));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_115));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_116));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Parallelism_22));
      }
    }
    else
      *STATE_VARIABLE_ChildClique_24 = STATE_VARIABLE_ChildClique_0_23;
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_callee_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__3_23;

    mdprof_fb__automatic_parallelism__autopar_search_callgraph__IntroducedFrom__pred__update_parallelism_available__327__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_HeadVar__3_23);
    *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__3_23));
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_callee_7_p_0(
  MR_Word Opts_8,
  MR_Word Deep_9,
  MR_Word CliquePtr_10,
  MR_Word CliqueCandidates_11,
  MR_Word STATE_VARIABLE_Callee_0_19,
  MR_Word * Candidates_13,
  MR_Word * Messages_14)
{
  {
    MR_bool succeeded;
    MR_Word Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Callee_0_19, (MR_Integer) 0))));
    MR_Integer Var_44 = (MR_Integer) (CliquePtr_10);
    MR_Integer Var_45 = (MR_Integer) (Var_42);

    succeeded = (Var_44 != Var_45);
    if (succeeded)
    {
      MR_Word Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Callee_0_19, (MR_Integer) 2))));
      MR_Integer Threshold_48 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 8))));
      MR_Word Cost_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Callee_0_19, (MR_Integer) 1))));
      MR_Float Var_50;
      MR_Float Var_51;

      Var_50 = measurements__cs_cost_get_percall_1_f_0(Cost_49);
      Var_51 = mercury__float__float_1_f_0(Threshold_48);
      succeeded = (Var_50 >= Var_51);
      if (succeeded)
      {
        MR_Word STATE_VARIABLE_Callee_20_20;
        MR_Word ProcConjs_73;
        MR_Box conv0_ProcConjs_73;

        succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0), (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_1[1]), CliqueCandidates_11, ((MR_Box) (Var_65)), &conv0_ProcConjs_73);
        if (succeeded)
        {
          ProcConjs_73 = ((MR_Word) (conv0_ProcConjs_73));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word Conjs_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProcConjs_73, (MR_Integer) 2))));
          MR_Box conv2_STATE_VARIABLE_Callee_20_20;

          mercury__list__foldl_4_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_1[6]), (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph__mdprof_fb__automatic_parallelism__autopar_search_callgraph__type_ctor_info_candidate_child_clique_0), (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_2[9]), Conjs_74, ((MR_Box) (STATE_VARIABLE_Callee_0_19)), &conv2_STATE_VARIABLE_Callee_20_20);
          STATE_VARIABLE_Callee_20_20 = ((MR_Word) (conv2_STATE_VARIABLE_Callee_20_20));
        }
        else
          STATE_VARIABLE_Callee_20_20 = STATE_VARIABLE_Callee_0_19;
        succeeded = mdprof_fb__automatic_parallelism__autopar_search_callgraph__exceeded_parallelism_2_p_0(Opts_8, STATE_VARIABLE_Callee_20_20);
        succeeded = !(succeeded);
        if (succeeded)
        {
          MR_Word Parallelism_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Callee_20_20, (MR_Integer) 4))));
          MR_Word ChildCliquePtr_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Callee_20_20, (MR_Integer) 0))));

          mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_p_0(Opts_8, Deep_9, Parallelism_17, ChildCliquePtr_18, Candidates_13, Messages_14);
        }
        else
        {
          *Candidates_13 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0), (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_1[1]));
          *Messages_14 = mercury__cord__empty_0_f_0((MR_Word) (&message__message__type_ctor_info_message_0));
        }
      }
      else
      {
        *Candidates_13 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0), (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_1[1]));
        *Messages_14 = mercury__cord__empty_0_f_0((MR_Word) (&message__message__type_ctor_info_message_0));
      }
    }
    else
    {
      *Candidates_13 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0), (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_1[1]));
      *Messages_14 = mercury__cord__empty_0_f_0((MR_Word) (&message__message__type_ctor_info_message_0));
    }
  }
}

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_callgraph__exceeded_parallelism_2_p_0(
  MR_Word Opts_3,
  MR_Word ChildClique_4)
{
  {
    MR_bool succeeded;
    MR_Word Parallelism_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ChildClique_4, (MR_Integer) 4))));
    MR_Float DesiredParallelism_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), Opts_3, (MR_Integer) 0)));

    succeeded = measurements__exceeded_desired_parallelism_2_p_0(DesiredParallelism_6, Parallelism_5);
    return succeeded;
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_callgraph__pd_slot_callees_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_ChildCliques_12;

    mdprof_fb__automatic_parallelism__autopar_search_callgraph__call_site_dynamic_callees_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), &conv0_ChildCliques_12);
    *wrapper_arg_2 = ((MR_Box) (conv0_ChildCliques_12));
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_callgraph__pd_slot_callees_5_p_0(
  MR_Word Deep_6,
  MR_Word Parallelism_7,
  MR_Word ProcLabel_8,
  MR_Word HeadVar__4_4,
  MR_Word * ChildCliques_11)
{
  {
    MR_Word CSSPtr_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__4_4, (MR_Integer) 0))));
    MR_Word Slot_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__4_4, (MR_Integer) 1))));
    MR_Word CSS_12;
    MR_Word RevGoalPath_13;

    profile__deep_lookup_call_site_statics_3_p_0(Deep_6, CSSPtr_9, &CSS_12);
    RevGoalPath_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CSS_12, (MR_Integer) 4))));
    if (((MR_tag((MR_Word) Slot_10)) == (MR_Integer) 1))
    {
      MR_ArrayPtr CSDPtrs_16 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(1), Slot_10, (MR_Integer) 1))));
      MR_Word ChildCliqueCords_17;
      MR_Word Var_18;
      MR_Word Var_19;

      {
        Var_18 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_10[0]));
        MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_callgraph__pd_slot_callees_5_p_0_1));
        MR_hl_field(MR_mktag(0), Var_18, 2) = ((MR_Box) ((MR_Integer) 4));
        MR_hl_field(MR_mktag(0), Var_18, 3) = ((MR_Box) (Deep_6));
        MR_hl_field(MR_mktag(0), Var_18, 4) = ((MR_Box) (Parallelism_7));
        MR_hl_field(MR_mktag(0), Var_18, 5) = ((MR_Box) (ProcLabel_8));
        MR_hl_field(MR_mktag(0), Var_18, 6) = ((MR_Box) (RevGoalPath_13));
      }
      Var_19 = mercury__array__to_list_1_f_0((MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0), (MR_ArrayPtr) (CSDPtrs_16));
      mercury__list__map_3_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0), (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_1[5]), Var_18, Var_19, &ChildCliqueCords_17);
      *ChildCliques_11 = mercury__cord__cord_list_to_cord_1_f_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph__mdprof_fb__automatic_parallelism__autopar_search_callgraph__type_ctor_info_candidate_child_clique_0), ChildCliqueCords_17);
    }
    else
    {
      MR_Word CSDPtr_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Slot_10, (MR_Integer) 0))));

      mdprof_fb__automatic_parallelism__autopar_search_callgraph__call_site_dynamic_callees_6_p_0(Deep_6, Parallelism_7, ProcLabel_8, RevGoalPath_13, CSDPtr_14, ChildCliques_11);
    }
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_callgraph__call_site_dynamic_callees_6_p_0(
  MR_Word Deep_7,
  MR_Word Parallelism_8,
  MR_Word ProcLabel_9,
  MR_Word RevGoalPath_10,
  MR_Word CSDPtr_11,
  MR_Word * ChildCliques_12)
{
  {
    MR_bool succeeded;

    succeeded = profile__valid_call_site_dynamic_ptr_2_p_0(Deep_7, CSDPtr_11);
    if (succeeded)
    {
      MR_Word MaybeClique_13;

      profile__deep_lookup_clique_maybe_child_3_p_0(Deep_7, CSDPtr_11, &MaybeClique_13);
      if ((MaybeClique_13 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *ChildCliques_12 = mercury__cord__empty_0_f_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph__mdprof_fb__automatic_parallelism__autopar_search_callgraph__type_ctor_info_candidate_child_clique_0));
      }
      else
      {
        MR_Word CliquePtr_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeClique_13, (MR_Integer) 0))));
        MR_Word Own_15;
        MR_Word Desc_16;
        MR_Word Cost_17;
        MR_Integer Var_18;
        MR_Float Var_19;
        MR_Integer Var_20;
        MR_Integer Var_21;
        MR_Integer Var_22;
        MR_Word Var_23;

        profile__deep_lookup_csd_own_3_p_0(Deep_7, CSDPtr_11, &Own_15);
        profile__deep_lookup_csd_desc_3_p_0(Deep_7, CSDPtr_11, &Desc_16);
        Var_18 = measurements__calls_1_f_0(Own_15);
        Var_21 = measurements__callseqs_1_f_0(Own_15);
        Var_22 = measurements__inherit_callseqs_1_f_0(Desc_16);
        Var_20 = (MR_Integer) ((MR_Unsigned) Var_21 + (MR_Unsigned) Var_22);
        Var_19 = mercury__float__float_1_f_0(Var_20);
        Cost_17 = measurements__build_cs_cost_csq_2_f_0(Var_18, Var_19);
        {
          Var_23 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (CliquePtr_14));
          MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (Cost_17));
          MR_hl_field(MR_mktag(0), Var_23, 2) = ((MR_Box) (ProcLabel_9));
          MR_hl_field(MR_mktag(0), Var_23, 3) = ((MR_Box) (RevGoalPath_10));
          MR_hl_field(MR_mktag(0), Var_23, 4) = ((MR_Box) (Parallelism_8));
        }
        *ChildCliques_12 = mercury__cord__singleton_1_f_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph__mdprof_fb__automatic_parallelism__autopar_search_callgraph__type_ctor_info_candidate_child_clique_0), ((MR_Box) (Var_23)));
      }
    }
    else
    {
      *ChildCliques_12 = mercury__cord__empty_0_f_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph__mdprof_fb__automatic_parallelism__autopar_search_callgraph__type_ctor_info_candidate_child_clique_0));
    }
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_callgraph__proc_dynamic_callees_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_ChildCliques_11;

    mdprof_fb__automatic_parallelism__autopar_search_callgraph__pd_slot_callees_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv0_ChildCliques_11);
    *wrapper_arg_2 = ((MR_Box) (conv0_ChildCliques_11));
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_callgraph__proc_dynamic_callees_4_p_0(
  MR_Word Deep_5,
  MR_Word Parallelism_6,
  MR_Word PDPtr_7,
  MR_Word * ChildCliques_8)
{
  {
    MR_Word PD_9;
    MR_Word PSPtr_10;
    MR_Word PS_11;
    MR_Word ProcLabel_12;
    MR_Word Slots_13;
    MR_Word ChildCliqueCords_14;
    MR_Word Var_15;

    profile__deep_lookup_proc_dynamics_3_p_0(Deep_5, PDPtr_7, &PD_9);
    PSPtr_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PD_9, (MR_Integer) 0))));
    profile__deep_lookup_proc_statics_3_p_0(Deep_5, PSPtr_10, &PS_11);
    ProcLabel_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PS_11, (MR_Integer) 0))));
    analysis_utils__proc_dynamic_paired_call_site_slots_3_p_0(Deep_5, PDPtr_7, &Slots_13);
    {
      Var_15 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_9[0]));
      MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_callgraph__proc_dynamic_callees_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_15, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_15, 3) = ((MR_Box) (Deep_5));
      MR_hl_field(MR_mktag(0), Var_15, 4) = ((MR_Box) (Parallelism_6));
      MR_hl_field(MR_mktag(0), Var_15, 5) = ((MR_Box) (ProcLabel_12));
    }
    mercury__list__map_3_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_2[1]), (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_1[5]), Var_15, Slots_13, &ChildCliqueCords_14);
    *ChildCliques_8 = mercury__cord__cord_list_to_cord_1_f_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph__mdprof_fb__automatic_parallelism__autopar_search_callgraph__type_ctor_info_candidate_child_clique_0), ChildCliqueCords_14);
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__3_92;

    mdprof_fb__automatic_parallelism__autopar_search_callgraph__IntroducedFrom__pred__candidate_parallel_conjunctions__99__1_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__3_92);
    *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__3_92));
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    mdprof_fb__automatic_parallelism__autopar_types__pard_goal_detail_to_pard_goal_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  }
}

void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_5_p_0(
  MR_Word Params_6,
  MR_Word Deep_7,
  MR_Word * Messages_8,
  MR_Word STATE_VARIABLE_Feedback_0_17,
  MR_Word * STATE_VARIABLE_Feedback_18)
{
  {
    MR_Word RootCliquePtr_10;
    MR_Word RootParallelism_11;
    MR_Word ConjunctionsMap_12;
    MR_Word ConjunctionsAssocList0_13;
    MR_Word ConjunctionsAssocList_14;
    MR_Word CandidateInfo_15;
    MR_String ProfiledProgramName_16;
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Deep_7, (MR_Integer) 4))));
    MR_Word Var_22;

    profile__deep_lookup_clique_index_3_p_0(Deep_7, Var_19, &RootCliquePtr_10);
    RootParallelism_11 = measurements__no_parallelism_0_f_0();
    mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_p_0(Params_6, Deep_7, RootParallelism_11, RootCliquePtr_10, &ConjunctionsMap_12, Messages_8);
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0), (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_1[1]), ConjunctionsMap_12, &ConjunctionsAssocList0_13);
    mercury__assoc_list__map_values_only_3_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_1[1]), (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_1[3]), (MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0), (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_4[3]), ConjunctionsAssocList0_13, &ConjunctionsAssocList_14);
    {
      CandidateInfo_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), CandidateInfo_15, 0) = ((MR_Box) (Params_6));
      MR_hl_field(MR_mktag(0), CandidateInfo_15, 1) = ((MR_Box) (ConjunctionsAssocList_14));
    }
    Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Deep_7, (MR_Integer) 0))));
    ProfiledProgramName_16 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_22, (MR_Integer) 0))));
    mdbcomp__feedback__add_feedback_candidate_parallel_conjunctions_4_p_0(ProfiledProgramName_16, CandidateInfo_15, STATE_VARIABLE_Feedback_0_17, STATE_VARIABLE_Feedback_18);
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv10_HeadVar__4_111;

    mdprof_fb__automatic_parallelism__autopar_search_callgraph__IntroducedFrom__pred__candidate_parallel_conjunctions_clique__177__2_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv10_HeadVar__4_111);
    *wrapper_arg_3 = ((MR_Box) (conv10_HeadVar__4_111));
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv9_Candidates_13;
    MR_Word conv8_Messages_14;

    mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_callee_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), &conv9_Candidates_13, &conv8_Messages_14);
    *wrapper_arg_2 = ((MR_Box) (conv9_Candidates_13));
    *wrapper_arg_3 = ((MR_Box) (conv8_Messages_14));
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv7_ChildCliques_8;

    mdprof_fb__automatic_parallelism__autopar_search_callgraph__proc_dynamic_callees_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv7_ChildCliques_8);
    *wrapper_arg_2 = ((MR_Box) (conv7_ChildCliques_8));
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_HeadVar__4_92;

    mdprof_fb__automatic_parallelism__autopar_search_callgraph__IntroducedFrom__pred__candidate_parallel_conjunctions_clique__163__2_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_HeadVar__4_92);
    *wrapper_arg_3 = ((MR_Box) (conv5_HeadVar__4_92));
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_HeadVar__3_120;

    mdprof_fb__automatic_parallelism__autopar_search_callgraph__IntroducedFrom__pred__candidate_parallel_conjunctions_clique__181__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_HeadVar__3_120);
    *wrapper_arg_3 = ((MR_Box) (conv4_HeadVar__3_120));
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_HeadVar__3_116;

    mdprof_fb__automatic_parallelism__autopar_search_callgraph__IntroducedFrom__pred__candidate_parallel_conjunctions_clique__177__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_HeadVar__3_116);
    *wrapper_arg_3 = ((MR_Box) (conv3_HeadVar__3_116));
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_HeadVar__3_97;

    mdprof_fb__automatic_parallelism__autopar_search_callgraph__IntroducedFrom__pred__candidate_parallel_conjunctions_clique__163__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_HeadVar__3_97);
    *wrapper_arg_3 = ((MR_Box) (conv2_HeadVar__3_97));
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_Candidates_13;
    MR_Word conv0_Messages_14;

    mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_proc_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), &conv1_Candidates_13, &conv0_Messages_14);
    *wrapper_arg_2 = ((MR_Box) (conv1_Candidates_13));
    *wrapper_arg_3 = ((MR_Box) (conv0_Messages_14));
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_p_0(
  MR_Word Opts_7,
  MR_Word Deep_8,
  MR_Word ParentParallelism_9,
  MR_Word CliquePtr_10,
  MR_Word * Candidates_11,
  MR_Word * Messages_12)
{
  {
    MR_bool succeeded;
    MR_Word MaybeFirstPDPtr_13;
    MR_Word OtherPDPtrs_14;
    MR_Word PDPtrs_16;
    MR_Word MaybeRecursiveCostsReport_20;
    MR_Word RecursionType_22;
    MR_Word CandidateLists_24;
    MR_Word MessageCords_25;
    MR_Word CliqueCandidates_26;
    MR_Word CliqueMessages_27;
    MR_Word ChildCliquess_29;
    MR_Word CSCandidateLists_30;
    MR_Word CSMessageCords_31;
    MR_Word CSCandidates_32;
    MR_Word CSMessages_33;
    MR_Word Var_42;
    MR_Word Var_44;
    MR_Word Var_46;
    MR_Word STATE_VARIABLE_ChildCliques_47_47;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_51;
    MR_Box conv6_CliqueCandidates_26;
    MR_Box conv11_CSCandidates_32;

    analysis_utils__find_clique_first_and_other_procs_4_p_0(Deep_8, CliquePtr_10, &MaybeFirstPDPtr_13, &OtherPDPtrs_14);
    if ((MaybeFirstPDPtr_13 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word RootCliquePtr_17;
      MR_Word Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Deep_8, (MR_Integer) 4))));
      MR_Integer Var_133;
      MR_Integer Var_134;

      profile__deep_lookup_clique_index_3_p_0(Deep_8, Var_34, &RootCliquePtr_17);
      Var_133 = (MR_Integer) (CliquePtr_10);
      Var_134 = (MR_Integer) (RootCliquePtr_17);
      succeeded = (Var_133 == Var_134);
      if (succeeded)
        PDPtrs_16 = OtherPDPtrs_14;
      else
      {
        MR_Integer CliqueNum_18 = (MR_Integer) (CliquePtr_10);
        MR_String Msg_19;
        MR_String Var_123;
        MR_String Var_130;

        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_5[0]), CliqueNum_18, &Var_123);
        Var_130 = mercury__string__f_43_43_2_f_0(Var_123, (MR_String) " has no entry proc");
        Msg_19 = mercury__string__f_43_43_2_f_0((MR_String) "Clique ", Var_130);
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140mdprof_fb.automatic_parallelism.autopar_search_callgraph.candidate_parallel_conjunctions_clique\'/6", Msg_19);
          return;
        }
      }
    }
    else
    {
      MR_Word FirstPDPtr_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFirstPDPtr_13, (MR_Integer) 0))));

      {
        PDPtrs_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), PDPtrs_16, 0) = ((MR_Box) (FirstPDPtr_15));
        MR_hl_field(MR_mktag(1), PDPtrs_16, 1) = ((MR_Box) (OtherPDPtrs_14));
      }
    }
    recursion_patterns__create_clique_recursion_costs_report_3_p_0(Deep_8, CliquePtr_10, &MaybeRecursiveCostsReport_20);
    if (((MR_tag((MR_Word) MaybeRecursiveCostsReport_20)) == (MR_Integer) 1))
    {
      MR_String ErrorB_23 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeRecursiveCostsReport_20, (MR_Integer) 0))));
      MR_Word Var_40;

      {
        Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (ErrorB_23));
        MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        RecursionType_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), RecursionType_22, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(MR_mktag(3), RecursionType_22, 1) = ((MR_Box) (Var_40));
      }
    }
    else
    {
      MR_Word RecursiveCostsReport_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeRecursiveCostsReport_20, (MR_Integer) 0))));

      RecursionType_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RecursiveCostsReport_21, (MR_Integer) 1))));
    }
    {
      Var_42 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_42, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_42, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), Var_42, 3) = ((MR_Box) (Opts_7));
      MR_hl_field(MR_mktag(0), Var_42, 4) = ((MR_Box) (Deep_8));
      MR_hl_field(MR_mktag(0), Var_42, 5) = ((MR_Box) (RecursionType_22));
      MR_hl_field(MR_mktag(0), Var_42, 6) = ((MR_Box) (CliquePtr_10));
    }
    mercury__list__map2_4_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0), (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_2[0]), (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_1[4]), Var_42, PDPtrs_16, &CandidateLists_24, &MessageCords_25);
    Var_44 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0), (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_1[1]));
    CliqueMessages_27 = mercury__cord__cord_list_to_cord_1_f_0((MR_Word) (&message__message__type_ctor_info_message_0), MessageCords_25);
    Var_51 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0), (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_1[1]));
    mercury__list__foldl_4_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_2[0]), (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_2[0]), (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_4[1]), CandidateLists_24, ((MR_Box) (Var_44)), &conv6_CliqueCandidates_26);
    CliqueCandidates_26 = ((MR_Word) (conv6_CliqueCandidates_26));
    {
      Var_46 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_46, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_8[1]));
      MR_hl_field(MR_mktag(0), Var_46, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_p_0_6));
      MR_hl_field(MR_mktag(0), Var_46, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_46, 3) = ((MR_Box) (Deep_8));
      MR_hl_field(MR_mktag(0), Var_46, 4) = ((MR_Box) (ParentParallelism_9));
    }
    mercury__list__map_3_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0), (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_1[5]), Var_46, PDPtrs_16, &ChildCliquess_29);
    STATE_VARIABLE_ChildCliques_47_47 = mercury__cord__cord_list_to_cord_1_f_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph__mdprof_fb__automatic_parallelism__autopar_search_callgraph__type_ctor_info_candidate_child_clique_0), ChildCliquess_29);
    {
      Var_48 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_48, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_6[1]));
      MR_hl_field(MR_mktag(0), Var_48, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_clique_6_p_0_7));
      MR_hl_field(MR_mktag(0), Var_48, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), Var_48, 3) = ((MR_Box) (Opts_7));
      MR_hl_field(MR_mktag(0), Var_48, 4) = ((MR_Box) (Deep_8));
      MR_hl_field(MR_mktag(0), Var_48, 5) = ((MR_Box) (CliquePtr_10));
      MR_hl_field(MR_mktag(0), Var_48, 6) = ((MR_Box) (CliqueCandidates_26));
    }
    Var_49 = mercury__cord__list_1_f_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph__mdprof_fb__automatic_parallelism__autopar_search_callgraph__type_ctor_info_candidate_child_clique_0), STATE_VARIABLE_ChildCliques_47_47);
    mercury__list__map2_4_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph__mdprof_fb__automatic_parallelism__autopar_search_callgraph__type_ctor_info_candidate_child_clique_0), (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_2[0]), (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_1[4]), Var_48, Var_49, &CSCandidateLists_30, &CSMessageCords_31);
    mercury__list__foldl_4_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_2[0]), (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_2[0]), (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_4[2]), CSCandidateLists_30, ((MR_Box) (Var_51)), &conv11_CSCandidates_32);
    CSCandidates_32 = ((MR_Word) (conv11_CSCandidates_32));
    CSMessages_33 = mercury__cord__cord_list_to_cord_1_f_0((MR_Word) (&message__message__type_ctor_info_message_0), CSMessageCords_31);
    mercury__map__union_4_p_1((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_1[1]), (MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0), (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_search_callgraph_scalar_common_2[7]), CliqueCandidates_26, CSCandidates_32, Candidates_11);
    *Messages_12 = mercury__cord__f_43_43_2_f_0((MR_Word) (&message__message__type_ctor_info_message_0), CliqueMessages_27, CSMessages_33);
  }
}

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_callgraph____Unify____candidate_child_clique_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdprof_fb__automatic_parallelism__autopar_search_callgraph____Unify____candidate_child_clique_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_search_callgraph____Compare____candidate_child_clique_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdprof_fb__automatic_parallelism__autopar_search_callgraph____Compare____candidate_child_clique_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__mdprof_fb__automatic_parallelism__autopar_search_callgraph__init(void)
{
}

void mercury__mdprof_fb__automatic_parallelism__autopar_search_callgraph__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mdprof_fb__automatic_parallelism__autopar_search_callgraph__mdprof_fb__automatic_parallelism__autopar_search_callgraph__type_ctor_info_candidate_child_clique_0);
}

void mercury__mdprof_fb__automatic_parallelism__autopar_search_callgraph__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__mdprof_fb__automatic_parallelism__autopar_search_callgraph__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module mdprof_fb.automatic_parallelism.autopar_search_callgraph.
