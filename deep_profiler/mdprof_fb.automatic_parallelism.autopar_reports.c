/*
** Automatically generated from `autopar_reports.m'
** by the Mercury compiler,
** version 13.05.1, configured for x86_64-apple-darwin12.3.0.
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


/* :- module mdprof_fb.automatic_parallelism.autopar_reports. */
/* :- implementation. */

/*
INIT mercury__mdprof_fb__automatic_parallelism__autopar_reports__init
ENDINIT
*/

#include "mdprof_fb.automatic_parallelism.autopar_reports.mih"


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
#include "exclude.mih"
#include "float.mih"
#include "int.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mdprof_fb.mih"
#include "measurement_units.mih"
#include "measurements.mih"
#include "message.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "profile.mih"
#include "program_representation_utils.mih"
#include "random.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "std_util.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
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
#include "mdbcomp.trace_counts.mih"
#include "mdprof_fb.automatic_parallelism.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 86 "mdprof_fb.automatic_parallelism.autopar_reports.c"
static const MR_FA_PseudoTypeInfo_Struct2 mdprof_fb__automatic_parallelism__autopar_reports__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0;

#line 89 "mdprof_fb.automatic_parallelism.autopar_reports.c"
static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_reports__mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0;

#line 92 "mdprof_fb.automatic_parallelism.autopar_reports.c"
static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_reports__mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0;

#line 95 "mdprof_fb.automatic_parallelism.autopar_reports.c"
static const MR_FA_PseudoTypeInfo_Struct2 mdprof_fb__automatic_parallelism__autopar_reports__pair__pti_pair_2__plain_mdbcomp__program_representation__type_ctor_info_string_proc_label_0__plain_mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0;

#line 98 "mdprof_fb.automatic_parallelism.autopar_reports.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_reports__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0;

#line 101 "mdprof_fb.automatic_parallelism.autopar_reports.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_reports__mdbcomp__feedback__automatic_parallelism__pti_candidate_par_conjunction_1__plain_mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0;

#line 104 "mdprof_fb.automatic_parallelism.autopar_reports.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_reports__mdbcomp__program_representation__pti_goal_rep_1__plain_mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0;

#line 107 "mdprof_fb.automatic_parallelism.autopar_reports.c"
static const MR_FA_PseudoTypeInfo_Struct2 mdprof_fb__automatic_parallelism__autopar_reports__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_float_0;

#line 110 "mdprof_fb.automatic_parallelism.autopar_reports.c"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_p_0_10001(
#line 113 "mdprof_fb.automatic_parallelism.autopar_reports.c"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure_arg,
#line 115 "mdprof_fb.automatic_parallelism.autopar_reports.c"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1,
#line 117 "mdprof_fb.automatic_parallelism.autopar_reports.c"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2,
#line 119 "mdprof_fb.automatic_parallelism.autopar_reports.c"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_3);

#line 145 "autopar_reports.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_99_111_110_106_117_110_99_116_105_111_110_115_95_105_110_95_112_114_111_99_115_95_95_91_49_93_95_48_3_p_0(
#line 145 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__1_1,
#line 145 "autopar_reports.m"
  MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_NumConjs_0_10,
#line 145 "autopar_reports.m"
  MR_Integer * mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_NumConjs_11);

#line 383 "autopar_reports.m"
static MR_Word MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__IntroducedFrom__func__format_sequential_conjuncts__383__1_1_f_0(
#line 383 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__1_46);

#line 335 "autopar_reports.m"
static MR_Float MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__IntroducedFrom__func__format_parallel_conjuncts__335__1_2_f_0(
#line 335 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__1_43,
#line 335 "autopar_reports.m"
  MR_Float mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__2_44);

#line 331 "autopar_reports.m"
static MR_Word MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__IntroducedFrom__func__format_parallel_conjuncts__331__1_1_f_0(
#line 331 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__1_74);

#line 189 "autopar_reports.m"
static MR_String MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__IntroducedFrom__func__create_push_goal_report__189__1_1_f_0(
#line 189 "autopar_reports.m"
  MR_String mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__1_21);

#line 84 "autopar_reports.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__IntroducedFrom__pred__create_feedback_autopar_report__84__1_3_p_0(
#line 84 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__1_100,
#line 84 "autopar_reports.m"
  MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__2_101,
#line 84 "autopar_reports.m"
  MR_Integer * mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__3_102);

#line 233 "autopar_reports.m"
static MR_String MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__IntroducedFrom__func__create_candidate_parallel_conj_report__233__1_1_f_0(
#line 233 "autopar_reports.m"
  MR_String mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__1_76);

#line 435 "autopar_reports.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_p_0_2(
#line 435 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure_arg,
#line 435 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1,
#line 435 "autopar_reports.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2);

#line 435 "autopar_reports.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_p_0_1(
#line 435 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure_arg,
#line 435 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1,
#line 435 "autopar_reports.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2);

#line 397 "autopar_reports.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_p_0(
#line 397 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__1_1,
#line 397 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__2_2,
#line 397 "autopar_reports.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__3_3);

#line 442 "autopar_reports.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__format_var_use_line_3_p_0(
#line 442 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__VarNameTable_4,
#line 442 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__2_2,
#line 442 "autopar_reports.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__3_3);

#line 383 "autopar_reports.m"
static MR_Box MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjuncts_8_p_0_1(
#line 383 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure_arg,
#line 383 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1);

#line 376 "autopar_reports.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjuncts_8_p_0(
#line 376 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__VarNameTable_1,
#line 376 "autopar_reports.m"
  MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__Indent_2,
#line 376 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__RevGoalPath_3,
#line 376 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__4_4,
#line 376 "autopar_reports.m"
  MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_ConjNum_0_5,
#line 376 "autopar_reports.m"
  MR_Integer * mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_ConjNum_6,
#line 376 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_0_7,
#line 376 "autopar_reports.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_8);

#line 354 "autopar_reports.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjunction_7_p_0(
#line 354 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__VarNameTable_8,
#line 354 "autopar_reports.m"
  MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__Indent_9,
#line 354 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__RevGoalPath_10,
#line 354 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__Goals_11,
#line 354 "autopar_reports.m"
  MR_Float mdprof_fb__automatic_parallelism__autopar_reports__Cost_12,
#line 354 "autopar_reports.m"
  MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__FirstConjNum_13,
#line 354 "autopar_reports.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_16);

#line 335 "autopar_reports.m"
static MR_Box MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjuncts_7_p_0_2(
#line 335 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure_arg,
#line 335 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1,
#line 335 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2);

#line 331 "autopar_reports.m"
static MR_Box MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjuncts_7_p_0_1(
#line 331 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure_arg,
#line 331 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1);

#line 311 "autopar_reports.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjuncts_7_p_0(
#line 311 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__1_1,
#line 311 "autopar_reports.m"
  MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__Indent_2,
#line 311 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__3_3,
#line 311 "autopar_reports.m"
  MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__4_4,
#line 311 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__5_5,
#line 311 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_0_6,
#line 311 "autopar_reports.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_7);

#line 300 "autopar_reports.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjunction_6_p_0(
#line 300 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__VarNameTable_7,
#line 300 "autopar_reports.m"
  MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__Indent_8,
#line 300 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__RevGoalPath_9,
#line 300 "autopar_reports.m"
  MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__ConjNum_10,
#line 300 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__Conjs_11,
#line 300 "autopar_reports.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_14);

#line 175 "autopar_reports.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_proc_report_2_p_0_2(
#line 175 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure_arg,
#line 175 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1,
#line 175 "autopar_reports.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2);

#line 174 "autopar_reports.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_proc_report_2_p_0_1(
#line 174 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure_arg,
#line 174 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1,
#line 174 "autopar_reports.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2);

#line 196 "autopar_reports.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_proc_report_2_p_0(
#line 196 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__1_1,
#line 196 "autopar_reports.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_reports__Report_5);

#line 189 "autopar_reports.m"
static MR_Box MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__create_push_goal_report_2_p_0_1(
#line 189 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure_arg,
#line 189 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1);

#line 183 "autopar_reports.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__create_push_goal_report_2_p_0(
#line 183 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__PushGoal_3,
#line 183 "autopar_reports.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_reports__Report_4);

#line 152 "autopar_reports.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__best_par_algorithm_string_2_p_0(
#line 152 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__Alg_3,
#line 152 "autopar_reports.m"
  MR_String * mdprof_fb__automatic_parallelism__autopar_reports__Str_4);

#line 141 "autopar_reports.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__create_feedback_autopar_report_3_p_0_2(
#line 141 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure_arg,
#line 141 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1,
#line 141 "autopar_reports.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2);

#line 84 "autopar_reports.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__create_feedback_autopar_report_3_p_0_1(
#line 84 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure_arg,
#line 84 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1,
#line 84 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2,
#line 84 "autopar_reports.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_3);

#line 78 "autopar_reports.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__create_feedback_autopar_report_3_p_0(
#line 78 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__Parameters_4,
#line 78 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__ProcConjs_5,
#line 78 "autopar_reports.m"
  MR_String * mdprof_fb__automatic_parallelism__autopar_reports__Report_6);

#line 63 "autopar_reports.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__create_feedback_report_2_p_0(
#line 63 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__FeedbackData_3,
#line 63 "autopar_reports.m"
  MR_String * mdprof_fb__automatic_parallelism__autopar_reports__Report_4);

#line 233 "autopar_reports.m"
static MR_Box MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_p_0_2(
#line 233 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure_arg,
#line 233 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1);

#line 214 "autopar_reports.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_p_0_1(
#line 214 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure_arg,
#line 214 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1,
#line 214 "autopar_reports.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2);

#line 58 "autopar_reports.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__print_feedback_report_4_p_0_1(
#line 58 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure_arg,
#line 58 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1,
#line 58 "autopar_reports.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2);


static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_1[5][2];

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_2[11][3];

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_3[5][5];

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_4[5][6];




static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_1[5][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_goal_rep_1)),
    ((MR_Box) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunctions_proc_1)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunction_1)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_1[0]))
  },
  /* row 4 */
  {
    ((MR_Box) (base_typeclass_info_program_representation_utils__goal_annotation__arity1__mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0__)),
    ((MR_Box) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0))
  },
};

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_2[11][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_1[1]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_3[0])),
    ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__print_feedback_report_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_3[1])),
    ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_4[1])),
    ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__create_feedback_autopar_report_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_3[2])),
    ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__create_feedback_autopar_report_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_3[1])),
    ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__create_push_goal_report_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_3[3])),
    ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_proc_report_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_3[4])),
    ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjuncts_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_4[3])),
    ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjuncts_7_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_3[4])),
    ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjuncts_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_3[5][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_data_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_reports__pair__pti_pair_2__plain_mdbcomp__program_representation__type_ctor_info_string_proc_label_0__plain_mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_reports__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_push_goal_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_reports__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0)),
    ((MR_Box) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0))
  },
};

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_4[5][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_reports__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_reports__pair__pti_pair_2__plain_mdbcomp__program_representation__type_ctor_info_string_proc_label_0__plain_mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_reports__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_reports__mdbcomp__feedback__automatic_parallelism__pti_candidate_par_conjunction_1__plain_mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_reports__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_reports__mdbcomp__program_representation__pti_goal_rep_1__plain_mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_reports__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_reports__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_float_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_reports__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.program_representation.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "array.mh"
#include "array.mh"



#line 651 "mdprof_fb.automatic_parallelism.autopar_reports.c"
static const MR_FA_PseudoTypeInfo_Struct2 mdprof_fb__automatic_parallelism__autopar_reports__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 660 "mdprof_fb.automatic_parallelism.autopar_reports.c"
static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_reports__mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0 = {
  &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_goal_rep_1,
  {
    (MR_TypeInfo) &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0
  }
};

#line 668 "mdprof_fb.automatic_parallelism.autopar_reports.c"
static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_reports__mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0 = {
  &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunctions_proc_1,
  {
    (MR_TypeInfo) &mdprof_fb__automatic_parallelism__autopar_reports__mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0
  }
};

#line 676 "mdprof_fb.automatic_parallelism.autopar_reports.c"
static const MR_FA_PseudoTypeInfo_Struct2 mdprof_fb__automatic_parallelism__autopar_reports__pair__pti_pair_2__plain_mdbcomp__program_representation__type_ctor_info_string_proc_label_0__plain_mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0,
    (MR_PseudoTypeInfo) &mdprof_fb__automatic_parallelism__autopar_reports__mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0
  }
};

#line 685 "mdprof_fb.automatic_parallelism.autopar_reports.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_reports__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 693 "mdprof_fb.automatic_parallelism.autopar_reports.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_reports__mdbcomp__feedback__automatic_parallelism__pti_candidate_par_conjunction_1__plain_mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0 = {
  &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunction_1,
  {
    (MR_PseudoTypeInfo) &mdprof_fb__automatic_parallelism__autopar_reports__mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0
  }
};

#line 701 "mdprof_fb.automatic_parallelism.autopar_reports.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_reports__mdbcomp__program_representation__pti_goal_rep_1__plain_mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0 = {
  &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_goal_rep_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0
  }
};

#line 709 "mdprof_fb.automatic_parallelism.autopar_reports.c"
static const MR_FA_PseudoTypeInfo_Struct2 mdprof_fb__automatic_parallelism__autopar_reports__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_float_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
  }
};

#line 718 "mdprof_fb.automatic_parallelism.autopar_reports.c"
const MR_BaseTypeclassInfo base_typeclass_info_program_representation_utils__goal_annotation__arity1__mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_p_0_10001))
};

#line 728 "mdprof_fb.automatic_parallelism.autopar_reports.c"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_p_0_10001(
#line 731 "mdprof_fb.automatic_parallelism.autopar_reports.c"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure_arg,
#line 733 "mdprof_fb.automatic_parallelism.autopar_reports.c"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1,
#line 735 "mdprof_fb.automatic_parallelism.autopar_reports.c"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2,
#line 737 "mdprof_fb.automatic_parallelism.autopar_reports.c"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_3)
#line 739 "mdprof_fb.automatic_parallelism.autopar_reports.c"
{
#line 741 "mdprof_fb.automatic_parallelism.autopar_reports.c"
  {
#line 743 "mdprof_fb.automatic_parallelism.autopar_reports.c"
    MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure;
#line 745 "mdprof_fb.automatic_parallelism.autopar_reports.c"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__conv0_HeadVar__3_3;

#line 748 "mdprof_fb.automatic_parallelism.autopar_reports.c"
    mdprof_fb__automatic_parallelism__autopar_reports__closure = mdprof_fb__automatic_parallelism__autopar_reports__closure_arg;
#line 750 "mdprof_fb.automatic_parallelism.autopar_reports.c"
    {
#line 752 "mdprof_fb.automatic_parallelism.autopar_reports.c"
      mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_p_0(((MR_Word) mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1), ((MR_Word) mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2), &mdprof_fb__automatic_parallelism__autopar_reports__conv0_HeadVar__3_3);
    }
#line 755 "mdprof_fb.automatic_parallelism.autopar_reports.c"
    *mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_3 = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__conv0_HeadVar__3_3));
#line 757 "mdprof_fb.automatic_parallelism.autopar_reports.c"
  }
#line 759 "mdprof_fb.automatic_parallelism.autopar_reports.c"
}

#line 145 "autopar_reports.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_99_111_110_106_117_110_99_116_105_111_110_115_95_105_110_95_112_114_111_99_115_95_95_91_49_93_95_48_3_p_0(
#line 145 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__1_1,
#line 145 "autopar_reports.m"
  MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_NumConjs_0_10,
#line 145 "autopar_reports.m"
  MR_Integer * mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_NumConjs_11)
#line 145 "autopar_reports.m"
{
#line 148 "autopar_reports.m"
  {
#line 148 "autopar_reports.m"
    MR_bool mdprof_fb__automatic_parallelism__autopar_reports__succeeded;
#line 148 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__Cands_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__1_1, (MR_Integer) 1)));
#line 148 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__Conjs_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__Cands_5, (MR_Integer) 2)));
#line 148 "autopar_reports.m"
    MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__V_13_13;
#line 148 "autopar_reports.m"
    MR_Box mdprof_fb__automatic_parallelism__autopar_reports__V_4_4 = (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__1_1, (MR_Integer) 0));
#line 149 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports___VarNameTable_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__Cands_5, (MR_Integer) 0)));
#line 149 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports___Pushes_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__Cands_5, (MR_Integer) 1)));

#line 150 "autopar_reports.m"
    {
#line 150 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_13_13 = mercury__list__length_1_f_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_1[3], mdprof_fb__automatic_parallelism__autopar_reports__Conjs_9);
    }
#line 150 "autopar_reports.m"
    *mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_NumConjs_11 = (mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_NumConjs_0_10 + mdprof_fb__automatic_parallelism__autopar_reports__V_13_13);
#line 148 "autopar_reports.m"
  }
#line 145 "autopar_reports.m"
}

#line 383 "autopar_reports.m"
static MR_Word MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__IntroducedFrom__func__format_sequential_conjuncts__383__1_1_f_0(
#line 383 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__1_46)
#line 383 "autopar_reports.m"
{
#line 383 "autopar_reports.m"
  {
#line 383 "autopar_reports.m"
    MR_bool mdprof_fb__automatic_parallelism__autopar_reports__succeeded;
#line 383 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__2_47;
#line 383 "autopar_reports.m"
    MR_Box mdprof_fb__automatic_parallelism__autopar_reports__conv0_HeadVar__2_47;

#line 383 "autopar_reports.m"
    {
#line 383 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__conv0_HeadVar__2_47 = mercury__std_util__id_1_f_0((MR_Word) &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0, ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__1_46)));
    }
#line 383 "autopar_reports.m"
    mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__2_47 = ((MR_Word) mdprof_fb__automatic_parallelism__autopar_reports__conv0_HeadVar__2_47);
#line 383 "autopar_reports.m"
    return mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__2_47;
#line 383 "autopar_reports.m"
  }
#line 383 "autopar_reports.m"
}

#line 335 "autopar_reports.m"
static MR_Float MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__IntroducedFrom__func__format_parallel_conjuncts__335__1_2_f_0(
#line 335 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__1_43,
#line 335 "autopar_reports.m"
  MR_Float mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__2_44)
#line 335 "autopar_reports.m"
{
#line 335 "autopar_reports.m"
  {
#line 335 "autopar_reports.m"
    MR_bool mdprof_fb__automatic_parallelism__autopar_reports__succeeded;
#line 335 "autopar_reports.m"
    MR_Float mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__3_45;
#line 335 "autopar_reports.m"
    MR_Float mdprof_fb__automatic_parallelism__autopar_reports__V_46_46;
#line 335 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__1_43, (MR_Integer) 2)));
#line 337 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__1_43, (MR_Integer) 0)));
#line 337 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__1_43, (MR_Integer) 1)));
#line 337 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_70_70;
#line 337 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_71_71;
#line 337 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_72_72;

#line 337 "autopar_reports.m"
    mdprof_fb__automatic_parallelism__autopar_reports__V_46_46 = MR_unbox_float((MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__V_47_47, (MR_Integer) 0)));
#line 337 "autopar_reports.m"
    mdprof_fb__automatic_parallelism__autopar_reports__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__V_47_47, (MR_Integer) 1)));
#line 337 "autopar_reports.m"
    mdprof_fb__automatic_parallelism__autopar_reports__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__V_47_47, (MR_Integer) 2)));
