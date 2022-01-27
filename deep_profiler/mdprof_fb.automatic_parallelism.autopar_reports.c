/*
** Automatically generated from `autopar_reports.m'
** by the Mercury compiler,
** version rotd-2015-03-24
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
#include "integer.mih"
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
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "mdprof_fb.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 91 "mdprof_fb.automatic_parallelism.autopar_reports.c"
static const MR_FA_PseudoTypeInfo_Struct2 mdprof_fb__automatic_parallelism__autopar_reports__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0;

#line 94 "mdprof_fb.automatic_parallelism.autopar_reports.c"
static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_reports__mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0;

#line 97 "mdprof_fb.automatic_parallelism.autopar_reports.c"
static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_reports__mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0;

#line 100 "mdprof_fb.automatic_parallelism.autopar_reports.c"
static const MR_FA_PseudoTypeInfo_Struct2 mdprof_fb__automatic_parallelism__autopar_reports__pair__pti_pair_2__plain_mdbcomp__program_representation__type_ctor_info_string_proc_label_0__plain_mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0;

#line 103 "mdprof_fb.automatic_parallelism.autopar_reports.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_reports__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0;

#line 106 "mdprof_fb.automatic_parallelism.autopar_reports.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_reports__mdbcomp__feedback__automatic_parallelism__pti_candidate_par_conjunction_1__plain_mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0;

#line 109 "mdprof_fb.automatic_parallelism.autopar_reports.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_reports__mdbcomp__program_representation__pti_goal_rep_1__plain_mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0;

#line 112 "mdprof_fb.automatic_parallelism.autopar_reports.c"
static const MR_FA_PseudoTypeInfo_Struct2 mdprof_fb__automatic_parallelism__autopar_reports__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_float_0;

#line 115 "mdprof_fb.automatic_parallelism.autopar_reports.c"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_p_0_10001(
#line 118 "mdprof_fb.automatic_parallelism.autopar_reports.c"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure_arg,
#line 120 "mdprof_fb.automatic_parallelism.autopar_reports.c"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1,
#line 122 "mdprof_fb.automatic_parallelism.autopar_reports.c"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2,
#line 124 "mdprof_fb.automatic_parallelism.autopar_reports.c"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_3);

#line 149 "autopar_reports.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_99_111_110_106_117_110_99_116_105_111_110_115_95_105_110_95_112_114_111_99_115_95_95_91_49_93_95_48_3_p_0(
#line 149 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__1_1,
#line 149 "autopar_reports.m"
  MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_NumConjs_0_10,
#line 149 "autopar_reports.m"
  MR_Integer * mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_NumConjs_11);

#line 387 "autopar_reports.m"
static MR_Word MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__IntroducedFrom__func__format_sequential_conjuncts__387__1_1_f_0(
#line 387 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__1_46);

#line 339 "autopar_reports.m"
static MR_Float MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__IntroducedFrom__func__format_parallel_conjuncts__339__1_2_f_0(
#line 339 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__1_43,
#line 339 "autopar_reports.m"
  MR_Float mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__2_44);

#line 335 "autopar_reports.m"
static MR_Word MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__IntroducedFrom__func__format_parallel_conjuncts__335__1_1_f_0(
#line 335 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__1_74);

#line 193 "autopar_reports.m"
static MR_String MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__IntroducedFrom__func__create_push_goal_report__193__1_1_f_0(
#line 193 "autopar_reports.m"
  MR_String mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__1_21);

#line 91 "autopar_reports.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__IntroducedFrom__pred__create_feedback_autopar_report__91__1_3_p_0(
#line 91 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__1_100,
#line 91 "autopar_reports.m"
  MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__2_101,
#line 91 "autopar_reports.m"
  MR_Integer * mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__3_102);

#line 237 "autopar_reports.m"
static MR_String MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__IntroducedFrom__func__create_candidate_parallel_conj_report__237__1_1_f_0(
#line 237 "autopar_reports.m"
  MR_String mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__1_76);

#line 439 "autopar_reports.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_p_0_2(
#line 439 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure_arg,
#line 439 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1,
#line 439 "autopar_reports.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2);

#line 439 "autopar_reports.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_p_0_1(
#line 439 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure_arg,
#line 439 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1,
#line 439 "autopar_reports.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2);

#line 401 "autopar_reports.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_p_0(
#line 401 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__1_1,
#line 401 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__2_2,
#line 401 "autopar_reports.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__3_3);

#line 446 "autopar_reports.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__format_var_use_line_3_p_0(
#line 446 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__VarNameTable_4,
#line 446 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__2_2,
#line 446 "autopar_reports.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__3_3);

#line 387 "autopar_reports.m"
static MR_Box MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjuncts_8_p_0_1(
#line 387 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure_arg,
#line 387 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1);

#line 380 "autopar_reports.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjuncts_8_p_0(
#line 380 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__VarNameTable_1,
#line 380 "autopar_reports.m"
  MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__Indent_2,
#line 380 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__RevGoalPath_3,
#line 380 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__4_4,
#line 380 "autopar_reports.m"
  MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_ConjNum_0_5,
#line 380 "autopar_reports.m"
  MR_Integer * mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_ConjNum_6,
#line 380 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_0_7,
#line 380 "autopar_reports.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_8);

#line 358 "autopar_reports.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjunction_7_p_0(
#line 358 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__VarNameTable_8,
#line 358 "autopar_reports.m"
  MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__Indent_9,
#line 358 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__RevGoalPath_10,
#line 358 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__Goals_11,
#line 358 "autopar_reports.m"
  MR_Float mdprof_fb__automatic_parallelism__autopar_reports__Cost_12,
#line 358 "autopar_reports.m"
  MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__FirstConjNum_13,
#line 358 "autopar_reports.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_16);

#line 339 "autopar_reports.m"
static MR_Box MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjuncts_7_p_0_2(
#line 339 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure_arg,
#line 339 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1,
#line 339 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2);

#line 335 "autopar_reports.m"
static MR_Box MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjuncts_7_p_0_1(
#line 335 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure_arg,
#line 335 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1);

#line 315 "autopar_reports.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjuncts_7_p_0(
#line 315 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__1_1,
#line 315 "autopar_reports.m"
  MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__Indent_2,
#line 315 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__3_3,
#line 315 "autopar_reports.m"
  MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__4_4,
#line 315 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__5_5,
#line 315 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_0_6,
#line 315 "autopar_reports.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_7);

#line 304 "autopar_reports.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjunction_6_p_0(
#line 304 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__VarNameTable_7,
#line 304 "autopar_reports.m"
  MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__Indent_8,
#line 304 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__RevGoalPath_9,
#line 304 "autopar_reports.m"
  MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__ConjNum_10,
#line 304 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__Conjs_11,
#line 304 "autopar_reports.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_14);

#line 179 "autopar_reports.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_proc_report_2_p_0_2(
#line 179 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure_arg,
#line 179 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1,
#line 179 "autopar_reports.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2);

#line 178 "autopar_reports.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_proc_report_2_p_0_1(
#line 178 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure_arg,
#line 178 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1,
#line 178 "autopar_reports.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2);

#line 200 "autopar_reports.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_proc_report_2_p_0(
#line 200 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__1_1,
#line 200 "autopar_reports.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_reports__Report_5);

#line 193 "autopar_reports.m"
static MR_Box MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__create_push_goal_report_2_p_0_1(
#line 193 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure_arg,
#line 193 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1);

#line 187 "autopar_reports.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__create_push_goal_report_2_p_0(
#line 187 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__PushGoal_3,
#line 187 "autopar_reports.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_reports__Report_4);

#line 156 "autopar_reports.m"
static MR_String MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__alg_for_finding_best_par_to_string_1_f_0(
#line 156 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__Alg_3);

#line 145 "autopar_reports.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__create_feedback_autopar_report_2_p_0_2(
#line 145 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure_arg,
#line 145 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1,
#line 145 "autopar_reports.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2);

#line 91 "autopar_reports.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__create_feedback_autopar_report_2_p_0_1(
#line 91 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure_arg,
#line 91 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1,
#line 91 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2,
#line 91 "autopar_reports.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_3);

#line 84 "autopar_reports.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__create_feedback_autopar_report_2_p_0(
#line 84 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__CandidateParConjs_3,
#line 84 "autopar_reports.m"
  MR_String * mdprof_fb__automatic_parallelism__autopar_reports__Report_4);

#line 237 "autopar_reports.m"
static MR_Box MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_p_0_2(
#line 237 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure_arg,
#line 237 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1);

#line 218 "autopar_reports.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_p_0_1(
#line 218 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure_arg,
#line 218 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1,
#line 218 "autopar_reports.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2);


static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_1[5][2];

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_2[10][3];

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_3[1][1];

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_4[5][6];

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_5[4][5];




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

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_2[10][3] = {
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
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_5[0])),
    ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_4[1])),
    ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__create_feedback_autopar_report_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_5[1])),
    ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__create_feedback_autopar_report_2_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_5[0])),
    ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__create_push_goal_report_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_5[2])),
    ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_proc_report_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_5[3])),
    ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjuncts_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_4[3])),
    ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjuncts_7_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_5[3])),
    ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjuncts_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_3[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
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

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_5[4][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_reports__pair__pti_pair_2__plain_mdbcomp__program_representation__type_ctor_info_string_proc_label_0__plain_mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_reports__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_push_goal_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_reports__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0)),
    ((MR_Box) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0))
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



#line 629 "mdprof_fb.automatic_parallelism.autopar_reports.c"
static const MR_FA_PseudoTypeInfo_Struct2 mdprof_fb__automatic_parallelism__autopar_reports__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 638 "mdprof_fb.automatic_parallelism.autopar_reports.c"
static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_reports__mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0 = {
  &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_goal_rep_1,
  {
    (MR_TypeInfo) &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0
  }
};

#line 646 "mdprof_fb.automatic_parallelism.autopar_reports.c"
static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_reports__mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0 = {
  &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunctions_proc_1,
  {
    (MR_TypeInfo) &mdprof_fb__automatic_parallelism__autopar_reports__mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0
  }
};

#line 654 "mdprof_fb.automatic_parallelism.autopar_reports.c"
static const MR_FA_PseudoTypeInfo_Struct2 mdprof_fb__automatic_parallelism__autopar_reports__pair__pti_pair_2__plain_mdbcomp__program_representation__type_ctor_info_string_proc_label_0__plain_mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0,
    (MR_PseudoTypeInfo) &mdprof_fb__automatic_parallelism__autopar_reports__mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0
  }
};

#line 663 "mdprof_fb.automatic_parallelism.autopar_reports.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_reports__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 671 "mdprof_fb.automatic_parallelism.autopar_reports.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_reports__mdbcomp__feedback__automatic_parallelism__pti_candidate_par_conjunction_1__plain_mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0 = {
  &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunction_1,
  {
    (MR_PseudoTypeInfo) &mdprof_fb__automatic_parallelism__autopar_reports__mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0
  }
};

#line 679 "mdprof_fb.automatic_parallelism.autopar_reports.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_reports__mdbcomp__program_representation__pti_goal_rep_1__plain_mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0 = {
  &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_goal_rep_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0
  }
};

#line 687 "mdprof_fb.automatic_parallelism.autopar_reports.c"
static const MR_FA_PseudoTypeInfo_Struct2 mdprof_fb__automatic_parallelism__autopar_reports__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_float_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
  }
};

#line 696 "mdprof_fb.automatic_parallelism.autopar_reports.c"
const MR_BaseTypeclassInfo base_typeclass_info_program_representation_utils__goal_annotation__arity1__mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_p_0_10001))
};

#line 706 "mdprof_fb.automatic_parallelism.autopar_reports.c"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_p_0_10001(
#line 709 "mdprof_fb.automatic_parallelism.autopar_reports.c"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure_arg,
#line 711 "mdprof_fb.automatic_parallelism.autopar_reports.c"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1,
#line 713 "mdprof_fb.automatic_parallelism.autopar_reports.c"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2,
#line 715 "mdprof_fb.automatic_parallelism.autopar_reports.c"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_3)
#line 717 "mdprof_fb.automatic_parallelism.autopar_reports.c"
{
#line 719 "mdprof_fb.automatic_parallelism.autopar_reports.c"
  {
#line 721 "mdprof_fb.automatic_parallelism.autopar_reports.c"
    MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure;
#line 723 "mdprof_fb.automatic_parallelism.autopar_reports.c"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__conv0_HeadVar__3_3;

#line 726 "mdprof_fb.automatic_parallelism.autopar_reports.c"
    mdprof_fb__automatic_parallelism__autopar_reports__closure = mdprof_fb__automatic_parallelism__autopar_reports__closure_arg;
#line 728 "mdprof_fb.automatic_parallelism.autopar_reports.c"
    {
#line 730 "mdprof_fb.automatic_parallelism.autopar_reports.c"
      mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_p_0(((MR_Word) mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1), ((MR_Word) mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2), &mdprof_fb__automatic_parallelism__autopar_reports__conv0_HeadVar__3_3);
    }
#line 733 "mdprof_fb.automatic_parallelism.autopar_reports.c"
    *mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_3 = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__conv0_HeadVar__3_3));
#line 735 "mdprof_fb.automatic_parallelism.autopar_reports.c"
  }
#line 737 "mdprof_fb.automatic_parallelism.autopar_reports.c"
}

#line 149 "autopar_reports.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_99_111_110_106_117_110_99_116_105_111_110_115_95_105_110_95_112_114_111_99_115_95_95_91_49_93_95_48_3_p_0(
#line 149 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__1_1,
#line 149 "autopar_reports.m"
  MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_NumConjs_0_10,
#line 149 "autopar_reports.m"
  MR_Integer * mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_NumConjs_11)
#line 149 "autopar_reports.m"
{
#line 152 "autopar_reports.m"
  {
#line 152 "autopar_reports.m"
    MR_bool mdprof_fb__automatic_parallelism__autopar_reports__succeeded;
#line 152 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__Cands_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__1_1, (MR_Integer) 1)));
#line 152 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__Conjs_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__Cands_5, (MR_Integer) 2)));
#line 152 "autopar_reports.m"
    MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__V_13_13;
#line 152 "autopar_reports.m"
    MR_Box mdprof_fb__automatic_parallelism__autopar_reports__V_4_4 = (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__1_1, (MR_Integer) 0));
#line 153 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports___VarNameTable_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__Cands_5, (MR_Integer) 0)));
#line 153 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports___Pushes_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__Cands_5, (MR_Integer) 1)));

#line 154 "autopar_reports.m"
    {
#line 154 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_13_13 = mercury__list__length_1_f_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_1[3], mdprof_fb__automatic_parallelism__autopar_reports__Conjs_9);
    }
#line 154 "autopar_reports.m"
    *mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_NumConjs_11 = (mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_NumConjs_0_10 + mdprof_fb__automatic_parallelism__autopar_reports__V_13_13);
#line 152 "autopar_reports.m"
  }
#line 149 "autopar_reports.m"
}

#line 387 "autopar_reports.m"
static MR_Word MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__IntroducedFrom__func__format_sequential_conjuncts__387__1_1_f_0(
#line 387 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__1_46)
#line 387 "autopar_reports.m"
{
#line 387 "autopar_reports.m"
  {
#line 387 "autopar_reports.m"
    MR_bool mdprof_fb__automatic_parallelism__autopar_reports__succeeded;
#line 387 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__2_47;
#line 387 "autopar_reports.m"
    MR_Box mdprof_fb__automatic_parallelism__autopar_reports__conv0_HeadVar__2_47;

#line 387 "autopar_reports.m"
    {
#line 387 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__conv0_HeadVar__2_47 = mercury__std_util__id_1_f_0((MR_Word) &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0, ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__1_46)));
    }
#line 387 "autopar_reports.m"
    mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__2_47 = ((MR_Word) mdprof_fb__automatic_parallelism__autopar_reports__conv0_HeadVar__2_47);
#line 387 "autopar_reports.m"
    return mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__2_47;
#line 387 "autopar_reports.m"
  }
#line 387 "autopar_reports.m"
}

#line 339 "autopar_reports.m"
static MR_Float MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__IntroducedFrom__func__format_parallel_conjuncts__339__1_2_f_0(
#line 339 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__1_43,
#line 339 "autopar_reports.m"
  MR_Float mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__2_44)
#line 339 "autopar_reports.m"
{
#line 339 "autopar_reports.m"
  {
#line 339 "autopar_reports.m"
    MR_bool mdprof_fb__automatic_parallelism__autopar_reports__succeeded;
#line 339 "autopar_reports.m"
    MR_Float mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__3_45;
#line 339 "autopar_reports.m"
    MR_Float mdprof_fb__automatic_parallelism__autopar_reports__V_46_46;
#line 339 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__1_43, (MR_Integer) 2)));
#line 341 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__1_43, (MR_Integer) 0)));
#line 341 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__1_43, (MR_Integer) 1)));
#line 341 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_70_70;
#line 341 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_71_71;
#line 341 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_72_72;

#line 341 "autopar_reports.m"
    mdprof_fb__automatic_parallelism__autopar_reports__V_46_46 = MR_unbox_float((MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__V_47_47, (MR_Integer) 0)));
#line 341 "autopar_reports.m"
    mdprof_fb__automatic_parallelism__autopar_reports__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__V_47_47, (MR_Integer) 1)));
#line 341 "autopar_reports.m"
    mdprof_fb__automatic_parallelism__autopar_reports__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__V_47_47, (MR_Integer) 2)));
#line 341 "autopar_reports.m"
    mdprof_fb__automatic_parallelism__autopar_reports__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__V_47_47, (MR_Integer) 3)));
#line 341 "autopar_reports.m"
    mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__3_45 = (mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__2_44 + mdprof_fb__automatic_parallelism__autopar_reports__V_46_46);
#line 339 "autopar_reports.m"
    return mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__3_45;
#line 339 "autopar_reports.m"
  }
#line 339 "autopar_reports.m"
}

#line 335 "autopar_reports.m"
static MR_Word MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__IntroducedFrom__func__format_parallel_conjuncts__335__1_1_f_0(
#line 335 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__1_74)
#line 335 "autopar_reports.m"
{
#line 335 "autopar_reports.m"
  {
#line 335 "autopar_reports.m"
    MR_bool mdprof_fb__automatic_parallelism__autopar_reports__succeeded;
#line 335 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__2_75;
#line 335 "autopar_reports.m"
    MR_Box mdprof_fb__automatic_parallelism__autopar_reports__conv0_HeadVar__2_75;

#line 335 "autopar_reports.m"
    {
#line 335 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__conv0_HeadVar__2_75 = mercury__std_util__id_1_f_0((MR_Word) &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0, ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__1_74)));
    }
#line 335 "autopar_reports.m"
    mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__2_75 = ((MR_Word) mdprof_fb__automatic_parallelism__autopar_reports__conv0_HeadVar__2_75);
#line 335 "autopar_reports.m"
    return mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__2_75;
#line 335 "autopar_reports.m"
  }
#line 335 "autopar_reports.m"
}

#line 193 "autopar_reports.m"
static MR_String MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__IntroducedFrom__func__create_push_goal_report__193__1_1_f_0(
#line 193 "autopar_reports.m"
  MR_String mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__1_21)
#line 193 "autopar_reports.m"
{
#line 193 "autopar_reports.m"
  {
#line 193 "autopar_reports.m"
    MR_bool mdprof_fb__automatic_parallelism__autopar_reports__succeeded;
#line 193 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__2_22;
#line 193 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_24_24;
#line 193 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_25_25;

#line 195 "autopar_reports.m"
    {
#line 195 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_25_25 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 195 "autopar_reports.m"
      MR_hl_field(MR_mktag(2), mdprof_fb__automatic_parallelism__autopar_reports__V_25_25, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__1_21));
#line 195 "autopar_reports.m"
    }
#line 195 "autopar_reports.m"
    {
#line 195 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 195 "autopar_reports.m"
      MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__V_24_24, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__V_25_25));
#line 195 "autopar_reports.m"
      MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 195 "autopar_reports.m"
    }
#line 195 "autopar_reports.m"
    {
#line 195 "autopar_reports.m"
      return mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__2_22 = mercury__string__format_2_f_0((MR_String) "        %s\n", mdprof_fb__automatic_parallelism__autopar_reports__V_24_24);
    }
#line 193 "autopar_reports.m"
    return mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__2_22;
#line 193 "autopar_reports.m"
  }
#line 193 "autopar_reports.m"
}

#line 91 "autopar_reports.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__IntroducedFrom__pred__create_feedback_autopar_report__91__1_3_p_0(
#line 91 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__1_100,
#line 91 "autopar_reports.m"
  MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__2_101,
#line 91 "autopar_reports.m"
  MR_Integer * mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__3_102)
#line 91 "autopar_reports.m"
{
#line 91 "autopar_reports.m"
  {
#line 91 "autopar_reports.m"
    MR_bool mdprof_fb__automatic_parallelism__autopar_reports__succeeded;

#line 91 "autopar_reports.m"
    {
#line 91 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_99_111_110_106_117_110_99_116_105_111_110_115_95_105_110_95_112_114_111_99_115_95_95_91_49_93_95_48_3_p_0(mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__1_100, mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__2_101, mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__3_102);
#line 91 "autopar_reports.m"
      return;
    }
#line 91 "autopar_reports.m"
  }
#line 91 "autopar_reports.m"
}

#line 237 "autopar_reports.m"
static MR_String MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__IntroducedFrom__func__create_candidate_parallel_conj_report__237__1_1_f_0(
#line 237 "autopar_reports.m"
  MR_String mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__1_76)
#line 237 "autopar_reports.m"
{
#line 237 "autopar_reports.m"
  {
#line 237 "autopar_reports.m"
    MR_bool mdprof_fb__automatic_parallelism__autopar_reports__succeeded;
#line 237 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__2_77;
#line 237 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_79_79;
#line 237 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_80_80;

#line 239 "autopar_reports.m"
    {
#line 239 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_80_80 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 239 "autopar_reports.m"
      MR_hl_field(MR_mktag(2), mdprof_fb__automatic_parallelism__autopar_reports__V_80_80, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__1_76));
#line 239 "autopar_reports.m"
    }
#line 239 "autopar_reports.m"
    {
#line 239 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 239 "autopar_reports.m"
      MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__V_79_79, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__V_80_80));
#line 239 "autopar_reports.m"
      MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__V_79_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 239 "autopar_reports.m"
    }
#line 239 "autopar_reports.m"
    {
#line 239 "autopar_reports.m"
      return mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__2_77 = mercury__string__format_2_f_0((MR_String) "                %s\n", mdprof_fb__automatic_parallelism__autopar_reports__V_79_79);
    }
#line 237 "autopar_reports.m"
    return mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__2_77;
#line 237 "autopar_reports.m"
  }
#line 237 "autopar_reports.m"
}

#line 439 "autopar_reports.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_p_0_2(
#line 439 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure_arg,
#line 439 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1,
#line 439 "autopar_reports.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2)
#line 439 "autopar_reports.m"
{
#line 439 "autopar_reports.m"
  {
#line 439 "autopar_reports.m"
    MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure = mdprof_fb__automatic_parallelism__autopar_reports__closure_arg;
#line 439 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__conv1_HeadVar__3_3;

#line 439 "autopar_reports.m"
    {
#line 439 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__format_var_use_line_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__closure, (MR_Integer) 3))), ((MR_Word) mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1), &mdprof_fb__automatic_parallelism__autopar_reports__conv1_HeadVar__3_3);
    }
#line 439 "autopar_reports.m"
    *mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2 = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__conv1_HeadVar__3_3));
#line 439 "autopar_reports.m"
  }
#line 439 "autopar_reports.m"
}

#line 439 "autopar_reports.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_p_0_1(
#line 439 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure_arg,
#line 439 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1,
#line 439 "autopar_reports.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2)
#line 439 "autopar_reports.m"
{
#line 439 "autopar_reports.m"
  {
#line 439 "autopar_reports.m"
    MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure = mdprof_fb__automatic_parallelism__autopar_reports__closure_arg;
#line 439 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__conv0_HeadVar__3_3;

#line 439 "autopar_reports.m"
    {
#line 439 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__format_var_use_line_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__closure, (MR_Integer) 3))), ((MR_Word) mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1), &mdprof_fb__automatic_parallelism__autopar_reports__conv0_HeadVar__3_3);
    }
#line 439 "autopar_reports.m"
    *mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2 = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__conv0_HeadVar__3_3));
#line 439 "autopar_reports.m"
  }
#line 439 "autopar_reports.m"
}

#line 401 "autopar_reports.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_p_0(
#line 401 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__1_1,
#line 401 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__2_2,
#line 401 "autopar_reports.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__3_3)
#line 401 "autopar_reports.m"
{
#line 407 "autopar_reports.m"
  {
#line 407 "autopar_reports.m"
    MR_bool mdprof_fb__automatic_parallelism__autopar_reports__succeeded;
#line 407 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__TypeInfo_28_28;
#line 407 "autopar_reports.m"
    MR_Float mdprof_fb__automatic_parallelism__autopar_reports__CostPercall_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__2_2, (MR_Integer) 0)));
#line 407 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__CostAboveThreshold_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__2_2, (MR_Integer) 1)));
#line 407 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__Productions_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__2_2, (MR_Integer) 2)));
#line 407 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__Consumptions_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__2_2, (MR_Integer) 3)));
#line 407 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__CostAboveThresholdStr_11;
#line 407 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__CostLine_12;
#line 407 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__ProductionsReport_13;
#line 407 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__ConsumptionsReport_14;
#line 407 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_15_15;
#line 407 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_19_19;
#line 407 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_25_25;
#line 407 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_26_26;
#line 407 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_30_30;
#line 407 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_36_36;
#line 407 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_37_37;
#line 407 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_39_39;
#line 407 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_40_40;
#line 407 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_47_47;

#line 413 "autopar_reports.m"
    if ((mdprof_fb__automatic_parallelism__autopar_reports__CostAboveThreshold_8 == (MR_Integer) 0))
#line 412 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__CostAboveThresholdStr_11 = (MR_String) "above threshold";
#line 413 "autopar_reports.m"
    else
#line 415 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__CostAboveThresholdStr_11 = (MR_String) "not above threshold";
#line 418 "autopar_reports.m"
    {
#line 418 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_19_19 = measurement_units__two_decimal_fraction_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__CostPercall_7);
    }
#line 1138 "mdprof_fb.automatic_parallelism.autopar_reports.c"
    mdprof_fb__automatic_parallelism__autopar_reports__V_36_36 = (MR_Word) &mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_3[0];
#line 418 "autopar_reports.m"
    {
#line 418 "autopar_reports.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mdprof_fb__automatic_parallelism__autopar_reports__V_36_36, mdprof_fb__automatic_parallelism__autopar_reports__CostAboveThresholdStr_11, &mdprof_fb__automatic_parallelism__autopar_reports__V_30_30);
    }
#line 417 "autopar_reports.m"
    {
#line 417 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_37_37 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_30_30, (MR_String) ")");
    }
#line 417 "autopar_reports.m"
    {
#line 417 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_39_39 = mercury__string__f_43_43_2_f_0((MR_String) " (", mdprof_fb__automatic_parallelism__autopar_reports__V_37_37);
    }
#line 418 "autopar_reports.m"
    {
#line 418 "autopar_reports.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mdprof_fb__automatic_parallelism__autopar_reports__V_36_36, mdprof_fb__automatic_parallelism__autopar_reports__V_19_19, &mdprof_fb__automatic_parallelism__autopar_reports__V_40_40);
    }
#line 417 "autopar_reports.m"
    {
#line 417 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_47_47 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_40_40, mdprof_fb__automatic_parallelism__autopar_reports__V_39_39);
    }
#line 417 "autopar_reports.m"
    {
#line 417 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_15_15 = mercury__string__f_43_43_2_f_0((MR_String) "cost: ", mdprof_fb__automatic_parallelism__autopar_reports__V_47_47);
    }
#line 417 "autopar_reports.m"
    {
#line 417 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__CostLine_12 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__V_15_15)));
    }
#line 438 "autopar_reports.m"
    if ((mdprof_fb__automatic_parallelism__autopar_reports__Productions_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 442 "autopar_reports.m"
      {
#line 443 "autopar_reports.m"
        {
#line 443 "autopar_reports.m"
          mdprof_fb__automatic_parallelism__autopar_reports__ProductionsReport_13 = mercury__cord__empty_0_f_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_1[2]);
        }
#line 442 "autopar_reports.m"
      }
#line 438 "autopar_reports.m"
    else
#line 438 "autopar_reports.m"
      {
#line 438 "autopar_reports.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__TypeInfo_21_65;
#line 438 "autopar_reports.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__Lines_55;
#line 438 "autopar_reports.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_56_56;
#line 438 "autopar_reports.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_57_57;
#line 438 "autopar_reports.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_58_58;
#line 438 "autopar_reports.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_61_61;

#line 439 "autopar_reports.m"
        {
#line 439 "autopar_reports.m"
          mdprof_fb__automatic_parallelism__autopar_reports__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 439 "autopar_reports.m"
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__V_56_56, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_4[4]));
#line 439 "autopar_reports.m"
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__V_56_56, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_p_0_1));
#line 439 "autopar_reports.m"
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__V_56_56, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 439 "autopar_reports.m"
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__V_56_56, 3) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__1_1));
#line 439 "autopar_reports.m"
        }
#line 1217 "mdprof_fb.automatic_parallelism.autopar_reports.c"
        mdprof_fb__automatic_parallelism__autopar_reports__TypeInfo_21_65 = (MR_Word) &mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_1[2];
#line 439 "autopar_reports.m"
        {
#line 439 "autopar_reports.m"
          mercury__list__map_3_p_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_2[1], mdprof_fb__automatic_parallelism__autopar_reports__TypeInfo_21_65, mdprof_fb__automatic_parallelism__autopar_reports__V_56_56, mdprof_fb__automatic_parallelism__autopar_reports__Productions_9, &mdprof_fb__automatic_parallelism__autopar_reports__Lines_55);
        }
#line 440 "autopar_reports.m"
        {
#line 440 "autopar_reports.m"
          mdprof_fb__automatic_parallelism__autopar_reports__V_58_58 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "Productions:")));
        }
#line 440 "autopar_reports.m"
        {
#line 440 "autopar_reports.m"
          mdprof_fb__automatic_parallelism__autopar_reports__V_57_57 = mercury__cord__singleton_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeInfo_21_65, ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__V_58_58)));
        }
#line 440 "autopar_reports.m"
        {
#line 440 "autopar_reports.m"
          mdprof_fb__automatic_parallelism__autopar_reports__V_61_61 = mercury__cord__from_list_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeInfo_21_65, mdprof_fb__automatic_parallelism__autopar_reports__Lines_55);
        }
#line 440 "autopar_reports.m"
        {
#line 440 "autopar_reports.m"
          mdprof_fb__automatic_parallelism__autopar_reports__ProductionsReport_13 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeInfo_21_65, mdprof_fb__automatic_parallelism__autopar_reports__V_57_57, mdprof_fb__automatic_parallelism__autopar_reports__V_61_61);
        }
#line 438 "autopar_reports.m"
      }
#line 438 "autopar_reports.m"
    if ((mdprof_fb__automatic_parallelism__autopar_reports__Consumptions_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 442 "autopar_reports.m"
      {
#line 443 "autopar_reports.m"
        {
#line 443 "autopar_reports.m"
          mdprof_fb__automatic_parallelism__autopar_reports__ConsumptionsReport_14 = mercury__cord__empty_0_f_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_1[2]);
        }
#line 442 "autopar_reports.m"
      }
#line 438 "autopar_reports.m"
    else
#line 438 "autopar_reports.m"
      {
#line 438 "autopar_reports.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__TypeInfo_21_84;
#line 438 "autopar_reports.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__Lines_74;
#line 438 "autopar_reports.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_75_75;
#line 438 "autopar_reports.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_76_76;
#line 438 "autopar_reports.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_77_77;
#line 438 "autopar_reports.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_80_80;

#line 439 "autopar_reports.m"
        {
#line 439 "autopar_reports.m"
          mdprof_fb__automatic_parallelism__autopar_reports__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 439 "autopar_reports.m"
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__V_75_75, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_4[4]));
#line 439 "autopar_reports.m"
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__V_75_75, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_p_0_2));
#line 439 "autopar_reports.m"
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__V_75_75, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 439 "autopar_reports.m"
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__V_75_75, 3) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__1_1));
#line 439 "autopar_reports.m"
        }
#line 1288 "mdprof_fb.automatic_parallelism.autopar_reports.c"
        mdprof_fb__automatic_parallelism__autopar_reports__TypeInfo_21_84 = (MR_Word) &mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_1[2];
#line 439 "autopar_reports.m"
        {
#line 439 "autopar_reports.m"
          mercury__list__map_3_p_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_2[1], mdprof_fb__automatic_parallelism__autopar_reports__TypeInfo_21_84, mdprof_fb__automatic_parallelism__autopar_reports__V_75_75, mdprof_fb__automatic_parallelism__autopar_reports__Consumptions_10, &mdprof_fb__automatic_parallelism__autopar_reports__Lines_74);
        }
#line 440 "autopar_reports.m"
        {
#line 440 "autopar_reports.m"
          mdprof_fb__automatic_parallelism__autopar_reports__V_77_77 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "Consumptions:")));
        }
#line 440 "autopar_reports.m"
        {
#line 440 "autopar_reports.m"
          mdprof_fb__automatic_parallelism__autopar_reports__V_76_76 = mercury__cord__singleton_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeInfo_21_84, ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__V_77_77)));
        }
#line 440 "autopar_reports.m"
        {
#line 440 "autopar_reports.m"
          mdprof_fb__automatic_parallelism__autopar_reports__V_80_80 = mercury__cord__from_list_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeInfo_21_84, mdprof_fb__automatic_parallelism__autopar_reports__Lines_74);
        }
#line 440 "autopar_reports.m"
        {
#line 440 "autopar_reports.m"
          mdprof_fb__automatic_parallelism__autopar_reports__ConsumptionsReport_14 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeInfo_21_84, mdprof_fb__automatic_parallelism__autopar_reports__V_76_76, mdprof_fb__automatic_parallelism__autopar_reports__V_80_80);
        }
#line 438 "autopar_reports.m"
      }
#line 1317 "mdprof_fb.automatic_parallelism.autopar_reports.c"
    mdprof_fb__automatic_parallelism__autopar_reports__TypeInfo_28_28 = (MR_Word) &mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_1[2];
#line 423 "autopar_reports.m"
    {
#line 423 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_25_25 = mercury__cord__singleton_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeInfo_28_28, ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__CostLine_12)));
    }
#line 423 "autopar_reports.m"
    {
#line 423 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_26_26 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeInfo_28_28, mdprof_fb__automatic_parallelism__autopar_reports__ProductionsReport_13, mdprof_fb__automatic_parallelism__autopar_reports__ConsumptionsReport_14);
    }
#line 423 "autopar_reports.m"
    {
#line 423 "autopar_reports.m"
      *mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__3_3 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeInfo_28_28, mdprof_fb__automatic_parallelism__autopar_reports__V_25_25, mdprof_fb__automatic_parallelism__autopar_reports__V_26_26);
    }
#line 407 "autopar_reports.m"
  }
#line 401 "autopar_reports.m"
}

#line 446 "autopar_reports.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__format_var_use_line_3_p_0(
#line 446 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__VarNameTable_4,
#line 446 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__2_2,
#line 446 "autopar_reports.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__3_3)
#line 446 "autopar_reports.m"
{
#line 449 "autopar_reports.m"
  {
#line 449 "autopar_reports.m"
    MR_bool mdprof_fb__automatic_parallelism__autopar_reports__succeeded;
#line 449 "autopar_reports.m"
    MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__Var_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__2_2, (MR_Integer) 0)));
#line 449 "autopar_reports.m"
    MR_Float mdprof_fb__automatic_parallelism__autopar_reports__Use_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__2_2, (MR_Integer) 1)));
#line 449 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__String_7;
#line 449 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__VarName_8;
#line 449 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_14_14;
#line 449 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_17_17;
#line 449 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_23_23;
#line 449 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_25_25;
#line 449 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_26_26;
#line 449 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_33_33;

#line 450 "autopar_reports.m"
    {
#line 450 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_14_14 = measurement_units__two_decimal_fraction_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__Use_6);
    }
#line 451 "autopar_reports.m"
    {
#line 451 "autopar_reports.m"
      mdbcomp__program_representation__lookup_var_name_3_p_0(mdprof_fb__automatic_parallelism__autopar_reports__VarNameTable_4, mdprof_fb__automatic_parallelism__autopar_reports__Var_5, &mdprof_fb__automatic_parallelism__autopar_reports__VarName_8);
    }
#line 1385 "mdprof_fb.automatic_parallelism.autopar_reports.c"
    mdprof_fb__automatic_parallelism__autopar_reports__V_23_23 = (MR_Word) &mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_3[0];
#line 450 "autopar_reports.m"
    {
#line 450 "autopar_reports.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mdprof_fb__automatic_parallelism__autopar_reports__V_23_23, mdprof_fb__automatic_parallelism__autopar_reports__V_14_14, &mdprof_fb__automatic_parallelism__autopar_reports__V_17_17);
    }
#line 450 "autopar_reports.m"
    {
#line 450 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_25_25 = mercury__string__f_43_43_2_f_0((MR_String) ": ", mdprof_fb__automatic_parallelism__autopar_reports__V_17_17);
    }
#line 450 "autopar_reports.m"
    {
#line 450 "autopar_reports.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mdprof_fb__automatic_parallelism__autopar_reports__V_23_23, mdprof_fb__automatic_parallelism__autopar_reports__VarName_8, &mdprof_fb__automatic_parallelism__autopar_reports__V_26_26);
    }
#line 450 "autopar_reports.m"
    {
#line 450 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_33_33 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_26_26, mdprof_fb__automatic_parallelism__autopar_reports__V_25_25);
    }
#line 450 "autopar_reports.m"
    {
#line 450 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__String_7 = mercury__string__f_43_43_2_f_0((MR_String) "    ", mdprof_fb__automatic_parallelism__autopar_reports__V_33_33);
    }
#line 449 "autopar_reports.m"
    {
#line 449 "autopar_reports.m"
      *mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__3_3 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__String_7)));
    }
#line 449 "autopar_reports.m"
  }
#line 446 "autopar_reports.m"
}

#line 387 "autopar_reports.m"
static MR_Box MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjuncts_8_p_0_1(
#line 387 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure_arg,
#line 387 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1)
#line 387 "autopar_reports.m"
{
#line 387 "autopar_reports.m"
  {
#line 387 "autopar_reports.m"
    MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2;
#line 387 "autopar_reports.m"
    MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure = mdprof_fb__automatic_parallelism__autopar_reports__closure_arg;
#line 387 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__conv0_HeadVar__2_47;

#line 387 "autopar_reports.m"
    {
#line 387 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__conv0_HeadVar__2_47 = mdprof_fb__automatic_parallelism__autopar_reports__IntroducedFrom__func__format_sequential_conjuncts__387__1_1_f_0(((MR_Word) mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1));
    }
#line 387 "autopar_reports.m"
    mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2 = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__conv0_HeadVar__2_47));
#line 387 "autopar_reports.m"
    return mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2;
#line 387 "autopar_reports.m"
  }
#line 387 "autopar_reports.m"
}

#line 380 "autopar_reports.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjuncts_8_p_0(
#line 380 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__VarNameTable_1,
#line 380 "autopar_reports.m"
  MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__Indent_2,
#line 380 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__RevGoalPath_3,
#line 380 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__4_4,
#line 380 "autopar_reports.m"
  MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_ConjNum_0_5,
#line 380 "autopar_reports.m"
  MR_Integer * mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_ConjNum_6,
#line 380 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_0_7,
#line 380 "autopar_reports.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_8)
#line 380 "autopar_reports.m"
{
#line 384 "autopar_reports.m"
  while (MR_TRUE)
#line 384 "autopar_reports.m"
    {
#line 384 "autopar_reports.m"
      /* tailcall optimized into a loop */
