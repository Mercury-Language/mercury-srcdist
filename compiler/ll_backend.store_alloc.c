/*
** Automatically generated from `store_alloc.m'
** by the Mercury compiler,
** version rotd-2017-08-26
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


/* :- module ll_backend.store_alloc. */
/* :- implementation. */

/*
INIT mercury__ll_backend__store_alloc__init
ENDINIT
*/

#include "ll_backend.store_alloc.mih"


#include "analysis.mih"
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "ll_backend.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
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
#include "ll_backend.code_info.mih"
#include "ll_backend.code_loc_dep.mih"
#include "ll_backend.code_util.mih"
#include "ll_backend.continuation_info.mih"
#include "ll_backend.follow_vars.mih"
#include "ll_backend.global_data.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.liveness.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.trace_gen.mih"
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
#include "counter.mih"
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
#include "parse_tree.builtin_lib_types.mih"
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
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_EnumFunctorDesc ll_backend__store_alloc__ll_backend__store_alloc__enum_functor_desc_branched_goal_0_0;

static const MR_EnumFunctorDesc ll_backend__store_alloc__ll_backend__store_alloc__enum_functor_desc_branched_goal_0_1;

static const MR_EnumFunctorDescPtr ll_backend__store_alloc__ll_backend__store_alloc__enum_value_ordered_branched_goal_0[2];

static const MR_EnumFunctorDescPtr ll_backend__store_alloc__ll_backend__store_alloc__enum_name_ordered_branched_goal_0[2];

static const MR_Integer ll_backend__store_alloc__ll_backend__store_alloc__functor_number_map_branched_goal_0[2];

static const MR_FA_TypeInfo_Struct1 ll_backend__store_alloc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__store_alloc__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0;

static const MR_FA_TypeInfo_Struct2 ll_backend__store_alloc__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0;

static const MR_FA_TypeInfo_Struct2 ll_backend__store_alloc__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_llds__type_ctor_info_stack_slot_0;

static const MR_FA_TypeInfo_Struct2 ll_backend__store_alloc__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_PseudoTypeInfo ll_backend__store_alloc__ll_backend__store_alloc__field_types_store_alloc_info_0_0[3];

static const MR_ConstString ll_backend__store_alloc__ll_backend__store_alloc__field_names_store_alloc_info_0_0[3];

static const MR_DuFunctorDesc ll_backend__store_alloc__ll_backend__store_alloc__du_functor_desc_store_alloc_info_0_0;

static const MR_DuFunctorDescPtr ll_backend__store_alloc__ll_backend__store_alloc__du_stag_ordered_store_alloc_info_0_0[1];

static const MR_DuPtagLayout ll_backend__store_alloc__ll_backend__store_alloc__du_ptag_ordered_store_alloc_info_0[1];

static const MR_DuFunctorDescPtr ll_backend__store_alloc__ll_backend__store_alloc__du_name_ordered_store_alloc_info_0[1];

static const MR_Integer ll_backend__store_alloc__ll_backend__store_alloc__functor_number_map_store_alloc_info_0[1];

static const MR_EnumFunctorDesc ll_backend__store_alloc__ll_backend__store_alloc__enum_functor_desc_store_map_run_type_0_0;

static const MR_EnumFunctorDesc ll_backend__store_alloc__ll_backend__store_alloc__enum_functor_desc_store_map_run_type_0_1;

static const MR_EnumFunctorDescPtr ll_backend__store_alloc__ll_backend__store_alloc__enum_value_ordered_store_map_run_type_0[2];

static const MR_EnumFunctorDescPtr ll_backend__store_alloc__ll_backend__store_alloc__enum_name_ordered_store_map_run_type_0[2];

static const MR_Integer ll_backend__store_alloc__ll_backend__store_alloc__functor_number_map_store_map_run_type_0[2];

static void MR_CALL 
ll_backend__store_alloc____Compare____where_stored_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__store_alloc____Unify____where_stored_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__store_alloc____Compare____store_alloc_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__store_alloc____Unify____store_alloc_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__store_alloc____Compare____last_locns_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__store_alloc____Unify____last_locns_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__store_alloc____Compare____branched_goal_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__store_alloc____Unify____branched_goal_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__store_alloc__store_alloc_in_cases_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word LastLocns0_5,
  MR_Word * HeadVar__6_6,
  MR_Word ResumeVars0_7,
  MR_Word StoreAllocInfo_8);

static void MR_CALL 
ll_backend__store_alloc__store_alloc_in_disj_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word LastLocns0_5,
  MR_Word * HeadVar__6_6,
  MR_Word ResumeVars0_7,
  MR_Word StoreAllocInfo_8);

static void MR_CALL 
ll_backend__store_alloc__store_alloc_in_par_conj_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_LastLocns_0_5,
  MR_Word * STATE_VARIABLE_LastLocns_6,
  MR_Word ResumeVars0_7,
  MR_Word StoreAllocInfo_8);

static void MR_CALL 
ll_backend__store_alloc__store_alloc_in_conj_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_Liveness_0_3,
  MR_Word * STATE_VARIABLE_Liveness_4,
  MR_Word STATE_VARIABLE_LastLocns_0_5,
  MR_Word * STATE_VARIABLE_LastLocns_6,
  MR_Word ResumeVars0_7,
  MR_Word StoreAllocInfo_8);

static void MR_CALL 
ll_backend__store_alloc__store_alloc_in_goal_2_9_p_0(
  MR_Word GoalExpr0_10,
  MR_Word * GoalExpr_11,
  MR_Word STATE_VARIABLE_Liveness_0_78,
  MR_Word * STATE_VARIABLE_Liveness_79,
  MR_Word STATE_VARIABLE_LastLocns_0_80,
  MR_Word * STATE_VARIABLE_LastLocns_81,
  MR_Word ResumeVars0_14,
  MR_Word * BranchedGoal_15,
  MR_Word StoreAllocInfo_16);

static void MR_CALL 
ll_backend__store_alloc__store_alloc_in_goal_8_p_0(
  MR_Word Goal0_9,
  MR_Word * Goal_10,
  MR_Word Liveness0_11,
  MR_Word * Liveness_12,
  MR_Word STATE_VARIABLE_LastLocns_0_34,
  MR_Word * STATE_VARIABLE_LastLocns_35,
  MR_Word ResumeVars0_14,
  MR_Word StoreAllocInfo_15);

static void MR_CALL 
ll_backend__store_alloc__store_alloc_allocate_extras_6_p_0(
  MR_Word StoreAllocInfo_1,
  MR_Word HeadVar__2_2,
  MR_Integer STATE_VARIABLE_N_0_3,
  MR_Word STATE_VARIABLE_SeenLocns_0_4,
  MR_Word STATE_VARIABLE_StoreMap_0_5,
  MR_Word * STATE_VARIABLE_StoreMap_6);

static void MR_CALL 
ll_backend__store_alloc__store_alloc_handle_conflicts_and_nonreal_8_p_0(
  MR_Word StoreAllocInfo_1,
  MR_Word HeadVar__2_2,
  MR_Integer STATE_VARIABLE_N_0_3,
  MR_Integer * STATE_VARIABLE_N_4,
  MR_Word STATE_VARIABLE_SeenLocns_0_5,
  MR_Word * STATE_VARIABLE_SeenLocns_6,
  MR_Word STATE_VARIABLE_StoreMap_0_7,
  MR_Word * STATE_VARIABLE_StoreMap_8);

static void MR_CALL 
ll_backend__store_alloc__next_free_reg_4_p_0(
  MR_Word RegType_5,
  MR_Word Values_6,
  MR_Integer N0_7,
  MR_Integer * N_8);

static void MR_CALL 
ll_backend__store_alloc__store_alloc_remove_nonlive_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_StoreMap_0_3,
  MR_Word * STATE_VARIABLE_StoreMap_4);

static void MR_CALL 
ll_backend__store_alloc__merge_last_locations_2_p_0(
  MR_Word LastLocnsList_3,
  MR_Word * LastLocns_4);

