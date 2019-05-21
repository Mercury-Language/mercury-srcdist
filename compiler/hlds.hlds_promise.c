/*
** Automatically generated from `hlds_promise.m'
** by the Mercury compiler,
** version rotd-2018-02-27
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
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
#include "robdd.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_TypeInfo_Struct2 hlds__hlds_promise__tree234__ti_tree234_2builtin__type_ctor_info_int_0hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_PseudoTypeInfo hlds__hlds_promise__hlds__hlds_promise__field_types_assertion_table_0_0[2];

static const MR_DuFunctorDesc hlds__hlds_promise__hlds__hlds_promise__du_functor_desc_assertion_table_0_0;

static const MR_DuFunctorDescPtr hlds__hlds_promise__hlds__hlds_promise__du_stag_ordered_assertion_table_0_0[1];

static const MR_DuPtagLayout hlds__hlds_promise__hlds__hlds_promise__du_ptag_ordered_assertion_table_0[1];

static const MR_DuFunctorDescPtr hlds__hlds_promise__hlds__hlds_promise__du_name_ordered_assertion_table_0[1];

static const MR_Integer hlds__hlds_promise__hlds__hlds_promise__functor_number_map_assertion_table_0[1];

static const MR_FA_TypeInfo_Struct1 hlds__hlds_promise__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_FA_TypeInfo_Struct2 hlds__hlds_promise__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0;

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
hlds__hlds_promise____Unify____exclusive_ids_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_promise____Compare____exclusive_ids_0_0_10001(
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


static /* final */ const MR_Box hlds__hlds_promise_scalar_common_1[2][3];

static /* final */ const MR_Box hlds__hlds_promise_scalar_common_2[1][2];




static /* final */ const MR_Box hlds__hlds_promise_scalar_common_1[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_promise_scalar_common_2[0]))
  },
};

static /* final */ const MR_Box hlds__hlds_promise_scalar_common_2[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



const MR_TypeCtorInfo_Struct hlds__hlds_promise__hlds__hlds_promise__type_ctor_info_assert_id_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__hlds_promise____Unify____assert_id_0_0_10001)),
  ((MR_Box) (hlds__hlds_promise____Compare____assert_id_0_0_10001)),
  (MR_String) "hlds.hlds_promise",
  (MR_String) "assert_id",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct2 hlds__hlds_promise__tree234__ti_tree234_2builtin__type_ctor_info_int_0hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

static const MR_PseudoTypeInfo hlds__hlds_promise__hlds__hlds_promise__field_types_assertion_table_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &hlds__hlds_promise__tree234__ti_tree234_2builtin__type_ctor_info_int_0hlds__hlds_pred__type_ctor_info_pred_id_0
};

static const MR_DuFunctorDesc hlds__hlds_promise__hlds__hlds_promise__du_functor_desc_assertion_table_0_0 = {
  (MR_String) "assertion_table",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__hlds_promise__hlds__hlds_promise__field_types_assertion_table_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr hlds__hlds_promise__hlds__hlds_promise__du_stag_ordered_assertion_table_0_0[1] = {
  &hlds__hlds_promise__hlds__hlds_promise__du_functor_desc_assertion_table_0_0
};

static const MR_DuPtagLayout hlds__hlds_promise__hlds__hlds_promise__du_ptag_ordered_assertion_table_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    hlds__hlds_promise__hlds__hlds_promise__du_stag_ordered_assertion_table_0_0
  }
};

static const MR_DuFunctorDescPtr hlds__hlds_promise__hlds__hlds_promise__du_name_ordered_assertion_table_0[1] = {
  &hlds__hlds_promise__hlds__hlds_promise__du_functor_desc_assertion_table_0_0
};

static const MR_Integer hlds__hlds_promise__hlds__hlds_promise__functor_number_map_assertion_table_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__hlds_promise__hlds__hlds_promise__type_ctor_info_assertion_table_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_promise____Unify____assertion_table_0_0_10001)),
  ((MR_Box) (hlds__hlds_promise____Compare____assertion_table_0_0_10001)),
  (MR_String) "hlds.hlds_promise",
  (MR_String) "assertion_table",
  {     hlds__hlds_promise__hlds__hlds_promise__du_name_ordered_assertion_table_0 },
  {     hlds__hlds_promise__hlds__hlds_promise__du_ptag_ordered_assertion_table_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__hlds_promise__hlds__hlds_promise__functor_number_map_assertion_table_0
};

