/*
** Automatically generated from `stack_alloc.m'
** by the Mercury compiler,
** version rotd-2016-02-08
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


/* :- module ll_backend.stack_alloc. */
/* :- implementation. */

/*
INIT mercury__ll_backend__stack_alloc__init
ENDINIT
*/

#include "ll_backend.stack_alloc.mih"


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
#include "ll_backend.continuation_info.mih"
#include "ll_backend.global_data.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.live_vars.mih"
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




static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_alloc__array__pti_array_1__plain_check_hlds__type_util__type_ctor_info_is_dummy_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_alloc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__stack_alloc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__stack_alloc__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_alloc__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_Integer ll_backend__stack_alloc__ll_backend__stack_alloc__functor_number_map_stack_alloc_0[1];

static const MR_FA_TypeInfo_Struct1 ll_backend__stack_alloc__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__stack_alloc__set_ordlist__ti_set_ordlist_1sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_NotagFunctorDesc ll_backend__stack_alloc__ll_backend__stack_alloc__notag_functor_desc_stack_alloc_0;

static MR_bool MR_CALL 
ll_backend__stack_alloc____Unify____stack_alloc_0_0_10001(
  MR_Box ll_backend__stack_alloc__wrapper_arg_1,
  MR_Box ll_backend__stack_alloc__wrapper_arg_2);

static void MR_CALL 
ll_backend__stack_alloc____Compare____stack_alloc_0_0_10001(
  MR_Box * ll_backend__stack_alloc__wrapper_arg_1,
  MR_Box ll_backend__stack_alloc__wrapper_arg_2,
  MR_Box ll_backend__stack_alloc__wrapper_arg_3);

static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_p_0_10001(
  MR_Box ll_backend__stack_alloc__closure_arg,
  MR_Box ll_backend__stack_alloc__wrapper_arg_1,
  MR_Box ll_backend__stack_alloc__wrapper_arg_2,
  MR_Box ll_backend__stack_alloc__wrapper_arg_3,
  MR_Box * ll_backend__stack_alloc__wrapper_arg_4);

static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_p_0_10001(
  MR_Box ll_backend__stack_alloc__closure_arg,
  MR_Box ll_backend__stack_alloc__wrapper_arg_1,
  MR_Box ll_backend__stack_alloc__wrapper_arg_2,
  MR_Box ll_backend__stack_alloc__wrapper_arg_3,
  MR_Box * ll_backend__stack_alloc__wrapper_arg_4);

static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_p_0_10001(
  MR_Box ll_backend__stack_alloc__closure_arg,
  MR_Box ll_backend__stack_alloc__wrapper_arg_1,
  MR_Box ll_backend__stack_alloc__wrapper_arg_2,
  MR_Box ll_backend__stack_alloc__wrapper_arg_3,
  MR_Box * ll_backend__stack_alloc__wrapper_arg_4);

static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_recursive_call_for_loop_control_4_4_p_0_10001(
  MR_Box ll_backend__stack_alloc__closure_arg,
  MR_Box ll_backend__stack_alloc__wrapper_arg_1,
  MR_Box ll_backend__stack_alloc__wrapper_arg_2,
  MR_Box ll_backend__stack_alloc__wrapper_arg_3,
  MR_Box * ll_backend__stack_alloc__wrapper_arg_4);

static MR_bool MR_CALL 
ll_backend__stack_alloc__IntroducedFrom__pred__allocate_next_stack_slot__294__1_2_p_0(
  MR_Word ll_backend__stack_alloc__StackSlotWidth_10,
  MR_Word ll_backend__stack_alloc__HeadVar__2_29);

static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_recursive_call_for_loop_control_4_4_p_0_1(
  MR_Box ll_backend__stack_alloc__closure_arg,
  MR_Box ll_backend__stack_alloc__wrapper_arg_1,
  MR_Box ll_backend__stack_alloc__wrapper_arg_2,
  MR_Box * ll_backend__stack_alloc__wrapper_arg_3);

static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_recursive_call_for_loop_control_4_4_p_0(
  MR_Word ll_backend__stack_alloc__HeadVar__1_1,
  MR_Word ll_backend__stack_alloc__HeadVar__2_2,
  MR_Word ll_backend__stack_alloc__HeadVar__3_3,
  MR_Word * ll_backend__stack_alloc__HeadVar__4_4);

static MR_bool MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_p_0_1(
  MR_Box ll_backend__stack_alloc__closure_arg,
  MR_Box ll_backend__stack_alloc__wrapper_arg_1);

static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_p_0(
  MR_Word ll_backend__stack_alloc__HeadVar__1_1,
  MR_Word ll_backend__stack_alloc__HeadVar__2_2,
  MR_Word ll_backend__stack_alloc__HeadVar__3_3,
  MR_Word * ll_backend__stack_alloc__HeadVar__4_4);

static MR_bool MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_p_0_1(
  MR_Box ll_backend__stack_alloc__closure_arg,
  MR_Box ll_backend__stack_alloc__wrapper_arg_1);

static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_p_0(
  MR_Word ll_backend__stack_alloc__HeadVar__1_1,
  MR_Word ll_backend__stack_alloc__HeadVar__2_2,
  MR_Word ll_backend__stack_alloc__HeadVar__3_3,
  MR_Word * ll_backend__stack_alloc__HeadVar__4_4);

static MR_bool MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_p_0_1(
  MR_Box ll_backend__stack_alloc__closure_arg,
  MR_Box ll_backend__stack_alloc__wrapper_arg_1);

static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_p_0(
  MR_Word ll_backend__stack_alloc__HeadVar__1_1,
  MR_Word ll_backend__stack_alloc__HeadVar__2_2,
  MR_Word ll_backend__stack_alloc__HeadVar__3_3,
  MR_Word * ll_backend__stack_alloc__HeadVar__4_4);

static void MR_CALL 
ll_backend__stack_alloc____Compare____stack_alloc_0_0(
  MR_Word * ll_backend__stack_alloc__HeadVar__1_1,
  MR_Word ll_backend__stack_alloc__HeadVar__2_2,
  MR_Word ll_backend__stack_alloc__HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__stack_alloc____Unify____stack_alloc_0_0(
  MR_Word ll_backend__stack_alloc__HeadVar__1_1,
  MR_Word ll_backend__stack_alloc__HeadVar__2_2);

static MR_bool MR_CALL 
ll_backend__stack_alloc__var_is_float_2_p_0(
  MR_Word ll_backend__stack_alloc__VarTypes_3,
  MR_Word ll_backend__stack_alloc__Var_4);

static void MR_CALL 
ll_backend__stack_alloc__allocate_dummy_stack_slots_5_p_0(
  MR_Word ll_backend__stack_alloc__MainStack_1,
  MR_Word ll_backend__stack_alloc__HeadVar__2_2,
  MR_Integer ll_backend__stack_alloc__N0_3,
  MR_Word ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0_4,
  MR_Word * ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_5);

static void MR_CALL 
ll_backend__stack_alloc__allocate_given_stack_slot_4_p_0(
  MR_Word ll_backend__stack_alloc__HeadVar__1_1,
  MR_Word ll_backend__stack_alloc__HeadVar__2_2,
  MR_Word ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0_3,
  MR_Word * ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_4);

static MR_bool MR_CALL 
ll_backend__stack_alloc__allocate_next_stack_slot_8_p_0_1(
  MR_Box ll_backend__stack_alloc__closure_arg);

static void MR_CALL 
ll_backend__stack_alloc__allocate_next_stack_slot_8_p_0(
  MR_Word ll_backend__stack_alloc__MainStack_9,
  MR_Word ll_backend__stack_alloc__StackSlotWidth_10,
  MR_Word ll_backend__stack_alloc__MaybeReservedVarInfo_11,
  MR_Word ll_backend__stack_alloc__Vars_12,
  MR_Integer ll_backend__stack_alloc__STATE_VARIABLE_FirstFreeSlot_0_20,
  MR_Integer * ll_backend__stack_alloc__STATE_VARIABLE_FirstFreeSlot_21,
  MR_Word ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0_22,
  MR_Word * ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_23);

static MR_bool MR_CALL 
ll_backend__stack_alloc__allocate_stack_slots_to_colours_7_p_0_2(
  MR_Box ll_backend__stack_alloc__closure_arg,
  MR_Box ll_backend__stack_alloc__wrapper_arg_1);

static MR_bool MR_CALL 
ll_backend__stack_alloc__allocate_stack_slots_to_colours_7_p_0_1(
  MR_Box ll_backend__stack_alloc__closure_arg);

static void MR_CALL 
ll_backend__stack_alloc__allocate_stack_slots_to_colours_7_p_0(
  MR_Word ll_backend__stack_alloc__MainStack_1,
  MR_Word ll_backend__stack_alloc__MaybeDoubleWidthFloats_2,
  MR_Word ll_backend__stack_alloc__MaybeReservedVarInfo_3,
  MR_Word ll_backend__stack_alloc__HeadVar__4_4,
  MR_Integer ll_backend__stack_alloc__STATE_VARIABLE_FirstFreeSlot_0_5,
  MR_Word ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0_6,
  MR_Word * ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_7);

static MR_bool MR_CALL 
ll_backend__stack_alloc__var_is_not_dummy_2_p_0(
  MR_ArrayPtr ll_backend__stack_alloc__DummyVarArray_3,
  MR_Word ll_backend__stack_alloc__Var_4);

static MR_bool MR_CALL 
ll_backend__stack_alloc__set_for_loop_control_4_p_0_1(
  MR_Box ll_backend__stack_alloc__closure_arg,
  MR_Box ll_backend__stack_alloc__wrapper_arg_1);

static void MR_CALL 
ll_backend__stack_alloc__set_for_loop_control_4_p_0(
  MR_Word ll_backend__stack_alloc__AllocData_5,
  MR_Word ll_backend__stack_alloc__Set0_6,
  MR_Word ll_backend__stack_alloc__STATE_VARIABLE_StackAlloc_0_11,
  MR_Word * ll_backend__stack_alloc__STATE_VARIABLE_StackAlloc_12);


static /* final */ const MR_Box ll_backend__stack_alloc_scalar_common_1[4][2];

static /* final */ const MR_Box ll_backend__stack_alloc_scalar_common_2[1][3];

static /* final */ const MR_Box ll_backend__stack_alloc_scalar_common_3[4][5];

static /* final */ const MR_Box ll_backend__stack_alloc_scalar_common_4[1][7];




static /* final */ const MR_Box ll_backend__stack_alloc_scalar_common_1[4][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1)),
    ((MR_Box) (&ll_backend__stack_alloc_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (base_typeclass_info_ll_backend__live_vars__stack_alloc_info__arity1__ll_backend__stack_alloc__stack_alloc__arity0__)),
    ((MR_Box) (&ll_backend__stack_alloc__ll_backend__stack_alloc__type_ctor_info_stack_alloc_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&ll_backend__stack_alloc_scalar_common_1[1]))
  },
};

