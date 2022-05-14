/*
** Automatically generated from `grade_setup.m'
** by the Mercury compiler,
** version rotd-2022-05-14
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


// :- module grade_lib.grade_setup.
// :- implementation.

/*
INIT mercury__grade_lib__grade_setup__init
ENDINIT
*/

#include "grade_lib.grade_setup.mih"


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
#include "grade_lib.mih"
#include "int.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "std_util.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "var_value_names.mih"
#include "grade_lib.grade_spec.mih"
#include "grade_lib.grade_state.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_VA_PseudoTypeInfo_Struct1 grade_lib__grade_setup____vpti_pred_1__plain_builtin__type_ctor_info_int_0;

static const MR_EnumFunctorDesc grade_lib__grade_setup__grade_lib__grade_setup__enum_functor_desc_autoconf_gcc_gotos_avail_0_0;

static const MR_EnumFunctorDesc grade_lib__grade_setup__grade_lib__grade_setup__enum_functor_desc_autoconf_gcc_gotos_avail_0_1;

static const MR_EnumFunctorDescPtr grade_lib__grade_setup__grade_lib__grade_setup__enum_ordinal_ordered_autoconf_gcc_gotos_avail_0[2];

static const MR_EnumFunctorDescPtr grade_lib__grade_setup__grade_lib__grade_setup__enum_name_ordered_autoconf_gcc_gotos_avail_0[2];

static const MR_Integer grade_lib__grade_setup__grade_lib__grade_setup__functor_number_map_autoconf_gcc_gotos_avail_0[2];

static const MR_EnumFunctorDesc grade_lib__grade_setup__grade_lib__grade_setup__enum_functor_desc_autoconf_gcc_labels_avail_0_0;

static const MR_EnumFunctorDesc grade_lib__grade_setup__grade_lib__grade_setup__enum_functor_desc_autoconf_gcc_labels_avail_0_1;

static const MR_EnumFunctorDescPtr grade_lib__grade_setup__grade_lib__grade_setup__enum_ordinal_ordered_autoconf_gcc_labels_avail_0[2];

static const MR_EnumFunctorDescPtr grade_lib__grade_setup__grade_lib__grade_setup__enum_name_ordered_autoconf_gcc_labels_avail_0[2];

static const MR_Integer grade_lib__grade_setup__grade_lib__grade_setup__functor_number_map_autoconf_gcc_labels_avail_0[2];

static const MR_EnumFunctorDesc grade_lib__grade_setup__grade_lib__grade_setup__enum_functor_desc_autoconf_gcc_regs_avail_0_0;

static const MR_EnumFunctorDesc grade_lib__grade_setup__grade_lib__grade_setup__enum_functor_desc_autoconf_gcc_regs_avail_0_1;

static const MR_EnumFunctorDescPtr grade_lib__grade_setup__grade_lib__grade_setup__enum_ordinal_ordered_autoconf_gcc_regs_avail_0[2];

static const MR_EnumFunctorDescPtr grade_lib__grade_setup__grade_lib__grade_setup__enum_name_ordered_autoconf_gcc_regs_avail_0[2];

static const MR_Integer grade_lib__grade_setup__grade_lib__grade_setup__functor_number_map_autoconf_gcc_regs_avail_0[2];

static const MR_EnumFunctorDesc grade_lib__grade_setup__grade_lib__grade_setup__enum_functor_desc_autoconf_low_tag_bits_avail_0_0;

static const MR_EnumFunctorDesc grade_lib__grade_setup__grade_lib__grade_setup__enum_functor_desc_autoconf_low_tag_bits_avail_0_1;

static const MR_EnumFunctorDesc grade_lib__grade_setup__grade_lib__grade_setup__enum_functor_desc_autoconf_low_tag_bits_avail_0_2;

static const MR_EnumFunctorDescPtr grade_lib__grade_setup__grade_lib__grade_setup__enum_ordinal_ordered_autoconf_low_tag_bits_avail_0[3];

static const MR_EnumFunctorDescPtr grade_lib__grade_setup__grade_lib__grade_setup__enum_name_ordered_autoconf_low_tag_bits_avail_0[3];

static const MR_Integer grade_lib__grade_setup__grade_lib__grade_setup__functor_number_map_autoconf_low_tag_bits_avail_0[3];

static const MR_EnumFunctorDesc grade_lib__grade_setup__grade_lib__grade_setup__enum_functor_desc_autoconf_merc_file_0_0;

static const MR_EnumFunctorDesc grade_lib__grade_setup__grade_lib__grade_setup__enum_functor_desc_autoconf_merc_file_0_1;

static const MR_EnumFunctorDescPtr grade_lib__grade_setup__grade_lib__grade_setup__enum_ordinal_ordered_autoconf_merc_file_0[2];

static const MR_EnumFunctorDescPtr grade_lib__grade_setup__grade_lib__grade_setup__enum_name_ordered_autoconf_merc_file_0[2];

static const MR_Integer grade_lib__grade_setup__grade_lib__grade_setup__functor_number_map_autoconf_merc_file_0[2];

static const MR_PseudoTypeInfo grade_lib__grade_setup__grade_lib__grade_setup__field_types_autoconf_results_0_0[6];

static const MR_DuArgLocn grade_lib__grade_setup__grade_lib__grade_setup__field_locns_autoconf_results_0_0[6];

static const MR_DuFunctorDesc grade_lib__grade_setup__grade_lib__grade_setup__du_functor_desc_autoconf_results_0_0;

static const MR_DuFunctorDescPtr grade_lib__grade_setup__grade_lib__grade_setup__du_stag_ordered_autoconf_results_0_0[1];

static const MR_DuPtagLayout grade_lib__grade_setup__grade_lib__grade_setup__du_ptag_ordered_autoconf_results_0[1];

static const MR_DuFunctorDescPtr grade_lib__grade_setup__grade_lib__grade_setup__du_name_ordered_autoconf_results_0[1];

static const MR_Integer grade_lib__grade_setup__grade_lib__grade_setup__functor_number_map_autoconf_results_0[1];

static const MR_EnumFunctorDesc grade_lib__grade_setup__grade_lib__grade_setup__enum_functor_desc_autoconf_size_of_double_0_0;

static const MR_EnumFunctorDesc grade_lib__grade_setup__grade_lib__grade_setup__enum_functor_desc_autoconf_size_of_double_0_1;

static const MR_EnumFunctorDescPtr grade_lib__grade_setup__grade_lib__grade_setup__enum_ordinal_ordered_autoconf_size_of_double_0[2];

static const MR_EnumFunctorDescPtr grade_lib__grade_setup__grade_lib__grade_setup__enum_name_ordered_autoconf_size_of_double_0[2];

static const MR_Integer grade_lib__grade_setup__grade_lib__grade_setup__functor_number_map_autoconf_size_of_double_0[2];

static const MR_EnumFunctorDesc grade_lib__grade_setup__grade_lib__grade_setup__enum_functor_desc_solver_var_set_to_0_0;

static const MR_EnumFunctorDesc grade_lib__grade_setup__grade_lib__grade_setup__enum_functor_desc_solver_var_set_to_0_1;

static const MR_EnumFunctorDescPtr grade_lib__grade_setup__grade_lib__grade_setup__enum_ordinal_ordered_solver_var_set_to_0[2];

static const MR_EnumFunctorDescPtr grade_lib__grade_setup__grade_lib__grade_setup__enum_name_ordered_solver_var_set_to_0[2];

static const MR_Integer grade_lib__grade_setup__grade_lib__grade_setup__functor_number_map_solver_var_set_to_0[2];

static MR_bool MR_CALL 
grade_lib__grade_setup__IntroducedFrom__pred__init_solver_vars__256__2_2_p_0(
  MR_Integer NumValues_18,
  MR_Word HeadVar__2_31);

static MR_bool MR_CALL 
grade_lib__grade_setup__IntroducedFrom__pred__init_solver_vars__256__1_2_p_0(
  MR_Integer HeadVar__1_32,
  MR_Integer HeadVar__2_36);

static MR_Word MR_CALL 
grade_lib__grade_setup__solver_var_value_project_id_1_f_0(
  MR_Word SolverVarValue_3);

static void MR_CALL 
grade_lib__grade_setup__set_value_to_false_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_OldPossibles_0_3,
  MR_Word * STATE_VARIABLE_OldPossibles_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6);

static MR_Box MR_CALL 
grade_lib__grade_setup__convert_and_check_requirements_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
grade_lib__grade_setup__convert_and_check_requirements_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
grade_lib__grade_setup__convert_and_check_requirements_5_p_0(
  MR_Integer HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5);

static MR_bool MR_CALL 
grade_lib__grade_setup__init_solver_vars_5_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
grade_lib__grade_setup__init_solver_vars_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
grade_lib__grade_setup__init_solver_vars_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_SolverVarMap_0_2,
  MR_Word * STATE_VARIABLE_SolverVarMap_3,
  MR_Word STATE_VARIABLE_SolverVarPriorityCord_0_4,
  MR_Word * STATE_VARIABLE_SolverVarPriorityCord_5);

static void MR_CALL 
grade_lib__grade_setup__init_solver_var_values_4_p_0(
  MR_Integer CurNumValues_1,
  MR_Integer * HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
grade_lib__grade_setup__set_value_to_true_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_OldPossibles_0_3,
  MR_Word * STATE_VARIABLE_OldPossibles_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6);