#line 337 "autopar_reports.m"
    mdprof_fb__automatic_parallelism__autopar_reports__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__V_47_47, (MR_Integer) 3)));
#line 335 "autopar_reports.m"
    mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__3_45 = (mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__2_44 + mdprof_fb__automatic_parallelism__autopar_reports__V_46_46);
#line 335 "autopar_reports.m"
    return mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__3_45;
#line 335 "autopar_reports.m"
  }
#line 335 "autopar_reports.m"
}

#line 331 "autopar_reports.m"
static MR_Word MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__IntroducedFrom__func__format_parallel_conjuncts__331__1_1_f_0(
#line 331 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__1_74)
#line 331 "autopar_reports.m"
{
#line 331 "autopar_reports.m"
  {
#line 331 "autopar_reports.m"
    MR_bool mdprof_fb__automatic_parallelism__autopar_reports__succeeded;
#line 331 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__2_75;
#line 331 "autopar_reports.m"
    MR_Box mdprof_fb__automatic_parallelism__autopar_reports__conv0_HeadVar__2_75;

#line 331 "autopar_reports.m"
    {
#line 331 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__conv0_HeadVar__2_75 = mercury__std_util__id_1_f_0((MR_Word) &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0, ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__1_74)));
    }
#line 331 "autopar_reports.m"
    mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__2_75 = ((MR_Word) mdprof_fb__automatic_parallelism__autopar_reports__conv0_HeadVar__2_75);
#line 331 "autopar_reports.m"
    return mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__2_75;
#line 331 "autopar_reports.m"
  }
#line 331 "autopar_reports.m"
}

#line 189 "autopar_reports.m"
static MR_String MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__IntroducedFrom__func__create_push_goal_report__189__1_1_f_0(
#line 189 "autopar_reports.m"
  MR_String mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__1_21)
#line 189 "autopar_reports.m"
{
#line 189 "autopar_reports.m"
  {
#line 189 "autopar_reports.m"
    MR_bool mdprof_fb__automatic_parallelism__autopar_reports__succeeded;
#line 189 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__2_22;
#line 189 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_24_24;
#line 189 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_25_25;

#line 191 "autopar_reports.m"
    {
#line 191 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_25_25 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 191 "autopar_reports.m"
      MR_hl_field(MR_mktag(2), mdprof_fb__automatic_parallelism__autopar_reports__V_25_25, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__1_21));
#line 191 "autopar_reports.m"
    }
#line 191 "autopar_reports.m"
    {
#line 191 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 191 "autopar_reports.m"
      MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__V_24_24, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__V_25_25));
#line 191 "autopar_reports.m"
      MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 191 "autopar_reports.m"
    }
#line 189 "autopar_reports.m"
    {
#line 189 "autopar_reports.m"
      return mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__2_22 = mercury__string__format_2_f_0((MR_String) "        %s\n", mdprof_fb__automatic_parallelism__autopar_reports__V_24_24);
    }
#line 189 "autopar_reports.m"
    return mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__2_22;
#line 189 "autopar_reports.m"
  }
#line 189 "autopar_reports.m"
}

#line 84 "autopar_reports.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__IntroducedFrom__pred__create_feedback_autopar_report__84__1_3_p_0(
#line 84 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__1_100,
#line 84 "autopar_reports.m"
  MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__2_101,
#line 84 "autopar_reports.m"
  MR_Integer * mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__3_102)
#line 84 "autopar_reports.m"
{
#line 84 "autopar_reports.m"
  {
#line 84 "autopar_reports.m"
    MR_bool mdprof_fb__automatic_parallelism__autopar_reports__succeeded;

#line 84 "autopar_reports.m"
    {
#line 84 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_99_111_110_106_117_110_99_116_105_111_110_115_95_105_110_95_112_114_111_99_115_95_95_91_49_93_95_48_3_p_0(mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__1_100, mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__2_101, mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__3_102);
#line 84 "autopar_reports.m"
      return;
    }
#line 84 "autopar_reports.m"
  }
#line 84 "autopar_reports.m"
}

#line 233 "autopar_reports.m"
static MR_String MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__IntroducedFrom__func__create_candidate_parallel_conj_report__233__1_1_f_0(
#line 233 "autopar_reports.m"
  MR_String mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__1_76)
#line 233 "autopar_reports.m"
{
#line 233 "autopar_reports.m"
  {
#line 233 "autopar_reports.m"
    MR_bool mdprof_fb__automatic_parallelism__autopar_reports__succeeded;
#line 233 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__2_77;
#line 233 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_79_79;
#line 233 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_80_80;

#line 235 "autopar_reports.m"
    {
#line 235 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_80_80 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 235 "autopar_reports.m"
      MR_hl_field(MR_mktag(2), mdprof_fb__automatic_parallelism__autopar_reports__V_80_80, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__1_76));
#line 235 "autopar_reports.m"
    }
#line 235 "autopar_reports.m"
    {
#line 235 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 235 "autopar_reports.m"
      MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__V_79_79, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__V_80_80));
#line 235 "autopar_reports.m"
      MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__V_79_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 235 "autopar_reports.m"
    }
#line 233 "autopar_reports.m"
    {
#line 233 "autopar_reports.m"
      return mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__2_77 = mercury__string__format_2_f_0((MR_String) "                %s\n", mdprof_fb__automatic_parallelism__autopar_reports__V_79_79);
    }
#line 233 "autopar_reports.m"
    return mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__2_77;
#line 233 "autopar_reports.m"
  }
#line 233 "autopar_reports.m"
}

#line 435 "autopar_reports.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_p_0_2(
#line 435 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure_arg,
#line 435 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1,
#line 435 "autopar_reports.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2)
#line 435 "autopar_reports.m"
{
#line 435 "autopar_reports.m"
  {
#line 435 "autopar_reports.m"
    MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure = mdprof_fb__automatic_parallelism__autopar_reports__closure_arg;
#line 435 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__conv1_HeadVar__3_3;

#line 435 "autopar_reports.m"
    {
#line 435 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__format_var_use_line_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__closure, (MR_Integer) 3))), ((MR_Word) mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1), &mdprof_fb__automatic_parallelism__autopar_reports__conv1_HeadVar__3_3);
    }
#line 435 "autopar_reports.m"
    *mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2 = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__conv1_HeadVar__3_3));
#line 435 "autopar_reports.m"
  }
#line 435 "autopar_reports.m"
}

#line 435 "autopar_reports.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_p_0_1(
#line 435 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure_arg,
#line 435 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1,
#line 435 "autopar_reports.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2)
#line 435 "autopar_reports.m"
{
#line 435 "autopar_reports.m"
  {
#line 435 "autopar_reports.m"
    MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure = mdprof_fb__automatic_parallelism__autopar_reports__closure_arg;
#line 435 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__conv0_HeadVar__3_3;

#line 435 "autopar_reports.m"
    {
#line 435 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__format_var_use_line_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__closure, (MR_Integer) 3))), ((MR_Word) mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1), &mdprof_fb__automatic_parallelism__autopar_reports__conv0_HeadVar__3_3);
    }
#line 435 "autopar_reports.m"
    *mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2 = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__conv0_HeadVar__3_3));
#line 435 "autopar_reports.m"
  }
#line 435 "autopar_reports.m"
}

#line 397 "autopar_reports.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_p_0(
#line 397 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__1_1,
#line 397 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__2_2,
#line 397 "autopar_reports.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__3_3)
#line 397 "autopar_reports.m"
{
#line 403 "autopar_reports.m"
  {
#line 403 "autopar_reports.m"
    MR_bool mdprof_fb__automatic_parallelism__autopar_reports__succeeded;
#line 403 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__TypeInfo_28_28;
#line 403 "autopar_reports.m"
    MR_Float mdprof_fb__automatic_parallelism__autopar_reports__CostPercall_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__2_2, (MR_Integer) 0)));
#line 403 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__CostAboveThreshold_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__2_2, (MR_Integer) 1)));
#line 403 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__Productions_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__2_2, (MR_Integer) 2)));
#line 403 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__Consumptions_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__2_2, (MR_Integer) 3)));
#line 403 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__CostAboveThresholdStr_11;
#line 403 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__CostLine_12;
#line 403 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__ProductionsReport_13;
#line 403 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__ConsumptionsReport_14;
#line 403 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_15_15;
#line 403 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_19_19;
#line 403 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_25_25;
#line 403 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_26_26;
#line 403 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_30_30;
#line 403 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_32_32;
#line 403 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_33_33;

#line 409 "autopar_reports.m"
    if ((mdprof_fb__automatic_parallelism__autopar_reports__CostAboveThreshold_8 == (MR_Integer) 0))
#line 408 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__CostAboveThresholdStr_11 = (MR_String) "above threshold";
#line 409 "autopar_reports.m"
    else
#line 411 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__CostAboveThresholdStr_11 = (MR_String) "not above threshold";
#line 414 "autopar_reports.m"
    {
#line 414 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_19_19 = measurement_units__two_decimal_fraction_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__CostPercall_7);
    }
#line 1154 "mdprof_fb.automatic_parallelism.autopar_reports.c"
    {
#line 1156 "mdprof_fb.automatic_parallelism.autopar_reports.c"
      mdprof_fb__automatic_parallelism__autopar_reports__V_30_30 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__CostAboveThresholdStr_11, (MR_String) ")");
    }
#line 1159 "mdprof_fb.automatic_parallelism.autopar_reports.c"
    {
#line 1161 "mdprof_fb.automatic_parallelism.autopar_reports.c"
      mdprof_fb__automatic_parallelism__autopar_reports__V_32_32 = mercury__string__f_43_43_2_f_0((MR_String) " (", mdprof_fb__automatic_parallelism__autopar_reports__V_30_30);
    }
#line 1164 "mdprof_fb.automatic_parallelism.autopar_reports.c"
    {
#line 1166 "mdprof_fb.automatic_parallelism.autopar_reports.c"
      mdprof_fb__automatic_parallelism__autopar_reports__V_33_33 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_19_19, mdprof_fb__automatic_parallelism__autopar_reports__V_32_32);
    }
#line 1169 "mdprof_fb.automatic_parallelism.autopar_reports.c"
    {
#line 1171 "mdprof_fb.automatic_parallelism.autopar_reports.c"
      mdprof_fb__automatic_parallelism__autopar_reports__V_15_15 = mercury__string__f_43_43_2_f_0((MR_String) "cost: ", mdprof_fb__automatic_parallelism__autopar_reports__V_33_33);
    }
#line 413 "autopar_reports.m"
    {
#line 413 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__CostLine_12 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__V_15_15)));
    }
#line 434 "autopar_reports.m"
    if ((mdprof_fb__automatic_parallelism__autopar_reports__Productions_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 438 "autopar_reports.m"
      {
#line 439 "autopar_reports.m"
        {
#line 439 "autopar_reports.m"
          mdprof_fb__automatic_parallelism__autopar_reports__ProductionsReport_13 = mercury__cord__empty_0_f_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_1[2]);
        }
#line 438 "autopar_reports.m"
      }
#line 434 "autopar_reports.m"
    else
#line 434 "autopar_reports.m"
      {
#line 434 "autopar_reports.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__TypeInfo_21_51;
#line 434 "autopar_reports.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__Lines_41;
#line 434 "autopar_reports.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_42_42;
#line 434 "autopar_reports.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_43_43;
#line 434 "autopar_reports.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_44_44;
#line 434 "autopar_reports.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_47_47;

#line 435 "autopar_reports.m"
        {
#line 435 "autopar_reports.m"
          mdprof_fb__automatic_parallelism__autopar_reports__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 435 "autopar_reports.m"
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__V_42_42, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_4[4]));
#line 435 "autopar_reports.m"
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__V_42_42, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_p_0_1));
#line 435 "autopar_reports.m"
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__V_42_42, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 435 "autopar_reports.m"
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__V_42_42, 3) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__1_1));
#line 435 "autopar_reports.m"
        }
#line 1221 "mdprof_fb.automatic_parallelism.autopar_reports.c"
        mdprof_fb__automatic_parallelism__autopar_reports__TypeInfo_21_51 = (MR_Word) &mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_1[2];
#line 435 "autopar_reports.m"
        {
#line 435 "autopar_reports.m"
          mercury__list__map_3_p_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_2[1], mdprof_fb__automatic_parallelism__autopar_reports__TypeInfo_21_51, mdprof_fb__automatic_parallelism__autopar_reports__V_42_42, mdprof_fb__automatic_parallelism__autopar_reports__Productions_9, &mdprof_fb__automatic_parallelism__autopar_reports__Lines_41);
        }
#line 436 "autopar_reports.m"
        {
#line 436 "autopar_reports.m"
          mdprof_fb__automatic_parallelism__autopar_reports__V_44_44 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "Productions:")));
        }
#line 436 "autopar_reports.m"
        {
#line 436 "autopar_reports.m"
          mdprof_fb__automatic_parallelism__autopar_reports__V_43_43 = mercury__cord__singleton_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeInfo_21_51, ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__V_44_44)));
        }
#line 436 "autopar_reports.m"
        {
#line 436 "autopar_reports.m"
          mdprof_fb__automatic_parallelism__autopar_reports__V_47_47 = mercury__cord__from_list_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeInfo_21_51, mdprof_fb__automatic_parallelism__autopar_reports__Lines_41);
        }
#line 436 "autopar_reports.m"
        {
#line 436 "autopar_reports.m"
          mdprof_fb__automatic_parallelism__autopar_reports__ProductionsReport_13 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeInfo_21_51, mdprof_fb__automatic_parallelism__autopar_reports__V_43_43, mdprof_fb__automatic_parallelism__autopar_reports__V_47_47);
        }
#line 434 "autopar_reports.m"
      }
#line 434 "autopar_reports.m"
    if ((mdprof_fb__automatic_parallelism__autopar_reports__Consumptions_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 438 "autopar_reports.m"
      {
#line 439 "autopar_reports.m"
        {
#line 439 "autopar_reports.m"
          mdprof_fb__automatic_parallelism__autopar_reports__ConsumptionsReport_14 = mercury__cord__empty_0_f_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_1[2]);
        }
#line 438 "autopar_reports.m"
      }
#line 434 "autopar_reports.m"
    else
#line 434 "autopar_reports.m"
      {
#line 434 "autopar_reports.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__TypeInfo_21_70;
#line 434 "autopar_reports.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__Lines_60;
#line 434 "autopar_reports.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_61_61;
#line 434 "autopar_reports.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_62_62;
#line 434 "autopar_reports.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_63_63;
#line 434 "autopar_reports.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_66_66;

#line 435 "autopar_reports.m"
        {
#line 435 "autopar_reports.m"
          mdprof_fb__automatic_parallelism__autopar_reports__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 435 "autopar_reports.m"
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__V_61_61, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_4[4]));
#line 435 "autopar_reports.m"
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__V_61_61, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_p_0_2));
#line 435 "autopar_reports.m"
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__V_61_61, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 435 "autopar_reports.m"
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__V_61_61, 3) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__1_1));
#line 435 "autopar_reports.m"
        }
#line 1292 "mdprof_fb.automatic_parallelism.autopar_reports.c"
        mdprof_fb__automatic_parallelism__autopar_reports__TypeInfo_21_70 = (MR_Word) &mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_1[2];
#line 435 "autopar_reports.m"
        {
#line 435 "autopar_reports.m"
          mercury__list__map_3_p_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_2[1], mdprof_fb__automatic_parallelism__autopar_reports__TypeInfo_21_70, mdprof_fb__automatic_parallelism__autopar_reports__V_61_61, mdprof_fb__automatic_parallelism__autopar_reports__Consumptions_10, &mdprof_fb__automatic_parallelism__autopar_reports__Lines_60);
        }
#line 436 "autopar_reports.m"
        {
#line 436 "autopar_reports.m"
          mdprof_fb__automatic_parallelism__autopar_reports__V_63_63 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "Consumptions:")));
        }
#line 436 "autopar_reports.m"
        {
#line 436 "autopar_reports.m"
          mdprof_fb__automatic_parallelism__autopar_reports__V_62_62 = mercury__cord__singleton_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeInfo_21_70, ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__V_63_63)));
        }
#line 436 "autopar_reports.m"
        {
#line 436 "autopar_reports.m"
          mdprof_fb__automatic_parallelism__autopar_reports__V_66_66 = mercury__cord__from_list_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeInfo_21_70, mdprof_fb__automatic_parallelism__autopar_reports__Lines_60);
        }
#line 436 "autopar_reports.m"
        {
#line 436 "autopar_reports.m"
          mdprof_fb__automatic_parallelism__autopar_reports__ConsumptionsReport_14 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeInfo_21_70, mdprof_fb__automatic_parallelism__autopar_reports__V_62_62, mdprof_fb__automatic_parallelism__autopar_reports__V_66_66);
        }
#line 434 "autopar_reports.m"
      }
#line 1321 "mdprof_fb.automatic_parallelism.autopar_reports.c"
    mdprof_fb__automatic_parallelism__autopar_reports__TypeInfo_28_28 = (MR_Word) &mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_1[2];
#line 419 "autopar_reports.m"
    {
#line 419 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_25_25 = mercury__cord__singleton_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeInfo_28_28, ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__CostLine_12)));
    }
#line 419 "autopar_reports.m"
    {
#line 419 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_26_26 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeInfo_28_28, mdprof_fb__automatic_parallelism__autopar_reports__ProductionsReport_13, mdprof_fb__automatic_parallelism__autopar_reports__ConsumptionsReport_14);
    }
#line 419 "autopar_reports.m"
    {
#line 419 "autopar_reports.m"
      *mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__3_3 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeInfo_28_28, mdprof_fb__automatic_parallelism__autopar_reports__V_25_25, mdprof_fb__automatic_parallelism__autopar_reports__V_26_26);
    }
#line 403 "autopar_reports.m"
  }
#line 397 "autopar_reports.m"
}

#line 442 "autopar_reports.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__format_var_use_line_3_p_0(
#line 442 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__VarNameTable_4,
#line 442 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__2_2,
#line 442 "autopar_reports.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__3_3)
#line 442 "autopar_reports.m"
{
#line 445 "autopar_reports.m"
  {
#line 445 "autopar_reports.m"
    MR_bool mdprof_fb__automatic_parallelism__autopar_reports__succeeded;
#line 445 "autopar_reports.m"
    MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__Var_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__2_2, (MR_Integer) 0)));
#line 445 "autopar_reports.m"
    MR_Float mdprof_fb__automatic_parallelism__autopar_reports__Use_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__2_2, (MR_Integer) 1)));
#line 445 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__String_7;
#line 445 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__VarName_8;
#line 445 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_14_14;
#line 445 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_18_18;
#line 445 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_19_19;

#line 446 "autopar_reports.m"
    {
#line 446 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_14_14 = measurement_units__two_decimal_fraction_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__Use_6);
    }
#line 447 "autopar_reports.m"
    {
#line 447 "autopar_reports.m"
      mdbcomp__program_representation__lookup_var_name_3_p_0(mdprof_fb__automatic_parallelism__autopar_reports__VarNameTable_4, mdprof_fb__automatic_parallelism__autopar_reports__Var_5, &mdprof_fb__automatic_parallelism__autopar_reports__VarName_8);
    }
#line 1383 "mdprof_fb.automatic_parallelism.autopar_reports.c"
    {
#line 1385 "mdprof_fb.automatic_parallelism.autopar_reports.c"
      mdprof_fb__automatic_parallelism__autopar_reports__V_18_18 = mercury__string__f_43_43_2_f_0((MR_String) ": ", mdprof_fb__automatic_parallelism__autopar_reports__V_14_14);
    }
