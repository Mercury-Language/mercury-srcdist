/*
** Automatically generated from `proc_requests.m'
** by the Mercury compiler,
** version rotd-2025-11-25
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


// :- module check_hlds.proc_requests.
// :- implementation.

/*
INIT mercury__check_hlds__proc_requests__init
ENDINIT
*/

#include "check_hlds.proc_requests.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "cord.mih"
#include "digraph.mih"
#include "enum.mih"
#include "hlds.mih"
#include "integer.mih"
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
#include "require.mih"
#include "robdd.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
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
#include "analysis.operations.mih"
#include "check_hlds.clause_to_proc.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_test.mih"
#include "hlds.add_special_pred.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_transform.mih"
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
#include "hlds.inst_test.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.type_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.item_types.mih"
#include "recompilation.record_uses.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_TypeInfo_Struct2 check_hlds__proc_requests__tree234__ti_tree234_2check_hlds__proc_requests__type_ctor_info_unify_proc_id_0builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__proc_requests__queue__ti_queue_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_PseudoTypeInfo check_hlds__proc_requests__check_hlds__proc_requests__field_types_proc_requests_0_0[2];

static const MR_ConstString check_hlds__proc_requests__check_hlds__proc_requests__field_names_proc_requests_0_0[2];

static const MR_DuFunctorDesc check_hlds__proc_requests__check_hlds__proc_requests__du_functor_desc_proc_requests_0_0;

static const MR_DuFunctorDescPtr check_hlds__proc_requests__check_hlds__proc_requests__du_stag_ordered_proc_requests_0_0[1];

static const MR_DuPtagLayout check_hlds__proc_requests__check_hlds__proc_requests__du_ptag_ordered_proc_requests_0[1];

static const MR_DuFunctorDescPtr check_hlds__proc_requests__check_hlds__proc_requests__du_name_ordered_proc_requests_0[1];

static const MR_Integer check_hlds__proc_requests__check_hlds__proc_requests__functor_number_map_proc_requests_0[1];

static const MR_PseudoTypeInfo check_hlds__proc_requests__check_hlds__proc_requests__field_types_unify_proc_id_0_0[2];

static const MR_DuFunctorDesc check_hlds__proc_requests__check_hlds__proc_requests__du_functor_desc_unify_proc_id_0_0;

static const MR_DuFunctorDescPtr check_hlds__proc_requests__check_hlds__proc_requests__du_stag_ordered_unify_proc_id_0_0[1];

static const MR_DuPtagLayout check_hlds__proc_requests__check_hlds__proc_requests__du_ptag_ordered_unify_proc_id_0[1];

static const MR_DuFunctorDescPtr check_hlds__proc_requests__check_hlds__proc_requests__du_name_ordered_unify_proc_id_0[1];

static const MR_Integer check_hlds__proc_requests__check_hlds__proc_requests__functor_number_map_unify_proc_id_0[1];

static void MR_CALL 
check_hlds__proc_requests____Compare____unify_req_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__proc_requests____Unify____unify_req_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
check_hlds__proc_requests____Unify____proc_requests_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__proc_requests____Compare____proc_requests_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__proc_requests____Unify____req_queue_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__proc_requests____Compare____req_queue_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__proc_requests____Unify____unify_proc_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__proc_requests____Compare____unify_proc_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__proc_requests____Unify____unify_req_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__proc_requests____Compare____unify_req_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__proc_requests_scalar_common_1[1][3];

static /* final */ const MR_Box check_hlds__proc_requests_scalar_common_2[1][2];




static /* final */ const MR_Box check_hlds__proc_requests_scalar_common_1[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__proc_requests__check_hlds__proc_requests__type_ctor_info_unify_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0))
  },
};

static /* final */ const MR_Box check_hlds__proc_requests_scalar_common_2[1][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__queue__queue__type_ctor_info_queue_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
};



#include "array.mh"


static const MR_FA_TypeInfo_Struct2 check_hlds__proc_requests__tree234__ti_tree234_2check_hlds__proc_requests__type_ctor_info_unify_proc_id_0builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&check_hlds__proc_requests__check_hlds__proc_requests__type_ctor_info_unify_proc_id_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__proc_requests__queue__ti_queue_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__queue__queue__type_ctor_info_queue_1,
  { (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0) }
};

