/*
** Automatically generated from `test_grades.m'
** by the Mercury compiler,
** version rotd-2025-04-20
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


// :- module test_grades.
// :- implementation.

/*
INIT mercury__test_grades__init
ENDINIT
*/

#include "test_grades.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "float.mih"
#include "grade_lib.mih"
#include "int.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "one_or_more.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
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
#include "univ.mih"
#include "var_value_names.mih"
#include "grade_lib.grade_setup.mih"
#include "grade_lib.grade_solver.mih"
#include "grade_lib.grade_spec.mih"
#include "grade_lib.grade_state.mih"
#include "grade_lib.grade_string.mih"
#include "grade_lib.grade_structure.mih"
#include "grade_lib.grade_vars.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct2 test_grades__tree234__pti_tree234_2__plain_grade_lib__grade_spec__type_ctor_info_solver_var_id_0__plain_grade_lib__grade_state__type_ctor_info_solver_var_0;

static const MR_FA_TypeInfo_Struct1 test_grades__list__ti_list_1grade_lib__grade_solver__type_ctor_info_installed_grade_0;

static const MR_PseudoTypeInfo test_grades__test_grades__field_types_installed_grade_set_0_0[2];

static const MR_ConstString test_grades__test_grades__field_names_installed_grade_set_0_0[2];

static const MR_DuFunctorDesc test_grades__test_grades__du_functor_desc_installed_grade_set_0_0;

static const MR_DuFunctorDescPtr test_grades__test_grades__du_stag_ordered_installed_grade_set_0_0[1];

static const MR_DuPtagLayout test_grades__test_grades__du_ptag_ordered_installed_grade_set_0[1];

static const MR_DuFunctorDescPtr test_grades__test_grades__du_name_ordered_installed_grade_set_0[1];

static const MR_Integer test_grades__test_grades__functor_number_map_installed_grade_set_0[1];

static const MR_PseudoTypeInfo test_grades__test_grades__field_types_solve_count_stats_0_0[4];

static const MR_ConstString test_grades__test_grades__field_names_solve_count_stats_0_0[4];

static const MR_DuFunctorDesc test_grades__test_grades__du_functor_desc_solve_count_stats_0_0;

static const MR_DuFunctorDescPtr test_grades__test_grades__du_stag_ordered_solve_count_stats_0_0[1];

static const MR_DuPtagLayout test_grades__test_grades__du_ptag_ordered_solve_count_stats_0[1];

static const MR_DuFunctorDescPtr test_grades__test_grades__du_name_ordered_solve_count_stats_0[1];

static const MR_Integer test_grades__test_grades__functor_number_map_solve_count_stats_0[1];

static const MR_PseudoTypeInfo test_grades__test_grades__field_types_test_component_0_0[2];

static const MR_ConstString test_grades__test_grades__field_names_test_component_0_0[2];

static const MR_DuArgLocn test_grades__test_grades__field_locns_test_component_0_0[2];

static const MR_DuFunctorDesc test_grades__test_grades__du_functor_desc_test_component_0_0;

static const MR_DuFunctorDescPtr test_grades__test_grades__du_stag_ordered_test_component_0_0[1];

static const MR_DuPtagLayout test_grades__test_grades__du_ptag_ordered_test_component_0[1];

static const MR_DuFunctorDescPtr test_grades__test_grades__du_name_ordered_test_component_0[1];

static const MR_Integer test_grades__test_grades__functor_number_map_test_component_0[1];

static const MR_FA_TypeInfo_Struct1 test_grades__list__ti_list_1grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0;

static const MR_PseudoTypeInfo test_grades__test_grades__field_types_test_set_component_0_0[2];

static const MR_ConstString test_grades__test_grades__field_names_test_set_component_0_0[2];

static const MR_DuArgLocn test_grades__test_grades__field_locns_test_set_component_0_0[2];

static const MR_DuFunctorDesc test_grades__test_grades__du_functor_desc_test_set_component_0_0;

static const MR_DuFunctorDescPtr test_grades__test_grades__du_stag_ordered_test_set_component_0_0[1];

static const MR_DuPtagLayout test_grades__test_grades__du_ptag_ordered_test_set_component_0[1];

static const MR_DuFunctorDescPtr test_grades__test_grades__du_name_ordered_test_set_component_0[1];

static const MR_Integer test_grades__test_grades__functor_number_map_test_set_component_0[1];

static const MR_FA_TypeInfo_Struct1 test_grades__list__ti_list_1test_grades__type_ctor_info_test_set_component_0;

static const MR_FA_TypeInfo_Struct1 test_grades__cord__ti_cord_1test_grades__type_ctor_info_test_component_0;

static void MR_CALL 
test_grades____Compare____test_spec_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
test_grades____Unify____test_spec_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
test_grades____Compare____test_set_spec_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
test_grades____Unify____test_set_spec_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
test_grades____Compare____test_set_component_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
test_grades____Unify____test_set_component_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
test_grades____Compare____test_component_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
test_grades____Unify____test_component_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
test_grades____Compare____solve_count_stats_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
test_grades____Unify____solve_count_stats_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
test_grades____Compare____installed_grade_set_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
test_grades____Unify____installed_grade_set_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_String MR_CALL 
test_grades__test_component_to_string_2_f_0(
  MR_String Prefix_4,
  MR_Word TestComponent_5);

static void MR_CALL 
test_grades__run_installed_grade_set_test_7_p_0(
  MR_Word OutStream_8,
  MR_Word SolverInfo_9,
  MR_Word InstalledSet_10,
  MR_Word STATE_VARIABLE_RelSolveCountStats_0_23,
  MR_Word * STATE_VARIABLE_RelSolveCountStats_24);

static void MR_CALL 
test_grades__run_alternatives_for_var_13_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word HeadVar__7_7,
  MR_Word STATE_VARIABLE_AbsSolveCountStats_0_8,
  MR_Word * STATE_VARIABLE_AbsSolveCountStats_9,
  MR_Word STATE_VARIABLE_RelSolveCountStats_0_10,
  MR_Word * STATE_VARIABLE_RelSolveCountStats_11);

static void MR_CALL 
test_grades__run_test_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_Box MR_CALL 
test_grades__run_test_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
test_grades__run_test_10_p_0(
  MR_Word OutStream_11,
  MR_Word SolverInfo0_12,
  MR_Word InstalledSets_13,
  MR_Word TestSpec_14,
  MR_Word STATE_VARIABLE_AbsSolveCountStats_0_33,
  MR_Word * STATE_VARIABLE_AbsSolveCountStats_34,
  MR_Word STATE_VARIABLE_RelSolveCountStats_0_35,
  MR_Word * STATE_VARIABLE_RelSolveCountStats_36);

static MR_Word MR_CALL 
test_grades__llds_test_set_spec_0_f_0(void);

static MR_Word MR_CALL 
test_grades__broad_test_set_spec_0_f_0(void);

static void MR_CALL 
test_grades__print_solve_count_stats_5_p_0(
  MR_Word OutStream_6,
  MR_String Msg_7,
  MR_Word SolveCountStats_8);

static void MR_CALL 
test_grades__parse_installed_grade_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
test_grades__parse_installed_grade_3_p_0(
  MR_Word SolverInfo0_4,
  MR_String GradeStr_5,
  MR_Word * InstalledGrade_6);

static MR_bool MR_CALL 
test_grades____Unify____installed_grade_set_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
test_grades____Compare____installed_grade_set_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
test_grades____Unify____solve_count_stats_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
test_grades____Compare____solve_count_stats_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
test_grades____Unify____test_component_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
test_grades____Compare____test_component_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
test_grades____Unify____test_set_component_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
test_grades____Compare____test_set_component_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
test_grades____Unify____test_set_spec_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
test_grades____Compare____test_set_spec_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
test_grades____Unify____test_spec_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
test_grades____Compare____test_spec_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box test_grades_scalar_common_1[1][3];

static /* final */ const MR_Box test_grades_scalar_common_2[47][2];

static /* final */ const MR_Box test_grades_scalar_common_3[3][1];

static /* final */ const MR_Box test_grades_scalar_common_4[3][4];

static /* final */ const MR_Box test_grades_scalar_common_5[1][8];

static /* final */ const MR_Box test_grades_scalar_common_6[1][6];

static /* final */ const MR_Box test_grades_scalar_common_7[1][10];




static /* final */ const MR_Box test_grades_scalar_common_1[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0)),
    ((MR_Box) (&grade_lib__grade_state__grade_lib__grade_state__type_ctor_info_solver_var_0))
  },
};