#line 1388 "mdprof_fb.automatic_parallelism.autopar_reports.c"
    {
#line 1390 "mdprof_fb.automatic_parallelism.autopar_reports.c"
      mdprof_fb__automatic_parallelism__autopar_reports__V_19_19 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__VarName_8, mdprof_fb__automatic_parallelism__autopar_reports__V_18_18);
    }
#line 1393 "mdprof_fb.automatic_parallelism.autopar_reports.c"
    {
#line 1395 "mdprof_fb.automatic_parallelism.autopar_reports.c"
      mdprof_fb__automatic_parallelism__autopar_reports__String_7 = mercury__string__f_43_43_2_f_0((MR_String) "    ", mdprof_fb__automatic_parallelism__autopar_reports__V_19_19);
    }
#line 445 "autopar_reports.m"
    {
#line 445 "autopar_reports.m"
      *mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__3_3 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__String_7)));
    }
#line 445 "autopar_reports.m"
  }
#line 442 "autopar_reports.m"
}

#line 383 "autopar_reports.m"
static MR_Box MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjuncts_8_p_0_1(
#line 383 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure_arg,
#line 383 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1)
#line 383 "autopar_reports.m"
{
#line 383 "autopar_reports.m"
  {
#line 383 "autopar_reports.m"
    MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2;
#line 383 "autopar_reports.m"
    MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure = mdprof_fb__automatic_parallelism__autopar_reports__closure_arg;
#line 383 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__conv0_HeadVar__2_47;

#line 383 "autopar_reports.m"
    {
#line 383 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__conv0_HeadVar__2_47 = mdprof_fb__automatic_parallelism__autopar_reports__IntroducedFrom__func__format_sequential_conjuncts__383__1_1_f_0(((MR_Word) mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1));
    }
#line 383 "autopar_reports.m"
    mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2 = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__conv0_HeadVar__2_47));
#line 383 "autopar_reports.m"
    return mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2;
#line 383 "autopar_reports.m"
  }
#line 383 "autopar_reports.m"
}

#line 376 "autopar_reports.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjuncts_8_p_0(
#line 376 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__VarNameTable_1,
#line 376 "autopar_reports.m"
  MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__Indent_2,
#line 376 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__RevGoalPath_3,
#line 376 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__4_4,
#line 376 "autopar_reports.m"
  MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_ConjNum_0_5,
#line 376 "autopar_reports.m"
  MR_Integer * mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_ConjNum_6,
#line 376 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_0_7,
#line 376 "autopar_reports.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_8)
#line 376 "autopar_reports.m"
{
#line 380 "autopar_reports.m"
  while (MR_TRUE)
#line 380 "autopar_reports.m"
    {
#line 380 "autopar_reports.m"
      /* tailcall optimized into a loop */
#line 380 "autopar_reports.m"
      {
#line 380 "autopar_reports.m"
        MR_bool mdprof_fb__automatic_parallelism__autopar_reports__succeeded;

#line 380 "autopar_reports.m"
        if ((mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 380 "autopar_reports.m"
          {
#line 380 "autopar_reports.m"
            *mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_8 = mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_0_7;
#line 380 "autopar_reports.m"
            *mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_ConjNum_6 = mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_ConjNum_0_5;
#line 380 "autopar_reports.m"
          }
#line 380 "autopar_reports.m"
        else
#line 382 "autopar_reports.m"
          {
#line 382 "autopar_reports.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_51_51;
#line 382 "autopar_reports.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_reports__Conj_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__4_4, (MR_Integer) 0)));
#line 382 "autopar_reports.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_reports__Conjs_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__4_4, (MR_Integer) 1)));
#line 382 "autopar_reports.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_reports__ConjReport_25;
#line 382 "autopar_reports.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_32_32;
#line 382 "autopar_reports.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_33_33;
#line 382 "autopar_reports.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_35_35;
#line 382 "autopar_reports.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_36_36;
#line 382 "autopar_reports.m"
            MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_ConjNum_37_37;

#line 383 "autopar_reports.m"
            {
#line 383 "autopar_reports.m"
              mdprof_fb__automatic_parallelism__autopar_reports__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 383 "autopar_reports.m"
              MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__V_32_32, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_2[10]));
#line 383 "autopar_reports.m"
              MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__V_32_32, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__VarNameTable_1));
#line 383 "autopar_reports.m"
            }
#line 384 "autopar_reports.m"
            {
#line 384 "autopar_reports.m"
              mdprof_fb__automatic_parallelism__autopar_reports__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 384 "autopar_reports.m"
              MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__V_35_35, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_ConjNum_0_5));
#line 384 "autopar_reports.m"
            }
#line 383 "autopar_reports.m"
            {
#line 383 "autopar_reports.m"
              mdprof_fb__automatic_parallelism__autopar_reports__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 383 "autopar_reports.m"
              MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__V_33_33, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__RevGoalPath_3));
#line 383 "autopar_reports.m"
              MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__V_33_33, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__V_35_35));
#line 383 "autopar_reports.m"
            }
#line 383 "autopar_reports.m"
            {
#line 383 "autopar_reports.m"
              program_representation_utils__print_goal_to_strings_5_p_0((MR_Word) &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0, (MR_Word) &mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_1[4], mdprof_fb__automatic_parallelism__autopar_reports__V_32_32, mdprof_fb__automatic_parallelism__autopar_reports__Indent_2, mdprof_fb__automatic_parallelism__autopar_reports__V_33_33, mdprof_fb__automatic_parallelism__autopar_reports__Conj_21, &mdprof_fb__automatic_parallelism__autopar_reports__ConjReport_25);
            }
#line 1538 "mdprof_fb.automatic_parallelism.autopar_reports.c"
            mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_51_51 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 385 "autopar_reports.m"
            {
#line 385 "autopar_reports.m"
              mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_36_36 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_51_51, mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_0_7, mdprof_fb__automatic_parallelism__autopar_reports__ConjReport_25);
            }
#line 386 "autopar_reports.m"
            mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_ConjNum_37_37 = (mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_ConjNum_0_5 + (MR_Integer) 1);
#line 389 "autopar_reports.m"
            if ((mdprof_fb__automatic_parallelism__autopar_reports__Conjs_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 388 "autopar_reports.m"
              {
#line 388 "autopar_reports.m"
                *mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_ConjNum_6 = mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_ConjNum_37_37;
#line 388 "autopar_reports.m"
                *mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_8 = mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_36_36;
#line 388 "autopar_reports.m"
              }
#line 389 "autopar_reports.m"
            else
#line 390 "autopar_reports.m"
              {
#line 390 "autopar_reports.m"
                MR_Word mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_39_39;
#line 390 "autopar_reports.m"
                MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_40_40;
#line 390 "autopar_reports.m"
                MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_41_41;
#line 390 "autopar_reports.m"
                MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_42_42;

#line 391 "autopar_reports.m"
                {
#line 391 "autopar_reports.m"
                  mdprof_fb__automatic_parallelism__autopar_reports__V_41_41 = message__indent_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__Indent_2);
                }
#line 391 "autopar_reports.m"
                {
#line 391 "autopar_reports.m"
                  mdprof_fb__automatic_parallelism__autopar_reports__V_42_42 = mercury__cord__singleton_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_51_51, ((MR_Box) ((MR_String) ",\n")));
                }
#line 391 "autopar_reports.m"
                {
#line 391 "autopar_reports.m"
                  mdprof_fb__automatic_parallelism__autopar_reports__V_40_40 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_51_51, mdprof_fb__automatic_parallelism__autopar_reports__V_41_41, mdprof_fb__automatic_parallelism__autopar_reports__V_42_42);
                }
#line 391 "autopar_reports.m"
                {
#line 391 "autopar_reports.m"
                  mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_39_39 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_51_51, mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_36_36, mdprof_fb__automatic_parallelism__autopar_reports__V_40_40);
                }
#line 392 "autopar_reports.m"
                /* direct tailcall eliminated */
#line 392 "autopar_reports.m"
                {
#line 392 "autopar_reports.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__4__tmp_copy_4 = mdprof_fb__automatic_parallelism__autopar_reports__Conjs_22;
#line 392 "autopar_reports.m"
                  MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_ConjNum_0__tmp_copy_5 = mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_ConjNum_37_37;
#line 392 "autopar_reports.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_0__tmp_copy_7 = mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_39_39;

#line 392 "autopar_reports.m"
                  mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_0_7 = mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_0__tmp_copy_7;
#line 392 "autopar_reports.m"
                  mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_ConjNum_0_5 = mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_ConjNum_0__tmp_copy_5;
#line 392 "autopar_reports.m"
                  mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__4_4 = mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__4__tmp_copy_4;
#line 392 "autopar_reports.m"
                }
#line 392 "autopar_reports.m"
                continue;
#line 390 "autopar_reports.m"
              }
#line 382 "autopar_reports.m"
          }
#line 380 "autopar_reports.m"
      }
#line 380 "autopar_reports.m"
      break;
#line 380 "autopar_reports.m"
    }
#line 376 "autopar_reports.m"
}

#line 354 "autopar_reports.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjunction_7_p_0(
#line 354 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__VarNameTable_8,
#line 354 "autopar_reports.m"
  MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__Indent_9,
#line 354 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__RevGoalPath_10,
#line 354 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__Goals_11,
#line 354 "autopar_reports.m"
  MR_Float mdprof_fb__automatic_parallelism__autopar_reports__Cost_12,
#line 354 "autopar_reports.m"
  MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__FirstConjNum_13,
#line 354 "autopar_reports.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_16)
#line 354 "autopar_reports.m"
{
#line 359 "autopar_reports.m"
  {
#line 359 "autopar_reports.m"
    MR_bool mdprof_fb__automatic_parallelism__autopar_reports__succeeded;
#line 359 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_43_43 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 359 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_17_17;
#line 359 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_18_18;
#line 373 "autopar_reports.m"
    MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__V_15_15;

#line 360 "autopar_reports.m"
    {
#line 360 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_17_17 = mercury__cord__empty_0_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_43_43);
    }
#line 361 "autopar_reports.m"
    mdprof_fb__automatic_parallelism__autopar_reports__succeeded = (mdprof_fb__automatic_parallelism__autopar_reports__FirstConjNum_13 == (MR_Integer) 1);
#line 370 "autopar_reports.m"
    if (mdprof_fb__automatic_parallelism__autopar_reports__succeeded)
#line 362 "autopar_reports.m"
      {
#line 362 "autopar_reports.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_19_19;
#line 362 "autopar_reports.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_20_20;
#line 362 "autopar_reports.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_21_21;
#line 362 "autopar_reports.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_22_22;
#line 362 "autopar_reports.m"
        MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_23_23;
#line 362 "autopar_reports.m"
        MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_27_27;
#line 362 "autopar_reports.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_29_29;
#line 362 "autopar_reports.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_30_30;
#line 362 "autopar_reports.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_31_31;
#line 362 "autopar_reports.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_32_32;
#line 362 "autopar_reports.m"
        MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_33_33;
#line 362 "autopar_reports.m"
        MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_37_37;
#line 362 "autopar_reports.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_39_39;
#line 362 "autopar_reports.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_40_40;
#line 362 "autopar_reports.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_41_41;

#line 363 "autopar_reports.m"
        {
#line 363 "autopar_reports.m"
          mdprof_fb__automatic_parallelism__autopar_reports__V_20_20 = message__indent_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__Indent_9);
        }
#line 365 "autopar_reports.m"
        {
#line 365 "autopar_reports.m"
          mdprof_fb__automatic_parallelism__autopar_reports__V_27_27 = mdbcomp__goal_path__rev_goal_path_to_string_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__RevGoalPath_10);
        }
#line 1708 "mdprof_fb.automatic_parallelism.autopar_reports.c"
        {
#line 1710 "mdprof_fb.automatic_parallelism.autopar_reports.c"
          mdprof_fb__automatic_parallelism__autopar_reports__V_23_23 = mercury__string__f_43_43_2_f_0((MR_String) "% conjunction: ", mdprof_fb__automatic_parallelism__autopar_reports__V_27_27);
        }
#line 365 "autopar_reports.m"
        {
#line 365 "autopar_reports.m"
          mdprof_fb__automatic_parallelism__autopar_reports__V_22_22 = mercury__cord__singleton_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_43_43, ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__V_23_23)));
        }
#line 366 "autopar_reports.m"
        {
#line 366 "autopar_reports.m"
          mdprof_fb__automatic_parallelism__autopar_reports__V_30_30 = message__nl_indent_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__Indent_9);
        }
#line 368 "autopar_reports.m"
        {
#line 368 "autopar_reports.m"
          mdprof_fb__automatic_parallelism__autopar_reports__V_37_37 = measurement_units__two_decimal_fraction_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__Cost_12);
        }
#line 1728 "mdprof_fb.automatic_parallelism.autopar_reports.c"
        {
#line 1730 "mdprof_fb.automatic_parallelism.autopar_reports.c"
          mdprof_fb__automatic_parallelism__autopar_reports__V_33_33 = mercury__string__f_43_43_2_f_0((MR_String) "% Cost: ", mdprof_fb__automatic_parallelism__autopar_reports__V_37_37);
        }
#line 368 "autopar_reports.m"
        {
#line 368 "autopar_reports.m"
          mdprof_fb__automatic_parallelism__autopar_reports__V_32_32 = mercury__cord__singleton_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_43_43, ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__V_33_33)));
        }
#line 369 "autopar_reports.m"
        {
#line 369 "autopar_reports.m"
          mdprof_fb__automatic_parallelism__autopar_reports__V_40_40 = message__nl_0_f_0();
        }
#line 369 "autopar_reports.m"
        {
#line 369 "autopar_reports.m"
          mdprof_fb__automatic_parallelism__autopar_reports__V_41_41 = message__nl_0_f_0();
        }
#line 368 "autopar_reports.m"
        {
#line 368 "autopar_reports.m"
          mdprof_fb__automatic_parallelism__autopar_reports__V_39_39 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_43_43, mdprof_fb__automatic_parallelism__autopar_reports__V_40_40, mdprof_fb__automatic_parallelism__autopar_reports__V_41_41);
        }
#line 366 "autopar_reports.m"
        {
#line 366 "autopar_reports.m"
          mdprof_fb__automatic_parallelism__autopar_reports__V_31_31 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_43_43, mdprof_fb__automatic_parallelism__autopar_reports__V_32_32, mdprof_fb__automatic_parallelism__autopar_reports__V_39_39);
        }
#line 365 "autopar_reports.m"
        {
#line 365 "autopar_reports.m"
          mdprof_fb__automatic_parallelism__autopar_reports__V_29_29 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_43_43, mdprof_fb__automatic_parallelism__autopar_reports__V_30_30, mdprof_fb__automatic_parallelism__autopar_reports__V_31_31);
        }
#line 363 "autopar_reports.m"
        {
#line 363 "autopar_reports.m"
          mdprof_fb__automatic_parallelism__autopar_reports__V_21_21 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_43_43, mdprof_fb__automatic_parallelism__autopar_reports__V_22_22, mdprof_fb__automatic_parallelism__autopar_reports__V_29_29);
        }
#line 362 "autopar_reports.m"
        {
#line 362 "autopar_reports.m"
          mdprof_fb__automatic_parallelism__autopar_reports__V_19_19 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_43_43, mdprof_fb__automatic_parallelism__autopar_reports__V_20_20, mdprof_fb__automatic_parallelism__autopar_reports__V_21_21);
        }
#line 362 "autopar_reports.m"
        {
#line 362 "autopar_reports.m"
          mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_18_18 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_43_43, mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_17_17, mdprof_fb__automatic_parallelism__autopar_reports__V_19_19);
        }
#line 362 "autopar_reports.m"
      }
#line 370 "autopar_reports.m"
    else
#line 369 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_18_18 = mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_17_17;
#line 373 "autopar_reports.m"
    {
#line 373 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjuncts_8_p_0(mdprof_fb__automatic_parallelism__autopar_reports__VarNameTable_8, mdprof_fb__automatic_parallelism__autopar_reports__Indent_9, mdprof_fb__automatic_parallelism__autopar_reports__RevGoalPath_10, mdprof_fb__automatic_parallelism__autopar_reports__Goals_11, mdprof_fb__automatic_parallelism__autopar_reports__FirstConjNum_13, &mdprof_fb__automatic_parallelism__autopar_reports__V_15_15, mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_18_18, mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_16);
    }
#line 359 "autopar_reports.m"
  }
#line 354 "autopar_reports.m"
}

#line 335 "autopar_reports.m"
static MR_Box MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjuncts_7_p_0_2(
#line 335 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure_arg,
#line 335 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1,
#line 335 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2)
#line 335 "autopar_reports.m"
{
#line 335 "autopar_reports.m"
  {
#line 335 "autopar_reports.m"
    MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_3;
#line 335 "autopar_reports.m"
    MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure = mdprof_fb__automatic_parallelism__autopar_reports__closure_arg;
#line 335 "autopar_reports.m"
    MR_Float mdprof_fb__automatic_parallelism__autopar_reports__conv1_HeadVar__3_45;

#line 335 "autopar_reports.m"
    {
#line 335 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__conv1_HeadVar__3_45 = mdprof_fb__automatic_parallelism__autopar_reports__IntroducedFrom__func__format_parallel_conjuncts__335__1_2_f_0(((MR_Word) mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1), MR_unbox_float(mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2));
    }
#line 335 "autopar_reports.m"
    mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_3 = MR_box_float(mdprof_fb__automatic_parallelism__autopar_reports__conv1_HeadVar__3_45);
#line 335 "autopar_reports.m"
    return mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_3;
#line 335 "autopar_reports.m"
  }
#line 335 "autopar_reports.m"
}

#line 331 "autopar_reports.m"
static MR_Box MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjuncts_7_p_0_1(
#line 331 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure_arg,
#line 331 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1)
#line 331 "autopar_reports.m"
{
#line 331 "autopar_reports.m"
  {
#line 331 "autopar_reports.m"
    MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2;
#line 331 "autopar_reports.m"
    MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure = mdprof_fb__automatic_parallelism__autopar_reports__closure_arg;
#line 331 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__conv0_HeadVar__2_75;

#line 331 "autopar_reports.m"
    {
#line 331 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__conv0_HeadVar__2_75 = mdprof_fb__automatic_parallelism__autopar_reports__IntroducedFrom__func__format_parallel_conjuncts__331__1_1_f_0(((MR_Word) mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1));
    }
#line 331 "autopar_reports.m"
    mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2 = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__conv0_HeadVar__2_75));
#line 331 "autopar_reports.m"
    return mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2;
#line 331 "autopar_reports.m"
  }
#line 331 "autopar_reports.m"
}

#line 311 "autopar_reports.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjuncts_7_p_0(
#line 311 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__1_1,
#line 311 "autopar_reports.m"
  MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__Indent_2,
#line 311 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__3_3,
#line 311 "autopar_reports.m"
  MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__4_4,
