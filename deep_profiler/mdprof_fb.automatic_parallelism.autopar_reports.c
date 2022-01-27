/*
** Automatically generated from `autopar_reports.m'
** by the Mercury compiler,
** version rotd-2016-01-15
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


#include "exclude.mih"
#include "mdbcomp.mih"
#include "mdprof_fb.mih"
#include "measurement_units.mih"
#include "measurements.mih"
#include "message.mih"
#include "profile.mih"
#include "program_representation_utils.mih"
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
#include "std_util.mih"
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




static const MR_FA_PseudoTypeInfo_Struct2 mdprof_fb__automatic_parallelism__autopar_reports__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_reports__mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0;

static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_reports__mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0;

static const MR_FA_PseudoTypeInfo_Struct2 mdprof_fb__automatic_parallelism__autopar_reports__pair__pti_pair_2__plain_mdbcomp__program_representation__type_ctor_info_string_proc_label_0__plain_mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0;

static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_reports__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_reports__mdbcomp__feedback__automatic_parallelism__pti_candidate_par_conjunction_1__plain_mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0;

static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_reports__mdbcomp__program_representation__pti_goal_rep_1__plain_mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0;

static const MR_FA_PseudoTypeInfo_Struct2 mdprof_fb__automatic_parallelism__autopar_reports__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_float_0;

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_p_0_10001(
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure_arg,
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1,
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2,
  MR_Box * mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_3);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_99_111_110_106_117_110_99_116_105_111_110_115_95_105_110_95_112_114_111_99_115_95_95_91_49_93_95_48_3_p_0(
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__1_1,
  MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_NumConjs_0_10,
  MR_Integer * mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_NumConjs_11);

static MR_Word MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__IntroducedFrom__func__format_sequential_conjuncts__387__1_1_f_0(
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__1_46);

static MR_Float MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__IntroducedFrom__func__format_parallel_conjuncts__339__1_2_f_0(
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__LambdaHeadVar__1_43,
  MR_Float mdprof_fb__automatic_parallelism__autopar_reports__LambdaHeadVar__2_44);

static MR_Word MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__IntroducedFrom__func__format_parallel_conjuncts__335__1_1_f_0(
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__1_74);

static MR_String MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__IntroducedFrom__func__create_push_goal_report__193__1_1_f_0(
  MR_String mdprof_fb__automatic_parallelism__autopar_reports__LambdaHeadVar__1_21);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__IntroducedFrom__pred__create_feedback_autopar_report__91__1_3_p_0(
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__1_100,
  MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__2_101,
  MR_Integer * mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__3_102);

static MR_String MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__IntroducedFrom__func__create_candidate_parallel_conj_report__237__1_1_f_0(
  MR_String mdprof_fb__automatic_parallelism__autopar_reports__LambdaHeadVar__1_76);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_p_0_2(
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure_arg,
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1,
  MR_Box * mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_p_0_1(
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure_arg,
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1,
  MR_Box * mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_p_0(
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__1_1,
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__2_2,
  MR_Word * mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__3_3);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__format_var_use_line_3_p_0(
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__VarNameTable_4,
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__2_2,
  MR_Word * mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__3_3);

static MR_Box MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjuncts_8_p_0_1(
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure_arg,
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjuncts_8_p_0(
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__VarNameTable_1,
  MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__Indent_2,
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__RevGoalPath_3,
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__4_4,
  MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_ConjNum_0_5,
  MR_Integer * mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_ConjNum_6,
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_0_7,
  MR_Word * mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_8);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjunction_7_p_0(
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__VarNameTable_8,
  MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__Indent_9,
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__RevGoalPath_10,
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__Goals_11,
  MR_Float mdprof_fb__automatic_parallelism__autopar_reports__Cost_12,
  MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__FirstConjNum_13,
  MR_Word * mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_16);

static MR_Box MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjuncts_7_p_0_2(
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure_arg,
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1,
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2);

static MR_Box MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjuncts_7_p_0_1(
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure_arg,
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjuncts_7_p_0(
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__1_1,
  MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__Indent_2,
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__3_3,
  MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__4_4,
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__5_5,
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_0_6,
  MR_Word * mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_7);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjunction_6_p_0(
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__VarNameTable_7,
  MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__Indent_8,
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__RevGoalPath_9,
  MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__ConjNum_10,
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__Conjs_11,
  MR_Word * mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_14);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_proc_report_2_p_0_2(
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure_arg,
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1,
  MR_Box * mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_proc_report_2_p_0_1(
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure_arg,
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1,
  MR_Box * mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_proc_report_2_p_0(
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__1_1,
  MR_Word * mdprof_fb__automatic_parallelism__autopar_reports__Report_5);

static MR_Box MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__create_push_goal_report_2_p_0_1(
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure_arg,
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__create_push_goal_report_2_p_0(
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__PushGoal_3,
  MR_Word * mdprof_fb__automatic_parallelism__autopar_reports__Report_4);

static MR_String MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__alg_for_finding_best_par_to_string_1_f_0(
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__Alg_3);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__create_feedback_autopar_report_2_p_0_2(
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure_arg,
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1,
  MR_Box * mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__create_feedback_autopar_report_2_p_0_1(
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure_arg,
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1,
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2,
  MR_Box * mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_3);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__create_feedback_autopar_report_2_p_0(
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__CandidateParConjs_3,
  MR_String * mdprof_fb__automatic_parallelism__autopar_reports__Report_4);

static MR_Box MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_p_0_2(
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure_arg,
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_p_0_1(
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure_arg,
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1,
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
#include "string.mh"
#include "time.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct2 mdprof_fb__automatic_parallelism__autopar_reports__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_reports__mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0 = {
  &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_goal_rep_1,
  {
    (MR_TypeInfo) &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0
  }
};

static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_reports__mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0 = {
  &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunctions_proc_1,
  {
    (MR_TypeInfo) &mdprof_fb__automatic_parallelism__autopar_reports__mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 mdprof_fb__automatic_parallelism__autopar_reports__pair__pti_pair_2__plain_mdbcomp__program_representation__type_ctor_info_string_proc_label_0__plain_mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0,
    (MR_PseudoTypeInfo) &mdprof_fb__automatic_parallelism__autopar_reports__mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_reports__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_reports__mdbcomp__feedback__automatic_parallelism__pti_candidate_par_conjunction_1__plain_mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0 = {
  &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunction_1,
  {
    (MR_PseudoTypeInfo) &mdprof_fb__automatic_parallelism__autopar_reports__mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_reports__mdbcomp__program_representation__pti_goal_rep_1__plain_mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0 = {
  &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_goal_rep_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 mdprof_fb__automatic_parallelism__autopar_reports__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_float_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
  }
};

const MR_BaseTypeclassInfo base_typeclass_info_program_representation_utils__goal_annotation__arity1__mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_p_0_10001))
};

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_p_0_10001(
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure_arg,
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1,
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2,
  MR_Box * mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_3)
{
  {
    MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure;
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__conv0_HeadVar__3_3;

    mdprof_fb__automatic_parallelism__autopar_reports__closure = mdprof_fb__automatic_parallelism__autopar_reports__closure_arg;
    {
      mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_p_0(((MR_Word) mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1), ((MR_Word) mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2), &mdprof_fb__automatic_parallelism__autopar_reports__conv0_HeadVar__3_3);
    }
    *mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_3 = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__conv0_HeadVar__3_3));
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_99_111_110_106_117_110_99_116_105_111_110_115_95_105_110_95_112_114_111_99_115_95_95_91_49_93_95_48_3_p_0(
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__1_1,
  MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_NumConjs_0_10,
  MR_Integer * mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_NumConjs_11)
{
  {
    MR_bool mdprof_fb__automatic_parallelism__autopar_reports__succeeded;
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__Cands_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__Conjs_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__Cands_5, (MR_Integer) 2)));
    MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__V_13_13;
    MR_Box mdprof_fb__automatic_parallelism__autopar_reports__V_4_4 = (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__1_1, (MR_Integer) 0));
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports___VarNameTable_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__Cands_5, (MR_Integer) 0)));
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports___Pushes_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__Cands_5, (MR_Integer) 1)));

    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_13_13 = mercury__list__length_1_f_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_1[3], mdprof_fb__automatic_parallelism__autopar_reports__Conjs_9);
    }
    *mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_NumConjs_11 = (mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_NumConjs_0_10 + mdprof_fb__automatic_parallelism__autopar_reports__V_13_13);
  }
}

static MR_Word MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__IntroducedFrom__func__format_sequential_conjuncts__387__1_1_f_0(
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__1_46)
{
  {
    MR_bool mdprof_fb__automatic_parallelism__autopar_reports__succeeded;
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__2_47;
    MR_Box mdprof_fb__automatic_parallelism__autopar_reports__conv0_HeadVar__2_47;

    {
      mdprof_fb__automatic_parallelism__autopar_reports__conv0_HeadVar__2_47 = mercury__std_util__id_1_f_0((MR_Word) &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0, ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__1_46)));
    }
    mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__2_47 = ((MR_Word) mdprof_fb__automatic_parallelism__autopar_reports__conv0_HeadVar__2_47);
    return mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__2_47;
  }
}

static MR_Float MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__IntroducedFrom__func__format_parallel_conjuncts__339__1_2_f_0(
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__LambdaHeadVar__1_43,
  MR_Float mdprof_fb__automatic_parallelism__autopar_reports__LambdaHeadVar__2_44)
{
  {
    MR_bool mdprof_fb__automatic_parallelism__autopar_reports__succeeded;
    MR_Float mdprof_fb__automatic_parallelism__autopar_reports__LambdaHeadVar__3_45;
    MR_Float mdprof_fb__automatic_parallelism__autopar_reports__V_46_46;
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__LambdaHeadVar__1_43, (MR_Integer) 2)));
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__LambdaHeadVar__1_43, (MR_Integer) 0)));
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__LambdaHeadVar__1_43, (MR_Integer) 1)));
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_70_70;
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_71_71;
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_72_72;

    mdprof_fb__automatic_parallelism__autopar_reports__V_46_46 = MR_unbox_float((MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__V_47_47, (MR_Integer) 0)));
    mdprof_fb__automatic_parallelism__autopar_reports__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__V_47_47, (MR_Integer) 1)));
    mdprof_fb__automatic_parallelism__autopar_reports__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__V_47_47, (MR_Integer) 2)));
    mdprof_fb__automatic_parallelism__autopar_reports__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__V_47_47, (MR_Integer) 3)));
    mdprof_fb__automatic_parallelism__autopar_reports__LambdaHeadVar__3_45 = (mdprof_fb__automatic_parallelism__autopar_reports__LambdaHeadVar__2_44 + mdprof_fb__automatic_parallelism__autopar_reports__V_46_46);
    return mdprof_fb__automatic_parallelism__autopar_reports__LambdaHeadVar__3_45;
  }
}

static MR_Word MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__IntroducedFrom__func__format_parallel_conjuncts__335__1_1_f_0(
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__1_74)
{
  {
    MR_bool mdprof_fb__automatic_parallelism__autopar_reports__succeeded;
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__2_75;
    MR_Box mdprof_fb__automatic_parallelism__autopar_reports__conv0_HeadVar__2_75;

    {
      mdprof_fb__automatic_parallelism__autopar_reports__conv0_HeadVar__2_75 = mercury__std_util__id_1_f_0((MR_Word) &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0, ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__1_74)));
    }
    mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__2_75 = ((MR_Word) mdprof_fb__automatic_parallelism__autopar_reports__conv0_HeadVar__2_75);
    return mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__2_75;
  }
}

static MR_String MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__IntroducedFrom__func__create_push_goal_report__193__1_1_f_0(
  MR_String mdprof_fb__automatic_parallelism__autopar_reports__LambdaHeadVar__1_21)
{
  {
    MR_bool mdprof_fb__automatic_parallelism__autopar_reports__succeeded;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__LambdaHeadVar__2_22;
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_24_24;
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_25_25;

    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_25_25 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), mdprof_fb__automatic_parallelism__autopar_reports__V_25_25, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__LambdaHeadVar__1_21));
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__V_24_24, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__V_25_25));
      MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__LambdaHeadVar__2_22 = mercury__string__format_2_f_0((MR_String) "        %s\n", mdprof_fb__automatic_parallelism__autopar_reports__V_24_24);
    }
    return mdprof_fb__automatic_parallelism__autopar_reports__LambdaHeadVar__2_22;
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__IntroducedFrom__pred__create_feedback_autopar_report__91__1_3_p_0(
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__1_100,
  MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__2_101,
  MR_Integer * mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__3_102)
{
  {
    MR_bool mdprof_fb__automatic_parallelism__autopar_reports__succeeded;

    {
      mdprof_fb__automatic_parallelism__autopar_reports__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_99_111_110_106_117_110_99_116_105_111_110_115_95_105_110_95_112_114_111_99_115_95_95_91_49_93_95_48_3_p_0(mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__1_100, mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__2_101, mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__3_102);
    }
  }
}

static MR_String MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__IntroducedFrom__func__create_candidate_parallel_conj_report__237__1_1_f_0(
  MR_String mdprof_fb__automatic_parallelism__autopar_reports__LambdaHeadVar__1_76)
{
  {
    MR_bool mdprof_fb__automatic_parallelism__autopar_reports__succeeded;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__LambdaHeadVar__2_77;
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_79_79;
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_80_80;

    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_80_80 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), mdprof_fb__automatic_parallelism__autopar_reports__V_80_80, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__LambdaHeadVar__1_76));
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__V_79_79, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__V_80_80));
      MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__V_79_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__LambdaHeadVar__2_77 = mercury__string__format_2_f_0((MR_String) "                %s\n", mdprof_fb__automatic_parallelism__autopar_reports__V_79_79);
    }
    return mdprof_fb__automatic_parallelism__autopar_reports__LambdaHeadVar__2_77;
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_p_0_2(
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure_arg,
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1,
  MR_Box * mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2)
{
  {
    MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure = mdprof_fb__automatic_parallelism__autopar_reports__closure_arg;
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__conv1_HeadVar__3_3;

    {
      mdprof_fb__automatic_parallelism__autopar_reports__format_var_use_line_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__closure, (MR_Integer) 3))), ((MR_Word) mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1), &mdprof_fb__automatic_parallelism__autopar_reports__conv1_HeadVar__3_3);
    }
    *mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2 = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__conv1_HeadVar__3_3));
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_p_0_1(
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure_arg,
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1,
  MR_Box * mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2)
{
  {
    MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure = mdprof_fb__automatic_parallelism__autopar_reports__closure_arg;
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__conv0_HeadVar__3_3;

    {
      mdprof_fb__automatic_parallelism__autopar_reports__format_var_use_line_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__closure, (MR_Integer) 3))), ((MR_Word) mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1), &mdprof_fb__automatic_parallelism__autopar_reports__conv0_HeadVar__3_3);
    }
    *mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2 = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__conv0_HeadVar__3_3));
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_p_0(
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__1_1,
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__2_2,
  MR_Word * mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__3_3)
{
  {
    MR_bool mdprof_fb__automatic_parallelism__autopar_reports__succeeded;
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__TypeInfo_28_28;
    MR_Float mdprof_fb__automatic_parallelism__autopar_reports__CostPercall_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__CostAboveThreshold_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__2_2, (MR_Integer) 1)));
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__Productions_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__2_2, (MR_Integer) 2)));
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__Consumptions_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__2_2, (MR_Integer) 3)));
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__CostAboveThresholdStr_11;
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__CostLine_12;
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__ProductionsReport_13;
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__ConsumptionsReport_14;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_15_15;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_19_19;
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_25_25;
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_26_26;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_30_30;
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_36_36;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_37_37;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_39_39;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_40_40;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_47_47;

    switch (mdprof_fb__automatic_parallelism__autopar_reports__CostAboveThreshold_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        mdprof_fb__automatic_parallelism__autopar_reports__CostAboveThresholdStr_11 = (MR_String) "above threshold";
        break;
      case (MR_Integer) 1:
        mdprof_fb__automatic_parallelism__autopar_reports__CostAboveThresholdStr_11 = (MR_String) "not above threshold";
        break;
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_19_19 = measurement_units__two_decimal_fraction_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__CostPercall_7);
    }
    mdprof_fb__automatic_parallelism__autopar_reports__V_36_36 = (MR_Word) &mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_3[0];
    {
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mdprof_fb__automatic_parallelism__autopar_reports__V_36_36, mdprof_fb__automatic_parallelism__autopar_reports__CostAboveThresholdStr_11, &mdprof_fb__automatic_parallelism__autopar_reports__V_30_30);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_37_37 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_30_30, (MR_String) ")");
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_39_39 = mercury__string__f_43_43_2_f_0((MR_String) " (", mdprof_fb__automatic_parallelism__autopar_reports__V_37_37);
    }
    {
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mdprof_fb__automatic_parallelism__autopar_reports__V_36_36, mdprof_fb__automatic_parallelism__autopar_reports__V_19_19, &mdprof_fb__automatic_parallelism__autopar_reports__V_40_40);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_47_47 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_40_40, mdprof_fb__automatic_parallelism__autopar_reports__V_39_39);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_15_15 = mercury__string__f_43_43_2_f_0((MR_String) "cost: ", mdprof_fb__automatic_parallelism__autopar_reports__V_47_47);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__CostLine_12 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__V_15_15)));
    }
    if ((mdprof_fb__automatic_parallelism__autopar_reports__Productions_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mdprof_fb__automatic_parallelism__autopar_reports__ProductionsReport_13 = mercury__cord__empty_0_f_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_1[2]);
        }
      }
    else
      {
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__TypeInfo_21_65;
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__Lines_55;
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_56_56;
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_57_57;
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_58_58;
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_61_61;

        {
          mdprof_fb__automatic_parallelism__autopar_reports__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__V_56_56, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_4[4]));
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__V_56_56, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_p_0_1));
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__V_56_56, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__V_56_56, 3) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__1_1));
        }
        mdprof_fb__automatic_parallelism__autopar_reports__TypeInfo_21_65 = (MR_Word) &mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_1[2];
        {
          mercury__list__map_3_p_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_2[1], mdprof_fb__automatic_parallelism__autopar_reports__TypeInfo_21_65, mdprof_fb__automatic_parallelism__autopar_reports__V_56_56, mdprof_fb__automatic_parallelism__autopar_reports__Productions_9, &mdprof_fb__automatic_parallelism__autopar_reports__Lines_55);
        }
        {
          mdprof_fb__automatic_parallelism__autopar_reports__V_58_58 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "Productions:")));
        }
        {
          mdprof_fb__automatic_parallelism__autopar_reports__V_57_57 = mercury__cord__singleton_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeInfo_21_65, ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__V_58_58)));
        }
        {
          mdprof_fb__automatic_parallelism__autopar_reports__V_61_61 = mercury__cord__from_list_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeInfo_21_65, mdprof_fb__automatic_parallelism__autopar_reports__Lines_55);
        }
        {
          mdprof_fb__automatic_parallelism__autopar_reports__ProductionsReport_13 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeInfo_21_65, mdprof_fb__automatic_parallelism__autopar_reports__V_57_57, mdprof_fb__automatic_parallelism__autopar_reports__V_61_61);
        }
      }
    if ((mdprof_fb__automatic_parallelism__autopar_reports__Consumptions_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mdprof_fb__automatic_parallelism__autopar_reports__ConsumptionsReport_14 = mercury__cord__empty_0_f_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_1[2]);
        }
      }
    else
      {
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__TypeInfo_21_84;
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__Lines_74;
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_75_75;
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_76_76;
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_77_77;
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_80_80;

        {
          mdprof_fb__automatic_parallelism__autopar_reports__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__V_75_75, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_4[4]));
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__V_75_75, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_p_0_2));
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__V_75_75, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__V_75_75, 3) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__1_1));
        }
        mdprof_fb__automatic_parallelism__autopar_reports__TypeInfo_21_84 = (MR_Word) &mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_1[2];
        {
          mercury__list__map_3_p_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_2[1], mdprof_fb__automatic_parallelism__autopar_reports__TypeInfo_21_84, mdprof_fb__automatic_parallelism__autopar_reports__V_75_75, mdprof_fb__automatic_parallelism__autopar_reports__Consumptions_10, &mdprof_fb__automatic_parallelism__autopar_reports__Lines_74);
        }
        {
          mdprof_fb__automatic_parallelism__autopar_reports__V_77_77 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "Consumptions:")));
        }
        {
          mdprof_fb__automatic_parallelism__autopar_reports__V_76_76 = mercury__cord__singleton_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeInfo_21_84, ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__V_77_77)));
        }
        {
          mdprof_fb__automatic_parallelism__autopar_reports__V_80_80 = mercury__cord__from_list_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeInfo_21_84, mdprof_fb__automatic_parallelism__autopar_reports__Lines_74);
        }
        {
          mdprof_fb__automatic_parallelism__autopar_reports__ConsumptionsReport_14 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeInfo_21_84, mdprof_fb__automatic_parallelism__autopar_reports__V_76_76, mdprof_fb__automatic_parallelism__autopar_reports__V_80_80);
        }
      }
    mdprof_fb__automatic_parallelism__autopar_reports__TypeInfo_28_28 = (MR_Word) &mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_1[2];
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_25_25 = mercury__cord__singleton_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeInfo_28_28, ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__CostLine_12)));
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_26_26 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeInfo_28_28, mdprof_fb__automatic_parallelism__autopar_reports__ProductionsReport_13, mdprof_fb__automatic_parallelism__autopar_reports__ConsumptionsReport_14);
    }
    {
      *mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__3_3 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeInfo_28_28, mdprof_fb__automatic_parallelism__autopar_reports__V_25_25, mdprof_fb__automatic_parallelism__autopar_reports__V_26_26);
    }
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__format_var_use_line_3_p_0(
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__VarNameTable_4,
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__2_2,
  MR_Word * mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__3_3)
{
  {
    MR_bool mdprof_fb__automatic_parallelism__autopar_reports__succeeded;
    MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__Var_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__2_2, (MR_Integer) 0)));
    MR_Float mdprof_fb__automatic_parallelism__autopar_reports__Use_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__2_2, (MR_Integer) 1)));
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__String_7;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__VarName_8;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_14_14;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_17_17;
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_23_23;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_25_25;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_26_26;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_33_33;

    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_14_14 = measurement_units__two_decimal_fraction_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__Use_6);
    }
    {
      mdbcomp__program_representation__lookup_var_name_3_p_0(mdprof_fb__automatic_parallelism__autopar_reports__VarNameTable_4, mdprof_fb__automatic_parallelism__autopar_reports__Var_5, &mdprof_fb__automatic_parallelism__autopar_reports__VarName_8);
    }
    mdprof_fb__automatic_parallelism__autopar_reports__V_23_23 = (MR_Word) &mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_3[0];
    {
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mdprof_fb__automatic_parallelism__autopar_reports__V_23_23, mdprof_fb__automatic_parallelism__autopar_reports__V_14_14, &mdprof_fb__automatic_parallelism__autopar_reports__V_17_17);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_25_25 = mercury__string__f_43_43_2_f_0((MR_String) ": ", mdprof_fb__automatic_parallelism__autopar_reports__V_17_17);
    }
    {
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mdprof_fb__automatic_parallelism__autopar_reports__V_23_23, mdprof_fb__automatic_parallelism__autopar_reports__VarName_8, &mdprof_fb__automatic_parallelism__autopar_reports__V_26_26);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_33_33 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_26_26, mdprof_fb__automatic_parallelism__autopar_reports__V_25_25);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__String_7 = mercury__string__f_43_43_2_f_0((MR_String) "    ", mdprof_fb__automatic_parallelism__autopar_reports__V_33_33);
    }
    {
      *mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__3_3 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__String_7)));
    }
  }
}

static MR_Box MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjuncts_8_p_0_1(
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure_arg,
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1)
{
  {
    MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2;
    MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure = mdprof_fb__automatic_parallelism__autopar_reports__closure_arg;
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__conv0_HeadVar__2_47;

    {
      mdprof_fb__automatic_parallelism__autopar_reports__conv0_HeadVar__2_47 = mdprof_fb__automatic_parallelism__autopar_reports__IntroducedFrom__func__format_sequential_conjuncts__387__1_1_f_0(((MR_Word) mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1));
    }
    mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2 = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__conv0_HeadVar__2_47));
    return mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2;
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjuncts_8_p_0(
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__VarNameTable_1,
  MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__Indent_2,
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__RevGoalPath_3,
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__4_4,
  MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_ConjNum_0_5,
  MR_Integer * mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_ConjNum_6,
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_0_7,
  MR_Word * mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mdprof_fb__automatic_parallelism__autopar_reports__succeeded;

        if ((mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_8 = mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_0_7;
            *mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_ConjNum_6 = mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_ConjNum_0_5;
          }
        else
          {
            MR_Word mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_51_51;
            MR_Word mdprof_fb__automatic_parallelism__autopar_reports__Conj_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__4_4, (MR_Integer) 0)));
            MR_Word mdprof_fb__automatic_parallelism__autopar_reports__Conjs_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__4_4, (MR_Integer) 1)));
            MR_Word mdprof_fb__automatic_parallelism__autopar_reports__ConjReport_25;
            MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_32_32;
            MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_33_33;
            MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_35_35;
            MR_Word mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_36_36;
            MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_ConjNum_37_37;

            {
              mdprof_fb__automatic_parallelism__autopar_reports__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__V_32_32, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_2[9]));
              MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__V_32_32, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__VarNameTable_1));
            }
            {
              mdprof_fb__automatic_parallelism__autopar_reports__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__V_35_35, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_ConjNum_0_5));
            }
            {
              mdprof_fb__automatic_parallelism__autopar_reports__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__V_33_33, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__RevGoalPath_3));
              MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__V_33_33, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__V_35_35));
            }
            {
              program_representation_utils__print_goal_to_strings_5_p_0((MR_Word) &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0, (MR_Word) &mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_1[4], mdprof_fb__automatic_parallelism__autopar_reports__V_32_32, mdprof_fb__automatic_parallelism__autopar_reports__Indent_2, mdprof_fb__automatic_parallelism__autopar_reports__V_33_33, mdprof_fb__automatic_parallelism__autopar_reports__Conj_21, &mdprof_fb__automatic_parallelism__autopar_reports__ConjReport_25);
            }
            mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_51_51 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
            {
              mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_36_36 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_51_51, mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_0_7, mdprof_fb__automatic_parallelism__autopar_reports__ConjReport_25);
            }
            mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_ConjNum_37_37 = (mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_ConjNum_0_5 + (MR_Integer) 1);
            if ((mdprof_fb__automatic_parallelism__autopar_reports__Conjs_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                *mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_ConjNum_6 = mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_ConjNum_37_37;
                *mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_8 = mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_36_36;
              }
            else
              {
                MR_Word mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_39_39;
                MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_40_40;
                MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_41_41;
                MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_42_42;

                {
                  mdprof_fb__automatic_parallelism__autopar_reports__V_41_41 = message__indent_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__Indent_2);
                }
                {
                  mdprof_fb__automatic_parallelism__autopar_reports__V_42_42 = mercury__cord__singleton_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_51_51, ((MR_Box) ((MR_String) ",\n")));
                }
                {
                  mdprof_fb__automatic_parallelism__autopar_reports__V_40_40 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_51_51, mdprof_fb__automatic_parallelism__autopar_reports__V_41_41, mdprof_fb__automatic_parallelism__autopar_reports__V_42_42);
                }
                {
                  mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_39_39 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_51_51, mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_36_36, mdprof_fb__automatic_parallelism__autopar_reports__V_40_40);
                }
                /* direct tailcall eliminated */
                {
                  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__4__tmp_copy_4 = mdprof_fb__automatic_parallelism__autopar_reports__Conjs_22;
                  MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_ConjNum_0__tmp_copy_5 = mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_ConjNum_37_37;
                  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_0__tmp_copy_7 = mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_39_39;

                  mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_0_7 = mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_0__tmp_copy_7;
                  mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_ConjNum_0_5 = mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_ConjNum_0__tmp_copy_5;
                  mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__4_4 = mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__4__tmp_copy_4;
                }
                continue;
              }
          }
      }
      break;
    }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjunction_7_p_0(
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__VarNameTable_8,
  MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__Indent_9,
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__RevGoalPath_10,
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__Goals_11,
  MR_Float mdprof_fb__automatic_parallelism__autopar_reports__Cost_12,
  MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__FirstConjNum_13,
  MR_Word * mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_16)
{
  {
    MR_bool mdprof_fb__automatic_parallelism__autopar_reports__succeeded;
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_43_43 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_17_17;
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_18_18;
    MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__V_15_15;

    {
      mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_17_17 = mercury__cord__empty_0_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_43_43);
    }
    mdprof_fb__automatic_parallelism__autopar_reports__succeeded = (mdprof_fb__automatic_parallelism__autopar_reports__FirstConjNum_13 == (MR_Integer) 1);
    if (mdprof_fb__automatic_parallelism__autopar_reports__succeeded)
      {
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_19_19;
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_20_20;
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_21_21;
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_22_22;
        MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_23_23;
        MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_27_27;
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_29_29;
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_30_30;
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_31_31;
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_32_32;
        MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_33_33;
        MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_37_37;
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_39_39;
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_40_40;
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_41_41;
        MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_44_44;
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_50_50;
        MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_52_52;

        {
          mdprof_fb__automatic_parallelism__autopar_reports__V_20_20 = message__indent_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__Indent_9);
        }
        {
          mdprof_fb__automatic_parallelism__autopar_reports__V_27_27 = mdbcomp__goal_path__rev_goal_path_to_string_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__RevGoalPath_10);
        }
        mdprof_fb__automatic_parallelism__autopar_reports__V_50_50 = (MR_Word) &mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_3[0];
        {
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mdprof_fb__automatic_parallelism__autopar_reports__V_50_50, mdprof_fb__automatic_parallelism__autopar_reports__V_27_27, &mdprof_fb__automatic_parallelism__autopar_reports__V_44_44);
        }
        {
          mdprof_fb__automatic_parallelism__autopar_reports__V_23_23 = mercury__string__f_43_43_2_f_0((MR_String) "% conjunction: ", mdprof_fb__automatic_parallelism__autopar_reports__V_44_44);
        }
        {
          mdprof_fb__automatic_parallelism__autopar_reports__V_22_22 = mercury__cord__singleton_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_43_43, ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__V_23_23)));
        }
        {
          mdprof_fb__automatic_parallelism__autopar_reports__V_30_30 = message__nl_indent_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__Indent_9);
        }
        {
          mdprof_fb__automatic_parallelism__autopar_reports__V_37_37 = measurement_units__two_decimal_fraction_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__Cost_12);
        }
        {
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mdprof_fb__automatic_parallelism__autopar_reports__V_50_50, mdprof_fb__automatic_parallelism__autopar_reports__V_37_37, &mdprof_fb__automatic_parallelism__autopar_reports__V_52_52);
        }
        {
          mdprof_fb__automatic_parallelism__autopar_reports__V_33_33 = mercury__string__f_43_43_2_f_0((MR_String) "% Cost: ", mdprof_fb__automatic_parallelism__autopar_reports__V_52_52);
        }
        {
          mdprof_fb__automatic_parallelism__autopar_reports__V_32_32 = mercury__cord__singleton_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_43_43, ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__V_33_33)));
        }
        {
          mdprof_fb__automatic_parallelism__autopar_reports__V_40_40 = message__nl_0_f_0();
        }
        {
          mdprof_fb__automatic_parallelism__autopar_reports__V_41_41 = message__nl_0_f_0();
        }
        {
          mdprof_fb__automatic_parallelism__autopar_reports__V_39_39 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_43_43, mdprof_fb__automatic_parallelism__autopar_reports__V_40_40, mdprof_fb__automatic_parallelism__autopar_reports__V_41_41);
        }
        {
          mdprof_fb__automatic_parallelism__autopar_reports__V_31_31 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_43_43, mdprof_fb__automatic_parallelism__autopar_reports__V_32_32, mdprof_fb__automatic_parallelism__autopar_reports__V_39_39);
        }
        {
          mdprof_fb__automatic_parallelism__autopar_reports__V_29_29 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_43_43, mdprof_fb__automatic_parallelism__autopar_reports__V_30_30, mdprof_fb__automatic_parallelism__autopar_reports__V_31_31);
        }
        {
          mdprof_fb__automatic_parallelism__autopar_reports__V_21_21 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_43_43, mdprof_fb__automatic_parallelism__autopar_reports__V_22_22, mdprof_fb__automatic_parallelism__autopar_reports__V_29_29);
        }
        {
          mdprof_fb__automatic_parallelism__autopar_reports__V_19_19 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_43_43, mdprof_fb__automatic_parallelism__autopar_reports__V_20_20, mdprof_fb__automatic_parallelism__autopar_reports__V_21_21);
        }
        {
          mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_18_18 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_43_43, mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_17_17, mdprof_fb__automatic_parallelism__autopar_reports__V_19_19);
        }
      }
    else
      mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_18_18 = mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_17_17;
    {
      mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjuncts_8_p_0(mdprof_fb__automatic_parallelism__autopar_reports__VarNameTable_8, mdprof_fb__automatic_parallelism__autopar_reports__Indent_9, mdprof_fb__automatic_parallelism__autopar_reports__RevGoalPath_10, mdprof_fb__automatic_parallelism__autopar_reports__Goals_11, mdprof_fb__automatic_parallelism__autopar_reports__FirstConjNum_13, &mdprof_fb__automatic_parallelism__autopar_reports__V_15_15, mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_18_18, mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_16);
    }
  }
}