static /* final */ const MR_Box test_grades_scalar_common_2[47][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&grade_lib__grade_solver__grade_lib__grade_solver__type_ctor_info_installed_grade_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&test_grades__test_grades__type_ctor_info_test_set_component_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&test_grades__test_grades__type_ctor_info_test_component_0))
  },
  /* row   4 */
  {
    ((MR_Box) ((MR_Integer) 75)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   5 */
  {
    ((MR_Box) ((MR_Integer) 74)),
    ((MR_Box) (MR_mkword(1, &test_grades_scalar_common_2[4])))
  },
  /* row   6 */
  {
    (MR_Box) ((MR_Unsigned) 28U),
    ((MR_Box) (MR_mkword(1, &test_grades_scalar_common_2[5])))
  },
  /* row   7 */
  {
    ((MR_Box) (&test_grades_scalar_common_2[6])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   8 */
  {
    ((MR_Box) ((MR_Integer) 63)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   9 */
  {
    ((MR_Box) ((MR_Integer) 62)),
    ((MR_Box) (MR_mkword(1, &test_grades_scalar_common_2[8])))
  },
  /* row  10 */
  {
    (MR_Box) ((MR_Unsigned) 22U),
    ((MR_Box) (MR_mkword(1, &test_grades_scalar_common_2[9])))
  },
  /* row  11 */
  {
    ((MR_Box) (&test_grades_scalar_common_2[10])),
    ((MR_Box) (MR_mkword(1, &test_grades_scalar_common_2[7])))
  },
  /* row  12 */
  {
    ((MR_Box) ((MR_Integer) 39)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  13 */
  {
    ((MR_Box) ((MR_Integer) 38)),
    ((MR_Box) (MR_mkword(1, &test_grades_scalar_common_2[12])))
  },
  /* row  14 */
  {
    ((MR_Box) ((MR_Integer) 37)),
    ((MR_Box) (MR_mkword(1, &test_grades_scalar_common_2[13])))
  },
  /* row  15 */
  {
    (MR_Box) ((MR_Unsigned) 13U),
    ((MR_Box) (MR_mkword(1, &test_grades_scalar_common_2[14])))
  },
  /* row  16 */
  {
    ((MR_Box) (&test_grades_scalar_common_2[15])),
    ((MR_Box) (MR_mkword(1, &test_grades_scalar_common_2[11])))
  },
  /* row  17 */
  {
    ((MR_Box) ((MR_Integer) 31)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  18 */
  {
    ((MR_Box) ((MR_Integer) 30)),
    ((MR_Box) (MR_mkword(1, &test_grades_scalar_common_2[17])))
  },
  /* row  19 */
  {
    (MR_Box) ((MR_Unsigned) 11U),
    ((MR_Box) (MR_mkword(1, &test_grades_scalar_common_2[18])))
  },
  /* row  20 */
  {
    ((MR_Box) (&test_grades_scalar_common_2[19])),
    ((MR_Box) (MR_mkword(1, &test_grades_scalar_common_2[16])))
  },
  /* row  21 */
  {
    ((MR_Box) ((MR_Integer) 17)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  22 */
  {
    ((MR_Box) ((MR_Integer) 16)),
    ((MR_Box) (MR_mkword(1, &test_grades_scalar_common_2[21])))
  },
  /* row  23 */
  {
    ((MR_Box) ((MR_Integer) 15)),
    ((MR_Box) (MR_mkword(1, &test_grades_scalar_common_2[22])))
  },
  /* row  24 */
  {
    (MR_Box) ((MR_Unsigned) 7U),
    ((MR_Box) (MR_mkword(1, &test_grades_scalar_common_2[23])))
  },
  /* row  25 */
  {
    ((MR_Box) (&test_grades_scalar_common_2[24])),
    ((MR_Box) (MR_mkword(1, &test_grades_scalar_common_2[20])))
  },
  /* row  26 */
  {
    ((MR_Box) ((MR_Integer) 61)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  27 */
  {
    ((MR_Box) ((MR_Integer) 60)),
    ((MR_Box) (MR_mkword(1, &test_grades_scalar_common_2[26])))
  },
  /* row  28 */
  {
    ((MR_Box) ((MR_Integer) 59)),
    ((MR_Box) (MR_mkword(1, &test_grades_scalar_common_2[27])))
  },
  /* row  29 */
  {
    (MR_Box) ((MR_Unsigned) 21U),
    ((MR_Box) (MR_mkword(1, &test_grades_scalar_common_2[28])))
  },
  /* row  30 */
  {
    ((MR_Box) (&test_grades_scalar_common_2[29])),
    ((MR_Box) (MR_mkword(1, &test_grades_scalar_common_2[7])))
  },
  /* row  31 */
  {
    ((MR_Box) ((MR_Integer) 47)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  32 */
  {
    ((MR_Box) ((MR_Integer) 46)),
    ((MR_Box) (MR_mkword(1, &test_grades_scalar_common_2[31])))
  },
  /* row  33 */
  {
    (MR_Box) ((MR_Unsigned) 15U),
    ((MR_Box) (MR_mkword(1, &test_grades_scalar_common_2[32])))
  },
  /* row  34 */
  {
    ((MR_Box) (&test_grades_scalar_common_2[33])),
    ((MR_Box) (MR_mkword(1, &test_grades_scalar_common_2[30])))
  },
  /* row  35 */
  {
    ((MR_Box) ((MR_Integer) 33)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  36 */
  {
    ((MR_Box) ((MR_Integer) 32)),
    ((MR_Box) (MR_mkword(1, &test_grades_scalar_common_2[35])))
  },
  /* row  37 */
  {
    (MR_Box) ((MR_Unsigned) 12U),
    ((MR_Box) (MR_mkword(1, &test_grades_scalar_common_2[36])))
  },
  /* row  38 */
  {
    ((MR_Box) (&test_grades_scalar_common_2[37])),
    ((MR_Box) (MR_mkword(1, &test_grades_scalar_common_2[34])))
  },
  /* row  39 */
  {
    ((MR_Box) ((MR_Integer) 38)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  40 */
  {
    ((MR_Box) ((MR_Integer) 37)),
    ((MR_Box) (MR_mkword(1, &test_grades_scalar_common_2[39])))
  },
  /* row  41 */
  {
    (MR_Box) ((MR_Unsigned) 13U),
    ((MR_Box) (MR_mkword(1, &test_grades_scalar_common_2[40])))
  },
  /* row  42 */
  {
    ((MR_Box) (&test_grades_scalar_common_2[41])),
    ((MR_Box) (MR_mkword(1, &test_grades_scalar_common_2[38])))
  },
  /* row  43 */
  {
    ((MR_Box) ((MR_Integer) 27)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  44 */
  {
    ((MR_Box) ((MR_Integer) 28)),
    ((MR_Box) (MR_mkword(1, &test_grades_scalar_common_2[43])))
  },
  /* row  45 */
  {
    (MR_Box) ((MR_Unsigned) 10U),
    ((MR_Box) (MR_mkword(1, &test_grades_scalar_common_2[44])))
  },
  /* row  46 */
  {
    ((MR_Box) (&test_grades_scalar_common_2[45])),
    ((MR_Box) (MR_mkword(1, &test_grades_scalar_common_2[42])))
  },
};

static /* final */ const MR_Box test_grades_scalar_common_3[3][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 1U << 6)) | (((((MR_Unsigned) 1U << 5)) | (((((MR_Unsigned) 1U << 4)) | (((((MR_Unsigned) 2U << 2)) | (((MR_Unsigned) 0U << 1)))))))))) },
  /* row   1 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
  /* row   2 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 1U << 1)))))))) },
};

static /* final */ const MR_Box test_grades_scalar_common_4[3][4] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&test_grades_scalar_common_5[0])),
    ((MR_Box) (test_grades__parse_installed_grade_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   2 */
  {
    ((MR_Box) (&test_grades_scalar_common_6[0])),
    ((MR_Box) (test_grades__run_test_10_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) ""))
  },
};

static /* final */ const MR_Box test_grades_scalar_common_5[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&grade_lib__grade_state__grade_lib__grade_state__type_ctor_info_not_possible_why_0)),
    ((MR_Box) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0)),
    ((MR_Box) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0)),
    ((MR_Box) (&test_grades__tree234__pti_tree234_2__plain_grade_lib__grade_spec__type_ctor_info_solver_var_id_0__plain_grade_lib__grade_state__type_ctor_info_solver_var_0)),
    ((MR_Box) (&test_grades__tree234__pti_tree234_2__plain_grade_lib__grade_spec__type_ctor_info_solver_var_id_0__plain_grade_lib__grade_state__type_ctor_info_solver_var_0))
  },
};

static /* final */ const MR_Box test_grades_scalar_common_6[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&test_grades__test_grades__type_ctor_info_test_component_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box test_grades_scalar_common_7[1][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&grade_lib__grade_state__grade_lib__grade_state__type_ctor_info_solver_info_0)),
    ((MR_Box) (&test_grades__test_grades__type_ctor_info_installed_grade_set_0)),
    ((MR_Box) (&test_grades__test_grades__type_ctor_info_solve_count_stats_0)),
    ((MR_Box) (&test_grades__test_grades__type_ctor_info_solve_count_stats_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct2 test_grades__tree234__pti_tree234_2__plain_grade_lib__grade_spec__type_ctor_info_solver_var_id_0__plain_grade_lib__grade_state__type_ctor_info_solver_var_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0),
    (MR_PseudoTypeInfo) (&grade_lib__grade_state__grade_lib__grade_state__type_ctor_info_solver_var_0)
  }
};

static const MR_FA_TypeInfo_Struct1 test_grades__list__ti_list_1grade_lib__grade_solver__type_ctor_info_installed_grade_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&grade_lib__grade_solver__grade_lib__grade_solver__type_ctor_info_installed_grade_0) }
};

static const MR_PseudoTypeInfo test_grades__test_grades__field_types_installed_grade_set_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&test_grades__list__ti_list_1grade_lib__grade_solver__type_ctor_info_installed_grade_0)
};

static const MR_ConstString test_grades__test_grades__field_names_installed_grade_set_0_0[2] = {
  (MR_String) "igs_name",
  (MR_String) "igs_grades"
};

static const MR_DuFunctorDesc test_grades__test_grades__du_functor_desc_installed_grade_set_0_0 = {
  (MR_String) "installed_grade_set",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  test_grades__test_grades__field_types_installed_grade_set_0_0,
  test_grades__test_grades__field_names_installed_grade_set_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr test_grades__test_grades__du_stag_ordered_installed_grade_set_0_0[1] = { &test_grades__test_grades__du_functor_desc_installed_grade_set_0_0 };

static const MR_DuPtagLayout test_grades__test_grades__du_ptag_ordered_installed_grade_set_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    test_grades__test_grades__du_stag_ordered_installed_grade_set_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr test_grades__test_grades__du_name_ordered_installed_grade_set_0[1] = { &test_grades__test_grades__du_functor_desc_installed_grade_set_0_0 };

static const MR_Integer test_grades__test_grades__functor_number_map_installed_grade_set_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct test_grades__test_grades__type_ctor_info_installed_grade_set_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (test_grades____Unify____installed_grade_set_0_0_10001)),
  ((MR_Box) (test_grades____Compare____installed_grade_set_0_0_10001)),
  (MR_String) "test_grades",
  (MR_String) "installed_grade_set",
  { test_grades__test_grades__du_name_ordered_installed_grade_set_0 },
  { test_grades__test_grades__du_ptag_ordered_installed_grade_set_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  test_grades__test_grades__functor_number_map_installed_grade_set_0,

};

static const MR_PseudoTypeInfo test_grades__test_grades__field_types_solve_count_stats_0_0[4] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_ConstString test_grades__test_grades__field_names_solve_count_stats_0_0[4] = {
  (MR_String) "scs_total_num_label_steps",
  (MR_String) "scs_total_num_passes",
  (MR_String) "scs_total_num_req_tests",
  (MR_String) "scs_num_tests"
};

static const MR_DuFunctorDesc test_grades__test_grades__du_functor_desc_solve_count_stats_0_0 = {
  (MR_String) "solve_count_stats",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  test_grades__test_grades__field_types_solve_count_stats_0_0,
  test_grades__test_grades__field_names_solve_count_stats_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr test_grades__test_grades__du_stag_ordered_solve_count_stats_0_0[1] = { &test_grades__test_grades__du_functor_desc_solve_count_stats_0_0 };

static const MR_DuPtagLayout test_grades__test_grades__du_ptag_ordered_solve_count_stats_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    test_grades__test_grades__du_stag_ordered_solve_count_stats_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr test_grades__test_grades__du_name_ordered_solve_count_stats_0[1] = { &test_grades__test_grades__du_functor_desc_solve_count_stats_0_0 };

static const MR_Integer test_grades__test_grades__functor_number_map_solve_count_stats_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct test_grades__test_grades__type_ctor_info_solve_count_stats_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (test_grades____Unify____solve_count_stats_0_0_10001)),
  ((MR_Box) (test_grades____Compare____solve_count_stats_0_0_10001)),
  (MR_String) "test_grades",
  (MR_String) "solve_count_stats",
  { test_grades__test_grades__du_name_ordered_solve_count_stats_0 },
  { test_grades__test_grades__du_ptag_ordered_solve_count_stats_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  test_grades__test_grades__functor_number_map_solve_count_stats_0,

};

static const MR_PseudoTypeInfo test_grades__test_grades__field_types_test_component_0_0[2] = {
  (MR_PseudoTypeInfo) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0),
  (MR_PseudoTypeInfo) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0)
};

static const MR_ConstString test_grades__test_grades__field_names_test_component_0_0[2] = {
  (MR_String) "tc_solver_var_id",
  (MR_String) "tc_solver_var_value_id"
};

static const MR_DuArgLocn test_grades__test_grades__field_locns_test_component_0_0[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 7,
    (MR_Integer) 5
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 7
  }
};

static const MR_DuFunctorDesc test_grades__test_grades__du_functor_desc_test_component_0_0 = {
  (MR_String) "test_component",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  test_grades__test_grades__field_types_test_component_0_0,
  test_grades__test_grades__field_names_test_component_0_0,
  test_grades__test_grades__field_locns_test_component_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr test_grades__test_grades__du_stag_ordered_test_component_0_0[1] = { &test_grades__test_grades__du_functor_desc_test_component_0_0 };

static const MR_DuPtagLayout test_grades__test_grades__du_ptag_ordered_test_component_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    test_grades__test_grades__du_stag_ordered_test_component_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr test_grades__test_grades__du_name_ordered_test_component_0[1] = { &test_grades__test_grades__du_functor_desc_test_component_0_0 };

static const MR_Integer test_grades__test_grades__functor_number_map_test_component_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct test_grades__test_grades__type_ctor_info_test_component_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (test_grades____Unify____test_component_0_0_10001)),
  ((MR_Box) (test_grades____Compare____test_component_0_0_10001)),
  (MR_String) "test_grades",
  (MR_String) "test_component",
  { test_grades__test_grades__du_name_ordered_test_component_0 },
  { test_grades__test_grades__du_ptag_ordered_test_component_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  test_grades__test_grades__functor_number_map_test_component_0,

};

static const MR_FA_TypeInfo_Struct1 test_grades__list__ti_list_1grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0) }
};