static MR_Word MR_CALL 
ll_backend__store_alloc__initial_last_locns_1_f_0(
  MR_Word HeadVar__1_1);

static MR_bool MR_CALL 
ll_backend__store_alloc____Unify____branched_goal_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__store_alloc____Compare____branched_goal_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__store_alloc____Unify____last_locns_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__store_alloc____Compare____last_locns_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__store_alloc____Unify____store_alloc_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__store_alloc____Compare____store_alloc_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__store_alloc____Unify____store_map_run_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__store_alloc____Compare____store_map_run_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__store_alloc____Unify____where_stored_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__store_alloc____Compare____where_stored_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box ll_backend__store_alloc_scalar_common_1[2][2];

static /* final */ const MR_Box ll_backend__store_alloc_scalar_common_2[2][3];




static /* final */ const MR_Box ll_backend__store_alloc_scalar_common_1[2][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0))
  },
};

static /* final */ const MR_Box ll_backend__store_alloc_scalar_common_2[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ll_backend__store_alloc_scalar_common_1[0])),
    ((MR_Box) (&ll_backend__store_alloc_scalar_common_1[1]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ll_backend__store_alloc_scalar_common_1[0])),
    ((MR_Box) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_EnumFunctorDesc ll_backend__store_alloc__ll_backend__store_alloc__enum_functor_desc_branched_goal_0_0 = {
  (MR_String) "is_branched_goal",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc ll_backend__store_alloc__ll_backend__store_alloc__enum_functor_desc_branched_goal_0_1 = {
  (MR_String) "is_not_branched_goal",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr ll_backend__store_alloc__ll_backend__store_alloc__enum_value_ordered_branched_goal_0[2] = {
  &ll_backend__store_alloc__ll_backend__store_alloc__enum_functor_desc_branched_goal_0_0,
  &ll_backend__store_alloc__ll_backend__store_alloc__enum_functor_desc_branched_goal_0_1
};

static const MR_EnumFunctorDescPtr ll_backend__store_alloc__ll_backend__store_alloc__enum_name_ordered_branched_goal_0[2] = {
  &ll_backend__store_alloc__ll_backend__store_alloc__enum_functor_desc_branched_goal_0_0,
  &ll_backend__store_alloc__ll_backend__store_alloc__enum_functor_desc_branched_goal_0_1
};

static const MR_Integer ll_backend__store_alloc__ll_backend__store_alloc__functor_number_map_branched_goal_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct ll_backend__store_alloc__ll_backend__store_alloc__type_ctor_info_branched_goal_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__store_alloc____Unify____branched_goal_0_0_10001)),
  ((MR_Box) (ll_backend__store_alloc____Compare____branched_goal_0_0_10001)),
  (MR_String) "ll_backend.store_alloc",
  (MR_String) "branched_goal",
  {     ll_backend__store_alloc__ll_backend__store_alloc__enum_name_ordered_branched_goal_0 },
  {     ll_backend__store_alloc__ll_backend__store_alloc__enum_value_ordered_branched_goal_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ll_backend__store_alloc__ll_backend__store_alloc__functor_number_map_branched_goal_0
};

static const MR_FA_TypeInfo_Struct1 ll_backend__store_alloc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__store_alloc__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0
  }
};

static const MR_FA_TypeInfo_Struct2 ll_backend__store_alloc__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__store_alloc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &ll_backend__store_alloc__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0
  }
};

const MR_TypeCtorInfo_Struct ll_backend__store_alloc__ll_backend__store_alloc__type_ctor_info_last_locns_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ll_backend__store_alloc____Unify____last_locns_0_0_10001)),
  ((MR_Box) (ll_backend__store_alloc____Compare____last_locns_0_0_10001)),
  (MR_String) "ll_backend.store_alloc",
  (MR_String) "last_locns",
  {     NULL },
  {     (MR_PseudoTypeInfo) &ll_backend__store_alloc__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct2 ll_backend__store_alloc__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_llds__type_ctor_info_stack_slot_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__store_alloc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0
  }
};

static const MR_FA_TypeInfo_Struct2 ll_backend__store_alloc__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__store_alloc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_PseudoTypeInfo ll_backend__store_alloc__ll_backend__store_alloc__field_types_store_alloc_info_0_0[3] = {
  (MR_PseudoTypeInfo) &ll_backend__store_alloc__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_llds__type_ctor_info_stack_slot_0,
  (MR_PseudoTypeInfo) &ll_backend__store_alloc__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_reg_type_0
};

static const MR_ConstString ll_backend__store_alloc__ll_backend__store_alloc__field_names_store_alloc_info_0_0[3] = {
  (MR_String) "sai_stack_slots",
  (MR_String) "sai_vartypes",
  (MR_String) "sai_float_reg"
};

static const MR_DuFunctorDesc ll_backend__store_alloc__ll_backend__store_alloc__du_functor_desc_store_alloc_info_0_0 = {
  (MR_String) "store_alloc_info",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__store_alloc__ll_backend__store_alloc__field_types_store_alloc_info_0_0,
  ll_backend__store_alloc__ll_backend__store_alloc__field_names_store_alloc_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ll_backend__store_alloc__ll_backend__store_alloc__du_stag_ordered_store_alloc_info_0_0[1] = {
  &ll_backend__store_alloc__ll_backend__store_alloc__du_functor_desc_store_alloc_info_0_0
};

static const MR_DuPtagLayout ll_backend__store_alloc__ll_backend__store_alloc__du_ptag_ordered_store_alloc_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ll_backend__store_alloc__ll_backend__store_alloc__du_stag_ordered_store_alloc_info_0_0
  }
};

static const MR_DuFunctorDescPtr ll_backend__store_alloc__ll_backend__store_alloc__du_name_ordered_store_alloc_info_0[1] = {
  &ll_backend__store_alloc__ll_backend__store_alloc__du_functor_desc_store_alloc_info_0_0
};

static const MR_Integer ll_backend__store_alloc__ll_backend__store_alloc__functor_number_map_store_alloc_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__store_alloc__ll_backend__store_alloc__type_ctor_info_store_alloc_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__store_alloc____Unify____store_alloc_info_0_0_10001)),
  ((MR_Box) (ll_backend__store_alloc____Compare____store_alloc_info_0_0_10001)),
  (MR_String) "ll_backend.store_alloc",
  (MR_String) "store_alloc_info",
  {     ll_backend__store_alloc__ll_backend__store_alloc__du_name_ordered_store_alloc_info_0 },
  {     ll_backend__store_alloc__ll_backend__store_alloc__du_ptag_ordered_store_alloc_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__store_alloc__ll_backend__store_alloc__functor_number_map_store_alloc_info_0
};

static const MR_EnumFunctorDesc ll_backend__store_alloc__ll_backend__store_alloc__enum_functor_desc_store_map_run_type_0_0 = {
  (MR_String) "final_allocation",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc ll_backend__store_alloc__ll_backend__store_alloc__enum_functor_desc_store_map_run_type_0_1 = {
  (MR_String) "for_stack_opt",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr ll_backend__store_alloc__ll_backend__store_alloc__enum_value_ordered_store_map_run_type_0[2] = {
  &ll_backend__store_alloc__ll_backend__store_alloc__enum_functor_desc_store_map_run_type_0_0,
  &ll_backend__store_alloc__ll_backend__store_alloc__enum_functor_desc_store_map_run_type_0_1
};

static const MR_EnumFunctorDescPtr ll_backend__store_alloc__ll_backend__store_alloc__enum_name_ordered_store_map_run_type_0[2] = {
  &ll_backend__store_alloc__ll_backend__store_alloc__enum_functor_desc_store_map_run_type_0_0,
  &ll_backend__store_alloc__ll_backend__store_alloc__enum_functor_desc_store_map_run_type_0_1
};

static const MR_Integer ll_backend__store_alloc__ll_backend__store_alloc__functor_number_map_store_map_run_type_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct ll_backend__store_alloc__ll_backend__store_alloc__type_ctor_info_store_map_run_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__store_alloc____Unify____store_map_run_type_0_0_10001)),
  ((MR_Box) (ll_backend__store_alloc____Compare____store_map_run_type_0_0_10001)),
  (MR_String) "ll_backend.store_alloc",
  (MR_String) "store_map_run_type",
  {     ll_backend__store_alloc__ll_backend__store_alloc__enum_name_ordered_store_map_run_type_0 },
  {     ll_backend__store_alloc__ll_backend__store_alloc__enum_value_ordered_store_map_run_type_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ll_backend__store_alloc__ll_backend__store_alloc__functor_number_map_store_map_run_type_0
};

