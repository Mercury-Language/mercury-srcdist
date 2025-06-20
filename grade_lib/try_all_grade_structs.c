/*
** Automatically generated from `try_all_grade_structs.m'
** by the Mercury compiler,
** version rotd-2025-06-20
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


// :- module try_all_grade_structs.
// :- implementation.

/*
INIT mercury__try_all_grade_structs__init
ENDINIT
*/

#include "try_all_grade_structs.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
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
#include "set.mih"
#include "set_ordlist.mih"
#include "solutions.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "grade_lib.grade_setup.mih"
#include "grade_lib.grade_solver.mih"
#include "grade_lib.grade_spec.mih"
#include "grade_lib.grade_state.mih"
#include "grade_lib.grade_string.mih"
#include "grade_lib.grade_structure.mih"
#include "grade_lib.grade_vars.mih"
#include "string.format.mih"
#include "string.parse_util.mih"



struct try_all_grade_structs__generate_all_tests_1_p_0_env_0_s {
  MR_Word * try_all_grade_structs__generate_all_tests_1_p_0_env_0__GradeStructure_2;
  MR_Cont try_all_grade_structs__generate_all_tests_1_p_0_env_0__cont;
  void * try_all_grade_structs__generate_all_tests_1_p_0_env_0__cont_env_ptr;
  MR_Word try_all_grade_structs__generate_all_tests_1_p_0_env_0__PregenKind_3;
  MR_Word try_all_grade_structs__generate_all_tests_1_p_0_env_0__PregenGrade_4;
  MR_Word try_all_grade_structs__generate_all_tests_1_p_0_env_0__GccConf_5;
  MR_Word try_all_grade_structs__generate_all_tests_1_p_0_env_0__StackLen_6;
  MR_Word try_all_grade_structs__generate_all_tests_1_p_0_env_0__LLDSTSMinModel_17;
  MR_Word try_all_grade_structs__generate_all_tests_1_p_0_env_0__MercFile_22;
  MR_Word try_all_grade_structs__generate_all_tests_1_p_0_env_0__LowTagBitsUse_23;
  MR_Word try_all_grade_structs__generate_all_tests_1_p_0_env_0__MercFloat_24;
  MR_Word try_all_grade_structs__generate_all_tests_1_p_0_env_0__LldsGrade_25;
  MR_Word try_all_grade_structs__generate_all_tests_1_p_0_env_0__CGc_7;
  MR_Word try_all_grade_structs__generate_all_tests_1_p_0_env_0__Trail_8;
  MR_Word try_all_grade_structs__generate_all_tests_1_p_0_env_0__LLDSPerfProf_9;
  MR_Word try_all_grade_structs__generate_all_tests_1_p_0_env_0__TermSizeProf_12;
  MR_Word try_all_grade_structs__generate_all_tests_1_p_0_env_0__Debug_13;
  MR_Word try_all_grade_structs__generate_all_tests_1_p_0_env_0__RBMM_14;
  MR_Word try_all_grade_structs__generate_all_tests_1_p_0_env_0__RBMMDebug_15;
  MR_Word try_all_grade_structs__generate_all_tests_1_p_0_env_0__RBMMProf_16;
  MR_Word try_all_grade_structs__generate_all_tests_1_p_0_env_0__MProfTime_10;
  MR_Word try_all_grade_structs__generate_all_tests_1_p_0_env_0__MProfMemory_11;
  MR_Word try_all_grade_structs__generate_all_tests_1_p_0_env_0__MinModelKind_18;
  MR_Word try_all_grade_structs__generate_all_tests_1_p_0_env_0__LLDSMMGc_19;
  MR_Word try_all_grade_structs__generate_all_tests_1_p_0_env_0__Debug_26;
  MR_Word try_all_grade_structs__generate_all_tests_1_p_0_env_0__ThreadSafeCGc_20;
  MR_Word try_all_grade_structs__generate_all_tests_1_p_0_env_0__TScopeProf_21;
  MR_Word try_all_grade_structs__generate_all_tests_1_p_0_env_0__Trail_27;
  MR_Word try_all_grade_structs__generate_all_tests_1_p_0_env_0__MldsTarget_28;
  MR_Word try_all_grade_structs__generate_all_tests_1_p_0_env_0__TargetDebug_30;
  MR_Word try_all_grade_structs__generate_all_tests_1_p_0_env_0__MldsGrade_31;
  MR_Word try_all_grade_structs__generate_all_tests_1_p_0_env_0__MldsCThreadSafe_38;
  MR_Word try_all_grade_structs__generate_all_tests_1_p_0_env_0__Trail_40;
  MR_Word try_all_grade_structs__generate_all_tests_1_p_0_env_0__MercFile_41;
  MR_Word try_all_grade_structs__generate_all_tests_1_p_0_env_0__LowTagBitsUse_42;
  MR_Word try_all_grade_structs__generate_all_tests_1_p_0_env_0__MercFloat_43;
  MR_Word try_all_grade_structs__generate_all_tests_1_p_0_env_0__CGc_33;
  MR_Word try_all_grade_structs__generate_all_tests_1_p_0_env_0__MldsCPerfProf_34;
  MR_Word try_all_grade_structs__generate_all_tests_1_p_0_env_0__SSDebug_37;
  MR_Word try_all_grade_structs__generate_all_tests_1_p_0_env_0__MProfTime_35;
  MR_Word try_all_grade_structs__generate_all_tests_1_p_0_env_0__MProfMemory_36;
  MR_Word try_all_grade_structs__generate_all_tests_1_p_0_env_0__ThreadSafeCGc_39;
  MR_Word try_all_grade_structs__generate_all_tests_1_p_0_env_0__SSDebug_29;
  MR_Word try_all_grade_structs__generate_all_tests_1_p_0_env_0__SSDebug_32;
};

struct try_all_grade_structs__main_2_p_0_2_env_0_s {
  MR_Box * try_all_grade_structs__main_2_p_0_2_env_0__wrapper_arg_1;
  MR_Cont try_all_grade_structs__main_2_p_0_2_env_0__cont;
  void * try_all_grade_structs__main_2_p_0_2_env_0__cont_env_ptr;
  MR_Word try_all_grade_structs__main_2_p_0_2_env_0__conv0_GradeStructure_2;
};


static const MR_FA_PseudoTypeInfo_Struct2 try_all_grade_structs__tree234__pti_tree234_2__plain_grade_lib__grade_spec__type_ctor_info_solver_var_id_0__plain_grade_lib__grade_state__type_ctor_info_solver_var_0;

static void MR_CALL 
try_all_grade_structs__check_grade_struct_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
try_all_grade_structs__check_grade_struct_7_p_0(
  MR_Word OutStream_8,
  MR_Word SolverInfo0_9,
  MR_Word GradeStructure_10,
  MR_Integer STATE_VARIABLE_N_0_31,
  MR_Integer * STATE_VARIABLE_N_32);

static void MR_CALL 
try_all_grade_structs__generate_all_tests_1_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
try_all_grade_structs__generate_all_tests_1_p_0_21(
  void * env_ptr_arg);

static void MR_CALL 
try_all_grade_structs__generate_all_tests_1_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
try_all_grade_structs__generate_all_tests_1_p_0_12(
  void * env_ptr_arg);

static void MR_CALL 
try_all_grade_structs__generate_all_tests_1_p_0_14(
  void * env_ptr_arg);

static void MR_CALL 
try_all_grade_structs__generate_all_tests_1_p_0_13(
  void * env_ptr_arg);

static void MR_CALL 
try_all_grade_structs__generate_all_tests_1_p_0_11(
  void * env_ptr_arg);

static void MR_CALL 
try_all_grade_structs__generate_all_tests_1_p_0_10(
  void * env_ptr_arg);

static void MR_CALL 
try_all_grade_structs__generate_all_tests_1_p_0_7(
  void * env_ptr_arg);

static void MR_CALL 
try_all_grade_structs__generate_all_tests_1_p_0_9(
  void * env_ptr_arg);

static void MR_CALL 
try_all_grade_structs__generate_all_tests_1_p_0_8(
  void * env_ptr_arg);

static void MR_CALL 
try_all_grade_structs__generate_all_tests_1_p_0_6(
  void * env_ptr_arg);

static void MR_CALL 
try_all_grade_structs__generate_all_tests_1_p_0_5(
  void * env_ptr_arg);

static void MR_CALL 
try_all_grade_structs__generate_all_tests_1_p_0_17(
  void * env_ptr_arg);

static void MR_CALL 
try_all_grade_structs__generate_all_tests_1_p_0_16(
  void * env_ptr_arg);

static void MR_CALL 
try_all_grade_structs__generate_all_tests_1_p_0_15(
  void * env_ptr_arg);

static void MR_CALL 
try_all_grade_structs__generate_all_tests_1_p_0_20(
  void * env_ptr_arg);

static void MR_CALL 
try_all_grade_structs__generate_all_tests_1_p_0_19(
  void * env_ptr_arg);

static void MR_CALL 
try_all_grade_structs__generate_all_tests_1_p_0_18(
  void * env_ptr_arg);

static void MR_CALL 
try_all_grade_structs__generate_all_tests_1_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
try_all_grade_structs__generate_all_tests_1_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
try_all_grade_structs__generate_all_tests_1_p_0_34(
  void * env_ptr_arg);

static void MR_CALL 
try_all_grade_structs__generate_all_tests_1_p_0_22(
  void * env_ptr_arg);

static void MR_CALL 
try_all_grade_structs__generate_all_tests_1_p_0_31(
  void * env_ptr_arg);

