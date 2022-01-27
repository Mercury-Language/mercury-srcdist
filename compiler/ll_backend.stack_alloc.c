/*
** Automatically generated from `stack_alloc.m'
** by the Mercury compiler,
** version rotd-2015-11-30
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




#line 160 "ll_backend.stack_alloc.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_alloc__array__pti_array_1__plain_check_hlds__type_util__type_ctor_info_is_dummy_type_0;

#line 163 "ll_backend.stack_alloc.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_alloc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 166 "ll_backend.stack_alloc.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_alloc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 169 "ll_backend.stack_alloc.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__stack_alloc__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 172 "ll_backend.stack_alloc.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_alloc__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 175 "ll_backend.stack_alloc.c"
static const MR_Integer ll_backend__stack_alloc__ll_backend__stack_alloc__functor_number_map_stack_alloc_0[1];

#line 178 "ll_backend.stack_alloc.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_alloc__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 181 "ll_backend.stack_alloc.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_alloc__set_ordlist__ti_set_ordlist_1sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 184 "ll_backend.stack_alloc.c"
static const MR_NotagFunctorDesc ll_backend__stack_alloc__ll_backend__stack_alloc__notag_functor_desc_stack_alloc_0;

#line 187 "ll_backend.stack_alloc.c"
static MR_bool MR_CALL 
ll_backend__stack_alloc____Unify____stack_alloc_0_0_10001(
#line 190 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_1,
#line 192 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_2);

#line 195 "ll_backend.stack_alloc.c"
static void MR_CALL 
ll_backend__stack_alloc____Compare____stack_alloc_0_0_10001(
#line 198 "ll_backend.stack_alloc.c"
  MR_Box * ll_backend__stack_alloc__wrapper_arg_1,
#line 200 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_2,
#line 202 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_3);

#line 205 "ll_backend.stack_alloc.c"
static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_p_0_10001(
#line 208 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__closure_arg,
#line 210 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_1,
#line 212 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_2,
#line 214 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_3,
#line 216 "ll_backend.stack_alloc.c"
  MR_Box * ll_backend__stack_alloc__wrapper_arg_4);

#line 219 "ll_backend.stack_alloc.c"
static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_p_0_10001(
#line 222 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__closure_arg,
#line 224 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_1,
#line 226 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_2,
#line 228 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_3,
#line 230 "ll_backend.stack_alloc.c"
  MR_Box * ll_backend__stack_alloc__wrapper_arg_4);

#line 233 "ll_backend.stack_alloc.c"
static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_p_0_10001(
#line 236 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__closure_arg,
#line 238 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_1,
#line 240 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_2,
#line 242 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_3,
#line 244 "ll_backend.stack_alloc.c"
  MR_Box * ll_backend__stack_alloc__wrapper_arg_4);

#line 247 "ll_backend.stack_alloc.c"
static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_recursive_call_for_loop_control_4_4_p_0_10001(
#line 250 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__closure_arg,
#line 252 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_1,
#line 254 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_2,
#line 256 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_3,
#line 258 "ll_backend.stack_alloc.c"
  MR_Box * ll_backend__stack_alloc__wrapper_arg_4);

#line 294 "stack_alloc.m"
static MR_bool MR_CALL 
ll_backend__stack_alloc__IntroducedFrom__pred__allocate_next_stack_slot__294__1_2_p_0(
#line 294 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__StackSlotWidth_10,
#line 294 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__2_29);

#line 189 "stack_alloc.m"
static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_recursive_call_for_loop_control_4_4_p_0_1(
#line 189 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__closure_arg,
#line 189 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__wrapper_arg_1,
#line 189 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__wrapper_arg_2,
#line 189 "stack_alloc.m"
  MR_Box * ll_backend__stack_alloc__wrapper_arg_3);

#line 139 "stack_alloc.m"
static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_recursive_call_for_loop_control_4_4_p_0(
#line 139 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__1_1,
#line 139 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__2_2,
#line 139 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__3_3,
#line 139 "stack_alloc.m"
  MR_Word * ll_backend__stack_alloc__HeadVar__4_4);

#line 205 "stack_alloc.m"
static MR_bool MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_p_0_1(
#line 205 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__closure_arg,
#line 205 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__wrapper_arg_1);

#line 138 "stack_alloc.m"
static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_p_0(
#line 138 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__1_1,
#line 138 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__2_2,
#line 138 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__3_3,
#line 138 "stack_alloc.m"
  MR_Word * ll_backend__stack_alloc__HeadVar__4_4);

#line 205 "stack_alloc.m"
static MR_bool MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_p_0_1(
#line 205 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__closure_arg,
#line 205 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__wrapper_arg_1);

#line 137 "stack_alloc.m"
static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_p_0(
#line 137 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__1_1,
#line 137 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__2_2,
#line 137 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__3_3,
#line 137 "stack_alloc.m"
  MR_Word * ll_backend__stack_alloc__HeadVar__4_4);

#line 205 "stack_alloc.m"
static MR_bool MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_p_0_1(
#line 205 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__closure_arg,
#line 205 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__wrapper_arg_1);

#line 136 "stack_alloc.m"
static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_p_0(
#line 136 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__1_1,
#line 136 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__2_2,
#line 136 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__3_3,
#line 136 "stack_alloc.m"
  MR_Word * ll_backend__stack_alloc__HeadVar__4_4);

#line 128 "stack_alloc.m"
static void MR_CALL 
ll_backend__stack_alloc____Compare____stack_alloc_0_0(
#line 128 "stack_alloc.m"
  MR_Word * ll_backend__stack_alloc__HeadVar__1_1,
#line 128 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__2_2,
#line 128 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__3_3);

#line 128 "stack_alloc.m"
static MR_bool MR_CALL 
ll_backend__stack_alloc____Unify____stack_alloc_0_0(
#line 128 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__1_1,
#line 128 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__2_2);

#line 366 "stack_alloc.m"
static MR_bool MR_CALL 
ll_backend__stack_alloc__var_is_float_2_p_0(
#line 366 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__VarTypes_3,
#line 366 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__Var_4);

#line 332 "stack_alloc.m"
static void MR_CALL 
ll_backend__stack_alloc__allocate_dummy_stack_slots_5_p_0(
#line 332 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__MainStack_1,
#line 332 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__2_2,
#line 332 "stack_alloc.m"
  MR_Integer ll_backend__stack_alloc__N0_3,
#line 332 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0_4,
#line 332 "stack_alloc.m"
  MR_Word * ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_5);

#line 311 "stack_alloc.m"
static void MR_CALL 
ll_backend__stack_alloc__allocate_given_stack_slot_4_p_0(
#line 311 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__1_1,
#line 311 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__2_2,
#line 311 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0_3,
#line 311 "stack_alloc.m"
  MR_Word * ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_4);

#line 294 "stack_alloc.m"
static MR_bool MR_CALL 
ll_backend__stack_alloc__allocate_next_stack_slot_8_p_0_1(
#line 294 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__closure_arg);

#line 284 "stack_alloc.m"
static void MR_CALL 
ll_backend__stack_alloc__allocate_next_stack_slot_8_p_0(
#line 284 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__MainStack_9,
#line 284 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__StackSlotWidth_10,
#line 284 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__MaybeReservedVarInfo_11,
#line 284 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__Vars_12,
#line 284 "stack_alloc.m"
  MR_Integer ll_backend__stack_alloc__STATE_VARIABLE_FirstFreeSlot_0_20,
#line 284 "stack_alloc.m"
  MR_Integer * ll_backend__stack_alloc__STATE_VARIABLE_FirstFreeSlot_21,
#line 284 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0_22,
#line 284 "stack_alloc.m"
  MR_Word * ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_23);

#line 265 "stack_alloc.m"
static MR_bool MR_CALL 
ll_backend__stack_alloc__allocate_stack_slots_to_colours_7_p_0_2(
#line 265 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__closure_arg,
#line 265 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__wrapper_arg_1);

#line 294 "stack_alloc.m"
static MR_bool MR_CALL 
ll_backend__stack_alloc__allocate_stack_slots_to_colours_7_p_0_1(
#line 294 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__closure_arg);

#line 234 "stack_alloc.m"
static void MR_CALL 
ll_backend__stack_alloc__allocate_stack_slots_to_colours_7_p_0(
#line 234 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__MainStack_1,
#line 234 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__MaybeDoubleWidthFloats_2,
#line 234 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__MaybeReservedVarInfo_3,
#line 234 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__4_4,
#line 234 "stack_alloc.m"
  MR_Integer ll_backend__stack_alloc__STATE_VARIABLE_FirstFreeSlot_0_5,
#line 234 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0_6,
#line 234 "stack_alloc.m"
  MR_Word * ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_7);

#line 207 "stack_alloc.m"
static MR_bool MR_CALL 
ll_backend__stack_alloc__var_is_not_dummy_2_p_0(
#line 207 "stack_alloc.m"
  MR_ArrayPtr ll_backend__stack_alloc__DummyVarArray_3,
#line 207 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__Var_4);

#line 205 "stack_alloc.m"
static MR_bool MR_CALL 
ll_backend__stack_alloc__set_for_loop_control_4_p_0_1(
#line 205 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__closure_arg,
#line 205 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__wrapper_arg_1);

#line 191 "stack_alloc.m"
static void MR_CALL 
ll_backend__stack_alloc__set_for_loop_control_4_p_0(
#line 191 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__AllocData_5,
#line 191 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__Set0_6,
#line 191 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__STATE_VARIABLE_StackAlloc_0_11,
#line 191 "stack_alloc.m"
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



#line 593 "ll_backend.stack_alloc.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_alloc__array__pti_array_1__plain_check_hlds__type_util__type_ctor_info_is_dummy_type_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__type_util__check_hlds__type_util__type_ctor_info_is_dummy_type_0
  }
};

#line 601 "ll_backend.stack_alloc.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_alloc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 609 "ll_backend.stack_alloc.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_alloc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 617 "ll_backend.stack_alloc.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__stack_alloc__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &ll_backend__stack_alloc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 626 "ll_backend.stack_alloc.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_alloc__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__stack_alloc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 634 "ll_backend.stack_alloc.c"
static const MR_Integer ll_backend__stack_alloc__ll_backend__stack_alloc__functor_number_map_stack_alloc_0[1] = {
  (MR_Integer) 0
};

#line 639 "ll_backend.stack_alloc.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_alloc__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_TypeInfo) &ll_backend__stack_alloc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 647 "ll_backend.stack_alloc.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_alloc__set_ordlist__ti_set_ordlist_1sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &ll_backend__stack_alloc__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 655 "ll_backend.stack_alloc.c"
static const MR_NotagFunctorDesc ll_backend__stack_alloc__ll_backend__stack_alloc__notag_functor_desc_stack_alloc_0 = {
  (MR_String) "stack_alloc",
  (MR_PseudoTypeInfo) &ll_backend__stack_alloc__set_ordlist__ti_set_ordlist_1sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  NULL
};

#line 662 "ll_backend.stack_alloc.c"
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

#line 679 "ll_backend.stack_alloc.c"
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

#line 692 "ll_backend.stack_alloc.c"
static MR_bool MR_CALL 
ll_backend__stack_alloc____Unify____stack_alloc_0_0_10001(
#line 695 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_1,
#line 697 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_2)
#line 699 "ll_backend.stack_alloc.c"
{
#line 701 "ll_backend.stack_alloc.c"
  {
#line 703 "ll_backend.stack_alloc.c"
    MR_bool ll_backend__stack_alloc__succeeded;

#line 706 "ll_backend.stack_alloc.c"
    {
#line 708 "ll_backend.stack_alloc.c"
      ll_backend__stack_alloc__succeeded = ll_backend__stack_alloc____Unify____stack_alloc_0_0(((MR_Word) ll_backend__stack_alloc__wrapper_arg_1), ((MR_Word) ll_backend__stack_alloc__wrapper_arg_2));
    }
#line 711 "ll_backend.stack_alloc.c"
    return ll_backend__stack_alloc__succeeded;
#line 713 "ll_backend.stack_alloc.c"
  }
#line 715 "ll_backend.stack_alloc.c"
}

#line 718 "ll_backend.stack_alloc.c"
static void MR_CALL 
ll_backend__stack_alloc____Compare____stack_alloc_0_0_10001(
#line 721 "ll_backend.stack_alloc.c"
  MR_Box * ll_backend__stack_alloc__wrapper_arg_1,
#line 723 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_2,
#line 725 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_3)
#line 727 "ll_backend.stack_alloc.c"
{
#line 729 "ll_backend.stack_alloc.c"
  {
#line 731 "ll_backend.stack_alloc.c"
    MR_Word ll_backend__stack_alloc__conv0_HeadVar__1_1;

#line 734 "ll_backend.stack_alloc.c"
    {
#line 736 "ll_backend.stack_alloc.c"
      ll_backend__stack_alloc____Compare____stack_alloc_0_0(&ll_backend__stack_alloc__conv0_HeadVar__1_1, ((MR_Word) ll_backend__stack_alloc__wrapper_arg_2), ((MR_Word) ll_backend__stack_alloc__wrapper_arg_3));
    }
#line 739 "ll_backend.stack_alloc.c"
    *ll_backend__stack_alloc__wrapper_arg_1 = ((MR_Box) (ll_backend__stack_alloc__conv0_HeadVar__1_1));
#line 741 "ll_backend.stack_alloc.c"
  }
#line 743 "ll_backend.stack_alloc.c"
}

#line 746 "ll_backend.stack_alloc.c"
static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_p_0_10001(
#line 749 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__closure_arg,
#line 751 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_1,
#line 753 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_2,
#line 755 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_3,
#line 757 "ll_backend.stack_alloc.c"
  MR_Box * ll_backend__stack_alloc__wrapper_arg_4)
#line 759 "ll_backend.stack_alloc.c"
{
#line 761 "ll_backend.stack_alloc.c"
  {
#line 763 "ll_backend.stack_alloc.c"
    MR_Box ll_backend__stack_alloc__closure;
#line 765 "ll_backend.stack_alloc.c"
    MR_Word ll_backend__stack_alloc__conv0_HeadVar__4_4;

#line 768 "ll_backend.stack_alloc.c"
    ll_backend__stack_alloc__closure = ll_backend__stack_alloc__closure_arg;
#line 770 "ll_backend.stack_alloc.c"
    {
#line 772 "ll_backend.stack_alloc.c"
      ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_p_0(((MR_Word) ll_backend__stack_alloc__wrapper_arg_1), ((MR_Word) ll_backend__stack_alloc__wrapper_arg_2), ((MR_Word) ll_backend__stack_alloc__wrapper_arg_3), &ll_backend__stack_alloc__conv0_HeadVar__4_4);
    }
#line 775 "ll_backend.stack_alloc.c"
    *ll_backend__stack_alloc__wrapper_arg_4 = ((MR_Box) (ll_backend__stack_alloc__conv0_HeadVar__4_4));
#line 777 "ll_backend.stack_alloc.c"
  }
#line 779 "ll_backend.stack_alloc.c"
}

#line 782 "ll_backend.stack_alloc.c"
static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_p_0_10001(
#line 785 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__closure_arg,
#line 787 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_1,
#line 789 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_2,
#line 791 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_3,
#line 793 "ll_backend.stack_alloc.c"
  MR_Box * ll_backend__stack_alloc__wrapper_arg_4)
#line 795 "ll_backend.stack_alloc.c"
{
#line 797 "ll_backend.stack_alloc.c"
  {
#line 799 "ll_backend.stack_alloc.c"
    MR_Box ll_backend__stack_alloc__closure;
#line 801 "ll_backend.stack_alloc.c"
    MR_Word ll_backend__stack_alloc__conv0_HeadVar__4_4;

#line 804 "ll_backend.stack_alloc.c"
    ll_backend__stack_alloc__closure = ll_backend__stack_alloc__closure_arg;
#line 806 "ll_backend.stack_alloc.c"
    {
#line 808 "ll_backend.stack_alloc.c"
      ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_p_0(((MR_Word) ll_backend__stack_alloc__wrapper_arg_1), ((MR_Word) ll_backend__stack_alloc__wrapper_arg_2), ((MR_Word) ll_backend__stack_alloc__wrapper_arg_3), &ll_backend__stack_alloc__conv0_HeadVar__4_4);
    }
#line 811 "ll_backend.stack_alloc.c"
    *ll_backend__stack_alloc__wrapper_arg_4 = ((MR_Box) (ll_backend__stack_alloc__conv0_HeadVar__4_4));
#line 813 "ll_backend.stack_alloc.c"
  }
#line 815 "ll_backend.stack_alloc.c"
}

#line 818 "ll_backend.stack_alloc.c"
static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_p_0_10001(
#line 821 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__closure_arg,
#line 823 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_1,
#line 825 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_2,
#line 827 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_3,
#line 829 "ll_backend.stack_alloc.c"
  MR_Box * ll_backend__stack_alloc__wrapper_arg_4)
#line 831 "ll_backend.stack_alloc.c"
{
#line 833 "ll_backend.stack_alloc.c"
  {
#line 835 "ll_backend.stack_alloc.c"
    MR_Box ll_backend__stack_alloc__closure;
#line 837 "ll_backend.stack_alloc.c"
    MR_Word ll_backend__stack_alloc__conv0_HeadVar__4_4;

#line 840 "ll_backend.stack_alloc.c"
    ll_backend__stack_alloc__closure = ll_backend__stack_alloc__closure_arg;
#line 842 "ll_backend.stack_alloc.c"
    {
#line 844 "ll_backend.stack_alloc.c"
      ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_p_0(((MR_Word) ll_backend__stack_alloc__wrapper_arg_1), ((MR_Word) ll_backend__stack_alloc__wrapper_arg_2), ((MR_Word) ll_backend__stack_alloc__wrapper_arg_3), &ll_backend__stack_alloc__conv0_HeadVar__4_4);
    }
#line 847 "ll_backend.stack_alloc.c"
    *ll_backend__stack_alloc__wrapper_arg_4 = ((MR_Box) (ll_backend__stack_alloc__conv0_HeadVar__4_4));
#line 849 "ll_backend.stack_alloc.c"
  }
#line 851 "ll_backend.stack_alloc.c"
}

#line 854 "ll_backend.stack_alloc.c"
static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_recursive_call_for_loop_control_4_4_p_0_10001(
#line 857 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__closure_arg,
#line 859 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_1,
#line 861 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_2,
#line 863 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_3,
#line 865 "ll_backend.stack_alloc.c"
  MR_Box * ll_backend__stack_alloc__wrapper_arg_4)
#line 867 "ll_backend.stack_alloc.c"
{
#line 869 "ll_backend.stack_alloc.c"
  {
#line 871 "ll_backend.stack_alloc.c"
    MR_Box ll_backend__stack_alloc__closure;
#line 873 "ll_backend.stack_alloc.c"
    MR_Word ll_backend__stack_alloc__conv0_HeadVar__4_4;

#line 876 "ll_backend.stack_alloc.c"
    ll_backend__stack_alloc__closure = ll_backend__stack_alloc__closure_arg;
#line 878 "ll_backend.stack_alloc.c"
    {
#line 880 "ll_backend.stack_alloc.c"
      ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_recursive_call_for_loop_control_4_4_p_0(((MR_Word) ll_backend__stack_alloc__wrapper_arg_1), ((MR_Word) ll_backend__stack_alloc__wrapper_arg_2), ((MR_Word) ll_backend__stack_alloc__wrapper_arg_3), &ll_backend__stack_alloc__conv0_HeadVar__4_4);
    }
#line 883 "ll_backend.stack_alloc.c"
    *ll_backend__stack_alloc__wrapper_arg_4 = ((MR_Box) (ll_backend__stack_alloc__conv0_HeadVar__4_4));
#line 885 "ll_backend.stack_alloc.c"
  }
#line 887 "ll_backend.stack_alloc.c"
}

#line 294 "stack_alloc.m"
static MR_bool MR_CALL 
ll_backend__stack_alloc__IntroducedFrom__pred__allocate_next_stack_slot__294__1_2_p_0(
#line 294 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__StackSlotWidth_10,
#line 294 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__2_29)
#line 294 "stack_alloc.m"
{
#line 294 "stack_alloc.m"
  {
#line 294 "stack_alloc.m"
    MR_bool ll_backend__stack_alloc__succeeded = (ll_backend__stack_alloc__StackSlotWidth_10 == ll_backend__stack_alloc__HeadVar__2_29);

#line 294 "stack_alloc.m"
    return ll_backend__stack_alloc__succeeded;
#line 294 "stack_alloc.m"
  }
#line 294 "stack_alloc.m"
}

#line 189 "stack_alloc.m"
static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_recursive_call_for_loop_control_4_4_p_0_1(
#line 189 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__closure_arg,
#line 189 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__wrapper_arg_1,
#line 189 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__wrapper_arg_2,
#line 189 "stack_alloc.m"
  MR_Box * ll_backend__stack_alloc__wrapper_arg_3)
#line 189 "stack_alloc.m"
{
#line 189 "stack_alloc.m"
  {
#line 189 "stack_alloc.m"
    MR_Box ll_backend__stack_alloc__closure = ll_backend__stack_alloc__closure_arg;
#line 189 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__conv0_STATE_VARIABLE_StackAlloc_12;

#line 189 "stack_alloc.m"
    {
#line 189 "stack_alloc.m"
      ll_backend__stack_alloc__set_for_loop_control_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__stack_alloc__wrapper_arg_1), ((MR_Word) ll_backend__stack_alloc__wrapper_arg_2), &ll_backend__stack_alloc__conv0_STATE_VARIABLE_StackAlloc_12);
    }
#line 189 "stack_alloc.m"
    *ll_backend__stack_alloc__wrapper_arg_3 = ((MR_Box) (ll_backend__stack_alloc__conv0_STATE_VARIABLE_StackAlloc_12));
#line 189 "stack_alloc.m"
  }
#line 189 "stack_alloc.m"
}

#line 139 "stack_alloc.m"
static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_recursive_call_for_loop_control_4_4_p_0(
#line 139 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__1_1,
#line 139 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__2_2,
#line 139 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__3_3,
#line 139 "stack_alloc.m"
  MR_Word * ll_backend__stack_alloc__HeadVar__4_4)
#line 139 "stack_alloc.m"
{
#line 187 "stack_alloc.m"
  {
#line 187 "stack_alloc.m"
    MR_bool ll_backend__stack_alloc__succeeded;
#line 187 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__StackVarsSets_10 = (MR_Word) ll_backend__stack_alloc__HeadVar__1_1;
#line 187 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_11_11;
#line 189 "stack_alloc.m"
    MR_Box ll_backend__stack_alloc__conv1_HeadVar__4_4;

#line 189 "stack_alloc.m"
    {
#line 189 "stack_alloc.m"
      ll_backend__stack_alloc__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 189 "stack_alloc.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_11_11, 0) = ((MR_Box) (&ll_backend__stack_alloc_scalar_common_4[0]));
#line 189 "stack_alloc.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_11_11, 1) = ((MR_Box) (ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_recursive_call_for_loop_control_4_4_p_0_1));
#line 189 "stack_alloc.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_11_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 189 "stack_alloc.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_11_11, 3) = ((MR_Box) (ll_backend__stack_alloc__HeadVar__2_2));
#line 189 "stack_alloc.m"
    }
#line 189 "stack_alloc.m"
    {
#line 189 "stack_alloc.m"
      mercury__list__foldl_4_p_0((MR_Word) &ll_backend__stack_alloc_scalar_common_1[1], (MR_Word) &ll_backend__stack_alloc__ll_backend__stack_alloc__type_ctor_info_stack_alloc_0, ll_backend__stack_alloc__V_11_11, ll_backend__stack_alloc__StackVarsSets_10, ((MR_Box) (ll_backend__stack_alloc__HeadVar__3_3)), &ll_backend__stack_alloc__conv1_HeadVar__4_4);
    }
#line 189 "stack_alloc.m"
    *ll_backend__stack_alloc__HeadVar__4_4 = ((MR_Word) ll_backend__stack_alloc__conv1_HeadVar__4_4);
#line 187 "stack_alloc.m"
  }
#line 139 "stack_alloc.m"
}

#line 205 "stack_alloc.m"
static MR_bool MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_p_0_1(
#line 205 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__closure_arg,
#line 205 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__wrapper_arg_1)
#line 205 "stack_alloc.m"
{
#line 205 "stack_alloc.m"
  {
#line 205 "stack_alloc.m"
    MR_bool ll_backend__stack_alloc__succeeded;
#line 205 "stack_alloc.m"
    MR_Box ll_backend__stack_alloc__closure = ll_backend__stack_alloc__closure_arg;

#line 205 "stack_alloc.m"
    {
#line 205 "stack_alloc.m"
      ll_backend__stack_alloc__succeeded = ll_backend__stack_alloc__var_is_not_dummy_2_p_0(((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__stack_alloc__wrapper_arg_1));
    }
#line 205 "stack_alloc.m"
    return ll_backend__stack_alloc__succeeded;
#line 205 "stack_alloc.m"
  }
#line 205 "stack_alloc.m"
}

#line 138 "stack_alloc.m"
static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_p_0(
#line 138 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__1_1,
#line 138 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__2_2,
#line 138 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__3_3,
#line 138 "stack_alloc.m"
  MR_Word * ll_backend__stack_alloc__HeadVar__4_4)
#line 138 "stack_alloc.m"
{
#line 176 "stack_alloc.m"
  {
#line 176 "stack_alloc.m"
    MR_bool ll_backend__stack_alloc__succeeded;
#line 176 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__StackVars0_10 = (MR_Word) ll_backend__stack_alloc__HeadVar__1_1;
#line 176 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__StackVars_11;
#line 176 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__LiveSets0_12;
#line 176 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__LiveSets_13;
#line 176 "stack_alloc.m"
    MR_ArrayPtr ll_backend__stack_alloc__DummyVarArray_19 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 5)));
#line 176 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_20_20;
#line 204 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 0)));
#line 204 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 1)));
#line 204 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 2)));
#line 204 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 3)));
#line 204 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 4)));

#line 205 "stack_alloc.m"
    {
#line 205 "stack_alloc.m"
      ll_backend__stack_alloc__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 205 "stack_alloc.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_20_20, 0) = ((MR_Box) (&ll_backend__stack_alloc_scalar_common_3[0]));
#line 205 "stack_alloc.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_20_20, 1) = ((MR_Box) (ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_p_0_1));
#line 205 "stack_alloc.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_20_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 205 "stack_alloc.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_20_20, 3) = ((MR_Box) (ll_backend__stack_alloc__DummyVarArray_19));
#line 205 "stack_alloc.m"
    }
#line 205 "stack_alloc.m"
    {
#line 205 "stack_alloc.m"
      parse_tree__set_of_var__filter_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__stack_alloc__V_20_20, ll_backend__stack_alloc__StackVars0_10, &ll_backend__stack_alloc__StackVars_11);
    }
#line 180 "stack_alloc.m"
    ll_backend__stack_alloc__LiveSets0_12 = (MR_Word) ll_backend__stack_alloc__HeadVar__3_3;
#line 181 "stack_alloc.m"
    {
#line 181 "stack_alloc.m"
      ll_backend__stack_alloc__LiveSets_13 = mercury__set__insert_2_f_0((MR_Word) &ll_backend__stack_alloc_scalar_common_1[1], ll_backend__stack_alloc__LiveSets0_12, ((MR_Box) (ll_backend__stack_alloc__StackVars_11)));
    }
#line 182 "stack_alloc.m"
    *ll_backend__stack_alloc__HeadVar__4_4 = (MR_Word) ll_backend__stack_alloc__LiveSets_13;
#line 176 "stack_alloc.m"
  }
#line 138 "stack_alloc.m"
}

#line 205 "stack_alloc.m"
static MR_bool MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_p_0_1(
#line 205 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__closure_arg,
#line 205 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__wrapper_arg_1)
#line 205 "stack_alloc.m"
{
#line 205 "stack_alloc.m"
  {
#line 205 "stack_alloc.m"
    MR_bool ll_backend__stack_alloc__succeeded;
#line 205 "stack_alloc.m"
    MR_Box ll_backend__stack_alloc__closure = ll_backend__stack_alloc__closure_arg;

#line 205 "stack_alloc.m"
    {
#line 205 "stack_alloc.m"
      ll_backend__stack_alloc__succeeded = ll_backend__stack_alloc__var_is_not_dummy_2_p_0(((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__stack_alloc__wrapper_arg_1));
    }
#line 205 "stack_alloc.m"
    return ll_backend__stack_alloc__succeeded;
#line 205 "stack_alloc.m"
  }
#line 205 "stack_alloc.m"
}

#line 137 "stack_alloc.m"
static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_p_0(
#line 137 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__1_1,
#line 137 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__2_2,
#line 137 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__3_3,
#line 137 "stack_alloc.m"
  MR_Word * ll_backend__stack_alloc__HeadVar__4_4)
#line 137 "stack_alloc.m"
{
#line 159 "stack_alloc.m"
  {
#line 159 "stack_alloc.m"
    MR_bool ll_backend__stack_alloc__succeeded;
#line 159 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__ResumeOnStack_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__1_1, (MR_Integer) 0)));
#line 159 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__ResumeVars_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__1_1, (MR_Integer) 1)));
#line 159 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__NondetLiveVars_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__1_1, (MR_Integer) 2)));

#line 163 "stack_alloc.m"
#line 163 "stack_alloc.m"
    switch (ll_backend__stack_alloc__ResumeOnStack_10) {
#line 163 "stack_alloc.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 163 "stack_alloc.m"
      case (MR_Integer) 0:
#line 162 "stack_alloc.m"
        *ll_backend__stack_alloc__HeadVar__4_4 = ll_backend__stack_alloc__HeadVar__3_3;
#line 163 "stack_alloc.m"
        break;
#line 163 "stack_alloc.m"
      case (MR_Integer) 1:
#line 164 "stack_alloc.m"
        {
#line 164 "stack_alloc.m"
          MR_Word ll_backend__stack_alloc__LiveSet0_13;
#line 164 "stack_alloc.m"
          MR_Word ll_backend__stack_alloc__LiveSet_14;
#line 164 "stack_alloc.m"
          MR_Word ll_backend__stack_alloc__LiveSets0_15;
#line 164 "stack_alloc.m"
          MR_Word ll_backend__stack_alloc__LiveSets_16;
#line 164 "stack_alloc.m"
          MR_ArrayPtr ll_backend__stack_alloc__DummyVarArray_23;
#line 164 "stack_alloc.m"
          MR_Word ll_backend__stack_alloc__V_24_24;
#line 204 "stack_alloc.m"
          MR_Word ll_backend__stack_alloc__V_25_25;
#line 204 "stack_alloc.m"
          MR_Word ll_backend__stack_alloc__V_26_26;
#line 204 "stack_alloc.m"
          MR_Word ll_backend__stack_alloc__V_27_27;
#line 204 "stack_alloc.m"
          MR_Word ll_backend__stack_alloc__V_28_28;
#line 204 "stack_alloc.m"
          MR_Word ll_backend__stack_alloc__V_29_29;

#line 165 "stack_alloc.m"
          {
#line 165 "stack_alloc.m"
            ll_backend__stack_alloc__LiveSet0_13 = parse_tree__set_of_var__union_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__stack_alloc__ResumeVars_11, ll_backend__stack_alloc__NondetLiveVars_12);
          }
#line 204 "stack_alloc.m"
          ll_backend__stack_alloc__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 0)));
#line 204 "stack_alloc.m"
          ll_backend__stack_alloc__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 1)));
#line 204 "stack_alloc.m"
          ll_backend__stack_alloc__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 2)));
#line 204 "stack_alloc.m"
          ll_backend__stack_alloc__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 3)));
#line 204 "stack_alloc.m"
          ll_backend__stack_alloc__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 4)));
#line 204 "stack_alloc.m"
          ll_backend__stack_alloc__DummyVarArray_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 5)));
#line 205 "stack_alloc.m"
          {
#line 205 "stack_alloc.m"
            ll_backend__stack_alloc__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 205 "stack_alloc.m"
            MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_24_24, 0) = ((MR_Box) (&ll_backend__stack_alloc_scalar_common_3[0]));
#line 205 "stack_alloc.m"
            MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_24_24, 1) = ((MR_Box) (ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_p_0_1));
#line 205 "stack_alloc.m"
            MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_24_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 205 "stack_alloc.m"
            MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_24_24, 3) = ((MR_Box) (ll_backend__stack_alloc__DummyVarArray_23));
#line 205 "stack_alloc.m"
          }
#line 205 "stack_alloc.m"
          {
#line 205 "stack_alloc.m"
            parse_tree__set_of_var__filter_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__stack_alloc__V_24_24, ll_backend__stack_alloc__LiveSet0_13, &ll_backend__stack_alloc__LiveSet_14);
          }
#line 168 "stack_alloc.m"
          ll_backend__stack_alloc__LiveSets0_15 = (MR_Word) ll_backend__stack_alloc__HeadVar__3_3;
#line 169 "stack_alloc.m"
          {
#line 169 "stack_alloc.m"
            ll_backend__stack_alloc__LiveSets_16 = mercury__set__insert_2_f_0((MR_Word) &ll_backend__stack_alloc_scalar_common_1[1], ll_backend__stack_alloc__LiveSets0_15, ((MR_Box) (ll_backend__stack_alloc__LiveSet_14)));
          }
#line 170 "stack_alloc.m"
          *ll_backend__stack_alloc__HeadVar__4_4 = (MR_Word) ll_backend__stack_alloc__LiveSets_16;
#line 164 "stack_alloc.m"
        }
#line 163 "stack_alloc.m"
        break;
#line 163 "stack_alloc.m"
    }
#line 159 "stack_alloc.m"
  }
#line 137 "stack_alloc.m"
}

#line 205 "stack_alloc.m"
static MR_bool MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_p_0_1(
#line 205 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__closure_arg,
#line 205 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__wrapper_arg_1)
#line 205 "stack_alloc.m"
{
#line 205 "stack_alloc.m"
  {
#line 205 "stack_alloc.m"
    MR_bool ll_backend__stack_alloc__succeeded;
#line 205 "stack_alloc.m"
    MR_Box ll_backend__stack_alloc__closure = ll_backend__stack_alloc__closure_arg;

#line 205 "stack_alloc.m"
    {
#line 205 "stack_alloc.m"
      ll_backend__stack_alloc__succeeded = ll_backend__stack_alloc__var_is_not_dummy_2_p_0(((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__stack_alloc__wrapper_arg_1));
    }
#line 205 "stack_alloc.m"
    return ll_backend__stack_alloc__succeeded;
#line 205 "stack_alloc.m"
  }
#line 205 "stack_alloc.m"
}

#line 136 "stack_alloc.m"
static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_p_0(
#line 136 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__1_1,
#line 136 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__2_2,
#line 136 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__3_3,
#line 136 "stack_alloc.m"
  MR_Word * ll_backend__stack_alloc__HeadVar__4_4)
#line 136 "stack_alloc.m"
{
#line 146 "stack_alloc.m"
  {
#line 146 "stack_alloc.m"
    MR_bool ll_backend__stack_alloc__succeeded;
#line 146 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__ForwardVars_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__1_1, (MR_Integer) 0)));
#line 146 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__ResumeVars_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__1_1, (MR_Integer) 1)));
#line 146 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__NondetLiveVars_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__1_1, (MR_Integer) 2)));
#line 146 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__LiveSet0_13;
#line 146 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__LiveSet_14;
#line 146 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__LiveSets0_15;
#line 146 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__LiveSets_16;
#line 146 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_17_17;
#line 146 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_18_18;
#line 146 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_19_19;
#line 146 "stack_alloc.m"
    MR_ArrayPtr ll_backend__stack_alloc__DummyVarArray_27;
#line 146 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_28_28;
#line 204 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_29_29;
#line 204 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_30_30;
#line 204 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_31_31;
#line 204 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_32_32;
#line 204 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_33_33;

#line 149 "stack_alloc.m"
    {
#line 149 "stack_alloc.m"
      ll_backend__stack_alloc__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 149 "stack_alloc.m"
      MR_hl_field(MR_mktag(1), ll_backend__stack_alloc__V_19_19, 0) = ((MR_Box) (ll_backend__stack_alloc__NondetLiveVars_12));
#line 149 "stack_alloc.m"
      MR_hl_field(MR_mktag(1), ll_backend__stack_alloc__V_19_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 149 "stack_alloc.m"
    }
#line 148 "stack_alloc.m"
    {
#line 148 "stack_alloc.m"
      ll_backend__stack_alloc__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 148 "stack_alloc.m"
      MR_hl_field(MR_mktag(1), ll_backend__stack_alloc__V_18_18, 0) = ((MR_Box) (ll_backend__stack_alloc__ResumeVars_11));
#line 148 "stack_alloc.m"
      MR_hl_field(MR_mktag(1), ll_backend__stack_alloc__V_18_18, 1) = ((MR_Box) (ll_backend__stack_alloc__V_19_19));
#line 148 "stack_alloc.m"
    }
#line 148 "stack_alloc.m"
    {
#line 148 "stack_alloc.m"
      ll_backend__stack_alloc__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 148 "stack_alloc.m"
      MR_hl_field(MR_mktag(1), ll_backend__stack_alloc__V_17_17, 0) = ((MR_Box) (ll_backend__stack_alloc__ForwardVars_10));
#line 148 "stack_alloc.m"
      MR_hl_field(MR_mktag(1), ll_backend__stack_alloc__V_17_17, 1) = ((MR_Box) (ll_backend__stack_alloc__V_18_18));
#line 148 "stack_alloc.m"
    }
#line 148 "stack_alloc.m"
    {
#line 148 "stack_alloc.m"
      ll_backend__stack_alloc__LiveSet0_13 = parse_tree__set_of_var__union_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__stack_alloc__V_17_17);
    }
#line 204 "stack_alloc.m"
    ll_backend__stack_alloc__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 0)));
#line 204 "stack_alloc.m"
    ll_backend__stack_alloc__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 1)));
#line 204 "stack_alloc.m"
    ll_backend__stack_alloc__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 2)));
#line 204 "stack_alloc.m"
    ll_backend__stack_alloc__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 3)));
#line 204 "stack_alloc.m"
    ll_backend__stack_alloc__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 4)));
#line 204 "stack_alloc.m"
    ll_backend__stack_alloc__DummyVarArray_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 5)));
#line 205 "stack_alloc.m"
    {
#line 205 "stack_alloc.m"
      ll_backend__stack_alloc__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 205 "stack_alloc.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_28_28, 0) = ((MR_Box) (&ll_backend__stack_alloc_scalar_common_3[0]));
#line 205 "stack_alloc.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_28_28, 1) = ((MR_Box) (ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_p_0_1));
#line 205 "stack_alloc.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_28_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 205 "stack_alloc.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_28_28, 3) = ((MR_Box) (ll_backend__stack_alloc__DummyVarArray_27));
#line 205 "stack_alloc.m"
    }
#line 205 "stack_alloc.m"
    {
#line 205 "stack_alloc.m"
      parse_tree__set_of_var__filter_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__stack_alloc__V_28_28, ll_backend__stack_alloc__LiveSet0_13, &ll_backend__stack_alloc__LiveSet_14);
    }
#line 152 "stack_alloc.m"
    ll_backend__stack_alloc__LiveSets0_15 = (MR_Word) ll_backend__stack_alloc__HeadVar__3_3;
#line 153 "stack_alloc.m"
    {
#line 153 "stack_alloc.m"
      ll_backend__stack_alloc__LiveSets_16 = mercury__set__insert_2_f_0((MR_Word) &ll_backend__stack_alloc_scalar_common_1[1], ll_backend__stack_alloc__LiveSets0_15, ((MR_Box) (ll_backend__stack_alloc__LiveSet_14)));
    }
#line 154 "stack_alloc.m"
    *ll_backend__stack_alloc__HeadVar__4_4 = (MR_Word) ll_backend__stack_alloc__LiveSets_16;
#line 146 "stack_alloc.m"
  }
#line 136 "stack_alloc.m"
}

#line 128 "stack_alloc.m"
static void MR_CALL 
ll_backend__stack_alloc____Compare____stack_alloc_0_0(
#line 128 "stack_alloc.m"
  MR_Word * ll_backend__stack_alloc__HeadVar__1_1,
#line 128 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__2_2,
#line 128 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__3_3)
#line 128 "stack_alloc.m"
{
#line 128 "stack_alloc.m"
  {
#line 128 "stack_alloc.m"
    MR_bool ll_backend__stack_alloc__succeeded;
#line 128 "stack_alloc.m"
    MR_Integer ll_backend__stack_alloc__CastX_6 = (MR_Integer) ll_backend__stack_alloc__HeadVar__2_2;
#line 128 "stack_alloc.m"
    MR_Integer ll_backend__stack_alloc__CastY_7 = (MR_Integer) ll_backend__stack_alloc__HeadVar__3_3;

#line 128 "stack_alloc.m"
    ll_backend__stack_alloc__succeeded = (ll_backend__stack_alloc__CastX_6 == ll_backend__stack_alloc__CastY_7);
#line 128 "stack_alloc.m"
    if (ll_backend__stack_alloc__succeeded)
#line 1424 "ll_backend.stack_alloc.c"
      *ll_backend__stack_alloc__HeadVar__1_1 = (MR_Integer) 0;
#line 128 "stack_alloc.m"
    else
#line 128 "stack_alloc.m"
      {
#line 128 "stack_alloc.m"
        MR_Word ll_backend__stack_alloc__V_4_4 = (MR_Word) ll_backend__stack_alloc__HeadVar__2_2;
#line 128 "stack_alloc.m"
        MR_Word ll_backend__stack_alloc__V_5_5 = (MR_Word) ll_backend__stack_alloc__HeadVar__3_3;

#line 128 "stack_alloc.m"
        {
#line 128 "stack_alloc.m"
          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_alloc_scalar_common_1[3], ll_backend__stack_alloc__HeadVar__1_1, ((MR_Box) (ll_backend__stack_alloc__V_4_4)), ((MR_Box) (ll_backend__stack_alloc__V_5_5)));
        }
#line 128 "stack_alloc.m"
      }
#line 128 "stack_alloc.m"
  }
#line 128 "stack_alloc.m"
}

#line 128 "stack_alloc.m"
static MR_bool MR_CALL 
ll_backend__stack_alloc____Unify____stack_alloc_0_0(
#line 128 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__1_1,
#line 128 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__2_2)
#line 128 "stack_alloc.m"
{
#line 128 "stack_alloc.m"
  {
#line 128 "stack_alloc.m"
    MR_bool ll_backend__stack_alloc__succeeded;
#line 128 "stack_alloc.m"
    MR_Integer ll_backend__stack_alloc__CastX_5 = (MR_Integer) ll_backend__stack_alloc__HeadVar__1_1;
#line 128 "stack_alloc.m"
    MR_Integer ll_backend__stack_alloc__CastY_6 = (MR_Integer) ll_backend__stack_alloc__HeadVar__2_2;

#line 128 "stack_alloc.m"
    ll_backend__stack_alloc__succeeded = (ll_backend__stack_alloc__CastX_5 == ll_backend__stack_alloc__CastY_6);
#line 128 "stack_alloc.m"
    if (ll_backend__stack_alloc__succeeded)
#line 128 "stack_alloc.m"
      ll_backend__stack_alloc__succeeded = MR_TRUE;
#line 128 "stack_alloc.m"
    else
#line 128 "stack_alloc.m"
      {
#line 128 "stack_alloc.m"
        MR_Word ll_backend__stack_alloc__V_3_3 = (MR_Word) ll_backend__stack_alloc__HeadVar__1_1;
#line 128 "stack_alloc.m"
        MR_Word ll_backend__stack_alloc__V_4_4 = (MR_Word) ll_backend__stack_alloc__HeadVar__2_2;

#line 1480 "ll_backend.stack_alloc.c"
        {
#line 1482 "ll_backend.stack_alloc.c"
          ll_backend__stack_alloc__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__stack_alloc_scalar_common_1[3], ((MR_Box) (ll_backend__stack_alloc__V_3_3)), ((MR_Box) (ll_backend__stack_alloc__V_4_4)));
        }
#line 128 "stack_alloc.m"
      }
#line 128 "stack_alloc.m"
    return ll_backend__stack_alloc__succeeded;
#line 128 "stack_alloc.m"
  }
#line 128 "stack_alloc.m"
}

#line 366 "stack_alloc.m"
static MR_bool MR_CALL 
ll_backend__stack_alloc__var_is_float_2_p_0(
#line 366 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__VarTypes_3,
#line 366 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__Var_4)
#line 366 "stack_alloc.m"
{
#line 368 "stack_alloc.m"
  {
#line 368 "stack_alloc.m"
    MR_bool ll_backend__stack_alloc__succeeded;
#line 368 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_5_5;
#line 368 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_6_6;

#line 369 "stack_alloc.m"
    {
#line 369 "stack_alloc.m"
      ll_backend__stack_alloc__V_5_5 = parse_tree__builtin_lib_types__float_type_0_f_0();
    }
#line 369 "stack_alloc.m"
    {
#line 369 "stack_alloc.m"
      hlds__vartypes__lookup_var_type_3_p_0(ll_backend__stack_alloc__VarTypes_3, ll_backend__stack_alloc__Var_4, &ll_backend__stack_alloc__V_6_6);
    }
#line 369 "stack_alloc.m"
    {
#line 369 "stack_alloc.m"
      ll_backend__stack_alloc__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ll_backend__stack_alloc__V_5_5, ll_backend__stack_alloc__V_6_6);
    }
#line 368 "stack_alloc.m"
    return ll_backend__stack_alloc__succeeded;
#line 368 "stack_alloc.m"
  }
#line 366 "stack_alloc.m"
}

#line 332 "stack_alloc.m"
static void MR_CALL 
ll_backend__stack_alloc__allocate_dummy_stack_slots_5_p_0(
#line 332 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__MainStack_1,
#line 332 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__2_2,
#line 332 "stack_alloc.m"
  MR_Integer ll_backend__stack_alloc__N0_3,
#line 332 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0_4,
#line 332 "stack_alloc.m"
  MR_Word * ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_5)
#line 332 "stack_alloc.m"
{
#line 335 "stack_alloc.m"
  while (MR_TRUE)
#line 335 "stack_alloc.m"
    {
#line 335 "stack_alloc.m"
      /* tailcall optimized into a loop */