const MR_TypeCtorInfo_Struct ll_backend__store_alloc__ll_backend__store_alloc__type_ctor_info_where_stored_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ll_backend__store_alloc____Unify____where_stored_0_0_10001)),
  ((MR_Box) (ll_backend__store_alloc____Compare____where_stored_0_0_10001)),
  (MR_String) "ll_backend.store_alloc",
  (MR_String) "where_stored",
  {     NULL },
  {     (MR_PseudoTypeInfo) &ll_backend__store_alloc__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static void MR_CALL 
ll_backend__store_alloc____Compare____where_stored_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__store_alloc_scalar_common_1[1], HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
ll_backend__store_alloc____Unify____where_stored_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__store_alloc_scalar_common_1[1], ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
ll_backend__store_alloc____Compare____store_map_run_type_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
ll_backend__store_alloc____Unify____store_map_run_type_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
ll_backend__store_alloc____Compare____store_alloc_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_13 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      MR_Word Var_10;

      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__store_alloc_scalar_common_2[1], &Var_10, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (Var_10 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_10;
      else
      {
        MR_Word Var_11;

        mercury__builtin__compare_3_p_0((MR_Word) &hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0, &Var_11, ((MR_Box) (ArgX2_6)), ((MR_Box) (ArgY2_7)));
        succeeded = (Var_11 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_11;
        else
        {
          MR_Integer Var_17 = (MR_Integer) ArgX3_8;
          MR_Integer Var_18 = (MR_Integer) ArgY3_9;

          mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Var_17, Var_18);
        }
      }
    }
  }
}

static MR_bool MR_CALL 
ll_backend__store_alloc____Unify____store_alloc_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_10 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeCtorInfo_12_12;
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Word ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__store_alloc_scalar_common_2[1], ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeCtorInfo_12_12 = (MR_Word) &hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0;
        succeeded = mercury__builtin__unify_2_p_0(TypeCtorInfo_12_12, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
          succeeded = (ArgX3_7 == ArgY3_8);
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__store_alloc____Compare____last_locns_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__store_alloc_scalar_common_2[0], HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
ll_backend__store_alloc____Unify____last_locns_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__store_alloc_scalar_common_2[0], ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__store_alloc____Compare____branched_goal_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
ll_backend__store_alloc____Unify____branched_goal_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
ll_backend__store_alloc__allocate_store_maps_5_p_0(
  MR_Word RunType_6,
  MR_Word ModuleInfo_7,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_ProcInfo_0_40,
  MR_Word * STATE_VARIABLE_ProcInfo_41)
{
  {
    MR_Word PredId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
    MR_Word Globals_11;
    MR_Word VarTypes_17;
    MR_Word Goal2_25;
    MR_Word PredInfo_26;
    MR_Word Liveness0_27;
    MR_Word TraceLevel_28;
    MR_Word NeedFailVars_29;
    MR_Word ResumeVars_30;
    MR_Word InputArgLvals_31;
    MR_Word LastLocns0_32;
    MR_Word StackSlots_33;
    MR_Word FloatRegs_34;
    MR_Word FloatRegType_35;
    MR_Word StoreAllocInfo_36;
    MR_Word Goal_37;
    MR_Integer Var_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
    MR_Word Var_38;
    MR_Word Var_39;

    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_7, &Globals_11);
    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_7, PredId_8, &PredInfo_26);
    ll_backend__liveness__initial_liveness_4_p_0(ModuleInfo_7, PredInfo_26, STATE_VARIABLE_ProcInfo_0_40, &Liveness0_27);
    libs__globals__get_trace_level_2_p_0(Globals_11, &TraceLevel_28);
    NeedFailVars_29 = libs__trace_params__eff_trace_level_needs_fail_vars_4_f_0(ModuleInfo_7, PredInfo_26, STATE_VARIABLE_ProcInfo_0_40, TraceLevel_28);
    switch (NeedFailVars_29) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          ResumeVars_30 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
        }
        break;
      case (MR_Integer) 1:
        ll_backend__trace_gen__trace_fail_vars_3_p_0(ModuleInfo_7, STATE_VARIABLE_ProcInfo_0_40, &ResumeVars_30);
        break;
    }
    ll_backend__code_util__build_input_arg_list_2_p_0(STATE_VARIABLE_ProcInfo_0_40, &InputArgLvals_31);
    LastLocns0_32 = ll_backend__store_alloc__initial_last_locns_1_f_0(InputArgLvals_31);
    hlds__hlds_pred__proc_info_get_stack_slots_2_p_0(STATE_VARIABLE_ProcInfo_0_40, &StackSlots_33);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(STATE_VARIABLE_ProcInfo_0_40, &VarTypes_17);
    switch (RunType_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Goal0_12;
          MR_Word FollowVarsMap0_13;
          MR_Integer NextNonReservedR0_14;
          MR_Integer NextNonReservedF0_15;
          MR_Word Goal1_16;
          MR_Word FollowVarsMap_18;
          MR_Integer NextNonReservedR_19;
          MR_Integer NextNonReservedF_20;
          MR_Word GoalExpr1_21;
          MR_Word GoalInfo1_22;
          MR_Word FollowVars_23;
          MR_Word GoalInfo2_24;
          MR_Word Var_42;

          hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_0_40, &Goal0_12);
          ll_backend__follow_vars__find_final_follow_vars_4_p_0(STATE_VARIABLE_ProcInfo_0_40, &FollowVarsMap0_13, &NextNonReservedR0_14, &NextNonReservedF0_15);
          ll_backend__follow_vars__find_follow_vars_in_goal_10_p_0(Goal0_12, &Goal1_16, VarTypes_17, ModuleInfo_7, FollowVarsMap0_13, &FollowVarsMap_18, NextNonReservedR0_14, &NextNonReservedR_19, NextNonReservedF0_15, &NextNonReservedF_20);
          GoalExpr1_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal1_16, (MR_Integer) 0)));
          GoalInfo1_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal1_16, (MR_Integer) 1)));
          {
            FollowVars_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), FollowVars_23, 0) = ((MR_Box) (FollowVarsMap_18));
            MR_hl_field(MR_mktag(0), FollowVars_23, 1) = ((MR_Box) (NextNonReservedR_19));
            MR_hl_field(MR_mktag(0), FollowVars_23, 2) = ((MR_Box) (NextNonReservedF_20));
          }
          {
            Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (FollowVars_23));
          }
          hlds__hlds_llds__goal_info_set_follow_vars_3_p_0(Var_42, GoalInfo1_22, &GoalInfo2_24);
          {
            Goal2_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Goal2_25, 0) = ((MR_Box) (GoalExpr1_21));
            MR_hl_field(MR_mktag(0), Goal2_25, 1) = ((MR_Box) (GoalInfo2_24));
          }
        }
        break;
      case (MR_Integer) 1:
        hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_0_40, &Goal2_25);
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 263, &FloatRegs_34);
    switch (FloatRegs_34) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        FloatRegType_35 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        FloatRegType_35 = (MR_Integer) 1;
        break;
    }
    {
      StoreAllocInfo_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), StoreAllocInfo_36, 0) = ((MR_Box) (StackSlots_33));
      MR_hl_field(MR_mktag(0), StoreAllocInfo_36, 1) = ((MR_Box) (VarTypes_17));
      MR_hl_field(MR_mktag(0), StoreAllocInfo_36, 2) = ((MR_Box) (FloatRegType_35));
    }
    ll_backend__store_alloc__store_alloc_in_goal_8_p_0(Goal2_25, &Goal_37, Liveness0_27, &Var_38, LastLocns0_32, &Var_39, ResumeVars_30, StoreAllocInfo_36);
    hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_37, STATE_VARIABLE_ProcInfo_0_40, STATE_VARIABLE_ProcInfo_41);
  }
}