static MR_Box MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjuncts_7_p_0_2(
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure_arg,
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1,
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2)
{
  {
    MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_3;
    MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure = mdprof_fb__automatic_parallelism__autopar_reports__closure_arg;
    MR_Float mdprof_fb__automatic_parallelism__autopar_reports__conv1_LambdaHeadVar__3_45;

    {
      mdprof_fb__automatic_parallelism__autopar_reports__conv1_LambdaHeadVar__3_45 = mdprof_fb__automatic_parallelism__autopar_reports__IntroducedFrom__func__format_parallel_conjuncts__339__1_2_f_0(((MR_Word) mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1), MR_unbox_float(mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2));
    }
    mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_3 = MR_box_float(mdprof_fb__automatic_parallelism__autopar_reports__conv1_LambdaHeadVar__3_45);
    return mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_3;
  }
}

static MR_Box MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjuncts_7_p_0_1(
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure_arg,
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1)
{
  {
    MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2;
    MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure = mdprof_fb__automatic_parallelism__autopar_reports__closure_arg;
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__conv0_HeadVar__2_75;

    {
      mdprof_fb__automatic_parallelism__autopar_reports__conv0_HeadVar__2_75 = mdprof_fb__automatic_parallelism__autopar_reports__IntroducedFrom__func__format_parallel_conjuncts__335__1_1_f_0(((MR_Word) mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1));
    }
    mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2 = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__conv0_HeadVar__2_75));
    return mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2;
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjuncts_7_p_0(
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__1_1,
  MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__Indent_2,
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__3_3,
  MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__4_4,
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__5_5,
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_0_6,
  MR_Word * mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_7)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mdprof_fb__automatic_parallelism__autopar_reports__succeeded;

        if ((mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_73_73;
            MR_Word mdprof_fb__automatic_parallelism__autopar_reports__IndentStr_13;
            MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_17_17;

            {
              mdprof_fb__automatic_parallelism__autopar_reports__IndentStr_13 = message__indent_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__Indent_2);
            }
            mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_73_73 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
            {
              mdprof_fb__automatic_parallelism__autopar_reports__V_17_17 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_73_73, mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_0_6, mdprof_fb__automatic_parallelism__autopar_reports__IndentStr_13);
            }
            {
              *mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_7 = mercury__cord__snoc_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_73_73, mdprof_fb__automatic_parallelism__autopar_reports__V_17_17, ((MR_Box) ((MR_String) ")\n")));
            }
          }
        else
          {
            MR_Word mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_81_81;
            MR_Word mdprof_fb__automatic_parallelism__autopar_reports__Conj_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__5_5, (MR_Integer) 0)));
            MR_Word mdprof_fb__automatic_parallelism__autopar_reports__Conjs_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__5_5, (MR_Integer) 1)));
            MR_Word mdprof_fb__automatic_parallelism__autopar_reports__Goals_26 = (MR_Word) mdprof_fb__automatic_parallelism__autopar_reports__Conj_23;
            MR_Word mdprof_fb__automatic_parallelism__autopar_reports__ConjReport_30;
            MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__ConjNum_38;
            MR_Word mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_59_59;
            MR_Word mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_60_60;

            if ((mdprof_fb__automatic_parallelism__autopar_reports__Goals_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "mdprof_fb.automatic_parallelism.autopar_reports", (MR_String) "predicate \140mdprof_fb.automatic_parallelism.autopar_reports.format_parallel_conjuncts\'/7", (MR_String) "empty conjunct in parallel conjunction");
                  return;
                }
              }
            else
              {
                MR_Word mdprof_fb__automatic_parallelism__autopar_reports__Goal_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__Goals_26, (MR_Integer) 0)));
                MR_Word mdprof_fb__automatic_parallelism__autopar_reports__GoalsTail_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__Goals_26, (MR_Integer) 1)));
                MR_Word mdprof_fb__automatic_parallelism__autopar_reports__RevInnerGoalPath_29;
                MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_41_41;

                {
                  mdprof_fb__automatic_parallelism__autopar_reports__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__V_41_41, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__4_4));
                }
                {
                  mdprof_fb__automatic_parallelism__autopar_reports__RevInnerGoalPath_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__RevInnerGoalPath_29, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__3_3));
                  MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__RevInnerGoalPath_29, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__V_41_41));
                }
                if ((mdprof_fb__automatic_parallelism__autopar_reports__GoalsTail_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_52_52;
                    MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__V_53_53;

                    {
                      mdprof_fb__automatic_parallelism__autopar_reports__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__V_52_52, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_2[7]));
                      MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__V_52_52, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__1_1));
                    }
                    mdprof_fb__automatic_parallelism__autopar_reports__V_53_53 = (mdprof_fb__automatic_parallelism__autopar_reports__Indent_2 + (MR_Integer) 1);
                    {
                      program_representation_utils__print_goal_to_strings_5_p_0((MR_Word) &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0, (MR_Word) &mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_1[4], mdprof_fb__automatic_parallelism__autopar_reports__V_52_52, mdprof_fb__automatic_parallelism__autopar_reports__V_53_53, mdprof_fb__automatic_parallelism__autopar_reports__RevInnerGoalPath_29, mdprof_fb__automatic_parallelism__autopar_reports__Goal_27, &mdprof_fb__automatic_parallelism__autopar_reports__ConjReport_30);
                    }
                  }
                else
                  {
                    MR_Float mdprof_fb__automatic_parallelism__autopar_reports__Cost_33;
                    MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__V_49_49;
                    MR_Box mdprof_fb__automatic_parallelism__autopar_reports__conv2_Cost_33;

                    {
                      mdprof_fb__automatic_parallelism__autopar_reports__conv2_Cost_33 = mercury__list__foldl_3_f_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0, (MR_Word) &mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_2[8], mdprof_fb__automatic_parallelism__autopar_reports__Goals_26, MR_box_float((MR_Float) 0.0000000000000000));
                    }
                    mdprof_fb__automatic_parallelism__autopar_reports__Cost_33 = MR_unbox_float(mdprof_fb__automatic_parallelism__autopar_reports__conv2_Cost_33);
                    mdprof_fb__automatic_parallelism__autopar_reports__V_49_49 = (mdprof_fb__automatic_parallelism__autopar_reports__Indent_2 + (MR_Integer) 1);
                    {
                      mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjunction_7_p_0(mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__1_1, mdprof_fb__automatic_parallelism__autopar_reports__V_49_49, mdprof_fb__automatic_parallelism__autopar_reports__RevInnerGoalPath_29, mdprof_fb__automatic_parallelism__autopar_reports__Goals_26, mdprof_fb__automatic_parallelism__autopar_reports__Cost_33, (MR_Integer) 1, &mdprof_fb__automatic_parallelism__autopar_reports__ConjReport_30);
                    }
                  }
              }
            mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_81_81 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
            {
              mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_59_59 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_81_81, mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_0_6, mdprof_fb__automatic_parallelism__autopar_reports__ConjReport_30);
            }
            if ((mdprof_fb__automatic_parallelism__autopar_reports__Conjs_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_60_60 = mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_59_59;
            else
              {
                MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_61_61;
                MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_62_62;

                {
                  mdprof_fb__automatic_parallelism__autopar_reports__V_62_62 = message__indent_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__Indent_2);
                }
                {
                  mdprof_fb__automatic_parallelism__autopar_reports__V_61_61 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_81_81, mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_59_59, mdprof_fb__automatic_parallelism__autopar_reports__V_62_62);
                }
                {
                  mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_60_60 = mercury__cord__snoc_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_81_81, mdprof_fb__automatic_parallelism__autopar_reports__V_61_61, ((MR_Box) ((MR_String) "&\n")));
                }
              }
            mdprof_fb__automatic_parallelism__autopar_reports__ConjNum_38 = (mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__4_4 + (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__4__tmp_copy_4 = mdprof_fb__automatic_parallelism__autopar_reports__ConjNum_38;
              MR_Word mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__5__tmp_copy_5 = mdprof_fb__automatic_parallelism__autopar_reports__Conjs_24;
              MR_Word mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_0__tmp_copy_6 = mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_60_60;

              mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_0_6 = mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_0__tmp_copy_6;
              mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__5_5 = mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__5__tmp_copy_5;
              mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__4_4 = mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__4__tmp_copy_4;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjunction_6_p_0(
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__VarNameTable_7,
  MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__Indent_8,
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__RevGoalPath_9,
  MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__ConjNum_10,
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__Conjs_11,
  MR_Word * mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_14)
{
  {
    MR_bool mdprof_fb__automatic_parallelism__autopar_reports__succeeded;
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_22_22;
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__IndentStr_13;
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_15_15;
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_16_16;
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_18_18;
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_21_21;

    {
      mdprof_fb__automatic_parallelism__autopar_reports__IndentStr_13 = message__indent_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__Indent_8);
    }
    mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_22_22 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_16_16 = mercury__cord__singleton_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_22_22, ((MR_Box) ((MR_String) "(\n")));
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_15_15 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_22_22, mdprof_fb__automatic_parallelism__autopar_reports__IndentStr_13, mdprof_fb__automatic_parallelism__autopar_reports__V_16_16);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__V_21_21, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__ConjNum_10));
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__V_18_18, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__RevGoalPath_9));
      MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__V_18_18, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__V_21_21));
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjuncts_7_p_0(mdprof_fb__automatic_parallelism__autopar_reports__VarNameTable_7, mdprof_fb__automatic_parallelism__autopar_reports__Indent_8, mdprof_fb__automatic_parallelism__autopar_reports__V_18_18, (MR_Integer) 1, mdprof_fb__automatic_parallelism__autopar_reports__Conjs_11, mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_15_15, mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_Report_14);
    }
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_proc_report_2_p_0_2(
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure_arg,
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1,
  MR_Box * mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2)
{
  {
    MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure = mdprof_fb__automatic_parallelism__autopar_reports__closure_arg;
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__conv1_Report_6;

    {
      mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__closure, (MR_Integer) 3))), ((MR_Word) mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1), &mdprof_fb__automatic_parallelism__autopar_reports__conv1_Report_6);
    }
    *mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2 = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__conv1_Report_6));
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_proc_report_2_p_0_1(
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure_arg,
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1,
  MR_Box * mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2)
{
  {
    MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure = mdprof_fb__automatic_parallelism__autopar_reports__closure_arg;
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__conv0_Report_4;

    {
      mdprof_fb__automatic_parallelism__autopar_reports__create_push_goal_report_2_p_0(((MR_Word) mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1), &mdprof_fb__automatic_parallelism__autopar_reports__conv0_Report_4);
    }
    *mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2 = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__conv0_Report_4));
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_proc_report_2_p_0(
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__1_1,
  MR_Word * mdprof_fb__automatic_parallelism__autopar_reports__Report_5)
{
  {
    MR_bool mdprof_fb__automatic_parallelism__autopar_reports__succeeded;
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__TypeInfo_29_29;
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_33_33;
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__Proc_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__CandidateParConjunctionProc_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__VarNameTable_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__CandidateParConjunctionProc_4, (MR_Integer) 0)));
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__PushGoals_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__CandidateParConjunctionProc_4, (MR_Integer) 1)));
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__CandidateParConjunctions_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__CandidateParConjunctionProc_4, (MR_Integer) 2)));
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__ProcString_9;
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__PushGoalReports_10;
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__CandidateParConjunctionReports_11;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__Header_12;
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_14_14;
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_19_19;
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_20_20;
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_21_21;
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_22_22;
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_23_23;
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_25_25;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_35_35;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_42_42;

    {
      program_representation_utils__print_proc_label_to_string_2_p_0(mdprof_fb__automatic_parallelism__autopar_reports__Proc_3, &mdprof_fb__automatic_parallelism__autopar_reports__ProcString_9);
    }
    mdprof_fb__automatic_parallelism__autopar_reports__TypeInfo_29_29 = (MR_Word) &mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_1[2];
    {
      mercury__list__map_3_p_0((MR_Word) &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_push_goal_0, mdprof_fb__automatic_parallelism__autopar_reports__TypeInfo_29_29, (MR_Word) &mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_2[6], mdprof_fb__automatic_parallelism__autopar_reports__PushGoals_7, &mdprof_fb__automatic_parallelism__autopar_reports__PushGoalReports_10);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__V_14_14, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_4[2]));
      MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__V_14_14, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_proc_report_2_p_0_2));
      MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__V_14_14, 3) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__VarNameTable_6));
    }
    {
      mercury__list__map_3_p_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_1[3], mdprof_fb__automatic_parallelism__autopar_reports__TypeInfo_29_29, mdprof_fb__automatic_parallelism__autopar_reports__V_14_14, mdprof_fb__automatic_parallelism__autopar_reports__CandidateParConjunctions_8, &mdprof_fb__automatic_parallelism__autopar_reports__CandidateParConjunctionReports_11);
    }
    {
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_3[0], mdprof_fb__automatic_parallelism__autopar_reports__ProcString_9, &mdprof_fb__automatic_parallelism__autopar_reports__V_35_35);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_42_42 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_35_35, (MR_String) "\n");
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__Header_12 = mercury__string__f_43_43_2_f_0((MR_String) "    ", mdprof_fb__automatic_parallelism__autopar_reports__V_42_42);
    }
    mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_33_33 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_19_19 = mercury__cord__singleton_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_33_33, ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__Header_12)));
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_21_21 = mercury__cord__cord_list_to_cord_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_33_33, mdprof_fb__automatic_parallelism__autopar_reports__PushGoalReports_10);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_23_23 = mercury__cord__singleton_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_33_33, ((MR_Box) ((MR_String) "\n")));
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_25_25 = mercury__cord__cord_list_to_cord_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_33_33, mdprof_fb__automatic_parallelism__autopar_reports__CandidateParConjunctionReports_11);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_22_22 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_33_33, mdprof_fb__automatic_parallelism__autopar_reports__V_23_23, mdprof_fb__automatic_parallelism__autopar_reports__V_25_25);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_20_20 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_33_33, mdprof_fb__automatic_parallelism__autopar_reports__V_21_21, mdprof_fb__automatic_parallelism__autopar_reports__V_22_22);
    }
    {
      *mdprof_fb__automatic_parallelism__autopar_reports__Report_5 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_33_33, mdprof_fb__automatic_parallelism__autopar_reports__V_19_19, mdprof_fb__automatic_parallelism__autopar_reports__V_20_20);
    }
  }
}