static /* final */ const MR_Box ll_backend__stack_alloc_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ll_backend__stack_alloc_scalar_common_1[0]))
  },
};

static /* final */ const MR_Box ll_backend__stack_alloc_scalar_common_3[4][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__stack_alloc__array__pti_array_1__plain_check_hlds__type_util__type_ctor_info_is_dummy_type_0)),
    ((MR_Box) (&ll_backend__stack_alloc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_width_0)),
    ((MR_Box) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_width_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&ll_backend__stack_alloc_scalar_common_3[1])),
    ((MR_Box) (ll_backend__stack_alloc__allocate_stack_slots_to_colours_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__stack_alloc__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&ll_backend__stack_alloc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box ll_backend__stack_alloc_scalar_common_4[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ll_backend__live_vars__ll_backend__live_vars__type_ctor_info_alloc_data_0)),
    ((MR_Box) (&ll_backend__stack_alloc__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ll_backend__stack_alloc__ll_backend__stack_alloc__type_ctor_info_stack_alloc_0)),
    ((MR_Box) (&ll_backend__stack_alloc__ll_backend__stack_alloc__type_ctor_info_stack_alloc_0))
  },
};



#include "array.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_alloc__array__pti_array_1__plain_check_hlds__type_util__type_ctor_info_is_dummy_type_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__type_util__check_hlds__type_util__type_ctor_info_is_dummy_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_alloc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__stack_alloc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__stack_alloc__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &ll_backend__stack_alloc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_alloc__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__stack_alloc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_Integer ll_backend__stack_alloc__ll_backend__stack_alloc__functor_number_map_stack_alloc_0[1] = {
  (MR_Integer) 0
};

static const MR_FA_TypeInfo_Struct1 ll_backend__stack_alloc__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_TypeInfo) &ll_backend__stack_alloc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__stack_alloc__set_ordlist__ti_set_ordlist_1sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &ll_backend__stack_alloc__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_NotagFunctorDesc ll_backend__stack_alloc__ll_backend__stack_alloc__notag_functor_desc_stack_alloc_0 = {
  (MR_String) "stack_alloc",
  (MR_PseudoTypeInfo) &ll_backend__stack_alloc__set_ordlist__ti_set_ordlist_1sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  NULL
};

const MR_TypeCtorInfo_Struct ll_backend__stack_alloc__ll_backend__stack_alloc__type_ctor_info_stack_alloc_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (ll_backend__stack_alloc____Unify____stack_alloc_0_0_10001)),
  ((MR_Box) (ll_backend__stack_alloc____Compare____stack_alloc_0_0_10001)),
  (MR_String) "ll_backend.stack_alloc",
  (MR_String) "stack_alloc",
  {     &ll_backend__stack_alloc__ll_backend__stack_alloc__notag_functor_desc_stack_alloc_0 },
  {     &ll_backend__stack_alloc__ll_backend__stack_alloc__notag_functor_desc_stack_alloc_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__stack_alloc__ll_backend__stack_alloc__functor_number_map_stack_alloc_0
};

const MR_BaseTypeclassInfo base_typeclass_info_ll_backend__live_vars__stack_alloc_info__arity1__ll_backend__stack_alloc__stack_alloc__arity0__[9] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 4)),
  ((MR_Box) (ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_p_0_10001)),
  ((MR_Box) (ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_p_0_10001)),
  ((MR_Box) (ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_p_0_10001)),
  ((MR_Box) (ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_recursive_call_for_loop_control_4_4_p_0_10001))
};

static MR_bool MR_CALL 
ll_backend__stack_alloc____Unify____stack_alloc_0_0_10001(
  MR_Box ll_backend__stack_alloc__wrapper_arg_1,
  MR_Box ll_backend__stack_alloc__wrapper_arg_2)
{
  {
    MR_bool ll_backend__stack_alloc__succeeded;

    {
      ll_backend__stack_alloc__succeeded = ll_backend__stack_alloc____Unify____stack_alloc_0_0(((MR_Word) ll_backend__stack_alloc__wrapper_arg_1), ((MR_Word) ll_backend__stack_alloc__wrapper_arg_2));
    }
    return ll_backend__stack_alloc__succeeded;
  }
}

