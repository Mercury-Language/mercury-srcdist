/*
** Automatically generated from `hlds_promise.m'
** by the Mercury compiler,
** version rotd-2025-05-06
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


// :- module hlds.hlds_promise.
// :- implementation.

/*
INIT mercury__hlds__hlds_promise__init
ENDINIT
*/

#include "hlds.hlds_promise.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "cord.mih"
#include "counter.mih"
#include "enum.mih"
#include "hlds.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "multi_map.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "robdd.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "term.mih"
#include "term_context.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "analysis.framework.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.status.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.polyhedron.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




static const MR_FA_TypeInfo_Struct1 hlds__hlds_promise__list__ti_list_1hlds__hlds_promise__type_ctor_info_exclusive_id_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_promise__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_list__ti_list_1hlds__hlds_promise__type_ctor_info_exclusive_id_0;

static const MR_Integer hlds__hlds_promise__hlds__hlds_promise__functor_number_map_assert_id_0[1];

static const MR_NotagFunctorDesc hlds__hlds_promise__hlds__hlds_promise__notag_functor_desc_assert_id_0;

static const MR_FA_TypeInfo_Struct2 hlds__hlds_promise__tree234__ti_tree234_2hlds__hlds_promise__type_ctor_info_assert_id_0hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_PseudoTypeInfo hlds__hlds_promise__hlds__hlds_promise__field_types_assertion_table_0_0[2];

static const MR_DuFunctorDesc hlds__hlds_promise__hlds__hlds_promise__du_functor_desc_assertion_table_0_0;

static const MR_DuFunctorDescPtr hlds__hlds_promise__hlds__hlds_promise__du_stag_ordered_assertion_table_0_0[1];

static const MR_DuPtagLayout hlds__hlds_promise__hlds__hlds_promise__du_ptag_ordered_assertion_table_0[1];

static const MR_DuFunctorDescPtr hlds__hlds_promise__hlds__hlds_promise__du_name_ordered_assertion_table_0[1];

static const MR_Integer hlds__hlds_promise__hlds__hlds_promise__functor_number_map_assertion_table_0[1];

static const MR_Integer hlds__hlds_promise__hlds__hlds_promise__functor_number_map_exclusive_id_0[1];

static const MR_NotagFunctorDesc hlds__hlds_promise__hlds__hlds_promise__notag_functor_desc_exclusive_id_0;

static const MR_FA_TypeInfo_Struct2 hlds__hlds_promise__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0list__ti_list_1hlds__hlds_promise__type_ctor_info_exclusive_id_0;

static const MR_PseudoTypeInfo hlds__hlds_promise__hlds__hlds_promise__field_types_exclusive_table_0_0[2];

static const MR_DuFunctorDesc hlds__hlds_promise__hlds__hlds_promise__du_functor_desc_exclusive_table_0_0;

static const MR_DuFunctorDescPtr hlds__hlds_promise__hlds__hlds_promise__du_stag_ordered_exclusive_table_0_0[1];

static const MR_DuPtagLayout hlds__hlds_promise__hlds__hlds_promise__du_ptag_ordered_exclusive_table_0[1];

static const MR_DuFunctorDescPtr hlds__hlds_promise__hlds__hlds_promise__du_name_ordered_exclusive_table_0[1];

static const MR_Integer hlds__hlds_promise__hlds__hlds_promise__functor_number_map_exclusive_table_0[1];

static void MR_CALL 
hlds__hlds_promise__IntroducedFrom__pred__exclusive_table_add_exclusive__172__1_4_p_0(
  MR_Word ExclusiveId_12,
  MR_Word LambdaHeadVar__1_20,
  MR_Word LambdaHeadVar__2_21,
  MR_Word * LambdaHeadVar__3_22);

static void MR_CALL 
hlds__hlds_promise__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_99_108_117_115_105_118_101_95_116_97_98_108_101_95_97_100_100_95_101_120_99_108_117_115_105_118_101_95_95_91_49_93_95_48_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_promise____Unify____assert_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_promise____Compare____assert_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_promise____Unify____assertion_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_promise____Compare____assertion_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_promise____Unify____exclusive_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_promise____Compare____exclusive_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_promise____Unify____exclusive_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_promise____Compare____exclusive_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__hlds_promise_scalar_common_1[1][2];

