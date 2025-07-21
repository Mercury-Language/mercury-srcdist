/*
** Automatically generated from `higher_order.higher_order_info.m'
** by the Mercury compiler,
** version rotd-2025-07-21
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


// :- module transform_hlds.higher_order.higher_order_info.
// :- implementation.

/*
INIT mercury__transform_hlds__higher_order__higher_order_info__init
ENDINIT
*/

#include "transform_hlds.higher_order.higher_order_info.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "io.mih"
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
#include "queue.mih"
#include "recompilation.mih"
#include "robdd.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.optimization_options.mih"
#include "libs.polyhedron.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.record_uses.mih"
#include "transform_hlds.higher_order.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "parse_tree.module_qual.mq_info.mih"
#include "transform_hlds.higher_order.higher_order_global_info.mih"




static const MR_FA_TypeInfo_Struct1 transform_hlds__higher_order__higher_order_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__higher_order__higher_order_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__higher_order__higher_order_info__set_ordlist__ti_set_ordlist_1transform_hlds__higher_order__higher_order_global_info__type_ctor_info_ho_request_0;

static const MR_PseudoTypeInfo transform_hlds__higher_order__higher_order_info__transform_hlds__higher_order__higher_order_info__field_types_higher_order_info_0_0[7];

static const MR_ConstString transform_hlds__higher_order__higher_order_info__transform_hlds__higher_order__higher_order_info__field_names_higher_order_info_0_0[7];

static const MR_DuArgLocn transform_hlds__higher_order__higher_order_info__transform_hlds__higher_order__higher_order_info__field_locns_higher_order_info_0_0[7];

static const MR_DuFunctorDesc transform_hlds__higher_order__higher_order_info__transform_hlds__higher_order__higher_order_info__du_functor_desc_higher_order_info_0_0;

static const MR_DuFunctorDescPtr transform_hlds__higher_order__higher_order_info__transform_hlds__higher_order__higher_order_info__du_stag_ordered_higher_order_info_0_0[1];

static const MR_DuPtagLayout transform_hlds__higher_order__higher_order_info__transform_hlds__higher_order__higher_order_info__du_ptag_ordered_higher_order_info_0[1];

static const MR_DuFunctorDescPtr transform_hlds__higher_order__higher_order_info__transform_hlds__higher_order__higher_order_info__du_name_ordered_higher_order_info_0[1];

static const MR_Integer transform_hlds__higher_order__higher_order_info__transform_hlds__higher_order__higher_order_info__functor_number_map_higher_order_info_0[1];

static const MR_EnumFunctorDesc transform_hlds__higher_order__higher_order_info__transform_hlds__higher_order__higher_order_info__enum_functor_desc_ho_changed_0_0;

static const MR_EnumFunctorDesc transform_hlds__higher_order__higher_order_info__transform_hlds__higher_order__higher_order_info__enum_functor_desc_ho_changed_0_1;

static const MR_EnumFunctorDesc transform_hlds__higher_order__higher_order_info__transform_hlds__higher_order__higher_order_info__enum_functor_desc_ho_changed_0_2;

static const MR_EnumFunctorDescPtr transform_hlds__higher_order__higher_order_info__transform_hlds__higher_order__higher_order_info__enum_ordinal_ordered_ho_changed_0[3];

static const MR_EnumFunctorDescPtr transform_hlds__higher_order__higher_order_info__transform_hlds__higher_order__higher_order_info__enum_name_ordered_ho_changed_0[3];

static const MR_Integer transform_hlds__higher_order__higher_order_info__transform_hlds__higher_order__higher_order_info__functor_number_map_ho_changed_0[3];

static MR_bool MR_CALL 
transform_hlds__higher_order__higher_order_info____Unify____higher_order_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__higher_order__higher_order_info____Compare____higher_order_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__higher_order__higher_order_info____Unify____ho_changed_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__higher_order__higher_order_info____Compare____ho_changed_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__higher_order__higher_order_info_scalar_common_1[2][2];