static void MR_CALL 
try_all_grade_structs__generate_all_tests_1_p_0_30(
  void * env_ptr_arg);

static void MR_CALL 
try_all_grade_structs__generate_all_tests_1_p_0_23(
  void * env_ptr_arg);

static void MR_CALL 
try_all_grade_structs__generate_all_tests_1_p_0_28(
  void * env_ptr_arg);

static void MR_CALL 
try_all_grade_structs__generate_all_tests_1_p_0_25(
  void * env_ptr_arg);

static void MR_CALL 
try_all_grade_structs__generate_all_tests_1_p_0_27(
  void * env_ptr_arg);

static void MR_CALL 
try_all_grade_structs__generate_all_tests_1_p_0_26(
  void * env_ptr_arg);

static void MR_CALL 
try_all_grade_structs__generate_all_tests_1_p_0_24(
  void * env_ptr_arg);

static void MR_CALL 
try_all_grade_structs__generate_all_tests_1_p_0_29(
  void * env_ptr_arg);

static void MR_CALL 
try_all_grade_structs__generate_all_tests_1_p_0_32(
  void * env_ptr_arg);

static void MR_CALL 
try_all_grade_structs__generate_all_tests_1_p_0_33(
  void * env_ptr_arg);

static void MR_CALL 
try_all_grade_structs__generate_all_tests_1_p_0(
  MR_Word * GradeStructure_2,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
main_2_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
main_2_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
main_2_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr);


static /* final */ const MR_Box try_all_grade_structs_scalar_common_1[2][3];

static /* final */ const MR_Box try_all_grade_structs_scalar_common_2[2][1];

static /* final */ const MR_Box try_all_grade_structs_scalar_common_3[2][4];

static /* final */ const MR_Box try_all_grade_structs_scalar_common_4[1][10];

static /* final */ const MR_Box try_all_grade_structs_scalar_common_23[1][8];


struct try_all_grade_structs__vector_common_type_5_0_s {
  const MR_Word try_all_grade_structs__vector_common_type_5_0__vct_5_f_0;
};

static /* final */ const struct try_all_grade_structs__vector_common_type_5_0_s try_all_grade_structs_vector_common_5[4];

struct try_all_grade_structs__vector_common_type_6_0_s {
  const MR_Word try_all_grade_structs__vector_common_type_6_0__vct_6_f_0;
};

static /* final */ const struct try_all_grade_structs__vector_common_type_6_0_s try_all_grade_structs_vector_common_6[6];

struct try_all_grade_structs__vector_common_type_7_0_s {
  const MR_Word try_all_grade_structs__vector_common_type_7_0__vct_7_f_0;
};

static /* final */ const struct try_all_grade_structs__vector_common_type_7_0_s try_all_grade_structs_vector_common_7[3];

struct try_all_grade_structs__vector_common_type_8_0_s {
  const MR_Word try_all_grade_structs__vector_common_type_8_0__vct_8_f_0;
};

static /* final */ const struct try_all_grade_structs__vector_common_type_8_0_s try_all_grade_structs_vector_common_8[10];

struct try_all_grade_structs__vector_common_type_9_0_s {
  const MR_Word try_all_grade_structs__vector_common_type_9_0__vct_9_f_0;
};

static /* final */ const struct try_all_grade_structs__vector_common_type_9_0_s try_all_grade_structs_vector_common_9[6];

struct try_all_grade_structs__vector_common_type_10_0_s {
  const MR_Word try_all_grade_structs__vector_common_type_10_0__vct_10_f_0;
};

static /* final */ const struct try_all_grade_structs__vector_common_type_10_0_s try_all_grade_structs_vector_common_10[4];

struct try_all_grade_structs__vector_common_type_11_0_s {
  const MR_Word try_all_grade_structs__vector_common_type_11_0__vct_11_f_0;
};

static /* final */ const struct try_all_grade_structs__vector_common_type_11_0_s try_all_grade_structs_vector_common_11[4];

struct try_all_grade_structs__vector_common_type_12_0_s {
  const MR_Word try_all_grade_structs__vector_common_type_12_0__vct_12_f_0;
};

static /* final */ const struct try_all_grade_structs__vector_common_type_12_0_s try_all_grade_structs_vector_common_12[3];

struct try_all_grade_structs__vector_common_type_13_0_s {
  const MR_Word try_all_grade_structs__vector_common_type_13_0__vct_13_f_0;
};

static /* final */ const struct try_all_grade_structs__vector_common_type_13_0_s try_all_grade_structs_vector_common_13[6];

struct try_all_grade_structs__vector_common_type_14_0_s {
  const MR_Word try_all_grade_structs__vector_common_type_14_0__vct_14_f_0;
};

static /* final */ const struct try_all_grade_structs__vector_common_type_14_0_s try_all_grade_structs_vector_common_14[2];

struct try_all_grade_structs__vector_common_type_15_0_s {
  const MR_Word try_all_grade_structs__vector_common_type_15_0__vct_15_f_0;
};

static /* final */ const struct try_all_grade_structs__vector_common_type_15_0_s try_all_grade_structs_vector_common_15[2];

struct try_all_grade_structs__vector_common_type_16_0_s {
  const MR_Word try_all_grade_structs__vector_common_type_16_0__vct_16_f_0;
};

static /* final */ const struct try_all_grade_structs__vector_common_type_16_0_s try_all_grade_structs_vector_common_16[4];

struct try_all_grade_structs__vector_common_type_17_0_s {
  const MR_Word try_all_grade_structs__vector_common_type_17_0__vct_17_f_0;
};

static /* final */ const struct try_all_grade_structs__vector_common_type_17_0_s try_all_grade_structs_vector_common_17[2];

struct try_all_grade_structs__vector_common_type_18_0_s {
  const MR_Word try_all_grade_structs__vector_common_type_18_0__vct_18_f_0;
};

static /* final */ const struct try_all_grade_structs__vector_common_type_18_0_s try_all_grade_structs_vector_common_18[6];

struct try_all_grade_structs__vector_common_type_19_0_s {
  const MR_Word try_all_grade_structs__vector_common_type_19_0__vct_19_f_0;
};

static /* final */ const struct try_all_grade_structs__vector_common_type_19_0_s try_all_grade_structs_vector_common_19[2];

struct try_all_grade_structs__vector_common_type_20_0_s {
  const MR_Word try_all_grade_structs__vector_common_type_20_0__vct_20_f_0;
};

static /* final */ const struct try_all_grade_structs__vector_common_type_20_0_s try_all_grade_structs_vector_common_20[4];

struct try_all_grade_structs__vector_common_type_21_0_s {
  const MR_Word try_all_grade_structs__vector_common_type_21_0__vct_21_f_0;
};

static /* final */ const struct try_all_grade_structs__vector_common_type_21_0_s try_all_grade_structs_vector_common_21[6];

struct try_all_grade_structs__vector_common_type_22_0_s {
  const MR_Word try_all_grade_structs__vector_common_type_22_0__vct_22_f_0;
};

static /* final */ const struct try_all_grade_structs__vector_common_type_22_0_s try_all_grade_structs_vector_common_22[2];



static /* final */ const MR_Box try_all_grade_structs_scalar_common_1[2][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0)),
    ((MR_Box) (&grade_lib__grade_state__grade_lib__grade_state__type_ctor_info_solver_var_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&try_all_grade_structs_scalar_common_3[0])),
    ((MR_Box) (main_2_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box try_all_grade_structs_scalar_common_2[2][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 1U << 6)) | (((((MR_Unsigned) 1U << 5)) | (((((MR_Unsigned) 1U << 4)) | (((((MR_Unsigned) 2U << 2)) | (((MR_Unsigned) 0U << 1)))))))))) },
  /* row   1 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
};

static /* final */ const MR_Box try_all_grade_structs_scalar_common_3[2][4] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&grade_lib__grade_structure__grade_lib__grade_structure__type_ctor_info_grade_structure_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&try_all_grade_structs_scalar_common_23[0])),
    ((MR_Box) (try_all_grade_structs__check_grade_struct_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box try_all_grade_structs_scalar_common_4[1][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&grade_lib__grade_state__grade_lib__grade_state__type_ctor_info_solver_info_0)),
    ((MR_Box) (&grade_lib__grade_structure__grade_lib__grade_structure__type_ctor_info_grade_structure_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box try_all_grade_structs_scalar_common_23[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&grade_lib__grade_state__grade_lib__grade_state__type_ctor_info_not_possible_why_0)),
    ((MR_Box) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0)),
    ((MR_Box) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0)),
    ((MR_Box) (&try_all_grade_structs__tree234__pti_tree234_2__plain_grade_lib__grade_spec__type_ctor_info_solver_var_id_0__plain_grade_lib__grade_state__type_ctor_info_solver_var_0)),
    ((MR_Box) (&try_all_grade_structs__tree234__pti_tree234_2__plain_grade_lib__grade_spec__type_ctor_info_solver_var_id_0__plain_grade_lib__grade_state__type_ctor_info_solver_var_0))
  },
};


static /* final */ const struct try_all_grade_structs__vector_common_type_5_0_s try_all_grade_structs_vector_common_5[4] = {
  /* row   0 */   { (MR_Integer) 0 },
  /* row   1 */   { (MR_Integer) 1 },
  /* row   2 */   { (MR_Integer) 2 },
  /* row   3 */   { (MR_Integer) 3 },
};