static void MR_CALL 
ll_backend__store_alloc__store_alloc_in_cases_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word LastLocns0_5,
  MR_Word * HeadVar__6_6,
  MR_Word ResumeVars0_7,
  MR_Word StoreAllocInfo_8)
{
  if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *HeadVar__4_4 = HeadVar__3_3;
  }
  else
  {
    MR_Word Case0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word Cases0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word Case_17;
    MR_Word Cases_18;
    MR_Word LastLocnsGoal_22;
    MR_Word LastLocnsCases_23;
    MR_Word MainConsId_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case0_15, (MR_Integer) 0)));
    MR_Word OtherConsIds_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case0_15, (MR_Integer) 1)));
    MR_Word Goal0_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case0_15, (MR_Integer) 2)));
    MR_Word Goal_29;
    MR_Word _Liveness1_30;

    ll_backend__store_alloc__store_alloc_in_goal_8_p_0(Goal0_28, &Goal_29, HeadVar__3_3, HeadVar__4_4, LastLocns0_5, &LastLocnsGoal_22, ResumeVars0_7, StoreAllocInfo_8);
    {
      Case_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Case_17, 0) = ((MR_Box) (MainConsId_26));
      MR_hl_field(MR_mktag(0), Case_17, 1) = ((MR_Box) (OtherConsIds_27));
      MR_hl_field(MR_mktag(0), Case_17, 2) = ((MR_Box) (Goal_29));
    }
    ll_backend__store_alloc__store_alloc_in_cases_8_p_0(Cases0_16, &Cases_18, HeadVar__3_3, &_Liveness1_30, LastLocns0_5, &LastLocnsCases_23, ResumeVars0_7, StoreAllocInfo_8);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Case_17));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Cases_18));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__6_6 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (LastLocnsGoal_22));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (LastLocnsCases_23));
    }
  }
}

static void MR_CALL 
ll_backend__store_alloc__store_alloc_in_disj_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word LastLocns0_5,
  MR_Word * HeadVar__6_6,
  MR_Word ResumeVars0_7,
  MR_Word StoreAllocInfo_8)
{
  if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *HeadVar__4_4 = HeadVar__3_3;
  }
  else
  {
    MR_Word Goal0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word Goals0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word Goal_17;
    MR_Word Goals_18;
    MR_Word LastLocnsGoal_22;
    MR_Word LastLocnsDisj_23;
    MR_Word GoalInfo0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_15, (MR_Integer) 1)));
    MR_Word ResumeGoal_28;
    MR_Word ResumeGoalVars_29;
    MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_15, (MR_Integer) 0)));
    MR_Word _Liveness1_31;

    hlds__hlds_llds__goal_info_get_resume_point_2_p_0(GoalInfo0_27, &ResumeGoal_28);
    if ((ResumeGoal_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      ResumeGoalVars_29 = ResumeVars0_7;
    else
    {
      MR_Word Var_30;

      ResumeGoalVars_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ResumeGoal_28, (MR_Integer) 0)));
      Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ResumeGoal_28, (MR_Integer) 1)));
    }
    ll_backend__store_alloc__store_alloc_in_goal_8_p_0(Goal0_15, &Goal_17, HeadVar__3_3, HeadVar__4_4, LastLocns0_5, &LastLocnsGoal_22, ResumeGoalVars_29, StoreAllocInfo_8);
    ll_backend__store_alloc__store_alloc_in_disj_8_p_0(Goals0_16, &Goals_18, HeadVar__3_3, &_Liveness1_31, LastLocns0_5, &LastLocnsDisj_23, ResumeVars0_7, StoreAllocInfo_8);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_17));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_18));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__6_6 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (LastLocnsGoal_22));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (LastLocnsDisj_23));
    }
  }
}

static void MR_CALL 
ll_backend__store_alloc__store_alloc_in_par_conj_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_LastLocns_0_5,
  MR_Word * STATE_VARIABLE_LastLocns_6,
  MR_Word ResumeVars0_7,
  MR_Word StoreAllocInfo_8)
{
  if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *HeadVar__4_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
    *STATE_VARIABLE_LastLocns_6 = STATE_VARIABLE_LastLocns_0_5;
  }
  else
  {
    MR_Word Goal0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word Goals0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word Goal_17;
    MR_Word Goals_18;
    MR_Word Liveness1_24;
    MR_Word Liveness2_25;
    MR_Word STATE_VARIABLE_LastLocns_28_28;

    ll_backend__store_alloc__store_alloc_in_goal_8_p_0(Goal0_15, &Goal_17, HeadVar__3_3, &Liveness1_24, STATE_VARIABLE_LastLocns_0_5, &STATE_VARIABLE_LastLocns_28_28, ResumeVars0_7, StoreAllocInfo_8);
    ll_backend__store_alloc__store_alloc_in_par_conj_8_p_0(Goals0_16, &Goals_18, HeadVar__3_3, &Liveness2_25, STATE_VARIABLE_LastLocns_28_28, STATE_VARIABLE_LastLocns_6, ResumeVars0_7, StoreAllocInfo_8);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_17));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_18));
    }
    *HeadVar__4_4 = parse_tree__set_of_var__union_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, Liveness1_24, Liveness2_25);
  }
}

static void MR_CALL 
ll_backend__store_alloc__store_alloc_in_conj_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_Liveness_0_3,
  MR_Word * STATE_VARIABLE_Liveness_4,
  MR_Word STATE_VARIABLE_LastLocns_0_5,
  MR_Word * STATE_VARIABLE_LastLocns_6,
  MR_Word ResumeVars0_7,
  MR_Word StoreAllocInfo_8)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *STATE_VARIABLE_LastLocns_6 = STATE_VARIABLE_LastLocns_0_5;
      *STATE_VARIABLE_Liveness_4 = STATE_VARIABLE_Liveness_0_3;
    }
    else
    {
      MR_Word Goal0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Goals0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word Goal_19;
      MR_Word Goals_20;
      MR_Word GoalInfo_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_17, (MR_Integer) 1)));
      MR_Word InstMapDelta_27;
      MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_17, (MR_Integer) 0)));

      InstMapDelta_27 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_26);
      succeeded = hlds__instmap__instmap_delta_is_unreachable_1_p_0(InstMapDelta_27);
      if (succeeded)
      {
        ll_backend__store_alloc__store_alloc_in_goal_8_p_0(Goal0_17, &Goal_19, STATE_VARIABLE_Liveness_0_3, STATE_VARIABLE_Liveness_4, STATE_VARIABLE_LastLocns_0_5, STATE_VARIABLE_LastLocns_6, ResumeVars0_7, StoreAllocInfo_8);
        Goals_20 = Goals0_18;
      }
      else
      {
        MR_Word STATE_VARIABLE_Liveness_34_34;
        MR_Word STATE_VARIABLE_LastLocns_35_35;

        ll_backend__store_alloc__store_alloc_in_goal_8_p_0(Goal0_17, &Goal_19, STATE_VARIABLE_Liveness_0_3, &STATE_VARIABLE_Liveness_34_34, STATE_VARIABLE_LastLocns_0_5, &STATE_VARIABLE_LastLocns_35_35, ResumeVars0_7, StoreAllocInfo_8);
        ll_backend__store_alloc__store_alloc_in_conj_8_p_0(Goals0_18, &Goals_20, STATE_VARIABLE_Liveness_34_34, STATE_VARIABLE_Liveness_4, STATE_VARIABLE_LastLocns_35_35, STATE_VARIABLE_LastLocns_6, ResumeVars0_7, StoreAllocInfo_8);
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__2_2 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_19));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_20));
      }
    }
  }
}

