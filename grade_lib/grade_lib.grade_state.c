/*
** Automatically generated from `grade_state.m'
** by the Mercury compiler,
** version rotd-2026-03-11
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


// :- module grade_lib.grade_state.
// :- implementation.

/*
INIT mercury__grade_lib__grade_state__init
ENDINIT
*/

#include "grade_lib.grade_state.mih"


#include "assoc_list.mih"
#include "builtin.mih"
#include "enum.mih"
#include "grade_lib.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "term.mih"
#include "term_context.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "grade_lib.grade_spec.mih"




static const MR_DuFunctorDesc grade_lib__grade_state__grade_lib__grade_state__du_functor_desc_not_possible_why_0_0;

static const MR_DuFunctorDesc grade_lib__grade_state__grade_lib__grade_state__du_functor_desc_not_possible_why_0_1;

static const MR_PseudoTypeInfo grade_lib__grade_state__grade_lib__grade_state__field_types_not_possible_why_0_2[1];

static const MR_DuFunctorDesc grade_lib__grade_state__grade_lib__grade_state__du_functor_desc_not_possible_why_0_2;

static const MR_DuFunctorDesc grade_lib__grade_state__grade_lib__grade_state__du_functor_desc_not_possible_why_0_3;

static const MR_DuFunctorDescPtr grade_lib__grade_state__grade_lib__grade_state__du_stag_ordered_not_possible_why_0_0[3];

static const MR_DuFunctorDescPtr grade_lib__grade_state__grade_lib__grade_state__du_stag_ordered_not_possible_why_0_1[1];

static const MR_DuPtagLayout grade_lib__grade_state__grade_lib__grade_state__du_ptag_ordered_not_possible_why_0[2];

static const MR_DuFunctorDescPtr grade_lib__grade_state__grade_lib__grade_state__du_name_ordered_not_possible_why_0[4];

static const MR_Integer grade_lib__grade_state__grade_lib__grade_state__functor_number_map_not_possible_why_0[4];

static const MR_EnumFunctorDesc grade_lib__grade_state__grade_lib__grade_state__enum_functor_desc_req_dir_0_0;

static const MR_EnumFunctorDesc grade_lib__grade_state__grade_lib__grade_state__enum_functor_desc_req_dir_0_1;

static const MR_EnumFunctorDescPtr grade_lib__grade_state__grade_lib__grade_state__enum_ordinal_ordered_req_dir_0[2];

static const MR_EnumFunctorDescPtr grade_lib__grade_state__grade_lib__grade_state__enum_name_ordered_req_dir_0[2];

static const MR_Integer grade_lib__grade_state__grade_lib__grade_state__functor_number_map_req_dir_0[2];

static const MR_FA_TypeInfo_Struct1 grade_lib__grade_state__list__ti_list_1grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0;

static const MR_PseudoTypeInfo grade_lib__grade_state__grade_lib__grade_state__field_types_requirement_0_0[6];

static const MR_ConstString grade_lib__grade_state__grade_lib__grade_state__field_names_requirement_0_0[6];

static const MR_DuArgLocn grade_lib__grade_state__grade_lib__grade_state__field_locns_requirement_0_0[6];

static const MR_DuFunctorDesc grade_lib__grade_state__grade_lib__grade_state__du_functor_desc_requirement_0_0;

static const MR_DuFunctorDescPtr grade_lib__grade_state__grade_lib__grade_state__du_stag_ordered_requirement_0_0[1];

static const MR_DuPtagLayout grade_lib__grade_state__grade_lib__grade_state__du_ptag_ordered_requirement_0[1];

static const MR_DuFunctorDescPtr grade_lib__grade_state__grade_lib__grade_state__du_name_ordered_requirement_0[1];

static const MR_Integer grade_lib__grade_state__grade_lib__grade_state__functor_number_map_requirement_0[1];

static const MR_PseudoTypeInfo grade_lib__grade_state__grade_lib__grade_state__field_types_requirement_application_0_0[3];

static const MR_ConstString grade_lib__grade_state__grade_lib__grade_state__field_names_requirement_application_0_0[3];

static const MR_DuArgLocn grade_lib__grade_state__grade_lib__grade_state__field_locns_requirement_application_0_0[3];

static const MR_DuFunctorDesc grade_lib__grade_state__grade_lib__grade_state__du_functor_desc_requirement_application_0_0;

static const MR_DuFunctorDescPtr grade_lib__grade_state__grade_lib__grade_state__du_stag_ordered_requirement_application_0_0[1];

static const MR_DuPtagLayout grade_lib__grade_state__grade_lib__grade_state__du_ptag_ordered_requirement_application_0[1];

static const MR_DuFunctorDescPtr grade_lib__grade_state__grade_lib__grade_state__du_name_ordered_requirement_application_0[1];

static const MR_Integer grade_lib__grade_state__grade_lib__grade_state__functor_number_map_requirement_application_0[1];

static const MR_Integer grade_lib__grade_state__grade_lib__grade_state__functor_number_map_requirement_id_0[1];

static const MR_NotagFunctorDesc grade_lib__grade_state__grade_lib__grade_state__notag_functor_desc_requirement_id_0;

static const MR_FA_TypeInfo_Struct1 grade_lib__grade_state__list__ti_list_1grade_lib__grade_state__type_ctor_info_requirement_0;

static const MR_FA_TypeInfo_Struct1 grade_lib__grade_state__list__ti_list_1grade_lib__grade_spec__type_ctor_info_solver_var_id_0;

static const MR_FA_TypeInfo_Struct2 grade_lib__grade_state__tree234__ti_tree234_2grade_lib__grade_spec__type_ctor_info_solver_var_id_0grade_lib__grade_state__type_ctor_info_solver_var_0;

static const MR_PseudoTypeInfo grade_lib__grade_state__grade_lib__grade_state__field_types_solver_info_0_0[3];

static const MR_ConstString grade_lib__grade_state__grade_lib__grade_state__field_names_solver_info_0_0[3];

static const MR_DuFunctorDesc grade_lib__grade_state__grade_lib__grade_state__du_functor_desc_solver_info_0_0;

static const MR_DuFunctorDescPtr grade_lib__grade_state__grade_lib__grade_state__du_stag_ordered_solver_info_0_0[1];

