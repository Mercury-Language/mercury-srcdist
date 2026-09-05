/*
** Automatically generated from `prog_data_rare.m'
** by the Mercury compiler,
** version rotd-2026-09-05
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


// :- module parse_tree.prog_data_rare.
// :- implementation.

/*
INIT mercury__parse_tree__prog_data_rare__init
ENDINIT
*/

#include "parse_tree.prog_data_rare.mih"


#include "builtin.mih"
#include "parse_tree.mih"
#include "private_builtin.mih"




static const MR_EnumFunctorDesc parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_mm_tabling_status_0_0;

static const MR_EnumFunctorDesc parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_mm_tabling_status_0_1;

static const MR_EnumFunctorDesc parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_mm_tabling_status_0_2;

static const MR_EnumFunctorDescPtr parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_ordinal_ordered_mm_tabling_status_0[3];

static const MR_EnumFunctorDescPtr parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_name_ordered_mm_tabling_status_0[3];

static const MR_Integer parse_tree__prog_data_rare__parse_tree__prog_data_rare__functor_number_map_mm_tabling_status_0[3];

static const MR_EnumFunctorDesc parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_mutable_pred_kind_0_0;

static const MR_EnumFunctorDesc parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_mutable_pred_kind_0_1;

static const MR_EnumFunctorDesc parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_mutable_pred_kind_0_2;

static const MR_EnumFunctorDesc parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_mutable_pred_kind_0_3;

static const MR_EnumFunctorDesc parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_mutable_pred_kind_0_4;

static const MR_EnumFunctorDesc parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_mutable_pred_kind_0_5;

static const MR_EnumFunctorDesc parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_mutable_pred_kind_0_6;

static const MR_EnumFunctorDesc parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_mutable_pred_kind_0_7;

static const MR_EnumFunctorDesc parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_mutable_pred_kind_0_8;

static const MR_EnumFunctorDesc parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_mutable_pred_kind_0_9;

static const MR_EnumFunctorDesc parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_mutable_pred_kind_0_10;

static const MR_EnumFunctorDesc parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_mutable_pred_kind_0_11;

static const MR_EnumFunctorDescPtr parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_ordinal_ordered_mutable_pred_kind_0[12];

static const MR_EnumFunctorDescPtr parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_name_ordered_mutable_pred_kind_0[12];

static const MR_Integer parse_tree__prog_data_rare__parse_tree__prog_data_rare__functor_number_map_mutable_pred_kind_0[12];

static const MR_EnumFunctorDesc parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_promise_type_0_0;

static const MR_EnumFunctorDesc parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_promise_type_0_1;

static const MR_EnumFunctorDesc parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_promise_type_0_2;

static const MR_EnumFunctorDesc parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_promise_type_0_3;

static const MR_EnumFunctorDescPtr parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_ordinal_ordered_promise_type_0[4];

static const MR_EnumFunctorDescPtr parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_name_ordered_promise_type_0[4];

static const MR_Integer parse_tree__prog_data_rare__parse_tree__prog_data_rare__functor_number_map_promise_type_0[4];

static const MR_EnumFunctorDesc parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_solver_type_pred_kind_0_0;

static const MR_EnumFunctorDesc parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_solver_type_pred_kind_0_1;

static const MR_EnumFunctorDesc parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_solver_type_pred_kind_0_2;

static const MR_EnumFunctorDesc parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_solver_type_pred_kind_0_3;

static const MR_EnumFunctorDescPtr parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_ordinal_ordered_solver_type_pred_kind_0[4];

static const MR_EnumFunctorDescPtr parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_name_ordered_solver_type_pred_kind_0[4];

static const MR_Integer parse_tree__prog_data_rare__parse_tree__prog_data_rare__functor_number_map_solver_type_pred_kind_0[4];

static const MR_EnumFunctorDesc parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_tabling_aux_pred_kind_0_0;

static const MR_EnumFunctorDesc parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_tabling_aux_pred_kind_0_1;

static const MR_EnumFunctorDescPtr parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_ordinal_ordered_tabling_aux_pred_kind_0[2];

static const MR_EnumFunctorDescPtr parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_name_ordered_tabling_aux_pred_kind_0[2];

static const MR_Integer parse_tree__prog_data_rare__parse_tree__prog_data_rare__functor_number_map_tabling_aux_pred_kind_0[2];

static const MR_EnumFunctorDesc parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_trailing_status_0_0;