static /* final */ const struct try_all_grade_structs__vector_common_type_6_0_s try_all_grade_structs_vector_common_6[6] = {
  /* row   0 */   { (MR_Integer) 0 },
  /* row   1 */   { (MR_Integer) 1 },
  /* row   2 */   { (MR_Integer) 2 },
  /* row   3 */   { (MR_Integer) 3 },
  /* row   4 */   { (MR_Integer) 4 },
  /* row   5 */   { (MR_Integer) 5 },
};

static /* final */ const struct try_all_grade_structs__vector_common_type_7_0_s try_all_grade_structs_vector_common_7[3] = {
  /* row   0 */   { (MR_Integer) 0 },
  /* row   1 */   { (MR_Integer) 1 },
  /* row   2 */   { (MR_Integer) 2 },
};

static /* final */ const struct try_all_grade_structs__vector_common_type_8_0_s try_all_grade_structs_vector_common_8[10] = {
  /* row   0 */   { (MR_Integer) 0 },
  /* row   1 */   { (MR_Integer) 1 },
  /* row   2 */   { (MR_Integer) 2 },
  /* row   3 */   { (MR_Integer) 3 },
  /* row   4 */   { (MR_Integer) 4 },
  /* row   5 */   { (MR_Integer) 0 },
  /* row   6 */   { (MR_Integer) 1 },
  /* row   7 */   { (MR_Integer) 2 },
  /* row   8 */   { (MR_Integer) 3 },
  /* row   9 */   { (MR_Integer) 4 },
};

static /* final */ const struct try_all_grade_structs__vector_common_type_9_0_s try_all_grade_structs_vector_common_9[6] = {
  /* row   0 */   { (MR_Integer) 0 },
  /* row   1 */   { (MR_Integer) 1 },
  /* row   2 */   { (MR_Integer) 0 },
  /* row   3 */   { (MR_Integer) 1 },
  /* row   4 */   { (MR_Integer) 0 },
  /* row   5 */   { (MR_Integer) 1 },
};

static /* final */ const struct try_all_grade_structs__vector_common_type_10_0_s try_all_grade_structs_vector_common_10[4] = {
  /* row   0 */   { (MR_Integer) 0 },
  /* row   1 */   { (MR_Integer) 1 },
  /* row   2 */   { (MR_Integer) 0 },
  /* row   3 */   { (MR_Integer) 1 },
};

static /* final */ const struct try_all_grade_structs__vector_common_type_11_0_s try_all_grade_structs_vector_common_11[4] = {
  /* row   0 */   { (MR_Integer) 0 },
  /* row   1 */   { (MR_Integer) 1 },
  /* row   2 */   { (MR_Integer) 0 },
  /* row   3 */   { (MR_Integer) 1 },
};

static /* final */ const struct try_all_grade_structs__vector_common_type_12_0_s try_all_grade_structs_vector_common_12[3] = {
  /* row   0 */   { (MR_Integer) 0 },
  /* row   1 */   { (MR_Integer) 1 },
  /* row   2 */   { (MR_Integer) 2 },
};

static /* final */ const struct try_all_grade_structs__vector_common_type_13_0_s try_all_grade_structs_vector_common_13[6] = {
  /* row   0 */   { (MR_Integer) 0 },
  /* row   1 */   { (MR_Integer) 1 },
  /* row   2 */   { (MR_Integer) 2 },
  /* row   3 */   { (MR_Integer) 0 },
  /* row   4 */   { (MR_Integer) 1 },
  /* row   5 */   { (MR_Integer) 2 },
};

static /* final */ const struct try_all_grade_structs__vector_common_type_14_0_s try_all_grade_structs_vector_common_14[2] = {
  /* row   0 */   { (MR_Integer) 0 },
  /* row   1 */   { (MR_Integer) 1 },
};

static /* final */ const struct try_all_grade_structs__vector_common_type_15_0_s try_all_grade_structs_vector_common_15[2] = {
  /* row   0 */   { (MR_Integer) 0 },
  /* row   1 */   { (MR_Integer) 1 },
};

static /* final */ const struct try_all_grade_structs__vector_common_type_16_0_s try_all_grade_structs_vector_common_16[4] = {
  /* row   0 */   { (MR_Integer) 0 },
  /* row   1 */   { (MR_Integer) 1 },
  /* row   2 */   { (MR_Integer) 2 },
  /* row   3 */   { (MR_Integer) 3 },
};

static /* final */ const struct try_all_grade_structs__vector_common_type_17_0_s try_all_grade_structs_vector_common_17[2] = {
  /* row   0 */   { (MR_Integer) 0 },
  /* row   1 */   { (MR_Integer) 1 },
};

static /* final */ const struct try_all_grade_structs__vector_common_type_18_0_s try_all_grade_structs_vector_common_18[6] = {
  /* row   0 */   { (MR_Integer) 0 },
  /* row   1 */   { (MR_Integer) 1 },
  /* row   2 */   { (MR_Integer) 2 },
  /* row   3 */   { (MR_Integer) 0 },
  /* row   4 */   { (MR_Integer) 1 },
  /* row   5 */   { (MR_Integer) 2 },
};

static /* final */ const struct try_all_grade_structs__vector_common_type_19_0_s try_all_grade_structs_vector_common_19[2] = {
  /* row   0 */   { (MR_Integer) 0 },
  /* row   1 */   { (MR_Integer) 1 },
};

static /* final */ const struct try_all_grade_structs__vector_common_type_20_0_s try_all_grade_structs_vector_common_20[4] = {
  /* row   0 */   { (MR_Integer) 1 },
  /* row   1 */   { (MR_Integer) 2 },
  /* row   2 */   { (MR_Integer) 1 },
  /* row   3 */   { (MR_Integer) 2 },
};

static /* final */ const struct try_all_grade_structs__vector_common_type_21_0_s try_all_grade_structs_vector_common_21[6] = {
  /* row   0 */   { (MR_Integer) 0 },
  /* row   1 */   { (MR_Integer) 1 },
  /* row   2 */   { (MR_Integer) 0 },
  /* row   3 */   { (MR_Integer) 1 },
  /* row   4 */   { (MR_Integer) 0 },
  /* row   5 */   { (MR_Integer) 1 },
};

static /* final */ const struct try_all_grade_structs__vector_common_type_22_0_s try_all_grade_structs_vector_common_22[2] = {
  /* row   0 */   { (MR_Integer) 0 },
  /* row   1 */   { (MR_Integer) 1 },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct2 try_all_grade_structs__tree234__pti_tree234_2__plain_grade_lib__grade_spec__type_ctor_info_solver_var_id_0__plain_grade_lib__grade_state__type_ctor_info_solver_var_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0),
    (MR_PseudoTypeInfo) (&grade_lib__grade_state__grade_lib__grade_state__type_ctor_info_solver_var_0)
  }
};