static const MR_PseudoTypeInfo check_hlds__proc_requests__check_hlds__proc_requests__field_types_proc_requests_0_0[2] = {
  (MR_PseudoTypeInfo) (&check_hlds__proc_requests__tree234__ti_tree234_2check_hlds__proc_requests__type_ctor_info_unify_proc_id_0builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&check_hlds__proc_requests__queue__ti_queue_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0)
};

static const MR_ConstString check_hlds__proc_requests__check_hlds__proc_requests__field_names_proc_requests_0_0[2] = {
  (MR_String) "unify_req_map",
  (MR_String) "req_queue"
};

static const MR_DuFunctorDesc check_hlds__proc_requests__check_hlds__proc_requests__du_functor_desc_proc_requests_0_0 = {
  (MR_String) "proc_requests",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__proc_requests__check_hlds__proc_requests__field_types_proc_requests_0_0,
  check_hlds__proc_requests__check_hlds__proc_requests__field_names_proc_requests_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__proc_requests__check_hlds__proc_requests__du_stag_ordered_proc_requests_0_0[1] = { &check_hlds__proc_requests__check_hlds__proc_requests__du_functor_desc_proc_requests_0_0 };

static const MR_DuPtagLayout check_hlds__proc_requests__check_hlds__proc_requests__du_ptag_ordered_proc_requests_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__proc_requests__check_hlds__proc_requests__du_stag_ordered_proc_requests_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__proc_requests__check_hlds__proc_requests__du_name_ordered_proc_requests_0[1] = { &check_hlds__proc_requests__check_hlds__proc_requests__du_functor_desc_proc_requests_0_0 };

static const MR_Integer check_hlds__proc_requests__check_hlds__proc_requests__functor_number_map_proc_requests_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__proc_requests__check_hlds__proc_requests__type_ctor_info_proc_requests_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__proc_requests____Unify____proc_requests_0_0_10001)),
  ((MR_Box) (check_hlds__proc_requests____Compare____proc_requests_0_0_10001)),
  (MR_String) "check_hlds.proc_requests",
  (MR_String) "proc_requests",
  { check_hlds__proc_requests__check_hlds__proc_requests__du_name_ordered_proc_requests_0 },
  { check_hlds__proc_requests__check_hlds__proc_requests__du_ptag_ordered_proc_requests_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__proc_requests__check_hlds__proc_requests__functor_number_map_proc_requests_0,

};

const MR_TypeCtorInfo_Struct check_hlds__proc_requests__check_hlds__proc_requests__type_ctor_info_req_queue_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__proc_requests____Unify____req_queue_0_0_10001)),
  ((MR_Box) (check_hlds__proc_requests____Compare____req_queue_0_0_10001)),
  (MR_String) "check_hlds.proc_requests",
  (MR_String) "req_queue",
  { NULL },
  { (MR_PseudoTypeInfo) (&check_hlds__proc_requests__queue__ti_queue_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo check_hlds__proc_requests__check_hlds__proc_requests__field_types_unify_proc_id_0_0[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0)
};

static const MR_DuFunctorDesc check_hlds__proc_requests__check_hlds__proc_requests__du_functor_desc_unify_proc_id_0_0 = {
  (MR_String) "unify_proc_id",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__proc_requests__check_hlds__proc_requests__field_types_unify_proc_id_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__proc_requests__check_hlds__proc_requests__du_stag_ordered_unify_proc_id_0_0[1] = { &check_hlds__proc_requests__check_hlds__proc_requests__du_functor_desc_unify_proc_id_0_0 };

static const MR_DuPtagLayout check_hlds__proc_requests__check_hlds__proc_requests__du_ptag_ordered_unify_proc_id_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__proc_requests__check_hlds__proc_requests__du_stag_ordered_unify_proc_id_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__proc_requests__check_hlds__proc_requests__du_name_ordered_unify_proc_id_0[1] = { &check_hlds__proc_requests__check_hlds__proc_requests__du_functor_desc_unify_proc_id_0_0 };

static const MR_Integer check_hlds__proc_requests__check_hlds__proc_requests__functor_number_map_unify_proc_id_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__proc_requests__check_hlds__proc_requests__type_ctor_info_unify_proc_id_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__proc_requests____Unify____unify_proc_id_0_0_10001)),
  ((MR_Box) (check_hlds__proc_requests____Compare____unify_proc_id_0_0_10001)),
  (MR_String) "check_hlds.proc_requests",
  (MR_String) "unify_proc_id",
  { check_hlds__proc_requests__check_hlds__proc_requests__du_name_ordered_unify_proc_id_0 },
  { check_hlds__proc_requests__check_hlds__proc_requests__du_ptag_ordered_unify_proc_id_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__proc_requests__check_hlds__proc_requests__functor_number_map_unify_proc_id_0,

};

