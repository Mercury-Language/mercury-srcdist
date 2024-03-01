/*
** Automatically generated from `test_grades.m'
** by the Mercury compiler,
** version rotd-2024-03-01
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
test_grades__run_installed_grade_set_test_6_p_0(
  MR_Word SolverInfo_7,
  MR_Word InstalledSet_8,
  MR_Word STATE_VARIABLE_RelSolveCountStats_0_21,
  MR_Word * STATE_VARIABLE_RelSolveCountStats_22);

static void MR_CALL 
test_grades__run_alternatives_for_var_12_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_AbsSolveCountStats_0_7,
  MR_Word * STATE_VARIABLE_AbsSolveCountStats_8,
  MR_Word STATE_VARIABLE_RelSolveCountStats_0_9,
  MR_Word * STATE_VARIABLE_RelSolveCountStats_10);

static void MR_CALL 
test_grades__run_test_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_Box MR_CALL 
test_grades__run_test_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
test_grades__run_test_9_p_0(
  MR_Word SolverInfo0_10,
  MR_Word InstalledSets_11,
  MR_Word TestSpec_12,
  MR_Word STATE_VARIABLE_AbsSolveCountStats_0_31,
  MR_Word * STATE_VARIABLE_AbsSolveCountStats_32,
  MR_Word STATE_VARIABLE_RelSolveCountStats_0_33,
  MR_Word * STATE_VARIABLE_RelSolveCountStats_34);

static MR_Word MR_CALL 
test_grades__llds_test_set_spec_0_f_0(void);

static MR_Word MR_CALL 
test_grades__broad_test_set_spec_0_f_0(void);

static void MR_CALL 
test_grades__print_solve_count_stats_4_p_0(
  MR_String Msg_5,
  MR_Word SolveCountStats_6);

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

static /* final */ const MR_Box test_grades_scalar_common_7[1][9];




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
    ((MR_Box) (test_grades__run_test_9_p_0_1)),
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