#line 335 "stack_alloc.m"
      {
#line 335 "stack_alloc.m"
        MR_bool ll_backend__stack_alloc__succeeded;

#line 335 "stack_alloc.m"
        if ((ll_backend__stack_alloc__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 335 "stack_alloc.m"
          *ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_5 = ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0_4;
#line 335 "stack_alloc.m"
        else
#line 337 "stack_alloc.m"
          {
#line 337 "stack_alloc.m"
            MR_Word ll_backend__stack_alloc__DummyVars_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 1)));
#line 337 "stack_alloc.m"
            MR_Word ll_backend__stack_alloc__Locn_16;
#line 337 "stack_alloc.m"
            MR_Word ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_21_21;
#line 337 "stack_alloc.m"
            MR_Integer ll_backend__stack_alloc__V_23_23;
#line 337 "stack_alloc.m"
            MR_Word ll_backend__stack_alloc__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 0)));

#line 341 "stack_alloc.m"
#line 341 "stack_alloc.m"
            switch (ll_backend__stack_alloc__MainStack_1) {
#line 341 "stack_alloc.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 341 "stack_alloc.m"
              case (MR_Integer) 0:
#line 339 "stack_alloc.m"
                {
#line 340 "stack_alloc.m"
                  {
#line 340 "stack_alloc.m"
                    ll_backend__stack_alloc__Locn_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 340 "stack_alloc.m"
                    MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__Locn_16, 0) = ((MR_Box) (ll_backend__stack_alloc__N0_3));
#line 340 "stack_alloc.m"
                    MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__Locn_16, 1) = ((MR_Box) ((MR_Integer) 0));
#line 340 "stack_alloc.m"
                  }