static const MR_DuPtagLayout grade_lib__grade_state__grade_lib__grade_state__du_ptag_ordered_solver_info_0[1];

static const MR_DuFunctorDescPtr grade_lib__grade_state__grade_lib__grade_state__du_name_ordered_solver_info_0[1];

static const MR_Integer grade_lib__grade_state__grade_lib__grade_state__functor_number_map_solver_info_0[1];

static const MR_FA_TypeInfo_Struct1 grade_lib__grade_state__list__ti_list_1grade_lib__grade_state__type_ctor_info_solver_var_value_0;

static const MR_PseudoTypeInfo grade_lib__grade_state__grade_lib__grade_state__field_types_solver_var_0_0[3];

static const MR_ConstString grade_lib__grade_state__grade_lib__grade_state__field_names_solver_var_0_0[3];

static const MR_DuFunctorDesc grade_lib__grade_state__grade_lib__grade_state__du_functor_desc_solver_var_0_0;

static const MR_DuFunctorDescPtr grade_lib__grade_state__grade_lib__grade_state__du_stag_ordered_solver_var_0_0[1];

static const MR_DuPtagLayout grade_lib__grade_state__grade_lib__grade_state__du_ptag_ordered_solver_var_0[1];

static const MR_DuFunctorDescPtr grade_lib__grade_state__grade_lib__grade_state__du_name_ordered_solver_var_0[1];

static const MR_Integer grade_lib__grade_state__grade_lib__grade_state__functor_number_map_solver_var_0[1];

static const MR_PseudoTypeInfo grade_lib__grade_state__grade_lib__grade_state__field_types_solver_var_value_0_0[2];

static const MR_ConstString grade_lib__grade_state__grade_lib__grade_state__field_names_solver_var_value_0_0[2];

static const MR_DuArgLocn grade_lib__grade_state__grade_lib__grade_state__field_locns_solver_var_value_0_0[2];

static const MR_DuFunctorDesc grade_lib__grade_state__grade_lib__grade_state__du_functor_desc_solver_var_value_0_0;

static const MR_DuFunctorDescPtr grade_lib__grade_state__grade_lib__grade_state__du_stag_ordered_solver_var_value_0_0[1];

static const MR_DuPtagLayout grade_lib__grade_state__grade_lib__grade_state__du_ptag_ordered_solver_var_value_0[1];

static const MR_DuFunctorDescPtr grade_lib__grade_state__grade_lib__grade_state__du_name_ordered_solver_var_value_0[1];

static const MR_Integer grade_lib__grade_state__grade_lib__grade_state__functor_number_map_solver_var_value_0[1];

static const MR_DuFunctorDesc grade_lib__grade_state__grade_lib__grade_state__du_functor_desc_solver_var_value_possible_0_0;

static const MR_PseudoTypeInfo grade_lib__grade_state__grade_lib__grade_state__field_types_solver_var_value_possible_0_1[1];

static const MR_ConstString grade_lib__grade_state__grade_lib__grade_state__field_names_solver_var_value_possible_0_1[1];

static const MR_DuFunctorDesc grade_lib__grade_state__grade_lib__grade_state__du_functor_desc_solver_var_value_possible_0_1;

static const MR_DuFunctorDescPtr grade_lib__grade_state__grade_lib__grade_state__du_stag_ordered_solver_var_value_possible_0_0[1];

static const MR_DuFunctorDescPtr grade_lib__grade_state__grade_lib__grade_state__du_stag_ordered_solver_var_value_possible_0_1[1];

static const MR_DuPtagLayout grade_lib__grade_state__grade_lib__grade_state__du_ptag_ordered_solver_var_value_possible_0[2];

static const MR_DuFunctorDescPtr grade_lib__grade_state__grade_lib__grade_state__du_name_ordered_solver_var_value_possible_0[2];

static const MR_Integer grade_lib__grade_state__grade_lib__grade_state__functor_number_map_solver_var_value_possible_0[2];

static MR_bool MR_CALL 
grade_lib__grade_state____Unify____not_possible_why_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
grade_lib__grade_state____Compare____not_possible_why_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
grade_lib__grade_state____Unify____req_dir_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
grade_lib__grade_state____Compare____req_dir_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
grade_lib__grade_state____Unify____requirement_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
grade_lib__grade_state____Compare____requirement_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
grade_lib__grade_state____Unify____requirement_application_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
grade_lib__grade_state____Compare____requirement_application_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
grade_lib__grade_state____Unify____requirement_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
grade_lib__grade_state____Compare____requirement_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
grade_lib__grade_state____Unify____solver_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
grade_lib__grade_state____Compare____solver_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
grade_lib__grade_state____Unify____solver_var_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
grade_lib__grade_state____Compare____solver_var_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
grade_lib__grade_state____Unify____solver_var_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
grade_lib__grade_state____Compare____solver_var_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
grade_lib__grade_state____Unify____solver_var_value_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
grade_lib__grade_state____Compare____solver_var_value_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
grade_lib__grade_state____Unify____solver_var_value_possible_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
grade_lib__grade_state____Compare____solver_var_value_possible_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box grade_lib__grade_state_scalar_common_1[4][2];

static /* final */ const MR_Box grade_lib__grade_state_scalar_common_2[1][3];




static /* final */ const MR_Box grade_lib__grade_state_scalar_common_1[4][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&grade_lib__grade_state__grade_lib__grade_state__type_ctor_info_requirement_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&grade_lib__grade_state__grade_lib__grade_state__type_ctor_info_solver_var_value_0))
  },
};

static /* final */ const MR_Box grade_lib__grade_state_scalar_common_2[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0)),
    ((MR_Box) (&grade_lib__grade_state__grade_lib__grade_state__type_ctor_info_solver_var_0))
  },
};





