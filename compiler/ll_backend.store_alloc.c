/*
** Automatically generated from `store_alloc.m'
** by the Mercury compiler,
** version DEV
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
#include "check_hlds.type_util.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
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

static MR_bool MR_CALL 
ll_backend__store_alloc____Unify____branched_goal_0_0_10001(
  MR_Box ll_backend__store_alloc__wrapper_arg_1,
  MR_Box ll_backend__store_alloc__wrapper_arg_2);

static void MR_CALL 
ll_backend__store_alloc____Compare____branched_goal_0_0_10001(
  MR_Box * ll_backend__store_alloc__wrapper_arg_1,
  MR_Box ll_backend__store_alloc__wrapper_arg_2,
  MR_Box ll_backend__store_alloc__wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__store_alloc____Unify____last_locns_0_0_10001(
  MR_Box ll_backend__store_alloc__wrapper_arg_1,
  MR_Box ll_backend__store_alloc__wrapper_arg_2);

static void MR_CALL 
ll_backend__store_alloc____Compare____last_locns_0_0_10001(
  MR_Box * ll_backend__store_alloc__wrapper_arg_1,
  MR_Box ll_backend__store_alloc__wrapper_arg_2,
  MR_Box ll_backend__store_alloc__wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__store_alloc____Unify____store_alloc_info_0_0_10001(
  MR_Box ll_backend__store_alloc__wrapper_arg_1,
  MR_Box ll_backend__store_alloc__wrapper_arg_2);

static void MR_CALL 
ll_backend__store_alloc____Compare____store_alloc_info_0_0_10001(
  MR_Box * ll_backend__store_alloc__wrapper_arg_1,
  MR_Box ll_backend__store_alloc__wrapper_arg_2,
  MR_Box ll_backend__store_alloc__wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__store_alloc____Unify____store_map_run_type_0_0_10001(
  MR_Box ll_backend__store_alloc__wrapper_arg_1,
  MR_Box ll_backend__store_alloc__wrapper_arg_2);

static void MR_CALL 
ll_backend__store_alloc____Compare____store_map_run_type_0_0_10001(
  MR_Box * ll_backend__store_alloc__wrapper_arg_1,
  MR_Box ll_backend__store_alloc__wrapper_arg_2,
  MR_Box ll_backend__store_alloc__wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__store_alloc____Unify____where_stored_0_0_10001(
  MR_Box ll_backend__store_alloc__wrapper_arg_1,
  MR_Box ll_backend__store_alloc__wrapper_arg_2);

static void MR_CALL 
ll_backend__store_alloc____Compare____where_stored_0_0_10001(
  MR_Box * ll_backend__store_alloc__wrapper_arg_1,
  MR_Box ll_backend__store_alloc__wrapper_arg_2,
  MR_Box ll_backend__store_alloc__wrapper_arg_3);

static void MR_CALL 
ll_backend__store_alloc____Compare____where_stored_0_0(
  MR_Word * ll_backend__store_alloc__HeadVar__1_1,
  MR_Word ll_backend__store_alloc__HeadVar__2_2,
  MR_Word ll_backend__store_alloc__HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__store_alloc____Unify____where_stored_0_0(
  MR_Word ll_backend__store_alloc__HeadVar__1_1,
  MR_Word ll_backend__store_alloc__HeadVar__2_2);

static void MR_CALL 
ll_backend__store_alloc____Compare____store_alloc_info_0_0(
  MR_Word * ll_backend__store_alloc__HeadVar__1_1,
  MR_Word ll_backend__store_alloc__HeadVar__2_2,
  MR_Word ll_backend__store_alloc__HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__store_alloc____Unify____store_alloc_info_0_0(
  MR_Word ll_backend__store_alloc__HeadVar__1_1,
  MR_Word ll_backend__store_alloc__HeadVar__2_2);

static void MR_CALL 
ll_backend__store_alloc____Compare____last_locns_0_0(
  MR_Word * ll_backend__store_alloc__HeadVar__1_1,
  MR_Word ll_backend__store_alloc__HeadVar__2_2,
  MR_Word ll_backend__store_alloc__HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__store_alloc____Unify____last_locns_0_0(
  MR_Word ll_backend__store_alloc__HeadVar__1_1,
  MR_Word ll_backend__store_alloc__HeadVar__2_2);

static void MR_CALL 
ll_backend__store_alloc____Compare____branched_goal_0_0(
  MR_Word * ll_backend__store_alloc__HeadVar__1_1,
  MR_Word ll_backend__store_alloc__HeadVar__2_2,
  MR_Word ll_backend__store_alloc__HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__store_alloc____Unify____branched_goal_0_0(
  MR_Word ll_backend__store_alloc__HeadVar__2_1,
  MR_Word ll_backend__store_alloc__HeadVar__2_2);

static void MR_CALL 
ll_backend__store_alloc__next_free_reg_4_p_0(
  MR_Word ll_backend__store_alloc__RegType_5,
  MR_Word ll_backend__store_alloc__Values_6,
  MR_Integer ll_backend__store_alloc__N0_7,
  MR_Integer * ll_backend__store_alloc__N_8);

static void MR_CALL 
ll_backend__store_alloc__store_alloc_allocate_extras_6_p_0(
  MR_Word ll_backend__store_alloc__StoreAllocInfo_1,
  MR_Word ll_backend__store_alloc__HeadVar__2_2,
  MR_Integer ll_backend__store_alloc__STATE_VARIABLE_N_0_3,
  MR_Word ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_0_4,
  MR_Word ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0_5,
  MR_Word * ll_backend__store_alloc__STATE_VARIABLE_StoreMap_6);

static void MR_CALL 
ll_backend__store_alloc__store_alloc_handle_conflicts_and_nonreal_8_p_0(
  MR_Word ll_backend__store_alloc__StoreAllocInfo_1,
  MR_Word ll_backend__store_alloc__HeadVar__2_2,
  MR_Integer ll_backend__store_alloc__STATE_VARIABLE_N_0_3,
  MR_Integer * ll_backend__store_alloc__STATE_VARIABLE_N_4,
  MR_Word ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_0_5,
  MR_Word * ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_6,
  MR_Word ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0_7,
  MR_Word * ll_backend__store_alloc__STATE_VARIABLE_StoreMap_8);

static void MR_CALL 
ll_backend__store_alloc__store_alloc_remove_nonlive_4_p_0(
  MR_Word ll_backend__store_alloc__HeadVar__1_1,
  MR_Word ll_backend__store_alloc__HeadVar__2_2,
  MR_Word ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0_3,
  MR_Word * ll_backend__store_alloc__STATE_VARIABLE_StoreMap_4);

static void MR_CALL 
ll_backend__store_alloc__merge_last_locations_2_p_0(
  MR_Word ll_backend__store_alloc__LastLocnsList_3,
  MR_Word * ll_backend__store_alloc__LastLocns_4);

static void MR_CALL 
ll_backend__store_alloc__store_alloc_in_cases_8_p_0(
  MR_Word ll_backend__store_alloc__HeadVar__1_1,
  MR_Word * ll_backend__store_alloc__HeadVar__2_2,
  MR_Word ll_backend__store_alloc__HeadVar__3_3,
  MR_Word * ll_backend__store_alloc__HeadVar__4_4,
  MR_Word ll_backend__store_alloc__LastLocns0_5,
  MR_Word * ll_backend__store_alloc__HeadVar__6_6,
  MR_Word ll_backend__store_alloc__ResumeVars0_7,
  MR_Word ll_backend__store_alloc__StoreAllocInfo_8);

static void MR_CALL 
ll_backend__store_alloc__store_alloc_in_disj_8_p_0(
  MR_Word ll_backend__store_alloc__HeadVar__1_1,
  MR_Word * ll_backend__store_alloc__HeadVar__2_2,
  MR_Word ll_backend__store_alloc__HeadVar__3_3,
  MR_Word * ll_backend__store_alloc__HeadVar__4_4,
  MR_Word ll_backend__store_alloc__LastLocns0_5,
  MR_Word * ll_backend__store_alloc__HeadVar__6_6,
  MR_Word ll_backend__store_alloc__ResumeVars0_7,
  MR_Word ll_backend__store_alloc__StoreAllocInfo_8);

static void MR_CALL 
ll_backend__store_alloc__store_alloc_in_par_conj_8_p_0(
  MR_Word ll_backend__store_alloc__HeadVar__1_1,
  MR_Word * ll_backend__store_alloc__HeadVar__2_2,
  MR_Word ll_backend__store_alloc__HeadVar__3_3,
  MR_Word * ll_backend__store_alloc__HeadVar__4_4,
  MR_Word ll_backend__store_alloc__STATE_VARIABLE_LastLocns_0_5,
  MR_Word * ll_backend__store_alloc__STATE_VARIABLE_LastLocns_6,
  MR_Word ll_backend__store_alloc__ResumeVars0_7,
  MR_Word ll_backend__store_alloc__StoreAllocInfo_8);

static void MR_CALL 
ll_backend__store_alloc__store_alloc_in_conj_8_p_0(
  MR_Word ll_backend__store_alloc__HeadVar__1_1,
  MR_Word * ll_backend__store_alloc__HeadVar__2_2,
  MR_Word ll_backend__store_alloc__STATE_VARIABLE_Liveness_0_3,
  MR_Word * ll_backend__store_alloc__STATE_VARIABLE_Liveness_4,
  MR_Word ll_backend__store_alloc__STATE_VARIABLE_LastLocns_0_5,
  MR_Word * ll_backend__store_alloc__STATE_VARIABLE_LastLocns_6,
  MR_Word ll_backend__store_alloc__ResumeVars0_7,
  MR_Word ll_backend__store_alloc__StoreAllocInfo_8);

static void MR_CALL 
ll_backend__store_alloc__store_alloc_in_goal_2_9_p_0(
  MR_Word ll_backend__store_alloc__GoalExpr0_10,
  MR_Word * ll_backend__store_alloc__GoalExpr_11,
  MR_Word ll_backend__store_alloc__STATE_VARIABLE_Liveness_0_78,
  MR_Word * ll_backend__store_alloc__STATE_VARIABLE_Liveness_79,
  MR_Word ll_backend__store_alloc__STATE_VARIABLE_LastLocns_0_80,
  MR_Word * ll_backend__store_alloc__STATE_VARIABLE_LastLocns_81,
  MR_Word ll_backend__store_alloc__ResumeVars0_14,
  MR_Word * ll_backend__store_alloc__BranchedGoal_15,
  MR_Word ll_backend__store_alloc__StoreAllocInfo_16);

static void MR_CALL 
ll_backend__store_alloc__store_alloc_in_goal_8_p_0(
  MR_Word ll_backend__store_alloc__Goal0_9,
  MR_Word * ll_backend__store_alloc__Goal_10,
  MR_Word ll_backend__store_alloc__Liveness0_11,
  MR_Word * ll_backend__store_alloc__Liveness_12,
  MR_Word ll_backend__store_alloc__STATE_VARIABLE_LastLocns_0_34,
  MR_Word * ll_backend__store_alloc__STATE_VARIABLE_LastLocns_35,
  MR_Word ll_backend__store_alloc__ResumeVars0_14,
  MR_Word ll_backend__store_alloc__StoreAllocInfo_15);

static MR_Word MR_CALL 
ll_backend__store_alloc__initial_last_locns_1_f_0(
  MR_Word ll_backend__store_alloc__HeadVar__1_1);


static /* final */ const MR_Box ll_backend__store_alloc_scalar_common_1[2][2];

static /* final */ const MR_Box ll_backend__store_alloc_scalar_common_2[3][3];




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