static void MR_CALL 
ll_backend__store_alloc__store_alloc_in_goal_2_9_p_0(
  MR_Word GoalExpr0_10,
  MR_Word * GoalExpr_11,
  MR_Word STATE_VARIABLE_Liveness_0_78,
  MR_Word * STATE_VARIABLE_Liveness_79,
  MR_Word STATE_VARIABLE_LastLocns_0_80,
  MR_Word * STATE_VARIABLE_LastLocns_81,
  MR_Word ResumeVars0_14,
  MR_Word * BranchedGoal_15,
  MR_Word StoreAllocInfo_16)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) GoalExpr0_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal0_44 = (MR_Word) MR_body(((MR_Word) GoalExpr0_10), (MR_Integer) 0);
          MR_Word SubGoalInfo0_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubGoal0_44, (MR_Integer) 1)));
          MR_Word ResumeNot_47;
          MR_Word ResumeNotVars_48;
          MR_Word SubGoal_50;
          MR_Word Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubGoal0_44, (MR_Integer) 0)));
          MR_Word Var_49;
          MR_Word Var_51;

          hlds__hlds_llds__goal_info_get_resume_point_2_p_0(SubGoalInfo0_46, &ResumeNot_47);
          hlds__hlds_llds__goal_info_resume_vars_and_loc_3_p_0(ResumeNot_47, &ResumeNotVars_48, &Var_49);
          ll_backend__store_alloc__store_alloc_in_goal_8_p_0(SubGoal0_44, &SubGoal_50, STATE_VARIABLE_Liveness_0_78, STATE_VARIABLE_Liveness_79, STATE_VARIABLE_LastLocns_0_80, &Var_51, ResumeNotVars_48, StoreAllocInfo_16);
          *GoalExpr_11 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) SubGoal_50);
          *BranchedGoal_15 = (MR_Integer) 1;
          *STATE_VARIABLE_LastLocns_81 = STATE_VARIABLE_LastLocns_0_80;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          *GoalExpr_11 = GoalExpr0_10;
          *BranchedGoal_15 = (MR_Integer) 1;
          *STATE_VARIABLE_Liveness_79 = STATE_VARIABLE_Liveness_0_78;
          *STATE_VARIABLE_LastLocns_81 = STATE_VARIABLE_LastLocns_0_80;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              *GoalExpr_11 = GoalExpr0_10;
              *BranchedGoal_15 = (MR_Integer) 1;
              *STATE_VARIABLE_Liveness_79 = STATE_VARIABLE_Liveness_0_78;
              *STATE_VARIABLE_LastLocns_81 = STATE_VARIABLE_LastLocns_0_80;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 1)));
              MR_Word Goals0_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 2)));
              MR_Word Goals_19;

              switch (ConjType_17) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  ll_backend__store_alloc__store_alloc_in_par_conj_8_p_0(Goals0_18, &Goals_19, STATE_VARIABLE_Liveness_0_78, STATE_VARIABLE_Liveness_79, STATE_VARIABLE_LastLocns_0_80, STATE_VARIABLE_LastLocns_81, ResumeVars0_14, StoreAllocInfo_16);
                  break;
                case (MR_Integer) 0:
                  ll_backend__store_alloc__store_alloc_in_conj_8_p_0(Goals0_18, &Goals_19, STATE_VARIABLE_Liveness_0_78, STATE_VARIABLE_Liveness_79, STATE_VARIABLE_LastLocns_0_80, STATE_VARIABLE_LastLocns_81, ResumeVars0_14, StoreAllocInfo_16);
                  break;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *GoalExpr_11 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ConjType_17));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Goals_19));
              }
              *BranchedGoal_15 = (MR_Integer) 1;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word LastLocnsList_20;
              MR_Word Goals0_103 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 1)));
              MR_Word Goals_104;

              ll_backend__store_alloc__store_alloc_in_disj_8_p_0(Goals0_103, &Goals_104, STATE_VARIABLE_Liveness_0_78, STATE_VARIABLE_Liveness_79, STATE_VARIABLE_LastLocns_0_80, &LastLocnsList_20, ResumeVars0_14, StoreAllocInfo_16);
              ll_backend__store_alloc__merge_last_locations_2_p_0(LastLocnsList_20, STATE_VARIABLE_LastLocns_81);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *GoalExpr_11 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Goals_104));
              }
              *BranchedGoal_15 = (MR_Integer) 0;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 1)));
              MR_Word Det_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 2)));
              MR_Word Cases0_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 3)));
              MR_Word Cases_24;
              MR_Word LastLocnsList_105;

              ll_backend__store_alloc__store_alloc_in_cases_8_p_0(Cases0_23, &Cases_24, STATE_VARIABLE_Liveness_0_78, STATE_VARIABLE_Liveness_79, STATE_VARIABLE_LastLocns_0_80, &LastLocnsList_105, ResumeVars0_14, StoreAllocInfo_16);
              ll_backend__store_alloc__merge_last_locations_2_p_0(LastLocnsList_105, STATE_VARIABLE_LastLocns_81);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *GoalExpr_11 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_21));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Det_22));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Cases_24));
              }
              *BranchedGoal_15 = (MR_Integer) 0;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 1)));
              MR_Word SubGoal0_108 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 2)));
              MR_Word TermVar_53;
              MR_Word Var_85;

              succeeded = ((((MR_tag((MR_Word) Reason_52)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Reason_52, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                TermVar_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), Reason_52, (MR_Integer) 1)));
                Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), Reason_52, (MR_Integer) 2)));
                succeeded = (Var_85 == (MR_Integer) 1);
              }
              if (succeeded)
              {
                *GoalExpr_11 = GoalExpr0_10;
                parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, TermVar_53, STATE_VARIABLE_Liveness_0_78, STATE_VARIABLE_Liveness_79);
                *STATE_VARIABLE_LastLocns_81 = STATE_VARIABLE_LastLocns_0_80;
              }
              else
              {
                MR_Word SubGoal_106;

                ll_backend__store_alloc__store_alloc_in_goal_8_p_0(SubGoal0_108, &SubGoal_106, STATE_VARIABLE_Liveness_0_78, STATE_VARIABLE_Liveness_79, STATE_VARIABLE_LastLocns_0_80, STATE_VARIABLE_LastLocns_81, ResumeVars0_14, StoreAllocInfo_16);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  *GoalExpr_11 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Reason_52));
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubGoal_106));
                }
              }
              *BranchedGoal_15 = (MR_Integer) 1;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Vars_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 1)));
              MR_Word Cond0_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 2)));
              MR_Word Then0_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 3)));
              MR_Word Else0_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 4)));
              MR_Word CondGoalInfo0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), Cond0_26, (MR_Integer) 1)));
              MR_Word ResumeCond_33;
              MR_Word ResumeCondVars_34;
              MR_Word Cond_36;
              MR_Word Liveness1_37;
              MR_Word LastLocnsCond_38;
              MR_Word Then_39;
              MR_Word Else_41;
              MR_Word LastLocnsElse_43;
              MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), Cond0_26, (MR_Integer) 0)));
              MR_Word Var_35;
              MR_Word _Liveness2_42;
              MR_Word Var_91;

              hlds__hlds_llds__goal_info_get_resume_point_2_p_0(CondGoalInfo0_32, &ResumeCond_33);
              hlds__hlds_llds__goal_info_resume_vars_and_loc_3_p_0(ResumeCond_33, &ResumeCondVars_34, &Var_35);
              ll_backend__store_alloc__store_alloc_in_goal_8_p_0(Cond0_26, &Cond_36, STATE_VARIABLE_Liveness_0_78, &Liveness1_37, STATE_VARIABLE_LastLocns_0_80, &LastLocnsCond_38, ResumeCondVars_34, StoreAllocInfo_16);
              ll_backend__store_alloc__store_alloc_in_goal_8_p_0(Then0_27, &Then_39, Liveness1_37, STATE_VARIABLE_Liveness_79, LastLocnsCond_38, STATE_VARIABLE_LastLocns_81, ResumeVars0_14, StoreAllocInfo_16);
              ll_backend__store_alloc__store_alloc_in_goal_8_p_0(Else0_28, &Else_41, STATE_VARIABLE_Liveness_0_78, &_Liveness2_42, STATE_VARIABLE_LastLocns_0_80, &LastLocnsElse_43, ResumeVars0_14, StoreAllocInfo_16);
              {
                Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_91, 0) = ((MR_Box) (LastLocnsElse_43));
                MR_hl_field(MR_mktag(1), Var_91, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                *GoalExpr_11 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Vars_25));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Cond_36));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Then_39));
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (Else_41));
              }
              *BranchedGoal_15 = (MR_Integer) 0;
            }
            break;
          case (MR_Integer) 7:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.store_alloc", (MR_String) "predicate \140ll_backend.store_alloc.store_alloc_in_goal_2\'/9", (MR_String) "shorthand");
                return;
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__store_alloc__store_alloc_in_goal_8_p_0(
  MR_Word Goal0_9,
  MR_Word * Goal_10,
  MR_Word Liveness0_11,
  MR_Word * Liveness_12,
  MR_Word STATE_VARIABLE_LastLocns_0_34,
  MR_Word * STATE_VARIABLE_LastLocns_35,
  MR_Word ResumeVars0_14,
  MR_Word StoreAllocInfo_15)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_37_37;
    MR_Word GoalExpr0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_9, (MR_Integer) 0)));
    MR_Word GoalInfo0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_9, (MR_Integer) 1)));
    MR_Word PreDeaths_18;
    MR_Word PreBirths_19;
    MR_Word PostDeaths_20;
    MR_Word PostBirths_21;
    MR_Word Liveness1_22;
    MR_Word Liveness2_23;
    MR_Word GoalExpr_24;
    MR_Word Liveness3_25;
    MR_Word BranchedGoal_26;
    MR_Word Liveness4_27;
    MR_Word GoalInfo_33;

    hlds__hlds_llds__goal_info_get_pre_deaths_2_p_0(GoalInfo0_17, &PreDeaths_18);
    hlds__hlds_llds__goal_info_get_pre_births_2_p_0(GoalInfo0_17, &PreBirths_19);
    hlds__hlds_llds__goal_info_get_post_deaths_2_p_0(GoalInfo0_17, &PostDeaths_20);
    hlds__hlds_llds__goal_info_get_post_births_2_p_0(GoalInfo0_17, &PostBirths_21);
    TypeCtorInfo_37_37 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    parse_tree__set_of_var__difference_3_p_0(TypeCtorInfo_37_37, Liveness0_11, PreDeaths_18, &Liveness1_22);
    parse_tree__set_of_var__union_3_p_0(TypeCtorInfo_37_37, Liveness1_22, PreBirths_19, &Liveness2_23);
    ll_backend__store_alloc__store_alloc_in_goal_2_9_p_0(GoalExpr0_16, &GoalExpr_24, Liveness2_23, &Liveness3_25, STATE_VARIABLE_LastLocns_0_34, STATE_VARIABLE_LastLocns_35, ResumeVars0_14, &BranchedGoal_26, StoreAllocInfo_15);
    parse_tree__set_of_var__difference_3_p_0(TypeCtorInfo_37_37, Liveness3_25, PostDeaths_20, &Liveness4_27);
    parse_tree__set_of_var__union_3_p_0(TypeCtorInfo_37_37, Liveness4_27, PostBirths_21, Liveness_12);
    switch (BranchedGoal_26) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word TypeInfo_19_54;
          MR_Word TypeCtorInfo_20_55;
          MR_Word MappedSet_28;
          MR_Word MappedVars_29;
          MR_Word AdvisoryStoreMap_31;
          MR_Word StoreMap_32;
          MR_Word FollowKeys_45;
          MR_Word StoreVars_46;
          MR_Word SeenLvals0_47;
          MR_Integer N_48;
          MR_Word SeenLvals_49;
          MR_Word STATE_VARIABLE_StoreMap_15_50;
          MR_Word STATE_VARIABLE_StoreMap_17_52;
          MR_Word StoreMapPrime_30;

          parse_tree__set_of_var__union_3_p_0(TypeCtorInfo_37_37, Liveness4_27, ResumeVars0_14, &MappedSet_28);
          MappedVars_29 = parse_tree__set_of_var__to_sorted_list_1_f_0(TypeCtorInfo_37_37, MappedSet_28);
          succeeded = hlds__hlds_llds__goal_info_maybe_get_store_map_2_p_0(GoalInfo0_17, &StoreMapPrime_30);
          if (succeeded)
            AdvisoryStoreMap_31 = StoreMapPrime_30;
          else
          {
            AdvisoryStoreMap_31 = mercury__map__init_0_f_0((MR_Word) &ll_backend__store_alloc_scalar_common_1[0], (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0);
          }
          TypeInfo_19_54 = (MR_Word) &ll_backend__store_alloc_scalar_common_1[0];
          TypeCtorInfo_20_55 = (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0;
          mercury__map__keys_2_p_0(TypeInfo_19_54, TypeCtorInfo_20_55, AdvisoryStoreMap_31, &FollowKeys_45);
          ll_backend__store_alloc__store_alloc_remove_nonlive_4_p_0(FollowKeys_45, MappedVars_29, AdvisoryStoreMap_31, &STATE_VARIABLE_StoreMap_15_50);
          mercury__map__keys_2_p_0(TypeInfo_19_54, TypeCtorInfo_20_55, STATE_VARIABLE_StoreMap_15_50, &StoreVars_46);
          mercury__set__init_1_p_0(TypeCtorInfo_20_55, &SeenLvals0_47);
          ll_backend__store_alloc__store_alloc_handle_conflicts_and_nonreal_8_p_0(StoreAllocInfo_15, StoreVars_46, (MR_Integer) 1, &N_48, SeenLvals0_47, &SeenLvals_49, STATE_VARIABLE_StoreMap_15_50, &STATE_VARIABLE_StoreMap_17_52);
          ll_backend__store_alloc__store_alloc_allocate_extras_6_p_0(StoreAllocInfo_15, MappedVars_29, N_48, SeenLvals_49, STATE_VARIABLE_StoreMap_17_52, &StoreMap_32);
          hlds__hlds_llds__goal_info_set_store_map_3_p_0(StoreMap_32, GoalInfo0_17, &GoalInfo_33);
        }
        break;
      case (MR_Integer) 1:
        GoalInfo_33 = GoalInfo0_17;
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_24));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_33));
    }
  }
}