static const MR_DuFunctorDesc grade_lib__grade_state__grade_lib__grade_state__du_functor_desc_not_possible_why_0_0 = {
  (MR_String) "npw_config",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc grade_lib__grade_state__grade_lib__grade_state__du_functor_desc_not_possible_why_0_1 = {
  (MR_String) "npw_user",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo grade_lib__grade_state__grade_lib__grade_state__field_types_not_possible_why_0_2[1] = { (MR_PseudoTypeInfo) (&grade_lib__grade_state__grade_lib__grade_state__type_ctor_info_requirement_application_0) };

static const MR_DuFunctorDesc grade_lib__grade_state__grade_lib__grade_state__du_functor_desc_not_possible_why_0_2 = {
  (MR_String) "npw_requirement",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE_DIRECT_ARG,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(2),
  grade_lib__grade_state__grade_lib__grade_state__field_types_not_possible_why_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc grade_lib__grade_state__grade_lib__grade_state__du_functor_desc_not_possible_why_0_3 = {
  (MR_String) "npw_labeling",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 2,
  INT32_C(3),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr grade_lib__grade_state__grade_lib__grade_state__du_stag_ordered_not_possible_why_0_0[3] = {
  &grade_lib__grade_state__grade_lib__grade_state__du_functor_desc_not_possible_why_0_0,
  &grade_lib__grade_state__grade_lib__grade_state__du_functor_desc_not_possible_why_0_1,
  &grade_lib__grade_state__grade_lib__grade_state__du_functor_desc_not_possible_why_0_3
};

static const MR_DuFunctorDescPtr grade_lib__grade_state__grade_lib__grade_state__du_stag_ordered_not_possible_why_0_1[1] = { &grade_lib__grade_state__grade_lib__grade_state__du_functor_desc_not_possible_why_0_2 };

static const MR_DuPtagLayout grade_lib__grade_state__grade_lib__grade_state__du_ptag_ordered_not_possible_why_0[2] = {
  {
    UINT32_C(3),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    grade_lib__grade_state__grade_lib__grade_state__du_stag_ordered_not_possible_why_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE_DIRECT_ARG,
    grade_lib__grade_state__grade_lib__grade_state__du_stag_ordered_not_possible_why_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr grade_lib__grade_state__grade_lib__grade_state__du_name_ordered_not_possible_why_0[4] = {
  &grade_lib__grade_state__grade_lib__grade_state__du_functor_desc_not_possible_why_0_0,
  &grade_lib__grade_state__grade_lib__grade_state__du_functor_desc_not_possible_why_0_3,
  &grade_lib__grade_state__grade_lib__grade_state__du_functor_desc_not_possible_why_0_2,
  &grade_lib__grade_state__grade_lib__grade_state__du_functor_desc_not_possible_why_0_1
};

static const MR_Integer grade_lib__grade_state__grade_lib__grade_state__functor_number_map_not_possible_why_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct grade_lib__grade_state__grade_lib__grade_state__type_ctor_info_not_possible_why_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (grade_lib__grade_state____Unify____not_possible_why_0_0_10001)),
  ((MR_Box) (grade_lib__grade_state____Compare____not_possible_why_0_0_10001)),
  (MR_String) "grade_lib.grade_state",
  (MR_String) "not_possible_why",
  { grade_lib__grade_state__grade_lib__grade_state__du_name_ordered_not_possible_why_0 },
  { grade_lib__grade_state__grade_lib__grade_state__du_ptag_ordered_not_possible_why_0 },
  (MR_Integer) 4,
  UINT16_C(12),
  grade_lib__grade_state__grade_lib__grade_state__functor_number_map_not_possible_why_0,

};

static const MR_EnumFunctorDesc grade_lib__grade_state__grade_lib__grade_state__enum_functor_desc_req_dir_0_0 = {
  (MR_String) "narrow_then_values",
  INT32_C(0)
};

static const MR_EnumFunctorDesc grade_lib__grade_state__grade_lib__grade_state__enum_functor_desc_req_dir_0_1 = {
  (MR_String) "delete_if_value",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr grade_lib__grade_state__grade_lib__grade_state__enum_ordinal_ordered_req_dir_0[2] = {
  &grade_lib__grade_state__grade_lib__grade_state__enum_functor_desc_req_dir_0_0,
  &grade_lib__grade_state__grade_lib__grade_state__enum_functor_desc_req_dir_0_1
};

static const MR_EnumFunctorDescPtr grade_lib__grade_state__grade_lib__grade_state__enum_name_ordered_req_dir_0[2] = {
  &grade_lib__grade_state__grade_lib__grade_state__enum_functor_desc_req_dir_0_1,
  &grade_lib__grade_state__grade_lib__grade_state__enum_functor_desc_req_dir_0_0
};

static const MR_Integer grade_lib__grade_state__grade_lib__grade_state__functor_number_map_req_dir_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct grade_lib__grade_state__grade_lib__grade_state__type_ctor_info_req_dir_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (grade_lib__grade_state____Unify____req_dir_0_0_10001)),
  ((MR_Box) (grade_lib__grade_state____Compare____req_dir_0_0_10001)),
  (MR_String) "grade_lib.grade_state",
  (MR_String) "req_dir",
  { grade_lib__grade_state__grade_lib__grade_state__enum_name_ordered_req_dir_0 },
  { grade_lib__grade_state__grade_lib__grade_state__enum_ordinal_ordered_req_dir_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  grade_lib__grade_state__grade_lib__grade_state__functor_number_map_req_dir_0,

};

static const MR_FA_TypeInfo_Struct1 grade_lib__grade_state__list__ti_list_1grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0) }
};

static const MR_PseudoTypeInfo grade_lib__grade_state__grade_lib__grade_state__field_types_requirement_0_0[6] = {
  (MR_PseudoTypeInfo) (&grade_lib__grade_state__grade_lib__grade_state__type_ctor_info_requirement_id_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0),
  (MR_PseudoTypeInfo) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0),
  (MR_PseudoTypeInfo) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0),
  (MR_PseudoTypeInfo) (&grade_lib__grade_state__list__ti_list_1grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0)
};

static const MR_ConstString grade_lib__grade_state__grade_lib__grade_state__field_names_requirement_0_0[6] = {
  (MR_String) "req_id",
  (MR_String) "req_desc",
  (MR_String) "req_if_solver_var",
  (MR_String) "req_if_value",
  (MR_String) "req_then_solver_var",
  (MR_String) "req_then_values"
};