static void MR_CALL 
try_all_grade_structs__check_grade_struct_7_p_0_1(
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
try_all_grade_structs__check_grade_struct_7_p_0(
  MR_Word OutStream_8,
  MR_Word SolverInfo0_9,
  MR_Word GradeStructure_10,
  MR_Integer STATE_VARIABLE_N_0_31,
  MR_Integer * STATE_VARIABLE_N_32)
{
  MR_bool succeeded;
  MR_String GradeStr_13;
  MR_Word MaybeSpecSuccMap_14;
  MR_String Var_87;

  GradeStr_13 = grade_lib__grade_string__grade_structure_to_grade_string_2_f_0((MR_Integer) 0, GradeStructure_10);
  *STATE_VARIABLE_N_32 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_N_0_31 + (MR_Unsigned) 1);
  mercury__io__write_string_4_p_0(OutStream_8, (MR_String) "TEST ");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&try_all_grade_structs_scalar_common_2[1]), *STATE_VARIABLE_N_32, &Var_87);
  mercury__io__write_string_4_p_0(OutStream_8, Var_87);
  mercury__io__write_string_4_p_0(OutStream_8, (MR_String) ": grade struct ");
  mercury__io__write_string_4_p_0(OutStream_8, GradeStr_13);
  mercury__io__write_string_4_p_0(OutStream_8, (MR_String) "\n");
  MaybeSpecSuccMap_14 = grade_lib__grade_string__grade_string_to_succ_soln_1_f_0(GradeStr_13);
  if (((MR_tag((MR_Word) MaybeSpecSuccMap_14)) == (MR_Integer) 1))
  {
    MR_String HeadErrorMsg_15 = ((MR_String) ((MR_hl_field(1, MaybeSpecSuccMap_14, 0))));
    MR_Word TailErrorMsgs_16 = ((MR_Word) ((MR_hl_field(1, MaybeSpecSuccMap_14, 1))));
    MR_String CombinedErrorMsg_17;
    MR_Word Var_46;

    {
      Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_46, 0) = ((MR_Box) (HeadErrorMsg_15));
      MR_hl_field(1, Var_46, 1) = ((MR_Box) (TailErrorMsgs_16));
    }
    CombinedErrorMsg_17 = mercury__string__join_list_2_f_0((MR_String) ", ", Var_46);
    mercury__io__write_string_4_p_0(OutStream_8, (MR_String) "ERROR: cannot convert to succ soln: ");
    mercury__io__write_string_4_p_0(OutStream_8, CombinedErrorMsg_17);
    mercury__io__write_string_4_p_0(OutStream_8, (MR_String) "\n");
  }
  else
  {
    MR_Word SpecSuccMap_18 = ((MR_Word) ((MR_hl_field(0, MaybeSpecSuccMap_14, 0))));
    MR_Word SolverVarMap0_19 = ((MR_Word) ((MR_hl_field(0, SolverInfo0_9, 2))));
    MR_Word SolverVarMap_20;
    MR_Word SolverInfo_21;
    MR_Word Soln_23;
    MR_Box conv1_SolverVarMap_20;
    MR_Word Var_73;
    MR_Word Var_74;
    MR_Word _SolveCounts_22;

    mercury__map__foldl_4_p_0((MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0), (MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0), (MR_Word) (&try_all_grade_structs_scalar_common_1[0]), (MR_Word) (&try_all_grade_structs_scalar_common_3[1]), SpecSuccMap_18, ((MR_Box) (SolverVarMap0_19)), &conv1_SolverVarMap_20);
    SolverVarMap_20 = ((MR_Word) (conv1_SolverVarMap_20));
    Var_73 = ((MR_Word) ((MR_hl_field(0, SolverInfo0_9, 0))));
    Var_74 = ((MR_Word) ((MR_hl_field(0, SolverInfo0_9, 1))));
    {
      SolverInfo_21 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, SolverInfo_21, 0) = ((MR_Box) (Var_73));
      MR_hl_field(0, SolverInfo_21, 1) = ((MR_Box) (Var_74));
      MR_hl_field(0, SolverInfo_21, 2) = ((MR_Box) (SolverVarMap_20));
    }
    grade_lib__grade_solver__solve_absolute_3_p_0(SolverInfo_21, &_SolveCounts_22, &Soln_23);
    if (((MR_tag((MR_Word) Soln_23)) == (MR_Integer) 0))
    {
      MR_String FailureStr0_25;
      MR_String FailureStr_26;

      FailureStr0_25 = grade_lib__grade_solver__soln_to_str_2_f_0((MR_String) " ", Soln_23);
      mercury__string__replace_all_4_p_0(FailureStr0_25, (MR_String) "\n", (MR_String) " ", &FailureStr_26);
      mercury__io__write_string_4_p_0(OutStream_8, (MR_String) "ERROR: cannot solve succ soln\n");
      mercury__io__write_string_4_p_0(OutStream_8, FailureStr_26);
      mercury__io__write_string_4_p_0(OutStream_8, (MR_String) "\n");
    }
    else
    {
      MR_Word StdSuccMap_27 = ((MR_Word) ((MR_hl_field(1, Soln_23, 0))));
      MR_Word StdGradeVars_28;
      MR_Word StdGradeStructure_29;

      StdGradeVars_28 = grade_lib__grade_vars__success_map_to_grade_vars_1_f_0(StdSuccMap_27);
      StdGradeStructure_29 = grade_lib__grade_structure__grade_vars_to_grade_structure_1_f_0(StdGradeVars_28);
      succeeded = grade_lib__grade_structure____Unify____grade_structure_0_0(StdGradeStructure_29, GradeStructure_10);
      if (!(succeeded))
      {
        MR_String StdGradeStr_30;

        StdGradeStr_30 = grade_lib__grade_string__grade_structure_to_grade_string_2_f_0((MR_Integer) 0, StdGradeStructure_29);
        mercury__io__write_string_4_p_0(OutStream_8, (MR_String) "ERROR: round trip does not match: ");
        mercury__io__write_string_4_p_0(OutStream_8, StdGradeStr_30);
        mercury__io__write_string_4_p_0(OutStream_8, (MR_String) "\n");
        mercury__io__write_4_p_0((MR_Word) (&grade_lib__grade_structure__grade_lib__grade_structure__type_ctor_info_grade_structure_0), OutStream_8, ((MR_Box) (GradeStructure_10)));
        mercury__io__nl_3_p_0(OutStream_8);
        mercury__io__write_4_p_0((MR_Word) (&grade_lib__grade_structure__grade_lib__grade_structure__type_ctor_info_grade_structure_0), OutStream_8, ((MR_Box) (StdGradeStructure_29)));
        mercury__io__nl_3_p_0(OutStream_8);
      }
    }
  }
}

static void MR_CALL 
try_all_grade_structs__generate_all_tests_1_p_0_1(
  void * env_ptr_arg)
{
  struct try_all_grade_structs__generate_all_tests_1_p_0_env_0_s * env_ptr = (struct try_all_grade_structs__generate_all_tests_1_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->try_all_grade_structs__generate_all_tests_1_p_0_env_0__PregenGrade_4 = (MR_Word) ((env_ptr)->try_all_grade_structs__generate_all_tests_1_p_0_env_0__PregenKind_3);
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    *((env_ptr)->try_all_grade_structs__generate_all_tests_1_p_0_env_0__GradeStructure_2) = base;
    MR_hl_field(2, base, 0) = ((MR_Box) ((env_ptr)->try_all_grade_structs__generate_all_tests_1_p_0_env_0__PregenGrade_4));
  }
  ((env_ptr)->try_all_grade_structs__generate_all_tests_1_p_0_env_0__cont)((env_ptr)->try_all_grade_structs__generate_all_tests_1_p_0_env_0__cont_env_ptr);
}

static void MR_CALL 
try_all_grade_structs__generate_all_tests_1_p_0_21(
  void * env_ptr_arg)
{
  struct try_all_grade_structs__generate_all_tests_1_p_0_env_0_s * env_ptr = (struct try_all_grade_structs__generate_all_tests_1_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    (env_ptr)->try_all_grade_structs__generate_all_tests_1_p_0_env_0__LldsGrade_25 = base;
    MR_hl_field(0, base, 0) = (MR_Box) (((((MR_Unsigned) ((env_ptr)->try_all_grade_structs__generate_all_tests_1_p_0_env_0__GccConf_5) << 2)) | (MR_Unsigned) ((env_ptr)->try_all_grade_structs__generate_all_tests_1_p_0_env_0__StackLen_6)));
    MR_hl_field(0, base, 1) = ((MR_Box) ((env_ptr)->try_all_grade_structs__generate_all_tests_1_p_0_env_0__LLDSTSMinModel_17));
    MR_hl_field(0, base, 2) = (MR_Box) (((((MR_Unsigned) ((env_ptr)->try_all_grade_structs__generate_all_tests_1_p_0_env_0__MercFile_22) << 4)) | (((((MR_Unsigned) ((env_ptr)->try_all_grade_structs__generate_all_tests_1_p_0_env_0__LowTagBitsUse_23) << 2)) | (MR_Unsigned) ((env_ptr)->try_all_grade_structs__generate_all_tests_1_p_0_env_0__MercFloat_24)))));
  }
  *((env_ptr)->try_all_grade_structs__generate_all_tests_1_p_0_env_0__GradeStructure_2) = (MR_Word) ((MR_Word) ((env_ptr)->try_all_grade_structs__generate_all_tests_1_p_0_env_0__LldsGrade_25));
  ((env_ptr)->try_all_grade_structs__generate_all_tests_1_p_0_env_0__cont)((env_ptr)->try_all_grade_structs__generate_all_tests_1_p_0_env_0__cont_env_ptr);
}