static MR_bool MR_CALL 
grade_lib__grade_setup____Unify____autoconf_gcc_gotos_avail_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
grade_lib__grade_setup____Compare____autoconf_gcc_gotos_avail_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
grade_lib__grade_setup____Unify____autoconf_gcc_labels_avail_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
grade_lib__grade_setup____Compare____autoconf_gcc_labels_avail_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
grade_lib__grade_setup____Unify____autoconf_gcc_regs_avail_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
grade_lib__grade_setup____Compare____autoconf_gcc_regs_avail_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
grade_lib__grade_setup____Unify____autoconf_low_tag_bits_avail_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
grade_lib__grade_setup____Compare____autoconf_low_tag_bits_avail_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
grade_lib__grade_setup____Unify____autoconf_merc_file_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
grade_lib__grade_setup____Compare____autoconf_merc_file_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
grade_lib__grade_setup____Unify____autoconf_results_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
grade_lib__grade_setup____Compare____autoconf_results_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
grade_lib__grade_setup____Unify____autoconf_size_of_double_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
grade_lib__grade_setup____Compare____autoconf_size_of_double_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
grade_lib__grade_setup____Unify____solver_var_set_to_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
grade_lib__grade_setup____Compare____solver_var_set_to_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box grade_lib__grade_setup_scalar_common_1[1][2];

static /* final */ const MR_Box grade_lib__grade_setup_scalar_common_2[3][5];

static /* final */ const MR_Box grade_lib__grade_setup_scalar_common_3[1][4];

static /* final */ const MR_Box grade_lib__grade_setup_scalar_common_4[2][3];




static /* final */ const MR_Box grade_lib__grade_setup_scalar_common_1[1][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&grade_lib__grade_state__grade_lib__grade_state__type_ctor_info_requirement_0))
  },
};

static /* final */ const MR_Box grade_lib__grade_setup_scalar_common_2[3][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&grade_lib__grade_setup____vpti_pred_1__plain_builtin__type_ctor_info_int_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&grade_lib__grade_state__grade_lib__grade_state__type_ctor_info_solver_var_value_0)),
    ((MR_Box) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0))
  },
};