const MR_TypeCtorInfo_Struct check_hlds__proc_requests__check_hlds__proc_requests__type_ctor_info_unify_req_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__proc_requests____Unify____unify_req_map_0_0_10001)),
  ((MR_Box) (check_hlds__proc_requests____Compare____unify_req_map_0_0_10001)),
  (MR_String) "check_hlds.proc_requests",
  (MR_String) "unify_req_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&check_hlds__proc_requests__tree234__ti_tree234_2check_hlds__proc_requests__type_ctor_info_unify_proc_id_0builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static void MR_CALL 
check_hlds__proc_requests____Compare____unify_req_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__proc_requests_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
check_hlds__proc_requests____Unify____unify_req_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__proc_requests_scalar_common_1[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
check_hlds__proc_requests____Compare____unify_proc_id_0_0(
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

    parse_tree__prog_data____Compare____type_ctor_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      hlds__hlds_goal____Compare____unify_mode_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

MR_bool MR_CALL 
check_hlds__proc_requests____Unify____unify_proc_id_0_0(
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));

    succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
      succeeded = hlds__hlds_goal____Unify____unify_mode_0_0(ArgX2_5, ArgY2_6);
  }
  return succeeded;
}

void MR_CALL 
check_hlds__proc_requests____Compare____req_queue_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__proc_requests_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
check_hlds__proc_requests____Unify____req_queue_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__proc_requests_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
check_hlds__proc_requests____Compare____proc_requests_0_0(
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

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__proc_requests_scalar_common_1[0]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__proc_requests_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

MR_bool MR_CALL 
check_hlds__proc_requests____Unify____proc_requests_0_0(
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

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__proc_requests_scalar_common_1[0]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_10_10 = (MR_Word) (&check_hlds__proc_requests_scalar_common_2[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

void MR_CALL 
check_hlds__proc_requests__lookup_mode_num_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word TypeCtor_7,
  MR_Word UniMode_8,
  MR_Word Det_9,
  MR_Integer * Num_10)
{
  MR_bool succeeded = (Det_9 == (MR_Integer) 1);
  MR_Integer NumPrime_11;
  MR_Word InitInstX_14 = ((MR_Word) ((MR_hl_field(0, UniMode_8, 0))));
  MR_Word InitInstY_16 = ((MR_Word) ((MR_hl_field(0, UniMode_8, 2))));

  if (succeeded)
  {
    succeeded = hlds__inst_test__inst_is_ground_or_any_2_p_0(ModuleInfo_6, InitInstX_14);
    if (succeeded)
      succeeded = hlds__inst_test__inst_is_ground_or_any_2_p_0(ModuleInfo_6, InitInstY_16);
  }
  if (succeeded)
  {
    hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&NumPrime_11);
    succeeded = MR_TRUE;
  }
  else
  {
    succeeded = (InitInstX_14 == (MR_Word) ((MR_Unsigned) 4U));
    if (succeeded)
    {
      hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&NumPrime_11);
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (InitInstY_16 == (MR_Word) ((MR_Unsigned) 4U));
      if (succeeded)
      {
        hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&NumPrime_11);
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word Requests_18;
        MR_Word UnifyReqMap_19;
        MR_Word Var_20;
        MR_Box conv0_NumPrime_11;

        hlds__hlds_module__module_info_get_proc_requests_2_p_0(ModuleInfo_6, &Requests_18);
        UnifyReqMap_19 = ((MR_Word) ((MR_hl_field(0, Requests_18, 0))));
        {
          Var_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_20, 0) = ((MR_Box) (TypeCtor_7));
          MR_hl_field(0, Var_20, 1) = ((MR_Box) (UniMode_8));
        }
        succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__proc_requests__check_hlds__proc_requests__type_ctor_info_unify_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), UnifyReqMap_19, ((MR_Box) (Var_20)), &conv0_NumPrime_11);
        if (succeeded)
        {
          NumPrime_11 = ((MR_Integer) (conv0_NumPrime_11));
          succeeded = MR_TRUE;
        }
      }
    }
  }
  if (succeeded)
    *Num_10 = NumPrime_11;
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.proc_requests.lookup_mode_num\'/5", (MR_String) "search_num failed");
      return;
    }
}

