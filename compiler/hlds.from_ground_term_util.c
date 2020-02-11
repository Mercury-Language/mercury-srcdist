/*
** Automatically generated from `from_ground_term_util.m'
** by the Mercury compiler,
** version rotd-2020-02-11
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


// :- module hlds.from_ground_term_util.
// :- implementation.

/*
INIT mercury__hlds__from_ground_term_util__init
ENDINIT
*/

#include "hlds.from_ground_term_util.mih"


#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.vartypes.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
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
#include "getopt_io.mih"
#include "int.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"




static const MR_FA_PseudoTypeInfo_Struct1 hlds__from_ground_term_util__cord__pti_cord_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_FA_TypeInfo_Struct1 hlds__from_ground_term_util__cord__ti_cord_1hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_PseudoTypeInfo hlds__from_ground_term_util__hlds__from_ground_term_util__field_types_fgt_build_info_0_0[2];

static const MR_DuFunctorDesc hlds__from_ground_term_util__hlds__from_ground_term_util__du_functor_desc_fgt_build_info_0_0;

static const MR_DuFunctorDescPtr hlds__from_ground_term_util__hlds__from_ground_term_util__du_stag_ordered_fgt_build_info_0_0[1];

static const MR_DuPtagLayout hlds__from_ground_term_util__hlds__from_ground_term_util__du_ptag_ordered_fgt_build_info_0[1];

static const MR_DuFunctorDescPtr hlds__from_ground_term_util__hlds__from_ground_term_util__du_name_ordered_fgt_build_info_0[1];

static const MR_Integer hlds__from_ground_term_util__hlds__from_ground_term_util__functor_number_map_fgt_build_info_0[1];

static const MR_FA_TypeInfo_Struct1 hlds__from_ground_term_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 hlds__from_ground_term_util__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__from_ground_term_util__type_ctor_info_fgt_build_info_0;

static const MR_EnumFunctorDesc hlds__from_ground_term_util__hlds__from_ground_term_util__enum_functor_desc_fgt_invariants_status_0_0;

static const MR_EnumFunctorDesc hlds__from_ground_term_util__hlds__from_ground_term_util__enum_functor_desc_fgt_invariants_status_0_1;

static const MR_EnumFunctorDescPtr hlds__from_ground_term_util__hlds__from_ground_term_util__enum_value_ordered_fgt_invariants_status_0[2];

static const MR_EnumFunctorDescPtr hlds__from_ground_term_util__hlds__from_ground_term_util__enum_name_ordered_fgt_invariants_status_0[2];

static const MR_Integer hlds__from_ground_term_util__hlds__from_ground_term_util__functor_number_map_fgt_invariants_status_0[2];

static const MR_FA_TypeInfo_Struct1 hlds__from_ground_term_util__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo hlds__from_ground_term_util__hlds__from_ground_term_util__field_types_fgt_marked_goal_0_0[3];

static const MR_DuFunctorDesc hlds__from_ground_term_util__hlds__from_ground_term_util__du_functor_desc_fgt_marked_goal_0_0;

static const MR_PseudoTypeInfo hlds__from_ground_term_util__hlds__from_ground_term_util__field_types_fgt_marked_goal_0_1[3];

static const MR_DuFunctorDesc hlds__from_ground_term_util__hlds__from_ground_term_util__du_functor_desc_fgt_marked_goal_0_1;

static const MR_DuFunctorDescPtr hlds__from_ground_term_util__hlds__from_ground_term_util__du_stag_ordered_fgt_marked_goal_0_0[1];

static const MR_DuFunctorDescPtr hlds__from_ground_term_util__hlds__from_ground_term_util__du_stag_ordered_fgt_marked_goal_0_1[1];

static const MR_DuPtagLayout hlds__from_ground_term_util__hlds__from_ground_term_util__du_ptag_ordered_fgt_marked_goal_0[2];

static const MR_DuFunctorDescPtr hlds__from_ground_term_util__hlds__from_ground_term_util__du_name_ordered_fgt_marked_goal_0[2];

static const MR_Integer hlds__from_ground_term_util__hlds__from_ground_term_util__functor_number_map_fgt_marked_goal_0[2];

static const MR_EnumFunctorDesc hlds__from_ground_term_util__hlds__from_ground_term_util__enum_functor_desc_goal_order_0_0;

static const MR_EnumFunctorDesc hlds__from_ground_term_util__hlds__from_ground_term_util__enum_functor_desc_goal_order_0_1;

static const MR_EnumFunctorDescPtr hlds__from_ground_term_util__hlds__from_ground_term_util__enum_value_ordered_goal_order_0[2];

static const MR_EnumFunctorDescPtr hlds__from_ground_term_util__hlds__from_ground_term_util__enum_name_ordered_goal_order_0[2];

static const MR_Integer hlds__from_ground_term_util__hlds__from_ground_term_util__functor_number_map_goal_order_0[2];

static const MR_EnumFunctorDesc hlds__from_ground_term_util__hlds__from_ground_term_util__enum_functor_desc_maybe_kept_0_0;

static const MR_EnumFunctorDesc hlds__from_ground_term_util__hlds__from_ground_term_util__enum_functor_desc_maybe_kept_0_1;

static const MR_EnumFunctorDescPtr hlds__from_ground_term_util__hlds__from_ground_term_util__enum_value_ordered_maybe_kept_0[2];

static const MR_EnumFunctorDescPtr hlds__from_ground_term_util__hlds__from_ground_term_util__enum_name_ordered_maybe_kept_0[2];

static const MR_Integer hlds__from_ground_term_util__hlds__from_ground_term_util__functor_number_map_maybe_kept_0[2];

static const MR_PseudoTypeInfo hlds__from_ground_term_util__hlds__from_ground_term_util__field_types_maybe_kept_goal_info_0_0[2];

static const MR_ConstString hlds__from_ground_term_util__hlds__from_ground_term_util__field_names_maybe_kept_goal_info_0_0[2];

static const MR_DuFunctorDesc hlds__from_ground_term_util__hlds__from_ground_term_util__du_functor_desc_maybe_kept_goal_info_0_0;

static const MR_DuFunctorDesc hlds__from_ground_term_util__hlds__from_ground_term_util__du_functor_desc_maybe_kept_goal_info_0_1;

static const MR_DuFunctorDescPtr hlds__from_ground_term_util__hlds__from_ground_term_util__du_stag_ordered_maybe_kept_goal_info_0_0[1];

static const MR_DuFunctorDescPtr hlds__from_ground_term_util__hlds__from_ground_term_util__du_stag_ordered_maybe_kept_goal_info_0_1[1];

static const MR_DuPtagLayout hlds__from_ground_term_util__hlds__from_ground_term_util__du_ptag_ordered_maybe_kept_goal_info_0[2];

static const MR_DuFunctorDescPtr hlds__from_ground_term_util__hlds__from_ground_term_util__du_name_ordered_maybe_kept_goal_info_0[2];

static const MR_Integer hlds__from_ground_term_util__hlds__from_ground_term_util__functor_number_map_maybe_kept_goal_info_0[2];

