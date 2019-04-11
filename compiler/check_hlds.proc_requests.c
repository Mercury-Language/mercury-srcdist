/*
** Automatically generated from `proc_requests.m'
** by the Mercury compiler,
** version rotd-2017-07-04
** configured for x86_64-apple-darwin13.4.0.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


/* :- module check_hlds.proc_requests. */
/* :- implementation. */

/*
INIT mercury__check_hlds__proc_requests__init
ENDINIT
*/

#include "check_hlds.proc_requests.mih"


#include "analysis.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "check_hlds.clause_to_proc.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.inst_test.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.type_util.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.make_hlds.mih"
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
#include "require.mih"
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
#include "parse_tree.equiv_type.mih"
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
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



struct check_hlds__proc_requests__request_proc_9_p_0_env_0_s {
  MR_Word check_hlds__proc_requests__request_proc_9_p_0_env_0__ArgModes_11;
  MR_Word check_hlds__proc_requests__request_proc_9_p_0_env_0__STATE_VARIABLE_ModuleInfo_0_35;
  MR_bool check_hlds__proc_requests__request_proc_9_p_0_env_0__succeeded;
  MR_Word check_hlds__proc_requests__request_proc_9_p_0_env_0__TypeCtorInfo_61_61;
  jmp_buf check_hlds__proc_requests__request_proc_9_p_0_env_0__commit_0;
  MR_Word check_hlds__proc_requests__request_proc_9_p_0_env_0__ArgMode_30;
  MR_Box check_hlds__proc_requests__request_proc_9_p_0_env_0__conv2_ArgMode_30;
};


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

static MR_bool MR_CALL 
check_hlds__proc_requests____Unify____proc_requests_0_0_10001(
  MR_Box check_hlds__proc_requests__wrapper_arg_1,
  MR_Box check_hlds__proc_requests__wrapper_arg_2);

static void MR_CALL 
check_hlds__proc_requests____Compare____proc_requests_0_0_10001(
  MR_Box * check_hlds__proc_requests__wrapper_arg_1,
  MR_Box check_hlds__proc_requests__wrapper_arg_2,
  MR_Box check_hlds__proc_requests__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__proc_requests____Unify____req_queue_0_0_10001(
  MR_Box check_hlds__proc_requests__wrapper_arg_1,
  MR_Box check_hlds__proc_requests__wrapper_arg_2);

static void MR_CALL 
check_hlds__proc_requests____Compare____req_queue_0_0_10001(
  MR_Box * check_hlds__proc_requests__wrapper_arg_1,
  MR_Box check_hlds__proc_requests__wrapper_arg_2,
  MR_Box check_hlds__proc_requests__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__proc_requests____Unify____unify_proc_id_0_0_10001(
  MR_Box check_hlds__proc_requests__wrapper_arg_1,
  MR_Box check_hlds__proc_requests__wrapper_arg_2);

static void MR_CALL 
check_hlds__proc_requests____Compare____unify_proc_id_0_0_10001(
  MR_Box * check_hlds__proc_requests__wrapper_arg_1,
  MR_Box check_hlds__proc_requests__wrapper_arg_2,
  MR_Box check_hlds__proc_requests__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__proc_requests____Unify____unify_req_map_0_0_10001(
  MR_Box check_hlds__proc_requests__wrapper_arg_1,
  MR_Box check_hlds__proc_requests__wrapper_arg_2);

static void MR_CALL 
check_hlds__proc_requests____Compare____unify_req_map_0_0_10001(
  MR_Box * check_hlds__proc_requests__wrapper_arg_1,
  MR_Box check_hlds__proc_requests__wrapper_arg_2,
  MR_Box check_hlds__proc_requests__wrapper_arg_3);

static void MR_CALL 
check_hlds__proc_requests____Compare____unify_req_map_0_0(
  MR_Word * check_hlds__proc_requests__HeadVar__1_1,
  MR_Word check_hlds__proc_requests__HeadVar__2_2,
  MR_Word check_hlds__proc_requests__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__proc_requests____Unify____unify_req_map_0_0(
  MR_Word check_hlds__proc_requests__HeadVar__1_1,
  MR_Word check_hlds__proc_requests__HeadVar__2_2);

static void MR_CALL 
check_hlds__proc_requests__set_unify_req_map_3_p_0(
  MR_Word check_hlds__proc_requests__X_4,
  MR_Word check_hlds__proc_requests__STATE_VARIABLE_PR_0_6,
  MR_Word * check_hlds__proc_requests__STATE_VARIABLE_PR_7);

static void MR_CALL 
check_hlds__proc_requests__request_proc_9_p_0_1(
  void * check_hlds__proc_requests__env_ptr_arg);

static void MR_CALL 
check_hlds__proc_requests__request_proc_9_p_0_3(
  void * check_hlds__proc_requests__env_ptr_arg);

static void MR_CALL 
check_hlds__proc_requests__request_proc_9_p_0_2(
  void * check_hlds__proc_requests__env_ptr_arg);

static void MR_CALL 
check_hlds__proc_requests__request_proc_9_p_0_4(
  void * check_hlds__proc_requests__env_ptr_arg);


static /* final */ const MR_Box check_hlds__proc_requests_scalar_common_1[1][3];

static /* final */ const MR_Box check_hlds__proc_requests_scalar_common_2[1][2];




static /* final */ const MR_Box check_hlds__proc_requests_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__proc_requests__check_hlds__proc_requests__type_ctor_info_unify_proc_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box check_hlds__proc_requests_scalar_common_2[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__queue__queue__type_ctor_info_queue_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct2 check_hlds__proc_requests__tree234__ti_tree234_2check_hlds__proc_requests__type_ctor_info_unify_proc_id_0builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__proc_requests__check_hlds__proc_requests__type_ctor_info_unify_proc_id_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__proc_requests__queue__ti_queue_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__queue__queue__type_ctor_info_queue_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

static const MR_PseudoTypeInfo check_hlds__proc_requests__check_hlds__proc_requests__field_types_proc_requests_0_0[2] = {
  (MR_PseudoTypeInfo) &check_hlds__proc_requests__tree234__ti_tree234_2check_hlds__proc_requests__type_ctor_info_unify_proc_id_0builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &check_hlds__proc_requests__queue__ti_queue_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0
};

static const MR_ConstString check_hlds__proc_requests__check_hlds__proc_requests__field_names_proc_requests_0_0[2] = {
  (MR_String) "unify_req_map",
  (MR_String) "req_queue"
};

static const MR_DuFunctorDesc check_hlds__proc_requests__check_hlds__proc_requests__du_functor_desc_proc_requests_0_0 = {
  (MR_String) "proc_requests",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__proc_requests__check_hlds__proc_requests__field_types_proc_requests_0_0,
  check_hlds__proc_requests__check_hlds__proc_requests__field_names_proc_requests_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__proc_requests__check_hlds__proc_requests__du_stag_ordered_proc_requests_0_0[1] = {
  &check_hlds__proc_requests__check_hlds__proc_requests__du_functor_desc_proc_requests_0_0
};

static const MR_DuPtagLayout check_hlds__proc_requests__check_hlds__proc_requests__du_ptag_ordered_proc_requests_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__proc_requests__check_hlds__proc_requests__du_stag_ordered_proc_requests_0_0
  }
};

static const MR_DuFunctorDescPtr check_hlds__proc_requests__check_hlds__proc_requests__du_name_ordered_proc_requests_0[1] = {
  &check_hlds__proc_requests__check_hlds__proc_requests__du_functor_desc_proc_requests_0_0
};

static const MR_Integer check_hlds__proc_requests__check_hlds__proc_requests__functor_number_map_proc_requests_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__proc_requests__check_hlds__proc_requests__type_ctor_info_proc_requests_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__proc_requests____Unify____proc_requests_0_0_10001)),
  ((MR_Box) (check_hlds__proc_requests____Compare____proc_requests_0_0_10001)),
  (MR_String) "check_hlds.proc_requests",
  (MR_String) "proc_requests",
  {     check_hlds__proc_requests__check_hlds__proc_requests__du_name_ordered_proc_requests_0 },
  {     check_hlds__proc_requests__check_hlds__proc_requests__du_ptag_ordered_proc_requests_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__proc_requests__check_hlds__proc_requests__functor_number_map_proc_requests_0
};

const MR_TypeCtorInfo_Struct check_hlds__proc_requests__check_hlds__proc_requests__type_ctor_info_req_queue_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__proc_requests____Unify____req_queue_0_0_10001)),
  ((MR_Box) (check_hlds__proc_requests____Compare____req_queue_0_0_10001)),
  (MR_String) "check_hlds.proc_requests",
  (MR_String) "req_queue",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__proc_requests__queue__ti_queue_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_PseudoTypeInfo check_hlds__proc_requests__check_hlds__proc_requests__field_types_unify_proc_id_0_0[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0
};

static const MR_DuFunctorDesc check_hlds__proc_requests__check_hlds__proc_requests__du_functor_desc_unify_proc_id_0_0 = {
  (MR_String) "unify_proc_id",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__proc_requests__check_hlds__proc_requests__field_types_unify_proc_id_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__proc_requests__check_hlds__proc_requests__du_stag_ordered_unify_proc_id_0_0[1] = {
  &check_hlds__proc_requests__check_hlds__proc_requests__du_functor_desc_unify_proc_id_0_0
};

static const MR_DuPtagLayout check_hlds__proc_requests__check_hlds__proc_requests__du_ptag_ordered_unify_proc_id_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__proc_requests__check_hlds__proc_requests__du_stag_ordered_unify_proc_id_0_0
  }
};