static const MR_EnumFunctorDesc parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_trailing_status_0_1;

static const MR_EnumFunctorDesc parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_trailing_status_0_2;

static const MR_EnumFunctorDescPtr parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_ordinal_ordered_trailing_status_0[3];

static const MR_EnumFunctorDescPtr parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_name_ordered_trailing_status_0[3];

static const MR_Integer parse_tree__prog_data_rare__parse_tree__prog_data_rare__functor_number_map_trailing_status_0[3];

static MR_bool MR_CALL 
parse_tree__prog_data_rare____Unify____mm_tabling_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_data_rare____Compare____mm_tabling_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_data_rare____Unify____mutable_pred_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_data_rare____Compare____mutable_pred_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_data_rare____Unify____promise_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_data_rare____Compare____promise_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_data_rare____Unify____solver_type_pred_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_data_rare____Compare____solver_type_pred_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_data_rare____Unify____tabling_aux_pred_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_data_rare____Compare____tabling_aux_pred_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_data_rare____Unify____trailing_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_data_rare____Compare____trailing_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);









static const MR_EnumFunctorDesc parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_mm_tabling_status_0_0 = {
  (MR_String) "mm_tabled_may_call",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_mm_tabling_status_0_1 = {
  (MR_String) "mm_tabled_will_not_call",
  INT32_C(1)
};

static const MR_EnumFunctorDesc parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_mm_tabling_status_0_2 = {
  (MR_String) "mm_tabled_conditional",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_ordinal_ordered_mm_tabling_status_0[3] = {
  &parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_mm_tabling_status_0_0,
  &parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_mm_tabling_status_0_1,
  &parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_mm_tabling_status_0_2
};

static const MR_EnumFunctorDescPtr parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_name_ordered_mm_tabling_status_0[3] = {
  &parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_mm_tabling_status_0_2,
  &parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_mm_tabling_status_0_0,
  &parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_mm_tabling_status_0_1
};

static const MR_Integer parse_tree__prog_data_rare__parse_tree__prog_data_rare__functor_number_map_mm_tabling_status_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__prog_data_rare__parse_tree__prog_data_rare__type_ctor_info_mm_tabling_status_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__prog_data_rare____Unify____mm_tabling_status_0_0_10001)),
  ((MR_Box) (parse_tree__prog_data_rare____Compare____mm_tabling_status_0_0_10001)),
  (MR_String) "parse_tree.prog_data_rare",
  (MR_String) "mm_tabling_status",
  { parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_name_ordered_mm_tabling_status_0 },
  { parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_ordinal_ordered_mm_tabling_status_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  parse_tree__prog_data_rare__parse_tree__prog_data_rare__functor_number_map_mm_tabling_status_0,

};