static const MR_DuArgLocn grade_lib__grade_state__grade_lib__grade_state__field_locns_requirement_0_0[6] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 12,
    (MR_Integer) 5
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 5,
    (MR_Integer) 7
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 5
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc grade_lib__grade_state__grade_lib__grade_state__du_functor_desc_requirement_0_0 = {
  (MR_String) "requirement",
  INT16_C(6),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  grade_lib__grade_state__grade_lib__grade_state__field_types_requirement_0_0,
  grade_lib__grade_state__grade_lib__grade_state__field_names_requirement_0_0,
  grade_lib__grade_state__grade_lib__grade_state__field_locns_requirement_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr grade_lib__grade_state__grade_lib__grade_state__du_stag_ordered_requirement_0_0[1] = { &grade_lib__grade_state__grade_lib__grade_state__du_functor_desc_requirement_0_0 };

static const MR_DuPtagLayout grade_lib__grade_state__grade_lib__grade_state__du_ptag_ordered_requirement_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    grade_lib__grade_state__grade_lib__grade_state__du_stag_ordered_requirement_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr grade_lib__grade_state__grade_lib__grade_state__du_name_ordered_requirement_0[1] = { &grade_lib__grade_state__grade_lib__grade_state__du_functor_desc_requirement_0_0 };

static const MR_Integer grade_lib__grade_state__grade_lib__grade_state__functor_number_map_requirement_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct grade_lib__grade_state__grade_lib__grade_state__type_ctor_info_requirement_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (grade_lib__grade_state____Unify____requirement_0_0_10001)),
  ((MR_Box) (grade_lib__grade_state____Compare____requirement_0_0_10001)),
  (MR_String) "grade_lib.grade_state",
  (MR_String) "requirement",
  { grade_lib__grade_state__grade_lib__grade_state__du_name_ordered_requirement_0 },
  { grade_lib__grade_state__grade_lib__grade_state__du_ptag_ordered_requirement_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  grade_lib__grade_state__grade_lib__grade_state__functor_number_map_requirement_0,

};

static const MR_PseudoTypeInfo grade_lib__grade_state__grade_lib__grade_state__field_types_requirement_application_0_0[3] = {
  (MR_PseudoTypeInfo) (&grade_lib__grade_state__grade_lib__grade_state__type_ctor_info_requirement_id_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&grade_lib__grade_state__grade_lib__grade_state__type_ctor_info_req_dir_0)
};

static const MR_ConstString grade_lib__grade_state__grade_lib__grade_state__field_names_requirement_application_0_0[3] = {
  (MR_String) "ra_req_id",
  (MR_String) "ra_req_desc",
  (MR_String) "ra_dir"
};

static const MR_DuArgLocn grade_lib__grade_state__grade_lib__grade_state__field_locns_requirement_application_0_0[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc grade_lib__grade_state__grade_lib__grade_state__du_functor_desc_requirement_application_0_0 = {
  (MR_String) "requirement_application",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  grade_lib__grade_state__grade_lib__grade_state__field_types_requirement_application_0_0,
  grade_lib__grade_state__grade_lib__grade_state__field_names_requirement_application_0_0,
  grade_lib__grade_state__grade_lib__grade_state__field_locns_requirement_application_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr grade_lib__grade_state__grade_lib__grade_state__du_stag_ordered_requirement_application_0_0[1] = { &grade_lib__grade_state__grade_lib__grade_state__du_functor_desc_requirement_application_0_0 };

static const MR_DuPtagLayout grade_lib__grade_state__grade_lib__grade_state__du_ptag_ordered_requirement_application_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    grade_lib__grade_state__grade_lib__grade_state__du_stag_ordered_requirement_application_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr grade_lib__grade_state__grade_lib__grade_state__du_name_ordered_requirement_application_0[1] = { &grade_lib__grade_state__grade_lib__grade_state__du_functor_desc_requirement_application_0_0 };

static const MR_Integer grade_lib__grade_state__grade_lib__grade_state__functor_number_map_requirement_application_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct grade_lib__grade_state__grade_lib__grade_state__type_ctor_info_requirement_application_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (grade_lib__grade_state____Unify____requirement_application_0_0_10001)),
  ((MR_Box) (grade_lib__grade_state____Compare____requirement_application_0_0_10001)),
  (MR_String) "grade_lib.grade_state",
  (MR_String) "requirement_application",
  { grade_lib__grade_state__grade_lib__grade_state__du_name_ordered_requirement_application_0 },
  { grade_lib__grade_state__grade_lib__grade_state__du_ptag_ordered_requirement_application_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  grade_lib__grade_state__grade_lib__grade_state__functor_number_map_requirement_application_0,

};

static const MR_Integer grade_lib__grade_state__grade_lib__grade_state__functor_number_map_requirement_id_0[1] = { (MR_Integer) 0 };

static const MR_NotagFunctorDesc grade_lib__grade_state__grade_lib__grade_state__notag_functor_desc_requirement_id_0 = {
  (MR_String) "requirement_id",
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct grade_lib__grade_state__grade_lib__grade_state__type_ctor_info_requirement_id_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (grade_lib__grade_state____Unify____requirement_id_0_0_10001)),
  ((MR_Box) (grade_lib__grade_state____Compare____requirement_id_0_0_10001)),
  (MR_String) "grade_lib.grade_state",
  (MR_String) "requirement_id",
  { &grade_lib__grade_state__grade_lib__grade_state__notag_functor_desc_requirement_id_0 },
  { &grade_lib__grade_state__grade_lib__grade_state__notag_functor_desc_requirement_id_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  grade_lib__grade_state__grade_lib__grade_state__functor_number_map_requirement_id_0,

};

static const MR_FA_TypeInfo_Struct1 grade_lib__grade_state__list__ti_list_1grade_lib__grade_state__type_ctor_info_requirement_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&grade_lib__grade_state__grade_lib__grade_state__type_ctor_info_requirement_0) }
};

static const MR_FA_TypeInfo_Struct1 grade_lib__grade_state__list__ti_list_1grade_lib__grade_spec__type_ctor_info_solver_var_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0) }
};

static const MR_FA_TypeInfo_Struct2 grade_lib__grade_state__tree234__ti_tree234_2grade_lib__grade_spec__type_ctor_info_solver_var_id_0grade_lib__grade_state__type_ctor_info_solver_var_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_id_0),
    (MR_TypeInfo) (&grade_lib__grade_state__grade_lib__grade_state__type_ctor_info_solver_var_0)
  }
};