const MR_TypeCtorInfo_Struct hlds__hlds_promise__hlds__hlds_promise__type_ctor_info_exclusive_id_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__hlds_promise____Unify____exclusive_id_0_0_10001)),
  ((MR_Box) (hlds__hlds_promise____Compare____exclusive_id_0_0_10001)),
  (MR_String) "hlds.hlds_promise",
  (MR_String) "exclusive_id",
  {     NULL },
  {     (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_promise__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

const MR_TypeCtorInfo_Struct hlds__hlds_promise__hlds__hlds_promise__type_ctor_info_exclusive_ids_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__hlds_promise____Unify____exclusive_ids_0_0_10001)),
  ((MR_Box) (hlds__hlds_promise____Compare____exclusive_ids_0_0_10001)),
  (MR_String) "hlds.hlds_promise",
  (MR_String) "exclusive_ids",
  {     NULL },
  {     (MR_PseudoTypeInfo) &hlds__hlds_promise__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct2 hlds__hlds_promise__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_TypeInfo) &hlds__hlds_promise__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

const MR_TypeCtorInfo_Struct hlds__hlds_promise__hlds__hlds_promise__type_ctor_info_exclusive_table_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__hlds_promise____Unify____exclusive_table_0_0_10001)),
  ((MR_Box) (hlds__hlds_promise____Compare____exclusive_table_0_0_10001)),
  (MR_String) "hlds.hlds_promise",
  (MR_String) "exclusive_table",
  {     NULL },
  {     (MR_PseudoTypeInfo) &hlds__hlds_promise__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

void MR_CALL 
hlds__hlds_promise____Compare____exclusive_table_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_promise_scalar_common_1[1], HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
hlds__hlds_promise____Unify____exclusive_table_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_promise_scalar_common_1[1], ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
hlds__hlds_promise____Compare____exclusive_ids_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_promise_scalar_common_2[0], HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
hlds__hlds_promise____Unify____exclusive_ids_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_promise_scalar_common_2[0], ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
hlds__hlds_promise____Compare____exclusive_id_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    hlds__hlds_pred____Compare____pred_id_0_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
hlds__hlds_promise____Unify____exclusive_id_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = hlds__hlds_pred____Unify____pred_id_0_0(Cast_HeadVar1_3, Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
hlds__hlds_promise____Compare____assertion_table_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_10 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Integer ArgX1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Integer ArgY1_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word Var_8;

      mercury__private_builtin__builtin_compare_int_3_p_0(&Var_8, ArgX1_4, ArgY1_5);
      succeeded = (Var_8 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_8;
      else
      {
        mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_promise_scalar_common_1[0], HeadVar__1_1, ((MR_Box) (ArgX2_6)), ((MR_Box) (ArgY2_7)));
      }
    }
  }
}

MR_bool MR_CALL 
hlds__hlds_promise____Unify____assertion_table_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_8 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_9_9;
      MR_Integer ArgX1_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Integer ArgY1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        TypeInfo_9_9 = (MR_Word) &hlds__hlds_promise_scalar_common_1[0];
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      }
    }
    return succeeded;
  }
}

void MR_CALL 
hlds__hlds_promise____Compare____assert_id_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
hlds__hlds_promise____Unify____assert_id_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
hlds__hlds_promise__exclusive_table_add_4_p_0(
  MR_Word ExclusiveId_5,
  MR_Word PredId_6,
  MR_Word STATE_VARIABLE_ExclusiveTable_0_8,
  MR_Word * STATE_VARIABLE_ExclusiveTable_9)
{
  {
    MR_Word TypeCtorInfo_11_11 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;

    mercury__multi_map__set_4_p_0(TypeCtorInfo_11_11, TypeCtorInfo_11_11, ((MR_Box) (PredId_6)), ((MR_Box) (ExclusiveId_5)), STATE_VARIABLE_ExclusiveTable_0_8, STATE_VARIABLE_ExclusiveTable_9);
  }
}

void MR_CALL 
hlds__hlds_promise__exclusive_table_optimize_2_p_0(
  MR_Word STATE_VARIABLE_ExclusiveTable_0_4,
  MR_Word * STATE_VARIABLE_ExclusiveTable_5)
{
  {
    MR_Word TypeCtorInfo_7_7 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;

    mercury__multi_map__optimize_2_p_0(TypeCtorInfo_7_7, TypeCtorInfo_7_7, STATE_VARIABLE_ExclusiveTable_0_4, STATE_VARIABLE_ExclusiveTable_5);
  }
}

