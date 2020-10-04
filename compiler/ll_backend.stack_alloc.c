/*
** Automatically generated from `stack_alloc.m'
** by the Mercury compiler,
** version rotd-2020-10-04
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
#include "getopt_io.mih"
#include "hlds.mih"
#include "int.mih"
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
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
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
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
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
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
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
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
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
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




static const MR_FA_TypeInfo_Struct1 ll_backend__stack_alloc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__stack_alloc__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_alloc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_alloc__array__pti_array_1__plain_check_hlds__type_util__type_ctor_info_is_dummy_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_alloc__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_Integer ll_backend__stack_alloc__ll_backend__stack_alloc__functor_number_map_stack_alloc_0[1];

static const MR_FA_TypeInfo_Struct1 ll_backend__stack_alloc__parse_tree__set_of_var__ti_set_of_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__stack_alloc__set_ordlist__ti_set_ordlist_1parse_tree__set_of_var__ti_set_of_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_NotagFunctorDesc ll_backend__stack_alloc__ll_backend__stack_alloc__notag_functor_desc_stack_alloc_0;

static MR_bool MR_CALL 
ll_backend__stack_alloc__IntroducedFrom__pred__allocate_next_stack_slot__294__1_2_p_0(
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
  MR_Word VarTypes_3,
  MR_Word Var_4);

static MR_bool MR_CALL 
ll_backend__stack_alloc__var_is_not_dummy_2_p_0(
  MR_ArrayPtr DummyVarArray_3,
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
ll_backend__stack_alloc__allocate_dummy_stack_slots_5_p_0(
  MR_Word MainStack_1,
  MR_Word HeadVar__2_2,
  MR_Integer N0_3,
  MR_Word STATE_VARIABLE_StackSlots_0_4,
  MR_Word * STATE_VARIABLE_StackSlots_5);

static void MR_CALL 
ll_backend__stack_alloc__allocate_stack_slots_to_colours_7_p_0(
  MR_Word MainStack_1,
  MR_Word MaybeDoubleWidthFloats_2,
  MR_Word MaybeReservedVarInfo_3,
  MR_Word HeadVar__4_4,
  MR_Integer STATE_VARIABLE_FirstFreeSlot_0_5,
  MR_Word STATE_VARIABLE_StackSlots_0_6,
  MR_Word * STATE_VARIABLE_StackSlots_7);

static MR_bool MR_CALL 
ll_backend__stack_alloc__allocate_stack_slots_to_colour_8_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__stack_alloc__allocate_stack_slots_to_colour_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
ll_backend__stack_alloc__allocate_stack_slots_to_colour_8_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ll_backend__stack_alloc__allocate_stack_slots_to_colour_8_p_0(
  MR_Word MainStack_9,
  MR_Word MaybeDoubleWidthFloats_10,
  MR_Word MaybeReservedVarInfo_11,
  MR_Word ColourVars_12,
  MR_Integer STATE_VARIABLE_FirstFreeSlot_0_18,
  MR_Integer * STATE_VARIABLE_FirstFreeSlot_19,
  MR_Word STATE_VARIABLE_StackSlots_0_20,
  MR_Word * STATE_VARIABLE_StackSlots_21);

static MR_bool MR_CALL 
ll_backend__stack_alloc__allocate_next_stack_slot_8_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ll_backend__stack_alloc__allocate_next_stack_slot_8_p_0(
  MR_Word MainStack_9,
  MR_Word StackSlotWidth_10,
  MR_Word MaybeReservedVarInfo_11,
  MR_Word Vars_12,
  MR_Integer STATE_VARIABLE_FirstFreeSlot_0_20,
  MR_Integer * STATE_VARIABLE_FirstFreeSlot_21,
  MR_Word STATE_VARIABLE_StackSlots_0_22,
  MR_Word * STATE_VARIABLE_StackSlots_23);

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

static /* final */ const MR_Box ll_backend__stack_alloc_scalar_common_2[1][3];

static /* final */ const MR_Box ll_backend__stack_alloc_scalar_common_3[5][5];

static /* final */ const MR_Box ll_backend__stack_alloc_scalar_common_4[1][7];




static /* final */ const MR_Box ll_backend__stack_alloc_scalar_common_1[4][2] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_ll_backend__live_vars__stack_alloc_info__arity1__ll_backend__stack_alloc__stack_alloc__arity0__)),
    ((MR_Box) (&ll_backend__stack_alloc__ll_backend__stack_alloc__type_ctor_info_stack_alloc_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&ll_backend__stack_alloc_scalar_common_1[0]))
  },
};

static /* final */ const MR_Box ll_backend__stack_alloc_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ll_backend__stack_alloc_scalar_common_1[2]))
  },
};