#line 339 "stack_alloc.m"
                }
#line 341 "stack_alloc.m"
                break;
#line 341 "stack_alloc.m"
              case (MR_Integer) 1:
#line 343 "stack_alloc.m"
                {
#line 343 "stack_alloc.m"
                  ll_backend__stack_alloc__Locn_16 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 343 "stack_alloc.m"
                  MR_hl_field(MR_mktag(2), ll_backend__stack_alloc__Locn_16, 0) = ((MR_Box) (ll_backend__stack_alloc__N0_3));
#line 343 "stack_alloc.m"
                }
#line 341 "stack_alloc.m"
                break;
#line 341 "stack_alloc.m"
            }
#line 316 "stack_alloc.m"
            {
#line 316 "stack_alloc.m"
              mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__stack_alloc_scalar_common_1[0], (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0, ((MR_Box) (ll_backend__stack_alloc__Var_31)), ((MR_Box) (ll_backend__stack_alloc__Locn_16)), ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0_4, &ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_21_21);
            }
#line 346 "stack_alloc.m"
            ll_backend__stack_alloc__V_23_23 = (ll_backend__stack_alloc__N0_3 - (MR_Integer) 1);
#line 346 "stack_alloc.m"
            /* direct tailcall eliminated */
#line 346 "stack_alloc.m"
            {
#line 346 "stack_alloc.m"
              MR_Word ll_backend__stack_alloc__HeadVar__2__tmp_copy_2 = ll_backend__stack_alloc__DummyVars_13;
#line 346 "stack_alloc.m"
              MR_Integer ll_backend__stack_alloc__N0__tmp_copy_3 = ll_backend__stack_alloc__V_23_23;
#line 346 "stack_alloc.m"
              MR_Word ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0__tmp_copy_4 = ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_21_21;

#line 346 "stack_alloc.m"
              ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0_4 = ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0__tmp_copy_4;
#line 346 "stack_alloc.m"
              ll_backend__stack_alloc__N0_3 = ll_backend__stack_alloc__N0__tmp_copy_3;
#line 346 "stack_alloc.m"
              ll_backend__stack_alloc__HeadVar__2_2 = ll_backend__stack_alloc__HeadVar__2__tmp_copy_2;
#line 346 "stack_alloc.m"
            }