static /* final */ const MR_Box hlds__hlds_promise_scalar_common_2[2][3];

static /* final */ const MR_Box hlds__hlds_promise_scalar_common_3[1][7];




static /* final */ const MR_Box hlds__hlds_promise_scalar_common_1[1][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_promise__hlds__hlds_promise__type_ctor_info_exclusive_id_0))
  },
};

static /* final */ const MR_Box hlds__hlds_promise_scalar_common_2[2][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_promise_scalar_common_1[0]))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_promise__hlds__hlds_promise__type_ctor_info_assert_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
};

static /* final */ const MR_Box hlds__hlds_promise_scalar_common_3[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_promise__hlds__hlds_promise__type_ctor_info_exclusive_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_promise__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_list__ti_list_1hlds__hlds_promise__type_ctor_info_exclusive_id_0)),
    ((MR_Box) (&hlds__hlds_promise__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_list__ti_list_1hlds__hlds_promise__type_ctor_info_exclusive_id_0))
  },
};



#include "array.mh"


static const MR_FA_TypeInfo_Struct1 hlds__hlds_promise__list__ti_list_1hlds__hlds_promise__type_ctor_info_exclusive_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&hlds__hlds_promise__hlds__hlds_promise__type_ctor_info_exclusive_id_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_promise__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_list__ti_list_1hlds__hlds_promise__type_ctor_info_exclusive_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_promise__list__ti_list_1hlds__hlds_promise__type_ctor_info_exclusive_id_0)
  }
};

static const MR_Integer hlds__hlds_promise__hlds__hlds_promise__functor_number_map_assert_id_0[1] = { (MR_Integer) 0 };

static const MR_NotagFunctorDesc hlds__hlds_promise__hlds__hlds_promise__notag_functor_desc_assert_id_0 = {
  (MR_String) "assert_id",
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct hlds__hlds_promise__hlds__hlds_promise__type_ctor_info_assert_id_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (hlds__hlds_promise____Unify____assert_id_0_0_10001)),
  ((MR_Box) (hlds__hlds_promise____Compare____assert_id_0_0_10001)),
  (MR_String) "hlds.hlds_promise",
  (MR_String) "assert_id",
  { &hlds__hlds_promise__hlds__hlds_promise__notag_functor_desc_assert_id_0 },
  { &hlds__hlds_promise__hlds__hlds_promise__notag_functor_desc_assert_id_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  hlds__hlds_promise__hlds__hlds_promise__functor_number_map_assert_id_0,

};

static const MR_FA_TypeInfo_Struct2 hlds__hlds_promise__tree234__ti_tree234_2hlds__hlds_promise__type_ctor_info_assert_id_0hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__hlds_promise__hlds__hlds_promise__type_ctor_info_assert_id_0),
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)
  }
};

static const MR_PseudoTypeInfo hlds__hlds_promise__hlds__hlds_promise__field_types_assertion_table_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__counter__counter__type_ctor_info_counter_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_promise__tree234__ti_tree234_2hlds__hlds_promise__type_ctor_info_assert_id_0hlds__hlds_pred__type_ctor_info_pred_id_0)
};