static MR_Box MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__create_push_goal_report_2_p_0_1(
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure_arg,
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1)
{
  {
    MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2;
    MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure = mdprof_fb__automatic_parallelism__autopar_reports__closure_arg;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__conv0_LambdaHeadVar__2_22;

    {
      mdprof_fb__automatic_parallelism__autopar_reports__conv0_LambdaHeadVar__2_22 = mdprof_fb__automatic_parallelism__autopar_reports__IntroducedFrom__func__create_push_goal_report__193__1_1_f_0(((MR_String) mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1));
    }
    mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2 = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__conv0_LambdaHeadVar__2_22));
    return mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2;
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__create_push_goal_report_2_p_0(
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__PushGoal_3,
  MR_Word * mdprof_fb__automatic_parallelism__autopar_reports__Report_4)
{
  {
    MR_bool mdprof_fb__automatic_parallelism__autopar_reports__succeeded;
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_29_29;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__PushGoalPathStr_5 = ((MR_String) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__PushGoal_3, (MR_Integer) 0)));
    MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__Lo_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__PushGoal_3, (MR_Integer) 1)));
    MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__Hi_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__PushGoal_3, (MR_Integer) 2)));
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__PushedGoalPathStrs_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__PushGoal_3, (MR_Integer) 3)));
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__HeadPushGoalStr_9;
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__TailPushGoalStrs_12;
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_27_27;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_31_31;
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_37_37 = (MR_Word) &mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_3[0];
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_38_38;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_40_40;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_41_41;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_48_48;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_50_50;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_51_51;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_58_58;

    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(mdprof_fb__automatic_parallelism__autopar_reports__V_37_37, mdprof_fb__automatic_parallelism__autopar_reports__Hi_7, &mdprof_fb__automatic_parallelism__autopar_reports__V_31_31);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_38_38 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_31_31, (MR_String) "\n");
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_40_40 = mercury__string__f_43_43_2_f_0((MR_String) ", hi ", mdprof_fb__automatic_parallelism__autopar_reports__V_38_38);
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(mdprof_fb__automatic_parallelism__autopar_reports__V_37_37, mdprof_fb__automatic_parallelism__autopar_reports__Lo_6, &mdprof_fb__automatic_parallelism__autopar_reports__V_41_41);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_48_48 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_41_41, mdprof_fb__automatic_parallelism__autopar_reports__V_40_40);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_50_50 = mercury__string__f_43_43_2_f_0((MR_String) ", lo ", mdprof_fb__automatic_parallelism__autopar_reports__V_48_48);
    }
    {
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mdprof_fb__automatic_parallelism__autopar_reports__V_37_37, mdprof_fb__automatic_parallelism__autopar_reports__PushGoalPathStr_5, &mdprof_fb__automatic_parallelism__autopar_reports__V_51_51);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_58_58 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_51_51, mdprof_fb__automatic_parallelism__autopar_reports__V_50_50);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__HeadPushGoalStr_9 = mercury__string__f_43_43_2_f_0((MR_String) "\n      PushGoal: ", mdprof_fb__automatic_parallelism__autopar_reports__V_58_58);
    }
    mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_29_29 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    {
      mdprof_fb__automatic_parallelism__autopar_reports__TailPushGoalStrs_12 = mercury__list__map_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_29_29, mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_29_29, (MR_Word) &mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_2[5], mdprof_fb__automatic_parallelism__autopar_reports__PushedGoalPathStrs_8);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__V_27_27, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__HeadPushGoalStr_9));
      MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__V_27_27, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__TailPushGoalStrs_12));
    }
    {
      *mdprof_fb__automatic_parallelism__autopar_reports__Report_4 = mercury__cord__from_list_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_29_29, mdprof_fb__automatic_parallelism__autopar_reports__V_27_27);
    }
  }
}