static const MR_PseudoTypeInfo test_grades__test_grades__field_types_test_set_component_0_0[2] = {
  (MR_PseudoTypeInfo) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0),
  (MR_PseudoTypeInfo) (&test_grades__list__ti_list_1grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0)
};

static const MR_ConstString test_grades__test_grades__field_names_test_set_component_0_0[2] = {
  (MR_String) "tsc_solver_var_id",
  (MR_String) "tsc_solver_var_value_ids"
};

static const MR_DuArgLocn test_grades__test_grades__field_locns_test_set_component_0_0[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 5
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc test_grades__test_grades__du_functor_desc_test_set_component_0_0 = {
  (MR_String) "test_set_component",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  test_grades__test_grades__field_types_test_set_component_0_0,
  test_grades__test_grades__field_names_test_set_component_0_0,
  test_grades__test_grades__field_locns_test_set_component_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr test_grades__test_grades__du_stag_ordered_test_set_component_0_0[1] = { &test_grades__test_grades__du_functor_desc_test_set_component_0_0 };

static const MR_DuPtagLayout test_grades__test_grades__du_ptag_ordered_test_set_component_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    test_grades__test_grades__du_stag_ordered_test_set_component_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr test_grades__test_grades__du_name_ordered_test_set_component_0[1] = { &test_grades__test_grades__du_functor_desc_test_set_component_0_0 };

static const MR_Integer test_grades__test_grades__functor_number_map_test_set_component_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct test_grades__test_grades__type_ctor_info_test_set_component_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (test_grades____Unify____test_set_component_0_0_10001)),
  ((MR_Box) (test_grades____Compare____test_set_component_0_0_10001)),
  (MR_String) "test_grades",
  (MR_String) "test_set_component",
  { test_grades__test_grades__du_name_ordered_test_set_component_0 },
  { test_grades__test_grades__du_ptag_ordered_test_set_component_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  test_grades__test_grades__functor_number_map_test_set_component_0,

};

static const MR_FA_TypeInfo_Struct1 test_grades__list__ti_list_1test_grades__type_ctor_info_test_set_component_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&test_grades__test_grades__type_ctor_info_test_set_component_0) }
};

const MR_TypeCtorInfo_Struct test_grades__test_grades__type_ctor_info_test_set_spec_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (test_grades____Unify____test_set_spec_0_0_10001)),
  ((MR_Box) (test_grades____Compare____test_set_spec_0_0_10001)),
  (MR_String) "test_grades",
  (MR_String) "test_set_spec",
  { NULL },
  { (MR_PseudoTypeInfo) (&test_grades__list__ti_list_1test_grades__type_ctor_info_test_set_component_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 test_grades__cord__ti_cord_1test_grades__type_ctor_info_test_component_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&test_grades__test_grades__type_ctor_info_test_component_0) }
};

const MR_TypeCtorInfo_Struct test_grades__test_grades__type_ctor_info_test_spec_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (test_grades____Unify____test_spec_0_0_10001)),
  ((MR_Box) (test_grades____Compare____test_spec_0_0_10001)),
  (MR_String) "test_grades",
  (MR_String) "test_spec",
  { NULL },
  { (MR_PseudoTypeInfo) (&test_grades__cord__ti_cord_1test_grades__type_ctor_info_test_component_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static void MR_CALL 
test_grades____Compare____test_spec_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&test_grades_scalar_common_2[3]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
test_grades____Unify____test_spec_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&test_grades_scalar_common_2[3]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
test_grades____Compare____test_set_spec_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&test_grades_scalar_common_2[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
test_grades____Unify____test_set_spec_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&test_grades_scalar_common_2[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
test_grades____Compare____test_set_component_0_0(
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
  {
    MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 31);
    MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) & (MR_Integer) 31);
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word SubResult1_6;
    MR_Integer Var_13 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_14 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_13 < Var_14);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (Var_13 > Var_14);
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
      mercury__builtin__compare_3_p_0((MR_Word) (&test_grades_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

static MR_bool MR_CALL 
test_grades____Unify____test_set_component_0_0(
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
  {
    MR_Word TypeInfo_9_9;
    MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) & (MR_Integer) 31);
    MR_Word ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 31);
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      TypeInfo_9_9 = (MR_Word) (&test_grades_scalar_common_2[1]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

static void MR_CALL 
test_grades____Compare____test_component_0_0(
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
  {
    MR_Word ArgX1_4 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 7)) & (MR_Integer) 31);
    MR_Word ArgY1_5 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) >> 7)) & (MR_Integer) 31);
    MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 127);
    MR_Word ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) & (MR_Integer) 127);
    MR_Word SubResult1_6;
    MR_Integer Var_13 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_14 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_13 < Var_14);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (Var_13 > Var_14);
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
      MR_Integer Var_15 = (MR_Integer) (ArgX2_7);
      MR_Integer Var_16 = (MR_Integer) (ArgY2_8);

      succeeded = (Var_15 < Var_16);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (Var_15 > Var_16);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 2;
        else
          *HeadVar__1_1 = (MR_Integer) 0;
      }
    }
  }
}

static MR_bool MR_CALL 
test_grades____Unify____test_component_0_0(
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
  {
    MR_Word ArgX1_3 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) >> 7)) & (MR_Integer) 31);
    MR_Word ArgY1_4 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 7)) & (MR_Integer) 31);
    MR_Word ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) & (MR_Integer) 127);
    MR_Word ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 127);

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
      succeeded = (ArgX2_5 == ArgY2_6);
  }
  return succeeded;
}