static /* final */ const MR_Box grade_lib__grade_setup_scalar_common_3[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (&grade_lib__grade_setup_scalar_common_2[0])),
    ((MR_Box) (grade_lib__grade_setup__init_solver_vars_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box grade_lib__grade_setup_scalar_common_4[2][3] = {
  /* row   0 */
  {
    ((MR_Box) (&grade_lib__grade_setup_scalar_common_2[2])),
    ((MR_Box) (grade_lib__grade_setup__convert_and_check_requirements_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&grade_lib__grade_setup_scalar_common_2[2])),
    ((MR_Box) (grade_lib__grade_setup__convert_and_check_requirements_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_VA_PseudoTypeInfo_Struct1 grade_lib__grade_setup____vpti_pred_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 1,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_EnumFunctorDesc grade_lib__grade_setup__grade_lib__grade_setup__enum_functor_desc_autoconf_gcc_gotos_avail_0_0 = {
  (MR_String) "autoconf_gcc_gotos_avail_no",
  INT32_C(0)
};

static const MR_EnumFunctorDesc grade_lib__grade_setup__grade_lib__grade_setup__enum_functor_desc_autoconf_gcc_gotos_avail_0_1 = {
  (MR_String) "autoconf_gcc_gotos_avail_yes",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr grade_lib__grade_setup__grade_lib__grade_setup__enum_ordinal_ordered_autoconf_gcc_gotos_avail_0[2] = {
  &grade_lib__grade_setup__grade_lib__grade_setup__enum_functor_desc_autoconf_gcc_gotos_avail_0_0,
  &grade_lib__grade_setup__grade_lib__grade_setup__enum_functor_desc_autoconf_gcc_gotos_avail_0_1
};

static const MR_EnumFunctorDescPtr grade_lib__grade_setup__grade_lib__grade_setup__enum_name_ordered_autoconf_gcc_gotos_avail_0[2] = {
  &grade_lib__grade_setup__grade_lib__grade_setup__enum_functor_desc_autoconf_gcc_gotos_avail_0_0,
  &grade_lib__grade_setup__grade_lib__grade_setup__enum_functor_desc_autoconf_gcc_gotos_avail_0_1
};

static const MR_Integer grade_lib__grade_setup__grade_lib__grade_setup__functor_number_map_autoconf_gcc_gotos_avail_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct grade_lib__grade_setup__grade_lib__grade_setup__type_ctor_info_autoconf_gcc_gotos_avail_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (grade_lib__grade_setup____Unify____autoconf_gcc_gotos_avail_0_0_10001)),
  ((MR_Box) (grade_lib__grade_setup____Compare____autoconf_gcc_gotos_avail_0_0_10001)),
  (MR_String) "grade_lib.grade_setup",
  (MR_String) "autoconf_gcc_gotos_avail",
  { grade_lib__grade_setup__grade_lib__grade_setup__enum_name_ordered_autoconf_gcc_gotos_avail_0 },
  { grade_lib__grade_setup__grade_lib__grade_setup__enum_ordinal_ordered_autoconf_gcc_gotos_avail_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  grade_lib__grade_setup__grade_lib__grade_setup__functor_number_map_autoconf_gcc_gotos_avail_0,

};

static const MR_EnumFunctorDesc grade_lib__grade_setup__grade_lib__grade_setup__enum_functor_desc_autoconf_gcc_labels_avail_0_0 = {
  (MR_String) "autoconf_gcc_labels_avail_no",
  INT32_C(0)
};

static const MR_EnumFunctorDesc grade_lib__grade_setup__grade_lib__grade_setup__enum_functor_desc_autoconf_gcc_labels_avail_0_1 = {
  (MR_String) "autoconf_gcc_labels_avail_yes",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr grade_lib__grade_setup__grade_lib__grade_setup__enum_ordinal_ordered_autoconf_gcc_labels_avail_0[2] = {
  &grade_lib__grade_setup__grade_lib__grade_setup__enum_functor_desc_autoconf_gcc_labels_avail_0_0,
  &grade_lib__grade_setup__grade_lib__grade_setup__enum_functor_desc_autoconf_gcc_labels_avail_0_1
};

static const MR_EnumFunctorDescPtr grade_lib__grade_setup__grade_lib__grade_setup__enum_name_ordered_autoconf_gcc_labels_avail_0[2] = {
  &grade_lib__grade_setup__grade_lib__grade_setup__enum_functor_desc_autoconf_gcc_labels_avail_0_0,
  &grade_lib__grade_setup__grade_lib__grade_setup__enum_functor_desc_autoconf_gcc_labels_avail_0_1
};

static const MR_Integer grade_lib__grade_setup__grade_lib__grade_setup__functor_number_map_autoconf_gcc_labels_avail_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct grade_lib__grade_setup__grade_lib__grade_setup__type_ctor_info_autoconf_gcc_labels_avail_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (grade_lib__grade_setup____Unify____autoconf_gcc_labels_avail_0_0_10001)),
  ((MR_Box) (grade_lib__grade_setup____Compare____autoconf_gcc_labels_avail_0_0_10001)),
  (MR_String) "grade_lib.grade_setup",
  (MR_String) "autoconf_gcc_labels_avail",
  { grade_lib__grade_setup__grade_lib__grade_setup__enum_name_ordered_autoconf_gcc_labels_avail_0 },
  { grade_lib__grade_setup__grade_lib__grade_setup__enum_ordinal_ordered_autoconf_gcc_labels_avail_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  grade_lib__grade_setup__grade_lib__grade_setup__functor_number_map_autoconf_gcc_labels_avail_0,

};

static const MR_EnumFunctorDesc grade_lib__grade_setup__grade_lib__grade_setup__enum_functor_desc_autoconf_gcc_regs_avail_0_0 = {
  (MR_String) "autoconf_gcc_regs_avail_no",
  INT32_C(0)
};

static const MR_EnumFunctorDesc grade_lib__grade_setup__grade_lib__grade_setup__enum_functor_desc_autoconf_gcc_regs_avail_0_1 = {
  (MR_String) "autoconf_gcc_regs_avail_yes",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr grade_lib__grade_setup__grade_lib__grade_setup__enum_ordinal_ordered_autoconf_gcc_regs_avail_0[2] = {
  &grade_lib__grade_setup__grade_lib__grade_setup__enum_functor_desc_autoconf_gcc_regs_avail_0_0,
  &grade_lib__grade_setup__grade_lib__grade_setup__enum_functor_desc_autoconf_gcc_regs_avail_0_1
};

static const MR_EnumFunctorDescPtr grade_lib__grade_setup__grade_lib__grade_setup__enum_name_ordered_autoconf_gcc_regs_avail_0[2] = {
  &grade_lib__grade_setup__grade_lib__grade_setup__enum_functor_desc_autoconf_gcc_regs_avail_0_0,
  &grade_lib__grade_setup__grade_lib__grade_setup__enum_functor_desc_autoconf_gcc_regs_avail_0_1
};

static const MR_Integer grade_lib__grade_setup__grade_lib__grade_setup__functor_number_map_autoconf_gcc_regs_avail_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct grade_lib__grade_setup__grade_lib__grade_setup__type_ctor_info_autoconf_gcc_regs_avail_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (grade_lib__grade_setup____Unify____autoconf_gcc_regs_avail_0_0_10001)),
  ((MR_Box) (grade_lib__grade_setup____Compare____autoconf_gcc_regs_avail_0_0_10001)),
  (MR_String) "grade_lib.grade_setup",
  (MR_String) "autoconf_gcc_regs_avail",
  { grade_lib__grade_setup__grade_lib__grade_setup__enum_name_ordered_autoconf_gcc_regs_avail_0 },
  { grade_lib__grade_setup__grade_lib__grade_setup__enum_ordinal_ordered_autoconf_gcc_regs_avail_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  grade_lib__grade_setup__grade_lib__grade_setup__functor_number_map_autoconf_gcc_regs_avail_0,

};

static const MR_EnumFunctorDesc grade_lib__grade_setup__grade_lib__grade_setup__enum_functor_desc_autoconf_low_tag_bits_avail_0_0 = {
  (MR_String) "autoconf_low_tag_bits_avail_0",
  INT32_C(0)
};

static const MR_EnumFunctorDesc grade_lib__grade_setup__grade_lib__grade_setup__enum_functor_desc_autoconf_low_tag_bits_avail_0_1 = {
  (MR_String) "autoconf_low_tag_bits_avail_2",
  INT32_C(1)
};

static const MR_EnumFunctorDesc grade_lib__grade_setup__grade_lib__grade_setup__enum_functor_desc_autoconf_low_tag_bits_avail_0_2 = {
  (MR_String) "autoconf_low_tag_bits_avail_3",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr grade_lib__grade_setup__grade_lib__grade_setup__enum_ordinal_ordered_autoconf_low_tag_bits_avail_0[3] = {
  &grade_lib__grade_setup__grade_lib__grade_setup__enum_functor_desc_autoconf_low_tag_bits_avail_0_0,
  &grade_lib__grade_setup__grade_lib__grade_setup__enum_functor_desc_autoconf_low_tag_bits_avail_0_1,
  &grade_lib__grade_setup__grade_lib__grade_setup__enum_functor_desc_autoconf_low_tag_bits_avail_0_2
};

static const MR_EnumFunctorDescPtr grade_lib__grade_setup__grade_lib__grade_setup__enum_name_ordered_autoconf_low_tag_bits_avail_0[3] = {
  &grade_lib__grade_setup__grade_lib__grade_setup__enum_functor_desc_autoconf_low_tag_bits_avail_0_0,
  &grade_lib__grade_setup__grade_lib__grade_setup__enum_functor_desc_autoconf_low_tag_bits_avail_0_1,
  &grade_lib__grade_setup__grade_lib__grade_setup__enum_functor_desc_autoconf_low_tag_bits_avail_0_2
};

static const MR_Integer grade_lib__grade_setup__grade_lib__grade_setup__functor_number_map_autoconf_low_tag_bits_avail_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct grade_lib__grade_setup__grade_lib__grade_setup__type_ctor_info_autoconf_low_tag_bits_avail_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (grade_lib__grade_setup____Unify____autoconf_low_tag_bits_avail_0_0_10001)),
  ((MR_Box) (grade_lib__grade_setup____Compare____autoconf_low_tag_bits_avail_0_0_10001)),
  (MR_String) "grade_lib.grade_setup",
  (MR_String) "autoconf_low_tag_bits_avail",
  { grade_lib__grade_setup__grade_lib__grade_setup__enum_name_ordered_autoconf_low_tag_bits_avail_0 },
  { grade_lib__grade_setup__grade_lib__grade_setup__enum_ordinal_ordered_autoconf_low_tag_bits_avail_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  grade_lib__grade_setup__grade_lib__grade_setup__functor_number_map_autoconf_low_tag_bits_avail_0,

};

static const MR_EnumFunctorDesc grade_lib__grade_setup__grade_lib__grade_setup__enum_functor_desc_autoconf_merc_file_0_0 = {
  (MR_String) "autoconf_merc_file_no",
  INT32_C(0)
};

static const MR_EnumFunctorDesc grade_lib__grade_setup__grade_lib__grade_setup__enum_functor_desc_autoconf_merc_file_0_1 = {
  (MR_String) "autoconf_merc_file_yes",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr grade_lib__grade_setup__grade_lib__grade_setup__enum_ordinal_ordered_autoconf_merc_file_0[2] = {
  &grade_lib__grade_setup__grade_lib__grade_setup__enum_functor_desc_autoconf_merc_file_0_0,
  &grade_lib__grade_setup__grade_lib__grade_setup__enum_functor_desc_autoconf_merc_file_0_1
};

static const MR_EnumFunctorDescPtr grade_lib__grade_setup__grade_lib__grade_setup__enum_name_ordered_autoconf_merc_file_0[2] = {
  &grade_lib__grade_setup__grade_lib__grade_setup__enum_functor_desc_autoconf_merc_file_0_0,
  &grade_lib__grade_setup__grade_lib__grade_setup__enum_functor_desc_autoconf_merc_file_0_1
};

static const MR_Integer grade_lib__grade_setup__grade_lib__grade_setup__functor_number_map_autoconf_merc_file_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct grade_lib__grade_setup__grade_lib__grade_setup__type_ctor_info_autoconf_merc_file_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (grade_lib__grade_setup____Unify____autoconf_merc_file_0_0_10001)),
  ((MR_Box) (grade_lib__grade_setup____Compare____autoconf_merc_file_0_0_10001)),
  (MR_String) "grade_lib.grade_setup",
  (MR_String) "autoconf_merc_file",
  { grade_lib__grade_setup__grade_lib__grade_setup__enum_name_ordered_autoconf_merc_file_0 },
  { grade_lib__grade_setup__grade_lib__grade_setup__enum_ordinal_ordered_autoconf_merc_file_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  grade_lib__grade_setup__grade_lib__grade_setup__functor_number_map_autoconf_merc_file_0,

};

static const MR_PseudoTypeInfo grade_lib__grade_setup__grade_lib__grade_setup__field_types_autoconf_results_0_0[6] = {
  (MR_PseudoTypeInfo) (&grade_lib__grade_setup__grade_lib__grade_setup__type_ctor_info_autoconf_gcc_regs_avail_0),
  (MR_PseudoTypeInfo) (&grade_lib__grade_setup__grade_lib__grade_setup__type_ctor_info_autoconf_gcc_gotos_avail_0),
  (MR_PseudoTypeInfo) (&grade_lib__grade_setup__grade_lib__grade_setup__type_ctor_info_autoconf_gcc_labels_avail_0),
  (MR_PseudoTypeInfo) (&grade_lib__grade_setup__grade_lib__grade_setup__type_ctor_info_autoconf_low_tag_bits_avail_0),
  (MR_PseudoTypeInfo) (&grade_lib__grade_setup__grade_lib__grade_setup__type_ctor_info_autoconf_size_of_double_0),
  (MR_PseudoTypeInfo) (&grade_lib__grade_setup__grade_lib__grade_setup__type_ctor_info_autoconf_merc_file_0)
};

static const MR_DuArgLocn grade_lib__grade_setup__grade_lib__grade_setup__field_locns_autoconf_results_0_0[6] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 6,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 5,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 4,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 2,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc grade_lib__grade_setup__grade_lib__grade_setup__du_functor_desc_autoconf_results_0_0 = {
  (MR_String) "autoconf_results",
  INT16_C(6),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  grade_lib__grade_setup__grade_lib__grade_setup__field_types_autoconf_results_0_0,
  NULL,
  grade_lib__grade_setup__grade_lib__grade_setup__field_locns_autoconf_results_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr grade_lib__grade_setup__grade_lib__grade_setup__du_stag_ordered_autoconf_results_0_0[1] = {
  &grade_lib__grade_setup__grade_lib__grade_setup__du_functor_desc_autoconf_results_0_0
};

static const MR_DuPtagLayout grade_lib__grade_setup__grade_lib__grade_setup__du_ptag_ordered_autoconf_results_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    grade_lib__grade_setup__grade_lib__grade_setup__du_stag_ordered_autoconf_results_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr grade_lib__grade_setup__grade_lib__grade_setup__du_name_ordered_autoconf_results_0[1] = {
  &grade_lib__grade_setup__grade_lib__grade_setup__du_functor_desc_autoconf_results_0_0
};

static const MR_Integer grade_lib__grade_setup__grade_lib__grade_setup__functor_number_map_autoconf_results_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct grade_lib__grade_setup__grade_lib__grade_setup__type_ctor_info_autoconf_results_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (grade_lib__grade_setup____Unify____autoconf_results_0_0_10001)),
  ((MR_Box) (grade_lib__grade_setup____Compare____autoconf_results_0_0_10001)),
  (MR_String) "grade_lib.grade_setup",
  (MR_String) "autoconf_results",
  { grade_lib__grade_setup__grade_lib__grade_setup__du_name_ordered_autoconf_results_0 },
  { grade_lib__grade_setup__grade_lib__grade_setup__du_ptag_ordered_autoconf_results_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  grade_lib__grade_setup__grade_lib__grade_setup__functor_number_map_autoconf_results_0,

};

static const MR_EnumFunctorDesc grade_lib__grade_setup__grade_lib__grade_setup__enum_functor_desc_autoconf_size_of_double_0_0 = {
  (MR_String) "autoconf_size_of_double_eq_ptr",
  INT32_C(0)
};

static const MR_EnumFunctorDesc grade_lib__grade_setup__grade_lib__grade_setup__enum_functor_desc_autoconf_size_of_double_0_1 = {
  (MR_String) "autoconf_size_of_double_ne_ptr",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr grade_lib__grade_setup__grade_lib__grade_setup__enum_ordinal_ordered_autoconf_size_of_double_0[2] = {
  &grade_lib__grade_setup__grade_lib__grade_setup__enum_functor_desc_autoconf_size_of_double_0_0,
  &grade_lib__grade_setup__grade_lib__grade_setup__enum_functor_desc_autoconf_size_of_double_0_1
};

static const MR_EnumFunctorDescPtr grade_lib__grade_setup__grade_lib__grade_setup__enum_name_ordered_autoconf_size_of_double_0[2] = {
  &grade_lib__grade_setup__grade_lib__grade_setup__enum_functor_desc_autoconf_size_of_double_0_0,
  &grade_lib__grade_setup__grade_lib__grade_setup__enum_functor_desc_autoconf_size_of_double_0_1
};

static const MR_Integer grade_lib__grade_setup__grade_lib__grade_setup__functor_number_map_autoconf_size_of_double_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct grade_lib__grade_setup__grade_lib__grade_setup__type_ctor_info_autoconf_size_of_double_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (grade_lib__grade_setup____Unify____autoconf_size_of_double_0_0_10001)),
  ((MR_Box) (grade_lib__grade_setup____Compare____autoconf_size_of_double_0_0_10001)),
  (MR_String) "grade_lib.grade_setup",
  (MR_String) "autoconf_size_of_double",
  { grade_lib__grade_setup__grade_lib__grade_setup__enum_name_ordered_autoconf_size_of_double_0 },
  { grade_lib__grade_setup__grade_lib__grade_setup__enum_ordinal_ordered_autoconf_size_of_double_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  grade_lib__grade_setup__grade_lib__grade_setup__functor_number_map_autoconf_size_of_double_0,

};

static const MR_EnumFunctorDesc grade_lib__grade_setup__grade_lib__grade_setup__enum_functor_desc_solver_var_set_to_0_0 = {
  (MR_String) "set_to_false",
  INT32_C(0)
};

static const MR_EnumFunctorDesc grade_lib__grade_setup__grade_lib__grade_setup__enum_functor_desc_solver_var_set_to_0_1 = {
  (MR_String) "set_to_true",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr grade_lib__grade_setup__grade_lib__grade_setup__enum_ordinal_ordered_solver_var_set_to_0[2] = {
  &grade_lib__grade_setup__grade_lib__grade_setup__enum_functor_desc_solver_var_set_to_0_0,
  &grade_lib__grade_setup__grade_lib__grade_setup__enum_functor_desc_solver_var_set_to_0_1
};

static const MR_EnumFunctorDescPtr grade_lib__grade_setup__grade_lib__grade_setup__enum_name_ordered_solver_var_set_to_0[2] = {
  &grade_lib__grade_setup__grade_lib__grade_setup__enum_functor_desc_solver_var_set_to_0_0,
  &grade_lib__grade_setup__grade_lib__grade_setup__enum_functor_desc_solver_var_set_to_0_1
};

static const MR_Integer grade_lib__grade_setup__grade_lib__grade_setup__functor_number_map_solver_var_set_to_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct grade_lib__grade_setup__grade_lib__grade_setup__type_ctor_info_solver_var_set_to_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (grade_lib__grade_setup____Unify____solver_var_set_to_0_0_10001)),
  ((MR_Box) (grade_lib__grade_setup____Compare____solver_var_set_to_0_0_10001)),
  (MR_String) "grade_lib.grade_setup",
  (MR_String) "solver_var_set_to",
  { grade_lib__grade_setup__grade_lib__grade_setup__enum_name_ordered_solver_var_set_to_0 },
  { grade_lib__grade_setup__grade_lib__grade_setup__enum_ordinal_ordered_solver_var_set_to_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  grade_lib__grade_setup__grade_lib__grade_setup__functor_number_map_solver_var_set_to_0,

};

static MR_bool MR_CALL 
grade_lib__grade_setup__IntroducedFrom__pred__init_solver_vars__256__2_2_p_0(
  MR_Integer NumValues_18,
  MR_Word HeadVar__2_31)
{
  MR_bool succeeded;

  succeeded = mercury__std_util__isnt_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), HeadVar__2_31, ((MR_Box) (NumValues_18)));
  return succeeded;
}

static MR_bool MR_CALL 
grade_lib__grade_setup__IntroducedFrom__pred__init_solver_vars__256__1_2_p_0(
  MR_Integer HeadVar__1_32,
  MR_Integer HeadVar__2_36)
{
  MR_bool succeeded = (HeadVar__1_32 == HeadVar__2_36);

  return succeeded;
}

void MR_CALL 
grade_lib__grade_setup____Compare____solver_var_set_to_0_0(
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

MR_bool MR_CALL 
grade_lib__grade_setup____Unify____solver_var_set_to_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
grade_lib__grade_setup____Compare____autoconf_size_of_double_0_0(
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

MR_bool MR_CALL 
grade_lib__grade_setup____Unify____autoconf_size_of_double_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
grade_lib__grade_setup____Compare____autoconf_results_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_21 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_22 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_21 == CastY_22);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 6)) & (MR_Integer) 1);
    MR_Word ArgY1_5 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 6)) & (MR_Integer) 1);
    MR_Word ArgX2_7 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 5)) & (MR_Integer) 1);
    MR_Word ArgY2_8 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 5)) & (MR_Integer) 1);
    MR_Word ArgX3_10 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 4)) & (MR_Integer) 1);
    MR_Word ArgY3_11 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 4)) & (MR_Integer) 1);
    MR_Word ArgX4_13 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 2)) & (MR_Integer) 3);
    MR_Word ArgY4_14 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 2)) & (MR_Integer) 3);
    MR_Word ArgX5_16 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY5_17 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX6_19 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgY6_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word SubResult1_6;
    MR_Integer Var_29 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_30 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_29 < Var_30);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (Var_29 > Var_30);
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
      MR_Integer Var_31 = (MR_Integer) (ArgX2_7);
      MR_Integer Var_32 = (MR_Integer) (ArgY2_8);

      succeeded = (Var_31 < Var_32);
      if (succeeded)
      {
        SubResult2_9 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_31 > Var_32);
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
        MR_Integer Var_33 = (MR_Integer) (ArgX3_10);
        MR_Integer Var_34 = (MR_Integer) (ArgY3_11);

        succeeded = (Var_33 < Var_34);
        if (succeeded)
        {
          SubResult3_12 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (Var_33 > Var_34);
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
          MR_Word SubResult4_15;
          MR_Integer Var_35 = (MR_Integer) (ArgX4_13);
          MR_Integer Var_36 = (MR_Integer) (ArgY4_14);

          succeeded = (Var_35 < Var_36);
          if (succeeded)
          {
            SubResult4_15 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (Var_35 > Var_36);
            if (succeeded)
            {
              SubResult4_15 = (MR_Integer) 2;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = MR_TRUE;
              succeeded = !(succeeded);
              if (succeeded)
              {
                SubResult4_15 = (MR_Integer) 0;
                succeeded = MR_TRUE;
              }
            }
          }
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;
            MR_Integer Var_37 = (MR_Integer) (ArgX5_16);
            MR_Integer Var_38 = (MR_Integer) (ArgY5_17);

            succeeded = (Var_37 < Var_38);
            if (succeeded)
            {
              SubResult5_18 = (MR_Integer) 1;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = (Var_37 > Var_38);
              if (succeeded)
              {
                SubResult5_18 = (MR_Integer) 2;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = MR_TRUE;
                succeeded = !(succeeded);
                if (succeeded)
                {
                  SubResult5_18 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
              }
            }
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Integer Var_39 = (MR_Integer) (ArgX6_19);
              MR_Integer Var_40 = (MR_Integer) (ArgY6_20);

              succeeded = (Var_39 < Var_40);
              if (succeeded)
                *HeadVar__1_1 = (MR_Integer) 1;
              else
              {
                succeeded = (Var_39 > Var_40);
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
  }
}

MR_bool MR_CALL 
grade_lib__grade_setup____Unify____autoconf_results_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_15 == CastY_16);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 6)) & (MR_Integer) 1);
    MR_Word ArgY1_4 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 6)) & (MR_Integer) 1);
    MR_Word ArgX2_5 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 5)) & (MR_Integer) 1);
    MR_Word ArgY2_6 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 5)) & (MR_Integer) 1);
    MR_Word ArgX3_7 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 4)) & (MR_Integer) 1);
    MR_Word ArgY3_8 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 4)) & (MR_Integer) 1);
    MR_Word ArgX4_9 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 2)) & (MR_Integer) 3);
    MR_Word ArgY4_10 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 2)) & (MR_Integer) 3);
    MR_Word ArgX5_11 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY5_12 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX6_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgY6_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
      {
        succeeded = (ArgX3_7 == ArgY3_8);
        if (succeeded)
        {
          succeeded = (ArgX4_9 == ArgY4_10);
          if (succeeded)
          {
            succeeded = (ArgX5_11 == ArgY5_12);
            if (succeeded)
              succeeded = (ArgX6_13 == ArgY6_14);
          }
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
grade_lib__grade_setup____Compare____autoconf_merc_file_0_0(
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

MR_bool MR_CALL 
grade_lib__grade_setup____Unify____autoconf_merc_file_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
grade_lib__grade_setup____Compare____autoconf_low_tag_bits_avail_0_0(
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

MR_bool MR_CALL 
grade_lib__grade_setup____Unify____autoconf_low_tag_bits_avail_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
grade_lib__grade_setup____Compare____autoconf_gcc_regs_avail_0_0(
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

MR_bool MR_CALL 
grade_lib__grade_setup____Unify____autoconf_gcc_regs_avail_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
grade_lib__grade_setup____Compare____autoconf_gcc_labels_avail_0_0(
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

MR_bool MR_CALL 
grade_lib__grade_setup____Unify____autoconf_gcc_labels_avail_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
grade_lib__grade_setup____Compare____autoconf_gcc_gotos_avail_0_0(
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

MR_bool MR_CALL 
grade_lib__grade_setup____Unify____autoconf_gcc_gotos_avail_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

  return succeeded;
}

static MR_Word MR_CALL 
grade_lib__grade_setup__solver_var_value_project_id_1_f_0(
  MR_Word SolverVarValue_3)
{
  MR_Word HeadVar__2_2 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), SolverVarValue_3, (MR_Integer) 0))) & (MR_Integer) 127);

  return HeadVar__2_2;
}

void MR_CALL 
grade_lib__grade_setup__set_solver_var_9_p_0(
  MR_String VarName_10,
  MR_String ValueName_11,
  MR_Word VarId_12,
  MR_Word ValueId_13,
  MR_Word SetTo_14,
  MR_Word WhyNot_15,
  MR_Word * MaybeError_16,
  MR_Word STATE_VARIABLE_SolverInfo_0_20,
  MR_Word * STATE_VARIABLE_SolverInfo_21)
{
  MR_Word SolverVarMap0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_SolverInfo_0_20, (MR_Integer) 2))));
  MR_Word SolverVarMap_19;
  MR_Word SolverVar0_27;
  MR_Integer CntAll_28;
  MR_Integer CntPoss0_29;
  MR_Word Values0_30;
  MR_Word OldPossibles_31;
  MR_Word Values_32;
  MR_Box conv0_SolverVar0_27;
  MR_Word Var_24;
  MR_Word Var_25;

  mercury__map__lookup_3_p_0((MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0), (MR_Word) (&grade_lib__grade_state__grade_lib__grade_state__type_ctor_info_solver_var_0), SolverVarMap0_18, ((MR_Box) (VarId_12)), &conv0_SolverVar0_27);
  SolverVar0_27 = ((MR_Word) (conv0_SolverVar0_27));
  CntAll_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), SolverVar0_27, (MR_Integer) 0))));
  CntPoss0_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), SolverVar0_27, (MR_Integer) 1))));
  Values0_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SolverVar0_27, (MR_Integer) 2))));
  switch (SetTo_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      grade_lib__grade_setup__set_value_to_false_6_p_0(ValueId_13, WhyNot_15, (MR_Word) ((MR_Unsigned) 0U), &OldPossibles_31, Values0_30, &Values_32);
      break;
    case (MR_Integer) 1:
      grade_lib__grade_setup__set_value_to_true_6_p_0(ValueId_13, WhyNot_15, (MR_Word) ((MR_Unsigned) 0U), &OldPossibles_31, Values0_30, &Values_32);
      break;
  }
  if ((OldPossibles_31 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_String Msg_33;
    MR_String Var_82;
    MR_String Var_84;
    MR_String Var_85;

    Var_82 = mercury__string__f_43_43_2_f_0(ValueName_11, (MR_String) "\n");
    Var_84 = mercury__string__f_43_43_2_f_0((MR_String) " has no value named ", Var_82);
    Var_85 = mercury__string__f_43_43_2_f_0(VarName_10, Var_84);
    Msg_33 = mercury__string__f_43_43_2_f_0((MR_String) "solver variable ", Var_85);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeError_16 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Msg_33));
    }
    SolverVarMap_19 = SolverVarMap0_18;
  }
  else
  {
    MR_Word Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OldPossibles_31, (MR_Integer) 1))));
    MR_Word Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OldPossibles_31, (MR_Integer) 0))));

    if ((Var_70 == (MR_Word) ((MR_Unsigned) 0U)))
      switch (SetTo_14) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          if ((Var_71 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Integer CntPoss_65;
            MR_Word SolverVar_66;

            *MaybeError_16 = (MR_Word) ((MR_Unsigned) 0U);
            CntPoss_65 = (MR_Integer) ((MR_Unsigned) CntPoss0_29 - (MR_Unsigned) 1);
            {
              SolverVar_66 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), SolverVar_66, 0) = ((MR_Box) (CntAll_28));
              MR_hl_field(MR_mktag(0), SolverVar_66, 1) = ((MR_Box) (CntPoss_65));
              MR_hl_field(MR_mktag(0), SolverVar_66, 2) = ((MR_Box) (Values_32));
            }
            mercury__map__det_update_4_p_0((MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0), (MR_Word) (&grade_lib__grade_state__grade_lib__grade_state__type_ctor_info_solver_var_0), ((MR_Box) (VarId_12)), ((MR_Box) (SolverVar_66)), SolverVarMap0_18, &SolverVarMap_19);
          }
          else
          {
            *MaybeError_16 = (MR_Word) ((MR_Unsigned) 0U);
            SolverVarMap_19 = SolverVarMap0_18;
          }
          break;
        case (MR_Integer) 1:
          if ((Var_71 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word SolverVar_36;

            *MaybeError_16 = (MR_Word) ((MR_Unsigned) 0U);
            {
              SolverVar_36 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), SolverVar_36, 0) = ((MR_Box) (CntAll_28));
              MR_hl_field(MR_mktag(0), SolverVar_36, 1) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), SolverVar_36, 2) = ((MR_Box) (Values_32));
            }
            mercury__map__det_update_4_p_0((MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0), (MR_Word) (&grade_lib__grade_state__grade_lib__grade_state__type_ctor_info_solver_var_0), ((MR_Box) (VarId_12)), ((MR_Box) (SolverVar_36)), SolverVarMap0_18, &SolverVarMap_19);
          }
          else
          {
            MR_String Msg_64;
            MR_String Var_79;

            Var_79 = mercury__string__f_43_43_2_f_0(VarName_10, (MR_String) "\n");
            Msg_64 = mercury__string__f_43_43_2_f_0((MR_String) "inconsistent settings for solver variable ", Var_79);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeError_16 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Msg_64));
            }
            SolverVarMap_19 = SolverVarMap0_18;
          }
          break;
      }
    else
    {
      MR_String Msg_67;
      MR_String Var_73;
      MR_String Var_75;
      MR_String Var_76;

      Var_73 = mercury__string__f_43_43_2_f_0(ValueName_11, (MR_String) "\n");
      Var_75 = mercury__string__f_43_43_2_f_0((MR_String) " has more than one copy of value ", Var_73);
      Var_76 = mercury__string__f_43_43_2_f_0(VarName_10, Var_75);
      Msg_67 = mercury__string__f_43_43_2_f_0((MR_String) "solver var ", Var_76);
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140grade_lib.grade_setup.set_solver_var_in_map\'/9", Msg_67);
        return;
      }
    }
  }
  Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_SolverInfo_0_20, (MR_Integer) 0))));
  Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_SolverInfo_0_20, (MR_Integer) 1))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_SolverInfo_21 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_24));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_25));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (SolverVarMap_19));
  }
}