static const MR_PseudoTypeInfo grade_lib__grade_state__grade_lib__grade_state__field_types_solver_info_0_0[3] = {
  (MR_PseudoTypeInfo) (&grade_lib__grade_state__list__ti_list_1grade_lib__grade_state__type_ctor_info_requirement_0),
  (MR_PseudoTypeInfo) (&grade_lib__grade_state__list__ti_list_1grade_lib__grade_spec__type_ctor_info_solver_var_id_0),
  (MR_PseudoTypeInfo) (&grade_lib__grade_state__tree234__ti_tree234_2grade_lib__grade_spec__type_ctor_info_solver_var_id_0grade_lib__grade_state__type_ctor_info_solver_var_0)
};

static const MR_ConstString grade_lib__grade_state__grade_lib__grade_state__field_names_solver_info_0_0[3] = {
  (MR_String) "si_reqs",
  (MR_String) "si_vars_priority",
  (MR_String) "si_solver_var_map"
};

static const MR_DuFunctorDesc grade_lib__grade_state__grade_lib__grade_state__du_functor_desc_solver_info_0_0 = {
  (MR_String) "solver_info",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  grade_lib__grade_state__grade_lib__grade_state__field_types_solver_info_0_0,
  grade_lib__grade_state__grade_lib__grade_state__field_names_solver_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr grade_lib__grade_state__grade_lib__grade_state__du_stag_ordered_solver_info_0_0[1] = { &grade_lib__grade_state__grade_lib__grade_state__du_functor_desc_solver_info_0_0 };

static const MR_DuPtagLayout grade_lib__grade_state__grade_lib__grade_state__du_ptag_ordered_solver_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    grade_lib__grade_state__grade_lib__grade_state__du_stag_ordered_solver_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr grade_lib__grade_state__grade_lib__grade_state__du_name_ordered_solver_info_0[1] = { &grade_lib__grade_state__grade_lib__grade_state__du_functor_desc_solver_info_0_0 };

static const MR_Integer grade_lib__grade_state__grade_lib__grade_state__functor_number_map_solver_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct grade_lib__grade_state__grade_lib__grade_state__type_ctor_info_solver_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (grade_lib__grade_state____Unify____solver_info_0_0_10001)),
  ((MR_Box) (grade_lib__grade_state____Compare____solver_info_0_0_10001)),
  (MR_String) "grade_lib.grade_state",
  (MR_String) "solver_info",
  { grade_lib__grade_state__grade_lib__grade_state__du_name_ordered_solver_info_0 },
  { grade_lib__grade_state__grade_lib__grade_state__du_ptag_ordered_solver_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  grade_lib__grade_state__grade_lib__grade_state__functor_number_map_solver_info_0,

};

static const MR_FA_TypeInfo_Struct1 grade_lib__grade_state__list__ti_list_1grade_lib__grade_state__type_ctor_info_solver_var_value_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&grade_lib__grade_state__grade_lib__grade_state__type_ctor_info_solver_var_value_0) }
};

static const MR_PseudoTypeInfo grade_lib__grade_state__grade_lib__grade_state__field_types_solver_var_0_0[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&grade_lib__grade_state__list__ti_list_1grade_lib__grade_state__type_ctor_info_solver_var_value_0)
};

static const MR_ConstString grade_lib__grade_state__grade_lib__grade_state__field_names_solver_var_0_0[3] = {
  (MR_String) "sv_cnt_all",
  (MR_String) "sv_cnt_possible",
  (MR_String) "sv_values"
};

static const MR_DuFunctorDesc grade_lib__grade_state__grade_lib__grade_state__du_functor_desc_solver_var_0_0 = {
  (MR_String) "solver_var",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  grade_lib__grade_state__grade_lib__grade_state__field_types_solver_var_0_0,
  grade_lib__grade_state__grade_lib__grade_state__field_names_solver_var_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr grade_lib__grade_state__grade_lib__grade_state__du_stag_ordered_solver_var_0_0[1] = { &grade_lib__grade_state__grade_lib__grade_state__du_functor_desc_solver_var_0_0 };

static const MR_DuPtagLayout grade_lib__grade_state__grade_lib__grade_state__du_ptag_ordered_solver_var_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    grade_lib__grade_state__grade_lib__grade_state__du_stag_ordered_solver_var_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr grade_lib__grade_state__grade_lib__grade_state__du_name_ordered_solver_var_0[1] = { &grade_lib__grade_state__grade_lib__grade_state__du_functor_desc_solver_var_0_0 };

static const MR_Integer grade_lib__grade_state__grade_lib__grade_state__functor_number_map_solver_var_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct grade_lib__grade_state__grade_lib__grade_state__type_ctor_info_solver_var_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (grade_lib__grade_state____Unify____solver_var_0_0_10001)),
  ((MR_Box) (grade_lib__grade_state____Compare____solver_var_0_0_10001)),
  (MR_String) "grade_lib.grade_state",
  (MR_String) "solver_var",
  { grade_lib__grade_state__grade_lib__grade_state__du_name_ordered_solver_var_0 },
  { grade_lib__grade_state__grade_lib__grade_state__du_ptag_ordered_solver_var_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  grade_lib__grade_state__grade_lib__grade_state__functor_number_map_solver_var_0,

};

const MR_TypeCtorInfo_Struct grade_lib__grade_state__grade_lib__grade_state__type_ctor_info_solver_var_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (grade_lib__grade_state____Unify____solver_var_map_0_0_10001)),
  ((MR_Box) (grade_lib__grade_state____Compare____solver_var_map_0_0_10001)),
  (MR_String) "grade_lib.grade_state",
  (MR_String) "solver_var_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&grade_lib__grade_state__tree234__ti_tree234_2grade_lib__grade_spec__type_ctor_info_solver_var_id_0grade_lib__grade_state__type_ctor_info_solver_var_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo grade_lib__grade_state__grade_lib__grade_state__field_types_solver_var_value_0_0[2] = {
  (MR_PseudoTypeInfo) (&grade_lib__grade_spec__grade_lib__grade_spec__type_ctor_info_solver_var_value_id_0),
  (MR_PseudoTypeInfo) (&grade_lib__grade_state__grade_lib__grade_state__type_ctor_info_solver_var_value_possible_0)
};