void MR_CALL 
hlds__hlds_promise__exclusive_table_lookup_3_p_0(
  MR_Word ExclusiveTable_4,
  MR_Word PredId_5,
  MR_Word * ExclusiveIds_6)
{
  {
    MR_Word TypeCtorInfo_7_7 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;

    mercury__multi_map__lookup_3_p_0(TypeCtorInfo_7_7, TypeCtorInfo_7_7, ExclusiveTable_4, ((MR_Box) (PredId_5)), ExclusiveIds_6);
  }
}

MR_bool MR_CALL 
hlds__hlds_promise__exclusive_table_search_3_p_0(
  MR_Word ExclusiveTable_4,
  MR_Word Id_5,
  MR_Word * ExclusiveIds_6)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_7_7 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;

    succeeded = mercury__multi_map__search_3_p_0(TypeCtorInfo_7_7, TypeCtorInfo_7_7, ExclusiveTable_4, ((MR_Box) (Id_5)), ExclusiveIds_6);
    return succeeded;
  }
}

void MR_CALL 
hlds__hlds_promise__exclusive_table_init_1_p_0(
  MR_Word * ExclusiveTable_2)
{
  {
    MR_Word TypeCtorInfo_3_3 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;

    mercury__multi_map__init_1_p_0(TypeCtorInfo_3_3, TypeCtorInfo_3_3, ExclusiveTable_2);
  }
}

void MR_CALL 
hlds__hlds_promise__assertion_table_pred_ids_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * PredIds_5)
{
  {
    MR_Word AssertionMap_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
    MR_Integer Var_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));

    mercury__map__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, AssertionMap_4, PredIds_5);
  }
}

void MR_CALL 
hlds__hlds_promise__assertion_table_lookup_3_p_0(
  MR_Word AssertionTable_4,
  MR_Integer Id_5,
  MR_Word * Assertion_6)
{
  {
    MR_Word AssertionMap_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), AssertionTable_4, (MR_Integer) 1)));
    MR_Integer _MaxId_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), AssertionTable_4, (MR_Integer) 0)));
    MR_Box conv0_Assertion_6;

    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, AssertionMap_8, Id_5, &conv0_Assertion_6);
    *Assertion_6 = ((MR_Word) conv0_Assertion_6);
  }
}

void MR_CALL 
hlds__hlds_promise__assertion_table_add_assertion_4_p_0(
  MR_Word Assertion_5,
  MR_Integer * Id_6,
  MR_Word STATE_VARIABLE_AssertionTable_0_10,
  MR_Word * STATE_VARIABLE_AssertionTable_11)
{
  {
    MR_Word AssertionMap0_8;
    MR_Word AssertionMap_9;
    MR_Integer Var_13;

    *Id_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_AssertionTable_0_10, (MR_Integer) 0)));
    AssertionMap0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_AssertionTable_0_10, (MR_Integer) 1)));
    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, *Id_6, ((MR_Box) (Assertion_5)), AssertionMap0_8, &AssertionMap_9);
    Var_13 = (*Id_6 + (MR_Integer) 1);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_AssertionTable_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (AssertionMap_9));
    }
  }
}

void MR_CALL 
hlds__hlds_promise__assertion_table_init_1_p_0(
  MR_Word * HeadVar__1_1)
{
  {
    MR_Word AssertionMap_2;

    mercury__map__init_1_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, &AssertionMap_2);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__1_1 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (AssertionMap_2));
    }
  }
}

static MR_bool MR_CALL 
hlds__hlds_promise____Unify____assert_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_promise____Unify____assert_id_0_0(((MR_Integer) wrapper_arg_1), ((MR_Integer) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_promise____Compare____assert_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_promise____Compare____assert_id_0_0(&conv0_HeadVar__1_1, ((MR_Integer) wrapper_arg_2), ((MR_Integer) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_promise____Unify____assertion_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_promise____Unify____assertion_table_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_promise____Compare____assertion_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_promise____Compare____assertion_table_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_promise____Unify____exclusive_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_promise____Unify____exclusive_id_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_promise____Compare____exclusive_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_promise____Compare____exclusive_id_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_promise____Unify____exclusive_ids_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_promise____Unify____exclusive_ids_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_promise____Compare____exclusive_ids_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_promise____Compare____exclusive_ids_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_promise____Unify____exclusive_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_promise____Unify____exclusive_table_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_promise____Compare____exclusive_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_promise____Compare____exclusive_table_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
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
	MR_register_type_ctor_info(&hlds__hlds_promise__hlds__hlds_promise__type_ctor_info_exclusive_ids_0);
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