static /* final */ const MR_Box ll_backend__stack_alloc_scalar_common_3[5][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_width_0)),
    ((MR_Box) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_width_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&ll_backend__stack_alloc_scalar_common_3[0])),
    ((MR_Box) (ll_backend__stack_alloc__allocate_stack_slots_to_colour_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__stack_alloc__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&ll_backend__stack_alloc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&ll_backend__stack_alloc_scalar_common_3[0])),
    ((MR_Box) (ll_backend__stack_alloc__allocate_stack_slots_to_colour_8_p_0_3)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__stack_alloc__array__pti_array_1__plain_check_hlds__type_util__type_ctor_info_is_dummy_type_0)),
    ((MR_Box) (&ll_backend__stack_alloc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box ll_backend__stack_alloc_scalar_common_4[1][7] = {
  /* row 0 */
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



static const MR_FA_TypeInfo_Struct1 ll_backend__stack_alloc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__stack_alloc__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&ll_backend__stack_alloc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_alloc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_alloc__array__pti_array_1__plain_check_hlds__type_util__type_ctor_info_is_dummy_type_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_PseudoTypeInfo) (&check_hlds__type_util__check_hlds__type_util__type_ctor_info_is_dummy_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_alloc__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) (&ll_backend__stack_alloc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_Integer ll_backend__stack_alloc__ll_backend__stack_alloc__functor_number_map_stack_alloc_0[1] = {
  (MR_Integer) 0
};

static const MR_FA_TypeInfo_Struct1 ll_backend__stack_alloc__parse_tree__set_of_var__ti_set_of_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__stack_alloc__set_ordlist__ti_set_ordlist_1parse_tree__set_of_var__ti_set_of_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) (&ll_backend__stack_alloc__parse_tree__set_of_var__ti_set_of_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_NotagFunctorDesc ll_backend__stack_alloc__ll_backend__stack_alloc__notag_functor_desc_stack_alloc_0 = {
  (MR_String) "stack_alloc",
  (MR_PseudoTypeInfo) (&ll_backend__stack_alloc__set_ordlist__ti_set_ordlist_1parse_tree__set_of_var__ti_set_of_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct ll_backend__stack_alloc__ll_backend__stack_alloc__type_ctor_info_stack_alloc_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (ll_backend__stack_alloc____Unify____stack_alloc_0_0_10001)),
  ((MR_Box) (ll_backend__stack_alloc____Compare____stack_alloc_0_0_10001)),
  (MR_String) "ll_backend.stack_alloc",
  (MR_String) "stack_alloc",
  {     &ll_backend__stack_alloc__ll_backend__stack_alloc__notag_functor_desc_stack_alloc_0 },
  {     &ll_backend__stack_alloc__ll_backend__stack_alloc__notag_functor_desc_stack_alloc_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  ll_backend__stack_alloc__ll_backend__stack_alloc__functor_number_map_stack_alloc_0
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
ll_backend__stack_alloc__IntroducedFrom__pred__allocate_next_stack_slot__294__1_2_p_0(
  MR_Word StackSlotWidth_10,
  MR_Word HeadVar__2_28)
{
  {
    MR_bool succeeded = (StackSlotWidth_10 == HeadVar__2_28);

    return succeeded;
  }
}

static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_recursive_call_for_loop_control_4_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_StackAlloc_12;

    ll_backend__stack_alloc__set_for_loop_control_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_StackAlloc_12);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_StackAlloc_12));
  }
}

static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_recursive_call_for_loop_control_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  {
    MR_Word StackVarsSets_10 = (MR_Word) (HeadVar__1_1);
    MR_Word Var_11;
    MR_Box conv1_HeadVar__4_4;

    {
      Var_11 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_11, 0) = ((MR_Box) (&ll_backend__stack_alloc_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_11, 1) = ((MR_Box) (ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_recursive_call_for_loop_control_4_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_11, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_11, 3) = ((MR_Box) (HeadVar__2_2));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&ll_backend__stack_alloc_scalar_common_1[0]), (MR_Word) (&ll_backend__stack_alloc__ll_backend__stack_alloc__type_ctor_info_stack_alloc_0), Var_11, StackVarsSets_10, ((MR_Box) (HeadVar__3_3)), &conv1_HeadVar__4_4);
    *HeadVar__4_4 = ((MR_Word) (conv1_HeadVar__4_4));
  }
}

static MR_bool MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__stack_alloc__var_is_not_dummy_2_p_0(((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  {
    MR_bool succeeded;
    MR_Word StackVars0_10 = (MR_Word) (HeadVar__1_1);
    MR_Word StackVars_11;
    MR_Word LiveSets0_12;
    MR_Word LiveSets_13;
    MR_ArrayPtr DummyVarArray_19 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
    MR_Word Var_20;

    {
      Var_20 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (&ll_backend__stack_alloc_scalar_common_3[4]));
      MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_20, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_20, 3) = ((MR_Box) (DummyVarArray_19));
    }
    parse_tree__set_of_var__filter_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_20, StackVars0_10, &StackVars_11);
    LiveSets0_12 = (MR_Word) (HeadVar__3_3);
    LiveSets_13 = mercury__set__insert_2_f_0((MR_Word) (&ll_backend__stack_alloc_scalar_common_1[0]), LiveSets0_12, ((MR_Box) (StackVars_11)));
    *HeadVar__4_4 = (MR_Word) (LiveSets_13);
  }
}