static /* final */ const MR_Box ll_backend__store_alloc_scalar_common_2[3][3] = {
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
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ll_backend__store_alloc_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
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
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
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
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
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
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__store_alloc__ll_backend__store_alloc__field_types_store_alloc_info_0_0,
  ll_backend__store_alloc__ll_backend__store_alloc__field_names_store_alloc_info_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ll_backend__store_alloc__ll_backend__store_alloc__du_stag_ordered_store_alloc_info_0_0[1] = {
  &ll_backend__store_alloc__ll_backend__store_alloc__du_functor_desc_store_alloc_info_0_0
};

static const MR_DuPtagLayout ll_backend__store_alloc__ll_backend__store_alloc__du_ptag_ordered_store_alloc_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
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
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
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
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
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

static MR_bool MR_CALL 
ll_backend__store_alloc____Unify____branched_goal_0_0_10001(
  MR_Box ll_backend__store_alloc__wrapper_arg_1,
  MR_Box ll_backend__store_alloc__wrapper_arg_2)
{
  {
    MR_bool ll_backend__store_alloc__succeeded;

    {
      ll_backend__store_alloc__succeeded = ll_backend__store_alloc____Unify____branched_goal_0_0(((MR_Word) ll_backend__store_alloc__wrapper_arg_1), ((MR_Word) ll_backend__store_alloc__wrapper_arg_2));
    }
    return ll_backend__store_alloc__succeeded;
  }
}

static void MR_CALL 
ll_backend__store_alloc____Compare____branched_goal_0_0_10001(
  MR_Box * ll_backend__store_alloc__wrapper_arg_1,
  MR_Box ll_backend__store_alloc__wrapper_arg_2,
  MR_Box ll_backend__store_alloc__wrapper_arg_3)
{
  {
    MR_Word ll_backend__store_alloc__conv0_HeadVar__1_1;

    {
      ll_backend__store_alloc____Compare____branched_goal_0_0(&ll_backend__store_alloc__conv0_HeadVar__1_1, ((MR_Word) ll_backend__store_alloc__wrapper_arg_2), ((MR_Word) ll_backend__store_alloc__wrapper_arg_3));
    }
    *ll_backend__store_alloc__wrapper_arg_1 = ((MR_Box) (ll_backend__store_alloc__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__store_alloc____Unify____last_locns_0_0_10001(
  MR_Box ll_backend__store_alloc__wrapper_arg_1,
  MR_Box ll_backend__store_alloc__wrapper_arg_2)
{
  {
    MR_bool ll_backend__store_alloc__succeeded;

    {
      ll_backend__store_alloc__succeeded = ll_backend__store_alloc____Unify____last_locns_0_0(((MR_Word) ll_backend__store_alloc__wrapper_arg_1), ((MR_Word) ll_backend__store_alloc__wrapper_arg_2));
    }
    return ll_backend__store_alloc__succeeded;
  }
}

static void MR_CALL 
ll_backend__store_alloc____Compare____last_locns_0_0_10001(
  MR_Box * ll_backend__store_alloc__wrapper_arg_1,
  MR_Box ll_backend__store_alloc__wrapper_arg_2,
  MR_Box ll_backend__store_alloc__wrapper_arg_3)
{
  {
    MR_Word ll_backend__store_alloc__conv0_HeadVar__1_1;

    {
      ll_backend__store_alloc____Compare____last_locns_0_0(&ll_backend__store_alloc__conv0_HeadVar__1_1, ((MR_Word) ll_backend__store_alloc__wrapper_arg_2), ((MR_Word) ll_backend__store_alloc__wrapper_arg_3));
    }
    *ll_backend__store_alloc__wrapper_arg_1 = ((MR_Box) (ll_backend__store_alloc__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__store_alloc____Unify____store_alloc_info_0_0_10001(
  MR_Box ll_backend__store_alloc__wrapper_arg_1,
  MR_Box ll_backend__store_alloc__wrapper_arg_2)
{
  {
    MR_bool ll_backend__store_alloc__succeeded;

    {
      ll_backend__store_alloc__succeeded = ll_backend__store_alloc____Unify____store_alloc_info_0_0(((MR_Word) ll_backend__store_alloc__wrapper_arg_1), ((MR_Word) ll_backend__store_alloc__wrapper_arg_2));
    }
    return ll_backend__store_alloc__succeeded;
  }
}

static void MR_CALL 
ll_backend__store_alloc____Compare____store_alloc_info_0_0_10001(
  MR_Box * ll_backend__store_alloc__wrapper_arg_1,
  MR_Box ll_backend__store_alloc__wrapper_arg_2,
  MR_Box ll_backend__store_alloc__wrapper_arg_3)
{
  {
    MR_Word ll_backend__store_alloc__conv0_HeadVar__1_1;

    {
      ll_backend__store_alloc____Compare____store_alloc_info_0_0(&ll_backend__store_alloc__conv0_HeadVar__1_1, ((MR_Word) ll_backend__store_alloc__wrapper_arg_2), ((MR_Word) ll_backend__store_alloc__wrapper_arg_3));
    }
    *ll_backend__store_alloc__wrapper_arg_1 = ((MR_Box) (ll_backend__store_alloc__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__store_alloc____Unify____store_map_run_type_0_0_10001(
  MR_Box ll_backend__store_alloc__wrapper_arg_1,
  MR_Box ll_backend__store_alloc__wrapper_arg_2)
{
  {
    MR_bool ll_backend__store_alloc__succeeded;

    {
      ll_backend__store_alloc__succeeded = ll_backend__store_alloc____Unify____store_map_run_type_0_0(((MR_Word) ll_backend__store_alloc__wrapper_arg_1), ((MR_Word) ll_backend__store_alloc__wrapper_arg_2));
    }
    return ll_backend__store_alloc__succeeded;
  }
}

static void MR_CALL 
ll_backend__store_alloc____Compare____store_map_run_type_0_0_10001(
  MR_Box * ll_backend__store_alloc__wrapper_arg_1,
  MR_Box ll_backend__store_alloc__wrapper_arg_2,
  MR_Box ll_backend__store_alloc__wrapper_arg_3)
{
  {
    MR_Word ll_backend__store_alloc__conv0_HeadVar__1_1;

    {
      ll_backend__store_alloc____Compare____store_map_run_type_0_0(&ll_backend__store_alloc__conv0_HeadVar__1_1, ((MR_Word) ll_backend__store_alloc__wrapper_arg_2), ((MR_Word) ll_backend__store_alloc__wrapper_arg_3));
    }
    *ll_backend__store_alloc__wrapper_arg_1 = ((MR_Box) (ll_backend__store_alloc__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__store_alloc____Unify____where_stored_0_0_10001(
  MR_Box ll_backend__store_alloc__wrapper_arg_1,
  MR_Box ll_backend__store_alloc__wrapper_arg_2)
{
  {
    MR_bool ll_backend__store_alloc__succeeded;

    {
      ll_backend__store_alloc__succeeded = ll_backend__store_alloc____Unify____where_stored_0_0(((MR_Word) ll_backend__store_alloc__wrapper_arg_1), ((MR_Word) ll_backend__store_alloc__wrapper_arg_2));
    }
    return ll_backend__store_alloc__succeeded;
  }
}

static void MR_CALL 
ll_backend__store_alloc____Compare____where_stored_0_0_10001(
  MR_Box * ll_backend__store_alloc__wrapper_arg_1,
  MR_Box ll_backend__store_alloc__wrapper_arg_2,
  MR_Box ll_backend__store_alloc__wrapper_arg_3)
{
  {
    MR_Word ll_backend__store_alloc__conv0_HeadVar__1_1;

    {
      ll_backend__store_alloc____Compare____where_stored_0_0(&ll_backend__store_alloc__conv0_HeadVar__1_1, ((MR_Word) ll_backend__store_alloc__wrapper_arg_2), ((MR_Word) ll_backend__store_alloc__wrapper_arg_3));
    }
    *ll_backend__store_alloc__wrapper_arg_1 = ((MR_Box) (ll_backend__store_alloc__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
ll_backend__store_alloc____Compare____where_stored_0_0(
  MR_Word * ll_backend__store_alloc__HeadVar__1_1,
  MR_Word ll_backend__store_alloc__HeadVar__2_2,
  MR_Word ll_backend__store_alloc__HeadVar__3_3)
{
  {
    MR_bool ll_backend__store_alloc__succeeded;
    MR_Word ll_backend__store_alloc__Cast_HeadVar1_4 = ll_backend__store_alloc__HeadVar__2_2;
    MR_Word ll_backend__store_alloc__Cast_HeadVar2_5 = ll_backend__store_alloc__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__store_alloc_scalar_common_1[1], ll_backend__store_alloc__HeadVar__1_1, ((MR_Box) (ll_backend__store_alloc__Cast_HeadVar1_4)), ((MR_Box) (ll_backend__store_alloc__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
ll_backend__store_alloc____Unify____where_stored_0_0(
  MR_Word ll_backend__store_alloc__HeadVar__1_1,
  MR_Word ll_backend__store_alloc__HeadVar__2_2)
{
  {
    MR_bool ll_backend__store_alloc__succeeded;
    MR_Word ll_backend__store_alloc__Cast_HeadVar1_3 = ll_backend__store_alloc__HeadVar__1_1;
    MR_Word ll_backend__store_alloc__Cast_HeadVar2_4 = ll_backend__store_alloc__HeadVar__2_2;

    {
      ll_backend__store_alloc__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__store_alloc_scalar_common_1[1], ((MR_Box) (ll_backend__store_alloc__Cast_HeadVar1_3)), ((MR_Box) (ll_backend__store_alloc__Cast_HeadVar2_4)));
    }
    return ll_backend__store_alloc__succeeded;
  }
}

void MR_CALL 
ll_backend__store_alloc____Compare____store_map_run_type_0_0(
  MR_Word * ll_backend__store_alloc__HeadVar__1_1,
  MR_Word ll_backend__store_alloc__HeadVar__2_2,
  MR_Word ll_backend__store_alloc__HeadVar__3_3)
{
  {
    MR_bool ll_backend__store_alloc__succeeded;
    MR_Integer ll_backend__store_alloc__Cast_HeadVar1_4 = (MR_Integer) ll_backend__store_alloc__HeadVar__2_2;
    MR_Integer ll_backend__store_alloc__Cast_HeadVar2_5 = (MR_Integer) ll_backend__store_alloc__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__store_alloc__HeadVar__1_1, ll_backend__store_alloc__Cast_HeadVar1_4, ll_backend__store_alloc__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
ll_backend__store_alloc____Unify____store_map_run_type_0_0(
  MR_Word ll_backend__store_alloc__HeadVar__2_1,
  MR_Word ll_backend__store_alloc__HeadVar__2_2)
{
  {
    MR_bool ll_backend__store_alloc__succeeded = (ll_backend__store_alloc__HeadVar__2_1 == ll_backend__store_alloc__HeadVar__2_2);

    return ll_backend__store_alloc__succeeded;
  }
}

static void MR_CALL 
ll_backend__store_alloc____Compare____store_alloc_info_0_0(
  MR_Word * ll_backend__store_alloc__HeadVar__1_1,
  MR_Word ll_backend__store_alloc__HeadVar__2_2,
  MR_Word ll_backend__store_alloc__HeadVar__3_3)
{
  {
    MR_bool ll_backend__store_alloc__succeeded;
    MR_Integer ll_backend__store_alloc__CastX_12 = (MR_Integer) ll_backend__store_alloc__HeadVar__2_2;
    MR_Integer ll_backend__store_alloc__CastY_13 = (MR_Integer) ll_backend__store_alloc__HeadVar__3_3;

    ll_backend__store_alloc__succeeded = (ll_backend__store_alloc__CastX_12 == ll_backend__store_alloc__CastY_13);
    if (ll_backend__store_alloc__succeeded)
      *ll_backend__store_alloc__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word ll_backend__store_alloc__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ll_backend__store_alloc__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ll_backend__store_alloc__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word ll_backend__store_alloc__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ll_backend__store_alloc__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word ll_backend__store_alloc__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word ll_backend__store_alloc__V_10_10;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__store_alloc_scalar_common_2[1], &ll_backend__store_alloc__V_10_10, ((MR_Box) (ll_backend__store_alloc__V_4_4)), ((MR_Box) (ll_backend__store_alloc__V_7_7)));
        }
        ll_backend__store_alloc__succeeded = (ll_backend__store_alloc__V_10_10 == (MR_Integer) 0);
        ll_backend__store_alloc__succeeded = !(ll_backend__store_alloc__succeeded);
        if (ll_backend__store_alloc__succeeded)
          *ll_backend__store_alloc__HeadVar__1_1 = ll_backend__store_alloc__V_10_10;
        else
          {
            MR_Word ll_backend__store_alloc__V_11_11;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__store_alloc_scalar_common_2[2], &ll_backend__store_alloc__V_11_11, ((MR_Box) (ll_backend__store_alloc__V_5_5)), ((MR_Box) (ll_backend__store_alloc__V_8_8)));
            }
            ll_backend__store_alloc__succeeded = (ll_backend__store_alloc__V_11_11 == (MR_Integer) 0);
            ll_backend__store_alloc__succeeded = !(ll_backend__store_alloc__succeeded);
            if (ll_backend__store_alloc__succeeded)
              *ll_backend__store_alloc__HeadVar__1_1 = ll_backend__store_alloc__V_11_11;
            else
              {
                MR_Integer ll_backend__store_alloc__V_17_17 = (MR_Integer) ll_backend__store_alloc__V_6_6;
                MR_Integer ll_backend__store_alloc__V_18_18 = (MR_Integer) ll_backend__store_alloc__V_9_9;

                {
                  mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__store_alloc__HeadVar__1_1, ll_backend__store_alloc__V_17_17, ll_backend__store_alloc__V_18_18);
                }
              }
          }
      }
  }
}

static MR_bool MR_CALL 
ll_backend__store_alloc____Unify____store_alloc_info_0_0(
  MR_Word ll_backend__store_alloc__HeadVar__1_1,
  MR_Word ll_backend__store_alloc__HeadVar__2_2)
{
  {
    MR_bool ll_backend__store_alloc__succeeded;
    MR_Integer ll_backend__store_alloc__CastX_9 = (MR_Integer) ll_backend__store_alloc__HeadVar__1_1;
    MR_Integer ll_backend__store_alloc__CastY_10 = (MR_Integer) ll_backend__store_alloc__HeadVar__2_2;

    ll_backend__store_alloc__succeeded = (ll_backend__store_alloc__CastX_9 == ll_backend__store_alloc__CastY_10);
    if (ll_backend__store_alloc__succeeded)
      ll_backend__store_alloc__succeeded = MR_TRUE;
    else
      {
        MR_Word ll_backend__store_alloc__TypeInfo_12_12;
        MR_Word ll_backend__store_alloc__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__store_alloc__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__store_alloc__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word ll_backend__store_alloc__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ll_backend__store_alloc__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ll_backend__store_alloc__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__HeadVar__2_2, (MR_Integer) 2)));

        {
          ll_backend__store_alloc__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__store_alloc_scalar_common_2[1], ((MR_Box) (ll_backend__store_alloc__V_3_3)), ((MR_Box) (ll_backend__store_alloc__V_6_6)));
        }
        if (ll_backend__store_alloc__succeeded)
          {
            ll_backend__store_alloc__TypeInfo_12_12 = (MR_Word) &ll_backend__store_alloc_scalar_common_2[2];
            {
              ll_backend__store_alloc__succeeded = mercury__builtin__unify_2_p_0(ll_backend__store_alloc__TypeInfo_12_12, ((MR_Box) (ll_backend__store_alloc__V_4_4)), ((MR_Box) (ll_backend__store_alloc__V_7_7)));
            }
            if (ll_backend__store_alloc__succeeded)
              ll_backend__store_alloc__succeeded = (ll_backend__store_alloc__V_5_5 == ll_backend__store_alloc__V_8_8);
          }
      }
    return ll_backend__store_alloc__succeeded;
  }
}

static void MR_CALL 
ll_backend__store_alloc____Compare____last_locns_0_0(
  MR_Word * ll_backend__store_alloc__HeadVar__1_1,
  MR_Word ll_backend__store_alloc__HeadVar__2_2,
  MR_Word ll_backend__store_alloc__HeadVar__3_3)
{
  {
    MR_bool ll_backend__store_alloc__succeeded;
    MR_Word ll_backend__store_alloc__Cast_HeadVar1_4 = ll_backend__store_alloc__HeadVar__2_2;
    MR_Word ll_backend__store_alloc__Cast_HeadVar2_5 = ll_backend__store_alloc__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__store_alloc_scalar_common_2[0], ll_backend__store_alloc__HeadVar__1_1, ((MR_Box) (ll_backend__store_alloc__Cast_HeadVar1_4)), ((MR_Box) (ll_backend__store_alloc__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
ll_backend__store_alloc____Unify____last_locns_0_0(
  MR_Word ll_backend__store_alloc__HeadVar__1_1,
  MR_Word ll_backend__store_alloc__HeadVar__2_2)
{
  {
    MR_bool ll_backend__store_alloc__succeeded;
    MR_Word ll_backend__store_alloc__Cast_HeadVar1_3 = ll_backend__store_alloc__HeadVar__1_1;
    MR_Word ll_backend__store_alloc__Cast_HeadVar2_4 = ll_backend__store_alloc__HeadVar__2_2;

    {
      ll_backend__store_alloc__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__store_alloc_scalar_common_2[0], ((MR_Box) (ll_backend__store_alloc__Cast_HeadVar1_3)), ((MR_Box) (ll_backend__store_alloc__Cast_HeadVar2_4)));
    }
    return ll_backend__store_alloc__succeeded;
  }
}

static void MR_CALL 
ll_backend__store_alloc____Compare____branched_goal_0_0(
  MR_Word * ll_backend__store_alloc__HeadVar__1_1,
  MR_Word ll_backend__store_alloc__HeadVar__2_2,
  MR_Word ll_backend__store_alloc__HeadVar__3_3)
{
  {
    MR_bool ll_backend__store_alloc__succeeded;
    MR_Integer ll_backend__store_alloc__Cast_HeadVar1_4 = (MR_Integer) ll_backend__store_alloc__HeadVar__2_2;
    MR_Integer ll_backend__store_alloc__Cast_HeadVar2_5 = (MR_Integer) ll_backend__store_alloc__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__store_alloc__HeadVar__1_1, ll_backend__store_alloc__Cast_HeadVar1_4, ll_backend__store_alloc__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
ll_backend__store_alloc____Unify____branched_goal_0_0(
  MR_Word ll_backend__store_alloc__HeadVar__2_1,
  MR_Word ll_backend__store_alloc__HeadVar__2_2)
{
  {
    MR_bool ll_backend__store_alloc__succeeded = (ll_backend__store_alloc__HeadVar__2_1 == ll_backend__store_alloc__HeadVar__2_2);

    return ll_backend__store_alloc__succeeded;
  }
}

static void MR_CALL 
ll_backend__store_alloc__next_free_reg_4_p_0(
  MR_Word ll_backend__store_alloc__RegType_5,
  MR_Word ll_backend__store_alloc__Values_6,
  MR_Integer ll_backend__store_alloc__N0_7,
  MR_Integer * ll_backend__store_alloc__N_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__store_alloc__succeeded;
        MR_Word ll_backend__store_alloc__V_10_10;

        {
          ll_backend__store_alloc__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__store_alloc__V_10_10, 0) = ((MR_Box) (ll_backend__store_alloc__RegType_5));
          MR_hl_field(MR_mktag(1), ll_backend__store_alloc__V_10_10, 1) = ((MR_Box) (ll_backend__store_alloc__N0_7));
        }
        {
          ll_backend__store_alloc__succeeded = mercury__set__member_2_p_0((MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0, ((MR_Box) (ll_backend__store_alloc__V_10_10)), ll_backend__store_alloc__Values_6);
        }
        if (ll_backend__store_alloc__succeeded)
          {
            MR_Integer ll_backend__store_alloc__N1_9 = (ll_backend__store_alloc__N0_7 + (MR_Integer) 1);

            /* direct tailcall eliminated */
            {
              MR_Integer ll_backend__store_alloc__N0__tmp_copy_7 = ll_backend__store_alloc__N1_9;

              ll_backend__store_alloc__N0_7 = ll_backend__store_alloc__N0__tmp_copy_7;
            }
            continue;
          }
        else
          *ll_backend__store_alloc__N_8 = ll_backend__store_alloc__N0_7;
      }
      break;
    }
}

static void MR_CALL 
ll_backend__store_alloc__store_alloc_allocate_extras_6_p_0(
  MR_Word ll_backend__store_alloc__StoreAllocInfo_1,
  MR_Word ll_backend__store_alloc__HeadVar__2_2,
  MR_Integer ll_backend__store_alloc__STATE_VARIABLE_N_0_3,
  MR_Word ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_0_4,
  MR_Word ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0_5,
  MR_Word * ll_backend__store_alloc__STATE_VARIABLE_StoreMap_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__store_alloc__succeeded;

        if ((ll_backend__store_alloc__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *ll_backend__store_alloc__STATE_VARIABLE_StoreMap_6 = ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0_5;
        else
          {
            MR_Word ll_backend__store_alloc__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__store_alloc__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word ll_backend__store_alloc__Vars_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__store_alloc__HeadVar__2_2, (MR_Integer) 1)));
            MR_Integer ll_backend__store_alloc__STATE_VARIABLE_N_30_30;
            MR_Word ll_backend__store_alloc__STATE_VARIABLE_StoreMap_31_31;
            MR_Word ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_32_32;

            {
              ll_backend__store_alloc__succeeded = mercury__map__contains_2_p_0((MR_Word) &ll_backend__store_alloc_scalar_common_1[0], (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0, ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0_5, ((MR_Box) (ll_backend__store_alloc__Var_14)));
            }
            if (ll_backend__store_alloc__succeeded)
              {
                ll_backend__store_alloc__STATE_VARIABLE_StoreMap_31_31 = ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0_5;
                ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_32_32 = ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_0_4;
                ll_backend__store_alloc__STATE_VARIABLE_N_30_30 = ll_backend__store_alloc__STATE_VARIABLE_N_0_3;
              }
            else
              {
                MR_Word ll_backend__store_alloc__TypeCtorInfo_40_40;
                MR_Word ll_backend__store_alloc__StackSlots_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__StoreAllocInfo_1, (MR_Integer) 0)));
                MR_Word ll_backend__store_alloc__Locn_24;
                MR_Word ll_backend__store_alloc__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__StoreAllocInfo_1, (MR_Integer) 1)));
                MR_Word ll_backend__store_alloc__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__StoreAllocInfo_1, (MR_Integer) 2)));
                MR_Word ll_backend__store_alloc__StackSlotLocn_23;
                MR_Word ll_backend__store_alloc__StackSlot_22;
                MR_Box ll_backend__store_alloc__conv0_StackSlot_22;
                MR_Word ll_backend__store_alloc__TypeCtorInfo_38_38;

                {
                  ll_backend__store_alloc__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__store_alloc_scalar_common_1[0], (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0, ll_backend__store_alloc__StackSlots_19, ((MR_Box) (ll_backend__store_alloc__Var_14)), &ll_backend__store_alloc__conv0_StackSlot_22);
                }
                if (ll_backend__store_alloc__succeeded)
                  {
                    ll_backend__store_alloc__StackSlot_22 = ((MR_Word) ll_backend__store_alloc__conv0_StackSlot_22);
                    ll_backend__store_alloc__succeeded = MR_TRUE;
                  }
                if (ll_backend__store_alloc__succeeded)
                  {
                    {
                      ll_backend__store_alloc__StackSlotLocn_23 = hlds__hlds_llds__stack_slot_to_abs_locn_1_f_0(ll_backend__store_alloc__StackSlot_22);
                    }
                    ll_backend__store_alloc__TypeCtorInfo_38_38 = (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0;
                    {
                      ll_backend__store_alloc__succeeded = mercury__set__member_2_p_0(ll_backend__store_alloc__TypeCtorInfo_38_38, ((MR_Box) (ll_backend__store_alloc__StackSlotLocn_23)), ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_0_4);
                    }
                    ll_backend__store_alloc__succeeded = !(ll_backend__store_alloc__succeeded);
                  }
                if (ll_backend__store_alloc__succeeded)
                  {
                    ll_backend__store_alloc__Locn_24 = ll_backend__store_alloc__StackSlotLocn_23;
                    ll_backend__store_alloc__STATE_VARIABLE_N_30_30 = ll_backend__store_alloc__STATE_VARIABLE_N_0_3;
                  }
                else
                  {
                    MR_Word ll_backend__store_alloc__RegType_25;
                    MR_Word ll_backend__store_alloc__VarTypes_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__StoreAllocInfo_1, (MR_Integer) 1)));
                    MR_Word ll_backend__store_alloc__FloatRegType_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__StoreAllocInfo_1, (MR_Integer) 2)));
                    MR_Word ll_backend__store_alloc__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__StoreAllocInfo_1, (MR_Integer) 0)));

                    switch (ll_backend__store_alloc__FloatRegType_46) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 1:
                        {
                          MR_Word ll_backend__store_alloc__VarType_47;
                          MR_Word ll_backend__store_alloc__V_48_48;

                          {
                            hlds__vartypes__lookup_var_type_3_p_0(ll_backend__store_alloc__VarTypes_45, ll_backend__store_alloc__Var_14, &ll_backend__store_alloc__VarType_47);
                          }
                          {
                            ll_backend__store_alloc__V_48_48 = parse_tree__builtin_lib_types__float_type_0_f_0();
                          }
                          {
                            ll_backend__store_alloc__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ll_backend__store_alloc__VarType_47, ll_backend__store_alloc__V_48_48);
                          }
                          if (ll_backend__store_alloc__succeeded)
                            ll_backend__store_alloc__RegType_25 = (MR_Integer) 1;
                          else
                            ll_backend__store_alloc__RegType_25 = (MR_Integer) 0;
                        }
                        break;
                      case (MR_Integer) 0:
                        ll_backend__store_alloc__RegType_25 = (MR_Integer) 0;
                        break;
                    }
                    {
                      ll_backend__store_alloc__next_free_reg_4_p_0(ll_backend__store_alloc__RegType_25, ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_0_4, ll_backend__store_alloc__STATE_VARIABLE_N_0_3, &ll_backend__store_alloc__STATE_VARIABLE_N_30_30);
                    }
                    {
                      ll_backend__store_alloc__Locn_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ll_backend__store_alloc__Locn_24, 0) = ((MR_Box) (ll_backend__store_alloc__RegType_25));
                      MR_hl_field(MR_mktag(1), ll_backend__store_alloc__Locn_24, 1) = ((MR_Box) (ll_backend__store_alloc__STATE_VARIABLE_N_30_30));
                    }
                  }
                ll_backend__store_alloc__TypeCtorInfo_40_40 = (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0;
                {
                  mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__store_alloc_scalar_common_1[0], ll_backend__store_alloc__TypeCtorInfo_40_40, ((MR_Box) (ll_backend__store_alloc__Var_14)), ((MR_Box) (ll_backend__store_alloc__Locn_24)), ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0_5, &ll_backend__store_alloc__STATE_VARIABLE_StoreMap_31_31);
                }
                {
                  mercury__set__insert_3_p_0(ll_backend__store_alloc__TypeCtorInfo_40_40, ((MR_Box) (ll_backend__store_alloc__Locn_24)), ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_0_4, &ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_32_32);
                }
              }
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__store_alloc__HeadVar__2__tmp_copy_2 = ll_backend__store_alloc__Vars_15;
              MR_Integer ll_backend__store_alloc__STATE_VARIABLE_N_0__tmp_copy_3 = ll_backend__store_alloc__STATE_VARIABLE_N_30_30;
              MR_Word ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_0__tmp_copy_4 = ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_32_32;
              MR_Word ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0__tmp_copy_5 = ll_backend__store_alloc__STATE_VARIABLE_StoreMap_31_31;

              ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0_5 = ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0__tmp_copy_5;
              ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_0_4 = ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_0__tmp_copy_4;
              ll_backend__store_alloc__STATE_VARIABLE_N_0_3 = ll_backend__store_alloc__STATE_VARIABLE_N_0__tmp_copy_3;
              ll_backend__store_alloc__HeadVar__2_2 = ll_backend__store_alloc__HeadVar__2__tmp_copy_2;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__store_alloc__store_alloc_handle_conflicts_and_nonreal_8_p_0(
  MR_Word ll_backend__store_alloc__StoreAllocInfo_1,
  MR_Word ll_backend__store_alloc__HeadVar__2_2,
  MR_Integer ll_backend__store_alloc__STATE_VARIABLE_N_0_3,
  MR_Integer * ll_backend__store_alloc__STATE_VARIABLE_N_4,
  MR_Word ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_0_5,
  MR_Word * ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_6,
  MR_Word ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0_7,
  MR_Word * ll_backend__store_alloc__STATE_VARIABLE_StoreMap_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__store_alloc__succeeded;

        if ((ll_backend__store_alloc__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *ll_backend__store_alloc__STATE_VARIABLE_StoreMap_8 = ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0_7;
            *ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_6 = ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_0_5;
            *ll_backend__store_alloc__STATE_VARIABLE_N_4 = ll_backend__store_alloc__STATE_VARIABLE_N_0_3;
          }
        else
          {
            MR_Word ll_backend__store_alloc__TypeInfo_42_42 = (MR_Word) &ll_backend__store_alloc_scalar_common_1[0];
            MR_Word ll_backend__store_alloc__TypeCtorInfo_43_43 = (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0;
            MR_Word ll_backend__store_alloc__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__store_alloc__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word ll_backend__store_alloc__Vars_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__store_alloc__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word ll_backend__store_alloc__Locn_25;
            MR_Word ll_backend__store_alloc__FinalLocn_29;
            MR_Integer ll_backend__store_alloc__STATE_VARIABLE_N_36_36;
            MR_Word ll_backend__store_alloc__STATE_VARIABLE_StoreMap_37_37;
            MR_Word ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_38_38;
            MR_Box ll_backend__store_alloc__conv0_Locn_25;

            {
              mercury__map__lookup_3_p_0(ll_backend__store_alloc__TypeInfo_42_42, ll_backend__store_alloc__TypeCtorInfo_43_43, ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0_7, ((MR_Box) (ll_backend__store_alloc__Var_20)), &ll_backend__store_alloc__conv0_Locn_25);
            }
            ll_backend__store_alloc__Locn_25 = ((MR_Word) ll_backend__store_alloc__conv0_Locn_25);
            ll_backend__store_alloc__succeeded = (ll_backend__store_alloc__Locn_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (!(ll_backend__store_alloc__succeeded))
              {
                ll_backend__store_alloc__succeeded = mercury__set__member_2_p_0(ll_backend__store_alloc__TypeCtorInfo_43_43, ((MR_Box) (ll_backend__store_alloc__Locn_25)), ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_0_5);
              }
            if (ll_backend__store_alloc__succeeded)
              {
                MR_Word ll_backend__store_alloc__RegType_28;
                MR_Word ll_backend__store_alloc__RegTypePrime_26;
                MR_Integer ll_backend__store_alloc__V_27_27;

                ll_backend__store_alloc__succeeded = ((MR_tag((MR_Word) ll_backend__store_alloc__Locn_25)) == (MR_mktag((MR_Integer) 1)));
                if (ll_backend__store_alloc__succeeded)
                  {
                    ll_backend__store_alloc__RegTypePrime_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__store_alloc__Locn_25, (MR_Integer) 0)));
                    ll_backend__store_alloc__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__store_alloc__Locn_25, (MR_Integer) 1)));
                    ll_backend__store_alloc__RegType_28 = ll_backend__store_alloc__RegTypePrime_26;
                  }
                else
                  {
                    MR_Word ll_backend__store_alloc__VarTypes_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__StoreAllocInfo_1, (MR_Integer) 1)));
                    MR_Word ll_backend__store_alloc__FloatRegType_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__StoreAllocInfo_1, (MR_Integer) 2)));
                    MR_Word ll_backend__store_alloc__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__StoreAllocInfo_1, (MR_Integer) 0)));

                    switch (ll_backend__store_alloc__FloatRegType_49) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 1:
                        {
                          MR_Word ll_backend__store_alloc__VarType_50;
                          MR_Word ll_backend__store_alloc__V_51_51;

                          {
                            hlds__vartypes__lookup_var_type_3_p_0(ll_backend__store_alloc__VarTypes_48, ll_backend__store_alloc__Var_20, &ll_backend__store_alloc__VarType_50);
                          }
                          {
                            ll_backend__store_alloc__V_51_51 = parse_tree__builtin_lib_types__float_type_0_f_0();
                          }
                          {
                            ll_backend__store_alloc__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ll_backend__store_alloc__VarType_50, ll_backend__store_alloc__V_51_51);
                          }
                          if (ll_backend__store_alloc__succeeded)
                            ll_backend__store_alloc__RegType_28 = (MR_Integer) 1;
                          else
                            ll_backend__store_alloc__RegType_28 = (MR_Integer) 0;
                        }
                        break;
                      case (MR_Integer) 0:
                        ll_backend__store_alloc__RegType_28 = (MR_Integer) 0;
                        break;
                    }
                  }
                {
                  ll_backend__store_alloc__next_free_reg_4_p_0(ll_backend__store_alloc__RegType_28, ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_0_5, ll_backend__store_alloc__STATE_VARIABLE_N_0_3, &ll_backend__store_alloc__STATE_VARIABLE_N_36_36);
                }
                {
                  ll_backend__store_alloc__FinalLocn_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ll_backend__store_alloc__FinalLocn_29, 0) = ((MR_Box) (ll_backend__store_alloc__RegType_28));
                  MR_hl_field(MR_mktag(1), ll_backend__store_alloc__FinalLocn_29, 1) = ((MR_Box) (ll_backend__store_alloc__STATE_VARIABLE_N_36_36));
                }
                {
                  mercury__map__det_update_4_p_0(ll_backend__store_alloc__TypeInfo_42_42, ll_backend__store_alloc__TypeCtorInfo_43_43, ((MR_Box) (ll_backend__store_alloc__Var_20)), ((MR_Box) (ll_backend__store_alloc__FinalLocn_29)), ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0_7, &ll_backend__store_alloc__STATE_VARIABLE_StoreMap_37_37);
                }
              }
            else
              {
                ll_backend__store_alloc__FinalLocn_29 = ll_backend__store_alloc__Locn_25;
                ll_backend__store_alloc__STATE_VARIABLE_StoreMap_37_37 = ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0_7;
                ll_backend__store_alloc__STATE_VARIABLE_N_36_36 = ll_backend__store_alloc__STATE_VARIABLE_N_0_3;
              }
            {
              mercury__set__insert_3_p_0(ll_backend__store_alloc__TypeCtorInfo_43_43, ((MR_Box) (ll_backend__store_alloc__FinalLocn_29)), ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_0_5, &ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_38_38);
            }
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__store_alloc__HeadVar__2__tmp_copy_2 = ll_backend__store_alloc__Vars_21;
              MR_Integer ll_backend__store_alloc__STATE_VARIABLE_N_0__tmp_copy_3 = ll_backend__store_alloc__STATE_VARIABLE_N_36_36;
              MR_Word ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_0__tmp_copy_5 = ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_38_38;
              MR_Word ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0__tmp_copy_7 = ll_backend__store_alloc__STATE_VARIABLE_StoreMap_37_37;

              ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0_7 = ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0__tmp_copy_7;
              ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_0_5 = ll_backend__store_alloc__STATE_VARIABLE_SeenLocns_0__tmp_copy_5;
              ll_backend__store_alloc__STATE_VARIABLE_N_0_3 = ll_backend__store_alloc__STATE_VARIABLE_N_0__tmp_copy_3;
              ll_backend__store_alloc__HeadVar__2_2 = ll_backend__store_alloc__HeadVar__2__tmp_copy_2;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__store_alloc__store_alloc_remove_nonlive_4_p_0(
  MR_Word ll_backend__store_alloc__HeadVar__1_1,
  MR_Word ll_backend__store_alloc__HeadVar__2_2,
  MR_Word ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0_3,
  MR_Word * ll_backend__store_alloc__STATE_VARIABLE_StoreMap_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__store_alloc__succeeded;

        if ((ll_backend__store_alloc__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *ll_backend__store_alloc__STATE_VARIABLE_StoreMap_4 = ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0_3;
        else
          {
            MR_Word ll_backend__store_alloc__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__store_alloc__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__store_alloc__Vars_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__store_alloc__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ll_backend__store_alloc__STATE_VARIABLE_StoreMap_15_15;

            {
              ll_backend__store_alloc__succeeded = mercury__list__member_2_p_0((MR_Word) &ll_backend__store_alloc_scalar_common_1[0], ((MR_Box) (ll_backend__store_alloc__Var_9)), ll_backend__store_alloc__HeadVar__2_2);
            }
            if (ll_backend__store_alloc__succeeded)
              ll_backend__store_alloc__STATE_VARIABLE_StoreMap_15_15 = ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0_3;
            else
              {
                {
                  mercury__map__delete_3_p_0((MR_Word) &ll_backend__store_alloc_scalar_common_1[0], (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0, ((MR_Box) (ll_backend__store_alloc__Var_9)), ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0_3, &ll_backend__store_alloc__STATE_VARIABLE_StoreMap_15_15);
                }
              }
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__store_alloc__HeadVar__1__tmp_copy_1 = ll_backend__store_alloc__Vars_10;
              MR_Word ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0__tmp_copy_3 = ll_backend__store_alloc__STATE_VARIABLE_StoreMap_15_15;

              ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0_3 = ll_backend__store_alloc__STATE_VARIABLE_StoreMap_0__tmp_copy_3;
              ll_backend__store_alloc__HeadVar__1_1 = ll_backend__store_alloc__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__store_alloc__merge_last_locations_2_p_0(
  MR_Word ll_backend__store_alloc__LastLocnsList_3,
  MR_Word * ll_backend__store_alloc__LastLocns_4)
{
  {
    MR_bool ll_backend__store_alloc__succeeded;

    if ((ll_backend__store_alloc__LastLocnsList_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          *ll_backend__store_alloc__LastLocns_4 = mercury__map__init_0_f_0((MR_Word) &ll_backend__store_alloc_scalar_common_1[0], (MR_Word) &ll_backend__store_alloc_scalar_common_1[1]);
        }
      }
    else
      {
        MR_Word ll_backend__store_alloc__V_5_5;

        *ll_backend__store_alloc__LastLocns_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__store_alloc__LastLocnsList_3, (MR_Integer) 0)));
        ll_backend__store_alloc__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__store_alloc__LastLocnsList_3, (MR_Integer) 1)));
      }
  }
}