static const MR_ConstString grade_lib__grade_state__grade_lib__grade_state__field_names_solver_var_value_0_0[2] = {
  (MR_String) "svv_id",
  (MR_String) "svv_is_possible"
};

static const MR_DuArgLocn grade_lib__grade_state__grade_lib__grade_state__field_locns_solver_var_value_0_0[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 7
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc grade_lib__grade_state__grade_lib__grade_state__du_functor_desc_solver_var_value_0_0 = {
  (MR_String) "solver_var_value",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  grade_lib__grade_state__grade_lib__grade_state__field_types_solver_var_value_0_0,
  grade_lib__grade_state__grade_lib__grade_state__field_names_solver_var_value_0_0,
  grade_lib__grade_state__grade_lib__grade_state__field_locns_solver_var_value_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr grade_lib__grade_state__grade_lib__grade_state__du_stag_ordered_solver_var_value_0_0[1] = { &grade_lib__grade_state__grade_lib__grade_state__du_functor_desc_solver_var_value_0_0 };

static const MR_DuPtagLayout grade_lib__grade_state__grade_lib__grade_state__du_ptag_ordered_solver_var_value_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    grade_lib__grade_state__grade_lib__grade_state__du_stag_ordered_solver_var_value_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr grade_lib__grade_state__grade_lib__grade_state__du_name_ordered_solver_var_value_0[1] = { &grade_lib__grade_state__grade_lib__grade_state__du_functor_desc_solver_var_value_0_0 };

static const MR_Integer grade_lib__grade_state__grade_lib__grade_state__functor_number_map_solver_var_value_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct grade_lib__grade_state__grade_lib__grade_state__type_ctor_info_solver_var_value_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (grade_lib__grade_state____Unify____solver_var_value_0_0_10001)),
  ((MR_Box) (grade_lib__grade_state____Compare____solver_var_value_0_0_10001)),
  (MR_String) "grade_lib.grade_state",
  (MR_String) "solver_var_value",
  { grade_lib__grade_state__grade_lib__grade_state__du_name_ordered_solver_var_value_0 },
  { grade_lib__grade_state__grade_lib__grade_state__du_ptag_ordered_solver_var_value_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  grade_lib__grade_state__grade_lib__grade_state__functor_number_map_solver_var_value_0,

};

static const MR_DuFunctorDesc grade_lib__grade_state__grade_lib__grade_state__du_functor_desc_solver_var_value_possible_0_0 = {
  (MR_String) "is_possible",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo grade_lib__grade_state__grade_lib__grade_state__field_types_solver_var_value_possible_0_1[1] = { (MR_PseudoTypeInfo) (&grade_lib__grade_state__grade_lib__grade_state__type_ctor_info_not_possible_why_0) };

static const MR_ConstString grade_lib__grade_state__grade_lib__grade_state__field_names_solver_var_value_possible_0_1[1] = { (MR_String) "np_why" };

static const MR_DuFunctorDesc grade_lib__grade_state__grade_lib__grade_state__du_functor_desc_solver_var_value_possible_0_1 = {
  (MR_String) "not_possible",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  grade_lib__grade_state__grade_lib__grade_state__field_types_solver_var_value_possible_0_1,
  grade_lib__grade_state__grade_lib__grade_state__field_names_solver_var_value_possible_0_1,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr grade_lib__grade_state__grade_lib__grade_state__du_stag_ordered_solver_var_value_possible_0_0[1] = { &grade_lib__grade_state__grade_lib__grade_state__du_functor_desc_solver_var_value_possible_0_0 };

static const MR_DuFunctorDescPtr grade_lib__grade_state__grade_lib__grade_state__du_stag_ordered_solver_var_value_possible_0_1[1] = { &grade_lib__grade_state__grade_lib__grade_state__du_functor_desc_solver_var_value_possible_0_1 };

static const MR_DuPtagLayout grade_lib__grade_state__grade_lib__grade_state__du_ptag_ordered_solver_var_value_possible_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    grade_lib__grade_state__grade_lib__grade_state__du_stag_ordered_solver_var_value_possible_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    grade_lib__grade_state__grade_lib__grade_state__du_stag_ordered_solver_var_value_possible_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr grade_lib__grade_state__grade_lib__grade_state__du_name_ordered_solver_var_value_possible_0[2] = {
  &grade_lib__grade_state__grade_lib__grade_state__du_functor_desc_solver_var_value_possible_0_0,
  &grade_lib__grade_state__grade_lib__grade_state__du_functor_desc_solver_var_value_possible_0_1
};

static const MR_Integer grade_lib__grade_state__grade_lib__grade_state__functor_number_map_solver_var_value_possible_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct grade_lib__grade_state__grade_lib__grade_state__type_ctor_info_solver_var_value_possible_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (grade_lib__grade_state____Unify____solver_var_value_possible_0_0_10001)),
  ((MR_Box) (grade_lib__grade_state____Compare____solver_var_value_possible_0_0_10001)),
  (MR_String) "grade_lib.grade_state",
  (MR_String) "solver_var_value_possible",
  { grade_lib__grade_state__grade_lib__grade_state__du_name_ordered_solver_var_value_possible_0 },
  { grade_lib__grade_state__grade_lib__grade_state__du_ptag_ordered_solver_var_value_possible_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  grade_lib__grade_state__grade_lib__grade_state__functor_number_map_solver_var_value_possible_0,

};

void MR_CALL 
grade_lib__grade_state____Compare____solver_var_value_0_0(
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
    MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 127);
    MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) & (MR_Integer) 127);
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
    }
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      grade_lib__grade_state____Compare____solver_var_value_possible_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

void MR_CALL 
grade_lib__grade_state____Compare____solver_var_value_possible_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

    grade_lib__grade_state____Compare____not_possible_why_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