#line 384 "autopar_reports.m"
      {
#line 384 "autopar_reports.m"
        MR_bool mdprof_fb__automatic_parallelism__autopar_reports__succeeded;

#line 384 "autopar_reports.m"
        if ((mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 384 "autopar_reports.m"
          {
#line 384 "autopar_reports.m"
            *mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_8 = mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_0_7;
#line 384 "autopar_reports.m"
            *mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_ConjNum_6 = mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_ConjNum_0_5;
#line 384 "autopar_reports.m"
          }
#line 384 "autopar_reports.m"
        else
#line 386 "autopar_reports.m"
          {
#line 386 "autopar_reports.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_51_51;
#line 386 "autopar_reports.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_reports__Conj_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__4_4, (MR_Integer) 0)));
#line 386 "autopar_reports.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_reports__Conjs_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__4_4, (MR_Integer) 1)));
#line 386 "autopar_reports.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_reports__ConjReport_25;
#line 386 "autopar_reports.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_32_32;
#line 386 "autopar_reports.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_33_33;
#line 386 "autopar_reports.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_35_35;
#line 386 "autopar_reports.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_36_36;
#line 386 "autopar_reports.m"
            MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_ConjNum_37_37;

#line 387 "autopar_reports.m"
            {
#line 387 "autopar_reports.m"
              mdprof_fb__automatic_parallelism__autopar_reports__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 387 "autopar_reports.m"
              MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__V_32_32, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_2[9]));
#line 387 "autopar_reports.m"
              MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__V_32_32, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__VarNameTable_1));
#line 387 "autopar_reports.m"
            }