static void MR_CALL 
ll_backend__store_alloc__store_alloc_in_cases_8_p_0(
  MR_Word ll_backend__store_alloc__HeadVar__1_1,
  MR_Word * ll_backend__store_alloc__HeadVar__2_2,
  MR_Word ll_backend__store_alloc__HeadVar__3_3,
  MR_Word * ll_backend__store_alloc__HeadVar__4_4,
  MR_Word ll_backend__store_alloc__LastLocns0_5,
  MR_Word * ll_backend__store_alloc__HeadVar__6_6,
  MR_Word ll_backend__store_alloc__ResumeVars0_7,
  MR_Word ll_backend__store_alloc__StoreAllocInfo_8)
{
  {
    MR_bool ll_backend__store_alloc__succeeded;

    if ((ll_backend__store_alloc__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *ll_backend__store_alloc__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ll_backend__store_alloc__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ll_backend__store_alloc__HeadVar__4_4 = ll_backend__store_alloc__HeadVar__3_3;
      }
    else
      {
        MR_Word ll_backend__store_alloc__Case0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__store_alloc__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__store_alloc__Cases0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__store_alloc__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__store_alloc__Case_17;
        MR_Word ll_backend__store_alloc__Cases_18;
        MR_Word ll_backend__store_alloc__LastLocnsGoal_22;
        MR_Word ll_backend__store_alloc__LastLocnsCases_23;
        MR_Word ll_backend__store_alloc__MainConsId_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__Case0_15, (MR_Integer) 0)));
        MR_Word ll_backend__store_alloc__OtherConsIds_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__Case0_15, (MR_Integer) 1)));
        MR_Word ll_backend__store_alloc__Goal0_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__Case0_15, (MR_Integer) 2)));
        MR_Word ll_backend__store_alloc__Goal_29;
        MR_Word ll_backend__store_alloc___Liveness1_30;

        {
          ll_backend__store_alloc__store_alloc_in_goal_8_p_0(ll_backend__store_alloc__Goal0_28, &ll_backend__store_alloc__Goal_29, ll_backend__store_alloc__HeadVar__3_3, ll_backend__store_alloc__HeadVar__4_4, ll_backend__store_alloc__LastLocns0_5, &ll_backend__store_alloc__LastLocnsGoal_22, ll_backend__store_alloc__ResumeVars0_7, ll_backend__store_alloc__StoreAllocInfo_8);
        }
        {
          ll_backend__store_alloc__Case_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__store_alloc__Case_17, 0) = ((MR_Box) (ll_backend__store_alloc__MainConsId_26));
          MR_hl_field(MR_mktag(0), ll_backend__store_alloc__Case_17, 1) = ((MR_Box) (ll_backend__store_alloc__OtherConsIds_27));
          MR_hl_field(MR_mktag(0), ll_backend__store_alloc__Case_17, 2) = ((MR_Box) (ll_backend__store_alloc__Goal_29));
        }
        {
          ll_backend__store_alloc__store_alloc_in_cases_8_p_0(ll_backend__store_alloc__Cases0_16, &ll_backend__store_alloc__Cases_18, ll_backend__store_alloc__HeadVar__3_3, &ll_backend__store_alloc___Liveness1_30, ll_backend__store_alloc__LastLocns0_5, &ll_backend__store_alloc__LastLocnsCases_23, ll_backend__store_alloc__ResumeVars0_7, ll_backend__store_alloc__StoreAllocInfo_8);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ll_backend__store_alloc__HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__store_alloc__Case_17));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__store_alloc__Cases_18));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ll_backend__store_alloc__HeadVar__6_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__store_alloc__LastLocnsGoal_22));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__store_alloc__LastLocnsCases_23));
        }
      }
  }
}