static MR_String MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__alg_for_finding_best_par_to_string_1_f_0(
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__Alg_3)
{
  {
    MR_bool mdprof_fb__automatic_parallelism__autopar_reports__succeeded;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__Str_4;

    switch (MR_tag((MR_Word) mdprof_fb__automatic_parallelism__autopar_reports__Alg_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(mdprof_fb__automatic_parallelism__autopar_reports__Alg_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            mdprof_fb__automatic_parallelism__autopar_reports__Str_4 = (MR_String) "complete";
            break;
          case (MR_Integer) 1:
            mdprof_fb__automatic_parallelism__autopar_reports__Str_4 = (MR_String) "greedy";
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__N_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__Alg_3, (MR_Integer) 0)));
          MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_26_26;
          MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_33_33;

          {
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_3[0], mdprof_fb__automatic_parallelism__autopar_reports__N_5, &mdprof_fb__automatic_parallelism__autopar_reports__V_26_26);
          }
          {
            mdprof_fb__automatic_parallelism__autopar_reports__V_33_33 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_26_26, (MR_String) ")");
          }
          {
            mdprof_fb__automatic_parallelism__autopar_reports__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "complete-branches(", mdprof_fb__automatic_parallelism__autopar_reports__V_33_33);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__N_14 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdprof_fb__automatic_parallelism__autopar_reports__Alg_3, (MR_Integer) 0)));
          MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_16_16;
          MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_23_23;

          {
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_3[0], mdprof_fb__automatic_parallelism__autopar_reports__N_14, &mdprof_fb__automatic_parallelism__autopar_reports__V_16_16);
          }
          {
            mdprof_fb__automatic_parallelism__autopar_reports__V_23_23 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_16_16, (MR_String) ")");
          }
          {
            mdprof_fb__automatic_parallelism__autopar_reports__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "complete-size(", mdprof_fb__automatic_parallelism__autopar_reports__V_23_23);
          }
        }
        break;
    }
    return mdprof_fb__automatic_parallelism__autopar_reports__Str_4;
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__create_feedback_autopar_report_2_p_0_2(
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure_arg,
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1,
  MR_Box * mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2)
{
  {
    MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure = mdprof_fb__automatic_parallelism__autopar_reports__closure_arg;
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__conv2_Report_5;

    {
      mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_proc_report_2_p_0(((MR_Word) mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1), &mdprof_fb__automatic_parallelism__autopar_reports__conv2_Report_5);
    }
    *mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2 = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__conv2_Report_5));
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__create_feedback_autopar_report_2_p_0_1(
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure_arg,
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1,
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2,
  MR_Box * mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_3)
{
  {
    MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure = mdprof_fb__automatic_parallelism__autopar_reports__closure_arg;
    MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__conv0_HeadVar__3_102;

    {
      mdprof_fb__automatic_parallelism__autopar_reports__IntroducedFrom__pred__create_feedback_autopar_report__91__1_3_p_0(((MR_Word) mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1), ((MR_Integer) mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2), &mdprof_fb__automatic_parallelism__autopar_reports__conv0_HeadVar__3_102);
    }
    *mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_3 = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__conv0_HeadVar__3_102));
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__create_feedback_autopar_report_2_p_0(
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__CandidateParConjs_3,
  MR_String * mdprof_fb__automatic_parallelism__autopar_reports__Report_4)
{
  {
    MR_bool mdprof_fb__automatic_parallelism__autopar_reports__succeeded;
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__TypeInfo_99_99 = (MR_Word) &mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_2[0];
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_105_105;
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__Parameters_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__CandidateParConjs_3, (MR_Integer) 0)));
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__ProcConjs_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__CandidateParConjs_3, (MR_Integer) 1)));
    MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__NumProcConjs_7;
    MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__NumConjs_8;
    MR_Float mdprof_fb__automatic_parallelism__autopar_reports__DesiredParallelism_9;
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__IntermoduleVarUse_10;
    MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__SparkingCost_11;
    MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__SparkingDelay_12;
    MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__BarrierCost_13;
    MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__SignalCost_14;
    MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__WaitCost_15;
    MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__ContextWakeupDelay_16;
    MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__CliqueThreshold_17;
    MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__CallSiteThreshold_18;
    MR_Float mdprof_fb__automatic_parallelism__autopar_reports__SpeedupThreshold_19;
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__ParalleliseDepConjs_20;
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__AlgForFindingBestPar_21;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__AlgForFindingBestParStr_22;
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__ReportHeader_23;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__ParalleliseDepConjsStr_24;
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__ReportConjs_26;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_29_29;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_67_67;
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_96_96;
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_97_97;
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_98_98;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_111_111;
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_117_117;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_118_118;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_120_120;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_121_121;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_128_128;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_130_130;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_131_131;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_138_138;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_140_140;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_141_141;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_148_148;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_150_150;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_151_151;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_159_159;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_161_161;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_162_162;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_169_169;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_171_171;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_172_172;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_179_179;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_181_181;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_182_182;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_189_189;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_191_191;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_192_192;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_199_199;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_201_201;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_202_202;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_209_209;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_211_211;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_212_212;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_219_219;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_221_221;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_222_222;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_229_229;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_231_231;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_232_232;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_239_239;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_241_241;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_242_242;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_249_249;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_251_251;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_252_252;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_260_260;
    MR_Box mdprof_fb__automatic_parallelism__autopar_reports__conv1_NumConjs_8;

    {
      mdprof_fb__automatic_parallelism__autopar_reports__NumProcConjs_7 = mercury__list__length_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeInfo_99_99, mdprof_fb__automatic_parallelism__autopar_reports__ProcConjs_6);
    }
    {
      mercury__list__foldl_4_p_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeInfo_99_99, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_2[3], mdprof_fb__automatic_parallelism__autopar_reports__ProcConjs_6, ((MR_Box) ((MR_Integer) 0)), &mdprof_fb__automatic_parallelism__autopar_reports__conv1_NumConjs_8);
    }
    mdprof_fb__automatic_parallelism__autopar_reports__NumConjs_8 = ((MR_Integer) mdprof_fb__automatic_parallelism__autopar_reports__conv1_NumConjs_8);
    mdprof_fb__automatic_parallelism__autopar_reports__DesiredParallelism_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__Parameters_5, (MR_Integer) 0)));
    mdprof_fb__automatic_parallelism__autopar_reports__IntermoduleVarUse_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__Parameters_5, (MR_Integer) 1)));
    mdprof_fb__automatic_parallelism__autopar_reports__SparkingCost_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__Parameters_5, (MR_Integer) 2)));
    mdprof_fb__automatic_parallelism__autopar_reports__SparkingDelay_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__Parameters_5, (MR_Integer) 3)));
    mdprof_fb__automatic_parallelism__autopar_reports__BarrierCost_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__Parameters_5, (MR_Integer) 4)));
    mdprof_fb__automatic_parallelism__autopar_reports__SignalCost_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__Parameters_5, (MR_Integer) 5)));
    mdprof_fb__automatic_parallelism__autopar_reports__WaitCost_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__Parameters_5, (MR_Integer) 6)));
    mdprof_fb__automatic_parallelism__autopar_reports__ContextWakeupDelay_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__Parameters_5, (MR_Integer) 7)));
    mdprof_fb__automatic_parallelism__autopar_reports__CliqueThreshold_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__Parameters_5, (MR_Integer) 8)));
    mdprof_fb__automatic_parallelism__autopar_reports__CallSiteThreshold_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__Parameters_5, (MR_Integer) 9)));
    mdprof_fb__automatic_parallelism__autopar_reports__SpeedupThreshold_19 = MR_unbox_float((MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__Parameters_5, (MR_Integer) 10)));
    mdprof_fb__automatic_parallelism__autopar_reports__ParalleliseDepConjs_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__Parameters_5, (MR_Integer) 11)));
    mdprof_fb__automatic_parallelism__autopar_reports__AlgForFindingBestPar_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__Parameters_5, (MR_Integer) 12)));
    {
      mdprof_fb__automatic_parallelism__autopar_reports__AlgForFindingBestParStr_22 = mdprof_fb__automatic_parallelism__autopar_reports__alg_for_finding_best_par_to_string_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__AlgForFindingBestPar_21);
    }
    mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_105_105 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_67_67 = mercury__string__string_1_f_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__IntermoduleVarUse_10)));
    }
    if ((mdprof_fb__automatic_parallelism__autopar_reports__ParalleliseDepConjs_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mdprof_fb__automatic_parallelism__autopar_reports__ParalleliseDepConjsStr_24 = (MR_String) "no";
    else
      {
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__SpeedupAlg_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__ParalleliseDepConjs_20, (MR_Integer) 0)));

        switch (mdprof_fb__automatic_parallelism__autopar_reports__SpeedupAlg_25) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            mdprof_fb__automatic_parallelism__autopar_reports__ParalleliseDepConjsStr_24 = (MR_String) "yes, use overlap calculation";
            break;
          case (MR_Integer) 0:
            mdprof_fb__automatic_parallelism__autopar_reports__ParalleliseDepConjsStr_24 = (MR_String) "yes, pretend they\'re independent";
            break;
        }
      }
    mdprof_fb__automatic_parallelism__autopar_reports__V_117_117 = (MR_Word) &mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_3[0];
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(mdprof_fb__automatic_parallelism__autopar_reports__V_117_117, mdprof_fb__automatic_parallelism__autopar_reports__NumConjs_8, &mdprof_fb__automatic_parallelism__autopar_reports__V_111_111);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_118_118 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_111_111, (MR_String) "\n    Parallel conjunctions:\n\n");
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_120_120 = mercury__string__f_43_43_2_f_0((MR_String) "\n    # of par conjunctions:     ", mdprof_fb__automatic_parallelism__autopar_reports__V_118_118);
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(mdprof_fb__automatic_parallelism__autopar_reports__V_117_117, mdprof_fb__automatic_parallelism__autopar_reports__NumProcConjs_7, &mdprof_fb__automatic_parallelism__autopar_reports__V_121_121);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_128_128 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_121_121, mdprof_fb__automatic_parallelism__autopar_reports__V_120_120);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_130_130 = mercury__string__f_43_43_2_f_0((MR_String) "\n    # of par procs with conjs: ", mdprof_fb__automatic_parallelism__autopar_reports__V_128_128);
    }
    {
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mdprof_fb__automatic_parallelism__autopar_reports__V_117_117, mdprof_fb__automatic_parallelism__autopar_reports__AlgForFindingBestParStr_22, &mdprof_fb__automatic_parallelism__autopar_reports__V_131_131);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_138_138 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_131_131, mdprof_fb__automatic_parallelism__autopar_reports__V_130_130);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_140_140 = mercury__string__f_43_43_2_f_0((MR_String) "\n    BestParAlgorithm:          ", mdprof_fb__automatic_parallelism__autopar_reports__V_138_138);
    }
    {
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mdprof_fb__automatic_parallelism__autopar_reports__V_117_117, mdprof_fb__automatic_parallelism__autopar_reports__ParalleliseDepConjsStr_24, &mdprof_fb__automatic_parallelism__autopar_reports__V_141_141);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_148_148 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_141_141, mdprof_fb__automatic_parallelism__autopar_reports__V_140_140);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_150_150 = mercury__string__f_43_43_2_f_0((MR_String) "\n    Dependent conjs:           ", mdprof_fb__automatic_parallelism__autopar_reports__V_148_148);
    }
    {
      mercury__string__format__format_float_component_nowidth_noprec_4_p_0(mdprof_fb__automatic_parallelism__autopar_reports__V_117_117, (MR_Integer) 2, mdprof_fb__automatic_parallelism__autopar_reports__SpeedupThreshold_19, &mdprof_fb__automatic_parallelism__autopar_reports__V_151_151);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_159_159 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_151_151, mdprof_fb__automatic_parallelism__autopar_reports__V_150_150);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_161_161 = mercury__string__f_43_43_2_f_0((MR_String) "\n    Speedup threshold:         ", mdprof_fb__automatic_parallelism__autopar_reports__V_159_159);
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(mdprof_fb__automatic_parallelism__autopar_reports__V_117_117, mdprof_fb__automatic_parallelism__autopar_reports__CallSiteThreshold_18, &mdprof_fb__automatic_parallelism__autopar_reports__V_162_162);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_169_169 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_162_162, mdprof_fb__automatic_parallelism__autopar_reports__V_161_161);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_171_171 = mercury__string__f_43_43_2_f_0((MR_String) "\n    Call site threshold:       ", mdprof_fb__automatic_parallelism__autopar_reports__V_169_169);
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(mdprof_fb__automatic_parallelism__autopar_reports__V_117_117, mdprof_fb__automatic_parallelism__autopar_reports__CliqueThreshold_17, &mdprof_fb__automatic_parallelism__autopar_reports__V_172_172);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_179_179 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_172_172, mdprof_fb__automatic_parallelism__autopar_reports__V_171_171);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_181_181 = mercury__string__f_43_43_2_f_0((MR_String) "\n    Clique threshold:          ", mdprof_fb__automatic_parallelism__autopar_reports__V_179_179);
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(mdprof_fb__automatic_parallelism__autopar_reports__V_117_117, mdprof_fb__automatic_parallelism__autopar_reports__ContextWakeupDelay_16, &mdprof_fb__automatic_parallelism__autopar_reports__V_182_182);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_189_189 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_182_182, mdprof_fb__automatic_parallelism__autopar_reports__V_181_181);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_191_191 = mercury__string__f_43_43_2_f_0((MR_String) "\n    Context wakeup delay:      ", mdprof_fb__automatic_parallelism__autopar_reports__V_189_189);
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(mdprof_fb__automatic_parallelism__autopar_reports__V_117_117, mdprof_fb__automatic_parallelism__autopar_reports__WaitCost_15, &mdprof_fb__automatic_parallelism__autopar_reports__V_192_192);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_199_199 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_192_192, mdprof_fb__automatic_parallelism__autopar_reports__V_191_191);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_201_201 = mercury__string__f_43_43_2_f_0((MR_String) "\n    Future wait cost:          ", mdprof_fb__automatic_parallelism__autopar_reports__V_199_199);
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(mdprof_fb__automatic_parallelism__autopar_reports__V_117_117, mdprof_fb__automatic_parallelism__autopar_reports__SignalCost_14, &mdprof_fb__automatic_parallelism__autopar_reports__V_202_202);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_209_209 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_202_202, mdprof_fb__automatic_parallelism__autopar_reports__V_201_201);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_211_211 = mercury__string__f_43_43_2_f_0((MR_String) "\n    Future signal cost:        ", mdprof_fb__automatic_parallelism__autopar_reports__V_209_209);
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(mdprof_fb__automatic_parallelism__autopar_reports__V_117_117, mdprof_fb__automatic_parallelism__autopar_reports__BarrierCost_13, &mdprof_fb__automatic_parallelism__autopar_reports__V_212_212);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_219_219 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_212_212, mdprof_fb__automatic_parallelism__autopar_reports__V_211_211);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_221_221 = mercury__string__f_43_43_2_f_0((MR_String) "\n    Barrier cost:              ", mdprof_fb__automatic_parallelism__autopar_reports__V_219_219);
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(mdprof_fb__automatic_parallelism__autopar_reports__V_117_117, mdprof_fb__automatic_parallelism__autopar_reports__SparkingDelay_12, &mdprof_fb__automatic_parallelism__autopar_reports__V_222_222);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_229_229 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_222_222, mdprof_fb__automatic_parallelism__autopar_reports__V_221_221);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_231_231 = mercury__string__f_43_43_2_f_0((MR_String) "\n    Sparking delay:            ", mdprof_fb__automatic_parallelism__autopar_reports__V_229_229);
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(mdprof_fb__automatic_parallelism__autopar_reports__V_117_117, mdprof_fb__automatic_parallelism__autopar_reports__SparkingCost_11, &mdprof_fb__automatic_parallelism__autopar_reports__V_232_232);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_239_239 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_232_232, mdprof_fb__automatic_parallelism__autopar_reports__V_231_231);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_241_241 = mercury__string__f_43_43_2_f_0((MR_String) "\n    Sparking cost:             ", mdprof_fb__automatic_parallelism__autopar_reports__V_239_239);
    }
    {
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mdprof_fb__automatic_parallelism__autopar_reports__V_117_117, mdprof_fb__automatic_parallelism__autopar_reports__V_67_67, &mdprof_fb__automatic_parallelism__autopar_reports__V_242_242);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_249_249 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_242_242, mdprof_fb__automatic_parallelism__autopar_reports__V_241_241);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_251_251 = mercury__string__f_43_43_2_f_0((MR_String) "\n    Intermodule var use:       ", mdprof_fb__automatic_parallelism__autopar_reports__V_249_249);
    }
    {
      mercury__string__format__format_float_component_nowidth_noprec_4_p_0(mdprof_fb__automatic_parallelism__autopar_reports__V_117_117, (MR_Integer) 2, mdprof_fb__automatic_parallelism__autopar_reports__DesiredParallelism_9, &mdprof_fb__automatic_parallelism__autopar_reports__V_252_252);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_260_260 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_252_252, mdprof_fb__automatic_parallelism__autopar_reports__V_251_251);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_29_29 = mercury__string__f_43_43_2_f_0((MR_String) "  Candidate parallel conjunctions:\n    Desired parallelism:       ", mdprof_fb__automatic_parallelism__autopar_reports__V_260_260);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__ReportHeader_23 = mercury__cord__singleton_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_105_105, ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__V_29_29)));
    }
    {
      mercury__list__map_3_p_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeInfo_99_99, (MR_Word) &mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_1[2], (MR_Word) &mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_2[4], mdprof_fb__automatic_parallelism__autopar_reports__ProcConjs_6, &mdprof_fb__automatic_parallelism__autopar_reports__ReportConjs_26);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_98_98 = mercury__cord__cord_list_to_cord_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_105_105, mdprof_fb__automatic_parallelism__autopar_reports__ReportConjs_26);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_97_97 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_105_105, mdprof_fb__automatic_parallelism__autopar_reports__ReportHeader_23, mdprof_fb__automatic_parallelism__autopar_reports__V_98_98);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_96_96 = mercury__cord__list_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_105_105, mdprof_fb__automatic_parallelism__autopar_reports__V_97_97);
    }
    {
      *mdprof_fb__automatic_parallelism__autopar_reports__Report_4 = mercury__string__append_list_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_96_96);
    }
  }
}