MR_bool MR_CALL 
grade_lib__grade_state____Unify____solver_var_value_0_0(
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
    MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) & (MR_Integer) 127);
    MR_Word ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 127);
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
      succeeded = grade_lib__grade_state____Unify____solver_var_value_possible_0_0(ArgX2_5, ArgY2_6);
  }
  return succeeded;
}

MR_bool MR_CALL 
grade_lib__grade_state____Unify____solver_var_value_possible_0_0(
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
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_6 == CastX_5);
  }
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word ArgY1_4;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      succeeded = grade_lib__grade_state____Unify____not_possible_why_0_0(ArgX1_3, ArgY1_4);
    }
  }
  return succeeded;
}

void MR_CALL 
grade_lib__grade_state____Compare____solver_var_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&grade_lib__grade_state_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
grade_lib__grade_state____Unify____solver_var_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&grade_lib__grade_state_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
grade_lib__grade_state____Compare____solver_var_0_0(
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
  {
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
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
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&grade_lib__grade_state_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
    }
  }
}

MR_bool MR_CALL 
grade_lib__grade_state____Unify____solver_var_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_11_11;
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
      {
        TypeInfo_11_11 = (MR_Word) (&grade_lib__grade_state_scalar_common_1[3]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
      }
    }
  }
  return succeeded;
}

void MR_CALL 
grade_lib__grade_state____Compare____solver_info_0_0(
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
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&grade_lib__grade_state_scalar_common_1[1]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&grade_lib__grade_state_scalar_common_1[2]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&grade_lib__grade_state_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
    }
  }
}

MR_bool MR_CALL 
grade_lib__grade_state____Unify____solver_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_12_12;
    MR_Word TypeInfo_13_13;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&grade_lib__grade_state_scalar_common_1[1]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_12_12 = (MR_Word) (&grade_lib__grade_state_scalar_common_1[2]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        TypeInfo_13_13 = (MR_Word) (&grade_lib__grade_state_scalar_common_2[0]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
      }
    }
  }
  return succeeded;
}

void MR_CALL 
grade_lib__grade_state____Compare____requirement_id_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Integer ArgX1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer ArgY1_5 = (MR_Integer) (HeadVar__3_3);

    succeeded = (ArgX1_4 < ArgY1_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (ArgX1_4 > ArgY1_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
  }
}

MR_bool MR_CALL 
grade_lib__grade_state____Unify____requirement_id_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_5 == CastY_6);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Integer ArgX1_3 = (MR_Integer) (HeadVar__1_1);
    MR_Integer ArgY1_4 = (MR_Integer) (HeadVar__2_2);

    succeeded = (ArgX1_3 == ArgY1_4);
  }
  return succeeded;
}

void MR_CALL 
grade_lib__grade_state____Compare____requirement_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_String ArgX2_7 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_String ArgY2_8 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 2))) >> 12)) & (MR_Integer) 31);
    MR_Word ArgY3_11 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 2))) >> 12)) & (MR_Integer) 31);
    MR_Word ArgX4_13 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 2))) >> 5)) & (MR_Integer) 127);
    MR_Word ArgY4_14 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 2))) >> 5)) & (MR_Integer) 127);
    MR_Word ArgX5_16 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 2))) & (MR_Integer) 31);
    MR_Word ArgY5_17 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 2))) & (MR_Integer) 31);
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
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
    }
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;
        MR_Integer Var_31 = (MR_Integer) (ArgX3_10);
        MR_Integer Var_32 = (MR_Integer) (ArgY3_11);

        succeeded = (Var_31 < Var_32);
        if (succeeded)
        {
          SubResult3_12 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (Var_31 > Var_32);
          if (succeeded)
          {
            SubResult3_12 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
        }
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;
          MR_Integer Var_33 = (MR_Integer) (ArgX4_13);
          MR_Integer Var_34 = (MR_Integer) (ArgY4_14);

          succeeded = (Var_33 < Var_34);
          if (succeeded)
          {
            SubResult4_15 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (Var_33 > Var_34);
            if (succeeded)
            {
              SubResult4_15 = (MR_Integer) 2;
              succeeded = MR_TRUE;
            }
          }
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;
            MR_Integer Var_35 = (MR_Integer) (ArgX5_16);
            MR_Integer Var_36 = (MR_Integer) (ArgY5_17);

            succeeded = (Var_35 < Var_36);
            if (succeeded)
            {
              SubResult5_18 = (MR_Integer) 1;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = (Var_35 > Var_36);
              if (succeeded)
              {
                SubResult5_18 = (MR_Integer) 2;
                succeeded = MR_TRUE;
              }
            }
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
              mercury__builtin__compare_3_p_0((MR_Word) (&grade_lib__grade_state_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
grade_lib__grade_state____Unify____requirement_0_0(
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
    MR_Word TypeInfo_17_17;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_String ArgX2_5 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_String ArgY2_6 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 2))) >> 12)) & (MR_Integer) 31);
    MR_Word ArgY3_8 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 2))) >> 12)) & (MR_Integer) 31);
    MR_Word ArgX4_9 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 2))) >> 5)) & (MR_Integer) 127);
    MR_Word ArgY4_10 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 2))) >> 5)) & (MR_Integer) 127);
    MR_Word ArgX5_11 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 2))) & (MR_Integer) 31);
    MR_Word ArgY5_12 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 2))) & (MR_Integer) 31);
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Integer CastX_20 = (MR_Integer) (ArgX1_3);
    MR_Integer CastY_21 = (MR_Integer) (ArgY1_4);

    succeeded = (CastX_20 == CastY_21);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Integer ArgX1_18 = (MR_Integer) (ArgX1_3);
      MR_Integer ArgY1_19 = (MR_Integer) (ArgY1_4);

      succeeded = (ArgX1_18 == ArgY1_19);
    }
    if (succeeded)
    {
      succeeded = (strcmp(ArgX2_5, ArgY2_6) == 0);
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
            {
              TypeInfo_17_17 = (MR_Word) (&grade_lib__grade_state_scalar_common_1[0]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_17_17, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
            }
          }
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
grade_lib__grade_state____Compare____req_dir_0_0(
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
grade_lib__grade_state____Unify____req_dir_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
grade_lib__grade_state____Compare____not_possible_why_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
            break;
          case (MR_Integer) 1:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
            break;
          case (MR_Integer) 2:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_4 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 1));
              MR_Word ArgY1_5 = (MR_Word) (MR_body((MR_Word) (HeadVar__3_3), (MR_Integer) 1));

              grade_lib__grade_state____Compare____requirement_application_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
            }
            break;
        }
        break;
    }
}