#line 388 "autopar_reports.m"
            {
#line 388 "autopar_reports.m"
              mdprof_fb__automatic_parallelism__autopar_reports__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 388 "autopar_reports.m"
              MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__V_35_35, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_ConjNum_0_5));
#line 388 "autopar_reports.m"
            }
#line 388 "autopar_reports.m"
            {
#line 388 "autopar_reports.m"
              mdprof_fb__automatic_parallelism__autopar_reports__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 388 "autopar_reports.m"
              MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__V_33_33, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__RevGoalPath_3));
#line 388 "autopar_reports.m"
              MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__V_33_33, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__V_35_35));
#line 388 "autopar_reports.m"
            }
#line 387 "autopar_reports.m"
            {
#line 387 "autopar_reports.m"
              program_representation_utils__print_goal_to_strings_5_p_0((MR_Word) &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0, (MR_Word) &mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_1[4], mdprof_fb__automatic_parallelism__autopar_reports__V_32_32, mdprof_fb__automatic_parallelism__autopar_reports__Indent_2, mdprof_fb__automatic_parallelism__autopar_reports__V_33_33, mdprof_fb__automatic_parallelism__autopar_reports__Conj_21, &mdprof_fb__automatic_parallelism__autopar_reports__ConjReport_25);
            }
#line 1552 "mdprof_fb.automatic_parallelism.autopar_reports.c"
            mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_51_51 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 389 "autopar_reports.m"
            {
#line 389 "autopar_reports.m"
              mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_36_36 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_51_51, mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_0_7, mdprof_fb__automatic_parallelism__autopar_reports__ConjReport_25);
            }
#line 390 "autopar_reports.m"
            mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_ConjNum_37_37 = (mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_ConjNum_0_5 + (MR_Integer) 1);
#line 393 "autopar_reports.m"
            if ((mdprof_fb__automatic_parallelism__autopar_reports__Conjs_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 392 "autopar_reports.m"
              {
#line 392 "autopar_reports.m"
                *mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_ConjNum_6 = mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_ConjNum_37_37;
#line 392 "autopar_reports.m"
                *mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_8 = mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_36_36;
#line 392 "autopar_reports.m"
              }
#line 393 "autopar_reports.m"
            else
#line 394 "autopar_reports.m"
              {
#line 394 "autopar_reports.m"
                MR_Word mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_39_39;
#line 394 "autopar_reports.m"
                MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_40_40;
#line 394 "autopar_reports.m"
                MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_41_41;
#line 394 "autopar_reports.m"
                MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_42_42;

#line 395 "autopar_reports.m"
                {
#line 395 "autopar_reports.m"
                  mdprof_fb__automatic_parallelism__autopar_reports__V_41_41 = message__indent_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__Indent_2);
                }
#line 395 "autopar_reports.m"
                {
#line 395 "autopar_reports.m"
                  mdprof_fb__automatic_parallelism__autopar_reports__V_42_42 = mercury__cord__singleton_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_51_51, ((MR_Box) ((MR_String) ",\n")));
                }
#line 395 "autopar_reports.m"
                {
#line 395 "autopar_reports.m"
                  mdprof_fb__automatic_parallelism__autopar_reports__V_40_40 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_51_51, mdprof_fb__automatic_parallelism__autopar_reports__V_41_41, mdprof_fb__automatic_parallelism__autopar_reports__V_42_42);
                }
#line 395 "autopar_reports.m"
                {
#line 395 "autopar_reports.m"
                  mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_39_39 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_51_51, mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_36_36, mdprof_fb__automatic_parallelism__autopar_reports__V_40_40);
                }
#line 396 "autopar_reports.m"
                /* direct tailcall eliminated */
#line 396 "autopar_reports.m"
                {
#line 396 "autopar_reports.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__4__tmp_copy_4 = mdprof_fb__automatic_parallelism__autopar_reports__Conjs_22;
#line 396 "autopar_reports.m"
                  MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_ConjNum_0__tmp_copy_5 = mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_ConjNum_37_37;
#line 396 "autopar_reports.m"
                  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_0__tmp_copy_7 = mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_39_39;

#line 396 "autopar_reports.m"
                  mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_0_7 = mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_0__tmp_copy_7;
#line 396 "autopar_reports.m"
                  mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_ConjNum_0_5 = mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_ConjNum_0__tmp_copy_5;
#line 396 "autopar_reports.m"
                  mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__4_4 = mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__4__tmp_copy_4;
#line 396 "autopar_reports.m"
                }
#line 396 "autopar_reports.m"
                continue;
#line 394 "autopar_reports.m"
              }
#line 386 "autopar_reports.m"
          }
#line 384 "autopar_reports.m"
      }
#line 384 "autopar_reports.m"
      break;
#line 384 "autopar_reports.m"
    }
#line 380 "autopar_reports.m"
}

#line 358 "autopar_reports.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjunction_7_p_0(
#line 358 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__VarNameTable_8,
#line 358 "autopar_reports.m"
  MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__Indent_9,
#line 358 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__RevGoalPath_10,
#line 358 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__Goals_11,
#line 358 "autopar_reports.m"
  MR_Float mdprof_fb__automatic_parallelism__autopar_reports__Cost_12,
#line 358 "autopar_reports.m"
  MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__FirstConjNum_13,
#line 358 "autopar_reports.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_16)
#line 358 "autopar_reports.m"
{
#line 363 "autopar_reports.m"
  {
#line 363 "autopar_reports.m"
    MR_bool mdprof_fb__automatic_parallelism__autopar_reports__succeeded;
#line 363 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_43_43 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 363 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_17_17;
#line 363 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_18_18;
#line 377 "autopar_reports.m"
    MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__V_15_15;

#line 364 "autopar_reports.m"
    {
#line 364 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_17_17 = mercury__cord__empty_0_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_43_43);
    }
#line 365 "autopar_reports.m"
    mdprof_fb__automatic_parallelism__autopar_reports__succeeded = (mdprof_fb__automatic_parallelism__autopar_reports__FirstConjNum_13 == (MR_Integer) 1);
#line 374 "autopar_reports.m"
    if (mdprof_fb__automatic_parallelism__autopar_reports__succeeded)
#line 366 "autopar_reports.m"
      {
#line 366 "autopar_reports.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_19_19;
#line 366 "autopar_reports.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_20_20;
#line 366 "autopar_reports.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_21_21;
#line 366 "autopar_reports.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_22_22;
#line 366 "autopar_reports.m"
        MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_23_23;
#line 366 "autopar_reports.m"
        MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_27_27;
#line 366 "autopar_reports.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_29_29;
#line 366 "autopar_reports.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_30_30;
#line 366 "autopar_reports.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_31_31;
#line 366 "autopar_reports.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_32_32;
#line 366 "autopar_reports.m"
        MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_33_33;
#line 366 "autopar_reports.m"
        MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_37_37;
#line 366 "autopar_reports.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_39_39;
#line 366 "autopar_reports.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_40_40;
#line 366 "autopar_reports.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_41_41;
#line 366 "autopar_reports.m"
        MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_44_44;
#line 366 "autopar_reports.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_50_50;
#line 366 "autopar_reports.m"
        MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_52_52;

#line 367 "autopar_reports.m"
        {
#line 367 "autopar_reports.m"
          mdprof_fb__automatic_parallelism__autopar_reports__V_20_20 = message__indent_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__Indent_9);
        }
#line 369 "autopar_reports.m"
        {
#line 369 "autopar_reports.m"
          mdprof_fb__automatic_parallelism__autopar_reports__V_27_27 = mdbcomp__goal_path__rev_goal_path_to_string_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__RevGoalPath_10);
        }
#line 1728 "mdprof_fb.automatic_parallelism.autopar_reports.c"
        mdprof_fb__automatic_parallelism__autopar_reports__V_50_50 = (MR_Word) &mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_3[0];
#line 369 "autopar_reports.m"
        {
#line 369 "autopar_reports.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mdprof_fb__automatic_parallelism__autopar_reports__V_50_50, mdprof_fb__automatic_parallelism__autopar_reports__V_27_27, &mdprof_fb__automatic_parallelism__autopar_reports__V_44_44);
        }
#line 368 "autopar_reports.m"
        {
#line 368 "autopar_reports.m"
          mdprof_fb__automatic_parallelism__autopar_reports__V_23_23 = mercury__string__f_43_43_2_f_0((MR_String) "% conjunction: ", mdprof_fb__automatic_parallelism__autopar_reports__V_44_44);
        }
#line 368 "autopar_reports.m"
        {
#line 368 "autopar_reports.m"
          mdprof_fb__automatic_parallelism__autopar_reports__V_22_22 = mercury__cord__singleton_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_43_43, ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__V_23_23)));
        }
#line 370 "autopar_reports.m"
        {
#line 370 "autopar_reports.m"
          mdprof_fb__automatic_parallelism__autopar_reports__V_30_30 = message__nl_indent_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__Indent_9);
        }
#line 372 "autopar_reports.m"
        {
#line 372 "autopar_reports.m"
          mdprof_fb__automatic_parallelism__autopar_reports__V_37_37 = measurement_units__two_decimal_fraction_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__Cost_12);
        }
#line 372 "autopar_reports.m"
        {
#line 372 "autopar_reports.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mdprof_fb__automatic_parallelism__autopar_reports__V_50_50, mdprof_fb__automatic_parallelism__autopar_reports__V_37_37, &mdprof_fb__automatic_parallelism__autopar_reports__V_52_52);
        }
#line 371 "autopar_reports.m"
        {
#line 371 "autopar_reports.m"
          mdprof_fb__automatic_parallelism__autopar_reports__V_33_33 = mercury__string__f_43_43_2_f_0((MR_String) "% Cost: ", mdprof_fb__automatic_parallelism__autopar_reports__V_52_52);
        }
#line 371 "autopar_reports.m"
        {
#line 371 "autopar_reports.m"
          mdprof_fb__automatic_parallelism__autopar_reports__V_32_32 = mercury__cord__singleton_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_43_43, ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__V_33_33)));
        }
#line 373 "autopar_reports.m"
        {
#line 373 "autopar_reports.m"
          mdprof_fb__automatic_parallelism__autopar_reports__V_40_40 = message__nl_0_f_0();
        }
#line 373 "autopar_reports.m"
        {
#line 373 "autopar_reports.m"
          mdprof_fb__automatic_parallelism__autopar_reports__V_41_41 = message__nl_0_f_0();
        }
#line 373 "autopar_reports.m"
        {
#line 373 "autopar_reports.m"
          mdprof_fb__automatic_parallelism__autopar_reports__V_39_39 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_43_43, mdprof_fb__automatic_parallelism__autopar_reports__V_40_40, mdprof_fb__automatic_parallelism__autopar_reports__V_41_41);
        }
#line 372 "autopar_reports.m"
        {
#line 372 "autopar_reports.m"
          mdprof_fb__automatic_parallelism__autopar_reports__V_31_31 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_43_43, mdprof_fb__automatic_parallelism__autopar_reports__V_32_32, mdprof_fb__automatic_parallelism__autopar_reports__V_39_39);
        }
#line 370 "autopar_reports.m"
        {
#line 370 "autopar_reports.m"
          mdprof_fb__automatic_parallelism__autopar_reports__V_29_29 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_43_43, mdprof_fb__automatic_parallelism__autopar_reports__V_30_30, mdprof_fb__automatic_parallelism__autopar_reports__V_31_31);
        }
#line 369 "autopar_reports.m"
        {
#line 369 "autopar_reports.m"
          mdprof_fb__automatic_parallelism__autopar_reports__V_21_21 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_43_43, mdprof_fb__automatic_parallelism__autopar_reports__V_22_22, mdprof_fb__automatic_parallelism__autopar_reports__V_29_29);
        }
#line 367 "autopar_reports.m"
        {
#line 367 "autopar_reports.m"
          mdprof_fb__automatic_parallelism__autopar_reports__V_19_19 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_43_43, mdprof_fb__automatic_parallelism__autopar_reports__V_20_20, mdprof_fb__automatic_parallelism__autopar_reports__V_21_21);
        }
#line 366 "autopar_reports.m"
        {
#line 366 "autopar_reports.m"
          mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_18_18 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_43_43, mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_17_17, mdprof_fb__automatic_parallelism__autopar_reports__V_19_19);
        }
#line 366 "autopar_reports.m"
      }
#line 374 "autopar_reports.m"
    else
#line 374 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_18_18 = mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_17_17;
#line 377 "autopar_reports.m"
    {
#line 377 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjuncts_8_p_0(mdprof_fb__automatic_parallelism__autopar_reports__VarNameTable_8, mdprof_fb__automatic_parallelism__autopar_reports__Indent_9, mdprof_fb__automatic_parallelism__autopar_reports__RevGoalPath_10, mdprof_fb__automatic_parallelism__autopar_reports__Goals_11, mdprof_fb__automatic_parallelism__autopar_reports__FirstConjNum_13, &mdprof_fb__automatic_parallelism__autopar_reports__V_15_15, mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_18_18, mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_16);
    }
#line 363 "autopar_reports.m"
  }
#line 358 "autopar_reports.m"
}

#line 339 "autopar_reports.m"
static MR_Box MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjuncts_7_p_0_2(
#line 339 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure_arg,
#line 339 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1,
#line 339 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2)
#line 339 "autopar_reports.m"
{
#line 339 "autopar_reports.m"
  {
#line 339 "autopar_reports.m"
    MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_3;
#line 339 "autopar_reports.m"
    MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure = mdprof_fb__automatic_parallelism__autopar_reports__closure_arg;
#line 339 "autopar_reports.m"
    MR_Float mdprof_fb__automatic_parallelism__autopar_reports__conv1_HeadVar__3_45;

#line 339 "autopar_reports.m"
    {
#line 339 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__conv1_HeadVar__3_45 = mdprof_fb__automatic_parallelism__autopar_reports__IntroducedFrom__func__format_parallel_conjuncts__339__1_2_f_0(((MR_Word) mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1), MR_unbox_float(mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2));
    }
#line 339 "autopar_reports.m"
    mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_3 = MR_box_float(mdprof_fb__automatic_parallelism__autopar_reports__conv1_HeadVar__3_45);
#line 339 "autopar_reports.m"
    return mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_3;
#line 339 "autopar_reports.m"
  }
#line 339 "autopar_reports.m"
}

#line 335 "autopar_reports.m"
static MR_Box MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjuncts_7_p_0_1(
#line 335 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure_arg,
#line 335 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1)
#line 335 "autopar_reports.m"
{
#line 335 "autopar_reports.m"
  {
#line 335 "autopar_reports.m"
    MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2;
#line 335 "autopar_reports.m"
    MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure = mdprof_fb__automatic_parallelism__autopar_reports__closure_arg;
#line 335 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__conv0_HeadVar__2_75;

#line 335 "autopar_reports.m"
    {
#line 335 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__conv0_HeadVar__2_75 = mdprof_fb__automatic_parallelism__autopar_reports__IntroducedFrom__func__format_parallel_conjuncts__335__1_1_f_0(((MR_Word) mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1));
    }
#line 335 "autopar_reports.m"
    mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2 = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__conv0_HeadVar__2_75));
#line 335 "autopar_reports.m"
    return mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2;
#line 335 "autopar_reports.m"
  }
#line 335 "autopar_reports.m"
}

#line 315 "autopar_reports.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjuncts_7_p_0(
#line 315 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__1_1,
#line 315 "autopar_reports.m"
  MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__Indent_2,
#line 315 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__3_3,
#line 315 "autopar_reports.m"
  MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__4_4,
