/*
** Automatically generated from `autopar_reports.m'
** by the Mercury compiler,
** version rotd-2023-12-13
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


// :- module mdprof_fb.automatic_parallelism.autopar_reports.
// :- implementation.

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
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "std_util.mih"
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
#include "mdprof_fb.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_reports__mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0;

static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_reports__mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0;

static const MR_FA_PseudoTypeInfo_Struct2 mdprof_fb__automatic_parallelism__autopar_reports__pair__pti_pair_2__plain_mdbcomp__program_representation__type_ctor_info_string_proc_label_0__plain_mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0;

static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_reports__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_reports__mdbcomp__program_representation__pti_goal_rep_1__plain_mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0;

static const MR_FA_PseudoTypeInfo_Struct2 mdprof_fb__automatic_parallelism__autopar_reports__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_reports__mdbcomp__feedback__automatic_parallelism__pti_candidate_par_conjunction_1__plain_mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0;

static const MR_FA_PseudoTypeInfo_Struct2 mdprof_fb__automatic_parallelism__autopar_reports__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_float_0;

static MR_Word MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__IntroducedFrom__func__format_sequential_conjuncts__388__1_1_f_0(
  MR_Word HeadVar__1_44);

static MR_Float MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__IntroducedFrom__func__format_parallel_conjuncts__340__1_2_f_0(
  MR_Word LambdaHeadVar__1_49,
  MR_Float LambdaHeadVar__2_50);

static MR_Word MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__IntroducedFrom__func__format_parallel_conjuncts__336__1_1_f_0(
  MR_Word HeadVar__1_73);

static MR_String MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__IntroducedFrom__func__create_push_goal_report__198__1_1_f_0(
  MR_String LambdaHeadVar__1_21);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__IntroducedFrom__pred__create_feedback_autopar_report__92__1_3_p_0(
  MR_Word HeadVar__1_100,
  MR_Integer HeadVar__2_101,
  MR_Integer * HeadVar__3_102);

static MR_String MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__IntroducedFrom__func__create_candidate_parallel_conj_report__238__1_1_f_0(
  MR_String LambdaHeadVar__1_76);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__format_var_use_line_3_p_0(
  MR_Word VarNameTable_4,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static MR_Box MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__create_push_goal_report_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__create_push_goal_report_2_p_0(
  MR_Word PushGoal_3,
  MR_Word * Report_4);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_proc_report_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_proc_report_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_proc_report_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * Report_5);

static MR_Box MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjunction_7_p_0(
  MR_Word VarNameTable_8,
  MR_Integer Indent_9,
  MR_Word RevGoalPath_10,
  MR_Word Goals_11,
  MR_Float Cost_12,
  MR_Integer FirstConjNum_13,
  MR_Word * STATE_VARIABLE_Report_16);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjunction_6_p_0(
  MR_Word VarNameTable_7,
  MR_Integer Indent_8,
  MR_Word RevGoalPath_9,
  MR_Integer ConjNum_10,
  MR_Word Conjs_11,
  MR_Word * STATE_VARIABLE_Report_14);

static MR_Box MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjuncts_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjuncts_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjuncts_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer Indent_2,
  MR_Word HeadVar__3_3,
  MR_Integer HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_Report_0_6,
  MR_Word * STATE_VARIABLE_Report_7);

static MR_Box MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjuncts_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjuncts_8_p_0(
  MR_Word VarNameTable_1,
  MR_Integer Indent_2,
  MR_Word RevGoalPath_3,
  MR_Word HeadVar__4_4,
  MR_Integer STATE_VARIABLE_ConjNum_0_5,
  MR_Integer * STATE_VARIABLE_ConjNum_6,
  MR_Word STATE_VARIABLE_Report_0_7,
  MR_Word * STATE_VARIABLE_Report_8);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__create_feedback_autopar_report_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__create_feedback_autopar_report_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__create_feedback_autopar_report_2_p_0(
  MR_Word CandidateParConjs_3,
  MR_String * Report_4);

static MR_String MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__alg_for_finding_best_par_to_string_1_f_0(
  MR_Word Alg_3);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);


static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_1[5][2];

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_2[10][3];

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_3[1][1];

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_4[5][6];

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_5[4][5];




static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_1[5][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_goal_rep_1)),
    ((MR_Box) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunctions_proc_1)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_1[0]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunction_1)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_1[0]))
  },
  /* row   4 */
  {
    ((MR_Box) (base_typeclass_info_program_representation_utils__goal_annotation__arity1__mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0__)),
    ((MR_Box) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0))
  },
};

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_2[10][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_1[1]))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_4[0])),
    ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__create_feedback_autopar_report_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_5[0])),
    ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__create_feedback_autopar_report_2_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_5[1])),
    ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjuncts_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_5[1])),
    ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjuncts_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_4[1])),
    ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjuncts_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_5[2])),
    ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_5[3])),
    ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_proc_report_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_5[2])),
    ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__create_push_goal_report_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_3[1][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
};

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_4[5][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_reports__pair__pti_pair_2__plain_mdbcomp__program_representation__type_ctor_info_string_proc_label_0__plain_mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_reports__mdbcomp__program_representation__pti_goal_rep_1__plain_mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_reports__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_reports__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_reports__mdbcomp__feedback__automatic_parallelism__pti_candidate_par_conjunction_1__plain_mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_reports__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_reports__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_reports__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_float_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_reports__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_5[4][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_reports__pair__pti_pair_2__plain_mdbcomp__program_representation__type_ctor_info_string_proc_label_0__plain_mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_reports__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0)),
    ((MR_Box) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_push_goal_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_reports__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0))
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


static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_reports__mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0 = {
  &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_goal_rep_1,
  { (MR_TypeInfo) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0) }
};

static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_reports__mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0 = {
  &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunctions_proc_1,
  { (MR_TypeInfo) (&mdprof_fb__automatic_parallelism__autopar_reports__mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 mdprof_fb__automatic_parallelism__autopar_reports__pair__pti_pair_2__plain_mdbcomp__program_representation__type_ctor_info_string_proc_label_0__plain_mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0),
    (MR_PseudoTypeInfo) (&mdprof_fb__automatic_parallelism__autopar_reports__mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_reports__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_reports__mdbcomp__program_representation__pti_goal_rep_1__plain_mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0 = {
  &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_goal_rep_1,
  { (MR_PseudoTypeInfo) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 mdprof_fb__automatic_parallelism__autopar_reports__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_reports__mdbcomp__feedback__automatic_parallelism__pti_candidate_par_conjunction_1__plain_mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0 = {
  &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunction_1,
  { (MR_PseudoTypeInfo) (&mdprof_fb__automatic_parallelism__autopar_reports__mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 mdprof_fb__automatic_parallelism__autopar_reports__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_float_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0)
  }
};

const MR_BaseTypeclassInfo base_typeclass_info_program_representation_utils__goal_annotation__arity1__mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0__[6] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_p_0_10001))
};

static MR_Word MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__IntroducedFrom__func__format_sequential_conjuncts__388__1_1_f_0(
  MR_Word HeadVar__1_44)
{
  MR_Word HeadVar__2_45;
  MR_Box conv0_HeadVar__2_45;

  conv0_HeadVar__2_45 = mercury__std_util__id_1_f_0((MR_Word) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0), ((MR_Box) (HeadVar__1_44)));
  HeadVar__2_45 = ((MR_Word) (conv0_HeadVar__2_45));
  return HeadVar__2_45;
}

static MR_Float MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__IntroducedFrom__func__format_parallel_conjuncts__340__1_2_f_0(
  MR_Word LambdaHeadVar__1_49,
  MR_Float LambdaHeadVar__2_50)
{
  MR_Float LambdaHeadVar__3_51;
  MR_Float Var_52;
  MR_Word Var_53 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_49, (MR_Integer) 2))));

  Var_52 = MR_unbox_float((MR_hl_field(0, Var_53, (MR_Integer) 0)));
  LambdaHeadVar__3_51 = (LambdaHeadVar__2_50 + Var_52);
  return LambdaHeadVar__3_51;
}