static void MR_CALL 
test_grades____Compare____solve_count_stats_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_15 == CastY_16);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Integer ArgX3_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Integer ArgY3_11 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Integer ArgX4_13 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Integer ArgY4_14 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word SubResult1_6;

    succeeded = (ArgX1_4 < ArgY1_5);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (ArgX1_4 > ArgY1_5);
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

      succeeded = (ArgX2_7 < ArgY2_8);
      if (succeeded)
      {
        SubResult2_9 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (ArgX2_7 > ArgY2_8);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = MR_TRUE;
          succeeded = !(succeeded);
          if (succeeded)
          {
            SubResult2_9 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        succeeded = (ArgX3_10 < ArgY3_11);
        if (succeeded)
        {
          SubResult3_12 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (ArgX3_10 > ArgY3_11);
          if (succeeded)
          {
            SubResult3_12 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = MR_TRUE;
            succeeded = !(succeeded);
            if (succeeded)
            {
              SubResult3_12 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
          }
        }
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          succeeded = (ArgX4_13 < ArgY4_14);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 1;
          else
          {
            succeeded = (ArgX4_13 > ArgY4_14);
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

static MR_bool MR_CALL 
test_grades____Unify____solve_count_stats_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Integer ArgY3_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Integer ArgX4_9 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Integer ArgY4_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 3))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
      {
        succeeded = (ArgX3_7 == ArgY3_8);
        if (succeeded)
          succeeded = (ArgX4_9 == ArgY4_10);
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
test_grades____Compare____installed_grade_set_0_0(
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
  {
    MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word SubResult1_6;

    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&test_grades_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

static MR_bool MR_CALL 
test_grades____Unify____installed_grade_set_0_0(
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
  {
    MR_Word TypeInfo_9_9;
    MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));

    succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
    if (succeeded)
    {
      TypeInfo_9_9 = (MR_Word) (&test_grades_scalar_common_2[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

static MR_String MR_CALL 
test_grades__test_component_to_string_2_f_0(
  MR_String Prefix_4,
  MR_Word TestComponent_5)
{
  MR_String Str_6;
  MR_Word VarId_7 = ((((MR_Unsigned) ((MR_hl_field(0, TestComponent_5, 0))) >> 7)) & (MR_Integer) 31);
  MR_Word ValueId_8 = ((MR_Unsigned) ((MR_hl_field(0, TestComponent_5, 0))) & (MR_Integer) 127);
  MR_String VarName_9;
  MR_String ValueName_10;
  MR_String Var_20;
  MR_String Var_22;
  MR_String Var_23;

  var_value_names__solver_var_name_2_p_1(&VarName_9, VarId_7);
  var_value_names__solver_var_value_name_2_p_1(&ValueName_10, ValueId_8);
  Var_20 = mercury__string__f_43_43_2_f_0(ValueName_10, (MR_String) "\n");
  Var_22 = mercury__string__f_43_43_2_f_0((MR_String) " = ", Var_20);
  Var_23 = mercury__string__f_43_43_2_f_0(VarName_9, Var_22);
  Str_6 = mercury__string__f_43_43_2_f_0(Prefix_4, Var_23);
  return Str_6;
}

static void MR_CALL 
test_grades__run_installed_grade_set_test_7_p_0(
  MR_Word OutStream_8,
  MR_Word SolverInfo_9,
  MR_Word InstalledSet_10,
  MR_Word STATE_VARIABLE_RelSolveCountStats_0_23,
  MR_Word * STATE_VARIABLE_RelSolveCountStats_24)
{
  MR_bool succeeded;
  MR_String SetName_13 = ((MR_String) ((MR_hl_field(0, InstalledSet_10, 0))));
  MR_Word InstalledGrades_14 = ((MR_Word) ((MR_hl_field(0, InstalledSet_10, 1))));
  MR_Word CommitSolveCounts_15;
  MR_Word CommitInstalledGradeSoln_16;
  MR_Word NonCommitInstalledGradeSoln_18;
  MR_String Var_48;
  MR_Integer TotalNumLabelSteps0_60;
  MR_Integer TotalNumPasses0_61;
  MR_Integer TotalNumReqTests0_62;
  MR_Integer NumTests0_63;
  MR_Integer NumLabelSteps_64;
  MR_Integer NumPasses_65;
  MR_Integer NumReqTests_66;
  MR_Integer TotalNumLabelSteps_67;
  MR_Integer TotalNumPasses_68;
  MR_Integer TotalNumReqTests_69;
  MR_Integer NumTests_70;
  MR_Word _NonCommitSolveCounts_17;

  grade_lib__grade_solver__solve_best_installed_grade_5_p_0(SolverInfo_9, (MR_Integer) 0, InstalledGrades_14, &CommitSolveCounts_15, &CommitInstalledGradeSoln_16);
  grade_lib__grade_solver__solve_best_installed_grade_5_p_0(SolverInfo_9, (MR_Integer) 1, InstalledGrades_14, &_NonCommitSolveCounts_17, &NonCommitInstalledGradeSoln_18);
  TotalNumLabelSteps0_60 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_RelSolveCountStats_0_23, 0))));
  TotalNumPasses0_61 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_RelSolveCountStats_0_23, 1))));
  TotalNumReqTests0_62 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_RelSolveCountStats_0_23, 2))));
  NumTests0_63 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_RelSolveCountStats_0_23, 3))));
  NumLabelSteps_64 = ((MR_Integer) ((MR_hl_field(0, CommitSolveCounts_15, 0))));
  NumPasses_65 = ((MR_Integer) ((MR_hl_field(0, CommitSolveCounts_15, 1))));
  NumReqTests_66 = ((MR_Integer) ((MR_hl_field(0, CommitSolveCounts_15, 2))));
  TotalNumLabelSteps_67 = (MR_Integer) ((MR_Unsigned) TotalNumLabelSteps0_60 + (MR_Unsigned) NumLabelSteps_64);
  TotalNumPasses_68 = (MR_Integer) ((MR_Unsigned) TotalNumPasses0_61 + (MR_Unsigned) NumPasses_65);
  TotalNumReqTests_69 = (MR_Integer) ((MR_Unsigned) TotalNumReqTests0_62 + (MR_Unsigned) NumReqTests_66);
  NumTests_70 = (MR_Integer) ((MR_Unsigned) NumTests0_63 + (MR_Unsigned) 1);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_RelSolveCountStats_24 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (TotalNumLabelSteps_67));
    MR_hl_field(0, base, 1) = ((MR_Box) (TotalNumPasses_68));
    MR_hl_field(0, base, 2) = ((MR_Box) (TotalNumReqTests_69));
    MR_hl_field(0, base, 3) = ((MR_Box) (NumTests_70));
  }
  mercury__io__write_string_4_p_0(OutStream_8, (MR_String) "    installed grade set ");
  mercury__string__format__format_string_component_width_noprec_4_p_0((MR_Word) (&test_grades_scalar_common_3[2]), (MR_Integer) 20, SetName_13, &Var_48);
  mercury__io__write_string_4_p_0(OutStream_8, Var_48);
  mercury__io__write_string_4_p_0(OutStream_8, (MR_String) " ");
  switch (MR_tag((MR_Word) CommitInstalledGradeSoln_16)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      mercury__io__write_string_4_p_0(OutStream_8, (MR_String) "-\n");
      break;
    case (MR_Integer) 1:
      {
        MR_Word ChosenInstalledGrade_20 = (MR_Word) (MR_body((MR_Word) (CommitInstalledGradeSoln_16), (MR_Integer) 1));
        MR_String ChosenInstalledGradeName_21 = ((MR_String) ((MR_hl_field(0, ChosenInstalledGrade_20, 0))));

        mercury__io__write_string_4_p_0(OutStream_8, ChosenInstalledGradeName_21);
        mercury__io__write_string_4_p_0(OutStream_8, (MR_String) "\n");
      }
      break;
    case (MR_Integer) 2:
      mercury__io__write_string_4_p_0(OutStream_8, (MR_String) "INCONSISTENT\n");
      break;
  }
  succeeded = grade_lib__grade_solver____Unify____installed_grade_solution_0_0(CommitInstalledGradeSoln_16, NonCommitInstalledGradeSoln_18);
  if (!(succeeded))
    mercury__io__write_string_4_p_0(OutStream_8, (MR_String) "NONCOMMIT IS DIFFERENT%s\n");
}