#line 315 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__5_5,
#line 315 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_0_6,
#line 315 "autopar_reports.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_7)
#line 315 "autopar_reports.m"
{
#line 320 "autopar_reports.m"
  while (MR_TRUE)
#line 320 "autopar_reports.m"
    {
#line 320 "autopar_reports.m"
      /* tailcall optimized into a loop */
#line 320 "autopar_reports.m"
      {
#line 320 "autopar_reports.m"
        MR_bool mdprof_fb__automatic_parallelism__autopar_reports__succeeded;

#line 320 "autopar_reports.m"
        if ((mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 320 "autopar_reports.m"
          {
#line 320 "autopar_reports.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_73_73;
#line 320 "autopar_reports.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_reports__IndentStr_13;
#line 320 "autopar_reports.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_17_17;

#line 321 "autopar_reports.m"
            {
#line 321 "autopar_reports.m"
              mdprof_fb__automatic_parallelism__autopar_reports__IndentStr_13 = message__indent_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__Indent_2);
            }
#line 1938 "mdprof_fb.automatic_parallelism.autopar_reports.c"
            mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_73_73 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 322 "autopar_reports.m"
            {
#line 322 "autopar_reports.m"
              mdprof_fb__automatic_parallelism__autopar_reports__V_17_17 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_73_73, mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_0_6, mdprof_fb__automatic_parallelism__autopar_reports__IndentStr_13);
            }
#line 322 "autopar_reports.m"
            {
#line 322 "autopar_reports.m"
              *mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_7 = mercury__cord__snoc_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_73_73, mdprof_fb__automatic_parallelism__autopar_reports__V_17_17, ((MR_Box) ((MR_String) ")\n")));
            }
#line 320 "autopar_reports.m"
          }
#line 320 "autopar_reports.m"
        else
#line 324 "autopar_reports.m"
          {
#line 324 "autopar_reports.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_81_81;
#line 324 "autopar_reports.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_reports__Conj_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__5_5, (MR_Integer) 0)));
#line 324 "autopar_reports.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_reports__Conjs_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__5_5, (MR_Integer) 1)));
#line 324 "autopar_reports.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_reports__Goals_26 = (MR_Word) mdprof_fb__automatic_parallelism__autopar_reports__Conj_23;
#line 324 "autopar_reports.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_reports__ConjReport_30;
#line 324 "autopar_reports.m"
            MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__ConjNum_38;
#line 324 "autopar_reports.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_59_59;
#line 324 "autopar_reports.m"
            MR_Word mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_60_60;

#line 329 "autopar_reports.m"
            if ((mdprof_fb__automatic_parallelism__autopar_reports__Goals_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 327 "autopar_reports.m"
              {
#line 328 "autopar_reports.m"
                {
#line 328 "autopar_reports.m"
                  mercury__require__unexpected_3_p_0((MR_String) "mdprof_fb.automatic_parallelism.autopar_reports", (MR_String) "predicate \140mdprof_fb.automatic_parallelism.autopar_reports.format_parallel_conjuncts\'/7", (MR_String) "empty conjunct in parallel conjunction");
#line 328 "autopar_reports.m"
                  return;
                }
#line 327 "autopar_reports.m"
              }
#line 329 "autopar_reports.m"
            else
#line 330 "autopar_reports.m"
              {
#line 330 "autopar_reports.m"
                MR_Word mdprof_fb__automatic_parallelism__autopar_reports__Goal_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__Goals_26, (MR_Integer) 0)));
#line 330 "autopar_reports.m"
                MR_Word mdprof_fb__automatic_parallelism__autopar_reports__GoalsTail_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__Goals_26, (MR_Integer) 1)));
#line 330 "autopar_reports.m"
                MR_Word mdprof_fb__automatic_parallelism__autopar_reports__RevInnerGoalPath_29;
#line 330 "autopar_reports.m"
                MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_41_41;

#line 331 "autopar_reports.m"
                {
#line 331 "autopar_reports.m"
                  mdprof_fb__automatic_parallelism__autopar_reports__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 331 "autopar_reports.m"
                  MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__V_41_41, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__4_4));
#line 331 "autopar_reports.m"
                }
#line 331 "autopar_reports.m"
                {
#line 331 "autopar_reports.m"
                  mdprof_fb__automatic_parallelism__autopar_reports__RevInnerGoalPath_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 331 "autopar_reports.m"
                  MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__RevInnerGoalPath_29, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__3_3));
#line 331 "autopar_reports.m"
                  MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__RevInnerGoalPath_29, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__V_41_41));
#line 331 "autopar_reports.m"
                }
#line 337 "autopar_reports.m"
                if ((mdprof_fb__automatic_parallelism__autopar_reports__GoalsTail_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 333 "autopar_reports.m"
                  {
#line 333 "autopar_reports.m"
                    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_52_52;
#line 333 "autopar_reports.m"
                    MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__V_53_53;

#line 335 "autopar_reports.m"
                    {
#line 335 "autopar_reports.m"
                      mdprof_fb__automatic_parallelism__autopar_reports__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 335 "autopar_reports.m"
                      MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__V_52_52, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_2[7]));
#line 335 "autopar_reports.m"
                      MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__V_52_52, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__1_1));
#line 335 "autopar_reports.m"
                    }
#line 336 "autopar_reports.m"
                    mdprof_fb__automatic_parallelism__autopar_reports__V_53_53 = (mdprof_fb__automatic_parallelism__autopar_reports__Indent_2 + (MR_Integer) 1);
#line 335 "autopar_reports.m"
                    {
#line 335 "autopar_reports.m"
                      program_representation_utils__print_goal_to_strings_5_p_0((MR_Word) &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0, (MR_Word) &mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_1[4], mdprof_fb__automatic_parallelism__autopar_reports__V_52_52, mdprof_fb__automatic_parallelism__autopar_reports__V_53_53, mdprof_fb__automatic_parallelism__autopar_reports__RevInnerGoalPath_29, mdprof_fb__automatic_parallelism__autopar_reports__Goal_27, &mdprof_fb__automatic_parallelism__autopar_reports__ConjReport_30);
                    }
#line 333 "autopar_reports.m"
                  }
#line 337 "autopar_reports.m"
                else
#line 338 "autopar_reports.m"
                  {
#line 338 "autopar_reports.m"
                    MR_Float mdprof_fb__automatic_parallelism__autopar_reports__Cost_33;
#line 338 "autopar_reports.m"
                    MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__V_49_49;
#line 339 "autopar_reports.m"
                    MR_Box mdprof_fb__automatic_parallelism__autopar_reports__conv2_Cost_33;

#line 339 "autopar_reports.m"
                    {
#line 339 "autopar_reports.m"
                      mdprof_fb__automatic_parallelism__autopar_reports__conv2_Cost_33 = mercury__list__foldl_3_f_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0, (MR_Word) &mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_2[8], mdprof_fb__automatic_parallelism__autopar_reports__Goals_26, MR_box_float((MR_Float) 0.0000000000000000));
                    }
#line 339 "autopar_reports.m"
                    mdprof_fb__automatic_parallelism__autopar_reports__Cost_33 = MR_unbox_float(mdprof_fb__automatic_parallelism__autopar_reports__conv2_Cost_33);
#line 344 "autopar_reports.m"
                    mdprof_fb__automatic_parallelism__autopar_reports__V_49_49 = (mdprof_fb__automatic_parallelism__autopar_reports__Indent_2 + (MR_Integer) 1);
#line 343 "autopar_reports.m"
                    {
#line 343 "autopar_reports.m"
                      mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjunction_7_p_0(mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__1_1, mdprof_fb__automatic_parallelism__autopar_reports__V_49_49, mdprof_fb__automatic_parallelism__autopar_reports__RevInnerGoalPath_29, mdprof_fb__automatic_parallelism__autopar_reports__Goals_26, mdprof_fb__automatic_parallelism__autopar_reports__Cost_33, (MR_Integer) 1, &mdprof_fb__automatic_parallelism__autopar_reports__ConjReport_30);
                    }
#line 338 "autopar_reports.m"
                  }
#line 330 "autopar_reports.m"
              }
#line 2074 "mdprof_fb.automatic_parallelism.autopar_reports.c"
            mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_81_81 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 347 "autopar_reports.m"
            {
#line 347 "autopar_reports.m"
              mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_59_59 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_81_81, mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_0_6, mdprof_fb__automatic_parallelism__autopar_reports__ConjReport_30);
            }
#line 350 "autopar_reports.m"
            if ((mdprof_fb__automatic_parallelism__autopar_reports__Conjs_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 349 "autopar_reports.m"
              mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_60_60 = mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_59_59;
#line 350 "autopar_reports.m"
            else
#line 351 "autopar_reports.m"
              {
#line 351 "autopar_reports.m"
                MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_61_61;
#line 351 "autopar_reports.m"
                MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_62_62;

#line 352 "autopar_reports.m"
                {
#line 352 "autopar_reports.m"
                  mdprof_fb__automatic_parallelism__autopar_reports__V_62_62 = message__indent_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__Indent_2);
                }
#line 352 "autopar_reports.m"
                {
#line 352 "autopar_reports.m"
                  mdprof_fb__automatic_parallelism__autopar_reports__V_61_61 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_81_81, mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_59_59, mdprof_fb__automatic_parallelism__autopar_reports__V_62_62);
                }
#line 352 "autopar_reports.m"
                {
#line 352 "autopar_reports.m"
                  mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_60_60 = mercury__cord__snoc_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_81_81, mdprof_fb__automatic_parallelism__autopar_reports__V_61_61, ((MR_Box) ((MR_String) "&\n")));
                }
#line 351 "autopar_reports.m"
              }
#line 354 "autopar_reports.m"
            mdprof_fb__automatic_parallelism__autopar_reports__ConjNum_38 = (mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__4_4 + (MR_Integer) 1);
#line 355 "autopar_reports.m"
            /* direct tailcall eliminated */
#line 355 "autopar_reports.m"
            {
#line 355 "autopar_reports.m"
              MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__4__tmp_copy_4 = mdprof_fb__automatic_parallelism__autopar_reports__ConjNum_38;
#line 355 "autopar_reports.m"
              MR_Word mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__5__tmp_copy_5 = mdprof_fb__automatic_parallelism__autopar_reports__Conjs_24;
#line 355 "autopar_reports.m"
              MR_Word mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_0__tmp_copy_6 = mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_60_60;

#line 355 "autopar_reports.m"
              mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_0_6 = mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_0__tmp_copy_6;
#line 355 "autopar_reports.m"
              mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__5_5 = mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__5__tmp_copy_5;
#line 355 "autopar_reports.m"
              mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__4_4 = mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__4__tmp_copy_4;
#line 355 "autopar_reports.m"
            }
#line 355 "autopar_reports.m"
            continue;
#line 324 "autopar_reports.m"
          }
#line 320 "autopar_reports.m"
      }
#line 320 "autopar_reports.m"
      break;
#line 320 "autopar_reports.m"
    }
#line 315 "autopar_reports.m"
}

#line 304 "autopar_reports.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjunction_6_p_0(
#line 304 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__VarNameTable_7,
#line 304 "autopar_reports.m"
  MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__Indent_8,
#line 304 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__RevGoalPath_9,
#line 304 "autopar_reports.m"
  MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__ConjNum_10,
#line 304 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__Conjs_11,
#line 304 "autopar_reports.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_14)
#line 304 "autopar_reports.m"
{
#line 309 "autopar_reports.m"
  {
#line 309 "autopar_reports.m"
    MR_bool mdprof_fb__automatic_parallelism__autopar_reports__succeeded;
#line 309 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_22_22;
#line 309 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__IndentStr_13;
#line 309 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_15_15;
#line 309 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_16_16;
#line 309 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_18_18;
#line 309 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_21_21;

#line 310 "autopar_reports.m"
    {
#line 310 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__IndentStr_13 = message__indent_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__Indent_8);
    }
#line 2184 "mdprof_fb.automatic_parallelism.autopar_reports.c"
    mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_22_22 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 311 "autopar_reports.m"
    {
#line 311 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_16_16 = mercury__cord__singleton_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_22_22, ((MR_Box) ((MR_String) "(\n")));
    }
#line 311 "autopar_reports.m"
    {
#line 311 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_15_15 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_22_22, mdprof_fb__automatic_parallelism__autopar_reports__IndentStr_13, mdprof_fb__automatic_parallelism__autopar_reports__V_16_16);
    }
#line 313 "autopar_reports.m"
    {
#line 313 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 313 "autopar_reports.m"
      MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__V_21_21, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__ConjNum_10));
#line 313 "autopar_reports.m"
    }
#line 313 "autopar_reports.m"
    {
#line 313 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 313 "autopar_reports.m"
      MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__V_18_18, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__RevGoalPath_9));
#line 313 "autopar_reports.m"
      MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__V_18_18, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__V_21_21));
#line 313 "autopar_reports.m"
    }
#line 312 "autopar_reports.m"
    {
#line 312 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjuncts_7_p_0(mdprof_fb__automatic_parallelism__autopar_reports__VarNameTable_7, mdprof_fb__automatic_parallelism__autopar_reports__Indent_8, mdprof_fb__automatic_parallelism__autopar_reports__V_18_18, (MR_Integer) 1, mdprof_fb__automatic_parallelism__autopar_reports__Conjs_11, mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_15_15, mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_14);
#line 312 "autopar_reports.m"
      return;
    }
#line 309 "autopar_reports.m"
  }
#line 304 "autopar_reports.m"
}

#line 179 "autopar_reports.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_proc_report_2_p_0_2(
#line 179 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure_arg,
#line 179 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1,
#line 179 "autopar_reports.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2)
#line 179 "autopar_reports.m"
{
#line 179 "autopar_reports.m"
  {
#line 179 "autopar_reports.m"
    MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure = mdprof_fb__automatic_parallelism__autopar_reports__closure_arg;
#line 179 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__conv1_Report_6;

#line 179 "autopar_reports.m"
    {
#line 179 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__closure, (MR_Integer) 3))), ((MR_Word) mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1), &mdprof_fb__automatic_parallelism__autopar_reports__conv1_Report_6);
    }
#line 179 "autopar_reports.m"
    *mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2 = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__conv1_Report_6));
#line 179 "autopar_reports.m"
  }
#line 179 "autopar_reports.m"
}

#line 178 "autopar_reports.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_proc_report_2_p_0_1(
#line 178 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure_arg,
#line 178 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1,
#line 178 "autopar_reports.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2)
#line 178 "autopar_reports.m"
{
#line 178 "autopar_reports.m"
  {
#line 178 "autopar_reports.m"
    MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure = mdprof_fb__automatic_parallelism__autopar_reports__closure_arg;
#line 178 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__conv0_Report_4;

#line 178 "autopar_reports.m"
    {
#line 178 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__create_push_goal_report_2_p_0(((MR_Word) mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1), &mdprof_fb__automatic_parallelism__autopar_reports__conv0_Report_4);
    }
#line 178 "autopar_reports.m"
    *mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2 = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__conv0_Report_4));
#line 178 "autopar_reports.m"
  }
#line 178 "autopar_reports.m"
}

#line 200 "autopar_reports.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_proc_report_2_p_0(
#line 200 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__1_1,
#line 200 "autopar_reports.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_reports__Report_5)
#line 200 "autopar_reports.m"
{
#line 174 "autopar_reports.m"
  {
#line 174 "autopar_reports.m"
    MR_bool mdprof_fb__automatic_parallelism__autopar_reports__succeeded;
#line 174 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__TypeInfo_29_29;
#line 174 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_33_33;
#line 174 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__Proc_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__1_1, (MR_Integer) 0)));
#line 174 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__CandidateParConjunctionProc_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__1_1, (MR_Integer) 1)));
#line 174 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__VarNameTable_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__CandidateParConjunctionProc_4, (MR_Integer) 0)));
#line 174 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__PushGoals_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__CandidateParConjunctionProc_4, (MR_Integer) 1)));
#line 174 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__CandidateParConjunctions_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__CandidateParConjunctionProc_4, (MR_Integer) 2)));
#line 174 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__ProcString_9;
#line 174 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__PushGoalReports_10;
#line 174 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__CandidateParConjunctionReports_11;
#line 174 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__Header_12;
#line 174 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_14_14;
#line 174 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_19_19;
#line 174 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_20_20;
#line 174 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_21_21;
#line 174 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_22_22;
#line 174 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_23_23;
#line 174 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_25_25;
#line 174 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_35_35;
#line 174 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_42_42;

#line 177 "autopar_reports.m"
    {
#line 177 "autopar_reports.m"
      program_representation_utils__print_proc_label_to_string_2_p_0(mdprof_fb__automatic_parallelism__autopar_reports__Proc_3, &mdprof_fb__automatic_parallelism__autopar_reports__ProcString_9);
    }
#line 2345 "mdprof_fb.automatic_parallelism.autopar_reports.c"
    mdprof_fb__automatic_parallelism__autopar_reports__TypeInfo_29_29 = (MR_Word) &mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_1[2];
#line 178 "autopar_reports.m"
    {
#line 178 "autopar_reports.m"
      mercury__list__map_3_p_0((MR_Word) &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_push_goal_0, mdprof_fb__automatic_parallelism__autopar_reports__TypeInfo_29_29, (MR_Word) &mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_2[6], mdprof_fb__automatic_parallelism__autopar_reports__PushGoals_7, &mdprof_fb__automatic_parallelism__autopar_reports__PushGoalReports_10);
    }
#line 179 "autopar_reports.m"
    {
#line 179 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 179 "autopar_reports.m"
      MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__V_14_14, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_4[2]));
#line 179 "autopar_reports.m"
      MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__V_14_14, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_proc_report_2_p_0_2));
#line 179 "autopar_reports.m"
      MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 179 "autopar_reports.m"
      MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__V_14_14, 3) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__VarNameTable_6));
#line 179 "autopar_reports.m"
    }
#line 179 "autopar_reports.m"
    {
#line 179 "autopar_reports.m"
      mercury__list__map_3_p_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_1[3], mdprof_fb__automatic_parallelism__autopar_reports__TypeInfo_29_29, mdprof_fb__automatic_parallelism__autopar_reports__V_14_14, mdprof_fb__automatic_parallelism__autopar_reports__CandidateParConjunctions_8, &mdprof_fb__automatic_parallelism__autopar_reports__CandidateParConjunctionReports_11);
    }
#line 181 "autopar_reports.m"
    {
#line 181 "autopar_reports.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_3[0], mdprof_fb__automatic_parallelism__autopar_reports__ProcString_9, &mdprof_fb__automatic_parallelism__autopar_reports__V_35_35);
    }
#line 181 "autopar_reports.m"
    {
#line 181 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_42_42 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_35_35, (MR_String) "\n");
    }
#line 181 "autopar_reports.m"
    {
#line 181 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__Header_12 = mercury__string__f_43_43_2_f_0((MR_String) "    ", mdprof_fb__automatic_parallelism__autopar_reports__V_42_42);
    }
#line 2386 "mdprof_fb.automatic_parallelism.autopar_reports.c"
    mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_33_33 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 182 "autopar_reports.m"
    {
#line 182 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_19_19 = mercury__cord__singleton_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_33_33, ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__Header_12)));
    }
#line 183 "autopar_reports.m"
    {
#line 183 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_21_21 = mercury__cord__cord_list_to_cord_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_33_33, mdprof_fb__automatic_parallelism__autopar_reports__PushGoalReports_10);
    }
#line 184 "autopar_reports.m"
    {
#line 184 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_23_23 = mercury__cord__singleton_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_33_33, ((MR_Box) ((MR_String) "\n")));
    }
#line 185 "autopar_reports.m"
    {
#line 185 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_25_25 = mercury__cord__cord_list_to_cord_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_33_33, mdprof_fb__automatic_parallelism__autopar_reports__CandidateParConjunctionReports_11);
    }
#line 184 "autopar_reports.m"
    {
#line 184 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_22_22 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_33_33, mdprof_fb__automatic_parallelism__autopar_reports__V_23_23, mdprof_fb__automatic_parallelism__autopar_reports__V_25_25);
    }
#line 183 "autopar_reports.m"
    {
#line 183 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_20_20 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_33_33, mdprof_fb__automatic_parallelism__autopar_reports__V_21_21, mdprof_fb__automatic_parallelism__autopar_reports__V_22_22);
    }
#line 182 "autopar_reports.m"
    {
#line 182 "autopar_reports.m"
      *mdprof_fb__automatic_parallelism__autopar_reports__Report_5 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_33_33, mdprof_fb__automatic_parallelism__autopar_reports__V_19_19, mdprof_fb__automatic_parallelism__autopar_reports__V_20_20);
    }
#line 174 "autopar_reports.m"
  }
#line 200 "autopar_reports.m"
}