static void MR_CALL 
ll_backend__store_alloc__store_alloc_in_disj_8_p_0(
  MR_Word ll_backend__store_alloc__HeadVar__1_1,
  MR_Word * ll_backend__store_alloc__HeadVar__2_2,
  MR_Word ll_backend__store_alloc__HeadVar__3_3,
  MR_Word * ll_backend__store_alloc__HeadVar__4_4,
  MR_Word ll_backend__store_alloc__LastLocns0_5,
  MR_Word * ll_backend__store_alloc__HeadVar__6_6,
  MR_Word ll_backend__store_alloc__ResumeVars0_7,
  MR_Word ll_backend__store_alloc__StoreAllocInfo_8)
{
  {
    MR_bool ll_backend__store_alloc__succeeded;

    if ((ll_backend__store_alloc__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *ll_backend__store_alloc__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ll_backend__store_alloc__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ll_backend__store_alloc__HeadVar__4_4 = ll_backend__store_alloc__HeadVar__3_3;
      }
    else
      {
        MR_Word ll_backend__store_alloc__Goal0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__store_alloc__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__store_alloc__Goals0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__store_alloc__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__store_alloc__Goal_17;
        MR_Word ll_backend__store_alloc__Goals_18;
        MR_Word ll_backend__store_alloc__LastLocnsGoal_22;
        MR_Word ll_backend__store_alloc__LastLocnsDisj_23;
        MR_Word ll_backend__store_alloc__GoalInfo0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__Goal0_15, (MR_Integer) 1)));
        MR_Word ll_backend__store_alloc__ResumeGoal_28;
        MR_Word ll_backend__store_alloc__ResumeGoalVars_29;
        MR_Word ll_backend__store_alloc__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__Goal0_15, (MR_Integer) 0)));
        MR_Word ll_backend__store_alloc___Liveness1_31;

        {
          hlds__hlds_llds__goal_info_get_resume_point_2_p_0(ll_backend__store_alloc__GoalInfo0_27, &ll_backend__store_alloc__ResumeGoal_28);
        }
        if ((ll_backend__store_alloc__ResumeGoal_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          ll_backend__store_alloc__ResumeGoalVars_29 = ll_backend__store_alloc__ResumeVars0_7;
        else
          {
            MR_Word ll_backend__store_alloc__V_30_30;

            ll_backend__store_alloc__ResumeGoalVars_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__store_alloc__ResumeGoal_28, (MR_Integer) 0)));
            ll_backend__store_alloc__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__store_alloc__ResumeGoal_28, (MR_Integer) 1)));
          }
        {
          ll_backend__store_alloc__store_alloc_in_goal_8_p_0(ll_backend__store_alloc__Goal0_15, &ll_backend__store_alloc__Goal_17, ll_backend__store_alloc__HeadVar__3_3, ll_backend__store_alloc__HeadVar__4_4, ll_backend__store_alloc__LastLocns0_5, &ll_backend__store_alloc__LastLocnsGoal_22, ll_backend__store_alloc__ResumeGoalVars_29, ll_backend__store_alloc__StoreAllocInfo_8);
        }
        {
          ll_backend__store_alloc__store_alloc_in_disj_8_p_0(ll_backend__store_alloc__Goals0_16, &ll_backend__store_alloc__Goals_18, ll_backend__store_alloc__HeadVar__3_3, &ll_backend__store_alloc___Liveness1_31, ll_backend__store_alloc__LastLocns0_5, &ll_backend__store_alloc__LastLocnsDisj_23, ll_backend__store_alloc__ResumeVars0_7, ll_backend__store_alloc__StoreAllocInfo_8);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ll_backend__store_alloc__HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__store_alloc__Goal_17));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__store_alloc__Goals_18));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ll_backend__store_alloc__HeadVar__6_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__store_alloc__LastLocnsGoal_22));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__store_alloc__LastLocnsDisj_23));
        }
      }
  }
}