void MR_CALL 
main_2_p_0(void)
{
  MR_Word SolverInfo0_6;
  MR_Word AsmFastGc_7;
  MR_Word AsmFastGcStseg_8;
  MR_Word AsmFastGcStsegTr_9;
  MR_Word AsmFastGcDebugStseg_10;
  MR_Word AsmFastGcDecldebugStseg_11;
  MR_Word AsmFastGcProfDeepStseg_12;
  MR_Word AsmFastGcProfAllStseg_13;
  MR_Word NoneGcProfAllStseg_14;
  MR_Word HlcGc_15;
  MR_Word HlcGcTr_16;
  MR_Word HlcGcPar_17;
  MR_Word Csharp_18;
  MR_Word Java_19;
  MR_Word GradesAll_20;
  MR_Word SetAll_21;
  MR_Word GradesLLDSAll_22;
  MR_Word SetLLDSAll_23;
  MR_Word GradesLLDSDebug_24;
  MR_Word SetLLDSDebug_25;
  MR_Word GradesLLDSProf_26;
  MR_Word SetLLDSProf_27;
  MR_Word GradesEMLDS_28;
  MR_Word SetEMLDS_29;
  MR_Word GradesTrOnlyLLDS_30;
  MR_Word SetTrOnlyLLDS_31;
  MR_Word GradesTrOnlyMLDS_32;
  MR_Word SetTrOnlyMLDS_33;
  MR_Word InstalledSets_34;
  MR_Word TestSetSpecs_35;
  MR_Word OutStream_38;
  MR_Word AbsSolveCountStats_39;
  MR_Word RelSolveCountStats_40;
  MR_Word Var_62;
  MR_Word Var_63;
  MR_Word Var_64;
  MR_Word Var_65;
  MR_Word Var_66;
  MR_Word Var_67;
  MR_Word Var_68;
  MR_Word Var_70;
  MR_Word Var_71;
  MR_Word Var_72;
  MR_Word Var_73;
  MR_Word Var_76;
  MR_Word Var_77;
  MR_Word Var_78;
  MR_Word Var_79;
  MR_Word Var_80;
  MR_Word Var_81;
  MR_Word Var_82;
  MR_Word Var_85;
  MR_Word Var_86;
  MR_Word Var_87;
  MR_Word Var_88;
  MR_Word Var_89;
  MR_Word Var_92;
  MR_Word Var_93;
  MR_Word Var_104;
  MR_Word Var_105;
  MR_Word Var_106;
  MR_Word Var_109;
  MR_Word Var_110;
  MR_Word Var_111;
  MR_Word Var_114;
  MR_Word Var_115;
  MR_Word Var_116;
  MR_Word Var_117;
  MR_Word Var_118;
  MR_Word Var_119;
  MR_Word Var_121;
  MR_Word Var_122;
  MR_Word Var_123;
  MR_Word TestSpec_150;
  MR_Word TestSpecs_151;
  MR_Word Var_158;
  MR_Word STATE_VARIABLE_AbsSolveCountStats_38_159;
  MR_Word STATE_VARIABLE_RelSolveCountStats_39_160;
  MR_Word TestSpec_179;
  MR_Word Var_187;

  grade_lib__grade_setup__setup_solver_info_3_p_0((MR_Integer) 1, (MR_Word) (&test_grades_scalar_common_3[0]), &SolverInfo0_6);
  test_grades__parse_installed_grade_3_p_0(SolverInfo0_6, (MR_String) "asm_fast.gc", &AsmFastGc_7);
  test_grades__parse_installed_grade_3_p_0(SolverInfo0_6, (MR_String) "asm_fast.gc.stseg", &AsmFastGcStseg_8);
  test_grades__parse_installed_grade_3_p_0(SolverInfo0_6, (MR_String) "asm_fast.gc.stseg.tr", &AsmFastGcStsegTr_9);
  test_grades__parse_installed_grade_3_p_0(SolverInfo0_6, (MR_String) "asm_fast.gc.debug.stseg", &AsmFastGcDebugStseg_10);
  test_grades__parse_installed_grade_3_p_0(SolverInfo0_6, (MR_String) "asm_fast.gc.decldebug.stseg", &AsmFastGcDecldebugStseg_11);
  test_grades__parse_installed_grade_3_p_0(SolverInfo0_6, (MR_String) "asm_fast.gc.profdeep.stseg", &AsmFastGcProfDeepStseg_12);
  test_grades__parse_installed_grade_3_p_0(SolverInfo0_6, (MR_String) "asm_fast.gc.profall.stseg", &AsmFastGcProfAllStseg_13);
  test_grades__parse_installed_grade_3_p_0(SolverInfo0_6, (MR_String) "none.gc.profall.stseg", &NoneGcProfAllStseg_14);
  test_grades__parse_installed_grade_3_p_0(SolverInfo0_6, (MR_String) "hlc.gc", &HlcGc_15);
  test_grades__parse_installed_grade_3_p_0(SolverInfo0_6, (MR_String) "hlc.gc.tr", &HlcGcTr_16);
  test_grades__parse_installed_grade_3_p_0(SolverInfo0_6, (MR_String) "hlc.gc.par", &HlcGcPar_17);
  test_grades__parse_installed_grade_3_p_0(SolverInfo0_6, (MR_String) "csharp", &Csharp_18);
  test_grades__parse_installed_grade_3_p_0(SolverInfo0_6, (MR_String) "java", &Java_19);
  {
    Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_73, 0) = ((MR_Box) (Java_19));
    MR_hl_field(1, Var_73, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_72, 0) = ((MR_Box) (Csharp_18));
    MR_hl_field(1, Var_72, 1) = ((MR_Box) (Var_73));
  }
  {
    Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_71, 0) = ((MR_Box) (HlcGcPar_17));
    MR_hl_field(1, Var_71, 1) = ((MR_Box) (Var_72));
  }
  {
    Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_70, 0) = ((MR_Box) (HlcGcTr_16));
    MR_hl_field(1, Var_70, 1) = ((MR_Box) (Var_71));
  }
  {
    GradesEMLDS_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, GradesEMLDS_28, 0) = ((MR_Box) (HlcGc_15));
    MR_hl_field(1, GradesEMLDS_28, 1) = ((MR_Box) (Var_70));
  }
  {
    Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_68, 0) = ((MR_Box) (NoneGcProfAllStseg_14));
    MR_hl_field(1, Var_68, 1) = ((MR_Box) (GradesEMLDS_28));
  }
  {
    Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_67, 0) = ((MR_Box) (AsmFastGcProfAllStseg_13));
    MR_hl_field(1, Var_67, 1) = ((MR_Box) (Var_68));
  }
  {
    Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_66, 0) = ((MR_Box) (AsmFastGcProfDeepStseg_12));
    MR_hl_field(1, Var_66, 1) = ((MR_Box) (Var_67));
  }
  {
    Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_65, 0) = ((MR_Box) (AsmFastGcDecldebugStseg_11));
    MR_hl_field(1, Var_65, 1) = ((MR_Box) (Var_66));
  }
  {
    Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_64, 0) = ((MR_Box) (AsmFastGcDebugStseg_10));
    MR_hl_field(1, Var_64, 1) = ((MR_Box) (Var_65));
  }
  {
    Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_63, 0) = ((MR_Box) (AsmFastGcStsegTr_9));
    MR_hl_field(1, Var_63, 1) = ((MR_Box) (Var_64));
  }
  {
    Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_62, 0) = ((MR_Box) (AsmFastGcStseg_8));
    MR_hl_field(1, Var_62, 1) = ((MR_Box) (Var_63));
  }
  {
    GradesAll_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, GradesAll_20, 0) = ((MR_Box) (AsmFastGc_7));
    MR_hl_field(1, GradesAll_20, 1) = ((MR_Box) (Var_62));
  }
  {
    SetAll_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, SetAll_21, 0) = ((MR_Box) ((MR_String) "grades_all"));
    MR_hl_field(0, SetAll_21, 1) = ((MR_Box) (GradesAll_20));
  }
  {
    Var_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_82, 0) = ((MR_Box) (NoneGcProfAllStseg_14));
    MR_hl_field(1, Var_82, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_81, 0) = ((MR_Box) (AsmFastGcProfAllStseg_13));
    MR_hl_field(1, Var_81, 1) = ((MR_Box) (Var_82));
  }
  {
    Var_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_80, 0) = ((MR_Box) (AsmFastGcProfDeepStseg_12));
    MR_hl_field(1, Var_80, 1) = ((MR_Box) (Var_81));
  }
  {
    Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_79, 0) = ((MR_Box) (AsmFastGcDecldebugStseg_11));
    MR_hl_field(1, Var_79, 1) = ((MR_Box) (Var_80));
  }
  {
    Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_78, 0) = ((MR_Box) (AsmFastGcDebugStseg_10));
    MR_hl_field(1, Var_78, 1) = ((MR_Box) (Var_79));
  }
  {
    Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_77, 0) = ((MR_Box) (AsmFastGcStsegTr_9));
    MR_hl_field(1, Var_77, 1) = ((MR_Box) (Var_78));
  }
  {
    Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_76, 0) = ((MR_Box) (AsmFastGcStseg_8));
    MR_hl_field(1, Var_76, 1) = ((MR_Box) (Var_77));
  }
  {
    GradesLLDSAll_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, GradesLLDSAll_22, 0) = ((MR_Box) (AsmFastGc_7));
    MR_hl_field(1, GradesLLDSAll_22, 1) = ((MR_Box) (Var_76));
  }
  {
    SetLLDSAll_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, SetLLDSAll_23, 0) = ((MR_Box) ((MR_String) "grades_llds_all"));
    MR_hl_field(0, SetLLDSAll_23, 1) = ((MR_Box) (GradesLLDSAll_22));
  }
  {
    Var_89 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_89, 0) = ((MR_Box) (AsmFastGcProfDeepStseg_12));
    MR_hl_field(1, Var_89, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_88, 0) = ((MR_Box) (AsmFastGcDecldebugStseg_11));
    MR_hl_field(1, Var_88, 1) = ((MR_Box) (Var_89));
  }
  {
    Var_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_87, 0) = ((MR_Box) (AsmFastGcDebugStseg_10));
    MR_hl_field(1, Var_87, 1) = ((MR_Box) (Var_88));
  }
  {
    Var_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_86, 0) = ((MR_Box) (AsmFastGcStsegTr_9));
    MR_hl_field(1, Var_86, 1) = ((MR_Box) (Var_87));
  }
  {
    Var_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_85, 0) = ((MR_Box) (AsmFastGcStseg_8));
    MR_hl_field(1, Var_85, 1) = ((MR_Box) (Var_86));
  }
  {
    GradesLLDSDebug_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, GradesLLDSDebug_24, 0) = ((MR_Box) (AsmFastGc_7));
    MR_hl_field(1, GradesLLDSDebug_24, 1) = ((MR_Box) (Var_85));
  }
  {
    SetLLDSDebug_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, SetLLDSDebug_25, 0) = ((MR_Box) ((MR_String) "grades_llds_debug"));
    MR_hl_field(0, SetLLDSDebug_25, 1) = ((MR_Box) (GradesLLDSDebug_24));
  }
  {
    Var_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_93, 0) = ((MR_Box) (AsmFastGcStsegTr_9));
    MR_hl_field(1, Var_93, 1) = ((MR_Box) (Var_81));
  }
  {
    Var_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_92, 0) = ((MR_Box) (AsmFastGcStseg_8));
    MR_hl_field(1, Var_92, 1) = ((MR_Box) (Var_93));
  }
  {
    GradesLLDSProf_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, GradesLLDSProf_26, 0) = ((MR_Box) (AsmFastGc_7));
    MR_hl_field(1, GradesLLDSProf_26, 1) = ((MR_Box) (Var_92));
  }
  {
    SetLLDSProf_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, SetLLDSProf_27, 0) = ((MR_Box) ((MR_String) "grades_llds_prof"));
    MR_hl_field(0, SetLLDSProf_27, 1) = ((MR_Box) (GradesLLDSProf_26));
  }
  {
    SetEMLDS_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, SetEMLDS_29, 0) = ((MR_Box) ((MR_String) "grades_emlds"));
    MR_hl_field(0, SetEMLDS_29, 1) = ((MR_Box) (GradesEMLDS_28));
  }
  {
    Var_106 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_106, 0) = ((MR_Box) (AsmFastGcStsegTr_9));
    MR_hl_field(1, Var_106, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_105 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_105, 0) = ((MR_Box) (HlcGc_15));
    MR_hl_field(1, Var_105, 1) = ((MR_Box) (Var_106));
  }
  {
    Var_104 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_104, 0) = ((MR_Box) (AsmFastGcStseg_8));
    MR_hl_field(1, Var_104, 1) = ((MR_Box) (Var_105));
  }
  {
    GradesTrOnlyLLDS_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, GradesTrOnlyLLDS_30, 0) = ((MR_Box) (AsmFastGc_7));
    MR_hl_field(1, GradesTrOnlyLLDS_30, 1) = ((MR_Box) (Var_104));
  }
  {
    SetTrOnlyLLDS_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, SetTrOnlyLLDS_31, 0) = ((MR_Box) ((MR_String) "grades_tr_llds"));
    MR_hl_field(0, SetTrOnlyLLDS_31, 1) = ((MR_Box) (GradesTrOnlyLLDS_30));
  }
  {
    Var_111 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_111, 0) = ((MR_Box) (HlcGcTr_16));
    MR_hl_field(1, Var_111, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_110 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_110, 0) = ((MR_Box) (HlcGc_15));
    MR_hl_field(1, Var_110, 1) = ((MR_Box) (Var_111));
  }
  {
    Var_109 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_109, 0) = ((MR_Box) (AsmFastGcStseg_8));
    MR_hl_field(1, Var_109, 1) = ((MR_Box) (Var_110));
  }
  {
    GradesTrOnlyMLDS_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, GradesTrOnlyMLDS_32, 0) = ((MR_Box) (AsmFastGc_7));
    MR_hl_field(1, GradesTrOnlyMLDS_32, 1) = ((MR_Box) (Var_109));
  }
  {
    SetTrOnlyMLDS_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, SetTrOnlyMLDS_33, 0) = ((MR_Box) ((MR_String) "grades_tr_mlds"));
    MR_hl_field(0, SetTrOnlyMLDS_33, 1) = ((MR_Box) (GradesTrOnlyMLDS_32));
  }
  {
    Var_119 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_119, 0) = ((MR_Box) (SetTrOnlyMLDS_33));
    MR_hl_field(1, Var_119, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_118 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_118, 0) = ((MR_Box) (SetTrOnlyLLDS_31));
    MR_hl_field(1, Var_118, 1) = ((MR_Box) (Var_119));
  }
  {
    Var_117 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_117, 0) = ((MR_Box) (SetEMLDS_29));
    MR_hl_field(1, Var_117, 1) = ((MR_Box) (Var_118));
  }
  {
    Var_116 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_116, 0) = ((MR_Box) (SetLLDSProf_27));
    MR_hl_field(1, Var_116, 1) = ((MR_Box) (Var_117));
  }
  {
    Var_115 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_115, 0) = ((MR_Box) (SetLLDSDebug_25));
    MR_hl_field(1, Var_115, 1) = ((MR_Box) (Var_116));
  }
  {
    Var_114 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_114, 0) = ((MR_Box) (SetLLDSAll_23));
    MR_hl_field(1, Var_114, 1) = ((MR_Box) (Var_115));
  }
  {
    InstalledSets_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, InstalledSets_34, 0) = ((MR_Box) (SetAll_21));
    MR_hl_field(1, InstalledSets_34, 1) = ((MR_Box) (Var_114));
  }
  Var_121 = test_grades__broad_test_set_spec_0_f_0();
  Var_123 = test_grades__llds_test_set_spec_0_f_0();
  {
    Var_122 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_122, 0) = ((MR_Box) (Var_123));
    MR_hl_field(1, Var_122, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    TestSetSpecs_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, TestSetSpecs_35, 0) = ((MR_Box) (Var_121));
    MR_hl_field(1, TestSetSpecs_35, 1) = ((MR_Box) (Var_122));
  }
  mercury__io__output_stream_3_p_0(&OutStream_38);
  TestSpec_150 = ((MR_Word) ((MR_hl_field(1, TestSetSpecs_35, 0))));
  TestSpecs_151 = ((MR_Word) ((MR_hl_field(1, TestSetSpecs_35, 1))));
  Var_158 = mercury__cord__init_0_f_0((MR_Word) (&test_grades__test_grades__type_ctor_info_test_component_0));
  if ((TestSpec_150 == (MR_Word) ((MR_Unsigned) 0U)))
    test_grades__run_test_10_p_0(OutStream_38, SolverInfo0_6, InstalledSets_34, Var_158, (MR_Word) (&test_grades_scalar_common_4[0]), &STATE_VARIABLE_AbsSolveCountStats_38_159, (MR_Word) (&test_grades_scalar_common_4[0]), &STATE_VARIABLE_RelSolveCountStats_39_160);
  else
  {
    MR_Word TestSetSpecHead_163 = ((MR_Word) ((MR_hl_field(1, TestSpec_150, 0))));
    MR_Word TestSetSpecTail_164 = ((MR_Word) ((MR_hl_field(1, TestSpec_150, 1))));
    MR_Word VarId_165 = ((MR_Unsigned) ((MR_hl_field(0, TestSetSpecHead_163, 0))) & (MR_Integer) 31);
    MR_Word ValueIds_166 = ((MR_Word) ((MR_hl_field(0, TestSetSpecHead_163, 1))));

    test_grades__run_alternatives_for_var_13_p_0(OutStream_38, SolverInfo0_6, InstalledSets_34, VarId_165, ValueIds_166, TestSetSpecTail_164, Var_158, (MR_Word) (&test_grades_scalar_common_4[0]), &STATE_VARIABLE_AbsSolveCountStats_38_159, (MR_Word) (&test_grades_scalar_common_4[0]), &STATE_VARIABLE_RelSolveCountStats_39_160);
  }
  TestSpec_179 = ((MR_Word) ((MR_hl_field(1, TestSpecs_151, 0))));
  Var_187 = mercury__cord__init_0_f_0((MR_Word) (&test_grades__test_grades__type_ctor_info_test_component_0));
  if ((TestSpec_179 == (MR_Word) ((MR_Unsigned) 0U)))
    test_grades__run_test_10_p_0(OutStream_38, SolverInfo0_6, InstalledSets_34, Var_187, STATE_VARIABLE_AbsSolveCountStats_38_159, &AbsSolveCountStats_39, STATE_VARIABLE_RelSolveCountStats_39_160, &RelSolveCountStats_40);
  else
  {
    MR_Word TestSetSpecHead_192 = ((MR_Word) ((MR_hl_field(1, TestSpec_179, 0))));
    MR_Word TestSetSpecTail_193 = ((MR_Word) ((MR_hl_field(1, TestSpec_179, 1))));
    MR_Word VarId_194 = ((MR_Unsigned) ((MR_hl_field(0, TestSetSpecHead_192, 0))) & (MR_Integer) 31);
    MR_Word ValueIds_195 = ((MR_Word) ((MR_hl_field(0, TestSetSpecHead_192, 1))));

    test_grades__run_alternatives_for_var_13_p_0(OutStream_38, SolverInfo0_6, InstalledSets_34, VarId_194, ValueIds_195, TestSetSpecTail_193, Var_187, STATE_VARIABLE_AbsSolveCountStats_38_159, &AbsSolveCountStats_39, STATE_VARIABLE_RelSolveCountStats_39_160, &RelSolveCountStats_40);
  }
  test_grades__print_solve_count_stats_5_p_0(OutStream_38, (MR_String) "\nAbsolute solve counts:\n", AbsSolveCountStats_39);
  test_grades__print_solve_count_stats_5_p_0(OutStream_38, (MR_String) "\nRelative solve counts:\n", RelSolveCountStats_40);
}