static /* final */ const MR_Box transform_hlds__higher_order__higher_order_info_scalar_common_2[1][3];




static /* final */ const MR_Box transform_hlds__higher_order__higher_order_info_scalar_common_1[2][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_ho_request_0))
  },
};

static /* final */ const MR_Box transform_hlds__higher_order__higher_order_info_scalar_common_2[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__higher_order__higher_order_info_scalar_common_1[0])),
    ((MR_Box) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_TypeInfo_Struct1 transform_hlds__higher_order__higher_order_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__higher_order__higher_order_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&transform_hlds__higher_order__higher_order_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__higher_order__higher_order_info__set_ordlist__ti_set_ordlist_1transform_hlds__higher_order__higher_order_global_info__type_ctor_info_ho_request_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_ho_request_0) }
};

static const MR_PseudoTypeInfo transform_hlds__higher_order__higher_order_info__transform_hlds__higher_order__higher_order_info__field_types_higher_order_info_0_0[7] = {
  (MR_PseudoTypeInfo) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_higher_order_global_info_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0),
  (MR_PseudoTypeInfo) (&transform_hlds__higher_order__higher_order_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0),
  (MR_PseudoTypeInfo) (&transform_hlds__higher_order__higher_order_info__set_ordlist__ti_set_ordlist_1transform_hlds__higher_order__higher_order_global_info__type_ctor_info_ho_request_0),
  (MR_PseudoTypeInfo) (&transform_hlds__higher_order__higher_order_info__transform_hlds__higher_order__higher_order_info__type_ctor_info_ho_changed_0)
};

static const MR_ConstString transform_hlds__higher_order__higher_order_info__transform_hlds__higher_order__higher_order_info__field_names_higher_order_info_0_0[7] = {
  (MR_String) "hoi_global_info",
  (MR_String) "hoi_pred_proc_id",
  (MR_String) "hoi_pred_info",
  (MR_String) "hoi_proc_info",
  (MR_String) "hoi_known_var_map",
  (MR_String) "hoi_requests",
  (MR_String) "hoi_changed"
};

static const MR_DuArgLocn transform_hlds__higher_order__higher_order_info__transform_hlds__higher_order__higher_order_info__field_locns_higher_order_info_0_0[7] = {
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
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 5,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 6,
    (MR_Integer) 0,
    (MR_Integer) 2
  }
};

static const MR_DuFunctorDesc transform_hlds__higher_order__higher_order_info__transform_hlds__higher_order__higher_order_info__du_functor_desc_higher_order_info_0_0 = {
  (MR_String) "higher_order_info",
  INT16_C(7),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__higher_order__higher_order_info__transform_hlds__higher_order__higher_order_info__field_types_higher_order_info_0_0,
  transform_hlds__higher_order__higher_order_info__transform_hlds__higher_order__higher_order_info__field_names_higher_order_info_0_0,
  transform_hlds__higher_order__higher_order_info__transform_hlds__higher_order__higher_order_info__field_locns_higher_order_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__higher_order__higher_order_info__transform_hlds__higher_order__higher_order_info__du_stag_ordered_higher_order_info_0_0[1] = { &transform_hlds__higher_order__higher_order_info__transform_hlds__higher_order__higher_order_info__du_functor_desc_higher_order_info_0_0 };

static const MR_DuPtagLayout transform_hlds__higher_order__higher_order_info__transform_hlds__higher_order__higher_order_info__du_ptag_ordered_higher_order_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__higher_order__higher_order_info__transform_hlds__higher_order__higher_order_info__du_stag_ordered_higher_order_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__higher_order__higher_order_info__transform_hlds__higher_order__higher_order_info__du_name_ordered_higher_order_info_0[1] = { &transform_hlds__higher_order__higher_order_info__transform_hlds__higher_order__higher_order_info__du_functor_desc_higher_order_info_0_0 };

static const MR_Integer transform_hlds__higher_order__higher_order_info__transform_hlds__higher_order__higher_order_info__functor_number_map_higher_order_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct transform_hlds__higher_order__higher_order_info__transform_hlds__higher_order__higher_order_info__type_ctor_info_higher_order_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__higher_order__higher_order_info____Unify____higher_order_info_0_0_10001)),
  ((MR_Box) (transform_hlds__higher_order__higher_order_info____Compare____higher_order_info_0_0_10001)),
  (MR_String) "transform_hlds.higher_order.higher_order_info",
  (MR_String) "higher_order_info",
  { transform_hlds__higher_order__higher_order_info__transform_hlds__higher_order__higher_order_info__du_name_ordered_higher_order_info_0 },
  { transform_hlds__higher_order__higher_order_info__transform_hlds__higher_order__higher_order_info__du_ptag_ordered_higher_order_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__higher_order__higher_order_info__transform_hlds__higher_order__higher_order_info__functor_number_map_higher_order_info_0,

};