#line 346 "stack_alloc.m"
            continue;
#line 337 "stack_alloc.m"
          }
#line 335 "stack_alloc.m"
      }
#line 335 "stack_alloc.m"
      break;
#line 335 "stack_alloc.m"
    }
#line 332 "stack_alloc.m"
}

#line 311 "stack_alloc.m"
static void MR_CALL 
ll_backend__stack_alloc__allocate_given_stack_slot_4_p_0(
#line 311 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__1_1,
#line 311 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__2_2,
#line 311 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0_3,
#line 311 "stack_alloc.m"
  MR_Word * ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_4)
#line 311 "stack_alloc.m"
{
#line 314 "stack_alloc.m"
  while (MR_TRUE)
#line 314 "stack_alloc.m"
    {
#line 314 "stack_alloc.m"
      /* tailcall optimized into a loop */
#line 314 "stack_alloc.m"
      {
#line 314 "stack_alloc.m"
        MR_bool ll_backend__stack_alloc__succeeded;

#line 314 "stack_alloc.m"
        if ((ll_backend__stack_alloc__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 314 "stack_alloc.m"
          *ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_4 = ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0_3;
#line 314 "stack_alloc.m"
        else
#line 315 "stack_alloc.m"
          {
#line 315 "stack_alloc.m"
            MR_Word ll_backend__stack_alloc__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 0)));
#line 315 "stack_alloc.m"
            MR_Word ll_backend__stack_alloc__Vars_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 1)));
#line 315 "stack_alloc.m"
            MR_Word ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_15_15;

#line 316 "stack_alloc.m"
            {
#line 316 "stack_alloc.m"
              mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__stack_alloc_scalar_common_1[0], (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0, ((MR_Box) (ll_backend__stack_alloc__Var_10)), ((MR_Box) (ll_backend__stack_alloc__HeadVar__1_1)), ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0_3, &ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_15_15);
            }