static MR_Box MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_p_0_2(
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure_arg,
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1)
{
  {
    MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2;
    MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure = mdprof_fb__automatic_parallelism__autopar_reports__closure_arg;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__conv1_LambdaHeadVar__2_77;

    {
      mdprof_fb__automatic_parallelism__autopar_reports__conv1_LambdaHeadVar__2_77 = mdprof_fb__automatic_parallelism__autopar_reports__IntroducedFrom__func__create_candidate_parallel_conj_report__237__1_1_f_0(((MR_String) mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1));
    }
    mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2 = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__conv1_LambdaHeadVar__2_77));
    return mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2;
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_p_0_1(
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure_arg,
  MR_Box mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1,
  MR_Box * mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2)
{
  {
    MR_Box mdprof_fb__automatic_parallelism__autopar_reports__closure = mdprof_fb__automatic_parallelism__autopar_reports__closure_arg;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__conv0_HeadVar__3_3;

    {
      mdbcomp__program_representation__lookup_var_name_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__closure, (MR_Integer) 3))), ((MR_Integer) mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_1), &mdprof_fb__automatic_parallelism__autopar_reports__conv0_HeadVar__3_3);
    }
    *mdprof_fb__automatic_parallelism__autopar_reports__wrapper_arg_2 = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__conv0_HeadVar__3_3));
  }
}