static void MR_CALL 
try_all_grade_structs__generate_all_tests_1_p_0_4(
  void * env_ptr_arg)
{
  struct try_all_grade_structs__generate_all_tests_1_p_0_env_0_s * env_ptr = (struct try_all_grade_structs__generate_all_tests_1_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->try_all_grade_structs__generate_all_tests_1_p_0_env_0__MercFile_22 = (MR_Integer) 0;
  (env_ptr)->try_all_grade_structs__generate_all_tests_1_p_0_env_0__LowTagBitsUse_23 = (MR_Integer) 2;
  {
    MR_Integer slot_17 = (MR_Integer) 0;

    do
    {
      (env_ptr)->try_all_grade_structs__generate_all_tests_1_p_0_env_0__MercFloat_24 = ((&try_all_grade_structs_vector_common_20[0 + slot_17]))->try_all_grade_structs__vector_common_type_20_0__vct_20_f_0;
      try_all_grade_structs__generate_all_tests_1_p_0_21(env_ptr);
      slot_17 = (MR_Integer) ((MR_Unsigned) slot_17 + (MR_Unsigned) 1);
    }
    while ((slot_17 < (MR_Integer) 2));
  }
}

static void MR_CALL 
try_all_grade_structs__generate_all_tests_1_p_0_12(
  void * env_ptr_arg)
{
  struct try_all_grade_structs__generate_all_tests_1_p_0_env_0_s * env_ptr = (struct try_all_grade_structs__generate_all_tests_1_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    (env_ptr)->try_all_grade_structs__generate_all_tests_1_p_0_env_0__LLDSTSMinModel_17 = base;
    MR_hl_field(0, base, 0) = (MR_Box) (((((MR_Unsigned) ((env_ptr)->try_all_grade_structs__generate_all_tests_1_p_0_env_0__CGc_7) << 1)) | (MR_Unsigned) ((env_ptr)->try_all_grade_structs__generate_all_tests_1_p_0_env_0__Trail_8)));
    MR_hl_field(0, base, 1) = ((MR_Box) ((env_ptr)->try_all_grade_structs__generate_all_tests_1_p_0_env_0__LLDSPerfProf_9));
    MR_hl_field(0, base, 2) = (MR_Box) (((((MR_Unsigned) ((env_ptr)->try_all_grade_structs__generate_all_tests_1_p_0_env_0__TermSizeProf_12) << 2)) | (MR_Unsigned) ((env_ptr)->try_all_grade_structs__generate_all_tests_1_p_0_env_0__Debug_13)));
    MR_hl_field(0, base, 3) = ((MR_Box) ((env_ptr)->try_all_grade_structs__generate_all_tests_1_p_0_env_0__RBMM_14));
  }
  try_all_grade_structs__generate_all_tests_1_p_0_4(env_ptr);
}

static void MR_CALL 
try_all_grade_structs__generate_all_tests_1_p_0_14(
  void * env_ptr_arg)
{
  struct try_all_grade_structs__generate_all_tests_1_p_0_env_0_s * env_ptr = (struct try_all_grade_structs__generate_all_tests_1_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    (env_ptr)->try_all_grade_structs__generate_all_tests_1_p_0_env_0__RBMM_14 = base;
    MR_hl_field(1, base, 0) = (MR_Box) (((((MR_Unsigned) ((env_ptr)->try_all_grade_structs__generate_all_tests_1_p_0_env_0__RBMMDebug_15) << 1)) | (MR_Unsigned) ((env_ptr)->try_all_grade_structs__generate_all_tests_1_p_0_env_0__RBMMProf_16)));
  }
  try_all_grade_structs__generate_all_tests_1_p_0_12(env_ptr);
}

static void MR_CALL 
try_all_grade_structs__generate_all_tests_1_p_0_13(
  void * env_ptr_arg)
{
  struct try_all_grade_structs__generate_all_tests_1_p_0_env_0_s * env_ptr = (struct try_all_grade_structs__generate_all_tests_1_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Integer slot_10 = (MR_Integer) 0;

    do
    {
      (env_ptr)->try_all_grade_structs__generate_all_tests_1_p_0_env_0__RBMMProf_16 = ((&try_all_grade_structs_vector_common_15[0 + slot_10]))->try_all_grade_structs__vector_common_type_15_0__vct_15_f_0;
      try_all_grade_structs__generate_all_tests_1_p_0_14(env_ptr);
      slot_10 = (MR_Integer) ((MR_Unsigned) slot_10 + (MR_Unsigned) 1);
    }
    while ((slot_10 < (MR_Integer) 2));
  }
}

static void MR_CALL 
try_all_grade_structs__generate_all_tests_1_p_0_11(
  void * env_ptr_arg)
{
  struct try_all_grade_structs__generate_all_tests_1_p_0_env_0_s * env_ptr = (struct try_all_grade_structs__generate_all_tests_1_p_0_env_0_s *) (env_ptr_arg);

  {
    (env_ptr)->try_all_grade_structs__generate_all_tests_1_p_0_env_0__RBMM_14 = (MR_Word) ((MR_Unsigned) 0U);
    try_all_grade_structs__generate_all_tests_1_p_0_12(env_ptr);
  }
  {
    MR_Integer slot_9 = (MR_Integer) 0;

    do
    {
      (env_ptr)->try_all_grade_structs__generate_all_tests_1_p_0_env_0__RBMMDebug_15 = ((&try_all_grade_structs_vector_common_14[0 + slot_9]))->try_all_grade_structs__vector_common_type_14_0__vct_14_f_0;
      try_all_grade_structs__generate_all_tests_1_p_0_13(env_ptr);
      slot_9 = (MR_Integer) ((MR_Unsigned) slot_9 + (MR_Unsigned) 1);
    }
    while ((slot_9 < (MR_Integer) 2));
  }
}

static void MR_CALL 
try_all_grade_structs__generate_all_tests_1_p_0_10(
  void * env_ptr_arg)
{
  struct try_all_grade_structs__generate_all_tests_1_p_0_env_0_s * env_ptr = (struct try_all_grade_structs__generate_all_tests_1_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Integer slot_8 = (MR_Integer) 0;

    do
    {
      (env_ptr)->try_all_grade_structs__generate_all_tests_1_p_0_env_0__Debug_13 = ((&try_all_grade_structs_vector_common_13[0 + slot_8]))->try_all_grade_structs__vector_common_type_13_0__vct_13_f_0;
      try_all_grade_structs__generate_all_tests_1_p_0_11(env_ptr);
      slot_8 = (MR_Integer) ((MR_Unsigned) slot_8 + (MR_Unsigned) 1);
    }
    while ((slot_8 < (MR_Integer) 3));
  }
}

static void MR_CALL 
try_all_grade_structs__generate_all_tests_1_p_0_7(
  void * env_ptr_arg)
{
  struct try_all_grade_structs__generate_all_tests_1_p_0_env_0_s * env_ptr = (struct try_all_grade_structs__generate_all_tests_1_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Integer slot_7 = (MR_Integer) 0;

    do
    {
      (env_ptr)->try_all_grade_structs__generate_all_tests_1_p_0_env_0__TermSizeProf_12 = ((&try_all_grade_structs_vector_common_12[0 + slot_7]))->try_all_grade_structs__vector_common_type_12_0__vct_12_f_0;
      try_all_grade_structs__generate_all_tests_1_p_0_10(env_ptr);
      slot_7 = (MR_Integer) ((MR_Unsigned) slot_7 + (MR_Unsigned) 1);
    }
    while ((slot_7 < (MR_Integer) 3));
  }
}

static void MR_CALL 
try_all_grade_structs__generate_all_tests_1_p_0_9(
  void * env_ptr_arg)
{
  struct try_all_grade_structs__generate_all_tests_1_p_0_env_0_s * env_ptr = (struct try_all_grade_structs__generate_all_tests_1_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    (env_ptr)->try_all_grade_structs__generate_all_tests_1_p_0_env_0__LLDSPerfProf_9 = base;
    MR_hl_field(1, base, 0) = (MR_Box) (((((MR_Unsigned) ((env_ptr)->try_all_grade_structs__generate_all_tests_1_p_0_env_0__MProfTime_10) << 1)) | (MR_Unsigned) ((env_ptr)->try_all_grade_structs__generate_all_tests_1_p_0_env_0__MProfMemory_11)));
  }
  try_all_grade_structs__generate_all_tests_1_p_0_7(env_ptr);
}

static void MR_CALL 
try_all_grade_structs__generate_all_tests_1_p_0_8(
  void * env_ptr_arg)
{
  struct try_all_grade_structs__generate_all_tests_1_p_0_env_0_s * env_ptr = (struct try_all_grade_structs__generate_all_tests_1_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Integer slot_6 = (MR_Integer) 0;

    do
    {
      (env_ptr)->try_all_grade_structs__generate_all_tests_1_p_0_env_0__MProfMemory_11 = ((&try_all_grade_structs_vector_common_11[0 + slot_6]))->try_all_grade_structs__vector_common_type_11_0__vct_11_f_0;
      try_all_grade_structs__generate_all_tests_1_p_0_9(env_ptr);
      slot_6 = (MR_Integer) ((MR_Unsigned) slot_6 + (MR_Unsigned) 1);
    }
    while ((slot_6 < (MR_Integer) 2));
  }
}

static void MR_CALL 
try_all_grade_structs__generate_all_tests_1_p_0_6(
  void * env_ptr_arg)
{
  struct try_all_grade_structs__generate_all_tests_1_p_0_env_0_s * env_ptr = (struct try_all_grade_structs__generate_all_tests_1_p_0_env_0_s *) (env_ptr_arg);

  {
    (env_ptr)->try_all_grade_structs__generate_all_tests_1_p_0_env_0__LLDSPerfProf_9 = (MR_Word) ((MR_Unsigned) 0U);
    try_all_grade_structs__generate_all_tests_1_p_0_7(env_ptr);
  }
  {
    (env_ptr)->try_all_grade_structs__generate_all_tests_1_p_0_env_0__LLDSPerfProf_9 = (MR_Word) ((MR_Unsigned) 4U);
    try_all_grade_structs__generate_all_tests_1_p_0_7(env_ptr);
  }
  {
    MR_Integer slot_5 = (MR_Integer) 0;

    do
    {
      (env_ptr)->try_all_grade_structs__generate_all_tests_1_p_0_env_0__MProfTime_10 = ((&try_all_grade_structs_vector_common_10[0 + slot_5]))->try_all_grade_structs__vector_common_type_10_0__vct_10_f_0;
      try_all_grade_structs__generate_all_tests_1_p_0_8(env_ptr);
      slot_5 = (MR_Integer) ((MR_Unsigned) slot_5 + (MR_Unsigned) 1);
    }
    while ((slot_5 < (MR_Integer) 2));
  }
}

static void MR_CALL 
try_all_grade_structs__generate_all_tests_1_p_0_5(
  void * env_ptr_arg)
{
  struct try_all_grade_structs__generate_all_tests_1_p_0_env_0_s * env_ptr = (struct try_all_grade_structs__generate_all_tests_1_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Integer slot_4 = (MR_Integer) 0;

    do
    {
      (env_ptr)->try_all_grade_structs__generate_all_tests_1_p_0_env_0__Trail_8 = ((&try_all_grade_structs_vector_common_9[0 + slot_4]))->try_all_grade_structs__vector_common_type_9_0__vct_9_f_0;
      try_all_grade_structs__generate_all_tests_1_p_0_6(env_ptr);
      slot_4 = (MR_Integer) ((MR_Unsigned) slot_4 + (MR_Unsigned) 1);
    }
    while ((slot_4 < (MR_Integer) 2));
  }
}

static void MR_CALL 
try_all_grade_structs__generate_all_tests_1_p_0_17(
  void * env_ptr_arg)
{
  struct try_all_grade_structs__generate_all_tests_1_p_0_env_0_s * env_ptr = (struct try_all_grade_structs__generate_all_tests_1_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    (env_ptr)->try_all_grade_structs__generate_all_tests_1_p_0_env_0__LLDSTSMinModel_17 = base;
    MR_hl_field(1, base, 0) = (MR_Box) (((((MR_Unsigned) ((env_ptr)->try_all_grade_structs__generate_all_tests_1_p_0_env_0__MinModelKind_18) << 3)) | (((((MR_Unsigned) ((env_ptr)->try_all_grade_structs__generate_all_tests_1_p_0_env_0__LLDSMMGc_19) << 2)) | (MR_Unsigned) ((env_ptr)->try_all_grade_structs__generate_all_tests_1_p_0_env_0__Debug_26)))));
  }
  try_all_grade_structs__generate_all_tests_1_p_0_4(env_ptr);
}

static void MR_CALL 
try_all_grade_structs__generate_all_tests_1_p_0_16(
  void * env_ptr_arg)
{
  struct try_all_grade_structs__generate_all_tests_1_p_0_env_0_s * env_ptr = (struct try_all_grade_structs__generate_all_tests_1_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Integer slot_13 = (MR_Integer) 0;

    do
    {
      (env_ptr)->try_all_grade_structs__generate_all_tests_1_p_0_env_0__Debug_26 = ((&try_all_grade_structs_vector_common_13[3 + slot_13]))->try_all_grade_structs__vector_common_type_13_0__vct_13_f_0;
      try_all_grade_structs__generate_all_tests_1_p_0_17(env_ptr);
      slot_13 = (MR_Integer) ((MR_Unsigned) slot_13 + (MR_Unsigned) 1);
    }
    while ((slot_13 < (MR_Integer) 3));
  }
}

static void MR_CALL 
try_all_grade_structs__generate_all_tests_1_p_0_15(
  void * env_ptr_arg)
{
  struct try_all_grade_structs__generate_all_tests_1_p_0_env_0_s * env_ptr = (struct try_all_grade_structs__generate_all_tests_1_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Integer slot_12 = (MR_Integer) 0;

    do
    {
      (env_ptr)->try_all_grade_structs__generate_all_tests_1_p_0_env_0__LLDSMMGc_19 = ((&try_all_grade_structs_vector_common_17[0 + slot_12]))->try_all_grade_structs__vector_common_type_17_0__vct_17_f_0;
      try_all_grade_structs__generate_all_tests_1_p_0_16(env_ptr);
      slot_12 = (MR_Integer) ((MR_Unsigned) slot_12 + (MR_Unsigned) 1);
    }
    while ((slot_12 < (MR_Integer) 2));
  }
}

static void MR_CALL 
try_all_grade_structs__generate_all_tests_1_p_0_20(
  void * env_ptr_arg)
{
  struct try_all_grade_structs__generate_all_tests_1_p_0_env_0_s * env_ptr = (struct try_all_grade_structs__generate_all_tests_1_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word base;
    base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    (env_ptr)->try_all_grade_structs__generate_all_tests_1_p_0_env_0__LLDSTSMinModel_17 = base;
    MR_hl_field(2, base, 0) = (MR_Box) (((((MR_Unsigned) ((env_ptr)->try_all_grade_structs__generate_all_tests_1_p_0_env_0__ThreadSafeCGc_20) << 2)) | (((((MR_Unsigned) ((env_ptr)->try_all_grade_structs__generate_all_tests_1_p_0_env_0__Trail_27) << 1)) | (MR_Unsigned) ((env_ptr)->try_all_grade_structs__generate_all_tests_1_p_0_env_0__TScopeProf_21)))));
  }
  try_all_grade_structs__generate_all_tests_1_p_0_4(env_ptr);
}

static void MR_CALL 
try_all_grade_structs__generate_all_tests_1_p_0_19(
  void * env_ptr_arg)
{
  struct try_all_grade_structs__generate_all_tests_1_p_0_env_0_s * env_ptr = (struct try_all_grade_structs__generate_all_tests_1_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Integer slot_16 = (MR_Integer) 0;

    do
    {
      (env_ptr)->try_all_grade_structs__generate_all_tests_1_p_0_env_0__TScopeProf_21 = ((&try_all_grade_structs_vector_common_19[0 + slot_16]))->try_all_grade_structs__vector_common_type_19_0__vct_19_f_0;
      try_all_grade_structs__generate_all_tests_1_p_0_20(env_ptr);
      slot_16 = (MR_Integer) ((MR_Unsigned) slot_16 + (MR_Unsigned) 1);
    }
    while ((slot_16 < (MR_Integer) 2));
  }
}

static void MR_CALL 
try_all_grade_structs__generate_all_tests_1_p_0_18(
  void * env_ptr_arg)
{
  struct try_all_grade_structs__generate_all_tests_1_p_0_env_0_s * env_ptr = (struct try_all_grade_structs__generate_all_tests_1_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Integer slot_15 = (MR_Integer) 0;

    do
    {
      (env_ptr)->try_all_grade_structs__generate_all_tests_1_p_0_env_0__Trail_27 = ((&try_all_grade_structs_vector_common_9[2 + slot_15]))->try_all_grade_structs__vector_common_type_9_0__vct_9_f_0;
      try_all_grade_structs__generate_all_tests_1_p_0_19(env_ptr);
      slot_15 = (MR_Integer) ((MR_Unsigned) slot_15 + (MR_Unsigned) 1);
    }
    while ((slot_15 < (MR_Integer) 2));
  }
}

static void MR_CALL 
try_all_grade_structs__generate_all_tests_1_p_0_3(
  void * env_ptr_arg)
{
  struct try_all_grade_structs__generate_all_tests_1_p_0_env_0_s * env_ptr = (struct try_all_grade_structs__generate_all_tests_1_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Integer slot_3 = (MR_Integer) 0;

    do
    {
      (env_ptr)->try_all_grade_structs__generate_all_tests_1_p_0_env_0__CGc_7 = ((&try_all_grade_structs_vector_common_8[0 + slot_3]))->try_all_grade_structs__vector_common_type_8_0__vct_8_f_0;
      try_all_grade_structs__generate_all_tests_1_p_0_5(env_ptr);
      slot_3 = (MR_Integer) ((MR_Unsigned) slot_3 + (MR_Unsigned) 1);
    }
    while ((slot_3 < (MR_Integer) 5));
  }
  {
    MR_Integer slot_11 = (MR_Integer) 0;

    do
    {
      (env_ptr)->try_all_grade_structs__generate_all_tests_1_p_0_env_0__MinModelKind_18 = ((&try_all_grade_structs_vector_common_16[0 + slot_11]))->try_all_grade_structs__vector_common_type_16_0__vct_16_f_0;
      try_all_grade_structs__generate_all_tests_1_p_0_15(env_ptr);
      slot_11 = (MR_Integer) ((MR_Unsigned) slot_11 + (MR_Unsigned) 1);
    }
    while ((slot_11 < (MR_Integer) 4));
  }
  {
    MR_Integer slot_14 = (MR_Integer) 0;

    do
    {
      (env_ptr)->try_all_grade_structs__generate_all_tests_1_p_0_env_0__ThreadSafeCGc_20 = ((&try_all_grade_structs_vector_common_18[0 + slot_14]))->try_all_grade_structs__vector_common_type_18_0__vct_18_f_0;
      try_all_grade_structs__generate_all_tests_1_p_0_18(env_ptr);
      slot_14 = (MR_Integer) ((MR_Unsigned) slot_14 + (MR_Unsigned) 1);
    }
    while ((slot_14 < (MR_Integer) 3));
  }
}

static void MR_CALL 
try_all_grade_structs__generate_all_tests_1_p_0_2(
  void * env_ptr_arg)
{
  struct try_all_grade_structs__generate_all_tests_1_p_0_env_0_s * env_ptr = (struct try_all_grade_structs__generate_all_tests_1_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Integer slot_2 = (MR_Integer) 0;

    do
    {
      (env_ptr)->try_all_grade_structs__generate_all_tests_1_p_0_env_0__StackLen_6 = ((&try_all_grade_structs_vector_common_7[0 + slot_2]))->try_all_grade_structs__vector_common_type_7_0__vct_7_f_0;
      try_all_grade_structs__generate_all_tests_1_p_0_3(env_ptr);
      slot_2 = (MR_Integer) ((MR_Unsigned) slot_2 + (MR_Unsigned) 1);
    }
    while ((slot_2 < (MR_Integer) 3));
  }
}

static void MR_CALL 
try_all_grade_structs__generate_all_tests_1_p_0_34(
  void * env_ptr_arg)
{
  struct try_all_grade_structs__generate_all_tests_1_p_0_env_0_s * env_ptr = (struct try_all_grade_structs__generate_all_tests_1_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    (env_ptr)->try_all_grade_structs__generate_all_tests_1_p_0_env_0__MldsGrade_31 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) ((env_ptr)->try_all_grade_structs__generate_all_tests_1_p_0_env_0__MldsTarget_28));
    MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) ((env_ptr)->try_all_grade_structs__generate_all_tests_1_p_0_env_0__TargetDebug_30));
  }
  *((env_ptr)->try_all_grade_structs__generate_all_tests_1_p_0_env_0__GradeStructure_2) = (MR_Word) (MR_mkword(1, (MR_Word) ((env_ptr)->try_all_grade_structs__generate_all_tests_1_p_0_env_0__MldsGrade_31)));
  ((env_ptr)->try_all_grade_structs__generate_all_tests_1_p_0_env_0__cont)((env_ptr)->try_all_grade_structs__generate_all_tests_1_p_0_env_0__cont_env_ptr);
}