static void MR_CALL 
grade_lib__grade_setup__set_value_to_false_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_OldPossibles_0_3,
  MR_Word * STATE_VARIABLE_OldPossibles_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6)
{
  MR_bool succeeded;

  if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_OldPossibles_4 = STATE_VARIABLE_OldPossibles_0_3;
  }
  else
  {
    MR_Word HeadValue0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
    MR_Word TailValues0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));
    MR_Word HeadValue_17;
    MR_Word TailValues_18;
    MR_Word Id_19 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadValue0_15, (MR_Integer) 0))) & (MR_Integer) 127);
    MR_Word Possible0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadValue0_15, (MR_Integer) 1))));
    MR_Word STATE_VARIABLE_OldPossibles_24_24;

    succeeded = (HeadVar__1_1 == Id_19);
    if (succeeded)
    {
      MR_Word Possible_21;

      {
        STATE_VARIABLE_OldPossibles_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_OldPossibles_24_24, 0) = ((MR_Box) (Possible0_20));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_OldPossibles_24_24, 1) = ((MR_Box) (STATE_VARIABLE_OldPossibles_0_3));
      }
      {
        Possible_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Possible_21, 0) = ((MR_Box) (HeadVar__2_2));
      }
      {
        HeadValue_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), HeadValue_17, 0) = (MR_Box) ((MR_Unsigned) (HeadVar__1_1));
        MR_hl_field(MR_mktag(0), HeadValue_17, 1) = ((MR_Box) (Possible_21));
      }
    }
    else
    {
      HeadValue_17 = HeadValue0_15;
      STATE_VARIABLE_OldPossibles_24_24 = STATE_VARIABLE_OldPossibles_0_3;
    }
    grade_lib__grade_setup__set_value_to_false_6_p_0(HeadVar__1_1, HeadVar__2_2, STATE_VARIABLE_OldPossibles_24_24, STATE_VARIABLE_OldPossibles_4, TailValues0_16, &TailValues_18);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__6_6 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadValue_17));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailValues_18));
    }
  }
}