static void MR_CALL 
ll_backend__stack_alloc____Compare____stack_alloc_0_0_10001(
  MR_Box * ll_backend__stack_alloc__wrapper_arg_1,
  MR_Box ll_backend__stack_alloc__wrapper_arg_2,
  MR_Box ll_backend__stack_alloc__wrapper_arg_3)
{
  {
    MR_Word ll_backend__stack_alloc__conv0_HeadVar__1_1;

    {
      ll_backend__stack_alloc____Compare____stack_alloc_0_0(&ll_backend__stack_alloc__conv0_HeadVar__1_1, ((MR_Word) ll_backend__stack_alloc__wrapper_arg_2), ((MR_Word) ll_backend__stack_alloc__wrapper_arg_3));
    }
    *ll_backend__stack_alloc__wrapper_arg_1 = ((MR_Box) (ll_backend__stack_alloc__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_p_0_10001(
  MR_Box ll_backend__stack_alloc__closure_arg,
  MR_Box ll_backend__stack_alloc__wrapper_arg_1,
  MR_Box ll_backend__stack_alloc__wrapper_arg_2,
  MR_Box ll_backend__stack_alloc__wrapper_arg_3,
  MR_Box * ll_backend__stack_alloc__wrapper_arg_4)
{
  {
    MR_Box ll_backend__stack_alloc__closure;
    MR_Word ll_backend__stack_alloc__conv0_HeadVar__4_4;

    ll_backend__stack_alloc__closure = ll_backend__stack_alloc__closure_arg;
    {
      ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_p_0(((MR_Word) ll_backend__stack_alloc__wrapper_arg_1), ((MR_Word) ll_backend__stack_alloc__wrapper_arg_2), ((MR_Word) ll_backend__stack_alloc__wrapper_arg_3), &ll_backend__stack_alloc__conv0_HeadVar__4_4);
    }
    *ll_backend__stack_alloc__wrapper_arg_4 = ((MR_Box) (ll_backend__stack_alloc__conv0_HeadVar__4_4));
  }
}

static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_p_0_10001(
  MR_Box ll_backend__stack_alloc__closure_arg,
  MR_Box ll_backend__stack_alloc__wrapper_arg_1,
  MR_Box ll_backend__stack_alloc__wrapper_arg_2,
  MR_Box ll_backend__stack_alloc__wrapper_arg_3,
  MR_Box * ll_backend__stack_alloc__wrapper_arg_4)
{
  {
    MR_Box ll_backend__stack_alloc__closure;
    MR_Word ll_backend__stack_alloc__conv0_HeadVar__4_4;

    ll_backend__stack_alloc__closure = ll_backend__stack_alloc__closure_arg;
    {
      ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_p_0(((MR_Word) ll_backend__stack_alloc__wrapper_arg_1), ((MR_Word) ll_backend__stack_alloc__wrapper_arg_2), ((MR_Word) ll_backend__stack_alloc__wrapper_arg_3), &ll_backend__stack_alloc__conv0_HeadVar__4_4);
    }
    *ll_backend__stack_alloc__wrapper_arg_4 = ((MR_Box) (ll_backend__stack_alloc__conv0_HeadVar__4_4));
  }
}

static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_p_0_10001(
  MR_Box ll_backend__stack_alloc__closure_arg,
  MR_Box ll_backend__stack_alloc__wrapper_arg_1,
  MR_Box ll_backend__stack_alloc__wrapper_arg_2,
  MR_Box ll_backend__stack_alloc__wrapper_arg_3,
  MR_Box * ll_backend__stack_alloc__wrapper_arg_4)
{
  {
    MR_Box ll_backend__stack_alloc__closure;
    MR_Word ll_backend__stack_alloc__conv0_HeadVar__4_4;

    ll_backend__stack_alloc__closure = ll_backend__stack_alloc__closure_arg;
    {
      ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_p_0(((MR_Word) ll_backend__stack_alloc__wrapper_arg_1), ((MR_Word) ll_backend__stack_alloc__wrapper_arg_2), ((MR_Word) ll_backend__stack_alloc__wrapper_arg_3), &ll_backend__stack_alloc__conv0_HeadVar__4_4);
    }
    *ll_backend__stack_alloc__wrapper_arg_4 = ((MR_Box) (ll_backend__stack_alloc__conv0_HeadVar__4_4));
  }
}

static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_recursive_call_for_loop_control_4_4_p_0_10001(
  MR_Box ll_backend__stack_alloc__closure_arg,
  MR_Box ll_backend__stack_alloc__wrapper_arg_1,
  MR_Box ll_backend__stack_alloc__wrapper_arg_2,
  MR_Box ll_backend__stack_alloc__wrapper_arg_3,
  MR_Box * ll_backend__stack_alloc__wrapper_arg_4)
{
  {
    MR_Box ll_backend__stack_alloc__closure;
    MR_Word ll_backend__stack_alloc__conv0_HeadVar__4_4;

    ll_backend__stack_alloc__closure = ll_backend__stack_alloc__closure_arg;
    {
      ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_recursive_call_for_loop_control_4_4_p_0(((MR_Word) ll_backend__stack_alloc__wrapper_arg_1), ((MR_Word) ll_backend__stack_alloc__wrapper_arg_2), ((MR_Word) ll_backend__stack_alloc__wrapper_arg_3), &ll_backend__stack_alloc__conv0_HeadVar__4_4);
    }
    *ll_backend__stack_alloc__wrapper_arg_4 = ((MR_Box) (ll_backend__stack_alloc__conv0_HeadVar__4_4));
  }
}

static MR_bool MR_CALL 
ll_backend__stack_alloc__IntroducedFrom__pred__allocate_next_stack_slot__294__1_2_p_0(
  MR_Word ll_backend__stack_alloc__StackSlotWidth_10,
  MR_Word ll_backend__stack_alloc__HeadVar__2_29)
{
  {
    MR_bool ll_backend__stack_alloc__succeeded = (ll_backend__stack_alloc__StackSlotWidth_10 == ll_backend__stack_alloc__HeadVar__2_29);

    return ll_backend__stack_alloc__succeeded;
  }
}

static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_recursive_call_for_loop_control_4_4_p_0_1(
  MR_Box ll_backend__stack_alloc__closure_arg,
  MR_Box ll_backend__stack_alloc__wrapper_arg_1,
  MR_Box ll_backend__stack_alloc__wrapper_arg_2,
  MR_Box * ll_backend__stack_alloc__wrapper_arg_3)
{
  {
    MR_Box ll_backend__stack_alloc__closure = ll_backend__stack_alloc__closure_arg;
    MR_Word ll_backend__stack_alloc__conv0_STATE_VARIABLE_StackAlloc_12;

    {
      ll_backend__stack_alloc__set_for_loop_control_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__stack_alloc__wrapper_arg_1), ((MR_Word) ll_backend__stack_alloc__wrapper_arg_2), &ll_backend__stack_alloc__conv0_STATE_VARIABLE_StackAlloc_12);
    }
    *ll_backend__stack_alloc__wrapper_arg_3 = ((MR_Box) (ll_backend__stack_alloc__conv0_STATE_VARIABLE_StackAlloc_12));
  }
}

static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_recursive_call_for_loop_control_4_4_p_0(
  MR_Word ll_backend__stack_alloc__HeadVar__1_1,
  MR_Word ll_backend__stack_alloc__HeadVar__2_2,
  MR_Word ll_backend__stack_alloc__HeadVar__3_3,
  MR_Word * ll_backend__stack_alloc__HeadVar__4_4)
{
  {
    MR_bool ll_backend__stack_alloc__succeeded;
    MR_Word ll_backend__stack_alloc__StackVarsSets_10 = (MR_Word) ll_backend__stack_alloc__HeadVar__1_1;
    MR_Word ll_backend__stack_alloc__V_11_11;
    MR_Box ll_backend__stack_alloc__conv1_HeadVar__4_4;

    {
      ll_backend__stack_alloc__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_11_11, 0) = ((MR_Box) (&ll_backend__stack_alloc_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_11_11, 1) = ((MR_Box) (ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_recursive_call_for_loop_control_4_4_p_0_1));
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_11_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_11_11, 3) = ((MR_Box) (ll_backend__stack_alloc__HeadVar__2_2));
    }
    {
      mercury__list__foldl_4_p_0((MR_Word) &ll_backend__stack_alloc_scalar_common_1[1], (MR_Word) &ll_backend__stack_alloc__ll_backend__stack_alloc__type_ctor_info_stack_alloc_0, ll_backend__stack_alloc__V_11_11, ll_backend__stack_alloc__StackVarsSets_10, ((MR_Box) (ll_backend__stack_alloc__HeadVar__3_3)), &ll_backend__stack_alloc__conv1_HeadVar__4_4);
    }
    *ll_backend__stack_alloc__HeadVar__4_4 = ((MR_Word) ll_backend__stack_alloc__conv1_HeadVar__4_4);
  }
}

static MR_bool MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_p_0_1(
  MR_Box ll_backend__stack_alloc__closure_arg,
  MR_Box ll_backend__stack_alloc__wrapper_arg_1)
{
  {
    MR_bool ll_backend__stack_alloc__succeeded;
    MR_Box ll_backend__stack_alloc__closure = ll_backend__stack_alloc__closure_arg;

    {
      ll_backend__stack_alloc__succeeded = ll_backend__stack_alloc__var_is_not_dummy_2_p_0(((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__stack_alloc__wrapper_arg_1));
    }
    return ll_backend__stack_alloc__succeeded;
  }
}

static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_p_0(
  MR_Word ll_backend__stack_alloc__HeadVar__1_1,
  MR_Word ll_backend__stack_alloc__HeadVar__2_2,
  MR_Word ll_backend__stack_alloc__HeadVar__3_3,
  MR_Word * ll_backend__stack_alloc__HeadVar__4_4)
{
  {
    MR_bool ll_backend__stack_alloc__succeeded;
    MR_Word ll_backend__stack_alloc__StackVars0_10 = (MR_Word) ll_backend__stack_alloc__HeadVar__1_1;
    MR_Word ll_backend__stack_alloc__StackVars_11;
    MR_Word ll_backend__stack_alloc__LiveSets0_12;
    MR_Word ll_backend__stack_alloc__LiveSets_13;
    MR_ArrayPtr ll_backend__stack_alloc__DummyVarArray_19 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 5)));
    MR_Word ll_backend__stack_alloc__V_20_20;
    MR_Word ll_backend__stack_alloc__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word ll_backend__stack_alloc__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 1)));
    MR_Word ll_backend__stack_alloc__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 2)));
    MR_Word ll_backend__stack_alloc__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 3)));
    MR_Word ll_backend__stack_alloc__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 4)));

    {
      ll_backend__stack_alloc__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_20_20, 0) = ((MR_Box) (&ll_backend__stack_alloc_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_20_20, 1) = ((MR_Box) (ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_p_0_1));
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_20_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_20_20, 3) = ((MR_Box) (ll_backend__stack_alloc__DummyVarArray_19));
    }
    {
      parse_tree__set_of_var__filter_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__stack_alloc__V_20_20, ll_backend__stack_alloc__StackVars0_10, &ll_backend__stack_alloc__StackVars_11);
    }
    ll_backend__stack_alloc__LiveSets0_12 = (MR_Word) ll_backend__stack_alloc__HeadVar__3_3;
    {
      ll_backend__stack_alloc__LiveSets_13 = mercury__set__insert_2_f_0((MR_Word) &ll_backend__stack_alloc_scalar_common_1[1], ll_backend__stack_alloc__LiveSets0_12, ((MR_Box) (ll_backend__stack_alloc__StackVars_11)));
    }
    *ll_backend__stack_alloc__HeadVar__4_4 = (MR_Word) ll_backend__stack_alloc__LiveSets_13;
  }
}