static void MR_CALL 
try_all_grade_structs__generate_all_tests_1_p_0_22(
  void * env_ptr_arg)
{
  struct try_all_grade_structs__generate_all_tests_1_p_0_env_0_s * env_ptr = (struct try_all_grade_structs__generate_all_tests_1_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Integer slot_27 = (MR_Integer) 0;

    do
    {
      (env_ptr)->try_all_grade_structs__generate_all_tests_1_p_0_env_0__TargetDebug_30 = ((&try_all_grade_structs_vector_common_22[0 + slot_27]))->try_all_grade_structs__vector_common_type_22_0__vct_22_f_0;
      try_all_grade_structs__generate_all_tests_1_p_0_34(env_ptr);
      slot_27 = (MR_Integer) ((MR_Unsigned) slot_27 + (MR_Unsigned) 1);
    }
    while ((slot_27 < (MR_Integer) 2));
  }
}

static void MR_CALL 
try_all_grade_structs__generate_all_tests_1_p_0_31(
  void * env_ptr_arg)
{
  struct try_all_grade_structs__generate_all_tests_1_p_0_env_0_s * env_ptr = (struct try_all_grade_structs__generate_all_tests_1_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    (env_ptr)->try_all_grade_structs__generate_all_tests_1_p_0_env_0__MldsTarget_28 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) ((env_ptr)->try_all_grade_structs__generate_all_tests_1_p_0_env_0__MldsCThreadSafe_38));
    MR_hl_field(0, base, 1) = (MR_Box) (((((MR_Unsigned) ((env_ptr)->try_all_grade_structs__generate_all_tests_1_p_0_env_0__Trail_40) << 5)) | (((((MR_Unsigned) ((env_ptr)->try_all_grade_structs__generate_all_tests_1_p_0_env_0__MercFile_41) << 4)) | (((((MR_Unsigned) ((env_ptr)->try_all_grade_structs__generate_all_tests_1_p_0_env_0__LowTagBitsUse_42) << 2)) | (MR_Unsigned) ((env_ptr)->try_all_grade_structs__generate_all_tests_1_p_0_env_0__MercFloat_43)))))));
  }
  try_all_grade_structs__generate_all_tests_1_p_0_22(env_ptr);
}