#line 317 "stack_alloc.m"
            /* direct tailcall eliminated */
#line 317 "stack_alloc.m"
            {
#line 317 "stack_alloc.m"
              MR_Word ll_backend__stack_alloc__HeadVar__2__tmp_copy_2 = ll_backend__stack_alloc__Vars_11;
#line 317 "stack_alloc.m"
              MR_Word ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0__tmp_copy_3 = ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_15_15;

#line 317 "stack_alloc.m"
              ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0_3 = ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0__tmp_copy_3;
#line 317 "stack_alloc.m"
              ll_backend__stack_alloc__HeadVar__2_2 = ll_backend__stack_alloc__HeadVar__2__tmp_copy_2;
#line 317 "stack_alloc.m"
            }
#line 317 "stack_alloc.m"
            continue;
#line 315 "stack_alloc.m"
          }
#line 314 "stack_alloc.m"
      }
#line 314 "stack_alloc.m"
      break;
#line 314 "stack_alloc.m"
    }
#line 311 "stack_alloc.m"
}

#line 294 "stack_alloc.m"
static MR_bool MR_CALL 
ll_backend__stack_alloc__allocate_next_stack_slot_8_p_0_1(
#line 294 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__closure_arg)
#line 294 "stack_alloc.m"
{
#line 294 "stack_alloc.m"
  {
#line 294 "stack_alloc.m"
    MR_bool ll_backend__stack_alloc__succeeded;
#line 294 "stack_alloc.m"
    MR_Box ll_backend__stack_alloc__closure = ll_backend__stack_alloc__closure_arg;

#line 294 "stack_alloc.m"
    {
#line 294 "stack_alloc.m"
      ll_backend__stack_alloc__succeeded = ll_backend__stack_alloc__IntroducedFrom__pred__allocate_next_stack_slot__294__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__closure, (MR_Integer) 4))));
    }
#line 294 "stack_alloc.m"
    return ll_backend__stack_alloc__succeeded;
#line 294 "stack_alloc.m"
  }
#line 294 "stack_alloc.m"
}

#line 284 "stack_alloc.m"
static void MR_CALL 
ll_backend__stack_alloc__allocate_next_stack_slot_8_p_0(
#line 284 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__MainStack_9,
#line 284 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__StackSlotWidth_10,
#line 284 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__MaybeReservedVarInfo_11,
#line 284 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__Vars_12,
#line 284 "stack_alloc.m"
  MR_Integer ll_backend__stack_alloc__STATE_VARIABLE_FirstFreeSlot_0_20,
#line 284 "stack_alloc.m"
  MR_Integer * ll_backend__stack_alloc__STATE_VARIABLE_FirstFreeSlot_21,
#line 284 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0_22,
#line 284 "stack_alloc.m"
  MR_Word * ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_23)
#line 284 "stack_alloc.m"
{
#line 289 "stack_alloc.m"
  {
#line 289 "stack_alloc.m"
    MR_bool ll_backend__stack_alloc__succeeded = ((MR_tag((MR_Word) ll_backend__stack_alloc__MaybeReservedVarInfo_11)) == (MR_mktag((MR_Integer) 1)));
#line 289 "stack_alloc.m"
    MR_Integer ll_backend__stack_alloc__SlotNum_17;
#line 289 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__Locn_18;
#line 289 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__VarList_19;
#line 290 "stack_alloc.m"
    MR_Integer ll_backend__stack_alloc__ResSlotNum_16;
#line 291 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__TypeCtorInfo_32_32;
#line 291 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__ResVar_15;
#line 291 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_24_24;

#line 291 "stack_alloc.m"
    if (ll_backend__stack_alloc__succeeded)
#line 291 "stack_alloc.m"
      {
#line 291 "stack_alloc.m"
        ll_backend__stack_alloc__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_alloc__MaybeReservedVarInfo_11, (MR_Integer) 0)));
#line 291 "stack_alloc.m"
        ll_backend__stack_alloc__ResVar_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_24_24, (MR_Integer) 0)));
#line 291 "stack_alloc.m"
        ll_backend__stack_alloc__ResSlotNum_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_24_24, (MR_Integer) 1)));
#line 1803 "ll_backend.stack_alloc.c"
        ll_backend__stack_alloc__TypeCtorInfo_32_32 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 292 "stack_alloc.m"
        {
#line 292 "stack_alloc.m"
          ll_backend__stack_alloc__succeeded = parse_tree__set_of_var__member_2_p_0(ll_backend__stack_alloc__TypeCtorInfo_32_32, ll_backend__stack_alloc__Vars_12, ll_backend__stack_alloc__ResVar_15);
        }
#line 291 "stack_alloc.m"
      }
#line 290 "stack_alloc.m"
    if (ll_backend__stack_alloc__succeeded)
#line 295 "stack_alloc.m"
      {
#line 295 "stack_alloc.m"
        MR_Word ll_backend__stack_alloc__V_25_25;

#line 294 "stack_alloc.m"
        {
#line 294 "stack_alloc.m"
          ll_backend__stack_alloc__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 294 "stack_alloc.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_25_25, 0) = ((MR_Box) (&ll_backend__stack_alloc_scalar_common_3[1]));
#line 294 "stack_alloc.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_25_25, 1) = ((MR_Box) (ll_backend__stack_alloc__allocate_next_stack_slot_8_p_0_1));
#line 294 "stack_alloc.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_25_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 294 "stack_alloc.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_25_25, 3) = ((MR_Box) (ll_backend__stack_alloc__StackSlotWidth_10));
#line 294 "stack_alloc.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_25_25, 4) = ((MR_Box) ((MR_Integer) 0));
#line 294 "stack_alloc.m"
        }
#line 294 "stack_alloc.m"
        {
#line 294 "stack_alloc.m"
          mercury__require__expect_4_p_0(ll_backend__stack_alloc__V_25_25, (MR_String) "ll_backend.stack_alloc", (MR_String) "predicate \140ll_backend.stack_alloc.allocate_next_stack_slot\'/8", (MR_String) "reserved multiple stack slots");
        }
#line 296 "stack_alloc.m"
        ll_backend__stack_alloc__SlotNum_17 = ll_backend__stack_alloc__ResSlotNum_16;
#line 295 "stack_alloc.m"
        *ll_backend__stack_alloc__STATE_VARIABLE_FirstFreeSlot_21 = ll_backend__stack_alloc__STATE_VARIABLE_FirstFreeSlot_0_20;
#line 295 "stack_alloc.m"
      }
#line 290 "stack_alloc.m"
    else
#line 298 "stack_alloc.m"
      {
#line 298 "stack_alloc.m"
        ll_backend__stack_alloc__SlotNum_17 = ll_backend__stack_alloc__STATE_VARIABLE_FirstFreeSlot_0_20;
#line 395 "stack_alloc.m"
#line 395 "stack_alloc.m"
        switch (ll_backend__stack_alloc__StackSlotWidth_10) {
#line 395 "stack_alloc.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 395 "stack_alloc.m"
          case (MR_Integer) 1:
#line 396 "stack_alloc.m"
            {
#line 396 "stack_alloc.m"
              *ll_backend__stack_alloc__STATE_VARIABLE_FirstFreeSlot_21 = (ll_backend__stack_alloc__STATE_VARIABLE_FirstFreeSlot_0_20 + (MR_Integer) 2);
#line 396 "stack_alloc.m"
            }
#line 395 "stack_alloc.m"
            break;
#line 395 "stack_alloc.m"
          case (MR_Integer) 0:
#line 395 "stack_alloc.m"
            {
#line 395 "stack_alloc.m"
              *ll_backend__stack_alloc__STATE_VARIABLE_FirstFreeSlot_21 = (ll_backend__stack_alloc__STATE_VARIABLE_FirstFreeSlot_0_20 + (MR_Integer) 1);
#line 395 "stack_alloc.m"
            }
#line 395 "stack_alloc.m"
            break;
#line 395 "stack_alloc.m"
        }
#line 298 "stack_alloc.m"
      }
#line 304 "stack_alloc.m"
#line 304 "stack_alloc.m"
    switch (ll_backend__stack_alloc__MainStack_9) {
#line 304 "stack_alloc.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 304 "stack_alloc.m"
      case (MR_Integer) 0:
#line 303 "stack_alloc.m"
        {
#line 303 "stack_alloc.m"
          ll_backend__stack_alloc__Locn_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 303 "stack_alloc.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__Locn_18, 0) = ((MR_Box) (ll_backend__stack_alloc__SlotNum_17));
#line 303 "stack_alloc.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__Locn_18, 1) = ((MR_Box) (ll_backend__stack_alloc__StackSlotWidth_10));
#line 303 "stack_alloc.m"
        }
#line 304 "stack_alloc.m"
        break;
#line 304 "stack_alloc.m"
      case (MR_Integer) 1:
#line 306 "stack_alloc.m"
        {
#line 306 "stack_alloc.m"
          ll_backend__stack_alloc__Locn_18 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 306 "stack_alloc.m"
          MR_hl_field(MR_mktag(2), ll_backend__stack_alloc__Locn_18, 0) = ((MR_Box) (ll_backend__stack_alloc__SlotNum_17));
#line 306 "stack_alloc.m"
        }
#line 304 "stack_alloc.m"
        break;
#line 304 "stack_alloc.m"
    }
#line 308 "stack_alloc.m"
    {
#line 308 "stack_alloc.m"
      ll_backend__stack_alloc__VarList_19 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__stack_alloc__Vars_12);
    }
#line 309 "stack_alloc.m"
    {
#line 309 "stack_alloc.m"
      ll_backend__stack_alloc__allocate_given_stack_slot_4_p_0(ll_backend__stack_alloc__Locn_18, ll_backend__stack_alloc__VarList_19, ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0_22, ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_23);
    }
#line 289 "stack_alloc.m"
  }
#line 284 "stack_alloc.m"
}

#line 265 "stack_alloc.m"
static MR_bool MR_CALL 
ll_backend__stack_alloc__allocate_stack_slots_to_colours_7_p_0_2(
#line 265 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__closure_arg,
#line 265 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__wrapper_arg_1)
#line 265 "stack_alloc.m"
{
#line 265 "stack_alloc.m"
  {
#line 265 "stack_alloc.m"
    MR_bool ll_backend__stack_alloc__succeeded;
#line 265 "stack_alloc.m"
    MR_Box ll_backend__stack_alloc__closure = ll_backend__stack_alloc__closure_arg;

#line 265 "stack_alloc.m"
    {
#line 265 "stack_alloc.m"
      ll_backend__stack_alloc__succeeded = ll_backend__stack_alloc__var_is_float_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__stack_alloc__wrapper_arg_1));
    }
#line 265 "stack_alloc.m"
    return ll_backend__stack_alloc__succeeded;
#line 265 "stack_alloc.m"
  }
#line 265 "stack_alloc.m"
}

#line 294 "stack_alloc.m"
static MR_bool MR_CALL 
ll_backend__stack_alloc__allocate_stack_slots_to_colours_7_p_0_1(
#line 294 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__closure_arg)
#line 294 "stack_alloc.m"
{
#line 294 "stack_alloc.m"
  {
#line 294 "stack_alloc.m"
    MR_bool ll_backend__stack_alloc__succeeded;
#line 294 "stack_alloc.m"
    MR_Box ll_backend__stack_alloc__closure = ll_backend__stack_alloc__closure_arg;

#line 294 "stack_alloc.m"
    {
#line 294 "stack_alloc.m"
      ll_backend__stack_alloc__succeeded = ll_backend__stack_alloc__IntroducedFrom__pred__allocate_next_stack_slot__294__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__closure, (MR_Integer) 4))));
    }
#line 294 "stack_alloc.m"
    return ll_backend__stack_alloc__succeeded;
#line 294 "stack_alloc.m"
  }
#line 294 "stack_alloc.m"
}

#line 234 "stack_alloc.m"
static void MR_CALL 
ll_backend__stack_alloc__allocate_stack_slots_to_colours_7_p_0(
#line 234 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__MainStack_1,
#line 234 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__MaybeDoubleWidthFloats_2,
#line 234 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__MaybeReservedVarInfo_3,
#line 234 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__4_4,
#line 234 "stack_alloc.m"
  MR_Integer ll_backend__stack_alloc__STATE_VARIABLE_FirstFreeSlot_0_5,
#line 234 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0_6,
#line 234 "stack_alloc.m"
  MR_Word * ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_7)
#line 234 "stack_alloc.m"
{
#line 238 "stack_alloc.m"
  while (MR_TRUE)
#line 238 "stack_alloc.m"
    {
#line 238 "stack_alloc.m"
      /* tailcall optimized into a loop */
#line 238 "stack_alloc.m"
      {
#line 238 "stack_alloc.m"
        MR_bool ll_backend__stack_alloc__succeeded;

#line 238 "stack_alloc.m"
        if ((ll_backend__stack_alloc__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 238 "stack_alloc.m"
          *ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_7 = ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0_6;
#line 238 "stack_alloc.m"
        else
#line 241 "stack_alloc.m"
          {
#line 241 "stack_alloc.m"
            MR_Word ll_backend__stack_alloc__FirstColour_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_alloc__HeadVar__4_4, (MR_Integer) 0)));
#line 241 "stack_alloc.m"
            MR_Word ll_backend__stack_alloc__LaterColours_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_alloc__HeadVar__4_4, (MR_Integer) 1)));