void MR_CALL 
grade_lib__grade_setup__setup_solver_info_3_p_0(
  MR_Word SpecsVersion_4,
  MR_Word AutoconfResults_5,
  MR_Word * STATE_VARIABLE_SolverInfo_22)
{
  MR_Word SolverVarPriority_8;
  MR_Word Requirements_9;
  MR_Word GccRegsAvail_10;
  MR_Word GccGotosAvail_11;
  MR_Word GccLabelsAvail_12;
  MR_Word LowTagBitsAvail_13;
  MR_Word SizeOfDouble_14;
  MR_Word MercFile_15;
  MR_Word GccRegsAvailValue_16;
  MR_Word GccGotosAvailValue_17;
  MR_Word GccLabelsAvailValue_18;
  MR_Word LowTagBitsAvailValue_19;
  MR_Word SizeOfDoubleValue_20;
  MR_Word MercFileValue_21;
  MR_Word STATE_VARIABLE_SolverInfo_23_23;
  MR_Word STATE_VARIABLE_SolverInfo_25_25;
  MR_Word STATE_VARIABLE_SolverInfo_27_27;
  MR_Word STATE_VARIABLE_SolverInfo_29_29;
  MR_Word STATE_VARIABLE_SolverInfo_31_31;
  MR_Word STATE_VARIABLE_SolverInfo_33_33;
  MR_Word SolverVarSpecs_35;
  MR_Word SolverVarPriorityCord_36;
  MR_Word Var_37;
  MR_Word Var_38;
  MR_Word RequirementSpecs_41;
  MR_Word BadRequirements_42;
  MR_Word SolverVarMap0_51;
  MR_Word SolverVarMap0_59;
  MR_Word SolverVarMap0_67;
  MR_Word SolverVarMap0_75;
  MR_Word SolverVarMap0_83;
  MR_Word SolverVarMap0_91;
  MR_Word SolverVarMap_92;
  MR_Word Var_56;
  MR_Word Var_57;
  MR_Word Var_64;
  MR_Word Var_65;
  MR_Word Var_72;
  MR_Word Var_73;
  MR_Word Var_80;
  MR_Word Var_81;
  MR_Word Var_88;
  MR_Word Var_89;
  MR_Word Var_96;
  MR_Word Var_97;

  SolverVarSpecs_35 = grade_lib__grade_spec__init_solver_var_specs_1_f_0(SpecsVersion_4);
  Var_37 = mercury__map__init_0_f_0((MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0), (MR_Word) (&grade_lib__grade_state__grade_lib__grade_state__type_ctor_info_solver_var_0));
  Var_38 = mercury__cord__init_0_f_0((MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0));
  grade_lib__grade_setup__init_solver_vars_5_p_0(SolverVarSpecs_35, Var_37, &SolverVarMap0_51, Var_38, &SolverVarPriorityCord_36);
  SolverVarPriority_8 = mercury__cord__to_list_1_f_0((MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0), SolverVarPriorityCord_36);
  RequirementSpecs_41 = grade_lib__grade_spec__init_requirement_specs_0_f_0();
  grade_lib__grade_setup__convert_and_check_requirements_5_p_0((MR_Integer) 0, SolverVarMap0_51, RequirementSpecs_41, &Requirements_9, &BadRequirements_42);
  if (!((BadRequirements_42 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    mercury__io__write_3_p_0((MR_Word) (&grade_lib__grade_setup_scalar_common_1[0]), ((MR_Box) (BadRequirements_42)));
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140grade_lib.grade_setup.setup_requirements\'/2", (MR_String) "some bad requirements");
      return;
    }
  }
  {
    STATE_VARIABLE_SolverInfo_23_23 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_SolverInfo_23_23, 0) = ((MR_Box) (Requirements_9));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_SolverInfo_23_23, 1) = ((MR_Box) (SolverVarPriority_8));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_SolverInfo_23_23, 2) = ((MR_Box) (SolverVarMap0_51));
  }
  GccRegsAvail_10 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), AutoconfResults_5, (MR_Integer) 0))) >> 6)) & (MR_Integer) 1);
  GccGotosAvail_11 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), AutoconfResults_5, (MR_Integer) 0))) >> 5)) & (MR_Integer) 1);
  GccLabelsAvail_12 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), AutoconfResults_5, (MR_Integer) 0))) >> 4)) & (MR_Integer) 1);
  LowTagBitsAvail_13 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), AutoconfResults_5, (MR_Integer) 0))) >> 2)) & (MR_Integer) 3);
  SizeOfDouble_14 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), AutoconfResults_5, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
  MercFile_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), AutoconfResults_5, (MR_Integer) 0))) & (MR_Integer) 1);
  switch (GccRegsAvail_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      GccRegsAvailValue_16 = (MR_Integer) 0;
      break;
    case (MR_Integer) 1:
      GccRegsAvailValue_16 = (MR_Integer) 1;
      break;
  }
  switch (GccGotosAvail_11) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      GccGotosAvailValue_17 = (MR_Integer) 2;
      break;
    case (MR_Integer) 1:
      GccGotosAvailValue_17 = (MR_Integer) 3;
      break;
  }
  switch (GccLabelsAvail_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      GccLabelsAvailValue_18 = (MR_Integer) 4;
      break;
    case (MR_Integer) 1:
      GccLabelsAvailValue_18 = (MR_Integer) 5;
      break;
  }
  switch (LowTagBitsAvail_13) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      LowTagBitsAvailValue_19 = (MR_Integer) 6;
      break;
    case (MR_Integer) 1:
      LowTagBitsAvailValue_19 = (MR_Integer) 7;
      break;
    case (MR_Integer) 2:
      LowTagBitsAvailValue_19 = (MR_Integer) 8;
      break;
  }
  switch (SizeOfDouble_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      SizeOfDoubleValue_20 = (MR_Integer) 9;
      break;
    case (MR_Integer) 1:
      SizeOfDoubleValue_20 = (MR_Integer) 10;
      break;
  }
  switch (MercFile_15) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      MercFileValue_21 = (MR_Integer) 11;
      break;
    case (MR_Integer) 1:
      MercFileValue_21 = (MR_Integer) 12;
      break;
  }
  grade_lib__grade_setup__assign_var_in_map_5_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, GccRegsAvailValue_16, SolverVarMap0_51, &SolverVarMap0_59);
  Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_SolverInfo_23_23, (MR_Integer) 0))));
  Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_SolverInfo_23_23, (MR_Integer) 1))));
  {
    STATE_VARIABLE_SolverInfo_25_25 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_SolverInfo_25_25, 0) = ((MR_Box) (Var_56));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_SolverInfo_25_25, 1) = ((MR_Box) (Var_57));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_SolverInfo_25_25, 2) = ((MR_Box) (SolverVarMap0_59));
  }
  grade_lib__grade_setup__assign_var_in_map_5_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 1, GccGotosAvailValue_17, SolverVarMap0_59, &SolverVarMap0_67);
  Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_SolverInfo_25_25, (MR_Integer) 0))));
  Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_SolverInfo_25_25, (MR_Integer) 1))));
  {
    STATE_VARIABLE_SolverInfo_27_27 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_SolverInfo_27_27, 0) = ((MR_Box) (Var_64));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_SolverInfo_27_27, 1) = ((MR_Box) (Var_65));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_SolverInfo_27_27, 2) = ((MR_Box) (SolverVarMap0_67));
  }
  grade_lib__grade_setup__assign_var_in_map_5_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 2, GccLabelsAvailValue_18, SolverVarMap0_67, &SolverVarMap0_75);
  Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_SolverInfo_27_27, (MR_Integer) 0))));
  Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_SolverInfo_27_27, (MR_Integer) 1))));
  {
    STATE_VARIABLE_SolverInfo_29_29 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_SolverInfo_29_29, 0) = ((MR_Box) (Var_72));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_SolverInfo_29_29, 1) = ((MR_Box) (Var_73));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_SolverInfo_29_29, 2) = ((MR_Box) (SolverVarMap0_75));
  }
  grade_lib__grade_setup__assign_var_in_map_5_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 3, LowTagBitsAvailValue_19, SolverVarMap0_75, &SolverVarMap0_83);
  Var_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_SolverInfo_29_29, (MR_Integer) 0))));
  Var_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_SolverInfo_29_29, (MR_Integer) 1))));
  {
    STATE_VARIABLE_SolverInfo_31_31 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_SolverInfo_31_31, 0) = ((MR_Box) (Var_80));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_SolverInfo_31_31, 1) = ((MR_Box) (Var_81));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_SolverInfo_31_31, 2) = ((MR_Box) (SolverVarMap0_83));
  }
  grade_lib__grade_setup__assign_var_in_map_5_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 4, SizeOfDoubleValue_20, SolverVarMap0_83, &SolverVarMap0_91);
  Var_88 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_SolverInfo_31_31, (MR_Integer) 0))));
  Var_89 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_SolverInfo_31_31, (MR_Integer) 1))));
  {
    STATE_VARIABLE_SolverInfo_33_33 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_SolverInfo_33_33, 0) = ((MR_Box) (Var_88));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_SolverInfo_33_33, 1) = ((MR_Box) (Var_89));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_SolverInfo_33_33, 2) = ((MR_Box) (SolverVarMap0_91));
  }
  grade_lib__grade_setup__assign_var_in_map_5_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 5, MercFileValue_21, SolverVarMap0_91, &SolverVarMap_92);
  Var_96 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_SolverInfo_33_33, (MR_Integer) 0))));
  Var_97 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_SolverInfo_33_33, (MR_Integer) 1))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_SolverInfo_22 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_96));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_97));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (SolverVarMap_92));
  }
}