static const MR_EnumFunctorDesc parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_mutable_pred_kind_0_0 = {
  (MR_String) "mutable_pred_std_get",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_mutable_pred_kind_0_1 = {
  (MR_String) "mutable_pred_std_set",
  INT32_C(1)
};

static const MR_EnumFunctorDesc parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_mutable_pred_kind_0_2 = {
  (MR_String) "mutable_pred_io_get",
  INT32_C(2)
};

static const MR_EnumFunctorDesc parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_mutable_pred_kind_0_3 = {
  (MR_String) "mutable_pred_io_set",
  INT32_C(3)
};

static const MR_EnumFunctorDesc parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_mutable_pred_kind_0_4 = {
  (MR_String) "mutable_pred_constant_get",
  INT32_C(4)
};

static const MR_EnumFunctorDesc parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_mutable_pred_kind_0_5 = {
  (MR_String) "mutable_pred_constant_secret_set",
  INT32_C(5)
};

static const MR_EnumFunctorDesc parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_mutable_pred_kind_0_6 = {
  (MR_String) "mutable_pred_unsafe_get",
  INT32_C(6)
};

static const MR_EnumFunctorDesc parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_mutable_pred_kind_0_7 = {
  (MR_String) "mutable_pred_unsafe_set",
  INT32_C(7)
};

static const MR_EnumFunctorDesc parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_mutable_pred_kind_0_8 = {
  (MR_String) "mutable_pred_lock",
  INT32_C(8)
};

static const MR_EnumFunctorDesc parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_mutable_pred_kind_0_9 = {
  (MR_String) "mutable_pred_unlock",
  INT32_C(9)
};

static const MR_EnumFunctorDesc parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_mutable_pred_kind_0_10 = {
  (MR_String) "mutable_pred_pre_init",
  INT32_C(10)
};

static const MR_EnumFunctorDesc parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_mutable_pred_kind_0_11 = {
  (MR_String) "mutable_pred_init",
  INT32_C(11)
};

static const MR_EnumFunctorDescPtr parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_ordinal_ordered_mutable_pred_kind_0[12] = {
  &parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_mutable_pred_kind_0_0,
  &parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_mutable_pred_kind_0_1,
  &parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_mutable_pred_kind_0_2,
  &parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_mutable_pred_kind_0_3,
  &parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_mutable_pred_kind_0_4,
  &parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_mutable_pred_kind_0_5,
  &parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_mutable_pred_kind_0_6,
  &parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_mutable_pred_kind_0_7,
  &parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_mutable_pred_kind_0_8,
  &parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_mutable_pred_kind_0_9,
  &parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_mutable_pred_kind_0_10,
  &parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_mutable_pred_kind_0_11
};

static const MR_EnumFunctorDescPtr parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_name_ordered_mutable_pred_kind_0[12] = {
  &parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_mutable_pred_kind_0_4,
  &parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_mutable_pred_kind_0_5,
  &parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_mutable_pred_kind_0_11,
  &parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_mutable_pred_kind_0_2,
  &parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_mutable_pred_kind_0_3,
  &parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_mutable_pred_kind_0_8,
  &parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_mutable_pred_kind_0_10,
  &parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_mutable_pred_kind_0_0,
  &parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_mutable_pred_kind_0_1,
  &parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_mutable_pred_kind_0_9,
  &parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_mutable_pred_kind_0_6,
  &parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_mutable_pred_kind_0_7
};

static const MR_Integer parse_tree__prog_data_rare__parse_tree__prog_data_rare__functor_number_map_mutable_pred_kind_0[12] = {
  (MR_Integer) 7,
  (MR_Integer) 8,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 10,
  (MR_Integer) 11,
  (MR_Integer) 5,
  (MR_Integer) 9,
  (MR_Integer) 6,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct parse_tree__prog_data_rare__parse_tree__prog_data_rare__type_ctor_info_mutable_pred_kind_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__prog_data_rare____Unify____mutable_pred_kind_0_0_10001)),
  ((MR_Box) (parse_tree__prog_data_rare____Compare____mutable_pred_kind_0_0_10001)),
  (MR_String) "parse_tree.prog_data_rare",
  (MR_String) "mutable_pred_kind",
  { parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_name_ordered_mutable_pred_kind_0 },
  { parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_ordinal_ordered_mutable_pred_kind_0 },
  (MR_Integer) 12,
  UINT16_C(12),
  parse_tree__prog_data_rare__parse_tree__prog_data_rare__functor_number_map_mutable_pred_kind_0,

};

static const MR_EnumFunctorDesc parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_promise_type_0_0 = {
  (MR_String) "promise_type_exclusive",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_promise_type_0_1 = {
  (MR_String) "promise_type_exhaustive",
  INT32_C(1)
};

static const MR_EnumFunctorDesc parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_promise_type_0_2 = {
  (MR_String) "promise_type_exclusive_exhaustive",
  INT32_C(2)
};

static const MR_EnumFunctorDesc parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_promise_type_0_3 = {
  (MR_String) "promise_type_true",
  INT32_C(3)
};

static const MR_EnumFunctorDescPtr parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_ordinal_ordered_promise_type_0[4] = {
  &parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_promise_type_0_0,
  &parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_promise_type_0_1,
  &parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_promise_type_0_2,
  &parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_promise_type_0_3
};

static const MR_EnumFunctorDescPtr parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_name_ordered_promise_type_0[4] = {
  &parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_promise_type_0_0,
  &parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_promise_type_0_2,
  &parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_promise_type_0_1,
  &parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_promise_type_0_3
};

static const MR_Integer parse_tree__prog_data_rare__parse_tree__prog_data_rare__functor_number_map_promise_type_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 3
};

const MR_TypeCtorInfo_Struct parse_tree__prog_data_rare__parse_tree__prog_data_rare__type_ctor_info_promise_type_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__prog_data_rare____Unify____promise_type_0_0_10001)),
  ((MR_Box) (parse_tree__prog_data_rare____Compare____promise_type_0_0_10001)),
  (MR_String) "parse_tree.prog_data_rare",
  (MR_String) "promise_type",
  { parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_name_ordered_promise_type_0 },
  { parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_ordinal_ordered_promise_type_0 },
  (MR_Integer) 4,
  UINT16_C(12),
  parse_tree__prog_data_rare__parse_tree__prog_data_rare__functor_number_map_promise_type_0,

};