static void MR_CALL 
ll_backend__store_alloc__store_alloc_allocate_extras_6_p_0(
  MR_Word StoreAllocInfo_1,
  MR_Word HeadVar__2_2,
  MR_Integer STATE_VARIABLE_N_0_3,
  MR_Word STATE_VARIABLE_SeenLocns_0_4,
  MR_Word STATE_VARIABLE_StoreMap_0_5,
  MR_Word * STATE_VARIABLE_StoreMap_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    /* setup for tailcalls optimized into a loop */
    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_StoreMap_6 = STATE_VARIABLE_StoreMap_0_5;
    else
    {
      MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word Vars_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Integer STATE_VARIABLE_N_30_30;
      MR_Word STATE_VARIABLE_StoreMap_31_31;
      MR_Word STATE_VARIABLE_SeenLocns_32_32;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Integer next_value_of_STATE_VARIABLE_N_0_3;
      MR_Word next_value_of_STATE_VARIABLE_SeenLocns_0_4;
      MR_Word next_value_of_STATE_VARIABLE_StoreMap_0_5;

      succeeded = mercury__map__contains_2_p_0((MR_Word) &ll_backend__store_alloc_scalar_common_1[0], (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0, STATE_VARIABLE_StoreMap_0_5, ((MR_Box) (Var_14)));
      if (succeeded)
      {
        STATE_VARIABLE_StoreMap_31_31 = STATE_VARIABLE_StoreMap_0_5;
        STATE_VARIABLE_SeenLocns_32_32 = STATE_VARIABLE_SeenLocns_0_4;
        STATE_VARIABLE_N_30_30 = STATE_VARIABLE_N_0_3;
      }
      else
      {
        MR_Word TypeCtorInfo_40_40;
        MR_Word StackSlots_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), StoreAllocInfo_1, (MR_Integer) 0)));
        MR_Word Locn_24;
        MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), StoreAllocInfo_1, (MR_Integer) 1)));
        MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), StoreAllocInfo_1, (MR_Integer) 2)));
        MR_Word StackSlotLocn_23;
        MR_Word StackSlot_22;
        MR_Box conv0_StackSlot_22;
        MR_Word TypeCtorInfo_38_38;

        succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__store_alloc_scalar_common_1[0], (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0, StackSlots_19, ((MR_Box) (Var_14)), &conv0_StackSlot_22);
        if (succeeded)
        {
          StackSlot_22 = ((MR_Word) conv0_StackSlot_22);
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          StackSlotLocn_23 = hlds__hlds_llds__stack_slot_to_abs_locn_1_f_0(StackSlot_22);
          TypeCtorInfo_38_38 = (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0;
          succeeded = mercury__set__member_2_p_0(TypeCtorInfo_38_38, ((MR_Box) (StackSlotLocn_23)), STATE_VARIABLE_SeenLocns_0_4);
          succeeded = !(succeeded);
        }
        if (succeeded)
        {
          Locn_24 = StackSlotLocn_23;
          STATE_VARIABLE_N_30_30 = STATE_VARIABLE_N_0_3;
        }
        else
        {
          MR_Word RegType_25;
          MR_Word VarTypes_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), StoreAllocInfo_1, (MR_Integer) 1)));
          MR_Word FloatRegType_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), StoreAllocInfo_1, (MR_Integer) 2)));
          MR_Word Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), StoreAllocInfo_1, (MR_Integer) 0)));

          switch (FloatRegType_46) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word VarType_47;
                MR_Word Var_48;

                hlds__vartypes__lookup_var_type_3_p_0(VarTypes_45, Var_14, &VarType_47);
                Var_48 = parse_tree__builtin_lib_types__float_type_0_f_0();
                succeeded = parse_tree__prog_data____Unify____mer_type_0_0(VarType_47, Var_48);
                if (succeeded)
                  RegType_25 = (MR_Integer) 1;
                else
                  RegType_25 = (MR_Integer) 0;
              }
              break;
            case (MR_Integer) 0:
              RegType_25 = (MR_Integer) 0;
              break;
          }
          ll_backend__store_alloc__next_free_reg_4_p_0(RegType_25, STATE_VARIABLE_SeenLocns_0_4, STATE_VARIABLE_N_0_3, &STATE_VARIABLE_N_30_30);
          {
            Locn_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Locn_24, 0) = ((MR_Box) (RegType_25));
            MR_hl_field(MR_mktag(1), Locn_24, 1) = ((MR_Box) (STATE_VARIABLE_N_30_30));
          }
        }
        TypeCtorInfo_40_40 = (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0;
        mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__store_alloc_scalar_common_1[0], TypeCtorInfo_40_40, ((MR_Box) (Var_14)), ((MR_Box) (Locn_24)), STATE_VARIABLE_StoreMap_0_5, &STATE_VARIABLE_StoreMap_31_31);
        mercury__set__insert_3_p_0(TypeCtorInfo_40_40, ((MR_Box) (Locn_24)), STATE_VARIABLE_SeenLocns_0_4, &STATE_VARIABLE_SeenLocns_32_32);
      }
      /* direct tailcall eliminated */
      next_value_of_HeadVar__2_2 = Vars_15;
      next_value_of_STATE_VARIABLE_N_0_3 = STATE_VARIABLE_N_30_30;
      next_value_of_STATE_VARIABLE_SeenLocns_0_4 = STATE_VARIABLE_SeenLocns_32_32;
      next_value_of_STATE_VARIABLE_StoreMap_0_5 = STATE_VARIABLE_StoreMap_31_31;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_N_0_3 = next_value_of_STATE_VARIABLE_N_0_3;
      STATE_VARIABLE_SeenLocns_0_4 = next_value_of_STATE_VARIABLE_SeenLocns_0_4;
      STATE_VARIABLE_StoreMap_0_5 = next_value_of_STATE_VARIABLE_StoreMap_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__store_alloc__store_alloc_handle_conflicts_and_nonreal_8_p_0(
  MR_Word StoreAllocInfo_1,
  MR_Word HeadVar__2_2,
  MR_Integer STATE_VARIABLE_N_0_3,
  MR_Integer * STATE_VARIABLE_N_4,
  MR_Word STATE_VARIABLE_SeenLocns_0_5,
  MR_Word * STATE_VARIABLE_SeenLocns_6,
  MR_Word STATE_VARIABLE_StoreMap_0_7,
  MR_Word * STATE_VARIABLE_StoreMap_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    /* setup for tailcalls optimized into a loop */
    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_StoreMap_8 = STATE_VARIABLE_StoreMap_0_7;
      *STATE_VARIABLE_SeenLocns_6 = STATE_VARIABLE_SeenLocns_0_5;
      *STATE_VARIABLE_N_4 = STATE_VARIABLE_N_0_3;
    }
    else
    {
      MR_Word TypeInfo_42_42 = (MR_Word) &ll_backend__store_alloc_scalar_common_1[0];
      MR_Word TypeCtorInfo_43_43 = (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0;
      MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word Vars_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word Locn_25;
      MR_Word FinalLocn_29;
      MR_Integer STATE_VARIABLE_N_36_36;
      MR_Word STATE_VARIABLE_StoreMap_37_37;
      MR_Word STATE_VARIABLE_SeenLocns_38_38;
      MR_Box conv0_Locn_25;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Integer next_value_of_STATE_VARIABLE_N_0_3;
      MR_Word next_value_of_STATE_VARIABLE_SeenLocns_0_5;
      MR_Word next_value_of_STATE_VARIABLE_StoreMap_0_7;

      mercury__map__lookup_3_p_0(TypeInfo_42_42, TypeCtorInfo_43_43, STATE_VARIABLE_StoreMap_0_7, ((MR_Box) (Var_20)), &conv0_Locn_25);
      Locn_25 = ((MR_Word) conv0_Locn_25);
      succeeded = (Locn_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (!(succeeded))
        succeeded = mercury__set__member_2_p_0(TypeCtorInfo_43_43, ((MR_Box) (Locn_25)), STATE_VARIABLE_SeenLocns_0_5);
      if (succeeded)
      {
        MR_Word RegType_28;
        MR_Word RegTypePrime_26;
        MR_Integer Var_27;

        succeeded = ((MR_tag((MR_Word) Locn_25)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          RegTypePrime_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), Locn_25, (MR_Integer) 0)));
          Var_27 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Locn_25, (MR_Integer) 1)));
          RegType_28 = RegTypePrime_26;
        }
        else
        {
          MR_Word VarTypes_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), StoreAllocInfo_1, (MR_Integer) 1)));
          MR_Word FloatRegType_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), StoreAllocInfo_1, (MR_Integer) 2)));
          MR_Word Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), StoreAllocInfo_1, (MR_Integer) 0)));

          switch (FloatRegType_49) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word VarType_50;
                MR_Word Var_51;

                hlds__vartypes__lookup_var_type_3_p_0(VarTypes_48, Var_20, &VarType_50);
                Var_51 = parse_tree__builtin_lib_types__float_type_0_f_0();
                succeeded = parse_tree__prog_data____Unify____mer_type_0_0(VarType_50, Var_51);
                if (succeeded)
                  RegType_28 = (MR_Integer) 1;
                else
                  RegType_28 = (MR_Integer) 0;
              }
              break;
            case (MR_Integer) 0:
              RegType_28 = (MR_Integer) 0;
              break;
          }
        }
        ll_backend__store_alloc__next_free_reg_4_p_0(RegType_28, STATE_VARIABLE_SeenLocns_0_5, STATE_VARIABLE_N_0_3, &STATE_VARIABLE_N_36_36);
        {
          FinalLocn_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), FinalLocn_29, 0) = ((MR_Box) (RegType_28));
          MR_hl_field(MR_mktag(1), FinalLocn_29, 1) = ((MR_Box) (STATE_VARIABLE_N_36_36));
        }
        mercury__map__det_update_4_p_0(TypeInfo_42_42, TypeCtorInfo_43_43, ((MR_Box) (Var_20)), ((MR_Box) (FinalLocn_29)), STATE_VARIABLE_StoreMap_0_7, &STATE_VARIABLE_StoreMap_37_37);
      }
      else
      {
        FinalLocn_29 = Locn_25;
        STATE_VARIABLE_StoreMap_37_37 = STATE_VARIABLE_StoreMap_0_7;
        STATE_VARIABLE_N_36_36 = STATE_VARIABLE_N_0_3;
      }
      mercury__set__insert_3_p_0(TypeCtorInfo_43_43, ((MR_Box) (FinalLocn_29)), STATE_VARIABLE_SeenLocns_0_5, &STATE_VARIABLE_SeenLocns_38_38);
      /* direct tailcall eliminated */
      next_value_of_HeadVar__2_2 = Vars_21;
      next_value_of_STATE_VARIABLE_N_0_3 = STATE_VARIABLE_N_36_36;
      next_value_of_STATE_VARIABLE_SeenLocns_0_5 = STATE_VARIABLE_SeenLocns_38_38;
      next_value_of_STATE_VARIABLE_StoreMap_0_7 = STATE_VARIABLE_StoreMap_37_37;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_N_0_3 = next_value_of_STATE_VARIABLE_N_0_3;
      STATE_VARIABLE_SeenLocns_0_5 = next_value_of_STATE_VARIABLE_SeenLocns_0_5;
      STATE_VARIABLE_StoreMap_0_7 = next_value_of_STATE_VARIABLE_StoreMap_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__store_alloc__next_free_reg_4_p_0(
  MR_Word RegType_5,
  MR_Word Values_6,
  MR_Integer N0_7,
  MR_Integer * N_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word Var_10;

    /* setup for tailcalls optimized into a loop */
    {
      Var_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_10, 0) = ((MR_Box) (RegType_5));
      MR_hl_field(MR_mktag(1), Var_10, 1) = ((MR_Box) (N0_7));
    }
    succeeded = mercury__set__member_2_p_0((MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0, ((MR_Box) (Var_10)), Values_6);
    if (succeeded)
    {
      MR_Integer N1_9 = (N0_7 + (MR_Integer) 1);
      MR_Integer next_value_of_N0_7 = N1_9;

      /* direct tailcall eliminated */
      N0_7 = next_value_of_N0_7;
      continue;
    }
    else
      *N_8 = N0_7;
    break;
  }
}