static const MR_EnumFunctorDesc transform_hlds__higher_order__higher_order_info__transform_hlds__higher_order__higher_order_info__enum_functor_desc_ho_changed_0_0 = {
  (MR_String) "hoc_changed",
  INT32_C(0)
};

static const MR_EnumFunctorDesc transform_hlds__higher_order__higher_order_info__transform_hlds__higher_order__higher_order_info__enum_functor_desc_ho_changed_0_1 = {
  (MR_String) "hoc_request",
  INT32_C(1)
};

static const MR_EnumFunctorDesc transform_hlds__higher_order__higher_order_info__transform_hlds__higher_order__higher_order_info__enum_functor_desc_ho_changed_0_2 = {
  (MR_String) "hoc_unchanged",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr transform_hlds__higher_order__higher_order_info__transform_hlds__higher_order__higher_order_info__enum_ordinal_ordered_ho_changed_0[3] = {
  &transform_hlds__higher_order__higher_order_info__transform_hlds__higher_order__higher_order_info__enum_functor_desc_ho_changed_0_0,
  &transform_hlds__higher_order__higher_order_info__transform_hlds__higher_order__higher_order_info__enum_functor_desc_ho_changed_0_1,
  &transform_hlds__higher_order__higher_order_info__transform_hlds__higher_order__higher_order_info__enum_functor_desc_ho_changed_0_2
};

static const MR_EnumFunctorDescPtr transform_hlds__higher_order__higher_order_info__transform_hlds__higher_order__higher_order_info__enum_name_ordered_ho_changed_0[3] = {
  &transform_hlds__higher_order__higher_order_info__transform_hlds__higher_order__higher_order_info__enum_functor_desc_ho_changed_0_0,
  &transform_hlds__higher_order__higher_order_info__transform_hlds__higher_order__higher_order_info__enum_functor_desc_ho_changed_0_1,
  &transform_hlds__higher_order__higher_order_info__transform_hlds__higher_order__higher_order_info__enum_functor_desc_ho_changed_0_2
};

static const MR_Integer transform_hlds__higher_order__higher_order_info__transform_hlds__higher_order__higher_order_info__functor_number_map_ho_changed_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct transform_hlds__higher_order__higher_order_info__transform_hlds__higher_order__higher_order_info__type_ctor_info_ho_changed_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__higher_order__higher_order_info____Unify____ho_changed_0_0_10001)),
  ((MR_Box) (transform_hlds__higher_order__higher_order_info____Compare____ho_changed_0_0_10001)),
  (MR_String) "transform_hlds.higher_order.higher_order_info",
  (MR_String) "ho_changed",
  { transform_hlds__higher_order__higher_order_info__transform_hlds__higher_order__higher_order_info__enum_name_ordered_ho_changed_0 },
  { transform_hlds__higher_order__higher_order_info__transform_hlds__higher_order__higher_order_info__enum_ordinal_ordered_ho_changed_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  transform_hlds__higher_order__higher_order_info__transform_hlds__higher_order__higher_order_info__functor_number_map_ho_changed_0,

};