static const MR_DuFunctorDescPtr check_hlds__proc_requests__check_hlds__proc_requests__du_name_ordered_unify_proc_id_0[1] = {
  &check_hlds__proc_requests__check_hlds__proc_requests__du_functor_desc_unify_proc_id_0_0
};

static const MR_Integer check_hlds__proc_requests__check_hlds__proc_requests__functor_number_map_unify_proc_id_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__proc_requests__check_hlds__proc_requests__type_ctor_info_unify_proc_id_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__proc_requests____Unify____unify_proc_id_0_0_10001)),
  ((MR_Box) (check_hlds__proc_requests____Compare____unify_proc_id_0_0_10001)),
  (MR_String) "check_hlds.proc_requests",
  (MR_String) "unify_proc_id",
  {     check_hlds__proc_requests__check_hlds__proc_requests__du_name_ordered_unify_proc_id_0 },
  {     check_hlds__proc_requests__check_hlds__proc_requests__du_ptag_ordered_unify_proc_id_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__proc_requests__check_hlds__proc_requests__functor_number_map_unify_proc_id_0
};

const MR_TypeCtorInfo_Struct check_hlds__proc_requests__check_hlds__proc_requests__type_ctor_info_unify_req_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__proc_requests____Unify____unify_req_map_0_0_10001)),
  ((MR_Box) (check_hlds__proc_requests____Compare____unify_req_map_0_0_10001)),
  (MR_String) "check_hlds.proc_requests",
  (MR_String) "unify_req_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__proc_requests__tree234__ti_tree234_2check_hlds__proc_requests__type_ctor_info_unify_proc_id_0builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static MR_bool MR_CALL 
check_hlds__proc_requests____Unify____proc_requests_0_0_10001(
  MR_Box check_hlds__proc_requests__wrapper_arg_1,
  MR_Box check_hlds__proc_requests__wrapper_arg_2)
{
  {
    MR_bool check_hlds__proc_requests__succeeded;

    {
      check_hlds__proc_requests__succeeded = check_hlds__proc_requests____Unify____proc_requests_0_0(((MR_Word) check_hlds__proc_requests__wrapper_arg_1), ((MR_Word) check_hlds__proc_requests__wrapper_arg_2));
    }
    return check_hlds__proc_requests__succeeded;
  }
}