#line 241 "stack_alloc.m"
            MR_Integer ll_backend__stack_alloc__STATE_VARIABLE_FirstFreeSlot_25_25;
#line 241 "stack_alloc.m"
            MR_Word ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_26_26;

#line 254 "stack_alloc.m"
            if ((ll_backend__stack_alloc__MaybeDoubleWidthFloats_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 254 "stack_alloc.m"
              {
#line 254 "stack_alloc.m"
                MR_Integer ll_backend__stack_alloc__SlotNum_66;
#line 254 "stack_alloc.m"
                MR_Word ll_backend__stack_alloc__Locn_67;
#line 254 "stack_alloc.m"
                MR_Word ll_backend__stack_alloc__VarList_68;
#line 290 "stack_alloc.m"
                MR_Integer ll_backend__stack_alloc__ResSlotNum_65;
#line 291 "stack_alloc.m"
                MR_Word ll_backend__stack_alloc__TypeCtorInfo_32_77;
#line 291 "stack_alloc.m"
                MR_Word ll_backend__stack_alloc__ResVar_64;
#line 291 "stack_alloc.m"
                MR_Word ll_backend__stack_alloc__V_69_69;

#line 291 "stack_alloc.m"
                ll_backend__stack_alloc__succeeded = ((MR_tag((MR_Word) ll_backend__stack_alloc__MaybeReservedVarInfo_3)) == (MR_mktag((MR_Integer) 1)));
#line 291 "stack_alloc.m"
                if (ll_backend__stack_alloc__succeeded)
#line 291 "stack_alloc.m"
                  {
#line 291 "stack_alloc.m"
                    ll_backend__stack_alloc__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_alloc__MaybeReservedVarInfo_3, (MR_Integer) 0)));
#line 291 "stack_alloc.m"
                    ll_backend__stack_alloc__ResVar_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_69_69, (MR_Integer) 0)));
#line 291 "stack_alloc.m"
                    ll_backend__stack_alloc__ResSlotNum_65 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_69_69, (MR_Integer) 1)));
#line 2061 "ll_backend.stack_alloc.c"
                    ll_backend__stack_alloc__TypeCtorInfo_32_77 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 292 "stack_alloc.m"
                    {
#line 292 "stack_alloc.m"
                      ll_backend__stack_alloc__succeeded = parse_tree__set_of_var__member_2_p_0(ll_backend__stack_alloc__TypeCtorInfo_32_77, ll_backend__stack_alloc__FirstColour_18, ll_backend__stack_alloc__ResVar_64);
                    }
#line 291 "stack_alloc.m"
                  }
#line 290 "stack_alloc.m"
                if (ll_backend__stack_alloc__succeeded)
#line 295 "stack_alloc.m"
                  {
#line 294 "stack_alloc.m"
                    {
#line 294 "stack_alloc.m"
                      mercury__require__expect_4_p_0((MR_Word) &ll_backend__stack_alloc_scalar_common_3[2], (MR_String) "ll_backend.stack_alloc", (MR_String) "predicate \140ll_backend.stack_alloc.allocate_next_stack_slot\'/8", (MR_String) "reserved multiple stack slots");
                    }
#line 296 "stack_alloc.m"
                    ll_backend__stack_alloc__SlotNum_66 = ll_backend__stack_alloc__ResSlotNum_65;
#line 295 "stack_alloc.m"
                    ll_backend__stack_alloc__STATE_VARIABLE_FirstFreeSlot_25_25 = ll_backend__stack_alloc__STATE_VARIABLE_FirstFreeSlot_0_5;
#line 295 "stack_alloc.m"
                  }
#line 290 "stack_alloc.m"
                else
#line 298 "stack_alloc.m"
                  {
#line 298 "stack_alloc.m"
                    ll_backend__stack_alloc__SlotNum_66 = ll_backend__stack_alloc__STATE_VARIABLE_FirstFreeSlot_0_5;
#line 395 "stack_alloc.m"
                    ll_backend__stack_alloc__STATE_VARIABLE_FirstFreeSlot_25_25 = (ll_backend__stack_alloc__STATE_VARIABLE_FirstFreeSlot_0_5 + (MR_Integer) 1);
#line 298 "stack_alloc.m"
                  }
#line 304 "stack_alloc.m"
#line 304 "stack_alloc.m"
                switch (ll_backend__stack_alloc__MainStack_1) {
#line 304 "stack_alloc.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 304 "stack_alloc.m"
                  case (MR_Integer) 0:
#line 303 "stack_alloc.m"
                    {
#line 303 "stack_alloc.m"
                      ll_backend__stack_alloc__Locn_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 303 "stack_alloc.m"
                      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__Locn_67, 0) = ((MR_Box) (ll_backend__stack_alloc__SlotNum_66));
#line 303 "stack_alloc.m"
                      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__Locn_67, 1) = ((MR_Box) ((MR_Integer) 0));
#line 303 "stack_alloc.m"
                    }
#line 304 "stack_alloc.m"
                    break;
#line 304 "stack_alloc.m"
                  case (MR_Integer) 1:
#line 306 "stack_alloc.m"
                    {
#line 306 "stack_alloc.m"
                      ll_backend__stack_alloc__Locn_67 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 306 "stack_alloc.m"
                      MR_hl_field(MR_mktag(2), ll_backend__stack_alloc__Locn_67, 0) = ((MR_Box) (ll_backend__stack_alloc__SlotNum_66));
#line 306 "stack_alloc.m"
                    }
#line 304 "stack_alloc.m"
                    break;
#line 304 "stack_alloc.m"
                }
#line 308 "stack_alloc.m"
                {
#line 308 "stack_alloc.m"
                  ll_backend__stack_alloc__VarList_68 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__stack_alloc__FirstColour_18);
                }
#line 309 "stack_alloc.m"
                {
#line 309 "stack_alloc.m"
                  ll_backend__stack_alloc__allocate_given_stack_slot_4_p_0(ll_backend__stack_alloc__Locn_67, ll_backend__stack_alloc__VarList_68, ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0_6, &ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_26_26);
                }
#line 254 "stack_alloc.m"
              }
#line 254 "stack_alloc.m"
            else
#line 259 "stack_alloc.m"
              {
#line 259 "stack_alloc.m"
                MR_Word ll_backend__stack_alloc__TypeCtorInfo_34_53;
#line 259 "stack_alloc.m"
                MR_Word ll_backend__stack_alloc__VarTypes_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_alloc__MaybeDoubleWidthFloats_2, (MR_Integer) 0)));
#line 259 "stack_alloc.m"
                MR_Word ll_backend__stack_alloc__DoubleWidthVars_39;
#line 259 "stack_alloc.m"
                MR_Word ll_backend__stack_alloc__SingleWidthVars_40;
#line 259 "stack_alloc.m"
                MR_Word ll_backend__stack_alloc__V_41_41;
#line 259 "stack_alloc.m"
                MR_Integer ll_backend__stack_alloc__STATE_VARIABLE_FirstFreeSlot_24_43;
#line 259 "stack_alloc.m"
                MR_Word ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_25_44;

#line 265 "stack_alloc.m"
                {
#line 265 "stack_alloc.m"
                  ll_backend__stack_alloc__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 265 "stack_alloc.m"
                  MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_41_41, 0) = ((MR_Box) (&ll_backend__stack_alloc_scalar_common_3[3]));
#line 265 "stack_alloc.m"
                  MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_41_41, 1) = ((MR_Box) (ll_backend__stack_alloc__allocate_stack_slots_to_colours_7_p_0_2));
#line 265 "stack_alloc.m"
                  MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_41_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 265 "stack_alloc.m"
                  MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_41_41, 3) = ((MR_Box) (ll_backend__stack_alloc__VarTypes_38));
#line 265 "stack_alloc.m"
                }
#line 2173 "ll_backend.stack_alloc.c"
                ll_backend__stack_alloc__TypeCtorInfo_34_53 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 265 "stack_alloc.m"
                {
#line 265 "stack_alloc.m"
                  parse_tree__set_of_var__divide_4_p_0(ll_backend__stack_alloc__TypeCtorInfo_34_53, ll_backend__stack_alloc__V_41_41, ll_backend__stack_alloc__FirstColour_18, &ll_backend__stack_alloc__DoubleWidthVars_39, &ll_backend__stack_alloc__SingleWidthVars_40);
                }
#line 267 "stack_alloc.m"
                {
#line 267 "stack_alloc.m"
                  ll_backend__stack_alloc__succeeded = parse_tree__set_of_var__is_non_empty_1_p_0(ll_backend__stack_alloc__TypeCtorInfo_34_53, ll_backend__stack_alloc__SingleWidthVars_40);
                }
#line 267 "stack_alloc.m"
                if (ll_backend__stack_alloc__succeeded)
#line 268 "stack_alloc.m"
                  {
#line 268 "stack_alloc.m"
                    {
#line 268 "stack_alloc.m"
                      ll_backend__stack_alloc__allocate_next_stack_slot_8_p_0(ll_backend__stack_alloc__MainStack_1, (MR_Integer) 0, ll_backend__stack_alloc__MaybeReservedVarInfo_3, ll_backend__stack_alloc__SingleWidthVars_40, ll_backend__stack_alloc__STATE_VARIABLE_FirstFreeSlot_0_5, &ll_backend__stack_alloc__STATE_VARIABLE_FirstFreeSlot_24_43, ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0_6, &ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_25_44);
                    }
#line 268 "stack_alloc.m"
                  }
#line 267 "stack_alloc.m"
                else
#line 272 "stack_alloc.m"
                  {
#line 272 "stack_alloc.m"
                    ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_25_44 = ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0_6;
#line 272 "stack_alloc.m"
                    ll_backend__stack_alloc__STATE_VARIABLE_FirstFreeSlot_24_43 = ll_backend__stack_alloc__STATE_VARIABLE_FirstFreeSlot_0_5;
#line 272 "stack_alloc.m"
                  }
#line 274 "stack_alloc.m"
                {
#line 274 "stack_alloc.m"
                  ll_backend__stack_alloc__succeeded = parse_tree__set_of_var__is_non_empty_1_p_0(ll_backend__stack_alloc__TypeCtorInfo_34_53, ll_backend__stack_alloc__DoubleWidthVars_39);
                }
#line 274 "stack_alloc.m"
                if (ll_backend__stack_alloc__succeeded)
#line 275 "stack_alloc.m"
                  {
#line 275 "stack_alloc.m"
                    MR_Integer ll_backend__stack_alloc__STATE_VARIABLE_FirstFreeSlot_26_45;

#line 387 "stack_alloc.m"
                    {
#line 387 "stack_alloc.m"
                      ll_backend__stack_alloc__succeeded = mercury__int__even_1_p_0(ll_backend__stack_alloc__STATE_VARIABLE_FirstFreeSlot_24_43);
                    }
#line 387 "stack_alloc.m"
                    if (ll_backend__stack_alloc__succeeded)
#line 387 "stack_alloc.m"
                      ll_backend__stack_alloc__STATE_VARIABLE_FirstFreeSlot_26_45 = ll_backend__stack_alloc__STATE_VARIABLE_FirstFreeSlot_24_43;
#line 387 "stack_alloc.m"
                    else
#line 390 "stack_alloc.m"
                      {
#line 390 "stack_alloc.m"
                        ll_backend__stack_alloc__STATE_VARIABLE_FirstFreeSlot_26_45 = (ll_backend__stack_alloc__STATE_VARIABLE_FirstFreeSlot_24_43 + (MR_Integer) 1);
#line 390 "stack_alloc.m"
                      }
#line 276 "stack_alloc.m"
                    {
#line 276 "stack_alloc.m"
                      ll_backend__stack_alloc__allocate_next_stack_slot_8_p_0(ll_backend__stack_alloc__MainStack_1, (MR_Integer) 1, ll_backend__stack_alloc__MaybeReservedVarInfo_3, ll_backend__stack_alloc__DoubleWidthVars_39, ll_backend__stack_alloc__STATE_VARIABLE_FirstFreeSlot_26_45, &ll_backend__stack_alloc__STATE_VARIABLE_FirstFreeSlot_25_25, ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_25_44, &ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_26_26);
                    }
#line 275 "stack_alloc.m"
                  }
#line 274 "stack_alloc.m"
                else
#line 280 "stack_alloc.m"
                  {
#line 280 "stack_alloc.m"
                    ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_26_26 = ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_25_44;
#line 280 "stack_alloc.m"
                    ll_backend__stack_alloc__STATE_VARIABLE_FirstFreeSlot_25_25 = ll_backend__stack_alloc__STATE_VARIABLE_FirstFreeSlot_24_43;
#line 280 "stack_alloc.m"
                  }
#line 259 "stack_alloc.m"
              }
#line 244 "stack_alloc.m"
            /* direct tailcall eliminated */