static MR_Word MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__IntroducedFrom__func__format_parallel_conjuncts__336__1_1_f_0(
  MR_Word HeadVar__1_73)
{
  MR_Word HeadVar__2_74;
  MR_Box conv0_HeadVar__2_74;

  conv0_HeadVar__2_74 = mercury__std_util__id_1_f_0((MR_Word) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0), ((MR_Box) (HeadVar__1_73)));
  HeadVar__2_74 = ((MR_Word) (conv0_HeadVar__2_74));
  return HeadVar__2_74;
}

static MR_String MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__IntroducedFrom__func__create_push_goal_report__198__1_1_f_0(
  MR_String LambdaHeadVar__1_21)
{
  MR_String LambdaHeadVar__2_22;
  MR_Word Var_24;
  MR_Word Var_25;

  {
    Var_25 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_25, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Var_25, 1) = ((MR_Box) (LambdaHeadVar__1_21));
  }
  {
    Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_24, 0) = ((MR_Box) (Var_25));
    MR_hl_field(1, Var_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  LambdaHeadVar__2_22 = mercury__string__format_2_f_0((MR_String) "        %s\n", Var_24);
  return LambdaHeadVar__2_22;
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__IntroducedFrom__pred__create_feedback_autopar_report__92__1_3_p_0(
  MR_Word HeadVar__1_100,
  MR_Integer HeadVar__2_101,
  MR_Integer * HeadVar__3_102)
{
  MR_Word Cands_105 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_100, (MR_Integer) 1))));
  MR_Word Conjs_108 = ((MR_Word) ((MR_hl_field(0, Cands_105, (MR_Integer) 2))));
  MR_Integer Var_109;

  Var_109 = mercury__list__length_1_f_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_1[3]), Conjs_108);
  *HeadVar__3_102 = (MR_Integer) ((MR_Unsigned) HeadVar__2_101 + (MR_Unsigned) Var_109);
}

static MR_String MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__IntroducedFrom__func__create_candidate_parallel_conj_report__238__1_1_f_0(
  MR_String LambdaHeadVar__1_76)
{
  MR_String LambdaHeadVar__2_77;
  MR_Word Var_79;
  MR_Word Var_80;

  {
    Var_80 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_80, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Var_80, 1) = ((MR_Box) (LambdaHeadVar__1_76));
  }
  {
    Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_79, 0) = ((MR_Box) (Var_80));
    MR_hl_field(1, Var_79, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  LambdaHeadVar__2_77 = mercury__string__format_2_f_0((MR_String) "                %s\n", Var_79);
  return LambdaHeadVar__2_77;
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__3_3;

  mdprof_fb__automatic_parallelism__autopar_reports__format_var_use_line_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__3_3);
  *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__3_3));
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  mdprof_fb__automatic_parallelism__autopar_reports__format_var_use_line_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__3_3);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  MR_Float CostPercall_4 = MR_unbox_float((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0)));
  MR_Word CostAboveThreshold_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
  MR_Word Productions_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
  MR_Word Consumptions_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
  MR_String CostAboveThresholdStr_8;
  MR_Word CostLine_9;
  MR_Word ProductionsReport_10;
  MR_Word ConsumptionsReport_11;
  MR_String Var_12;
  MR_String Var_16;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_String Var_27;
  MR_String Var_29;
  MR_String Var_30;

  switch (CostAboveThreshold_5) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      CostAboveThresholdStr_8 = (MR_String) "above threshold";
      break;
    case (MR_Integer) 1:
      CostAboveThresholdStr_8 = (MR_String) "not above threshold";
      break;
  }
  Var_16 = measurement_units__two_decimal_fraction_1_f_0(CostPercall_4);
  Var_27 = mercury__string__f_43_43_2_f_0(CostAboveThresholdStr_8, (MR_String) ")");
  Var_29 = mercury__string__f_43_43_2_f_0((MR_String) " (", Var_27);
  Var_30 = mercury__string__f_43_43_2_f_0(Var_16, Var_29);
  Var_12 = mercury__string__f_43_43_2_f_0((MR_String) "cost: ", Var_30);
  CostLine_9 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_12)));
  if ((Productions_6 == (MR_Word) ((MR_Unsigned) 0U)))
    ProductionsReport_10 = mercury__cord__empty_0_f_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_1[2]));
  else
  {
    MR_Word Lines_32;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_38;

    {
      Var_33 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_33, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_4[4]));
      MR_hl_field(0, Var_33, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_p_0_1));
      MR_hl_field(0, Var_33, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_33, 3) = ((MR_Box) (HeadVar__1_1));
    }
    mercury__list__map_3_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_2[1]), (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_1[2]), Var_33, Productions_6, &Lines_32);
    Var_35 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "Productions:")));
    Var_34 = mercury__cord__singleton_1_f_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_1[2]), ((MR_Box) (Var_35)));
    Var_38 = mercury__cord__from_list_1_f_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_1[2]), Lines_32);
    ProductionsReport_10 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_1[2]), Var_34, Var_38);
  }
  if ((Consumptions_7 == (MR_Word) ((MR_Unsigned) 0U)))
    ConsumptionsReport_11 = mercury__cord__empty_0_f_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_1[2]));
  else
  {
    MR_Word Lines_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_49;

    {
      Var_44 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_44, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_4[4]));
      MR_hl_field(0, Var_44, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_p_0_2));
      MR_hl_field(0, Var_44, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_44, 3) = ((MR_Box) (HeadVar__1_1));
    }
    mercury__list__map_3_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_2[1]), (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_1[2]), Var_44, Consumptions_7, &Lines_43);
    Var_46 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "Consumptions:")));
    Var_45 = mercury__cord__singleton_1_f_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_1[2]), ((MR_Box) (Var_46)));
    Var_49 = mercury__cord__from_list_1_f_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_1[2]), Lines_43);
    ConsumptionsReport_11 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_1[2]), Var_45, Var_49);
  }
  Var_22 = mercury__cord__singleton_1_f_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_1[2]), ((MR_Box) (CostLine_9)));
  Var_23 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_1[2]), ProductionsReport_10, ConsumptionsReport_11);
  *HeadVar__3_3 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_1[2]), Var_22, Var_23);
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__format_var_use_line_3_p_0(
  MR_Word VarNameTable_4,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  MR_Integer Var_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Float Use_6 = MR_unbox_float((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1)));
  MR_String String_7;
  MR_String VarName_8;
  MR_String Var_14;
  MR_String Var_18;
  MR_String Var_19;

  Var_14 = measurement_units__two_decimal_fraction_1_f_0(Use_6);
  mdbcomp__program_representation__lookup_var_name_3_p_0(VarNameTable_4, Var_5, &VarName_8);
  Var_18 = mercury__string__f_43_43_2_f_0((MR_String) ": ", Var_14);
  Var_19 = mercury__string__f_43_43_2_f_0(VarName_8, Var_18);
  String_7 = mercury__string__f_43_43_2_f_0((MR_String) "    ", Var_19);
  *HeadVar__3_3 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (String_7)));
}