static /* final */ const MR_Box test_grades_scalar_common_7[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
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
    MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 31);
    MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 31);
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
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
    MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 31);
    MR_Word ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 31);
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

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
    MR_Word ArgX1_4 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) >> 7)) & (MR_Integer) 31);
    MR_Word ArgY1_5 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))) >> 7)) & (MR_Integer) 31);
    MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 127);
    MR_Word ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 127);
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
    MR_Word ArgX1_3 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))) >> 7)) & (MR_Integer) 31);
    MR_Word ArgY1_4 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) >> 7)) & (MR_Integer) 31);
    MR_Word ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 127);
    MR_Word ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 127);

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
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Integer ArgX3_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Integer ArgY3_11 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Integer ArgX4_13 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Integer ArgY4_14 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
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
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Integer ArgY3_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Integer ArgX4_9 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Integer ArgY4_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));

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
    MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
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
    MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

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
  MR_Word VarId_7 = ((((MR_Unsigned) ((MR_hl_field(0, TestComponent_5, (MR_Integer) 0))) >> 7)) & (MR_Integer) 31);
  MR_Word ValueId_8 = ((MR_Unsigned) ((MR_hl_field(0, TestComponent_5, (MR_Integer) 0))) & (MR_Integer) 127);
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
test_grades__run_installed_grade_set_test_6_p_0(
  MR_Word SolverInfo_7,
  MR_Word InstalledSet_8,
  MR_Word STATE_VARIABLE_RelSolveCountStats_0_21,
  MR_Word * STATE_VARIABLE_RelSolveCountStats_22)
{
  MR_bool succeeded;
  MR_String SetName_11 = ((MR_String) ((MR_hl_field(0, InstalledSet_8, (MR_Integer) 0))));
  MR_Word InstalledGrades_12 = ((MR_Word) ((MR_hl_field(0, InstalledSet_8, (MR_Integer) 1))));
  MR_Word CommitSolveCounts_13;
  MR_Word CommitInstalledGradeSoln_14;
  MR_Word NonCommitInstalledGradeSoln_16;
  MR_String Var_46;
  MR_Integer TotalNumLabelSteps0_58;
  MR_Integer TotalNumPasses0_59;
  MR_Integer TotalNumReqTests0_60;
  MR_Integer NumTests0_61;
  MR_Integer NumLabelSteps_62;
  MR_Integer NumPasses_63;
  MR_Integer NumReqTests_64;
  MR_Integer TotalNumLabelSteps_65;
  MR_Integer TotalNumPasses_66;
  MR_Integer TotalNumReqTests_67;
  MR_Integer NumTests_68;
  MR_Word _NonCommitSolveCounts_15;

  grade_lib__grade_solver__solve_best_installed_grade_5_p_0(SolverInfo_7, (MR_Integer) 0, InstalledGrades_12, &CommitSolveCounts_13, &CommitInstalledGradeSoln_14);
  grade_lib__grade_solver__solve_best_installed_grade_5_p_0(SolverInfo_7, (MR_Integer) 1, InstalledGrades_12, &_NonCommitSolveCounts_15, &NonCommitInstalledGradeSoln_16);
  TotalNumLabelSteps0_58 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_RelSolveCountStats_0_21, (MR_Integer) 0))));
  TotalNumPasses0_59 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_RelSolveCountStats_0_21, (MR_Integer) 1))));
  TotalNumReqTests0_60 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_RelSolveCountStats_0_21, (MR_Integer) 2))));
  NumTests0_61 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_RelSolveCountStats_0_21, (MR_Integer) 3))));
  NumLabelSteps_62 = ((MR_Integer) ((MR_hl_field(0, CommitSolveCounts_13, (MR_Integer) 0))));
  NumPasses_63 = ((MR_Integer) ((MR_hl_field(0, CommitSolveCounts_13, (MR_Integer) 1))));
  NumReqTests_64 = ((MR_Integer) ((MR_hl_field(0, CommitSolveCounts_13, (MR_Integer) 2))));
  TotalNumLabelSteps_65 = (MR_Integer) ((MR_Unsigned) TotalNumLabelSteps0_58 + (MR_Unsigned) NumLabelSteps_62);
  TotalNumPasses_66 = (MR_Integer) ((MR_Unsigned) TotalNumPasses0_59 + (MR_Unsigned) NumPasses_63);
  TotalNumReqTests_67 = (MR_Integer) ((MR_Unsigned) TotalNumReqTests0_60 + (MR_Unsigned) NumReqTests_64);
  NumTests_68 = (MR_Integer) ((MR_Unsigned) NumTests0_61 + (MR_Unsigned) 1);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_RelSolveCountStats_22 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (TotalNumLabelSteps_65));
    MR_hl_field(0, base, 1) = ((MR_Box) (TotalNumPasses_66));
    MR_hl_field(0, base, 2) = ((MR_Box) (TotalNumReqTests_67));
    MR_hl_field(0, base, 3) = ((MR_Box) (NumTests_68));
  }
  mercury__io__write_string_3_p_0((MR_String) "    installed grade set ");
  mercury__string__format__format_string_component_width_noprec_4_p_0((MR_Word) (&test_grades_scalar_common_3[2]), (MR_Integer) 20, SetName_11, &Var_46);
  mercury__io__write_string_3_p_0(Var_46);
  mercury__io__write_string_3_p_0((MR_String) " ");
  switch (MR_tag((MR_Word) CommitInstalledGradeSoln_14)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      mercury__io__write_string_3_p_0((MR_String) "-\n");
      break;
    case (MR_Integer) 1:
      {
        MR_Word ChosenInstalledGrade_18 = (MR_Word) (MR_body((MR_Word) (CommitInstalledGradeSoln_14), (MR_Integer) 1));
        MR_String ChosenInstalledGradeName_19 = ((MR_String) ((MR_hl_field(0, ChosenInstalledGrade_18, (MR_Integer) 0))));

        mercury__io__write_string_3_p_0(ChosenInstalledGradeName_19);
        mercury__io__write_string_3_p_0((MR_String) "\n");
      }
      break;
    case (MR_Integer) 2:
      mercury__io__write_string_3_p_0((MR_String) "INCONSISTENT\n");
      break;
  }
  succeeded = grade_lib__grade_solver____Unify____installed_grade_solution_0_0(CommitInstalledGradeSoln_14, NonCommitInstalledGradeSoln_16);
  if (!(succeeded))
    mercury__io__write_string_3_p_0((MR_String) "NONCOMMIT IS DIFFERENT%s\n");
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
  MR_Word AbsSolveCountStats_38;
  MR_Word RelSolveCountStats_39;
  MR_Word Var_61;
  MR_Word Var_62;
  MR_Word Var_63;
  MR_Word Var_64;
  MR_Word Var_65;
  MR_Word Var_66;
  MR_Word Var_67;
  MR_Word Var_69;
  MR_Word Var_70;
  MR_Word Var_71;
  MR_Word Var_72;
  MR_Word Var_75;
  MR_Word Var_76;
  MR_Word Var_77;
  MR_Word Var_78;
  MR_Word Var_79;
  MR_Word Var_80;
  MR_Word Var_81;
  MR_Word Var_84;
  MR_Word Var_85;
  MR_Word Var_86;
  MR_Word Var_87;
  MR_Word Var_88;
  MR_Word Var_91;
  MR_Word Var_92;
  MR_Word Var_103;
  MR_Word Var_104;
  MR_Word Var_105;
  MR_Word Var_108;
  MR_Word Var_109;
  MR_Word Var_110;
  MR_Word Var_113;
  MR_Word Var_114;
  MR_Word Var_115;
  MR_Word Var_116;
  MR_Word Var_117;
  MR_Word Var_118;
  MR_Word Var_122;
  MR_Word TestSpec_146;
  MR_Word TestSpecs_147;
  MR_Word Var_154;
  MR_Word STATE_VARIABLE_AbsSolveCountStats_35_155;
  MR_Word STATE_VARIABLE_RelSolveCountStats_36_156;
  MR_Word TestSpec_173;
  MR_Word Var_181;

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
    Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_72, 0) = ((MR_Box) (Java_19));
    MR_hl_field(1, Var_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_71, 0) = ((MR_Box) (Csharp_18));
    MR_hl_field(1, Var_71, 1) = ((MR_Box) (Var_72));
  }
  {
    Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_70, 0) = ((MR_Box) (HlcGcPar_17));
    MR_hl_field(1, Var_70, 1) = ((MR_Box) (Var_71));
  }
  {
    Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_69, 0) = ((MR_Box) (HlcGcTr_16));
    MR_hl_field(1, Var_69, 1) = ((MR_Box) (Var_70));
  }
  {
    GradesEMLDS_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, GradesEMLDS_28, 0) = ((MR_Box) (HlcGc_15));
    MR_hl_field(1, GradesEMLDS_28, 1) = ((MR_Box) (Var_69));
  }
  {
    Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_67, 0) = ((MR_Box) (NoneGcProfAllStseg_14));
    MR_hl_field(1, Var_67, 1) = ((MR_Box) (GradesEMLDS_28));
  }
  {
    Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_66, 0) = ((MR_Box) (AsmFastGcProfAllStseg_13));
    MR_hl_field(1, Var_66, 1) = ((MR_Box) (Var_67));
  }
  {
    Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_65, 0) = ((MR_Box) (AsmFastGcProfDeepStseg_12));
    MR_hl_field(1, Var_65, 1) = ((MR_Box) (Var_66));
  }
  {
    Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_64, 0) = ((MR_Box) (AsmFastGcDecldebugStseg_11));
    MR_hl_field(1, Var_64, 1) = ((MR_Box) (Var_65));
  }
  {
    Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_63, 0) = ((MR_Box) (AsmFastGcDebugStseg_10));
    MR_hl_field(1, Var_63, 1) = ((MR_Box) (Var_64));
  }
  {
    Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_62, 0) = ((MR_Box) (AsmFastGcStsegTr_9));
    MR_hl_field(1, Var_62, 1) = ((MR_Box) (Var_63));
  }
  {
    Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_61, 0) = ((MR_Box) (AsmFastGcStseg_8));
    MR_hl_field(1, Var_61, 1) = ((MR_Box) (Var_62));
  }
  {
    GradesAll_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, GradesAll_20, 0) = ((MR_Box) (AsmFastGc_7));
    MR_hl_field(1, GradesAll_20, 1) = ((MR_Box) (Var_61));
  }
  {
    SetAll_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, SetAll_21, 0) = ((MR_Box) ((MR_String) "grades_all"));
    MR_hl_field(0, SetAll_21, 1) = ((MR_Box) (GradesAll_20));
  }
  {
    Var_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_81, 0) = ((MR_Box) (NoneGcProfAllStseg_14));
    MR_hl_field(1, Var_81, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_80, 0) = ((MR_Box) (AsmFastGcProfAllStseg_13));
    MR_hl_field(1, Var_80, 1) = ((MR_Box) (Var_81));
  }
  {
    Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_79, 0) = ((MR_Box) (AsmFastGcProfDeepStseg_12));
    MR_hl_field(1, Var_79, 1) = ((MR_Box) (Var_80));
  }
  {
    Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_78, 0) = ((MR_Box) (AsmFastGcDecldebugStseg_11));
    MR_hl_field(1, Var_78, 1) = ((MR_Box) (Var_79));
  }
  {
    Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_77, 0) = ((MR_Box) (AsmFastGcDebugStseg_10));
    MR_hl_field(1, Var_77, 1) = ((MR_Box) (Var_78));
  }
  {
    Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_76, 0) = ((MR_Box) (AsmFastGcStsegTr_9));
    MR_hl_field(1, Var_76, 1) = ((MR_Box) (Var_77));
  }
  {
    Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_75, 0) = ((MR_Box) (AsmFastGcStseg_8));
    MR_hl_field(1, Var_75, 1) = ((MR_Box) (Var_76));
  }
  {
    GradesLLDSAll_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, GradesLLDSAll_22, 0) = ((MR_Box) (AsmFastGc_7));
    MR_hl_field(1, GradesLLDSAll_22, 1) = ((MR_Box) (Var_75));
  }
  {
    SetLLDSAll_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, SetLLDSAll_23, 0) = ((MR_Box) ((MR_String) "grades_llds_all"));
    MR_hl_field(0, SetLLDSAll_23, 1) = ((MR_Box) (GradesLLDSAll_22));
  }
  {
    Var_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_88, 0) = ((MR_Box) (AsmFastGcProfDeepStseg_12));
    MR_hl_field(1, Var_88, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_87, 0) = ((MR_Box) (AsmFastGcDecldebugStseg_11));
    MR_hl_field(1, Var_87, 1) = ((MR_Box) (Var_88));
  }
  {
    Var_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_86, 0) = ((MR_Box) (AsmFastGcDebugStseg_10));
    MR_hl_field(1, Var_86, 1) = ((MR_Box) (Var_87));
  }
  {
    Var_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_85, 0) = ((MR_Box) (AsmFastGcStsegTr_9));
    MR_hl_field(1, Var_85, 1) = ((MR_Box) (Var_86));
  }
  {
    Var_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_84, 0) = ((MR_Box) (AsmFastGcStseg_8));
    MR_hl_field(1, Var_84, 1) = ((MR_Box) (Var_85));
  }
  {
    GradesLLDSDebug_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, GradesLLDSDebug_24, 0) = ((MR_Box) (AsmFastGc_7));
    MR_hl_field(1, GradesLLDSDebug_24, 1) = ((MR_Box) (Var_84));
  }
  {
    SetLLDSDebug_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, SetLLDSDebug_25, 0) = ((MR_Box) ((MR_String) "grades_llds_debug"));
    MR_hl_field(0, SetLLDSDebug_25, 1) = ((MR_Box) (GradesLLDSDebug_24));
  }
  {
    Var_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_92, 0) = ((MR_Box) (AsmFastGcStsegTr_9));
    MR_hl_field(1, Var_92, 1) = ((MR_Box) (Var_80));
  }
  {
    Var_91 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_91, 0) = ((MR_Box) (AsmFastGcStseg_8));
    MR_hl_field(1, Var_91, 1) = ((MR_Box) (Var_92));
  }
  {
    GradesLLDSProf_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, GradesLLDSProf_26, 0) = ((MR_Box) (AsmFastGc_7));
    MR_hl_field(1, GradesLLDSProf_26, 1) = ((MR_Box) (Var_91));
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
    Var_105 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_105, 0) = ((MR_Box) (AsmFastGcStsegTr_9));
    MR_hl_field(1, Var_105, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_104 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_104, 0) = ((MR_Box) (HlcGc_15));
    MR_hl_field(1, Var_104, 1) = ((MR_Box) (Var_105));
  }
  {
    Var_103 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_103, 0) = ((MR_Box) (AsmFastGcStseg_8));
    MR_hl_field(1, Var_103, 1) = ((MR_Box) (Var_104));
  }
  {
    GradesTrOnlyLLDS_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, GradesTrOnlyLLDS_30, 0) = ((MR_Box) (AsmFastGc_7));
    MR_hl_field(1, GradesTrOnlyLLDS_30, 1) = ((MR_Box) (Var_103));
  }
  {
    SetTrOnlyLLDS_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, SetTrOnlyLLDS_31, 0) = ((MR_Box) ((MR_String) "grades_tr_llds"));
    MR_hl_field(0, SetTrOnlyLLDS_31, 1) = ((MR_Box) (GradesTrOnlyLLDS_30));
  }
  {
    Var_110 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_110, 0) = ((MR_Box) (HlcGcTr_16));
    MR_hl_field(1, Var_110, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_109 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_109, 0) = ((MR_Box) (HlcGc_15));
    MR_hl_field(1, Var_109, 1) = ((MR_Box) (Var_110));
  }
  {
    Var_108 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_108, 0) = ((MR_Box) (AsmFastGcStseg_8));
    MR_hl_field(1, Var_108, 1) = ((MR_Box) (Var_109));
  }
  {
    GradesTrOnlyMLDS_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, GradesTrOnlyMLDS_32, 0) = ((MR_Box) (AsmFastGc_7));
    MR_hl_field(1, GradesTrOnlyMLDS_32, 1) = ((MR_Box) (Var_108));
  }
  {
    SetTrOnlyMLDS_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, SetTrOnlyMLDS_33, 0) = ((MR_Box) ((MR_String) "grades_tr_mlds"));
    MR_hl_field(0, SetTrOnlyMLDS_33, 1) = ((MR_Box) (GradesTrOnlyMLDS_32));
  }
  {
    Var_118 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_118, 0) = ((MR_Box) (SetTrOnlyMLDS_33));
    MR_hl_field(1, Var_118, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_117 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_117, 0) = ((MR_Box) (SetTrOnlyLLDS_31));
    MR_hl_field(1, Var_117, 1) = ((MR_Box) (Var_118));
  }
  {
    Var_116 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_116, 0) = ((MR_Box) (SetEMLDS_29));
    MR_hl_field(1, Var_116, 1) = ((MR_Box) (Var_117));
  }
  {
    Var_115 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_115, 0) = ((MR_Box) (SetLLDSProf_27));
    MR_hl_field(1, Var_115, 1) = ((MR_Box) (Var_116));
  }
  {
    Var_114 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_114, 0) = ((MR_Box) (SetLLDSDebug_25));
    MR_hl_field(1, Var_114, 1) = ((MR_Box) (Var_115));
  }
  {
    Var_113 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_113, 0) = ((MR_Box) (SetLLDSAll_23));
    MR_hl_field(1, Var_113, 1) = ((MR_Box) (Var_114));
  }
  {
    InstalledSets_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, InstalledSets_34, 0) = ((MR_Box) (SetAll_21));
    MR_hl_field(1, InstalledSets_34, 1) = ((MR_Box) (Var_113));
  }
  TestSpec_146 = test_grades__broad_test_set_spec_0_f_0();
  Var_122 = test_grades__llds_test_set_spec_0_f_0();
  {
    TestSpecs_147 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, TestSpecs_147, 0) = ((MR_Box) (Var_122));
    MR_hl_field(1, TestSpecs_147, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_154 = mercury__cord__init_0_f_0((MR_Word) (&test_grades__test_grades__type_ctor_info_test_component_0));
  if ((TestSpec_146 == (MR_Word) ((MR_Unsigned) 0U)))
    test_grades__run_test_9_p_0(SolverInfo0_6, InstalledSets_34, Var_154, (MR_Word) (&test_grades_scalar_common_4[0]), &STATE_VARIABLE_AbsSolveCountStats_35_155, (MR_Word) (&test_grades_scalar_common_4[0]), &STATE_VARIABLE_RelSolveCountStats_36_156);
  else
  {
    MR_Word TestSetSpecHead_159 = ((MR_Word) ((MR_hl_field(1, TestSpec_146, (MR_Integer) 0))));
    MR_Word TestSetSpecTail_160 = ((MR_Word) ((MR_hl_field(1, TestSpec_146, (MR_Integer) 1))));
    MR_Word VarId_161 = ((MR_Unsigned) ((MR_hl_field(0, TestSetSpecHead_159, (MR_Integer) 0))) & (MR_Integer) 31);
    MR_Word ValueIds_162 = ((MR_Word) ((MR_hl_field(0, TestSetSpecHead_159, (MR_Integer) 1))));

    test_grades__run_alternatives_for_var_12_p_0(SolverInfo0_6, InstalledSets_34, VarId_161, ValueIds_162, TestSetSpecTail_160, Var_154, (MR_Word) (&test_grades_scalar_common_4[0]), &STATE_VARIABLE_AbsSolveCountStats_35_155, (MR_Word) (&test_grades_scalar_common_4[0]), &STATE_VARIABLE_RelSolveCountStats_36_156);
  }
  TestSpec_173 = ((MR_Word) ((MR_hl_field(1, TestSpecs_147, (MR_Integer) 0))));
  Var_181 = mercury__cord__init_0_f_0((MR_Word) (&test_grades__test_grades__type_ctor_info_test_component_0));
  if ((TestSpec_173 == (MR_Word) ((MR_Unsigned) 0U)))
    test_grades__run_test_9_p_0(SolverInfo0_6, InstalledSets_34, Var_181, STATE_VARIABLE_AbsSolveCountStats_35_155, &AbsSolveCountStats_38, STATE_VARIABLE_RelSolveCountStats_36_156, &RelSolveCountStats_39);
  else
  {
    MR_Word TestSetSpecHead_186 = ((MR_Word) ((MR_hl_field(1, TestSpec_173, (MR_Integer) 0))));
    MR_Word TestSetSpecTail_187 = ((MR_Word) ((MR_hl_field(1, TestSpec_173, (MR_Integer) 1))));
    MR_Word VarId_188 = ((MR_Unsigned) ((MR_hl_field(0, TestSetSpecHead_186, (MR_Integer) 0))) & (MR_Integer) 31);
    MR_Word ValueIds_189 = ((MR_Word) ((MR_hl_field(0, TestSetSpecHead_186, (MR_Integer) 1))));

    test_grades__run_alternatives_for_var_12_p_0(SolverInfo0_6, InstalledSets_34, VarId_188, ValueIds_189, TestSetSpecTail_187, Var_181, STATE_VARIABLE_AbsSolveCountStats_35_155, &AbsSolveCountStats_38, STATE_VARIABLE_RelSolveCountStats_36_156, &RelSolveCountStats_39);
  }
  test_grades__print_solve_count_stats_4_p_0((MR_String) "\nAbsolute solve counts:\n", AbsSolveCountStats_38);
  test_grades__print_solve_count_stats_4_p_0((MR_String) "\nRelative solve counts:\n", RelSolveCountStats_39);
}