#line 311 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__5_5,
#line 311 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_0_6,
#line 311 "autopar_reports.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_7)
#line 311 "autopar_reports.m"
{
#line 316 "autopar_reports.m"
  while (MR_TRUE)
#line 316 "autopar_reports.m"
    {
#line 316 "autopar_reports.m"
      /* tailcall optimized into a loop */
#line 316 "autopar_reports.m"
      {
#line 316 "autopar_reports.m"
        MR_bool mdprof_fb__automatic_parallelism__autopar_reports__succeeded;

#line 316 "autopar_reports.m"
        if ((mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 316 "autopar_reports.m"
          {
#line 316 "autopar_reports.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_73_73;
#line 316 "autopar_reports.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_reports__IndentStr_13;
#line 316 "autopar_reports.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_17_17;

#line 317 "autopar_reports.m"
            {
#line 317 "autopar_reports.m"
              mdprof_fb__automatic_parallelism__autopar_reports__IndentStr_13 = message__indent_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__Indent_2);
            }
#line 1906 "mdprof_fb.automatic_parallelism.autopar_reports.c"
            mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_73_73 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 318 "autopar_reports.m"
            {
#line 318 "autopar_reports.m"
              mdprof_fb__automatic_parallelism__autopar_reports__V_17_17 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_73_73, mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_0_6, mdprof_fb__automatic_parallelism__autopar_reports__IndentStr_13);
            }
#line 318 "autopar_reports.m"
            {
#line 318 "autopar_reports.m"
              *mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_7 = mercury__cord__snoc_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_73_73, mdprof_fb__automatic_parallelism__autopar_reports__V_17_17, ((MR_Box) ((MR_String) ")\n")));
            }
#line 316 "autopar_reports.m"
          }
#line 316 "autopar_reports.m"
        else
#line 320 "autopar_reports.m"
          {
#line 320 "autopar_reports.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_81_81;
#line 320 "autopar_reports.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_reports__Conj_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__5_5, (MR_Integer) 0)));
#line 320 "autopar_reports.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_reports__Conjs_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__5_5, (MR_Integer) 1)));
#line 320 "autopar_reports.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_reports__Goals_26 = (MR_Word) mdprof_fb__automatic_parallelism__autopar_reports__Conj_23;
#line 320 "autopar_reports.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_reports__ConjReport_30;
#line 320 "autopar_reports.m"
            MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__ConjNum_38;
#line 320 "autopar_reports.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_59_59;
#line 320 "autopar_reports.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_60_60;

#line 325 "autopar_reports.m"
            if ((mdprof_fb__automatic_parallelism__autopar_reports__Goals_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 323 "autopar_reports.m"
              {
#line 324 "autopar_reports.m"
                {
#line 324 "autopar_reports.m"
                  mercury__require__unexpected_3_p_0((MR_String) "mdprof_fb.automatic_parallelism.autopar_reports", (MR_String) "predicate \140mdprof_fb.automatic_parallelism.autopar_reports.format_parallel_conjuncts\'/7", (MR_String) "empty conjunct in parallel conjunction");
#line 324 "autopar_reports.m"
                  return;
                }
#line 323 "autopar_reports.m"
              }
#line 325 "autopar_reports.m"
            else
#line 326 "autopar_reports.m"
              {
#line 326 "autopar_reports.m"
                MR_Word mdprof_fb__automatic_parallelism__autopar_reports__Goal_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__Goals_26, (MR_Integer) 0)));
#line 326 "autopar_reports.m"
                MR_Word mdprof_fb__automatic_parallelism__autopar_reports__GoalsTail_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__Goals_26, (MR_Integer) 1)));
#line 326 "autopar_reports.m"
                MR_Word mdprof_fb__automatic_parallelism__autopar_reports__RevInnerGoalPath_29;
#line 326 "autopar_reports.m"
                MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_41_41;

#line 327 "autopar_reports.m"
                {
#line 327 "autopar_reports.m"
                  mdprof_fb__automatic_parallelism__autopar_reports__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 327 "autopar_reports.m"
                  MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__V_41_41, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__4_4));
#line 327 "autopar_reports.m"
                }
#line 327 "autopar_reports.m"
                {
#line 327 "autopar_reports.m"
                  mdprof_fb__automatic_parallelism__autopar_reports__RevInnerGoalPath_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 327 "autopar_reports.m"
                  MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__RevInnerGoalPath_29, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__3_3));
#line 327 "autopar_reports.m"
                  MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__RevInnerGoalPath_29, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__V_41_41));
#line 327 "autopar_reports.m"
                }
#line 333 "autopar_reports.m"
                if ((mdprof_fb__automatic_parallelism__autopar_reports__GoalsTail_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 329 "autopar_reports.m"
                  {
#line 329 "autopar_reports.m"
                    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_52_52;
#line 329 "autopar_reports.m"
                    MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__V_53_53;

#line 331 "autopar_reports.m"
                    {
#line 331 "autopar_reports.m"
                      mdprof_fb__automatic_parallelism__autopar_reports__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 331 "autopar_reports.m"
                      MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__V_52_52, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_2[8]));
#line 331 "autopar_reports.m"
                      MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__V_52_52, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__1_1));
#line 331 "autopar_reports.m"
                    }
#line 331 "autopar_reports.m"
                    mdprof_fb__automatic_parallelism__autopar_reports__V_53_53 = (mdprof_fb__automatic_parallelism__autopar_reports__Indent_2 + (MR_Integer) 1);
#line 331 "autopar_reports.m"
                    {
#line 331 "autopar_reports.m"
                      program_representation_utils__print_goal_to_strings_5_p_0((MR_Word) &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0, (MR_Word) &mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_1[4], mdprof_fb__automatic_parallelism__autopar_reports__V_52_52, mdprof_fb__automatic_parallelism__autopar_reports__V_53_53, mdprof_fb__automatic_parallelism__autopar_reports__RevInnerGoalPath_29, mdprof_fb__automatic_parallelism__autopar_reports__Goal_27, &mdprof_fb__automatic_parallelism__autopar_reports__ConjReport_30);
                    }
#line 329 "autopar_reports.m"
                  }
#line 333 "autopar_reports.m"
                else
#line 334 "autopar_reports.m"
                  {
#line 334 "autopar_reports.m"
                    MR_Float mdprof_fb__automatic_parallelism__autopar_reports__Cost_33;
#line 334 "autopar_reports.m"
                    MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__V_49_49;
#line 335 "autopar_reports.m"
                    MR_Box mdprof_fb__automatic_parallelism__autopar_reports__conv2_Cost_33;

#line 335 "autopar_reports.m"
                    {
#line 335 "autopar_reports.m"
                      mdprof_fb__automatic_parallelism__autopar_reports__conv2_Cost_33 = mercury__list__foldl_3_f_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0, (MR_Word) &mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_2[9], mdprof_fb__automatic_parallelism__autopar_reports__Goals_26, MR_box_float((MR_Float) 0.0000000000000000));
                    }
#line 335 "autopar_reports.m"
                    mdprof_fb__automatic_parallelism__autopar_reports__Cost_33 = MR_unbox_float(mdprof_fb__automatic_parallelism__autopar_reports__conv2_Cost_33);
#line 339 "autopar_reports.m"
                    mdprof_fb__automatic_parallelism__autopar_reports__V_49_49 = (mdprof_fb__automatic_parallelism__autopar_reports__Indent_2 + (MR_Integer) 1);
#line 339 "autopar_reports.m"
                    {
#line 339 "autopar_reports.m"
                      mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjunction_7_p_0(mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__1_1, mdprof_fb__automatic_parallelism__autopar_reports__V_49_49, mdprof_fb__automatic_parallelism__autopar_reports__RevInnerGoalPath_29, mdprof_fb__automatic_parallelism__autopar_reports__Goals_26, mdprof_fb__automatic_parallelism__autopar_reports__Cost_33, (MR_Integer) 1, &mdprof_fb__automatic_parallelism__autopar_reports__ConjReport_30);
                    }
#line 334 "autopar_reports.m"
                  }
#line 326 "autopar_reports.m"
              }
#line 2042 "mdprof_fb.automatic_parallelism.autopar_reports.c"
            mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_81_81 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 343 "autopar_reports.m"
            {
#line 343 "autopar_reports.m"
              mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_59_59 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_81_81, mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_0_6, mdprof_fb__automatic_parallelism__autopar_reports__ConjReport_30);
            }
#line 346 "autopar_reports.m"
            if ((mdprof_fb__automatic_parallelism__autopar_reports__Conjs_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 345 "autopar_reports.m"
              mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_60_60 = mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_59_59;
#line 346 "autopar_reports.m"
            else
#line 347 "autopar_reports.m"
              {
#line 347 "autopar_reports.m"
                MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_61_61;
#line 347 "autopar_reports.m"
                MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_62_62;

#line 348 "autopar_reports.m"
                {
#line 348 "autopar_reports.m"
                  mdprof_fb__automatic_parallelism__autopar_reports__V_62_62 = message__indent_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__Indent_2);
                }
#line 348 "autopar_reports.m"
                {
#line 348 "autopar_reports.m"
                  mdprof_fb__automatic_parallelism__autopar_reports__V_61_61 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_81_81, mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_59_59, mdprof_fb__automatic_parallelism__autopar_reports__V_62_62);
                }
#line 348 "autopar_reports.m"
                {
#line 348 "autopar_reports.m"
                  mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_60_60 = mercury__cord__snoc_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_81_81, mdprof_fb__automatic_parallelism__autopar_reports__V_61_61, ((MR_Box) ((MR_String) "&\n")));
                }
#line 347 "autopar_reports.m"
              }
#line 350 "autopar_reports.m"
            mdprof_fb__automatic_parallelism__autopar_reports__ConjNum_38 = (mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__4_4 + (MR_Integer) 1);
#line 351 "autopar_reports.m"
            /* direct tailcall eliminated */
#line 351 "autopar_reports.m"
            {
#line 351 "autopar_reports.m"
              MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__4__tmp_copy_4 = mdprof_fb__automatic_parallelism__autopar_reports__ConjNum_38;
#line 351 "autopar_reports.m"
              MR_Word mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__5__tmp_copy_5 = mdprof_fb__automatic_parallelism__autopar_reports__Conjs_24;
#line 351 "autopar_reports.m"
              MR_Word mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_0__tmp_copy_6 = mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_60_60;

#line 351 "autopar_reports.m"
              mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_0_6 = mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_0__tmp_copy_6;
#line 351 "autopar_reports.m"
              mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__5_5 = mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__5__tmp_copy_5;
#line 351 "autopar_reports.m"
              mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__4_4 = mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__4__tmp_copy_4;
#line 351 "autopar_reports.m"
            }
#line 351 "autopar_reports.m"
            continue;
#line 320 "autopar_reports.m"
          }
#line 316 "autopar_reports.m"
      }
#line 316 "autopar_reports.m"
      break;
#line 316 "autopar_reports.m"
    }
#line 311 "autopar_reports.m"
}

#line 300 "autopar_reports.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjunction_6_p_0(
#line 300 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__VarNameTable_7,
#line 300 "autopar_reports.m"
  MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__Indent_8,
#line 300 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__RevGoalPath_9,
#line 300 "autopar_reports.m"
  MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__ConjNum_10,
#line 300 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__Conjs_11,
#line 300 "autopar_reports.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_14)
#line 300 "autopar_reports.m"
{
#line 305 "autopar_reports.m"
  {
#line 305 "autopar_reports.m"
    MR_bool mdprof_fb__automatic_parallelism__autopar_reports__succeeded;
#line 305 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_22_22;
#line 305 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__IndentStr_13;
#line 305 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_15_15;
#line 305 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_16_16;
#line 305 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_18_18;
#line 305 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_21_21;

#line 306 "autopar_reports.m"
    {
#line 306 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__IndentStr_13 = message__indent_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__Indent_8);
    }
#line 2152 "mdprof_fb.automatic_parallelism.autopar_reports.c"
    mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_22_22 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 307 "autopar_reports.m"
    {
#line 307 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_16_16 = mercury__cord__singleton_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_22_22, ((MR_Box) ((MR_String) "(\n")));
    }
#line 307 "autopar_reports.m"
    {
#line 307 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_15_15 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_22_22, mdprof_fb__automatic_parallelism__autopar_reports__IndentStr_13, mdprof_fb__automatic_parallelism__autopar_reports__V_16_16);
    }
#line 309 "autopar_reports.m"
    {
#line 309 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 309 "autopar_reports.m"
      MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__V_21_21, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__ConjNum_10));
#line 309 "autopar_reports.m"
    }
#line 308 "autopar_reports.m"
    {
#line 308 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 308 "autopar_reports.m"
      MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__V_18_18, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__RevGoalPath_9));
#line 308 "autopar_reports.m"
      MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__V_18_18, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__V_21_21));
#line 308 "autopar_reports.m"
    }
#line 308 "autopar_reports.m"
    {
#line 308 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjuncts_7_p_0(mdprof_fb__automatic_parallelism__autopar_reports__VarNameTable_7, mdprof_fb__automatic_parallelism__autopar_reports__Indent_8, mdprof_fb__automatic_parallelism__autopar_reports__V_18_18, (MR_Integer) 1, mdprof_fb__automatic_parallelism__autopar_reports__Conjs_11, mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_15_15, mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_14);
#line 308 "autopar_reports.m"
      return;
    }
#line 305 "autopar_reports.m"
  }
#line 300 "autopar_reports.m"
}

#line 175 "autopar_reports.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_proc_report_2_p_0_2(
#line 175 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure_arg,
#line 175 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1,
#line 175 "autopar_reports.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2)
#line 175 "autopar_reports.m"
{
#line 175 "autopar_reports.m"
  {
#line 175 "autopar_reports.m"
    MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure = mdprof_fb__automatic_parallelism__autopar_reports__closure_arg;
#line 175 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__conv1_Report_6;

#line 175 "autopar_reports.m"
    {
#line 175 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__closure, (MR_Integer) 3))), ((MR_Word) mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1), &mdprof_fb__automatic_parallelism__autopar_reports__conv1_Report_6);
    }
#line 175 "autopar_reports.m"
    *mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2 = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__conv1_Report_6));
#line 175 "autopar_reports.m"
  }
#line 175 "autopar_reports.m"
}

#line 174 "autopar_reports.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_proc_report_2_p_0_1(
#line 174 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure_arg,
#line 174 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1,
#line 174 "autopar_reports.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2)
#line 174 "autopar_reports.m"
{
#line 174 "autopar_reports.m"
  {
#line 174 "autopar_reports.m"
    MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure = mdprof_fb__automatic_parallelism__autopar_reports__closure_arg;
#line 174 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__conv0_Report_4;

#line 174 "autopar_reports.m"
    {
#line 174 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__create_push_goal_report_2_p_0(((MR_Word) mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1), &mdprof_fb__automatic_parallelism__autopar_reports__conv0_Report_4);
    }
#line 174 "autopar_reports.m"
    *mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2 = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__conv0_Report_4));
#line 174 "autopar_reports.m"
  }
#line 174 "autopar_reports.m"
}

#line 196 "autopar_reports.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_proc_report_2_p_0(
#line 196 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__1_1,
#line 196 "autopar_reports.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_reports__Report_5)
#line 196 "autopar_reports.m"
{
#line 170 "autopar_reports.m"
  {
#line 170 "autopar_reports.m"
    MR_bool mdprof_fb__automatic_parallelism__autopar_reports__succeeded;
#line 170 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__TypeInfo_29_29;
#line 170 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_33_33;
#line 170 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__Proc_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__1_1, (MR_Integer) 0)));
#line 170 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__CandidateParConjunctionProc_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__1_1, (MR_Integer) 1)));
#line 170 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__VarNameTable_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__CandidateParConjunctionProc_4, (MR_Integer) 0)));
#line 170 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__PushGoals_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__CandidateParConjunctionProc_4, (MR_Integer) 1)));
#line 170 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__CandidateParConjunctions_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__CandidateParConjunctionProc_4, (MR_Integer) 2)));
#line 170 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__ProcString_9;
#line 170 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__PushGoalReports_10;
#line 170 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__CandidateParConjunctionReports_11;
#line 170 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__Header_12;
#line 170 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_14_14;
#line 170 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_19_19;
#line 170 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_20_20;
#line 170 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_21_21;
#line 170 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_22_22;
#line 170 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_23_23;
#line 170 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_25_25;
#line 170 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_35_35;

#line 173 "autopar_reports.m"
    {
#line 173 "autopar_reports.m"
      program_representation_utils__print_proc_label_to_string_2_p_0(mdprof_fb__automatic_parallelism__autopar_reports__Proc_3, &mdprof_fb__automatic_parallelism__autopar_reports__ProcString_9);
    }
#line 2311 "mdprof_fb.automatic_parallelism.autopar_reports.c"
    mdprof_fb__automatic_parallelism__autopar_reports__TypeInfo_29_29 = (MR_Word) &mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_1[2];
#line 174 "autopar_reports.m"
    {
#line 174 "autopar_reports.m"
      mercury__list__map_3_p_0((MR_Word) &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_push_goal_0, mdprof_fb__automatic_parallelism__autopar_reports__TypeInfo_29_29, (MR_Word) &mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_2[7], mdprof_fb__automatic_parallelism__autopar_reports__PushGoals_7, &mdprof_fb__automatic_parallelism__autopar_reports__PushGoalReports_10);
    }
#line 175 "autopar_reports.m"
    {
#line 175 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 175 "autopar_reports.m"
      MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__V_14_14, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_4[2]));
#line 175 "autopar_reports.m"
      MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__V_14_14, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_proc_report_2_p_0_2));
#line 175 "autopar_reports.m"
      MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 175 "autopar_reports.m"
      MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__V_14_14, 3) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__VarNameTable_6));
#line 175 "autopar_reports.m"
    }
#line 175 "autopar_reports.m"
    {
#line 175 "autopar_reports.m"
      mercury__list__map_3_p_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_1[3], mdprof_fb__automatic_parallelism__autopar_reports__TypeInfo_29_29, mdprof_fb__automatic_parallelism__autopar_reports__V_14_14, mdprof_fb__automatic_parallelism__autopar_reports__CandidateParConjunctions_8, &mdprof_fb__automatic_parallelism__autopar_reports__CandidateParConjunctionReports_11);
    }
#line 2337 "mdprof_fb.automatic_parallelism.autopar_reports.c"
    {
#line 2339 "mdprof_fb.automatic_parallelism.autopar_reports.c"
      mdprof_fb__automatic_parallelism__autopar_reports__V_35_35 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__ProcString_9, (MR_String) "\n");
    }
#line 2342 "mdprof_fb.automatic_parallelism.autopar_reports.c"
    {
#line 2344 "mdprof_fb.automatic_parallelism.autopar_reports.c"
      mdprof_fb__automatic_parallelism__autopar_reports__Header_12 = mercury__string__f_43_43_2_f_0((MR_String) "    ", mdprof_fb__automatic_parallelism__autopar_reports__V_35_35);
    }
#line 2347 "mdprof_fb.automatic_parallelism.autopar_reports.c"
    mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_33_33 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 178 "autopar_reports.m"
    {
#line 178 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_19_19 = mercury__cord__singleton_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_33_33, ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__Header_12)));
    }
#line 179 "autopar_reports.m"
    {
#line 179 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_21_21 = mercury__cord__cord_list_to_cord_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_33_33, mdprof_fb__automatic_parallelism__autopar_reports__PushGoalReports_10);
    }
#line 180 "autopar_reports.m"
    {
#line 180 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_23_23 = mercury__cord__singleton_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_33_33, ((MR_Box) ((MR_String) "\n")));
    }
#line 180 "autopar_reports.m"
    {
#line 180 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_25_25 = mercury__cord__cord_list_to_cord_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_33_33, mdprof_fb__automatic_parallelism__autopar_reports__CandidateParConjunctionReports_11);
    }