static MR_bool MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_p_0_1(
  MR_Box ll_backend__stack_alloc__closure_arg,
  MR_Box ll_backend__stack_alloc__wrapper_arg_1)
{
  {
    MR_bool ll_backend__stack_alloc__succeeded;
    MR_Box ll_backend__stack_alloc__closure = ll_backend__stack_alloc__closure_arg;

    {
      ll_backend__stack_alloc__succeeded = ll_backend__stack_alloc__var_is_not_dummy_2_p_0(((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__stack_alloc__wrapper_arg_1));
    }
    return ll_backend__stack_alloc__succeeded;
  }
}

static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_p_0(
  MR_Word ll_backend__stack_alloc__HeadVar__1_1,
  MR_Word ll_backend__stack_alloc__HeadVar__2_2,
  MR_Word ll_backend__stack_alloc__HeadVar__3_3,
  MR_Word * ll_backend__stack_alloc__HeadVar__4_4)
{
  {
    MR_bool ll_backend__stack_alloc__succeeded;
    MR_Word ll_backend__stack_alloc__ResumeOnStack_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word ll_backend__stack_alloc__ResumeVars_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word ll_backend__stack_alloc__NondetLiveVars_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__1_1, (MR_Integer) 2)));

    switch (ll_backend__stack_alloc__ResumeOnStack_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *ll_backend__stack_alloc__HeadVar__4_4 = ll_backend__stack_alloc__HeadVar__3_3;
        break;
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__stack_alloc__LiveSet0_13;
          MR_Word ll_backend__stack_alloc__LiveSet_14;
          MR_Word ll_backend__stack_alloc__LiveSets0_15;
          MR_Word ll_backend__stack_alloc__LiveSets_16;
          MR_ArrayPtr ll_backend__stack_alloc__DummyVarArray_23;
          MR_Word ll_backend__stack_alloc__V_24_24;
          MR_Word ll_backend__stack_alloc__V_25_25;
          MR_Word ll_backend__stack_alloc__V_26_26;
          MR_Word ll_backend__stack_alloc__V_27_27;
          MR_Word ll_backend__stack_alloc__V_28_28;
          MR_Word ll_backend__stack_alloc__V_29_29;

          {
            ll_backend__stack_alloc__LiveSet0_13 = parse_tree__set_of_var__union_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__stack_alloc__ResumeVars_11, ll_backend__stack_alloc__NondetLiveVars_12);
          }
          ll_backend__stack_alloc__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 0)));
          ll_backend__stack_alloc__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 1)));
          ll_backend__stack_alloc__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 2)));
          ll_backend__stack_alloc__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 3)));
          ll_backend__stack_alloc__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 4)));
          ll_backend__stack_alloc__DummyVarArray_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 5)));
          {
            ll_backend__stack_alloc__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_24_24, 0) = ((MR_Box) (&ll_backend__stack_alloc_scalar_common_3[0]));
            MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_24_24, 1) = ((MR_Box) (ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_p_0_1));
            MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_24_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_24_24, 3) = ((MR_Box) (ll_backend__stack_alloc__DummyVarArray_23));
          }
          {
            parse_tree__set_of_var__filter_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__stack_alloc__V_24_24, ll_backend__stack_alloc__LiveSet0_13, &ll_backend__stack_alloc__LiveSet_14);
          }
          ll_backend__stack_alloc__LiveSets0_15 = (MR_Word) ll_backend__stack_alloc__HeadVar__3_3;
          {
            ll_backend__stack_alloc__LiveSets_16 = mercury__set__insert_2_f_0((MR_Word) &ll_backend__stack_alloc_scalar_common_1[1], ll_backend__stack_alloc__LiveSets0_15, ((MR_Box) (ll_backend__stack_alloc__LiveSet_14)));
          }
          *ll_backend__stack_alloc__HeadVar__4_4 = (MR_Word) ll_backend__stack_alloc__LiveSets_16;
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_p_0_1(
  MR_Box ll_backend__stack_alloc__closure_arg,
  MR_Box ll_backend__stack_alloc__wrapper_arg_1)
{
  {
    MR_bool ll_backend__stack_alloc__succeeded;
    MR_Box ll_backend__stack_alloc__closure = ll_backend__stack_alloc__closure_arg;

    {
      ll_backend__stack_alloc__succeeded = ll_backend__stack_alloc__var_is_not_dummy_2_p_0(((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__stack_alloc__wrapper_arg_1));
    }
    return ll_backend__stack_alloc__succeeded;
  }
}

static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_p_0(
  MR_Word ll_backend__stack_alloc__HeadVar__1_1,
  MR_Word ll_backend__stack_alloc__HeadVar__2_2,
  MR_Word ll_backend__stack_alloc__HeadVar__3_3,
  MR_Word * ll_backend__stack_alloc__HeadVar__4_4)
{
  {
    MR_bool ll_backend__stack_alloc__succeeded;
    MR_Word ll_backend__stack_alloc__ForwardVars_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word ll_backend__stack_alloc__ResumeVars_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word ll_backend__stack_alloc__NondetLiveVars_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__1_1, (MR_Integer) 2)));
    MR_Word ll_backend__stack_alloc__LiveSet0_13;
    MR_Word ll_backend__stack_alloc__LiveSet_14;
    MR_Word ll_backend__stack_alloc__LiveSets0_15;
    MR_Word ll_backend__stack_alloc__LiveSets_16;
    MR_Word ll_backend__stack_alloc__V_17_17;
    MR_Word ll_backend__stack_alloc__V_18_18;
    MR_Word ll_backend__stack_alloc__V_19_19;
    MR_ArrayPtr ll_backend__stack_alloc__DummyVarArray_27;
    MR_Word ll_backend__stack_alloc__V_28_28;
    MR_Word ll_backend__stack_alloc__V_29_29;
    MR_Word ll_backend__stack_alloc__V_30_30;
    MR_Word ll_backend__stack_alloc__V_31_31;
    MR_Word ll_backend__stack_alloc__V_32_32;
    MR_Word ll_backend__stack_alloc__V_33_33;

    {
      ll_backend__stack_alloc__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__stack_alloc__V_19_19, 0) = ((MR_Box) (ll_backend__stack_alloc__NondetLiveVars_12));
      MR_hl_field(MR_mktag(1), ll_backend__stack_alloc__V_19_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ll_backend__stack_alloc__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__stack_alloc__V_18_18, 0) = ((MR_Box) (ll_backend__stack_alloc__ResumeVars_11));
      MR_hl_field(MR_mktag(1), ll_backend__stack_alloc__V_18_18, 1) = ((MR_Box) (ll_backend__stack_alloc__V_19_19));
    }
    {
      ll_backend__stack_alloc__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__stack_alloc__V_17_17, 0) = ((MR_Box) (ll_backend__stack_alloc__ForwardVars_10));
      MR_hl_field(MR_mktag(1), ll_backend__stack_alloc__V_17_17, 1) = ((MR_Box) (ll_backend__stack_alloc__V_18_18));
    }
    {
      ll_backend__stack_alloc__LiveSet0_13 = parse_tree__set_of_var__union_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__stack_alloc__V_17_17);
    }
    ll_backend__stack_alloc__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 0)));
    ll_backend__stack_alloc__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 1)));
    ll_backend__stack_alloc__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 2)));
    ll_backend__stack_alloc__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 3)));
    ll_backend__stack_alloc__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 4)));
    ll_backend__stack_alloc__DummyVarArray_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 5)));
    {
      ll_backend__stack_alloc__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_28_28, 0) = ((MR_Box) (&ll_backend__stack_alloc_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_28_28, 1) = ((MR_Box) (ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_p_0_1));
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_28_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_28_28, 3) = ((MR_Box) (ll_backend__stack_alloc__DummyVarArray_27));
    }
    {
      parse_tree__set_of_var__filter_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__stack_alloc__V_28_28, ll_backend__stack_alloc__LiveSet0_13, &ll_backend__stack_alloc__LiveSet_14);
    }
    ll_backend__stack_alloc__LiveSets0_15 = (MR_Word) ll_backend__stack_alloc__HeadVar__3_3;
    {
      ll_backend__stack_alloc__LiveSets_16 = mercury__set__insert_2_f_0((MR_Word) &ll_backend__stack_alloc_scalar_common_1[1], ll_backend__stack_alloc__LiveSets0_15, ((MR_Box) (ll_backend__stack_alloc__LiveSet_14)));
    }
    *ll_backend__stack_alloc__HeadVar__4_4 = (MR_Word) ll_backend__stack_alloc__LiveSets_16;
  }
}

static void MR_CALL 
ll_backend__stack_alloc____Compare____stack_alloc_0_0(
  MR_Word * ll_backend__stack_alloc__HeadVar__1_1,
  MR_Word ll_backend__stack_alloc__HeadVar__2_2,
  MR_Word ll_backend__stack_alloc__HeadVar__3_3)
{
  {
    MR_bool ll_backend__stack_alloc__succeeded;
    MR_Integer ll_backend__stack_alloc__CastX_6 = (MR_Integer) ll_backend__stack_alloc__HeadVar__2_2;
    MR_Integer ll_backend__stack_alloc__CastY_7 = (MR_Integer) ll_backend__stack_alloc__HeadVar__3_3;

    ll_backend__stack_alloc__succeeded = (ll_backend__stack_alloc__CastX_6 == ll_backend__stack_alloc__CastY_7);
    if (ll_backend__stack_alloc__succeeded)
      *ll_backend__stack_alloc__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word ll_backend__stack_alloc__V_4_4 = (MR_Word) ll_backend__stack_alloc__HeadVar__2_2;
        MR_Word ll_backend__stack_alloc__V_5_5 = (MR_Word) ll_backend__stack_alloc__HeadVar__3_3;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_alloc_scalar_common_1[3], ll_backend__stack_alloc__HeadVar__1_1, ((MR_Box) (ll_backend__stack_alloc__V_4_4)), ((MR_Box) (ll_backend__stack_alloc__V_5_5)));
        }
      }
  }
}

static MR_bool MR_CALL 
ll_backend__stack_alloc____Unify____stack_alloc_0_0(
  MR_Word ll_backend__stack_alloc__HeadVar__1_1,
  MR_Word ll_backend__stack_alloc__HeadVar__2_2)
{
  {
    MR_bool ll_backend__stack_alloc__succeeded;
    MR_Integer ll_backend__stack_alloc__CastX_5 = (MR_Integer) ll_backend__stack_alloc__HeadVar__1_1;
    MR_Integer ll_backend__stack_alloc__CastY_6 = (MR_Integer) ll_backend__stack_alloc__HeadVar__2_2;

    ll_backend__stack_alloc__succeeded = (ll_backend__stack_alloc__CastX_5 == ll_backend__stack_alloc__CastY_6);
    if (ll_backend__stack_alloc__succeeded)
      ll_backend__stack_alloc__succeeded = MR_TRUE;
    else
      {
        MR_Word ll_backend__stack_alloc__V_3_3 = (MR_Word) ll_backend__stack_alloc__HeadVar__1_1;
        MR_Word ll_backend__stack_alloc__V_4_4 = (MR_Word) ll_backend__stack_alloc__HeadVar__2_2;

        {
          ll_backend__stack_alloc__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__stack_alloc_scalar_common_1[3], ((MR_Box) (ll_backend__stack_alloc__V_3_3)), ((MR_Box) (ll_backend__stack_alloc__V_4_4)));
        }
      }
    return ll_backend__stack_alloc__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__stack_alloc__var_is_float_2_p_0(
  MR_Word ll_backend__stack_alloc__VarTypes_3,
  MR_Word ll_backend__stack_alloc__Var_4)
{
  {
    MR_bool ll_backend__stack_alloc__succeeded;
    MR_Word ll_backend__stack_alloc__V_5_5;
    MR_Word ll_backend__stack_alloc__V_6_6;

    {
      ll_backend__stack_alloc__V_5_5 = parse_tree__builtin_lib_types__float_type_0_f_0();
    }
    {
      hlds__vartypes__lookup_var_type_3_p_0(ll_backend__stack_alloc__VarTypes_3, ll_backend__stack_alloc__Var_4, &ll_backend__stack_alloc__V_6_6);
    }
    {
      ll_backend__stack_alloc__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ll_backend__stack_alloc__V_5_5, ll_backend__stack_alloc__V_6_6);
    }
    return ll_backend__stack_alloc__succeeded;
  }
}

