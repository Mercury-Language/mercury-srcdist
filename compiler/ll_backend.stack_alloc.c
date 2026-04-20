/*
** Automatically generated from `stack_alloc.m'
** by the Mercury compiler,
** version rotd-2026-04-20
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


// :- module ll_backend.stack_alloc.
// :- implementation.

/*
INIT mercury__ll_backend__stack_alloc__init
ENDINIT
*/

#include "ll_backend.stack_alloc.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "ll_backend.mih"
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
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.code_model.mih"
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
#include "libs.op_mode.mih"
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.option_categories.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.trace_params.mih"
#include "ll_backend.code_info.mih"
#include "ll_backend.code_loc_dep.mih"
#include "ll_backend.continuation_info.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.live_vars.mih"
#include "ll_backend.liveness.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.trace_gen.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
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
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.record_uses.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.feedback_info.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_alloc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__stack_alloc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_alloc__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_Integer ll_backend__stack_alloc__ll_backend__stack_alloc__functor_number_map_stack_alloc_0[1];

static const MR_FA_TypeInfo_Struct1 ll_backend__stack_alloc__parse_tree__set_of_var__ti_set_of_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__stack_alloc__set_ordlist__ti_set_ordlist_1parse_tree__set_of_var__ti_set_of_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_NotagFunctorDesc ll_backend__stack_alloc__ll_backend__stack_alloc__notag_functor_desc_stack_alloc_0;

static MR_bool MR_CALL 
ll_backend__stack_alloc__IntroducedFrom__pred__allocate_next_stack_slot__299__1_2_p_0(
  MR_Word StackSlotWidth_10,
  MR_Word HeadVar__2_28);

static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_recursive_call_for_loop_control_4_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_recursive_call_for_loop_control_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static MR_bool MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static MR_bool MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static MR_bool MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
ll_backend__stack_alloc____Compare____stack_alloc_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__stack_alloc____Unify____stack_alloc_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
ll_backend__stack_alloc__var_is_float_2_p_0(
  MR_Word VarTable_3,
  MR_Word Var_4);

static MR_bool MR_CALL 
ll_backend__stack_alloc__var_is_not_dummy_2_p_0(
  MR_Word VarTable_3,
  MR_Word Var_4);

static MR_bool MR_CALL 
ll_backend__stack_alloc__set_for_loop_control_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__stack_alloc__set_for_loop_control_4_p_0(
  MR_Word AllocData_5,
  MR_Word Set0_6,
  MR_Word STATE_VARIABLE_StackAlloc_0_11,
  MR_Word * STATE_VARIABLE_StackAlloc_12);

static void MR_CALL 
ll_backend__stack_alloc__allocate_stack_slots_for_dummy_vars_5_p_0(
  MR_Word MainStack_1,
  MR_Word HeadVar__2_2,
  MR_Integer N0_3,
  MR_Word STATE_VARIABLE_StackSlots_0_4,
  MR_Word * STATE_VARIABLE_StackSlots_5);

static MR_bool MR_CALL 
ll_backend__stack_alloc__allocate_stack_slots_to_colors_7_p_0_4(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__stack_alloc__allocate_stack_slots_to_colors_7_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__stack_alloc__allocate_stack_slots_to_colors_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
ll_backend__stack_alloc__allocate_stack_slots_to_colors_7_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ll_backend__stack_alloc__allocate_stack_slots_to_colors_7_p_0(
  MR_Word MainStack_1,
  MR_Word MaybeDoubleWidthFloats_2,
  MR_Word MaybeReservedVarInfo_3,
  MR_Word HeadVar__4_4,
  MR_Integer STATE_VARIABLE_FirstFreeSlot_0_5,
  MR_Word STATE_VARIABLE_StackSlots_0_6,
  MR_Word * STATE_VARIABLE_StackSlots_7);

static void MR_CALL 
ll_backend__stack_alloc__allocate_given_stack_slot_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_StackSlots_0_3,
  MR_Word * STATE_VARIABLE_StackSlots_4);

static MR_bool MR_CALL 
ll_backend__stack_alloc____Unify____stack_alloc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__stack_alloc____Compare____stack_alloc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_recursive_call_for_loop_control_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);


static /* final */ const MR_Box ll_backend__stack_alloc_scalar_common_1[4][2];

static /* final */ const MR_Box ll_backend__stack_alloc_scalar_common_2[5][5];

static /* final */ const MR_Box ll_backend__stack_alloc_scalar_common_3[1][7];




static /* final */ const MR_Box ll_backend__stack_alloc_scalar_common_1[4][2] = {
  /* row   0 */
  {
    ((MR_Box) (&parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_ll_backend__live_vars__stack_alloc_info__arity1__ll_backend__stack_alloc__stack_alloc__arity0__)),
    ((MR_Box) (&ll_backend__stack_alloc__ll_backend__stack_alloc__type_ctor_info_stack_alloc_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&ll_backend__stack_alloc_scalar_common_1[0]))
  },
};