static void MR_CALL 
ll_backend__store_alloc__store_alloc_in_par_conj_8_p_0(
  MR_Word ll_backend__store_alloc__HeadVar__1_1,
  MR_Word * ll_backend__store_alloc__HeadVar__2_2,
  MR_Word ll_backend__store_alloc__HeadVar__3_3,
  MR_Word * ll_backend__store_alloc__HeadVar__4_4,
  MR_Word ll_backend__store_alloc__STATE_VARIABLE_LastLocns_0_5,
  MR_Word * ll_backend__store_alloc__STATE_VARIABLE_LastLocns_6,
  MR_Word ll_backend__store_alloc__ResumeVars0_7,
  MR_Word ll_backend__store_alloc__StoreAllocInfo_8)
{
  {
    MR_bool ll_backend__store_alloc__succeeded;

    if ((ll_backend__store_alloc__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *ll_backend__store_alloc__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          *ll_backend__store_alloc__HeadVar__4_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
        }
        *ll_backend__store_alloc__STATE_VARIABLE_LastLocns_6 = ll_backend__store_alloc__STATE_VARIABLE_LastLocns_0_5;
      }
    else
      {
        MR_Word ll_backend__store_alloc__Goal0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__store_alloc__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__store_alloc__Goals0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__store_alloc__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__store_alloc__Goal_17;
        MR_Word ll_backend__store_alloc__Goals_18;
        MR_Word ll_backend__store_alloc__Liveness1_24;
        MR_Word ll_backend__store_alloc__Liveness2_25;
        MR_Word ll_backend__store_alloc__STATE_VARIABLE_LastLocns_28_28;

        {
          ll_backend__store_alloc__store_alloc_in_goal_8_p_0(ll_backend__store_alloc__Goal0_15, &ll_backend__store_alloc__Goal_17, ll_backend__store_alloc__HeadVar__3_3, &ll_backend__store_alloc__Liveness1_24, ll_backend__store_alloc__STATE_VARIABLE_LastLocns_0_5, &ll_backend__store_alloc__STATE_VARIABLE_LastLocns_28_28, ll_backend__store_alloc__ResumeVars0_7, ll_backend__store_alloc__StoreAllocInfo_8);
        }
        {
          ll_backend__store_alloc__store_alloc_in_par_conj_8_p_0(ll_backend__store_alloc__Goals0_16, &ll_backend__store_alloc__Goals_18, ll_backend__store_alloc__HeadVar__3_3, &ll_backend__store_alloc__Liveness2_25, ll_backend__store_alloc__STATE_VARIABLE_LastLocns_28_28, ll_backend__store_alloc__STATE_VARIABLE_LastLocns_6, ll_backend__store_alloc__ResumeVars0_7, ll_backend__store_alloc__StoreAllocInfo_8);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ll_backend__store_alloc__HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__store_alloc__Goal_17));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__store_alloc__Goals_18));
        }
        {
          *ll_backend__store_alloc__HeadVar__4_4 = parse_tree__set_of_var__union_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__store_alloc__Liveness1_24, ll_backend__store_alloc__Liveness2_25);
        }
      }
  }
}

static void MR_CALL 
ll_backend__store_alloc__store_alloc_in_conj_8_p_0(
  MR_Word ll_backend__store_alloc__HeadVar__1_1,
  MR_Word * ll_backend__store_alloc__HeadVar__2_2,
  MR_Word ll_backend__store_alloc__STATE_VARIABLE_Liveness_0_3,
  MR_Word * ll_backend__store_alloc__STATE_VARIABLE_Liveness_4,
  MR_Word ll_backend__store_alloc__STATE_VARIABLE_LastLocns_0_5,
  MR_Word * ll_backend__store_alloc__STATE_VARIABLE_LastLocns_6,
  MR_Word ll_backend__store_alloc__ResumeVars0_7,
  MR_Word ll_backend__store_alloc__StoreAllocInfo_8)
{
  {
    MR_bool ll_backend__store_alloc__succeeded;

    if ((ll_backend__store_alloc__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *ll_backend__store_alloc__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ll_backend__store_alloc__STATE_VARIABLE_LastLocns_6 = ll_backend__store_alloc__STATE_VARIABLE_LastLocns_0_5;
        *ll_backend__store_alloc__STATE_VARIABLE_Liveness_4 = ll_backend__store_alloc__STATE_VARIABLE_Liveness_0_3;
      }
    else
      {
        MR_Word ll_backend__store_alloc__Goal0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__store_alloc__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__store_alloc__Goals0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__store_alloc__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__store_alloc__Goal_19;
        MR_Word ll_backend__store_alloc__Goals_20;
        MR_Word ll_backend__store_alloc__GoalInfo_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__Goal0_17, (MR_Integer) 1)));
        MR_Word ll_backend__store_alloc__InstMapDelta_27;
        MR_Word ll_backend__store_alloc__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__Goal0_17, (MR_Integer) 0)));

        {
          ll_backend__store_alloc__InstMapDelta_27 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(ll_backend__store_alloc__GoalInfo_26);
        }
        {
          ll_backend__store_alloc__succeeded = hlds__instmap__instmap_delta_is_unreachable_1_p_0(ll_backend__store_alloc__InstMapDelta_27);
        }
        if (ll_backend__store_alloc__succeeded)
          {
            {
              ll_backend__store_alloc__store_alloc_in_goal_8_p_0(ll_backend__store_alloc__Goal0_17, &ll_backend__store_alloc__Goal_19, ll_backend__store_alloc__STATE_VARIABLE_Liveness_0_3, ll_backend__store_alloc__STATE_VARIABLE_Liveness_4, ll_backend__store_alloc__STATE_VARIABLE_LastLocns_0_5, ll_backend__store_alloc__STATE_VARIABLE_LastLocns_6, ll_backend__store_alloc__ResumeVars0_7, ll_backend__store_alloc__StoreAllocInfo_8);
            }
            ll_backend__store_alloc__Goals_20 = ll_backend__store_alloc__Goals0_18;
          }
        else
          {
            MR_Word ll_backend__store_alloc__STATE_VARIABLE_Liveness_34_34;
            MR_Word ll_backend__store_alloc__STATE_VARIABLE_LastLocns_35_35;

            {
              ll_backend__store_alloc__store_alloc_in_goal_8_p_0(ll_backend__store_alloc__Goal0_17, &ll_backend__store_alloc__Goal_19, ll_backend__store_alloc__STATE_VARIABLE_Liveness_0_3, &ll_backend__store_alloc__STATE_VARIABLE_Liveness_34_34, ll_backend__store_alloc__STATE_VARIABLE_LastLocns_0_5, &ll_backend__store_alloc__STATE_VARIABLE_LastLocns_35_35, ll_backend__store_alloc__ResumeVars0_7, ll_backend__store_alloc__StoreAllocInfo_8);
            }
            {
              ll_backend__store_alloc__store_alloc_in_conj_8_p_0(ll_backend__store_alloc__Goals0_18, &ll_backend__store_alloc__Goals_20, ll_backend__store_alloc__STATE_VARIABLE_Liveness_34_34, ll_backend__store_alloc__STATE_VARIABLE_Liveness_4, ll_backend__store_alloc__STATE_VARIABLE_LastLocns_35_35, ll_backend__store_alloc__STATE_VARIABLE_LastLocns_6, ll_backend__store_alloc__ResumeVars0_7, ll_backend__store_alloc__StoreAllocInfo_8);
            }
          }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ll_backend__store_alloc__HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__store_alloc__Goal_19));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__store_alloc__Goals_20));
        }
      }
  }
}