void MR_CALL 
check_hlds__proc_requests__request_unify_6_p_0(
  MR_Word UnifyId_7,
  MR_Word InstVarSet_8,
  MR_Word Determinism_9,
  MR_Word Context_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_50,
  MR_Word * STATE_VARIABLE_ModuleInfo_51)
{
  MR_bool succeeded;
  MR_Word TypeCtor_12 = ((MR_Word) ((MR_hl_field(0, UnifyId_7, 0))));
  MR_Word UnifyMode_13 = ((MR_Word) ((MR_hl_field(0, UnifyId_7, 1))));
  MR_Word MaybeRecompInfo0_14;
  MR_Word STATE_VARIABLE_ModuleInfo_1_55;

  hlds__hlds_module__module_info_get_maybe_recompilation_info_2_p_0(STATE_VARIABLE_ModuleInfo_0_50, &MaybeRecompInfo0_14);
  if ((MaybeRecompInfo0_14 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_ModuleInfo_1_55 = STATE_VARIABLE_ModuleInfo_0_50;
  else
  {
    MR_Word RecompInfo0_15 = ((MR_Word) ((MR_hl_field(1, MaybeRecompInfo0_14, 0))));
    MR_Word TypeCtorItem_16;
    MR_Word RecompInfo_17;
    MR_Word Var_54;

    TypeCtorItem_16 = recompilation__item_types__type_ctor_to_recomp_item_name_1_f_0(TypeCtor_12);
    recompilation__record_uses__record_used_item_5_p_0((MR_Integer) 1, TypeCtorItem_16, TypeCtorItem_16, RecompInfo0_15, &RecompInfo_17);
    {
      Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_54, 0) = ((MR_Box) (RecompInfo_17));
    }
    hlds__hlds_module__module_info_set_maybe_recompilation_info_3_p_0(Var_54, STATE_VARIABLE_ModuleInfo_0_50, &STATE_VARIABLE_ModuleInfo_1_55);
  }
  {
    MR_Word InitInstX_69 = ((MR_Word) ((MR_hl_field(0, UnifyMode_13, 0))));
    MR_Word InitInstY_71 = ((MR_Word) ((MR_hl_field(0, UnifyMode_13, 2))));

    succeeded = (Determinism_9 == (MR_Integer) 1);
    if (succeeded)
    {
      succeeded = hlds__inst_test__inst_is_ground_or_any_2_p_0(STATE_VARIABLE_ModuleInfo_1_55, InitInstX_69);
      if (succeeded)
        succeeded = hlds__inst_test__inst_is_ground_or_any_2_p_0(STATE_VARIABLE_ModuleInfo_1_55, InitInstY_71);
    }
    if (succeeded)
    {
      MR_Integer Var_18;

      hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&Var_18);
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (InitInstX_69 == (MR_Word) ((MR_Unsigned) 4U));
      if (succeeded)
      {
        MR_Integer Var_82;

        hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&Var_82);
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (InitInstY_71 == (MR_Word) ((MR_Unsigned) 4U));
        if (succeeded)
        {
          MR_Integer Var_83;

          hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&Var_83);
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Word Requests_73;
          MR_Word UnifyReqMap_74;
          MR_Box conv0_Var_84;

          hlds__hlds_module__module_info_get_proc_requests_2_p_0(STATE_VARIABLE_ModuleInfo_1_55, &Requests_73);
          UnifyReqMap_74 = ((MR_Word) ((MR_hl_field(0, Requests_73, 0))));
          succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__proc_requests__check_hlds__proc_requests__type_ctor_info_unify_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), UnifyReqMap_74, ((MR_Box) (UnifyId_7)), &conv0_Var_84);
          if (succeeded)
            succeeded = MR_TRUE;
        }
      }
    }
  }
  if (!(succeeded))
  {
    MR_Word TypeTable_19;
    MR_Word TypeDefn_20;
    MR_Word TypeBody_21;

    hlds__hlds_module__module_info_get_type_table_2_p_0(STATE_VARIABLE_ModuleInfo_1_55, &TypeTable_19);
    succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_19, TypeCtor_12, &TypeDefn_20);
    if (succeeded)
    {
      hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_20, &TypeBody_21);
      {
        MR_Word TypeName_22 = ((MR_Word) ((MR_hl_field(0, TypeCtor_12, 0))));
        MR_Word TypeModuleName_24;
        MR_Word ModuleName_26;

        succeeded = ((MR_tag((MR_Word) TypeName_22)) == (MR_Integer) 1);
        if (succeeded)
        {
          TypeModuleName_24 = ((MR_Word) ((MR_hl_field(1, TypeName_22, 0))));
          hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_ModuleInfo_1_55, &ModuleName_26);
          succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_26, TypeModuleName_24);
          if (succeeded)
            succeeded = ((((MR_tag((MR_Word) TypeBody_21)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, TypeBody_21, 0)))) == (MR_Integer) 1)));
        }
      }
      if (!(succeeded))
        succeeded = hlds__type_util__type_ctor_has_hand_defined_rtti_2_p_0(TypeCtor_12, TypeBody_21);
    }
  }
  if (succeeded)
    *STATE_VARIABLE_ModuleInfo_51 = STATE_VARIABLE_ModuleInfo_1_55;
  else
  {
    MR_Word SpecialPredMaps_28;
    MR_Word UnifyMap_29;
    MR_Word PredId_31;
    MR_Word LHSInit_32;
    MR_Word LHSFinal_33;
    MR_Word RHSInit_34;
    MR_Word RHSFinal_35;
    MR_Word LHSMode_36;
    MR_Word RHSMode_37;
    MR_Word ArgModes0_38;
    MR_Word InMode_39;
    MR_Integer TypeArity_41;
    MR_Word TypeInfoModes_42;
    MR_Word ArgModes_43;
    MR_Integer ProcId_45;
    MR_Word Requests0_46;
    MR_Word UnifyReqMap0_47;
    MR_Word UnifyReqMap_48;
    MR_Word Requests_49;
    MR_Word STATE_VARIABLE_ModuleInfo_2_56;
    MR_Word Var_57;
    MR_Word Var_59;
    MR_Word STATE_VARIABLE_ModuleInfo_3_60;
    MR_Word PredIdPrime_30;
    MR_Box conv1_PredIdPrime_30;
    MR_Word Var_81;

    hlds__hlds_module__module_info_get_special_pred_maps_2_p_0(STATE_VARIABLE_ModuleInfo_1_55, &SpecialPredMaps_28);
    UnifyMap_29 = ((MR_Word) ((MR_hl_field(0, SpecialPredMaps_28, 0))));
    succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), UnifyMap_29, ((MR_Box) (TypeCtor_12)), &conv1_PredIdPrime_30);
    if (succeeded)
    {
      PredIdPrime_30 = ((MR_Word) (conv1_PredIdPrime_30));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      PredId_31 = PredIdPrime_30;
      STATE_VARIABLE_ModuleInfo_2_56 = STATE_VARIABLE_ModuleInfo_1_55;
    }
    else
      hlds__add_special_pred__add_lazily_generated_unify_pred_4_p_0(TypeCtor_12, &PredId_31, STATE_VARIABLE_ModuleInfo_1_55, &STATE_VARIABLE_ModuleInfo_2_56);
    LHSInit_32 = ((MR_Word) ((MR_hl_field(0, UnifyMode_13, 0))));
    LHSFinal_33 = ((MR_Word) ((MR_hl_field(0, UnifyMode_13, 1))));
    RHSInit_34 = ((MR_Word) ((MR_hl_field(0, UnifyMode_13, 2))));
    RHSFinal_35 = ((MR_Word) ((MR_hl_field(0, UnifyMode_13, 3))));
    {
      LHSMode_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, LHSMode_36, 0) = ((MR_Box) (LHSInit_32));
      MR_hl_field(0, LHSMode_36, 1) = ((MR_Box) (LHSFinal_33));
    }
    {
      RHSMode_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, RHSMode_37, 0) = ((MR_Box) (RHSInit_34));
      MR_hl_field(0, RHSMode_37, 1) = ((MR_Box) (RHSFinal_35));
    }
    {
      Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_57, 0) = ((MR_Box) (RHSMode_37));
      MR_hl_field(1, Var_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      ArgModes0_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, ArgModes0_38, 0) = ((MR_Box) (LHSMode_36));
      MR_hl_field(1, ArgModes0_38, 1) = ((MR_Box) (Var_57));
    }
    parse_tree__prog_mode__in_mode_1_p_0(&InMode_39);
    TypeArity_41 = ((MR_Integer) ((MR_hl_field(0, TypeCtor_12, 1))));
    mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), TypeArity_41, ((MR_Box) (InMode_39)), &TypeInfoModes_42);
    ArgModes_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), TypeInfoModes_42, ArgModes0_38);
    {
      Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_59, 0) = ((MR_Box) (Determinism_9));
    }
    check_hlds__proc_requests__request_proc_9_p_0(PredId_31, ArgModes_43, InstVarSet_8, (MR_Word) ((MR_Unsigned) 0U), Var_59, Context_10, &ProcId_45, STATE_VARIABLE_ModuleInfo_2_56, &STATE_VARIABLE_ModuleInfo_3_60);
    hlds__hlds_module__module_info_get_proc_requests_2_p_0(STATE_VARIABLE_ModuleInfo_3_60, &Requests0_46);
    UnifyReqMap0_47 = ((MR_Word) ((MR_hl_field(0, Requests0_46, 0))));
    mercury__map__set_4_p_0((MR_Word) (&check_hlds__proc_requests__check_hlds__proc_requests__type_ctor_info_unify_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), ((MR_Box) (UnifyId_7)), ((MR_Box) (ProcId_45)), UnifyReqMap0_47, &UnifyReqMap_48);
    Var_81 = ((MR_Word) ((MR_hl_field(0, Requests0_46, 1))));
    {
      Requests_49 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Requests_49, 0) = ((MR_Box) (UnifyReqMap_48));
      MR_hl_field(0, Requests_49, 1) = ((MR_Box) (Var_81));
    }
    hlds__hlds_module__module_info_set_proc_requests_3_p_0(Requests_49, STATE_VARIABLE_ModuleInfo_3_60, STATE_VARIABLE_ModuleInfo_51);
  }
}