#line 179 "autopar_reports.m"
    {
#line 179 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_22_22 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_33_33, mdprof_fb__automatic_parallelism__autopar_reports__V_23_23, mdprof_fb__automatic_parallelism__autopar_reports__V_25_25);
    }
#line 178 "autopar_reports.m"
    {
#line 178 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_20_20 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_33_33, mdprof_fb__automatic_parallelism__autopar_reports__V_21_21, mdprof_fb__automatic_parallelism__autopar_reports__V_22_22);
    }
#line 178 "autopar_reports.m"
    {
#line 178 "autopar_reports.m"
      *mdprof_fb__automatic_parallelism__autopar_reports__Report_5 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_33_33, mdprof_fb__automatic_parallelism__autopar_reports__V_19_19, mdprof_fb__automatic_parallelism__autopar_reports__V_20_20);
    }
#line 170 "autopar_reports.m"
  }
#line 196 "autopar_reports.m"
}

#line 189 "autopar_reports.m"
static MR_Box MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__create_push_goal_report_2_p_0_1(
#line 189 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure_arg,
#line 189 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1)
#line 189 "autopar_reports.m"
{
#line 189 "autopar_reports.m"
  {
#line 189 "autopar_reports.m"
    MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2;
#line 189 "autopar_reports.m"
    MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure = mdprof_fb__automatic_parallelism__autopar_reports__closure_arg;
#line 189 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__conv0_HeadVar__2_22;

#line 189 "autopar_reports.m"
    {
#line 189 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__conv0_HeadVar__2_22 = mdprof_fb__automatic_parallelism__autopar_reports__IntroducedFrom__func__create_push_goal_report__189__1_1_f_0(((MR_String) mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1));
    }
#line 189 "autopar_reports.m"
    mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2 = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__conv0_HeadVar__2_22));
#line 189 "autopar_reports.m"
    return mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2;
#line 189 "autopar_reports.m"
  }
#line 189 "autopar_reports.m"
}

#line 183 "autopar_reports.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__create_push_goal_report_2_p_0(
#line 183 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__PushGoal_3,
#line 183 "autopar_reports.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_reports__Report_4)
#line 183 "autopar_reports.m"
{
#line 185 "autopar_reports.m"
  {
#line 185 "autopar_reports.m"
    MR_bool mdprof_fb__automatic_parallelism__autopar_reports__succeeded;
#line 185 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_29_29;
#line 185 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__PushGoalPathStr_5 = ((MR_String) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__PushGoal_3, (MR_Integer) 0)));
#line 185 "autopar_reports.m"
    MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__Lo_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__PushGoal_3, (MR_Integer) 1)));
#line 185 "autopar_reports.m"
    MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__Hi_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__PushGoal_3, (MR_Integer) 2)));
#line 185 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__PushedGoalPathStrs_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__PushGoal_3, (MR_Integer) 3)));
#line 185 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__HeadPushGoalStr_9;
#line 185 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__TailPushGoalStrs_12;
#line 185 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_27_27;
#line 185 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_31_31;
#line 185 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_32_32;
#line 185 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_34_34;
#line 185 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_35_35;
#line 185 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_36_36;
#line 185 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_38_38;
#line 185 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_39_39;

#line 2465 "mdprof_fb.automatic_parallelism.autopar_reports.c"
    {
#line 2467 "mdprof_fb.automatic_parallelism.autopar_reports.c"
      mdprof_fb__automatic_parallelism__autopar_reports__V_31_31 = mercury__string__int_to_string_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__Hi_7);
    }
#line 2470 "mdprof_fb.automatic_parallelism.autopar_reports.c"
    {
#line 2472 "mdprof_fb.automatic_parallelism.autopar_reports.c"
      mdprof_fb__automatic_parallelism__autopar_reports__V_32_32 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_31_31, (MR_String) "\n");
    }
#line 2475 "mdprof_fb.automatic_parallelism.autopar_reports.c"
    {
#line 2477 "mdprof_fb.automatic_parallelism.autopar_reports.c"
      mdprof_fb__automatic_parallelism__autopar_reports__V_34_34 = mercury__string__f_43_43_2_f_0((MR_String) ", hi ", mdprof_fb__automatic_parallelism__autopar_reports__V_32_32);
    }
#line 2480 "mdprof_fb.automatic_parallelism.autopar_reports.c"
    {
#line 2482 "mdprof_fb.automatic_parallelism.autopar_reports.c"
      mdprof_fb__automatic_parallelism__autopar_reports__V_35_35 = mercury__string__int_to_string_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__Lo_6);
    }
#line 2485 "mdprof_fb.automatic_parallelism.autopar_reports.c"
    {
#line 2487 "mdprof_fb.automatic_parallelism.autopar_reports.c"
      mdprof_fb__automatic_parallelism__autopar_reports__V_36_36 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_35_35, mdprof_fb__automatic_parallelism__autopar_reports__V_34_34);
    }
#line 2490 "mdprof_fb.automatic_parallelism.autopar_reports.c"
    {
#line 2492 "mdprof_fb.automatic_parallelism.autopar_reports.c"
      mdprof_fb__automatic_parallelism__autopar_reports__V_38_38 = mercury__string__f_43_43_2_f_0((MR_String) ", lo ", mdprof_fb__automatic_parallelism__autopar_reports__V_36_36);
    }
#line 2495 "mdprof_fb.automatic_parallelism.autopar_reports.c"
    {
#line 2497 "mdprof_fb.automatic_parallelism.autopar_reports.c"
      mdprof_fb__automatic_parallelism__autopar_reports__V_39_39 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__PushGoalPathStr_5, mdprof_fb__automatic_parallelism__autopar_reports__V_38_38);
    }
#line 2500 "mdprof_fb.automatic_parallelism.autopar_reports.c"
    {
#line 2502 "mdprof_fb.automatic_parallelism.autopar_reports.c"
      mdprof_fb__automatic_parallelism__autopar_reports__HeadPushGoalStr_9 = mercury__string__f_43_43_2_f_0((MR_String) "\n      PushGoal: ", mdprof_fb__automatic_parallelism__autopar_reports__V_39_39);
    }
#line 2505 "mdprof_fb.automatic_parallelism.autopar_reports.c"
    mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_29_29 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 193 "autopar_reports.m"
    {
#line 193 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__TailPushGoalStrs_12 = mercury__list__map_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_29_29, mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_29_29, (MR_Word) &mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_2[6], mdprof_fb__automatic_parallelism__autopar_reports__PushedGoalPathStrs_8);
    }
#line 194 "autopar_reports.m"
    {
#line 194 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 194 "autopar_reports.m"
      MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__V_27_27, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__HeadPushGoalStr_9));
#line 194 "autopar_reports.m"
      MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__V_27_27, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__TailPushGoalStrs_12));
#line 194 "autopar_reports.m"
    }
#line 194 "autopar_reports.m"
    {
#line 194 "autopar_reports.m"
      *mdprof_fb__automatic_parallelism__autopar_reports__Report_4 = mercury__cord__from_list_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_29_29, mdprof_fb__automatic_parallelism__autopar_reports__V_27_27);
    }
#line 185 "autopar_reports.m"
  }
#line 183 "autopar_reports.m"
}

#line 152 "autopar_reports.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__best_par_algorithm_string_2_p_0(
#line 152 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__Alg_3,
#line 152 "autopar_reports.m"
  MR_String * mdprof_fb__automatic_parallelism__autopar_reports__Str_4)
#line 152 "autopar_reports.m"
{
#line 156 "autopar_reports.m"
  {
#line 156 "autopar_reports.m"
    MR_bool mdprof_fb__automatic_parallelism__autopar_reports__succeeded;

#line 156 "autopar_reports.m"
    if ((mdprof_fb__automatic_parallelism__autopar_reports__Alg_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 166 "autopar_reports.m"
      *mdprof_fb__automatic_parallelism__autopar_reports__Str_4 = (MR_String) "complete";
#line 156 "autopar_reports.m"
    else
#line 156 "autopar_reports.m"
      if ((mdprof_fb__automatic_parallelism__autopar_reports__Alg_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 157 "autopar_reports.m"
        *mdprof_fb__automatic_parallelism__autopar_reports__Str_4 = (MR_String) "greedy";
#line 156 "autopar_reports.m"
      else
#line 156 "autopar_reports.m"
        if (((MR_tag((MR_Word) mdprof_fb__automatic_parallelism__autopar_reports__Alg_3)) == (MR_mktag((MR_Integer) 1))))
#line 159 "autopar_reports.m"
          {
#line 159 "autopar_reports.m"
            MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__N_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__Alg_3, (MR_Integer) 0)));
#line 159 "autopar_reports.m"
            MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_16_16;
#line 159 "autopar_reports.m"
            MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_17_17;

#line 2569 "mdprof_fb.automatic_parallelism.autopar_reports.c"
            {
#line 2571 "mdprof_fb.automatic_parallelism.autopar_reports.c"
              mdprof_fb__automatic_parallelism__autopar_reports__V_16_16 = mercury__string__int_to_string_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__N_5);
            }
#line 2574 "mdprof_fb.automatic_parallelism.autopar_reports.c"
            {
#line 2576 "mdprof_fb.automatic_parallelism.autopar_reports.c"
              mdprof_fb__automatic_parallelism__autopar_reports__V_17_17 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_16_16, (MR_String) ")");
            }
#line 2579 "mdprof_fb.automatic_parallelism.autopar_reports.c"
            {
#line 2581 "mdprof_fb.automatic_parallelism.autopar_reports.c"
              *mdprof_fb__automatic_parallelism__autopar_reports__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "complete-branches(", mdprof_fb__automatic_parallelism__autopar_reports__V_17_17);
            }
#line 159 "autopar_reports.m"
          }
#line 156 "autopar_reports.m"
        else
#line 162 "autopar_reports.m"
          {
#line 162 "autopar_reports.m"
            MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__N_14 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdprof_fb__automatic_parallelism__autopar_reports__Alg_3, (MR_Integer) 0)));
#line 162 "autopar_reports.m"
            MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_20_20;
#line 162 "autopar_reports.m"
            MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_21_21;

#line 2597 "mdprof_fb.automatic_parallelism.autopar_reports.c"
            {
#line 2599 "mdprof_fb.automatic_parallelism.autopar_reports.c"
              mdprof_fb__automatic_parallelism__autopar_reports__V_20_20 = mercury__string__int_to_string_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__N_14);
            }
#line 2602 "mdprof_fb.automatic_parallelism.autopar_reports.c"
            {
#line 2604 "mdprof_fb.automatic_parallelism.autopar_reports.c"
              mdprof_fb__automatic_parallelism__autopar_reports__V_21_21 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_20_20, (MR_String) ")");
            }
#line 2607 "mdprof_fb.automatic_parallelism.autopar_reports.c"
            {
#line 2609 "mdprof_fb.automatic_parallelism.autopar_reports.c"
              *mdprof_fb__automatic_parallelism__autopar_reports__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "complete-size(", mdprof_fb__automatic_parallelism__autopar_reports__V_21_21);
            }
#line 162 "autopar_reports.m"
          }
#line 156 "autopar_reports.m"
  }
#line 152 "autopar_reports.m"
}

#line 141 "autopar_reports.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__create_feedback_autopar_report_3_p_0_2(
#line 141 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure_arg,
#line 141 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1,
#line 141 "autopar_reports.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2)
#line 141 "autopar_reports.m"
{
#line 141 "autopar_reports.m"
  {
#line 141 "autopar_reports.m"
    MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure = mdprof_fb__automatic_parallelism__autopar_reports__closure_arg;
#line 141 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__conv2_Report_5;

#line 141 "autopar_reports.m"
    {
#line 141 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_proc_report_2_p_0(((MR_Word) mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1), &mdprof_fb__automatic_parallelism__autopar_reports__conv2_Report_5);
    }
#line 141 "autopar_reports.m"
    *mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2 = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__conv2_Report_5));
#line 141 "autopar_reports.m"
  }
#line 141 "autopar_reports.m"
}

#line 84 "autopar_reports.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__create_feedback_autopar_report_3_p_0_1(
#line 84 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure_arg,
#line 84 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1,
#line 84 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2,
#line 84 "autopar_reports.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_3)
#line 84 "autopar_reports.m"
{
#line 84 "autopar_reports.m"
  {
#line 84 "autopar_reports.m"
    MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure = mdprof_fb__automatic_parallelism__autopar_reports__closure_arg;
#line 84 "autopar_reports.m"
    MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__conv0_HeadVar__3_102;

#line 84 "autopar_reports.m"
    {
#line 84 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__IntroducedFrom__pred__create_feedback_autopar_report__84__1_3_p_0(((MR_Word) mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1), ((MR_Integer) mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2), &mdprof_fb__automatic_parallelism__autopar_reports__conv0_HeadVar__3_102);
    }
#line 84 "autopar_reports.m"
    *mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_3 = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__conv0_HeadVar__3_102));
#line 84 "autopar_reports.m"
  }
#line 84 "autopar_reports.m"
}

#line 78 "autopar_reports.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__create_feedback_autopar_report_3_p_0(
#line 78 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__Parameters_4,
#line 78 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__ProcConjs_5,
#line 78 "autopar_reports.m"
  MR_String * mdprof_fb__automatic_parallelism__autopar_reports__Report_6)
#line 78 "autopar_reports.m"
{
#line 82 "autopar_reports.m"
  {
#line 82 "autopar_reports.m"
    MR_bool mdprof_fb__automatic_parallelism__autopar_reports__succeeded;
#line 82 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__TypeInfo_99_99 = (MR_Word) &mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_2[0];
#line 82 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_105_105;
#line 82 "autopar_reports.m"
    MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__NumProcConjs_7;
#line 82 "autopar_reports.m"
    MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__NumConjs_8;
#line 82 "autopar_reports.m"
    MR_Float mdprof_fb__automatic_parallelism__autopar_reports__DesiredParallelism_9;
#line 82 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__IntermoduleVarUse_10;
#line 82 "autopar_reports.m"
    MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__SparkingCost_11;
#line 82 "autopar_reports.m"
    MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__SparkingDelay_12;
#line 82 "autopar_reports.m"
    MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__BarrierCost_13;
#line 82 "autopar_reports.m"
    MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__SignalCost_14;
#line 82 "autopar_reports.m"
    MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__WaitCost_15;
#line 82 "autopar_reports.m"
    MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__ContextWakeupDelay_16;
#line 82 "autopar_reports.m"
    MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__CliqueThreshold_17;
#line 82 "autopar_reports.m"
    MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__CallSiteThreshold_18;
#line 82 "autopar_reports.m"
    MR_Float mdprof_fb__automatic_parallelism__autopar_reports__SpeedupThreshold_19;
#line 82 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__ParalleliseDepConjs_20;
#line 82 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__BestParAlgorithm_21;
#line 82 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__BestParAlgorithmStr_22;
#line 82 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__ReportHeader_23;
#line 82 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__ParalleliseDepConjsStr_24;
#line 82 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__ReportConjs_26;
#line 82 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_29_29;
#line 82 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_63_63;
#line 82 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_64_64;
#line 82 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_65_65;
#line 82 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_66_66;
#line 82 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_67_67;
#line 82 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_68_68;
#line 82 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_69_69;
#line 82 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_70_70;
#line 82 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_71_71;
#line 82 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_72_72;
#line 82 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_73_73;
#line 82 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_74_74;
#line 82 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_75_75;
#line 82 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_76_76;
#line 82 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_77_77;
#line 82 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_78_78;
#line 82 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_79_79;
#line 82 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_80_80;
#line 82 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_81_81;
#line 82 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_82_82;
#line 82 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_83_83;
#line 82 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_84_84;
#line 82 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_85_85;
#line 82 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_86_86;
#line 82 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_87_87;
#line 82 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_88_88;
#line 82 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_89_89;
#line 82 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_90_90;
#line 82 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_91_91;
#line 82 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_92_92;
#line 82 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_93_93;
#line 82 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_96_96;
#line 82 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_97_97;
#line 82 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_98_98;
#line 84 "autopar_reports.m"
    MR_Box mdprof_fb__automatic_parallelism__autopar_reports__conv1_NumConjs_8;

#line 83 "autopar_reports.m"
    {
#line 83 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__NumProcConjs_7 = mercury__list__length_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeInfo_99_99, mdprof_fb__automatic_parallelism__autopar_reports__ProcConjs_5);
    }
#line 84 "autopar_reports.m"
    {
#line 84 "autopar_reports.m"
      mercury__list__foldl_4_p_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeInfo_99_99, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_2[4], mdprof_fb__automatic_parallelism__autopar_reports__ProcConjs_5, ((MR_Box) ((MR_Integer) 0)), &mdprof_fb__automatic_parallelism__autopar_reports__conv1_NumConjs_8);
    }
#line 84 "autopar_reports.m"
    mdprof_fb__automatic_parallelism__autopar_reports__NumConjs_8 = ((MR_Integer) mdprof_fb__automatic_parallelism__autopar_reports__conv1_NumConjs_8);
#line 85 "autopar_reports.m"
    mdprof_fb__automatic_parallelism__autopar_reports__DesiredParallelism_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__Parameters_4, (MR_Integer) 0)));
#line 85 "autopar_reports.m"
    mdprof_fb__automatic_parallelism__autopar_reports__IntermoduleVarUse_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__Parameters_4, (MR_Integer) 1)));
#line 85 "autopar_reports.m"
    mdprof_fb__automatic_parallelism__autopar_reports__SparkingCost_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__Parameters_4, (MR_Integer) 2)));
#line 85 "autopar_reports.m"
    mdprof_fb__automatic_parallelism__autopar_reports__SparkingDelay_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__Parameters_4, (MR_Integer) 3)));
#line 85 "autopar_reports.m"
    mdprof_fb__automatic_parallelism__autopar_reports__BarrierCost_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__Parameters_4, (MR_Integer) 4)));
#line 85 "autopar_reports.m"
    mdprof_fb__automatic_parallelism__autopar_reports__SignalCost_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__Parameters_4, (MR_Integer) 5)));
#line 85 "autopar_reports.m"
    mdprof_fb__automatic_parallelism__autopar_reports__WaitCost_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__Parameters_4, (MR_Integer) 6)));
#line 85 "autopar_reports.m"
    mdprof_fb__automatic_parallelism__autopar_reports__ContextWakeupDelay_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__Parameters_4, (MR_Integer) 7)));
#line 85 "autopar_reports.m"
    mdprof_fb__automatic_parallelism__autopar_reports__CliqueThreshold_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__Parameters_4, (MR_Integer) 8)));
#line 85 "autopar_reports.m"
    mdprof_fb__automatic_parallelism__autopar_reports__CallSiteThreshold_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__Parameters_4, (MR_Integer) 9)));
#line 85 "autopar_reports.m"
    mdprof_fb__automatic_parallelism__autopar_reports__SpeedupThreshold_19 = MR_unbox_float((MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__Parameters_4, (MR_Integer) 10)));
#line 85 "autopar_reports.m"
    mdprof_fb__automatic_parallelism__autopar_reports__ParalleliseDepConjs_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__Parameters_4, (MR_Integer) 11)));
#line 85 "autopar_reports.m"
    mdprof_fb__automatic_parallelism__autopar_reports__BestParAlgorithm_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__Parameters_4, (MR_Integer) 12)));