static /* final */ const MR_Box ll_backend__stack_alloc_scalar_common_2[5][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_width_0)),
    ((MR_Box) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_width_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&ll_backend__stack_alloc_scalar_common_2[0])),
    ((MR_Box) (ll_backend__stack_alloc__allocate_stack_slots_to_colors_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&ll_backend__stack_alloc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&ll_backend__stack_alloc_scalar_common_2[0])),
    ((MR_Box) (ll_backend__stack_alloc__allocate_stack_slots_to_colors_7_p_0_3)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&ll_backend__stack_alloc_scalar_common_2[0])),
    ((MR_Box) (ll_backend__stack_alloc__allocate_stack_slots_to_colors_7_p_0_4)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__stack_alloc_scalar_common_3[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&ll_backend__live_vars__ll_backend__live_vars__type_ctor_info_alloc_data_0)),
    ((MR_Box) (&ll_backend__stack_alloc__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ll_backend__stack_alloc__ll_backend__stack_alloc__type_ctor_info_stack_alloc_0)),
    ((MR_Box) (&ll_backend__stack_alloc__ll_backend__stack_alloc__type_ctor_info_stack_alloc_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_alloc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__stack_alloc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_alloc__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  { (MR_PseudoTypeInfo) (&ll_backend__stack_alloc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_Integer ll_backend__stack_alloc__ll_backend__stack_alloc__functor_number_map_stack_alloc_0[1] = { (MR_Integer) 0 };

static const MR_FA_TypeInfo_Struct1 ll_backend__stack_alloc__parse_tree__set_of_var__ti_set_of_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__stack_alloc__set_ordlist__ti_set_ordlist_1parse_tree__set_of_var__ti_set_of_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&ll_backend__stack_alloc__parse_tree__set_of_var__ti_set_of_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_NotagFunctorDesc ll_backend__stack_alloc__ll_backend__stack_alloc__notag_functor_desc_stack_alloc_0 = {
  (MR_String) "stack_alloc",
  (MR_PseudoTypeInfo) (&ll_backend__stack_alloc__set_ordlist__ti_set_ordlist_1parse_tree__set_of_var__ti_set_of_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct ll_backend__stack_alloc__ll_backend__stack_alloc__type_ctor_info_stack_alloc_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (ll_backend__stack_alloc____Unify____stack_alloc_0_0_10001)),
  ((MR_Box) (ll_backend__stack_alloc____Compare____stack_alloc_0_0_10001)),
  (MR_String) "ll_backend.stack_alloc",
  (MR_String) "stack_alloc",
  { &ll_backend__stack_alloc__ll_backend__stack_alloc__notag_functor_desc_stack_alloc_0 },
  { &ll_backend__stack_alloc__ll_backend__stack_alloc__notag_functor_desc_stack_alloc_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  ll_backend__stack_alloc__ll_backend__stack_alloc__functor_number_map_stack_alloc_0,

};

const MR_BaseTypeclassInfo base_typeclass_info_ll_backend__live_vars__stack_alloc_info__arity1__ll_backend__stack_alloc__stack_alloc__arity0__[9] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 4)),
  ((MR_Box) (ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_p_0_10001)),
  ((MR_Box) (ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_p_0_10001)),
  ((MR_Box) (ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_p_0_10001)),
  ((MR_Box) (ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_recursive_call_for_loop_control_4_4_p_0_10001))
};

static MR_bool MR_CALL 
ll_backend__stack_alloc__IntroducedFrom__pred__allocate_next_stack_slot__299__1_2_p_0(
  MR_Word StackSlotWidth_10,
  MR_Word HeadVar__2_28)
{
  MR_bool succeeded = (StackSlotWidth_10 == HeadVar__2_28);

  return succeeded;
}

static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_recursive_call_for_loop_control_4_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_StackAlloc_12;

  ll_backend__stack_alloc__set_for_loop_control_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_StackAlloc_12);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_StackAlloc_12));
}

static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_recursive_call_for_loop_control_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  MR_Word StackVarsSets_5 = (MR_Word) (HeadVar__1_1);
  MR_Word Var_6;
  MR_Box conv1_HeadVar__4_4;

  {
    Var_6 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_6, 0) = ((MR_Box) (&ll_backend__stack_alloc_scalar_common_3[0]));
    MR_hl_field(0, Var_6, 1) = ((MR_Box) (ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_recursive_call_for_loop_control_4_4_p_0_1));
    MR_hl_field(0, Var_6, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_6, 3) = ((MR_Box) (HeadVar__2_2));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&ll_backend__stack_alloc_scalar_common_1[0]), (MR_Word) (&ll_backend__stack_alloc__ll_backend__stack_alloc__type_ctor_info_stack_alloc_0), Var_6, StackVarsSets_5, ((MR_Box) (HeadVar__3_3)), &conv1_HeadVar__4_4);
  *HeadVar__4_4 = ((MR_Word) (conv1_HeadVar__4_4));
}

static MR_bool MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__stack_alloc__var_is_not_dummy_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  MR_bool succeeded;
  MR_Word StackVars0_5 = (MR_Word) (HeadVar__1_1);
  MR_Word StackVars_6;
  MR_Word LiveSets0_7;
  MR_Word LiveSets_8;
  MR_Word DummyVarInfo_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));

  if ((DummyVarInfo_10 == (MR_Word) ((MR_Unsigned) 0U)))
    StackVars_6 = StackVars0_5;
  else
  {
    MR_Word VarTable_11 = ((MR_Word) ((MR_hl_field(1, DummyVarInfo_10, 0))));
    MR_Word Var_12;

    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_12, 0) = ((MR_Box) (&ll_backend__stack_alloc_scalar_common_2[2]));
      MR_hl_field(0, Var_12, 1) = ((MR_Box) (ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_p_0_1));
      MR_hl_field(0, Var_12, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_12, 3) = ((MR_Box) (VarTable_11));
    }
    parse_tree__set_of_var__filter_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_12, StackVars0_5, &StackVars_6);
  }
  LiveSets0_7 = (MR_Word) (HeadVar__3_3);
  LiveSets_8 = mercury__set__insert_2_f_0((MR_Word) (&ll_backend__stack_alloc_scalar_common_1[0]), LiveSets0_7, ((MR_Box) (StackVars_6)));
  *HeadVar__4_4 = (MR_Word) (LiveSets_8);
}