static void MR_CALL 
hlds__from_ground_term_util____Compare____maybe_kept_goal_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__from_ground_term_util____Unify____maybe_kept_goal_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__from_ground_term_util____Compare____maybe_kept_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__from_ground_term_util____Unify____maybe_kept_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__from_ground_term_util__project_build_info_goal_cord_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * GoalCord_4);

static void MR_CALL 
hlds__from_ground_term_util__introduce_partial_fgt_scopes_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__from_ground_term_util__introduce_partial_fgt_scopes_loop_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_BuildInfoMap_0_3,
  MR_Word * STATE_VARIABLE_BuildInfoMap_4);

static void MR_CALL 
hlds__from_ground_term_util__lookup_and_remove_arg_vars_insert_fgt_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_GoalCord_0_3,
  MR_Word * STATE_VARIABLE_GoalCord_4,
  MR_Word STATE_VARIABLE_BuildInfoMap_0_5,
  MR_Word * STATE_VARIABLE_BuildInfoMap_6);

static void MR_CALL 
hlds__from_ground_term_util__lookup_and_remove_arg_vars_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_GoalCord_0_2,
  MR_Word * STATE_VARIABLE_GoalCord_3,
  MR_Word STATE_VARIABLE_Kept_0_4,
  MR_Word * STATE_VARIABLE_Kept_5,
  MR_Integer STATE_VARIABLE_TotalSize_0_6,
  MR_Integer * STATE_VARIABLE_TotalSize_7,
  MR_Word STATE_VARIABLE_BuildInfoMap_0_8,
  MR_Word * STATE_VARIABLE_BuildInfoMap_9);

static MR_bool MR_CALL 
hlds__from_ground_term_util____Unify____fgt_build_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__from_ground_term_util____Compare____fgt_build_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__from_ground_term_util____Unify____fgt_build_info_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__from_ground_term_util____Compare____fgt_build_info_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__from_ground_term_util____Unify____fgt_invariants_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__from_ground_term_util____Compare____fgt_invariants_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__from_ground_term_util____Unify____fgt_marked_goal_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__from_ground_term_util____Compare____fgt_marked_goal_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__from_ground_term_util____Unify____goal_order_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__from_ground_term_util____Compare____goal_order_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__from_ground_term_util____Unify____maybe_kept_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__from_ground_term_util____Compare____maybe_kept_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__from_ground_term_util____Unify____maybe_kept_goal_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__from_ground_term_util____Compare____maybe_kept_goal_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__from_ground_term_util_scalar_common_1[4][2];

static /* final */ const MR_Box hlds__from_ground_term_util_scalar_common_2[2][3];

static /* final */ const MR_Box hlds__from_ground_term_util_scalar_common_3[1][5];




static /* final */ const MR_Box hlds__from_ground_term_util_scalar_common_1[4][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__from_ground_term_util_scalar_common_1[0]))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box hlds__from_ground_term_util_scalar_common_2[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__from_ground_term_util_scalar_common_1[0])),
    ((MR_Box) (&hlds__from_ground_term_util__hlds__from_ground_term_util__type_ctor_info_fgt_build_info_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&hlds__from_ground_term_util_scalar_common_3[0])),
    ((MR_Box) (hlds__from_ground_term_util__introduce_partial_fgt_scopes_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__from_ground_term_util_scalar_common_3[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__from_ground_term_util__hlds__from_ground_term_util__type_ctor_info_fgt_build_info_0)),
    ((MR_Box) (&hlds__from_ground_term_util__cord__pti_cord_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct1 hlds__from_ground_term_util__cord__pti_cord_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__from_ground_term_util__cord__ti_cord_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)
  }
};

static const MR_PseudoTypeInfo hlds__from_ground_term_util__hlds__from_ground_term_util__field_types_fgt_build_info_0_0[2] = {
  (MR_PseudoTypeInfo) (&hlds__from_ground_term_util__hlds__from_ground_term_util__type_ctor_info_maybe_kept_goal_info_0),
  (MR_PseudoTypeInfo) (&hlds__from_ground_term_util__cord__ti_cord_1hlds__hlds_goal__type_ctor_info_hlds_goal_0)
};

static const MR_DuFunctorDesc hlds__from_ground_term_util__hlds__from_ground_term_util__du_functor_desc_fgt_build_info_0_0 = {
  (MR_String) "fgt_build_info",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__from_ground_term_util__hlds__from_ground_term_util__field_types_fgt_build_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__from_ground_term_util__hlds__from_ground_term_util__du_stag_ordered_fgt_build_info_0_0[1] = {
  &hlds__from_ground_term_util__hlds__from_ground_term_util__du_functor_desc_fgt_build_info_0_0
};

static const MR_DuPtagLayout hlds__from_ground_term_util__hlds__from_ground_term_util__du_ptag_ordered_fgt_build_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__from_ground_term_util__hlds__from_ground_term_util__du_stag_ordered_fgt_build_info_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr hlds__from_ground_term_util__hlds__from_ground_term_util__du_name_ordered_fgt_build_info_0[1] = {
  &hlds__from_ground_term_util__hlds__from_ground_term_util__du_functor_desc_fgt_build_info_0_0
};

static const MR_Integer hlds__from_ground_term_util__hlds__from_ground_term_util__functor_number_map_fgt_build_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__from_ground_term_util__hlds__from_ground_term_util__type_ctor_info_fgt_build_info_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__from_ground_term_util____Unify____fgt_build_info_0_0_10001)),
  ((MR_Box) (hlds__from_ground_term_util____Compare____fgt_build_info_0_0_10001)),
  (MR_String) "hlds.from_ground_term_util",
  (MR_String) "fgt_build_info",
  {     hlds__from_ground_term_util__hlds__from_ground_term_util__du_name_ordered_fgt_build_info_0 },
  {     hlds__from_ground_term_util__hlds__from_ground_term_util__du_ptag_ordered_fgt_build_info_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  hlds__from_ground_term_util__hlds__from_ground_term_util__functor_number_map_fgt_build_info_0
};

static const MR_FA_TypeInfo_Struct1 hlds__from_ground_term_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__from_ground_term_util__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__from_ground_term_util__type_ctor_info_fgt_build_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__from_ground_term_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&hlds__from_ground_term_util__hlds__from_ground_term_util__type_ctor_info_fgt_build_info_0)
  }
};