#line 193 "autopar_reports.m"
static MR_Box MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__create_push_goal_report_2_p_0_1(
#line 193 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure_arg,
#line 193 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1)
#line 193 "autopar_reports.m"
{
#line 193 "autopar_reports.m"
  {
#line 193 "autopar_reports.m"
    MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2;
#line 193 "autopar_reports.m"
    MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure = mdprof_fb__automatic_parallelism__autopar_reports__closure_arg;
#line 193 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__conv0_HeadVar__2_22;

#line 193 "autopar_reports.m"
    {
#line 193 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__conv0_HeadVar__2_22 = mdprof_fb__automatic_parallelism__autopar_reports__IntroducedFrom__func__create_push_goal_report__193__1_1_f_0(((MR_String) mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1));
    }
#line 193 "autopar_reports.m"
    mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2 = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__conv0_HeadVar__2_22));
#line 193 "autopar_reports.m"
    return mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2;
#line 193 "autopar_reports.m"
  }
#line 193 "autopar_reports.m"
}

#line 187 "autopar_reports.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__create_push_goal_report_2_p_0(
#line 187 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__PushGoal_3,
#line 187 "autopar_reports.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_reports__Report_4)
#line 187 "autopar_reports.m"
{
#line 189 "autopar_reports.m"
  {
#line 189 "autopar_reports.m"
    MR_bool mdprof_fb__automatic_parallelism__autopar_reports__succeeded;
#line 189 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_29_29;
#line 189 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__PushGoalPathStr_5 = ((MR_String) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__PushGoal_3, (MR_Integer) 0)));
#line 189 "autopar_reports.m"
    MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__Lo_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__PushGoal_3, (MR_Integer) 1)));
#line 189 "autopar_reports.m"
    MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__Hi_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__PushGoal_3, (MR_Integer) 2)));
#line 189 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__PushedGoalPathStrs_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__PushGoal_3, (MR_Integer) 3)));
#line 189 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__HeadPushGoalStr_9;
#line 189 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__TailPushGoalStrs_12;
#line 189 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_27_27;
#line 189 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_31_31;
#line 189 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_37_37 = (MR_Word) &mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_3[0];
#line 189 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_38_38;
#line 189 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_40_40;
#line 189 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_41_41;
#line 189 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_48_48;
#line 189 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_50_50;
#line 189 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_51_51;
#line 189 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_58_58;

#line 192 "autopar_reports.m"
    {
#line 192 "autopar_reports.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(mdprof_fb__automatic_parallelism__autopar_reports__V_37_37, mdprof_fb__automatic_parallelism__autopar_reports__Hi_7, &mdprof_fb__automatic_parallelism__autopar_reports__V_31_31);
    }
#line 191 "autopar_reports.m"
    {
#line 191 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_38_38 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_31_31, (MR_String) "\n");
    }
#line 191 "autopar_reports.m"
    {
#line 191 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_40_40 = mercury__string__f_43_43_2_f_0((MR_String) ", hi ", mdprof_fb__automatic_parallelism__autopar_reports__V_38_38);
    }
#line 192 "autopar_reports.m"
    {
#line 192 "autopar_reports.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(mdprof_fb__automatic_parallelism__autopar_reports__V_37_37, mdprof_fb__automatic_parallelism__autopar_reports__Lo_6, &mdprof_fb__automatic_parallelism__autopar_reports__V_41_41);
    }
#line 191 "autopar_reports.m"
    {
#line 191 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_48_48 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_41_41, mdprof_fb__automatic_parallelism__autopar_reports__V_40_40);
    }
#line 191 "autopar_reports.m"
    {
#line 191 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_50_50 = mercury__string__f_43_43_2_f_0((MR_String) ", lo ", mdprof_fb__automatic_parallelism__autopar_reports__V_48_48);
    }
#line 192 "autopar_reports.m"
    {
#line 192 "autopar_reports.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mdprof_fb__automatic_parallelism__autopar_reports__V_37_37, mdprof_fb__automatic_parallelism__autopar_reports__PushGoalPathStr_5, &mdprof_fb__automatic_parallelism__autopar_reports__V_51_51);
    }
#line 191 "autopar_reports.m"
    {
#line 191 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_58_58 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_51_51, mdprof_fb__automatic_parallelism__autopar_reports__V_50_50);
    }
#line 191 "autopar_reports.m"
    {
#line 191 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__HeadPushGoalStr_9 = mercury__string__f_43_43_2_f_0((MR_String) "\n      PushGoal: ", mdprof_fb__automatic_parallelism__autopar_reports__V_58_58);
    }
#line 2553 "mdprof_fb.automatic_parallelism.autopar_reports.c"
    mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_29_29 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 197 "autopar_reports.m"
    {
#line 197 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__TailPushGoalStrs_12 = mercury__list__map_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_29_29, mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_29_29, (MR_Word) &mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_2[5], mdprof_fb__automatic_parallelism__autopar_reports__PushedGoalPathStrs_8);
    }
#line 198 "autopar_reports.m"
    {
#line 198 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 198 "autopar_reports.m"
      MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__V_27_27, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__HeadPushGoalStr_9));
#line 198 "autopar_reports.m"
      MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__V_27_27, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__TailPushGoalStrs_12));
#line 198 "autopar_reports.m"
    }
#line 198 "autopar_reports.m"
    {
#line 198 "autopar_reports.m"
      *mdprof_fb__automatic_parallelism__autopar_reports__Report_4 = mercury__cord__from_list_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_29_29, mdprof_fb__automatic_parallelism__autopar_reports__V_27_27);
    }
#line 189 "autopar_reports.m"
  }
#line 187 "autopar_reports.m"
}

#line 156 "autopar_reports.m"
static MR_String MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__alg_for_finding_best_par_to_string_1_f_0(
#line 156 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__Alg_3)
#line 156 "autopar_reports.m"
{
#line 160 "autopar_reports.m"
  {
#line 160 "autopar_reports.m"
    MR_bool mdprof_fb__automatic_parallelism__autopar_reports__succeeded;
#line 160 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__Str_4;

#line 160 "autopar_reports.m"
    if ((mdprof_fb__automatic_parallelism__autopar_reports__Alg_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 170 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__Str_4 = (MR_String) "complete";
#line 160 "autopar_reports.m"
    else
#line 160 "autopar_reports.m"
    if ((mdprof_fb__automatic_parallelism__autopar_reports__Alg_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 161 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__Str_4 = (MR_String) "greedy";
#line 160 "autopar_reports.m"
    else
#line 160 "autopar_reports.m"
    if (((MR_tag((MR_Word) mdprof_fb__automatic_parallelism__autopar_reports__Alg_3)) == (MR_mktag((MR_Integer) 1))))
#line 163 "autopar_reports.m"
      {
#line 163 "autopar_reports.m"
        MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__N_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__Alg_3, (MR_Integer) 0)));
#line 163 "autopar_reports.m"
        MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_26_26;
#line 163 "autopar_reports.m"
        MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_33_33;

#line 164 "autopar_reports.m"
        {
#line 164 "autopar_reports.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_3[0], mdprof_fb__automatic_parallelism__autopar_reports__N_5, &mdprof_fb__automatic_parallelism__autopar_reports__V_26_26);
        }
#line 164 "autopar_reports.m"
        {
#line 164 "autopar_reports.m"
          mdprof_fb__automatic_parallelism__autopar_reports__V_33_33 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_26_26, (MR_String) ")");
        }
#line 164 "autopar_reports.m"
        {
#line 164 "autopar_reports.m"
          return mdprof_fb__automatic_parallelism__autopar_reports__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "complete-branches(", mdprof_fb__automatic_parallelism__autopar_reports__V_33_33);
        }
#line 163 "autopar_reports.m"
      }
#line 160 "autopar_reports.m"
    else
#line 166 "autopar_reports.m"
      {
#line 166 "autopar_reports.m"
        MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__N_14 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdprof_fb__automatic_parallelism__autopar_reports__Alg_3, (MR_Integer) 0)));
#line 166 "autopar_reports.m"
        MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_16_16;
#line 166 "autopar_reports.m"
        MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_23_23;

#line 167 "autopar_reports.m"
        {
#line 167 "autopar_reports.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_3[0], mdprof_fb__automatic_parallelism__autopar_reports__N_14, &mdprof_fb__automatic_parallelism__autopar_reports__V_16_16);
        }
#line 167 "autopar_reports.m"
        {
#line 167 "autopar_reports.m"
          mdprof_fb__automatic_parallelism__autopar_reports__V_23_23 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_16_16, (MR_String) ")");
        }
#line 167 "autopar_reports.m"
        {
#line 167 "autopar_reports.m"
          return mdprof_fb__automatic_parallelism__autopar_reports__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "complete-size(", mdprof_fb__automatic_parallelism__autopar_reports__V_23_23);
        }
#line 166 "autopar_reports.m"
      }
#line 160 "autopar_reports.m"
    return mdprof_fb__automatic_parallelism__autopar_reports__Str_4;
#line 160 "autopar_reports.m"
  }
#line 156 "autopar_reports.m"
}

#line 145 "autopar_reports.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__create_feedback_autopar_report_2_p_0_2(
#line 145 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure_arg,
#line 145 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1,
#line 145 "autopar_reports.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2)
#line 145 "autopar_reports.m"
{
#line 145 "autopar_reports.m"
  {
#line 145 "autopar_reports.m"
    MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure = mdprof_fb__automatic_parallelism__autopar_reports__closure_arg;
#line 145 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__conv2_Report_5;

#line 145 "autopar_reports.m"
    {
#line 145 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_proc_report_2_p_0(((MR_Word) mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1), &mdprof_fb__automatic_parallelism__autopar_reports__conv2_Report_5);
    }
#line 145 "autopar_reports.m"
    *mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2 = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__conv2_Report_5));
#line 145 "autopar_reports.m"
  }
#line 145 "autopar_reports.m"
}

#line 91 "autopar_reports.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__create_feedback_autopar_report_2_p_0_1(
#line 91 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure_arg,
#line 91 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1,
#line 91 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2,
#line 91 "autopar_reports.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_3)
#line 91 "autopar_reports.m"
{
#line 91 "autopar_reports.m"
  {
#line 91 "autopar_reports.m"
    MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure = mdprof_fb__automatic_parallelism__autopar_reports__closure_arg;
#line 91 "autopar_reports.m"
    MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__conv0_HeadVar__3_102;

#line 91 "autopar_reports.m"
    {
#line 91 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__IntroducedFrom__pred__create_feedback_autopar_report__91__1_3_p_0(((MR_Word) mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1), ((MR_Integer) mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2), &mdprof_fb__automatic_parallelism__autopar_reports__conv0_HeadVar__3_102);
    }
#line 91 "autopar_reports.m"
    *mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_3 = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__conv0_HeadVar__3_102));
#line 91 "autopar_reports.m"
  }
#line 91 "autopar_reports.m"
}

#line 84 "autopar_reports.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__create_feedback_autopar_report_2_p_0(
#line 84 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__CandidateParConjs_3,
#line 84 "autopar_reports.m"
  MR_String * mdprof_fb__automatic_parallelism__autopar_reports__Report_4)
#line 84 "autopar_reports.m"
{
#line 87 "autopar_reports.m"
  {
#line 87 "autopar_reports.m"
    MR_bool mdprof_fb__automatic_parallelism__autopar_reports__succeeded;
#line 87 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__TypeInfo_99_99 = (MR_Word) &mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_2[0];
#line 87 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_105_105;
#line 87 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__Parameters_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__CandidateParConjs_3, (MR_Integer) 0)));
#line 87 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__ProcConjs_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__CandidateParConjs_3, (MR_Integer) 1)));
#line 87 "autopar_reports.m"
    MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__NumProcConjs_7;
#line 87 "autopar_reports.m"
    MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__NumConjs_8;
#line 87 "autopar_reports.m"
    MR_Float mdprof_fb__automatic_parallelism__autopar_reports__DesiredParallelism_9;
#line 87 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__IntermoduleVarUse_10;
#line 87 "autopar_reports.m"
    MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__SparkingCost_11;
#line 87 "autopar_reports.m"
    MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__SparkingDelay_12;
#line 87 "autopar_reports.m"
    MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__BarrierCost_13;
#line 87 "autopar_reports.m"
    MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__SignalCost_14;
#line 87 "autopar_reports.m"
    MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__WaitCost_15;
#line 87 "autopar_reports.m"
    MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__ContextWakeupDelay_16;
#line 87 "autopar_reports.m"
    MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__CliqueThreshold_17;
#line 87 "autopar_reports.m"
    MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__CallSiteThreshold_18;
#line 87 "autopar_reports.m"
    MR_Float mdprof_fb__automatic_parallelism__autopar_reports__SpeedupThreshold_19;
#line 87 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__ParalleliseDepConjs_20;
#line 87 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__AlgForFindingBestPar_21;
#line 87 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__AlgForFindingBestParStr_22;
#line 87 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__ReportHeader_23;
#line 87 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__ParalleliseDepConjsStr_24;
#line 87 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__ReportConjs_26;
#line 87 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_29_29;
#line 87 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_67_67;
#line 87 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_96_96;
#line 87 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_97_97;
#line 87 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_98_98;
#line 87 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_111_111;
#line 87 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_117_117;
#line 87 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_118_118;
#line 87 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_120_120;
#line 87 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_121_121;
#line 87 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_128_128;
#line 87 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_130_130;
#line 87 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_131_131;
#line 87 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_138_138;
#line 87 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_140_140;
#line 87 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_141_141;
#line 87 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_148_148;
#line 87 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_150_150;
#line 87 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_151_151;
#line 87 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_159_159;
#line 87 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_161_161;
#line 87 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_162_162;
#line 87 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_169_169;
#line 87 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_171_171;
#line 87 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_172_172;
#line 87 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_179_179;
#line 87 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_181_181;
#line 87 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_182_182;
#line 87 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_189_189;
#line 87 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_191_191;
#line 87 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_192_192;
#line 87 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_199_199;
#line 87 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_201_201;
#line 87 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_202_202;
#line 87 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_209_209;
#line 87 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_211_211;
#line 87 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_212_212;
#line 87 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_219_219;
#line 87 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_221_221;
#line 87 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_222_222;
#line 87 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_229_229;
#line 87 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_231_231;
#line 87 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_232_232;
#line 87 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_239_239;
#line 87 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_241_241;
#line 87 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_242_242;
#line 87 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_249_249;
#line 87 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_251_251;
#line 87 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_252_252;
#line 87 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_260_260;
#line 91 "autopar_reports.m"
    MR_Box mdprof_fb__automatic_parallelism__autopar_reports__conv1_NumConjs_8;

#line 90 "autopar_reports.m"
    {
#line 90 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__NumProcConjs_7 = mercury__list__length_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeInfo_99_99, mdprof_fb__automatic_parallelism__autopar_reports__ProcConjs_6);
    }
#line 91 "autopar_reports.m"
    {
#line 91 "autopar_reports.m"
      mercury__list__foldl_4_p_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeInfo_99_99, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_2[3], mdprof_fb__automatic_parallelism__autopar_reports__ProcConjs_6, ((MR_Box) ((MR_Integer) 0)), &mdprof_fb__automatic_parallelism__autopar_reports__conv1_NumConjs_8);
    }
#line 91 "autopar_reports.m"
    mdprof_fb__automatic_parallelism__autopar_reports__NumConjs_8 = ((MR_Integer) mdprof_fb__automatic_parallelism__autopar_reports__conv1_NumConjs_8);
#line 92 "autopar_reports.m"
    mdprof_fb__automatic_parallelism__autopar_reports__DesiredParallelism_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__Parameters_5, (MR_Integer) 0)));
#line 92 "autopar_reports.m"
    mdprof_fb__automatic_parallelism__autopar_reports__IntermoduleVarUse_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__Parameters_5, (MR_Integer) 1)));
#line 92 "autopar_reports.m"
    mdprof_fb__automatic_parallelism__autopar_reports__SparkingCost_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__Parameters_5, (MR_Integer) 2)));
#line 92 "autopar_reports.m"
    mdprof_fb__automatic_parallelism__autopar_reports__SparkingDelay_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__Parameters_5, (MR_Integer) 3)));
#line 92 "autopar_reports.m"
    mdprof_fb__automatic_parallelism__autopar_reports__BarrierCost_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__Parameters_5, (MR_Integer) 4)));
#line 92 "autopar_reports.m"
    mdprof_fb__automatic_parallelism__autopar_reports__SignalCost_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__Parameters_5, (MR_Integer) 5)));
#line 92 "autopar_reports.m"
    mdprof_fb__automatic_parallelism__autopar_reports__WaitCost_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__Parameters_5, (MR_Integer) 6)));
#line 92 "autopar_reports.m"
    mdprof_fb__automatic_parallelism__autopar_reports__ContextWakeupDelay_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__Parameters_5, (MR_Integer) 7)));
#line 92 "autopar_reports.m"
    mdprof_fb__automatic_parallelism__autopar_reports__CliqueThreshold_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__Parameters_5, (MR_Integer) 8)));
#line 92 "autopar_reports.m"
    mdprof_fb__automatic_parallelism__autopar_reports__CallSiteThreshold_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__Parameters_5, (MR_Integer) 9)));
#line 92 "autopar_reports.m"
    mdprof_fb__automatic_parallelism__autopar_reports__SpeedupThreshold_19 = MR_unbox_float((MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__Parameters_5, (MR_Integer) 10)));
#line 92 "autopar_reports.m"
    mdprof_fb__automatic_parallelism__autopar_reports__ParalleliseDepConjs_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__Parameters_5, (MR_Integer) 11)));
#line 92 "autopar_reports.m"
    mdprof_fb__automatic_parallelism__autopar_reports__AlgForFindingBestPar_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__Parameters_5, (MR_Integer) 12)));
#line 97 "autopar_reports.m"
    {
#line 97 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__AlgForFindingBestParStr_22 = mdprof_fb__automatic_parallelism__autopar_reports__alg_for_finding_best_par_to_string_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__AlgForFindingBestPar_21);
    }
#line 2936 "mdprof_fb.automatic_parallelism.autopar_reports.c"
    mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_105_105 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 118 "autopar_reports.m"
    {
#line 118 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_67_67 = mercury__string__string_1_f_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__IntermoduleVarUse_10)));
    }