void MR_CALL 
grade_lib__grade_state____Compare____requirement_application_0_0(
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
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_String ArgX2_7 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_String ArgY2_8 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 2))) & (MR_Integer) 1);
    MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 2))) & (MR_Integer) 1);
    MR_Word SubResult1_6;
    MR_Integer Var_17 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_18 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_17 < Var_18);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (Var_17 > Var_18);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 2;
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Integer Var_19 = (MR_Integer) (ArgX3_10);
        MR_Integer Var_20 = (MR_Integer) (ArgY3_11);

        succeeded = (Var_19 < Var_20);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 1;
        else
        {
          succeeded = (Var_19 > Var_20);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 2;
          else
            *HeadVar__1_1 = (MR_Integer) 0;
        }
      }
    }
  }
}

MR_bool MR_CALL 
grade_lib__grade_state____Unify____not_possible_why_0_0(
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
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
          MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

          succeeded = (CastY_6 == CastX_5);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_3 = (MR_Word) (MR_body((MR_Word) (HeadVar__1_1), (MR_Integer) 1));
          MR_Word ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 1));
            succeeded = grade_lib__grade_state____Unify____requirement_application_0_0(ArgX1_3, ArgY1_4);
          }
        }
        break;
    }
  return succeeded;
}

MR_bool MR_CALL 
grade_lib__grade_state____Unify____requirement_application_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_String ArgX2_5 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_String ArgY2_6 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 2))) & (MR_Integer) 1);
    MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 2))) & (MR_Integer) 1);
    MR_Integer CastX_13 = (MR_Integer) (ArgX1_3);
    MR_Integer CastY_14 = (MR_Integer) (ArgY1_4);

    succeeded = (CastX_13 == CastY_14);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Integer ArgX1_11 = (MR_Integer) (ArgX1_3);
      MR_Integer ArgY1_12 = (MR_Integer) (ArgY1_4);

      succeeded = (ArgX1_11 == ArgY1_12);
    }
    if (succeeded)
    {
      succeeded = (strcmp(ArgX2_5, ArgY2_6) == 0);
      if (succeeded)
        succeeded = (ArgX3_7 == ArgY3_8);
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
grade_lib__grade_state____Unify____not_possible_why_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = grade_lib__grade_state____Unify____not_possible_why_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
grade_lib__grade_state____Compare____not_possible_why_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  grade_lib__grade_state____Compare____not_possible_why_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
grade_lib__grade_state____Unify____req_dir_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = grade_lib__grade_state____Unify____req_dir_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
grade_lib__grade_state____Compare____req_dir_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  grade_lib__grade_state____Compare____req_dir_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
grade_lib__grade_state____Unify____requirement_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = grade_lib__grade_state____Unify____requirement_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
grade_lib__grade_state____Compare____requirement_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  grade_lib__grade_state____Compare____requirement_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
grade_lib__grade_state____Unify____requirement_application_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = grade_lib__grade_state____Unify____requirement_application_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
grade_lib__grade_state____Compare____requirement_application_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  grade_lib__grade_state____Compare____requirement_application_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
grade_lib__grade_state____Unify____requirement_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = grade_lib__grade_state____Unify____requirement_id_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
grade_lib__grade_state____Compare____requirement_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  grade_lib__grade_state____Compare____requirement_id_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
grade_lib__grade_state____Unify____solver_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = grade_lib__grade_state____Unify____solver_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
grade_lib__grade_state____Compare____solver_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  grade_lib__grade_state____Compare____solver_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
grade_lib__grade_state____Unify____solver_var_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = grade_lib__grade_state____Unify____solver_var_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
grade_lib__grade_state____Compare____solver_var_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  grade_lib__grade_state____Compare____solver_var_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
grade_lib__grade_state____Unify____solver_var_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = grade_lib__grade_state____Unify____solver_var_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
grade_lib__grade_state____Compare____solver_var_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  grade_lib__grade_state____Compare____solver_var_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
grade_lib__grade_state____Unify____solver_var_value_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = grade_lib__grade_state____Unify____solver_var_value_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
grade_lib__grade_state____Compare____solver_var_value_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  grade_lib__grade_state____Compare____solver_var_value_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
grade_lib__grade_state____Unify____solver_var_value_possible_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = grade_lib__grade_state____Unify____solver_var_value_possible_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
grade_lib__grade_state____Compare____solver_var_value_possible_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  grade_lib__grade_state____Compare____solver_var_value_possible_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__grade_lib__grade_state__init(void)
{
}

void mercury__grade_lib__grade_state__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&grade_lib__grade_state__grade_lib__grade_state__type_ctor_info_not_possible_why_0);
  MR_register_type_ctor_info(&grade_lib__grade_state__grade_lib__grade_state__type_ctor_info_req_dir_0);
  MR_register_type_ctor_info(&grade_lib__grade_state__grade_lib__grade_state__type_ctor_info_requirement_0);
  MR_register_type_ctor_info(&grade_lib__grade_state__grade_lib__grade_state__type_ctor_info_requirement_application_0);
  MR_register_type_ctor_info(&grade_lib__grade_state__grade_lib__grade_state__type_ctor_info_requirement_id_0);
  MR_register_type_ctor_info(&grade_lib__grade_state__grade_lib__grade_state__type_ctor_info_solver_info_0);
  MR_register_type_ctor_info(&grade_lib__grade_state__grade_lib__grade_state__type_ctor_info_solver_var_0);
  MR_register_type_ctor_info(&grade_lib__grade_state__grade_lib__grade_state__type_ctor_info_solver_var_map_0);
  MR_register_type_ctor_info(&grade_lib__grade_state__grade_lib__grade_state__type_ctor_info_solver_var_value_0);
  MR_register_type_ctor_info(&grade_lib__grade_state__grade_lib__grade_state__type_ctor_info_solver_var_value_possible_0);
}

void mercury__grade_lib__grade_state__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__grade_lib__grade_state__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module grade_lib.grade_state.