static void MR_CALL 
test_grades__run_alternatives_for_var_12_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_AbsSolveCountStats_0_7,
  MR_Word * STATE_VARIABLE_AbsSolveCountStats_8,
  MR_Word STATE_VARIABLE_RelSolveCountStats_0_9,
  MR_Word * STATE_VARIABLE_RelSolveCountStats_10)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_RelSolveCountStats_10 = STATE_VARIABLE_RelSolveCountStats_0_9;
      *STATE_VARIABLE_AbsSolveCountStats_8 = STATE_VARIABLE_AbsSolveCountStats_0_7;
    }
    else
    {
      MR_Word ValueId_30 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
      MR_Word ValueIds_31 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
      MR_String VarName_37;
      MR_String ValueName_38;
      MR_Word MaybeError_39;
      MR_Word SolverInfoForThisAlternative_40;
      MR_Word ThisTestComponent_42;
      MR_Word TestSpecSoFarForThisAlternative_43;
      MR_Word STATE_VARIABLE_AbsSolveCountStats_53_53;
      MR_Word STATE_VARIABLE_RelSolveCountStats_54_54;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_AbsSolveCountStats_0_7;
      MR_Word next_value_of_STATE_VARIABLE_RelSolveCountStats_0_9;

      var_value_names__solver_var_name_2_p_1(&VarName_37, HeadVar__3_3);
      var_value_names__solver_var_value_name_2_p_1(&ValueName_38, ValueId_30);
      grade_lib__grade_setup__set_solver_var_9_p_0(VarName_37, ValueName_38, HeadVar__3_3, ValueId_30, (MR_Integer) 1, (MR_Word) ((MR_Unsigned) 4U), &MaybeError_39, HeadVar__1_1, &SolverInfoForThisAlternative_40);
      if (!((MaybeError_39 == (MR_Word) ((MR_Unsigned) 0U))))
      {
        MR_String ErrorMsg_41 = ((MR_String) ((MR_hl_field(1, MaybeError_39, (MR_Integer) 0))));

        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140test_grades.run_alternatives_for_var\'/12", ErrorMsg_41);
          return;
        }
      }
      {
        ThisTestComponent_42 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ThisTestComponent_42, 0) = (MR_Box) (((((MR_Unsigned) (HeadVar__3_3) << 7)) | (MR_Unsigned) (ValueId_30)));
      }
      TestSpecSoFarForThisAlternative_43 = mercury__cord__snoc_2_f_0((MR_Word) (&test_grades__test_grades__type_ctor_info_test_component_0), HeadVar__6_6, ((MR_Box) (ThisTestComponent_42)));
      if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
        test_grades__run_test_9_p_0(SolverInfoForThisAlternative_40, HeadVar__2_2, TestSpecSoFarForThisAlternative_43, STATE_VARIABLE_AbsSolveCountStats_0_7, &STATE_VARIABLE_AbsSolveCountStats_53_53, STATE_VARIABLE_RelSolveCountStats_0_9, &STATE_VARIABLE_RelSolveCountStats_54_54);
      else
      {
        MR_Word TestSetSpecHead_57 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 0))));
        MR_Word TestSetSpecTail_58 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 1))));
        MR_Word VarId_59 = ((MR_Unsigned) ((MR_hl_field(0, TestSetSpecHead_57, (MR_Integer) 0))) & (MR_Integer) 31);
        MR_Word ValueIds_60 = ((MR_Word) ((MR_hl_field(0, TestSetSpecHead_57, (MR_Integer) 1))));

        test_grades__run_alternatives_for_var_12_p_0(SolverInfoForThisAlternative_40, HeadVar__2_2, VarId_59, ValueIds_60, TestSetSpecTail_58, TestSpecSoFarForThisAlternative_43, STATE_VARIABLE_AbsSolveCountStats_0_7, &STATE_VARIABLE_AbsSolveCountStats_53_53, STATE_VARIABLE_RelSolveCountStats_0_9, &STATE_VARIABLE_RelSolveCountStats_54_54);
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = ValueIds_31;
      next_value_of_STATE_VARIABLE_AbsSolveCountStats_0_7 = STATE_VARIABLE_AbsSolveCountStats_53_53;
      next_value_of_STATE_VARIABLE_RelSolveCountStats_0_9 = STATE_VARIABLE_RelSolveCountStats_54_54;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_AbsSolveCountStats_0_7 = next_value_of_STATE_VARIABLE_AbsSolveCountStats_0_7;
      STATE_VARIABLE_RelSolveCountStats_0_9 = next_value_of_STATE_VARIABLE_RelSolveCountStats_0_9;
      continue;
    }
    break;
  }
}