static const MR_EnumFunctorDesc parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_solver_type_pred_kind_0_0 = {
  (MR_String) "solver_type_to_ground_pred",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_solver_type_pred_kind_0_1 = {
  (MR_String) "solver_type_to_any_pred",
  INT32_C(1)
};

static const MR_EnumFunctorDesc parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_solver_type_pred_kind_0_2 = {
  (MR_String) "solver_type_from_ground_pred",
  INT32_C(2)
};

static const MR_EnumFunctorDesc parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_solver_type_pred_kind_0_3 = {
  (MR_String) "solver_type_from_any_pred",
  INT32_C(3)
};

static const MR_EnumFunctorDescPtr parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_ordinal_ordered_solver_type_pred_kind_0[4] = {
  &parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_solver_type_pred_kind_0_0,
  &parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_solver_type_pred_kind_0_1,
  &parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_solver_type_pred_kind_0_2,
  &parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_solver_type_pred_kind_0_3
};

static const MR_EnumFunctorDescPtr parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_name_ordered_solver_type_pred_kind_0[4] = {
  &parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_solver_type_pred_kind_0_3,
  &parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_solver_type_pred_kind_0_2,
  &parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_solver_type_pred_kind_0_1,
  &parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_solver_type_pred_kind_0_0
};

static const MR_Integer parse_tree__prog_data_rare__parse_tree__prog_data_rare__functor_number_map_solver_type_pred_kind_0[4] = {
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__prog_data_rare__parse_tree__prog_data_rare__type_ctor_info_solver_type_pred_kind_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__prog_data_rare____Unify____solver_type_pred_kind_0_0_10001)),
  ((MR_Box) (parse_tree__prog_data_rare____Compare____solver_type_pred_kind_0_0_10001)),
  (MR_String) "parse_tree.prog_data_rare",
  (MR_String) "solver_type_pred_kind",
  { parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_name_ordered_solver_type_pred_kind_0 },
  { parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_ordinal_ordered_solver_type_pred_kind_0 },
  (MR_Integer) 4,
  UINT16_C(12),
  parse_tree__prog_data_rare__parse_tree__prog_data_rare__functor_number_map_solver_type_pred_kind_0,

};