static MR_Box MR_CALL 
grade_lib__grade_setup__convert_and_check_requirements_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv3_HeadVar__2_2;

  conv3_HeadVar__2_2 = grade_lib__grade_setup__solver_var_value_project_id_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
grade_lib__grade_setup__convert_and_check_requirements_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = grade_lib__grade_setup__solver_var_value_project_id_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
grade_lib__grade_setup__convert_and_check_requirements_5_p_0(
  MR_Integer HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  MR_bool succeeded;

  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word ReqSpec_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ReqSpecs_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word OkRequirementsTail_14;
    MR_Word BadRequirementsTail_15;
    MR_String ReqDesc_16;
    MR_Word IfVar_17;
    MR_Word IfValue_18;
    MR_Word ThenVar_19;
    MR_Word ThenValues_20;
    MR_Word Requirement_21;
    MR_Integer Var_24 = (MR_Integer) ((MR_Unsigned) HeadVar__1_1 + (MR_Unsigned) 1);
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word TypeCtorInfo_17_42;
    MR_Word TypeCtorInfo_18_43;
    MR_Word TypeCtorInfo_15_52;
    MR_Word TypeCtorInfo_16_53;
    MR_Word TypeCtorInfo_17_54;
    MR_Word TypeCtorInfo_18_55;
    MR_Word Var_30;
    MR_Word SolverVar_32;
    MR_Word VarValues_35;
    MR_Word SearchSet_36;
    MR_Word ValueId_37;
    MR_Word Set_38;
    MR_Word Var_39;
    MR_Word SolverVar_44;
    MR_Word VarValues_47;
    MR_Word SearchSet_48;
    MR_Word ValueId_49;
    MR_Word Set_50;
    MR_Word Var_51;
    MR_Box conv0_SolverVar_32;
    MR_Box conv2_SolverVar_44;

    grade_lib__grade_setup__convert_and_check_requirements_5_p_0(Var_24, HeadVar__2_2, ReqSpecs_11, &OkRequirementsTail_14, &BadRequirementsTail_15);
    ReqDesc_16 = ((MR_String) ((MR_hl_field(MR_mktag(0), ReqSpec_10, (MR_Integer) 0))));
    Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ReqSpec_10, (MR_Integer) 1))));
    Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_26, (MR_Integer) 0))));
    Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_26, (MR_Integer) 1))));
    IfVar_17 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_27, (MR_Integer) 0))) >> 7)) & (MR_Integer) 31);
    IfValue_18 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_27, (MR_Integer) 0))) & (MR_Integer) 127);
    ThenVar_19 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_28, (MR_Integer) 0))) & (MR_Integer) 31);
    ThenValues_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_28, (MR_Integer) 1))));
    Var_29 = (MR_Word) (HeadVar__1_1);
    {
      Requirement_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Requirement_21, 0) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), Requirement_21, 1) = ((MR_Box) (ReqDesc_16));
      MR_hl_field(MR_mktag(0), Requirement_21, 2) = (MR_Box) (((((MR_Unsigned) (IfVar_17) << 12)) | (((((MR_Unsigned) (IfValue_18) << 5)) | (MR_Unsigned) (ThenVar_19)))));
      MR_hl_field(MR_mktag(0), Requirement_21, 3) = ((MR_Box) (ThenValues_20));
    }
    {
      Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (IfValue_18));
      MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    succeeded = mercury__map__search_3_p_0((MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0), (MR_Word) (&grade_lib__grade_state__grade_lib__grade_state__type_ctor_info_solver_var_0), HeadVar__2_2, ((MR_Box) (IfVar_17)), &conv0_SolverVar_32);
    if (succeeded)
    {
      SolverVar_32 = ((MR_Word) (conv0_SolverVar_32));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      VarValues_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SolverVar_32, (MR_Integer) 2))));
      TypeCtorInfo_17_42 = (MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0);
      mercury__set__list_to_set_2_p_0(TypeCtorInfo_17_42, Var_30, &SearchSet_36);
      TypeCtorInfo_18_43 = (MR_Word) (&grade_lib__grade_state__grade_lib__grade_state__type_ctor_info_solver_var_value_0);
      Var_39 = (MR_Word) (&grade_lib__grade_setup_scalar_common_4[0]);
      ValueId_37 = mercury__list__map_2_f_0(TypeCtorInfo_18_43, TypeCtorInfo_17_42, Var_39, VarValues_35);
      mercury__set__list_to_set_2_p_0(TypeCtorInfo_17_42, ValueId_37, &Set_38);
      succeeded = mercury__set__subset_2_p_0(TypeCtorInfo_17_42, SearchSet_36, Set_38);
      if (succeeded)
      {
        TypeCtorInfo_15_52 = (MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0);
        TypeCtorInfo_16_53 = (MR_Word) (&grade_lib__grade_state__grade_lib__grade_state__type_ctor_info_solver_var_0);
        succeeded = mercury__map__search_3_p_0(TypeCtorInfo_15_52, TypeCtorInfo_16_53, HeadVar__2_2, ((MR_Box) (ThenVar_19)), &conv2_SolverVar_44);
        if (succeeded)
        {
          SolverVar_44 = ((MR_Word) (conv2_SolverVar_44));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          VarValues_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SolverVar_44, (MR_Integer) 2))));
          TypeCtorInfo_17_54 = (MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0);
          mercury__set__list_to_set_2_p_0(TypeCtorInfo_17_54, ThenValues_20, &SearchSet_48);
          TypeCtorInfo_18_55 = (MR_Word) (&grade_lib__grade_state__grade_lib__grade_state__type_ctor_info_solver_var_value_0);
          Var_51 = (MR_Word) (&grade_lib__grade_setup_scalar_common_4[1]);
          ValueId_49 = mercury__list__map_2_f_0(TypeCtorInfo_18_55, TypeCtorInfo_17_54, Var_51, VarValues_47);
          mercury__set__list_to_set_2_p_0(TypeCtorInfo_17_54, ValueId_49, &Set_50);
          succeeded = mercury__set__subset_2_p_0(TypeCtorInfo_17_54, SearchSet_48, Set_50);
          if (succeeded)
          {
            succeeded = (ThenValues_20 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
            }
          }
        }
      }
    }
    if (succeeded)
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__4_4 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Requirement_21));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (OkRequirementsTail_14));
      }
      *HeadVar__5_5 = BadRequirementsTail_15;
    }
    else
    {
      *HeadVar__4_4 = OkRequirementsTail_14;
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__5_5 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Requirement_21));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (BadRequirementsTail_15));
      }
    }
  }
}