void MR_CALL 
transform_hlds__higher_order__higher_order_info____Compare____ho_changed_0_0(
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
transform_hlds__higher_order__higher_order_info____Unify____ho_changed_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
transform_hlds__higher_order__higher_order_info____Compare____higher_order_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_24 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_25 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_24 == CastY_25);
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
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 4))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 5))));
    MR_Word ArgX7_22 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 6))) & (MR_Integer) 3);
    MR_Word ArgY7_23 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 6))) & (MR_Integer) 3);
    MR_Word SubResult1_6;

    transform_hlds__higher_order__higher_order_global_info____Compare____higher_order_global_info_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      hlds__hlds_pred____Compare____pred_proc_id_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        hlds__hlds_pred____Compare____pred_info_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          hlds__hlds_pred____Compare____proc_info_0_0(&SubResult4_15, ArgX4_13, ArgY4_14);
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__higher_order__higher_order_info_scalar_common_2[0]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__higher_order__higher_order_info_scalar_common_1[1]), &SubResult6_21, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
              {
                MR_Integer Var_33 = (MR_Integer) (ArgX7_22);
                MR_Integer Var_34 = (MR_Integer) (ArgY7_23);

                succeeded = (Var_33 < Var_34);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 1;
                else
                {
                  succeeded = (Var_33 > Var_34);
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
}

MR_bool MR_CALL 
transform_hlds__higher_order__higher_order_info____Unify____higher_order_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_17 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_18 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_17 == CastY_18);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_23_23;
    MR_Word TypeInfo_24_24;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Word ArgX7_15 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 6))) & (MR_Integer) 3);
    MR_Word ArgY7_16 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 6))) & (MR_Integer) 3);

    succeeded = transform_hlds__higher_order__higher_order_global_info____Unify____higher_order_global_info_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        succeeded = hlds__hlds_pred____Unify____pred_info_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
        {
          succeeded = hlds__hlds_pred____Unify____proc_info_0_0(ArgX4_9, ArgY4_10);
          if (succeeded)
          {
            TypeInfo_23_23 = (MR_Word) (&transform_hlds__higher_order__higher_order_info_scalar_common_2[0]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_23_23, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
            if (succeeded)
            {
              TypeInfo_24_24 = (MR_Word) (&transform_hlds__higher_order__higher_order_info_scalar_common_1[1]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_24_24, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
              if (succeeded)
                succeeded = (ArgX7_15 == ArgY7_16);
            }
          }
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
transform_hlds__higher_order__higher_order_info__hoi_add_request_3_p_0(
  MR_Word Request_4,
  MR_Word STATE_VARIABLE_Info_0_9,
  MR_Word * STATE_VARIABLE_Info_10)
{
  MR_Word Requests0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_9, 5))));
  MR_Word Requests_7;
  MR_Word Changed0_8;
  MR_Word STATE_VARIABLE_Info_1_11;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Word Var_24;

  mercury__set__insert_3_p_0((MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_ho_request_0), ((MR_Box) (Request_4)), Requests0_6, &Requests_7);
  Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_9, 0))));
  Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_9, 1))));
  Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_9, 2))));
  Var_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_9, 3))));
  Var_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_9, 4))));
  Changed0_8 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_9, 6))) & (MR_Integer) 3);
  {
    STATE_VARIABLE_Info_1_11 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_Info_1_11, 0) = ((MR_Box) (Var_20));
    MR_hl_field(0, STATE_VARIABLE_Info_1_11, 1) = ((MR_Box) (Var_21));
    MR_hl_field(0, STATE_VARIABLE_Info_1_11, 2) = ((MR_Box) (Var_22));
    MR_hl_field(0, STATE_VARIABLE_Info_1_11, 3) = ((MR_Box) (Var_23));
    MR_hl_field(0, STATE_VARIABLE_Info_1_11, 4) = ((MR_Box) (Var_24));
    MR_hl_field(0, STATE_VARIABLE_Info_1_11, 5) = ((MR_Box) (Requests_7));
    MR_hl_field(0, STATE_VARIABLE_Info_1_11, 6) = (MR_Box) ((MR_Unsigned) (Changed0_8));
  }
  switch (Changed0_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_Info_10 = STATE_VARIABLE_Info_1_11;
      break;
    case (MR_Integer) 1:
      *STATE_VARIABLE_Info_10 = STATE_VARIABLE_Info_1_11;
      break;
    case (MR_Integer) 2:
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Info_10 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_20));
        MR_hl_field(0, base, 1) = ((MR_Box) (Var_21));
        MR_hl_field(0, base, 2) = ((MR_Box) (Var_22));
        MR_hl_field(0, base, 3) = ((MR_Box) (Var_23));
        MR_hl_field(0, base, 4) = ((MR_Box) (Var_24));
        MR_hl_field(0, base, 5) = ((MR_Box) (Requests_7));
        MR_hl_field(0, base, 6) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      }
      break;
  }
}