#line 141 "autopar_reports.m"
    if ((mdprof_fb__automatic_parallelism__autopar_reports__ParalleliseDepConjs_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 143 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__ParalleliseDepConjsStr_24 = (MR_String) "no";
#line 141 "autopar_reports.m"
    else
#line 133 "autopar_reports.m"
      {
#line 133 "autopar_reports.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__SpeedupAlg_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__ParalleliseDepConjs_20, (MR_Integer) 0)));

#line 137 "autopar_reports.m"
        if ((mdprof_fb__automatic_parallelism__autopar_reports__SpeedupAlg_25 == (MR_Integer) 1))
#line 139 "autopar_reports.m"
          mdprof_fb__automatic_parallelism__autopar_reports__ParalleliseDepConjsStr_24 = (MR_String) "yes, use overlap calculation";
#line 137 "autopar_reports.m"
        else
#line 136 "autopar_reports.m"
          mdprof_fb__automatic_parallelism__autopar_reports__ParalleliseDepConjsStr_24 = (MR_String) "yes, pretend they\'re independent";
#line 133 "autopar_reports.m"
      }
#line 2964 "mdprof_fb.automatic_parallelism.autopar_reports.c"
    mdprof_fb__automatic_parallelism__autopar_reports__V_117_117 = (MR_Word) &mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_3[0];
#line 131 "autopar_reports.m"
    {
#line 131 "autopar_reports.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(mdprof_fb__automatic_parallelism__autopar_reports__V_117_117, mdprof_fb__automatic_parallelism__autopar_reports__NumConjs_8, &mdprof_fb__automatic_parallelism__autopar_reports__V_111_111);
    }
#line 99 "autopar_reports.m"
    {
#line 99 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_118_118 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_111_111, (MR_String) "\n    Parallel conjunctions:\n\n");
    }
#line 99 "autopar_reports.m"
    {
#line 99 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_120_120 = mercury__string__f_43_43_2_f_0((MR_String) "\n    # of par conjunctions:     ", mdprof_fb__automatic_parallelism__autopar_reports__V_118_118);
    }
#line 130 "autopar_reports.m"
    {
#line 130 "autopar_reports.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(mdprof_fb__automatic_parallelism__autopar_reports__V_117_117, mdprof_fb__automatic_parallelism__autopar_reports__NumProcConjs_7, &mdprof_fb__automatic_parallelism__autopar_reports__V_121_121);
    }
#line 99 "autopar_reports.m"
    {
#line 99 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_128_128 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_121_121, mdprof_fb__automatic_parallelism__autopar_reports__V_120_120);
    }
#line 99 "autopar_reports.m"
    {
#line 99 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_130_130 = mercury__string__f_43_43_2_f_0((MR_String) "\n    # of par procs with conjs: ", mdprof_fb__automatic_parallelism__autopar_reports__V_128_128);
    }
#line 129 "autopar_reports.m"
    {
#line 129 "autopar_reports.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mdprof_fb__automatic_parallelism__autopar_reports__V_117_117, mdprof_fb__automatic_parallelism__autopar_reports__AlgForFindingBestParStr_22, &mdprof_fb__automatic_parallelism__autopar_reports__V_131_131);
    }
#line 99 "autopar_reports.m"
    {
#line 99 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_138_138 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_131_131, mdprof_fb__automatic_parallelism__autopar_reports__V_130_130);
    }
#line 99 "autopar_reports.m"
    {
#line 99 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_140_140 = mercury__string__f_43_43_2_f_0((MR_String) "\n    BestParAlgorithm:          ", mdprof_fb__automatic_parallelism__autopar_reports__V_138_138);
    }
#line 128 "autopar_reports.m"
    {
#line 128 "autopar_reports.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mdprof_fb__automatic_parallelism__autopar_reports__V_117_117, mdprof_fb__automatic_parallelism__autopar_reports__ParalleliseDepConjsStr_24, &mdprof_fb__automatic_parallelism__autopar_reports__V_141_141);
    }
#line 99 "autopar_reports.m"
    {
#line 99 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_148_148 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_141_141, mdprof_fb__automatic_parallelism__autopar_reports__V_140_140);
    }
#line 99 "autopar_reports.m"
    {
#line 99 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_150_150 = mercury__string__f_43_43_2_f_0((MR_String) "\n    Dependent conjs:           ", mdprof_fb__automatic_parallelism__autopar_reports__V_148_148);
    }
#line 127 "autopar_reports.m"
    {
#line 127 "autopar_reports.m"
      mercury__string__format__format_float_component_nowidth_noprec_4_p_0(mdprof_fb__automatic_parallelism__autopar_reports__V_117_117, (MR_Integer) 2, mdprof_fb__automatic_parallelism__autopar_reports__SpeedupThreshold_19, &mdprof_fb__automatic_parallelism__autopar_reports__V_151_151);
    }
#line 99 "autopar_reports.m"
    {
#line 99 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_159_159 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_151_151, mdprof_fb__automatic_parallelism__autopar_reports__V_150_150);
    }
#line 99 "autopar_reports.m"
    {
#line 99 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_161_161 = mercury__string__f_43_43_2_f_0((MR_String) "\n    Speedup threshold:         ", mdprof_fb__automatic_parallelism__autopar_reports__V_159_159);
    }
#line 126 "autopar_reports.m"
    {
#line 126 "autopar_reports.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(mdprof_fb__automatic_parallelism__autopar_reports__V_117_117, mdprof_fb__automatic_parallelism__autopar_reports__CallSiteThreshold_18, &mdprof_fb__automatic_parallelism__autopar_reports__V_162_162);
    }
#line 99 "autopar_reports.m"
    {
#line 99 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_169_169 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_162_162, mdprof_fb__automatic_parallelism__autopar_reports__V_161_161);
    }
#line 99 "autopar_reports.m"
    {
#line 99 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_171_171 = mercury__string__f_43_43_2_f_0((MR_String) "\n    Call site threshold:       ", mdprof_fb__automatic_parallelism__autopar_reports__V_169_169);
    }
#line 125 "autopar_reports.m"
    {
#line 125 "autopar_reports.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(mdprof_fb__automatic_parallelism__autopar_reports__V_117_117, mdprof_fb__automatic_parallelism__autopar_reports__CliqueThreshold_17, &mdprof_fb__automatic_parallelism__autopar_reports__V_172_172);
    }
#line 99 "autopar_reports.m"
    {
#line 99 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_179_179 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_172_172, mdprof_fb__automatic_parallelism__autopar_reports__V_171_171);
    }
#line 99 "autopar_reports.m"
    {
#line 99 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_181_181 = mercury__string__f_43_43_2_f_0((MR_String) "\n    Clique threshold:          ", mdprof_fb__automatic_parallelism__autopar_reports__V_179_179);
    }
#line 124 "autopar_reports.m"
    {
#line 124 "autopar_reports.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(mdprof_fb__automatic_parallelism__autopar_reports__V_117_117, mdprof_fb__automatic_parallelism__autopar_reports__ContextWakeupDelay_16, &mdprof_fb__automatic_parallelism__autopar_reports__V_182_182);
    }
#line 99 "autopar_reports.m"
    {
#line 99 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_189_189 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_182_182, mdprof_fb__automatic_parallelism__autopar_reports__V_181_181);
    }
#line 99 "autopar_reports.m"
    {
#line 99 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_191_191 = mercury__string__f_43_43_2_f_0((MR_String) "\n    Context wakeup delay:      ", mdprof_fb__automatic_parallelism__autopar_reports__V_189_189);
    }
#line 123 "autopar_reports.m"
    {
#line 123 "autopar_reports.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(mdprof_fb__automatic_parallelism__autopar_reports__V_117_117, mdprof_fb__automatic_parallelism__autopar_reports__WaitCost_15, &mdprof_fb__automatic_parallelism__autopar_reports__V_192_192);
    }
#line 99 "autopar_reports.m"
    {
#line 99 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_199_199 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_192_192, mdprof_fb__automatic_parallelism__autopar_reports__V_191_191);
    }
#line 99 "autopar_reports.m"
    {
#line 99 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_201_201 = mercury__string__f_43_43_2_f_0((MR_String) "\n    Future wait cost:          ", mdprof_fb__automatic_parallelism__autopar_reports__V_199_199);
    }
#line 122 "autopar_reports.m"
    {
#line 122 "autopar_reports.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(mdprof_fb__automatic_parallelism__autopar_reports__V_117_117, mdprof_fb__automatic_parallelism__autopar_reports__SignalCost_14, &mdprof_fb__automatic_parallelism__autopar_reports__V_202_202);
    }
#line 99 "autopar_reports.m"
    {
#line 99 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_209_209 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_202_202, mdprof_fb__automatic_parallelism__autopar_reports__V_201_201);
    }
#line 99 "autopar_reports.m"
    {
#line 99 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_211_211 = mercury__string__f_43_43_2_f_0((MR_String) "\n    Future signal cost:        ", mdprof_fb__automatic_parallelism__autopar_reports__V_209_209);
    }
#line 121 "autopar_reports.m"
    {
#line 121 "autopar_reports.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(mdprof_fb__automatic_parallelism__autopar_reports__V_117_117, mdprof_fb__automatic_parallelism__autopar_reports__BarrierCost_13, &mdprof_fb__automatic_parallelism__autopar_reports__V_212_212);
    }
#line 99 "autopar_reports.m"
    {
#line 99 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_219_219 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_212_212, mdprof_fb__automatic_parallelism__autopar_reports__V_211_211);
    }
#line 99 "autopar_reports.m"
    {
#line 99 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_221_221 = mercury__string__f_43_43_2_f_0((MR_String) "\n    Barrier cost:              ", mdprof_fb__automatic_parallelism__autopar_reports__V_219_219);
    }
#line 120 "autopar_reports.m"
    {
#line 120 "autopar_reports.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(mdprof_fb__automatic_parallelism__autopar_reports__V_117_117, mdprof_fb__automatic_parallelism__autopar_reports__SparkingDelay_12, &mdprof_fb__automatic_parallelism__autopar_reports__V_222_222);
    }
#line 99 "autopar_reports.m"
    {
#line 99 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_229_229 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_222_222, mdprof_fb__automatic_parallelism__autopar_reports__V_221_221);
    }
#line 99 "autopar_reports.m"
    {
#line 99 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_231_231 = mercury__string__f_43_43_2_f_0((MR_String) "\n    Sparking delay:            ", mdprof_fb__automatic_parallelism__autopar_reports__V_229_229);
    }
#line 119 "autopar_reports.m"
    {
#line 119 "autopar_reports.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(mdprof_fb__automatic_parallelism__autopar_reports__V_117_117, mdprof_fb__automatic_parallelism__autopar_reports__SparkingCost_11, &mdprof_fb__automatic_parallelism__autopar_reports__V_232_232);
    }
#line 99 "autopar_reports.m"
    {
#line 99 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_239_239 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_232_232, mdprof_fb__automatic_parallelism__autopar_reports__V_231_231);
    }
#line 99 "autopar_reports.m"
    {
#line 99 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_241_241 = mercury__string__f_43_43_2_f_0((MR_String) "\n    Sparking cost:             ", mdprof_fb__automatic_parallelism__autopar_reports__V_239_239);
    }
#line 118 "autopar_reports.m"
    {
#line 118 "autopar_reports.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mdprof_fb__automatic_parallelism__autopar_reports__V_117_117, mdprof_fb__automatic_parallelism__autopar_reports__V_67_67, &mdprof_fb__automatic_parallelism__autopar_reports__V_242_242);
    }
#line 99 "autopar_reports.m"
    {
#line 99 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_249_249 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_242_242, mdprof_fb__automatic_parallelism__autopar_reports__V_241_241);
    }
#line 99 "autopar_reports.m"
    {
#line 99 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_251_251 = mercury__string__f_43_43_2_f_0((MR_String) "\n    Intermodule var use:       ", mdprof_fb__automatic_parallelism__autopar_reports__V_249_249);
    }
#line 117 "autopar_reports.m"
    {
#line 117 "autopar_reports.m"
      mercury__string__format__format_float_component_nowidth_noprec_4_p_0(mdprof_fb__automatic_parallelism__autopar_reports__V_117_117, (MR_Integer) 2, mdprof_fb__automatic_parallelism__autopar_reports__DesiredParallelism_9, &mdprof_fb__automatic_parallelism__autopar_reports__V_252_252);
    }
#line 99 "autopar_reports.m"
    {
#line 99 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_260_260 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_252_252, mdprof_fb__automatic_parallelism__autopar_reports__V_251_251);
    }
#line 99 "autopar_reports.m"
    {
#line 99 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_29_29 = mercury__string__f_43_43_2_f_0((MR_String) "  Candidate parallel conjunctions:\n    Desired parallelism:       ", mdprof_fb__automatic_parallelism__autopar_reports__V_260_260);
    }
#line 99 "autopar_reports.m"
    {
#line 99 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__ReportHeader_23 = mercury__cord__singleton_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_105_105, ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__V_29_29)));
    }
#line 145 "autopar_reports.m"
    {
#line 145 "autopar_reports.m"
      mercury__list__map_3_p_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeInfo_99_99, (MR_Word) &mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_1[2], (MR_Word) &mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_2[4], mdprof_fb__automatic_parallelism__autopar_reports__ProcConjs_6, &mdprof_fb__automatic_parallelism__autopar_reports__ReportConjs_26);
    }
#line 147 "autopar_reports.m"
    {
#line 147 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_98_98 = mercury__cord__cord_list_to_cord_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_105_105, mdprof_fb__automatic_parallelism__autopar_reports__ReportConjs_26);
    }
#line 147 "autopar_reports.m"
    {
#line 147 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_97_97 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_105_105, mdprof_fb__automatic_parallelism__autopar_reports__ReportHeader_23, mdprof_fb__automatic_parallelism__autopar_reports__V_98_98);
    }
#line 147 "autopar_reports.m"
    {
#line 147 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_96_96 = mercury__cord__list_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_105_105, mdprof_fb__automatic_parallelism__autopar_reports__V_97_97);
    }
#line 147 "autopar_reports.m"
    {
#line 147 "autopar_reports.m"
      *mdprof_fb__automatic_parallelism__autopar_reports__Report_4 = mercury__string__append_list_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_96_96);
    }
#line 87 "autopar_reports.m"
  }
#line 84 "autopar_reports.m"
}

#line 237 "autopar_reports.m"
static MR_Box MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_p_0_2(
#line 237 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure_arg,
#line 237 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1)
#line 237 "autopar_reports.m"
{
#line 237 "autopar_reports.m"
  {
#line 237 "autopar_reports.m"
    MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2;
#line 237 "autopar_reports.m"
    MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure = mdprof_fb__automatic_parallelism__autopar_reports__closure_arg;
#line 237 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__conv1_HeadVar__2_77;

#line 237 "autopar_reports.m"
    {
#line 237 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__conv1_HeadVar__2_77 = mdprof_fb__automatic_parallelism__autopar_reports__IntroducedFrom__func__create_candidate_parallel_conj_report__237__1_1_f_0(((MR_String) mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1));
    }
#line 237 "autopar_reports.m"
    mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2 = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__conv1_HeadVar__2_77));
#line 237 "autopar_reports.m"
    return mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2;
#line 237 "autopar_reports.m"
  }
#line 237 "autopar_reports.m"
}

#line 218 "autopar_reports.m"
static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_p_0_1(
#line 218 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure_arg,
#line 218 "autopar_reports.m"
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1,
#line 218 "autopar_reports.m"
  MR_Box * mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2)
#line 218 "autopar_reports.m"
{
#line 218 "autopar_reports.m"
  {
#line 218 "autopar_reports.m"
    MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure = mdprof_fb__automatic_parallelism__autopar_reports__closure_arg;
#line 218 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__conv0_HeadVar__3_3;

#line 218 "autopar_reports.m"
    {
#line 218 "autopar_reports.m"
      mdbcomp__program_representation__lookup_var_name_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__closure, (MR_Integer) 3))), ((MR_Integer) mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1), &mdprof_fb__automatic_parallelism__autopar_reports__conv0_HeadVar__3_3);
    }
#line 218 "autopar_reports.m"
    *mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2 = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__conv0_HeadVar__3_3));
#line 218 "autopar_reports.m"
  }
#line 218 "autopar_reports.m"
}

#line 29 "autopar_reports.m"
void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_p_0(
#line 29 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__VarNameTable_4,
#line 29 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__CandidateParConjunction_5,
#line 29 "autopar_reports.m"
  MR_Word * mdprof_fb__automatic_parallelism__autopar_reports__Report_6)
#line 29 "autopar_reports.m"
{
#line 205 "autopar_reports.m"
  {
#line 205 "autopar_reports.m"
    MR_bool mdprof_fb__automatic_parallelism__autopar_reports__succeeded;
#line 205 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_193_193;
#line 205 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__GoalPathString_7 = ((MR_String) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__CandidateParConjunction_5, (MR_Integer) 0)));
#line 205 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__MaybePushGoal_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__CandidateParConjunction_5, (MR_Integer) 1)));
#line 205 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__IsDependent_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__CandidateParConjunction_5, (MR_Integer) 3)));
#line 205 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__GoalsBefore_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__CandidateParConjunction_5, (MR_Integer) 4)));
#line 205 "autopar_reports.m"
    MR_Float mdprof_fb__automatic_parallelism__autopar_reports__GoalsBeforeCost_12 = MR_unbox_float((MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__CandidateParConjunction_5, (MR_Integer) 5)));
#line 205 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__Conjs_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__CandidateParConjunction_5, (MR_Integer) 6)));
#line 205 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__GoalsAfter_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__CandidateParConjunction_5, (MR_Integer) 7)));
#line 205 "autopar_reports.m"
    MR_Float mdprof_fb__automatic_parallelism__autopar_reports__GoalsAfterCost_15 = MR_unbox_float((MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__CandidateParConjunction_5, (MR_Integer) 8)));
#line 205 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__ParExecMetrics_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__CandidateParConjunction_5, (MR_Integer) 9)));
#line 205 "autopar_reports.m"
    MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__NumCalls_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__ParExecMetrics_16, (MR_Integer) 0)));
#line 205 "autopar_reports.m"
    MR_Float mdprof_fb__automatic_parallelism__autopar_reports__SeqTime_18 = MR_unbox_float((MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__ParExecMetrics_16, (MR_Integer) 1)));
#line 205 "autopar_reports.m"
    MR_Float mdprof_fb__automatic_parallelism__autopar_reports__ParTime_19 = MR_unbox_float((MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__ParExecMetrics_16, (MR_Integer) 2)));
#line 205 "autopar_reports.m"
    MR_Float mdprof_fb__automatic_parallelism__autopar_reports__SparkCost_20 = MR_unbox_float((MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__ParExecMetrics_16, (MR_Integer) 3)));
#line 205 "autopar_reports.m"
    MR_Float mdprof_fb__automatic_parallelism__autopar_reports__BarrierCost_21 = MR_unbox_float((MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__ParExecMetrics_16, (MR_Integer) 4)));
#line 205 "autopar_reports.m"
    MR_Float mdprof_fb__automatic_parallelism__autopar_reports__SignalsCost_22 = MR_unbox_float((MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__ParExecMetrics_16, (MR_Integer) 5)));
#line 205 "autopar_reports.m"
    MR_Float mdprof_fb__automatic_parallelism__autopar_reports__WaitsCost_23 = MR_unbox_float((MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__ParExecMetrics_16, (MR_Integer) 6)));
#line 205 "autopar_reports.m"
    MR_Float mdprof_fb__automatic_parallelism__autopar_reports__FirstConjDeadTime_24 = MR_unbox_float((MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__ParExecMetrics_16, (MR_Integer) 7)));
#line 205 "autopar_reports.m"
    MR_Float mdprof_fb__automatic_parallelism__autopar_reports__FutureDeadTime_25 = MR_unbox_float((MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__ParExecMetrics_16, (MR_Integer) 8)));
#line 205 "autopar_reports.m"
    MR_Float mdprof_fb__automatic_parallelism__autopar_reports__ParOverheads_26;
#line 205 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__DependenceString_27;
#line 205 "autopar_reports.m"
    MR_Float mdprof_fb__automatic_parallelism__autopar_reports__Speedup_31;
#line 205 "autopar_reports.m"
    MR_Float mdprof_fb__automatic_parallelism__autopar_reports__TimeSaving_32;
#line 205 "autopar_reports.m"
    MR_Float mdprof_fb__automatic_parallelism__autopar_reports__TotalDeadTime_33;