static void MR_CALL 
test_grades__run_alternatives_for_var_13_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word HeadVar__7_7,
  MR_Word STATE_VARIABLE_AbsSolveCountStats_0_8,
  MR_Word * STATE_VARIABLE_AbsSolveCountStats_9,
  MR_Word STATE_VARIABLE_RelSolveCountStats_0_10,
  MR_Word * STATE_VARIABLE_RelSolveCountStats_11)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_RelSolveCountStats_11 = STATE_VARIABLE_RelSolveCountStats_0_10;
      *STATE_VARIABLE_AbsSolveCountStats_9 = STATE_VARIABLE_AbsSolveCountStats_0_8;
    }
    else
    {
      MR_Word ValueId_33 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 0))));
      MR_Word ValueIds_34 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 1))));
      MR_String VarName_40;
      MR_String ValueName_41;
      MR_Word MaybeError_42;
      MR_Word SolverInfoForThisAlternative_43;
      MR_Word ThisTestComponent_45;
      MR_Word TestSpecSoFarForThisAlternative_46;
      MR_Word STATE_VARIABLE_AbsSolveCountStats_56_56;
      MR_Word STATE_VARIABLE_RelSolveCountStats_57_57;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_STATE_VARIABLE_AbsSolveCountStats_0_8;
      MR_Word next_value_of_STATE_VARIABLE_RelSolveCountStats_0_10;

      var_value_names__solver_var_name_2_p_1(&VarName_40, HeadVar__4_4);
      var_value_names__solver_var_value_name_2_p_1(&ValueName_41, ValueId_33);
      grade_lib__grade_setup__set_solver_var_9_p_0(VarName_40, ValueName_41, HeadVar__4_4, ValueId_33, (MR_Integer) 1, (MR_Word) ((MR_Unsigned) 4U), &MaybeError_42, HeadVar__2_2, &SolverInfoForThisAlternative_43);
      if (!((MaybeError_42 == (MR_Word) ((MR_Unsigned) 0U))))
      {
        MR_String ErrorMsg_44 = ((MR_String) ((MR_hl_field(1, MaybeError_42, 0))));

        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140test_grades.run_alternatives_for_var\'/13", ErrorMsg_44);
          return;
        }
      }
      {
        ThisTestComponent_45 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ThisTestComponent_45, 0) = (MR_Box) (((((MR_Unsigned) (HeadVar__4_4) << 7)) | (MR_Unsigned) (ValueId_33)));
      }
      TestSpecSoFarForThisAlternative_46 = mercury__cord__snoc_2_f_0((MR_Word) (&test_grades__test_grades__type_ctor_info_test_component_0), HeadVar__7_7, ((MR_Box) (ThisTestComponent_45)));
      if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
        test_grades__run_test_10_p_0(HeadVar__1_1, SolverInfoForThisAlternative_43, HeadVar__3_3, TestSpecSoFarForThisAlternative_46, STATE_VARIABLE_AbsSolveCountStats_0_8, &STATE_VARIABLE_AbsSolveCountStats_56_56, STATE_VARIABLE_RelSolveCountStats_0_10, &STATE_VARIABLE_RelSolveCountStats_57_57);
      else
      {
        MR_Word TestSetSpecHead_60 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 0))));
        MR_Word TestSetSpecTail_61 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 1))));
        MR_Word VarId_62 = ((MR_Unsigned) ((MR_hl_field(0, TestSetSpecHead_60, 0))) & (MR_Integer) 31);
        MR_Word ValueIds_63 = ((MR_Word) ((MR_hl_field(0, TestSetSpecHead_60, 1))));

        test_grades__run_alternatives_for_var_13_p_0(HeadVar__1_1, SolverInfoForThisAlternative_43, HeadVar__3_3, VarId_62, ValueIds_63, TestSetSpecTail_61, TestSpecSoFarForThisAlternative_46, STATE_VARIABLE_AbsSolveCountStats_0_8, &STATE_VARIABLE_AbsSolveCountStats_56_56, STATE_VARIABLE_RelSolveCountStats_0_10, &STATE_VARIABLE_RelSolveCountStats_57_57);
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__5_5 = ValueIds_34;
      next_value_of_STATE_VARIABLE_AbsSolveCountStats_0_8 = STATE_VARIABLE_AbsSolveCountStats_56_56;
      next_value_of_STATE_VARIABLE_RelSolveCountStats_0_10 = STATE_VARIABLE_RelSolveCountStats_57_57;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      STATE_VARIABLE_AbsSolveCountStats_0_8 = next_value_of_STATE_VARIABLE_AbsSolveCountStats_0_8;
      STATE_VARIABLE_RelSolveCountStats_0_10 = next_value_of_STATE_VARIABLE_RelSolveCountStats_0_10;
      continue;
    }
    break;
  }
}