static void MR_CALL 
check_hlds__proc_requests____Compare____proc_requests_0_0_10001(
  MR_Box * check_hlds__proc_requests__wrapper_arg_1,
  MR_Box check_hlds__proc_requests__wrapper_arg_2,
  MR_Box check_hlds__proc_requests__wrapper_arg_3)
{
  {
    MR_Word check_hlds__proc_requests__conv0_HeadVar__1_1;

    {
      check_hlds__proc_requests____Compare____proc_requests_0_0(&check_hlds__proc_requests__conv0_HeadVar__1_1, ((MR_Word) check_hlds__proc_requests__wrapper_arg_2), ((MR_Word) check_hlds__proc_requests__wrapper_arg_3));
    }
    *check_hlds__proc_requests__wrapper_arg_1 = ((MR_Box) (check_hlds__proc_requests__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__proc_requests____Unify____req_queue_0_0_10001(
  MR_Box check_hlds__proc_requests__wrapper_arg_1,
  MR_Box check_hlds__proc_requests__wrapper_arg_2)
{
  {
    MR_bool check_hlds__proc_requests__succeeded;

    {
      check_hlds__proc_requests__succeeded = check_hlds__proc_requests____Unify____req_queue_0_0(((MR_Word) check_hlds__proc_requests__wrapper_arg_1), ((MR_Word) check_hlds__proc_requests__wrapper_arg_2));
    }
    return check_hlds__proc_requests__succeeded;
  }
}

static void MR_CALL 
check_hlds__proc_requests____Compare____req_queue_0_0_10001(
  MR_Box * check_hlds__proc_requests__wrapper_arg_1,
  MR_Box check_hlds__proc_requests__wrapper_arg_2,
  MR_Box check_hlds__proc_requests__wrapper_arg_3)
{
  {
    MR_Word check_hlds__proc_requests__conv0_HeadVar__1_1;

    {
      check_hlds__proc_requests____Compare____req_queue_0_0(&check_hlds__proc_requests__conv0_HeadVar__1_1, ((MR_Word) check_hlds__proc_requests__wrapper_arg_2), ((MR_Word) check_hlds__proc_requests__wrapper_arg_3));
    }
    *check_hlds__proc_requests__wrapper_arg_1 = ((MR_Box) (check_hlds__proc_requests__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__proc_requests____Unify____unify_proc_id_0_0_10001(
  MR_Box check_hlds__proc_requests__wrapper_arg_1,
  MR_Box check_hlds__proc_requests__wrapper_arg_2)
{
  {
    MR_bool check_hlds__proc_requests__succeeded;

    {
      check_hlds__proc_requests__succeeded = check_hlds__proc_requests____Unify____unify_proc_id_0_0(((MR_Word) check_hlds__proc_requests__wrapper_arg_1), ((MR_Word) check_hlds__proc_requests__wrapper_arg_2));
    }
    return check_hlds__proc_requests__succeeded;
  }
}

static void MR_CALL 
check_hlds__proc_requests____Compare____unify_proc_id_0_0_10001(
  MR_Box * check_hlds__proc_requests__wrapper_arg_1,
  MR_Box check_hlds__proc_requests__wrapper_arg_2,
  MR_Box check_hlds__proc_requests__wrapper_arg_3)
{
  {
    MR_Word check_hlds__proc_requests__conv0_HeadVar__1_1;

    {
      check_hlds__proc_requests____Compare____unify_proc_id_0_0(&check_hlds__proc_requests__conv0_HeadVar__1_1, ((MR_Word) check_hlds__proc_requests__wrapper_arg_2), ((MR_Word) check_hlds__proc_requests__wrapper_arg_3));
    }
    *check_hlds__proc_requests__wrapper_arg_1 = ((MR_Box) (check_hlds__proc_requests__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__proc_requests____Unify____unify_req_map_0_0_10001(
  MR_Box check_hlds__proc_requests__wrapper_arg_1,
  MR_Box check_hlds__proc_requests__wrapper_arg_2)
{
  {
    MR_bool check_hlds__proc_requests__succeeded;

    {
      check_hlds__proc_requests__succeeded = check_hlds__proc_requests____Unify____unify_req_map_0_0(((MR_Word) check_hlds__proc_requests__wrapper_arg_1), ((MR_Word) check_hlds__proc_requests__wrapper_arg_2));
    }
    return check_hlds__proc_requests__succeeded;
  }
}

static void MR_CALL 
check_hlds__proc_requests____Compare____unify_req_map_0_0_10001(
  MR_Box * check_hlds__proc_requests__wrapper_arg_1,
  MR_Box check_hlds__proc_requests__wrapper_arg_2,
  MR_Box check_hlds__proc_requests__wrapper_arg_3)
{
  {
    MR_Word check_hlds__proc_requests__conv0_HeadVar__1_1;

    {
      check_hlds__proc_requests____Compare____unify_req_map_0_0(&check_hlds__proc_requests__conv0_HeadVar__1_1, ((MR_Word) check_hlds__proc_requests__wrapper_arg_2), ((MR_Word) check_hlds__proc_requests__wrapper_arg_3));
    }
    *check_hlds__proc_requests__wrapper_arg_1 = ((MR_Box) (check_hlds__proc_requests__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
check_hlds__proc_requests____Compare____unify_req_map_0_0(
  MR_Word * check_hlds__proc_requests__HeadVar__1_1,
  MR_Word check_hlds__proc_requests__HeadVar__2_2,
  MR_Word check_hlds__proc_requests__HeadVar__3_3)
{
  {
    MR_bool check_hlds__proc_requests__succeeded;
    MR_Word check_hlds__proc_requests__Cast_HeadVar1_4 = check_hlds__proc_requests__HeadVar__2_2;
    MR_Word check_hlds__proc_requests__Cast_HeadVar2_5 = check_hlds__proc_requests__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__proc_requests_scalar_common_1[0], check_hlds__proc_requests__HeadVar__1_1, ((MR_Box) (check_hlds__proc_requests__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__proc_requests__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__proc_requests____Unify____unify_req_map_0_0(
  MR_Word check_hlds__proc_requests__HeadVar__1_1,
  MR_Word check_hlds__proc_requests__HeadVar__2_2)
{
  {
    MR_bool check_hlds__proc_requests__succeeded;
    MR_Word check_hlds__proc_requests__Cast_HeadVar1_3 = check_hlds__proc_requests__HeadVar__1_1;
    MR_Word check_hlds__proc_requests__Cast_HeadVar2_4 = check_hlds__proc_requests__HeadVar__2_2;

    {
      check_hlds__proc_requests__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__proc_requests_scalar_common_1[0], ((MR_Box) (check_hlds__proc_requests__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__proc_requests__Cast_HeadVar2_4)));
    }
    return check_hlds__proc_requests__succeeded;
  }
}

void MR_CALL 
check_hlds__proc_requests____Compare____unify_proc_id_0_0(
  MR_Word * check_hlds__proc_requests__HeadVar__1_1,
  MR_Word check_hlds__proc_requests__HeadVar__2_2,
  MR_Word check_hlds__proc_requests__HeadVar__3_3)
{
  {
    MR_bool check_hlds__proc_requests__succeeded;
    MR_Integer check_hlds__proc_requests__CastX_9 = (MR_Integer) check_hlds__proc_requests__HeadVar__2_2;
    MR_Integer check_hlds__proc_requests__CastY_10 = (MR_Integer) check_hlds__proc_requests__HeadVar__3_3;

    check_hlds__proc_requests__succeeded = (check_hlds__proc_requests__CastX_9 == check_hlds__proc_requests__CastY_10);
    if (check_hlds__proc_requests__succeeded)
      *check_hlds__proc_requests__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word check_hlds__proc_requests__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__proc_requests__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__proc_requests__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__proc_requests__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word check_hlds__proc_requests__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__proc_requests__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__proc_requests__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__proc_requests__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word check_hlds__proc_requests__Var_8;

        {
          parse_tree__prog_data____Compare____type_ctor_0_0(&check_hlds__proc_requests__Var_8, check_hlds__proc_requests__ArgX1_4, check_hlds__proc_requests__ArgY1_5);
        }
        check_hlds__proc_requests__succeeded = (check_hlds__proc_requests__Var_8 == (MR_Integer) 0);
        check_hlds__proc_requests__succeeded = !(check_hlds__proc_requests__succeeded);
        if (check_hlds__proc_requests__succeeded)
          *check_hlds__proc_requests__HeadVar__1_1 = check_hlds__proc_requests__Var_8;
        else
          {
            hlds__hlds_goal____Compare____unify_mode_0_0(check_hlds__proc_requests__HeadVar__1_1, check_hlds__proc_requests__ArgX2_6, check_hlds__proc_requests__ArgY2_7);
          }
      }
  }
}

MR_bool MR_CALL 
check_hlds__proc_requests____Unify____unify_proc_id_0_0(
  MR_Word check_hlds__proc_requests__HeadVar__1_1,
  MR_Word check_hlds__proc_requests__HeadVar__2_2)
{
  {
    MR_bool check_hlds__proc_requests__succeeded;
    MR_Integer check_hlds__proc_requests__CastX_7 = (MR_Integer) check_hlds__proc_requests__HeadVar__1_1;
    MR_Integer check_hlds__proc_requests__CastY_8 = (MR_Integer) check_hlds__proc_requests__HeadVar__2_2;

    check_hlds__proc_requests__succeeded = (check_hlds__proc_requests__CastX_7 == check_hlds__proc_requests__CastY_8);
    if (check_hlds__proc_requests__succeeded)
      check_hlds__proc_requests__succeeded = MR_TRUE;
    else
      {
        MR_Word check_hlds__proc_requests__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__proc_requests__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__proc_requests__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__proc_requests__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__proc_requests__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__proc_requests__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__proc_requests__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__proc_requests__HeadVar__2_2, (MR_Integer) 1)));

        {
          check_hlds__proc_requests__succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(check_hlds__proc_requests__ArgX1_3, check_hlds__proc_requests__ArgY1_4);
        }
        if (check_hlds__proc_requests__succeeded)
          {
            check_hlds__proc_requests__succeeded = hlds__hlds_goal____Unify____unify_mode_0_0(check_hlds__proc_requests__ArgX2_5, check_hlds__proc_requests__ArgY2_6);
          }
      }
    return check_hlds__proc_requests__succeeded;
  }
}

void MR_CALL 
check_hlds__proc_requests____Compare____req_queue_0_0(
  MR_Word * check_hlds__proc_requests__HeadVar__1_1,
  MR_Word check_hlds__proc_requests__HeadVar__2_2,
  MR_Word check_hlds__proc_requests__HeadVar__3_3)
{
  {
    MR_bool check_hlds__proc_requests__succeeded;
    MR_Word check_hlds__proc_requests__Cast_HeadVar1_4 = check_hlds__proc_requests__HeadVar__2_2;
    MR_Word check_hlds__proc_requests__Cast_HeadVar2_5 = check_hlds__proc_requests__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__proc_requests_scalar_common_2[0], check_hlds__proc_requests__HeadVar__1_1, ((MR_Box) (check_hlds__proc_requests__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__proc_requests__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
check_hlds__proc_requests____Unify____req_queue_0_0(
  MR_Word check_hlds__proc_requests__HeadVar__1_1,
  MR_Word check_hlds__proc_requests__HeadVar__2_2)
{
  {
    MR_bool check_hlds__proc_requests__succeeded;
    MR_Word check_hlds__proc_requests__Cast_HeadVar1_3 = check_hlds__proc_requests__HeadVar__1_1;
    MR_Word check_hlds__proc_requests__Cast_HeadVar2_4 = check_hlds__proc_requests__HeadVar__2_2;

    {
      check_hlds__proc_requests__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__proc_requests_scalar_common_2[0], ((MR_Box) (check_hlds__proc_requests__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__proc_requests__Cast_HeadVar2_4)));
    }
    return check_hlds__proc_requests__succeeded;
  }
}

void MR_CALL 
check_hlds__proc_requests____Compare____proc_requests_0_0(
  MR_Word * check_hlds__proc_requests__HeadVar__1_1,
  MR_Word check_hlds__proc_requests__HeadVar__2_2,
  MR_Word check_hlds__proc_requests__HeadVar__3_3)
{
  {
    MR_bool check_hlds__proc_requests__succeeded;
    MR_Integer check_hlds__proc_requests__CastX_9 = (MR_Integer) check_hlds__proc_requests__HeadVar__2_2;
    MR_Integer check_hlds__proc_requests__CastY_10 = (MR_Integer) check_hlds__proc_requests__HeadVar__3_3;

    check_hlds__proc_requests__succeeded = (check_hlds__proc_requests__CastX_9 == check_hlds__proc_requests__CastY_10);
    if (check_hlds__proc_requests__succeeded)
      *check_hlds__proc_requests__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word check_hlds__proc_requests__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__proc_requests__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__proc_requests__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__proc_requests__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word check_hlds__proc_requests__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__proc_requests__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__proc_requests__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__proc_requests__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word check_hlds__proc_requests__Var_8;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__proc_requests_scalar_common_1[0], &check_hlds__proc_requests__Var_8, ((MR_Box) (check_hlds__proc_requests__ArgX1_4)), ((MR_Box) (check_hlds__proc_requests__ArgY1_5)));
        }
        check_hlds__proc_requests__succeeded = (check_hlds__proc_requests__Var_8 == (MR_Integer) 0);
        check_hlds__proc_requests__succeeded = !(check_hlds__proc_requests__succeeded);
        if (check_hlds__proc_requests__succeeded)
          *check_hlds__proc_requests__HeadVar__1_1 = check_hlds__proc_requests__Var_8;
        else
          {
            {
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__proc_requests_scalar_common_2[0], check_hlds__proc_requests__HeadVar__1_1, ((MR_Box) (check_hlds__proc_requests__ArgX2_6)), ((MR_Box) (check_hlds__proc_requests__ArgY2_7)));
            }
          }
      }
  }
}

MR_bool MR_CALL 
check_hlds__proc_requests____Unify____proc_requests_0_0(
  MR_Word check_hlds__proc_requests__HeadVar__1_1,
  MR_Word check_hlds__proc_requests__HeadVar__2_2)
{
  {
    MR_bool check_hlds__proc_requests__succeeded;
    MR_Integer check_hlds__proc_requests__CastX_7 = (MR_Integer) check_hlds__proc_requests__HeadVar__1_1;
    MR_Integer check_hlds__proc_requests__CastY_8 = (MR_Integer) check_hlds__proc_requests__HeadVar__2_2;

    check_hlds__proc_requests__succeeded = (check_hlds__proc_requests__CastX_7 == check_hlds__proc_requests__CastY_8);
    if (check_hlds__proc_requests__succeeded)
      check_hlds__proc_requests__succeeded = MR_TRUE;
    else
      {
        MR_Word check_hlds__proc_requests__TypeInfo_10_10;
        MR_Word check_hlds__proc_requests__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__proc_requests__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__proc_requests__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__proc_requests__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__proc_requests__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__proc_requests__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__proc_requests__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__proc_requests__HeadVar__2_2, (MR_Integer) 1)));

        {
          check_hlds__proc_requests__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__proc_requests_scalar_common_1[0], ((MR_Box) (check_hlds__proc_requests__ArgX1_3)), ((MR_Box) (check_hlds__proc_requests__ArgY1_4)));
        }
        if (check_hlds__proc_requests__succeeded)
          {
            check_hlds__proc_requests__TypeInfo_10_10 = (MR_Word) &check_hlds__proc_requests_scalar_common_2[0];
            {
              check_hlds__proc_requests__succeeded = mercury__builtin__unify_2_p_0(check_hlds__proc_requests__TypeInfo_10_10, ((MR_Box) (check_hlds__proc_requests__ArgX2_5)), ((MR_Box) (check_hlds__proc_requests__ArgY2_6)));
            }
          }
      }
    return check_hlds__proc_requests__succeeded;
  }
}

static void MR_CALL 
check_hlds__proc_requests__set_unify_req_map_3_p_0(
  MR_Word check_hlds__proc_requests__X_4,
  MR_Word check_hlds__proc_requests__STATE_VARIABLE_PR_0_6,
  MR_Word * check_hlds__proc_requests__STATE_VARIABLE_PR_7)
{
  {
    MR_bool check_hlds__proc_requests__succeeded;
    MR_Word check_hlds__proc_requests__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__proc_requests__STATE_VARIABLE_PR_0_6, (MR_Integer) 1)));
    MR_Word check_hlds__proc_requests__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__proc_requests__STATE_VARIABLE_PR_0_6, (MR_Integer) 0)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__proc_requests__STATE_VARIABLE_PR_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__proc_requests__X_4));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__proc_requests__Var_10));
    }
  }
}

void MR_CALL 
check_hlds__proc_requests__lookup_mode_num_5_p_0(
  MR_Word check_hlds__proc_requests__ModuleInfo_6,
  MR_Word check_hlds__proc_requests__TypeCtor_7,
  MR_Word check_hlds__proc_requests__UniMode_8,
  MR_Word check_hlds__proc_requests__Det_9,
  MR_Integer * check_hlds__proc_requests__Num_10)
{
  {
    MR_bool check_hlds__proc_requests__succeeded;
    MR_Integer check_hlds__proc_requests__NumPrime_11;
    MR_Word check_hlds__proc_requests__InitInstX_19;
    MR_Word check_hlds__proc_requests__InitInstY_21;
    MR_Word check_hlds__proc_requests__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__proc_requests__UniMode_8, (MR_Integer) 0)));
    MR_Word check_hlds__proc_requests__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__proc_requests__UniMode_8, (MR_Integer) 1)));
    MR_Word check_hlds__proc_requests___FinalInstX_20;
    MR_Word check_hlds__proc_requests___FinalInstY_22;

    check_hlds__proc_requests__InitInstX_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__proc_requests__Var_25, (MR_Integer) 0)));
    check_hlds__proc_requests___FinalInstX_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__proc_requests__Var_25, (MR_Integer) 1)));
    check_hlds__proc_requests__InitInstY_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__proc_requests__Var_26, (MR_Integer) 0)));
    check_hlds__proc_requests___FinalInstY_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__proc_requests__Var_26, (MR_Integer) 1)));
    check_hlds__proc_requests__succeeded = (check_hlds__proc_requests__Det_9 == (MR_Integer) 1);
    if (check_hlds__proc_requests__succeeded)
      {
        {
          check_hlds__proc_requests__succeeded = check_hlds__inst_test__inst_is_ground_or_any_2_p_0(check_hlds__proc_requests__ModuleInfo_6, check_hlds__proc_requests__InitInstX_19);
        }
        if (check_hlds__proc_requests__succeeded)
          {
            check_hlds__proc_requests__succeeded = check_hlds__inst_test__inst_is_ground_or_any_2_p_0(check_hlds__proc_requests__ModuleInfo_6, check_hlds__proc_requests__InitInstY_21);
          }
      }
    if (check_hlds__proc_requests__succeeded)
      {
        {
          hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&check_hlds__proc_requests__NumPrime_11);
        }
        check_hlds__proc_requests__succeeded = MR_TRUE;
      }
    else
      {
        check_hlds__proc_requests__succeeded = (check_hlds__proc_requests__InitInstX_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
        if (check_hlds__proc_requests__succeeded)
          {
            {
              hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&check_hlds__proc_requests__NumPrime_11);
            }
            check_hlds__proc_requests__succeeded = MR_TRUE;
          }
        else
          {
            check_hlds__proc_requests__succeeded = (check_hlds__proc_requests__InitInstY_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
            if (check_hlds__proc_requests__succeeded)
              {
                {
                  hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&check_hlds__proc_requests__NumPrime_11);
                }
                check_hlds__proc_requests__succeeded = MR_TRUE;
              }
            else
              {
                MR_Word check_hlds__proc_requests__Requests_23;
                MR_Word check_hlds__proc_requests__UnifyReqMap_24;
                MR_Word check_hlds__proc_requests__Var_27;
                MR_Word check_hlds__proc_requests__Var_32;
                MR_Box check_hlds__proc_requests__conv0_NumPrime_11;

                {
                  hlds__hlds_module__module_info_get_proc_requests_2_p_0(check_hlds__proc_requests__ModuleInfo_6, &check_hlds__proc_requests__Requests_23);
                }
                check_hlds__proc_requests__UnifyReqMap_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__proc_requests__Requests_23, (MR_Integer) 0)));
                check_hlds__proc_requests__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__proc_requests__Requests_23, (MR_Integer) 1)));
                {
                  check_hlds__proc_requests__Var_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), check_hlds__proc_requests__Var_27, 0) = ((MR_Box) (check_hlds__proc_requests__TypeCtor_7));
                  MR_hl_field(MR_mktag(0), check_hlds__proc_requests__Var_27, 1) = ((MR_Box) (check_hlds__proc_requests__UniMode_8));
                }
                {
                  check_hlds__proc_requests__succeeded = mercury__map__search_3_p_0((MR_Word) &check_hlds__proc_requests__check_hlds__proc_requests__type_ctor_info_unify_proc_id_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, check_hlds__proc_requests__UnifyReqMap_24, ((MR_Box) (check_hlds__proc_requests__Var_27)), &check_hlds__proc_requests__conv0_NumPrime_11);
                }
                if (check_hlds__proc_requests__succeeded)
                  {
                    check_hlds__proc_requests__NumPrime_11 = ((MR_Integer) check_hlds__proc_requests__conv0_NumPrime_11);
                    check_hlds__proc_requests__succeeded = MR_TRUE;
                  }
              }
          }
      }
    if (check_hlds__proc_requests__succeeded)
      *check_hlds__proc_requests__Num_10 = check_hlds__proc_requests__NumPrime_11;
    else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.proc_requests.lookup_mode_num\'/5", (MR_String) "search_num failed");
          return;
        }
      }
  }
}