static void MR_CALL 
ll_backend__stack_alloc__allocate_dummy_stack_slots_5_p_0(
  MR_Word ll_backend__stack_alloc__MainStack_1,
  MR_Word ll_backend__stack_alloc__HeadVar__2_2,
  MR_Integer ll_backend__stack_alloc__N0_3,
  MR_Word ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0_4,
  MR_Word * ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__stack_alloc__succeeded;

        if ((ll_backend__stack_alloc__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_5 = ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0_4;
        else
          {
            MR_Word ll_backend__stack_alloc__DummyVars_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word ll_backend__stack_alloc__Locn_16;
            MR_Word ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_21_21;
            MR_Integer ll_backend__stack_alloc__V_23_23;
            MR_Word ll_backend__stack_alloc__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 0)));

            switch (ll_backend__stack_alloc__MainStack_1) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  {
                    ll_backend__stack_alloc__Locn_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__Locn_16, 0) = ((MR_Box) (ll_backend__stack_alloc__N0_3));
                    MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__Locn_16, 1) = ((MR_Box) ((MR_Integer) 0));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  ll_backend__stack_alloc__Locn_16 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), ll_backend__stack_alloc__Locn_16, 0) = ((MR_Box) (ll_backend__stack_alloc__N0_3));
                }
                break;
            }
            {
              mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__stack_alloc_scalar_common_1[0], (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0, ((MR_Box) (ll_backend__stack_alloc__Var_31)), ((MR_Box) (ll_backend__stack_alloc__Locn_16)), ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0_4, &ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_21_21);
            }
            ll_backend__stack_alloc__V_23_23 = (ll_backend__stack_alloc__N0_3 - (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__stack_alloc__HeadVar__2__tmp_copy_2 = ll_backend__stack_alloc__DummyVars_13;
              MR_Integer ll_backend__stack_alloc__N0__tmp_copy_3 = ll_backend__stack_alloc__V_23_23;
              MR_Word ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0__tmp_copy_4 = ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_21_21;

              ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0_4 = ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0__tmp_copy_4;
              ll_backend__stack_alloc__N0_3 = ll_backend__stack_alloc__N0__tmp_copy_3;
              ll_backend__stack_alloc__HeadVar__2_2 = ll_backend__stack_alloc__HeadVar__2__tmp_copy_2;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__stack_alloc__allocate_given_stack_slot_4_p_0(
  MR_Word ll_backend__stack_alloc__HeadVar__1_1,
  MR_Word ll_backend__stack_alloc__HeadVar__2_2,
  MR_Word ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0_3,
  MR_Word * ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__stack_alloc__succeeded;

        if ((ll_backend__stack_alloc__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_4 = ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0_3;
        else
          {
            MR_Word ll_backend__stack_alloc__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word ll_backend__stack_alloc__Vars_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_15_15;

            {
              mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__stack_alloc_scalar_common_1[0], (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0, ((MR_Box) (ll_backend__stack_alloc__Var_10)), ((MR_Box) (ll_backend__stack_alloc__HeadVar__1_1)), ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0_3, &ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_15_15);
            }
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__stack_alloc__HeadVar__2__tmp_copy_2 = ll_backend__stack_alloc__Vars_11;
              MR_Word ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0__tmp_copy_3 = ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_15_15;

              ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0_3 = ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0__tmp_copy_3;
              ll_backend__stack_alloc__HeadVar__2_2 = ll_backend__stack_alloc__HeadVar__2__tmp_copy_2;
            }
            continue;
          }
      }
      break;
    }
}

static MR_bool MR_CALL 
ll_backend__stack_alloc__allocate_next_stack_slot_8_p_0_1(
  MR_Box ll_backend__stack_alloc__closure_arg)
{
  {
    MR_bool ll_backend__stack_alloc__succeeded;
    MR_Box ll_backend__stack_alloc__closure = ll_backend__stack_alloc__closure_arg;

    {
      ll_backend__stack_alloc__succeeded = ll_backend__stack_alloc__IntroducedFrom__pred__allocate_next_stack_slot__294__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__closure, (MR_Integer) 4))));
    }
    return ll_backend__stack_alloc__succeeded;
  }
}

static void MR_CALL 
ll_backend__stack_alloc__allocate_next_stack_slot_8_p_0(
  MR_Word ll_backend__stack_alloc__MainStack_9,
  MR_Word ll_backend__stack_alloc__StackSlotWidth_10,
  MR_Word ll_backend__stack_alloc__MaybeReservedVarInfo_11,
  MR_Word ll_backend__stack_alloc__Vars_12,
  MR_Integer ll_backend__stack_alloc__STATE_VARIABLE_FirstFreeSlot_0_20,
  MR_Integer * ll_backend__stack_alloc__STATE_VARIABLE_FirstFreeSlot_21,
  MR_Word ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0_22,
  MR_Word * ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_23)
{
  {
    MR_bool ll_backend__stack_alloc__succeeded = ((MR_tag((MR_Word) ll_backend__stack_alloc__MaybeReservedVarInfo_11)) == (MR_mktag((MR_Integer) 1)));
    MR_Integer ll_backend__stack_alloc__SlotNum_17;
    MR_Word ll_backend__stack_alloc__Locn_18;
    MR_Word ll_backend__stack_alloc__VarList_19;
    MR_Integer ll_backend__stack_alloc__ResSlotNum_16;
    MR_Word ll_backend__stack_alloc__TypeCtorInfo_32_32;
    MR_Word ll_backend__stack_alloc__ResVar_15;
    MR_Word ll_backend__stack_alloc__V_24_24;

    if (ll_backend__stack_alloc__succeeded)
      {
        ll_backend__stack_alloc__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_alloc__MaybeReservedVarInfo_11, (MR_Integer) 0)));
        ll_backend__stack_alloc__ResVar_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_24_24, (MR_Integer) 0)));
        ll_backend__stack_alloc__ResSlotNum_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_24_24, (MR_Integer) 1)));
        ll_backend__stack_alloc__TypeCtorInfo_32_32 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
        {
          ll_backend__stack_alloc__succeeded = parse_tree__set_of_var__member_2_p_0(ll_backend__stack_alloc__TypeCtorInfo_32_32, ll_backend__stack_alloc__Vars_12, ll_backend__stack_alloc__ResVar_15);
        }
      }
    if (ll_backend__stack_alloc__succeeded)
      {
        MR_Word ll_backend__stack_alloc__V_25_25;

        {
          ll_backend__stack_alloc__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_25_25, 0) = ((MR_Box) (&ll_backend__stack_alloc_scalar_common_3[1]));
          MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_25_25, 1) = ((MR_Box) (ll_backend__stack_alloc__allocate_next_stack_slot_8_p_0_1));
          MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_25_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_25_25, 3) = ((MR_Box) (ll_backend__stack_alloc__StackSlotWidth_10));
          MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_25_25, 4) = ((MR_Box) ((MR_Integer) 0));
        }
        {
          mercury__require__expect_4_p_0(ll_backend__stack_alloc__V_25_25, (MR_String) "ll_backend.stack_alloc", (MR_String) "predicate \140ll_backend.stack_alloc.allocate_next_stack_slot\'/8", (MR_String) "reserved multiple stack slots");
        }
        ll_backend__stack_alloc__SlotNum_17 = ll_backend__stack_alloc__ResSlotNum_16;
        *ll_backend__stack_alloc__STATE_VARIABLE_FirstFreeSlot_21 = ll_backend__stack_alloc__STATE_VARIABLE_FirstFreeSlot_0_20;
      }
    else
      {
        ll_backend__stack_alloc__SlotNum_17 = ll_backend__stack_alloc__STATE_VARIABLE_FirstFreeSlot_0_20;
        switch (ll_backend__stack_alloc__StackSlotWidth_10) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              *ll_backend__stack_alloc__STATE_VARIABLE_FirstFreeSlot_21 = (ll_backend__stack_alloc__STATE_VARIABLE_FirstFreeSlot_0_20 + (MR_Integer) 2);
            }
            break;
          case (MR_Integer) 0:
            {
              *ll_backend__stack_alloc__STATE_VARIABLE_FirstFreeSlot_21 = (ll_backend__stack_alloc__STATE_VARIABLE_FirstFreeSlot_0_20 + (MR_Integer) 1);
            }
            break;
        }
      }
    switch (ll_backend__stack_alloc__MainStack_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          ll_backend__stack_alloc__Locn_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__Locn_18, 0) = ((MR_Box) (ll_backend__stack_alloc__SlotNum_17));
          MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__Locn_18, 1) = ((MR_Box) (ll_backend__stack_alloc__StackSlotWidth_10));
        }
        break;
      case (MR_Integer) 1:
        {
          ll_backend__stack_alloc__Locn_18 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), ll_backend__stack_alloc__Locn_18, 0) = ((MR_Box) (ll_backend__stack_alloc__SlotNum_17));
        }
        break;
    }
    {
      ll_backend__stack_alloc__VarList_19 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__stack_alloc__Vars_12);
    }
    {
      ll_backend__stack_alloc__allocate_given_stack_slot_4_p_0(ll_backend__stack_alloc__Locn_18, ll_backend__stack_alloc__VarList_19, ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0_22, ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_23);
    }
  }
}

static MR_bool MR_CALL 
ll_backend__stack_alloc__allocate_stack_slots_to_colours_7_p_0_2(
  MR_Box ll_backend__stack_alloc__closure_arg,
  MR_Box ll_backend__stack_alloc__wrapper_arg_1)
{
  {
    MR_bool ll_backend__stack_alloc__succeeded;
    MR_Box ll_backend__stack_alloc__closure = ll_backend__stack_alloc__closure_arg;

    {
      ll_backend__stack_alloc__succeeded = ll_backend__stack_alloc__var_is_float_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__stack_alloc__wrapper_arg_1));
    }
    return ll_backend__stack_alloc__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__stack_alloc__allocate_stack_slots_to_colours_7_p_0_1(
  MR_Box ll_backend__stack_alloc__closure_arg)
{
  {
    MR_bool ll_backend__stack_alloc__succeeded;
    MR_Box ll_backend__stack_alloc__closure = ll_backend__stack_alloc__closure_arg;

    {
      ll_backend__stack_alloc__succeeded = ll_backend__stack_alloc__IntroducedFrom__pred__allocate_next_stack_slot__294__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__closure, (MR_Integer) 4))));
    }
    return ll_backend__stack_alloc__succeeded;
  }
}