static const MR_DuFunctorDesc hlds__hlds_promise__hlds__hlds_promise__du_functor_desc_assertion_table_0_0 = {
  (MR_String) "assertion_table",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__hlds_promise__hlds__hlds_promise__field_types_assertion_table_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__hlds_promise__hlds__hlds_promise__du_stag_ordered_assertion_table_0_0[1] = { &hlds__hlds_promise__hlds__hlds_promise__du_functor_desc_assertion_table_0_0 };

static const MR_DuPtagLayout hlds__hlds_promise__hlds__hlds_promise__du_ptag_ordered_assertion_table_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__hlds_promise__hlds__hlds_promise__du_stag_ordered_assertion_table_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__hlds_promise__hlds__hlds_promise__du_name_ordered_assertion_table_0[1] = { &hlds__hlds_promise__hlds__hlds_promise__du_functor_desc_assertion_table_0_0 };

static const MR_Integer hlds__hlds_promise__hlds__hlds_promise__functor_number_map_assertion_table_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct hlds__hlds_promise__hlds__hlds_promise__type_ctor_info_assertion_table_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_promise____Unify____assertion_table_0_0_10001)),
  ((MR_Box) (hlds__hlds_promise____Compare____assertion_table_0_0_10001)),
  (MR_String) "hlds.hlds_promise",
  (MR_String) "assertion_table",
  { hlds__hlds_promise__hlds__hlds_promise__du_name_ordered_assertion_table_0 },
  { hlds__hlds_promise__hlds__hlds_promise__du_ptag_ordered_assertion_table_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__hlds_promise__hlds__hlds_promise__functor_number_map_assertion_table_0,

};

static const MR_Integer hlds__hlds_promise__hlds__hlds_promise__functor_number_map_exclusive_id_0[1] = { (MR_Integer) 0 };

static const MR_NotagFunctorDesc hlds__hlds_promise__hlds__hlds_promise__notag_functor_desc_exclusive_id_0 = {
  (MR_String) "exclusive_id",
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct hlds__hlds_promise__hlds__hlds_promise__type_ctor_info_exclusive_id_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (hlds__hlds_promise____Unify____exclusive_id_0_0_10001)),
  ((MR_Box) (hlds__hlds_promise____Compare____exclusive_id_0_0_10001)),
  (MR_String) "hlds.hlds_promise",
  (MR_String) "exclusive_id",
  { &hlds__hlds_promise__hlds__hlds_promise__notag_functor_desc_exclusive_id_0 },
  { &hlds__hlds_promise__hlds__hlds_promise__notag_functor_desc_exclusive_id_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  hlds__hlds_promise__hlds__hlds_promise__functor_number_map_exclusive_id_0,

};

static const MR_FA_TypeInfo_Struct2 hlds__hlds_promise__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0list__ti_list_1hlds__hlds_promise__type_ctor_info_exclusive_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
    (MR_TypeInfo) (&hlds__hlds_promise__list__ti_list_1hlds__hlds_promise__type_ctor_info_exclusive_id_0)
  }
};

static const MR_PseudoTypeInfo hlds__hlds_promise__hlds__hlds_promise__field_types_exclusive_table_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__counter__counter__type_ctor_info_counter_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_promise__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0list__ti_list_1hlds__hlds_promise__type_ctor_info_exclusive_id_0)
};

static const MR_DuFunctorDesc hlds__hlds_promise__hlds__hlds_promise__du_functor_desc_exclusive_table_0_0 = {
  (MR_String) "exclusive_table",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__hlds_promise__hlds__hlds_promise__field_types_exclusive_table_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__hlds_promise__hlds__hlds_promise__du_stag_ordered_exclusive_table_0_0[1] = { &hlds__hlds_promise__hlds__hlds_promise__du_functor_desc_exclusive_table_0_0 };

static const MR_DuPtagLayout hlds__hlds_promise__hlds__hlds_promise__du_ptag_ordered_exclusive_table_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__hlds_promise__hlds__hlds_promise__du_stag_ordered_exclusive_table_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__hlds_promise__hlds__hlds_promise__du_name_ordered_exclusive_table_0[1] = { &hlds__hlds_promise__hlds__hlds_promise__du_functor_desc_exclusive_table_0_0 };

static const MR_Integer hlds__hlds_promise__hlds__hlds_promise__functor_number_map_exclusive_table_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct hlds__hlds_promise__hlds__hlds_promise__type_ctor_info_exclusive_table_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_promise____Unify____exclusive_table_0_0_10001)),
  ((MR_Box) (hlds__hlds_promise____Compare____exclusive_table_0_0_10001)),
  (MR_String) "hlds.hlds_promise",
  (MR_String) "exclusive_table",
  { hlds__hlds_promise__hlds__hlds_promise__du_name_ordered_exclusive_table_0 },
  { hlds__hlds_promise__hlds__hlds_promise__du_ptag_ordered_exclusive_table_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__hlds_promise__hlds__hlds_promise__functor_number_map_exclusive_table_0,

};