static MR_bool MR_CALL 
grade_lib__grade_setup__init_solver_vars_5_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = grade_lib__grade_setup__IntroducedFrom__pred__init_solver_vars__256__2_2_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
grade_lib__grade_setup__init_solver_vars_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = grade_lib__grade_setup__IntroducedFrom__pred__init_solver_vars__256__1_2_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
grade_lib__grade_setup__init_solver_vars_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_SolverVarMap_0_2,
  MR_Word * STATE_VARIABLE_SolverVarMap_3,
  MR_Word STATE_VARIABLE_SolverVarPriorityCord_0_4,
  MR_Word * STATE_VARIABLE_SolverVarPriorityCord_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_SolverVarPriorityCord_5 = STATE_VARIABLE_SolverVarPriorityCord_0_4;
      *STATE_VARIABLE_SolverVarMap_3 = STATE_VARIABLE_SolverVarMap_0_2;
    }
    else
    {
      MR_Word Spec_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Specs_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word SolverVarId_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Spec_12, (MR_Integer) 0))) & (MR_Integer) 31);
      MR_Word SolverValueIds_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Spec_12, (MR_Integer) 1))));
      MR_Integer NumValues_18;
      MR_Word Values_19;
      MR_Word SolverVar_20;
      MR_Word STATE_VARIABLE_SolverVarPriorityCord_25_25;
      MR_Word Var_28;
      MR_Word STATE_VARIABLE_SolverVarMap_33_33;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_SolverVarMap_0_2;
      MR_Word next_value_of_STATE_VARIABLE_SolverVarPriorityCord_0_4;

      STATE_VARIABLE_SolverVarPriorityCord_25_25 = mercury__cord__snoc_2_f_0((MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0), STATE_VARIABLE_SolverVarPriorityCord_0_4, ((MR_Box) (SolverVarId_16)));
      grade_lib__grade_setup__init_solver_var_values_4_p_0((MR_Integer) 0, &NumValues_18, SolverValueIds_17, &Values_19);
      {
        SolverVar_20 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), SolverVar_20, 0) = ((MR_Box) (NumValues_18));
        MR_hl_field(MR_mktag(0), SolverVar_20, 1) = ((MR_Box) (NumValues_18));
        MR_hl_field(MR_mktag(0), SolverVar_20, 2) = ((MR_Box) (Values_19));
      }
      {
        Var_28 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (&grade_lib__grade_setup_scalar_common_2[1]));
        MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) (grade_lib__grade_setup__init_solver_vars_5_p_0_2));
        MR_hl_field(MR_mktag(0), Var_28, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_28, 3) = ((MR_Box) (NumValues_18));
        MR_hl_field(MR_mktag(0), Var_28, 4) = ((MR_Box) (&grade_lib__grade_setup_scalar_common_3[0]));
      }
      mercury__require__expect_3_p_0(Var_28, (MR_String) "predicate \140grade_lib.grade_setup.init_solver_vars\'/5", (MR_String) "no values for solver var");
      mercury__map__det_insert_4_p_0((MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0), (MR_Word) (&grade_lib__grade_state__grade_lib__grade_state__type_ctor_info_solver_var_0), ((MR_Box) (SolverVarId_16)), ((MR_Box) (SolverVar_20)), STATE_VARIABLE_SolverVarMap_0_2, &STATE_VARIABLE_SolverVarMap_33_33);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Specs_13;
      next_value_of_STATE_VARIABLE_SolverVarMap_0_2 = STATE_VARIABLE_SolverVarMap_33_33;
      next_value_of_STATE_VARIABLE_SolverVarPriorityCord_0_4 = STATE_VARIABLE_SolverVarPriorityCord_25_25;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_SolverVarMap_0_2 = next_value_of_STATE_VARIABLE_SolverVarMap_0_2;
      STATE_VARIABLE_SolverVarPriorityCord_0_4 = next_value_of_STATE_VARIABLE_SolverVarPriorityCord_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
grade_lib__grade_setup__init_solver_var_values_4_p_0(
  MR_Integer CurNumValues_1,
  MR_Integer * HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = CurNumValues_1;
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word ValueId_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ValueIds_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Value_10;
    MR_Word Values_11;
    MR_Integer Var_13;

    {
      Value_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Value_10, 0) = (MR_Box) ((MR_Unsigned) (ValueId_8));
      MR_hl_field(MR_mktag(0), Value_10, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_13 = (MR_Integer) ((MR_Unsigned) CurNumValues_1 + (MR_Unsigned) 1);
    grade_lib__grade_setup__init_solver_var_values_4_p_0(Var_13, HeadVar__2_2, ValueIds_9, &Values_11);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Value_10));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Values_11));
    }
  }
}