static void MR_CALL 
test_grades__run_test_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_RelSolveCountStats_24;

  test_grades__run_installed_grade_set_test_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_RelSolveCountStats_24);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_RelSolveCountStats_24));
}

static MR_Box MR_CALL 
test_grades__run_test_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_Str_6;

  conv0_Str_6 = test_grades__test_component_to_string_2_f_0(((MR_String) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Str_6));
  return wrapper_arg_2;
}

static void MR_CALL 
test_grades__run_test_10_p_0(
  MR_Word OutStream_11,
  MR_Word SolverInfo0_12,
  MR_Word InstalledSets_13,
  MR_Word TestSpec_14,
  MR_Word STATE_VARIABLE_AbsSolveCountStats_0_33,
  MR_Word * STATE_VARIABLE_AbsSolveCountStats_34,
  MR_Word STATE_VARIABLE_RelSolveCountStats_0_35,
  MR_Word * STATE_VARIABLE_RelSolveCountStats_36)
{
  MR_Word SolveCounts_18;
  MR_Word Soln_19;
  MR_Integer NumTests_23;
  MR_Integer NumLabelSteps_24;
  MR_Integer NumPasses_25;
  MR_Integer NumReqTests_26;
  MR_String Var_41;
  MR_String Var_53;
  MR_String Var_80;
  MR_String Var_91;
  MR_String Var_102;
  MR_Integer TotalNumLabelSteps0_119;
  MR_Integer TotalNumPasses0_120;
  MR_Integer TotalNumReqTests0_121;
  MR_Integer NumTests0_122;
  MR_Integer TotalNumLabelSteps_126;
  MR_Integer TotalNumPasses_127;
  MR_Integer TotalNumReqTests_128;
  MR_String TestSeqStr_131;
  MR_Word TestSpecComponents_132;
  MR_Word TestComponentStrs_133;
  MR_Word Var_135;
  MR_String Var_139;
  MR_String Var_141;
  MR_String Var_143;

  grade_lib__grade_solver__solve_absolute_3_p_0(SolverInfo0_12, &SolveCounts_18, &Soln_19);
  TotalNumLabelSteps0_119 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_AbsSolveCountStats_0_33, 0))));
  TotalNumPasses0_120 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_AbsSolveCountStats_0_33, 1))));
  TotalNumReqTests0_121 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_AbsSolveCountStats_0_33, 2))));
  NumTests0_122 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_AbsSolveCountStats_0_33, 3))));
  NumLabelSteps_24 = ((MR_Integer) ((MR_hl_field(0, SolveCounts_18, 0))));
  NumPasses_25 = ((MR_Integer) ((MR_hl_field(0, SolveCounts_18, 1))));
  NumReqTests_26 = ((MR_Integer) ((MR_hl_field(0, SolveCounts_18, 2))));
  TotalNumLabelSteps_126 = (MR_Integer) ((MR_Unsigned) TotalNumLabelSteps0_119 + (MR_Unsigned) NumLabelSteps_24);
  TotalNumPasses_127 = (MR_Integer) ((MR_Unsigned) TotalNumPasses0_120 + (MR_Unsigned) NumPasses_25);
  TotalNumReqTests_128 = (MR_Integer) ((MR_Unsigned) TotalNumReqTests0_121 + (MR_Unsigned) NumReqTests_26);
  NumTests_23 = (MR_Integer) ((MR_Unsigned) NumTests0_122 + (MR_Unsigned) 1);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_AbsSolveCountStats_34 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (TotalNumLabelSteps_126));
    MR_hl_field(0, base, 1) = ((MR_Box) (TotalNumPasses_127));
    MR_hl_field(0, base, 2) = ((MR_Box) (TotalNumReqTests_128));
    MR_hl_field(0, base, 3) = ((MR_Box) (NumTests_23));
  }
  mercury__io__nl_3_p_0(OutStream_11);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&test_grades_scalar_common_3[1]), NumTests_23, &Var_139);
  Var_141 = mercury__string__f_43_43_2_f_0(Var_139, (MR_String) ":\n");
  Var_143 = mercury__string__f_43_43_2_f_0((MR_String) "Test ", Var_141);
  TestSeqStr_131 = mercury__string__f_43_43_2_f_0((MR_String) "", Var_143);
  TestSpecComponents_132 = mercury__cord__to_list_1_f_0((MR_Word) (&test_grades__test_grades__type_ctor_info_test_component_0), TestSpec_14);
  TestComponentStrs_133 = mercury__list__map_2_f_0((MR_Word) (&test_grades__test_grades__type_ctor_info_test_component_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&test_grades_scalar_common_4[2]), TestSpecComponents_132);
  {
    Var_135 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_135, 0) = ((MR_Box) (TestSeqStr_131));
    MR_hl_field(1, Var_135, 1) = ((MR_Box) (TestComponentStrs_133));
  }
  Var_41 = mercury__string__append_list_1_f_0(Var_135);
  mercury__io__write_string_4_p_0(OutStream_11, Var_41);
  mercury__io__write_string_4_p_0(OutStream_11, (MR_String) "ABS PERF: ");
  mercury__string__format__format_signed_int_component_width_noprec_4_p_0((MR_Word) (&test_grades_scalar_common_3[1]), (MR_Integer) 2, NumLabelSteps_24, &Var_80);
  mercury__io__write_string_4_p_0(OutStream_11, Var_80);
  mercury__io__write_string_4_p_0(OutStream_11, (MR_String) " label steps, ");
  mercury__string__format__format_signed_int_component_width_noprec_4_p_0((MR_Word) (&test_grades_scalar_common_3[1]), (MR_Integer) 2, NumPasses_25, &Var_91);
  mercury__io__write_string_4_p_0(OutStream_11, Var_91);
  mercury__io__write_string_4_p_0(OutStream_11, (MR_String) " passes, ");
  mercury__string__format__format_signed_int_component_width_noprec_4_p_0((MR_Word) (&test_grades_scalar_common_3[1]), (MR_Integer) 3, NumReqTests_26, &Var_102);
  mercury__io__write_string_4_p_0(OutStream_11, Var_102);
  mercury__io__write_string_4_p_0(OutStream_11, (MR_String) " requirement tests\n");
  Var_53 = grade_lib__grade_solver__soln_to_str_2_f_0((MR_String) "    ", Soln_19);
  mercury__io__write_string_4_p_0(OutStream_11, Var_53);
  if (((MR_tag((MR_Word) Soln_19)) == (MR_Integer) 0))
    *STATE_VARIABLE_RelSolveCountStats_36 = STATE_VARIABLE_RelSolveCountStats_0_35;
  else
  {
    MR_Word SuccMap_28 = ((MR_Word) ((MR_hl_field(1, Soln_19, 0))));
    MR_Word GradeVars_29;
    MR_Word GradeStructure_30;
    MR_String UserGradeStr_31;
    MR_String LinkGradeStr_32;
    MR_Word Var_68;
    MR_Box conv3_STATE_VARIABLE_RelSolveCountStats_36;
    MR_Box conv2_STATE_VARIABLE_IO_38;

    GradeVars_29 = grade_lib__grade_vars__success_map_to_grade_vars_1_f_0(SuccMap_28);
    GradeStructure_30 = grade_lib__grade_structure__grade_vars_to_grade_structure_1_f_0(GradeVars_29);
    UserGradeStr_31 = grade_lib__grade_string__grade_structure_to_grade_string_2_f_0((MR_Integer) 0, GradeStructure_30);
    LinkGradeStr_32 = grade_lib__grade_string__grade_structure_to_grade_string_2_f_0((MR_Integer) 1, GradeStructure_30);
    mercury__io__write_string_4_p_0(OutStream_11, (MR_String) "    ABS GRADE USER ");
    mercury__io__write_string_4_p_0(OutStream_11, UserGradeStr_31);
    mercury__io__write_string_4_p_0(OutStream_11, (MR_String) "\n");
    mercury__io__write_string_4_p_0(OutStream_11, (MR_String) "    ABS GRADE LINK CHECK ");
    mercury__io__write_string_4_p_0(OutStream_11, LinkGradeStr_32);
    mercury__io__write_string_4_p_0(OutStream_11, (MR_String) "\n");
    {
      Var_68 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_68, 0) = ((MR_Box) (&test_grades_scalar_common_7[0]));
      MR_hl_field(0, Var_68, 1) = ((MR_Box) (test_grades__run_test_10_p_0_2));
      MR_hl_field(0, Var_68, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_68, 3) = ((MR_Box) (OutStream_11));
      MR_hl_field(0, Var_68, 4) = ((MR_Box) (SolverInfo0_12));
    }
    mercury__list__foldl2_6_p_2((MR_Word) (&test_grades__test_grades__type_ctor_info_installed_grade_set_0), (MR_Word) (&test_grades__test_grades__type_ctor_info_solve_count_stats_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_68, InstalledSets_13, ((MR_Box) (STATE_VARIABLE_RelSolveCountStats_0_35)), &conv3_STATE_VARIABLE_RelSolveCountStats_36, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_38);
    *STATE_VARIABLE_RelSolveCountStats_36 = ((MR_Word) (conv3_STATE_VARIABLE_RelSolveCountStats_36));
  }
}

static MR_Word MR_CALL 
test_grades__llds_test_set_spec_0_f_0(void)
{
  return (MR_Word) (MR_mkword(1, &test_grades_scalar_common_2[46]));
}