static void MR_CALL 
hlds__hlds_promise__IntroducedFrom__pred__exclusive_table_add_exclusive__172__1_4_p_0(
  MR_Word ExclusiveId_12,
  MR_Word LambdaHeadVar__1_20,
  MR_Word LambdaHeadVar__2_21,
  MR_Word * LambdaHeadVar__3_22)
{
  mercury__multi_map__add_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_promise__hlds__hlds_promise__type_ctor_info_exclusive_id_0), ((MR_Box) (LambdaHeadVar__1_20)), ((MR_Box) (ExclusiveId_12)), LambdaHeadVar__2_21, LambdaHeadVar__3_22);
}

void MR_CALL 
hlds__hlds_promise____Compare____exclusive_table_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word SubResult1_6;

    mercury__counter____Compare____counter_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_promise_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

MR_bool MR_CALL 
hlds__hlds_promise____Unify____exclusive_table_0_0(
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
    MR_Word TypeInfo_10_10;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));

    succeeded = mercury__counter____Unify____counter_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_10_10 = (MR_Word) (&hlds__hlds_promise_scalar_common_2[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

void MR_CALL 
hlds__hlds_promise____Compare____exclusive_id_0_0(
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
hlds__hlds_promise____Unify____exclusive_id_0_0(
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
hlds__hlds_promise____Compare____assertion_table_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word SubResult1_6;

    mercury__counter____Compare____counter_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_promise_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

MR_bool MR_CALL 
hlds__hlds_promise____Unify____assertion_table_0_0(
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
    MR_Word TypeInfo_10_10;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));

    succeeded = mercury__counter____Unify____counter_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_10_10 = (MR_Word) (&hlds__hlds_promise_scalar_common_2[1]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

void MR_CALL 
hlds__hlds_promise____Compare____assert_id_0_0(
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
hlds__hlds_promise____Unify____assert_id_0_0(
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
hlds__hlds_promise__exclusive_table_optimize_2_p_0(
  MR_Word STATE_VARIABLE_ExclusiveTable_0_7,
  MR_Word * STATE_VARIABLE_ExclusiveTable_8)
{
  MR_Word Counter_4 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ExclusiveTable_0_7, 0))));
  MR_Word ExclusiveMap0_5 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ExclusiveTable_0_7, 1))));
  MR_Word ExclusiveMap_6;

  mercury__multi_map__optimize_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_promise__hlds__hlds_promise__type_ctor_info_exclusive_id_0), ExclusiveMap0_5, &ExclusiveMap_6);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_ExclusiveTable_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Counter_4));
    MR_hl_field(0, base, 1) = ((MR_Box) (ExclusiveMap_6));
  }
}

void MR_CALL 
hlds__hlds_promise__exclusive_table_lookup_3_p_0(
  MR_Word ExclusiveTable_4,
  MR_Word PredId_5,
  MR_Word * ExclusiveIds_6)
{
  MR_Word ExclusiveMap_8 = ((MR_Word) ((MR_hl_field(0, ExclusiveTable_4, 1))));

  mercury__multi_map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_promise__hlds__hlds_promise__type_ctor_info_exclusive_id_0), ExclusiveMap_8, ((MR_Box) (PredId_5)), ExclusiveIds_6);
}

MR_bool MR_CALL 
hlds__hlds_promise__exclusive_table_search_3_p_0(
  MR_Word ExclusiveTable_4,
  MR_Word PredId_5,
  MR_Word * ExclusiveIds_6)
{
  MR_bool succeeded;
  MR_Word ExclusiveMap_8 = ((MR_Word) ((MR_hl_field(0, ExclusiveTable_4, 1))));

  succeeded = mercury__multi_map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_promise__hlds__hlds_promise__type_ctor_info_exclusive_id_0), ExclusiveMap_8, ((MR_Box) (PredId_5)), ExclusiveIds_6);
  return succeeded;
}