const MR_TypeCtorInfo_Struct hlds__from_ground_term_util__hlds__from_ground_term_util__type_ctor_info_fgt_build_info_map_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__from_ground_term_util____Unify____fgt_build_info_map_0_0_10001)),
  ((MR_Box) (hlds__from_ground_term_util____Compare____fgt_build_info_map_0_0_10001)),
  (MR_String) "hlds.from_ground_term_util",
  (MR_String) "fgt_build_info_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&hlds__from_ground_term_util__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__from_ground_term_util__type_ctor_info_fgt_build_info_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_EnumFunctorDesc hlds__from_ground_term_util__hlds__from_ground_term_util__enum_functor_desc_fgt_invariants_status_0_0 = {
  (MR_String) "fgt_invariants_kept",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__from_ground_term_util__hlds__from_ground_term_util__enum_functor_desc_fgt_invariants_status_0_1 = {
  (MR_String) "fgt_invariants_broken",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__from_ground_term_util__hlds__from_ground_term_util__enum_value_ordered_fgt_invariants_status_0[2] = {
  &hlds__from_ground_term_util__hlds__from_ground_term_util__enum_functor_desc_fgt_invariants_status_0_0,
  &hlds__from_ground_term_util__hlds__from_ground_term_util__enum_functor_desc_fgt_invariants_status_0_1
};

static const MR_EnumFunctorDescPtr hlds__from_ground_term_util__hlds__from_ground_term_util__enum_name_ordered_fgt_invariants_status_0[2] = {
  &hlds__from_ground_term_util__hlds__from_ground_term_util__enum_functor_desc_fgt_invariants_status_0_1,
  &hlds__from_ground_term_util__hlds__from_ground_term_util__enum_functor_desc_fgt_invariants_status_0_0
};

static const MR_Integer hlds__from_ground_term_util__hlds__from_ground_term_util__functor_number_map_fgt_invariants_status_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__from_ground_term_util__hlds__from_ground_term_util__type_ctor_info_fgt_invariants_status_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__from_ground_term_util____Unify____fgt_invariants_status_0_0_10001)),
  ((MR_Box) (hlds__from_ground_term_util____Compare____fgt_invariants_status_0_0_10001)),
  (MR_String) "hlds.from_ground_term_util",
  (MR_String) "fgt_invariants_status",
  {     hlds__from_ground_term_util__hlds__from_ground_term_util__enum_name_ordered_fgt_invariants_status_0 },
  {     hlds__from_ground_term_util__hlds__from_ground_term_util__enum_value_ordered_fgt_invariants_status_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  hlds__from_ground_term_util__hlds__from_ground_term_util__functor_number_map_fgt_invariants_status_0
};

static const MR_FA_TypeInfo_Struct1 hlds__from_ground_term_util__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&hlds__from_ground_term_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_PseudoTypeInfo hlds__from_ground_term_util__hlds__from_ground_term_util__field_types_fgt_marked_goal_0_0[3] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0),
  (MR_PseudoTypeInfo) (&hlds__from_ground_term_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&hlds__from_ground_term_util__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_DuFunctorDesc hlds__from_ground_term_util__hlds__from_ground_term_util__du_functor_desc_fgt_marked_goal_0_0 = {
  (MR_String) "fgt_kept_goal",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__from_ground_term_util__hlds__from_ground_term_util__field_types_fgt_marked_goal_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__from_ground_term_util__hlds__from_ground_term_util__field_types_fgt_marked_goal_0_1[3] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0),
  (MR_PseudoTypeInfo) (&hlds__from_ground_term_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&hlds__from_ground_term_util__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_DuFunctorDesc hlds__from_ground_term_util__hlds__from_ground_term_util__du_functor_desc_fgt_marked_goal_0_1 = {
  (MR_String) "fgt_broken_goal",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  hlds__from_ground_term_util__hlds__from_ground_term_util__field_types_fgt_marked_goal_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__from_ground_term_util__hlds__from_ground_term_util__du_stag_ordered_fgt_marked_goal_0_0[1] = {
  &hlds__from_ground_term_util__hlds__from_ground_term_util__du_functor_desc_fgt_marked_goal_0_0
};

static const MR_DuFunctorDescPtr hlds__from_ground_term_util__hlds__from_ground_term_util__du_stag_ordered_fgt_marked_goal_0_1[1] = {
  &hlds__from_ground_term_util__hlds__from_ground_term_util__du_functor_desc_fgt_marked_goal_0_1
};

static const MR_DuPtagLayout hlds__from_ground_term_util__hlds__from_ground_term_util__du_ptag_ordered_fgt_marked_goal_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__from_ground_term_util__hlds__from_ground_term_util__du_stag_ordered_fgt_marked_goal_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__from_ground_term_util__hlds__from_ground_term_util__du_stag_ordered_fgt_marked_goal_0_1,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr hlds__from_ground_term_util__hlds__from_ground_term_util__du_name_ordered_fgt_marked_goal_0[2] = {
  &hlds__from_ground_term_util__hlds__from_ground_term_util__du_functor_desc_fgt_marked_goal_0_1,
  &hlds__from_ground_term_util__hlds__from_ground_term_util__du_functor_desc_fgt_marked_goal_0_0
};

static const MR_Integer hlds__from_ground_term_util__hlds__from_ground_term_util__functor_number_map_fgt_marked_goal_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__from_ground_term_util__hlds__from_ground_term_util__type_ctor_info_fgt_marked_goal_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__from_ground_term_util____Unify____fgt_marked_goal_0_0_10001)),
  ((MR_Box) (hlds__from_ground_term_util____Compare____fgt_marked_goal_0_0_10001)),
  (MR_String) "hlds.from_ground_term_util",
  (MR_String) "fgt_marked_goal",
  {     hlds__from_ground_term_util__hlds__from_ground_term_util__du_name_ordered_fgt_marked_goal_0 },
  {     hlds__from_ground_term_util__hlds__from_ground_term_util__du_ptag_ordered_fgt_marked_goal_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  hlds__from_ground_term_util__hlds__from_ground_term_util__functor_number_map_fgt_marked_goal_0
};

static const MR_EnumFunctorDesc hlds__from_ground_term_util__hlds__from_ground_term_util__enum_functor_desc_goal_order_0_0 = {
  (MR_String) "construct_bottom_up",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__from_ground_term_util__hlds__from_ground_term_util__enum_functor_desc_goal_order_0_1 = {
  (MR_String) "deconstruct_top_down",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__from_ground_term_util__hlds__from_ground_term_util__enum_value_ordered_goal_order_0[2] = {
  &hlds__from_ground_term_util__hlds__from_ground_term_util__enum_functor_desc_goal_order_0_0,
  &hlds__from_ground_term_util__hlds__from_ground_term_util__enum_functor_desc_goal_order_0_1
};

static const MR_EnumFunctorDescPtr hlds__from_ground_term_util__hlds__from_ground_term_util__enum_name_ordered_goal_order_0[2] = {
  &hlds__from_ground_term_util__hlds__from_ground_term_util__enum_functor_desc_goal_order_0_0,
  &hlds__from_ground_term_util__hlds__from_ground_term_util__enum_functor_desc_goal_order_0_1
};

static const MR_Integer hlds__from_ground_term_util__hlds__from_ground_term_util__functor_number_map_goal_order_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__from_ground_term_util__hlds__from_ground_term_util__type_ctor_info_goal_order_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__from_ground_term_util____Unify____goal_order_0_0_10001)),
  ((MR_Box) (hlds__from_ground_term_util____Compare____goal_order_0_0_10001)),
  (MR_String) "hlds.from_ground_term_util",
  (MR_String) "goal_order",
  {     hlds__from_ground_term_util__hlds__from_ground_term_util__enum_name_ordered_goal_order_0 },
  {     hlds__from_ground_term_util__hlds__from_ground_term_util__enum_value_ordered_goal_order_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  hlds__from_ground_term_util__hlds__from_ground_term_util__functor_number_map_goal_order_0
};

static const MR_EnumFunctorDesc hlds__from_ground_term_util__hlds__from_ground_term_util__enum_functor_desc_maybe_kept_0_0 = {
  (MR_String) "kept",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__from_ground_term_util__hlds__from_ground_term_util__enum_functor_desc_maybe_kept_0_1 = {
  (MR_String) "broken",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__from_ground_term_util__hlds__from_ground_term_util__enum_value_ordered_maybe_kept_0[2] = {
  &hlds__from_ground_term_util__hlds__from_ground_term_util__enum_functor_desc_maybe_kept_0_0,
  &hlds__from_ground_term_util__hlds__from_ground_term_util__enum_functor_desc_maybe_kept_0_1
};

static const MR_EnumFunctorDescPtr hlds__from_ground_term_util__hlds__from_ground_term_util__enum_name_ordered_maybe_kept_0[2] = {
  &hlds__from_ground_term_util__hlds__from_ground_term_util__enum_functor_desc_maybe_kept_0_1,
  &hlds__from_ground_term_util__hlds__from_ground_term_util__enum_functor_desc_maybe_kept_0_0
};

static const MR_Integer hlds__from_ground_term_util__hlds__from_ground_term_util__functor_number_map_maybe_kept_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__from_ground_term_util__hlds__from_ground_term_util__type_ctor_info_maybe_kept_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__from_ground_term_util____Unify____maybe_kept_0_0_10001)),
  ((MR_Box) (hlds__from_ground_term_util____Compare____maybe_kept_0_0_10001)),
  (MR_String) "hlds.from_ground_term_util",
  (MR_String) "maybe_kept",
  {     hlds__from_ground_term_util__hlds__from_ground_term_util__enum_name_ordered_maybe_kept_0 },
  {     hlds__from_ground_term_util__hlds__from_ground_term_util__enum_value_ordered_maybe_kept_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  hlds__from_ground_term_util__hlds__from_ground_term_util__functor_number_map_maybe_kept_0
};

static const MR_PseudoTypeInfo hlds__from_ground_term_util__hlds__from_ground_term_util__field_types_maybe_kept_goal_info_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0)
};