static void MR_CALL 
test_grades__run_test_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_RelSolveCountStats_22;

  test_grades__run_installed_grade_set_test_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_RelSolveCountStats_22);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_RelSolveCountStats_22));
}

static MR_Box MR_CALL 
test_grades__run_test_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_Str_6;

  conv0_Str_6 = test_grades__test_component_to_string_2_f_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Str_6));
  return wrapper_arg_2;
}

static void MR_CALL 
test_grades__run_test_9_p_0(
  MR_Word SolverInfo0_10,
  MR_Word InstalledSets_11,
  MR_Word TestSpec_12,
  MR_Word STATE_VARIABLE_AbsSolveCountStats_0_31,
  MR_Word * STATE_VARIABLE_AbsSolveCountStats_32,
  MR_Word STATE_VARIABLE_RelSolveCountStats_0_33,
  MR_Word * STATE_VARIABLE_RelSolveCountStats_34)
{
  MR_Word SolveCounts_16;
  MR_Word Soln_17;
  MR_Integer NumTests_21;
  MR_Integer NumLabelSteps_22;
  MR_Integer NumPasses_23;
  MR_Integer NumReqTests_24;
  MR_String Var_39;
  MR_String Var_51;
  MR_String Var_78;
  MR_String Var_89;
  MR_String Var_100;
  MR_Integer TotalNumLabelSteps0_117;
  MR_Integer TotalNumPasses0_118;
  MR_Integer TotalNumReqTests0_119;
  MR_Integer NumTests0_120;
  MR_Integer TotalNumLabelSteps_124;
  MR_Integer TotalNumPasses_125;
  MR_Integer TotalNumReqTests_126;
  MR_String TestSeqStr_129;
  MR_Word TestSpecComponents_130;
  MR_Word TestComponentStrs_131;
  MR_Word Var_133;
  MR_String Var_137;
  MR_String Var_139;
  MR_String Var_141;

  grade_lib__grade_solver__solve_absolute_3_p_0(SolverInfo0_10, &SolveCounts_16, &Soln_17);
  TotalNumLabelSteps0_117 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_AbsSolveCountStats_0_31, (MR_Integer) 0))));
  TotalNumPasses0_118 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_AbsSolveCountStats_0_31, (MR_Integer) 1))));
  TotalNumReqTests0_119 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_AbsSolveCountStats_0_31, (MR_Integer) 2))));
  NumTests0_120 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_AbsSolveCountStats_0_31, (MR_Integer) 3))));
  NumLabelSteps_22 = ((MR_Integer) ((MR_hl_field(0, SolveCounts_16, (MR_Integer) 0))));
  NumPasses_23 = ((MR_Integer) ((MR_hl_field(0, SolveCounts_16, (MR_Integer) 1))));
  NumReqTests_24 = ((MR_Integer) ((MR_hl_field(0, SolveCounts_16, (MR_Integer) 2))));
  TotalNumLabelSteps_124 = (MR_Integer) ((MR_Unsigned) TotalNumLabelSteps0_117 + (MR_Unsigned) NumLabelSteps_22);
  TotalNumPasses_125 = (MR_Integer) ((MR_Unsigned) TotalNumPasses0_118 + (MR_Unsigned) NumPasses_23);
  TotalNumReqTests_126 = (MR_Integer) ((MR_Unsigned) TotalNumReqTests0_119 + (MR_Unsigned) NumReqTests_24);
  NumTests_21 = (MR_Integer) ((MR_Unsigned) NumTests0_120 + (MR_Unsigned) 1);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_AbsSolveCountStats_32 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (TotalNumLabelSteps_124));
    MR_hl_field(0, base, 1) = ((MR_Box) (TotalNumPasses_125));
    MR_hl_field(0, base, 2) = ((MR_Box) (TotalNumReqTests_126));
    MR_hl_field(0, base, 3) = ((MR_Box) (NumTests_21));
  }
  mercury__io__nl_2_p_0();
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&test_grades_scalar_common_3[1]), NumTests_21, &Var_137);
  Var_139 = mercury__string__f_43_43_2_f_0(Var_137, (MR_String) ":\n");
  Var_141 = mercury__string__f_43_43_2_f_0((MR_String) "Test ", Var_139);
  TestSeqStr_129 = mercury__string__f_43_43_2_f_0((MR_String) "", Var_141);
  TestSpecComponents_130 = mercury__cord__to_list_1_f_0((MR_Word) (&test_grades__test_grades__type_ctor_info_test_component_0), TestSpec_12);
  TestComponentStrs_131 = mercury__list__map_2_f_0((MR_Word) (&test_grades__test_grades__type_ctor_info_test_component_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&test_grades_scalar_common_4[2]), TestSpecComponents_130);
  {
    Var_133 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_133, 0) = ((MR_Box) (TestSeqStr_129));
    MR_hl_field(1, Var_133, 1) = ((MR_Box) (TestComponentStrs_131));
  }
  Var_39 = mercury__string__append_list_1_f_0(Var_133);
  mercury__io__write_string_3_p_0(Var_39);
  mercury__io__write_string_3_p_0((MR_String) "ABS PERF: ");
  mercury__string__format__format_signed_int_component_width_noprec_4_p_0((MR_Word) (&test_grades_scalar_common_3[1]), (MR_Integer) 2, NumLabelSteps_22, &Var_78);
  mercury__io__write_string_3_p_0(Var_78);
  mercury__io__write_string_3_p_0((MR_String) " label steps, ");
  mercury__string__format__format_signed_int_component_width_noprec_4_p_0((MR_Word) (&test_grades_scalar_common_3[1]), (MR_Integer) 2, NumPasses_23, &Var_89);
  mercury__io__write_string_3_p_0(Var_89);
  mercury__io__write_string_3_p_0((MR_String) " passes, ");
  mercury__string__format__format_signed_int_component_width_noprec_4_p_0((MR_Word) (&test_grades_scalar_common_3[1]), (MR_Integer) 3, NumReqTests_24, &Var_100);
  mercury__io__write_string_3_p_0(Var_100);
  mercury__io__write_string_3_p_0((MR_String) " requirement tests\n");
  Var_51 = grade_lib__grade_solver__soln_to_str_2_f_0((MR_String) "    ", Soln_17);
  mercury__io__write_string_3_p_0(Var_51);
  if (((MR_tag((MR_Word) Soln_17)) == (MR_Integer) 0))
    *STATE_VARIABLE_RelSolveCountStats_34 = STATE_VARIABLE_RelSolveCountStats_0_33;
  else
  {
    MR_Word SuccMap_26 = ((MR_Word) ((MR_hl_field(1, Soln_17, (MR_Integer) 0))));
    MR_Word GradeVars_27;
    MR_Word GradeStructure_28;
    MR_String UserGradeStr_29;
    MR_String LinkGradeStr_30;
    MR_Word Var_66;
    MR_Box conv3_STATE_VARIABLE_RelSolveCountStats_34;
    MR_Box conv2_STATE_VARIABLE_IO_36;

    GradeVars_27 = grade_lib__grade_vars__success_map_to_grade_vars_1_f_0(SuccMap_26);
    GradeStructure_28 = grade_lib__grade_structure__grade_vars_to_grade_structure_1_f_0(GradeVars_27);
    UserGradeStr_29 = grade_lib__grade_string__grade_structure_to_grade_string_2_f_0((MR_Integer) 0, GradeStructure_28);
    LinkGradeStr_30 = grade_lib__grade_string__grade_structure_to_grade_string_2_f_0((MR_Integer) 1, GradeStructure_28);
    mercury__io__write_string_3_p_0((MR_String) "    ABS GRADE USER ");
    mercury__io__write_string_3_p_0(UserGradeStr_29);
    mercury__io__write_string_3_p_0((MR_String) "\n");
    mercury__io__write_string_3_p_0((MR_String) "    ABS GRADE LINK CHECK ");
    mercury__io__write_string_3_p_0(LinkGradeStr_30);
    mercury__io__write_string_3_p_0((MR_String) "\n");
    {
      Var_66 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_66, 0) = ((MR_Box) (&test_grades_scalar_common_7[0]));
      MR_hl_field(0, Var_66, 1) = ((MR_Box) (test_grades__run_test_9_p_0_2));
      MR_hl_field(0, Var_66, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_66, 3) = ((MR_Box) (SolverInfo0_10));
    }
    mercury__list__foldl2_6_p_2((MR_Word) (&test_grades__test_grades__type_ctor_info_installed_grade_set_0), (MR_Word) (&test_grades__test_grades__type_ctor_info_solve_count_stats_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_66, InstalledSets_11, ((MR_Box) (STATE_VARIABLE_RelSolveCountStats_0_33)), &conv3_STATE_VARIABLE_RelSolveCountStats_34, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_36);
    *STATE_VARIABLE_RelSolveCountStats_34 = ((MR_Word) (conv3_STATE_VARIABLE_RelSolveCountStats_34));
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
test_grades__print_solve_count_stats_4_p_0(
  MR_String Msg_5,
  MR_Word SolveCountStats_6)
{
  MR_bool succeeded;
  MR_Integer TotalNumLabelSteps_8 = ((MR_Integer) ((MR_hl_field(0, SolveCountStats_6, (MR_Integer) 0))));
  MR_Integer TotalNumPasses_9 = ((MR_Integer) ((MR_hl_field(0, SolveCountStats_6, (MR_Integer) 1))));
  MR_Integer TotalNumReqTests_10 = ((MR_Integer) ((MR_hl_field(0, SolveCountStats_6, (MR_Integer) 2))));
  MR_Integer NumTests_11 = ((MR_Integer) ((MR_hl_field(0, SolveCountStats_6, (MR_Integer) 3))));
  MR_String Var_54;

  mercury__io__write_string_3_p_0(Msg_5);
  mercury__io__write_string_3_p_0((MR_String) "\n");
  mercury__io__write_string_3_p_0((MR_String) "Number of tests:                     ");
  mercury__string__format__format_signed_int_component_width_noprec_4_p_0((MR_Word) (&test_grades_scalar_common_3[1]), (MR_Integer) 4, NumTests_11, &Var_54);
  mercury__io__write_string_3_p_0(Var_54);
  mercury__io__write_string_3_p_0((MR_String) "\n");
  succeeded = (NumTests_11 > (MR_Integer) 0);
  if (succeeded)
  {
    MR_Float Var_29;
    MR_Float Var_30;
    MR_Float Var_31;
    MR_Float Var_37;
    MR_Float Var_38;
    MR_Float Var_39;
    MR_Float Var_45;
    MR_Float Var_46;
    MR_Float Var_47;
    MR_String Var_66;
    MR_String Var_80;
    MR_String Var_94;

    Var_30 = mercury__float__float_1_f_0(TotalNumLabelSteps_8);
    Var_31 = mercury__float__float_1_f_0(NumTests_11);
    Var_29 = mercury__float__f_slash_2_f_0(Var_30, Var_31);
    mercury__io__write_string_3_p_0((MR_String) "Average number of label steps:       ");
    mercury__string__format__format_float_component_width_prec_6_p_0((MR_Word) (&test_grades_scalar_common_3[1]), (MR_Integer) 7, (MR_Integer) 2, (MR_Integer) 2, Var_29, &Var_66);
    mercury__io__write_string_3_p_0(Var_66);
    mercury__io__write_string_3_p_0((MR_String) "\n");
    Var_38 = mercury__float__float_1_f_0(TotalNumPasses_9);
    Var_39 = mercury__float__float_1_f_0(NumTests_11);
    Var_37 = mercury__float__f_slash_2_f_0(Var_38, Var_39);
    mercury__io__write_string_3_p_0((MR_String) "Average number of passes:            ");
    mercury__string__format__format_float_component_width_prec_6_p_0((MR_Word) (&test_grades_scalar_common_3[1]), (MR_Integer) 7, (MR_Integer) 2, (MR_Integer) 2, Var_37, &Var_80);
    mercury__io__write_string_3_p_0(Var_80);
    mercury__io__write_string_3_p_0((MR_String) "\n");
    Var_46 = mercury__float__float_1_f_0(TotalNumReqTests_10);
    Var_47 = mercury__float__float_1_f_0(NumTests_11);
    Var_45 = mercury__float__f_slash_2_f_0(Var_46, Var_47);
    mercury__io__write_string_3_p_0((MR_String) "Average number of requirement tests: ");
    mercury__string__format__format_float_component_width_prec_6_p_0((MR_Word) (&test_grades_scalar_common_3[1]), (MR_Integer) 7, (MR_Integer) 2, (MR_Integer) 2, Var_45, &Var_94);
    mercury__io__write_string_3_p_0(Var_94);
    mercury__io__write_string_3_p_0((MR_String) "\n");
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

  grade_lib__grade_setup__assign_var_in_map_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__5_5);
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
    MR_String HeadErrorMsg_9 = ((MR_String) ((MR_hl_field(1, MaybeSpecSuccMap_7, (MR_Integer) 0))));
    MR_Word TailErrorMsgs_10 = ((MR_Word) ((MR_hl_field(1, MaybeSpecSuccMap_7, (MR_Integer) 1))));
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
    SpecSuccMap_8 = ((MR_Word) ((MR_hl_field(0, MaybeSpecSuccMap_7, (MR_Integer) 0))));
  SolverVarMap0_12 = ((MR_Word) ((MR_hl_field(0, SolverInfo0_4, (MR_Integer) 2))));
  mercury__map__foldl_4_p_0((MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0), (MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0), (MR_Word) (&test_grades_scalar_common_1[0]), (MR_Word) (&test_grades_scalar_common_4[1]), SpecSuccMap_8, ((MR_Box) (SolverVarMap0_12)), &conv1_SolverVarMap_13);
  SolverVarMap_13 = ((MR_Word) (conv1_SolverVarMap_13));
  Var_32 = ((MR_Word) ((MR_hl_field(0, SolverInfo0_4, (MR_Integer) 0))));
  Var_33 = ((MR_Word) ((MR_hl_field(0, SolverInfo0_4, (MR_Integer) 1))));
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
    StdSuccMap_18 = ((MR_Word) ((MR_hl_field(1, Soln_16, (MR_Integer) 0))));
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