void MR_CALL 
transform_hlds__higher_order__higher_order_info__hoi_set_changed_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 4))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 5))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = (MR_Box) ((MR_Unsigned) (X_4));
  }
}

void MR_CALL 
transform_hlds__higher_order__higher_order_info__hoi_set_known_var_map_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 3))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 5))));
  MR_Word Var_14 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 6))) & (MR_Integer) 3);

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (X_4));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = (MR_Box) ((MR_Unsigned) (Var_14));
  }
}

void MR_CALL 
transform_hlds__higher_order__higher_order_info__hoi_set_proc_info_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 2))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 4))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 5))));
  MR_Word Var_14 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 6))) & (MR_Integer) 3);

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (X_4));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = (MR_Box) ((MR_Unsigned) (Var_14));
  }
}

void MR_CALL 
transform_hlds__higher_order__higher_order_info__hoi_set_pred_info_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 1))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 4))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 5))));
  MR_Word Var_14 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 6))) & (MR_Integer) 3);

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (X_4));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = (MR_Box) ((MR_Unsigned) (Var_14));
  }
}

void MR_CALL 
transform_hlds__higher_order__higher_order_info__hoi_set_global_info_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 4))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 5))));
  MR_Word Var_14 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 6))) & (MR_Integer) 3);

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (X_4));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = (MR_Box) ((MR_Unsigned) (Var_14));
  }
}

MR_Word MR_CALL 
transform_hlds__higher_order__higher_order_info__hoi_get_changed_1_f_0(
  MR_Word Info_3)
{
  MR_Word X_4 = ((MR_Unsigned) ((MR_hl_field(0, Info_3, 6))) & (MR_Integer) 3);

  return X_4;
}

MR_Word MR_CALL 
transform_hlds__higher_order__higher_order_info__hoi_get_known_var_map_1_f_0(
  MR_Word Info_3)
{
  MR_Word X_4 = ((MR_Word) ((MR_hl_field(0, Info_3, 4))));

  return X_4;
}

MR_Word MR_CALL 
transform_hlds__higher_order__higher_order_info__hoi_get_proc_info_1_f_0(
  MR_Word Info_3)
{
  MR_Word X_4 = ((MR_Word) ((MR_hl_field(0, Info_3, 3))));

  return X_4;
}

MR_Word MR_CALL 
transform_hlds__higher_order__higher_order_info__hoi_get_pred_info_1_f_0(
  MR_Word Info_3)
{
  MR_Word X_4 = ((MR_Word) ((MR_hl_field(0, Info_3, 2))));

  return X_4;
}

MR_Word MR_CALL 
transform_hlds__higher_order__higher_order_info__hoi_get_pred_proc_id_1_f_0(
  MR_Word Info_3)
{
  MR_Word X_4 = ((MR_Word) ((MR_hl_field(0, Info_3, 1))));

  return X_4;
}