static MR_Word MR_CALL 
test_grades__broad_test_set_spec_0_f_0(void)
{
  return (MR_Word) (MR_mkword(1, &test_grades_scalar_common_2[25]));
}

static void MR_CALL 
test_grades__print_solve_count_stats_5_p_0(
  MR_Word OutStream_6,
  MR_String Msg_7,
  MR_Word SolveCountStats_8)
{
  MR_bool succeeded;
  MR_Integer TotalNumLabelSteps_10 = ((MR_Integer) ((MR_hl_field(0, SolveCountStats_8, 0))));
  MR_Integer TotalNumPasses_11 = ((MR_Integer) ((MR_hl_field(0, SolveCountStats_8, 1))));
  MR_Integer TotalNumReqTests_12 = ((MR_Integer) ((MR_hl_field(0, SolveCountStats_8, 2))));
  MR_Integer NumTests_13 = ((MR_Integer) ((MR_hl_field(0, SolveCountStats_8, 3))));
  MR_String Var_56;

  mercury__io__write_string_4_p_0(OutStream_6, Msg_7);
  mercury__io__write_string_4_p_0(OutStream_6, (MR_String) "\n");
  mercury__io__write_string_4_p_0(OutStream_6, (MR_String) "Number of tests:                     ");
  mercury__string__format__format_signed_int_component_width_noprec_4_p_0((MR_Word) (&test_grades_scalar_common_3[1]), (MR_Integer) 4, NumTests_13, &Var_56);
  mercury__io__write_string_4_p_0(OutStream_6, Var_56);
  mercury__io__write_string_4_p_0(OutStream_6, (MR_String) "\n");
  succeeded = (NumTests_13 > (MR_Integer) 0);
  if (succeeded)
  {
    MR_Float Var_31;
    MR_Float Var_32;
    MR_Float Var_33;
    MR_Float Var_39;
    MR_Float Var_40;
    MR_Float Var_41;
    MR_Float Var_47;
    MR_Float Var_48;
    MR_Float Var_49;
    MR_String Var_68;
    MR_String Var_82;
    MR_String Var_96;

    Var_32 = mercury__float__float_1_f_0(TotalNumLabelSteps_10);
    Var_33 = mercury__float__float_1_f_0(NumTests_13);
    Var_31 = mercury__float__f_slash_2_f_0(Var_32, Var_33);
    mercury__io__write_string_4_p_0(OutStream_6, (MR_String) "Average number of label steps:       ");
    mercury__string__format__format_float_component_width_prec_6_p_0((MR_Word) (&test_grades_scalar_common_3[1]), (MR_Integer) 7, (MR_Integer) 2, (MR_Integer) 2, Var_31, &Var_68);
    mercury__io__write_string_4_p_0(OutStream_6, Var_68);
    mercury__io__write_string_4_p_0(OutStream_6, (MR_String) "\n");
    Var_40 = mercury__float__float_1_f_0(TotalNumPasses_11);
    Var_41 = mercury__float__float_1_f_0(NumTests_13);
    Var_39 = mercury__float__f_slash_2_f_0(Var_40, Var_41);
    mercury__io__write_string_4_p_0(OutStream_6, (MR_String) "Average number of passes:            ");
    mercury__string__format__format_float_component_width_prec_6_p_0((MR_Word) (&test_grades_scalar_common_3[1]), (MR_Integer) 7, (MR_Integer) 2, (MR_Integer) 2, Var_39, &Var_82);
    mercury__io__write_string_4_p_0(OutStream_6, Var_82);
    mercury__io__write_string_4_p_0(OutStream_6, (MR_String) "\n");
    Var_48 = mercury__float__float_1_f_0(TotalNumReqTests_12);
    Var_49 = mercury__float__float_1_f_0(NumTests_13);
    Var_47 = mercury__float__f_slash_2_f_0(Var_48, Var_49);
    mercury__io__write_string_4_p_0(OutStream_6, (MR_String) "Average number of requirement tests: ");
    mercury__string__format__format_float_component_width_prec_6_p_0((MR_Word) (&test_grades_scalar_common_3[1]), (MR_Integer) 7, (MR_Integer) 2, (MR_Integer) 2, Var_47, &Var_96);
    mercury__io__write_string_4_p_0(OutStream_6, Var_96);
    mercury__io__write_string_4_p_0(OutStream_6, (MR_String) "\n");
  }
}

static void MR_CALL 
test_grades__parse_installed_grade_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__5_5;

  grade_lib__grade_setup__assign_var_in_map_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__5_5);
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__5_5));
}

static void MR_CALL 
test_grades__parse_installed_grade_3_p_0(
  MR_Word SolverInfo0_4,
  MR_String GradeStr_5,
  MR_Word * InstalledGrade_6)
{
  MR_Word MaybeSpecSuccMap_7;
  MR_Word SpecSuccMap_8;
  MR_Word SolverVarMap0_12;
  MR_Word SolverVarMap_13;
  MR_Word SolverInfo_14;
  MR_Word Soln_16;
  MR_Word StdSuccMap_18;
  MR_Word StdGradeVars_19;
  MR_Word StdGradeStructure_20;
  MR_String StdGradeStr_21;
  MR_Box conv1_SolverVarMap_13;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word _SolveCounts_15;

  MaybeSpecSuccMap_7 = grade_lib__grade_string__grade_string_to_succ_soln_1_f_0(GradeStr_5);
  if (((MR_tag((MR_Word) MaybeSpecSuccMap_7)) == (MR_Integer) 1))
  {
    MR_String HeadErrorMsg_9 = ((MR_String) ((MR_hl_field(1, MaybeSpecSuccMap_7, 0))));
    MR_Word TailErrorMsgs_10 = ((MR_Word) ((MR_hl_field(1, MaybeSpecSuccMap_7, 1))));
    MR_String CombinedErrorMsg_11;
    MR_Word Var_22;

    {
      Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_22, 0) = ((MR_Box) (HeadErrorMsg_9));
      MR_hl_field(1, Var_22, 1) = ((MR_Box) (TailErrorMsgs_10));
    }
    mercury__string__append_list_2_p_0(Var_22, &CombinedErrorMsg_11);
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140test_grades.parse_installed_grade\'/3", CombinedErrorMsg_11);
      return;
    }
  }
  else
    SpecSuccMap_8 = ((MR_Word) ((MR_hl_field(0, MaybeSpecSuccMap_7, 0))));
  SolverVarMap0_12 = ((MR_Word) ((MR_hl_field(0, SolverInfo0_4, 2))));
  mercury__map__foldl_4_p_0((MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0), (MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0), (MR_Word) (&test_grades_scalar_common_1[0]), (MR_Word) (&test_grades_scalar_common_4[1]), SpecSuccMap_8, ((MR_Box) (SolverVarMap0_12)), &conv1_SolverVarMap_13);
  SolverVarMap_13 = ((MR_Word) (conv1_SolverVarMap_13));
  Var_32 = ((MR_Word) ((MR_hl_field(0, SolverInfo0_4, 0))));
  Var_33 = ((MR_Word) ((MR_hl_field(0, SolverInfo0_4, 1))));
  {
    SolverInfo_14 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, SolverInfo_14, 0) = ((MR_Box) (Var_32));
    MR_hl_field(0, SolverInfo_14, 1) = ((MR_Box) (Var_33));
    MR_hl_field(0, SolverInfo_14, 2) = ((MR_Box) (SolverVarMap_13));
  }
  grade_lib__grade_solver__solve_absolute_3_p_0(SolverInfo_14, &_SolveCounts_15, &Soln_16);
  if (((MR_tag((MR_Word) Soln_16)) == (MR_Integer) 0))
  {
    MR_String Var_27;

    Var_27 = mercury__string__f_43_43_2_f_0((MR_String) "cannot solve installed grade string ", GradeStr_5);
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140test_grades.parse_installed_grade\'/3", Var_27);
      return;
    }
  }
  else
    StdSuccMap_18 = ((MR_Word) ((MR_hl_field(1, Soln_16, 0))));
  StdGradeVars_19 = grade_lib__grade_vars__success_map_to_grade_vars_1_f_0(StdSuccMap_18);
  StdGradeStructure_20 = grade_lib__grade_structure__grade_vars_to_grade_structure_1_f_0(StdGradeVars_19);
  StdGradeStr_21 = grade_lib__grade_string__grade_structure_to_grade_string_2_f_0((MR_Integer) 0, StdGradeStructure_20);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *InstalledGrade_6 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (StdGradeStr_21));
    MR_hl_field(0, base, 1) = ((MR_Box) (StdSuccMap_18));
  }
}

static MR_bool MR_CALL 
test_grades____Unify____installed_grade_set_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = test_grades____Unify____installed_grade_set_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
test_grades____Compare____installed_grade_set_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  test_grades____Compare____installed_grade_set_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
test_grades____Unify____solve_count_stats_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = test_grades____Unify____solve_count_stats_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
test_grades____Compare____solve_count_stats_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  test_grades____Compare____solve_count_stats_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
test_grades____Unify____test_component_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = test_grades____Unify____test_component_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
test_grades____Compare____test_component_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  test_grades____Compare____test_component_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
test_grades____Unify____test_set_component_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = test_grades____Unify____test_set_component_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
test_grades____Compare____test_set_component_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  test_grades____Compare____test_set_component_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
test_grades____Unify____test_set_spec_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = test_grades____Unify____test_set_spec_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
test_grades____Compare____test_set_spec_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  test_grades____Compare____test_set_spec_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
test_grades____Unify____test_spec_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = test_grades____Unify____test_spec_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
test_grades____Compare____test_spec_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  test_grades____Compare____test_spec_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__test_grades__init(void)
{
}

void mercury__test_grades__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&test_grades__test_grades__type_ctor_info_installed_grade_set_0);
  MR_register_type_ctor_info(&test_grades__test_grades__type_ctor_info_solve_count_stats_0);
  MR_register_type_ctor_info(&test_grades__test_grades__type_ctor_info_test_component_0);
  MR_register_type_ctor_info(&test_grades__test_grades__type_ctor_info_test_set_component_0);
  MR_register_type_ctor_info(&test_grades__test_grades__type_ctor_info_test_set_spec_0);
  MR_register_type_ctor_info(&test_grades__test_grades__type_ctor_info_test_spec_0);
}

void mercury__test_grades__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__test_grades__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module test_grades.