static MR_bool MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__stack_alloc__var_is_not_dummy_2_p_0(((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  {
    MR_bool succeeded;
    MR_Word ResumeOnStack_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ResumeVars_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word NondetLiveVars_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));

    switch (ResumeOnStack_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *HeadVar__4_4 = HeadVar__3_3;
        break;
      case (MR_Integer) 1:
        {
          MR_Word LiveSet0_13;
          MR_Word LiveSet_14;
          MR_Word LiveSets0_15;
          MR_Word LiveSets_16;
          MR_ArrayPtr DummyVarArray_23;
          MR_Word Var_24;

          LiveSet0_13 = parse_tree__set_of_var__union_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ResumeVars_11, NondetLiveVars_12);
          DummyVarArray_23 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
          {
            Var_24 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (&ll_backend__stack_alloc_scalar_common_3[4]));
            MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_p_0_1));
            MR_hl_field(MR_mktag(0), Var_24, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_24, 3) = ((MR_Box) (DummyVarArray_23));
          }
          parse_tree__set_of_var__filter_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_24, LiveSet0_13, &LiveSet_14);
          LiveSets0_15 = (MR_Word) (HeadVar__3_3);
          LiveSets_16 = mercury__set__insert_2_f_0((MR_Word) (&ll_backend__stack_alloc_scalar_common_1[0]), LiveSets0_15, ((MR_Box) (LiveSet_14)));
          *HeadVar__4_4 = (MR_Word) (LiveSets_16);
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__stack_alloc__var_is_not_dummy_2_p_0(((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  {
    MR_bool succeeded;
    MR_Word ForwardVars_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ResumeVars_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word NondetLiveVars_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
    MR_Word LiveSet0_13;
    MR_Word LiveSet_14;
    MR_Word LiveSets0_15;
    MR_Word LiveSets_16;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_ArrayPtr DummyVarArray_27;
    MR_Word Var_28;

    {
      Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (NondetLiveVars_12));
      MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (ResumeVars_11));
      MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (Var_19));
    }
    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (ForwardVars_10));
      MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (Var_18));
    }
    LiveSet0_13 = parse_tree__set_of_var__union_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_17);
    DummyVarArray_27 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
    {
      Var_28 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (&ll_backend__stack_alloc_scalar_common_3[4]));
      MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) (ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_28, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_28, 3) = ((MR_Box) (DummyVarArray_27));
    }
    parse_tree__set_of_var__filter_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_28, LiveSet0_13, &LiveSet_14);
    LiveSets0_15 = (MR_Word) (HeadVar__3_3);
    LiveSets_16 = mercury__set__insert_2_f_0((MR_Word) (&ll_backend__stack_alloc_scalar_common_1[0]), LiveSets0_15, ((MR_Box) (LiveSet_14)));
    *HeadVar__4_4 = (MR_Word) (LiveSets_16);
  }
}

static void MR_CALL 
ll_backend__stack_alloc____Compare____stack_alloc_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
}

static MR_bool MR_CALL 
ll_backend__stack_alloc____Unify____stack_alloc_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
}

static MR_bool MR_CALL 
ll_backend__stack_alloc__var_is_float_2_p_0(
  MR_Word VarTypes_3,
  MR_Word Var_4)
{
  {
    MR_bool succeeded;
    MR_Word Var_5;
    MR_Word Var_6;

    Var_5 = parse_tree__builtin_lib_types__float_type_0_f_0();
    hlds__vartypes__lookup_var_type_3_p_0(VarTypes_3, Var_4, &Var_6);
    succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Var_5, Var_6);
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__stack_alloc__var_is_not_dummy_2_p_0(
  MR_ArrayPtr DummyVarArray_3,
  MR_Word Var_4)
{
  {
    MR_bool succeeded;
    MR_Integer VarNum_5;
    MR_Word IsDummy_6;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&ll_backend__stack_alloc_scalar_common_2[0]), (MR_Integer) 0)), (MR_Integer) 5))));
    MR_Box conv1_VarNum_5;
    MR_Box conv2_IsDummy_6;

    conv1_VarNum_5 = func_0(((MR_Box) ((MR_Word) (&ll_backend__stack_alloc_scalar_common_2[0]))), ((MR_Box) (Var_4)));
    VarNum_5 = ((MR_Integer) (conv1_VarNum_5));
    mercury__array__lookup_3_p_0((MR_Word) (&check_hlds__type_util__check_hlds__type_util__type_ctor_info_is_dummy_type_0), (MR_ArrayPtr) (DummyVarArray_3), VarNum_5, &conv2_IsDummy_6);
    IsDummy_6 = ((MR_Word) (conv2_IsDummy_6));
    succeeded = (IsDummy_6 == (MR_Integer) 1);
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__stack_alloc__set_for_loop_control_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__stack_alloc__var_is_not_dummy_2_p_0(((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__stack_alloc__set_for_loop_control_4_p_0(
  MR_Word AllocData_5,
  MR_Word Set0_6,
  MR_Word STATE_VARIABLE_StackAlloc_0_11,
  MR_Word * STATE_VARIABLE_StackAlloc_12)
{
  {
    MR_bool succeeded;
    MR_Word LiveSets0_8 = (MR_Word) (STATE_VARIABLE_StackAlloc_0_11);
    MR_Word Set_9;
    MR_Word LiveSets_10;
    MR_ArrayPtr DummyVarArray_18 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), AllocData_5, (MR_Integer) 4))));
    MR_Word Var_19;

    {
      Var_19 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (&ll_backend__stack_alloc_scalar_common_3[4]));
      MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (ll_backend__stack_alloc__set_for_loop_control_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_19, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_19, 3) = ((MR_Box) (DummyVarArray_18));
    }
    parse_tree__set_of_var__filter_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_19, Set0_6, &Set_9);
    LiveSets_10 = mercury__set__insert_2_f_0((MR_Word) (&ll_backend__stack_alloc_scalar_common_1[0]), LiveSets0_8, ((MR_Box) (Set_9)));
    *STATE_VARIABLE_StackAlloc_12 = (MR_Word) (LiveSets_10);
  }
}