static MR_bool MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__stack_alloc__var_is_not_dummy_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  MR_bool succeeded;
  MR_Word ResumeOnStack_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) & (MR_Integer) 1);
  MR_Word ResumeVars_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
  MR_Word NondetLiveVars_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));

  switch (ResumeOnStack_5) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *HeadVar__4_4 = HeadVar__3_3;
      break;
    case (MR_Integer) 1:
      {
        MR_Word LiveSet0_8;
        MR_Word LiveSet_9;
        MR_Word LiveSets0_10;
        MR_Word LiveSets_11;
        MR_Word DummyVarInfo_14;

        LiveSet0_8 = parse_tree__set_of_var__union_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ResumeVars_6, NondetLiveVars_7);
        DummyVarInfo_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
        if ((DummyVarInfo_14 == (MR_Word) ((MR_Unsigned) 0U)))
          LiveSet_9 = LiveSet0_8;
        else
        {
          MR_Word VarTable_15 = ((MR_Word) ((MR_hl_field(1, DummyVarInfo_14, 0))));
          MR_Word Var_16;

          {
            Var_16 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_16, 0) = ((MR_Box) (&ll_backend__stack_alloc_scalar_common_2[2]));
            MR_hl_field(0, Var_16, 1) = ((MR_Box) (ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_p_0_1));
            MR_hl_field(0, Var_16, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Var_16, 3) = ((MR_Box) (VarTable_15));
          }
          parse_tree__set_of_var__filter_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_16, LiveSet0_8, &LiveSet_9);
        }
        LiveSets0_10 = (MR_Word) (HeadVar__3_3);
        LiveSets_11 = mercury__set__insert_2_f_0((MR_Word) (&ll_backend__stack_alloc_scalar_common_1[0]), LiveSets0_10, ((MR_Box) (LiveSet_9)));
        *HeadVar__4_4 = (MR_Word) (LiveSets_11);
      }
      break;
  }
}

static MR_bool MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__stack_alloc__var_is_not_dummy_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  MR_bool succeeded;
  MR_Word ForwardVars_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
  MR_Word ResumeVars_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
  MR_Word NondetLiveVars_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
  MR_Word LiveSet0_8;
  MR_Word LiveSet_9;
  MR_Word LiveSets0_10;
  MR_Word LiveSets_11;
  MR_Word Var_12;
  MR_Word Var_13;
  MR_Word Var_14;
  MR_Word DummyVarInfo_18;

  {
    Var_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_14, 0) = ((MR_Box) (NondetLiveVars_7));
    MR_hl_field(1, Var_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_13, 0) = ((MR_Box) (ResumeVars_6));
    MR_hl_field(1, Var_13, 1) = ((MR_Box) (Var_14));
  }
  {
    Var_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_12, 0) = ((MR_Box) (ForwardVars_5));
    MR_hl_field(1, Var_12, 1) = ((MR_Box) (Var_13));
  }
  LiveSet0_8 = parse_tree__set_of_var__union_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_12);
  DummyVarInfo_18 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
  if ((DummyVarInfo_18 == (MR_Word) ((MR_Unsigned) 0U)))
    LiveSet_9 = LiveSet0_8;
  else
  {
    MR_Word VarTable_19 = ((MR_Word) ((MR_hl_field(1, DummyVarInfo_18, 0))));
    MR_Word Var_20;

    {
      Var_20 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_20, 0) = ((MR_Box) (&ll_backend__stack_alloc_scalar_common_2[2]));
      MR_hl_field(0, Var_20, 1) = ((MR_Box) (ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_p_0_1));
      MR_hl_field(0, Var_20, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_20, 3) = ((MR_Box) (VarTable_19));
    }
    parse_tree__set_of_var__filter_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_20, LiveSet0_8, &LiveSet_9);
  }
  LiveSets0_10 = (MR_Word) (HeadVar__3_3);
  LiveSets_11 = mercury__set__insert_2_f_0((MR_Word) (&ll_backend__stack_alloc_scalar_common_1[0]), LiveSets0_10, ((MR_Box) (LiveSet_9)));
  *HeadVar__4_4 = (MR_Word) (LiveSets_11);
}

static void MR_CALL 
ll_backend__stack_alloc____Compare____stack_alloc_0_0(
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
    MR_Word ArgX1_4 = (MR_Word) (HeadVar__2_2);
    MR_Word ArgY1_5 = (MR_Word) (HeadVar__3_3);

    mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__stack_alloc_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
  }
}