MR_Word MR_CALL 
transform_hlds__higher_order__higher_order_info__hoi_get_global_info_1_f_0(
  MR_Word Info_3)
{
  MR_Word X_4 = ((MR_Word) ((MR_hl_field(0, Info_3, 0))));

  return X_4;
}

void MR_CALL 
transform_hlds__higher_order__higher_order_info__hoi_results_5_p_0(
  MR_Word Info_6,
  MR_Word * GlobalInfo_7,
  MR_Word * PredInfo_8,
  MR_Word * ProcInfo_9,
  MR_Word * Requests_10)
{
  *GlobalInfo_7 = ((MR_Word) ((MR_hl_field(0, Info_6, 0))));
  *PredInfo_8 = ((MR_Word) ((MR_hl_field(0, Info_6, 2))));
  *ProcInfo_9 = ((MR_Word) ((MR_hl_field(0, Info_6, 3))));
  *Requests_10 = ((MR_Word) ((MR_hl_field(0, Info_6, 5))));
}

MR_Word MR_CALL 
transform_hlds__higher_order__higher_order_info__hoi_init_3_f_0(
  MR_Word GlobalInfo0_5,
  MR_Word PredId_6,
  MR_Integer ProcId_7)
{
  MR_Word Info_8;
  MR_Word ModuleInfo0_9;
  MR_Word PredInfo0_10;
  MR_Word ProcInfo0_11;
  MR_Word PredProcId_12;
  MR_Word KnownVarMap0_13;
  MR_Word Requests0_14;

  ModuleInfo0_9 = transform_hlds__higher_order__higher_order_global_info__hogi_get_module_info_1_f_0(GlobalInfo0_5);
  hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo0_9, PredId_6, ProcId_7, &PredInfo0_10, &ProcInfo0_11);
  {
    PredProcId_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PredProcId_12, 0) = ((MR_Box) (PredId_6));
    MR_hl_field(0, PredProcId_12, 1) = ((MR_Box) (ProcId_7));
  }
  mercury__map__init_1_p_0((MR_Word) (&transform_hlds__higher_order__higher_order_info_scalar_common_1[0]), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0), &KnownVarMap0_13);
  mercury__set__init_1_p_0((MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_ho_request_0), &Requests0_14);
  {
    Info_8 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Info_8, 0) = ((MR_Box) (GlobalInfo0_5));
    MR_hl_field(0, Info_8, 1) = ((MR_Box) (PredProcId_12));
    MR_hl_field(0, Info_8, 2) = ((MR_Box) (PredInfo0_10));
    MR_hl_field(0, Info_8, 3) = ((MR_Box) (ProcInfo0_11));
    MR_hl_field(0, Info_8, 4) = ((MR_Box) (KnownVarMap0_13));
    MR_hl_field(0, Info_8, 5) = ((MR_Box) (Requests0_14));
    MR_hl_field(0, Info_8, 6) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
  }
  return Info_8;
}

static MR_bool MR_CALL 
transform_hlds__higher_order__higher_order_info____Unify____higher_order_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__higher_order__higher_order_info____Unify____higher_order_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__higher_order__higher_order_info____Compare____higher_order_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__higher_order__higher_order_info____Compare____higher_order_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__higher_order__higher_order_info____Unify____ho_changed_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__higher_order__higher_order_info____Unify____ho_changed_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__higher_order__higher_order_info____Compare____ho_changed_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__higher_order__higher_order_info____Compare____ho_changed_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__transform_hlds__higher_order__higher_order_info__init(void)
{
}

void mercury__transform_hlds__higher_order__higher_order_info__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&transform_hlds__higher_order__higher_order_info__transform_hlds__higher_order__higher_order_info__type_ctor_info_higher_order_info_0);
  MR_register_type_ctor_info(&transform_hlds__higher_order__higher_order_info__transform_hlds__higher_order__higher_order_info__type_ctor_info_ho_changed_0);
}

void mercury__transform_hlds__higher_order__higher_order_info__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__higher_order__higher_order_info__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.higher_order.higher_order_info.