static void MR_CALL 
ll_backend__stack_alloc__allocate_stack_slots_to_colours_7_p_0(
  MR_Word ll_backend__stack_alloc__MainStack_1,
  MR_Word ll_backend__stack_alloc__MaybeDoubleWidthFloats_2,
  MR_Word ll_backend__stack_alloc__MaybeReservedVarInfo_3,
  MR_Word ll_backend__stack_alloc__HeadVar__4_4,
  MR_Integer ll_backend__stack_alloc__STATE_VARIABLE_FirstFreeSlot_0_5,
  MR_Word ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0_6,
  MR_Word * ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_7)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__stack_alloc__succeeded;

        if ((ll_backend__stack_alloc__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_7 = ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0_6;
        else
          {
            MR_Word ll_backend__stack_alloc__FirstColour_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_alloc__HeadVar__4_4, (MR_Integer) 0)));
            MR_Word ll_backend__stack_alloc__LaterColours_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_alloc__HeadVar__4_4, (MR_Integer) 1)));
            MR_Integer ll_backend__stack_alloc__STATE_VARIABLE_FirstFreeSlot_25_25;
            MR_Word ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_26_26;

            if ((ll_backend__stack_alloc__MaybeDoubleWidthFloats_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Integer ll_backend__stack_alloc__SlotNum_66;
                MR_Word ll_backend__stack_alloc__Locn_67;
                MR_Word ll_backend__stack_alloc__VarList_68;
                MR_Integer ll_backend__stack_alloc__ResSlotNum_65;
                MR_Word ll_backend__stack_alloc__TypeCtorInfo_32_77;
                MR_Word ll_backend__stack_alloc__ResVar_64;
                MR_Word ll_backend__stack_alloc__V_69_69;

                ll_backend__stack_alloc__succeeded = ((MR_tag((MR_Word) ll_backend__stack_alloc__MaybeReservedVarInfo_3)) == (MR_mktag((MR_Integer) 1)));
                if (ll_backend__stack_alloc__succeeded)
                  {
                    ll_backend__stack_alloc__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_alloc__MaybeReservedVarInfo_3, (MR_Integer) 0)));
                    ll_backend__stack_alloc__ResVar_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_69_69, (MR_Integer) 0)));
                    ll_backend__stack_alloc__ResSlotNum_65 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_69_69, (MR_Integer) 1)));
                    ll_backend__stack_alloc__TypeCtorInfo_32_77 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                    {
                      ll_backend__stack_alloc__succeeded = parse_tree__set_of_var__member_2_p_0(ll_backend__stack_alloc__TypeCtorInfo_32_77, ll_backend__stack_alloc__FirstColour_18, ll_backend__stack_alloc__ResVar_64);
                    }
                  }
                if (ll_backend__stack_alloc__succeeded)
                  {
                    {
                      mercury__require__expect_4_p_0((MR_Word) &ll_backend__stack_alloc_scalar_common_3[2], (MR_String) "ll_backend.stack_alloc", (MR_String) "predicate \140ll_backend.stack_alloc.allocate_next_stack_slot\'/8", (MR_String) "reserved multiple stack slots");
                    }
                    ll_backend__stack_alloc__SlotNum_66 = ll_backend__stack_alloc__ResSlotNum_65;
                    ll_backend__stack_alloc__STATE_VARIABLE_FirstFreeSlot_25_25 = ll_backend__stack_alloc__STATE_VARIABLE_FirstFreeSlot_0_5;
                  }
                else
                  {
                    ll_backend__stack_alloc__SlotNum_66 = ll_backend__stack_alloc__STATE_VARIABLE_FirstFreeSlot_0_5;
                    ll_backend__stack_alloc__STATE_VARIABLE_FirstFreeSlot_25_25 = (ll_backend__stack_alloc__STATE_VARIABLE_FirstFreeSlot_0_5 + (MR_Integer) 1);
                  }
                switch (ll_backend__stack_alloc__MainStack_1) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      ll_backend__stack_alloc__Locn_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__Locn_67, 0) = ((MR_Box) (ll_backend__stack_alloc__SlotNum_66));
                      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__Locn_67, 1) = ((MR_Box) ((MR_Integer) 0));
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      ll_backend__stack_alloc__Locn_67 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), ll_backend__stack_alloc__Locn_67, 0) = ((MR_Box) (ll_backend__stack_alloc__SlotNum_66));
                    }
                    break;
                }
                {
                  ll_backend__stack_alloc__VarList_68 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__stack_alloc__FirstColour_18);
                }
                {
                  ll_backend__stack_alloc__allocate_given_stack_slot_4_p_0(ll_backend__stack_alloc__Locn_67, ll_backend__stack_alloc__VarList_68, ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0_6, &ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_26_26);
                }
              }
            else
              {
                MR_Word ll_backend__stack_alloc__TypeCtorInfo_34_53;
                MR_Word ll_backend__stack_alloc__VarTypes_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_alloc__MaybeDoubleWidthFloats_2, (MR_Integer) 0)));
                MR_Word ll_backend__stack_alloc__DoubleWidthVars_39;
                MR_Word ll_backend__stack_alloc__SingleWidthVars_40;
                MR_Word ll_backend__stack_alloc__V_41_41;
                MR_Integer ll_backend__stack_alloc__STATE_VARIABLE_FirstFreeSlot_24_43;
                MR_Word ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_25_44;

                {
                  ll_backend__stack_alloc__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_41_41, 0) = ((MR_Box) (&ll_backend__stack_alloc_scalar_common_3[3]));
                  MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_41_41, 1) = ((MR_Box) (ll_backend__stack_alloc__allocate_stack_slots_to_colours_7_p_0_2));
                  MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_41_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_41_41, 3) = ((MR_Box) (ll_backend__stack_alloc__VarTypes_38));
                }
                ll_backend__stack_alloc__TypeCtorInfo_34_53 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                {
                  parse_tree__set_of_var__divide_4_p_0(ll_backend__stack_alloc__TypeCtorInfo_34_53, ll_backend__stack_alloc__V_41_41, ll_backend__stack_alloc__FirstColour_18, &ll_backend__stack_alloc__DoubleWidthVars_39, &ll_backend__stack_alloc__SingleWidthVars_40);
                }
                {
                  ll_backend__stack_alloc__succeeded = parse_tree__set_of_var__is_non_empty_1_p_0(ll_backend__stack_alloc__TypeCtorInfo_34_53, ll_backend__stack_alloc__SingleWidthVars_40);
                }
                if (ll_backend__stack_alloc__succeeded)
                  {
                    {
                      ll_backend__stack_alloc__allocate_next_stack_slot_8_p_0(ll_backend__stack_alloc__MainStack_1, (MR_Integer) 0, ll_backend__stack_alloc__MaybeReservedVarInfo_3, ll_backend__stack_alloc__SingleWidthVars_40, ll_backend__stack_alloc__STATE_VARIABLE_FirstFreeSlot_0_5, &ll_backend__stack_alloc__STATE_VARIABLE_FirstFreeSlot_24_43, ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0_6, &ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_25_44);
                    }
                  }
                else
                  {
                    ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_25_44 = ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0_6;
                    ll_backend__stack_alloc__STATE_VARIABLE_FirstFreeSlot_24_43 = ll_backend__stack_alloc__STATE_VARIABLE_FirstFreeSlot_0_5;
                  }
                {
                  ll_backend__stack_alloc__succeeded = parse_tree__set_of_var__is_non_empty_1_p_0(ll_backend__stack_alloc__TypeCtorInfo_34_53, ll_backend__stack_alloc__DoubleWidthVars_39);
                }
                if (ll_backend__stack_alloc__succeeded)
                  {
                    MR_Integer ll_backend__stack_alloc__STATE_VARIABLE_FirstFreeSlot_26_45;

                    {
                      ll_backend__stack_alloc__succeeded = mercury__int__even_1_p_0(ll_backend__stack_alloc__STATE_VARIABLE_FirstFreeSlot_24_43);
                    }
                    if (ll_backend__stack_alloc__succeeded)
                      ll_backend__stack_alloc__STATE_VARIABLE_FirstFreeSlot_26_45 = ll_backend__stack_alloc__STATE_VARIABLE_FirstFreeSlot_24_43;
                    else
                      {
                        ll_backend__stack_alloc__STATE_VARIABLE_FirstFreeSlot_26_45 = (ll_backend__stack_alloc__STATE_VARIABLE_FirstFreeSlot_24_43 + (MR_Integer) 1);
                      }
                    {
                      ll_backend__stack_alloc__allocate_next_stack_slot_8_p_0(ll_backend__stack_alloc__MainStack_1, (MR_Integer) 1, ll_backend__stack_alloc__MaybeReservedVarInfo_3, ll_backend__stack_alloc__DoubleWidthVars_39, ll_backend__stack_alloc__STATE_VARIABLE_FirstFreeSlot_26_45, &ll_backend__stack_alloc__STATE_VARIABLE_FirstFreeSlot_25_25, ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_25_44, &ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_26_26);
                    }
                  }
                else
                  {
                    ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_26_26 = ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_25_44;
                    ll_backend__stack_alloc__STATE_VARIABLE_FirstFreeSlot_25_25 = ll_backend__stack_alloc__STATE_VARIABLE_FirstFreeSlot_24_43;
                  }
              }
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__stack_alloc__HeadVar__4__tmp_copy_4 = ll_backend__stack_alloc__LaterColours_19;
              MR_Integer ll_backend__stack_alloc__STATE_VARIABLE_FirstFreeSlot_0__tmp_copy_5 = ll_backend__stack_alloc__STATE_VARIABLE_FirstFreeSlot_25_25;
              MR_Word ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0__tmp_copy_6 = ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_26_26;

              ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0_6 = ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0__tmp_copy_6;
              ll_backend__stack_alloc__STATE_VARIABLE_FirstFreeSlot_0_5 = ll_backend__stack_alloc__STATE_VARIABLE_FirstFreeSlot_0__tmp_copy_5;
              ll_backend__stack_alloc__HeadVar__4_4 = ll_backend__stack_alloc__HeadVar__4__tmp_copy_4;
            }
            continue;
          }
      }
      break;
    }
}