static MR_bool MR_CALL 
ll_backend__stack_alloc____Unify____stack_alloc_0_0(
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
    MR_Word ArgX1_3 = (MR_Word) (HeadVar__1_1);
    MR_Word ArgY1_4 = (MR_Word) (HeadVar__2_2);

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__stack_alloc_scalar_common_1[3]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
  }
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__stack_alloc__var_is_float_2_p_0(
  MR_Word VarTable_3,
  MR_Word Var_4)
{
  MR_bool succeeded;
  MR_Word Var_5;
  MR_Word Var_6;

  Var_5 = parse_tree__builtin_lib_types__float_type_0_f_0();
  parse_tree__var_table__lookup_var_type_3_p_0(VarTable_3, Var_4, &Var_6);
  succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Var_5, Var_6);
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__stack_alloc__var_is_not_dummy_2_p_0(
  MR_Word VarTable_3,
  MR_Word Var_4)
{
  MR_bool succeeded;
  MR_Word VarEntry_5;
  MR_Word Var_6;

  parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_3, Var_4, &VarEntry_5);
  Var_6 = ((MR_Unsigned) ((MR_hl_field(0, VarEntry_5, 2))) & (MR_Integer) 1);
  succeeded = (Var_6 == (MR_Integer) 1);
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__stack_alloc__set_for_loop_control_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__stack_alloc__var_is_not_dummy_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
ll_backend__stack_alloc__set_for_loop_control_4_p_0(
  MR_Word AllocData_5,
  MR_Word Set0_6,
  MR_Word STATE_VARIABLE_StackAlloc_0_11,
  MR_Word * STATE_VARIABLE_StackAlloc_12)
{
  MR_bool succeeded;
  MR_Word LiveSets0_8 = (MR_Word) (STATE_VARIABLE_StackAlloc_0_11);
  MR_Word Set_9;
  MR_Word LiveSets_10;
  MR_Word DummyVarInfo_14 = ((MR_Word) ((MR_hl_field(0, AllocData_5, 3))));

  if ((DummyVarInfo_14 == (MR_Word) ((MR_Unsigned) 0U)))
    Set_9 = Set0_6;
  else
  {
    MR_Word VarTable_15 = ((MR_Word) ((MR_hl_field(1, DummyVarInfo_14, 0))));
    MR_Word Var_16;

    {
      Var_16 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_16, 0) = ((MR_Box) (&ll_backend__stack_alloc_scalar_common_2[2]));
      MR_hl_field(0, Var_16, 1) = ((MR_Box) (ll_backend__stack_alloc__set_for_loop_control_4_p_0_1));
      MR_hl_field(0, Var_16, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_16, 3) = ((MR_Box) (VarTable_15));
    }
    parse_tree__set_of_var__filter_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_16, Set0_6, &Set_9);
  }
  LiveSets_10 = mercury__set__insert_2_f_0((MR_Word) (&ll_backend__stack_alloc_scalar_common_1[0]), LiveSets0_8, ((MR_Box) (Set_9)));
  *STATE_VARIABLE_StackAlloc_12 = (MR_Word) (LiveSets_10);
}