static MR_Box MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__create_push_goal_report_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_LambdaHeadVar__2_22;

  conv0_LambdaHeadVar__2_22 = mdprof_fb__automatic_parallelism__autopar_reports__IntroducedFrom__func__create_push_goal_report__198__1_1_f_0(((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_22));
  return wrapper_arg_2;
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__create_push_goal_report_2_p_0(
  MR_Word PushGoal_3,
  MR_Word * Report_4)
{
  MR_String PushGoalPathStr_5 = ((MR_String) ((MR_hl_field(0, PushGoal_3, (MR_Integer) 0))));
  MR_Integer Lo_6 = ((MR_Integer) ((MR_hl_field(0, PushGoal_3, (MR_Integer) 1))));
  MR_Integer Hi_7 = ((MR_Integer) ((MR_hl_field(0, PushGoal_3, (MR_Integer) 2))));
  MR_Word PushedGoalPathStrs_8 = ((MR_Word) ((MR_hl_field(0, PushGoal_3, (MR_Integer) 3))));
  MR_String HeadPushGoalStr_9;
  MR_Word TailPushGoalStrs_12;
  MR_Word Var_27;
  MR_String Var_31;
  MR_String Var_38;
  MR_String Var_40;
  MR_String Var_41;
  MR_String Var_48;
  MR_String Var_50;
  MR_String Var_51;

  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_3[0]), Hi_7, &Var_31);
  Var_38 = mercury__string__f_43_43_2_f_0(Var_31, (MR_String) "\n");
  Var_40 = mercury__string__f_43_43_2_f_0((MR_String) ", hi ", Var_38);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_3[0]), Lo_6, &Var_41);
  Var_48 = mercury__string__f_43_43_2_f_0(Var_41, Var_40);
  Var_50 = mercury__string__f_43_43_2_f_0((MR_String) ", lo ", Var_48);
  Var_51 = mercury__string__f_43_43_2_f_0(PushGoalPathStr_5, Var_50);
  HeadPushGoalStr_9 = mercury__string__f_43_43_2_f_0((MR_String) "\n      PushGoal: ", Var_51);
  TailPushGoalStrs_12 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_2[9]), PushedGoalPathStrs_8);
  {
    Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_27, 0) = ((MR_Box) (HeadPushGoalStr_9));
    MR_hl_field(1, Var_27, 1) = ((MR_Box) (TailPushGoalStrs_12));
  }
  *Report_4 = mercury__cord__from_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_27);
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_proc_report_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_Report_6;

  mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_Report_6);
  *wrapper_arg_2 = ((MR_Box) (conv1_Report_6));
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_proc_report_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Report_4;

  mdprof_fb__automatic_parallelism__autopar_reports__create_push_goal_report_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_Report_4);
  *wrapper_arg_2 = ((MR_Box) (conv0_Report_4));
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_proc_report_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * Report_5)
{
  MR_Word Proc_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Word CandidateParConjunctionProc_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
  MR_Word VarNameTable_6 = ((MR_Word) ((MR_hl_field(0, CandidateParConjunctionProc_4, (MR_Integer) 0))));
  MR_Word PushGoals_7 = ((MR_Word) ((MR_hl_field(0, CandidateParConjunctionProc_4, (MR_Integer) 1))));
  MR_Word CandidateParConjunctions_8 = ((MR_Word) ((MR_hl_field(0, CandidateParConjunctionProc_4, (MR_Integer) 2))));
  MR_String ProcString_9;
  MR_Word PushGoalReports_10;
  MR_Word CandidateParConjunctionReports_11;
  MR_String Header_12;
  MR_Word Var_14;
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Word Var_25;
  MR_String Var_35;

  program_representation_utils__print_proc_label_to_string_2_p_0(Proc_3, &ProcString_9);
  mercury__list__map_3_p_0((MR_Word) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_push_goal_0), (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_1[2]), (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_2[8]), PushGoals_7, &PushGoalReports_10);
  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_14, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_4[3]));
    MR_hl_field(0, Var_14, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_proc_report_2_p_0_2));
    MR_hl_field(0, Var_14, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_14, 3) = ((MR_Box) (VarNameTable_6));
  }
  mercury__list__map_3_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_1[3]), (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_1[2]), Var_14, CandidateParConjunctions_8, &CandidateParConjunctionReports_11);
  Var_35 = mercury__string__f_43_43_2_f_0(ProcString_9, (MR_String) "\n");
  Header_12 = mercury__string__f_43_43_2_f_0((MR_String) "    ", Var_35);
  Var_19 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Header_12)));
  Var_21 = mercury__cord__cord_list_to_cord_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), PushGoalReports_10);
  Var_23 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "\n")));
  Var_25 = mercury__cord__cord_list_to_cord_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), CandidateParConjunctionReports_11);
  Var_22 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_23, Var_25);
  Var_20 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_21, Var_22);
  *Report_5 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_19, Var_20);
}

static MR_Box MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv1_LambdaHeadVar__2_77;

  conv1_LambdaHeadVar__2_77 = mdprof_fb__automatic_parallelism__autopar_reports__IntroducedFrom__func__create_candidate_parallel_conj_report__238__1_1_f_0(((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_77));
  return wrapper_arg_2;
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__3_3;

  mdbcomp__program_representation__lookup_var_name_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) (wrapper_arg_1)), &conv0_HeadVar__3_3);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
}