static MR_bool MR_CALL 
ll_backend__stack_alloc__var_is_not_dummy_2_p_0(
  MR_ArrayPtr ll_backend__stack_alloc__DummyVarArray_3,
  MR_Word ll_backend__stack_alloc__Var_4)
{
  {
    MR_bool ll_backend__stack_alloc__succeeded;
    MR_Word ll_backend__stack_alloc__TypeClassInfo_for_enum_7 = (MR_Word) &ll_backend__stack_alloc_scalar_common_2[0];
    MR_Integer ll_backend__stack_alloc__VarNum_5;
    MR_Word ll_backend__stack_alloc__IsDummy_6;
    MR_Box MR_CALL (* ll_backend__stack_alloc__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__TypeClassInfo_for_enum_7, (MR_Integer) 0)), (MR_Integer) 5)));
    MR_Box ll_backend__stack_alloc__conv1_VarNum_5;
    MR_Box ll_backend__stack_alloc__conv2_IsDummy_6;

    {
      ll_backend__stack_alloc__conv1_VarNum_5 = ll_backend__stack_alloc__func_0(((MR_Box) ll_backend__stack_alloc__TypeClassInfo_for_enum_7), ((MR_Box) (ll_backend__stack_alloc__Var_4)));
    }
    ll_backend__stack_alloc__VarNum_5 = ((MR_Integer) ll_backend__stack_alloc__conv1_VarNum_5);
    {
      mercury__array__lookup_3_p_0((MR_Word) &check_hlds__type_util__check_hlds__type_util__type_ctor_info_is_dummy_type_0, (MR_ArrayPtr) ll_backend__stack_alloc__DummyVarArray_3, ll_backend__stack_alloc__VarNum_5, &ll_backend__stack_alloc__conv2_IsDummy_6);
    }
    ll_backend__stack_alloc__IsDummy_6 = ((MR_Word) ll_backend__stack_alloc__conv2_IsDummy_6);
    ll_backend__stack_alloc__succeeded = (ll_backend__stack_alloc__IsDummy_6 == (MR_Integer) 1);
    return ll_backend__stack_alloc__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__stack_alloc__set_for_loop_control_4_p_0_1(
  MR_Box ll_backend__stack_alloc__closure_arg,
  MR_Box ll_backend__stack_alloc__wrapper_arg_1)
{
  {
    MR_bool ll_backend__stack_alloc__succeeded;
    MR_Box ll_backend__stack_alloc__closure = ll_backend__stack_alloc__closure_arg;

    {
      ll_backend__stack_alloc__succeeded = ll_backend__stack_alloc__var_is_not_dummy_2_p_0(((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__stack_alloc__wrapper_arg_1));
    }
    return ll_backend__stack_alloc__succeeded;
  }
}

static void MR_CALL 
ll_backend__stack_alloc__set_for_loop_control_4_p_0(
  MR_Word ll_backend__stack_alloc__AllocData_5,
  MR_Word ll_backend__stack_alloc__Set0_6,
  MR_Word ll_backend__stack_alloc__STATE_VARIABLE_StackAlloc_0_11,
  MR_Word * ll_backend__stack_alloc__STATE_VARIABLE_StackAlloc_12)
{
  {
    MR_bool ll_backend__stack_alloc__succeeded;
    MR_Word ll_backend__stack_alloc__LiveSets0_8 = (MR_Word) ll_backend__stack_alloc__STATE_VARIABLE_StackAlloc_0_11;
    MR_Word ll_backend__stack_alloc__Set_9;
    MR_Word ll_backend__stack_alloc__LiveSets_10;
    MR_ArrayPtr ll_backend__stack_alloc__DummyVarArray_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__AllocData_5, (MR_Integer) 5)));
    MR_Word ll_backend__stack_alloc__V_19_19;
    MR_Word ll_backend__stack_alloc__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__AllocData_5, (MR_Integer) 0)));
    MR_Word ll_backend__stack_alloc__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__AllocData_5, (MR_Integer) 1)));
    MR_Word ll_backend__stack_alloc__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__AllocData_5, (MR_Integer) 2)));
    MR_Word ll_backend__stack_alloc__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__AllocData_5, (MR_Integer) 3)));
    MR_Word ll_backend__stack_alloc__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__AllocData_5, (MR_Integer) 4)));

    {
      ll_backend__stack_alloc__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_19_19, 0) = ((MR_Box) (&ll_backend__stack_alloc_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_19_19, 1) = ((MR_Box) (ll_backend__stack_alloc__set_for_loop_control_4_p_0_1));
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_19_19, 3) = ((MR_Box) (ll_backend__stack_alloc__DummyVarArray_18));
    }
    {
      parse_tree__set_of_var__filter_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__stack_alloc__V_19_19, ll_backend__stack_alloc__Set0_6, &ll_backend__stack_alloc__Set_9);
    }
    {
      ll_backend__stack_alloc__LiveSets_10 = mercury__set__insert_2_f_0((MR_Word) &ll_backend__stack_alloc_scalar_common_1[1], ll_backend__stack_alloc__LiveSets0_8, ((MR_Box) (ll_backend__stack_alloc__Set_9)));
    }
    *ll_backend__stack_alloc__STATE_VARIABLE_StackAlloc_12 = (MR_Word) ll_backend__stack_alloc__LiveSets_10;
  }
}