void MR_CALL 
ll_backend__stack_alloc__allocate_stack_slots_in_proc_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ProcInfo_0_41,
  MR_Word * STATE_VARIABLE_ProcInfo_42)
{
  {
    MR_bool succeeded;
    MR_Word PredId_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word PredInfo_9;
    MR_Word Liveness0_10;
    MR_Word Globals_11;
    MR_Word TraceLevel_12;
    MR_Word NeedFailVars_13;
    MR_Word FailVars_14;
    MR_Word TypeInfoLiveness_15;
    MR_Word OptNoReturnCalls_16;
    MR_Word VarTypes_17;
    MR_ArrayPtr DummyTypeArray_18;
    MR_Word DummyVars_19;
    MR_Word AllocData_20;
    MR_Word NondetLiveness0_21;
    MR_Word SimpleStackAlloc0_22;
    MR_Word Goal0_23;
    MR_Word Goal_24;
    MR_Word SimpleStackAlloc_25;
    MR_Word LiveSets0_28;
    MR_Integer NumReservedSlots_29;
    MR_Word MaybeReservedVarInfo_30;
    MR_Word LiveSets_34;
    MR_Word ColourSets_35;
    MR_Word ColourList_36;
    MR_Word CodeModel_37;
    MR_Word MainStack_38;
    MR_Word StackSlots1_39;
    MR_Word StackSlots_40;
    MR_Word Var_45;
    MR_Word STATE_VARIABLE_ProcInfo_46_46;
    MR_Word STATE_VARIABLE_ProcInfo_47_47;
    MR_Word MaybeDoubleWidthFloats_62;
    MR_Integer FirstFreeSlot_63;
    MR_Word Var_66;
    MR_Word _Liveness_26;
    MR_Word _NondetLiveness_27;
    MR_Box conv0_SimpleStackAlloc_25;
    MR_Word Var_72;
    MR_Word Var_73;

    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_5, PredId_6, &PredInfo_9);
    ll_backend__liveness__initial_liveness_4_p_0(ModuleInfo_5, PredInfo_9, STATE_VARIABLE_ProcInfo_0_41, &Liveness0_10);
    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_5, &Globals_11);
    libs__globals__get_trace_level_2_p_0(Globals_11, &TraceLevel_12);
    NeedFailVars_13 = libs__trace_params__eff_trace_level_needs_fail_vars_4_f_0(ModuleInfo_5, PredInfo_9, STATE_VARIABLE_ProcInfo_0_41, TraceLevel_12);
    switch (NeedFailVars_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        FailVars_14 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
        break;
      case (MR_Integer) 1:
        ll_backend__trace_gen__trace_fail_vars_3_p_0(ModuleInfo_5, STATE_VARIABLE_ProcInfo_0_41, &FailVars_14);
        break;
    }
    hlds__hlds_pred__body_should_use_typeinfo_liveness_3_p_0(PredInfo_9, Globals_11, &TypeInfoLiveness_15);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 352, &OptNoReturnCalls_16);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(STATE_VARIABLE_ProcInfo_0_41, &VarTypes_17);
    ll_backend__live_vars__build_dummy_type_array_4_p_0(ModuleInfo_5, VarTypes_17, &DummyTypeArray_18, &DummyVars_19);
    {
      AllocData_20 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), AllocData_20, 0) = ((MR_Box) (ModuleInfo_5));
      MR_hl_field(MR_mktag(0), AllocData_20, 1) = ((MR_Box) (STATE_VARIABLE_ProcInfo_0_41));
      MR_hl_field(MR_mktag(0), AllocData_20, 2) = ((MR_Box) (HeadVar__2_2));
      MR_hl_field(MR_mktag(0), AllocData_20, 3) = (MR_Box) (((((MR_Unsigned) (TypeInfoLiveness_15) << 1)) | (MR_Unsigned) (OptNoReturnCalls_16)));
      MR_hl_field(MR_mktag(0), AllocData_20, 4) = ((MR_Box) (DummyTypeArray_18));
    }
    NondetLiveness0_21 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
    Var_45 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ll_backend__stack_alloc_scalar_common_1[0]), ((MR_Box) (FailVars_14)));
    SimpleStackAlloc0_22 = (MR_Word) (Var_45);
    hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_0_41, &Goal0_23);
    ll_backend__live_vars__build_live_sets_in_goal_no_par_stack_10_p_0((MR_Word) (&ll_backend__stack_alloc_scalar_common_1[1]), Goal0_23, &Goal_24, FailVars_14, AllocData_20, ((MR_Box) (SimpleStackAlloc0_22)), &conv0_SimpleStackAlloc_25, Liveness0_10, &_Liveness_26, NondetLiveness0_21, &_NondetLiveness_27);
    SimpleStackAlloc_25 = ((MR_Word) (conv0_SimpleStackAlloc_25));
    hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_24, STATE_VARIABLE_ProcInfo_0_41, &STATE_VARIABLE_ProcInfo_46_46);
    LiveSets0_28 = (MR_Word) (SimpleStackAlloc_25);
    ll_backend__trace_gen__do_we_need_maxfr_slot_5_p_0(Globals_11, ModuleInfo_5, PredInfo_9, STATE_VARIABLE_ProcInfo_46_46, &STATE_VARIABLE_ProcInfo_47_47);
    ll_backend__trace_gen__trace_reserved_slots_6_p_0(ModuleInfo_5, PredInfo_9, STATE_VARIABLE_ProcInfo_47_47, Globals_11, &NumReservedSlots_29, &MaybeReservedVarInfo_30);
    if ((MaybeReservedVarInfo_30 == (MR_Word) ((MR_Unsigned) 0U)))
      LiveSets_34 = LiveSets0_28;
    else
    {
      MR_Word ResVar_31;
      MR_Word ResVarSet_33;
      MR_Word Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeReservedVarInfo_30, (MR_Integer) 0))));

      ResVar_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_48, (MR_Integer) 0))));
      ResVarSet_33 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ResVar_31);
      mercury__set__insert_3_p_0((MR_Word) (&ll_backend__stack_alloc_scalar_common_1[0]), ((MR_Box) (ResVarSet_33)), LiveSets0_28, &LiveSets_34);
    }
    parse_tree__set_of_var__graph_colour_group_elements_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LiveSets_34, &ColourSets_35);
    mercury__set__to_sorted_list_2_p_0((MR_Word) (&ll_backend__stack_alloc_scalar_common_1[0]), ColourSets_35, &ColourList_36);
    CodeModel_37 = hlds__code_model__proc_info_interface_code_model_1_f_0(STATE_VARIABLE_ProcInfo_47_47);
    MainStack_38 = ll_backend__llds__code_model_to_main_stack_1_f_0(CodeModel_37);
    succeeded = (MainStack_38 == (MR_Integer) 0);
    if (succeeded)
    {
      Var_72 = (MR_Integer) 1;
      libs__globals__double_width_floats_on_det_stack_2_p_0(Globals_11, &Var_73);
      succeeded = (Var_72 == Var_73);
    }
    if (succeeded)
      {
        MaybeDoubleWidthFloats_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeDoubleWidthFloats_62, 0) = ((MR_Box) (VarTypes_17));
      }
    else
      MaybeDoubleWidthFloats_62 = (MR_Word) ((MR_Unsigned) 0U);
    FirstFreeSlot_63 = (MR_Integer) ((MR_Unsigned) NumReservedSlots_29 + (MR_Unsigned) 1);
    Var_66 = mercury__map__init_0_f_0((MR_Word) (&ll_backend__stack_alloc_scalar_common_1[2]), (MR_Word) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0));
    ll_backend__stack_alloc__allocate_stack_slots_to_colours_7_p_0(MainStack_38, MaybeDoubleWidthFloats_62, MaybeReservedVarInfo_30, ColourList_36, FirstFreeSlot_63, Var_66, &StackSlots1_39);
    ll_backend__stack_alloc__allocate_dummy_stack_slots_5_p_0(MainStack_38, DummyVars_19, (MR_Integer) -1, StackSlots1_39, &StackSlots_40);
    hlds__hlds_pred__proc_info_set_stack_slots_3_p_0(StackSlots_40, STATE_VARIABLE_ProcInfo_47_47, STATE_VARIABLE_ProcInfo_42);
  }
}