static const MR_ConstString hlds__from_ground_term_util__hlds__from_ground_term_util__field_names_maybe_kept_goal_info_0_0[2] = {
  (MR_String) "mkgi_size",
  (MR_String) "mkgi_old_goal_info"
};

static const MR_DuFunctorDesc hlds__from_ground_term_util__hlds__from_ground_term_util__du_functor_desc_maybe_kept_goal_info_0_0 = {
  (MR_String) "kept_old_gi",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__from_ground_term_util__hlds__from_ground_term_util__field_types_maybe_kept_goal_info_0_0,
  hlds__from_ground_term_util__hlds__from_ground_term_util__field_names_maybe_kept_goal_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc hlds__from_ground_term_util__hlds__from_ground_term_util__du_functor_desc_maybe_kept_goal_info_0_1 = {
  (MR_String) "broken_no_gi",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__from_ground_term_util__hlds__from_ground_term_util__du_stag_ordered_maybe_kept_goal_info_0_0[1] = {
  &hlds__from_ground_term_util__hlds__from_ground_term_util__du_functor_desc_maybe_kept_goal_info_0_1
};

static const MR_DuFunctorDescPtr hlds__from_ground_term_util__hlds__from_ground_term_util__du_stag_ordered_maybe_kept_goal_info_0_1[1] = {
  &hlds__from_ground_term_util__hlds__from_ground_term_util__du_functor_desc_maybe_kept_goal_info_0_0
};

static const MR_DuPtagLayout hlds__from_ground_term_util__hlds__from_ground_term_util__du_ptag_ordered_maybe_kept_goal_info_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    hlds__from_ground_term_util__hlds__from_ground_term_util__du_stag_ordered_maybe_kept_goal_info_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__from_ground_term_util__hlds__from_ground_term_util__du_stag_ordered_maybe_kept_goal_info_0_1,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr hlds__from_ground_term_util__hlds__from_ground_term_util__du_name_ordered_maybe_kept_goal_info_0[2] = {
  &hlds__from_ground_term_util__hlds__from_ground_term_util__du_functor_desc_maybe_kept_goal_info_0_1,
  &hlds__from_ground_term_util__hlds__from_ground_term_util__du_functor_desc_maybe_kept_goal_info_0_0
};

static const MR_Integer hlds__from_ground_term_util__hlds__from_ground_term_util__functor_number_map_maybe_kept_goal_info_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__from_ground_term_util__hlds__from_ground_term_util__type_ctor_info_maybe_kept_goal_info_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__from_ground_term_util____Unify____maybe_kept_goal_info_0_0_10001)),
  ((MR_Box) (hlds__from_ground_term_util____Compare____maybe_kept_goal_info_0_0_10001)),
  (MR_String) "hlds.from_ground_term_util",
  (MR_String) "maybe_kept_goal_info",
  {     hlds__from_ground_term_util__hlds__from_ground_term_util__du_name_ordered_maybe_kept_goal_info_0 },
  {     hlds__from_ground_term_util__hlds__from_ground_term_util__du_ptag_ordered_maybe_kept_goal_info_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  hlds__from_ground_term_util__hlds__from_ground_term_util__functor_number_map_maybe_kept_goal_info_0
};

static void MR_CALL 
hlds__from_ground_term_util____Compare____maybe_kept_goal_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_13 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_14 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_13 == CastY_14);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer Var_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word SubResult1_6;

        succeeded = (Var_18 < ArgY1_5);
        if (succeeded)
        {
          SubResult1_6 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (Var_18 > ArgY1_5);
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
          hlds__hlds_goal____Compare____hlds_goal_info_0_0(HeadVar__1_1, Var_17, ArgY2_8);
      }
    }
  }
}

static MR_bool MR_CALL 
hlds__from_ground_term_util____Unify____maybe_kept_goal_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
      MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

      succeeded = (CastY_8 == CastX_7);
    }
    else
    {
      MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Integer ArgY1_4;
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgY1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        succeeded = (ArgX1_3 == ArgY1_4);
        if (succeeded)
          succeeded = hlds__hlds_goal____Unify____hlds_goal_info_0_0(ArgX2_5, ArgY2_6);
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
hlds__from_ground_term_util____Compare____maybe_kept_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
}

static MR_bool MR_CALL 
hlds__from_ground_term_util____Unify____maybe_kept_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
hlds__from_ground_term_util____Compare____goal_order_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
}