void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_p_0(
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__VarNameTable_4,
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__CandidateParConjunction_5,
  MR_Word * mdprof_fb__automatic_parallelism__autopar_reports__Report_6)
{
  {
    MR_bool mdprof_fb__automatic_parallelism__autopar_reports__succeeded;
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_193_193;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__GoalPathString_7 = ((MR_String) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__CandidateParConjunction_5, (MR_Integer) 0)));
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__MaybePushGoal_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__CandidateParConjunction_5, (MR_Integer) 1)));
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__IsDependent_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__CandidateParConjunction_5, (MR_Integer) 3)));
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__GoalsBefore_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__CandidateParConjunction_5, (MR_Integer) 4)));
    MR_Float mdprof_fb__automatic_parallelism__autopar_reports__GoalsBeforeCost_12 = MR_unbox_float((MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__CandidateParConjunction_5, (MR_Integer) 5)));
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__Conjs_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__CandidateParConjunction_5, (MR_Integer) 6)));
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__GoalsAfter_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__CandidateParConjunction_5, (MR_Integer) 7)));
    MR_Float mdprof_fb__automatic_parallelism__autopar_reports__GoalsAfterCost_15 = MR_unbox_float((MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__CandidateParConjunction_5, (MR_Integer) 8)));
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__ParExecMetrics_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__CandidateParConjunction_5, (MR_Integer) 9)));
    MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__NumCalls_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__ParExecMetrics_16, (MR_Integer) 0)));
    MR_Float mdprof_fb__automatic_parallelism__autopar_reports__SeqTime_18 = MR_unbox_float((MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__ParExecMetrics_16, (MR_Integer) 1)));
    MR_Float mdprof_fb__automatic_parallelism__autopar_reports__ParTime_19 = MR_unbox_float((MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__ParExecMetrics_16, (MR_Integer) 2)));
    MR_Float mdprof_fb__automatic_parallelism__autopar_reports__SparkCost_20 = MR_unbox_float((MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__ParExecMetrics_16, (MR_Integer) 3)));
    MR_Float mdprof_fb__automatic_parallelism__autopar_reports__BarrierCost_21 = MR_unbox_float((MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__ParExecMetrics_16, (MR_Integer) 4)));
    MR_Float mdprof_fb__automatic_parallelism__autopar_reports__SignalsCost_22 = MR_unbox_float((MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__ParExecMetrics_16, (MR_Integer) 5)));
    MR_Float mdprof_fb__automatic_parallelism__autopar_reports__WaitsCost_23 = MR_unbox_float((MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__ParExecMetrics_16, (MR_Integer) 6)));
    MR_Float mdprof_fb__automatic_parallelism__autopar_reports__FirstConjDeadTime_24 = MR_unbox_float((MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__ParExecMetrics_16, (MR_Integer) 7)));
    MR_Float mdprof_fb__automatic_parallelism__autopar_reports__FutureDeadTime_25 = MR_unbox_float((MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__ParExecMetrics_16, (MR_Integer) 8)));
    MR_Float mdprof_fb__automatic_parallelism__autopar_reports__ParOverheads_26;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__DependenceString_27;
    MR_Float mdprof_fb__automatic_parallelism__autopar_reports__Speedup_31;
    MR_Float mdprof_fb__automatic_parallelism__autopar_reports__TimeSaving_32;
    MR_Float mdprof_fb__automatic_parallelism__autopar_reports__TotalDeadTime_33;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__Header1Str_34;
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__Header1_35;
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__Header2_36;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__Header2Str_46;
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__Header3_47;
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__RevGoalPath_49;
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__ReportGoalsBefore0_51;
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__ReportGoalsBefore_52;
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__ReportParConj0_53;
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__ReportParConj_54;
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__ReportGoalsAfter0_55;
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__ReportGoalsAfter_56;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_114_114;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_117_117;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_120_120;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_123_123;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_126_126;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_129_129;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_132_132;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_135_135;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_138_138;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_141_141;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_144_144;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_147_147;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_150_150;
    MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_ConjNum_155_155 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__CandidateParConjunction_5, (MR_Integer) 2)));
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_157_157;
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_159_159;
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_160_160;
    MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_ConjNum_162_162;
    MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__V_163_163;
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_165_165;
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_167_167;
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_168_168;
    MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_ConjNum_170_170;
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_173_173;
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_175_175;
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_176_176;
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_178_178;
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_179_179;
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_180_180;
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_181_181;
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_182_182;
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_183_183;
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_184_184;
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_185_185;
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_186_186;
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_187_187;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_204_204;
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_210_210;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_211_211;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_254_254;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_261_261;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_263_263;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_264_264;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_271_271;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_273_273;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_274_274;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_281_281;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_283_283;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_284_284;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_291_291;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_293_293;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_294_294;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_301_301;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_303_303;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_304_304;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_311_311;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_313_313;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_314_314;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_321_321;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_323_323;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_324_324;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_331_331;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_333_333;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_334_334;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_341_341;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_343_343;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_344_344;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_351_351;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_353_353;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_354_354;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_361_361;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_363_363;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_364_364;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_371_371;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_373_373;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_374_374;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_381_381;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_383_383;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_384_384;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_391_391;
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__RevGoalPathPrime_48;

    {
      mdprof_fb__automatic_parallelism__autopar_reports__ParOverheads_26 = mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_get_overheads_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__ParExecMetrics_16);
    }
    if ((mdprof_fb__automatic_parallelism__autopar_reports__IsDependent_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mdprof_fb__automatic_parallelism__autopar_reports__DependenceString_27 = (MR_String) "no";
    else
      {
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_192_192;
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__Vars_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__IsDependent_10, (MR_Integer) 0)));
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__VarNames_29;
        MR_String mdprof_fb__automatic_parallelism__autopar_reports__VarsString_30;
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_57_57;
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_59_59;
        MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_195_195;

        {
          mdprof_fb__automatic_parallelism__autopar_reports__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__V_57_57, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_4[0]));
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__V_57_57, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_p_0_1));
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__V_57_57, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__V_57_57, 3) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__VarNameTable_4));
        }
        mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_192_192 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
        {
          mercury__set__map_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_192_192, mdprof_fb__automatic_parallelism__autopar_reports__V_57_57, mdprof_fb__automatic_parallelism__autopar_reports__Vars_28, &mdprof_fb__automatic_parallelism__autopar_reports__VarNames_29);
        }
        {
          mdprof_fb__automatic_parallelism__autopar_reports__V_59_59 = mercury__set__to_sorted_list_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_192_192, mdprof_fb__automatic_parallelism__autopar_reports__VarNames_29);
        }
        {
          mdprof_fb__automatic_parallelism__autopar_reports__VarsString_30 = mercury__string__join_list_2_f_0((MR_String) ", ", mdprof_fb__automatic_parallelism__autopar_reports__V_59_59);
        }
        {
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_3[0], mdprof_fb__automatic_parallelism__autopar_reports__VarsString_30, &mdprof_fb__automatic_parallelism__autopar_reports__V_195_195);
        }
        {
          mdprof_fb__automatic_parallelism__autopar_reports__DependenceString_27 = mercury__string__f_43_43_2_f_0((MR_String) "on ", mdprof_fb__automatic_parallelism__autopar_reports__V_195_195);
        }
      }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__Speedup_31 = mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_get_speedup_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__ParExecMetrics_16);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__TimeSaving_32 = mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_get_time_saving_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__ParExecMetrics_16);
    }
    mdprof_fb__automatic_parallelism__autopar_reports__TotalDeadTime_33 = (mdprof_fb__automatic_parallelism__autopar_reports__FirstConjDeadTime_24 + mdprof_fb__automatic_parallelism__autopar_reports__FutureDeadTime_25);
    mdprof_fb__automatic_parallelism__autopar_reports__V_210_210 = (MR_Word) &mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_3[0];
    {
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mdprof_fb__automatic_parallelism__autopar_reports__V_210_210, mdprof_fb__automatic_parallelism__autopar_reports__GoalPathString_7, &mdprof_fb__automatic_parallelism__autopar_reports__V_204_204);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_211_211 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_204_204, (MR_String) "\n");
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__Header1Str_34 = mercury__string__f_43_43_2_f_0((MR_String) "      Path: ", mdprof_fb__automatic_parallelism__autopar_reports__V_211_211);
    }
    mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_193_193 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    {
      mdprof_fb__automatic_parallelism__autopar_reports__Header1_35 = mercury__cord__singleton_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_193_193, ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__Header1Str_34)));
    }
    if ((mdprof_fb__automatic_parallelism__autopar_reports__MaybePushGoal_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        mdprof_fb__automatic_parallelism__autopar_reports__Header2_36 = mercury__cord__empty_0_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_193_193);
      }
    else
      {
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__PushGoal_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__MaybePushGoal_8, (MR_Integer) 0)));
        MR_String mdprof_fb__automatic_parallelism__autopar_reports__PushGoalPathStr_38 = ((MR_String) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__PushGoal_37, (MR_Integer) 0)));
        MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__Lo_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__PushGoal_37, (MR_Integer) 1)));
        MR_Integer mdprof_fb__automatic_parallelism__autopar_reports__Hi_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__PushGoal_37, (MR_Integer) 2)));
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__PushedGoalPathStrs_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_reports__PushGoal_37, (MR_Integer) 3)));
        MR_String mdprof_fb__automatic_parallelism__autopar_reports__HeadPushGoalStr_42;
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__TailPushGoalStrs_45;
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_82_82;
        MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_214_214;
        MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_221_221;
        MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_223_223;
        MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_224_224;
        MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_231_231;
        MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_233_233;
        MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_234_234;
        MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_241_241;

        {
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(mdprof_fb__automatic_parallelism__autopar_reports__V_210_210, mdprof_fb__automatic_parallelism__autopar_reports__Hi_40, &mdprof_fb__automatic_parallelism__autopar_reports__V_214_214);
        }
        {
          mdprof_fb__automatic_parallelism__autopar_reports__V_221_221 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_214_214, (MR_String) "\n");
        }
        {
          mdprof_fb__automatic_parallelism__autopar_reports__V_223_223 = mercury__string__f_43_43_2_f_0((MR_String) ", hi ", mdprof_fb__automatic_parallelism__autopar_reports__V_221_221);
        }
        {
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(mdprof_fb__automatic_parallelism__autopar_reports__V_210_210, mdprof_fb__automatic_parallelism__autopar_reports__Lo_39, &mdprof_fb__automatic_parallelism__autopar_reports__V_224_224);
        }
        {
          mdprof_fb__automatic_parallelism__autopar_reports__V_231_231 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_224_224, mdprof_fb__automatic_parallelism__autopar_reports__V_223_223);
        }
        {
          mdprof_fb__automatic_parallelism__autopar_reports__V_233_233 = mercury__string__f_43_43_2_f_0((MR_String) ", lo ", mdprof_fb__automatic_parallelism__autopar_reports__V_231_231);
        }
        {
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mdprof_fb__automatic_parallelism__autopar_reports__V_210_210, mdprof_fb__automatic_parallelism__autopar_reports__PushGoalPathStr_38, &mdprof_fb__automatic_parallelism__autopar_reports__V_234_234);
        }
        {
          mdprof_fb__automatic_parallelism__autopar_reports__V_241_241 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_234_234, mdprof_fb__automatic_parallelism__autopar_reports__V_233_233);
        }
        {
          mdprof_fb__automatic_parallelism__autopar_reports__HeadPushGoalStr_42 = mercury__string__f_43_43_2_f_0((MR_String) "      PushGoal: ", mdprof_fb__automatic_parallelism__autopar_reports__V_241_241);
        }
        {
          mdprof_fb__automatic_parallelism__autopar_reports__TailPushGoalStrs_45 = mercury__list__map_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_193_193, mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_193_193, (MR_Word) &mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_2[2], mdprof_fb__automatic_parallelism__autopar_reports__PushedGoalPathStrs_41);
        }
        {
          mdprof_fb__automatic_parallelism__autopar_reports__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__V_82_82, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__HeadPushGoalStr_42));
          MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__V_82_82, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__TailPushGoalStrs_45));
        }
        {
          mdprof_fb__automatic_parallelism__autopar_reports__Header2_36 = mercury__cord__from_list_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_193_193, mdprof_fb__automatic_parallelism__autopar_reports__V_82_82);
        }
      }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_114_114 = measurement_units__commas_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__NumCalls_17);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_117_117 = measurement_units__two_decimal_fraction_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__SeqTime_18);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_120_120 = measurement_units__two_decimal_fraction_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__ParTime_19);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_123_123 = measurement_units__two_decimal_fraction_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__SparkCost_20);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_126_126 = measurement_units__two_decimal_fraction_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__BarrierCost_21);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_129_129 = measurement_units__two_decimal_fraction_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__SignalsCost_22);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_132_132 = measurement_units__two_decimal_fraction_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__WaitsCost_23);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_135_135 = measurement_units__two_decimal_fraction_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__ParOverheads_26);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_138_138 = measurement_units__four_decimal_fraction_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__Speedup_31);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_141_141 = measurement_units__two_decimal_fraction_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TimeSaving_32);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_144_144 = measurement_units__two_decimal_fraction_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__FirstConjDeadTime_24);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_147_147 = measurement_units__two_decimal_fraction_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__FutureDeadTime_25);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_150_150 = measurement_units__two_decimal_fraction_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TotalDeadTime_33);
    }
    {
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mdprof_fb__automatic_parallelism__autopar_reports__V_210_210, mdprof_fb__automatic_parallelism__autopar_reports__V_150_150, &mdprof_fb__automatic_parallelism__autopar_reports__V_254_254);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_261_261 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_254_254, (MR_String) "\n\n");
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_263_263 = mercury__string__f_43_43_2_f_0((MR_String) "\n      Total dead time: ", mdprof_fb__automatic_parallelism__autopar_reports__V_261_261);
    }
    {
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mdprof_fb__automatic_parallelism__autopar_reports__V_210_210, mdprof_fb__automatic_parallelism__autopar_reports__V_147_147, &mdprof_fb__automatic_parallelism__autopar_reports__V_264_264);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_271_271 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_264_264, mdprof_fb__automatic_parallelism__autopar_reports__V_263_263);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_273_273 = mercury__string__f_43_43_2_f_0((MR_String) "\n      Future dead time: ", mdprof_fb__automatic_parallelism__autopar_reports__V_271_271);
    }
    {
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mdprof_fb__automatic_parallelism__autopar_reports__V_210_210, mdprof_fb__automatic_parallelism__autopar_reports__V_144_144, &mdprof_fb__automatic_parallelism__autopar_reports__V_274_274);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_281_281 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_274_274, mdprof_fb__automatic_parallelism__autopar_reports__V_273_273);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_283_283 = mercury__string__f_43_43_2_f_0((MR_String) "\n      First conj dead time: ", mdprof_fb__automatic_parallelism__autopar_reports__V_281_281);
    }
    {
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mdprof_fb__automatic_parallelism__autopar_reports__V_210_210, mdprof_fb__automatic_parallelism__autopar_reports__V_141_141, &mdprof_fb__automatic_parallelism__autopar_reports__V_284_284);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_291_291 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_284_284, mdprof_fb__automatic_parallelism__autopar_reports__V_283_283);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_293_293 = mercury__string__f_43_43_2_f_0((MR_String) "\n      Time saving: ", mdprof_fb__automatic_parallelism__autopar_reports__V_291_291);
    }
    {
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mdprof_fb__automatic_parallelism__autopar_reports__V_210_210, mdprof_fb__automatic_parallelism__autopar_reports__V_138_138, &mdprof_fb__automatic_parallelism__autopar_reports__V_294_294);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_301_301 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_294_294, mdprof_fb__automatic_parallelism__autopar_reports__V_293_293);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_303_303 = mercury__string__f_43_43_2_f_0((MR_String) "\n      Speedup: ", mdprof_fb__automatic_parallelism__autopar_reports__V_301_301);
    }
    {
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mdprof_fb__automatic_parallelism__autopar_reports__V_210_210, mdprof_fb__automatic_parallelism__autopar_reports__V_135_135, &mdprof_fb__automatic_parallelism__autopar_reports__V_304_304);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_311_311 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_304_304, mdprof_fb__automatic_parallelism__autopar_reports__V_303_303);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_313_313 = mercury__string__f_43_43_2_f_0((MR_String) "\n      ParOverheads total: ", mdprof_fb__automatic_parallelism__autopar_reports__V_311_311);
    }
    {
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mdprof_fb__automatic_parallelism__autopar_reports__V_210_210, mdprof_fb__automatic_parallelism__autopar_reports__V_132_132, &mdprof_fb__automatic_parallelism__autopar_reports__V_314_314);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_321_321 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_314_314, mdprof_fb__automatic_parallelism__autopar_reports__V_313_313);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_323_323 = mercury__string__f_43_43_2_f_0((MR_String) "\n      WaitsCost: ", mdprof_fb__automatic_parallelism__autopar_reports__V_321_321);
    }
    {
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mdprof_fb__automatic_parallelism__autopar_reports__V_210_210, mdprof_fb__automatic_parallelism__autopar_reports__V_129_129, &mdprof_fb__automatic_parallelism__autopar_reports__V_324_324);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_331_331 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_324_324, mdprof_fb__automatic_parallelism__autopar_reports__V_323_323);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_333_333 = mercury__string__f_43_43_2_f_0((MR_String) "\n      SignalsCost: ", mdprof_fb__automatic_parallelism__autopar_reports__V_331_331);
    }
    {
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mdprof_fb__automatic_parallelism__autopar_reports__V_210_210, mdprof_fb__automatic_parallelism__autopar_reports__V_126_126, &mdprof_fb__automatic_parallelism__autopar_reports__V_334_334);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_341_341 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_334_334, mdprof_fb__automatic_parallelism__autopar_reports__V_333_333);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_343_343 = mercury__string__f_43_43_2_f_0((MR_String) "\n      BarrierCost: ", mdprof_fb__automatic_parallelism__autopar_reports__V_341_341);
    }
    {
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mdprof_fb__automatic_parallelism__autopar_reports__V_210_210, mdprof_fb__automatic_parallelism__autopar_reports__V_123_123, &mdprof_fb__automatic_parallelism__autopar_reports__V_344_344);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_351_351 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_344_344, mdprof_fb__automatic_parallelism__autopar_reports__V_343_343);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_353_353 = mercury__string__f_43_43_2_f_0((MR_String) "\n      SparkCost: ", mdprof_fb__automatic_parallelism__autopar_reports__V_351_351);
    }
    {
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mdprof_fb__automatic_parallelism__autopar_reports__V_210_210, mdprof_fb__automatic_parallelism__autopar_reports__V_120_120, &mdprof_fb__automatic_parallelism__autopar_reports__V_354_354);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_361_361 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_354_354, mdprof_fb__automatic_parallelism__autopar_reports__V_353_353);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_363_363 = mercury__string__f_43_43_2_f_0((MR_String) "\n      ParTime: ", mdprof_fb__automatic_parallelism__autopar_reports__V_361_361);
    }
    {
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mdprof_fb__automatic_parallelism__autopar_reports__V_210_210, mdprof_fb__automatic_parallelism__autopar_reports__V_117_117, &mdprof_fb__automatic_parallelism__autopar_reports__V_364_364);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_371_371 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_364_364, mdprof_fb__automatic_parallelism__autopar_reports__V_363_363);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_373_373 = mercury__string__f_43_43_2_f_0((MR_String) "\n      SeqTime: ", mdprof_fb__automatic_parallelism__autopar_reports__V_371_371);
    }
    {
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mdprof_fb__automatic_parallelism__autopar_reports__V_210_210, mdprof_fb__automatic_parallelism__autopar_reports__V_114_114, &mdprof_fb__automatic_parallelism__autopar_reports__V_374_374);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_381_381 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_374_374, mdprof_fb__automatic_parallelism__autopar_reports__V_373_373);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_383_383 = mercury__string__f_43_43_2_f_0((MR_String) "\n      NumCalls: ", mdprof_fb__automatic_parallelism__autopar_reports__V_381_381);
    }
    {
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mdprof_fb__automatic_parallelism__autopar_reports__V_210_210, mdprof_fb__automatic_parallelism__autopar_reports__DependenceString_27, &mdprof_fb__automatic_parallelism__autopar_reports__V_384_384);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_391_391 = mercury__string__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__V_384_384, mdprof_fb__automatic_parallelism__autopar_reports__V_383_383);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__Header2Str_46 = mercury__string__f_43_43_2_f_0((MR_String) "      Dependent: ", mdprof_fb__automatic_parallelism__autopar_reports__V_391_391);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__Header3_47 = mercury__cord__singleton_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_193_193, ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__Header2Str_46)));
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__succeeded = mdbcomp__goal_path__rev_goal_path_from_string_2_p_0(mdprof_fb__automatic_parallelism__autopar_reports__GoalPathString_7, &mdprof_fb__automatic_parallelism__autopar_reports__RevGoalPathPrime_48);
    }
    if (mdprof_fb__automatic_parallelism__autopar_reports__succeeded)
      mdprof_fb__automatic_parallelism__autopar_reports__RevGoalPath_49 = mdprof_fb__automatic_parallelism__autopar_reports__RevGoalPathPrime_48;
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "mdprof_fb.automatic_parallelism.autopar_reports", (MR_String) "predicate \140mdprof_fb.automatic_parallelism.autopar_reports.create_candidate_parallel_conj_report\'/3", (MR_String) "couldn\'t parse goal path");
          return;
        }
      }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjunction_7_p_0(mdprof_fb__automatic_parallelism__autopar_reports__VarNameTable_4, (MR_Integer) 4, mdprof_fb__automatic_parallelism__autopar_reports__RevGoalPath_49, mdprof_fb__automatic_parallelism__autopar_reports__GoalsBefore_11, mdprof_fb__automatic_parallelism__autopar_reports__GoalsBeforeCost_12, mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_ConjNum_155_155, &mdprof_fb__automatic_parallelism__autopar_reports__ReportGoalsBefore0_51);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_157_157 = message__indent_1_f_0((MR_Integer) 3);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_160_160 = mercury__cord__singleton_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_193_193, ((MR_Box) ((MR_String) "Goals before:\n")));
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_159_159 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_193_193, mdprof_fb__automatic_parallelism__autopar_reports__V_160_160, mdprof_fb__automatic_parallelism__autopar_reports__ReportGoalsBefore0_51);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__ReportGoalsBefore_52 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_193_193, mdprof_fb__automatic_parallelism__autopar_reports__V_157_157, mdprof_fb__automatic_parallelism__autopar_reports__V_159_159);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_163_163 = mercury__list__length_1_f_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_1[0], mdprof_fb__automatic_parallelism__autopar_reports__GoalsBefore_11);
    }
    mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_ConjNum_162_162 = (mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_ConjNum_155_155 + mdprof_fb__automatic_parallelism__autopar_reports__V_163_163);
    {
      mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjunction_6_p_0(mdprof_fb__automatic_parallelism__autopar_reports__VarNameTable_4, (MR_Integer) 4, mdprof_fb__automatic_parallelism__autopar_reports__RevGoalPath_49, mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_ConjNum_162_162, mdprof_fb__automatic_parallelism__autopar_reports__Conjs_13, &mdprof_fb__automatic_parallelism__autopar_reports__ReportParConj0_53);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_165_165 = message__indent_1_f_0((MR_Integer) 3);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_168_168 = mercury__cord__singleton_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_193_193, ((MR_Box) ((MR_String) "Parallel conjunction:\n")));
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_167_167 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_193_193, mdprof_fb__automatic_parallelism__autopar_reports__V_168_168, mdprof_fb__automatic_parallelism__autopar_reports__ReportParConj0_53);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__ReportParConj_54 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_193_193, mdprof_fb__automatic_parallelism__autopar_reports__V_165_165, mdprof_fb__automatic_parallelism__autopar_reports__V_167_167);
    }
    mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_ConjNum_170_170 = (mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_ConjNum_162_162 + (MR_Integer) 1);
    {
      mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjunction_7_p_0(mdprof_fb__automatic_parallelism__autopar_reports__VarNameTable_4, (MR_Integer) 4, mdprof_fb__automatic_parallelism__autopar_reports__RevGoalPath_49, mdprof_fb__automatic_parallelism__autopar_reports__GoalsAfter_14, mdprof_fb__automatic_parallelism__autopar_reports__GoalsAfterCost_15, mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_ConjNum_170_170, &mdprof_fb__automatic_parallelism__autopar_reports__ReportGoalsAfter0_55);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_173_173 = message__indent_1_f_0((MR_Integer) 3);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_176_176 = mercury__cord__singleton_1_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_193_193, ((MR_Box) ((MR_String) "Goals after:\n")));
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_175_175 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_193_193, mdprof_fb__automatic_parallelism__autopar_reports__V_176_176, mdprof_fb__automatic_parallelism__autopar_reports__ReportGoalsAfter0_55);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__ReportGoalsAfter_56 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_193_193, mdprof_fb__automatic_parallelism__autopar_reports__V_173_173, mdprof_fb__automatic_parallelism__autopar_reports__V_175_175);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_182_182 = message__nl_0_f_0();
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_185_185 = message__nl_0_f_0();
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_187_187 = message__nl_0_f_0();
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_186_186 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_193_193, mdprof_fb__automatic_parallelism__autopar_reports__ReportGoalsAfter_56, mdprof_fb__automatic_parallelism__autopar_reports__V_187_187);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_184_184 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_193_193, mdprof_fb__automatic_parallelism__autopar_reports__V_185_185, mdprof_fb__automatic_parallelism__autopar_reports__V_186_186);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_183_183 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_193_193, mdprof_fb__automatic_parallelism__autopar_reports__ReportParConj_54, mdprof_fb__automatic_parallelism__autopar_reports__V_184_184);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_181_181 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_193_193, mdprof_fb__automatic_parallelism__autopar_reports__V_182_182, mdprof_fb__automatic_parallelism__autopar_reports__V_183_183);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_180_180 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_193_193, mdprof_fb__automatic_parallelism__autopar_reports__ReportGoalsBefore_52, mdprof_fb__automatic_parallelism__autopar_reports__V_181_181);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_179_179 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_193_193, mdprof_fb__automatic_parallelism__autopar_reports__Header3_47, mdprof_fb__automatic_parallelism__autopar_reports__V_180_180);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_reports__V_178_178 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_193_193, mdprof_fb__automatic_parallelism__autopar_reports__Header2_36, mdprof_fb__automatic_parallelism__autopar_reports__V_179_179);
    }
    {
      *mdprof_fb__automatic_parallelism__autopar_reports__Report_6 = mercury__cord__f_43_43_2_f_0(mdprof_fb__automatic_parallelism__autopar_reports__TypeCtorInfo_193_193, mdprof_fb__automatic_parallelism__autopar_reports__Header1_35, mdprof_fb__automatic_parallelism__autopar_reports__V_178_178);
    }
  }
}