static void MR_CALL 
ll_backend__store_alloc__store_alloc_remove_nonlive_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_StoreMap_0_3,
  MR_Word * STATE_VARIABLE_StoreMap_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    /* setup for tailcalls optimized into a loop */
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_StoreMap_4 = STATE_VARIABLE_StoreMap_0_3;
    else
    {
      MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Vars_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word STATE_VARIABLE_StoreMap_15_15;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_StoreMap_0_3;

      succeeded = mercury__list__member_2_p_0((MR_Word) &ll_backend__store_alloc_scalar_common_1[0], ((MR_Box) (Var_9)), HeadVar__2_2);
      if (succeeded)
        STATE_VARIABLE_StoreMap_15_15 = STATE_VARIABLE_StoreMap_0_3;
      else
      {
        mercury__map__delete_3_p_0((MR_Word) &ll_backend__store_alloc_scalar_common_1[0], (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0, ((MR_Box) (Var_9)), STATE_VARIABLE_StoreMap_0_3, &STATE_VARIABLE_StoreMap_15_15);
      }
      /* direct tailcall eliminated */
      next_value_of_HeadVar__1_1 = Vars_10;
      next_value_of_STATE_VARIABLE_StoreMap_0_3 = STATE_VARIABLE_StoreMap_15_15;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_StoreMap_0_3 = next_value_of_STATE_VARIABLE_StoreMap_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__store_alloc__merge_last_locations_2_p_0(
  MR_Word LastLocnsList_3,
  MR_Word * LastLocns_4)
{
  if ((LastLocnsList_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *LastLocns_4 = mercury__map__init_0_f_0((MR_Word) &ll_backend__store_alloc_scalar_common_1[0], (MR_Word) &ll_backend__store_alloc_scalar_common_1[1]);
  }
  else
  {
    MR_Word Var_5;

    *LastLocns_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), LastLocnsList_3, (MR_Integer) 0)));
    Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), LastLocnsList_3, (MR_Integer) 1)));
  }
}