static void MR_CALL 
try_all_grade_structs__generate_all_tests_1_p_0_30(
  void * env_ptr_arg)
{
  struct try_all_grade_structs__generate_all_tests_1_p_0_env_0_s * env_ptr = (struct try_all_grade_structs__generate_all_tests_1_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->try_all_grade_structs__generate_all_tests_1_p_0_env_0__MercFile_41 = (MR_Integer) 0;
  (env_ptr)->try_all_grade_structs__generate_all_tests_1_p_0_env_0__LowTagBitsUse_42 = (MR_Integer) 2;
  {
    MR_Integer slot_24 = (MR_Integer) 0;

    do
    {
      (env_ptr)->try_all_grade_structs__generate_all_tests_1_p_0_env_0__MercFloat_43 = ((&try_all_grade_structs_vector_common_20[2 + slot_24]))->try_all_grade_structs__vector_common_type_20_0__vct_20_f_0;
      try_all_grade_structs__generate_all_tests_1_p_0_31(env_ptr);
      slot_24 = (MR_Integer) ((MR_Unsigned) slot_24 + (MR_Unsigned) 1);
    }
    while ((slot_24 < (MR_Integer) 2));
  }
}

static void MR_CALL 
try_all_grade_structs__generate_all_tests_1_p_0_23(
  void * env_ptr_arg)
{
  struct try_all_grade_structs__generate_all_tests_1_p_0_env_0_s * env_ptr = (struct try_all_grade_structs__generate_all_tests_1_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Integer slot_23 = (MR_Integer) 0;

    do
    {
      (env_ptr)->try_all_grade_structs__generate_all_tests_1_p_0_env_0__Trail_40 = ((&try_all_grade_structs_vector_common_9[4 + slot_23]))->try_all_grade_structs__vector_common_type_9_0__vct_9_f_0;
      try_all_grade_structs__generate_all_tests_1_p_0_30(env_ptr);
      slot_23 = (MR_Integer) ((MR_Unsigned) slot_23 + (MR_Unsigned) 1);
    }
    while ((slot_23 < (MR_Integer) 2));
  }
}

static void MR_CALL 
try_all_grade_structs__generate_all_tests_1_p_0_28(
  void * env_ptr_arg)
{
  struct try_all_grade_structs__generate_all_tests_1_p_0_env_0_s * env_ptr = (struct try_all_grade_structs__generate_all_tests_1_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    (env_ptr)->try_all_grade_structs__generate_all_tests_1_p_0_env_0__MldsCThreadSafe_38 = base;
    MR_hl_field(0, base, 0) = (MR_Box) ((MR_Unsigned) ((env_ptr)->try_all_grade_structs__generate_all_tests_1_p_0_env_0__CGc_33));
    MR_hl_field(0, base, 1) = ((MR_Box) ((env_ptr)->try_all_grade_structs__generate_all_tests_1_p_0_env_0__MldsCPerfProf_34));
    MR_hl_field(0, base, 2) = (MR_Box) ((MR_Unsigned) ((env_ptr)->try_all_grade_structs__generate_all_tests_1_p_0_env_0__SSDebug_37));
  }
  try_all_grade_structs__generate_all_tests_1_p_0_23(env_ptr);
}

static void MR_CALL 
try_all_grade_structs__generate_all_tests_1_p_0_25(
  void * env_ptr_arg)
{
  struct try_all_grade_structs__generate_all_tests_1_p_0_env_0_s * env_ptr = (struct try_all_grade_structs__generate_all_tests_1_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Integer slot_21 = (MR_Integer) 0;

    do
    {
      (env_ptr)->try_all_grade_structs__generate_all_tests_1_p_0_env_0__SSDebug_37 = ((&try_all_grade_structs_vector_common_21[0 + slot_21]))->try_all_grade_structs__vector_common_type_21_0__vct_21_f_0;
      try_all_grade_structs__generate_all_tests_1_p_0_28(env_ptr);
      slot_21 = (MR_Integer) ((MR_Unsigned) slot_21 + (MR_Unsigned) 1);
    }
    while ((slot_21 < (MR_Integer) 2));
  }
}

static void MR_CALL 
try_all_grade_structs__generate_all_tests_1_p_0_27(
  void * env_ptr_arg)
{
  struct try_all_grade_structs__generate_all_tests_1_p_0_env_0_s * env_ptr = (struct try_all_grade_structs__generate_all_tests_1_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    (env_ptr)->try_all_grade_structs__generate_all_tests_1_p_0_env_0__MldsCPerfProf_34 = base;
    MR_hl_field(1, base, 0) = (MR_Box) (((((MR_Unsigned) ((env_ptr)->try_all_grade_structs__generate_all_tests_1_p_0_env_0__MProfTime_35) << 1)) | (MR_Unsigned) ((env_ptr)->try_all_grade_structs__generate_all_tests_1_p_0_env_0__MProfMemory_36)));
  }
  try_all_grade_structs__generate_all_tests_1_p_0_25(env_ptr);
}

static void MR_CALL 
try_all_grade_structs__generate_all_tests_1_p_0_26(
  void * env_ptr_arg)
{
  struct try_all_grade_structs__generate_all_tests_1_p_0_env_0_s * env_ptr = (struct try_all_grade_structs__generate_all_tests_1_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Integer slot_20 = (MR_Integer) 0;

    do
    {
      (env_ptr)->try_all_grade_structs__generate_all_tests_1_p_0_env_0__MProfMemory_36 = ((&try_all_grade_structs_vector_common_11[2 + slot_20]))->try_all_grade_structs__vector_common_type_11_0__vct_11_f_0;
      try_all_grade_structs__generate_all_tests_1_p_0_27(env_ptr);
      slot_20 = (MR_Integer) ((MR_Unsigned) slot_20 + (MR_Unsigned) 1);
    }
    while ((slot_20 < (MR_Integer) 2));
  }
}

static void MR_CALL 
try_all_grade_structs__generate_all_tests_1_p_0_24(
  void * env_ptr_arg)
{
  struct try_all_grade_structs__generate_all_tests_1_p_0_env_0_s * env_ptr = (struct try_all_grade_structs__generate_all_tests_1_p_0_env_0_s *) (env_ptr_arg);

  {
    (env_ptr)->try_all_grade_structs__generate_all_tests_1_p_0_env_0__MldsCPerfProf_34 = (MR_Word) ((MR_Unsigned) 0U);
    try_all_grade_structs__generate_all_tests_1_p_0_25(env_ptr);
  }
  {
    MR_Integer slot_19 = (MR_Integer) 0;

    do
    {
      (env_ptr)->try_all_grade_structs__generate_all_tests_1_p_0_env_0__MProfTime_35 = ((&try_all_grade_structs_vector_common_10[2 + slot_19]))->try_all_grade_structs__vector_common_type_10_0__vct_10_f_0;
      try_all_grade_structs__generate_all_tests_1_p_0_26(env_ptr);
      slot_19 = (MR_Integer) ((MR_Unsigned) slot_19 + (MR_Unsigned) 1);
    }
    while ((slot_19 < (MR_Integer) 2));
  }
}

static void MR_CALL 
try_all_grade_structs__generate_all_tests_1_p_0_29(
  void * env_ptr_arg)
{
  struct try_all_grade_structs__generate_all_tests_1_p_0_env_0_s * env_ptr = (struct try_all_grade_structs__generate_all_tests_1_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    (env_ptr)->try_all_grade_structs__generate_all_tests_1_p_0_env_0__MldsCThreadSafe_38 = base;
    MR_hl_field(1, base, 0) = (MR_Box) ((MR_Unsigned) ((env_ptr)->try_all_grade_structs__generate_all_tests_1_p_0_env_0__ThreadSafeCGc_39));
  }
  try_all_grade_structs__generate_all_tests_1_p_0_23(env_ptr);
}

static void MR_CALL 
try_all_grade_structs__generate_all_tests_1_p_0_32(
  void * env_ptr_arg)
{
  struct try_all_grade_structs__generate_all_tests_1_p_0_env_0_s * env_ptr = (struct try_all_grade_structs__generate_all_tests_1_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    (env_ptr)->try_all_grade_structs__generate_all_tests_1_p_0_env_0__MldsTarget_28 = base;
    MR_hl_field(1, base, 0) = (MR_Box) ((MR_Unsigned) ((env_ptr)->try_all_grade_structs__generate_all_tests_1_p_0_env_0__SSDebug_29));
  }
  try_all_grade_structs__generate_all_tests_1_p_0_22(env_ptr);
}

static void MR_CALL 
try_all_grade_structs__generate_all_tests_1_p_0_33(
  void * env_ptr_arg)
{
  struct try_all_grade_structs__generate_all_tests_1_p_0_env_0_s * env_ptr = (struct try_all_grade_structs__generate_all_tests_1_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word base;
    base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    (env_ptr)->try_all_grade_structs__generate_all_tests_1_p_0_env_0__MldsTarget_28 = base;
    MR_hl_field(2, base, 0) = (MR_Box) ((MR_Unsigned) ((env_ptr)->try_all_grade_structs__generate_all_tests_1_p_0_env_0__SSDebug_32));
  }
  try_all_grade_structs__generate_all_tests_1_p_0_22(env_ptr);
}

static void MR_CALL 
try_all_grade_structs__generate_all_tests_1_p_0(
  MR_Word * GradeStructure_2,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct try_all_grade_structs__generate_all_tests_1_p_0_env_0_s env;

  (env).try_all_grade_structs__generate_all_tests_1_p_0_env_0__GradeStructure_2 = GradeStructure_2;
  (env).try_all_grade_structs__generate_all_tests_1_p_0_env_0__cont = cont;
  (env).try_all_grade_structs__generate_all_tests_1_p_0_env_0__cont_env_ptr = cont_env_ptr;
  {
    MR_Integer slot_0 = (MR_Integer) 0;

    do
    {
      (env).try_all_grade_structs__generate_all_tests_1_p_0_env_0__PregenKind_3 = ((&try_all_grade_structs_vector_common_5[0 + slot_0]))->try_all_grade_structs__vector_common_type_5_0__vct_5_f_0;
      try_all_grade_structs__generate_all_tests_1_p_0_1(&env);
      slot_0 = (MR_Integer) ((MR_Unsigned) slot_0 + (MR_Unsigned) 1);
    }
    while ((slot_0 < (MR_Integer) 4));
  }
  {
    MR_Integer slot_1 = (MR_Integer) 0;

    do
    {
      (env).try_all_grade_structs__generate_all_tests_1_p_0_env_0__GccConf_5 = ((&try_all_grade_structs_vector_common_6[0 + slot_1]))->try_all_grade_structs__vector_common_type_6_0__vct_6_f_0;
      try_all_grade_structs__generate_all_tests_1_p_0_2(&env);
      slot_1 = (MR_Integer) ((MR_Unsigned) slot_1 + (MR_Unsigned) 1);
    }
    while ((slot_1 < (MR_Integer) 6));
  }
  {
    {
      MR_Integer slot_18 = (MR_Integer) 0;

      do
      {
        (env).try_all_grade_structs__generate_all_tests_1_p_0_env_0__CGc_33 = ((&try_all_grade_structs_vector_common_8[5 + slot_18]))->try_all_grade_structs__vector_common_type_8_0__vct_8_f_0;
        try_all_grade_structs__generate_all_tests_1_p_0_24(&env);
        slot_18 = (MR_Integer) ((MR_Unsigned) slot_18 + (MR_Unsigned) 1);
      }
      while ((slot_18 < (MR_Integer) 5));
    }
    {
      MR_Integer slot_22 = (MR_Integer) 0;

      do
      {
        (env).try_all_grade_structs__generate_all_tests_1_p_0_env_0__ThreadSafeCGc_39 = ((&try_all_grade_structs_vector_common_18[3 + slot_22]))->try_all_grade_structs__vector_common_type_18_0__vct_18_f_0;
        try_all_grade_structs__generate_all_tests_1_p_0_29(&env);
        slot_22 = (MR_Integer) ((MR_Unsigned) slot_22 + (MR_Unsigned) 1);
      }
      while ((slot_22 < (MR_Integer) 3));
    }
    {
      MR_Integer slot_25 = (MR_Integer) 0;

      do
      {
        (env).try_all_grade_structs__generate_all_tests_1_p_0_env_0__SSDebug_29 = ((&try_all_grade_structs_vector_common_21[2 + slot_25]))->try_all_grade_structs__vector_common_type_21_0__vct_21_f_0;
        try_all_grade_structs__generate_all_tests_1_p_0_32(&env);
        slot_25 = (MR_Integer) ((MR_Unsigned) slot_25 + (MR_Unsigned) 1);
      }
      while ((slot_25 < (MR_Integer) 2));
    }
    {
      MR_Integer slot_26 = (MR_Integer) 0;

      do
      {
        (env).try_all_grade_structs__generate_all_tests_1_p_0_env_0__SSDebug_32 = ((&try_all_grade_structs_vector_common_21[4 + slot_26]))->try_all_grade_structs__vector_common_type_21_0__vct_21_f_0;
        try_all_grade_structs__generate_all_tests_1_p_0_33(&env);
        slot_26 = (MR_Integer) ((MR_Unsigned) slot_26 + (MR_Unsigned) 1);
      }
      while ((slot_26 < (MR_Integer) 2));
    }
  }
}

static void MR_CALL 
main_2_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Integer conv1_STATE_VARIABLE_N_32;

  try_all_grade_structs__check_grade_struct_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv1_STATE_VARIABLE_N_32);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_N_32));
}