void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_p_0(
  MR_Word VarNameTable_4,
  MR_Word CandidateParConjunction_5,
  MR_Word * Report_6)
{
  MR_bool succeeded;
  MR_String GoalPathString_7 = ((MR_String) ((MR_hl_field(0, CandidateParConjunction_5, (MR_Integer) 0))));
  MR_Word MaybePushGoal_8 = ((MR_Word) ((MR_hl_field(0, CandidateParConjunction_5, (MR_Integer) 1))));
  MR_Word IsDependent_10 = ((MR_Word) ((MR_hl_field(0, CandidateParConjunction_5, (MR_Integer) 3))));
  MR_Word GoalsBefore_11 = ((MR_Word) ((MR_hl_field(0, CandidateParConjunction_5, (MR_Integer) 4))));
  MR_Float GoalsBeforeCost_12 = MR_unbox_float((MR_hl_field(0, CandidateParConjunction_5, (MR_Integer) 5)));
  MR_Word Conjs_13 = ((MR_Word) ((MR_hl_field(0, CandidateParConjunction_5, (MR_Integer) 6))));
  MR_Word GoalsAfter_14 = ((MR_Word) ((MR_hl_field(0, CandidateParConjunction_5, (MR_Integer) 7))));
  MR_Float GoalsAfterCost_15 = MR_unbox_float((MR_hl_field(0, CandidateParConjunction_5, (MR_Integer) 8)));
  MR_Word ParExecMetrics_16 = ((MR_Word) ((MR_hl_field(0, CandidateParConjunction_5, (MR_Integer) 9))));
  MR_Integer NumCalls_17 = ((MR_Integer) ((MR_hl_field(0, ParExecMetrics_16, (MR_Integer) 0))));
  MR_Float SeqTime_18 = MR_unbox_float((MR_hl_field(0, ParExecMetrics_16, (MR_Integer) 1)));
  MR_Float ParTime_19 = MR_unbox_float((MR_hl_field(0, ParExecMetrics_16, (MR_Integer) 2)));
  MR_Float SparkCost_20 = MR_unbox_float((MR_hl_field(0, ParExecMetrics_16, (MR_Integer) 3)));
  MR_Float BarrierCost_21 = MR_unbox_float((MR_hl_field(0, ParExecMetrics_16, (MR_Integer) 4)));
  MR_Float SignalsCost_22 = MR_unbox_float((MR_hl_field(0, ParExecMetrics_16, (MR_Integer) 5)));
  MR_Float WaitsCost_23 = MR_unbox_float((MR_hl_field(0, ParExecMetrics_16, (MR_Integer) 6)));
  MR_Float FirstConjDeadTime_24 = MR_unbox_float((MR_hl_field(0, ParExecMetrics_16, (MR_Integer) 7)));
  MR_Float FutureDeadTime_25 = MR_unbox_float((MR_hl_field(0, ParExecMetrics_16, (MR_Integer) 8)));
  MR_Float ParOverheads_26;
  MR_String DependenceString_27;
  MR_Float Speedup_31;
  MR_Float TimeSaving_32;
  MR_Float TotalDeadTime_33;
  MR_String Header1Str_34;
  MR_Word Header1_35;
  MR_Word Header2_36;
  MR_String Header2Str_46;
  MR_Word Header3_47;
  MR_Word RevGoalPath_49;
  MR_Word ReportGoalsBefore0_51;
  MR_Word ReportGoalsBefore_52;
  MR_Word ReportParConj0_53;
  MR_Word ReportParConj_54;
  MR_Word ReportGoalsAfter0_55;
  MR_Word ReportGoalsAfter_56;
  MR_String Var_114;
  MR_String Var_117;
  MR_String Var_120;
  MR_String Var_123;
  MR_String Var_126;
  MR_String Var_129;
  MR_String Var_132;
  MR_String Var_135;
  MR_String Var_138;
  MR_String Var_141;
  MR_String Var_144;
  MR_String Var_147;
  MR_String Var_150;
  MR_Integer STATE_VARIABLE_ConjNum_154_154 = ((MR_Integer) ((MR_hl_field(0, CandidateParConjunction_5, (MR_Integer) 2))));
  MR_Word Var_156;
  MR_Word Var_158;
  MR_Word Var_159;
  MR_Integer STATE_VARIABLE_ConjNum_161_161;
  MR_Integer Var_162;
  MR_Word Var_164;
  MR_Word Var_166;
  MR_Word Var_167;
  MR_Integer STATE_VARIABLE_ConjNum_169_169;
  MR_Word Var_172;
  MR_Word Var_174;
  MR_Word Var_175;
  MR_Word Var_177;
  MR_Word Var_178;
  MR_Word Var_179;
  MR_Word Var_180;
  MR_Word Var_181;
  MR_Word Var_182;
  MR_Word Var_183;
  MR_Word Var_184;
  MR_Word Var_185;
  MR_Word Var_186;
  MR_String Var_196;
  MR_String Var_225;
  MR_String Var_227;
  MR_String Var_228;
  MR_String Var_230;
  MR_String Var_231;
  MR_String Var_233;
  MR_String Var_234;
  MR_String Var_236;
  MR_String Var_237;
  MR_String Var_239;
  MR_String Var_240;
  MR_String Var_242;
  MR_String Var_243;
  MR_String Var_245;
  MR_String Var_246;
  MR_String Var_248;
  MR_String Var_249;
  MR_String Var_251;
  MR_String Var_252;
  MR_String Var_254;
  MR_String Var_255;
  MR_String Var_257;
  MR_String Var_258;
  MR_String Var_260;
  MR_String Var_261;
  MR_String Var_263;
  MR_String Var_264;
  MR_Word RevGoalPathPrime_48;

  ParOverheads_26 = mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_get_overheads_1_f_0(ParExecMetrics_16);
  if ((IsDependent_10 == (MR_Word) ((MR_Unsigned) 0U)))
    DependenceString_27 = (MR_String) "no";
  else
  {
    MR_Word Vars_28 = ((MR_Word) ((MR_hl_field(1, IsDependent_10, (MR_Integer) 0))));
    MR_Word VarNames_29;
    MR_String VarsString_30;
    MR_Word Var_57;
    MR_Word Var_59;

    {
      Var_57 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_57, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_4[2]));
      MR_hl_field(0, Var_57, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_report_3_p_0_1));
      MR_hl_field(0, Var_57, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_57, 3) = ((MR_Box) (VarNameTable_4));
    }
    mercury__set__map_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_57, Vars_28, &VarNames_29);
    Var_59 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), VarNames_29);
    VarsString_30 = mercury__string__join_list_2_f_0((MR_String) ", ", Var_59);
    DependenceString_27 = mercury__string__f_43_43_2_f_0((MR_String) "on ", VarsString_30);
  }
  Speedup_31 = mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_get_speedup_1_f_0(ParExecMetrics_16);
  TimeSaving_32 = mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_get_time_saving_1_f_0(ParExecMetrics_16);
  TotalDeadTime_33 = (FirstConjDeadTime_24 + FutureDeadTime_25);
  Var_196 = mercury__string__f_43_43_2_f_0(GoalPathString_7, (MR_String) "\n");
  Header1Str_34 = mercury__string__f_43_43_2_f_0((MR_String) "      Path: ", Var_196);
  Header1_35 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Header1Str_34)));
  if ((MaybePushGoal_8 == (MR_Word) ((MR_Unsigned) 0U)))
    Header2_36 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
  else
  {
    MR_Word PushGoal_37 = ((MR_Word) ((MR_hl_field(1, MaybePushGoal_8, (MR_Integer) 0))));
    MR_String PushGoalPathStr_38 = ((MR_String) ((MR_hl_field(0, PushGoal_37, (MR_Integer) 0))));
    MR_Integer Lo_39 = ((MR_Integer) ((MR_hl_field(0, PushGoal_37, (MR_Integer) 1))));
    MR_Integer Hi_40 = ((MR_Integer) ((MR_hl_field(0, PushGoal_37, (MR_Integer) 2))));
    MR_Word PushedGoalPathStrs_41 = ((MR_Word) ((MR_hl_field(0, PushGoal_37, (MR_Integer) 3))));
    MR_String HeadPushGoalStr_42;
    MR_Word TailPushGoalStrs_45;
    MR_Word Var_82;
    MR_String Var_199;
    MR_String Var_206;
    MR_String Var_208;
    MR_String Var_209;
    MR_String Var_216;
    MR_String Var_218;
    MR_String Var_219;

    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_3[0]), Hi_40, &Var_199);
    Var_206 = mercury__string__f_43_43_2_f_0(Var_199, (MR_String) "\n");
    Var_208 = mercury__string__f_43_43_2_f_0((MR_String) ", hi ", Var_206);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_3[0]), Lo_39, &Var_209);
    Var_216 = mercury__string__f_43_43_2_f_0(Var_209, Var_208);
    Var_218 = mercury__string__f_43_43_2_f_0((MR_String) ", lo ", Var_216);
    Var_219 = mercury__string__f_43_43_2_f_0(PushGoalPathStr_38, Var_218);
    HeadPushGoalStr_42 = mercury__string__f_43_43_2_f_0((MR_String) "      PushGoal: ", Var_219);
    TailPushGoalStrs_45 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_2[7]), PushedGoalPathStrs_41);
    {
      Var_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_82, 0) = ((MR_Box) (HeadPushGoalStr_42));
      MR_hl_field(1, Var_82, 1) = ((MR_Box) (TailPushGoalStrs_45));
    }
    Header2_36 = mercury__cord__from_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_82);
  }
  Var_114 = measurement_units__commas_1_f_0(NumCalls_17);
  Var_117 = measurement_units__two_decimal_fraction_1_f_0(SeqTime_18);
  Var_120 = measurement_units__two_decimal_fraction_1_f_0(ParTime_19);
  Var_123 = measurement_units__two_decimal_fraction_1_f_0(SparkCost_20);
  Var_126 = measurement_units__two_decimal_fraction_1_f_0(BarrierCost_21);
  Var_129 = measurement_units__two_decimal_fraction_1_f_0(SignalsCost_22);
  Var_132 = measurement_units__two_decimal_fraction_1_f_0(WaitsCost_23);
  Var_135 = measurement_units__two_decimal_fraction_1_f_0(ParOverheads_26);
  Var_138 = measurement_units__four_decimal_fraction_1_f_0(Speedup_31);
  Var_141 = measurement_units__two_decimal_fraction_1_f_0(TimeSaving_32);
  Var_144 = measurement_units__two_decimal_fraction_1_f_0(FirstConjDeadTime_24);
  Var_147 = measurement_units__two_decimal_fraction_1_f_0(FutureDeadTime_25);
  Var_150 = measurement_units__two_decimal_fraction_1_f_0(TotalDeadTime_33);
  Var_225 = mercury__string__f_43_43_2_f_0(Var_150, (MR_String) "\n\n");
  Var_227 = mercury__string__f_43_43_2_f_0((MR_String) "\n      Total dead time: ", Var_225);
  Var_228 = mercury__string__f_43_43_2_f_0(Var_147, Var_227);
  Var_230 = mercury__string__f_43_43_2_f_0((MR_String) "\n      Future dead time: ", Var_228);
  Var_231 = mercury__string__f_43_43_2_f_0(Var_144, Var_230);
  Var_233 = mercury__string__f_43_43_2_f_0((MR_String) "\n      First conj dead time: ", Var_231);
  Var_234 = mercury__string__f_43_43_2_f_0(Var_141, Var_233);
  Var_236 = mercury__string__f_43_43_2_f_0((MR_String) "\n      Time saving: ", Var_234);
  Var_237 = mercury__string__f_43_43_2_f_0(Var_138, Var_236);
  Var_239 = mercury__string__f_43_43_2_f_0((MR_String) "\n      Speedup: ", Var_237);
  Var_240 = mercury__string__f_43_43_2_f_0(Var_135, Var_239);
  Var_242 = mercury__string__f_43_43_2_f_0((MR_String) "\n      ParOverheads total: ", Var_240);
  Var_243 = mercury__string__f_43_43_2_f_0(Var_132, Var_242);
  Var_245 = mercury__string__f_43_43_2_f_0((MR_String) "\n      WaitsCost: ", Var_243);
  Var_246 = mercury__string__f_43_43_2_f_0(Var_129, Var_245);
  Var_248 = mercury__string__f_43_43_2_f_0((MR_String) "\n      SignalsCost: ", Var_246);
  Var_249 = mercury__string__f_43_43_2_f_0(Var_126, Var_248);
  Var_251 = mercury__string__f_43_43_2_f_0((MR_String) "\n      BarrierCost: ", Var_249);
  Var_252 = mercury__string__f_43_43_2_f_0(Var_123, Var_251);
  Var_254 = mercury__string__f_43_43_2_f_0((MR_String) "\n      SparkCost: ", Var_252);
  Var_255 = mercury__string__f_43_43_2_f_0(Var_120, Var_254);
  Var_257 = mercury__string__f_43_43_2_f_0((MR_String) "\n      ParTime: ", Var_255);
  Var_258 = mercury__string__f_43_43_2_f_0(Var_117, Var_257);
  Var_260 = mercury__string__f_43_43_2_f_0((MR_String) "\n      SeqTime: ", Var_258);
  Var_261 = mercury__string__f_43_43_2_f_0(Var_114, Var_260);
  Var_263 = mercury__string__f_43_43_2_f_0((MR_String) "\n      NumCalls: ", Var_261);
  Var_264 = mercury__string__f_43_43_2_f_0(DependenceString_27, Var_263);
  Header2Str_46 = mercury__string__f_43_43_2_f_0((MR_String) "      Dependent: ", Var_264);
  Header3_47 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Header2Str_46)));
  succeeded = mdbcomp__goal_path__rev_goal_path_from_string_2_p_0(GoalPathString_7, &RevGoalPathPrime_48);
  if (succeeded)
    RevGoalPath_49 = RevGoalPathPrime_48;
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140mdprof_fb.automatic_parallelism.autopar_reports.create_candidate_parallel_conj_report\'/3", (MR_String) "couldn\'t parse goal path");
      return;
    }
  mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjunction_7_p_0(VarNameTable_4, (MR_Integer) 4, RevGoalPath_49, GoalsBefore_11, GoalsBeforeCost_12, STATE_VARIABLE_ConjNum_154_154, &ReportGoalsBefore0_51);
  Var_156 = message__indent_1_f_0((MR_Integer) 3);
  Var_159 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "Goals before:\n")));
  Var_158 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_159, ReportGoalsBefore0_51);
  ReportGoalsBefore_52 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_156, Var_158);
  Var_162 = mercury__list__length_1_f_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_1[0]), GoalsBefore_11);
  STATE_VARIABLE_ConjNum_161_161 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_ConjNum_154_154 + (MR_Unsigned) Var_162);
  mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjunction_6_p_0(VarNameTable_4, (MR_Integer) 4, RevGoalPath_49, STATE_VARIABLE_ConjNum_161_161, Conjs_13, &ReportParConj0_53);
  Var_164 = message__indent_1_f_0((MR_Integer) 3);
  Var_167 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "Parallel conjunction:\n")));
  Var_166 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_167, ReportParConj0_53);
  ReportParConj_54 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_164, Var_166);
  STATE_VARIABLE_ConjNum_169_169 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_ConjNum_161_161 + (MR_Unsigned) 1);
  mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjunction_7_p_0(VarNameTable_4, (MR_Integer) 4, RevGoalPath_49, GoalsAfter_14, GoalsAfterCost_15, STATE_VARIABLE_ConjNum_169_169, &ReportGoalsAfter0_55);
  Var_172 = message__indent_1_f_0((MR_Integer) 3);
  Var_175 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "Goals after:\n")));
  Var_174 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_175, ReportGoalsAfter0_55);
  ReportGoalsAfter_56 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_172, Var_174);
  Var_181 = message__nl_0_f_0();
  Var_184 = message__nl_0_f_0();
  Var_186 = message__nl_0_f_0();
  Var_185 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ReportGoalsAfter_56, Var_186);
  Var_183 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_184, Var_185);
  Var_182 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ReportParConj_54, Var_183);
  Var_180 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_181, Var_182);
  Var_179 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ReportGoalsBefore_52, Var_180);
  Var_178 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Header3_47, Var_179);
  Var_177 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Header2_36, Var_178);
  *Report_6 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Header1_35, Var_177);
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjunction_7_p_0(
  MR_Word VarNameTable_8,
  MR_Integer Indent_9,
  MR_Word RevGoalPath_10,
  MR_Word Goals_11,
  MR_Float Cost_12,
  MR_Integer FirstConjNum_13,
  MR_Word * STATE_VARIABLE_Report_16)
{
  MR_bool succeeded;
  MR_Word STATE_VARIABLE_Report_17_17;
  MR_Word STATE_VARIABLE_Report_18_18;
  MR_Integer Var_15;

  STATE_VARIABLE_Report_17_17 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
  succeeded = (FirstConjNum_13 == (MR_Integer) 1);
  if (succeeded)
  {
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_String Var_23;
    MR_String Var_27;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_String Var_33;
    MR_String Var_37;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_41;

    Var_20 = message__indent_1_f_0(Indent_9);
    Var_27 = mdbcomp__goal_path__rev_goal_path_to_string_1_f_0(RevGoalPath_10);
    Var_23 = mercury__string__f_43_43_2_f_0((MR_String) "% conjunction: ", Var_27);
    Var_22 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_23)));
    Var_30 = message__nl_indent_1_f_0(Indent_9);
    Var_37 = measurement_units__two_decimal_fraction_1_f_0(Cost_12);
    Var_33 = mercury__string__f_43_43_2_f_0((MR_String) "% Cost: ", Var_37);
    Var_32 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_33)));
    Var_40 = message__nl_0_f_0();
    Var_41 = message__nl_0_f_0();
    Var_39 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_40, Var_41);
    Var_31 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_32, Var_39);
    Var_29 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_30, Var_31);
    Var_21 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_22, Var_29);
    Var_19 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_20, Var_21);
    STATE_VARIABLE_Report_18_18 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_Report_17_17, Var_19);
  }
  else
    STATE_VARIABLE_Report_18_18 = STATE_VARIABLE_Report_17_17;
  mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjuncts_8_p_0(VarNameTable_8, Indent_9, RevGoalPath_10, Goals_11, FirstConjNum_13, &Var_15, STATE_VARIABLE_Report_18_18, STATE_VARIABLE_Report_16);
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjunction_6_p_0(
  MR_Word VarNameTable_7,
  MR_Integer Indent_8,
  MR_Word RevGoalPath_9,
  MR_Integer ConjNum_10,
  MR_Word Conjs_11,
  MR_Word * STATE_VARIABLE_Report_14)
{
  MR_Word IndentStr_13;
  MR_Word STATE_VARIABLE_Report_15_15;
  MR_Word Var_16;
  MR_Word Var_18;
  MR_Word Var_21;

  IndentStr_13 = message__indent_1_f_0(Indent_8);
  Var_16 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "(\n")));
  STATE_VARIABLE_Report_15_15 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), IndentStr_13, Var_16);
  {
    Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_21, 0) = ((MR_Box) (ConjNum_10));
  }
  {
    Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_18, 0) = ((MR_Box) (RevGoalPath_9));
    MR_hl_field(1, Var_18, 1) = ((MR_Box) (Var_21));
  }
  mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjuncts_7_p_0(VarNameTable_7, Indent_8, Var_18, (MR_Integer) 1, Conjs_11, STATE_VARIABLE_Report_15_15, STATE_VARIABLE_Report_14);
}