static MR_Word MR_CALL 
ll_backend__store_alloc__initial_last_locns_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;

    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      HeadVar__2_2 = mercury__map__init_0_f_0((MR_Word) &ll_backend__store_alloc_scalar_common_1[0], (MR_Word) &ll_backend__store_alloc_scalar_common_1[1]);
    }
    else
    {
      MR_Word Var_3;
      MR_Word Lval_4;
      MR_Word VarLvals_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Var_7;
      MR_Word Var_8;

      Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_6, (MR_Integer) 0)));
      Lval_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_6, (MR_Integer) 1)));
      Var_7 = ll_backend__store_alloc__initial_last_locns_1_f_0(VarLvals_5);
      Var_8 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (Lval_4)));
      HeadVar__2_2 = mercury__map__det_insert_3_f_0((MR_Word) &ll_backend__store_alloc_scalar_common_1[0], (MR_Word) &ll_backend__store_alloc_scalar_common_1[1], Var_7, ((MR_Box) (Var_3)), ((MR_Box) (Var_8)));
    }
    return HeadVar__2_2;
  }
}

static MR_bool MR_CALL 
ll_backend__store_alloc____Unify____branched_goal_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__store_alloc____Unify____branched_goal_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__store_alloc____Compare____branched_goal_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__store_alloc____Compare____branched_goal_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__store_alloc____Unify____last_locns_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__store_alloc____Unify____last_locns_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__store_alloc____Compare____last_locns_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__store_alloc____Compare____last_locns_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__store_alloc____Unify____store_alloc_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__store_alloc____Unify____store_alloc_info_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__store_alloc____Compare____store_alloc_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__store_alloc____Compare____store_alloc_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__store_alloc____Unify____store_map_run_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__store_alloc____Unify____store_map_run_type_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__store_alloc____Compare____store_map_run_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__store_alloc____Compare____store_map_run_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__store_alloc____Unify____where_stored_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__store_alloc____Unify____where_stored_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__store_alloc____Compare____where_stored_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__store_alloc____Compare____where_stored_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__ll_backend__store_alloc__init(void)
{
}

void mercury__ll_backend__store_alloc__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ll_backend__store_alloc__ll_backend__store_alloc__type_ctor_info_branched_goal_0);
	MR_register_type_ctor_info(&ll_backend__store_alloc__ll_backend__store_alloc__type_ctor_info_last_locns_0);
	MR_register_type_ctor_info(&ll_backend__store_alloc__ll_backend__store_alloc__type_ctor_info_store_alloc_info_0);
	MR_register_type_ctor_info(&ll_backend__store_alloc__ll_backend__store_alloc__type_ctor_info_store_map_run_type_0);
	MR_register_type_ctor_info(&ll_backend__store_alloc__ll_backend__store_alloc__type_ctor_info_where_stored_0);
}

void mercury__ll_backend__store_alloc__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ll_backend__store_alloc__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module ll_backend.store_alloc. */