static void MR_CALL 
ll_backend__store_alloc__store_alloc_in_goal_2_9_p_0(
  MR_Word ll_backend__store_alloc__GoalExpr0_10,
  MR_Word * ll_backend__store_alloc__GoalExpr_11,
  MR_Word ll_backend__store_alloc__STATE_VARIABLE_Liveness_0_78,
  MR_Word * ll_backend__store_alloc__STATE_VARIABLE_Liveness_79,
  MR_Word ll_backend__store_alloc__STATE_VARIABLE_LastLocns_0_80,
  MR_Word * ll_backend__store_alloc__STATE_VARIABLE_LastLocns_81,
  MR_Word ll_backend__store_alloc__ResumeVars0_14,
  MR_Word * ll_backend__store_alloc__BranchedGoal_15,
  MR_Word ll_backend__store_alloc__StoreAllocInfo_16)
{
  {
    MR_bool ll_backend__store_alloc__succeeded;

    switch (MR_tag((MR_Word) ll_backend__store_alloc__GoalExpr0_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ll_backend__store_alloc__SubGoal0_44 = (MR_Word) MR_body(((MR_Word) ll_backend__store_alloc__GoalExpr0_10), (MR_Integer) 0);
          MR_Word ll_backend__store_alloc__SubGoalInfo0_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__SubGoal0_44, (MR_Integer) 1)));
          MR_Word ll_backend__store_alloc__ResumeNot_47;
          MR_Word ll_backend__store_alloc__ResumeNotVars_48;
          MR_Word ll_backend__store_alloc__SubGoal_50;
          MR_Word ll_backend__store_alloc__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__SubGoal0_44, (MR_Integer) 0)));
          MR_Word ll_backend__store_alloc__V_49_49;
          MR_Word ll_backend__store_alloc__V_51_51;

          {
            hlds__hlds_llds__goal_info_get_resume_point_2_p_0(ll_backend__store_alloc__SubGoalInfo0_46, &ll_backend__store_alloc__ResumeNot_47);
          }
          {
            hlds__hlds_llds__goal_info_resume_vars_and_loc_3_p_0(ll_backend__store_alloc__ResumeNot_47, &ll_backend__store_alloc__ResumeNotVars_48, &ll_backend__store_alloc__V_49_49);
          }
          {
            ll_backend__store_alloc__store_alloc_in_goal_8_p_0(ll_backend__store_alloc__SubGoal0_44, &ll_backend__store_alloc__SubGoal_50, ll_backend__store_alloc__STATE_VARIABLE_Liveness_0_78, ll_backend__store_alloc__STATE_VARIABLE_Liveness_79, ll_backend__store_alloc__STATE_VARIABLE_LastLocns_0_80, &ll_backend__store_alloc__V_51_51, ll_backend__store_alloc__ResumeNotVars_48, ll_backend__store_alloc__StoreAllocInfo_16);
          }
          *ll_backend__store_alloc__GoalExpr_11 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) ll_backend__store_alloc__SubGoal_50);
          *ll_backend__store_alloc__BranchedGoal_15 = (MR_Integer) 1;
          *ll_backend__store_alloc__STATE_VARIABLE_LastLocns_81 = ll_backend__store_alloc__STATE_VARIABLE_LastLocns_0_80;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          *ll_backend__store_alloc__GoalExpr_11 = ll_backend__store_alloc__GoalExpr0_10;
          *ll_backend__store_alloc__BranchedGoal_15 = (MR_Integer) 1;
          *ll_backend__store_alloc__STATE_VARIABLE_Liveness_79 = ll_backend__store_alloc__STATE_VARIABLE_Liveness_0_78;
          *ll_backend__store_alloc__STATE_VARIABLE_LastLocns_81 = ll_backend__store_alloc__STATE_VARIABLE_LastLocns_0_80;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__store_alloc__GoalExpr0_10, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              *ll_backend__store_alloc__GoalExpr_11 = ll_backend__store_alloc__GoalExpr0_10;
              *ll_backend__store_alloc__BranchedGoal_15 = (MR_Integer) 1;
              *ll_backend__store_alloc__STATE_VARIABLE_Liveness_79 = ll_backend__store_alloc__STATE_VARIABLE_Liveness_0_78;
              *ll_backend__store_alloc__STATE_VARIABLE_LastLocns_81 = ll_backend__store_alloc__STATE_VARIABLE_LastLocns_0_80;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ll_backend__store_alloc__ConjType_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__store_alloc__GoalExpr0_10, (MR_Integer) 1)));
              MR_Word ll_backend__store_alloc__Goals0_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__store_alloc__GoalExpr0_10, (MR_Integer) 2)));
              MR_Word ll_backend__store_alloc__Goals_19;

              switch (ll_backend__store_alloc__ConjType_17) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    ll_backend__store_alloc__store_alloc_in_par_conj_8_p_0(ll_backend__store_alloc__Goals0_18, &ll_backend__store_alloc__Goals_19, ll_backend__store_alloc__STATE_VARIABLE_Liveness_0_78, ll_backend__store_alloc__STATE_VARIABLE_Liveness_79, ll_backend__store_alloc__STATE_VARIABLE_LastLocns_0_80, ll_backend__store_alloc__STATE_VARIABLE_LastLocns_81, ll_backend__store_alloc__ResumeVars0_14, ll_backend__store_alloc__StoreAllocInfo_16);
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    ll_backend__store_alloc__store_alloc_in_conj_8_p_0(ll_backend__store_alloc__Goals0_18, &ll_backend__store_alloc__Goals_19, ll_backend__store_alloc__STATE_VARIABLE_Liveness_0_78, ll_backend__store_alloc__STATE_VARIABLE_Liveness_79, ll_backend__store_alloc__STATE_VARIABLE_LastLocns_0_80, ll_backend__store_alloc__STATE_VARIABLE_LastLocns_81, ll_backend__store_alloc__ResumeVars0_14, ll_backend__store_alloc__StoreAllocInfo_16);
                  }
                  break;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__store_alloc__GoalExpr_11 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__store_alloc__ConjType_17));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__store_alloc__Goals_19));
              }
              *ll_backend__store_alloc__BranchedGoal_15 = (MR_Integer) 1;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ll_backend__store_alloc__LastLocnsList_20;
              MR_Word ll_backend__store_alloc__Goals0_103 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__store_alloc__GoalExpr0_10, (MR_Integer) 1)));
              MR_Word ll_backend__store_alloc__Goals_104;

              {
                ll_backend__store_alloc__store_alloc_in_disj_8_p_0(ll_backend__store_alloc__Goals0_103, &ll_backend__store_alloc__Goals_104, ll_backend__store_alloc__STATE_VARIABLE_Liveness_0_78, ll_backend__store_alloc__STATE_VARIABLE_Liveness_79, ll_backend__store_alloc__STATE_VARIABLE_LastLocns_0_80, &ll_backend__store_alloc__LastLocnsList_20, ll_backend__store_alloc__ResumeVars0_14, ll_backend__store_alloc__StoreAllocInfo_16);
              }
              {
                ll_backend__store_alloc__merge_last_locations_2_p_0(ll_backend__store_alloc__LastLocnsList_20, ll_backend__store_alloc__STATE_VARIABLE_LastLocns_81);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__store_alloc__GoalExpr_11 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__store_alloc__Goals_104));
              }
              *ll_backend__store_alloc__BranchedGoal_15 = (MR_Integer) 0;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ll_backend__store_alloc__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__store_alloc__GoalExpr0_10, (MR_Integer) 1)));
              MR_Word ll_backend__store_alloc__Det_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__store_alloc__GoalExpr0_10, (MR_Integer) 2)));
              MR_Word ll_backend__store_alloc__Cases0_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__store_alloc__GoalExpr0_10, (MR_Integer) 3)));
              MR_Word ll_backend__store_alloc__Cases_24;
              MR_Word ll_backend__store_alloc__LastLocnsList_105;

              {
                ll_backend__store_alloc__store_alloc_in_cases_8_p_0(ll_backend__store_alloc__Cases0_23, &ll_backend__store_alloc__Cases_24, ll_backend__store_alloc__STATE_VARIABLE_Liveness_0_78, ll_backend__store_alloc__STATE_VARIABLE_Liveness_79, ll_backend__store_alloc__STATE_VARIABLE_LastLocns_0_80, &ll_backend__store_alloc__LastLocnsList_105, ll_backend__store_alloc__ResumeVars0_14, ll_backend__store_alloc__StoreAllocInfo_16);
              }
              {
                ll_backend__store_alloc__merge_last_locations_2_p_0(ll_backend__store_alloc__LastLocnsList_105, ll_backend__store_alloc__STATE_VARIABLE_LastLocns_81);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__store_alloc__GoalExpr_11 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__store_alloc__Var_21));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__store_alloc__Det_22));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__store_alloc__Cases_24));
              }
              *ll_backend__store_alloc__BranchedGoal_15 = (MR_Integer) 0;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word ll_backend__store_alloc__Reason_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__store_alloc__GoalExpr0_10, (MR_Integer) 1)));
              MR_Word ll_backend__store_alloc__SubGoal0_108 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__store_alloc__GoalExpr0_10, (MR_Integer) 2)));
              MR_Word ll_backend__store_alloc__TermVar_53;
              MR_Word ll_backend__store_alloc__V_85_85;

              ll_backend__store_alloc__succeeded = ((((MR_tag((MR_Word) ll_backend__store_alloc__Reason_52)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__store_alloc__Reason_52, (MR_Integer) 0)))) == (MR_Integer) 5)));
              if (ll_backend__store_alloc__succeeded)
                {
                  ll_backend__store_alloc__TermVar_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__store_alloc__Reason_52, (MR_Integer) 1)));
                  ll_backend__store_alloc__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__store_alloc__Reason_52, (MR_Integer) 2)));
                  ll_backend__store_alloc__succeeded = (ll_backend__store_alloc__V_85_85 == (MR_Integer) 1);
                }
              if (ll_backend__store_alloc__succeeded)
                {
                  *ll_backend__store_alloc__GoalExpr_11 = ll_backend__store_alloc__GoalExpr0_10;
                  {
                    parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__store_alloc__TermVar_53, ll_backend__store_alloc__STATE_VARIABLE_Liveness_0_78, ll_backend__store_alloc__STATE_VARIABLE_Liveness_79);
                  }
                  *ll_backend__store_alloc__STATE_VARIABLE_LastLocns_81 = ll_backend__store_alloc__STATE_VARIABLE_LastLocns_0_80;
                }
              else
                {
                  MR_Word ll_backend__store_alloc__SubGoal_106;

                  {
                    ll_backend__store_alloc__store_alloc_in_goal_8_p_0(ll_backend__store_alloc__SubGoal0_108, &ll_backend__store_alloc__SubGoal_106, ll_backend__store_alloc__STATE_VARIABLE_Liveness_0_78, ll_backend__store_alloc__STATE_VARIABLE_Liveness_79, ll_backend__store_alloc__STATE_VARIABLE_LastLocns_0_80, ll_backend__store_alloc__STATE_VARIABLE_LastLocns_81, ll_backend__store_alloc__ResumeVars0_14, ll_backend__store_alloc__StoreAllocInfo_16);
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    *ll_backend__store_alloc__GoalExpr_11 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__store_alloc__Reason_52));
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__store_alloc__SubGoal_106));
                  }
                }
              *ll_backend__store_alloc__BranchedGoal_15 = (MR_Integer) 1;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word ll_backend__store_alloc__Vars_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__store_alloc__GoalExpr0_10, (MR_Integer) 1)));
              MR_Word ll_backend__store_alloc__Cond0_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__store_alloc__GoalExpr0_10, (MR_Integer) 2)));
              MR_Word ll_backend__store_alloc__Then0_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__store_alloc__GoalExpr0_10, (MR_Integer) 3)));
              MR_Word ll_backend__store_alloc__Else0_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__store_alloc__GoalExpr0_10, (MR_Integer) 4)));
              MR_Word ll_backend__store_alloc__CondGoalInfo0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__Cond0_26, (MR_Integer) 1)));
              MR_Word ll_backend__store_alloc__ResumeCond_33;
              MR_Word ll_backend__store_alloc__ResumeCondVars_34;
              MR_Word ll_backend__store_alloc__Cond_36;
              MR_Word ll_backend__store_alloc__Liveness1_37;
              MR_Word ll_backend__store_alloc__LastLocnsCond_38;
              MR_Word ll_backend__store_alloc__Then_39;
              MR_Word ll_backend__store_alloc__Else_41;
              MR_Word ll_backend__store_alloc__LastLocnsElse_43;
              MR_Word ll_backend__store_alloc__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__Cond0_26, (MR_Integer) 0)));
              MR_Word ll_backend__store_alloc__V_35_35;
              MR_Word ll_backend__store_alloc___Liveness2_42;
              MR_Word ll_backend__store_alloc__V_91_91;

              {
                hlds__hlds_llds__goal_info_get_resume_point_2_p_0(ll_backend__store_alloc__CondGoalInfo0_32, &ll_backend__store_alloc__ResumeCond_33);
              }
              {
                hlds__hlds_llds__goal_info_resume_vars_and_loc_3_p_0(ll_backend__store_alloc__ResumeCond_33, &ll_backend__store_alloc__ResumeCondVars_34, &ll_backend__store_alloc__V_35_35);
              }
              {
                ll_backend__store_alloc__store_alloc_in_goal_8_p_0(ll_backend__store_alloc__Cond0_26, &ll_backend__store_alloc__Cond_36, ll_backend__store_alloc__STATE_VARIABLE_Liveness_0_78, &ll_backend__store_alloc__Liveness1_37, ll_backend__store_alloc__STATE_VARIABLE_LastLocns_0_80, &ll_backend__store_alloc__LastLocnsCond_38, ll_backend__store_alloc__ResumeCondVars_34, ll_backend__store_alloc__StoreAllocInfo_16);
              }
              {
                ll_backend__store_alloc__store_alloc_in_goal_8_p_0(ll_backend__store_alloc__Then0_27, &ll_backend__store_alloc__Then_39, ll_backend__store_alloc__Liveness1_37, ll_backend__store_alloc__STATE_VARIABLE_Liveness_79, ll_backend__store_alloc__LastLocnsCond_38, ll_backend__store_alloc__STATE_VARIABLE_LastLocns_81, ll_backend__store_alloc__ResumeVars0_14, ll_backend__store_alloc__StoreAllocInfo_16);
              }
              {
                ll_backend__store_alloc__store_alloc_in_goal_8_p_0(ll_backend__store_alloc__Else0_28, &ll_backend__store_alloc__Else_41, ll_backend__store_alloc__STATE_VARIABLE_Liveness_0_78, &ll_backend__store_alloc___Liveness2_42, ll_backend__store_alloc__STATE_VARIABLE_LastLocns_0_80, &ll_backend__store_alloc__LastLocnsElse_43, ll_backend__store_alloc__ResumeVars0_14, ll_backend__store_alloc__StoreAllocInfo_16);
              }
              {
                ll_backend__store_alloc__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__store_alloc__V_91_91, 0) = ((MR_Box) (ll_backend__store_alloc__LastLocnsElse_43));
                MR_hl_field(MR_mktag(1), ll_backend__store_alloc__V_91_91, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__store_alloc__GoalExpr_11 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__store_alloc__Vars_25));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__store_alloc__Cond_36));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__store_alloc__Then_39));
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ll_backend__store_alloc__Else_41));
              }
              *ll_backend__store_alloc__BranchedGoal_15 = (MR_Integer) 0;
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
  MR_Word ll_backend__store_alloc__Goal0_9,
  MR_Word * ll_backend__store_alloc__Goal_10,
  MR_Word ll_backend__store_alloc__Liveness0_11,
  MR_Word * ll_backend__store_alloc__Liveness_12,
  MR_Word ll_backend__store_alloc__STATE_VARIABLE_LastLocns_0_34,
  MR_Word * ll_backend__store_alloc__STATE_VARIABLE_LastLocns_35,
  MR_Word ll_backend__store_alloc__ResumeVars0_14,
  MR_Word ll_backend__store_alloc__StoreAllocInfo_15)
{
  {
    MR_bool ll_backend__store_alloc__succeeded;
    MR_Word ll_backend__store_alloc__TypeCtorInfo_37_37;
    MR_Word ll_backend__store_alloc__GoalExpr0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__Goal0_9, (MR_Integer) 0)));
    MR_Word ll_backend__store_alloc__GoalInfo0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__Goal0_9, (MR_Integer) 1)));
    MR_Word ll_backend__store_alloc__PreDeaths_18;
    MR_Word ll_backend__store_alloc__PreBirths_19;
    MR_Word ll_backend__store_alloc__PostDeaths_20;
    MR_Word ll_backend__store_alloc__PostBirths_21;
    MR_Word ll_backend__store_alloc__Liveness1_22;
    MR_Word ll_backend__store_alloc__Liveness2_23;
    MR_Word ll_backend__store_alloc__GoalExpr_24;
    MR_Word ll_backend__store_alloc__Liveness3_25;
    MR_Word ll_backend__store_alloc__BranchedGoal_26;
    MR_Word ll_backend__store_alloc__Liveness4_27;
    MR_Word ll_backend__store_alloc__GoalInfo_33;

    {
      hlds__hlds_llds__goal_info_get_pre_deaths_2_p_0(ll_backend__store_alloc__GoalInfo0_17, &ll_backend__store_alloc__PreDeaths_18);
    }
    {
      hlds__hlds_llds__goal_info_get_pre_births_2_p_0(ll_backend__store_alloc__GoalInfo0_17, &ll_backend__store_alloc__PreBirths_19);
    }
    {
      hlds__hlds_llds__goal_info_get_post_deaths_2_p_0(ll_backend__store_alloc__GoalInfo0_17, &ll_backend__store_alloc__PostDeaths_20);
    }
    {
      hlds__hlds_llds__goal_info_get_post_births_2_p_0(ll_backend__store_alloc__GoalInfo0_17, &ll_backend__store_alloc__PostBirths_21);
    }
    ll_backend__store_alloc__TypeCtorInfo_37_37 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    {
      parse_tree__set_of_var__difference_3_p_0(ll_backend__store_alloc__TypeCtorInfo_37_37, ll_backend__store_alloc__Liveness0_11, ll_backend__store_alloc__PreDeaths_18, &ll_backend__store_alloc__Liveness1_22);
    }
    {
      parse_tree__set_of_var__union_3_p_0(ll_backend__store_alloc__TypeCtorInfo_37_37, ll_backend__store_alloc__Liveness1_22, ll_backend__store_alloc__PreBirths_19, &ll_backend__store_alloc__Liveness2_23);
    }
    {
      ll_backend__store_alloc__store_alloc_in_goal_2_9_p_0(ll_backend__store_alloc__GoalExpr0_16, &ll_backend__store_alloc__GoalExpr_24, ll_backend__store_alloc__Liveness2_23, &ll_backend__store_alloc__Liveness3_25, ll_backend__store_alloc__STATE_VARIABLE_LastLocns_0_34, ll_backend__store_alloc__STATE_VARIABLE_LastLocns_35, ll_backend__store_alloc__ResumeVars0_14, &ll_backend__store_alloc__BranchedGoal_26, ll_backend__store_alloc__StoreAllocInfo_15);
    }
    {
      parse_tree__set_of_var__difference_3_p_0(ll_backend__store_alloc__TypeCtorInfo_37_37, ll_backend__store_alloc__Liveness3_25, ll_backend__store_alloc__PostDeaths_20, &ll_backend__store_alloc__Liveness4_27);
    }
    {
      parse_tree__set_of_var__union_3_p_0(ll_backend__store_alloc__TypeCtorInfo_37_37, ll_backend__store_alloc__Liveness4_27, ll_backend__store_alloc__PostBirths_21, ll_backend__store_alloc__Liveness_12);
    }
    switch (ll_backend__store_alloc__BranchedGoal_26) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ll_backend__store_alloc__TypeInfo_19_54;
          MR_Word ll_backend__store_alloc__TypeCtorInfo_20_55;
          MR_Word ll_backend__store_alloc__MappedSet_28;
          MR_Word ll_backend__store_alloc__MappedVars_29;
          MR_Word ll_backend__store_alloc__AdvisoryStoreMap_31;
          MR_Word ll_backend__store_alloc__StoreMap_32;
          MR_Word ll_backend__store_alloc__FollowKeys_45;
          MR_Word ll_backend__store_alloc__StoreVars_46;
          MR_Word ll_backend__store_alloc__SeenLvals0_47;
          MR_Integer ll_backend__store_alloc__N_48;
          MR_Word ll_backend__store_alloc__SeenLvals_49;
          MR_Word ll_backend__store_alloc__STATE_VARIABLE_StoreMap_15_50;
          MR_Word ll_backend__store_alloc__STATE_VARIABLE_StoreMap_17_52;
          MR_Word ll_backend__store_alloc__StoreMapPrime_30;

          {
            parse_tree__set_of_var__union_3_p_0(ll_backend__store_alloc__TypeCtorInfo_37_37, ll_backend__store_alloc__Liveness4_27, ll_backend__store_alloc__ResumeVars0_14, &ll_backend__store_alloc__MappedSet_28);
          }
          {
            ll_backend__store_alloc__MappedVars_29 = parse_tree__set_of_var__to_sorted_list_1_f_0(ll_backend__store_alloc__TypeCtorInfo_37_37, ll_backend__store_alloc__MappedSet_28);
          }
          {
            ll_backend__store_alloc__succeeded = hlds__hlds_llds__goal_info_maybe_get_store_map_2_p_0(ll_backend__store_alloc__GoalInfo0_17, &ll_backend__store_alloc__StoreMapPrime_30);
          }
          if (ll_backend__store_alloc__succeeded)
            ll_backend__store_alloc__AdvisoryStoreMap_31 = ll_backend__store_alloc__StoreMapPrime_30;
          else
            {
              {
                ll_backend__store_alloc__AdvisoryStoreMap_31 = mercury__map__init_0_f_0((MR_Word) &ll_backend__store_alloc_scalar_common_1[0], (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0);
              }
            }
          ll_backend__store_alloc__TypeInfo_19_54 = (MR_Word) &ll_backend__store_alloc_scalar_common_1[0];
          ll_backend__store_alloc__TypeCtorInfo_20_55 = (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0;
          {
            mercury__map__keys_2_p_0(ll_backend__store_alloc__TypeInfo_19_54, ll_backend__store_alloc__TypeCtorInfo_20_55, ll_backend__store_alloc__AdvisoryStoreMap_31, &ll_backend__store_alloc__FollowKeys_45);
          }
          {
            ll_backend__store_alloc__store_alloc_remove_nonlive_4_p_0(ll_backend__store_alloc__FollowKeys_45, ll_backend__store_alloc__MappedVars_29, ll_backend__store_alloc__AdvisoryStoreMap_31, &ll_backend__store_alloc__STATE_VARIABLE_StoreMap_15_50);
          }
          {
            mercury__map__keys_2_p_0(ll_backend__store_alloc__TypeInfo_19_54, ll_backend__store_alloc__TypeCtorInfo_20_55, ll_backend__store_alloc__STATE_VARIABLE_StoreMap_15_50, &ll_backend__store_alloc__StoreVars_46);
          }
          {
            mercury__set__init_1_p_0(ll_backend__store_alloc__TypeCtorInfo_20_55, &ll_backend__store_alloc__SeenLvals0_47);
          }
          {
            ll_backend__store_alloc__store_alloc_handle_conflicts_and_nonreal_8_p_0(ll_backend__store_alloc__StoreAllocInfo_15, ll_backend__store_alloc__StoreVars_46, (MR_Integer) 1, &ll_backend__store_alloc__N_48, ll_backend__store_alloc__SeenLvals0_47, &ll_backend__store_alloc__SeenLvals_49, ll_backend__store_alloc__STATE_VARIABLE_StoreMap_15_50, &ll_backend__store_alloc__STATE_VARIABLE_StoreMap_17_52);
          }
          {
            ll_backend__store_alloc__store_alloc_allocate_extras_6_p_0(ll_backend__store_alloc__StoreAllocInfo_15, ll_backend__store_alloc__MappedVars_29, ll_backend__store_alloc__N_48, ll_backend__store_alloc__SeenLvals_49, ll_backend__store_alloc__STATE_VARIABLE_StoreMap_17_52, &ll_backend__store_alloc__StoreMap_32);
          }
          {
            hlds__hlds_llds__goal_info_set_store_map_3_p_0(ll_backend__store_alloc__StoreMap_32, ll_backend__store_alloc__GoalInfo0_17, &ll_backend__store_alloc__GoalInfo_33);
          }
        }
        break;
      case (MR_Integer) 1:
        ll_backend__store_alloc__GoalInfo_33 = ll_backend__store_alloc__GoalInfo0_17;
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__store_alloc__Goal_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__store_alloc__GoalExpr_24));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__store_alloc__GoalInfo_33));
    }
  }
}