static MR_Box MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjuncts_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Float conv1_LambdaHeadVar__3_51;

  conv1_LambdaHeadVar__3_51 = mdprof_fb__automatic_parallelism__autopar_reports__IntroducedFrom__func__format_parallel_conjuncts__340__1_2_f_0(((MR_Word) (wrapper_arg_1)), MR_unbox_float(wrapper_arg_2));
  wrapper_arg_3 = MR_box_float(conv1_LambdaHeadVar__3_51);
  return wrapper_arg_3;
}

static MR_Box MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjuncts_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_74;

  conv0_HeadVar__2_74 = mdprof_fb__automatic_parallelism__autopar_reports__IntroducedFrom__func__format_parallel_conjuncts__336__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_74));
  return wrapper_arg_2;
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__format_parallel_conjuncts_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer Indent_2,
  MR_Word HeadVar__3_3,
  MR_Integer HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_Report_0_6,
  MR_Word * STATE_VARIABLE_Report_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word IndentStr_13;
      MR_Word Var_17;

      IndentStr_13 = message__indent_1_f_0(Indent_2);
      Var_17 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_Report_0_6, IndentStr_13);
      *STATE_VARIABLE_Report_7 = mercury__cord__snoc_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_17, ((MR_Box) ((MR_String) ")\n")));
    }
    else
    {
      MR_Word Conj_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 0))));
      MR_Word Conjs_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 1))));
      MR_Word Goals_26 = (MR_Word) (Conj_23);
      MR_Word ConjReport_30;
      MR_Integer ConjNum_38;
      MR_Word STATE_VARIABLE_Report_58_58;
      MR_Word STATE_VARIABLE_Report_59_59;
      MR_Integer next_value_of_HeadVar__4_4;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_STATE_VARIABLE_Report_0_6;

      if ((Goals_26 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140mdprof_fb.automatic_parallelism.autopar_reports.format_parallel_conjuncts\'/7", (MR_String) "empty conjunct in parallel conjunction");
          return;
        }
      else
      {
        MR_Word Goal_27 = ((MR_Word) ((MR_hl_field(1, Goals_26, (MR_Integer) 0))));
        MR_Word GoalsTail_28 = ((MR_Word) ((MR_hl_field(1, Goals_26, (MR_Integer) 1))));
        MR_Word RevInnerGoalPath_29;
        MR_Word Var_43;

        {
          Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_43, 0) = ((MR_Box) (HeadVar__4_4));
        }
        {
          RevInnerGoalPath_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, RevInnerGoalPath_29, 0) = ((MR_Box) (HeadVar__3_3));
          MR_hl_field(1, RevInnerGoalPath_29, 1) = ((MR_Box) (Var_43));
        }
        if ((GoalsTail_28 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Var_44;
          MR_Integer Var_45;

          {
            Var_44 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_44, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_2[5]));
            MR_hl_field(0, Var_44, 1) = ((MR_Box) (HeadVar__1_1));
          }
          Var_45 = (MR_Integer) ((MR_Unsigned) Indent_2 + (MR_Unsigned) 1);
          program_representation_utils__print_goal_to_strings_5_p_0((MR_Word) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0), (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_1[4]), Var_44, Var_45, RevInnerGoalPath_29, Goal_27, &ConjReport_30);
        }
        else
        {
          MR_Float Cost_33;
          MR_Integer Var_55;
          MR_Word STATE_VARIABLE_Report_17_82;
          MR_Word STATE_VARIABLE_Report_18_83;
          MR_Box conv2_Cost_33;
          MR_Integer Var_81;

          conv2_Cost_33 = mercury__list__foldl_3_f_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_float_0), (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_2[6]), Goals_26, MR_box_float((MR_Float) 0.0000000000000000));
          Cost_33 = MR_unbox_float(conv2_Cost_33);
          Var_55 = (MR_Integer) ((MR_Unsigned) Indent_2 + (MR_Unsigned) 1);
          STATE_VARIABLE_Report_17_82 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
          succeeded = MR_TRUE;
          if (succeeded)
          {
            MR_Word Var_84;
            MR_Word Var_85;
            MR_Word Var_86;
            MR_Word Var_87;
            MR_String Var_88;
            MR_String Var_92;
            MR_Word Var_94;
            MR_Word Var_95;
            MR_Word Var_96;
            MR_Word Var_97;
            MR_String Var_98;
            MR_String Var_102;
            MR_Word Var_104;
            MR_Word Var_105;
            MR_Word Var_106;

            Var_85 = message__indent_1_f_0(Var_55);
            Var_92 = mdbcomp__goal_path__rev_goal_path_to_string_1_f_0(RevInnerGoalPath_29);
            Var_88 = mercury__string__f_43_43_2_f_0((MR_String) "% conjunction: ", Var_92);
            Var_87 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_88)));
            Var_95 = message__nl_indent_1_f_0(Var_55);
            Var_102 = measurement_units__two_decimal_fraction_1_f_0(Cost_33);
            Var_98 = mercury__string__f_43_43_2_f_0((MR_String) "% Cost: ", Var_102);
            Var_97 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_98)));
            Var_105 = message__nl_0_f_0();
            Var_106 = message__nl_0_f_0();
            Var_104 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_105, Var_106);
            Var_96 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_97, Var_104);
            Var_94 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_95, Var_96);
            Var_86 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_87, Var_94);
            Var_84 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_85, Var_86);
            STATE_VARIABLE_Report_18_83 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_Report_17_82, Var_84);
          }
          else
            STATE_VARIABLE_Report_18_83 = STATE_VARIABLE_Report_17_82;
          mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjuncts_8_p_0(HeadVar__1_1, Var_55, RevInnerGoalPath_29, Goals_26, (MR_Integer) 1, &Var_81, STATE_VARIABLE_Report_18_83, &ConjReport_30);
        }
      }
      STATE_VARIABLE_Report_58_58 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_Report_0_6, ConjReport_30);
      if ((Conjs_24 == (MR_Word) ((MR_Unsigned) 0U)))
        STATE_VARIABLE_Report_59_59 = STATE_VARIABLE_Report_58_58;
      else
      {
        MR_Word Var_60;
        MR_Word Var_61;

        Var_61 = message__indent_1_f_0(Indent_2);
        Var_60 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_Report_58_58, Var_61);
        STATE_VARIABLE_Report_59_59 = mercury__cord__snoc_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_60, ((MR_Box) ((MR_String) "&\n")));
      }
      ConjNum_38 = (MR_Integer) ((MR_Unsigned) HeadVar__4_4 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = ConjNum_38;
      next_value_of_HeadVar__5_5 = Conjs_24;
      next_value_of_STATE_VARIABLE_Report_0_6 = STATE_VARIABLE_Report_59_59;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      STATE_VARIABLE_Report_0_6 = next_value_of_STATE_VARIABLE_Report_0_6;
      continue;
    }
    break;
  }
}