#line 90 "autopar_reports.m"
    {
#line 90 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__best_par_algorithm_string_2_p_0(mdprof_fb__automatic_parallelism__autopar_reports__BestParAlgorithm_21, &mdprof_fb__automatic_parallelism__autopar_reports__BestParAlgorithmStr_22);
    }
#line 2854 "mdprof_fb.automatic_parallelism.autopar_reports.c"
    mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_105_105 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 109 "autopar_reports.m"
    {
#line 109 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 109 "autopar_reports.m"
      MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__V_64_64, 0) = MR_box_float(mdprof_fb__automatic_parallelism__autopar_reports__DesiredParallelism_9);
#line 109 "autopar_reports.m"
    }
#line 110 "autopar_reports.m"
    {
#line 110 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_67_67 = mercury__string__string_1_f_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__IntermoduleVarUse_10)));
    }
#line 110 "autopar_reports.m"
    {
#line 110 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_66_66 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 110 "autopar_reports.m"
      MR_hl_field(MR_mktag(2), mdprof_fb__automatic_parallelism__autopar_reports__V_66_66, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__V_67_67));
#line 110 "autopar_reports.m"
    }
#line 111 "autopar_reports.m"
    {
#line 111 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 111 "autopar_reports.m"
      MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__V_69_69, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__SparkingCost_11));
#line 111 "autopar_reports.m"
    }
#line 112 "autopar_reports.m"
    {
#line 112 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 112 "autopar_reports.m"
      MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__V_71_71, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__SparkingDelay_12));
#line 112 "autopar_reports.m"
    }
#line 113 "autopar_reports.m"
    {
#line 113 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 113 "autopar_reports.m"
      MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__V_73_73, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__BarrierCost_13));
#line 113 "autopar_reports.m"
    }
#line 114 "autopar_reports.m"
    {
#line 114 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 114 "autopar_reports.m"
      MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__V_75_75, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__SignalCost_14));
#line 114 "autopar_reports.m"
    }
#line 115 "autopar_reports.m"
    {
#line 115 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 115 "autopar_reports.m"
      MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__V_77_77, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__WaitCost_15));
#line 115 "autopar_reports.m"
    }
#line 116 "autopar_reports.m"
    {
#line 116 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 116 "autopar_reports.m"
      MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__V_79_79, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__ContextWakeupDelay_16));
#line 116 "autopar_reports.m"
    }
#line 117 "autopar_reports.m"
    {
#line 117 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 117 "autopar_reports.m"
      MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__V_81_81, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__CliqueThreshold_17));
#line 117 "autopar_reports.m"
    }
#line 118 "autopar_reports.m"
    {
#line 118 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 118 "autopar_reports.m"
      MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__V_83_83, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__CallSiteThreshold_18));
#line 118 "autopar_reports.m"
    }
#line 119 "autopar_reports.m"
    {
#line 119 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_85_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 119 "autopar_reports.m"
      MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__V_85_85, 0) = MR_box_float(mdprof_fb__automatic_parallelism__autopar_reports__SpeedupThreshold_19);
#line 119 "autopar_reports.m"
    }
#line 121 "autopar_reports.m"
    {
#line 121 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_89_89 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 121 "autopar_reports.m"
      MR_hl_field(MR_mktag(2), mdprof_fb__automatic_parallelism__autopar_reports__V_89_89, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__BestParAlgorithmStr_22));
#line 121 "autopar_reports.m"
    }
#line 122 "autopar_reports.m"
    {
#line 122 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 122 "autopar_reports.m"
      MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__V_91_91, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__NumProcConjs_7));
#line 122 "autopar_reports.m"
    }
#line 123 "autopar_reports.m"
    {
#line 123 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 123 "autopar_reports.m"
      MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__V_93_93, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__NumConjs_8));
#line 123 "autopar_reports.m"
    }
#line 122 "autopar_reports.m"
    {
#line 122 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 122 "autopar_reports.m"
      MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__V_92_92, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__V_93_93));
#line 122 "autopar_reports.m"
      MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__V_92_92, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 122 "autopar_reports.m"
    }
#line 121 "autopar_reports.m"
    {
#line 121 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 121 "autopar_reports.m"
      MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__V_90_90, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__V_91_91));
#line 121 "autopar_reports.m"
      MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__V_90_90, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__V_92_92));
#line 121 "autopar_reports.m"
    }
#line 120 "autopar_reports.m"
    {
#line 120 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 120 "autopar_reports.m"
      MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__V_88_88, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__V_89_89));
#line 120 "autopar_reports.m"
      MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__V_88_88, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__V_90_90));
#line 120 "autopar_reports.m"
    }
#line 137 "autopar_reports.m"
    if ((mdprof_fb__automatic_parallelism__autopar_reports__ParalleliseDepConjs_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 139 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__ParalleliseDepConjsStr_24 = (MR_String) "no";
#line 137 "autopar_reports.m"
    else
#line 125 "autopar_reports.m"
      {
#line 125 "autopar_reports.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__SpeedupAlg_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__ParalleliseDepConjs_20, (MR_Integer) 0)));

#line 129 "autopar_reports.m"
        if ((mdprof_fb__automatic_parallelism__autopar_reports__SpeedupAlg_25 == (MR_Integer) 1))
#line 131 "autopar_reports.m"
          mdprof_fb__automatic_parallelism__autopar_reports__ParalleliseDepConjsStr_24 = (MR_String) "yes, the more shared variables the less overlap there is";
#line 129 "autopar_reports.m"
        else
#line 129 "autopar_reports.m"
          if ((mdprof_fb__automatic_parallelism__autopar_reports__SpeedupAlg_25 == (MR_Integer) 2))
#line 135 "autopar_reports.m"
            mdprof_fb__automatic_parallelism__autopar_reports__ParalleliseDepConjsStr_24 = (MR_String) "yes, use overlap calculation";
#line 129 "autopar_reports.m"
          else
#line 128 "autopar_reports.m"
            mdprof_fb__automatic_parallelism__autopar_reports__ParalleliseDepConjsStr_24 = (MR_String) "yes, pretend they\'re independent";
#line 125 "autopar_reports.m"
      }
#line 120 "autopar_reports.m"
    {
#line 120 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_87_87 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 120 "autopar_reports.m"
      MR_hl_field(MR_mktag(2), mdprof_fb__automatic_parallelism__autopar_reports__V_87_87, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__ParalleliseDepConjsStr_24));
#line 120 "autopar_reports.m"
    }
#line 119 "autopar_reports.m"
    {
#line 119 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 119 "autopar_reports.m"
      MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__V_86_86, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__V_87_87));
#line 119 "autopar_reports.m"
      MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__V_86_86, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__V_88_88));
#line 119 "autopar_reports.m"
    }
#line 118 "autopar_reports.m"
    {
#line 118 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 118 "autopar_reports.m"
      MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__V_84_84, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__V_85_85));
#line 118 "autopar_reports.m"
      MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__V_84_84, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__V_86_86));
#line 118 "autopar_reports.m"
    }
#line 117 "autopar_reports.m"
    {
#line 117 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 117 "autopar_reports.m"
      MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__V_82_82, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__V_83_83));
#line 117 "autopar_reports.m"
      MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__V_82_82, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__V_84_84));
#line 117 "autopar_reports.m"
    }
#line 116 "autopar_reports.m"
    {
#line 116 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 116 "autopar_reports.m"
      MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__V_80_80, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__V_81_81));
#line 116 "autopar_reports.m"
      MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__V_80_80, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__V_82_82));
#line 116 "autopar_reports.m"
    }
#line 115 "autopar_reports.m"
    {
#line 115 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 115 "autopar_reports.m"
      MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__V_78_78, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__V_79_79));
#line 115 "autopar_reports.m"
      MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__V_78_78, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__V_80_80));
#line 115 "autopar_reports.m"
    }
#line 114 "autopar_reports.m"
    {
#line 114 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 114 "autopar_reports.m"
      MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__V_76_76, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__V_77_77));
#line 114 "autopar_reports.m"
      MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__V_76_76, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__V_78_78));
#line 114 "autopar_reports.m"
    }
#line 113 "autopar_reports.m"
    {
#line 113 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 113 "autopar_reports.m"
      MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__V_74_74, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__V_75_75));
#line 113 "autopar_reports.m"
      MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__V_74_74, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__V_76_76));
#line 113 "autopar_reports.m"
    }
#line 112 "autopar_reports.m"
    {
#line 112 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 112 "autopar_reports.m"
      MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__V_72_72, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__V_73_73));
#line 112 "autopar_reports.m"
      MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__V_72_72, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__V_74_74));
#line 112 "autopar_reports.m"
    }
#line 111 "autopar_reports.m"
    {
#line 111 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 111 "autopar_reports.m"
      MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__V_70_70, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__V_71_71));
#line 111 "autopar_reports.m"
      MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__V_70_70, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__V_72_72));
#line 111 "autopar_reports.m"
    }
#line 110 "autopar_reports.m"
    {
#line 110 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 110 "autopar_reports.m"
      MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__V_68_68, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__V_69_69));
#line 110 "autopar_reports.m"
      MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__V_68_68, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__V_70_70));
#line 110 "autopar_reports.m"
    }
#line 109 "autopar_reports.m"
    {
#line 109 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 109 "autopar_reports.m"
      MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__V_65_65, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__V_66_66));
#line 109 "autopar_reports.m"
      MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__V_65_65, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__V_68_68));
#line 109 "autopar_reports.m"
    }
#line 91 "autopar_reports.m"
    {
#line 91 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 91 "autopar_reports.m"
      MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__V_63_63, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__V_64_64));
#line 91 "autopar_reports.m"
      MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__V_63_63, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__V_65_65));
#line 91 "autopar_reports.m"
    }
#line 91 "autopar_reports.m"
    {
#line 91 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_29_29 = mercury__string__format_2_f_0((MR_String) "  Candidate parallel conjunctions:\n    Desired parallelism:       %f\n    Intermodule var use:       %s\n    Sparking cost:             %d\n    Sparking delay:    " "        %d\n    Barrier cost:              %d\n    Future signal cost:        %d\n    Future wait cost:          %d\n    Context wakeup delay:      %d\n    Clique th" "reshold:          %d\n    Call site threshold:       %d\n    Speedup threshold:         %f\n    Dependent conjs:           %s\n    BestParAlgorithm:          %s\n   " " # of par procs with conjs: %d\n    # of par conjunctions:     %d\n    Parallel conjunctions:\n\n", mdprof_fb__automatic_parallelism__autopar_reports__V_63_63);
    }
#line 91 "autopar_reports.m"
    {
#line 91 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__ReportHeader_23 = mercury__cord__singleton_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_105_105, ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__V_29_29)));
    }
#line 141 "autopar_reports.m"
    {
#line 141 "autopar_reports.m"
      mercury__list__map_3_p_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeInfo_99_99, (MR_Word) &mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_1[2], (MR_Word) &mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_2[5], mdprof_fb__automatic_parallelism__autopar_reports__ProcConjs_5, &mdprof_fb__automatic_parallelism__autopar_reports__ReportConjs_26);
    }
#line 143 "autopar_reports.m"
    {
#line 143 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_98_98 = mercury__cord__cord_list_to_cord_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_105_105, mdprof_fb__automatic_parallelism__autopar_reports__ReportConjs_26);
    }
#line 143 "autopar_reports.m"
    {
#line 143 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_97_97 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_105_105, mdprof_fb__automatic_parallelism__autopar_reports__ReportHeader_23, mdprof_fb__automatic_parallelism__autopar_reports__V_98_98);
    }
#line 143 "autopar_reports.m"
    {
#line 143 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_96_96 = mercury__cord__list_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_105_105, mdprof_fb__automatic_parallelism__autopar_reports__V_97_97);
    }
#line 143 "autopar_reports.m"
    {
#line 143 "autopar_reports.m"
      *mdprof_fb__automatic_parallelism__autopar_reports__Report_6 = mercury__string__append_list_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_96_96);
    }
#line 82 "autopar_reports.m"
  }
#line 78 "autopar_reports.m"
}

#line 63 "autopar_reports.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__create_feedback_report_2_p_0(
#line 63 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__FeedbackData_3,
#line 63 "autopar_reports.m"
  MR_String * mdprof_fb__automatic_parallelism__autopar_reports__Report_4)
#line 63 "autopar_reports.m"
{
#line 67 "autopar_reports.m"
  {
#line 67 "autopar_reports.m"
    MR_bool mdprof_fb__automatic_parallelism__autopar_reports__succeeded;

#line 67 "autopar_reports.m"
    if (((MR_tag((MR_Word) mdprof_fb__automatic_parallelism__autopar_reports__FeedbackData_3)) == (MR_mktag((MR_Integer) 0))))
#line 68 "autopar_reports.m"
      *mdprof_fb__automatic_parallelism__autopar_reports__Report_4 = (MR_String) "  feedback_data_calls_above_threshold_sorted is not supported\n";
#line 67 "autopar_reports.m"
    else
#line 72 "autopar_reports.m"
      {
#line 72 "autopar_reports.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__Parameters_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__FeedbackData_3, (MR_Integer) 0)));
#line 72 "autopar_reports.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__Conjs_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__FeedbackData_3, (MR_Integer) 1)));

#line 73 "autopar_reports.m"
        {
#line 73 "autopar_reports.m"
          mdprof_fb__automatic_parallelism__autopar_reports__create_feedback_autopar_report_3_p_0(mdprof_fb__automatic_parallelism__autopar_reports__Parameters_8, mdprof_fb__automatic_parallelism__autopar_reports__Conjs_9, mdprof_fb__automatic_parallelism__autopar_reports__Report_4);
#line 73 "autopar_reports.m"
          return;
        }
#line 72 "autopar_reports.m"
      }
#line 67 "autopar_reports.m"
  }
#line 63 "autopar_reports.m"
}

#line 233 "autopar_reports.m"
static MR_Box MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_p_0_2(
#line 233 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure_arg,
#line 233 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1)
#line 233 "autopar_reports.m"
{
#line 233 "autopar_reports.m"
  {
#line 233 "autopar_reports.m"
    MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2;
#line 233 "autopar_reports.m"
    MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure = mdprof_fb__automatic_parallelism__autopar_reports__closure_arg;
#line 233 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__conv1_HeadVar__2_77;

#line 233 "autopar_reports.m"
    {
#line 233 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__conv1_HeadVar__2_77 = mdprof_fb__automatic_parallelism__autopar_reports__IntroducedFrom__func__create_candidate_parallel_conj_report__233__1_1_f_0(((MR_String) mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1));
    }
#line 233 "autopar_reports.m"
    mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2 = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__conv1_HeadVar__2_77));
#line 233 "autopar_reports.m"
    return mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2;
#line 233 "autopar_reports.m"
  }
#line 233 "autopar_reports.m"
}

#line 214 "autopar_reports.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_p_0_1(
#line 214 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure_arg,
#line 214 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1,
#line 214 "autopar_reports.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2)
#line 214 "autopar_reports.m"
{
#line 214 "autopar_reports.m"
  {
#line 214 "autopar_reports.m"
    MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure = mdprof_fb__automatic_parallelism__autopar_reports__closure_arg;
#line 214 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__conv0_HeadVar__3_3;

#line 214 "autopar_reports.m"
    {
#line 214 "autopar_reports.m"
      mdbcomp__program_representation__lookup_var_name_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__closure, (MR_Integer) 3))), ((MR_Integer) mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1), &mdprof_fb__automatic_parallelism__autopar_reports__conv0_HeadVar__3_3);
    }
#line 214 "autopar_reports.m"
    *mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2 = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__conv0_HeadVar__3_3));
#line 214 "autopar_reports.m"
  }
#line 214 "autopar_reports.m"
}

#line 30 "autopar_reports.m"
void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_p_0(
#line 30 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__VarNameTable_4,
#line 30 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__CandidateParConjunction_5,
#line 30 "autopar_reports.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_reports__Report_6)
#line 30 "autopar_reports.m"
{
#line 201 "autopar_reports.m"
  {
#line 201 "autopar_reports.m"
    MR_bool mdprof_fb__automatic_parallelism__autopar_reports__succeeded;
#line 201 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_193_193;
#line 201 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__GoalPathString_7 = ((MR_String) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__CandidateParConjunction_5, (MR_Integer) 0)));
#line 201 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__MaybePushGoal_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__CandidateParConjunction_5, (MR_Integer) 1)));
#line 201 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__IsDependent_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__CandidateParConjunction_5, (MR_Integer) 3)));
#line 201 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__GoalsBefore_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__CandidateParConjunction_5, (MR_Integer) 4)));
#line 201 "autopar_reports.m"
    MR_Float mdprof_fb__automatic_parallelism__autopar_reports__GoalsBeforeCost_12 = MR_unbox_float((MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__CandidateParConjunction_5, (MR_Integer) 5)));
#line 201 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__Conjs_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__CandidateParConjunction_5, (MR_Integer) 6)));
#line 201 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__GoalsAfter_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__CandidateParConjunction_5, (MR_Integer) 7)));
#line 201 "autopar_reports.m"
    MR_Float mdprof_fb__automatic_parallelism__autopar_reports__GoalsAfterCost_15 = MR_unbox_float((MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__CandidateParConjunction_5, (MR_Integer) 8)));
#line 201 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__ParExecMetrics_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__CandidateParConjunction_5, (MR_Integer) 9)));
#line 201 "autopar_reports.m"
    MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__NumCalls_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__ParExecMetrics_16, (MR_Integer) 0)));
#line 201 "autopar_reports.m"
    MR_Float mdprof_fb__automatic_parallelism__autopar_reports__SeqTime_18 = MR_unbox_float((MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__ParExecMetrics_16, (MR_Integer) 1)));
#line 201 "autopar_reports.m"
    MR_Float mdprof_fb__automatic_parallelism__autopar_reports__ParTime_19 = MR_unbox_float((MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__ParExecMetrics_16, (MR_Integer) 2)));
#line 201 "autopar_reports.m"
    MR_Float mdprof_fb__automatic_parallelism__autopar_reports__SparkCost_20 = MR_unbox_float((MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__ParExecMetrics_16, (MR_Integer) 3)));
#line 201 "autopar_reports.m"
    MR_Float mdprof_fb__automatic_parallelism__autopar_reports__BarrierCost_21 = MR_unbox_float((MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__ParExecMetrics_16, (MR_Integer) 4)));
#line 201 "autopar_reports.m"
    MR_Float mdprof_fb__automatic_parallelism__autopar_reports__SignalsCost_22 = MR_unbox_float((MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__ParExecMetrics_16, (MR_Integer) 5)));
#line 201 "autopar_reports.m"
    MR_Float mdprof_fb__automatic_parallelism__autopar_reports__WaitsCost_23 = MR_unbox_float((MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__ParExecMetrics_16, (MR_Integer) 6)));
#line 201 "autopar_reports.m"
    MR_Float mdprof_fb__automatic_parallelism__autopar_reports__FirstConjDeadTime_24 = MR_unbox_float((MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__ParExecMetrics_16, (MR_Integer) 7)));
#line 201 "autopar_reports.m"
    MR_Float mdprof_fb__automatic_parallelism__autopar_reports__FutureDeadTime_25 = MR_unbox_float((MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__ParExecMetrics_16, (MR_Integer) 8)));
#line 201 "autopar_reports.m"
    MR_Float mdprof_fb__automatic_parallelism__autopar_reports__ParOverheads_26;
#line 201 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__DependanceString_27;
#line 201 "autopar_reports.m"
    MR_Float mdprof_fb__automatic_parallelism__autopar_reports__Speedup_31;