static MR_Word MR_CALL 
ll_backend__store_alloc__initial_last_locns_1_f_0(
  MR_Word ll_backend__store_alloc__HeadVar__1_1)
{
  {
    MR_bool ll_backend__store_alloc__succeeded;
    MR_Word ll_backend__store_alloc__HeadVar__2_2;

    if ((ll_backend__store_alloc__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          ll_backend__store_alloc__HeadVar__2_2 = mercury__map__init_0_f_0((MR_Word) &ll_backend__store_alloc_scalar_common_1[0], (MR_Word) &ll_backend__store_alloc_scalar_common_1[1]);
        }
      }
    else
      {
        MR_Word ll_backend__store_alloc__Var_3;
        MR_Word ll_backend__store_alloc__Lval_4;
        MR_Word ll_backend__store_alloc__VarLvals_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__store_alloc__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__store_alloc__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__store_alloc__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__store_alloc__V_7_7;
        MR_Word ll_backend__store_alloc__V_8_8;

        ll_backend__store_alloc__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__V_6_6, (MR_Integer) 0)));
        ll_backend__store_alloc__Lval_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__V_6_6, (MR_Integer) 1)));
        {
          ll_backend__store_alloc__V_7_7 = ll_backend__store_alloc__initial_last_locns_1_f_0(ll_backend__store_alloc__VarLvals_5);
        }
        {
          ll_backend__store_alloc__V_8_8 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (ll_backend__store_alloc__Lval_4)));
        }
        {
          ll_backend__store_alloc__HeadVar__2_2 = mercury__map__det_insert_3_f_0((MR_Word) &ll_backend__store_alloc_scalar_common_1[0], (MR_Word) &ll_backend__store_alloc_scalar_common_1[1], ll_backend__store_alloc__V_7_7, ((MR_Box) (ll_backend__store_alloc__Var_3)), ((MR_Box) (ll_backend__store_alloc__V_8_8)));
        }
      }
    return ll_backend__store_alloc__HeadVar__2_2;
  }
}