static MR_Box MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjuncts_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_45;

  conv0_HeadVar__2_45 = mdprof_fb__automatic_parallelism__autopar_reports__IntroducedFrom__func__format_sequential_conjuncts__388__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_45));
  return wrapper_arg_2;
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__format_sequential_conjuncts_8_p_0(
  MR_Word VarNameTable_1,
  MR_Integer Indent_2,
  MR_Word RevGoalPath_3,
  MR_Word HeadVar__4_4,
  MR_Integer STATE_VARIABLE_ConjNum_0_5,
  MR_Integer * STATE_VARIABLE_ConjNum_6,
  MR_Word STATE_VARIABLE_Report_0_7,
  MR_Word * STATE_VARIABLE_Report_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Report_8 = STATE_VARIABLE_Report_0_7;
      *STATE_VARIABLE_ConjNum_6 = STATE_VARIABLE_ConjNum_0_5;
    }
    else
    {
      MR_Word Conj_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
      MR_Word Conjs_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
      MR_Word ConjReport_25;
      MR_Word Var_32;
      MR_Word Var_33;
      MR_Word Var_35;
      MR_Word STATE_VARIABLE_Report_36_36;
      MR_Integer STATE_VARIABLE_ConjNum_37_37;

      {
        Var_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_32, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_2[4]));
        MR_hl_field(0, Var_32, 1) = ((MR_Box) (VarNameTable_1));
      }
      {
        Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_35, 0) = ((MR_Box) (STATE_VARIABLE_ConjNum_0_5));
      }
      {
        Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_33, 0) = ((MR_Box) (RevGoalPath_3));
        MR_hl_field(1, Var_33, 1) = ((MR_Box) (Var_35));
      }
      program_representation_utils__print_goal_to_strings_5_p_0((MR_Word) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0), (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_1[4]), Var_32, Indent_2, Var_33, Conj_21, &ConjReport_25);
      STATE_VARIABLE_Report_36_36 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_Report_0_7, ConjReport_25);
      STATE_VARIABLE_ConjNum_37_37 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_ConjNum_0_5 + (MR_Unsigned) 1);
      if ((Conjs_22 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *STATE_VARIABLE_ConjNum_6 = STATE_VARIABLE_ConjNum_37_37;
        *STATE_VARIABLE_Report_8 = STATE_VARIABLE_Report_36_36;
      }
      else
      {
        MR_Word STATE_VARIABLE_Report_39_39;
        MR_Word Var_40;
        MR_Word Var_41;
        MR_Word Var_42;
        MR_Word next_value_of_HeadVar__4_4;
        MR_Integer next_value_of_STATE_VARIABLE_ConjNum_0_5;
        MR_Word next_value_of_STATE_VARIABLE_Report_0_7;

        Var_41 = message__indent_1_f_0(Indent_2);
        Var_42 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) ",\n")));
        Var_40 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_41, Var_42);
        STATE_VARIABLE_Report_39_39 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_Report_36_36, Var_40);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__4_4 = Conjs_22;
        next_value_of_STATE_VARIABLE_ConjNum_0_5 = STATE_VARIABLE_ConjNum_37_37;
        next_value_of_STATE_VARIABLE_Report_0_7 = STATE_VARIABLE_Report_39_39;
        HeadVar__4_4 = next_value_of_HeadVar__4_4;
        STATE_VARIABLE_ConjNum_0_5 = next_value_of_STATE_VARIABLE_ConjNum_0_5;
        STATE_VARIABLE_Report_0_7 = next_value_of_STATE_VARIABLE_Report_0_7;
        continue;
      }
    }
    break;
  }
}