#line 201 "autopar_reports.m"
    MR_Float mdprof_fb__automatic_parallelism__autopar_reports__TimeSaving_32;
#line 201 "autopar_reports.m"
    MR_Float mdprof_fb__automatic_parallelism__autopar_reports__TotalDeadTime_33;
#line 201 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__Header1Str_34;
#line 201 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__Header1_35;
#line 201 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__Header2_36;
#line 201 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__Header2Str_46;
#line 201 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__Header3_47;
#line 201 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__RevGoalPath_49;
#line 201 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__ReportGoalsBefore0_51;
#line 201 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__ReportGoalsBefore_52;
#line 201 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__ReportParConj0_53;
#line 201 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__ReportParConj_54;
#line 201 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__ReportGoalsAfter0_55;
#line 201 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__ReportGoalsAfter_56;
#line 201 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_114_114;
#line 201 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_117_117;
#line 201 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_120_120;
#line 201 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_123_123;
#line 201 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_126_126;
#line 201 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_129_129;
#line 201 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_132_132;
#line 201 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_135_135;
#line 201 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_138_138;
#line 201 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_141_141;
#line 201 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_144_144;
#line 201 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_147_147;
#line 201 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_150_150;
#line 201 "autopar_reports.m"
    MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_ConjNum_155_155 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__CandidateParConjunction_5, (MR_Integer) 2)));
#line 201 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_157_157;
#line 201 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_159_159;
#line 201 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_160_160;
#line 201 "autopar_reports.m"
    MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_ConjNum_162_162;
#line 201 "autopar_reports.m"
    MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__V_163_163;
#line 201 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_165_165;
#line 201 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_167_167;
#line 201 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_168_168;
#line 201 "autopar_reports.m"
    MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_ConjNum_170_170;
#line 201 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_173_173;
#line 201 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_175_175;
#line 201 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_176_176;
#line 201 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_178_178;
#line 201 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_179_179;
#line 201 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_180_180;
#line 201 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_181_181;
#line 201 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_182_182;
#line 201 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_183_183;
#line 201 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_184_184;
#line 201 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_185_185;
#line 201 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_186_186;
#line 201 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_187_187;
#line 201 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_196_196;
#line 201 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_214_214;
#line 201 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_216_216;
#line 201 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_217_217;
#line 201 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_219_219;
#line 201 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_220_220;
#line 201 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_222_222;
#line 201 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_223_223;
#line 201 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_225_225;
#line 201 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_226_226;
#line 201 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_228_228;
#line 201 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_229_229;
#line 201 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_231_231;
#line 201 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_232_232;
#line 201 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_234_234;
#line 201 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_235_235;
#line 201 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_237_237;
#line 201 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_238_238;
#line 201 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_240_240;
#line 201 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_241_241;
#line 201 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_243_243;
#line 201 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_244_244;
#line 201 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_246_246;
#line 201 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_247_247;
#line 201 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_249_249;
#line 201 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_250_250;
#line 201 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_252_252;
#line 201 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_253_253;
#line 275 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__RevGoalPathPrime_48;

#line 208 "autopar_reports.m"
    {
#line 208 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__ParOverheads_26 = mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_get_overheads_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__ParExecMetrics_16);
    }
#line 212 "autopar_reports.m"
    if ((mdprof_fb__automatic_parallelism__autopar_reports__IsDependent_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 211 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__DependanceString_27 = (MR_String) "no";
#line 212 "autopar_reports.m"
    else
#line 213 "autopar_reports.m"
      {
#line 213 "autopar_reports.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_192_192;
#line 213 "autopar_reports.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__Vars_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__IsDependent_10, (MR_Integer) 0)));
#line 213 "autopar_reports.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__VarNames_29;
#line 213 "autopar_reports.m"
        MR_String mdprof_fb__automatic_parallelism__autopar_reports__VarsString_30;
#line 213 "autopar_reports.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_57_57;
#line 213 "autopar_reports.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_59_59;

#line 214 "autopar_reports.m"
        {
#line 214 "autopar_reports.m"
          mdprof_fb__automatic_parallelism__autopar_reports__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 214 "autopar_reports.m"
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__V_57_57, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_4[0]));
#line 214 "autopar_reports.m"
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__V_57_57, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_p_0_1));
#line 214 "autopar_reports.m"
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__V_57_57, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 214 "autopar_reports.m"
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__V_57_57, 3) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__VarNameTable_4));
#line 214 "autopar_reports.m"
        }
#line 3559 "mdprof_fb.automatic_parallelism.autopar_reports.c"
        mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_192_192 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 214 "autopar_reports.m"
        {
#line 214 "autopar_reports.m"
          mercury__set__map_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_192_192, mdprof_fb__automatic_parallelism__autopar_reports__V_57_57, mdprof_fb__automatic_parallelism__autopar_reports__Vars_28, &mdprof_fb__automatic_parallelism__autopar_reports__VarNames_29);
        }
#line 215 "autopar_reports.m"
        {
#line 215 "autopar_reports.m"
          mdprof_fb__automatic_parallelism__autopar_reports__V_59_59 = mercury__set__to_sorted_list_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_192_192, mdprof_fb__automatic_parallelism__autopar_reports__VarNames_29);
        }
#line 215 "autopar_reports.m"
        {
#line 215 "autopar_reports.m"
          mdprof_fb__automatic_parallelism__autopar_reports__VarsString_30 = mercury__string__join_list_2_f_0((MR_String) ", ", mdprof_fb__automatic_parallelism__autopar_reports__V_59_59);
        }
#line 3576 "mdprof_fb.automatic_parallelism.autopar_reports.c"
        {
#line 3578 "mdprof_fb.automatic_parallelism.autopar_reports.c"
          mdprof_fb__automatic_parallelism__autopar_reports__DependanceString_27 = mercury__string__f_43_43_2_f_0((MR_String) "on ", mdprof_fb__automatic_parallelism__autopar_reports__VarsString_30);
        }
#line 213 "autopar_reports.m"
      }
#line 218 "autopar_reports.m"
    {
#line 218 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__Speedup_31 = mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_get_speedup_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__ParExecMetrics_16);
    }
#line 219 "autopar_reports.m"
    {
#line 219 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__TimeSaving_32 = mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_get_time_saving_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__ParExecMetrics_16);
    }
#line 220 "autopar_reports.m"
    mdprof_fb__automatic_parallelism__autopar_reports__TotalDeadTime_33 = (mdprof_fb__automatic_parallelism__autopar_reports__FirstConjDeadTime_24 + mdprof_fb__automatic_parallelism__autopar_reports__FutureDeadTime_25);
#line 3595 "mdprof_fb.automatic_parallelism.autopar_reports.c"
    {
#line 3597 "mdprof_fb.automatic_parallelism.autopar_reports.c"
      mdprof_fb__automatic_parallelism__autopar_reports__V_196_196 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__GoalPathString_7, (MR_String) "\n");
    }
#line 3600 "mdprof_fb.automatic_parallelism.autopar_reports.c"
    {
#line 3602 "mdprof_fb.automatic_parallelism.autopar_reports.c"
      mdprof_fb__automatic_parallelism__autopar_reports__Header1Str_34 = mercury__string__f_43_43_2_f_0((MR_String) "      Path: ", mdprof_fb__automatic_parallelism__autopar_reports__V_196_196);
    }
#line 3605 "mdprof_fb.automatic_parallelism.autopar_reports.c"
    mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_193_193 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 223 "autopar_reports.m"
    {
#line 223 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__Header1_35 = mercury__cord__singleton_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_193_193, ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__Header1Str_34)));
    }
#line 228 "autopar_reports.m"
    if ((mdprof_fb__automatic_parallelism__autopar_reports__MaybePushGoal_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 227 "autopar_reports.m"
      {
#line 227 "autopar_reports.m"
        mdprof_fb__automatic_parallelism__autopar_reports__Header2_36 = mercury__cord__empty_0_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_193_193);
      }
#line 228 "autopar_reports.m"
    else
#line 229 "autopar_reports.m"
      {
#line 229 "autopar_reports.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__PushGoal_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__MaybePushGoal_8, (MR_Integer) 0)));
#line 229 "autopar_reports.m"
        MR_String mdprof_fb__automatic_parallelism__autopar_reports__PushGoalPathStr_38 = ((MR_String) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__PushGoal_37, (MR_Integer) 0)));
#line 229 "autopar_reports.m"
        MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__Lo_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__PushGoal_37, (MR_Integer) 1)));
#line 229 "autopar_reports.m"
        MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__Hi_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__PushGoal_37, (MR_Integer) 2)));
#line 229 "autopar_reports.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__PushedGoalPathStrs_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__PushGoal_37, (MR_Integer) 3)));
#line 229 "autopar_reports.m"
        MR_String mdprof_fb__automatic_parallelism__autopar_reports__HeadPushGoalStr_42;
#line 229 "autopar_reports.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__TailPushGoalStrs_45;
#line 229 "autopar_reports.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_82_82;
#line 229 "autopar_reports.m"
        MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_199_199;
#line 229 "autopar_reports.m"
        MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_200_200;
#line 229 "autopar_reports.m"
        MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_202_202;
#line 229 "autopar_reports.m"
        MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_203_203;
#line 229 "autopar_reports.m"
        MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_204_204;
#line 229 "autopar_reports.m"
        MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_206_206;
#line 229 "autopar_reports.m"
        MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_207_207;

#line 3654 "mdprof_fb.automatic_parallelism.autopar_reports.c"
        {
#line 3656 "mdprof_fb.automatic_parallelism.autopar_reports.c"
          mdprof_fb__automatic_parallelism__autopar_reports__V_199_199 = mercury__string__int_to_string_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__Hi_40);
        }
#line 3659 "mdprof_fb.automatic_parallelism.autopar_reports.c"
        {
#line 3661 "mdprof_fb.automatic_parallelism.autopar_reports.c"
          mdprof_fb__automatic_parallelism__autopar_reports__V_200_200 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_199_199, (MR_String) "\n");
        }
#line 3664 "mdprof_fb.automatic_parallelism.autopar_reports.c"
        {
#line 3666 "mdprof_fb.automatic_parallelism.autopar_reports.c"
          mdprof_fb__automatic_parallelism__autopar_reports__V_202_202 = mercury__string__f_43_43_2_f_0((MR_String) ", hi ", mdprof_fb__automatic_parallelism__autopar_reports__V_200_200);
        }
#line 3669 "mdprof_fb.automatic_parallelism.autopar_reports.c"
        {
#line 3671 "mdprof_fb.automatic_parallelism.autopar_reports.c"
          mdprof_fb__automatic_parallelism__autopar_reports__V_203_203 = mercury__string__int_to_string_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__Lo_39);
        }
#line 3674 "mdprof_fb.automatic_parallelism.autopar_reports.c"
        {
#line 3676 "mdprof_fb.automatic_parallelism.autopar_reports.c"
          mdprof_fb__automatic_parallelism__autopar_reports__V_204_204 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_203_203, mdprof_fb__automatic_parallelism__autopar_reports__V_202_202);
        }
#line 3679 "mdprof_fb.automatic_parallelism.autopar_reports.c"
        {
#line 3681 "mdprof_fb.automatic_parallelism.autopar_reports.c"
          mdprof_fb__automatic_parallelism__autopar_reports__V_206_206 = mercury__string__f_43_43_2_f_0((MR_String) ", lo ", mdprof_fb__automatic_parallelism__autopar_reports__V_204_204);
        }
#line 3684 "mdprof_fb.automatic_parallelism.autopar_reports.c"
        {
#line 3686 "mdprof_fb.automatic_parallelism.autopar_reports.c"
          mdprof_fb__automatic_parallelism__autopar_reports__V_207_207 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__PushGoalPathStr_38, mdprof_fb__automatic_parallelism__autopar_reports__V_206_206);
        }
#line 3689 "mdprof_fb.automatic_parallelism.autopar_reports.c"
        {
#line 3691 "mdprof_fb.automatic_parallelism.autopar_reports.c"
          mdprof_fb__automatic_parallelism__autopar_reports__HeadPushGoalStr_42 = mercury__string__f_43_43_2_f_0((MR_String) "      PushGoal: ", mdprof_fb__automatic_parallelism__autopar_reports__V_207_207);
        }
#line 237 "autopar_reports.m"
        {
#line 237 "autopar_reports.m"
          mdprof_fb__automatic_parallelism__autopar_reports__TailPushGoalStrs_45 = mercury__list__map_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_193_193, mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_193_193, (MR_Word) &mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_2[3], mdprof_fb__automatic_parallelism__autopar_reports__PushedGoalPathStrs_41);
        }
#line 238 "autopar_reports.m"
        {
#line 238 "autopar_reports.m"
          mdprof_fb__automatic_parallelism__autopar_reports__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 238 "autopar_reports.m"
          MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__V_82_82, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__HeadPushGoalStr_42));
#line 238 "autopar_reports.m"
          MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__V_82_82, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__TailPushGoalStrs_45));
#line 238 "autopar_reports.m"
        }
#line 238 "autopar_reports.m"
        {
#line 238 "autopar_reports.m"
          mdprof_fb__automatic_parallelism__autopar_reports__Header2_36 = mercury__cord__from_list_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_193_193, mdprof_fb__automatic_parallelism__autopar_reports__V_82_82);
        }
#line 229 "autopar_reports.m"
      }
#line 257 "autopar_reports.m"
    {
#line 257 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_114_114 = measurement_units__commas_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__NumCalls_17);
    }
#line 258 "autopar_reports.m"
    {
#line 258 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_117_117 = measurement_units__two_decimal_fraction_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__SeqTime_18);
    }
#line 259 "autopar_reports.m"
    {
#line 259 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_120_120 = measurement_units__two_decimal_fraction_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__ParTime_19);
    }
#line 260 "autopar_reports.m"
    {
#line 260 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_123_123 = measurement_units__two_decimal_fraction_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__SparkCost_20);
    }
#line 261 "autopar_reports.m"
    {
#line 261 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_126_126 = measurement_units__two_decimal_fraction_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__BarrierCost_21);
    }
#line 262 "autopar_reports.m"
    {
#line 262 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_129_129 = measurement_units__two_decimal_fraction_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__SignalsCost_22);
    }
#line 263 "autopar_reports.m"
    {
#line 263 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_132_132 = measurement_units__two_decimal_fraction_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__WaitsCost_23);
    }
#line 264 "autopar_reports.m"
    {
#line 264 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_135_135 = measurement_units__two_decimal_fraction_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__ParOverheads_26);
    }
#line 265 "autopar_reports.m"
    {
#line 265 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_138_138 = measurement_units__four_decimal_fraction_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__Speedup_31);
    }
#line 266 "autopar_reports.m"
    {
#line 266 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_141_141 = measurement_units__two_decimal_fraction_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TimeSaving_32);
    }
#line 267 "autopar_reports.m"
    {
#line 267 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_144_144 = measurement_units__two_decimal_fraction_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__FirstConjDeadTime_24);
    }
#line 268 "autopar_reports.m"
    {
#line 268 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_147_147 = measurement_units__two_decimal_fraction_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__FutureDeadTime_25);
    }
#line 269 "autopar_reports.m"
    {
#line 269 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_150_150 = measurement_units__two_decimal_fraction_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TotalDeadTime_33);
    }
#line 3781 "mdprof_fb.automatic_parallelism.autopar_reports.c"
    {
#line 3783 "mdprof_fb.automatic_parallelism.autopar_reports.c"
      mdprof_fb__automatic_parallelism__autopar_reports__V_214_214 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_150_150, (MR_String) "\n\n");
    }
#line 3786 "mdprof_fb.automatic_parallelism.autopar_reports.c"
    {
#line 3788 "mdprof_fb.automatic_parallelism.autopar_reports.c"
      mdprof_fb__automatic_parallelism__autopar_reports__V_216_216 = mercury__string__f_43_43_2_f_0((MR_String) "\n      Total dead time: ", mdprof_fb__automatic_parallelism__autopar_reports__V_214_214);
    }
#line 3791 "mdprof_fb.automatic_parallelism.autopar_reports.c"
    {
#line 3793 "mdprof_fb.automatic_parallelism.autopar_reports.c"
      mdprof_fb__automatic_parallelism__autopar_reports__V_217_217 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_147_147, mdprof_fb__automatic_parallelism__autopar_reports__V_216_216);
    }
#line 3796 "mdprof_fb.automatic_parallelism.autopar_reports.c"
    {
#line 3798 "mdprof_fb.automatic_parallelism.autopar_reports.c"
      mdprof_fb__automatic_parallelism__autopar_reports__V_219_219 = mercury__string__f_43_43_2_f_0((MR_String) "\n      Future dead time: ", mdprof_fb__automatic_parallelism__autopar_reports__V_217_217);
    }
#line 3801 "mdprof_fb.automatic_parallelism.autopar_reports.c"
    {
#line 3803 "mdprof_fb.automatic_parallelism.autopar_reports.c"
      mdprof_fb__automatic_parallelism__autopar_reports__V_220_220 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_144_144, mdprof_fb__automatic_parallelism__autopar_reports__V_219_219);
    }
#line 3806 "mdprof_fb.automatic_parallelism.autopar_reports.c"
    {
#line 3808 "mdprof_fb.automatic_parallelism.autopar_reports.c"
      mdprof_fb__automatic_parallelism__autopar_reports__V_222_222 = mercury__string__f_43_43_2_f_0((MR_String) "\n      First conj dead time: ", mdprof_fb__automatic_parallelism__autopar_reports__V_220_220);
    }
#line 3811 "mdprof_fb.automatic_parallelism.autopar_reports.c"
    {
#line 3813 "mdprof_fb.automatic_parallelism.autopar_reports.c"
      mdprof_fb__automatic_parallelism__autopar_reports__V_223_223 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_141_141, mdprof_fb__automatic_parallelism__autopar_reports__V_222_222);
    }
#line 3816 "mdprof_fb.automatic_parallelism.autopar_reports.c"
    {
#line 3818 "mdprof_fb.automatic_parallelism.autopar_reports.c"
      mdprof_fb__automatic_parallelism__autopar_reports__V_225_225 = mercury__string__f_43_43_2_f_0((MR_String) "\n      Time saving: ", mdprof_fb__automatic_parallelism__autopar_reports__V_223_223);
    }
#line 3821 "mdprof_fb.automatic_parallelism.autopar_reports.c"
    {
#line 3823 "mdprof_fb.automatic_parallelism.autopar_reports.c"
      mdprof_fb__automatic_parallelism__autopar_reports__V_226_226 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_138_138, mdprof_fb__automatic_parallelism__autopar_reports__V_225_225);
    }
#line 3826 "mdprof_fb.automatic_parallelism.autopar_reports.c"
    {
#line 3828 "mdprof_fb.automatic_parallelism.autopar_reports.c"
      mdprof_fb__automatic_parallelism__autopar_reports__V_228_228 = mercury__string__f_43_43_2_f_0((MR_String) "\n      Speedup: ", mdprof_fb__automatic_parallelism__autopar_reports__V_226_226);
    }
#line 3831 "mdprof_fb.automatic_parallelism.autopar_reports.c"
    {
#line 3833 "mdprof_fb.automatic_parallelism.autopar_reports.c"
      mdprof_fb__automatic_parallelism__autopar_reports__V_229_229 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_135_135, mdprof_fb__automatic_parallelism__autopar_reports__V_228_228);
    }