void MR_CALL 
ll_backend__store_alloc__allocate_store_maps_5_p_0(
  MR_Word ll_backend__store_alloc__RunType_6,
  MR_Word ll_backend__store_alloc__ModuleInfo_7,
  MR_Word ll_backend__store_alloc__HeadVar__3_3,
  MR_Word ll_backend__store_alloc__STATE_VARIABLE_ProcInfo_0_40,
  MR_Word * ll_backend__store_alloc__STATE_VARIABLE_ProcInfo_41)
{
  {
    MR_bool ll_backend__store_alloc__succeeded;
    MR_Word ll_backend__store_alloc__PredId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__HeadVar__3_3, (MR_Integer) 0)));
    MR_Word ll_backend__store_alloc__Globals_11;
    MR_Word ll_backend__store_alloc__VarTypes_17;
    MR_Word ll_backend__store_alloc__Goal2_25;
    MR_Word ll_backend__store_alloc__PredInfo_26;
    MR_Word ll_backend__store_alloc__Liveness0_27;
    MR_Word ll_backend__store_alloc__TraceLevel_28;
    MR_Word ll_backend__store_alloc__NeedFailVars_29;
    MR_Word ll_backend__store_alloc__ResumeVars_30;
    MR_Word ll_backend__store_alloc__InputArgLvals_31;
    MR_Word ll_backend__store_alloc__LastLocns0_32;
    MR_Word ll_backend__store_alloc__StackSlots_33;
    MR_Word ll_backend__store_alloc__FloatRegs_34;
    MR_Word ll_backend__store_alloc__FloatRegType_35;
    MR_Word ll_backend__store_alloc__StoreAllocInfo_36;
    MR_Word ll_backend__store_alloc__Goal_37;
    MR_Integer ll_backend__store_alloc__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__HeadVar__3_3, (MR_Integer) 1)));
    MR_Word ll_backend__store_alloc__V_38_38;
    MR_Word ll_backend__store_alloc__V_39_39;

    {
      hlds__hlds_module__module_info_get_globals_2_p_0(ll_backend__store_alloc__ModuleInfo_7, &ll_backend__store_alloc__Globals_11);
    }
    {
      hlds__hlds_module__module_info_pred_info_3_p_0(ll_backend__store_alloc__ModuleInfo_7, ll_backend__store_alloc__PredId_8, &ll_backend__store_alloc__PredInfo_26);
    }
    {
      ll_backend__liveness__initial_liveness_4_p_0(ll_backend__store_alloc__ModuleInfo_7, ll_backend__store_alloc__PredInfo_26, ll_backend__store_alloc__STATE_VARIABLE_ProcInfo_0_40, &ll_backend__store_alloc__Liveness0_27);
    }
    {
      libs__globals__get_trace_level_2_p_0(ll_backend__store_alloc__Globals_11, &ll_backend__store_alloc__TraceLevel_28);
    }
    {
      ll_backend__store_alloc__NeedFailVars_29 = libs__trace_params__eff_trace_level_needs_fail_vars_4_f_0(ll_backend__store_alloc__ModuleInfo_7, ll_backend__store_alloc__PredInfo_26, ll_backend__store_alloc__STATE_VARIABLE_ProcInfo_0_40, ll_backend__store_alloc__TraceLevel_28);
    }
    switch (ll_backend__store_alloc__NeedFailVars_29) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            ll_backend__store_alloc__ResumeVars_30 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          ll_backend__trace_gen__trace_fail_vars_3_p_0(ll_backend__store_alloc__ModuleInfo_7, ll_backend__store_alloc__STATE_VARIABLE_ProcInfo_0_40, &ll_backend__store_alloc__ResumeVars_30);
        }
        break;
    }
    {
      ll_backend__code_util__build_input_arg_list_2_p_0(ll_backend__store_alloc__STATE_VARIABLE_ProcInfo_0_40, &ll_backend__store_alloc__InputArgLvals_31);
    }
    {
      ll_backend__store_alloc__LastLocns0_32 = ll_backend__store_alloc__initial_last_locns_1_f_0(ll_backend__store_alloc__InputArgLvals_31);
    }
    {
      hlds__hlds_pred__proc_info_get_stack_slots_2_p_0(ll_backend__store_alloc__STATE_VARIABLE_ProcInfo_0_40, &ll_backend__store_alloc__StackSlots_33);
    }
    {
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ll_backend__store_alloc__STATE_VARIABLE_ProcInfo_0_40, &ll_backend__store_alloc__VarTypes_17);
    }
    switch (ll_backend__store_alloc__RunType_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ll_backend__store_alloc__Goal0_12;
          MR_Word ll_backend__store_alloc__FollowVarsMap0_13;
          MR_Integer ll_backend__store_alloc__NextNonReservedR0_14;
          MR_Integer ll_backend__store_alloc__NextNonReservedF0_15;
          MR_Word ll_backend__store_alloc__Goal1_16;
          MR_Word ll_backend__store_alloc__FollowVarsMap_18;
          MR_Integer ll_backend__store_alloc__NextNonReservedR_19;
          MR_Integer ll_backend__store_alloc__NextNonReservedF_20;
          MR_Word ll_backend__store_alloc__GoalExpr1_21;
          MR_Word ll_backend__store_alloc__GoalInfo1_22;
          MR_Word ll_backend__store_alloc__FollowVars_23;
          MR_Word ll_backend__store_alloc__GoalInfo2_24;
          MR_Word ll_backend__store_alloc__V_42_42;

          {
            hlds__hlds_pred__proc_info_get_goal_2_p_0(ll_backend__store_alloc__STATE_VARIABLE_ProcInfo_0_40, &ll_backend__store_alloc__Goal0_12);
          }
          {
            ll_backend__follow_vars__find_final_follow_vars_4_p_0(ll_backend__store_alloc__STATE_VARIABLE_ProcInfo_0_40, &ll_backend__store_alloc__FollowVarsMap0_13, &ll_backend__store_alloc__NextNonReservedR0_14, &ll_backend__store_alloc__NextNonReservedF0_15);
          }
          {
            ll_backend__follow_vars__find_follow_vars_in_goal_10_p_0(ll_backend__store_alloc__Goal0_12, &ll_backend__store_alloc__Goal1_16, ll_backend__store_alloc__VarTypes_17, ll_backend__store_alloc__ModuleInfo_7, ll_backend__store_alloc__FollowVarsMap0_13, &ll_backend__store_alloc__FollowVarsMap_18, ll_backend__store_alloc__NextNonReservedR0_14, &ll_backend__store_alloc__NextNonReservedR_19, ll_backend__store_alloc__NextNonReservedF0_15, &ll_backend__store_alloc__NextNonReservedF_20);
          }
          ll_backend__store_alloc__GoalExpr1_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__Goal1_16, (MR_Integer) 0)));
          ll_backend__store_alloc__GoalInfo1_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__store_alloc__Goal1_16, (MR_Integer) 1)));
          {
            ll_backend__store_alloc__FollowVars_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__store_alloc__FollowVars_23, 0) = ((MR_Box) (ll_backend__store_alloc__FollowVarsMap_18));
            MR_hl_field(MR_mktag(0), ll_backend__store_alloc__FollowVars_23, 1) = ((MR_Box) (ll_backend__store_alloc__NextNonReservedR_19));
            MR_hl_field(MR_mktag(0), ll_backend__store_alloc__FollowVars_23, 2) = ((MR_Box) (ll_backend__store_alloc__NextNonReservedF_20));
          }
          {
            ll_backend__store_alloc__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__store_alloc__V_42_42, 0) = ((MR_Box) (ll_backend__store_alloc__FollowVars_23));
          }
          {
            hlds__hlds_llds__goal_info_set_follow_vars_3_p_0(ll_backend__store_alloc__V_42_42, ll_backend__store_alloc__GoalInfo1_22, &ll_backend__store_alloc__GoalInfo2_24);
          }
          {
            ll_backend__store_alloc__Goal2_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__store_alloc__Goal2_25, 0) = ((MR_Box) (ll_backend__store_alloc__GoalExpr1_21));
            MR_hl_field(MR_mktag(0), ll_backend__store_alloc__Goal2_25, 1) = ((MR_Box) (ll_backend__store_alloc__GoalInfo2_24));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          hlds__hlds_pred__proc_info_get_goal_2_p_0(ll_backend__store_alloc__STATE_VARIABLE_ProcInfo_0_40, &ll_backend__store_alloc__Goal2_25);
        }
        break;
    }
    {
      libs__globals__lookup_bool_option_3_p_0(ll_backend__store_alloc__Globals_11, (MR_Integer) 253, &ll_backend__store_alloc__FloatRegs_34);
    }
    switch (ll_backend__store_alloc__FloatRegs_34) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ll_backend__store_alloc__FloatRegType_35 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        ll_backend__store_alloc__FloatRegType_35 = (MR_Integer) 1;
        break;
    }
    {
      ll_backend__store_alloc__StoreAllocInfo_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__store_alloc__StoreAllocInfo_36, 0) = ((MR_Box) (ll_backend__store_alloc__StackSlots_33));
      MR_hl_field(MR_mktag(0), ll_backend__store_alloc__StoreAllocInfo_36, 1) = ((MR_Box) (ll_backend__store_alloc__VarTypes_17));
      MR_hl_field(MR_mktag(0), ll_backend__store_alloc__StoreAllocInfo_36, 2) = ((MR_Box) (ll_backend__store_alloc__FloatRegType_35));
    }
    {
      ll_backend__store_alloc__store_alloc_in_goal_8_p_0(ll_backend__store_alloc__Goal2_25, &ll_backend__store_alloc__Goal_37, ll_backend__store_alloc__Liveness0_27, &ll_backend__store_alloc__V_38_38, ll_backend__store_alloc__LastLocns0_32, &ll_backend__store_alloc__V_39_39, ll_backend__store_alloc__ResumeVars_30, ll_backend__store_alloc__StoreAllocInfo_36);
    }
    {
      hlds__hlds_pred__proc_info_set_goal_3_p_0(ll_backend__store_alloc__Goal_37, ll_backend__store_alloc__STATE_VARIABLE_ProcInfo_0_40, ll_backend__store_alloc__STATE_VARIABLE_ProcInfo_41);
    }
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