static const MR_EnumFunctorDesc parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_tabling_aux_pred_kind_0_0 = {
  (MR_String) "tabling_aux_pred_stats",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_tabling_aux_pred_kind_0_1 = {
  (MR_String) "tabling_aux_pred_reset",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_ordinal_ordered_tabling_aux_pred_kind_0[2] = {
  &parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_tabling_aux_pred_kind_0_0,
  &parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_tabling_aux_pred_kind_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_name_ordered_tabling_aux_pred_kind_0[2] = {
  &parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_tabling_aux_pred_kind_0_1,
  &parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_tabling_aux_pred_kind_0_0
};

static const MR_Integer parse_tree__prog_data_rare__parse_tree__prog_data_rare__functor_number_map_tabling_aux_pred_kind_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__prog_data_rare__parse_tree__prog_data_rare__type_ctor_info_tabling_aux_pred_kind_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__prog_data_rare____Unify____tabling_aux_pred_kind_0_0_10001)),
  ((MR_Box) (parse_tree__prog_data_rare____Compare____tabling_aux_pred_kind_0_0_10001)),
  (MR_String) "parse_tree.prog_data_rare",
  (MR_String) "tabling_aux_pred_kind",
  { parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_name_ordered_tabling_aux_pred_kind_0 },
  { parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_ordinal_ordered_tabling_aux_pred_kind_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__prog_data_rare__parse_tree__prog_data_rare__functor_number_map_tabling_aux_pred_kind_0,

};

static const MR_EnumFunctorDesc parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_trailing_status_0_0 = {
  (MR_String) "trail_may_modify",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_trailing_status_0_1 = {
  (MR_String) "trail_will_not_modify",
  INT32_C(1)
};

static const MR_EnumFunctorDesc parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_trailing_status_0_2 = {
  (MR_String) "trail_conditional",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_ordinal_ordered_trailing_status_0[3] = {
  &parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_trailing_status_0_0,
  &parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_trailing_status_0_1,
  &parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_trailing_status_0_2
};

static const MR_EnumFunctorDescPtr parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_name_ordered_trailing_status_0[3] = {
  &parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_trailing_status_0_2,
  &parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_trailing_status_0_0,
  &parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_functor_desc_trailing_status_0_1
};

static const MR_Integer parse_tree__prog_data_rare__parse_tree__prog_data_rare__functor_number_map_trailing_status_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__prog_data_rare__parse_tree__prog_data_rare__type_ctor_info_trailing_status_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__prog_data_rare____Unify____trailing_status_0_0_10001)),
  ((MR_Box) (parse_tree__prog_data_rare____Compare____trailing_status_0_0_10001)),
  (MR_String) "parse_tree.prog_data_rare",
  (MR_String) "trailing_status",
  { parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_name_ordered_trailing_status_0 },
  { parse_tree__prog_data_rare__parse_tree__prog_data_rare__enum_ordinal_ordered_trailing_status_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  parse_tree__prog_data_rare__parse_tree__prog_data_rare__functor_number_map_trailing_status_0,

};

void MR_CALL 
parse_tree__prog_data_rare____Compare____trailing_status_0_0(
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
parse_tree__prog_data_rare____Unify____trailing_status_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
parse_tree__prog_data_rare____Compare____tabling_aux_pred_kind_0_0(
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
parse_tree__prog_data_rare____Unify____tabling_aux_pred_kind_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
parse_tree__prog_data_rare____Compare____solver_type_pred_kind_0_0(
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
parse_tree__prog_data_rare____Unify____solver_type_pred_kind_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
parse_tree__prog_data_rare____Compare____promise_type_0_0(
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
parse_tree__prog_data_rare____Unify____promise_type_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
parse_tree__prog_data_rare____Compare____mutable_pred_kind_0_0(
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
parse_tree__prog_data_rare____Unify____mutable_pred_kind_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
parse_tree__prog_data_rare____Compare____mm_tabling_status_0_0(
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
parse_tree__prog_data_rare____Unify____mm_tabling_status_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__prog_data_rare____Unify____mm_tabling_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_data_rare____Unify____mm_tabling_status_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_data_rare____Compare____mm_tabling_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__prog_data_rare____Compare____mm_tabling_status_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__prog_data_rare____Unify____mutable_pred_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_data_rare____Unify____mutable_pred_kind_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_data_rare____Compare____mutable_pred_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__prog_data_rare____Compare____mutable_pred_kind_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__prog_data_rare____Unify____promise_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_data_rare____Unify____promise_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_data_rare____Compare____promise_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__prog_data_rare____Compare____promise_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__prog_data_rare____Unify____solver_type_pred_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_data_rare____Unify____solver_type_pred_kind_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_data_rare____Compare____solver_type_pred_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__prog_data_rare____Compare____solver_type_pred_kind_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__prog_data_rare____Unify____tabling_aux_pred_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_data_rare____Unify____tabling_aux_pred_kind_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_data_rare____Compare____tabling_aux_pred_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__prog_data_rare____Compare____tabling_aux_pred_kind_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__prog_data_rare____Unify____trailing_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_data_rare____Unify____trailing_status_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_data_rare____Compare____trailing_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__prog_data_rare____Compare____trailing_status_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__parse_tree__prog_data_rare__init(void)
{
}

void mercury__parse_tree__prog_data_rare__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&parse_tree__prog_data_rare__parse_tree__prog_data_rare__type_ctor_info_mm_tabling_status_0);
  MR_register_type_ctor_info(&parse_tree__prog_data_rare__parse_tree__prog_data_rare__type_ctor_info_mutable_pred_kind_0);
  MR_register_type_ctor_info(&parse_tree__prog_data_rare__parse_tree__prog_data_rare__type_ctor_info_promise_type_0);
  MR_register_type_ctor_info(&parse_tree__prog_data_rare__parse_tree__prog_data_rare__type_ctor_info_solver_type_pred_kind_0);
  MR_register_type_ctor_info(&parse_tree__prog_data_rare__parse_tree__prog_data_rare__type_ctor_info_tabling_aux_pred_kind_0);
  MR_register_type_ctor_info(&parse_tree__prog_data_rare__parse_tree__prog_data_rare__type_ctor_info_trailing_status_0);
}

void mercury__parse_tree__prog_data_rare__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__prog_data_rare__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module parse_tree.prog_data_rare.