static void MR_CALL 
check_hlds__proc_requests__request_proc_9_p_0_1(
  void * check_hlds__proc_requests__env_ptr_arg)
{
  {
    struct check_hlds__proc_requests__request_proc_9_p_0_env_0_s * check_hlds__proc_requests__env_ptr = (struct check_hlds__proc_requests__request_proc_9_p_0_env_0_s *) check_hlds__proc_requests__env_ptr_arg;

    MR_builtin_longjmp((check_hlds__proc_requests__env_ptr)->check_hlds__proc_requests__request_proc_9_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
check_hlds__proc_requests__request_proc_9_p_0_3(
  void * check_hlds__proc_requests__env_ptr_arg)
{
  {
    struct check_hlds__proc_requests__request_proc_9_p_0_env_0_s * check_hlds__proc_requests__env_ptr = (struct check_hlds__proc_requests__request_proc_9_p_0_env_0_s *) check_hlds__proc_requests__env_ptr_arg;

    (check_hlds__proc_requests__env_ptr)->check_hlds__proc_requests__request_proc_9_p_0_env_0__ArgMode_30 = ((MR_Word) (check_hlds__proc_requests__env_ptr)->check_hlds__proc_requests__request_proc_9_p_0_env_0__conv2_ArgMode_30);
    {
      check_hlds__proc_requests__request_proc_9_p_0_2(check_hlds__proc_requests__env_ptr);
    }
  }
}

static void MR_CALL 
check_hlds__proc_requests__request_proc_9_p_0_2(
  void * check_hlds__proc_requests__env_ptr_arg)
{
  {
    struct check_hlds__proc_requests__request_proc_9_p_0_env_0_s * check_hlds__proc_requests__env_ptr = (struct check_hlds__proc_requests__request_proc_9_p_0_env_0_s *) check_hlds__proc_requests__env_ptr_arg;

    {
      (check_hlds__proc_requests__env_ptr)->check_hlds__proc_requests__request_proc_9_p_0_env_0__succeeded = check_hlds__mode_util__mode_is_fully_input_2_p_0((check_hlds__proc_requests__env_ptr)->check_hlds__proc_requests__request_proc_9_p_0_env_0__STATE_VARIABLE_ModuleInfo_0_35, (check_hlds__proc_requests__env_ptr)->check_hlds__proc_requests__request_proc_9_p_0_env_0__ArgMode_30);
    }
    (check_hlds__proc_requests__env_ptr)->check_hlds__proc_requests__request_proc_9_p_0_env_0__succeeded = !((check_hlds__proc_requests__env_ptr)->check_hlds__proc_requests__request_proc_9_p_0_env_0__succeeded);
    if ((check_hlds__proc_requests__env_ptr)->check_hlds__proc_requests__request_proc_9_p_0_env_0__succeeded)
      {
        check_hlds__proc_requests__request_proc_9_p_0_1(check_hlds__proc_requests__env_ptr);
      }
  }
}

static void MR_CALL 
check_hlds__proc_requests__request_proc_9_p_0_4(
  void * check_hlds__proc_requests__env_ptr_arg)
{
  {
    struct check_hlds__proc_requests__request_proc_9_p_0_env_0_s * check_hlds__proc_requests__env_ptr = (struct check_hlds__proc_requests__request_proc_9_p_0_env_0_s *) check_hlds__proc_requests__env_ptr_arg;

    if (MR_builtin_setjmp((check_hlds__proc_requests__env_ptr)->check_hlds__proc_requests__request_proc_9_p_0_env_0__commit_0) == 0)
      {
        {
          mercury__list__member_2_p_1((check_hlds__proc_requests__env_ptr)->check_hlds__proc_requests__request_proc_9_p_0_env_0__TypeCtorInfo_61_61, &(check_hlds__proc_requests__env_ptr)->check_hlds__proc_requests__request_proc_9_p_0_env_0__conv2_ArgMode_30, (check_hlds__proc_requests__env_ptr)->check_hlds__proc_requests__request_proc_9_p_0_env_0__ArgModes_11, check_hlds__proc_requests__request_proc_9_p_0_3, check_hlds__proc_requests__env_ptr);
        }
        (check_hlds__proc_requests__env_ptr)->check_hlds__proc_requests__request_proc_9_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (check_hlds__proc_requests__env_ptr)->check_hlds__proc_requests__request_proc_9_p_0_env_0__succeeded = MR_TRUE;
  }
}

void MR_CALL 
check_hlds__proc_requests__request_proc_9_p_0(
  MR_Word check_hlds__proc_requests__PredId_10,
  MR_Word check_hlds__proc_requests__ArgModes_11,
  MR_Word check_hlds__proc_requests__InstVarSet_12,
  MR_Word check_hlds__proc_requests__ArgLives_13,
  MR_Word check_hlds__proc_requests__MaybeDet_14,
  MR_Word check_hlds__proc_requests__Context_15,
  MR_Integer * check_hlds__proc_requests__ProcId_16,
  MR_Word check_hlds__proc_requests__STATE_VARIABLE_ModuleInfo_0_35,
  MR_Word * check_hlds__proc_requests__STATE_VARIABLE_ModuleInfo_36)
{
  {
    struct check_hlds__proc_requests__request_proc_9_p_0_env_0_s check_hlds__proc_requests__env;

    (check_hlds__proc_requests__env).check_hlds__proc_requests__request_proc_9_p_0_env_0__ArgModes_11 = check_hlds__proc_requests__ArgModes_11;
    (check_hlds__proc_requests__env).check_hlds__proc_requests__request_proc_9_p_0_env_0__STATE_VARIABLE_ModuleInfo_0_35 = check_hlds__proc_requests__STATE_VARIABLE_ModuleInfo_0_35;
    {
      MR_Word check_hlds__proc_requests__TypeCtorInfo_59_59;
      MR_Word check_hlds__proc_requests__TypeCtorInfo_60_60;
      MR_Word check_hlds__proc_requests__TypeCtorInfo_63_63;
      MR_Integer check_hlds__proc_requests__Arity_24;
      MR_Word check_hlds__proc_requests__ClausesInfo_27;
      MR_Word check_hlds__proc_requests__Origin_28;
      MR_Word check_hlds__proc_requests__Requests0_31;
      MR_Word check_hlds__proc_requests__ReqQueue0_32;
      MR_Word check_hlds__proc_requests__ReqQueue_33;
      MR_Word check_hlds__proc_requests__Requests_34;
      MR_Word check_hlds__proc_requests__STATE_VARIABLE_PredMap_37_37;
      MR_Word check_hlds__proc_requests__STATE_VARIABLE_PredInfo_38_38;
      MR_Word check_hlds__proc_requests__STATE_VARIABLE_PredInfo_41_41;
      MR_Word check_hlds__proc_requests__STATE_VARIABLE_ProcMap_42_42;
      MR_Word check_hlds__proc_requests__STATE_VARIABLE_ProcInfo_43_43;
      MR_Word check_hlds__proc_requests__STATE_VARIABLE_ProcInfo_45_45;
      MR_Word check_hlds__proc_requests__STATE_VARIABLE_ProcInfo_46_46;
      MR_Word check_hlds__proc_requests__STATE_VARIABLE_Goal_47_47;
      MR_Word check_hlds__proc_requests__STATE_VARIABLE_Goal_48_48;
      MR_Word check_hlds__proc_requests__STATE_VARIABLE_Goal_51_51;
      MR_Word check_hlds__proc_requests__STATE_VARIABLE_ProcInfo_52_52;
      MR_Word check_hlds__proc_requests__STATE_VARIABLE_ProcMap_53_53;
      MR_Word check_hlds__proc_requests__STATE_VARIABLE_PredInfo_54_54;
      MR_Word check_hlds__proc_requests__STATE_VARIABLE_PredMap_55_55;
      MR_Word check_hlds__proc_requests__STATE_VARIABLE_ModuleInfo_56_56;
      MR_Word check_hlds__proc_requests__Var_57;
      MR_Box check_hlds__proc_requests__conv0_STATE_VARIABLE_PredInfo_38_38;
      MR_Box check_hlds__proc_requests__conv1_STATE_VARIABLE_ProcInfo_43_43;
      MR_Word check_hlds__proc_requests__Var_49;
      MR_Word check_hlds__proc_requests___TypeCtor_29;
      MR_Word check_hlds__proc_requests__Var_50;
      MR_Word check_hlds__proc_requests__Var_67;
      MR_Word check_hlds__proc_requests__Var_73;
      MR_Word check_hlds__proc_requests__Var_74;

      {
        hlds__hlds_module__module_info_get_preds_2_p_0((check_hlds__proc_requests__env).check_hlds__proc_requests__request_proc_9_p_0_env_0__STATE_VARIABLE_ModuleInfo_0_35, &check_hlds__proc_requests__STATE_VARIABLE_PredMap_37_37);
      }
      check_hlds__proc_requests__TypeCtorInfo_59_59 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
      check_hlds__proc_requests__TypeCtorInfo_60_60 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
      {
        mercury__map__lookup_3_p_0(check_hlds__proc_requests__TypeCtorInfo_59_59, check_hlds__proc_requests__TypeCtorInfo_60_60, check_hlds__proc_requests__STATE_VARIABLE_PredMap_37_37, ((MR_Box) (check_hlds__proc_requests__PredId_10)), &check_hlds__proc_requests__conv0_STATE_VARIABLE_PredInfo_38_38);
      }
      check_hlds__proc_requests__STATE_VARIABLE_PredInfo_38_38 = ((MR_Word) check_hlds__proc_requests__conv0_STATE_VARIABLE_PredInfo_38_38);
      (check_hlds__proc_requests__env).check_hlds__proc_requests__request_proc_9_p_0_env_0__TypeCtorInfo_61_61 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
      {
        mercury__list__length_2_p_0((check_hlds__proc_requests__env).check_hlds__proc_requests__request_proc_9_p_0_env_0__TypeCtorInfo_61_61, (check_hlds__proc_requests__env).check_hlds__proc_requests__request_proc_9_p_0_env_0__ArgModes_11, &check_hlds__proc_requests__Arity_24);
      }
      {
        hlds__make_hlds__add_new_proc_14_p_0(check_hlds__proc_requests__Context_15, (MR_Integer) -1, check_hlds__proc_requests__Arity_24, check_hlds__proc_requests__InstVarSet_12, (check_hlds__proc_requests__env).check_hlds__proc_requests__request_proc_9_p_0_env_0__ArgModes_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__proc_requests__ArgLives_13, (MR_Integer) 1, check_hlds__proc_requests__MaybeDet_14, (MR_Integer) 1, (MR_Integer) 1, check_hlds__proc_requests__STATE_VARIABLE_PredInfo_38_38, &check_hlds__proc_requests__STATE_VARIABLE_PredInfo_41_41, check_hlds__proc_requests__ProcId_16);
      }
      {
        hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__proc_requests__STATE_VARIABLE_PredInfo_41_41, &check_hlds__proc_requests__STATE_VARIABLE_ProcMap_42_42);
      }
      {
        hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__proc_requests__STATE_VARIABLE_PredInfo_41_41, &check_hlds__proc_requests__ClausesInfo_27);
      }
      check_hlds__proc_requests__TypeCtorInfo_63_63 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
      {
        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(check_hlds__proc_requests__TypeCtorInfo_63_63, check_hlds__proc_requests__STATE_VARIABLE_ProcMap_42_42, *check_hlds__proc_requests__ProcId_16, &check_hlds__proc_requests__conv1_STATE_VARIABLE_ProcInfo_43_43);
      }
      check_hlds__proc_requests__STATE_VARIABLE_ProcInfo_43_43 = ((MR_Word) check_hlds__proc_requests__conv1_STATE_VARIABLE_ProcInfo_43_43);
      {
        hlds__hlds_pred__proc_info_set_can_process_3_p_0((MR_Integer) 0, check_hlds__proc_requests__STATE_VARIABLE_ProcInfo_43_43, &check_hlds__proc_requests__STATE_VARIABLE_ProcInfo_45_45);
      }
      {
        check_hlds__clause_to_proc__copy_clauses_to_proc_4_p_0(*check_hlds__proc_requests__ProcId_16, check_hlds__proc_requests__ClausesInfo_27, check_hlds__proc_requests__STATE_VARIABLE_ProcInfo_45_45, &check_hlds__proc_requests__STATE_VARIABLE_ProcInfo_46_46);
      }
      {
        hlds__hlds_pred__proc_info_get_goal_2_p_0(check_hlds__proc_requests__STATE_VARIABLE_ProcInfo_46_46, &check_hlds__proc_requests__STATE_VARIABLE_Goal_47_47);
      }
      {
        hlds__hlds_goal__set_goal_contexts_3_p_0(check_hlds__proc_requests__Context_15, check_hlds__proc_requests__STATE_VARIABLE_Goal_47_47, &check_hlds__proc_requests__STATE_VARIABLE_Goal_48_48);
      }
      {
        hlds__hlds_pred__pred_info_get_origin_2_p_0(check_hlds__proc_requests__STATE_VARIABLE_PredInfo_41_41, &check_hlds__proc_requests__Origin_28);
      }
      (check_hlds__proc_requests__env).check_hlds__proc_requests__request_proc_9_p_0_env_0__succeeded = ((MR_tag((MR_Word) check_hlds__proc_requests__Origin_28)) == (MR_mktag((MR_Integer) 0)));
      if ((check_hlds__proc_requests__env).check_hlds__proc_requests__request_proc_9_p_0_env_0__succeeded)
        {
          check_hlds__proc_requests__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__proc_requests__Origin_28, (MR_Integer) 0)));
          check_hlds__proc_requests___TypeCtor_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__proc_requests__Origin_28, (MR_Integer) 1)));
          (check_hlds__proc_requests__env).check_hlds__proc_requests__request_proc_9_p_0_env_0__succeeded = (check_hlds__proc_requests__Var_49 == (MR_Integer) 0);
          if ((check_hlds__proc_requests__env).check_hlds__proc_requests__request_proc_9_p_0_env_0__succeeded)
            {
              {
                check_hlds__proc_requests__request_proc_9_p_0_4(&check_hlds__proc_requests__env);
              }
              (check_hlds__proc_requests__env).check_hlds__proc_requests__request_proc_9_p_0_env_0__succeeded = !((check_hlds__proc_requests__env).check_hlds__proc_requests__request_proc_9_p_0_env_0__succeeded);
              if ((check_hlds__proc_requests__env).check_hlds__proc_requests__request_proc_9_p_0_env_0__succeeded)
                {
                  (check_hlds__proc_requests__env).check_hlds__proc_requests__request_proc_9_p_0_env_0__succeeded = ((MR_tag((MR_Word) check_hlds__proc_requests__MaybeDet_14)) == (MR_mktag((MR_Integer) 1)));
                  if ((check_hlds__proc_requests__env).check_hlds__proc_requests__request_proc_9_p_0_env_0__succeeded)
                    {
                      check_hlds__proc_requests__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__proc_requests__MaybeDet_14, (MR_Integer) 0)));
                      (check_hlds__proc_requests__env).check_hlds__proc_requests__request_proc_9_p_0_env_0__succeeded = (check_hlds__proc_requests__Var_50 == (MR_Integer) 7);
                    }
                  (check_hlds__proc_requests__env).check_hlds__proc_requests__request_proc_9_p_0_env_0__succeeded = !((check_hlds__proc_requests__env).check_hlds__proc_requests__request_proc_9_p_0_env_0__succeeded);
                }
            }
        }
      if ((check_hlds__proc_requests__env).check_hlds__proc_requests__request_proc_9_p_0_env_0__succeeded)
        check_hlds__proc_requests__STATE_VARIABLE_Goal_51_51 = check_hlds__proc_requests__STATE_VARIABLE_Goal_48_48;
      else
        {
          check_hlds__proc_requests__STATE_VARIABLE_Goal_51_51 = hlds__goal_util__maybe_strip_equality_pretest_1_f_0(check_hlds__proc_requests__STATE_VARIABLE_Goal_48_48);
        }
      {
        hlds__hlds_pred__proc_info_set_goal_3_p_0(check_hlds__proc_requests__STATE_VARIABLE_Goal_51_51, check_hlds__proc_requests__STATE_VARIABLE_ProcInfo_46_46, &check_hlds__proc_requests__STATE_VARIABLE_ProcInfo_52_52);
      }
      {
        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(check_hlds__proc_requests__TypeCtorInfo_63_63, *check_hlds__proc_requests__ProcId_16, ((MR_Box) (check_hlds__proc_requests__STATE_VARIABLE_ProcInfo_52_52)), check_hlds__proc_requests__STATE_VARIABLE_ProcMap_42_42, &check_hlds__proc_requests__STATE_VARIABLE_ProcMap_53_53);
      }
      {
        hlds__hlds_pred__pred_info_set_proc_table_3_p_0(check_hlds__proc_requests__STATE_VARIABLE_ProcMap_53_53, check_hlds__proc_requests__STATE_VARIABLE_PredInfo_41_41, &check_hlds__proc_requests__STATE_VARIABLE_PredInfo_54_54);
      }
      {
        mercury__map__det_update_4_p_0(check_hlds__proc_requests__TypeCtorInfo_59_59, check_hlds__proc_requests__TypeCtorInfo_60_60, ((MR_Box) (check_hlds__proc_requests__PredId_10)), ((MR_Box) (check_hlds__proc_requests__STATE_VARIABLE_PredInfo_54_54)), check_hlds__proc_requests__STATE_VARIABLE_PredMap_37_37, &check_hlds__proc_requests__STATE_VARIABLE_PredMap_55_55);
      }
      {
        hlds__hlds_module__module_info_set_preds_3_p_0(check_hlds__proc_requests__STATE_VARIABLE_PredMap_55_55, (check_hlds__proc_requests__env).check_hlds__proc_requests__request_proc_9_p_0_env_0__STATE_VARIABLE_ModuleInfo_0_35, &check_hlds__proc_requests__STATE_VARIABLE_ModuleInfo_56_56);
      }
      {
        hlds__hlds_module__module_info_get_proc_requests_2_p_0(check_hlds__proc_requests__STATE_VARIABLE_ModuleInfo_56_56, &check_hlds__proc_requests__Requests0_31);
      }
      check_hlds__proc_requests__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__proc_requests__Requests0_31, (MR_Integer) 0)));
      check_hlds__proc_requests__ReqQueue0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__proc_requests__Requests0_31, (MR_Integer) 1)));
      {
        check_hlds__proc_requests__Var_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), check_hlds__proc_requests__Var_57, 0) = ((MR_Box) (check_hlds__proc_requests__PredId_10));
        MR_hl_field(MR_mktag(0), check_hlds__proc_requests__Var_57, 1) = ((MR_Box) (*check_hlds__proc_requests__ProcId_16));
      }
      {
        mercury__queue__put_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, ((MR_Box) (check_hlds__proc_requests__Var_57)), check_hlds__proc_requests__ReqQueue0_32, &check_hlds__proc_requests__ReqQueue_33);
      }
      check_hlds__proc_requests__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__proc_requests__Requests0_31, (MR_Integer) 0)));
      check_hlds__proc_requests__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__proc_requests__Requests0_31, (MR_Integer) 1)));
      {
        check_hlds__proc_requests__Requests_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), check_hlds__proc_requests__Requests_34, 0) = ((MR_Box) (check_hlds__proc_requests__Var_73));
        MR_hl_field(MR_mktag(0), check_hlds__proc_requests__Requests_34, 1) = ((MR_Box) (check_hlds__proc_requests__ReqQueue_33));
      }
      {
        hlds__hlds_module__module_info_set_proc_requests_3_p_0(check_hlds__proc_requests__Requests_34, check_hlds__proc_requests__STATE_VARIABLE_ModuleInfo_56_56, check_hlds__proc_requests__STATE_VARIABLE_ModuleInfo_36);
      }
    }
  }
}