void MR_CALL 
ll_backend__stack_alloc__allocate_stack_slots_in_proc_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ProcInfo_0_41,
  MR_Word * STATE_VARIABLE_ProcInfo_42)
{
  MR_bool succeeded;
  MR_Word PredId_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
  MR_Word PredInfo_9;
  MR_Word Liveness0_10;
  MR_Word Globals_11;
  MR_Word TraceLevel_12;
  MR_Word EffTraceLevel_13;
  MR_Word NeedFailVars_14;
  MR_Word FailVars_15;
  MR_Word TypeInfoLiveness_16;
  MR_Word OptNoReturnCalls_17;
  MR_Word VarTable_18;
  MR_Word AllocData_19;
  MR_Word NondetLiveness0_20;
  MR_Word SimpleStackAlloc0_21;
  MR_Word Goal0_22;
  MR_Word Goal_23;
  MR_Word SimpleStackAlloc_24;
  MR_Word LiveSets0_27;
  MR_Integer NumReservedSlots_28;
  MR_Word MaybeReservedVarInfo_29;
  MR_Word LiveSets_33;
  MR_Word ColourSets_34;
  MR_Word ColourList_35;
  MR_Word CodeModel_36;
  MR_Word MainStack_37;
  MR_Word StackSlots1_38;
  MR_Word VarTableAL_39;
  MR_Word StackSlots_40;
  MR_Word Var_45;
  MR_Word Var_46;
  MR_Word STATE_VARIABLE_ProcInfo_1_47;
  MR_Word STATE_VARIABLE_ProcInfo_2_48;
  MR_Word MaybeDoubleWidthFloats_55;
  MR_Integer FirstFreeSlot_56;
  MR_Word Var_59;
  MR_Word _Liveness_25;
  MR_Word _NondetLiveness_26;
  MR_Box conv0_SimpleStackAlloc_24;
  MR_Word Var_62;
  MR_Word Var_63;

  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_5, PredId_6, &PredInfo_9);
  ll_backend__liveness__initial_liveness_4_p_0(ModuleInfo_5, PredInfo_9, STATE_VARIABLE_ProcInfo_0_41, &Liveness0_10);
  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_5, &Globals_11);
  libs__globals__get_trace_level_2_p_0(Globals_11, &TraceLevel_12);
  EffTraceLevel_13 = libs__trace_params__eff_trace_level_for_proc_4_f_0(ModuleInfo_5, PredInfo_9, STATE_VARIABLE_ProcInfo_0_41, TraceLevel_12);
  NeedFailVars_14 = libs__trace_params__eff_trace_level_needs_fail_vars_1_f_0(EffTraceLevel_13);
  switch (NeedFailVars_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      FailVars_15 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
      break;
    case (MR_Integer) 1:
      ll_backend__trace_gen__trace_fail_vars_3_p_0(ModuleInfo_5, STATE_VARIABLE_ProcInfo_0_41, &FailVars_15);
      break;
  }
  hlds__hlds_pred__body_should_use_typeinfo_liveness_3_p_0(PredInfo_9, Globals_11, &TypeInfoLiveness_16);
  libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 669, &OptNoReturnCalls_17);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(STATE_VARIABLE_ProcInfo_0_41, &VarTable_18);
  {
    Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_45, 0) = ((MR_Box) (VarTable_18));
  }
  {
    AllocData_19 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, AllocData_19, 0) = ((MR_Box) (ModuleInfo_5));
    MR_hl_field(0, AllocData_19, 1) = ((MR_Box) (STATE_VARIABLE_ProcInfo_0_41));
    MR_hl_field(0, AllocData_19, 2) = ((MR_Box) (HeadVar__2_2));
    MR_hl_field(0, AllocData_19, 3) = ((MR_Box) (Var_45));
    MR_hl_field(0, AllocData_19, 4) = (MR_Box) (((((MR_Unsigned) (TypeInfoLiveness_16) << 1)) | (MR_Unsigned) (OptNoReturnCalls_17)));
  }
  NondetLiveness0_20 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  Var_46 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ll_backend__stack_alloc_scalar_common_1[0]), ((MR_Box) (FailVars_15)));
  SimpleStackAlloc0_21 = (MR_Word) (Var_46);
  hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_0_41, &Goal0_22);
  ll_backend__live_vars__build_live_sets_in_goal_no_par_stack_10_p_0((MR_Word) (&ll_backend__stack_alloc_scalar_common_1[1]), AllocData_19, FailVars_15, Goal0_22, &Goal_23, ((MR_Box) (SimpleStackAlloc0_21)), &conv0_SimpleStackAlloc_24, Liveness0_10, &_Liveness_25, NondetLiveness0_20, &_NondetLiveness_26);
  SimpleStackAlloc_24 = ((MR_Word) (conv0_SimpleStackAlloc_24));
  hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_23, STATE_VARIABLE_ProcInfo_0_41, &STATE_VARIABLE_ProcInfo_1_47);
  LiveSets0_27 = (MR_Word) (SimpleStackAlloc_24);
  ll_backend__trace_gen__do_we_need_maxfr_slot_3_p_0(EffTraceLevel_13, STATE_VARIABLE_ProcInfo_1_47, &STATE_VARIABLE_ProcInfo_2_48);
  ll_backend__trace_gen__trace_reserved_slots_5_p_0(Globals_11, STATE_VARIABLE_ProcInfo_2_48, EffTraceLevel_13, &NumReservedSlots_28, &MaybeReservedVarInfo_29);
  if ((MaybeReservedVarInfo_29 == (MR_Word) ((MR_Unsigned) 0U)))
    LiveSets_33 = LiveSets0_27;
  else
  {
    MR_Word ResVar_30;
    MR_Word ResVarSet_32;
    MR_Word Var_49 = ((MR_Word) ((MR_hl_field(1, MaybeReservedVarInfo_29, 0))));

    ResVar_30 = ((MR_Word) ((MR_hl_field(0, Var_49, 0))));
    ResVarSet_32 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ResVar_30);
    mercury__set__insert_3_p_0((MR_Word) (&ll_backend__stack_alloc_scalar_common_1[0]), ((MR_Box) (ResVarSet_32)), LiveSets0_27, &LiveSets_33);
  }
  parse_tree__set_of_var__graph_color_group_elements_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LiveSets_33, &ColourSets_34);
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&ll_backend__stack_alloc_scalar_common_1[0]), ColourSets_34, &ColourList_35);
  CodeModel_36 = hlds__code_model__proc_info_interface_code_model_1_f_0(STATE_VARIABLE_ProcInfo_2_48);
  MainStack_37 = ll_backend__llds__code_model_to_main_stack_1_f_0(CodeModel_36);
  succeeded = (MainStack_37 == (MR_Integer) 0);
  if (succeeded)
  {
    Var_62 = (MR_Integer) 1;
    libs__globals__double_width_floats_on_det_stack_2_p_0(Globals_11, &Var_63);
    succeeded = (Var_62 == Var_63);
  }
  if (succeeded)
    {
      MaybeDoubleWidthFloats_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeDoubleWidthFloats_55, 0) = ((MR_Box) (VarTable_18));
    }
  else
    MaybeDoubleWidthFloats_55 = (MR_Word) ((MR_Unsigned) 0U);
  FirstFreeSlot_56 = (MR_Integer) ((MR_Unsigned) NumReservedSlots_28 + (MR_Unsigned) 1);
  Var_59 = mercury__map__init_0_f_0((MR_Word) (&ll_backend__stack_alloc_scalar_common_1[2]), (MR_Word) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0));
  ll_backend__stack_alloc__allocate_stack_slots_to_colors_7_p_0(MainStack_37, MaybeDoubleWidthFloats_55, MaybeReservedVarInfo_29, ColourList_35, FirstFreeSlot_56, Var_59, &StackSlots1_38);
  parse_tree__var_table__var_table_to_sorted_assoc_list_2_p_0(VarTable_18, &VarTableAL_39);
  ll_backend__stack_alloc__allocate_stack_slots_for_dummy_vars_5_p_0(MainStack_37, VarTableAL_39, (MR_Integer) -1, StackSlots1_38, &StackSlots_40);
  hlds__hlds_pred__proc_info_set_stack_slots_3_p_0(StackSlots_40, STATE_VARIABLE_ProcInfo_2_48, STATE_VARIABLE_ProcInfo_42);
}