#line 205 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__Header1Str_34;
#line 205 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__Header1_35;
#line 205 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__Header2_36;
#line 205 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__Header2Str_46;
#line 205 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__Header3_47;
#line 205 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__RevGoalPath_49;
#line 205 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__ReportGoalsBefore0_51;
#line 205 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__ReportGoalsBefore_52;
#line 205 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__ReportParConj0_53;
#line 205 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__ReportParConj_54;
#line 205 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__ReportGoalsAfter0_55;
#line 205 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__ReportGoalsAfter_56;
#line 205 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_114_114;
#line 205 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_117_117;
#line 205 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_120_120;
#line 205 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_123_123;
#line 205 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_126_126;
#line 205 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_129_129;
#line 205 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_132_132;
#line 205 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_135_135;
#line 205 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_138_138;
#line 205 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_141_141;
#line 205 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_144_144;
#line 205 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_147_147;
#line 205 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_150_150;
#line 205 "autopar_reports.m"
    MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_ConjNum_155_155 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__CandidateParConjunction_5, (MR_Integer) 2)));
#line 205 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_157_157;
#line 205 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_159_159;
#line 205 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_160_160;
#line 205 "autopar_reports.m"
    MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_ConjNum_162_162;
#line 205 "autopar_reports.m"
    MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__V_163_163;
#line 205 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_165_165;
#line 205 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_167_167;
#line 205 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_168_168;
#line 205 "autopar_reports.m"
    MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_ConjNum_170_170;
#line 205 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_173_173;
#line 205 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_175_175;
#line 205 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_176_176;
#line 205 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_178_178;
#line 205 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_179_179;
#line 205 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_180_180;
#line 205 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_181_181;
#line 205 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_182_182;
#line 205 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_183_183;
#line 205 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_184_184;
#line 205 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_185_185;
#line 205 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_186_186;
#line 205 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_187_187;
#line 205 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_204_204;
#line 205 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_210_210;
#line 205 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_211_211;
#line 205 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_244_244;
#line 205 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_251_251;
#line 205 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_253_253;
#line 205 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_254_254;
#line 205 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_261_261;
#line 205 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_263_263;
#line 205 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_264_264;
#line 205 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_271_271;
#line 205 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_273_273;
#line 205 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_274_274;
#line 205 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_281_281;
#line 205 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_283_283;
#line 205 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_284_284;
#line 205 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_291_291;
#line 205 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_293_293;
#line 205 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_294_294;
#line 205 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_301_301;
#line 205 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_303_303;
#line 205 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_304_304;
#line 205 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_311_311;
#line 205 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_313_313;
#line 205 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_314_314;
#line 205 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_321_321;
#line 205 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_323_323;
#line 205 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_324_324;
#line 205 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_331_331;
#line 205 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_333_333;
#line 205 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_334_334;
#line 205 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_341_341;
#line 205 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_343_343;
#line 205 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_344_344;
#line 205 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_351_351;
#line 205 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_353_353;
#line 205 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_354_354;
#line 205 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_361_361;
#line 205 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_363_363;
#line 205 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_364_364;
#line 205 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_371_371;
#line 205 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_373_373;
#line 205 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_374_374;
#line 205 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_381_381;
#line 279 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__RevGoalPathPrime_48;

#line 212 "autopar_reports.m"
    {
#line 212 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__ParOverheads_26 = mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_get_overheads_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__ParExecMetrics_16);
    }
#line 216 "autopar_reports.m"
    if ((mdprof_fb__automatic_parallelism__autopar_reports__IsDependent_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 215 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__DependenceString_27 = (MR_String) "no";
#line 216 "autopar_reports.m"
    else
#line 217 "autopar_reports.m"
      {
#line 217 "autopar_reports.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_192_192;
#line 217 "autopar_reports.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__Vars_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__IsDependent_10, (MR_Integer) 0)));
#line 217 "autopar_reports.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__VarNames_29;
#line 217 "autopar_reports.m"
        MR_String mdprof_fb__automatic_parallelism__autopar_reports__VarsString_30;
#line 217 "autopar_reports.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_57_57;
#line 217 "autopar_reports.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_59_59;
#line 217 "autopar_reports.m"
        MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_195_195;

#line 218 "autopar_reports.m"
        {
#line 218 "autopar_reports.m"
          mdprof_fb__automatic_parallelism__autopar_reports__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 218 "autopar_reports.m"
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__V_57_57, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_4[0]));
#line 218 "autopar_reports.m"
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__V_57_57, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_p_0_1));
#line 218 "autopar_reports.m"
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__V_57_57, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 218 "autopar_reports.m"
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__V_57_57, 3) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__VarNameTable_4));
#line 218 "autopar_reports.m"
        }
#line 3580 "mdprof_fb.automatic_parallelism.autopar_reports.c"
        mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_192_192 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 218 "autopar_reports.m"
        {
#line 218 "autopar_reports.m"
          mercury__set__map_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_192_192, mdprof_fb__automatic_parallelism__autopar_reports__V_57_57, mdprof_fb__automatic_parallelism__autopar_reports__Vars_28, &mdprof_fb__automatic_parallelism__autopar_reports__VarNames_29);
        }
#line 219 "autopar_reports.m"
        {
#line 219 "autopar_reports.m"
          mdprof_fb__automatic_parallelism__autopar_reports__V_59_59 = mercury__set__to_sorted_list_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_192_192, mdprof_fb__automatic_parallelism__autopar_reports__VarNames_29);
        }
#line 219 "autopar_reports.m"
        {
#line 219 "autopar_reports.m"
          mdprof_fb__automatic_parallelism__autopar_reports__VarsString_30 = mercury__string__join_list_2_f_0((MR_String) ", ", mdprof_fb__automatic_parallelism__autopar_reports__V_59_59);
        }
#line 220 "autopar_reports.m"
        {
#line 220 "autopar_reports.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_3[0], mdprof_fb__automatic_parallelism__autopar_reports__VarsString_30, &mdprof_fb__automatic_parallelism__autopar_reports__V_195_195);
        }
#line 220 "autopar_reports.m"
        {
#line 220 "autopar_reports.m"
          mdprof_fb__automatic_parallelism__autopar_reports__DependenceString_27 = mercury__string__f_43_43_2_f_0((MR_String) "on ", mdprof_fb__automatic_parallelism__autopar_reports__V_195_195);
        }
#line 217 "autopar_reports.m"
      }
#line 222 "autopar_reports.m"
    {
#line 222 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__Speedup_31 = mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_get_speedup_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__ParExecMetrics_16);
    }
#line 223 "autopar_reports.m"
    {
#line 223 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__TimeSaving_32 = mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_get_time_saving_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__ParExecMetrics_16);
    }
#line 224 "autopar_reports.m"
    mdprof_fb__automatic_parallelism__autopar_reports__TotalDeadTime_33 = (mdprof_fb__automatic_parallelism__autopar_reports__FirstConjDeadTime_24 + mdprof_fb__automatic_parallelism__autopar_reports__FutureDeadTime_25);
#line 3621 "mdprof_fb.automatic_parallelism.autopar_reports.c"
    mdprof_fb__automatic_parallelism__autopar_reports__V_210_210 = (MR_Word) &mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_3[0];
#line 226 "autopar_reports.m"
    {
#line 226 "autopar_reports.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mdprof_fb__automatic_parallelism__autopar_reports__V_210_210, mdprof_fb__automatic_parallelism__autopar_reports__GoalPathString_7, &mdprof_fb__automatic_parallelism__autopar_reports__V_204_204);
    }
#line 226 "autopar_reports.m"
    {
#line 226 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_211_211 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_204_204, (MR_String) "\n");
    }
#line 226 "autopar_reports.m"
    {
#line 226 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__Header1Str_34 = mercury__string__f_43_43_2_f_0((MR_String) "      Path: ", mdprof_fb__automatic_parallelism__autopar_reports__V_211_211);
    }
#line 3638 "mdprof_fb.automatic_parallelism.autopar_reports.c"
    mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_193_193 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 227 "autopar_reports.m"
    {
#line 227 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__Header1_35 = mercury__cord__singleton_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_193_193, ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__Header1Str_34)));
    }
#line 232 "autopar_reports.m"
    if ((mdprof_fb__automatic_parallelism__autopar_reports__MaybePushGoal_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 231 "autopar_reports.m"
      {
#line 231 "autopar_reports.m"
        mdprof_fb__automatic_parallelism__autopar_reports__Header2_36 = mercury__cord__empty_0_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_193_193);
      }
#line 232 "autopar_reports.m"
    else
#line 233 "autopar_reports.m"
      {
#line 233 "autopar_reports.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__PushGoal_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__MaybePushGoal_8, (MR_Integer) 0)));
#line 233 "autopar_reports.m"
        MR_String mdprof_fb__automatic_parallelism__autopar_reports__PushGoalPathStr_38 = ((MR_String) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__PushGoal_37, (MR_Integer) 0)));
#line 233 "autopar_reports.m"
        MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__Lo_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__PushGoal_37, (MR_Integer) 1)));
#line 233 "autopar_reports.m"
        MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__Hi_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__PushGoal_37, (MR_Integer) 2)));
#line 233 "autopar_reports.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__PushedGoalPathStrs_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__PushGoal_37, (MR_Integer) 3)));
#line 233 "autopar_reports.m"
        MR_String mdprof_fb__automatic_parallelism__autopar_reports__HeadPushGoalStr_42;
#line 233 "autopar_reports.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__TailPushGoalStrs_45;
#line 233 "autopar_reports.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_82_82;
#line 233 "autopar_reports.m"
        MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_214_214;
#line 233 "autopar_reports.m"
        MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_221_221;
#line 233 "autopar_reports.m"
        MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_223_223;
#line 233 "autopar_reports.m"
        MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_224_224;
#line 233 "autopar_reports.m"
        MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_231_231;
#line 233 "autopar_reports.m"
        MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_233_233;
#line 233 "autopar_reports.m"
        MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_234_234;
#line 233 "autopar_reports.m"
        MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_241_241;

#line 236 "autopar_reports.m"
        {
#line 236 "autopar_reports.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(mdprof_fb__automatic_parallelism__autopar_reports__V_210_210, mdprof_fb__automatic_parallelism__autopar_reports__Hi_40, &mdprof_fb__automatic_parallelism__autopar_reports__V_214_214);
        }
#line 235 "autopar_reports.m"
        {
#line 235 "autopar_reports.m"
          mdprof_fb__automatic_parallelism__autopar_reports__V_221_221 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_214_214, (MR_String) "\n");
        }
#line 235 "autopar_reports.m"
        {
#line 235 "autopar_reports.m"
          mdprof_fb__automatic_parallelism__autopar_reports__V_223_223 = mercury__string__f_43_43_2_f_0((MR_String) ", hi ", mdprof_fb__automatic_parallelism__autopar_reports__V_221_221);
        }
#line 236 "autopar_reports.m"
        {
#line 236 "autopar_reports.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(mdprof_fb__automatic_parallelism__autopar_reports__V_210_210, mdprof_fb__automatic_parallelism__autopar_reports__Lo_39, &mdprof_fb__automatic_parallelism__autopar_reports__V_224_224);
        }
#line 235 "autopar_reports.m"
        {
#line 235 "autopar_reports.m"
          mdprof_fb__automatic_parallelism__autopar_reports__V_231_231 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_224_224, mdprof_fb__automatic_parallelism__autopar_reports__V_223_223);
        }
#line 235 "autopar_reports.m"
        {
#line 235 "autopar_reports.m"
          mdprof_fb__automatic_parallelism__autopar_reports__V_233_233 = mercury__string__f_43_43_2_f_0((MR_String) ", lo ", mdprof_fb__automatic_parallelism__autopar_reports__V_231_231);
        }
#line 236 "autopar_reports.m"
        {
#line 236 "autopar_reports.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mdprof_fb__automatic_parallelism__autopar_reports__V_210_210, mdprof_fb__automatic_parallelism__autopar_reports__PushGoalPathStr_38, &mdprof_fb__automatic_parallelism__autopar_reports__V_234_234);
        }
#line 235 "autopar_reports.m"
        {
#line 235 "autopar_reports.m"
          mdprof_fb__automatic_parallelism__autopar_reports__V_241_241 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_234_234, mdprof_fb__automatic_parallelism__autopar_reports__V_233_233);
        }
#line 235 "autopar_reports.m"
        {
#line 235 "autopar_reports.m"
          mdprof_fb__automatic_parallelism__autopar_reports__HeadPushGoalStr_42 = mercury__string__f_43_43_2_f_0((MR_String) "      PushGoal: ", mdprof_fb__automatic_parallelism__autopar_reports__V_241_241);
        }
#line 241 "autopar_reports.m"
        {
#line 241 "autopar_reports.m"
          mdprof_fb__automatic_parallelism__autopar_reports__TailPushGoalStrs_45 = mercury__list__map_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_193_193, mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_193_193, (MR_Word) &mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_2[2], mdprof_fb__automatic_parallelism__autopar_reports__PushedGoalPathStrs_41);
        }
#line 242 "autopar_reports.m"
        {
#line 242 "autopar_reports.m"
          mdprof_fb__automatic_parallelism__autopar_reports__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 242 "autopar_reports.m"
          MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__V_82_82, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__HeadPushGoalStr_42));
#line 242 "autopar_reports.m"
          MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__V_82_82, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__TailPushGoalStrs_45));
#line 242 "autopar_reports.m"
        }
#line 242 "autopar_reports.m"
        {
#line 242 "autopar_reports.m"
          mdprof_fb__automatic_parallelism__autopar_reports__Header2_36 = mercury__cord__from_list_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_193_193, mdprof_fb__automatic_parallelism__autopar_reports__V_82_82);
        }
#line 233 "autopar_reports.m"
      }
#line 261 "autopar_reports.m"
    {
#line 261 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_114_114 = measurement_units__commas_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__NumCalls_17);
    }
#line 262 "autopar_reports.m"
    {
#line 262 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_117_117 = measurement_units__two_decimal_fraction_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__SeqTime_18);
    }
#line 263 "autopar_reports.m"
    {
#line 263 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_120_120 = measurement_units__two_decimal_fraction_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__ParTime_19);
    }
#line 264 "autopar_reports.m"
    {
#line 264 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_123_123 = measurement_units__two_decimal_fraction_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__SparkCost_20);
    }
#line 265 "autopar_reports.m"
    {
#line 265 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_126_126 = measurement_units__two_decimal_fraction_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__BarrierCost_21);
    }
#line 266 "autopar_reports.m"
    {
#line 266 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_129_129 = measurement_units__two_decimal_fraction_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__SignalsCost_22);
    }
#line 267 "autopar_reports.m"
    {
#line 267 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_132_132 = measurement_units__two_decimal_fraction_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__WaitsCost_23);
    }
#line 268 "autopar_reports.m"
    {
#line 268 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_135_135 = measurement_units__two_decimal_fraction_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__ParOverheads_26);
    }
#line 269 "autopar_reports.m"
    {
#line 269 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_138_138 = measurement_units__four_decimal_fraction_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__Speedup_31);
    }
#line 270 "autopar_reports.m"
    {
#line 270 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_141_141 = measurement_units__two_decimal_fraction_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TimeSaving_32);
    }
#line 271 "autopar_reports.m"
    {
#line 271 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_144_144 = measurement_units__two_decimal_fraction_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__FirstConjDeadTime_24);
    }
#line 272 "autopar_reports.m"
    {
#line 272 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_147_147 = measurement_units__two_decimal_fraction_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__FutureDeadTime_25);
    }
#line 273 "autopar_reports.m"
    {
#line 273 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_150_150 = measurement_units__two_decimal_fraction_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TotalDeadTime_33);
    }
#line 273 "autopar_reports.m"
    {
#line 273 "autopar_reports.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mdprof_fb__automatic_parallelism__autopar_reports__V_210_210, mdprof_fb__automatic_parallelism__autopar_reports__V_150_150, &mdprof_fb__automatic_parallelism__autopar_reports__V_244_244);
    }
#line 245 "autopar_reports.m"
    {
#line 245 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_251_251 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_244_244, (MR_String) "\n\n");
    }
#line 245 "autopar_reports.m"
    {
#line 245 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_253_253 = mercury__string__f_43_43_2_f_0((MR_String) "\n      Total dead time: ", mdprof_fb__automatic_parallelism__autopar_reports__V_251_251);
    }
#line 272 "autopar_reports.m"
    {
#line 272 "autopar_reports.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mdprof_fb__automatic_parallelism__autopar_reports__V_210_210, mdprof_fb__automatic_parallelism__autopar_reports__V_147_147, &mdprof_fb__automatic_parallelism__autopar_reports__V_254_254);
    }
#line 245 "autopar_reports.m"
    {
#line 245 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_261_261 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_254_254, mdprof_fb__automatic_parallelism__autopar_reports__V_253_253);
    }
#line 245 "autopar_reports.m"
    {
#line 245 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_263_263 = mercury__string__f_43_43_2_f_0((MR_String) "\n      Future dead time: ", mdprof_fb__automatic_parallelism__autopar_reports__V_261_261);
    }
#line 271 "autopar_reports.m"
    {
#line 271 "autopar_reports.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mdprof_fb__automatic_parallelism__autopar_reports__V_210_210, mdprof_fb__automatic_parallelism__autopar_reports__V_144_144, &mdprof_fb__automatic_parallelism__autopar_reports__V_264_264);
    }
#line 245 "autopar_reports.m"
    {
#line 245 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_271_271 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_264_264, mdprof_fb__automatic_parallelism__autopar_reports__V_263_263);
    }
#line 245 "autopar_reports.m"
    {
#line 245 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_273_273 = mercury__string__f_43_43_2_f_0((MR_String) "\n      First conj dead time: ", mdprof_fb__automatic_parallelism__autopar_reports__V_271_271);
    }
#line 270 "autopar_reports.m"
    {
#line 270 "autopar_reports.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mdprof_fb__automatic_parallelism__autopar_reports__V_210_210, mdprof_fb__automatic_parallelism__autopar_reports__V_141_141, &mdprof_fb__automatic_parallelism__autopar_reports__V_274_274);
    }
#line 245 "autopar_reports.m"
    {
#line 245 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_281_281 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_274_274, mdprof_fb__automatic_parallelism__autopar_reports__V_273_273);
    }
#line 245 "autopar_reports.m"
    {
#line 245 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_283_283 = mercury__string__f_43_43_2_f_0((MR_String) "\n      Time saving: ", mdprof_fb__automatic_parallelism__autopar_reports__V_281_281);
    }
#line 269 "autopar_reports.m"
    {
#line 269 "autopar_reports.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mdprof_fb__automatic_parallelism__autopar_reports__V_210_210, mdprof_fb__automatic_parallelism__autopar_reports__V_138_138, &mdprof_fb__automatic_parallelism__autopar_reports__V_284_284);
    }
#line 245 "autopar_reports.m"
    {
#line 245 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_291_291 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_284_284, mdprof_fb__automatic_parallelism__autopar_reports__V_283_283);
    }
#line 245 "autopar_reports.m"
    {
#line 245 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_293_293 = mercury__string__f_43_43_2_f_0((MR_String) "\n      Speedup: ", mdprof_fb__automatic_parallelism__autopar_reports__V_291_291);
    }
#line 268 "autopar_reports.m"
    {
#line 268 "autopar_reports.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mdprof_fb__automatic_parallelism__autopar_reports__V_210_210, mdprof_fb__automatic_parallelism__autopar_reports__V_135_135, &mdprof_fb__automatic_parallelism__autopar_reports__V_294_294);
    }
#line 245 "autopar_reports.m"
    {
#line 245 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_301_301 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_294_294, mdprof_fb__automatic_parallelism__autopar_reports__V_293_293);
    }
#line 245 "autopar_reports.m"
    {
#line 245 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_303_303 = mercury__string__f_43_43_2_f_0((MR_String) "\n      ParOverheads total: ", mdprof_fb__automatic_parallelism__autopar_reports__V_301_301);
    }