void MR_CALL 
check_hlds__proc_requests__request_unify_6_p_0(
  MR_Word check_hlds__proc_requests__UnifyId_7,
  MR_Word check_hlds__proc_requests__InstVarSet_8,
  MR_Word check_hlds__proc_requests__Determinism_9,
  MR_Word check_hlds__proc_requests__Context_10,
  MR_Word check_hlds__proc_requests__STATE_VARIABLE_ModuleInfo_0_52,
  MR_Word * check_hlds__proc_requests__STATE_VARIABLE_ModuleInfo_53)
{
  {
    MR_bool check_hlds__proc_requests__succeeded;
    MR_Word check_hlds__proc_requests__TypeCtor_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__proc_requests__UnifyId_7, (MR_Integer) 0)));
    MR_Word check_hlds__proc_requests__UnifyMode_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__proc_requests__UnifyId_7, (MR_Integer) 1)));
    MR_Word check_hlds__proc_requests__MaybeRecompInfo0_14;
    MR_Word check_hlds__proc_requests__STATE_VARIABLE_ModuleInfo_57_57;

    {
      hlds__hlds_module__module_info_get_maybe_recompilation_info_2_p_0(check_hlds__proc_requests__STATE_VARIABLE_ModuleInfo_0_52, &check_hlds__proc_requests__MaybeRecompInfo0_14);
    }
    if ((check_hlds__proc_requests__MaybeRecompInfo0_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      check_hlds__proc_requests__STATE_VARIABLE_ModuleInfo_57_57 = check_hlds__proc_requests__STATE_VARIABLE_ModuleInfo_0_52;
    else
      {
        MR_Word check_hlds__proc_requests__RecompInfo0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__proc_requests__MaybeRecompInfo0_14, (MR_Integer) 0)));
        MR_Word check_hlds__proc_requests__TypeCtorItem_16;
        MR_Word check_hlds__proc_requests__RecompInfo_17;
        MR_Word check_hlds__proc_requests__Var_56;

        {
          check_hlds__proc_requests__TypeCtorItem_16 = recompilation__type_ctor_to_item_name_1_f_0(check_hlds__proc_requests__TypeCtor_12);
        }
        {
          recompilation__record_used_item_5_p_0((MR_Integer) 1, check_hlds__proc_requests__TypeCtorItem_16, check_hlds__proc_requests__TypeCtorItem_16, check_hlds__proc_requests__RecompInfo0_15, &check_hlds__proc_requests__RecompInfo_17);
        }
        {
          check_hlds__proc_requests__Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__proc_requests__Var_56, 0) = ((MR_Box) (check_hlds__proc_requests__RecompInfo_17));
        }
        {
          hlds__hlds_module__module_info_set_maybe_recompilation_info_3_p_0(check_hlds__proc_requests__Var_56, check_hlds__proc_requests__STATE_VARIABLE_ModuleInfo_0_52, &check_hlds__proc_requests__STATE_VARIABLE_ModuleInfo_57_57);
        }
      }
    {
      MR_Word check_hlds__proc_requests__InitInstX_77;
      MR_Word check_hlds__proc_requests__InitInstY_79;
      MR_Word check_hlds__proc_requests__Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__proc_requests__UnifyMode_13, (MR_Integer) 0)));
      MR_Word check_hlds__proc_requests__Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__proc_requests__UnifyMode_13, (MR_Integer) 1)));
      MR_Word check_hlds__proc_requests___FinalInstX_78;
      MR_Word check_hlds__proc_requests___FinalInstY_80;

      check_hlds__proc_requests__InitInstX_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__proc_requests__Var_83, (MR_Integer) 0)));
      check_hlds__proc_requests___FinalInstX_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__proc_requests__Var_83, (MR_Integer) 1)));
      check_hlds__proc_requests__InitInstY_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__proc_requests__Var_84, (MR_Integer) 0)));
      check_hlds__proc_requests___FinalInstY_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__proc_requests__Var_84, (MR_Integer) 1)));
      check_hlds__proc_requests__succeeded = (check_hlds__proc_requests__Determinism_9 == (MR_Integer) 1);
      if (check_hlds__proc_requests__succeeded)
        {
          {
            check_hlds__proc_requests__succeeded = check_hlds__inst_test__inst_is_ground_or_any_2_p_0(check_hlds__proc_requests__STATE_VARIABLE_ModuleInfo_57_57, check_hlds__proc_requests__InitInstX_77);
          }
          if (check_hlds__proc_requests__succeeded)
            {
              check_hlds__proc_requests__succeeded = check_hlds__inst_test__inst_is_ground_or_any_2_p_0(check_hlds__proc_requests__STATE_VARIABLE_ModuleInfo_57_57, check_hlds__proc_requests__InitInstY_79);
            }
        }
      if (check_hlds__proc_requests__succeeded)
        {
          MR_Integer check_hlds__proc_requests__Var_18;

          {
            hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&check_hlds__proc_requests__Var_18);
          }
          check_hlds__proc_requests__succeeded = MR_TRUE;
        }
      else
        {
          check_hlds__proc_requests__succeeded = (check_hlds__proc_requests__InitInstX_77 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
          if (check_hlds__proc_requests__succeeded)
            {
              MR_Integer check_hlds__proc_requests__Var_94;

              {
                hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&check_hlds__proc_requests__Var_94);
              }
              check_hlds__proc_requests__succeeded = MR_TRUE;
            }
          else
            {
              check_hlds__proc_requests__succeeded = (check_hlds__proc_requests__InitInstY_79 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
              if (check_hlds__proc_requests__succeeded)
                {
                  MR_Integer check_hlds__proc_requests__Var_95;

                  {
                    hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&check_hlds__proc_requests__Var_95);
                  }
                  check_hlds__proc_requests__succeeded = MR_TRUE;
                }
              else
                {
                  MR_Word check_hlds__proc_requests__Requests_81;
                  MR_Word check_hlds__proc_requests__UnifyReqMap_82;
                  MR_Word check_hlds__proc_requests__Var_90;
                  MR_Integer check_hlds__proc_requests__Var_96;
                  MR_Box check_hlds__proc_requests__conv0_Var_96;

                  {
                    hlds__hlds_module__module_info_get_proc_requests_2_p_0(check_hlds__proc_requests__STATE_VARIABLE_ModuleInfo_57_57, &check_hlds__proc_requests__Requests_81);
                  }
                  check_hlds__proc_requests__UnifyReqMap_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__proc_requests__Requests_81, (MR_Integer) 0)));
                  check_hlds__proc_requests__Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__proc_requests__Requests_81, (MR_Integer) 1)));
                  {
                    check_hlds__proc_requests__succeeded = mercury__map__search_3_p_0((MR_Word) &check_hlds__proc_requests__check_hlds__proc_requests__type_ctor_info_unify_proc_id_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, check_hlds__proc_requests__UnifyReqMap_82, ((MR_Box) (check_hlds__proc_requests__UnifyId_7)), &check_hlds__proc_requests__conv0_Var_96);
                  }
                  if (check_hlds__proc_requests__succeeded)
                    {
                      check_hlds__proc_requests__Var_96 = ((MR_Integer) check_hlds__proc_requests__conv0_Var_96);
                      check_hlds__proc_requests__succeeded = MR_TRUE;
                    }
                }
            }
        }
    }
    if (!(check_hlds__proc_requests__succeeded))
      {
        MR_Word check_hlds__proc_requests__TypeTable_19;
        MR_Word check_hlds__proc_requests__TypeDefn_20;
        MR_Word check_hlds__proc_requests__TypeBody_21;

        {
          hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__proc_requests__STATE_VARIABLE_ModuleInfo_57_57, &check_hlds__proc_requests__TypeTable_19);
        }
        {
          check_hlds__proc_requests__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(check_hlds__proc_requests__TypeTable_19, check_hlds__proc_requests__TypeCtor_12, &check_hlds__proc_requests__TypeDefn_20);
        }
        if (check_hlds__proc_requests__succeeded)
          {
            {
              hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__proc_requests__TypeDefn_20, &check_hlds__proc_requests__TypeBody_21);
            }
            {
              MR_Word check_hlds__proc_requests__TypeName_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__proc_requests__TypeCtor_12, (MR_Integer) 0)));
              MR_Word check_hlds__proc_requests__TypeModuleName_24;
              MR_Word check_hlds__proc_requests__ModuleName_26;
              MR_Integer check_hlds__proc_requests___TypeArity_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__proc_requests__TypeCtor_12, (MR_Integer) 1)));
              MR_String check_hlds__proc_requests__Var_25;
              MR_Word check_hlds__proc_requests__Var_27;

              check_hlds__proc_requests__succeeded = ((MR_tag((MR_Word) check_hlds__proc_requests__TypeName_22)) == (MR_mktag((MR_Integer) 1)));
              if (check_hlds__proc_requests__succeeded)
                {
                  check_hlds__proc_requests__TypeModuleName_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__proc_requests__TypeName_22, (MR_Integer) 0)));
                  check_hlds__proc_requests__Var_25 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__proc_requests__TypeName_22, (MR_Integer) 1)));
                  {
                    hlds__hlds_module__module_info_get_name_2_p_0(check_hlds__proc_requests__STATE_VARIABLE_ModuleInfo_57_57, &check_hlds__proc_requests__ModuleName_26);
                  }
                  {
                    check_hlds__proc_requests__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(check_hlds__proc_requests__ModuleName_26, check_hlds__proc_requests__TypeModuleName_24);
                  }
                  if (check_hlds__proc_requests__succeeded)
                    {
                      check_hlds__proc_requests__succeeded = ((((MR_tag((MR_Word) check_hlds__proc_requests__TypeBody_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__proc_requests__TypeBody_21, (MR_Integer) 0)))) == (MR_Integer) 1)));
                      if (check_hlds__proc_requests__succeeded)
                        check_hlds__proc_requests__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__proc_requests__TypeBody_21, (MR_Integer) 1)));
                    }
                }
            }
            if (!(check_hlds__proc_requests__succeeded))
              {
                check_hlds__proc_requests__succeeded = check_hlds__type_util__type_ctor_has_hand_defined_rtti_2_p_0(check_hlds__proc_requests__TypeCtor_12, check_hlds__proc_requests__TypeBody_21);
              }
          }
      }
    if (check_hlds__proc_requests__succeeded)
      *check_hlds__proc_requests__STATE_VARIABLE_ModuleInfo_53 = check_hlds__proc_requests__STATE_VARIABLE_ModuleInfo_57_57;
    else
      {
        MR_Word check_hlds__proc_requests__TypeCtorInfo_68_68;
        MR_Word check_hlds__proc_requests__SpecialPredMaps_28;
        MR_Word check_hlds__proc_requests__UnifyMap_29;
        MR_Word check_hlds__proc_requests__PredId_31;
        MR_Word check_hlds__proc_requests__LHSInsts_32;
        MR_Word check_hlds__proc_requests__RHSInsts_33;
        MR_Word check_hlds__proc_requests__LHSInit_34;
        MR_Word check_hlds__proc_requests__LHSFinal_35;
        MR_Word check_hlds__proc_requests__RHSInit_36;
        MR_Word check_hlds__proc_requests__RHSFinal_37;
        MR_Word check_hlds__proc_requests__LHSMode_38;
        MR_Word check_hlds__proc_requests__RHSMode_39;
        MR_Word check_hlds__proc_requests__ArgModes0_40;
        MR_Word check_hlds__proc_requests__InMode_41;
        MR_Integer check_hlds__proc_requests__TypeArity_43;
        MR_Word check_hlds__proc_requests__TypeInfoModes_44;
        MR_Word check_hlds__proc_requests__ArgModes_45;
        MR_Integer check_hlds__proc_requests__ProcId_47;
        MR_Word check_hlds__proc_requests__Requests0_48;
        MR_Word check_hlds__proc_requests__UnifyReqMap0_49;
        MR_Word check_hlds__proc_requests__UnifyReqMap_50;
        MR_Word check_hlds__proc_requests__Requests_51;
        MR_Word check_hlds__proc_requests__STATE_VARIABLE_ModuleInfo_58_58;
        MR_Word check_hlds__proc_requests__Var_59;
        MR_Word check_hlds__proc_requests__Var_61;
        MR_Word check_hlds__proc_requests__STATE_VARIABLE_ModuleInfo_62_62;
        MR_Word check_hlds__proc_requests__Var_64;
        MR_Word check_hlds__proc_requests__Var_65;
        MR_Word check_hlds__proc_requests__PredIdPrime_30;
        MR_Box check_hlds__proc_requests__conv1_PredIdPrime_30;
        MR_Word check_hlds__proc_requests__Var_42;
        MR_Word check_hlds__proc_requests__Var_93;

        {
          hlds__hlds_module__module_info_get_special_pred_maps_2_p_0(check_hlds__proc_requests__STATE_VARIABLE_ModuleInfo_57_57, &check_hlds__proc_requests__SpecialPredMaps_28);
        }
        check_hlds__proc_requests__UnifyMap_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__proc_requests__SpecialPredMaps_28, (MR_Integer) 0)));
        check_hlds__proc_requests__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__proc_requests__SpecialPredMaps_28, (MR_Integer) 1)));
        check_hlds__proc_requests__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__proc_requests__SpecialPredMaps_28, (MR_Integer) 2)));
        {
          check_hlds__proc_requests__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, check_hlds__proc_requests__UnifyMap_29, ((MR_Box) (check_hlds__proc_requests__TypeCtor_12)), &check_hlds__proc_requests__conv1_PredIdPrime_30);
        }
        if (check_hlds__proc_requests__succeeded)
          {
            check_hlds__proc_requests__PredIdPrime_30 = ((MR_Word) check_hlds__proc_requests__conv1_PredIdPrime_30);
            check_hlds__proc_requests__succeeded = MR_TRUE;
          }
        if (check_hlds__proc_requests__succeeded)
          {
            check_hlds__proc_requests__PredId_31 = check_hlds__proc_requests__PredIdPrime_30;
            check_hlds__proc_requests__STATE_VARIABLE_ModuleInfo_58_58 = check_hlds__proc_requests__STATE_VARIABLE_ModuleInfo_57_57;
          }
        else
          {
            check_hlds__unify_proc__add_lazily_generated_unify_pred_4_p_0(check_hlds__proc_requests__TypeCtor_12, &check_hlds__proc_requests__PredId_31, check_hlds__proc_requests__STATE_VARIABLE_ModuleInfo_57_57, &check_hlds__proc_requests__STATE_VARIABLE_ModuleInfo_58_58);
          }
        check_hlds__proc_requests__LHSInsts_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__proc_requests__UnifyMode_13, (MR_Integer) 0)));
        check_hlds__proc_requests__RHSInsts_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__proc_requests__UnifyMode_13, (MR_Integer) 1)));
        check_hlds__proc_requests__LHSInit_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__proc_requests__LHSInsts_32, (MR_Integer) 0)));
        check_hlds__proc_requests__LHSFinal_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__proc_requests__LHSInsts_32, (MR_Integer) 1)));
        check_hlds__proc_requests__RHSInit_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__proc_requests__RHSInsts_33, (MR_Integer) 0)));
        check_hlds__proc_requests__RHSFinal_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__proc_requests__RHSInsts_33, (MR_Integer) 1)));
        {
          check_hlds__proc_requests__LHSMode_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__proc_requests__LHSMode_38, 0) = ((MR_Box) (check_hlds__proc_requests__LHSInit_34));
          MR_hl_field(MR_mktag(0), check_hlds__proc_requests__LHSMode_38, 1) = ((MR_Box) (check_hlds__proc_requests__LHSFinal_35));
        }
        {
          check_hlds__proc_requests__RHSMode_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__proc_requests__RHSMode_39, 0) = ((MR_Box) (check_hlds__proc_requests__RHSInit_36));
          MR_hl_field(MR_mktag(0), check_hlds__proc_requests__RHSMode_39, 1) = ((MR_Box) (check_hlds__proc_requests__RHSFinal_37));
        }
        {
          check_hlds__proc_requests__Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__proc_requests__Var_59, 0) = ((MR_Box) (check_hlds__proc_requests__RHSMode_39));
          MR_hl_field(MR_mktag(1), check_hlds__proc_requests__Var_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          check_hlds__proc_requests__ArgModes0_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__proc_requests__ArgModes0_40, 0) = ((MR_Box) (check_hlds__proc_requests__LHSMode_38));
          MR_hl_field(MR_mktag(1), check_hlds__proc_requests__ArgModes0_40, 1) = ((MR_Box) (check_hlds__proc_requests__Var_59));
        }
        {
          parse_tree__prog_mode__in_mode_1_p_0(&check_hlds__proc_requests__InMode_41);
        }
        check_hlds__proc_requests__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__proc_requests__TypeCtor_12, (MR_Integer) 0)));
        check_hlds__proc_requests__TypeArity_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__proc_requests__TypeCtor_12, (MR_Integer) 1)));
        check_hlds__proc_requests__TypeCtorInfo_68_68 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
        {
          mercury__list__duplicate_3_p_0(check_hlds__proc_requests__TypeCtorInfo_68_68, check_hlds__proc_requests__TypeArity_43, ((MR_Box) (check_hlds__proc_requests__InMode_41)), &check_hlds__proc_requests__TypeInfoModes_44);
        }
        {
          check_hlds__proc_requests__ArgModes_45 = mercury__list__f_43_43_2_f_0(check_hlds__proc_requests__TypeCtorInfo_68_68, check_hlds__proc_requests__TypeInfoModes_44, check_hlds__proc_requests__ArgModes0_40);
        }
        {
          check_hlds__proc_requests__Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__proc_requests__Var_61, 0) = ((MR_Box) (check_hlds__proc_requests__Determinism_9));
        }
        {
          check_hlds__proc_requests__request_proc_9_p_0(check_hlds__proc_requests__PredId_31, check_hlds__proc_requests__ArgModes_45, check_hlds__proc_requests__InstVarSet_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__proc_requests__Var_61, check_hlds__proc_requests__Context_10, &check_hlds__proc_requests__ProcId_47, check_hlds__proc_requests__STATE_VARIABLE_ModuleInfo_58_58, &check_hlds__proc_requests__STATE_VARIABLE_ModuleInfo_62_62);
        }
        {
          hlds__hlds_module__module_info_get_proc_requests_2_p_0(check_hlds__proc_requests__STATE_VARIABLE_ModuleInfo_62_62, &check_hlds__proc_requests__Requests0_48);
        }
        check_hlds__proc_requests__UnifyReqMap0_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__proc_requests__Requests0_48, (MR_Integer) 0)));
        check_hlds__proc_requests__Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__proc_requests__Requests0_48, (MR_Integer) 1)));
        {
          mercury__map__set_4_p_0((MR_Word) &check_hlds__proc_requests__check_hlds__proc_requests__type_ctor_info_unify_proc_id_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (check_hlds__proc_requests__UnifyId_7)), ((MR_Box) (check_hlds__proc_requests__ProcId_47)), check_hlds__proc_requests__UnifyReqMap0_49, &check_hlds__proc_requests__UnifyReqMap_50);
        }
        {
          check_hlds__proc_requests__set_unify_req_map_3_p_0(check_hlds__proc_requests__UnifyReqMap_50, check_hlds__proc_requests__Requests0_48, &check_hlds__proc_requests__Requests_51);
        }
        {
          hlds__hlds_module__module_info_set_proc_requests_3_p_0(check_hlds__proc_requests__Requests_51, check_hlds__proc_requests__STATE_VARIABLE_ModuleInfo_62_62, check_hlds__proc_requests__STATE_VARIABLE_ModuleInfo_53);
        }
      }
  }
}