void MR_CALL 
grade_lib__grade_setup__assign_var_in_map_5_p_0(
  MR_Word WhyNot_6,
  MR_Word VarId_7,
  MR_Word ValueId_8,
  MR_Word STATE_VARIABLE_SolverMap_0_14,
  MR_Word * STATE_VARIABLE_SolverMap_15)
{
  MR_String VarName_10;
  MR_String ValueName_11;
  MR_Word MaybeError_12;
  MR_Word SolverVar0_19;
  MR_Integer CntAll_20;
  MR_Word Values0_22;
  MR_Word OldPossibles_23;
  MR_Word Values_24;
  MR_Box conv0_SolverVar0_19;

  var_value_names__solver_var_name_2_p_1(&VarName_10, VarId_7);
  var_value_names__solver_var_value_name_2_p_1(&ValueName_11, ValueId_8);
  mercury__map__lookup_3_p_0((MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0), (MR_Word) (&grade_lib__grade_state__grade_lib__grade_state__type_ctor_info_solver_var_0), STATE_VARIABLE_SolverMap_0_14, ((MR_Box) (VarId_7)), &conv0_SolverVar0_19);
  SolverVar0_19 = ((MR_Word) (conv0_SolverVar0_19));
  CntAll_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), SolverVar0_19, (MR_Integer) 0))));
  Values0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SolverVar0_19, (MR_Integer) 2))));
  grade_lib__grade_setup__set_value_to_true_6_p_0(ValueId_8, WhyNot_6, (MR_Word) ((MR_Unsigned) 0U), &OldPossibles_23, Values0_22, &Values_24);
  if ((OldPossibles_23 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_String Msg_25;
    MR_String Var_74;
    MR_String Var_76;
    MR_String Var_77;

    Var_74 = mercury__string__f_43_43_2_f_0(ValueName_11, (MR_String) "\n");
    Var_76 = mercury__string__f_43_43_2_f_0((MR_String) " has no value named ", Var_74);
    Var_77 = mercury__string__f_43_43_2_f_0(VarName_10, Var_76);
    Msg_25 = mercury__string__f_43_43_2_f_0((MR_String) "solver variable ", Var_77);
    {
      MaybeError_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybeError_12, 0) = ((MR_Box) (Msg_25));
    }
    *STATE_VARIABLE_SolverMap_15 = STATE_VARIABLE_SolverMap_0_14;
  }
  else
  {
    MR_Word Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OldPossibles_23, (MR_Integer) 1))));
    MR_Word Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OldPossibles_23, (MR_Integer) 0))));

    if ((Var_62 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((Var_63 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word SolverVar_28;

        MaybeError_12 = (MR_Word) ((MR_Unsigned) 0U);
        {
          SolverVar_28 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), SolverVar_28, 0) = ((MR_Box) (CntAll_20));
          MR_hl_field(MR_mktag(0), SolverVar_28, 1) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), SolverVar_28, 2) = ((MR_Box) (Values_24));
        }
        mercury__map__det_update_4_p_0((MR_Word) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0), (MR_Word) (&grade_lib__grade_state__grade_lib__grade_state__type_ctor_info_solver_var_0), ((MR_Box) (VarId_7)), ((MR_Box) (SolverVar_28)), STATE_VARIABLE_SolverMap_0_14, STATE_VARIABLE_SolverMap_15);
      }
      else
      {
        MR_String Msg_56;
        MR_String Var_71;

        Var_71 = mercury__string__f_43_43_2_f_0(VarName_10, (MR_String) "\n");
        Msg_56 = mercury__string__f_43_43_2_f_0((MR_String) "inconsistent settings for solver variable ", Var_71);
        {
          MaybeError_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeError_12, 0) = ((MR_Box) (Msg_56));
        }
        *STATE_VARIABLE_SolverMap_15 = STATE_VARIABLE_SolverMap_0_14;
      }
    else
    {
      MR_String Msg_59;
      MR_String Var_65;
      MR_String Var_67;
      MR_String Var_68;

      Var_65 = mercury__string__f_43_43_2_f_0(ValueName_11, (MR_String) "\n");
      Var_67 = mercury__string__f_43_43_2_f_0((MR_String) " has more than one copy of value ", Var_65);
      Var_68 = mercury__string__f_43_43_2_f_0(VarName_10, Var_67);
      Msg_59 = mercury__string__f_43_43_2_f_0((MR_String) "solver var ", Var_68);
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140grade_lib.grade_setup.set_solver_var_in_map\'/9", Msg_59);
        return;
      }
    }
  }
  if (!((MaybeError_12 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_String Msg_13 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeError_12, (MR_Integer) 0))));

    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140grade_lib.grade_setup.assign_var_in_map\'/5", Msg_13);
      return;
    }
  }
}

static void MR_CALL 
grade_lib__grade_setup__set_value_to_true_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_OldPossibles_0_3,
  MR_Word * STATE_VARIABLE_OldPossibles_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6)
{
  MR_bool succeeded;

  if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_OldPossibles_4 = STATE_VARIABLE_OldPossibles_0_3;
  }
  else
  {
    MR_Word HeadValue0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
    MR_Word TailValues0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));
    MR_Word HeadValue_17;
    MR_Word TailValues_18;
    MR_Word Id_19 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadValue0_15, (MR_Integer) 0))) & (MR_Integer) 127);
    MR_Word Possible0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadValue0_15, (MR_Integer) 1))));
    MR_Word STATE_VARIABLE_OldPossibles_24_24;

    succeeded = (HeadVar__1_1 == Id_19);
    if (succeeded)
    {
      {
        STATE_VARIABLE_OldPossibles_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_OldPossibles_24_24, 0) = ((MR_Box) (Possible0_20));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_OldPossibles_24_24, 1) = ((MR_Box) (STATE_VARIABLE_OldPossibles_0_3));
      }
      {
        HeadValue_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), HeadValue_17, 0) = (MR_Box) ((MR_Unsigned) (HeadVar__1_1));
        MR_hl_field(MR_mktag(0), HeadValue_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    else
    {
      MR_Word Possible_26;

      {
        Possible_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Possible_26, 0) = ((MR_Box) (HeadVar__2_2));
      }
      {
        HeadValue_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), HeadValue_17, 0) = (MR_Box) ((MR_Unsigned) (Id_19));
        MR_hl_field(MR_mktag(0), HeadValue_17, 1) = ((MR_Box) (Possible_26));
      }
      STATE_VARIABLE_OldPossibles_24_24 = STATE_VARIABLE_OldPossibles_0_3;
    }
    grade_lib__grade_setup__set_value_to_true_6_p_0(HeadVar__1_1, HeadVar__2_2, STATE_VARIABLE_OldPossibles_24_24, STATE_VARIABLE_OldPossibles_4, TailValues0_16, &TailValues_18);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__6_6 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadValue_17));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailValues_18));
    }
  }
}

static MR_bool MR_CALL 
grade_lib__grade_setup____Unify____autoconf_gcc_gotos_avail_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = grade_lib__grade_setup____Unify____autoconf_gcc_gotos_avail_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
grade_lib__grade_setup____Compare____autoconf_gcc_gotos_avail_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  grade_lib__grade_setup____Compare____autoconf_gcc_gotos_avail_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
grade_lib__grade_setup____Unify____autoconf_gcc_labels_avail_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = grade_lib__grade_setup____Unify____autoconf_gcc_labels_avail_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
grade_lib__grade_setup____Compare____autoconf_gcc_labels_avail_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  grade_lib__grade_setup____Compare____autoconf_gcc_labels_avail_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
grade_lib__grade_setup____Unify____autoconf_gcc_regs_avail_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = grade_lib__grade_setup____Unify____autoconf_gcc_regs_avail_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
grade_lib__grade_setup____Compare____autoconf_gcc_regs_avail_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  grade_lib__grade_setup____Compare____autoconf_gcc_regs_avail_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
grade_lib__grade_setup____Unify____autoconf_low_tag_bits_avail_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = grade_lib__grade_setup____Unify____autoconf_low_tag_bits_avail_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
grade_lib__grade_setup____Compare____autoconf_low_tag_bits_avail_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  grade_lib__grade_setup____Compare____autoconf_low_tag_bits_avail_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
grade_lib__grade_setup____Unify____autoconf_merc_file_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = grade_lib__grade_setup____Unify____autoconf_merc_file_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
grade_lib__grade_setup____Compare____autoconf_merc_file_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  grade_lib__grade_setup____Compare____autoconf_merc_file_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
grade_lib__grade_setup____Unify____autoconf_results_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = grade_lib__grade_setup____Unify____autoconf_results_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
grade_lib__grade_setup____Compare____autoconf_results_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  grade_lib__grade_setup____Compare____autoconf_results_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
grade_lib__grade_setup____Unify____autoconf_size_of_double_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = grade_lib__grade_setup____Unify____autoconf_size_of_double_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
grade_lib__grade_setup____Compare____autoconf_size_of_double_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  grade_lib__grade_setup____Compare____autoconf_size_of_double_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
grade_lib__grade_setup____Unify____solver_var_set_to_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = grade_lib__grade_setup____Unify____solver_var_set_to_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
grade_lib__grade_setup____Compare____solver_var_set_to_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  grade_lib__grade_setup____Compare____solver_var_set_to_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__grade_lib__grade_setup__init(void)
{
}

void mercury__grade_lib__grade_setup__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&grade_lib__grade_setup__grade_lib__grade_setup__type_ctor_info_autoconf_gcc_gotos_avail_0);
	MR_register_type_ctor_info(&grade_lib__grade_setup__grade_lib__grade_setup__type_ctor_info_autoconf_gcc_labels_avail_0);
	MR_register_type_ctor_info(&grade_lib__grade_setup__grade_lib__grade_setup__type_ctor_info_autoconf_gcc_regs_avail_0);
	MR_register_type_ctor_info(&grade_lib__grade_setup__grade_lib__grade_setup__type_ctor_info_autoconf_low_tag_bits_avail_0);
	MR_register_type_ctor_info(&grade_lib__grade_setup__grade_lib__grade_setup__type_ctor_info_autoconf_merc_file_0);
	MR_register_type_ctor_info(&grade_lib__grade_setup__grade_lib__grade_setup__type_ctor_info_autoconf_results_0);
	MR_register_type_ctor_info(&grade_lib__grade_setup__grade_lib__grade_setup__type_ctor_info_autoconf_size_of_double_0);
	MR_register_type_ctor_info(&grade_lib__grade_setup__grade_lib__grade_setup__type_ctor_info_solver_var_set_to_0);
}

void mercury__grade_lib__grade_setup__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__grade_lib__grade_setup__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module grade_lib.grade_setup.