#line 267 "autopar_reports.m"
    {
#line 267 "autopar_reports.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mdprof_fb__automatic_parallelism__autopar_reports__V_210_210, mdprof_fb__automatic_parallelism__autopar_reports__V_132_132, &mdprof_fb__automatic_parallelism__autopar_reports__V_304_304);
    }
#line 245 "autopar_reports.m"
    {
#line 245 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_311_311 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_304_304, mdprof_fb__automatic_parallelism__autopar_reports__V_303_303);
    }
#line 245 "autopar_reports.m"
    {
#line 245 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_313_313 = mercury__string__f_43_43_2_f_0((MR_String) "\n      WaitsCost: ", mdprof_fb__automatic_parallelism__autopar_reports__V_311_311);
    }
#line 266 "autopar_reports.m"
    {
#line 266 "autopar_reports.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mdprof_fb__automatic_parallelism__autopar_reports__V_210_210, mdprof_fb__automatic_parallelism__autopar_reports__V_129_129, &mdprof_fb__automatic_parallelism__autopar_reports__V_314_314);
    }
#line 245 "autopar_reports.m"
    {
#line 245 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_321_321 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_314_314, mdprof_fb__automatic_parallelism__autopar_reports__V_313_313);
    }
#line 245 "autopar_reports.m"
    {
#line 245 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_323_323 = mercury__string__f_43_43_2_f_0((MR_String) "\n      SignalsCost: ", mdprof_fb__automatic_parallelism__autopar_reports__V_321_321);
    }
#line 265 "autopar_reports.m"
    {
#line 265 "autopar_reports.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mdprof_fb__automatic_parallelism__autopar_reports__V_210_210, mdprof_fb__automatic_parallelism__autopar_reports__V_126_126, &mdprof_fb__automatic_parallelism__autopar_reports__V_324_324);
    }
#line 245 "autopar_reports.m"
    {
#line 245 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_331_331 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_324_324, mdprof_fb__automatic_parallelism__autopar_reports__V_323_323);
    }
#line 245 "autopar_reports.m"
    {
#line 245 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_333_333 = mercury__string__f_43_43_2_f_0((MR_String) "\n      BarrierCost: ", mdprof_fb__automatic_parallelism__autopar_reports__V_331_331);
    }
#line 264 "autopar_reports.m"
    {
#line 264 "autopar_reports.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mdprof_fb__automatic_parallelism__autopar_reports__V_210_210, mdprof_fb__automatic_parallelism__autopar_reports__V_123_123, &mdprof_fb__automatic_parallelism__autopar_reports__V_334_334);
    }
#line 245 "autopar_reports.m"
    {
#line 245 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_341_341 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_334_334, mdprof_fb__automatic_parallelism__autopar_reports__V_333_333);
    }
#line 245 "autopar_reports.m"
    {
#line 245 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_343_343 = mercury__string__f_43_43_2_f_0((MR_String) "\n      SparkCost: ", mdprof_fb__automatic_parallelism__autopar_reports__V_341_341);
    }
#line 263 "autopar_reports.m"
    {
#line 263 "autopar_reports.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mdprof_fb__automatic_parallelism__autopar_reports__V_210_210, mdprof_fb__automatic_parallelism__autopar_reports__V_120_120, &mdprof_fb__automatic_parallelism__autopar_reports__V_344_344);
    }
#line 245 "autopar_reports.m"
    {
#line 245 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_351_351 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_344_344, mdprof_fb__automatic_parallelism__autopar_reports__V_343_343);
    }
#line 245 "autopar_reports.m"
    {
#line 245 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_353_353 = mercury__string__f_43_43_2_f_0((MR_String) "\n      ParTime: ", mdprof_fb__automatic_parallelism__autopar_reports__V_351_351);
    }
#line 262 "autopar_reports.m"
    {
#line 262 "autopar_reports.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mdprof_fb__automatic_parallelism__autopar_reports__V_210_210, mdprof_fb__automatic_parallelism__autopar_reports__V_117_117, &mdprof_fb__automatic_parallelism__autopar_reports__V_354_354);
    }
#line 245 "autopar_reports.m"
    {
#line 245 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_361_361 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_354_354, mdprof_fb__automatic_parallelism__autopar_reports__V_353_353);
    }
#line 245 "autopar_reports.m"
    {
#line 245 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_363_363 = mercury__string__f_43_43_2_f_0((MR_String) "\n      SeqTime: ", mdprof_fb__automatic_parallelism__autopar_reports__V_361_361);
    }
#line 261 "autopar_reports.m"
    {
#line 261 "autopar_reports.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mdprof_fb__automatic_parallelism__autopar_reports__V_210_210, mdprof_fb__automatic_parallelism__autopar_reports__V_114_114, &mdprof_fb__automatic_parallelism__autopar_reports__V_364_364);
    }
#line 245 "autopar_reports.m"
    {
#line 245 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_371_371 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_364_364, mdprof_fb__automatic_parallelism__autopar_reports__V_363_363);
    }
#line 245 "autopar_reports.m"
    {
#line 245 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_373_373 = mercury__string__f_43_43_2_f_0((MR_String) "\n      NumCalls: ", mdprof_fb__automatic_parallelism__autopar_reports__V_371_371);
    }
#line 260 "autopar_reports.m"
    {
#line 260 "autopar_reports.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mdprof_fb__automatic_parallelism__autopar_reports__V_210_210, mdprof_fb__automatic_parallelism__autopar_reports__DependenceString_27, &mdprof_fb__automatic_parallelism__autopar_reports__V_374_374);
    }
#line 245 "autopar_reports.m"
    {
#line 245 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_381_381 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_374_374, mdprof_fb__automatic_parallelism__autopar_reports__V_373_373);
    }
#line 245 "autopar_reports.m"
    {
#line 245 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__Header2Str_46 = mercury__string__f_43_43_2_f_0((MR_String) "      Dependent: ", mdprof_fb__automatic_parallelism__autopar_reports__V_381_381);
    }
#line 275 "autopar_reports.m"
    {
#line 275 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__Header3_47 = mercury__cord__singleton_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_193_193, ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__Header2Str_46)));
    }
#line 277 "autopar_reports.m"
    {
#line 277 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__succeeded = mdbcomp__goal_path__rev_goal_path_from_string_2_p_0(mdprof_fb__automatic_parallelism__autopar_reports__GoalPathString_7, &mdprof_fb__automatic_parallelism__autopar_reports__RevGoalPathPrime_48);
    }
#line 279 "autopar_reports.m"
    if (mdprof_fb__automatic_parallelism__autopar_reports__succeeded)
#line 278 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__RevGoalPath_49 = mdprof_fb__automatic_parallelism__autopar_reports__RevGoalPathPrime_48;
#line 279 "autopar_reports.m"
    else
#line 280 "autopar_reports.m"
      {
#line 280 "autopar_reports.m"
        {
#line 280 "autopar_reports.m"
          mercury__require__unexpected_3_p_0((MR_String) "mdprof_fb.automatic_parallelism.autopar_reports", (MR_String) "predicate \140mdprof_fb.automatic_parallelism.autopar_reports.create_candidate_parallel_conj_report\'/3", (MR_String) "couldn\'t parse goal path");
#line 280 "autopar_reports.m"
          return;
        }
#line 280 "autopar_reports.m"
      }
#line 284 "autopar_reports.m"
    {
#line 284 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjunction_7_p_0(mdprof_fb__automatic_parallelism__autopar_reports__VarNameTable_4, (MR_Integer) 4, mdprof_fb__automatic_parallelism__autopar_reports__RevGoalPath_49, mdprof_fb__automatic_parallelism__autopar_reports__GoalsBefore_11, mdprof_fb__automatic_parallelism__autopar_reports__GoalsBeforeCost_12, mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_ConjNum_155_155, &mdprof_fb__automatic_parallelism__autopar_reports__ReportGoalsBefore0_51);
    }
#line 286 "autopar_reports.m"
    {
#line 286 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_157_157 = message__indent_1_f_0((MR_Integer) 3);
    }
#line 286 "autopar_reports.m"
    {
#line 286 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_160_160 = mercury__cord__singleton_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_193_193, ((MR_Box) ((MR_String) "Goals before:\n")));
    }
#line 286 "autopar_reports.m"
    {
#line 286 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_159_159 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_193_193, mdprof_fb__automatic_parallelism__autopar_reports__V_160_160, mdprof_fb__automatic_parallelism__autopar_reports__ReportGoalsBefore0_51);
    }
#line 286 "autopar_reports.m"
    {
#line 286 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__ReportGoalsBefore_52 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_193_193, mdprof_fb__automatic_parallelism__autopar_reports__V_157_157, mdprof_fb__automatic_parallelism__autopar_reports__V_159_159);
    }
#line 289 "autopar_reports.m"
    {
#line 289 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_163_163 = mercury__list__length_1_f_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_1[0], mdprof_fb__automatic_parallelism__autopar_reports__GoalsBefore_11);
    }
#line 289 "autopar_reports.m"
    mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_ConjNum_162_162 = (mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_ConjNum_155_155 + mdprof_fb__automatic_parallelism__autopar_reports__V_163_163);
#line 290 "autopar_reports.m"
    {
#line 290 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjunction_6_p_0(mdprof_fb__automatic_parallelism__autopar_reports__VarNameTable_4, (MR_Integer) 4, mdprof_fb__automatic_parallelism__autopar_reports__RevGoalPath_49, mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_ConjNum_162_162, mdprof_fb__automatic_parallelism__autopar_reports__Conjs_13, &mdprof_fb__automatic_parallelism__autopar_reports__ReportParConj0_53);
    }
#line 292 "autopar_reports.m"
    {
#line 292 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_165_165 = message__indent_1_f_0((MR_Integer) 3);
    }
#line 292 "autopar_reports.m"
    {
#line 292 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_168_168 = mercury__cord__singleton_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_193_193, ((MR_Box) ((MR_String) "Parallel conjunction:\n")));
    }
#line 292 "autopar_reports.m"
    {
#line 292 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_167_167 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_193_193, mdprof_fb__automatic_parallelism__autopar_reports__V_168_168, mdprof_fb__automatic_parallelism__autopar_reports__ReportParConj0_53);
    }
#line 292 "autopar_reports.m"
    {
#line 292 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__ReportParConj_54 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_193_193, mdprof_fb__automatic_parallelism__autopar_reports__V_165_165, mdprof_fb__automatic_parallelism__autopar_reports__V_167_167);
    }
#line 295 "autopar_reports.m"
    mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_ConjNum_170_170 = (mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_ConjNum_162_162 + (MR_Integer) 1);
#line 296 "autopar_reports.m"
    {
#line 296 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjunction_7_p_0(mdprof_fb__automatic_parallelism__autopar_reports__VarNameTable_4, (MR_Integer) 4, mdprof_fb__automatic_parallelism__autopar_reports__RevGoalPath_49, mdprof_fb__automatic_parallelism__autopar_reports__GoalsAfter_14, mdprof_fb__automatic_parallelism__autopar_reports__GoalsAfterCost_15, mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_ConjNum_170_170, &mdprof_fb__automatic_parallelism__autopar_reports__ReportGoalsAfter0_55);
    }
#line 298 "autopar_reports.m"
    {
#line 298 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_173_173 = message__indent_1_f_0((MR_Integer) 3);
    }
#line 298 "autopar_reports.m"
    {
#line 298 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_176_176 = mercury__cord__singleton_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_193_193, ((MR_Box) ((MR_String) "Goals after:\n")));
    }
#line 298 "autopar_reports.m"
    {
#line 298 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_175_175 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_193_193, mdprof_fb__automatic_parallelism__autopar_reports__V_176_176, mdprof_fb__automatic_parallelism__autopar_reports__ReportGoalsAfter0_55);
    }
#line 298 "autopar_reports.m"
    {
#line 298 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__ReportGoalsAfter_56 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_193_193, mdprof_fb__automatic_parallelism__autopar_reports__V_173_173, mdprof_fb__automatic_parallelism__autopar_reports__V_175_175);
    }
#line 301 "autopar_reports.m"
    {
#line 301 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_182_182 = message__nl_0_f_0();
    }
#line 302 "autopar_reports.m"
    {
#line 302 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_185_185 = message__nl_0_f_0();
    }
#line 302 "autopar_reports.m"
    {
#line 302 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_187_187 = message__nl_0_f_0();
    }
#line 302 "autopar_reports.m"
    {
#line 302 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_186_186 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_193_193, mdprof_fb__automatic_parallelism__autopar_reports__ReportGoalsAfter_56, mdprof_fb__automatic_parallelism__autopar_reports__V_187_187);
    }
#line 302 "autopar_reports.m"
    {
#line 302 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_184_184 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_193_193, mdprof_fb__automatic_parallelism__autopar_reports__V_185_185, mdprof_fb__automatic_parallelism__autopar_reports__V_186_186);
    }
#line 302 "autopar_reports.m"
    {
#line 302 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_183_183 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_193_193, mdprof_fb__automatic_parallelism__autopar_reports__ReportParConj_54, mdprof_fb__automatic_parallelism__autopar_reports__V_184_184);
    }
#line 302 "autopar_reports.m"
    {
#line 302 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_181_181 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_193_193, mdprof_fb__automatic_parallelism__autopar_reports__V_182_182, mdprof_fb__automatic_parallelism__autopar_reports__V_183_183);
    }
#line 301 "autopar_reports.m"
    {
#line 301 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_180_180 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_193_193, mdprof_fb__automatic_parallelism__autopar_reports__ReportGoalsBefore_52, mdprof_fb__automatic_parallelism__autopar_reports__V_181_181);
    }
#line 301 "autopar_reports.m"
    {
#line 301 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_179_179 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_193_193, mdprof_fb__automatic_parallelism__autopar_reports__Header3_47, mdprof_fb__automatic_parallelism__autopar_reports__V_180_180);
    }
#line 301 "autopar_reports.m"
    {
#line 301 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__V_178_178 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_193_193, mdprof_fb__automatic_parallelism__autopar_reports__Header2_36, mdprof_fb__automatic_parallelism__autopar_reports__V_179_179);
    }
#line 301 "autopar_reports.m"
    {
#line 301 "autopar_reports.m"
      *mdprof_fb__automatic_parallelism__autopar_reports__Report_6 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_193_193, mdprof_fb__automatic_parallelism__autopar_reports__Header1_35, mdprof_fb__automatic_parallelism__autopar_reports__V_178_178);
    }
#line 205 "autopar_reports.m"
  }
#line 29 "autopar_reports.m"
}

#line 27 "autopar_reports.m"
void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__print_feedback_report_3_p_0(
#line 27 "autopar_reports.m"
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__FeedbackInfo_4)
#line 27 "autopar_reports.m"
{
#line 55 "autopar_reports.m"
  {
#line 55 "autopar_reports.m"
    MR_bool mdprof_fb__automatic_parallelism__autopar_reports__succeeded;
#line 55 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__ProfiledProgramName_6;
#line 55 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__MaybeCandidateParConjs_7;
#line 55 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__Reports_11;
#line 55 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__Report_12;
#line 55 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_RevReports_17_17;
#line 55 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_RevReports_18_18;
#line 55 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_30_30;
#line 55 "autopar_reports.m"
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_36_36;
#line 55 "autopar_reports.m"
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_39_39;

#line 56 "autopar_reports.m"
    {
#line 56 "autopar_reports.m"
      mdbcomp__feedback__get_all_feedback_info_3_p_0(mdprof_fb__automatic_parallelism__autopar_reports__FeedbackInfo_4, &mdprof_fb__automatic_parallelism__autopar_reports__ProfiledProgramName_6, &mdprof_fb__automatic_parallelism__autopar_reports__MaybeCandidateParConjs_7);
    }
#line 61 "autopar_reports.m"
    mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_RevReports_17_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 64 "autopar_reports.m"
    if ((mdprof_fb__automatic_parallelism__autopar_reports__MaybeCandidateParConjs_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 63 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_RevReports_18_18 = mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_RevReports_17_17;
#line 64 "autopar_reports.m"
    else
#line 65 "autopar_reports.m"
      {
#line 65 "autopar_reports.m"
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__CandidateParConjs_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__MaybeCandidateParConjs_7, (MR_Integer) 0)));
#line 65 "autopar_reports.m"
        MR_String mdprof_fb__automatic_parallelism__autopar_reports__CandidateParConjsReport_10;

#line 66 "autopar_reports.m"
        {
#line 66 "autopar_reports.m"
          mdprof_fb__automatic_parallelism__autopar_reports__create_feedback_autopar_report_2_p_0(mdprof_fb__automatic_parallelism__autopar_reports__CandidateParConjs_9, &mdprof_fb__automatic_parallelism__autopar_reports__CandidateParConjsReport_10);
        }
#line 68 "autopar_reports.m"
        {
#line 68 "autopar_reports.m"
          mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_RevReports_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 68 "autopar_reports.m"
          MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_RevReports_18_18, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__CandidateParConjsReport_10));
#line 68 "autopar_reports.m"
          MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_RevReports_18_18, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_RevReports_17_17));
#line 68 "autopar_reports.m"
        }
#line 65 "autopar_reports.m"
      }
#line 70 "autopar_reports.m"
    {
#line 70 "autopar_reports.m"
      mercury__list__reverse_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_RevReports_18_18, &mdprof_fb__automatic_parallelism__autopar_reports__Reports_11);
    }
#line 75 "autopar_reports.m"
    if ((mdprof_fb__automatic_parallelism__autopar_reports__Reports_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 74 "autopar_reports.m"
      mdprof_fb__automatic_parallelism__autopar_reports__Report_12 = (MR_String) "no report available.\n";
#line 75 "autopar_reports.m"
    else
#line 77 "autopar_reports.m"
      {
#line 77 "autopar_reports.m"
        mercury__string__append_list_2_p_0(mdprof_fb__automatic_parallelism__autopar_reports__Reports_11, &mdprof_fb__automatic_parallelism__autopar_reports__Report_12);
      }
#line 79 "autopar_reports.m"
    {
#line 79 "autopar_reports.m"
      mercury__io__write_string_3_p_0((MR_String) "Feedback report for ");
    }
#line 4290 "mdprof_fb.automatic_parallelism.autopar_reports.c"
    mdprof_fb__automatic_parallelism__autopar_reports__V_36_36 = (MR_Word) &mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_3[0];
#line 80 "autopar_reports.m"
    {
#line 80 "autopar_reports.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mdprof_fb__automatic_parallelism__autopar_reports__V_36_36, mdprof_fb__automatic_parallelism__autopar_reports__ProfiledProgramName_6, &mdprof_fb__automatic_parallelism__autopar_reports__V_30_30);
    }
#line 80 "autopar_reports.m"
    {
#line 80 "autopar_reports.m"
      mercury__io__write_string_3_p_0(mdprof_fb__automatic_parallelism__autopar_reports__V_30_30);
    }
#line 79 "autopar_reports.m"
    {
#line 79 "autopar_reports.m"
      mercury__io__write_string_3_p_0((MR_String) ":\n\n");
    }
#line 80 "autopar_reports.m"
    {
#line 80 "autopar_reports.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mdprof_fb__automatic_parallelism__autopar_reports__V_36_36, mdprof_fb__automatic_parallelism__autopar_reports__Report_12, &mdprof_fb__automatic_parallelism__autopar_reports__V_39_39);
    }
#line 80 "autopar_reports.m"
    {
#line 80 "autopar_reports.m"
      mercury__io__write_string_3_p_0(mdprof_fb__automatic_parallelism__autopar_reports__V_39_39);
#line 80 "autopar_reports.m"
      return;
    }
#line 55 "autopar_reports.m"
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