void MR_CALL 
check_hlds__proc_requests__init_requests_1_p_0(
  MR_Word * check_hlds__proc_requests__Requests_2)
{
  {
    MR_bool check_hlds__proc_requests__succeeded;
    MR_Word check_hlds__proc_requests__UnifyReqMap_3;
    MR_Word check_hlds__proc_requests__ReqQueue_4;

    {
      mercury__map__init_1_p_0((MR_Word) &check_hlds__proc_requests__check_hlds__proc_requests__type_ctor_info_unify_proc_id_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, &check_hlds__proc_requests__UnifyReqMap_3);
    }
    {
      mercury__queue__init_1_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, &check_hlds__proc_requests__ReqQueue_4);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__proc_requests__Requests_2 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__proc_requests__UnifyReqMap_3));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__proc_requests__ReqQueue_4));
    }
  }
}

void MR_CALL 
check_hlds__proc_requests__set_req_queue_3_p_0(
  MR_Word check_hlds__proc_requests__X_4,
  MR_Word check_hlds__proc_requests__STATE_VARIABLE_PR_0_6,
  MR_Word * check_hlds__proc_requests__STATE_VARIABLE_PR_7)
{
  {
    MR_bool check_hlds__proc_requests__succeeded;
    MR_Word check_hlds__proc_requests__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__proc_requests__STATE_VARIABLE_PR_0_6, (MR_Integer) 0)));
    MR_Word check_hlds__proc_requests__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__proc_requests__STATE_VARIABLE_PR_0_6, (MR_Integer) 1)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__proc_requests__STATE_VARIABLE_PR_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__proc_requests__Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__proc_requests__X_4));
    }
  }
}

void MR_CALL 
check_hlds__proc_requests__get_req_queue_2_p_0(
  MR_Word check_hlds__proc_requests__PR_3,
  MR_Word * check_hlds__proc_requests__X_4)
{
  {
    MR_bool check_hlds__proc_requests__succeeded;
    MR_Word check_hlds__proc_requests__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__proc_requests__PR_3, (MR_Integer) 0)));

    *check_hlds__proc_requests__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__proc_requests__PR_3, (MR_Integer) 1)));
  }
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

/* :- end_module check_hlds.proc_requests. */