static void MR_CALL 
ll_backend__stack_alloc__allocate_dummy_stack_slots_5_p_0(
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
      MR_Word DummyVars_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Locn_16;
      MR_Word STATE_VARIABLE_StackSlots_21_21;
      MR_Integer Var_23;
      MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Integer next_value_of_N0_3;
      MR_Word next_value_of_STATE_VARIABLE_StackSlots_0_4;

      switch (MainStack_1) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            Locn_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Locn_16, 0) = ((MR_Box) (N0_3));
            MR_hl_field(MR_mktag(0), Locn_16, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          }
          break;
        case (MR_Integer) 1:
          {
            Locn_16 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Locn_16, 0) = ((MR_Box) (N0_3));
          }
          break;
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&ll_backend__stack_alloc_scalar_common_1[2]), (MR_Word) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0), ((MR_Box) (Var_31)), ((MR_Box) (Locn_16)), STATE_VARIABLE_StackSlots_0_4, &STATE_VARIABLE_StackSlots_21_21);
      Var_23 = (MR_Integer) ((MR_Unsigned) N0_3 - (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = DummyVars_13;
      next_value_of_N0_3 = Var_23;
      next_value_of_STATE_VARIABLE_StackSlots_0_4 = STATE_VARIABLE_StackSlots_21_21;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      N0_3 = next_value_of_N0_3;
      STATE_VARIABLE_StackSlots_0_4 = next_value_of_STATE_VARIABLE_StackSlots_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__stack_alloc__allocate_stack_slots_to_colours_7_p_0(
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
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_StackSlots_7 = STATE_VARIABLE_StackSlots_0_6;
    else
    {
      MR_Word FirstColour_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word LaterColours_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Integer STATE_VARIABLE_FirstFreeSlot_25_25;
      MR_Word STATE_VARIABLE_StackSlots_26_26;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Integer next_value_of_STATE_VARIABLE_FirstFreeSlot_0_5;
      MR_Word next_value_of_STATE_VARIABLE_StackSlots_0_6;

      ll_backend__stack_alloc__allocate_stack_slots_to_colour_8_p_0(MainStack_1, MaybeDoubleWidthFloats_2, MaybeReservedVarInfo_3, FirstColour_18, STATE_VARIABLE_FirstFreeSlot_0_5, &STATE_VARIABLE_FirstFreeSlot_25_25, STATE_VARIABLE_StackSlots_0_6, &STATE_VARIABLE_StackSlots_26_26);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = LaterColours_19;
      next_value_of_STATE_VARIABLE_FirstFreeSlot_0_5 = STATE_VARIABLE_FirstFreeSlot_25_25;
      next_value_of_STATE_VARIABLE_StackSlots_0_6 = STATE_VARIABLE_StackSlots_26_26;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_FirstFreeSlot_0_5 = next_value_of_STATE_VARIABLE_FirstFreeSlot_0_5;
      STATE_VARIABLE_StackSlots_0_6 = next_value_of_STATE_VARIABLE_StackSlots_0_6;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
ll_backend__stack_alloc__allocate_stack_slots_to_colour_8_p_0_3(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__stack_alloc__IntroducedFrom__pred__allocate_next_stack_slot__294__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__stack_alloc__allocate_stack_slots_to_colour_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__stack_alloc__var_is_float_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__stack_alloc__allocate_stack_slots_to_colour_8_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__stack_alloc__IntroducedFrom__pred__allocate_next_stack_slot__294__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__stack_alloc__allocate_stack_slots_to_colour_8_p_0(
  MR_Word MainStack_9,
  MR_Word MaybeDoubleWidthFloats_10,
  MR_Word MaybeReservedVarInfo_11,
  MR_Word ColourVars_12,
  MR_Integer STATE_VARIABLE_FirstFreeSlot_0_18,
  MR_Integer * STATE_VARIABLE_FirstFreeSlot_19,
  MR_Word STATE_VARIABLE_StackSlots_0_20,
  MR_Word * STATE_VARIABLE_StackSlots_21)
{
  {
    MR_bool succeeded;

    if ((MaybeDoubleWidthFloats_10 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Integer SlotNum_47;
      MR_Word Locn_48;
      MR_Word VarList_49;
      MR_Integer ResSlotNum_46;
      MR_Word TypeCtorInfo_31_57;
      MR_Word ResVar_45;
      MR_Word Var_50;

      succeeded = (MaybeReservedVarInfo_11 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeReservedVarInfo_11, (MR_Integer) 0))));
        ResVar_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_50, (MR_Integer) 0))));
        ResSlotNum_46 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_50, (MR_Integer) 1))));
        TypeCtorInfo_31_57 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
        succeeded = parse_tree__set_of_var__member_2_p_0(TypeCtorInfo_31_57, ColourVars_12, ResVar_45);
      }
      if (succeeded)
      {
        mercury__require__expect_3_p_0((MR_Word) (&ll_backend__stack_alloc_scalar_common_3[1]), (MR_String) "predicate \140ll_backend.stack_alloc.allocate_next_stack_slot\'/8", (MR_String) "reserved multiple stack slots");
        SlotNum_47 = ResSlotNum_46;
        *STATE_VARIABLE_FirstFreeSlot_19 = STATE_VARIABLE_FirstFreeSlot_0_18;
      }
      else
      {
        SlotNum_47 = STATE_VARIABLE_FirstFreeSlot_0_18;
        *STATE_VARIABLE_FirstFreeSlot_19 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_FirstFreeSlot_0_18 + (MR_Unsigned) 1);
      }
      switch (MainStack_9) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            Locn_48 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Locn_48, 0) = ((MR_Box) (SlotNum_47));
            MR_hl_field(MR_mktag(0), Locn_48, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          }
          break;
        case (MR_Integer) 1:
          {
            Locn_48 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Locn_48, 0) = ((MR_Box) (SlotNum_47));
          }
          break;
      }
      VarList_49 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ColourVars_12);
      ll_backend__stack_alloc__allocate_given_stack_slot_4_p_0(Locn_48, VarList_49, STATE_VARIABLE_StackSlots_0_20, STATE_VARIABLE_StackSlots_21);
    }
    else
    {
      MR_Word VarTypes_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDoubleWidthFloats_10, (MR_Integer) 0))));
      MR_Word DoubleWidthVars_16;
      MR_Word SingleWidthVars_17;
      MR_Word Var_22;
      MR_Integer STATE_VARIABLE_FirstFreeSlot_24_24;
      MR_Word STATE_VARIABLE_StackSlots_25_25;

      {
        Var_22 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (&ll_backend__stack_alloc_scalar_common_3[2]));
        MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (ll_backend__stack_alloc__allocate_stack_slots_to_colour_8_p_0_2));
        MR_hl_field(MR_mktag(0), Var_22, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_22, 3) = ((MR_Box) (VarTypes_15));
      }
      parse_tree__set_of_var__divide_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_22, ColourVars_12, &DoubleWidthVars_16, &SingleWidthVars_17);
      succeeded = parse_tree__set_of_var__is_non_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SingleWidthVars_17);
      if (succeeded)
      {
        MR_Integer SlotNum_76;
        MR_Word Locn_77;
        MR_Word VarList_78;
        MR_Integer ResSlotNum_75;
        MR_Word TypeCtorInfo_31_86;
        MR_Word ResVar_74;
        MR_Word Var_79;

        succeeded = (MaybeReservedVarInfo_11 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_79 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeReservedVarInfo_11, (MR_Integer) 0))));
          ResVar_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_79, (MR_Integer) 0))));
          ResSlotNum_75 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_79, (MR_Integer) 1))));
          TypeCtorInfo_31_86 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
          succeeded = parse_tree__set_of_var__member_2_p_0(TypeCtorInfo_31_86, SingleWidthVars_17, ResVar_74);
        }
        if (succeeded)
        {
          mercury__require__expect_3_p_0((MR_Word) (&ll_backend__stack_alloc_scalar_common_3[3]), (MR_String) "predicate \140ll_backend.stack_alloc.allocate_next_stack_slot\'/8", (MR_String) "reserved multiple stack slots");
          SlotNum_76 = ResSlotNum_75;
          STATE_VARIABLE_FirstFreeSlot_24_24 = STATE_VARIABLE_FirstFreeSlot_0_18;
        }
        else
        {
          SlotNum_76 = STATE_VARIABLE_FirstFreeSlot_0_18;
          STATE_VARIABLE_FirstFreeSlot_24_24 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_FirstFreeSlot_0_18 + (MR_Unsigned) 1);
        }
        switch (MainStack_9) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              Locn_77 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Locn_77, 0) = ((MR_Box) (SlotNum_76));
              MR_hl_field(MR_mktag(0), Locn_77, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 1:
            {
              Locn_77 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Locn_77, 0) = ((MR_Box) (SlotNum_76));
            }
            break;
        }
        VarList_78 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SingleWidthVars_17);
        ll_backend__stack_alloc__allocate_given_stack_slot_4_p_0(Locn_77, VarList_78, STATE_VARIABLE_StackSlots_0_20, &STATE_VARIABLE_StackSlots_25_25);
      }
      else
      {
        STATE_VARIABLE_StackSlots_25_25 = STATE_VARIABLE_StackSlots_0_20;
        STATE_VARIABLE_FirstFreeSlot_24_24 = STATE_VARIABLE_FirstFreeSlot_0_18;
      }
      succeeded = parse_tree__set_of_var__is_non_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), DoubleWidthVars_16);
      if (succeeded)
      {
        MR_Integer STATE_VARIABLE_FirstFreeSlot_26_26;

        succeeded = mercury__int__even_1_p_0(STATE_VARIABLE_FirstFreeSlot_24_24);
        if (succeeded)
          STATE_VARIABLE_FirstFreeSlot_26_26 = STATE_VARIABLE_FirstFreeSlot_24_24;
        else
          STATE_VARIABLE_FirstFreeSlot_26_26 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_FirstFreeSlot_24_24 + (MR_Unsigned) 1);
        ll_backend__stack_alloc__allocate_next_stack_slot_8_p_0(MainStack_9, (MR_Integer) 1, MaybeReservedVarInfo_11, DoubleWidthVars_16, STATE_VARIABLE_FirstFreeSlot_26_26, STATE_VARIABLE_FirstFreeSlot_19, STATE_VARIABLE_StackSlots_25_25, STATE_VARIABLE_StackSlots_21);
      }
      else
      {
        *STATE_VARIABLE_StackSlots_21 = STATE_VARIABLE_StackSlots_25_25;
        *STATE_VARIABLE_FirstFreeSlot_19 = STATE_VARIABLE_FirstFreeSlot_24_24;
      }
    }
  }
}