static void MR_CALL 
main_2_p_0_1(
  void * env_ptr_arg)
{
  struct try_all_grade_structs__main_2_p_0_2_env_0_s * env_ptr = (struct try_all_grade_structs__main_2_p_0_2_env_0_s *) (env_ptr_arg);

  *((env_ptr)->try_all_grade_structs__main_2_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->try_all_grade_structs__main_2_p_0_2_env_0__conv0_GradeStructure_2));
  ((env_ptr)->try_all_grade_structs__main_2_p_0_2_env_0__cont)((env_ptr)->try_all_grade_structs__main_2_p_0_2_env_0__cont_env_ptr);
}

static void MR_CALL 
main_2_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct try_all_grade_structs__main_2_p_0_2_env_0_s env;

  (env).try_all_grade_structs__main_2_p_0_2_env_0__wrapper_arg_1 = wrapper_arg_1;
  (env).try_all_grade_structs__main_2_p_0_2_env_0__cont = cont;
  (env).try_all_grade_structs__main_2_p_0_2_env_0__cont_env_ptr = cont_env_ptr;
  {
    MR_Box closure = closure_arg;

    try_all_grade_structs__generate_all_tests_1_p_0(&(env).try_all_grade_structs__main_2_p_0_2_env_0__conv0_GradeStructure_2, main_2_p_0_1, &env);
  }
}

void MR_CALL 
main_2_p_0(void)
{
  MR_Word SolverInfo0_6;
  MR_Word GradeStructures_7;
  MR_Integer NumGradeStructures_8;
  MR_Word OutStream_9;
  MR_Word Var_26;
  MR_String Var_40;
  MR_Box conv3_Var_10;
  MR_Box conv2_STATE_VARIABLE_IO_12;

  grade_lib__grade_setup__setup_solver_info_3_p_0((MR_Integer) 0, (MR_Word) (&try_all_grade_structs_scalar_common_2[0]), &SolverInfo0_6);
  mercury__solutions__solutions_2_p_0((MR_Word) (&grade_lib__grade_structure__grade_lib__grade_structure__type_ctor_info_grade_structure_0), (MR_Word) (&try_all_grade_structs_scalar_common_1[1]), &GradeStructures_7);
  mercury__list__length_2_p_0((MR_Word) (&grade_lib__grade_structure__grade_lib__grade_structure__type_ctor_info_grade_structure_0), GradeStructures_7, &NumGradeStructures_8);
  mercury__io__output_stream_3_p_0(&OutStream_9);
  mercury__io__write_string_4_p_0(OutStream_9, (MR_String) "There are ");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&try_all_grade_structs_scalar_common_2[1]), NumGradeStructures_8, &Var_40);
  mercury__io__write_string_4_p_0(OutStream_9, Var_40);
  mercury__io__write_string_4_p_0(OutStream_9, (MR_String) " grade structures to test.\n");
  {
    Var_26 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_26, 0) = ((MR_Box) (&try_all_grade_structs_scalar_common_4[0]));
    MR_hl_field(0, Var_26, 1) = ((MR_Box) (main_2_p_0_3));
    MR_hl_field(0, Var_26, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_26, 3) = ((MR_Box) (OutStream_9));
    MR_hl_field(0, Var_26, 4) = ((MR_Box) (SolverInfo0_6));
  }
  mercury__list__foldl2_6_p_2((MR_Word) (&grade_lib__grade_structure__grade_lib__grade_structure__type_ctor_info_grade_structure_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_26, GradeStructures_7, ((MR_Box) ((MR_Integer) 0)), &conv3_Var_10, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_12);
}

void mercury__try_all_grade_structs__init(void)
{
}

void mercury__try_all_grade_structs__init_type_tables(void)
{
}

void mercury__try_all_grade_structs__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__try_all_grade_structs__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module try_all_grade_structs.