MR_bool MR_CALL 
hlds__from_ground_term_util____Unify____goal_order_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
hlds__from_ground_term_util____Compare____fgt_marked_goal_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_32 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_33 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_32 == CastY_33);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
    {
      MR_Word Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
      {
        MR_Word ArgY1_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word ArgY2_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word ArgY3_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 2))));
        MR_Word SubResult1_26;

        hlds__hlds_goal____Compare____hlds_goal_0_0(&SubResult1_26, Var_42, ArgY1_25);
        succeeded = (SubResult1_26 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult1_26;
        else
        {
          MR_Word SubResult2_29;

          mercury__builtin__compare_3_p_0((MR_Word) (&hlds__from_ground_term_util_scalar_common_1[0]), &SubResult2_29, ((MR_Box) (Var_41)), ((MR_Box) (ArgY2_28)));
          succeeded = (SubResult2_29 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult2_29;
          else
            mercury__builtin__compare_3_p_0((MR_Word) (&hlds__from_ground_term_util_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (Var_40)), ((MR_Box) (ArgY3_31)));
        }
      }
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    }
    else
    {
      MR_Word Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
        MR_Word SubResult1_6;

        hlds__hlds_goal____Compare____hlds_goal_0_0(&SubResult1_6, Var_45, ArgY1_5);
        succeeded = (SubResult1_6 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult1_6;
        else
        {
          MR_Word SubResult2_9;

          mercury__builtin__compare_3_p_0((MR_Word) (&hlds__from_ground_term_util_scalar_common_1[0]), &SubResult2_9, ((MR_Box) (Var_44)), ((MR_Box) (ArgY2_8)));
          succeeded = (SubResult2_9 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult2_9;
          else
            mercury__builtin__compare_3_p_0((MR_Word) (&hlds__from_ground_term_util_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (Var_43)), ((MR_Box) (ArgY3_11)));
        }
      }
    }
  }
}

MR_bool MR_CALL 
hlds__from_ground_term_util____Unify____fgt_marked_goal_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_15 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_16 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_15 == CastY_16);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
    {
      MR_Word TypeInfo_18_18;
      MR_Word TypeInfo_19_19;
      MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_10;
      MR_Word ArgX2_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_12;
      MR_Word ArgX3_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_14;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
      if (succeeded)
      {
        ArgY1_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        ArgY2_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        ArgY3_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
        succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(ArgX1_9, ArgY1_10);
        if (succeeded)
        {
          TypeInfo_18_18 = (MR_Word) (&hlds__from_ground_term_util_scalar_common_1[0]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (ArgX2_11)), ((MR_Box) (ArgY2_12)));
          if (succeeded)
          {
            TypeInfo_19_19 = (MR_Word) (&hlds__from_ground_term_util_scalar_common_1[2]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_19, ((MR_Box) (ArgX3_13)), ((MR_Box) (ArgY3_14)));
          }
        }
      }
    }
    else
    {
      MR_Word TypeInfo_21_21;
      MR_Word TypeInfo_22_22;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4;
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6;
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
      if (succeeded)
      {
        ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
        ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
        ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
        succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(ArgX1_3, ArgY1_4);
        if (succeeded)
        {
          TypeInfo_21_21 = (MR_Word) (&hlds__from_ground_term_util_scalar_common_1[0]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_21_21, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
          if (succeeded)
          {
            TypeInfo_22_22 = (MR_Word) (&hlds__from_ground_term_util_scalar_common_1[2]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_22_22, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
          }
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
hlds__from_ground_term_util____Compare____fgt_invariants_status_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
}

MR_bool MR_CALL 
hlds__from_ground_term_util____Unify____fgt_invariants_status_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
hlds__from_ground_term_util____Compare____fgt_build_info_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__from_ground_term_util_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
hlds__from_ground_term_util____Unify____fgt_build_info_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__from_ground_term_util_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
hlds__from_ground_term_util____Compare____fgt_build_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_6;
      MR_Integer CastX_22 = (MR_Integer) (ArgX1_4);
      MR_Integer CastY_23 = (MR_Integer) (ArgY1_5);

      succeeded = (CastX_22 == CastY_23);
      if (succeeded)
      {
        succeeded = MR_TRUE;
        succeeded = !(succeeded);
        if (succeeded)
        {
          SubResult1_6 = (MR_Integer) 0;
          succeeded = MR_TRUE;
        }
      }
      else
      if ((ArgX1_4 == (MR_Word) ((MR_Unsigned) 0U)))
        if ((ArgY1_5 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          succeeded = MR_TRUE;
          succeeded = !(succeeded);
          if (succeeded)
          {
            SubResult1_6 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
        }
        else
        {
          SubResult1_6 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
      else
      {
        MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgX1_4, (MR_Integer) 1))));
        MR_Integer Var_27 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), ArgX1_4, (MR_Integer) 0))));

        if ((ArgY1_5 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          SubResult1_6 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Integer ArgY1_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), ArgY1_5, (MR_Integer) 0))));
          MR_Word ArgY2_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgY1_5, (MR_Integer) 1))));
          MR_Word SubResult1_15;

          succeeded = (Var_27 < ArgY1_14);
          if (succeeded)
          {
            SubResult1_15 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (Var_27 > ArgY1_14);
            if (succeeded)
            {
              SubResult1_15 = (MR_Integer) 2;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = MR_TRUE;
              succeeded = !(succeeded);
              if (succeeded)
              {
                SubResult1_15 = (MR_Integer) 0;
                succeeded = MR_TRUE;
              }
            }
          }
          if (succeeded)
          {
            SubResult1_6 = SubResult1_15;
            succeeded = (SubResult1_6 != (MR_Integer) 0);
          }
          else
          {
            hlds__hlds_goal____Compare____hlds_goal_info_0_0(&SubResult1_6, Var_26, ArgY2_17);
            succeeded = (SubResult1_6 != (MR_Integer) 0);
          }
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__from_ground_term_util_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
    }
  }
}

MR_bool MR_CALL 
hlds__from_ground_term_util____Unify____fgt_build_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer CastX_16 = (MR_Integer) (ArgX1_3);
      MR_Integer CastY_17 = (MR_Integer) (ArgY1_4);

      succeeded = (CastX_16 == CastY_17);
      if (succeeded)
        succeeded = MR_TRUE;
      else
      if ((ArgX1_3 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Integer CastX_14 = (MR_Integer) (ArgX1_3);
        MR_Integer CastY_15 = (MR_Integer) (ArgY1_4);

        succeeded = (CastY_15 == CastX_14);
      }
      else
      {
        MR_Integer ArgX1_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), ArgX1_3, (MR_Integer) 0))));
        MR_Integer ArgY1_11;
        MR_Word ArgX2_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgX1_3, (MR_Integer) 1))));
        MR_Word ArgY2_13;

        succeeded = (ArgY1_4 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ArgY1_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), ArgY1_4, (MR_Integer) 0))));
          ArgY2_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgY1_4, (MR_Integer) 1))));
          succeeded = (ArgX1_10 == ArgY1_11);
          if (succeeded)
            succeeded = hlds__hlds_goal____Unify____hlds_goal_info_0_0(ArgX2_12, ArgY2_13);
        }
      }
      if (succeeded)
      {
        TypeInfo_9_9 = (MR_Word) (&hlds__from_ground_term_util_scalar_common_1[1]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
hlds__from_ground_term_util__project_build_info_goal_cord_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * GoalCord_4)
{
  *GoalCord_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
}

static void MR_CALL 
hlds__from_ground_term_util__introduce_partial_fgt_scopes_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_GoalCord_4;

    hlds__from_ground_term_util__project_build_info_goal_cord_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_GoalCord_4);
    *wrapper_arg_2 = ((MR_Box) (conv0_GoalCord_4));
  }
}