static MR_bool MR_CALL 
ll_backend__stack_alloc__allocate_next_stack_slot_8_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__stack_alloc__IntroducedFrom__pred__allocate_next_stack_slot__294__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__stack_alloc__allocate_next_stack_slot_8_p_0(
  MR_Word MainStack_9,
  MR_Word StackSlotWidth_10,
  MR_Word MaybeReservedVarInfo_11,
  MR_Word Vars_12,
  MR_Integer STATE_VARIABLE_FirstFreeSlot_0_20,
  MR_Integer * STATE_VARIABLE_FirstFreeSlot_21,
  MR_Word STATE_VARIABLE_StackSlots_0_22,
  MR_Word * STATE_VARIABLE_StackSlots_23)
{
  {
    MR_bool succeeded = (MaybeReservedVarInfo_11 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Integer SlotNum_17;
    MR_Word Locn_18;
    MR_Word VarList_19;
    MR_Integer ResSlotNum_16;
    MR_Word TypeCtorInfo_31_31;
    MR_Word ResVar_15;
    MR_Word Var_24;

    if (succeeded)
    {
      Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeReservedVarInfo_11, (MR_Integer) 0))));
      ResVar_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 0))));
      ResSlotNum_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 1))));
      TypeCtorInfo_31_31 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
      succeeded = parse_tree__set_of_var__member_2_p_0(TypeCtorInfo_31_31, Vars_12, ResVar_15);
    }
    if (succeeded)
    {
      MR_Word Var_25;

      {
        Var_25 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (&ll_backend__stack_alloc_scalar_common_3[0]));
        MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) (ll_backend__stack_alloc__allocate_next_stack_slot_8_p_0_1));
        MR_hl_field(MR_mktag(0), Var_25, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_25, 3) = ((MR_Box) (StackSlotWidth_10));
        MR_hl_field(MR_mktag(0), Var_25, 4) = ((MR_Box) ((MR_Integer) 0));
      }
      mercury__require__expect_3_p_0(Var_25, (MR_String) "predicate \140ll_backend.stack_alloc.allocate_next_stack_slot\'/8", (MR_String) "reserved multiple stack slots");
      SlotNum_17 = ResSlotNum_16;
      *STATE_VARIABLE_FirstFreeSlot_21 = STATE_VARIABLE_FirstFreeSlot_0_20;
    }
    else
    {
      SlotNum_17 = STATE_VARIABLE_FirstFreeSlot_0_20;
      switch (StackSlotWidth_10) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          *STATE_VARIABLE_FirstFreeSlot_21 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_FirstFreeSlot_0_20 + (MR_Unsigned) 2);
          break;
        case (MR_Integer) 0:
          *STATE_VARIABLE_FirstFreeSlot_21 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_FirstFreeSlot_0_20 + (MR_Unsigned) 1);
          break;
      }
    }
    switch (MainStack_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          Locn_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Locn_18, 0) = ((MR_Box) (SlotNum_17));
          MR_hl_field(MR_mktag(0), Locn_18, 1) = (MR_Box) ((MR_Unsigned) (StackSlotWidth_10));
        }
        break;
      case (MR_Integer) 1:
        {
          Locn_18 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Locn_18, 0) = ((MR_Box) (SlotNum_17));
        }
        break;
    }
    VarList_19 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_12);
    ll_backend__stack_alloc__allocate_given_stack_slot_4_p_0(Locn_18, VarList_19, STATE_VARIABLE_StackSlots_0_22, STATE_VARIABLE_StackSlots_23);
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
      MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Vars_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_StackSlots_15_15;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_StackSlots_0_3;

      mercury__map__det_insert_4_p_0((MR_Word) (&ll_backend__stack_alloc_scalar_common_1[2]), (MR_Word) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0), ((MR_Box) (Var_10)), ((MR_Box) (HeadVar__1_1)), STATE_VARIABLE_StackSlots_0_3, &STATE_VARIABLE_StackSlots_15_15);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Vars_11;
      next_value_of_STATE_VARIABLE_StackSlots_0_3 = STATE_VARIABLE_StackSlots_15_15;
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
  {
    MR_bool succeeded;

    succeeded = ll_backend__stack_alloc____Unify____stack_alloc_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__stack_alloc____Compare____stack_alloc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__stack_alloc____Compare____stack_alloc_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__4_4;

    ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__4_4);
    *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
  }
}

static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__4_4;

    ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__4_4);
    *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
  }
}

static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__4_4;

    ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__4_4);
    *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
  }
}

static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_recursive_call_for_loop_control_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__4_4;

    ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_recursive_call_for_loop_control_4_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__4_4);
    *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
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

// Ensure everything is compiled with the same grade.
const char *mercury__ll_backend__stack_alloc__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ll_backend.stack_alloc.