void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__print_feedback_report_4_p_0(
  MR_Word OutputStream_5,
  MR_Word FeedbackInfo_6)
{
  MR_String ProfiledProgramName_8;
  MR_Word MaybeCandidateParConjs_9;
  MR_Word Reports_13;
  MR_String Report_14;
  MR_Word STATE_VARIABLE_RevReports_20_20;

  mdbcomp__feedback__get_all_feedback_info_3_p_0(FeedbackInfo_6, &ProfiledProgramName_8, &MaybeCandidateParConjs_9);
  if ((MaybeCandidateParConjs_9 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_RevReports_20_20 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word CandidateParConjs_11 = ((MR_Word) ((MR_hl_field(1, MaybeCandidateParConjs_9, (MR_Integer) 0))));
    MR_String CandidateParConjsReport_12;

    mdprof_fb__automatic_parallelism__autopar_reports__create_feedback_autopar_report_2_p_0(CandidateParConjs_11, &CandidateParConjsReport_12);
    {
      STATE_VARIABLE_RevReports_20_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_RevReports_20_20, 0) = ((MR_Box) (CandidateParConjsReport_12));
      MR_hl_field(1, STATE_VARIABLE_RevReports_20_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_RevReports_20_20, &Reports_13);
  if ((Reports_13 == (MR_Word) ((MR_Unsigned) 0U)))
    Report_14 = (MR_String) "no report available.\n";
  else
    mercury__string__append_list_2_p_0(Reports_13, &Report_14);
  mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) "Feedback report for ");
  mercury__io__write_string_4_p_0(OutputStream_5, ProfiledProgramName_8);
  mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) ":\n\n");
  mercury__io__write_string_4_p_0(OutputStream_5, Report_14);
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__create_feedback_autopar_report_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_Report_5;

  mdprof_fb__automatic_parallelism__autopar_reports__create_candidate_parallel_conj_proc_report_2_p_0(((MR_Word) (wrapper_arg_1)), &conv2_Report_5);
  *wrapper_arg_2 = ((MR_Box) (conv2_Report_5));
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__create_feedback_autopar_report_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Integer conv0_HeadVar__3_102;

  mdprof_fb__automatic_parallelism__autopar_reports__IntroducedFrom__pred__create_feedback_autopar_report__92__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv0_HeadVar__3_102);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_102));
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__create_feedback_autopar_report_2_p_0(
  MR_Word CandidateParConjs_3,
  MR_String * Report_4)
{
  MR_Word Parameters_5 = ((MR_Word) ((MR_hl_field(0, CandidateParConjs_3, (MR_Integer) 0))));
  MR_Word ProcConjs_6 = ((MR_Word) ((MR_hl_field(0, CandidateParConjs_3, (MR_Integer) 1))));
  MR_Integer NumProcConjs_7;
  MR_Integer NumConjs_8;
  MR_Float DesiredParallelism_9;
  MR_Word IntermoduleVarUse_10;
  MR_Integer SparkingCost_11;
  MR_Integer SparkingDelay_12;
  MR_Integer BarrierCost_13;
  MR_Integer SignalCost_14;
  MR_Integer WaitCost_15;
  MR_Integer ContextWakeupDelay_16;
  MR_Integer CliqueThreshold_17;
  MR_Integer CallSiteThreshold_18;
  MR_Float SpeedupThreshold_19;
  MR_Word ParalleliseDepConjs_20;
  MR_Word AlgForFindingBestPar_21;
  MR_String AlgForFindingBestParStr_22;
  MR_Word ReportHeader_23;
  MR_String ParalleliseDepConjsStr_24;
  MR_Word ReportConjs_26;
  MR_String Var_29;
  MR_String Var_67;
  MR_Word Var_96;
  MR_Word Var_97;
  MR_Word Var_98;
  MR_String Var_111;
  MR_String Var_118;
  MR_String Var_120;
  MR_String Var_121;
  MR_String Var_128;
  MR_String Var_130;
  MR_String Var_131;
  MR_String Var_133;
  MR_String Var_134;
  MR_String Var_136;
  MR_String Var_137;
  MR_String Var_145;
  MR_String Var_147;
  MR_String Var_148;
  MR_String Var_155;
  MR_String Var_157;
  MR_String Var_158;
  MR_String Var_165;
  MR_String Var_167;
  MR_String Var_168;
  MR_String Var_175;
  MR_String Var_177;
  MR_String Var_178;
  MR_String Var_185;
  MR_String Var_187;
  MR_String Var_188;
  MR_String Var_195;
  MR_String Var_197;
  MR_String Var_198;
  MR_String Var_205;
  MR_String Var_207;
  MR_String Var_208;
  MR_String Var_215;
  MR_String Var_217;
  MR_String Var_218;
  MR_String Var_225;
  MR_String Var_227;
  MR_String Var_228;
  MR_String Var_230;
  MR_String Var_231;
  MR_String Var_239;
  MR_Box conv1_NumConjs_8;

  NumProcConjs_7 = mercury__list__length_1_f_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_2[0]), ProcConjs_6);
  mercury__list__foldl_4_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_2[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_2[2]), ProcConjs_6, ((MR_Box) ((MR_Integer) 0)), &conv1_NumConjs_8);
  NumConjs_8 = ((MR_Integer) (conv1_NumConjs_8));
  DesiredParallelism_9 = MR_unbox_float((MR_hl_field(0, Parameters_5, (MR_Integer) 0)));
  IntermoduleVarUse_10 = ((MR_Unsigned) ((MR_hl_field(0, Parameters_5, (MR_Integer) 1))) & (MR_Integer) 1);
  SparkingCost_11 = ((MR_Integer) ((MR_hl_field(0, Parameters_5, (MR_Integer) 2))));
  SparkingDelay_12 = ((MR_Integer) ((MR_hl_field(0, Parameters_5, (MR_Integer) 3))));
  BarrierCost_13 = ((MR_Integer) ((MR_hl_field(0, Parameters_5, (MR_Integer) 4))));
  SignalCost_14 = ((MR_Integer) ((MR_hl_field(0, Parameters_5, (MR_Integer) 5))));
  WaitCost_15 = ((MR_Integer) ((MR_hl_field(0, Parameters_5, (MR_Integer) 6))));
  ContextWakeupDelay_16 = ((MR_Integer) ((MR_hl_field(0, Parameters_5, (MR_Integer) 7))));
  CliqueThreshold_17 = ((MR_Integer) ((MR_hl_field(0, Parameters_5, (MR_Integer) 8))));
  CallSiteThreshold_18 = ((MR_Integer) ((MR_hl_field(0, Parameters_5, (MR_Integer) 9))));
  SpeedupThreshold_19 = MR_unbox_float((MR_hl_field(0, Parameters_5, (MR_Integer) 10)));
  ParalleliseDepConjs_20 = ((MR_Word) ((MR_hl_field(0, Parameters_5, (MR_Integer) 11))));
  AlgForFindingBestPar_21 = ((MR_Word) ((MR_hl_field(0, Parameters_5, (MR_Integer) 12))));
  AlgForFindingBestParStr_22 = mdprof_fb__automatic_parallelism__autopar_reports__alg_for_finding_best_par_to_string_1_f_0(AlgForFindingBestPar_21);
  Var_67 = mercury__string__string_1_f_0((MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), ((MR_Box) (IntermoduleVarUse_10)));
  if ((ParalleliseDepConjs_20 == (MR_Word) ((MR_Unsigned) 0U)))
    ParalleliseDepConjsStr_24 = (MR_String) "no";
  else
  {
    MR_Word SpeedupAlg_25 = ((MR_Unsigned) ((MR_hl_field(1, ParalleliseDepConjs_20, (MR_Integer) 0))) & (MR_Integer) 1);

    switch (SpeedupAlg_25) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        ParalleliseDepConjsStr_24 = (MR_String) "yes, use overlap calculation";
        break;
      case (MR_Integer) 0:
        ParalleliseDepConjsStr_24 = (MR_String) "yes, pretend they\'re independent";
        break;
    }
  }
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_3[0]), NumConjs_8, &Var_111);
  Var_118 = mercury__string__f_43_43_2_f_0(Var_111, (MR_String) "\n    Parallel conjunctions:\n\n");
  Var_120 = mercury__string__f_43_43_2_f_0((MR_String) "\n    # of par conjunctions:     ", Var_118);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_3[0]), NumProcConjs_7, &Var_121);
  Var_128 = mercury__string__f_43_43_2_f_0(Var_121, Var_120);
  Var_130 = mercury__string__f_43_43_2_f_0((MR_String) "\n    # of par procs with conjs: ", Var_128);
  Var_131 = mercury__string__f_43_43_2_f_0(AlgForFindingBestParStr_22, Var_130);
  Var_133 = mercury__string__f_43_43_2_f_0((MR_String) "\n    BestParAlgorithm:          ", Var_131);
  Var_134 = mercury__string__f_43_43_2_f_0(ParalleliseDepConjsStr_24, Var_133);
  Var_136 = mercury__string__f_43_43_2_f_0((MR_String) "\n    Dependent conjs:           ", Var_134);
  mercury__string__format__format_float_component_nowidth_noprec_4_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_3[0]), (MR_Integer) 2, SpeedupThreshold_19, &Var_137);
  Var_145 = mercury__string__f_43_43_2_f_0(Var_137, Var_136);
  Var_147 = mercury__string__f_43_43_2_f_0((MR_String) "\n    Speedup threshold:         ", Var_145);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_3[0]), CallSiteThreshold_18, &Var_148);
  Var_155 = mercury__string__f_43_43_2_f_0(Var_148, Var_147);
  Var_157 = mercury__string__f_43_43_2_f_0((MR_String) "\n    Call site threshold:       ", Var_155);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_3[0]), CliqueThreshold_17, &Var_158);
  Var_165 = mercury__string__f_43_43_2_f_0(Var_158, Var_157);
  Var_167 = mercury__string__f_43_43_2_f_0((MR_String) "\n    Clique threshold:          ", Var_165);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_3[0]), ContextWakeupDelay_16, &Var_168);
  Var_175 = mercury__string__f_43_43_2_f_0(Var_168, Var_167);
  Var_177 = mercury__string__f_43_43_2_f_0((MR_String) "\n    Context wakeup delay:      ", Var_175);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_3[0]), WaitCost_15, &Var_178);
  Var_185 = mercury__string__f_43_43_2_f_0(Var_178, Var_177);
  Var_187 = mercury__string__f_43_43_2_f_0((MR_String) "\n    Future wait cost:          ", Var_185);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_3[0]), SignalCost_14, &Var_188);
  Var_195 = mercury__string__f_43_43_2_f_0(Var_188, Var_187);
  Var_197 = mercury__string__f_43_43_2_f_0((MR_String) "\n    Future signal cost:        ", Var_195);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_3[0]), BarrierCost_13, &Var_198);
  Var_205 = mercury__string__f_43_43_2_f_0(Var_198, Var_197);
  Var_207 = mercury__string__f_43_43_2_f_0((MR_String) "\n    Barrier cost:              ", Var_205);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_3[0]), SparkingDelay_12, &Var_208);
  Var_215 = mercury__string__f_43_43_2_f_0(Var_208, Var_207);
  Var_217 = mercury__string__f_43_43_2_f_0((MR_String) "\n    Sparking delay:            ", Var_215);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_3[0]), SparkingCost_11, &Var_218);
  Var_225 = mercury__string__f_43_43_2_f_0(Var_218, Var_217);
  Var_227 = mercury__string__f_43_43_2_f_0((MR_String) "\n    Sparking cost:             ", Var_225);
  Var_228 = mercury__string__f_43_43_2_f_0(Var_67, Var_227);
  Var_230 = mercury__string__f_43_43_2_f_0((MR_String) "\n    Intermodule var use:       ", Var_228);
  mercury__string__format__format_float_component_nowidth_noprec_4_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_3[0]), (MR_Integer) 2, DesiredParallelism_9, &Var_231);
  Var_239 = mercury__string__f_43_43_2_f_0(Var_231, Var_230);
  Var_29 = mercury__string__f_43_43_2_f_0((MR_String) "  Candidate parallel conjunctions:\n    Desired parallelism:       ", Var_239);
  ReportHeader_23 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_29)));
  mercury__list__map_3_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_2[0]), (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_1[2]), (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_2[3]), ProcConjs_6, &ReportConjs_26);
  Var_98 = mercury__cord__cord_list_to_cord_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ReportConjs_26);
  Var_97 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ReportHeader_23, Var_98);
  Var_96 = mercury__cord__list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_97);
  *Report_4 = mercury__string__append_list_1_f_0(Var_96);
}