void MR_CALL 
hlds__from_ground_term_util__introduce_partial_fgt_scopes_5_p_0(
  MR_Word GoalInfo0_6,
  MR_Word SubGoalInfo0_7,
  MR_Word RevMarkedSubGoals_8,
  MR_Word Order_9,
  MR_Word * SubGoal_10)
{
  {
    MR_bool succeeded;
    MR_Word BuildInfoMap_11;
    MR_Word BuildInfos_12;
    MR_Word BuildGoalCords_13;
    MR_Word BuildGoalCord_14;
    MR_Word BuildGoals_15;
    MR_Word SubGoal1_16;
    MR_Word Var_21;

    Var_21 = mercury__map__init_0_f_0((MR_Word) (&hlds__from_ground_term_util_scalar_common_1[0]), (MR_Word) (&hlds__from_ground_term_util__hlds__from_ground_term_util__type_ctor_info_fgt_build_info_0));
    hlds__from_ground_term_util__introduce_partial_fgt_scopes_loop_4_p_0(RevMarkedSubGoals_8, Order_9, Var_21, &BuildInfoMap_11);
    mercury__map__values_2_p_0((MR_Word) (&hlds__from_ground_term_util_scalar_common_1[0]), (MR_Word) (&hlds__from_ground_term_util__hlds__from_ground_term_util__type_ctor_info_fgt_build_info_0), BuildInfoMap_11, &BuildInfos_12);
    mercury__list__map_3_p_0((MR_Word) (&hlds__from_ground_term_util__hlds__from_ground_term_util__type_ctor_info_fgt_build_info_0), (MR_Word) (&hlds__from_ground_term_util_scalar_common_1[1]), (MR_Word) (&hlds__from_ground_term_util_scalar_common_2[1]), BuildInfos_12, &BuildGoalCords_13);
    BuildGoalCord_14 = mercury__cord__cord_list_to_cord_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), BuildGoalCords_13);
    BuildGoals_15 = mercury__cord__list_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), BuildGoalCord_14);
    if ((BuildGoals_15 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.from_ground_term_util.introduce_partial_fgt_scopes\'/5", (MR_String) "BuildGoals = []");
        return;
      }
    else
    {
      MR_Word Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BuildGoals_15, (MR_Integer) 1))));
      MR_Word Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BuildGoals_15, (MR_Integer) 0))));

      if ((Var_39 == (MR_Word) ((MR_Unsigned) 0U)))
        SubGoal1_16 = Var_40;
      else
      {
        MR_Word SubGoalExpr1_20;

        {
          SubGoalExpr1_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), SubGoalExpr1_20, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(MR_mktag(3), SubGoalExpr1_20, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), SubGoalExpr1_20, 2) = ((MR_Box) (BuildGoals_15));
        }
        {
          SubGoal1_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), SubGoal1_16, 0) = ((MR_Box) (SubGoalExpr1_20));
          MR_hl_field(MR_mktag(0), SubGoal1_16, 1) = ((MR_Box) (SubGoalInfo0_7));
        }
      }
    }
    succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(GoalInfo0_6, (MR_Integer) 1);
    if (succeeded)
      hlds__goal_util__attach_features_to_all_goals_4_p_0((MR_Word) (MR_mkword(MR_mktag(1), &hlds__from_ground_term_util_scalar_common_1[3])), (MR_Integer) 0, SubGoal1_16, SubGoal_10);
    else
      *SubGoal_10 = SubGoal1_16;
  }
}