#line 244 "stack_alloc.m"
            {
#line 244 "stack_alloc.m"
              MR_Word ll_backend__stack_alloc__HeadVar__4__tmp_copy_4 = ll_backend__stack_alloc__LaterColours_19;
#line 244 "stack_alloc.m"
              MR_Integer ll_backend__stack_alloc__STATE_VARIABLE_FirstFreeSlot_0__tmp_copy_5 = ll_backend__stack_alloc__STATE_VARIABLE_FirstFreeSlot_25_25;
#line 244 "stack_alloc.m"
              MR_Word ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0__tmp_copy_6 = ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_26_26;

#line 244 "stack_alloc.m"
              ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0_6 = ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0__tmp_copy_6;
#line 244 "stack_alloc.m"
              ll_backend__stack_alloc__STATE_VARIABLE_FirstFreeSlot_0_5 = ll_backend__stack_alloc__STATE_VARIABLE_FirstFreeSlot_0__tmp_copy_5;
#line 244 "stack_alloc.m"
              ll_backend__stack_alloc__HeadVar__4_4 = ll_backend__stack_alloc__HeadVar__4__tmp_copy_4;
#line 244 "stack_alloc.m"
            }
#line 244 "stack_alloc.m"
            continue;
#line 241 "stack_alloc.m"
          }
#line 238 "stack_alloc.m"
      }
#line 238 "stack_alloc.m"
      break;
#line 238 "stack_alloc.m"
    }
#line 234 "stack_alloc.m"
}

#line 207 "stack_alloc.m"
static MR_bool MR_CALL 
ll_backend__stack_alloc__var_is_not_dummy_2_p_0(
#line 207 "stack_alloc.m"
  MR_ArrayPtr ll_backend__stack_alloc__DummyVarArray_3,
#line 207 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__Var_4)
#line 207 "stack_alloc.m"
{
#line 209 "stack_alloc.m"
  {
#line 209 "stack_alloc.m"
    MR_bool ll_backend__stack_alloc__succeeded;
#line 209 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__TypeClassInfo_for_enum_7 = (MR_Word) &ll_backend__stack_alloc_scalar_common_2[0];
#line 209 "stack_alloc.m"
    MR_Integer ll_backend__stack_alloc__VarNum_5;
#line 209 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__IsDummy_6;
#line 5 "../library/enum.int"
    MR_Box MR_CALL (* ll_backend__stack_alloc__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__TypeClassInfo_for_enum_7, (MR_Integer) 0)), (MR_Integer) 5)));
#line 5 "../library/enum.int"
    MR_Box ll_backend__stack_alloc__conv1_VarNum_5;
#line 211 "stack_alloc.m"
    MR_Box ll_backend__stack_alloc__conv2_IsDummy_6;

#line 5 "../library/enum.int"
    {
#line 5 "../library/enum.int"
      ll_backend__stack_alloc__conv1_VarNum_5 = ll_backend__stack_alloc__func_0(((MR_Box) ll_backend__stack_alloc__TypeClassInfo_for_enum_7), ((MR_Box) (ll_backend__stack_alloc__Var_4)));
    }
#line 5 "../library/enum.int"
    ll_backend__stack_alloc__VarNum_5 = ((MR_Integer) ll_backend__stack_alloc__conv1_VarNum_5);
#line 211 "stack_alloc.m"
    {
#line 211 "stack_alloc.m"
      mercury__array__lookup_3_p_0((MR_Word) &check_hlds__type_util__check_hlds__type_util__type_ctor_info_is_dummy_type_0, (MR_ArrayPtr) ll_backend__stack_alloc__DummyVarArray_3, ll_backend__stack_alloc__VarNum_5, &ll_backend__stack_alloc__conv2_IsDummy_6);
    }
#line 211 "stack_alloc.m"
    ll_backend__stack_alloc__IsDummy_6 = ((MR_Word) ll_backend__stack_alloc__conv2_IsDummy_6);
#line 212 "stack_alloc.m"
    ll_backend__stack_alloc__succeeded = (ll_backend__stack_alloc__IsDummy_6 == (MR_Integer) 1);
#line 209 "stack_alloc.m"
    return ll_backend__stack_alloc__succeeded;
#line 209 "stack_alloc.m"
  }
#line 207 "stack_alloc.m"
}

#line 205 "stack_alloc.m"
static MR_bool MR_CALL 
ll_backend__stack_alloc__set_for_loop_control_4_p_0_1(
#line 205 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__closure_arg,
#line 205 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__wrapper_arg_1)
#line 205 "stack_alloc.m"
{
#line 205 "stack_alloc.m"
  {
#line 205 "stack_alloc.m"
    MR_bool ll_backend__stack_alloc__succeeded;
#line 205 "stack_alloc.m"
    MR_Box ll_backend__stack_alloc__closure = ll_backend__stack_alloc__closure_arg;

#line 205 "stack_alloc.m"
    {
#line 205 "stack_alloc.m"
      ll_backend__stack_alloc__succeeded = ll_backend__stack_alloc__var_is_not_dummy_2_p_0(((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__stack_alloc__wrapper_arg_1));
    }
#line 205 "stack_alloc.m"
    return ll_backend__stack_alloc__succeeded;
#line 205 "stack_alloc.m"
  }
#line 205 "stack_alloc.m"
}

#line 191 "stack_alloc.m"
static void MR_CALL 
ll_backend__stack_alloc__set_for_loop_control_4_p_0(
#line 191 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__AllocData_5,
#line 191 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__Set0_6,
#line 191 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__STATE_VARIABLE_StackAlloc_0_11,
#line 191 "stack_alloc.m"
  MR_Word * ll_backend__stack_alloc__STATE_VARIABLE_StackAlloc_12)
#line 191 "stack_alloc.m"
{
#line 194 "stack_alloc.m"
  {
#line 194 "stack_alloc.m"
    MR_bool ll_backend__stack_alloc__succeeded;
#line 194 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__LiveSets0_8 = (MR_Word) ll_backend__stack_alloc__STATE_VARIABLE_StackAlloc_0_11;
#line 194 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__Set_9;
#line 194 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__LiveSets_10;
#line 194 "stack_alloc.m"
    MR_ArrayPtr ll_backend__stack_alloc__DummyVarArray_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__AllocData_5, (MR_Integer) 5)));
#line 194 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_19_19;
#line 204 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__AllocData_5, (MR_Integer) 0)));
#line 204 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__AllocData_5, (MR_Integer) 1)));
#line 204 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__AllocData_5, (MR_Integer) 2)));
#line 204 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__AllocData_5, (MR_Integer) 3)));
#line 204 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__AllocData_5, (MR_Integer) 4)));

#line 205 "stack_alloc.m"
    {
#line 205 "stack_alloc.m"
      ll_backend__stack_alloc__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 205 "stack_alloc.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_19_19, 0) = ((MR_Box) (&ll_backend__stack_alloc_scalar_common_3[0]));
#line 205 "stack_alloc.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_19_19, 1) = ((MR_Box) (ll_backend__stack_alloc__set_for_loop_control_4_p_0_1));
#line 205 "stack_alloc.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 205 "stack_alloc.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_19_19, 3) = ((MR_Box) (ll_backend__stack_alloc__DummyVarArray_18));
#line 205 "stack_alloc.m"
    }
#line 205 "stack_alloc.m"
    {
#line 205 "stack_alloc.m"
      parse_tree__set_of_var__filter_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__stack_alloc__V_19_19, ll_backend__stack_alloc__Set0_6, &ll_backend__stack_alloc__Set_9);
    }
#line 197 "stack_alloc.m"
    {
#line 197 "stack_alloc.m"
      ll_backend__stack_alloc__LiveSets_10 = mercury__set__insert_2_f_0((MR_Word) &ll_backend__stack_alloc_scalar_common_1[1], ll_backend__stack_alloc__LiveSets0_8, ((MR_Box) (ll_backend__stack_alloc__Set_9)));
    }
#line 198 "stack_alloc.m"
    *ll_backend__stack_alloc__STATE_VARIABLE_StackAlloc_12 = (MR_Word) ll_backend__stack_alloc__LiveSets_10;
#line 194 "stack_alloc.m"
  }
#line 191 "stack_alloc.m"
}

#line 34 "stack_alloc.m"
void MR_CALL 
ll_backend__stack_alloc__allocate_stack_slots_in_proc_4_p_0(
#line 34 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__ModuleInfo_5,
#line 34 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__2_2,
#line 34 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__STATE_VARIABLE_ProcInfo_0_41,
#line 34 "stack_alloc.m"
  MR_Word * ll_backend__stack_alloc__STATE_VARIABLE_ProcInfo_42)
#line 34 "stack_alloc.m"
{
#line 73 "stack_alloc.m"
  {
#line 73 "stack_alloc.m"
    MR_bool ll_backend__stack_alloc__succeeded;
#line 73 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__TypeCtorInfo_52_52;
#line 73 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__TypeInfo_53_53;
#line 73 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__PredId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 0)));
#line 73 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__PredInfo_9;
#line 73 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__Liveness0_10;
#line 73 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__Globals_11;
#line 73 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__TraceLevel_12;
#line 73 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__NeedFailVars_13;
#line 73 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__FailVars_14;
#line 73 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__TypeInfoLiveness_15;
#line 73 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__OptNoReturnCalls_16;
#line 73 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__VarTypes_17;
#line 73 "stack_alloc.m"
    MR_ArrayPtr ll_backend__stack_alloc__DummyTypeArray_18;
#line 73 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__DummyVars_19;
#line 73 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__AllocData_20;
#line 73 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__NondetLiveness0_21;
#line 73 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__SimpleStackAlloc0_22;
#line 73 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__Goal0_23;
#line 73 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__Goal_24;
#line 73 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__SimpleStackAlloc_25;
#line 73 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__LiveSets0_28;
#line 73 "stack_alloc.m"
    MR_Integer ll_backend__stack_alloc__NumReservedSlots_29;
#line 73 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__MaybeReservedVarInfo_30;
#line 73 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__LiveSets_34;
#line 73 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__ColourSets_35;
#line 73 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__ColourList_36;
#line 73 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__CodeModel_37;
#line 73 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__MainStack_38;
#line 73 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__StackSlots1_39;
#line 73 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__StackSlots_40;
#line 73 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_45_45;
#line 73 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__STATE_VARIABLE_ProcInfo_46_46;
#line 73 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__STATE_VARIABLE_ProcInfo_47_47;
#line 73 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__MaybeDoubleWidthFloats_62;
#line 73 "stack_alloc.m"
    MR_Integer ll_backend__stack_alloc__FirstFreeSlot_63;
#line 73 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_66_66;
#line 73 "stack_alloc.m"
    MR_Integer ll_backend__stack_alloc__ProcId_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 1)));
#line 97 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc___Liveness_26;
#line 97 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc___NondetLiveness_27;
#line 97 "stack_alloc.m"
    MR_Box ll_backend__stack_alloc__conv0_SimpleStackAlloc_25;
#line 357 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_72_72;
#line 357 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_73_73;

#line 74 "stack_alloc.m"
    {
#line 74 "stack_alloc.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(ll_backend__stack_alloc__ModuleInfo_5, ll_backend__stack_alloc__PredId_6, &ll_backend__stack_alloc__PredInfo_9);
    }
#line 75 "stack_alloc.m"
    {
#line 75 "stack_alloc.m"
      ll_backend__liveness__initial_liveness_4_p_0(ll_backend__stack_alloc__ModuleInfo_5, ll_backend__stack_alloc__PredInfo_9, ll_backend__stack_alloc__STATE_VARIABLE_ProcInfo_0_41, &ll_backend__stack_alloc__Liveness0_10);
    }
#line 76 "stack_alloc.m"
    {
#line 76 "stack_alloc.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(ll_backend__stack_alloc__ModuleInfo_5, &ll_backend__stack_alloc__Globals_11);
    }
#line 77 "stack_alloc.m"
    {
#line 77 "stack_alloc.m"
      libs__globals__get_trace_level_2_p_0(ll_backend__stack_alloc__Globals_11, &ll_backend__stack_alloc__TraceLevel_12);
    }
#line 78 "stack_alloc.m"
    {
#line 78 "stack_alloc.m"
      ll_backend__stack_alloc__NeedFailVars_13 = libs__trace_params__eff_trace_level_needs_fail_vars_4_f_0(ll_backend__stack_alloc__ModuleInfo_5, ll_backend__stack_alloc__PredInfo_9, ll_backend__stack_alloc__STATE_VARIABLE_ProcInfo_0_41, ll_backend__stack_alloc__TraceLevel_12);
    }
#line 83 "stack_alloc.m"
#line 83 "stack_alloc.m"
    switch (ll_backend__stack_alloc__NeedFailVars_13) {
#line 83 "stack_alloc.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 83 "stack_alloc.m"
      case (MR_Integer) 0:
#line 84 "stack_alloc.m"
        {
#line 85 "stack_alloc.m"
          {
#line 85 "stack_alloc.m"
            ll_backend__stack_alloc__FailVars_14 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
          }
#line 84 "stack_alloc.m"
        }
#line 83 "stack_alloc.m"
        break;
#line 83 "stack_alloc.m"
      case (MR_Integer) 1:
#line 82 "stack_alloc.m"
        {
#line 82 "stack_alloc.m"
          ll_backend__trace_gen__trace_fail_vars_3_p_0(ll_backend__stack_alloc__ModuleInfo_5, ll_backend__stack_alloc__STATE_VARIABLE_ProcInfo_0_41, &ll_backend__stack_alloc__FailVars_14);
        }
#line 83 "stack_alloc.m"
        break;
#line 83 "stack_alloc.m"
    }