void MR_CALL 
hlds__hlds_promise__exclusive_table_add_exclusive_4_p_0(
  MR_Word _PromisePredId_5,
  MR_Word ExclusivePredIds_6,
  MR_Word STATE_VARIABLE_ExclusiveTable_0_18,
  MR_Word * STATE_VARIABLE_ExclusiveTable_19)
{
  hlds__hlds_promise__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_99_108_117_115_105_118_101_95_116_97_98_108_101_95_97_100_100_95_101_120_99_108_117_115_105_118_101_95_95_91_49_93_95_48_4_p_0(ExclusivePredIds_6, STATE_VARIABLE_ExclusiveTable_0_18, STATE_VARIABLE_ExclusiveTable_19);
}

static void MR_CALL 
hlds__hlds_promise__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_99_108_117_115_105_118_101_95_116_97_98_108_101_95_97_100_100_95_101_120_99_108_117_115_105_118_101_95_95_91_49_93_95_48_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__3_22;

  hlds__hlds_promise__IntroducedFrom__pred__exclusive_table_add_exclusive__172__1_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_LambdaHeadVar__3_22);
  *wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_22));
}

void MR_CALL 
hlds__hlds_promise__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_99_108_117_115_105_118_101_95_116_97_98_108_101_95_97_100_100_95_101_120_99_108_117_115_105_118_101_95_95_91_49_93_95_48_4_p_0(
  MR_Word ExclusivePredIds_6,
  MR_Word STATE_VARIABLE_ExclusiveTable_0_18,
  MR_Word * STATE_VARIABLE_ExclusiveTable_19)
{
  MR_Word Counter0_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ExclusiveTable_0_18, 0))));
  MR_Word ExclusiveMap0_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ExclusiveTable_0_18, 1))));
  MR_Integer ExclusiveIdInt_10;
  MR_Word Counter_11;
  MR_Word ExclusiveId_12;
  MR_Word RecordExclusiveId_13;
  MR_Word ExclusiveMap_17;
  MR_Box conv1_ExclusiveMap_17;

  mercury__counter__allocate_3_p_0(&ExclusiveIdInt_10, Counter0_8, &Counter_11);
  ExclusiveId_12 = (MR_Word) (ExclusiveIdInt_10);
  {
    RecordExclusiveId_13 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, RecordExclusiveId_13, 0) = ((MR_Box) (&hlds__hlds_promise_scalar_common_3[0]));
    MR_hl_field(0, RecordExclusiveId_13, 1) = ((MR_Box) (hlds__hlds_promise__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_99_108_117_115_105_118_101_95_116_97_98_108_101_95_97_100_100_95_101_120_99_108_117_115_105_118_101_95_95_91_49_93_95_48_4_p_0_1));
    MR_hl_field(0, RecordExclusiveId_13, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, RecordExclusiveId_13, 3) = ((MR_Box) (ExclusiveId_12));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_promise_scalar_common_2[0]), RecordExclusiveId_13, ExclusivePredIds_6, ((MR_Box) (ExclusiveMap0_9)), &conv1_ExclusiveMap_17);
  ExclusiveMap_17 = ((MR_Word) (conv1_ExclusiveMap_17));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_ExclusiveTable_19 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Counter_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (ExclusiveMap_17));
  }
}

void MR_CALL 
hlds__hlds_promise__exclusive_table_init_1_p_0(
  MR_Word * ExclusiveTable_2)
{
  MR_Word Counter_3;
  MR_Word ExclusiveMap_4;

  mercury__counter__init_2_p_0((MR_Integer) 0, &Counter_3);
  mercury__multi_map__init_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_promise__hlds__hlds_promise__type_ctor_info_exclusive_id_0), &ExclusiveMap_4);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *ExclusiveTable_2 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Counter_3));
    MR_hl_field(0, base, 1) = ((MR_Box) (ExclusiveMap_4));
  }
}