static void MR_CALL 
hlds__from_ground_term_util__introduce_partial_fgt_scopes_loop_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_BuildInfoMap_0_3,
  MR_Word * STATE_VARIABLE_BuildInfoMap_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_BuildInfoMap_4 = STATE_VARIABLE_BuildInfoMap_0_3;
    else
    {
      MR_Word RevMarkedGoal_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word RevMarkedGoals_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Goal_13;
      MR_Word Var_14;
      MR_Word ArgsGoalCord_20;
      MR_Word KeptGI_24;
      MR_Word GoalCord_25;
      MR_Word VarBuildInfo_26;
      MR_Word STATE_VARIABLE_BuildInfoMap_37_37;
      MR_Word STATE_VARIABLE_BuildInfoMap_39_39;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_BuildInfoMap_0_3;

      if (((MR_tag((MR_Word) RevMarkedGoal_9)) == (MR_Integer) 1))
      {
        MR_Word Var_29;
        MR_Word ArgVars_41;

        Goal_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RevMarkedGoal_9, (MR_Integer) 0))));
        Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RevMarkedGoal_9, (MR_Integer) 1))));
        ArgVars_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RevMarkedGoal_9, (MR_Integer) 2))));
        Var_29 = mercury__cord__init_0_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0));
        hlds__from_ground_term_util__lookup_and_remove_arg_vars_insert_fgt_6_p_0(ArgVars_41, HeadVar__2_2, Var_29, &ArgsGoalCord_20, STATE_VARIABLE_BuildInfoMap_0_3, &STATE_VARIABLE_BuildInfoMap_37_37);
        KeptGI_24 = (MR_Word) ((MR_Unsigned) 0U);
      }
      else
      {
        MR_Word ArgVars_15;
        MR_Word ArgsGoalCord0_17;
        MR_Word Kept_18;
        MR_Integer TotalArgSize_19;
        MR_Word Var_31;
        MR_Word STATE_VARIABLE_BuildInfoMap_34_34;

        Goal_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RevMarkedGoal_9, (MR_Integer) 0))));
        Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RevMarkedGoal_9, (MR_Integer) 1))));
        ArgVars_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RevMarkedGoal_9, (MR_Integer) 2))));
        Var_31 = mercury__cord__init_0_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0));
        hlds__from_ground_term_util__lookup_and_remove_arg_vars_9_p_0(ArgVars_15, Var_31, &ArgsGoalCord0_17, (MR_Integer) 0, &Kept_18, (MR_Integer) 0, &TotalArgSize_19, STATE_VARIABLE_BuildInfoMap_0_3, &STATE_VARIABLE_BuildInfoMap_34_34);
        switch (Kept_18) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word Var_36;

              Var_36 = mercury__cord__init_0_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0));
              hlds__from_ground_term_util__lookup_and_remove_arg_vars_insert_fgt_6_p_0(ArgVars_15, HeadVar__2_2, Var_36, &ArgsGoalCord_20, STATE_VARIABLE_BuildInfoMap_0_3, &STATE_VARIABLE_BuildInfoMap_37_37);
              KeptGI_24 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word OldGoalInfo_22;
              MR_Integer TotalSize_23;

              ArgsGoalCord_20 = ArgsGoalCord0_17;
              OldGoalInfo_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_13, (MR_Integer) 1))));
              TotalSize_23 = (MR_Integer) ((MR_Unsigned) TotalArgSize_19 + (MR_Unsigned) 1);
              {
                KeptGI_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), KeptGI_24, 0) = ((MR_Box) (TotalSize_23));
                MR_hl_field(MR_mktag(1), KeptGI_24, 1) = ((MR_Box) (OldGoalInfo_22));
              }
              STATE_VARIABLE_BuildInfoMap_37_37 = STATE_VARIABLE_BuildInfoMap_34_34;
            }
            break;
        }
      }
      switch (HeadVar__2_2) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          GoalCord_25 = mercury__cord__snoc_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ArgsGoalCord_20, ((MR_Box) (Goal_13)));
          break;
        case (MR_Integer) 1:
          GoalCord_25 = mercury__cord__cons_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ((MR_Box) (Goal_13)), ArgsGoalCord_20);
          break;
      }
      {
        VarBuildInfo_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), VarBuildInfo_26, 0) = ((MR_Box) (KeptGI_24));
        MR_hl_field(MR_mktag(0), VarBuildInfo_26, 1) = ((MR_Box) (GoalCord_25));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&hlds__from_ground_term_util_scalar_common_1[0]), (MR_Word) (&hlds__from_ground_term_util__hlds__from_ground_term_util__type_ctor_info_fgt_build_info_0), ((MR_Box) (Var_14)), ((MR_Box) (VarBuildInfo_26)), STATE_VARIABLE_BuildInfoMap_37_37, &STATE_VARIABLE_BuildInfoMap_39_39);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = RevMarkedGoals_10;
      next_value_of_STATE_VARIABLE_BuildInfoMap_0_3 = STATE_VARIABLE_BuildInfoMap_39_39;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_BuildInfoMap_0_3 = next_value_of_STATE_VARIABLE_BuildInfoMap_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__from_ground_term_util__lookup_and_remove_arg_vars_insert_fgt_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_GoalCord_0_3,
  MR_Word * STATE_VARIABLE_GoalCord_4,
  MR_Word STATE_VARIABLE_BuildInfoMap_0_5,
  MR_Word * STATE_VARIABLE_BuildInfoMap_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_BuildInfoMap_6 = STATE_VARIABLE_BuildInfoMap_0_5;
      *STATE_VARIABLE_GoalCord_4 = STATE_VARIABLE_GoalCord_0_3;
    }
    else
    {
      MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Vars_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word BuildInfo_19;
      MR_Word VarKept_20;
      MR_Word VarGoalCord0_21;
      MR_Word VarGoalCord_34;
      MR_Word STATE_VARIABLE_BuildInfoMap_39_39;
      MR_Word STATE_VARIABLE_GoalCord_44_44;
      MR_Box conv0_BuildInfo_19;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_GoalCord_0_3;
      MR_Word next_value_of_STATE_VARIABLE_BuildInfoMap_0_5;

      mercury__map__det_remove_4_p_0((MR_Word) (&hlds__from_ground_term_util_scalar_common_1[0]), (MR_Word) (&hlds__from_ground_term_util__hlds__from_ground_term_util__type_ctor_info_fgt_build_info_0), ((MR_Box) (Var_14)), &conv0_BuildInfo_19, STATE_VARIABLE_BuildInfoMap_0_5, &STATE_VARIABLE_BuildInfoMap_39_39);
      BuildInfo_19 = ((MR_Word) (conv0_BuildInfo_19));
      VarKept_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BuildInfo_19, (MR_Integer) 0))));
      VarGoalCord0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BuildInfo_19, (MR_Integer) 1))));
      if ((VarKept_20 == (MR_Word) ((MR_Unsigned) 0U)))
        VarGoalCord_34 = VarGoalCord0_21;
      else
      {
        MR_Integer Size0_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), VarKept_20, (MR_Integer) 0))));
        MR_Word GoalInfo0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), VarKept_20, (MR_Integer) 1))));

        succeeded = mercury__cord__is_empty_1_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), VarGoalCord0_21);
        if (succeeded)
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.from_ground_term_util.lookup_and_remove_arg_vars_insert_fgt\'/6", (MR_String) "VarGoalCord0 is empty");
            return;
          }
        else
        {
          MR_Word MaybeThreshold_24;
          MR_Integer Threshold_25;

          MaybeThreshold_24 = libs__globals__get_maybe_from_ground_term_threshold_0_f_0();
          succeeded = (MaybeThreshold_24 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Threshold_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybeThreshold_24, (MR_Integer) 0))));
            succeeded = (Size0_22 >= Threshold_25);
          }
          if (succeeded)
          {
            MR_Word GoalInfo_26;
            MR_Word VarGoals0_27;
            MR_Word ConjGoalExpr_28;
            MR_Word ConjGoal_29;
            MR_Word Kind_30;
            MR_Word Reason_31;
            MR_Word ScopeGoalExpr_32;
            MR_Word ScopeGoal_33;
            MR_Word Var_42;

            Var_42 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_14);
            hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(Var_42, GoalInfo0_23, &GoalInfo_26);
            VarGoals0_27 = mercury__cord__list_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), VarGoalCord0_21);
            {
              ConjGoalExpr_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ConjGoalExpr_28, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(MR_mktag(3), ConjGoalExpr_28, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), ConjGoalExpr_28, 2) = ((MR_Box) (VarGoals0_27));
            }
            {
              ConjGoal_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ConjGoal_29, 0) = ((MR_Box) (ConjGoalExpr_28));
              MR_hl_field(MR_mktag(0), ConjGoal_29, 1) = ((MR_Box) (GoalInfo_26));
            }
            switch (HeadVar__2_2) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                Kind_30 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                Kind_30 = (MR_Integer) 0;
                break;
            }
            {
              Reason_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Reason_31, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(MR_mktag(3), Reason_31, 1) = ((MR_Box) (Var_14));
              MR_hl_field(MR_mktag(3), Reason_31, 2) = (MR_Box) ((MR_Unsigned) (Kind_30));
            }
            {
              ScopeGoalExpr_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ScopeGoalExpr_32, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), ScopeGoalExpr_32, 1) = ((MR_Box) (Reason_31));
              MR_hl_field(MR_mktag(3), ScopeGoalExpr_32, 2) = ((MR_Box) (ConjGoal_29));
            }
            {
              ScopeGoal_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ScopeGoal_33, 0) = ((MR_Box) (ScopeGoalExpr_32));
              MR_hl_field(MR_mktag(0), ScopeGoal_33, 1) = ((MR_Box) (GoalInfo_26));
            }
            VarGoalCord_34 = mercury__cord__singleton_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ((MR_Box) (ScopeGoal_33)));
          }
          else
            VarGoalCord_34 = VarGoalCord0_21;
        }
      }
      STATE_VARIABLE_GoalCord_44_44 = mercury__cord__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), STATE_VARIABLE_GoalCord_0_3, VarGoalCord_34);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Vars_15;
      next_value_of_STATE_VARIABLE_GoalCord_0_3 = STATE_VARIABLE_GoalCord_44_44;
      next_value_of_STATE_VARIABLE_BuildInfoMap_0_5 = STATE_VARIABLE_BuildInfoMap_39_39;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_GoalCord_0_3 = next_value_of_STATE_VARIABLE_GoalCord_0_3;
      STATE_VARIABLE_BuildInfoMap_0_5 = next_value_of_STATE_VARIABLE_BuildInfoMap_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__from_ground_term_util__lookup_and_remove_arg_vars_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_GoalCord_0_2,
  MR_Word * STATE_VARIABLE_GoalCord_3,
  MR_Word STATE_VARIABLE_Kept_0_4,
  MR_Word * STATE_VARIABLE_Kept_5,
  MR_Integer STATE_VARIABLE_TotalSize_0_6,
  MR_Integer * STATE_VARIABLE_TotalSize_7,
  MR_Word STATE_VARIABLE_BuildInfoMap_0_8,
  MR_Word * STATE_VARIABLE_BuildInfoMap_9)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_BuildInfoMap_9 = STATE_VARIABLE_BuildInfoMap_0_8;
      *STATE_VARIABLE_TotalSize_7 = STATE_VARIABLE_TotalSize_0_6;
      *STATE_VARIABLE_Kept_5 = STATE_VARIABLE_Kept_0_4;
      *STATE_VARIABLE_GoalCord_3 = STATE_VARIABLE_GoalCord_0_2;
    }
    else
    {
      MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Vars_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word BuildInfo_28;
      MR_Word VarKept_29;
      MR_Word VarGoalCord_30;
      MR_Word STATE_VARIABLE_BuildInfoMap_41_41;
      MR_Word STATE_VARIABLE_Kept_42_42;
      MR_Integer STATE_VARIABLE_TotalSize_43_43;
      MR_Word STATE_VARIABLE_GoalCord_44_44;
      MR_Box conv0_BuildInfo_28;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_GoalCord_0_2;
      MR_Word next_value_of_STATE_VARIABLE_Kept_0_4;
      MR_Integer next_value_of_STATE_VARIABLE_TotalSize_0_6;
      MR_Word next_value_of_STATE_VARIABLE_BuildInfoMap_0_8;

      mercury__map__det_remove_4_p_0((MR_Word) (&hlds__from_ground_term_util_scalar_common_1[0]), (MR_Word) (&hlds__from_ground_term_util__hlds__from_ground_term_util__type_ctor_info_fgt_build_info_0), ((MR_Box) (Var_22)), &conv0_BuildInfo_28, STATE_VARIABLE_BuildInfoMap_0_8, &STATE_VARIABLE_BuildInfoMap_41_41);
      BuildInfo_28 = ((MR_Word) (conv0_BuildInfo_28));
      VarKept_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BuildInfo_28, (MR_Integer) 0))));
      VarGoalCord_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BuildInfo_28, (MR_Integer) 1))));
      if ((VarKept_29 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        STATE_VARIABLE_Kept_42_42 = (MR_Integer) 1;
        STATE_VARIABLE_TotalSize_43_43 = STATE_VARIABLE_TotalSize_0_6;
      }
      else
      {
        MR_Integer Size_31 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), VarKept_29, (MR_Integer) 0))));

        STATE_VARIABLE_TotalSize_43_43 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_TotalSize_0_6 + (MR_Unsigned) Size_31);
        STATE_VARIABLE_Kept_42_42 = STATE_VARIABLE_Kept_0_4;
      }
      STATE_VARIABLE_GoalCord_44_44 = mercury__cord__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), STATE_VARIABLE_GoalCord_0_2, VarGoalCord_30);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Vars_23;
      next_value_of_STATE_VARIABLE_GoalCord_0_2 = STATE_VARIABLE_GoalCord_44_44;
      next_value_of_STATE_VARIABLE_Kept_0_4 = STATE_VARIABLE_Kept_42_42;
      next_value_of_STATE_VARIABLE_TotalSize_0_6 = STATE_VARIABLE_TotalSize_43_43;
      next_value_of_STATE_VARIABLE_BuildInfoMap_0_8 = STATE_VARIABLE_BuildInfoMap_41_41;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_GoalCord_0_2 = next_value_of_STATE_VARIABLE_GoalCord_0_2;
      STATE_VARIABLE_Kept_0_4 = next_value_of_STATE_VARIABLE_Kept_0_4;
      STATE_VARIABLE_TotalSize_0_6 = next_value_of_STATE_VARIABLE_TotalSize_0_6;
      STATE_VARIABLE_BuildInfoMap_0_8 = next_value_of_STATE_VARIABLE_BuildInfoMap_0_8;
      continue;
    }
    break;
  }
}