#line 3836 "mdprof_fb.automatic_parallelism.autopar_reports.c"
    {
#line 3838 "mdprof_fb.automatic_parallelism.autopar_reports.c"
      mdprof_fb__automatic_parallelism__autopar_reports__V_231_231 = mercury__string__f_43_43_2_f_0((MR_String) "\n      ParOverheads total: ", mdprof_fb__automatic_parallelism__autopar_reports__V_229_229);
    }
#line 3841 "mdprof_fb.automatic_parallelism.autopar_reports.c"
    {
#line 3843 "mdprof_fb.automatic_parallelism.autopar_reports.c"
      mdprof_fb__automatic_parallelism__autopar_reports__V_232_232 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_132_132, mdprof_fb__automatic_parallelism__autopar_reports__V_231_231);
    }
#line 3846 "mdprof_fb.automatic_parallelism.autopar_reports.c"
    {
#line 3848 "mdprof_fb.automatic_parallelism.autopar_reports.c"
      mdprof_fb__automatic_parallelism__autopar_reports__V_234_234 = mercury__string__f_43_43_2_f_0((MR_String) "\n      WaitsCost: ", mdprof_fb__automatic_parallelism__autopar_reports__V_232_232);
    }
#line 3851 "mdprof_fb.automatic_parallelism.autopar_reports.c"
    {
#line 3853 "mdprof_fb.automatic_parallelism.autopar_reports.c"
      mdprof_fb__automatic_parallelism__autopar_reports__V_235_235 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_129_129, mdprof_fb__automatic_parallelism__autopar_reports__V_234_234);
    }
#line 3856 "mdprof_fb.automatic_parallelism.autopar_reports.c"
    {
#line 3858 "mdprof_fb.automatic_parallelism.autopar_reports.c"
      mdprof_fb__automatic_parallelism__autopar_reports__V_237_237 = mercury__string__f_43_43_2_f_0((MR_String) "\n      SignalsCost: ", mdprof_fb__automatic_parallelism__autopar_reports__V_235_235);
    }
#line 3861 "mdprof_fb.automatic_parallelism.autopar_reports.c"
    {
#line 3863 "mdprof_fb.automatic_parallelism.autopar_reports.c"
      mdprof_fb__automatic_parallelism__autopar_reports__V_238_238 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_126_126, mdprof_fb__automatic_parallelism__autopar_reports__V_237_237);
    }
#line 3866 "mdprof_fb.automatic_parallelism.autopar_reports.c"
    {
#line 3868 "mdprof_fb.automatic_parallelism.autopar_reports.c"
      mdprof_fb__automatic_parallelism__autopar_reports__V_240_240 = mercury__string__f_43_43_2_f_0((MR_String) "\n      BarrierCost: ", mdprof_fb__automatic_parallelism__autopar_reports__V_238_238);
    }
#line 3871 "mdprof_fb.automatic_parallelism.autopar_reports.c"
    {
#line 3873 "mdprof_fb.automatic_parallelism.autopar_reports.c"
      mdprof_fb__automatic_parallelism__autopar_reports__V_241_241 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_123_123, mdprof_fb__automatic_parallelism__autopar_reports__V_240_240);
    }
#line 3876 "mdprof_fb.automatic_parallelism.autopar_reports.c"
    {
#line 3878 "mdprof_fb.automatic_parallelism.autopar_reports.c"
      mdprof_fb__automatic_parallelism__autopar_reports__V_243_243 = mercury__string__f_43_43_2_f_0((MR_String) "\n      SparkCost: ", mdprof_fb__automatic_parallelism__autopar_reports__V_241_241);
    }
#line 3881 "mdprof_fb.automatic_parallelism.autopar_reports.c"
    {
#line 3883 "mdprof_fb.automatic_parallelism.autopar_reports.c"
      mdprof_fb__automatic_parallelism__autopar_reports__V_244_244 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_120_120, mdprof_fb__automatic_parallelism__autopar_reports__V_243_243);
    }
#line 3886 "mdprof_fb.automatic_parallelism.autopar_reports.c"
    {
#line 3888 "mdprof_fb.automatic_parallelism.autopar_reports.c"
      mdprof_fb__automatic_parallelism__autopar_reports__V_246_246 = mercury__string__f_43_43_2_f_0((MR_String) "\n      ParTime: ", mdprof_fb__automatic_parallelism__autopar_reports__V_244_244);
    }
#line 3891 "mdprof_fb.automatic_parallelism.autopar_reports.c"
    {
#line 3893 "mdprof_fb.automatic_parallelism.autopar_reports.c"
      mdprof_fb__automatic_parallelism__autopar_reports__V_247_247 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_117_117, mdprof_fb__automatic_parallelism__autopar_reports__V_246_246);
    }
#line 3896 "mdprof_fb.automatic_parallelism.autopar_reports.c"
    {
#line 3898 "mdprof_fb.automatic_parallelism.autopar_reports.c"
      mdprof_fb__automatic_parallelism__autopar_reports__V_249_249 = mercury__string__f_43_43_2_f_0((MR_String) "\n      SeqTime: ", mdprof_fb__automatic_parallelism__autopar_reports__V_247_247);
    }
#line 3901 "mdprof_fb.automatic_parallelism.autopar_reports.c"
    {
#line 3903 "mdprof_fb.automatic_parallelism.autopar_reports.c"
      mdprof_fb__automatic_parallelism__autopar_reports__V_250_250 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_114_114, mdprof_fb__automatic_parallelism__autopar_reports__V_249_249);
    }
#line 3906 "mdprof_fb.automatic_parallelism.autopar_reports.c"
    {
#line 3908 "mdprof_fb.automatic_parallelism.autopar_reports.c"
      mdprof_fb__automatic_parallelism__autopar_reports__V_252_252 = mercury__string__f_43_43_2_f_0((MR_String) "\n      NumCalls: ", mdprof_fb__automatic_parallelism__autopar_reports__V_250_250);
    }
#line 3911 "mdprof_fb.automatic_parallelism.autopar_reports.c"
    {
#line 3913 "mdprof_fb.automatic_parallelism.autopar_reports.c"
      mdprof_fb__automatic_parallelism__autopar_reports__V_253_253 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__DependanceString_27, mdprof_fb__automatic_parallelism__autopar_reports__V_252_252);
    }
#line 3916 "mdprof_fb.automatic_parallelism.autopar_reports.c"
    {
#line 3918 "mdprof_fb.automatic_parallelism.autopar_reports.c"
      mdprof_fb__automatic_parallelism__autopar_reports__Header2Str_46 = mercury__string__f_43_43_2_f_0((MR_String) "      Dependent: ", mdprof_fb__automatic_parallelism__autopar_reports__V_253_253);
    }
#line 271 "autopar_reports.m"
    {
#line 271 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__Header3_47 = mercury__cord__singleton_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_193_193, ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__Header2Str_46)));
    }
#line 273 "autopar_reports.m"
    {
#line 273 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__succeeded = mdbcomp__goal_path__rev_goal_path_from_string_2_p_0(mdprof_fb__automatic_parallelism__autopar_reports__GoalPathString_7, &mdprof_fb__automatic_parallelism__autopar_reports__RevGoalPathPrime_48);
    }
#line 275 "autopar_reports.m"
    if (mdprof_fb__automatic_parallelism__autopar_reports__succeeded)
#line 274 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__RevGoalPath_49 = mdprof_fb__automatic_parallelism__autopar_reports__RevGoalPathPrime_48;
#line 275 "autopar_reports.m"
    else
#line 276 "autopar_reports.m"
      {
#line 276 "autopar_reports.m"
        {
#line 276 "autopar_reports.m"
          mercury__require__unexpected_3_p_0((MR_String) "mdprof_fb.automatic_parallelism.autopar_reports", (MR_String) "predicate \140mdprof_fb.automatic_parallelism.autopar_reports.create_candidate_parallel_conj_report\'/3", (MR_String) "couldn\'t parse goal path");
#line 276 "autopar_reports.m"
          return;
        }
#line 276 "autopar_reports.m"
      }
#line 280 "autopar_reports.m"
    {
#line 280 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjunction_7_p_0(mdprof_fb__automatic_parallelism__autopar_reports__VarNameTable_4, (MR_Integer) 4, mdprof_fb__automatic_parallelism__autopar_reports__RevGoalPath_49, mdprof_fb__automatic_parallelism__autopar_reports__GoalsBefore_11, mdprof_fb__automatic_parallelism__autopar_reports__GoalsBeforeCost_12, mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_ConjNum_155_155, &mdprof_fb__automatic_parallelism__autopar_reports__ReportGoalsBefore0_51);
    }
#line 282 "autopar_reports.m"
    {
#line 282 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_157_157 = message__indent_1_f_0((MR_Integer) 3);
    }
#line 282 "autopar_reports.m"
    {
#line 282 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_160_160 = mercury__cord__singleton_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_193_193, ((MR_Box) ((MR_String) "Goals before:\n")));
    }
#line 282 "autopar_reports.m"
    {
#line 282 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_159_159 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_193_193, mdprof_fb__automatic_parallelism__autopar_reports__V_160_160, mdprof_fb__automatic_parallelism__autopar_reports__ReportGoalsBefore0_51);
    }
#line 282 "autopar_reports.m"
    {
#line 282 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__ReportGoalsBefore_52 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_193_193, mdprof_fb__automatic_parallelism__autopar_reports__V_157_157, mdprof_fb__automatic_parallelism__autopar_reports__V_159_159);
    }
#line 285 "autopar_reports.m"
    {
#line 285 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_163_163 = mercury__list__length_1_f_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_1[0], mdprof_fb__automatic_parallelism__autopar_reports__GoalsBefore_11);
    }
#line 285 "autopar_reports.m"
    mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_ConjNum_162_162 = (mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_ConjNum_155_155 + mdprof_fb__automatic_parallelism__autopar_reports__V_163_163);
#line 286 "autopar_reports.m"
    {
#line 286 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjunction_6_p_0(mdprof_fb__automatic_parallelism__autopar_reports__VarNameTable_4, (MR_Integer) 4, mdprof_fb__automatic_parallelism__autopar_reports__RevGoalPath_49, mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_ConjNum_162_162, mdprof_fb__automatic_parallelism__autopar_reports__Conjs_13, &mdprof_fb__automatic_parallelism__autopar_reports__ReportParConj0_53);
    }
#line 288 "autopar_reports.m"
    {
#line 288 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_165_165 = message__indent_1_f_0((MR_Integer) 3);
    }
#line 288 "autopar_reports.m"
    {
#line 288 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_168_168 = mercury__cord__singleton_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_193_193, ((MR_Box) ((MR_String) "Parallel conjunction:\n")));
    }
#line 288 "autopar_reports.m"
    {
#line 288 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_167_167 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_193_193, mdprof_fb__automatic_parallelism__autopar_reports__V_168_168, mdprof_fb__automatic_parallelism__autopar_reports__ReportParConj0_53);
    }
#line 288 "autopar_reports.m"
    {
#line 288 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__ReportParConj_54 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_193_193, mdprof_fb__automatic_parallelism__autopar_reports__V_165_165, mdprof_fb__automatic_parallelism__autopar_reports__V_167_167);
    }
#line 291 "autopar_reports.m"
    mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_ConjNum_170_170 = (mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_ConjNum_162_162 + (MR_Integer) 1);
#line 292 "autopar_reports.m"
    {
#line 292 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjunction_7_p_0(mdprof_fb__automatic_parallelism__autopar_reports__VarNameTable_4, (MR_Integer) 4, mdprof_fb__automatic_parallelism__autopar_reports__RevGoalPath_49, mdprof_fb__automatic_parallelism__autopar_reports__GoalsAfter_14, mdprof_fb__automatic_parallelism__autopar_reports__GoalsAfterCost_15, mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_ConjNum_170_170, &mdprof_fb__automatic_parallelism__autopar_reports__ReportGoalsAfter0_55);
    }
#line 294 "autopar_reports.m"
    {
#line 294 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_173_173 = message__indent_1_f_0((MR_Integer) 3);
    }
#line 294 "autopar_reports.m"
    {
#line 294 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_176_176 = mercury__cord__singleton_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_193_193, ((MR_Box) ((MR_String) "Goals after:\n")));
    }
#line 294 "autopar_reports.m"
    {
#line 294 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_175_175 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_193_193, mdprof_fb__automatic_parallelism__autopar_reports__V_176_176, mdprof_fb__automatic_parallelism__autopar_reports__ReportGoalsAfter0_55);
    }
#line 294 "autopar_reports.m"
    {
#line 294 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__ReportGoalsAfter_56 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_193_193, mdprof_fb__automatic_parallelism__autopar_reports__V_173_173, mdprof_fb__automatic_parallelism__autopar_reports__V_175_175);
    }
#line 298 "autopar_reports.m"
    {
#line 298 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_182_182 = message__nl_0_f_0();
    }
#line 298 "autopar_reports.m"
    {
#line 298 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_185_185 = message__nl_0_f_0();
    }
#line 298 "autopar_reports.m"
    {
#line 298 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_187_187 = message__nl_0_f_0();
    }
#line 298 "autopar_reports.m"
    {
#line 298 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_186_186 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_193_193, mdprof_fb__automatic_parallelism__autopar_reports__ReportGoalsAfter_56, mdprof_fb__automatic_parallelism__autopar_reports__V_187_187);
    }
#line 298 "autopar_reports.m"
    {
#line 298 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_184_184 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_193_193, mdprof_fb__automatic_parallelism__autopar_reports__V_185_185, mdprof_fb__automatic_parallelism__autopar_reports__V_186_186);
    }
#line 298 "autopar_reports.m"
    {
#line 298 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_183_183 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_193_193, mdprof_fb__automatic_parallelism__autopar_reports__ReportParConj_54, mdprof_fb__automatic_parallelism__autopar_reports__V_184_184);
    }
#line 297 "autopar_reports.m"
    {
#line 297 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_181_181 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_193_193, mdprof_fb__automatic_parallelism__autopar_reports__V_182_182, mdprof_fb__automatic_parallelism__autopar_reports__V_183_183);
    }
#line 297 "autopar_reports.m"
    {
#line 297 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_180_180 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_193_193, mdprof_fb__automatic_parallelism__autopar_reports__ReportGoalsBefore_52, mdprof_fb__automatic_parallelism__autopar_reports__V_181_181);
    }
#line 297 "autopar_reports.m"
    {
#line 297 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_179_179 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_193_193, mdprof_fb__automatic_parallelism__autopar_reports__Header3_47, mdprof_fb__automatic_parallelism__autopar_reports__V_180_180);
    }
#line 297 "autopar_reports.m"
    {
#line 297 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_178_178 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_193_193, mdprof_fb__automatic_parallelism__autopar_reports__Header2_36, mdprof_fb__automatic_parallelism__autopar_reports__V_179_179);
    }
#line 297 "autopar_reports.m"
    {
#line 297 "autopar_reports.m"
      *mdprof_fb__automatic_parallelism__autopar_reports__Report_6 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_193_193, mdprof_fb__automatic_parallelism__autopar_reports__Header1_35, mdprof_fb__automatic_parallelism__autopar_reports__V_178_178);
    }
#line 201 "autopar_reports.m"
  }
#line 30 "autopar_reports.m"
}

#line 58 "autopar_reports.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__print_feedback_report_4_p_0_1(
#line 58 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure_arg,
#line 58 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1,
#line 58 "autopar_reports.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2)
#line 58 "autopar_reports.m"
{
#line 58 "autopar_reports.m"
  {
#line 58 "autopar_reports.m"
    MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure = mdprof_fb__automatic_parallelism__autopar_reports__closure_arg;
#line 58 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__conv0_Report_4;

#line 58 "autopar_reports.m"
    {
#line 58 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__create_feedback_report_2_p_0(((MR_Word) mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1), &mdprof_fb__automatic_parallelism__autopar_reports__conv0_Report_4);
    }
#line 58 "autopar_reports.m"
    *mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2 = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__conv0_Report_4));
#line 58 "autopar_reports.m"
  }
#line 58 "autopar_reports.m"
}

#line 27 "autopar_reports.m"
void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__print_feedback_report_4_p_0(
#line 27 "autopar_reports.m"
  MR_String mdprof_fb__automatic_parallelism__autopar_reports__ProgName_5,
#line 27 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__Feedback_6)
#line 27 "autopar_reports.m"
{
#line 56 "autopar_reports.m"
  {
#line 56 "autopar_reports.m"
    MR_bool mdprof_fb__automatic_parallelism__autopar_reports__succeeded;
#line 56 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__AllFeedback_8;
#line 56 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__Reports_9;
#line 56 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__ReportStr_10;
#line 56 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_26_26;
#line 56 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_27_27;
#line 56 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_29_29;

#line 57 "autopar_reports.m"
    {
#line 57 "autopar_reports.m"
      mdbcomp__feedback__get_all_feedback_data_2_p_0(mdprof_fb__automatic_parallelism__autopar_reports__Feedback_6, &mdprof_fb__automatic_parallelism__autopar_reports__AllFeedback_8);
    }
#line 58 "autopar_reports.m"
    {
#line 58 "autopar_reports.m"
      mercury__list__map_3_p_0((MR_Word) &mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_data_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_2[2], mdprof_fb__automatic_parallelism__autopar_reports__AllFeedback_8, &mdprof_fb__automatic_parallelism__autopar_reports__Reports_9);
    }
#line 59 "autopar_reports.m"
    {
#line 59 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__ReportStr_10 = mercury__string__append_list_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__Reports_9);
    }
#line 4163 "mdprof_fb.automatic_parallelism.autopar_reports.c"
    {
#line 4165 "mdprof_fb.automatic_parallelism.autopar_reports.c"
      mdprof_fb__automatic_parallelism__autopar_reports__V_26_26 = mercury__string__f_43_43_2_f_0((MR_String) ":\n\n", mdprof_fb__automatic_parallelism__autopar_reports__ReportStr_10);
    }
#line 4168 "mdprof_fb.automatic_parallelism.autopar_reports.c"
    {
#line 4170 "mdprof_fb.automatic_parallelism.autopar_reports.c"
      mdprof_fb__automatic_parallelism__autopar_reports__V_27_27 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__ProgName_5, mdprof_fb__automatic_parallelism__autopar_reports__V_26_26);
    }
#line 4173 "mdprof_fb.automatic_parallelism.autopar_reports.c"
    {
#line 4175 "mdprof_fb.automatic_parallelism.autopar_reports.c"
      mdprof_fb__automatic_parallelism__autopar_reports__V_29_29 = mercury__string__f_43_43_2_f_0((MR_String) "Feedback report for ", mdprof_fb__automatic_parallelism__autopar_reports__V_27_27);
    }
#line 4178 "mdprof_fb.automatic_parallelism.autopar_reports.c"
    {
#line 4180 "mdprof_fb.automatic_parallelism.autopar_reports.c"
      mercury__io__write_string_3_p_0(mdprof_fb__automatic_parallelism__autopar_reports__V_29_29);
#line 4182 "mdprof_fb.automatic_parallelism.autopar_reports.c"
      return;
    }
#line 56 "autopar_reports.m"
  }
#line 27 "autopar_reports.m"
}

void mercury__mdprof_fb__automatic_parallelism__autopar_reports__init(void)
{
}

void mercury__mdprof_fb__automatic_parallelism__autopar_reports__init_type_tables(void)
{
}

void mercury__mdprof_fb__automatic_parallelism__autopar_reports__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module mdprof_fb.automatic_parallelism.autopar_reports. */