void MR_CALL 
hlds__hlds_promise__assertion_table_pred_ids_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * PredIds_5)
{
  MR_Word AssertionMap_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));

  mercury__map__values_2_p_0((MR_Word) (&hlds__hlds_promise__hlds__hlds_promise__type_ctor_info_assert_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), AssertionMap_4, PredIds_5);
}

void MR_CALL 
hlds__hlds_promise__assertion_table_lookup_3_p_0(
  MR_Word AssertionTable_4,
  MR_Word AssertId_5,
  MR_Word * AssertionPredId_6)
{
  MR_Word AssertionMap_8 = ((MR_Word) ((MR_hl_field(0, AssertionTable_4, 1))));
  MR_Box conv0_AssertionPredId_6;

  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_promise__hlds__hlds_promise__type_ctor_info_assert_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), AssertionMap_8, ((MR_Box) (AssertId_5)), &conv0_AssertionPredId_6);
  *AssertionPredId_6 = ((MR_Word) (conv0_AssertionPredId_6));
}

void MR_CALL 
hlds__hlds_promise__assertion_table_add_assertion_4_p_0(
  MR_Word AssertionPredId_5,
  MR_Word * AssertId_6,
  MR_Word STATE_VARIABLE_AssertionTable_0_13,
  MR_Word * STATE_VARIABLE_AssertionTable_14)
{
  MR_Word Counter0_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AssertionTable_0_13, 0))));
  MR_Word AssertionMap0_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_AssertionTable_0_13, 1))));
  MR_Integer AssertIdInt_10;
  MR_Word Counter_11;
  MR_Word AssertionMap_12;

  mercury__counter__allocate_3_p_0(&AssertIdInt_10, Counter0_8, &Counter_11);
  *AssertId_6 = (MR_Word) (AssertIdInt_10);
  mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_promise__hlds__hlds_promise__type_ctor_info_assert_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (*AssertId_6)), ((MR_Box) (AssertionPredId_5)), AssertionMap0_9, &AssertionMap_12);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_AssertionTable_14 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Counter_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (AssertionMap_12));
  }
}

void MR_CALL 
hlds__hlds_promise__assertion_table_init_1_p_0(
  MR_Word * AssertionTable_2)
{
  MR_Word Counter_3;
  MR_Word AssertionMap_4;

  mercury__counter__init_2_p_0((MR_Integer) 0, &Counter_3);
  mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_promise__hlds__hlds_promise__type_ctor_info_assert_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), &AssertionMap_4);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *AssertionTable_2 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Counter_3));
    MR_hl_field(0, base, 1) = ((MR_Box) (AssertionMap_4));
  }
}

static MR_bool MR_CALL 
hlds__hlds_promise____Unify____assert_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_promise____Unify____assert_id_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__hlds_promise____Compare____assert_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__hlds_promise____Compare____assert_id_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__hlds_promise____Unify____assertion_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_promise____Unify____assertion_table_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__hlds_promise____Compare____assertion_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__hlds_promise____Compare____assertion_table_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__hlds_promise____Unify____exclusive_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_promise____Unify____exclusive_id_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__hlds_promise____Compare____exclusive_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__hlds_promise____Compare____exclusive_id_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__hlds_promise____Unify____exclusive_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_promise____Unify____exclusive_table_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__hlds_promise____Compare____exclusive_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__hlds_promise____Compare____exclusive_table_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__hlds__hlds_promise__init(void)
{
}

void mercury__hlds__hlds_promise__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&hlds__hlds_promise__hlds__hlds_promise__type_ctor_info_assert_id_0);
  MR_register_type_ctor_info(&hlds__hlds_promise__hlds__hlds_promise__type_ctor_info_assertion_table_0);
  MR_register_type_ctor_info(&hlds__hlds_promise__hlds__hlds_promise__type_ctor_info_exclusive_id_0);
  MR_register_type_ctor_info(&hlds__hlds_promise__hlds__hlds_promise__type_ctor_info_exclusive_table_0);
}

void mercury__hlds__hlds_promise__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__hlds_promise__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module hlds.hlds_promise.