void MR_CALL 
check_hlds__proc_requests__request_proc_9_p_0(
  MR_Word PredId_10,
  MR_Word ArgModes_11,
  MR_Word InstVarSet_12,
  MR_Word ArgLives_13,
  MR_Word MaybeDet_14,
  MR_Word Context_15,
  MR_Integer * ProcId_16,
  MR_Word STATE_VARIABLE_ModuleInfo_0_31,
  MR_Word * STATE_VARIABLE_ModuleInfo_32)
{
  MR_bool succeeded;
  MR_Word Origin_24;
  MR_Word ArgTypes_25;
  MR_Word Requests0_27;
  MR_Word ReqQueue0_28;
  MR_Word ReqQueue_29;
  MR_Word Requests_30;
  MR_Word STATE_VARIABLE_PredInfo_1_33;
  MR_Word STATE_VARIABLE_PredInfo_2_36;
  MR_Word STATE_VARIABLE_ProcInfo_1_37;
  MR_Word STATE_VARIABLE_ProcInfo_2_39;
  MR_Word STATE_VARIABLE_ProcInfo_3_40;
  MR_Word STATE_VARIABLE_Goal_1_41;
  MR_Word STATE_VARIABLE_Goal_2_42;
  MR_Word STATE_VARIABLE_Goal_3_46;
  MR_Word STATE_VARIABLE_ProcInfo_4_47;
  MR_Word STATE_VARIABLE_PredInfo_3_48;
  MR_Word STATE_VARIABLE_ModuleInfo_1_49;
  MR_Word Var_50;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word Var_53;

  hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_31, PredId_10, &STATE_VARIABLE_PredInfo_1_33);
  hlds__hlds_pred__add_new_proc_14_p_0(STATE_VARIABLE_ModuleInfo_0_31, Context_15, (MR_Word) ((MR_Unsigned) 0U), InstVarSet_12, ArgModes_11, (MR_Word) ((MR_Unsigned) 0U), ArgLives_13, (MR_Integer) 1, MaybeDet_14, (MR_Integer) 1, (MR_Integer) 1, STATE_VARIABLE_PredInfo_1_33, &STATE_VARIABLE_PredInfo_2_36, ProcId_16);
  hlds__hlds_pred__pred_info_proc_info_3_p_0(STATE_VARIABLE_PredInfo_2_36, *ProcId_16, &STATE_VARIABLE_ProcInfo_1_37);
  hlds__hlds_pred__proc_info_set_can_process_3_p_0((MR_Integer) 0, STATE_VARIABLE_ProcInfo_1_37, &STATE_VARIABLE_ProcInfo_2_39);
  check_hlds__clause_to_proc__copy_clauses_to_proc_in_proc_info_4_p_0(STATE_VARIABLE_PredInfo_2_36, *ProcId_16, STATE_VARIABLE_ProcInfo_2_39, &STATE_VARIABLE_ProcInfo_3_40);
  hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_3_40, &STATE_VARIABLE_Goal_1_41);
  hlds__hlds_goal__set_goal_contexts_3_p_0(Context_15, STATE_VARIABLE_Goal_1_41, &STATE_VARIABLE_Goal_2_42);
  hlds__hlds_pred__pred_info_get_origin_2_p_0(STATE_VARIABLE_PredInfo_2_36, &Origin_24);
  hlds__hlds_pred__pred_info_get_arg_types_2_p_0(STATE_VARIABLE_PredInfo_2_36, &ArgTypes_25);
  succeeded = ((MR_tag((MR_Word) Origin_24)) == (MR_Integer) 1);
  if (succeeded)
  {
    Var_43 = ((MR_Word) ((MR_hl_field(1, Origin_24, 0))));
    succeeded = ((MR_tag((MR_Word) Var_43)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_44 = ((MR_Unsigned) ((MR_hl_field(0, Var_43, 0))) & (MR_Integer) 3);
      succeeded = (Var_44 == (MR_Integer) 0);
      if (succeeded)
      {
        succeeded = check_hlds__mode_test__all_modes_are_fully_input_3_p_0(STATE_VARIABLE_ModuleInfo_0_31, ArgTypes_25, ArgModes_11);
        if (succeeded)
        {
          succeeded = (MaybeDet_14 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_45 = ((MR_Word) ((MR_hl_field(1, MaybeDet_14, 0))));
            succeeded = (Var_45 == (MR_Integer) 7);
          }
          succeeded = !(succeeded);
        }
      }
    }
  }
  if (succeeded)
    STATE_VARIABLE_Goal_3_46 = STATE_VARIABLE_Goal_2_42;
  else
    STATE_VARIABLE_Goal_3_46 = hlds__goal_transform__maybe_strip_equality_pretest_1_f_0(STATE_VARIABLE_Goal_2_42);
  hlds__hlds_pred__proc_info_set_goal_3_p_0(STATE_VARIABLE_Goal_3_46, STATE_VARIABLE_ProcInfo_3_40, &STATE_VARIABLE_ProcInfo_4_47);
  hlds__hlds_pred__pred_info_set_proc_info_4_p_0(*ProcId_16, STATE_VARIABLE_ProcInfo_4_47, STATE_VARIABLE_PredInfo_2_36, &STATE_VARIABLE_PredInfo_3_48);
  hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_10, STATE_VARIABLE_PredInfo_3_48, STATE_VARIABLE_ModuleInfo_0_31, &STATE_VARIABLE_ModuleInfo_1_49);
  hlds__hlds_module__module_info_get_proc_requests_2_p_0(STATE_VARIABLE_ModuleInfo_1_49, &Requests0_27);
  ReqQueue0_28 = ((MR_Word) ((MR_hl_field(0, Requests0_27, 1))));
  {
    Var_50 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_50, 0) = ((MR_Box) (PredId_10));
    MR_hl_field(0, Var_50, 1) = ((MR_Box) (*ProcId_16));
  }
  mercury__queue__put_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), ((MR_Box) (Var_50)), ReqQueue0_28, &ReqQueue_29);
  Var_53 = ((MR_Word) ((MR_hl_field(0, Requests0_27, 0))));
  {
    Requests_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Requests_30, 0) = ((MR_Box) (Var_53));
    MR_hl_field(0, Requests_30, 1) = ((MR_Box) (ReqQueue_29));
  }
  hlds__hlds_module__module_info_set_proc_requests_3_p_0(Requests_30, STATE_VARIABLE_ModuleInfo_1_49, STATE_VARIABLE_ModuleInfo_32);
}