static void MR_CALL 
ll_backend__stack_alloc__allocate_stack_slots_for_dummy_vars_5_p_0(
  MR_Word MainStack_1,
  MR_Word HeadVar__2_2,
  MR_Integer N0_3,
  MR_Word STATE_VARIABLE_StackSlots_0_4,
  MR_Word * STATE_VARIABLE_StackSlots_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_StackSlots_5 = STATE_VARIABLE_StackSlots_0_4;
    else
    {
      MR_Word Var_12;
      MR_Word Entry_13;
      MR_Word VarsEntries_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word IsDummy_19;
      MR_Integer N1_20;
      MR_Word Var_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word STATE_VARIABLE_StackSlots_1_27;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Integer next_value_of_N0_3;
      MR_Word next_value_of_STATE_VARIABLE_StackSlots_0_4;

      Var_12 = ((MR_Word) ((MR_hl_field(0, Var_24, 0))));
      Entry_13 = ((MR_Word) ((MR_hl_field(0, Var_24, 1))));
      IsDummy_19 = ((MR_Unsigned) ((MR_hl_field(0, Entry_13, 2))) & (MR_Integer) 1);
      switch (IsDummy_19) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Locn_21;

            switch (MainStack_1) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  Locn_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Locn_21, 0) = ((MR_Box) (N0_3));
                  MR_hl_field(0, Locn_21, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                }
                break;
              case (MR_Integer) 1:
                {
                  Locn_21 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(2, Locn_21, 0) = ((MR_Box) (N0_3));
                }
                break;
            }
            mercury__map__det_insert_4_p_0((MR_Word) (&ll_backend__stack_alloc_scalar_common_1[2]), (MR_Word) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0), ((MR_Box) (Var_12)), ((MR_Box) (Locn_21)), STATE_VARIABLE_StackSlots_0_4, &STATE_VARIABLE_StackSlots_1_27);
            N1_20 = (MR_Integer) ((MR_Unsigned) N0_3 - (MR_Unsigned) 1);
          }
          break;
        case (MR_Integer) 1:
          {
            N1_20 = N0_3;
            STATE_VARIABLE_StackSlots_1_27 = STATE_VARIABLE_StackSlots_0_4;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = VarsEntries_14;
      next_value_of_N0_3 = N1_20;
      next_value_of_STATE_VARIABLE_StackSlots_0_4 = STATE_VARIABLE_StackSlots_1_27;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      N0_3 = next_value_of_N0_3;
      STATE_VARIABLE_StackSlots_0_4 = next_value_of_STATE_VARIABLE_StackSlots_0_4;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
ll_backend__stack_alloc__allocate_stack_slots_to_colors_7_p_0_4(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__stack_alloc__IntroducedFrom__pred__allocate_next_stack_slot__299__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__stack_alloc__allocate_stack_slots_to_colors_7_p_0_3(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__stack_alloc__IntroducedFrom__pred__allocate_next_stack_slot__299__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__stack_alloc__allocate_stack_slots_to_colors_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__stack_alloc__var_is_float_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__stack_alloc__allocate_stack_slots_to_colors_7_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__stack_alloc__IntroducedFrom__pred__allocate_next_stack_slot__299__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static void MR_CALL 
ll_backend__stack_alloc__allocate_stack_slots_to_colors_7_p_0(
  MR_Word MainStack_1,
  MR_Word MaybeDoubleWidthFloats_2,
  MR_Word MaybeReservedVarInfo_3,
  MR_Word HeadVar__4_4,
  MR_Integer STATE_VARIABLE_FirstFreeSlot_0_5,
  MR_Word STATE_VARIABLE_StackSlots_0_6,
  MR_Word * STATE_VARIABLE_StackSlots_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_StackSlots_7 = STATE_VARIABLE_StackSlots_0_6;
    else
    {
      MR_Word FirstColour_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
      MR_Word LaterColours_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
      MR_Integer STATE_VARIABLE_FirstFreeSlot_1_25;
      MR_Word STATE_VARIABLE_StackSlots_1_26;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Integer next_value_of_STATE_VARIABLE_FirstFreeSlot_0_5;
      MR_Word next_value_of_STATE_VARIABLE_StackSlots_0_6;

      if ((MaybeDoubleWidthFloats_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Integer SlotNum_40;
        MR_Word Locn_41;
        MR_Word VarList_42;
        MR_Integer ResSlotNum_39;
        MR_Word TypeCtorInfo_29_48;
        MR_Word ResVar_38;
        MR_Word Var_43;

        succeeded = (MaybeReservedVarInfo_3 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_43 = ((MR_Word) ((MR_hl_field(1, MaybeReservedVarInfo_3, 0))));
          ResVar_38 = ((MR_Word) ((MR_hl_field(0, Var_43, 0))));
          ResSlotNum_39 = ((MR_Integer) ((MR_hl_field(0, Var_43, 1))));
          TypeCtorInfo_29_48 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
          succeeded = parse_tree__set_of_var__member_2_p_0(TypeCtorInfo_29_48, FirstColour_18, ResVar_38);
        }
        if (succeeded)
        {
          mercury__require__expect_3_p_0((MR_Word) (&ll_backend__stack_alloc_scalar_common_2[1]), (MR_String) "predicate \140ll_backend.stack_alloc.allocate_next_stack_slot\'/8", (MR_String) "reserved multiple stack slots");
          SlotNum_40 = ResSlotNum_39;
          STATE_VARIABLE_FirstFreeSlot_1_25 = STATE_VARIABLE_FirstFreeSlot_0_5;
        }
        else
        {
          SlotNum_40 = STATE_VARIABLE_FirstFreeSlot_0_5;
          STATE_VARIABLE_FirstFreeSlot_1_25 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_FirstFreeSlot_0_5 + (MR_Unsigned) 1);
        }
        switch (MainStack_1) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              Locn_41 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Locn_41, 0) = ((MR_Box) (SlotNum_40));
              MR_hl_field(0, Locn_41, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 1:
            {
              Locn_41 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Locn_41, 0) = ((MR_Box) (SlotNum_40));
            }
            break;
        }
        VarList_42 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), FirstColour_18);
        ll_backend__stack_alloc__allocate_given_stack_slot_4_p_0(Locn_41, VarList_42, STATE_VARIABLE_StackSlots_0_6, &STATE_VARIABLE_StackSlots_1_26);
      }
      else
      {
        MR_Word VarTable_27 = ((MR_Word) ((MR_hl_field(1, MaybeDoubleWidthFloats_2, 0))));
        MR_Word DoubleWidthVars_28;
        MR_Word SingleWidthVars_29;
        MR_Word Var_31;
        MR_Integer STATE_VARIABLE_FirstFreeSlot_2_33;
        MR_Word STATE_VARIABLE_StackSlots_2_34;

        {
          Var_31 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_31, 0) = ((MR_Box) (&ll_backend__stack_alloc_scalar_common_2[2]));
          MR_hl_field(0, Var_31, 1) = ((MR_Box) (ll_backend__stack_alloc__allocate_stack_slots_to_colors_7_p_0_2));
          MR_hl_field(0, Var_31, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_31, 3) = ((MR_Box) (VarTable_27));
        }
        parse_tree__set_of_var__divide_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_31, FirstColour_18, &DoubleWidthVars_28, &SingleWidthVars_29);
        succeeded = parse_tree__set_of_var__is_non_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SingleWidthVars_29);
        if (succeeded)
        {
          MR_Integer SlotNum_56;
          MR_Word Locn_57;
          MR_Word VarList_58;
          MR_Integer ResSlotNum_55;
          MR_Word TypeCtorInfo_29_64;
          MR_Word ResVar_54;
          MR_Word Var_59;

          succeeded = (MaybeReservedVarInfo_3 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_59 = ((MR_Word) ((MR_hl_field(1, MaybeReservedVarInfo_3, 0))));
            ResVar_54 = ((MR_Word) ((MR_hl_field(0, Var_59, 0))));
            ResSlotNum_55 = ((MR_Integer) ((MR_hl_field(0, Var_59, 1))));
            TypeCtorInfo_29_64 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
            succeeded = parse_tree__set_of_var__member_2_p_0(TypeCtorInfo_29_64, SingleWidthVars_29, ResVar_54);
          }
          if (succeeded)
          {
            mercury__require__expect_3_p_0((MR_Word) (&ll_backend__stack_alloc_scalar_common_2[3]), (MR_String) "predicate \140ll_backend.stack_alloc.allocate_next_stack_slot\'/8", (MR_String) "reserved multiple stack slots");
            SlotNum_56 = ResSlotNum_55;
            STATE_VARIABLE_FirstFreeSlot_2_33 = STATE_VARIABLE_FirstFreeSlot_0_5;
          }
          else
          {
            SlotNum_56 = STATE_VARIABLE_FirstFreeSlot_0_5;
            STATE_VARIABLE_FirstFreeSlot_2_33 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_FirstFreeSlot_0_5 + (MR_Unsigned) 1);
          }
          switch (MainStack_1) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                Locn_57 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Locn_57, 0) = ((MR_Box) (SlotNum_56));
                MR_hl_field(0, Locn_57, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              }
              break;
            case (MR_Integer) 1:
              {
                Locn_57 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, Locn_57, 0) = ((MR_Box) (SlotNum_56));
              }
              break;
          }
          VarList_58 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SingleWidthVars_29);
          ll_backend__stack_alloc__allocate_given_stack_slot_4_p_0(Locn_57, VarList_58, STATE_VARIABLE_StackSlots_0_6, &STATE_VARIABLE_StackSlots_2_34);
        }
        else
        {
          STATE_VARIABLE_StackSlots_2_34 = STATE_VARIABLE_StackSlots_0_6;
          STATE_VARIABLE_FirstFreeSlot_2_33 = STATE_VARIABLE_FirstFreeSlot_0_5;
        }
        succeeded = parse_tree__set_of_var__is_non_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), DoubleWidthVars_28);
        if (succeeded)
        {
          MR_Integer STATE_VARIABLE_FirstFreeSlot_3_35;
          MR_Integer SlotNum_73;
          MR_Word Locn_74;
          MR_Word VarList_75;
          MR_Integer ResSlotNum_72;
          MR_Word TypeCtorInfo_29_81;
          MR_Word ResVar_71;
          MR_Word Var_76;

          succeeded = mercury__int__even_1_p_0(STATE_VARIABLE_FirstFreeSlot_2_33);
          if (succeeded)
            STATE_VARIABLE_FirstFreeSlot_3_35 = STATE_VARIABLE_FirstFreeSlot_2_33;
          else
            STATE_VARIABLE_FirstFreeSlot_3_35 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_FirstFreeSlot_2_33 + (MR_Unsigned) 1);
          succeeded = (MaybeReservedVarInfo_3 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_76 = ((MR_Word) ((MR_hl_field(1, MaybeReservedVarInfo_3, 0))));
            ResVar_71 = ((MR_Word) ((MR_hl_field(0, Var_76, 0))));
            ResSlotNum_72 = ((MR_Integer) ((MR_hl_field(0, Var_76, 1))));
            TypeCtorInfo_29_81 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
            succeeded = parse_tree__set_of_var__member_2_p_0(TypeCtorInfo_29_81, DoubleWidthVars_28, ResVar_71);
          }
          if (succeeded)
          {
            mercury__require__expect_3_p_0((MR_Word) (&ll_backend__stack_alloc_scalar_common_2[4]), (MR_String) "predicate \140ll_backend.stack_alloc.allocate_next_stack_slot\'/8", (MR_String) "reserved multiple stack slots");
            SlotNum_73 = ResSlotNum_72;
            STATE_VARIABLE_FirstFreeSlot_1_25 = STATE_VARIABLE_FirstFreeSlot_3_35;
          }
          else
          {
            SlotNum_73 = STATE_VARIABLE_FirstFreeSlot_3_35;
            STATE_VARIABLE_FirstFreeSlot_1_25 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_FirstFreeSlot_3_35 + (MR_Unsigned) 2);
          }
          switch (MainStack_1) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                Locn_74 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Locn_74, 0) = ((MR_Box) (SlotNum_73));
                MR_hl_field(0, Locn_74, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
              }
              break;
            case (MR_Integer) 1:
              {
                Locn_74 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, Locn_74, 0) = ((MR_Box) (SlotNum_73));
              }
              break;
          }
          VarList_75 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), DoubleWidthVars_28);
          ll_backend__stack_alloc__allocate_given_stack_slot_4_p_0(Locn_74, VarList_75, STATE_VARIABLE_StackSlots_2_34, &STATE_VARIABLE_StackSlots_1_26);
        }
        else
        {
          STATE_VARIABLE_StackSlots_1_26 = STATE_VARIABLE_StackSlots_2_34;
          STATE_VARIABLE_FirstFreeSlot_1_25 = STATE_VARIABLE_FirstFreeSlot_2_33;
        }
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = LaterColours_19;
      next_value_of_STATE_VARIABLE_FirstFreeSlot_0_5 = STATE_VARIABLE_FirstFreeSlot_1_25;
      next_value_of_STATE_VARIABLE_StackSlots_0_6 = STATE_VARIABLE_StackSlots_1_26;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_FirstFreeSlot_0_5 = next_value_of_STATE_VARIABLE_FirstFreeSlot_0_5;
      STATE_VARIABLE_StackSlots_0_6 = next_value_of_STATE_VARIABLE_StackSlots_0_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__stack_alloc__allocate_given_stack_slot_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_StackSlots_0_3,
  MR_Word * STATE_VARIABLE_StackSlots_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_StackSlots_4 = STATE_VARIABLE_StackSlots_0_3;
    else
    {
      MR_Word Var_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word Vars_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word STATE_VARIABLE_StackSlots_1_15;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_StackSlots_0_3;

      mercury__map__det_insert_4_p_0((MR_Word) (&ll_backend__stack_alloc_scalar_common_1[2]), (MR_Word) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0), ((MR_Box) (Var_10)), ((MR_Box) (HeadVar__1_1)), STATE_VARIABLE_StackSlots_0_3, &STATE_VARIABLE_StackSlots_1_15);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Vars_11;
      next_value_of_STATE_VARIABLE_StackSlots_0_3 = STATE_VARIABLE_StackSlots_1_15;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_StackSlots_0_3 = next_value_of_STATE_VARIABLE_StackSlots_0_3;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
ll_backend__stack_alloc____Unify____stack_alloc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__stack_alloc____Unify____stack_alloc_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__stack_alloc____Compare____stack_alloc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__stack_alloc____Compare____stack_alloc_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__4_4;

  ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__4_4);
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
}

static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__4_4;

  ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__4_4);
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
}

static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__4_4;

  ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__4_4);
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
}

static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_recursive_call_for_loop_control_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__4_4;

  ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_recursive_call_for_loop_control_4_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__4_4);
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
}

void mercury__ll_backend__stack_alloc__init(void)
{
}

void mercury__ll_backend__stack_alloc__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&ll_backend__stack_alloc__ll_backend__stack_alloc__type_ctor_info_stack_alloc_0);
}

void mercury__ll_backend__stack_alloc__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ll_backend__stack_alloc__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module ll_backend.stack_alloc.