void MR_CALL 
hlds__from_ground_term_util__project_kept_goal_2_p_0(
  MR_Word MarkedGoal_3,
  MR_Word * Goal_4)
{
  if (((MR_tag((MR_Word) MarkedGoal_3)) == (MR_Integer) 1))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.from_ground_term_util.project_kept_goal\'/2", (MR_String) "broken goal");
      return;
    }
  else
    *Goal_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MarkedGoal_3, (MR_Integer) 0))));
}

static MR_bool MR_CALL 
hlds__from_ground_term_util____Unify____fgt_build_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__from_ground_term_util____Unify____fgt_build_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__from_ground_term_util____Compare____fgt_build_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__from_ground_term_util____Compare____fgt_build_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__from_ground_term_util____Unify____fgt_build_info_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__from_ground_term_util____Unify____fgt_build_info_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__from_ground_term_util____Compare____fgt_build_info_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__from_ground_term_util____Compare____fgt_build_info_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__from_ground_term_util____Unify____fgt_invariants_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__from_ground_term_util____Unify____fgt_invariants_status_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__from_ground_term_util____Compare____fgt_invariants_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__from_ground_term_util____Compare____fgt_invariants_status_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__from_ground_term_util____Unify____fgt_marked_goal_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__from_ground_term_util____Unify____fgt_marked_goal_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__from_ground_term_util____Compare____fgt_marked_goal_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__from_ground_term_util____Compare____fgt_marked_goal_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__from_ground_term_util____Unify____goal_order_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__from_ground_term_util____Unify____goal_order_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__from_ground_term_util____Compare____goal_order_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__from_ground_term_util____Compare____goal_order_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__from_ground_term_util____Unify____maybe_kept_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__from_ground_term_util____Unify____maybe_kept_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__from_ground_term_util____Compare____maybe_kept_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__from_ground_term_util____Compare____maybe_kept_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__from_ground_term_util____Unify____maybe_kept_goal_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__from_ground_term_util____Unify____maybe_kept_goal_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__from_ground_term_util____Compare____maybe_kept_goal_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__from_ground_term_util____Compare____maybe_kept_goal_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__hlds__from_ground_term_util__init(void)
{
}

void mercury__hlds__from_ground_term_util__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__from_ground_term_util__hlds__from_ground_term_util__type_ctor_info_fgt_build_info_0);
	MR_register_type_ctor_info(&hlds__from_ground_term_util__hlds__from_ground_term_util__type_ctor_info_fgt_build_info_map_0);
	MR_register_type_ctor_info(&hlds__from_ground_term_util__hlds__from_ground_term_util__type_ctor_info_fgt_invariants_status_0);
	MR_register_type_ctor_info(&hlds__from_ground_term_util__hlds__from_ground_term_util__type_ctor_info_fgt_marked_goal_0);
	MR_register_type_ctor_info(&hlds__from_ground_term_util__hlds__from_ground_term_util__type_ctor_info_goal_order_0);
	MR_register_type_ctor_info(&hlds__from_ground_term_util__hlds__from_ground_term_util__type_ctor_info_maybe_kept_0);
	MR_register_type_ctor_info(&hlds__from_ground_term_util__hlds__from_ground_term_util__type_ctor_info_maybe_kept_goal_info_0);
}

void mercury__hlds__from_ground_term_util__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__from_ground_term_util__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module hlds.from_ground_term_util.