void MR_CALL 
ll_backend__stack_alloc__allocate_stack_slots_in_proc_4_p_0(
  MR_Word ll_backend__stack_alloc__ModuleInfo_5,
  MR_Word ll_backend__stack_alloc__HeadVar__2_2,
  MR_Word ll_backend__stack_alloc__STATE_VARIABLE_ProcInfo_0_41,
  MR_Word * ll_backend__stack_alloc__STATE_VARIABLE_ProcInfo_42)
{
  {
    MR_bool ll_backend__stack_alloc__succeeded;
    MR_Word ll_backend__stack_alloc__TypeCtorInfo_52_52;
    MR_Word ll_backend__stack_alloc__TypeInfo_53_53;
    MR_Word ll_backend__stack_alloc__PredId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word ll_backend__stack_alloc__PredInfo_9;
    MR_Word ll_backend__stack_alloc__Liveness0_10;
    MR_Word ll_backend__stack_alloc__Globals_11;
    MR_Word ll_backend__stack_alloc__TraceLevel_12;
    MR_Word ll_backend__stack_alloc__NeedFailVars_13;
    MR_Word ll_backend__stack_alloc__FailVars_14;
    MR_Word ll_backend__stack_alloc__TypeInfoLiveness_15;
    MR_Word ll_backend__stack_alloc__OptNoReturnCalls_16;
    MR_Word ll_backend__stack_alloc__VarTypes_17;
    MR_ArrayPtr ll_backend__stack_alloc__DummyTypeArray_18;
    MR_Word ll_backend__stack_alloc__DummyVars_19;
    MR_Word ll_backend__stack_alloc__AllocData_20;
    MR_Word ll_backend__stack_alloc__NondetLiveness0_21;
    MR_Word ll_backend__stack_alloc__SimpleStackAlloc0_22;
    MR_Word ll_backend__stack_alloc__Goal0_23;
    MR_Word ll_backend__stack_alloc__Goal_24;
    MR_Word ll_backend__stack_alloc__SimpleStackAlloc_25;
    MR_Word ll_backend__stack_alloc__LiveSets0_28;
    MR_Integer ll_backend__stack_alloc__NumReservedSlots_29;
    MR_Word ll_backend__stack_alloc__MaybeReservedVarInfo_30;
    MR_Word ll_backend__stack_alloc__LiveSets_34;
    MR_Word ll_backend__stack_alloc__ColourSets_35;
    MR_Word ll_backend__stack_alloc__ColourList_36;
    MR_Word ll_backend__stack_alloc__CodeModel_37;
    MR_Word ll_backend__stack_alloc__MainStack_38;
    MR_Word ll_backend__stack_alloc__StackSlots1_39;
    MR_Word ll_backend__stack_alloc__StackSlots_40;
    MR_Word ll_backend__stack_alloc__V_45_45;
    MR_Word ll_backend__stack_alloc__STATE_VARIABLE_ProcInfo_46_46;
    MR_Word ll_backend__stack_alloc__STATE_VARIABLE_ProcInfo_47_47;
    MR_Word ll_backend__stack_alloc__MaybeDoubleWidthFloats_62;
    MR_Integer ll_backend__stack_alloc__FirstFreeSlot_63;
    MR_Word ll_backend__stack_alloc__V_66_66;
    MR_Integer ll_backend__stack_alloc__ProcId_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 1)));
    MR_Word ll_backend__stack_alloc___Liveness_26;
    MR_Word ll_backend__stack_alloc___NondetLiveness_27;
    MR_Box ll_backend__stack_alloc__conv0_SimpleStackAlloc_25;
    MR_Word ll_backend__stack_alloc__V_72_72;
    MR_Word ll_backend__stack_alloc__V_73_73;

    {
      hlds__hlds_module__module_info_pred_info_3_p_0(ll_backend__stack_alloc__ModuleInfo_5, ll_backend__stack_alloc__PredId_6, &ll_backend__stack_alloc__PredInfo_9);
    }
    {
      ll_backend__liveness__initial_liveness_4_p_0(ll_backend__stack_alloc__ModuleInfo_5, ll_backend__stack_alloc__PredInfo_9, ll_backend__stack_alloc__STATE_VARIABLE_ProcInfo_0_41, &ll_backend__stack_alloc__Liveness0_10);
    }
    {
      hlds__hlds_module__module_info_get_globals_2_p_0(ll_backend__stack_alloc__ModuleInfo_5, &ll_backend__stack_alloc__Globals_11);
    }
    {
      libs__globals__get_trace_level_2_p_0(ll_backend__stack_alloc__Globals_11, &ll_backend__stack_alloc__TraceLevel_12);
    }
    {
      ll_backend__stack_alloc__NeedFailVars_13 = libs__trace_params__eff_trace_level_needs_fail_vars_4_f_0(ll_backend__stack_alloc__ModuleInfo_5, ll_backend__stack_alloc__PredInfo_9, ll_backend__stack_alloc__STATE_VARIABLE_ProcInfo_0_41, ll_backend__stack_alloc__TraceLevel_12);
    }
    switch (ll_backend__stack_alloc__NeedFailVars_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            ll_backend__stack_alloc__FailVars_14 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          ll_backend__trace_gen__trace_fail_vars_3_p_0(ll_backend__stack_alloc__ModuleInfo_5, ll_backend__stack_alloc__STATE_VARIABLE_ProcInfo_0_41, &ll_backend__stack_alloc__FailVars_14);
        }
        break;
    }
    {
      hlds__hlds_pred__body_should_use_typeinfo_liveness_3_p_0(ll_backend__stack_alloc__PredInfo_9, ll_backend__stack_alloc__Globals_11, &ll_backend__stack_alloc__TypeInfoLiveness_15);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(ll_backend__stack_alloc__Globals_11, (MR_Integer) 318, &ll_backend__stack_alloc__OptNoReturnCalls_16);
    }
    {
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ll_backend__stack_alloc__STATE_VARIABLE_ProcInfo_0_41, &ll_backend__stack_alloc__VarTypes_17);
    }
    {
      ll_backend__live_vars__build_dummy_type_array_4_p_0(ll_backend__stack_alloc__ModuleInfo_5, ll_backend__stack_alloc__VarTypes_17, &ll_backend__stack_alloc__DummyTypeArray_18, &ll_backend__stack_alloc__DummyVars_19);
    }
    {
      ll_backend__stack_alloc__AllocData_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__AllocData_20, 0) = ((MR_Box) (ll_backend__stack_alloc__ModuleInfo_5));
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__AllocData_20, 1) = ((MR_Box) (ll_backend__stack_alloc__STATE_VARIABLE_ProcInfo_0_41));
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__AllocData_20, 2) = ((MR_Box) (ll_backend__stack_alloc__HeadVar__2_2));
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__AllocData_20, 3) = ((MR_Box) (ll_backend__stack_alloc__TypeInfoLiveness_15));
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__AllocData_20, 4) = ((MR_Box) (ll_backend__stack_alloc__OptNoReturnCalls_16));
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__AllocData_20, 5) = ((MR_Box) (ll_backend__stack_alloc__DummyTypeArray_18));
    }
    ll_backend__stack_alloc__TypeCtorInfo_52_52 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    {
      ll_backend__stack_alloc__NondetLiveness0_21 = parse_tree__set_of_var__init_0_f_0(ll_backend__stack_alloc__TypeCtorInfo_52_52);
    }
    ll_backend__stack_alloc__TypeInfo_53_53 = (MR_Word) &ll_backend__stack_alloc_scalar_common_1[1];
    {
      ll_backend__stack_alloc__V_45_45 = mercury__set__make_singleton_set_1_f_0(ll_backend__stack_alloc__TypeInfo_53_53, ((MR_Box) (ll_backend__stack_alloc__FailVars_14)));
    }
    ll_backend__stack_alloc__SimpleStackAlloc0_22 = (MR_Word) ll_backend__stack_alloc__V_45_45;
    {
      hlds__hlds_pred__proc_info_get_goal_2_p_0(ll_backend__stack_alloc__STATE_VARIABLE_ProcInfo_0_41, &ll_backend__stack_alloc__Goal0_23);
    }
    {
      ll_backend__live_vars__build_live_sets_in_goal_no_par_stack_10_p_0((MR_Word) &ll_backend__stack_alloc_scalar_common_1[2], ll_backend__stack_alloc__Goal0_23, &ll_backend__stack_alloc__Goal_24, ll_backend__stack_alloc__FailVars_14, ll_backend__stack_alloc__AllocData_20, ((MR_Box) (ll_backend__stack_alloc__SimpleStackAlloc0_22)), &ll_backend__stack_alloc__conv0_SimpleStackAlloc_25, ll_backend__stack_alloc__Liveness0_10, &ll_backend__stack_alloc___Liveness_26, ll_backend__stack_alloc__NondetLiveness0_21, &ll_backend__stack_alloc___NondetLiveness_27);
    }
    ll_backend__stack_alloc__SimpleStackAlloc_25 = ((MR_Word) ll_backend__stack_alloc__conv0_SimpleStackAlloc_25);
    {
      hlds__hlds_pred__proc_info_set_goal_3_p_0(ll_backend__stack_alloc__Goal_24, ll_backend__stack_alloc__STATE_VARIABLE_ProcInfo_0_41, &ll_backend__stack_alloc__STATE_VARIABLE_ProcInfo_46_46);
    }
    ll_backend__stack_alloc__LiveSets0_28 = (MR_Word) ll_backend__stack_alloc__SimpleStackAlloc_25;
    {
      ll_backend__trace_gen__do_we_need_maxfr_slot_5_p_0(ll_backend__stack_alloc__Globals_11, ll_backend__stack_alloc__ModuleInfo_5, ll_backend__stack_alloc__PredInfo_9, ll_backend__stack_alloc__STATE_VARIABLE_ProcInfo_46_46, &ll_backend__stack_alloc__STATE_VARIABLE_ProcInfo_47_47);
    }
    {
      ll_backend__trace_gen__trace_reserved_slots_6_p_0(ll_backend__stack_alloc__ModuleInfo_5, ll_backend__stack_alloc__PredInfo_9, ll_backend__stack_alloc__STATE_VARIABLE_ProcInfo_47_47, ll_backend__stack_alloc__Globals_11, &ll_backend__stack_alloc__NumReservedSlots_29, &ll_backend__stack_alloc__MaybeReservedVarInfo_30);
    }
    if ((ll_backend__stack_alloc__MaybeReservedVarInfo_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      ll_backend__stack_alloc__LiveSets_34 = ll_backend__stack_alloc__LiveSets0_28;
    else
      {
        MR_Word ll_backend__stack_alloc__ResVar_31;
        MR_Word ll_backend__stack_alloc__ResVarSet_33;
        MR_Word ll_backend__stack_alloc__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_alloc__MaybeReservedVarInfo_30, (MR_Integer) 0)));
        MR_Integer ll_backend__stack_alloc__V_32_32;

        ll_backend__stack_alloc__ResVar_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_48_48, (MR_Integer) 0)));
        ll_backend__stack_alloc__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_48_48, (MR_Integer) 1)));
        {
          ll_backend__stack_alloc__ResVarSet_33 = parse_tree__set_of_var__make_singleton_1_f_0(ll_backend__stack_alloc__TypeCtorInfo_52_52, ll_backend__stack_alloc__ResVar_31);
        }
        {
          mercury__set__insert_3_p_0(ll_backend__stack_alloc__TypeInfo_53_53, ((MR_Box) (ll_backend__stack_alloc__ResVarSet_33)), ll_backend__stack_alloc__LiveSets0_28, &ll_backend__stack_alloc__LiveSets_34);
        }
      }
    {
      parse_tree__set_of_var__graph_colour_group_elements_2_p_0(ll_backend__stack_alloc__TypeCtorInfo_52_52, ll_backend__stack_alloc__LiveSets_34, &ll_backend__stack_alloc__ColourSets_35);
    }
    {
      mercury__set__to_sorted_list_2_p_0(ll_backend__stack_alloc__TypeInfo_53_53, ll_backend__stack_alloc__ColourSets_35, &ll_backend__stack_alloc__ColourList_36);
    }
    {
      ll_backend__stack_alloc__CodeModel_37 = hlds__code_model__proc_info_interface_code_model_1_f_0(ll_backend__stack_alloc__STATE_VARIABLE_ProcInfo_47_47);
    }
    {
      ll_backend__stack_alloc__MainStack_38 = ll_backend__llds__code_model_to_main_stack_1_f_0(ll_backend__stack_alloc__CodeModel_37);
    }
    ll_backend__stack_alloc__succeeded = (ll_backend__stack_alloc__MainStack_38 == (MR_Integer) 0);
    if (ll_backend__stack_alloc__succeeded)
      {
        ll_backend__stack_alloc__V_72_72 = (MR_Integer) 1;
        {
          libs__globals__double_width_floats_on_det_stack_2_p_0(ll_backend__stack_alloc__Globals_11, &ll_backend__stack_alloc__V_73_73);
        }
        ll_backend__stack_alloc__succeeded = (ll_backend__stack_alloc__V_72_72 == ll_backend__stack_alloc__V_73_73);
      }
    if (ll_backend__stack_alloc__succeeded)
      {
        ll_backend__stack_alloc__MaybeDoubleWidthFloats_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ll_backend__stack_alloc__MaybeDoubleWidthFloats_62, 0) = ((MR_Box) (ll_backend__stack_alloc__VarTypes_17));
      }
    else
      ll_backend__stack_alloc__MaybeDoubleWidthFloats_62 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    ll_backend__stack_alloc__FirstFreeSlot_63 = (ll_backend__stack_alloc__NumReservedSlots_29 + (MR_Integer) 1);
    {
      ll_backend__stack_alloc__V_66_66 = mercury__map__init_0_f_0((MR_Word) &ll_backend__stack_alloc_scalar_common_1[0], (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0);
    }
    {
      ll_backend__stack_alloc__allocate_stack_slots_to_colours_7_p_0(ll_backend__stack_alloc__MainStack_38, ll_backend__stack_alloc__MaybeDoubleWidthFloats_62, ll_backend__stack_alloc__MaybeReservedVarInfo_30, ll_backend__stack_alloc__ColourList_36, ll_backend__stack_alloc__FirstFreeSlot_63, ll_backend__stack_alloc__V_66_66, &ll_backend__stack_alloc__StackSlots1_39);
    }
    {
      ll_backend__stack_alloc__allocate_dummy_stack_slots_5_p_0(ll_backend__stack_alloc__MainStack_38, ll_backend__stack_alloc__DummyVars_19, (MR_Integer) -1, ll_backend__stack_alloc__StackSlots1_39, &ll_backend__stack_alloc__StackSlots_40);
    }
    {
      hlds__hlds_pred__proc_info_set_stack_slots_3_p_0(ll_backend__stack_alloc__StackSlots_40, ll_backend__stack_alloc__STATE_VARIABLE_ProcInfo_47_47, ll_backend__stack_alloc__STATE_VARIABLE_ProcInfo_42);
    }
  }
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ll_backend.stack_alloc. */