void MR_CALL 
check_hlds__proc_requests__init_requests_1_p_0(
  MR_Word * Requests_2)
{
  MR_Word UnifyReqMap_3;
  MR_Word ReqQueue_4;

  mercury__map__init_1_p_0((MR_Word) (&check_hlds__proc_requests__check_hlds__proc_requests__type_ctor_info_unify_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), &UnifyReqMap_3);
  mercury__queue__init_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), &ReqQueue_4);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Requests_2 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (UnifyReqMap_3));
    MR_hl_field(0, base, 1) = ((MR_Box) (ReqQueue_4));
  }
}

void MR_CALL 
check_hlds__proc_requests__set_req_queue_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_PR_0_6,
  MR_Word * STATE_VARIABLE_PR_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_PR_0_6, 0))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_PR_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (X_4));
  }
}

void MR_CALL 
check_hlds__proc_requests__get_req_queue_2_p_0(
  MR_Word PR_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, PR_3, 1))));
}

static MR_bool MR_CALL 
check_hlds__proc_requests____Unify____proc_requests_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__proc_requests____Unify____proc_requests_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__proc_requests____Compare____proc_requests_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__proc_requests____Compare____proc_requests_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__proc_requests____Unify____req_queue_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__proc_requests____Unify____req_queue_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__proc_requests____Compare____req_queue_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__proc_requests____Compare____req_queue_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__proc_requests____Unify____unify_proc_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__proc_requests____Unify____unify_proc_id_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__proc_requests____Compare____unify_proc_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__proc_requests____Compare____unify_proc_id_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__proc_requests____Unify____unify_req_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__proc_requests____Unify____unify_req_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__proc_requests____Compare____unify_req_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__proc_requests____Compare____unify_req_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__check_hlds__proc_requests__init(void)
{
}

void mercury__check_hlds__proc_requests__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&check_hlds__proc_requests__check_hlds__proc_requests__type_ctor_info_proc_requests_0);
  MR_register_type_ctor_info(&check_hlds__proc_requests__check_hlds__proc_requests__type_ctor_info_req_queue_0);
  MR_register_type_ctor_info(&check_hlds__proc_requests__check_hlds__proc_requests__type_ctor_info_unify_proc_id_0);
  MR_register_type_ctor_info(&check_hlds__proc_requests__check_hlds__proc_requests__type_ctor_info_unify_req_map_0);
}

void mercury__check_hlds__proc_requests__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__proc_requests__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module check_hlds.proc_requests.