#line 87 "stack_alloc.m"
    {
#line 87 "stack_alloc.m"
      hlds__hlds_pred__body_should_use_typeinfo_liveness_3_p_0(ll_backend__stack_alloc__PredInfo_9, ll_backend__stack_alloc__Globals_11, &ll_backend__stack_alloc__TypeInfoLiveness_15);
    }
#line 88 "stack_alloc.m"
    {
#line 88 "stack_alloc.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__stack_alloc__Globals_11, (MR_Integer) 317, &ll_backend__stack_alloc__OptNoReturnCalls_16);
    }
#line 90 "stack_alloc.m"
    {
#line 90 "stack_alloc.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ll_backend__stack_alloc__STATE_VARIABLE_ProcInfo_0_41, &ll_backend__stack_alloc__VarTypes_17);
    }
#line 91 "stack_alloc.m"
    {
#line 91 "stack_alloc.m"
      ll_backend__live_vars__build_dummy_type_array_4_p_0(ll_backend__stack_alloc__ModuleInfo_5, ll_backend__stack_alloc__VarTypes_17, &ll_backend__stack_alloc__DummyTypeArray_18, &ll_backend__stack_alloc__DummyVars_19);
    }
#line 92 "stack_alloc.m"
    {
#line 92 "stack_alloc.m"
      ll_backend__stack_alloc__AllocData_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 92 "stack_alloc.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__AllocData_20, 0) = ((MR_Box) (ll_backend__stack_alloc__ModuleInfo_5));
#line 92 "stack_alloc.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__AllocData_20, 1) = ((MR_Box) (ll_backend__stack_alloc__STATE_VARIABLE_ProcInfo_0_41));
#line 92 "stack_alloc.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__AllocData_20, 2) = ((MR_Box) (ll_backend__stack_alloc__HeadVar__2_2));
#line 92 "stack_alloc.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__AllocData_20, 3) = ((MR_Box) (ll_backend__stack_alloc__TypeInfoLiveness_15));
#line 92 "stack_alloc.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__AllocData_20, 4) = ((MR_Box) (ll_backend__stack_alloc__OptNoReturnCalls_16));
#line 92 "stack_alloc.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__AllocData_20, 5) = ((MR_Box) (ll_backend__stack_alloc__DummyTypeArray_18));
#line 92 "stack_alloc.m"
    }
#line 2626 "ll_backend.stack_alloc.c"
    ll_backend__stack_alloc__TypeCtorInfo_52_52 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 94 "stack_alloc.m"
    {
#line 94 "stack_alloc.m"
      ll_backend__stack_alloc__NondetLiveness0_21 = parse_tree__set_of_var__init_0_f_0(ll_backend__stack_alloc__TypeCtorInfo_52_52);
    }
#line 2633 "ll_backend.stack_alloc.c"
    ll_backend__stack_alloc__TypeInfo_53_53 = (MR_Word) &ll_backend__stack_alloc_scalar_common_1[1];
#line 95 "stack_alloc.m"
    {
#line 95 "stack_alloc.m"
      ll_backend__stack_alloc__V_45_45 = mercury__set__make_singleton_set_1_f_0(ll_backend__stack_alloc__TypeInfo_53_53, ((MR_Box) (ll_backend__stack_alloc__FailVars_14)));
    }
#line 95 "stack_alloc.m"
    ll_backend__stack_alloc__SimpleStackAlloc0_22 = (MR_Word) ll_backend__stack_alloc__V_45_45;
#line 96 "stack_alloc.m"
    {
#line 96 "stack_alloc.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(ll_backend__stack_alloc__STATE_VARIABLE_ProcInfo_0_41, &ll_backend__stack_alloc__Goal0_23);
    }
#line 97 "stack_alloc.m"
    {
#line 97 "stack_alloc.m"
      ll_backend__live_vars__build_live_sets_in_goal_no_par_stack_10_p_0((MR_Word) &ll_backend__stack_alloc_scalar_common_1[2], ll_backend__stack_alloc__Goal0_23, &ll_backend__stack_alloc__Goal_24, ll_backend__stack_alloc__FailVars_14, ll_backend__stack_alloc__AllocData_20, ((MR_Box) (ll_backend__stack_alloc__SimpleStackAlloc0_22)), &ll_backend__stack_alloc__conv0_SimpleStackAlloc_25, ll_backend__stack_alloc__Liveness0_10, &ll_backend__stack_alloc___Liveness_26, ll_backend__stack_alloc__NondetLiveness0_21, &ll_backend__stack_alloc___NondetLiveness_27);
    }
#line 97 "stack_alloc.m"
    ll_backend__stack_alloc__SimpleStackAlloc_25 = ((MR_Word) ll_backend__stack_alloc__conv0_SimpleStackAlloc_25);
#line 100 "stack_alloc.m"
    {
#line 100 "stack_alloc.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(ll_backend__stack_alloc__Goal_24, ll_backend__stack_alloc__STATE_VARIABLE_ProcInfo_0_41, &ll_backend__stack_alloc__STATE_VARIABLE_ProcInfo_46_46);
    }
#line 101 "stack_alloc.m"
    ll_backend__stack_alloc__LiveSets0_28 = (MR_Word) ll_backend__stack_alloc__SimpleStackAlloc_25;
#line 103 "stack_alloc.m"
    {
#line 103 "stack_alloc.m"
      ll_backend__trace_gen__do_we_need_maxfr_slot_5_p_0(ll_backend__stack_alloc__Globals_11, ll_backend__stack_alloc__ModuleInfo_5, ll_backend__stack_alloc__PredInfo_9, ll_backend__stack_alloc__STATE_VARIABLE_ProcInfo_46_46, &ll_backend__stack_alloc__STATE_VARIABLE_ProcInfo_47_47);
    }
#line 104 "stack_alloc.m"
    {
#line 104 "stack_alloc.m"
      ll_backend__trace_gen__trace_reserved_slots_6_p_0(ll_backend__stack_alloc__ModuleInfo_5, ll_backend__stack_alloc__PredInfo_9, ll_backend__stack_alloc__STATE_VARIABLE_ProcInfo_47_47, ll_backend__stack_alloc__Globals_11, &ll_backend__stack_alloc__NumReservedSlots_29, &ll_backend__stack_alloc__MaybeReservedVarInfo_30);
    }
#line 110 "stack_alloc.m"
    if ((ll_backend__stack_alloc__MaybeReservedVarInfo_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 112 "stack_alloc.m"
      ll_backend__stack_alloc__LiveSets_34 = ll_backend__stack_alloc__LiveSets0_28;
#line 110 "stack_alloc.m"
    else
#line 107 "stack_alloc.m"
      {
#line 107 "stack_alloc.m"
        MR_Word ll_backend__stack_alloc__ResVar_31;
#line 107 "stack_alloc.m"
        MR_Word ll_backend__stack_alloc__ResVarSet_33;
#line 107 "stack_alloc.m"
        MR_Word ll_backend__stack_alloc__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_alloc__MaybeReservedVarInfo_30, (MR_Integer) 0)));
#line 107 "stack_alloc.m"
        MR_Integer ll_backend__stack_alloc__V_32_32;

#line 107 "stack_alloc.m"
        ll_backend__stack_alloc__ResVar_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_48_48, (MR_Integer) 0)));
#line 107 "stack_alloc.m"
        ll_backend__stack_alloc__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_48_48, (MR_Integer) 1)));
#line 108 "stack_alloc.m"
        {
#line 108 "stack_alloc.m"
          ll_backend__stack_alloc__ResVarSet_33 = parse_tree__set_of_var__make_singleton_1_f_0(ll_backend__stack_alloc__TypeCtorInfo_52_52, ll_backend__stack_alloc__ResVar_31);
        }
#line 109 "stack_alloc.m"
        {
#line 109 "stack_alloc.m"
          mercury__set__insert_3_p_0(ll_backend__stack_alloc__TypeInfo_53_53, ((MR_Box) (ll_backend__stack_alloc__ResVarSet_33)), ll_backend__stack_alloc__LiveSets0_28, &ll_backend__stack_alloc__LiveSets_34);
        }
#line 107 "stack_alloc.m"
      }
#line 114 "stack_alloc.m"
    {
#line 114 "stack_alloc.m"
      parse_tree__set_of_var__graph_colour_group_elements_2_p_0(ll_backend__stack_alloc__TypeCtorInfo_52_52, ll_backend__stack_alloc__LiveSets_34, &ll_backend__stack_alloc__ColourSets_35);
    }
#line 115 "stack_alloc.m"
    {
#line 115 "stack_alloc.m"
      mercury__set__to_sorted_list_2_p_0(ll_backend__stack_alloc__TypeInfo_53_53, ll_backend__stack_alloc__ColourSets_35, &ll_backend__stack_alloc__ColourList_36);
    }
#line 117 "stack_alloc.m"
    {
#line 117 "stack_alloc.m"
      ll_backend__stack_alloc__CodeModel_37 = hlds__code_model__proc_info_interface_code_model_1_f_0(ll_backend__stack_alloc__STATE_VARIABLE_ProcInfo_47_47);
    }
#line 118 "stack_alloc.m"
    {
#line 118 "stack_alloc.m"
      ll_backend__stack_alloc__MainStack_38 = ll_backend__llds__code_model_to_main_stack_1_f_0(ll_backend__stack_alloc__CodeModel_37);
    }
#line 358 "stack_alloc.m"
    ll_backend__stack_alloc__succeeded = (ll_backend__stack_alloc__MainStack_38 == (MR_Integer) 0);
#line 357 "stack_alloc.m"
    if (ll_backend__stack_alloc__succeeded)
#line 357 "stack_alloc.m"
      {
#line 359 "stack_alloc.m"
        ll_backend__stack_alloc__V_72_72 = (MR_Integer) 1;
#line 359 "stack_alloc.m"
        {
#line 359 "stack_alloc.m"
          libs__globals__double_width_floats_on_det_stack_2_p_0(ll_backend__stack_alloc__Globals_11, &ll_backend__stack_alloc__V_73_73);
        }
#line 359 "stack_alloc.m"
        ll_backend__stack_alloc__succeeded = (ll_backend__stack_alloc__V_72_72 == ll_backend__stack_alloc__V_73_73);
#line 357 "stack_alloc.m"
      }
#line 223 "stack_alloc.m"
    if (ll_backend__stack_alloc__succeeded)
#line 224 "stack_alloc.m"
      {
#line 224 "stack_alloc.m"
        ll_backend__stack_alloc__MaybeDoubleWidthFloats_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 224 "stack_alloc.m"
        MR_hl_field(MR_mktag(1), ll_backend__stack_alloc__MaybeDoubleWidthFloats_62, 0) = ((MR_Box) (ll_backend__stack_alloc__VarTypes_17));
#line 224 "stack_alloc.m"
      }
#line 223 "stack_alloc.m"
    else
#line 226 "stack_alloc.m"
      ll_backend__stack_alloc__MaybeDoubleWidthFloats_62 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 230 "stack_alloc.m"
    ll_backend__stack_alloc__FirstFreeSlot_63 = (ll_backend__stack_alloc__NumReservedSlots_29 + (MR_Integer) 1);
#line 232 "stack_alloc.m"
    {
#line 232 "stack_alloc.m"
      ll_backend__stack_alloc__V_66_66 = mercury__map__init_0_f_0((MR_Word) &ll_backend__stack_alloc_scalar_common_1[0], (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0);
    }
#line 231 "stack_alloc.m"
    {
#line 231 "stack_alloc.m"
      ll_backend__stack_alloc__allocate_stack_slots_to_colours_7_p_0(ll_backend__stack_alloc__MainStack_38, ll_backend__stack_alloc__MaybeDoubleWidthFloats_62, ll_backend__stack_alloc__MaybeReservedVarInfo_30, ll_backend__stack_alloc__ColourList_36, ll_backend__stack_alloc__FirstFreeSlot_63, ll_backend__stack_alloc__V_66_66, &ll_backend__stack_alloc__StackSlots1_39);
    }
#line 121 "stack_alloc.m"
    {
#line 121 "stack_alloc.m"
      ll_backend__stack_alloc__allocate_dummy_stack_slots_5_p_0(ll_backend__stack_alloc__MainStack_38, ll_backend__stack_alloc__DummyVars_19, (MR_Integer) -1, ll_backend__stack_alloc__StackSlots1_39, &ll_backend__stack_alloc__StackSlots_40);
    }
#line 123 "stack_alloc.m"
    {
#line 123 "stack_alloc.m"
      hlds__hlds_pred__proc_info_set_stack_slots_3_p_0(ll_backend__stack_alloc__StackSlots_40, ll_backend__stack_alloc__STATE_VARIABLE_ProcInfo_47_47, ll_backend__stack_alloc__STATE_VARIABLE_ProcInfo_42);
    }
#line 73 "stack_alloc.m"
  }
#line 34 "stack_alloc.m"
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