static MR_String MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__alg_for_finding_best_par_to_string_1_f_0(
  MR_Word Alg_3)
{
  MR_String Str_4;

  switch (MR_tag((MR_Word) Alg_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Alg_3)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          Str_4 = (MR_String) "complete";
          break;
        case (MR_Integer) 1:
          Str_4 = (MR_String) "greedy";
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Integer N_5 = ((MR_Integer) ((MR_hl_field(1, Alg_3, (MR_Integer) 0))));
        MR_String Var_26;
        MR_String Var_33;

        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_3[0]), N_5, &Var_26);
        Var_33 = mercury__string__f_43_43_2_f_0(Var_26, (MR_String) ")");
        Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "complete-branches(", Var_33);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Integer N_14 = ((MR_Integer) ((MR_hl_field(2, Alg_3, (MR_Integer) 0))));
        MR_String Var_16;
        MR_String Var_23;

        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_reports_scalar_common_3[0]), N_14, &Var_16);
        Var_23 = mercury__string__f_43_43_2_f_0(Var_16, (MR_String) ")");
        Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "complete-size(", Var_23);
      }
      break;
  }
  return Str_4;
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  mdprof_fb__automatic_parallelism__autopar_reports__ClassMethod_for_program_representation_utils__goal_annotation____mdbcomp__feedback__automatic_parallelism__pard_goal_annotation__arity0______program_representation_utils__print_goal_annotation_to_strings_3_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
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

// Ensure everything is compiled with the same grade.
const char *mercury__mdprof_fb__automatic_parallelism__autopar_reports__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module mdprof_fb.automatic_parallelism.autopar_reports.