void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__print_feedback_report_3_p_0(
  MR_Word mdprof_fb__automatic_parallelism__autopar_reports__FeedbackInfo_4)
{
  {
    MR_bool mdprof_fb__automatic_parallelism__autopar_reports__succeeded;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__ProfiledProgramName_6;
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__MaybeCandidateParConjs_7;
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__Reports_11;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__Report_12;
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_RevReports_17_17;
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_RevReports_18_18;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_30_30;
    MR_Word mdprof_fb__automatic_parallelism__autopar_reports__V_36_36;
    MR_String mdprof_fb__automatic_parallelism__autopar_reports__V_39_39;

    {
      mdbcomp__feedback__get_all_feedback_info_3_p_0(mdprof_fb__automatic_parallelism__autopar_reports__FeedbackInfo_4, &mdprof_fb__automatic_parallelism__autopar_reports__ProfiledProgramName_6, &mdprof_fb__automatic_parallelism__autopar_reports__MaybeCandidateParConjs_7);
    }
    mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_RevReports_17_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    if ((mdprof_fb__automatic_parallelism__autopar_reports__MaybeCandidateParConjs_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_RevReports_18_18 = mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_RevReports_17_17;
    else
      {
        MR_Word mdprof_fb__automatic_parallelism__autopar_reports__CandidateParConjs_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__MaybeCandidateParConjs_7, (MR_Integer) 0)));
        MR_String mdprof_fb__automatic_parallelism__autopar_reports__CandidateParConjsReport_10;

        {
          mdprof_fb__automatic_parallelism__autopar_reports__create_feedback_autopar_report_2_p_0(mdprof_fb__automatic_parallelism__autopar_reports__CandidateParConjs_9, &mdprof_fb__automatic_parallelism__autopar_reports__CandidateParConjsReport_10);
        }
        {
          mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_RevReports_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_RevReports_18_18, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__CandidateParConjsReport_10));
          MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_RevReports_18_18, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_RevReports_17_17));
        }
      }
    {
      mercury__list__reverse_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, mdprof_fb__automatic_parallelism__autopar_reports__STATE_VARIABLE_RevReports_18_18, &mdprof_fb__automatic_parallelism__autopar_reports__Reports_11);
    }
    if ((mdprof_fb__automatic_parallelism__autopar_reports__Reports_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mdprof_fb__automatic_parallelism__autopar_reports__Report_12 = (MR_String) "no report available.\n";
    else
      {
        mercury__string__append_list_2_p_0(mdprof_fb__automatic_parallelism__autopar_reports__Reports_11, &mdprof_fb__automatic_parallelism__autopar_reports__Report_12);
      }
    {
      mercury__io__write_string_3_p_0((MR_String) "Feedback report for ");
    }
    mdprof_fb__automatic_parallelism__autopar_reports__V_36_36 = (MR_Word) &mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_3[0];
    {
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mdprof_fb__automatic_parallelism__autopar_reports__V_36_36, mdprof_fb__automatic_parallelism__autopar_reports__ProfiledProgramName_6, &mdprof_fb__automatic_parallelism__autopar_reports__V_30_30);
    }
    {
      mercury__io__write_string_3_p_0(mdprof_fb__automatic_parallelism__autopar_reports__V_30_30);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ":\n\n");
    }
    {
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mdprof_fb__automatic_parallelism__autopar_reports__V_36_36, mdprof_fb__automatic_parallelism__autopar_reports__Report_12, &mdprof_fb__automatic_parallelism__autopar_reports__V_39_39);
    }
    {
      mercury__io__write_string_3_p_0(mdprof_fb__automatic_parallelism__autopar_reports__V_39_39);
    }
  }
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
